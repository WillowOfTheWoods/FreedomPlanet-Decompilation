#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

class DialogData_3915 : public Text
{
public:
    DialogData_3915(int x, int y) : Text(x, y, DialogData_3915_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Dialog Data", 11);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("03 06 mi_01_01 Guess what I got, Mr. Stumpy! The secret ingredient for my SUPER feather potion!", 95));
        add_line(std::string("03 09 mi_01_02 I'll fly real high in the clouds so I can find my mommy and daddy, and we'll all live happily ever after,", 120));
        add_line(std::string("03 xx xx_xx_xx like in the stories!", 35));
        add_line(std::string("03 15 mi_01_03 Doesn't that sound great\?!", 41));
        add_line(std::string("03 03 mi_01_04 You're so funny when you don't say anything!", 59));
        add_line(std::string("03 27 mi_01_06 What's going on\?", 31));
        add_line(std::string("03 00 mi_01_08 A dragon\?", 24));
        add_line(std::string("03 03 mi_01_09 I always wanted to meet a dragon!", 48));
        add_line(std::string("01 18 li_03_01 General Gong!", 28));
        add_line(std::string("07 06 go_01_01 You two again\?", 29));
        add_line(std::string("02 15 ca_03_01 Nice to see you too.", 35));
        add_line(std::string("01 21 li_03_02 We have to talk to you. The Kingdom Stone is in danger!", 70));
        add_line(std::string("07 03 go_01_02 Don't be ridiculous! Nothing gets past MY nose!", 62));
        add_line(std::string("02 15 ca_03_02 Will you just listen for a minute\?!", 50));
        add_line(std::string("08 03 ne_01_01 What is the meaning of this\?", 43));
        add_line(std::string("01 36 li_03_03 We mean no disrespect. We're just trying to-", 59));
        add_line(std::string("08 03 ne_01_02 You heard what the General said. There is nothing to worry about.", 80));
        add_line(std::string("02 00 ca_03_03 Then why are you here\?", 37));
        add_line(std::string("07 06 go_01_03 She's protecting our guests this evening. Can't be too careful with all these robots runnin' around.", 115));
        add_line(std::string("08 09 ne_01_03 If you're here to recharge, there's a line over there. Otherwise I suggest you let us do our jobs.", 113));
        add_line(std::string("08 09 ne_01_04 Don't make me repeat myself.", 43));
        add_line(std::string("02 21 ca_03_05 Well, they sound like they know what they're doin'. Why don't we just charge up and go home\? Whaddya say\?", 120));
        add_line(std::string("01 39 li_03_05 I don't know. I feel like they're hiding something from us...", 76));
        add_line(std::string("01 24 li_03_06 Follow me!", 25));
        add_line(std::string("01 00 li_03_07 We're gonna steal the Kingdom Stone before they do!", 66));
        add_line(std::string("02 00 ca_03_07 Whoa, really\?", 28));
        add_line(std::string("01 00 li_03_08 Well, we'll give it right back. Come on!", 55));
        add_line(std::string("02 30 ca_06_01 Wha... How did I...\?", 35));
        add_line(std::string("01 09 li_05_01 CAROL!!", 22));
        add_line(std::string("01 09 li_05_02 CAROOOL!!", 24));
        add_line(std::string("02 03 ca_06_02 I'm over here!", 29));
        add_line(std::string("02 33 ca_06_03 You made it out!", 31));
        add_line(std::string("01 18 li_05_03 Your ear!", 24));
        add_line(std::string("02 21 ca_06_04 It's just a scratch. I'm fine.", 45));
        add_line(std::string("01 00 li_05_04 Well, we better find Torque and get home so I can patch it up.", 77));
        add_line(std::string("02 00 ca_06_05 Well this stinks. How are we gonna get more money\?", 65));
        add_line(std::string("01 00 li_05_05 We'll think of something. What I really want to know is why Spade is working for Mayor Zao.", 106));
        add_line(std::string("02 24 ca_06_06 Buttloads of cash\?", 33));
        add_line(std::string("01 39 li_05_06 Well, Zao might know something about the assassination... but that still doesn't explain what he needs the", 121));
        add_line(std::string("01 39 xx_xx_xx stone for.", 25));
        add_line(std::string("01 39 li_05_07 I have a bad feeling about all this...", 53));
        add_line(std::string("01 00 li_05_08 What\?", 20));
        add_line(std::string("02 36 ca_06_07 Someone's following us...", 40));
        add_line(std::string("01 00 li_05_09 What do you mean\?", 32));
        add_line(std::string("02 00 ca_06_08 Wait... Someone with a shield pulled me out of the cave. It must'a been her.", 91));
        add_line(std::string("02 09 ca_06_09 Eheh... Sorry about pouncing on ya.", 50));
        add_line(std::string("02 06 ca_06_10 Hello\? I'm sorry\?", 32));
        add_line(std::string("01 45 li_05_10 Don't be scared. I promise we'll keep you safe.", 62));
        add_line(std::string("03 21 mi_02_01 Are you a dragon\?", 32));
        add_line(std::string("01 45 li_05_11 Yeah!", 20));
        add_line(std::string("03 21 mi_02_02 Can... can I touch your hair\?", 44));
        add_line(std::string("01 48 li_05_12 Huh\?", 19));
        add_line(std::string("03 12 mi_02_03 Oh, okay, nevermind...", 37));
        add_line(std::string("01 48 li_05_13 No, no, it's okay. I was just surprised, is all. Go ahead.", 73));
        add_line(std::string("01 51 li_05_14 I won't hurt you.", 32));
        add_line(std::string("03 30 mi_02_04 It's like a rope!", 32));
        add_line(std::string("01 51 li_05_15 Yeah.", 20));
        add_line(std::string("03 03 mi_02_05 Maybe we can be friends!", 39));
        add_line(std::string("01 27 li_05_16 Sure!", 20));
        add_line(std::string("03 03 mi_02_06 I'm Milla! What's your name\?", 43));
        add_line(std::string("01 27 li_05_17 Lilac.", 21));
        add_line(std::string("03 18 mi_02_07 That's a pretty name.", 36));
        add_line(std::string("01 27 li_05_18 Thanks. This is my friend Carol.", 47));
        add_line(std::string("03 24 mi_02_08 Hi...", 20));
        add_line(std::string("02 21 ca_06_11 So, thanks for saving me back there... but what are you doing all the way out here\?", 98));
        add_line(std::string("03 00 mi_02_09 I was playing over here, and then those people came. They're not very nice.", 90));
        add_line(std::string("02 00 ca_06_12 I'll say...", 26));
        add_line(std::string("01 27 li_05_19 You know what\? You can come to our secret hideout!", 65));
        add_line(std::string("03 33 mi_02_10 Really\?", 22));
        add_line(std::string("01 27 li_05_20 Yeah! Nobody knows where it is except us.", 56));
        add_line(std::string("03 03 mi_02_11 That sounds like fun!", 36));
        add_line(std::string("01 09 li_04_06 Carol! Where are you\?!", 37));
        add_line(std::string("02 03 ca_05_01 I can't break it!", 32));
        add_line(std::string("01 09 li_04_07 Don't worry about me! Keep going!", 48));
        add_line(std::string("02 03 ca_05_02 But I-", 21));
        add_line(std::string("01 12 li_04_08 DO IT!", 21));
        add_line(std::string("07 18 go_01_04 It's an ambush!", 30));
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
FrameObject * create_dialogdata_3915(int x, int y)
{
    return new (Text::pool.create()) DialogData_3915(x, y);
}
static Image* images_basementlight_3916_0_0[1];
static Direction direction_basementlight_3916_0_0 = {0, 50, 50, 0, 1, images_basementlight_3916_0_0, 1};
static Animation anim_basementlight_3916_0 = {&direction_basementlight_3916_0_0, &direction_basementlight_3916_0_0, &direction_basementlight_3916_0_0, &direction_basementlight_3916_0_0, &direction_basementlight_3916_0_0, &direction_basementlight_3916_0_0, &direction_basementlight_3916_0_0, &direction_basementlight_3916_0_0, &direction_basementlight_3916_0_0, &direction_basementlight_3916_0_0, &direction_basementlight_3916_0_0, &direction_basementlight_3916_0_0, &direction_basementlight_3916_0_0, &direction_basementlight_3916_0_0, &direction_basementlight_3916_0_0, &direction_basementlight_3916_0_0, NULL, &direction_basementlight_3916_0_0, &direction_basementlight_3916_0_0, &direction_basementlight_3916_0_0, &direction_basementlight_3916_0_0, &direction_basementlight_3916_0_0, &direction_basementlight_3916_0_0, &direction_basementlight_3916_0_0, &direction_basementlight_3916_0_0, &direction_basementlight_3916_0_0, &direction_basementlight_3916_0_0, &direction_basementlight_3916_0_0, &direction_basementlight_3916_0_0, &direction_basementlight_3916_0_0, &direction_basementlight_3916_0_0, &direction_basementlight_3916_0_0};
static Animation * anim_array_basementlight_3916[1] = {&anim_basementlight_3916_0};
static Animations anim_basementlight_3916 = {1, &anim_array_basementlight_3916[0]};
static bool anim_basementlight_3916_initialized;
class BasementLight_3916 : public Active
{
public:
    BasementLight_3916(int x, int y) : Active(x, y, BasementLight_3916_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Basement_Light", 14);
#endif
        set_visible(false);
        this->animations = &anim_basementlight_3916;
        if (!anim_basementlight_3916_initialized) {
            anim_basementlight_3916_initialized = true;
            images_basementlight_3916_0_0[0] = get_internal_image(5188);
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
FrameObject * create_basementlight_3916(int x, int y)
{
    return new (Active::pool.create()) BasementLight_3916(x, y);
}
class LevelParallaxPiece0_3917 : public SystemBox
{
public:
    LevelParallaxPiece0_3917(int x, int y) : SystemBox(x, y, LevelParallaxPiece0_3917_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece0", 21);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 240;
        type = PATTERN_IMAGE;
        image = get_internal_image(14647);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece0_3917(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece0_3917(x, y);
}
class LevelParallaxPiece1_3918 : public SystemBox
{
public:
    LevelParallaxPiece1_3918(int x, int y) : SystemBox(x, y, LevelParallaxPiece1_3918_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece1", 21);
#endif
        flags |= BACKGROUND;
        width = 480;
        height = 72;
        type = PATTERN_IMAGE;
        image = get_internal_image(6437);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece1_3918(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece1_3918(x, y);
}
class LevelParallaxPiece2_3919 : public SystemBox
{
public:
    LevelParallaxPiece2_3919(int x, int y) : SystemBox(x, y, LevelParallaxPiece2_3919_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 2", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 180;
        type = PATTERN_IMAGE;
        image = get_internal_image(10992);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece2_3919(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece2_3919(x, y);
}
class LevelParallaxPiece5_3920 : public SystemBox
{
public:
    LevelParallaxPiece5_3920(int x, int y) : SystemBox(x, y, LevelParallaxPiece5_3920_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 5", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 320;
        type = PATTERN_IMAGE;
        image = get_internal_image(12082);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece5_3920(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece5_3920(x, y);
}
class LevelParallaxPiece6_3921 : public SystemBox
{
public:
    LevelParallaxPiece6_3921(int x, int y) : SystemBox(x, y, LevelParallaxPiece6_3921_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 6", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 180;
        type = PATTERN_IMAGE;
        image = get_internal_image(13716);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece6_3921(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece6_3921(x, y);
}
class RYGrass_3922 : public Backdrop
{
public:
    RYGrass_3922(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RY_Grass", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10994);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rygrass_3922(int x, int y)
{
    return new (Backdrop::pool.create()) RYGrass_3922(x, y);
}
class RYBlossomTree1_3923 : public Backdrop
{
public:
    RYBlossomTree1_3923(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RY_BlossomTree 1", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11862);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_ryblossomtree1_3923(int x, int y)
{
    return new (Backdrop::pool.create()) RYBlossomTree1_3923(x, y);
}
class RYSoil1_3924 : public Backdrop
{
public:
    RYSoil1_3924(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RY_Soil 1", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14622);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rysoil1_3924(int x, int y)
{
    return new (Backdrop::pool.create()) RYSoil1_3924(x, y);
}
class RYSoil8_3925 : public Backdrop
{
public:
    RYSoil8_3925(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RY_Soil 8", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14642);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rysoil8_3925(int x, int y)
{
    return new (Backdrop::pool.create()) RYSoil8_3925(x, y);
}
class RYSoil2_3926 : public Backdrop
{
public:
    RYSoil2_3926(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RY_Soil 2", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14635);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rysoil2_3926(int x, int y)
{
    return new (Backdrop::pool.create()) RYSoil2_3926(x, y);
}
class RYSoil3_3927 : public Backdrop
{
public:
    RYSoil3_3927(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RY_Soil 3", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14636);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rysoil3_3927(int x, int y)
{
    return new (Backdrop::pool.create()) RYSoil3_3927(x, y);
}
class RYSoil4_3928 : public Backdrop
{
public:
    RYSoil4_3928(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RY_Soil 4", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14640);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rysoil4_3928(int x, int y)
{
    return new (Backdrop::pool.create()) RYSoil4_3928(x, y);
}
class RYSoil7_3929 : public Backdrop
{
public:
    RYSoil7_3929(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RY_Soil 7", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14641);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rysoil7_3929(int x, int y)
{
    return new (Backdrop::pool.create()) RYSoil7_3929(x, y);
}
class RYSoil5_3930 : public Backdrop
{
public:
    RYSoil5_3930(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RY_Soil 5", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14637);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rysoil5_3930(int x, int y)
{
    return new (Backdrop::pool.create()) RYSoil5_3930(x, y);
}
class RYSoil6_3931 : public Backdrop
{
public:
    RYSoil6_3931(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RY_Soil 6", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14638);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rysoil6_3931(int x, int y)
{
    return new (Backdrop::pool.create()) RYSoil6_3931(x, y);
}
class RYSoil9_3932 : public Backdrop
{
public:
    RYSoil9_3932(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RY_Soil 9", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14634);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rysoil9_3932(int x, int y)
{
    return new (Backdrop::pool.create()) RYSoil9_3932(x, y);
}
class RYSoil11_3933 : public Backdrop
{
public:
    RYSoil11_3933(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RY_Soil 11", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14633);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rysoil11_3933(int x, int y)
{
    return new (Backdrop::pool.create()) RYSoil11_3933(x, y);
}
class RYSoil10_3934 : public Backdrop
{
public:
    RYSoil10_3934(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RY_Soil 10", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14643);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rysoil10_3934(int x, int y)
{
    return new (Backdrop::pool.create()) RYSoil10_3934(x, y);
}
class RYSoil12_3935 : public Backdrop
{
public:
    RYSoil12_3935(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RY_Soil 12", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2718);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rysoil12_3935(int x, int y)
{
    return new (Backdrop::pool.create()) RYSoil12_3935(x, y);
}
class RYWood1_3936 : public Backdrop
{
public:
    RYWood1_3936(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RY_Wood 1", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14639);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rywood1_3936(int x, int y)
{
    return new (Backdrop::pool.create()) RYWood1_3936(x, y);
}
class Backdrop3_3937 : public Backdrop
{
public:
    Backdrop3_3937(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 3", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11894);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop3_3937(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop3_3937(x, y);
}
class RYWood2_3938 : public Backdrop
{
public:
    RYWood2_3938(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RY_Wood 2", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1026);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rywood2_3938(int x, int y)
{
    return new (Backdrop::pool.create()) RYWood2_3938(x, y);
}
static Image* images_enemymallet_3939_0_0[1];
static Direction direction_enemymallet_3939_0_0 = {0, 50, 50, 0, 1, images_enemymallet_3939_0_0, 1};
static Animation anim_enemymallet_3939_0 = {&direction_enemymallet_3939_0_0, &direction_enemymallet_3939_0_0, &direction_enemymallet_3939_0_0, &direction_enemymallet_3939_0_0, &direction_enemymallet_3939_0_0, &direction_enemymallet_3939_0_0, &direction_enemymallet_3939_0_0, &direction_enemymallet_3939_0_0, &direction_enemymallet_3939_0_0, &direction_enemymallet_3939_0_0, &direction_enemymallet_3939_0_0, &direction_enemymallet_3939_0_0, &direction_enemymallet_3939_0_0, &direction_enemymallet_3939_0_0, &direction_enemymallet_3939_0_0, &direction_enemymallet_3939_0_0, NULL, &direction_enemymallet_3939_0_0, &direction_enemymallet_3939_0_0, &direction_enemymallet_3939_0_0, &direction_enemymallet_3939_0_0, &direction_enemymallet_3939_0_0, &direction_enemymallet_3939_0_0, &direction_enemymallet_3939_0_0, &direction_enemymallet_3939_0_0, &direction_enemymallet_3939_0_0, &direction_enemymallet_3939_0_0, &direction_enemymallet_3939_0_0, &direction_enemymallet_3939_0_0, &direction_enemymallet_3939_0_0, &direction_enemymallet_3939_0_0, &direction_enemymallet_3939_0_0};
static Animation * anim_array_enemymallet_3939[1] = {&anim_enemymallet_3939_0};
static Animations anim_enemymallet_3939 = {1, &anim_array_enemymallet_3939[0]};
static bool anim_enemymallet_3939_initialized;
class EnemyMallet_3939 : public Active
{
public:
    EnemyMallet_3939(int x, int y) : Active(x, y, EnemyMallet_3939_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_Mallet", 12);
#endif
        this->animations = &anim_enemymallet_3939;
        if (!anim_enemymallet_3939_initialized) {
            anim_enemymallet_3939_initialized = true;
            images_enemymallet_3939_0_0[0] = get_internal_image(12587);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 15);
        alterables->values.set(4, -1);
    }
};
FrameObject * create_enemymallet_3939(int x, int y)
{
    return new (Active::pool.create()) EnemyMallet_3939(x, y);
}
static Image* images_npcplane_3940_0_0[2];
static Direction direction_npcplane_3940_0_0 = {0, 0, 0, 0, 1, images_npcplane_3940_0_0, 2};
static Image* images_npcplane_3940_0_1[4];
static Direction direction_npcplane_3940_0_1 = {1, 100, 100, 0, -1, images_npcplane_3940_0_1, 4};
static Animation anim_npcplane_3940_0 = {&direction_npcplane_3940_0_0, &direction_npcplane_3940_0_1, &direction_npcplane_3940_0_1, &direction_npcplane_3940_0_1, &direction_npcplane_3940_0_1, &direction_npcplane_3940_0_1, &direction_npcplane_3940_0_1, &direction_npcplane_3940_0_1, &direction_npcplane_3940_0_1, &direction_npcplane_3940_0_1, &direction_npcplane_3940_0_1, &direction_npcplane_3940_0_1, &direction_npcplane_3940_0_1, &direction_npcplane_3940_0_1, &direction_npcplane_3940_0_1, &direction_npcplane_3940_0_1, &direction_npcplane_3940_0_1, &direction_npcplane_3940_0_0, &direction_npcplane_3940_0_0, &direction_npcplane_3940_0_0, &direction_npcplane_3940_0_0, &direction_npcplane_3940_0_0, &direction_npcplane_3940_0_0, &direction_npcplane_3940_0_0, &direction_npcplane_3940_0_0, &direction_npcplane_3940_0_0, &direction_npcplane_3940_0_0, &direction_npcplane_3940_0_0, &direction_npcplane_3940_0_0, &direction_npcplane_3940_0_0, &direction_npcplane_3940_0_0, &direction_npcplane_3940_0_0};
static Animation * anim_array_npcplane_3940[1] = {&anim_npcplane_3940_0};
static Animations anim_npcplane_3940 = {1, &anim_array_npcplane_3940[0]};
static bool anim_npcplane_3940_initialized;
class NPCPlane_3940 : public Active
{
public:
    NPCPlane_3940(int x, int y) : Active(x, y, NPCPlane_3940_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_Plane", 9);
#endif
        this->animations = &anim_npcplane_3940;
        if (!anim_npcplane_3940_initialized) {
            anim_npcplane_3940_initialized = true;
            images_npcplane_3940_0_0[0] = get_internal_image(502);
            images_npcplane_3940_0_0[1] = get_internal_image(3332);
            images_npcplane_3940_0_1[0] = get_internal_image(3038);
            images_npcplane_3940_0_1[1] = get_internal_image(525);
            images_npcplane_3940_0_1[2] = get_internal_image(540);
            images_npcplane_3940_0_1[3] = get_internal_image(3342);
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
FrameObject * create_npcplane_3940(int x, int y)
{
    return new (Active::pool.create()) NPCPlane_3940(x, y);
}
static Image* images_npcstofficer_3941_0_0[1];
static Direction direction_npcstofficer_3941_0_0 = {0, 50, 50, 0, 1, images_npcstofficer_3941_0_0, 1};
static Image* images_npcstofficer_3941_0_16[1];
static Direction direction_npcstofficer_3941_0_16 = {16, 50, 50, 0, 1, images_npcstofficer_3941_0_16, 1};
static Animation anim_npcstofficer_3941_0 = {&direction_npcstofficer_3941_0_0, &direction_npcstofficer_3941_0_0, &direction_npcstofficer_3941_0_0, &direction_npcstofficer_3941_0_0, &direction_npcstofficer_3941_0_0, &direction_npcstofficer_3941_0_0, &direction_npcstofficer_3941_0_0, &direction_npcstofficer_3941_0_0, NULL, &direction_npcstofficer_3941_0_16, &direction_npcstofficer_3941_0_16, &direction_npcstofficer_3941_0_16, &direction_npcstofficer_3941_0_16, &direction_npcstofficer_3941_0_16, &direction_npcstofficer_3941_0_16, &direction_npcstofficer_3941_0_16, &direction_npcstofficer_3941_0_16, &direction_npcstofficer_3941_0_16, &direction_npcstofficer_3941_0_16, &direction_npcstofficer_3941_0_16, &direction_npcstofficer_3941_0_16, &direction_npcstofficer_3941_0_16, &direction_npcstofficer_3941_0_16, &direction_npcstofficer_3941_0_16, NULL, &direction_npcstofficer_3941_0_0, &direction_npcstofficer_3941_0_0, &direction_npcstofficer_3941_0_0, &direction_npcstofficer_3941_0_0, &direction_npcstofficer_3941_0_0, &direction_npcstofficer_3941_0_0, &direction_npcstofficer_3941_0_0};
static Image* images_npcstofficer_3941_5_0[1];
static Direction direction_npcstofficer_3941_5_0 = {0, 50, 50, 0, -1, images_npcstofficer_3941_5_0, 1};
static Image* images_npcstofficer_3941_5_16[1];
static Direction direction_npcstofficer_3941_5_16 = {16, 50, 50, 0, -1, images_npcstofficer_3941_5_16, 1};
static Animation anim_npcstofficer_3941_5 = {&direction_npcstofficer_3941_5_0, &direction_npcstofficer_3941_5_0, &direction_npcstofficer_3941_5_0, &direction_npcstofficer_3941_5_0, &direction_npcstofficer_3941_5_0, &direction_npcstofficer_3941_5_0, &direction_npcstofficer_3941_5_0, &direction_npcstofficer_3941_5_0, NULL, &direction_npcstofficer_3941_5_16, &direction_npcstofficer_3941_5_16, &direction_npcstofficer_3941_5_16, &direction_npcstofficer_3941_5_16, &direction_npcstofficer_3941_5_16, &direction_npcstofficer_3941_5_16, &direction_npcstofficer_3941_5_16, &direction_npcstofficer_3941_5_16, &direction_npcstofficer_3941_5_16, &direction_npcstofficer_3941_5_16, &direction_npcstofficer_3941_5_16, &direction_npcstofficer_3941_5_16, &direction_npcstofficer_3941_5_16, &direction_npcstofficer_3941_5_16, &direction_npcstofficer_3941_5_16, NULL, &direction_npcstofficer_3941_5_0, &direction_npcstofficer_3941_5_0, &direction_npcstofficer_3941_5_0, &direction_npcstofficer_3941_5_0, &direction_npcstofficer_3941_5_0, &direction_npcstofficer_3941_5_0, &direction_npcstofficer_3941_5_0};
static Animation * anim_array_npcstofficer_3941[6] = {&anim_npcstofficer_3941_0, NULL, NULL, NULL, NULL, &anim_npcstofficer_3941_5};
static Animations anim_npcstofficer_3941 = {6, &anim_array_npcstofficer_3941[0]};
static bool anim_npcstofficer_3941_initialized;
class NPCSTOfficer_3941 : public Active
{
public:
    NPCSTOfficer_3941(int x, int y) : Active(x, y, NPCSTOfficer_3941_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_STOfficer", 13);
#endif
        this->animations = &anim_npcstofficer_3941;
        if (!anim_npcstofficer_3941_initialized) {
            anim_npcstofficer_3941_initialized = true;
            images_npcstofficer_3941_0_0[0] = get_internal_image(16050);
            images_npcstofficer_3941_0_16[0] = get_internal_image(16054);
            images_npcstofficer_3941_5_0[0] = get_internal_image(16053);
            images_npcstofficer_3941_5_16[0] = get_internal_image(7529);
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
FrameObject * create_npcstofficer_3941(int x, int y)
{
    return new (Active::pool.create()) NPCSTOfficer_3941(x, y);
}
static Image* images_enemyhoppermissile_3942_0_0[4];
static Direction direction_enemyhoppermissile_3942_0_0 = {0, 25, 25, 0, -1, images_enemyhoppermissile_3942_0_0, 4};
static Animation anim_enemyhoppermissile_3942_0 = {&direction_enemyhoppermissile_3942_0_0, &direction_enemyhoppermissile_3942_0_0, &direction_enemyhoppermissile_3942_0_0, &direction_enemyhoppermissile_3942_0_0, &direction_enemyhoppermissile_3942_0_0, &direction_enemyhoppermissile_3942_0_0, &direction_enemyhoppermissile_3942_0_0, &direction_enemyhoppermissile_3942_0_0, &direction_enemyhoppermissile_3942_0_0, &direction_enemyhoppermissile_3942_0_0, &direction_enemyhoppermissile_3942_0_0, &direction_enemyhoppermissile_3942_0_0, &direction_enemyhoppermissile_3942_0_0, &direction_enemyhoppermissile_3942_0_0, &direction_enemyhoppermissile_3942_0_0, &direction_enemyhoppermissile_3942_0_0, NULL, &direction_enemyhoppermissile_3942_0_0, &direction_enemyhoppermissile_3942_0_0, &direction_enemyhoppermissile_3942_0_0, &direction_enemyhoppermissile_3942_0_0, &direction_enemyhoppermissile_3942_0_0, &direction_enemyhoppermissile_3942_0_0, &direction_enemyhoppermissile_3942_0_0, &direction_enemyhoppermissile_3942_0_0, &direction_enemyhoppermissile_3942_0_0, &direction_enemyhoppermissile_3942_0_0, &direction_enemyhoppermissile_3942_0_0, &direction_enemyhoppermissile_3942_0_0, &direction_enemyhoppermissile_3942_0_0, &direction_enemyhoppermissile_3942_0_0, &direction_enemyhoppermissile_3942_0_0};
static Animation * anim_array_enemyhoppermissile_3942[1] = {&anim_enemyhoppermissile_3942_0};
static Animations anim_enemyhoppermissile_3942 = {1, &anim_array_enemyhoppermissile_3942[0]};
static bool anim_enemyhoppermissile_3942_initialized;
class EnemyHopperMissile_3942 : public Active
{
public:
    EnemyHopperMissile_3942(int x, int y) : Active(x, y, EnemyHopperMissile_3942_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_HopperMissile", 19);
#endif
        this->animations = &anim_enemyhoppermissile_3942;
        if (!anim_enemyhoppermissile_3942_initialized) {
            anim_enemyhoppermissile_3942_initialized = true;
            images_enemyhoppermissile_3942_0_0[0] = get_internal_image(2513);
            images_enemyhoppermissile_3942_0_0[1] = get_internal_image(2435);
            images_enemyhoppermissile_3942_0_0[2] = get_internal_image(5175);
            images_enemyhoppermissile_3942_0_0[3] = get_internal_image(3320);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 10);
        alterables->values.set(7, 32);
    }
};
FrameObject * create_enemyhoppermissile_3942(int x, int y)
{
    return new (Active::pool.create()) EnemyHopperMissile_3942(x, y);
}
class DialogData_3943 : public Text
{
public:
    DialogData_3943(int x, int y) : Text(x, y, DialogData_3943_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Dialog Data", 11);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("05 18 to_05_01 According to the radar, we seem to be at the right location...", 77));
        add_line(std::string("02 36 ca_10_01 Umm... I think it's a little off.", 48));
        add_line(std::string("03 09 mi_06_01 This way!", 24));
        add_line(std::string("05 00 to_05_02 She's got a good nose.", 37));
        add_line(std::string("01 27 li_09_01 I'll say.", 24));
        add_line(std::string("07 15 go_03_01 Allow me to properly introduce myself. I am General Gong of Shang Tu.", 84));
        add_line(std::string("01 36 li_09_02 It's an honor, General.", 38));
        add_line(std::string("07 00 go_03_02 The Royal Magister has a proposal. We'd like you to help us get the Stone back.", 94));
        add_line(std::string("07 00 go_03_03 It's in the greedy little hands of Mayor Zao, in our neighbor city Shang Mu.", 91));
        add_line(std::string("02 36 ca_10_02 Why do you need our help\? Don't you have soldiers and spies and stuff\?", 85));
        add_line(std::string("07 00 go_03_04 We wanna try and resolve this thing peacefully if we can, so we're sending a neutral party to negotiate.", 119));
        add_line(std::string("07 00 go_03_05 Given the, uh, current state of affairs in Shuigang, they're out of the picture.", 95));
        add_line(std::string("05 00 to_05_03 So you need us to fly to Shang Mu and convince Zao to give the stone back.", 89));
        add_line(std::string("07 00 go_03_06 Precisely.", 25));
        add_line(std::string("01 30 li_09_03 Let's give it a shot!", 36));
        add_line(std::string("05 12 to_05_04 Right! I assume we'll be taking one of these planes...", 69));
        add_line(std::string("07 06 go_03_07 Uh huh. You do know how to fly it\?", 49));
        add_line(std::string("05 06 to_05_05 Of course I do!", 30));
        add_line(std::string("07 00 go_03_08 Good. When you get there, head straight for the city hall.", 73));
        add_line(std::string("05 00 to_05_06 Yes, sir!", 24));
        add_line(std::string("01 00 li_09_04 Hope you're not afraid of heights!", 49));
        add_line(std::string("03 00 mi_06_02 I'll be okay!", 28));
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
FrameObject * create_dialogdata_3943(int x, int y)
{
    return new (Text::pool.create()) DialogData_3943(x, y);
}
class LevelParallaxZaoShip2_3944 : public SystemBox
{
public:
    LevelParallaxZaoShip2_3944(int x, int y) : SystemBox(x, y, LevelParallaxZaoShip2_3944_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_Parallax_ZaoShip2", 23);
#endif
        flags |= BACKGROUND;
        width = 338;
        height = 215;
        type = PATTERN_IMAGE;
        image = get_internal_image(3089);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxzaoship2_3944(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxZaoShip2_3944(x, y);
}
class LevelParallaxCar2_3945 : public SystemBox
{
public:
    LevelParallaxCar2_3945(int x, int y) : SystemBox(x, y, LevelParallaxCar2_3945_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Car2", 19);
#endif
        flags |= BACKGROUND;
        width = 640;
        height = 16;
        type = PATTERN_IMAGE;
        image = get_internal_image(11803);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxcar2_3945(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxCar2_3945(x, y);
}
class LevelParallaxCar3_3946 : public SystemBox
{
public:
    LevelParallaxCar3_3946(int x, int y) : SystemBox(x, y, LevelParallaxCar3_3946_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Car 3", 20);
#endif
        flags |= BACKGROUND;
        width = 640;
        height = 16;
        type = PATTERN_IMAGE;
        image = get_internal_image(11804);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxcar3_3946(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxCar3_3946(x, y);
}
static Image* images_effectzaobuff_3947_0_0[2];
static Direction direction_effectzaobuff_3947_0_0 = {0, 25, 25, 0, -1, images_effectzaobuff_3947_0_0, 2};
static Image* images_effectzaobuff_3947_0_1[2];
static Direction direction_effectzaobuff_3947_0_1 = {1, 25, 25, 0, -1, images_effectzaobuff_3947_0_1, 2};
static Image* images_effectzaobuff_3947_0_2[2];
static Direction direction_effectzaobuff_3947_0_2 = {2, 25, 25, 0, -1, images_effectzaobuff_3947_0_2, 2};
static Image* images_effectzaobuff_3947_0_3[2];
static Direction direction_effectzaobuff_3947_0_3 = {3, 25, 25, 0, -1, images_effectzaobuff_3947_0_3, 2};
static Animation anim_effectzaobuff_3947_0 = {&direction_effectzaobuff_3947_0_0, &direction_effectzaobuff_3947_0_1, &direction_effectzaobuff_3947_0_2, &direction_effectzaobuff_3947_0_3, &direction_effectzaobuff_3947_0_3, &direction_effectzaobuff_3947_0_3, &direction_effectzaobuff_3947_0_3, &direction_effectzaobuff_3947_0_3, &direction_effectzaobuff_3947_0_3, &direction_effectzaobuff_3947_0_3, &direction_effectzaobuff_3947_0_3, &direction_effectzaobuff_3947_0_3, &direction_effectzaobuff_3947_0_3, &direction_effectzaobuff_3947_0_3, &direction_effectzaobuff_3947_0_3, &direction_effectzaobuff_3947_0_3, &direction_effectzaobuff_3947_0_3, &direction_effectzaobuff_3947_0_3, &direction_effectzaobuff_3947_0_0, &direction_effectzaobuff_3947_0_0, &direction_effectzaobuff_3947_0_0, &direction_effectzaobuff_3947_0_0, &direction_effectzaobuff_3947_0_0, &direction_effectzaobuff_3947_0_0, &direction_effectzaobuff_3947_0_0, &direction_effectzaobuff_3947_0_0, &direction_effectzaobuff_3947_0_0, &direction_effectzaobuff_3947_0_0, &direction_effectzaobuff_3947_0_0, &direction_effectzaobuff_3947_0_0, &direction_effectzaobuff_3947_0_0, &direction_effectzaobuff_3947_0_0};
static Animation * anim_array_effectzaobuff_3947[1] = {&anim_effectzaobuff_3947_0};
static Animations anim_effectzaobuff_3947 = {1, &anim_array_effectzaobuff_3947[0]};
static bool anim_effectzaobuff_3947_initialized;
class EffectZaoBuff_3947 : public Active
{
public:
    EffectZaoBuff_3947(int x, int y) : Active(x, y, EffectZaoBuff_3947_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effect_ZaoBuff", 14);
#endif
        this->animations = &anim_effectzaobuff_3947;
        if (!anim_effectzaobuff_3947_initialized) {
            anim_effectzaobuff_3947_initialized = true;
            images_effectzaobuff_3947_0_0[0] = get_internal_image(15764);
            images_effectzaobuff_3947_0_0[1] = get_internal_image(15774);
            images_effectzaobuff_3947_0_1[0] = get_internal_image(15773);
            images_effectzaobuff_3947_0_1[1] = get_internal_image(15772);
            images_effectzaobuff_3947_0_2[0] = get_internal_image(1751);
            images_effectzaobuff_3947_0_2[1] = get_internal_image(2322);
            images_effectzaobuff_3947_0_3[0] = get_internal_image(11958);
            images_effectzaobuff_3947_0_3[1] = get_internal_image(12196);
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
FrameObject * create_effectzaobuff_3947(int x, int y)
{
    return new (Active::pool.create()) EffectZaoBuff_3947(x, y);
}
class PantherHeadDeactivated_3948 : public Backdrop
{
public:
    PantherHeadDeactivated_3948(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PantherHead_deactivated", 23);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2051);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_pantherheaddeactivated_3948(int x, int y)
{
    return new (Backdrop::pool.create()) PantherHeadDeactivated_3948(x, y);
}
class BackGuard_3949 : public Backdrop
{
public:
    BackGuard_3949(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Back_guard", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1217);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backguard_3949(int x, int y)
{
    return new (Backdrop::pool.create()) BackGuard_3949(x, y);
}
static Image* images_npcmayor_3950_0_0[1];
static Direction direction_npcmayor_3950_0_0 = {0, 50, 50, 0, 1, images_npcmayor_3950_0_0, 1};
static Image* images_npcmayor_3950_0_16[1];
static Direction direction_npcmayor_3950_0_16 = {16, 50, 50, 0, 1, images_npcmayor_3950_0_16, 1};
static Animation anim_npcmayor_3950_0 = {&direction_npcmayor_3950_0_0, &direction_npcmayor_3950_0_0, &direction_npcmayor_3950_0_0, &direction_npcmayor_3950_0_0, &direction_npcmayor_3950_0_0, &direction_npcmayor_3950_0_0, &direction_npcmayor_3950_0_0, &direction_npcmayor_3950_0_0, NULL, &direction_npcmayor_3950_0_16, &direction_npcmayor_3950_0_16, &direction_npcmayor_3950_0_16, &direction_npcmayor_3950_0_16, &direction_npcmayor_3950_0_16, &direction_npcmayor_3950_0_16, &direction_npcmayor_3950_0_16, &direction_npcmayor_3950_0_16, &direction_npcmayor_3950_0_16, &direction_npcmayor_3950_0_16, &direction_npcmayor_3950_0_16, &direction_npcmayor_3950_0_16, &direction_npcmayor_3950_0_16, &direction_npcmayor_3950_0_16, &direction_npcmayor_3950_0_16, NULL, &direction_npcmayor_3950_0_0, &direction_npcmayor_3950_0_0, &direction_npcmayor_3950_0_0, &direction_npcmayor_3950_0_0, &direction_npcmayor_3950_0_0, &direction_npcmayor_3950_0_0, &direction_npcmayor_3950_0_0};
static Image* images_npcmayor_3950_1_0[8];
static Direction direction_npcmayor_3950_1_0 = {0, 35, 35, 0, -1, images_npcmayor_3950_1_0, 8};
static Image* images_npcmayor_3950_1_1[8];
static Direction direction_npcmayor_3950_1_1 = {1, 35, 35, 0, -1, images_npcmayor_3950_1_1, 8};
static Image* images_npcmayor_3950_1_8[8];
static Direction direction_npcmayor_3950_1_8 = {8, 80, 80, 0, -1, images_npcmayor_3950_1_8, 8};
static Image* images_npcmayor_3950_1_16[8];
static Direction direction_npcmayor_3950_1_16 = {16, 35, 35, 0, -1, images_npcmayor_3950_1_16, 8};
static Image* images_npcmayor_3950_1_17[8];
static Direction direction_npcmayor_3950_1_17 = {17, 35, 35, 0, -1, images_npcmayor_3950_1_17, 8};
static Animation anim_npcmayor_3950_1 = {&direction_npcmayor_3950_1_0, &direction_npcmayor_3950_1_1, &direction_npcmayor_3950_1_1, &direction_npcmayor_3950_1_1, &direction_npcmayor_3950_1_1, &direction_npcmayor_3950_1_8, &direction_npcmayor_3950_1_8, &direction_npcmayor_3950_1_8, &direction_npcmayor_3950_1_8, &direction_npcmayor_3950_1_8, &direction_npcmayor_3950_1_8, &direction_npcmayor_3950_1_8, NULL, &direction_npcmayor_3950_1_16, &direction_npcmayor_3950_1_16, &direction_npcmayor_3950_1_16, &direction_npcmayor_3950_1_16, &direction_npcmayor_3950_1_17, &direction_npcmayor_3950_1_17, &direction_npcmayor_3950_1_17, &direction_npcmayor_3950_1_17, &direction_npcmayor_3950_1_17, &direction_npcmayor_3950_1_17, &direction_npcmayor_3950_1_17, &direction_npcmayor_3950_1_17, &direction_npcmayor_3950_1_0, &direction_npcmayor_3950_1_0, &direction_npcmayor_3950_1_0, &direction_npcmayor_3950_1_0, &direction_npcmayor_3950_1_0, &direction_npcmayor_3950_1_0, &direction_npcmayor_3950_1_0};
static Image* images_npcmayor_3950_5_0[42];
static Direction direction_npcmayor_3950_5_0 = {0, 50, 50, 0, 1, images_npcmayor_3950_5_0, 42};
static Image* images_npcmayor_3950_5_16[42];
static Direction direction_npcmayor_3950_5_16 = {16, 50, 50, 0, 1, images_npcmayor_3950_5_16, 42};
static Animation anim_npcmayor_3950_5 = {&direction_npcmayor_3950_5_0, &direction_npcmayor_3950_5_0, &direction_npcmayor_3950_5_0, &direction_npcmayor_3950_5_0, &direction_npcmayor_3950_5_0, &direction_npcmayor_3950_5_0, &direction_npcmayor_3950_5_0, &direction_npcmayor_3950_5_0, NULL, &direction_npcmayor_3950_5_16, &direction_npcmayor_3950_5_16, &direction_npcmayor_3950_5_16, &direction_npcmayor_3950_5_16, &direction_npcmayor_3950_5_16, &direction_npcmayor_3950_5_16, &direction_npcmayor_3950_5_16, &direction_npcmayor_3950_5_16, &direction_npcmayor_3950_5_16, &direction_npcmayor_3950_5_16, &direction_npcmayor_3950_5_16, &direction_npcmayor_3950_5_16, &direction_npcmayor_3950_5_16, &direction_npcmayor_3950_5_16, &direction_npcmayor_3950_5_16, NULL, &direction_npcmayor_3950_5_0, &direction_npcmayor_3950_5_0, &direction_npcmayor_3950_5_0, &direction_npcmayor_3950_5_0, &direction_npcmayor_3950_5_0, &direction_npcmayor_3950_5_0, &direction_npcmayor_3950_5_0};
static Image* images_npcmayor_3950_9_0[2];
static Direction direction_npcmayor_3950_9_0 = {0, 13, 13, 0, -1, images_npcmayor_3950_9_0, 2};
static Image* images_npcmayor_3950_9_1[6];
static Direction direction_npcmayor_3950_9_1 = {1, 25, 25, 5, -1, images_npcmayor_3950_9_1, 6};
static Image* images_npcmayor_3950_9_2[1];
static Direction direction_npcmayor_3950_9_2 = {2, 50, 50, 0, 1, images_npcmayor_3950_9_2, 1};
static Image* images_npcmayor_3950_9_3[1];
static Direction direction_npcmayor_3950_9_3 = {3, 50, 50, 0, -1, images_npcmayor_3950_9_3, 1};
static Image* images_npcmayor_3950_9_4[1];
static Direction direction_npcmayor_3950_9_4 = {4, 50, 50, 0, -1, images_npcmayor_3950_9_4, 1};
static Image* images_npcmayor_3950_9_5[2];
static Direction direction_npcmayor_3950_9_5 = {5, 14, 14, 0, -1, images_npcmayor_3950_9_5, 2};
static Image* images_npcmayor_3950_9_6[3];
static Direction direction_npcmayor_3950_9_6 = {6, 70, 70, 0, -1, images_npcmayor_3950_9_6, 3};
static Image* images_npcmayor_3950_9_7[1];
static Direction direction_npcmayor_3950_9_7 = {7, 50, 50, 0, -1, images_npcmayor_3950_9_7, 1};
static Image* images_npcmayor_3950_9_16[2];
static Direction direction_npcmayor_3950_9_16 = {16, 13, 13, 0, -1, images_npcmayor_3950_9_16, 2};
static Image* images_npcmayor_3950_9_17[6];
static Direction direction_npcmayor_3950_9_17 = {17, 25, 25, 5, -1, images_npcmayor_3950_9_17, 6};
static Image* images_npcmayor_3950_9_18[1];
static Direction direction_npcmayor_3950_9_18 = {18, 50, 50, 0, 1, images_npcmayor_3950_9_18, 1};
static Image* images_npcmayor_3950_9_19[1];
static Direction direction_npcmayor_3950_9_19 = {19, 50, 50, 0, -1, images_npcmayor_3950_9_19, 1};
static Image* images_npcmayor_3950_9_20[1];
static Direction direction_npcmayor_3950_9_20 = {20, 50, 50, 0, -1, images_npcmayor_3950_9_20, 1};
static Image* images_npcmayor_3950_9_21[2];
static Direction direction_npcmayor_3950_9_21 = {21, 14, 14, 0, -1, images_npcmayor_3950_9_21, 2};
static Image* images_npcmayor_3950_9_22[3];
static Direction direction_npcmayor_3950_9_22 = {22, 70, 70, 0, -1, images_npcmayor_3950_9_22, 3};
static Image* images_npcmayor_3950_9_31[3];
static Direction direction_npcmayor_3950_9_31 = {31, 24, 24, 0, -1, images_npcmayor_3950_9_31, 3};
static Animation anim_npcmayor_3950_9 = {&direction_npcmayor_3950_9_0, &direction_npcmayor_3950_9_1, &direction_npcmayor_3950_9_2, &direction_npcmayor_3950_9_3, &direction_npcmayor_3950_9_4, &direction_npcmayor_3950_9_5, &direction_npcmayor_3950_9_6, &direction_npcmayor_3950_9_7, &direction_npcmayor_3950_9_7, &direction_npcmayor_3950_9_7, &direction_npcmayor_3950_9_7, &direction_npcmayor_3950_9_7, &direction_npcmayor_3950_9_16, &direction_npcmayor_3950_9_16, &direction_npcmayor_3950_9_16, &direction_npcmayor_3950_9_16, &direction_npcmayor_3950_9_16, &direction_npcmayor_3950_9_17, &direction_npcmayor_3950_9_18, &direction_npcmayor_3950_9_19, &direction_npcmayor_3950_9_20, &direction_npcmayor_3950_9_21, &direction_npcmayor_3950_9_22, &direction_npcmayor_3950_9_22, &direction_npcmayor_3950_9_22, &direction_npcmayor_3950_9_22, &direction_npcmayor_3950_9_22, &direction_npcmayor_3950_9_31, &direction_npcmayor_3950_9_31, &direction_npcmayor_3950_9_31, &direction_npcmayor_3950_9_31, &direction_npcmayor_3950_9_31};
static Animation * anim_array_npcmayor_3950[10] = {&anim_npcmayor_3950_0, &anim_npcmayor_3950_1, NULL, NULL, NULL, &anim_npcmayor_3950_5, NULL, NULL, NULL, &anim_npcmayor_3950_9};
static Animations anim_npcmayor_3950 = {10, &anim_array_npcmayor_3950[0]};
static bool anim_npcmayor_3950_initialized;
class NPCMayor_3950 : public Active
{
public:
    NPCMayor_3950(int x, int y) : Active(x, y, NPCMayor_3950_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_Mayor", 9);
#endif
        this->animations = &anim_npcmayor_3950;
        if (!anim_npcmayor_3950_initialized) {
            anim_npcmayor_3950_initialized = true;
            images_npcmayor_3950_0_0[0] = get_internal_image(3647);
            images_npcmayor_3950_0_16[0] = get_internal_image(268);
            images_npcmayor_3950_1_0[0] = get_internal_image(15783);
            images_npcmayor_3950_1_0[1] = get_internal_image(15775);
            images_npcmayor_3950_1_0[2] = get_internal_image(15781);
            images_npcmayor_3950_1_0[3] = get_internal_image(15776);
            images_npcmayor_3950_1_0[4] = get_internal_image(15777);
            images_npcmayor_3950_1_0[5] = get_internal_image(15782);
            images_npcmayor_3950_1_0[6] = get_internal_image(15778);
            images_npcmayor_3950_1_0[7] = get_internal_image(15779);
            images_npcmayor_3950_1_1[0] = get_internal_image(15812);
            images_npcmayor_3950_1_1[1] = get_internal_image(15809);
            images_npcmayor_3950_1_1[2] = get_internal_image(15805);
            images_npcmayor_3950_1_1[3] = get_internal_image(15810);
            images_npcmayor_3950_1_1[4] = get_internal_image(15802);
            images_npcmayor_3950_1_1[5] = get_internal_image(15811);
            images_npcmayor_3950_1_1[6] = get_internal_image(15807);
            images_npcmayor_3950_1_1[7] = get_internal_image(15808);
            images_npcmayor_3950_1_8[0] = get_internal_image(15682);
            images_npcmayor_3950_1_8[1] = get_internal_image(15690);
            images_npcmayor_3950_1_8[2] = get_internal_image(15691);
            images_npcmayor_3950_1_8[3] = get_internal_image(15692);
            images_npcmayor_3950_1_8[4] = get_internal_image(15693);
            images_npcmayor_3950_1_8[5] = get_internal_image(15694);
            images_npcmayor_3950_1_8[6] = get_internal_image(15695);
            images_npcmayor_3950_1_8[7] = get_internal_image(15696);
            images_npcmayor_3950_1_16[0] = get_internal_image(15780);
            images_npcmayor_3950_1_16[1] = get_internal_image(15784);
            images_npcmayor_3950_1_16[2] = get_internal_image(15785);
            images_npcmayor_3950_1_16[3] = get_internal_image(15786);
            images_npcmayor_3950_1_16[4] = get_internal_image(15787);
            images_npcmayor_3950_1_16[5] = get_internal_image(15788);
            images_npcmayor_3950_1_16[6] = get_internal_image(15789);
            images_npcmayor_3950_1_16[7] = get_internal_image(15790);
            images_npcmayor_3950_1_17[0] = get_internal_image(15806);
            images_npcmayor_3950_1_17[1] = get_internal_image(15813);
            images_npcmayor_3950_1_17[2] = get_internal_image(15814);
            images_npcmayor_3950_1_17[3] = get_internal_image(15815);
            images_npcmayor_3950_1_17[4] = get_internal_image(15816);
            images_npcmayor_3950_1_17[5] = get_internal_image(15817);
            images_npcmayor_3950_1_17[6] = get_internal_image(15818);
            images_npcmayor_3950_1_17[7] = get_internal_image(15819);
            images_npcmayor_3950_5_0[0] = get_internal_image(3647);
            images_npcmayor_3950_5_0[1] = get_internal_image(15698);
            images_npcmayor_3950_5_0[2] = get_internal_image(15697);
            images_npcmayor_3950_5_0[3] = get_internal_image(15699);
            images_npcmayor_3950_5_0[4] = get_internal_image(15701);
            images_npcmayor_3950_5_0[5] = get_internal_image(15703);
            images_npcmayor_3950_5_0[6] = get_internal_image(15710);
            images_npcmayor_3950_5_0[7] = get_internal_image(15707);
            images_npcmayor_3950_5_0[8] = get_internal_image(15709);
            images_npcmayor_3950_5_0[9] = get_internal_image(15715);
            images_npcmayor_3950_5_0[10] = get_internal_image(15714);
            images_npcmayor_3950_5_0[11] = get_internal_image(15717);
            images_npcmayor_3950_5_0[12] = get_internal_image(15765);
            images_npcmayor_3950_5_0[13] = get_internal_image(15767);
            images_npcmayor_3950_5_0[14] = get_internal_image(15768);
            images_npcmayor_3950_5_0[15] = get_internal_image(15791);
            images_npcmayor_3950_5_0[16] = get_internal_image(15800);
            images_npcmayor_3950_5_0[17] = get_internal_image(15801);
            images_npcmayor_3950_5_0[18] = get_internal_image(15794);
            images_npcmayor_3950_5_0[19] = get_internal_image(15793);
            images_npcmayor_3950_5_0[20] = get_internal_image(15795);
            images_npcmayor_3950_5_0[21] = get_internal_image(15799);
            images_npcmayor_3950_5_0[22] = get_internal_image(15803);
            images_npcmayor_3950_5_0[23] = get_internal_image(15804);
            images_npcmayor_3950_5_0[24] = get_internal_image(7867);
            images_npcmayor_3950_5_0[25] = get_internal_image(7865);
            images_npcmayor_3950_5_0[26] = get_internal_image(15632);
            images_npcmayor_3950_5_0[27] = get_internal_image(15634);
            images_npcmayor_3950_5_0[28] = get_internal_image(15635);
            images_npcmayor_3950_5_0[29] = get_internal_image(15727);
            images_npcmayor_3950_5_0[30] = get_internal_image(15630);
            images_npcmayor_3950_5_0[31] = get_internal_image(15154);
            images_npcmayor_3950_5_0[32] = get_internal_image(15888);
            images_npcmayor_3950_5_0[33] = get_internal_image(15889);
            images_npcmayor_3950_5_0[34] = get_internal_image(15628);
            images_npcmayor_3950_5_0[35] = get_internal_image(15890);
            images_npcmayor_3950_5_0[36] = get_internal_image(15823);
            images_npcmayor_3950_5_0[37] = get_internal_image(16084);
            images_npcmayor_3950_5_0[38] = get_internal_image(16085);
            images_npcmayor_3950_5_0[39] = get_internal_image(7301);
            images_npcmayor_3950_5_0[40] = get_internal_image(11488);
            images_npcmayor_3950_5_0[41] = get_internal_image(13692);
            images_npcmayor_3950_5_16[0] = get_internal_image(268);
            images_npcmayor_3950_5_16[1] = get_internal_image(15716);
            images_npcmayor_3950_5_16[2] = get_internal_image(15719);
            images_npcmayor_3950_5_16[3] = get_internal_image(15751);
            images_npcmayor_3950_5_16[4] = get_internal_image(15752);
            images_npcmayor_3950_5_16[5] = get_internal_image(15753);
            images_npcmayor_3950_5_16[6] = get_internal_image(15754);
            images_npcmayor_3950_5_16[7] = get_internal_image(15755);
            images_npcmayor_3950_5_16[8] = get_internal_image(15756);
            images_npcmayor_3950_5_16[9] = get_internal_image(15757);
            images_npcmayor_3950_5_16[10] = get_internal_image(15758);
            images_npcmayor_3950_5_16[11] = get_internal_image(15759);
            images_npcmayor_3950_5_16[12] = get_internal_image(15769);
            images_npcmayor_3950_5_16[13] = get_internal_image(15770);
            images_npcmayor_3950_5_16[14] = get_internal_image(15771);
            images_npcmayor_3950_5_16[15] = get_internal_image(435);
            images_npcmayor_3950_5_16[16] = get_internal_image(2073);
            images_npcmayor_3950_5_16[17] = get_internal_image(2074);
            images_npcmayor_3950_5_16[18] = get_internal_image(15796);
            images_npcmayor_3950_5_16[19] = get_internal_image(15797);
            images_npcmayor_3950_5_16[20] = get_internal_image(15798);
            images_npcmayor_3950_5_16[21] = get_internal_image(2075);
            images_npcmayor_3950_5_16[22] = get_internal_image(2076);
            images_npcmayor_3950_5_16[23] = get_internal_image(2077);
            images_npcmayor_3950_5_16[24] = get_internal_image(15732);
            images_npcmayor_3950_5_16[25] = get_internal_image(15761);
            images_npcmayor_3950_5_16[26] = get_internal_image(15792);
            images_npcmayor_3950_5_16[27] = get_internal_image(15834);
            images_npcmayor_3950_5_16[28] = get_internal_image(15835);
            images_npcmayor_3950_5_16[29] = get_internal_image(15845);
            images_npcmayor_3950_5_16[30] = get_internal_image(15894);
            images_npcmayor_3950_5_16[31] = get_internal_image(15895);
            images_npcmayor_3950_5_16[32] = get_internal_image(15896);
            images_npcmayor_3950_5_16[33] = get_internal_image(15897);
            images_npcmayor_3950_5_16[34] = get_internal_image(15898);
            images_npcmayor_3950_5_16[35] = get_internal_image(15899);
            images_npcmayor_3950_5_16[36] = get_internal_image(15822);
            images_npcmayor_3950_5_16[37] = get_internal_image(16086);
            images_npcmayor_3950_5_16[38] = get_internal_image(16087);
            images_npcmayor_3950_5_16[39] = get_internal_image(13693);
            images_npcmayor_3950_5_16[40] = get_internal_image(13700);
            images_npcmayor_3950_5_16[41] = get_internal_image(13714);
            images_npcmayor_3950_9_0[0] = get_internal_image(15705);
            images_npcmayor_3950_9_0[1] = get_internal_image(15706);
            images_npcmayor_3950_9_1[0] = get_internal_image(2069);
            images_npcmayor_3950_9_1[1] = get_internal_image(15708);
            images_npcmayor_3950_9_1[2] = get_internal_image(2069);
            images_npcmayor_3950_9_1[3] = get_internal_image(15708);
            images_npcmayor_3950_9_1[4] = get_internal_image(2069);
            images_npcmayor_3950_9_1[5] = get_internal_image(15708);
            images_npcmayor_3950_9_2[0] = get_internal_image(15713);
            images_npcmayor_3950_9_3[0] = get_internal_image(15766);
            images_npcmayor_3950_9_4[0] = get_internal_image(2072);
            images_npcmayor_3950_9_5[0] = get_internal_image(2612);
            images_npcmayor_3950_9_5[1] = get_internal_image(2499);
            images_npcmayor_3950_9_6[0] = get_internal_image(16079);
            images_npcmayor_3950_9_6[1] = get_internal_image(16080);
            images_npcmayor_3950_9_6[2] = get_internal_image(16078);
            images_npcmayor_3950_9_7[0] = get_internal_image(14338);
            images_npcmayor_3950_9_16[0] = get_internal_image(15702);
            images_npcmayor_3950_9_16[1] = get_internal_image(15704);
            images_npcmayor_3950_9_17[0] = get_internal_image(2070);
            images_npcmayor_3950_9_17[1] = get_internal_image(15711);
            images_npcmayor_3950_9_17[2] = get_internal_image(2070);
            images_npcmayor_3950_9_17[3] = get_internal_image(15711);
            images_npcmayor_3950_9_17[4] = get_internal_image(2070);
            images_npcmayor_3950_9_17[5] = get_internal_image(15711);
            images_npcmayor_3950_9_18[0] = get_internal_image(15712);
            images_npcmayor_3950_9_19[0] = get_internal_image(15762);
            images_npcmayor_3950_9_20[0] = get_internal_image(2071);
            images_npcmayor_3950_9_21[0] = get_internal_image(2324);
            images_npcmayor_3950_9_21[1] = get_internal_image(2613);
            images_npcmayor_3950_9_22[0] = get_internal_image(16081);
            images_npcmayor_3950_9_22[1] = get_internal_image(16082);
            images_npcmayor_3950_9_22[2] = get_internal_image(16083);
            images_npcmayor_3950_9_31[0] = get_internal_image(13937);
            images_npcmayor_3950_9_31[1] = get_internal_image(13937);
            images_npcmayor_3950_9_31[2] = get_internal_image(7752);
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
FrameObject * create_npcmayor_3950(int x, int y)
{
    return new (Active::pool.create()) NPCMayor_3950(x, y);
}
static Image* images_npcplane_3951_0_16[4];
static Direction direction_npcplane_3951_0_16 = {16, 100, 100, 0, -1, images_npcplane_3951_0_16, 4};
static Animation anim_npcplane_3951_0 = {NULL, &direction_npcplane_3951_0_16, &direction_npcplane_3951_0_16, &direction_npcplane_3951_0_16, &direction_npcplane_3951_0_16, &direction_npcplane_3951_0_16, &direction_npcplane_3951_0_16, &direction_npcplane_3951_0_16, &direction_npcplane_3951_0_16, &direction_npcplane_3951_0_16, &direction_npcplane_3951_0_16, &direction_npcplane_3951_0_16, &direction_npcplane_3951_0_16, &direction_npcplane_3951_0_16, &direction_npcplane_3951_0_16, &direction_npcplane_3951_0_16, &direction_npcplane_3951_0_16, &direction_npcplane_3951_0_16, &direction_npcplane_3951_0_16, &direction_npcplane_3951_0_16, &direction_npcplane_3951_0_16, &direction_npcplane_3951_0_16, &direction_npcplane_3951_0_16, &direction_npcplane_3951_0_16, &direction_npcplane_3951_0_16, &direction_npcplane_3951_0_16, &direction_npcplane_3951_0_16, &direction_npcplane_3951_0_16, &direction_npcplane_3951_0_16, &direction_npcplane_3951_0_16, &direction_npcplane_3951_0_16, &direction_npcplane_3951_0_16};
static Animation * anim_array_npcplane_3951[1] = {&anim_npcplane_3951_0};
static Animations anim_npcplane_3951 = {1, &anim_array_npcplane_3951[0]};
static bool anim_npcplane_3951_initialized;
class NPCPlane_3951 : public Active
{
public:
    NPCPlane_3951(int x, int y) : Active(x, y, NPCPlane_3951_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_Plane", 9);
#endif
        this->animations = &anim_npcplane_3951;
        if (!anim_npcplane_3951_initialized) {
            anim_npcplane_3951_initialized = true;
            images_npcplane_3951_0_16[0] = get_internal_image(3344);
            images_npcplane_3951_0_16[1] = get_internal_image(981);
            images_npcplane_3951_0_16[2] = get_internal_image(993);
            images_npcplane_3951_0_16[3] = get_internal_image(3502);
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
FrameObject * create_npcplane_3951(int x, int y)
{
    return new (Active::pool.create()) NPCPlane_3951(x, y);
}
static Image* images_playerassistcopilot2_3952_0_0[5];
static Direction direction_playerassistcopilot2_3952_0_0 = {0, 50, 50, 0, -1, images_playerassistcopilot2_3952_0_0, 5};
static Image* images_playerassistcopilot2_3952_0_2[5];
static Direction direction_playerassistcopilot2_3952_0_2 = {2, 50, 50, 0, -1, images_playerassistcopilot2_3952_0_2, 5};
static Image* images_playerassistcopilot2_3952_0_3[5];
static Direction direction_playerassistcopilot2_3952_0_3 = {3, 50, 50, 0, -1, images_playerassistcopilot2_3952_0_3, 5};
static Image* images_playerassistcopilot2_3952_0_4[5];
static Direction direction_playerassistcopilot2_3952_0_4 = {4, 50, 50, 0, -1, images_playerassistcopilot2_3952_0_4, 5};
static Image* images_playerassistcopilot2_3952_0_5[1];
static Direction direction_playerassistcopilot2_3952_0_5 = {5, 50, 50, 0, 1, images_playerassistcopilot2_3952_0_5, 1};
static Animation anim_playerassistcopilot2_3952_0 = {&direction_playerassistcopilot2_3952_0_0, NULL, &direction_playerassistcopilot2_3952_0_2, &direction_playerassistcopilot2_3952_0_3, &direction_playerassistcopilot2_3952_0_4, &direction_playerassistcopilot2_3952_0_5, &direction_playerassistcopilot2_3952_0_5, &direction_playerassistcopilot2_3952_0_5, &direction_playerassistcopilot2_3952_0_5, &direction_playerassistcopilot2_3952_0_5, &direction_playerassistcopilot2_3952_0_5, &direction_playerassistcopilot2_3952_0_5, &direction_playerassistcopilot2_3952_0_5, &direction_playerassistcopilot2_3952_0_5, &direction_playerassistcopilot2_3952_0_5, &direction_playerassistcopilot2_3952_0_5, &direction_playerassistcopilot2_3952_0_5, &direction_playerassistcopilot2_3952_0_5, &direction_playerassistcopilot2_3952_0_5, &direction_playerassistcopilot2_3952_0_0, &direction_playerassistcopilot2_3952_0_0, &direction_playerassistcopilot2_3952_0_0, &direction_playerassistcopilot2_3952_0_0, &direction_playerassistcopilot2_3952_0_0, &direction_playerassistcopilot2_3952_0_0, &direction_playerassistcopilot2_3952_0_0, &direction_playerassistcopilot2_3952_0_0, &direction_playerassistcopilot2_3952_0_0, &direction_playerassistcopilot2_3952_0_0, &direction_playerassistcopilot2_3952_0_0, &direction_playerassistcopilot2_3952_0_0, &direction_playerassistcopilot2_3952_0_0};
static Animation * anim_array_playerassistcopilot2_3952[1] = {&anim_playerassistcopilot2_3952_0};
static Animations anim_playerassistcopilot2_3952 = {1, &anim_array_playerassistcopilot2_3952[0]};
static bool anim_playerassistcopilot2_3952_initialized;
class PlayerAssistCopilot2_3952 : public Active
{
public:
    PlayerAssistCopilot2_3952(int x, int y) : Active(x, y, PlayerAssistCopilot2_3952_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_Assist_Copilot2", 22);
#endif
        set_visible(false);
        this->animations = &anim_playerassistcopilot2_3952;
        if (!anim_playerassistcopilot2_3952_initialized) {
            anim_playerassistcopilot2_3952_initialized = true;
            images_playerassistcopilot2_3952_0_0[0] = get_internal_image(2145);
            images_playerassistcopilot2_3952_0_0[1] = get_internal_image(2146);
            images_playerassistcopilot2_3952_0_0[2] = get_internal_image(2148);
            images_playerassistcopilot2_3952_0_0[3] = get_internal_image(2149);
            images_playerassistcopilot2_3952_0_0[4] = get_internal_image(2579);
            images_playerassistcopilot2_3952_0_2[0] = get_internal_image(2581);
            images_playerassistcopilot2_3952_0_2[1] = get_internal_image(2587);
            images_playerassistcopilot2_3952_0_2[2] = get_internal_image(2589);
            images_playerassistcopilot2_3952_0_2[3] = get_internal_image(2591);
            images_playerassistcopilot2_3952_0_2[4] = get_internal_image(2611);
            images_playerassistcopilot2_3952_0_3[0] = get_internal_image(2581);
            images_playerassistcopilot2_3952_0_3[1] = get_internal_image(2587);
            images_playerassistcopilot2_3952_0_3[2] = get_internal_image(2589);
            images_playerassistcopilot2_3952_0_3[3] = get_internal_image(2591);
            images_playerassistcopilot2_3952_0_3[4] = get_internal_image(2611);
            images_playerassistcopilot2_3952_0_4[0] = get_internal_image(2719);
            images_playerassistcopilot2_3952_0_4[1] = get_internal_image(3774);
            images_playerassistcopilot2_3952_0_4[2] = get_internal_image(3778);
            images_playerassistcopilot2_3952_0_4[3] = get_internal_image(3791);
            images_playerassistcopilot2_3952_0_4[4] = get_internal_image(3792);
            images_playerassistcopilot2_3952_0_5[0] = get_internal_image(3794);
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
FrameObject * create_playerassistcopilot2_3952(int x, int y)
{
    return new (Active::pool.create()) PlayerAssistCopilot2_3952(x, y);
}
static Image* images_placeholdercharactertail_3953_0_0[12];
static Direction direction_placeholdercharactertail_3953_0_0 = {0, 18, 18, 0, -1, images_placeholdercharactertail_3953_0_0, 12};
static Image* images_placeholdercharactertail_3953_0_1[8];
static Direction direction_placeholdercharactertail_3953_0_1 = {1, 10, 10, 0, -1, images_placeholdercharactertail_3953_0_1, 8};
static Animation anim_placeholdercharactertail_3953_0 = {&direction_placeholdercharactertail_3953_0_0, &direction_placeholdercharactertail_3953_0_1, &direction_placeholdercharactertail_3953_0_1, &direction_placeholdercharactertail_3953_0_1, &direction_placeholdercharactertail_3953_0_1, &direction_placeholdercharactertail_3953_0_1, &direction_placeholdercharactertail_3953_0_1, &direction_placeholdercharactertail_3953_0_1, &direction_placeholdercharactertail_3953_0_1, &direction_placeholdercharactertail_3953_0_1, &direction_placeholdercharactertail_3953_0_1, &direction_placeholdercharactertail_3953_0_1, &direction_placeholdercharactertail_3953_0_1, &direction_placeholdercharactertail_3953_0_1, &direction_placeholdercharactertail_3953_0_1, &direction_placeholdercharactertail_3953_0_1, &direction_placeholdercharactertail_3953_0_1, &direction_placeholdercharactertail_3953_0_0, &direction_placeholdercharactertail_3953_0_0, &direction_placeholdercharactertail_3953_0_0, &direction_placeholdercharactertail_3953_0_0, &direction_placeholdercharactertail_3953_0_0, &direction_placeholdercharactertail_3953_0_0, &direction_placeholdercharactertail_3953_0_0, &direction_placeholdercharactertail_3953_0_0, &direction_placeholdercharactertail_3953_0_0, &direction_placeholdercharactertail_3953_0_0, &direction_placeholdercharactertail_3953_0_0, &direction_placeholdercharactertail_3953_0_0, &direction_placeholdercharactertail_3953_0_0, &direction_placeholdercharactertail_3953_0_0, &direction_placeholdercharactertail_3953_0_0};
static Animation * anim_array_placeholdercharactertail_3953[1] = {&anim_placeholdercharactertail_3953_0};
static Animations anim_placeholdercharactertail_3953 = {1, &anim_array_placeholdercharactertail_3953[0]};
static bool anim_placeholdercharactertail_3953_initialized;
class PlaceholderCharacterTail_3953 : public Active
{
public:
    PlaceholderCharacterTail_3953(int x, int y) : Active(x, y, PlaceholderCharacterTail_3953_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("PlaceholderCharacter_Tail", 25);
#endif
        this->animations = &anim_placeholdercharactertail_3953;
        if (!anim_placeholdercharactertail_3953_initialized) {
            anim_placeholdercharactertail_3953_initialized = true;
            images_placeholdercharactertail_3953_0_0[0] = get_internal_image(1704);
            images_placeholdercharactertail_3953_0_0[1] = get_internal_image(1705);
            images_placeholdercharactertail_3953_0_0[2] = get_internal_image(1708);
            images_placeholdercharactertail_3953_0_0[3] = get_internal_image(1712);
            images_placeholdercharactertail_3953_0_0[4] = get_internal_image(1713);
            images_placeholdercharactertail_3953_0_0[5] = get_internal_image(1715);
            images_placeholdercharactertail_3953_0_0[6] = get_internal_image(1716);
            images_placeholdercharactertail_3953_0_0[7] = get_internal_image(1883);
            images_placeholdercharactertail_3953_0_0[8] = get_internal_image(2520);
            images_placeholdercharactertail_3953_0_0[9] = get_internal_image(2531);
            images_placeholdercharactertail_3953_0_0[10] = get_internal_image(2532);
            images_placeholdercharactertail_3953_0_0[11] = get_internal_image(2534);
            images_placeholdercharactertail_3953_0_1[0] = get_internal_image(7452);
            images_placeholdercharactertail_3953_0_1[1] = get_internal_image(7456);
            images_placeholdercharactertail_3953_0_1[2] = get_internal_image(7458);
            images_placeholdercharactertail_3953_0_1[3] = get_internal_image(7457);
            images_placeholdercharactertail_3953_0_1[4] = get_internal_image(7459);
            images_placeholdercharactertail_3953_0_1[5] = get_internal_image(7460);
            images_placeholdercharactertail_3953_0_1[6] = get_internal_image(7462);
            images_placeholdercharactertail_3953_0_1[7] = get_internal_image(7463);
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
FrameObject * create_placeholdercharactertail_3953(int x, int y)
{
    return new (Active::pool.create()) PlaceholderCharacterTail_3953(x, y);
}
static Image* images_placeholdercharacter_3954_0_0[1];
static Direction direction_placeholdercharacter_3954_0_0 = {0, 0, 0, 0, 1, images_placeholdercharacter_3954_0_0, 1};
static Image* images_placeholdercharacter_3954_0_1[1];
static Direction direction_placeholdercharacter_3954_0_1 = {1, 50, 50, 0, -1, images_placeholdercharacter_3954_0_1, 1};
static Image* images_placeholdercharacter_3954_0_2[1];
static Direction direction_placeholdercharacter_3954_0_2 = {2, 50, 50, 0, -1, images_placeholdercharacter_3954_0_2, 1};
static Animation anim_placeholdercharacter_3954_0 = {&direction_placeholdercharacter_3954_0_0, &direction_placeholdercharacter_3954_0_1, &direction_placeholdercharacter_3954_0_2, &direction_placeholdercharacter_3954_0_2, &direction_placeholdercharacter_3954_0_2, &direction_placeholdercharacter_3954_0_2, &direction_placeholdercharacter_3954_0_2, &direction_placeholdercharacter_3954_0_2, &direction_placeholdercharacter_3954_0_2, &direction_placeholdercharacter_3954_0_2, &direction_placeholdercharacter_3954_0_2, &direction_placeholdercharacter_3954_0_2, &direction_placeholdercharacter_3954_0_2, &direction_placeholdercharacter_3954_0_2, &direction_placeholdercharacter_3954_0_2, &direction_placeholdercharacter_3954_0_2, &direction_placeholdercharacter_3954_0_2, NULL, &direction_placeholdercharacter_3954_0_0, &direction_placeholdercharacter_3954_0_0, &direction_placeholdercharacter_3954_0_0, &direction_placeholdercharacter_3954_0_0, &direction_placeholdercharacter_3954_0_0, &direction_placeholdercharacter_3954_0_0, &direction_placeholdercharacter_3954_0_0, &direction_placeholdercharacter_3954_0_0, &direction_placeholdercharacter_3954_0_0, &direction_placeholdercharacter_3954_0_0, &direction_placeholdercharacter_3954_0_0, &direction_placeholdercharacter_3954_0_0, &direction_placeholdercharacter_3954_0_0, &direction_placeholdercharacter_3954_0_0};
static Animation * anim_array_placeholdercharacter_3954[1] = {&anim_placeholdercharacter_3954_0};
static Animations anim_placeholdercharacter_3954 = {1, &anim_array_placeholdercharacter_3954[0]};
static bool anim_placeholdercharacter_3954_initialized;
class PlaceholderCharacter_3954 : public Active
{
public:
    PlaceholderCharacter_3954(int x, int y) : Active(x, y, PlaceholderCharacter_3954_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("PlaceholderCharacter", 20);
#endif
        this->animations = &anim_placeholdercharacter_3954;
        if (!anim_placeholdercharacter_3954_initialized) {
            anim_placeholdercharacter_3954_initialized = true;
            images_placeholdercharacter_3954_0_0[0] = get_internal_image(10117);
            images_placeholdercharacter_3954_0_1[0] = get_internal_image(11380);
            images_placeholdercharacter_3954_0_2[0] = get_internal_image(2845);
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
FrameObject * create_placeholdercharacter_3954(int x, int y)
{
    return new (Active::pool.create()) PlaceholderCharacter_3954(x, y);
}
class DialogData_3955 : public Text
{
public:
    DialogData_3955(int x, int y) : Text(x, y, DialogData_3955_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Dialog Data", 11);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("04 15 sp_02_01 You just had to follow me here, didn't you\?", 58));
        add_line(std::string("02 00 ca_11_01 How did you know we were coming\?", 47));
        add_line(std::string("04 15 sp_02_02 You seemed pretty determined to get that stone back.", 67));
        add_line(std::string("05 15 to_06_01 So you're the thief Lilac was talking about!", 59));
        add_line(std::string("04 15 sp_02_03 I've been called worse.", 38));
        add_line(std::string("01 12 li_10_01 Where is it\?", 27));
        add_line(std::string("04 15 sp_02_04 I've already finished the job. It's time for my brother to play his hand.", 88));
        add_line(std::string("05 00 to_06_02 Your brother\?", 28));
        add_line(std::string("01 12 li_10_02 Prince Dail of Shuigang.", 39));
        add_line(std::string("05 00 to_06_03 Really!", 22));
        add_line(std::string("04 15 sp_02_05 When he finds the man who murdered our father, there will be no mercy for the kingdom responsible.", 113));
        add_line(std::string("01 66 li_10_03 We know who's responsible.", 41));
        add_line(std::string("04 15 sp_02_06 Nice try.", 24));
        add_line(std::string("02 06 ca_11_02 Will you JUST hold ON a minute and let us explain\?", 65));
        add_line(std::string("04 18 sp_02_07 What, so you can throw me off again with your lies\? Thanks, but I've had enou-", 93));
        add_line(std::string("05 15 to_06_04 Everyone split up!", 33));
        add_line(std::string("05 15 to_06_05 We'll cut him off at the huge shopping mall over there!", 70));
        add_line(std::string("01 00 li_10_04 Got it!", 22));
        add_line(std::string("02 06 ca_11_03 Got it!", 22));
        add_line(std::string("03 06 mi_07_01 Okay!", 20));
        add_line(std::string("01 30 li_12_01 YEAH! We kicked some serious tail back there!", 60));
        add_line(std::string("02 48 ca_12_01 That was totally awesome did you see that\? You were like \"Take that!\" and I was like \"POW POW!\"", 110));
        add_line(std::string("03 42 mi_08_01 Wow! We're really strong as a team!", 50));
        add_line(std::string("05 18 to_07_01 Woo! That was awesome!", 37));
        add_line(std::string("06 00 se_04_01 Not so fast Commander!", 37));
        add_line(std::string("06 00 se_04_02 Chya hahaha... If you're searching for the stone, you might want to look up!", 91));
        add_line(std::string("06 00 se_04_03 Now if you'll excuse me, I have a delivery to make!", 66));
        add_line(std::string("06 00 se_04_04 Enjoy your victory!", 34));
        add_line(std::string("01 09 li_12_02 No! STOP!!", 25));
        add_line(std::string("02 03 ca_12_02 We gotta go after them!", 38));
        add_line(std::string("05 xx to_07_02 Those airships would ghost us from a mile away. Remember what happened to me in the valley\?", 106));
        add_line(std::string("01 21 li_12_03 There has to be a way! What about Mayor Zao\?", 59));
        add_line(std::string("05 xx to_07_03 It's worth a shot.", 33));
        add_line(std::string("10 03 za_01_01 It's gone! My one chance for re-election is gone!", 64));
        add_line(std::string("10 06 za_01_02 You! Over there!", 31));
        add_line(std::string("01 36 li_12_04 He's royalty! You have to bow!", 45));
        add_line(std::string("02 00 ca_12_03 Oh!", 18));
        add_line(std::string("10 00 za_01_03 Very good. Rise!", 31));
        add_line(std::string("10 00 za_01_04 Were you the ones who disposed of this wretched mechanical beast\?", 80));
        add_line(std::string("02 12 ca_12_04 You bet we are!", 30));
        add_line(std::string("10 12 za_01_05 Glorious!", 24));
        add_line(std::string("10 09 za_01_06 As a token of my appreciation, I offer each of you free reign over Zao's Shopping Paradise!", 106));
        add_line(std::string("10 15 za_01_07 ...Uh, with this coupon... for five percent off selected brands!", 79));
        add_line(std::string("10 15 za_01_08 Aw, what the heck, why don't I just invite you over to dinner\? My treat!", 87));
        add_line(std::string("03 33 mi_08_02 You mean... a royal feast\?", 41));
        add_line(std::string("02 18 ca_12_05 I am pretty hungry...", 36));
        add_line(std::string("05 xx to_07_04 What about the stone\?", 36));
        add_line(std::string("10 21 za_01_09 That scoundrel Prince took it from me! I won't even be able to chase him until my ships are repaired!", 116));
        add_line(std::string("01 36 li_12_05 Well, Mayor Zao, we would be honored to be your guests this evening.", 83));
        add_line(std::string("10 09 za_01_10 Follow me then. I shall drown your sorrows in delicious chow mein!", 81));
        add_line(std::string("02 36 ca_12_06 He seems a little...", 35));
        add_line(std::string("01 03 li_12_06 Eccentric\?", 25));
        add_line(std::string("02 36 ca_12_07 Un-Mayor-ish.", 28));
        add_line(std::string("01 03 li_12_07 That too.", 24));
        add_line(std::string("05 xx to_07_05 We better play along anyway. This is our chance to prove that Brevon exists.", 91));
        add_line(std::string("05 xx to_07_06 Might need to study this later...", 48));
        add_line(std::string("01 24 li_12b03 Let's ask", 24));
        add_line(std::string("04 15 sp_02b05 Prince Dail of S... Prince d", 43));
        add_line(std::string("03 33 mi_10_04 Wow...", 21));
        add_line(std::string("02 03 ca_14_02 We get to ride in THAT\? Ohmygush yes.", 52));
        add_line(std::string("10 00 za_03_07 But of course! It's equipped with everything you'll need for your trip, including your luxurious living quarters.", 128));
        add_line(std::string("10 12 za_03_08 Good luck, my friends!", 37));
        add_line(std::string("03 03 mi_10_05 Thank you!", 25));
        add_line(std::string("02 36 ca_43_01 Hmm...", 21));
        add_line(std::string("02 00 ca_43_02 Brevon still got your tongue\?", 44));
        add_line(std::string("01 72 li_51_01 Do you think he was telling the truth\? About trying to save his homeworld and all\?", 97));
        add_line(std::string("02 00 ca_43_03 I don't know, but, if he was, then, well, we showed him how it was done.", 87));
        add_line(std::string("01 72 li_51_02 Yeah...", 22));
        add_line(std::string("02 15 ca_43_04 Hey... Who's a grumpy little Lilac\? Who's a gwumpy widdle Wiwac\?", 79));
        add_line(std::string("01 81 li_51_03 Hey!", 19));
        add_line(std::string("01 27 li_51_04 Thanks.", 22));
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
FrameObject * create_dialogdata_3955(int x, int y)
{
    return new (Text::pool.create()) DialogData_3955(x, y);
}
class LevelParallaxPiece4_3956 : public SystemBox
{
public:
    LevelParallaxPiece4_3956(int x, int y) : SystemBox(x, y, LevelParallaxPiece4_3956_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 4", 22);
#endif
        flags |= BACKGROUND;
        width = 480;
        height = 96;
        type = PATTERN_IMAGE;
        image = get_internal_image(4788);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece4_3956(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece4_3956(x, y);
}
class LevelParallaxPiece6_3957 : public SystemBox
{
public:
    LevelParallaxPiece6_3957(int x, int y) : SystemBox(x, y, LevelParallaxPiece6_3957_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 6", 22);
#endif
        flags |= BACKGROUND;
        width = 128;
        height = 268;
        type = PATTERN_IMAGE;
        image = get_internal_image(3416);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece6_3957(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece6_3957(x, y);
}
class LevelParallaxPiece2_3958 : public SystemBox
{
public:
    LevelParallaxPiece2_3958(int x, int y) : SystemBox(x, y, LevelParallaxPiece2_3958_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 2", 22);
#endif
        flags |= BACKGROUND;
        width = 480;
        height = 128;
        type = PATTERN_IMAGE;
        image = get_internal_image(4786);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece2_3958(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece2_3958(x, y);
}
class LevelParallaxPiece5_3959 : public SystemBox
{
public:
    LevelParallaxPiece5_3959(int x, int y) : SystemBox(x, y, LevelParallaxPiece5_3959_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 5", 22);
#endif
        flags |= BACKGROUND;
        width = 480;
        height = 256;
        type = PATTERN_IMAGE;
        image = get_internal_image(4787);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece5_3959(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece5_3959(x, y);
}
class LevelParallaxPiece7_3960 : public SystemBox
{
public:
    LevelParallaxPiece7_3960(int x, int y) : SystemBox(x, y, LevelParallaxPiece7_3960_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 7", 22);
#endif
        flags |= BACKGROUND;
        width = 256;
        height = 536;
        type = PATTERN_IMAGE;
        image = get_internal_image(3420);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece7_3960(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece7_3960(x, y);
}
static Image* images_npccarolcling_3961_0_0[3];
static Direction direction_npccarolcling_3961_0_0 = {0, 0, 0, 0, 1, images_npccarolcling_3961_0_0, 3};
static Animation anim_npccarolcling_3961_0 = {&direction_npccarolcling_3961_0_0, &direction_npccarolcling_3961_0_0, &direction_npccarolcling_3961_0_0, &direction_npccarolcling_3961_0_0, &direction_npccarolcling_3961_0_0, &direction_npccarolcling_3961_0_0, &direction_npccarolcling_3961_0_0, &direction_npccarolcling_3961_0_0, &direction_npccarolcling_3961_0_0, &direction_npccarolcling_3961_0_0, &direction_npccarolcling_3961_0_0, &direction_npccarolcling_3961_0_0, &direction_npccarolcling_3961_0_0, &direction_npccarolcling_3961_0_0, &direction_npccarolcling_3961_0_0, &direction_npccarolcling_3961_0_0, NULL, &direction_npccarolcling_3961_0_0, &direction_npccarolcling_3961_0_0, &direction_npccarolcling_3961_0_0, &direction_npccarolcling_3961_0_0, &direction_npccarolcling_3961_0_0, &direction_npccarolcling_3961_0_0, &direction_npccarolcling_3961_0_0, &direction_npccarolcling_3961_0_0, &direction_npccarolcling_3961_0_0, &direction_npccarolcling_3961_0_0, &direction_npccarolcling_3961_0_0, &direction_npccarolcling_3961_0_0, &direction_npccarolcling_3961_0_0, &direction_npccarolcling_3961_0_0, &direction_npccarolcling_3961_0_0};
static Animation * anim_array_npccarolcling_3961[1] = {&anim_npccarolcling_3961_0};
static Animations anim_npccarolcling_3961 = {1, &anim_array_npccarolcling_3961[0]};
static bool anim_npccarolcling_3961_initialized;
class NPCCarolCling_3961 : public Active
{
public:
    NPCCarolCling_3961(int x, int y) : Active(x, y, NPCCarolCling_3961_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_CarolCling", 14);
#endif
        set_visible(false);
        this->animations = &anim_npccarolcling_3961;
        if (!anim_npccarolcling_3961_initialized) {
            anim_npccarolcling_3961_initialized = true;
            images_npccarolcling_3961_0_0[0] = get_internal_image(5422);
            images_npccarolcling_3961_0_0[1] = get_internal_image(6593);
            images_npccarolcling_3961_0_0[2] = get_internal_image(6833);
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
FrameObject * create_npccarolcling_3961(int x, int y)
{
    return new (Active::pool.create()) NPCCarolCling_3961(x, y);
}
class DialogText2_3962 : public TextBlitter
{
public:
    DialogText2_3962(int x, int y) : TextBlitter(x, y, DialogText2_3962_type)
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
        set_text(std::string("Have your scientists examine it. You'll find that its mineral composition doesn't match anything", 96));
        has_callback = false;
        create_alterables();
    }
};
FrameObject * create_dialogtext2_3962(int x, int y)
{
    return new (TextBlitter::pool.create()) DialogText2_3962(x, y);
}
class DialogData_3963 : public Text
{
public:
    DialogData_3963(int x, int y) : Text(x, y, DialogData_3963_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Dialog Data", 11);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("05 24 to_12_03 Huh. So that's why your airships are boat-shaped...", 66));
        add_line(std::string("01 00 li_19_01 How could Zao do this\?", 37));
        add_line(std::string("05 00 to_13_01 He must have thought we were all he needed.", 58));
        add_line(std::string("01 24 li_19_02 We would've been ready if he had told us. No wonder Brevon's gotten away with everything. Our leaders are too", 124));
        add_line(std::string("01 00 li_xx_xx brain-dead to pay attention to anything but themselves!", 70));
        add_line(std::string("01 06 li_19_03 Never mind. I'm just... I don't know.", 52));
        add_line(std::string("05 00 to_13_02 It's alright.", 28));
        add_line(std::string("05 00 to_13_03 How far is the closest city\?", 43));
        add_line(std::string("01 00 li_19_04 Shang Tu is just a few miles east. The river should take us there.", 81));
        add_line(std::string("05 00 to_13_04 We'll give that panda guy an update on our situation. The Magister might be able to help.", 104));
        add_line(std::string("01 39 li_19_05 I hope he believes us...", 39));
        add_line(std::string("01 00 li_20_01 Things have been pretty crazy so far, huh\?", 57));
        add_line(std::string("03 51 mi_13_01 Yeah...", 22));
        add_line(std::string("01 72 li_20_02 How long have you been away from your parents\?", 61));
        add_line(std::string("03 54 mi_13_02 I'm not sure... It feels like a really long time.", 64));
        add_line(std::string("01 72 li_20_03 And you've been alone in the woods ever since\?", 61));
        add_line(std::string("03 54 mi_13_03 Yeah...", 22));
        add_line(std::string("01 72 li_20_04 I hope this doesn't sound weird, but... that's kind of impressive. I wouldn't survive a day without my treehouse.", 128));
        add_line(std::string("01 72 li_20_05 Hey... When this is all over, how about we have a girls' night out\? Just you and me\?", 99));
        add_line(std::string("03 51 mi_13_04 You mean... a playdate\?", 38));
        add_line(std::string("01 78 li_20_06 Something like that. We could try out some dresses, or maybe buy a huge plate of sushi and just pig out!", 119));
        add_line(std::string("03 39 mi_13_05 What about Carol\? Can she come too\?", 50));
        add_line(std::string("01 75 li_20_07 Good luck getting her to put a dress on.", 55));
        add_line(std::string("03 18 mi_13_06 Well, sure! I'd like that!", 41));
        add_line(std::string("01 27 li_20_08 Great!", 21));
        add_line(std::string("05 27 to_14_01 So, uh, how did you two meet anyway\? A green cat and a purple dragon girl seem like a weird mix.", 111));
        add_line(std::string("02 00 ca_18_01 Yeah. We were part of a street gang called the Red Scarves. We used to make crazy money from martial arts tournaments.", 133));
        add_line(std::string("05 00 to_14_02 Is that where you met Spade\?", 43));
        add_line(std::string("02 00 ca_18_02 Yep. He was cool at first, but, uh... things got weird.", 70));
        add_line(std::string("05 00 to_14_03 Why\?", 19));
        add_line(std::string("02 42 ca_18_03 Well, there's... there's lines we don't cross. And he crossed 'em.", 81));
        add_line(std::string("05 00 to_14_05 If Spade is Prince Dail's brother, doesn't that make him a Prince too\?", 85));
        add_line(std::string("02 00 ca_18_04 I guess so. He never talked about it.", 52));
        add_line(std::string("03 00 mi_13_07 Look everyone! The city!", 39));
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
FrameObject * create_dialogdata_3963(int x, int y)
{
    return new (Text::pool.create()) DialogData_3963(x, y);
}
class SBBackTrooper_3964 : public Backdrop
{
public:
    SBBackTrooper_3964(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_BackTrooper", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(16195);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_sbbacktrooper_3964(int x, int y)
{
    return new (Backdrop::pool.create()) SBBackTrooper_3964(x, y);
}
class TBTortureDevice4_3965 : public Backdrop
{
public:
    TBTortureDevice4_3965(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_TortureDevice 4", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(16205);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbtorturedevice4_3965(int x, int y)
{
    return new (Backdrop::pool.create()) TBTortureDevice4_3965(x, y);
}
static Image* images_tbbackwindow_3966_0_0[1];
static Direction direction_tbbackwindow_3966_0_0 = {0, 50, 50, 0, 1, images_tbbackwindow_3966_0_0, 1};
static Animation anim_tbbackwindow_3966_0 = {&direction_tbbackwindow_3966_0_0, &direction_tbbackwindow_3966_0_0, &direction_tbbackwindow_3966_0_0, &direction_tbbackwindow_3966_0_0, &direction_tbbackwindow_3966_0_0, &direction_tbbackwindow_3966_0_0, &direction_tbbackwindow_3966_0_0, &direction_tbbackwindow_3966_0_0, &direction_tbbackwindow_3966_0_0, &direction_tbbackwindow_3966_0_0, &direction_tbbackwindow_3966_0_0, &direction_tbbackwindow_3966_0_0, &direction_tbbackwindow_3966_0_0, &direction_tbbackwindow_3966_0_0, &direction_tbbackwindow_3966_0_0, &direction_tbbackwindow_3966_0_0, NULL, &direction_tbbackwindow_3966_0_0, &direction_tbbackwindow_3966_0_0, &direction_tbbackwindow_3966_0_0, &direction_tbbackwindow_3966_0_0, &direction_tbbackwindow_3966_0_0, &direction_tbbackwindow_3966_0_0, &direction_tbbackwindow_3966_0_0, &direction_tbbackwindow_3966_0_0, &direction_tbbackwindow_3966_0_0, &direction_tbbackwindow_3966_0_0, &direction_tbbackwindow_3966_0_0, &direction_tbbackwindow_3966_0_0, &direction_tbbackwindow_3966_0_0, &direction_tbbackwindow_3966_0_0, &direction_tbbackwindow_3966_0_0};
static Animation * anim_array_tbbackwindow_3966[1] = {&anim_tbbackwindow_3966_0};
static Animations anim_tbbackwindow_3966 = {1, &anim_array_tbbackwindow_3966[0]};
static bool anim_tbbackwindow_3966_initialized;
class TBBackWindow_3966 : public Active
{
public:
    TBBackWindow_3966(int x, int y) : Active(x, y, TBBackWindow_3966_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("TB_BackWindow", 13);
#endif
        this->animations = &anim_tbbackwindow_3966;
        if (!anim_tbbackwindow_3966_initialized) {
            anim_tbbackwindow_3966_initialized = true;
            images_tbbackwindow_3966_0_0[0] = get_internal_image(7518);
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
FrameObject * create_tbbackwindow_3966(int x, int y)
{
    return new (Active::pool.create()) TBBackWindow_3966(x, y);
}
class Backdrop2_3967 : public Backdrop
{
public:
    Backdrop2_3967(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 2", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7519);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop2_3967(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop2_3967(x, y);
}
class TBSpareSyntax_3968 : public Backdrop
{
public:
    TBSpareSyntax_3968(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_SpareSyntax", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(16187);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbsparesyntax_3968(int x, int y)
{
    return new (Backdrop::pool.create()) TBSpareSyntax_3968(x, y);
}
class TBTortureTerminal_3969 : public Backdrop
{
public:
    TBTortureTerminal_3969(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_TortureTerminal", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(16175);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbtortureterminal_3969(int x, int y)
{
    return new (Backdrop::pool.create()) TBTortureTerminal_3969(x, y);
}
static Image* images_tbtortureterminalscreen_3970_0_0[4];
static Direction direction_tbtortureterminalscreen_3970_0_0 = {0, 11, 11, 0, -1, images_tbtortureterminalscreen_3970_0_0, 4};
static Image* images_tbtortureterminalscreen_3970_0_1[2];
static Direction direction_tbtortureterminalscreen_3970_0_1 = {1, 50, 50, 0, -1, images_tbtortureterminalscreen_3970_0_1, 2};
static Animation anim_tbtortureterminalscreen_3970_0 = {&direction_tbtortureterminalscreen_3970_0_0, &direction_tbtortureterminalscreen_3970_0_1, &direction_tbtortureterminalscreen_3970_0_1, &direction_tbtortureterminalscreen_3970_0_1, &direction_tbtortureterminalscreen_3970_0_1, &direction_tbtortureterminalscreen_3970_0_1, &direction_tbtortureterminalscreen_3970_0_1, &direction_tbtortureterminalscreen_3970_0_1, &direction_tbtortureterminalscreen_3970_0_1, &direction_tbtortureterminalscreen_3970_0_1, &direction_tbtortureterminalscreen_3970_0_1, &direction_tbtortureterminalscreen_3970_0_1, &direction_tbtortureterminalscreen_3970_0_1, &direction_tbtortureterminalscreen_3970_0_1, &direction_tbtortureterminalscreen_3970_0_1, &direction_tbtortureterminalscreen_3970_0_1, &direction_tbtortureterminalscreen_3970_0_1, &direction_tbtortureterminalscreen_3970_0_0, &direction_tbtortureterminalscreen_3970_0_0, &direction_tbtortureterminalscreen_3970_0_0, &direction_tbtortureterminalscreen_3970_0_0, &direction_tbtortureterminalscreen_3970_0_0, &direction_tbtortureterminalscreen_3970_0_0, &direction_tbtortureterminalscreen_3970_0_0, &direction_tbtortureterminalscreen_3970_0_0, &direction_tbtortureterminalscreen_3970_0_0, &direction_tbtortureterminalscreen_3970_0_0, &direction_tbtortureterminalscreen_3970_0_0, &direction_tbtortureterminalscreen_3970_0_0, &direction_tbtortureterminalscreen_3970_0_0, &direction_tbtortureterminalscreen_3970_0_0, &direction_tbtortureterminalscreen_3970_0_0};
static Animation * anim_array_tbtortureterminalscreen_3970[1] = {&anim_tbtortureterminalscreen_3970_0};
static Animations anim_tbtortureterminalscreen_3970 = {1, &anim_array_tbtortureterminalscreen_3970[0]};
static bool anim_tbtortureterminalscreen_3970_initialized;
class TBTortureTerminalScreen_3970 : public Active
{
public:
    TBTortureTerminalScreen_3970(int x, int y) : Active(x, y, TBTortureTerminalScreen_3970_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("TB_TortureTerminalScreen", 24);
#endif
        this->animations = &anim_tbtortureterminalscreen_3970;
        if (!anim_tbtortureterminalscreen_3970_initialized) {
            anim_tbtortureterminalscreen_3970_initialized = true;
            images_tbtortureterminalscreen_3970_0_0[0] = get_internal_image(16178);
            images_tbtortureterminalscreen_3970_0_0[1] = get_internal_image(16177);
            images_tbtortureterminalscreen_3970_0_0[2] = get_internal_image(16180);
            images_tbtortureterminalscreen_3970_0_0[3] = get_internal_image(16181);
            images_tbtortureterminalscreen_3970_0_1[0] = get_internal_image(16178);
            images_tbtortureterminalscreen_3970_0_1[1] = get_internal_image(16239);
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
FrameObject * create_tbtortureterminalscreen_3970(int x, int y)
{
    return new (Active::pool.create()) TBTortureTerminalScreen_3970(x, y);
}
class TBTortureDevice1_3971 : public Backdrop
{
public:
    TBTortureDevice1_3971(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_TortureDevice1", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6835);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbtorturedevice1_3971(int x, int y)
{
    return new (Backdrop::pool.create()) TBTortureDevice1_3971(x, y);
}
class TBTortureDevice3_3972 : public Backdrop
{
public:
    TBTortureDevice3_3972(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_TortureDevice 3", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(16201);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbtorturedevice3_3972(int x, int y)
{
    return new (Backdrop::pool.create()) TBTortureDevice3_3972(x, y);
}
class TBTortureDevice2_3973 : public Backdrop
{
public:
    TBTortureDevice2_3973(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_TortureDevice 2", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7224);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbtorturedevice2_3973(int x, int y)
{
    return new (Backdrop::pool.create()) TBTortureDevice2_3973(x, y);
}
static Image* images_npclilactorture_3974_0_0[19];
static Direction direction_npclilactorture_3974_0_0 = {0, 0, 0, 0, 1, images_npclilactorture_3974_0_0, 19};
static Image* images_npclilactorture_3974_0_1[3];
static Direction direction_npclilactorture_3974_0_1 = {1, 90, 90, 0, -1, images_npclilactorture_3974_0_1, 3};
static Image* images_npclilactorture_3974_0_2[1];
static Direction direction_npclilactorture_3974_0_2 = {2, 50, 50, 0, 1, images_npclilactorture_3974_0_2, 1};
static Image* images_npclilactorture_3974_0_3[2];
static Direction direction_npclilactorture_3974_0_3 = {3, 50, 50, 0, -1, images_npclilactorture_3974_0_3, 2};
static Image* images_npclilactorture_3974_0_4[5];
static Direction direction_npclilactorture_3974_0_4 = {4, 50, 50, 0, 1, images_npclilactorture_3974_0_4, 5};
static Image* images_npclilactorture_3974_0_29[2];
static Direction direction_npclilactorture_3974_0_29 = {29, 12, 12, 0, -1, images_npclilactorture_3974_0_29, 2};
static Image* images_npclilactorture_3974_0_30[3];
static Direction direction_npclilactorture_3974_0_30 = {30, 0, 0, 0, 1, images_npclilactorture_3974_0_30, 3};
static Image* images_npclilactorture_3974_0_31[3];
static Direction direction_npclilactorture_3974_0_31 = {31, 12, 12, 0, 1, images_npclilactorture_3974_0_31, 3};
static Animation anim_npclilactorture_3974_0 = {&direction_npclilactorture_3974_0_0, &direction_npclilactorture_3974_0_1, &direction_npclilactorture_3974_0_2, &direction_npclilactorture_3974_0_3, &direction_npclilactorture_3974_0_4, &direction_npclilactorture_3974_0_4, &direction_npclilactorture_3974_0_4, &direction_npclilactorture_3974_0_4, &direction_npclilactorture_3974_0_4, &direction_npclilactorture_3974_0_4, &direction_npclilactorture_3974_0_4, &direction_npclilactorture_3974_0_4, &direction_npclilactorture_3974_0_4, &direction_npclilactorture_3974_0_4, &direction_npclilactorture_3974_0_4, &direction_npclilactorture_3974_0_4, &direction_npclilactorture_3974_0_4, &direction_npclilactorture_3974_0_29, &direction_npclilactorture_3974_0_29, &direction_npclilactorture_3974_0_29, &direction_npclilactorture_3974_0_29, &direction_npclilactorture_3974_0_29, &direction_npclilactorture_3974_0_29, &direction_npclilactorture_3974_0_29, &direction_npclilactorture_3974_0_29, &direction_npclilactorture_3974_0_29, &direction_npclilactorture_3974_0_29, &direction_npclilactorture_3974_0_29, &direction_npclilactorture_3974_0_29, &direction_npclilactorture_3974_0_29, &direction_npclilactorture_3974_0_30, &direction_npclilactorture_3974_0_31};
static Animation * anim_array_npclilactorture_3974[1] = {&anim_npclilactorture_3974_0};
static Animations anim_npclilactorture_3974 = {1, &anim_array_npclilactorture_3974[0]};
static bool anim_npclilactorture_3974_initialized;
class NPCLilacTorture_3974 : public Active
{
public:
    NPCLilacTorture_3974(int x, int y) : Active(x, y, NPCLilacTorture_3974_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_LilacTorture", 16);
#endif
        this->animations = &anim_npclilactorture_3974;
        if (!anim_npclilactorture_3974_initialized) {
            anim_npclilactorture_3974_initialized = true;
            images_npclilactorture_3974_0_0[0] = get_internal_image(9409);
            images_npclilactorture_3974_0_0[1] = get_internal_image(9409);
            images_npclilactorture_3974_0_0[2] = get_internal_image(9409);
            images_npclilactorture_3974_0_0[3] = get_internal_image(9325);
            images_npclilactorture_3974_0_0[4] = get_internal_image(8940);
            images_npclilactorture_3974_0_0[5] = get_internal_image(9410);
            images_npclilactorture_3974_0_0[6] = get_internal_image(8996);
            images_npclilactorture_3974_0_0[7] = get_internal_image(9428);
            images_npclilactorture_3974_0_0[8] = get_internal_image(11107);
            images_npclilactorture_3974_0_0[9] = get_internal_image(9412);
            images_npclilactorture_3974_0_0[10] = get_internal_image(11460);
            images_npclilactorture_3974_0_0[11] = get_internal_image(11459);
            images_npclilactorture_3974_0_0[12] = get_internal_image(11461);
            images_npclilactorture_3974_0_0[13] = get_internal_image(11462);
            images_npclilactorture_3974_0_0[14] = get_internal_image(11464);
            images_npclilactorture_3974_0_0[15] = get_internal_image(14625);
            images_npclilactorture_3974_0_0[16] = get_internal_image(14626);
            images_npclilactorture_3974_0_0[17] = get_internal_image(14624);
            images_npclilactorture_3974_0_0[18] = get_internal_image(12817);
            images_npclilactorture_3974_0_1[0] = get_internal_image(12812);
            images_npclilactorture_3974_0_1[1] = get_internal_image(11466);
            images_npclilactorture_3974_0_1[2] = get_internal_image(11465);
            images_npclilactorture_3974_0_2[0] = get_internal_image(14623);
            images_npclilactorture_3974_0_3[0] = get_internal_image(14623);
            images_npclilactorture_3974_0_3[1] = get_internal_image(16199);
            images_npclilactorture_3974_0_4[0] = get_internal_image(8901);
            images_npclilactorture_3974_0_4[1] = get_internal_image(8905);
            images_npclilactorture_3974_0_4[2] = get_internal_image(8995);
            images_npclilactorture_3974_0_4[3] = get_internal_image(9404);
            images_npclilactorture_3974_0_4[4] = get_internal_image(8973);
            images_npclilactorture_3974_0_29[0] = get_internal_image(6837);
            images_npclilactorture_3974_0_29[1] = get_internal_image(6838);
            images_npclilactorture_3974_0_30[0] = get_internal_image(5415);
            images_npclilactorture_3974_0_30[1] = get_internal_image(5882);
            images_npclilactorture_3974_0_30[2] = get_internal_image(6834);
            images_npclilactorture_3974_0_31[0] = get_internal_image(9409);
            images_npclilactorture_3974_0_31[1] = get_internal_image(5915);
            images_npclilactorture_3974_0_31[2] = get_internal_image(5416);
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
FrameObject * create_npclilactorture_3974(int x, int y)
{
    return new (Active::pool.create()) NPCLilacTorture_3974(x, y);
}
static Image* images_brevonartifact_3975_0_0[1];
static Direction direction_brevonartifact_3975_0_0 = {0, 50, 50, 0, 1, images_brevonartifact_3975_0_0, 1};
static Animation anim_brevonartifact_3975_0 = {&direction_brevonartifact_3975_0_0, &direction_brevonartifact_3975_0_0, &direction_brevonartifact_3975_0_0, &direction_brevonartifact_3975_0_0, &direction_brevonartifact_3975_0_0, &direction_brevonartifact_3975_0_0, &direction_brevonartifact_3975_0_0, &direction_brevonartifact_3975_0_0, &direction_brevonartifact_3975_0_0, &direction_brevonartifact_3975_0_0, &direction_brevonartifact_3975_0_0, &direction_brevonartifact_3975_0_0, &direction_brevonartifact_3975_0_0, &direction_brevonartifact_3975_0_0, &direction_brevonartifact_3975_0_0, &direction_brevonartifact_3975_0_0, NULL, &direction_brevonartifact_3975_0_0, &direction_brevonartifact_3975_0_0, &direction_brevonartifact_3975_0_0, &direction_brevonartifact_3975_0_0, &direction_brevonartifact_3975_0_0, &direction_brevonartifact_3975_0_0, &direction_brevonartifact_3975_0_0, &direction_brevonartifact_3975_0_0, &direction_brevonartifact_3975_0_0, &direction_brevonartifact_3975_0_0, &direction_brevonartifact_3975_0_0, &direction_brevonartifact_3975_0_0, &direction_brevonartifact_3975_0_0, &direction_brevonartifact_3975_0_0, &direction_brevonartifact_3975_0_0};
static Animation * anim_array_brevonartifact_3975[1] = {&anim_brevonartifact_3975_0};
static Animations anim_brevonartifact_3975 = {1, &anim_array_brevonartifact_3975[0]};
static bool anim_brevonartifact_3975_initialized;
class BrevonArtifact_3975 : public Active
{
public:
    BrevonArtifact_3975(int x, int y) : Active(x, y, BrevonArtifact_3975_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Brevon_Artifact", 15);
#endif
        this->animations = &anim_brevonartifact_3975;
        if (!anim_brevonartifact_3975_initialized) {
            anim_brevonartifact_3975_initialized = true;
            images_brevonartifact_3975_0_0[0] = get_internal_image(14509);
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
FrameObject * create_brevonartifact_3975(int x, int y)
{
    return new (Active::pool.create()) BrevonArtifact_3975(x, y);
}
static Image* images_npcsyntax_3976_0_0[2];
static Direction direction_npcsyntax_3976_0_0 = {0, 40, 40, 0, -1, images_npcsyntax_3976_0_0, 2};
static Image* images_npcsyntax_3976_0_16[2];
static Direction direction_npcsyntax_3976_0_16 = {16, 40, 40, 0, -1, images_npcsyntax_3976_0_16, 2};
static Image* images_npcsyntax_3976_0_24[2];
static Direction direction_npcsyntax_3976_0_24 = {24, 40, 40, 0, -1, images_npcsyntax_3976_0_24, 2};
static Animation anim_npcsyntax_3976_0 = {&direction_npcsyntax_3976_0_0, &direction_npcsyntax_3976_0_0, &direction_npcsyntax_3976_0_0, &direction_npcsyntax_3976_0_0, &direction_npcsyntax_3976_0_0, &direction_npcsyntax_3976_0_0, &direction_npcsyntax_3976_0_0, &direction_npcsyntax_3976_0_0, NULL, &direction_npcsyntax_3976_0_16, &direction_npcsyntax_3976_0_16, &direction_npcsyntax_3976_0_16, &direction_npcsyntax_3976_0_16, &direction_npcsyntax_3976_0_16, &direction_npcsyntax_3976_0_16, &direction_npcsyntax_3976_0_16, &direction_npcsyntax_3976_0_16, &direction_npcsyntax_3976_0_16, &direction_npcsyntax_3976_0_16, &direction_npcsyntax_3976_0_16, NULL, &direction_npcsyntax_3976_0_24, &direction_npcsyntax_3976_0_24, &direction_npcsyntax_3976_0_24, &direction_npcsyntax_3976_0_24, &direction_npcsyntax_3976_0_24, &direction_npcsyntax_3976_0_24, &direction_npcsyntax_3976_0_24, NULL, &direction_npcsyntax_3976_0_0, &direction_npcsyntax_3976_0_0, &direction_npcsyntax_3976_0_0};
static Image* images_npcsyntax_3976_5_0[8];
static Direction direction_npcsyntax_3976_5_0 = {0, 40, 40, 0, -1, images_npcsyntax_3976_5_0, 8};
static Image* images_npcsyntax_3976_5_16[8];
static Direction direction_npcsyntax_3976_5_16 = {16, 40, 40, 0, -1, images_npcsyntax_3976_5_16, 8};
static Animation anim_npcsyntax_3976_5 = {&direction_npcsyntax_3976_5_0, &direction_npcsyntax_3976_5_0, &direction_npcsyntax_3976_5_0, &direction_npcsyntax_3976_5_0, &direction_npcsyntax_3976_5_0, &direction_npcsyntax_3976_5_0, &direction_npcsyntax_3976_5_0, &direction_npcsyntax_3976_5_0, NULL, &direction_npcsyntax_3976_5_16, &direction_npcsyntax_3976_5_16, &direction_npcsyntax_3976_5_16, &direction_npcsyntax_3976_5_16, &direction_npcsyntax_3976_5_16, &direction_npcsyntax_3976_5_16, &direction_npcsyntax_3976_5_16, &direction_npcsyntax_3976_5_16, &direction_npcsyntax_3976_5_16, &direction_npcsyntax_3976_5_16, &direction_npcsyntax_3976_5_16, &direction_npcsyntax_3976_5_16, &direction_npcsyntax_3976_5_16, &direction_npcsyntax_3976_5_16, &direction_npcsyntax_3976_5_16, NULL, &direction_npcsyntax_3976_5_0, &direction_npcsyntax_3976_5_0, &direction_npcsyntax_3976_5_0, &direction_npcsyntax_3976_5_0, &direction_npcsyntax_3976_5_0, &direction_npcsyntax_3976_5_0, &direction_npcsyntax_3976_5_0};
static Image* images_npcsyntax_3976_7_0[18];
static Direction direction_npcsyntax_3976_7_0 = {0, 70, 70, 0, 1, images_npcsyntax_3976_7_0, 18};
static Image* images_npcsyntax_3976_7_16[18];
static Direction direction_npcsyntax_3976_7_16 = {16, 70, 70, 0, 1, images_npcsyntax_3976_7_16, 18};
static Animation anim_npcsyntax_3976_7 = {&direction_npcsyntax_3976_7_0, &direction_npcsyntax_3976_7_0, &direction_npcsyntax_3976_7_0, &direction_npcsyntax_3976_7_0, &direction_npcsyntax_3976_7_0, &direction_npcsyntax_3976_7_0, &direction_npcsyntax_3976_7_0, &direction_npcsyntax_3976_7_0, NULL, &direction_npcsyntax_3976_7_16, &direction_npcsyntax_3976_7_16, &direction_npcsyntax_3976_7_16, &direction_npcsyntax_3976_7_16, &direction_npcsyntax_3976_7_16, &direction_npcsyntax_3976_7_16, &direction_npcsyntax_3976_7_16, &direction_npcsyntax_3976_7_16, &direction_npcsyntax_3976_7_16, &direction_npcsyntax_3976_7_16, &direction_npcsyntax_3976_7_16, &direction_npcsyntax_3976_7_16, &direction_npcsyntax_3976_7_16, &direction_npcsyntax_3976_7_16, &direction_npcsyntax_3976_7_16, NULL, &direction_npcsyntax_3976_7_0, &direction_npcsyntax_3976_7_0, &direction_npcsyntax_3976_7_0, &direction_npcsyntax_3976_7_0, &direction_npcsyntax_3976_7_0, &direction_npcsyntax_3976_7_0, &direction_npcsyntax_3976_7_0};
static Animation * anim_array_npcsyntax_3976[8] = {&anim_npcsyntax_3976_0, NULL, NULL, NULL, NULL, &anim_npcsyntax_3976_5, NULL, &anim_npcsyntax_3976_7};
static Animations anim_npcsyntax_3976 = {8, &anim_array_npcsyntax_3976[0]};
static bool anim_npcsyntax_3976_initialized;
class NPCSyntax_3976 : public Active
{
public:
    NPCSyntax_3976(int x, int y) : Active(x, y, NPCSyntax_3976_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_Syntax", 10);
#endif
        this->animations = &anim_npcsyntax_3976;
        if (!anim_npcsyntax_3976_initialized) {
            anim_npcsyntax_3976_initialized = true;
            images_npcsyntax_3976_0_0[0] = get_internal_image(6928);
            images_npcsyntax_3976_0_0[1] = get_internal_image(6930);
            images_npcsyntax_3976_0_16[0] = get_internal_image(11747);
            images_npcsyntax_3976_0_16[1] = get_internal_image(11748);
            images_npcsyntax_3976_0_24[0] = get_internal_image(753);
            images_npcsyntax_3976_0_24[1] = get_internal_image(752);
            images_npcsyntax_3976_5_0[0] = get_internal_image(6928);
            images_npcsyntax_3976_5_0[1] = get_internal_image(6930);
            images_npcsyntax_3976_5_0[2] = get_internal_image(2565);
            images_npcsyntax_3976_5_0[3] = get_internal_image(2708);
            images_npcsyntax_3976_5_0[4] = get_internal_image(7970);
            images_npcsyntax_3976_5_0[5] = get_internal_image(7967);
            images_npcsyntax_3976_5_0[6] = get_internal_image(2565);
            images_npcsyntax_3976_5_0[7] = get_internal_image(2708);
            images_npcsyntax_3976_5_16[0] = get_internal_image(11747);
            images_npcsyntax_3976_5_16[1] = get_internal_image(11748);
            images_npcsyntax_3976_5_16[2] = get_internal_image(14502);
            images_npcsyntax_3976_5_16[3] = get_internal_image(14504);
            images_npcsyntax_3976_5_16[4] = get_internal_image(14753);
            images_npcsyntax_3976_5_16[5] = get_internal_image(14790);
            images_npcsyntax_3976_5_16[6] = get_internal_image(14502);
            images_npcsyntax_3976_5_16[7] = get_internal_image(14504);
            images_npcsyntax_3976_7_0[0] = get_internal_image(14480);
            images_npcsyntax_3976_7_0[1] = get_internal_image(14477);
            images_npcsyntax_3976_7_0[2] = get_internal_image(14468);
            images_npcsyntax_3976_7_0[3] = get_internal_image(14473);
            images_npcsyntax_3976_7_0[4] = get_internal_image(14469);
            images_npcsyntax_3976_7_0[5] = get_internal_image(14468);
            images_npcsyntax_3976_7_0[6] = get_internal_image(4034);
            images_npcsyntax_3976_7_0[7] = get_internal_image(14480);
            images_npcsyntax_3976_7_0[8] = get_internal_image(14477);
            images_npcsyntax_3976_7_0[9] = get_internal_image(14468);
            images_npcsyntax_3976_7_0[10] = get_internal_image(14473);
            images_npcsyntax_3976_7_0[11] = get_internal_image(14469);
            images_npcsyntax_3976_7_0[12] = get_internal_image(14468);
            images_npcsyntax_3976_7_0[13] = get_internal_image(4034);
            images_npcsyntax_3976_7_0[14] = get_internal_image(14467);
            images_npcsyntax_3976_7_0[15] = get_internal_image(6928);
            images_npcsyntax_3976_7_0[16] = get_internal_image(11673);
            images_npcsyntax_3976_7_0[17] = get_internal_image(6928);
            images_npcsyntax_3976_7_16[0] = get_internal_image(14481);
            images_npcsyntax_3976_7_16[1] = get_internal_image(14482);
            images_npcsyntax_3976_7_16[2] = get_internal_image(14483);
            images_npcsyntax_3976_7_16[3] = get_internal_image(14484);
            images_npcsyntax_3976_7_16[4] = get_internal_image(14485);
            images_npcsyntax_3976_7_16[5] = get_internal_image(14483);
            images_npcsyntax_3976_7_16[6] = get_internal_image(14486);
            images_npcsyntax_3976_7_16[7] = get_internal_image(14481);
            images_npcsyntax_3976_7_16[8] = get_internal_image(14482);
            images_npcsyntax_3976_7_16[9] = get_internal_image(14483);
            images_npcsyntax_3976_7_16[10] = get_internal_image(14484);
            images_npcsyntax_3976_7_16[11] = get_internal_image(14485);
            images_npcsyntax_3976_7_16[12] = get_internal_image(14483);
            images_npcsyntax_3976_7_16[13] = get_internal_image(14486);
            images_npcsyntax_3976_7_16[14] = get_internal_image(14487);
            images_npcsyntax_3976_7_16[15] = get_internal_image(11747);
            images_npcsyntax_3976_7_16[16] = get_internal_image(11671);
            images_npcsyntax_3976_7_16[17] = get_internal_image(11747);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(4, 130);
        alterables->values.set(5, 50);
        alterables->values.set(6, 30);
        alterables->values.set(7, 30);
        alterables->values.set(8, 180);
        alterables->values.set(9, 315);
        alterables->values.set(11, 1);
        alterables->values.set(14, -1);
    }
};
FrameObject * create_npcsyntax_3976(int x, int y)
{
    return new (Active::pool.create()) NPCSyntax_3976(x, y);
}
static Image* images_tbtorturechamberglass_3977_0_0[1];
static Direction direction_tbtorturechamberglass_3977_0_0 = {0, 50, 50, 0, 1, images_tbtorturechamberglass_3977_0_0, 1};
static Animation anim_tbtorturechamberglass_3977_0 = {&direction_tbtorturechamberglass_3977_0_0, &direction_tbtorturechamberglass_3977_0_0, &direction_tbtorturechamberglass_3977_0_0, &direction_tbtorturechamberglass_3977_0_0, &direction_tbtorturechamberglass_3977_0_0, &direction_tbtorturechamberglass_3977_0_0, &direction_tbtorturechamberglass_3977_0_0, &direction_tbtorturechamberglass_3977_0_0, &direction_tbtorturechamberglass_3977_0_0, &direction_tbtorturechamberglass_3977_0_0, &direction_tbtorturechamberglass_3977_0_0, &direction_tbtorturechamberglass_3977_0_0, &direction_tbtorturechamberglass_3977_0_0, &direction_tbtorturechamberglass_3977_0_0, &direction_tbtorturechamberglass_3977_0_0, &direction_tbtorturechamberglass_3977_0_0, NULL, &direction_tbtorturechamberglass_3977_0_0, &direction_tbtorturechamberglass_3977_0_0, &direction_tbtorturechamberglass_3977_0_0, &direction_tbtorturechamberglass_3977_0_0, &direction_tbtorturechamberglass_3977_0_0, &direction_tbtorturechamberglass_3977_0_0, &direction_tbtorturechamberglass_3977_0_0, &direction_tbtorturechamberglass_3977_0_0, &direction_tbtorturechamberglass_3977_0_0, &direction_tbtorturechamberglass_3977_0_0, &direction_tbtorturechamberglass_3977_0_0, &direction_tbtorturechamberglass_3977_0_0, &direction_tbtorturechamberglass_3977_0_0, &direction_tbtorturechamberglass_3977_0_0, &direction_tbtorturechamberglass_3977_0_0};
static Animation * anim_array_tbtorturechamberglass_3977[1] = {&anim_tbtorturechamberglass_3977_0};
static Animations anim_tbtorturechamberglass_3977 = {1, &anim_array_tbtorturechamberglass_3977[0]};
static bool anim_tbtorturechamberglass_3977_initialized;
class TBTortureChamberGlass_3977 : public Active
{
public:
    TBTortureChamberGlass_3977(int x, int y) : Active(x, y, TBTortureChamberGlass_3977_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("TB_TortureChamberGlass", 22);
#endif
        this->animations = &anim_tbtorturechamberglass_3977;
        if (!anim_tbtorturechamberglass_3977_initialized) {
            anim_tbtorturechamberglass_3977_initialized = true;
            images_tbtorturechamberglass_3977_0_0[0] = get_internal_image(15230);
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
FrameObject * create_tbtorturechamberglass_3977(int x, int y)
{
    return new (Active::pool.create()) TBTortureChamberGlass_3977(x, y);
}
static Image* images_torturelightning_3978_0_0[7];
static Direction direction_torturelightning_3978_0_0 = {0, 100, 100, 0, -1, images_torturelightning_3978_0_0, 7};
static Image* images_torturelightning_3978_0_1[6];
static Direction direction_torturelightning_3978_0_1 = {1, 100, 100, 0, -1, images_torturelightning_3978_0_1, 6};
static Image* images_torturelightning_3978_0_8[4];
static Direction direction_torturelightning_3978_0_8 = {8, 50, 50, 0, -1, images_torturelightning_3978_0_8, 4};
static Animation anim_torturelightning_3978_0 = {&direction_torturelightning_3978_0_0, &direction_torturelightning_3978_0_1, &direction_torturelightning_3978_0_1, &direction_torturelightning_3978_0_1, &direction_torturelightning_3978_0_1, &direction_torturelightning_3978_0_8, &direction_torturelightning_3978_0_8, &direction_torturelightning_3978_0_8, &direction_torturelightning_3978_0_8, &direction_torturelightning_3978_0_8, &direction_torturelightning_3978_0_8, &direction_torturelightning_3978_0_8, &direction_torturelightning_3978_0_8, &direction_torturelightning_3978_0_8, &direction_torturelightning_3978_0_8, &direction_torturelightning_3978_0_8, &direction_torturelightning_3978_0_8, &direction_torturelightning_3978_0_8, &direction_torturelightning_3978_0_8, &direction_torturelightning_3978_0_8, NULL, &direction_torturelightning_3978_0_0, &direction_torturelightning_3978_0_0, &direction_torturelightning_3978_0_0, &direction_torturelightning_3978_0_0, &direction_torturelightning_3978_0_0, &direction_torturelightning_3978_0_0, &direction_torturelightning_3978_0_0, &direction_torturelightning_3978_0_0, &direction_torturelightning_3978_0_0, &direction_torturelightning_3978_0_0, &direction_torturelightning_3978_0_0};
static Animation * anim_array_torturelightning_3978[1] = {&anim_torturelightning_3978_0};
static Animations anim_torturelightning_3978 = {1, &anim_array_torturelightning_3978[0]};
static bool anim_torturelightning_3978_initialized;
class TortureLightning_3978 : public Active
{
public:
    TortureLightning_3978(int x, int y) : Active(x, y, TortureLightning_3978_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("TortureLightning", 16);
#endif
        set_visible(false);
        this->animations = &anim_torturelightning_3978;
        if (!anim_torturelightning_3978_initialized) {
            anim_torturelightning_3978_initialized = true;
            images_torturelightning_3978_0_0[0] = get_internal_image(16200);
            images_torturelightning_3978_0_0[1] = get_internal_image(16198);
            images_torturelightning_3978_0_0[2] = get_internal_image(16197);
            images_torturelightning_3978_0_0[3] = get_internal_image(9071);
            images_torturelightning_3978_0_0[4] = get_internal_image(16194);
            images_torturelightning_3978_0_0[5] = get_internal_image(16196);
            images_torturelightning_3978_0_0[6] = get_internal_image(16192);
            images_torturelightning_3978_0_1[0] = get_internal_image(16186);
            images_torturelightning_3978_0_1[1] = get_internal_image(11729);
            images_torturelightning_3978_0_1[2] = get_internal_image(16191);
            images_torturelightning_3978_0_1[3] = get_internal_image(16042);
            images_torturelightning_3978_0_1[4] = get_internal_image(16193);
            images_torturelightning_3978_0_1[5] = get_internal_image(16192);
            images_torturelightning_3978_0_8[0] = get_internal_image(8920);
            images_torturelightning_3978_0_8[1] = get_internal_image(11729);
            images_torturelightning_3978_0_8[2] = get_internal_image(10785);
            images_torturelightning_3978_0_8[3] = get_internal_image(16042);
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
FrameObject * create_torturelightning_3978(int x, int y)
{
    return new (Active::pool.create()) TortureLightning_3978(x, y);
}
class Message2_3979 : public TextBlitter
{
public:
    Message2_3979(int x, int y) : TextBlitter(x, y, Message2_3979_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Message 2", 9);
#endif
        set_visible(false);
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
FrameObject * create_message2_3979(int x, int y)
{
    return new (TextBlitter::pool.create()) Message2_3979(x, y);
}
class DialogData_3980 : public Text
{
public:
    DialogData_3980(int x, int y) : Text(x, y, DialogData_3980_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Dialog Data", 11);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("06 00 se_06_01 Looks like it's payback time!", 44));
        add_line(std::string("01 24 li_28_01 Let him go!", 26));
        add_line(std::string("06 00 se_06_02 Or else what\?", 28));
        add_line(std::string("01 66 li_28_02 Remember what happened the last time you messed with a dragon\?! LET HIM GO!", 90));
        add_line(std::string("06 15 se_06_03 Good girl! I want you to be nice and angry for THIS!", 67));
        add_line(std::string("12 00 br_05_02 Before you decided to throw your life away and interfere with our mission, you should have asked yourself one very important question...", 151));
        add_line(std::string("12 00 br_05_03 What makes you so special\?", 41));
        add_line(std::string("12 00 br_06_01 Why do you fight\?", 32));
        add_line(std::string("12 00 br_06_02 I know you're awake. Answer the question. Why do you fight\?", 74));
        add_line(std::string("01 00 li_29_01 For my friends. I'll do whatever it takes to keep them safe from freaks like you.", 96));
        add_line(std::string("12 00 br_06_03 Keep them safe\? Every move you've made has put them directly in harm's way.", 90));
        add_line(std::string("12 16 br_06_04 Destroying our property, assisting our sworn enemies, attempting sabotage against our mission which,", 115));
        add_line(std::string("12 16 br_xx_xx by the way, has nothing to do with your world.", 61));
        add_line(std::string("12 16 br_06_05 We are leaving this barbaric planet behind as soon as our ship is repaired.", 90));
        add_line(std::string("01 06 li_29_02 You forgot the part where you took our Kingdom Stone! Where you ruined years of peace between my people and put thousands in danger!", 147));
        add_line(std::string("12 16 br_06_06 An unfortunate side effect, yes... but I wouldn't have resorted to such drastic measures if you had the", 118));
        add_line(std::string("12 16 br_xx_xx common sense to stay out of our affairs.", 55));
        add_line(std::string("12 16 br_06_07 Thanks to you, your companions are in more danger than ever.", 75));
        add_line(std::string("12 00 br_06_08 Allow me to show you the consequences of your stupidity.", 71));
        add_line(std::string("05 39 to_18_01 Lilac!", 21));
        add_line(std::string("01 12 li_29_04 I had to do something!", 37));
        add_line(std::string("12 00 br_06_09 Answers, Commander. Give them to me.", 51));
        add_line(std::string("12 00 br_06_10 Don't be a fool. You've seen how far I'll go to get the information I need.", 90));
        add_line(std::string("01 12 li_29_05 Don't tell him anything!", 39));
        add_line(std::string("12 00 br_06_11 Very well. Don't say I didn't warn you.", 54));
        add_line(std::string("05 42 to_18_02 I'm the last one! There's no one else left! There, you happy\?!", 77));
        add_line(std::string("05 39 to_18_03 I'm telling the truth!", 37));
        add_line(std::string("12 00 br_06_12 That's nice to know, but I was more interested in your resolve. You crack easily, it seems.", 106));
        add_line(std::string("12 08 br_06_13 And this one... I have a funny feeling about you. I'll bet I could hack at your limbs all day and you'd still find a way to bite back.", 149));
        add_line(std::string("01 15 li_29_10 I'll do more than that you monster!!", 51));
        add_line(std::string("12 08 br_06_14 When we've lured the rest of your group into our hands, you'll be at the top of our execution list.", 114));
        add_line(std::string("13 00 sx_04_01 Sir, the Chasers are within visual range.", 56));
        add_line(std::string("12 00 br_06_15 Let's see what they're made of.", 46));
        add_line(std::string("03 00 mi_20_01 Lilac's scent is this way!", 41));
        add_line(std::string("02 63 ca_28_01 LILAC!", 21));
        add_line(std::string("02 66 ca_28_03 I'm sorry I ran off without you! I'll never do it again!", 71));
        add_line(std::string("01 99 li_30_01 We gotta leave, now!", 35));
        add_line(std::string("12 00 br_07_01 You know, it was so smart of your Coalition to attack my ship above an inhabited planet.", 103));
        add_line(std::string("12 00 br_07_02 What ever happened to that Prime Directive of yours, hm\?", 71));
        add_line(std::string("05 15 to_19_01 You think you're some blameless force of nature, don't you\?! That the rules don't apply to you\?!", 111));
        add_line(std::string("12 00 br_07_03 It's my world on the line. You know exactly how far I'll go to ensure its safety.", 96));
        add_line(std::string("05 15 to_19_02 Your world is in danger because of the suffering you've caused to the other worlds!", 98));
        add_line(std::string("12 60 br_07_04 My actions have hurt people\? I had no idea. I'm dreadfully sorry.", 80));
        add_line(std::string("03 24 mi_20_02 Really\?", 22));
        add_line(std::string("02 75 ca_28_04 He's lying.", 26));
        add_line(std::string("12 16 br_07_05 I have a lot of work to do, so let's make this quick. Kill them.", 79));
        add_line(std::string("03 60 mi_20_03 I can't hold it!", 31));
        add_line(std::string("13 00 sx_05_01 PRESSURE OVERLOAD DETECTED. THE FACILITY WILL IMPLODE IN SIX MINUTES.", 84));
        add_line(std::string("12 28 br_07_06 Don't let them escape! Find out who did this!", 60));
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
FrameObject * create_dialogdata_3980(int x, int y)
{
    return new (Text::pool.create()) DialogData_3980(x, y);
}
class LevelParallaxPiece8_3981 : public SystemBox
{
public:
    LevelParallaxPiece8_3981(int x, int y) : SystemBox(x, y, LevelParallaxPiece8_3981_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 8", 22);
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
FrameObject * create_levelparallaxpiece8_3981(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece8_3981(x, y);
}
class LevelParallaxPiece1_3982 : public SystemBox
{
public:
    LevelParallaxPiece1_3982(int x, int y) : SystemBox(x, y, LevelParallaxPiece1_3982_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 1", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 180;
        type = PATTERN_IMAGE;
        image = get_internal_image(1983);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece1_3982(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece1_3982(x, y);
}
static Image* images_playerdragontail_3983_0_0[1];
static Direction direction_playerdragontail_3983_0_0 = {0, 50, 50, 0, 1, images_playerdragontail_3983_0_0, 1};
static Animation anim_playerdragontail_3983_0 = {&direction_playerdragontail_3983_0_0, &direction_playerdragontail_3983_0_0, &direction_playerdragontail_3983_0_0, &direction_playerdragontail_3983_0_0, &direction_playerdragontail_3983_0_0, &direction_playerdragontail_3983_0_0, &direction_playerdragontail_3983_0_0, &direction_playerdragontail_3983_0_0, &direction_playerdragontail_3983_0_0, &direction_playerdragontail_3983_0_0, &direction_playerdragontail_3983_0_0, &direction_playerdragontail_3983_0_0, &direction_playerdragontail_3983_0_0, &direction_playerdragontail_3983_0_0, &direction_playerdragontail_3983_0_0, &direction_playerdragontail_3983_0_0, NULL, &direction_playerdragontail_3983_0_0, &direction_playerdragontail_3983_0_0, &direction_playerdragontail_3983_0_0, &direction_playerdragontail_3983_0_0, &direction_playerdragontail_3983_0_0, &direction_playerdragontail_3983_0_0, &direction_playerdragontail_3983_0_0, &direction_playerdragontail_3983_0_0, &direction_playerdragontail_3983_0_0, &direction_playerdragontail_3983_0_0, &direction_playerdragontail_3983_0_0, &direction_playerdragontail_3983_0_0, &direction_playerdragontail_3983_0_0, &direction_playerdragontail_3983_0_0, &direction_playerdragontail_3983_0_0};
static Animation * anim_array_playerdragontail_3983[1] = {&anim_playerdragontail_3983_0};
static Animations anim_playerdragontail_3983 = {1, &anim_array_playerdragontail_3983[0]};
static bool anim_playerdragontail_3983_initialized;
class PlayerDragonTail_3983 : public Active
{
public:
    PlayerDragonTail_3983(int x, int y) : Active(x, y, PlayerDragonTail_3983_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_DragonTail", 17);
#endif
        this->animations = &anim_playerdragontail_3983;
        if (!anim_playerdragontail_3983_initialized) {
            anim_playerdragontail_3983_initialized = true;
            images_playerdragontail_3983_0_0[0] = get_internal_image(13368);
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
FrameObject * create_playerdragontail_3983(int x, int y)
{
    return new (Active::pool.create()) PlayerDragonTail_3983(x, y);
}
static Image* images_playerdragonhead_3984_0_0[3];
static Direction direction_playerdragonhead_3984_0_0 = {0, 0, 0, 0, 1, images_playerdragonhead_3984_0_0, 3};
static Animation anim_playerdragonhead_3984_0 = {&direction_playerdragonhead_3984_0_0, &direction_playerdragonhead_3984_0_0, &direction_playerdragonhead_3984_0_0, &direction_playerdragonhead_3984_0_0, &direction_playerdragonhead_3984_0_0, &direction_playerdragonhead_3984_0_0, &direction_playerdragonhead_3984_0_0, &direction_playerdragonhead_3984_0_0, &direction_playerdragonhead_3984_0_0, &direction_playerdragonhead_3984_0_0, &direction_playerdragonhead_3984_0_0, &direction_playerdragonhead_3984_0_0, &direction_playerdragonhead_3984_0_0, &direction_playerdragonhead_3984_0_0, &direction_playerdragonhead_3984_0_0, &direction_playerdragonhead_3984_0_0, NULL, &direction_playerdragonhead_3984_0_0, &direction_playerdragonhead_3984_0_0, &direction_playerdragonhead_3984_0_0, &direction_playerdragonhead_3984_0_0, &direction_playerdragonhead_3984_0_0, &direction_playerdragonhead_3984_0_0, &direction_playerdragonhead_3984_0_0, &direction_playerdragonhead_3984_0_0, &direction_playerdragonhead_3984_0_0, &direction_playerdragonhead_3984_0_0, &direction_playerdragonhead_3984_0_0, &direction_playerdragonhead_3984_0_0, &direction_playerdragonhead_3984_0_0, &direction_playerdragonhead_3984_0_0, &direction_playerdragonhead_3984_0_0};
static Animation * anim_array_playerdragonhead_3984[1] = {&anim_playerdragonhead_3984_0};
static Animations anim_playerdragonhead_3984 = {1, &anim_array_playerdragonhead_3984[0]};
static bool anim_playerdragonhead_3984_initialized;
class PlayerDragonHead_3984 : public Active
{
public:
    PlayerDragonHead_3984(int x, int y) : Active(x, y, PlayerDragonHead_3984_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_DragonHead", 17);
#endif
        this->animations = &anim_playerdragonhead_3984;
        if (!anim_playerdragonhead_3984_initialized) {
            anim_playerdragonhead_3984_initialized = true;
            images_playerdragonhead_3984_0_0[0] = get_internal_image(13371);
            images_playerdragonhead_3984_0_0[1] = get_internal_image(13373);
            images_playerdragonhead_3984_0_0[2] = get_internal_image(13374);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(4, 150);
    }
};
FrameObject * create_playerdragonhead_3984(int x, int y)
{
    return new (Active::pool.create()) PlayerDragonHead_3984(x, y);
}
static Image* images_playerdragonrider_3985_0_0[5];
static Direction direction_playerdragonrider_3985_0_0 = {0, 50, 50, 0, -1, images_playerdragonrider_3985_0_0, 5};
static Image* images_playerdragonrider_3985_0_1[5];
static Direction direction_playerdragonrider_3985_0_1 = {1, 50, 50, 0, -1, images_playerdragonrider_3985_0_1, 5};
static Animation anim_playerdragonrider_3985_0 = {&direction_playerdragonrider_3985_0_0, &direction_playerdragonrider_3985_0_1, &direction_playerdragonrider_3985_0_1, &direction_playerdragonrider_3985_0_1, &direction_playerdragonrider_3985_0_1, &direction_playerdragonrider_3985_0_1, &direction_playerdragonrider_3985_0_1, &direction_playerdragonrider_3985_0_1, &direction_playerdragonrider_3985_0_1, &direction_playerdragonrider_3985_0_1, &direction_playerdragonrider_3985_0_1, &direction_playerdragonrider_3985_0_1, &direction_playerdragonrider_3985_0_1, &direction_playerdragonrider_3985_0_1, &direction_playerdragonrider_3985_0_1, &direction_playerdragonrider_3985_0_1, &direction_playerdragonrider_3985_0_1, &direction_playerdragonrider_3985_0_0, &direction_playerdragonrider_3985_0_0, &direction_playerdragonrider_3985_0_0, &direction_playerdragonrider_3985_0_0, &direction_playerdragonrider_3985_0_0, &direction_playerdragonrider_3985_0_0, &direction_playerdragonrider_3985_0_0, &direction_playerdragonrider_3985_0_0, &direction_playerdragonrider_3985_0_0, &direction_playerdragonrider_3985_0_0, &direction_playerdragonrider_3985_0_0, &direction_playerdragonrider_3985_0_0, &direction_playerdragonrider_3985_0_0, &direction_playerdragonrider_3985_0_0, &direction_playerdragonrider_3985_0_0};
static Image* images_playerdragonrider_3985_7_0[1];
static Direction direction_playerdragonrider_3985_7_0 = {0, 50, 50, 0, -1, images_playerdragonrider_3985_7_0, 1};
static Image* images_playerdragonrider_3985_7_1[1];
static Direction direction_playerdragonrider_3985_7_1 = {1, 50, 50, 0, -1, images_playerdragonrider_3985_7_1, 1};
static Animation anim_playerdragonrider_3985_7 = {&direction_playerdragonrider_3985_7_0, &direction_playerdragonrider_3985_7_1, &direction_playerdragonrider_3985_7_1, &direction_playerdragonrider_3985_7_1, &direction_playerdragonrider_3985_7_1, &direction_playerdragonrider_3985_7_1, &direction_playerdragonrider_3985_7_1, &direction_playerdragonrider_3985_7_1, &direction_playerdragonrider_3985_7_1, &direction_playerdragonrider_3985_7_1, &direction_playerdragonrider_3985_7_1, &direction_playerdragonrider_3985_7_1, &direction_playerdragonrider_3985_7_1, &direction_playerdragonrider_3985_7_1, &direction_playerdragonrider_3985_7_1, &direction_playerdragonrider_3985_7_1, &direction_playerdragonrider_3985_7_1, &direction_playerdragonrider_3985_7_0, &direction_playerdragonrider_3985_7_0, &direction_playerdragonrider_3985_7_0, &direction_playerdragonrider_3985_7_0, &direction_playerdragonrider_3985_7_0, &direction_playerdragonrider_3985_7_0, &direction_playerdragonrider_3985_7_0, &direction_playerdragonrider_3985_7_0, &direction_playerdragonrider_3985_7_0, &direction_playerdragonrider_3985_7_0, &direction_playerdragonrider_3985_7_0, &direction_playerdragonrider_3985_7_0, &direction_playerdragonrider_3985_7_0, &direction_playerdragonrider_3985_7_0, &direction_playerdragonrider_3985_7_0};
static Image* images_playerdragonrider_3985_8_0[1];
static Direction direction_playerdragonrider_3985_8_0 = {0, 50, 50, 0, -1, images_playerdragonrider_3985_8_0, 1};
static Image* images_playerdragonrider_3985_8_1[1];
static Direction direction_playerdragonrider_3985_8_1 = {1, 50, 50, 0, -1, images_playerdragonrider_3985_8_1, 1};
static Animation anim_playerdragonrider_3985_8 = {&direction_playerdragonrider_3985_8_0, &direction_playerdragonrider_3985_8_1, &direction_playerdragonrider_3985_8_1, &direction_playerdragonrider_3985_8_1, &direction_playerdragonrider_3985_8_1, &direction_playerdragonrider_3985_8_1, &direction_playerdragonrider_3985_8_1, &direction_playerdragonrider_3985_8_1, &direction_playerdragonrider_3985_8_1, &direction_playerdragonrider_3985_8_1, &direction_playerdragonrider_3985_8_1, &direction_playerdragonrider_3985_8_1, &direction_playerdragonrider_3985_8_1, &direction_playerdragonrider_3985_8_1, &direction_playerdragonrider_3985_8_1, &direction_playerdragonrider_3985_8_1, &direction_playerdragonrider_3985_8_1, &direction_playerdragonrider_3985_8_0, &direction_playerdragonrider_3985_8_0, &direction_playerdragonrider_3985_8_0, &direction_playerdragonrider_3985_8_0, &direction_playerdragonrider_3985_8_0, &direction_playerdragonrider_3985_8_0, &direction_playerdragonrider_3985_8_0, &direction_playerdragonrider_3985_8_0, &direction_playerdragonrider_3985_8_0, &direction_playerdragonrider_3985_8_0, &direction_playerdragonrider_3985_8_0, &direction_playerdragonrider_3985_8_0, &direction_playerdragonrider_3985_8_0, &direction_playerdragonrider_3985_8_0, &direction_playerdragonrider_3985_8_0};
static Image* images_playerdragonrider_3985_9_0[1];
static Direction direction_playerdragonrider_3985_9_0 = {0, 50, 50, 0, -1, images_playerdragonrider_3985_9_0, 1};
static Animation anim_playerdragonrider_3985_9 = {&direction_playerdragonrider_3985_9_0, &direction_playerdragonrider_3985_9_0, &direction_playerdragonrider_3985_9_0, &direction_playerdragonrider_3985_9_0, &direction_playerdragonrider_3985_9_0, &direction_playerdragonrider_3985_9_0, &direction_playerdragonrider_3985_9_0, &direction_playerdragonrider_3985_9_0, &direction_playerdragonrider_3985_9_0, &direction_playerdragonrider_3985_9_0, &direction_playerdragonrider_3985_9_0, &direction_playerdragonrider_3985_9_0, &direction_playerdragonrider_3985_9_0, &direction_playerdragonrider_3985_9_0, &direction_playerdragonrider_3985_9_0, &direction_playerdragonrider_3985_9_0, NULL, &direction_playerdragonrider_3985_9_0, &direction_playerdragonrider_3985_9_0, &direction_playerdragonrider_3985_9_0, &direction_playerdragonrider_3985_9_0, &direction_playerdragonrider_3985_9_0, &direction_playerdragonrider_3985_9_0, &direction_playerdragonrider_3985_9_0, &direction_playerdragonrider_3985_9_0, &direction_playerdragonrider_3985_9_0, &direction_playerdragonrider_3985_9_0, &direction_playerdragonrider_3985_9_0, &direction_playerdragonrider_3985_9_0, &direction_playerdragonrider_3985_9_0, &direction_playerdragonrider_3985_9_0, &direction_playerdragonrider_3985_9_0};
static Animation * anim_array_playerdragonrider_3985[10] = {&anim_playerdragonrider_3985_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_playerdragonrider_3985_7, &anim_playerdragonrider_3985_8, &anim_playerdragonrider_3985_9};
static Animations anim_playerdragonrider_3985 = {10, &anim_array_playerdragonrider_3985[0]};
static bool anim_playerdragonrider_3985_initialized;
class PlayerDragonRider_3985 : public Active
{
public:
    PlayerDragonRider_3985(int x, int y) : Active(x, y, PlayerDragonRider_3985_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_DragonRider", 18);
#endif
        this->animations = &anim_playerdragonrider_3985;
        if (!anim_playerdragonrider_3985_initialized) {
            anim_playerdragonrider_3985_initialized = true;
            images_playerdragonrider_3985_0_0[0] = get_internal_image(13376);
            images_playerdragonrider_3985_0_0[1] = get_internal_image(13383);
            images_playerdragonrider_3985_0_0[2] = get_internal_image(13384);
            images_playerdragonrider_3985_0_0[3] = get_internal_image(13385);
            images_playerdragonrider_3985_0_0[4] = get_internal_image(13386);
            images_playerdragonrider_3985_0_1[0] = get_internal_image(13396);
            images_playerdragonrider_3985_0_1[1] = get_internal_image(13398);
            images_playerdragonrider_3985_0_1[2] = get_internal_image(13403);
            images_playerdragonrider_3985_0_1[3] = get_internal_image(13400);
            images_playerdragonrider_3985_0_1[4] = get_internal_image(13401);
            images_playerdragonrider_3985_7_0[0] = get_internal_image(2368);
            images_playerdragonrider_3985_7_1[0] = get_internal_image(1050);
            images_playerdragonrider_3985_8_0[0] = get_internal_image(9263);
            images_playerdragonrider_3985_8_1[0] = get_internal_image(9249);
            images_playerdragonrider_3985_9_0[0] = get_internal_image(11914);
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
FrameObject * create_playerdragonrider_3985(int x, int y)
{
    return new (Active::pool.create()) PlayerDragonRider_3985(x, y);
}
static Image* images_playerskinmilla_3986_0_0[16];
static Direction direction_playerskinmilla_3986_0_0 = {0, 20, 20, 0, -1, images_playerskinmilla_3986_0_0, 16};
static Image* images_playerskinmilla_3986_0_1[16];
static Direction direction_playerskinmilla_3986_0_1 = {1, 12, 12, 0, -1, images_playerskinmilla_3986_0_1, 16};
static Image* images_playerskinmilla_3986_0_2[11];
static Direction direction_playerskinmilla_3986_0_2 = {2, 14, 14, 0, -1, images_playerskinmilla_3986_0_2, 11};
static Image* images_playerskinmilla_3986_0_3[23];
static Direction direction_playerskinmilla_3986_0_3 = {3, 18, 18, 0, -1, images_playerskinmilla_3986_0_3, 23};
static Image* images_playerskinmilla_3986_0_4[23];
static Direction direction_playerskinmilla_3986_0_4 = {4, 12, 12, 0, -1, images_playerskinmilla_3986_0_4, 23};
static Image* images_playerskinmilla_3986_0_8[29];
static Direction direction_playerskinmilla_3986_0_8 = {8, 50, 50, 0, 1, images_playerskinmilla_3986_0_8, 29};
static Image* images_playerskinmilla_3986_0_15[16];
static Direction direction_playerskinmilla_3986_0_15 = {15, 20, 20, 0, -1, images_playerskinmilla_3986_0_15, 16};
static Image* images_playerskinmilla_3986_0_16[16];
static Direction direction_playerskinmilla_3986_0_16 = {16, 20, 20, 0, -1, images_playerskinmilla_3986_0_16, 16};
static Image* images_playerskinmilla_3986_0_17[16];
static Direction direction_playerskinmilla_3986_0_17 = {17, 12, 12, 0, -1, images_playerskinmilla_3986_0_17, 16};
static Image* images_playerskinmilla_3986_0_18[11];
static Direction direction_playerskinmilla_3986_0_18 = {18, 14, 14, 0, -1, images_playerskinmilla_3986_0_18, 11};
static Image* images_playerskinmilla_3986_0_19[23];
static Direction direction_playerskinmilla_3986_0_19 = {19, 18, 18, 0, -1, images_playerskinmilla_3986_0_19, 23};
static Image* images_playerskinmilla_3986_0_20[23];
static Direction direction_playerskinmilla_3986_0_20 = {20, 12, 12, 0, -1, images_playerskinmilla_3986_0_20, 23};
static Image* images_playerskinmilla_3986_0_31[16];
static Direction direction_playerskinmilla_3986_0_31 = {31, 20, 20, 0, -1, images_playerskinmilla_3986_0_31, 16};
static Animation anim_playerskinmilla_3986_0 = {&direction_playerskinmilla_3986_0_0, &direction_playerskinmilla_3986_0_1, &direction_playerskinmilla_3986_0_2, &direction_playerskinmilla_3986_0_3, &direction_playerskinmilla_3986_0_4, &direction_playerskinmilla_3986_0_4, NULL, &direction_playerskinmilla_3986_0_8, &direction_playerskinmilla_3986_0_8, &direction_playerskinmilla_3986_0_8, &direction_playerskinmilla_3986_0_8, &direction_playerskinmilla_3986_0_8, &direction_playerskinmilla_3986_0_15, &direction_playerskinmilla_3986_0_15, &direction_playerskinmilla_3986_0_15, &direction_playerskinmilla_3986_0_15, &direction_playerskinmilla_3986_0_16, &direction_playerskinmilla_3986_0_17, &direction_playerskinmilla_3986_0_18, &direction_playerskinmilla_3986_0_19, &direction_playerskinmilla_3986_0_20, &direction_playerskinmilla_3986_0_20, &direction_playerskinmilla_3986_0_20, &direction_playerskinmilla_3986_0_20, &direction_playerskinmilla_3986_0_20, &direction_playerskinmilla_3986_0_20, &direction_playerskinmilla_3986_0_31, &direction_playerskinmilla_3986_0_31, &direction_playerskinmilla_3986_0_31, &direction_playerskinmilla_3986_0_31, &direction_playerskinmilla_3986_0_31, &direction_playerskinmilla_3986_0_31};
static Image* images_playerskinmilla_3986_1_0[10];
static Direction direction_playerskinmilla_3986_1_0 = {0, 50, 50, 0, -1, images_playerskinmilla_3986_1_0, 10};
static Image* images_playerskinmilla_3986_1_8[10];
static Direction direction_playerskinmilla_3986_1_8 = {8, 50, 50, 0, -1, images_playerskinmilla_3986_1_8, 10};
static Image* images_playerskinmilla_3986_1_15[10];
static Direction direction_playerskinmilla_3986_1_15 = {15, 50, 50, 0, -1, images_playerskinmilla_3986_1_15, 10};
static Image* images_playerskinmilla_3986_1_16[10];
static Direction direction_playerskinmilla_3986_1_16 = {16, 50, 50, 0, -1, images_playerskinmilla_3986_1_16, 10};
static Image* images_playerskinmilla_3986_1_31[10];
static Direction direction_playerskinmilla_3986_1_31 = {31, 50, 50, 0, -1, images_playerskinmilla_3986_1_31, 10};
static Animation anim_playerskinmilla_3986_1 = {&direction_playerskinmilla_3986_1_0, &direction_playerskinmilla_3986_1_0, &direction_playerskinmilla_3986_1_0, &direction_playerskinmilla_3986_1_0, NULL, &direction_playerskinmilla_3986_1_8, &direction_playerskinmilla_3986_1_8, &direction_playerskinmilla_3986_1_8, &direction_playerskinmilla_3986_1_8, &direction_playerskinmilla_3986_1_8, &direction_playerskinmilla_3986_1_8, &direction_playerskinmilla_3986_1_8, &direction_playerskinmilla_3986_1_15, &direction_playerskinmilla_3986_1_15, &direction_playerskinmilla_3986_1_15, &direction_playerskinmilla_3986_1_15, &direction_playerskinmilla_3986_1_16, &direction_playerskinmilla_3986_1_16, &direction_playerskinmilla_3986_1_16, &direction_playerskinmilla_3986_1_16, &direction_playerskinmilla_3986_1_16, &direction_playerskinmilla_3986_1_16, &direction_playerskinmilla_3986_1_16, &direction_playerskinmilla_3986_1_16, &direction_playerskinmilla_3986_1_31, &direction_playerskinmilla_3986_1_31, &direction_playerskinmilla_3986_1_31, &direction_playerskinmilla_3986_1_31, &direction_playerskinmilla_3986_1_31, &direction_playerskinmilla_3986_1_31, &direction_playerskinmilla_3986_1_31, &direction_playerskinmilla_3986_1_31};
static Image* images_playerskinmilla_3986_2_0[8];
static Direction direction_playerskinmilla_3986_2_0 = {0, 50, 50, 2, -1, images_playerskinmilla_3986_2_0, 8};
static Image* images_playerskinmilla_3986_2_15[10];
static Direction direction_playerskinmilla_3986_2_15 = {15, 50, 50, 0, -1, images_playerskinmilla_3986_2_15, 10};
static Image* images_playerskinmilla_3986_2_16[8];
static Direction direction_playerskinmilla_3986_2_16 = {16, 50, 50, 2, -1, images_playerskinmilla_3986_2_16, 8};
static Image* images_playerskinmilla_3986_2_31[10];
static Direction direction_playerskinmilla_3986_2_31 = {31, 50, 50, 0, -1, images_playerskinmilla_3986_2_31, 10};
static Animation anim_playerskinmilla_3986_2 = {&direction_playerskinmilla_3986_2_0, &direction_playerskinmilla_3986_2_0, &direction_playerskinmilla_3986_2_0, &direction_playerskinmilla_3986_2_0, &direction_playerskinmilla_3986_2_0, &direction_playerskinmilla_3986_2_0, &direction_playerskinmilla_3986_2_0, &direction_playerskinmilla_3986_2_0, &direction_playerskinmilla_3986_2_15, &direction_playerskinmilla_3986_2_15, &direction_playerskinmilla_3986_2_15, &direction_playerskinmilla_3986_2_15, &direction_playerskinmilla_3986_2_15, &direction_playerskinmilla_3986_2_15, &direction_playerskinmilla_3986_2_15, &direction_playerskinmilla_3986_2_15, &direction_playerskinmilla_3986_2_16, &direction_playerskinmilla_3986_2_16, &direction_playerskinmilla_3986_2_16, &direction_playerskinmilla_3986_2_16, &direction_playerskinmilla_3986_2_16, &direction_playerskinmilla_3986_2_16, &direction_playerskinmilla_3986_2_16, &direction_playerskinmilla_3986_2_16, &direction_playerskinmilla_3986_2_31, &direction_playerskinmilla_3986_2_31, &direction_playerskinmilla_3986_2_31, &direction_playerskinmilla_3986_2_31, &direction_playerskinmilla_3986_2_31, &direction_playerskinmilla_3986_2_31, &direction_playerskinmilla_3986_2_31, &direction_playerskinmilla_3986_2_31};
static Image* images_playerskinmilla_3986_5_0[5];
static Direction direction_playerskinmilla_3986_5_0 = {0, 15, 15, 4, -1, images_playerskinmilla_3986_5_0, 5};
static Image* images_playerskinmilla_3986_5_16[5];
static Direction direction_playerskinmilla_3986_5_16 = {16, 15, 15, 4, -1, images_playerskinmilla_3986_5_16, 5};
static Animation anim_playerskinmilla_3986_5 = {&direction_playerskinmilla_3986_5_0, &direction_playerskinmilla_3986_5_0, &direction_playerskinmilla_3986_5_0, &direction_playerskinmilla_3986_5_0, &direction_playerskinmilla_3986_5_0, &direction_playerskinmilla_3986_5_0, &direction_playerskinmilla_3986_5_0, &direction_playerskinmilla_3986_5_0, NULL, &direction_playerskinmilla_3986_5_16, &direction_playerskinmilla_3986_5_16, &direction_playerskinmilla_3986_5_16, &direction_playerskinmilla_3986_5_16, &direction_playerskinmilla_3986_5_16, &direction_playerskinmilla_3986_5_16, &direction_playerskinmilla_3986_5_16, &direction_playerskinmilla_3986_5_16, &direction_playerskinmilla_3986_5_16, &direction_playerskinmilla_3986_5_16, &direction_playerskinmilla_3986_5_16, &direction_playerskinmilla_3986_5_16, &direction_playerskinmilla_3986_5_16, &direction_playerskinmilla_3986_5_16, &direction_playerskinmilla_3986_5_16, NULL, &direction_playerskinmilla_3986_5_0, &direction_playerskinmilla_3986_5_0, &direction_playerskinmilla_3986_5_0, &direction_playerskinmilla_3986_5_0, &direction_playerskinmilla_3986_5_0, &direction_playerskinmilla_3986_5_0, &direction_playerskinmilla_3986_5_0};
static Image* images_playerskinmilla_3986_7_0[8];
static Direction direction_playerskinmilla_3986_7_0 = {0, 50, 50, 0, -1, images_playerskinmilla_3986_7_0, 8};
static Image* images_playerskinmilla_3986_7_16[8];
static Direction direction_playerskinmilla_3986_7_16 = {16, 50, 50, 0, -1, images_playerskinmilla_3986_7_16, 8};
static Animation anim_playerskinmilla_3986_7 = {&direction_playerskinmilla_3986_7_0, &direction_playerskinmilla_3986_7_0, &direction_playerskinmilla_3986_7_0, &direction_playerskinmilla_3986_7_0, &direction_playerskinmilla_3986_7_0, &direction_playerskinmilla_3986_7_0, &direction_playerskinmilla_3986_7_0, &direction_playerskinmilla_3986_7_0, NULL, &direction_playerskinmilla_3986_7_16, &direction_playerskinmilla_3986_7_16, &direction_playerskinmilla_3986_7_16, &direction_playerskinmilla_3986_7_16, &direction_playerskinmilla_3986_7_16, &direction_playerskinmilla_3986_7_16, &direction_playerskinmilla_3986_7_16, &direction_playerskinmilla_3986_7_16, &direction_playerskinmilla_3986_7_16, &direction_playerskinmilla_3986_7_16, &direction_playerskinmilla_3986_7_16, &direction_playerskinmilla_3986_7_16, &direction_playerskinmilla_3986_7_16, &direction_playerskinmilla_3986_7_16, &direction_playerskinmilla_3986_7_16, NULL, &direction_playerskinmilla_3986_7_0, &direction_playerskinmilla_3986_7_0, &direction_playerskinmilla_3986_7_0, &direction_playerskinmilla_3986_7_0, &direction_playerskinmilla_3986_7_0, &direction_playerskinmilla_3986_7_0, &direction_playerskinmilla_3986_7_0};
static Image* images_playerskinmilla_3986_8_0[9];
static Direction direction_playerskinmilla_3986_8_0 = {0, 50, 50, 8, 3, images_playerskinmilla_3986_8_0, 9};
static Image* images_playerskinmilla_3986_8_16[9];
static Direction direction_playerskinmilla_3986_8_16 = {16, 50, 50, 8, 3, images_playerskinmilla_3986_8_16, 9};
static Animation anim_playerskinmilla_3986_8 = {&direction_playerskinmilla_3986_8_0, &direction_playerskinmilla_3986_8_0, &direction_playerskinmilla_3986_8_0, &direction_playerskinmilla_3986_8_0, &direction_playerskinmilla_3986_8_0, &direction_playerskinmilla_3986_8_0, &direction_playerskinmilla_3986_8_0, &direction_playerskinmilla_3986_8_0, NULL, &direction_playerskinmilla_3986_8_16, &direction_playerskinmilla_3986_8_16, &direction_playerskinmilla_3986_8_16, &direction_playerskinmilla_3986_8_16, &direction_playerskinmilla_3986_8_16, &direction_playerskinmilla_3986_8_16, &direction_playerskinmilla_3986_8_16, &direction_playerskinmilla_3986_8_16, &direction_playerskinmilla_3986_8_16, &direction_playerskinmilla_3986_8_16, &direction_playerskinmilla_3986_8_16, &direction_playerskinmilla_3986_8_16, &direction_playerskinmilla_3986_8_16, &direction_playerskinmilla_3986_8_16, &direction_playerskinmilla_3986_8_16, NULL, &direction_playerskinmilla_3986_8_0, &direction_playerskinmilla_3986_8_0, &direction_playerskinmilla_3986_8_0, &direction_playerskinmilla_3986_8_0, &direction_playerskinmilla_3986_8_0, &direction_playerskinmilla_3986_8_0, &direction_playerskinmilla_3986_8_0};
static Image* images_playerskinmilla_3986_9_0[8];
static Direction direction_playerskinmilla_3986_9_0 = {0, 0, 0, 0, -1, images_playerskinmilla_3986_9_0, 8};
static Animation anim_playerskinmilla_3986_9 = {&direction_playerskinmilla_3986_9_0, &direction_playerskinmilla_3986_9_0, &direction_playerskinmilla_3986_9_0, &direction_playerskinmilla_3986_9_0, &direction_playerskinmilla_3986_9_0, &direction_playerskinmilla_3986_9_0, &direction_playerskinmilla_3986_9_0, &direction_playerskinmilla_3986_9_0, &direction_playerskinmilla_3986_9_0, &direction_playerskinmilla_3986_9_0, &direction_playerskinmilla_3986_9_0, &direction_playerskinmilla_3986_9_0, &direction_playerskinmilla_3986_9_0, &direction_playerskinmilla_3986_9_0, &direction_playerskinmilla_3986_9_0, &direction_playerskinmilla_3986_9_0, NULL, &direction_playerskinmilla_3986_9_0, &direction_playerskinmilla_3986_9_0, &direction_playerskinmilla_3986_9_0, &direction_playerskinmilla_3986_9_0, &direction_playerskinmilla_3986_9_0, &direction_playerskinmilla_3986_9_0, &direction_playerskinmilla_3986_9_0, &direction_playerskinmilla_3986_9_0, &direction_playerskinmilla_3986_9_0, &direction_playerskinmilla_3986_9_0, &direction_playerskinmilla_3986_9_0, &direction_playerskinmilla_3986_9_0, &direction_playerskinmilla_3986_9_0, &direction_playerskinmilla_3986_9_0, &direction_playerskinmilla_3986_9_0};
static Image* images_playerskinmilla_3986_10_0[7];
static Direction direction_playerskinmilla_3986_10_0 = {0, 12, 12, 2, -1, images_playerskinmilla_3986_10_0, 7};
static Image* images_playerskinmilla_3986_10_16[7];
static Direction direction_playerskinmilla_3986_10_16 = {16, 12, 12, 2, -1, images_playerskinmilla_3986_10_16, 7};
static Animation anim_playerskinmilla_3986_10 = {&direction_playerskinmilla_3986_10_0, &direction_playerskinmilla_3986_10_0, &direction_playerskinmilla_3986_10_0, &direction_playerskinmilla_3986_10_0, &direction_playerskinmilla_3986_10_0, &direction_playerskinmilla_3986_10_0, &direction_playerskinmilla_3986_10_0, &direction_playerskinmilla_3986_10_0, NULL, &direction_playerskinmilla_3986_10_16, &direction_playerskinmilla_3986_10_16, &direction_playerskinmilla_3986_10_16, &direction_playerskinmilla_3986_10_16, &direction_playerskinmilla_3986_10_16, &direction_playerskinmilla_3986_10_16, &direction_playerskinmilla_3986_10_16, &direction_playerskinmilla_3986_10_16, &direction_playerskinmilla_3986_10_16, &direction_playerskinmilla_3986_10_16, &direction_playerskinmilla_3986_10_16, &direction_playerskinmilla_3986_10_16, &direction_playerskinmilla_3986_10_16, &direction_playerskinmilla_3986_10_16, &direction_playerskinmilla_3986_10_16, NULL, &direction_playerskinmilla_3986_10_0, &direction_playerskinmilla_3986_10_0, &direction_playerskinmilla_3986_10_0, &direction_playerskinmilla_3986_10_0, &direction_playerskinmilla_3986_10_0, &direction_playerskinmilla_3986_10_0, &direction_playerskinmilla_3986_10_0};
static Image* images_playerskinmilla_3986_11_0[3];
static Direction direction_playerskinmilla_3986_11_0 = {0, 30, 30, 2, -1, images_playerskinmilla_3986_11_0, 3};
static Image* images_playerskinmilla_3986_11_16[3];
static Direction direction_playerskinmilla_3986_11_16 = {16, 30, 30, 2, -1, images_playerskinmilla_3986_11_16, 3};
static Animation anim_playerskinmilla_3986_11 = {&direction_playerskinmilla_3986_11_0, &direction_playerskinmilla_3986_11_0, &direction_playerskinmilla_3986_11_0, &direction_playerskinmilla_3986_11_0, &direction_playerskinmilla_3986_11_0, &direction_playerskinmilla_3986_11_0, &direction_playerskinmilla_3986_11_0, &direction_playerskinmilla_3986_11_0, NULL, &direction_playerskinmilla_3986_11_16, &direction_playerskinmilla_3986_11_16, &direction_playerskinmilla_3986_11_16, &direction_playerskinmilla_3986_11_16, &direction_playerskinmilla_3986_11_16, &direction_playerskinmilla_3986_11_16, &direction_playerskinmilla_3986_11_16, &direction_playerskinmilla_3986_11_16, &direction_playerskinmilla_3986_11_16, &direction_playerskinmilla_3986_11_16, &direction_playerskinmilla_3986_11_16, &direction_playerskinmilla_3986_11_16, &direction_playerskinmilla_3986_11_16, &direction_playerskinmilla_3986_11_16, &direction_playerskinmilla_3986_11_16, NULL, &direction_playerskinmilla_3986_11_0, &direction_playerskinmilla_3986_11_0, &direction_playerskinmilla_3986_11_0, &direction_playerskinmilla_3986_11_0, &direction_playerskinmilla_3986_11_0, &direction_playerskinmilla_3986_11_0, &direction_playerskinmilla_3986_11_0};
static Image* images_playerskinmilla_3986_12_0[8];
static Direction direction_playerskinmilla_3986_12_0 = {0, 14, 14, 0, -1, images_playerskinmilla_3986_12_0, 8};
static Image* images_playerskinmilla_3986_12_16[8];
static Direction direction_playerskinmilla_3986_12_16 = {16, 14, 14, 0, -1, images_playerskinmilla_3986_12_16, 8};
static Animation anim_playerskinmilla_3986_12 = {&direction_playerskinmilla_3986_12_0, &direction_playerskinmilla_3986_12_0, &direction_playerskinmilla_3986_12_0, &direction_playerskinmilla_3986_12_0, &direction_playerskinmilla_3986_12_0, &direction_playerskinmilla_3986_12_0, &direction_playerskinmilla_3986_12_0, &direction_playerskinmilla_3986_12_0, NULL, &direction_playerskinmilla_3986_12_16, &direction_playerskinmilla_3986_12_16, &direction_playerskinmilla_3986_12_16, &direction_playerskinmilla_3986_12_16, &direction_playerskinmilla_3986_12_16, &direction_playerskinmilla_3986_12_16, &direction_playerskinmilla_3986_12_16, &direction_playerskinmilla_3986_12_16, &direction_playerskinmilla_3986_12_16, &direction_playerskinmilla_3986_12_16, &direction_playerskinmilla_3986_12_16, &direction_playerskinmilla_3986_12_16, &direction_playerskinmilla_3986_12_16, &direction_playerskinmilla_3986_12_16, &direction_playerskinmilla_3986_12_16, NULL, &direction_playerskinmilla_3986_12_0, &direction_playerskinmilla_3986_12_0, &direction_playerskinmilla_3986_12_0, &direction_playerskinmilla_3986_12_0, &direction_playerskinmilla_3986_12_0, &direction_playerskinmilla_3986_12_0, &direction_playerskinmilla_3986_12_0};
static Image* images_playerskinmilla_3986_14_0[7];
static Direction direction_playerskinmilla_3986_14_0 = {0, 50, 50, 0, -1, images_playerskinmilla_3986_14_0, 7};
static Image* images_playerskinmilla_3986_14_16[7];
static Direction direction_playerskinmilla_3986_14_16 = {16, 50, 50, 0, -1, images_playerskinmilla_3986_14_16, 7};
static Animation anim_playerskinmilla_3986_14 = {&direction_playerskinmilla_3986_14_0, &direction_playerskinmilla_3986_14_0, &direction_playerskinmilla_3986_14_0, &direction_playerskinmilla_3986_14_0, &direction_playerskinmilla_3986_14_0, &direction_playerskinmilla_3986_14_0, &direction_playerskinmilla_3986_14_0, &direction_playerskinmilla_3986_14_0, NULL, &direction_playerskinmilla_3986_14_16, &direction_playerskinmilla_3986_14_16, &direction_playerskinmilla_3986_14_16, &direction_playerskinmilla_3986_14_16, &direction_playerskinmilla_3986_14_16, &direction_playerskinmilla_3986_14_16, &direction_playerskinmilla_3986_14_16, &direction_playerskinmilla_3986_14_16, &direction_playerskinmilla_3986_14_16, &direction_playerskinmilla_3986_14_16, &direction_playerskinmilla_3986_14_16, &direction_playerskinmilla_3986_14_16, &direction_playerskinmilla_3986_14_16, &direction_playerskinmilla_3986_14_16, &direction_playerskinmilla_3986_14_16, NULL, &direction_playerskinmilla_3986_14_0, &direction_playerskinmilla_3986_14_0, &direction_playerskinmilla_3986_14_0, &direction_playerskinmilla_3986_14_0, &direction_playerskinmilla_3986_14_0, &direction_playerskinmilla_3986_14_0, &direction_playerskinmilla_3986_14_0};
static Image* images_playerskinmilla_3986_15_0[9];
static Direction direction_playerskinmilla_3986_15_0 = {0, 15, 15, 0, -1, images_playerskinmilla_3986_15_0, 9};
static Image* images_playerskinmilla_3986_15_16[9];
static Direction direction_playerskinmilla_3986_15_16 = {16, 15, 15, 0, -1, images_playerskinmilla_3986_15_16, 9};
static Animation anim_playerskinmilla_3986_15 = {&direction_playerskinmilla_3986_15_0, &direction_playerskinmilla_3986_15_0, &direction_playerskinmilla_3986_15_0, &direction_playerskinmilla_3986_15_0, &direction_playerskinmilla_3986_15_0, &direction_playerskinmilla_3986_15_0, &direction_playerskinmilla_3986_15_0, &direction_playerskinmilla_3986_15_0, NULL, &direction_playerskinmilla_3986_15_16, &direction_playerskinmilla_3986_15_16, &direction_playerskinmilla_3986_15_16, &direction_playerskinmilla_3986_15_16, &direction_playerskinmilla_3986_15_16, &direction_playerskinmilla_3986_15_16, &direction_playerskinmilla_3986_15_16, &direction_playerskinmilla_3986_15_16, &direction_playerskinmilla_3986_15_16, &direction_playerskinmilla_3986_15_16, &direction_playerskinmilla_3986_15_16, &direction_playerskinmilla_3986_15_16, &direction_playerskinmilla_3986_15_16, &direction_playerskinmilla_3986_15_16, &direction_playerskinmilla_3986_15_16, NULL, &direction_playerskinmilla_3986_15_0, &direction_playerskinmilla_3986_15_0, &direction_playerskinmilla_3986_15_0, &direction_playerskinmilla_3986_15_0, &direction_playerskinmilla_3986_15_0, &direction_playerskinmilla_3986_15_0, &direction_playerskinmilla_3986_15_0};
static Image* images_playerskinmilla_3986_16_0[2];
static Direction direction_playerskinmilla_3986_16_0 = {0, 14, 14, 0, -1, images_playerskinmilla_3986_16_0, 2};
static Image* images_playerskinmilla_3986_16_15[10];
static Direction direction_playerskinmilla_3986_16_15 = {15, 100, 100, 0, -1, images_playerskinmilla_3986_16_15, 10};
static Image* images_playerskinmilla_3986_16_16[2];
static Direction direction_playerskinmilla_3986_16_16 = {16, 14, 14, 0, -1, images_playerskinmilla_3986_16_16, 2};
static Image* images_playerskinmilla_3986_16_31[10];
static Direction direction_playerskinmilla_3986_16_31 = {31, 100, 100, 0, -1, images_playerskinmilla_3986_16_31, 10};
static Animation anim_playerskinmilla_3986_16 = {&direction_playerskinmilla_3986_16_0, &direction_playerskinmilla_3986_16_0, &direction_playerskinmilla_3986_16_0, &direction_playerskinmilla_3986_16_0, &direction_playerskinmilla_3986_16_0, &direction_playerskinmilla_3986_16_0, &direction_playerskinmilla_3986_16_0, &direction_playerskinmilla_3986_16_0, &direction_playerskinmilla_3986_16_15, &direction_playerskinmilla_3986_16_15, &direction_playerskinmilla_3986_16_15, &direction_playerskinmilla_3986_16_15, &direction_playerskinmilla_3986_16_15, &direction_playerskinmilla_3986_16_15, &direction_playerskinmilla_3986_16_15, &direction_playerskinmilla_3986_16_15, &direction_playerskinmilla_3986_16_16, &direction_playerskinmilla_3986_16_16, &direction_playerskinmilla_3986_16_16, &direction_playerskinmilla_3986_16_16, &direction_playerskinmilla_3986_16_16, &direction_playerskinmilla_3986_16_16, &direction_playerskinmilla_3986_16_16, &direction_playerskinmilla_3986_16_16, &direction_playerskinmilla_3986_16_31, &direction_playerskinmilla_3986_16_31, &direction_playerskinmilla_3986_16_31, &direction_playerskinmilla_3986_16_31, &direction_playerskinmilla_3986_16_31, &direction_playerskinmilla_3986_16_31, &direction_playerskinmilla_3986_16_31, &direction_playerskinmilla_3986_16_31};
static Image* images_playerskinmilla_3986_17_0[4];
static Direction direction_playerskinmilla_3986_17_0 = {0, 25, 25, 0, -1, images_playerskinmilla_3986_17_0, 4};
static Image* images_playerskinmilla_3986_17_8[3];
static Direction direction_playerskinmilla_3986_17_8 = {8, 20, 20, 0, -1, images_playerskinmilla_3986_17_8, 3};
static Image* images_playerskinmilla_3986_17_16[4];
static Direction direction_playerskinmilla_3986_17_16 = {16, 25, 25, 0, -1, images_playerskinmilla_3986_17_16, 4};
static Animation anim_playerskinmilla_3986_17 = {&direction_playerskinmilla_3986_17_0, &direction_playerskinmilla_3986_17_0, &direction_playerskinmilla_3986_17_0, &direction_playerskinmilla_3986_17_0, NULL, &direction_playerskinmilla_3986_17_8, &direction_playerskinmilla_3986_17_8, &direction_playerskinmilla_3986_17_8, &direction_playerskinmilla_3986_17_8, &direction_playerskinmilla_3986_17_8, &direction_playerskinmilla_3986_17_8, &direction_playerskinmilla_3986_17_8, NULL, &direction_playerskinmilla_3986_17_16, &direction_playerskinmilla_3986_17_16, &direction_playerskinmilla_3986_17_16, &direction_playerskinmilla_3986_17_16, &direction_playerskinmilla_3986_17_16, &direction_playerskinmilla_3986_17_16, &direction_playerskinmilla_3986_17_16, &direction_playerskinmilla_3986_17_16, &direction_playerskinmilla_3986_17_16, &direction_playerskinmilla_3986_17_16, &direction_playerskinmilla_3986_17_16, NULL, &direction_playerskinmilla_3986_17_0, &direction_playerskinmilla_3986_17_0, &direction_playerskinmilla_3986_17_0, &direction_playerskinmilla_3986_17_0, &direction_playerskinmilla_3986_17_0, &direction_playerskinmilla_3986_17_0, &direction_playerskinmilla_3986_17_0};
static Image* images_playerskinmilla_3986_18_0[5];
static Direction direction_playerskinmilla_3986_18_0 = {0, 70, 70, 0, -1, images_playerskinmilla_3986_18_0, 5};
static Image* images_playerskinmilla_3986_18_16[5];
static Direction direction_playerskinmilla_3986_18_16 = {16, 70, 70, 0, -1, images_playerskinmilla_3986_18_16, 5};
static Animation anim_playerskinmilla_3986_18 = {&direction_playerskinmilla_3986_18_0, &direction_playerskinmilla_3986_18_0, &direction_playerskinmilla_3986_18_0, &direction_playerskinmilla_3986_18_0, &direction_playerskinmilla_3986_18_0, &direction_playerskinmilla_3986_18_0, &direction_playerskinmilla_3986_18_0, &direction_playerskinmilla_3986_18_0, NULL, &direction_playerskinmilla_3986_18_16, &direction_playerskinmilla_3986_18_16, &direction_playerskinmilla_3986_18_16, &direction_playerskinmilla_3986_18_16, &direction_playerskinmilla_3986_18_16, &direction_playerskinmilla_3986_18_16, &direction_playerskinmilla_3986_18_16, &direction_playerskinmilla_3986_18_16, &direction_playerskinmilla_3986_18_16, &direction_playerskinmilla_3986_18_16, &direction_playerskinmilla_3986_18_16, &direction_playerskinmilla_3986_18_16, &direction_playerskinmilla_3986_18_16, &direction_playerskinmilla_3986_18_16, &direction_playerskinmilla_3986_18_16, NULL, &direction_playerskinmilla_3986_18_0, &direction_playerskinmilla_3986_18_0, &direction_playerskinmilla_3986_18_0, &direction_playerskinmilla_3986_18_0, &direction_playerskinmilla_3986_18_0, &direction_playerskinmilla_3986_18_0, &direction_playerskinmilla_3986_18_0};
static Image* images_playerskinmilla_3986_20_0[5];
static Direction direction_playerskinmilla_3986_20_0 = {0, 15, 15, 0, 1, images_playerskinmilla_3986_20_0, 5};
static Image* images_playerskinmilla_3986_20_16[5];
static Direction direction_playerskinmilla_3986_20_16 = {16, 15, 15, 0, 1, images_playerskinmilla_3986_20_16, 5};
static Animation anim_playerskinmilla_3986_20 = {&direction_playerskinmilla_3986_20_0, &direction_playerskinmilla_3986_20_0, &direction_playerskinmilla_3986_20_0, &direction_playerskinmilla_3986_20_0, &direction_playerskinmilla_3986_20_0, &direction_playerskinmilla_3986_20_0, &direction_playerskinmilla_3986_20_0, &direction_playerskinmilla_3986_20_0, NULL, &direction_playerskinmilla_3986_20_16, &direction_playerskinmilla_3986_20_16, &direction_playerskinmilla_3986_20_16, &direction_playerskinmilla_3986_20_16, &direction_playerskinmilla_3986_20_16, &direction_playerskinmilla_3986_20_16, &direction_playerskinmilla_3986_20_16, &direction_playerskinmilla_3986_20_16, &direction_playerskinmilla_3986_20_16, &direction_playerskinmilla_3986_20_16, &direction_playerskinmilla_3986_20_16, &direction_playerskinmilla_3986_20_16, &direction_playerskinmilla_3986_20_16, &direction_playerskinmilla_3986_20_16, &direction_playerskinmilla_3986_20_16, NULL, &direction_playerskinmilla_3986_20_0, &direction_playerskinmilla_3986_20_0, &direction_playerskinmilla_3986_20_0, &direction_playerskinmilla_3986_20_0, &direction_playerskinmilla_3986_20_0, &direction_playerskinmilla_3986_20_0, &direction_playerskinmilla_3986_20_0};
static Image* images_playerskinmilla_3986_23_0[6];
static Direction direction_playerskinmilla_3986_23_0 = {0, 100, 100, 0, -1, images_playerskinmilla_3986_23_0, 6};
static Image* images_playerskinmilla_3986_23_15[10];
static Direction direction_playerskinmilla_3986_23_15 = {15, 100, 100, 0, -1, images_playerskinmilla_3986_23_15, 10};
static Image* images_playerskinmilla_3986_23_16[6];
static Direction direction_playerskinmilla_3986_23_16 = {16, 100, 100, 0, -1, images_playerskinmilla_3986_23_16, 6};
static Image* images_playerskinmilla_3986_23_31[10];
static Direction direction_playerskinmilla_3986_23_31 = {31, 100, 100, 0, -1, images_playerskinmilla_3986_23_31, 10};
static Animation anim_playerskinmilla_3986_23 = {&direction_playerskinmilla_3986_23_0, &direction_playerskinmilla_3986_23_0, &direction_playerskinmilla_3986_23_0, &direction_playerskinmilla_3986_23_0, &direction_playerskinmilla_3986_23_0, &direction_playerskinmilla_3986_23_0, &direction_playerskinmilla_3986_23_0, &direction_playerskinmilla_3986_23_0, &direction_playerskinmilla_3986_23_15, &direction_playerskinmilla_3986_23_15, &direction_playerskinmilla_3986_23_15, &direction_playerskinmilla_3986_23_15, &direction_playerskinmilla_3986_23_15, &direction_playerskinmilla_3986_23_15, &direction_playerskinmilla_3986_23_15, &direction_playerskinmilla_3986_23_15, &direction_playerskinmilla_3986_23_16, &direction_playerskinmilla_3986_23_16, &direction_playerskinmilla_3986_23_16, &direction_playerskinmilla_3986_23_16, &direction_playerskinmilla_3986_23_16, &direction_playerskinmilla_3986_23_16, &direction_playerskinmilla_3986_23_16, &direction_playerskinmilla_3986_23_16, &direction_playerskinmilla_3986_23_31, &direction_playerskinmilla_3986_23_31, &direction_playerskinmilla_3986_23_31, &direction_playerskinmilla_3986_23_31, &direction_playerskinmilla_3986_23_31, &direction_playerskinmilla_3986_23_31, &direction_playerskinmilla_3986_23_31, &direction_playerskinmilla_3986_23_31};
static Image* images_playerskinmilla_3986_24_0[13];
static Direction direction_playerskinmilla_3986_24_0 = {0, 20, 20, 10, -1, images_playerskinmilla_3986_24_0, 13};
static Image* images_playerskinmilla_3986_24_8[7];
static Direction direction_playerskinmilla_3986_24_8 = {8, 50, 50, 0, 1, images_playerskinmilla_3986_24_8, 7};
static Image* images_playerskinmilla_3986_24_15[13];
static Direction direction_playerskinmilla_3986_24_15 = {15, 20, 20, 10, -1, images_playerskinmilla_3986_24_15, 13};
static Image* images_playerskinmilla_3986_24_16[13];
static Direction direction_playerskinmilla_3986_24_16 = {16, 20, 20, 10, -1, images_playerskinmilla_3986_24_16, 13};
static Image* images_playerskinmilla_3986_24_31[13];
static Direction direction_playerskinmilla_3986_24_31 = {31, 20, 20, 10, -1, images_playerskinmilla_3986_24_31, 13};
static Animation anim_playerskinmilla_3986_24 = {&direction_playerskinmilla_3986_24_0, &direction_playerskinmilla_3986_24_0, &direction_playerskinmilla_3986_24_0, &direction_playerskinmilla_3986_24_0, NULL, &direction_playerskinmilla_3986_24_8, &direction_playerskinmilla_3986_24_8, &direction_playerskinmilla_3986_24_8, &direction_playerskinmilla_3986_24_8, &direction_playerskinmilla_3986_24_8, &direction_playerskinmilla_3986_24_8, &direction_playerskinmilla_3986_24_8, &direction_playerskinmilla_3986_24_15, &direction_playerskinmilla_3986_24_15, &direction_playerskinmilla_3986_24_15, &direction_playerskinmilla_3986_24_15, &direction_playerskinmilla_3986_24_16, &direction_playerskinmilla_3986_24_16, &direction_playerskinmilla_3986_24_16, &direction_playerskinmilla_3986_24_16, &direction_playerskinmilla_3986_24_16, &direction_playerskinmilla_3986_24_16, &direction_playerskinmilla_3986_24_16, &direction_playerskinmilla_3986_24_16, &direction_playerskinmilla_3986_24_31, &direction_playerskinmilla_3986_24_31, &direction_playerskinmilla_3986_24_31, &direction_playerskinmilla_3986_24_31, &direction_playerskinmilla_3986_24_31, &direction_playerskinmilla_3986_24_31, &direction_playerskinmilla_3986_24_31, &direction_playerskinmilla_3986_24_31};
static Image* images_playerskinmilla_3986_25_0[7];
static Direction direction_playerskinmilla_3986_25_0 = {0, 0, 0, 0, -1, images_playerskinmilla_3986_25_0, 7};
static Image* images_playerskinmilla_3986_25_16[7];
static Direction direction_playerskinmilla_3986_25_16 = {16, 0, 0, 0, -1, images_playerskinmilla_3986_25_16, 7};
static Animation anim_playerskinmilla_3986_25 = {&direction_playerskinmilla_3986_25_0, &direction_playerskinmilla_3986_25_0, &direction_playerskinmilla_3986_25_0, &direction_playerskinmilla_3986_25_0, &direction_playerskinmilla_3986_25_0, &direction_playerskinmilla_3986_25_0, &direction_playerskinmilla_3986_25_0, &direction_playerskinmilla_3986_25_0, NULL, &direction_playerskinmilla_3986_25_16, &direction_playerskinmilla_3986_25_16, &direction_playerskinmilla_3986_25_16, &direction_playerskinmilla_3986_25_16, &direction_playerskinmilla_3986_25_16, &direction_playerskinmilla_3986_25_16, &direction_playerskinmilla_3986_25_16, &direction_playerskinmilla_3986_25_16, &direction_playerskinmilla_3986_25_16, &direction_playerskinmilla_3986_25_16, &direction_playerskinmilla_3986_25_16, &direction_playerskinmilla_3986_25_16, &direction_playerskinmilla_3986_25_16, &direction_playerskinmilla_3986_25_16, &direction_playerskinmilla_3986_25_16, NULL, &direction_playerskinmilla_3986_25_0, &direction_playerskinmilla_3986_25_0, &direction_playerskinmilla_3986_25_0, &direction_playerskinmilla_3986_25_0, &direction_playerskinmilla_3986_25_0, &direction_playerskinmilla_3986_25_0, &direction_playerskinmilla_3986_25_0};
static Image* images_playerskinmilla_3986_26_0[6];
static Direction direction_playerskinmilla_3986_26_0 = {0, 50, 50, 0, -1, images_playerskinmilla_3986_26_0, 6};
static Image* images_playerskinmilla_3986_26_8[3];
static Direction direction_playerskinmilla_3986_26_8 = {8, 50, 50, 0, 1, images_playerskinmilla_3986_26_8, 3};
static Image* images_playerskinmilla_3986_26_16[6];
static Direction direction_playerskinmilla_3986_26_16 = {16, 50, 50, 0, -1, images_playerskinmilla_3986_26_16, 6};
static Animation anim_playerskinmilla_3986_26 = {&direction_playerskinmilla_3986_26_0, &direction_playerskinmilla_3986_26_0, &direction_playerskinmilla_3986_26_0, &direction_playerskinmilla_3986_26_0, NULL, &direction_playerskinmilla_3986_26_8, &direction_playerskinmilla_3986_26_8, &direction_playerskinmilla_3986_26_8, &direction_playerskinmilla_3986_26_8, &direction_playerskinmilla_3986_26_8, &direction_playerskinmilla_3986_26_8, &direction_playerskinmilla_3986_26_8, NULL, &direction_playerskinmilla_3986_26_16, &direction_playerskinmilla_3986_26_16, &direction_playerskinmilla_3986_26_16, &direction_playerskinmilla_3986_26_16, &direction_playerskinmilla_3986_26_16, &direction_playerskinmilla_3986_26_16, &direction_playerskinmilla_3986_26_16, &direction_playerskinmilla_3986_26_16, &direction_playerskinmilla_3986_26_16, &direction_playerskinmilla_3986_26_16, &direction_playerskinmilla_3986_26_16, NULL, &direction_playerskinmilla_3986_26_0, &direction_playerskinmilla_3986_26_0, &direction_playerskinmilla_3986_26_0, &direction_playerskinmilla_3986_26_0, &direction_playerskinmilla_3986_26_0, &direction_playerskinmilla_3986_26_0, &direction_playerskinmilla_3986_26_0};
static Image* images_playerskinmilla_3986_27_0[9];
static Direction direction_playerskinmilla_3986_27_0 = {0, 50, 50, 8, 3, images_playerskinmilla_3986_27_0, 9};
static Image* images_playerskinmilla_3986_27_16[9];
static Direction direction_playerskinmilla_3986_27_16 = {16, 50, 50, 8, 3, images_playerskinmilla_3986_27_16, 9};
static Animation anim_playerskinmilla_3986_27 = {&direction_playerskinmilla_3986_27_0, &direction_playerskinmilla_3986_27_0, &direction_playerskinmilla_3986_27_0, &direction_playerskinmilla_3986_27_0, &direction_playerskinmilla_3986_27_0, &direction_playerskinmilla_3986_27_0, &direction_playerskinmilla_3986_27_0, &direction_playerskinmilla_3986_27_0, NULL, &direction_playerskinmilla_3986_27_16, &direction_playerskinmilla_3986_27_16, &direction_playerskinmilla_3986_27_16, &direction_playerskinmilla_3986_27_16, &direction_playerskinmilla_3986_27_16, &direction_playerskinmilla_3986_27_16, &direction_playerskinmilla_3986_27_16, &direction_playerskinmilla_3986_27_16, &direction_playerskinmilla_3986_27_16, &direction_playerskinmilla_3986_27_16, &direction_playerskinmilla_3986_27_16, &direction_playerskinmilla_3986_27_16, &direction_playerskinmilla_3986_27_16, &direction_playerskinmilla_3986_27_16, &direction_playerskinmilla_3986_27_16, NULL, &direction_playerskinmilla_3986_27_0, &direction_playerskinmilla_3986_27_0, &direction_playerskinmilla_3986_27_0, &direction_playerskinmilla_3986_27_0, &direction_playerskinmilla_3986_27_0, &direction_playerskinmilla_3986_27_0, &direction_playerskinmilla_3986_27_0};
static Image* images_playerskinmilla_3986_31_0[4];
static Direction direction_playerskinmilla_3986_31_0 = {0, 25, 25, 0, -1, images_playerskinmilla_3986_31_0, 4};
static Image* images_playerskinmilla_3986_31_16[4];
static Direction direction_playerskinmilla_3986_31_16 = {16, 25, 25, 0, -1, images_playerskinmilla_3986_31_16, 4};
static Animation anim_playerskinmilla_3986_31 = {&direction_playerskinmilla_3986_31_0, &direction_playerskinmilla_3986_31_0, &direction_playerskinmilla_3986_31_0, &direction_playerskinmilla_3986_31_0, &direction_playerskinmilla_3986_31_0, &direction_playerskinmilla_3986_31_0, &direction_playerskinmilla_3986_31_0, &direction_playerskinmilla_3986_31_0, NULL, &direction_playerskinmilla_3986_31_16, &direction_playerskinmilla_3986_31_16, &direction_playerskinmilla_3986_31_16, &direction_playerskinmilla_3986_31_16, &direction_playerskinmilla_3986_31_16, &direction_playerskinmilla_3986_31_16, &direction_playerskinmilla_3986_31_16, &direction_playerskinmilla_3986_31_16, &direction_playerskinmilla_3986_31_16, &direction_playerskinmilla_3986_31_16, &direction_playerskinmilla_3986_31_16, &direction_playerskinmilla_3986_31_16, &direction_playerskinmilla_3986_31_16, &direction_playerskinmilla_3986_31_16, &direction_playerskinmilla_3986_31_16, NULL, &direction_playerskinmilla_3986_31_0, &direction_playerskinmilla_3986_31_0, &direction_playerskinmilla_3986_31_0, &direction_playerskinmilla_3986_31_0, &direction_playerskinmilla_3986_31_0, &direction_playerskinmilla_3986_31_0, &direction_playerskinmilla_3986_31_0};
static Image* images_playerskinmilla_3986_32_0[4];
static Direction direction_playerskinmilla_3986_32_0 = {0, 25, 25, 0, -1, images_playerskinmilla_3986_32_0, 4};
static Image* images_playerskinmilla_3986_32_16[4];
static Direction direction_playerskinmilla_3986_32_16 = {16, 25, 25, 0, -1, images_playerskinmilla_3986_32_16, 4};
static Animation anim_playerskinmilla_3986_32 = {&direction_playerskinmilla_3986_32_0, &direction_playerskinmilla_3986_32_0, &direction_playerskinmilla_3986_32_0, &direction_playerskinmilla_3986_32_0, &direction_playerskinmilla_3986_32_0, &direction_playerskinmilla_3986_32_0, &direction_playerskinmilla_3986_32_0, &direction_playerskinmilla_3986_32_0, NULL, &direction_playerskinmilla_3986_32_16, &direction_playerskinmilla_3986_32_16, &direction_playerskinmilla_3986_32_16, &direction_playerskinmilla_3986_32_16, &direction_playerskinmilla_3986_32_16, &direction_playerskinmilla_3986_32_16, &direction_playerskinmilla_3986_32_16, &direction_playerskinmilla_3986_32_16, &direction_playerskinmilla_3986_32_16, &direction_playerskinmilla_3986_32_16, &direction_playerskinmilla_3986_32_16, &direction_playerskinmilla_3986_32_16, &direction_playerskinmilla_3986_32_16, &direction_playerskinmilla_3986_32_16, &direction_playerskinmilla_3986_32_16, NULL, &direction_playerskinmilla_3986_32_0, &direction_playerskinmilla_3986_32_0, &direction_playerskinmilla_3986_32_0, &direction_playerskinmilla_3986_32_0, &direction_playerskinmilla_3986_32_0, &direction_playerskinmilla_3986_32_0, &direction_playerskinmilla_3986_32_0};
static Image* images_playerskinmilla_3986_33_0[9];
static Direction direction_playerskinmilla_3986_33_0 = {0, 50, 50, 0, 1, images_playerskinmilla_3986_33_0, 9};
static Animation anim_playerskinmilla_3986_33 = {&direction_playerskinmilla_3986_33_0, &direction_playerskinmilla_3986_33_0, &direction_playerskinmilla_3986_33_0, &direction_playerskinmilla_3986_33_0, &direction_playerskinmilla_3986_33_0, &direction_playerskinmilla_3986_33_0, &direction_playerskinmilla_3986_33_0, &direction_playerskinmilla_3986_33_0, &direction_playerskinmilla_3986_33_0, &direction_playerskinmilla_3986_33_0, &direction_playerskinmilla_3986_33_0, &direction_playerskinmilla_3986_33_0, &direction_playerskinmilla_3986_33_0, &direction_playerskinmilla_3986_33_0, &direction_playerskinmilla_3986_33_0, &direction_playerskinmilla_3986_33_0, NULL, &direction_playerskinmilla_3986_33_0, &direction_playerskinmilla_3986_33_0, &direction_playerskinmilla_3986_33_0, &direction_playerskinmilla_3986_33_0, &direction_playerskinmilla_3986_33_0, &direction_playerskinmilla_3986_33_0, &direction_playerskinmilla_3986_33_0, &direction_playerskinmilla_3986_33_0, &direction_playerskinmilla_3986_33_0, &direction_playerskinmilla_3986_33_0, &direction_playerskinmilla_3986_33_0, &direction_playerskinmilla_3986_33_0, &direction_playerskinmilla_3986_33_0, &direction_playerskinmilla_3986_33_0, &direction_playerskinmilla_3986_33_0};
static Image* images_playerskinmilla_3986_35_0[8];
static Direction direction_playerskinmilla_3986_35_0 = {0, 0, 0, 0, -1, images_playerskinmilla_3986_35_0, 8};
static Animation anim_playerskinmilla_3986_35 = {&direction_playerskinmilla_3986_35_0, &direction_playerskinmilla_3986_35_0, &direction_playerskinmilla_3986_35_0, &direction_playerskinmilla_3986_35_0, &direction_playerskinmilla_3986_35_0, &direction_playerskinmilla_3986_35_0, &direction_playerskinmilla_3986_35_0, &direction_playerskinmilla_3986_35_0, &direction_playerskinmilla_3986_35_0, &direction_playerskinmilla_3986_35_0, &direction_playerskinmilla_3986_35_0, &direction_playerskinmilla_3986_35_0, &direction_playerskinmilla_3986_35_0, &direction_playerskinmilla_3986_35_0, &direction_playerskinmilla_3986_35_0, &direction_playerskinmilla_3986_35_0, NULL, &direction_playerskinmilla_3986_35_0, &direction_playerskinmilla_3986_35_0, &direction_playerskinmilla_3986_35_0, &direction_playerskinmilla_3986_35_0, &direction_playerskinmilla_3986_35_0, &direction_playerskinmilla_3986_35_0, &direction_playerskinmilla_3986_35_0, &direction_playerskinmilla_3986_35_0, &direction_playerskinmilla_3986_35_0, &direction_playerskinmilla_3986_35_0, &direction_playerskinmilla_3986_35_0, &direction_playerskinmilla_3986_35_0, &direction_playerskinmilla_3986_35_0, &direction_playerskinmilla_3986_35_0, &direction_playerskinmilla_3986_35_0};
static Image* images_playerskinmilla_3986_36_0[1];
static Direction direction_playerskinmilla_3986_36_0 = {0, 50, 50, 0, 4, images_playerskinmilla_3986_36_0, 1};
static Animation anim_playerskinmilla_3986_36 = {&direction_playerskinmilla_3986_36_0, &direction_playerskinmilla_3986_36_0, &direction_playerskinmilla_3986_36_0, &direction_playerskinmilla_3986_36_0, &direction_playerskinmilla_3986_36_0, &direction_playerskinmilla_3986_36_0, &direction_playerskinmilla_3986_36_0, &direction_playerskinmilla_3986_36_0, &direction_playerskinmilla_3986_36_0, &direction_playerskinmilla_3986_36_0, &direction_playerskinmilla_3986_36_0, &direction_playerskinmilla_3986_36_0, &direction_playerskinmilla_3986_36_0, &direction_playerskinmilla_3986_36_0, &direction_playerskinmilla_3986_36_0, &direction_playerskinmilla_3986_36_0, NULL, &direction_playerskinmilla_3986_36_0, &direction_playerskinmilla_3986_36_0, &direction_playerskinmilla_3986_36_0, &direction_playerskinmilla_3986_36_0, &direction_playerskinmilla_3986_36_0, &direction_playerskinmilla_3986_36_0, &direction_playerskinmilla_3986_36_0, &direction_playerskinmilla_3986_36_0, &direction_playerskinmilla_3986_36_0, &direction_playerskinmilla_3986_36_0, &direction_playerskinmilla_3986_36_0, &direction_playerskinmilla_3986_36_0, &direction_playerskinmilla_3986_36_0, &direction_playerskinmilla_3986_36_0, &direction_playerskinmilla_3986_36_0};
static Image* images_playerskinmilla_3986_37_0[13];
static Direction direction_playerskinmilla_3986_37_0 = {0, 16, 16, 12, -1, images_playerskinmilla_3986_37_0, 13};
static Image* images_playerskinmilla_3986_37_1[6];
static Direction direction_playerskinmilla_3986_37_1 = {1, 14, 14, 5, -1, images_playerskinmilla_3986_37_1, 6};
static Image* images_playerskinmilla_3986_37_16[13];
static Direction direction_playerskinmilla_3986_37_16 = {16, 16, 16, 12, -1, images_playerskinmilla_3986_37_16, 13};
static Image* images_playerskinmilla_3986_37_17[6];
static Direction direction_playerskinmilla_3986_37_17 = {17, 14, 14, 5, -1, images_playerskinmilla_3986_37_17, 6};
static Animation anim_playerskinmilla_3986_37 = {&direction_playerskinmilla_3986_37_0, &direction_playerskinmilla_3986_37_1, &direction_playerskinmilla_3986_37_1, &direction_playerskinmilla_3986_37_1, &direction_playerskinmilla_3986_37_1, &direction_playerskinmilla_3986_37_1, &direction_playerskinmilla_3986_37_1, &direction_playerskinmilla_3986_37_1, &direction_playerskinmilla_3986_37_1, &direction_playerskinmilla_3986_37_16, &direction_playerskinmilla_3986_37_16, &direction_playerskinmilla_3986_37_16, &direction_playerskinmilla_3986_37_16, &direction_playerskinmilla_3986_37_16, &direction_playerskinmilla_3986_37_16, &direction_playerskinmilla_3986_37_16, &direction_playerskinmilla_3986_37_16, &direction_playerskinmilla_3986_37_17, &direction_playerskinmilla_3986_37_17, &direction_playerskinmilla_3986_37_17, &direction_playerskinmilla_3986_37_17, &direction_playerskinmilla_3986_37_17, &direction_playerskinmilla_3986_37_17, &direction_playerskinmilla_3986_37_17, &direction_playerskinmilla_3986_37_17, &direction_playerskinmilla_3986_37_0, &direction_playerskinmilla_3986_37_0, &direction_playerskinmilla_3986_37_0, &direction_playerskinmilla_3986_37_0, &direction_playerskinmilla_3986_37_0, &direction_playerskinmilla_3986_37_0, &direction_playerskinmilla_3986_37_0};
static Image* images_playerskinmilla_3986_38_0[4];
static Direction direction_playerskinmilla_3986_38_0 = {0, 18, 18, 3, -1, images_playerskinmilla_3986_38_0, 4};
static Image* images_playerskinmilla_3986_38_16[4];
static Direction direction_playerskinmilla_3986_38_16 = {16, 18, 18, 3, -1, images_playerskinmilla_3986_38_16, 4};
static Animation anim_playerskinmilla_3986_38 = {&direction_playerskinmilla_3986_38_0, &direction_playerskinmilla_3986_38_0, &direction_playerskinmilla_3986_38_0, &direction_playerskinmilla_3986_38_0, &direction_playerskinmilla_3986_38_0, &direction_playerskinmilla_3986_38_0, &direction_playerskinmilla_3986_38_0, &direction_playerskinmilla_3986_38_0, NULL, &direction_playerskinmilla_3986_38_16, &direction_playerskinmilla_3986_38_16, &direction_playerskinmilla_3986_38_16, &direction_playerskinmilla_3986_38_16, &direction_playerskinmilla_3986_38_16, &direction_playerskinmilla_3986_38_16, &direction_playerskinmilla_3986_38_16, &direction_playerskinmilla_3986_38_16, &direction_playerskinmilla_3986_38_16, &direction_playerskinmilla_3986_38_16, &direction_playerskinmilla_3986_38_16, &direction_playerskinmilla_3986_38_16, &direction_playerskinmilla_3986_38_16, &direction_playerskinmilla_3986_38_16, &direction_playerskinmilla_3986_38_16, NULL, &direction_playerskinmilla_3986_38_0, &direction_playerskinmilla_3986_38_0, &direction_playerskinmilla_3986_38_0, &direction_playerskinmilla_3986_38_0, &direction_playerskinmilla_3986_38_0, &direction_playerskinmilla_3986_38_0, &direction_playerskinmilla_3986_38_0};
static Image* images_playerskinmilla_3986_39_0[8];
static Direction direction_playerskinmilla_3986_39_0 = {0, 50, 50, 2, -1, images_playerskinmilla_3986_39_0, 8};
static Image* images_playerskinmilla_3986_39_16[8];
static Direction direction_playerskinmilla_3986_39_16 = {16, 50, 50, 2, -1, images_playerskinmilla_3986_39_16, 8};
static Animation anim_playerskinmilla_3986_39 = {&direction_playerskinmilla_3986_39_0, &direction_playerskinmilla_3986_39_0, &direction_playerskinmilla_3986_39_0, &direction_playerskinmilla_3986_39_0, &direction_playerskinmilla_3986_39_0, &direction_playerskinmilla_3986_39_0, &direction_playerskinmilla_3986_39_0, &direction_playerskinmilla_3986_39_0, NULL, &direction_playerskinmilla_3986_39_16, &direction_playerskinmilla_3986_39_16, &direction_playerskinmilla_3986_39_16, &direction_playerskinmilla_3986_39_16, &direction_playerskinmilla_3986_39_16, &direction_playerskinmilla_3986_39_16, &direction_playerskinmilla_3986_39_16, &direction_playerskinmilla_3986_39_16, &direction_playerskinmilla_3986_39_16, &direction_playerskinmilla_3986_39_16, &direction_playerskinmilla_3986_39_16, &direction_playerskinmilla_3986_39_16, &direction_playerskinmilla_3986_39_16, &direction_playerskinmilla_3986_39_16, &direction_playerskinmilla_3986_39_16, NULL, &direction_playerskinmilla_3986_39_0, &direction_playerskinmilla_3986_39_0, &direction_playerskinmilla_3986_39_0, &direction_playerskinmilla_3986_39_0, &direction_playerskinmilla_3986_39_0, &direction_playerskinmilla_3986_39_0, &direction_playerskinmilla_3986_39_0};
static Image* images_playerskinmilla_3986_40_0[66];
static Direction direction_playerskinmilla_3986_40_0 = {0, 0, 0, 0, 1, images_playerskinmilla_3986_40_0, 66};
static Image* images_playerskinmilla_3986_40_1[4];
static Direction direction_playerskinmilla_3986_40_1 = {1, 7, 7, 0, -1, images_playerskinmilla_3986_40_1, 4};
static Image* images_playerskinmilla_3986_40_4[3];
static Direction direction_playerskinmilla_3986_40_4 = {4, 100, 100, 0, -1, images_playerskinmilla_3986_40_4, 3};
static Image* images_playerskinmilla_3986_40_7[1];
static Direction direction_playerskinmilla_3986_40_7 = {7, 50, 50, 0, -1, images_playerskinmilla_3986_40_7, 1};
static Image* images_playerskinmilla_3986_40_8[12];
static Direction direction_playerskinmilla_3986_40_8 = {8, 20, 20, 0, -1, images_playerskinmilla_3986_40_8, 12};
static Image* images_playerskinmilla_3986_40_9[1];
static Direction direction_playerskinmilla_3986_40_9 = {9, 50, 50, 0, -1, images_playerskinmilla_3986_40_9, 1};
static Image* images_playerskinmilla_3986_40_10[1];
static Direction direction_playerskinmilla_3986_40_10 = {10, 50, 50, 0, -1, images_playerskinmilla_3986_40_10, 1};
static Image* images_playerskinmilla_3986_40_12[1];
static Direction direction_playerskinmilla_3986_40_12 = {12, 50, 50, 0, -1, images_playerskinmilla_3986_40_12, 1};
static Image* images_playerskinmilla_3986_40_14[6];
static Direction direction_playerskinmilla_3986_40_14 = {14, 20, 20, 0, -1, images_playerskinmilla_3986_40_14, 6};
static Image* images_playerskinmilla_3986_40_16[66];
static Direction direction_playerskinmilla_3986_40_16 = {16, 0, 0, 0, 1, images_playerskinmilla_3986_40_16, 66};
static Image* images_playerskinmilla_3986_40_20[3];
static Direction direction_playerskinmilla_3986_40_20 = {20, 100, 100, 0, -1, images_playerskinmilla_3986_40_20, 3};
static Image* images_playerskinmilla_3986_40_24[1];
static Direction direction_playerskinmilla_3986_40_24 = {24, 50, 50, 0, -1, images_playerskinmilla_3986_40_24, 1};
static Image* images_playerskinmilla_3986_40_26[1];
static Direction direction_playerskinmilla_3986_40_26 = {26, 50, 50, 0, -1, images_playerskinmilla_3986_40_26, 1};
static Image* images_playerskinmilla_3986_40_28[1];
static Direction direction_playerskinmilla_3986_40_28 = {28, 50, 51, 0, -1, images_playerskinmilla_3986_40_28, 1};
static Image* images_playerskinmilla_3986_40_30[6];
static Direction direction_playerskinmilla_3986_40_30 = {30, 20, 20, 0, -1, images_playerskinmilla_3986_40_30, 6};
static Animation anim_playerskinmilla_3986_40 = {&direction_playerskinmilla_3986_40_0, &direction_playerskinmilla_3986_40_1, &direction_playerskinmilla_3986_40_1, &direction_playerskinmilla_3986_40_4, &direction_playerskinmilla_3986_40_4, &direction_playerskinmilla_3986_40_4, &direction_playerskinmilla_3986_40_7, &direction_playerskinmilla_3986_40_7, &direction_playerskinmilla_3986_40_8, &direction_playerskinmilla_3986_40_9, &direction_playerskinmilla_3986_40_10, NULL, &direction_playerskinmilla_3986_40_12, NULL, &direction_playerskinmilla_3986_40_14, NULL, &direction_playerskinmilla_3986_40_16, &direction_playerskinmilla_3986_40_16, NULL, &direction_playerskinmilla_3986_40_20, &direction_playerskinmilla_3986_40_20, &direction_playerskinmilla_3986_40_20, NULL, &direction_playerskinmilla_3986_40_24, &direction_playerskinmilla_3986_40_24, NULL, &direction_playerskinmilla_3986_40_26, NULL, &direction_playerskinmilla_3986_40_28, NULL, &direction_playerskinmilla_3986_40_30, NULL};
static Image* images_playerskinmilla_3986_41_0[1];
static Direction direction_playerskinmilla_3986_41_0 = {0, 50, 50, 0, 1, images_playerskinmilla_3986_41_0, 1};
static Image* images_playerskinmilla_3986_41_1[4];
static Direction direction_playerskinmilla_3986_41_1 = {1, 7, 7, 0, -1, images_playerskinmilla_3986_41_1, 4};
static Image* images_playerskinmilla_3986_41_2[3];
static Direction direction_playerskinmilla_3986_41_2 = {2, 9, 9, 2, -1, images_playerskinmilla_3986_41_2, 3};
static Image* images_playerskinmilla_3986_41_3[5];
static Direction direction_playerskinmilla_3986_41_3 = {3, 25, 25, 4, -1, images_playerskinmilla_3986_41_3, 5};
static Image* images_playerskinmilla_3986_41_4[16];
static Direction direction_playerskinmilla_3986_41_4 = {4, 9, 9, 15, -1, images_playerskinmilla_3986_41_4, 16};
static Image* images_playerskinmilla_3986_41_7[12];
static Direction direction_playerskinmilla_3986_41_7 = {7, 50, 50, 0, -1, images_playerskinmilla_3986_41_7, 12};
static Image* images_playerskinmilla_3986_41_8[2];
static Direction direction_playerskinmilla_3986_41_8 = {8, 50, 50, 0, 1, images_playerskinmilla_3986_41_8, 2};
static Image* images_playerskinmilla_3986_41_12[4];
static Direction direction_playerskinmilla_3986_41_12 = {12, 14, 14, 2, -1, images_playerskinmilla_3986_41_12, 4};
static Image* images_playerskinmilla_3986_41_13[8];
static Direction direction_playerskinmilla_3986_41_13 = {13, 16, 16, 6, -1, images_playerskinmilla_3986_41_13, 8};
static Image* images_playerskinmilla_3986_41_14[3];
static Direction direction_playerskinmilla_3986_41_14 = {14, 16, 16, 2, -1, images_playerskinmilla_3986_41_14, 3};
static Image* images_playerskinmilla_3986_41_15[5];
static Direction direction_playerskinmilla_3986_41_15 = {15, 80, 80, 0, -1, images_playerskinmilla_3986_41_15, 5};
static Image* images_playerskinmilla_3986_41_16[1];
static Direction direction_playerskinmilla_3986_41_16 = {16, 50, 50, 0, 1, images_playerskinmilla_3986_41_16, 1};
static Image* images_playerskinmilla_3986_41_17[8];
static Direction direction_playerskinmilla_3986_41_17 = {17, 50, 50, 2, -1, images_playerskinmilla_3986_41_17, 8};
static Image* images_playerskinmilla_3986_41_24[1];
static Direction direction_playerskinmilla_3986_41_24 = {24, 0, 0, 0, -1, images_playerskinmilla_3986_41_24, 1};
static Image* images_playerskinmilla_3986_41_28[4];
static Direction direction_playerskinmilla_3986_41_28 = {28, 14, 14, 2, -1, images_playerskinmilla_3986_41_28, 4};
static Image* images_playerskinmilla_3986_41_29[1];
static Direction direction_playerskinmilla_3986_41_29 = {29, 50, 50, 0, 1, images_playerskinmilla_3986_41_29, 1};
static Image* images_playerskinmilla_3986_41_30[3];
static Direction direction_playerskinmilla_3986_41_30 = {30, 16, 16, 2, -1, images_playerskinmilla_3986_41_30, 3};
static Image* images_playerskinmilla_3986_41_31[5];
static Direction direction_playerskinmilla_3986_41_31 = {31, 80, 80, 0, -1, images_playerskinmilla_3986_41_31, 5};
static Animation anim_playerskinmilla_3986_41 = {&direction_playerskinmilla_3986_41_0, &direction_playerskinmilla_3986_41_1, &direction_playerskinmilla_3986_41_2, &direction_playerskinmilla_3986_41_3, &direction_playerskinmilla_3986_41_4, &direction_playerskinmilla_3986_41_4, &direction_playerskinmilla_3986_41_7, &direction_playerskinmilla_3986_41_7, &direction_playerskinmilla_3986_41_8, &direction_playerskinmilla_3986_41_8, NULL, &direction_playerskinmilla_3986_41_12, &direction_playerskinmilla_3986_41_12, &direction_playerskinmilla_3986_41_13, &direction_playerskinmilla_3986_41_14, &direction_playerskinmilla_3986_41_15, &direction_playerskinmilla_3986_41_16, &direction_playerskinmilla_3986_41_17, &direction_playerskinmilla_3986_41_17, &direction_playerskinmilla_3986_41_17, &direction_playerskinmilla_3986_41_17, &direction_playerskinmilla_3986_41_24, &direction_playerskinmilla_3986_41_24, &direction_playerskinmilla_3986_41_24, &direction_playerskinmilla_3986_41_24, &direction_playerskinmilla_3986_41_24, NULL, &direction_playerskinmilla_3986_41_28, &direction_playerskinmilla_3986_41_28, &direction_playerskinmilla_3986_41_29, &direction_playerskinmilla_3986_41_30, &direction_playerskinmilla_3986_41_31};
static Animation * anim_array_playerskinmilla_3986[42] = {&anim_playerskinmilla_3986_0, &anim_playerskinmilla_3986_1, &anim_playerskinmilla_3986_2, NULL, NULL, &anim_playerskinmilla_3986_5, NULL, &anim_playerskinmilla_3986_7, &anim_playerskinmilla_3986_8, &anim_playerskinmilla_3986_9, &anim_playerskinmilla_3986_10, &anim_playerskinmilla_3986_11, &anim_playerskinmilla_3986_12, NULL, &anim_playerskinmilla_3986_14, &anim_playerskinmilla_3986_15, &anim_playerskinmilla_3986_16, &anim_playerskinmilla_3986_17, &anim_playerskinmilla_3986_18, NULL, &anim_playerskinmilla_3986_20, NULL, NULL, &anim_playerskinmilla_3986_23, &anim_playerskinmilla_3986_24, &anim_playerskinmilla_3986_25, &anim_playerskinmilla_3986_26, &anim_playerskinmilla_3986_27, NULL, NULL, NULL, &anim_playerskinmilla_3986_31, &anim_playerskinmilla_3986_32, &anim_playerskinmilla_3986_33, NULL, &anim_playerskinmilla_3986_35, &anim_playerskinmilla_3986_36, &anim_playerskinmilla_3986_37, &anim_playerskinmilla_3986_38, &anim_playerskinmilla_3986_39, &anim_playerskinmilla_3986_40, &anim_playerskinmilla_3986_41};
static Animations anim_playerskinmilla_3986 = {42, &anim_array_playerskinmilla_3986[0]};
static bool anim_playerskinmilla_3986_initialized;
class PlayerSkinMilla_3986 : public Active
{
public:
    PlayerSkinMilla_3986(int x, int y) : Active(x, y, PlayerSkinMilla_3986_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("PlayerSkin_Milla", 16);
#endif
        set_visible(false);
        this->animations = &anim_playerskinmilla_3986;
        if (!anim_playerskinmilla_3986_initialized) {
            anim_playerskinmilla_3986_initialized = true;
            images_playerskinmilla_3986_0_0[0] = get_internal_image(10799);
            images_playerskinmilla_3986_0_0[1] = get_internal_image(10799);
            images_playerskinmilla_3986_0_0[2] = get_internal_image(10795);
            images_playerskinmilla_3986_0_0[3] = get_internal_image(10795);
            images_playerskinmilla_3986_0_0[4] = get_internal_image(10801);
            images_playerskinmilla_3986_0_0[5] = get_internal_image(10801);
            images_playerskinmilla_3986_0_0[6] = get_internal_image(10806);
            images_playerskinmilla_3986_0_0[7] = get_internal_image(10806);
            images_playerskinmilla_3986_0_0[8] = get_internal_image(10799);
            images_playerskinmilla_3986_0_0[9] = get_internal_image(10799);
            images_playerskinmilla_3986_0_0[10] = get_internal_image(10797);
            images_playerskinmilla_3986_0_0[11] = get_internal_image(10798);
            images_playerskinmilla_3986_0_0[12] = get_internal_image(10801);
            images_playerskinmilla_3986_0_0[13] = get_internal_image(10801);
            images_playerskinmilla_3986_0_0[14] = get_internal_image(10806);
            images_playerskinmilla_3986_0_0[15] = get_internal_image(10806);
            images_playerskinmilla_3986_0_1[0] = get_internal_image(10799);
            images_playerskinmilla_3986_0_1[1] = get_internal_image(10812);
            images_playerskinmilla_3986_0_1[2] = get_internal_image(10826);
            images_playerskinmilla_3986_0_1[3] = get_internal_image(10821);
            images_playerskinmilla_3986_0_1[4] = get_internal_image(10825);
            images_playerskinmilla_3986_0_1[5] = get_internal_image(10824);
            images_playerskinmilla_3986_0_1[6] = get_internal_image(10828);
            images_playerskinmilla_3986_0_1[7] = get_internal_image(10822);
            images_playerskinmilla_3986_0_1[8] = get_internal_image(10829);
            images_playerskinmilla_3986_0_1[9] = get_internal_image(10823);
            images_playerskinmilla_3986_0_1[10] = get_internal_image(10831);
            images_playerskinmilla_3986_0_1[11] = get_internal_image(10830);
            images_playerskinmilla_3986_0_1[12] = get_internal_image(10832);
            images_playerskinmilla_3986_0_1[13] = get_internal_image(10834);
            images_playerskinmilla_3986_0_1[14] = get_internal_image(10833);
            images_playerskinmilla_3986_0_1[15] = get_internal_image(10812);
            images_playerskinmilla_3986_0_2[0] = get_internal_image(10799);
            images_playerskinmilla_3986_0_2[1] = get_internal_image(7386);
            images_playerskinmilla_3986_0_2[2] = get_internal_image(7382);
            images_playerskinmilla_3986_0_2[3] = get_internal_image(7385);
            images_playerskinmilla_3986_0_2[4] = get_internal_image(6774);
            images_playerskinmilla_3986_0_2[5] = get_internal_image(6774);
            images_playerskinmilla_3986_0_2[6] = get_internal_image(6774);
            images_playerskinmilla_3986_0_2[7] = get_internal_image(6774);
            images_playerskinmilla_3986_0_2[8] = get_internal_image(7385);
            images_playerskinmilla_3986_0_2[9] = get_internal_image(7382);
            images_playerskinmilla_3986_0_2[10] = get_internal_image(7386);
            images_playerskinmilla_3986_0_3[0] = get_internal_image(10799);
            images_playerskinmilla_3986_0_3[1] = get_internal_image(7386);
            images_playerskinmilla_3986_0_3[2] = get_internal_image(7382);
            images_playerskinmilla_3986_0_3[3] = get_internal_image(722);
            images_playerskinmilla_3986_0_3[4] = get_internal_image(882);
            images_playerskinmilla_3986_0_3[5] = get_internal_image(911);
            images_playerskinmilla_3986_0_3[6] = get_internal_image(882);
            images_playerskinmilla_3986_0_3[7] = get_internal_image(915);
            images_playerskinmilla_3986_0_3[8] = get_internal_image(882);
            images_playerskinmilla_3986_0_3[9] = get_internal_image(963);
            images_playerskinmilla_3986_0_3[10] = get_internal_image(1072);
            images_playerskinmilla_3986_0_3[11] = get_internal_image(882);
            images_playerskinmilla_3986_0_3[12] = get_internal_image(911);
            images_playerskinmilla_3986_0_3[13] = get_internal_image(915);
            images_playerskinmilla_3986_0_3[14] = get_internal_image(882);
            images_playerskinmilla_3986_0_3[15] = get_internal_image(911);
            images_playerskinmilla_3986_0_3[16] = get_internal_image(882);
            images_playerskinmilla_3986_0_3[17] = get_internal_image(882);
            images_playerskinmilla_3986_0_3[18] = get_internal_image(882);
            images_playerskinmilla_3986_0_3[19] = get_internal_image(722);
            images_playerskinmilla_3986_0_3[20] = get_internal_image(7382);
            images_playerskinmilla_3986_0_3[21] = get_internal_image(7386);
            images_playerskinmilla_3986_0_3[22] = get_internal_image(10799);
            images_playerskinmilla_3986_0_4[0] = get_internal_image(10799);
            images_playerskinmilla_3986_0_4[1] = get_internal_image(2375);
            images_playerskinmilla_3986_0_4[2] = get_internal_image(2726);
            images_playerskinmilla_3986_0_4[3] = get_internal_image(2752);
            images_playerskinmilla_3986_0_4[4] = get_internal_image(2753);
            images_playerskinmilla_3986_0_4[5] = get_internal_image(2754);
            images_playerskinmilla_3986_0_4[6] = get_internal_image(10828);
            images_playerskinmilla_3986_0_4[7] = get_internal_image(10822);
            images_playerskinmilla_3986_0_4[8] = get_internal_image(10829);
            images_playerskinmilla_3986_0_4[9] = get_internal_image(10829);
            images_playerskinmilla_3986_0_4[10] = get_internal_image(10829);
            images_playerskinmilla_3986_0_4[11] = get_internal_image(10829);
            images_playerskinmilla_3986_0_4[12] = get_internal_image(10829);
            images_playerskinmilla_3986_0_4[13] = get_internal_image(2780);
            images_playerskinmilla_3986_0_4[14] = get_internal_image(3361);
            images_playerskinmilla_3986_0_4[15] = get_internal_image(2780);
            images_playerskinmilla_3986_0_4[16] = get_internal_image(10823);
            images_playerskinmilla_3986_0_4[17] = get_internal_image(10831);
            images_playerskinmilla_3986_0_4[18] = get_internal_image(10830);
            images_playerskinmilla_3986_0_4[19] = get_internal_image(10832);
            images_playerskinmilla_3986_0_4[20] = get_internal_image(10834);
            images_playerskinmilla_3986_0_4[21] = get_internal_image(10833);
            images_playerskinmilla_3986_0_4[22] = get_internal_image(10812);
            images_playerskinmilla_3986_0_8[0] = get_internal_image(10771);
            images_playerskinmilla_3986_0_8[1] = get_internal_image(6903);
            images_playerskinmilla_3986_0_8[2] = get_internal_image(5295);
            images_playerskinmilla_3986_0_8[3] = get_internal_image(3545);
            images_playerskinmilla_3986_0_8[4] = get_internal_image(3470);
            images_playerskinmilla_3986_0_8[5] = get_internal_image(10779);
            images_playerskinmilla_3986_0_8[6] = get_internal_image(10782);
            images_playerskinmilla_3986_0_8[7] = get_internal_image(10790);
            images_playerskinmilla_3986_0_8[8] = get_internal_image(10827);
            images_playerskinmilla_3986_0_8[9] = get_internal_image(4835);
            images_playerskinmilla_3986_0_8[10] = get_internal_image(4387);
            images_playerskinmilla_3986_0_8[11] = get_internal_image(6867);
            images_playerskinmilla_3986_0_8[12] = get_internal_image(6585);
            images_playerskinmilla_3986_0_8[13] = get_internal_image(6115);
            images_playerskinmilla_3986_0_8[14] = get_internal_image(8190);
            images_playerskinmilla_3986_0_8[15] = get_internal_image(11174);
            images_playerskinmilla_3986_0_8[16] = get_internal_image(5465);
            images_playerskinmilla_3986_0_8[17] = get_internal_image(4694);
            images_playerskinmilla_3986_0_8[18] = get_internal_image(4917);
            images_playerskinmilla_3986_0_8[19] = get_internal_image(6562);
            images_playerskinmilla_3986_0_8[20] = get_internal_image(8324);
            images_playerskinmilla_3986_0_8[21] = get_internal_image(7587);
            images_playerskinmilla_3986_0_8[22] = get_internal_image(6908);
            images_playerskinmilla_3986_0_8[23] = get_internal_image(191);
            images_playerskinmilla_3986_0_8[24] = get_internal_image(5217);
            images_playerskinmilla_3986_0_8[25] = get_internal_image(10827);
            images_playerskinmilla_3986_0_8[26] = get_internal_image(6298);
            images_playerskinmilla_3986_0_8[27] = get_internal_image(10891);
            images_playerskinmilla_3986_0_8[28] = get_internal_image(8354);
            images_playerskinmilla_3986_0_15[0] = get_internal_image(10817);
            images_playerskinmilla_3986_0_15[1] = get_internal_image(10817);
            images_playerskinmilla_3986_0_15[2] = get_internal_image(10818);
            images_playerskinmilla_3986_0_15[3] = get_internal_image(10818);
            images_playerskinmilla_3986_0_15[4] = get_internal_image(10819);
            images_playerskinmilla_3986_0_15[5] = get_internal_image(10819);
            images_playerskinmilla_3986_0_15[6] = get_internal_image(10820);
            images_playerskinmilla_3986_0_15[7] = get_internal_image(10820);
            images_playerskinmilla_3986_0_15[8] = get_internal_image(10817);
            images_playerskinmilla_3986_0_15[9] = get_internal_image(10817);
            images_playerskinmilla_3986_0_15[10] = get_internal_image(10818);
            images_playerskinmilla_3986_0_15[11] = get_internal_image(10818);
            images_playerskinmilla_3986_0_15[12] = get_internal_image(10819);
            images_playerskinmilla_3986_0_15[13] = get_internal_image(10819);
            images_playerskinmilla_3986_0_15[14] = get_internal_image(10820);
            images_playerskinmilla_3986_0_15[15] = get_internal_image(10820);
            images_playerskinmilla_3986_0_16[0] = get_internal_image(10796);
            images_playerskinmilla_3986_0_16[1] = get_internal_image(10796);
            images_playerskinmilla_3986_0_16[2] = get_internal_image(10800);
            images_playerskinmilla_3986_0_16[3] = get_internal_image(10800);
            images_playerskinmilla_3986_0_16[4] = get_internal_image(10802);
            images_playerskinmilla_3986_0_16[5] = get_internal_image(10802);
            images_playerskinmilla_3986_0_16[6] = get_internal_image(10807);
            images_playerskinmilla_3986_0_16[7] = get_internal_image(10807);
            images_playerskinmilla_3986_0_16[8] = get_internal_image(10796);
            images_playerskinmilla_3986_0_16[9] = get_internal_image(10796);
            images_playerskinmilla_3986_0_16[10] = get_internal_image(10804);
            images_playerskinmilla_3986_0_16[11] = get_internal_image(10805);
            images_playerskinmilla_3986_0_16[12] = get_internal_image(10802);
            images_playerskinmilla_3986_0_16[13] = get_internal_image(10802);
            images_playerskinmilla_3986_0_16[14] = get_internal_image(10807);
            images_playerskinmilla_3986_0_16[15] = get_internal_image(10807);
            images_playerskinmilla_3986_0_17[0] = get_internal_image(10796);
            images_playerskinmilla_3986_0_17[1] = get_internal_image(10835);
            images_playerskinmilla_3986_0_17[2] = get_internal_image(10836);
            images_playerskinmilla_3986_0_17[3] = get_internal_image(10837);
            images_playerskinmilla_3986_0_17[4] = get_internal_image(10838);
            images_playerskinmilla_3986_0_17[5] = get_internal_image(10839);
            images_playerskinmilla_3986_0_17[6] = get_internal_image(10840);
            images_playerskinmilla_3986_0_17[7] = get_internal_image(10841);
            images_playerskinmilla_3986_0_17[8] = get_internal_image(10842);
            images_playerskinmilla_3986_0_17[9] = get_internal_image(10843);
            images_playerskinmilla_3986_0_17[10] = get_internal_image(10844);
            images_playerskinmilla_3986_0_17[11] = get_internal_image(10845);
            images_playerskinmilla_3986_0_17[12] = get_internal_image(10846);
            images_playerskinmilla_3986_0_17[13] = get_internal_image(10847);
            images_playerskinmilla_3986_0_17[14] = get_internal_image(10848);
            images_playerskinmilla_3986_0_17[15] = get_internal_image(10835);
            images_playerskinmilla_3986_0_18[0] = get_internal_image(10796);
            images_playerskinmilla_3986_0_18[1] = get_internal_image(7388);
            images_playerskinmilla_3986_0_18[2] = get_internal_image(7395);
            images_playerskinmilla_3986_0_18[3] = get_internal_image(7414);
            images_playerskinmilla_3986_0_18[4] = get_internal_image(7417);
            images_playerskinmilla_3986_0_18[5] = get_internal_image(7417);
            images_playerskinmilla_3986_0_18[6] = get_internal_image(7417);
            images_playerskinmilla_3986_0_18[7] = get_internal_image(7417);
            images_playerskinmilla_3986_0_18[8] = get_internal_image(7414);
            images_playerskinmilla_3986_0_18[9] = get_internal_image(7395);
            images_playerskinmilla_3986_0_18[10] = get_internal_image(7388);
            images_playerskinmilla_3986_0_19[0] = get_internal_image(10796);
            images_playerskinmilla_3986_0_19[1] = get_internal_image(7388);
            images_playerskinmilla_3986_0_19[2] = get_internal_image(7395);
            images_playerskinmilla_3986_0_19[3] = get_internal_image(929);
            images_playerskinmilla_3986_0_19[4] = get_internal_image(1322);
            images_playerskinmilla_3986_0_19[5] = get_internal_image(1573);
            images_playerskinmilla_3986_0_19[6] = get_internal_image(1322);
            images_playerskinmilla_3986_0_19[7] = get_internal_image(1584);
            images_playerskinmilla_3986_0_19[8] = get_internal_image(1322);
            images_playerskinmilla_3986_0_19[9] = get_internal_image(1794);
            images_playerskinmilla_3986_0_19[10] = get_internal_image(1807);
            images_playerskinmilla_3986_0_19[11] = get_internal_image(1322);
            images_playerskinmilla_3986_0_19[12] = get_internal_image(1573);
            images_playerskinmilla_3986_0_19[13] = get_internal_image(1584);
            images_playerskinmilla_3986_0_19[14] = get_internal_image(1322);
            images_playerskinmilla_3986_0_19[15] = get_internal_image(1573);
            images_playerskinmilla_3986_0_19[16] = get_internal_image(1322);
            images_playerskinmilla_3986_0_19[17] = get_internal_image(1322);
            images_playerskinmilla_3986_0_19[18] = get_internal_image(1322);
            images_playerskinmilla_3986_0_19[19] = get_internal_image(929);
            images_playerskinmilla_3986_0_19[20] = get_internal_image(7395);
            images_playerskinmilla_3986_0_19[21] = get_internal_image(7388);
            images_playerskinmilla_3986_0_19[22] = get_internal_image(10796);
            images_playerskinmilla_3986_0_20[0] = get_internal_image(10796);
            images_playerskinmilla_3986_0_20[1] = get_internal_image(2515);
            images_playerskinmilla_3986_0_20[2] = get_internal_image(3366);
            images_playerskinmilla_3986_0_20[3] = get_internal_image(3437);
            images_playerskinmilla_3986_0_20[4] = get_internal_image(3439);
            images_playerskinmilla_3986_0_20[5] = get_internal_image(3440);
            images_playerskinmilla_3986_0_20[6] = get_internal_image(10840);
            images_playerskinmilla_3986_0_20[7] = get_internal_image(10841);
            images_playerskinmilla_3986_0_20[8] = get_internal_image(10842);
            images_playerskinmilla_3986_0_20[9] = get_internal_image(10842);
            images_playerskinmilla_3986_0_20[10] = get_internal_image(10842);
            images_playerskinmilla_3986_0_20[11] = get_internal_image(10842);
            images_playerskinmilla_3986_0_20[12] = get_internal_image(10842);
            images_playerskinmilla_3986_0_20[13] = get_internal_image(3441);
            images_playerskinmilla_3986_0_20[14] = get_internal_image(3449);
            images_playerskinmilla_3986_0_20[15] = get_internal_image(3441);
            images_playerskinmilla_3986_0_20[16] = get_internal_image(10843);
            images_playerskinmilla_3986_0_20[17] = get_internal_image(10844);
            images_playerskinmilla_3986_0_20[18] = get_internal_image(10845);
            images_playerskinmilla_3986_0_20[19] = get_internal_image(10846);
            images_playerskinmilla_3986_0_20[20] = get_internal_image(10847);
            images_playerskinmilla_3986_0_20[21] = get_internal_image(10848);
            images_playerskinmilla_3986_0_20[22] = get_internal_image(10835);
            images_playerskinmilla_3986_0_31[0] = get_internal_image(10814);
            images_playerskinmilla_3986_0_31[1] = get_internal_image(10814);
            images_playerskinmilla_3986_0_31[2] = get_internal_image(10811);
            images_playerskinmilla_3986_0_31[3] = get_internal_image(10811);
            images_playerskinmilla_3986_0_31[4] = get_internal_image(10815);
            images_playerskinmilla_3986_0_31[5] = get_internal_image(10815);
            images_playerskinmilla_3986_0_31[6] = get_internal_image(10816);
            images_playerskinmilla_3986_0_31[7] = get_internal_image(10816);
            images_playerskinmilla_3986_0_31[8] = get_internal_image(10814);
            images_playerskinmilla_3986_0_31[9] = get_internal_image(10814);
            images_playerskinmilla_3986_0_31[10] = get_internal_image(10811);
            images_playerskinmilla_3986_0_31[11] = get_internal_image(10811);
            images_playerskinmilla_3986_0_31[12] = get_internal_image(10815);
            images_playerskinmilla_3986_0_31[13] = get_internal_image(10815);
            images_playerskinmilla_3986_0_31[14] = get_internal_image(10816);
            images_playerskinmilla_3986_0_31[15] = get_internal_image(10816);
            images_playerskinmilla_3986_1_0[0] = get_internal_image(4633);
            images_playerskinmilla_3986_1_0[1] = get_internal_image(1276);
            images_playerskinmilla_3986_1_0[2] = get_internal_image(1318);
            images_playerskinmilla_3986_1_0[3] = get_internal_image(1332);
            images_playerskinmilla_3986_1_0[4] = get_internal_image(1333);
            images_playerskinmilla_3986_1_0[5] = get_internal_image(4802);
            images_playerskinmilla_3986_1_0[6] = get_internal_image(4807);
            images_playerskinmilla_3986_1_0[7] = get_internal_image(4806);
            images_playerskinmilla_3986_1_0[8] = get_internal_image(4805);
            images_playerskinmilla_3986_1_0[9] = get_internal_image(4808);
            images_playerskinmilla_3986_1_8[0] = get_internal_image(4071);
            images_playerskinmilla_3986_1_8[1] = get_internal_image(3726);
            images_playerskinmilla_3986_1_8[2] = get_internal_image(3728);
            images_playerskinmilla_3986_1_8[3] = get_internal_image(2597);
            images_playerskinmilla_3986_1_8[4] = get_internal_image(4696);
            images_playerskinmilla_3986_1_8[5] = get_internal_image(4076);
            images_playerskinmilla_3986_1_8[6] = get_internal_image(4075);
            images_playerskinmilla_3986_1_8[7] = get_internal_image(4632);
            images_playerskinmilla_3986_1_8[8] = get_internal_image(4697);
            images_playerskinmilla_3986_1_8[9] = get_internal_image(4698);
            images_playerskinmilla_3986_1_15[0] = get_internal_image(6539);
            images_playerskinmilla_3986_1_15[1] = get_internal_image(6557);
            images_playerskinmilla_3986_1_15[2] = get_internal_image(6590);
            images_playerskinmilla_3986_1_15[3] = get_internal_image(6648);
            images_playerskinmilla_3986_1_15[4] = get_internal_image(6733);
            images_playerskinmilla_3986_1_15[5] = get_internal_image(6738);
            images_playerskinmilla_3986_1_15[6] = get_internal_image(6951);
            images_playerskinmilla_3986_1_15[7] = get_internal_image(7474);
            images_playerskinmilla_3986_1_15[8] = get_internal_image(7475);
            images_playerskinmilla_3986_1_15[9] = get_internal_image(7477);
            images_playerskinmilla_3986_1_16[0] = get_internal_image(4809);
            images_playerskinmilla_3986_1_16[1] = get_internal_image(1337);
            images_playerskinmilla_3986_1_16[2] = get_internal_image(1362);
            images_playerskinmilla_3986_1_16[3] = get_internal_image(1363);
            images_playerskinmilla_3986_1_16[4] = get_internal_image(1364);
            images_playerskinmilla_3986_1_16[5] = get_internal_image(4875);
            images_playerskinmilla_3986_1_16[6] = get_internal_image(4876);
            images_playerskinmilla_3986_1_16[7] = get_internal_image(4882);
            images_playerskinmilla_3986_1_16[8] = get_internal_image(4912);
            images_playerskinmilla_3986_1_16[9] = get_internal_image(4913);
            images_playerskinmilla_3986_1_31[0] = get_internal_image(4074);
            images_playerskinmilla_3986_1_31[1] = get_internal_image(4700);
            images_playerskinmilla_3986_1_31[2] = get_internal_image(4701);
            images_playerskinmilla_3986_1_31[3] = get_internal_image(4702);
            images_playerskinmilla_3986_1_31[4] = get_internal_image(4705);
            images_playerskinmilla_3986_1_31[5] = get_internal_image(4706);
            images_playerskinmilla_3986_1_31[6] = get_internal_image(4796);
            images_playerskinmilla_3986_1_31[7] = get_internal_image(4799);
            images_playerskinmilla_3986_1_31[8] = get_internal_image(6242);
            images_playerskinmilla_3986_1_31[9] = get_internal_image(5466);
            images_playerskinmilla_3986_2_0[0] = get_internal_image(4679);
            images_playerskinmilla_3986_2_0[1] = get_internal_image(4679);
            images_playerskinmilla_3986_2_0[2] = get_internal_image(4682);
            images_playerskinmilla_3986_2_0[3] = get_internal_image(8951);
            images_playerskinmilla_3986_2_0[4] = get_internal_image(4685);
            images_playerskinmilla_3986_2_0[5] = get_internal_image(6819);
            images_playerskinmilla_3986_2_0[6] = get_internal_image(4683);
            images_playerskinmilla_3986_2_0[7] = get_internal_image(8952);
            images_playerskinmilla_3986_2_15[0] = get_internal_image(6539);
            images_playerskinmilla_3986_2_15[1] = get_internal_image(6557);
            images_playerskinmilla_3986_2_15[2] = get_internal_image(6590);
            images_playerskinmilla_3986_2_15[3] = get_internal_image(6648);
            images_playerskinmilla_3986_2_15[4] = get_internal_image(6733);
            images_playerskinmilla_3986_2_15[5] = get_internal_image(6738);
            images_playerskinmilla_3986_2_15[6] = get_internal_image(6951);
            images_playerskinmilla_3986_2_15[7] = get_internal_image(7474);
            images_playerskinmilla_3986_2_15[8] = get_internal_image(7475);
            images_playerskinmilla_3986_2_15[9] = get_internal_image(7477);
            images_playerskinmilla_3986_2_16[0] = get_internal_image(4681);
            images_playerskinmilla_3986_2_16[1] = get_internal_image(4681);
            images_playerskinmilla_3986_2_16[2] = get_internal_image(8953);
            images_playerskinmilla_3986_2_16[3] = get_internal_image(8954);
            images_playerskinmilla_3986_2_16[4] = get_internal_image(8955);
            images_playerskinmilla_3986_2_16[5] = get_internal_image(8956);
            images_playerskinmilla_3986_2_16[6] = get_internal_image(8957);
            images_playerskinmilla_3986_2_16[7] = get_internal_image(9271);
            images_playerskinmilla_3986_2_31[0] = get_internal_image(4074);
            images_playerskinmilla_3986_2_31[1] = get_internal_image(4700);
            images_playerskinmilla_3986_2_31[2] = get_internal_image(4701);
            images_playerskinmilla_3986_2_31[3] = get_internal_image(4702);
            images_playerskinmilla_3986_2_31[4] = get_internal_image(4705);
            images_playerskinmilla_3986_2_31[5] = get_internal_image(4706);
            images_playerskinmilla_3986_2_31[6] = get_internal_image(4796);
            images_playerskinmilla_3986_2_31[7] = get_internal_image(4799);
            images_playerskinmilla_3986_2_31[8] = get_internal_image(6242);
            images_playerskinmilla_3986_2_31[9] = get_internal_image(5466);
            images_playerskinmilla_3986_5_0[0] = get_internal_image(15326);
            images_playerskinmilla_3986_5_0[1] = get_internal_image(15326);
            images_playerskinmilla_3986_5_0[2] = get_internal_image(15326);
            images_playerskinmilla_3986_5_0[3] = get_internal_image(15326);
            images_playerskinmilla_3986_5_0[4] = get_internal_image(15324);
            images_playerskinmilla_3986_5_16[0] = get_internal_image(15323);
            images_playerskinmilla_3986_5_16[1] = get_internal_image(15323);
            images_playerskinmilla_3986_5_16[2] = get_internal_image(15323);
            images_playerskinmilla_3986_5_16[3] = get_internal_image(15323);
            images_playerskinmilla_3986_5_16[4] = get_internal_image(15325);
            images_playerskinmilla_3986_7_0[0] = get_internal_image(9318);
            images_playerskinmilla_3986_7_0[1] = get_internal_image(11161);
            images_playerskinmilla_3986_7_0[2] = get_internal_image(9322);
            images_playerskinmilla_3986_7_0[3] = get_internal_image(11162);
            images_playerskinmilla_3986_7_0[4] = get_internal_image(10858);
            images_playerskinmilla_3986_7_0[5] = get_internal_image(11163);
            images_playerskinmilla_3986_7_0[6] = get_internal_image(9308);
            images_playerskinmilla_3986_7_0[7] = get_internal_image(11164);
            images_playerskinmilla_3986_7_16[0] = get_internal_image(10860);
            images_playerskinmilla_3986_7_16[1] = get_internal_image(8291);
            images_playerskinmilla_3986_7_16[2] = get_internal_image(10863);
            images_playerskinmilla_3986_7_16[3] = get_internal_image(11165);
            images_playerskinmilla_3986_7_16[4] = get_internal_image(10864);
            images_playerskinmilla_3986_7_16[5] = get_internal_image(11166);
            images_playerskinmilla_3986_7_16[6] = get_internal_image(10873);
            images_playerskinmilla_3986_7_16[7] = get_internal_image(11167);
            images_playerskinmilla_3986_8_0[0] = get_internal_image(3843);
            images_playerskinmilla_3986_8_0[1] = get_internal_image(11169);
            images_playerskinmilla_3986_8_0[2] = get_internal_image(3845);
            images_playerskinmilla_3986_8_0[3] = get_internal_image(11168);
            images_playerskinmilla_3986_8_0[4] = get_internal_image(3844);
            images_playerskinmilla_3986_8_0[5] = get_internal_image(11168);
            images_playerskinmilla_3986_8_0[6] = get_internal_image(4547);
            images_playerskinmilla_3986_8_0[7] = get_internal_image(11168);
            images_playerskinmilla_3986_8_0[8] = get_internal_image(11169);
            images_playerskinmilla_3986_8_16[0] = get_internal_image(6156);
            images_playerskinmilla_3986_8_16[1] = get_internal_image(11170);
            images_playerskinmilla_3986_8_16[2] = get_internal_image(6421);
            images_playerskinmilla_3986_8_16[3] = get_internal_image(11171);
            images_playerskinmilla_3986_8_16[4] = get_internal_image(6517);
            images_playerskinmilla_3986_8_16[5] = get_internal_image(11171);
            images_playerskinmilla_3986_8_16[6] = get_internal_image(6542);
            images_playerskinmilla_3986_8_16[7] = get_internal_image(11171);
            images_playerskinmilla_3986_8_16[8] = get_internal_image(11170);
            images_playerskinmilla_3986_9_0[0] = get_internal_image(1553);
            images_playerskinmilla_3986_9_0[1] = get_internal_image(1742);
            images_playerskinmilla_3986_9_0[2] = get_internal_image(3110);
            images_playerskinmilla_3986_9_0[3] = get_internal_image(7847);
            images_playerskinmilla_3986_9_0[4] = get_internal_image(3115);
            images_playerskinmilla_3986_9_0[5] = get_internal_image(3113);
            images_playerskinmilla_3986_9_0[6] = get_internal_image(3111);
            images_playerskinmilla_3986_9_0[7] = get_internal_image(8353);
            images_playerskinmilla_3986_10_0[0] = get_internal_image(11153);
            images_playerskinmilla_3986_10_0[1] = get_internal_image(438);
            images_playerskinmilla_3986_10_0[2] = get_internal_image(5042);
            images_playerskinmilla_3986_10_0[3] = get_internal_image(5046);
            images_playerskinmilla_3986_10_0[4] = get_internal_image(392);
            images_playerskinmilla_3986_10_0[5] = get_internal_image(5293);
            images_playerskinmilla_3986_10_0[6] = get_internal_image(8979);
            images_playerskinmilla_3986_10_16[0] = get_internal_image(11154);
            images_playerskinmilla_3986_10_16[1] = get_internal_image(11155);
            images_playerskinmilla_3986_10_16[2] = get_internal_image(11156);
            images_playerskinmilla_3986_10_16[3] = get_internal_image(11157);
            images_playerskinmilla_3986_10_16[4] = get_internal_image(11158);
            images_playerskinmilla_3986_10_16[5] = get_internal_image(11159);
            images_playerskinmilla_3986_10_16[6] = get_internal_image(11160);
            images_playerskinmilla_3986_11_0[0] = get_internal_image(8140);
            images_playerskinmilla_3986_11_0[1] = get_internal_image(8140);
            images_playerskinmilla_3986_11_0[2] = get_internal_image(5872);
            images_playerskinmilla_3986_11_16[0] = get_internal_image(6912);
            images_playerskinmilla_3986_11_16[1] = get_internal_image(6912);
            images_playerskinmilla_3986_11_16[2] = get_internal_image(8575);
            images_playerskinmilla_3986_12_0[0] = get_internal_image(11176);
            images_playerskinmilla_3986_12_0[1] = get_internal_image(11176);
            images_playerskinmilla_3986_12_0[2] = get_internal_image(6131);
            images_playerskinmilla_3986_12_0[3] = get_internal_image(4974);
            images_playerskinmilla_3986_12_0[4] = get_internal_image(6561);
            images_playerskinmilla_3986_12_0[5] = get_internal_image(6586);
            images_playerskinmilla_3986_12_0[6] = get_internal_image(6739);
            images_playerskinmilla_3986_12_0[7] = get_internal_image(6820);
            images_playerskinmilla_3986_12_16[0] = get_internal_image(6553);
            images_playerskinmilla_3986_12_16[1] = get_internal_image(6553);
            images_playerskinmilla_3986_12_16[2] = get_internal_image(6862);
            images_playerskinmilla_3986_12_16[3] = get_internal_image(6864);
            images_playerskinmilla_3986_12_16[4] = get_internal_image(6869);
            images_playerskinmilla_3986_12_16[5] = get_internal_image(6871);
            images_playerskinmilla_3986_12_16[6] = get_internal_image(6894);
            images_playerskinmilla_3986_12_16[7] = get_internal_image(6895);
            images_playerskinmilla_3986_14_0[0] = get_internal_image(7431);
            images_playerskinmilla_3986_14_0[1] = get_internal_image(7430);
            images_playerskinmilla_3986_14_0[2] = get_internal_image(6910);
            images_playerskinmilla_3986_14_0[3] = get_internal_image(6905);
            images_playerskinmilla_3986_14_0[4] = get_internal_image(6906);
            images_playerskinmilla_3986_14_0[5] = get_internal_image(7432);
            images_playerskinmilla_3986_14_0[6] = get_internal_image(7672);
            images_playerskinmilla_3986_14_16[0] = get_internal_image(7476);
            images_playerskinmilla_3986_14_16[1] = get_internal_image(7673);
            images_playerskinmilla_3986_14_16[2] = get_internal_image(7663);
            images_playerskinmilla_3986_14_16[3] = get_internal_image(7668);
            images_playerskinmilla_3986_14_16[4] = get_internal_image(7669);
            images_playerskinmilla_3986_14_16[5] = get_internal_image(7674);
            images_playerskinmilla_3986_14_16[6] = get_internal_image(7675);
            images_playerskinmilla_3986_15_0[0] = get_internal_image(11204);
            images_playerskinmilla_3986_15_0[1] = get_internal_image(11207);
            images_playerskinmilla_3986_15_0[2] = get_internal_image(11206);
            images_playerskinmilla_3986_15_0[3] = get_internal_image(11199);
            images_playerskinmilla_3986_15_0[4] = get_internal_image(11198);
            images_playerskinmilla_3986_15_0[5] = get_internal_image(11200);
            images_playerskinmilla_3986_15_0[6] = get_internal_image(11201);
            images_playerskinmilla_3986_15_0[7] = get_internal_image(11202);
            images_playerskinmilla_3986_15_0[8] = get_internal_image(11203);
            images_playerskinmilla_3986_15_16[0] = get_internal_image(11205);
            images_playerskinmilla_3986_15_16[1] = get_internal_image(11208);
            images_playerskinmilla_3986_15_16[2] = get_internal_image(11209);
            images_playerskinmilla_3986_15_16[3] = get_internal_image(11210);
            images_playerskinmilla_3986_15_16[4] = get_internal_image(11211);
            images_playerskinmilla_3986_15_16[5] = get_internal_image(11212);
            images_playerskinmilla_3986_15_16[6] = get_internal_image(11213);
            images_playerskinmilla_3986_15_16[7] = get_internal_image(11214);
            images_playerskinmilla_3986_15_16[8] = get_internal_image(11215);
            images_playerskinmilla_3986_16_0[0] = get_internal_image(1872);
            images_playerskinmilla_3986_16_0[1] = get_internal_image(1870);
            images_playerskinmilla_3986_16_15[0] = get_internal_image(6539);
            images_playerskinmilla_3986_16_15[1] = get_internal_image(6557);
            images_playerskinmilla_3986_16_15[2] = get_internal_image(6590);
            images_playerskinmilla_3986_16_15[3] = get_internal_image(6648);
            images_playerskinmilla_3986_16_15[4] = get_internal_image(6733);
            images_playerskinmilla_3986_16_15[5] = get_internal_image(6738);
            images_playerskinmilla_3986_16_15[6] = get_internal_image(6951);
            images_playerskinmilla_3986_16_15[7] = get_internal_image(7474);
            images_playerskinmilla_3986_16_15[8] = get_internal_image(7475);
            images_playerskinmilla_3986_16_15[9] = get_internal_image(7477);
            images_playerskinmilla_3986_16_16[0] = get_internal_image(910);
            images_playerskinmilla_3986_16_16[1] = get_internal_image(3296);
            images_playerskinmilla_3986_16_31[0] = get_internal_image(4074);
            images_playerskinmilla_3986_16_31[1] = get_internal_image(4700);
            images_playerskinmilla_3986_16_31[2] = get_internal_image(4701);
            images_playerskinmilla_3986_16_31[3] = get_internal_image(4702);
            images_playerskinmilla_3986_16_31[4] = get_internal_image(4705);
            images_playerskinmilla_3986_16_31[5] = get_internal_image(4706);
            images_playerskinmilla_3986_16_31[6] = get_internal_image(4796);
            images_playerskinmilla_3986_16_31[7] = get_internal_image(4799);
            images_playerskinmilla_3986_16_31[8] = get_internal_image(6242);
            images_playerskinmilla_3986_16_31[9] = get_internal_image(5466);
            images_playerskinmilla_3986_17_0[0] = get_internal_image(11251);
            images_playerskinmilla_3986_17_0[1] = get_internal_image(11090);
            images_playerskinmilla_3986_17_0[2] = get_internal_image(11235);
            images_playerskinmilla_3986_17_0[3] = get_internal_image(11090);
            images_playerskinmilla_3986_17_8[0] = get_internal_image(6725);
            images_playerskinmilla_3986_17_8[1] = get_internal_image(6720);
            images_playerskinmilla_3986_17_8[2] = get_internal_image(6681);
            images_playerskinmilla_3986_17_16[0] = get_internal_image(11251);
            images_playerskinmilla_3986_17_16[1] = get_internal_image(11090);
            images_playerskinmilla_3986_17_16[2] = get_internal_image(11235);
            images_playerskinmilla_3986_17_16[3] = get_internal_image(11090);
            images_playerskinmilla_3986_18_0[0] = get_internal_image(8361);
            images_playerskinmilla_3986_18_0[1] = get_internal_image(8355);
            images_playerskinmilla_3986_18_0[2] = get_internal_image(8363);
            images_playerskinmilla_3986_18_0[3] = get_internal_image(8362);
            images_playerskinmilla_3986_18_0[4] = get_internal_image(8579);
            images_playerskinmilla_3986_18_16[0] = get_internal_image(8364);
            images_playerskinmilla_3986_18_16[1] = get_internal_image(8591);
            images_playerskinmilla_3986_18_16[2] = get_internal_image(8592);
            images_playerskinmilla_3986_18_16[3] = get_internal_image(8593);
            images_playerskinmilla_3986_18_16[4] = get_internal_image(8594);
            images_playerskinmilla_3986_20_0[0] = get_internal_image(112);
            images_playerskinmilla_3986_20_0[1] = get_internal_image(112);
            images_playerskinmilla_3986_20_0[2] = get_internal_image(936);
            images_playerskinmilla_3986_20_0[3] = get_internal_image(2514);
            images_playerskinmilla_3986_20_0[4] = get_internal_image(5049);
            images_playerskinmilla_3986_20_16[0] = get_internal_image(329);
            images_playerskinmilla_3986_20_16[1] = get_internal_image(329);
            images_playerskinmilla_3986_20_16[2] = get_internal_image(3908);
            images_playerskinmilla_3986_20_16[3] = get_internal_image(3910);
            images_playerskinmilla_3986_20_16[4] = get_internal_image(4027);
            images_playerskinmilla_3986_23_0[0] = get_internal_image(4682);
            images_playerskinmilla_3986_23_0[1] = get_internal_image(8951);
            images_playerskinmilla_3986_23_0[2] = get_internal_image(4685);
            images_playerskinmilla_3986_23_0[3] = get_internal_image(6819);
            images_playerskinmilla_3986_23_0[4] = get_internal_image(4683);
            images_playerskinmilla_3986_23_0[5] = get_internal_image(8952);
            images_playerskinmilla_3986_23_15[0] = get_internal_image(6539);
            images_playerskinmilla_3986_23_15[1] = get_internal_image(6557);
            images_playerskinmilla_3986_23_15[2] = get_internal_image(6590);
            images_playerskinmilla_3986_23_15[3] = get_internal_image(6648);
            images_playerskinmilla_3986_23_15[4] = get_internal_image(6733);
            images_playerskinmilla_3986_23_15[5] = get_internal_image(6738);
            images_playerskinmilla_3986_23_15[6] = get_internal_image(6951);
            images_playerskinmilla_3986_23_15[7] = get_internal_image(7474);
            images_playerskinmilla_3986_23_15[8] = get_internal_image(7475);
            images_playerskinmilla_3986_23_15[9] = get_internal_image(7477);
            images_playerskinmilla_3986_23_16[0] = get_internal_image(8953);
            images_playerskinmilla_3986_23_16[1] = get_internal_image(8954);
            images_playerskinmilla_3986_23_16[2] = get_internal_image(8955);
            images_playerskinmilla_3986_23_16[3] = get_internal_image(8956);
            images_playerskinmilla_3986_23_16[4] = get_internal_image(8957);
            images_playerskinmilla_3986_23_16[5] = get_internal_image(9271);
            images_playerskinmilla_3986_23_31[0] = get_internal_image(4074);
            images_playerskinmilla_3986_23_31[1] = get_internal_image(4700);
            images_playerskinmilla_3986_23_31[2] = get_internal_image(4701);
            images_playerskinmilla_3986_23_31[3] = get_internal_image(4702);
            images_playerskinmilla_3986_23_31[4] = get_internal_image(4705);
            images_playerskinmilla_3986_23_31[5] = get_internal_image(4706);
            images_playerskinmilla_3986_23_31[6] = get_internal_image(4796);
            images_playerskinmilla_3986_23_31[7] = get_internal_image(4799);
            images_playerskinmilla_3986_23_31[8] = get_internal_image(6242);
            images_playerskinmilla_3986_23_31[9] = get_internal_image(5466);
            images_playerskinmilla_3986_24_0[0] = get_internal_image(11216);
            images_playerskinmilla_3986_24_0[1] = get_internal_image(11216);
            images_playerskinmilla_3986_24_0[2] = get_internal_image(11216);
            images_playerskinmilla_3986_24_0[3] = get_internal_image(11216);
            images_playerskinmilla_3986_24_0[4] = get_internal_image(11216);
            images_playerskinmilla_3986_24_0[5] = get_internal_image(6650);
            images_playerskinmilla_3986_24_0[6] = get_internal_image(6395);
            images_playerskinmilla_3986_24_0[7] = get_internal_image(6381);
            images_playerskinmilla_3986_24_0[8] = get_internal_image(6334);
            images_playerskinmilla_3986_24_0[9] = get_internal_image(6326);
            images_playerskinmilla_3986_24_0[10] = get_internal_image(1311);
            images_playerskinmilla_3986_24_0[11] = get_internal_image(918);
            images_playerskinmilla_3986_24_0[12] = get_internal_image(1697);
            images_playerskinmilla_3986_24_8[0] = get_internal_image(6328);
            images_playerskinmilla_3986_24_8[1] = get_internal_image(6394);
            images_playerskinmilla_3986_24_8[2] = get_internal_image(6339);
            images_playerskinmilla_3986_24_8[3] = get_internal_image(6337);
            images_playerskinmilla_3986_24_8[4] = get_internal_image(6331);
            images_playerskinmilla_3986_24_8[5] = get_internal_image(6333);
            images_playerskinmilla_3986_24_8[6] = get_internal_image(6336);
            images_playerskinmilla_3986_24_15[0] = get_internal_image(6651);
            images_playerskinmilla_3986_24_15[1] = get_internal_image(6651);
            images_playerskinmilla_3986_24_15[2] = get_internal_image(6651);
            images_playerskinmilla_3986_24_15[3] = get_internal_image(6651);
            images_playerskinmilla_3986_24_15[4] = get_internal_image(6651);
            images_playerskinmilla_3986_24_15[5] = get_internal_image(6652);
            images_playerskinmilla_3986_24_15[6] = get_internal_image(7109);
            images_playerskinmilla_3986_24_15[7] = get_internal_image(7115);
            images_playerskinmilla_3986_24_15[8] = get_internal_image(7118);
            images_playerskinmilla_3986_24_15[9] = get_internal_image(7119);
            images_playerskinmilla_3986_24_15[10] = get_internal_image(7120);
            images_playerskinmilla_3986_24_15[11] = get_internal_image(7121);
            images_playerskinmilla_3986_24_15[12] = get_internal_image(7123);
            images_playerskinmilla_3986_24_16[0] = get_internal_image(11217);
            images_playerskinmilla_3986_24_16[1] = get_internal_image(11217);
            images_playerskinmilla_3986_24_16[2] = get_internal_image(11217);
            images_playerskinmilla_3986_24_16[3] = get_internal_image(11217);
            images_playerskinmilla_3986_24_16[4] = get_internal_image(11217);
            images_playerskinmilla_3986_24_16[5] = get_internal_image(6642);
            images_playerskinmilla_3986_24_16[6] = get_internal_image(7131);
            images_playerskinmilla_3986_24_16[7] = get_internal_image(7133);
            images_playerskinmilla_3986_24_16[8] = get_internal_image(7134);
            images_playerskinmilla_3986_24_16[9] = get_internal_image(7426);
            images_playerskinmilla_3986_24_16[10] = get_internal_image(7427);
            images_playerskinmilla_3986_24_16[11] = get_internal_image(7428);
            images_playerskinmilla_3986_24_16[12] = get_internal_image(7429);
            images_playerskinmilla_3986_24_31[0] = get_internal_image(6332);
            images_playerskinmilla_3986_24_31[1] = get_internal_image(6332);
            images_playerskinmilla_3986_24_31[2] = get_internal_image(6332);
            images_playerskinmilla_3986_24_31[3] = get_internal_image(6332);
            images_playerskinmilla_3986_24_31[4] = get_internal_image(6332);
            images_playerskinmilla_3986_24_31[5] = get_internal_image(6378);
            images_playerskinmilla_3986_24_31[6] = get_internal_image(7105);
            images_playerskinmilla_3986_24_31[7] = get_internal_image(6299);
            images_playerskinmilla_3986_24_31[8] = get_internal_image(7039);
            images_playerskinmilla_3986_24_31[9] = get_internal_image(7079);
            images_playerskinmilla_3986_24_31[10] = get_internal_image(7084);
            images_playerskinmilla_3986_24_31[11] = get_internal_image(7086);
            images_playerskinmilla_3986_24_31[12] = get_internal_image(7090);
            images_playerskinmilla_3986_25_0[0] = get_internal_image(5218);
            images_playerskinmilla_3986_25_0[1] = get_internal_image(2978);
            images_playerskinmilla_3986_25_0[2] = get_internal_image(11186);
            images_playerskinmilla_3986_25_0[3] = get_internal_image(11381);
            images_playerskinmilla_3986_25_0[4] = get_internal_image(5832);
            images_playerskinmilla_3986_25_0[5] = get_internal_image(5858);
            images_playerskinmilla_3986_25_0[6] = get_internal_image(8937);
            images_playerskinmilla_3986_25_16[0] = get_internal_image(2112);
            images_playerskinmilla_3986_25_16[1] = get_internal_image(6572);
            images_playerskinmilla_3986_25_16[2] = get_internal_image(6475);
            images_playerskinmilla_3986_25_16[3] = get_internal_image(11376);
            images_playerskinmilla_3986_25_16[4] = get_internal_image(5859);
            images_playerskinmilla_3986_25_16[5] = get_internal_image(9025);
            images_playerskinmilla_3986_25_16[6] = get_internal_image(9119);
            images_playerskinmilla_3986_26_0[0] = get_internal_image(11280);
            images_playerskinmilla_3986_26_0[1] = get_internal_image(11221);
            images_playerskinmilla_3986_26_0[2] = get_internal_image(11286);
            images_playerskinmilla_3986_26_0[3] = get_internal_image(11290);
            images_playerskinmilla_3986_26_0[4] = get_internal_image(11291);
            images_playerskinmilla_3986_26_0[5] = get_internal_image(11292);
            images_playerskinmilla_3986_26_8[0] = get_internal_image(11283);
            images_playerskinmilla_3986_26_8[1] = get_internal_image(11281);
            images_playerskinmilla_3986_26_8[2] = get_internal_image(11284);
            images_playerskinmilla_3986_26_16[0] = get_internal_image(11257);
            images_playerskinmilla_3986_26_16[1] = get_internal_image(11261);
            images_playerskinmilla_3986_26_16[2] = get_internal_image(11262);
            images_playerskinmilla_3986_26_16[3] = get_internal_image(11279);
            images_playerskinmilla_3986_26_16[4] = get_internal_image(11282);
            images_playerskinmilla_3986_26_16[5] = get_internal_image(11285);
            images_playerskinmilla_3986_27_0[0] = get_internal_image(11169);
            images_playerskinmilla_3986_27_0[1] = get_internal_image(11169);
            images_playerskinmilla_3986_27_0[2] = get_internal_image(11169);
            images_playerskinmilla_3986_27_0[3] = get_internal_image(11168);
            images_playerskinmilla_3986_27_0[4] = get_internal_image(11168);
            images_playerskinmilla_3986_27_0[5] = get_internal_image(11168);
            images_playerskinmilla_3986_27_0[6] = get_internal_image(11168);
            images_playerskinmilla_3986_27_0[7] = get_internal_image(11168);
            images_playerskinmilla_3986_27_0[8] = get_internal_image(11169);
            images_playerskinmilla_3986_27_16[0] = get_internal_image(11170);
            images_playerskinmilla_3986_27_16[1] = get_internal_image(11170);
            images_playerskinmilla_3986_27_16[2] = get_internal_image(11170);
            images_playerskinmilla_3986_27_16[3] = get_internal_image(11171);
            images_playerskinmilla_3986_27_16[4] = get_internal_image(11171);
            images_playerskinmilla_3986_27_16[5] = get_internal_image(11171);
            images_playerskinmilla_3986_27_16[6] = get_internal_image(11171);
            images_playerskinmilla_3986_27_16[7] = get_internal_image(11171);
            images_playerskinmilla_3986_27_16[8] = get_internal_image(11170);
            images_playerskinmilla_3986_31_0[0] = get_internal_image(14177);
            images_playerskinmilla_3986_31_0[1] = get_internal_image(14175);
            images_playerskinmilla_3986_31_0[2] = get_internal_image(14178);
            images_playerskinmilla_3986_31_0[3] = get_internal_image(3973);
            images_playerskinmilla_3986_31_16[0] = get_internal_image(14176);
            images_playerskinmilla_3986_31_16[1] = get_internal_image(14179);
            images_playerskinmilla_3986_31_16[2] = get_internal_image(14180);
            images_playerskinmilla_3986_31_16[3] = get_internal_image(14181);
            images_playerskinmilla_3986_32_0[0] = get_internal_image(3568);
            images_playerskinmilla_3986_32_0[1] = get_internal_image(3618);
            images_playerskinmilla_3986_32_0[2] = get_internal_image(3236);
            images_playerskinmilla_3986_32_0[3] = get_internal_image(3616);
            images_playerskinmilla_3986_32_16[0] = get_internal_image(2929);
            images_playerskinmilla_3986_32_16[1] = get_internal_image(3625);
            images_playerskinmilla_3986_32_16[2] = get_internal_image(3682);
            images_playerskinmilla_3986_32_16[3] = get_internal_image(3686);
            images_playerskinmilla_3986_33_0[0] = get_internal_image(6719);
            images_playerskinmilla_3986_33_0[1] = get_internal_image(8450);
            images_playerskinmilla_3986_33_0[2] = get_internal_image(8451);
            images_playerskinmilla_3986_33_0[3] = get_internal_image(8440);
            images_playerskinmilla_3986_33_0[4] = get_internal_image(8447);
            images_playerskinmilla_3986_33_0[5] = get_internal_image(8448);
            images_playerskinmilla_3986_33_0[6] = get_internal_image(8453);
            images_playerskinmilla_3986_33_0[7] = get_internal_image(6723);
            images_playerskinmilla_3986_33_0[8] = get_internal_image(6896);
            images_playerskinmilla_3986_35_0[0] = get_internal_image(1553);
            images_playerskinmilla_3986_35_0[1] = get_internal_image(8353);
            images_playerskinmilla_3986_35_0[2] = get_internal_image(3111);
            images_playerskinmilla_3986_35_0[3] = get_internal_image(3113);
            images_playerskinmilla_3986_35_0[4] = get_internal_image(3115);
            images_playerskinmilla_3986_35_0[5] = get_internal_image(7847);
            images_playerskinmilla_3986_35_0[6] = get_internal_image(3110);
            images_playerskinmilla_3986_35_0[7] = get_internal_image(1742);
            images_playerskinmilla_3986_36_0[0] = get_internal_image(8350);
            images_playerskinmilla_3986_37_0[0] = get_internal_image(10799);
            images_playerskinmilla_3986_37_0[1] = get_internal_image(8906);
            images_playerskinmilla_3986_37_0[2] = get_internal_image(8909);
            images_playerskinmilla_3986_37_0[3] = get_internal_image(841);
            images_playerskinmilla_3986_37_0[4] = get_internal_image(857);
            images_playerskinmilla_3986_37_0[5] = get_internal_image(5082);
            images_playerskinmilla_3986_37_0[6] = get_internal_image(4106);
            images_playerskinmilla_3986_37_0[7] = get_internal_image(8902);
            images_playerskinmilla_3986_37_0[8] = get_internal_image(8908);
            images_playerskinmilla_3986_37_0[9] = get_internal_image(8907);
            images_playerskinmilla_3986_37_0[10] = get_internal_image(8904);
            images_playerskinmilla_3986_37_0[11] = get_internal_image(8903);
            images_playerskinmilla_3986_37_0[12] = get_internal_image(8923);
            images_playerskinmilla_3986_37_1[0] = get_internal_image(10799);
            images_playerskinmilla_3986_37_1[1] = get_internal_image(1222);
            images_playerskinmilla_3986_37_1[2] = get_internal_image(1447);
            images_playerskinmilla_3986_37_1[3] = get_internal_image(1283);
            images_playerskinmilla_3986_37_1[4] = get_internal_image(2942);
            images_playerskinmilla_3986_37_1[5] = get_internal_image(2943);
            images_playerskinmilla_3986_37_16[0] = get_internal_image(10796);
            images_playerskinmilla_3986_37_16[1] = get_internal_image(8899);
            images_playerskinmilla_3986_37_16[2] = get_internal_image(8926);
            images_playerskinmilla_3986_37_16[3] = get_internal_image(8928);
            images_playerskinmilla_3986_37_16[4] = get_internal_image(8929);
            images_playerskinmilla_3986_37_16[5] = get_internal_image(8930);
            images_playerskinmilla_3986_37_16[6] = get_internal_image(8931);
            images_playerskinmilla_3986_37_16[7] = get_internal_image(8932);
            images_playerskinmilla_3986_37_16[8] = get_internal_image(8933);
            images_playerskinmilla_3986_37_16[9] = get_internal_image(8934);
            images_playerskinmilla_3986_37_16[10] = get_internal_image(8935);
            images_playerskinmilla_3986_37_16[11] = get_internal_image(8967);
            images_playerskinmilla_3986_37_16[12] = get_internal_image(8969);
            images_playerskinmilla_3986_37_17[0] = get_internal_image(10796);
            images_playerskinmilla_3986_37_17[1] = get_internal_image(2944);
            images_playerskinmilla_3986_37_17[2] = get_internal_image(2945);
            images_playerskinmilla_3986_37_17[3] = get_internal_image(5115);
            images_playerskinmilla_3986_37_17[4] = get_internal_image(5957);
            images_playerskinmilla_3986_37_17[5] = get_internal_image(6030);
            images_playerskinmilla_3986_38_0[0] = get_internal_image(8884);
            images_playerskinmilla_3986_38_0[1] = get_internal_image(7171);
            images_playerskinmilla_3986_38_0[2] = get_internal_image(7174);
            images_playerskinmilla_3986_38_0[3] = get_internal_image(8887);
            images_playerskinmilla_3986_38_16[0] = get_internal_image(8898);
            images_playerskinmilla_3986_38_16[1] = get_internal_image(8900);
            images_playerskinmilla_3986_38_16[2] = get_internal_image(8910);
            images_playerskinmilla_3986_38_16[3] = get_internal_image(8922);
            images_playerskinmilla_3986_39_0[0] = get_internal_image(4679);
            images_playerskinmilla_3986_39_0[1] = get_internal_image(4679);
            images_playerskinmilla_3986_39_0[2] = get_internal_image(369);
            images_playerskinmilla_3986_39_0[3] = get_internal_image(5037);
            images_playerskinmilla_3986_39_0[4] = get_internal_image(5216);
            images_playerskinmilla_3986_39_0[5] = get_internal_image(6251);
            images_playerskinmilla_3986_39_0[6] = get_internal_image(6302);
            images_playerskinmilla_3986_39_0[7] = get_internal_image(8952);
            images_playerskinmilla_3986_39_16[0] = get_internal_image(4681);
            images_playerskinmilla_3986_39_16[1] = get_internal_image(4681);
            images_playerskinmilla_3986_39_16[2] = get_internal_image(6308);
            images_playerskinmilla_3986_39_16[3] = get_internal_image(6325);
            images_playerskinmilla_3986_39_16[4] = get_internal_image(6329);
            images_playerskinmilla_3986_39_16[5] = get_internal_image(6433);
            images_playerskinmilla_3986_39_16[6] = get_internal_image(6702);
            images_playerskinmilla_3986_39_16[7] = get_internal_image(9271);
            images_playerskinmilla_3986_40_0[0] = get_internal_image(11000);
            images_playerskinmilla_3986_40_0[1] = get_internal_image(10767);
            images_playerskinmilla_3986_40_0[2] = get_internal_image(10924);
            images_playerskinmilla_3986_40_0[3] = get_internal_image(10976);
            images_playerskinmilla_3986_40_0[4] = get_internal_image(10977);
            images_playerskinmilla_3986_40_0[5] = get_internal_image(10978);
            images_playerskinmilla_3986_40_0[6] = get_internal_image(6134);
            images_playerskinmilla_3986_40_0[7] = get_internal_image(10973);
            images_playerskinmilla_3986_40_0[8] = get_internal_image(10975);
            images_playerskinmilla_3986_40_0[9] = get_internal_image(10893);
            images_playerskinmilla_3986_40_0[10] = get_internal_image(8921);
            images_playerskinmilla_3986_40_0[11] = get_internal_image(10915);
            images_playerskinmilla_3986_40_0[12] = get_internal_image(1508);
            images_playerskinmilla_3986_40_0[13] = get_internal_image(4384);
            images_playerskinmilla_3986_40_0[14] = get_internal_image(410);
            images_playerskinmilla_3986_40_0[15] = get_internal_image(10892);
            images_playerskinmilla_3986_40_0[16] = get_internal_image(9394);
            images_playerskinmilla_3986_40_0[17] = get_internal_image(9401);
            images_playerskinmilla_3986_40_0[18] = get_internal_image(8945);
            images_playerskinmilla_3986_40_0[19] = get_internal_image(8947);
            images_playerskinmilla_3986_40_0[20] = get_internal_image(8946);
            images_playerskinmilla_3986_40_0[21] = get_internal_image(12070);
            images_playerskinmilla_3986_40_0[22] = get_internal_image(12071);
            images_playerskinmilla_3986_40_0[23] = get_internal_image(12069);
            images_playerskinmilla_3986_40_0[24] = get_internal_image(3120);
            images_playerskinmilla_3986_40_0[25] = get_internal_image(7712);
            images_playerskinmilla_3986_40_0[26] = get_internal_image(3120);
            images_playerskinmilla_3986_40_0[27] = get_internal_image(6774);
            images_playerskinmilla_3986_40_0[28] = get_internal_image(6396);
            images_playerskinmilla_3986_40_0[29] = get_internal_image(11077);
            images_playerskinmilla_3986_40_0[30] = get_internal_image(12075);
            images_playerskinmilla_3986_40_0[31] = get_internal_image(12040);
            images_playerskinmilla_3986_40_0[32] = get_internal_image(12076);
            images_playerskinmilla_3986_40_0[33] = get_internal_image(7286);
            images_playerskinmilla_3986_40_0[34] = get_internal_image(7293);
            images_playerskinmilla_3986_40_0[35] = get_internal_image(2574);
            images_playerskinmilla_3986_40_0[36] = get_internal_image(13336);
            images_playerskinmilla_3986_40_0[37] = get_internal_image(13335);
            images_playerskinmilla_3986_40_0[38] = get_internal_image(13333);
            images_playerskinmilla_3986_40_0[39] = get_internal_image(13325);
            images_playerskinmilla_3986_40_0[40] = get_internal_image(13326);
            images_playerskinmilla_3986_40_0[41] = get_internal_image(13327);
            images_playerskinmilla_3986_40_0[42] = get_internal_image(14573);
            images_playerskinmilla_3986_40_0[43] = get_internal_image(14572);
            images_playerskinmilla_3986_40_0[44] = get_internal_image(14574);
            images_playerskinmilla_3986_40_0[45] = get_internal_image(15357);
            images_playerskinmilla_3986_40_0[46] = get_internal_image(15360);
            images_playerskinmilla_3986_40_0[47] = get_internal_image(15359);
            images_playerskinmilla_3986_40_0[48] = get_internal_image(9338);
            images_playerskinmilla_3986_40_0[49] = get_internal_image(9303);
            images_playerskinmilla_3986_40_0[50] = get_internal_image(9340);
            images_playerskinmilla_3986_40_0[51] = get_internal_image(3);
            images_playerskinmilla_3986_40_0[52] = get_internal_image(2979);
            images_playerskinmilla_3986_40_0[53] = get_internal_image(323);
            images_playerskinmilla_3986_40_0[54] = get_internal_image(3204);
            images_playerskinmilla_3986_40_0[55] = get_internal_image(3380);
            images_playerskinmilla_3986_40_0[56] = get_internal_image(3203);
            images_playerskinmilla_3986_40_0[57] = get_internal_image(8823);
            images_playerskinmilla_3986_40_0[58] = get_internal_image(8825);
            images_playerskinmilla_3986_40_0[59] = get_internal_image(10718);
            images_playerskinmilla_3986_40_0[60] = get_internal_image(8822);
            images_playerskinmilla_3986_40_0[61] = get_internal_image(10743);
            images_playerskinmilla_3986_40_0[62] = get_internal_image(11753);
            images_playerskinmilla_3986_40_0[63] = get_internal_image(3045);
            images_playerskinmilla_3986_40_0[64] = get_internal_image(3052);
            images_playerskinmilla_3986_40_0[65] = get_internal_image(3054);
            images_playerskinmilla_3986_40_1[0] = get_internal_image(3);
            images_playerskinmilla_3986_40_1[1] = get_internal_image(258);
            images_playerskinmilla_3986_40_1[2] = get_internal_image(3);
            images_playerskinmilla_3986_40_1[3] = get_internal_image(261);
            images_playerskinmilla_3986_40_4[0] = get_internal_image(7491);
            images_playerskinmilla_3986_40_4[1] = get_internal_image(7493);
            images_playerskinmilla_3986_40_4[2] = get_internal_image(7492);
            images_playerskinmilla_3986_40_7[0] = get_internal_image(1110);
            images_playerskinmilla_3986_40_8[0] = get_internal_image(3435);
            images_playerskinmilla_3986_40_8[1] = get_internal_image(3433);
            images_playerskinmilla_3986_40_8[2] = get_internal_image(3879);
            images_playerskinmilla_3986_40_8[3] = get_internal_image(3261);
            images_playerskinmilla_3986_40_8[4] = get_internal_image(3893);
            images_playerskinmilla_3986_40_8[5] = get_internal_image(2894);
            images_playerskinmilla_3986_40_8[6] = get_internal_image(3847);
            images_playerskinmilla_3986_40_8[7] = get_internal_image(3436);
            images_playerskinmilla_3986_40_8[8] = get_internal_image(3896);
            images_playerskinmilla_3986_40_8[9] = get_internal_image(2875);
            images_playerskinmilla_3986_40_8[10] = get_internal_image(3933);
            images_playerskinmilla_3986_40_8[11] = get_internal_image(3264);
            images_playerskinmilla_3986_40_9[0] = get_internal_image(4131);
            images_playerskinmilla_3986_40_10[0] = get_internal_image(11382);
            images_playerskinmilla_3986_40_12[0] = get_internal_image(8575);
            images_playerskinmilla_3986_40_14[0] = get_internal_image(3381);
            images_playerskinmilla_3986_40_14[1] = get_internal_image(3392);
            images_playerskinmilla_3986_40_14[2] = get_internal_image(2169);
            images_playerskinmilla_3986_40_14[3] = get_internal_image(3378);
            images_playerskinmilla_3986_40_14[4] = get_internal_image(3348);
            images_playerskinmilla_3986_40_14[5] = get_internal_image(3379);
            images_playerskinmilla_3986_40_16[0] = get_internal_image(4504);
            images_playerskinmilla_3986_40_16[1] = get_internal_image(6775);
            images_playerskinmilla_3986_40_16[2] = get_internal_image(6778);
            images_playerskinmilla_3986_40_16[3] = get_internal_image(6779);
            images_playerskinmilla_3986_40_16[4] = get_internal_image(6780);
            images_playerskinmilla_3986_40_16[5] = get_internal_image(6782);
            images_playerskinmilla_3986_40_16[6] = get_internal_image(6783);
            images_playerskinmilla_3986_40_16[7] = get_internal_image(6814);
            images_playerskinmilla_3986_40_16[8] = get_internal_image(6815);
            images_playerskinmilla_3986_40_16[9] = get_internal_image(10894);
            images_playerskinmilla_3986_40_16[10] = get_internal_image(10916);
            images_playerskinmilla_3986_40_16[11] = get_internal_image(10917);
            images_playerskinmilla_3986_40_16[12] = get_internal_image(5694);
            images_playerskinmilla_3986_40_16[13] = get_internal_image(5695);
            images_playerskinmilla_3986_40_16[14] = get_internal_image(7142);
            images_playerskinmilla_3986_40_16[15] = get_internal_image(10925);
            images_playerskinmilla_3986_40_16[16] = get_internal_image(10971);
            images_playerskinmilla_3986_40_16[17] = get_internal_image(10985);
            images_playerskinmilla_3986_40_16[18] = get_internal_image(10918);
            images_playerskinmilla_3986_40_16[19] = get_internal_image(10919);
            images_playerskinmilla_3986_40_16[20] = get_internal_image(10959);
            images_playerskinmilla_3986_40_16[21] = get_internal_image(7017);
            images_playerskinmilla_3986_40_16[22] = get_internal_image(7018);
            images_playerskinmilla_3986_40_16[23] = get_internal_image(7020);
            images_playerskinmilla_3986_40_16[24] = get_internal_image(7340);
            images_playerskinmilla_3986_40_16[25] = get_internal_image(8034);
            images_playerskinmilla_3986_40_16[26] = get_internal_image(7340);
            images_playerskinmilla_3986_40_16[27] = get_internal_image(7417);
            images_playerskinmilla_3986_40_16[28] = get_internal_image(11076);
            images_playerskinmilla_3986_40_16[29] = get_internal_image(11078);
            images_playerskinmilla_3986_40_16[30] = get_internal_image(12074);
            images_playerskinmilla_3986_40_16[31] = get_internal_image(10993);
            images_playerskinmilla_3986_40_16[32] = get_internal_image(12077);
            images_playerskinmilla_3986_40_16[33] = get_internal_image(8099);
            images_playerskinmilla_3986_40_16[34] = get_internal_image(8100);
            images_playerskinmilla_3986_40_16[35] = get_internal_image(10745);
            images_playerskinmilla_3986_40_16[36] = get_internal_image(13337);
            images_playerskinmilla_3986_40_16[37] = get_internal_image(13338);
            images_playerskinmilla_3986_40_16[38] = get_internal_image(13339);
            images_playerskinmilla_3986_40_16[39] = get_internal_image(13324);
            images_playerskinmilla_3986_40_16[40] = get_internal_image(13328);
            images_playerskinmilla_3986_40_16[41] = get_internal_image(13329);
            images_playerskinmilla_3986_40_16[42] = get_internal_image(14571);
            images_playerskinmilla_3986_40_16[43] = get_internal_image(14575);
            images_playerskinmilla_3986_40_16[44] = get_internal_image(14576);
            images_playerskinmilla_3986_40_16[45] = get_internal_image(15358);
            images_playerskinmilla_3986_40_16[46] = get_internal_image(15361);
            images_playerskinmilla_3986_40_16[47] = get_internal_image(15362);
            images_playerskinmilla_3986_40_16[48] = get_internal_image(9339);
            images_playerskinmilla_3986_40_16[49] = get_internal_image(9341);
            images_playerskinmilla_3986_40_16[50] = get_internal_image(9342);
            images_playerskinmilla_3986_40_16[51] = get_internal_image(1146);
            images_playerskinmilla_3986_40_16[52] = get_internal_image(2982);
            images_playerskinmilla_3986_40_16[53] = get_internal_image(3202);
            images_playerskinmilla_3986_40_16[54] = get_internal_image(3889);
            images_playerskinmilla_3986_40_16[55] = get_internal_image(3898);
            images_playerskinmilla_3986_40_16[56] = get_internal_image(3901);
            images_playerskinmilla_3986_40_16[57] = get_internal_image(12095);
            images_playerskinmilla_3986_40_16[58] = get_internal_image(12096);
            images_playerskinmilla_3986_40_16[59] = get_internal_image(16037);
            images_playerskinmilla_3986_40_16[60] = get_internal_image(16038);
            images_playerskinmilla_3986_40_16[61] = get_internal_image(16039);
            images_playerskinmilla_3986_40_16[62] = get_internal_image(16040);
            images_playerskinmilla_3986_40_16[63] = get_internal_image(3412);
            images_playerskinmilla_3986_40_16[64] = get_internal_image(3705);
            images_playerskinmilla_3986_40_16[65] = get_internal_image(3723);
            images_playerskinmilla_3986_40_20[0] = get_internal_image(7490);
            images_playerskinmilla_3986_40_20[1] = get_internal_image(7494);
            images_playerskinmilla_3986_40_20[2] = get_internal_image(7495);
            images_playerskinmilla_3986_40_24[0] = get_internal_image(11383);
            images_playerskinmilla_3986_40_26[0] = get_internal_image(11380);
            images_playerskinmilla_3986_40_28[0] = get_internal_image(5872);
            images_playerskinmilla_3986_40_30[0] = get_internal_image(3356);
            images_playerskinmilla_3986_40_30[1] = get_internal_image(3411);
            images_playerskinmilla_3986_40_30[2] = get_internal_image(3467);
            images_playerskinmilla_3986_40_30[3] = get_internal_image(3473);
            images_playerskinmilla_3986_40_30[4] = get_internal_image(3538);
            images_playerskinmilla_3986_40_30[5] = get_internal_image(3539);
            images_playerskinmilla_3986_41_0[0] = get_internal_image(11000);
            images_playerskinmilla_3986_41_1[0] = get_internal_image(3);
            images_playerskinmilla_3986_41_1[1] = get_internal_image(258);
            images_playerskinmilla_3986_41_1[2] = get_internal_image(3);
            images_playerskinmilla_3986_41_1[3] = get_internal_image(261);
            images_playerskinmilla_3986_41_2[0] = get_internal_image(12063);
            images_playerskinmilla_3986_41_2[1] = get_internal_image(15355);
            images_playerskinmilla_3986_41_2[2] = get_internal_image(15356);
            images_playerskinmilla_3986_41_3[0] = get_internal_image(15363);
            images_playerskinmilla_3986_41_3[1] = get_internal_image(15367);
            images_playerskinmilla_3986_41_3[2] = get_internal_image(15366);
            images_playerskinmilla_3986_41_3[3] = get_internal_image(15365);
            images_playerskinmilla_3986_41_3[4] = get_internal_image(15364);
            images_playerskinmilla_3986_41_4[0] = get_internal_image(3045);
            images_playerskinmilla_3986_41_4[1] = get_internal_image(7201);
            images_playerskinmilla_3986_41_4[2] = get_internal_image(7190);
            images_playerskinmilla_3986_41_4[3] = get_internal_image(7268);
            images_playerskinmilla_3986_41_4[4] = get_internal_image(7269);
            images_playerskinmilla_3986_41_4[5] = get_internal_image(7514);
            images_playerskinmilla_3986_41_4[6] = get_internal_image(7516);
            images_playerskinmilla_3986_41_4[7] = get_internal_image(7517);
            images_playerskinmilla_3986_41_4[8] = get_internal_image(7200);
            images_playerskinmilla_3986_41_4[9] = get_internal_image(7268);
            images_playerskinmilla_3986_41_4[10] = get_internal_image(7269);
            images_playerskinmilla_3986_41_4[11] = get_internal_image(7514);
            images_playerskinmilla_3986_41_4[12] = get_internal_image(7523);
            images_playerskinmilla_3986_41_4[13] = get_internal_image(7522);
            images_playerskinmilla_3986_41_4[14] = get_internal_image(7514);
            images_playerskinmilla_3986_41_4[15] = get_internal_image(7514);
            images_playerskinmilla_3986_41_7[0] = get_internal_image(6159);
            images_playerskinmilla_3986_41_7[1] = get_internal_image(6162);
            images_playerskinmilla_3986_41_7[2] = get_internal_image(6163);
            images_playerskinmilla_3986_41_7[3] = get_internal_image(2125);
            images_playerskinmilla_3986_41_7[4] = get_internal_image(6163);
            images_playerskinmilla_3986_41_7[5] = get_internal_image(6162);
            images_playerskinmilla_3986_41_7[6] = get_internal_image(6159);
            images_playerskinmilla_3986_41_7[7] = get_internal_image(6161);
            images_playerskinmilla_3986_41_7[8] = get_internal_image(6128);
            images_playerskinmilla_3986_41_7[9] = get_internal_image(2293);
            images_playerskinmilla_3986_41_7[10] = get_internal_image(6128);
            images_playerskinmilla_3986_41_7[11] = get_internal_image(6161);
            images_playerskinmilla_3986_41_8[0] = get_internal_image(5581);
            images_playerskinmilla_3986_41_8[1] = get_internal_image(6962);
            images_playerskinmilla_3986_41_12[0] = get_internal_image(5269);
            images_playerskinmilla_3986_41_12[1] = get_internal_image(5269);
            images_playerskinmilla_3986_41_12[2] = get_internal_image(5277);
            images_playerskinmilla_3986_41_12[3] = get_internal_image(5388);
            images_playerskinmilla_3986_41_13[0] = get_internal_image(12072);
            images_playerskinmilla_3986_41_13[1] = get_internal_image(12072);
            images_playerskinmilla_3986_41_13[2] = get_internal_image(12039);
            images_playerskinmilla_3986_41_13[3] = get_internal_image(12039);
            images_playerskinmilla_3986_41_13[4] = get_internal_image(12038);
            images_playerskinmilla_3986_41_13[5] = get_internal_image(12038);
            images_playerskinmilla_3986_41_13[6] = get_internal_image(10993);
            images_playerskinmilla_3986_41_13[7] = get_internal_image(12073);
            images_playerskinmilla_3986_41_14[0] = get_internal_image(12064);
            images_playerskinmilla_3986_41_14[1] = get_internal_image(12067);
            images_playerskinmilla_3986_41_14[2] = get_internal_image(12068);
            images_playerskinmilla_3986_41_15[0] = get_internal_image(1798);
            images_playerskinmilla_3986_41_15[1] = get_internal_image(12046);
            images_playerskinmilla_3986_41_15[2] = get_internal_image(12047);
            images_playerskinmilla_3986_41_15[3] = get_internal_image(12049);
            images_playerskinmilla_3986_41_15[4] = get_internal_image(12050);
            images_playerskinmilla_3986_41_16[0] = get_internal_image(11000);
            images_playerskinmilla_3986_41_17[0] = get_internal_image(13324);
            images_playerskinmilla_3986_41_17[1] = get_internal_image(12425);
            images_playerskinmilla_3986_41_17[2] = get_internal_image(13276);
            images_playerskinmilla_3986_41_17[3] = get_internal_image(4078);
            images_playerskinmilla_3986_41_17[4] = get_internal_image(13342);
            images_playerskinmilla_3986_41_17[5] = get_internal_image(12426);
            images_playerskinmilla_3986_41_17[6] = get_internal_image(12428);
            images_playerskinmilla_3986_41_17[7] = get_internal_image(12423);
            images_playerskinmilla_3986_41_24[0] = get_internal_image(8806);
            images_playerskinmilla_3986_41_28[0] = get_internal_image(4393);
            images_playerskinmilla_3986_41_28[1] = get_internal_image(4393);
            images_playerskinmilla_3986_41_28[2] = get_internal_image(4395);
            images_playerskinmilla_3986_41_28[3] = get_internal_image(5034);
            images_playerskinmilla_3986_41_29[0] = get_internal_image(10737);
            images_playerskinmilla_3986_41_30[0] = get_internal_image(12063);
            images_playerskinmilla_3986_41_30[1] = get_internal_image(12066);
            images_playerskinmilla_3986_41_30[2] = get_internal_image(12065);
            images_playerskinmilla_3986_41_31[0] = get_internal_image(1141);
            images_playerskinmilla_3986_41_31[1] = get_internal_image(12043);
            images_playerskinmilla_3986_41_31[2] = get_internal_image(3023);
            images_playerskinmilla_3986_41_31[3] = get_internal_image(12041);
            images_playerskinmilla_3986_41_31[4] = get_internal_image(1809);
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
FrameObject * create_playerskinmilla_3986(int x, int y)
{
    return new (Active::pool.create()) PlayerSkinMilla_3986(x, y);
}
static Image* images_comet2_3987_0_0[2];
static Direction direction_comet2_3987_0_0 = {0, 0, 0, 0, 1, images_comet2_3987_0_0, 2};
static Animation anim_comet2_3987_0 = {&direction_comet2_3987_0_0, &direction_comet2_3987_0_0, &direction_comet2_3987_0_0, &direction_comet2_3987_0_0, &direction_comet2_3987_0_0, &direction_comet2_3987_0_0, &direction_comet2_3987_0_0, &direction_comet2_3987_0_0, &direction_comet2_3987_0_0, &direction_comet2_3987_0_0, &direction_comet2_3987_0_0, &direction_comet2_3987_0_0, &direction_comet2_3987_0_0, &direction_comet2_3987_0_0, &direction_comet2_3987_0_0, &direction_comet2_3987_0_0, NULL, &direction_comet2_3987_0_0, &direction_comet2_3987_0_0, &direction_comet2_3987_0_0, &direction_comet2_3987_0_0, &direction_comet2_3987_0_0, &direction_comet2_3987_0_0, &direction_comet2_3987_0_0, &direction_comet2_3987_0_0, &direction_comet2_3987_0_0, &direction_comet2_3987_0_0, &direction_comet2_3987_0_0, &direction_comet2_3987_0_0, &direction_comet2_3987_0_0, &direction_comet2_3987_0_0, &direction_comet2_3987_0_0};
static Animation * anim_array_comet2_3987[1] = {&anim_comet2_3987_0};
static Animations anim_comet2_3987 = {1, &anim_array_comet2_3987[0]};
static bool anim_comet2_3987_initialized;
class Comet2_3987 : public Active
{
public:
    Comet2_3987(int x, int y) : Active(x, y, Comet2_3987_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Comet 2", 7);
#endif
        this->animations = &anim_comet2_3987;
        if (!anim_comet2_3987_initialized) {
            anim_comet2_3987_initialized = true;
            images_comet2_3987_0_0[0] = get_internal_image(2980);
            images_comet2_3987_0_0[1] = get_internal_image(2981);
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
FrameObject * create_comet2_3987(int x, int y)
{
    return new (Active::pool.create()) Comet2_3987(x, y);
}
static Image* images_comet_3988_0_0[3];
static Direction direction_comet_3988_0_0 = {0, 90, 90, 0, -1, images_comet_3988_0_0, 3};
static Animation anim_comet_3988_0 = {&direction_comet_3988_0_0, &direction_comet_3988_0_0, &direction_comet_3988_0_0, &direction_comet_3988_0_0, &direction_comet_3988_0_0, &direction_comet_3988_0_0, &direction_comet_3988_0_0, &direction_comet_3988_0_0, &direction_comet_3988_0_0, &direction_comet_3988_0_0, &direction_comet_3988_0_0, &direction_comet_3988_0_0, &direction_comet_3988_0_0, &direction_comet_3988_0_0, &direction_comet_3988_0_0, &direction_comet_3988_0_0, NULL, &direction_comet_3988_0_0, &direction_comet_3988_0_0, &direction_comet_3988_0_0, &direction_comet_3988_0_0, &direction_comet_3988_0_0, &direction_comet_3988_0_0, &direction_comet_3988_0_0, &direction_comet_3988_0_0, &direction_comet_3988_0_0, &direction_comet_3988_0_0, &direction_comet_3988_0_0, &direction_comet_3988_0_0, &direction_comet_3988_0_0, &direction_comet_3988_0_0, &direction_comet_3988_0_0};
static Animation * anim_array_comet_3988[1] = {&anim_comet_3988_0};
static Animations anim_comet_3988 = {1, &anim_array_comet_3988[0]};
static bool anim_comet_3988_initialized;
class Comet_3988 : public Active
{
public:
    Comet_3988(int x, int y) : Active(x, y, Comet_3988_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Comet", 5);
#endif
        this->animations = &anim_comet_3988;
        if (!anim_comet_3988_initialized) {
            anim_comet_3988_initialized = true;
            images_comet_3988_0_0[0] = get_internal_image(2049);
            images_comet_3988_0_0[1] = get_internal_image(2889);
            images_comet_3988_0_0[2] = get_internal_image(2890);
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
FrameObject * create_comet_3988(int x, int y)
{
    return new (Active::pool.create()) Comet_3988(x, y);
}
static Image* images_brevondistant2_3989_0_0[1];
static Direction direction_brevondistant2_3989_0_0 = {0, 0, 0, 0, 1, images_brevondistant2_3989_0_0, 1};
static Animation anim_brevondistant2_3989_0 = {&direction_brevondistant2_3989_0_0, &direction_brevondistant2_3989_0_0, &direction_brevondistant2_3989_0_0, &direction_brevondistant2_3989_0_0, &direction_brevondistant2_3989_0_0, &direction_brevondistant2_3989_0_0, &direction_brevondistant2_3989_0_0, &direction_brevondistant2_3989_0_0, &direction_brevondistant2_3989_0_0, &direction_brevondistant2_3989_0_0, &direction_brevondistant2_3989_0_0, &direction_brevondistant2_3989_0_0, &direction_brevondistant2_3989_0_0, &direction_brevondistant2_3989_0_0, &direction_brevondistant2_3989_0_0, &direction_brevondistant2_3989_0_0, NULL, &direction_brevondistant2_3989_0_0, &direction_brevondistant2_3989_0_0, &direction_brevondistant2_3989_0_0, &direction_brevondistant2_3989_0_0, &direction_brevondistant2_3989_0_0, &direction_brevondistant2_3989_0_0, &direction_brevondistant2_3989_0_0, &direction_brevondistant2_3989_0_0, &direction_brevondistant2_3989_0_0, &direction_brevondistant2_3989_0_0, &direction_brevondistant2_3989_0_0, &direction_brevondistant2_3989_0_0, &direction_brevondistant2_3989_0_0, &direction_brevondistant2_3989_0_0, &direction_brevondistant2_3989_0_0};
static Animation * anim_array_brevondistant2_3989[1] = {&anim_brevondistant2_3989_0};
static Animations anim_brevondistant2_3989 = {1, &anim_array_brevondistant2_3989[0]};
static bool anim_brevondistant2_3989_initialized;
class BrevonDistant2_3989 : public Active
{
public:
    BrevonDistant2_3989(int x, int y) : Active(x, y, BrevonDistant2_3989_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Brevon_Distant 2", 16);
#endif
        this->animations = &anim_brevondistant2_3989;
        if (!anim_brevondistant2_3989_initialized) {
            anim_brevondistant2_3989_initialized = true;
            images_brevondistant2_3989_0_0[0] = get_internal_image(4880);
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
FrameObject * create_brevondistant2_3989(int x, int y)
{
    return new (Active::pool.create()) BrevonDistant2_3989(x, y);
}
static Image* images_spaceheroship_3990_0_0[3];
static Direction direction_spaceheroship_3990_0_0 = {0, 50, 50, 0, -1, images_spaceheroship_3990_0_0, 3};
static Image* images_spaceheroship_3990_0_16[3];
static Direction direction_spaceheroship_3990_0_16 = {16, 50, 50, 0, -1, images_spaceheroship_3990_0_16, 3};
static Animation anim_spaceheroship_3990_0 = {&direction_spaceheroship_3990_0_0, &direction_spaceheroship_3990_0_0, &direction_spaceheroship_3990_0_0, &direction_spaceheroship_3990_0_0, &direction_spaceheroship_3990_0_0, &direction_spaceheroship_3990_0_0, &direction_spaceheroship_3990_0_0, &direction_spaceheroship_3990_0_0, NULL, &direction_spaceheroship_3990_0_16, &direction_spaceheroship_3990_0_16, &direction_spaceheroship_3990_0_16, &direction_spaceheroship_3990_0_16, &direction_spaceheroship_3990_0_16, &direction_spaceheroship_3990_0_16, &direction_spaceheroship_3990_0_16, &direction_spaceheroship_3990_0_16, &direction_spaceheroship_3990_0_16, &direction_spaceheroship_3990_0_16, &direction_spaceheroship_3990_0_16, &direction_spaceheroship_3990_0_16, &direction_spaceheroship_3990_0_16, &direction_spaceheroship_3990_0_16, &direction_spaceheroship_3990_0_16, NULL, &direction_spaceheroship_3990_0_0, &direction_spaceheroship_3990_0_0, &direction_spaceheroship_3990_0_0, &direction_spaceheroship_3990_0_0, &direction_spaceheroship_3990_0_0, &direction_spaceheroship_3990_0_0, &direction_spaceheroship_3990_0_0};
static Animation * anim_array_spaceheroship_3990[1] = {&anim_spaceheroship_3990_0};
static Animations anim_spaceheroship_3990 = {1, &anim_array_spaceheroship_3990[0]};
static bool anim_spaceheroship_3990_initialized;
class SpaceHeroShip_3990 : public Active
{
public:
    SpaceHeroShip_3990(int x, int y) : Active(x, y, SpaceHeroShip_3990_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Space_HeroShip", 14);
#endif
        this->animations = &anim_spaceheroship_3990;
        if (!anim_spaceheroship_3990_initialized) {
            anim_spaceheroship_3990_initialized = true;
            images_spaceheroship_3990_0_0[0] = get_internal_image(2931);
            images_spaceheroship_3990_0_0[1] = get_internal_image(6238);
            images_spaceheroship_3990_0_0[2] = get_internal_image(6243);
            images_spaceheroship_3990_0_16[0] = get_internal_image(7930);
            images_spaceheroship_3990_0_16[1] = get_internal_image(7931);
            images_spaceheroship_3990_0_16[2] = get_internal_image(7933);
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
FrameObject * create_spaceheroship_3990(int x, int y)
{
    return new (Active::pool.create()) SpaceHeroShip_3990(x, y);
}
static Image* images_jeepbase_3991_0_0[5];
static Direction direction_jeepbase_3991_0_0 = {0, 0, 0, 0, 1, images_jeepbase_3991_0_0, 5};
static Image* images_jeepbase_3991_0_1[5];
static Direction direction_jeepbase_3991_0_1 = {1, 0, 0, 0, 1, images_jeepbase_3991_0_1, 5};
static Image* images_jeepbase_3991_0_16[5];
static Direction direction_jeepbase_3991_0_16 = {16, 0, 0, 0, 1, images_jeepbase_3991_0_16, 5};
static Image* images_jeepbase_3991_0_17[5];
static Direction direction_jeepbase_3991_0_17 = {17, 0, 0, 0, 1, images_jeepbase_3991_0_17, 5};
static Animation anim_jeepbase_3991_0 = {&direction_jeepbase_3991_0_0, &direction_jeepbase_3991_0_1, &direction_jeepbase_3991_0_1, &direction_jeepbase_3991_0_1, &direction_jeepbase_3991_0_1, &direction_jeepbase_3991_0_1, &direction_jeepbase_3991_0_1, &direction_jeepbase_3991_0_1, &direction_jeepbase_3991_0_1, &direction_jeepbase_3991_0_16, &direction_jeepbase_3991_0_16, &direction_jeepbase_3991_0_16, &direction_jeepbase_3991_0_16, &direction_jeepbase_3991_0_16, &direction_jeepbase_3991_0_16, &direction_jeepbase_3991_0_16, &direction_jeepbase_3991_0_16, &direction_jeepbase_3991_0_17, &direction_jeepbase_3991_0_17, &direction_jeepbase_3991_0_17, &direction_jeepbase_3991_0_17, &direction_jeepbase_3991_0_17, &direction_jeepbase_3991_0_17, &direction_jeepbase_3991_0_17, &direction_jeepbase_3991_0_17, &direction_jeepbase_3991_0_0, &direction_jeepbase_3991_0_0, &direction_jeepbase_3991_0_0, &direction_jeepbase_3991_0_0, &direction_jeepbase_3991_0_0, &direction_jeepbase_3991_0_0, &direction_jeepbase_3991_0_0};
static Animation * anim_array_jeepbase_3991[1] = {&anim_jeepbase_3991_0};
static Animations anim_jeepbase_3991 = {1, &anim_array_jeepbase_3991[0]};
static bool anim_jeepbase_3991_initialized;
class JeepBase_3991 : public Active
{
public:
    JeepBase_3991(int x, int y) : Active(x, y, JeepBase_3991_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Jeep_Base", 9);
#endif
        this->animations = &anim_jeepbase_3991;
        if (!anim_jeepbase_3991_initialized) {
            anim_jeepbase_3991_initialized = true;
            images_jeepbase_3991_0_0[0] = get_internal_image(13718);
            images_jeepbase_3991_0_0[1] = get_internal_image(2617);
            images_jeepbase_3991_0_0[2] = get_internal_image(14470);
            images_jeepbase_3991_0_0[3] = get_internal_image(16056);
            images_jeepbase_3991_0_0[4] = get_internal_image(16064);
            images_jeepbase_3991_0_1[0] = get_internal_image(16137);
            images_jeepbase_3991_0_1[1] = get_internal_image(16167);
            images_jeepbase_3991_0_1[2] = get_internal_image(16170);
            images_jeepbase_3991_0_1[3] = get_internal_image(16171);
            images_jeepbase_3991_0_1[4] = get_internal_image(16064);
            images_jeepbase_3991_0_16[0] = get_internal_image(13661);
            images_jeepbase_3991_0_16[1] = get_internal_image(16057);
            images_jeepbase_3991_0_16[2] = get_internal_image(16058);
            images_jeepbase_3991_0_16[3] = get_internal_image(16169);
            images_jeepbase_3991_0_16[4] = get_internal_image(15825);
            images_jeepbase_3991_0_17[0] = get_internal_image(16138);
            images_jeepbase_3991_0_17[1] = get_internal_image(16172);
            images_jeepbase_3991_0_17[2] = get_internal_image(16173);
            images_jeepbase_3991_0_17[3] = get_internal_image(16174);
            images_jeepbase_3991_0_17[4] = get_internal_image(15825);
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
FrameObject * create_jeepbase_3991(int x, int y)
{
    return new (Active::pool.create()) JeepBase_3991(x, y);
}
static Image* images_jeepwheel1_3992_0_0[1];
static Direction direction_jeepwheel1_3992_0_0 = {0, 50, 50, 0, 1, images_jeepwheel1_3992_0_0, 1};
static Animation anim_jeepwheel1_3992_0 = {&direction_jeepwheel1_3992_0_0, &direction_jeepwheel1_3992_0_0, &direction_jeepwheel1_3992_0_0, &direction_jeepwheel1_3992_0_0, &direction_jeepwheel1_3992_0_0, &direction_jeepwheel1_3992_0_0, &direction_jeepwheel1_3992_0_0, &direction_jeepwheel1_3992_0_0, &direction_jeepwheel1_3992_0_0, &direction_jeepwheel1_3992_0_0, &direction_jeepwheel1_3992_0_0, &direction_jeepwheel1_3992_0_0, &direction_jeepwheel1_3992_0_0, &direction_jeepwheel1_3992_0_0, &direction_jeepwheel1_3992_0_0, &direction_jeepwheel1_3992_0_0, NULL, &direction_jeepwheel1_3992_0_0, &direction_jeepwheel1_3992_0_0, &direction_jeepwheel1_3992_0_0, &direction_jeepwheel1_3992_0_0, &direction_jeepwheel1_3992_0_0, &direction_jeepwheel1_3992_0_0, &direction_jeepwheel1_3992_0_0, &direction_jeepwheel1_3992_0_0, &direction_jeepwheel1_3992_0_0, &direction_jeepwheel1_3992_0_0, &direction_jeepwheel1_3992_0_0, &direction_jeepwheel1_3992_0_0, &direction_jeepwheel1_3992_0_0, &direction_jeepwheel1_3992_0_0, &direction_jeepwheel1_3992_0_0};
static Animation * anim_array_jeepwheel1_3992[1] = {&anim_jeepwheel1_3992_0};
static Animations anim_jeepwheel1_3992 = {1, &anim_array_jeepwheel1_3992[0]};
static bool anim_jeepwheel1_3992_initialized;
class JeepWheel1_3992 : public Active
{
public:
    JeepWheel1_3992(int x, int y) : Active(x, y, JeepWheel1_3992_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Jeep_Wheel 1", 12);
#endif
        this->animations = &anim_jeepwheel1_3992;
        if (!anim_jeepwheel1_3992_initialized) {
            anim_jeepwheel1_3992_initialized = true;
            images_jeepwheel1_3992_0_0[0] = get_internal_image(2494);
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
FrameObject * create_jeepwheel1_3992(int x, int y)
{
    return new (Active::pool.create()) JeepWheel1_3992(x, y);
}
static Image* images_jeepwheel2_3993_0_0[1];
static Direction direction_jeepwheel2_3993_0_0 = {0, 50, 50, 0, 1, images_jeepwheel2_3993_0_0, 1};
static Animation anim_jeepwheel2_3993_0 = {&direction_jeepwheel2_3993_0_0, &direction_jeepwheel2_3993_0_0, &direction_jeepwheel2_3993_0_0, &direction_jeepwheel2_3993_0_0, &direction_jeepwheel2_3993_0_0, &direction_jeepwheel2_3993_0_0, &direction_jeepwheel2_3993_0_0, &direction_jeepwheel2_3993_0_0, &direction_jeepwheel2_3993_0_0, &direction_jeepwheel2_3993_0_0, &direction_jeepwheel2_3993_0_0, &direction_jeepwheel2_3993_0_0, &direction_jeepwheel2_3993_0_0, &direction_jeepwheel2_3993_0_0, &direction_jeepwheel2_3993_0_0, &direction_jeepwheel2_3993_0_0, NULL, &direction_jeepwheel2_3993_0_0, &direction_jeepwheel2_3993_0_0, &direction_jeepwheel2_3993_0_0, &direction_jeepwheel2_3993_0_0, &direction_jeepwheel2_3993_0_0, &direction_jeepwheel2_3993_0_0, &direction_jeepwheel2_3993_0_0, &direction_jeepwheel2_3993_0_0, &direction_jeepwheel2_3993_0_0, &direction_jeepwheel2_3993_0_0, &direction_jeepwheel2_3993_0_0, &direction_jeepwheel2_3993_0_0, &direction_jeepwheel2_3993_0_0, &direction_jeepwheel2_3993_0_0, &direction_jeepwheel2_3993_0_0};
static Animation * anim_array_jeepwheel2_3993[1] = {&anim_jeepwheel2_3993_0};
static Animations anim_jeepwheel2_3993 = {1, &anim_array_jeepwheel2_3993[0]};
static bool anim_jeepwheel2_3993_initialized;
class JeepWheel2_3993 : public Active
{
public:
    JeepWheel2_3993(int x, int y) : Active(x, y, JeepWheel2_3993_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Jeep_Wheel 2", 12);
#endif
        this->animations = &anim_jeepwheel2_3993;
        if (!anim_jeepwheel2_3993_initialized) {
            anim_jeepwheel2_3993_initialized = true;
            images_jeepwheel2_3993_0_0[0] = get_internal_image(2494);
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
FrameObject * create_jeepwheel2_3993(int x, int y)
{
    return new (Active::pool.create()) JeepWheel2_3993(x, y);
}
static Image* images_npcshieldguard_3994_0_0[1];
static Direction direction_npcshieldguard_3994_0_0 = {0, 50, 50, 0, 1, images_npcshieldguard_3994_0_0, 1};
static Image* images_npcshieldguard_3994_0_1[1];
static Direction direction_npcshieldguard_3994_0_1 = {1, 50, 50, 0, 1, images_npcshieldguard_3994_0_1, 1};
static Image* images_npcshieldguard_3994_0_2[1];
static Direction direction_npcshieldguard_3994_0_2 = {2, 50, 50, 0, 1, images_npcshieldguard_3994_0_2, 1};
static Image* images_npcshieldguard_3994_0_15[1];
static Direction direction_npcshieldguard_3994_0_15 = {15, 50, 50, 0, 1, images_npcshieldguard_3994_0_15, 1};
static Image* images_npcshieldguard_3994_0_16[1];
static Direction direction_npcshieldguard_3994_0_16 = {16, 50, 50, 0, 1, images_npcshieldguard_3994_0_16, 1};
static Image* images_npcshieldguard_3994_0_17[1];
static Direction direction_npcshieldguard_3994_0_17 = {17, 50, 50, 0, 1, images_npcshieldguard_3994_0_17, 1};
static Image* images_npcshieldguard_3994_0_18[1];
static Direction direction_npcshieldguard_3994_0_18 = {18, 50, 50, 0, 1, images_npcshieldguard_3994_0_18, 1};
static Image* images_npcshieldguard_3994_0_31[1];
static Direction direction_npcshieldguard_3994_0_31 = {31, 50, 50, 0, 1, images_npcshieldguard_3994_0_31, 1};
static Animation anim_npcshieldguard_3994_0 = {&direction_npcshieldguard_3994_0_0, &direction_npcshieldguard_3994_0_1, &direction_npcshieldguard_3994_0_2, &direction_npcshieldguard_3994_0_2, &direction_npcshieldguard_3994_0_2, &direction_npcshieldguard_3994_0_2, &direction_npcshieldguard_3994_0_2, &direction_npcshieldguard_3994_0_2, &direction_npcshieldguard_3994_0_2, &direction_npcshieldguard_3994_0_15, &direction_npcshieldguard_3994_0_15, &direction_npcshieldguard_3994_0_15, &direction_npcshieldguard_3994_0_15, &direction_npcshieldguard_3994_0_15, &direction_npcshieldguard_3994_0_15, &direction_npcshieldguard_3994_0_15, &direction_npcshieldguard_3994_0_16, &direction_npcshieldguard_3994_0_17, &direction_npcshieldguard_3994_0_18, &direction_npcshieldguard_3994_0_18, &direction_npcshieldguard_3994_0_18, &direction_npcshieldguard_3994_0_18, &direction_npcshieldguard_3994_0_18, &direction_npcshieldguard_3994_0_18, &direction_npcshieldguard_3994_0_18, &direction_npcshieldguard_3994_0_31, &direction_npcshieldguard_3994_0_31, &direction_npcshieldguard_3994_0_31, &direction_npcshieldguard_3994_0_31, &direction_npcshieldguard_3994_0_31, &direction_npcshieldguard_3994_0_31, &direction_npcshieldguard_3994_0_31};
static Animation * anim_array_npcshieldguard_3994[1] = {&anim_npcshieldguard_3994_0};
static Animations anim_npcshieldguard_3994 = {1, &anim_array_npcshieldguard_3994[0]};
static bool anim_npcshieldguard_3994_initialized;
class NPCShieldGuard_3994 : public Active
{
public:
    NPCShieldGuard_3994(int x, int y) : Active(x, y, NPCShieldGuard_3994_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_ShieldGuard", 15);
#endif
        set_visible(false);
        this->animations = &anim_npcshieldguard_3994;
        if (!anim_npcshieldguard_3994_initialized) {
            anim_npcshieldguard_3994_initialized = true;
            images_npcshieldguard_3994_0_0[0] = get_internal_image(2363);
            images_npcshieldguard_3994_0_1[0] = get_internal_image(16168);
            images_npcshieldguard_3994_0_2[0] = get_internal_image(13932);
            images_npcshieldguard_3994_0_15[0] = get_internal_image(6417);
            images_npcshieldguard_3994_0_16[0] = get_internal_image(11801);
            images_npcshieldguard_3994_0_17[0] = get_internal_image(13935);
            images_npcshieldguard_3994_0_18[0] = get_internal_image(13745);
            images_npcshieldguard_3994_0_31[0] = get_internal_image(7157);
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
FrameObject * create_npcshieldguard_3994(int x, int y)
{
    return new (Active::pool.create()) NPCShieldGuard_3994(x, y);
}
static Image* images_dragontailpath_3995_0_0[1];
static Direction direction_dragontailpath_3995_0_0 = {0, 50, 50, 0, 1, images_dragontailpath_3995_0_0, 1};
static Animation anim_dragontailpath_3995_0 = {&direction_dragontailpath_3995_0_0, &direction_dragontailpath_3995_0_0, &direction_dragontailpath_3995_0_0, &direction_dragontailpath_3995_0_0, &direction_dragontailpath_3995_0_0, &direction_dragontailpath_3995_0_0, &direction_dragontailpath_3995_0_0, &direction_dragontailpath_3995_0_0, &direction_dragontailpath_3995_0_0, &direction_dragontailpath_3995_0_0, &direction_dragontailpath_3995_0_0, &direction_dragontailpath_3995_0_0, &direction_dragontailpath_3995_0_0, &direction_dragontailpath_3995_0_0, &direction_dragontailpath_3995_0_0, &direction_dragontailpath_3995_0_0, NULL, &direction_dragontailpath_3995_0_0, &direction_dragontailpath_3995_0_0, &direction_dragontailpath_3995_0_0, &direction_dragontailpath_3995_0_0, &direction_dragontailpath_3995_0_0, &direction_dragontailpath_3995_0_0, &direction_dragontailpath_3995_0_0, &direction_dragontailpath_3995_0_0, &direction_dragontailpath_3995_0_0, &direction_dragontailpath_3995_0_0, &direction_dragontailpath_3995_0_0, &direction_dragontailpath_3995_0_0, &direction_dragontailpath_3995_0_0, &direction_dragontailpath_3995_0_0, &direction_dragontailpath_3995_0_0};
static Animation * anim_array_dragontailpath_3995[1] = {&anim_dragontailpath_3995_0};
static Animations anim_dragontailpath_3995 = {1, &anim_array_dragontailpath_3995[0]};
static bool anim_dragontailpath_3995_initialized;
class DragonTailPath_3995 : public Active
{
public:
    DragonTailPath_3995(int x, int y) : Active(x, y, DragonTailPath_3995_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Dragon_TailPath", 15);
#endif
        set_visible(false);
        this->animations = &anim_dragontailpath_3995;
        if (!anim_dragontailpath_3995_initialized) {
            anim_dragontailpath_3995_initialized = true;
            images_dragontailpath_3995_0_0[0] = get_internal_image(13389);
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
FrameObject * create_dragontailpath_3995(int x, int y)
{
    return new (Active::pool.create()) DragonTailPath_3995(x, y);
}
class LevelParallaxPiece6Layer2_3996 : public SystemBox
{
public:
    LevelParallaxPiece6Layer2_3996(int x, int y) : SystemBox(x, y, LevelParallaxPiece6Layer2_3996_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece6Layer2", 27);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 320;
        type = PATTERN_IMAGE;
        image = get_internal_image(1151);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece6layer2_3996(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece6Layer2_3996(x, y);
}
class JeepPart6_3997 : public Backdrop
{
public:
    JeepPart6_3997(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JeepPart 6", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(16076);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jeeppart6_3997(int x, int y)
{
    return new (Backdrop::pool.create()) JeepPart6_3997(x, y);
}
class JeepPart2_3998 : public Backdrop
{
public:
    JeepPart2_3998(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JeepPart 2", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(16068);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jeeppart2_3998(int x, int y)
{
    return new (Backdrop::pool.create()) JeepPart2_3998(x, y);
}
class JeepPart3_3999 : public Backdrop
{
public:
    JeepPart3_3999(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JeepPart 3", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(16065);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jeeppart3_3999(int x, int y)
{
    return new (Backdrop::pool.create()) JeepPart3_3999(x, y);
}
class JeepPart5_4000 : public Backdrop
{
public:
    JeepPart5_4000(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JeepPart 5", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(16073);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jeeppart5_4000(int x, int y)
{
    return new (Backdrop::pool.create()) JeepPart5_4000(x, y);
}
class JeepPart1_4001 : public Backdrop
{
public:
    JeepPart1_4001(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JeepPart 1", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(16063);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jeeppart1_4001(int x, int y)
{
    return new (Backdrop::pool.create()) JeepPart1_4001(x, y);
}
class JeepPart4_4002 : public Backdrop
{
public:
    JeepPart4_4002(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JeepPart 4", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15824);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jeeppart4_4002(int x, int y)
{
    return new (Backdrop::pool.create()) JeepPart4_4002(x, y);
}
class ParallaxCrashedShip_4003 : public SystemBox
{
public:
    ParallaxCrashedShip_4003(int x, int y) : SystemBox(x, y, ParallaxCrashedShip_4003_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Parallax_CrashedShip", 20);
#endif
        flags |= BACKGROUND;
        width = 657;
        height = 305;
        type = PATTERN_IMAGE;
        image = get_internal_image(234);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_parallaxcrashedship_4003(int x, int y)
{
    return new (SystemBox::pool.create()) ParallaxCrashedShip_4003(x, y);
}
class LevelParallaxPiece7_4004 : public SystemBox
{
public:
    LevelParallaxPiece7_4004(int x, int y) : SystemBox(x, y, LevelParallaxPiece7_4004_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 7", 22);
#endif
        flags |= BACKGROUND;
        width = 594;
        height = 128;
        type = PATTERN_IMAGE;
        image = get_internal_image(590);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece7_4004(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece7_4004(x, y);
}
static Image* images_brevondistant_4005_0_0[2];
static Direction direction_brevondistant_4005_0_0 = {0, 0, 0, 0, 1, images_brevondistant_4005_0_0, 2};
static Animation anim_brevondistant_4005_0 = {&direction_brevondistant_4005_0_0, &direction_brevondistant_4005_0_0, &direction_brevondistant_4005_0_0, &direction_brevondistant_4005_0_0, &direction_brevondistant_4005_0_0, &direction_brevondistant_4005_0_0, &direction_brevondistant_4005_0_0, &direction_brevondistant_4005_0_0, &direction_brevondistant_4005_0_0, &direction_brevondistant_4005_0_0, &direction_brevondistant_4005_0_0, &direction_brevondistant_4005_0_0, &direction_brevondistant_4005_0_0, &direction_brevondistant_4005_0_0, &direction_brevondistant_4005_0_0, &direction_brevondistant_4005_0_0, NULL, &direction_brevondistant_4005_0_0, &direction_brevondistant_4005_0_0, &direction_brevondistant_4005_0_0, &direction_brevondistant_4005_0_0, &direction_brevondistant_4005_0_0, &direction_brevondistant_4005_0_0, &direction_brevondistant_4005_0_0, &direction_brevondistant_4005_0_0, &direction_brevondistant_4005_0_0, &direction_brevondistant_4005_0_0, &direction_brevondistant_4005_0_0, &direction_brevondistant_4005_0_0, &direction_brevondistant_4005_0_0, &direction_brevondistant_4005_0_0, &direction_brevondistant_4005_0_0};
static Animation * anim_array_brevondistant_4005[1] = {&anim_brevondistant_4005_0};
static Animations anim_brevondistant_4005 = {1, &anim_array_brevondistant_4005[0]};
static bool anim_brevondistant_4005_initialized;
class BrevonDistant_4005 : public Active
{
public:
    BrevonDistant_4005(int x, int y) : Active(x, y, BrevonDistant_4005_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Brevon_Distant", 14);
#endif
        set_visible(false);
        this->animations = &anim_brevondistant_4005;
        if (!anim_brevondistant_4005_initialized) {
            anim_brevondistant_4005_initialized = true;
            images_brevondistant_4005_0_0[0] = get_internal_image(3031);
            images_brevondistant_4005_0_0[1] = get_internal_image(3029);
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
FrameObject * create_brevondistant_4005(int x, int y)
{
    return new (Active::pool.create()) BrevonDistant_4005(x, y);
}
static Image* images_soldierwagon_4006_0_0[2];
static Direction direction_soldierwagon_4006_0_0 = {0, 0, 0, 0, 1, images_soldierwagon_4006_0_0, 2};
static Animation anim_soldierwagon_4006_0 = {&direction_soldierwagon_4006_0_0, &direction_soldierwagon_4006_0_0, &direction_soldierwagon_4006_0_0, &direction_soldierwagon_4006_0_0, &direction_soldierwagon_4006_0_0, &direction_soldierwagon_4006_0_0, &direction_soldierwagon_4006_0_0, &direction_soldierwagon_4006_0_0, &direction_soldierwagon_4006_0_0, &direction_soldierwagon_4006_0_0, &direction_soldierwagon_4006_0_0, &direction_soldierwagon_4006_0_0, &direction_soldierwagon_4006_0_0, &direction_soldierwagon_4006_0_0, &direction_soldierwagon_4006_0_0, &direction_soldierwagon_4006_0_0, NULL, &direction_soldierwagon_4006_0_0, &direction_soldierwagon_4006_0_0, &direction_soldierwagon_4006_0_0, &direction_soldierwagon_4006_0_0, &direction_soldierwagon_4006_0_0, &direction_soldierwagon_4006_0_0, &direction_soldierwagon_4006_0_0, &direction_soldierwagon_4006_0_0, &direction_soldierwagon_4006_0_0, &direction_soldierwagon_4006_0_0, &direction_soldierwagon_4006_0_0, &direction_soldierwagon_4006_0_0, &direction_soldierwagon_4006_0_0, &direction_soldierwagon_4006_0_0, &direction_soldierwagon_4006_0_0};
static Animation * anim_array_soldierwagon_4006[1] = {&anim_soldierwagon_4006_0};
static Animations anim_soldierwagon_4006 = {1, &anim_array_soldierwagon_4006[0]};
static bool anim_soldierwagon_4006_initialized;
class SoldierWagon_4006 : public Active
{
public:
    SoldierWagon_4006(int x, int y) : Active(x, y, SoldierWagon_4006_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("SoldierWagon", 12);
#endif
        set_visible(false);
        this->animations = &anim_soldierwagon_4006;
        if (!anim_soldierwagon_4006_initialized) {
            anim_soldierwagon_4006_initialized = true;
            images_soldierwagon_4006_0_0[0] = get_internal_image(7156);
            images_soldierwagon_4006_0_0[1] = get_internal_image(6288);
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
FrameObject * create_soldierwagon_4006(int x, int y)
{
    return new (Active::pool.create()) SoldierWagon_4006(x, y);
}
static Image* images_zaosnowmound_4007_0_0[1];
static Direction direction_zaosnowmound_4007_0_0 = {0, 50, 50, 0, 1, images_zaosnowmound_4007_0_0, 1};
static Animation anim_zaosnowmound_4007_0 = {&direction_zaosnowmound_4007_0_0, &direction_zaosnowmound_4007_0_0, &direction_zaosnowmound_4007_0_0, &direction_zaosnowmound_4007_0_0, &direction_zaosnowmound_4007_0_0, &direction_zaosnowmound_4007_0_0, &direction_zaosnowmound_4007_0_0, &direction_zaosnowmound_4007_0_0, &direction_zaosnowmound_4007_0_0, &direction_zaosnowmound_4007_0_0, &direction_zaosnowmound_4007_0_0, &direction_zaosnowmound_4007_0_0, &direction_zaosnowmound_4007_0_0, &direction_zaosnowmound_4007_0_0, &direction_zaosnowmound_4007_0_0, &direction_zaosnowmound_4007_0_0, NULL, &direction_zaosnowmound_4007_0_0, &direction_zaosnowmound_4007_0_0, &direction_zaosnowmound_4007_0_0, &direction_zaosnowmound_4007_0_0, &direction_zaosnowmound_4007_0_0, &direction_zaosnowmound_4007_0_0, &direction_zaosnowmound_4007_0_0, &direction_zaosnowmound_4007_0_0, &direction_zaosnowmound_4007_0_0, &direction_zaosnowmound_4007_0_0, &direction_zaosnowmound_4007_0_0, &direction_zaosnowmound_4007_0_0, &direction_zaosnowmound_4007_0_0, &direction_zaosnowmound_4007_0_0, &direction_zaosnowmound_4007_0_0};
static Animation * anim_array_zaosnowmound_4007[1] = {&anim_zaosnowmound_4007_0};
static Animations anim_zaosnowmound_4007 = {1, &anim_array_zaosnowmound_4007[0]};
static bool anim_zaosnowmound_4007_initialized;
class ZaoSnowMound_4007 : public Active
{
public:
    ZaoSnowMound_4007(int x, int y) : Active(x, y, ZaoSnowMound_4007_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("ZaoSnowMound", 12);
#endif
        this->animations = &anim_zaosnowmound_4007;
        if (!anim_zaosnowmound_4007_initialized) {
            anim_zaosnowmound_4007_initialized = true;
            images_zaosnowmound_4007_0_0[0] = get_internal_image(11484);
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
FrameObject * create_zaosnowmound_4007(int x, int y)
{
    return new (Active::pool.create()) ZaoSnowMound_4007(x, y);
}
static Image* images_bgfireplace2_4008_0_0[6];
static Direction direction_bgfireplace2_4008_0_0 = {0, 16, 16, 0, -1, images_bgfireplace2_4008_0_0, 6};
static Animation anim_bgfireplace2_4008_0 = {&direction_bgfireplace2_4008_0_0, &direction_bgfireplace2_4008_0_0, &direction_bgfireplace2_4008_0_0, &direction_bgfireplace2_4008_0_0, &direction_bgfireplace2_4008_0_0, &direction_bgfireplace2_4008_0_0, &direction_bgfireplace2_4008_0_0, &direction_bgfireplace2_4008_0_0, &direction_bgfireplace2_4008_0_0, &direction_bgfireplace2_4008_0_0, &direction_bgfireplace2_4008_0_0, &direction_bgfireplace2_4008_0_0, &direction_bgfireplace2_4008_0_0, &direction_bgfireplace2_4008_0_0, &direction_bgfireplace2_4008_0_0, &direction_bgfireplace2_4008_0_0, NULL, &direction_bgfireplace2_4008_0_0, &direction_bgfireplace2_4008_0_0, &direction_bgfireplace2_4008_0_0, &direction_bgfireplace2_4008_0_0, &direction_bgfireplace2_4008_0_0, &direction_bgfireplace2_4008_0_0, &direction_bgfireplace2_4008_0_0, &direction_bgfireplace2_4008_0_0, &direction_bgfireplace2_4008_0_0, &direction_bgfireplace2_4008_0_0, &direction_bgfireplace2_4008_0_0, &direction_bgfireplace2_4008_0_0, &direction_bgfireplace2_4008_0_0, &direction_bgfireplace2_4008_0_0, &direction_bgfireplace2_4008_0_0};
static Animation * anim_array_bgfireplace2_4008[1] = {&anim_bgfireplace2_4008_0};
static Animations anim_bgfireplace2_4008 = {1, &anim_array_bgfireplace2_4008[0]};
static bool anim_bgfireplace2_4008_initialized;
class BGFireplace2_4008 : public Active
{
public:
    BGFireplace2_4008(int x, int y) : Active(x, y, BGFireplace2_4008_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BG_Fireplace 2", 14);
#endif
        this->animations = &anim_bgfireplace2_4008;
        if (!anim_bgfireplace2_4008_initialized) {
            anim_bgfireplace2_4008_initialized = true;
            images_bgfireplace2_4008_0_0[0] = get_internal_image(4045);
            images_bgfireplace2_4008_0_0[1] = get_internal_image(5209);
            images_bgfireplace2_4008_0_0[2] = get_internal_image(4695);
            images_bgfireplace2_4008_0_0[3] = get_internal_image(4163);
            images_bgfireplace2_4008_0_0[4] = get_internal_image(5245);
            images_bgfireplace2_4008_0_0[5] = get_internal_image(4187);
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
FrameObject * create_bgfireplace2_4008(int x, int y)
{
    return new (Active::pool.create()) BGFireplace2_4008(x, y);
}
class BGFireplace_4009 : public Backdrop
{
public:
    BGFireplace_4009(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Fireplace", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(16062);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bgfireplace_4009(int x, int y)
{
    return new (Backdrop::pool.create()) BGFireplace_4009(x, y);
}
class Backdrop7_4010 : public Backdrop
{
public:
    Backdrop7_4010(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 7", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3929);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop7_4010(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop7_4010(x, y);
}
class Backdrop8_4011 : public Backdrop
{
public:
    Backdrop8_4011(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 8", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4036);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop8_4011(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop8_4011(x, y);
}
class Backdrop12_4012 : public Backdrop
{
public:
    Backdrop12_4012(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 12", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4165);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop12_4012(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop12_4012(x, y);
}
static Image* images_playerzaotank2_4013_0_0[1];
static Direction direction_playerzaotank2_4013_0_0 = {0, 50, 50, 0, 1, images_playerzaotank2_4013_0_0, 1};
static Animation anim_playerzaotank2_4013_0 = {&direction_playerzaotank2_4013_0_0, &direction_playerzaotank2_4013_0_0, &direction_playerzaotank2_4013_0_0, &direction_playerzaotank2_4013_0_0, &direction_playerzaotank2_4013_0_0, &direction_playerzaotank2_4013_0_0, &direction_playerzaotank2_4013_0_0, &direction_playerzaotank2_4013_0_0, &direction_playerzaotank2_4013_0_0, &direction_playerzaotank2_4013_0_0, &direction_playerzaotank2_4013_0_0, &direction_playerzaotank2_4013_0_0, &direction_playerzaotank2_4013_0_0, &direction_playerzaotank2_4013_0_0, &direction_playerzaotank2_4013_0_0, &direction_playerzaotank2_4013_0_0, NULL, &direction_playerzaotank2_4013_0_0, &direction_playerzaotank2_4013_0_0, &direction_playerzaotank2_4013_0_0, &direction_playerzaotank2_4013_0_0, &direction_playerzaotank2_4013_0_0, &direction_playerzaotank2_4013_0_0, &direction_playerzaotank2_4013_0_0, &direction_playerzaotank2_4013_0_0, &direction_playerzaotank2_4013_0_0, &direction_playerzaotank2_4013_0_0, &direction_playerzaotank2_4013_0_0, &direction_playerzaotank2_4013_0_0, &direction_playerzaotank2_4013_0_0, &direction_playerzaotank2_4013_0_0, &direction_playerzaotank2_4013_0_0};
static Animation * anim_array_playerzaotank2_4013[1] = {&anim_playerzaotank2_4013_0};
static Animations anim_playerzaotank2_4013 = {1, &anim_array_playerzaotank2_4013[0]};
static bool anim_playerzaotank2_4013_initialized;
class PlayerZaoTank2_4013 : public Active
{
public:
    PlayerZaoTank2_4013(int x, int y) : Active(x, y, PlayerZaoTank2_4013_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_ZaoTank 2", 16);
#endif
        set_visible(false);
        this->animations = &anim_playerzaotank2_4013;
        if (!anim_playerzaotank2_4013_initialized) {
            anim_playerzaotank2_4013_initialized = true;
            images_playerzaotank2_4013_0_0[0] = get_internal_image(12788);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 15);
        alterables->values.set(3, 100);
    }
};
FrameObject * create_playerzaotank2_4013(int x, int y)
{
    return new (Active::pool.create()) PlayerZaoTank2_4013(x, y);
}
static Image* images_playerzaotank_4014_0_0[4];
static Direction direction_playerzaotank_4014_0_0 = {0, 75, 75, 0, -1, images_playerzaotank_4014_0_0, 4};
static Animation anim_playerzaotank_4014_0 = {&direction_playerzaotank_4014_0_0, &direction_playerzaotank_4014_0_0, &direction_playerzaotank_4014_0_0, &direction_playerzaotank_4014_0_0, &direction_playerzaotank_4014_0_0, &direction_playerzaotank_4014_0_0, &direction_playerzaotank_4014_0_0, &direction_playerzaotank_4014_0_0, &direction_playerzaotank_4014_0_0, &direction_playerzaotank_4014_0_0, &direction_playerzaotank_4014_0_0, &direction_playerzaotank_4014_0_0, &direction_playerzaotank_4014_0_0, &direction_playerzaotank_4014_0_0, &direction_playerzaotank_4014_0_0, &direction_playerzaotank_4014_0_0, NULL, &direction_playerzaotank_4014_0_0, &direction_playerzaotank_4014_0_0, &direction_playerzaotank_4014_0_0, &direction_playerzaotank_4014_0_0, &direction_playerzaotank_4014_0_0, &direction_playerzaotank_4014_0_0, &direction_playerzaotank_4014_0_0, &direction_playerzaotank_4014_0_0, &direction_playerzaotank_4014_0_0, &direction_playerzaotank_4014_0_0, &direction_playerzaotank_4014_0_0, &direction_playerzaotank_4014_0_0, &direction_playerzaotank_4014_0_0, &direction_playerzaotank_4014_0_0, &direction_playerzaotank_4014_0_0};
static Animation * anim_array_playerzaotank_4014[1] = {&anim_playerzaotank_4014_0};
static Animations anim_playerzaotank_4014 = {1, &anim_array_playerzaotank_4014[0]};
static bool anim_playerzaotank_4014_initialized;
class PlayerZaoTank_4014 : public Active
{
public:
    PlayerZaoTank_4014(int x, int y) : Active(x, y, PlayerZaoTank_4014_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_ZaoTank", 14);
#endif
        set_visible(false);
        this->animations = &anim_playerzaotank_4014;
        if (!anim_playerzaotank_4014_initialized) {
            anim_playerzaotank_4014_initialized = true;
            images_playerzaotank_4014_0_0[0] = get_internal_image(2360);
            images_playerzaotank_4014_0_0[1] = get_internal_image(202);
            images_playerzaotank_4014_0_0[2] = get_internal_image(2713);
            images_playerzaotank_4014_0_0[3] = get_internal_image(1315);
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
FrameObject * create_playerzaotank_4014(int x, int y)
{
    return new (Active::pool.create()) PlayerZaoTank_4014(x, y);
}
