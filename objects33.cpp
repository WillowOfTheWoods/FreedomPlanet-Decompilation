#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

class BGRocks1_3213 : public Backdrop
{
public:
    BGRocks1_3213(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Rocks 1", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14058);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_bgrocks1_3213(int x, int y)
{
    return new (Backdrop::pool.create()) BGRocks1_3213(x, y);
}
class BGRocks15_3214 : public Backdrop
{
public:
    BGRocks15_3214(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Rocks 15", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1070);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_bgrocks15_3214(int x, int y)
{
    return new (Backdrop::pool.create()) BGRocks15_3214(x, y);
}
class BGRocks11_3215 : public Backdrop
{
public:
    BGRocks11_3215(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Rocks 11", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14084);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_bgrocks11_3215(int x, int y)
{
    return new (Backdrop::pool.create()) BGRocks11_3215(x, y);
}
class BGRocks14_3216 : public Backdrop
{
public:
    BGRocks14_3216(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Rocks 14", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14129);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_bgrocks14_3216(int x, int y)
{
    return new (Backdrop::pool.create()) BGRocks14_3216(x, y);
}
class BGRocks4_3217 : public Backdrop
{
public:
    BGRocks4_3217(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Rocks 4", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14127);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_bgrocks4_3217(int x, int y)
{
    return new (Backdrop::pool.create()) BGRocks4_3217(x, y);
}
class BGRocks2_3218 : public Backdrop
{
public:
    BGRocks2_3218(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Rocks 2", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14132);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_bgrocks2_3218(int x, int y)
{
    return new (Backdrop::pool.create()) BGRocks2_3218(x, y);
}
class BGRocks7_3219 : public Backdrop
{
public:
    BGRocks7_3219(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Rocks 7", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1513);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_bgrocks7_3219(int x, int y)
{
    return new (Backdrop::pool.create()) BGRocks7_3219(x, y);
}
class BGRocks3_3220 : public Backdrop
{
public:
    BGRocks3_3220(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Rocks 3", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14133);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_bgrocks3_3220(int x, int y)
{
    return new (Backdrop::pool.create()) BGRocks3_3220(x, y);
}
class BGRocks5_3221 : public Backdrop
{
public:
    BGRocks5_3221(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Rocks 5", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14134);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_bgrocks5_3221(int x, int y)
{
    return new (Backdrop::pool.create()) BGRocks5_3221(x, y);
}
class BGSnow9_3222 : public Backdrop
{
public:
    BGSnow9_3222(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Snow 9", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13611);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_bgsnow9_3222(int x, int y)
{
    return new (Backdrop::pool.create()) BGSnow9_3222(x, y);
}
class BGSnowSlope2_3223 : public Backdrop
{
public:
    BGSnowSlope2_3223(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_SnowSlope 2", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11955);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_bgsnowslope2_3223(int x, int y)
{
    return new (Backdrop::pool.create()) BGSnowSlope2_3223(x, y);
}
class BGSnow1_3224 : public Backdrop
{
public:
    BGSnow1_3224(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Snow 1", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5119);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_bgsnow1_3224(int x, int y)
{
    return new (Backdrop::pool.create()) BGSnow1_3224(x, y);
}
class BGSnowSlope1_3225 : public Backdrop
{
public:
    BGSnowSlope1_3225(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_SnowSlope 1", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10168);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_bgsnowslope1_3225(int x, int y)
{
    return new (Backdrop::pool.create()) BGSnowSlope1_3225(x, y);
}
class BGRocks6_3226 : public Backdrop
{
public:
    BGRocks6_3226(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Rocks 6", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12759);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_bgrocks6_3226(int x, int y)
{
    return new (Backdrop::pool.create()) BGRocks6_3226(x, y);
}
class BGRocks9_3227 : public Backdrop
{
public:
    BGRocks9_3227(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Rocks 9", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14072);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_bgrocks9_3227(int x, int y)
{
    return new (Backdrop::pool.create()) BGRocks9_3227(x, y);
}
class BGRocks10_3228 : public Backdrop
{
public:
    BGRocks10_3228(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Rocks 10", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14071);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_bgrocks10_3228(int x, int y)
{
    return new (Backdrop::pool.create()) BGRocks10_3228(x, y);
}
class BGSnow8_3229 : public Backdrop
{
public:
    BGSnow8_3229(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Snow 8", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3181);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_bgsnow8_3229(int x, int y)
{
    return new (Backdrop::pool.create()) BGSnow8_3229(x, y);
}
class BGSnow11_3230 : public Backdrop
{
public:
    BGSnow11_3230(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Snow 11", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10163);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_bgsnow11_3230(int x, int y)
{
    return new (Backdrop::pool.create()) BGSnow11_3230(x, y);
}
class BGRocks8_3231 : public Backdrop
{
public:
    BGRocks8_3231(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Rocks 8", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1596);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_bgrocks8_3231(int x, int y)
{
    return new (Backdrop::pool.create()) BGRocks8_3231(x, y);
}
class BGSnow5_3232 : public Backdrop
{
public:
    BGSnow5_3232(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Snow 5", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10167);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_bgsnow5_3232(int x, int y)
{
    return new (Backdrop::pool.create()) BGSnow5_3232(x, y);
}
class BGSnow6_3233 : public Backdrop
{
public:
    BGSnow6_3233(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Snow 6", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13981);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_bgsnow6_3233(int x, int y)
{
    return new (Backdrop::pool.create()) BGSnow6_3233(x, y);
}
class BGRock_3234 : public Backdrop
{
public:
    BGRock_3234(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_rock", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1605);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_bgrock_3234(int x, int y)
{
    return new (Backdrop::pool.create()) BGRock_3234(x, y);
}
class BGSnowFlat_3235 : public Backdrop
{
public:
    BGSnowFlat_3235(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_SnowFlat", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7226);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_bgsnowflat_3235(int x, int y)
{
    return new (Backdrop::pool.create()) BGSnowFlat_3235(x, y);
}
class BGSnow7_3236 : public Backdrop
{
public:
    BGSnow7_3236(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Snow 7", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13355);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_bgsnow7_3236(int x, int y)
{
    return new (Backdrop::pool.create()) BGSnow7_3236(x, y);
}
class BGSnow3_3237 : public Backdrop
{
public:
    BGSnow3_3237(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Snow 3", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13980);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_bgsnow3_3237(int x, int y)
{
    return new (Backdrop::pool.create()) BGSnow3_3237(x, y);
}
class BGSnow2_3238 : public Backdrop
{
public:
    BGSnow2_3238(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Snow 2", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10166);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_bgsnow2_3238(int x, int y)
{
    return new (Backdrop::pool.create()) BGSnow2_3238(x, y);
}
class BGSnow4_3239 : public Backdrop
{
public:
    BGSnow4_3239(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Snow 4", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13353);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_bgsnow4_3239(int x, int y)
{
    return new (Backdrop::pool.create()) BGSnow4_3239(x, y);
}
class BGRocks12_3240 : public Backdrop
{
public:
    BGRocks12_3240(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Rocks 12", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14128);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_bgrocks12_3240(int x, int y)
{
    return new (Backdrop::pool.create()) BGRocks12_3240(x, y);
}
class BGSpiralSlide_3241 : public Backdrop
{
public:
    BGSpiralSlide_3241(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_SpiralSlide", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3145);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bgspiralslide_3241(int x, int y)
{
    return new (Backdrop::pool.create()) BGSpiralSlide_3241(x, y);
}
class BGSpiralSlideTop_3242 : public Backdrop
{
public:
    BGSpiralSlideTop_3242(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_SpiralSlideTop", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13602);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bgspiralslidetop_3242(int x, int y)
{
    return new (Backdrop::pool.create()) BGSpiralSlideTop_3242(x, y);
}
class BGSpiralSlideBottom_3243 : public Backdrop
{
public:
    BGSpiralSlideBottom_3243(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_SpiralSlideBottom", 20);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14155);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bgspiralslidebottom_3243(int x, int y)
{
    return new (Backdrop::pool.create()) BGSpiralSlideBottom_3243(x, y);
}
class BGSnow10_3244 : public Backdrop
{
public:
    BGSnow10_3244(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Snow 10", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10162);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_bgsnow10_3244(int x, int y)
{
    return new (Backdrop::pool.create()) BGSnow10_3244(x, y);
}
class BGSnow12_3245 : public Backdrop
{
public:
    BGSnow12_3245(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Snow 12", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6423);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_bgsnow12_3245(int x, int y)
{
    return new (Backdrop::pool.create()) BGSnow12_3245(x, y);
}
static Image* images_objectteleblockmask_3246_0_0[1];
static Direction direction_objectteleblockmask_3246_0_0 = {0, 50, 50, 0, 1, images_objectteleblockmask_3246_0_0, 1};
static Animation anim_objectteleblockmask_3246_0 = {&direction_objectteleblockmask_3246_0_0, &direction_objectteleblockmask_3246_0_0, &direction_objectteleblockmask_3246_0_0, &direction_objectteleblockmask_3246_0_0, &direction_objectteleblockmask_3246_0_0, &direction_objectteleblockmask_3246_0_0, &direction_objectteleblockmask_3246_0_0, &direction_objectteleblockmask_3246_0_0, &direction_objectteleblockmask_3246_0_0, &direction_objectteleblockmask_3246_0_0, &direction_objectteleblockmask_3246_0_0, &direction_objectteleblockmask_3246_0_0, &direction_objectteleblockmask_3246_0_0, &direction_objectteleblockmask_3246_0_0, &direction_objectteleblockmask_3246_0_0, &direction_objectteleblockmask_3246_0_0, NULL, &direction_objectteleblockmask_3246_0_0, &direction_objectteleblockmask_3246_0_0, &direction_objectteleblockmask_3246_0_0, &direction_objectteleblockmask_3246_0_0, &direction_objectteleblockmask_3246_0_0, &direction_objectteleblockmask_3246_0_0, &direction_objectteleblockmask_3246_0_0, &direction_objectteleblockmask_3246_0_0, &direction_objectteleblockmask_3246_0_0, &direction_objectteleblockmask_3246_0_0, &direction_objectteleblockmask_3246_0_0, &direction_objectteleblockmask_3246_0_0, &direction_objectteleblockmask_3246_0_0, &direction_objectteleblockmask_3246_0_0, &direction_objectteleblockmask_3246_0_0};
static Animation * anim_array_objectteleblockmask_3246[1] = {&anim_objectteleblockmask_3246_0};
static Animations anim_objectteleblockmask_3246 = {1, &anim_array_objectteleblockmask_3246[0]};
static bool anim_objectteleblockmask_3246_initialized;
class ObjectTeleBlockMask_3246 : public Active
{
public:
    ObjectTeleBlockMask_3246(int x, int y) : Active(x, y, ObjectTeleBlockMask_3246_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Object_TeleBlockMask", 20);
#endif
        set_visible(false);
        this->animations = &anim_objectteleblockmask_3246;
        if (!anim_objectteleblockmask_3246_initialized) {
            anim_objectteleblockmask_3246_initialized = true;
            images_objectteleblockmask_3246_0_0[0] = get_internal_image(13573);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(2, 320);
    }
};
FrameObject * create_objectteleblockmask_3246(int x, int y)
{
    return new (Active::pool.create()) ObjectTeleBlockMask_3246(x, y);
}
static Image* images_gimmicksnowspiremask_3247_0_0[1];
static Direction direction_gimmicksnowspiremask_3247_0_0 = {0, 50, 50, 0, 1, images_gimmicksnowspiremask_3247_0_0, 1};
static Animation anim_gimmicksnowspiremask_3247_0 = {&direction_gimmicksnowspiremask_3247_0_0, &direction_gimmicksnowspiremask_3247_0_0, &direction_gimmicksnowspiremask_3247_0_0, &direction_gimmicksnowspiremask_3247_0_0, &direction_gimmicksnowspiremask_3247_0_0, &direction_gimmicksnowspiremask_3247_0_0, &direction_gimmicksnowspiremask_3247_0_0, &direction_gimmicksnowspiremask_3247_0_0, &direction_gimmicksnowspiremask_3247_0_0, &direction_gimmicksnowspiremask_3247_0_0, &direction_gimmicksnowspiremask_3247_0_0, &direction_gimmicksnowspiremask_3247_0_0, &direction_gimmicksnowspiremask_3247_0_0, &direction_gimmicksnowspiremask_3247_0_0, &direction_gimmicksnowspiremask_3247_0_0, &direction_gimmicksnowspiremask_3247_0_0, NULL, &direction_gimmicksnowspiremask_3247_0_0, &direction_gimmicksnowspiremask_3247_0_0, &direction_gimmicksnowspiremask_3247_0_0, &direction_gimmicksnowspiremask_3247_0_0, &direction_gimmicksnowspiremask_3247_0_0, &direction_gimmicksnowspiremask_3247_0_0, &direction_gimmicksnowspiremask_3247_0_0, &direction_gimmicksnowspiremask_3247_0_0, &direction_gimmicksnowspiremask_3247_0_0, &direction_gimmicksnowspiremask_3247_0_0, &direction_gimmicksnowspiremask_3247_0_0, &direction_gimmicksnowspiremask_3247_0_0, &direction_gimmicksnowspiremask_3247_0_0, &direction_gimmicksnowspiremask_3247_0_0, &direction_gimmicksnowspiremask_3247_0_0};
static Animation * anim_array_gimmicksnowspiremask_3247[1] = {&anim_gimmicksnowspiremask_3247_0};
static Animations anim_gimmicksnowspiremask_3247 = {1, &anim_array_gimmicksnowspiremask_3247[0]};
static bool anim_gimmicksnowspiremask_3247_initialized;
class GimmickSnowSpireMask_3247 : public Active
{
public:
    GimmickSnowSpireMask_3247(int x, int y) : Active(x, y, GimmickSnowSpireMask_3247_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Gimmick_SnowSpireMask", 21);
#endif
        set_visible(false);
        this->animations = &anim_gimmicksnowspiremask_3247;
        if (!anim_gimmicksnowspiremask_3247_initialized) {
            anim_gimmicksnowspiremask_3247_initialized = true;
            images_gimmicksnowspiremask_3247_0_0[0] = get_internal_image(13544);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(2, 90);
        alterables->values.set(5, 200);
    }
};
FrameObject * create_gimmicksnowspiremask_3247(int x, int y)
{
    return new (Active::pool.create()) GimmickSnowSpireMask_3247(x, y);
}
static Image* images_gimmickspiralslidestart_3248_0_0[1];
static Direction direction_gimmickspiralslidestart_3248_0_0 = {0, 50, 50, 0, 1, images_gimmickspiralslidestart_3248_0_0, 1};
static Animation anim_gimmickspiralslidestart_3248_0 = {&direction_gimmickspiralslidestart_3248_0_0, &direction_gimmickspiralslidestart_3248_0_0, &direction_gimmickspiralslidestart_3248_0_0, &direction_gimmickspiralslidestart_3248_0_0, &direction_gimmickspiralslidestart_3248_0_0, &direction_gimmickspiralslidestart_3248_0_0, &direction_gimmickspiralslidestart_3248_0_0, &direction_gimmickspiralslidestart_3248_0_0, &direction_gimmickspiralslidestart_3248_0_0, &direction_gimmickspiralslidestart_3248_0_0, &direction_gimmickspiralslidestart_3248_0_0, &direction_gimmickspiralslidestart_3248_0_0, &direction_gimmickspiralslidestart_3248_0_0, &direction_gimmickspiralslidestart_3248_0_0, &direction_gimmickspiralslidestart_3248_0_0, &direction_gimmickspiralslidestart_3248_0_0, NULL, &direction_gimmickspiralslidestart_3248_0_0, &direction_gimmickspiralslidestart_3248_0_0, &direction_gimmickspiralslidestart_3248_0_0, &direction_gimmickspiralslidestart_3248_0_0, &direction_gimmickspiralslidestart_3248_0_0, &direction_gimmickspiralslidestart_3248_0_0, &direction_gimmickspiralslidestart_3248_0_0, &direction_gimmickspiralslidestart_3248_0_0, &direction_gimmickspiralslidestart_3248_0_0, &direction_gimmickspiralslidestart_3248_0_0, &direction_gimmickspiralslidestart_3248_0_0, &direction_gimmickspiralslidestart_3248_0_0, &direction_gimmickspiralslidestart_3248_0_0, &direction_gimmickspiralslidestart_3248_0_0, &direction_gimmickspiralslidestart_3248_0_0};
static Animation * anim_array_gimmickspiralslidestart_3248[1] = {&anim_gimmickspiralslidestart_3248_0};
static Animations anim_gimmickspiralslidestart_3248 = {1, &anim_array_gimmickspiralslidestart_3248[0]};
static bool anim_gimmickspiralslidestart_3248_initialized;
class GimmickSpiralSlideStart_3248 : public Active
{
public:
    GimmickSpiralSlideStart_3248(int x, int y) : Active(x, y, GimmickSpiralSlideStart_3248_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_SpiralSlideStart", 24);
#endif
        set_visible(false);
        this->animations = &anim_gimmickspiralslidestart_3248;
        if (!anim_gimmickspiralslidestart_3248_initialized) {
            anim_gimmickspiralslidestart_3248_initialized = true;
            images_gimmickspiralslidestart_3248_0_0[0] = get_internal_image(3183);
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
FrameObject * create_gimmickspiralslidestart_3248(int x, int y)
{
    return new (Active::pool.create()) GimmickSpiralSlideStart_3248(x, y);
}
static Image* images_gimmickspiralslideend_3249_0_0[1];
static Direction direction_gimmickspiralslideend_3249_0_0 = {0, 50, 50, 0, 1, images_gimmickspiralslideend_3249_0_0, 1};
static Animation anim_gimmickspiralslideend_3249_0 = {&direction_gimmickspiralslideend_3249_0_0, &direction_gimmickspiralslideend_3249_0_0, &direction_gimmickspiralslideend_3249_0_0, &direction_gimmickspiralslideend_3249_0_0, &direction_gimmickspiralslideend_3249_0_0, &direction_gimmickspiralslideend_3249_0_0, &direction_gimmickspiralslideend_3249_0_0, &direction_gimmickspiralslideend_3249_0_0, &direction_gimmickspiralslideend_3249_0_0, &direction_gimmickspiralslideend_3249_0_0, &direction_gimmickspiralslideend_3249_0_0, &direction_gimmickspiralslideend_3249_0_0, &direction_gimmickspiralslideend_3249_0_0, &direction_gimmickspiralslideend_3249_0_0, &direction_gimmickspiralslideend_3249_0_0, &direction_gimmickspiralslideend_3249_0_0, NULL, &direction_gimmickspiralslideend_3249_0_0, &direction_gimmickspiralslideend_3249_0_0, &direction_gimmickspiralslideend_3249_0_0, &direction_gimmickspiralslideend_3249_0_0, &direction_gimmickspiralslideend_3249_0_0, &direction_gimmickspiralslideend_3249_0_0, &direction_gimmickspiralslideend_3249_0_0, &direction_gimmickspiralslideend_3249_0_0, &direction_gimmickspiralslideend_3249_0_0, &direction_gimmickspiralslideend_3249_0_0, &direction_gimmickspiralslideend_3249_0_0, &direction_gimmickspiralslideend_3249_0_0, &direction_gimmickspiralslideend_3249_0_0, &direction_gimmickspiralslideend_3249_0_0, &direction_gimmickspiralslideend_3249_0_0};
static Animation * anim_array_gimmickspiralslideend_3249[1] = {&anim_gimmickspiralslideend_3249_0};
static Animations anim_gimmickspiralslideend_3249 = {1, &anim_array_gimmickspiralslideend_3249[0]};
static bool anim_gimmickspiralslideend_3249_initialized;
class GimmickSpiralSlideEnd_3249 : public Active
{
public:
    GimmickSpiralSlideEnd_3249(int x, int y) : Active(x, y, GimmickSpiralSlideEnd_3249_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_SpiralSlideEnd", 22);
#endif
        set_visible(false);
        this->animations = &anim_gimmickspiralslideend_3249;
        if (!anim_gimmickspiralslideend_3249_initialized) {
            anim_gimmickspiralslideend_3249_initialized = true;
            images_gimmickspiralslideend_3249_0_0[0] = get_internal_image(4646);
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
FrameObject * create_gimmickspiralslideend_3249(int x, int y)
{
    return new (Active::pool.create()) GimmickSpiralSlideEnd_3249(x, y);
}
class SlideCheck_3250 : public Counter
{
public:
    SlideCheck_3250(int x, int y) : Counter(x, y, SlideCheck_3250_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("SlideCheck", 10);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        type = HIDDEN_COUNTER;
        width = height = 0;
        minimum = -999999999;
        maximum = 999999999;
        set(0);
    }
};
FrameObject * create_slidecheck_3250(int x, int y)
{
    return new (Counter::pool.create()) SlideCheck_3250(x, y);
}
static Image* images_levelglacierplatform1_3251_0_0[1];
static Direction direction_levelglacierplatform1_3251_0_0 = {0, 100, 100, 0, 1, images_levelglacierplatform1_3251_0_0, 1};
static Animation anim_levelglacierplatform1_3251_0 = {&direction_levelglacierplatform1_3251_0_0, &direction_levelglacierplatform1_3251_0_0, &direction_levelglacierplatform1_3251_0_0, &direction_levelglacierplatform1_3251_0_0, &direction_levelglacierplatform1_3251_0_0, &direction_levelglacierplatform1_3251_0_0, &direction_levelglacierplatform1_3251_0_0, &direction_levelglacierplatform1_3251_0_0, &direction_levelglacierplatform1_3251_0_0, &direction_levelglacierplatform1_3251_0_0, &direction_levelglacierplatform1_3251_0_0, &direction_levelglacierplatform1_3251_0_0, &direction_levelglacierplatform1_3251_0_0, &direction_levelglacierplatform1_3251_0_0, &direction_levelglacierplatform1_3251_0_0, &direction_levelglacierplatform1_3251_0_0, NULL, &direction_levelglacierplatform1_3251_0_0, &direction_levelglacierplatform1_3251_0_0, &direction_levelglacierplatform1_3251_0_0, &direction_levelglacierplatform1_3251_0_0, &direction_levelglacierplatform1_3251_0_0, &direction_levelglacierplatform1_3251_0_0, &direction_levelglacierplatform1_3251_0_0, &direction_levelglacierplatform1_3251_0_0, &direction_levelglacierplatform1_3251_0_0, &direction_levelglacierplatform1_3251_0_0, &direction_levelglacierplatform1_3251_0_0, &direction_levelglacierplatform1_3251_0_0, &direction_levelglacierplatform1_3251_0_0, &direction_levelglacierplatform1_3251_0_0, &direction_levelglacierplatform1_3251_0_0};
static Animation * anim_array_levelglacierplatform1_3251[1] = {&anim_levelglacierplatform1_3251_0};
static Animations anim_levelglacierplatform1_3251 = {1, &anim_array_levelglacierplatform1_3251[0]};
static bool anim_levelglacierplatform1_3251_initialized;
class LevelGlacierPlatform1_3251 : public Active
{
public:
    LevelGlacierPlatform1_3251(int x, int y) : Active(x, y, LevelGlacierPlatform1_3251_type)
    {
        // qualifiers: 15, 16, 19, 20
#ifndef NDEBUG
        name = std::string("Level_GlacierPlatform1", 22);
#endif
        this->animations = &anim_levelglacierplatform1_3251;
        if (!anim_levelglacierplatform1_3251_initialized) {
            anim_levelglacierplatform1_3251_initialized = true;
            images_levelglacierplatform1_3251_0_0[0] = get_internal_image(13592);
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
FrameObject * create_levelglacierplatform1_3251(int x, int y)
{
    return new (Active::pool.create()) LevelGlacierPlatform1_3251(x, y);
}
class BGSpiralSlideFront_3252 : public Backdrop
{
public:
    BGSpiralSlideFront_3252(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_SpiralSlideFront", 19);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3217);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bgspiralslidefront_3252(int x, int y)
{
    return new (Backdrop::pool.create()) BGSpiralSlideFront_3252(x, y);
}
class BGSpiralSlideTopFront_3253 : public Backdrop
{
public:
    BGSpiralSlideTopFront_3253(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_SpiralSlideTopFront", 22);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14154);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bgspiralslidetopfront_3253(int x, int y)
{
    return new (Backdrop::pool.create()) BGSpiralSlideTopFront_3253(x, y);
}
static Image* images_brevonmechlaser_3254_0_0[4];
static Direction direction_brevonmechlaser_3254_0_0 = {0, 90, 90, 0, -1, images_brevonmechlaser_3254_0_0, 4};
static Image* images_brevonmechlaser_3254_0_8[2];
static Direction direction_brevonmechlaser_3254_0_8 = {8, 50, 50, 0, 1, images_brevonmechlaser_3254_0_8, 2};
static Image* images_brevonmechlaser_3254_0_16[4];
static Direction direction_brevonmechlaser_3254_0_16 = {16, 90, 90, 0, -1, images_brevonmechlaser_3254_0_16, 4};
static Animation anim_brevonmechlaser_3254_0 = {&direction_brevonmechlaser_3254_0_0, &direction_brevonmechlaser_3254_0_0, &direction_brevonmechlaser_3254_0_0, &direction_brevonmechlaser_3254_0_0, NULL, &direction_brevonmechlaser_3254_0_8, &direction_brevonmechlaser_3254_0_8, &direction_brevonmechlaser_3254_0_8, &direction_brevonmechlaser_3254_0_8, &direction_brevonmechlaser_3254_0_8, &direction_brevonmechlaser_3254_0_8, &direction_brevonmechlaser_3254_0_8, NULL, &direction_brevonmechlaser_3254_0_16, &direction_brevonmechlaser_3254_0_16, &direction_brevonmechlaser_3254_0_16, &direction_brevonmechlaser_3254_0_16, &direction_brevonmechlaser_3254_0_16, &direction_brevonmechlaser_3254_0_16, &direction_brevonmechlaser_3254_0_16, &direction_brevonmechlaser_3254_0_16, &direction_brevonmechlaser_3254_0_16, &direction_brevonmechlaser_3254_0_16, &direction_brevonmechlaser_3254_0_16, NULL, &direction_brevonmechlaser_3254_0_0, &direction_brevonmechlaser_3254_0_0, &direction_brevonmechlaser_3254_0_0, &direction_brevonmechlaser_3254_0_0, &direction_brevonmechlaser_3254_0_0, &direction_brevonmechlaser_3254_0_0, &direction_brevonmechlaser_3254_0_0};
static Animation * anim_array_brevonmechlaser_3254[1] = {&anim_brevonmechlaser_3254_0};
static Animations anim_brevonmechlaser_3254 = {1, &anim_array_brevonmechlaser_3254[0]};
static bool anim_brevonmechlaser_3254_initialized;
class BrevonMechLaser_3254 : public Active
{
public:
    BrevonMechLaser_3254(int x, int y) : Active(x, y, BrevonMechLaser_3254_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BrevonMech_Laser", 16);
#endif
        this->animations = &anim_brevonmechlaser_3254;
        if (!anim_brevonmechlaser_3254_initialized) {
            anim_brevonmechlaser_3254_initialized = true;
            images_brevonmechlaser_3254_0_0[0] = get_internal_image(11706);
            images_brevonmechlaser_3254_0_0[1] = get_internal_image(11710);
            images_brevonmechlaser_3254_0_0[2] = get_internal_image(13651);
            images_brevonmechlaser_3254_0_0[3] = get_internal_image(13652);
            images_brevonmechlaser_3254_0_8[0] = get_internal_image(13653);
            images_brevonmechlaser_3254_0_8[1] = get_internal_image(13655);
            images_brevonmechlaser_3254_0_16[0] = get_internal_image(13656);
            images_brevonmechlaser_3254_0_16[1] = get_internal_image(13657);
            images_brevonmechlaser_3254_0_16[2] = get_internal_image(13658);
            images_brevonmechlaser_3254_0_16[3] = get_internal_image(13659);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 50);
        alterables->values.set(1, 8);
    }
};
FrameObject * create_brevonmechlaser_3254(int x, int y)
{
    return new (Active::pool.create()) BrevonMechLaser_3254(x, y);
}
static Image* images_effectbrevonmechwarning_3255_0_0[3];
static Direction direction_effectbrevonmechwarning_3255_0_0 = {0, 50, 50, 0, -1, images_effectbrevonmechwarning_3255_0_0, 3};
static Animation anim_effectbrevonmechwarning_3255_0 = {&direction_effectbrevonmechwarning_3255_0_0, &direction_effectbrevonmechwarning_3255_0_0, &direction_effectbrevonmechwarning_3255_0_0, &direction_effectbrevonmechwarning_3255_0_0, &direction_effectbrevonmechwarning_3255_0_0, &direction_effectbrevonmechwarning_3255_0_0, &direction_effectbrevonmechwarning_3255_0_0, &direction_effectbrevonmechwarning_3255_0_0, &direction_effectbrevonmechwarning_3255_0_0, &direction_effectbrevonmechwarning_3255_0_0, &direction_effectbrevonmechwarning_3255_0_0, &direction_effectbrevonmechwarning_3255_0_0, &direction_effectbrevonmechwarning_3255_0_0, &direction_effectbrevonmechwarning_3255_0_0, &direction_effectbrevonmechwarning_3255_0_0, &direction_effectbrevonmechwarning_3255_0_0, NULL, &direction_effectbrevonmechwarning_3255_0_0, &direction_effectbrevonmechwarning_3255_0_0, &direction_effectbrevonmechwarning_3255_0_0, &direction_effectbrevonmechwarning_3255_0_0, &direction_effectbrevonmechwarning_3255_0_0, &direction_effectbrevonmechwarning_3255_0_0, &direction_effectbrevonmechwarning_3255_0_0, &direction_effectbrevonmechwarning_3255_0_0, &direction_effectbrevonmechwarning_3255_0_0, &direction_effectbrevonmechwarning_3255_0_0, &direction_effectbrevonmechwarning_3255_0_0, &direction_effectbrevonmechwarning_3255_0_0, &direction_effectbrevonmechwarning_3255_0_0, &direction_effectbrevonmechwarning_3255_0_0, &direction_effectbrevonmechwarning_3255_0_0};
static Animation * anim_array_effectbrevonmechwarning_3255[1] = {&anim_effectbrevonmechwarning_3255_0};
static Animations anim_effectbrevonmechwarning_3255 = {1, &anim_array_effectbrevonmechwarning_3255[0]};
static bool anim_effectbrevonmechwarning_3255_initialized;
class EffectBrevonMechWarning_3255 : public Active
{
public:
    EffectBrevonMechWarning_3255(int x, int y) : Active(x, y, EffectBrevonMechWarning_3255_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effect_BrevonMechWarning", 24);
#endif
        set_visible(false);
        this->animations = &anim_effectbrevonmechwarning_3255;
        if (!anim_effectbrevonmechwarning_3255_initialized) {
            anim_effectbrevonmechwarning_3255_initialized = true;
            images_effectbrevonmechwarning_3255_0_0[0] = get_internal_image(11988);
            images_effectbrevonmechwarning_3255_0_0[1] = get_internal_image(11989);
            images_effectbrevonmechwarning_3255_0_0[2] = get_internal_image(11990);
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
FrameObject * create_effectbrevonmechwarning_3255(int x, int y)
{
    return new (Active::pool.create()) EffectBrevonMechWarning_3255(x, y);
}
class BGBackRocks1_3256 : public Backdrop
{
public:
    BGBackRocks1_3256(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_BackRocks 1", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13615);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bgbackrocks1_3256(int x, int y)
{
    return new (Backdrop::pool.create()) BGBackRocks1_3256(x, y);
}
class BGBackRocks2_3257 : public Backdrop
{
public:
    BGBackRocks2_3257(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_BackRocks 2", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13617);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bgbackrocks2_3257(int x, int y)
{
    return new (Backdrop::pool.create()) BGBackRocks2_3257(x, y);
}
class BGBackRocks3_3258 : public Backdrop
{
public:
    BGBackRocks3_3258(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_BackRocks 3", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13616);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bgbackrocks3_3258(int x, int y)
{
    return new (Backdrop::pool.create()) BGBackRocks3_3258(x, y);
}
class BGDeadTree3_3259 : public Backdrop
{
public:
    BGDeadTree3_3259(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_DeadTree 3", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11721);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bgdeadtree3_3259(int x, int y)
{
    return new (Backdrop::pool.create()) BGDeadTree3_3259(x, y);
}
class BGRocks16_3260 : public Backdrop
{
public:
    BGRocks16_3260(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Rocks 16", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14131);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_bgrocks16_3260(int x, int y)
{
    return new (Backdrop::pool.create()) BGRocks16_3260(x, y);
}
class BGSnowSlope3_3261 : public Backdrop
{
public:
    BGSnowSlope3_3261(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_SnowSlope 3", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12415);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_bgsnowslope3_3261(int x, int y)
{
    return new (Backdrop::pool.create()) BGSnowSlope3_3261(x, y);
}
class BGRocks17_3262 : public Backdrop
{
public:
    BGRocks17_3262(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Rocks 17", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1534);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_bgrocks17_3262(int x, int y)
{
    return new (Backdrop::pool.create()) BGRocks17_3262(x, y);
}
class BGSnow13_3263 : public Backdrop
{
public:
    BGSnow13_3263(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Snow 13", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14558);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_bgsnow13_3263(int x, int y)
{
    return new (Backdrop::pool.create()) BGSnow13_3263(x, y);
}
class BGSnow14_3264 : public Backdrop
{
public:
    BGSnow14_3264(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Snow 14", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14557);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_bgsnow14_3264(int x, int y)
{
    return new (Backdrop::pool.create()) BGSnow14_3264(x, y);
}
static Image* images_gimmickbgbar_3265_0_0[5];
static Direction direction_gimmickbgbar_3265_0_0 = {0, 100, 100, 0, -1, images_gimmickbgbar_3265_0_0, 5};
static Animation anim_gimmickbgbar_3265_0 = {&direction_gimmickbgbar_3265_0_0, &direction_gimmickbgbar_3265_0_0, &direction_gimmickbgbar_3265_0_0, &direction_gimmickbgbar_3265_0_0, &direction_gimmickbgbar_3265_0_0, &direction_gimmickbgbar_3265_0_0, &direction_gimmickbgbar_3265_0_0, &direction_gimmickbgbar_3265_0_0, &direction_gimmickbgbar_3265_0_0, &direction_gimmickbgbar_3265_0_0, &direction_gimmickbgbar_3265_0_0, &direction_gimmickbgbar_3265_0_0, &direction_gimmickbgbar_3265_0_0, &direction_gimmickbgbar_3265_0_0, &direction_gimmickbgbar_3265_0_0, &direction_gimmickbgbar_3265_0_0, NULL, &direction_gimmickbgbar_3265_0_0, &direction_gimmickbgbar_3265_0_0, &direction_gimmickbgbar_3265_0_0, &direction_gimmickbgbar_3265_0_0, &direction_gimmickbgbar_3265_0_0, &direction_gimmickbgbar_3265_0_0, &direction_gimmickbgbar_3265_0_0, &direction_gimmickbgbar_3265_0_0, &direction_gimmickbgbar_3265_0_0, &direction_gimmickbgbar_3265_0_0, &direction_gimmickbgbar_3265_0_0, &direction_gimmickbgbar_3265_0_0, &direction_gimmickbgbar_3265_0_0, &direction_gimmickbgbar_3265_0_0, &direction_gimmickbgbar_3265_0_0};
static Animation * anim_array_gimmickbgbar_3265[1] = {&anim_gimmickbgbar_3265_0};
static Animations anim_gimmickbgbar_3265 = {1, &anim_array_gimmickbgbar_3265[0]};
static bool anim_gimmickbgbar_3265_initialized;
class GimmickBGBar_3265 : public Active
{
public:
    GimmickBGBar_3265(int x, int y) : Active(x, y, GimmickBGBar_3265_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_BG_Bar", 14);
#endif
        this->animations = &anim_gimmickbgbar_3265;
        if (!anim_gimmickbgbar_3265_initialized) {
            anim_gimmickbgbar_3265_initialized = true;
            images_gimmickbgbar_3265_0_0[0] = get_internal_image(1614);
            images_gimmickbgbar_3265_0_0[1] = get_internal_image(3615);
            images_gimmickbgbar_3265_0_0[2] = get_internal_image(11708);
            images_gimmickbgbar_3265_0_0[3] = get_internal_image(11707);
            images_gimmickbgbar_3265_0_0[4] = get_internal_image(1598);
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
FrameObject * create_gimmickbgbar_3265(int x, int y)
{
    return new (Active::pool.create()) GimmickBGBar_3265(x, y);
}
static Image* images_gimmickbgbarmask_3266_0_0[1];
static Direction direction_gimmickbgbarmask_3266_0_0 = {0, 50, 50, 0, 1, images_gimmickbgbarmask_3266_0_0, 1};
static Animation anim_gimmickbgbarmask_3266_0 = {&direction_gimmickbgbarmask_3266_0_0, &direction_gimmickbgbarmask_3266_0_0, &direction_gimmickbgbarmask_3266_0_0, &direction_gimmickbgbarmask_3266_0_0, &direction_gimmickbgbarmask_3266_0_0, &direction_gimmickbgbarmask_3266_0_0, &direction_gimmickbgbarmask_3266_0_0, &direction_gimmickbgbarmask_3266_0_0, &direction_gimmickbgbarmask_3266_0_0, &direction_gimmickbgbarmask_3266_0_0, &direction_gimmickbgbarmask_3266_0_0, &direction_gimmickbgbarmask_3266_0_0, &direction_gimmickbgbarmask_3266_0_0, &direction_gimmickbgbarmask_3266_0_0, &direction_gimmickbgbarmask_3266_0_0, &direction_gimmickbgbarmask_3266_0_0, NULL, &direction_gimmickbgbarmask_3266_0_0, &direction_gimmickbgbarmask_3266_0_0, &direction_gimmickbgbarmask_3266_0_0, &direction_gimmickbgbarmask_3266_0_0, &direction_gimmickbgbarmask_3266_0_0, &direction_gimmickbgbarmask_3266_0_0, &direction_gimmickbgbarmask_3266_0_0, &direction_gimmickbgbarmask_3266_0_0, &direction_gimmickbgbarmask_3266_0_0, &direction_gimmickbgbarmask_3266_0_0, &direction_gimmickbgbarmask_3266_0_0, &direction_gimmickbgbarmask_3266_0_0, &direction_gimmickbgbarmask_3266_0_0, &direction_gimmickbgbarmask_3266_0_0, &direction_gimmickbgbarmask_3266_0_0};
static Animation * anim_array_gimmickbgbarmask_3266[1] = {&anim_gimmickbgbarmask_3266_0};
static Animations anim_gimmickbgbarmask_3266 = {1, &anim_array_gimmickbgbarmask_3266[0]};
static bool anim_gimmickbgbarmask_3266_initialized;
class GimmickBGBarMask_3266 : public Active
{
public:
    GimmickBGBarMask_3266(int x, int y) : Active(x, y, GimmickBGBarMask_3266_type)
    {
        // qualifiers: 46
#ifndef NDEBUG
        name = std::string("Gimmick_BG_BarMask", 18);
#endif
        set_visible(false);
        this->animations = &anim_gimmickbgbarmask_3266;
        if (!anim_gimmickbgbarmask_3266_initialized) {
            anim_gimmickbgbarmask_3266_initialized = true;
            images_gimmickbgbarmask_3266_0_0[0] = get_internal_image(930);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(4, 128);
    }
};
FrameObject * create_gimmickbgbarmask_3266(int x, int y)
{
    return new (Active::pool.create()) GimmickBGBarMask_3266(x, y);
}
class BGFacility9_3267 : public Backdrop
{
public:
    BGFacility9_3267(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Facility 9", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14152);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bgfacility9_3267(int x, int y)
{
    return new (Backdrop::pool.create()) BGFacility9_3267(x, y);
}
class BGFacility11_3268 : public Backdrop
{
public:
    BGFacility11_3268(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Facility 11", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14150);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bgfacility11_3268(int x, int y)
{
    return new (Backdrop::pool.create()) BGFacility11_3268(x, y);
}
class BGFacility10_3269 : public Backdrop
{
public:
    BGFacility10_3269(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Facility 10", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13667);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bgfacility10_3269(int x, int y)
{
    return new (Backdrop::pool.create()) BGFacility10_3269(x, y);
}
class BGRocks17_3270 : public Backdrop
{
public:
    BGRocks17_3270(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Rocks 17", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1534);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_bgrocks17_3270(int x, int y)
{
    return new (Backdrop::pool.create()) BGRocks17_3270(x, y);
}
class BGFacility1_3271 : public Backdrop
{
public:
    BGFacility1_3271(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Facility 1", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13855);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_bgfacility1_3271(int x, int y)
{
    return new (Backdrop::pool.create()) BGFacility1_3271(x, y);
}
class BGFacility3_3272 : public Backdrop
{
public:
    BGFacility3_3272(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Facility 3", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13833);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_bgfacility3_3272(int x, int y)
{
    return new (Backdrop::pool.create()) BGFacility3_3272(x, y);
}
class BGFacility2_3273 : public Backdrop
{
public:
    BGFacility2_3273(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Facility 2", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13822);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_bgfacility2_3273(int x, int y)
{
    return new (Backdrop::pool.create()) BGFacility2_3273(x, y);
}
class BGFacility6_3274 : public Backdrop
{
public:
    BGFacility6_3274(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Facility 6", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13835);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_bgfacility6_3274(int x, int y)
{
    return new (Backdrop::pool.create()) BGFacility6_3274(x, y);
}
class BGFacility4_3275 : public Backdrop
{
public:
    BGFacility4_3275(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Facility 4", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13824);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_bgfacility4_3275(int x, int y)
{
    return new (Backdrop::pool.create()) BGFacility4_3275(x, y);
}
class BGFacility5_3276 : public Backdrop
{
public:
    BGFacility5_3276(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Facility 5", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13825);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_bgfacility5_3276(int x, int y)
{
    return new (Backdrop::pool.create()) BGFacility5_3276(x, y);
}
class BGFacility7_3277 : public Backdrop
{
public:
    BGFacility7_3277(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Facility 7", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13836);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_bgfacility7_3277(int x, int y)
{
    return new (Backdrop::pool.create()) BGFacility7_3277(x, y);
}
class BGFacility13_3278 : public Backdrop
{
public:
    BGFacility13_3278(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Facility 13", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13830);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_bgfacility13_3278(int x, int y)
{
    return new (Backdrop::pool.create()) BGFacility13_3278(x, y);
}
class BGFacility14_3279 : public Backdrop
{
public:
    BGFacility14_3279(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Facility 14", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13831);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_bgfacility14_3279(int x, int y)
{
    return new (Backdrop::pool.create()) BGFacility14_3279(x, y);
}
class BGFacility12_3280 : public Backdrop
{
public:
    BGFacility12_3280(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Facility 12", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13856);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_bgfacility12_3280(int x, int y)
{
    return new (Backdrop::pool.create()) BGFacility12_3280(x, y);
}
static Image* images_enemydrillsat_3281_0_0[4];
static Direction direction_enemydrillsat_3281_0_0 = {0, 75, 75, 0, -1, images_enemydrillsat_3281_0_0, 4};
static Animation anim_enemydrillsat_3281_0 = {&direction_enemydrillsat_3281_0_0, &direction_enemydrillsat_3281_0_0, &direction_enemydrillsat_3281_0_0, &direction_enemydrillsat_3281_0_0, &direction_enemydrillsat_3281_0_0, &direction_enemydrillsat_3281_0_0, &direction_enemydrillsat_3281_0_0, &direction_enemydrillsat_3281_0_0, &direction_enemydrillsat_3281_0_0, &direction_enemydrillsat_3281_0_0, &direction_enemydrillsat_3281_0_0, &direction_enemydrillsat_3281_0_0, &direction_enemydrillsat_3281_0_0, &direction_enemydrillsat_3281_0_0, &direction_enemydrillsat_3281_0_0, &direction_enemydrillsat_3281_0_0, NULL, &direction_enemydrillsat_3281_0_0, &direction_enemydrillsat_3281_0_0, &direction_enemydrillsat_3281_0_0, &direction_enemydrillsat_3281_0_0, &direction_enemydrillsat_3281_0_0, &direction_enemydrillsat_3281_0_0, &direction_enemydrillsat_3281_0_0, &direction_enemydrillsat_3281_0_0, &direction_enemydrillsat_3281_0_0, &direction_enemydrillsat_3281_0_0, &direction_enemydrillsat_3281_0_0, &direction_enemydrillsat_3281_0_0, &direction_enemydrillsat_3281_0_0, &direction_enemydrillsat_3281_0_0, &direction_enemydrillsat_3281_0_0};
static Image* images_enemydrillsat_3281_7_0[3];
static Direction direction_enemydrillsat_3281_7_0 = {0, 75, 75, 0, -1, images_enemydrillsat_3281_7_0, 3};
static Animation anim_enemydrillsat_3281_7 = {&direction_enemydrillsat_3281_7_0, &direction_enemydrillsat_3281_7_0, &direction_enemydrillsat_3281_7_0, &direction_enemydrillsat_3281_7_0, &direction_enemydrillsat_3281_7_0, &direction_enemydrillsat_3281_7_0, &direction_enemydrillsat_3281_7_0, &direction_enemydrillsat_3281_7_0, &direction_enemydrillsat_3281_7_0, &direction_enemydrillsat_3281_7_0, &direction_enemydrillsat_3281_7_0, &direction_enemydrillsat_3281_7_0, &direction_enemydrillsat_3281_7_0, &direction_enemydrillsat_3281_7_0, &direction_enemydrillsat_3281_7_0, &direction_enemydrillsat_3281_7_0, NULL, &direction_enemydrillsat_3281_7_0, &direction_enemydrillsat_3281_7_0, &direction_enemydrillsat_3281_7_0, &direction_enemydrillsat_3281_7_0, &direction_enemydrillsat_3281_7_0, &direction_enemydrillsat_3281_7_0, &direction_enemydrillsat_3281_7_0, &direction_enemydrillsat_3281_7_0, &direction_enemydrillsat_3281_7_0, &direction_enemydrillsat_3281_7_0, &direction_enemydrillsat_3281_7_0, &direction_enemydrillsat_3281_7_0, &direction_enemydrillsat_3281_7_0, &direction_enemydrillsat_3281_7_0, &direction_enemydrillsat_3281_7_0};
static Image* images_enemydrillsat_3281_11_0[9];
static Direction direction_enemydrillsat_3281_11_0 = {0, 100, 100, 0, 1, images_enemydrillsat_3281_11_0, 9};
static Animation anim_enemydrillsat_3281_11 = {&direction_enemydrillsat_3281_11_0, &direction_enemydrillsat_3281_11_0, &direction_enemydrillsat_3281_11_0, &direction_enemydrillsat_3281_11_0, &direction_enemydrillsat_3281_11_0, &direction_enemydrillsat_3281_11_0, &direction_enemydrillsat_3281_11_0, &direction_enemydrillsat_3281_11_0, &direction_enemydrillsat_3281_11_0, &direction_enemydrillsat_3281_11_0, &direction_enemydrillsat_3281_11_0, &direction_enemydrillsat_3281_11_0, &direction_enemydrillsat_3281_11_0, &direction_enemydrillsat_3281_11_0, &direction_enemydrillsat_3281_11_0, &direction_enemydrillsat_3281_11_0, NULL, &direction_enemydrillsat_3281_11_0, &direction_enemydrillsat_3281_11_0, &direction_enemydrillsat_3281_11_0, &direction_enemydrillsat_3281_11_0, &direction_enemydrillsat_3281_11_0, &direction_enemydrillsat_3281_11_0, &direction_enemydrillsat_3281_11_0, &direction_enemydrillsat_3281_11_0, &direction_enemydrillsat_3281_11_0, &direction_enemydrillsat_3281_11_0, &direction_enemydrillsat_3281_11_0, &direction_enemydrillsat_3281_11_0, &direction_enemydrillsat_3281_11_0, &direction_enemydrillsat_3281_11_0, &direction_enemydrillsat_3281_11_0};
static Animation * anim_array_enemydrillsat_3281[12] = {&anim_enemydrillsat_3281_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemydrillsat_3281_7, NULL, NULL, NULL, &anim_enemydrillsat_3281_11};
static Animations anim_enemydrillsat_3281 = {12, &anim_array_enemydrillsat_3281[0]};
static bool anim_enemydrillsat_3281_initialized;
class EnemyDrillsat_3281 : public Active
{
public:
    EnemyDrillsat_3281(int x, int y) : Active(x, y, EnemyDrillsat_3281_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_Drillsat", 14);
#endif
        set_visible(false);
        this->animations = &anim_enemydrillsat_3281;
        if (!anim_enemydrillsat_3281_initialized) {
            anim_enemydrillsat_3281_initialized = true;
            images_enemydrillsat_3281_0_0[0] = get_internal_image(12760);
            images_enemydrillsat_3281_0_0[1] = get_internal_image(12768);
            images_enemydrillsat_3281_0_0[2] = get_internal_image(13521);
            images_enemydrillsat_3281_0_0[3] = get_internal_image(13546);
            images_enemydrillsat_3281_7_0[0] = get_internal_image(13599);
            images_enemydrillsat_3281_7_0[1] = get_internal_image(13598);
            images_enemydrillsat_3281_7_0[2] = get_internal_image(13601);
            images_enemydrillsat_3281_11_0[0] = get_internal_image(13683);
            images_enemydrillsat_3281_11_0[1] = get_internal_image(13698);
            images_enemydrillsat_3281_11_0[2] = get_internal_image(13685);
            images_enemydrillsat_3281_11_0[3] = get_internal_image(13699);
            images_enemydrillsat_3281_11_0[4] = get_internal_image(13696);
            images_enemydrillsat_3281_11_0[5] = get_internal_image(13697);
            images_enemydrillsat_3281_11_0[6] = get_internal_image(13694);
            images_enemydrillsat_3281_11_0[7] = get_internal_image(13695);
            images_enemydrillsat_3281_11_0[8] = get_internal_image(11723);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(0);
        create_alterables();
        alterables->values.set(0, 5);
        alterables->values.set(7, 100);
    }
};
FrameObject * create_enemydrillsat_3281(int x, int y)
{
    return new (Active::pool.create()) EnemyDrillsat_3281(x, y);
}
static Image* images_levelglacierplatform2_3282_0_0[1];
static Direction direction_levelglacierplatform2_3282_0_0 = {0, 100, 100, 0, 1, images_levelglacierplatform2_3282_0_0, 1};
static Animation anim_levelglacierplatform2_3282_0 = {&direction_levelglacierplatform2_3282_0_0, &direction_levelglacierplatform2_3282_0_0, &direction_levelglacierplatform2_3282_0_0, &direction_levelglacierplatform2_3282_0_0, &direction_levelglacierplatform2_3282_0_0, &direction_levelglacierplatform2_3282_0_0, &direction_levelglacierplatform2_3282_0_0, &direction_levelglacierplatform2_3282_0_0, &direction_levelglacierplatform2_3282_0_0, &direction_levelglacierplatform2_3282_0_0, &direction_levelglacierplatform2_3282_0_0, &direction_levelglacierplatform2_3282_0_0, &direction_levelglacierplatform2_3282_0_0, &direction_levelglacierplatform2_3282_0_0, &direction_levelglacierplatform2_3282_0_0, &direction_levelglacierplatform2_3282_0_0, NULL, &direction_levelglacierplatform2_3282_0_0, &direction_levelglacierplatform2_3282_0_0, &direction_levelglacierplatform2_3282_0_0, &direction_levelglacierplatform2_3282_0_0, &direction_levelglacierplatform2_3282_0_0, &direction_levelglacierplatform2_3282_0_0, &direction_levelglacierplatform2_3282_0_0, &direction_levelglacierplatform2_3282_0_0, &direction_levelglacierplatform2_3282_0_0, &direction_levelglacierplatform2_3282_0_0, &direction_levelglacierplatform2_3282_0_0, &direction_levelglacierplatform2_3282_0_0, &direction_levelglacierplatform2_3282_0_0, &direction_levelglacierplatform2_3282_0_0, &direction_levelglacierplatform2_3282_0_0};
static Animation * anim_array_levelglacierplatform2_3282[1] = {&anim_levelglacierplatform2_3282_0};
static Animations anim_levelglacierplatform2_3282 = {1, &anim_array_levelglacierplatform2_3282[0]};
static bool anim_levelglacierplatform2_3282_initialized;
class LevelGlacierPlatform2_3282 : public Active
{
public:
    LevelGlacierPlatform2_3282(int x, int y) : Active(x, y, LevelGlacierPlatform2_3282_type)
    {
        // qualifiers: 15, 16, 19, 20
#ifndef NDEBUG
        name = std::string("Level_GlacierPlatform2", 22);
#endif
        this->animations = &anim_levelglacierplatform2_3282;
        if (!anim_levelglacierplatform2_3282_initialized) {
            anim_levelglacierplatform2_3282_initialized = true;
            images_levelglacierplatform2_3282_0_0[0] = get_internal_image(13592);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(5, 2);
        alterables->values.set(6, 80);
        alterables->values.set(7, 1);
    }
};
FrameObject * create_levelglacierplatform2_3282(int x, int y)
{
    return new (Active::pool.create()) LevelGlacierPlatform2_3282(x, y);
}
class LevelParallaxPiece0_3283 : public SystemBox
{
public:
    LevelParallaxPiece0_3283(int x, int y) : SystemBox(x, y, LevelParallaxPiece0_3283_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece0", 21);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 314;
        type = PATTERN_IMAGE;
        image = get_internal_image(11660);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece0_3283(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece0_3283(x, y);
}
class LevelBrevonShip_3284 : public SystemBox
{
public:
    LevelBrevonShip_3284(int x, int y) : SystemBox(x, y, LevelBrevonShip_3284_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_BrevonShip", 16);
#endif
        flags |= BACKGROUND;
        width = 306;
        height = 320;
        type = PATTERN_IMAGE;
        image = get_internal_image(11471);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelbrevonship_3284(int x, int y)
{
    return new (SystemBox::pool.create()) LevelBrevonShip_3284(x, y);
}
class LevelParallaxPiece2_3285 : public SystemBox
{
public:
    LevelParallaxPiece2_3285(int x, int y) : SystemBox(x, y, LevelParallaxPiece2_3285_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 2", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 280;
        type = PATTERN_IMAGE;
        image = get_internal_image(7960);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece2_3285(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece2_3285(x, y);
}
static Image* images_gimmickantigrav_3287_0_0[8];
static Direction direction_gimmickantigrav_3287_0_0 = {0, 0, 0, 0, -1, images_gimmickantigrav_3287_0_0, 8};
static Animation anim_gimmickantigrav_3287_0 = {&direction_gimmickantigrav_3287_0_0, &direction_gimmickantigrav_3287_0_0, &direction_gimmickantigrav_3287_0_0, &direction_gimmickantigrav_3287_0_0, &direction_gimmickantigrav_3287_0_0, &direction_gimmickantigrav_3287_0_0, &direction_gimmickantigrav_3287_0_0, &direction_gimmickantigrav_3287_0_0, &direction_gimmickantigrav_3287_0_0, &direction_gimmickantigrav_3287_0_0, &direction_gimmickantigrav_3287_0_0, &direction_gimmickantigrav_3287_0_0, &direction_gimmickantigrav_3287_0_0, &direction_gimmickantigrav_3287_0_0, &direction_gimmickantigrav_3287_0_0, &direction_gimmickantigrav_3287_0_0, NULL, &direction_gimmickantigrav_3287_0_0, &direction_gimmickantigrav_3287_0_0, &direction_gimmickantigrav_3287_0_0, &direction_gimmickantigrav_3287_0_0, &direction_gimmickantigrav_3287_0_0, &direction_gimmickantigrav_3287_0_0, &direction_gimmickantigrav_3287_0_0, &direction_gimmickantigrav_3287_0_0, &direction_gimmickantigrav_3287_0_0, &direction_gimmickantigrav_3287_0_0, &direction_gimmickantigrav_3287_0_0, &direction_gimmickantigrav_3287_0_0, &direction_gimmickantigrav_3287_0_0, &direction_gimmickantigrav_3287_0_0, &direction_gimmickantigrav_3287_0_0};
static Animation * anim_array_gimmickantigrav_3287[1] = {&anim_gimmickantigrav_3287_0};
static Animations anim_gimmickantigrav_3287 = {1, &anim_array_gimmickantigrav_3287[0]};
static bool anim_gimmickantigrav_3287_initialized;
class GimmickAntigrav_3287 : public Active
{
public:
    GimmickAntigrav_3287(int x, int y) : Active(x, y, GimmickAntigrav_3287_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_Antigrav", 16);
#endif
        this->animations = &anim_gimmickantigrav_3287;
        if (!anim_gimmickantigrav_3287_initialized) {
            anim_gimmickantigrav_3287_initialized = true;
            images_gimmickantigrav_3287_0_0[0] = get_internal_image(13675);
            images_gimmickantigrav_3287_0_0[1] = get_internal_image(13703);
            images_gimmickantigrav_3287_0_0[2] = get_internal_image(13702);
            images_gimmickantigrav_3287_0_0[3] = get_internal_image(13704);
            images_gimmickantigrav_3287_0_0[4] = get_internal_image(13705);
            images_gimmickantigrav_3287_0_0[5] = get_internal_image(13708);
            images_gimmickantigrav_3287_0_0[6] = get_internal_image(13707);
            images_gimmickantigrav_3287_0_0[7] = get_internal_image(13706);
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
FrameObject * create_gimmickantigrav_3287(int x, int y)
{
    return new (Active::pool.create()) GimmickAntigrav_3287(x, y);
}
static Image* images_bosssparkyplasmashot_3288_0_0[1];
static Direction direction_bosssparkyplasmashot_3288_0_0 = {0, 50, 50, 0, 1, images_bosssparkyplasmashot_3288_0_0, 1};
static Animation anim_bosssparkyplasmashot_3288_0 = {&direction_bosssparkyplasmashot_3288_0_0, &direction_bosssparkyplasmashot_3288_0_0, &direction_bosssparkyplasmashot_3288_0_0, &direction_bosssparkyplasmashot_3288_0_0, &direction_bosssparkyplasmashot_3288_0_0, &direction_bosssparkyplasmashot_3288_0_0, &direction_bosssparkyplasmashot_3288_0_0, &direction_bosssparkyplasmashot_3288_0_0, &direction_bosssparkyplasmashot_3288_0_0, &direction_bosssparkyplasmashot_3288_0_0, &direction_bosssparkyplasmashot_3288_0_0, &direction_bosssparkyplasmashot_3288_0_0, &direction_bosssparkyplasmashot_3288_0_0, &direction_bosssparkyplasmashot_3288_0_0, &direction_bosssparkyplasmashot_3288_0_0, &direction_bosssparkyplasmashot_3288_0_0, NULL, &direction_bosssparkyplasmashot_3288_0_0, &direction_bosssparkyplasmashot_3288_0_0, &direction_bosssparkyplasmashot_3288_0_0, &direction_bosssparkyplasmashot_3288_0_0, &direction_bosssparkyplasmashot_3288_0_0, &direction_bosssparkyplasmashot_3288_0_0, &direction_bosssparkyplasmashot_3288_0_0, &direction_bosssparkyplasmashot_3288_0_0, &direction_bosssparkyplasmashot_3288_0_0, &direction_bosssparkyplasmashot_3288_0_0, &direction_bosssparkyplasmashot_3288_0_0, &direction_bosssparkyplasmashot_3288_0_0, &direction_bosssparkyplasmashot_3288_0_0, &direction_bosssparkyplasmashot_3288_0_0, &direction_bosssparkyplasmashot_3288_0_0};
static Animation * anim_array_bosssparkyplasmashot_3288[1] = {&anim_bosssparkyplasmashot_3288_0};
static Animations anim_bosssparkyplasmashot_3288 = {1, &anim_array_bosssparkyplasmashot_3288[0]};
static bool anim_bosssparkyplasmashot_3288_initialized;
class BossSparkyPlasmaShot_3288 : public Active
{
public:
    BossSparkyPlasmaShot_3288(int x, int y) : Active(x, y, BossSparkyPlasmaShot_3288_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_SparkyPlasmaShot", 21);
#endif
        this->animations = &anim_bosssparkyplasmashot_3288;
        if (!anim_bosssparkyplasmashot_3288_initialized) {
            anim_bosssparkyplasmashot_3288_initialized = true;
            images_bosssparkyplasmashot_3288_0_0[0] = get_internal_image(13768);
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
        ((BallMovement*)movements[0])->set_max_speed(80);
        ((BallMovement*)movements[0])->set_deceleration(0);
        movements[1] = new StaticMovement(this);
        movements[1]->index = 1;
        set_movement(0);
        create_alterables();
    }
};
FrameObject * create_bosssparkyplasmashot_3288(int x, int y)
{
    return new (Active::pool.create()) BossSparkyPlasmaShot_3288(x, y);
}
static Image* images_parallaxorb_3289_0_0[1];
static Direction direction_parallaxorb_3289_0_0 = {0, 50, 50, 0, 1, images_parallaxorb_3289_0_0, 1};
static Animation anim_parallaxorb_3289_0 = {&direction_parallaxorb_3289_0_0, &direction_parallaxorb_3289_0_0, &direction_parallaxorb_3289_0_0, &direction_parallaxorb_3289_0_0, &direction_parallaxorb_3289_0_0, &direction_parallaxorb_3289_0_0, &direction_parallaxorb_3289_0_0, &direction_parallaxorb_3289_0_0, &direction_parallaxorb_3289_0_0, &direction_parallaxorb_3289_0_0, &direction_parallaxorb_3289_0_0, &direction_parallaxorb_3289_0_0, &direction_parallaxorb_3289_0_0, &direction_parallaxorb_3289_0_0, &direction_parallaxorb_3289_0_0, &direction_parallaxorb_3289_0_0, NULL, &direction_parallaxorb_3289_0_0, &direction_parallaxorb_3289_0_0, &direction_parallaxorb_3289_0_0, &direction_parallaxorb_3289_0_0, &direction_parallaxorb_3289_0_0, &direction_parallaxorb_3289_0_0, &direction_parallaxorb_3289_0_0, &direction_parallaxorb_3289_0_0, &direction_parallaxorb_3289_0_0, &direction_parallaxorb_3289_0_0, &direction_parallaxorb_3289_0_0, &direction_parallaxorb_3289_0_0, &direction_parallaxorb_3289_0_0, &direction_parallaxorb_3289_0_0, &direction_parallaxorb_3289_0_0};
static Animation * anim_array_parallaxorb_3289[1] = {&anim_parallaxorb_3289_0};
static Animations anim_parallaxorb_3289 = {1, &anim_array_parallaxorb_3289[0]};
static bool anim_parallaxorb_3289_initialized;
class ParallaxOrb_3289 : public Active
{
public:
    ParallaxOrb_3289(int x, int y) : Active(x, y, ParallaxOrb_3289_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Parallax_Orb", 12);
#endif
        this->animations = &anim_parallaxorb_3289;
        if (!anim_parallaxorb_3289_initialized) {
            anim_parallaxorb_3289_initialized = true;
            images_parallaxorb_3289_0_0[0] = get_internal_image(11674);
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
FrameObject * create_parallaxorb_3289(int x, int y)
{
    return new (Active::pool.create()) ParallaxOrb_3289(x, y);
}
static Image* images_parallaxthundercarrierarm_3290_0_0[9];
static Direction direction_parallaxthundercarrierarm_3290_0_0 = {0, 0, 0, 0, 1, images_parallaxthundercarrierarm_3290_0_0, 9};
static Animation anim_parallaxthundercarrierarm_3290_0 = {&direction_parallaxthundercarrierarm_3290_0_0, &direction_parallaxthundercarrierarm_3290_0_0, &direction_parallaxthundercarrierarm_3290_0_0, &direction_parallaxthundercarrierarm_3290_0_0, &direction_parallaxthundercarrierarm_3290_0_0, &direction_parallaxthundercarrierarm_3290_0_0, &direction_parallaxthundercarrierarm_3290_0_0, &direction_parallaxthundercarrierarm_3290_0_0, &direction_parallaxthundercarrierarm_3290_0_0, &direction_parallaxthundercarrierarm_3290_0_0, &direction_parallaxthundercarrierarm_3290_0_0, &direction_parallaxthundercarrierarm_3290_0_0, &direction_parallaxthundercarrierarm_3290_0_0, &direction_parallaxthundercarrierarm_3290_0_0, &direction_parallaxthundercarrierarm_3290_0_0, &direction_parallaxthundercarrierarm_3290_0_0, NULL, &direction_parallaxthundercarrierarm_3290_0_0, &direction_parallaxthundercarrierarm_3290_0_0, &direction_parallaxthundercarrierarm_3290_0_0, &direction_parallaxthundercarrierarm_3290_0_0, &direction_parallaxthundercarrierarm_3290_0_0, &direction_parallaxthundercarrierarm_3290_0_0, &direction_parallaxthundercarrierarm_3290_0_0, &direction_parallaxthundercarrierarm_3290_0_0, &direction_parallaxthundercarrierarm_3290_0_0, &direction_parallaxthundercarrierarm_3290_0_0, &direction_parallaxthundercarrierarm_3290_0_0, &direction_parallaxthundercarrierarm_3290_0_0, &direction_parallaxthundercarrierarm_3290_0_0, &direction_parallaxthundercarrierarm_3290_0_0, &direction_parallaxthundercarrierarm_3290_0_0};
static Animation * anim_array_parallaxthundercarrierarm_3290[1] = {&anim_parallaxthundercarrierarm_3290_0};
static Animations anim_parallaxthundercarrierarm_3290 = {1, &anim_array_parallaxthundercarrierarm_3290[0]};
static bool anim_parallaxthundercarrierarm_3290_initialized;
class ParallaxThunderCarrierArm_3290 : public Active
{
public:
    ParallaxThunderCarrierArm_3290(int x, int y) : Active(x, y, ParallaxThunderCarrierArm_3290_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Parallax_ThunderCarrierArm", 26);
#endif
        this->animations = &anim_parallaxthundercarrierarm_3290;
        if (!anim_parallaxthundercarrierarm_3290_initialized) {
            anim_parallaxthundercarrierarm_3290_initialized = true;
            images_parallaxthundercarrierarm_3290_0_0[0] = get_internal_image(11675);
            images_parallaxthundercarrierarm_3290_0_0[1] = get_internal_image(13547);
            images_parallaxthundercarrierarm_3290_0_0[2] = get_internal_image(13709);
            images_parallaxthundercarrierarm_3290_0_0[3] = get_internal_image(13850);
            images_parallaxthundercarrierarm_3290_0_0[4] = get_internal_image(13837);
            images_parallaxthundercarrierarm_3290_0_0[5] = get_internal_image(13850);
            images_parallaxthundercarrierarm_3290_0_0[6] = get_internal_image(13837);
            images_parallaxthundercarrierarm_3290_0_0[7] = get_internal_image(13778);
            images_parallaxthundercarrierarm_3290_0_0[8] = get_internal_image(13837);
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
FrameObject * create_parallaxthundercarrierarm_3290(int x, int y)
{
    return new (Active::pool.create()) ParallaxThunderCarrierArm_3290(x, y);
}
static Image* images_parallaxthundercarrier_3291_0_0[3];
static Direction direction_parallaxthundercarrier_3291_0_0 = {0, 50, 50, 0, -1, images_parallaxthundercarrier_3291_0_0, 3};
static Animation anim_parallaxthundercarrier_3291_0 = {&direction_parallaxthundercarrier_3291_0_0, &direction_parallaxthundercarrier_3291_0_0, &direction_parallaxthundercarrier_3291_0_0, &direction_parallaxthundercarrier_3291_0_0, &direction_parallaxthundercarrier_3291_0_0, &direction_parallaxthundercarrier_3291_0_0, &direction_parallaxthundercarrier_3291_0_0, &direction_parallaxthundercarrier_3291_0_0, &direction_parallaxthundercarrier_3291_0_0, &direction_parallaxthundercarrier_3291_0_0, &direction_parallaxthundercarrier_3291_0_0, &direction_parallaxthundercarrier_3291_0_0, &direction_parallaxthundercarrier_3291_0_0, &direction_parallaxthundercarrier_3291_0_0, &direction_parallaxthundercarrier_3291_0_0, &direction_parallaxthundercarrier_3291_0_0, NULL, &direction_parallaxthundercarrier_3291_0_0, &direction_parallaxthundercarrier_3291_0_0, &direction_parallaxthundercarrier_3291_0_0, &direction_parallaxthundercarrier_3291_0_0, &direction_parallaxthundercarrier_3291_0_0, &direction_parallaxthundercarrier_3291_0_0, &direction_parallaxthundercarrier_3291_0_0, &direction_parallaxthundercarrier_3291_0_0, &direction_parallaxthundercarrier_3291_0_0, &direction_parallaxthundercarrier_3291_0_0, &direction_parallaxthundercarrier_3291_0_0, &direction_parallaxthundercarrier_3291_0_0, &direction_parallaxthundercarrier_3291_0_0, &direction_parallaxthundercarrier_3291_0_0, &direction_parallaxthundercarrier_3291_0_0};
static Animation * anim_array_parallaxthundercarrier_3291[1] = {&anim_parallaxthundercarrier_3291_0};
static Animations anim_parallaxthundercarrier_3291 = {1, &anim_array_parallaxthundercarrier_3291[0]};
static bool anim_parallaxthundercarrier_3291_initialized;
class ParallaxThunderCarrier_3291 : public Active
{
public:
    ParallaxThunderCarrier_3291(int x, int y) : Active(x, y, ParallaxThunderCarrier_3291_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Parallax_ThunderCarrier", 23);
#endif
        this->animations = &anim_parallaxthundercarrier_3291;
        if (!anim_parallaxthundercarrier_3291_initialized) {
            anim_parallaxthundercarrier_3291_initialized = true;
            images_parallaxthundercarrier_3291_0_0[0] = get_internal_image(11711);
            images_parallaxthundercarrier_3291_0_0[1] = get_internal_image(12621);
            images_parallaxthundercarrier_3291_0_0[2] = get_internal_image(13519);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 15);
        alterables->values.set(7, -4);
    }
};
FrameObject * create_parallaxthundercarrier_3291(int x, int y)
{
    return new (Active::pool.create()) ParallaxThunderCarrier_3291(x, y);
}
static Image* images_parallaxufo_3292_0_0[6];
static Direction direction_parallaxufo_3292_0_0 = {0, 90, 90, 0, -1, images_parallaxufo_3292_0_0, 6};
static Animation anim_parallaxufo_3292_0 = {&direction_parallaxufo_3292_0_0, &direction_parallaxufo_3292_0_0, &direction_parallaxufo_3292_0_0, &direction_parallaxufo_3292_0_0, &direction_parallaxufo_3292_0_0, &direction_parallaxufo_3292_0_0, &direction_parallaxufo_3292_0_0, &direction_parallaxufo_3292_0_0, &direction_parallaxufo_3292_0_0, &direction_parallaxufo_3292_0_0, &direction_parallaxufo_3292_0_0, &direction_parallaxufo_3292_0_0, &direction_parallaxufo_3292_0_0, &direction_parallaxufo_3292_0_0, &direction_parallaxufo_3292_0_0, &direction_parallaxufo_3292_0_0, NULL, &direction_parallaxufo_3292_0_0, &direction_parallaxufo_3292_0_0, &direction_parallaxufo_3292_0_0, &direction_parallaxufo_3292_0_0, &direction_parallaxufo_3292_0_0, &direction_parallaxufo_3292_0_0, &direction_parallaxufo_3292_0_0, &direction_parallaxufo_3292_0_0, &direction_parallaxufo_3292_0_0, &direction_parallaxufo_3292_0_0, &direction_parallaxufo_3292_0_0, &direction_parallaxufo_3292_0_0, &direction_parallaxufo_3292_0_0, &direction_parallaxufo_3292_0_0, &direction_parallaxufo_3292_0_0};
static Image* images_parallaxufo_3292_7_0[3];
static Direction direction_parallaxufo_3292_7_0 = {0, 50, 50, 0, -1, images_parallaxufo_3292_7_0, 3};
static Animation anim_parallaxufo_3292_7 = {&direction_parallaxufo_3292_7_0, &direction_parallaxufo_3292_7_0, &direction_parallaxufo_3292_7_0, &direction_parallaxufo_3292_7_0, &direction_parallaxufo_3292_7_0, &direction_parallaxufo_3292_7_0, &direction_parallaxufo_3292_7_0, &direction_parallaxufo_3292_7_0, &direction_parallaxufo_3292_7_0, &direction_parallaxufo_3292_7_0, &direction_parallaxufo_3292_7_0, &direction_parallaxufo_3292_7_0, &direction_parallaxufo_3292_7_0, &direction_parallaxufo_3292_7_0, &direction_parallaxufo_3292_7_0, &direction_parallaxufo_3292_7_0, NULL, &direction_parallaxufo_3292_7_0, &direction_parallaxufo_3292_7_0, &direction_parallaxufo_3292_7_0, &direction_parallaxufo_3292_7_0, &direction_parallaxufo_3292_7_0, &direction_parallaxufo_3292_7_0, &direction_parallaxufo_3292_7_0, &direction_parallaxufo_3292_7_0, &direction_parallaxufo_3292_7_0, &direction_parallaxufo_3292_7_0, &direction_parallaxufo_3292_7_0, &direction_parallaxufo_3292_7_0, &direction_parallaxufo_3292_7_0, &direction_parallaxufo_3292_7_0, &direction_parallaxufo_3292_7_0};
static Animation * anim_array_parallaxufo_3292[8] = {&anim_parallaxufo_3292_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_parallaxufo_3292_7};
static Animations anim_parallaxufo_3292 = {8, &anim_array_parallaxufo_3292[0]};
static bool anim_parallaxufo_3292_initialized;
class ParallaxUFO_3292 : public Active
{
public:
    ParallaxUFO_3292(int x, int y) : Active(x, y, ParallaxUFO_3292_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Parallax_UFO", 12);
#endif
        this->animations = &anim_parallaxufo_3292;
        if (!anim_parallaxufo_3292_initialized) {
            anim_parallaxufo_3292_initialized = true;
            images_parallaxufo_3292_0_0[0] = get_internal_image(13773);
            images_parallaxufo_3292_0_0[1] = get_internal_image(13776);
            images_parallaxufo_3292_0_0[2] = get_internal_image(13861);
            images_parallaxufo_3292_0_0[3] = get_internal_image(13851);
            images_parallaxufo_3292_0_0[4] = get_internal_image(13852);
            images_parallaxufo_3292_0_0[5] = get_internal_image(13862);
            images_parallaxufo_3292_7_0[0] = get_internal_image(13449);
            images_parallaxufo_3292_7_0[1] = get_internal_image(13448);
            images_parallaxufo_3292_7_0[2] = get_internal_image(13446);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 20);
        alterables->values.set(5, -3);
    }
};
FrameObject * create_parallaxufo_3292(int x, int y)
{
    return new (Active::pool.create()) ParallaxUFO_3292(x, y);
}
static Image* images_enemyorbshot_3293_0_0[2];
static Direction direction_enemyorbshot_3293_0_0 = {0, 25, 25, 0, -1, images_enemyorbshot_3293_0_0, 2};
static Animation anim_enemyorbshot_3293_0 = {&direction_enemyorbshot_3293_0_0, &direction_enemyorbshot_3293_0_0, &direction_enemyorbshot_3293_0_0, &direction_enemyorbshot_3293_0_0, &direction_enemyorbshot_3293_0_0, &direction_enemyorbshot_3293_0_0, &direction_enemyorbshot_3293_0_0, &direction_enemyorbshot_3293_0_0, &direction_enemyorbshot_3293_0_0, &direction_enemyorbshot_3293_0_0, &direction_enemyorbshot_3293_0_0, &direction_enemyorbshot_3293_0_0, &direction_enemyorbshot_3293_0_0, &direction_enemyorbshot_3293_0_0, &direction_enemyorbshot_3293_0_0, &direction_enemyorbshot_3293_0_0, NULL, &direction_enemyorbshot_3293_0_0, &direction_enemyorbshot_3293_0_0, &direction_enemyorbshot_3293_0_0, &direction_enemyorbshot_3293_0_0, &direction_enemyorbshot_3293_0_0, &direction_enemyorbshot_3293_0_0, &direction_enemyorbshot_3293_0_0, &direction_enemyorbshot_3293_0_0, &direction_enemyorbshot_3293_0_0, &direction_enemyorbshot_3293_0_0, &direction_enemyorbshot_3293_0_0, &direction_enemyorbshot_3293_0_0, &direction_enemyorbshot_3293_0_0, &direction_enemyorbshot_3293_0_0, &direction_enemyorbshot_3293_0_0};
static Animation * anim_array_enemyorbshot_3293[1] = {&anim_enemyorbshot_3293_0};
static Animations anim_enemyorbshot_3293 = {1, &anim_array_enemyorbshot_3293[0]};
static bool anim_enemyorbshot_3293_initialized;
class EnemyOrbShot_3293 : public Active
{
public:
    EnemyOrbShot_3293(int x, int y) : Active(x, y, EnemyOrbShot_3293_type)
    {
        // qualifiers: 6
#ifndef NDEBUG
        name = std::string("Enemy_OrbShot", 13);
#endif
        this->animations = &anim_enemyorbshot_3293;
        if (!anim_enemyorbshot_3293_initialized) {
            anim_enemyorbshot_3293_initialized = true;
            images_enemyorbshot_3293_0_0[0] = get_internal_image(13391);
            images_enemyorbshot_3293_0_0[1] = get_internal_image(13392);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(5, -4);
    }
};
FrameObject * create_enemyorbshot_3293(int x, int y)
{
    return new (Active::pool.create()) EnemyOrbShot_3293(x, y);
}
static Image* images_enemythundercarrierbolt_3294_0_0[3];
static Direction direction_enemythundercarrierbolt_3294_0_0 = {0, 90, 90, 0, -1, images_enemythundercarrierbolt_3294_0_0, 3};
static Image* images_enemythundercarrierbolt_3294_0_16[1];
static Direction direction_enemythundercarrierbolt_3294_0_16 = {16, 50, 50, 0, 1, images_enemythundercarrierbolt_3294_0_16, 1};
static Animation anim_enemythundercarrierbolt_3294_0 = {&direction_enemythundercarrierbolt_3294_0_0, &direction_enemythundercarrierbolt_3294_0_0, &direction_enemythundercarrierbolt_3294_0_0, &direction_enemythundercarrierbolt_3294_0_0, &direction_enemythundercarrierbolt_3294_0_0, &direction_enemythundercarrierbolt_3294_0_0, &direction_enemythundercarrierbolt_3294_0_0, &direction_enemythundercarrierbolt_3294_0_0, NULL, &direction_enemythundercarrierbolt_3294_0_16, &direction_enemythundercarrierbolt_3294_0_16, &direction_enemythundercarrierbolt_3294_0_16, &direction_enemythundercarrierbolt_3294_0_16, &direction_enemythundercarrierbolt_3294_0_16, &direction_enemythundercarrierbolt_3294_0_16, &direction_enemythundercarrierbolt_3294_0_16, &direction_enemythundercarrierbolt_3294_0_16, &direction_enemythundercarrierbolt_3294_0_16, &direction_enemythundercarrierbolt_3294_0_16, &direction_enemythundercarrierbolt_3294_0_16, &direction_enemythundercarrierbolt_3294_0_16, &direction_enemythundercarrierbolt_3294_0_16, &direction_enemythundercarrierbolt_3294_0_16, &direction_enemythundercarrierbolt_3294_0_16, NULL, &direction_enemythundercarrierbolt_3294_0_0, &direction_enemythundercarrierbolt_3294_0_0, &direction_enemythundercarrierbolt_3294_0_0, &direction_enemythundercarrierbolt_3294_0_0, &direction_enemythundercarrierbolt_3294_0_0, &direction_enemythundercarrierbolt_3294_0_0, &direction_enemythundercarrierbolt_3294_0_0};
static Animation * anim_array_enemythundercarrierbolt_3294[1] = {&anim_enemythundercarrierbolt_3294_0};
static Animations anim_enemythundercarrierbolt_3294 = {1, &anim_array_enemythundercarrierbolt_3294[0]};
static bool anim_enemythundercarrierbolt_3294_initialized;
class EnemyThunderCarrierBolt_3294 : public Active
{
public:
    EnemyThunderCarrierBolt_3294(int x, int y) : Active(x, y, EnemyThunderCarrierBolt_3294_type)
    {
        // qualifiers: 6
#ifndef NDEBUG
        name = std::string("Enemy_ThunderCarrierBolt", 24);
#endif
        this->animations = &anim_enemythundercarrierbolt_3294;
        if (!anim_enemythundercarrierbolt_3294_initialized) {
            anim_enemythundercarrierbolt_3294_initialized = true;
            images_enemythundercarrierbolt_3294_0_0[0] = get_internal_image(13480);
            images_enemythundercarrierbolt_3294_0_0[1] = get_internal_image(13481);
            images_enemythundercarrierbolt_3294_0_0[2] = get_internal_image(13482);
            images_enemythundercarrierbolt_3294_0_16[0] = get_internal_image(13483);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(5, -1);
    }
};
FrameObject * create_enemythundercarrierbolt_3294(int x, int y)
{
    return new (Active::pool.create()) EnemyThunderCarrierBolt_3294(x, y);
}
class BGFacility8_3295 : public Backdrop
{
public:
    BGFacility8_3295(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Facility 8", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14153);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bgfacility8_3295(int x, int y)
{
    return new (Backdrop::pool.create()) BGFacility8_3295(x, y);
}
class BGPlatformSupport1_3296 : public Backdrop
{
public:
    BGPlatformSupport1_3296(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_PlatformSupport 1", 20);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13742);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bgplatformsupport1_3296(int x, int y)
{
    return new (Backdrop::pool.create()) BGPlatformSupport1_3296(x, y);
}
class BGPlatformSupport2_3297 : public Backdrop
{
public:
    BGPlatformSupport2_3297(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_PlatformSupport 2", 20);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13743);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bgplatformsupport2_3297(int x, int y)
{
    return new (Backdrop::pool.create()) BGPlatformSupport2_3297(x, y);
}
class BGCrankFerrisBase_3298 : public Backdrop
{
public:
    BGCrankFerrisBase_3298(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_CrankFerrisBase", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13673);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bgcrankferrisbase_3298(int x, int y)
{
    return new (Backdrop::pool.create()) BGCrankFerrisBase_3298(x, y);
}
class BGMagnetLauncherRail_3299 : public Backdrop
{
public:
    BGMagnetLauncherRail_3299(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_MagnetLauncherRail", 21);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13767);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bgmagnetlauncherrail_3299(int x, int y)
{
    return new (Backdrop::pool.create()) BGMagnetLauncherRail_3299(x, y);
}
class BGFacility21_3300 : public Backdrop
{
public:
    BGFacility21_3300(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Facility 21", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13785);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bgfacility21_3300(int x, int y)
{
    return new (Backdrop::pool.create()) BGFacility21_3300(x, y);
}
static Image* images_levelcrankferrismask_3301_0_0[6];
static Direction direction_levelcrankferrismask_3301_0_0 = {0, 0, 0, 0, -1, images_levelcrankferrismask_3301_0_0, 6};
static Animation anim_levelcrankferrismask_3301_0 = {&direction_levelcrankferrismask_3301_0_0, &direction_levelcrankferrismask_3301_0_0, &direction_levelcrankferrismask_3301_0_0, &direction_levelcrankferrismask_3301_0_0, &direction_levelcrankferrismask_3301_0_0, &direction_levelcrankferrismask_3301_0_0, &direction_levelcrankferrismask_3301_0_0, &direction_levelcrankferrismask_3301_0_0, &direction_levelcrankferrismask_3301_0_0, &direction_levelcrankferrismask_3301_0_0, &direction_levelcrankferrismask_3301_0_0, &direction_levelcrankferrismask_3301_0_0, &direction_levelcrankferrismask_3301_0_0, &direction_levelcrankferrismask_3301_0_0, &direction_levelcrankferrismask_3301_0_0, &direction_levelcrankferrismask_3301_0_0, NULL, &direction_levelcrankferrismask_3301_0_0, &direction_levelcrankferrismask_3301_0_0, &direction_levelcrankferrismask_3301_0_0, &direction_levelcrankferrismask_3301_0_0, &direction_levelcrankferrismask_3301_0_0, &direction_levelcrankferrismask_3301_0_0, &direction_levelcrankferrismask_3301_0_0, &direction_levelcrankferrismask_3301_0_0, &direction_levelcrankferrismask_3301_0_0, &direction_levelcrankferrismask_3301_0_0, &direction_levelcrankferrismask_3301_0_0, &direction_levelcrankferrismask_3301_0_0, &direction_levelcrankferrismask_3301_0_0, &direction_levelcrankferrismask_3301_0_0, &direction_levelcrankferrismask_3301_0_0};
static Animation * anim_array_levelcrankferrismask_3301[1] = {&anim_levelcrankferrismask_3301_0};
static Animations anim_levelcrankferrismask_3301 = {1, &anim_array_levelcrankferrismask_3301[0]};
static bool anim_levelcrankferrismask_3301_initialized;
class LevelCrankFerrisMask_3301 : public Active
{
public:
    LevelCrankFerrisMask_3301(int x, int y) : Active(x, y, LevelCrankFerrisMask_3301_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_CrankFerrisMask", 21);
#endif
        this->animations = &anim_levelcrankferrismask_3301;
        if (!anim_levelcrankferrismask_3301_initialized) {
            anim_levelcrankferrismask_3301_initialized = true;
            images_levelcrankferrismask_3301_0_0[0] = get_internal_image(13688);
            images_levelcrankferrismask_3301_0_0[1] = get_internal_image(13686);
            images_levelcrankferrismask_3301_0_0[2] = get_internal_image(13701);
            images_levelcrankferrismask_3301_0_0[3] = get_internal_image(13679);
            images_levelcrankferrismask_3301_0_0[4] = get_internal_image(13676);
            images_levelcrankferrismask_3301_0_0[5] = get_internal_image(13701);
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
FrameObject * create_levelcrankferrismask_3301(int x, int y)
{
    return new (Active::pool.create()) LevelCrankFerrisMask_3301(x, y);
}
static Image* images_levelcrankferrismask2_3302_0_0[1];
static Direction direction_levelcrankferrismask2_3302_0_0 = {0, 50, 50, 0, 1, images_levelcrankferrismask2_3302_0_0, 1};
static Animation anim_levelcrankferrismask2_3302_0 = {&direction_levelcrankferrismask2_3302_0_0, &direction_levelcrankferrismask2_3302_0_0, &direction_levelcrankferrismask2_3302_0_0, &direction_levelcrankferrismask2_3302_0_0, &direction_levelcrankferrismask2_3302_0_0, &direction_levelcrankferrismask2_3302_0_0, &direction_levelcrankferrismask2_3302_0_0, &direction_levelcrankferrismask2_3302_0_0, &direction_levelcrankferrismask2_3302_0_0, &direction_levelcrankferrismask2_3302_0_0, &direction_levelcrankferrismask2_3302_0_0, &direction_levelcrankferrismask2_3302_0_0, &direction_levelcrankferrismask2_3302_0_0, &direction_levelcrankferrismask2_3302_0_0, &direction_levelcrankferrismask2_3302_0_0, &direction_levelcrankferrismask2_3302_0_0, NULL, &direction_levelcrankferrismask2_3302_0_0, &direction_levelcrankferrismask2_3302_0_0, &direction_levelcrankferrismask2_3302_0_0, &direction_levelcrankferrismask2_3302_0_0, &direction_levelcrankferrismask2_3302_0_0, &direction_levelcrankferrismask2_3302_0_0, &direction_levelcrankferrismask2_3302_0_0, &direction_levelcrankferrismask2_3302_0_0, &direction_levelcrankferrismask2_3302_0_0, &direction_levelcrankferrismask2_3302_0_0, &direction_levelcrankferrismask2_3302_0_0, &direction_levelcrankferrismask2_3302_0_0, &direction_levelcrankferrismask2_3302_0_0, &direction_levelcrankferrismask2_3302_0_0, &direction_levelcrankferrismask2_3302_0_0};
static Animation * anim_array_levelcrankferrismask2_3302[1] = {&anim_levelcrankferrismask2_3302_0};
static Animations anim_levelcrankferrismask2_3302 = {1, &anim_array_levelcrankferrismask2_3302[0]};
static bool anim_levelcrankferrismask2_3302_initialized;
class LevelCrankFerrisMask2_3302 : public Active
{
public:
    LevelCrankFerrisMask2_3302(int x, int y) : Active(x, y, LevelCrankFerrisMask2_3302_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_CrankFerrisMask 2", 23);
#endif
        this->animations = &anim_levelcrankferrismask2_3302;
        if (!anim_levelcrankferrismask2_3302_initialized) {
            anim_levelcrankferrismask2_3302_initialized = true;
            images_levelcrankferrismask2_3302_0_0[0] = get_internal_image(13673);
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
FrameObject * create_levelcrankferrismask2_3302(int x, int y)
{
    return new (Active::pool.create()) LevelCrankFerrisMask2_3302(x, y);
}
static Image* images_levelcrankferrismask3_3303_0_0[1];
static Direction direction_levelcrankferrismask3_3303_0_0 = {0, 50, 50, 0, 1, images_levelcrankferrismask3_3303_0_0, 1};
static Animation anim_levelcrankferrismask3_3303_0 = {&direction_levelcrankferrismask3_3303_0_0, &direction_levelcrankferrismask3_3303_0_0, &direction_levelcrankferrismask3_3303_0_0, &direction_levelcrankferrismask3_3303_0_0, &direction_levelcrankferrismask3_3303_0_0, &direction_levelcrankferrismask3_3303_0_0, &direction_levelcrankferrismask3_3303_0_0, &direction_levelcrankferrismask3_3303_0_0, &direction_levelcrankferrismask3_3303_0_0, &direction_levelcrankferrismask3_3303_0_0, &direction_levelcrankferrismask3_3303_0_0, &direction_levelcrankferrismask3_3303_0_0, &direction_levelcrankferrismask3_3303_0_0, &direction_levelcrankferrismask3_3303_0_0, &direction_levelcrankferrismask3_3303_0_0, &direction_levelcrankferrismask3_3303_0_0, NULL, &direction_levelcrankferrismask3_3303_0_0, &direction_levelcrankferrismask3_3303_0_0, &direction_levelcrankferrismask3_3303_0_0, &direction_levelcrankferrismask3_3303_0_0, &direction_levelcrankferrismask3_3303_0_0, &direction_levelcrankferrismask3_3303_0_0, &direction_levelcrankferrismask3_3303_0_0, &direction_levelcrankferrismask3_3303_0_0, &direction_levelcrankferrismask3_3303_0_0, &direction_levelcrankferrismask3_3303_0_0, &direction_levelcrankferrismask3_3303_0_0, &direction_levelcrankferrismask3_3303_0_0, &direction_levelcrankferrismask3_3303_0_0, &direction_levelcrankferrismask3_3303_0_0, &direction_levelcrankferrismask3_3303_0_0};
static Animation * anim_array_levelcrankferrismask3_3303[1] = {&anim_levelcrankferrismask3_3303_0};
static Animations anim_levelcrankferrismask3_3303 = {1, &anim_array_levelcrankferrismask3_3303[0]};
static bool anim_levelcrankferrismask3_3303_initialized;
class LevelCrankFerrisMask3_3303 : public Active
{
public:
    LevelCrankFerrisMask3_3303(int x, int y) : Active(x, y, LevelCrankFerrisMask3_3303_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_CrankFerrisMask 3", 23);
#endif
        this->animations = &anim_levelcrankferrismask3_3303;
        if (!anim_levelcrankferrismask3_3303_initialized) {
            anim_levelcrankferrismask3_3303_initialized = true;
            images_levelcrankferrismask3_3303_0_0[0] = get_internal_image(13673);
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
FrameObject * create_levelcrankferrismask3_3303(int x, int y)
{
    return new (Active::pool.create()) LevelCrankFerrisMask3_3303(x, y);
}
static Image* images_levelcrankferrismask4_3304_0_0[1];
static Direction direction_levelcrankferrismask4_3304_0_0 = {0, 50, 50, 0, 1, images_levelcrankferrismask4_3304_0_0, 1};
static Animation anim_levelcrankferrismask4_3304_0 = {&direction_levelcrankferrismask4_3304_0_0, &direction_levelcrankferrismask4_3304_0_0, &direction_levelcrankferrismask4_3304_0_0, &direction_levelcrankferrismask4_3304_0_0, &direction_levelcrankferrismask4_3304_0_0, &direction_levelcrankferrismask4_3304_0_0, &direction_levelcrankferrismask4_3304_0_0, &direction_levelcrankferrismask4_3304_0_0, &direction_levelcrankferrismask4_3304_0_0, &direction_levelcrankferrismask4_3304_0_0, &direction_levelcrankferrismask4_3304_0_0, &direction_levelcrankferrismask4_3304_0_0, &direction_levelcrankferrismask4_3304_0_0, &direction_levelcrankferrismask4_3304_0_0, &direction_levelcrankferrismask4_3304_0_0, &direction_levelcrankferrismask4_3304_0_0, NULL, &direction_levelcrankferrismask4_3304_0_0, &direction_levelcrankferrismask4_3304_0_0, &direction_levelcrankferrismask4_3304_0_0, &direction_levelcrankferrismask4_3304_0_0, &direction_levelcrankferrismask4_3304_0_0, &direction_levelcrankferrismask4_3304_0_0, &direction_levelcrankferrismask4_3304_0_0, &direction_levelcrankferrismask4_3304_0_0, &direction_levelcrankferrismask4_3304_0_0, &direction_levelcrankferrismask4_3304_0_0, &direction_levelcrankferrismask4_3304_0_0, &direction_levelcrankferrismask4_3304_0_0, &direction_levelcrankferrismask4_3304_0_0, &direction_levelcrankferrismask4_3304_0_0, &direction_levelcrankferrismask4_3304_0_0};
static Animation * anim_array_levelcrankferrismask4_3304[1] = {&anim_levelcrankferrismask4_3304_0};
static Animations anim_levelcrankferrismask4_3304 = {1, &anim_array_levelcrankferrismask4_3304[0]};
static bool anim_levelcrankferrismask4_3304_initialized;
class LevelCrankFerrisMask4_3304 : public Active
{
public:
    LevelCrankFerrisMask4_3304(int x, int y) : Active(x, y, LevelCrankFerrisMask4_3304_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_CrankFerrisMask 4", 23);
#endif
        this->animations = &anim_levelcrankferrismask4_3304;
        if (!anim_levelcrankferrismask4_3304_initialized) {
            anim_levelcrankferrismask4_3304_initialized = true;
            images_levelcrankferrismask4_3304_0_0[0] = get_internal_image(13673);
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
FrameObject * create_levelcrankferrismask4_3304(int x, int y)
{
    return new (Active::pool.create()) LevelCrankFerrisMask4_3304(x, y);
}
static Image* images_bosssparkytail_3305_0_0[1];
static Direction direction_bosssparkytail_3305_0_0 = {0, 50, 50, 0, 1, images_bosssparkytail_3305_0_0, 1};
static Animation anim_bosssparkytail_3305_0 = {&direction_bosssparkytail_3305_0_0, &direction_bosssparkytail_3305_0_0, &direction_bosssparkytail_3305_0_0, &direction_bosssparkytail_3305_0_0, &direction_bosssparkytail_3305_0_0, &direction_bosssparkytail_3305_0_0, &direction_bosssparkytail_3305_0_0, &direction_bosssparkytail_3305_0_0, &direction_bosssparkytail_3305_0_0, &direction_bosssparkytail_3305_0_0, &direction_bosssparkytail_3305_0_0, &direction_bosssparkytail_3305_0_0, &direction_bosssparkytail_3305_0_0, &direction_bosssparkytail_3305_0_0, &direction_bosssparkytail_3305_0_0, &direction_bosssparkytail_3305_0_0, NULL, &direction_bosssparkytail_3305_0_0, &direction_bosssparkytail_3305_0_0, &direction_bosssparkytail_3305_0_0, &direction_bosssparkytail_3305_0_0, &direction_bosssparkytail_3305_0_0, &direction_bosssparkytail_3305_0_0, &direction_bosssparkytail_3305_0_0, &direction_bosssparkytail_3305_0_0, &direction_bosssparkytail_3305_0_0, &direction_bosssparkytail_3305_0_0, &direction_bosssparkytail_3305_0_0, &direction_bosssparkytail_3305_0_0, &direction_bosssparkytail_3305_0_0, &direction_bosssparkytail_3305_0_0, &direction_bosssparkytail_3305_0_0};
static Image* images_bosssparkytail_3305_7_0[2];
static Direction direction_bosssparkytail_3305_7_0 = {0, 50, 50, 0, -1, images_bosssparkytail_3305_7_0, 2};
static Animation anim_bosssparkytail_3305_7 = {&direction_bosssparkytail_3305_7_0, &direction_bosssparkytail_3305_7_0, &direction_bosssparkytail_3305_7_0, &direction_bosssparkytail_3305_7_0, &direction_bosssparkytail_3305_7_0, &direction_bosssparkytail_3305_7_0, &direction_bosssparkytail_3305_7_0, &direction_bosssparkytail_3305_7_0, &direction_bosssparkytail_3305_7_0, &direction_bosssparkytail_3305_7_0, &direction_bosssparkytail_3305_7_0, &direction_bosssparkytail_3305_7_0, &direction_bosssparkytail_3305_7_0, &direction_bosssparkytail_3305_7_0, &direction_bosssparkytail_3305_7_0, &direction_bosssparkytail_3305_7_0, NULL, &direction_bosssparkytail_3305_7_0, &direction_bosssparkytail_3305_7_0, &direction_bosssparkytail_3305_7_0, &direction_bosssparkytail_3305_7_0, &direction_bosssparkytail_3305_7_0, &direction_bosssparkytail_3305_7_0, &direction_bosssparkytail_3305_7_0, &direction_bosssparkytail_3305_7_0, &direction_bosssparkytail_3305_7_0, &direction_bosssparkytail_3305_7_0, &direction_bosssparkytail_3305_7_0, &direction_bosssparkytail_3305_7_0, &direction_bosssparkytail_3305_7_0, &direction_bosssparkytail_3305_7_0, &direction_bosssparkytail_3305_7_0};
static Image* images_bosssparkytail_3305_8_0[2];
static Direction direction_bosssparkytail_3305_8_0 = {0, 50, 50, 0, -1, images_bosssparkytail_3305_8_0, 2};
static Animation anim_bosssparkytail_3305_8 = {&direction_bosssparkytail_3305_8_0, &direction_bosssparkytail_3305_8_0, &direction_bosssparkytail_3305_8_0, &direction_bosssparkytail_3305_8_0, &direction_bosssparkytail_3305_8_0, &direction_bosssparkytail_3305_8_0, &direction_bosssparkytail_3305_8_0, &direction_bosssparkytail_3305_8_0, &direction_bosssparkytail_3305_8_0, &direction_bosssparkytail_3305_8_0, &direction_bosssparkytail_3305_8_0, &direction_bosssparkytail_3305_8_0, &direction_bosssparkytail_3305_8_0, &direction_bosssparkytail_3305_8_0, &direction_bosssparkytail_3305_8_0, &direction_bosssparkytail_3305_8_0, NULL, &direction_bosssparkytail_3305_8_0, &direction_bosssparkytail_3305_8_0, &direction_bosssparkytail_3305_8_0, &direction_bosssparkytail_3305_8_0, &direction_bosssparkytail_3305_8_0, &direction_bosssparkytail_3305_8_0, &direction_bosssparkytail_3305_8_0, &direction_bosssparkytail_3305_8_0, &direction_bosssparkytail_3305_8_0, &direction_bosssparkytail_3305_8_0, &direction_bosssparkytail_3305_8_0, &direction_bosssparkytail_3305_8_0, &direction_bosssparkytail_3305_8_0, &direction_bosssparkytail_3305_8_0, &direction_bosssparkytail_3305_8_0};
static Image* images_bosssparkytail_3305_11_0[1];
static Direction direction_bosssparkytail_3305_11_0 = {0, 50, 50, 0, -1, images_bosssparkytail_3305_11_0, 1};
static Image* images_bosssparkytail_3305_11_8[5];
static Direction direction_bosssparkytail_3305_11_8 = {8, 20, 20, 4, -1, images_bosssparkytail_3305_11_8, 5};
static Animation anim_bosssparkytail_3305_11 = {&direction_bosssparkytail_3305_11_0, &direction_bosssparkytail_3305_11_0, &direction_bosssparkytail_3305_11_0, &direction_bosssparkytail_3305_11_0, NULL, &direction_bosssparkytail_3305_11_8, &direction_bosssparkytail_3305_11_8, &direction_bosssparkytail_3305_11_8, &direction_bosssparkytail_3305_11_8, &direction_bosssparkytail_3305_11_8, &direction_bosssparkytail_3305_11_8, &direction_bosssparkytail_3305_11_8, &direction_bosssparkytail_3305_11_8, &direction_bosssparkytail_3305_11_8, &direction_bosssparkytail_3305_11_8, &direction_bosssparkytail_3305_11_8, &direction_bosssparkytail_3305_11_8, &direction_bosssparkytail_3305_11_8, &direction_bosssparkytail_3305_11_8, &direction_bosssparkytail_3305_11_8, NULL, &direction_bosssparkytail_3305_11_0, &direction_bosssparkytail_3305_11_0, &direction_bosssparkytail_3305_11_0, &direction_bosssparkytail_3305_11_0, &direction_bosssparkytail_3305_11_0, &direction_bosssparkytail_3305_11_0, &direction_bosssparkytail_3305_11_0, &direction_bosssparkytail_3305_11_0, &direction_bosssparkytail_3305_11_0, &direction_bosssparkytail_3305_11_0, &direction_bosssparkytail_3305_11_0};
static Animation * anim_array_bosssparkytail_3305[12] = {&anim_bosssparkytail_3305_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosssparkytail_3305_7, &anim_bosssparkytail_3305_8, NULL, NULL, &anim_bosssparkytail_3305_11};
static Animations anim_bosssparkytail_3305 = {12, &anim_array_bosssparkytail_3305[0]};
static bool anim_bosssparkytail_3305_initialized;
class BossSparkyTail_3305 : public Active
{
public:
    BossSparkyTail_3305(int x, int y) : Active(x, y, BossSparkyTail_3305_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_SparkyTail", 15);
#endif
        this->animations = &anim_bosssparkytail_3305;
        if (!anim_bosssparkytail_3305_initialized) {
            anim_bosssparkytail_3305_initialized = true;
            images_bosssparkytail_3305_0_0[0] = get_internal_image(5207);
            images_bosssparkytail_3305_7_0[0] = get_internal_image(6971);
            images_bosssparkytail_3305_7_0[1] = get_internal_image(5207);
            images_bosssparkytail_3305_8_0[0] = get_internal_image(13669);
            images_bosssparkytail_3305_8_0[1] = get_internal_image(13710);
            images_bosssparkytail_3305_11_0[0] = get_internal_image(14059);
            images_bosssparkytail_3305_11_8[0] = get_internal_image(14059);
            images_bosssparkytail_3305_11_8[1] = get_internal_image(14059);
            images_bosssparkytail_3305_11_8[2] = get_internal_image(14059);
            images_bosssparkytail_3305_11_8[3] = get_internal_image(14059);
            images_bosssparkytail_3305_11_8[4] = get_internal_image(5207);
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
FrameObject * create_bosssparkytail_3305(int x, int y)
{
    return new (Active::pool.create()) BossSparkyTail_3305(x, y);
}
static Image* images_bgarrowsign_3306_0_0[12];
static Direction direction_bgarrowsign_3306_0_0 = {0, 25, 25, 0, -1, images_bgarrowsign_3306_0_0, 12};
static Image* images_bgarrowsign_3306_0_1[12];
static Direction direction_bgarrowsign_3306_0_1 = {1, 25, 25, 0, -1, images_bgarrowsign_3306_0_1, 12};
static Animation anim_bgarrowsign_3306_0 = {&direction_bgarrowsign_3306_0_0, &direction_bgarrowsign_3306_0_1, &direction_bgarrowsign_3306_0_1, &direction_bgarrowsign_3306_0_1, &direction_bgarrowsign_3306_0_1, &direction_bgarrowsign_3306_0_1, &direction_bgarrowsign_3306_0_1, &direction_bgarrowsign_3306_0_1, &direction_bgarrowsign_3306_0_1, &direction_bgarrowsign_3306_0_1, &direction_bgarrowsign_3306_0_1, &direction_bgarrowsign_3306_0_1, &direction_bgarrowsign_3306_0_1, &direction_bgarrowsign_3306_0_1, &direction_bgarrowsign_3306_0_1, &direction_bgarrowsign_3306_0_1, &direction_bgarrowsign_3306_0_1, &direction_bgarrowsign_3306_0_0, &direction_bgarrowsign_3306_0_0, &direction_bgarrowsign_3306_0_0, &direction_bgarrowsign_3306_0_0, &direction_bgarrowsign_3306_0_0, &direction_bgarrowsign_3306_0_0, &direction_bgarrowsign_3306_0_0, &direction_bgarrowsign_3306_0_0, &direction_bgarrowsign_3306_0_0, &direction_bgarrowsign_3306_0_0, &direction_bgarrowsign_3306_0_0, &direction_bgarrowsign_3306_0_0, &direction_bgarrowsign_3306_0_0, &direction_bgarrowsign_3306_0_0, &direction_bgarrowsign_3306_0_0};
static Animation * anim_array_bgarrowsign_3306[1] = {&anim_bgarrowsign_3306_0};
static Animations anim_bgarrowsign_3306 = {1, &anim_array_bgarrowsign_3306[0]};
static bool anim_bgarrowsign_3306_initialized;
class BGArrowSign_3306 : public Active
{
public:
    BGArrowSign_3306(int x, int y) : Active(x, y, BGArrowSign_3306_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BG_ArrowSign", 12);
#endif
        this->animations = &anim_bgarrowsign_3306;
        if (!anim_bgarrowsign_3306_initialized) {
            anim_bgarrowsign_3306_initialized = true;
            images_bgarrowsign_3306_0_0[0] = get_internal_image(13786);
            images_bgarrowsign_3306_0_0[1] = get_internal_image(13796);
            images_bgarrowsign_3306_0_0[2] = get_internal_image(13797);
            images_bgarrowsign_3306_0_0[3] = get_internal_image(13798);
            images_bgarrowsign_3306_0_0[4] = get_internal_image(4015);
            images_bgarrowsign_3306_0_0[5] = get_internal_image(13799);
            images_bgarrowsign_3306_0_0[6] = get_internal_image(13800);
            images_bgarrowsign_3306_0_0[7] = get_internal_image(13801);
            images_bgarrowsign_3306_0_0[8] = get_internal_image(13802);
            images_bgarrowsign_3306_0_0[9] = get_internal_image(13803);
            images_bgarrowsign_3306_0_0[10] = get_internal_image(4018);
            images_bgarrowsign_3306_0_0[11] = get_internal_image(13804);
            images_bgarrowsign_3306_0_1[0] = get_internal_image(13786);
            images_bgarrowsign_3306_0_1[1] = get_internal_image(13787);
            images_bgarrowsign_3306_0_1[2] = get_internal_image(13788);
            images_bgarrowsign_3306_0_1[3] = get_internal_image(13789);
            images_bgarrowsign_3306_0_1[4] = get_internal_image(2606);
            images_bgarrowsign_3306_0_1[5] = get_internal_image(13790);
            images_bgarrowsign_3306_0_1[6] = get_internal_image(13791);
            images_bgarrowsign_3306_0_1[7] = get_internal_image(13792);
            images_bgarrowsign_3306_0_1[8] = get_internal_image(13793);
            images_bgarrowsign_3306_0_1[9] = get_internal_image(13794);
            images_bgarrowsign_3306_0_1[10] = get_internal_image(7042);
            images_bgarrowsign_3306_0_1[11] = get_internal_image(13795);
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
FrameObject * create_bgarrowsign_3306(int x, int y)
{
    return new (Active::pool.create()) BGArrowSign_3306(x, y);
}
class BGFacility18_3307 : public Backdrop
{
public:
    BGFacility18_3307(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Facility 18", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13857);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_bgfacility18_3307(int x, int y)
{
    return new (Backdrop::pool.create()) BGFacility18_3307(x, y);
}
class BGFacility15_3308 : public Backdrop
{
public:
    BGFacility15_3308(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Facility 15", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13823);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_bgfacility15_3308(int x, int y)
{
    return new (Backdrop::pool.create()) BGFacility15_3308(x, y);
}
class BGFacility16_3309 : public Backdrop
{
public:
    BGFacility16_3309(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Facility 16", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13853);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_bgfacility16_3309(int x, int y)
{
    return new (Backdrop::pool.create()) BGFacility16_3309(x, y);
}
class BGFacility17_3310 : public Backdrop
{
public:
    BGFacility17_3310(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Facility 17", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13854);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_bgfacility17_3310(int x, int y)
{
    return new (Backdrop::pool.create()) BGFacility17_3310(x, y);
}
class BGLadder_3311 : public Backdrop
{
public:
    BGLadder_3311(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Ladder", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11112);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
        collision->flags |= LADDER_OBSTACLE;
    }
};
FrameObject * create_bgladder_3311(int x, int y)
{
    return new (Backdrop::pool.create()) BGLadder_3311(x, y);
}
class BGFacility19_3312 : public Backdrop
{
public:
    BGFacility19_3312(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Facility 19", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13859);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_bgfacility19_3312(int x, int y)
{
    return new (Backdrop::pool.create()) BGFacility19_3312(x, y);
}
class BGFacility20_3313 : public Backdrop
{
public:
    BGFacility20_3313(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Facility 20", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13858);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_bgfacility20_3313(int x, int y)
{
    return new (Backdrop::pool.create()) BGFacility20_3313(x, y);
}
