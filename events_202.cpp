#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_15832()
{
    // event 2039_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2039_72_end;
        brevonsuitfrontarm_3776_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontarm_3776_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonsuitfrontarm_3776_instances.has_selection()) goto event_2039_72_end;
        for (ObjectIterator it(brevonsuitfrontarm_3776_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 1);
        }
    }
    event_2039_72_end: ;
}
void Frames::event_func_15833()
{
    // event 2040_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2040_72_end;
        brevonsuitlaser_3741_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(brevonsuitlaser_3741_instances, playercharactersensor_383_instances)) goto event_2040_72_end;
        for (ObjectIterator it(brevonsuitlaser_3741_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playercharactersensor_383_instances))->get_x()-16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playercharactersensor_383_instances))->get_x()+16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(playercharactersensor_383_instances))->get_y()-16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playercharactersensor_383_instances))->get_y()+16))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!brevonsuitlaser_3741_instances.has_selection()) goto event_2040_72_end;
        for (ObjectIterator it(brevonsuitlaser_3741_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
        media.play_id(SOUND_BLAST1_55, -1, 1);
        FrameObject * single_instance_2040_72_0; single_instance_2040_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonsuitlaser_3741_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2040_72_0 == NULL)
                    single_instance_2040_72_0 = new_obj;
            }
        }
    }
    event_2040_72_end: ;
}
void Frames::event_func_15834()
{
    // event 2041_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2041_72_end;
        brevonsuitlaser_3741_instances.clear_selection();
        playerreflect_447_instances.clear_selection();
        if (!check_overlap(brevonsuitlaser_3741_instances, playerreflect_447_instances)) goto event_2041_72_end;
        if (!(((Active*)get_instance(playerreflect_447_instances))->flags & VISIBLE)) goto event_2041_72_end;
        for (ObjectIterator it(brevonsuitlaser_3741_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!brevonsuitlaser_3741_instances.has_selection()) goto event_2041_72_end;
        for (ObjectIterator it(brevonsuitlaser_3741_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
            ((Active*)*it)->alterables->values.add(2, 180);
        }
        media.play_id(SOUND_MILLA_REFLECT_219, -1, 1);
    }
    event_2041_72_end: ;
}
void Frames::event_func_15835()
{
    // event 2042_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2042_72_end;
        brevonsuitlaser_3741_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(brevonsuitlaser_3741_instances, qualifier_20)) goto event_2042_72_end;
        for (ObjectIterator it(brevonsuitlaser_3741_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
        }
        if (!brevonsuitlaser_3741_instances.has_selection()) goto event_2042_72_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_2042_72_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 5);
            ((Active*)*it)->alterables->values.set(23, -2+randrange(5));
            ((Active*)*it)->alterables->values.set(24, -3);
        }
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 4);
        }
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
    }
    event_2042_72_end: ;
}
void Frames::event_func_15836()
{
    // event 2043_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2043_72_end;
        ((Active*)get_instance(brevonsuitaura_3785_instances))->set_scale(((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.get(0)*0.01);
        brevonsuitspeedline2_3744_instances.clear_selection();
        for (ObjectIterator it(brevonsuitspeedline2_3744_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(1)+cos_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)get_instance(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(2)+80-sin_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.sub(1, 20);
        }
        brevonsuitflametrail_3742_instances.clear_selection();
        for (ObjectIterator it(brevonsuitflametrail_3742_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->set_y_scale(get_min(1, 2-((Active*)*it)->alterables->values.get(0)*0.05));
            ((Active*)*it)->set_y(((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(5));
        }
    }
    event_2043_72_end: ;
}
void Frames::event_func_15837()
{
    // event 2044_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2044_72_end;
        brevonsuitflametrail_3742_instances.clear_selection();
        for (ObjectIterator it(brevonsuitflametrail_3742_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (40))) { it.deselect(); continue; }
        }
        if (!brevonsuitflametrail_3742_instances.has_selection()) goto event_2044_72_end;
        for (ObjectIterator it(brevonsuitflametrail_3742_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2044_72_end: ;
}
void Frames::event_func_15838()
{
    // event 2045_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2045_72_end;
        brevonsuitflametrail_3742_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(brevonsuitflametrail_3742_instances, playercharactersensor_383_instances)) goto event_2045_72_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_2045_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_2045_72_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_2045_72_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 30);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
    }
    event_2045_72_end: ;
}
void Frames::event_func_15839()
{
    // event 2046_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2046_72_end;
        brevonsuitspin_3763_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(brevonsuitspin_3763_instances, playercharactersensor_383_instances)) goto event_2046_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (1))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto event_2046_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_2046_72_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_2046_72_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, ((Active*)get_instance(brevonsuithead_3770_instances, default_active_instance))->alterables->values.get(9));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(brevonsuithead_3770_instances, default_active_instance))->alterables->values.get(8));
    }
    event_2046_72_end: ;
}
void Frames::event_func_15840()
{
    // event 2047_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2047_72_end;
        brevonsuitspeedline2_3744_instances.clear_selection();
        for (ObjectIterator it(brevonsuitspeedline2_3744_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (96))) { it.deselect(); continue; }
        }
        if (!brevonsuitspeedline2_3744_instances.has_selection()) goto event_2047_72_end;
        for (ObjectIterator it(brevonsuitspeedline2_3744_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2047_72_end: ;
}
void Frames::event_func_15841()
{
    // event 2049_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2049_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) != (8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) != (9))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_2049_72_end;
        ((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.set(0, get_max(((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.get(0)-20, 10));
    }
    event_2049_72_end: ;
}
void Frames::event_func_15842()
{
    // event 2050_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2050_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) != (8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) != (9))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_2050_72_end;
        if (!((((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.get(0)) <= (10))) goto event_2050_72_end;
        ((Active*)get_instance(brevonsuitaura_3785_instances))->set_visible(false);
        {
            ((Active*)get_instance(brevonsuitaura_3785_instances))->set_global_position(-247, -141);
            pos_end_2050_72_0: ;
        }
    }
    event_2050_72_end: ;
}
void Frames::event_func_15843()
{
    // event 2051_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2051_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) != (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) != (6))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_2051_72_end;
        ((Active*)get_instance(bossenergypunch_3587_instances))->set_visible(false);
        {
            ((Active*)get_instance(bossenergypunch_3587_instances))->set_global_position(-102, -140);
            pos_end_2051_72_0: ;
        }
    }
    event_2051_72_end: ;
}
void Frames::event_func_15844()
{
    // event 2052_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2052_72_end;
        if (once_condition_2052_72) goto event_2052_72_end;
        once_condition_2052_72 = true;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(5, ((Active*)get_instance(brevon_3683_instances))->get_x());
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(6, ((Active*)get_instance(brevon_3683_instances))->get_y());
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(7, ((Active*)get_instance(brevon_3683_instances))->get_y());
        ((Active*)get_instance(brevoncrosshair7_3791_instances))->alterables->values.set(0, 0);
    }
    event_2052_72_end: ;
}
void Frames::event_func_15845()
{
    // event 2053_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2053_72_end;
        ((Active*)get_instance(brevon_3683_instances))->set_x(((Active*)get_instance(brevon_3683_instances))->alterables->values.get(5));
        ((Active*)get_instance(brevon_3683_instances))->set_y(((Active*)get_instance(brevon_3683_instances))->alterables->values.get(6));
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(5, get_max(((Active*)get_instance(brevonsuitwallleft_3778_instances))->get_x()+32, get_min(((Active*)get_instance(brevon_3683_instances))->alterables->values.get(5), ((Active*)get_instance(brevonsuitwallright_3779_instances))->get_x()-32)));
        brevonhitbox_3781_instances.clear_selection();
        for (ObjectIterator it(brevonhitbox_3781_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(brevon_3683_instances))->alterables->values.get(5));
            ((Active*)*it)->set_y(((Active*)get_instance(brevon_3683_instances))->alterables->values.get(6));
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, get_max(((Active*)get_instance(brevonsuitwallleft_3778_instances))->get_x()+12, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23), ((Active*)get_instance(brevonsuitwallright_3779_instances))->get_x()-12)));
    }
    event_2053_72_end: ;
}
void Frames::event_func_15846()
{
    // event 2054_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2054_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (0))) goto event_2054_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(12, ((Active*)get_instance(brevon_3683_instances))->alterables->values.get(12)+1+randrange(3));
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(5, get_max(frame_left()-60, get_min(((Active*)get_instance(brevon_3683_instances))->alterables->values.get(5), frame_right()+60)));
    }
    event_2054_72_end: ;
}
void Frames::event_func_15847()
{
    // event 2055_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2055_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) != (10))) goto event_2055_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) < (60))) goto event_2055_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) == (0))) goto event_2055_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()))) goto event_2055_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(8, -1);
        ((Active*)get_instance(brevon_3683_instances))->set_direction(16);
    }
    event_2055_72_end: ;
}
void Frames::event_func_15848()
{
    // event 2056_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2056_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) != (10))) goto event_2056_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) < (60))) goto event_2056_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) == (0))) goto event_2056_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) goto event_2056_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(8, 1);
        ((Active*)get_instance(brevon_3683_instances))->set_direction(0);
    }
    event_2056_72_end: ;
}
void Frames::event_func_15849()
{
    // event 2057_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2057_72_end;
        if (!(((Active*)get_instance(brevonweaponarm_3780_instances))->alterables->flags.is_off(6))) goto event_2057_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (9))) goto event_2057_72_end;
        if (!((((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.get(11)) > (0))) goto event_2057_72_end;
        ((Active*)get_instance(brevonweaponarm_3780_instances))->alterables->flags.enable(6);
    }
    event_2057_72_end: ;
}
void Frames::event_func_15850()
{
    // event 2058_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2058_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (0))) goto event_2058_72_end;
        if (!(((Active*)get_instance(brevonweaponarm_3780_instances))->alterables->flags.is_on(6))) goto event_2058_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(3, 14);
        media.play_id(SOUND_BREVON_CHUCKLE_369, -1, 1);
    }
    event_2058_72_end: ;
}
void Frames::event_func_15851()
{
    // event 2059_72
    bool or_result_2059_72 = false;
    bool or_temp_result_2059_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto or_event_2059_72_0_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (20))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto or_event_2059_72_0_end;
        if (!((((Active*)get_single(brevon_3683_instances, default_active_instance))->alterables->values.get(12)%math_helper%4) == (0))) goto or_event_2059_72_0_end;
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(7))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto or_event_2059_72_0_end;
        or_result_2059_72 = true;
        or_temp_result_2059_72_0 = true;
    }
    or_event_2059_72_0_end: ;
    brevon_3683_instances.clear_saved_selection();
    if (or_temp_result_2059_72_0) {
        brevon_3683_instances.save_selection();
    }
    // event 2059_72
    bool or_temp_result_2059_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto or_event_2059_72_1_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto or_event_2059_72_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (9))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_2059_72_1_end;
        brevonweaponarm_3780_instances.clear_selection();
        for (ObjectIterator it(brevonweaponarm_3780_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!brevonweaponarm_3780_instances.has_selection()) goto or_event_2059_72_1_end;
        or_result_2059_72 = true;
        or_temp_result_2059_72_1 = true;
        or_event_2059_72_1_end: ;
        brevonweaponarm_3780_instances.clear_saved_selection();
        playermovementvalues_245_instances.clear_saved_selection();
        if (or_temp_result_2059_72_1) {
            brevonweaponarm_3780_instances.save_selection();
            brevon_3683_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_2059_72) goto or_final_or_event_2059_72_1_end;
        brevon_3683_instances.empty_selection();
        brevonweaponarm_3780_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_2059_72_1) {
            brevonweaponarm_3780_instances.restore_selection();
        }
        if (or_temp_result_2059_72_0 || or_temp_result_2059_72_1) {
            brevon_3683_instances.restore_selection();
        }
        if (or_temp_result_2059_72_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 6);
            ((Active*)*it)->alterables->values.set(4, 0);
        }
        media.play(str_data_voices_88+global_strings->get(11)+str_br_brevon_strike1_ogg_253, 27-1);
    }
    or_final_or_event_2059_72_1_end: ;
}
void Frames::event_func_15852()
{
    // event 2060_72
    bool or_result_2060_72 = false;
    bool or_temp_result_2060_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto or_event_2060_72_0_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (20))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto or_event_2060_72_0_end;
        if (!((((Active*)get_single(brevon_3683_instances, default_active_instance))->alterables->values.get(12)%math_helper%4) == (1))) goto or_event_2060_72_0_end;
        or_result_2060_72 = true;
        or_temp_result_2060_72_0 = true;
    }
    or_event_2060_72_0_end: ;
    brevon_3683_instances.clear_saved_selection();
    if (or_temp_result_2060_72_0) {
        brevon_3683_instances.save_selection();
    }
    // event 2060_72
    bool or_temp_result_2060_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto or_event_2060_72_1_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (20))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto or_event_2060_72_1_end;
        if (!((((Active*)get_single(brevon_3683_instances, default_active_instance))->alterables->values.get(12)%math_helper%4) == (0))) goto or_event_2060_72_1_end;
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(7))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto or_event_2060_72_1_end;
        or_result_2060_72 = true;
        or_temp_result_2060_72_1 = true;
    }
    or_event_2060_72_1_end: ;
    if (or_temp_result_2060_72_1) {
        brevon_3683_instances.save_selection();
    }
    // event 2060_72
    bool or_temp_result_2060_72_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto or_event_2060_72_2_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (20))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto or_event_2060_72_2_end;
        if (!((((Active*)get_single(brevon_3683_instances, default_active_instance))->alterables->values.get(12)%math_helper%4) == (2))) goto or_event_2060_72_2_end;
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(7))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto or_event_2060_72_2_end;
        or_result_2060_72 = true;
        or_temp_result_2060_72_2 = true;
        or_event_2060_72_2_end: ;
        if (or_temp_result_2060_72_2) {
            brevon_3683_instances.save_selection();
        }
        if (!or_result_2060_72) goto or_final_or_event_2060_72_2_end;
        brevon_3683_instances.empty_selection();
        if (or_temp_result_2060_72_0 || or_temp_result_2060_72_1 || or_temp_result_2060_72_2) {
            brevon_3683_instances.restore_selection();
        }
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 3);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.set(11, 5);
        }
    }
    or_final_or_event_2060_72_2_end: ;
}
void Frames::event_func_15853()
{
    // event 2061_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2061_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (0))) goto event_2061_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(12)) < (20))) goto event_2061_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(12)%math_helper%4) == (2))) goto event_2061_72_end;
        if (!(((Active*)get_instance(brevon_3683_instances))->alterables->flags.is_off(7))) goto event_2061_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(3, 7);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(4, 0);
        media.play(str_data_voices_88+global_strings->get(11)+str_br_brevon_strike2_ogg_252, 27-1);
    }
    event_2061_72_end: ;
}
void Frames::event_func_15854()
{
    // event 2062_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2062_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (0))) goto event_2062_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(12)) < (20))) goto event_2062_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(12)%math_helper%4) == (3))) goto event_2062_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(3, 3);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(11, 15);
    }
    event_2062_72_end: ;
}
void Frames::event_func_15855()
{
    // event 2063_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2063_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (0))) goto event_2063_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(12)) >= (20))) goto event_2063_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(3, 11);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(4, 0);
    }
    event_2063_72_end: ;
}
void Frames::event_func_15856()
{
    // event 2064_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2064_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) > (0))) goto event_2064_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) < (60))) goto event_2064_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.add(4, 1);
    }
    event_2064_72_end: ;
}
void Frames::event_func_15857()
{
    // event 2065_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2065_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (6))) goto event_2065_72_end;
        ((Active*)get_instance(brevon_3683_instances))->force_animation(5);
        ((Active*)get_instance(brevon_3683_instances))->set_direction((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8)-1)*8);
        ((Active*)get_instance(brevon_3683_instances))->force_frame(48);
    }
    event_2065_72_end: ;
}
void Frames::event_func_15858()
{
    // event 2066_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2066_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (6))) goto event_2066_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) > (20))) goto event_2066_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(brevon_3683_instances))->restore_frame();
    }
    event_2066_72_end: ;
}
void Frames::event_func_15859()
{
    // event 2067_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2067_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (1))) goto event_2067_72_end;
        ((Active*)get_instance(brevon_3683_instances))->force_animation(9);
        ((Active*)get_instance(brevon_3683_instances))->set_direction((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8)-1)*8+1);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.add(5, ((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8)*15);
    }
    event_2067_72_end: ;
}
void Frames::event_func_15860()
{
    // event 2068_72
    bool or_result_2068_72 = false;
    bool or_temp_result_2068_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto or_event_2068_72_0_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (80))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto or_event_2068_72_0_end;
        or_result_2068_72 = true;
        or_temp_result_2068_72_0 = true;
    }
    or_event_2068_72_0_end: ;
    brevon_3683_instances.clear_saved_selection();
    if (or_temp_result_2068_72_0) {
        brevon_3683_instances.save_selection();
    }
    // event 2068_72
    bool or_temp_result_2068_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto or_event_2068_72_1_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()-80))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto or_event_2068_72_1_end;
        or_result_2068_72 = true;
        or_temp_result_2068_72_1 = true;
    }
    or_event_2068_72_1_end: ;
    if (or_temp_result_2068_72_1) {
        brevon_3683_instances.save_selection();
    }
    // event 2068_72
    bool or_temp_result_2068_72_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto or_event_2068_72_2_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()+80))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto or_event_2068_72_2_end;
        or_result_2068_72 = true;
        or_temp_result_2068_72_2 = true;
        or_event_2068_72_2_end: ;
        if (or_temp_result_2068_72_2) {
            brevon_3683_instances.save_selection();
        }
        if (!or_result_2068_72) goto or_final_or_event_2068_72_2_end;
        brevon_3683_instances.empty_selection();
        if (or_temp_result_2068_72_0 || or_temp_result_2068_72_1 || or_temp_result_2068_72_2) {
            brevon_3683_instances.restore_selection();
        }
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 2);
            ((Active*)*it)->force_animation(12);
            ((Active*)*it)->force_frame(4);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.set(9, ((Active*)*it)->alterables->values.get(8)*10);
        }
        media.play_id(SOUND_BREVON_BLADE_349, -1, 1);
        brevonhitbox_3781_instances.clear_selection();
        for (ObjectIterator it(brevonhitbox_3781_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
    }
    or_final_or_event_2068_72_2_end: ;
}
void Frames::event_func_15861()
{
    // event 2069_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2069_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->flags.disable(3);
    }
    event_2069_72_end: ;
}
void Frames::event_func_15862()
{
    // event 2070_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2070_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (2))) goto event_2070_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8)) == (1))) goto event_2070_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_2070_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(brevon_3683_instances))->alterables->values.get(5)))) goto event_2070_72_end;
        shieldinstashield_359_instances.clear_selection();
        brevon_3683_instances.clear_selection();
        if (!check_overlap(shieldinstashield_359_instances, brevon_3683_instances)) goto event_2070_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->flags.enable(3);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_max(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 4));
    }
    event_2070_72_end: ;
}
void Frames::event_func_15863()
{
    // event 2071_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2071_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (2))) goto event_2071_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8)) == (-1))) goto event_2071_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (1))) goto event_2071_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(brevon_3683_instances))->alterables->values.get(5)))) goto event_2071_72_end;
        shieldinstashield_359_instances.clear_selection();
        brevon_3683_instances.clear_selection();
        if (!check_overlap(shieldinstashield_359_instances, brevon_3683_instances)) goto event_2071_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->flags.enable(3);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_max(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 4));
    }
    event_2071_72_end: ;
}
void Frames::event_func_15864()
{
    // event 2072_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2072_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (2))) goto event_2072_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8)) == (1))) goto event_2072_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_2072_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(brevon_3683_instances))->alterables->values.get(5)))) goto event_2072_72_end;
        playerreflect_447_instances.clear_selection();
        brevon_3683_instances.clear_selection();
        if (!check_overlap(playerreflect_447_instances, brevon_3683_instances)) goto event_2072_72_end;
        if (!(((Active*)get_instance(playerreflect_447_instances))->flags & VISIBLE)) goto event_2072_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->flags.enable(3);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_max(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 4));
    }
    event_2072_72_end: ;
}
void Frames::event_func_15865()
{
    // event 2073_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2073_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (2))) goto event_2073_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8)) == (-1))) goto event_2073_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (1))) goto event_2073_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(brevon_3683_instances))->alterables->values.get(5)))) goto event_2073_72_end;
        playerreflect_447_instances.clear_selection();
        brevon_3683_instances.clear_selection();
        if (!check_overlap(playerreflect_447_instances, brevon_3683_instances)) goto event_2073_72_end;
        if (!(((Active*)get_instance(playerreflect_447_instances))->flags & VISIBLE)) goto event_2073_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->flags.enable(3);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_max(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 4));
    }
    event_2073_72_end: ;
}
void Frames::event_func_15866()
{
    // event 2074_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2074_72_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_2074_72_end;
        if (!(((Active*)get_instance(brevon_3683_instances))->alterables->flags.is_on(3))) goto event_2074_72_end;
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(10, 3);
    }
    event_2074_72_end: ;
}
void Frames::event_func_15867()
{
    // event 2075_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2075_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (2))) goto event_2075_72_end;
        brevon_3683_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(brevon_3683_instances, playercharactersensor_383_instances)) goto event_2075_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8)) == (1))) goto event_2075_72_end;
        if (!(((Active*)get_instance(brevon_3683_instances))->alterables->flags.is_off(3))) goto event_2075_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->get_x()) < (((Active*)get_instance(playercharactersensor_383_instances))->get_x()))) goto event_2075_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_2075_72_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_2075_72_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 30);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 8));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 8);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
    }
    event_2075_72_end: ;
}
void Frames::event_func_15868()
{
    // event 2076_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2076_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (2))) goto event_2076_72_end;
        brevon_3683_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(brevon_3683_instances, playercharactersensor_383_instances)) goto event_2076_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8)) == (-1))) goto event_2076_72_end;
        if (!(((Active*)get_instance(brevon_3683_instances))->alterables->flags.is_off(3))) goto event_2076_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->get_x()) > (((Active*)get_instance(playercharactersensor_383_instances))->get_x()))) goto event_2076_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_2076_72_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_2076_72_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 8));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -8);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 30);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
    }
    event_2076_72_end: ;
}
void Frames::event_func_15869()
{
    // event 2077_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2077_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (2))) goto event_2077_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (9))) goto event_2077_72_end;
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
    }
    event_2077_72_end: ;
}
void Frames::event_func_15870()
{
    // event 2078_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2078_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (2))) goto event_2078_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.add(5, ((Active*)get_instance(brevon_3683_instances))->alterables->values.get(9));
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(9, ((Active*)get_instance(brevon_3683_instances))->alterables->values.get(9)*0.8);
    }
    event_2078_72_end: ;
}
void Frames::event_func_15871()
{
    // event 2079_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2079_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (2))) goto event_2079_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) > (15))) goto event_2079_72_end;
        ((Active*)get_instance(brevon_3683_instances))->force_animation(0);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(4, 0);
        brevonhitbox_3781_instances.clear_selection();
        for (ObjectIterator it(brevonhitbox_3781_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(5);
        }
    }
    event_2079_72_end: ;
}
void Frames::event_func_15872()
{
    // event 2080_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2080_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (3))) goto event_2080_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) < (12))) goto event_2080_72_end;
        ((Active*)get_instance(brevon_3683_instances))->force_animation(10);
    }
    event_2080_72_end: ;
}
void Frames::event_func_15873()
{
    // event 2081_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2081_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (3))) goto event_2081_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) == (12))) goto event_2081_72_end;
        ((Active*)get_instance(brevon_3683_instances))->force_animation(7);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(9, ((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8)*10);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(10, -12);
        FrameObject * single_instance_2081_72_0; single_instance_2081_72_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(brevon_3683_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2081_72_0 == NULL)
                    single_instance_2081_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2081_72_0))->set_y_scale(0.5);
        media.play_id(SOUND_JUMP_LO_232, -1, 1);
    }
    event_2081_72_end: ;
}
void Frames::event_func_15874()
{
    // event 2082_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2082_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (3))) goto event_2082_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) > (12))) goto event_2082_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.add(10, 0.6);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.add(5, ((Active*)get_instance(brevon_3683_instances))->alterables->values.get(9));
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.add(6, ((Active*)get_instance(brevon_3683_instances))->alterables->values.get(10));
    }
    event_2082_72_end: ;
}
void Frames::event_func_15875()
{
    // event 2083_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2083_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (3))) goto event_2083_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) < (12))) goto event_2083_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->get_x()) > (((Active*)get_instance(brevonsuitwallright_3779_instances))->get_x()-90))) goto event_2083_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(8, -1);
        ((Active*)get_instance(brevon_3683_instances))->set_direction(16);
    }
    event_2083_72_end: ;
}
void Frames::event_func_15876()
{
    // event 2084_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2084_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (3))) goto event_2084_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) < (12))) goto event_2084_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->get_x()) < (((Active*)get_instance(brevonsuitwallleft_3778_instances))->get_x()+90))) goto event_2084_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(8, 1);
        ((Active*)get_instance(brevon_3683_instances))->set_direction(0);
    }
    event_2084_72_end: ;
}
void Frames::event_func_15877()
{
    // event 2085_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2085_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (3))) goto event_2085_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) > (12))) goto event_2085_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(10)) >= (0))) goto event_2085_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(11)) > (0))) goto event_2085_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(3, ((Active*)get_instance(brevon_3683_instances))->alterables->values.get(11));
        ((Active*)get_instance(brevon_3683_instances))->alterables->flags.disable(1);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(11, 0);
    }
    event_2085_72_end: ;
}
void Frames::event_func_15878()
{
    // event 2086_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2086_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (3))) goto event_2086_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) > (15))) goto event_2086_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(6)) >= (((Active*)get_instance(brevon_3683_instances))->alterables->values.get(7)))) goto event_2086_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(6, ((Active*)get_instance(brevon_3683_instances))->alterables->values.get(7));
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(9, 0);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(10, 0);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(brevon_3683_instances))->force_animation(10);
        media.play_id(SOUND_BREVON_STEP_2_222, -1, 1);
    }
    event_2086_72_end: ;
}
void Frames::event_func_15879()
{
    // event 2087_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2087_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (4))) goto event_2087_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) > (20))) goto event_2087_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(4, 0);
    }
    event_2087_72_end: ;
}
void Frames::event_func_15880()
{
    // event 2088_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2088_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->flags.disable(7);
    }
    event_2088_72_end: ;
}
void Frames::event_func_15881()
{
    // event 2089_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2089_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14)) > (90))) goto event_2089_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14)) < (270))) goto event_2089_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->flags.enable(7);
    }
    event_2089_72_end: ;
}
void Frames::event_func_15882()
{
    // event 2090_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2090_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (5))) goto event_2090_72_end;
        ((Active*)get_instance(brevon_3683_instances))->force_animation(14);
        ((Active*)get_instance(brevon_3683_instances))->set_direction((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8)-1)*8);
    }
    event_2090_72_end: ;
}
void Frames::event_func_15883()
{
    // event 2091_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2091_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (5))) goto event_2091_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) >= (7))) goto event_2091_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) <= (9))) goto event_2091_72_end;
        if (!(((Active*)get_instance(brevon_3683_instances))->alterables->flags.is_off(7))) goto event_2091_72_end;
        FrameObject * single_instance_2091_72_0; single_instance_2091_72_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(brevon_3683_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_brevonproxymine_3749(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_2091_72_0 == NULL)
                    single_instance_2091_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2091_72_0))->alterables->values.set(4, ((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8)*(((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)-6)*4-((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8)*3);
        ((Active*)((Active*)single_instance_2091_72_0))->alterables->values.set(5, 3-(((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)-7));
    }
    event_2091_72_end: ;
}
void Frames::event_func_15884()
{
    // event 2092_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2092_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (5))) goto event_2092_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) >= (7))) goto event_2092_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) <= (9))) goto event_2092_72_end;
        if (!(((Active*)get_instance(brevon_3683_instances))->alterables->flags.is_on(7))) goto event_2092_72_end;
        FrameObject * single_instance_2092_72_0; single_instance_2092_72_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(brevon_3683_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_brevonproxymine_3749(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_2092_72_0 == NULL)
                    single_instance_2092_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2092_72_0))->alterables->values.set(4, ((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8)*(((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)-6)*4-((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8)*3-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1));
        ((Active*)((Active*)single_instance_2092_72_0))->alterables->values.set(5, -3+(((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)-7));
        ((Active*)((Active*)single_instance_2092_72_0))->alterables->values.set(7, -1);
        ((Active*)((Active*)single_instance_2092_72_0))->set_angle(180, 0);
    }
    event_2092_72_end: ;
}
void Frames::event_func_15885()
{
    // event 2093_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2093_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (5))) goto event_2093_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) > (25))) goto event_2093_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(3, 3);
        ((Active*)get_instance(brevon_3683_instances))->force_animation(7);
    }
    event_2093_72_end: ;
}
void Frames::event_func_15886()
{
    // event 2094_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2094_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (7))) goto event_2094_72_end;
        ((Active*)get_instance(brevon_3683_instances))->force_animation(10);
        ((Active*)get_instance(brevon_3683_instances))->set_direction((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8)-1)*10);
        ((Active*)get_instance(brevon_3683_instances))->force_frame(48);
    }
    event_2094_72_end: ;
}
void Frames::event_func_15887()
{
    // event 2095_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2095_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (7))) goto event_2095_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) > (10))) goto event_2095_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(3, 8);
        ((Active*)get_instance(brevon_3683_instances))->restore_frame();
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(9, cos_deg(get_angle_int(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-((Active*)get_instance(brevon_3683_instances))->alterables->values.get(5), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+32-((Active*)get_instance(brevon_3683_instances))->alterables->values.get(6)))*12);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(10, sin_deg(get_angle_int(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-((Active*)get_instance(brevon_3683_instances))->alterables->values.get(5), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+32-((Active*)get_instance(brevon_3683_instances))->alterables->values.get(6)))*-12);
    }
    event_2095_72_end: ;
}
void Frames::event_func_15888()
{
    // event 2096_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2096_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (8))) goto event_2096_72_end;
        ((Active*)get_instance(brevon_3683_instances))->force_animation(9);
        ((Active*)get_instance(brevon_3683_instances))->set_direction((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8)-1)*8);
        ((Active*)get_instance(brevon_3683_instances))->force_frame(0);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.add(5, ((Active*)get_instance(brevon_3683_instances))->alterables->values.get(9));
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.add(6, ((Active*)get_instance(brevon_3683_instances))->alterables->values.get(10));
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(6, get_min(((Active*)get_instance(brevon_3683_instances))->alterables->values.get(6), ((Active*)get_instance(brevon_3683_instances))->alterables->values.get(7)));
    }
    event_2096_72_end: ;
}
void Frames::event_func_15889()
{
    // event 2097_72
    bool or_result_2097_72 = false;
    bool or_temp_result_2097_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto or_event_2097_72_0_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (40))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto or_event_2097_72_0_end;
        or_result_2097_72 = true;
        or_temp_result_2097_72_0 = true;
    }
    or_event_2097_72_0_end: ;
    brevon_3683_instances.clear_saved_selection();
    if (or_temp_result_2097_72_0) {
        brevon_3683_instances.save_selection();
    }
    // event 2097_72
    bool or_temp_result_2097_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto or_event_2097_72_1_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()-60+((Active*)get_instance(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_y()+80))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto or_event_2097_72_1_end;
        or_result_2097_72 = true;
        or_temp_result_2097_72_1 = true;
    }
    or_event_2097_72_1_end: ;
    if (or_temp_result_2097_72_1) {
        brevon_3683_instances.save_selection();
    }
    // event 2097_72
    bool or_temp_result_2097_72_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto or_event_2097_72_2_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()+60+((Active*)get_instance(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_y()+80))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto or_event_2097_72_2_end;
        or_result_2097_72 = true;
        or_temp_result_2097_72_2 = true;
    }
    or_event_2097_72_2_end: ;
    if (or_temp_result_2097_72_2) {
        brevon_3683_instances.save_selection();
    }
    // event 2097_72
    bool or_temp_result_2097_72_3 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto or_event_2097_72_3_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (60))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto or_event_2097_72_3_end;
        or_result_2097_72 = true;
        or_temp_result_2097_72_3 = true;
        or_event_2097_72_3_end: ;
        if (or_temp_result_2097_72_3) {
            brevon_3683_instances.save_selection();
        }
        if (!or_result_2097_72) goto or_final_or_event_2097_72_3_end;
        brevon_3683_instances.empty_selection();
        if (or_temp_result_2097_72_0 || or_temp_result_2097_72_1 || or_temp_result_2097_72_2 || or_temp_result_2097_72_3) {
            brevon_3683_instances.restore_selection();
        }
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 9);
            ((Active*)*it)->force_frame(4);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.set(10, 5);
        }
    }
    or_final_or_event_2097_72_3_end: ;
}
void Frames::event_func_15890()
{
    // event 2098_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2098_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (9))) goto event_2098_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.add(5, ((Active*)get_instance(brevon_3683_instances))->alterables->values.get(9));
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(9, ((Active*)get_instance(brevon_3683_instances))->alterables->values.get(9)*0.8);
    }
    event_2098_72_end: ;
}
void Frames::event_func_15891()
{
    // event 2099_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2099_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (9))) goto event_2099_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) > (15))) goto event_2099_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(6)) >= (((Active*)get_instance(brevon_3683_instances))->alterables->values.get(7)))) goto event_2099_72_end;
        ((Active*)get_instance(brevon_3683_instances))->force_animation(0);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(3, 0);
    }
    event_2099_72_end: ;
}
void Frames::event_func_15892()
{
    // event 2100_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2100_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (9))) goto event_2100_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) > (4))) goto event_2100_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(6)) < (((Active*)get_instance(brevon_3683_instances))->alterables->values.get(7)))) goto event_2100_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(3, 3);
        ((Active*)get_instance(brevon_3683_instances))->force_animation(7);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(4, 16);
    }
    event_2100_72_end: ;
}
void Frames::event_func_15893()
{
    // event 2101_72
    bool or_result_2101_72 = false;
    bool or_temp_result_2101_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto or_event_2101_72_0_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto or_event_2101_72_0_end;
        player_389_instances.clear_selection();
        for (ObjectIterator it(player_389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_single(brevon_3683_instances, default_active_instance))->get_x()-20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_single(brevon_3683_instances, default_active_instance))->get_x()+60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_single(brevon_3683_instances, default_active_instance))->get_y()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_single(brevon_3683_instances, default_active_instance))->get_y()-88))) { it.deselect(); continue; }
        }
        if (!player_389_instances.has_selection()) goto or_event_2101_72_0_end;
        or_result_2101_72 = true;
        or_temp_result_2101_72_0 = true;
    }
    or_event_2101_72_0_end: ;
    brevon_3683_instances.clear_saved_selection();
    player_389_instances.clear_saved_selection();
    if (or_temp_result_2101_72_0) {
        brevon_3683_instances.save_selection();
        player_389_instances.save_selection();
    }
    // event 2101_72
    bool or_temp_result_2101_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto or_event_2101_72_1_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (-1))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto or_event_2101_72_1_end;
        player_389_instances.clear_selection();
        for (ObjectIterator it(player_389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_single(brevon_3683_instances, default_active_instance))->get_x()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_single(brevon_3683_instances, default_active_instance))->get_x()-60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_single(brevon_3683_instances, default_active_instance))->get_y()-20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_single(brevon_3683_instances, default_active_instance))->get_y()-88))) { it.deselect(); continue; }
        }
        if (!player_389_instances.has_selection()) goto or_event_2101_72_1_end;
        or_result_2101_72 = true;
        or_temp_result_2101_72_1 = true;
    }
    or_event_2101_72_1_end: ;
    if (or_temp_result_2101_72_1) {
        brevon_3683_instances.save_selection();
        player_389_instances.save_selection();
    }
    // event 2101_72
    bool or_temp_result_2101_72_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto or_event_2101_72_2_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (9))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto or_event_2101_72_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (5))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_2101_72_2_end;
        player_389_instances.clear_selection();
        if (!check_overlap(brevon_3683_instances, player_389_instances)) goto or_event_2101_72_2_end;
        or_result_2101_72 = true;
        or_temp_result_2101_72_2 = true;
        or_event_2101_72_2_end: ;
        playermovementvalues_245_instances.clear_saved_selection();
        if (or_temp_result_2101_72_2) {
            player_389_instances.save_selection();
            brevon_3683_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_2101_72) goto or_final_or_event_2101_72_2_end;
        brevon_3683_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        player_389_instances.empty_selection();
        if (or_temp_result_2101_72_2) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_2101_72_0 || or_temp_result_2101_72_1 || or_temp_result_2101_72_2) {
            brevon_3683_instances.restore_selection();
        }
        if (or_temp_result_2101_72_0 || or_temp_result_2101_72_1 || or_temp_result_2101_72_2) {
            player_389_instances.restore_selection();
        }
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.set(3, 10);
            ((Active*)*it)->force_animation(16);
            ((Active*)*it)->alterables->values.set(8, 0-((Active*)*it)->alterables->values.get(8));
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+16);
        }
        guilifebasemeter_125_instances.clear_selection();
        for (ObjectIterator it(guilifebasemeter_125_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 5);
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 96);
        }
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    or_final_or_event_2101_72_2_end: ;
}
void Frames::event_func_15894()
{
    // event 2102_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2102_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (10))) goto event_2102_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->get_x()) > (((Active*)get_instance(brevonsuitwallright_3779_instances))->get_x()-90))) goto event_2102_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(8, -1);
        ((Active*)get_instance(brevon_3683_instances))->set_direction(16);
    }
    event_2102_72_end: ;
}
void Frames::event_func_15895()
{
    // event 2103_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2103_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (10))) goto event_2103_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->get_x()) < (((Active*)get_instance(brevonsuitwallleft_3778_instances))->get_x()+90))) goto event_2103_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(8, 1);
        ((Active*)get_instance(brevon_3683_instances))->set_direction(0);
    }
    event_2103_72_end: ;
}
void Frames::event_func_15896()
{
    // event 2104_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2104_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (10))) goto event_2104_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (96))) goto event_2104_72_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 9);
    }
    event_2104_72_end: ;
}
void Frames::event_func_15897()
{
    // event 2105_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2105_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) != (10))) goto event_2105_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (96))) goto event_2105_72_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
    }
    event_2105_72_end: ;
}
void Frames::event_func_15898()
{
    // event 2106_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2106_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (10))) goto event_2106_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) < (12))) goto event_2106_72_end;
        ((Active*)get_instance(player_389_instances))->set_x(((Active*)get_instance(brevon_3683_instances))->get_x()+cos_deg(((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)*15)*-80*((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8));
        ((Active*)get_instance(player_389_instances))->set_y(((Active*)get_instance(brevon_3683_instances))->get_y()-sin_deg(((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)*15)*60-30);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(brevon_3683_instances))->get_x()+cos_deg(((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)*15)*-80*((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(brevon_3683_instances))->get_y()-sin_deg(((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)*15)*60-30);
    }
    event_2106_72_end: ;
}
void Frames::event_func_15899()
{
    // event 2107_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2107_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (10))) goto event_2107_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) == (12))) goto event_2107_72_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8)*15);
        ((Active*)get_instance(brevonweaponarm_3780_instances))->alterables->values.set(1, 8);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 0);
    }
    event_2107_72_end: ;
}
void Frames::event_func_15900()
{
    // event 2108_72
    bool or_result_2108_72 = false;
    bool or_temp_result_2108_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto or_event_2108_72_0_end;
        brevonweaponarm_3780_instances.clear_selection();
        for (ObjectIterator it(brevonweaponarm_3780_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonweaponarm_3780_instances.has_selection()) goto or_event_2108_72_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(23)) < (((Active*)get_instance(brevonsuitwallleft_3778_instances, default_active_instance))->get_x()+16))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_2108_72_0_end;
        or_result_2108_72 = true;
        or_temp_result_2108_72_0 = true;
    }
    or_event_2108_72_0_end: ;
    brevonweaponarm_3780_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_2108_72_0) {
        brevonweaponarm_3780_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 2108_72
    bool or_temp_result_2108_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto or_event_2108_72_1_end;
        brevonweaponarm_3780_instances.clear_selection();
        for (ObjectIterator it(brevonweaponarm_3780_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonweaponarm_3780_instances.has_selection()) goto or_event_2108_72_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(23)) > (((Active*)get_instance(brevonsuitwallright_3779_instances, default_active_instance))->get_x()-16))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_2108_72_1_end;
        or_result_2108_72 = true;
        or_temp_result_2108_72_1 = true;
        or_event_2108_72_1_end: ;
        if (or_temp_result_2108_72_1) {
            brevonweaponarm_3780_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_2108_72) goto or_final_or_event_2108_72_1_end;
        brevonweaponarm_3780_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_2108_72_0 || or_temp_result_2108_72_1) {
            brevonweaponarm_3780_instances.restore_selection();
        }
        if (or_temp_result_2108_72_0 || or_temp_result_2108_72_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(brevonweaponarm_3780_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    or_final_or_event_2108_72_1_end: ;
}
void Frames::event_func_15901()
{
    // event 2109_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2109_72_end;
        if (!((((Active*)get_instance(brevonweaponarm_3780_instances))->alterables->values.get(1)) > (0))) goto event_2109_72_end;
        ((Active*)get_instance(brevonweaponarm_3780_instances))->alterables->values.sub(1, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8)*15);
        media.stop_sample(SOUND_COMMON_PLAYERHIT_2_25);
    }
    event_2109_72_end: ;
}
void Frames::event_func_15902()
{
    // event 2110_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2110_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (10))) goto event_2110_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) > (25))) goto event_2110_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(6)) >= (((Active*)get_instance(brevon_3683_instances))->alterables->values.get(7)))) goto event_2110_72_end;
        ((Active*)get_instance(brevon_3683_instances))->force_animation(0);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(player_389_instances))->set_y(((Active*)get_instance(brevon_3683_instances))->alterables->values.get(7)-16);
    }
    event_2110_72_end: ;
}
void Frames::event_func_15903()
{
    // event 2111_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2111_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (10))) goto event_2111_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) > (25))) goto event_2111_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(6)) < (((Active*)get_instance(brevon_3683_instances))->alterables->values.get(7)))) goto event_2111_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(3, 3);
        ((Active*)get_instance(brevon_3683_instances))->force_animation(7);
    }
    event_2111_72_end: ;
}
void Frames::event_func_15904()
{
    // event 2112_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2112_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (11))) goto event_2112_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) < (15))) goto event_2112_72_end;
        ((Active*)get_instance(brevon_3683_instances))->force_animation(13);
        ((Active*)get_instance(brevon_3683_instances))->force_frame(0);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(9, 0);
    }
    event_2112_72_end: ;
}
void Frames::event_func_15905()
{
    // event 2113_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2113_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (11))) goto event_2113_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) == (15))) goto event_2113_72_end;
        ((Active*)get_instance(brevon_3683_instances))->force_frame(2);
        ((Active*)get_instance(brevon_3683_instances))->restore_frame();
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(10, -6);
        media.play_id(SOUND_BREVON_JUMP_392, -1, 1);
    }
    event_2113_72_end: ;
}
void Frames::event_func_15906()
{
    // event 2114_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2114_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (11))) goto event_2114_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) > (15))) goto event_2114_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.add(6, ((Active*)get_instance(brevon_3683_instances))->alterables->values.get(10));
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(10, get_min(((Active*)get_instance(brevon_3683_instances))->alterables->values.get(10)+0.2, 0));
    }
    event_2114_72_end: ;
}
void Frames::event_func_15907()
{
    // event 2115_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2115_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (11))) goto event_2115_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) > (15))) goto event_2115_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(10)) >= (0))) goto event_2115_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(3, 12);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(10, -15);
    }
    event_2115_72_end: ;
}
void Frames::event_func_15908()
{
    // event 2116_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2116_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (12))) goto event_2116_72_end;
        ((Active*)get_instance(brevon_3683_instances))->force_animation(13);
        ((Active*)get_instance(brevon_3683_instances))->set_direction(1);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.add(5, ((Active*)get_instance(brevon_3683_instances))->alterables->values.get(9));
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.add(6, ((Active*)get_instance(brevon_3683_instances))->alterables->values.get(10));
        brevonhitbox_3781_instances.clear_selection();
        for (ObjectIterator it(brevonhitbox_3781_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
    }
    event_2116_72_end: ;
}
void Frames::event_func_15909()
{
    // event 2117_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2117_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (12))) goto event_2117_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)%math_helper%2) == (0))) goto event_2117_72_end;
        FrameObject * single_instance_2117_72_0; single_instance_2117_72_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(brevon_3683_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_brevonwingbeam2_3748(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2117_72_0 == NULL)
                    single_instance_2117_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2117_72_0))->move_back();
        ((Active*)((Active*)single_instance_2117_72_0))->alterables->values.set(1, get_max(-1, get_min(((Active*)get_instance(brevon_3683_instances))->alterables->values.get(10), 1)));
        ((Active*)((Active*)single_instance_2117_72_0))->set_angle(((Active*)get_instance(brevon_3683_instances))->get_angle(), 0);
        ((Active*)((Active*)single_instance_2117_72_0))->alterables->values.set(0, get_max(-1, get_min(((Active*)get_instance(brevon_3683_instances))->alterables->values.get(9), 1)));
    }
    event_2117_72_end: ;
}
void Frames::event_func_15910()
{
    // event 2118_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2118_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (12))) goto event_2118_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(6)) < (((Active*)get_instance(brevon_3683_instances))->alterables->values.get(7)-500))) goto event_2118_72_end;
        ((Active*)get_instance(brevon_3683_instances))->set_angle(180+(((Active*)get_instance(brevon_3683_instances))->alterables->flags.get(2)*2-1)*45, 0);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(10, 13);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(5, ((Active*)get_instance(player_389_instances))->get_x()+(((Active*)get_instance(brevon_3683_instances))->alterables->flags.get(2)*2-1)*-200);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(9, (((Active*)get_instance(brevon_3683_instances))->alterables->flags.get(2)*2-1)*13);
        ((Active*)get_instance(brevon_3683_instances))->alterables->flags.toggle(2);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.add(11, 1);
        media.play_id(SOUND_BREVON_JUMP_392, -1, 1);
    }
    event_2118_72_end: ;
}
void Frames::event_func_15911()
{
    // event 2119_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2119_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (12))) goto event_2119_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(6)) > (((Active*)get_instance(brevon_3683_instances))->alterables->values.get(7)+300))) goto event_2119_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(11)) < (2))) goto event_2119_72_end;
        ((Active*)get_instance(brevon_3683_instances))->set_angle(0, 0);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(10, -15);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(5, ((Active*)get_instance(player_389_instances))->get_x());
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(9, 0);
        media.play_id(SOUND_BREVON_JUMP_392, -1, 1);
    }
    event_2119_72_end: ;
}
void Frames::event_func_15912()
{
    // event 2120_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2120_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (12))) goto event_2120_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(6)) > (((Active*)get_instance(brevon_3683_instances))->alterables->values.get(7)+400))) goto event_2120_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(11)) >= (2))) goto event_2120_72_end;
        ((Active*)get_instance(brevon_3683_instances))->set_angle(0, 0);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(10, -15);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(5, ((Active*)get_instance(player_389_instances))->get_x());
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(9, 0);
        ((Active*)get_instance(brevon_3683_instances))->set_direction(0);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(3, 13);
        ((Active*)get_instance(brevon_3683_instances))->force_frame(4);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(11, 0);
        media.play_id(SOUND_BREVON_JUMP_392, -1, 1);
        brevonhitbox_3781_instances.clear_selection();
        for (ObjectIterator it(brevonhitbox_3781_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(5);
        }
    }
    event_2120_72_end: ;
}
void Frames::event_func_15913()
{
    // event 2121_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2121_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (13))) goto event_2121_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) < (900))) goto event_2121_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.add(6, ((Active*)get_instance(brevon_3683_instances))->alterables->values.get(10));
    }
    event_2121_72_end: ;
}
void Frames::event_func_15914()
{
    // event 2122_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2122_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (13))) goto event_2122_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(6)) < (((Active*)get_instance(brevon_3683_instances))->alterables->values.get(7)))) goto event_2122_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) < (900))) goto event_2122_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.add(10, 0.8);
    }
    event_2122_72_end: ;
}
void Frames::event_func_15915()
{
    // event 2123_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2123_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (13))) goto event_2123_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(10)) > (0))) goto event_2123_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(6)) >= (((Active*)get_instance(brevon_3683_instances))->alterables->values.get(7)))) goto event_2123_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) < (900))) goto event_2123_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(6, ((Active*)get_instance(brevon_3683_instances))->alterables->values.get(7));
        ((Active*)get_instance(brevon_3683_instances))->force_frame(0);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(4, 900);
        media.play_id(SOUND_BREVON_STEP_2_222, -1, 1);
    }
    event_2123_72_end: ;
}
void Frames::event_func_15916()
{
    // event 2124_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2124_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (13))) goto event_2124_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) > (915))) goto event_2124_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(brevon_3683_instances))->restore_frame();
        ((Active*)get_instance(brevon_3683_instances))->force_animation(0);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(8, 1);
    }
    event_2124_72_end: ;
}
void Frames::event_func_15917()
{
    // event 2125_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2125_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (14))) goto event_2125_72_end;
        ((Active*)get_instance(brevon_3683_instances))->force_animation(5);
        ((Active*)get_instance(brevon_3683_instances))->set_direction((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8)-1)*8+1);
    }
    event_2125_72_end: ;
}
void Frames::event_func_15918()
{
    // event 2126_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2126_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) != (15))) goto event_2126_72_end;
        ((Active*)get_instance(brevonweaponarm_3780_instances))->set_visible(false);
    }
    event_2126_72_end: ;
}
void Frames::event_func_15919()
{
    // event 2127_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2127_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (15))) goto event_2127_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) < (12))) goto event_2127_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()))) goto event_2127_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(8, -1);
        ((Active*)get_instance(brevon_3683_instances))->set_direction(16);
    }
    event_2127_72_end: ;
}
void Frames::event_func_15920()
{
    // event 2128_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2128_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (15))) goto event_2128_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) < (12))) goto event_2128_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) goto event_2128_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(8, 1);
        ((Active*)get_instance(brevon_3683_instances))->set_direction(0);
    }
    event_2128_72_end: ;
}
void Frames::event_func_15921()
{
    // event 2129_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2129_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (15))) goto event_2129_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) < (12))) goto event_2129_72_end;
        {
            FrameObject * parent = ((Active*)get_instance(brevon_3683_instances));
            if (parent == NULL) goto pos_end_2129_72_0;
            ((Active*)get_instance(brevonweaponarm_3780_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_2129_72_0: ;
        }
        ((Active*)get_instance(brevonweaponarm_3780_instances))->move_back(((Active*)get_instance(brevon_3683_instances)));
        ((Active*)get_instance(brevonweaponarm_3780_instances))->set_direction(((Active*)get_instance(brevon_3683_instances))->get_direction());
        ((Active*)get_instance(brevonweaponarm_3780_instances))->set_angle(((Active*)get_instance(brevonweaponarm_3780_instances))->alterables->values.get(0)*((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8), 0);
        ((Active*)get_instance(brevonweaponarm_3780_instances))->set_visible(true);
        ((Active*)get_instance(brevon_3683_instances))->force_animation(17);
        ((Active*)get_instance(brevon_3683_instances))->force_frame(0);
    }
    event_2129_72_end: ;
}
void Frames::event_func_15922()
{
    // event 2130_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2130_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (15))) goto event_2130_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) < (12))) goto event_2130_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8)) == (1))) goto event_2130_72_end;
        ((Active*)get_instance(brevonweaponarm_3780_instances))->alterables->values.set(0, ((Active*)get_instance(brevonweaponarm_3780_instances))->alterables->values.get(0)+get_max(get_min(((((get_angle_int(((Active*)get_instance(brevon_3683_instances))->get_x()-((Active*)get_instance(player_389_instances))->get_x()+30, ((Active*)get_instance(brevon_3683_instances))->get_action_y()-((Active*)get_instance(player_389_instances))->get_y())-180)-((Active*)get_instance(brevonweaponarm_3780_instances))->alterables->values.get(0)+540)%math_helper%360)-180), 15), -1*15));
    }
    event_2130_72_end: ;
}
void Frames::event_func_15923()
{
    // event 2131_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2131_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (15))) goto event_2131_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) < (12))) goto event_2131_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8)) == (-1))) goto event_2131_72_end;
        ((Active*)get_instance(brevonweaponarm_3780_instances))->alterables->values.set(0, ((Active*)get_instance(brevonweaponarm_3780_instances))->alterables->values.get(0)+get_max(get_min(((((get_angle_int(((Active*)get_instance(player_389_instances))->get_x()-((Active*)get_instance(brevon_3683_instances))->get_x()+30, ((Active*)get_instance(brevon_3683_instances))->get_action_y()-((Active*)get_instance(player_389_instances))->get_y())-180)-((Active*)get_instance(brevonweaponarm_3780_instances))->alterables->values.get(0)+540)%math_helper%360)-180), 15), -1*15));
    }
    event_2131_72_end: ;
}
void Frames::event_func_15924()
{
    // event 2132_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2132_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (15))) goto event_2132_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) == (12))) goto event_2132_72_end;
        FrameObject * single_instance_2132_72_0; single_instance_2132_72_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(brevonweaponarm_3780_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_2132_72_0 == NULL)
                    single_instance_2132_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2132_72_0))->set_x_scale(0.5);
        ((Active*)((Active*)single_instance_2132_72_0))->set_angle(((Active*)get_instance(brevonweaponarm_3780_instances))->get_angle(), 0);
        FrameObject * single_instance_2132_72_1; single_instance_2132_72_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(brevonweaponarm_3780_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_brevonsuitlaser_3741(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_2132_72_1 == NULL)
                    single_instance_2132_72_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2132_72_1))->alterables->values.set(2, ((Active*)get_instance(brevonweaponarm_3780_instances))->alterables->values.get(0)*((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8)+(((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8)-1)*90);
        ((Active*)((Active*)single_instance_2132_72_1))->alterables->values.set(3, 15);
        ((Active*)((Active*)single_instance_2132_72_1))->alterables->values.set(0, ((Active*)single_instance_2132_72_1)->get_x());
        ((Active*)((Active*)single_instance_2132_72_1))->alterables->values.set(1, ((Active*)single_instance_2132_72_1)->get_y());
        ((Active*)((Active*)single_instance_2132_72_1))->set_angle(((Active*)single_instance_2132_72_1)->alterables->values.get(2), 0);
        media.play_id(SOUND_BREVONMECH_LASER_343, -1, 1);
    }
    event_2132_72_end: ;
}
void Frames::event_func_15925()
{
    // event 2133_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2133_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (15))) goto event_2133_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) > (12))) goto event_2133_72_end;
        ((Active*)get_instance(brevon_3683_instances))->force_frame(1);
        {
            FrameObject * parent = ((Active*)get_instance(brevon_3683_instances));
            if (parent == NULL) goto pos_end_2133_72_0;
            ((Active*)get_instance(brevonweaponarm_3780_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_2133_72_0: ;
        }
        ((Active*)get_instance(brevonweaponarm_3780_instances))->move_back(((Active*)get_instance(brevon_3683_instances)));
        ((Active*)get_instance(brevonweaponarm_3780_instances))->set_direction(((Active*)get_instance(brevon_3683_instances))->get_direction());
        ((Active*)get_instance(brevonweaponarm_3780_instances))->set_angle((((Active*)get_instance(brevonweaponarm_3780_instances))->alterables->values.get(0)+60)*((Active*)get_instance(brevon_3683_instances))->alterables->values.get(8), 0);
        ((Active*)get_instance(brevonweaponarm_3780_instances))->set_visible(true);
    }
    event_2133_72_end: ;
}
void Frames::event_func_15926()
{
    // event 2134_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2134_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(3)) == (15))) goto event_2134_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->alterables->values.get(4)) > (25))) goto event_2134_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(3, 3);
        ((Active*)get_instance(brevon_3683_instances))->force_animation(7);
        ((Active*)get_instance(brevon_3683_instances))->restore_frame();
    }
    event_2134_72_end: ;
}
void Frames::event_func_15927()
{
    // event 2135_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2135_72_end;
        if (!((((Active*)get_instance(brevoncrosshair7_3791_instances))->alterables->values.get(0)) < (32))) goto event_2135_72_end;
        ((Active*)get_instance(brevoncrosshair6_3790_instances))->set_y(((Active*)get_instance(brevoncrosshair6_3790_instances))->get_y()-1);
        ((Active*)get_instance(brevoncrosshair7_3791_instances))->set_y(((Active*)get_instance(brevoncrosshair7_3791_instances))->get_y()-1);
        ((Active*)get_instance(brevoncrosshair7_3791_instances))->alterables->values.add(0, 1);
    }
    event_2135_72_end: ;
}
void Frames::event_func_15928()
{
    // event 2136_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2136_72_end;
        ((Active*)get_instance(brevoncrosshair7_3791_instances))->set_x_scale(((Active*)get_instance(brevonhitbox_3781_instances, default_active_instance))->alterables->values.get(0)/math_helper/160.0);
    }
    event_2136_72_end: ;
}
void Frames::event_func_15929()
{
    // event 2137_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2137_72_end;
        if (((Active*)get_instance(brevon_3683_instances))->test_animation(10)) goto event_2137_72_end;
        brevonhitbox_3781_instances.clear_selection();
        for (ObjectIterator it(brevonhitbox_3781_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_2137_72_end: ;
}
void Frames::event_func_15930()
{
    // event 2138_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2138_72_end;
        if (!(((Active*)get_instance(brevon_3683_instances))->test_animation(10))) goto event_2138_72_end;
        brevonhitbox_3781_instances.clear_selection();
        for (ObjectIterator it(brevonhitbox_3781_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
    }
    event_2138_72_end: ;
}
void Frames::event_func_15931()
{
    // event 2139_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2139_72_end;
        brevonhitbox_3781_instances.clear_selection();
        for (ObjectIterator it(brevonhitbox_3781_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (2))) { it.deselect(); continue; }
        }
        if (!brevonhitbox_3781_instances.has_selection()) goto event_2139_72_end;
        {
            ((Active*)get_instance(brevon_3683_instances))->set_shader(Render::INVERT);
        }
    }
    event_2139_72_end: ;
}
