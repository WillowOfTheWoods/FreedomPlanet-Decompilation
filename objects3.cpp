#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

static Image* images_sweep_205_0_0[1];
static Direction direction_sweep_205_0_0 = {0, 50, 50, 0, 1, images_sweep_205_0_0, 1};
static Animation anim_sweep_205_0 = {&direction_sweep_205_0_0, &direction_sweep_205_0_0, &direction_sweep_205_0_0, &direction_sweep_205_0_0, &direction_sweep_205_0_0, &direction_sweep_205_0_0, &direction_sweep_205_0_0, &direction_sweep_205_0_0, &direction_sweep_205_0_0, &direction_sweep_205_0_0, &direction_sweep_205_0_0, &direction_sweep_205_0_0, &direction_sweep_205_0_0, &direction_sweep_205_0_0, &direction_sweep_205_0_0, &direction_sweep_205_0_0, NULL, &direction_sweep_205_0_0, &direction_sweep_205_0_0, &direction_sweep_205_0_0, &direction_sweep_205_0_0, &direction_sweep_205_0_0, &direction_sweep_205_0_0, &direction_sweep_205_0_0, &direction_sweep_205_0_0, &direction_sweep_205_0_0, &direction_sweep_205_0_0, &direction_sweep_205_0_0, &direction_sweep_205_0_0, &direction_sweep_205_0_0, &direction_sweep_205_0_0, &direction_sweep_205_0_0};
static Animation * anim_array_sweep_205[1] = {&anim_sweep_205_0};
static Animations anim_sweep_205 = {1, &anim_array_sweep_205[0]};
static bool anim_sweep_205_initialized;
class Sweep_205 : public Active
{
public:
    Sweep_205(int x, int y) : Active(x, y, Sweep_205_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Sweep", 5);
#endif
        this->animations = &anim_sweep_205;
        if (!anim_sweep_205_initialized) {
            anim_sweep_205_initialized = true;
            images_sweep_205_0_0[0] = get_internal_image(1252);
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
FrameObject * create_sweep_205(int x, int y)
{
    return new (Active::pool.create()) Sweep_205(x, y);
}
static Image* images_mahjong_207_0_0[1];
static Direction direction_mahjong_207_0_0 = {0, 50, 50, 0, 1, images_mahjong_207_0_0, 1};
static Animation anim_mahjong_207_0 = {&direction_mahjong_207_0_0, &direction_mahjong_207_0_0, &direction_mahjong_207_0_0, &direction_mahjong_207_0_0, &direction_mahjong_207_0_0, &direction_mahjong_207_0_0, &direction_mahjong_207_0_0, &direction_mahjong_207_0_0, &direction_mahjong_207_0_0, &direction_mahjong_207_0_0, &direction_mahjong_207_0_0, &direction_mahjong_207_0_0, &direction_mahjong_207_0_0, &direction_mahjong_207_0_0, &direction_mahjong_207_0_0, &direction_mahjong_207_0_0, NULL, &direction_mahjong_207_0_0, &direction_mahjong_207_0_0, &direction_mahjong_207_0_0, &direction_mahjong_207_0_0, &direction_mahjong_207_0_0, &direction_mahjong_207_0_0, &direction_mahjong_207_0_0, &direction_mahjong_207_0_0, &direction_mahjong_207_0_0, &direction_mahjong_207_0_0, &direction_mahjong_207_0_0, &direction_mahjong_207_0_0, &direction_mahjong_207_0_0, &direction_mahjong_207_0_0, &direction_mahjong_207_0_0};
static Animation * anim_array_mahjong_207[1] = {&anim_mahjong_207_0};
static Animations anim_mahjong_207 = {1, &anim_array_mahjong_207[0]};
static bool anim_mahjong_207_initialized;
class Mahjong_207 : public Active
{
public:
    Mahjong_207(int x, int y) : Active(x, y, Mahjong_207_type)
    {
        // qualifiers: 1
#ifndef NDEBUG
        name = std::string("Mahjong", 7);
#endif
        set_visible(false);
        this->animations = &anim_mahjong_207;
        if (!anim_mahjong_207_initialized) {
            anim_mahjong_207_initialized = true;
            images_mahjong_207_0_0[0] = get_internal_image(5320);
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
FrameObject * create_mahjong_207(int x, int y)
{
    return new (Active::pool.create()) Mahjong_207(x, y);
}
static Image* images_start_208_0_0[1];
static Direction direction_start_208_0_0 = {0, 50, 50, 0, 1, images_start_208_0_0, 1};
static Animation anim_start_208_0 = {&direction_start_208_0_0, &direction_start_208_0_0, &direction_start_208_0_0, &direction_start_208_0_0, &direction_start_208_0_0, &direction_start_208_0_0, &direction_start_208_0_0, &direction_start_208_0_0, &direction_start_208_0_0, &direction_start_208_0_0, &direction_start_208_0_0, &direction_start_208_0_0, &direction_start_208_0_0, &direction_start_208_0_0, &direction_start_208_0_0, &direction_start_208_0_0, NULL, &direction_start_208_0_0, &direction_start_208_0_0, &direction_start_208_0_0, &direction_start_208_0_0, &direction_start_208_0_0, &direction_start_208_0_0, &direction_start_208_0_0, &direction_start_208_0_0, &direction_start_208_0_0, &direction_start_208_0_0, &direction_start_208_0_0, &direction_start_208_0_0, &direction_start_208_0_0, &direction_start_208_0_0, &direction_start_208_0_0};
static Animation * anim_array_start_208[1] = {&anim_start_208_0};
static Animations anim_start_208 = {1, &anim_array_start_208[0]};
static bool anim_start_208_initialized;
class Start_208 : public Active
{
public:
    Start_208(int x, int y) : Active(x, y, Start_208_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Start\?", 6);
#endif
        this->animations = &anim_start_208;
        if (!anim_start_208_initialized) {
            anim_start_208_initialized = true;
            images_start_208_0_0[0] = get_internal_image(3395);
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
FrameObject * create_start_208(int x, int y)
{
    return new (Active::pool.create()) Start_208(x, y);
}
static Image* images_recordcolon2_209_0_0[1];
static Direction direction_recordcolon2_209_0_0 = {0, 50, 50, 0, 1, images_recordcolon2_209_0_0, 1};
static Animation anim_recordcolon2_209_0 = {&direction_recordcolon2_209_0_0, &direction_recordcolon2_209_0_0, &direction_recordcolon2_209_0_0, &direction_recordcolon2_209_0_0, &direction_recordcolon2_209_0_0, &direction_recordcolon2_209_0_0, &direction_recordcolon2_209_0_0, &direction_recordcolon2_209_0_0, &direction_recordcolon2_209_0_0, &direction_recordcolon2_209_0_0, &direction_recordcolon2_209_0_0, &direction_recordcolon2_209_0_0, &direction_recordcolon2_209_0_0, &direction_recordcolon2_209_0_0, &direction_recordcolon2_209_0_0, &direction_recordcolon2_209_0_0, NULL, &direction_recordcolon2_209_0_0, &direction_recordcolon2_209_0_0, &direction_recordcolon2_209_0_0, &direction_recordcolon2_209_0_0, &direction_recordcolon2_209_0_0, &direction_recordcolon2_209_0_0, &direction_recordcolon2_209_0_0, &direction_recordcolon2_209_0_0, &direction_recordcolon2_209_0_0, &direction_recordcolon2_209_0_0, &direction_recordcolon2_209_0_0, &direction_recordcolon2_209_0_0, &direction_recordcolon2_209_0_0, &direction_recordcolon2_209_0_0, &direction_recordcolon2_209_0_0};
static Animation * anim_array_recordcolon2_209[1] = {&anim_recordcolon2_209_0};
static Animations anim_recordcolon2_209 = {1, &anim_array_recordcolon2_209[0]};
static bool anim_recordcolon2_209_initialized;
class RecordColon2_209 : public Active
{
public:
    RecordColon2_209(int x, int y) : Active(x, y, RecordColon2_209_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Record_Colon 2", 14);
#endif
        this->animations = &anim_recordcolon2_209;
        if (!anim_recordcolon2_209_initialized) {
            anim_recordcolon2_209_initialized = true;
            images_recordcolon2_209_0_0[0] = get_internal_image(8303);
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
FrameObject * create_recordcolon2_209(int x, int y)
{
    return new (Active::pool.create()) RecordColon2_209(x, y);
}
static Image* images_recordlabel_210_0_0[1];
static Direction direction_recordlabel_210_0_0 = {0, 50, 50, 0, 1, images_recordlabel_210_0_0, 1};
static Image* images_recordlabel_210_0_8[1];
static Direction direction_recordlabel_210_0_8 = {8, 50, 50, 0, 1, images_recordlabel_210_0_8, 1};
static Animation anim_recordlabel_210_0 = {&direction_recordlabel_210_0_0, &direction_recordlabel_210_0_0, &direction_recordlabel_210_0_0, &direction_recordlabel_210_0_0, NULL, &direction_recordlabel_210_0_8, &direction_recordlabel_210_0_8, &direction_recordlabel_210_0_8, &direction_recordlabel_210_0_8, &direction_recordlabel_210_0_8, &direction_recordlabel_210_0_8, &direction_recordlabel_210_0_8, &direction_recordlabel_210_0_8, &direction_recordlabel_210_0_8, &direction_recordlabel_210_0_8, &direction_recordlabel_210_0_8, &direction_recordlabel_210_0_8, &direction_recordlabel_210_0_8, &direction_recordlabel_210_0_8, &direction_recordlabel_210_0_8, NULL, &direction_recordlabel_210_0_0, &direction_recordlabel_210_0_0, &direction_recordlabel_210_0_0, &direction_recordlabel_210_0_0, &direction_recordlabel_210_0_0, &direction_recordlabel_210_0_0, &direction_recordlabel_210_0_0, &direction_recordlabel_210_0_0, &direction_recordlabel_210_0_0, &direction_recordlabel_210_0_0, &direction_recordlabel_210_0_0};
static Animation * anim_array_recordlabel_210[1] = {&anim_recordlabel_210_0};
static Animations anim_recordlabel_210 = {1, &anim_array_recordlabel_210[0]};
static bool anim_recordlabel_210_initialized;
class RecordLabel_210 : public Active
{
public:
    RecordLabel_210(int x, int y) : Active(x, y, RecordLabel_210_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Record Label", 12);
#endif
        this->animations = &anim_recordlabel_210;
        if (!anim_recordlabel_210_initialized) {
            anim_recordlabel_210_initialized = true;
            images_recordlabel_210_0_0[0] = get_internal_image(10658);
            images_recordlabel_210_0_8[0] = get_internal_image(10688);
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
FrameObject * create_recordlabel_210(int x, int y)
{
    return new (Active::pool.create()) RecordLabel_210(x, y);
}
static Image* images_active11_211_0_0[1];
static Direction direction_active11_211_0_0 = {0, 50, 50, 0, 1, images_active11_211_0_0, 1};
static Animation anim_active11_211_0 = {&direction_active11_211_0_0, &direction_active11_211_0_0, &direction_active11_211_0_0, &direction_active11_211_0_0, &direction_active11_211_0_0, &direction_active11_211_0_0, &direction_active11_211_0_0, &direction_active11_211_0_0, &direction_active11_211_0_0, &direction_active11_211_0_0, &direction_active11_211_0_0, &direction_active11_211_0_0, &direction_active11_211_0_0, &direction_active11_211_0_0, &direction_active11_211_0_0, &direction_active11_211_0_0, NULL, &direction_active11_211_0_0, &direction_active11_211_0_0, &direction_active11_211_0_0, &direction_active11_211_0_0, &direction_active11_211_0_0, &direction_active11_211_0_0, &direction_active11_211_0_0, &direction_active11_211_0_0, &direction_active11_211_0_0, &direction_active11_211_0_0, &direction_active11_211_0_0, &direction_active11_211_0_0, &direction_active11_211_0_0, &direction_active11_211_0_0, &direction_active11_211_0_0};
static Animation * anim_array_active11_211[1] = {&anim_active11_211_0};
static Animations anim_active11_211 = {1, &anim_array_active11_211[0]};
static bool anim_active11_211_initialized;
class Active11_211 : public Active
{
public:
    Active11_211(int x, int y) : Active(x, y, Active11_211_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 11", 9);
#endif
        this->animations = &anim_active11_211;
        if (!anim_active11_211_initialized) {
            anim_active11_211_initialized = true;
            images_active11_211_0_0[0] = get_internal_image(1159);
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
FrameObject * create_active11_211(int x, int y)
{
    return new (Active::pool.create()) Active11_211(x, y);
}
static Image* images_stageicon1_212_0_0[16];
static Direction direction_stageicon1_212_0_0 = {0, 50, 50, 0, 1, images_stageicon1_212_0_0, 16};
static Image* images_stageicon1_212_0_31[16];
static Direction direction_stageicon1_212_0_31 = {31, 0, 0, 0, 1, images_stageicon1_212_0_31, 16};
static Animation anim_stageicon1_212_0 = {&direction_stageicon1_212_0_0, &direction_stageicon1_212_0_0, &direction_stageicon1_212_0_0, &direction_stageicon1_212_0_0, &direction_stageicon1_212_0_0, &direction_stageicon1_212_0_0, &direction_stageicon1_212_0_0, &direction_stageicon1_212_0_0, &direction_stageicon1_212_0_0, &direction_stageicon1_212_0_0, &direction_stageicon1_212_0_0, &direction_stageicon1_212_0_0, &direction_stageicon1_212_0_0, &direction_stageicon1_212_0_0, &direction_stageicon1_212_0_0, &direction_stageicon1_212_0_0, &direction_stageicon1_212_0_31, &direction_stageicon1_212_0_31, &direction_stageicon1_212_0_31, &direction_stageicon1_212_0_31, &direction_stageicon1_212_0_31, &direction_stageicon1_212_0_31, &direction_stageicon1_212_0_31, &direction_stageicon1_212_0_31, &direction_stageicon1_212_0_31, &direction_stageicon1_212_0_31, &direction_stageicon1_212_0_31, &direction_stageicon1_212_0_31, &direction_stageicon1_212_0_31, &direction_stageicon1_212_0_31, &direction_stageicon1_212_0_31, &direction_stageicon1_212_0_31};
static Animation * anim_array_stageicon1_212[1] = {&anim_stageicon1_212_0};
static Animations anim_stageicon1_212 = {1, &anim_array_stageicon1_212[0]};
static bool anim_stageicon1_212_initialized;
class StageIcon1_212 : public Active
{
public:
    StageIcon1_212(int x, int y) : Active(x, y, StageIcon1_212_type)
    {
        // qualifiers: 13
#ifndef NDEBUG
        name = std::string("Stage icon 1", 12);
#endif
        this->animations = &anim_stageicon1_212;
        if (!anim_stageicon1_212_initialized) {
            anim_stageicon1_212_initialized = true;
            images_stageicon1_212_0_0[0] = get_internal_image(2567);
            images_stageicon1_212_0_0[1] = get_internal_image(1701);
            images_stageicon1_212_0_0[2] = get_internal_image(4637);
            images_stageicon1_212_0_0[3] = get_internal_image(4662);
            images_stageicon1_212_0_0[4] = get_internal_image(1474);
            images_stageicon1_212_0_0[5] = get_internal_image(7279);
            images_stageicon1_212_0_0[6] = get_internal_image(11751);
            images_stageicon1_212_0_0[7] = get_internal_image(13025);
            images_stageicon1_212_0_0[8] = get_internal_image(665);
            images_stageicon1_212_0_0[9] = get_internal_image(10164);
            images_stageicon1_212_0_0[10] = get_internal_image(5854);
            images_stageicon1_212_0_0[11] = get_internal_image(5856);
            images_stageicon1_212_0_0[12] = get_internal_image(15091);
            images_stageicon1_212_0_0[13] = get_internal_image(15095);
            images_stageicon1_212_0_0[14] = get_internal_image(3823);
            images_stageicon1_212_0_0[15] = get_internal_image(2283);
            images_stageicon1_212_0_31[0] = get_internal_image(3566);
            images_stageicon1_212_0_31[1] = get_internal_image(1338);
            images_stageicon1_212_0_31[2] = get_internal_image(341);
            images_stageicon1_212_0_31[3] = get_internal_image(4664);
            images_stageicon1_212_0_31[4] = get_internal_image(2153);
            images_stageicon1_212_0_31[5] = get_internal_image(661);
            images_stageicon1_212_0_31[6] = get_internal_image(11749);
            images_stageicon1_212_0_31[7] = get_internal_image(13026);
            images_stageicon1_212_0_31[8] = get_internal_image(666);
            images_stageicon1_212_0_31[9] = get_internal_image(10165);
            images_stageicon1_212_0_31[10] = get_internal_image(5853);
            images_stageicon1_212_0_31[11] = get_internal_image(5855);
            images_stageicon1_212_0_31[12] = get_internal_image(15092);
            images_stageicon1_212_0_31[13] = get_internal_image(15099);
            images_stageicon1_212_0_31[14] = get_internal_image(3858);
            images_stageicon1_212_0_31[15] = get_internal_image(140);
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
FrameObject * create_stageicon1_212(int x, int y)
{
    return new (Active::pool.create()) StageIcon1_212(x, y);
}
static Image* images_stagename_213_0_0[17];
static Direction direction_stagename_213_0_0 = {0, 0, 0, 0, 1, images_stagename_213_0_0, 17};
static Image* images_stagename_213_0_1[1];
static Direction direction_stagename_213_0_1 = {1, 50, 50, 0, 1, images_stagename_213_0_1, 1};
static Animation anim_stagename_213_0 = {&direction_stagename_213_0_0, &direction_stagename_213_0_1, &direction_stagename_213_0_1, &direction_stagename_213_0_1, &direction_stagename_213_0_1, &direction_stagename_213_0_1, &direction_stagename_213_0_1, &direction_stagename_213_0_1, &direction_stagename_213_0_1, &direction_stagename_213_0_1, &direction_stagename_213_0_1, &direction_stagename_213_0_1, &direction_stagename_213_0_1, &direction_stagename_213_0_1, &direction_stagename_213_0_1, &direction_stagename_213_0_1, &direction_stagename_213_0_1, &direction_stagename_213_0_0, &direction_stagename_213_0_0, &direction_stagename_213_0_0, &direction_stagename_213_0_0, &direction_stagename_213_0_0, &direction_stagename_213_0_0, &direction_stagename_213_0_0, &direction_stagename_213_0_0, &direction_stagename_213_0_0, &direction_stagename_213_0_0, &direction_stagename_213_0_0, &direction_stagename_213_0_0, &direction_stagename_213_0_0, &direction_stagename_213_0_0, &direction_stagename_213_0_0};
static Animation * anim_array_stagename_213[1] = {&anim_stagename_213_0};
static Animations anim_stagename_213 = {1, &anim_array_stagename_213[0]};
static bool anim_stagename_213_initialized;
class StageName_213 : public Active
{
public:
    StageName_213(int x, int y) : Active(x, y, StageName_213_type)
    {
        // qualifiers: 1
#ifndef NDEBUG
        name = std::string("Stage name", 10);
#endif
        this->animations = &anim_stagename_213;
        if (!anim_stagename_213_initialized) {
            anim_stagename_213_initialized = true;
            images_stagename_213_0_0[0] = get_internal_image(1527);
            images_stagename_213_0_0[1] = get_internal_image(3390);
            images_stagename_213_0_0[2] = get_internal_image(6691);
            images_stagename_213_0_0[3] = get_internal_image(4665);
            images_stagename_213_0_0[4] = get_internal_image(2152);
            images_stagename_213_0_0[5] = get_internal_image(3126);
            images_stagename_213_0_0[6] = get_internal_image(11752);
            images_stagename_213_0_0[7] = get_internal_image(12584);
            images_stagename_213_0_0[8] = get_internal_image(12586);
            images_stagename_213_0_0[9] = get_internal_image(12585);
            images_stagename_213_0_0[10] = get_internal_image(6108);
            images_stagename_213_0_0[11] = get_internal_image(5896);
            images_stagename_213_0_0[12] = get_internal_image(5897);
            images_stagename_213_0_0[13] = get_internal_image(6157);
            images_stagename_213_0_0[14] = get_internal_image(3860);
            images_stagename_213_0_0[15] = get_internal_image(3387);
            images_stagename_213_0_0[16] = get_internal_image(3387);
            images_stagename_213_0_1[0] = get_internal_image(3387);
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
FrameObject * create_stagename_213(int x, int y)
{
    return new (Active::pool.create()) StageName_213(x, y);
}
static Image* images_crystalcursor_214_0_0[7];
static Direction direction_crystalcursor_214_0_0 = {0, 18, 18, 0, -1, images_crystalcursor_214_0_0, 7};
static Image* images_crystalcursor_214_0_8[7];
static Direction direction_crystalcursor_214_0_8 = {8, 18, 18, 0, -1, images_crystalcursor_214_0_8, 7};
static Animation anim_crystalcursor_214_0 = {&direction_crystalcursor_214_0_0, &direction_crystalcursor_214_0_0, &direction_crystalcursor_214_0_0, &direction_crystalcursor_214_0_0, NULL, &direction_crystalcursor_214_0_8, &direction_crystalcursor_214_0_8, &direction_crystalcursor_214_0_8, &direction_crystalcursor_214_0_8, &direction_crystalcursor_214_0_8, &direction_crystalcursor_214_0_8, &direction_crystalcursor_214_0_8, &direction_crystalcursor_214_0_8, &direction_crystalcursor_214_0_8, &direction_crystalcursor_214_0_8, &direction_crystalcursor_214_0_8, &direction_crystalcursor_214_0_8, &direction_crystalcursor_214_0_8, &direction_crystalcursor_214_0_8, &direction_crystalcursor_214_0_8, NULL, &direction_crystalcursor_214_0_0, &direction_crystalcursor_214_0_0, &direction_crystalcursor_214_0_0, &direction_crystalcursor_214_0_0, &direction_crystalcursor_214_0_0, &direction_crystalcursor_214_0_0, &direction_crystalcursor_214_0_0, &direction_crystalcursor_214_0_0, &direction_crystalcursor_214_0_0, &direction_crystalcursor_214_0_0, &direction_crystalcursor_214_0_0};
static Animation * anim_array_crystalcursor_214[1] = {&anim_crystalcursor_214_0};
static Animations anim_crystalcursor_214 = {1, &anim_array_crystalcursor_214[0]};
static bool anim_crystalcursor_214_initialized;
class CrystalCursor_214 : public Active
{
public:
    CrystalCursor_214(int x, int y) : Active(x, y, CrystalCursor_214_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Crystal cursor", 14);
#endif
        this->animations = &anim_crystalcursor_214;
        if (!anim_crystalcursor_214_initialized) {
            anim_crystalcursor_214_initialized = true;
            images_crystalcursor_214_0_0[0] = get_internal_image(5287);
            images_crystalcursor_214_0_0[1] = get_internal_image(5973);
            images_crystalcursor_214_0_0[2] = get_internal_image(6078);
            images_crystalcursor_214_0_0[3] = get_internal_image(6074);
            images_crystalcursor_214_0_0[4] = get_internal_image(6075);
            images_crystalcursor_214_0_0[5] = get_internal_image(6076);
            images_crystalcursor_214_0_0[6] = get_internal_image(6077);
            images_crystalcursor_214_0_8[0] = get_internal_image(11986);
            images_crystalcursor_214_0_8[1] = get_internal_image(11987);
            images_crystalcursor_214_0_8[2] = get_internal_image(6080);
            images_crystalcursor_214_0_8[3] = get_internal_image(6213);
            images_crystalcursor_214_0_8[4] = get_internal_image(9395);
            images_crystalcursor_214_0_8[5] = get_internal_image(11984);
            images_crystalcursor_214_0_8[6] = get_internal_image(11985);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        movement_count = 2;
        movements = new Movement*[2];
        set_direction(24);
        movements[0] = new StaticMovement(this);
        movements[0]->index = 0;
        movements[1] = new PinballMovement(this);
        movements[1]->index = 1;
        ((PinballMovement*)movements[1])->set_max_speed(36);
        ((PinballMovement*)movements[1])->set_deceleration(0);
        ((PinballMovement*)movements[1])->set_gravity(25);
        set_movement(0);
        create_alterables();
        alterables->values.set(1, 128);
    }
};
FrameObject * create_crystalcursor_214(int x, int y)
{
    return new (Active::pool.create()) CrystalCursor_214(x, y);
}
static Image* images_stageselect_215_0_0[1];
static Direction direction_stageselect_215_0_0 = {0, 50, 50, 0, 1, images_stageselect_215_0_0, 1};
static Image* images_stageselect_215_0_8[1];
static Direction direction_stageselect_215_0_8 = {8, 50, 50, 0, 1, images_stageselect_215_0_8, 1};
static Animation anim_stageselect_215_0 = {&direction_stageselect_215_0_0, &direction_stageselect_215_0_0, &direction_stageselect_215_0_0, &direction_stageselect_215_0_0, NULL, &direction_stageselect_215_0_8, &direction_stageselect_215_0_8, &direction_stageselect_215_0_8, &direction_stageselect_215_0_8, &direction_stageselect_215_0_8, &direction_stageselect_215_0_8, &direction_stageselect_215_0_8, &direction_stageselect_215_0_8, &direction_stageselect_215_0_8, &direction_stageselect_215_0_8, &direction_stageselect_215_0_8, &direction_stageselect_215_0_8, &direction_stageselect_215_0_8, &direction_stageselect_215_0_8, &direction_stageselect_215_0_8, NULL, &direction_stageselect_215_0_0, &direction_stageselect_215_0_0, &direction_stageselect_215_0_0, &direction_stageselect_215_0_0, &direction_stageselect_215_0_0, &direction_stageselect_215_0_0, &direction_stageselect_215_0_0, &direction_stageselect_215_0_0, &direction_stageselect_215_0_0, &direction_stageselect_215_0_0, &direction_stageselect_215_0_0};
static Animation * anim_array_stageselect_215[1] = {&anim_stageselect_215_0};
static Animations anim_stageselect_215 = {1, &anim_array_stageselect_215[0]};
static bool anim_stageselect_215_initialized;
class StageSelect_215 : public Active
{
public:
    StageSelect_215(int x, int y) : Active(x, y, StageSelect_215_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Stage Select", 12);
#endif
        this->animations = &anim_stageselect_215;
        if (!anim_stageselect_215_initialized) {
            anim_stageselect_215_initialized = true;
            images_stageselect_215_0_0[0] = get_internal_image(224);
            images_stageselect_215_0_8[0] = get_internal_image(322);
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
FrameObject * create_stageselect_215(int x, int y)
{
    return new (Active::pool.create()) StageSelect_215(x, y);
}
class TimeRecordMil_216 : public Counter
{
public:
    TimeRecordMil_216(int x, int y) : Counter(x, y, TimeRecordMil_216_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("TimeRecord_Mil", 14);
#endif
        width = 96;
        height = 32;
        zero_pad = 2;
        type = IMAGE_COUNTER;
        static Image * counter_images[14];
        static bool initialized = false;
        if (!initialized) {
            initialized = true;
            counter_images[0] = get_internal_image(507);
            counter_images[1] = get_internal_image(393);
            counter_images[2] = get_internal_image(389);
            counter_images[3] = get_internal_image(418);
            counter_images[4] = get_internal_image(504);
            counter_images[5] = get_internal_image(518);
            counter_images[6] = get_internal_image(2027);
            counter_images[7] = get_internal_image(2029);
            counter_images[8] = get_internal_image(2864);
            counter_images[9] = get_internal_image(2868);
            counter_images[10] = get_internal_image(3564);
            counter_images[11] = get_internal_image(1528);
            counter_images[12] = get_internal_image(3937);
            counter_images[13] = get_internal_image(210);
        }
        images = (Image**)&counter_images;
        image_count = 14;
        minimum = 0;
        maximum = 99;
        set(0);
    }
};
FrameObject * create_timerecordmil_216(int x, int y)
{
    return new (Counter::pool.create()) TimeRecordMil_216(x, y);
}
class CrystalRecord_217 : public Counter
{
public:
    CrystalRecord_217(int x, int y) : Counter(x, y, CrystalRecord_217_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("CrystalRecord", 13);
#endif
        width = 96;
        height = 32;
        zero_pad = 4;
        type = IMAGE_COUNTER;
        static Image * counter_images[14];
        static bool initialized = false;
        if (!initialized) {
            initialized = true;
            counter_images[0] = get_internal_image(507);
            counter_images[1] = get_internal_image(393);
            counter_images[2] = get_internal_image(389);
            counter_images[3] = get_internal_image(418);
            counter_images[4] = get_internal_image(504);
            counter_images[5] = get_internal_image(518);
            counter_images[6] = get_internal_image(2027);
            counter_images[7] = get_internal_image(2029);
            counter_images[8] = get_internal_image(2864);
            counter_images[9] = get_internal_image(2868);
            counter_images[10] = get_internal_image(3564);
            counter_images[11] = get_internal_image(1528);
            counter_images[12] = get_internal_image(3937);
            counter_images[13] = get_internal_image(210);
        }
        images = (Image**)&counter_images;
        image_count = 14;
        minimum = 0;
        maximum = 9999;
        set(0);
    }
};
FrameObject * create_crystalrecord_217(int x, int y)
{
    return new (Counter::pool.create()) CrystalRecord_217(x, y);
}
class TimeRecordSec_218 : public Counter
{
public:
    TimeRecordSec_218(int x, int y) : Counter(x, y, TimeRecordSec_218_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("TimeRecord_Sec", 14);
#endif
        width = 96;
        height = 32;
        zero_pad = 2;
        type = IMAGE_COUNTER;
        static Image * counter_images[14];
        static bool initialized = false;
        if (!initialized) {
            initialized = true;
            counter_images[0] = get_internal_image(507);
            counter_images[1] = get_internal_image(393);
            counter_images[2] = get_internal_image(389);
            counter_images[3] = get_internal_image(418);
            counter_images[4] = get_internal_image(504);
            counter_images[5] = get_internal_image(518);
            counter_images[6] = get_internal_image(2027);
            counter_images[7] = get_internal_image(2029);
            counter_images[8] = get_internal_image(2864);
            counter_images[9] = get_internal_image(2868);
            counter_images[10] = get_internal_image(3564);
            counter_images[11] = get_internal_image(1528);
            counter_images[12] = get_internal_image(3937);
            counter_images[13] = get_internal_image(210);
        }
        images = (Image**)&counter_images;
        image_count = 14;
        minimum = 0;
        maximum = 99;
        set(0);
    }
};
FrameObject * create_timerecordsec_218(int x, int y)
{
    return new (Counter::pool.create()) TimeRecordSec_218(x, y);
}
class TimeRecordMin_219 : public Counter
{
public:
    TimeRecordMin_219(int x, int y) : Counter(x, y, TimeRecordMin_219_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("TimeRecord_Min", 14);
#endif
        width = 96;
        height = 32;
        zero_pad = 2;
        type = IMAGE_COUNTER;
        static Image * counter_images[14];
        static bool initialized = false;
        if (!initialized) {
            initialized = true;
            counter_images[0] = get_internal_image(507);
            counter_images[1] = get_internal_image(393);
            counter_images[2] = get_internal_image(389);
            counter_images[3] = get_internal_image(418);
            counter_images[4] = get_internal_image(504);
            counter_images[5] = get_internal_image(518);
            counter_images[6] = get_internal_image(2027);
            counter_images[7] = get_internal_image(2029);
            counter_images[8] = get_internal_image(2864);
            counter_images[9] = get_internal_image(2868);
            counter_images[10] = get_internal_image(3564);
            counter_images[11] = get_internal_image(1528);
            counter_images[12] = get_internal_image(3937);
            counter_images[13] = get_internal_image(210);
        }
        images = (Image**)&counter_images;
        image_count = 14;
        minimum = 0;
        maximum = 99;
        set(0);
    }
};
FrameObject * create_timerecordmin_219(int x, int y)
{
    return new (Counter::pool.create()) TimeRecordMin_219(x, y);
}
class BackgroundSystemBox2_220 : public SystemBox
{
public:
    BackgroundSystemBox2_220(int x, int y) : SystemBox(x, y, BackgroundSystemBox2_220_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Background System Box 2", 23);
#endif
        flags |= BACKGROUND;
        width = 640;
        height = 240;
        type = PATTERN_IMAGE;
        image = get_internal_image(2390);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_backgroundsystembox2_220(int x, int y)
{
    return new (SystemBox::pool.create()) BackgroundSystemBox2_220(x, y);
}
class HelpMessage_221 : public TextBlitter
{
public:
    HelpMessage_221(int x, int y) : TextBlitter(x, y, HelpMessage_221_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Help Message", 12);
#endif
        width = 426;
        height = 20;
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
        set_text(std::string(" A: Select                                B: Return", 51));
        has_callback = false;
        create_alterables();
    }
};
FrameObject * create_helpmessage_221(int x, int y)
{
    return new (TextBlitter::pool.create()) HelpMessage_221(x, y);
}
static Image* images_characterslot_222_0_0[2];
static Direction direction_characterslot_222_0_0 = {0, 50, 50, 0, 1, images_characterslot_222_0_0, 2};
static Image* images_characterslot_222_0_1[2];
static Direction direction_characterslot_222_0_1 = {1, 50, 50, 0, -1, images_characterslot_222_0_1, 2};
static Animation anim_characterslot_222_0 = {&direction_characterslot_222_0_0, &direction_characterslot_222_0_1, &direction_characterslot_222_0_1, &direction_characterslot_222_0_1, &direction_characterslot_222_0_1, &direction_characterslot_222_0_1, &direction_characterslot_222_0_1, &direction_characterslot_222_0_1, &direction_characterslot_222_0_1, &direction_characterslot_222_0_1, &direction_characterslot_222_0_1, &direction_characterslot_222_0_1, &direction_characterslot_222_0_1, &direction_characterslot_222_0_1, &direction_characterslot_222_0_1, &direction_characterslot_222_0_1, &direction_characterslot_222_0_1, &direction_characterslot_222_0_0, &direction_characterslot_222_0_0, &direction_characterslot_222_0_0, &direction_characterslot_222_0_0, &direction_characterslot_222_0_0, &direction_characterslot_222_0_0, &direction_characterslot_222_0_0, &direction_characterslot_222_0_0, &direction_characterslot_222_0_0, &direction_characterslot_222_0_0, &direction_characterslot_222_0_0, &direction_characterslot_222_0_0, &direction_characterslot_222_0_0, &direction_characterslot_222_0_0, &direction_characterslot_222_0_0};
static Image* images_characterslot_222_10_0[2];
static Direction direction_characterslot_222_10_0 = {0, 50, 50, 0, -1, images_characterslot_222_10_0, 2};
static Image* images_characterslot_222_10_1[2];
static Direction direction_characterslot_222_10_1 = {1, 50, 50, 0, -1, images_characterslot_222_10_1, 2};
static Animation anim_characterslot_222_10 = {&direction_characterslot_222_10_0, &direction_characterslot_222_10_1, &direction_characterslot_222_10_1, &direction_characterslot_222_10_1, &direction_characterslot_222_10_1, &direction_characterslot_222_10_1, &direction_characterslot_222_10_1, &direction_characterslot_222_10_1, &direction_characterslot_222_10_1, &direction_characterslot_222_10_1, &direction_characterslot_222_10_1, &direction_characterslot_222_10_1, &direction_characterslot_222_10_1, &direction_characterslot_222_10_1, &direction_characterslot_222_10_1, &direction_characterslot_222_10_1, &direction_characterslot_222_10_1, &direction_characterslot_222_10_0, &direction_characterslot_222_10_0, &direction_characterslot_222_10_0, &direction_characterslot_222_10_0, &direction_characterslot_222_10_0, &direction_characterslot_222_10_0, &direction_characterslot_222_10_0, &direction_characterslot_222_10_0, &direction_characterslot_222_10_0, &direction_characterslot_222_10_0, &direction_characterslot_222_10_0, &direction_characterslot_222_10_0, &direction_characterslot_222_10_0, &direction_characterslot_222_10_0, &direction_characterslot_222_10_0};
static Animation * anim_array_characterslot_222[11] = {&anim_characterslot_222_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_characterslot_222_10};
static Animations anim_characterslot_222 = {11, &anim_array_characterslot_222[0]};
static bool anim_characterslot_222_initialized;
class CharacterSlot_222 : public Active
{
public:
    CharacterSlot_222(int x, int y) : Active(x, y, CharacterSlot_222_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Character slot", 14);
#endif
        this->animations = &anim_characterslot_222;
        if (!anim_characterslot_222_initialized) {
            anim_characterslot_222_initialized = true;
            images_characterslot_222_0_0[0] = get_internal_image(10640);
            images_characterslot_222_0_0[1] = get_internal_image(10640);
            images_characterslot_222_0_1[0] = get_internal_image(10644);
            images_characterslot_222_0_1[1] = get_internal_image(10637);
            images_characterslot_222_10_0[0] = get_internal_image(707);
            images_characterslot_222_10_0[1] = get_internal_image(707);
            images_characterslot_222_10_1[0] = get_internal_image(933);
            images_characterslot_222_10_1[1] = get_internal_image(667);
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
FrameObject * create_characterslot_222(int x, int y)
{
    return new (Active::pool.create()) CharacterSlot_222(x, y);
}
static Image* images_character1_223_0_0[1];
static Direction direction_character1_223_0_0 = {0, 50, 50, 0, 1, images_character1_223_0_0, 1};
static Image* images_character1_223_0_8[1];
static Direction direction_character1_223_0_8 = {8, 50, 50, 0, 1, images_character1_223_0_8, 1};
static Animation anim_character1_223_0 = {&direction_character1_223_0_0, &direction_character1_223_0_0, &direction_character1_223_0_0, &direction_character1_223_0_0, NULL, &direction_character1_223_0_8, &direction_character1_223_0_8, &direction_character1_223_0_8, &direction_character1_223_0_8, &direction_character1_223_0_8, &direction_character1_223_0_8, &direction_character1_223_0_8, &direction_character1_223_0_8, &direction_character1_223_0_8, &direction_character1_223_0_8, &direction_character1_223_0_8, &direction_character1_223_0_8, &direction_character1_223_0_8, &direction_character1_223_0_8, &direction_character1_223_0_8, NULL, &direction_character1_223_0_0, &direction_character1_223_0_0, &direction_character1_223_0_0, &direction_character1_223_0_0, &direction_character1_223_0_0, &direction_character1_223_0_0, &direction_character1_223_0_0, &direction_character1_223_0_0, &direction_character1_223_0_0, &direction_character1_223_0_0, &direction_character1_223_0_0};
static Image* images_character1_223_7_0[5];
static Direction direction_character1_223_7_0 = {0, 40, 40, 4, -1, images_character1_223_7_0, 5};
static Animation anim_character1_223_7 = {&direction_character1_223_7_0, &direction_character1_223_7_0, &direction_character1_223_7_0, &direction_character1_223_7_0, &direction_character1_223_7_0, &direction_character1_223_7_0, &direction_character1_223_7_0, &direction_character1_223_7_0, &direction_character1_223_7_0, &direction_character1_223_7_0, &direction_character1_223_7_0, &direction_character1_223_7_0, &direction_character1_223_7_0, &direction_character1_223_7_0, &direction_character1_223_7_0, &direction_character1_223_7_0, NULL, &direction_character1_223_7_0, &direction_character1_223_7_0, &direction_character1_223_7_0, &direction_character1_223_7_0, &direction_character1_223_7_0, &direction_character1_223_7_0, &direction_character1_223_7_0, &direction_character1_223_7_0, &direction_character1_223_7_0, &direction_character1_223_7_0, &direction_character1_223_7_0, &direction_character1_223_7_0, &direction_character1_223_7_0, &direction_character1_223_7_0, &direction_character1_223_7_0};
static Animation * anim_array_character1_223[8] = {&anim_character1_223_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_character1_223_7};
static Animations anim_character1_223 = {8, &anim_array_character1_223[0]};
static bool anim_character1_223_initialized;
class Character1_223 : public Active
{
public:
    Character1_223(int x, int y) : Active(x, y, Character1_223_type)
    {
        // qualifiers: 0
#ifndef NDEBUG
        name = std::string("Character 1", 11);
#endif
        this->animations = &anim_character1_223;
        if (!anim_character1_223_initialized) {
            anim_character1_223_initialized = true;
            images_character1_223_0_0[0] = get_internal_image(6130);
            images_character1_223_0_8[0] = get_internal_image(6164);
            images_character1_223_7_0[0] = get_internal_image(6130);
            images_character1_223_7_0[1] = get_internal_image(6165);
            images_character1_223_7_0[2] = get_internal_image(4857);
            images_character1_223_7_0[3] = get_internal_image(6166);
            images_character1_223_7_0[4] = get_internal_image(6168);
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
FrameObject * create_character1_223(int x, int y)
{
    return new (Active::pool.create()) Character1_223(x, y);
}
static Image* images_character2_224_0_0[1];
static Direction direction_character2_224_0_0 = {0, 50, 50, 0, 1, images_character2_224_0_0, 1};
static Image* images_character2_224_0_8[1];
static Direction direction_character2_224_0_8 = {8, 50, 50, 0, 1, images_character2_224_0_8, 1};
static Animation anim_character2_224_0 = {&direction_character2_224_0_0, &direction_character2_224_0_0, &direction_character2_224_0_0, &direction_character2_224_0_0, NULL, &direction_character2_224_0_8, &direction_character2_224_0_8, &direction_character2_224_0_8, &direction_character2_224_0_8, &direction_character2_224_0_8, &direction_character2_224_0_8, &direction_character2_224_0_8, &direction_character2_224_0_8, &direction_character2_224_0_8, &direction_character2_224_0_8, &direction_character2_224_0_8, &direction_character2_224_0_8, &direction_character2_224_0_8, &direction_character2_224_0_8, &direction_character2_224_0_8, NULL, &direction_character2_224_0_0, &direction_character2_224_0_0, &direction_character2_224_0_0, &direction_character2_224_0_0, &direction_character2_224_0_0, &direction_character2_224_0_0, &direction_character2_224_0_0, &direction_character2_224_0_0, &direction_character2_224_0_0, &direction_character2_224_0_0, &direction_character2_224_0_0};
static Image* images_character2_224_7_0[4];
static Direction direction_character2_224_7_0 = {0, 40, 40, 3, -1, images_character2_224_7_0, 4};
static Animation anim_character2_224_7 = {&direction_character2_224_7_0, &direction_character2_224_7_0, &direction_character2_224_7_0, &direction_character2_224_7_0, &direction_character2_224_7_0, &direction_character2_224_7_0, &direction_character2_224_7_0, &direction_character2_224_7_0, &direction_character2_224_7_0, &direction_character2_224_7_0, &direction_character2_224_7_0, &direction_character2_224_7_0, &direction_character2_224_7_0, &direction_character2_224_7_0, &direction_character2_224_7_0, &direction_character2_224_7_0, NULL, &direction_character2_224_7_0, &direction_character2_224_7_0, &direction_character2_224_7_0, &direction_character2_224_7_0, &direction_character2_224_7_0, &direction_character2_224_7_0, &direction_character2_224_7_0, &direction_character2_224_7_0, &direction_character2_224_7_0, &direction_character2_224_7_0, &direction_character2_224_7_0, &direction_character2_224_7_0, &direction_character2_224_7_0, &direction_character2_224_7_0, &direction_character2_224_7_0};
static Animation * anim_array_character2_224[8] = {&anim_character2_224_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_character2_224_7};
static Animations anim_character2_224 = {8, &anim_array_character2_224[0]};
static bool anim_character2_224_initialized;
class Character2_224 : public Active
{
public:
    Character2_224(int x, int y) : Active(x, y, Character2_224_type)
    {
        // qualifiers: 0
#ifndef NDEBUG
        name = std::string("Character 2", 11);
#endif
        this->animations = &anim_character2_224;
        if (!anim_character2_224_initialized) {
            anim_character2_224_initialized = true;
            images_character2_224_0_0[0] = get_internal_image(5684);
            images_character2_224_0_8[0] = get_internal_image(5717);
            images_character2_224_7_0[0] = get_internal_image(5684);
            images_character2_224_7_0[1] = get_internal_image(5798);
            images_character2_224_7_0[2] = get_internal_image(5868);
            images_character2_224_7_0[3] = get_internal_image(6129);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 2);
    }
};
FrameObject * create_character2_224(int x, int y)
{
    return new (Active::pool.create()) Character2_224(x, y);
}
static Image* images_character3_225_0_0[1];
static Direction direction_character3_225_0_0 = {0, 50, 50, 0, 1, images_character3_225_0_0, 1};
static Image* images_character3_225_0_8[1];
static Direction direction_character3_225_0_8 = {8, 50, 50, 0, 1, images_character3_225_0_8, 1};
static Animation anim_character3_225_0 = {&direction_character3_225_0_0, &direction_character3_225_0_0, &direction_character3_225_0_0, &direction_character3_225_0_0, NULL, &direction_character3_225_0_8, &direction_character3_225_0_8, &direction_character3_225_0_8, &direction_character3_225_0_8, &direction_character3_225_0_8, &direction_character3_225_0_8, &direction_character3_225_0_8, &direction_character3_225_0_8, &direction_character3_225_0_8, &direction_character3_225_0_8, &direction_character3_225_0_8, &direction_character3_225_0_8, &direction_character3_225_0_8, &direction_character3_225_0_8, &direction_character3_225_0_8, NULL, &direction_character3_225_0_0, &direction_character3_225_0_0, &direction_character3_225_0_0, &direction_character3_225_0_0, &direction_character3_225_0_0, &direction_character3_225_0_0, &direction_character3_225_0_0, &direction_character3_225_0_0, &direction_character3_225_0_0, &direction_character3_225_0_0, &direction_character3_225_0_0};
static Image* images_character3_225_7_0[5];
static Direction direction_character3_225_7_0 = {0, 40, 40, 4, -1, images_character3_225_7_0, 5};
static Animation anim_character3_225_7 = {&direction_character3_225_7_0, &direction_character3_225_7_0, &direction_character3_225_7_0, &direction_character3_225_7_0, &direction_character3_225_7_0, &direction_character3_225_7_0, &direction_character3_225_7_0, &direction_character3_225_7_0, &direction_character3_225_7_0, &direction_character3_225_7_0, &direction_character3_225_7_0, &direction_character3_225_7_0, &direction_character3_225_7_0, &direction_character3_225_7_0, &direction_character3_225_7_0, &direction_character3_225_7_0, NULL, &direction_character3_225_7_0, &direction_character3_225_7_0, &direction_character3_225_7_0, &direction_character3_225_7_0, &direction_character3_225_7_0, &direction_character3_225_7_0, &direction_character3_225_7_0, &direction_character3_225_7_0, &direction_character3_225_7_0, &direction_character3_225_7_0, &direction_character3_225_7_0, &direction_character3_225_7_0, &direction_character3_225_7_0, &direction_character3_225_7_0, &direction_character3_225_7_0};
static Animation * anim_array_character3_225[8] = {&anim_character3_225_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_character3_225_7};
static Animations anim_character3_225 = {8, &anim_array_character3_225[0]};
static bool anim_character3_225_initialized;
class Character3_225 : public Active
{
public:
    Character3_225(int x, int y) : Active(x, y, Character3_225_type)
    {
        // qualifiers: 0
#ifndef NDEBUG
        name = std::string("Character 3", 11);
#endif
        this->animations = &anim_character3_225;
        if (!anim_character3_225_initialized) {
            anim_character3_225_initialized = true;
            images_character3_225_0_0[0] = get_internal_image(6950);
            images_character3_225_0_8[0] = get_internal_image(6963);
            images_character3_225_7_0[0] = get_internal_image(6964);
            images_character3_225_7_0[1] = get_internal_image(6167);
            images_character3_225_7_0[2] = get_internal_image(7044);
            images_character3_225_7_0[3] = get_internal_image(7948);
            images_character3_225_7_0[4] = get_internal_image(7961);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 3);
    }
};
FrameObject * create_character3_225(int x, int y)
{
    return new (Active::pool.create()) Character3_225(x, y);
}
static Image* images_charname1_226_0_0[1];
static Direction direction_charname1_226_0_0 = {0, 0, 0, 0, 1, images_charname1_226_0_0, 1};
static Animation anim_charname1_226_0 = {&direction_charname1_226_0_0, &direction_charname1_226_0_0, &direction_charname1_226_0_0, &direction_charname1_226_0_0, &direction_charname1_226_0_0, &direction_charname1_226_0_0, &direction_charname1_226_0_0, &direction_charname1_226_0_0, &direction_charname1_226_0_0, &direction_charname1_226_0_0, &direction_charname1_226_0_0, &direction_charname1_226_0_0, &direction_charname1_226_0_0, &direction_charname1_226_0_0, &direction_charname1_226_0_0, &direction_charname1_226_0_0, NULL, &direction_charname1_226_0_0, &direction_charname1_226_0_0, &direction_charname1_226_0_0, &direction_charname1_226_0_0, &direction_charname1_226_0_0, &direction_charname1_226_0_0, &direction_charname1_226_0_0, &direction_charname1_226_0_0, &direction_charname1_226_0_0, &direction_charname1_226_0_0, &direction_charname1_226_0_0, &direction_charname1_226_0_0, &direction_charname1_226_0_0, &direction_charname1_226_0_0, &direction_charname1_226_0_0};
static Animation * anim_array_charname1_226[1] = {&anim_charname1_226_0};
static Animations anim_charname1_226 = {1, &anim_array_charname1_226[0]};
static bool anim_charname1_226_initialized;
class CharName1_226 : public Active
{
public:
    CharName1_226(int x, int y) : Active(x, y, CharName1_226_type)
    {
        // qualifiers: 1
#ifndef NDEBUG
        name = std::string("Char name 1", 11);
#endif
        this->animations = &anim_charname1_226;
        if (!anim_charname1_226_initialized) {
            anim_charname1_226_initialized = true;
            images_charname1_226_0_0[0] = get_internal_image(4939);
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
FrameObject * create_charname1_226(int x, int y)
{
    return new (Active::pool.create()) CharName1_226(x, y);
}
static Image* images_charname2_227_0_0[1];
static Direction direction_charname2_227_0_0 = {0, 50, 50, 0, 1, images_charname2_227_0_0, 1};
static Image* images_charname2_227_0_1[1];
static Direction direction_charname2_227_0_1 = {1, 0, 0, 0, 1, images_charname2_227_0_1, 1};
static Animation anim_charname2_227_0 = {&direction_charname2_227_0_0, &direction_charname2_227_0_1, &direction_charname2_227_0_1, &direction_charname2_227_0_1, &direction_charname2_227_0_1, &direction_charname2_227_0_1, &direction_charname2_227_0_1, &direction_charname2_227_0_1, &direction_charname2_227_0_1, &direction_charname2_227_0_1, &direction_charname2_227_0_1, &direction_charname2_227_0_1, &direction_charname2_227_0_1, &direction_charname2_227_0_1, &direction_charname2_227_0_1, &direction_charname2_227_0_1, &direction_charname2_227_0_1, &direction_charname2_227_0_0, &direction_charname2_227_0_0, &direction_charname2_227_0_0, &direction_charname2_227_0_0, &direction_charname2_227_0_0, &direction_charname2_227_0_0, &direction_charname2_227_0_0, &direction_charname2_227_0_0, &direction_charname2_227_0_0, &direction_charname2_227_0_0, &direction_charname2_227_0_0, &direction_charname2_227_0_0, &direction_charname2_227_0_0, &direction_charname2_227_0_0, &direction_charname2_227_0_0};
static Animation * anim_array_charname2_227[1] = {&anim_charname2_227_0};
static Animations anim_charname2_227 = {1, &anim_array_charname2_227[0]};
static bool anim_charname2_227_initialized;
class CharName2_227 : public Active
{
public:
    CharName2_227(int x, int y) : Active(x, y, CharName2_227_type)
    {
        // qualifiers: 1
#ifndef NDEBUG
        name = std::string("Char name 2", 11);
#endif
        this->animations = &anim_charname2_227;
        if (!anim_charname2_227_initialized) {
            anim_charname2_227_initialized = true;
            images_charname2_227_0_0[0] = get_internal_image(4931);
            images_charname2_227_0_1[0] = get_internal_image(510);
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
FrameObject * create_charname2_227(int x, int y)
{
    return new (Active::pool.create()) CharName2_227(x, y);
}
static Image* images_charname3_228_0_0[1];
static Direction direction_charname3_228_0_0 = {0, 50, 50, 0, 1, images_charname3_228_0_0, 1};
static Image* images_charname3_228_0_1[1];
static Direction direction_charname3_228_0_1 = {1, 0, 0, 0, 1, images_charname3_228_0_1, 1};
static Animation anim_charname3_228_0 = {&direction_charname3_228_0_0, &direction_charname3_228_0_1, &direction_charname3_228_0_1, &direction_charname3_228_0_1, &direction_charname3_228_0_1, &direction_charname3_228_0_1, &direction_charname3_228_0_1, &direction_charname3_228_0_1, &direction_charname3_228_0_1, &direction_charname3_228_0_1, &direction_charname3_228_0_1, &direction_charname3_228_0_1, &direction_charname3_228_0_1, &direction_charname3_228_0_1, &direction_charname3_228_0_1, &direction_charname3_228_0_1, &direction_charname3_228_0_1, &direction_charname3_228_0_0, &direction_charname3_228_0_0, &direction_charname3_228_0_0, &direction_charname3_228_0_0, &direction_charname3_228_0_0, &direction_charname3_228_0_0, &direction_charname3_228_0_0, &direction_charname3_228_0_0, &direction_charname3_228_0_0, &direction_charname3_228_0_0, &direction_charname3_228_0_0, &direction_charname3_228_0_0, &direction_charname3_228_0_0, &direction_charname3_228_0_0, &direction_charname3_228_0_0};
static Animation * anim_array_charname3_228[1] = {&anim_charname3_228_0};
static Animations anim_charname3_228 = {1, &anim_array_charname3_228[0]};
static bool anim_charname3_228_initialized;
class CharName3_228 : public Active
{
public:
    CharName3_228(int x, int y) : Active(x, y, CharName3_228_type)
    {
        // qualifiers: 1
#ifndef NDEBUG
        name = std::string("Char name 3", 11);
#endif
        this->animations = &anim_charname3_228;
        if (!anim_charname3_228_initialized) {
            anim_charname3_228_initialized = true;
            images_charname3_228_0_0[0] = get_internal_image(8327);
            images_charname3_228_0_1[0] = get_internal_image(510);
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
FrameObject * create_charname3_228(int x, int y)
{
    return new (Active::pool.create()) CharName3_228(x, y);
}
class RecordData_229 : public ArrayObject
{
public:
    RecordData_229(int x, int y) : ArrayObject(x, y, RecordData_229_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("RecordData", 10);
#endif
        global_data = &global_data_4_recorddata;
        if (!global_data_4_recorddata.init) {
            global_data_4_recorddata.init = true;
            initialize(true, 1, 20, 99, 1);
        } else {
            data = global_data_4_recorddata.value;
        }
    }
};
FrameObject * create_recorddata_229(int x, int y)
{
    return new (ArrayObject::pool.create()) RecordData_229(x, y);
}
static Image* images_characterselect_230_0_0[1];
static Direction direction_characterselect_230_0_0 = {0, 50, 50, 0, 1, images_characterselect_230_0_0, 1};
static Image* images_characterselect_230_0_8[1];
static Direction direction_characterselect_230_0_8 = {8, 50, 50, 0, 1, images_characterselect_230_0_8, 1};
static Animation anim_characterselect_230_0 = {&direction_characterselect_230_0_0, &direction_characterselect_230_0_0, &direction_characterselect_230_0_0, &direction_characterselect_230_0_0, NULL, &direction_characterselect_230_0_8, &direction_characterselect_230_0_8, &direction_characterselect_230_0_8, &direction_characterselect_230_0_8, &direction_characterselect_230_0_8, &direction_characterselect_230_0_8, &direction_characterselect_230_0_8, &direction_characterselect_230_0_8, &direction_characterselect_230_0_8, &direction_characterselect_230_0_8, &direction_characterselect_230_0_8, &direction_characterselect_230_0_8, &direction_characterselect_230_0_8, &direction_characterselect_230_0_8, &direction_characterselect_230_0_8, NULL, &direction_characterselect_230_0_0, &direction_characterselect_230_0_0, &direction_characterselect_230_0_0, &direction_characterselect_230_0_0, &direction_characterselect_230_0_0, &direction_characterselect_230_0_0, &direction_characterselect_230_0_0, &direction_characterselect_230_0_0, &direction_characterselect_230_0_0, &direction_characterselect_230_0_0, &direction_characterselect_230_0_0};
static Animation * anim_array_characterselect_230[1] = {&anim_characterselect_230_0};
static Animations anim_characterselect_230 = {1, &anim_array_characterselect_230[0]};
static bool anim_characterselect_230_initialized;
class CharacterSelect_230 : public Active
{
public:
    CharacterSelect_230(int x, int y) : Active(x, y, CharacterSelect_230_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("CharacterSelect", 15);
#endif
        this->animations = &anim_characterselect_230;
        if (!anim_characterselect_230_initialized) {
            anim_characterselect_230_initialized = true;
            images_characterselect_230_0_0[0] = get_internal_image(4936);
            images_characterselect_230_0_8[0] = get_internal_image(322);
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
FrameObject * create_characterselect_230(int x, int y)
{
    return new (Active::pool.create()) CharacterSelect_230(x, y);
}
class FunctionMusic_231 : public ArrayObject
{
public:
    FunctionMusic_231(int x, int y) : ArrayObject(x, y, FunctionMusic_231_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Function.Music", 14);
#endif
        global_data = &global_data_17_function_music;
        if (!global_data_17_function_music.init) {
            global_data_17_function_music.init = true;
            initialize(false, 0, 1, 1, 1);
        } else {
            data = global_data_17_function_music.value;
        }
    }
};
FrameObject * create_functionmusic_231(int x, int y)
{
    return new (ArrayObject::pool.create()) FunctionMusic_231(x, y);
}
class QueueMusic_232 : public ArrayObject
{
public:
    QueueMusic_232(int x, int y) : ArrayObject(x, y, QueueMusic_232_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Queue.Music", 11);
#endif
        global_data = &global_data_18_queue_music;
        if (!global_data_18_queue_music.init) {
            global_data_18_queue_music.init = true;
            initialize(true, 0, 1, 3, 1);
        } else {
            data = global_data_18_queue_music.value;
        }
    }
};
FrameObject * create_queuemusic_232(int x, int y)
{
    return new (ArrayObject::pool.create()) QueueMusic_232(x, y);
}
class QuickBackdrop3_233 : public QuickBackdrop
{
public:
    QuickBackdrop3_233(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop 3", 16);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 56;
        color = Color(75, 0, 130);
        gradient_type = VERTICAL_GRADIENT;
        color2 = Color(150, 128, 255);
        outline = 0;
    }
};
FrameObject * create_quickbackdrop3_233(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop3_233(x, y);
}
class QuickBackdrop_234 : public QuickBackdrop
{
public:
    QuickBackdrop_234(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop", 14);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 56;
        color = Color(102, 70, 255);
        gradient_type = VERTICAL_GRADIENT;
        color2 = Color(75, 0, 130);
        outline = 0;
    }
};
FrameObject * create_quickbackdrop_234(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop_234(x, y);
}
class Backdrop3_235 : public Backdrop
{
public:
    Backdrop3_235(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 3", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(699);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop3_235(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop3_235(x, y);
}
class CheckerPattern_236 : public SystemBox
{
public:
    CheckerPattern_236(int x, int y) : SystemBox(x, y, CheckerPattern_236_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Checker pattern", 15);
#endif
        flags |= BACKGROUND;
        width = 704;
        height = 256;
        type = PATTERN_IMAGE;
        image = get_internal_image(1246);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_checkerpattern_236(int x, int y)
{
    return new (SystemBox::pool.create()) CheckerPattern_236(x, y);
}
static Image* images_results_237_0_0[1];
static Direction direction_results_237_0_0 = {0, 50, 50, 0, 1, images_results_237_0_0, 1};
static Animation anim_results_237_0 = {&direction_results_237_0_0, &direction_results_237_0_0, &direction_results_237_0_0, &direction_results_237_0_0, &direction_results_237_0_0, &direction_results_237_0_0, &direction_results_237_0_0, &direction_results_237_0_0, &direction_results_237_0_0, &direction_results_237_0_0, &direction_results_237_0_0, &direction_results_237_0_0, &direction_results_237_0_0, &direction_results_237_0_0, &direction_results_237_0_0, &direction_results_237_0_0, NULL, &direction_results_237_0_0, &direction_results_237_0_0, &direction_results_237_0_0, &direction_results_237_0_0, &direction_results_237_0_0, &direction_results_237_0_0, &direction_results_237_0_0, &direction_results_237_0_0, &direction_results_237_0_0, &direction_results_237_0_0, &direction_results_237_0_0, &direction_results_237_0_0, &direction_results_237_0_0, &direction_results_237_0_0, &direction_results_237_0_0};
static Animation * anim_array_results_237[1] = {&anim_results_237_0};
static Animations anim_results_237 = {1, &anim_array_results_237[0]};
static bool anim_results_237_initialized;
class Results_237 : public Active
{
public:
    Results_237(int x, int y) : Active(x, y, Results_237_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Results", 7);
#endif
        this->animations = &anim_results_237;
        if (!anim_results_237_initialized) {
            anim_results_237_initialized = true;
            images_results_237_0_0[0] = get_internal_image(934);
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
FrameObject * create_results_237(int x, int y)
{
    return new (Active::pool.create()) Results_237(x, y);
}
static Image* images_active5_238_0_0[1];
static Direction direction_active5_238_0_0 = {0, 50, 50, 0, 1, images_active5_238_0_0, 1};
static Animation anim_active5_238_0 = {&direction_active5_238_0_0, &direction_active5_238_0_0, &direction_active5_238_0_0, &direction_active5_238_0_0, &direction_active5_238_0_0, &direction_active5_238_0_0, &direction_active5_238_0_0, &direction_active5_238_0_0, &direction_active5_238_0_0, &direction_active5_238_0_0, &direction_active5_238_0_0, &direction_active5_238_0_0, &direction_active5_238_0_0, &direction_active5_238_0_0, &direction_active5_238_0_0, &direction_active5_238_0_0, NULL, &direction_active5_238_0_0, &direction_active5_238_0_0, &direction_active5_238_0_0, &direction_active5_238_0_0, &direction_active5_238_0_0, &direction_active5_238_0_0, &direction_active5_238_0_0, &direction_active5_238_0_0, &direction_active5_238_0_0, &direction_active5_238_0_0, &direction_active5_238_0_0, &direction_active5_238_0_0, &direction_active5_238_0_0, &direction_active5_238_0_0, &direction_active5_238_0_0};
static Animation * anim_array_active5_238[1] = {&anim_active5_238_0};
static Animations anim_active5_238 = {1, &anim_array_active5_238[0]};
static bool anim_active5_238_initialized;
class Active5_238 : public Active
{
public:
    Active5_238(int x, int y) : Active(x, y, Active5_238_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 5", 8);
#endif
        set_visible(false);
        this->animations = &anim_active5_238;
        if (!anim_active5_238_initialized) {
            anim_active5_238_initialized = true;
            images_active5_238_0_0[0] = get_internal_image(2766);
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
FrameObject * create_active5_238(int x, int y)
{
    return new (Active::pool.create()) Active5_238(x, y);
}
class Act2RecordMin_239 : public Counter
{
public:
    Act2RecordMin_239(int x, int y) : Counter(x, y, Act2RecordMin_239_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Act2Record_Min", 14);
#endif
        set_visible(false);
        width = 96;
        height = 32;
        type = IMAGE_COUNTER;
        static Image * counter_images[14];
        static bool initialized = false;
        if (!initialized) {
            initialized = true;
            counter_images[0] = get_internal_image(2774);
            counter_images[1] = get_internal_image(2776);
            counter_images[2] = get_internal_image(2777);
            counter_images[3] = get_internal_image(2778);
            counter_images[4] = get_internal_image(2779);
            counter_images[5] = get_internal_image(2789);
            counter_images[6] = get_internal_image(2795);
            counter_images[7] = get_internal_image(2796);
            counter_images[8] = get_internal_image(2797);
            counter_images[9] = get_internal_image(2798);
            counter_images[10] = get_internal_image(2801);
            counter_images[11] = get_internal_image(2800);
            counter_images[12] = get_internal_image(2802);
            counter_images[13] = get_internal_image(2801);
        }
        images = (Image**)&counter_images;
        image_count = 14;
        minimum = 0;
        maximum = 99;
        set(0);
        set_direction(randrange(32));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(0);
        ((BallMovement*)movement)->set_deceleration(0);
    }
};
FrameObject * create_act2recordmin_239(int x, int y)
{
    return new (Counter::pool.create()) Act2RecordMin_239(x, y);
}
class Act2RecordSec_240 : public Counter
{
public:
    Act2RecordSec_240(int x, int y) : Counter(x, y, Act2RecordSec_240_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Act2Record_Sec", 14);
#endif
        set_visible(false);
        width = 96;
        height = 32;
        type = IMAGE_COUNTER;
        static Image * counter_images[14];
        static bool initialized = false;
        if (!initialized) {
            initialized = true;
            counter_images[0] = get_internal_image(2774);
            counter_images[1] = get_internal_image(2776);
            counter_images[2] = get_internal_image(2777);
            counter_images[3] = get_internal_image(2778);
            counter_images[4] = get_internal_image(2779);
            counter_images[5] = get_internal_image(2789);
            counter_images[6] = get_internal_image(2795);
            counter_images[7] = get_internal_image(2796);
            counter_images[8] = get_internal_image(2797);
            counter_images[9] = get_internal_image(2798);
            counter_images[10] = get_internal_image(2801);
            counter_images[11] = get_internal_image(2800);
            counter_images[12] = get_internal_image(2802);
            counter_images[13] = get_internal_image(2801);
        }
        images = (Image**)&counter_images;
        image_count = 14;
        minimum = 0;
        maximum = 99;
        set(0);
        set_direction(randrange(32));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(0);
        ((BallMovement*)movement)->set_deceleration(0);
    }
};
FrameObject * create_act2recordsec_240(int x, int y)
{
    return new (Counter::pool.create()) Act2RecordSec_240(x, y);
}
class Act2RecordMil_241 : public Counter
{
public:
    Act2RecordMil_241(int x, int y) : Counter(x, y, Act2RecordMil_241_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Act2Record_Mil", 14);
#endif
        set_visible(false);
        width = 96;
        height = 32;
        type = IMAGE_COUNTER;
        static Image * counter_images[14];
        static bool initialized = false;
        if (!initialized) {
            initialized = true;
            counter_images[0] = get_internal_image(2774);
            counter_images[1] = get_internal_image(2776);
            counter_images[2] = get_internal_image(2777);
            counter_images[3] = get_internal_image(2778);
            counter_images[4] = get_internal_image(2779);
            counter_images[5] = get_internal_image(2789);
            counter_images[6] = get_internal_image(2795);
            counter_images[7] = get_internal_image(2796);
            counter_images[8] = get_internal_image(2797);
            counter_images[9] = get_internal_image(2798);
            counter_images[10] = get_internal_image(2801);
            counter_images[11] = get_internal_image(2800);
            counter_images[12] = get_internal_image(2802);
            counter_images[13] = get_internal_image(2801);
        }
        images = (Image**)&counter_images;
        image_count = 14;
        minimum = 0;
        maximum = 99;
        set(0);
        set_direction(randrange(32));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(0);
        ((BallMovement*)movement)->set_deceleration(0);
    }
};
FrameObject * create_act2recordmil_241(int x, int y)
{
    return new (Counter::pool.create()) Act2RecordMil_241(x, y);
}
class Act2RecordCrystals2_242 : public Counter
{
public:
    Act2RecordCrystals2_242(int x, int y) : Counter(x, y, Act2RecordCrystals2_242_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Act2Record_Crystals 2", 21);
#endif
        set_visible(false);
        width = 96;
        height = 32;
        type = IMAGE_COUNTER;
        static Image * counter_images[14];
        static bool initialized = false;
        if (!initialized) {
            initialized = true;
            counter_images[0] = get_internal_image(2774);
            counter_images[1] = get_internal_image(2776);
            counter_images[2] = get_internal_image(2777);
            counter_images[3] = get_internal_image(2778);
            counter_images[4] = get_internal_image(2779);
            counter_images[5] = get_internal_image(2789);
            counter_images[6] = get_internal_image(2795);
            counter_images[7] = get_internal_image(2796);
            counter_images[8] = get_internal_image(2797);
            counter_images[9] = get_internal_image(2798);
            counter_images[10] = get_internal_image(2801);
            counter_images[11] = get_internal_image(2800);
            counter_images[12] = get_internal_image(2802);
            counter_images[13] = get_internal_image(2801);
        }
        images = (Image**)&counter_images;
        image_count = 14;
        minimum = 0;
        maximum = 9999;
        set(0);
        set_direction(randrange(32));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(0);
        ((BallMovement*)movement)->set_deceleration(0);
    }
};
FrameObject * create_act2recordcrystals2_242(int x, int y)
{
    return new (Counter::pool.create()) Act2RecordCrystals2_242(x, y);
}
static Image* images_recordcolon_243_0_0[1];
static Direction direction_recordcolon_243_0_0 = {0, 50, 50, 0, 1, images_recordcolon_243_0_0, 1};
static Animation anim_recordcolon_243_0 = {&direction_recordcolon_243_0_0, &direction_recordcolon_243_0_0, &direction_recordcolon_243_0_0, &direction_recordcolon_243_0_0, &direction_recordcolon_243_0_0, &direction_recordcolon_243_0_0, &direction_recordcolon_243_0_0, &direction_recordcolon_243_0_0, &direction_recordcolon_243_0_0, &direction_recordcolon_243_0_0, &direction_recordcolon_243_0_0, &direction_recordcolon_243_0_0, &direction_recordcolon_243_0_0, &direction_recordcolon_243_0_0, &direction_recordcolon_243_0_0, &direction_recordcolon_243_0_0, NULL, &direction_recordcolon_243_0_0, &direction_recordcolon_243_0_0, &direction_recordcolon_243_0_0, &direction_recordcolon_243_0_0, &direction_recordcolon_243_0_0, &direction_recordcolon_243_0_0, &direction_recordcolon_243_0_0, &direction_recordcolon_243_0_0, &direction_recordcolon_243_0_0, &direction_recordcolon_243_0_0, &direction_recordcolon_243_0_0, &direction_recordcolon_243_0_0, &direction_recordcolon_243_0_0, &direction_recordcolon_243_0_0, &direction_recordcolon_243_0_0};
static Animation * anim_array_recordcolon_243[1] = {&anim_recordcolon_243_0};
static Animations anim_recordcolon_243 = {1, &anim_array_recordcolon_243[0]};
static bool anim_recordcolon_243_initialized;
class RecordColon_243 : public Active
{
public:
    RecordColon_243(int x, int y) : Active(x, y, RecordColon_243_type)
    {
        // qualifiers: 13
#ifndef NDEBUG
        name = std::string("Record_Colon", 12);
#endif
        this->animations = &anim_recordcolon_243;
        if (!anim_recordcolon_243_initialized) {
            anim_recordcolon_243_initialized = true;
            images_recordcolon_243_0_0[0] = get_internal_image(2799);
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
FrameObject * create_recordcolon_243(int x, int y)
{
    return new (Active::pool.create()) RecordColon_243(x, y);
}
static Image* images_menusequence_244_0_0[1];
static Direction direction_menusequence_244_0_0 = {0, 50, 50, 0, 1, images_menusequence_244_0_0, 1};
static Animation anim_menusequence_244_0 = {&direction_menusequence_244_0_0, &direction_menusequence_244_0_0, &direction_menusequence_244_0_0, &direction_menusequence_244_0_0, &direction_menusequence_244_0_0, &direction_menusequence_244_0_0, &direction_menusequence_244_0_0, &direction_menusequence_244_0_0, &direction_menusequence_244_0_0, &direction_menusequence_244_0_0, &direction_menusequence_244_0_0, &direction_menusequence_244_0_0, &direction_menusequence_244_0_0, &direction_menusequence_244_0_0, &direction_menusequence_244_0_0, &direction_menusequence_244_0_0, NULL, &direction_menusequence_244_0_0, &direction_menusequence_244_0_0, &direction_menusequence_244_0_0, &direction_menusequence_244_0_0, &direction_menusequence_244_0_0, &direction_menusequence_244_0_0, &direction_menusequence_244_0_0, &direction_menusequence_244_0_0, &direction_menusequence_244_0_0, &direction_menusequence_244_0_0, &direction_menusequence_244_0_0, &direction_menusequence_244_0_0, &direction_menusequence_244_0_0, &direction_menusequence_244_0_0, &direction_menusequence_244_0_0};
static Animation * anim_array_menusequence_244[1] = {&anim_menusequence_244_0};
static Animations anim_menusequence_244 = {1, &anim_array_menusequence_244[0]};
static bool anim_menusequence_244_initialized;
class MenuSequence_244 : public Active
{
public:
    MenuSequence_244(int x, int y) : Active(x, y, MenuSequence_244_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Menu sequence", 13);
#endif
        this->animations = &anim_menusequence_244;
        if (!anim_menusequence_244_initialized) {
            anim_menusequence_244_initialized = true;
            images_menusequence_244_0_0[0] = get_internal_image(2282);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(7, 1);
        alterables->values.set(8, 1);
    }
};
FrameObject * create_menusequence_244(int x, int y)
{
    return new (Active::pool.create()) MenuSequence_244(x, y);
}
static Image* images_playermovementvalues_245_0_0[1];
static Direction direction_playermovementvalues_245_0_0 = {0, 50, 50, 0, 1, images_playermovementvalues_245_0_0, 1};
static Animation anim_playermovementvalues_245_0 = {&direction_playermovementvalues_245_0_0, &direction_playermovementvalues_245_0_0, &direction_playermovementvalues_245_0_0, &direction_playermovementvalues_245_0_0, &direction_playermovementvalues_245_0_0, &direction_playermovementvalues_245_0_0, &direction_playermovementvalues_245_0_0, &direction_playermovementvalues_245_0_0, &direction_playermovementvalues_245_0_0, &direction_playermovementvalues_245_0_0, &direction_playermovementvalues_245_0_0, &direction_playermovementvalues_245_0_0, &direction_playermovementvalues_245_0_0, &direction_playermovementvalues_245_0_0, &direction_playermovementvalues_245_0_0, &direction_playermovementvalues_245_0_0, NULL, &direction_playermovementvalues_245_0_0, &direction_playermovementvalues_245_0_0, &direction_playermovementvalues_245_0_0, &direction_playermovementvalues_245_0_0, &direction_playermovementvalues_245_0_0, &direction_playermovementvalues_245_0_0, &direction_playermovementvalues_245_0_0, &direction_playermovementvalues_245_0_0, &direction_playermovementvalues_245_0_0, &direction_playermovementvalues_245_0_0, &direction_playermovementvalues_245_0_0, &direction_playermovementvalues_245_0_0, &direction_playermovementvalues_245_0_0, &direction_playermovementvalues_245_0_0, &direction_playermovementvalues_245_0_0};
static Animation * anim_array_playermovementvalues_245[1] = {&anim_playermovementvalues_245_0};
static Animations anim_playermovementvalues_245 = {1, &anim_array_playermovementvalues_245[0]};
static bool anim_playermovementvalues_245_initialized;
class PlayerMovementValues_245 : public Active
{
public:
    PlayerMovementValues_245(int x, int y) : Active(x, y, PlayerMovementValues_245_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_MovementValues", 21);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_playermovementvalues_245;
        if (!anim_playermovementvalues_245_initialized) {
            anim_playermovementvalues_245_initialized = true;
            images_playermovementvalues_245_0_0[0] = get_internal_image(194);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(18, 1);
        alterables->values.set(19, 1);
        alterables->values.set(20, 1);
        alterables->values.set(21, 1);
    }
};
FrameObject * create_playermovementvalues_245(int x, int y)
{
    return new (Active::pool.create()) PlayerMovementValues_245(x, y);
}
static Image* images_active_246_0_0[1];
static Direction direction_active_246_0_0 = {0, 50, 50, 0, 1, images_active_246_0_0, 1};
static Animation anim_active_246_0 = {&direction_active_246_0_0, &direction_active_246_0_0, &direction_active_246_0_0, &direction_active_246_0_0, &direction_active_246_0_0, &direction_active_246_0_0, &direction_active_246_0_0, &direction_active_246_0_0, &direction_active_246_0_0, &direction_active_246_0_0, &direction_active_246_0_0, &direction_active_246_0_0, &direction_active_246_0_0, &direction_active_246_0_0, &direction_active_246_0_0, &direction_active_246_0_0, NULL, &direction_active_246_0_0, &direction_active_246_0_0, &direction_active_246_0_0, &direction_active_246_0_0, &direction_active_246_0_0, &direction_active_246_0_0, &direction_active_246_0_0, &direction_active_246_0_0, &direction_active_246_0_0, &direction_active_246_0_0, &direction_active_246_0_0, &direction_active_246_0_0, &direction_active_246_0_0, &direction_active_246_0_0, &direction_active_246_0_0};
static Animation * anim_array_active_246[1] = {&anim_active_246_0};
static Animations anim_active_246 = {1, &anim_array_active_246[0]};
static bool anim_active_246_initialized;
class Active_246 : public Active
{
public:
    Active_246(int x, int y) : Active(x, y, Active_246_type)
    {
        // qualifiers: 13
#ifndef NDEBUG
        name = std::string("Active", 6);
#endif
        set_visible(false);
        this->animations = &anim_active_246;
        if (!anim_active_246_initialized) {
            anim_active_246_initialized = true;
            images_active_246_0_0[0] = get_internal_image(655);
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
FrameObject * create_active_246(int x, int y)
{
    return new (Active::pool.create()) Active_246(x, y);
}
static Image* images_active2_247_0_0[1];
static Direction direction_active2_247_0_0 = {0, 50, 50, 0, 1, images_active2_247_0_0, 1};
static Animation anim_active2_247_0 = {&direction_active2_247_0_0, &direction_active2_247_0_0, &direction_active2_247_0_0, &direction_active2_247_0_0, &direction_active2_247_0_0, &direction_active2_247_0_0, &direction_active2_247_0_0, &direction_active2_247_0_0, &direction_active2_247_0_0, &direction_active2_247_0_0, &direction_active2_247_0_0, &direction_active2_247_0_0, &direction_active2_247_0_0, &direction_active2_247_0_0, &direction_active2_247_0_0, &direction_active2_247_0_0, NULL, &direction_active2_247_0_0, &direction_active2_247_0_0, &direction_active2_247_0_0, &direction_active2_247_0_0, &direction_active2_247_0_0, &direction_active2_247_0_0, &direction_active2_247_0_0, &direction_active2_247_0_0, &direction_active2_247_0_0, &direction_active2_247_0_0, &direction_active2_247_0_0, &direction_active2_247_0_0, &direction_active2_247_0_0, &direction_active2_247_0_0, &direction_active2_247_0_0};
static Animation * anim_array_active2_247[1] = {&anim_active2_247_0};
static Animations anim_active2_247 = {1, &anim_array_active2_247[0]};
static bool anim_active2_247_initialized;
class Active2_247 : public Active
{
public:
    Active2_247(int x, int y) : Active(x, y, Active2_247_type)
    {
        // qualifiers: 13
#ifndef NDEBUG
        name = std::string("Active 2", 8);
#endif
        set_visible(false);
        this->animations = &anim_active2_247;
        if (!anim_active2_247_initialized) {
            anim_active2_247_initialized = true;
            images_active2_247_0_0[0] = get_internal_image(1096);
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
FrameObject * create_active2_247(int x, int y)
{
    return new (Active::pool.create()) Active2_247(x, y);
}
static Image* images_bordertop_248_0_0[1];
static Direction direction_bordertop_248_0_0 = {0, 50, 50, 0, 1, images_bordertop_248_0_0, 1};
static Animation anim_bordertop_248_0 = {&direction_bordertop_248_0_0, &direction_bordertop_248_0_0, &direction_bordertop_248_0_0, &direction_bordertop_248_0_0, &direction_bordertop_248_0_0, &direction_bordertop_248_0_0, &direction_bordertop_248_0_0, &direction_bordertop_248_0_0, &direction_bordertop_248_0_0, &direction_bordertop_248_0_0, &direction_bordertop_248_0_0, &direction_bordertop_248_0_0, &direction_bordertop_248_0_0, &direction_bordertop_248_0_0, &direction_bordertop_248_0_0, &direction_bordertop_248_0_0, NULL, &direction_bordertop_248_0_0, &direction_bordertop_248_0_0, &direction_bordertop_248_0_0, &direction_bordertop_248_0_0, &direction_bordertop_248_0_0, &direction_bordertop_248_0_0, &direction_bordertop_248_0_0, &direction_bordertop_248_0_0, &direction_bordertop_248_0_0, &direction_bordertop_248_0_0, &direction_bordertop_248_0_0, &direction_bordertop_248_0_0, &direction_bordertop_248_0_0, &direction_bordertop_248_0_0, &direction_bordertop_248_0_0};
static Animation * anim_array_bordertop_248[1] = {&anim_bordertop_248_0};
static Animations anim_bordertop_248 = {1, &anim_array_bordertop_248[0]};
static bool anim_bordertop_248_initialized;
class BorderTop_248 : public Active
{
public:
    BorderTop_248(int x, int y) : Active(x, y, BorderTop_248_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Border top", 10);
#endif
        this->animations = &anim_bordertop_248;
        if (!anim_bordertop_248_initialized) {
            anim_bordertop_248_initialized = true;
            images_bordertop_248_0_0[0] = get_internal_image(638);
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
FrameObject * create_bordertop_248(int x, int y)
{
    return new (Active::pool.create()) BorderTop_248(x, y);
}
static Image* images_borderbottom_249_0_0[1];
static Direction direction_borderbottom_249_0_0 = {0, 50, 50, 0, 1, images_borderbottom_249_0_0, 1};
static Animation anim_borderbottom_249_0 = {&direction_borderbottom_249_0_0, &direction_borderbottom_249_0_0, &direction_borderbottom_249_0_0, &direction_borderbottom_249_0_0, &direction_borderbottom_249_0_0, &direction_borderbottom_249_0_0, &direction_borderbottom_249_0_0, &direction_borderbottom_249_0_0, &direction_borderbottom_249_0_0, &direction_borderbottom_249_0_0, &direction_borderbottom_249_0_0, &direction_borderbottom_249_0_0, &direction_borderbottom_249_0_0, &direction_borderbottom_249_0_0, &direction_borderbottom_249_0_0, &direction_borderbottom_249_0_0, NULL, &direction_borderbottom_249_0_0, &direction_borderbottom_249_0_0, &direction_borderbottom_249_0_0, &direction_borderbottom_249_0_0, &direction_borderbottom_249_0_0, &direction_borderbottom_249_0_0, &direction_borderbottom_249_0_0, &direction_borderbottom_249_0_0, &direction_borderbottom_249_0_0, &direction_borderbottom_249_0_0, &direction_borderbottom_249_0_0, &direction_borderbottom_249_0_0, &direction_borderbottom_249_0_0, &direction_borderbottom_249_0_0, &direction_borderbottom_249_0_0};
static Animation * anim_array_borderbottom_249[1] = {&anim_borderbottom_249_0};
static Animations anim_borderbottom_249 = {1, &anim_array_borderbottom_249[0]};
static bool anim_borderbottom_249_initialized;
class BorderBottom_249 : public Active
{
public:
    BorderBottom_249(int x, int y) : Active(x, y, BorderBottom_249_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Border bottom", 13);
#endif
        this->animations = &anim_borderbottom_249;
        if (!anim_borderbottom_249_initialized) {
            anim_borderbottom_249_initialized = true;
            images_borderbottom_249_0_0[0] = get_internal_image(636);
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
FrameObject * create_borderbottom_249(int x, int y)
{
    return new (Active::pool.create()) BorderBottom_249(x, y);
}
static Image* images_card_250_0_0[1];
static Direction direction_card_250_0_0 = {0, 17, 17, 0, -1, images_card_250_0_0, 1};
static Image* images_card_250_0_8[10];
static Direction direction_card_250_0_8 = {8, 17, 17, 0, -1, images_card_250_0_8, 10};
static Animation anim_card_250_0 = {&direction_card_250_0_0, &direction_card_250_0_0, &direction_card_250_0_0, &direction_card_250_0_0, NULL, &direction_card_250_0_8, &direction_card_250_0_8, &direction_card_250_0_8, &direction_card_250_0_8, &direction_card_250_0_8, &direction_card_250_0_8, &direction_card_250_0_8, &direction_card_250_0_8, &direction_card_250_0_8, &direction_card_250_0_8, &direction_card_250_0_8, &direction_card_250_0_8, &direction_card_250_0_8, &direction_card_250_0_8, &direction_card_250_0_8, NULL, &direction_card_250_0_0, &direction_card_250_0_0, &direction_card_250_0_0, &direction_card_250_0_0, &direction_card_250_0_0, &direction_card_250_0_0, &direction_card_250_0_0, &direction_card_250_0_0, &direction_card_250_0_0, &direction_card_250_0_0, &direction_card_250_0_0};
static Animation * anim_array_card_250[1] = {&anim_card_250_0};
static Animations anim_card_250 = {1, &anim_array_card_250[0]};
static bool anim_card_250_initialized;
class Card_250 : public Active
{
public:
    Card_250(int x, int y) : Active(x, y, Card_250_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Card", 4);
#endif
        set_visible(false);
        this->animations = &anim_card_250;
        if (!anim_card_250_initialized) {
            anim_card_250_initialized = true;
            images_card_250_0_0[0] = get_internal_image(1251);
            images_card_250_0_8[0] = get_internal_image(267);
            images_card_250_0_8[1] = get_internal_image(266);
            images_card_250_0_8[2] = get_internal_image(1009);
            images_card_250_0_8[3] = get_internal_image(1010);
            images_card_250_0_8[4] = get_internal_image(958);
            images_card_250_0_8[5] = get_internal_image(1008);
            images_card_250_0_8[6] = get_internal_image(272);
            images_card_250_0_8[7] = get_internal_image(986);
            images_card_250_0_8[8] = get_internal_image(987);
            images_card_250_0_8[9] = get_internal_image(989);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(24);
        create_alterables();
    }
};
FrameObject * create_card_250(int x, int y)
{
    return new (Active::pool.create()) Card_250(x, y);
}
static Image* images_crystalcursor_251_0_0[7];
static Direction direction_crystalcursor_251_0_0 = {0, 18, 18, 0, -1, images_crystalcursor_251_0_0, 7};
static Animation anim_crystalcursor_251_0 = {&direction_crystalcursor_251_0_0, &direction_crystalcursor_251_0_0, &direction_crystalcursor_251_0_0, &direction_crystalcursor_251_0_0, &direction_crystalcursor_251_0_0, &direction_crystalcursor_251_0_0, &direction_crystalcursor_251_0_0, &direction_crystalcursor_251_0_0, &direction_crystalcursor_251_0_0, &direction_crystalcursor_251_0_0, &direction_crystalcursor_251_0_0, &direction_crystalcursor_251_0_0, &direction_crystalcursor_251_0_0, &direction_crystalcursor_251_0_0, &direction_crystalcursor_251_0_0, &direction_crystalcursor_251_0_0, NULL, &direction_crystalcursor_251_0_0, &direction_crystalcursor_251_0_0, &direction_crystalcursor_251_0_0, &direction_crystalcursor_251_0_0, &direction_crystalcursor_251_0_0, &direction_crystalcursor_251_0_0, &direction_crystalcursor_251_0_0, &direction_crystalcursor_251_0_0, &direction_crystalcursor_251_0_0, &direction_crystalcursor_251_0_0, &direction_crystalcursor_251_0_0, &direction_crystalcursor_251_0_0, &direction_crystalcursor_251_0_0, &direction_crystalcursor_251_0_0, &direction_crystalcursor_251_0_0};
static Animation * anim_array_crystalcursor_251[1] = {&anim_crystalcursor_251_0};
static Animations anim_crystalcursor_251 = {1, &anim_array_crystalcursor_251[0]};
static bool anim_crystalcursor_251_initialized;
class CrystalCursor_251 : public Active
{
public:
    CrystalCursor_251(int x, int y) : Active(x, y, CrystalCursor_251_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Crystal cursor", 14);
#endif
        set_visible(false);
        this->animations = &anim_crystalcursor_251;
        if (!anim_crystalcursor_251_initialized) {
            anim_crystalcursor_251_initialized = true;
            images_crystalcursor_251_0_0[0] = get_internal_image(2518);
            images_crystalcursor_251_0_0[1] = get_internal_image(2497);
            images_crystalcursor_251_0_0[2] = get_internal_image(2536);
            images_crystalcursor_251_0_0[3] = get_internal_image(2537);
            images_crystalcursor_251_0_0[4] = get_internal_image(2538);
            images_crystalcursor_251_0_0[5] = get_internal_image(2539);
            images_crystalcursor_251_0_0[6] = get_internal_image(2540);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        movement_count = 2;
        movements = new Movement*[2];
        set_direction(24);
        movements[0] = new StaticMovement(this);
        movements[0]->index = 0;
        movements[1] = new PinballMovement(this);
        movements[1]->index = 1;
        ((PinballMovement*)movements[1])->set_max_speed(36);
        ((PinballMovement*)movements[1])->set_deceleration(0);
        ((PinballMovement*)movements[1])->set_gravity(25);
        set_movement(0);
        create_alterables();
        alterables->values.set(0, 1);
        alterables->values.set(1, 128);
    }
};
FrameObject * create_crystalcursor_251(int x, int y)
{
    return new (Active::pool.create()) CrystalCursor_251(x, y);
}
static Image* images_continue_252_0_0[1];
static Direction direction_continue_252_0_0 = {0, 50, 50, 0, 1, images_continue_252_0_0, 1};
static Animation anim_continue_252_0 = {&direction_continue_252_0_0, &direction_continue_252_0_0, &direction_continue_252_0_0, &direction_continue_252_0_0, &direction_continue_252_0_0, &direction_continue_252_0_0, &direction_continue_252_0_0, &direction_continue_252_0_0, &direction_continue_252_0_0, &direction_continue_252_0_0, &direction_continue_252_0_0, &direction_continue_252_0_0, &direction_continue_252_0_0, &direction_continue_252_0_0, &direction_continue_252_0_0, &direction_continue_252_0_0, NULL, &direction_continue_252_0_0, &direction_continue_252_0_0, &direction_continue_252_0_0, &direction_continue_252_0_0, &direction_continue_252_0_0, &direction_continue_252_0_0, &direction_continue_252_0_0, &direction_continue_252_0_0, &direction_continue_252_0_0, &direction_continue_252_0_0, &direction_continue_252_0_0, &direction_continue_252_0_0, &direction_continue_252_0_0, &direction_continue_252_0_0, &direction_continue_252_0_0};
static Animation * anim_array_continue_252[1] = {&anim_continue_252_0};
static Animations anim_continue_252 = {1, &anim_array_continue_252[0]};
static bool anim_continue_252_initialized;
class Continue_252 : public Active
{
public:
    Continue_252(int x, int y) : Active(x, y, Continue_252_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Continue", 8);
#endif
        set_visible(false);
        this->animations = &anim_continue_252;
        if (!anim_continue_252_initialized) {
            anim_continue_252_initialized = true;
            images_continue_252_0_0[0] = get_internal_image(2373);
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
FrameObject * create_continue_252(int x, int y)
{
    return new (Active::pool.create()) Continue_252(x, y);
}
static Image* images_newrecord_253_0_0[1];
static Direction direction_newrecord_253_0_0 = {0, 50, 50, 0, 1, images_newrecord_253_0_0, 1};
static Image* images_newrecord_253_0_16[1];
static Direction direction_newrecord_253_0_16 = {16, 50, 50, 0, 1, images_newrecord_253_0_16, 1};
static Image* images_newrecord_253_0_24[1];
static Direction direction_newrecord_253_0_24 = {24, 50, 50, 0, 1, images_newrecord_253_0_24, 1};
static Animation anim_newrecord_253_0 = {&direction_newrecord_253_0_0, &direction_newrecord_253_0_0, &direction_newrecord_253_0_0, &direction_newrecord_253_0_0, &direction_newrecord_253_0_0, &direction_newrecord_253_0_0, &direction_newrecord_253_0_0, &direction_newrecord_253_0_0, NULL, &direction_newrecord_253_0_16, &direction_newrecord_253_0_16, &direction_newrecord_253_0_16, &direction_newrecord_253_0_16, &direction_newrecord_253_0_16, &direction_newrecord_253_0_16, &direction_newrecord_253_0_16, &direction_newrecord_253_0_16, &direction_newrecord_253_0_16, &direction_newrecord_253_0_16, &direction_newrecord_253_0_16, NULL, &direction_newrecord_253_0_24, &direction_newrecord_253_0_24, &direction_newrecord_253_0_24, &direction_newrecord_253_0_24, &direction_newrecord_253_0_24, &direction_newrecord_253_0_24, &direction_newrecord_253_0_24, NULL, &direction_newrecord_253_0_0, &direction_newrecord_253_0_0, &direction_newrecord_253_0_0};
static Animation * anim_array_newrecord_253[1] = {&anim_newrecord_253_0};
static Animations anim_newrecord_253 = {1, &anim_array_newrecord_253[0]};
static bool anim_newrecord_253_initialized;
class NewRecord_253 : public Active
{
public:
    NewRecord_253(int x, int y) : Active(x, y, NewRecord_253_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("New Record", 10);
#endif
        set_visible(false);
        this->animations = &anim_newrecord_253;
        if (!anim_newrecord_253_initialized) {
            anim_newrecord_253_initialized = true;
            images_newrecord_253_0_0[0] = get_internal_image(432);
            images_newrecord_253_0_16[0] = get_internal_image(2488);
            images_newrecord_253_0_24[0] = get_internal_image(2477);
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
FrameObject * create_newrecord_253(int x, int y)
{
    return new (Active::pool.create()) NewRecord_253(x, y);
}
static Image* images_unlocked_254_0_0[1];
static Direction direction_unlocked_254_0_0 = {0, 50, 50, 0, 1, images_unlocked_254_0_0, 1};
static Animation anim_unlocked_254_0 = {&direction_unlocked_254_0_0, &direction_unlocked_254_0_0, &direction_unlocked_254_0_0, &direction_unlocked_254_0_0, &direction_unlocked_254_0_0, &direction_unlocked_254_0_0, &direction_unlocked_254_0_0, &direction_unlocked_254_0_0, &direction_unlocked_254_0_0, &direction_unlocked_254_0_0, &direction_unlocked_254_0_0, &direction_unlocked_254_0_0, &direction_unlocked_254_0_0, &direction_unlocked_254_0_0, &direction_unlocked_254_0_0, &direction_unlocked_254_0_0, NULL, &direction_unlocked_254_0_0, &direction_unlocked_254_0_0, &direction_unlocked_254_0_0, &direction_unlocked_254_0_0, &direction_unlocked_254_0_0, &direction_unlocked_254_0_0, &direction_unlocked_254_0_0, &direction_unlocked_254_0_0, &direction_unlocked_254_0_0, &direction_unlocked_254_0_0, &direction_unlocked_254_0_0, &direction_unlocked_254_0_0, &direction_unlocked_254_0_0, &direction_unlocked_254_0_0, &direction_unlocked_254_0_0};
static Animation * anim_array_unlocked_254[1] = {&anim_unlocked_254_0};
static Animations anim_unlocked_254 = {1, &anim_array_unlocked_254[0]};
static bool anim_unlocked_254_initialized;
class Unlocked_254 : public Active
{
public:
    Unlocked_254(int x, int y) : Active(x, y, Unlocked_254_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Unlocked!", 9);
#endif
        this->animations = &anim_unlocked_254;
        if (!anim_unlocked_254_initialized) {
            anim_unlocked_254_initialized = true;
            images_unlocked_254_0_0[0] = get_internal_image(2158);
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
FrameObject * create_unlocked_254(int x, int y)
{
    return new (Active::pool.create()) Unlocked_254(x, y);
}
static Image* images_menusequence_255_0_0[1];
static Direction direction_menusequence_255_0_0 = {0, 50, 50, 0, 1, images_menusequence_255_0_0, 1};
static Animation anim_menusequence_255_0 = {&direction_menusequence_255_0_0, &direction_menusequence_255_0_0, &direction_menusequence_255_0_0, &direction_menusequence_255_0_0, &direction_menusequence_255_0_0, &direction_menusequence_255_0_0, &direction_menusequence_255_0_0, &direction_menusequence_255_0_0, &direction_menusequence_255_0_0, &direction_menusequence_255_0_0, &direction_menusequence_255_0_0, &direction_menusequence_255_0_0, &direction_menusequence_255_0_0, &direction_menusequence_255_0_0, &direction_menusequence_255_0_0, &direction_menusequence_255_0_0, NULL, &direction_menusequence_255_0_0, &direction_menusequence_255_0_0, &direction_menusequence_255_0_0, &direction_menusequence_255_0_0, &direction_menusequence_255_0_0, &direction_menusequence_255_0_0, &direction_menusequence_255_0_0, &direction_menusequence_255_0_0, &direction_menusequence_255_0_0, &direction_menusequence_255_0_0, &direction_menusequence_255_0_0, &direction_menusequence_255_0_0, &direction_menusequence_255_0_0, &direction_menusequence_255_0_0, &direction_menusequence_255_0_0};
static Animation * anim_array_menusequence_255[1] = {&anim_menusequence_255_0};
static Animations anim_menusequence_255 = {1, &anim_array_menusequence_255[0]};
static bool anim_menusequence_255_initialized;
class MenuSequence_255 : public Active
{
public:
    MenuSequence_255(int x, int y) : Active(x, y, MenuSequence_255_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Menu sequence", 13);
#endif
        set_visible(false);
        this->animations = &anim_menusequence_255;
        if (!anim_menusequence_255_initialized) {
            anim_menusequence_255_initialized = true;
            images_menusequence_255_0_0[0] = get_internal_image(2282);
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
FrameObject * create_menusequence_255(int x, int y)
{
    return new (Active::pool.create()) MenuSequence_255(x, y);
}
static Image* images_shine_256_4_0[14];
static Direction direction_shine_256_4_0 = {0, 50, 50, 0, 1, images_shine_256_4_0, 14};
static Animation anim_shine_256_4 = {&direction_shine_256_4_0, &direction_shine_256_4_0, &direction_shine_256_4_0, &direction_shine_256_4_0, &direction_shine_256_4_0, &direction_shine_256_4_0, &direction_shine_256_4_0, &direction_shine_256_4_0, &direction_shine_256_4_0, &direction_shine_256_4_0, &direction_shine_256_4_0, &direction_shine_256_4_0, &direction_shine_256_4_0, &direction_shine_256_4_0, &direction_shine_256_4_0, &direction_shine_256_4_0, NULL, &direction_shine_256_4_0, &direction_shine_256_4_0, &direction_shine_256_4_0, &direction_shine_256_4_0, &direction_shine_256_4_0, &direction_shine_256_4_0, &direction_shine_256_4_0, &direction_shine_256_4_0, &direction_shine_256_4_0, &direction_shine_256_4_0, &direction_shine_256_4_0, &direction_shine_256_4_0, &direction_shine_256_4_0, &direction_shine_256_4_0, &direction_shine_256_4_0};
static Animation * anim_array_shine_256[5] = {NULL, NULL, NULL, NULL, &anim_shine_256_4};
static Animations anim_shine_256 = {5, &anim_array_shine_256[0]};
static bool anim_shine_256_initialized;
class Shine_256 : public Active
{
public:
    Shine_256(int x, int y) : Active(x, y, Shine_256_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Shine", 5);
#endif
        this->animations = &anim_shine_256;
        if (!anim_shine_256_initialized) {
            anim_shine_256_initialized = true;
            images_shine_256_4_0[0] = get_internal_image(7816);
            images_shine_256_4_0[1] = get_internal_image(2160);
            images_shine_256_4_0[2] = get_internal_image(7816);
            images_shine_256_4_0[3] = get_internal_image(2160);
            images_shine_256_4_0[4] = get_internal_image(7816);
            images_shine_256_4_0[5] = get_internal_image(7817);
            images_shine_256_4_0[6] = get_internal_image(7818);
            images_shine_256_4_0[7] = get_internal_image(7819);
            images_shine_256_4_0[8] = get_internal_image(7820);
            images_shine_256_4_0[9] = get_internal_image(7821);
            images_shine_256_4_0[10] = get_internal_image(7822);
            images_shine_256_4_0[11] = get_internal_image(7823);
            images_shine_256_4_0[12] = get_internal_image(7825);
            images_shine_256_4_0[13] = get_internal_image(7827);
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
FrameObject * create_shine_256(int x, int y)
{
    return new (Active::pool.create()) Shine_256(x, y);
}
static Image* images_achievement_257_0_0[57];
static Direction direction_achievement_257_0_0 = {0, 50, 50, 0, 1, images_achievement_257_0_0, 57};
static Image* images_achievement_257_0_1[1];
static Direction direction_achievement_257_0_1 = {1, 50, 50, 0, 1, images_achievement_257_0_1, 1};
static Animation anim_achievement_257_0 = {&direction_achievement_257_0_0, &direction_achievement_257_0_1, &direction_achievement_257_0_1, &direction_achievement_257_0_1, &direction_achievement_257_0_1, &direction_achievement_257_0_1, &direction_achievement_257_0_1, &direction_achievement_257_0_1, &direction_achievement_257_0_1, &direction_achievement_257_0_1, &direction_achievement_257_0_1, &direction_achievement_257_0_1, &direction_achievement_257_0_1, &direction_achievement_257_0_1, &direction_achievement_257_0_1, &direction_achievement_257_0_1, &direction_achievement_257_0_1, &direction_achievement_257_0_0, &direction_achievement_257_0_0, &direction_achievement_257_0_0, &direction_achievement_257_0_0, &direction_achievement_257_0_0, &direction_achievement_257_0_0, &direction_achievement_257_0_0, &direction_achievement_257_0_0, &direction_achievement_257_0_0, &direction_achievement_257_0_0, &direction_achievement_257_0_0, &direction_achievement_257_0_0, &direction_achievement_257_0_0, &direction_achievement_257_0_0, &direction_achievement_257_0_0};
static Animation * anim_array_achievement_257[1] = {&anim_achievement_257_0};
static Animations anim_achievement_257 = {1, &anim_array_achievement_257[0]};
static bool anim_achievement_257_initialized;
class Achievement_257 : public Active
{
public:
    Achievement_257(int x, int y) : Active(x, y, Achievement_257_type)
    {
        // qualifiers: 13
#ifndef NDEBUG
        name = std::string("Achievement", 11);
#endif
        set_visible(false);
        this->animations = &anim_achievement_257;
        if (!anim_achievement_257_initialized) {
            anim_achievement_257_initialized = true;
            images_achievement_257_0_0[0] = get_internal_image(2173);
            images_achievement_257_0_0[1] = get_internal_image(2161);
            images_achievement_257_0_0[2] = get_internal_image(2162);
            images_achievement_257_0_0[3] = get_internal_image(2163);
            images_achievement_257_0_0[4] = get_internal_image(2172);
            images_achievement_257_0_0[5] = get_internal_image(7528);
            images_achievement_257_0_0[6] = get_internal_image(32);
            images_achievement_257_0_0[7] = get_internal_image(153);
            images_achievement_257_0_0[8] = get_internal_image(153);
            images_achievement_257_0_0[9] = get_internal_image(153);
            images_achievement_257_0_0[10] = get_internal_image(2179);
            images_achievement_257_0_0[11] = get_internal_image(2181);
            images_achievement_257_0_0[12] = get_internal_image(2182);
            images_achievement_257_0_0[13] = get_internal_image(4371);
            images_achievement_257_0_0[14] = get_internal_image(2184);
            images_achievement_257_0_0[15] = get_internal_image(2185);
            images_achievement_257_0_0[16] = get_internal_image(142);
            images_achievement_257_0_0[17] = get_internal_image(179);
            images_achievement_257_0_0[18] = get_internal_image(242);
            images_achievement_257_0_0[19] = get_internal_image(2144);
            images_achievement_257_0_0[20] = get_internal_image(398);
            images_achievement_257_0_0[21] = get_internal_image(2863);
            images_achievement_257_0_0[22] = get_internal_image(2885);
            images_achievement_257_0_0[23] = get_internal_image(310);
            images_achievement_257_0_0[24] = get_internal_image(310);
            images_achievement_257_0_0[25] = get_internal_image(310);
            images_achievement_257_0_0[26] = get_internal_image(310);
            images_achievement_257_0_0[27] = get_internal_image(310);
            images_achievement_257_0_0[28] = get_internal_image(310);
            images_achievement_257_0_0[29] = get_internal_image(310);
            images_achievement_257_0_0[30] = get_internal_image(310);
            images_achievement_257_0_0[31] = get_internal_image(310);
            images_achievement_257_0_0[32] = get_internal_image(310);
            images_achievement_257_0_0[33] = get_internal_image(6976);
            images_achievement_257_0_0[34] = get_internal_image(6977);
            images_achievement_257_0_0[35] = get_internal_image(6978);
            images_achievement_257_0_0[36] = get_internal_image(6975);
            images_achievement_257_0_0[37] = get_internal_image(6981);
            images_achievement_257_0_0[38] = get_internal_image(7025);
            images_achievement_257_0_0[39] = get_internal_image(7030);
            images_achievement_257_0_0[40] = get_internal_image(7041);
            images_achievement_257_0_0[41] = get_internal_image(7521);
            images_achievement_257_0_0[42] = get_internal_image(7524);
            images_achievement_257_0_0[43] = get_internal_image(2178);
            images_achievement_257_0_0[44] = get_internal_image(2178);
            images_achievement_257_0_0[45] = get_internal_image(2178);
            images_achievement_257_0_0[46] = get_internal_image(2178);
            images_achievement_257_0_0[47] = get_internal_image(2178);
            images_achievement_257_0_0[48] = get_internal_image(2178);
            images_achievement_257_0_0[49] = get_internal_image(2178);
            images_achievement_257_0_0[50] = get_internal_image(2178);
            images_achievement_257_0_0[51] = get_internal_image(2178);
            images_achievement_257_0_0[52] = get_internal_image(2178);
            images_achievement_257_0_0[53] = get_internal_image(2178);
            images_achievement_257_0_0[54] = get_internal_image(2178);
            images_achievement_257_0_0[55] = get_internal_image(2178);
            images_achievement_257_0_0[56] = get_internal_image(2178);
            images_achievement_257_0_1[0] = get_internal_image(11481);
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
FrameObject * create_achievement_257(int x, int y)
{
    return new (Active::pool.create()) Achievement_257(x, y);
}
static Image* images_sweep_258_0_0[1];
static Direction direction_sweep_258_0_0 = {0, 50, 50, 0, 1, images_sweep_258_0_0, 1};
static Animation anim_sweep_258_0 = {&direction_sweep_258_0_0, &direction_sweep_258_0_0, &direction_sweep_258_0_0, &direction_sweep_258_0_0, &direction_sweep_258_0_0, &direction_sweep_258_0_0, &direction_sweep_258_0_0, &direction_sweep_258_0_0, &direction_sweep_258_0_0, &direction_sweep_258_0_0, &direction_sweep_258_0_0, &direction_sweep_258_0_0, &direction_sweep_258_0_0, &direction_sweep_258_0_0, &direction_sweep_258_0_0, &direction_sweep_258_0_0, NULL, &direction_sweep_258_0_0, &direction_sweep_258_0_0, &direction_sweep_258_0_0, &direction_sweep_258_0_0, &direction_sweep_258_0_0, &direction_sweep_258_0_0, &direction_sweep_258_0_0, &direction_sweep_258_0_0, &direction_sweep_258_0_0, &direction_sweep_258_0_0, &direction_sweep_258_0_0, &direction_sweep_258_0_0, &direction_sweep_258_0_0, &direction_sweep_258_0_0, &direction_sweep_258_0_0};
static Animation * anim_array_sweep_258[1] = {&anim_sweep_258_0};
static Animations anim_sweep_258 = {1, &anim_array_sweep_258[0]};
static bool anim_sweep_258_initialized;
class Sweep_258 : public Active
{
public:
    Sweep_258(int x, int y) : Active(x, y, Sweep_258_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Sweep", 5);
#endif
        this->animations = &anim_sweep_258;
        if (!anim_sweep_258_initialized) {
            anim_sweep_258_initialized = true;
            images_sweep_258_0_0[0] = get_internal_image(7788);
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
FrameObject * create_sweep_258(int x, int y)
{
    return new (Active::pool.create()) Sweep_258(x, y);
}
class ListNames_259 : public Text
{
public:
    ListNames_259(int x, int y) : Text(x, y, ListNames_259_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("List_Names", 10);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("Dragon Power", 12));
        add_line(std::string("Call of the Wildcat", 19));
        add_line(std::string("Spirit of the Hound", 19));
        add_line(std::string("No Death Clear", 14));
        add_line(std::string("Speedrunner Clear", 17));
        add_line(std::string("Gem Hoarder", 11));
        add_line(std::string("Target Master (Lilac)", 21));
        add_line(std::string("Target Master (Carol)", 21));
        add_line(std::string("Target Master (Milla)", 21));
        add_line(std::string("Rising Slash Finish", 19));
        add_line(std::string("Dragon Cyclone Finish", 21));
        add_line(std::string("Dragon Boost Finish", 19));
        add_line(std::string("Wild Claw Finish", 16));
        add_line(std::string("Wild Kick Finish", 16));
        add_line(std::string("Motorcycle Finish", 17));
        add_line(std::string("Phantom Block Finish", 20));
        add_line(std::string("Super Shield Burst Finish", 25));
        add_line(std::string("Lilac the Switch Skipper", 24));
        add_line(std::string("Claw Bypass", 11));
        add_line(std::string("Disco Fever", 11));
        add_line(std::string("CPU Finish", 10));
        add_line(std::string("Boost Perfectionist", 19));
        add_line(std::string("Card Collector\r\n(Dragon Valley)", 31));
        add_line(std::string("Card Collector\r\n(Relic Maze)", 28));
        add_line(std::string("Card Collector\r\n(Aqua Tunnel)", 29));
        add_line(std::string("Card Collector\r\n(Fortune Night)", 31));
        add_line(std::string("Card Collector\r\n(Sky Battalion)", 31));
        add_line(std::string("Card Collector\r\n(Jade Creek)", 28));
        add_line(std::string("Card Collector\r\n(Thermal Base)", 30));
        add_line(std::string("Card Collector\r\n(Trap Hideout)", 30));
        add_line(std::string("Card Collector\r\n(Pangu Lagoon)", 30));
        add_line(std::string("Card Collector\r\n(Battle Glacier)", 32));
        add_line(std::string("Rolling Stones", 14));
        add_line(std::string("Push Block KO", 13));
        add_line(std::string("All Bone, No Brain", 18));
        add_line(std::string("Preemptive Strike I", 19));
        add_line(std::string("Preemptive Strike II", 20));
        add_line(std::string("Treasure Hunter", 15));
        add_line(std::string("Ledge Taunt", 11));
        add_line(std::string("Freefaller", 10));
        add_line(std::string("Secret Melody", 13));
        add_line(std::string("Milla Unlocked!\r\n(Classic Mode)", 31));
        add_line(std::string("Dragon Valley Speedrunner", 25));
        add_line(std::string("Relic Maze Speedrunner", 22));
        add_line(std::string("Aqua Tunnel Speedrunner", 23));
        add_line(std::string("Fortune Night Speedrunner", 25));
        add_line(std::string("Sky Battalion Speedrunner", 25));
        add_line(std::string("Jade Creek Speedrunner", 22));
        add_line(std::string("Thermal Base Speedrunner", 24));
        add_line(std::string("Trap Hideout Speedrunner", 24));
        add_line(std::string("Pangu Lagoon Speedrunner", 24));
        add_line(std::string("Battle Glacier Speedrunner", 26));
        add_line(std::string("Final Dreadnought 1 Speedrunner", 31));
        add_line(std::string("Final Dreadnought 2 Speedrunner", 31));
        add_line(std::string("Final Dreadnought 3 Speedrunner", 31));
        add_line(std::string("Final Dreadnought 4 Speedrunner", 31));
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
FrameObject * create_listnames_259(int x, int y)
{
    return new (Text::pool.create()) ListNames_259(x, y);
}
class AchievementName_260 : public TextBlitter
{
public:
    AchievementName_260(int x, int y) : TextBlitter(x, y, AchievementName_260_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("AchievementName", 15);
#endif
        width = 192;
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
        set_text(std::string(" ", 1));
        has_callback = false;
        create_alterables();
    }
};
FrameObject * create_achievementname_260(int x, int y)
{
    return new (TextBlitter::pool.create()) AchievementName_260(x, y);
}
class SaveData_261 : public ArrayObject
{
public:
    SaveData_261(int x, int y) : ArrayObject(x, y, SaveData_261_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("SaveData", 8);
#endif
        initialize(true, 1, 3, 99, 1);
    }
};
FrameObject * create_savedata_261(int x, int y)
{
    return new (ArrayObject::pool.create()) SaveData_261(x, y);
}
class QuickBackdrop_262 : public QuickBackdrop
{
public:
    QuickBackdrop_262(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop", 14);
#endif
        flags |= BACKGROUND;
        width = 644;
        height = 244;
        color = Color(0, 0, 0);
        gradient_type = NONE_GRADIENT;
        outline = 0;
    }
};
FrameObject * create_quickbackdrop_262(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop_262(x, y);
}
class CheckerPattern_263 : public SystemBox
{
public:
    CheckerPattern_263(int x, int y) : SystemBox(x, y, CheckerPattern_263_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Checker pattern", 15);
#endif
        flags |= BACKGROUND;
        width = 160;
        height = 320;
        type = PATTERN_IMAGE;
        image = get_internal_image(3077);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_checkerpattern_263(int x, int y)
{
    return new (SystemBox::pool.create()) CheckerPattern_263(x, y);
}
static Image* images_active2_264_0_0[1];
static Direction direction_active2_264_0_0 = {0, 50, 50, 0, 1, images_active2_264_0_0, 1};
static Image* images_active2_264_0_8[1];
static Direction direction_active2_264_0_8 = {8, 50, 50, 0, 1, images_active2_264_0_8, 1};
static Animation anim_active2_264_0 = {&direction_active2_264_0_0, &direction_active2_264_0_0, &direction_active2_264_0_0, &direction_active2_264_0_0, NULL, &direction_active2_264_0_8, &direction_active2_264_0_8, &direction_active2_264_0_8, &direction_active2_264_0_8, &direction_active2_264_0_8, &direction_active2_264_0_8, &direction_active2_264_0_8, &direction_active2_264_0_8, &direction_active2_264_0_8, &direction_active2_264_0_8, &direction_active2_264_0_8, &direction_active2_264_0_8, &direction_active2_264_0_8, &direction_active2_264_0_8, &direction_active2_264_0_8, NULL, &direction_active2_264_0_0, &direction_active2_264_0_0, &direction_active2_264_0_0, &direction_active2_264_0_0, &direction_active2_264_0_0, &direction_active2_264_0_0, &direction_active2_264_0_0, &direction_active2_264_0_0, &direction_active2_264_0_0, &direction_active2_264_0_0, &direction_active2_264_0_0};
static Animation * anim_array_active2_264[1] = {&anim_active2_264_0};
static Animations anim_active2_264 = {1, &anim_array_active2_264[0]};
static bool anim_active2_264_initialized;
class Active2_264 : public Active
{
public:
    Active2_264(int x, int y) : Active(x, y, Active2_264_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 2", 8);
#endif
        this->animations = &anim_active2_264;
        if (!anim_active2_264_initialized) {
            anim_active2_264_initialized = true;
            images_active2_264_0_0[0] = get_internal_image(4639);
            images_active2_264_0_8[0] = get_internal_image(4971);
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
FrameObject * create_active2_264(int x, int y)
{
    return new (Active::pool.create()) Active2_264(x, y);
}
static Image* images_mapicon_265_0_0[1];
static Direction direction_mapicon_265_0_0 = {0, 0, 0, 0, -1, images_mapicon_265_0_0, 1};
static Image* images_mapicon_265_0_1[11];
static Direction direction_mapicon_265_0_1 = {1, 50, 50, 0, -1, images_mapicon_265_0_1, 11};
static Animation anim_mapicon_265_0 = {&direction_mapicon_265_0_0, &direction_mapicon_265_0_1, &direction_mapicon_265_0_1, &direction_mapicon_265_0_1, &direction_mapicon_265_0_1, &direction_mapicon_265_0_1, &direction_mapicon_265_0_1, &direction_mapicon_265_0_1, &direction_mapicon_265_0_1, &direction_mapicon_265_0_1, &direction_mapicon_265_0_1, &direction_mapicon_265_0_1, &direction_mapicon_265_0_1, &direction_mapicon_265_0_1, &direction_mapicon_265_0_1, &direction_mapicon_265_0_1, &direction_mapicon_265_0_1, &direction_mapicon_265_0_0, &direction_mapicon_265_0_0, &direction_mapicon_265_0_0, &direction_mapicon_265_0_0, &direction_mapicon_265_0_0, &direction_mapicon_265_0_0, &direction_mapicon_265_0_0, &direction_mapicon_265_0_0, &direction_mapicon_265_0_0, &direction_mapicon_265_0_0, &direction_mapicon_265_0_0, &direction_mapicon_265_0_0, &direction_mapicon_265_0_0, &direction_mapicon_265_0_0, &direction_mapicon_265_0_0};
static Animation * anim_array_mapicon_265[1] = {&anim_mapicon_265_0};
static Animations anim_mapicon_265 = {1, &anim_array_mapicon_265[0]};
static bool anim_mapicon_265_initialized;
class MapIcon_265 : public Active
{
public:
    MapIcon_265(int x, int y) : Active(x, y, MapIcon_265_type)
    {
        // qualifiers: 13
#ifndef NDEBUG
        name = std::string("Map icon", 8);
#endif
        this->animations = &anim_mapicon_265;
        if (!anim_mapicon_265_initialized) {
            anim_mapicon_265_initialized = true;
            images_mapicon_265_0_0[0] = get_internal_image(992);
            images_mapicon_265_0_1[0] = get_internal_image(11571);
            images_mapicon_265_0_1[1] = get_internal_image(11572);
            images_mapicon_265_0_1[2] = get_internal_image(11573);
            images_mapicon_265_0_1[3] = get_internal_image(11574);
            images_mapicon_265_0_1[4] = get_internal_image(11575);
            images_mapicon_265_0_1[5] = get_internal_image(11576);
            images_mapicon_265_0_1[6] = get_internal_image(11577);
            images_mapicon_265_0_1[7] = get_internal_image(11578);
            images_mapicon_265_0_1[8] = get_internal_image(11579);
            images_mapicon_265_0_1[9] = get_internal_image(11580);
            images_mapicon_265_0_1[10] = get_internal_image(11571);
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
FrameObject * create_mapicon_265(int x, int y)
{
    return new (Active::pool.create()) MapIcon_265(x, y);
}
static Image* images_header_266_0_0[2];
static Direction direction_header_266_0_0 = {0, 0, 0, 0, 1, images_header_266_0_0, 2};
static Animation anim_header_266_0 = {&direction_header_266_0_0, &direction_header_266_0_0, &direction_header_266_0_0, &direction_header_266_0_0, &direction_header_266_0_0, &direction_header_266_0_0, &direction_header_266_0_0, &direction_header_266_0_0, &direction_header_266_0_0, &direction_header_266_0_0, &direction_header_266_0_0, &direction_header_266_0_0, &direction_header_266_0_0, &direction_header_266_0_0, &direction_header_266_0_0, &direction_header_266_0_0, NULL, &direction_header_266_0_0, &direction_header_266_0_0, &direction_header_266_0_0, &direction_header_266_0_0, &direction_header_266_0_0, &direction_header_266_0_0, &direction_header_266_0_0, &direction_header_266_0_0, &direction_header_266_0_0, &direction_header_266_0_0, &direction_header_266_0_0, &direction_header_266_0_0, &direction_header_266_0_0, &direction_header_266_0_0, &direction_header_266_0_0};
static Animation * anim_array_header_266[1] = {&anim_header_266_0};
static Animations anim_header_266 = {1, &anim_array_header_266[0]};
static bool anim_header_266_initialized;
class Header_266 : public Active
{
public:
    Header_266(int x, int y) : Active(x, y, Header_266_type)
    {
        // qualifiers: 13
#ifndef NDEBUG
        name = std::string("Header", 6);
#endif
        this->animations = &anim_header_266;
        if (!anim_header_266_initialized) {
            anim_header_266_initialized = true;
            images_header_266_0_0[0] = get_internal_image(4405);
            images_header_266_0_0[1] = get_internal_image(4334);
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
FrameObject * create_header_266(int x, int y)
{
    return new (Active::pool.create()) Header_266(x, y);
}
class ListNames_267 : public Text
{
public:
    ListNames_267(int x, int y) : Text(x, y, ListNames_267_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("List_Names", 10);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("Dragon Power", 12));
        add_line(std::string("Call of the Wildcat", 19));
        add_line(std::string("Spirit of the Hound", 19));
        add_line(std::string("No Death Clear", 14));
        add_line(std::string("Speedrunner Clear", 17));
        add_line(std::string("Gem Hoarder", 11));
        add_line(std::string("Target Master (Lilac)", 21));
        add_line(std::string("Target Master (Carol)", 21));
        add_line(std::string("Target Master (Milla)", 21));
        add_line(std::string("Rising Slash Finish", 19));
        add_line(std::string("Dragon Cyclone Finish", 21));
        add_line(std::string("Dragon Boost Finish", 19));
        add_line(std::string("Wild Claw Finish", 16));
        add_line(std::string("Wild Kick Finish", 16));
        add_line(std::string("Motorcycle Finish", 17));
        add_line(std::string("Phantom Block Finish", 20));
        add_line(std::string("Super Shield Burst Finish", 25));
        add_line(std::string("Lilac the Switch Skipper", 24));
        add_line(std::string("Claw Bypass", 11));
        add_line(std::string("Disco Fever", 11));
        add_line(std::string("CPU Finish", 10));
        add_line(std::string("Boost Perfectionist", 19));
        add_line(std::string("Card Collector (Dragon Valley)", 30));
        add_line(std::string("Card Collector (Relic Maze)", 27));
        add_line(std::string("Card Collector (Aqua Tunnel)", 28));
        add_line(std::string("Card Collector (Fortune Night)", 30));
        add_line(std::string("Card Collector (Sky Battalion)", 30));
        add_line(std::string("Card Collector (Jade Creek)", 27));
        add_line(std::string("Card Collector (Thermal Base)", 29));
        add_line(std::string("Card Collector (Trap Hideout)", 29));
        add_line(std::string("Card Collector (Pangu Lagoon)", 29));
        add_line(std::string("Card Collector (Battle Glacier)", 31));
        add_line(std::string("Rolling Stones", 14));
        add_line(std::string("Push Block KO", 13));
        add_line(std::string("All Bone, No Brain", 18));
        add_line(std::string("Preemptive Strike I", 19));
        add_line(std::string("Preemptive Strike II", 20));
        add_line(std::string("Treasure Hunter", 15));
        add_line(std::string("Ledge Taunt", 11));
        add_line(std::string("Freefaller", 10));
        add_line(std::string("Secret Melody", 13));
        add_line(std::string("Milla Unlocked! (Classic Mode)", 30));
        add_line(std::string("Dragon Valley Speedrunner", 25));
        add_line(std::string("Relic Maze Speedrunner", 22));
        add_line(std::string("Aqua Tunnel Speedrunner", 23));
        add_line(std::string("Fortune Night Speedrunner", 25));
        add_line(std::string("Sky Battalion Speedrunner", 25));
        add_line(std::string("Jade Creek Speedrunner", 22));
        add_line(std::string("Thermal Base Speedrunner", 24));
        add_line(std::string("Trap Hideout Speedrunner", 24));
        add_line(std::string("Pangu Lagoon Speedrunner", 24));
        add_line(std::string("Battle Glacier Speedrunner", 26));
        add_line(std::string("Final Dreadnought 1 Speedrunner", 31));
        add_line(std::string("Final Dreadnought 2 Speedrunner", 31));
        add_line(std::string("Final Dreadnought 3 Speedrunner", 31));
        add_line(std::string("Final Dreadnought 4 Speedrunner", 31));
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
FrameObject * create_listnames_267(int x, int y)
{
    return new (Text::pool.create()) ListNames_267(x, y);
}
class ListDescriptions_268 : public Text
{
public:
    ListDescriptions_268(int x, int y) : Text(x, y, ListDescriptions_268_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("List_Descriptions", 17);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("Clear all Lilac stages", 22));
        add_line(std::string("Clear all Carol stages", 22));
        add_line(std::string("Clear all Milla stages", 22));
        add_line(std::string("Clear the game without losing any lives", 39));
        add_line(std::string("Clear the game in less than 90 minutes", 38));
        add_line(std::string("Clear Adventure Mode with over 7000 crystal shards", 50));
        add_line(std::string("Clear all target rooms in Shang Mu Academy as Lilac", 51));
        add_line(std::string("Clear all target rooms in Shang Mu Academy as Carol", 51));
        add_line(std::string("Clear all target rooms in Shang Mu Academy as Milla", 51));
        add_line(std::string("Defeat an end boss with Lilac's Rising Slash", 44));
        add_line(std::string("Defeat an end boss with Lilac's Dragon Cyclone", 46));
        add_line(std::string("Defeat an end boss with Lilac's Dragon Boost", 44));
        add_line(std::string("Defeat an end boss with Carol's Wild Claw", 41));
        add_line(std::string("Defeat an end boss with Carol's Wild Kick", 41));
        add_line(std::string("Defeat an end boss while riding Carol's motorcycle", 50));
        add_line(std::string("Defeat an end boss with Milla's phantom blocks", 46));
        add_line(std::string("Defeat an end boss with Milla's Super Shield Burst", 50));
        add_line(std::string("Skip the switch door in Dragon Valley as Lilac", 46));
        add_line(std::string("Skip the Claw boss in Relic Maze", 32));
        add_line(std::string("Bust some dance moves in Fortune Night", 38));
        add_line(std::string("Let one of your teammates finish off Robopanther", 48));
        add_line(std::string("Destroy a Chopper with a single Dragon Boost as Lilac", 53));
        add_line(std::string("Collect all 10 cards in Dragon Valley", 37));
        add_line(std::string("Collect all 10 cards in Relic Maze", 34));
        add_line(std::string("Collect all 10 cards in Aqua Tunnel", 35));
        add_line(std::string("Collect all 10 cards in Fortune Night", 37));
        add_line(std::string("Collect all 10 cards in Sky Battalion", 37));
        add_line(std::string("Collect all 10 cards in Jade Creek", 34));
        add_line(std::string("Collect all 10 cards in Thermal Base", 36));
        add_line(std::string("Collect all 10 cards in Trap Hideout", 36));
        add_line(std::string("Collect all 10 cards in Pangu Lagoon", 36));
        add_line(std::string("Collect all 10 cards in Battle Glacier", 38));
        add_line(std::string("Get a boulder to wrap around the screen", 39));
        add_line(std::string("Destroy the Eye Golem in Relic Maze with a push block", 53));
        add_line(std::string("Trick the Bone Golem in Relic Maze into destroying itself", 57));
        add_line(std::string("Destroy both of the Mantalith's arms before the fight begins", 60));
        add_line(std::string("Destroy Prince Dail's shield before he finishes his monologue", 61));
        add_line(std::string("Dig into a treasure spot as Milla", 33));
        add_line(std::string("Rest on the ledge during Lilac's fight with Spade", 49));
        add_line(std::string("Clear Sky Battalion without using Torque's plane", 48));
        add_line(std::string("Play the Secret Melody on a piano", 33));
        add_line(std::string("Clear Relic Maze as any character", 33));
        add_line(std::string("Clear Dragon Valley in 5 minutes", 32));
        add_line(std::string("Clear Relic Maze in 8 minutes", 29));
        add_line(std::string("Clear Aqua Tunnel in 5 minutes", 30));
        add_line(std::string("Clear Fortune Night in 8 minutes", 32));
        add_line(std::string("Clear Sky Battalion in 7 minutes", 32));
        add_line(std::string("Clear Jade Creek in 8 minutes", 29));
        add_line(std::string("Clear Thermal Base in 9 minutes", 31));
        add_line(std::string("Clear Trap Hideout in 5 minutes", 31));
        add_line(std::string("Clear Pangu Lagoon in 8 minutes", 31));
        add_line(std::string("Clear Battle Glacier in 12 minutes", 34));
        add_line(std::string("Clear Final Dreadnought 1 in 5 minutes", 38));
        add_line(std::string("Clear Final Dreadnought 2 in 9 minutes", 38));
        add_line(std::string("Clear Final Dreadnought 3 in 6 minutes", 38));
        add_line(std::string("Clear Final Dreadnought 4 in 8 minutes", 38));
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
FrameObject * create_listdescriptions_268(int x, int y)
{
    return new (Text::pool.create()) ListDescriptions_268(x, y);
}
static Image* images_arrow1_269_0_0[1];
static Direction direction_arrow1_269_0_0 = {0, 50, 50, 0, 1, images_arrow1_269_0_0, 1};
static Animation anim_arrow1_269_0 = {&direction_arrow1_269_0_0, &direction_arrow1_269_0_0, &direction_arrow1_269_0_0, &direction_arrow1_269_0_0, &direction_arrow1_269_0_0, &direction_arrow1_269_0_0, &direction_arrow1_269_0_0, &direction_arrow1_269_0_0, &direction_arrow1_269_0_0, &direction_arrow1_269_0_0, &direction_arrow1_269_0_0, &direction_arrow1_269_0_0, &direction_arrow1_269_0_0, &direction_arrow1_269_0_0, &direction_arrow1_269_0_0, &direction_arrow1_269_0_0, NULL, &direction_arrow1_269_0_0, &direction_arrow1_269_0_0, &direction_arrow1_269_0_0, &direction_arrow1_269_0_0, &direction_arrow1_269_0_0, &direction_arrow1_269_0_0, &direction_arrow1_269_0_0, &direction_arrow1_269_0_0, &direction_arrow1_269_0_0, &direction_arrow1_269_0_0, &direction_arrow1_269_0_0, &direction_arrow1_269_0_0, &direction_arrow1_269_0_0, &direction_arrow1_269_0_0, &direction_arrow1_269_0_0};
static Animation * anim_array_arrow1_269[1] = {&anim_arrow1_269_0};
static Animations anim_arrow1_269 = {1, &anim_array_arrow1_269[0]};
static bool anim_arrow1_269_initialized;
class Arrow1_269 : public Active
{
public:
    Arrow1_269(int x, int y) : Active(x, y, Arrow1_269_type)
    {
        // qualifiers: 13
#ifndef NDEBUG
        name = std::string("Arrow 1", 7);
#endif
        this->animations = &anim_arrow1_269;
        if (!anim_arrow1_269_initialized) {
            anim_arrow1_269_initialized = true;
            images_arrow1_269_0_0[0] = get_internal_image(4140);
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
FrameObject * create_arrow1_269(int x, int y)
{
    return new (Active::pool.create()) Arrow1_269(x, y);
}
static Image* images_arrow2_270_0_0[1];
static Direction direction_arrow2_270_0_0 = {0, 50, 50, 0, 1, images_arrow2_270_0_0, 1};
static Animation anim_arrow2_270_0 = {&direction_arrow2_270_0_0, &direction_arrow2_270_0_0, &direction_arrow2_270_0_0, &direction_arrow2_270_0_0, &direction_arrow2_270_0_0, &direction_arrow2_270_0_0, &direction_arrow2_270_0_0, &direction_arrow2_270_0_0, &direction_arrow2_270_0_0, &direction_arrow2_270_0_0, &direction_arrow2_270_0_0, &direction_arrow2_270_0_0, &direction_arrow2_270_0_0, &direction_arrow2_270_0_0, &direction_arrow2_270_0_0, &direction_arrow2_270_0_0, NULL, &direction_arrow2_270_0_0, &direction_arrow2_270_0_0, &direction_arrow2_270_0_0, &direction_arrow2_270_0_0, &direction_arrow2_270_0_0, &direction_arrow2_270_0_0, &direction_arrow2_270_0_0, &direction_arrow2_270_0_0, &direction_arrow2_270_0_0, &direction_arrow2_270_0_0, &direction_arrow2_270_0_0, &direction_arrow2_270_0_0, &direction_arrow2_270_0_0, &direction_arrow2_270_0_0, &direction_arrow2_270_0_0};
static Animation * anim_array_arrow2_270[1] = {&anim_arrow2_270_0};
static Animations anim_arrow2_270 = {1, &anim_array_arrow2_270[0]};
static bool anim_arrow2_270_initialized;
class Arrow2_270 : public Active
{
public:
    Arrow2_270(int x, int y) : Active(x, y, Arrow2_270_type)
    {
        // qualifiers: 13
#ifndef NDEBUG
        name = std::string("Arrow 2", 7);
#endif
        this->animations = &anim_arrow2_270;
        if (!anim_arrow2_270_initialized) {
            anim_arrow2_270_initialized = true;
            images_arrow2_270_0_0[0] = get_internal_image(4326);
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
FrameObject * create_arrow2_270(int x, int y)
{
    return new (Active::pool.create()) Arrow2_270(x, y);
}
static Image* images_blackborder_271_0_0[1];
static Direction direction_blackborder_271_0_0 = {0, 50, 50, 0, 1, images_blackborder_271_0_0, 1};
static Animation anim_blackborder_271_0 = {&direction_blackborder_271_0_0, &direction_blackborder_271_0_0, &direction_blackborder_271_0_0, &direction_blackborder_271_0_0, &direction_blackborder_271_0_0, &direction_blackborder_271_0_0, &direction_blackborder_271_0_0, &direction_blackborder_271_0_0, &direction_blackborder_271_0_0, &direction_blackborder_271_0_0, &direction_blackborder_271_0_0, &direction_blackborder_271_0_0, &direction_blackborder_271_0_0, &direction_blackborder_271_0_0, &direction_blackborder_271_0_0, &direction_blackborder_271_0_0, NULL, &direction_blackborder_271_0_0, &direction_blackborder_271_0_0, &direction_blackborder_271_0_0, &direction_blackborder_271_0_0, &direction_blackborder_271_0_0, &direction_blackborder_271_0_0, &direction_blackborder_271_0_0, &direction_blackborder_271_0_0, &direction_blackborder_271_0_0, &direction_blackborder_271_0_0, &direction_blackborder_271_0_0, &direction_blackborder_271_0_0, &direction_blackborder_271_0_0, &direction_blackborder_271_0_0, &direction_blackborder_271_0_0};
static Animation * anim_array_blackborder_271[1] = {&anim_blackborder_271_0};
static Animations anim_blackborder_271 = {1, &anim_array_blackborder_271[0]};
static bool anim_blackborder_271_initialized;
class BlackBorder_271 : public Active
{
public:
    BlackBorder_271(int x, int y) : Active(x, y, BlackBorder_271_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BlackBorder", 11);
#endif
        set_visible(false);
        this->animations = &anim_blackborder_271;
        if (!anim_blackborder_271_initialized) {
            anim_blackborder_271_initialized = true;
            images_blackborder_271_0_0[0] = get_internal_image(2408);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        blend_color = Color(255, 255, 255, 127);
        create_alterables();
    }
};
FrameObject * create_blackborder_271(int x, int y)
{
    return new (Active::pool.create()) BlackBorder_271(x, y);
}
class AchievementDescription_272 : public TextBlitter
{
public:
    AchievementDescription_272(int x, int y) : TextBlitter(x, y, AchievementDescription_272_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("AchievementDescription", 22);
#endif
        width = 392;
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
        set_text(std::string(" ", 1));
        has_callback = false;
        create_alterables();
    }
};
FrameObject * create_achievementdescription_272(int x, int y)
{
    return new (TextBlitter::pool.create()) AchievementDescription_272(x, y);
}
class Backdrop_273 : public Backdrop
{
public:
    Backdrop_273(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(901);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop_273(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop_273(x, y);
}
class HelpMessage_274 : public TextBlitter
{
public:
    HelpMessage_274(int x, int y) : TextBlitter(x, y, HelpMessage_274_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Help Message", 12);
#endif
        width = 426;
        height = 20;
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
        set_text(std::string(" UP/DOWN: Scroll                          B: Return", 51));
        has_callback = false;
        create_alterables();
    }
};
FrameObject * create_helpmessage_274(int x, int y)
{
    return new (TextBlitter::pool.create()) HelpMessage_274(x, y);
}
class FileMessage_275 : public TextBlitter
{
public:
    FileMessage_275(int x, int y) : TextBlitter(x, y, FileMessage_275_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("File Message", 12);
#endif
        width = 136;
        height = 32;
        char_width = 8;
        char_height = 20;
        x_spacing = 0;
        y_spacing = 0;
        char_offset = 0;
        x_off = 0;
        y_off = 0;
        image = get_internal_image(5250);
        image_width = 256;
        alignment = ALIGN_LEFT | ALIGN_VCENTER;
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
        set_text(std::string("DRAGON VALLEY", 13));
        has_callback = false;
        create_alterables();
    }
};
FrameObject * create_filemessage_275(int x, int y)
{
    return new (TextBlitter::pool.create()) FileMessage_275(x, y);
}
class StageList_276 : public Text
{
public:
    StageList_276(int x, int y) : Text(x, y, StageList_276_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Stage List", 10);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("AQUA TUNNEL", 11));
        add_line(std::string("DRAGON VALLEY", 13));
        add_line(std::string("RELIC MAZE", 10));
        add_line(std::string("FORTUNE NIGHT", 13));
        add_line(std::string("SKY BATTALION", 13));
        add_line(std::string("JADE CREEK", 10));
        add_line(std::string("THERMAL BASE", 12));
        add_line(std::string("PANGU LAGOON", 12));
        add_line(std::string("TRAP HIDEOUT", 12));
        add_line(std::string("BATTLE GLACIER", 14));
        add_line(std::string("FINAL DREADNOUGHT 1", 19));
        add_line(std::string("FINAL DREADNOUGHT 2", 19));
        add_line(std::string("FINAL DREADNOUGHT 3", 19));
        add_line(std::string("FINAL DREADNOUGHT 4", 19));
        width = 372;
        height = 23;
        blend_color = Color(255, 255, 255);
        bold = font1.bold;
        italic = font1.italic;
        font = get_font(font1.size);
        alignment = ALIGN_HCENTER | ALIGN_TOP;
        create_alterables();
    }
};
FrameObject * create_stagelist_276(int x, int y)
{
    return new (Text::pool.create()) StageList_276(x, y);
}
class Backdrop_277 : public Backdrop
{
public:
    Backdrop_277(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1449);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop_277(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop_277(x, y);
}
class BackgroundSystemBox_278 : public SystemBox
{
public:
    BackgroundSystemBox_278(int x, int y) : SystemBox(x, y, BackgroundSystemBox_278_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Background System Box", 21);
#endif
        flags |= BACKGROUND;
        width = 384;
        height = 320;
        type = PATTERN_IMAGE;
        image = get_internal_image(5319);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_backgroundsystembox_278(int x, int y)
{
    return new (SystemBox::pool.create()) BackgroundSystemBox_278(x, y);
}
static Image* images_objectcrystal_279_0_0[6];
static Direction direction_objectcrystal_279_0_0 = {0, 14, 14, 0, -1, images_objectcrystal_279_0_0, 6};
static Animation anim_objectcrystal_279_0 = {&direction_objectcrystal_279_0_0, &direction_objectcrystal_279_0_0, &direction_objectcrystal_279_0_0, &direction_objectcrystal_279_0_0, &direction_objectcrystal_279_0_0, &direction_objectcrystal_279_0_0, &direction_objectcrystal_279_0_0, &direction_objectcrystal_279_0_0, &direction_objectcrystal_279_0_0, &direction_objectcrystal_279_0_0, &direction_objectcrystal_279_0_0, &direction_objectcrystal_279_0_0, &direction_objectcrystal_279_0_0, &direction_objectcrystal_279_0_0, &direction_objectcrystal_279_0_0, &direction_objectcrystal_279_0_0, NULL, &direction_objectcrystal_279_0_0, &direction_objectcrystal_279_0_0, &direction_objectcrystal_279_0_0, &direction_objectcrystal_279_0_0, &direction_objectcrystal_279_0_0, &direction_objectcrystal_279_0_0, &direction_objectcrystal_279_0_0, &direction_objectcrystal_279_0_0, &direction_objectcrystal_279_0_0, &direction_objectcrystal_279_0_0, &direction_objectcrystal_279_0_0, &direction_objectcrystal_279_0_0, &direction_objectcrystal_279_0_0, &direction_objectcrystal_279_0_0, &direction_objectcrystal_279_0_0};
static Animation * anim_array_objectcrystal_279[1] = {&anim_objectcrystal_279_0};
static Animations anim_objectcrystal_279 = {1, &anim_array_objectcrystal_279[0]};
static bool anim_objectcrystal_279_initialized;
class ObjectCrystal_279 : public Active
{
public:
    ObjectCrystal_279(int x, int y) : Active(x, y, ObjectCrystal_279_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Object_Crystal", 14);
#endif
        this->animations = &anim_objectcrystal_279;
        if (!anim_objectcrystal_279_initialized) {
            anim_objectcrystal_279_initialized = true;
            images_objectcrystal_279_0_0[0] = get_internal_image(4730);
            images_objectcrystal_279_0_0[1] = get_internal_image(4892);
            images_objectcrystal_279_0_0[2] = get_internal_image(4893);
            images_objectcrystal_279_0_0[3] = get_internal_image(4894);
            images_objectcrystal_279_0_0[4] = get_internal_image(4895);
            images_objectcrystal_279_0_0[5] = get_internal_image(4896);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        movement_count = 2;
        movements = new Movement*[2];
        set_direction(24);
        movements[0] = new StaticMovement(this);
        movements[0]->index = 0;
        movements[1] = new PinballMovement(this);
        movements[1]->index = 1;
        ((PinballMovement*)movements[1])->set_max_speed(36);
        ((PinballMovement*)movements[1])->set_deceleration(0);
        ((PinballMovement*)movements[1])->set_gravity(25);
        set_movement(0);
        create_alterables();
    }
};
FrameObject * create_objectcrystal_279(int x, int y)
{
    return new (Active::pool.create()) ObjectCrystal_279(x, y);
}
static Image* images_guilinkbonus_280_0_0[1];
static Direction direction_guilinkbonus_280_0_0 = {0, 50, 50, 0, 1, images_guilinkbonus_280_0_0, 1};
static Animation anim_guilinkbonus_280_0 = {&direction_guilinkbonus_280_0_0, &direction_guilinkbonus_280_0_0, &direction_guilinkbonus_280_0_0, &direction_guilinkbonus_280_0_0, &direction_guilinkbonus_280_0_0, &direction_guilinkbonus_280_0_0, &direction_guilinkbonus_280_0_0, &direction_guilinkbonus_280_0_0, &direction_guilinkbonus_280_0_0, &direction_guilinkbonus_280_0_0, &direction_guilinkbonus_280_0_0, &direction_guilinkbonus_280_0_0, &direction_guilinkbonus_280_0_0, &direction_guilinkbonus_280_0_0, &direction_guilinkbonus_280_0_0, &direction_guilinkbonus_280_0_0, NULL, &direction_guilinkbonus_280_0_0, &direction_guilinkbonus_280_0_0, &direction_guilinkbonus_280_0_0, &direction_guilinkbonus_280_0_0, &direction_guilinkbonus_280_0_0, &direction_guilinkbonus_280_0_0, &direction_guilinkbonus_280_0_0, &direction_guilinkbonus_280_0_0, &direction_guilinkbonus_280_0_0, &direction_guilinkbonus_280_0_0, &direction_guilinkbonus_280_0_0, &direction_guilinkbonus_280_0_0, &direction_guilinkbonus_280_0_0, &direction_guilinkbonus_280_0_0, &direction_guilinkbonus_280_0_0};
static Image* images_guilinkbonus_280_7_0[6];
static Direction direction_guilinkbonus_280_7_0 = {0, 50, 50, 5, 9, images_guilinkbonus_280_7_0, 6};
static Animation anim_guilinkbonus_280_7 = {&direction_guilinkbonus_280_7_0, &direction_guilinkbonus_280_7_0, &direction_guilinkbonus_280_7_0, &direction_guilinkbonus_280_7_0, &direction_guilinkbonus_280_7_0, &direction_guilinkbonus_280_7_0, &direction_guilinkbonus_280_7_0, &direction_guilinkbonus_280_7_0, &direction_guilinkbonus_280_7_0, &direction_guilinkbonus_280_7_0, &direction_guilinkbonus_280_7_0, &direction_guilinkbonus_280_7_0, &direction_guilinkbonus_280_7_0, &direction_guilinkbonus_280_7_0, &direction_guilinkbonus_280_7_0, &direction_guilinkbonus_280_7_0, NULL, &direction_guilinkbonus_280_7_0, &direction_guilinkbonus_280_7_0, &direction_guilinkbonus_280_7_0, &direction_guilinkbonus_280_7_0, &direction_guilinkbonus_280_7_0, &direction_guilinkbonus_280_7_0, &direction_guilinkbonus_280_7_0, &direction_guilinkbonus_280_7_0, &direction_guilinkbonus_280_7_0, &direction_guilinkbonus_280_7_0, &direction_guilinkbonus_280_7_0, &direction_guilinkbonus_280_7_0, &direction_guilinkbonus_280_7_0, &direction_guilinkbonus_280_7_0, &direction_guilinkbonus_280_7_0};
static Animation * anim_array_guilinkbonus_280[8] = {&anim_guilinkbonus_280_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_guilinkbonus_280_7};
static Animations anim_guilinkbonus_280 = {8, &anim_array_guilinkbonus_280[0]};
static bool anim_guilinkbonus_280_initialized;
class GUILinkBonus_280 : public Active
{
public:
    GUILinkBonus_280(int x, int y) : Active(x, y, GUILinkBonus_280_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GUI_LinkBonus", 13);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_guilinkbonus_280;
        if (!anim_guilinkbonus_280_initialized) {
            anim_guilinkbonus_280_initialized = true;
            images_guilinkbonus_280_0_0[0] = get_internal_image(480);
            images_guilinkbonus_280_7_0[0] = get_internal_image(483);
            images_guilinkbonus_280_7_0[1] = get_internal_image(481);
            images_guilinkbonus_280_7_0[2] = get_internal_image(482);
            images_guilinkbonus_280_7_0[3] = get_internal_image(484);
            images_guilinkbonus_280_7_0[4] = get_internal_image(485);
            images_guilinkbonus_280_7_0[5] = get_internal_image(480);
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
FrameObject * create_guilinkbonus_280(int x, int y)
{
    return new (Active::pool.create()) GUILinkBonus_280(x, y);
}
class MahjongBoard_281 : public ArrayObject
{
public:
    MahjongBoard_281(int x, int y) : ArrayObject(x, y, MahjongBoard_281_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("MahjongBoard", 12);
#endif
        initialize(true, 1, 8, 6, 3);
    }
};
FrameObject * create_mahjongboard_281(int x, int y)
{
    return new (ArrayObject::pool.create()) MahjongBoard_281(x, y);
}
class AddTile_282 : public ArrayObject
{
public:
    AddTile_282(int x, int y) : ArrayObject(x, y, AddTile_282_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("AddTile", 7);
#endif
        initialize(true, 1, 144, 1, 1);
    }
};
FrameObject * create_addtile_282(int x, int y)
{
    return new (ArrayObject::pool.create()) AddTile_282(x, y);
}
static Image* images_active5_283_0_0[1];
static Direction direction_active5_283_0_0 = {0, 50, 50, 0, 1, images_active5_283_0_0, 1};
static Image* images_active5_283_0_1[1];
static Direction direction_active5_283_0_1 = {1, 50, 50, 0, 1, images_active5_283_0_1, 1};
static Animation anim_active5_283_0 = {&direction_active5_283_0_0, &direction_active5_283_0_1, &direction_active5_283_0_1, &direction_active5_283_0_1, &direction_active5_283_0_1, &direction_active5_283_0_1, &direction_active5_283_0_1, &direction_active5_283_0_1, &direction_active5_283_0_1, &direction_active5_283_0_1, &direction_active5_283_0_1, &direction_active5_283_0_1, &direction_active5_283_0_1, &direction_active5_283_0_1, &direction_active5_283_0_1, &direction_active5_283_0_1, &direction_active5_283_0_1, &direction_active5_283_0_0, &direction_active5_283_0_0, &direction_active5_283_0_0, &direction_active5_283_0_0, &direction_active5_283_0_0, &direction_active5_283_0_0, &direction_active5_283_0_0, &direction_active5_283_0_0, &direction_active5_283_0_0, &direction_active5_283_0_0, &direction_active5_283_0_0, &direction_active5_283_0_0, &direction_active5_283_0_0, &direction_active5_283_0_0, &direction_active5_283_0_0};
static Animation * anim_array_active5_283[1] = {&anim_active5_283_0};
static Animations anim_active5_283 = {1, &anim_array_active5_283[0]};
static bool anim_active5_283_initialized;
class Active5_283 : public Active
{
public:
    Active5_283(int x, int y) : Active(x, y, Active5_283_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 5", 8);
#endif
        this->animations = &anim_active5_283;
        if (!anim_active5_283_initialized) {
            anim_active5_283_initialized = true;
            images_active5_283_0_0[0] = get_internal_image(5312);
            images_active5_283_0_1[0] = get_internal_image(5309);
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
FrameObject * create_active5_283(int x, int y)
{
    return new (Active::pool.create()) Active5_283(x, y);
}
static Image* images_jukebox_284_0_0[2];
static Direction direction_jukebox_284_0_0 = {0, 0, 0, 0, -1, images_jukebox_284_0_0, 2};
static Image* images_jukebox_284_0_1[2];
static Direction direction_jukebox_284_0_1 = {1, 0, 0, 0, -1, images_jukebox_284_0_1, 2};
static Animation anim_jukebox_284_0 = {&direction_jukebox_284_0_0, &direction_jukebox_284_0_1, &direction_jukebox_284_0_1, &direction_jukebox_284_0_1, &direction_jukebox_284_0_1, &direction_jukebox_284_0_1, &direction_jukebox_284_0_1, &direction_jukebox_284_0_1, &direction_jukebox_284_0_1, &direction_jukebox_284_0_1, &direction_jukebox_284_0_1, &direction_jukebox_284_0_1, &direction_jukebox_284_0_1, &direction_jukebox_284_0_1, &direction_jukebox_284_0_1, &direction_jukebox_284_0_1, &direction_jukebox_284_0_1, &direction_jukebox_284_0_0, &direction_jukebox_284_0_0, &direction_jukebox_284_0_0, &direction_jukebox_284_0_0, &direction_jukebox_284_0_0, &direction_jukebox_284_0_0, &direction_jukebox_284_0_0, &direction_jukebox_284_0_0, &direction_jukebox_284_0_0, &direction_jukebox_284_0_0, &direction_jukebox_284_0_0, &direction_jukebox_284_0_0, &direction_jukebox_284_0_0, &direction_jukebox_284_0_0, &direction_jukebox_284_0_0};
static Animation * anim_array_jukebox_284[1] = {&anim_jukebox_284_0};
static Animations anim_jukebox_284 = {1, &anim_array_jukebox_284[0]};
static bool anim_jukebox_284_initialized;
class Jukebox_284 : public Active
{
public:
    Jukebox_284(int x, int y) : Active(x, y, Jukebox_284_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Jukebox", 7);
#endif
        this->animations = &anim_jukebox_284;
        if (!anim_jukebox_284_initialized) {
            anim_jukebox_284_initialized = true;
            images_jukebox_284_0_0[0] = get_internal_image(5307);
            images_jukebox_284_0_0[1] = get_internal_image(1451);
            images_jukebox_284_0_1[0] = get_internal_image(5308);
            images_jukebox_284_0_1[1] = get_internal_image(5314);
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
FrameObject * create_jukebox_284(int x, int y)
{
    return new (Active::pool.create()) Jukebox_284(x, y);
}
static Image* images_tile_285_0_0[3];
static Direction direction_tile_285_0_0 = {0, 0, 0, 0, 1, images_tile_285_0_0, 3};
static Image* images_tile_285_0_1[3];
static Direction direction_tile_285_0_1 = {1, 0, 0, 0, 1, images_tile_285_0_1, 3};
static Image* images_tile_285_0_2[3];
static Direction direction_tile_285_0_2 = {2, 0, 0, 0, 1, images_tile_285_0_2, 3};
static Image* images_tile_285_0_3[3];
static Direction direction_tile_285_0_3 = {3, 0, 0, 0, 1, images_tile_285_0_3, 3};
static Image* images_tile_285_0_4[3];
static Direction direction_tile_285_0_4 = {4, 0, 0, 0, 1, images_tile_285_0_4, 3};
static Image* images_tile_285_0_5[3];
static Direction direction_tile_285_0_5 = {5, 0, 0, 0, 1, images_tile_285_0_5, 3};
static Image* images_tile_285_0_6[3];
static Direction direction_tile_285_0_6 = {6, 0, 0, 0, 1, images_tile_285_0_6, 3};
static Animation anim_tile_285_0 = {&direction_tile_285_0_0, &direction_tile_285_0_1, &direction_tile_285_0_2, &direction_tile_285_0_3, &direction_tile_285_0_4, &direction_tile_285_0_5, &direction_tile_285_0_6, &direction_tile_285_0_6, &direction_tile_285_0_6, &direction_tile_285_0_6, &direction_tile_285_0_6, &direction_tile_285_0_6, &direction_tile_285_0_6, &direction_tile_285_0_6, &direction_tile_285_0_6, &direction_tile_285_0_6, &direction_tile_285_0_6, &direction_tile_285_0_6, &direction_tile_285_0_6, NULL, &direction_tile_285_0_0, &direction_tile_285_0_0, &direction_tile_285_0_0, &direction_tile_285_0_0, &direction_tile_285_0_0, &direction_tile_285_0_0, &direction_tile_285_0_0, &direction_tile_285_0_0, &direction_tile_285_0_0, &direction_tile_285_0_0, &direction_tile_285_0_0, &direction_tile_285_0_0};
static Image* images_tile_285_7_0[3];
static Direction direction_tile_285_7_0 = {0, 0, 0, 0, 1, images_tile_285_7_0, 3};
static Image* images_tile_285_7_1[3];
static Direction direction_tile_285_7_1 = {1, 0, 0, 0, 1, images_tile_285_7_1, 3};
static Image* images_tile_285_7_2[3];
static Direction direction_tile_285_7_2 = {2, 0, 0, 0, 1, images_tile_285_7_2, 3};
static Image* images_tile_285_7_3[3];
static Direction direction_tile_285_7_3 = {3, 0, 0, 0, 1, images_tile_285_7_3, 3};
static Image* images_tile_285_7_4[3];
static Direction direction_tile_285_7_4 = {4, 0, 0, 0, 1, images_tile_285_7_4, 3};
static Image* images_tile_285_7_5[3];
static Direction direction_tile_285_7_5 = {5, 0, 0, 0, 1, images_tile_285_7_5, 3};
static Image* images_tile_285_7_6[3];
static Direction direction_tile_285_7_6 = {6, 0, 0, 0, 1, images_tile_285_7_6, 3};
static Animation anim_tile_285_7 = {&direction_tile_285_7_0, &direction_tile_285_7_1, &direction_tile_285_7_2, &direction_tile_285_7_3, &direction_tile_285_7_4, &direction_tile_285_7_5, &direction_tile_285_7_6, &direction_tile_285_7_6, &direction_tile_285_7_6, &direction_tile_285_7_6, &direction_tile_285_7_6, &direction_tile_285_7_6, &direction_tile_285_7_6, &direction_tile_285_7_6, &direction_tile_285_7_6, &direction_tile_285_7_6, &direction_tile_285_7_6, &direction_tile_285_7_6, &direction_tile_285_7_6, NULL, &direction_tile_285_7_0, &direction_tile_285_7_0, &direction_tile_285_7_0, &direction_tile_285_7_0, &direction_tile_285_7_0, &direction_tile_285_7_0, &direction_tile_285_7_0, &direction_tile_285_7_0, &direction_tile_285_7_0, &direction_tile_285_7_0, &direction_tile_285_7_0, &direction_tile_285_7_0};
static Animation * anim_array_tile_285[8] = {&anim_tile_285_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_tile_285_7};
static Animations anim_tile_285 = {8, &anim_array_tile_285[0]};
static bool anim_tile_285_initialized;
class Tile_285 : public Active
{
public:
    Tile_285(int x, int y) : Active(x, y, Tile_285_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Tile", 4);
#endif
        set_visible(false);
        this->animations = &anim_tile_285;
        if (!anim_tile_285_initialized) {
            anim_tile_285_initialized = true;
            images_tile_285_0_0[0] = get_internal_image(1796);
            images_tile_285_0_0[1] = get_internal_image(1312);
            images_tile_285_0_0[2] = get_internal_image(1458);
            images_tile_285_0_1[0] = get_internal_image(5300);
            images_tile_285_0_1[1] = get_internal_image(5299);
            images_tile_285_0_1[2] = get_internal_image(5301);
            images_tile_285_0_2[0] = get_internal_image(1925);
            images_tile_285_0_2[1] = get_internal_image(2267);
            images_tile_285_0_2[2] = get_internal_image(2328);
            images_tile_285_0_3[0] = get_internal_image(1922);
            images_tile_285_0_3[1] = get_internal_image(1921);
            images_tile_285_0_3[2] = get_internal_image(1923);
            images_tile_285_0_4[0] = get_internal_image(1868);
            images_tile_285_0_4[1] = get_internal_image(1866);
            images_tile_285_0_4[2] = get_internal_image(1869);
            images_tile_285_0_5[0] = get_internal_image(1877);
            images_tile_285_0_5[1] = get_internal_image(1871);
            images_tile_285_0_5[2] = get_internal_image(1878);
            images_tile_285_0_6[0] = get_internal_image(5302);
            images_tile_285_0_6[1] = get_internal_image(5303);
            images_tile_285_0_6[2] = get_internal_image(5305);
            images_tile_285_7_0[0] = get_internal_image(1358);
            images_tile_285_7_0[1] = get_internal_image(1454);
            images_tile_285_7_0[2] = get_internal_image(1564);
            images_tile_285_7_1[0] = get_internal_image(1863);
            images_tile_285_7_1[1] = get_internal_image(1864);
            images_tile_285_7_1[2] = get_internal_image(1865);
            images_tile_285_7_2[0] = get_internal_image(5340);
            images_tile_285_7_2[1] = get_internal_image(5341);
            images_tile_285_7_2[2] = get_internal_image(5342);
            images_tile_285_7_3[0] = get_internal_image(5343);
            images_tile_285_7_3[1] = get_internal_image(5344);
            images_tile_285_7_3[2] = get_internal_image(5345);
            images_tile_285_7_4[0] = get_internal_image(5346);
            images_tile_285_7_4[1] = get_internal_image(5347);
            images_tile_285_7_4[2] = get_internal_image(5348);
            images_tile_285_7_5[0] = get_internal_image(5350);
            images_tile_285_7_5[1] = get_internal_image(5351);
            images_tile_285_7_5[2] = get_internal_image(5352);
            images_tile_285_7_6[0] = get_internal_image(5349);
            images_tile_285_7_6[1] = get_internal_image(5353);
            images_tile_285_7_6[2] = get_internal_image(5354);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(pick_random(5, 1, 2, 3, 4, 5));
        create_alterables();
        alterables->values.set(1, 1);
    }
};
FrameObject * create_tile_285(int x, int y)
{
    return new (Active::pool.create()) Tile_285(x, y);
}
class TimeMin_286 : public Counter
{
public:
    TimeMin_286(int x, int y) : Counter(x, y, TimeMin_286_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Time_Min", 8);
#endif
        width = 96;
        height = 32;
        type = IMAGE_COUNTER;
        static Image * counter_images[14];
        static bool initialized = false;
        if (!initialized) {
            initialized = true;
            counter_images[0] = get_internal_image(2774);
            counter_images[1] = get_internal_image(2776);
            counter_images[2] = get_internal_image(2777);
            counter_images[3] = get_internal_image(2778);
            counter_images[4] = get_internal_image(2779);
            counter_images[5] = get_internal_image(2789);
            counter_images[6] = get_internal_image(2795);
            counter_images[7] = get_internal_image(2796);
            counter_images[8] = get_internal_image(2797);
            counter_images[9] = get_internal_image(2798);
            counter_images[10] = get_internal_image(2801);
            counter_images[11] = get_internal_image(2800);
            counter_images[12] = get_internal_image(2802);
            counter_images[13] = get_internal_image(2801);
        }
        images = (Image**)&counter_images;
        image_count = 14;
        minimum = 0;
        maximum = 99;
        set(0);
        set_direction(randrange(32));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(0);
        ((BallMovement*)movement)->set_deceleration(0);
    }
};
FrameObject * create_timemin_286(int x, int y)
{
    return new (Counter::pool.create()) TimeMin_286(x, y);
}
class Countdown_287 : public Counter
{
public:
    Countdown_287(int x, int y) : Counter(x, y, Countdown_287_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Countdown", 9);
#endif
        set_visible(false);
        width = 96;
        height = 32;
        type = IMAGE_COUNTER;
        static Image * counter_images[14];
        static bool initialized = false;
        if (!initialized) {
            initialized = true;
            counter_images[0] = get_internal_image(2774);
            counter_images[1] = get_internal_image(2776);
            counter_images[2] = get_internal_image(2777);
            counter_images[3] = get_internal_image(2778);
            counter_images[4] = get_internal_image(2779);
            counter_images[5] = get_internal_image(2789);
            counter_images[6] = get_internal_image(2795);
            counter_images[7] = get_internal_image(2796);
            counter_images[8] = get_internal_image(2797);
            counter_images[9] = get_internal_image(2798);
            counter_images[10] = get_internal_image(2801);
            counter_images[11] = get_internal_image(2800);
            counter_images[12] = get_internal_image(2802);
            counter_images[13] = get_internal_image(2801);
        }
        images = (Image**)&counter_images;
        image_count = 14;
        minimum = 0;
        maximum = 99;
        set(3);
        set_direction(randrange(32));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(0);
        ((BallMovement*)movement)->set_deceleration(0);
    }
};
FrameObject * create_countdown_287(int x, int y)
{
    return new (Counter::pool.create()) Countdown_287(x, y);
}
class TimeSec_288 : public Counter
{
public:
    TimeSec_288(int x, int y) : Counter(x, y, TimeSec_288_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Time_Sec", 8);
#endif
        width = 96;
        height = 32;
        type = IMAGE_COUNTER;
        static Image * counter_images[14];
        static bool initialized = false;
        if (!initialized) {
            initialized = true;
            counter_images[0] = get_internal_image(2774);
            counter_images[1] = get_internal_image(2776);
            counter_images[2] = get_internal_image(2777);
            counter_images[3] = get_internal_image(2778);
            counter_images[4] = get_internal_image(2779);
            counter_images[5] = get_internal_image(2789);
            counter_images[6] = get_internal_image(2795);
            counter_images[7] = get_internal_image(2796);
            counter_images[8] = get_internal_image(2797);
            counter_images[9] = get_internal_image(2798);
            counter_images[10] = get_internal_image(2801);
            counter_images[11] = get_internal_image(2800);
            counter_images[12] = get_internal_image(2802);
            counter_images[13] = get_internal_image(2801);
        }
        images = (Image**)&counter_images;
        image_count = 14;
        minimum = 0;
        maximum = 99;
        set(0);
        set_direction(randrange(32));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(0);
        ((BallMovement*)movement)->set_deceleration(0);
    }
};
FrameObject * create_timesec_288(int x, int y)
{
    return new (Counter::pool.create()) TimeSec_288(x, y);
}
static Image* images_timecolon_289_0_0[1];
static Direction direction_timecolon_289_0_0 = {0, 50, 50, 0, 1, images_timecolon_289_0_0, 1};
static Animation anim_timecolon_289_0 = {&direction_timecolon_289_0_0, &direction_timecolon_289_0_0, &direction_timecolon_289_0_0, &direction_timecolon_289_0_0, &direction_timecolon_289_0_0, &direction_timecolon_289_0_0, &direction_timecolon_289_0_0, &direction_timecolon_289_0_0, &direction_timecolon_289_0_0, &direction_timecolon_289_0_0, &direction_timecolon_289_0_0, &direction_timecolon_289_0_0, &direction_timecolon_289_0_0, &direction_timecolon_289_0_0, &direction_timecolon_289_0_0, &direction_timecolon_289_0_0, NULL, &direction_timecolon_289_0_0, &direction_timecolon_289_0_0, &direction_timecolon_289_0_0, &direction_timecolon_289_0_0, &direction_timecolon_289_0_0, &direction_timecolon_289_0_0, &direction_timecolon_289_0_0, &direction_timecolon_289_0_0, &direction_timecolon_289_0_0, &direction_timecolon_289_0_0, &direction_timecolon_289_0_0, &direction_timecolon_289_0_0, &direction_timecolon_289_0_0, &direction_timecolon_289_0_0, &direction_timecolon_289_0_0};
static Animation * anim_array_timecolon_289[1] = {&anim_timecolon_289_0};
static Animations anim_timecolon_289 = {1, &anim_array_timecolon_289[0]};
static bool anim_timecolon_289_initialized;
class TimeColon_289 : public Active
{
public:
    TimeColon_289(int x, int y) : Active(x, y, TimeColon_289_type)
    {
        // qualifiers: 13
#ifndef NDEBUG
        name = std::string("Time_Colon", 10);
#endif
        this->animations = &anim_timecolon_289;
        if (!anim_timecolon_289_initialized) {
            anim_timecolon_289_initialized = true;
            images_timecolon_289_0_0[0] = get_internal_image(2799);
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
FrameObject * create_timecolon_289(int x, int y)
{
    return new (Active::pool.create()) TimeColon_289(x, y);
}
static Image* images_active_290_0_0[1];
static Direction direction_active_290_0_0 = {0, 50, 50, 0, 1, images_active_290_0_0, 1};
static Animation anim_active_290_0 = {&direction_active_290_0_0, &direction_active_290_0_0, &direction_active_290_0_0, &direction_active_290_0_0, &direction_active_290_0_0, &direction_active_290_0_0, &direction_active_290_0_0, &direction_active_290_0_0, &direction_active_290_0_0, &direction_active_290_0_0, &direction_active_290_0_0, &direction_active_290_0_0, &direction_active_290_0_0, &direction_active_290_0_0, &direction_active_290_0_0, &direction_active_290_0_0, NULL, &direction_active_290_0_0, &direction_active_290_0_0, &direction_active_290_0_0, &direction_active_290_0_0, &direction_active_290_0_0, &direction_active_290_0_0, &direction_active_290_0_0, &direction_active_290_0_0, &direction_active_290_0_0, &direction_active_290_0_0, &direction_active_290_0_0, &direction_active_290_0_0, &direction_active_290_0_0, &direction_active_290_0_0, &direction_active_290_0_0};
static Animation * anim_array_active_290[1] = {&anim_active_290_0};
static Animations anim_active_290 = {1, &anim_array_active_290[0]};
static bool anim_active_290_initialized;
class Active_290 : public Active
{
public:
    Active_290(int x, int y) : Active(x, y, Active_290_type)
    {
        // qualifiers: 13
#ifndef NDEBUG
        name = std::string("Active", 6);
#endif
        this->animations = &anim_active_290;
        if (!anim_active_290_initialized) {
            anim_active_290_initialized = true;
            images_active_290_0_0[0] = get_internal_image(655);
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
FrameObject * create_active_290(int x, int y)
{
    return new (Active::pool.create()) Active_290(x, y);
}
static Image* images_handshadow_291_0_0[6];
static Direction direction_handshadow_291_0_0 = {0, 14, 14, 0, -1, images_handshadow_291_0_0, 6};
static Image* images_handshadow_291_0_2[6];
static Direction direction_handshadow_291_0_2 = {2, 14, 14, 0, -1, images_handshadow_291_0_2, 6};
static Animation anim_handshadow_291_0 = {&direction_handshadow_291_0_0, NULL, &direction_handshadow_291_0_2, &direction_handshadow_291_0_2, &direction_handshadow_291_0_2, &direction_handshadow_291_0_2, &direction_handshadow_291_0_2, &direction_handshadow_291_0_2, &direction_handshadow_291_0_2, &direction_handshadow_291_0_2, &direction_handshadow_291_0_2, &direction_handshadow_291_0_2, &direction_handshadow_291_0_2, &direction_handshadow_291_0_2, &direction_handshadow_291_0_2, &direction_handshadow_291_0_2, &direction_handshadow_291_0_2, NULL, &direction_handshadow_291_0_0, &direction_handshadow_291_0_0, &direction_handshadow_291_0_0, &direction_handshadow_291_0_0, &direction_handshadow_291_0_0, &direction_handshadow_291_0_0, &direction_handshadow_291_0_0, &direction_handshadow_291_0_0, &direction_handshadow_291_0_0, &direction_handshadow_291_0_0, &direction_handshadow_291_0_0, &direction_handshadow_291_0_0, &direction_handshadow_291_0_0, &direction_handshadow_291_0_0};
static Animation * anim_array_handshadow_291[1] = {&anim_handshadow_291_0};
static Animations anim_handshadow_291 = {1, &anim_array_handshadow_291[0]};
static bool anim_handshadow_291_initialized;
class HandShadow_291 : public Active
{
public:
    HandShadow_291(int x, int y) : Active(x, y, HandShadow_291_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hand_shadow", 11);
#endif
        set_visible(false);
        this->animations = &anim_handshadow_291;
        if (!anim_handshadow_291_initialized) {
            anim_handshadow_291_initialized = true;
            images_handshadow_291_0_0[0] = get_internal_image(2841);
            images_handshadow_291_0_0[1] = get_internal_image(2841);
            images_handshadow_291_0_0[2] = get_internal_image(4208);
            images_handshadow_291_0_0[3] = get_internal_image(5306);
            images_handshadow_291_0_0[4] = get_internal_image(5306);
            images_handshadow_291_0_0[5] = get_internal_image(4208);
            images_handshadow_291_0_2[0] = get_internal_image(5321);
            images_handshadow_291_0_2[1] = get_internal_image(5321);
            images_handshadow_291_0_2[2] = get_internal_image(5322);
            images_handshadow_291_0_2[3] = get_internal_image(5323);
            images_handshadow_291_0_2[4] = get_internal_image(5323);
            images_handshadow_291_0_2[5] = get_internal_image(5322);
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
FrameObject * create_handshadow_291(int x, int y)
{
    return new (Active::pool.create()) HandShadow_291(x, y);
}
static Image* images_hand_292_0_0[6];
static Direction direction_hand_292_0_0 = {0, 14, 14, 0, -1, images_hand_292_0_0, 6};
static Image* images_hand_292_0_2[6];
static Direction direction_hand_292_0_2 = {2, 14, 14, 0, -1, images_hand_292_0_2, 6};
static Image* images_hand_292_0_8[1];
static Direction direction_hand_292_0_8 = {8, 50, 50, 0, 1, images_hand_292_0_8, 1};
static Animation anim_hand_292_0 = {&direction_hand_292_0_0, NULL, &direction_hand_292_0_2, &direction_hand_292_0_2, &direction_hand_292_0_2, NULL, &direction_hand_292_0_8, &direction_hand_292_0_8, &direction_hand_292_0_8, &direction_hand_292_0_8, &direction_hand_292_0_8, &direction_hand_292_0_8, &direction_hand_292_0_8, &direction_hand_292_0_8, &direction_hand_292_0_8, &direction_hand_292_0_8, &direction_hand_292_0_8, &direction_hand_292_0_8, &direction_hand_292_0_8, &direction_hand_292_0_8, NULL, &direction_hand_292_0_0, &direction_hand_292_0_0, &direction_hand_292_0_0, &direction_hand_292_0_0, &direction_hand_292_0_0, &direction_hand_292_0_0, &direction_hand_292_0_0, &direction_hand_292_0_0, &direction_hand_292_0_0, &direction_hand_292_0_0, &direction_hand_292_0_0};
static Animation * anim_array_hand_292[1] = {&anim_hand_292_0};
static Animations anim_hand_292 = {1, &anim_array_hand_292[0]};
static bool anim_hand_292_initialized;
class Hand_292 : public Active
{
public:
    Hand_292(int x, int y) : Active(x, y, Hand_292_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hand", 4);
#endif
        set_visible(false);
        this->animations = &anim_hand_292;
        if (!anim_hand_292_initialized) {
            anim_hand_292_initialized = true;
            images_hand_292_0_0[0] = get_internal_image(1418);
            images_hand_292_0_0[1] = get_internal_image(1418);
            images_hand_292_0_0[2] = get_internal_image(1433);
            images_hand_292_0_0[3] = get_internal_image(1432);
            images_hand_292_0_0[4] = get_internal_image(1432);
            images_hand_292_0_0[5] = get_internal_image(1433);
            images_hand_292_0_2[0] = get_internal_image(1457);
            images_hand_292_0_2[1] = get_internal_image(1457);
            images_hand_292_0_2[2] = get_internal_image(5310);
            images_hand_292_0_2[3] = get_internal_image(5311);
            images_hand_292_0_2[4] = get_internal_image(5311);
            images_hand_292_0_2[5] = get_internal_image(5310);
            images_hand_292_0_8[0] = get_internal_image(1913);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 5);
        alterables->values.set(1, 4);
        alterables->values.set(3, 1);
    }
};
FrameObject * create_hand_292(int x, int y)
{
    return new (Active::pool.create()) Hand_292(x, y);
}
static Image* images_discardpile_293_0_0[1];
static Direction direction_discardpile_293_0_0 = {0, 50, 50, 0, 1, images_discardpile_293_0_0, 1};
static Animation anim_discardpile_293_0 = {&direction_discardpile_293_0_0, &direction_discardpile_293_0_0, &direction_discardpile_293_0_0, &direction_discardpile_293_0_0, &direction_discardpile_293_0_0, &direction_discardpile_293_0_0, &direction_discardpile_293_0_0, &direction_discardpile_293_0_0, &direction_discardpile_293_0_0, &direction_discardpile_293_0_0, &direction_discardpile_293_0_0, &direction_discardpile_293_0_0, &direction_discardpile_293_0_0, &direction_discardpile_293_0_0, &direction_discardpile_293_0_0, &direction_discardpile_293_0_0, NULL, &direction_discardpile_293_0_0, &direction_discardpile_293_0_0, &direction_discardpile_293_0_0, &direction_discardpile_293_0_0, &direction_discardpile_293_0_0, &direction_discardpile_293_0_0, &direction_discardpile_293_0_0, &direction_discardpile_293_0_0, &direction_discardpile_293_0_0, &direction_discardpile_293_0_0, &direction_discardpile_293_0_0, &direction_discardpile_293_0_0, &direction_discardpile_293_0_0, &direction_discardpile_293_0_0, &direction_discardpile_293_0_0};
static Animation * anim_array_discardpile_293[1] = {&anim_discardpile_293_0};
static Animations anim_discardpile_293 = {1, &anim_array_discardpile_293[0]};
static bool anim_discardpile_293_initialized;
class DiscardPile_293 : public Active
{
public:
    DiscardPile_293(int x, int y) : Active(x, y, DiscardPile_293_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Discard_Pile", 12);
#endif
        this->animations = &anim_discardpile_293;
        if (!anim_discardpile_293_initialized) {
            anim_discardpile_293_initialized = true;
            images_discardpile_293_0_0[0] = get_internal_image(1450);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 10);
        alterables->values.set(1, 10);
        alterables->values.set(2, 10);
        alterables->values.set(3, 10);
        alterables->values.set(4, 10);
        alterables->values.set(5, 10);
        alterables->values.set(6, -1);
    }
};
FrameObject * create_discardpile_293(int x, int y)
{
    return new (Active::pool.create()) DiscardPile_293(x, y);
}
static Image* images_active6_294_0_0[1];
static Direction direction_active6_294_0_0 = {0, 50, 50, 0, 1, images_active6_294_0_0, 1};
static Animation anim_active6_294_0 = {&direction_active6_294_0_0, &direction_active6_294_0_0, &direction_active6_294_0_0, &direction_active6_294_0_0, &direction_active6_294_0_0, &direction_active6_294_0_0, &direction_active6_294_0_0, &direction_active6_294_0_0, &direction_active6_294_0_0, &direction_active6_294_0_0, &direction_active6_294_0_0, &direction_active6_294_0_0, &direction_active6_294_0_0, &direction_active6_294_0_0, &direction_active6_294_0_0, &direction_active6_294_0_0, NULL, &direction_active6_294_0_0, &direction_active6_294_0_0, &direction_active6_294_0_0, &direction_active6_294_0_0, &direction_active6_294_0_0, &direction_active6_294_0_0, &direction_active6_294_0_0, &direction_active6_294_0_0, &direction_active6_294_0_0, &direction_active6_294_0_0, &direction_active6_294_0_0, &direction_active6_294_0_0, &direction_active6_294_0_0, &direction_active6_294_0_0, &direction_active6_294_0_0};
static Animation * anim_array_active6_294[1] = {&anim_active6_294_0};
static Animations anim_active6_294 = {1, &anim_array_active6_294[0]};
static bool anim_active6_294_initialized;
class Active6_294 : public Active
{
public:
    Active6_294(int x, int y) : Active(x, y, Active6_294_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 6", 8);
#endif
        this->animations = &anim_active6_294;
        if (!anim_active6_294_initialized) {
            anim_active6_294_initialized = true;
            images_active6_294_0_0[0] = get_internal_image(2766);
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
FrameObject * create_active6_294(int x, int y)
{
    return new (Active::pool.create()) Active6_294(x, y);
}
static Image* images_active7_295_0_0[1];
static Direction direction_active7_295_0_0 = {0, 50, 50, 0, 1, images_active7_295_0_0, 1};
static Image* images_active7_295_0_8[1];
static Direction direction_active7_295_0_8 = {8, 50, 50, 0, 1, images_active7_295_0_8, 1};
static Image* images_active7_295_0_24[1];
static Direction direction_active7_295_0_24 = {24, 50, 50, 0, 1, images_active7_295_0_24, 1};
static Animation anim_active7_295_0 = {&direction_active7_295_0_0, &direction_active7_295_0_0, &direction_active7_295_0_0, &direction_active7_295_0_0, NULL, &direction_active7_295_0_8, &direction_active7_295_0_8, &direction_active7_295_0_8, &direction_active7_295_0_8, &direction_active7_295_0_8, &direction_active7_295_0_8, &direction_active7_295_0_8, &direction_active7_295_0_8, &direction_active7_295_0_8, &direction_active7_295_0_8, &direction_active7_295_0_8, NULL, &direction_active7_295_0_24, &direction_active7_295_0_24, &direction_active7_295_0_24, &direction_active7_295_0_24, &direction_active7_295_0_24, &direction_active7_295_0_24, &direction_active7_295_0_24, &direction_active7_295_0_24, &direction_active7_295_0_24, &direction_active7_295_0_24, &direction_active7_295_0_24, NULL, &direction_active7_295_0_0, &direction_active7_295_0_0, &direction_active7_295_0_0};
static Animation * anim_array_active7_295[1] = {&anim_active7_295_0};
static Animations anim_active7_295 = {1, &anim_array_active7_295[0]};
static bool anim_active7_295_initialized;
class Active7_295 : public Active
{
public:
    Active7_295(int x, int y) : Active(x, y, Active7_295_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 7", 8);
#endif
        this->animations = &anim_active7_295;
        if (!anim_active7_295_initialized) {
            anim_active7_295_initialized = true;
            images_active7_295_0_0[0] = get_internal_image(5315);
            images_active7_295_0_8[0] = get_internal_image(1357);
            images_active7_295_0_24[0] = get_internal_image(5318);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(0);
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(30);
        ((BallMovement*)movement)->set_deceleration(20);
        create_alterables();
    }
};
FrameObject * create_active7_295(int x, int y)
{
    return new (Active::pool.create()) Active7_295(x, y);
}
static Image* images_crystalcursor_296_0_0[7];
static Direction direction_crystalcursor_296_0_0 = {0, 18, 18, 0, -1, images_crystalcursor_296_0_0, 7};
static Animation anim_crystalcursor_296_0 = {&direction_crystalcursor_296_0_0, &direction_crystalcursor_296_0_0, &direction_crystalcursor_296_0_0, &direction_crystalcursor_296_0_0, &direction_crystalcursor_296_0_0, &direction_crystalcursor_296_0_0, &direction_crystalcursor_296_0_0, &direction_crystalcursor_296_0_0, &direction_crystalcursor_296_0_0, &direction_crystalcursor_296_0_0, &direction_crystalcursor_296_0_0, &direction_crystalcursor_296_0_0, &direction_crystalcursor_296_0_0, &direction_crystalcursor_296_0_0, &direction_crystalcursor_296_0_0, &direction_crystalcursor_296_0_0, NULL, &direction_crystalcursor_296_0_0, &direction_crystalcursor_296_0_0, &direction_crystalcursor_296_0_0, &direction_crystalcursor_296_0_0, &direction_crystalcursor_296_0_0, &direction_crystalcursor_296_0_0, &direction_crystalcursor_296_0_0, &direction_crystalcursor_296_0_0, &direction_crystalcursor_296_0_0, &direction_crystalcursor_296_0_0, &direction_crystalcursor_296_0_0, &direction_crystalcursor_296_0_0, &direction_crystalcursor_296_0_0, &direction_crystalcursor_296_0_0, &direction_crystalcursor_296_0_0};
static Animation * anim_array_crystalcursor_296[1] = {&anim_crystalcursor_296_0};
static Animations anim_crystalcursor_296 = {1, &anim_array_crystalcursor_296[0]};
static bool anim_crystalcursor_296_initialized;
class CrystalCursor_296 : public Active
{
public:
    CrystalCursor_296(int x, int y) : Active(x, y, CrystalCursor_296_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Crystal cursor", 14);
#endif
        this->animations = &anim_crystalcursor_296;
        if (!anim_crystalcursor_296_initialized) {
            anim_crystalcursor_296_initialized = true;
            images_crystalcursor_296_0_0[0] = get_internal_image(2518);
            images_crystalcursor_296_0_0[1] = get_internal_image(2497);
            images_crystalcursor_296_0_0[2] = get_internal_image(2536);
            images_crystalcursor_296_0_0[3] = get_internal_image(2537);
            images_crystalcursor_296_0_0[4] = get_internal_image(2538);
            images_crystalcursor_296_0_0[5] = get_internal_image(2539);
            images_crystalcursor_296_0_0[6] = get_internal_image(2540);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        movement_count = 2;
        movements = new Movement*[2];
        set_direction(24);
        movements[0] = new StaticMovement(this);
        movements[0]->index = 0;
        movements[1] = new PinballMovement(this);
        movements[1]->index = 1;
        ((PinballMovement*)movements[1])->set_max_speed(36);
        ((PinballMovement*)movements[1])->set_deceleration(0);
        ((PinballMovement*)movements[1])->set_gravity(25);
        set_movement(0);
        create_alterables();
        alterables->values.set(1, 128);
    }
};
FrameObject * create_crystalcursor_296(int x, int y)
{
    return new (Active::pool.create()) CrystalCursor_296(x, y);
}
static Image* images_option1_297_0_0[1];
static Direction direction_option1_297_0_0 = {0, 50, 50, 0, 1, images_option1_297_0_0, 1};
static Animation anim_option1_297_0 = {&direction_option1_297_0_0, &direction_option1_297_0_0, &direction_option1_297_0_0, &direction_option1_297_0_0, &direction_option1_297_0_0, &direction_option1_297_0_0, &direction_option1_297_0_0, &direction_option1_297_0_0, &direction_option1_297_0_0, &direction_option1_297_0_0, &direction_option1_297_0_0, &direction_option1_297_0_0, &direction_option1_297_0_0, &direction_option1_297_0_0, &direction_option1_297_0_0, &direction_option1_297_0_0, NULL, &direction_option1_297_0_0, &direction_option1_297_0_0, &direction_option1_297_0_0, &direction_option1_297_0_0, &direction_option1_297_0_0, &direction_option1_297_0_0, &direction_option1_297_0_0, &direction_option1_297_0_0, &direction_option1_297_0_0, &direction_option1_297_0_0, &direction_option1_297_0_0, &direction_option1_297_0_0, &direction_option1_297_0_0, &direction_option1_297_0_0, &direction_option1_297_0_0};
static Animation * anim_array_option1_297[1] = {&anim_option1_297_0};
static Animations anim_option1_297 = {1, &anim_array_option1_297[0]};
static bool anim_option1_297_initialized;
class Option1_297 : public Active
{
public:
    Option1_297(int x, int y) : Active(x, y, Option1_297_type)
    {
        // qualifiers: 1
#ifndef NDEBUG
        name = std::string("Option 1", 8);
#endif
        this->animations = &anim_option1_297;
        if (!anim_option1_297_initialized) {
            anim_option1_297_initialized = true;
            images_option1_297_0_0[0] = get_internal_image(5317);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(1);
        create_alterables();
        alterables->values.set(0, 3);
    }
};
FrameObject * create_option1_297(int x, int y)
{
    return new (Active::pool.create()) Option1_297(x, y);
}
static Image* images_option2_298_0_0[1];
static Direction direction_option2_298_0_0 = {0, 50, 50, 0, 1, images_option2_298_0_0, 1};
static Animation anim_option2_298_0 = {&direction_option2_298_0_0, &direction_option2_298_0_0, &direction_option2_298_0_0, &direction_option2_298_0_0, &direction_option2_298_0_0, &direction_option2_298_0_0, &direction_option2_298_0_0, &direction_option2_298_0_0, &direction_option2_298_0_0, &direction_option2_298_0_0, &direction_option2_298_0_0, &direction_option2_298_0_0, &direction_option2_298_0_0, &direction_option2_298_0_0, &direction_option2_298_0_0, &direction_option2_298_0_0, NULL, &direction_option2_298_0_0, &direction_option2_298_0_0, &direction_option2_298_0_0, &direction_option2_298_0_0, &direction_option2_298_0_0, &direction_option2_298_0_0, &direction_option2_298_0_0, &direction_option2_298_0_0, &direction_option2_298_0_0, &direction_option2_298_0_0, &direction_option2_298_0_0, &direction_option2_298_0_0, &direction_option2_298_0_0, &direction_option2_298_0_0, &direction_option2_298_0_0};
static Animation * anim_array_option2_298[1] = {&anim_option2_298_0};
static Animations anim_option2_298 = {1, &anim_array_option2_298[0]};
static bool anim_option2_298_initialized;
class Option2_298 : public Active
{
public:
    Option2_298(int x, int y) : Active(x, y, Option2_298_type)
    {
        // qualifiers: 1
#ifndef NDEBUG
        name = std::string("Option 2", 8);
#endif
        this->animations = &anim_option2_298;
        if (!anim_option2_298_initialized) {
            anim_option2_298_initialized = true;
            images_option2_298_0_0[0] = get_internal_image(5149);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(1);
        create_alterables();
        alterables->values.set(0, 3);
    }
};
FrameObject * create_option2_298(int x, int y)
{
    return new (Active::pool.create()) Option2_298(x, y);
}
static Image* images_active2_299_0_0[1];
static Direction direction_active2_299_0_0 = {0, 50, 50, 0, 1, images_active2_299_0_0, 1};
static Animation anim_active2_299_0 = {&direction_active2_299_0_0, &direction_active2_299_0_0, &direction_active2_299_0_0, &direction_active2_299_0_0, &direction_active2_299_0_0, &direction_active2_299_0_0, &direction_active2_299_0_0, &direction_active2_299_0_0, &direction_active2_299_0_0, &direction_active2_299_0_0, &direction_active2_299_0_0, &direction_active2_299_0_0, &direction_active2_299_0_0, &direction_active2_299_0_0, &direction_active2_299_0_0, &direction_active2_299_0_0, NULL, &direction_active2_299_0_0, &direction_active2_299_0_0, &direction_active2_299_0_0, &direction_active2_299_0_0, &direction_active2_299_0_0, &direction_active2_299_0_0, &direction_active2_299_0_0, &direction_active2_299_0_0, &direction_active2_299_0_0, &direction_active2_299_0_0, &direction_active2_299_0_0, &direction_active2_299_0_0, &direction_active2_299_0_0, &direction_active2_299_0_0, &direction_active2_299_0_0};
static Animation * anim_array_active2_299[1] = {&anim_active2_299_0};
static Animations anim_active2_299 = {1, &anim_array_active2_299[0]};
static bool anim_active2_299_initialized;
class Active2_299 : public Active
{
public:
    Active2_299(int x, int y) : Active(x, y, Active2_299_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 2", 8);
#endif
        this->animations = &anim_active2_299;
        if (!anim_active2_299_initialized) {
            anim_active2_299_initialized = true;
            images_active2_299_0_0[0] = get_internal_image(5316);
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
FrameObject * create_active2_299(int x, int y)
{
    return new (Active::pool.create()) Active2_299(x, y);
}
static Image* images_sparkle1_300_0_0[14];
static Direction direction_sparkle1_300_0_0 = {0, 100, 100, 0, -1, images_sparkle1_300_0_0, 14};
static Animation anim_sparkle1_300_0 = {&direction_sparkle1_300_0_0, &direction_sparkle1_300_0_0, &direction_sparkle1_300_0_0, &direction_sparkle1_300_0_0, &direction_sparkle1_300_0_0, &direction_sparkle1_300_0_0, &direction_sparkle1_300_0_0, &direction_sparkle1_300_0_0, &direction_sparkle1_300_0_0, &direction_sparkle1_300_0_0, &direction_sparkle1_300_0_0, &direction_sparkle1_300_0_0, &direction_sparkle1_300_0_0, &direction_sparkle1_300_0_0, &direction_sparkle1_300_0_0, &direction_sparkle1_300_0_0, NULL, &direction_sparkle1_300_0_0, &direction_sparkle1_300_0_0, &direction_sparkle1_300_0_0, &direction_sparkle1_300_0_0, &direction_sparkle1_300_0_0, &direction_sparkle1_300_0_0, &direction_sparkle1_300_0_0, &direction_sparkle1_300_0_0, &direction_sparkle1_300_0_0, &direction_sparkle1_300_0_0, &direction_sparkle1_300_0_0, &direction_sparkle1_300_0_0, &direction_sparkle1_300_0_0, &direction_sparkle1_300_0_0, &direction_sparkle1_300_0_0};
static Animation * anim_array_sparkle1_300[1] = {&anim_sparkle1_300_0};
static Animations anim_sparkle1_300 = {1, &anim_array_sparkle1_300[0]};
static bool anim_sparkle1_300_initialized;
class Sparkle1_300 : public Active
{
public:
    Sparkle1_300(int x, int y) : Active(x, y, Sparkle1_300_type)
    {
        // qualifiers: 30
#ifndef NDEBUG
        name = std::string("Sparkle 1", 9);
#endif
        this->animations = &anim_sparkle1_300;
        if (!anim_sparkle1_300_initialized) {
            anim_sparkle1_300_initialized = true;
            images_sparkle1_300_0_0[0] = get_internal_image(1042);
            images_sparkle1_300_0_0[1] = get_internal_image(1043);
            images_sparkle1_300_0_0[2] = get_internal_image(1044);
            images_sparkle1_300_0_0[3] = get_internal_image(1045);
            images_sparkle1_300_0_0[4] = get_internal_image(1046);
            images_sparkle1_300_0_0[5] = get_internal_image(1047);
            images_sparkle1_300_0_0[6] = get_internal_image(381);
            images_sparkle1_300_0_0[7] = get_internal_image(1048);
            images_sparkle1_300_0_0[8] = get_internal_image(381);
            images_sparkle1_300_0_0[9] = get_internal_image(1047);
            images_sparkle1_300_0_0[10] = get_internal_image(1046);
            images_sparkle1_300_0_0[11] = get_internal_image(1045);
            images_sparkle1_300_0_0[12] = get_internal_image(1044);
            images_sparkle1_300_0_0[13] = get_internal_image(1043);
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
FrameObject * create_sparkle1_300(int x, int y)
{
    return new (Active::pool.create()) Sparkle1_300(x, y);
}
class QuickBackdrop_301 : public QuickBackdrop
{
public:
    QuickBackdrop_301(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop", 14);
#endif
        flags |= BACKGROUND;
        width = 160;
        height = 240;
        color = Color(0, 0, 0);
        gradient_type = NONE_GRADIENT;
        outline = 0;
    }
};
FrameObject * create_quickbackdrop_301(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop_301(x, y);
}
static Image* images_objectpetal_302_0_0[12];
static Direction direction_objectpetal_302_0_0 = {0, 25, 25, 0, -1, images_objectpetal_302_0_0, 12};
static Animation anim_objectpetal_302_0 = {&direction_objectpetal_302_0_0, &direction_objectpetal_302_0_0, &direction_objectpetal_302_0_0, &direction_objectpetal_302_0_0, &direction_objectpetal_302_0_0, &direction_objectpetal_302_0_0, &direction_objectpetal_302_0_0, &direction_objectpetal_302_0_0, &direction_objectpetal_302_0_0, &direction_objectpetal_302_0_0, &direction_objectpetal_302_0_0, &direction_objectpetal_302_0_0, &direction_objectpetal_302_0_0, &direction_objectpetal_302_0_0, &direction_objectpetal_302_0_0, &direction_objectpetal_302_0_0, NULL, &direction_objectpetal_302_0_0, &direction_objectpetal_302_0_0, &direction_objectpetal_302_0_0, &direction_objectpetal_302_0_0, &direction_objectpetal_302_0_0, &direction_objectpetal_302_0_0, &direction_objectpetal_302_0_0, &direction_objectpetal_302_0_0, &direction_objectpetal_302_0_0, &direction_objectpetal_302_0_0, &direction_objectpetal_302_0_0, &direction_objectpetal_302_0_0, &direction_objectpetal_302_0_0, &direction_objectpetal_302_0_0, &direction_objectpetal_302_0_0};
static Animation * anim_array_objectpetal_302[1] = {&anim_objectpetal_302_0};
static Animations anim_objectpetal_302 = {1, &anim_array_objectpetal_302[0]};
static bool anim_objectpetal_302_initialized;
class ObjectPetal_302 : public Active
{
public:
    ObjectPetal_302(int x, int y) : Active(x, y, ObjectPetal_302_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Object_Petal", 12);
#endif
        this->animations = &anim_objectpetal_302;
        if (!anim_objectpetal_302_initialized) {
            anim_objectpetal_302_initialized = true;
            images_objectpetal_302_0_0[0] = get_internal_image(150);
            images_objectpetal_302_0_0[1] = get_internal_image(282);
            images_objectpetal_302_0_0[2] = get_internal_image(370);
            images_objectpetal_302_0_0[3] = get_internal_image(372);
            images_objectpetal_302_0_0[4] = get_internal_image(380);
            images_objectpetal_302_0_0[5] = get_internal_image(385);
            images_objectpetal_302_0_0[6] = get_internal_image(386);
            images_objectpetal_302_0_0[7] = get_internal_image(387);
            images_objectpetal_302_0_0[8] = get_internal_image(388);
            images_objectpetal_302_0_0[9] = get_internal_image(529);
            images_objectpetal_302_0_0[10] = get_internal_image(533);
            images_objectpetal_302_0_0[11] = get_internal_image(597);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        movement_count = 2;
        movements = new Movement*[2];
        set_direction(24);
        movements[0] = new StaticMovement(this);
        movements[0]->index = 0;
        movements[1] = new PinballMovement(this);
        movements[1]->index = 1;
        ((PinballMovement*)movements[1])->set_max_speed(36);
        ((PinballMovement*)movements[1])->set_deceleration(0);
        ((PinballMovement*)movements[1])->set_gravity(25);
        set_movement(0);
        create_alterables();
    }
};
FrameObject * create_objectpetal_302(int x, int y)
{
    return new (Active::pool.create()) ObjectPetal_302(x, y);
}
class ObjectCodecID_303 : public Counter
{
public:
    ObjectCodecID_303(int x, int y) : Counter(x, y, ObjectCodecID_303_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_CodecID", 14);
#endif
        width = 96;
        height = 32;
        zero_pad = 2;
        type = IMAGE_COUNTER;
        static Image * counter_images[14];
        static bool initialized = false;
        if (!initialized) {
            initialized = true;
            counter_images[0] = get_internal_image(1601);
            counter_images[1] = get_internal_image(1603);
            counter_images[2] = get_internal_image(1602);
            counter_images[3] = get_internal_image(1630);
            counter_images[4] = get_internal_image(1789);
            counter_images[5] = get_internal_image(1779);
            counter_images[6] = get_internal_image(1802);
            counter_images[7] = get_internal_image(1633);
            counter_images[8] = get_internal_image(1781);
            counter_images[9] = get_internal_image(1782);
            counter_images[10] = get_internal_image(1783);
            counter_images[11] = get_internal_image(1785);
            counter_images[12] = get_internal_image(1784);
            counter_images[13] = get_internal_image(210);
        }
        images = (Image**)&counter_images;
        image_count = 14;
        minimum = 0;
        maximum = 99;
        set(0);
        set_direction(8);
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(16);
        ((BallMovement*)movement)->set_deceleration(20);
        movement->start();
    }
};
FrameObject * create_objectcodecid_303(int x, int y)
{
    return new (Counter::pool.create()) ObjectCodecID_303(x, y);
}
static Image* images_objectextralife_304_0_0[11];
static Direction direction_objectextralife_304_0_0 = {0, 25, 25, 0, -1, images_objectextralife_304_0_0, 11};
static Image* images_objectextralife_304_0_1[10];
static Direction direction_objectextralife_304_0_1 = {1, 50, 50, 0, -1, images_objectextralife_304_0_1, 10};
static Image* images_objectextralife_304_0_2[11];
static Direction direction_objectextralife_304_0_2 = {2, 25, 25, 0, -1, images_objectextralife_304_0_2, 11};
static Image* images_objectextralife_304_0_3[11];
static Direction direction_objectextralife_304_0_3 = {3, 25, 25, 0, -1, images_objectextralife_304_0_3, 11};
static Image* images_objectextralife_304_0_4[10];
static Direction direction_objectextralife_304_0_4 = {4, 40, 40, 0, -1, images_objectextralife_304_0_4, 10};
static Image* images_objectextralife_304_0_7[11];
static Direction direction_objectextralife_304_0_7 = {7, 50, 50, 0, 1, images_objectextralife_304_0_7, 11};
static Image* images_objectextralife_304_0_8[11];
static Direction direction_objectextralife_304_0_8 = {8, 50, 50, 0, 1, images_objectextralife_304_0_8, 11};
static Image* images_objectextralife_304_0_9[11];
static Direction direction_objectextralife_304_0_9 = {9, 50, 50, 0, 1, images_objectextralife_304_0_9, 11};
static Image* images_objectextralife_304_0_16[11];
static Direction direction_objectextralife_304_0_16 = {16, 25, 25, 0, -1, images_objectextralife_304_0_16, 11};
static Image* images_objectextralife_304_0_17[10];
static Direction direction_objectextralife_304_0_17 = {17, 50, 50, 0, -1, images_objectextralife_304_0_17, 10};
static Image* images_objectextralife_304_0_18[11];
static Direction direction_objectextralife_304_0_18 = {18, 25, 25, 0, -1, images_objectextralife_304_0_18, 11};
static Image* images_objectextralife_304_0_19[11];
static Direction direction_objectextralife_304_0_19 = {19, 25, 25, 0, -1, images_objectextralife_304_0_19, 11};
static Image* images_objectextralife_304_0_20[10];
static Direction direction_objectextralife_304_0_20 = {20, 40, 40, 0, -1, images_objectextralife_304_0_20, 10};
static Animation anim_objectextralife_304_0 = {&direction_objectextralife_304_0_0, &direction_objectextralife_304_0_1, &direction_objectextralife_304_0_2, &direction_objectextralife_304_0_3, &direction_objectextralife_304_0_4, &direction_objectextralife_304_0_4, &direction_objectextralife_304_0_7, &direction_objectextralife_304_0_7, &direction_objectextralife_304_0_8, &direction_objectextralife_304_0_9, &direction_objectextralife_304_0_9, &direction_objectextralife_304_0_9, &direction_objectextralife_304_0_9, &direction_objectextralife_304_0_16, &direction_objectextralife_304_0_16, &direction_objectextralife_304_0_16, &direction_objectextralife_304_0_16, &direction_objectextralife_304_0_17, &direction_objectextralife_304_0_18, &direction_objectextralife_304_0_19, &direction_objectextralife_304_0_20, &direction_objectextralife_304_0_20, &direction_objectextralife_304_0_20, &direction_objectextralife_304_0_20, &direction_objectextralife_304_0_20, &direction_objectextralife_304_0_20, NULL, &direction_objectextralife_304_0_0, &direction_objectextralife_304_0_0, &direction_objectextralife_304_0_0, &direction_objectextralife_304_0_0, &direction_objectextralife_304_0_0};
static Image* images_objectextralife_304_7_0[3];
static Direction direction_objectextralife_304_7_0 = {0, 50, 50, 0, -1, images_objectextralife_304_7_0, 3};
static Image* images_objectextralife_304_7_1[3];
static Direction direction_objectextralife_304_7_1 = {1, 50, 50, 0, -1, images_objectextralife_304_7_1, 3};
static Image* images_objectextralife_304_7_2[3];
static Direction direction_objectextralife_304_7_2 = {2, 50, 50, 0, -1, images_objectextralife_304_7_2, 3};
static Image* images_objectextralife_304_7_3[3];
static Direction direction_objectextralife_304_7_3 = {3, 50, 50, 0, -1, images_objectextralife_304_7_3, 3};
static Image* images_objectextralife_304_7_4[4];
static Direction direction_objectextralife_304_7_4 = {4, 100, 100, 0, -1, images_objectextralife_304_7_4, 4};
static Image* images_objectextralife_304_7_16[3];
static Direction direction_objectextralife_304_7_16 = {16, 50, 50, 0, -1, images_objectextralife_304_7_16, 3};
static Image* images_objectextralife_304_7_17[3];
static Direction direction_objectextralife_304_7_17 = {17, 50, 50, 0, -1, images_objectextralife_304_7_17, 3};
static Image* images_objectextralife_304_7_18[3];
static Direction direction_objectextralife_304_7_18 = {18, 50, 50, 0, -1, images_objectextralife_304_7_18, 3};
static Image* images_objectextralife_304_7_19[3];
static Direction direction_objectextralife_304_7_19 = {19, 50, 50, 0, -1, images_objectextralife_304_7_19, 3};
static Image* images_objectextralife_304_7_20[4];
static Direction direction_objectextralife_304_7_20 = {20, 100, 100, 0, -1, images_objectextralife_304_7_20, 4};
static Animation anim_objectextralife_304_7 = {&direction_objectextralife_304_7_0, &direction_objectextralife_304_7_1, &direction_objectextralife_304_7_2, &direction_objectextralife_304_7_3, &direction_objectextralife_304_7_4, &direction_objectextralife_304_7_4, &direction_objectextralife_304_7_4, &direction_objectextralife_304_7_4, &direction_objectextralife_304_7_4, &direction_objectextralife_304_7_4, NULL, &direction_objectextralife_304_7_16, &direction_objectextralife_304_7_16, &direction_objectextralife_304_7_16, &direction_objectextralife_304_7_16, &direction_objectextralife_304_7_16, &direction_objectextralife_304_7_16, &direction_objectextralife_304_7_17, &direction_objectextralife_304_7_18, &direction_objectextralife_304_7_19, &direction_objectextralife_304_7_20, &direction_objectextralife_304_7_20, &direction_objectextralife_304_7_20, &direction_objectextralife_304_7_20, &direction_objectextralife_304_7_20, &direction_objectextralife_304_7_20, NULL, &direction_objectextralife_304_7_0, &direction_objectextralife_304_7_0, &direction_objectextralife_304_7_0, &direction_objectextralife_304_7_0, &direction_objectextralife_304_7_0};
static Image* images_objectextralife_304_8_0[1];
static Direction direction_objectextralife_304_8_0 = {0, 50, 50, 0, -1, images_objectextralife_304_8_0, 1};
static Image* images_objectextralife_304_8_1[1];
static Direction direction_objectextralife_304_8_1 = {1, 50, 50, 0, 1, images_objectextralife_304_8_1, 1};
static Image* images_objectextralife_304_8_2[1];
static Direction direction_objectextralife_304_8_2 = {2, 50, 50, 0, -1, images_objectextralife_304_8_2, 1};
static Image* images_objectextralife_304_8_3[1];
static Direction direction_objectextralife_304_8_3 = {3, 50, 50, 0, -1, images_objectextralife_304_8_3, 1};
static Image* images_objectextralife_304_8_4[1];
static Direction direction_objectextralife_304_8_4 = {4, 50, 50, 0, 1, images_objectextralife_304_8_4, 1};
static Image* images_objectextralife_304_8_7[1];
static Direction direction_objectextralife_304_8_7 = {7, 50, 50, 0, 1, images_objectextralife_304_8_7, 1};
static Image* images_objectextralife_304_8_8[1];
static Direction direction_objectextralife_304_8_8 = {8, 50, 50, 0, 1, images_objectextralife_304_8_8, 1};
static Image* images_objectextralife_304_8_9[1];
static Direction direction_objectextralife_304_8_9 = {9, 50, 50, 0, 1, images_objectextralife_304_8_9, 1};
static Image* images_objectextralife_304_8_16[1];
static Direction direction_objectextralife_304_8_16 = {16, 50, 50, 0, -1, images_objectextralife_304_8_16, 1};
static Image* images_objectextralife_304_8_17[1];
static Direction direction_objectextralife_304_8_17 = {17, 50, 50, 0, 1, images_objectextralife_304_8_17, 1};
static Image* images_objectextralife_304_8_18[1];
static Direction direction_objectextralife_304_8_18 = {18, 50, 50, 0, -1, images_objectextralife_304_8_18, 1};
static Image* images_objectextralife_304_8_19[1];
static Direction direction_objectextralife_304_8_19 = {19, 50, 50, 0, -1, images_objectextralife_304_8_19, 1};
static Image* images_objectextralife_304_8_20[1];
static Direction direction_objectextralife_304_8_20 = {20, 50, 50, 0, 1, images_objectextralife_304_8_20, 1};
static Animation anim_objectextralife_304_8 = {&direction_objectextralife_304_8_0, &direction_objectextralife_304_8_1, &direction_objectextralife_304_8_2, &direction_objectextralife_304_8_3, &direction_objectextralife_304_8_4, &direction_objectextralife_304_8_4, &direction_objectextralife_304_8_7, &direction_objectextralife_304_8_7, &direction_objectextralife_304_8_8, &direction_objectextralife_304_8_9, &direction_objectextralife_304_8_9, &direction_objectextralife_304_8_9, &direction_objectextralife_304_8_9, &direction_objectextralife_304_8_16, &direction_objectextralife_304_8_16, &direction_objectextralife_304_8_16, &direction_objectextralife_304_8_16, &direction_objectextralife_304_8_17, &direction_objectextralife_304_8_18, &direction_objectextralife_304_8_19, &direction_objectextralife_304_8_20, &direction_objectextralife_304_8_20, &direction_objectextralife_304_8_20, &direction_objectextralife_304_8_20, &direction_objectextralife_304_8_20, &direction_objectextralife_304_8_20, NULL, &direction_objectextralife_304_8_0, &direction_objectextralife_304_8_0, &direction_objectextralife_304_8_0, &direction_objectextralife_304_8_0, &direction_objectextralife_304_8_0};
static Animation * anim_array_objectextralife_304[9] = {&anim_objectextralife_304_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_objectextralife_304_7, &anim_objectextralife_304_8};
static Animations anim_objectextralife_304 = {9, &anim_array_objectextralife_304[0]};
static bool anim_objectextralife_304_initialized;
class ObjectExtraLife_304 : public Active
{
public:
    ObjectExtraLife_304(int x, int y) : Active(x, y, ObjectExtraLife_304_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Object_ExtraLife", 16);
#endif
        this->animations = &anim_objectextralife_304;
        if (!anim_objectextralife_304_initialized) {
            anim_objectextralife_304_initialized = true;
            images_objectextralife_304_0_0[0] = get_internal_image(613);
            images_objectextralife_304_0_0[1] = get_internal_image(623);
            images_objectextralife_304_0_0[2] = get_internal_image(626);
            images_objectextralife_304_0_0[3] = get_internal_image(627);
            images_objectextralife_304_0_0[4] = get_internal_image(632);
            images_objectextralife_304_0_0[5] = get_internal_image(631);
            images_objectextralife_304_0_0[6] = get_internal_image(634);
            images_objectextralife_304_0_0[7] = get_internal_image(635);
            images_objectextralife_304_0_0[8] = get_internal_image(669);
            images_objectextralife_304_0_0[9] = get_internal_image(637);
            images_objectextralife_304_0_0[10] = get_internal_image(670);
            images_objectextralife_304_0_1[0] = get_internal_image(5266);
            images_objectextralife_304_0_1[1] = get_internal_image(5255);
            images_objectextralife_304_0_1[2] = get_internal_image(5252);
            images_objectextralife_304_0_1[3] = get_internal_image(5248);
            images_objectextralife_304_0_1[4] = get_internal_image(5253);
            images_objectextralife_304_0_1[5] = get_internal_image(5264);
            images_objectextralife_304_0_1[6] = get_internal_image(5259);
            images_objectextralife_304_0_1[7] = get_internal_image(5260);
            images_objectextralife_304_0_1[8] = get_internal_image(5265);
            images_objectextralife_304_0_1[9] = get_internal_image(5258);
            images_objectextralife_304_0_2[0] = get_internal_image(630);
            images_objectextralife_304_0_2[1] = get_internal_image(698);
            images_objectextralife_304_0_2[2] = get_internal_image(700);
            images_objectextralife_304_0_2[3] = get_internal_image(869);
            images_objectextralife_304_0_2[4] = get_internal_image(870);
            images_objectextralife_304_0_2[5] = get_internal_image(871);
            images_objectextralife_304_0_2[6] = get_internal_image(945);
            images_objectextralife_304_0_2[7] = get_internal_image(942);
            images_objectextralife_304_0_2[8] = get_internal_image(950);
            images_objectextralife_304_0_2[9] = get_internal_image(949);
            images_objectextralife_304_0_2[10] = get_internal_image(959);
            images_objectextralife_304_0_3[0] = get_internal_image(630);
            images_objectextralife_304_0_3[1] = get_internal_image(698);
            images_objectextralife_304_0_3[2] = get_internal_image(700);
            images_objectextralife_304_0_3[3] = get_internal_image(869);
            images_objectextralife_304_0_3[4] = get_internal_image(870);
            images_objectextralife_304_0_3[5] = get_internal_image(871);
            images_objectextralife_304_0_3[6] = get_internal_image(945);
            images_objectextralife_304_0_3[7] = get_internal_image(942);
            images_objectextralife_304_0_3[8] = get_internal_image(950);
            images_objectextralife_304_0_3[9] = get_internal_image(949);
            images_objectextralife_304_0_3[10] = get_internal_image(959);
            images_objectextralife_304_0_4[0] = get_internal_image(7811);
            images_objectextralife_304_0_4[1] = get_internal_image(5783);
            images_objectextralife_304_0_4[2] = get_internal_image(4022);
            images_objectextralife_304_0_4[3] = get_internal_image(3736);
            images_objectextralife_304_0_4[4] = get_internal_image(7793);
            images_objectextralife_304_0_4[5] = get_internal_image(7794);
            images_objectextralife_304_0_4[6] = get_internal_image(7792);
            images_objectextralife_304_0_4[7] = get_internal_image(7795);
            images_objectextralife_304_0_4[8] = get_internal_image(7798);
            images_objectextralife_304_0_4[9] = get_internal_image(7796);
            images_objectextralife_304_0_7[0] = get_internal_image(10943);
            images_objectextralife_304_0_7[1] = get_internal_image(10943);
            images_objectextralife_304_0_7[2] = get_internal_image(10943);
            images_objectextralife_304_0_7[3] = get_internal_image(10943);
            images_objectextralife_304_0_7[4] = get_internal_image(10943);
            images_objectextralife_304_0_7[5] = get_internal_image(10943);
            images_objectextralife_304_0_7[6] = get_internal_image(10943);
            images_objectextralife_304_0_7[7] = get_internal_image(10943);
            images_objectextralife_304_0_7[8] = get_internal_image(10943);
            images_objectextralife_304_0_7[9] = get_internal_image(10943);
            images_objectextralife_304_0_7[10] = get_internal_image(10943);
            images_objectextralife_304_0_8[0] = get_internal_image(10946);
            images_objectextralife_304_0_8[1] = get_internal_image(10946);
            images_objectextralife_304_0_8[2] = get_internal_image(10946);
            images_objectextralife_304_0_8[3] = get_internal_image(10946);
            images_objectextralife_304_0_8[4] = get_internal_image(10946);
            images_objectextralife_304_0_8[5] = get_internal_image(10946);
            images_objectextralife_304_0_8[6] = get_internal_image(10946);
            images_objectextralife_304_0_8[7] = get_internal_image(10946);
            images_objectextralife_304_0_8[8] = get_internal_image(10946);
            images_objectextralife_304_0_8[9] = get_internal_image(10946);
            images_objectextralife_304_0_8[10] = get_internal_image(10946);
            images_objectextralife_304_0_9[0] = get_internal_image(10945);
            images_objectextralife_304_0_9[1] = get_internal_image(10945);
            images_objectextralife_304_0_9[2] = get_internal_image(10945);
            images_objectextralife_304_0_9[3] = get_internal_image(10945);
            images_objectextralife_304_0_9[4] = get_internal_image(10945);
            images_objectextralife_304_0_9[5] = get_internal_image(10945);
            images_objectextralife_304_0_9[6] = get_internal_image(10945);
            images_objectextralife_304_0_9[7] = get_internal_image(10945);
            images_objectextralife_304_0_9[8] = get_internal_image(10945);
            images_objectextralife_304_0_9[9] = get_internal_image(10945);
            images_objectextralife_304_0_9[10] = get_internal_image(10945);
            images_objectextralife_304_0_16[0] = get_internal_image(2057);
            images_objectextralife_304_0_16[1] = get_internal_image(3330);
            images_objectextralife_304_0_16[2] = get_internal_image(3659);
            images_objectextralife_304_0_16[3] = get_internal_image(3660);
            images_objectextralife_304_0_16[4] = get_internal_image(3662);
            images_objectextralife_304_0_16[5] = get_internal_image(3663);
            images_objectextralife_304_0_16[6] = get_internal_image(3664);
            images_objectextralife_304_0_16[7] = get_internal_image(3665);
            images_objectextralife_304_0_16[8] = get_internal_image(4358);
            images_objectextralife_304_0_16[9] = get_internal_image(4359);
            images_objectextralife_304_0_16[10] = get_internal_image(4360);
            images_objectextralife_304_0_17[0] = get_internal_image(5251);
            images_objectextralife_304_0_17[1] = get_internal_image(5256);
            images_objectextralife_304_0_17[2] = get_internal_image(5263);
            images_objectextralife_304_0_17[3] = get_internal_image(5267);
            images_objectextralife_304_0_17[4] = get_internal_image(5268);
            images_objectextralife_304_0_17[5] = get_internal_image(5270);
            images_objectextralife_304_0_17[6] = get_internal_image(5271);
            images_objectextralife_304_0_17[7] = get_internal_image(5272);
            images_objectextralife_304_0_17[8] = get_internal_image(5273);
            images_objectextralife_304_0_17[9] = get_internal_image(5274);
            images_objectextralife_304_0_18[0] = get_internal_image(4367);
            images_objectextralife_304_0_18[1] = get_internal_image(4373);
            images_objectextralife_304_0_18[2] = get_internal_image(4378);
            images_objectextralife_304_0_18[3] = get_internal_image(4379);
            images_objectextralife_304_0_18[4] = get_internal_image(4380);
            images_objectextralife_304_0_18[5] = get_internal_image(4381);
            images_objectextralife_304_0_18[6] = get_internal_image(4382);
            images_objectextralife_304_0_18[7] = get_internal_image(4462);
            images_objectextralife_304_0_18[8] = get_internal_image(4464);
            images_objectextralife_304_0_18[9] = get_internal_image(4476);
            images_objectextralife_304_0_18[10] = get_internal_image(4480);
            images_objectextralife_304_0_19[0] = get_internal_image(4367);
            images_objectextralife_304_0_19[1] = get_internal_image(4373);
            images_objectextralife_304_0_19[2] = get_internal_image(4378);
            images_objectextralife_304_0_19[3] = get_internal_image(4379);
            images_objectextralife_304_0_19[4] = get_internal_image(4380);
            images_objectextralife_304_0_19[5] = get_internal_image(4381);
            images_objectextralife_304_0_19[6] = get_internal_image(4382);
            images_objectextralife_304_0_19[7] = get_internal_image(4462);
            images_objectextralife_304_0_19[8] = get_internal_image(4464);
            images_objectextralife_304_0_19[9] = get_internal_image(4476);
            images_objectextralife_304_0_19[10] = get_internal_image(4480);
            images_objectextralife_304_0_20[0] = get_internal_image(7806);
            images_objectextralife_304_0_20[1] = get_internal_image(7810);
            images_objectextralife_304_0_20[2] = get_internal_image(7813);
            images_objectextralife_304_0_20[3] = get_internal_image(7814);
            images_objectextralife_304_0_20[4] = get_internal_image(7824);
            images_objectextralife_304_0_20[5] = get_internal_image(7826);
            images_objectextralife_304_0_20[6] = get_internal_image(7828);
            images_objectextralife_304_0_20[7] = get_internal_image(7829);
            images_objectextralife_304_0_20[8] = get_internal_image(7830);
            images_objectextralife_304_0_20[9] = get_internal_image(7831);
            images_objectextralife_304_7_0[0] = get_internal_image(689);
            images_objectextralife_304_7_0[1] = get_internal_image(672);
            images_objectextralife_304_7_0[2] = get_internal_image(673);
            images_objectextralife_304_7_1[0] = get_internal_image(5304);
            images_objectextralife_304_7_1[1] = get_internal_image(5391);
            images_objectextralife_304_7_1[2] = get_internal_image(5275);
            images_objectextralife_304_7_2[0] = get_internal_image(965);
            images_objectextralife_304_7_2[1] = get_internal_image(960);
            images_objectextralife_304_7_2[2] = get_internal_image(962);
            images_objectextralife_304_7_3[0] = get_internal_image(965);
            images_objectextralife_304_7_3[1] = get_internal_image(960);
            images_objectextralife_304_7_3[2] = get_internal_image(962);
            images_objectextralife_304_7_4[0] = get_internal_image(7833);
            images_objectextralife_304_7_4[1] = get_internal_image(7832);
            images_objectextralife_304_7_4[2] = get_internal_image(7835);
            images_objectextralife_304_7_4[3] = get_internal_image(7836);
            images_objectextralife_304_7_16[0] = get_internal_image(2054);
            images_objectextralife_304_7_16[1] = get_internal_image(2055);
            images_objectextralife_304_7_16[2] = get_internal_image(2056);
            images_objectextralife_304_7_17[0] = get_internal_image(5297);
            images_objectextralife_304_7_17[1] = get_internal_image(5398);
            images_objectextralife_304_7_17[2] = get_internal_image(5622);
            images_objectextralife_304_7_18[0] = get_internal_image(692);
            images_objectextralife_304_7_18[1] = get_internal_image(1022);
            images_objectextralife_304_7_18[2] = get_internal_image(1031);
            images_objectextralife_304_7_19[0] = get_internal_image(692);
            images_objectextralife_304_7_19[1] = get_internal_image(1022);
            images_objectextralife_304_7_19[2] = get_internal_image(1031);
            images_objectextralife_304_7_20[0] = get_internal_image(7834);
            images_objectextralife_304_7_20[1] = get_internal_image(7837);
            images_objectextralife_304_7_20[2] = get_internal_image(7838);
            images_objectextralife_304_7_20[3] = get_internal_image(7839);
            images_objectextralife_304_8_0[0] = get_internal_image(634);
            images_objectextralife_304_8_1[0] = get_internal_image(5259);
            images_objectextralife_304_8_2[0] = get_internal_image(945);
            images_objectextralife_304_8_3[0] = get_internal_image(945);
            images_objectextralife_304_8_4[0] = get_internal_image(7792);
            images_objectextralife_304_8_7[0] = get_internal_image(10943);
            images_objectextralife_304_8_8[0] = get_internal_image(10946);
            images_objectextralife_304_8_9[0] = get_internal_image(10945);
            images_objectextralife_304_8_16[0] = get_internal_image(3664);
            images_objectextralife_304_8_17[0] = get_internal_image(5271);
            images_objectextralife_304_8_18[0] = get_internal_image(4382);
            images_objectextralife_304_8_19[0] = get_internal_image(4382);
            images_objectextralife_304_8_20[0] = get_internal_image(7828);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(16);
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(0);
        ((BallMovement*)movement)->set_deceleration(0);
        movement->start();
        flags |= GLOBAL;
        alterables = &global_data_19_object_extralife.value;
        if (!global_data_19_object_extralife.init) {
            alterables->values.set(2, -1);
            alterables->values.set(3, 1);
            global_data_19_object_extralife.init = true;
        }
    }
};
FrameObject * create_objectextralife_304(int x, int y)
{
    return new (Active::pool.create()) ObjectExtraLife_304(x, y);
}
static Image* images_effectsdust_305_4_0[7];
static Direction direction_effectsdust_305_4_0 = {0, 30, 30, 0, 1, images_effectsdust_305_4_0, 7};
static Animation anim_effectsdust_305_4 = {&direction_effectsdust_305_4_0, &direction_effectsdust_305_4_0, &direction_effectsdust_305_4_0, &direction_effectsdust_305_4_0, &direction_effectsdust_305_4_0, &direction_effectsdust_305_4_0, &direction_effectsdust_305_4_0, &direction_effectsdust_305_4_0, &direction_effectsdust_305_4_0, &direction_effectsdust_305_4_0, &direction_effectsdust_305_4_0, &direction_effectsdust_305_4_0, &direction_effectsdust_305_4_0, &direction_effectsdust_305_4_0, &direction_effectsdust_305_4_0, &direction_effectsdust_305_4_0, NULL, &direction_effectsdust_305_4_0, &direction_effectsdust_305_4_0, &direction_effectsdust_305_4_0, &direction_effectsdust_305_4_0, &direction_effectsdust_305_4_0, &direction_effectsdust_305_4_0, &direction_effectsdust_305_4_0, &direction_effectsdust_305_4_0, &direction_effectsdust_305_4_0, &direction_effectsdust_305_4_0, &direction_effectsdust_305_4_0, &direction_effectsdust_305_4_0, &direction_effectsdust_305_4_0, &direction_effectsdust_305_4_0, &direction_effectsdust_305_4_0};
static Animation * anim_array_effectsdust_305[5] = {NULL, NULL, NULL, NULL, &anim_effectsdust_305_4};
static Animations anim_effectsdust_305 = {5, &anim_array_effectsdust_305[0]};
static bool anim_effectsdust_305_initialized;
class EffectsDust_305 : public Active
{
public:
    EffectsDust_305(int x, int y) : Active(x, y, EffectsDust_305_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effects_Dust", 12);
#endif
        this->animations = &anim_effectsdust_305;
        if (!anim_effectsdust_305_initialized) {
            anim_effectsdust_305_initialized = true;
            images_effectsdust_305_4_0[0] = get_internal_image(353);
            images_effectsdust_305_4_0[1] = get_internal_image(424);
            images_effectsdust_305_4_0[2] = get_internal_image(425);
            images_effectsdust_305_4_0[3] = get_internal_image(426);
            images_effectsdust_305_4_0[4] = get_internal_image(427);
            images_effectsdust_305_4_0[5] = get_internal_image(428);
            images_effectsdust_305_4_0[6] = get_internal_image(429);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = DISAPPEARING;
        current_animation = animation;
        flags |= FADEOUT;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_20_effects_dust.value;
        if (!global_data_20_effects_dust.init) {
            global_data_20_effects_dust.init = true;
        }
    }
};
FrameObject * create_effectsdust_305(int x, int y)
{
    return new (Active::pool.create()) EffectsDust_305(x, y);
}
