#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

class FDDeepCore3_3714 : public Backdrop
{
public:
    FDDeepCore3_3714(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_DeepCore 3", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15001);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fddeepcore3_3714(int x, int y)
{
    return new (Backdrop::pool.create()) FDDeepCore3_3714(x, y);
}
class FDDeepCore15_3715 : public Backdrop
{
public:
    FDDeepCore15_3715(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_DeepCore 15", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15170);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fddeepcore15_3715(int x, int y)
{
    return new (Backdrop::pool.create()) FDDeepCore15_3715(x, y);
}
class FDDeepCore16_3716 : public Backdrop
{
public:
    FDDeepCore16_3716(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_DeepCore 16", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15171);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fddeepcore16_3716(int x, int y)
{
    return new (Backdrop::pool.create()) FDDeepCore16_3716(x, y);
}
class FDDeepCore17_3717 : public Backdrop
{
public:
    FDDeepCore17_3717(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_DeepCore 17", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15178);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fddeepcore17_3717(int x, int y)
{
    return new (Backdrop::pool.create()) FDDeepCore17_3717(x, y);
}
class FDDeepCoreNoSolid1_3718 : public Backdrop
{
public:
    FDDeepCoreNoSolid1_3718(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_DeepCore_NoSolid 1", 21);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15177);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fddeepcorenosolid1_3718(int x, int y)
{
    return new (Backdrop::pool.create()) FDDeepCoreNoSolid1_3718(x, y);
}
class FDBluePipe1_3719 : public Backdrop
{
public:
    FDBluePipe1_3719(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_BluePipe 1", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15109);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdbluepipe1_3719(int x, int y)
{
    return new (Backdrop::pool.create()) FDBluePipe1_3719(x, y);
}
class FDDeepCore19_3720 : public Backdrop
{
public:
    FDDeepCore19_3720(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_DeepCore 19", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15175);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fddeepcore19_3720(int x, int y)
{
    return new (Backdrop::pool.create()) FDDeepCore19_3720(x, y);
}
class FDDeepCore20_3721 : public Backdrop
{
public:
    FDDeepCore20_3721(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_DeepCore 20", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15116);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fddeepcore20_3721(int x, int y)
{
    return new (Backdrop::pool.create()) FDDeepCore20_3721(x, y);
}
class FDDeepCore21_3722 : public Backdrop
{
public:
    FDDeepCore21_3722(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_DeepCore 21", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15174);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fddeepcore21_3722(int x, int y)
{
    return new (Backdrop::pool.create()) FDDeepCore21_3722(x, y);
}
class FDDeepCore22_3723 : public Backdrop
{
public:
    FDDeepCore22_3723(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_DeepCore 22", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15176);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fddeepcore22_3723(int x, int y)
{
    return new (Backdrop::pool.create()) FDDeepCore22_3723(x, y);
}
class FDLaserTunnelPipe_3724 : public Backdrop
{
public:
    FDLaserTunnelPipe_3724(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LaserTunnelPipe", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15208);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdlasertunnelpipe_3724(int x, int y)
{
    return new (Backdrop::pool.create()) FDLaserTunnelPipe_3724(x, y);
}
class FDLaserTunnelPipe2_3725 : public Backdrop
{
public:
    FDLaserTunnelPipe2_3725(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LaserTunnelPipe 2", 20);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15429);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdlasertunnelpipe2_3725(int x, int y)
{
    return new (Backdrop::pool.create()) FDLaserTunnelPipe2_3725(x, y);
}
class FDLaserTunnelPipe3_3726 : public Backdrop
{
public:
    FDLaserTunnelPipe3_3726(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LaserTunnelPipe 3", 20);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15430);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdlasertunnelpipe3_3726(int x, int y)
{
    return new (Backdrop::pool.create()) FDLaserTunnelPipe3_3726(x, y);
}
static Image* images_enemybeastiris_3727_0_0[7];
static Direction direction_enemybeastiris_3727_0_0 = {0, 50, 50, 1, -1, images_enemybeastiris_3727_0_0, 7};
static Image* images_enemybeastiris_3727_0_8[3];
static Direction direction_enemybeastiris_3727_0_8 = {8, 50, 50, 0, 1, images_enemybeastiris_3727_0_8, 3};
static Image* images_enemybeastiris_3727_0_16[7];
static Direction direction_enemybeastiris_3727_0_16 = {16, 50, 50, 1, -1, images_enemybeastiris_3727_0_16, 7};
static Animation anim_enemybeastiris_3727_0 = {&direction_enemybeastiris_3727_0_0, &direction_enemybeastiris_3727_0_0, &direction_enemybeastiris_3727_0_0, &direction_enemybeastiris_3727_0_0, NULL, &direction_enemybeastiris_3727_0_8, &direction_enemybeastiris_3727_0_8, &direction_enemybeastiris_3727_0_8, &direction_enemybeastiris_3727_0_8, &direction_enemybeastiris_3727_0_8, &direction_enemybeastiris_3727_0_8, &direction_enemybeastiris_3727_0_8, NULL, &direction_enemybeastiris_3727_0_16, &direction_enemybeastiris_3727_0_16, &direction_enemybeastiris_3727_0_16, &direction_enemybeastiris_3727_0_16, &direction_enemybeastiris_3727_0_16, &direction_enemybeastiris_3727_0_16, &direction_enemybeastiris_3727_0_16, &direction_enemybeastiris_3727_0_16, &direction_enemybeastiris_3727_0_16, &direction_enemybeastiris_3727_0_16, &direction_enemybeastiris_3727_0_16, NULL, &direction_enemybeastiris_3727_0_0, &direction_enemybeastiris_3727_0_0, &direction_enemybeastiris_3727_0_0, &direction_enemybeastiris_3727_0_0, &direction_enemybeastiris_3727_0_0, &direction_enemybeastiris_3727_0_0, &direction_enemybeastiris_3727_0_0};
static Image* images_enemybeastiris_3727_2_0[7];
static Direction direction_enemybeastiris_3727_2_0 = {0, 50, 50, 1, -1, images_enemybeastiris_3727_2_0, 7};
static Image* images_enemybeastiris_3727_2_16[7];
static Direction direction_enemybeastiris_3727_2_16 = {16, 50, 50, 1, -1, images_enemybeastiris_3727_2_16, 7};
static Animation anim_enemybeastiris_3727_2 = {&direction_enemybeastiris_3727_2_0, &direction_enemybeastiris_3727_2_0, &direction_enemybeastiris_3727_2_0, &direction_enemybeastiris_3727_2_0, &direction_enemybeastiris_3727_2_0, &direction_enemybeastiris_3727_2_0, &direction_enemybeastiris_3727_2_0, &direction_enemybeastiris_3727_2_0, NULL, &direction_enemybeastiris_3727_2_16, &direction_enemybeastiris_3727_2_16, &direction_enemybeastiris_3727_2_16, &direction_enemybeastiris_3727_2_16, &direction_enemybeastiris_3727_2_16, &direction_enemybeastiris_3727_2_16, &direction_enemybeastiris_3727_2_16, &direction_enemybeastiris_3727_2_16, &direction_enemybeastiris_3727_2_16, &direction_enemybeastiris_3727_2_16, &direction_enemybeastiris_3727_2_16, &direction_enemybeastiris_3727_2_16, &direction_enemybeastiris_3727_2_16, &direction_enemybeastiris_3727_2_16, &direction_enemybeastiris_3727_2_16, NULL, &direction_enemybeastiris_3727_2_0, &direction_enemybeastiris_3727_2_0, &direction_enemybeastiris_3727_2_0, &direction_enemybeastiris_3727_2_0, &direction_enemybeastiris_3727_2_0, &direction_enemybeastiris_3727_2_0, &direction_enemybeastiris_3727_2_0};
static Image* images_enemybeastiris_3727_7_0[1];
static Direction direction_enemybeastiris_3727_7_0 = {0, 50, 50, 0, -1, images_enemybeastiris_3727_7_0, 1};
static Image* images_enemybeastiris_3727_7_16[1];
static Direction direction_enemybeastiris_3727_7_16 = {16, 50, 50, 0, -1, images_enemybeastiris_3727_7_16, 1};
static Animation anim_enemybeastiris_3727_7 = {&direction_enemybeastiris_3727_7_0, &direction_enemybeastiris_3727_7_0, &direction_enemybeastiris_3727_7_0, &direction_enemybeastiris_3727_7_0, &direction_enemybeastiris_3727_7_0, &direction_enemybeastiris_3727_7_0, &direction_enemybeastiris_3727_7_0, &direction_enemybeastiris_3727_7_0, NULL, &direction_enemybeastiris_3727_7_16, &direction_enemybeastiris_3727_7_16, &direction_enemybeastiris_3727_7_16, &direction_enemybeastiris_3727_7_16, &direction_enemybeastiris_3727_7_16, &direction_enemybeastiris_3727_7_16, &direction_enemybeastiris_3727_7_16, &direction_enemybeastiris_3727_7_16, &direction_enemybeastiris_3727_7_16, &direction_enemybeastiris_3727_7_16, &direction_enemybeastiris_3727_7_16, &direction_enemybeastiris_3727_7_16, &direction_enemybeastiris_3727_7_16, &direction_enemybeastiris_3727_7_16, &direction_enemybeastiris_3727_7_16, NULL, &direction_enemybeastiris_3727_7_0, &direction_enemybeastiris_3727_7_0, &direction_enemybeastiris_3727_7_0, &direction_enemybeastiris_3727_7_0, &direction_enemybeastiris_3727_7_0, &direction_enemybeastiris_3727_7_0, &direction_enemybeastiris_3727_7_0};
static Image* images_enemybeastiris_3727_8_0[1];
static Direction direction_enemybeastiris_3727_8_0 = {0, 50, 50, 0, 1, images_enemybeastiris_3727_8_0, 1};
static Animation anim_enemybeastiris_3727_8 = {&direction_enemybeastiris_3727_8_0, &direction_enemybeastiris_3727_8_0, &direction_enemybeastiris_3727_8_0, &direction_enemybeastiris_3727_8_0, &direction_enemybeastiris_3727_8_0, &direction_enemybeastiris_3727_8_0, &direction_enemybeastiris_3727_8_0, &direction_enemybeastiris_3727_8_0, &direction_enemybeastiris_3727_8_0, &direction_enemybeastiris_3727_8_0, &direction_enemybeastiris_3727_8_0, &direction_enemybeastiris_3727_8_0, &direction_enemybeastiris_3727_8_0, &direction_enemybeastiris_3727_8_0, &direction_enemybeastiris_3727_8_0, &direction_enemybeastiris_3727_8_0, NULL, &direction_enemybeastiris_3727_8_0, &direction_enemybeastiris_3727_8_0, &direction_enemybeastiris_3727_8_0, &direction_enemybeastiris_3727_8_0, &direction_enemybeastiris_3727_8_0, &direction_enemybeastiris_3727_8_0, &direction_enemybeastiris_3727_8_0, &direction_enemybeastiris_3727_8_0, &direction_enemybeastiris_3727_8_0, &direction_enemybeastiris_3727_8_0, &direction_enemybeastiris_3727_8_0, &direction_enemybeastiris_3727_8_0, &direction_enemybeastiris_3727_8_0, &direction_enemybeastiris_3727_8_0, &direction_enemybeastiris_3727_8_0};
static Image* images_enemybeastiris_3727_10_0[19];
static Direction direction_enemybeastiris_3727_10_0 = {0, 35, 35, 0, 1, images_enemybeastiris_3727_10_0, 19};
static Image* images_enemybeastiris_3727_10_8[1];
static Direction direction_enemybeastiris_3727_10_8 = {8, 50, 50, 0, 1, images_enemybeastiris_3727_10_8, 1};
static Image* images_enemybeastiris_3727_10_16[19];
static Direction direction_enemybeastiris_3727_10_16 = {16, 35, 35, 0, 1, images_enemybeastiris_3727_10_16, 19};
static Animation anim_enemybeastiris_3727_10 = {&direction_enemybeastiris_3727_10_0, &direction_enemybeastiris_3727_10_0, &direction_enemybeastiris_3727_10_0, &direction_enemybeastiris_3727_10_0, NULL, &direction_enemybeastiris_3727_10_8, &direction_enemybeastiris_3727_10_8, &direction_enemybeastiris_3727_10_8, &direction_enemybeastiris_3727_10_8, &direction_enemybeastiris_3727_10_8, &direction_enemybeastiris_3727_10_8, &direction_enemybeastiris_3727_10_8, NULL, &direction_enemybeastiris_3727_10_16, &direction_enemybeastiris_3727_10_16, &direction_enemybeastiris_3727_10_16, &direction_enemybeastiris_3727_10_16, &direction_enemybeastiris_3727_10_16, &direction_enemybeastiris_3727_10_16, &direction_enemybeastiris_3727_10_16, &direction_enemybeastiris_3727_10_16, &direction_enemybeastiris_3727_10_16, &direction_enemybeastiris_3727_10_16, &direction_enemybeastiris_3727_10_16, NULL, &direction_enemybeastiris_3727_10_0, &direction_enemybeastiris_3727_10_0, &direction_enemybeastiris_3727_10_0, &direction_enemybeastiris_3727_10_0, &direction_enemybeastiris_3727_10_0, &direction_enemybeastiris_3727_10_0, &direction_enemybeastiris_3727_10_0};
static Animation * anim_array_enemybeastiris_3727[11] = {&anim_enemybeastiris_3727_0, NULL, &anim_enemybeastiris_3727_2, NULL, NULL, NULL, NULL, &anim_enemybeastiris_3727_7, &anim_enemybeastiris_3727_8, NULL, &anim_enemybeastiris_3727_10};
static Animations anim_enemybeastiris_3727 = {11, &anim_array_enemybeastiris_3727[0]};
static bool anim_enemybeastiris_3727_initialized;
class EnemyBeastIris_3727 : public Active
{
public:
    EnemyBeastIris_3727(int x, int y) : Active(x, y, EnemyBeastIris_3727_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_BeastIris", 15);
#endif
        this->animations = &anim_enemybeastiris_3727;
        if (!anim_enemybeastiris_3727_initialized) {
            anim_enemybeastiris_3727_initialized = true;
            images_enemybeastiris_3727_0_0[0] = get_internal_image(14012);
            images_enemybeastiris_3727_0_0[1] = get_internal_image(14016);
            images_enemybeastiris_3727_0_0[2] = get_internal_image(14013);
            images_enemybeastiris_3727_0_0[3] = get_internal_image(14014);
            images_enemybeastiris_3727_0_0[4] = get_internal_image(14015);
            images_enemybeastiris_3727_0_0[5] = get_internal_image(14017);
            images_enemybeastiris_3727_0_0[6] = get_internal_image(14018);
            images_enemybeastiris_3727_0_8[0] = get_internal_image(13976);
            images_enemybeastiris_3727_0_8[1] = get_internal_image(13983);
            images_enemybeastiris_3727_0_8[2] = get_internal_image(14026);
            images_enemybeastiris_3727_0_16[0] = get_internal_image(14019);
            images_enemybeastiris_3727_0_16[1] = get_internal_image(14020);
            images_enemybeastiris_3727_0_16[2] = get_internal_image(14021);
            images_enemybeastiris_3727_0_16[3] = get_internal_image(14022);
            images_enemybeastiris_3727_0_16[4] = get_internal_image(14023);
            images_enemybeastiris_3727_0_16[5] = get_internal_image(14024);
            images_enemybeastiris_3727_0_16[6] = get_internal_image(14025);
            images_enemybeastiris_3727_2_0[0] = get_internal_image(13995);
            images_enemybeastiris_3727_2_0[1] = get_internal_image(13994);
            images_enemybeastiris_3727_2_0[2] = get_internal_image(13996);
            images_enemybeastiris_3727_2_0[3] = get_internal_image(13997);
            images_enemybeastiris_3727_2_0[4] = get_internal_image(13998);
            images_enemybeastiris_3727_2_0[5] = get_internal_image(13999);
            images_enemybeastiris_3727_2_0[6] = get_internal_image(14000);
            images_enemybeastiris_3727_2_16[0] = get_internal_image(14001);
            images_enemybeastiris_3727_2_16[1] = get_internal_image(14008);
            images_enemybeastiris_3727_2_16[2] = get_internal_image(14011);
            images_enemybeastiris_3727_2_16[3] = get_internal_image(14052);
            images_enemybeastiris_3727_2_16[4] = get_internal_image(14053);
            images_enemybeastiris_3727_2_16[5] = get_internal_image(14054);
            images_enemybeastiris_3727_2_16[6] = get_internal_image(14055);
            images_enemybeastiris_3727_7_0[0] = get_internal_image(14002);
            images_enemybeastiris_3727_7_16[0] = get_internal_image(14004);
            images_enemybeastiris_3727_8_0[0] = get_internal_image(14003);
            images_enemybeastiris_3727_10_0[0] = get_internal_image(14012);
            images_enemybeastiris_3727_10_0[1] = get_internal_image(14012);
            images_enemybeastiris_3727_10_0[2] = get_internal_image(14037);
            images_enemybeastiris_3727_10_0[3] = get_internal_image(14041);
            images_enemybeastiris_3727_10_0[4] = get_internal_image(14042);
            images_enemybeastiris_3727_10_0[5] = get_internal_image(14043);
            images_enemybeastiris_3727_10_0[6] = get_internal_image(14044);
            images_enemybeastiris_3727_10_0[7] = get_internal_image(14045);
            images_enemybeastiris_3727_10_0[8] = get_internal_image(14046);
            images_enemybeastiris_3727_10_0[9] = get_internal_image(14047);
            images_enemybeastiris_3727_10_0[10] = get_internal_image(14047);
            images_enemybeastiris_3727_10_0[11] = get_internal_image(14047);
            images_enemybeastiris_3727_10_0[12] = get_internal_image(14047);
            images_enemybeastiris_3727_10_0[13] = get_internal_image(13988);
            images_enemybeastiris_3727_10_0[14] = get_internal_image(14048);
            images_enemybeastiris_3727_10_0[15] = get_internal_image(14049);
            images_enemybeastiris_3727_10_0[16] = get_internal_image(14050);
            images_enemybeastiris_3727_10_0[17] = get_internal_image(14051);
            images_enemybeastiris_3727_10_0[18] = get_internal_image(14042);
            images_enemybeastiris_3727_10_8[0] = get_internal_image(14028);
            images_enemybeastiris_3727_10_16[0] = get_internal_image(14019);
            images_enemybeastiris_3727_10_16[1] = get_internal_image(14019);
            images_enemybeastiris_3727_10_16[2] = get_internal_image(14031);
            images_enemybeastiris_3727_10_16[3] = get_internal_image(14036);
            images_enemybeastiris_3727_10_16[4] = get_internal_image(14027);
            images_enemybeastiris_3727_10_16[5] = get_internal_image(14029);
            images_enemybeastiris_3727_10_16[6] = get_internal_image(14032);
            images_enemybeastiris_3727_10_16[7] = get_internal_image(14034);
            images_enemybeastiris_3727_10_16[8] = get_internal_image(14033);
            images_enemybeastiris_3727_10_16[9] = get_internal_image(14030);
            images_enemybeastiris_3727_10_16[10] = get_internal_image(14030);
            images_enemybeastiris_3727_10_16[11] = get_internal_image(14030);
            images_enemybeastiris_3727_10_16[12] = get_internal_image(14030);
            images_enemybeastiris_3727_10_16[13] = get_internal_image(13986);
            images_enemybeastiris_3727_10_16[14] = get_internal_image(14040);
            images_enemybeastiris_3727_10_16[15] = get_internal_image(14038);
            images_enemybeastiris_3727_10_16[16] = get_internal_image(14039);
            images_enemybeastiris_3727_10_16[17] = get_internal_image(14035);
            images_enemybeastiris_3727_10_16[18] = get_internal_image(14027);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 10);
        alterables->values.set(3, 1925);
        alterables->values.set(5, -6);
        alterables->values.set(6, 1);
    }
};
FrameObject * create_enemybeastiris_3727(int x, int y)
{
    return new (Active::pool.create()) EnemyBeastIris_3727(x, y);
}
static Image* images_fdlasertunnelplatform_3728_0_0[1];
static Direction direction_fdlasertunnelplatform_3728_0_0 = {0, 50, 50, 0, 1, images_fdlasertunnelplatform_3728_0_0, 1};
static Animation anim_fdlasertunnelplatform_3728_0 = {&direction_fdlasertunnelplatform_3728_0_0, &direction_fdlasertunnelplatform_3728_0_0, &direction_fdlasertunnelplatform_3728_0_0, &direction_fdlasertunnelplatform_3728_0_0, &direction_fdlasertunnelplatform_3728_0_0, &direction_fdlasertunnelplatform_3728_0_0, &direction_fdlasertunnelplatform_3728_0_0, &direction_fdlasertunnelplatform_3728_0_0, &direction_fdlasertunnelplatform_3728_0_0, &direction_fdlasertunnelplatform_3728_0_0, &direction_fdlasertunnelplatform_3728_0_0, &direction_fdlasertunnelplatform_3728_0_0, &direction_fdlasertunnelplatform_3728_0_0, &direction_fdlasertunnelplatform_3728_0_0, &direction_fdlasertunnelplatform_3728_0_0, &direction_fdlasertunnelplatform_3728_0_0, NULL, &direction_fdlasertunnelplatform_3728_0_0, &direction_fdlasertunnelplatform_3728_0_0, &direction_fdlasertunnelplatform_3728_0_0, &direction_fdlasertunnelplatform_3728_0_0, &direction_fdlasertunnelplatform_3728_0_0, &direction_fdlasertunnelplatform_3728_0_0, &direction_fdlasertunnelplatform_3728_0_0, &direction_fdlasertunnelplatform_3728_0_0, &direction_fdlasertunnelplatform_3728_0_0, &direction_fdlasertunnelplatform_3728_0_0, &direction_fdlasertunnelplatform_3728_0_0, &direction_fdlasertunnelplatform_3728_0_0, &direction_fdlasertunnelplatform_3728_0_0, &direction_fdlasertunnelplatform_3728_0_0, &direction_fdlasertunnelplatform_3728_0_0};
static Animation * anim_array_fdlasertunnelplatform_3728[1] = {&anim_fdlasertunnelplatform_3728_0};
static Animations anim_fdlasertunnelplatform_3728 = {1, &anim_array_fdlasertunnelplatform_3728[0]};
static bool anim_fdlasertunnelplatform_3728_initialized;
class FDLaserTunnelPlatform_3728 : public Active
{
public:
    FDLaserTunnelPlatform_3728(int x, int y) : Active(x, y, FDLaserTunnelPlatform_3728_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("FD_LaserTunnelPlatform", 22);
#endif
        this->animations = &anim_fdlasertunnelplatform_3728;
        if (!anim_fdlasertunnelplatform_3728_initialized) {
            anim_fdlasertunnelplatform_3728_initialized = true;
            images_fdlasertunnelplatform_3728_0_0[0] = get_internal_image(15226);
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
FrameObject * create_fdlasertunnelplatform_3728(int x, int y)
{
    return new (Active::pool.create()) FDLaserTunnelPlatform_3728(x, y);
}
static Image* images_enemyspiderbeamer_3729_0_0[1];
static Direction direction_enemyspiderbeamer_3729_0_0 = {0, 50, 50, 0, 1, images_enemyspiderbeamer_3729_0_0, 1};
static Image* images_enemyspiderbeamer_3729_0_8[1];
static Direction direction_enemyspiderbeamer_3729_0_8 = {8, 50, 50, 0, 1, images_enemyspiderbeamer_3729_0_8, 1};
static Image* images_enemyspiderbeamer_3729_0_16[1];
static Direction direction_enemyspiderbeamer_3729_0_16 = {16, 50, 50, 0, 1, images_enemyspiderbeamer_3729_0_16, 1};
static Image* images_enemyspiderbeamer_3729_0_24[1];
static Direction direction_enemyspiderbeamer_3729_0_24 = {24, 50, 50, 0, 1, images_enemyspiderbeamer_3729_0_24, 1};
static Animation anim_enemyspiderbeamer_3729_0 = {&direction_enemyspiderbeamer_3729_0_0, &direction_enemyspiderbeamer_3729_0_0, &direction_enemyspiderbeamer_3729_0_0, &direction_enemyspiderbeamer_3729_0_0, NULL, &direction_enemyspiderbeamer_3729_0_8, &direction_enemyspiderbeamer_3729_0_8, &direction_enemyspiderbeamer_3729_0_8, &direction_enemyspiderbeamer_3729_0_8, &direction_enemyspiderbeamer_3729_0_8, &direction_enemyspiderbeamer_3729_0_8, &direction_enemyspiderbeamer_3729_0_8, NULL, &direction_enemyspiderbeamer_3729_0_16, &direction_enemyspiderbeamer_3729_0_16, &direction_enemyspiderbeamer_3729_0_16, &direction_enemyspiderbeamer_3729_0_16, &direction_enemyspiderbeamer_3729_0_16, &direction_enemyspiderbeamer_3729_0_16, &direction_enemyspiderbeamer_3729_0_16, NULL, &direction_enemyspiderbeamer_3729_0_24, &direction_enemyspiderbeamer_3729_0_24, &direction_enemyspiderbeamer_3729_0_24, &direction_enemyspiderbeamer_3729_0_24, &direction_enemyspiderbeamer_3729_0_24, &direction_enemyspiderbeamer_3729_0_24, &direction_enemyspiderbeamer_3729_0_24, NULL, &direction_enemyspiderbeamer_3729_0_0, &direction_enemyspiderbeamer_3729_0_0, &direction_enemyspiderbeamer_3729_0_0};
static Image* images_enemyspiderbeamer_3729_10_0[1];
static Direction direction_enemyspiderbeamer_3729_10_0 = {0, 50, 50, 0, -1, images_enemyspiderbeamer_3729_10_0, 1};
static Image* images_enemyspiderbeamer_3729_10_8[1];
static Direction direction_enemyspiderbeamer_3729_10_8 = {8, 50, 50, 0, -1, images_enemyspiderbeamer_3729_10_8, 1};
static Image* images_enemyspiderbeamer_3729_10_16[1];
static Direction direction_enemyspiderbeamer_3729_10_16 = {16, 50, 50, 0, -1, images_enemyspiderbeamer_3729_10_16, 1};
static Image* images_enemyspiderbeamer_3729_10_24[1];
static Direction direction_enemyspiderbeamer_3729_10_24 = {24, 50, 50, 0, -1, images_enemyspiderbeamer_3729_10_24, 1};
static Animation anim_enemyspiderbeamer_3729_10 = {&direction_enemyspiderbeamer_3729_10_0, &direction_enemyspiderbeamer_3729_10_0, &direction_enemyspiderbeamer_3729_10_0, &direction_enemyspiderbeamer_3729_10_0, NULL, &direction_enemyspiderbeamer_3729_10_8, &direction_enemyspiderbeamer_3729_10_8, &direction_enemyspiderbeamer_3729_10_8, &direction_enemyspiderbeamer_3729_10_8, &direction_enemyspiderbeamer_3729_10_8, &direction_enemyspiderbeamer_3729_10_8, &direction_enemyspiderbeamer_3729_10_8, NULL, &direction_enemyspiderbeamer_3729_10_16, &direction_enemyspiderbeamer_3729_10_16, &direction_enemyspiderbeamer_3729_10_16, &direction_enemyspiderbeamer_3729_10_16, &direction_enemyspiderbeamer_3729_10_16, &direction_enemyspiderbeamer_3729_10_16, &direction_enemyspiderbeamer_3729_10_16, NULL, &direction_enemyspiderbeamer_3729_10_24, &direction_enemyspiderbeamer_3729_10_24, &direction_enemyspiderbeamer_3729_10_24, &direction_enemyspiderbeamer_3729_10_24, &direction_enemyspiderbeamer_3729_10_24, &direction_enemyspiderbeamer_3729_10_24, &direction_enemyspiderbeamer_3729_10_24, NULL, &direction_enemyspiderbeamer_3729_10_0, &direction_enemyspiderbeamer_3729_10_0, &direction_enemyspiderbeamer_3729_10_0};
static Image* images_enemyspiderbeamer_3729_11_0[25];
static Direction direction_enemyspiderbeamer_3729_11_0 = {0, 50, 50, 22, -1, images_enemyspiderbeamer_3729_11_0, 25};
static Image* images_enemyspiderbeamer_3729_11_8[25];
static Direction direction_enemyspiderbeamer_3729_11_8 = {8, 50, 50, 22, -1, images_enemyspiderbeamer_3729_11_8, 25};
static Image* images_enemyspiderbeamer_3729_11_16[25];
static Direction direction_enemyspiderbeamer_3729_11_16 = {16, 50, 50, 22, -1, images_enemyspiderbeamer_3729_11_16, 25};
static Image* images_enemyspiderbeamer_3729_11_24[25];
static Direction direction_enemyspiderbeamer_3729_11_24 = {24, 50, 50, 22, -1, images_enemyspiderbeamer_3729_11_24, 25};
static Animation anim_enemyspiderbeamer_3729_11 = {&direction_enemyspiderbeamer_3729_11_0, &direction_enemyspiderbeamer_3729_11_0, &direction_enemyspiderbeamer_3729_11_0, &direction_enemyspiderbeamer_3729_11_0, NULL, &direction_enemyspiderbeamer_3729_11_8, &direction_enemyspiderbeamer_3729_11_8, &direction_enemyspiderbeamer_3729_11_8, &direction_enemyspiderbeamer_3729_11_8, &direction_enemyspiderbeamer_3729_11_8, &direction_enemyspiderbeamer_3729_11_8, &direction_enemyspiderbeamer_3729_11_8, NULL, &direction_enemyspiderbeamer_3729_11_16, &direction_enemyspiderbeamer_3729_11_16, &direction_enemyspiderbeamer_3729_11_16, &direction_enemyspiderbeamer_3729_11_16, &direction_enemyspiderbeamer_3729_11_16, &direction_enemyspiderbeamer_3729_11_16, &direction_enemyspiderbeamer_3729_11_16, NULL, &direction_enemyspiderbeamer_3729_11_24, &direction_enemyspiderbeamer_3729_11_24, &direction_enemyspiderbeamer_3729_11_24, &direction_enemyspiderbeamer_3729_11_24, &direction_enemyspiderbeamer_3729_11_24, &direction_enemyspiderbeamer_3729_11_24, &direction_enemyspiderbeamer_3729_11_24, NULL, &direction_enemyspiderbeamer_3729_11_0, &direction_enemyspiderbeamer_3729_11_0, &direction_enemyspiderbeamer_3729_11_0};
static Animation * anim_array_enemyspiderbeamer_3729[12] = {&anim_enemyspiderbeamer_3729_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemyspiderbeamer_3729_10, &anim_enemyspiderbeamer_3729_11};
static Animations anim_enemyspiderbeamer_3729 = {12, &anim_array_enemyspiderbeamer_3729[0]};
static bool anim_enemyspiderbeamer_3729_initialized;
class EnemySpiderBeamer_3729 : public Active
{
public:
    EnemySpiderBeamer_3729(int x, int y) : Active(x, y, EnemySpiderBeamer_3729_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_SpiderBeamer", 18);
#endif
        set_visible(false);
        this->animations = &anim_enemyspiderbeamer_3729;
        if (!anim_enemyspiderbeamer_3729_initialized) {
            anim_enemyspiderbeamer_3729_initialized = true;
            images_enemyspiderbeamer_3729_0_0[0] = get_internal_image(9231);
            images_enemyspiderbeamer_3729_0_8[0] = get_internal_image(15590);
            images_enemyspiderbeamer_3729_0_16[0] = get_internal_image(15613);
            images_enemyspiderbeamer_3729_0_24[0] = get_internal_image(9186);
            images_enemyspiderbeamer_3729_10_0[0] = get_internal_image(15615);
            images_enemyspiderbeamer_3729_10_8[0] = get_internal_image(15616);
            images_enemyspiderbeamer_3729_10_16[0] = get_internal_image(15617);
            images_enemyspiderbeamer_3729_10_24[0] = get_internal_image(15614);
            images_enemyspiderbeamer_3729_11_0[0] = get_internal_image(9188);
            images_enemyspiderbeamer_3729_11_0[1] = get_internal_image(9210);
            images_enemyspiderbeamer_3729_11_0[2] = get_internal_image(9211);
            images_enemyspiderbeamer_3729_11_0[3] = get_internal_image(9212);
            images_enemyspiderbeamer_3729_11_0[4] = get_internal_image(9213);
            images_enemyspiderbeamer_3729_11_0[5] = get_internal_image(9214);
            images_enemyspiderbeamer_3729_11_0[6] = get_internal_image(9215);
            images_enemyspiderbeamer_3729_11_0[7] = get_internal_image(9216);
            images_enemyspiderbeamer_3729_11_0[8] = get_internal_image(9217);
            images_enemyspiderbeamer_3729_11_0[9] = get_internal_image(9218);
            images_enemyspiderbeamer_3729_11_0[10] = get_internal_image(9219);
            images_enemyspiderbeamer_3729_11_0[11] = get_internal_image(9220);
            images_enemyspiderbeamer_3729_11_0[12] = get_internal_image(9221);
            images_enemyspiderbeamer_3729_11_0[13] = get_internal_image(9222);
            images_enemyspiderbeamer_3729_11_0[14] = get_internal_image(9223);
            images_enemyspiderbeamer_3729_11_0[15] = get_internal_image(9224);
            images_enemyspiderbeamer_3729_11_0[16] = get_internal_image(9225);
            images_enemyspiderbeamer_3729_11_0[17] = get_internal_image(9226);
            images_enemyspiderbeamer_3729_11_0[18] = get_internal_image(9225);
            images_enemyspiderbeamer_3729_11_0[19] = get_internal_image(9227);
            images_enemyspiderbeamer_3729_11_0[20] = get_internal_image(9228);
            images_enemyspiderbeamer_3729_11_0[21] = get_internal_image(9229);
            images_enemyspiderbeamer_3729_11_0[22] = get_internal_image(9228);
            images_enemyspiderbeamer_3729_11_0[23] = get_internal_image(9230);
            images_enemyspiderbeamer_3729_11_0[24] = get_internal_image(9231);
            images_enemyspiderbeamer_3729_11_8[0] = get_internal_image(9232);
            images_enemyspiderbeamer_3729_11_8[1] = get_internal_image(9233);
            images_enemyspiderbeamer_3729_11_8[2] = get_internal_image(9234);
            images_enemyspiderbeamer_3729_11_8[3] = get_internal_image(9235);
            images_enemyspiderbeamer_3729_11_8[4] = get_internal_image(9236);
            images_enemyspiderbeamer_3729_11_8[5] = get_internal_image(9237);
            images_enemyspiderbeamer_3729_11_8[6] = get_internal_image(9238);
            images_enemyspiderbeamer_3729_11_8[7] = get_internal_image(9239);
            images_enemyspiderbeamer_3729_11_8[8] = get_internal_image(9240);
            images_enemyspiderbeamer_3729_11_8[9] = get_internal_image(9241);
            images_enemyspiderbeamer_3729_11_8[10] = get_internal_image(9242);
            images_enemyspiderbeamer_3729_11_8[11] = get_internal_image(9243);
            images_enemyspiderbeamer_3729_11_8[12] = get_internal_image(9244);
            images_enemyspiderbeamer_3729_11_8[13] = get_internal_image(15474);
            images_enemyspiderbeamer_3729_11_8[14] = get_internal_image(15475);
            images_enemyspiderbeamer_3729_11_8[15] = get_internal_image(15476);
            images_enemyspiderbeamer_3729_11_8[16] = get_internal_image(15481);
            images_enemyspiderbeamer_3729_11_8[17] = get_internal_image(15482);
            images_enemyspiderbeamer_3729_11_8[18] = get_internal_image(15481);
            images_enemyspiderbeamer_3729_11_8[19] = get_internal_image(15483);
            images_enemyspiderbeamer_3729_11_8[20] = get_internal_image(15484);
            images_enemyspiderbeamer_3729_11_8[21] = get_internal_image(15489);
            images_enemyspiderbeamer_3729_11_8[22] = get_internal_image(15484);
            images_enemyspiderbeamer_3729_11_8[23] = get_internal_image(15589);
            images_enemyspiderbeamer_3729_11_8[24] = get_internal_image(15590);
            images_enemyspiderbeamer_3729_11_16[0] = get_internal_image(15591);
            images_enemyspiderbeamer_3729_11_16[1] = get_internal_image(15592);
            images_enemyspiderbeamer_3729_11_16[2] = get_internal_image(15593);
            images_enemyspiderbeamer_3729_11_16[3] = get_internal_image(15594);
            images_enemyspiderbeamer_3729_11_16[4] = get_internal_image(15595);
            images_enemyspiderbeamer_3729_11_16[5] = get_internal_image(15596);
            images_enemyspiderbeamer_3729_11_16[6] = get_internal_image(15597);
            images_enemyspiderbeamer_3729_11_16[7] = get_internal_image(15598);
            images_enemyspiderbeamer_3729_11_16[8] = get_internal_image(15599);
            images_enemyspiderbeamer_3729_11_16[9] = get_internal_image(15600);
            images_enemyspiderbeamer_3729_11_16[10] = get_internal_image(15601);
            images_enemyspiderbeamer_3729_11_16[11] = get_internal_image(15602);
            images_enemyspiderbeamer_3729_11_16[12] = get_internal_image(15603);
            images_enemyspiderbeamer_3729_11_16[13] = get_internal_image(15604);
            images_enemyspiderbeamer_3729_11_16[14] = get_internal_image(15605);
            images_enemyspiderbeamer_3729_11_16[15] = get_internal_image(15606);
            images_enemyspiderbeamer_3729_11_16[16] = get_internal_image(15607);
            images_enemyspiderbeamer_3729_11_16[17] = get_internal_image(15608);
            images_enemyspiderbeamer_3729_11_16[18] = get_internal_image(15607);
            images_enemyspiderbeamer_3729_11_16[19] = get_internal_image(15609);
            images_enemyspiderbeamer_3729_11_16[20] = get_internal_image(15610);
            images_enemyspiderbeamer_3729_11_16[21] = get_internal_image(15611);
            images_enemyspiderbeamer_3729_11_16[22] = get_internal_image(15610);
            images_enemyspiderbeamer_3729_11_16[23] = get_internal_image(15612);
            images_enemyspiderbeamer_3729_11_16[24] = get_internal_image(15613);
            images_enemyspiderbeamer_3729_11_24[0] = get_internal_image(9187);
            images_enemyspiderbeamer_3729_11_24[1] = get_internal_image(9189);
            images_enemyspiderbeamer_3729_11_24[2] = get_internal_image(9190);
            images_enemyspiderbeamer_3729_11_24[3] = get_internal_image(9191);
            images_enemyspiderbeamer_3729_11_24[4] = get_internal_image(9192);
            images_enemyspiderbeamer_3729_11_24[5] = get_internal_image(9193);
            images_enemyspiderbeamer_3729_11_24[6] = get_internal_image(9194);
            images_enemyspiderbeamer_3729_11_24[7] = get_internal_image(9195);
            images_enemyspiderbeamer_3729_11_24[8] = get_internal_image(9196);
            images_enemyspiderbeamer_3729_11_24[9] = get_internal_image(9197);
            images_enemyspiderbeamer_3729_11_24[10] = get_internal_image(9198);
            images_enemyspiderbeamer_3729_11_24[11] = get_internal_image(9199);
            images_enemyspiderbeamer_3729_11_24[12] = get_internal_image(9200);
            images_enemyspiderbeamer_3729_11_24[13] = get_internal_image(9201);
            images_enemyspiderbeamer_3729_11_24[14] = get_internal_image(9202);
            images_enemyspiderbeamer_3729_11_24[15] = get_internal_image(9203);
            images_enemyspiderbeamer_3729_11_24[16] = get_internal_image(9204);
            images_enemyspiderbeamer_3729_11_24[17] = get_internal_image(9209);
            images_enemyspiderbeamer_3729_11_24[18] = get_internal_image(9204);
            images_enemyspiderbeamer_3729_11_24[19] = get_internal_image(9205);
            images_enemyspiderbeamer_3729_11_24[20] = get_internal_image(9206);
            images_enemyspiderbeamer_3729_11_24[21] = get_internal_image(9208);
            images_enemyspiderbeamer_3729_11_24[22] = get_internal_image(9206);
            images_enemyspiderbeamer_3729_11_24[23] = get_internal_image(9207);
            images_enemyspiderbeamer_3729_11_24[24] = get_internal_image(9186);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(16);
        create_alterables();
        alterables->values.set(0, 15);
    }
};
FrameObject * create_enemyspiderbeamer_3729(int x, int y)
{
    return new (Active::pool.create()) EnemySpiderBeamer_3729(x, y);
}
static Image* images_hazardspikesleft_3730_0_0[1];
static Direction direction_hazardspikesleft_3730_0_0 = {0, 50, 50, 0, 1, images_hazardspikesleft_3730_0_0, 1};
static Animation anim_hazardspikesleft_3730_0 = {&direction_hazardspikesleft_3730_0_0, &direction_hazardspikesleft_3730_0_0, &direction_hazardspikesleft_3730_0_0, &direction_hazardspikesleft_3730_0_0, &direction_hazardspikesleft_3730_0_0, &direction_hazardspikesleft_3730_0_0, &direction_hazardspikesleft_3730_0_0, &direction_hazardspikesleft_3730_0_0, &direction_hazardspikesleft_3730_0_0, &direction_hazardspikesleft_3730_0_0, &direction_hazardspikesleft_3730_0_0, &direction_hazardspikesleft_3730_0_0, &direction_hazardspikesleft_3730_0_0, &direction_hazardspikesleft_3730_0_0, &direction_hazardspikesleft_3730_0_0, &direction_hazardspikesleft_3730_0_0, NULL, &direction_hazardspikesleft_3730_0_0, &direction_hazardspikesleft_3730_0_0, &direction_hazardspikesleft_3730_0_0, &direction_hazardspikesleft_3730_0_0, &direction_hazardspikesleft_3730_0_0, &direction_hazardspikesleft_3730_0_0, &direction_hazardspikesleft_3730_0_0, &direction_hazardspikesleft_3730_0_0, &direction_hazardspikesleft_3730_0_0, &direction_hazardspikesleft_3730_0_0, &direction_hazardspikesleft_3730_0_0, &direction_hazardspikesleft_3730_0_0, &direction_hazardspikesleft_3730_0_0, &direction_hazardspikesleft_3730_0_0, &direction_hazardspikesleft_3730_0_0};
static Animation * anim_array_hazardspikesleft_3730[1] = {&anim_hazardspikesleft_3730_0};
static Animations anim_hazardspikesleft_3730 = {1, &anim_array_hazardspikesleft_3730[0]};
static bool anim_hazardspikesleft_3730_initialized;
class HazardSpikesLeft_3730 : public Active
{
public:
    HazardSpikesLeft_3730(int x, int y) : Active(x, y, HazardSpikesLeft_3730_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Left", 18);
#endif
        this->animations = &anim_hazardspikesleft_3730;
        if (!anim_hazardspikesleft_3730_initialized) {
            anim_hazardspikesleft_3730_initialized = true;
            images_hazardspikesleft_3730_0_0[0] = get_internal_image(5390);
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
FrameObject * create_hazardspikesleft_3730(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesLeft_3730(x, y);
}
class FDLaserTunnelGlass1_3731 : public Backdrop
{
public:
    FDLaserTunnelGlass1_3731(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LaserTunnelGlass 1", 21);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15212);
        width = image->width;
        height = image->height;
        set_shader(Render::ADDITIVE);
    }
};
FrameObject * create_fdlasertunnelglass1_3731(int x, int y)
{
    return new (Backdrop::pool.create()) FDLaserTunnelGlass1_3731(x, y);
}
class FDLaserTunnelGlass2_3732 : public Backdrop
{
public:
    FDLaserTunnelGlass2_3732(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LaserTunnelGlass 2", 21);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15223);
        width = image->width;
        height = image->height;
        set_shader(Render::ADDITIVE);
    }
};
FrameObject * create_fdlasertunnelglass2_3732(int x, int y)
{
    return new (Backdrop::pool.create()) FDLaserTunnelGlass2_3732(x, y);
}
static Image* images_hazardlasertunnelglass1_3733_0_0[1];
static Direction direction_hazardlasertunnelglass1_3733_0_0 = {0, 50, 50, 0, 1, images_hazardlasertunnelglass1_3733_0_0, 1};
static Animation anim_hazardlasertunnelglass1_3733_0 = {&direction_hazardlasertunnelglass1_3733_0_0, &direction_hazardlasertunnelglass1_3733_0_0, &direction_hazardlasertunnelglass1_3733_0_0, &direction_hazardlasertunnelglass1_3733_0_0, &direction_hazardlasertunnelglass1_3733_0_0, &direction_hazardlasertunnelglass1_3733_0_0, &direction_hazardlasertunnelglass1_3733_0_0, &direction_hazardlasertunnelglass1_3733_0_0, &direction_hazardlasertunnelglass1_3733_0_0, &direction_hazardlasertunnelglass1_3733_0_0, &direction_hazardlasertunnelglass1_3733_0_0, &direction_hazardlasertunnelglass1_3733_0_0, &direction_hazardlasertunnelglass1_3733_0_0, &direction_hazardlasertunnelglass1_3733_0_0, &direction_hazardlasertunnelglass1_3733_0_0, &direction_hazardlasertunnelglass1_3733_0_0, NULL, &direction_hazardlasertunnelglass1_3733_0_0, &direction_hazardlasertunnelglass1_3733_0_0, &direction_hazardlasertunnelglass1_3733_0_0, &direction_hazardlasertunnelglass1_3733_0_0, &direction_hazardlasertunnelglass1_3733_0_0, &direction_hazardlasertunnelglass1_3733_0_0, &direction_hazardlasertunnelglass1_3733_0_0, &direction_hazardlasertunnelglass1_3733_0_0, &direction_hazardlasertunnelglass1_3733_0_0, &direction_hazardlasertunnelglass1_3733_0_0, &direction_hazardlasertunnelglass1_3733_0_0, &direction_hazardlasertunnelglass1_3733_0_0, &direction_hazardlasertunnelglass1_3733_0_0, &direction_hazardlasertunnelglass1_3733_0_0, &direction_hazardlasertunnelglass1_3733_0_0};
static Animation * anim_array_hazardlasertunnelglass1_3733[1] = {&anim_hazardlasertunnelglass1_3733_0};
static Animations anim_hazardlasertunnelglass1_3733 = {1, &anim_array_hazardlasertunnelglass1_3733[0]};
static bool anim_hazardlasertunnelglass1_3733_initialized;
class HazardLaserTunnelGlass1_3733 : public Active
{
public:
    HazardLaserTunnelGlass1_3733(int x, int y) : Active(x, y, HazardLaserTunnelGlass1_3733_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hazard_LaserTunnelGlass 1", 25);
#endif
        this->animations = &anim_hazardlasertunnelglass1_3733;
        if (!anim_hazardlasertunnelglass1_3733_initialized) {
            anim_hazardlasertunnelglass1_3733_initialized = true;
            images_hazardlasertunnelglass1_3733_0_0[0] = get_internal_image(15219);
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
FrameObject * create_hazardlasertunnelglass1_3733(int x, int y)
{
    return new (Active::pool.create()) HazardLaserTunnelGlass1_3733(x, y);
}
static Image* images_hazardlasertunnelglass2_3734_0_0[1];
static Direction direction_hazardlasertunnelglass2_3734_0_0 = {0, 50, 50, 0, 1, images_hazardlasertunnelglass2_3734_0_0, 1};
static Animation anim_hazardlasertunnelglass2_3734_0 = {&direction_hazardlasertunnelglass2_3734_0_0, &direction_hazardlasertunnelglass2_3734_0_0, &direction_hazardlasertunnelglass2_3734_0_0, &direction_hazardlasertunnelglass2_3734_0_0, &direction_hazardlasertunnelglass2_3734_0_0, &direction_hazardlasertunnelglass2_3734_0_0, &direction_hazardlasertunnelglass2_3734_0_0, &direction_hazardlasertunnelglass2_3734_0_0, &direction_hazardlasertunnelglass2_3734_0_0, &direction_hazardlasertunnelglass2_3734_0_0, &direction_hazardlasertunnelglass2_3734_0_0, &direction_hazardlasertunnelglass2_3734_0_0, &direction_hazardlasertunnelglass2_3734_0_0, &direction_hazardlasertunnelglass2_3734_0_0, &direction_hazardlasertunnelglass2_3734_0_0, &direction_hazardlasertunnelglass2_3734_0_0, NULL, &direction_hazardlasertunnelglass2_3734_0_0, &direction_hazardlasertunnelglass2_3734_0_0, &direction_hazardlasertunnelglass2_3734_0_0, &direction_hazardlasertunnelglass2_3734_0_0, &direction_hazardlasertunnelglass2_3734_0_0, &direction_hazardlasertunnelglass2_3734_0_0, &direction_hazardlasertunnelglass2_3734_0_0, &direction_hazardlasertunnelglass2_3734_0_0, &direction_hazardlasertunnelglass2_3734_0_0, &direction_hazardlasertunnelglass2_3734_0_0, &direction_hazardlasertunnelglass2_3734_0_0, &direction_hazardlasertunnelglass2_3734_0_0, &direction_hazardlasertunnelglass2_3734_0_0, &direction_hazardlasertunnelglass2_3734_0_0, &direction_hazardlasertunnelglass2_3734_0_0};
static Animation * anim_array_hazardlasertunnelglass2_3734[1] = {&anim_hazardlasertunnelglass2_3734_0};
static Animations anim_hazardlasertunnelglass2_3734 = {1, &anim_array_hazardlasertunnelglass2_3734[0]};
static bool anim_hazardlasertunnelglass2_3734_initialized;
class HazardLaserTunnelGlass2_3734 : public Active
{
public:
    HazardLaserTunnelGlass2_3734(int x, int y) : Active(x, y, HazardLaserTunnelGlass2_3734_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hazard_LaserTunnelGlass 2", 25);
#endif
        this->animations = &anim_hazardlasertunnelglass2_3734;
        if (!anim_hazardlasertunnelglass2_3734_initialized) {
            anim_hazardlasertunnelglass2_3734_initialized = true;
            images_hazardlasertunnelglass2_3734_0_0[0] = get_internal_image(15219);
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
FrameObject * create_hazardlasertunnelglass2_3734(int x, int y)
{
    return new (Active::pool.create()) HazardLaserTunnelGlass2_3734(x, y);
}
static Image* images_hazardlasertunnel_3735_0_0[3];
static Direction direction_hazardlasertunnel_3735_0_0 = {0, 70, 70, 0, -1, images_hazardlasertunnel_3735_0_0, 3};
static Animation anim_hazardlasertunnel_3735_0 = {&direction_hazardlasertunnel_3735_0_0, &direction_hazardlasertunnel_3735_0_0, &direction_hazardlasertunnel_3735_0_0, &direction_hazardlasertunnel_3735_0_0, &direction_hazardlasertunnel_3735_0_0, &direction_hazardlasertunnel_3735_0_0, &direction_hazardlasertunnel_3735_0_0, &direction_hazardlasertunnel_3735_0_0, &direction_hazardlasertunnel_3735_0_0, &direction_hazardlasertunnel_3735_0_0, &direction_hazardlasertunnel_3735_0_0, &direction_hazardlasertunnel_3735_0_0, &direction_hazardlasertunnel_3735_0_0, &direction_hazardlasertunnel_3735_0_0, &direction_hazardlasertunnel_3735_0_0, &direction_hazardlasertunnel_3735_0_0, NULL, &direction_hazardlasertunnel_3735_0_0, &direction_hazardlasertunnel_3735_0_0, &direction_hazardlasertunnel_3735_0_0, &direction_hazardlasertunnel_3735_0_0, &direction_hazardlasertunnel_3735_0_0, &direction_hazardlasertunnel_3735_0_0, &direction_hazardlasertunnel_3735_0_0, &direction_hazardlasertunnel_3735_0_0, &direction_hazardlasertunnel_3735_0_0, &direction_hazardlasertunnel_3735_0_0, &direction_hazardlasertunnel_3735_0_0, &direction_hazardlasertunnel_3735_0_0, &direction_hazardlasertunnel_3735_0_0, &direction_hazardlasertunnel_3735_0_0, &direction_hazardlasertunnel_3735_0_0};
static Image* images_hazardlasertunnel_3735_8_0[6];
static Direction direction_hazardlasertunnel_3735_8_0 = {0, 50, 50, 0, 1, images_hazardlasertunnel_3735_8_0, 6};
static Animation anim_hazardlasertunnel_3735_8 = {&direction_hazardlasertunnel_3735_8_0, &direction_hazardlasertunnel_3735_8_0, &direction_hazardlasertunnel_3735_8_0, &direction_hazardlasertunnel_3735_8_0, &direction_hazardlasertunnel_3735_8_0, &direction_hazardlasertunnel_3735_8_0, &direction_hazardlasertunnel_3735_8_0, &direction_hazardlasertunnel_3735_8_0, &direction_hazardlasertunnel_3735_8_0, &direction_hazardlasertunnel_3735_8_0, &direction_hazardlasertunnel_3735_8_0, &direction_hazardlasertunnel_3735_8_0, &direction_hazardlasertunnel_3735_8_0, &direction_hazardlasertunnel_3735_8_0, &direction_hazardlasertunnel_3735_8_0, &direction_hazardlasertunnel_3735_8_0, NULL, &direction_hazardlasertunnel_3735_8_0, &direction_hazardlasertunnel_3735_8_0, &direction_hazardlasertunnel_3735_8_0, &direction_hazardlasertunnel_3735_8_0, &direction_hazardlasertunnel_3735_8_0, &direction_hazardlasertunnel_3735_8_0, &direction_hazardlasertunnel_3735_8_0, &direction_hazardlasertunnel_3735_8_0, &direction_hazardlasertunnel_3735_8_0, &direction_hazardlasertunnel_3735_8_0, &direction_hazardlasertunnel_3735_8_0, &direction_hazardlasertunnel_3735_8_0, &direction_hazardlasertunnel_3735_8_0, &direction_hazardlasertunnel_3735_8_0, &direction_hazardlasertunnel_3735_8_0};
static Animation * anim_array_hazardlasertunnel_3735[9] = {&anim_hazardlasertunnel_3735_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_hazardlasertunnel_3735_8};
static Animations anim_hazardlasertunnel_3735 = {9, &anim_array_hazardlasertunnel_3735[0]};
static bool anim_hazardlasertunnel_3735_initialized;
class HazardLaserTunnel_3735 : public Active
{
public:
    HazardLaserTunnel_3735(int x, int y) : Active(x, y, HazardLaserTunnel_3735_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hazard_LaserTunnel", 18);
#endif
        set_visible(false);
        this->animations = &anim_hazardlasertunnel_3735;
        if (!anim_hazardlasertunnel_3735_initialized) {
            anim_hazardlasertunnel_3735_initialized = true;
            images_hazardlasertunnel_3735_0_0[0] = get_internal_image(15214);
            images_hazardlasertunnel_3735_0_0[1] = get_internal_image(15210);
            images_hazardlasertunnel_3735_0_0[2] = get_internal_image(15209);
            images_hazardlasertunnel_3735_8_0[0] = get_internal_image(15210);
            images_hazardlasertunnel_3735_8_0[1] = get_internal_image(15209);
            images_hazardlasertunnel_3735_8_0[2] = get_internal_image(15211);
            images_hazardlasertunnel_3735_8_0[3] = get_internal_image(15213);
            images_hazardlasertunnel_3735_8_0[4] = get_internal_image(15221);
            images_hazardlasertunnel_3735_8_0[5] = get_internal_image(15222);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 16);
        alterables->values.set(1, 290);
    }
};
FrameObject * create_hazardlasertunnel_3735(int x, int y)
{
    return new (Active::pool.create()) HazardLaserTunnel_3735(x, y);
}
static Image* images_hazardlasertunnelglass3_3736_0_0[1];
static Direction direction_hazardlasertunnelglass3_3736_0_0 = {0, 50, 50, 0, 1, images_hazardlasertunnelglass3_3736_0_0, 1};
static Animation anim_hazardlasertunnelglass3_3736_0 = {&direction_hazardlasertunnelglass3_3736_0_0, &direction_hazardlasertunnelglass3_3736_0_0, &direction_hazardlasertunnelglass3_3736_0_0, &direction_hazardlasertunnelglass3_3736_0_0, &direction_hazardlasertunnelglass3_3736_0_0, &direction_hazardlasertunnelglass3_3736_0_0, &direction_hazardlasertunnelglass3_3736_0_0, &direction_hazardlasertunnelglass3_3736_0_0, &direction_hazardlasertunnelglass3_3736_0_0, &direction_hazardlasertunnelglass3_3736_0_0, &direction_hazardlasertunnelglass3_3736_0_0, &direction_hazardlasertunnelglass3_3736_0_0, &direction_hazardlasertunnelglass3_3736_0_0, &direction_hazardlasertunnelglass3_3736_0_0, &direction_hazardlasertunnelglass3_3736_0_0, &direction_hazardlasertunnelglass3_3736_0_0, NULL, &direction_hazardlasertunnelglass3_3736_0_0, &direction_hazardlasertunnelglass3_3736_0_0, &direction_hazardlasertunnelglass3_3736_0_0, &direction_hazardlasertunnelglass3_3736_0_0, &direction_hazardlasertunnelglass3_3736_0_0, &direction_hazardlasertunnelglass3_3736_0_0, &direction_hazardlasertunnelglass3_3736_0_0, &direction_hazardlasertunnelglass3_3736_0_0, &direction_hazardlasertunnelglass3_3736_0_0, &direction_hazardlasertunnelglass3_3736_0_0, &direction_hazardlasertunnelglass3_3736_0_0, &direction_hazardlasertunnelglass3_3736_0_0, &direction_hazardlasertunnelglass3_3736_0_0, &direction_hazardlasertunnelglass3_3736_0_0, &direction_hazardlasertunnelglass3_3736_0_0};
static Animation * anim_array_hazardlasertunnelglass3_3736[1] = {&anim_hazardlasertunnelglass3_3736_0};
static Animations anim_hazardlasertunnelglass3_3736 = {1, &anim_array_hazardlasertunnelglass3_3736[0]};
static bool anim_hazardlasertunnelglass3_3736_initialized;
class HazardLaserTunnelGlass3_3736 : public Active
{
public:
    HazardLaserTunnelGlass3_3736(int x, int y) : Active(x, y, HazardLaserTunnelGlass3_3736_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hazard_LaserTunnelGlass 3", 25);
#endif
        this->animations = &anim_hazardlasertunnelglass3_3736;
        if (!anim_hazardlasertunnelglass3_3736_initialized) {
            anim_hazardlasertunnelglass3_3736_initialized = true;
            images_hazardlasertunnelglass3_3736_0_0[0] = get_internal_image(15220);
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
FrameObject * create_hazardlasertunnelglass3_3736(int x, int y)
{
    return new (Active::pool.create()) HazardLaserTunnelGlass3_3736(x, y);
}
static Image* images_redflash_3737_0_0[1];
static Direction direction_redflash_3737_0_0 = {0, 50, 50, 0, 1, images_redflash_3737_0_0, 1};
static Animation anim_redflash_3737_0 = {&direction_redflash_3737_0_0, &direction_redflash_3737_0_0, &direction_redflash_3737_0_0, &direction_redflash_3737_0_0, &direction_redflash_3737_0_0, &direction_redflash_3737_0_0, &direction_redflash_3737_0_0, &direction_redflash_3737_0_0, &direction_redflash_3737_0_0, &direction_redflash_3737_0_0, &direction_redflash_3737_0_0, &direction_redflash_3737_0_0, &direction_redflash_3737_0_0, &direction_redflash_3737_0_0, &direction_redflash_3737_0_0, &direction_redflash_3737_0_0, NULL, &direction_redflash_3737_0_0, &direction_redflash_3737_0_0, &direction_redflash_3737_0_0, &direction_redflash_3737_0_0, &direction_redflash_3737_0_0, &direction_redflash_3737_0_0, &direction_redflash_3737_0_0, &direction_redflash_3737_0_0, &direction_redflash_3737_0_0, &direction_redflash_3737_0_0, &direction_redflash_3737_0_0, &direction_redflash_3737_0_0, &direction_redflash_3737_0_0, &direction_redflash_3737_0_0, &direction_redflash_3737_0_0};
static Animation * anim_array_redflash_3737[1] = {&anim_redflash_3737_0};
static Animations anim_redflash_3737 = {1, &anim_array_redflash_3737[0]};
static bool anim_redflash_3737_initialized;
class RedFlash_3737 : public Active
{
public:
    RedFlash_3737(int x, int y) : Active(x, y, RedFlash_3737_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("RedFlash", 8);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_redflash_3737;
        if (!anim_redflash_3737_initialized) {
            anim_redflash_3737_initialized = true;
            images_redflash_3737_0_0[0] = get_internal_image(5449);
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
FrameObject * create_redflash_3737(int x, int y)
{
    return new (Active::pool.create()) RedFlash_3737(x, y);
}
static Image* images_minibossacidsplitpoint_3738_0_0[1];
static Direction direction_minibossacidsplitpoint_3738_0_0 = {0, 50, 50, 0, 1, images_minibossacidsplitpoint_3738_0_0, 1};
static Animation anim_minibossacidsplitpoint_3738_0 = {&direction_minibossacidsplitpoint_3738_0_0, &direction_minibossacidsplitpoint_3738_0_0, &direction_minibossacidsplitpoint_3738_0_0, &direction_minibossacidsplitpoint_3738_0_0, &direction_minibossacidsplitpoint_3738_0_0, &direction_minibossacidsplitpoint_3738_0_0, &direction_minibossacidsplitpoint_3738_0_0, &direction_minibossacidsplitpoint_3738_0_0, &direction_minibossacidsplitpoint_3738_0_0, &direction_minibossacidsplitpoint_3738_0_0, &direction_minibossacidsplitpoint_3738_0_0, &direction_minibossacidsplitpoint_3738_0_0, &direction_minibossacidsplitpoint_3738_0_0, &direction_minibossacidsplitpoint_3738_0_0, &direction_minibossacidsplitpoint_3738_0_0, &direction_minibossacidsplitpoint_3738_0_0, NULL, &direction_minibossacidsplitpoint_3738_0_0, &direction_minibossacidsplitpoint_3738_0_0, &direction_minibossacidsplitpoint_3738_0_0, &direction_minibossacidsplitpoint_3738_0_0, &direction_minibossacidsplitpoint_3738_0_0, &direction_minibossacidsplitpoint_3738_0_0, &direction_minibossacidsplitpoint_3738_0_0, &direction_minibossacidsplitpoint_3738_0_0, &direction_minibossacidsplitpoint_3738_0_0, &direction_minibossacidsplitpoint_3738_0_0, &direction_minibossacidsplitpoint_3738_0_0, &direction_minibossacidsplitpoint_3738_0_0, &direction_minibossacidsplitpoint_3738_0_0, &direction_minibossacidsplitpoint_3738_0_0, &direction_minibossacidsplitpoint_3738_0_0};
static Animation * anim_array_minibossacidsplitpoint_3738[1] = {&anim_minibossacidsplitpoint_3738_0};
static Animations anim_minibossacidsplitpoint_3738 = {1, &anim_array_minibossacidsplitpoint_3738[0]};
static bool anim_minibossacidsplitpoint_3738_initialized;
class MinibossAcidSplitPoint_3738 : public Active
{
public:
    MinibossAcidSplitPoint_3738(int x, int y) : Active(x, y, MinibossAcidSplitPoint_3738_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_AcidSplitPoint", 23);
#endif
        set_visible(false);
        this->animations = &anim_minibossacidsplitpoint_3738;
        if (!anim_minibossacidsplitpoint_3738_initialized) {
            anim_minibossacidsplitpoint_3738_initialized = true;
            images_minibossacidsplitpoint_3738_0_0[0] = get_internal_image(15490);
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
FrameObject * create_minibossacidsplitpoint_3738(int x, int y)
{
    return new (Active::pool.create()) MinibossAcidSplitPoint_3738(x, y);
}
static Image* images_bossboostmissile_3739_0_0[3];
static Direction direction_bossboostmissile_3739_0_0 = {0, 25, 25, 0, -1, images_bossboostmissile_3739_0_0, 3};
static Image* images_bossboostmissile_3739_0_16[3];
static Direction direction_bossboostmissile_3739_0_16 = {16, 25, 25, 0, -1, images_bossboostmissile_3739_0_16, 3};
static Animation anim_bossboostmissile_3739_0 = {&direction_bossboostmissile_3739_0_0, &direction_bossboostmissile_3739_0_0, &direction_bossboostmissile_3739_0_0, &direction_bossboostmissile_3739_0_0, &direction_bossboostmissile_3739_0_0, &direction_bossboostmissile_3739_0_0, &direction_bossboostmissile_3739_0_0, &direction_bossboostmissile_3739_0_0, NULL, &direction_bossboostmissile_3739_0_16, &direction_bossboostmissile_3739_0_16, &direction_bossboostmissile_3739_0_16, &direction_bossboostmissile_3739_0_16, &direction_bossboostmissile_3739_0_16, &direction_bossboostmissile_3739_0_16, &direction_bossboostmissile_3739_0_16, &direction_bossboostmissile_3739_0_16, &direction_bossboostmissile_3739_0_16, &direction_bossboostmissile_3739_0_16, &direction_bossboostmissile_3739_0_16, &direction_bossboostmissile_3739_0_16, &direction_bossboostmissile_3739_0_16, &direction_bossboostmissile_3739_0_16, &direction_bossboostmissile_3739_0_16, NULL, &direction_bossboostmissile_3739_0_0, &direction_bossboostmissile_3739_0_0, &direction_bossboostmissile_3739_0_0, &direction_bossboostmissile_3739_0_0, &direction_bossboostmissile_3739_0_0, &direction_bossboostmissile_3739_0_0, &direction_bossboostmissile_3739_0_0};
static Animation * anim_array_bossboostmissile_3739[1] = {&anim_bossboostmissile_3739_0};
static Animations anim_bossboostmissile_3739 = {1, &anim_array_bossboostmissile_3739[0]};
static bool anim_bossboostmissile_3739_initialized;
class BossBoostMissile_3739 : public Active
{
public:
    BossBoostMissile_3739(int x, int y) : Active(x, y, BossBoostMissile_3739_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_BoostMissile", 17);
#endif
        this->animations = &anim_bossboostmissile_3739;
        if (!anim_bossboostmissile_3739_initialized) {
            anim_bossboostmissile_3739_initialized = true;
            images_bossboostmissile_3739_0_0[0] = get_internal_image(15492);
            images_bossboostmissile_3739_0_0[1] = get_internal_image(15505);
            images_bossboostmissile_3739_0_0[2] = get_internal_image(15506);
            images_bossboostmissile_3739_0_16[0] = get_internal_image(15496);
            images_bossboostmissile_3739_0_16[1] = get_internal_image(15507);
            images_bossboostmissile_3739_0_16[2] = get_internal_image(15509);
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
FrameObject * create_bossboostmissile_3739(int x, int y)
{
    return new (Active::pool.create()) BossBoostMissile_3739(x, y);
}
static Image* images_effectmissilewarning_3740_4_0[3];
static Direction direction_effectmissilewarning_3740_4_0 = {0, 50, 50, 0, 10, images_effectmissilewarning_3740_4_0, 3};
static Animation anim_effectmissilewarning_3740_4 = {&direction_effectmissilewarning_3740_4_0, &direction_effectmissilewarning_3740_4_0, &direction_effectmissilewarning_3740_4_0, &direction_effectmissilewarning_3740_4_0, &direction_effectmissilewarning_3740_4_0, &direction_effectmissilewarning_3740_4_0, &direction_effectmissilewarning_3740_4_0, &direction_effectmissilewarning_3740_4_0, &direction_effectmissilewarning_3740_4_0, &direction_effectmissilewarning_3740_4_0, &direction_effectmissilewarning_3740_4_0, &direction_effectmissilewarning_3740_4_0, &direction_effectmissilewarning_3740_4_0, &direction_effectmissilewarning_3740_4_0, &direction_effectmissilewarning_3740_4_0, &direction_effectmissilewarning_3740_4_0, NULL, &direction_effectmissilewarning_3740_4_0, &direction_effectmissilewarning_3740_4_0, &direction_effectmissilewarning_3740_4_0, &direction_effectmissilewarning_3740_4_0, &direction_effectmissilewarning_3740_4_0, &direction_effectmissilewarning_3740_4_0, &direction_effectmissilewarning_3740_4_0, &direction_effectmissilewarning_3740_4_0, &direction_effectmissilewarning_3740_4_0, &direction_effectmissilewarning_3740_4_0, &direction_effectmissilewarning_3740_4_0, &direction_effectmissilewarning_3740_4_0, &direction_effectmissilewarning_3740_4_0, &direction_effectmissilewarning_3740_4_0, &direction_effectmissilewarning_3740_4_0};
static Animation * anim_array_effectmissilewarning_3740[5] = {NULL, NULL, NULL, NULL, &anim_effectmissilewarning_3740_4};
static Animations anim_effectmissilewarning_3740 = {5, &anim_array_effectmissilewarning_3740[0]};
static bool anim_effectmissilewarning_3740_initialized;
class EffectMissileWarning_3740 : public Active
{
public:
    EffectMissileWarning_3740(int x, int y) : Active(x, y, EffectMissileWarning_3740_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effect_MissileWarning", 21);
#endif
        this->animations = &anim_effectmissilewarning_3740;
        if (!anim_effectmissilewarning_3740_initialized) {
            anim_effectmissilewarning_3740_initialized = true;
            images_effectmissilewarning_3740_4_0[0] = get_internal_image(881);
            images_effectmissilewarning_3740_4_0[1] = get_internal_image(1003);
            images_effectmissilewarning_3740_4_0[2] = get_internal_image(1051);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = DISAPPEARING;
        current_animation = animation;
        flags |= FADEOUT;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_effectmissilewarning_3740(int x, int y)
{
    return new (Active::pool.create()) EffectMissileWarning_3740(x, y);
}
static Image* images_brevonsuitlaser_3741_0_0[1];
static Direction direction_brevonsuitlaser_3741_0_0 = {0, 0, 0, 0, 1, images_brevonsuitlaser_3741_0_0, 1};
static Animation anim_brevonsuitlaser_3741_0 = {&direction_brevonsuitlaser_3741_0_0, &direction_brevonsuitlaser_3741_0_0, &direction_brevonsuitlaser_3741_0_0, &direction_brevonsuitlaser_3741_0_0, &direction_brevonsuitlaser_3741_0_0, &direction_brevonsuitlaser_3741_0_0, &direction_brevonsuitlaser_3741_0_0, &direction_brevonsuitlaser_3741_0_0, &direction_brevonsuitlaser_3741_0_0, &direction_brevonsuitlaser_3741_0_0, &direction_brevonsuitlaser_3741_0_0, &direction_brevonsuitlaser_3741_0_0, &direction_brevonsuitlaser_3741_0_0, &direction_brevonsuitlaser_3741_0_0, &direction_brevonsuitlaser_3741_0_0, &direction_brevonsuitlaser_3741_0_0, NULL, &direction_brevonsuitlaser_3741_0_0, &direction_brevonsuitlaser_3741_0_0, &direction_brevonsuitlaser_3741_0_0, &direction_brevonsuitlaser_3741_0_0, &direction_brevonsuitlaser_3741_0_0, &direction_brevonsuitlaser_3741_0_0, &direction_brevonsuitlaser_3741_0_0, &direction_brevonsuitlaser_3741_0_0, &direction_brevonsuitlaser_3741_0_0, &direction_brevonsuitlaser_3741_0_0, &direction_brevonsuitlaser_3741_0_0, &direction_brevonsuitlaser_3741_0_0, &direction_brevonsuitlaser_3741_0_0, &direction_brevonsuitlaser_3741_0_0, &direction_brevonsuitlaser_3741_0_0};
static Image* images_brevonsuitlaser_3741_7_0[9];
static Direction direction_brevonsuitlaser_3741_7_0 = {0, 50, 50, 6, -1, images_brevonsuitlaser_3741_7_0, 9};
static Animation anim_brevonsuitlaser_3741_7 = {&direction_brevonsuitlaser_3741_7_0, &direction_brevonsuitlaser_3741_7_0, &direction_brevonsuitlaser_3741_7_0, &direction_brevonsuitlaser_3741_7_0, &direction_brevonsuitlaser_3741_7_0, &direction_brevonsuitlaser_3741_7_0, &direction_brevonsuitlaser_3741_7_0, &direction_brevonsuitlaser_3741_7_0, &direction_brevonsuitlaser_3741_7_0, &direction_brevonsuitlaser_3741_7_0, &direction_brevonsuitlaser_3741_7_0, &direction_brevonsuitlaser_3741_7_0, &direction_brevonsuitlaser_3741_7_0, &direction_brevonsuitlaser_3741_7_0, &direction_brevonsuitlaser_3741_7_0, &direction_brevonsuitlaser_3741_7_0, NULL, &direction_brevonsuitlaser_3741_7_0, &direction_brevonsuitlaser_3741_7_0, &direction_brevonsuitlaser_3741_7_0, &direction_brevonsuitlaser_3741_7_0, &direction_brevonsuitlaser_3741_7_0, &direction_brevonsuitlaser_3741_7_0, &direction_brevonsuitlaser_3741_7_0, &direction_brevonsuitlaser_3741_7_0, &direction_brevonsuitlaser_3741_7_0, &direction_brevonsuitlaser_3741_7_0, &direction_brevonsuitlaser_3741_7_0, &direction_brevonsuitlaser_3741_7_0, &direction_brevonsuitlaser_3741_7_0, &direction_brevonsuitlaser_3741_7_0, &direction_brevonsuitlaser_3741_7_0};
static Animation * anim_array_brevonsuitlaser_3741[8] = {&anim_brevonsuitlaser_3741_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_brevonsuitlaser_3741_7};
static Animations anim_brevonsuitlaser_3741 = {8, &anim_array_brevonsuitlaser_3741[0]};
static bool anim_brevonsuitlaser_3741_initialized;
class BrevonSuitLaser_3741 : public Active
{
public:
    BrevonSuitLaser_3741(int x, int y) : Active(x, y, BrevonSuitLaser_3741_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BrevonSuit_Laser", 16);
#endif
        this->animations = &anim_brevonsuitlaser_3741;
        if (!anim_brevonsuitlaser_3741_initialized) {
            anim_brevonsuitlaser_3741_initialized = true;
            images_brevonsuitlaser_3741_0_0[0] = get_internal_image(5455);
            images_brevonsuitlaser_3741_7_0[0] = get_internal_image(5456);
            images_brevonsuitlaser_3741_7_0[1] = get_internal_image(5457);
            images_brevonsuitlaser_3741_7_0[2] = get_internal_image(5467);
            images_brevonsuitlaser_3741_7_0[3] = get_internal_image(5456);
            images_brevonsuitlaser_3741_7_0[4] = get_internal_image(5457);
            images_brevonsuitlaser_3741_7_0[5] = get_internal_image(5467);
            images_brevonsuitlaser_3741_7_0[6] = get_internal_image(5685);
            images_brevonsuitlaser_3741_7_0[7] = get_internal_image(5686);
            images_brevonsuitlaser_3741_7_0[8] = get_internal_image(5687);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(3, 16);
    }
};
FrameObject * create_brevonsuitlaser_3741(int x, int y)
{
    return new (Active::pool.create()) BrevonSuitLaser_3741(x, y);
}
static Image* images_brevonsuitflametrail_3742_0_0[3];
static Direction direction_brevonsuitflametrail_3742_0_0 = {0, 75, 75, 0, -1, images_brevonsuitflametrail_3742_0_0, 3};
static Animation anim_brevonsuitflametrail_3742_0 = {&direction_brevonsuitflametrail_3742_0_0, &direction_brevonsuitflametrail_3742_0_0, &direction_brevonsuitflametrail_3742_0_0, &direction_brevonsuitflametrail_3742_0_0, &direction_brevonsuitflametrail_3742_0_0, &direction_brevonsuitflametrail_3742_0_0, &direction_brevonsuitflametrail_3742_0_0, &direction_brevonsuitflametrail_3742_0_0, &direction_brevonsuitflametrail_3742_0_0, &direction_brevonsuitflametrail_3742_0_0, &direction_brevonsuitflametrail_3742_0_0, &direction_brevonsuitflametrail_3742_0_0, &direction_brevonsuitflametrail_3742_0_0, &direction_brevonsuitflametrail_3742_0_0, &direction_brevonsuitflametrail_3742_0_0, &direction_brevonsuitflametrail_3742_0_0, NULL, &direction_brevonsuitflametrail_3742_0_0, &direction_brevonsuitflametrail_3742_0_0, &direction_brevonsuitflametrail_3742_0_0, &direction_brevonsuitflametrail_3742_0_0, &direction_brevonsuitflametrail_3742_0_0, &direction_brevonsuitflametrail_3742_0_0, &direction_brevonsuitflametrail_3742_0_0, &direction_brevonsuitflametrail_3742_0_0, &direction_brevonsuitflametrail_3742_0_0, &direction_brevonsuitflametrail_3742_0_0, &direction_brevonsuitflametrail_3742_0_0, &direction_brevonsuitflametrail_3742_0_0, &direction_brevonsuitflametrail_3742_0_0, &direction_brevonsuitflametrail_3742_0_0, &direction_brevonsuitflametrail_3742_0_0};
static Animation * anim_array_brevonsuitflametrail_3742[1] = {&anim_brevonsuitflametrail_3742_0};
static Animations anim_brevonsuitflametrail_3742 = {1, &anim_array_brevonsuitflametrail_3742[0]};
static bool anim_brevonsuitflametrail_3742_initialized;
class BrevonSuitFlameTrail_3742 : public Active
{
public:
    BrevonSuitFlameTrail_3742(int x, int y) : Active(x, y, BrevonSuitFlameTrail_3742_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BrevonSuit_FlameTrail", 21);
#endif
        this->animations = &anim_brevonsuitflametrail_3742;
        if (!anim_brevonsuitflametrail_3742_initialized) {
            anim_brevonsuitflametrail_3742_initialized = true;
            images_brevonsuitflametrail_3742_0_0[0] = get_internal_image(8711);
            images_brevonsuitflametrail_3742_0_0[1] = get_internal_image(8712);
            images_brevonsuitflametrail_3742_0_0[2] = get_internal_image(8713);
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
FrameObject * create_brevonsuitflametrail_3742(int x, int y)
{
    return new (Active::pool.create()) BrevonSuitFlameTrail_3742(x, y);
}
static Image* images_brevonsuitspeedline_3743_0_0[1];
static Direction direction_brevonsuitspeedline_3743_0_0 = {0, 50, 50, 0, 1, images_brevonsuitspeedline_3743_0_0, 1};
static Image* images_brevonsuitspeedline_3743_0_16[1];
static Direction direction_brevonsuitspeedline_3743_0_16 = {16, 50, 50, 0, 1, images_brevonsuitspeedline_3743_0_16, 1};
static Animation anim_brevonsuitspeedline_3743_0 = {&direction_brevonsuitspeedline_3743_0_0, &direction_brevonsuitspeedline_3743_0_0, &direction_brevonsuitspeedline_3743_0_0, &direction_brevonsuitspeedline_3743_0_0, &direction_brevonsuitspeedline_3743_0_0, &direction_brevonsuitspeedline_3743_0_0, &direction_brevonsuitspeedline_3743_0_0, &direction_brevonsuitspeedline_3743_0_0, NULL, &direction_brevonsuitspeedline_3743_0_16, &direction_brevonsuitspeedline_3743_0_16, &direction_brevonsuitspeedline_3743_0_16, &direction_brevonsuitspeedline_3743_0_16, &direction_brevonsuitspeedline_3743_0_16, &direction_brevonsuitspeedline_3743_0_16, &direction_brevonsuitspeedline_3743_0_16, &direction_brevonsuitspeedline_3743_0_16, &direction_brevonsuitspeedline_3743_0_16, &direction_brevonsuitspeedline_3743_0_16, &direction_brevonsuitspeedline_3743_0_16, &direction_brevonsuitspeedline_3743_0_16, &direction_brevonsuitspeedline_3743_0_16, &direction_brevonsuitspeedline_3743_0_16, &direction_brevonsuitspeedline_3743_0_16, NULL, &direction_brevonsuitspeedline_3743_0_0, &direction_brevonsuitspeedline_3743_0_0, &direction_brevonsuitspeedline_3743_0_0, &direction_brevonsuitspeedline_3743_0_0, &direction_brevonsuitspeedline_3743_0_0, &direction_brevonsuitspeedline_3743_0_0, &direction_brevonsuitspeedline_3743_0_0};
static Animation * anim_array_brevonsuitspeedline_3743[1] = {&anim_brevonsuitspeedline_3743_0};
static Animations anim_brevonsuitspeedline_3743 = {1, &anim_array_brevonsuitspeedline_3743[0]};
static bool anim_brevonsuitspeedline_3743_initialized;
class BrevonSuitSpeedLine_3743 : public Active
{
public:
    BrevonSuitSpeedLine_3743(int x, int y) : Active(x, y, BrevonSuitSpeedLine_3743_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BrevonSuit_SpeedLine", 20);
#endif
        this->animations = &anim_brevonsuitspeedline_3743;
        if (!anim_brevonsuitspeedline_3743_initialized) {
            anim_brevonsuitspeedline_3743_initialized = true;
            images_brevonsuitspeedline_3743_0_0[0] = get_internal_image(8438);
            images_brevonsuitspeedline_3743_0_16[0] = get_internal_image(8706);
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
FrameObject * create_brevonsuitspeedline_3743(int x, int y)
{
    return new (Active::pool.create()) BrevonSuitSpeedLine_3743(x, y);
}
static Image* images_brevonsuitspeedline2_3744_0_0[1];
static Direction direction_brevonsuitspeedline2_3744_0_0 = {0, 50, 50, 0, 1, images_brevonsuitspeedline2_3744_0_0, 1};
static Animation anim_brevonsuitspeedline2_3744_0 = {&direction_brevonsuitspeedline2_3744_0_0, &direction_brevonsuitspeedline2_3744_0_0, &direction_brevonsuitspeedline2_3744_0_0, &direction_brevonsuitspeedline2_3744_0_0, &direction_brevonsuitspeedline2_3744_0_0, &direction_brevonsuitspeedline2_3744_0_0, &direction_brevonsuitspeedline2_3744_0_0, &direction_brevonsuitspeedline2_3744_0_0, &direction_brevonsuitspeedline2_3744_0_0, &direction_brevonsuitspeedline2_3744_0_0, &direction_brevonsuitspeedline2_3744_0_0, &direction_brevonsuitspeedline2_3744_0_0, &direction_brevonsuitspeedline2_3744_0_0, &direction_brevonsuitspeedline2_3744_0_0, &direction_brevonsuitspeedline2_3744_0_0, &direction_brevonsuitspeedline2_3744_0_0, NULL, &direction_brevonsuitspeedline2_3744_0_0, &direction_brevonsuitspeedline2_3744_0_0, &direction_brevonsuitspeedline2_3744_0_0, &direction_brevonsuitspeedline2_3744_0_0, &direction_brevonsuitspeedline2_3744_0_0, &direction_brevonsuitspeedline2_3744_0_0, &direction_brevonsuitspeedline2_3744_0_0, &direction_brevonsuitspeedline2_3744_0_0, &direction_brevonsuitspeedline2_3744_0_0, &direction_brevonsuitspeedline2_3744_0_0, &direction_brevonsuitspeedline2_3744_0_0, &direction_brevonsuitspeedline2_3744_0_0, &direction_brevonsuitspeedline2_3744_0_0, &direction_brevonsuitspeedline2_3744_0_0, &direction_brevonsuitspeedline2_3744_0_0};
static Animation * anim_array_brevonsuitspeedline2_3744[1] = {&anim_brevonsuitspeedline2_3744_0};
static Animations anim_brevonsuitspeedline2_3744 = {1, &anim_array_brevonsuitspeedline2_3744[0]};
static bool anim_brevonsuitspeedline2_3744_initialized;
class BrevonSuitSpeedLine2_3744 : public Active
{
public:
    BrevonSuitSpeedLine2_3744(int x, int y) : Active(x, y, BrevonSuitSpeedLine2_3744_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BrevonSuit_SpeedLine 2", 22);
#endif
        this->animations = &anim_brevonsuitspeedline2_3744;
        if (!anim_brevonsuitspeedline2_3744_initialized) {
            anim_brevonsuitspeedline2_3744_initialized = true;
            images_brevonsuitspeedline2_3744_0_0[0] = get_internal_image(8707);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_shader(Render::ADDITIVE);
        create_alterables();
        alterables->values.set(1, 800);
    }
};
FrameObject * create_brevonsuitspeedline2_3744(int x, int y)
{
    return new (Active::pool.create()) BrevonSuitSpeedLine2_3744(x, y);
}
static Image* images_effectbrevonsuitwarning_3745_4_0[3];
static Direction direction_effectbrevonsuitwarning_3745_4_0 = {0, 50, 50, 0, 10, images_effectbrevonsuitwarning_3745_4_0, 3};
static Animation anim_effectbrevonsuitwarning_3745_4 = {&direction_effectbrevonsuitwarning_3745_4_0, &direction_effectbrevonsuitwarning_3745_4_0, &direction_effectbrevonsuitwarning_3745_4_0, &direction_effectbrevonsuitwarning_3745_4_0, &direction_effectbrevonsuitwarning_3745_4_0, &direction_effectbrevonsuitwarning_3745_4_0, &direction_effectbrevonsuitwarning_3745_4_0, &direction_effectbrevonsuitwarning_3745_4_0, &direction_effectbrevonsuitwarning_3745_4_0, &direction_effectbrevonsuitwarning_3745_4_0, &direction_effectbrevonsuitwarning_3745_4_0, &direction_effectbrevonsuitwarning_3745_4_0, &direction_effectbrevonsuitwarning_3745_4_0, &direction_effectbrevonsuitwarning_3745_4_0, &direction_effectbrevonsuitwarning_3745_4_0, &direction_effectbrevonsuitwarning_3745_4_0, NULL, &direction_effectbrevonsuitwarning_3745_4_0, &direction_effectbrevonsuitwarning_3745_4_0, &direction_effectbrevonsuitwarning_3745_4_0, &direction_effectbrevonsuitwarning_3745_4_0, &direction_effectbrevonsuitwarning_3745_4_0, &direction_effectbrevonsuitwarning_3745_4_0, &direction_effectbrevonsuitwarning_3745_4_0, &direction_effectbrevonsuitwarning_3745_4_0, &direction_effectbrevonsuitwarning_3745_4_0, &direction_effectbrevonsuitwarning_3745_4_0, &direction_effectbrevonsuitwarning_3745_4_0, &direction_effectbrevonsuitwarning_3745_4_0, &direction_effectbrevonsuitwarning_3745_4_0, &direction_effectbrevonsuitwarning_3745_4_0, &direction_effectbrevonsuitwarning_3745_4_0};
static Animation * anim_array_effectbrevonsuitwarning_3745[5] = {NULL, NULL, NULL, NULL, &anim_effectbrevonsuitwarning_3745_4};
static Animations anim_effectbrevonsuitwarning_3745 = {5, &anim_array_effectbrevonsuitwarning_3745[0]};
static bool anim_effectbrevonsuitwarning_3745_initialized;
class EffectBrevonSuitWarning_3745 : public Active
{
public:
    EffectBrevonSuitWarning_3745(int x, int y) : Active(x, y, EffectBrevonSuitWarning_3745_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effect_BrevonSuitWarning", 24);
#endif
        set_visible(false);
        this->animations = &anim_effectbrevonsuitwarning_3745;
        if (!anim_effectbrevonsuitwarning_3745_initialized) {
            anim_effectbrevonsuitwarning_3745_initialized = true;
            images_effectbrevonsuitwarning_3745_4_0[0] = get_internal_image(881);
            images_effectbrevonsuitwarning_3745_4_0[1] = get_internal_image(1003);
            images_effectbrevonsuitwarning_3745_4_0[2] = get_internal_image(1051);
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
FrameObject * create_effectbrevonsuitwarning_3745(int x, int y)
{
    return new (Active::pool.create()) EffectBrevonSuitWarning_3745(x, y);
}
static Image* images_effectstinyexplosion_3746_4_0[7];
static Direction direction_effectstinyexplosion_3746_4_0 = {0, 50, 50, 0, 1, images_effectstinyexplosion_3746_4_0, 7};
static Animation anim_effectstinyexplosion_3746_4 = {&direction_effectstinyexplosion_3746_4_0, &direction_effectstinyexplosion_3746_4_0, &direction_effectstinyexplosion_3746_4_0, &direction_effectstinyexplosion_3746_4_0, &direction_effectstinyexplosion_3746_4_0, &direction_effectstinyexplosion_3746_4_0, &direction_effectstinyexplosion_3746_4_0, &direction_effectstinyexplosion_3746_4_0, &direction_effectstinyexplosion_3746_4_0, &direction_effectstinyexplosion_3746_4_0, &direction_effectstinyexplosion_3746_4_0, &direction_effectstinyexplosion_3746_4_0, &direction_effectstinyexplosion_3746_4_0, &direction_effectstinyexplosion_3746_4_0, &direction_effectstinyexplosion_3746_4_0, &direction_effectstinyexplosion_3746_4_0, NULL, &direction_effectstinyexplosion_3746_4_0, &direction_effectstinyexplosion_3746_4_0, &direction_effectstinyexplosion_3746_4_0, &direction_effectstinyexplosion_3746_4_0, &direction_effectstinyexplosion_3746_4_0, &direction_effectstinyexplosion_3746_4_0, &direction_effectstinyexplosion_3746_4_0, &direction_effectstinyexplosion_3746_4_0, &direction_effectstinyexplosion_3746_4_0, &direction_effectstinyexplosion_3746_4_0, &direction_effectstinyexplosion_3746_4_0, &direction_effectstinyexplosion_3746_4_0, &direction_effectstinyexplosion_3746_4_0, &direction_effectstinyexplosion_3746_4_0, &direction_effectstinyexplosion_3746_4_0};
static Animation * anim_array_effectstinyexplosion_3746[5] = {NULL, NULL, NULL, NULL, &anim_effectstinyexplosion_3746_4};
static Animations anim_effectstinyexplosion_3746 = {5, &anim_array_effectstinyexplosion_3746[0]};
static bool anim_effectstinyexplosion_3746_initialized;
class EffectsTinyExplosion_3746 : public Active
{
public:
    EffectsTinyExplosion_3746(int x, int y) : Active(x, y, EffectsTinyExplosion_3746_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Effects_TinyExplosion", 21);
#endif
        this->animations = &anim_effectstinyexplosion_3746;
        if (!anim_effectstinyexplosion_3746_initialized) {
            anim_effectstinyexplosion_3746_initialized = true;
            images_effectstinyexplosion_3746_4_0[0] = get_internal_image(3251);
            images_effectstinyexplosion_3746_4_0[1] = get_internal_image(3260);
            images_effectstinyexplosion_3746_4_0[2] = get_internal_image(3252);
            images_effectstinyexplosion_3746_4_0[3] = get_internal_image(3257);
            images_effectstinyexplosion_3746_4_0[4] = get_internal_image(3253);
            images_effectstinyexplosion_3746_4_0[5] = get_internal_image(3258);
            images_effectstinyexplosion_3746_4_0[6] = get_internal_image(3259);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = DISAPPEARING;
        current_animation = animation;
        flags |= FADEOUT;
        initialize_active();
        set_direction(0);
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(50);
        ((BallMovement*)movement)->set_deceleration(0);
        movement->start();
        create_alterables();
    }
};
FrameObject * create_effectstinyexplosion_3746(int x, int y)
{
    return new (Active::pool.create()) EffectsTinyExplosion_3746(x, y);
}
static Image* images_brevonslash1_3747_4_0[3];
static Direction direction_brevonslash1_3747_4_0 = {0, 50, 50, 0, 1, images_brevonslash1_3747_4_0, 3};
static Image* images_brevonslash1_3747_4_16[3];
static Direction direction_brevonslash1_3747_4_16 = {16, 50, 50, 0, 1, images_brevonslash1_3747_4_16, 3};
static Animation anim_brevonslash1_3747_4 = {&direction_brevonslash1_3747_4_0, &direction_brevonslash1_3747_4_0, &direction_brevonslash1_3747_4_0, &direction_brevonslash1_3747_4_0, &direction_brevonslash1_3747_4_0, &direction_brevonslash1_3747_4_0, &direction_brevonslash1_3747_4_0, &direction_brevonslash1_3747_4_0, NULL, &direction_brevonslash1_3747_4_16, &direction_brevonslash1_3747_4_16, &direction_brevonslash1_3747_4_16, &direction_brevonslash1_3747_4_16, &direction_brevonslash1_3747_4_16, &direction_brevonslash1_3747_4_16, &direction_brevonslash1_3747_4_16, &direction_brevonslash1_3747_4_16, &direction_brevonslash1_3747_4_16, &direction_brevonslash1_3747_4_16, &direction_brevonslash1_3747_4_16, &direction_brevonslash1_3747_4_16, &direction_brevonslash1_3747_4_16, &direction_brevonslash1_3747_4_16, &direction_brevonslash1_3747_4_16, NULL, &direction_brevonslash1_3747_4_0, &direction_brevonslash1_3747_4_0, &direction_brevonslash1_3747_4_0, &direction_brevonslash1_3747_4_0, &direction_brevonslash1_3747_4_0, &direction_brevonslash1_3747_4_0, &direction_brevonslash1_3747_4_0};
static Animation * anim_array_brevonslash1_3747[5] = {NULL, NULL, NULL, NULL, &anim_brevonslash1_3747_4};
static Animations anim_brevonslash1_3747 = {5, &anim_array_brevonslash1_3747[0]};
static bool anim_brevonslash1_3747_initialized;
class BrevonSlash1_3747 : public Active
{
public:
    BrevonSlash1_3747(int x, int y) : Active(x, y, BrevonSlash1_3747_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Brevon_Slash1", 13);
#endif
        this->animations = &anim_brevonslash1_3747;
        if (!anim_brevonslash1_3747_initialized) {
            anim_brevonslash1_3747_initialized = true;
            images_brevonslash1_3747_4_0[0] = get_internal_image(15517);
            images_brevonslash1_3747_4_0[1] = get_internal_image(15514);
            images_brevonslash1_3747_4_0[2] = get_internal_image(15516);
            images_brevonslash1_3747_4_16[0] = get_internal_image(15512);
            images_brevonslash1_3747_4_16[1] = get_internal_image(15521);
            images_brevonslash1_3747_4_16[2] = get_internal_image(15524);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = DISAPPEARING;
        current_animation = animation;
        flags |= FADEOUT;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_brevonslash1_3747(int x, int y)
{
    return new (Active::pool.create()) BrevonSlash1_3747(x, y);
}
static Image* images_brevonwingbeam2_3748_0_0[1];
static Direction direction_brevonwingbeam2_3748_0_0 = {0, 50, 50, 0, 1, images_brevonwingbeam2_3748_0_0, 1};
static Animation anim_brevonwingbeam2_3748_0 = {&direction_brevonwingbeam2_3748_0_0, &direction_brevonwingbeam2_3748_0_0, &direction_brevonwingbeam2_3748_0_0, &direction_brevonwingbeam2_3748_0_0, &direction_brevonwingbeam2_3748_0_0, &direction_brevonwingbeam2_3748_0_0, &direction_brevonwingbeam2_3748_0_0, &direction_brevonwingbeam2_3748_0_0, &direction_brevonwingbeam2_3748_0_0, &direction_brevonwingbeam2_3748_0_0, &direction_brevonwingbeam2_3748_0_0, &direction_brevonwingbeam2_3748_0_0, &direction_brevonwingbeam2_3748_0_0, &direction_brevonwingbeam2_3748_0_0, &direction_brevonwingbeam2_3748_0_0, &direction_brevonwingbeam2_3748_0_0, NULL, &direction_brevonwingbeam2_3748_0_0, &direction_brevonwingbeam2_3748_0_0, &direction_brevonwingbeam2_3748_0_0, &direction_brevonwingbeam2_3748_0_0, &direction_brevonwingbeam2_3748_0_0, &direction_brevonwingbeam2_3748_0_0, &direction_brevonwingbeam2_3748_0_0, &direction_brevonwingbeam2_3748_0_0, &direction_brevonwingbeam2_3748_0_0, &direction_brevonwingbeam2_3748_0_0, &direction_brevonwingbeam2_3748_0_0, &direction_brevonwingbeam2_3748_0_0, &direction_brevonwingbeam2_3748_0_0, &direction_brevonwingbeam2_3748_0_0, &direction_brevonwingbeam2_3748_0_0};
static Animation * anim_array_brevonwingbeam2_3748[1] = {&anim_brevonwingbeam2_3748_0};
static Animations anim_brevonwingbeam2_3748 = {1, &anim_array_brevonwingbeam2_3748[0]};
static bool anim_brevonwingbeam2_3748_initialized;
class BrevonWingBeam2_3748 : public Active
{
public:
    BrevonWingBeam2_3748(int x, int y) : Active(x, y, BrevonWingBeam2_3748_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Brevon_WingBeam 2", 17);
#endif
        this->animations = &anim_brevonwingbeam2_3748;
        if (!anim_brevonwingbeam2_3748_initialized) {
            anim_brevonwingbeam2_3748_initialized = true;
            images_brevonwingbeam2_3748_0_0[0] = get_internal_image(15564);
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
FrameObject * create_brevonwingbeam2_3748(int x, int y)
{
    return new (Active::pool.create()) BrevonWingBeam2_3748(x, y);
}
static Image* images_brevonproxymine_3749_0_0[1];
static Direction direction_brevonproxymine_3749_0_0 = {0, 50, 50, 0, 1, images_brevonproxymine_3749_0_0, 1};
static Image* images_brevonproxymine_3749_0_1[4];
static Direction direction_brevonproxymine_3749_0_1 = {1, 20, 20, 0, -1, images_brevonproxymine_3749_0_1, 4};
static Animation anim_brevonproxymine_3749_0 = {&direction_brevonproxymine_3749_0_0, &direction_brevonproxymine_3749_0_1, &direction_brevonproxymine_3749_0_1, &direction_brevonproxymine_3749_0_1, &direction_brevonproxymine_3749_0_1, &direction_brevonproxymine_3749_0_1, &direction_brevonproxymine_3749_0_1, &direction_brevonproxymine_3749_0_1, &direction_brevonproxymine_3749_0_1, &direction_brevonproxymine_3749_0_1, &direction_brevonproxymine_3749_0_1, &direction_brevonproxymine_3749_0_1, &direction_brevonproxymine_3749_0_1, &direction_brevonproxymine_3749_0_1, &direction_brevonproxymine_3749_0_1, &direction_brevonproxymine_3749_0_1, &direction_brevonproxymine_3749_0_1, &direction_brevonproxymine_3749_0_0, &direction_brevonproxymine_3749_0_0, &direction_brevonproxymine_3749_0_0, &direction_brevonproxymine_3749_0_0, &direction_brevonproxymine_3749_0_0, &direction_brevonproxymine_3749_0_0, &direction_brevonproxymine_3749_0_0, &direction_brevonproxymine_3749_0_0, &direction_brevonproxymine_3749_0_0, &direction_brevonproxymine_3749_0_0, &direction_brevonproxymine_3749_0_0, &direction_brevonproxymine_3749_0_0, &direction_brevonproxymine_3749_0_0, &direction_brevonproxymine_3749_0_0, &direction_brevonproxymine_3749_0_0};
static Animation * anim_array_brevonproxymine_3749[1] = {&anim_brevonproxymine_3749_0};
static Animations anim_brevonproxymine_3749 = {1, &anim_array_brevonproxymine_3749[0]};
static bool anim_brevonproxymine_3749_initialized;
class BrevonProxyMine_3749 : public Active
{
public:
    BrevonProxyMine_3749(int x, int y) : Active(x, y, BrevonProxyMine_3749_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Brevon_ProxyMine", 16);
#endif
        this->animations = &anim_brevonproxymine_3749;
        if (!anim_brevonproxymine_3749_initialized) {
            anim_brevonproxymine_3749_initialized = true;
            images_brevonproxymine_3749_0_0[0] = get_internal_image(15547);
            images_brevonproxymine_3749_0_1[0] = get_internal_image(15548);
            images_brevonproxymine_3749_0_1[1] = get_internal_image(15549);
            images_brevonproxymine_3749_0_1[2] = get_internal_image(15550);
            images_brevonproxymine_3749_0_1[3] = get_internal_image(15551);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 1);
        alterables->values.set(7, 1);
    }
};
FrameObject * create_brevonproxymine_3749(int x, int y)
{
    return new (Active::pool.create()) BrevonProxyMine_3749(x, y);
}
class FDPowerCore5_3750 : public Backdrop
{
public:
    FDPowerCore5_3750(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_PowerCore 5", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15511);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdpowercore5_3750(int x, int y)
{
    return new (Backdrop::pool.create()) FDPowerCore5_3750(x, y);
}
class Backdrop3_3751 : public Backdrop
{
public:
    Backdrop3_3751(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 3", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5450);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop3_3751(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop3_3751(x, y);
}
class Backdrop2_3752 : public Backdrop
{
public:
    Backdrop2_3752(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 2", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5436);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop2_3752(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop2_3752(x, y);
}
class Backdrop_3753 : public Backdrop
{
public:
    Backdrop_3753(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5394);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop_3753(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop_3753(x, y);
}
class Backdrop4_3754 : public Backdrop
{
public:
    Backdrop4_3754(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 4", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5453);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop4_3754(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop4_3754(x, y);
}
class ParallaxSpaceBack_3755 : public SystemBox
{
public:
    ParallaxSpaceBack_3755(int x, int y) : SystemBox(x, y, ParallaxSpaceBack_3755_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Parallax_SpaceBack", 18);
#endif
        flags |= BACKGROUND;
        width = 512;
        height = 320;
        type = PATTERN_IMAGE;
        image = get_internal_image(4329);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_parallaxspaceback_3755(int x, int y)
{
    return new (SystemBox::pool.create()) ParallaxSpaceBack_3755(x, y);
}
class ParallaxSpaceBack2_3756 : public SystemBox
{
public:
    ParallaxSpaceBack2_3756(int x, int y) : SystemBox(x, y, ParallaxSpaceBack2_3756_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Parallax_SpaceBack 2", 20);
#endif
        flags |= BACKGROUND;
        width = 256;
        height = 320;
        type = PATTERN_IMAGE;
        image = get_internal_image(5400);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_parallaxspaceback2_3756(int x, int y)
{
    return new (SystemBox::pool.create()) ParallaxSpaceBack2_3756(x, y);
}
class ParallaxSpaceBack3_3757 : public SystemBox
{
public:
    ParallaxSpaceBack3_3757(int x, int y) : SystemBox(x, y, ParallaxSpaceBack3_3757_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Parallax_SpaceBack 3", 20);
#endif
        flags |= BACKGROUND;
        width = 512;
        height = 320;
        type = PATTERN_IMAGE;
        image = get_internal_image(5387);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_parallaxspaceback3_3757(int x, int y)
{
    return new (SystemBox::pool.create()) ParallaxSpaceBack3_3757(x, y);
}
static Image* images_brevondummycape_3758_0_0[1];
static Direction direction_brevondummycape_3758_0_0 = {0, 50, 50, 0, 1, images_brevondummycape_3758_0_0, 1};
static Animation anim_brevondummycape_3758_0 = {&direction_brevondummycape_3758_0_0, &direction_brevondummycape_3758_0_0, &direction_brevondummycape_3758_0_0, &direction_brevondummycape_3758_0_0, &direction_brevondummycape_3758_0_0, &direction_brevondummycape_3758_0_0, &direction_brevondummycape_3758_0_0, &direction_brevondummycape_3758_0_0, &direction_brevondummycape_3758_0_0, &direction_brevondummycape_3758_0_0, &direction_brevondummycape_3758_0_0, &direction_brevondummycape_3758_0_0, &direction_brevondummycape_3758_0_0, &direction_brevondummycape_3758_0_0, &direction_brevondummycape_3758_0_0, &direction_brevondummycape_3758_0_0, NULL, &direction_brevondummycape_3758_0_0, &direction_brevondummycape_3758_0_0, &direction_brevondummycape_3758_0_0, &direction_brevondummycape_3758_0_0, &direction_brevondummycape_3758_0_0, &direction_brevondummycape_3758_0_0, &direction_brevondummycape_3758_0_0, &direction_brevondummycape_3758_0_0, &direction_brevondummycape_3758_0_0, &direction_brevondummycape_3758_0_0, &direction_brevondummycape_3758_0_0, &direction_brevondummycape_3758_0_0, &direction_brevondummycape_3758_0_0, &direction_brevondummycape_3758_0_0, &direction_brevondummycape_3758_0_0};
static Animation * anim_array_brevondummycape_3758[1] = {&anim_brevondummycape_3758_0};
static Animations anim_brevondummycape_3758 = {1, &anim_array_brevondummycape_3758[0]};
static bool anim_brevondummycape_3758_initialized;
class BrevonDummyCape_3758 : public Active
{
public:
    BrevonDummyCape_3758(int x, int y) : Active(x, y, BrevonDummyCape_3758_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Brevon_DummyCape", 16);
#endif
        this->animations = &anim_brevondummycape_3758;
        if (!anim_brevondummycape_3758_initialized) {
            anim_brevondummycape_3758_initialized = true;
            images_brevondummycape_3758_0_0[0] = get_internal_image(15508);
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
FrameObject * create_brevondummycape_3758(int x, int y)
{
    return new (Active::pool.create()) BrevonDummyCape_3758(x, y);
}
static Image* images_bosstractorbeam_3759_0_0[1];
static Direction direction_bosstractorbeam_3759_0_0 = {0, 50, 50, 0, 1, images_bosstractorbeam_3759_0_0, 1};
static Animation anim_bosstractorbeam_3759_0 = {&direction_bosstractorbeam_3759_0_0, &direction_bosstractorbeam_3759_0_0, &direction_bosstractorbeam_3759_0_0, &direction_bosstractorbeam_3759_0_0, &direction_bosstractorbeam_3759_0_0, &direction_bosstractorbeam_3759_0_0, &direction_bosstractorbeam_3759_0_0, &direction_bosstractorbeam_3759_0_0, &direction_bosstractorbeam_3759_0_0, &direction_bosstractorbeam_3759_0_0, &direction_bosstractorbeam_3759_0_0, &direction_bosstractorbeam_3759_0_0, &direction_bosstractorbeam_3759_0_0, &direction_bosstractorbeam_3759_0_0, &direction_bosstractorbeam_3759_0_0, &direction_bosstractorbeam_3759_0_0, NULL, &direction_bosstractorbeam_3759_0_0, &direction_bosstractorbeam_3759_0_0, &direction_bosstractorbeam_3759_0_0, &direction_bosstractorbeam_3759_0_0, &direction_bosstractorbeam_3759_0_0, &direction_bosstractorbeam_3759_0_0, &direction_bosstractorbeam_3759_0_0, &direction_bosstractorbeam_3759_0_0, &direction_bosstractorbeam_3759_0_0, &direction_bosstractorbeam_3759_0_0, &direction_bosstractorbeam_3759_0_0, &direction_bosstractorbeam_3759_0_0, &direction_bosstractorbeam_3759_0_0, &direction_bosstractorbeam_3759_0_0, &direction_bosstractorbeam_3759_0_0};
static Animation * anim_array_bosstractorbeam_3759[1] = {&anim_bosstractorbeam_3759_0};
static Animations anim_bosstractorbeam_3759 = {1, &anim_array_bosstractorbeam_3759[0]};
static bool anim_bosstractorbeam_3759_initialized;
class BossTractorBeam_3759 : public Active
{
public:
    BossTractorBeam_3759(int x, int y) : Active(x, y, BossTractorBeam_3759_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_TractorBeam", 16);
#endif
        this->animations = &anim_bosstractorbeam_3759;
        if (!anim_bosstractorbeam_3759_initialized) {
            anim_bosstractorbeam_3759_initialized = true;
            images_bosstractorbeam_3759_0_0[0] = get_internal_image(15510);
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
FrameObject * create_bosstractorbeam_3759(int x, int y)
{
    return new (Active::pool.create()) BossTractorBeam_3759(x, y);
}
static Image* images_bosshealthbar1_3760_0_0[4];
static Direction direction_bosshealthbar1_3760_0_0 = {0, 0, 0, 0, -1, images_bosshealthbar1_3760_0_0, 4};
static Animation anim_bosshealthbar1_3760_0 = {&direction_bosshealthbar1_3760_0_0, &direction_bosshealthbar1_3760_0_0, &direction_bosshealthbar1_3760_0_0, &direction_bosshealthbar1_3760_0_0, &direction_bosshealthbar1_3760_0_0, &direction_bosshealthbar1_3760_0_0, &direction_bosshealthbar1_3760_0_0, &direction_bosshealthbar1_3760_0_0, &direction_bosshealthbar1_3760_0_0, &direction_bosshealthbar1_3760_0_0, &direction_bosshealthbar1_3760_0_0, &direction_bosshealthbar1_3760_0_0, &direction_bosshealthbar1_3760_0_0, &direction_bosshealthbar1_3760_0_0, &direction_bosshealthbar1_3760_0_0, &direction_bosshealthbar1_3760_0_0, NULL, &direction_bosshealthbar1_3760_0_0, &direction_bosshealthbar1_3760_0_0, &direction_bosshealthbar1_3760_0_0, &direction_bosshealthbar1_3760_0_0, &direction_bosshealthbar1_3760_0_0, &direction_bosshealthbar1_3760_0_0, &direction_bosshealthbar1_3760_0_0, &direction_bosshealthbar1_3760_0_0, &direction_bosshealthbar1_3760_0_0, &direction_bosshealthbar1_3760_0_0, &direction_bosshealthbar1_3760_0_0, &direction_bosshealthbar1_3760_0_0, &direction_bosshealthbar1_3760_0_0, &direction_bosshealthbar1_3760_0_0, &direction_bosshealthbar1_3760_0_0};
static Animation * anim_array_bosshealthbar1_3760[1] = {&anim_bosshealthbar1_3760_0};
static Animations anim_bosshealthbar1_3760 = {1, &anim_array_bosshealthbar1_3760[0]};
static bool anim_bosshealthbar1_3760_initialized;
class BossHealthbar1_3760 : public Active
{
public:
    BossHealthbar1_3760(int x, int y) : Active(x, y, BossHealthbar1_3760_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_Healthbar 1", 16);
#endif
        this->animations = &anim_bosshealthbar1_3760;
        if (!anim_bosshealthbar1_3760_initialized) {
            anim_bosshealthbar1_3760_initialized = true;
            images_bosshealthbar1_3760_0_0[0] = get_internal_image(15519);
            images_bosshealthbar1_3760_0_0[1] = get_internal_image(15518);
            images_bosshealthbar1_3760_0_0[2] = get_internal_image(15519);
            images_bosshealthbar1_3760_0_0[3] = get_internal_image(15520);
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
FrameObject * create_bosshealthbar1_3760(int x, int y)
{
    return new (Active::pool.create()) BossHealthbar1_3760(x, y);
}
static Image* images_bosshealthbar2_3761_0_0[4];
static Direction direction_bosshealthbar2_3761_0_0 = {0, 0, 0, 0, -1, images_bosshealthbar2_3761_0_0, 4};
static Animation anim_bosshealthbar2_3761_0 = {&direction_bosshealthbar2_3761_0_0, &direction_bosshealthbar2_3761_0_0, &direction_bosshealthbar2_3761_0_0, &direction_bosshealthbar2_3761_0_0, &direction_bosshealthbar2_3761_0_0, &direction_bosshealthbar2_3761_0_0, &direction_bosshealthbar2_3761_0_0, &direction_bosshealthbar2_3761_0_0, &direction_bosshealthbar2_3761_0_0, &direction_bosshealthbar2_3761_0_0, &direction_bosshealthbar2_3761_0_0, &direction_bosshealthbar2_3761_0_0, &direction_bosshealthbar2_3761_0_0, &direction_bosshealthbar2_3761_0_0, &direction_bosshealthbar2_3761_0_0, &direction_bosshealthbar2_3761_0_0, NULL, &direction_bosshealthbar2_3761_0_0, &direction_bosshealthbar2_3761_0_0, &direction_bosshealthbar2_3761_0_0, &direction_bosshealthbar2_3761_0_0, &direction_bosshealthbar2_3761_0_0, &direction_bosshealthbar2_3761_0_0, &direction_bosshealthbar2_3761_0_0, &direction_bosshealthbar2_3761_0_0, &direction_bosshealthbar2_3761_0_0, &direction_bosshealthbar2_3761_0_0, &direction_bosshealthbar2_3761_0_0, &direction_bosshealthbar2_3761_0_0, &direction_bosshealthbar2_3761_0_0, &direction_bosshealthbar2_3761_0_0, &direction_bosshealthbar2_3761_0_0};
static Animation * anim_array_bosshealthbar2_3761[1] = {&anim_bosshealthbar2_3761_0};
static Animations anim_bosshealthbar2_3761 = {1, &anim_array_bosshealthbar2_3761[0]};
static bool anim_bosshealthbar2_3761_initialized;
class BossHealthbar2_3761 : public Active
{
public:
    BossHealthbar2_3761(int x, int y) : Active(x, y, BossHealthbar2_3761_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_Healthbar 2", 16);
#endif
        this->animations = &anim_bosshealthbar2_3761;
        if (!anim_bosshealthbar2_3761_initialized) {
            anim_bosshealthbar2_3761_initialized = true;
            images_bosshealthbar2_3761_0_0[0] = get_internal_image(15522);
            images_bosshealthbar2_3761_0_0[1] = get_internal_image(15515);
            images_bosshealthbar2_3761_0_0[2] = get_internal_image(15522);
            images_bosshealthbar2_3761_0_0[3] = get_internal_image(15523);
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
FrameObject * create_bosshealthbar2_3761(int x, int y)
{
    return new (Active::pool.create()) BossHealthbar2_3761(x, y);
}
class DialogData_3762 : public Text
{
public:
    DialogData_3762(int x, int y) : Text(x, y, DialogData_3762_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Dialog Data", 11);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("01 12 li_46_01 I'll never forgive you!", 38));
        add_line(std::string("12 52 br_12_01 I have no use for forgiveness, esp. from someone who puts my homeworld at risk for an oversized battery.", 119));
        add_line(std::string("12 52 br_12_02 I offer you one final chance. Leave. Now.", 56));
        add_line(std::string("12 52 br_12_03 So be it.", 24));
        add_line(std::string("01 12 li_46_02 Your machines won't save you from the dragon you've unleashed! I WILL DESTROY EVERYTHING YOU THROW AT ME!", 120));
        add_line(std::string("01 12 li_46_02 I WILL MAKE YOU PAY FOR WHAT YOU HAVE DONE!!", 59));
        add_line(std::string("12 48 br_13_01 I'd like to see you try.", 39));
        add_line(std::string("02 75 ca_40_01 What you did is unforgiveable!", 45));
        add_line(std::string("02 75 ca_40_02 NO! You're DEAD!", 31));
        add_line(std::string("02 60 ca_40_03 YEAH! In your FACE!", 34));
        add_line(std::string("02 60 ca_40_04 I'll be taking that Kingdom Stone now!", 53));
        add_line(std::string("05 00 to_28_01 C'mon!", 21));
        add_line(std::string("05 00 to_28_02 Lilac!", 21));
        add_line(std::string("01 00 li_47_02 The stone!", 25));
        add_line(std::string("05 00 to_28_03 We're out of time!", 33));
        add_line(std::string("01 00 li_47_03 But our world won't survive without it!01 00 li_47_04 Take Milla and go! I'll catch up!", 102));
        add_line(std::string("02 00 ca_41_01 I gotta help her!", 32));
        add_line(std::string("02 00 ca_41_02 No no no NO!!", 28));
        add_line(std::string("05 00 to_28_04 We'll blast our way through it! To the ship!", 59));
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
FrameObject * create_dialogdata_3762(int x, int y)
{
    return new (Text::pool.create()) DialogData_3762(x, y);
}
static Image* images_brevonsuitspin_3763_0_0[1];
static Direction direction_brevonsuitspin_3763_0_0 = {0, 50, 50, 0, 1, images_brevonsuitspin_3763_0_0, 1};
static Image* images_brevonsuitspin_3763_0_16[1];
static Direction direction_brevonsuitspin_3763_0_16 = {16, 50, 50, 0, 1, images_brevonsuitspin_3763_0_16, 1};
static Animation anim_brevonsuitspin_3763_0 = {&direction_brevonsuitspin_3763_0_0, &direction_brevonsuitspin_3763_0_0, &direction_brevonsuitspin_3763_0_0, &direction_brevonsuitspin_3763_0_0, &direction_brevonsuitspin_3763_0_0, &direction_brevonsuitspin_3763_0_0, &direction_brevonsuitspin_3763_0_0, &direction_brevonsuitspin_3763_0_0, NULL, &direction_brevonsuitspin_3763_0_16, &direction_brevonsuitspin_3763_0_16, &direction_brevonsuitspin_3763_0_16, &direction_brevonsuitspin_3763_0_16, &direction_brevonsuitspin_3763_0_16, &direction_brevonsuitspin_3763_0_16, &direction_brevonsuitspin_3763_0_16, &direction_brevonsuitspin_3763_0_16, &direction_brevonsuitspin_3763_0_16, &direction_brevonsuitspin_3763_0_16, &direction_brevonsuitspin_3763_0_16, &direction_brevonsuitspin_3763_0_16, &direction_brevonsuitspin_3763_0_16, &direction_brevonsuitspin_3763_0_16, &direction_brevonsuitspin_3763_0_16, NULL, &direction_brevonsuitspin_3763_0_0, &direction_brevonsuitspin_3763_0_0, &direction_brevonsuitspin_3763_0_0, &direction_brevonsuitspin_3763_0_0, &direction_brevonsuitspin_3763_0_0, &direction_brevonsuitspin_3763_0_0, &direction_brevonsuitspin_3763_0_0};
static Animation * anim_array_brevonsuitspin_3763[1] = {&anim_brevonsuitspin_3763_0};
static Animations anim_brevonsuitspin_3763 = {1, &anim_array_brevonsuitspin_3763[0]};
static bool anim_brevonsuitspin_3763_initialized;
class BrevonSuitSpin_3763 : public Active
{
public:
    BrevonSuitSpin_3763(int x, int y) : Active(x, y, BrevonSuitSpin_3763_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BrevonSuit_Spin", 15);
#endif
        this->animations = &anim_brevonsuitspin_3763;
        if (!anim_brevonsuitspin_3763_initialized) {
            anim_brevonsuitspin_3763_initialized = true;
            images_brevonsuitspin_3763_0_0[0] = get_internal_image(5688);
            images_brevonsuitspin_3763_0_16[0] = get_internal_image(5780);
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
FrameObject * create_brevonsuitspin_3763(int x, int y)
{
    return new (Active::pool.create()) BrevonSuitSpin_3763(x, y);
}
static Image* images_bossenergypunch_3764_0_0[1];
static Direction direction_bossenergypunch_3764_0_0 = {0, 50, 50, 0, 1, images_bossenergypunch_3764_0_0, 1};
static Image* images_bossenergypunch_3764_0_16[1];
static Direction direction_bossenergypunch_3764_0_16 = {16, 50, 50, 0, 1, images_bossenergypunch_3764_0_16, 1};
static Animation anim_bossenergypunch_3764_0 = {&direction_bossenergypunch_3764_0_0, &direction_bossenergypunch_3764_0_0, &direction_bossenergypunch_3764_0_0, &direction_bossenergypunch_3764_0_0, &direction_bossenergypunch_3764_0_0, &direction_bossenergypunch_3764_0_0, &direction_bossenergypunch_3764_0_0, &direction_bossenergypunch_3764_0_0, NULL, &direction_bossenergypunch_3764_0_16, &direction_bossenergypunch_3764_0_16, &direction_bossenergypunch_3764_0_16, &direction_bossenergypunch_3764_0_16, &direction_bossenergypunch_3764_0_16, &direction_bossenergypunch_3764_0_16, &direction_bossenergypunch_3764_0_16, &direction_bossenergypunch_3764_0_16, &direction_bossenergypunch_3764_0_16, &direction_bossenergypunch_3764_0_16, &direction_bossenergypunch_3764_0_16, &direction_bossenergypunch_3764_0_16, &direction_bossenergypunch_3764_0_16, &direction_bossenergypunch_3764_0_16, &direction_bossenergypunch_3764_0_16, NULL, &direction_bossenergypunch_3764_0_0, &direction_bossenergypunch_3764_0_0, &direction_bossenergypunch_3764_0_0, &direction_bossenergypunch_3764_0_0, &direction_bossenergypunch_3764_0_0, &direction_bossenergypunch_3764_0_0, &direction_bossenergypunch_3764_0_0};
static Animation * anim_array_bossenergypunch_3764[1] = {&anim_bossenergypunch_3764_0};
static Animations anim_bossenergypunch_3764 = {1, &anim_array_bossenergypunch_3764[0]};
static bool anim_bossenergypunch_3764_initialized;
class BossEnergyPunch_3764 : public Active
{
public:
    BossEnergyPunch_3764(int x, int y) : Active(x, y, BossEnergyPunch_3764_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_EnergyPunch", 16);
#endif
        set_visible(false);
        this->animations = &anim_bossenergypunch_3764;
        if (!anim_bossenergypunch_3764_initialized) {
            anim_bossenergypunch_3764_initialized = true;
            images_bossenergypunch_3764_0_0[0] = get_internal_image(8708);
            images_bossenergypunch_3764_0_16[0] = get_internal_image(8709);
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
FrameObject * create_bossenergypunch_3764(int x, int y)
{
    return new (Active::pool.create()) BossEnergyPunch_3764(x, y);
}
static Image* images_brevonsuitbackgun_3765_0_0[1];
static Direction direction_brevonsuitbackgun_3765_0_0 = {0, 50, 50, 0, 1, images_brevonsuitbackgun_3765_0_0, 1};
static Image* images_brevonsuitbackgun_3765_0_1[1];
static Direction direction_brevonsuitbackgun_3765_0_1 = {1, 50, 50, 0, 1, images_brevonsuitbackgun_3765_0_1, 1};
static Image* images_brevonsuitbackgun_3765_0_16[1];
static Direction direction_brevonsuitbackgun_3765_0_16 = {16, 50, 50, 0, 1, images_brevonsuitbackgun_3765_0_16, 1};
static Image* images_brevonsuitbackgun_3765_0_17[1];
static Direction direction_brevonsuitbackgun_3765_0_17 = {17, 50, 50, 0, 1, images_brevonsuitbackgun_3765_0_17, 1};
static Animation anim_brevonsuitbackgun_3765_0 = {&direction_brevonsuitbackgun_3765_0_0, &direction_brevonsuitbackgun_3765_0_1, &direction_brevonsuitbackgun_3765_0_1, &direction_brevonsuitbackgun_3765_0_1, &direction_brevonsuitbackgun_3765_0_1, &direction_brevonsuitbackgun_3765_0_1, &direction_brevonsuitbackgun_3765_0_1, &direction_brevonsuitbackgun_3765_0_1, &direction_brevonsuitbackgun_3765_0_1, &direction_brevonsuitbackgun_3765_0_16, &direction_brevonsuitbackgun_3765_0_16, &direction_brevonsuitbackgun_3765_0_16, &direction_brevonsuitbackgun_3765_0_16, &direction_brevonsuitbackgun_3765_0_16, &direction_brevonsuitbackgun_3765_0_16, &direction_brevonsuitbackgun_3765_0_16, &direction_brevonsuitbackgun_3765_0_16, &direction_brevonsuitbackgun_3765_0_17, &direction_brevonsuitbackgun_3765_0_17, &direction_brevonsuitbackgun_3765_0_17, &direction_brevonsuitbackgun_3765_0_17, &direction_brevonsuitbackgun_3765_0_17, &direction_brevonsuitbackgun_3765_0_17, &direction_brevonsuitbackgun_3765_0_17, &direction_brevonsuitbackgun_3765_0_17, &direction_brevonsuitbackgun_3765_0_0, &direction_brevonsuitbackgun_3765_0_0, &direction_brevonsuitbackgun_3765_0_0, &direction_brevonsuitbackgun_3765_0_0, &direction_brevonsuitbackgun_3765_0_0, &direction_brevonsuitbackgun_3765_0_0, &direction_brevonsuitbackgun_3765_0_0};
static Animation * anim_array_brevonsuitbackgun_3765[1] = {&anim_brevonsuitbackgun_3765_0};
static Animations anim_brevonsuitbackgun_3765 = {1, &anim_array_brevonsuitbackgun_3765[0]};
static bool anim_brevonsuitbackgun_3765_initialized;
class BrevonSuitBackGun_3765 : public Active
{
public:
    BrevonSuitBackGun_3765(int x, int y) : Active(x, y, BrevonSuitBackGun_3765_type)
    {
        // qualifiers: 2
#ifndef NDEBUG
        name = std::string("BrevonSuit_BackGun", 18);
#endif
        this->animations = &anim_brevonsuitbackgun_3765;
        if (!anim_brevonsuitbackgun_3765_initialized) {
            anim_brevonsuitbackgun_3765_initialized = true;
            images_brevonsuitbackgun_3765_0_0[0] = get_internal_image(8714);
            images_brevonsuitbackgun_3765_0_1[0] = get_internal_image(8715);
            images_brevonsuitbackgun_3765_0_16[0] = get_internal_image(9007);
            images_brevonsuitbackgun_3765_0_17[0] = get_internal_image(9012);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, -10);
    }
};
FrameObject * create_brevonsuitbackgun_3765(int x, int y)
{
    return new (Active::pool.create()) BrevonSuitBackGun_3765(x, y);
}
static Image* images_brevonsuitbackarm_3766_0_0[1];
static Direction direction_brevonsuitbackarm_3766_0_0 = {0, 50, 50, 0, 1, images_brevonsuitbackarm_3766_0_0, 1};
static Image* images_brevonsuitbackarm_3766_0_1[1];
static Direction direction_brevonsuitbackarm_3766_0_1 = {1, 50, 50, 0, 1, images_brevonsuitbackarm_3766_0_1, 1};
static Image* images_brevonsuitbackarm_3766_0_16[1];
static Direction direction_brevonsuitbackarm_3766_0_16 = {16, 50, 50, 0, 1, images_brevonsuitbackarm_3766_0_16, 1};
static Image* images_brevonsuitbackarm_3766_0_17[1];
static Direction direction_brevonsuitbackarm_3766_0_17 = {17, 50, 50, 0, 1, images_brevonsuitbackarm_3766_0_17, 1};
static Animation anim_brevonsuitbackarm_3766_0 = {&direction_brevonsuitbackarm_3766_0_0, &direction_brevonsuitbackarm_3766_0_1, &direction_brevonsuitbackarm_3766_0_1, &direction_brevonsuitbackarm_3766_0_1, &direction_brevonsuitbackarm_3766_0_1, &direction_brevonsuitbackarm_3766_0_1, &direction_brevonsuitbackarm_3766_0_1, &direction_brevonsuitbackarm_3766_0_1, &direction_brevonsuitbackarm_3766_0_1, &direction_brevonsuitbackarm_3766_0_16, &direction_brevonsuitbackarm_3766_0_16, &direction_brevonsuitbackarm_3766_0_16, &direction_brevonsuitbackarm_3766_0_16, &direction_brevonsuitbackarm_3766_0_16, &direction_brevonsuitbackarm_3766_0_16, &direction_brevonsuitbackarm_3766_0_16, &direction_brevonsuitbackarm_3766_0_16, &direction_brevonsuitbackarm_3766_0_17, &direction_brevonsuitbackarm_3766_0_17, &direction_brevonsuitbackarm_3766_0_17, &direction_brevonsuitbackarm_3766_0_17, &direction_brevonsuitbackarm_3766_0_17, &direction_brevonsuitbackarm_3766_0_17, &direction_brevonsuitbackarm_3766_0_17, &direction_brevonsuitbackarm_3766_0_17, &direction_brevonsuitbackarm_3766_0_0, &direction_brevonsuitbackarm_3766_0_0, &direction_brevonsuitbackarm_3766_0_0, &direction_brevonsuitbackarm_3766_0_0, &direction_brevonsuitbackarm_3766_0_0, &direction_brevonsuitbackarm_3766_0_0, &direction_brevonsuitbackarm_3766_0_0};
static Animation * anim_array_brevonsuitbackarm_3766[1] = {&anim_brevonsuitbackarm_3766_0};
static Animations anim_brevonsuitbackarm_3766 = {1, &anim_array_brevonsuitbackarm_3766[0]};
static bool anim_brevonsuitbackarm_3766_initialized;
class BrevonSuitBackArm_3766 : public Active
{
public:
    BrevonSuitBackArm_3766(int x, int y) : Active(x, y, BrevonSuitBackArm_3766_type)
    {
        // qualifiers: 2
#ifndef NDEBUG
        name = std::string("BrevonSuit_BackArm", 18);
#endif
        this->animations = &anim_brevonsuitbackarm_3766;
        if (!anim_brevonsuitbackarm_3766_initialized) {
            anim_brevonsuitbackarm_3766_initialized = true;
            images_brevonsuitbackarm_3766_0_0[0] = get_internal_image(9014);
            images_brevonsuitbackarm_3766_0_1[0] = get_internal_image(9029);
            images_brevonsuitbackarm_3766_0_16[0] = get_internal_image(9079);
            images_brevonsuitbackarm_3766_0_17[0] = get_internal_image(9080);
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
FrameObject * create_brevonsuitbackarm_3766(int x, int y)
{
    return new (Active::pool.create()) BrevonSuitBackArm_3766(x, y);
}
static Image* images_brevonsuitbackleg_3767_0_0[1];
static Direction direction_brevonsuitbackleg_3767_0_0 = {0, 50, 50, 0, 1, images_brevonsuitbackleg_3767_0_0, 1};
static Image* images_brevonsuitbackleg_3767_0_1[1];
static Direction direction_brevonsuitbackleg_3767_0_1 = {1, 50, 50, 0, 1, images_brevonsuitbackleg_3767_0_1, 1};
static Image* images_brevonsuitbackleg_3767_0_16[1];
static Direction direction_brevonsuitbackleg_3767_0_16 = {16, 50, 50, 0, 1, images_brevonsuitbackleg_3767_0_16, 1};
static Image* images_brevonsuitbackleg_3767_0_17[1];
static Direction direction_brevonsuitbackleg_3767_0_17 = {17, 50, 50, 0, 1, images_brevonsuitbackleg_3767_0_17, 1};
static Animation anim_brevonsuitbackleg_3767_0 = {&direction_brevonsuitbackleg_3767_0_0, &direction_brevonsuitbackleg_3767_0_1, &direction_brevonsuitbackleg_3767_0_1, &direction_brevonsuitbackleg_3767_0_1, &direction_brevonsuitbackleg_3767_0_1, &direction_brevonsuitbackleg_3767_0_1, &direction_brevonsuitbackleg_3767_0_1, &direction_brevonsuitbackleg_3767_0_1, &direction_brevonsuitbackleg_3767_0_1, &direction_brevonsuitbackleg_3767_0_16, &direction_brevonsuitbackleg_3767_0_16, &direction_brevonsuitbackleg_3767_0_16, &direction_brevonsuitbackleg_3767_0_16, &direction_brevonsuitbackleg_3767_0_16, &direction_brevonsuitbackleg_3767_0_16, &direction_brevonsuitbackleg_3767_0_16, &direction_brevonsuitbackleg_3767_0_16, &direction_brevonsuitbackleg_3767_0_17, &direction_brevonsuitbackleg_3767_0_17, &direction_brevonsuitbackleg_3767_0_17, &direction_brevonsuitbackleg_3767_0_17, &direction_brevonsuitbackleg_3767_0_17, &direction_brevonsuitbackleg_3767_0_17, &direction_brevonsuitbackleg_3767_0_17, &direction_brevonsuitbackleg_3767_0_17, &direction_brevonsuitbackleg_3767_0_0, &direction_brevonsuitbackleg_3767_0_0, &direction_brevonsuitbackleg_3767_0_0, &direction_brevonsuitbackleg_3767_0_0, &direction_brevonsuitbackleg_3767_0_0, &direction_brevonsuitbackleg_3767_0_0, &direction_brevonsuitbackleg_3767_0_0};
static Animation * anim_array_brevonsuitbackleg_3767[1] = {&anim_brevonsuitbackleg_3767_0};
static Animations anim_brevonsuitbackleg_3767 = {1, &anim_array_brevonsuitbackleg_3767[0]};
static bool anim_brevonsuitbackleg_3767_initialized;
class BrevonSuitBackLeg_3767 : public Active
{
public:
    BrevonSuitBackLeg_3767(int x, int y) : Active(x, y, BrevonSuitBackLeg_3767_type)
    {
        // qualifiers: 2
#ifndef NDEBUG
        name = std::string("BrevonSuit_BackLeg", 18);
#endif
        this->animations = &anim_brevonsuitbackleg_3767;
        if (!anim_brevonsuitbackleg_3767_initialized) {
            anim_brevonsuitbackleg_3767_initialized = true;
            images_brevonsuitbackleg_3767_0_0[0] = get_internal_image(9081);
            images_brevonsuitbackleg_3767_0_1[0] = get_internal_image(9082);
            images_brevonsuitbackleg_3767_0_16[0] = get_internal_image(9083);
            images_brevonsuitbackleg_3767_0_17[0] = get_internal_image(9084);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 20);
    }
};
FrameObject * create_brevonsuitbackleg_3767(int x, int y)
{
    return new (Active::pool.create()) BrevonSuitBackLeg_3767(x, y);
}
static Image* images_brevonsuitbackknee_3768_0_0[1];
static Direction direction_brevonsuitbackknee_3768_0_0 = {0, 50, 50, 0, 1, images_brevonsuitbackknee_3768_0_0, 1};
static Image* images_brevonsuitbackknee_3768_0_1[1];
static Direction direction_brevonsuitbackknee_3768_0_1 = {1, 50, 50, 0, 1, images_brevonsuitbackknee_3768_0_1, 1};
static Image* images_brevonsuitbackknee_3768_0_16[1];
static Direction direction_brevonsuitbackknee_3768_0_16 = {16, 50, 50, 0, 1, images_brevonsuitbackknee_3768_0_16, 1};
static Image* images_brevonsuitbackknee_3768_0_17[1];
static Direction direction_brevonsuitbackknee_3768_0_17 = {17, 50, 50, 0, 1, images_brevonsuitbackknee_3768_0_17, 1};
static Animation anim_brevonsuitbackknee_3768_0 = {&direction_brevonsuitbackknee_3768_0_0, &direction_brevonsuitbackknee_3768_0_1, &direction_brevonsuitbackknee_3768_0_1, &direction_brevonsuitbackknee_3768_0_1, &direction_brevonsuitbackknee_3768_0_1, &direction_brevonsuitbackknee_3768_0_1, &direction_brevonsuitbackknee_3768_0_1, &direction_brevonsuitbackknee_3768_0_1, &direction_brevonsuitbackknee_3768_0_1, &direction_brevonsuitbackknee_3768_0_16, &direction_brevonsuitbackknee_3768_0_16, &direction_brevonsuitbackknee_3768_0_16, &direction_brevonsuitbackknee_3768_0_16, &direction_brevonsuitbackknee_3768_0_16, &direction_brevonsuitbackknee_3768_0_16, &direction_brevonsuitbackknee_3768_0_16, &direction_brevonsuitbackknee_3768_0_16, &direction_brevonsuitbackknee_3768_0_17, &direction_brevonsuitbackknee_3768_0_17, &direction_brevonsuitbackknee_3768_0_17, &direction_brevonsuitbackknee_3768_0_17, &direction_brevonsuitbackknee_3768_0_17, &direction_brevonsuitbackknee_3768_0_17, &direction_brevonsuitbackknee_3768_0_17, &direction_brevonsuitbackknee_3768_0_17, &direction_brevonsuitbackknee_3768_0_0, &direction_brevonsuitbackknee_3768_0_0, &direction_brevonsuitbackknee_3768_0_0, &direction_brevonsuitbackknee_3768_0_0, &direction_brevonsuitbackknee_3768_0_0, &direction_brevonsuitbackknee_3768_0_0, &direction_brevonsuitbackknee_3768_0_0};
static Animation * anim_array_brevonsuitbackknee_3768[1] = {&anim_brevonsuitbackknee_3768_0};
static Animations anim_brevonsuitbackknee_3768 = {1, &anim_array_brevonsuitbackknee_3768[0]};
static bool anim_brevonsuitbackknee_3768_initialized;
class BrevonSuitBackKnee_3768 : public Active
{
public:
    BrevonSuitBackKnee_3768(int x, int y) : Active(x, y, BrevonSuitBackKnee_3768_type)
    {
        // qualifiers: 2
#ifndef NDEBUG
        name = std::string("BrevonSuit_BackKnee", 19);
#endif
        this->animations = &anim_brevonsuitbackknee_3768;
        if (!anim_brevonsuitbackknee_3768_initialized) {
            anim_brevonsuitbackknee_3768_initialized = true;
            images_brevonsuitbackknee_3768_0_0[0] = get_internal_image(9085);
            images_brevonsuitbackknee_3768_0_1[0] = get_internal_image(9087);
            images_brevonsuitbackknee_3768_0_16[0] = get_internal_image(9088);
            images_brevonsuitbackknee_3768_0_17[0] = get_internal_image(9089);
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
FrameObject * create_brevonsuitbackknee_3768(int x, int y)
{
    return new (Active::pool.create()) BrevonSuitBackKnee_3768(x, y);
}
static Image* images_brevonsuitbackfoot_3769_0_0[1];
static Direction direction_brevonsuitbackfoot_3769_0_0 = {0, 50, 50, 0, 1, images_brevonsuitbackfoot_3769_0_0, 1};
static Image* images_brevonsuitbackfoot_3769_0_1[1];
static Direction direction_brevonsuitbackfoot_3769_0_1 = {1, 50, 50, 0, 1, images_brevonsuitbackfoot_3769_0_1, 1};
static Image* images_brevonsuitbackfoot_3769_0_16[1];
static Direction direction_brevonsuitbackfoot_3769_0_16 = {16, 50, 50, 0, 1, images_brevonsuitbackfoot_3769_0_16, 1};
static Image* images_brevonsuitbackfoot_3769_0_17[1];
static Direction direction_brevonsuitbackfoot_3769_0_17 = {17, 50, 50, 0, 1, images_brevonsuitbackfoot_3769_0_17, 1};
static Animation anim_brevonsuitbackfoot_3769_0 = {&direction_brevonsuitbackfoot_3769_0_0, &direction_brevonsuitbackfoot_3769_0_1, &direction_brevonsuitbackfoot_3769_0_1, &direction_brevonsuitbackfoot_3769_0_1, &direction_brevonsuitbackfoot_3769_0_1, &direction_brevonsuitbackfoot_3769_0_1, &direction_brevonsuitbackfoot_3769_0_1, &direction_brevonsuitbackfoot_3769_0_1, &direction_brevonsuitbackfoot_3769_0_1, &direction_brevonsuitbackfoot_3769_0_16, &direction_brevonsuitbackfoot_3769_0_16, &direction_brevonsuitbackfoot_3769_0_16, &direction_brevonsuitbackfoot_3769_0_16, &direction_brevonsuitbackfoot_3769_0_16, &direction_brevonsuitbackfoot_3769_0_16, &direction_brevonsuitbackfoot_3769_0_16, &direction_brevonsuitbackfoot_3769_0_16, &direction_brevonsuitbackfoot_3769_0_17, &direction_brevonsuitbackfoot_3769_0_17, &direction_brevonsuitbackfoot_3769_0_17, &direction_brevonsuitbackfoot_3769_0_17, &direction_brevonsuitbackfoot_3769_0_17, &direction_brevonsuitbackfoot_3769_0_17, &direction_brevonsuitbackfoot_3769_0_17, &direction_brevonsuitbackfoot_3769_0_17, &direction_brevonsuitbackfoot_3769_0_0, &direction_brevonsuitbackfoot_3769_0_0, &direction_brevonsuitbackfoot_3769_0_0, &direction_brevonsuitbackfoot_3769_0_0, &direction_brevonsuitbackfoot_3769_0_0, &direction_brevonsuitbackfoot_3769_0_0, &direction_brevonsuitbackfoot_3769_0_0};
static Animation * anim_array_brevonsuitbackfoot_3769[1] = {&anim_brevonsuitbackfoot_3769_0};
static Animations anim_brevonsuitbackfoot_3769 = {1, &anim_array_brevonsuitbackfoot_3769[0]};
static bool anim_brevonsuitbackfoot_3769_initialized;
class BrevonSuitBackFoot_3769 : public Active
{
public:
    BrevonSuitBackFoot_3769(int x, int y) : Active(x, y, BrevonSuitBackFoot_3769_type)
    {
        // qualifiers: 2
#ifndef NDEBUG
        name = std::string("BrevonSuit_BackFoot", 19);
#endif
        this->animations = &anim_brevonsuitbackfoot_3769;
        if (!anim_brevonsuitbackfoot_3769_initialized) {
            anim_brevonsuitbackfoot_3769_initialized = true;
            images_brevonsuitbackfoot_3769_0_0[0] = get_internal_image(9090);
            images_brevonsuitbackfoot_3769_0_1[0] = get_internal_image(9091);
            images_brevonsuitbackfoot_3769_0_16[0] = get_internal_image(9122);
            images_brevonsuitbackfoot_3769_0_17[0] = get_internal_image(9123);
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
FrameObject * create_brevonsuitbackfoot_3769(int x, int y)
{
    return new (Active::pool.create()) BrevonSuitBackFoot_3769(x, y);
}
static Image* images_brevonsuithead_3770_0_0[1];
static Direction direction_brevonsuithead_3770_0_0 = {0, 50, 50, 0, 1, images_brevonsuithead_3770_0_0, 1};
static Image* images_brevonsuithead_3770_0_1[1];
static Direction direction_brevonsuithead_3770_0_1 = {1, 50, 50, 0, 1, images_brevonsuithead_3770_0_1, 1};
static Image* images_brevonsuithead_3770_0_16[1];
static Direction direction_brevonsuithead_3770_0_16 = {16, 50, 50, 0, 1, images_brevonsuithead_3770_0_16, 1};
static Image* images_brevonsuithead_3770_0_17[1];
static Direction direction_brevonsuithead_3770_0_17 = {17, 50, 50, 0, 1, images_brevonsuithead_3770_0_17, 1};
static Animation anim_brevonsuithead_3770_0 = {&direction_brevonsuithead_3770_0_0, &direction_brevonsuithead_3770_0_1, &direction_brevonsuithead_3770_0_1, &direction_brevonsuithead_3770_0_1, &direction_brevonsuithead_3770_0_1, &direction_brevonsuithead_3770_0_1, &direction_brevonsuithead_3770_0_1, &direction_brevonsuithead_3770_0_1, &direction_brevonsuithead_3770_0_1, &direction_brevonsuithead_3770_0_16, &direction_brevonsuithead_3770_0_16, &direction_brevonsuithead_3770_0_16, &direction_brevonsuithead_3770_0_16, &direction_brevonsuithead_3770_0_16, &direction_brevonsuithead_3770_0_16, &direction_brevonsuithead_3770_0_16, &direction_brevonsuithead_3770_0_16, &direction_brevonsuithead_3770_0_17, &direction_brevonsuithead_3770_0_17, &direction_brevonsuithead_3770_0_17, &direction_brevonsuithead_3770_0_17, &direction_brevonsuithead_3770_0_17, &direction_brevonsuithead_3770_0_17, &direction_brevonsuithead_3770_0_17, &direction_brevonsuithead_3770_0_17, &direction_brevonsuithead_3770_0_0, &direction_brevonsuithead_3770_0_0, &direction_brevonsuithead_3770_0_0, &direction_brevonsuithead_3770_0_0, &direction_brevonsuithead_3770_0_0, &direction_brevonsuithead_3770_0_0, &direction_brevonsuithead_3770_0_0};
static Animation * anim_array_brevonsuithead_3770[1] = {&anim_brevonsuithead_3770_0};
static Animations anim_brevonsuithead_3770 = {1, &anim_array_brevonsuithead_3770[0]};
static bool anim_brevonsuithead_3770_initialized;
class BrevonSuitHead_3770 : public Active
{
public:
    BrevonSuitHead_3770(int x, int y) : Active(x, y, BrevonSuitHead_3770_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("BrevonSuit_Head", 15);
#endif
        this->animations = &anim_brevonsuithead_3770;
        if (!anim_brevonsuithead_3770_initialized) {
            anim_brevonsuithead_3770_initialized = true;
            images_brevonsuithead_3770_0_0[0] = get_internal_image(9124);
            images_brevonsuithead_3770_0_1[0] = get_internal_image(9125);
            images_brevonsuithead_3770_0_16[0] = get_internal_image(9126);
            images_brevonsuithead_3770_0_17[0] = get_internal_image(9127);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 30);
        alterables->values.set(4, 1);
        alterables->values.set(7, -45);
        alterables->values.set(15, 7);
    }
};
FrameObject * create_brevonsuithead_3770(int x, int y)
{
    return new (Active::pool.create()) BrevonSuitHead_3770(x, y);
}
static Image* images_brevonsuitpelvis_3771_0_0[1];
static Direction direction_brevonsuitpelvis_3771_0_0 = {0, 50, 50, 0, 1, images_brevonsuitpelvis_3771_0_0, 1};
static Image* images_brevonsuitpelvis_3771_0_1[1];
static Direction direction_brevonsuitpelvis_3771_0_1 = {1, 50, 50, 0, 1, images_brevonsuitpelvis_3771_0_1, 1};
static Image* images_brevonsuitpelvis_3771_0_16[1];
static Direction direction_brevonsuitpelvis_3771_0_16 = {16, 50, 50, 0, 1, images_brevonsuitpelvis_3771_0_16, 1};
static Image* images_brevonsuitpelvis_3771_0_17[1];
static Direction direction_brevonsuitpelvis_3771_0_17 = {17, 50, 50, 0, 1, images_brevonsuitpelvis_3771_0_17, 1};
static Animation anim_brevonsuitpelvis_3771_0 = {&direction_brevonsuitpelvis_3771_0_0, &direction_brevonsuitpelvis_3771_0_1, &direction_brevonsuitpelvis_3771_0_1, &direction_brevonsuitpelvis_3771_0_1, &direction_brevonsuitpelvis_3771_0_1, &direction_brevonsuitpelvis_3771_0_1, &direction_brevonsuitpelvis_3771_0_1, &direction_brevonsuitpelvis_3771_0_1, &direction_brevonsuitpelvis_3771_0_1, &direction_brevonsuitpelvis_3771_0_16, &direction_brevonsuitpelvis_3771_0_16, &direction_brevonsuitpelvis_3771_0_16, &direction_brevonsuitpelvis_3771_0_16, &direction_brevonsuitpelvis_3771_0_16, &direction_brevonsuitpelvis_3771_0_16, &direction_brevonsuitpelvis_3771_0_16, &direction_brevonsuitpelvis_3771_0_16, &direction_brevonsuitpelvis_3771_0_17, &direction_brevonsuitpelvis_3771_0_17, &direction_brevonsuitpelvis_3771_0_17, &direction_brevonsuitpelvis_3771_0_17, &direction_brevonsuitpelvis_3771_0_17, &direction_brevonsuitpelvis_3771_0_17, &direction_brevonsuitpelvis_3771_0_17, &direction_brevonsuitpelvis_3771_0_17, &direction_brevonsuitpelvis_3771_0_0, &direction_brevonsuitpelvis_3771_0_0, &direction_brevonsuitpelvis_3771_0_0, &direction_brevonsuitpelvis_3771_0_0, &direction_brevonsuitpelvis_3771_0_0, &direction_brevonsuitpelvis_3771_0_0, &direction_brevonsuitpelvis_3771_0_0};
static Animation * anim_array_brevonsuitpelvis_3771[1] = {&anim_brevonsuitpelvis_3771_0};
static Animations anim_brevonsuitpelvis_3771 = {1, &anim_array_brevonsuitpelvis_3771[0]};
static bool anim_brevonsuitpelvis_3771_initialized;
class BrevonSuitPelvis_3771 : public Active
{
public:
    BrevonSuitPelvis_3771(int x, int y) : Active(x, y, BrevonSuitPelvis_3771_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BrevonSuit_Pelvis", 17);
#endif
        this->animations = &anim_brevonsuitpelvis_3771;
        if (!anim_brevonsuitpelvis_3771_initialized) {
            anim_brevonsuitpelvis_3771_initialized = true;
            images_brevonsuitpelvis_3771_0_0[0] = get_internal_image(9128);
            images_brevonsuitpelvis_3771_0_1[0] = get_internal_image(9129);
            images_brevonsuitpelvis_3771_0_16[0] = get_internal_image(9130);
            images_brevonsuitpelvis_3771_0_17[0] = get_internal_image(9131);
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
FrameObject * create_brevonsuitpelvis_3771(int x, int y)
{
    return new (Active::pool.create()) BrevonSuitPelvis_3771(x, y);
}
static Image* images_brevonsuitfrontleg_3772_0_0[1];
static Direction direction_brevonsuitfrontleg_3772_0_0 = {0, 50, 50, 0, 1, images_brevonsuitfrontleg_3772_0_0, 1};
static Image* images_brevonsuitfrontleg_3772_0_1[1];
static Direction direction_brevonsuitfrontleg_3772_0_1 = {1, 50, 50, 0, 1, images_brevonsuitfrontleg_3772_0_1, 1};
static Image* images_brevonsuitfrontleg_3772_0_16[1];
static Direction direction_brevonsuitfrontleg_3772_0_16 = {16, 50, 50, 0, 1, images_brevonsuitfrontleg_3772_0_16, 1};
static Image* images_brevonsuitfrontleg_3772_0_17[1];
static Direction direction_brevonsuitfrontleg_3772_0_17 = {17, 50, 50, 0, 1, images_brevonsuitfrontleg_3772_0_17, 1};
static Animation anim_brevonsuitfrontleg_3772_0 = {&direction_brevonsuitfrontleg_3772_0_0, &direction_brevonsuitfrontleg_3772_0_1, &direction_brevonsuitfrontleg_3772_0_1, &direction_brevonsuitfrontleg_3772_0_1, &direction_brevonsuitfrontleg_3772_0_1, &direction_brevonsuitfrontleg_3772_0_1, &direction_brevonsuitfrontleg_3772_0_1, &direction_brevonsuitfrontleg_3772_0_1, &direction_brevonsuitfrontleg_3772_0_1, &direction_brevonsuitfrontleg_3772_0_16, &direction_brevonsuitfrontleg_3772_0_16, &direction_brevonsuitfrontleg_3772_0_16, &direction_brevonsuitfrontleg_3772_0_16, &direction_brevonsuitfrontleg_3772_0_16, &direction_brevonsuitfrontleg_3772_0_16, &direction_brevonsuitfrontleg_3772_0_16, &direction_brevonsuitfrontleg_3772_0_16, &direction_brevonsuitfrontleg_3772_0_17, &direction_brevonsuitfrontleg_3772_0_17, &direction_brevonsuitfrontleg_3772_0_17, &direction_brevonsuitfrontleg_3772_0_17, &direction_brevonsuitfrontleg_3772_0_17, &direction_brevonsuitfrontleg_3772_0_17, &direction_brevonsuitfrontleg_3772_0_17, &direction_brevonsuitfrontleg_3772_0_17, &direction_brevonsuitfrontleg_3772_0_0, &direction_brevonsuitfrontleg_3772_0_0, &direction_brevonsuitfrontleg_3772_0_0, &direction_brevonsuitfrontleg_3772_0_0, &direction_brevonsuitfrontleg_3772_0_0, &direction_brevonsuitfrontleg_3772_0_0, &direction_brevonsuitfrontleg_3772_0_0};
static Animation * anim_array_brevonsuitfrontleg_3772[1] = {&anim_brevonsuitfrontleg_3772_0};
static Animations anim_brevonsuitfrontleg_3772 = {1, &anim_array_brevonsuitfrontleg_3772[0]};
static bool anim_brevonsuitfrontleg_3772_initialized;
class BrevonSuitFrontLeg_3772 : public Active
{
public:
    BrevonSuitFrontLeg_3772(int x, int y) : Active(x, y, BrevonSuitFrontLeg_3772_type)
    {
        // qualifiers: 2
#ifndef NDEBUG
        name = std::string("BrevonSuit_FrontLeg", 19);
#endif
        this->animations = &anim_brevonsuitfrontleg_3772;
        if (!anim_brevonsuitfrontleg_3772_initialized) {
            anim_brevonsuitfrontleg_3772_initialized = true;
            images_brevonsuitfrontleg_3772_0_0[0] = get_internal_image(9132);
            images_brevonsuitfrontleg_3772_0_1[0] = get_internal_image(9133);
            images_brevonsuitfrontleg_3772_0_16[0] = get_internal_image(9134);
            images_brevonsuitfrontleg_3772_0_17[0] = get_internal_image(9135);
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
FrameObject * create_brevonsuitfrontleg_3772(int x, int y)
{
    return new (Active::pool.create()) BrevonSuitFrontLeg_3772(x, y);
}
static Image* images_brevonsuitfrontknee_3773_0_0[1];
static Direction direction_brevonsuitfrontknee_3773_0_0 = {0, 50, 50, 0, 1, images_brevonsuitfrontknee_3773_0_0, 1};
static Image* images_brevonsuitfrontknee_3773_0_1[1];
static Direction direction_brevonsuitfrontknee_3773_0_1 = {1, 50, 50, 0, 1, images_brevonsuitfrontknee_3773_0_1, 1};
static Image* images_brevonsuitfrontknee_3773_0_16[1];
static Direction direction_brevonsuitfrontknee_3773_0_16 = {16, 50, 50, 0, 1, images_brevonsuitfrontknee_3773_0_16, 1};
static Image* images_brevonsuitfrontknee_3773_0_17[1];
static Direction direction_brevonsuitfrontknee_3773_0_17 = {17, 50, 50, 0, 1, images_brevonsuitfrontknee_3773_0_17, 1};
static Animation anim_brevonsuitfrontknee_3773_0 = {&direction_brevonsuitfrontknee_3773_0_0, &direction_brevonsuitfrontknee_3773_0_1, &direction_brevonsuitfrontknee_3773_0_1, &direction_brevonsuitfrontknee_3773_0_1, &direction_brevonsuitfrontknee_3773_0_1, &direction_brevonsuitfrontknee_3773_0_1, &direction_brevonsuitfrontknee_3773_0_1, &direction_brevonsuitfrontknee_3773_0_1, &direction_brevonsuitfrontknee_3773_0_1, &direction_brevonsuitfrontknee_3773_0_16, &direction_brevonsuitfrontknee_3773_0_16, &direction_brevonsuitfrontknee_3773_0_16, &direction_brevonsuitfrontknee_3773_0_16, &direction_brevonsuitfrontknee_3773_0_16, &direction_brevonsuitfrontknee_3773_0_16, &direction_brevonsuitfrontknee_3773_0_16, &direction_brevonsuitfrontknee_3773_0_16, &direction_brevonsuitfrontknee_3773_0_17, &direction_brevonsuitfrontknee_3773_0_17, &direction_brevonsuitfrontknee_3773_0_17, &direction_brevonsuitfrontknee_3773_0_17, &direction_brevonsuitfrontknee_3773_0_17, &direction_brevonsuitfrontknee_3773_0_17, &direction_brevonsuitfrontknee_3773_0_17, &direction_brevonsuitfrontknee_3773_0_17, &direction_brevonsuitfrontknee_3773_0_0, &direction_brevonsuitfrontknee_3773_0_0, &direction_brevonsuitfrontknee_3773_0_0, &direction_brevonsuitfrontknee_3773_0_0, &direction_brevonsuitfrontknee_3773_0_0, &direction_brevonsuitfrontknee_3773_0_0, &direction_brevonsuitfrontknee_3773_0_0};
static Animation * anim_array_brevonsuitfrontknee_3773[1] = {&anim_brevonsuitfrontknee_3773_0};
static Animations anim_brevonsuitfrontknee_3773 = {1, &anim_array_brevonsuitfrontknee_3773[0]};
static bool anim_brevonsuitfrontknee_3773_initialized;
class BrevonSuitFrontKnee_3773 : public Active
{
public:
    BrevonSuitFrontKnee_3773(int x, int y) : Active(x, y, BrevonSuitFrontKnee_3773_type)
    {
        // qualifiers: 2
#ifndef NDEBUG
        name = std::string("BrevonSuit_FrontKnee", 20);
#endif
        this->animations = &anim_brevonsuitfrontknee_3773;
        if (!anim_brevonsuitfrontknee_3773_initialized) {
            anim_brevonsuitfrontknee_3773_initialized = true;
            images_brevonsuitfrontknee_3773_0_0[0] = get_internal_image(9136);
            images_brevonsuitfrontknee_3773_0_1[0] = get_internal_image(9137);
            images_brevonsuitfrontknee_3773_0_16[0] = get_internal_image(9138);
            images_brevonsuitfrontknee_3773_0_17[0] = get_internal_image(9139);
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
FrameObject * create_brevonsuitfrontknee_3773(int x, int y)
{
    return new (Active::pool.create()) BrevonSuitFrontKnee_3773(x, y);
}
static Image* images_brevonsuitfrontfoot_3774_0_0[1];
static Direction direction_brevonsuitfrontfoot_3774_0_0 = {0, 50, 50, 0, 1, images_brevonsuitfrontfoot_3774_0_0, 1};
static Image* images_brevonsuitfrontfoot_3774_0_1[1];
static Direction direction_brevonsuitfrontfoot_3774_0_1 = {1, 50, 50, 0, 1, images_brevonsuitfrontfoot_3774_0_1, 1};
static Image* images_brevonsuitfrontfoot_3774_0_16[1];
static Direction direction_brevonsuitfrontfoot_3774_0_16 = {16, 50, 50, 0, 1, images_brevonsuitfrontfoot_3774_0_16, 1};
static Image* images_brevonsuitfrontfoot_3774_0_17[1];
static Direction direction_brevonsuitfrontfoot_3774_0_17 = {17, 50, 50, 0, 1, images_brevonsuitfrontfoot_3774_0_17, 1};
static Animation anim_brevonsuitfrontfoot_3774_0 = {&direction_brevonsuitfrontfoot_3774_0_0, &direction_brevonsuitfrontfoot_3774_0_1, &direction_brevonsuitfrontfoot_3774_0_1, &direction_brevonsuitfrontfoot_3774_0_1, &direction_brevonsuitfrontfoot_3774_0_1, &direction_brevonsuitfrontfoot_3774_0_1, &direction_brevonsuitfrontfoot_3774_0_1, &direction_brevonsuitfrontfoot_3774_0_1, &direction_brevonsuitfrontfoot_3774_0_1, &direction_brevonsuitfrontfoot_3774_0_16, &direction_brevonsuitfrontfoot_3774_0_16, &direction_brevonsuitfrontfoot_3774_0_16, &direction_brevonsuitfrontfoot_3774_0_16, &direction_brevonsuitfrontfoot_3774_0_16, &direction_brevonsuitfrontfoot_3774_0_16, &direction_brevonsuitfrontfoot_3774_0_16, &direction_brevonsuitfrontfoot_3774_0_16, &direction_brevonsuitfrontfoot_3774_0_17, &direction_brevonsuitfrontfoot_3774_0_17, &direction_brevonsuitfrontfoot_3774_0_17, &direction_brevonsuitfrontfoot_3774_0_17, &direction_brevonsuitfrontfoot_3774_0_17, &direction_brevonsuitfrontfoot_3774_0_17, &direction_brevonsuitfrontfoot_3774_0_17, &direction_brevonsuitfrontfoot_3774_0_17, &direction_brevonsuitfrontfoot_3774_0_0, &direction_brevonsuitfrontfoot_3774_0_0, &direction_brevonsuitfrontfoot_3774_0_0, &direction_brevonsuitfrontfoot_3774_0_0, &direction_brevonsuitfrontfoot_3774_0_0, &direction_brevonsuitfrontfoot_3774_0_0, &direction_brevonsuitfrontfoot_3774_0_0};
static Animation * anim_array_brevonsuitfrontfoot_3774[1] = {&anim_brevonsuitfrontfoot_3774_0};
static Animations anim_brevonsuitfrontfoot_3774 = {1, &anim_array_brevonsuitfrontfoot_3774[0]};
static bool anim_brevonsuitfrontfoot_3774_initialized;
class BrevonSuitFrontFoot_3774 : public Active
{
public:
    BrevonSuitFrontFoot_3774(int x, int y) : Active(x, y, BrevonSuitFrontFoot_3774_type)
    {
        // qualifiers: 2
#ifndef NDEBUG
        name = std::string("BrevonSuit_FrontFoot", 20);
#endif
        this->animations = &anim_brevonsuitfrontfoot_3774;
        if (!anim_brevonsuitfrontfoot_3774_initialized) {
            anim_brevonsuitfrontfoot_3774_initialized = true;
            images_brevonsuitfrontfoot_3774_0_0[0] = get_internal_image(9140);
            images_brevonsuitfrontfoot_3774_0_1[0] = get_internal_image(9141);
            images_brevonsuitfrontfoot_3774_0_16[0] = get_internal_image(9142);
            images_brevonsuitfrontfoot_3774_0_17[0] = get_internal_image(9143);
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
FrameObject * create_brevonsuitfrontfoot_3774(int x, int y)
{
    return new (Active::pool.create()) BrevonSuitFrontFoot_3774(x, y);
}
static Image* images_brevonsuittorso_3775_0_0[1];
static Direction direction_brevonsuittorso_3775_0_0 = {0, 50, 50, 0, 1, images_brevonsuittorso_3775_0_0, 1};
static Image* images_brevonsuittorso_3775_0_1[1];
static Direction direction_brevonsuittorso_3775_0_1 = {1, 50, 50, 0, 1, images_brevonsuittorso_3775_0_1, 1};
static Image* images_brevonsuittorso_3775_0_16[1];
static Direction direction_brevonsuittorso_3775_0_16 = {16, 50, 50, 0, 1, images_brevonsuittorso_3775_0_16, 1};
static Image* images_brevonsuittorso_3775_0_17[1];
static Direction direction_brevonsuittorso_3775_0_17 = {17, 50, 50, 0, 1, images_brevonsuittorso_3775_0_17, 1};
static Animation anim_brevonsuittorso_3775_0 = {&direction_brevonsuittorso_3775_0_0, &direction_brevonsuittorso_3775_0_1, &direction_brevonsuittorso_3775_0_1, &direction_brevonsuittorso_3775_0_1, &direction_brevonsuittorso_3775_0_1, &direction_brevonsuittorso_3775_0_1, &direction_brevonsuittorso_3775_0_1, &direction_brevonsuittorso_3775_0_1, &direction_brevonsuittorso_3775_0_1, &direction_brevonsuittorso_3775_0_16, &direction_brevonsuittorso_3775_0_16, &direction_brevonsuittorso_3775_0_16, &direction_brevonsuittorso_3775_0_16, &direction_brevonsuittorso_3775_0_16, &direction_brevonsuittorso_3775_0_16, &direction_brevonsuittorso_3775_0_16, &direction_brevonsuittorso_3775_0_16, &direction_brevonsuittorso_3775_0_17, &direction_brevonsuittorso_3775_0_17, &direction_brevonsuittorso_3775_0_17, &direction_brevonsuittorso_3775_0_17, &direction_brevonsuittorso_3775_0_17, &direction_brevonsuittorso_3775_0_17, &direction_brevonsuittorso_3775_0_17, &direction_brevonsuittorso_3775_0_17, &direction_brevonsuittorso_3775_0_0, &direction_brevonsuittorso_3775_0_0, &direction_brevonsuittorso_3775_0_0, &direction_brevonsuittorso_3775_0_0, &direction_brevonsuittorso_3775_0_0, &direction_brevonsuittorso_3775_0_0, &direction_brevonsuittorso_3775_0_0};
static Animation * anim_array_brevonsuittorso_3775[1] = {&anim_brevonsuittorso_3775_0};
static Animations anim_brevonsuittorso_3775 = {1, &anim_array_brevonsuittorso_3775[0]};
static bool anim_brevonsuittorso_3775_initialized;
class BrevonSuitTorso_3775 : public Active
{
public:
    BrevonSuitTorso_3775(int x, int y) : Active(x, y, BrevonSuitTorso_3775_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BrevonSuit_Torso", 16);
#endif
        this->animations = &anim_brevonsuittorso_3775;
        if (!anim_brevonsuittorso_3775_initialized) {
            anim_brevonsuittorso_3775_initialized = true;
            images_brevonsuittorso_3775_0_0[0] = get_internal_image(9144);
            images_brevonsuittorso_3775_0_1[0] = get_internal_image(15491);
            images_brevonsuittorso_3775_0_16[0] = get_internal_image(15618);
            images_brevonsuittorso_3775_0_17[0] = get_internal_image(15619);
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
FrameObject * create_brevonsuittorso_3775(int x, int y)
{
    return new (Active::pool.create()) BrevonSuitTorso_3775(x, y);
}
static Image* images_brevonsuitfrontarm_3776_0_0[1];
static Direction direction_brevonsuitfrontarm_3776_0_0 = {0, 50, 50, 0, 1, images_brevonsuitfrontarm_3776_0_0, 1};
static Image* images_brevonsuitfrontarm_3776_0_1[1];
static Direction direction_brevonsuitfrontarm_3776_0_1 = {1, 50, 50, 0, 1, images_brevonsuitfrontarm_3776_0_1, 1};
static Image* images_brevonsuitfrontarm_3776_0_16[1];
static Direction direction_brevonsuitfrontarm_3776_0_16 = {16, 50, 50, 0, 1, images_brevonsuitfrontarm_3776_0_16, 1};
static Image* images_brevonsuitfrontarm_3776_0_17[1];
static Direction direction_brevonsuitfrontarm_3776_0_17 = {17, 50, 50, 0, 1, images_brevonsuitfrontarm_3776_0_17, 1};
static Animation anim_brevonsuitfrontarm_3776_0 = {&direction_brevonsuitfrontarm_3776_0_0, &direction_brevonsuitfrontarm_3776_0_1, &direction_brevonsuitfrontarm_3776_0_1, &direction_brevonsuitfrontarm_3776_0_1, &direction_brevonsuitfrontarm_3776_0_1, &direction_brevonsuitfrontarm_3776_0_1, &direction_brevonsuitfrontarm_3776_0_1, &direction_brevonsuitfrontarm_3776_0_1, &direction_brevonsuitfrontarm_3776_0_1, &direction_brevonsuitfrontarm_3776_0_16, &direction_brevonsuitfrontarm_3776_0_16, &direction_brevonsuitfrontarm_3776_0_16, &direction_brevonsuitfrontarm_3776_0_16, &direction_brevonsuitfrontarm_3776_0_16, &direction_brevonsuitfrontarm_3776_0_16, &direction_brevonsuitfrontarm_3776_0_16, &direction_brevonsuitfrontarm_3776_0_16, &direction_brevonsuitfrontarm_3776_0_17, &direction_brevonsuitfrontarm_3776_0_17, &direction_brevonsuitfrontarm_3776_0_17, &direction_brevonsuitfrontarm_3776_0_17, &direction_brevonsuitfrontarm_3776_0_17, &direction_brevonsuitfrontarm_3776_0_17, &direction_brevonsuitfrontarm_3776_0_17, &direction_brevonsuitfrontarm_3776_0_17, &direction_brevonsuitfrontarm_3776_0_0, &direction_brevonsuitfrontarm_3776_0_0, &direction_brevonsuitfrontarm_3776_0_0, &direction_brevonsuitfrontarm_3776_0_0, &direction_brevonsuitfrontarm_3776_0_0, &direction_brevonsuitfrontarm_3776_0_0, &direction_brevonsuitfrontarm_3776_0_0};
static Animation * anim_array_brevonsuitfrontarm_3776[1] = {&anim_brevonsuitfrontarm_3776_0};
static Animations anim_brevonsuitfrontarm_3776 = {1, &anim_array_brevonsuitfrontarm_3776[0]};
static bool anim_brevonsuitfrontarm_3776_initialized;
class BrevonSuitFrontArm_3776 : public Active
{
public:
    BrevonSuitFrontArm_3776(int x, int y) : Active(x, y, BrevonSuitFrontArm_3776_type)
    {
        // qualifiers: 2
#ifndef NDEBUG
        name = std::string("BrevonSuit_FrontArm", 19);
#endif
        this->animations = &anim_brevonsuitfrontarm_3776;
        if (!anim_brevonsuitfrontarm_3776_initialized) {
            anim_brevonsuitfrontarm_3776_initialized = true;
            images_brevonsuitfrontarm_3776_0_0[0] = get_internal_image(15620);
            images_brevonsuitfrontarm_3776_0_1[0] = get_internal_image(15621);
            images_brevonsuitfrontarm_3776_0_16[0] = get_internal_image(15622);
            images_brevonsuitfrontarm_3776_0_17[0] = get_internal_image(15623);
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
FrameObject * create_brevonsuitfrontarm_3776(int x, int y)
{
    return new (Active::pool.create()) BrevonSuitFrontArm_3776(x, y);
}
static Image* images_brevonsuitfrontgun_3777_0_0[1];
static Direction direction_brevonsuitfrontgun_3777_0_0 = {0, 50, 50, 0, 1, images_brevonsuitfrontgun_3777_0_0, 1};
static Image* images_brevonsuitfrontgun_3777_0_1[1];
static Direction direction_brevonsuitfrontgun_3777_0_1 = {1, 50, 50, 0, 1, images_brevonsuitfrontgun_3777_0_1, 1};
static Image* images_brevonsuitfrontgun_3777_0_16[1];
static Direction direction_brevonsuitfrontgun_3777_0_16 = {16, 50, 50, 0, 1, images_brevonsuitfrontgun_3777_0_16, 1};
static Image* images_brevonsuitfrontgun_3777_0_17[1];
static Direction direction_brevonsuitfrontgun_3777_0_17 = {17, 50, 50, 0, 1, images_brevonsuitfrontgun_3777_0_17, 1};
static Animation anim_brevonsuitfrontgun_3777_0 = {&direction_brevonsuitfrontgun_3777_0_0, &direction_brevonsuitfrontgun_3777_0_1, &direction_brevonsuitfrontgun_3777_0_1, &direction_brevonsuitfrontgun_3777_0_1, &direction_brevonsuitfrontgun_3777_0_1, &direction_brevonsuitfrontgun_3777_0_1, &direction_brevonsuitfrontgun_3777_0_1, &direction_brevonsuitfrontgun_3777_0_1, &direction_brevonsuitfrontgun_3777_0_1, &direction_brevonsuitfrontgun_3777_0_16, &direction_brevonsuitfrontgun_3777_0_16, &direction_brevonsuitfrontgun_3777_0_16, &direction_brevonsuitfrontgun_3777_0_16, &direction_brevonsuitfrontgun_3777_0_16, &direction_brevonsuitfrontgun_3777_0_16, &direction_brevonsuitfrontgun_3777_0_16, &direction_brevonsuitfrontgun_3777_0_16, &direction_brevonsuitfrontgun_3777_0_17, &direction_brevonsuitfrontgun_3777_0_17, &direction_brevonsuitfrontgun_3777_0_17, &direction_brevonsuitfrontgun_3777_0_17, &direction_brevonsuitfrontgun_3777_0_17, &direction_brevonsuitfrontgun_3777_0_17, &direction_brevonsuitfrontgun_3777_0_17, &direction_brevonsuitfrontgun_3777_0_17, &direction_brevonsuitfrontgun_3777_0_0, &direction_brevonsuitfrontgun_3777_0_0, &direction_brevonsuitfrontgun_3777_0_0, &direction_brevonsuitfrontgun_3777_0_0, &direction_brevonsuitfrontgun_3777_0_0, &direction_brevonsuitfrontgun_3777_0_0, &direction_brevonsuitfrontgun_3777_0_0};
static Animation * anim_array_brevonsuitfrontgun_3777[1] = {&anim_brevonsuitfrontgun_3777_0};
static Animations anim_brevonsuitfrontgun_3777 = {1, &anim_array_brevonsuitfrontgun_3777[0]};
static bool anim_brevonsuitfrontgun_3777_initialized;
class BrevonSuitFrontGun_3777 : public Active
{
public:
    BrevonSuitFrontGun_3777(int x, int y) : Active(x, y, BrevonSuitFrontGun_3777_type)
    {
        // qualifiers: 2
#ifndef NDEBUG
        name = std::string("BrevonSuit_FrontGun", 19);
#endif
        this->animations = &anim_brevonsuitfrontgun_3777;
        if (!anim_brevonsuitfrontgun_3777_initialized) {
            anim_brevonsuitfrontgun_3777_initialized = true;
            images_brevonsuitfrontgun_3777_0_0[0] = get_internal_image(15624);
            images_brevonsuitfrontgun_3777_0_1[0] = get_internal_image(15625);
            images_brevonsuitfrontgun_3777_0_16[0] = get_internal_image(15626);
            images_brevonsuitfrontgun_3777_0_17[0] = get_internal_image(15627);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, -10);
    }
};
FrameObject * create_brevonsuitfrontgun_3777(int x, int y)
{
    return new (Active::pool.create()) BrevonSuitFrontGun_3777(x, y);
}
static Image* images_brevonsuitwallleft_3778_0_0[1];
static Direction direction_brevonsuitwallleft_3778_0_0 = {0, 50, 50, 0, 1, images_brevonsuitwallleft_3778_0_0, 1};
static Animation anim_brevonsuitwallleft_3778_0 = {&direction_brevonsuitwallleft_3778_0_0, &direction_brevonsuitwallleft_3778_0_0, &direction_brevonsuitwallleft_3778_0_0, &direction_brevonsuitwallleft_3778_0_0, &direction_brevonsuitwallleft_3778_0_0, &direction_brevonsuitwallleft_3778_0_0, &direction_brevonsuitwallleft_3778_0_0, &direction_brevonsuitwallleft_3778_0_0, &direction_brevonsuitwallleft_3778_0_0, &direction_brevonsuitwallleft_3778_0_0, &direction_brevonsuitwallleft_3778_0_0, &direction_brevonsuitwallleft_3778_0_0, &direction_brevonsuitwallleft_3778_0_0, &direction_brevonsuitwallleft_3778_0_0, &direction_brevonsuitwallleft_3778_0_0, &direction_brevonsuitwallleft_3778_0_0, NULL, &direction_brevonsuitwallleft_3778_0_0, &direction_brevonsuitwallleft_3778_0_0, &direction_brevonsuitwallleft_3778_0_0, &direction_brevonsuitwallleft_3778_0_0, &direction_brevonsuitwallleft_3778_0_0, &direction_brevonsuitwallleft_3778_0_0, &direction_brevonsuitwallleft_3778_0_0, &direction_brevonsuitwallleft_3778_0_0, &direction_brevonsuitwallleft_3778_0_0, &direction_brevonsuitwallleft_3778_0_0, &direction_brevonsuitwallleft_3778_0_0, &direction_brevonsuitwallleft_3778_0_0, &direction_brevonsuitwallleft_3778_0_0, &direction_brevonsuitwallleft_3778_0_0, &direction_brevonsuitwallleft_3778_0_0};
static Animation * anim_array_brevonsuitwallleft_3778[1] = {&anim_brevonsuitwallleft_3778_0};
static Animations anim_brevonsuitwallleft_3778 = {1, &anim_array_brevonsuitwallleft_3778[0]};
static bool anim_brevonsuitwallleft_3778_initialized;
class BrevonSuitWallLeft_3778 : public Active
{
public:
    BrevonSuitWallLeft_3778(int x, int y) : Active(x, y, BrevonSuitWallLeft_3778_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BrevonSuit_WallLeft", 19);
#endif
        this->animations = &anim_brevonsuitwallleft_3778;
        if (!anim_brevonsuitwallleft_3778_initialized) {
            anim_brevonsuitwallleft_3778_initialized = true;
            images_brevonsuitwallleft_3778_0_0[0] = get_internal_image(9145);
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
FrameObject * create_brevonsuitwallleft_3778(int x, int y)
{
    return new (Active::pool.create()) BrevonSuitWallLeft_3778(x, y);
}
static Image* images_brevonsuitwallright_3779_0_0[1];
static Direction direction_brevonsuitwallright_3779_0_0 = {0, 50, 50, 0, 1, images_brevonsuitwallright_3779_0_0, 1};
static Animation anim_brevonsuitwallright_3779_0 = {&direction_brevonsuitwallright_3779_0_0, &direction_brevonsuitwallright_3779_0_0, &direction_brevonsuitwallright_3779_0_0, &direction_brevonsuitwallright_3779_0_0, &direction_brevonsuitwallright_3779_0_0, &direction_brevonsuitwallright_3779_0_0, &direction_brevonsuitwallright_3779_0_0, &direction_brevonsuitwallright_3779_0_0, &direction_brevonsuitwallright_3779_0_0, &direction_brevonsuitwallright_3779_0_0, &direction_brevonsuitwallright_3779_0_0, &direction_brevonsuitwallright_3779_0_0, &direction_brevonsuitwallright_3779_0_0, &direction_brevonsuitwallright_3779_0_0, &direction_brevonsuitwallright_3779_0_0, &direction_brevonsuitwallright_3779_0_0, NULL, &direction_brevonsuitwallright_3779_0_0, &direction_brevonsuitwallright_3779_0_0, &direction_brevonsuitwallright_3779_0_0, &direction_brevonsuitwallright_3779_0_0, &direction_brevonsuitwallright_3779_0_0, &direction_brevonsuitwallright_3779_0_0, &direction_brevonsuitwallright_3779_0_0, &direction_brevonsuitwallright_3779_0_0, &direction_brevonsuitwallright_3779_0_0, &direction_brevonsuitwallright_3779_0_0, &direction_brevonsuitwallright_3779_0_0, &direction_brevonsuitwallright_3779_0_0, &direction_brevonsuitwallright_3779_0_0, &direction_brevonsuitwallright_3779_0_0, &direction_brevonsuitwallright_3779_0_0};
static Animation * anim_array_brevonsuitwallright_3779[1] = {&anim_brevonsuitwallright_3779_0};
static Animations anim_brevonsuitwallright_3779 = {1, &anim_array_brevonsuitwallright_3779[0]};
static bool anim_brevonsuitwallright_3779_initialized;
class BrevonSuitWallRight_3779 : public Active
{
public:
    BrevonSuitWallRight_3779(int x, int y) : Active(x, y, BrevonSuitWallRight_3779_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BrevonSuit_WallRight", 20);
#endif
        this->animations = &anim_brevonsuitwallright_3779;
        if (!anim_brevonsuitwallright_3779_initialized) {
            anim_brevonsuitwallright_3779_initialized = true;
            images_brevonsuitwallright_3779_0_0[0] = get_internal_image(15494);
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
FrameObject * create_brevonsuitwallright_3779(int x, int y)
{
    return new (Active::pool.create()) BrevonSuitWallRight_3779(x, y);
}
static Image* images_brevonweaponarm_3780_0_0[1];
static Direction direction_brevonweaponarm_3780_0_0 = {0, 50, 50, 0, 1, images_brevonweaponarm_3780_0_0, 1};
static Image* images_brevonweaponarm_3780_0_8[1];
static Direction direction_brevonweaponarm_3780_0_8 = {8, 50, 50, 0, 1, images_brevonweaponarm_3780_0_8, 1};
static Image* images_brevonweaponarm_3780_0_16[1];
static Direction direction_brevonweaponarm_3780_0_16 = {16, 50, 50, 0, 1, images_brevonweaponarm_3780_0_16, 1};
static Animation anim_brevonweaponarm_3780_0 = {&direction_brevonweaponarm_3780_0_0, &direction_brevonweaponarm_3780_0_0, &direction_brevonweaponarm_3780_0_0, &direction_brevonweaponarm_3780_0_0, NULL, &direction_brevonweaponarm_3780_0_8, &direction_brevonweaponarm_3780_0_8, &direction_brevonweaponarm_3780_0_8, &direction_brevonweaponarm_3780_0_8, &direction_brevonweaponarm_3780_0_8, &direction_brevonweaponarm_3780_0_8, &direction_brevonweaponarm_3780_0_8, NULL, &direction_brevonweaponarm_3780_0_16, &direction_brevonweaponarm_3780_0_16, &direction_brevonweaponarm_3780_0_16, &direction_brevonweaponarm_3780_0_16, &direction_brevonweaponarm_3780_0_16, &direction_brevonweaponarm_3780_0_16, &direction_brevonweaponarm_3780_0_16, &direction_brevonweaponarm_3780_0_16, &direction_brevonweaponarm_3780_0_16, &direction_brevonweaponarm_3780_0_16, &direction_brevonweaponarm_3780_0_16, NULL, &direction_brevonweaponarm_3780_0_0, &direction_brevonweaponarm_3780_0_0, &direction_brevonweaponarm_3780_0_0, &direction_brevonweaponarm_3780_0_0, &direction_brevonweaponarm_3780_0_0, &direction_brevonweaponarm_3780_0_0, &direction_brevonweaponarm_3780_0_0};
static Animation * anim_array_brevonweaponarm_3780[1] = {&anim_brevonweaponarm_3780_0};
static Animations anim_brevonweaponarm_3780 = {1, &anim_array_brevonweaponarm_3780[0]};
static bool anim_brevonweaponarm_3780_initialized;
class BrevonWeaponArm_3780 : public Active
{
public:
    BrevonWeaponArm_3780(int x, int y) : Active(x, y, BrevonWeaponArm_3780_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Brevon_WeaponArm", 16);
#endif
        this->animations = &anim_brevonweaponarm_3780;
        if (!anim_brevonweaponarm_3780_initialized) {
            anim_brevonweaponarm_3780_initialized = true;
            images_brevonweaponarm_3780_0_0[0] = get_internal_image(3940);
            images_brevonweaponarm_3780_0_8[0] = get_internal_image(3431);
            images_brevonweaponarm_3780_0_16[0] = get_internal_image(4023);
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
FrameObject * create_brevonweaponarm_3780(int x, int y)
{
    return new (Active::pool.create()) BrevonWeaponArm_3780(x, y);
}
static Image* images_brevonhitbox_3781_0_0[1];
static Direction direction_brevonhitbox_3781_0_0 = {0, 50, 50, 0, 1, images_brevonhitbox_3781_0_0, 1};
static Image* images_brevonhitbox_3781_0_8[1];
static Direction direction_brevonhitbox_3781_0_8 = {8, 50, 50, 0, 1, images_brevonhitbox_3781_0_8, 1};
static Animation anim_brevonhitbox_3781_0 = {&direction_brevonhitbox_3781_0_0, &direction_brevonhitbox_3781_0_0, &direction_brevonhitbox_3781_0_0, &direction_brevonhitbox_3781_0_0, NULL, &direction_brevonhitbox_3781_0_8, &direction_brevonhitbox_3781_0_8, &direction_brevonhitbox_3781_0_8, &direction_brevonhitbox_3781_0_8, &direction_brevonhitbox_3781_0_8, &direction_brevonhitbox_3781_0_8, &direction_brevonhitbox_3781_0_8, &direction_brevonhitbox_3781_0_8, &direction_brevonhitbox_3781_0_8, &direction_brevonhitbox_3781_0_8, &direction_brevonhitbox_3781_0_8, &direction_brevonhitbox_3781_0_8, &direction_brevonhitbox_3781_0_8, &direction_brevonhitbox_3781_0_8, &direction_brevonhitbox_3781_0_8, NULL, &direction_brevonhitbox_3781_0_0, &direction_brevonhitbox_3781_0_0, &direction_brevonhitbox_3781_0_0, &direction_brevonhitbox_3781_0_0, &direction_brevonhitbox_3781_0_0, &direction_brevonhitbox_3781_0_0, &direction_brevonhitbox_3781_0_0, &direction_brevonhitbox_3781_0_0, &direction_brevonhitbox_3781_0_0, &direction_brevonhitbox_3781_0_0, &direction_brevonhitbox_3781_0_0};
static Animation * anim_array_brevonhitbox_3781[1] = {&anim_brevonhitbox_3781_0};
static Animations anim_brevonhitbox_3781 = {1, &anim_array_brevonhitbox_3781[0]};
static bool anim_brevonhitbox_3781_initialized;
class BrevonHitbox_3781 : public Active
{
public:
    BrevonHitbox_3781(int x, int y) : Active(x, y, BrevonHitbox_3781_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Brevon_Hitbox", 13);
#endif
        set_visible(false);
        this->animations = &anim_brevonhitbox_3781;
        if (!anim_brevonhitbox_3781_initialized) {
            anim_brevonhitbox_3781_initialized = true;
            images_brevonhitbox_3781_0_0[0] = get_internal_image(15555);
            images_brevonhitbox_3781_0_8[0] = get_internal_image(1665);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 160);
    }
};
FrameObject * create_brevonhitbox_3781(int x, int y)
{
    return new (Active::pool.create()) BrevonHitbox_3781(x, y);
}
class FDPowerCore4_3782 : public Backdrop
{
public:
    FDPowerCore4_3782(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_PowerCore 4", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5393);
        width = image->width;
        height = image->height;
        set_shader(Render::ADDITIVE);
    }
};
FrameObject * create_fdpowercore4_3782(int x, int y)
{
    return new (Backdrop::pool.create()) FDPowerCore4_3782(x, y);
}
class FDDeepCoreNoSolid2_3783 : public Backdrop
{
public:
    FDDeepCoreNoSolid2_3783(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_DeepCore_NoSolid 2", 21);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15161);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fddeepcorenosolid2_3783(int x, int y)
{
    return new (Backdrop::pool.create()) FDDeepCoreNoSolid2_3783(x, y);
}
class FDDeepCoreNoSolid1_3784 : public Backdrop
{
public:
    FDDeepCoreNoSolid1_3784(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_DeepCore_NoSolid 1", 21);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15160);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fddeepcorenosolid1_3784(int x, int y)
{
    return new (Backdrop::pool.create()) FDDeepCoreNoSolid1_3784(x, y);
}
static Image* images_brevonsuitaura_3785_0_0[1];
static Direction direction_brevonsuitaura_3785_0_0 = {0, 50, 50, 0, 1, images_brevonsuitaura_3785_0_0, 1};
static Animation anim_brevonsuitaura_3785_0 = {&direction_brevonsuitaura_3785_0_0, &direction_brevonsuitaura_3785_0_0, &direction_brevonsuitaura_3785_0_0, &direction_brevonsuitaura_3785_0_0, &direction_brevonsuitaura_3785_0_0, &direction_brevonsuitaura_3785_0_0, &direction_brevonsuitaura_3785_0_0, &direction_brevonsuitaura_3785_0_0, &direction_brevonsuitaura_3785_0_0, &direction_brevonsuitaura_3785_0_0, &direction_brevonsuitaura_3785_0_0, &direction_brevonsuitaura_3785_0_0, &direction_brevonsuitaura_3785_0_0, &direction_brevonsuitaura_3785_0_0, &direction_brevonsuitaura_3785_0_0, &direction_brevonsuitaura_3785_0_0, NULL, &direction_brevonsuitaura_3785_0_0, &direction_brevonsuitaura_3785_0_0, &direction_brevonsuitaura_3785_0_0, &direction_brevonsuitaura_3785_0_0, &direction_brevonsuitaura_3785_0_0, &direction_brevonsuitaura_3785_0_0, &direction_brevonsuitaura_3785_0_0, &direction_brevonsuitaura_3785_0_0, &direction_brevonsuitaura_3785_0_0, &direction_brevonsuitaura_3785_0_0, &direction_brevonsuitaura_3785_0_0, &direction_brevonsuitaura_3785_0_0, &direction_brevonsuitaura_3785_0_0, &direction_brevonsuitaura_3785_0_0, &direction_brevonsuitaura_3785_0_0};
static Animation * anim_array_brevonsuitaura_3785[1] = {&anim_brevonsuitaura_3785_0};
static Animations anim_brevonsuitaura_3785 = {1, &anim_array_brevonsuitaura_3785[0]};
static bool anim_brevonsuitaura_3785_initialized;
class BrevonSuitAura_3785 : public Active
{
public:
    BrevonSuitAura_3785(int x, int y) : Active(x, y, BrevonSuitAura_3785_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BrevonSuit_Aura", 15);
#endif
        set_visible(false);
        this->animations = &anim_brevonsuitaura_3785;
        if (!anim_brevonsuitaura_3785_initialized) {
            anim_brevonsuitaura_3785_initialized = true;
            images_brevonsuitaura_3785_0_0[0] = get_internal_image(8710);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_shader(Render::ADDITIVE);
        create_alterables();
        alterables->values.set(0, 100);
        alterables->values.set(1, 10);
        alterables->values.set(2, 17);
    }
};
FrameObject * create_brevonsuitaura_3785(int x, int y)
{
    return new (Active::pool.create()) BrevonSuitAura_3785(x, y);
}
class DialogText2_3786 : public TextBlitter
{
public:
    DialogText2_3786(int x, int y) : TextBlitter(x, y, DialogText2_3786_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Dialog_Text 2", 13);
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
        set_text(std::string("Your machines won't save you from the dragon you've unleashed! I WILL DESTROY EVERYTHING YOU THROW AT ME!", 105));
        has_callback = false;
        create_alterables();
    }
};
FrameObject * create_dialogtext2_3786(int x, int y)
{
    return new (TextBlitter::pool.create()) DialogText2_3786(x, y);
}
class SubtitleData_3787 : public Text
{
public:
    SubtitleData_3787(int x, int y) : Text(x, y, SubtitleData_3787_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Subtitle Data", 13);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("LILAC: Nobody... hurts... Milla!!!", 34));
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
FrameObject * create_subtitledata_3787(int x, int y)
{
    return new (Text::pool.create()) SubtitleData_3787(x, y);
}
static Image* images_redflash_3788_0_0[1];
static Direction direction_redflash_3788_0_0 = {0, 50, 50, 0, 1, images_redflash_3788_0_0, 1};
static Image* images_redflash_3788_0_1[1];
static Direction direction_redflash_3788_0_1 = {1, 50, 50, 0, 1, images_redflash_3788_0_1, 1};
static Animation anim_redflash_3788_0 = {&direction_redflash_3788_0_0, &direction_redflash_3788_0_1, &direction_redflash_3788_0_1, &direction_redflash_3788_0_1, &direction_redflash_3788_0_1, &direction_redflash_3788_0_1, &direction_redflash_3788_0_1, &direction_redflash_3788_0_1, &direction_redflash_3788_0_1, &direction_redflash_3788_0_1, &direction_redflash_3788_0_1, &direction_redflash_3788_0_1, &direction_redflash_3788_0_1, &direction_redflash_3788_0_1, &direction_redflash_3788_0_1, &direction_redflash_3788_0_1, &direction_redflash_3788_0_1, &direction_redflash_3788_0_0, &direction_redflash_3788_0_0, &direction_redflash_3788_0_0, &direction_redflash_3788_0_0, &direction_redflash_3788_0_0, &direction_redflash_3788_0_0, &direction_redflash_3788_0_0, &direction_redflash_3788_0_0, &direction_redflash_3788_0_0, &direction_redflash_3788_0_0, &direction_redflash_3788_0_0, &direction_redflash_3788_0_0, &direction_redflash_3788_0_0, &direction_redflash_3788_0_0, &direction_redflash_3788_0_0};
static Animation * anim_array_redflash_3788[1] = {&anim_redflash_3788_0};
static Animations anim_redflash_3788 = {1, &anim_array_redflash_3788[0]};
static bool anim_redflash_3788_initialized;
class RedFlash_3788 : public Active
{
public:
    RedFlash_3788(int x, int y) : Active(x, y, RedFlash_3788_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("RedFlash", 8);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_redflash_3788;
        if (!anim_redflash_3788_initialized) {
            anim_redflash_3788_initialized = true;
            images_redflash_3788_0_0[0] = get_internal_image(5449);
            images_redflash_3788_0_1[0] = get_internal_image(5182);
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
FrameObject * create_redflash_3788(int x, int y)
{
    return new (Active::pool.create()) RedFlash_3788(x, y);
}
static Image* images_brevoncrosshair_3789_0_0[1];
static Direction direction_brevoncrosshair_3789_0_0 = {0, 50, 50, 0, 1, images_brevoncrosshair_3789_0_0, 1};
static Animation anim_brevoncrosshair_3789_0 = {&direction_brevoncrosshair_3789_0_0, &direction_brevoncrosshair_3789_0_0, &direction_brevoncrosshair_3789_0_0, &direction_brevoncrosshair_3789_0_0, &direction_brevoncrosshair_3789_0_0, &direction_brevoncrosshair_3789_0_0, &direction_brevoncrosshair_3789_0_0, &direction_brevoncrosshair_3789_0_0, &direction_brevoncrosshair_3789_0_0, &direction_brevoncrosshair_3789_0_0, &direction_brevoncrosshair_3789_0_0, &direction_brevoncrosshair_3789_0_0, &direction_brevoncrosshair_3789_0_0, &direction_brevoncrosshair_3789_0_0, &direction_brevoncrosshair_3789_0_0, &direction_brevoncrosshair_3789_0_0, NULL, &direction_brevoncrosshair_3789_0_0, &direction_brevoncrosshair_3789_0_0, &direction_brevoncrosshair_3789_0_0, &direction_brevoncrosshair_3789_0_0, &direction_brevoncrosshair_3789_0_0, &direction_brevoncrosshair_3789_0_0, &direction_brevoncrosshair_3789_0_0, &direction_brevoncrosshair_3789_0_0, &direction_brevoncrosshair_3789_0_0, &direction_brevoncrosshair_3789_0_0, &direction_brevoncrosshair_3789_0_0, &direction_brevoncrosshair_3789_0_0, &direction_brevoncrosshair_3789_0_0, &direction_brevoncrosshair_3789_0_0, &direction_brevoncrosshair_3789_0_0};
static Animation * anim_array_brevoncrosshair_3789[1] = {&anim_brevoncrosshair_3789_0};
static Animations anim_brevoncrosshair_3789 = {1, &anim_array_brevoncrosshair_3789[0]};
static bool anim_brevoncrosshair_3789_initialized;
class BrevonCrosshair_3789 : public Active
{
public:
    BrevonCrosshair_3789(int x, int y) : Active(x, y, BrevonCrosshair_3789_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Brevon_Crosshair", 16);
#endif
        this->animations = &anim_brevoncrosshair_3789;
        if (!anim_brevoncrosshair_3789_initialized) {
            anim_brevoncrosshair_3789_initialized = true;
            images_brevoncrosshair_3789_0_0[0] = get_internal_image(5403);
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
FrameObject * create_brevoncrosshair_3789(int x, int y)
{
    return new (Active::pool.create()) BrevonCrosshair_3789(x, y);
}
static Image* images_brevoncrosshair6_3790_0_0[1];
static Direction direction_brevoncrosshair6_3790_0_0 = {0, 50, 50, 0, 1, images_brevoncrosshair6_3790_0_0, 1};
static Animation anim_brevoncrosshair6_3790_0 = {&direction_brevoncrosshair6_3790_0_0, &direction_brevoncrosshair6_3790_0_0, &direction_brevoncrosshair6_3790_0_0, &direction_brevoncrosshair6_3790_0_0, &direction_brevoncrosshair6_3790_0_0, &direction_brevoncrosshair6_3790_0_0, &direction_brevoncrosshair6_3790_0_0, &direction_brevoncrosshair6_3790_0_0, &direction_brevoncrosshair6_3790_0_0, &direction_brevoncrosshair6_3790_0_0, &direction_brevoncrosshair6_3790_0_0, &direction_brevoncrosshair6_3790_0_0, &direction_brevoncrosshair6_3790_0_0, &direction_brevoncrosshair6_3790_0_0, &direction_brevoncrosshair6_3790_0_0, &direction_brevoncrosshair6_3790_0_0, NULL, &direction_brevoncrosshair6_3790_0_0, &direction_brevoncrosshair6_3790_0_0, &direction_brevoncrosshair6_3790_0_0, &direction_brevoncrosshair6_3790_0_0, &direction_brevoncrosshair6_3790_0_0, &direction_brevoncrosshair6_3790_0_0, &direction_brevoncrosshair6_3790_0_0, &direction_brevoncrosshair6_3790_0_0, &direction_brevoncrosshair6_3790_0_0, &direction_brevoncrosshair6_3790_0_0, &direction_brevoncrosshair6_3790_0_0, &direction_brevoncrosshair6_3790_0_0, &direction_brevoncrosshair6_3790_0_0, &direction_brevoncrosshair6_3790_0_0, &direction_brevoncrosshair6_3790_0_0};
static Animation * anim_array_brevoncrosshair6_3790[1] = {&anim_brevoncrosshair6_3790_0};
static Animations anim_brevoncrosshair6_3790 = {1, &anim_array_brevoncrosshair6_3790[0]};
static bool anim_brevoncrosshair6_3790_initialized;
class BrevonCrosshair6_3790 : public Active
{
public:
    BrevonCrosshair6_3790(int x, int y) : Active(x, y, BrevonCrosshair6_3790_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Brevon_Crosshair 6", 18);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_brevoncrosshair6_3790;
        if (!anim_brevoncrosshair6_3790_initialized) {
            anim_brevoncrosshair6_3790_initialized = true;
            images_brevoncrosshair6_3790_0_0[0] = get_internal_image(15556);
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
FrameObject * create_brevoncrosshair6_3790(int x, int y)
{
    return new (Active::pool.create()) BrevonCrosshair6_3790(x, y);
}
static Image* images_brevoncrosshair7_3791_0_0[1];
static Direction direction_brevoncrosshair7_3791_0_0 = {0, 50, 50, 0, 1, images_brevoncrosshair7_3791_0_0, 1};
static Animation anim_brevoncrosshair7_3791_0 = {&direction_brevoncrosshair7_3791_0_0, &direction_brevoncrosshair7_3791_0_0, &direction_brevoncrosshair7_3791_0_0, &direction_brevoncrosshair7_3791_0_0, &direction_brevoncrosshair7_3791_0_0, &direction_brevoncrosshair7_3791_0_0, &direction_brevoncrosshair7_3791_0_0, &direction_brevoncrosshair7_3791_0_0, &direction_brevoncrosshair7_3791_0_0, &direction_brevoncrosshair7_3791_0_0, &direction_brevoncrosshair7_3791_0_0, &direction_brevoncrosshair7_3791_0_0, &direction_brevoncrosshair7_3791_0_0, &direction_brevoncrosshair7_3791_0_0, &direction_brevoncrosshair7_3791_0_0, &direction_brevoncrosshair7_3791_0_0, NULL, &direction_brevoncrosshair7_3791_0_0, &direction_brevoncrosshair7_3791_0_0, &direction_brevoncrosshair7_3791_0_0, &direction_brevoncrosshair7_3791_0_0, &direction_brevoncrosshair7_3791_0_0, &direction_brevoncrosshair7_3791_0_0, &direction_brevoncrosshair7_3791_0_0, &direction_brevoncrosshair7_3791_0_0, &direction_brevoncrosshair7_3791_0_0, &direction_brevoncrosshair7_3791_0_0, &direction_brevoncrosshair7_3791_0_0, &direction_brevoncrosshair7_3791_0_0, &direction_brevoncrosshair7_3791_0_0, &direction_brevoncrosshair7_3791_0_0, &direction_brevoncrosshair7_3791_0_0};
static Animation * anim_array_brevoncrosshair7_3791[1] = {&anim_brevoncrosshair7_3791_0};
static Animations anim_brevoncrosshair7_3791 = {1, &anim_array_brevoncrosshair7_3791[0]};
static bool anim_brevoncrosshair7_3791_initialized;
class BrevonCrosshair7_3791 : public Active
{
public:
    BrevonCrosshair7_3791(int x, int y) : Active(x, y, BrevonCrosshair7_3791_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Brevon_Crosshair 7", 18);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_brevoncrosshair7_3791;
        if (!anim_brevoncrosshair7_3791_initialized) {
            anim_brevoncrosshair7_3791_initialized = true;
            images_brevoncrosshair7_3791_0_0[0] = get_internal_image(15557);
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
FrameObject * create_brevoncrosshair7_3791(int x, int y)
{
    return new (Active::pool.create()) BrevonCrosshair7_3791(x, y);
}
static Image* images_brevoncrosshair2_3792_0_0[1];
static Direction direction_brevoncrosshair2_3792_0_0 = {0, 50, 50, 0, 1, images_brevoncrosshair2_3792_0_0, 1};
static Animation anim_brevoncrosshair2_3792_0 = {&direction_brevoncrosshair2_3792_0_0, &direction_brevoncrosshair2_3792_0_0, &direction_brevoncrosshair2_3792_0_0, &direction_brevoncrosshair2_3792_0_0, &direction_brevoncrosshair2_3792_0_0, &direction_brevoncrosshair2_3792_0_0, &direction_brevoncrosshair2_3792_0_0, &direction_brevoncrosshair2_3792_0_0, &direction_brevoncrosshair2_3792_0_0, &direction_brevoncrosshair2_3792_0_0, &direction_brevoncrosshair2_3792_0_0, &direction_brevoncrosshair2_3792_0_0, &direction_brevoncrosshair2_3792_0_0, &direction_brevoncrosshair2_3792_0_0, &direction_brevoncrosshair2_3792_0_0, &direction_brevoncrosshair2_3792_0_0, NULL, &direction_brevoncrosshair2_3792_0_0, &direction_brevoncrosshair2_3792_0_0, &direction_brevoncrosshair2_3792_0_0, &direction_brevoncrosshair2_3792_0_0, &direction_brevoncrosshair2_3792_0_0, &direction_brevoncrosshair2_3792_0_0, &direction_brevoncrosshair2_3792_0_0, &direction_brevoncrosshair2_3792_0_0, &direction_brevoncrosshair2_3792_0_0, &direction_brevoncrosshair2_3792_0_0, &direction_brevoncrosshair2_3792_0_0, &direction_brevoncrosshair2_3792_0_0, &direction_brevoncrosshair2_3792_0_0, &direction_brevoncrosshair2_3792_0_0, &direction_brevoncrosshair2_3792_0_0};
static Animation * anim_array_brevoncrosshair2_3792[1] = {&anim_brevoncrosshair2_3792_0};
static Animations anim_brevoncrosshair2_3792 = {1, &anim_array_brevoncrosshair2_3792[0]};
static bool anim_brevoncrosshair2_3792_initialized;
class BrevonCrosshair2_3792 : public Active
{
public:
    BrevonCrosshair2_3792(int x, int y) : Active(x, y, BrevonCrosshair2_3792_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Brevon_Crosshair 2", 18);
#endif
        this->animations = &anim_brevoncrosshair2_3792;
        if (!anim_brevoncrosshair2_3792_initialized) {
            anim_brevoncrosshair2_3792_initialized = true;
            images_brevoncrosshair2_3792_0_0[0] = get_internal_image(15633);
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
FrameObject * create_brevoncrosshair2_3792(int x, int y)
{
    return new (Active::pool.create()) BrevonCrosshair2_3792(x, y);
}
static Image* images_brevoncrosshair3_3793_0_0[1];
static Direction direction_brevoncrosshair3_3793_0_0 = {0, 50, 50, 0, 1, images_brevoncrosshair3_3793_0_0, 1};
static Animation anim_brevoncrosshair3_3793_0 = {&direction_brevoncrosshair3_3793_0_0, &direction_brevoncrosshair3_3793_0_0, &direction_brevoncrosshair3_3793_0_0, &direction_brevoncrosshair3_3793_0_0, &direction_brevoncrosshair3_3793_0_0, &direction_brevoncrosshair3_3793_0_0, &direction_brevoncrosshair3_3793_0_0, &direction_brevoncrosshair3_3793_0_0, &direction_brevoncrosshair3_3793_0_0, &direction_brevoncrosshair3_3793_0_0, &direction_brevoncrosshair3_3793_0_0, &direction_brevoncrosshair3_3793_0_0, &direction_brevoncrosshair3_3793_0_0, &direction_brevoncrosshair3_3793_0_0, &direction_brevoncrosshair3_3793_0_0, &direction_brevoncrosshair3_3793_0_0, NULL, &direction_brevoncrosshair3_3793_0_0, &direction_brevoncrosshair3_3793_0_0, &direction_brevoncrosshair3_3793_0_0, &direction_brevoncrosshair3_3793_0_0, &direction_brevoncrosshair3_3793_0_0, &direction_brevoncrosshair3_3793_0_0, &direction_brevoncrosshair3_3793_0_0, &direction_brevoncrosshair3_3793_0_0, &direction_brevoncrosshair3_3793_0_0, &direction_brevoncrosshair3_3793_0_0, &direction_brevoncrosshair3_3793_0_0, &direction_brevoncrosshair3_3793_0_0, &direction_brevoncrosshair3_3793_0_0, &direction_brevoncrosshair3_3793_0_0, &direction_brevoncrosshair3_3793_0_0};
static Animation * anim_array_brevoncrosshair3_3793[1] = {&anim_brevoncrosshair3_3793_0};
static Animations anim_brevoncrosshair3_3793 = {1, &anim_array_brevoncrosshair3_3793[0]};
static bool anim_brevoncrosshair3_3793_initialized;
class BrevonCrosshair3_3793 : public Active
{
public:
    BrevonCrosshair3_3793(int x, int y) : Active(x, y, BrevonCrosshair3_3793_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Brevon_Crosshair 3", 18);
#endif
        this->animations = &anim_brevoncrosshair3_3793;
        if (!anim_brevoncrosshair3_3793_initialized) {
            anim_brevoncrosshair3_3793_initialized = true;
            images_brevoncrosshair3_3793_0_0[0] = get_internal_image(1979);
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
FrameObject * create_brevoncrosshair3_3793(int x, int y)
{
    return new (Active::pool.create()) BrevonCrosshair3_3793(x, y);
}
static Image* images_brevoncrosshair4_3794_0_0[1];
static Direction direction_brevoncrosshair4_3794_0_0 = {0, 50, 50, 0, 1, images_brevoncrosshair4_3794_0_0, 1};
static Animation anim_brevoncrosshair4_3794_0 = {&direction_brevoncrosshair4_3794_0_0, &direction_brevoncrosshair4_3794_0_0, &direction_brevoncrosshair4_3794_0_0, &direction_brevoncrosshair4_3794_0_0, &direction_brevoncrosshair4_3794_0_0, &direction_brevoncrosshair4_3794_0_0, &direction_brevoncrosshair4_3794_0_0, &direction_brevoncrosshair4_3794_0_0, &direction_brevoncrosshair4_3794_0_0, &direction_brevoncrosshair4_3794_0_0, &direction_brevoncrosshair4_3794_0_0, &direction_brevoncrosshair4_3794_0_0, &direction_brevoncrosshair4_3794_0_0, &direction_brevoncrosshair4_3794_0_0, &direction_brevoncrosshair4_3794_0_0, &direction_brevoncrosshair4_3794_0_0, NULL, &direction_brevoncrosshair4_3794_0_0, &direction_brevoncrosshair4_3794_0_0, &direction_brevoncrosshair4_3794_0_0, &direction_brevoncrosshair4_3794_0_0, &direction_brevoncrosshair4_3794_0_0, &direction_brevoncrosshair4_3794_0_0, &direction_brevoncrosshair4_3794_0_0, &direction_brevoncrosshair4_3794_0_0, &direction_brevoncrosshair4_3794_0_0, &direction_brevoncrosshair4_3794_0_0, &direction_brevoncrosshair4_3794_0_0, &direction_brevoncrosshair4_3794_0_0, &direction_brevoncrosshair4_3794_0_0, &direction_brevoncrosshair4_3794_0_0, &direction_brevoncrosshair4_3794_0_0};
static Animation * anim_array_brevoncrosshair4_3794[1] = {&anim_brevoncrosshair4_3794_0};
static Animations anim_brevoncrosshair4_3794 = {1, &anim_array_brevoncrosshair4_3794[0]};
static bool anim_brevoncrosshair4_3794_initialized;
class BrevonCrosshair4_3794 : public Active
{
public:
    BrevonCrosshair4_3794(int x, int y) : Active(x, y, BrevonCrosshair4_3794_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Brevon_Crosshair 4", 18);
#endif
        this->animations = &anim_brevoncrosshair4_3794;
        if (!anim_brevoncrosshair4_3794_initialized) {
            anim_brevoncrosshair4_3794_initialized = true;
            images_brevoncrosshair4_3794_0_0[0] = get_internal_image(15631);
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
FrameObject * create_brevoncrosshair4_3794(int x, int y)
{
    return new (Active::pool.create()) BrevonCrosshair4_3794(x, y);
}
static Image* images_brevoncrosshair5_3795_0_0[1];
static Direction direction_brevoncrosshair5_3795_0_0 = {0, 50, 50, 0, 1, images_brevoncrosshair5_3795_0_0, 1};
static Animation anim_brevoncrosshair5_3795_0 = {&direction_brevoncrosshair5_3795_0_0, &direction_brevoncrosshair5_3795_0_0, &direction_brevoncrosshair5_3795_0_0, &direction_brevoncrosshair5_3795_0_0, &direction_brevoncrosshair5_3795_0_0, &direction_brevoncrosshair5_3795_0_0, &direction_brevoncrosshair5_3795_0_0, &direction_brevoncrosshair5_3795_0_0, &direction_brevoncrosshair5_3795_0_0, &direction_brevoncrosshair5_3795_0_0, &direction_brevoncrosshair5_3795_0_0, &direction_brevoncrosshair5_3795_0_0, &direction_brevoncrosshair5_3795_0_0, &direction_brevoncrosshair5_3795_0_0, &direction_brevoncrosshair5_3795_0_0, &direction_brevoncrosshair5_3795_0_0, NULL, &direction_brevoncrosshair5_3795_0_0, &direction_brevoncrosshair5_3795_0_0, &direction_brevoncrosshair5_3795_0_0, &direction_brevoncrosshair5_3795_0_0, &direction_brevoncrosshair5_3795_0_0, &direction_brevoncrosshair5_3795_0_0, &direction_brevoncrosshair5_3795_0_0, &direction_brevoncrosshair5_3795_0_0, &direction_brevoncrosshair5_3795_0_0, &direction_brevoncrosshair5_3795_0_0, &direction_brevoncrosshair5_3795_0_0, &direction_brevoncrosshair5_3795_0_0, &direction_brevoncrosshair5_3795_0_0, &direction_brevoncrosshair5_3795_0_0, &direction_brevoncrosshair5_3795_0_0};
static Animation * anim_array_brevoncrosshair5_3795[1] = {&anim_brevoncrosshair5_3795_0};
static Animations anim_brevoncrosshair5_3795 = {1, &anim_array_brevoncrosshair5_3795[0]};
static bool anim_brevoncrosshair5_3795_initialized;
class BrevonCrosshair5_3795 : public Active
{
public:
    BrevonCrosshair5_3795(int x, int y) : Active(x, y, BrevonCrosshair5_3795_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Brevon_Crosshair 5", 18);
#endif
        this->animations = &anim_brevoncrosshair5_3795;
        if (!anim_brevoncrosshair5_3795_initialized) {
            anim_brevoncrosshair5_3795_initialized = true;
            images_brevoncrosshair5_3795_0_0[0] = get_internal_image(1980);
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
FrameObject * create_brevoncrosshair5_3795(int x, int y)
{
    return new (Active::pool.create()) BrevonCrosshair5_3795(x, y);
}
class LevelParallaxPiece0_3796 : public SystemBox
{
public:
    LevelParallaxPiece0_3796(int x, int y) : SystemBox(x, y, LevelParallaxPiece0_3796_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece0", 21);
#endif
        flags |= BACKGROUND;
        width = 300;
        height = 480;
        type = PATTERN_IMAGE;
        image = get_internal_image(1702);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece0_3796(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece0_3796(x, y);
}
class LevelParallaxPiece3_3797 : public SystemBox
{
public:
    LevelParallaxPiece3_3797(int x, int y) : SystemBox(x, y, LevelParallaxPiece3_3797_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 3", 22);
#endif
        flags |= BACKGROUND;
        width = 240;
        height = 240;
        type = PATTERN_IMAGE;
        image = get_internal_image(10218);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece3_3797(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece3_3797(x, y);
}
class LevelParallaxPiece1_3798 : public SystemBox
{
public:
    LevelParallaxPiece1_3798(int x, int y) : SystemBox(x, y, LevelParallaxPiece1_3798_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece1", 21);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 64;
        type = PATTERN_IMAGE;
        image = get_internal_image(1691);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece1_3798(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece1_3798(x, y);
}
static Image* images_customtile1_3799_0_0[1];
static Direction direction_customtile1_3799_0_0 = {0, 50, 50, 0, 1, images_customtile1_3799_0_0, 1};
static Animation anim_customtile1_3799_0 = {&direction_customtile1_3799_0_0, &direction_customtile1_3799_0_0, &direction_customtile1_3799_0_0, &direction_customtile1_3799_0_0, &direction_customtile1_3799_0_0, &direction_customtile1_3799_0_0, &direction_customtile1_3799_0_0, &direction_customtile1_3799_0_0, &direction_customtile1_3799_0_0, &direction_customtile1_3799_0_0, &direction_customtile1_3799_0_0, &direction_customtile1_3799_0_0, &direction_customtile1_3799_0_0, &direction_customtile1_3799_0_0, &direction_customtile1_3799_0_0, &direction_customtile1_3799_0_0, NULL, &direction_customtile1_3799_0_0, &direction_customtile1_3799_0_0, &direction_customtile1_3799_0_0, &direction_customtile1_3799_0_0, &direction_customtile1_3799_0_0, &direction_customtile1_3799_0_0, &direction_customtile1_3799_0_0, &direction_customtile1_3799_0_0, &direction_customtile1_3799_0_0, &direction_customtile1_3799_0_0, &direction_customtile1_3799_0_0, &direction_customtile1_3799_0_0, &direction_customtile1_3799_0_0, &direction_customtile1_3799_0_0, &direction_customtile1_3799_0_0};
static Animation * anim_array_customtile1_3799[1] = {&anim_customtile1_3799_0};
static Animations anim_customtile1_3799 = {1, &anim_array_customtile1_3799[0]};
static bool anim_customtile1_3799_initialized;
class CustomTile1_3799 : public Active
{
public:
    CustomTile1_3799(int x, int y) : Active(x, y, CustomTile1_3799_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("CustomTile1", 11);
#endif
        this->animations = &anim_customtile1_3799;
        if (!anim_customtile1_3799_initialized) {
            anim_customtile1_3799_initialized = true;
            images_customtile1_3799_0_0[0] = get_internal_image(9475);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 1);
    }
};
FrameObject * create_customtile1_3799(int x, int y)
{
    return new (Active::pool.create()) CustomTile1_3799(x, y);
}
static Image* images_customtile2_3800_0_0[1];
static Direction direction_customtile2_3800_0_0 = {0, 50, 50, 0, 1, images_customtile2_3800_0_0, 1};
static Animation anim_customtile2_3800_0 = {&direction_customtile2_3800_0_0, &direction_customtile2_3800_0_0, &direction_customtile2_3800_0_0, &direction_customtile2_3800_0_0, &direction_customtile2_3800_0_0, &direction_customtile2_3800_0_0, &direction_customtile2_3800_0_0, &direction_customtile2_3800_0_0, &direction_customtile2_3800_0_0, &direction_customtile2_3800_0_0, &direction_customtile2_3800_0_0, &direction_customtile2_3800_0_0, &direction_customtile2_3800_0_0, &direction_customtile2_3800_0_0, &direction_customtile2_3800_0_0, &direction_customtile2_3800_0_0, NULL, &direction_customtile2_3800_0_0, &direction_customtile2_3800_0_0, &direction_customtile2_3800_0_0, &direction_customtile2_3800_0_0, &direction_customtile2_3800_0_0, &direction_customtile2_3800_0_0, &direction_customtile2_3800_0_0, &direction_customtile2_3800_0_0, &direction_customtile2_3800_0_0, &direction_customtile2_3800_0_0, &direction_customtile2_3800_0_0, &direction_customtile2_3800_0_0, &direction_customtile2_3800_0_0, &direction_customtile2_3800_0_0, &direction_customtile2_3800_0_0};
static Animation * anim_array_customtile2_3800[1] = {&anim_customtile2_3800_0};
static Animations anim_customtile2_3800 = {1, &anim_array_customtile2_3800[0]};
static bool anim_customtile2_3800_initialized;
class CustomTile2_3800 : public Active
{
public:
    CustomTile2_3800(int x, int y) : Active(x, y, CustomTile2_3800_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("CustomTile2", 11);
#endif
        this->animations = &anim_customtile2_3800;
        if (!anim_customtile2_3800_initialized) {
            anim_customtile2_3800_initialized = true;
            images_customtile2_3800_0_0[0] = get_internal_image(9476);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 2);
    }
};
FrameObject * create_customtile2_3800(int x, int y)
{
    return new (Active::pool.create()) CustomTile2_3800(x, y);
}
static Image* images_customtile3_3801_0_0[1];
static Direction direction_customtile3_3801_0_0 = {0, 50, 50, 0, 1, images_customtile3_3801_0_0, 1};
static Animation anim_customtile3_3801_0 = {&direction_customtile3_3801_0_0, &direction_customtile3_3801_0_0, &direction_customtile3_3801_0_0, &direction_customtile3_3801_0_0, &direction_customtile3_3801_0_0, &direction_customtile3_3801_0_0, &direction_customtile3_3801_0_0, &direction_customtile3_3801_0_0, &direction_customtile3_3801_0_0, &direction_customtile3_3801_0_0, &direction_customtile3_3801_0_0, &direction_customtile3_3801_0_0, &direction_customtile3_3801_0_0, &direction_customtile3_3801_0_0, &direction_customtile3_3801_0_0, &direction_customtile3_3801_0_0, NULL, &direction_customtile3_3801_0_0, &direction_customtile3_3801_0_0, &direction_customtile3_3801_0_0, &direction_customtile3_3801_0_0, &direction_customtile3_3801_0_0, &direction_customtile3_3801_0_0, &direction_customtile3_3801_0_0, &direction_customtile3_3801_0_0, &direction_customtile3_3801_0_0, &direction_customtile3_3801_0_0, &direction_customtile3_3801_0_0, &direction_customtile3_3801_0_0, &direction_customtile3_3801_0_0, &direction_customtile3_3801_0_0, &direction_customtile3_3801_0_0};
static Animation * anim_array_customtile3_3801[1] = {&anim_customtile3_3801_0};
static Animations anim_customtile3_3801 = {1, &anim_array_customtile3_3801[0]};
static bool anim_customtile3_3801_initialized;
class CustomTile3_3801 : public Active
{
public:
    CustomTile3_3801(int x, int y) : Active(x, y, CustomTile3_3801_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("CustomTile3", 11);
#endif
        this->animations = &anim_customtile3_3801;
        if (!anim_customtile3_3801_initialized) {
            anim_customtile3_3801_initialized = true;
            images_customtile3_3801_0_0[0] = get_internal_image(9483);
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
FrameObject * create_customtile3_3801(int x, int y)
{
    return new (Active::pool.create()) CustomTile3_3801(x, y);
}
static Image* images_customtile4_3802_0_0[1];
static Direction direction_customtile4_3802_0_0 = {0, 50, 50, 0, 1, images_customtile4_3802_0_0, 1};
static Animation anim_customtile4_3802_0 = {&direction_customtile4_3802_0_0, &direction_customtile4_3802_0_0, &direction_customtile4_3802_0_0, &direction_customtile4_3802_0_0, &direction_customtile4_3802_0_0, &direction_customtile4_3802_0_0, &direction_customtile4_3802_0_0, &direction_customtile4_3802_0_0, &direction_customtile4_3802_0_0, &direction_customtile4_3802_0_0, &direction_customtile4_3802_0_0, &direction_customtile4_3802_0_0, &direction_customtile4_3802_0_0, &direction_customtile4_3802_0_0, &direction_customtile4_3802_0_0, &direction_customtile4_3802_0_0, NULL, &direction_customtile4_3802_0_0, &direction_customtile4_3802_0_0, &direction_customtile4_3802_0_0, &direction_customtile4_3802_0_0, &direction_customtile4_3802_0_0, &direction_customtile4_3802_0_0, &direction_customtile4_3802_0_0, &direction_customtile4_3802_0_0, &direction_customtile4_3802_0_0, &direction_customtile4_3802_0_0, &direction_customtile4_3802_0_0, &direction_customtile4_3802_0_0, &direction_customtile4_3802_0_0, &direction_customtile4_3802_0_0, &direction_customtile4_3802_0_0};
static Animation * anim_array_customtile4_3802[1] = {&anim_customtile4_3802_0};
static Animations anim_customtile4_3802 = {1, &anim_array_customtile4_3802[0]};
static bool anim_customtile4_3802_initialized;
class CustomTile4_3802 : public Active
{
public:
    CustomTile4_3802(int x, int y) : Active(x, y, CustomTile4_3802_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("CustomTile4", 11);
#endif
        this->animations = &anim_customtile4_3802;
        if (!anim_customtile4_3802_initialized) {
            anim_customtile4_3802_initialized = true;
            images_customtile4_3802_0_0[0] = get_internal_image(9481);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 4);
    }
};
FrameObject * create_customtile4_3802(int x, int y)
{
    return new (Active::pool.create()) CustomTile4_3802(x, y);
}
static Image* images_customtile5_3803_0_0[1];
static Direction direction_customtile5_3803_0_0 = {0, 50, 50, 0, 1, images_customtile5_3803_0_0, 1};
static Animation anim_customtile5_3803_0 = {&direction_customtile5_3803_0_0, &direction_customtile5_3803_0_0, &direction_customtile5_3803_0_0, &direction_customtile5_3803_0_0, &direction_customtile5_3803_0_0, &direction_customtile5_3803_0_0, &direction_customtile5_3803_0_0, &direction_customtile5_3803_0_0, &direction_customtile5_3803_0_0, &direction_customtile5_3803_0_0, &direction_customtile5_3803_0_0, &direction_customtile5_3803_0_0, &direction_customtile5_3803_0_0, &direction_customtile5_3803_0_0, &direction_customtile5_3803_0_0, &direction_customtile5_3803_0_0, NULL, &direction_customtile5_3803_0_0, &direction_customtile5_3803_0_0, &direction_customtile5_3803_0_0, &direction_customtile5_3803_0_0, &direction_customtile5_3803_0_0, &direction_customtile5_3803_0_0, &direction_customtile5_3803_0_0, &direction_customtile5_3803_0_0, &direction_customtile5_3803_0_0, &direction_customtile5_3803_0_0, &direction_customtile5_3803_0_0, &direction_customtile5_3803_0_0, &direction_customtile5_3803_0_0, &direction_customtile5_3803_0_0, &direction_customtile5_3803_0_0};
static Animation * anim_array_customtile5_3803[1] = {&anim_customtile5_3803_0};
static Animations anim_customtile5_3803 = {1, &anim_array_customtile5_3803[0]};
static bool anim_customtile5_3803_initialized;
class CustomTile5_3803 : public Active
{
public:
    CustomTile5_3803(int x, int y) : Active(x, y, CustomTile5_3803_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("CustomTile5", 11);
#endif
        this->animations = &anim_customtile5_3803;
        if (!anim_customtile5_3803_initialized) {
            anim_customtile5_3803_initialized = true;
            images_customtile5_3803_0_0[0] = get_internal_image(4372);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 5);
    }
};
FrameObject * create_customtile5_3803(int x, int y)
{
    return new (Active::pool.create()) CustomTile5_3803(x, y);
}
static Image* images_customtile6_3804_0_0[1];
static Direction direction_customtile6_3804_0_0 = {0, 50, 50, 0, 1, images_customtile6_3804_0_0, 1};
static Animation anim_customtile6_3804_0 = {&direction_customtile6_3804_0_0, &direction_customtile6_3804_0_0, &direction_customtile6_3804_0_0, &direction_customtile6_3804_0_0, &direction_customtile6_3804_0_0, &direction_customtile6_3804_0_0, &direction_customtile6_3804_0_0, &direction_customtile6_3804_0_0, &direction_customtile6_3804_0_0, &direction_customtile6_3804_0_0, &direction_customtile6_3804_0_0, &direction_customtile6_3804_0_0, &direction_customtile6_3804_0_0, &direction_customtile6_3804_0_0, &direction_customtile6_3804_0_0, &direction_customtile6_3804_0_0, NULL, &direction_customtile6_3804_0_0, &direction_customtile6_3804_0_0, &direction_customtile6_3804_0_0, &direction_customtile6_3804_0_0, &direction_customtile6_3804_0_0, &direction_customtile6_3804_0_0, &direction_customtile6_3804_0_0, &direction_customtile6_3804_0_0, &direction_customtile6_3804_0_0, &direction_customtile6_3804_0_0, &direction_customtile6_3804_0_0, &direction_customtile6_3804_0_0, &direction_customtile6_3804_0_0, &direction_customtile6_3804_0_0, &direction_customtile6_3804_0_0};
static Animation * anim_array_customtile6_3804[1] = {&anim_customtile6_3804_0};
static Animations anim_customtile6_3804 = {1, &anim_array_customtile6_3804[0]};
static bool anim_customtile6_3804_initialized;
class CustomTile6_3804 : public Active
{
public:
    CustomTile6_3804(int x, int y) : Active(x, y, CustomTile6_3804_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("CustomTile6", 11);
#endif
        this->animations = &anim_customtile6_3804;
        if (!anim_customtile6_3804_initialized) {
            anim_customtile6_3804_initialized = true;
            images_customtile6_3804_0_0[0] = get_internal_image(1039);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 6);
    }
};
FrameObject * create_customtile6_3804(int x, int y)
{
    return new (Active::pool.create()) CustomTile6_3804(x, y);
}
static Image* images_customtile7_3805_0_0[1];
static Direction direction_customtile7_3805_0_0 = {0, 50, 50, 0, 1, images_customtile7_3805_0_0, 1};
static Animation anim_customtile7_3805_0 = {&direction_customtile7_3805_0_0, &direction_customtile7_3805_0_0, &direction_customtile7_3805_0_0, &direction_customtile7_3805_0_0, &direction_customtile7_3805_0_0, &direction_customtile7_3805_0_0, &direction_customtile7_3805_0_0, &direction_customtile7_3805_0_0, &direction_customtile7_3805_0_0, &direction_customtile7_3805_0_0, &direction_customtile7_3805_0_0, &direction_customtile7_3805_0_0, &direction_customtile7_3805_0_0, &direction_customtile7_3805_0_0, &direction_customtile7_3805_0_0, &direction_customtile7_3805_0_0, NULL, &direction_customtile7_3805_0_0, &direction_customtile7_3805_0_0, &direction_customtile7_3805_0_0, &direction_customtile7_3805_0_0, &direction_customtile7_3805_0_0, &direction_customtile7_3805_0_0, &direction_customtile7_3805_0_0, &direction_customtile7_3805_0_0, &direction_customtile7_3805_0_0, &direction_customtile7_3805_0_0, &direction_customtile7_3805_0_0, &direction_customtile7_3805_0_0, &direction_customtile7_3805_0_0, &direction_customtile7_3805_0_0, &direction_customtile7_3805_0_0};
static Animation * anim_array_customtile7_3805[1] = {&anim_customtile7_3805_0};
static Animations anim_customtile7_3805 = {1, &anim_array_customtile7_3805[0]};
static bool anim_customtile7_3805_initialized;
class CustomTile7_3805 : public Active
{
public:
    CustomTile7_3805(int x, int y) : Active(x, y, CustomTile7_3805_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("CustomTile7", 11);
#endif
        this->animations = &anim_customtile7_3805;
        if (!anim_customtile7_3805_initialized) {
            anim_customtile7_3805_initialized = true;
            images_customtile7_3805_0_0[0] = get_internal_image(4328);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 7);
    }
};
FrameObject * create_customtile7_3805(int x, int y)
{
    return new (Active::pool.create()) CustomTile7_3805(x, y);
}
static Image* images_customtile8_3806_0_0[1];
static Direction direction_customtile8_3806_0_0 = {0, 50, 50, 0, 1, images_customtile8_3806_0_0, 1};
static Animation anim_customtile8_3806_0 = {&direction_customtile8_3806_0_0, &direction_customtile8_3806_0_0, &direction_customtile8_3806_0_0, &direction_customtile8_3806_0_0, &direction_customtile8_3806_0_0, &direction_customtile8_3806_0_0, &direction_customtile8_3806_0_0, &direction_customtile8_3806_0_0, &direction_customtile8_3806_0_0, &direction_customtile8_3806_0_0, &direction_customtile8_3806_0_0, &direction_customtile8_3806_0_0, &direction_customtile8_3806_0_0, &direction_customtile8_3806_0_0, &direction_customtile8_3806_0_0, &direction_customtile8_3806_0_0, NULL, &direction_customtile8_3806_0_0, &direction_customtile8_3806_0_0, &direction_customtile8_3806_0_0, &direction_customtile8_3806_0_0, &direction_customtile8_3806_0_0, &direction_customtile8_3806_0_0, &direction_customtile8_3806_0_0, &direction_customtile8_3806_0_0, &direction_customtile8_3806_0_0, &direction_customtile8_3806_0_0, &direction_customtile8_3806_0_0, &direction_customtile8_3806_0_0, &direction_customtile8_3806_0_0, &direction_customtile8_3806_0_0, &direction_customtile8_3806_0_0};
static Animation * anim_array_customtile8_3806[1] = {&anim_customtile8_3806_0};
static Animations anim_customtile8_3806 = {1, &anim_array_customtile8_3806[0]};
static bool anim_customtile8_3806_initialized;
class CustomTile8_3806 : public Active
{
public:
    CustomTile8_3806(int x, int y) : Active(x, y, CustomTile8_3806_type)
    {
        // qualifiers: 26
#ifndef NDEBUG
        name = std::string("CustomTile8", 11);
#endif
        this->animations = &anim_customtile8_3806;
        if (!anim_customtile8_3806_initialized) {
            anim_customtile8_3806_initialized = true;
            images_customtile8_3806_0_0[0] = get_internal_image(3643);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 8);
    }
};
FrameObject * create_customtile8_3806(int x, int y)
{
    return new (Active::pool.create()) CustomTile8_3806(x, y);
}
static Image* images_customtile9_3807_0_0[1];
static Direction direction_customtile9_3807_0_0 = {0, 50, 50, 0, 1, images_customtile9_3807_0_0, 1};
static Animation anim_customtile9_3807_0 = {&direction_customtile9_3807_0_0, &direction_customtile9_3807_0_0, &direction_customtile9_3807_0_0, &direction_customtile9_3807_0_0, &direction_customtile9_3807_0_0, &direction_customtile9_3807_0_0, &direction_customtile9_3807_0_0, &direction_customtile9_3807_0_0, &direction_customtile9_3807_0_0, &direction_customtile9_3807_0_0, &direction_customtile9_3807_0_0, &direction_customtile9_3807_0_0, &direction_customtile9_3807_0_0, &direction_customtile9_3807_0_0, &direction_customtile9_3807_0_0, &direction_customtile9_3807_0_0, NULL, &direction_customtile9_3807_0_0, &direction_customtile9_3807_0_0, &direction_customtile9_3807_0_0, &direction_customtile9_3807_0_0, &direction_customtile9_3807_0_0, &direction_customtile9_3807_0_0, &direction_customtile9_3807_0_0, &direction_customtile9_3807_0_0, &direction_customtile9_3807_0_0, &direction_customtile9_3807_0_0, &direction_customtile9_3807_0_0, &direction_customtile9_3807_0_0, &direction_customtile9_3807_0_0, &direction_customtile9_3807_0_0, &direction_customtile9_3807_0_0};
static Animation * anim_array_customtile9_3807[1] = {&anim_customtile9_3807_0};
static Animations anim_customtile9_3807 = {1, &anim_array_customtile9_3807[0]};
static bool anim_customtile9_3807_initialized;
class CustomTile9_3807 : public Active
{
public:
    CustomTile9_3807(int x, int y) : Active(x, y, CustomTile9_3807_type)
    {
        // qualifiers: 26
#ifndef NDEBUG
        name = std::string("CustomTile9", 11);
#endif
        this->animations = &anim_customtile9_3807;
        if (!anim_customtile9_3807_initialized) {
            anim_customtile9_3807_initialized = true;
            images_customtile9_3807_0_0[0] = get_internal_image(3639);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 9);
    }
};
FrameObject * create_customtile9_3807(int x, int y)
{
    return new (Active::pool.create()) CustomTile9_3807(x, y);
}
static Image* images_customtile10_3808_0_0[1];
static Direction direction_customtile10_3808_0_0 = {0, 50, 50, 0, 1, images_customtile10_3808_0_0, 1};
static Animation anim_customtile10_3808_0 = {&direction_customtile10_3808_0_0, &direction_customtile10_3808_0_0, &direction_customtile10_3808_0_0, &direction_customtile10_3808_0_0, &direction_customtile10_3808_0_0, &direction_customtile10_3808_0_0, &direction_customtile10_3808_0_0, &direction_customtile10_3808_0_0, &direction_customtile10_3808_0_0, &direction_customtile10_3808_0_0, &direction_customtile10_3808_0_0, &direction_customtile10_3808_0_0, &direction_customtile10_3808_0_0, &direction_customtile10_3808_0_0, &direction_customtile10_3808_0_0, &direction_customtile10_3808_0_0, NULL, &direction_customtile10_3808_0_0, &direction_customtile10_3808_0_0, &direction_customtile10_3808_0_0, &direction_customtile10_3808_0_0, &direction_customtile10_3808_0_0, &direction_customtile10_3808_0_0, &direction_customtile10_3808_0_0, &direction_customtile10_3808_0_0, &direction_customtile10_3808_0_0, &direction_customtile10_3808_0_0, &direction_customtile10_3808_0_0, &direction_customtile10_3808_0_0, &direction_customtile10_3808_0_0, &direction_customtile10_3808_0_0, &direction_customtile10_3808_0_0};
static Animation * anim_array_customtile10_3808[1] = {&anim_customtile10_3808_0};
static Animations anim_customtile10_3808 = {1, &anim_array_customtile10_3808[0]};
static bool anim_customtile10_3808_initialized;
class CustomTile10_3808 : public Active
{
public:
    CustomTile10_3808(int x, int y) : Active(x, y, CustomTile10_3808_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("CustomTile10", 12);
#endif
        this->animations = &anim_customtile10_3808;
        if (!anim_customtile10_3808_initialized) {
            anim_customtile10_3808_initialized = true;
            images_customtile10_3808_0_0[0] = get_internal_image(3382);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 10);
    }
};
FrameObject * create_customtile10_3808(int x, int y)
{
    return new (Active::pool.create()) CustomTile10_3808(x, y);
}
static Image* images_customtile11_3809_0_0[1];
static Direction direction_customtile11_3809_0_0 = {0, 50, 50, 0, 1, images_customtile11_3809_0_0, 1};
static Animation anim_customtile11_3809_0 = {&direction_customtile11_3809_0_0, &direction_customtile11_3809_0_0, &direction_customtile11_3809_0_0, &direction_customtile11_3809_0_0, &direction_customtile11_3809_0_0, &direction_customtile11_3809_0_0, &direction_customtile11_3809_0_0, &direction_customtile11_3809_0_0, &direction_customtile11_3809_0_0, &direction_customtile11_3809_0_0, &direction_customtile11_3809_0_0, &direction_customtile11_3809_0_0, &direction_customtile11_3809_0_0, &direction_customtile11_3809_0_0, &direction_customtile11_3809_0_0, &direction_customtile11_3809_0_0, NULL, &direction_customtile11_3809_0_0, &direction_customtile11_3809_0_0, &direction_customtile11_3809_0_0, &direction_customtile11_3809_0_0, &direction_customtile11_3809_0_0, &direction_customtile11_3809_0_0, &direction_customtile11_3809_0_0, &direction_customtile11_3809_0_0, &direction_customtile11_3809_0_0, &direction_customtile11_3809_0_0, &direction_customtile11_3809_0_0, &direction_customtile11_3809_0_0, &direction_customtile11_3809_0_0, &direction_customtile11_3809_0_0, &direction_customtile11_3809_0_0};
static Animation * anim_array_customtile11_3809[1] = {&anim_customtile11_3809_0};
static Animations anim_customtile11_3809 = {1, &anim_array_customtile11_3809[0]};
static bool anim_customtile11_3809_initialized;
class CustomTile11_3809 : public Active
{
public:
    CustomTile11_3809(int x, int y) : Active(x, y, CustomTile11_3809_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("CustomTile11", 12);
#endif
        this->animations = &anim_customtile11_3809;
        if (!anim_customtile11_3809_initialized) {
            anim_customtile11_3809_initialized = true;
            images_customtile11_3809_0_0[0] = get_internal_image(1589);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 11);
    }
};
FrameObject * create_customtile11_3809(int x, int y)
{
    return new (Active::pool.create()) CustomTile11_3809(x, y);
}
static Image* images_customtile12_3810_0_0[1];
static Direction direction_customtile12_3810_0_0 = {0, 50, 50, 0, 1, images_customtile12_3810_0_0, 1};
static Animation anim_customtile12_3810_0 = {&direction_customtile12_3810_0_0, &direction_customtile12_3810_0_0, &direction_customtile12_3810_0_0, &direction_customtile12_3810_0_0, &direction_customtile12_3810_0_0, &direction_customtile12_3810_0_0, &direction_customtile12_3810_0_0, &direction_customtile12_3810_0_0, &direction_customtile12_3810_0_0, &direction_customtile12_3810_0_0, &direction_customtile12_3810_0_0, &direction_customtile12_3810_0_0, &direction_customtile12_3810_0_0, &direction_customtile12_3810_0_0, &direction_customtile12_3810_0_0, &direction_customtile12_3810_0_0, NULL, &direction_customtile12_3810_0_0, &direction_customtile12_3810_0_0, &direction_customtile12_3810_0_0, &direction_customtile12_3810_0_0, &direction_customtile12_3810_0_0, &direction_customtile12_3810_0_0, &direction_customtile12_3810_0_0, &direction_customtile12_3810_0_0, &direction_customtile12_3810_0_0, &direction_customtile12_3810_0_0, &direction_customtile12_3810_0_0, &direction_customtile12_3810_0_0, &direction_customtile12_3810_0_0, &direction_customtile12_3810_0_0, &direction_customtile12_3810_0_0};
static Animation * anim_array_customtile12_3810[1] = {&anim_customtile12_3810_0};
static Animations anim_customtile12_3810 = {1, &anim_array_customtile12_3810[0]};
static bool anim_customtile12_3810_initialized;
class CustomTile12_3810 : public Active
{
public:
    CustomTile12_3810(int x, int y) : Active(x, y, CustomTile12_3810_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("CustomTile12", 12);
#endif
        this->animations = &anim_customtile12_3810;
        if (!anim_customtile12_3810_initialized) {
            anim_customtile12_3810_initialized = true;
            images_customtile12_3810_0_0[0] = get_internal_image(9472);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 12);
    }
};
FrameObject * create_customtile12_3810(int x, int y)
{
    return new (Active::pool.create()) CustomTile12_3810(x, y);
}
static Image* images_customtile13_3811_0_0[1];
static Direction direction_customtile13_3811_0_0 = {0, 50, 50, 0, 1, images_customtile13_3811_0_0, 1};
static Animation anim_customtile13_3811_0 = {&direction_customtile13_3811_0_0, &direction_customtile13_3811_0_0, &direction_customtile13_3811_0_0, &direction_customtile13_3811_0_0, &direction_customtile13_3811_0_0, &direction_customtile13_3811_0_0, &direction_customtile13_3811_0_0, &direction_customtile13_3811_0_0, &direction_customtile13_3811_0_0, &direction_customtile13_3811_0_0, &direction_customtile13_3811_0_0, &direction_customtile13_3811_0_0, &direction_customtile13_3811_0_0, &direction_customtile13_3811_0_0, &direction_customtile13_3811_0_0, &direction_customtile13_3811_0_0, NULL, &direction_customtile13_3811_0_0, &direction_customtile13_3811_0_0, &direction_customtile13_3811_0_0, &direction_customtile13_3811_0_0, &direction_customtile13_3811_0_0, &direction_customtile13_3811_0_0, &direction_customtile13_3811_0_0, &direction_customtile13_3811_0_0, &direction_customtile13_3811_0_0, &direction_customtile13_3811_0_0, &direction_customtile13_3811_0_0, &direction_customtile13_3811_0_0, &direction_customtile13_3811_0_0, &direction_customtile13_3811_0_0, &direction_customtile13_3811_0_0};
static Animation * anim_array_customtile13_3811[1] = {&anim_customtile13_3811_0};
static Animations anim_customtile13_3811 = {1, &anim_array_customtile13_3811[0]};
static bool anim_customtile13_3811_initialized;
class CustomTile13_3811 : public Active
{
public:
    CustomTile13_3811(int x, int y) : Active(x, y, CustomTile13_3811_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("CustomTile13", 12);
#endif
        this->animations = &anim_customtile13_3811;
        if (!anim_customtile13_3811_initialized) {
            anim_customtile13_3811_initialized = true;
            images_customtile13_3811_0_0[0] = get_internal_image(9474);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 13);
    }
};
FrameObject * create_customtile13_3811(int x, int y)
{
    return new (Active::pool.create()) CustomTile13_3811(x, y);
}
static Image* images_customtile14_3812_0_0[1];
static Direction direction_customtile14_3812_0_0 = {0, 50, 50, 0, 1, images_customtile14_3812_0_0, 1};
static Animation anim_customtile14_3812_0 = {&direction_customtile14_3812_0_0, &direction_customtile14_3812_0_0, &direction_customtile14_3812_0_0, &direction_customtile14_3812_0_0, &direction_customtile14_3812_0_0, &direction_customtile14_3812_0_0, &direction_customtile14_3812_0_0, &direction_customtile14_3812_0_0, &direction_customtile14_3812_0_0, &direction_customtile14_3812_0_0, &direction_customtile14_3812_0_0, &direction_customtile14_3812_0_0, &direction_customtile14_3812_0_0, &direction_customtile14_3812_0_0, &direction_customtile14_3812_0_0, &direction_customtile14_3812_0_0, NULL, &direction_customtile14_3812_0_0, &direction_customtile14_3812_0_0, &direction_customtile14_3812_0_0, &direction_customtile14_3812_0_0, &direction_customtile14_3812_0_0, &direction_customtile14_3812_0_0, &direction_customtile14_3812_0_0, &direction_customtile14_3812_0_0, &direction_customtile14_3812_0_0, &direction_customtile14_3812_0_0, &direction_customtile14_3812_0_0, &direction_customtile14_3812_0_0, &direction_customtile14_3812_0_0, &direction_customtile14_3812_0_0, &direction_customtile14_3812_0_0};
static Animation * anim_array_customtile14_3812[1] = {&anim_customtile14_3812_0};
static Animations anim_customtile14_3812 = {1, &anim_array_customtile14_3812[0]};
static bool anim_customtile14_3812_initialized;
class CustomTile14_3812 : public Active
{
public:
    CustomTile14_3812(int x, int y) : Active(x, y, CustomTile14_3812_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("CustomTile14", 12);
#endif
        this->animations = &anim_customtile14_3812;
        if (!anim_customtile14_3812_initialized) {
            anim_customtile14_3812_initialized = true;
            images_customtile14_3812_0_0[0] = get_internal_image(9467);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 14);
    }
};
FrameObject * create_customtile14_3812(int x, int y)
{
    return new (Active::pool.create()) CustomTile14_3812(x, y);
}
static Image* images_customtile15_3813_0_0[1];
static Direction direction_customtile15_3813_0_0 = {0, 50, 50, 0, 1, images_customtile15_3813_0_0, 1};
static Animation anim_customtile15_3813_0 = {&direction_customtile15_3813_0_0, &direction_customtile15_3813_0_0, &direction_customtile15_3813_0_0, &direction_customtile15_3813_0_0, &direction_customtile15_3813_0_0, &direction_customtile15_3813_0_0, &direction_customtile15_3813_0_0, &direction_customtile15_3813_0_0, &direction_customtile15_3813_0_0, &direction_customtile15_3813_0_0, &direction_customtile15_3813_0_0, &direction_customtile15_3813_0_0, &direction_customtile15_3813_0_0, &direction_customtile15_3813_0_0, &direction_customtile15_3813_0_0, &direction_customtile15_3813_0_0, NULL, &direction_customtile15_3813_0_0, &direction_customtile15_3813_0_0, &direction_customtile15_3813_0_0, &direction_customtile15_3813_0_0, &direction_customtile15_3813_0_0, &direction_customtile15_3813_0_0, &direction_customtile15_3813_0_0, &direction_customtile15_3813_0_0, &direction_customtile15_3813_0_0, &direction_customtile15_3813_0_0, &direction_customtile15_3813_0_0, &direction_customtile15_3813_0_0, &direction_customtile15_3813_0_0, &direction_customtile15_3813_0_0, &direction_customtile15_3813_0_0};
static Animation * anim_array_customtile15_3813[1] = {&anim_customtile15_3813_0};
static Animations anim_customtile15_3813 = {1, &anim_array_customtile15_3813[0]};
static bool anim_customtile15_3813_initialized;
class CustomTile15_3813 : public Active
{
public:
    CustomTile15_3813(int x, int y) : Active(x, y, CustomTile15_3813_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("CustomTile15", 12);
#endif
        this->animations = &anim_customtile15_3813;
        if (!anim_customtile15_3813_initialized) {
            anim_customtile15_3813_initialized = true;
            images_customtile15_3813_0_0[0] = get_internal_image(9470);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 15);
    }
};
FrameObject * create_customtile15_3813(int x, int y)
{
    return new (Active::pool.create()) CustomTile15_3813(x, y);
}
