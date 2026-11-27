#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

static Image* images_magisterletter_4015_0_0[1];
static Direction direction_magisterletter_4015_0_0 = {0, 50, 50, 0, 1, images_magisterletter_4015_0_0, 1};
static Animation anim_magisterletter_4015_0 = {&direction_magisterletter_4015_0_0, &direction_magisterletter_4015_0_0, &direction_magisterletter_4015_0_0, &direction_magisterletter_4015_0_0, &direction_magisterletter_4015_0_0, &direction_magisterletter_4015_0_0, &direction_magisterletter_4015_0_0, &direction_magisterletter_4015_0_0, &direction_magisterletter_4015_0_0, &direction_magisterletter_4015_0_0, &direction_magisterletter_4015_0_0, &direction_magisterletter_4015_0_0, &direction_magisterletter_4015_0_0, &direction_magisterletter_4015_0_0, &direction_magisterletter_4015_0_0, &direction_magisterletter_4015_0_0, NULL, &direction_magisterletter_4015_0_0, &direction_magisterletter_4015_0_0, &direction_magisterletter_4015_0_0, &direction_magisterletter_4015_0_0, &direction_magisterletter_4015_0_0, &direction_magisterletter_4015_0_0, &direction_magisterletter_4015_0_0, &direction_magisterletter_4015_0_0, &direction_magisterletter_4015_0_0, &direction_magisterletter_4015_0_0, &direction_magisterletter_4015_0_0, &direction_magisterletter_4015_0_0, &direction_magisterletter_4015_0_0, &direction_magisterletter_4015_0_0, &direction_magisterletter_4015_0_0};
static Animation * anim_array_magisterletter_4015[1] = {&anim_magisterletter_4015_0};
static Animations anim_magisterletter_4015 = {1, &anim_array_magisterletter_4015[0]};
static bool anim_magisterletter_4015_initialized;
class MagisterLetter_4015 : public Active
{
public:
    MagisterLetter_4015(int x, int y) : Active(x, y, MagisterLetter_4015_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("MagisterLetter", 14);
#endif
        this->animations = &anim_magisterletter_4015;
        if (!anim_magisterletter_4015_initialized) {
            anim_magisterletter_4015_initialized = true;
            images_magisterletter_4015_0_0[0] = get_internal_image(14340);
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
FrameObject * create_magisterletter_4015(int x, int y)
{
    return new (Active::pool.create()) MagisterLetter_4015(x, y);
}
static Image* images_schmupfloor_4016_0_0[1];
static Direction direction_schmupfloor_4016_0_0 = {0, 50, 50, 0, 1, images_schmupfloor_4016_0_0, 1};
static Animation anim_schmupfloor_4016_0 = {&direction_schmupfloor_4016_0_0, &direction_schmupfloor_4016_0_0, &direction_schmupfloor_4016_0_0, &direction_schmupfloor_4016_0_0, &direction_schmupfloor_4016_0_0, &direction_schmupfloor_4016_0_0, &direction_schmupfloor_4016_0_0, &direction_schmupfloor_4016_0_0, &direction_schmupfloor_4016_0_0, &direction_schmupfloor_4016_0_0, &direction_schmupfloor_4016_0_0, &direction_schmupfloor_4016_0_0, &direction_schmupfloor_4016_0_0, &direction_schmupfloor_4016_0_0, &direction_schmupfloor_4016_0_0, &direction_schmupfloor_4016_0_0, NULL, &direction_schmupfloor_4016_0_0, &direction_schmupfloor_4016_0_0, &direction_schmupfloor_4016_0_0, &direction_schmupfloor_4016_0_0, &direction_schmupfloor_4016_0_0, &direction_schmupfloor_4016_0_0, &direction_schmupfloor_4016_0_0, &direction_schmupfloor_4016_0_0, &direction_schmupfloor_4016_0_0, &direction_schmupfloor_4016_0_0, &direction_schmupfloor_4016_0_0, &direction_schmupfloor_4016_0_0, &direction_schmupfloor_4016_0_0, &direction_schmupfloor_4016_0_0, &direction_schmupfloor_4016_0_0};
static Animation * anim_array_schmupfloor_4016[1] = {&anim_schmupfloor_4016_0};
static Animations anim_schmupfloor_4016 = {1, &anim_array_schmupfloor_4016[0]};
static bool anim_schmupfloor_4016_initialized;
class SchmupFloor_4016 : public Active
{
public:
    SchmupFloor_4016(int x, int y) : Active(x, y, SchmupFloor_4016_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("SchmupFloor", 11);
#endif
        set_visible(false);
        this->animations = &anim_schmupfloor_4016;
        if (!anim_schmupfloor_4016_initialized) {
            anim_schmupfloor_4016_initialized = true;
            images_schmupfloor_4016_0_0[0] = get_internal_image(6705);
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
FrameObject * create_schmupfloor_4016(int x, int y)
{
    return new (Active::pool.create()) SchmupFloor_4016(x, y);
}
static Image* images_npcdail_4017_0_0[1];
static Direction direction_npcdail_4017_0_0 = {0, 50, 50, 0, 1, images_npcdail_4017_0_0, 1};
static Image* images_npcdail_4017_0_16[1];
static Direction direction_npcdail_4017_0_16 = {16, 50, 50, 0, 1, images_npcdail_4017_0_16, 1};
static Animation anim_npcdail_4017_0 = {&direction_npcdail_4017_0_0, &direction_npcdail_4017_0_0, &direction_npcdail_4017_0_0, &direction_npcdail_4017_0_0, &direction_npcdail_4017_0_0, &direction_npcdail_4017_0_0, &direction_npcdail_4017_0_0, &direction_npcdail_4017_0_0, NULL, &direction_npcdail_4017_0_16, &direction_npcdail_4017_0_16, &direction_npcdail_4017_0_16, &direction_npcdail_4017_0_16, &direction_npcdail_4017_0_16, &direction_npcdail_4017_0_16, &direction_npcdail_4017_0_16, &direction_npcdail_4017_0_16, &direction_npcdail_4017_0_16, &direction_npcdail_4017_0_16, &direction_npcdail_4017_0_16, &direction_npcdail_4017_0_16, &direction_npcdail_4017_0_16, &direction_npcdail_4017_0_16, &direction_npcdail_4017_0_16, NULL, &direction_npcdail_4017_0_0, &direction_npcdail_4017_0_0, &direction_npcdail_4017_0_0, &direction_npcdail_4017_0_0, &direction_npcdail_4017_0_0, &direction_npcdail_4017_0_0, &direction_npcdail_4017_0_0};
static Image* images_npcdail_4017_5_0[21];
static Direction direction_npcdail_4017_5_0 = {0, 50, 50, 0, 1, images_npcdail_4017_5_0, 21};
static Image* images_npcdail_4017_5_16[21];
static Direction direction_npcdail_4017_5_16 = {16, 50, 50, 0, 1, images_npcdail_4017_5_16, 21};
static Animation anim_npcdail_4017_5 = {&direction_npcdail_4017_5_0, &direction_npcdail_4017_5_0, &direction_npcdail_4017_5_0, &direction_npcdail_4017_5_0, &direction_npcdail_4017_5_0, &direction_npcdail_4017_5_0, &direction_npcdail_4017_5_0, &direction_npcdail_4017_5_0, NULL, &direction_npcdail_4017_5_16, &direction_npcdail_4017_5_16, &direction_npcdail_4017_5_16, &direction_npcdail_4017_5_16, &direction_npcdail_4017_5_16, &direction_npcdail_4017_5_16, &direction_npcdail_4017_5_16, &direction_npcdail_4017_5_16, &direction_npcdail_4017_5_16, &direction_npcdail_4017_5_16, &direction_npcdail_4017_5_16, &direction_npcdail_4017_5_16, &direction_npcdail_4017_5_16, &direction_npcdail_4017_5_16, &direction_npcdail_4017_5_16, NULL, &direction_npcdail_4017_5_0, &direction_npcdail_4017_5_0, &direction_npcdail_4017_5_0, &direction_npcdail_4017_5_0, &direction_npcdail_4017_5_0, &direction_npcdail_4017_5_0, &direction_npcdail_4017_5_0};
static Image* images_npcdail_4017_8_0[4];
static Direction direction_npcdail_4017_8_0 = {0, 15, 15, 2, -1, images_npcdail_4017_8_0, 4};
static Image* images_npcdail_4017_8_1[1];
static Direction direction_npcdail_4017_8_1 = {1, 50, 50, 0, 1, images_npcdail_4017_8_1, 1};
static Animation anim_npcdail_4017_8 = {&direction_npcdail_4017_8_0, &direction_npcdail_4017_8_1, &direction_npcdail_4017_8_1, &direction_npcdail_4017_8_1, &direction_npcdail_4017_8_1, &direction_npcdail_4017_8_1, &direction_npcdail_4017_8_1, &direction_npcdail_4017_8_1, &direction_npcdail_4017_8_1, &direction_npcdail_4017_8_1, &direction_npcdail_4017_8_1, &direction_npcdail_4017_8_1, &direction_npcdail_4017_8_1, &direction_npcdail_4017_8_1, &direction_npcdail_4017_8_1, &direction_npcdail_4017_8_1, &direction_npcdail_4017_8_1, &direction_npcdail_4017_8_0, &direction_npcdail_4017_8_0, &direction_npcdail_4017_8_0, &direction_npcdail_4017_8_0, &direction_npcdail_4017_8_0, &direction_npcdail_4017_8_0, &direction_npcdail_4017_8_0, &direction_npcdail_4017_8_0, &direction_npcdail_4017_8_0, &direction_npcdail_4017_8_0, &direction_npcdail_4017_8_0, &direction_npcdail_4017_8_0, &direction_npcdail_4017_8_0, &direction_npcdail_4017_8_0, &direction_npcdail_4017_8_0};
static Image* images_npcdail_4017_9_16[4];
static Direction direction_npcdail_4017_9_16 = {16, 9, 9, 3, -1, images_npcdail_4017_9_16, 4};
static Animation anim_npcdail_4017_9 = {NULL, &direction_npcdail_4017_9_16, &direction_npcdail_4017_9_16, &direction_npcdail_4017_9_16, &direction_npcdail_4017_9_16, &direction_npcdail_4017_9_16, &direction_npcdail_4017_9_16, &direction_npcdail_4017_9_16, &direction_npcdail_4017_9_16, &direction_npcdail_4017_9_16, &direction_npcdail_4017_9_16, &direction_npcdail_4017_9_16, &direction_npcdail_4017_9_16, &direction_npcdail_4017_9_16, &direction_npcdail_4017_9_16, &direction_npcdail_4017_9_16, &direction_npcdail_4017_9_16, &direction_npcdail_4017_9_16, &direction_npcdail_4017_9_16, &direction_npcdail_4017_9_16, &direction_npcdail_4017_9_16, &direction_npcdail_4017_9_16, &direction_npcdail_4017_9_16, &direction_npcdail_4017_9_16, &direction_npcdail_4017_9_16, &direction_npcdail_4017_9_16, &direction_npcdail_4017_9_16, &direction_npcdail_4017_9_16, &direction_npcdail_4017_9_16, &direction_npcdail_4017_9_16, &direction_npcdail_4017_9_16, &direction_npcdail_4017_9_16};
static Image* images_npcdail_4017_10_0[1];
static Direction direction_npcdail_4017_10_0 = {0, 50, 50, 0, -1, images_npcdail_4017_10_0, 1};
static Animation anim_npcdail_4017_10 = {&direction_npcdail_4017_10_0, &direction_npcdail_4017_10_0, &direction_npcdail_4017_10_0, &direction_npcdail_4017_10_0, &direction_npcdail_4017_10_0, &direction_npcdail_4017_10_0, &direction_npcdail_4017_10_0, &direction_npcdail_4017_10_0, &direction_npcdail_4017_10_0, &direction_npcdail_4017_10_0, &direction_npcdail_4017_10_0, &direction_npcdail_4017_10_0, &direction_npcdail_4017_10_0, &direction_npcdail_4017_10_0, &direction_npcdail_4017_10_0, &direction_npcdail_4017_10_0, NULL, &direction_npcdail_4017_10_0, &direction_npcdail_4017_10_0, &direction_npcdail_4017_10_0, &direction_npcdail_4017_10_0, &direction_npcdail_4017_10_0, &direction_npcdail_4017_10_0, &direction_npcdail_4017_10_0, &direction_npcdail_4017_10_0, &direction_npcdail_4017_10_0, &direction_npcdail_4017_10_0, &direction_npcdail_4017_10_0, &direction_npcdail_4017_10_0, &direction_npcdail_4017_10_0, &direction_npcdail_4017_10_0, &direction_npcdail_4017_10_0};
static Image* images_npcdail_4017_11_0[2];
static Direction direction_npcdail_4017_11_0 = {0, 23, 23, 0, -1, images_npcdail_4017_11_0, 2};
static Animation anim_npcdail_4017_11 = {&direction_npcdail_4017_11_0, &direction_npcdail_4017_11_0, &direction_npcdail_4017_11_0, &direction_npcdail_4017_11_0, &direction_npcdail_4017_11_0, &direction_npcdail_4017_11_0, &direction_npcdail_4017_11_0, &direction_npcdail_4017_11_0, &direction_npcdail_4017_11_0, &direction_npcdail_4017_11_0, &direction_npcdail_4017_11_0, &direction_npcdail_4017_11_0, &direction_npcdail_4017_11_0, &direction_npcdail_4017_11_0, &direction_npcdail_4017_11_0, &direction_npcdail_4017_11_0, NULL, &direction_npcdail_4017_11_0, &direction_npcdail_4017_11_0, &direction_npcdail_4017_11_0, &direction_npcdail_4017_11_0, &direction_npcdail_4017_11_0, &direction_npcdail_4017_11_0, &direction_npcdail_4017_11_0, &direction_npcdail_4017_11_0, &direction_npcdail_4017_11_0, &direction_npcdail_4017_11_0, &direction_npcdail_4017_11_0, &direction_npcdail_4017_11_0, &direction_npcdail_4017_11_0, &direction_npcdail_4017_11_0, &direction_npcdail_4017_11_0};
static Animation * anim_array_npcdail_4017[12] = {&anim_npcdail_4017_0, NULL, NULL, NULL, NULL, &anim_npcdail_4017_5, NULL, NULL, &anim_npcdail_4017_8, &anim_npcdail_4017_9, &anim_npcdail_4017_10, &anim_npcdail_4017_11};
static Animations anim_npcdail_4017 = {12, &anim_array_npcdail_4017[0]};
static bool anim_npcdail_4017_initialized;
class NPCDail_4017 : public Active
{
public:
    NPCDail_4017(int x, int y) : Active(x, y, NPCDail_4017_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_Dail", 8);
#endif
        set_visible(false);
        this->animations = &anim_npcdail_4017;
        if (!anim_npcdail_4017_initialized) {
            anim_npcdail_4017_initialized = true;
            images_npcdail_4017_0_0[0] = get_internal_image(4862);
            images_npcdail_4017_0_16[0] = get_internal_image(16237);
            images_npcdail_4017_5_0[0] = get_internal_image(7708);
            images_npcdail_4017_5_0[1] = get_internal_image(4962);
            images_npcdail_4017_5_0[2] = get_internal_image(7746);
            images_npcdail_4017_5_0[3] = get_internal_image(7747);
            images_npcdail_4017_5_0[4] = get_internal_image(15513);
            images_npcdail_4017_5_0[5] = get_internal_image(2977);
            images_npcdail_4017_5_0[6] = get_internal_image(16179);
            images_npcdail_4017_5_0[7] = get_internal_image(16182);
            images_npcdail_4017_5_0[8] = get_internal_image(16183);
            images_npcdail_4017_5_0[9] = get_internal_image(16176);
            images_npcdail_4017_5_0[10] = get_internal_image(16184);
            images_npcdail_4017_5_0[11] = get_internal_image(16185);
            images_npcdail_4017_5_0[12] = get_internal_image(16225);
            images_npcdail_4017_5_0[13] = get_internal_image(16229);
            images_npcdail_4017_5_0[14] = get_internal_image(7745);
            images_npcdail_4017_5_0[15] = get_internal_image(16231);
            images_npcdail_4017_5_0[16] = get_internal_image(16232);
            images_npcdail_4017_5_0[17] = get_internal_image(16233);
            images_npcdail_4017_5_0[18] = get_internal_image(16234);
            images_npcdail_4017_5_0[19] = get_internal_image(16235);
            images_npcdail_4017_5_0[20] = get_internal_image(16236);
            images_npcdail_4017_5_16[0] = get_internal_image(15821);
            images_npcdail_4017_5_16[1] = get_internal_image(16270);
            images_npcdail_4017_5_16[2] = get_internal_image(16041);
            images_npcdail_4017_5_16[3] = get_internal_image(16139);
            images_npcdail_4017_5_16[4] = get_internal_image(16333);
            images_npcdail_4017_5_16[5] = get_internal_image(16140);
            images_npcdail_4017_5_16[6] = get_internal_image(16532);
            images_npcdail_4017_5_16[7] = get_internal_image(16533);
            images_npcdail_4017_5_16[8] = get_internal_image(16534);
            images_npcdail_4017_5_16[9] = get_internal_image(16535);
            images_npcdail_4017_5_16[10] = get_internal_image(16536);
            images_npcdail_4017_5_16[11] = get_internal_image(16537);
            images_npcdail_4017_5_16[12] = get_internal_image(16538);
            images_npcdail_4017_5_16[13] = get_internal_image(16539);
            images_npcdail_4017_5_16[14] = get_internal_image(16141);
            images_npcdail_4017_5_16[15] = get_internal_image(16540);
            images_npcdail_4017_5_16[16] = get_internal_image(16541);
            images_npcdail_4017_5_16[17] = get_internal_image(16542);
            images_npcdail_4017_5_16[18] = get_internal_image(16543);
            images_npcdail_4017_5_16[19] = get_internal_image(16544);
            images_npcdail_4017_5_16[20] = get_internal_image(16545);
            images_npcdail_4017_8_0[0] = get_internal_image(156);
            images_npcdail_4017_8_0[1] = get_internal_image(156);
            images_npcdail_4017_8_0[2] = get_internal_image(315);
            images_npcdail_4017_8_0[3] = get_internal_image(553);
            images_npcdail_4017_8_1[0] = get_internal_image(315);
            images_npcdail_4017_9_16[0] = get_internal_image(2844);
            images_npcdail_4017_9_16[1] = get_internal_image(2903);
            images_npcdail_4017_9_16[2] = get_internal_image(2904);
            images_npcdail_4017_9_16[3] = get_internal_image(2927);
            images_npcdail_4017_10_0[0] = get_internal_image(14494);
            images_npcdail_4017_11_0[0] = get_internal_image(675);
            images_npcdail_4017_11_0[1] = get_internal_image(677);
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
FrameObject * create_npcdail_4017(int x, int y)
{
    return new (Active::pool.create()) NPCDail_4017(x, y);
}
class Message_4018 : public TextBlitter
{
public:
    Message_4018(int x, int y) : TextBlitter(x, y, Message_4018_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Message", 7);
#endif
        flags &= ~SCROLL;
        width = 321;
        height = 175;
        char_width = 8;
        char_height = 20;
        x_spacing = 0;
        y_spacing = 0;
        char_offset = 0;
        x_off = 0;
        y_off = 0;
        image = get_internal_image(5250);
        image_width = 256;
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
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
        set_text(std::string("PLACEHOLDER FRAME", 17));
        has_callback = false;
        create_alterables();
    }
};
FrameObject * create_message_4018(int x, int y)
{
    return new (TextBlitter::pool.create()) Message_4018(x, y);
}
class DialogData_4019 : public Text
{
public:
    DialogData_4019(int x, int y) : Text(x, y, DialogData_4019_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Dialog Data", 11);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("07 06 go_05_06 We ain't gonna stay hidden forever, spaceman. Be quick about it.", 79));
        add_line(std::string("02 12 ca_29_03 For sure! It's what we're all about.", 51));
        add_line(std::string("10 21 za_04_01 What are THEY doing here\?!", 41));
        add_line(std::string("07 00 go_06_01 Nice hat.", 24));
        add_line(std::string("10 00 za_04_02 Nice gut.", 24));
        add_line(std::string("03 00 mi_22_01 Let me help!", 27));
        add_line(std::string("07 27 go_06_02 It seems that we have a common enemy, Zao.", 57));
        add_line(std::string("10 00 za_04_04 So let me get this straight... The Magister says that if we join together and fight Mr. Braven, we get half of the Kingdom Stone's energy\?", 153));
        add_line(std::string("07 00 go_06_03 Sounds like a fair offer, does it not\?", 53));
        add_line(std::string("10 21 za_04_05 Are you kidding\?! My city needs WAY more than half!", 66));
        add_line(std::string("07 24 go_06_04 Phah! You just want to hog the last of our reserves!", 67));
        add_line(std::string("10 30 za_04_06 I know you feel a little jealous, but I can't help if my city is bigger than yours!", 98));
        add_line(std::string("07 18 go_06_05 RRRRAGH!", 23));
        add_line(std::string("05 21 to_21_01 Hold on a minute, fellas! This is exactly what Brevon wants! For you two to fight while he gets away with all of your energy!", 140));
        add_line(std::string("07 24 go_06_06 What difference does it make if it's Brevon or this swine\?", 73));
        add_line(std::string("10 36 za_04_07 Upftcrhthrchffooo We're marching into Shuigang whether you like it or not!", 89));
        add_line(std::string("07 24 go_06_07 You don't have the guts!", 39));
        add_line(std::string("03 57 mi_22_03 Look!", 20));
        add_line(std::string("07 21 go_06_08 Dragon...", 24));
        add_line(std::string("07 18 go_06_09 Kneel before the ancient beast!", 46));
        add_line(std::string("10 39 za_04_08 Oh\?", 18));
        add_line(std::string("10 39 za_04_09 You're saying that... we should work together\?", 61));
        add_line(std::string("10 09 za_04_10 Ohohoh, of course! Eheheh! Heh... Please don't eat us!", 69));
        add_line(std::string("03 57 mi_22_04 Was that...\?", 27));
        add_line(std::string("05 21 to_21_02 I couldn't have been her... could it\?", 52));
        add_line(std::string("01 00 li_35_01 Careful what you wish for.", 41));
        add_line(std::string("02 33 ca_30_01 LILAC!", 21));
        add_line(std::string("03 33 mi_22_05 LILAC!", 21));
        add_line(std::string("05 06 to_21_03 LILAC!", 21));
        add_line(std::string("01 57 li_35_02 Guys!!", 21));
        add_line(std::string("03 03 mi_22_06 It's really you! You came back!", 46));
        add_line(std::string("02 48 ca_30_03 Where've you been\? How did you do that\?\?", 55));
        add_line(std::string("01 30 li_35_03 I didn't do it. This little fella did.", 53));
        add_line(std::string("03 57 mi_22_07 Eeeeh!", 21));
        add_line(std::string("01 27 li_35_04 It's okay, guys. This robot wasn't made by Brevon.", 65));
        add_line(std::string("05 00 to_21_05 Really!", 22));
        add_line(std::string("01 27 li_35_05 It's a long story... but the Magister believes us now. We have his full support.", 95));
        add_line(std::string("02 09 ca_30_04 Awww yeah! That's ma girl!", 41));
        add_line(std::string("07 18 go_06_10 My friends! We have been blessed with the seal of the dragon! We must heed its call and join together for the greater good!", 138));
        add_line(std::string("10 09 za_04_11 Under my leadership!", 35));
        add_line(std::string("07 06 go_06_11 ...You can't be serious.", 39));
        add_line(std::string("01 00 li_36_01 Uh, excuse me...", 31));
        add_line(std::string("07 00 go_06_12 You're alive\?", 28));
        add_line(std::string("01 00 li_36_02 Of course! I was the one who led that dragon here.", 65));
        add_line(std::string("02 00 ca_30_05 And guess what, Mayor Zao\? Lilac said that the invaders have a lot of treasure on their ship!", 108));
        add_line(std::string("10 00 za_04_12 Of course!", 25));
        add_line(std::string("10 00 za_04_13 Hear this, my friends! There's treasure to be won from this battle!", 82));
        add_line(std::string("10 00 za_04_14 Even if you don't fight for freedom, fight for wealth! For glory! For everlasting chow mein!", 107));
        add_line(std::string());
        add_line(std::string());
        add_line(std::string("07 00 go_07_01 What can you tell us about the invaders\?", 55));
        add_line(std::string("05 00 to_22_01 Well, Brevon is a starship commander. He doesn't have as much experience fighting on the ground as you do.", 121));
        add_line(std::string("10 21 za_05_01 Then we shall take the battle to the streets!", 60));
        add_line(std::string("07 00 go_07_02 But we need to cross the snowfields without gettin' wasted.", 74));
        add_line(std::string("01 00 li_37_01 We do have one advantage... Brevon wants the four of us dead no matter what.", 91));
        add_line(std::string("01 24 li_37_02 If he sees us coming, we can distract him.", 57));
        add_line(std::string("07 00 go_07_03 A diversion\? Do you really think you can pull it off\?", 68));
        add_line(std::string("02 00 ca_31_01 Remember all the times we distracted -you-\?", 58));
        add_line(std::string("07 06 go_07_04 Point taken.", 27));
        add_line(std::string("10 00 za_05_02 What about the stone\? How do we get it back\?", 59));
        add_line(std::string("05 00 to_22_02 I could modify one of my hacking devices to knock out power to the engine mainframe.", 99));
        add_line(std::string("10 00 za_05_03 ...In my language\?", 33));
        add_line(std::string("01 24 li_37_03 Kill the power, get the stone back... Right\?", 59));
        add_line(std::string("05 00 to_22_03 You got it.", 26));
        add_line(std::string("05 00 to_22_04 I hope this works. In case it doesn't... I need you to be prepared for what I might have to do.", 110));
        add_line(std::string("01 72 li_37_04 ...It'll work. It has to.", 40));
        add_line(std::string("01 00 li_37_05 ...Would Brevon have left us alone if we hadn't tried to stop him\?", 81));
        add_line(std::string("05 18 to_22_05 He pulled that trick on you, huh\?", 48));
        add_line(std::string("01 00 li_37_06 But is it true\?", 30));
        add_line(std::string("05 00 to_22_06 Maybe, but I wouldn't trust him on it. Even if he did leave your people alone, it would only be a matter", 119));
        add_line(std::string("05 00 to_xx_xx of time before his conquest affected your world.", 63));
        add_line(std::string("01 24 li_37_07 ...You're right. We can't quit now.", 50));
        add_line(std::string("10 00 za_06_01 Gyaah!", 21));
        add_line(std::string("07 00 go_08_01 It's an ambush!", 30));
        add_line(std::string("07 00 go_08_02 Keep moving! We'll hold them off!", 48));
        add_line(std::string("10 00 za_06_02 You better!", 26));
        add_line(std::string("10 00 za_06_03 Alright! While you're driving my tank, I have only two rules...", 78));
        add_line(std::string("10 00 za_06_04 Aim, and fire!", 29));
        add_line(std::string("01 00 li_38_01 You ready, Carol\?", 32));
        add_line(std::string("02 00 ca_32_01 Ready to rock!", 29));
        add_line(std::string("01 00 li_38_02 Milla\?", 21));
        add_line(std::string("03 00 mi_23_01 Together!", 24));
        add_line(std::string("01 00 li_38_03 Let's show this green maniac how to save a planet!", 65));
        add_line(std::string("01 42 li_49_01 I couldn't save it... I couldn't even stop him from getting away...", 82));
        add_line(std::string("05 00 to_30_01 Don't beat yourself up. Brevon didn't get the stone, and his army was destroyed with his ship.", 109));
        add_line(std::string("05 00 to_30_02 Thanks to you, our mission is complete.", 54));
        add_line(std::string("01 66 li_49_02 But at what cost\? How are we going to survive without any more energy\?", 85));
        add_line(std::string("02 54 ca_42_01 Uhh, Lilac... You might wanna look up.", 53));
        add_line(std::string("03 00 mi_29_01 Wow...", 21));
        add_line(std::string("01 00 li_49_03 It's... It's not destroyed\?", 42));
        add_line(std::string("01 00 li_49_04 It must have changed form!", 41));
        add_line(std::string("05 00 to_30_03 Call me impressed...", 35));
        add_line(std::string("02 00 ca_41_03 She's alive!", 27));
        add_line(std::string("03 63 mi_28_02 I'm sorry...", 27));
        add_line(std::string("01 00 li_48_02 You weren't yourself. It's okay.", 47));
        add_line(std::string("01 00 li_48_03 It's okay.", 25));
        add_line(std::string("01 00 li_48_01 Milla!", 21));
        add_line(std::string("02 00 ca_22_01 STOP!", 20));
        add_line(std::string("13 00 sx_07_01 THE ALIEN ARMY HAS COMMENCED ITS ATTACK.", 55));
        add_line(std::string("12 16 br_08_01 Give the order to your troops.", 45));
        add_line(std::string("11 00 da_05_00 It will be done.", 31));
        add_line(std::string("12 28 br_08_02 Find the Commander and his pets and tear them to shreds. And leave their brains intact if possible. I might use them for something.", 146));
        add_line(std::string("12 28 br_08_03 Fire at will!", 28));
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
FrameObject * create_dialogdata_4019(int x, int y)
{
    return new (Text::pool.create()) DialogData_4019(x, y);
}
static Image* images_breakableshuigangpillarpiece_4020_0_0[6];
static Direction direction_breakableshuigangpillarpiece_4020_0_0 = {0, 0, 0, 0, 1, images_breakableshuigangpillarpiece_4020_0_0, 6};
static Animation anim_breakableshuigangpillarpiece_4020_0 = {&direction_breakableshuigangpillarpiece_4020_0_0, &direction_breakableshuigangpillarpiece_4020_0_0, &direction_breakableshuigangpillarpiece_4020_0_0, &direction_breakableshuigangpillarpiece_4020_0_0, &direction_breakableshuigangpillarpiece_4020_0_0, &direction_breakableshuigangpillarpiece_4020_0_0, &direction_breakableshuigangpillarpiece_4020_0_0, &direction_breakableshuigangpillarpiece_4020_0_0, &direction_breakableshuigangpillarpiece_4020_0_0, &direction_breakableshuigangpillarpiece_4020_0_0, &direction_breakableshuigangpillarpiece_4020_0_0, &direction_breakableshuigangpillarpiece_4020_0_0, &direction_breakableshuigangpillarpiece_4020_0_0, &direction_breakableshuigangpillarpiece_4020_0_0, &direction_breakableshuigangpillarpiece_4020_0_0, &direction_breakableshuigangpillarpiece_4020_0_0, NULL, &direction_breakableshuigangpillarpiece_4020_0_0, &direction_breakableshuigangpillarpiece_4020_0_0, &direction_breakableshuigangpillarpiece_4020_0_0, &direction_breakableshuigangpillarpiece_4020_0_0, &direction_breakableshuigangpillarpiece_4020_0_0, &direction_breakableshuigangpillarpiece_4020_0_0, &direction_breakableshuigangpillarpiece_4020_0_0, &direction_breakableshuigangpillarpiece_4020_0_0, &direction_breakableshuigangpillarpiece_4020_0_0, &direction_breakableshuigangpillarpiece_4020_0_0, &direction_breakableshuigangpillarpiece_4020_0_0, &direction_breakableshuigangpillarpiece_4020_0_0, &direction_breakableshuigangpillarpiece_4020_0_0, &direction_breakableshuigangpillarpiece_4020_0_0, &direction_breakableshuigangpillarpiece_4020_0_0};
static Animation * anim_array_breakableshuigangpillarpiece_4020[1] = {&anim_breakableshuigangpillarpiece_4020_0};
static Animations anim_breakableshuigangpillarpiece_4020 = {1, &anim_array_breakableshuigangpillarpiece_4020[0]};
static bool anim_breakableshuigangpillarpiece_4020_initialized;
class BreakableShuigangPillarPiece_4020 : public Active
{
public:
    BreakableShuigangPillarPiece_4020(int x, int y) : Active(x, y, BreakableShuigangPillarPiece_4020_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BreakableShuigangPillarPiece", 28);
#endif
        this->animations = &anim_breakableshuigangpillarpiece_4020;
        if (!anim_breakableshuigangpillarpiece_4020_initialized) {
            anim_breakableshuigangpillarpiece_4020_initialized = true;
            images_breakableshuigangpillarpiece_4020_0_0[0] = get_internal_image(7958);
            images_breakableshuigangpillarpiece_4020_0_0[1] = get_internal_image(8534);
            images_breakableshuigangpillarpiece_4020_0_0[2] = get_internal_image(4403);
            images_breakableshuigangpillarpiece_4020_0_0[3] = get_internal_image(7405);
            images_breakableshuigangpillarpiece_4020_0_0[4] = get_internal_image(7953);
            images_breakableshuigangpillarpiece_4020_0_0[5] = get_internal_image(7956);
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
FrameObject * create_breakableshuigangpillarpiece_4020(int x, int y)
{
    return new (Active::pool.create()) BreakableShuigangPillarPiece_4020(x, y);
}
static Image* images_npcsgmerc_4021_0_0[1];
static Direction direction_npcsgmerc_4021_0_0 = {0, 10, 10, 0, -1, images_npcsgmerc_4021_0_0, 1};
static Image* images_npcsgmerc_4021_0_16[1];
static Direction direction_npcsgmerc_4021_0_16 = {16, 10, 10, 0, -1, images_npcsgmerc_4021_0_16, 1};
static Animation anim_npcsgmerc_4021_0 = {&direction_npcsgmerc_4021_0_0, &direction_npcsgmerc_4021_0_0, &direction_npcsgmerc_4021_0_0, &direction_npcsgmerc_4021_0_0, &direction_npcsgmerc_4021_0_0, &direction_npcsgmerc_4021_0_0, &direction_npcsgmerc_4021_0_0, &direction_npcsgmerc_4021_0_0, NULL, &direction_npcsgmerc_4021_0_16, &direction_npcsgmerc_4021_0_16, &direction_npcsgmerc_4021_0_16, &direction_npcsgmerc_4021_0_16, &direction_npcsgmerc_4021_0_16, &direction_npcsgmerc_4021_0_16, &direction_npcsgmerc_4021_0_16, &direction_npcsgmerc_4021_0_16, &direction_npcsgmerc_4021_0_16, &direction_npcsgmerc_4021_0_16, &direction_npcsgmerc_4021_0_16, &direction_npcsgmerc_4021_0_16, &direction_npcsgmerc_4021_0_16, &direction_npcsgmerc_4021_0_16, &direction_npcsgmerc_4021_0_16, NULL, &direction_npcsgmerc_4021_0_0, &direction_npcsgmerc_4021_0_0, &direction_npcsgmerc_4021_0_0, &direction_npcsgmerc_4021_0_0, &direction_npcsgmerc_4021_0_0, &direction_npcsgmerc_4021_0_0, &direction_npcsgmerc_4021_0_0};
static Image* images_npcsgmerc_4021_2_0[8];
static Direction direction_npcsgmerc_4021_2_0 = {0, 25, 25, 0, -1, images_npcsgmerc_4021_2_0, 8};
static Image* images_npcsgmerc_4021_2_1[8];
static Direction direction_npcsgmerc_4021_2_1 = {1, 25, 25, 0, -1, images_npcsgmerc_4021_2_1, 8};
static Image* images_npcsgmerc_4021_2_16[8];
static Direction direction_npcsgmerc_4021_2_16 = {16, 25, 25, 0, -1, images_npcsgmerc_4021_2_16, 8};
static Image* images_npcsgmerc_4021_2_17[8];
static Direction direction_npcsgmerc_4021_2_17 = {17, 25, 25, 0, -1, images_npcsgmerc_4021_2_17, 8};
static Animation anim_npcsgmerc_4021_2 = {&direction_npcsgmerc_4021_2_0, &direction_npcsgmerc_4021_2_1, &direction_npcsgmerc_4021_2_1, &direction_npcsgmerc_4021_2_1, &direction_npcsgmerc_4021_2_1, &direction_npcsgmerc_4021_2_1, &direction_npcsgmerc_4021_2_1, &direction_npcsgmerc_4021_2_1, &direction_npcsgmerc_4021_2_1, &direction_npcsgmerc_4021_2_16, &direction_npcsgmerc_4021_2_16, &direction_npcsgmerc_4021_2_16, &direction_npcsgmerc_4021_2_16, &direction_npcsgmerc_4021_2_16, &direction_npcsgmerc_4021_2_16, &direction_npcsgmerc_4021_2_16, &direction_npcsgmerc_4021_2_16, &direction_npcsgmerc_4021_2_17, &direction_npcsgmerc_4021_2_17, &direction_npcsgmerc_4021_2_17, &direction_npcsgmerc_4021_2_17, &direction_npcsgmerc_4021_2_17, &direction_npcsgmerc_4021_2_17, &direction_npcsgmerc_4021_2_17, &direction_npcsgmerc_4021_2_17, &direction_npcsgmerc_4021_2_0, &direction_npcsgmerc_4021_2_0, &direction_npcsgmerc_4021_2_0, &direction_npcsgmerc_4021_2_0, &direction_npcsgmerc_4021_2_0, &direction_npcsgmerc_4021_2_0, &direction_npcsgmerc_4021_2_0};
static Image* images_npcsgmerc_4021_5_0[3];
static Direction direction_npcsgmerc_4021_5_0 = {0, 0, 0, 0, -1, images_npcsgmerc_4021_5_0, 3};
static Image* images_npcsgmerc_4021_5_16[3];
static Direction direction_npcsgmerc_4021_5_16 = {16, 0, 0, 0, -1, images_npcsgmerc_4021_5_16, 3};
static Animation anim_npcsgmerc_4021_5 = {&direction_npcsgmerc_4021_5_0, &direction_npcsgmerc_4021_5_0, &direction_npcsgmerc_4021_5_0, &direction_npcsgmerc_4021_5_0, &direction_npcsgmerc_4021_5_0, &direction_npcsgmerc_4021_5_0, &direction_npcsgmerc_4021_5_0, &direction_npcsgmerc_4021_5_0, NULL, &direction_npcsgmerc_4021_5_16, &direction_npcsgmerc_4021_5_16, &direction_npcsgmerc_4021_5_16, &direction_npcsgmerc_4021_5_16, &direction_npcsgmerc_4021_5_16, &direction_npcsgmerc_4021_5_16, &direction_npcsgmerc_4021_5_16, &direction_npcsgmerc_4021_5_16, &direction_npcsgmerc_4021_5_16, &direction_npcsgmerc_4021_5_16, &direction_npcsgmerc_4021_5_16, &direction_npcsgmerc_4021_5_16, &direction_npcsgmerc_4021_5_16, &direction_npcsgmerc_4021_5_16, &direction_npcsgmerc_4021_5_16, NULL, &direction_npcsgmerc_4021_5_0, &direction_npcsgmerc_4021_5_0, &direction_npcsgmerc_4021_5_0, &direction_npcsgmerc_4021_5_0, &direction_npcsgmerc_4021_5_0, &direction_npcsgmerc_4021_5_0, &direction_npcsgmerc_4021_5_0};
static Image* images_npcsgmerc_4021_7_0[1];
static Direction direction_npcsgmerc_4021_7_0 = {0, 10, 10, 0, -1, images_npcsgmerc_4021_7_0, 1};
static Image* images_npcsgmerc_4021_7_8[1];
static Direction direction_npcsgmerc_4021_7_8 = {8, 50, 50, 0, 1, images_npcsgmerc_4021_7_8, 1};
static Image* images_npcsgmerc_4021_7_16[1];
static Direction direction_npcsgmerc_4021_7_16 = {16, 10, 10, 0, -1, images_npcsgmerc_4021_7_16, 1};
static Animation anim_npcsgmerc_4021_7 = {&direction_npcsgmerc_4021_7_0, &direction_npcsgmerc_4021_7_0, &direction_npcsgmerc_4021_7_0, &direction_npcsgmerc_4021_7_0, NULL, &direction_npcsgmerc_4021_7_8, &direction_npcsgmerc_4021_7_8, &direction_npcsgmerc_4021_7_8, &direction_npcsgmerc_4021_7_8, &direction_npcsgmerc_4021_7_8, &direction_npcsgmerc_4021_7_8, &direction_npcsgmerc_4021_7_8, NULL, &direction_npcsgmerc_4021_7_16, &direction_npcsgmerc_4021_7_16, &direction_npcsgmerc_4021_7_16, &direction_npcsgmerc_4021_7_16, &direction_npcsgmerc_4021_7_16, &direction_npcsgmerc_4021_7_16, &direction_npcsgmerc_4021_7_16, &direction_npcsgmerc_4021_7_16, &direction_npcsgmerc_4021_7_16, &direction_npcsgmerc_4021_7_16, &direction_npcsgmerc_4021_7_16, NULL, &direction_npcsgmerc_4021_7_0, &direction_npcsgmerc_4021_7_0, &direction_npcsgmerc_4021_7_0, &direction_npcsgmerc_4021_7_0, &direction_npcsgmerc_4021_7_0, &direction_npcsgmerc_4021_7_0, &direction_npcsgmerc_4021_7_0};
static Image* images_npcsgmerc_4021_8_0[1];
static Direction direction_npcsgmerc_4021_8_0 = {0, 50, 50, 0, -1, images_npcsgmerc_4021_8_0, 1};
static Image* images_npcsgmerc_4021_8_16[1];
static Direction direction_npcsgmerc_4021_8_16 = {16, 50, 50, 0, -1, images_npcsgmerc_4021_8_16, 1};
static Animation anim_npcsgmerc_4021_8 = {&direction_npcsgmerc_4021_8_0, &direction_npcsgmerc_4021_8_0, &direction_npcsgmerc_4021_8_0, &direction_npcsgmerc_4021_8_0, &direction_npcsgmerc_4021_8_0, &direction_npcsgmerc_4021_8_0, &direction_npcsgmerc_4021_8_0, &direction_npcsgmerc_4021_8_0, NULL, &direction_npcsgmerc_4021_8_16, &direction_npcsgmerc_4021_8_16, &direction_npcsgmerc_4021_8_16, &direction_npcsgmerc_4021_8_16, &direction_npcsgmerc_4021_8_16, &direction_npcsgmerc_4021_8_16, &direction_npcsgmerc_4021_8_16, &direction_npcsgmerc_4021_8_16, &direction_npcsgmerc_4021_8_16, &direction_npcsgmerc_4021_8_16, &direction_npcsgmerc_4021_8_16, &direction_npcsgmerc_4021_8_16, &direction_npcsgmerc_4021_8_16, &direction_npcsgmerc_4021_8_16, &direction_npcsgmerc_4021_8_16, NULL, &direction_npcsgmerc_4021_8_0, &direction_npcsgmerc_4021_8_0, &direction_npcsgmerc_4021_8_0, &direction_npcsgmerc_4021_8_0, &direction_npcsgmerc_4021_8_0, &direction_npcsgmerc_4021_8_0, &direction_npcsgmerc_4021_8_0};
static Image* images_npcsgmerc_4021_9_0[5];
static Direction direction_npcsgmerc_4021_9_0 = {0, 35, 35, 4, -1, images_npcsgmerc_4021_9_0, 5};
static Image* images_npcsgmerc_4021_9_16[5];
static Direction direction_npcsgmerc_4021_9_16 = {16, 35, 35, 4, -1, images_npcsgmerc_4021_9_16, 5};
static Animation anim_npcsgmerc_4021_9 = {&direction_npcsgmerc_4021_9_0, &direction_npcsgmerc_4021_9_0, &direction_npcsgmerc_4021_9_0, &direction_npcsgmerc_4021_9_0, &direction_npcsgmerc_4021_9_0, &direction_npcsgmerc_4021_9_0, &direction_npcsgmerc_4021_9_0, &direction_npcsgmerc_4021_9_0, NULL, &direction_npcsgmerc_4021_9_16, &direction_npcsgmerc_4021_9_16, &direction_npcsgmerc_4021_9_16, &direction_npcsgmerc_4021_9_16, &direction_npcsgmerc_4021_9_16, &direction_npcsgmerc_4021_9_16, &direction_npcsgmerc_4021_9_16, &direction_npcsgmerc_4021_9_16, &direction_npcsgmerc_4021_9_16, &direction_npcsgmerc_4021_9_16, &direction_npcsgmerc_4021_9_16, &direction_npcsgmerc_4021_9_16, &direction_npcsgmerc_4021_9_16, &direction_npcsgmerc_4021_9_16, &direction_npcsgmerc_4021_9_16, NULL, &direction_npcsgmerc_4021_9_0, &direction_npcsgmerc_4021_9_0, &direction_npcsgmerc_4021_9_0, &direction_npcsgmerc_4021_9_0, &direction_npcsgmerc_4021_9_0, &direction_npcsgmerc_4021_9_0, &direction_npcsgmerc_4021_9_0};
static Image* images_npcsgmerc_4021_10_0[1];
static Direction direction_npcsgmerc_4021_10_0 = {0, 50, 50, 0, -1, images_npcsgmerc_4021_10_0, 1};
static Image* images_npcsgmerc_4021_10_8[3];
static Direction direction_npcsgmerc_4021_10_8 = {8, 50, 50, 0, 1, images_npcsgmerc_4021_10_8, 3};
static Image* images_npcsgmerc_4021_10_16[1];
static Direction direction_npcsgmerc_4021_10_16 = {16, 50, 50, 0, -1, images_npcsgmerc_4021_10_16, 1};
static Animation anim_npcsgmerc_4021_10 = {&direction_npcsgmerc_4021_10_0, &direction_npcsgmerc_4021_10_0, &direction_npcsgmerc_4021_10_0, &direction_npcsgmerc_4021_10_0, NULL, &direction_npcsgmerc_4021_10_8, &direction_npcsgmerc_4021_10_8, &direction_npcsgmerc_4021_10_8, &direction_npcsgmerc_4021_10_8, &direction_npcsgmerc_4021_10_8, &direction_npcsgmerc_4021_10_8, &direction_npcsgmerc_4021_10_8, NULL, &direction_npcsgmerc_4021_10_16, &direction_npcsgmerc_4021_10_16, &direction_npcsgmerc_4021_10_16, &direction_npcsgmerc_4021_10_16, &direction_npcsgmerc_4021_10_16, &direction_npcsgmerc_4021_10_16, &direction_npcsgmerc_4021_10_16, &direction_npcsgmerc_4021_10_16, &direction_npcsgmerc_4021_10_16, &direction_npcsgmerc_4021_10_16, &direction_npcsgmerc_4021_10_16, NULL, &direction_npcsgmerc_4021_10_0, &direction_npcsgmerc_4021_10_0, &direction_npcsgmerc_4021_10_0, &direction_npcsgmerc_4021_10_0, &direction_npcsgmerc_4021_10_0, &direction_npcsgmerc_4021_10_0, &direction_npcsgmerc_4021_10_0};
static Image* images_npcsgmerc_4021_11_0[1];
static Direction direction_npcsgmerc_4021_11_0 = {0, 50, 50, 0, -1, images_npcsgmerc_4021_11_0, 1};
static Image* images_npcsgmerc_4021_11_8[1];
static Direction direction_npcsgmerc_4021_11_8 = {8, 50, 50, 0, 1, images_npcsgmerc_4021_11_8, 1};
static Image* images_npcsgmerc_4021_11_16[1];
static Direction direction_npcsgmerc_4021_11_16 = {16, 50, 50, 0, -1, images_npcsgmerc_4021_11_16, 1};
static Animation anim_npcsgmerc_4021_11 = {&direction_npcsgmerc_4021_11_0, &direction_npcsgmerc_4021_11_0, &direction_npcsgmerc_4021_11_0, &direction_npcsgmerc_4021_11_0, NULL, &direction_npcsgmerc_4021_11_8, &direction_npcsgmerc_4021_11_8, &direction_npcsgmerc_4021_11_8, &direction_npcsgmerc_4021_11_8, &direction_npcsgmerc_4021_11_8, &direction_npcsgmerc_4021_11_8, &direction_npcsgmerc_4021_11_8, NULL, &direction_npcsgmerc_4021_11_16, &direction_npcsgmerc_4021_11_16, &direction_npcsgmerc_4021_11_16, &direction_npcsgmerc_4021_11_16, &direction_npcsgmerc_4021_11_16, &direction_npcsgmerc_4021_11_16, &direction_npcsgmerc_4021_11_16, &direction_npcsgmerc_4021_11_16, &direction_npcsgmerc_4021_11_16, &direction_npcsgmerc_4021_11_16, &direction_npcsgmerc_4021_11_16, NULL, &direction_npcsgmerc_4021_11_0, &direction_npcsgmerc_4021_11_0, &direction_npcsgmerc_4021_11_0, &direction_npcsgmerc_4021_11_0, &direction_npcsgmerc_4021_11_0, &direction_npcsgmerc_4021_11_0, &direction_npcsgmerc_4021_11_0};
static Image* images_npcsgmerc_4021_12_0[1];
static Direction direction_npcsgmerc_4021_12_0 = {0, 50, 50, 0, -1, images_npcsgmerc_4021_12_0, 1};
static Image* images_npcsgmerc_4021_12_16[1];
static Direction direction_npcsgmerc_4021_12_16 = {16, 50, 50, 0, -1, images_npcsgmerc_4021_12_16, 1};
static Animation anim_npcsgmerc_4021_12 = {&direction_npcsgmerc_4021_12_0, &direction_npcsgmerc_4021_12_0, &direction_npcsgmerc_4021_12_0, &direction_npcsgmerc_4021_12_0, &direction_npcsgmerc_4021_12_0, &direction_npcsgmerc_4021_12_0, &direction_npcsgmerc_4021_12_0, &direction_npcsgmerc_4021_12_0, NULL, &direction_npcsgmerc_4021_12_16, &direction_npcsgmerc_4021_12_16, &direction_npcsgmerc_4021_12_16, &direction_npcsgmerc_4021_12_16, &direction_npcsgmerc_4021_12_16, &direction_npcsgmerc_4021_12_16, &direction_npcsgmerc_4021_12_16, &direction_npcsgmerc_4021_12_16, &direction_npcsgmerc_4021_12_16, &direction_npcsgmerc_4021_12_16, &direction_npcsgmerc_4021_12_16, &direction_npcsgmerc_4021_12_16, &direction_npcsgmerc_4021_12_16, &direction_npcsgmerc_4021_12_16, &direction_npcsgmerc_4021_12_16, NULL, &direction_npcsgmerc_4021_12_0, &direction_npcsgmerc_4021_12_0, &direction_npcsgmerc_4021_12_0, &direction_npcsgmerc_4021_12_0, &direction_npcsgmerc_4021_12_0, &direction_npcsgmerc_4021_12_0, &direction_npcsgmerc_4021_12_0};
static Animation * anim_array_npcsgmerc_4021[13] = {&anim_npcsgmerc_4021_0, NULL, &anim_npcsgmerc_4021_2, NULL, NULL, &anim_npcsgmerc_4021_5, NULL, &anim_npcsgmerc_4021_7, &anim_npcsgmerc_4021_8, &anim_npcsgmerc_4021_9, &anim_npcsgmerc_4021_10, &anim_npcsgmerc_4021_11, &anim_npcsgmerc_4021_12};
static Animations anim_npcsgmerc_4021 = {13, &anim_array_npcsgmerc_4021[0]};
static bool anim_npcsgmerc_4021_initialized;
class NPCSGMerc_4021 : public Active
{
public:
    NPCSGMerc_4021(int x, int y) : Active(x, y, NPCSGMerc_4021_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_SGMerc", 10);
#endif
        this->animations = &anim_npcsgmerc_4021;
        if (!anim_npcsgmerc_4021_initialized) {
            anim_npcsgmerc_4021_initialized = true;
            images_npcsgmerc_4021_0_0[0] = get_internal_image(3455);
            images_npcsgmerc_4021_0_16[0] = get_internal_image(14399);
            images_npcsgmerc_4021_2_0[0] = get_internal_image(3456);
            images_npcsgmerc_4021_2_0[1] = get_internal_image(14376);
            images_npcsgmerc_4021_2_0[2] = get_internal_image(3457);
            images_npcsgmerc_4021_2_0[3] = get_internal_image(14357);
            images_npcsgmerc_4021_2_0[4] = get_internal_image(14360);
            images_npcsgmerc_4021_2_0[5] = get_internal_image(14358);
            images_npcsgmerc_4021_2_0[6] = get_internal_image(14356);
            images_npcsgmerc_4021_2_0[7] = get_internal_image(3459);
            images_npcsgmerc_4021_2_1[0] = get_internal_image(14361);
            images_npcsgmerc_4021_2_1[1] = get_internal_image(14359);
            images_npcsgmerc_4021_2_1[2] = get_internal_image(14362);
            images_npcsgmerc_4021_2_1[3] = get_internal_image(14364);
            images_npcsgmerc_4021_2_1[4] = get_internal_image(14363);
            images_npcsgmerc_4021_2_1[5] = get_internal_image(14366);
            images_npcsgmerc_4021_2_1[6] = get_internal_image(14367);
            images_npcsgmerc_4021_2_1[7] = get_internal_image(14368);
            images_npcsgmerc_4021_2_16[0] = get_internal_image(14383);
            images_npcsgmerc_4021_2_16[1] = get_internal_image(14384);
            images_npcsgmerc_4021_2_16[2] = get_internal_image(14385);
            images_npcsgmerc_4021_2_16[3] = get_internal_image(14386);
            images_npcsgmerc_4021_2_16[4] = get_internal_image(14387);
            images_npcsgmerc_4021_2_16[5] = get_internal_image(14388);
            images_npcsgmerc_4021_2_16[6] = get_internal_image(14389);
            images_npcsgmerc_4021_2_16[7] = get_internal_image(14390);
            images_npcsgmerc_4021_2_17[0] = get_internal_image(14391);
            images_npcsgmerc_4021_2_17[1] = get_internal_image(14392);
            images_npcsgmerc_4021_2_17[2] = get_internal_image(14393);
            images_npcsgmerc_4021_2_17[3] = get_internal_image(14394);
            images_npcsgmerc_4021_2_17[4] = get_internal_image(14395);
            images_npcsgmerc_4021_2_17[5] = get_internal_image(14396);
            images_npcsgmerc_4021_2_17[6] = get_internal_image(14397);
            images_npcsgmerc_4021_2_17[7] = get_internal_image(14398);
            images_npcsgmerc_4021_5_0[0] = get_internal_image(3850);
            images_npcsgmerc_4021_5_0[1] = get_internal_image(8553);
            images_npcsgmerc_4021_5_0[2] = get_internal_image(8559);
            images_npcsgmerc_4021_5_16[0] = get_internal_image(3851);
            images_npcsgmerc_4021_5_16[1] = get_internal_image(3852);
            images_npcsgmerc_4021_5_16[2] = get_internal_image(8555);
            images_npcsgmerc_4021_7_0[0] = get_internal_image(14370);
            images_npcsgmerc_4021_7_8[0] = get_internal_image(3434);
            images_npcsgmerc_4021_7_16[0] = get_internal_image(14382);
            images_npcsgmerc_4021_8_0[0] = get_internal_image(14365);
            images_npcsgmerc_4021_8_16[0] = get_internal_image(14381);
            images_npcsgmerc_4021_9_0[0] = get_internal_image(7406);
            images_npcsgmerc_4021_9_0[1] = get_internal_image(7636);
            images_npcsgmerc_4021_9_0[2] = get_internal_image(7397);
            images_npcsgmerc_4021_9_0[3] = get_internal_image(7402);
            images_npcsgmerc_4021_9_0[4] = get_internal_image(7406);
            images_npcsgmerc_4021_9_16[0] = get_internal_image(7413);
            images_npcsgmerc_4021_9_16[1] = get_internal_image(7937);
            images_npcsgmerc_4021_9_16[2] = get_internal_image(7946);
            images_npcsgmerc_4021_9_16[3] = get_internal_image(7957);
            images_npcsgmerc_4021_9_16[4] = get_internal_image(7413);
            images_npcsgmerc_4021_10_0[0] = get_internal_image(14374);
            images_npcsgmerc_4021_10_8[0] = get_internal_image(11420);
            images_npcsgmerc_4021_10_8[1] = get_internal_image(11421);
            images_npcsgmerc_4021_10_8[2] = get_internal_image(11422);
            images_npcsgmerc_4021_10_16[0] = get_internal_image(14371);
            images_npcsgmerc_4021_11_0[0] = get_internal_image(14785);
            images_npcsgmerc_4021_11_8[0] = get_internal_image(14787);
            images_npcsgmerc_4021_11_16[0] = get_internal_image(14786);
            images_npcsgmerc_4021_12_0[0] = get_internal_image(14789);
            images_npcsgmerc_4021_12_16[0] = get_internal_image(14788);
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
FrameObject * create_npcsgmerc_4021(int x, int y)
{
    return new (Active::pool.create()) NPCSGMerc_4021(x, y);
}
static Image* images_crystalcage_4022_0_0[1];
static Direction direction_crystalcage_4022_0_0 = {0, 50, 50, 0, 1, images_crystalcage_4022_0_0, 1};
static Animation anim_crystalcage_4022_0 = {&direction_crystalcage_4022_0_0, &direction_crystalcage_4022_0_0, &direction_crystalcage_4022_0_0, &direction_crystalcage_4022_0_0, &direction_crystalcage_4022_0_0, &direction_crystalcage_4022_0_0, &direction_crystalcage_4022_0_0, &direction_crystalcage_4022_0_0, &direction_crystalcage_4022_0_0, &direction_crystalcage_4022_0_0, &direction_crystalcage_4022_0_0, &direction_crystalcage_4022_0_0, &direction_crystalcage_4022_0_0, &direction_crystalcage_4022_0_0, &direction_crystalcage_4022_0_0, &direction_crystalcage_4022_0_0, NULL, &direction_crystalcage_4022_0_0, &direction_crystalcage_4022_0_0, &direction_crystalcage_4022_0_0, &direction_crystalcage_4022_0_0, &direction_crystalcage_4022_0_0, &direction_crystalcage_4022_0_0, &direction_crystalcage_4022_0_0, &direction_crystalcage_4022_0_0, &direction_crystalcage_4022_0_0, &direction_crystalcage_4022_0_0, &direction_crystalcage_4022_0_0, &direction_crystalcage_4022_0_0, &direction_crystalcage_4022_0_0, &direction_crystalcage_4022_0_0, &direction_crystalcage_4022_0_0};
static Image* images_crystalcage_4022_3_0[16];
static Direction direction_crystalcage_4022_3_0 = {0, 100, 100, 0, 1, images_crystalcage_4022_3_0, 16};
static Animation anim_crystalcage_4022_3 = {&direction_crystalcage_4022_3_0, &direction_crystalcage_4022_3_0, &direction_crystalcage_4022_3_0, &direction_crystalcage_4022_3_0, &direction_crystalcage_4022_3_0, &direction_crystalcage_4022_3_0, &direction_crystalcage_4022_3_0, &direction_crystalcage_4022_3_0, &direction_crystalcage_4022_3_0, &direction_crystalcage_4022_3_0, &direction_crystalcage_4022_3_0, &direction_crystalcage_4022_3_0, &direction_crystalcage_4022_3_0, &direction_crystalcage_4022_3_0, &direction_crystalcage_4022_3_0, &direction_crystalcage_4022_3_0, NULL, &direction_crystalcage_4022_3_0, &direction_crystalcage_4022_3_0, &direction_crystalcage_4022_3_0, &direction_crystalcage_4022_3_0, &direction_crystalcage_4022_3_0, &direction_crystalcage_4022_3_0, &direction_crystalcage_4022_3_0, &direction_crystalcage_4022_3_0, &direction_crystalcage_4022_3_0, &direction_crystalcage_4022_3_0, &direction_crystalcage_4022_3_0, &direction_crystalcage_4022_3_0, &direction_crystalcage_4022_3_0, &direction_crystalcage_4022_3_0, &direction_crystalcage_4022_3_0};
static Animation * anim_array_crystalcage_4022[4] = {&anim_crystalcage_4022_0, NULL, NULL, &anim_crystalcage_4022_3};
static Animations anim_crystalcage_4022 = {4, &anim_array_crystalcage_4022[0]};
static bool anim_crystalcage_4022_initialized;
class CrystalCage_4022 : public Active
{
public:
    CrystalCage_4022(int x, int y) : Active(x, y, CrystalCage_4022_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("CrystalCage", 11);
#endif
        this->animations = &anim_crystalcage_4022;
        if (!anim_crystalcage_4022_initialized) {
            anim_crystalcage_4022_initialized = true;
            images_crystalcage_4022_0_0[0] = get_internal_image(11696);
            images_crystalcage_4022_3_0[0] = get_internal_image(15924);
            images_crystalcage_4022_3_0[1] = get_internal_image(15921);
            images_crystalcage_4022_3_0[2] = get_internal_image(15144);
            images_crystalcage_4022_3_0[3] = get_internal_image(14232);
            images_crystalcage_4022_3_0[4] = get_internal_image(14209);
            images_crystalcage_4022_3_0[5] = get_internal_image(13334);
            images_crystalcage_4022_3_0[6] = get_internal_image(13332);
            images_crystalcage_4022_3_0[7] = get_internal_image(11704);
            images_crystalcage_4022_3_0[8] = get_internal_image(11703);
            images_crystalcage_4022_3_0[9] = get_internal_image(11702);
            images_crystalcage_4022_3_0[10] = get_internal_image(11700);
            images_crystalcage_4022_3_0[11] = get_internal_image(11699);
            images_crystalcage_4022_3_0[12] = get_internal_image(11698);
            images_crystalcage_4022_3_0[13] = get_internal_image(11697);
            images_crystalcage_4022_3_0[14] = get_internal_image(13330);
            images_crystalcage_4022_3_0[15] = get_internal_image(11696);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        forced_animation = current_animation = APPEARING;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_crystalcage_4022(int x, int y)
{
    return new (Active::pool.create()) CrystalCage_4022(x, y);
}
static Image* images_parallaxthermalbase_4023_0_0[1];
static Direction direction_parallaxthermalbase_4023_0_0 = {0, 50, 50, 0, 1, images_parallaxthermalbase_4023_0_0, 1};
static Image* images_parallaxthermalbase_4023_0_8[1];
static Direction direction_parallaxthermalbase_4023_0_8 = {8, 50, 50, 0, 1, images_parallaxthermalbase_4023_0_8, 1};
static Animation anim_parallaxthermalbase_4023_0 = {&direction_parallaxthermalbase_4023_0_0, &direction_parallaxthermalbase_4023_0_0, &direction_parallaxthermalbase_4023_0_0, &direction_parallaxthermalbase_4023_0_0, NULL, &direction_parallaxthermalbase_4023_0_8, &direction_parallaxthermalbase_4023_0_8, &direction_parallaxthermalbase_4023_0_8, &direction_parallaxthermalbase_4023_0_8, &direction_parallaxthermalbase_4023_0_8, &direction_parallaxthermalbase_4023_0_8, &direction_parallaxthermalbase_4023_0_8, &direction_parallaxthermalbase_4023_0_8, &direction_parallaxthermalbase_4023_0_8, &direction_parallaxthermalbase_4023_0_8, &direction_parallaxthermalbase_4023_0_8, &direction_parallaxthermalbase_4023_0_8, &direction_parallaxthermalbase_4023_0_8, &direction_parallaxthermalbase_4023_0_8, &direction_parallaxthermalbase_4023_0_8, NULL, &direction_parallaxthermalbase_4023_0_0, &direction_parallaxthermalbase_4023_0_0, &direction_parallaxthermalbase_4023_0_0, &direction_parallaxthermalbase_4023_0_0, &direction_parallaxthermalbase_4023_0_0, &direction_parallaxthermalbase_4023_0_0, &direction_parallaxthermalbase_4023_0_0, &direction_parallaxthermalbase_4023_0_0, &direction_parallaxthermalbase_4023_0_0, &direction_parallaxthermalbase_4023_0_0, &direction_parallaxthermalbase_4023_0_0};
static Animation * anim_array_parallaxthermalbase_4023[1] = {&anim_parallaxthermalbase_4023_0};
static Animations anim_parallaxthermalbase_4023 = {1, &anim_array_parallaxthermalbase_4023[0]};
static bool anim_parallaxthermalbase_4023_initialized;
class ParallaxThermalBase_4023 : public Active
{
public:
    ParallaxThermalBase_4023(int x, int y) : Active(x, y, ParallaxThermalBase_4023_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Parallax_ThermalBase", 20);
#endif
        this->animations = &anim_parallaxthermalbase_4023;
        if (!anim_parallaxthermalbase_4023_initialized) {
            anim_parallaxthermalbase_4023_initialized = true;
            images_parallaxthermalbase_4023_0_0[0] = get_internal_image(1668);
            images_parallaxthermalbase_4023_0_8[0] = get_internal_image(3809);
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
FrameObject * create_parallaxthermalbase_4023(int x, int y)
{
    return new (Active::pool.create()) ParallaxThermalBase_4023(x, y);
}
static Image* images_npcshieldguard_4024_0_0[1];
static Direction direction_npcshieldguard_4024_0_0 = {0, 50, 50, 0, 1, images_npcshieldguard_4024_0_0, 1};
static Image* images_npcshieldguard_4024_0_1[1];
static Direction direction_npcshieldguard_4024_0_1 = {1, 50, 50, 0, 1, images_npcshieldguard_4024_0_1, 1};
static Image* images_npcshieldguard_4024_0_15[1];
static Direction direction_npcshieldguard_4024_0_15 = {15, 50, 50, 0, 1, images_npcshieldguard_4024_0_15, 1};
static Image* images_npcshieldguard_4024_0_16[1];
static Direction direction_npcshieldguard_4024_0_16 = {16, 50, 50, 0, 1, images_npcshieldguard_4024_0_16, 1};
static Image* images_npcshieldguard_4024_0_31[1];
static Direction direction_npcshieldguard_4024_0_31 = {31, 50, 50, 0, 1, images_npcshieldguard_4024_0_31, 1};
static Animation anim_npcshieldguard_4024_0 = {&direction_npcshieldguard_4024_0_0, &direction_npcshieldguard_4024_0_1, &direction_npcshieldguard_4024_0_1, &direction_npcshieldguard_4024_0_1, &direction_npcshieldguard_4024_0_1, &direction_npcshieldguard_4024_0_1, &direction_npcshieldguard_4024_0_1, &direction_npcshieldguard_4024_0_1, NULL, &direction_npcshieldguard_4024_0_15, &direction_npcshieldguard_4024_0_15, &direction_npcshieldguard_4024_0_15, &direction_npcshieldguard_4024_0_15, &direction_npcshieldguard_4024_0_15, &direction_npcshieldguard_4024_0_15, &direction_npcshieldguard_4024_0_15, &direction_npcshieldguard_4024_0_16, &direction_npcshieldguard_4024_0_16, &direction_npcshieldguard_4024_0_16, &direction_npcshieldguard_4024_0_16, &direction_npcshieldguard_4024_0_16, &direction_npcshieldguard_4024_0_16, &direction_npcshieldguard_4024_0_16, &direction_npcshieldguard_4024_0_16, &direction_npcshieldguard_4024_0_31, &direction_npcshieldguard_4024_0_31, &direction_npcshieldguard_4024_0_31, &direction_npcshieldguard_4024_0_31, &direction_npcshieldguard_4024_0_31, &direction_npcshieldguard_4024_0_31, &direction_npcshieldguard_4024_0_31, &direction_npcshieldguard_4024_0_31};
static Animation * anim_array_npcshieldguard_4024[1] = {&anim_npcshieldguard_4024_0};
static Animations anim_npcshieldguard_4024 = {1, &anim_array_npcshieldguard_4024[0]};
static bool anim_npcshieldguard_4024_initialized;
class NPCShieldGuard_4024 : public Active
{
public:
    NPCShieldGuard_4024(int x, int y) : Active(x, y, NPCShieldGuard_4024_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_ShieldGuard", 15);
#endif
        set_visible(false);
        this->animations = &anim_npcshieldguard_4024;
        if (!anim_npcshieldguard_4024_initialized) {
            anim_npcshieldguard_4024_initialized = true;
            images_npcshieldguard_4024_0_0[0] = get_internal_image(2363);
            images_npcshieldguard_4024_0_1[0] = get_internal_image(16168);
            images_npcshieldguard_4024_0_15[0] = get_internal_image(6417);
            images_npcshieldguard_4024_0_16[0] = get_internal_image(11801);
            images_npcshieldguard_4024_0_31[0] = get_internal_image(7157);
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
FrameObject * create_npcshieldguard_4024(int x, int y)
{
    return new (Active::pool.create()) NPCShieldGuard_4024(x, y);
}
class LevelParallaxPiece6_4025 : public SystemBox
{
public:
    LevelParallaxPiece6_4025(int x, int y) : SystemBox(x, y, LevelParallaxPiece6_4025_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 6", 22);
#endif
        flags |= BACKGROUND;
        width = 400;
        height = 240;
        type = PATTERN_IMAGE;
        image = get_internal_image(4844);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece6_4025(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece6_4025(x, y);
}
class Sunset_4026 : public SystemBox
{
public:
    Sunset_4026(int x, int y) : SystemBox(x, y, Sunset_4026_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Sunset", 6);
#endif
        flags |= BACKGROUND;
        width = 564;
        height = 240;
        type = PATTERN_IMAGE;
        image = get_internal_image(12392);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_sunset_4026(int x, int y)
{
    return new (SystemBox::pool.create()) Sunset_4026(x, y);
}
class DaytimeSky_4027 : public SystemBox
{
public:
    DaytimeSky_4027(int x, int y) : SystemBox(x, y, DaytimeSky_4027_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("DaytimeSky", 10);
#endif
        flags |= BACKGROUND;
        width = 564;
        height = 240;
        type = PATTERN_IMAGE;
        image = get_internal_image(8073);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_daytimesky_4027(int x, int y)
{
    return new (SystemBox::pool.create()) DaytimeSky_4027(x, y);
}
class QuickBackdrop_4028 : public QuickBackdrop
{
public:
    QuickBackdrop_4028(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop", 14);
#endif
        flags |= BACKGROUND;
        width = 640;
        height = 200;
        image = get_internal_image(8073);
        outline = 0;
    }
};
FrameObject * create_quickbackdrop_4028(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop_4028(x, y);
}
class Backdrop37_4029 : public Backdrop
{
public:
    Backdrop37_4029(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 37", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13287);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop37_4029(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop37_4029(x, y);
}
class Backdrop41_4030 : public Backdrop
{
public:
    Backdrop41_4030(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 41", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4797);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop41_4030(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop41_4030(x, y);
}
class BackBuilding3_4031 : public Backdrop
{
public:
    BackBuilding3_4031(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BackBuilding3", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(601);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backbuilding3_4031(int x, int y)
{
    return new (Backdrop::pool.create()) BackBuilding3_4031(x, y);
}
class BackBuilding2_4032 : public Backdrop
{
public:
    BackBuilding2_4032(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BackBuilding2", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13286);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backbuilding2_4032(int x, int y)
{
    return new (Backdrop::pool.create()) BackBuilding2_4032(x, y);
}
class BackBuilding1_4033 : public Backdrop
{
public:
    BackBuilding1_4033(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BackBuilding1", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13285);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backbuilding1_4033(int x, int y)
{
    return new (Backdrop::pool.create()) BackBuilding1_4033(x, y);
}
class LevelParallaxPiece9_4034 : public SystemBox
{
public:
    LevelParallaxPiece9_4034(int x, int y) : SystemBox(x, y, LevelParallaxPiece9_4034_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 9", 22);
#endif
        flags |= BACKGROUND;
        width = 384;
        height = 240;
        type = PATTERN_IMAGE;
        image = get_internal_image(686);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece9_4034(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece9_4034(x, y);
}
class Backdrop_4035 : public Backdrop
{
public:
    Backdrop_4035(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9114);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop_4035(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop_4035(x, y);
}
class LevelParallaxPiece5_4036 : public SystemBox
{
public:
    LevelParallaxPiece5_4036(int x, int y) : SystemBox(x, y, LevelParallaxPiece5_4036_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 5", 22);
#endif
        flags |= BACKGROUND;
        width = 480;
        height = 96;
        type = PATTERN_IMAGE;
        image = get_internal_image(9115);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece5_4036(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece5_4036(x, y);
}
class Backdrop40_4037 : public Backdrop
{
public:
    Backdrop40_4037(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 40", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4529);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop40_4037(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop40_4037(x, y);
}
class Backdrop39_4038 : public Backdrop
{
public:
    Backdrop39_4038(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 39", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9375);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop39_4038(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop39_4038(x, y);
}
class Backdrop38_4039 : public Backdrop
{
public:
    Backdrop38_4039(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 38", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15953);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop38_4039(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop38_4039(x, y);
}
class LevelParallaxPiece7_4040 : public SystemBox
{
public:
    LevelParallaxPiece7_4040(int x, int y) : SystemBox(x, y, LevelParallaxPiece7_4040_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 7", 22);
#endif
        flags |= BACKGROUND;
        width = 391;
        height = 260;
        type = PATTERN_IMAGE;
        image = get_internal_image(7287);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece7_4040(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece7_4040(x, y);
}
class LevelParallaxPiece1_4041 : public SystemBox
{
public:
    LevelParallaxPiece1_4041(int x, int y) : SystemBox(x, y, LevelParallaxPiece1_4041_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece1", 21);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 128;
        type = PATTERN_IMAGE;
        image = get_internal_image(8150);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece1_4041(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece1_4041(x, y);
}
static Image* images_buildingwindow_4042_0_0[2];
static Direction direction_buildingwindow_4042_0_0 = {0, 0, 0, 0, 1, images_buildingwindow_4042_0_0, 2};
static Animation anim_buildingwindow_4042_0 = {&direction_buildingwindow_4042_0_0, &direction_buildingwindow_4042_0_0, &direction_buildingwindow_4042_0_0, &direction_buildingwindow_4042_0_0, &direction_buildingwindow_4042_0_0, &direction_buildingwindow_4042_0_0, &direction_buildingwindow_4042_0_0, &direction_buildingwindow_4042_0_0, &direction_buildingwindow_4042_0_0, &direction_buildingwindow_4042_0_0, &direction_buildingwindow_4042_0_0, &direction_buildingwindow_4042_0_0, &direction_buildingwindow_4042_0_0, &direction_buildingwindow_4042_0_0, &direction_buildingwindow_4042_0_0, &direction_buildingwindow_4042_0_0, NULL, &direction_buildingwindow_4042_0_0, &direction_buildingwindow_4042_0_0, &direction_buildingwindow_4042_0_0, &direction_buildingwindow_4042_0_0, &direction_buildingwindow_4042_0_0, &direction_buildingwindow_4042_0_0, &direction_buildingwindow_4042_0_0, &direction_buildingwindow_4042_0_0, &direction_buildingwindow_4042_0_0, &direction_buildingwindow_4042_0_0, &direction_buildingwindow_4042_0_0, &direction_buildingwindow_4042_0_0, &direction_buildingwindow_4042_0_0, &direction_buildingwindow_4042_0_0, &direction_buildingwindow_4042_0_0};
static Animation * anim_array_buildingwindow_4042[1] = {&anim_buildingwindow_4042_0};
static Animations anim_buildingwindow_4042 = {1, &anim_array_buildingwindow_4042[0]};
static bool anim_buildingwindow_4042_initialized;
class BuildingWindow_4042 : public Active
{
public:
    BuildingWindow_4042(int x, int y) : Active(x, y, BuildingWindow_4042_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BuildingWindow", 14);
#endif
        this->animations = &anim_buildingwindow_4042;
        if (!anim_buildingwindow_4042_initialized) {
            anim_buildingwindow_4042_initialized = true;
            images_buildingwindow_4042_0_0[0] = get_internal_image(13649);
            images_buildingwindow_4042_0_0[1] = get_internal_image(13387);
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
FrameObject * create_buildingwindow_4042(int x, int y)
{
    return new (Active::pool.create()) BuildingWindow_4042(x, y);
}
static Image* images_buildingwindow2_4043_0_0[2];
static Direction direction_buildingwindow2_4043_0_0 = {0, 0, 0, 0, 1, images_buildingwindow2_4043_0_0, 2};
static Animation anim_buildingwindow2_4043_0 = {&direction_buildingwindow2_4043_0_0, &direction_buildingwindow2_4043_0_0, &direction_buildingwindow2_4043_0_0, &direction_buildingwindow2_4043_0_0, &direction_buildingwindow2_4043_0_0, &direction_buildingwindow2_4043_0_0, &direction_buildingwindow2_4043_0_0, &direction_buildingwindow2_4043_0_0, &direction_buildingwindow2_4043_0_0, &direction_buildingwindow2_4043_0_0, &direction_buildingwindow2_4043_0_0, &direction_buildingwindow2_4043_0_0, &direction_buildingwindow2_4043_0_0, &direction_buildingwindow2_4043_0_0, &direction_buildingwindow2_4043_0_0, &direction_buildingwindow2_4043_0_0, NULL, &direction_buildingwindow2_4043_0_0, &direction_buildingwindow2_4043_0_0, &direction_buildingwindow2_4043_0_0, &direction_buildingwindow2_4043_0_0, &direction_buildingwindow2_4043_0_0, &direction_buildingwindow2_4043_0_0, &direction_buildingwindow2_4043_0_0, &direction_buildingwindow2_4043_0_0, &direction_buildingwindow2_4043_0_0, &direction_buildingwindow2_4043_0_0, &direction_buildingwindow2_4043_0_0, &direction_buildingwindow2_4043_0_0, &direction_buildingwindow2_4043_0_0, &direction_buildingwindow2_4043_0_0, &direction_buildingwindow2_4043_0_0};
static Animation * anim_array_buildingwindow2_4043[1] = {&anim_buildingwindow2_4043_0};
static Animations anim_buildingwindow2_4043 = {1, &anim_array_buildingwindow2_4043[0]};
static bool anim_buildingwindow2_4043_initialized;
class BuildingWindow2_4043 : public Active
{
public:
    BuildingWindow2_4043(int x, int y) : Active(x, y, BuildingWindow2_4043_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BuildingWindow 2", 16);
#endif
        this->animations = &anim_buildingwindow2_4043;
        if (!anim_buildingwindow2_4043_initialized) {
            anim_buildingwindow2_4043_initialized = true;
            images_buildingwindow2_4043_0_0[0] = get_internal_image(13650);
            images_buildingwindow2_4043_0_0[1] = get_internal_image(13597);
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
FrameObject * create_buildingwindow2_4043(int x, int y)
{
    return new (Active::pool.create()) BuildingWindow2_4043(x, y);
}
class ShuigangBackPillar_4044 : public Backdrop
{
public:
    ShuigangBackPillar_4044(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ShuigangBackPillar", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9060);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_shuigangbackpillar_4044(int x, int y)
{
    return new (Backdrop::pool.create()) ShuigangBackPillar_4044(x, y);
}
class ShuigangBack1_4045 : public Backdrop
{
public:
    ShuigangBack1_4045(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ShuigangBack 1", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9034);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_shuigangback1_4045(int x, int y)
{
    return new (Backdrop::pool.create()) ShuigangBack1_4045(x, y);
}
class ShuigangBack2_4046 : public Backdrop
{
public:
    ShuigangBack2_4046(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ShuigangBack 2", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6138);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_shuigangback2_4046(int x, int y)
{
    return new (Backdrop::pool.create()) ShuigangBack2_4046(x, y);
}
class Backdrop44_4047 : public Backdrop
{
public:
    Backdrop44_4047(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 44", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6234);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop44_4047(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop44_4047(x, y);
}
class ShuigangCurtain1_4048 : public Backdrop
{
public:
    ShuigangCurtain1_4048(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ShuigangCurtain 1", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2517);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_shuigangcurtain1_4048(int x, int y)
{
    return new (Backdrop::pool.create()) ShuigangCurtain1_4048(x, y);
}
class Backdrop18_4049 : public Backdrop
{
public:
    Backdrop18_4049(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 18", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3403);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop18_4049(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop18_4049(x, y);
}
class Backdrop19_4050 : public Backdrop
{
public:
    Backdrop19_4050(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 19", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3409);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop19_4050(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop19_4050(x, y);
}
class Backdrop20_4051 : public Backdrop
{
public:
    Backdrop20_4051(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 20", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7859);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop20_4051(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop20_4051(x, y);
}
class Backdrop21_4052 : public Backdrop
{
public:
    Backdrop21_4052(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 21", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15146);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop21_4052(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop21_4052(x, y);
}
class ZaoShipWall_4053 : public QuickBackdrop
{
public:
    ZaoShipWall_4053(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ZaoShipWall", 11);
#endif
        flags |= BACKGROUND;
        width = 640;
        height = 184;
        image = get_internal_image(3147);
        outline = 0;
    }
};
FrameObject * create_zaoshipwall_4053(int x, int y)
{
    return new (QuickBackdrop::pool.create()) ZaoShipWall_4053(x, y);
}
class ZaoShipIndoor1_4054 : public Backdrop
{
public:
    ZaoShipIndoor1_4054(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ZaoShipIndoor 1", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3359);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_zaoshipindoor1_4054(int x, int y)
{
    return new (Backdrop::pool.create()) ZaoShipIndoor1_4054(x, y);
}
class ZaoShipIndoor4_4055 : public Backdrop
{
public:
    ZaoShipIndoor4_4055(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ZaoShipIndoor 4", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15923);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_zaoshipindoor4_4055(int x, int y)
{
    return new (Backdrop::pool.create()) ZaoShipIndoor4_4055(x, y);
}
class ZaoShipIndoor5_4056 : public Backdrop
{
public:
    ZaoShipIndoor5_4056(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ZaoShipIndoor 5", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15925);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_zaoshipindoor5_4056(int x, int y)
{
    return new (Backdrop::pool.create()) ZaoShipIndoor5_4056(x, y);
}
class ZaoShipIndoor6_4057 : public Backdrop
{
public:
    ZaoShipIndoor6_4057(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ZaoShipIndoor 6", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3337);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_zaoshipindoor6_4057(int x, int y)
{
    return new (Backdrop::pool.create()) ZaoShipIndoor6_4057(x, y);
}
class Outfitter_4058 : public Backdrop
{
public:
    Outfitter_4058(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Outfitter", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13648);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_outfitter_4058(int x, int y)
{
    return new (Backdrop::pool.create()) Outfitter_4058(x, y);
}
class ShangTuBathBack_4059 : public Backdrop
{
public:
    ShangTuBathBack_4059(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ShangTuBathBack", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11469);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_shangtubathback_4059(int x, int y)
{
    return new (Backdrop::pool.create()) ShangTuBathBack_4059(x, y);
}
class ShangTuBackWall2_4060 : public Backdrop
{
public:
    ShangTuBackWall2_4060(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ShangTuBackWall 2", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13304);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_shangtubackwall2_4060(int x, int y)
{
    return new (Backdrop::pool.create()) ShangTuBackWall2_4060(x, y);
}
class ShangTuBackWall3_4061 : public Backdrop
{
public:
    ShangTuBackWall3_4061(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ShangTuBackWall 3", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11477);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_shangtubackwall3_4061(int x, int y)
{
    return new (Backdrop::pool.create()) ShangTuBackWall3_4061(x, y);
}
class ShangTuBackWall_4062 : public Backdrop
{
public:
    ShangTuBackWall_4062(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ShangTuBackWall", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(64);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_shangtubackwall_4062(int x, int y)
{
    return new (Backdrop::pool.create()) ShangTuBackWall_4062(x, y);
}
class StuckArrow_4063 : public Backdrop
{
public:
    StuckArrow_4063(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("StuckArrow", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13305);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_stuckarrow_4063(int x, int y)
{
    return new (Backdrop::pool.create()) StuckArrow_4063(x, y);
}
class ShangTuWindow_4064 : public Backdrop
{
public:
    ShangTuWindow_4064(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ShangTuWindow", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13295);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_shangtuwindow_4064(int x, int y)
{
    return new (Backdrop::pool.create()) ShangTuWindow_4064(x, y);
}
class Backdrop9_4065 : public Backdrop
{
public:
    Backdrop9_4065(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 9", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6104);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop9_4065(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop9_4065(x, y);
}
class Backdrop8_4066 : public Backdrop
{
public:
    Backdrop8_4066(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 8", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(110);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop8_4066(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop8_4066(x, y);
}
class Backdrop7_4067 : public Backdrop
{
public:
    Backdrop7_4067(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 7", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6058);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop7_4067(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop7_4067(x, y);
}
class ShangTuArch3_4068 : public Backdrop
{
public:
    ShangTuArch3_4068(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ShangTuArch 3", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(605);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_shangtuarch3_4068(int x, int y)
{
    return new (Backdrop::pool.create()) ShangTuArch3_4068(x, y);
}
class ShangTuArch4_4069 : public Backdrop
{
public:
    ShangTuArch4_4069(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ShangTuArch 4", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6102);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_shangtuarch4_4069(int x, int y)
{
    return new (Backdrop::pool.create()) ShangTuArch4_4069(x, y);
}
class ShangTuFloor1_4070 : public Backdrop
{
public:
    ShangTuFloor1_4070(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ShangTuFloor 1", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13292);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_shangtufloor1_4070(int x, int y)
{
    return new (Backdrop::pool.create()) ShangTuFloor1_4070(x, y);
}
class ShangTuFloor2_4071 : public Backdrop
{
public:
    ShangTuFloor2_4071(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ShangTuFloor 2", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(251);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_shangtufloor2_4071(int x, int y)
{
    return new (Backdrop::pool.create()) ShangTuFloor2_4071(x, y);
}
class ShangTuFlag1_4072 : public Backdrop
{
public:
    ShangTuFlag1_4072(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ShangTuFlag 1", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6692);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_shangtuflag1_4072(int x, int y)
{
    return new (Backdrop::pool.create()) ShangTuFlag1_4072(x, y);
}
class ShangTuFlag2_4073 : public Backdrop
{
public:
    ShangTuFlag2_4073(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ShangTuFlag 2", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6756);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_shangtuflag2_4073(int x, int y)
{
    return new (Backdrop::pool.create()) ShangTuFlag2_4073(x, y);
}
class ShangTuFlag3_4074 : public Backdrop
{
public:
    ShangTuFlag3_4074(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ShangTuFlag 3", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6757);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_shangtuflag3_4074(int x, int y)
{
    return new (Backdrop::pool.create()) ShangTuFlag3_4074(x, y);
}
class ShangTuArch2_4075 : public Backdrop
{
public:
    ShangTuArch2_4075(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ShangTuArch 2", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6136);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_shangtuarch2_4075(int x, int y)
{
    return new (Backdrop::pool.create()) ShangTuArch2_4075(x, y);
}
class ShangTuArch1_4076 : public Backdrop
{
public:
    ShangTuArch1_4076(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ShangTuArch 1", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2166);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_shangtuarch1_4076(int x, int y)
{
    return new (Backdrop::pool.create()) ShangTuArch1_4076(x, y);
}
class ShangTuColumn1_4077 : public Backdrop
{
public:
    ShangTuColumn1_4077(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ShangTuColumn 1", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13293);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_shangtucolumn1_4077(int x, int y)
{
    return new (Backdrop::pool.create()) ShangTuColumn1_4077(x, y);
}
class ShangTuColumn2_4078 : public Backdrop
{
public:
    ShangTuColumn2_4078(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ShangTuColumn 2", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(60);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_shangtucolumn2_4078(int x, int y)
{
    return new (Backdrop::pool.create()) ShangTuColumn2_4078(x, y);
}
class ShuigangTapestry_4079 : public Backdrop
{
public:
    ShuigangTapestry_4079(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ShuigangTapestry", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3769);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_shuigangtapestry_4079(int x, int y)
{
    return new (Backdrop::pool.create()) ShuigangTapestry_4079(x, y);
}
class ShuigangStars_4080 : public Backdrop
{
public:
    ShuigangStars_4080(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ShuigangStars", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3755);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_shuigangstars_4080(int x, int y)
{
    return new (Backdrop::pool.create()) ShuigangStars_4080(x, y);
}
class ShuigangThrone_4081 : public Backdrop
{
public:
    ShuigangThrone_4081(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ShuigangThrone", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14410);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_shuigangthrone_4081(int x, int y)
{
    return new (Backdrop::pool.create()) ShuigangThrone_4081(x, y);
}
class ShuigangPillar1_4082 : public Backdrop
{
public:
    ShuigangPillar1_4082(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ShuigangPillar 1", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6897);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_shuigangpillar1_4082(int x, int y)
{
    return new (Backdrop::pool.create()) ShuigangPillar1_4082(x, y);
}
class ShuigangPillar2_4083 : public Backdrop
{
public:
    ShuigangPillar2_4083(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ShuigangPillar 2", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12802);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_shuigangpillar2_4083(int x, int y)
{
    return new (Backdrop::pool.create()) ShuigangPillar2_4083(x, y);
}
class ShuigangPillar3_4084 : public Backdrop
{
public:
    ShuigangPillar3_4084(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ShuigangPillar 3", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7401);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_shuigangpillar3_4084(int x, int y)
{
    return new (Backdrop::pool.create()) ShuigangPillar3_4084(x, y);
}
class ShuigangCurtain2_4085 : public Backdrop
{
public:
    ShuigangCurtain2_4085(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ShuigangCurtain 2", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4389);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_shuigangcurtain2_4085(int x, int y)
{
    return new (Backdrop::pool.create()) ShuigangCurtain2_4085(x, y);
}
class Backdrop24_4086 : public Backdrop
{
public:
    Backdrop24_4086(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 24", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6914);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop24_4086(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop24_4086(x, y);
}
class Backdrop25_4087 : public Backdrop
{
public:
    Backdrop25_4087(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 25", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15153);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop25_4087(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop25_4087(x, y);
}
class ZaoShipIndoor2_4088 : public Backdrop
{
public:
    ZaoShipIndoor2_4088(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ZaoShipIndoor 2", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12596);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_zaoshipindoor2_4088(int x, int y)
{
    return new (Backdrop::pool.create()) ZaoShipIndoor2_4088(x, y);
}
class ZaoShipIndoor3_4089 : public Backdrop
{
public:
    ZaoShipIndoor3_4089(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ZaoShipIndoor 3", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6865);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_zaoshipindoor3_4089(int x, int y)
{
    return new (Backdrop::pool.create()) ZaoShipIndoor3_4089(x, y);
}
class TentFloorFadeRight3_4090 : public Backdrop
{
public:
    TentFloorFadeRight3_4090(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Tent_FloorFadeRight 3", 21);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15960);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tentfloorfaderight3_4090(int x, int y)
{
    return new (Backdrop::pool.create()) TentFloorFadeRight3_4090(x, y);
}
class TentFloorFadeRight2_4091 : public Backdrop
{
public:
    TentFloorFadeRight2_4091(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Tent_FloorFadeRight 2", 21);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15959);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tentfloorfaderight2_4091(int x, int y)
{
    return new (Backdrop::pool.create()) TentFloorFadeRight2_4091(x, y);
}
class BackOfficer_4092 : public Backdrop
{
public:
    BackOfficer_4092(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BackOfficer", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8828);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backofficer_4092(int x, int y)
{
    return new (Backdrop::pool.create()) BackOfficer_4092(x, y);
}
class BathFillerBack_4093 : public Backdrop
{
public:
    BathFillerBack_4093(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BathFillerBack", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11470);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bathfillerback_4093(int x, int y)
{
    return new (Backdrop::pool.create()) BathFillerBack_4093(x, y);
}
static Image* images_fragment_4094_0_0[1];
static Direction direction_fragment_4094_0_0 = {0, 50, 50, 0, 1, images_fragment_4094_0_0, 1};
static Animation anim_fragment_4094_0 = {&direction_fragment_4094_0_0, &direction_fragment_4094_0_0, &direction_fragment_4094_0_0, &direction_fragment_4094_0_0, &direction_fragment_4094_0_0, &direction_fragment_4094_0_0, &direction_fragment_4094_0_0, &direction_fragment_4094_0_0, &direction_fragment_4094_0_0, &direction_fragment_4094_0_0, &direction_fragment_4094_0_0, &direction_fragment_4094_0_0, &direction_fragment_4094_0_0, &direction_fragment_4094_0_0, &direction_fragment_4094_0_0, &direction_fragment_4094_0_0, NULL, &direction_fragment_4094_0_0, &direction_fragment_4094_0_0, &direction_fragment_4094_0_0, &direction_fragment_4094_0_0, &direction_fragment_4094_0_0, &direction_fragment_4094_0_0, &direction_fragment_4094_0_0, &direction_fragment_4094_0_0, &direction_fragment_4094_0_0, &direction_fragment_4094_0_0, &direction_fragment_4094_0_0, &direction_fragment_4094_0_0, &direction_fragment_4094_0_0, &direction_fragment_4094_0_0, &direction_fragment_4094_0_0};
static Animation * anim_array_fragment_4094[1] = {&anim_fragment_4094_0};
static Animations anim_fragment_4094 = {1, &anim_array_fragment_4094[0]};
static bool anim_fragment_4094_initialized;
class Fragment_4094 : public Active
{
public:
    Fragment_4094(int x, int y) : Active(x, y, Fragment_4094_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Fragment", 8);
#endif
        set_visible(false);
        this->animations = &anim_fragment_4094;
        if (!anim_fragment_4094_initialized) {
            anim_fragment_4094_initialized = true;
            images_fragment_4094_0_0[0] = get_internal_image(9111);
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
FrameObject * create_fragment_4094(int x, int y)
{
    return new (Active::pool.create()) Fragment_4094(x, y);
}
static Image* images_npcfallenherohelmet_4095_0_0[1];
static Direction direction_npcfallenherohelmet_4095_0_0 = {0, 0, 0, 0, 1, images_npcfallenherohelmet_4095_0_0, 1};
static Animation anim_npcfallenherohelmet_4095_0 = {&direction_npcfallenherohelmet_4095_0_0, &direction_npcfallenherohelmet_4095_0_0, &direction_npcfallenherohelmet_4095_0_0, &direction_npcfallenherohelmet_4095_0_0, &direction_npcfallenherohelmet_4095_0_0, &direction_npcfallenherohelmet_4095_0_0, &direction_npcfallenherohelmet_4095_0_0, &direction_npcfallenherohelmet_4095_0_0, &direction_npcfallenherohelmet_4095_0_0, &direction_npcfallenherohelmet_4095_0_0, &direction_npcfallenherohelmet_4095_0_0, &direction_npcfallenherohelmet_4095_0_0, &direction_npcfallenherohelmet_4095_0_0, &direction_npcfallenherohelmet_4095_0_0, &direction_npcfallenherohelmet_4095_0_0, &direction_npcfallenherohelmet_4095_0_0, NULL, &direction_npcfallenherohelmet_4095_0_0, &direction_npcfallenherohelmet_4095_0_0, &direction_npcfallenherohelmet_4095_0_0, &direction_npcfallenherohelmet_4095_0_0, &direction_npcfallenherohelmet_4095_0_0, &direction_npcfallenherohelmet_4095_0_0, &direction_npcfallenherohelmet_4095_0_0, &direction_npcfallenherohelmet_4095_0_0, &direction_npcfallenherohelmet_4095_0_0, &direction_npcfallenherohelmet_4095_0_0, &direction_npcfallenherohelmet_4095_0_0, &direction_npcfallenherohelmet_4095_0_0, &direction_npcfallenherohelmet_4095_0_0, &direction_npcfallenherohelmet_4095_0_0, &direction_npcfallenherohelmet_4095_0_0};
static Animation * anim_array_npcfallenherohelmet_4095[1] = {&anim_npcfallenherohelmet_4095_0};
static Animations anim_npcfallenherohelmet_4095 = {1, &anim_array_npcfallenherohelmet_4095[0]};
static bool anim_npcfallenherohelmet_4095_initialized;
class NPCFallenHeroHelmet_4095 : public Active
{
public:
    NPCFallenHeroHelmet_4095(int x, int y) : Active(x, y, NPCFallenHeroHelmet_4095_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_FallenHeroHelmet", 20);
#endif
        this->animations = &anim_npcfallenherohelmet_4095;
        if (!anim_npcfallenherohelmet_4095_initialized) {
            anim_npcfallenherohelmet_4095_initialized = true;
            images_npcfallenherohelmet_4095_0_0[0] = get_internal_image(15867);
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
FrameObject * create_npcfallenherohelmet_4095(int x, int y)
{
    return new (Active::pool.create()) NPCFallenHeroHelmet_4095(x, y);
}
static Image* images_npcsgmerc2_4096_0_0[1];
static Direction direction_npcsgmerc2_4096_0_0 = {0, 10, 10, 0, -1, images_npcsgmerc2_4096_0_0, 1};
static Image* images_npcsgmerc2_4096_0_16[1];
static Direction direction_npcsgmerc2_4096_0_16 = {16, 10, 10, 0, -1, images_npcsgmerc2_4096_0_16, 1};
static Animation anim_npcsgmerc2_4096_0 = {&direction_npcsgmerc2_4096_0_0, &direction_npcsgmerc2_4096_0_0, &direction_npcsgmerc2_4096_0_0, &direction_npcsgmerc2_4096_0_0, &direction_npcsgmerc2_4096_0_0, &direction_npcsgmerc2_4096_0_0, &direction_npcsgmerc2_4096_0_0, &direction_npcsgmerc2_4096_0_0, NULL, &direction_npcsgmerc2_4096_0_16, &direction_npcsgmerc2_4096_0_16, &direction_npcsgmerc2_4096_0_16, &direction_npcsgmerc2_4096_0_16, &direction_npcsgmerc2_4096_0_16, &direction_npcsgmerc2_4096_0_16, &direction_npcsgmerc2_4096_0_16, &direction_npcsgmerc2_4096_0_16, &direction_npcsgmerc2_4096_0_16, &direction_npcsgmerc2_4096_0_16, &direction_npcsgmerc2_4096_0_16, &direction_npcsgmerc2_4096_0_16, &direction_npcsgmerc2_4096_0_16, &direction_npcsgmerc2_4096_0_16, &direction_npcsgmerc2_4096_0_16, NULL, &direction_npcsgmerc2_4096_0_0, &direction_npcsgmerc2_4096_0_0, &direction_npcsgmerc2_4096_0_0, &direction_npcsgmerc2_4096_0_0, &direction_npcsgmerc2_4096_0_0, &direction_npcsgmerc2_4096_0_0, &direction_npcsgmerc2_4096_0_0};
static Image* images_npcsgmerc2_4096_2_0[8];
static Direction direction_npcsgmerc2_4096_2_0 = {0, 35, 35, 0, -1, images_npcsgmerc2_4096_2_0, 8};
static Image* images_npcsgmerc2_4096_2_1[8];
static Direction direction_npcsgmerc2_4096_2_1 = {1, 35, 35, 0, -1, images_npcsgmerc2_4096_2_1, 8};
static Image* images_npcsgmerc2_4096_2_16[8];
static Direction direction_npcsgmerc2_4096_2_16 = {16, 35, 35, 0, -1, images_npcsgmerc2_4096_2_16, 8};
static Image* images_npcsgmerc2_4096_2_17[8];
static Direction direction_npcsgmerc2_4096_2_17 = {17, 35, 35, 0, -1, images_npcsgmerc2_4096_2_17, 8};
static Animation anim_npcsgmerc2_4096_2 = {&direction_npcsgmerc2_4096_2_0, &direction_npcsgmerc2_4096_2_1, &direction_npcsgmerc2_4096_2_1, &direction_npcsgmerc2_4096_2_1, &direction_npcsgmerc2_4096_2_1, &direction_npcsgmerc2_4096_2_1, &direction_npcsgmerc2_4096_2_1, &direction_npcsgmerc2_4096_2_1, &direction_npcsgmerc2_4096_2_1, &direction_npcsgmerc2_4096_2_16, &direction_npcsgmerc2_4096_2_16, &direction_npcsgmerc2_4096_2_16, &direction_npcsgmerc2_4096_2_16, &direction_npcsgmerc2_4096_2_16, &direction_npcsgmerc2_4096_2_16, &direction_npcsgmerc2_4096_2_16, &direction_npcsgmerc2_4096_2_16, &direction_npcsgmerc2_4096_2_17, &direction_npcsgmerc2_4096_2_17, &direction_npcsgmerc2_4096_2_17, &direction_npcsgmerc2_4096_2_17, &direction_npcsgmerc2_4096_2_17, &direction_npcsgmerc2_4096_2_17, &direction_npcsgmerc2_4096_2_17, &direction_npcsgmerc2_4096_2_17, &direction_npcsgmerc2_4096_2_0, &direction_npcsgmerc2_4096_2_0, &direction_npcsgmerc2_4096_2_0, &direction_npcsgmerc2_4096_2_0, &direction_npcsgmerc2_4096_2_0, &direction_npcsgmerc2_4096_2_0, &direction_npcsgmerc2_4096_2_0};
static Image* images_npcsgmerc2_4096_5_0[1];
static Direction direction_npcsgmerc2_4096_5_0 = {0, 50, 50, 0, -1, images_npcsgmerc2_4096_5_0, 1};
static Image* images_npcsgmerc2_4096_5_16[1];
static Direction direction_npcsgmerc2_4096_5_16 = {16, 50, 50, 0, -1, images_npcsgmerc2_4096_5_16, 1};
static Animation anim_npcsgmerc2_4096_5 = {&direction_npcsgmerc2_4096_5_0, &direction_npcsgmerc2_4096_5_0, &direction_npcsgmerc2_4096_5_0, &direction_npcsgmerc2_4096_5_0, &direction_npcsgmerc2_4096_5_0, &direction_npcsgmerc2_4096_5_0, &direction_npcsgmerc2_4096_5_0, &direction_npcsgmerc2_4096_5_0, NULL, &direction_npcsgmerc2_4096_5_16, &direction_npcsgmerc2_4096_5_16, &direction_npcsgmerc2_4096_5_16, &direction_npcsgmerc2_4096_5_16, &direction_npcsgmerc2_4096_5_16, &direction_npcsgmerc2_4096_5_16, &direction_npcsgmerc2_4096_5_16, &direction_npcsgmerc2_4096_5_16, &direction_npcsgmerc2_4096_5_16, &direction_npcsgmerc2_4096_5_16, &direction_npcsgmerc2_4096_5_16, &direction_npcsgmerc2_4096_5_16, &direction_npcsgmerc2_4096_5_16, &direction_npcsgmerc2_4096_5_16, &direction_npcsgmerc2_4096_5_16, NULL, &direction_npcsgmerc2_4096_5_0, &direction_npcsgmerc2_4096_5_0, &direction_npcsgmerc2_4096_5_0, &direction_npcsgmerc2_4096_5_0, &direction_npcsgmerc2_4096_5_0, &direction_npcsgmerc2_4096_5_0, &direction_npcsgmerc2_4096_5_0};
static Image* images_npcsgmerc2_4096_7_0[1];
static Direction direction_npcsgmerc2_4096_7_0 = {0, 10, 10, 0, -1, images_npcsgmerc2_4096_7_0, 1};
static Image* images_npcsgmerc2_4096_7_8[1];
static Direction direction_npcsgmerc2_4096_7_8 = {8, 50, 50, 0, 1, images_npcsgmerc2_4096_7_8, 1};
static Image* images_npcsgmerc2_4096_7_16[1];
static Direction direction_npcsgmerc2_4096_7_16 = {16, 10, 10, 0, -1, images_npcsgmerc2_4096_7_16, 1};
static Animation anim_npcsgmerc2_4096_7 = {&direction_npcsgmerc2_4096_7_0, &direction_npcsgmerc2_4096_7_0, &direction_npcsgmerc2_4096_7_0, &direction_npcsgmerc2_4096_7_0, NULL, &direction_npcsgmerc2_4096_7_8, &direction_npcsgmerc2_4096_7_8, &direction_npcsgmerc2_4096_7_8, &direction_npcsgmerc2_4096_7_8, &direction_npcsgmerc2_4096_7_8, &direction_npcsgmerc2_4096_7_8, &direction_npcsgmerc2_4096_7_8, NULL, &direction_npcsgmerc2_4096_7_16, &direction_npcsgmerc2_4096_7_16, &direction_npcsgmerc2_4096_7_16, &direction_npcsgmerc2_4096_7_16, &direction_npcsgmerc2_4096_7_16, &direction_npcsgmerc2_4096_7_16, &direction_npcsgmerc2_4096_7_16, &direction_npcsgmerc2_4096_7_16, &direction_npcsgmerc2_4096_7_16, &direction_npcsgmerc2_4096_7_16, &direction_npcsgmerc2_4096_7_16, NULL, &direction_npcsgmerc2_4096_7_0, &direction_npcsgmerc2_4096_7_0, &direction_npcsgmerc2_4096_7_0, &direction_npcsgmerc2_4096_7_0, &direction_npcsgmerc2_4096_7_0, &direction_npcsgmerc2_4096_7_0, &direction_npcsgmerc2_4096_7_0};
static Image* images_npcsgmerc2_4096_8_0[1];
static Direction direction_npcsgmerc2_4096_8_0 = {0, 50, 50, 0, -1, images_npcsgmerc2_4096_8_0, 1};
static Image* images_npcsgmerc2_4096_8_16[1];
static Direction direction_npcsgmerc2_4096_8_16 = {16, 50, 50, 0, -1, images_npcsgmerc2_4096_8_16, 1};
static Animation anim_npcsgmerc2_4096_8 = {&direction_npcsgmerc2_4096_8_0, &direction_npcsgmerc2_4096_8_0, &direction_npcsgmerc2_4096_8_0, &direction_npcsgmerc2_4096_8_0, &direction_npcsgmerc2_4096_8_0, &direction_npcsgmerc2_4096_8_0, &direction_npcsgmerc2_4096_8_0, &direction_npcsgmerc2_4096_8_0, NULL, &direction_npcsgmerc2_4096_8_16, &direction_npcsgmerc2_4096_8_16, &direction_npcsgmerc2_4096_8_16, &direction_npcsgmerc2_4096_8_16, &direction_npcsgmerc2_4096_8_16, &direction_npcsgmerc2_4096_8_16, &direction_npcsgmerc2_4096_8_16, &direction_npcsgmerc2_4096_8_16, &direction_npcsgmerc2_4096_8_16, &direction_npcsgmerc2_4096_8_16, &direction_npcsgmerc2_4096_8_16, &direction_npcsgmerc2_4096_8_16, &direction_npcsgmerc2_4096_8_16, &direction_npcsgmerc2_4096_8_16, &direction_npcsgmerc2_4096_8_16, NULL, &direction_npcsgmerc2_4096_8_0, &direction_npcsgmerc2_4096_8_0, &direction_npcsgmerc2_4096_8_0, &direction_npcsgmerc2_4096_8_0, &direction_npcsgmerc2_4096_8_0, &direction_npcsgmerc2_4096_8_0, &direction_npcsgmerc2_4096_8_0};
static Image* images_npcsgmerc2_4096_9_0[5];
static Direction direction_npcsgmerc2_4096_9_0 = {0, 100, 100, 1, 1, images_npcsgmerc2_4096_9_0, 5};
static Image* images_npcsgmerc2_4096_9_16[5];
static Direction direction_npcsgmerc2_4096_9_16 = {16, 100, 100, 1, 1, images_npcsgmerc2_4096_9_16, 5};
static Animation anim_npcsgmerc2_4096_9 = {&direction_npcsgmerc2_4096_9_0, &direction_npcsgmerc2_4096_9_0, &direction_npcsgmerc2_4096_9_0, &direction_npcsgmerc2_4096_9_0, &direction_npcsgmerc2_4096_9_0, &direction_npcsgmerc2_4096_9_0, &direction_npcsgmerc2_4096_9_0, &direction_npcsgmerc2_4096_9_0, NULL, &direction_npcsgmerc2_4096_9_16, &direction_npcsgmerc2_4096_9_16, &direction_npcsgmerc2_4096_9_16, &direction_npcsgmerc2_4096_9_16, &direction_npcsgmerc2_4096_9_16, &direction_npcsgmerc2_4096_9_16, &direction_npcsgmerc2_4096_9_16, &direction_npcsgmerc2_4096_9_16, &direction_npcsgmerc2_4096_9_16, &direction_npcsgmerc2_4096_9_16, &direction_npcsgmerc2_4096_9_16, &direction_npcsgmerc2_4096_9_16, &direction_npcsgmerc2_4096_9_16, &direction_npcsgmerc2_4096_9_16, &direction_npcsgmerc2_4096_9_16, NULL, &direction_npcsgmerc2_4096_9_0, &direction_npcsgmerc2_4096_9_0, &direction_npcsgmerc2_4096_9_0, &direction_npcsgmerc2_4096_9_0, &direction_npcsgmerc2_4096_9_0, &direction_npcsgmerc2_4096_9_0, &direction_npcsgmerc2_4096_9_0};
static Image* images_npcsgmerc2_4096_10_0[1];
static Direction direction_npcsgmerc2_4096_10_0 = {0, 50, 50, 0, 1, images_npcsgmerc2_4096_10_0, 1};
static Image* images_npcsgmerc2_4096_10_8[3];
static Direction direction_npcsgmerc2_4096_10_8 = {8, 50, 50, 0, 1, images_npcsgmerc2_4096_10_8, 3};
static Image* images_npcsgmerc2_4096_10_16[1];
static Direction direction_npcsgmerc2_4096_10_16 = {16, 50, 50, 0, 1, images_npcsgmerc2_4096_10_16, 1};
static Animation anim_npcsgmerc2_4096_10 = {&direction_npcsgmerc2_4096_10_0, &direction_npcsgmerc2_4096_10_0, &direction_npcsgmerc2_4096_10_0, &direction_npcsgmerc2_4096_10_0, NULL, &direction_npcsgmerc2_4096_10_8, &direction_npcsgmerc2_4096_10_8, &direction_npcsgmerc2_4096_10_8, &direction_npcsgmerc2_4096_10_8, &direction_npcsgmerc2_4096_10_8, &direction_npcsgmerc2_4096_10_8, &direction_npcsgmerc2_4096_10_8, NULL, &direction_npcsgmerc2_4096_10_16, &direction_npcsgmerc2_4096_10_16, &direction_npcsgmerc2_4096_10_16, &direction_npcsgmerc2_4096_10_16, &direction_npcsgmerc2_4096_10_16, &direction_npcsgmerc2_4096_10_16, &direction_npcsgmerc2_4096_10_16, &direction_npcsgmerc2_4096_10_16, &direction_npcsgmerc2_4096_10_16, &direction_npcsgmerc2_4096_10_16, &direction_npcsgmerc2_4096_10_16, NULL, &direction_npcsgmerc2_4096_10_0, &direction_npcsgmerc2_4096_10_0, &direction_npcsgmerc2_4096_10_0, &direction_npcsgmerc2_4096_10_0, &direction_npcsgmerc2_4096_10_0, &direction_npcsgmerc2_4096_10_0, &direction_npcsgmerc2_4096_10_0};
static Animation * anim_array_npcsgmerc2_4096[11] = {&anim_npcsgmerc2_4096_0, NULL, &anim_npcsgmerc2_4096_2, NULL, NULL, &anim_npcsgmerc2_4096_5, NULL, &anim_npcsgmerc2_4096_7, &anim_npcsgmerc2_4096_8, &anim_npcsgmerc2_4096_9, &anim_npcsgmerc2_4096_10};
static Animations anim_npcsgmerc2_4096 = {11, &anim_array_npcsgmerc2_4096[0]};
static bool anim_npcsgmerc2_4096_initialized;
class NPCSGMerc2_4096 : public Active
{
public:
    NPCSGMerc2_4096(int x, int y) : Active(x, y, NPCSGMerc2_4096_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_SGMerc 2", 12);
#endif
        this->animations = &anim_npcsgmerc2_4096;
        if (!anim_npcsgmerc2_4096_initialized) {
            anim_npcsgmerc2_4096_initialized = true;
            images_npcsgmerc2_4096_0_0[0] = get_internal_image(11688);
            images_npcsgmerc2_4096_0_16[0] = get_internal_image(14449);
            images_npcsgmerc2_4096_2_0[0] = get_internal_image(12281);
            images_npcsgmerc2_4096_2_0[1] = get_internal_image(13356);
            images_npcsgmerc2_4096_2_0[2] = get_internal_image(13375);
            images_npcsgmerc2_4096_2_0[3] = get_internal_image(13377);
            images_npcsgmerc2_4096_2_0[4] = get_internal_image(13380);
            images_npcsgmerc2_4096_2_0[5] = get_internal_image(13382);
            images_npcsgmerc2_4096_2_0[6] = get_internal_image(13407);
            images_npcsgmerc2_4096_2_0[7] = get_internal_image(13408);
            images_npcsgmerc2_4096_2_1[0] = get_internal_image(13409);
            images_npcsgmerc2_4096_2_1[1] = get_internal_image(13410);
            images_npcsgmerc2_4096_2_1[2] = get_internal_image(13411);
            images_npcsgmerc2_4096_2_1[3] = get_internal_image(13412);
            images_npcsgmerc2_4096_2_1[4] = get_internal_image(13413);
            images_npcsgmerc2_4096_2_1[5] = get_internal_image(13414);
            images_npcsgmerc2_4096_2_1[6] = get_internal_image(13415);
            images_npcsgmerc2_4096_2_1[7] = get_internal_image(13416);
            images_npcsgmerc2_4096_2_16[0] = get_internal_image(14430);
            images_npcsgmerc2_4096_2_16[1] = get_internal_image(14432);
            images_npcsgmerc2_4096_2_16[2] = get_internal_image(14433);
            images_npcsgmerc2_4096_2_16[3] = get_internal_image(14434);
            images_npcsgmerc2_4096_2_16[4] = get_internal_image(14435);
            images_npcsgmerc2_4096_2_16[5] = get_internal_image(14436);
            images_npcsgmerc2_4096_2_16[6] = get_internal_image(14439);
            images_npcsgmerc2_4096_2_16[7] = get_internal_image(14440);
            images_npcsgmerc2_4096_2_17[0] = get_internal_image(14441);
            images_npcsgmerc2_4096_2_17[1] = get_internal_image(14442);
            images_npcsgmerc2_4096_2_17[2] = get_internal_image(14443);
            images_npcsgmerc2_4096_2_17[3] = get_internal_image(14444);
            images_npcsgmerc2_4096_2_17[4] = get_internal_image(14445);
            images_npcsgmerc2_4096_2_17[5] = get_internal_image(14446);
            images_npcsgmerc2_4096_2_17[6] = get_internal_image(14447);
            images_npcsgmerc2_4096_2_17[7] = get_internal_image(14448);
            images_npcsgmerc2_4096_5_0[0] = get_internal_image(4836);
            images_npcsgmerc2_4096_5_16[0] = get_internal_image(2891);
            images_npcsgmerc2_4096_7_0[0] = get_internal_image(14370);
            images_npcsgmerc2_4096_7_8[0] = get_internal_image(3434);
            images_npcsgmerc2_4096_7_16[0] = get_internal_image(14382);
            images_npcsgmerc2_4096_8_0[0] = get_internal_image(14365);
            images_npcsgmerc2_4096_8_16[0] = get_internal_image(14381);
            images_npcsgmerc2_4096_9_0[0] = get_internal_image(13417);
            images_npcsgmerc2_4096_9_0[1] = get_internal_image(14405);
            images_npcsgmerc2_4096_9_0[2] = get_internal_image(14407);
            images_npcsgmerc2_4096_9_0[3] = get_internal_image(13418);
            images_npcsgmerc2_4096_9_0[4] = get_internal_image(13417);
            images_npcsgmerc2_4096_9_16[0] = get_internal_image(14412);
            images_npcsgmerc2_4096_9_16[1] = get_internal_image(14413);
            images_npcsgmerc2_4096_9_16[2] = get_internal_image(14415);
            images_npcsgmerc2_4096_9_16[3] = get_internal_image(14428);
            images_npcsgmerc2_4096_9_16[4] = get_internal_image(14412);
            images_npcsgmerc2_4096_10_0[0] = get_internal_image(14409);
            images_npcsgmerc2_4096_10_8[0] = get_internal_image(11420);
            images_npcsgmerc2_4096_10_8[1] = get_internal_image(11421);
            images_npcsgmerc2_4096_10_8[2] = get_internal_image(11422);
            images_npcsgmerc2_4096_10_16[0] = get_internal_image(14411);
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
FrameObject * create_npcsgmerc2_4096(int x, int y)
{
    return new (Active::pool.create()) NPCSGMerc2_4096(x, y);
}
static Image* images_npckingaxe_4097_0_0[1];
static Direction direction_npckingaxe_4097_0_0 = {0, 50, 50, 0, 1, images_npckingaxe_4097_0_0, 1};
static Animation anim_npckingaxe_4097_0 = {&direction_npckingaxe_4097_0_0, &direction_npckingaxe_4097_0_0, &direction_npckingaxe_4097_0_0, &direction_npckingaxe_4097_0_0, &direction_npckingaxe_4097_0_0, &direction_npckingaxe_4097_0_0, &direction_npckingaxe_4097_0_0, &direction_npckingaxe_4097_0_0, &direction_npckingaxe_4097_0_0, &direction_npckingaxe_4097_0_0, &direction_npckingaxe_4097_0_0, &direction_npckingaxe_4097_0_0, &direction_npckingaxe_4097_0_0, &direction_npckingaxe_4097_0_0, &direction_npckingaxe_4097_0_0, &direction_npckingaxe_4097_0_0, NULL, &direction_npckingaxe_4097_0_0, &direction_npckingaxe_4097_0_0, &direction_npckingaxe_4097_0_0, &direction_npckingaxe_4097_0_0, &direction_npckingaxe_4097_0_0, &direction_npckingaxe_4097_0_0, &direction_npckingaxe_4097_0_0, &direction_npckingaxe_4097_0_0, &direction_npckingaxe_4097_0_0, &direction_npckingaxe_4097_0_0, &direction_npckingaxe_4097_0_0, &direction_npckingaxe_4097_0_0, &direction_npckingaxe_4097_0_0, &direction_npckingaxe_4097_0_0, &direction_npckingaxe_4097_0_0};
static Animation * anim_array_npckingaxe_4097[1] = {&anim_npckingaxe_4097_0};
static Animations anim_npckingaxe_4097 = {1, &anim_array_npckingaxe_4097[0]};
static bool anim_npckingaxe_4097_initialized;
class NPCKingAxe_4097 : public Active
{
public:
    NPCKingAxe_4097(int x, int y) : Active(x, y, NPCKingAxe_4097_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_KingAxe", 11);
#endif
        this->animations = &anim_npckingaxe_4097;
        if (!anim_npckingaxe_4097_initialized) {
            anim_npckingaxe_4097_initialized = true;
            images_npckingaxe_4097_0_0[0] = get_internal_image(14796);
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
FrameObject * create_npckingaxe_4097(int x, int y)
{
    return new (Active::pool.create()) NPCKingAxe_4097(x, y);
}
static Image* images_syntaxprojection2_4098_0_0[2];
static Direction direction_syntaxprojection2_4098_0_0 = {0, 0, 0, 0, 1, images_syntaxprojection2_4098_0_0, 2};
static Image* images_syntaxprojection2_4098_0_8[1];
static Direction direction_syntaxprojection2_4098_0_8 = {8, 50, 50, 0, 1, images_syntaxprojection2_4098_0_8, 1};
static Animation anim_syntaxprojection2_4098_0 = {&direction_syntaxprojection2_4098_0_0, &direction_syntaxprojection2_4098_0_0, &direction_syntaxprojection2_4098_0_0, &direction_syntaxprojection2_4098_0_0, NULL, &direction_syntaxprojection2_4098_0_8, &direction_syntaxprojection2_4098_0_8, &direction_syntaxprojection2_4098_0_8, &direction_syntaxprojection2_4098_0_8, &direction_syntaxprojection2_4098_0_8, &direction_syntaxprojection2_4098_0_8, &direction_syntaxprojection2_4098_0_8, &direction_syntaxprojection2_4098_0_8, &direction_syntaxprojection2_4098_0_8, &direction_syntaxprojection2_4098_0_8, &direction_syntaxprojection2_4098_0_8, &direction_syntaxprojection2_4098_0_8, &direction_syntaxprojection2_4098_0_8, &direction_syntaxprojection2_4098_0_8, &direction_syntaxprojection2_4098_0_8, NULL, &direction_syntaxprojection2_4098_0_0, &direction_syntaxprojection2_4098_0_0, &direction_syntaxprojection2_4098_0_0, &direction_syntaxprojection2_4098_0_0, &direction_syntaxprojection2_4098_0_0, &direction_syntaxprojection2_4098_0_0, &direction_syntaxprojection2_4098_0_0, &direction_syntaxprojection2_4098_0_0, &direction_syntaxprojection2_4098_0_0, &direction_syntaxprojection2_4098_0_0, &direction_syntaxprojection2_4098_0_0};
static Animation * anim_array_syntaxprojection2_4098[1] = {&anim_syntaxprojection2_4098_0};
static Animations anim_syntaxprojection2_4098 = {1, &anim_array_syntaxprojection2_4098[0]};
static bool anim_syntaxprojection2_4098_initialized;
class SyntaxProjection2_4098 : public Active
{
public:
    SyntaxProjection2_4098(int x, int y) : Active(x, y, SyntaxProjection2_4098_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("SyntaxProjection 2", 18);
#endif
        set_visible(false);
        this->animations = &anim_syntaxprojection2_4098;
        if (!anim_syntaxprojection2_4098_initialized) {
            anim_syntaxprojection2_4098_initialized = true;
            images_syntaxprojection2_4098_0_0[0] = get_internal_image(3894);
            images_syntaxprojection2_4098_0_0[1] = get_internal_image(5414);
            images_syntaxprojection2_4098_0_8[0] = get_internal_image(15865);
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
FrameObject * create_syntaxprojection2_4098(int x, int y)
{
    return new (Active::pool.create()) SyntaxProjection2_4098(x, y);
}
static Image* images_npcking_4099_0_0[2];
static Direction direction_npcking_4099_0_0 = {0, 0, 0, 0, 1, images_npcking_4099_0_0, 2};
static Image* images_npcking_4099_0_8[17];
static Direction direction_npcking_4099_0_8 = {8, 50, 50, 0, 1, images_npcking_4099_0_8, 17};
static Image* images_npcking_4099_0_16[2];
static Direction direction_npcking_4099_0_16 = {16, 0, 0, 0, 1, images_npcking_4099_0_16, 2};
static Animation anim_npcking_4099_0 = {&direction_npcking_4099_0_0, &direction_npcking_4099_0_0, &direction_npcking_4099_0_0, &direction_npcking_4099_0_0, NULL, &direction_npcking_4099_0_8, &direction_npcking_4099_0_8, &direction_npcking_4099_0_8, &direction_npcking_4099_0_8, &direction_npcking_4099_0_8, &direction_npcking_4099_0_8, &direction_npcking_4099_0_8, NULL, &direction_npcking_4099_0_16, &direction_npcking_4099_0_16, &direction_npcking_4099_0_16, &direction_npcking_4099_0_16, &direction_npcking_4099_0_16, &direction_npcking_4099_0_16, &direction_npcking_4099_0_16, &direction_npcking_4099_0_16, &direction_npcking_4099_0_16, &direction_npcking_4099_0_16, &direction_npcking_4099_0_16, NULL, &direction_npcking_4099_0_0, &direction_npcking_4099_0_0, &direction_npcking_4099_0_0, &direction_npcking_4099_0_0, &direction_npcking_4099_0_0, &direction_npcking_4099_0_0, &direction_npcking_4099_0_0};
static Image* images_npcking_4099_5_16[14];
static Direction direction_npcking_4099_5_16 = {16, 50, 50, 0, 1, images_npcking_4099_5_16, 14};
static Animation anim_npcking_4099_5 = {NULL, &direction_npcking_4099_5_16, &direction_npcking_4099_5_16, &direction_npcking_4099_5_16, &direction_npcking_4099_5_16, &direction_npcking_4099_5_16, &direction_npcking_4099_5_16, &direction_npcking_4099_5_16, &direction_npcking_4099_5_16, &direction_npcking_4099_5_16, &direction_npcking_4099_5_16, &direction_npcking_4099_5_16, &direction_npcking_4099_5_16, &direction_npcking_4099_5_16, &direction_npcking_4099_5_16, &direction_npcking_4099_5_16, &direction_npcking_4099_5_16, &direction_npcking_4099_5_16, &direction_npcking_4099_5_16, &direction_npcking_4099_5_16, &direction_npcking_4099_5_16, &direction_npcking_4099_5_16, &direction_npcking_4099_5_16, &direction_npcking_4099_5_16, &direction_npcking_4099_5_16, &direction_npcking_4099_5_16, &direction_npcking_4099_5_16, &direction_npcking_4099_5_16, &direction_npcking_4099_5_16, &direction_npcking_4099_5_16, &direction_npcking_4099_5_16, &direction_npcking_4099_5_16};
static Image* images_npcking_4099_7_16[1];
static Direction direction_npcking_4099_7_16 = {16, 50, 50, 0, -1, images_npcking_4099_7_16, 1};
static Animation anim_npcking_4099_7 = {NULL, &direction_npcking_4099_7_16, &direction_npcking_4099_7_16, &direction_npcking_4099_7_16, &direction_npcking_4099_7_16, &direction_npcking_4099_7_16, &direction_npcking_4099_7_16, &direction_npcking_4099_7_16, &direction_npcking_4099_7_16, &direction_npcking_4099_7_16, &direction_npcking_4099_7_16, &direction_npcking_4099_7_16, &direction_npcking_4099_7_16, &direction_npcking_4099_7_16, &direction_npcking_4099_7_16, &direction_npcking_4099_7_16, &direction_npcking_4099_7_16, &direction_npcking_4099_7_16, &direction_npcking_4099_7_16, &direction_npcking_4099_7_16, &direction_npcking_4099_7_16, &direction_npcking_4099_7_16, &direction_npcking_4099_7_16, &direction_npcking_4099_7_16, &direction_npcking_4099_7_16, &direction_npcking_4099_7_16, &direction_npcking_4099_7_16, &direction_npcking_4099_7_16, &direction_npcking_4099_7_16, &direction_npcking_4099_7_16, &direction_npcking_4099_7_16, &direction_npcking_4099_7_16};
static Image* images_npcking_4099_8_16[4];
static Direction direction_npcking_4099_8_16 = {16, 50, 50, 3, -1, images_npcking_4099_8_16, 4};
static Animation anim_npcking_4099_8 = {NULL, &direction_npcking_4099_8_16, &direction_npcking_4099_8_16, &direction_npcking_4099_8_16, &direction_npcking_4099_8_16, &direction_npcking_4099_8_16, &direction_npcking_4099_8_16, &direction_npcking_4099_8_16, &direction_npcking_4099_8_16, &direction_npcking_4099_8_16, &direction_npcking_4099_8_16, &direction_npcking_4099_8_16, &direction_npcking_4099_8_16, &direction_npcking_4099_8_16, &direction_npcking_4099_8_16, &direction_npcking_4099_8_16, &direction_npcking_4099_8_16, &direction_npcking_4099_8_16, &direction_npcking_4099_8_16, &direction_npcking_4099_8_16, &direction_npcking_4099_8_16, &direction_npcking_4099_8_16, &direction_npcking_4099_8_16, &direction_npcking_4099_8_16, &direction_npcking_4099_8_16, &direction_npcking_4099_8_16, &direction_npcking_4099_8_16, &direction_npcking_4099_8_16, &direction_npcking_4099_8_16, &direction_npcking_4099_8_16, &direction_npcking_4099_8_16, &direction_npcking_4099_8_16};
static Image* images_npcking_4099_9_16[1];
static Direction direction_npcking_4099_9_16 = {16, 50, 50, 0, 3, images_npcking_4099_9_16, 1};
static Animation anim_npcking_4099_9 = {NULL, &direction_npcking_4099_9_16, &direction_npcking_4099_9_16, &direction_npcking_4099_9_16, &direction_npcking_4099_9_16, &direction_npcking_4099_9_16, &direction_npcking_4099_9_16, &direction_npcking_4099_9_16, &direction_npcking_4099_9_16, &direction_npcking_4099_9_16, &direction_npcking_4099_9_16, &direction_npcking_4099_9_16, &direction_npcking_4099_9_16, &direction_npcking_4099_9_16, &direction_npcking_4099_9_16, &direction_npcking_4099_9_16, &direction_npcking_4099_9_16, &direction_npcking_4099_9_16, &direction_npcking_4099_9_16, &direction_npcking_4099_9_16, &direction_npcking_4099_9_16, &direction_npcking_4099_9_16, &direction_npcking_4099_9_16, &direction_npcking_4099_9_16, &direction_npcking_4099_9_16, &direction_npcking_4099_9_16, &direction_npcking_4099_9_16, &direction_npcking_4099_9_16, &direction_npcking_4099_9_16, &direction_npcking_4099_9_16, &direction_npcking_4099_9_16, &direction_npcking_4099_9_16};
static Image* images_npcking_4099_10_8[3];
static Direction direction_npcking_4099_10_8 = {8, 50, 50, 0, 1, images_npcking_4099_10_8, 3};
static Image* images_npcking_4099_10_16[6];
static Direction direction_npcking_4099_10_16 = {16, 12, 12, 0, -1, images_npcking_4099_10_16, 6};
static Image* images_npcking_4099_10_17[1];
static Direction direction_npcking_4099_10_17 = {17, 50, 50, 0, -1, images_npcking_4099_10_17, 1};
static Image* images_npcking_4099_10_18[1];
static Direction direction_npcking_4099_10_18 = {18, 50, 50, 0, -1, images_npcking_4099_10_18, 1};
static Animation anim_npcking_4099_10 = {&direction_npcking_4099_10_8, &direction_npcking_4099_10_8, &direction_npcking_4099_10_8, &direction_npcking_4099_10_8, &direction_npcking_4099_10_8, &direction_npcking_4099_10_8, &direction_npcking_4099_10_8, &direction_npcking_4099_10_8, &direction_npcking_4099_10_8, &direction_npcking_4099_10_8, &direction_npcking_4099_10_8, &direction_npcking_4099_10_8, NULL, &direction_npcking_4099_10_16, &direction_npcking_4099_10_16, &direction_npcking_4099_10_16, &direction_npcking_4099_10_16, &direction_npcking_4099_10_17, &direction_npcking_4099_10_18, &direction_npcking_4099_10_18, &direction_npcking_4099_10_18, &direction_npcking_4099_10_18, &direction_npcking_4099_10_18, &direction_npcking_4099_10_18, &direction_npcking_4099_10_18, &direction_npcking_4099_10_18, &direction_npcking_4099_10_18, &direction_npcking_4099_10_18, &direction_npcking_4099_10_18, NULL, &direction_npcking_4099_10_8, &direction_npcking_4099_10_8};
static Image* images_npcking_4099_11_8[4];
static Direction direction_npcking_4099_11_8 = {8, 50, 50, 0, 1, images_npcking_4099_11_8, 4};
static Image* images_npcking_4099_11_16[5];
static Direction direction_npcking_4099_11_16 = {16, 14, 14, 4, -1, images_npcking_4099_11_16, 5};
static Animation anim_npcking_4099_11 = {&direction_npcking_4099_11_8, &direction_npcking_4099_11_8, &direction_npcking_4099_11_8, &direction_npcking_4099_11_8, &direction_npcking_4099_11_8, &direction_npcking_4099_11_8, &direction_npcking_4099_11_8, &direction_npcking_4099_11_8, &direction_npcking_4099_11_8, &direction_npcking_4099_11_8, &direction_npcking_4099_11_8, &direction_npcking_4099_11_8, NULL, &direction_npcking_4099_11_16, &direction_npcking_4099_11_16, &direction_npcking_4099_11_16, &direction_npcking_4099_11_16, &direction_npcking_4099_11_16, &direction_npcking_4099_11_16, &direction_npcking_4099_11_16, &direction_npcking_4099_11_16, &direction_npcking_4099_11_16, &direction_npcking_4099_11_16, &direction_npcking_4099_11_16, &direction_npcking_4099_11_16, &direction_npcking_4099_11_16, &direction_npcking_4099_11_16, &direction_npcking_4099_11_16, NULL, &direction_npcking_4099_11_8, &direction_npcking_4099_11_8, &direction_npcking_4099_11_8};
static Animation * anim_array_npcking_4099[12] = {&anim_npcking_4099_0, NULL, NULL, NULL, NULL, &anim_npcking_4099_5, NULL, &anim_npcking_4099_7, &anim_npcking_4099_8, &anim_npcking_4099_9, &anim_npcking_4099_10, &anim_npcking_4099_11};
static Animations anim_npcking_4099 = {12, &anim_array_npcking_4099[0]};
static bool anim_npcking_4099_initialized;
class NPCKing_4099 : public Active
{
public:
    NPCKing_4099(int x, int y) : Active(x, y, NPCKing_4099_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_King", 8);
#endif
        this->animations = &anim_npcking_4099;
        if (!anim_npcking_4099_initialized) {
            anim_npcking_4099_initialized = true;
            images_npcking_4099_0_0[0] = get_internal_image(14401);
            images_npcking_4099_0_0[1] = get_internal_image(3448);
            images_npcking_4099_0_8[0] = get_internal_image(3301);
            images_npcking_4099_0_8[1] = get_internal_image(3246);
            images_npcking_4099_0_8[2] = get_internal_image(3297);
            images_npcking_4099_0_8[3] = get_internal_image(3298);
            images_npcking_4099_0_8[4] = get_internal_image(3294);
            images_npcking_4099_0_8[5] = get_internal_image(2139);
            images_npcking_4099_0_8[6] = get_internal_image(2187);
            images_npcking_4099_0_8[7] = get_internal_image(3299);
            images_npcking_4099_0_8[8] = get_internal_image(7959);
            images_npcking_4099_0_8[9] = get_internal_image(6261);
            images_npcking_4099_0_8[10] = get_internal_image(6259);
            images_npcking_4099_0_8[11] = get_internal_image(9038);
            images_npcking_4099_0_8[12] = get_internal_image(9066);
            images_npcking_4099_0_8[13] = get_internal_image(9063);
            images_npcking_4099_0_8[14] = get_internal_image(9065);
            images_npcking_4099_0_8[15] = get_internal_image(9039);
            images_npcking_4099_0_8[16] = get_internal_image(2092);
            images_npcking_4099_0_16[0] = get_internal_image(14401);
            images_npcking_4099_0_16[1] = get_internal_image(3448);
            images_npcking_4099_5_16[0] = get_internal_image(3448);
            images_npcking_4099_5_16[1] = get_internal_image(508);
            images_npcking_4099_5_16[2] = get_internal_image(1061);
            images_npcking_4099_5_16[3] = get_internal_image(2715);
            images_npcking_4099_5_16[4] = get_internal_image(2825);
            images_npcking_4099_5_16[5] = get_internal_image(2738);
            images_npcking_4099_5_16[6] = get_internal_image(51);
            images_npcking_4099_5_16[7] = get_internal_image(1594);
            images_npcking_4099_5_16[8] = get_internal_image(1632);
            images_npcking_4099_5_16[9] = get_internal_image(14497);
            images_npcking_4099_5_16[10] = get_internal_image(7971);
            images_npcking_4099_5_16[11] = get_internal_image(8550);
            images_npcking_4099_5_16[12] = get_internal_image(1516);
            images_npcking_4099_5_16[13] = get_internal_image(1516);
            images_npcking_4099_7_16[0] = get_internal_image(3302);
            images_npcking_4099_8_16[0] = get_internal_image(3308);
            images_npcking_4099_8_16[1] = get_internal_image(2383);
            images_npcking_4099_8_16[2] = get_internal_image(3306);
            images_npcking_4099_8_16[3] = get_internal_image(3088);
            images_npcking_4099_9_16[0] = get_internal_image(10783);
            images_npcking_4099_10_8[0] = get_internal_image(7969);
            images_npcking_4099_10_8[1] = get_internal_image(7968);
            images_npcking_4099_10_8[2] = get_internal_image(7962);
            images_npcking_4099_10_16[0] = get_internal_image(14497);
            images_npcking_4099_10_16[1] = get_internal_image(14497);
            images_npcking_4099_10_16[2] = get_internal_image(14498);
            images_npcking_4099_10_16[3] = get_internal_image(14499);
            images_npcking_4099_10_16[4] = get_internal_image(14499);
            images_npcking_4099_10_16[5] = get_internal_image(14498);
            images_npcking_4099_10_17[0] = get_internal_image(14496);
            images_npcking_4099_10_18[0] = get_internal_image(14500);
            images_npcking_4099_11_8[0] = get_internal_image(7966);
            images_npcking_4099_11_8[1] = get_internal_image(8558);
            images_npcking_4099_11_8[2] = get_internal_image(8554);
            images_npcking_4099_11_8[3] = get_internal_image(8557);
            images_npcking_4099_11_16[0] = get_internal_image(10784);
            images_npcking_4099_11_16[1] = get_internal_image(10987);
            images_npcking_4099_11_16[2] = get_internal_image(10774);
            images_npcking_4099_11_16[3] = get_internal_image(10775);
            images_npcking_4099_11_16[4] = get_internal_image(10791);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(16);
        create_alterables();
    }
};
FrameObject * create_npcking_4099(int x, int y)
{
    return new (Active::pool.create()) NPCKing_4099(x, y);
}
static Image* images_syntaxprojection1_4100_0_0[2];
static Direction direction_syntaxprojection1_4100_0_0 = {0, 40, 40, 0, -1, images_syntaxprojection1_4100_0_0, 2};
static Animation anim_syntaxprojection1_4100_0 = {&direction_syntaxprojection1_4100_0_0, &direction_syntaxprojection1_4100_0_0, &direction_syntaxprojection1_4100_0_0, &direction_syntaxprojection1_4100_0_0, &direction_syntaxprojection1_4100_0_0, &direction_syntaxprojection1_4100_0_0, &direction_syntaxprojection1_4100_0_0, &direction_syntaxprojection1_4100_0_0, &direction_syntaxprojection1_4100_0_0, &direction_syntaxprojection1_4100_0_0, &direction_syntaxprojection1_4100_0_0, &direction_syntaxprojection1_4100_0_0, &direction_syntaxprojection1_4100_0_0, &direction_syntaxprojection1_4100_0_0, &direction_syntaxprojection1_4100_0_0, &direction_syntaxprojection1_4100_0_0, NULL, &direction_syntaxprojection1_4100_0_0, &direction_syntaxprojection1_4100_0_0, &direction_syntaxprojection1_4100_0_0, &direction_syntaxprojection1_4100_0_0, &direction_syntaxprojection1_4100_0_0, &direction_syntaxprojection1_4100_0_0, &direction_syntaxprojection1_4100_0_0, &direction_syntaxprojection1_4100_0_0, &direction_syntaxprojection1_4100_0_0, &direction_syntaxprojection1_4100_0_0, &direction_syntaxprojection1_4100_0_0, &direction_syntaxprojection1_4100_0_0, &direction_syntaxprojection1_4100_0_0, &direction_syntaxprojection1_4100_0_0, &direction_syntaxprojection1_4100_0_0};
static Animation * anim_array_syntaxprojection1_4100[1] = {&anim_syntaxprojection1_4100_0};
static Animations anim_syntaxprojection1_4100 = {1, &anim_array_syntaxprojection1_4100[0]};
static bool anim_syntaxprojection1_4100_initialized;
class SyntaxProjection1_4100 : public Active
{
public:
    SyntaxProjection1_4100(int x, int y) : Active(x, y, SyntaxProjection1_4100_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("SyntaxProjection 1", 18);
#endif
        set_visible(false);
        this->animations = &anim_syntaxprojection1_4100;
        if (!anim_syntaxprojection1_4100_initialized) {
            anim_syntaxprojection1_4100_initialized = true;
            images_syntaxprojection1_4100_0_0[0] = get_internal_image(14465);
            images_syntaxprojection1_4100_0_0[1] = get_internal_image(14466);
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
FrameObject * create_syntaxprojection1_4100(int x, int y)
{
    return new (Active::pool.create()) SyntaxProjection1_4100(x, y);
}
static Image* images_syntaxprojection3_4101_0_0[7];
static Direction direction_syntaxprojection3_4101_0_0 = {0, 50, 50, 0, -1, images_syntaxprojection3_4101_0_0, 7};
static Animation anim_syntaxprojection3_4101_0 = {&direction_syntaxprojection3_4101_0_0, &direction_syntaxprojection3_4101_0_0, &direction_syntaxprojection3_4101_0_0, &direction_syntaxprojection3_4101_0_0, &direction_syntaxprojection3_4101_0_0, &direction_syntaxprojection3_4101_0_0, &direction_syntaxprojection3_4101_0_0, &direction_syntaxprojection3_4101_0_0, &direction_syntaxprojection3_4101_0_0, &direction_syntaxprojection3_4101_0_0, &direction_syntaxprojection3_4101_0_0, &direction_syntaxprojection3_4101_0_0, &direction_syntaxprojection3_4101_0_0, &direction_syntaxprojection3_4101_0_0, &direction_syntaxprojection3_4101_0_0, &direction_syntaxprojection3_4101_0_0, NULL, &direction_syntaxprojection3_4101_0_0, &direction_syntaxprojection3_4101_0_0, &direction_syntaxprojection3_4101_0_0, &direction_syntaxprojection3_4101_0_0, &direction_syntaxprojection3_4101_0_0, &direction_syntaxprojection3_4101_0_0, &direction_syntaxprojection3_4101_0_0, &direction_syntaxprojection3_4101_0_0, &direction_syntaxprojection3_4101_0_0, &direction_syntaxprojection3_4101_0_0, &direction_syntaxprojection3_4101_0_0, &direction_syntaxprojection3_4101_0_0, &direction_syntaxprojection3_4101_0_0, &direction_syntaxprojection3_4101_0_0, &direction_syntaxprojection3_4101_0_0};
static Animation * anim_array_syntaxprojection3_4101[1] = {&anim_syntaxprojection3_4101_0};
static Animations anim_syntaxprojection3_4101 = {1, &anim_array_syntaxprojection3_4101[0]};
static bool anim_syntaxprojection3_4101_initialized;
class SyntaxProjection3_4101 : public Active
{
public:
    SyntaxProjection3_4101(int x, int y) : Active(x, y, SyntaxProjection3_4101_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("SyntaxProjection 3", 18);
#endif
        set_visible(false);
        this->animations = &anim_syntaxprojection3_4101;
        if (!anim_syntaxprojection3_4101_initialized) {
            anim_syntaxprojection3_4101_initialized = true;
            images_syntaxprojection3_4101_0_0[0] = get_internal_image(14471);
            images_syntaxprojection3_4101_0_0[1] = get_internal_image(14479);
            images_syntaxprojection3_4101_0_0[2] = get_internal_image(14478);
            images_syntaxprojection3_4101_0_0[3] = get_internal_image(14476);
            images_syntaxprojection3_4101_0_0[4] = get_internal_image(14472);
            images_syntaxprojection3_4101_0_0[5] = get_internal_image(14475);
            images_syntaxprojection3_4101_0_0[6] = get_internal_image(14474);
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
FrameObject * create_syntaxprojection3_4101(int x, int y)
{
    return new (Active::pool.create()) SyntaxProjection3_4101(x, y);
}
static Image* images_kingdomstonebig_4102_0_0[6];
static Direction direction_kingdomstonebig_4102_0_0 = {0, 12, 12, 0, -1, images_kingdomstonebig_4102_0_0, 6};
static Animation anim_kingdomstonebig_4102_0 = {&direction_kingdomstonebig_4102_0_0, &direction_kingdomstonebig_4102_0_0, &direction_kingdomstonebig_4102_0_0, &direction_kingdomstonebig_4102_0_0, &direction_kingdomstonebig_4102_0_0, &direction_kingdomstonebig_4102_0_0, &direction_kingdomstonebig_4102_0_0, &direction_kingdomstonebig_4102_0_0, &direction_kingdomstonebig_4102_0_0, &direction_kingdomstonebig_4102_0_0, &direction_kingdomstonebig_4102_0_0, &direction_kingdomstonebig_4102_0_0, &direction_kingdomstonebig_4102_0_0, &direction_kingdomstonebig_4102_0_0, &direction_kingdomstonebig_4102_0_0, &direction_kingdomstonebig_4102_0_0, NULL, &direction_kingdomstonebig_4102_0_0, &direction_kingdomstonebig_4102_0_0, &direction_kingdomstonebig_4102_0_0, &direction_kingdomstonebig_4102_0_0, &direction_kingdomstonebig_4102_0_0, &direction_kingdomstonebig_4102_0_0, &direction_kingdomstonebig_4102_0_0, &direction_kingdomstonebig_4102_0_0, &direction_kingdomstonebig_4102_0_0, &direction_kingdomstonebig_4102_0_0, &direction_kingdomstonebig_4102_0_0, &direction_kingdomstonebig_4102_0_0, &direction_kingdomstonebig_4102_0_0, &direction_kingdomstonebig_4102_0_0, &direction_kingdomstonebig_4102_0_0};
static Animation * anim_array_kingdomstonebig_4102[1] = {&anim_kingdomstonebig_4102_0};
static Animations anim_kingdomstonebig_4102 = {1, &anim_array_kingdomstonebig_4102[0]};
static bool anim_kingdomstonebig_4102_initialized;
class KingdomStoneBig_4102 : public Active
{
public:
    KingdomStoneBig_4102(int x, int y) : Active(x, y, KingdomStoneBig_4102_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("KingdomStone_Big", 16);
#endif
        this->animations = &anim_kingdomstonebig_4102;
        if (!anim_kingdomstonebig_4102_initialized) {
            anim_kingdomstonebig_4102_initialized = true;
            images_kingdomstonebig_4102_0_0[0] = get_internal_image(14508);
            images_kingdomstonebig_4102_0_0[1] = get_internal_image(14510);
            images_kingdomstonebig_4102_0_0[2] = get_internal_image(14514);
            images_kingdomstonebig_4102_0_0[3] = get_internal_image(14508);
            images_kingdomstonebig_4102_0_0[4] = get_internal_image(14521);
            images_kingdomstonebig_4102_0_0[5] = get_internal_image(14522);
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
FrameObject * create_kingdomstonebig_4102(int x, int y)
{
    return new (Active::pool.create()) KingdomStoneBig_4102(x, y);
}
static Image* images_kingdomstonesparkle_4103_0_0[7];
static Direction direction_kingdomstonesparkle_4103_0_0 = {0, 0, 0, 0, 1, images_kingdomstonesparkle_4103_0_0, 7};
static Animation anim_kingdomstonesparkle_4103_0 = {&direction_kingdomstonesparkle_4103_0_0, &direction_kingdomstonesparkle_4103_0_0, &direction_kingdomstonesparkle_4103_0_0, &direction_kingdomstonesparkle_4103_0_0, &direction_kingdomstonesparkle_4103_0_0, &direction_kingdomstonesparkle_4103_0_0, &direction_kingdomstonesparkle_4103_0_0, &direction_kingdomstonesparkle_4103_0_0, &direction_kingdomstonesparkle_4103_0_0, &direction_kingdomstonesparkle_4103_0_0, &direction_kingdomstonesparkle_4103_0_0, &direction_kingdomstonesparkle_4103_0_0, &direction_kingdomstonesparkle_4103_0_0, &direction_kingdomstonesparkle_4103_0_0, &direction_kingdomstonesparkle_4103_0_0, &direction_kingdomstonesparkle_4103_0_0, NULL, &direction_kingdomstonesparkle_4103_0_0, &direction_kingdomstonesparkle_4103_0_0, &direction_kingdomstonesparkle_4103_0_0, &direction_kingdomstonesparkle_4103_0_0, &direction_kingdomstonesparkle_4103_0_0, &direction_kingdomstonesparkle_4103_0_0, &direction_kingdomstonesparkle_4103_0_0, &direction_kingdomstonesparkle_4103_0_0, &direction_kingdomstonesparkle_4103_0_0, &direction_kingdomstonesparkle_4103_0_0, &direction_kingdomstonesparkle_4103_0_0, &direction_kingdomstonesparkle_4103_0_0, &direction_kingdomstonesparkle_4103_0_0, &direction_kingdomstonesparkle_4103_0_0, &direction_kingdomstonesparkle_4103_0_0};
static Animation * anim_array_kingdomstonesparkle_4103[1] = {&anim_kingdomstonesparkle_4103_0};
static Animations anim_kingdomstonesparkle_4103 = {1, &anim_array_kingdomstonesparkle_4103[0]};
static bool anim_kingdomstonesparkle_4103_initialized;
class KingdomStoneSparkle_4103 : public Active
{
public:
    KingdomStoneSparkle_4103(int x, int y) : Active(x, y, KingdomStoneSparkle_4103_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("KingdomStone_Sparkle", 20);
#endif
        this->animations = &anim_kingdomstonesparkle_4103;
        if (!anim_kingdomstonesparkle_4103_initialized) {
            anim_kingdomstonesparkle_4103_initialized = true;
            images_kingdomstonesparkle_4103_0_0[0] = get_internal_image(14520);
            images_kingdomstonesparkle_4103_0_0[1] = get_internal_image(14518);
            images_kingdomstonesparkle_4103_0_0[2] = get_internal_image(14517);
            images_kingdomstonesparkle_4103_0_0[3] = get_internal_image(14511);
            images_kingdomstonesparkle_4103_0_0[4] = get_internal_image(14518);
            images_kingdomstonesparkle_4103_0_0[5] = get_internal_image(14519);
            images_kingdomstonesparkle_4103_0_0[6] = get_internal_image(14520);
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
FrameObject * create_kingdomstonesparkle_4103(int x, int y)
{
    return new (Active::pool.create()) KingdomStoneSparkle_4103(x, y);
}
static Image* images_breakableshuigangpillar_4104_0_0[1];
static Direction direction_breakableshuigangpillar_4104_0_0 = {0, 50, 50, 0, 1, images_breakableshuigangpillar_4104_0_0, 1};
static Animation anim_breakableshuigangpillar_4104_0 = {&direction_breakableshuigangpillar_4104_0_0, &direction_breakableshuigangpillar_4104_0_0, &direction_breakableshuigangpillar_4104_0_0, &direction_breakableshuigangpillar_4104_0_0, &direction_breakableshuigangpillar_4104_0_0, &direction_breakableshuigangpillar_4104_0_0, &direction_breakableshuigangpillar_4104_0_0, &direction_breakableshuigangpillar_4104_0_0, &direction_breakableshuigangpillar_4104_0_0, &direction_breakableshuigangpillar_4104_0_0, &direction_breakableshuigangpillar_4104_0_0, &direction_breakableshuigangpillar_4104_0_0, &direction_breakableshuigangpillar_4104_0_0, &direction_breakableshuigangpillar_4104_0_0, &direction_breakableshuigangpillar_4104_0_0, &direction_breakableshuigangpillar_4104_0_0, NULL, &direction_breakableshuigangpillar_4104_0_0, &direction_breakableshuigangpillar_4104_0_0, &direction_breakableshuigangpillar_4104_0_0, &direction_breakableshuigangpillar_4104_0_0, &direction_breakableshuigangpillar_4104_0_0, &direction_breakableshuigangpillar_4104_0_0, &direction_breakableshuigangpillar_4104_0_0, &direction_breakableshuigangpillar_4104_0_0, &direction_breakableshuigangpillar_4104_0_0, &direction_breakableshuigangpillar_4104_0_0, &direction_breakableshuigangpillar_4104_0_0, &direction_breakableshuigangpillar_4104_0_0, &direction_breakableshuigangpillar_4104_0_0, &direction_breakableshuigangpillar_4104_0_0, &direction_breakableshuigangpillar_4104_0_0};
static Animation * anim_array_breakableshuigangpillar_4104[1] = {&anim_breakableshuigangpillar_4104_0};
static Animations anim_breakableshuigangpillar_4104 = {1, &anim_array_breakableshuigangpillar_4104[0]};
static bool anim_breakableshuigangpillar_4104_initialized;
class BreakableShuigangPillar_4104 : public Active
{
public:
    BreakableShuigangPillar_4104(int x, int y) : Active(x, y, BreakableShuigangPillar_4104_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BreakableShuigangPillar", 23);
#endif
        this->animations = &anim_breakableshuigangpillar_4104;
        if (!anim_breakableshuigangpillar_4104_initialized) {
            anim_breakableshuigangpillar_4104_initialized = true;
            images_breakableshuigangpillar_4104_0_0[0] = get_internal_image(12802);
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
FrameObject * create_breakableshuigangpillar_4104(int x, int y)
{
    return new (Active::pool.create()) BreakableShuigangPillar_4104(x, y);
}
static Image* images_npcmercdebris_4105_0_0[4];
static Direction direction_npcmercdebris_4105_0_0 = {0, 0, 0, 0, 1, images_npcmercdebris_4105_0_0, 4};
static Animation anim_npcmercdebris_4105_0 = {&direction_npcmercdebris_4105_0_0, &direction_npcmercdebris_4105_0_0, &direction_npcmercdebris_4105_0_0, &direction_npcmercdebris_4105_0_0, &direction_npcmercdebris_4105_0_0, &direction_npcmercdebris_4105_0_0, &direction_npcmercdebris_4105_0_0, &direction_npcmercdebris_4105_0_0, &direction_npcmercdebris_4105_0_0, &direction_npcmercdebris_4105_0_0, &direction_npcmercdebris_4105_0_0, &direction_npcmercdebris_4105_0_0, &direction_npcmercdebris_4105_0_0, &direction_npcmercdebris_4105_0_0, &direction_npcmercdebris_4105_0_0, &direction_npcmercdebris_4105_0_0, NULL, &direction_npcmercdebris_4105_0_0, &direction_npcmercdebris_4105_0_0, &direction_npcmercdebris_4105_0_0, &direction_npcmercdebris_4105_0_0, &direction_npcmercdebris_4105_0_0, &direction_npcmercdebris_4105_0_0, &direction_npcmercdebris_4105_0_0, &direction_npcmercdebris_4105_0_0, &direction_npcmercdebris_4105_0_0, &direction_npcmercdebris_4105_0_0, &direction_npcmercdebris_4105_0_0, &direction_npcmercdebris_4105_0_0, &direction_npcmercdebris_4105_0_0, &direction_npcmercdebris_4105_0_0, &direction_npcmercdebris_4105_0_0};
static Animation * anim_array_npcmercdebris_4105[1] = {&anim_npcmercdebris_4105_0};
static Animations anim_npcmercdebris_4105 = {1, &anim_array_npcmercdebris_4105[0]};
static bool anim_npcmercdebris_4105_initialized;
class NPCMercDebris_4105 : public Active
{
public:
    NPCMercDebris_4105(int x, int y) : Active(x, y, NPCMercDebris_4105_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_MercDebris", 14);
#endif
        this->animations = &anim_npcmercdebris_4105;
        if (!anim_npcmercdebris_4105_initialized) {
            anim_npcmercdebris_4105_initialized = true;
            images_npcmercdebris_4105_0_0[0] = get_internal_image(14453);
            images_npcmercdebris_4105_0_0[1] = get_internal_image(14454);
            images_npcmercdebris_4105_0_0[2] = get_internal_image(14452);
            images_npcmercdebris_4105_0_0[3] = get_internal_image(14455);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(pick_random(10, 1, 2, 3, 4, 5, 11, 12, 13, 14, 15));
        set_direction(pick_random(10, 1, 2, 3, 4, 5, 11, 12, 13, 14, 15));
        movement = new PinballMovement(this);
        movement->index = 0;
        ((PinballMovement*)movement)->set_max_speed(100);
        ((PinballMovement*)movement)->set_deceleration(0);
        ((PinballMovement*)movement)->set_gravity(50);
        movement->start();
        create_alterables();
    }
};
FrameObject * create_npcmercdebris_4105(int x, int y)
{
    return new (Active::pool.create()) NPCMercDebris_4105(x, y);
}
static Image* images_npcdinnerlilac_4106_0_0[21];
static Direction direction_npcdinnerlilac_4106_0_0 = {0, 0, 0, 0, 1, images_npcdinnerlilac_4106_0_0, 21};
static Image* images_npcdinnerlilac_4106_0_2[14];
static Direction direction_npcdinnerlilac_4106_0_2 = {2, 20, 20, 0, -1, images_npcdinnerlilac_4106_0_2, 14};
static Image* images_npcdinnerlilac_4106_0_3[5];
static Direction direction_npcdinnerlilac_4106_0_3 = {3, 20, 20, 4, -1, images_npcdinnerlilac_4106_0_3, 5};
static Image* images_npcdinnerlilac_4106_0_4[2];
static Direction direction_npcdinnerlilac_4106_0_4 = {4, 12, 12, 0, -1, images_npcdinnerlilac_4106_0_4, 2};
static Image* images_npcdinnerlilac_4106_0_5[3];
static Direction direction_npcdinnerlilac_4106_0_5 = {5, 35, 35, 0, -1, images_npcdinnerlilac_4106_0_5, 3};
static Animation anim_npcdinnerlilac_4106_0 = {&direction_npcdinnerlilac_4106_0_0, NULL, &direction_npcdinnerlilac_4106_0_2, &direction_npcdinnerlilac_4106_0_3, &direction_npcdinnerlilac_4106_0_4, &direction_npcdinnerlilac_4106_0_5, &direction_npcdinnerlilac_4106_0_5, &direction_npcdinnerlilac_4106_0_5, &direction_npcdinnerlilac_4106_0_5, &direction_npcdinnerlilac_4106_0_5, &direction_npcdinnerlilac_4106_0_5, &direction_npcdinnerlilac_4106_0_5, &direction_npcdinnerlilac_4106_0_5, &direction_npcdinnerlilac_4106_0_5, &direction_npcdinnerlilac_4106_0_5, &direction_npcdinnerlilac_4106_0_5, &direction_npcdinnerlilac_4106_0_5, &direction_npcdinnerlilac_4106_0_5, &direction_npcdinnerlilac_4106_0_5, &direction_npcdinnerlilac_4106_0_0, &direction_npcdinnerlilac_4106_0_0, &direction_npcdinnerlilac_4106_0_0, &direction_npcdinnerlilac_4106_0_0, &direction_npcdinnerlilac_4106_0_0, &direction_npcdinnerlilac_4106_0_0, &direction_npcdinnerlilac_4106_0_0, &direction_npcdinnerlilac_4106_0_0, &direction_npcdinnerlilac_4106_0_0, &direction_npcdinnerlilac_4106_0_0, &direction_npcdinnerlilac_4106_0_0, &direction_npcdinnerlilac_4106_0_0, &direction_npcdinnerlilac_4106_0_0};
static Animation * anim_array_npcdinnerlilac_4106[1] = {&anim_npcdinnerlilac_4106_0};
static Animations anim_npcdinnerlilac_4106 = {1, &anim_array_npcdinnerlilac_4106[0]};
static bool anim_npcdinnerlilac_4106_initialized;
class NPCDinnerLilac_4106 : public Active
{
public:
    NPCDinnerLilac_4106(int x, int y) : Active(x, y, NPCDinnerLilac_4106_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_DinnerLilac", 15);
#endif
        this->animations = &anim_npcdinnerlilac_4106;
        if (!anim_npcdinnerlilac_4106_initialized) {
            anim_npcdinnerlilac_4106_initialized = true;
            images_npcdinnerlilac_4106_0_0[0] = get_internal_image(11410);
            images_npcdinnerlilac_4106_0_0[1] = get_internal_image(11410);
            images_npcdinnerlilac_4106_0_0[2] = get_internal_image(11410);
            images_npcdinnerlilac_4106_0_0[3] = get_internal_image(15850);
            images_npcdinnerlilac_4106_0_0[4] = get_internal_image(15851);
            images_npcdinnerlilac_4106_0_0[5] = get_internal_image(15852);
            images_npcdinnerlilac_4106_0_0[6] = get_internal_image(15642);
            images_npcdinnerlilac_4106_0_0[7] = get_internal_image(15836);
            images_npcdinnerlilac_4106_0_0[8] = get_internal_image(15837);
            images_npcdinnerlilac_4106_0_0[9] = get_internal_image(15838);
            images_npcdinnerlilac_4106_0_0[10] = get_internal_image(15840);
            images_npcdinnerlilac_4106_0_0[11] = get_internal_image(15841);
            images_npcdinnerlilac_4106_0_0[12] = get_internal_image(15842);
            images_npcdinnerlilac_4106_0_0[13] = get_internal_image(15846);
            images_npcdinnerlilac_4106_0_0[14] = get_internal_image(15841);
            images_npcdinnerlilac_4106_0_0[15] = get_internal_image(15839);
            images_npcdinnerlilac_4106_0_0[16] = get_internal_image(15843);
            images_npcdinnerlilac_4106_0_0[17] = get_internal_image(15844);
            images_npcdinnerlilac_4106_0_0[18] = get_internal_image(15847);
            images_npcdinnerlilac_4106_0_0[19] = get_internal_image(15848);
            images_npcdinnerlilac_4106_0_0[20] = get_internal_image(15849);
            images_npcdinnerlilac_4106_0_2[0] = get_internal_image(15879);
            images_npcdinnerlilac_4106_0_2[1] = get_internal_image(15879);
            images_npcdinnerlilac_4106_0_2[2] = get_internal_image(15875);
            images_npcdinnerlilac_4106_0_2[3] = get_internal_image(15880);
            images_npcdinnerlilac_4106_0_2[4] = get_internal_image(15887);
            images_npcdinnerlilac_4106_0_2[5] = get_internal_image(15886);
            images_npcdinnerlilac_4106_0_2[6] = get_internal_image(15884);
            images_npcdinnerlilac_4106_0_2[7] = get_internal_image(15881);
            images_npcdinnerlilac_4106_0_2[8] = get_internal_image(15883);
            images_npcdinnerlilac_4106_0_2[9] = get_internal_image(15881);
            images_npcdinnerlilac_4106_0_2[10] = get_internal_image(15882);
            images_npcdinnerlilac_4106_0_2[11] = get_internal_image(15881);
            images_npcdinnerlilac_4106_0_2[12] = get_internal_image(15883);
            images_npcdinnerlilac_4106_0_2[13] = get_internal_image(15881);
            images_npcdinnerlilac_4106_0_3[0] = get_internal_image(7864);
            images_npcdinnerlilac_4106_0_3[1] = get_internal_image(7861);
            images_npcdinnerlilac_4106_0_3[2] = get_internal_image(7862);
            images_npcdinnerlilac_4106_0_3[3] = get_internal_image(7860);
            images_npcdinnerlilac_4106_0_3[4] = get_internal_image(7863);
            images_npcdinnerlilac_4106_0_4[0] = get_internal_image(15129);
            images_npcdinnerlilac_4106_0_4[1] = get_internal_image(15878);
            images_npcdinnerlilac_4106_0_5[0] = get_internal_image(14195);
            images_npcdinnerlilac_4106_0_5[1] = get_internal_image(15128);
            images_npcdinnerlilac_4106_0_5[2] = get_internal_image(15130);
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
FrameObject * create_npcdinnerlilac_4106(int x, int y)
{
    return new (Active::pool.create()) NPCDinnerLilac_4106(x, y);
}
static Image* images_npcdinnerlilac2_4107_0_0[1];
static Direction direction_npcdinnerlilac2_4107_0_0 = {0, 0, 0, 0, 1, images_npcdinnerlilac2_4107_0_0, 1};
static Image* images_npcdinnerlilac2_4107_0_2[8];
static Direction direction_npcdinnerlilac2_4107_0_2 = {2, 0, 0, 0, 1, images_npcdinnerlilac2_4107_0_2, 8};
static Animation anim_npcdinnerlilac2_4107_0 = {&direction_npcdinnerlilac2_4107_0_0, NULL, &direction_npcdinnerlilac2_4107_0_2, &direction_npcdinnerlilac2_4107_0_2, &direction_npcdinnerlilac2_4107_0_2, &direction_npcdinnerlilac2_4107_0_2, &direction_npcdinnerlilac2_4107_0_2, &direction_npcdinnerlilac2_4107_0_2, &direction_npcdinnerlilac2_4107_0_2, &direction_npcdinnerlilac2_4107_0_2, &direction_npcdinnerlilac2_4107_0_2, &direction_npcdinnerlilac2_4107_0_2, &direction_npcdinnerlilac2_4107_0_2, &direction_npcdinnerlilac2_4107_0_2, &direction_npcdinnerlilac2_4107_0_2, &direction_npcdinnerlilac2_4107_0_2, &direction_npcdinnerlilac2_4107_0_2, NULL, &direction_npcdinnerlilac2_4107_0_0, &direction_npcdinnerlilac2_4107_0_0, &direction_npcdinnerlilac2_4107_0_0, &direction_npcdinnerlilac2_4107_0_0, &direction_npcdinnerlilac2_4107_0_0, &direction_npcdinnerlilac2_4107_0_0, &direction_npcdinnerlilac2_4107_0_0, &direction_npcdinnerlilac2_4107_0_0, &direction_npcdinnerlilac2_4107_0_0, &direction_npcdinnerlilac2_4107_0_0, &direction_npcdinnerlilac2_4107_0_0, &direction_npcdinnerlilac2_4107_0_0, &direction_npcdinnerlilac2_4107_0_0, &direction_npcdinnerlilac2_4107_0_0};
static Animation * anim_array_npcdinnerlilac2_4107[1] = {&anim_npcdinnerlilac2_4107_0};
static Animations anim_npcdinnerlilac2_4107 = {1, &anim_array_npcdinnerlilac2_4107[0]};
static bool anim_npcdinnerlilac2_4107_initialized;
class NPCDinnerLilac2_4107 : public Active
{
public:
    NPCDinnerLilac2_4107(int x, int y) : Active(x, y, NPCDinnerLilac2_4107_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_DinnerLilac 2", 17);
#endif
        this->animations = &anim_npcdinnerlilac2_4107;
        if (!anim_npcdinnerlilac2_4107_initialized) {
            anim_npcdinnerlilac2_4107_initialized = true;
            images_npcdinnerlilac2_4107_0_0[0] = get_internal_image(15892);
            images_npcdinnerlilac2_4107_0_2[0] = get_internal_image(15891);
            images_npcdinnerlilac2_4107_0_2[1] = get_internal_image(15891);
            images_npcdinnerlilac2_4107_0_2[2] = get_internal_image(15891);
            images_npcdinnerlilac2_4107_0_2[3] = get_internal_image(15891);
            images_npcdinnerlilac2_4107_0_2[4] = get_internal_image(15893);
            images_npcdinnerlilac2_4107_0_2[5] = get_internal_image(15893);
            images_npcdinnerlilac2_4107_0_2[6] = get_internal_image(15893);
            images_npcdinnerlilac2_4107_0_2[7] = get_internal_image(15892);
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
FrameObject * create_npcdinnerlilac2_4107(int x, int y)
{
    return new (Active::pool.create()) NPCDinnerLilac2_4107(x, y);
}
static Image* images_npcdinnercarol2_4108_0_0[1];
static Direction direction_npcdinnercarol2_4108_0_0 = {0, 0, 0, 0, 1, images_npcdinnercarol2_4108_0_0, 1};
static Image* images_npcdinnercarol2_4108_0_2[6];
static Direction direction_npcdinnercarol2_4108_0_2 = {2, 0, 0, 0, 1, images_npcdinnercarol2_4108_0_2, 6};
static Animation anim_npcdinnercarol2_4108_0 = {&direction_npcdinnercarol2_4108_0_0, NULL, &direction_npcdinnercarol2_4108_0_2, &direction_npcdinnercarol2_4108_0_2, &direction_npcdinnercarol2_4108_0_2, &direction_npcdinnercarol2_4108_0_2, &direction_npcdinnercarol2_4108_0_2, &direction_npcdinnercarol2_4108_0_2, &direction_npcdinnercarol2_4108_0_2, &direction_npcdinnercarol2_4108_0_2, &direction_npcdinnercarol2_4108_0_2, &direction_npcdinnercarol2_4108_0_2, &direction_npcdinnercarol2_4108_0_2, &direction_npcdinnercarol2_4108_0_2, &direction_npcdinnercarol2_4108_0_2, &direction_npcdinnercarol2_4108_0_2, &direction_npcdinnercarol2_4108_0_2, NULL, &direction_npcdinnercarol2_4108_0_0, &direction_npcdinnercarol2_4108_0_0, &direction_npcdinnercarol2_4108_0_0, &direction_npcdinnercarol2_4108_0_0, &direction_npcdinnercarol2_4108_0_0, &direction_npcdinnercarol2_4108_0_0, &direction_npcdinnercarol2_4108_0_0, &direction_npcdinnercarol2_4108_0_0, &direction_npcdinnercarol2_4108_0_0, &direction_npcdinnercarol2_4108_0_0, &direction_npcdinnercarol2_4108_0_0, &direction_npcdinnercarol2_4108_0_0, &direction_npcdinnercarol2_4108_0_0, &direction_npcdinnercarol2_4108_0_0};
static Animation * anim_array_npcdinnercarol2_4108[1] = {&anim_npcdinnercarol2_4108_0};
static Animations anim_npcdinnercarol2_4108 = {1, &anim_array_npcdinnercarol2_4108[0]};
static bool anim_npcdinnercarol2_4108_initialized;
class NPCDinnerCarol2_4108 : public Active
{
public:
    NPCDinnerCarol2_4108(int x, int y) : Active(x, y, NPCDinnerCarol2_4108_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_DinnerCarol 2", 17);
#endif
        this->animations = &anim_npcdinnercarol2_4108;
        if (!anim_npcdinnercarol2_4108_initialized) {
            anim_npcdinnercarol2_4108_initialized = true;
            images_npcdinnercarol2_4108_0_0[0] = get_internal_image(4467);
            images_npcdinnercarol2_4108_0_2[0] = get_internal_image(4465);
            images_npcdinnercarol2_4108_0_2[1] = get_internal_image(4465);
            images_npcdinnercarol2_4108_0_2[2] = get_internal_image(4465);
            images_npcdinnercarol2_4108_0_2[3] = get_internal_image(8086);
            images_npcdinnercarol2_4108_0_2[4] = get_internal_image(8086);
            images_npcdinnercarol2_4108_0_2[5] = get_internal_image(4467);
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
FrameObject * create_npcdinnercarol2_4108(int x, int y)
{
    return new (Active::pool.create()) NPCDinnerCarol2_4108(x, y);
}
static Image* images_npcdinnermilla_4109_0_0[10];
static Direction direction_npcdinnermilla_4109_0_0 = {0, 0, 0, 0, 1, images_npcdinnermilla_4109_0_0, 10};
static Image* images_npcdinnermilla_4109_0_1[5];
static Direction direction_npcdinnermilla_4109_0_1 = {1, 90, 90, 0, -1, images_npcdinnermilla_4109_0_1, 5};
static Image* images_npcdinnermilla_4109_0_2[9];
static Direction direction_npcdinnermilla_4109_0_2 = {2, 20, 20, 0, -1, images_npcdinnermilla_4109_0_2, 9};
static Image* images_npcdinnermilla_4109_0_4[2];
static Direction direction_npcdinnermilla_4109_0_4 = {4, 12, 12, 0, -1, images_npcdinnermilla_4109_0_4, 2};
static Animation anim_npcdinnermilla_4109_0 = {&direction_npcdinnermilla_4109_0_0, &direction_npcdinnermilla_4109_0_1, &direction_npcdinnermilla_4109_0_2, NULL, &direction_npcdinnermilla_4109_0_4, &direction_npcdinnermilla_4109_0_4, &direction_npcdinnermilla_4109_0_4, &direction_npcdinnermilla_4109_0_4, &direction_npcdinnermilla_4109_0_4, &direction_npcdinnermilla_4109_0_4, &direction_npcdinnermilla_4109_0_4, &direction_npcdinnermilla_4109_0_4, &direction_npcdinnermilla_4109_0_4, &direction_npcdinnermilla_4109_0_4, &direction_npcdinnermilla_4109_0_4, &direction_npcdinnermilla_4109_0_4, &direction_npcdinnermilla_4109_0_4, &direction_npcdinnermilla_4109_0_4, NULL, &direction_npcdinnermilla_4109_0_0, &direction_npcdinnermilla_4109_0_0, &direction_npcdinnermilla_4109_0_0, &direction_npcdinnermilla_4109_0_0, &direction_npcdinnermilla_4109_0_0, &direction_npcdinnermilla_4109_0_0, &direction_npcdinnermilla_4109_0_0, &direction_npcdinnermilla_4109_0_0, &direction_npcdinnermilla_4109_0_0, &direction_npcdinnermilla_4109_0_0, &direction_npcdinnermilla_4109_0_0, &direction_npcdinnermilla_4109_0_0, &direction_npcdinnermilla_4109_0_0};
static Animation * anim_array_npcdinnermilla_4109[1] = {&anim_npcdinnermilla_4109_0};
static Animations anim_npcdinnermilla_4109 = {1, &anim_array_npcdinnermilla_4109[0]};
static bool anim_npcdinnermilla_4109_initialized;
class NPCDinnerMilla_4109 : public Active
{
public:
    NPCDinnerMilla_4109(int x, int y) : Active(x, y, NPCDinnerMilla_4109_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_DinnerMilla", 15);
#endif
        this->animations = &anim_npcdinnermilla_4109;
        if (!anim_npcdinnermilla_4109_initialized) {
            anim_npcdinnermilla_4109_initialized = true;
            images_npcdinnermilla_4109_0_0[0] = get_internal_image(15858);
            images_npcdinnermilla_4109_0_0[1] = get_internal_image(15860);
            images_npcdinnermilla_4109_0_0[2] = get_internal_image(15861);
            images_npcdinnermilla_4109_0_0[3] = get_internal_image(15859);
            images_npcdinnermilla_4109_0_0[4] = get_internal_image(15856);
            images_npcdinnermilla_4109_0_0[5] = get_internal_image(15855);
            images_npcdinnermilla_4109_0_0[6] = get_internal_image(15862);
            images_npcdinnermilla_4109_0_0[7] = get_internal_image(15863);
            images_npcdinnermilla_4109_0_0[8] = get_internal_image(15864);
            images_npcdinnermilla_4109_0_0[9] = get_internal_image(15726);
            images_npcdinnermilla_4109_0_1[0] = get_internal_image(15150);
            images_npcdinnermilla_4109_0_1[1] = get_internal_image(15152);
            images_npcdinnermilla_4109_0_1[2] = get_internal_image(15900);
            images_npcdinnermilla_4109_0_1[3] = get_internal_image(15901);
            images_npcdinnermilla_4109_0_1[4] = get_internal_image(15902);
            images_npcdinnermilla_4109_0_2[0] = get_internal_image(15857);
            images_npcdinnermilla_4109_0_2[1] = get_internal_image(15871);
            images_npcdinnermilla_4109_0_2[2] = get_internal_image(15873);
            images_npcdinnermilla_4109_0_2[3] = get_internal_image(15872);
            images_npcdinnermilla_4109_0_2[4] = get_internal_image(15868);
            images_npcdinnermilla_4109_0_2[5] = get_internal_image(15874);
            images_npcdinnermilla_4109_0_2[6] = get_internal_image(15876);
            images_npcdinnermilla_4109_0_2[7] = get_internal_image(15877);
            images_npcdinnermilla_4109_0_2[8] = get_internal_image(15876);
            images_npcdinnermilla_4109_0_4[0] = get_internal_image(15854);
            images_npcdinnermilla_4109_0_4[1] = get_internal_image(15853);
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
FrameObject * create_npcdinnermilla_4109(int x, int y)
{
    return new (Active::pool.create()) NPCDinnerMilla_4109(x, y);
}
class Message2_4110 : public TextBlitter
{
public:
    Message2_4110(int x, int y) : TextBlitter(x, y, Message2_4110_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Message 2", 9);
#endif
        width = 362;
        height = 444;
        char_width = 8;
        char_height = 20;
        x_spacing = 0;
        y_spacing = 0;
        char_offset = 0;
        x_off = 0;
        y_off = 0;
        image = get_internal_image(5250);
        image_width = 256;
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
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
        set_text(std::string("An opportunity has fallen to our world. We now realize that the Kingdom Stone was never fading, but changing in ways that were transparent to us in our lust for power and prestige. The wind carries its eternal glow to the furthest reaches of our lands, and former enemies extend their hands to one another, acknowledging the error of their ways.\r\n\r\nCreatures both mutant and metal still ravage the landscape, and it will be some time before we can dispose of them once and for all. Perhaps most troubling of all is that Lord Brevon \226 the monster who threw our world into chaos \226 is nowhere to be found.\r\n\r\nThere is still much work to be done. We are not completely out of danger, but my people and I will rest easy tonight, knowing that the bravery and sacrifice of a select few have given our world another chance.", 815));
        has_callback = false;
        create_alterables();
    }
};
FrameObject * create_message2_4110(int x, int y)
{
    return new (TextBlitter::pool.create()) Message2_4110(x, y);
}
static Image* images_npcfallenhero_4111_0_0[9];
static Direction direction_npcfallenhero_4111_0_0 = {0, 9, 9, 0, -1, images_npcfallenhero_4111_0_0, 9};
static Image* images_npcfallenhero_4111_0_1[5];
static Direction direction_npcfallenhero_4111_0_1 = {1, 18, 18, 4, -1, images_npcfallenhero_4111_0_1, 5};
static Image* images_npcfallenhero_4111_0_2[3];
static Direction direction_npcfallenhero_4111_0_2 = {2, 50, 50, 0, 1, images_npcfallenhero_4111_0_2, 3};
static Animation anim_npcfallenhero_4111_0 = {&direction_npcfallenhero_4111_0_0, &direction_npcfallenhero_4111_0_1, &direction_npcfallenhero_4111_0_2, &direction_npcfallenhero_4111_0_2, &direction_npcfallenhero_4111_0_2, &direction_npcfallenhero_4111_0_2, &direction_npcfallenhero_4111_0_2, &direction_npcfallenhero_4111_0_2, &direction_npcfallenhero_4111_0_2, &direction_npcfallenhero_4111_0_2, &direction_npcfallenhero_4111_0_2, &direction_npcfallenhero_4111_0_2, &direction_npcfallenhero_4111_0_2, &direction_npcfallenhero_4111_0_2, &direction_npcfallenhero_4111_0_2, &direction_npcfallenhero_4111_0_2, &direction_npcfallenhero_4111_0_2, NULL, &direction_npcfallenhero_4111_0_0, &direction_npcfallenhero_4111_0_0, &direction_npcfallenhero_4111_0_0, &direction_npcfallenhero_4111_0_0, &direction_npcfallenhero_4111_0_0, &direction_npcfallenhero_4111_0_0, &direction_npcfallenhero_4111_0_0, &direction_npcfallenhero_4111_0_0, &direction_npcfallenhero_4111_0_0, &direction_npcfallenhero_4111_0_0, &direction_npcfallenhero_4111_0_0, &direction_npcfallenhero_4111_0_0, &direction_npcfallenhero_4111_0_0, &direction_npcfallenhero_4111_0_0};
static Image* images_npcfallenhero_4111_8_0[1];
static Direction direction_npcfallenhero_4111_8_0 = {0, 50, 50, 0, -1, images_npcfallenhero_4111_8_0, 1};
static Animation anim_npcfallenhero_4111_8 = {&direction_npcfallenhero_4111_8_0, &direction_npcfallenhero_4111_8_0, &direction_npcfallenhero_4111_8_0, &direction_npcfallenhero_4111_8_0, &direction_npcfallenhero_4111_8_0, &direction_npcfallenhero_4111_8_0, &direction_npcfallenhero_4111_8_0, &direction_npcfallenhero_4111_8_0, &direction_npcfallenhero_4111_8_0, &direction_npcfallenhero_4111_8_0, &direction_npcfallenhero_4111_8_0, &direction_npcfallenhero_4111_8_0, &direction_npcfallenhero_4111_8_0, &direction_npcfallenhero_4111_8_0, &direction_npcfallenhero_4111_8_0, &direction_npcfallenhero_4111_8_0, NULL, &direction_npcfallenhero_4111_8_0, &direction_npcfallenhero_4111_8_0, &direction_npcfallenhero_4111_8_0, &direction_npcfallenhero_4111_8_0, &direction_npcfallenhero_4111_8_0, &direction_npcfallenhero_4111_8_0, &direction_npcfallenhero_4111_8_0, &direction_npcfallenhero_4111_8_0, &direction_npcfallenhero_4111_8_0, &direction_npcfallenhero_4111_8_0, &direction_npcfallenhero_4111_8_0, &direction_npcfallenhero_4111_8_0, &direction_npcfallenhero_4111_8_0, &direction_npcfallenhero_4111_8_0, &direction_npcfallenhero_4111_8_0};
static Animation * anim_array_npcfallenhero_4111[9] = {&anim_npcfallenhero_4111_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_npcfallenhero_4111_8};
static Animations anim_npcfallenhero_4111 = {9, &anim_array_npcfallenhero_4111[0]};
static bool anim_npcfallenhero_4111_initialized;
class NPCFallenHero_4111 : public Active
{
public:
    NPCFallenHero_4111(int x, int y) : Active(x, y, NPCFallenHero_4111_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_FallenHero", 14);
#endif
        set_visible(false);
        this->animations = &anim_npcfallenhero_4111;
        if (!anim_npcfallenhero_4111_initialized) {
            anim_npcfallenhero_4111_initialized = true;
            images_npcfallenhero_4111_0_0[0] = get_internal_image(15641);
            images_npcfallenhero_4111_0_0[1] = get_internal_image(15641);
            images_npcfallenhero_4111_0_0[2] = get_internal_image(15687);
            images_npcfallenhero_4111_0_0[3] = get_internal_image(15648);
            images_npcfallenhero_4111_0_0[4] = get_internal_image(15688);
            images_npcfallenhero_4111_0_0[5] = get_internal_image(15688);
            images_npcfallenhero_4111_0_0[6] = get_internal_image(15688);
            images_npcfallenhero_4111_0_0[7] = get_internal_image(15688);
            images_npcfallenhero_4111_0_0[8] = get_internal_image(15647);
            images_npcfallenhero_4111_0_1[0] = get_internal_image(15641);
            images_npcfallenhero_4111_0_1[1] = get_internal_image(15723);
            images_npcfallenhero_4111_0_1[2] = get_internal_image(15723);
            images_npcfallenhero_4111_0_1[3] = get_internal_image(15723);
            images_npcfallenhero_4111_0_1[4] = get_internal_image(15641);
            images_npcfallenhero_4111_0_2[0] = get_internal_image(15724);
            images_npcfallenhero_4111_0_2[1] = get_internal_image(15645);
            images_npcfallenhero_4111_0_2[2] = get_internal_image(15718);
            images_npcfallenhero_4111_8_0[0] = get_internal_image(15643);
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
FrameObject * create_npcfallenhero_4111(int x, int y)
{
    return new (Active::pool.create()) NPCFallenHero_4111(x, y);
}
static Image* images_npcdinnercarol_4112_0_0[15];
static Direction direction_npcdinnercarol_4112_0_0 = {0, 0, 0, 0, 1, images_npcdinnercarol_4112_0_0, 15};
static Image* images_npcdinnercarol_4112_0_1[1];
static Direction direction_npcdinnercarol_4112_0_1 = {1, 50, 50, 0, -1, images_npcdinnercarol_4112_0_1, 1};
static Image* images_npcdinnercarol_4112_0_2[8];
static Direction direction_npcdinnercarol_4112_0_2 = {2, 20, 20, 0, -1, images_npcdinnercarol_4112_0_2, 8};
static Image* images_npcdinnercarol_4112_0_4[2];
static Direction direction_npcdinnercarol_4112_0_4 = {4, 11, 11, 0, -1, images_npcdinnercarol_4112_0_4, 2};
static Animation anim_npcdinnercarol_4112_0 = {&direction_npcdinnercarol_4112_0_0, &direction_npcdinnercarol_4112_0_1, &direction_npcdinnercarol_4112_0_2, NULL, &direction_npcdinnercarol_4112_0_4, &direction_npcdinnercarol_4112_0_4, &direction_npcdinnercarol_4112_0_4, &direction_npcdinnercarol_4112_0_4, &direction_npcdinnercarol_4112_0_4, &direction_npcdinnercarol_4112_0_4, &direction_npcdinnercarol_4112_0_4, &direction_npcdinnercarol_4112_0_4, &direction_npcdinnercarol_4112_0_4, &direction_npcdinnercarol_4112_0_4, &direction_npcdinnercarol_4112_0_4, &direction_npcdinnercarol_4112_0_4, &direction_npcdinnercarol_4112_0_4, &direction_npcdinnercarol_4112_0_4, NULL, &direction_npcdinnercarol_4112_0_0, &direction_npcdinnercarol_4112_0_0, &direction_npcdinnercarol_4112_0_0, &direction_npcdinnercarol_4112_0_0, &direction_npcdinnercarol_4112_0_0, &direction_npcdinnercarol_4112_0_0, &direction_npcdinnercarol_4112_0_0, &direction_npcdinnercarol_4112_0_0, &direction_npcdinnercarol_4112_0_0, &direction_npcdinnercarol_4112_0_0, &direction_npcdinnercarol_4112_0_0, &direction_npcdinnercarol_4112_0_0, &direction_npcdinnercarol_4112_0_0};
static Animation * anim_array_npcdinnercarol_4112[1] = {&anim_npcdinnercarol_4112_0};
static Animations anim_npcdinnercarol_4112 = {1, &anim_array_npcdinnercarol_4112[0]};
static bool anim_npcdinnercarol_4112_initialized;
class NPCDinnerCarol_4112 : public Active
{
public:
    NPCDinnerCarol_4112(int x, int y) : Active(x, y, NPCDinnerCarol_4112_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_DinnerCarol", 15);
#endif
        this->animations = &anim_npcdinnercarol_4112;
        if (!anim_npcdinnercarol_4112_initialized) {
            anim_npcdinnercarol_4112_initialized = true;
            images_npcdinnercarol_4112_0_0[0] = get_internal_image(15142);
            images_npcdinnercarol_4112_0_0[1] = get_internal_image(15142);
            images_npcdinnercarol_4112_0_0[2] = get_internal_image(15142);
            images_npcdinnercarol_4112_0_0[3] = get_internal_image(4469);
            images_npcdinnercarol_4112_0_0[4] = get_internal_image(4475);
            images_npcdinnercarol_4112_0_0[5] = get_internal_image(4477);
            images_npcdinnercarol_4112_0_0[6] = get_internal_image(4468);
            images_npcdinnercarol_4112_0_0[7] = get_internal_image(4479);
            images_npcdinnercarol_4112_0_0[8] = get_internal_image(4482);
            images_npcdinnercarol_4112_0_0[9] = get_internal_image(15151);
            images_npcdinnercarol_4112_0_0[10] = get_internal_image(15149);
            images_npcdinnercarol_4112_0_0[11] = get_internal_image(4472);
            images_npcdinnercarol_4112_0_0[12] = get_internal_image(4560);
            images_npcdinnercarol_4112_0_0[13] = get_internal_image(15145);
            images_npcdinnercarol_4112_0_0[14] = get_internal_image(15147);
            images_npcdinnercarol_4112_0_1[0] = get_internal_image(7866);
            images_npcdinnercarol_4112_0_2[0] = get_internal_image(4474);
            images_npcdinnercarol_4112_0_2[1] = get_internal_image(3428);
            images_npcdinnercarol_4112_0_2[2] = get_internal_image(4973);
            images_npcdinnercarol_4112_0_2[3] = get_internal_image(7857);
            images_npcdinnercarol_4112_0_2[4] = get_internal_image(7857);
            images_npcdinnercarol_4112_0_2[5] = get_internal_image(11409);
            images_npcdinnercarol_4112_0_2[6] = get_internal_image(7856);
            images_npcdinnercarol_4112_0_2[7] = get_internal_image(4474);
            images_npcdinnercarol_4112_0_4[0] = get_internal_image(15148);
            images_npcdinnercarol_4112_0_4[1] = get_internal_image(15885);
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
FrameObject * create_npcdinnercarol_4112(int x, int y)
{
    return new (Active::pool.create()) NPCDinnerCarol_4112(x, y);
}
static Image* images_npcdinnertorque_4113_0_0[6];
static Direction direction_npcdinnertorque_4113_0_0 = {0, 0, 0, 0, 1, images_npcdinnertorque_4113_0_0, 6};
static Animation anim_npcdinnertorque_4113_0 = {&direction_npcdinnertorque_4113_0_0, &direction_npcdinnertorque_4113_0_0, &direction_npcdinnertorque_4113_0_0, &direction_npcdinnertorque_4113_0_0, &direction_npcdinnertorque_4113_0_0, &direction_npcdinnertorque_4113_0_0, &direction_npcdinnertorque_4113_0_0, &direction_npcdinnertorque_4113_0_0, &direction_npcdinnertorque_4113_0_0, &direction_npcdinnertorque_4113_0_0, &direction_npcdinnertorque_4113_0_0, &direction_npcdinnertorque_4113_0_0, &direction_npcdinnertorque_4113_0_0, &direction_npcdinnertorque_4113_0_0, &direction_npcdinnertorque_4113_0_0, &direction_npcdinnertorque_4113_0_0, NULL, &direction_npcdinnertorque_4113_0_0, &direction_npcdinnertorque_4113_0_0, &direction_npcdinnertorque_4113_0_0, &direction_npcdinnertorque_4113_0_0, &direction_npcdinnertorque_4113_0_0, &direction_npcdinnertorque_4113_0_0, &direction_npcdinnertorque_4113_0_0, &direction_npcdinnertorque_4113_0_0, &direction_npcdinnertorque_4113_0_0, &direction_npcdinnertorque_4113_0_0, &direction_npcdinnertorque_4113_0_0, &direction_npcdinnertorque_4113_0_0, &direction_npcdinnertorque_4113_0_0, &direction_npcdinnertorque_4113_0_0, &direction_npcdinnertorque_4113_0_0};
static Animation * anim_array_npcdinnertorque_4113[1] = {&anim_npcdinnertorque_4113_0};
static Animations anim_npcdinnertorque_4113 = {1, &anim_array_npcdinnertorque_4113[0]};
static bool anim_npcdinnertorque_4113_initialized;
class NPCDinnerTorque_4113 : public Active
{
public:
    NPCDinnerTorque_4113(int x, int y) : Active(x, y, NPCDinnerTorque_4113_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_DinnerTorque", 16);
#endif
        this->animations = &anim_npcdinnertorque_4113;
        if (!anim_npcdinnertorque_4113_initialized) {
            anim_npcdinnertorque_4113_initialized = true;
            images_npcdinnertorque_4113_0_0[0] = get_internal_image(15629);
            images_npcdinnertorque_4113_0_0[1] = get_internal_image(1095);
            images_npcdinnertorque_4113_0_0[2] = get_internal_image(4968);
            images_npcdinnertorque_4113_0_0[3] = get_internal_image(4976);
            images_npcdinnertorque_4113_0_0[4] = get_internal_image(4998);
            images_npcdinnertorque_4113_0_0[5] = get_internal_image(7122);
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
FrameObject * create_npcdinnertorque_4113(int x, int y)
{
    return new (Active::pool.create()) NPCDinnerTorque_4113(x, y);
}
static Image* images_placeholdercharactertail_4114_0_0[8];
static Direction direction_placeholdercharactertail_4114_0_0 = {0, 10, 10, 0, -1, images_placeholdercharactertail_4114_0_0, 8};
static Animation anim_placeholdercharactertail_4114_0 = {&direction_placeholdercharactertail_4114_0_0, &direction_placeholdercharactertail_4114_0_0, &direction_placeholdercharactertail_4114_0_0, &direction_placeholdercharactertail_4114_0_0, &direction_placeholdercharactertail_4114_0_0, &direction_placeholdercharactertail_4114_0_0, &direction_placeholdercharactertail_4114_0_0, &direction_placeholdercharactertail_4114_0_0, &direction_placeholdercharactertail_4114_0_0, &direction_placeholdercharactertail_4114_0_0, &direction_placeholdercharactertail_4114_0_0, &direction_placeholdercharactertail_4114_0_0, &direction_placeholdercharactertail_4114_0_0, &direction_placeholdercharactertail_4114_0_0, &direction_placeholdercharactertail_4114_0_0, &direction_placeholdercharactertail_4114_0_0, NULL, &direction_placeholdercharactertail_4114_0_0, &direction_placeholdercharactertail_4114_0_0, &direction_placeholdercharactertail_4114_0_0, &direction_placeholdercharactertail_4114_0_0, &direction_placeholdercharactertail_4114_0_0, &direction_placeholdercharactertail_4114_0_0, &direction_placeholdercharactertail_4114_0_0, &direction_placeholdercharactertail_4114_0_0, &direction_placeholdercharactertail_4114_0_0, &direction_placeholdercharactertail_4114_0_0, &direction_placeholdercharactertail_4114_0_0, &direction_placeholdercharactertail_4114_0_0, &direction_placeholdercharactertail_4114_0_0, &direction_placeholdercharactertail_4114_0_0, &direction_placeholdercharactertail_4114_0_0};
static Animation * anim_array_placeholdercharactertail_4114[1] = {&anim_placeholdercharactertail_4114_0};
static Animations anim_placeholdercharactertail_4114 = {1, &anim_array_placeholdercharactertail_4114[0]};
static bool anim_placeholdercharactertail_4114_initialized;
class PlaceholderCharacterTail_4114 : public Active
{
public:
    PlaceholderCharacterTail_4114(int x, int y) : Active(x, y, PlaceholderCharacterTail_4114_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("PlaceholderCharacter_Tail", 25);
#endif
        this->animations = &anim_placeholdercharactertail_4114;
        if (!anim_placeholdercharactertail_4114_initialized) {
            anim_placeholdercharactertail_4114_initialized = true;
            images_placeholdercharactertail_4114_0_0[0] = get_internal_image(7461);
            images_placeholdercharactertail_4114_0_0[1] = get_internal_image(7464);
            images_placeholdercharactertail_4114_0_0[2] = get_internal_image(7465);
            images_placeholdercharactertail_4114_0_0[3] = get_internal_image(7466);
            images_placeholdercharactertail_4114_0_0[4] = get_internal_image(7467);
            images_placeholdercharactertail_4114_0_0[5] = get_internal_image(7468);
            images_placeholdercharactertail_4114_0_0[6] = get_internal_image(7469);
            images_placeholdercharactertail_4114_0_0[7] = get_internal_image(7470);
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
FrameObject * create_placeholdercharactertail_4114(int x, int y)
{
    return new (Active::pool.create()) PlaceholderCharacterTail_4114(x, y);
}
