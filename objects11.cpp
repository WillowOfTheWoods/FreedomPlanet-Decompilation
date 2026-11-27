#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

class QueueMusic_1009 : public ArrayObject
{
public:
    QueueMusic_1009(int x, int y) : ArrayObject(x, y, QueueMusic_1009_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Queue.Music", 11);
#endif
        initialize(true, 0, 1, 3, 1);
    }
};
FrameObject * create_queuemusic_1009(int x, int y)
{
    return new (ArrayObject::pool.create()) QueueMusic_1009(x, y);
}
class LevelParallaxPiece12_1010 : public SystemBox
{
public:
    LevelParallaxPiece12_1010(int x, int y) : SystemBox(x, y, LevelParallaxPiece12_1010_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 12", 23);
#endif
        flags |= BACKGROUND;
        width = 294;
        height = 65;
        type = PATTERN_IMAGE;
        image = get_internal_image(6374);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece12_1010(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece12_1010(x, y);
}
class LevelParallaxPiece13_1011 : public SystemBox
{
public:
    LevelParallaxPiece13_1011(int x, int y) : SystemBox(x, y, LevelParallaxPiece13_1011_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 13", 23);
#endif
        flags |= BACKGROUND;
        width = 294;
        height = 1024;
        type = PATTERN_IMAGE;
        image = get_internal_image(6373);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece13_1011(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece13_1011(x, y);
}
static Image* images_pushableblock2_1012_0_0[1];
static Direction direction_pushableblock2_1012_0_0 = {0, 100, 100, 0, 1, images_pushableblock2_1012_0_0, 1};
static Image* images_pushableblock2_1012_0_16[1];
static Direction direction_pushableblock2_1012_0_16 = {16, 100, 100, 0, 1, images_pushableblock2_1012_0_16, 1};
static Animation anim_pushableblock2_1012_0 = {&direction_pushableblock2_1012_0_0, &direction_pushableblock2_1012_0_0, &direction_pushableblock2_1012_0_0, &direction_pushableblock2_1012_0_0, &direction_pushableblock2_1012_0_0, &direction_pushableblock2_1012_0_0, &direction_pushableblock2_1012_0_0, &direction_pushableblock2_1012_0_0, NULL, &direction_pushableblock2_1012_0_16, &direction_pushableblock2_1012_0_16, &direction_pushableblock2_1012_0_16, &direction_pushableblock2_1012_0_16, &direction_pushableblock2_1012_0_16, &direction_pushableblock2_1012_0_16, &direction_pushableblock2_1012_0_16, &direction_pushableblock2_1012_0_16, &direction_pushableblock2_1012_0_16, &direction_pushableblock2_1012_0_16, &direction_pushableblock2_1012_0_16, &direction_pushableblock2_1012_0_16, &direction_pushableblock2_1012_0_16, &direction_pushableblock2_1012_0_16, &direction_pushableblock2_1012_0_16, NULL, &direction_pushableblock2_1012_0_0, &direction_pushableblock2_1012_0_0, &direction_pushableblock2_1012_0_0, &direction_pushableblock2_1012_0_0, &direction_pushableblock2_1012_0_0, &direction_pushableblock2_1012_0_0, &direction_pushableblock2_1012_0_0};
static Animation * anim_array_pushableblock2_1012[1] = {&anim_pushableblock2_1012_0};
static Animations anim_pushableblock2_1012 = {1, &anim_array_pushableblock2_1012[0]};
static bool anim_pushableblock2_1012_initialized;
class PushableBlock2_1012 : public Active
{
public:
    PushableBlock2_1012(int x, int y) : Active(x, y, PushableBlock2_1012_type)
    {
        // qualifiers: 14, 16, 21
#ifndef NDEBUG
        name = std::string("PushableBlock 2", 15);
#endif
        this->animations = &anim_pushableblock2_1012;
        if (!anim_pushableblock2_1012_initialized) {
            anim_pushableblock2_1012_initialized = true;
            images_pushableblock2_1012_0_0[0] = get_internal_image(2);
            images_pushableblock2_1012_0_16[0] = get_internal_image(95);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_263_pushableblock_2.value;
        if (!global_data_263_pushableblock_2.init) {
            global_data_263_pushableblock_2.init = true;
        }
    }
};
FrameObject * create_pushableblock2_1012(int x, int y)
{
    return new (Active::pool.create()) PushableBlock2_1012(x, y);
}
static Image* images_waterfalllog_1013_0_0[1];
static Direction direction_waterfalllog_1013_0_0 = {0, 50, 50, 0, 1, images_waterfalllog_1013_0_0, 1};
static Image* images_waterfalllog_1013_0_4[1];
static Direction direction_waterfalllog_1013_0_4 = {4, 50, 50, 0, 1, images_waterfalllog_1013_0_4, 1};
static Image* images_waterfalllog_1013_0_8[1];
static Direction direction_waterfalllog_1013_0_8 = {8, 50, 50, 0, 1, images_waterfalllog_1013_0_8, 1};
static Image* images_waterfalllog_1013_0_12[1];
static Direction direction_waterfalllog_1013_0_12 = {12, 50, 50, 0, 1, images_waterfalllog_1013_0_12, 1};
static Image* images_waterfalllog_1013_0_16[1];
static Direction direction_waterfalllog_1013_0_16 = {16, 50, 50, 0, 1, images_waterfalllog_1013_0_16, 1};
static Image* images_waterfalllog_1013_0_20[1];
static Direction direction_waterfalllog_1013_0_20 = {20, 50, 50, 0, 1, images_waterfalllog_1013_0_20, 1};
static Image* images_waterfalllog_1013_0_24[1];
static Direction direction_waterfalllog_1013_0_24 = {24, 50, 50, 0, 1, images_waterfalllog_1013_0_24, 1};
static Image* images_waterfalllog_1013_0_28[1];
static Direction direction_waterfalllog_1013_0_28 = {28, 50, 50, 0, 1, images_waterfalllog_1013_0_28, 1};
static Animation anim_waterfalllog_1013_0 = {&direction_waterfalllog_1013_0_0, &direction_waterfalllog_1013_0_0, NULL, &direction_waterfalllog_1013_0_4, &direction_waterfalllog_1013_0_4, &direction_waterfalllog_1013_0_4, NULL, &direction_waterfalllog_1013_0_8, &direction_waterfalllog_1013_0_8, &direction_waterfalllog_1013_0_8, NULL, &direction_waterfalllog_1013_0_12, &direction_waterfalllog_1013_0_12, &direction_waterfalllog_1013_0_12, NULL, &direction_waterfalllog_1013_0_16, &direction_waterfalllog_1013_0_16, &direction_waterfalllog_1013_0_16, NULL, &direction_waterfalllog_1013_0_20, &direction_waterfalllog_1013_0_20, &direction_waterfalllog_1013_0_20, NULL, &direction_waterfalllog_1013_0_24, &direction_waterfalllog_1013_0_24, &direction_waterfalllog_1013_0_24, NULL, &direction_waterfalllog_1013_0_28, &direction_waterfalllog_1013_0_28, &direction_waterfalllog_1013_0_28, NULL, &direction_waterfalllog_1013_0_0};
static Animation * anim_array_waterfalllog_1013[1] = {&anim_waterfalllog_1013_0};
static Animations anim_waterfalllog_1013 = {1, &anim_array_waterfalllog_1013[0]};
static bool anim_waterfalllog_1013_initialized;
class WaterfallLog_1013 : public Active
{
public:
    WaterfallLog_1013(int x, int y) : Active(x, y, WaterfallLog_1013_type)
    {
        // qualifiers: 15
#ifndef NDEBUG
        name = std::string("WaterfallLog", 12);
#endif
        this->animations = &anim_waterfalllog_1013;
        if (!anim_waterfalllog_1013_initialized) {
            anim_waterfalllog_1013_initialized = true;
            images_waterfalllog_1013_0_0[0] = get_internal_image(486);
            images_waterfalllog_1013_0_4[0] = get_internal_image(2763);
            images_waterfalllog_1013_0_8[0] = get_internal_image(5288);
            images_waterfalllog_1013_0_12[0] = get_internal_image(5289);
            images_waterfalllog_1013_0_16[0] = get_internal_image(4967);
            images_waterfalllog_1013_0_20[0] = get_internal_image(4970);
            images_waterfalllog_1013_0_24[0] = get_internal_image(4969);
            images_waterfalllog_1013_0_28[0] = get_internal_image(4975);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(3, 3);
    }
};
FrameObject * create_waterfalllog_1013(int x, int y)
{
    return new (Active::pool.create()) WaterfallLog_1013(x, y);
}
static Image* images_minibosstredddebris_1014_0_0[7];
static Direction direction_minibosstredddebris_1014_0_0 = {0, 0, 0, 0, 1, images_minibosstredddebris_1014_0_0, 7};
static Animation anim_minibosstredddebris_1014_0 = {&direction_minibosstredddebris_1014_0_0, &direction_minibosstredddebris_1014_0_0, &direction_minibosstredddebris_1014_0_0, &direction_minibosstredddebris_1014_0_0, &direction_minibosstredddebris_1014_0_0, &direction_minibosstredddebris_1014_0_0, &direction_minibosstredddebris_1014_0_0, &direction_minibosstredddebris_1014_0_0, &direction_minibosstredddebris_1014_0_0, &direction_minibosstredddebris_1014_0_0, &direction_minibosstredddebris_1014_0_0, &direction_minibosstredddebris_1014_0_0, &direction_minibosstredddebris_1014_0_0, &direction_minibosstredddebris_1014_0_0, &direction_minibosstredddebris_1014_0_0, &direction_minibosstredddebris_1014_0_0, NULL, &direction_minibosstredddebris_1014_0_0, &direction_minibosstredddebris_1014_0_0, &direction_minibosstredddebris_1014_0_0, &direction_minibosstredddebris_1014_0_0, &direction_minibosstredddebris_1014_0_0, &direction_minibosstredddebris_1014_0_0, &direction_minibosstredddebris_1014_0_0, &direction_minibosstredddebris_1014_0_0, &direction_minibosstredddebris_1014_0_0, &direction_minibosstredddebris_1014_0_0, &direction_minibosstredddebris_1014_0_0, &direction_minibosstredddebris_1014_0_0, &direction_minibosstredddebris_1014_0_0, &direction_minibosstredddebris_1014_0_0, &direction_minibosstredddebris_1014_0_0};
static Animation * anim_array_minibosstredddebris_1014[1] = {&anim_minibosstredddebris_1014_0};
static Animations anim_minibosstredddebris_1014 = {1, &anim_array_minibosstredddebris_1014[0]};
static bool anim_minibosstredddebris_1014_initialized;
class MinibossTreddDebris_1014 : public Active
{
public:
    MinibossTreddDebris_1014(int x, int y) : Active(x, y, MinibossTreddDebris_1014_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_TreddDebris", 20);
#endif
        this->animations = &anim_minibosstredddebris_1014;
        if (!anim_minibosstredddebris_1014_initialized) {
            anim_minibosstredddebris_1014_initialized = true;
            images_minibosstredddebris_1014_0_0[0] = get_internal_image(1761);
            images_minibosstredddebris_1014_0_0[1] = get_internal_image(3478);
            images_minibosstredddebris_1014_0_0[2] = get_internal_image(2059);
            images_minibosstredddebris_1014_0_0[3] = get_internal_image(3292);
            images_minibosstredddebris_1014_0_0[4] = get_internal_image(1761);
            images_minibosstredddebris_1014_0_0[5] = get_internal_image(2542);
            images_minibosstredddebris_1014_0_0[6] = get_internal_image(2542);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(pick_random(8, 3, 4, 5, 6, 10, 11, 12, 13));
        set_direction(pick_random(8, 3, 4, 5, 6, 10, 11, 12, 13));
        movement = new PinballMovement(this);
        movement->index = 0;
        ((PinballMovement*)movement)->set_max_speed(50);
        ((PinballMovement*)movement)->set_deceleration(0);
        ((PinballMovement*)movement)->set_gravity(25);
        movement->start();
        create_alterables();
    }
};
FrameObject * create_minibosstredddebris_1014(int x, int y)
{
    return new (Active::pool.create()) MinibossTreddDebris_1014(x, y);
}
static Image* images_minibosstreddbomb_1015_0_0[1];
static Direction direction_minibosstreddbomb_1015_0_0 = {0, 50, 50, 0, 1, images_minibosstreddbomb_1015_0_0, 1};
static Animation anim_minibosstreddbomb_1015_0 = {&direction_minibosstreddbomb_1015_0_0, &direction_minibosstreddbomb_1015_0_0, &direction_minibosstreddbomb_1015_0_0, &direction_minibosstreddbomb_1015_0_0, &direction_minibosstreddbomb_1015_0_0, &direction_minibosstreddbomb_1015_0_0, &direction_minibosstreddbomb_1015_0_0, &direction_minibosstreddbomb_1015_0_0, &direction_minibosstreddbomb_1015_0_0, &direction_minibosstreddbomb_1015_0_0, &direction_minibosstreddbomb_1015_0_0, &direction_minibosstreddbomb_1015_0_0, &direction_minibosstreddbomb_1015_0_0, &direction_minibosstreddbomb_1015_0_0, &direction_minibosstreddbomb_1015_0_0, &direction_minibosstreddbomb_1015_0_0, NULL, &direction_minibosstreddbomb_1015_0_0, &direction_minibosstreddbomb_1015_0_0, &direction_minibosstreddbomb_1015_0_0, &direction_minibosstreddbomb_1015_0_0, &direction_minibosstreddbomb_1015_0_0, &direction_minibosstreddbomb_1015_0_0, &direction_minibosstreddbomb_1015_0_0, &direction_minibosstreddbomb_1015_0_0, &direction_minibosstreddbomb_1015_0_0, &direction_minibosstreddbomb_1015_0_0, &direction_minibosstreddbomb_1015_0_0, &direction_minibosstreddbomb_1015_0_0, &direction_minibosstreddbomb_1015_0_0, &direction_minibosstreddbomb_1015_0_0, &direction_minibosstreddbomb_1015_0_0};
static Animation * anim_array_minibosstreddbomb_1015[1] = {&anim_minibosstreddbomb_1015_0};
static Animations anim_minibosstreddbomb_1015 = {1, &anim_array_minibosstreddbomb_1015[0]};
static bool anim_minibosstreddbomb_1015_initialized;
class MinibossTreddBomb_1015 : public Active
{
public:
    MinibossTreddBomb_1015(int x, int y) : Active(x, y, MinibossTreddBomb_1015_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_TreddBomb", 18);
#endif
        this->animations = &anim_minibosstreddbomb_1015;
        if (!anim_minibosstreddbomb_1015_initialized) {
            anim_minibosstreddbomb_1015_initialized = true;
            images_minibosstreddbomb_1015_0_0[0] = get_internal_image(5445);
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
FrameObject * create_minibosstreddbomb_1015(int x, int y)
{
    return new (Active::pool.create()) MinibossTreddBomb_1015(x, y);
}
static Image* images_waterfallback_1016_0_0[8];
static Direction direction_waterfallback_1016_0_0 = {0, 50, 50, 0, -1, images_waterfallback_1016_0_0, 8};
static Animation anim_waterfallback_1016_0 = {&direction_waterfallback_1016_0_0, &direction_waterfallback_1016_0_0, &direction_waterfallback_1016_0_0, &direction_waterfallback_1016_0_0, &direction_waterfallback_1016_0_0, &direction_waterfallback_1016_0_0, &direction_waterfallback_1016_0_0, &direction_waterfallback_1016_0_0, &direction_waterfallback_1016_0_0, &direction_waterfallback_1016_0_0, &direction_waterfallback_1016_0_0, &direction_waterfallback_1016_0_0, &direction_waterfallback_1016_0_0, &direction_waterfallback_1016_0_0, &direction_waterfallback_1016_0_0, &direction_waterfallback_1016_0_0, NULL, &direction_waterfallback_1016_0_0, &direction_waterfallback_1016_0_0, &direction_waterfallback_1016_0_0, &direction_waterfallback_1016_0_0, &direction_waterfallback_1016_0_0, &direction_waterfallback_1016_0_0, &direction_waterfallback_1016_0_0, &direction_waterfallback_1016_0_0, &direction_waterfallback_1016_0_0, &direction_waterfallback_1016_0_0, &direction_waterfallback_1016_0_0, &direction_waterfallback_1016_0_0, &direction_waterfallback_1016_0_0, &direction_waterfallback_1016_0_0, &direction_waterfallback_1016_0_0};
static Animation * anim_array_waterfallback_1016[1] = {&anim_waterfallback_1016_0};
static Animations anim_waterfallback_1016 = {1, &anim_array_waterfallback_1016[0]};
static bool anim_waterfallback_1016_initialized;
class WaterfallBack_1016 : public Active
{
public:
    WaterfallBack_1016(int x, int y) : Active(x, y, WaterfallBack_1016_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("WaterfallBack", 13);
#endif
        this->animations = &anim_waterfallback_1016;
        if (!anim_waterfallback_1016_initialized) {
            anim_waterfallback_1016_initialized = true;
            images_waterfallback_1016_0_0[0] = get_internal_image(3408);
            images_waterfallback_1016_0_0[1] = get_internal_image(3413);
            images_waterfallback_1016_0_0[2] = get_internal_image(3414);
            images_waterfallback_1016_0_0[3] = get_internal_image(3429);
            images_waterfallback_1016_0_0[4] = get_internal_image(3432);
            images_waterfallback_1016_0_0[5] = get_internal_image(3609);
            images_waterfallback_1016_0_0[6] = get_internal_image(3704);
            images_waterfallback_1016_0_0[7] = get_internal_image(3405);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        blend_color = Color(255, 255, 255, 156);
        create_alterables();
    }
};
FrameObject * create_waterfallback_1016(int x, int y)
{
    return new (Active::pool.create()) WaterfallBack_1016(x, y);
}
static Image* images_gimmickbamboospike_1017_0_0[1];
static Direction direction_gimmickbamboospike_1017_0_0 = {0, 50, 50, 0, 1, images_gimmickbamboospike_1017_0_0, 1};
static Animation anim_gimmickbamboospike_1017_0 = {&direction_gimmickbamboospike_1017_0_0, &direction_gimmickbamboospike_1017_0_0, &direction_gimmickbamboospike_1017_0_0, &direction_gimmickbamboospike_1017_0_0, &direction_gimmickbamboospike_1017_0_0, &direction_gimmickbamboospike_1017_0_0, &direction_gimmickbamboospike_1017_0_0, &direction_gimmickbamboospike_1017_0_0, &direction_gimmickbamboospike_1017_0_0, &direction_gimmickbamboospike_1017_0_0, &direction_gimmickbamboospike_1017_0_0, &direction_gimmickbamboospike_1017_0_0, &direction_gimmickbamboospike_1017_0_0, &direction_gimmickbamboospike_1017_0_0, &direction_gimmickbamboospike_1017_0_0, &direction_gimmickbamboospike_1017_0_0, NULL, &direction_gimmickbamboospike_1017_0_0, &direction_gimmickbamboospike_1017_0_0, &direction_gimmickbamboospike_1017_0_0, &direction_gimmickbamboospike_1017_0_0, &direction_gimmickbamboospike_1017_0_0, &direction_gimmickbamboospike_1017_0_0, &direction_gimmickbamboospike_1017_0_0, &direction_gimmickbamboospike_1017_0_0, &direction_gimmickbamboospike_1017_0_0, &direction_gimmickbamboospike_1017_0_0, &direction_gimmickbamboospike_1017_0_0, &direction_gimmickbamboospike_1017_0_0, &direction_gimmickbamboospike_1017_0_0, &direction_gimmickbamboospike_1017_0_0, &direction_gimmickbamboospike_1017_0_0};
static Animation * anim_array_gimmickbamboospike_1017[1] = {&anim_gimmickbamboospike_1017_0};
static Animations anim_gimmickbamboospike_1017 = {1, &anim_array_gimmickbamboospike_1017[0]};
static bool anim_gimmickbamboospike_1017_initialized;
class GimmickBambooSpike_1017 : public Active
{
public:
    GimmickBambooSpike_1017(int x, int y) : Active(x, y, GimmickBambooSpike_1017_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Gimmick_BambooSpike", 19);
#endif
        this->animations = &anim_gimmickbamboospike_1017;
        if (!anim_gimmickbamboospike_1017_initialized) {
            anim_gimmickbamboospike_1017_initialized = true;
            images_gimmickbamboospike_1017_0_0[0] = get_internal_image(3480);
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
FrameObject * create_gimmickbamboospike_1017(int x, int y)
{
    return new (Active::pool.create()) GimmickBambooSpike_1017(x, y);
}
class SignWarning2_1018 : public Backdrop
{
public:
    SignWarning2_1018(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Sign_Warning 2", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2869);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_signwarning2_1018(int x, int y)
{
    return new (Backdrop::pool.create()) SignWarning2_1018(x, y);
}
class QuickBackdrop_1019 : public QuickBackdrop
{
public:
    QuickBackdrop_1019(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop", 14);
#endif
        flags |= BACKGROUND;
        width = 3840;
        height = 252;
        image = get_internal_image(2093);
        outline = 0;
    }
};
FrameObject * create_quickbackdrop_1019(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop_1019(x, y);
}
class DVVerticalBridge_1020 : public Backdrop
{
public:
    DVVerticalBridge_1020(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_VerticalBridge", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2345);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_dvverticalbridge_1020(int x, int y)
{
    return new (Backdrop::pool.create()) DVVerticalBridge_1020(x, y);
}
class BridgeBack_1021 : public Backdrop
{
public:
    BridgeBack_1021(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BridgeBack", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(333);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bridgeback_1021(int x, int y)
{
    return new (Backdrop::pool.create()) BridgeBack_1021(x, y);
}
class BridgeBack3_1022 : public Backdrop
{
public:
    BridgeBack3_1022(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BridgeBack 3", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(334);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bridgeback3_1022(int x, int y)
{
    return new (Backdrop::pool.create()) BridgeBack3_1022(x, y);
}
class BridgeBack2_1023 : public Backdrop
{
public:
    BridgeBack2_1023(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BridgeBack 2", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(28);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bridgeback2_1023(int x, int y)
{
    return new (Backdrop::pool.create()) BridgeBack2_1023(x, y);
}
class DVSmallTunnel_1024 : public Backdrop
{
public:
    DVSmallTunnel_1024(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_SmallTunnel", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(892);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_dvsmalltunnel_1024(int x, int y)
{
    return new (Backdrop::pool.create()) DVSmallTunnel_1024(x, y);
}
class DVFloorCurveLeft_1025 : public Backdrop
{
public:
    DVFloorCurveLeft_1025(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_FloorCurveLeft", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(551);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dvfloorcurveleft_1025(int x, int y)
{
    return new (Backdrop::pool.create()) DVFloorCurveLeft_1025(x, y);
}
class DVRockSlope13_1026 : public Backdrop
{
public:
    DVRockSlope13_1026(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_RockSlope13", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5474);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dvrockslope13_1026(int x, int y)
{
    return new (Backdrop::pool.create()) DVRockSlope13_1026(x, y);
}
class LevelBackdrop10_1027 : public Backdrop
{
public:
    LevelBackdrop10_1027(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Level_Backdrop_ 10", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(264);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_levelbackdrop10_1027(int x, int y)
{
    return new (Backdrop::pool.create()) LevelBackdrop10_1027(x, y);
}
class SignWarning_1028 : public Backdrop
{
public:
    SignWarning_1028(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Sign_Warning", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8775);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_signwarning_1028(int x, int y)
{
    return new (Backdrop::pool.create()) SignWarning_1028(x, y);
}
class SignLeft_1029 : public Backdrop
{
public:
    SignLeft_1029(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Sign_Left", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3842);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_signleft_1029(int x, int y)
{
    return new (Backdrop::pool.create()) SignLeft_1029(x, y);
}
class SwitchWallBase_1030 : public Backdrop
{
public:
    SwitchWallBase_1030(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Switch_WallBase", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(678);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_switchwallbase_1030(int x, int y)
{
    return new (Backdrop::pool.create()) SwitchWallBase_1030(x, y);
}
class DVGrass6_1031 : public Backdrop
{
public:
    DVGrass6_1031(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Grass6", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9429);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_dvgrass6_1031(int x, int y)
{
    return new (Backdrop::pool.create()) DVGrass6_1031(x, y);
}
static Image* images_levelfloatingplatform_1032_0_0[1];
static Direction direction_levelfloatingplatform_1032_0_0 = {0, 50, 50, 0, 1, images_levelfloatingplatform_1032_0_0, 1};
static Animation anim_levelfloatingplatform_1032_0 = {&direction_levelfloatingplatform_1032_0_0, &direction_levelfloatingplatform_1032_0_0, &direction_levelfloatingplatform_1032_0_0, &direction_levelfloatingplatform_1032_0_0, &direction_levelfloatingplatform_1032_0_0, &direction_levelfloatingplatform_1032_0_0, &direction_levelfloatingplatform_1032_0_0, &direction_levelfloatingplatform_1032_0_0, &direction_levelfloatingplatform_1032_0_0, &direction_levelfloatingplatform_1032_0_0, &direction_levelfloatingplatform_1032_0_0, &direction_levelfloatingplatform_1032_0_0, &direction_levelfloatingplatform_1032_0_0, &direction_levelfloatingplatform_1032_0_0, &direction_levelfloatingplatform_1032_0_0, &direction_levelfloatingplatform_1032_0_0, NULL, &direction_levelfloatingplatform_1032_0_0, &direction_levelfloatingplatform_1032_0_0, &direction_levelfloatingplatform_1032_0_0, &direction_levelfloatingplatform_1032_0_0, &direction_levelfloatingplatform_1032_0_0, &direction_levelfloatingplatform_1032_0_0, &direction_levelfloatingplatform_1032_0_0, &direction_levelfloatingplatform_1032_0_0, &direction_levelfloatingplatform_1032_0_0, &direction_levelfloatingplatform_1032_0_0, &direction_levelfloatingplatform_1032_0_0, &direction_levelfloatingplatform_1032_0_0, &direction_levelfloatingplatform_1032_0_0, &direction_levelfloatingplatform_1032_0_0, &direction_levelfloatingplatform_1032_0_0};
static Animation * anim_array_levelfloatingplatform_1032[1] = {&anim_levelfloatingplatform_1032_0};
static Animations anim_levelfloatingplatform_1032 = {1, &anim_array_levelfloatingplatform_1032[0]};
static bool anim_levelfloatingplatform_1032_initialized;
class LevelFloatingPlatform_1032 : public Active
{
public:
    LevelFloatingPlatform_1032(int x, int y) : Active(x, y, LevelFloatingPlatform_1032_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("Level_FloatingPlatform", 22);
#endif
        set_visible(false);
        this->animations = &anim_levelfloatingplatform_1032;
        if (!anim_levelfloatingplatform_1032_initialized) {
            anim_levelfloatingplatform_1032_initialized = true;
            images_levelfloatingplatform_1032_0_0[0] = get_internal_image(1403);
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
FrameObject * create_levelfloatingplatform_1032(int x, int y)
{
    return new (Active::pool.create()) LevelFloatingPlatform_1032(x, y);
}
static Image* images_levelballtunnel1_1033_0_0[1];
static Direction direction_levelballtunnel1_1033_0_0 = {0, 50, 50, 0, 1, images_levelballtunnel1_1033_0_0, 1};
static Animation anim_levelballtunnel1_1033_0 = {&direction_levelballtunnel1_1033_0_0, &direction_levelballtunnel1_1033_0_0, &direction_levelballtunnel1_1033_0_0, &direction_levelballtunnel1_1033_0_0, &direction_levelballtunnel1_1033_0_0, &direction_levelballtunnel1_1033_0_0, &direction_levelballtunnel1_1033_0_0, &direction_levelballtunnel1_1033_0_0, &direction_levelballtunnel1_1033_0_0, &direction_levelballtunnel1_1033_0_0, &direction_levelballtunnel1_1033_0_0, &direction_levelballtunnel1_1033_0_0, &direction_levelballtunnel1_1033_0_0, &direction_levelballtunnel1_1033_0_0, &direction_levelballtunnel1_1033_0_0, &direction_levelballtunnel1_1033_0_0, NULL, &direction_levelballtunnel1_1033_0_0, &direction_levelballtunnel1_1033_0_0, &direction_levelballtunnel1_1033_0_0, &direction_levelballtunnel1_1033_0_0, &direction_levelballtunnel1_1033_0_0, &direction_levelballtunnel1_1033_0_0, &direction_levelballtunnel1_1033_0_0, &direction_levelballtunnel1_1033_0_0, &direction_levelballtunnel1_1033_0_0, &direction_levelballtunnel1_1033_0_0, &direction_levelballtunnel1_1033_0_0, &direction_levelballtunnel1_1033_0_0, &direction_levelballtunnel1_1033_0_0, &direction_levelballtunnel1_1033_0_0, &direction_levelballtunnel1_1033_0_0};
static Animation * anim_array_levelballtunnel1_1033[1] = {&anim_levelballtunnel1_1033_0};
static Animations anim_levelballtunnel1_1033 = {1, &anim_array_levelballtunnel1_1033[0]};
static bool anim_levelballtunnel1_1033_initialized;
class LevelBallTunnel1_1033 : public Active
{
public:
    LevelBallTunnel1_1033(int x, int y) : Active(x, y, LevelBallTunnel1_1033_type)
    {
        // qualifiers: 14, 98
#ifndef NDEBUG
        name = std::string("Level_BallTunnel1", 17);
#endif
        set_visible(false);
        this->animations = &anim_levelballtunnel1_1033;
        if (!anim_levelballtunnel1_1033_initialized) {
            anim_levelballtunnel1_1033_initialized = true;
            images_levelballtunnel1_1033_0_0[0] = get_internal_image(890);
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
FrameObject * create_levelballtunnel1_1033(int x, int y)
{
    return new (Active::pool.create()) LevelBallTunnel1_1033(x, y);
}
static Image* images_treetrunk_1034_0_0[1];
static Direction direction_treetrunk_1034_0_0 = {0, 50, 50, 0, 1, images_treetrunk_1034_0_0, 1};
static Image* images_treetrunk_1034_0_16[1];
static Direction direction_treetrunk_1034_0_16 = {16, 50, 50, 0, 1, images_treetrunk_1034_0_16, 1};
static Animation anim_treetrunk_1034_0 = {&direction_treetrunk_1034_0_0, &direction_treetrunk_1034_0_0, &direction_treetrunk_1034_0_0, &direction_treetrunk_1034_0_0, &direction_treetrunk_1034_0_0, &direction_treetrunk_1034_0_0, &direction_treetrunk_1034_0_0, &direction_treetrunk_1034_0_0, NULL, &direction_treetrunk_1034_0_16, &direction_treetrunk_1034_0_16, &direction_treetrunk_1034_0_16, &direction_treetrunk_1034_0_16, &direction_treetrunk_1034_0_16, &direction_treetrunk_1034_0_16, &direction_treetrunk_1034_0_16, &direction_treetrunk_1034_0_16, &direction_treetrunk_1034_0_16, &direction_treetrunk_1034_0_16, &direction_treetrunk_1034_0_16, &direction_treetrunk_1034_0_16, &direction_treetrunk_1034_0_16, &direction_treetrunk_1034_0_16, &direction_treetrunk_1034_0_16, NULL, &direction_treetrunk_1034_0_0, &direction_treetrunk_1034_0_0, &direction_treetrunk_1034_0_0, &direction_treetrunk_1034_0_0, &direction_treetrunk_1034_0_0, &direction_treetrunk_1034_0_0, &direction_treetrunk_1034_0_0};
static Animation * anim_array_treetrunk_1034[1] = {&anim_treetrunk_1034_0};
static Animations anim_treetrunk_1034 = {1, &anim_array_treetrunk_1034[0]};
static bool anim_treetrunk_1034_initialized;
class TreeTrunk_1034 : public Active
{
public:
    TreeTrunk_1034(int x, int y) : Active(x, y, TreeTrunk_1034_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("TreeTrunk", 9);
#endif
        this->animations = &anim_treetrunk_1034;
        if (!anim_treetrunk_1034_initialized) {
            anim_treetrunk_1034_initialized = true;
            images_treetrunk_1034_0_0[0] = get_internal_image(162);
            images_treetrunk_1034_0_16[0] = get_internal_image(5703);
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
FrameObject * create_treetrunk_1034(int x, int y)
{
    return new (Active::pool.create()) TreeTrunk_1034(x, y);
}
static Image* images_waterfallfront2_1035_0_0[20];
static Direction direction_waterfallfront2_1035_0_0 = {0, 50, 50, 0, -1, images_waterfallfront2_1035_0_0, 20};
static Animation anim_waterfallfront2_1035_0 = {&direction_waterfallfront2_1035_0_0, &direction_waterfallfront2_1035_0_0, &direction_waterfallfront2_1035_0_0, &direction_waterfallfront2_1035_0_0, &direction_waterfallfront2_1035_0_0, &direction_waterfallfront2_1035_0_0, &direction_waterfallfront2_1035_0_0, &direction_waterfallfront2_1035_0_0, &direction_waterfallfront2_1035_0_0, &direction_waterfallfront2_1035_0_0, &direction_waterfallfront2_1035_0_0, &direction_waterfallfront2_1035_0_0, &direction_waterfallfront2_1035_0_0, &direction_waterfallfront2_1035_0_0, &direction_waterfallfront2_1035_0_0, &direction_waterfallfront2_1035_0_0, NULL, &direction_waterfallfront2_1035_0_0, &direction_waterfallfront2_1035_0_0, &direction_waterfallfront2_1035_0_0, &direction_waterfallfront2_1035_0_0, &direction_waterfallfront2_1035_0_0, &direction_waterfallfront2_1035_0_0, &direction_waterfallfront2_1035_0_0, &direction_waterfallfront2_1035_0_0, &direction_waterfallfront2_1035_0_0, &direction_waterfallfront2_1035_0_0, &direction_waterfallfront2_1035_0_0, &direction_waterfallfront2_1035_0_0, &direction_waterfallfront2_1035_0_0, &direction_waterfallfront2_1035_0_0, &direction_waterfallfront2_1035_0_0};
static Animation * anim_array_waterfallfront2_1035[1] = {&anim_waterfallfront2_1035_0};
static Animations anim_waterfallfront2_1035 = {1, &anim_array_waterfallfront2_1035[0]};
static bool anim_waterfallfront2_1035_initialized;
class WaterfallFront2_1035 : public Active
{
public:
    WaterfallFront2_1035(int x, int y) : Active(x, y, WaterfallFront2_1035_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("WaterfallFront 2", 16);
#endif
        this->animations = &anim_waterfallfront2_1035;
        if (!anim_waterfallfront2_1035_initialized) {
            anim_waterfallfront2_1035_initialized = true;
            images_waterfallfront2_1035_0_0[0] = get_internal_image(5208);
            images_waterfallfront2_1035_0_0[1] = get_internal_image(5210);
            images_waterfallfront2_1035_0_0[2] = get_internal_image(5211);
            images_waterfallfront2_1035_0_0[3] = get_internal_image(5212);
            images_waterfallfront2_1035_0_0[4] = get_internal_image(5213);
            images_waterfallfront2_1035_0_0[5] = get_internal_image(5214);
            images_waterfallfront2_1035_0_0[6] = get_internal_image(5215);
            images_waterfallfront2_1035_0_0[7] = get_internal_image(5236);
            images_waterfallfront2_1035_0_0[8] = get_internal_image(5238);
            images_waterfallfront2_1035_0_0[9] = get_internal_image(5240);
            images_waterfallfront2_1035_0_0[10] = get_internal_image(5241);
            images_waterfallfront2_1035_0_0[11] = get_internal_image(5242);
            images_waterfallfront2_1035_0_0[12] = get_internal_image(4193);
            images_waterfallfront2_1035_0_0[13] = get_internal_image(4197);
            images_waterfallfront2_1035_0_0[14] = get_internal_image(4198);
            images_waterfallfront2_1035_0_0[15] = get_internal_image(4199);
            images_waterfallfront2_1035_0_0[16] = get_internal_image(4200);
            images_waterfallfront2_1035_0_0[17] = get_internal_image(4201);
            images_waterfallfront2_1035_0_0[18] = get_internal_image(5107);
            images_waterfallfront2_1035_0_0[19] = get_internal_image(5180);
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
FrameObject * create_waterfallfront2_1035(int x, int y)
{
    return new (Active::pool.create()) WaterfallFront2_1035(x, y);
}
static Image* images_waterfallfront3_1036_0_0[4];
static Direction direction_waterfallfront3_1036_0_0 = {0, 50, 50, 0, -1, images_waterfallfront3_1036_0_0, 4};
static Animation anim_waterfallfront3_1036_0 = {&direction_waterfallfront3_1036_0_0, &direction_waterfallfront3_1036_0_0, &direction_waterfallfront3_1036_0_0, &direction_waterfallfront3_1036_0_0, &direction_waterfallfront3_1036_0_0, &direction_waterfallfront3_1036_0_0, &direction_waterfallfront3_1036_0_0, &direction_waterfallfront3_1036_0_0, &direction_waterfallfront3_1036_0_0, &direction_waterfallfront3_1036_0_0, &direction_waterfallfront3_1036_0_0, &direction_waterfallfront3_1036_0_0, &direction_waterfallfront3_1036_0_0, &direction_waterfallfront3_1036_0_0, &direction_waterfallfront3_1036_0_0, &direction_waterfallfront3_1036_0_0, NULL, &direction_waterfallfront3_1036_0_0, &direction_waterfallfront3_1036_0_0, &direction_waterfallfront3_1036_0_0, &direction_waterfallfront3_1036_0_0, &direction_waterfallfront3_1036_0_0, &direction_waterfallfront3_1036_0_0, &direction_waterfallfront3_1036_0_0, &direction_waterfallfront3_1036_0_0, &direction_waterfallfront3_1036_0_0, &direction_waterfallfront3_1036_0_0, &direction_waterfallfront3_1036_0_0, &direction_waterfallfront3_1036_0_0, &direction_waterfallfront3_1036_0_0, &direction_waterfallfront3_1036_0_0, &direction_waterfallfront3_1036_0_0};
static Animation * anim_array_waterfallfront3_1036[1] = {&anim_waterfallfront3_1036_0};
static Animations anim_waterfallfront3_1036 = {1, &anim_array_waterfallfront3_1036[0]};
static bool anim_waterfallfront3_1036_initialized;
class WaterfallFront3_1036 : public Active
{
public:
    WaterfallFront3_1036(int x, int y) : Active(x, y, WaterfallFront3_1036_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("WaterfallFront 3", 16);
#endif
        set_visible(false);
        this->animations = &anim_waterfallfront3_1036;
        if (!anim_waterfallfront3_1036_initialized) {
            anim_waterfallfront3_1036_initialized = true;
            images_waterfallfront3_1036_0_0[0] = get_internal_image(254);
            images_waterfallfront3_1036_0_0[1] = get_internal_image(321);
            images_waterfallfront3_1036_0_0[2] = get_internal_image(1399);
            images_waterfallfront3_1036_0_0[3] = get_internal_image(1410);
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
FrameObject * create_waterfallfront3_1036(int x, int y)
{
    return new (Active::pool.create()) WaterfallFront3_1036(x, y);
}
static Image* images_waterfallloggenerator_1037_0_0[1];
static Direction direction_waterfallloggenerator_1037_0_0 = {0, 50, 50, 0, 1, images_waterfallloggenerator_1037_0_0, 1};
static Animation anim_waterfallloggenerator_1037_0 = {&direction_waterfallloggenerator_1037_0_0, &direction_waterfallloggenerator_1037_0_0, &direction_waterfallloggenerator_1037_0_0, &direction_waterfallloggenerator_1037_0_0, &direction_waterfallloggenerator_1037_0_0, &direction_waterfallloggenerator_1037_0_0, &direction_waterfallloggenerator_1037_0_0, &direction_waterfallloggenerator_1037_0_0, &direction_waterfallloggenerator_1037_0_0, &direction_waterfallloggenerator_1037_0_0, &direction_waterfallloggenerator_1037_0_0, &direction_waterfallloggenerator_1037_0_0, &direction_waterfallloggenerator_1037_0_0, &direction_waterfallloggenerator_1037_0_0, &direction_waterfallloggenerator_1037_0_0, &direction_waterfallloggenerator_1037_0_0, NULL, &direction_waterfallloggenerator_1037_0_0, &direction_waterfallloggenerator_1037_0_0, &direction_waterfallloggenerator_1037_0_0, &direction_waterfallloggenerator_1037_0_0, &direction_waterfallloggenerator_1037_0_0, &direction_waterfallloggenerator_1037_0_0, &direction_waterfallloggenerator_1037_0_0, &direction_waterfallloggenerator_1037_0_0, &direction_waterfallloggenerator_1037_0_0, &direction_waterfallloggenerator_1037_0_0, &direction_waterfallloggenerator_1037_0_0, &direction_waterfallloggenerator_1037_0_0, &direction_waterfallloggenerator_1037_0_0, &direction_waterfallloggenerator_1037_0_0, &direction_waterfallloggenerator_1037_0_0};
static Animation * anim_array_waterfallloggenerator_1037[1] = {&anim_waterfallloggenerator_1037_0};
static Animations anim_waterfallloggenerator_1037 = {1, &anim_array_waterfallloggenerator_1037[0]};
static bool anim_waterfallloggenerator_1037_initialized;
class WaterfallLogGenerator_1037 : public Active
{
public:
    WaterfallLogGenerator_1037(int x, int y) : Active(x, y, WaterfallLogGenerator_1037_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("WaterfallLog_Generator", 22);
#endif
        set_visible(false);
        this->animations = &anim_waterfallloggenerator_1037;
        if (!anim_waterfallloggenerator_1037_initialized) {
            anim_waterfallloggenerator_1037_initialized = true;
            images_waterfallloggenerator_1037_0_0[0] = get_internal_image(1483);
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
FrameObject * create_waterfallloggenerator_1037(int x, int y)
{
    return new (Active::pool.create()) WaterfallLogGenerator_1037(x, y);
}
static Image* images_treefront_1038_0_0[1];
static Direction direction_treefront_1038_0_0 = {0, 50, 50, 0, 1, images_treefront_1038_0_0, 1};
static Animation anim_treefront_1038_0 = {&direction_treefront_1038_0_0, &direction_treefront_1038_0_0, &direction_treefront_1038_0_0, &direction_treefront_1038_0_0, &direction_treefront_1038_0_0, &direction_treefront_1038_0_0, &direction_treefront_1038_0_0, &direction_treefront_1038_0_0, &direction_treefront_1038_0_0, &direction_treefront_1038_0_0, &direction_treefront_1038_0_0, &direction_treefront_1038_0_0, &direction_treefront_1038_0_0, &direction_treefront_1038_0_0, &direction_treefront_1038_0_0, &direction_treefront_1038_0_0, NULL, &direction_treefront_1038_0_0, &direction_treefront_1038_0_0, &direction_treefront_1038_0_0, &direction_treefront_1038_0_0, &direction_treefront_1038_0_0, &direction_treefront_1038_0_0, &direction_treefront_1038_0_0, &direction_treefront_1038_0_0, &direction_treefront_1038_0_0, &direction_treefront_1038_0_0, &direction_treefront_1038_0_0, &direction_treefront_1038_0_0, &direction_treefront_1038_0_0, &direction_treefront_1038_0_0, &direction_treefront_1038_0_0};
static Animation * anim_array_treefront_1038[1] = {&anim_treefront_1038_0};
static Animations anim_treefront_1038 = {1, &anim_array_treefront_1038[0]};
static bool anim_treefront_1038_initialized;
class TreeFront_1038 : public Active
{
public:
    TreeFront_1038(int x, int y) : Active(x, y, TreeFront_1038_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("TreeFront", 9);
#endif
        this->animations = &anim_treefront_1038;
        if (!anim_treefront_1038_initialized) {
            anim_treefront_1038_initialized = true;
            images_treefront_1038_0_0[0] = get_internal_image(1486);
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
FrameObject * create_treefront_1038(int x, int y)
{
    return new (Active::pool.create()) TreeFront_1038(x, y);
}
static Image* images_minibosstreddright2_1039_0_0[1];
static Direction direction_minibosstreddright2_1039_0_0 = {0, 50, 50, 0, 1, images_minibosstreddright2_1039_0_0, 1};
static Animation anim_minibosstreddright2_1039_0 = {&direction_minibosstreddright2_1039_0_0, &direction_minibosstreddright2_1039_0_0, &direction_minibosstreddright2_1039_0_0, &direction_minibosstreddright2_1039_0_0, &direction_minibosstreddright2_1039_0_0, &direction_minibosstreddright2_1039_0_0, &direction_minibosstreddright2_1039_0_0, &direction_minibosstreddright2_1039_0_0, &direction_minibosstreddright2_1039_0_0, &direction_minibosstreddright2_1039_0_0, &direction_minibosstreddright2_1039_0_0, &direction_minibosstreddright2_1039_0_0, &direction_minibosstreddright2_1039_0_0, &direction_minibosstreddright2_1039_0_0, &direction_minibosstreddright2_1039_0_0, &direction_minibosstreddright2_1039_0_0, NULL, &direction_minibosstreddright2_1039_0_0, &direction_minibosstreddright2_1039_0_0, &direction_minibosstreddright2_1039_0_0, &direction_minibosstreddright2_1039_0_0, &direction_minibosstreddright2_1039_0_0, &direction_minibosstreddright2_1039_0_0, &direction_minibosstreddright2_1039_0_0, &direction_minibosstreddright2_1039_0_0, &direction_minibosstreddright2_1039_0_0, &direction_minibosstreddright2_1039_0_0, &direction_minibosstreddright2_1039_0_0, &direction_minibosstreddright2_1039_0_0, &direction_minibosstreddright2_1039_0_0, &direction_minibosstreddright2_1039_0_0, &direction_minibosstreddright2_1039_0_0};
static Animation * anim_array_minibosstreddright2_1039[1] = {&anim_minibosstreddright2_1039_0};
static Animations anim_minibosstreddright2_1039 = {1, &anim_array_minibosstreddright2_1039[0]};
static bool anim_minibosstreddright2_1039_initialized;
class MinibossTreddRight2_1039 : public Active
{
public:
    MinibossTreddRight2_1039(int x, int y) : Active(x, y, MinibossTreddRight2_1039_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Miniboss_TreddRight 2", 21);
#endif
        this->animations = &anim_minibosstreddright2_1039;
        if (!anim_minibosstreddright2_1039_initialized) {
            anim_minibosstreddright2_1039_initialized = true;
            images_minibosstreddright2_1039_0_0[0] = get_internal_image(2059);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 48);
    }
};
FrameObject * create_minibosstreddright2_1039(int x, int y)
{
    return new (Active::pool.create()) MinibossTreddRight2_1039(x, y);
}
static Image* images_minibosstreddright4_1040_0_0[1];
static Direction direction_minibosstreddright4_1040_0_0 = {0, 50, 50, 0, 1, images_minibosstreddright4_1040_0_0, 1};
static Animation anim_minibosstreddright4_1040_0 = {&direction_minibosstreddright4_1040_0_0, &direction_minibosstreddright4_1040_0_0, &direction_minibosstreddright4_1040_0_0, &direction_minibosstreddright4_1040_0_0, &direction_minibosstreddright4_1040_0_0, &direction_minibosstreddright4_1040_0_0, &direction_minibosstreddright4_1040_0_0, &direction_minibosstreddright4_1040_0_0, &direction_minibosstreddright4_1040_0_0, &direction_minibosstreddright4_1040_0_0, &direction_minibosstreddright4_1040_0_0, &direction_minibosstreddright4_1040_0_0, &direction_minibosstreddright4_1040_0_0, &direction_minibosstreddright4_1040_0_0, &direction_minibosstreddright4_1040_0_0, &direction_minibosstreddright4_1040_0_0, NULL, &direction_minibosstreddright4_1040_0_0, &direction_minibosstreddright4_1040_0_0, &direction_minibosstreddright4_1040_0_0, &direction_minibosstreddright4_1040_0_0, &direction_minibosstreddright4_1040_0_0, &direction_minibosstreddright4_1040_0_0, &direction_minibosstreddright4_1040_0_0, &direction_minibosstreddright4_1040_0_0, &direction_minibosstreddright4_1040_0_0, &direction_minibosstreddright4_1040_0_0, &direction_minibosstreddright4_1040_0_0, &direction_minibosstreddright4_1040_0_0, &direction_minibosstreddright4_1040_0_0, &direction_minibosstreddright4_1040_0_0, &direction_minibosstreddright4_1040_0_0};
static Animation * anim_array_minibosstreddright4_1040[1] = {&anim_minibosstreddright4_1040_0};
static Animations anim_minibosstreddright4_1040 = {1, &anim_array_minibosstreddright4_1040[0]};
static bool anim_minibosstreddright4_1040_initialized;
class MinibossTreddRight4_1040 : public Active
{
public:
    MinibossTreddRight4_1040(int x, int y) : Active(x, y, MinibossTreddRight4_1040_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Miniboss_TreddRight 4", 21);
#endif
        this->animations = &anim_minibosstreddright4_1040;
        if (!anim_minibosstreddright4_1040_initialized) {
            anim_minibosstreddright4_1040_initialized = true;
            images_minibosstreddright4_1040_0_0[0] = get_internal_image(1760);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 4);
        alterables->values.set(1, 24);
    }
};
FrameObject * create_minibosstreddright4_1040(int x, int y)
{
    return new (Active::pool.create()) MinibossTreddRight4_1040(x, y);
}
static Image* images_minibosstreddright6_1041_0_0[1];
static Direction direction_minibosstreddright6_1041_0_0 = {0, 50, 50, 0, 1, images_minibosstreddright6_1041_0_0, 1};
static Animation anim_minibosstreddright6_1041_0 = {&direction_minibosstreddright6_1041_0_0, &direction_minibosstreddright6_1041_0_0, &direction_minibosstreddright6_1041_0_0, &direction_minibosstreddright6_1041_0_0, &direction_minibosstreddright6_1041_0_0, &direction_minibosstreddright6_1041_0_0, &direction_minibosstreddright6_1041_0_0, &direction_minibosstreddright6_1041_0_0, &direction_minibosstreddright6_1041_0_0, &direction_minibosstreddright6_1041_0_0, &direction_minibosstreddright6_1041_0_0, &direction_minibosstreddright6_1041_0_0, &direction_minibosstreddright6_1041_0_0, &direction_minibosstreddright6_1041_0_0, &direction_minibosstreddright6_1041_0_0, &direction_minibosstreddright6_1041_0_0, NULL, &direction_minibosstreddright6_1041_0_0, &direction_minibosstreddright6_1041_0_0, &direction_minibosstreddright6_1041_0_0, &direction_minibosstreddright6_1041_0_0, &direction_minibosstreddright6_1041_0_0, &direction_minibosstreddright6_1041_0_0, &direction_minibosstreddright6_1041_0_0, &direction_minibosstreddright6_1041_0_0, &direction_minibosstreddright6_1041_0_0, &direction_minibosstreddright6_1041_0_0, &direction_minibosstreddright6_1041_0_0, &direction_minibosstreddright6_1041_0_0, &direction_minibosstreddright6_1041_0_0, &direction_minibosstreddright6_1041_0_0, &direction_minibosstreddright6_1041_0_0};
static Animation * anim_array_minibosstreddright6_1041[1] = {&anim_minibosstreddright6_1041_0};
static Animations anim_minibosstreddright6_1041 = {1, &anim_array_minibosstreddright6_1041[0]};
static bool anim_minibosstreddright6_1041_initialized;
class MinibossTreddRight6_1041 : public Active
{
public:
    MinibossTreddRight6_1041(int x, int y) : Active(x, y, MinibossTreddRight6_1041_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Miniboss_TreddRight 6", 21);
#endif
        this->animations = &anim_minibosstreddright6_1041;
        if (!anim_minibosstreddright6_1041_initialized) {
            anim_minibosstreddright6_1041_initialized = true;
            images_minibosstreddright6_1041_0_0[0] = get_internal_image(2063);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 4);
        alterables->values.set(1, 16);
    }
};
FrameObject * create_minibosstreddright6_1041(int x, int y)
{
    return new (Active::pool.create()) MinibossTreddRight6_1041(x, y);
}
static Image* images_minibosstreddright5_1042_0_0[1];
static Direction direction_minibosstreddright5_1042_0_0 = {0, 50, 50, 0, 1, images_minibosstreddright5_1042_0_0, 1};
static Animation anim_minibosstreddright5_1042_0 = {&direction_minibosstreddright5_1042_0_0, &direction_minibosstreddright5_1042_0_0, &direction_minibosstreddright5_1042_0_0, &direction_minibosstreddright5_1042_0_0, &direction_minibosstreddright5_1042_0_0, &direction_minibosstreddright5_1042_0_0, &direction_minibosstreddright5_1042_0_0, &direction_minibosstreddright5_1042_0_0, &direction_minibosstreddright5_1042_0_0, &direction_minibosstreddright5_1042_0_0, &direction_minibosstreddright5_1042_0_0, &direction_minibosstreddright5_1042_0_0, &direction_minibosstreddright5_1042_0_0, &direction_minibosstreddright5_1042_0_0, &direction_minibosstreddright5_1042_0_0, &direction_minibosstreddright5_1042_0_0, NULL, &direction_minibosstreddright5_1042_0_0, &direction_minibosstreddright5_1042_0_0, &direction_minibosstreddright5_1042_0_0, &direction_minibosstreddright5_1042_0_0, &direction_minibosstreddright5_1042_0_0, &direction_minibosstreddright5_1042_0_0, &direction_minibosstreddright5_1042_0_0, &direction_minibosstreddright5_1042_0_0, &direction_minibosstreddright5_1042_0_0, &direction_minibosstreddright5_1042_0_0, &direction_minibosstreddright5_1042_0_0, &direction_minibosstreddright5_1042_0_0, &direction_minibosstreddright5_1042_0_0, &direction_minibosstreddright5_1042_0_0, &direction_minibosstreddright5_1042_0_0};
static Animation * anim_array_minibosstreddright5_1042[1] = {&anim_minibosstreddright5_1042_0};
static Animations anim_minibosstreddright5_1042 = {1, &anim_array_minibosstreddright5_1042[0]};
static bool anim_minibosstreddright5_1042_initialized;
class MinibossTreddRight5_1042 : public Active
{
public:
    MinibossTreddRight5_1042(int x, int y) : Active(x, y, MinibossTreddRight5_1042_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Miniboss_TreddRight 5", 21);
#endif
        this->animations = &anim_minibosstreddright5_1042;
        if (!anim_minibosstreddright5_1042_initialized) {
            anim_minibosstreddright5_1042_initialized = true;
            images_minibosstreddright5_1042_0_0[0] = get_internal_image(2063);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 4);
        alterables->values.set(1, 36);
    }
};
FrameObject * create_minibosstreddright5_1042(int x, int y)
{
    return new (Active::pool.create()) MinibossTreddRight5_1042(x, y);
}
static Image* images_minibosstreddright3_1043_0_0[1];
static Direction direction_minibosstreddright3_1043_0_0 = {0, 50, 50, 0, 1, images_minibosstreddright3_1043_0_0, 1};
static Animation anim_minibosstreddright3_1043_0 = {&direction_minibosstreddright3_1043_0_0, &direction_minibosstreddright3_1043_0_0, &direction_minibosstreddright3_1043_0_0, &direction_minibosstreddright3_1043_0_0, &direction_minibosstreddright3_1043_0_0, &direction_minibosstreddright3_1043_0_0, &direction_minibosstreddright3_1043_0_0, &direction_minibosstreddright3_1043_0_0, &direction_minibosstreddright3_1043_0_0, &direction_minibosstreddright3_1043_0_0, &direction_minibosstreddright3_1043_0_0, &direction_minibosstreddright3_1043_0_0, &direction_minibosstreddright3_1043_0_0, &direction_minibosstreddright3_1043_0_0, &direction_minibosstreddright3_1043_0_0, &direction_minibosstreddright3_1043_0_0, NULL, &direction_minibosstreddright3_1043_0_0, &direction_minibosstreddright3_1043_0_0, &direction_minibosstreddright3_1043_0_0, &direction_minibosstreddright3_1043_0_0, &direction_minibosstreddright3_1043_0_0, &direction_minibosstreddright3_1043_0_0, &direction_minibosstreddright3_1043_0_0, &direction_minibosstreddright3_1043_0_0, &direction_minibosstreddright3_1043_0_0, &direction_minibosstreddright3_1043_0_0, &direction_minibosstreddright3_1043_0_0, &direction_minibosstreddright3_1043_0_0, &direction_minibosstreddright3_1043_0_0, &direction_minibosstreddright3_1043_0_0, &direction_minibosstreddright3_1043_0_0};
static Animation * anim_array_minibosstreddright3_1043[1] = {&anim_minibosstreddright3_1043_0};
static Animations anim_minibosstreddright3_1043 = {1, &anim_array_minibosstreddright3_1043[0]};
static bool anim_minibosstreddright3_1043_initialized;
class MinibossTreddRight3_1043 : public Active
{
public:
    MinibossTreddRight3_1043(int x, int y) : Active(x, y, MinibossTreddRight3_1043_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Miniboss_TreddRight 3", 21);
#endif
        this->animations = &anim_minibosstreddright3_1043;
        if (!anim_minibosstreddright3_1043_initialized) {
            anim_minibosstreddright3_1043_initialized = true;
            images_minibosstreddright3_1043_0_0[0] = get_internal_image(3292);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 4);
        alterables->values.set(1, 48);
    }
};
FrameObject * create_minibosstreddright3_1043(int x, int y)
{
    return new (Active::pool.create()) MinibossTreddRight3_1043(x, y);
}
static Image* images_minibosstredd_1044_0_0[1];
static Direction direction_minibosstredd_1044_0_0 = {0, 50, 50, 0, 1, images_minibosstredd_1044_0_0, 1};
static Animation anim_minibosstredd_1044_0 = {&direction_minibosstredd_1044_0_0, &direction_minibosstredd_1044_0_0, &direction_minibosstredd_1044_0_0, &direction_minibosstredd_1044_0_0, &direction_minibosstredd_1044_0_0, &direction_minibosstredd_1044_0_0, &direction_minibosstredd_1044_0_0, &direction_minibosstredd_1044_0_0, &direction_minibosstredd_1044_0_0, &direction_minibosstredd_1044_0_0, &direction_minibosstredd_1044_0_0, &direction_minibosstredd_1044_0_0, &direction_minibosstredd_1044_0_0, &direction_minibosstredd_1044_0_0, &direction_minibosstredd_1044_0_0, &direction_minibosstredd_1044_0_0, NULL, &direction_minibosstredd_1044_0_0, &direction_minibosstredd_1044_0_0, &direction_minibosstredd_1044_0_0, &direction_minibosstredd_1044_0_0, &direction_minibosstredd_1044_0_0, &direction_minibosstredd_1044_0_0, &direction_minibosstredd_1044_0_0, &direction_minibosstredd_1044_0_0, &direction_minibosstredd_1044_0_0, &direction_minibosstredd_1044_0_0, &direction_minibosstredd_1044_0_0, &direction_minibosstredd_1044_0_0, &direction_minibosstredd_1044_0_0, &direction_minibosstredd_1044_0_0, &direction_minibosstredd_1044_0_0};
static Image* images_minibosstredd_1044_10_0[2];
static Direction direction_minibosstredd_1044_10_0 = {0, 50, 50, 0, -1, images_minibosstredd_1044_10_0, 2};
static Animation anim_minibosstredd_1044_10 = {&direction_minibosstredd_1044_10_0, &direction_minibosstredd_1044_10_0, &direction_minibosstredd_1044_10_0, &direction_minibosstredd_1044_10_0, &direction_minibosstredd_1044_10_0, &direction_minibosstredd_1044_10_0, &direction_minibosstredd_1044_10_0, &direction_minibosstredd_1044_10_0, &direction_minibosstredd_1044_10_0, &direction_minibosstredd_1044_10_0, &direction_minibosstredd_1044_10_0, &direction_minibosstredd_1044_10_0, &direction_minibosstredd_1044_10_0, &direction_minibosstredd_1044_10_0, &direction_minibosstredd_1044_10_0, &direction_minibosstredd_1044_10_0, NULL, &direction_minibosstredd_1044_10_0, &direction_minibosstredd_1044_10_0, &direction_minibosstredd_1044_10_0, &direction_minibosstredd_1044_10_0, &direction_minibosstredd_1044_10_0, &direction_minibosstredd_1044_10_0, &direction_minibosstredd_1044_10_0, &direction_minibosstredd_1044_10_0, &direction_minibosstredd_1044_10_0, &direction_minibosstredd_1044_10_0, &direction_minibosstredd_1044_10_0, &direction_minibosstredd_1044_10_0, &direction_minibosstredd_1044_10_0, &direction_minibosstredd_1044_10_0, &direction_minibosstredd_1044_10_0};
static Animation * anim_array_minibosstredd_1044[11] = {&anim_minibosstredd_1044_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_minibosstredd_1044_10};
static Animations anim_minibosstredd_1044 = {11, &anim_array_minibosstredd_1044[0]};
static bool anim_minibosstredd_1044_initialized;
class MinibossTredd_1044 : public Active
{
public:
    MinibossTredd_1044(int x, int y) : Active(x, y, MinibossTredd_1044_type)
    {
        // qualifiers: 29, 97
#ifndef NDEBUG
        name = std::string("Miniboss_Tredd", 14);
#endif
        this->animations = &anim_minibosstredd_1044;
        if (!anim_minibosstredd_1044_initialized) {
            anim_minibosstredd_1044_initialized = true;
            images_minibosstredd_1044_0_0[0] = get_internal_image(2823);
            images_minibosstredd_1044_10_0[0] = get_internal_image(3199);
            images_minibosstredd_1044_10_0[1] = get_internal_image(3200);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 50);
        alterables->values.set(7, 200);
        alterables->values.set(9, 1);
    }
};
FrameObject * create_minibosstredd_1044(int x, int y)
{
    return new (Active::pool.create()) MinibossTredd_1044(x, y);
}
static Image* images_minibosstreddright1_1045_0_0[1];
static Direction direction_minibosstreddright1_1045_0_0 = {0, 50, 50, 0, 1, images_minibosstreddright1_1045_0_0, 1};
static Image* images_minibosstreddright1_1045_0_8[1];
static Direction direction_minibosstreddright1_1045_0_8 = {8, 50, 50, 0, 1, images_minibosstreddright1_1045_0_8, 1};
static Animation anim_minibosstreddright1_1045_0 = {&direction_minibosstreddright1_1045_0_0, &direction_minibosstreddright1_1045_0_0, &direction_minibosstreddright1_1045_0_0, &direction_minibosstreddright1_1045_0_0, NULL, &direction_minibosstreddright1_1045_0_8, &direction_minibosstreddright1_1045_0_8, &direction_minibosstreddright1_1045_0_8, &direction_minibosstreddright1_1045_0_8, &direction_minibosstreddright1_1045_0_8, &direction_minibosstreddright1_1045_0_8, &direction_minibosstreddright1_1045_0_8, &direction_minibosstreddright1_1045_0_8, &direction_minibosstreddright1_1045_0_8, &direction_minibosstreddright1_1045_0_8, &direction_minibosstreddright1_1045_0_8, &direction_minibosstreddright1_1045_0_8, &direction_minibosstreddright1_1045_0_8, &direction_minibosstreddright1_1045_0_8, &direction_minibosstreddright1_1045_0_8, NULL, &direction_minibosstreddright1_1045_0_0, &direction_minibosstreddright1_1045_0_0, &direction_minibosstreddright1_1045_0_0, &direction_minibosstreddright1_1045_0_0, &direction_minibosstreddright1_1045_0_0, &direction_minibosstreddright1_1045_0_0, &direction_minibosstreddright1_1045_0_0, &direction_minibosstreddright1_1045_0_0, &direction_minibosstreddright1_1045_0_0, &direction_minibosstreddright1_1045_0_0, &direction_minibosstreddright1_1045_0_0};
static Image* images_minibosstreddright1_1045_7_0[2];
static Direction direction_minibosstreddright1_1045_7_0 = {0, 25, 25, 0, -1, images_minibosstreddright1_1045_7_0, 2};
static Animation anim_minibosstreddright1_1045_7 = {&direction_minibosstreddright1_1045_7_0, &direction_minibosstreddright1_1045_7_0, &direction_minibosstreddright1_1045_7_0, &direction_minibosstreddright1_1045_7_0, &direction_minibosstreddright1_1045_7_0, &direction_minibosstreddright1_1045_7_0, &direction_minibosstreddright1_1045_7_0, &direction_minibosstreddright1_1045_7_0, &direction_minibosstreddright1_1045_7_0, &direction_minibosstreddright1_1045_7_0, &direction_minibosstreddright1_1045_7_0, &direction_minibosstreddright1_1045_7_0, &direction_minibosstreddright1_1045_7_0, &direction_minibosstreddright1_1045_7_0, &direction_minibosstreddright1_1045_7_0, &direction_minibosstreddright1_1045_7_0, NULL, &direction_minibosstreddright1_1045_7_0, &direction_minibosstreddright1_1045_7_0, &direction_minibosstreddright1_1045_7_0, &direction_minibosstreddright1_1045_7_0, &direction_minibosstreddright1_1045_7_0, &direction_minibosstreddright1_1045_7_0, &direction_minibosstreddright1_1045_7_0, &direction_minibosstreddright1_1045_7_0, &direction_minibosstreddright1_1045_7_0, &direction_minibosstreddright1_1045_7_0, &direction_minibosstreddright1_1045_7_0, &direction_minibosstreddright1_1045_7_0, &direction_minibosstreddright1_1045_7_0, &direction_minibosstreddright1_1045_7_0, &direction_minibosstreddright1_1045_7_0};
static Image* images_minibosstreddright1_1045_8_0[2];
static Direction direction_minibosstreddright1_1045_8_0 = {0, 20, 20, 1, 2, images_minibosstreddright1_1045_8_0, 2};
static Animation anim_minibosstreddright1_1045_8 = {&direction_minibosstreddright1_1045_8_0, &direction_minibosstreddright1_1045_8_0, &direction_minibosstreddright1_1045_8_0, &direction_minibosstreddright1_1045_8_0, &direction_minibosstreddright1_1045_8_0, &direction_minibosstreddright1_1045_8_0, &direction_minibosstreddright1_1045_8_0, &direction_minibosstreddright1_1045_8_0, &direction_minibosstreddright1_1045_8_0, &direction_minibosstreddright1_1045_8_0, &direction_minibosstreddright1_1045_8_0, &direction_minibosstreddright1_1045_8_0, &direction_minibosstreddright1_1045_8_0, &direction_minibosstreddright1_1045_8_0, &direction_minibosstreddright1_1045_8_0, &direction_minibosstreddright1_1045_8_0, NULL, &direction_minibosstreddright1_1045_8_0, &direction_minibosstreddright1_1045_8_0, &direction_minibosstreddright1_1045_8_0, &direction_minibosstreddright1_1045_8_0, &direction_minibosstreddright1_1045_8_0, &direction_minibosstreddright1_1045_8_0, &direction_minibosstreddright1_1045_8_0, &direction_minibosstreddright1_1045_8_0, &direction_minibosstreddright1_1045_8_0, &direction_minibosstreddright1_1045_8_0, &direction_minibosstreddright1_1045_8_0, &direction_minibosstreddright1_1045_8_0, &direction_minibosstreddright1_1045_8_0, &direction_minibosstreddright1_1045_8_0, &direction_minibosstreddright1_1045_8_0};
static Animation * anim_array_minibosstreddright1_1045[9] = {&anim_minibosstreddright1_1045_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_minibosstreddright1_1045_7, &anim_minibosstreddright1_1045_8};
static Animations anim_minibosstreddright1_1045 = {9, &anim_array_minibosstreddright1_1045[0]};
static bool anim_minibosstreddright1_1045_initialized;
class MinibossTreddRight1_1045 : public Active
{
public:
    MinibossTreddRight1_1045(int x, int y) : Active(x, y, MinibossTreddRight1_1045_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Miniboss_TreddRight 1", 21);
#endif
        this->animations = &anim_minibosstreddright1_1045;
        if (!anim_minibosstreddright1_1045_initialized) {
            anim_minibosstreddright1_1045_initialized = true;
            images_minibosstreddright1_1045_0_0[0] = get_internal_image(3479);
            images_minibosstreddright1_1045_0_8[0] = get_internal_image(3478);
            images_minibosstreddright1_1045_7_0[0] = get_internal_image(3478);
            images_minibosstreddright1_1045_7_0[1] = get_internal_image(3482);
            images_minibosstreddright1_1045_8_0[0] = get_internal_image(3483);
            images_minibosstreddright1_1045_8_0[1] = get_internal_image(3481);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(8);
        create_alterables();
        alterables->values.set(0, 4);
        alterables->values.set(1, 48);
    }
};
FrameObject * create_minibosstreddright1_1045(int x, int y)
{
    return new (Active::pool.create()) MinibossTreddRight1_1045(x, y);
}
static Image* images_minibosstreddleft6_1046_0_0[1];
static Direction direction_minibosstreddleft6_1046_0_0 = {0, 50, 50, 0, 1, images_minibosstreddleft6_1046_0_0, 1};
static Animation anim_minibosstreddleft6_1046_0 = {&direction_minibosstreddleft6_1046_0_0, &direction_minibosstreddleft6_1046_0_0, &direction_minibosstreddleft6_1046_0_0, &direction_minibosstreddleft6_1046_0_0, &direction_minibosstreddleft6_1046_0_0, &direction_minibosstreddleft6_1046_0_0, &direction_minibosstreddleft6_1046_0_0, &direction_minibosstreddleft6_1046_0_0, &direction_minibosstreddleft6_1046_0_0, &direction_minibosstreddleft6_1046_0_0, &direction_minibosstreddleft6_1046_0_0, &direction_minibosstreddleft6_1046_0_0, &direction_minibosstreddleft6_1046_0_0, &direction_minibosstreddleft6_1046_0_0, &direction_minibosstreddleft6_1046_0_0, &direction_minibosstreddleft6_1046_0_0, NULL, &direction_minibosstreddleft6_1046_0_0, &direction_minibosstreddleft6_1046_0_0, &direction_minibosstreddleft6_1046_0_0, &direction_minibosstreddleft6_1046_0_0, &direction_minibosstreddleft6_1046_0_0, &direction_minibosstreddleft6_1046_0_0, &direction_minibosstreddleft6_1046_0_0, &direction_minibosstreddleft6_1046_0_0, &direction_minibosstreddleft6_1046_0_0, &direction_minibosstreddleft6_1046_0_0, &direction_minibosstreddleft6_1046_0_0, &direction_minibosstreddleft6_1046_0_0, &direction_minibosstreddleft6_1046_0_0, &direction_minibosstreddleft6_1046_0_0, &direction_minibosstreddleft6_1046_0_0};
static Animation * anim_array_minibosstreddleft6_1046[1] = {&anim_minibosstreddleft6_1046_0};
static Animations anim_minibosstreddleft6_1046 = {1, &anim_array_minibosstreddleft6_1046[0]};
static bool anim_minibosstreddleft6_1046_initialized;
class MinibossTreddLeft6_1046 : public Active
{
public:
    MinibossTreddLeft6_1046(int x, int y) : Active(x, y, MinibossTreddLeft6_1046_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Miniboss_TreddLeft 6", 20);
#endif
        this->animations = &anim_minibosstreddleft6_1046;
        if (!anim_minibosstreddleft6_1046_initialized) {
            anim_minibosstreddleft6_1046_initialized = true;
            images_minibosstreddleft6_1046_0_0[0] = get_internal_image(2063);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 4);
        alterables->values.set(1, -16);
    }
};
FrameObject * create_minibosstreddleft6_1046(int x, int y)
{
    return new (Active::pool.create()) MinibossTreddLeft6_1046(x, y);
}
static Image* images_minibosstreddleft4_1047_0_0[1];
static Direction direction_minibosstreddleft4_1047_0_0 = {0, 50, 50, 0, 1, images_minibosstreddleft4_1047_0_0, 1};
static Animation anim_minibosstreddleft4_1047_0 = {&direction_minibosstreddleft4_1047_0_0, &direction_minibosstreddleft4_1047_0_0, &direction_minibosstreddleft4_1047_0_0, &direction_minibosstreddleft4_1047_0_0, &direction_minibosstreddleft4_1047_0_0, &direction_minibosstreddleft4_1047_0_0, &direction_minibosstreddleft4_1047_0_0, &direction_minibosstreddleft4_1047_0_0, &direction_minibosstreddleft4_1047_0_0, &direction_minibosstreddleft4_1047_0_0, &direction_minibosstreddleft4_1047_0_0, &direction_minibosstreddleft4_1047_0_0, &direction_minibosstreddleft4_1047_0_0, &direction_minibosstreddleft4_1047_0_0, &direction_minibosstreddleft4_1047_0_0, &direction_minibosstreddleft4_1047_0_0, NULL, &direction_minibosstreddleft4_1047_0_0, &direction_minibosstreddleft4_1047_0_0, &direction_minibosstreddleft4_1047_0_0, &direction_minibosstreddleft4_1047_0_0, &direction_minibosstreddleft4_1047_0_0, &direction_minibosstreddleft4_1047_0_0, &direction_minibosstreddleft4_1047_0_0, &direction_minibosstreddleft4_1047_0_0, &direction_minibosstreddleft4_1047_0_0, &direction_minibosstreddleft4_1047_0_0, &direction_minibosstreddleft4_1047_0_0, &direction_minibosstreddleft4_1047_0_0, &direction_minibosstreddleft4_1047_0_0, &direction_minibosstreddleft4_1047_0_0, &direction_minibosstreddleft4_1047_0_0};
static Animation * anim_array_minibosstreddleft4_1047[1] = {&anim_minibosstreddleft4_1047_0};
static Animations anim_minibosstreddleft4_1047 = {1, &anim_array_minibosstreddleft4_1047[0]};
static bool anim_minibosstreddleft4_1047_initialized;
class MinibossTreddLeft4_1047 : public Active
{
public:
    MinibossTreddLeft4_1047(int x, int y) : Active(x, y, MinibossTreddLeft4_1047_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Miniboss_TreddLeft 4", 20);
#endif
        this->animations = &anim_minibosstreddleft4_1047;
        if (!anim_minibosstreddleft4_1047_initialized) {
            anim_minibosstreddleft4_1047_initialized = true;
            images_minibosstreddleft4_1047_0_0[0] = get_internal_image(1760);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 4);
        alterables->values.set(1, -24);
    }
};
FrameObject * create_minibosstreddleft4_1047(int x, int y)
{
    return new (Active::pool.create()) MinibossTreddLeft4_1047(x, y);
}
static Image* images_minibosstreddleft5_1048_0_0[1];
static Direction direction_minibosstreddleft5_1048_0_0 = {0, 50, 50, 0, 1, images_minibosstreddleft5_1048_0_0, 1};
static Animation anim_minibosstreddleft5_1048_0 = {&direction_minibosstreddleft5_1048_0_0, &direction_minibosstreddleft5_1048_0_0, &direction_minibosstreddleft5_1048_0_0, &direction_minibosstreddleft5_1048_0_0, &direction_minibosstreddleft5_1048_0_0, &direction_minibosstreddleft5_1048_0_0, &direction_minibosstreddleft5_1048_0_0, &direction_minibosstreddleft5_1048_0_0, &direction_minibosstreddleft5_1048_0_0, &direction_minibosstreddleft5_1048_0_0, &direction_minibosstreddleft5_1048_0_0, &direction_minibosstreddleft5_1048_0_0, &direction_minibosstreddleft5_1048_0_0, &direction_minibosstreddleft5_1048_0_0, &direction_minibosstreddleft5_1048_0_0, &direction_minibosstreddleft5_1048_0_0, NULL, &direction_minibosstreddleft5_1048_0_0, &direction_minibosstreddleft5_1048_0_0, &direction_minibosstreddleft5_1048_0_0, &direction_minibosstreddleft5_1048_0_0, &direction_minibosstreddleft5_1048_0_0, &direction_minibosstreddleft5_1048_0_0, &direction_minibosstreddleft5_1048_0_0, &direction_minibosstreddleft5_1048_0_0, &direction_minibosstreddleft5_1048_0_0, &direction_minibosstreddleft5_1048_0_0, &direction_minibosstreddleft5_1048_0_0, &direction_minibosstreddleft5_1048_0_0, &direction_minibosstreddleft5_1048_0_0, &direction_minibosstreddleft5_1048_0_0, &direction_minibosstreddleft5_1048_0_0};
static Animation * anim_array_minibosstreddleft5_1048[1] = {&anim_minibosstreddleft5_1048_0};
static Animations anim_minibosstreddleft5_1048 = {1, &anim_array_minibosstreddleft5_1048[0]};
static bool anim_minibosstreddleft5_1048_initialized;
class MinibossTreddLeft5_1048 : public Active
{
public:
    MinibossTreddLeft5_1048(int x, int y) : Active(x, y, MinibossTreddLeft5_1048_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Miniboss_TreddLeft 5", 20);
#endif
        this->animations = &anim_minibosstreddleft5_1048;
        if (!anim_minibosstreddleft5_1048_initialized) {
            anim_minibosstreddleft5_1048_initialized = true;
            images_minibosstreddleft5_1048_0_0[0] = get_internal_image(2063);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 4);
        alterables->values.set(1, -36);
    }
};
FrameObject * create_minibosstreddleft5_1048(int x, int y)
{
    return new (Active::pool.create()) MinibossTreddLeft5_1048(x, y);
}
static Image* images_minibosstreddleft2_1049_0_0[1];
static Direction direction_minibosstreddleft2_1049_0_0 = {0, 50, 50, 0, 1, images_minibosstreddleft2_1049_0_0, 1};
static Animation anim_minibosstreddleft2_1049_0 = {&direction_minibosstreddleft2_1049_0_0, &direction_minibosstreddleft2_1049_0_0, &direction_minibosstreddleft2_1049_0_0, &direction_minibosstreddleft2_1049_0_0, &direction_minibosstreddleft2_1049_0_0, &direction_minibosstreddleft2_1049_0_0, &direction_minibosstreddleft2_1049_0_0, &direction_minibosstreddleft2_1049_0_0, &direction_minibosstreddleft2_1049_0_0, &direction_minibosstreddleft2_1049_0_0, &direction_minibosstreddleft2_1049_0_0, &direction_minibosstreddleft2_1049_0_0, &direction_minibosstreddleft2_1049_0_0, &direction_minibosstreddleft2_1049_0_0, &direction_minibosstreddleft2_1049_0_0, &direction_minibosstreddleft2_1049_0_0, NULL, &direction_minibosstreddleft2_1049_0_0, &direction_minibosstreddleft2_1049_0_0, &direction_minibosstreddleft2_1049_0_0, &direction_minibosstreddleft2_1049_0_0, &direction_minibosstreddleft2_1049_0_0, &direction_minibosstreddleft2_1049_0_0, &direction_minibosstreddleft2_1049_0_0, &direction_minibosstreddleft2_1049_0_0, &direction_minibosstreddleft2_1049_0_0, &direction_minibosstreddleft2_1049_0_0, &direction_minibosstreddleft2_1049_0_0, &direction_minibosstreddleft2_1049_0_0, &direction_minibosstreddleft2_1049_0_0, &direction_minibosstreddleft2_1049_0_0, &direction_minibosstreddleft2_1049_0_0};
static Animation * anim_array_minibosstreddleft2_1049[1] = {&anim_minibosstreddleft2_1049_0};
static Animations anim_minibosstreddleft2_1049 = {1, &anim_array_minibosstreddleft2_1049[0]};
static bool anim_minibosstreddleft2_1049_initialized;
class MinibossTreddLeft2_1049 : public Active
{
public:
    MinibossTreddLeft2_1049(int x, int y) : Active(x, y, MinibossTreddLeft2_1049_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Miniboss_TreddLeft 2", 20);
#endif
        this->animations = &anim_minibosstreddleft2_1049;
        if (!anim_minibosstreddleft2_1049_initialized) {
            anim_minibosstreddleft2_1049_initialized = true;
            images_minibosstreddleft2_1049_0_0[0] = get_internal_image(2059);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, -48);
    }
};
FrameObject * create_minibosstreddleft2_1049(int x, int y)
{
    return new (Active::pool.create()) MinibossTreddLeft2_1049(x, y);
}
static Image* images_minibosstreddleft3_1050_0_0[1];
static Direction direction_minibosstreddleft3_1050_0_0 = {0, 50, 50, 0, 1, images_minibosstreddleft3_1050_0_0, 1};
static Animation anim_minibosstreddleft3_1050_0 = {&direction_minibosstreddleft3_1050_0_0, &direction_minibosstreddleft3_1050_0_0, &direction_minibosstreddleft3_1050_0_0, &direction_minibosstreddleft3_1050_0_0, &direction_minibosstreddleft3_1050_0_0, &direction_minibosstreddleft3_1050_0_0, &direction_minibosstreddleft3_1050_0_0, &direction_minibosstreddleft3_1050_0_0, &direction_minibosstreddleft3_1050_0_0, &direction_minibosstreddleft3_1050_0_0, &direction_minibosstreddleft3_1050_0_0, &direction_minibosstreddleft3_1050_0_0, &direction_minibosstreddleft3_1050_0_0, &direction_minibosstreddleft3_1050_0_0, &direction_minibosstreddleft3_1050_0_0, &direction_minibosstreddleft3_1050_0_0, NULL, &direction_minibosstreddleft3_1050_0_0, &direction_minibosstreddleft3_1050_0_0, &direction_minibosstreddleft3_1050_0_0, &direction_minibosstreddleft3_1050_0_0, &direction_minibosstreddleft3_1050_0_0, &direction_minibosstreddleft3_1050_0_0, &direction_minibosstreddleft3_1050_0_0, &direction_minibosstreddleft3_1050_0_0, &direction_minibosstreddleft3_1050_0_0, &direction_minibosstreddleft3_1050_0_0, &direction_minibosstreddleft3_1050_0_0, &direction_minibosstreddleft3_1050_0_0, &direction_minibosstreddleft3_1050_0_0, &direction_minibosstreddleft3_1050_0_0, &direction_minibosstreddleft3_1050_0_0};
static Animation * anim_array_minibosstreddleft3_1050[1] = {&anim_minibosstreddleft3_1050_0};
static Animations anim_minibosstreddleft3_1050 = {1, &anim_array_minibosstreddleft3_1050[0]};
static bool anim_minibosstreddleft3_1050_initialized;
class MinibossTreddLeft3_1050 : public Active
{
public:
    MinibossTreddLeft3_1050(int x, int y) : Active(x, y, MinibossTreddLeft3_1050_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Miniboss_TreddLeft 3", 20);
#endif
        this->animations = &anim_minibosstreddleft3_1050;
        if (!anim_minibosstreddleft3_1050_initialized) {
            anim_minibosstreddleft3_1050_initialized = true;
            images_minibosstreddleft3_1050_0_0[0] = get_internal_image(3292);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 4);
        alterables->values.set(1, -48);
    }
};
FrameObject * create_minibosstreddleft3_1050(int x, int y)
{
    return new (Active::pool.create()) MinibossTreddLeft3_1050(x, y);
}
static Image* images_minibosstreddleft1_1051_0_0[1];
static Direction direction_minibosstreddleft1_1051_0_0 = {0, 50, 50, 0, 1, images_minibosstreddleft1_1051_0_0, 1};
static Image* images_minibosstreddleft1_1051_0_8[1];
static Direction direction_minibosstreddleft1_1051_0_8 = {8, 50, 50, 0, 1, images_minibosstreddleft1_1051_0_8, 1};
static Animation anim_minibosstreddleft1_1051_0 = {&direction_minibosstreddleft1_1051_0_0, &direction_minibosstreddleft1_1051_0_0, &direction_minibosstreddleft1_1051_0_0, &direction_minibosstreddleft1_1051_0_0, NULL, &direction_minibosstreddleft1_1051_0_8, &direction_minibosstreddleft1_1051_0_8, &direction_minibosstreddleft1_1051_0_8, &direction_minibosstreddleft1_1051_0_8, &direction_minibosstreddleft1_1051_0_8, &direction_minibosstreddleft1_1051_0_8, &direction_minibosstreddleft1_1051_0_8, &direction_minibosstreddleft1_1051_0_8, &direction_minibosstreddleft1_1051_0_8, &direction_minibosstreddleft1_1051_0_8, &direction_minibosstreddleft1_1051_0_8, &direction_minibosstreddleft1_1051_0_8, &direction_minibosstreddleft1_1051_0_8, &direction_minibosstreddleft1_1051_0_8, &direction_minibosstreddleft1_1051_0_8, NULL, &direction_minibosstreddleft1_1051_0_0, &direction_minibosstreddleft1_1051_0_0, &direction_minibosstreddleft1_1051_0_0, &direction_minibosstreddleft1_1051_0_0, &direction_minibosstreddleft1_1051_0_0, &direction_minibosstreddleft1_1051_0_0, &direction_minibosstreddleft1_1051_0_0, &direction_minibosstreddleft1_1051_0_0, &direction_minibosstreddleft1_1051_0_0, &direction_minibosstreddleft1_1051_0_0, &direction_minibosstreddleft1_1051_0_0};
static Image* images_minibosstreddleft1_1051_7_0[2];
static Direction direction_minibosstreddleft1_1051_7_0 = {0, 25, 25, 0, -1, images_minibosstreddleft1_1051_7_0, 2};
static Animation anim_minibosstreddleft1_1051_7 = {&direction_minibosstreddleft1_1051_7_0, &direction_minibosstreddleft1_1051_7_0, &direction_minibosstreddleft1_1051_7_0, &direction_minibosstreddleft1_1051_7_0, &direction_minibosstreddleft1_1051_7_0, &direction_minibosstreddleft1_1051_7_0, &direction_minibosstreddleft1_1051_7_0, &direction_minibosstreddleft1_1051_7_0, &direction_minibosstreddleft1_1051_7_0, &direction_minibosstreddleft1_1051_7_0, &direction_minibosstreddleft1_1051_7_0, &direction_minibosstreddleft1_1051_7_0, &direction_minibosstreddleft1_1051_7_0, &direction_minibosstreddleft1_1051_7_0, &direction_minibosstreddleft1_1051_7_0, &direction_minibosstreddleft1_1051_7_0, NULL, &direction_minibosstreddleft1_1051_7_0, &direction_minibosstreddleft1_1051_7_0, &direction_minibosstreddleft1_1051_7_0, &direction_minibosstreddleft1_1051_7_0, &direction_minibosstreddleft1_1051_7_0, &direction_minibosstreddleft1_1051_7_0, &direction_minibosstreddleft1_1051_7_0, &direction_minibosstreddleft1_1051_7_0, &direction_minibosstreddleft1_1051_7_0, &direction_minibosstreddleft1_1051_7_0, &direction_minibosstreddleft1_1051_7_0, &direction_minibosstreddleft1_1051_7_0, &direction_minibosstreddleft1_1051_7_0, &direction_minibosstreddleft1_1051_7_0, &direction_minibosstreddleft1_1051_7_0};
static Image* images_minibosstreddleft1_1051_8_0[2];
static Direction direction_minibosstreddleft1_1051_8_0 = {0, 20, 20, 1, 2, images_minibosstreddleft1_1051_8_0, 2};
static Animation anim_minibosstreddleft1_1051_8 = {&direction_minibosstreddleft1_1051_8_0, &direction_minibosstreddleft1_1051_8_0, &direction_minibosstreddleft1_1051_8_0, &direction_minibosstreddleft1_1051_8_0, &direction_minibosstreddleft1_1051_8_0, &direction_minibosstreddleft1_1051_8_0, &direction_minibosstreddleft1_1051_8_0, &direction_minibosstreddleft1_1051_8_0, &direction_minibosstreddleft1_1051_8_0, &direction_minibosstreddleft1_1051_8_0, &direction_minibosstreddleft1_1051_8_0, &direction_minibosstreddleft1_1051_8_0, &direction_minibosstreddleft1_1051_8_0, &direction_minibosstreddleft1_1051_8_0, &direction_minibosstreddleft1_1051_8_0, &direction_minibosstreddleft1_1051_8_0, NULL, &direction_minibosstreddleft1_1051_8_0, &direction_minibosstreddleft1_1051_8_0, &direction_minibosstreddleft1_1051_8_0, &direction_minibosstreddleft1_1051_8_0, &direction_minibosstreddleft1_1051_8_0, &direction_minibosstreddleft1_1051_8_0, &direction_minibosstreddleft1_1051_8_0, &direction_minibosstreddleft1_1051_8_0, &direction_minibosstreddleft1_1051_8_0, &direction_minibosstreddleft1_1051_8_0, &direction_minibosstreddleft1_1051_8_0, &direction_minibosstreddleft1_1051_8_0, &direction_minibosstreddleft1_1051_8_0, &direction_minibosstreddleft1_1051_8_0, &direction_minibosstreddleft1_1051_8_0};
static Animation * anim_array_minibosstreddleft1_1051[9] = {&anim_minibosstreddleft1_1051_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_minibosstreddleft1_1051_7, &anim_minibosstreddleft1_1051_8};
static Animations anim_minibosstreddleft1_1051 = {9, &anim_array_minibosstreddleft1_1051[0]};
static bool anim_minibosstreddleft1_1051_initialized;
class MinibossTreddLeft1_1051 : public Active
{
public:
    MinibossTreddLeft1_1051(int x, int y) : Active(x, y, MinibossTreddLeft1_1051_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Miniboss_TreddLeft 1", 20);
#endif
        this->animations = &anim_minibosstreddleft1_1051;
        if (!anim_minibosstreddleft1_1051_initialized) {
            anim_minibosstreddleft1_1051_initialized = true;
            images_minibosstreddleft1_1051_0_0[0] = get_internal_image(3479);
            images_minibosstreddleft1_1051_0_8[0] = get_internal_image(3478);
            images_minibosstreddleft1_1051_7_0[0] = get_internal_image(3478);
            images_minibosstreddleft1_1051_7_0[1] = get_internal_image(3482);
            images_minibosstreddleft1_1051_8_0[0] = get_internal_image(3479);
            images_minibosstreddleft1_1051_8_0[1] = get_internal_image(3481);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(8);
        create_alterables();
        alterables->values.set(0, 4);
        alterables->values.set(1, -48);
    }
};
FrameObject * create_minibosstreddleft1_1051(int x, int y)
{
    return new (Active::pool.create()) MinibossTreddLeft1_1051(x, y);
}
static Image* images_gimmickboulder_1052_0_0[1];
static Direction direction_gimmickboulder_1052_0_0 = {0, 50, 50, 0, 1, images_gimmickboulder_1052_0_0, 1};
static Image* images_gimmickboulder_1052_0_1[1];
static Direction direction_gimmickboulder_1052_0_1 = {1, 50, 50, 0, 1, images_gimmickboulder_1052_0_1, 1};
static Image* images_gimmickboulder_1052_0_2[1];
static Direction direction_gimmickboulder_1052_0_2 = {2, 50, 50, 0, 1, images_gimmickboulder_1052_0_2, 1};
static Image* images_gimmickboulder_1052_0_3[1];
static Direction direction_gimmickboulder_1052_0_3 = {3, 50, 50, 0, 1, images_gimmickboulder_1052_0_3, 1};
static Animation anim_gimmickboulder_1052_0 = {&direction_gimmickboulder_1052_0_0, &direction_gimmickboulder_1052_0_1, &direction_gimmickboulder_1052_0_2, &direction_gimmickboulder_1052_0_3, &direction_gimmickboulder_1052_0_3, &direction_gimmickboulder_1052_0_3, &direction_gimmickboulder_1052_0_3, &direction_gimmickboulder_1052_0_3, &direction_gimmickboulder_1052_0_3, &direction_gimmickboulder_1052_0_3, &direction_gimmickboulder_1052_0_3, &direction_gimmickboulder_1052_0_3, &direction_gimmickboulder_1052_0_3, &direction_gimmickboulder_1052_0_3, &direction_gimmickboulder_1052_0_3, &direction_gimmickboulder_1052_0_3, &direction_gimmickboulder_1052_0_3, &direction_gimmickboulder_1052_0_3, &direction_gimmickboulder_1052_0_0, &direction_gimmickboulder_1052_0_0, &direction_gimmickboulder_1052_0_0, &direction_gimmickboulder_1052_0_0, &direction_gimmickboulder_1052_0_0, &direction_gimmickboulder_1052_0_0, &direction_gimmickboulder_1052_0_0, &direction_gimmickboulder_1052_0_0, &direction_gimmickboulder_1052_0_0, &direction_gimmickboulder_1052_0_0, &direction_gimmickboulder_1052_0_0, &direction_gimmickboulder_1052_0_0, &direction_gimmickboulder_1052_0_0, &direction_gimmickboulder_1052_0_0};
static Animation * anim_array_gimmickboulder_1052[1] = {&anim_gimmickboulder_1052_0};
static Animations anim_gimmickboulder_1052 = {1, &anim_array_gimmickboulder_1052[0]};
static bool anim_gimmickboulder_1052_initialized;
class GimmickBoulder_1052 : public Active
{
public:
    GimmickBoulder_1052(int x, int y) : Active(x, y, GimmickBoulder_1052_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Gimmick_Boulder", 15);
#endif
        this->animations = &anim_gimmickboulder_1052;
        if (!anim_gimmickboulder_1052_initialized) {
            anim_gimmickboulder_1052_initialized = true;
            images_gimmickboulder_1052_0_0[0] = get_internal_image(252);
            images_gimmickboulder_1052_0_1[0] = get_internal_image(683);
            images_gimmickboulder_1052_0_2[0] = get_internal_image(685);
            images_gimmickboulder_1052_0_3[0] = get_internal_image(687);
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
FrameObject * create_gimmickboulder_1052(int x, int y)
{
    return new (Active::pool.create()) GimmickBoulder_1052(x, y);
}
static Image* images_switchwallplate_1053_0_0[1];
static Direction direction_switchwallplate_1053_0_0 = {0, 50, 50, 0, 1, images_switchwallplate_1053_0_0, 1};
static Animation anim_switchwallplate_1053_0 = {&direction_switchwallplate_1053_0_0, &direction_switchwallplate_1053_0_0, &direction_switchwallplate_1053_0_0, &direction_switchwallplate_1053_0_0, &direction_switchwallplate_1053_0_0, &direction_switchwallplate_1053_0_0, &direction_switchwallplate_1053_0_0, &direction_switchwallplate_1053_0_0, &direction_switchwallplate_1053_0_0, &direction_switchwallplate_1053_0_0, &direction_switchwallplate_1053_0_0, &direction_switchwallplate_1053_0_0, &direction_switchwallplate_1053_0_0, &direction_switchwallplate_1053_0_0, &direction_switchwallplate_1053_0_0, &direction_switchwallplate_1053_0_0, NULL, &direction_switchwallplate_1053_0_0, &direction_switchwallplate_1053_0_0, &direction_switchwallplate_1053_0_0, &direction_switchwallplate_1053_0_0, &direction_switchwallplate_1053_0_0, &direction_switchwallplate_1053_0_0, &direction_switchwallplate_1053_0_0, &direction_switchwallplate_1053_0_0, &direction_switchwallplate_1053_0_0, &direction_switchwallplate_1053_0_0, &direction_switchwallplate_1053_0_0, &direction_switchwallplate_1053_0_0, &direction_switchwallplate_1053_0_0, &direction_switchwallplate_1053_0_0, &direction_switchwallplate_1053_0_0};
static Animation * anim_array_switchwallplate_1053[1] = {&anim_switchwallplate_1053_0};
static Animations anim_switchwallplate_1053 = {1, &anim_array_switchwallplate_1053[0]};
static bool anim_switchwallplate_1053_initialized;
class SwitchWallPlate_1053 : public Active
{
public:
    SwitchWallPlate_1053(int x, int y) : Active(x, y, SwitchWallPlate_1053_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Switch_WallPlate", 16);
#endif
        this->animations = &anim_switchwallplate_1053;
        if (!anim_switchwallplate_1053_initialized) {
            anim_switchwallplate_1053_initialized = true;
            images_switchwallplate_1053_0_0[0] = get_internal_image(680);
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
FrameObject * create_switchwallplate_1053(int x, int y)
{
    return new (Active::pool.create()) SwitchWallPlate_1053(x, y);
}
static Image* images_switchtrapdoor_1054_0_0[1];
static Direction direction_switchtrapdoor_1054_0_0 = {0, 50, 50, 0, 1, images_switchtrapdoor_1054_0_0, 1};
static Animation anim_switchtrapdoor_1054_0 = {&direction_switchtrapdoor_1054_0_0, &direction_switchtrapdoor_1054_0_0, &direction_switchtrapdoor_1054_0_0, &direction_switchtrapdoor_1054_0_0, &direction_switchtrapdoor_1054_0_0, &direction_switchtrapdoor_1054_0_0, &direction_switchtrapdoor_1054_0_0, &direction_switchtrapdoor_1054_0_0, &direction_switchtrapdoor_1054_0_0, &direction_switchtrapdoor_1054_0_0, &direction_switchtrapdoor_1054_0_0, &direction_switchtrapdoor_1054_0_0, &direction_switchtrapdoor_1054_0_0, &direction_switchtrapdoor_1054_0_0, &direction_switchtrapdoor_1054_0_0, &direction_switchtrapdoor_1054_0_0, NULL, &direction_switchtrapdoor_1054_0_0, &direction_switchtrapdoor_1054_0_0, &direction_switchtrapdoor_1054_0_0, &direction_switchtrapdoor_1054_0_0, &direction_switchtrapdoor_1054_0_0, &direction_switchtrapdoor_1054_0_0, &direction_switchtrapdoor_1054_0_0, &direction_switchtrapdoor_1054_0_0, &direction_switchtrapdoor_1054_0_0, &direction_switchtrapdoor_1054_0_0, &direction_switchtrapdoor_1054_0_0, &direction_switchtrapdoor_1054_0_0, &direction_switchtrapdoor_1054_0_0, &direction_switchtrapdoor_1054_0_0, &direction_switchtrapdoor_1054_0_0};
static Animation * anim_array_switchtrapdoor_1054[1] = {&anim_switchtrapdoor_1054_0};
static Animations anim_switchtrapdoor_1054 = {1, &anim_array_switchtrapdoor_1054[0]};
static bool anim_switchtrapdoor_1054_initialized;
class SwitchTrapDoor_1054 : public Active
{
public:
    SwitchTrapDoor_1054(int x, int y) : Active(x, y, SwitchTrapDoor_1054_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Switch_TrapDoor", 15);
#endif
        this->animations = &anim_switchtrapdoor_1054;
        if (!anim_switchtrapdoor_1054_initialized) {
            anim_switchtrapdoor_1054_initialized = true;
            images_switchtrapdoor_1054_0_0[0] = get_internal_image(2353);
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
FrameObject * create_switchtrapdoor_1054(int x, int y)
{
    return new (Active::pool.create()) SwitchTrapDoor_1054(x, y);
}
static Image* images_switchdoor_1055_0_0[1];
static Direction direction_switchdoor_1055_0_0 = {0, 50, 50, 0, 1, images_switchdoor_1055_0_0, 1};
static Animation anim_switchdoor_1055_0 = {&direction_switchdoor_1055_0_0, &direction_switchdoor_1055_0_0, &direction_switchdoor_1055_0_0, &direction_switchdoor_1055_0_0, &direction_switchdoor_1055_0_0, &direction_switchdoor_1055_0_0, &direction_switchdoor_1055_0_0, &direction_switchdoor_1055_0_0, &direction_switchdoor_1055_0_0, &direction_switchdoor_1055_0_0, &direction_switchdoor_1055_0_0, &direction_switchdoor_1055_0_0, &direction_switchdoor_1055_0_0, &direction_switchdoor_1055_0_0, &direction_switchdoor_1055_0_0, &direction_switchdoor_1055_0_0, NULL, &direction_switchdoor_1055_0_0, &direction_switchdoor_1055_0_0, &direction_switchdoor_1055_0_0, &direction_switchdoor_1055_0_0, &direction_switchdoor_1055_0_0, &direction_switchdoor_1055_0_0, &direction_switchdoor_1055_0_0, &direction_switchdoor_1055_0_0, &direction_switchdoor_1055_0_0, &direction_switchdoor_1055_0_0, &direction_switchdoor_1055_0_0, &direction_switchdoor_1055_0_0, &direction_switchdoor_1055_0_0, &direction_switchdoor_1055_0_0, &direction_switchdoor_1055_0_0};
static Animation * anim_array_switchdoor_1055[1] = {&anim_switchdoor_1055_0};
static Animations anim_switchdoor_1055 = {1, &anim_array_switchdoor_1055[0]};
static bool anim_switchdoor_1055_initialized;
class SwitchDoor_1055 : public Active
{
public:
    SwitchDoor_1055(int x, int y) : Active(x, y, SwitchDoor_1055_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Switch_Door", 11);
#endif
        this->animations = &anim_switchdoor_1055;
        if (!anim_switchdoor_1055_initialized) {
            anim_switchdoor_1055_initialized = true;
            images_switchdoor_1055_0_0[0] = get_internal_image(633);
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
FrameObject * create_switchdoor_1055(int x, int y)
{
    return new (Active::pool.create()) SwitchDoor_1055(x, y);
}
static Image* images_gimmickbamboospike3_1056_0_0[1];
static Direction direction_gimmickbamboospike3_1056_0_0 = {0, 50, 50, 0, 1, images_gimmickbamboospike3_1056_0_0, 1};
static Animation anim_gimmickbamboospike3_1056_0 = {&direction_gimmickbamboospike3_1056_0_0, &direction_gimmickbamboospike3_1056_0_0, &direction_gimmickbamboospike3_1056_0_0, &direction_gimmickbamboospike3_1056_0_0, &direction_gimmickbamboospike3_1056_0_0, &direction_gimmickbamboospike3_1056_0_0, &direction_gimmickbamboospike3_1056_0_0, &direction_gimmickbamboospike3_1056_0_0, &direction_gimmickbamboospike3_1056_0_0, &direction_gimmickbamboospike3_1056_0_0, &direction_gimmickbamboospike3_1056_0_0, &direction_gimmickbamboospike3_1056_0_0, &direction_gimmickbamboospike3_1056_0_0, &direction_gimmickbamboospike3_1056_0_0, &direction_gimmickbamboospike3_1056_0_0, &direction_gimmickbamboospike3_1056_0_0, NULL, &direction_gimmickbamboospike3_1056_0_0, &direction_gimmickbamboospike3_1056_0_0, &direction_gimmickbamboospike3_1056_0_0, &direction_gimmickbamboospike3_1056_0_0, &direction_gimmickbamboospike3_1056_0_0, &direction_gimmickbamboospike3_1056_0_0, &direction_gimmickbamboospike3_1056_0_0, &direction_gimmickbamboospike3_1056_0_0, &direction_gimmickbamboospike3_1056_0_0, &direction_gimmickbamboospike3_1056_0_0, &direction_gimmickbamboospike3_1056_0_0, &direction_gimmickbamboospike3_1056_0_0, &direction_gimmickbamboospike3_1056_0_0, &direction_gimmickbamboospike3_1056_0_0, &direction_gimmickbamboospike3_1056_0_0};
static Animation * anim_array_gimmickbamboospike3_1056[1] = {&anim_gimmickbamboospike3_1056_0};
static Animations anim_gimmickbamboospike3_1056 = {1, &anim_array_gimmickbamboospike3_1056[0]};
static bool anim_gimmickbamboospike3_1056_initialized;
class GimmickBambooSpike3_1056 : public Active
{
public:
    GimmickBambooSpike3_1056(int x, int y) : Active(x, y, GimmickBambooSpike3_1056_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Gimmick_BambooSpike 3", 21);
#endif
        this->animations = &anim_gimmickbamboospike3_1056;
        if (!anim_gimmickbamboospike3_1056_initialized) {
            anim_gimmickbamboospike3_1056_initialized = true;
            images_gimmickbamboospike3_1056_0_0[0] = get_internal_image(3480);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 4);
        alterables->values.set(1, -24);
    }
};
FrameObject * create_gimmickbamboospike3_1056(int x, int y)
{
    return new (Active::pool.create()) GimmickBambooSpike3_1056(x, y);
}
static Image* images_gimmickbamboospike2_1057_0_0[4];
static Direction direction_gimmickbamboospike2_1057_0_0 = {0, 15, 15, 0, -1, images_gimmickbamboospike2_1057_0_0, 4};
static Animation anim_gimmickbamboospike2_1057_0 = {&direction_gimmickbamboospike2_1057_0_0, &direction_gimmickbamboospike2_1057_0_0, &direction_gimmickbamboospike2_1057_0_0, &direction_gimmickbamboospike2_1057_0_0, &direction_gimmickbamboospike2_1057_0_0, &direction_gimmickbamboospike2_1057_0_0, &direction_gimmickbamboospike2_1057_0_0, &direction_gimmickbamboospike2_1057_0_0, &direction_gimmickbamboospike2_1057_0_0, &direction_gimmickbamboospike2_1057_0_0, &direction_gimmickbamboospike2_1057_0_0, &direction_gimmickbamboospike2_1057_0_0, &direction_gimmickbamboospike2_1057_0_0, &direction_gimmickbamboospike2_1057_0_0, &direction_gimmickbamboospike2_1057_0_0, &direction_gimmickbamboospike2_1057_0_0, NULL, &direction_gimmickbamboospike2_1057_0_0, &direction_gimmickbamboospike2_1057_0_0, &direction_gimmickbamboospike2_1057_0_0, &direction_gimmickbamboospike2_1057_0_0, &direction_gimmickbamboospike2_1057_0_0, &direction_gimmickbamboospike2_1057_0_0, &direction_gimmickbamboospike2_1057_0_0, &direction_gimmickbamboospike2_1057_0_0, &direction_gimmickbamboospike2_1057_0_0, &direction_gimmickbamboospike2_1057_0_0, &direction_gimmickbamboospike2_1057_0_0, &direction_gimmickbamboospike2_1057_0_0, &direction_gimmickbamboospike2_1057_0_0, &direction_gimmickbamboospike2_1057_0_0, &direction_gimmickbamboospike2_1057_0_0};
static Animation * anim_array_gimmickbamboospike2_1057[1] = {&anim_gimmickbamboospike2_1057_0};
static Animations anim_gimmickbamboospike2_1057 = {1, &anim_array_gimmickbamboospike2_1057[0]};
static bool anim_gimmickbamboospike2_1057_initialized;
class GimmickBambooSpike2_1057 : public Active
{
public:
    GimmickBambooSpike2_1057(int x, int y) : Active(x, y, GimmickBambooSpike2_1057_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Gimmick_BambooSpike 2", 21);
#endif
        this->animations = &anim_gimmickbamboospike2_1057;
        if (!anim_gimmickbamboospike2_1057_initialized) {
            anim_gimmickbamboospike2_1057_initialized = true;
            images_gimmickbamboospike2_1057_0_0[0] = get_internal_image(3484);
            images_gimmickbamboospike2_1057_0_0[1] = get_internal_image(3485);
            images_gimmickbamboospike2_1057_0_0[2] = get_internal_image(3486);
            images_gimmickbamboospike2_1057_0_0[3] = get_internal_image(3487);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 4);
        alterables->values.set(1, -24);
    }
};
FrameObject * create_gimmickbamboospike2_1057(int x, int y)
{
    return new (Active::pool.create()) GimmickBambooSpike2_1057(x, y);
}
static Image* images_gimmickbamboospike4_1058_0_0[1];
static Direction direction_gimmickbamboospike4_1058_0_0 = {0, 15, 15, 0, -1, images_gimmickbamboospike4_1058_0_0, 1};
static Animation anim_gimmickbamboospike4_1058_0 = {&direction_gimmickbamboospike4_1058_0_0, &direction_gimmickbamboospike4_1058_0_0, &direction_gimmickbamboospike4_1058_0_0, &direction_gimmickbamboospike4_1058_0_0, &direction_gimmickbamboospike4_1058_0_0, &direction_gimmickbamboospike4_1058_0_0, &direction_gimmickbamboospike4_1058_0_0, &direction_gimmickbamboospike4_1058_0_0, &direction_gimmickbamboospike4_1058_0_0, &direction_gimmickbamboospike4_1058_0_0, &direction_gimmickbamboospike4_1058_0_0, &direction_gimmickbamboospike4_1058_0_0, &direction_gimmickbamboospike4_1058_0_0, &direction_gimmickbamboospike4_1058_0_0, &direction_gimmickbamboospike4_1058_0_0, &direction_gimmickbamboospike4_1058_0_0, NULL, &direction_gimmickbamboospike4_1058_0_0, &direction_gimmickbamboospike4_1058_0_0, &direction_gimmickbamboospike4_1058_0_0, &direction_gimmickbamboospike4_1058_0_0, &direction_gimmickbamboospike4_1058_0_0, &direction_gimmickbamboospike4_1058_0_0, &direction_gimmickbamboospike4_1058_0_0, &direction_gimmickbamboospike4_1058_0_0, &direction_gimmickbamboospike4_1058_0_0, &direction_gimmickbamboospike4_1058_0_0, &direction_gimmickbamboospike4_1058_0_0, &direction_gimmickbamboospike4_1058_0_0, &direction_gimmickbamboospike4_1058_0_0, &direction_gimmickbamboospike4_1058_0_0, &direction_gimmickbamboospike4_1058_0_0};
static Animation * anim_array_gimmickbamboospike4_1058[1] = {&anim_gimmickbamboospike4_1058_0};
static Animations anim_gimmickbamboospike4_1058 = {1, &anim_array_gimmickbamboospike4_1058[0]};
static bool anim_gimmickbamboospike4_1058_initialized;
class GimmickBambooSpike4_1058 : public Active
{
public:
    GimmickBambooSpike4_1058(int x, int y) : Active(x, y, GimmickBambooSpike4_1058_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Gimmick_BambooSpike 4", 21);
#endif
        this->animations = &anim_gimmickbamboospike4_1058;
        if (!anim_gimmickbamboospike4_1058_initialized) {
            anim_gimmickbamboospike4_1058_initialized = true;
            images_gimmickbamboospike4_1058_0_0[0] = get_internal_image(3488);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 4);
        alterables->values.set(1, -24);
    }
};
FrameObject * create_gimmickbamboospike4_1058(int x, int y)
{
    return new (Active::pool.create()) GimmickBambooSpike4_1058(x, y);
}
static Image* images_enemytreddpushleft2_1059_0_0[1];
static Direction direction_enemytreddpushleft2_1059_0_0 = {0, 50, 50, 0, 1, images_enemytreddpushleft2_1059_0_0, 1};
static Animation anim_enemytreddpushleft2_1059_0 = {&direction_enemytreddpushleft2_1059_0_0, &direction_enemytreddpushleft2_1059_0_0, &direction_enemytreddpushleft2_1059_0_0, &direction_enemytreddpushleft2_1059_0_0, &direction_enemytreddpushleft2_1059_0_0, &direction_enemytreddpushleft2_1059_0_0, &direction_enemytreddpushleft2_1059_0_0, &direction_enemytreddpushleft2_1059_0_0, &direction_enemytreddpushleft2_1059_0_0, &direction_enemytreddpushleft2_1059_0_0, &direction_enemytreddpushleft2_1059_0_0, &direction_enemytreddpushleft2_1059_0_0, &direction_enemytreddpushleft2_1059_0_0, &direction_enemytreddpushleft2_1059_0_0, &direction_enemytreddpushleft2_1059_0_0, &direction_enemytreddpushleft2_1059_0_0, NULL, &direction_enemytreddpushleft2_1059_0_0, &direction_enemytreddpushleft2_1059_0_0, &direction_enemytreddpushleft2_1059_0_0, &direction_enemytreddpushleft2_1059_0_0, &direction_enemytreddpushleft2_1059_0_0, &direction_enemytreddpushleft2_1059_0_0, &direction_enemytreddpushleft2_1059_0_0, &direction_enemytreddpushleft2_1059_0_0, &direction_enemytreddpushleft2_1059_0_0, &direction_enemytreddpushleft2_1059_0_0, &direction_enemytreddpushleft2_1059_0_0, &direction_enemytreddpushleft2_1059_0_0, &direction_enemytreddpushleft2_1059_0_0, &direction_enemytreddpushleft2_1059_0_0, &direction_enemytreddpushleft2_1059_0_0};
static Animation * anim_array_enemytreddpushleft2_1059[1] = {&anim_enemytreddpushleft2_1059_0};
static Animations anim_enemytreddpushleft2_1059 = {1, &anim_array_enemytreddpushleft2_1059[0]};
static bool anim_enemytreddpushleft2_1059_initialized;
class EnemyTreddPushLeft2_1059 : public Active
{
public:
    EnemyTreddPushLeft2_1059(int x, int y) : Active(x, y, EnemyTreddPushLeft2_1059_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_TreddPushLeft 2", 21);
#endif
        set_visible(false);
        this->animations = &anim_enemytreddpushleft2_1059;
        if (!anim_enemytreddpushleft2_1059_initialized) {
            anim_enemytreddpushleft2_1059_initialized = true;
            images_enemytreddpushleft2_1059_0_0[0] = get_internal_image(14403);
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
FrameObject * create_enemytreddpushleft2_1059(int x, int y)
{
    return new (Active::pool.create()) EnemyTreddPushLeft2_1059(x, y);
}
static Image* images_enemytreddpushleft_1060_0_0[1];
static Direction direction_enemytreddpushleft_1060_0_0 = {0, 50, 50, 0, 1, images_enemytreddpushleft_1060_0_0, 1};
static Animation anim_enemytreddpushleft_1060_0 = {&direction_enemytreddpushleft_1060_0_0, &direction_enemytreddpushleft_1060_0_0, &direction_enemytreddpushleft_1060_0_0, &direction_enemytreddpushleft_1060_0_0, &direction_enemytreddpushleft_1060_0_0, &direction_enemytreddpushleft_1060_0_0, &direction_enemytreddpushleft_1060_0_0, &direction_enemytreddpushleft_1060_0_0, &direction_enemytreddpushleft_1060_0_0, &direction_enemytreddpushleft_1060_0_0, &direction_enemytreddpushleft_1060_0_0, &direction_enemytreddpushleft_1060_0_0, &direction_enemytreddpushleft_1060_0_0, &direction_enemytreddpushleft_1060_0_0, &direction_enemytreddpushleft_1060_0_0, &direction_enemytreddpushleft_1060_0_0, NULL, &direction_enemytreddpushleft_1060_0_0, &direction_enemytreddpushleft_1060_0_0, &direction_enemytreddpushleft_1060_0_0, &direction_enemytreddpushleft_1060_0_0, &direction_enemytreddpushleft_1060_0_0, &direction_enemytreddpushleft_1060_0_0, &direction_enemytreddpushleft_1060_0_0, &direction_enemytreddpushleft_1060_0_0, &direction_enemytreddpushleft_1060_0_0, &direction_enemytreddpushleft_1060_0_0, &direction_enemytreddpushleft_1060_0_0, &direction_enemytreddpushleft_1060_0_0, &direction_enemytreddpushleft_1060_0_0, &direction_enemytreddpushleft_1060_0_0, &direction_enemytreddpushleft_1060_0_0};
static Animation * anim_array_enemytreddpushleft_1060[1] = {&anim_enemytreddpushleft_1060_0};
static Animations anim_enemytreddpushleft_1060 = {1, &anim_array_enemytreddpushleft_1060[0]};
static bool anim_enemytreddpushleft_1060_initialized;
class EnemyTreddPushLeft_1060 : public Active
{
public:
    EnemyTreddPushLeft_1060(int x, int y) : Active(x, y, EnemyTreddPushLeft_1060_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_TreddPushLeft", 19);
#endif
        set_visible(false);
        this->animations = &anim_enemytreddpushleft_1060;
        if (!anim_enemytreddpushleft_1060_initialized) {
            anim_enemytreddpushleft_1060_initialized = true;
            images_enemytreddpushleft_1060_0_0[0] = get_internal_image(14402);
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
FrameObject * create_enemytreddpushleft_1060(int x, int y)
{
    return new (Active::pool.create()) EnemyTreddPushLeft_1060(x, y);
}
static Image* images_waterfallfront_1061_0_0[8];
static Direction direction_waterfallfront_1061_0_0 = {0, 50, 50, 0, -1, images_waterfallfront_1061_0_0, 8};
static Animation anim_waterfallfront_1061_0 = {&direction_waterfallfront_1061_0_0, &direction_waterfallfront_1061_0_0, &direction_waterfallfront_1061_0_0, &direction_waterfallfront_1061_0_0, &direction_waterfallfront_1061_0_0, &direction_waterfallfront_1061_0_0, &direction_waterfallfront_1061_0_0, &direction_waterfallfront_1061_0_0, &direction_waterfallfront_1061_0_0, &direction_waterfallfront_1061_0_0, &direction_waterfallfront_1061_0_0, &direction_waterfallfront_1061_0_0, &direction_waterfallfront_1061_0_0, &direction_waterfallfront_1061_0_0, &direction_waterfallfront_1061_0_0, &direction_waterfallfront_1061_0_0, NULL, &direction_waterfallfront_1061_0_0, &direction_waterfallfront_1061_0_0, &direction_waterfallfront_1061_0_0, &direction_waterfallfront_1061_0_0, &direction_waterfallfront_1061_0_0, &direction_waterfallfront_1061_0_0, &direction_waterfallfront_1061_0_0, &direction_waterfallfront_1061_0_0, &direction_waterfallfront_1061_0_0, &direction_waterfallfront_1061_0_0, &direction_waterfallfront_1061_0_0, &direction_waterfallfront_1061_0_0, &direction_waterfallfront_1061_0_0, &direction_waterfallfront_1061_0_0, &direction_waterfallfront_1061_0_0};
static Animation * anim_array_waterfallfront_1061[1] = {&anim_waterfallfront_1061_0};
static Animations anim_waterfallfront_1061 = {1, &anim_array_waterfallfront_1061[0]};
static bool anim_waterfallfront_1061_initialized;
class WaterfallFront_1061 : public Active
{
public:
    WaterfallFront_1061(int x, int y) : Active(x, y, WaterfallFront_1061_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("WaterfallFront", 14);
#endif
        this->animations = &anim_waterfallfront_1061;
        if (!anim_waterfallfront_1061_initialized) {
            anim_waterfallfront_1061_initialized = true;
            images_waterfallfront_1061_0_0[0] = get_internal_image(1478);
            images_waterfallfront_1061_0_0[1] = get_internal_image(3047);
            images_waterfallfront_1061_0_0[2] = get_internal_image(3048);
            images_waterfallfront_1061_0_0[3] = get_internal_image(3103);
            images_waterfallfront_1061_0_0[4] = get_internal_image(3044);
            images_waterfallfront_1061_0_0[5] = get_internal_image(3124);
            images_waterfallfront_1061_0_0[6] = get_internal_image(3130);
            images_waterfallfront_1061_0_0[7] = get_internal_image(3400);
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
FrameObject * create_waterfallfront_1061(int x, int y)
{
    return new (Active::pool.create()) WaterfallFront_1061(x, y);
}
static Image* images_waterfallfront4_1062_0_0[20];
static Direction direction_waterfallfront4_1062_0_0 = {0, 50, 50, 0, -1, images_waterfallfront4_1062_0_0, 20};
static Animation anim_waterfallfront4_1062_0 = {&direction_waterfallfront4_1062_0_0, &direction_waterfallfront4_1062_0_0, &direction_waterfallfront4_1062_0_0, &direction_waterfallfront4_1062_0_0, &direction_waterfallfront4_1062_0_0, &direction_waterfallfront4_1062_0_0, &direction_waterfallfront4_1062_0_0, &direction_waterfallfront4_1062_0_0, &direction_waterfallfront4_1062_0_0, &direction_waterfallfront4_1062_0_0, &direction_waterfallfront4_1062_0_0, &direction_waterfallfront4_1062_0_0, &direction_waterfallfront4_1062_0_0, &direction_waterfallfront4_1062_0_0, &direction_waterfallfront4_1062_0_0, &direction_waterfallfront4_1062_0_0, NULL, &direction_waterfallfront4_1062_0_0, &direction_waterfallfront4_1062_0_0, &direction_waterfallfront4_1062_0_0, &direction_waterfallfront4_1062_0_0, &direction_waterfallfront4_1062_0_0, &direction_waterfallfront4_1062_0_0, &direction_waterfallfront4_1062_0_0, &direction_waterfallfront4_1062_0_0, &direction_waterfallfront4_1062_0_0, &direction_waterfallfront4_1062_0_0, &direction_waterfallfront4_1062_0_0, &direction_waterfallfront4_1062_0_0, &direction_waterfallfront4_1062_0_0, &direction_waterfallfront4_1062_0_0, &direction_waterfallfront4_1062_0_0};
static Animation * anim_array_waterfallfront4_1062[1] = {&anim_waterfallfront4_1062_0};
static Animations anim_waterfallfront4_1062 = {1, &anim_array_waterfallfront4_1062[0]};
static bool anim_waterfallfront4_1062_initialized;
class WaterfallFront4_1062 : public Active
{
public:
    WaterfallFront4_1062(int x, int y) : Active(x, y, WaterfallFront4_1062_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("WaterfallFront 4", 16);
#endif
        this->animations = &anim_waterfallfront4_1062;
        if (!anim_waterfallfront4_1062_initialized) {
            anim_waterfallfront4_1062_initialized = true;
            images_waterfallfront4_1062_0_0[0] = get_internal_image(7926);
            images_waterfallfront4_1062_0_0[1] = get_internal_image(7928);
            images_waterfallfront4_1062_0_0[2] = get_internal_image(7878);
            images_waterfallfront4_1062_0_0[3] = get_internal_image(7879);
            images_waterfallfront4_1062_0_0[4] = get_internal_image(7880);
            images_waterfallfront4_1062_0_0[5] = get_internal_image(7881);
            images_waterfallfront4_1062_0_0[6] = get_internal_image(7912);
            images_waterfallfront4_1062_0_0[7] = get_internal_image(7913);
            images_waterfallfront4_1062_0_0[8] = get_internal_image(7914);
            images_waterfallfront4_1062_0_0[9] = get_internal_image(7915);
            images_waterfallfront4_1062_0_0[10] = get_internal_image(7916);
            images_waterfallfront4_1062_0_0[11] = get_internal_image(7917);
            images_waterfallfront4_1062_0_0[12] = get_internal_image(7918);
            images_waterfallfront4_1062_0_0[13] = get_internal_image(7919);
            images_waterfallfront4_1062_0_0[14] = get_internal_image(7920);
            images_waterfallfront4_1062_0_0[15] = get_internal_image(7921);
            images_waterfallfront4_1062_0_0[16] = get_internal_image(7922);
            images_waterfallfront4_1062_0_0[17] = get_internal_image(7923);
            images_waterfallfront4_1062_0_0[18] = get_internal_image(7924);
            images_waterfallfront4_1062_0_0[19] = get_internal_image(7925);
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
FrameObject * create_waterfallfront4_1062(int x, int y)
{
    return new (Active::pool.create()) WaterfallFront4_1062(x, y);
}
class LevelParallaxPiece13_1063 : public SystemBox
{
public:
    LevelParallaxPiece13_1063(int x, int y) : SystemBox(x, y, LevelParallaxPiece13_1063_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 13", 23);
#endif
        flags |= BACKGROUND;
        width = 294;
        height = 820;
        type = PATTERN_IMAGE;
        image = get_internal_image(6373);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece13_1063(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece13_1063(x, y);
}
static Image* images_bossboulder_1064_0_0[1];
static Direction direction_bossboulder_1064_0_0 = {0, 50, 50, 0, 1, images_bossboulder_1064_0_0, 1};
static Animation anim_bossboulder_1064_0 = {&direction_bossboulder_1064_0_0, &direction_bossboulder_1064_0_0, &direction_bossboulder_1064_0_0, &direction_bossboulder_1064_0_0, &direction_bossboulder_1064_0_0, &direction_bossboulder_1064_0_0, &direction_bossboulder_1064_0_0, &direction_bossboulder_1064_0_0, &direction_bossboulder_1064_0_0, &direction_bossboulder_1064_0_0, &direction_bossboulder_1064_0_0, &direction_bossboulder_1064_0_0, &direction_bossboulder_1064_0_0, &direction_bossboulder_1064_0_0, &direction_bossboulder_1064_0_0, &direction_bossboulder_1064_0_0, NULL, &direction_bossboulder_1064_0_0, &direction_bossboulder_1064_0_0, &direction_bossboulder_1064_0_0, &direction_bossboulder_1064_0_0, &direction_bossboulder_1064_0_0, &direction_bossboulder_1064_0_0, &direction_bossboulder_1064_0_0, &direction_bossboulder_1064_0_0, &direction_bossboulder_1064_0_0, &direction_bossboulder_1064_0_0, &direction_bossboulder_1064_0_0, &direction_bossboulder_1064_0_0, &direction_bossboulder_1064_0_0, &direction_bossboulder_1064_0_0, &direction_bossboulder_1064_0_0};
static Animation * anim_array_bossboulder_1064[1] = {&anim_bossboulder_1064_0};
static Animations anim_bossboulder_1064 = {1, &anim_array_bossboulder_1064[0]};
static bool anim_bossboulder_1064_initialized;
class BossBoulder_1064 : public Active
{
public:
    BossBoulder_1064(int x, int y) : Active(x, y, BossBoulder_1064_type)
    {
        // qualifiers: 29, 97
#ifndef NDEBUG
        name = std::string("Boss_Boulder", 12);
#endif
        this->animations = &anim_bossboulder_1064;
        if (!anim_bossboulder_1064_initialized) {
            anim_bossboulder_1064_initialized = true;
            images_bossboulder_1064_0_0[0] = get_internal_image(1020);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 6);
    }
};
FrameObject * create_bossboulder_1064(int x, int y)
{
    return new (Active::pool.create()) BossBoulder_1064(x, y);
}
static Image* images_effectwarning_1065_4_0[3];
static Direction direction_effectwarning_1065_4_0 = {0, 50, 50, 0, 10, images_effectwarning_1065_4_0, 3};
static Animation anim_effectwarning_1065_4 = {&direction_effectwarning_1065_4_0, &direction_effectwarning_1065_4_0, &direction_effectwarning_1065_4_0, &direction_effectwarning_1065_4_0, &direction_effectwarning_1065_4_0, &direction_effectwarning_1065_4_0, &direction_effectwarning_1065_4_0, &direction_effectwarning_1065_4_0, &direction_effectwarning_1065_4_0, &direction_effectwarning_1065_4_0, &direction_effectwarning_1065_4_0, &direction_effectwarning_1065_4_0, &direction_effectwarning_1065_4_0, &direction_effectwarning_1065_4_0, &direction_effectwarning_1065_4_0, &direction_effectwarning_1065_4_0, NULL, &direction_effectwarning_1065_4_0, &direction_effectwarning_1065_4_0, &direction_effectwarning_1065_4_0, &direction_effectwarning_1065_4_0, &direction_effectwarning_1065_4_0, &direction_effectwarning_1065_4_0, &direction_effectwarning_1065_4_0, &direction_effectwarning_1065_4_0, &direction_effectwarning_1065_4_0, &direction_effectwarning_1065_4_0, &direction_effectwarning_1065_4_0, &direction_effectwarning_1065_4_0, &direction_effectwarning_1065_4_0, &direction_effectwarning_1065_4_0, &direction_effectwarning_1065_4_0};
static Animation * anim_array_effectwarning_1065[5] = {NULL, NULL, NULL, NULL, &anim_effectwarning_1065_4};
static Animations anim_effectwarning_1065 = {5, &anim_array_effectwarning_1065[0]};
static bool anim_effectwarning_1065_initialized;
class EffectWarning_1065 : public Active
{
public:
    EffectWarning_1065(int x, int y) : Active(x, y, EffectWarning_1065_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effect_Warning", 14);
#endif
        this->animations = &anim_effectwarning_1065;
        if (!anim_effectwarning_1065_initialized) {
            anim_effectwarning_1065_initialized = true;
            images_effectwarning_1065_4_0[0] = get_internal_image(881);
            images_effectwarning_1065_4_0[1] = get_internal_image(1003);
            images_effectwarning_1065_4_0[2] = get_internal_image(1051);
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
FrameObject * create_effectwarning_1065(int x, int y)
{
    return new (Active::pool.create()) EffectWarning_1065(x, y);
}
static Image* images_breakabledebris1_1066_0_0[1];
static Direction direction_breakabledebris1_1066_0_0 = {0, 0, 0, 0, 1, images_breakabledebris1_1066_0_0, 1};
static Image* images_breakabledebris1_1066_0_1[1];
static Direction direction_breakabledebris1_1066_0_1 = {1, 50, 50, 0, 1, images_breakabledebris1_1066_0_1, 1};
static Animation anim_breakabledebris1_1066_0 = {&direction_breakabledebris1_1066_0_0, &direction_breakabledebris1_1066_0_1, &direction_breakabledebris1_1066_0_1, &direction_breakabledebris1_1066_0_1, &direction_breakabledebris1_1066_0_1, &direction_breakabledebris1_1066_0_1, &direction_breakabledebris1_1066_0_1, &direction_breakabledebris1_1066_0_1, &direction_breakabledebris1_1066_0_1, &direction_breakabledebris1_1066_0_1, &direction_breakabledebris1_1066_0_1, &direction_breakabledebris1_1066_0_1, &direction_breakabledebris1_1066_0_1, &direction_breakabledebris1_1066_0_1, &direction_breakabledebris1_1066_0_1, &direction_breakabledebris1_1066_0_1, &direction_breakabledebris1_1066_0_1, &direction_breakabledebris1_1066_0_0, &direction_breakabledebris1_1066_0_0, &direction_breakabledebris1_1066_0_0, &direction_breakabledebris1_1066_0_0, &direction_breakabledebris1_1066_0_0, &direction_breakabledebris1_1066_0_0, &direction_breakabledebris1_1066_0_0, &direction_breakabledebris1_1066_0_0, &direction_breakabledebris1_1066_0_0, &direction_breakabledebris1_1066_0_0, &direction_breakabledebris1_1066_0_0, &direction_breakabledebris1_1066_0_0, &direction_breakabledebris1_1066_0_0, &direction_breakabledebris1_1066_0_0, &direction_breakabledebris1_1066_0_0};
static Animation * anim_array_breakabledebris1_1066[1] = {&anim_breakabledebris1_1066_0};
static Animations anim_breakabledebris1_1066 = {1, &anim_array_breakabledebris1_1066[0]};
static bool anim_breakabledebris1_1066_initialized;
class BreakableDebris1_1066 : public Active
{
public:
    BreakableDebris1_1066(int x, int y) : Active(x, y, BreakableDebris1_1066_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Breakable Debris 1", 18);
#endif
        this->animations = &anim_breakabledebris1_1066;
        if (!anim_breakabledebris1_1066_initialized) {
            anim_breakabledebris1_1066_initialized = true;
            images_breakabledebris1_1066_0_0[0] = get_internal_image(535);
            images_breakabledebris1_1066_0_1[0] = get_internal_image(6666);
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
FrameObject * create_breakabledebris1_1066(int x, int y)
{
    return new (Active::pool.create()) BreakableDebris1_1066(x, y);
}
class DVCeilingOverlay3_1067 : public Backdrop
{
public:
    DVCeilingOverlay3_1067(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Ceiling_Overlay 3", 20);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1171);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
        blend_color = Color(255, 255, 255, 0);
    }
};
FrameObject * create_dvceilingoverlay3_1067(int x, int y)
{
    return new (Backdrop::pool.create()) DVCeilingOverlay3_1067(x, y);
}
static Image* images_littlebubble_1068_0_0[3];
static Direction direction_littlebubble_1068_0_0 = {0, 8, 8, 2, -1, images_littlebubble_1068_0_0, 3};
static Animation anim_littlebubble_1068_0 = {&direction_littlebubble_1068_0_0, &direction_littlebubble_1068_0_0, &direction_littlebubble_1068_0_0, &direction_littlebubble_1068_0_0, &direction_littlebubble_1068_0_0, &direction_littlebubble_1068_0_0, &direction_littlebubble_1068_0_0, &direction_littlebubble_1068_0_0, &direction_littlebubble_1068_0_0, &direction_littlebubble_1068_0_0, &direction_littlebubble_1068_0_0, &direction_littlebubble_1068_0_0, &direction_littlebubble_1068_0_0, &direction_littlebubble_1068_0_0, &direction_littlebubble_1068_0_0, &direction_littlebubble_1068_0_0, NULL, &direction_littlebubble_1068_0_0, &direction_littlebubble_1068_0_0, &direction_littlebubble_1068_0_0, &direction_littlebubble_1068_0_0, &direction_littlebubble_1068_0_0, &direction_littlebubble_1068_0_0, &direction_littlebubble_1068_0_0, &direction_littlebubble_1068_0_0, &direction_littlebubble_1068_0_0, &direction_littlebubble_1068_0_0, &direction_littlebubble_1068_0_0, &direction_littlebubble_1068_0_0, &direction_littlebubble_1068_0_0, &direction_littlebubble_1068_0_0, &direction_littlebubble_1068_0_0};
static Animation * anim_array_littlebubble_1068[1] = {&anim_littlebubble_1068_0};
static Animations anim_littlebubble_1068 = {1, &anim_array_littlebubble_1068[0]};
static bool anim_littlebubble_1068_initialized;
class LittleBubble_1068 : public Active
{
public:
    LittleBubble_1068(int x, int y) : Active(x, y, LittleBubble_1068_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Little Bubble", 13);
#endif
        this->animations = &anim_littlebubble_1068;
        if (!anim_littlebubble_1068_initialized) {
            anim_littlebubble_1068_initialized = true;
            images_littlebubble_1068_0_0[0] = get_internal_image(1525);
            images_littlebubble_1068_0_0[1] = get_internal_image(1448);
            images_littlebubble_1068_0_0[2] = get_internal_image(1517);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(24);
        create_alterables();
    }
};
FrameObject * create_littlebubble_1068(int x, int y)
{
    return new (Active::pool.create()) LittleBubble_1068(x, y);
}
class Dirt12_1069 : public Backdrop
{
public:
    Dirt12_1069(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Dirt 12", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_dirt12_1069(int x, int y)
{
    return new (Backdrop::pool.create()) Dirt12_1069(x, y);
}
class DVHalfpipe3_1070 : public Backdrop
{
public:
    DVHalfpipe3_1070(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Halfpipe3", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5683);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_dvhalfpipe3_1070(int x, int y)
{
    return new (Backdrop::pool.create()) DVHalfpipe3_1070(x, y);
}
class DVHalfpipe1_1071 : public Backdrop
{
public:
    DVHalfpipe1_1071(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Halfpipe1", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5682);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_dvhalfpipe1_1071(int x, int y)
{
    return new (Backdrop::pool.create()) DVHalfpipe1_1071(x, y);
}
class DVHalfpipe2_1072 : public Backdrop
{
public:
    DVHalfpipe2_1072(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Halfpipe2", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9258);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_dvhalfpipe2_1072(int x, int y)
{
    return new (Backdrop::pool.create()) DVHalfpipe2_1072(x, y);
}
class Dirt10_1073 : public Backdrop
{
public:
    Dirt10_1073(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Dirt 10", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(116);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_dirt10_1073(int x, int y)
{
    return new (Backdrop::pool.create()) Dirt10_1073(x, y);
}
class Dirt13_1074 : public Backdrop
{
public:
    Dirt13_1074(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Dirt 13", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(693);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_dirt13_1074(int x, int y)
{
    return new (Backdrop::pool.create()) Dirt13_1074(x, y);
}
class DVJumppadBlock_1075 : public Backdrop
{
public:
    DVJumppadBlock_1075(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_JumppadBlock", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5362);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_dvjumppadblock_1075(int x, int y)
{
    return new (Backdrop::pool.create()) DVJumppadBlock_1075(x, y);
}
static Image* images_objectjumppad_1076_0_0[1];
static Direction direction_objectjumppad_1076_0_0 = {0, 25, 25, 0, -1, images_objectjumppad_1076_0_0, 1};
static Image* images_objectjumppad_1076_0_1[4];
static Direction direction_objectjumppad_1076_0_1 = {1, 25, 25, 0, -1, images_objectjumppad_1076_0_1, 4};
static Image* images_objectjumppad_1076_0_2[1];
static Direction direction_objectjumppad_1076_0_2 = {2, 25, 25, 0, -1, images_objectjumppad_1076_0_2, 1};
static Animation anim_objectjumppad_1076_0 = {&direction_objectjumppad_1076_0_0, &direction_objectjumppad_1076_0_1, &direction_objectjumppad_1076_0_2, &direction_objectjumppad_1076_0_2, &direction_objectjumppad_1076_0_2, &direction_objectjumppad_1076_0_2, &direction_objectjumppad_1076_0_2, &direction_objectjumppad_1076_0_2, &direction_objectjumppad_1076_0_2, &direction_objectjumppad_1076_0_2, &direction_objectjumppad_1076_0_2, &direction_objectjumppad_1076_0_2, &direction_objectjumppad_1076_0_2, &direction_objectjumppad_1076_0_2, &direction_objectjumppad_1076_0_2, &direction_objectjumppad_1076_0_2, &direction_objectjumppad_1076_0_2, NULL, &direction_objectjumppad_1076_0_0, &direction_objectjumppad_1076_0_0, &direction_objectjumppad_1076_0_0, &direction_objectjumppad_1076_0_0, &direction_objectjumppad_1076_0_0, &direction_objectjumppad_1076_0_0, &direction_objectjumppad_1076_0_0, &direction_objectjumppad_1076_0_0, &direction_objectjumppad_1076_0_0, &direction_objectjumppad_1076_0_0, &direction_objectjumppad_1076_0_0, &direction_objectjumppad_1076_0_0, &direction_objectjumppad_1076_0_0, &direction_objectjumppad_1076_0_0};
static Image* images_objectjumppad_1076_7_0[4];
static Direction direction_objectjumppad_1076_7_0 = {0, 25, 25, 0, -1, images_objectjumppad_1076_7_0, 4};
static Animation anim_objectjumppad_1076_7 = {&direction_objectjumppad_1076_7_0, &direction_objectjumppad_1076_7_0, &direction_objectjumppad_1076_7_0, &direction_objectjumppad_1076_7_0, &direction_objectjumppad_1076_7_0, &direction_objectjumppad_1076_7_0, &direction_objectjumppad_1076_7_0, &direction_objectjumppad_1076_7_0, &direction_objectjumppad_1076_7_0, &direction_objectjumppad_1076_7_0, &direction_objectjumppad_1076_7_0, &direction_objectjumppad_1076_7_0, &direction_objectjumppad_1076_7_0, &direction_objectjumppad_1076_7_0, &direction_objectjumppad_1076_7_0, &direction_objectjumppad_1076_7_0, NULL, &direction_objectjumppad_1076_7_0, &direction_objectjumppad_1076_7_0, &direction_objectjumppad_1076_7_0, &direction_objectjumppad_1076_7_0, &direction_objectjumppad_1076_7_0, &direction_objectjumppad_1076_7_0, &direction_objectjumppad_1076_7_0, &direction_objectjumppad_1076_7_0, &direction_objectjumppad_1076_7_0, &direction_objectjumppad_1076_7_0, &direction_objectjumppad_1076_7_0, &direction_objectjumppad_1076_7_0, &direction_objectjumppad_1076_7_0, &direction_objectjumppad_1076_7_0, &direction_objectjumppad_1076_7_0};
static Animation * anim_array_objectjumppad_1076[8] = {&anim_objectjumppad_1076_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_objectjumppad_1076_7};
static Animations anim_objectjumppad_1076 = {8, &anim_array_objectjumppad_1076[0]};
static bool anim_objectjumppad_1076_initialized;
class ObjectJumppad_1076 : public Active
{
public:
    ObjectJumppad_1076(int x, int y) : Active(x, y, ObjectJumppad_1076_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_Jumppad", 14);
#endif
        this->animations = &anim_objectjumppad_1076;
        if (!anim_objectjumppad_1076_initialized) {
            anim_objectjumppad_1076_initialized = true;
            images_objectjumppad_1076_0_0[0] = get_internal_image(2350);
            images_objectjumppad_1076_0_1[0] = get_internal_image(3866);
            images_objectjumppad_1076_0_1[1] = get_internal_image(1749);
            images_objectjumppad_1076_0_1[2] = get_internal_image(4898);
            images_objectjumppad_1076_0_1[3] = get_internal_image(4897);
            images_objectjumppad_1076_0_2[0] = get_internal_image(2350);
            images_objectjumppad_1076_7_0[0] = get_internal_image(2598);
            images_objectjumppad_1076_7_0[1] = get_internal_image(4906);
            images_objectjumppad_1076_7_0[2] = get_internal_image(4907);
            images_objectjumppad_1076_7_0[3] = get_internal_image(4908);
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
FrameObject * create_objectjumppad_1076(int x, int y)
{
    return new (Active::pool.create()) ObjectJumppad_1076(x, y);
}
static Image* images_bosstunnel2_1077_0_0[1];
static Direction direction_bosstunnel2_1077_0_0 = {0, 50, 50, 0, 1, images_bosstunnel2_1077_0_0, 1};
static Animation anim_bosstunnel2_1077_0 = {&direction_bosstunnel2_1077_0_0, &direction_bosstunnel2_1077_0_0, &direction_bosstunnel2_1077_0_0, &direction_bosstunnel2_1077_0_0, &direction_bosstunnel2_1077_0_0, &direction_bosstunnel2_1077_0_0, &direction_bosstunnel2_1077_0_0, &direction_bosstunnel2_1077_0_0, &direction_bosstunnel2_1077_0_0, &direction_bosstunnel2_1077_0_0, &direction_bosstunnel2_1077_0_0, &direction_bosstunnel2_1077_0_0, &direction_bosstunnel2_1077_0_0, &direction_bosstunnel2_1077_0_0, &direction_bosstunnel2_1077_0_0, &direction_bosstunnel2_1077_0_0, NULL, &direction_bosstunnel2_1077_0_0, &direction_bosstunnel2_1077_0_0, &direction_bosstunnel2_1077_0_0, &direction_bosstunnel2_1077_0_0, &direction_bosstunnel2_1077_0_0, &direction_bosstunnel2_1077_0_0, &direction_bosstunnel2_1077_0_0, &direction_bosstunnel2_1077_0_0, &direction_bosstunnel2_1077_0_0, &direction_bosstunnel2_1077_0_0, &direction_bosstunnel2_1077_0_0, &direction_bosstunnel2_1077_0_0, &direction_bosstunnel2_1077_0_0, &direction_bosstunnel2_1077_0_0, &direction_bosstunnel2_1077_0_0};
static Animation * anim_array_bosstunnel2_1077[1] = {&anim_bosstunnel2_1077_0};
static Animations anim_bosstunnel2_1077 = {1, &anim_array_bosstunnel2_1077[0]};
static bool anim_bosstunnel2_1077_initialized;
class BossTunnel2_1077 : public Active
{
public:
    BossTunnel2_1077(int x, int y) : Active(x, y, BossTunnel2_1077_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Boss_Tunnel 2", 13);
#endif
        set_visible(false);
        this->animations = &anim_bosstunnel2_1077;
        if (!anim_bosstunnel2_1077_initialized) {
            anim_bosstunnel2_1077_initialized = true;
            images_bosstunnel2_1077_0_0[0] = get_internal_image(5697);
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
FrameObject * create_bosstunnel2_1077(int x, int y)
{
    return new (Active::pool.create()) BossTunnel2_1077(x, y);
}
static Image* images_breakable2_1078_0_0[1];
static Direction direction_breakable2_1078_0_0 = {0, 50, 50, 0, 1, images_breakable2_1078_0_0, 1};
static Animation anim_breakable2_1078_0 = {&direction_breakable2_1078_0_0, &direction_breakable2_1078_0_0, &direction_breakable2_1078_0_0, &direction_breakable2_1078_0_0, &direction_breakable2_1078_0_0, &direction_breakable2_1078_0_0, &direction_breakable2_1078_0_0, &direction_breakable2_1078_0_0, &direction_breakable2_1078_0_0, &direction_breakable2_1078_0_0, &direction_breakable2_1078_0_0, &direction_breakable2_1078_0_0, &direction_breakable2_1078_0_0, &direction_breakable2_1078_0_0, &direction_breakable2_1078_0_0, &direction_breakable2_1078_0_0, NULL, &direction_breakable2_1078_0_0, &direction_breakable2_1078_0_0, &direction_breakable2_1078_0_0, &direction_breakable2_1078_0_0, &direction_breakable2_1078_0_0, &direction_breakable2_1078_0_0, &direction_breakable2_1078_0_0, &direction_breakable2_1078_0_0, &direction_breakable2_1078_0_0, &direction_breakable2_1078_0_0, &direction_breakable2_1078_0_0, &direction_breakable2_1078_0_0, &direction_breakable2_1078_0_0, &direction_breakable2_1078_0_0, &direction_breakable2_1078_0_0};
static Animation * anim_array_breakable2_1078[1] = {&anim_breakable2_1078_0};
static Animations anim_breakable2_1078 = {1, &anim_array_breakable2_1078[0]};
static bool anim_breakable2_1078_initialized;
class Breakable2_1078 : public Active
{
public:
    Breakable2_1078(int x, int y) : Active(x, y, Breakable2_1078_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Breakable 2", 11);
#endif
        this->animations = &anim_breakable2_1078;
        if (!anim_breakable2_1078_initialized) {
            anim_breakable2_1078_initialized = true;
            images_breakable2_1078_0_0[0] = get_internal_image(28);
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
FrameObject * create_breakable2_1078(int x, int y)
{
    return new (Active::pool.create()) Breakable2_1078(x, y);
}
static Image* images_breakable1_1079_0_0[1];
static Direction direction_breakable1_1079_0_0 = {0, 50, 50, 0, 1, images_breakable1_1079_0_0, 1};
static Animation anim_breakable1_1079_0 = {&direction_breakable1_1079_0_0, &direction_breakable1_1079_0_0, &direction_breakable1_1079_0_0, &direction_breakable1_1079_0_0, &direction_breakable1_1079_0_0, &direction_breakable1_1079_0_0, &direction_breakable1_1079_0_0, &direction_breakable1_1079_0_0, &direction_breakable1_1079_0_0, &direction_breakable1_1079_0_0, &direction_breakable1_1079_0_0, &direction_breakable1_1079_0_0, &direction_breakable1_1079_0_0, &direction_breakable1_1079_0_0, &direction_breakable1_1079_0_0, &direction_breakable1_1079_0_0, NULL, &direction_breakable1_1079_0_0, &direction_breakable1_1079_0_0, &direction_breakable1_1079_0_0, &direction_breakable1_1079_0_0, &direction_breakable1_1079_0_0, &direction_breakable1_1079_0_0, &direction_breakable1_1079_0_0, &direction_breakable1_1079_0_0, &direction_breakable1_1079_0_0, &direction_breakable1_1079_0_0, &direction_breakable1_1079_0_0, &direction_breakable1_1079_0_0, &direction_breakable1_1079_0_0, &direction_breakable1_1079_0_0, &direction_breakable1_1079_0_0};
static Animation * anim_array_breakable1_1079[1] = {&anim_breakable1_1079_0};
static Animations anim_breakable1_1079 = {1, &anim_array_breakable1_1079[0]};
static bool anim_breakable1_1079_initialized;
class Breakable1_1079 : public Active
{
public:
    Breakable1_1079(int x, int y) : Active(x, y, Breakable1_1079_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Breakable 1", 11);
#endif
        this->animations = &anim_breakable1_1079;
        if (!anim_breakable1_1079_initialized) {
            anim_breakable1_1079_initialized = true;
            images_breakable1_1079_0_0[0] = get_internal_image(333);
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
FrameObject * create_breakable1_1079(int x, int y)
{
    return new (Active::pool.create()) Breakable1_1079(x, y);
}
static Image* images_breakable3_1080_0_0[1];
static Direction direction_breakable3_1080_0_0 = {0, 50, 50, 0, 1, images_breakable3_1080_0_0, 1};
static Animation anim_breakable3_1080_0 = {&direction_breakable3_1080_0_0, &direction_breakable3_1080_0_0, &direction_breakable3_1080_0_0, &direction_breakable3_1080_0_0, &direction_breakable3_1080_0_0, &direction_breakable3_1080_0_0, &direction_breakable3_1080_0_0, &direction_breakable3_1080_0_0, &direction_breakable3_1080_0_0, &direction_breakable3_1080_0_0, &direction_breakable3_1080_0_0, &direction_breakable3_1080_0_0, &direction_breakable3_1080_0_0, &direction_breakable3_1080_0_0, &direction_breakable3_1080_0_0, &direction_breakable3_1080_0_0, NULL, &direction_breakable3_1080_0_0, &direction_breakable3_1080_0_0, &direction_breakable3_1080_0_0, &direction_breakable3_1080_0_0, &direction_breakable3_1080_0_0, &direction_breakable3_1080_0_0, &direction_breakable3_1080_0_0, &direction_breakable3_1080_0_0, &direction_breakable3_1080_0_0, &direction_breakable3_1080_0_0, &direction_breakable3_1080_0_0, &direction_breakable3_1080_0_0, &direction_breakable3_1080_0_0, &direction_breakable3_1080_0_0, &direction_breakable3_1080_0_0};
static Animation * anim_array_breakable3_1080[1] = {&anim_breakable3_1080_0};
static Animations anim_breakable3_1080 = {1, &anim_array_breakable3_1080[0]};
static bool anim_breakable3_1080_initialized;
class Breakable3_1080 : public Active
{
public:
    Breakable3_1080(int x, int y) : Active(x, y, Breakable3_1080_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Breakable 3", 11);
#endif
        this->animations = &anim_breakable3_1080;
        if (!anim_breakable3_1080_initialized) {
            anim_breakable3_1080_initialized = true;
            images_breakable3_1080_0_0[0] = get_internal_image(334);
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
FrameObject * create_breakable3_1080(int x, int y)
{
    return new (Active::pool.create()) Breakable3_1080(x, y);
}
static Image* images_bossgeyseroverlap1_1081_0_0[1];
static Direction direction_bossgeyseroverlap1_1081_0_0 = {0, 50, 50, 0, 1, images_bossgeyseroverlap1_1081_0_0, 1};
static Animation anim_bossgeyseroverlap1_1081_0 = {&direction_bossgeyseroverlap1_1081_0_0, &direction_bossgeyseroverlap1_1081_0_0, &direction_bossgeyseroverlap1_1081_0_0, &direction_bossgeyseroverlap1_1081_0_0, &direction_bossgeyseroverlap1_1081_0_0, &direction_bossgeyseroverlap1_1081_0_0, &direction_bossgeyseroverlap1_1081_0_0, &direction_bossgeyseroverlap1_1081_0_0, &direction_bossgeyseroverlap1_1081_0_0, &direction_bossgeyseroverlap1_1081_0_0, &direction_bossgeyseroverlap1_1081_0_0, &direction_bossgeyseroverlap1_1081_0_0, &direction_bossgeyseroverlap1_1081_0_0, &direction_bossgeyseroverlap1_1081_0_0, &direction_bossgeyseroverlap1_1081_0_0, &direction_bossgeyseroverlap1_1081_0_0, NULL, &direction_bossgeyseroverlap1_1081_0_0, &direction_bossgeyseroverlap1_1081_0_0, &direction_bossgeyseroverlap1_1081_0_0, &direction_bossgeyseroverlap1_1081_0_0, &direction_bossgeyseroverlap1_1081_0_0, &direction_bossgeyseroverlap1_1081_0_0, &direction_bossgeyseroverlap1_1081_0_0, &direction_bossgeyseroverlap1_1081_0_0, &direction_bossgeyseroverlap1_1081_0_0, &direction_bossgeyseroverlap1_1081_0_0, &direction_bossgeyseroverlap1_1081_0_0, &direction_bossgeyseroverlap1_1081_0_0, &direction_bossgeyseroverlap1_1081_0_0, &direction_bossgeyseroverlap1_1081_0_0, &direction_bossgeyseroverlap1_1081_0_0};
static Animation * anim_array_bossgeyseroverlap1_1081[1] = {&anim_bossgeyseroverlap1_1081_0};
static Animations anim_bossgeyseroverlap1_1081 = {1, &anim_array_bossgeyseroverlap1_1081[0]};
static bool anim_bossgeyseroverlap1_1081_initialized;
class BossGeyserOverlap1_1081 : public Active
{
public:
    BossGeyserOverlap1_1081(int x, int y) : Active(x, y, BossGeyserOverlap1_1081_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_GeyserOverlap 1", 20);
#endif
        this->animations = &anim_bossgeyseroverlap1_1081;
        if (!anim_bossgeyseroverlap1_1081_initialized) {
            anim_bossgeyseroverlap1_1081_initialized = true;
            images_bossgeyseroverlap1_1081_0_0[0] = get_internal_image(123);
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
FrameObject * create_bossgeyseroverlap1_1081(int x, int y)
{
    return new (Active::pool.create()) BossGeyserOverlap1_1081(x, y);
}
static Image* images_bossbouncemode_1082_0_0[1];
static Direction direction_bossbouncemode_1082_0_0 = {0, 50, 50, 0, 1, images_bossbouncemode_1082_0_0, 1};
static Animation anim_bossbouncemode_1082_0 = {&direction_bossbouncemode_1082_0_0, &direction_bossbouncemode_1082_0_0, &direction_bossbouncemode_1082_0_0, &direction_bossbouncemode_1082_0_0, &direction_bossbouncemode_1082_0_0, &direction_bossbouncemode_1082_0_0, &direction_bossbouncemode_1082_0_0, &direction_bossbouncemode_1082_0_0, &direction_bossbouncemode_1082_0_0, &direction_bossbouncemode_1082_0_0, &direction_bossbouncemode_1082_0_0, &direction_bossbouncemode_1082_0_0, &direction_bossbouncemode_1082_0_0, &direction_bossbouncemode_1082_0_0, &direction_bossbouncemode_1082_0_0, &direction_bossbouncemode_1082_0_0, NULL, &direction_bossbouncemode_1082_0_0, &direction_bossbouncemode_1082_0_0, &direction_bossbouncemode_1082_0_0, &direction_bossbouncemode_1082_0_0, &direction_bossbouncemode_1082_0_0, &direction_bossbouncemode_1082_0_0, &direction_bossbouncemode_1082_0_0, &direction_bossbouncemode_1082_0_0, &direction_bossbouncemode_1082_0_0, &direction_bossbouncemode_1082_0_0, &direction_bossbouncemode_1082_0_0, &direction_bossbouncemode_1082_0_0, &direction_bossbouncemode_1082_0_0, &direction_bossbouncemode_1082_0_0, &direction_bossbouncemode_1082_0_0};
static Animation * anim_array_bossbouncemode_1082[1] = {&anim_bossbouncemode_1082_0};
static Animations anim_bossbouncemode_1082 = {1, &anim_array_bossbouncemode_1082[0]};
static bool anim_bossbouncemode_1082_initialized;
class BossBounceMode_1082 : public Active
{
public:
    BossBounceMode_1082(int x, int y) : Active(x, y, BossBounceMode_1082_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_BounceMode", 15);
#endif
        set_visible(false);
        this->animations = &anim_bossbouncemode_1082;
        if (!anim_bossbouncemode_1082_initialized) {
            anim_bossbouncemode_1082_initialized = true;
            images_bossbouncemode_1082_0_0[0] = get_internal_image(715);
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
        ((BallMovement*)movement)->set_max_speed(40);
        ((BallMovement*)movement)->set_deceleration(0);
        create_alterables();
    }
};
FrameObject * create_bossbouncemode_1082(int x, int y)
{
    return new (Active::pool.create()) BossBounceMode_1082(x, y);
}
static Image* images_bosstunnel_1083_0_0[1];
static Direction direction_bosstunnel_1083_0_0 = {0, 50, 50, 0, 1, images_bosstunnel_1083_0_0, 1};
static Animation anim_bosstunnel_1083_0 = {&direction_bosstunnel_1083_0_0, &direction_bosstunnel_1083_0_0, &direction_bosstunnel_1083_0_0, &direction_bosstunnel_1083_0_0, &direction_bosstunnel_1083_0_0, &direction_bosstunnel_1083_0_0, &direction_bosstunnel_1083_0_0, &direction_bosstunnel_1083_0_0, &direction_bosstunnel_1083_0_0, &direction_bosstunnel_1083_0_0, &direction_bosstunnel_1083_0_0, &direction_bosstunnel_1083_0_0, &direction_bosstunnel_1083_0_0, &direction_bosstunnel_1083_0_0, &direction_bosstunnel_1083_0_0, &direction_bosstunnel_1083_0_0, NULL, &direction_bosstunnel_1083_0_0, &direction_bosstunnel_1083_0_0, &direction_bosstunnel_1083_0_0, &direction_bosstunnel_1083_0_0, &direction_bosstunnel_1083_0_0, &direction_bosstunnel_1083_0_0, &direction_bosstunnel_1083_0_0, &direction_bosstunnel_1083_0_0, &direction_bosstunnel_1083_0_0, &direction_bosstunnel_1083_0_0, &direction_bosstunnel_1083_0_0, &direction_bosstunnel_1083_0_0, &direction_bosstunnel_1083_0_0, &direction_bosstunnel_1083_0_0, &direction_bosstunnel_1083_0_0};
static Animation * anim_array_bosstunnel_1083[1] = {&anim_bosstunnel_1083_0};
static Animations anim_bosstunnel_1083 = {1, &anim_array_bosstunnel_1083[0]};
static bool anim_bosstunnel_1083_initialized;
class BossTunnel_1083 : public Active
{
public:
    BossTunnel_1083(int x, int y) : Active(x, y, BossTunnel_1083_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_Tunnel", 11);
#endif
        set_visible(false);
        this->animations = &anim_bosstunnel_1083;
        if (!anim_bosstunnel_1083_initialized) {
            anim_bosstunnel_1083_initialized = true;
            images_bosstunnel_1083_0_0[0] = get_internal_image(5473);
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
FrameObject * create_bosstunnel_1083(int x, int y)
{
    return new (Active::pool.create()) BossTunnel_1083(x, y);
}
static Image* images_bosstunnel3_1084_0_0[1];
static Direction direction_bosstunnel3_1084_0_0 = {0, 50, 50, 0, 1, images_bosstunnel3_1084_0_0, 1};
static Animation anim_bosstunnel3_1084_0 = {&direction_bosstunnel3_1084_0_0, &direction_bosstunnel3_1084_0_0, &direction_bosstunnel3_1084_0_0, &direction_bosstunnel3_1084_0_0, &direction_bosstunnel3_1084_0_0, &direction_bosstunnel3_1084_0_0, &direction_bosstunnel3_1084_0_0, &direction_bosstunnel3_1084_0_0, &direction_bosstunnel3_1084_0_0, &direction_bosstunnel3_1084_0_0, &direction_bosstunnel3_1084_0_0, &direction_bosstunnel3_1084_0_0, &direction_bosstunnel3_1084_0_0, &direction_bosstunnel3_1084_0_0, &direction_bosstunnel3_1084_0_0, &direction_bosstunnel3_1084_0_0, NULL, &direction_bosstunnel3_1084_0_0, &direction_bosstunnel3_1084_0_0, &direction_bosstunnel3_1084_0_0, &direction_bosstunnel3_1084_0_0, &direction_bosstunnel3_1084_0_0, &direction_bosstunnel3_1084_0_0, &direction_bosstunnel3_1084_0_0, &direction_bosstunnel3_1084_0_0, &direction_bosstunnel3_1084_0_0, &direction_bosstunnel3_1084_0_0, &direction_bosstunnel3_1084_0_0, &direction_bosstunnel3_1084_0_0, &direction_bosstunnel3_1084_0_0, &direction_bosstunnel3_1084_0_0, &direction_bosstunnel3_1084_0_0};
static Animation * anim_array_bosstunnel3_1084[1] = {&anim_bosstunnel3_1084_0};
static Animations anim_bosstunnel3_1084 = {1, &anim_array_bosstunnel3_1084[0]};
static bool anim_bosstunnel3_1084_initialized;
class BossTunnel3_1084 : public Active
{
public:
    BossTunnel3_1084(int x, int y) : Active(x, y, BossTunnel3_1084_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_Tunnel 3", 13);
#endif
        set_visible(false);
        this->animations = &anim_bosstunnel3_1084;
        if (!anim_bosstunnel3_1084_initialized) {
            anim_bosstunnel3_1084_initialized = true;
            images_bosstunnel3_1084_0_0[0] = get_internal_image(5691);
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
FrameObject * create_bosstunnel3_1084(int x, int y)
{
    return new (Active::pool.create()) BossTunnel3_1084(x, y);
}
static Image* images_levellayer115_1085_0_0[1];
static Direction direction_levellayer115_1085_0_0 = {0, 50, 50, 0, 1, images_levellayer115_1085_0_0, 1};
static Animation anim_levellayer115_1085_0 = {&direction_levellayer115_1085_0_0, &direction_levellayer115_1085_0_0, &direction_levellayer115_1085_0_0, &direction_levellayer115_1085_0_0, &direction_levellayer115_1085_0_0, &direction_levellayer115_1085_0_0, &direction_levellayer115_1085_0_0, &direction_levellayer115_1085_0_0, &direction_levellayer115_1085_0_0, &direction_levellayer115_1085_0_0, &direction_levellayer115_1085_0_0, &direction_levellayer115_1085_0_0, &direction_levellayer115_1085_0_0, &direction_levellayer115_1085_0_0, &direction_levellayer115_1085_0_0, &direction_levellayer115_1085_0_0, NULL, &direction_levellayer115_1085_0_0, &direction_levellayer115_1085_0_0, &direction_levellayer115_1085_0_0, &direction_levellayer115_1085_0_0, &direction_levellayer115_1085_0_0, &direction_levellayer115_1085_0_0, &direction_levellayer115_1085_0_0, &direction_levellayer115_1085_0_0, &direction_levellayer115_1085_0_0, &direction_levellayer115_1085_0_0, &direction_levellayer115_1085_0_0, &direction_levellayer115_1085_0_0, &direction_levellayer115_1085_0_0, &direction_levellayer115_1085_0_0, &direction_levellayer115_1085_0_0};
static Animation * anim_array_levellayer115_1085[1] = {&anim_levellayer115_1085_0};
static Animations anim_levellayer115_1085 = {1, &anim_array_levellayer115_1085[0]};
static bool anim_levellayer115_1085_initialized;
class LevelLayer115_1085 : public Active
{
public:
    LevelLayer115_1085(int x, int y) : Active(x, y, LevelLayer115_1085_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("Level_Layer1_15", 15);
#endif
        this->animations = &anim_levellayer115_1085;
        if (!anim_levellayer115_1085_initialized) {
            anim_levellayer115_1085_initialized = true;
            images_levellayer115_1085_0_0[0] = get_internal_image(5713);
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
FrameObject * create_levellayer115_1085(int x, int y)
{
    return new (Active::pool.create()) LevelLayer115_1085(x, y);
}
static Image* images_levellayer1loop03_1086_0_0[1];
static Direction direction_levellayer1loop03_1086_0_0 = {0, 50, 50, 0, 1, images_levellayer1loop03_1086_0_0, 1};
static Animation anim_levellayer1loop03_1086_0 = {&direction_levellayer1loop03_1086_0_0, &direction_levellayer1loop03_1086_0_0, &direction_levellayer1loop03_1086_0_0, &direction_levellayer1loop03_1086_0_0, &direction_levellayer1loop03_1086_0_0, &direction_levellayer1loop03_1086_0_0, &direction_levellayer1loop03_1086_0_0, &direction_levellayer1loop03_1086_0_0, &direction_levellayer1loop03_1086_0_0, &direction_levellayer1loop03_1086_0_0, &direction_levellayer1loop03_1086_0_0, &direction_levellayer1loop03_1086_0_0, &direction_levellayer1loop03_1086_0_0, &direction_levellayer1loop03_1086_0_0, &direction_levellayer1loop03_1086_0_0, &direction_levellayer1loop03_1086_0_0, NULL, &direction_levellayer1loop03_1086_0_0, &direction_levellayer1loop03_1086_0_0, &direction_levellayer1loop03_1086_0_0, &direction_levellayer1loop03_1086_0_0, &direction_levellayer1loop03_1086_0_0, &direction_levellayer1loop03_1086_0_0, &direction_levellayer1loop03_1086_0_0, &direction_levellayer1loop03_1086_0_0, &direction_levellayer1loop03_1086_0_0, &direction_levellayer1loop03_1086_0_0, &direction_levellayer1loop03_1086_0_0, &direction_levellayer1loop03_1086_0_0, &direction_levellayer1loop03_1086_0_0, &direction_levellayer1loop03_1086_0_0, &direction_levellayer1loop03_1086_0_0};
static Animation * anim_array_levellayer1loop03_1086[1] = {&anim_levellayer1loop03_1086_0};
static Animations anim_levellayer1loop03_1086 = {1, &anim_array_levellayer1loop03_1086[0]};
static bool anim_levellayer1loop03_1086_initialized;
class LevelLayer1Loop03_1086 : public Active
{
public:
    LevelLayer1Loop03_1086(int x, int y) : Active(x, y, LevelLayer1Loop03_1086_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("Level_Layer1_Loop03", 19);
#endif
        this->animations = &anim_levellayer1loop03_1086;
        if (!anim_levellayer1loop03_1086_initialized) {
            anim_levellayer1loop03_1086_initialized = true;
            images_levellayer1loop03_1086_0_0[0] = get_internal_image(5476);
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
FrameObject * create_levellayer1loop03_1086(int x, int y)
{
    return new (Active::pool.create()) LevelLayer1Loop03_1086(x, y);
}
static Image* images_bossgiantboulder_1087_0_0[1];
static Direction direction_bossgiantboulder_1087_0_0 = {0, 50, 50, 0, 1, images_bossgiantboulder_1087_0_0, 1};
static Image* images_bossgiantboulder_1087_0_8[1];
static Direction direction_bossgiantboulder_1087_0_8 = {8, 50, 50, 0, 1, images_bossgiantboulder_1087_0_8, 1};
static Animation anim_bossgiantboulder_1087_0 = {&direction_bossgiantboulder_1087_0_0, &direction_bossgiantboulder_1087_0_0, &direction_bossgiantboulder_1087_0_0, &direction_bossgiantboulder_1087_0_0, NULL, &direction_bossgiantboulder_1087_0_8, &direction_bossgiantboulder_1087_0_8, &direction_bossgiantboulder_1087_0_8, &direction_bossgiantboulder_1087_0_8, &direction_bossgiantboulder_1087_0_8, &direction_bossgiantboulder_1087_0_8, &direction_bossgiantboulder_1087_0_8, &direction_bossgiantboulder_1087_0_8, &direction_bossgiantboulder_1087_0_8, &direction_bossgiantboulder_1087_0_8, &direction_bossgiantboulder_1087_0_8, &direction_bossgiantboulder_1087_0_8, &direction_bossgiantboulder_1087_0_8, &direction_bossgiantboulder_1087_0_8, &direction_bossgiantboulder_1087_0_8, NULL, &direction_bossgiantboulder_1087_0_0, &direction_bossgiantboulder_1087_0_0, &direction_bossgiantboulder_1087_0_0, &direction_bossgiantboulder_1087_0_0, &direction_bossgiantboulder_1087_0_0, &direction_bossgiantboulder_1087_0_0, &direction_bossgiantboulder_1087_0_0, &direction_bossgiantboulder_1087_0_0, &direction_bossgiantboulder_1087_0_0, &direction_bossgiantboulder_1087_0_0, &direction_bossgiantboulder_1087_0_0};
static Animation * anim_array_bossgiantboulder_1087[1] = {&anim_bossgiantboulder_1087_0};
static Animations anim_bossgiantboulder_1087 = {1, &anim_array_bossgiantboulder_1087[0]};
static bool anim_bossgiantboulder_1087_initialized;
class BossGiantBoulder_1087 : public Active
{
public:
    BossGiantBoulder_1087(int x, int y) : Active(x, y, BossGiantBoulder_1087_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_GiantBoulder", 17);
#endif
        this->animations = &anim_bossgiantboulder_1087;
        if (!anim_bossgiantboulder_1087_initialized) {
            anim_bossgiantboulder_1087_initialized = true;
            images_bossgiantboulder_1087_0_0[0] = get_internal_image(658);
            images_bossgiantboulder_1087_0_8[0] = get_internal_image(3402);
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
FrameObject * create_bossgiantboulder_1087(int x, int y)
{
    return new (Active::pool.create()) BossGiantBoulder_1087(x, y);
}
static Image* images_guiboss_1088_0_0[1];
static Direction direction_guiboss_1088_0_0 = {0, 50, 50, 0, 1, images_guiboss_1088_0_0, 1};
static Animation anim_guiboss_1088_0 = {&direction_guiboss_1088_0_0, &direction_guiboss_1088_0_0, &direction_guiboss_1088_0_0, &direction_guiboss_1088_0_0, &direction_guiboss_1088_0_0, &direction_guiboss_1088_0_0, &direction_guiboss_1088_0_0, &direction_guiboss_1088_0_0, &direction_guiboss_1088_0_0, &direction_guiboss_1088_0_0, &direction_guiboss_1088_0_0, &direction_guiboss_1088_0_0, &direction_guiboss_1088_0_0, &direction_guiboss_1088_0_0, &direction_guiboss_1088_0_0, &direction_guiboss_1088_0_0, NULL, &direction_guiboss_1088_0_0, &direction_guiboss_1088_0_0, &direction_guiboss_1088_0_0, &direction_guiboss_1088_0_0, &direction_guiboss_1088_0_0, &direction_guiboss_1088_0_0, &direction_guiboss_1088_0_0, &direction_guiboss_1088_0_0, &direction_guiboss_1088_0_0, &direction_guiboss_1088_0_0, &direction_guiboss_1088_0_0, &direction_guiboss_1088_0_0, &direction_guiboss_1088_0_0, &direction_guiboss_1088_0_0, &direction_guiboss_1088_0_0};
static Animation * anim_array_guiboss_1088[1] = {&anim_guiboss_1088_0};
static Animations anim_guiboss_1088 = {1, &anim_array_guiboss_1088[0]};
static bool anim_guiboss_1088_initialized;
class GUIBoss_1088 : public Active
{
public:
    GUIBoss_1088(int x, int y) : Active(x, y, GUIBoss_1088_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GUI_Boss", 8);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_guiboss_1088;
        if (!anim_guiboss_1088_initialized) {
            anim_guiboss_1088_initialized = true;
            images_guiboss_1088_0_0[0] = get_internal_image(3906);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_266_gui_boss.value;
        if (!global_data_266_gui_boss.init) {
            global_data_266_gui_boss.init = true;
        }
    }
};
FrameObject * create_guiboss_1088(int x, int y)
{
    return new (Active::pool.create()) GUIBoss_1088(x, y);
}
class GUIBossHealth_1089 : public Counter
{
public:
    GUIBossHealth_1089(int x, int y) : Counter(x, y, GUIBossHealth_1089_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GUI_BossHealth", 14);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        width = 96;
        height = 32;
        type = ANIMATION_COUNTER;
        static Image * counter_images[11];
        static bool initialized = false;
        if (!initialized) {
            initialized = true;
            counter_images[0] = get_internal_image(3891);
            counter_images[1] = get_internal_image(1462);
            counter_images[2] = get_internal_image(1461);
            counter_images[3] = get_internal_image(1018);
            counter_images[4] = get_internal_image(1014);
            counter_images[5] = get_internal_image(1013);
            counter_images[6] = get_internal_image(1012);
            counter_images[7] = get_internal_image(1011);
            counter_images[8] = get_internal_image(914);
            counter_images[9] = get_internal_image(660);
            counter_images[10] = get_internal_image(319);
        }
        images = (Image**)&counter_images;
        image_count = 11;
        minimum = 0;
        maximum = 10;
        set(3);
    }
};
FrameObject * create_guibosshealth_1089(int x, int y)
{
    return new (Counter::pool.create()) GUIBossHealth_1089(x, y);
}
class LevelParallaxPiece0r_1090 : public SystemBox
{
public:
    LevelParallaxPiece0r_1090(int x, int y) : SystemBox(x, y, LevelParallaxPiece0r_1090_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece0r", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 240;
        type = PATTERN_IMAGE;
        image = get_internal_image(12392);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece0r_1090(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece0r_1090(x, y);
}
class LevelParallaxPiece1r_1091 : public SystemBox
{
public:
    LevelParallaxPiece1r_1091(int x, int y) : SystemBox(x, y, LevelParallaxPiece1r_1091_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 1r", 23);
#endif
        flags |= BACKGROUND;
        width = 400;
        height = 128;
        type = PATTERN_IMAGE;
        image = get_internal_image(12394);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece1r_1091(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece1r_1091(x, y);
}
class LevelParallaxPiece2r_1092 : public SystemBox
{
public:
    LevelParallaxPiece2r_1092(int x, int y) : SystemBox(x, y, LevelParallaxPiece2r_1092_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 2r", 23);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 240;
        type = PATTERN_IMAGE;
        image = get_internal_image(12371);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece2r_1092(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece2r_1092(x, y);
}
class LevelParallaxPiece3r_1093 : public SystemBox
{
public:
    LevelParallaxPiece3r_1093(int x, int y) : SystemBox(x, y, LevelParallaxPiece3r_1093_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 3r", 23);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 446;
        type = PATTERN_IMAGE;
        image = get_internal_image(12372);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece3r_1093(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece3r_1093(x, y);
}
class LevelParallaxPiece4r_1094 : public SystemBox
{
public:
    LevelParallaxPiece4r_1094(int x, int y) : SystemBox(x, y, LevelParallaxPiece4r_1094_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 4r", 23);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 175;
        type = PATTERN_IMAGE;
        image = get_internal_image(12373);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece4r_1094(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece4r_1094(x, y);
}
static Image* images_enemyfiresprite_1095_0_0[4];
static Direction direction_enemyfiresprite_1095_0_0 = {0, 40, 40, 0, -1, images_enemyfiresprite_1095_0_0, 4};
static Animation anim_enemyfiresprite_1095_0 = {&direction_enemyfiresprite_1095_0_0, &direction_enemyfiresprite_1095_0_0, &direction_enemyfiresprite_1095_0_0, &direction_enemyfiresprite_1095_0_0, &direction_enemyfiresprite_1095_0_0, &direction_enemyfiresprite_1095_0_0, &direction_enemyfiresprite_1095_0_0, &direction_enemyfiresprite_1095_0_0, &direction_enemyfiresprite_1095_0_0, &direction_enemyfiresprite_1095_0_0, &direction_enemyfiresprite_1095_0_0, &direction_enemyfiresprite_1095_0_0, &direction_enemyfiresprite_1095_0_0, &direction_enemyfiresprite_1095_0_0, &direction_enemyfiresprite_1095_0_0, &direction_enemyfiresprite_1095_0_0, NULL, &direction_enemyfiresprite_1095_0_0, &direction_enemyfiresprite_1095_0_0, &direction_enemyfiresprite_1095_0_0, &direction_enemyfiresprite_1095_0_0, &direction_enemyfiresprite_1095_0_0, &direction_enemyfiresprite_1095_0_0, &direction_enemyfiresprite_1095_0_0, &direction_enemyfiresprite_1095_0_0, &direction_enemyfiresprite_1095_0_0, &direction_enemyfiresprite_1095_0_0, &direction_enemyfiresprite_1095_0_0, &direction_enemyfiresprite_1095_0_0, &direction_enemyfiresprite_1095_0_0, &direction_enemyfiresprite_1095_0_0, &direction_enemyfiresprite_1095_0_0};
static Image* images_enemyfiresprite_1095_7_0[4];
static Direction direction_enemyfiresprite_1095_7_0 = {0, 50, 50, 0, 8, images_enemyfiresprite_1095_7_0, 4};
static Animation anim_enemyfiresprite_1095_7 = {&direction_enemyfiresprite_1095_7_0, &direction_enemyfiresprite_1095_7_0, &direction_enemyfiresprite_1095_7_0, &direction_enemyfiresprite_1095_7_0, &direction_enemyfiresprite_1095_7_0, &direction_enemyfiresprite_1095_7_0, &direction_enemyfiresprite_1095_7_0, &direction_enemyfiresprite_1095_7_0, &direction_enemyfiresprite_1095_7_0, &direction_enemyfiresprite_1095_7_0, &direction_enemyfiresprite_1095_7_0, &direction_enemyfiresprite_1095_7_0, &direction_enemyfiresprite_1095_7_0, &direction_enemyfiresprite_1095_7_0, &direction_enemyfiresprite_1095_7_0, &direction_enemyfiresprite_1095_7_0, NULL, &direction_enemyfiresprite_1095_7_0, &direction_enemyfiresprite_1095_7_0, &direction_enemyfiresprite_1095_7_0, &direction_enemyfiresprite_1095_7_0, &direction_enemyfiresprite_1095_7_0, &direction_enemyfiresprite_1095_7_0, &direction_enemyfiresprite_1095_7_0, &direction_enemyfiresprite_1095_7_0, &direction_enemyfiresprite_1095_7_0, &direction_enemyfiresprite_1095_7_0, &direction_enemyfiresprite_1095_7_0, &direction_enemyfiresprite_1095_7_0, &direction_enemyfiresprite_1095_7_0, &direction_enemyfiresprite_1095_7_0, &direction_enemyfiresprite_1095_7_0};
static Animation * anim_array_enemyfiresprite_1095[8] = {&anim_enemyfiresprite_1095_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemyfiresprite_1095_7};
static Animations anim_enemyfiresprite_1095 = {8, &anim_array_enemyfiresprite_1095[0]};
static bool anim_enemyfiresprite_1095_initialized;
class EnemyFiresprite_1095 : public Active
{
public:
    EnemyFiresprite_1095(int x, int y) : Active(x, y, EnemyFiresprite_1095_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_Firesprite", 16);
#endif
        this->animations = &anim_enemyfiresprite_1095;
        if (!anim_enemyfiresprite_1095_initialized) {
            anim_enemyfiresprite_1095_initialized = true;
            images_enemyfiresprite_1095_0_0[0] = get_internal_image(573);
            images_enemyfiresprite_1095_0_0[1] = get_internal_image(575);
            images_enemyfiresprite_1095_0_0[2] = get_internal_image(577);
            images_enemyfiresprite_1095_0_0[3] = get_internal_image(579);
            images_enemyfiresprite_1095_7_0[0] = get_internal_image(580);
            images_enemyfiresprite_1095_7_0[1] = get_internal_image(2201);
            images_enemyfiresprite_1095_7_0[2] = get_internal_image(2202);
            images_enemyfiresprite_1095_7_0[3] = get_internal_image(2204);
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
        ((BallMovement*)movement)->set_max_speed(36);
        ((BallMovement*)movement)->set_deceleration(19);
        movement->start();
        create_alterables();
    }
};
FrameObject * create_enemyfiresprite_1095(int x, int y)
{
    return new (Active::pool.create()) EnemyFiresprite_1095(x, y);
}
static Image* images_gimmickfireball_1096_0_0[4];
static Direction direction_gimmickfireball_1096_0_0 = {0, 50, 50, 0, -1, images_gimmickfireball_1096_0_0, 4};
static Animation anim_gimmickfireball_1096_0 = {&direction_gimmickfireball_1096_0_0, &direction_gimmickfireball_1096_0_0, &direction_gimmickfireball_1096_0_0, &direction_gimmickfireball_1096_0_0, &direction_gimmickfireball_1096_0_0, &direction_gimmickfireball_1096_0_0, &direction_gimmickfireball_1096_0_0, &direction_gimmickfireball_1096_0_0, &direction_gimmickfireball_1096_0_0, &direction_gimmickfireball_1096_0_0, &direction_gimmickfireball_1096_0_0, &direction_gimmickfireball_1096_0_0, &direction_gimmickfireball_1096_0_0, &direction_gimmickfireball_1096_0_0, &direction_gimmickfireball_1096_0_0, &direction_gimmickfireball_1096_0_0, NULL, &direction_gimmickfireball_1096_0_0, &direction_gimmickfireball_1096_0_0, &direction_gimmickfireball_1096_0_0, &direction_gimmickfireball_1096_0_0, &direction_gimmickfireball_1096_0_0, &direction_gimmickfireball_1096_0_0, &direction_gimmickfireball_1096_0_0, &direction_gimmickfireball_1096_0_0, &direction_gimmickfireball_1096_0_0, &direction_gimmickfireball_1096_0_0, &direction_gimmickfireball_1096_0_0, &direction_gimmickfireball_1096_0_0, &direction_gimmickfireball_1096_0_0, &direction_gimmickfireball_1096_0_0, &direction_gimmickfireball_1096_0_0};
static Image* images_gimmickfireball_1096_7_0[6];
static Direction direction_gimmickfireball_1096_7_0 = {0, 25, 25, 0, 1, images_gimmickfireball_1096_7_0, 6};
static Animation anim_gimmickfireball_1096_7 = {&direction_gimmickfireball_1096_7_0, &direction_gimmickfireball_1096_7_0, &direction_gimmickfireball_1096_7_0, &direction_gimmickfireball_1096_7_0, &direction_gimmickfireball_1096_7_0, &direction_gimmickfireball_1096_7_0, &direction_gimmickfireball_1096_7_0, &direction_gimmickfireball_1096_7_0, &direction_gimmickfireball_1096_7_0, &direction_gimmickfireball_1096_7_0, &direction_gimmickfireball_1096_7_0, &direction_gimmickfireball_1096_7_0, &direction_gimmickfireball_1096_7_0, &direction_gimmickfireball_1096_7_0, &direction_gimmickfireball_1096_7_0, &direction_gimmickfireball_1096_7_0, NULL, &direction_gimmickfireball_1096_7_0, &direction_gimmickfireball_1096_7_0, &direction_gimmickfireball_1096_7_0, &direction_gimmickfireball_1096_7_0, &direction_gimmickfireball_1096_7_0, &direction_gimmickfireball_1096_7_0, &direction_gimmickfireball_1096_7_0, &direction_gimmickfireball_1096_7_0, &direction_gimmickfireball_1096_7_0, &direction_gimmickfireball_1096_7_0, &direction_gimmickfireball_1096_7_0, &direction_gimmickfireball_1096_7_0, &direction_gimmickfireball_1096_7_0, &direction_gimmickfireball_1096_7_0, &direction_gimmickfireball_1096_7_0};
static Animation * anim_array_gimmickfireball_1096[8] = {&anim_gimmickfireball_1096_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_gimmickfireball_1096_7};
static Animations anim_gimmickfireball_1096 = {8, &anim_array_gimmickfireball_1096[0]};
static bool anim_gimmickfireball_1096_initialized;
class GimmickFireball_1096 : public Active
{
public:
    GimmickFireball_1096(int x, int y) : Active(x, y, GimmickFireball_1096_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_Fireball", 16);
#endif
        this->animations = &anim_gimmickfireball_1096;
        if (!anim_gimmickfireball_1096_initialized) {
            anim_gimmickfireball_1096_initialized = true;
            images_gimmickfireball_1096_0_0[0] = get_internal_image(1075);
            images_gimmickfireball_1096_0_0[1] = get_internal_image(1659);
            images_gimmickfireball_1096_0_0[2] = get_internal_image(6117);
            images_gimmickfireball_1096_0_0[3] = get_internal_image(6870);
            images_gimmickfireball_1096_7_0[0] = get_internal_image(1300);
            images_gimmickfireball_1096_7_0[1] = get_internal_image(1301);
            images_gimmickfireball_1096_7_0[2] = get_internal_image(1302);
            images_gimmickfireball_1096_7_0[3] = get_internal_image(1308);
            images_gimmickfireball_1096_7_0[4] = get_internal_image(1320);
            images_gimmickfireball_1096_7_0[5] = get_internal_image(1327);
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
FrameObject * create_gimmickfireball_1096(int x, int y)
{
    return new (Active::pool.create()) GimmickFireball_1096(x, y);
}
static Image* images_gimmickrelicpanelpiece_1097_0_0[12];
static Direction direction_gimmickrelicpanelpiece_1097_0_0 = {0, 0, 0, 0, 1, images_gimmickrelicpanelpiece_1097_0_0, 12};
static Animation anim_gimmickrelicpanelpiece_1097_0 = {&direction_gimmickrelicpanelpiece_1097_0_0, &direction_gimmickrelicpanelpiece_1097_0_0, &direction_gimmickrelicpanelpiece_1097_0_0, &direction_gimmickrelicpanelpiece_1097_0_0, &direction_gimmickrelicpanelpiece_1097_0_0, &direction_gimmickrelicpanelpiece_1097_0_0, &direction_gimmickrelicpanelpiece_1097_0_0, &direction_gimmickrelicpanelpiece_1097_0_0, &direction_gimmickrelicpanelpiece_1097_0_0, &direction_gimmickrelicpanelpiece_1097_0_0, &direction_gimmickrelicpanelpiece_1097_0_0, &direction_gimmickrelicpanelpiece_1097_0_0, &direction_gimmickrelicpanelpiece_1097_0_0, &direction_gimmickrelicpanelpiece_1097_0_0, &direction_gimmickrelicpanelpiece_1097_0_0, &direction_gimmickrelicpanelpiece_1097_0_0, NULL, &direction_gimmickrelicpanelpiece_1097_0_0, &direction_gimmickrelicpanelpiece_1097_0_0, &direction_gimmickrelicpanelpiece_1097_0_0, &direction_gimmickrelicpanelpiece_1097_0_0, &direction_gimmickrelicpanelpiece_1097_0_0, &direction_gimmickrelicpanelpiece_1097_0_0, &direction_gimmickrelicpanelpiece_1097_0_0, &direction_gimmickrelicpanelpiece_1097_0_0, &direction_gimmickrelicpanelpiece_1097_0_0, &direction_gimmickrelicpanelpiece_1097_0_0, &direction_gimmickrelicpanelpiece_1097_0_0, &direction_gimmickrelicpanelpiece_1097_0_0, &direction_gimmickrelicpanelpiece_1097_0_0, &direction_gimmickrelicpanelpiece_1097_0_0, &direction_gimmickrelicpanelpiece_1097_0_0};
static Animation * anim_array_gimmickrelicpanelpiece_1097[1] = {&anim_gimmickrelicpanelpiece_1097_0};
static Animations anim_gimmickrelicpanelpiece_1097 = {1, &anim_array_gimmickrelicpanelpiece_1097[0]};
static bool anim_gimmickrelicpanelpiece_1097_initialized;
class GimmickRelicPanelPiece_1097 : public Active
{
public:
    GimmickRelicPanelPiece_1097(int x, int y) : Active(x, y, GimmickRelicPanelPiece_1097_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_RelicPanelPiece", 23);
#endif
        this->animations = &anim_gimmickrelicpanelpiece_1097;
        if (!anim_gimmickrelicpanelpiece_1097_initialized) {
            anim_gimmickrelicpanelpiece_1097_initialized = true;
            images_gimmickrelicpanelpiece_1097_0_0[0] = get_internal_image(8314);
            images_gimmickrelicpanelpiece_1097_0_0[1] = get_internal_image(2129);
            images_gimmickrelicpanelpiece_1097_0_0[2] = get_internal_image(8315);
            images_gimmickrelicpanelpiece_1097_0_0[3] = get_internal_image(8316);
            images_gimmickrelicpanelpiece_1097_0_0[4] = get_internal_image(8317);
            images_gimmickrelicpanelpiece_1097_0_0[5] = get_internal_image(2132);
            images_gimmickrelicpanelpiece_1097_0_0[6] = get_internal_image(8166);
            images_gimmickrelicpanelpiece_1097_0_0[7] = get_internal_image(8289);
            images_gimmickrelicpanelpiece_1097_0_0[8] = get_internal_image(8290);
            images_gimmickrelicpanelpiece_1097_0_0[9] = get_internal_image(8307);
            images_gimmickrelicpanelpiece_1097_0_0[10] = get_internal_image(8312);
            images_gimmickrelicpanelpiece_1097_0_0[11] = get_internal_image(8313);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(3);
        create_alterables();
    }
};
FrameObject * create_gimmickrelicpanelpiece_1097(int x, int y)
{
    return new (Active::pool.create()) GimmickRelicPanelPiece_1097(x, y);
}
static Image* images_enemyrock_1098_0_0[1];
static Direction direction_enemyrock_1098_0_0 = {0, 50, 50, 0, 1, images_enemyrock_1098_0_0, 1};
static Animation anim_enemyrock_1098_0 = {&direction_enemyrock_1098_0_0, &direction_enemyrock_1098_0_0, &direction_enemyrock_1098_0_0, &direction_enemyrock_1098_0_0, &direction_enemyrock_1098_0_0, &direction_enemyrock_1098_0_0, &direction_enemyrock_1098_0_0, &direction_enemyrock_1098_0_0, &direction_enemyrock_1098_0_0, &direction_enemyrock_1098_0_0, &direction_enemyrock_1098_0_0, &direction_enemyrock_1098_0_0, &direction_enemyrock_1098_0_0, &direction_enemyrock_1098_0_0, &direction_enemyrock_1098_0_0, &direction_enemyrock_1098_0_0, NULL, &direction_enemyrock_1098_0_0, &direction_enemyrock_1098_0_0, &direction_enemyrock_1098_0_0, &direction_enemyrock_1098_0_0, &direction_enemyrock_1098_0_0, &direction_enemyrock_1098_0_0, &direction_enemyrock_1098_0_0, &direction_enemyrock_1098_0_0, &direction_enemyrock_1098_0_0, &direction_enemyrock_1098_0_0, &direction_enemyrock_1098_0_0, &direction_enemyrock_1098_0_0, &direction_enemyrock_1098_0_0, &direction_enemyrock_1098_0_0, &direction_enemyrock_1098_0_0};
static Image* images_enemyrock_1098_7_0[6];
static Direction direction_enemyrock_1098_7_0 = {0, 25, 25, 0, 1, images_enemyrock_1098_7_0, 6};
static Animation anim_enemyrock_1098_7 = {&direction_enemyrock_1098_7_0, &direction_enemyrock_1098_7_0, &direction_enemyrock_1098_7_0, &direction_enemyrock_1098_7_0, &direction_enemyrock_1098_7_0, &direction_enemyrock_1098_7_0, &direction_enemyrock_1098_7_0, &direction_enemyrock_1098_7_0, &direction_enemyrock_1098_7_0, &direction_enemyrock_1098_7_0, &direction_enemyrock_1098_7_0, &direction_enemyrock_1098_7_0, &direction_enemyrock_1098_7_0, &direction_enemyrock_1098_7_0, &direction_enemyrock_1098_7_0, &direction_enemyrock_1098_7_0, NULL, &direction_enemyrock_1098_7_0, &direction_enemyrock_1098_7_0, &direction_enemyrock_1098_7_0, &direction_enemyrock_1098_7_0, &direction_enemyrock_1098_7_0, &direction_enemyrock_1098_7_0, &direction_enemyrock_1098_7_0, &direction_enemyrock_1098_7_0, &direction_enemyrock_1098_7_0, &direction_enemyrock_1098_7_0, &direction_enemyrock_1098_7_0, &direction_enemyrock_1098_7_0, &direction_enemyrock_1098_7_0, &direction_enemyrock_1098_7_0, &direction_enemyrock_1098_7_0};
static Animation * anim_array_enemyrock_1098[8] = {&anim_enemyrock_1098_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemyrock_1098_7};
static Animations anim_enemyrock_1098 = {8, &anim_array_enemyrock_1098[0]};
static bool anim_enemyrock_1098_initialized;
class EnemyRock_1098 : public Active
{
public:
    EnemyRock_1098(int x, int y) : Active(x, y, EnemyRock_1098_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_Rock", 10);
#endif
        this->animations = &anim_enemyrock_1098;
        if (!anim_enemyrock_1098_initialized) {
            anim_enemyrock_1098_initialized = true;
            images_enemyrock_1098_0_0[0] = get_internal_image(2416);
            images_enemyrock_1098_7_0[0] = get_internal_image(1300);
            images_enemyrock_1098_7_0[1] = get_internal_image(1301);
            images_enemyrock_1098_7_0[2] = get_internal_image(1302);
            images_enemyrock_1098_7_0[3] = get_internal_image(1308);
            images_enemyrock_1098_7_0[4] = get_internal_image(1320);
            images_enemyrock_1098_7_0[5] = get_internal_image(1327);
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
FrameObject * create_enemyrock_1098(int x, int y)
{
    return new (Active::pool.create()) EnemyRock_1098(x, y);
}
static Image* images_switchcolumnback1_1099_0_0[1];
static Direction direction_switchcolumnback1_1099_0_0 = {0, 50, 50, 0, 1, images_switchcolumnback1_1099_0_0, 1};
static Animation anim_switchcolumnback1_1099_0 = {&direction_switchcolumnback1_1099_0_0, &direction_switchcolumnback1_1099_0_0, &direction_switchcolumnback1_1099_0_0, &direction_switchcolumnback1_1099_0_0, &direction_switchcolumnback1_1099_0_0, &direction_switchcolumnback1_1099_0_0, &direction_switchcolumnback1_1099_0_0, &direction_switchcolumnback1_1099_0_0, &direction_switchcolumnback1_1099_0_0, &direction_switchcolumnback1_1099_0_0, &direction_switchcolumnback1_1099_0_0, &direction_switchcolumnback1_1099_0_0, &direction_switchcolumnback1_1099_0_0, &direction_switchcolumnback1_1099_0_0, &direction_switchcolumnback1_1099_0_0, &direction_switchcolumnback1_1099_0_0, NULL, &direction_switchcolumnback1_1099_0_0, &direction_switchcolumnback1_1099_0_0, &direction_switchcolumnback1_1099_0_0, &direction_switchcolumnback1_1099_0_0, &direction_switchcolumnback1_1099_0_0, &direction_switchcolumnback1_1099_0_0, &direction_switchcolumnback1_1099_0_0, &direction_switchcolumnback1_1099_0_0, &direction_switchcolumnback1_1099_0_0, &direction_switchcolumnback1_1099_0_0, &direction_switchcolumnback1_1099_0_0, &direction_switchcolumnback1_1099_0_0, &direction_switchcolumnback1_1099_0_0, &direction_switchcolumnback1_1099_0_0, &direction_switchcolumnback1_1099_0_0};
static Animation * anim_array_switchcolumnback1_1099[1] = {&anim_switchcolumnback1_1099_0};
static Animations anim_switchcolumnback1_1099 = {1, &anim_array_switchcolumnback1_1099[0]};
static bool anim_switchcolumnback1_1099_initialized;
class SwitchColumnBack1_1099 : public Active
{
public:
    SwitchColumnBack1_1099(int x, int y) : Active(x, y, SwitchColumnBack1_1099_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Switch_ColumnBack 1", 19);
#endif
        this->animations = &anim_switchcolumnback1_1099;
        if (!anim_switchcolumnback1_1099_initialized) {
            anim_switchcolumnback1_1099_initialized = true;
            images_switchcolumnback1_1099_0_0[0] = get_internal_image(2086);
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
FrameObject * create_switchcolumnback1_1099(int x, int y)
{
    return new (Active::pool.create()) SwitchColumnBack1_1099(x, y);
}
static Image* images_switchcolumnback2_1100_0_0[1];
static Direction direction_switchcolumnback2_1100_0_0 = {0, 50, 50, 0, 1, images_switchcolumnback2_1100_0_0, 1};
static Animation anim_switchcolumnback2_1100_0 = {&direction_switchcolumnback2_1100_0_0, &direction_switchcolumnback2_1100_0_0, &direction_switchcolumnback2_1100_0_0, &direction_switchcolumnback2_1100_0_0, &direction_switchcolumnback2_1100_0_0, &direction_switchcolumnback2_1100_0_0, &direction_switchcolumnback2_1100_0_0, &direction_switchcolumnback2_1100_0_0, &direction_switchcolumnback2_1100_0_0, &direction_switchcolumnback2_1100_0_0, &direction_switchcolumnback2_1100_0_0, &direction_switchcolumnback2_1100_0_0, &direction_switchcolumnback2_1100_0_0, &direction_switchcolumnback2_1100_0_0, &direction_switchcolumnback2_1100_0_0, &direction_switchcolumnback2_1100_0_0, NULL, &direction_switchcolumnback2_1100_0_0, &direction_switchcolumnback2_1100_0_0, &direction_switchcolumnback2_1100_0_0, &direction_switchcolumnback2_1100_0_0, &direction_switchcolumnback2_1100_0_0, &direction_switchcolumnback2_1100_0_0, &direction_switchcolumnback2_1100_0_0, &direction_switchcolumnback2_1100_0_0, &direction_switchcolumnback2_1100_0_0, &direction_switchcolumnback2_1100_0_0, &direction_switchcolumnback2_1100_0_0, &direction_switchcolumnback2_1100_0_0, &direction_switchcolumnback2_1100_0_0, &direction_switchcolumnback2_1100_0_0, &direction_switchcolumnback2_1100_0_0};
static Animation * anim_array_switchcolumnback2_1100[1] = {&anim_switchcolumnback2_1100_0};
static Animations anim_switchcolumnback2_1100 = {1, &anim_array_switchcolumnback2_1100[0]};
static bool anim_switchcolumnback2_1100_initialized;
class SwitchColumnBack2_1100 : public Active
{
public:
    SwitchColumnBack2_1100(int x, int y) : Active(x, y, SwitchColumnBack2_1100_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Switch_ColumnBack 2", 19);
#endif
        this->animations = &anim_switchcolumnback2_1100;
        if (!anim_switchcolumnback2_1100_initialized) {
            anim_switchcolumnback2_1100_initialized = true;
            images_switchcolumnback2_1100_0_0[0] = get_internal_image(2231);
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
FrameObject * create_switchcolumnback2_1100(int x, int y)
{
    return new (Active::pool.create()) SwitchColumnBack2_1100(x, y);
}
static Image* images_enemyspark_1101_0_0[6];
static Direction direction_enemyspark_1101_0_0 = {0, 100, 100, 0, -1, images_enemyspark_1101_0_0, 6};
static Image* images_enemyspark_1101_0_16[6];
static Direction direction_enemyspark_1101_0_16 = {16, 100, 100, 0, -1, images_enemyspark_1101_0_16, 6};
static Image* images_enemyspark_1101_0_24[6];
static Direction direction_enemyspark_1101_0_24 = {24, 100, 100, 0, -1, images_enemyspark_1101_0_24, 6};
static Animation anim_enemyspark_1101_0 = {&direction_enemyspark_1101_0_0, &direction_enemyspark_1101_0_0, &direction_enemyspark_1101_0_0, &direction_enemyspark_1101_0_0, &direction_enemyspark_1101_0_0, &direction_enemyspark_1101_0_0, &direction_enemyspark_1101_0_0, &direction_enemyspark_1101_0_0, NULL, &direction_enemyspark_1101_0_16, &direction_enemyspark_1101_0_16, &direction_enemyspark_1101_0_16, &direction_enemyspark_1101_0_16, &direction_enemyspark_1101_0_16, &direction_enemyspark_1101_0_16, &direction_enemyspark_1101_0_16, &direction_enemyspark_1101_0_16, &direction_enemyspark_1101_0_16, &direction_enemyspark_1101_0_16, &direction_enemyspark_1101_0_16, NULL, &direction_enemyspark_1101_0_24, &direction_enemyspark_1101_0_24, &direction_enemyspark_1101_0_24, &direction_enemyspark_1101_0_24, &direction_enemyspark_1101_0_24, &direction_enemyspark_1101_0_24, &direction_enemyspark_1101_0_24, NULL, &direction_enemyspark_1101_0_0, &direction_enemyspark_1101_0_0, &direction_enemyspark_1101_0_0};
static Animation * anim_array_enemyspark_1101[1] = {&anim_enemyspark_1101_0};
static Animations anim_enemyspark_1101 = {1, &anim_array_enemyspark_1101[0]};
static bool anim_enemyspark_1101_initialized;
class EnemySpark_1101 : public Active
{
public:
    EnemySpark_1101(int x, int y) : Active(x, y, EnemySpark_1101_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_Spark", 11);
#endif
        this->animations = &anim_enemyspark_1101;
        if (!anim_enemyspark_1101_initialized) {
            anim_enemyspark_1101_initialized = true;
            images_enemyspark_1101_0_0[0] = get_internal_image(3187);
            images_enemyspark_1101_0_0[1] = get_internal_image(3185);
            images_enemyspark_1101_0_0[2] = get_internal_image(3188);
            images_enemyspark_1101_0_0[3] = get_internal_image(3189);
            images_enemyspark_1101_0_0[4] = get_internal_image(3191);
            images_enemyspark_1101_0_0[5] = get_internal_image(3190);
            images_enemyspark_1101_0_16[0] = get_internal_image(3187);
            images_enemyspark_1101_0_16[1] = get_internal_image(3185);
            images_enemyspark_1101_0_16[2] = get_internal_image(3188);
            images_enemyspark_1101_0_16[3] = get_internal_image(3189);
            images_enemyspark_1101_0_16[4] = get_internal_image(3191);
            images_enemyspark_1101_0_16[5] = get_internal_image(3190);
            images_enemyspark_1101_0_24[0] = get_internal_image(3176);
            images_enemyspark_1101_0_24[1] = get_internal_image(3179);
            images_enemyspark_1101_0_24[2] = get_internal_image(3178);
            images_enemyspark_1101_0_24[3] = get_internal_image(3193);
            images_enemyspark_1101_0_24[4] = get_internal_image(3177);
            images_enemyspark_1101_0_24[5] = get_internal_image(3192);
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
FrameObject * create_enemyspark_1101(int x, int y)
{
    return new (Active::pool.create()) EnemySpark_1101(x, y);
}
static Image* images_breakableruinspiece_1102_0_0[1];
static Direction direction_breakableruinspiece_1102_0_0 = {0, 50, 50, 0, 1, images_breakableruinspiece_1102_0_0, 1};
static Animation anim_breakableruinspiece_1102_0 = {&direction_breakableruinspiece_1102_0_0, &direction_breakableruinspiece_1102_0_0, &direction_breakableruinspiece_1102_0_0, &direction_breakableruinspiece_1102_0_0, &direction_breakableruinspiece_1102_0_0, &direction_breakableruinspiece_1102_0_0, &direction_breakableruinspiece_1102_0_0, &direction_breakableruinspiece_1102_0_0, &direction_breakableruinspiece_1102_0_0, &direction_breakableruinspiece_1102_0_0, &direction_breakableruinspiece_1102_0_0, &direction_breakableruinspiece_1102_0_0, &direction_breakableruinspiece_1102_0_0, &direction_breakableruinspiece_1102_0_0, &direction_breakableruinspiece_1102_0_0, &direction_breakableruinspiece_1102_0_0, NULL, &direction_breakableruinspiece_1102_0_0, &direction_breakableruinspiece_1102_0_0, &direction_breakableruinspiece_1102_0_0, &direction_breakableruinspiece_1102_0_0, &direction_breakableruinspiece_1102_0_0, &direction_breakableruinspiece_1102_0_0, &direction_breakableruinspiece_1102_0_0, &direction_breakableruinspiece_1102_0_0, &direction_breakableruinspiece_1102_0_0, &direction_breakableruinspiece_1102_0_0, &direction_breakableruinspiece_1102_0_0, &direction_breakableruinspiece_1102_0_0, &direction_breakableruinspiece_1102_0_0, &direction_breakableruinspiece_1102_0_0, &direction_breakableruinspiece_1102_0_0};
static Animation * anim_array_breakableruinspiece_1102[1] = {&anim_breakableruinspiece_1102_0};
static Animations anim_breakableruinspiece_1102 = {1, &anim_array_breakableruinspiece_1102[0]};
static bool anim_breakableruinspiece_1102_initialized;
class BreakableRuinsPiece_1102 : public Active
{
public:
    BreakableRuinsPiece_1102(int x, int y) : Active(x, y, BreakableRuinsPiece_1102_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BreakableRuins_piece", 20);
#endif
        this->animations = &anim_breakableruinspiece_1102;
        if (!anim_breakableruinspiece_1102_initialized) {
            anim_breakableruinspiece_1102_initialized = true;
            images_breakableruinspiece_1102_0_0[0] = get_internal_image(3271);
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
FrameObject * create_breakableruinspiece_1102(int x, int y)
{
    return new (Active::pool.create()) BreakableRuinsPiece_1102(x, y);
}
class RMBrick24_1103 : public Backdrop
{
public:
    RMBrick24_1103(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Brick24", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2033);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmbrick24_1103(int x, int y)
{
    return new (Backdrop::pool.create()) RMBrick24_1103(x, y);
}
class RMBrick21_1104 : public Backdrop
{
public:
    RMBrick21_1104(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Brick21", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12398);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmbrick21_1104(int x, int y)
{
    return new (Backdrop::pool.create()) RMBrick21_1104(x, y);
}
class RMBrick20_1105 : public Backdrop
{
public:
    RMBrick20_1105(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Brick20", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12395);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmbrick20_1105(int x, int y)
{
    return new (Backdrop::pool.create()) RMBrick20_1105(x, y);
}
class RMBrick26_1106 : public Backdrop
{
public:
    RMBrick26_1106(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Brick26", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12397);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmbrick26_1106(int x, int y)
{
    return new (Backdrop::pool.create()) RMBrick26_1106(x, y);
}
class RMBrick25_1107 : public Backdrop
{
public:
    RMBrick25_1107(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Brick25", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12396);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmbrick25_1107(int x, int y)
{
    return new (Backdrop::pool.create()) RMBrick25_1107(x, y);
}
class RMBrick2_1108 : public Backdrop
{
public:
    RMBrick2_1108(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Brick2", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7194);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmbrick2_1108(int x, int y)
{
    return new (Backdrop::pool.create()) RMBrick2_1108(x, y);
}
