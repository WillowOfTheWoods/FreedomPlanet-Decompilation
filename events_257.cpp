#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_20686()
{
    // event 46_85
    bool or_result_46_85 = false;
    bool or_temp_result_46_85_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1)) goto or_event_46_85_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (0))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_46_85_0_end;
        or_result_46_85 = true;
        or_temp_result_46_85_0 = true;
    }
    or_event_46_85_0_end: ;
    playerinput_19_instances.clear_saved_selection();
    if (or_temp_result_46_85_0) {
        playerinput_19_instances.save_selection();
    }
    // event 46_85
    bool or_temp_result_46_85_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1)) goto or_event_46_85_1_end;
        playerdragonrider_3985_instances.clear_selection();
        for (ObjectIterator it(playerdragonrider_3985_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!playerdragonrider_3985_instances.has_selection()) goto or_event_46_85_1_end;
        or_result_46_85 = true;
        or_temp_result_46_85_1 = true;
        or_event_46_85_1_end: ;
        playerdragonrider_3985_instances.clear_saved_selection();
        if (or_temp_result_46_85_1) {
            playerdragonrider_3985_instances.save_selection();
        }
        if (!or_result_46_85) goto or_final_or_event_46_85_1_end;
        playerdragonrider_3985_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_46_85_1) {
            playerdragonrider_3985_instances.restore_selection();
        }
        if (or_temp_result_46_85_0) {
            playerinput_19_instances.restore_selection();
        }
        playerholodragonlaser_4160_instances.clear_selection();
        for (ObjectIterator it(playerholodragonlaser_4160_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerdragonhead_3984_instances.clear_selection();
        for (ObjectIterator it(playerdragonhead_3984_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_max(((Active*)*it)->alterables->values.get(3)-0.2, 0));
            ((Active*)*it)->alterables->values.set(4, get_min(((Active*)*it)->alterables->values.get(4)+2, 150));
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    or_final_or_event_46_85_1_end: ;
}
void Frames::event_func_20687()
{
    // event 47_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1)) goto event_47_85_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(13)) == (1))) goto event_47_85_end;
        if (!(((Active*)get_instance(playerdragonrider_3985_instances))->alterables->flags.is_off(6))) goto event_47_85_end;
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(3, get_min(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(3)+0.2, 2));
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->flags.enable(1);
    }
    event_47_85_end: ;
}
void Frames::event_func_20688()
{
    // event 48_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1)) goto event_48_85_end;
        if (!((((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(3)) >= (2))) goto event_48_85_end;
        ((Active*)get_instance(playerdragonhead_3984_instances))->set_direction(1);
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(4, get_max(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(4)-1, 20));
        playerholodragonlaser_4160_instances.clear_selection();
        for (ObjectIterator it(playerholodragonlaser_4160_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_48_85_end: ;
}
void Frames::event_func_20689()
{
    // event 49_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1)) goto event_49_85_end;
        if (!((((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(3)) >= (2))) goto event_49_85_end;
        if (!(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->flags.is_off(2))) goto event_49_85_end;
        media.play_id(SOUND_COMMON_BUBBLESWEEP_169, -1, 1);
        FrameObject * single_instance_49_85_0; single_instance_49_85_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerdragonhead_3984_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 20, parent->y + 0), parent->layer);
                if (single_instance_49_85_0 == NULL)
                    single_instance_49_85_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_49_85_0))->set_x_scale(0.5);
        ((Active*)((Active*)single_instance_49_85_0))->alterables->flags.enable(1);
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->flags.enable(2);
    }
    event_49_85_end: ;
}
void Frames::event_func_20690()
{
    // event 50_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1)) goto event_50_85_end;
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!effectswhiteburst_5_instances.has_selection()) goto event_50_85_end;
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerholodragonlaser_4160_instances, it.current_index));
            if (parent == NULL) goto pos_end_50_85_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 24, parent->get_y() + 0);
            pos_end_50_85_0: ;
        }
    }
    event_50_85_end: ;
}
void Frames::event_func_20691()
{
    // event 51_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1)) goto event_51_85_end;
        if (!((((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(3)) < (2))) goto event_51_85_end;
        if (!media.is_sample_playing(SOUND_COMMON_BUBBLESWEEP_169)) goto event_51_85_end;
        media.play_id(SOUND_BUBBLESWEEP_STOP_2_341, -1, 1);
        media.stop_sample(SOUND_COMMON_BUBBLESWEEP_169);
    }
    event_51_85_end: ;
}
void Frames::event_func_20692()
{
    // event 52_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1)) goto event_52_85_end;
        if (!((((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(3)) <= (0))) goto event_52_85_end;
        if (!(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->flags.is_on(1))) goto event_52_85_end;
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->flags.disable(1);
        media.play_id(SOUND_HOLODRAGON_BITE_2_342, -1, 1);
    }
    event_52_85_end: ;
}
void Frames::event_func_20693()
{
    // event 53_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1)) goto event_53_85_end;
        if (!((global_values->get(0)) == (2))) goto event_53_85_end;
        if (!((global_values->get(4)) == (0))) goto event_53_85_end;
        if (once_condition_53_85) goto event_53_85_end;
        once_condition_53_85 = true;
        if (!group_main_engine_player_player_ship_tank_zao_s_explanation_1) {
            group_main_engine_player_player_ship_tank_zao_s_explanation_1 = true;
        }
            group_main_engine_distance_1 = false;
    
    }
    event_53_85_end: ;
}
void Frames::event_func_20694()
{
    // event 54_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1 && group_main_engine_player_player_ship_tank_zao_s_explanation_1)) goto event_54_85_end;
        if (!((global_values->get(3)) >= (50))) goto event_54_85_end;
        if (once_condition_54_85) goto event_54_85_end;
        once_condition_54_85 = true;
        media.play(str_data_voices_88+global_strings->get(11)+str_za_za_06_03_ogg_346, 29-1);
        media.lock(29-1);
        subtitletext_3433_instances.clear_selection();
        for (ObjectIterator it(subtitletext_3433_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->set_text(((Text*)get_instance(subtitledata_3432_instances))->get_paragraph(0));
            ((TextBlitter*)*it)->set_visible(true);
        }
    }
    event_54_85_end: ;
}
void Frames::event_func_20695()
{
    // event 55_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1 && group_main_engine_player_player_ship_tank_zao_s_explanation_1)) goto event_55_85_end;
        if (!((global_values->get(3)) >= (300))) goto event_55_85_end;
        if (once_condition_55_85) goto event_55_85_end;
        once_condition_55_85 = true;
        media.play(str_data_voices_88+global_strings->get(11)+str_za_za_06_04_ogg_347, 29-1);
        media.lock(29-1);
        subtitletext_3433_instances.clear_selection();
        for (ObjectIterator it(subtitletext_3433_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->set_text(((Text*)get_instance(subtitledata_3432_instances))->get_paragraph(1));
            ((TextBlitter*)*it)->set_visible(true);
        }
    }
    event_55_85_end: ;
}
void Frames::event_func_20696()
{
    // event 56_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1 && group_main_engine_player_player_ship_tank_zao_s_explanation_1)) goto event_56_85_end;
        if (!((global_values->get(3)) >= (480))) goto event_56_85_end;
        subtitletext_3433_instances.clear_selection();
        for (ObjectIterator it(subtitletext_3433_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->destroy();
        }
        media.unlock(29-1);
            group_main_engine_player_player_ship_tank_zao_s_explanation_1 = false;
    
        if (!group_main_engine_distance_1) {
            group_main_engine_distance_1 = true;
        }
        global_values->set(4, 1);
    }
    event_56_85_end: ;
}
void Frames::event_func_20697()
{
    // event 57_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1)) goto event_57_85_end;
        schmupfloor_4016_instances.clear_selection();
        for (ObjectIterator it(schmupfloor_4016_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0)+((Active*)*it)->alterables->values.get(3));
        }
        ((Active*)get_instance(playerzaotank_4014_instances))->set_x(((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(0));
        ((Active*)get_instance(playerzaotank_4014_instances))->set_y(((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(1));
        {
            FrameObject * parent = ((Active*)get_instance(playerzaotank_4014_instances));
            if (parent == NULL) goto pos_end_57_85_0;
            ((Active*)get_instance(playerzaotank2_4013_instances))->set_global_position(parent->get_x() + -14, parent->get_y() + -12);
            pos_end_57_85_0: ;
        }
        ((Active*)get_instance(playerzaotank2_4013_instances))->set_angle(((Active*)get_instance(playerzaotank2_4013_instances))->alterables->values.get(0)-45, 0);
        ((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.add(0, ((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(5));
        ((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.set(1, get_min(((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(1)+((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(6), ((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(2)));
        {
            FrameObject * parent = ((Active*)get_instance(playerzaotank2_4013_instances));
            if (parent == NULL) goto pos_end_57_85_1;
            ((Active*)get_instance(playerdragonrider_3985_instances))->set_global_position(parent->get_x() + -7, parent->get_y() + 3);
            pos_end_57_85_1: ;
        }
        ((Active*)get_instance(playerdragonrider_3985_instances))->move_front(((Active*)get_instance(playerzaotank2_4013_instances)));
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(1, ((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(1));
        ((Active*)get_instance(guiicon_452_instances))->set_direction(global_values->get(1));
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(5, ((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(5));
        for (ObjectIterator it(schmupfloor_4016_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 4);
        }
    }
    event_57_85_end: ;
}
void Frames::event_func_20698()
{
    // event 58_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1)) goto event_58_85_end;
        schmupfloor_4016_instances.clear_selection();
        for (ObjectIterator it(schmupfloor_4016_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (-64))) { it.deselect(); continue; }
        }
        if (!schmupfloor_4016_instances.has_selection()) goto event_58_85_end;
        for (ObjectIterator it(schmupfloor_4016_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 64);
        }
    }
    event_58_85_end: ;
}
void Frames::event_func_20699()
{
    // event 59_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1)) goto event_59_85_end;
        if (!((global_values->get(1)) < (4))) goto event_59_85_end;
        ((Active*)get_instance(playerdragonrider_3985_instances))->force_animation(7);
    }
    event_59_85_end: ;
}
void Frames::event_func_20700()
{
    // event 60_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1)) goto event_60_85_end;
        if (!((global_values->get(1)) == (4))) goto event_60_85_end;
        ((Active*)get_instance(playerdragonrider_3985_instances))->force_animation(8);
    }
    event_60_85_end: ;
}
void Frames::event_func_20701()
{
    // event 61_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1)) goto event_61_85_end;
        if (!((global_values->get(1)) > (4))) goto event_61_85_end;
        ((Active*)get_instance(playerdragonrider_3985_instances))->force_animation(7);
    }
    event_61_85_end: ;
}
void Frames::event_func_20702()
{
    // event 62_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1)) goto event_62_85_end;
        ((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.set(0, get_max(frame_left()+40, ((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(0)));
        ((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.set(1, get_max(40, get_min(((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(1), height-10)));
    }
    event_62_85_end: ;
}
void Frames::event_func_20703()
{
    // event 63_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1)) goto event_63_85_end;
        if (!((((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(0)) <= (240))) goto event_63_85_end;
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.add(5, get_min(((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(5)*((SystemBox*)*it)->alterables->values.get(6)*0.1, 0));
        }
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, get_max(((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(5)*0.1, 0));
        }
        qualifier_17.clear_selection();
        for (QualifierIterator it(qualifier_17); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, get_max(((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(5)*0.1, 0));
        }
        schmupfloor_4016_instances.clear_selection();
        for (ObjectIterator it(schmupfloor_4016_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, get_max(((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(5)*0.1, 0));
        }
    }
    event_63_85_end: ;
}
void Frames::event_func_20704()
{
    // event 64_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1)) goto event_64_85_end;
        if (!((((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(0)) > (240))) goto event_64_85_end;
        if (!(((Active*)get_instance(playerdragonrider_3985_instances))->alterables->flags.is_off(6))) goto event_64_85_end;
        ((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.sub(0, ((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(5));
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.add(5, ((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(5)*((SystemBox*)*it)->alterables->values.get(6)*0.1);
        }
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, get_max(((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(5)*0.1, 0));
        }
        qualifier_17.clear_selection();
        for (QualifierIterator it(qualifier_17); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, get_max(((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(5)*0.1, 0));
        }
        schmupfloor_4016_instances.clear_selection();
        for (ObjectIterator it(schmupfloor_4016_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, get_max(((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(5)*0.1, 0));
        }
    }
    event_64_85_end: ;
}
void Frames::event_func_20705()
{
    // event 65_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1 && group_main_engine_player_player_ship_tank_tank_movement_1)) goto event_65_85_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (1))) goto event_65_85_end;
        if (!(((Active*)get_instance(playerdragonrider_3985_instances))->alterables->flags.is_off(6))) goto event_65_85_end;
        ((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.set(5, get_max(3, ((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(5)));
    }
    event_65_85_end: ;
}
void Frames::event_func_20706()
{
    // event 66_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1 && group_main_engine_player_player_ship_tank_tank_movement_1)) goto event_66_85_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (1))) goto event_66_85_end;
        if (!(((Active*)get_instance(playerdragonrider_3985_instances))->alterables->flags.is_off(6))) goto event_66_85_end;
        ((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.set(5, get_min(-3, ((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(5)));
    }
    event_66_85_end: ;
}
void Frames::event_func_20707()
{
    // event 67_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1 && group_main_engine_player_player_ship_tank_tank_movement_1)) goto event_67_85_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (0))) goto event_67_85_end;
        if (!((((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(5)) > (0))) goto event_67_85_end;
        if (!((((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(5)) <= (3))) goto event_67_85_end;
        ((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.set(5, 0);
    }
    event_67_85_end: ;
}
void Frames::event_func_20708()
{
    // event 68_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1 && group_main_engine_player_player_ship_tank_tank_movement_1)) goto event_68_85_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (0))) goto event_68_85_end;
        if (!((((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(5)) < (0))) goto event_68_85_end;
        if (!((((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(5)) >= (-3))) goto event_68_85_end;
        ((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.set(5, 0);
    }
    event_68_85_end: ;
}
void Frames::event_func_20709()
{
    // event 69_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1 && group_main_engine_player_player_ship_tank_tank_movement_1)) goto event_69_85_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(4)) == (1))) goto event_69_85_end;
        if (!(((Active*)get_instance(playerdragonrider_3985_instances))->alterables->flags.is_off(6))) goto event_69_85_end;
        if (!((((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(6)) >= (0))) goto event_69_85_end;
        if (!((((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(1)) >= (((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(2)))) goto event_69_85_end;
        media.play_id(SOUND_JUMP_LO_232, -1, 1);
        FrameObject * single_instance_69_85_0; single_instance_69_85_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerzaotank_4014_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 18), parent->layer);
                if (single_instance_69_85_0 == NULL)
                    single_instance_69_85_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_69_85_0))->set_y_scale(0.3);
        ((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.set(6, -7);
        ((Active*)get_instance(playerzaotank_4014_instances))->alterables->flags.disable(1);
    }
    event_69_85_end: ;
}
void Frames::event_func_20710()
{
    // event 70_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1 && group_main_engine_player_player_ship_tank_tank_movement_1)) goto event_70_85_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(4)) == (1))) goto event_70_85_end;
        if (!(((Active*)get_instance(playerdragonrider_3985_instances))->alterables->flags.is_off(6))) goto event_70_85_end;
        if (!((((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(6)) >= (0))) goto event_70_85_end;
        if (!((((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(1)) < (((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(2)))) goto event_70_85_end;
        if (!(((Active*)get_instance(playerzaotank_4014_instances))->alterables->flags.is_off(1))) goto event_70_85_end;
        media.play_id(SOUND_JUMP_LO_232, -1, 1);
        FrameObject * single_instance_70_85_0; single_instance_70_85_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerzaotank_4014_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 18), parent->layer);
                if (single_instance_70_85_0 == NULL)
                    single_instance_70_85_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_70_85_0))->set_y_scale(0.3);
        ((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.set(6, -8);
        ((Active*)get_instance(playerzaotank_4014_instances))->alterables->flags.enable(1);
    }
    event_70_85_end: ;
}
void Frames::event_func_20711()
{
    // event 71_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1)) goto event_71_85_end;
        if (!((((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(1)) < (((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(2)))) goto event_71_85_end;
        ((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.add(6, 0.3);
    }
    event_71_85_end: ;
}
void Frames::event_func_20712()
{
    // event 72_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1)) goto event_72_85_end;
        if (!((((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(1)) < (((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(2)))) goto event_72_85_end;
        if (!((((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(6)) < (0))) goto event_72_85_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(4)) == (0))) goto event_72_85_end;
        ((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.add(6, 0.3);
    }
    event_72_85_end: ;
}
void Frames::event_func_20713()
{
    // event 73_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1)) goto event_73_85_end;
        if (!((((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(1)) >= (((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(2)))) goto event_73_85_end;
        if (!((((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.get(6)) > (0))) goto event_73_85_end;
        ((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.set(6, 0);
        media.play_id(SOUND_CAROL_BIKELAND_161, -1, 1);
    }
    event_73_85_end: ;
}
void Frames::event_func_20714()
{
    // event 74_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1)) goto event_74_85_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (1))) goto event_74_85_end;
        if (!((((Active*)get_instance(playerzaotank2_4013_instances))->alterables->values.get(0)) < (90))) goto event_74_85_end;
        ((Active*)get_instance(playerzaotank2_4013_instances))->alterables->values.add(0, 3);
    }
    event_74_85_end: ;
}
void Frames::event_func_20715()
{
    // event 75_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1)) goto event_75_85_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_75_85_end;
        if (!((((Active*)get_instance(playerzaotank2_4013_instances))->alterables->values.get(0)) > (0))) goto event_75_85_end;
        ((Active*)get_instance(playerzaotank2_4013_instances))->alterables->values.sub(0, 3);
    }
    event_75_85_end: ;
}
void Frames::event_func_20716()
{
    // event 76_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1)) goto event_76_85_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(5)) == (1))) goto event_76_85_end;
        if (!((((Active*)get_instance(playerzaotank2_4013_instances))->alterables->values.get(1)) == (0))) goto event_76_85_end;
        if (!(((Active*)get_instance(playerdragonrider_3985_instances))->alterables->flags.is_off(6))) goto event_76_85_end;
        if (!((playerfireball_4155_instances.size()) < (3))) goto event_76_85_end;
        ((Active*)get_instance(playerzaotank2_4013_instances))->alterables->flags.enable(3);
        media.play_id(SOUND_COMMON_EXPLODE_8_17, -1, 1);
        ((Active*)get_instance(playerzaotank2_4013_instances))->alterables->values.set(1, 5);
    }
    event_76_85_end: ;
}
void Frames::event_func_20717()
{
    // event 77_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1)) goto event_77_85_end;
        if (!((((Active*)get_instance(playerzaotank2_4013_instances))->alterables->values.get(1)) > (0))) goto event_77_85_end;
        ((Active*)get_instance(playerzaotank2_4013_instances))->alterables->values.sub(1, 1);
    }
    event_77_85_end: ;
}
void Frames::event_func_20718()
{
    // event 78_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1)) goto event_78_85_end;
        if (!(((Active*)get_instance(playerzaotank2_4013_instances))->alterables->flags.is_on(3))) goto event_78_85_end;
        FrameObject * single_instance_78_85_0; single_instance_78_85_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerzaotank2_4013_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerfireball_4155(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_78_85_0 == NULL)
                    single_instance_78_85_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_78_85_0))->alterables->values.set(0, ((Active*)single_instance_78_85_0)->get_x());
        ((Active*)((Active*)single_instance_78_85_0))->alterables->values.set(1, ((Active*)single_instance_78_85_0)->get_y());
        ((Active*)((Active*)single_instance_78_85_0))->alterables->values.set(2, cos_deg(((Active*)get_instance(playerzaotank2_4013_instances))->alterables->values.get(0))*12);
        ((Active*)((Active*)single_instance_78_85_0))->alterables->values.set(3, sin_deg(((Active*)get_instance(playerzaotank2_4013_instances))->alterables->values.get(0))*-12);
        ((Active*)((Active*)single_instance_78_85_0))->set_direction(1);
        ((Active*)((Active*)single_instance_78_85_0))->set_angle(((Active*)get_instance(playerzaotank2_4013_instances))->alterables->values.get(0), 0);
        ((Active*)get_instance(playerzaotank2_4013_instances))->alterables->flags.disable(3);
        ((Active*)single_instance_78_85_0)->move_back(((Active*)get_instance(playerzaotank2_4013_instances)));
        FrameObject * single_instance_78_85_1; single_instance_78_85_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerzaotank2_4013_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_78_85_1 == NULL)
                    single_instance_78_85_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_78_85_1))->set_x_scale(0.3);
        ((Active*)((Active*)single_instance_78_85_1))->set_y_scale(0.5);
        ((Active*)((Active*)single_instance_78_85_1))->set_angle(((Active*)get_instance(playerzaotank2_4013_instances))->alterables->values.get(0), 0);
        ((Active*)((Active*)single_instance_78_85_1))->alterables->flags.enable(4);
    }
    event_78_85_end: ;
}
void Frames::event_func_20719()
{
    // event 79_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1)) goto event_79_85_end;
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!effectswhiteburst_5_instances.has_selection()) goto event_79_85_end;
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerzaotank2_4013_instances));
            if (parent == NULL) goto pos_end_79_85_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_79_85_0: ;
        }
    }
    event_79_85_end: ;
}
void Frames::event_func_20720()
{
    // event 80_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1)) goto event_80_85_end;
        playerfireball_4155_instances.clear_selection();
        for (ObjectIterator it(playerfireball_4155_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.add(3, 0.5);
            ((Active*)*it)->set_angle(atan2_deg(0-((Active*)*it)->alterables->values.get(3), ((Active*)*it)->alterables->values.get(2)), 0);
        }
        effectflareburst_1788_instances.clear_selection();
        for (ObjectIterator it(effectflareburst_1788_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-4);
        }
    }
    event_80_85_end: ;
}
void Frames::event_func_20721()
{
    // event 81_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1)) goto event_81_85_end;
        playerfireball_4155_instances.clear_selection();
        for (ObjectIterator it(playerfireball_4155_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_near_border(-40))) { it.deselect(); continue; }
        }
        if (!playerfireball_4155_instances.has_selection()) goto event_81_85_end;
        for (ObjectIterator it(playerfireball_4155_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_81_85_end: ;
}
void Frames::event_func_20722()
{
    // event 83_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1)) goto event_83_85_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(13)) == (1))) goto event_83_85_end;
        if (!(((Active*)get_instance(playerdragonrider_3985_instances))->alterables->flags.is_off(6))) goto event_83_85_end;
        ((Active*)get_instance(playerzaotank2_4013_instances))->alterables->values.set(3, get_max(((Active*)get_instance(playerzaotank2_4013_instances))->alterables->values.get(3)-0.8, 0));
        ((Active*)get_instance(playerzaotank2_4013_instances))->alterables->values.add(4, ((Active*)get_instance(playerzaotank2_4013_instances))->alterables->values.get(3)+100);
    }
    event_83_85_end: ;
}
void Frames::event_func_20723()
{
    // event 84_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1)) goto event_84_85_end;
        if (!((((Active*)get_instance(playerzaotank2_4013_instances))->alterables->values.get(4)) >= (400))) goto event_84_85_end;
        FrameObject * single_instance_84_85_0; single_instance_84_85_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerzaotank2_4013_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibossflame_1199(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_84_85_0 == NULL)
                    single_instance_84_85_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_84_85_0))->alterables->values.set(0, ((Active*)single_instance_84_85_0)->get_x());
        ((Active*)((Active*)single_instance_84_85_0))->alterables->values.set(1, ((Active*)single_instance_84_85_0)->get_y());
        ((Active*)((Active*)single_instance_84_85_0))->alterables->values.set(2, cos_deg(((Active*)get_instance(playerzaotank2_4013_instances))->alterables->values.get(0)+sin_deg(((Active*)get_instance(playerzaotank2_4013_instances))->alterables->values.get(2))*15)*(5+((Active*)get_instance(playerzaotank2_4013_instances))->alterables->values.get(3)*0.06));
        ((Active*)((Active*)single_instance_84_85_0))->alterables->values.set(3, sin_deg(((Active*)get_instance(playerzaotank2_4013_instances))->alterables->values.get(0)+sin_deg(((Active*)get_instance(playerzaotank2_4013_instances))->alterables->values.get(2))*15)*(-5-((Active*)get_instance(playerzaotank2_4013_instances))->alterables->values.get(3)*0.06));
        ((Active*)get_instance(playerzaotank2_4013_instances))->alterables->values.add(2, 30);
        ((Active*)get_instance(playerzaotank2_4013_instances))->alterables->values.sub(4, 400);
    }
    event_84_85_end: ;
}
void Frames::event_func_20724()
{
    // event 85_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1)) goto event_85_85_end;
        minibossflame_1199_instances.clear_selection();
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(3));
        }
        ((Active*)get_instance(playerzaotank2_4013_instances))->alterables->values.set(3, get_min(((Active*)get_instance(playerzaotank2_4013_instances))->alterables->values.get(3)+0.5, 100));
    }
    event_85_85_end: ;
}
void Frames::event_func_20725()
{
    // event 86_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1)) goto event_86_85_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(13)) == (1))) goto event_86_85_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(5)) == (0))) goto event_86_85_end;
        if (!(((Active*)get_instance(playerdragonrider_3985_instances))->alterables->flags.is_off(6))) goto event_86_85_end;
        if (not_always_86_85 > loop_count) {
            not_always_86_85 = loop_count + 2;
            goto event_86_85_end;
        }
        not_always_86_85 = loop_count + 2;
        media.play_id(SOUND_COMMON_FLAMETHROWER1_70, -1, 1);
    }
    event_86_85_end: ;
}
void Frames::event_func_20726()
{
    // event 87_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1)) goto event_87_85_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(13)) == (0))) goto event_87_85_end;
        if (not_always_87_85 > loop_count) {
            not_always_87_85 = loop_count + 2;
            goto event_87_85_end;
        }
        not_always_87_85 = loop_count + 2;
        media.stop_sample(SOUND_COMMON_FLAMETHROWER1_70);
    }
    event_87_85_end: ;
}
void Frames::event_func_20727()
{
    // event 88_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1)) goto event_88_85_end;
        if (!(((Active*)get_instance(playerdragonrider_3985_instances))->alterables->flags.is_on(6))) goto event_88_85_end;
        if (not_always_88_85 > loop_count) {
            not_always_88_85 = loop_count + 2;
            goto event_88_85_end;
        }
        not_always_88_85 = loop_count + 2;
        media.stop_sample(SOUND_COMMON_FLAMETHROWER1_70);
    }
    event_88_85_end: ;
}
void Frames::event_func_20728()
{
    // event 89_85
    {
        if (!(group_main_engine_1)) goto event_89_85_end;
        ((Active*)get_instance(playerdragonrider_3985_instances))->set_direction((((Active*)get_instance(playerdragonrider_3985_instances))->alterables->values.get(0)/math_helper/2)%math_helper%2);
        ((Active*)get_instance(playerdragonrider_3985_instances))->alterables->values.set(0, get_max(((Active*)get_instance(playerdragonrider_3985_instances))->alterables->values.get(0)-1, 0));
    }
    event_89_85_end: ;
}
void Frames::event_func_20729()
{
    // event 90_85
    {
        if (!(group_main_engine_1)) goto event_90_85_end;
        if (!((((Active*)get_instance(playerdragonrider_3985_instances))->alterables->values.get(0)) <= (0))) goto event_90_85_end;
        qualifier_20.clear_selection();
        playerdragonrider_3985_instances.clear_selection();
        if (!check_overlap(qualifier_20, playerdragonrider_3985_instances)) goto event_90_85_end;
        if (!((((Counter*)get_instance(guirings_122_instances))->value) > (0))) goto event_90_85_end;
        if (!(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->flags.is_off(12))) goto event_90_85_end;
        media.play_id(SOUND_COMMON_PLAYERHIT_2_25, -1, 1);
        ((Active*)get_instance(playerdragonrider_3985_instances))->alterables->flags.enable(5);
    }
    event_90_85_end: ;
}
void Frames::event_func_20730()
{
    // event 91_85
    {
        if (!(group_main_engine_1)) goto event_91_85_end;
        if (!((((Active*)get_instance(playerdragonrider_3985_instances))->alterables->values.get(0)) <= (0))) goto event_91_85_end;
        qualifier_17.clear_selection();
        playerdragonrider_3985_instances.clear_selection();
        if (!check_overlap(qualifier_17, playerdragonrider_3985_instances)) goto event_91_85_end;
        if (!((((Counter*)get_instance(guirings_122_instances))->value) > (0))) goto event_91_85_end;
        if (!(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->flags.is_off(12))) goto event_91_85_end;
        media.play_id(SOUND_COMMON_PLAYERHIT_2_25, -1, 1);
        ((Active*)get_instance(playerdragonrider_3985_instances))->alterables->flags.enable(5);
    }
    event_91_85_end: ;
}
void Frames::event_func_20731()
{
    // event 92_85
    {
        if (!(group_main_engine_1)) goto event_92_85_end;
        if (!(((Active*)get_instance(playerdragonrider_3985_instances))->alterables->flags.is_on(5))) goto event_92_85_end;
        if (!((global_values->get(12)) > (1))) goto event_92_85_end;
        ((Active*)get_instance(playerdragonrider_3985_instances))->alterables->values.set(0, 90);
        ((Active*)get_instance(playerdragonrider_3985_instances))->alterables->flags.disable(5);
        ((Counter*)get_instance(guirings_122_instances))->subtract(1);
    }
    event_92_85_end: ;
}
void Frames::event_func_20732()
{
    // event 93_85
    {
        if (!(group_main_engine_1)) goto event_93_85_end;
        if (!(((Active*)get_instance(playerdragonrider_3985_instances))->alterables->flags.is_on(5))) goto event_93_85_end;
        if (!((global_values->get(12)) == (1))) goto event_93_85_end;
        ((Active*)get_instance(playerdragonrider_3985_instances))->alterables->values.set(0, 30);
        ((Active*)get_instance(playerdragonrider_3985_instances))->alterables->flags.disable(5);
        ((Counter*)get_instance(guirings_122_instances))->subtract(1);
    }
    event_93_85_end: ;
}
void Frames::event_func_20733()
{
    // event 94_85
    {
        if (!(group_main_engine_1)) goto event_94_85_end;
        if (!(((Active*)get_instance(playerdragonrider_3985_instances))->alterables->flags.is_on(5))) goto event_94_85_end;
        if (!((global_values->get(12)) < (1))) goto event_94_85_end;
        ((Active*)get_instance(playerdragonrider_3985_instances))->alterables->values.set(0, 30);
        ((Active*)get_instance(playerdragonrider_3985_instances))->alterables->flags.disable(5);
        ((Counter*)get_instance(guirings_122_instances))->subtract(2);
    }
    event_94_85_end: ;
}
void Frames::event_func_20734()
{
    // event 95_85
    {
        if (!(group_main_engine_1)) goto event_95_85_end;
        if (!((((Active*)get_instance(playerdragonrider_3985_instances))->alterables->values.get(0)) <= (0))) goto event_95_85_end;
        qualifier_20.clear_selection();
        playerdragonrider_3985_instances.clear_selection();
        if (!check_overlap(qualifier_20, playerdragonrider_3985_instances)) goto event_95_85_end;
        if (!((((Counter*)get_instance(guirings_122_instances))->value) == (0))) goto event_95_85_end;
        ((Active*)get_instance(playerdragonrider_3985_instances))->alterables->flags.enable(6);
    }
    event_95_85_end: ;
}
void Frames::event_func_20735()
{
    // event 96_85
    {
        if (!(group_main_engine_1)) goto event_96_85_end;
        if (!((((Active*)get_instance(playerdragonrider_3985_instances))->alterables->values.get(0)) <= (0))) goto event_96_85_end;
        qualifier_17.clear_selection();
        playerdragonrider_3985_instances.clear_selection();
        if (!check_overlap(qualifier_17, playerdragonrider_3985_instances)) goto event_96_85_end;
        if (!((((Counter*)get_instance(guirings_122_instances))->value) == (0))) goto event_96_85_end;
        ((Active*)get_instance(playerdragonrider_3985_instances))->alterables->flags.enable(6);
    }
    event_96_85_end: ;
}
void Frames::event_func_20736()
{
    // event 97_85
    {
        if (!(group_main_engine_1)) goto event_97_85_end;
        if (!(((Active*)get_instance(playerdragonrider_3985_instances))->alterables->flags.is_on(6))) goto event_97_85_end;
        if (once_condition_97_85) goto event_97_85_end;
        once_condition_97_85 = true;
        ((Active*)get_instance(playerdragonrider_3985_instances))->set_visible(false);
            group_main_engine_player_player_ship_dragon_dragon_movement_1 = false;
    
        media.play_id(SOUND_COMMON_STRIKE_23, -1, 1);
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.add(11, 1);
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playerzaotank_4014_instances))->alterables->values.set(5, 0);
    }
    event_97_85_end: ;
}
void Frames::event_func_20737()
{
    // event 98_85
    {
        if (!(group_main_engine_1)) goto event_98_85_end;
        if (!((((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(11)) > (0))) goto event_98_85_end;
        FrameObject * single_instance_98_85_0; single_instance_98_85_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerdragonrider_3985_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsplayersplode_310(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_98_85_0 == NULL)
                    single_instance_98_85_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_98_85_0))->get_movement()->set_speed(20+randrange(20));
        static FlatObjectList swap_98_85;
        swap_98_85.clear();
        {
            swap_98_85.push_back(((Active*)single_instance_98_85_0));
        }
        ((Active*)((Active*)single_instance_98_85_0))->set_angle(randrange(360), 0);
        ((Active*)((Active*)single_instance_98_85_0))->set_direction(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(11));
        ((Active*)((Active*)single_instance_98_85_0))->set_x(((Active*)single_instance_98_85_0)->get_x()-16+(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(11)/math_helper/6)*6);
        ((Active*)((Active*)single_instance_98_85_0))->set_y(((Active*)single_instance_98_85_0)->get_y()-16+(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(11)%math_helper%6)*6);
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(11, (((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(11)+1)%math_helper%32);
        swap_position(swap_98_85);
    }
    event_98_85_end: ;
}
void Frames::event_func_20738()
{
    // event 102_85
    {
        if (!(group_main_engine_1)) goto event_102_85_end;
        effectsplayersplode_310_instances.clear_selection();
        for (ObjectIterator it(effectsplayersplode_310_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+1+((Active*)*it)->get_movement()->get_speed()*0.2, 0);
            ((Active*)*it)->set_scale(0.5);
            ((Active*)*it)->force_frame(global_values->get(1));
        }
    }
    event_102_85_end: ;
}
void Frames::event_func_20739()
{
    // event 103_85
    {
        if (!(group_main_engine_1)) goto event_103_85_end;
        effectsplayersplode_310_instances.clear_selection();
        for (ObjectIterator it(effectsplayersplode_310_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (frame_bottom()+12))) { it.deselect(); continue; }
        }
        if (!effectsplayersplode_310_instances.has_selection()) goto event_103_85_end;
        for (ObjectIterator it(effectsplayersplode_310_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_103_85_end: ;
}
void Frames::event_func_20740()
{
    // event 104_85
    {
        if (!(group_main_engine_1)) goto event_104_85_end;
        if (!(((Active*)get_instance(playerdragonrider_3985_instances))->alterables->flags.is_on(6))) goto event_104_85_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) < (40))) goto event_104_85_end;
        ((Active*)get_instance(guiicon_452_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(guiicon_452_instances))->set_y(((Active*)get_instance(guiicon_452_instances))->get_y()-1);
        ((Active*)get_instance(guienergy_124_instances))->set_y(((Active*)get_instance(guienergy_124_instances))->get_y()-1);
        ((Active*)get_instance(guiscoretimerings_451_instances))->set_y(((Active*)get_instance(guiscoretimerings_451_instances))->get_y()-1);
        ((Counter*)get_instance(guirings_122_instances))->set_y(((Counter*)get_instance(guirings_122_instances))->get_y()-1);
        ((Counter*)get_instance(guilives_454_instances))->set_y(((Counter*)get_instance(guilives_454_instances))->get_y()-1);
        ((Counter*)get_instance(guicrystal_121_instances))->set_y(((Counter*)get_instance(guicrystal_121_instances))->get_y()-1);
    }
    event_104_85_end: ;
}
void Frames::event_func_20741()
{
    // event 105_85
    {
        if (!(group_main_engine_1)) goto event_105_85_end;
        if (!(((Active*)get_instance(playerdragonrider_3985_instances))->alterables->flags.is_on(6))) goto event_105_85_end;
        if (!(((Active*)get_instance(playerdragonrider_3985_instances))->alterables->flags.is_off(8))) goto event_105_85_end;
        ((Active*)get_instance(playerdragonrider_3985_instances))->alterables->values.add(4, 1);
    }
    event_105_85_end: ;
}
void Frames::event_func_20742()
{
    // event 106_85
    {
        if (!(group_main_engine_1)) goto event_106_85_end;
        if (!((((Active*)get_instance(playerdragonrider_3985_instances))->alterables->values.get(4)) == (70))) goto event_106_85_end;
        if (not_always_106_85 > loop_count) {
            not_always_106_85 = loop_count + 2;
            goto event_106_85_end;
        }
        not_always_106_85 = loop_count + 2;
        set_lives(manager.lives - (1));
    }
    event_106_85_end: ;
}
void Frames::event_func_20743()
{
    // event 107_85
    {
        if (!(group_main_engine_1)) goto event_107_85_end;
        if (!((((Active*)get_instance(playerdragonrider_3985_instances))->alterables->values.get(4)) == (90))) goto event_107_85_end;
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 7);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
    }
    event_107_85_end: ;
}
void Frames::event_func_20744()
{
    // event 108_85
    {
        if (!(group_main_engine_1)) goto event_108_85_end;
        if (!((((Active*)get_instance(playerdragonrider_3985_instances))->alterables->values.get(4)) > (90))) goto event_108_85_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()-2);
        }
        media.set_channel_volume(32-1, get_max(media.get_channel_volume(-1 +32)-1, 0));
    }
    event_108_85_end: ;
}
void Frames::event_func_20745()
{
    // event 109_85
    {
        if (!(group_main_engine_1)) goto event_109_85_end;
        if (!((((Active*)get_instance(playerdragonrider_3985_instances))->alterables->values.get(4)) == (190))) goto event_109_85_end;
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, 0);
        effectsplayersplode_310_instances.clear_selection();
        for (ObjectIterator it(effectsplayersplode_310_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_109_85_end: ;
}
void Frames::event_func_20746()
{
    // event 110_85
    {
        if (!(group_main_engine_1)) goto event_110_85_end;
        if (!((((Active*)get_instance(playerdragonrider_3985_instances))->alterables->values.get(4)) == (210))) goto event_110_85_end;
        ((Counter*)get_instance(guirings_122_instances))->set(14);
        next_frame = (index+1-0)-1 + 0;    
    
    }
    event_110_85_end: ;
}
void Frames::event_func_20747()
{
    // event 111_85
    {
        if (!(group_main_engine_1)) goto event_111_85_end;
        playerfireball_4155_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(playerfireball_4155_instances, qualifier_20)) goto event_111_85_end;
        for (ObjectIterator it(playerfireball_4155_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!playerfireball_4155_instances.has_selection()) goto event_111_85_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_111_85_end;
        FrameObject * single_instance_111_85_0; single_instance_111_85_0 = pick_random(qualifier_20);
        if (single_instance_111_85_0 == NULL) goto event_111_85_end;
        ((Active*)((Active*)single_instance_111_85_0))->alterables->values.sub(0, 8);
        for (ObjectIterator it(playerfireball_4155_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_111_85_end: ;
}
void Frames::event_func_20748()
{
    // event 112_85
    {
        if (!(group_main_engine_1)) goto event_112_85_end;
        minibossflame_1199_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(minibossflame_1199_instances, qualifier_20)) goto event_112_85_end;
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!minibossflame_1199_instances.has_selection()) goto event_112_85_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_112_85_end;
        FrameObject * single_instance_112_85_0; single_instance_112_85_0 = pick_random(qualifier_20);
        if (single_instance_112_85_0 == NULL) goto event_112_85_end;
        ((Active*)((Active*)single_instance_112_85_0))->alterables->values.sub(0, 4);
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
    }
    event_112_85_end: ;
}
void Frames::event_func_20749()
{
    // event 113_85
    {
        if (!(group_main_engine_1)) goto event_113_85_end;
        playerfireball_4155_instances.clear_selection();
        for (ObjectIterator it(playerfireball_4155_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!playerfireball_4155_instances.has_selection()) goto event_113_85_end;
        FrameObject * single_instance_113_85_0; single_instance_113_85_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(playerfireball_4155_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_113_85_0 == NULL)
                    single_instance_113_85_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_113_85_0))->force_speed(50);
        ((Active*)((Active*)single_instance_113_85_0))->set_scale(0.5);
        for (ObjectIterator it(playerfireball_4155_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
    }
    event_113_85_end: ;
}
void Frames::event_func_20750()
{
    // event 114_85
    {
        if (!(group_main_engine_1)) goto event_114_85_end;
        playerfireball_4155_instances.clear_selection();
        for (ObjectIterator it(playerfireball_4155_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(2))) { it.deselect(); continue; }
        }
        if (!playerfireball_4155_instances.has_selection()) goto event_114_85_end;
        for (ObjectIterator it(playerfireball_4155_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.add(4, 1);
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        {
            SavedSelection extra_playerfireball_4155_instances(playerfireball_4155_instances);
            for (SavedIterator it(extra_playerfireball_4155_instances); !it.end(); ++it) {
                foreach_instance_f = ((Active*)*it);
                foreach_f_85();
            }
        }
    }
    event_114_85_end: ;
}
void Frames::event_func_20751()
{
    // event 118_85
    {
        if (!(group_main_engine_1)) goto event_118_85_end;
        playerholodragonlaser_4160_instances.clear_selection();
        for (ObjectIterator it(playerholodragonlaser_4160_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!playerholodragonlaser_4160_instances.has_selection()) goto event_118_85_end;
        qualifier_20.clear_selection();
        if (!check_overlap(playerholodragonlaser_4160_instances, qualifier_20)) goto event_118_85_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_118_85_end;
        FrameObject * single_instance_118_85_0; single_instance_118_85_0 = pick_random(qualifier_20);
        if (single_instance_118_85_0 == NULL) goto event_118_85_end;
        ((Active*)((Active*)single_instance_118_85_0))->alterables->values.sub(0, get_min(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(4)*0.024, 2));
        FrameObject * single_instance_118_85_1; single_instance_118_85_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(((Active*)single_instance_118_85_0)->x + 0, ((Active*)single_instance_118_85_0)->y + 0), ((Active*)single_instance_118_85_0)->layer);
            if (single_instance_118_85_1 == NULL)
                single_instance_118_85_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_118_85_1))->force_speed(100);
        ((Active*)((Active*)single_instance_118_85_1))->set_scale(0.5);
        ((Active*)((Active*)single_instance_118_85_1))->set_x(((Active*)single_instance_118_85_1)->get_x()-12+randrange(25));
        ((Active*)((Active*)single_instance_118_85_1))->set_y(((Active*)get_single(playerholodragonlaser_4160_instances, default_active_instance))->get_y()-12+randrange(25));
    }
    event_118_85_end: ;
}
void Frames::event_func_20752()
{
    // event 119_85
    {
        if (!(group_main_engine_1)) goto event_119_85_end;
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_119_85_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 1);
        }
    }
    event_119_85_end: ;
}
void Frames::event_func_20753()
{
    // event 120_85
    {
        if (!(group_main_engine_1)) goto event_120_85_end;
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_120_85_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_120_85_end: ;
}
void Frames::event_func_20754()
{
    // event 121_85
    bool or_result_121_85 = false;
    bool or_temp_result_121_85_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_enemies_enemy_spawning_1)) goto or_event_121_85_0_end;
        guimeters_4173_instances.clear_selection();
        for (ObjectIterator it(guimeters_4173_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (((Counter*)get_instance(guidistance_4172_instances))->value))) { it.deselect(); continue; }
        }
        if (!guimeters_4173_instances.has_selection()) goto or_event_121_85_0_end;
        guidistance_4172_instances.clear_selection();
        for (ObjectIterator it(guidistance_4172_instances); !it.end(); ++it) {
            if (!((((Counter*)(*it))->value) > (5600))) { it.deselect(); continue; }
        }
        if (!guidistance_4172_instances.has_selection()) goto or_event_121_85_0_end;
        or_result_121_85 = true;
        or_temp_result_121_85_0 = true;
    }
    or_event_121_85_0_end: ;
    guidistance_4172_instances.clear_saved_selection();
    guimeters_4173_instances.clear_saved_selection();
    if (or_temp_result_121_85_0) {
        guidistance_4172_instances.save_selection();
        guimeters_4173_instances.save_selection();
    }
    // event 121_85
    bool or_temp_result_121_85_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_enemies_enemy_spawning_1)) goto or_event_121_85_1_end;
        guimeters_4173_instances.clear_selection();
        for (ObjectIterator it(guimeters_4173_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (((Counter*)get_instance(guidistance_4172_instances))->value))) { it.deselect(); continue; }
        }
        if (!guimeters_4173_instances.has_selection()) goto or_event_121_85_1_end;
        guidistance_4172_instances.clear_selection();
        for (ObjectIterator it(guidistance_4172_instances); !it.end(); ++it) {
            if (!((((Counter*)(*it))->value) < (5000))) { it.deselect(); continue; }
            if (!((((Counter*)(*it))->value) > (4260))) { it.deselect(); continue; }
        }
        if (!guidistance_4172_instances.has_selection()) goto or_event_121_85_1_end;
        or_result_121_85 = true;
        or_temp_result_121_85_1 = true;
    }
    or_event_121_85_1_end: ;
    if (or_temp_result_121_85_1) {
        guidistance_4172_instances.save_selection();
        guimeters_4173_instances.save_selection();
    }
    // event 121_85
    bool or_temp_result_121_85_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_enemies_enemy_spawning_1)) goto or_event_121_85_2_end;
        guimeters_4173_instances.clear_selection();
        for (ObjectIterator it(guimeters_4173_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (((Counter*)get_instance(guidistance_4172_instances))->value))) { it.deselect(); continue; }
        }
        if (!guimeters_4173_instances.has_selection()) goto or_event_121_85_2_end;
        guidistance_4172_instances.clear_selection();
        for (ObjectIterator it(guidistance_4172_instances); !it.end(); ++it) {
            if (!((((Counter*)(*it))->value) < (4000))) { it.deselect(); continue; }
        }
        if (!guidistance_4172_instances.has_selection()) goto or_event_121_85_2_end;
        or_result_121_85 = true;
        or_temp_result_121_85_2 = true;
        or_event_121_85_2_end: ;
        if (or_temp_result_121_85_2) {
            guidistance_4172_instances.save_selection();
            guimeters_4173_instances.save_selection();
        }
        if (!or_result_121_85) goto or_final_or_event_121_85_2_end;
        guidistance_4172_instances.empty_selection();
        guimeters_4173_instances.empty_selection();
        if (or_temp_result_121_85_0 || or_temp_result_121_85_1 || or_temp_result_121_85_2) {
            guidistance_4172_instances.restore_selection();
        }
        if (or_temp_result_121_85_0 || or_temp_result_121_85_1 || or_temp_result_121_85_2) {
            guimeters_4173_instances.restore_selection();
        }
        for (ObjectIterator it(guimeters_4173_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 50);
        }
        enemyorb_4152_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemyorb_4152(481, 126), 1);
            enemyorb_4152_instances.add_back();
        }
        for (ObjectIterator it(enemyorb_4152_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, width+32);
            ((Active*)*it)->alterables->values.set(4, get_max(20, get_min(((Active*)get_instance(playerdragonhead_3984_instances, it.current_index, default_active_instance))->alterables->values.get(1)-30+randrange(61), 220)));
            ((Active*)*it)->alterables->values.set(5, randrange(360));
        }
    }
    or_final_or_event_121_85_2_end: ;
}
void Frames::event_func_20755()
{
    // event 122_85
    {
        if (!(group_main_engine_1 && group_main_engine_enemies_enemy_spawning_1)) goto event_122_85_end;
        if (!((((Active*)get_instance(guimeters_4173_instances))->alterables->values.get(5)) > (((Counter*)get_instance(guidistance_4172_instances))->value))) goto event_122_85_end;
        ((Active*)get_instance(guimeters_4173_instances))->alterables->values.sub(5, 50);
        enemyorb_4152_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemyorb_4152(481, 126), 1);
            enemyorb_4152_instances.add_back();
        }
        for (ObjectIterator it(enemyorb_4152_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, width+32);
            ((Active*)*it)->alterables->values.set(4, 20+randrange(200));
            ((Active*)*it)->alterables->values.set(5, randrange(360));
        }
    }
    event_122_85_end: ;
}
void Frames::event_func_20756()
{
    // event 123_85
    {
        if (!(group_main_engine_1 && group_main_engine_enemies_enemy_spawning_1)) goto event_123_85_end;
        if (!((((Active*)get_instance(guimeters_4173_instances))->alterables->values.get(1)) > (((Counter*)get_instance(guidistance_4172_instances))->value))) goto event_123_85_end;
        if (!((((Counter*)get_instance(guidistance_4172_instances))->value) > (500))) goto event_123_85_end;
        ((Active*)get_instance(guimeters_4173_instances))->alterables->values.sub(1, 300);
        enemythundercarrierarm_4154_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemythundercarrierarm_4154(454, 131), 1);
            enemythundercarrierarm_4154_instances.add_back();
        }
        enemythundercarrier_4153_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemythundercarrier_4153(486, 133), 1);
            enemythundercarrier_4153_instances.add_back();
        }
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, width+32);
            ((Active*)*it)->alterables->values.set(4, 20+randrange(200));
            ((Active*)*it)->alterables->values.set(5, randrange(360));
        }
        media.play_id(SOUND_BIKE_DRIVEBY_127, -1, 1);
    }
    event_123_85_end: ;
}
void Frames::event_func_20757()
{
    // event 124_85
    {
        if (!(group_main_engine_1 && group_main_engine_enemies_enemy_spawning_1)) goto event_124_85_end;
        if (!((((Counter*)get_instance(guidistance_4172_instances))->value) <= (5400))) goto event_124_85_end;
        if (once_condition_124_85) goto event_124_85_end;
        once_condition_124_85 = true;
        ((Active*)get_instance(guimeters_4173_instances))->alterables->values.sub(1, 300);
        enemythundercarrierarm_4154_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemythundercarrierarm_4154(454, 131), 1);
            enemythundercarrierarm_4154_instances.add_back();
        }
        enemythundercarrier_4153_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemythundercarrier_4153(486, 133), 1);
            enemythundercarrier_4153_instances.add_back();
        }
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, width+32);
            ((Active*)*it)->alterables->values.set(4, 20+randrange(200));
            ((Active*)*it)->alterables->values.set(5, randrange(360));
        }
        media.play_id(SOUND_BIKE_DRIVEBY_127, -1, 1);
    }
    event_124_85_end: ;
}
void Frames::event_func_20758()
{
    // event 125_85
    {
        if (!(group_main_engine_1 && group_main_engine_enemies_enemy_spawning_1)) goto event_125_85_end;
        if (!((((Counter*)get_instance(guidistance_4172_instances))->value) <= (5250))) goto event_125_85_end;
        if (once_condition_125_85) goto event_125_85_end;
        once_condition_125_85 = true;
        ((Active*)get_instance(guimeters_4173_instances))->alterables->values.sub(1, 300);
        enemythundercarrierarm_4154_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemythundercarrierarm_4154(454, 131), 1);
            enemythundercarrierarm_4154_instances.add_back();
        }
        enemythundercarrier_4153_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemythundercarrier_4153(486, 133), 1);
            enemythundercarrier_4153_instances.add_back();
        }
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, width+32);
            ((Active*)*it)->alterables->values.set(4, 20+randrange(200));
            ((Active*)*it)->alterables->values.set(5, randrange(360));
        }
        media.play_id(SOUND_BIKE_DRIVEBY_127, -1, 1);
    }
    event_125_85_end: ;
}
void Frames::event_func_20759()
{
    // event 126_85
    {
        if (!(group_main_engine_1 && group_main_engine_enemies_enemy_spawning_1)) goto event_126_85_end;
        if (!((((Counter*)get_instance(guidistance_4172_instances))->value) <= (5200))) goto event_126_85_end;
        if (once_condition_126_85) goto event_126_85_end;
        once_condition_126_85 = true;
        ((Active*)get_instance(guimeters_4173_instances))->alterables->values.sub(1, 300);
        enemythundercarrierarm_4154_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemythundercarrierarm_4154(454, 131), 1);
            enemythundercarrierarm_4154_instances.add_back();
        }
        enemythundercarrier_4153_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemythundercarrier_4153(486, 133), 1);
            enemythundercarrier_4153_instances.add_back();
        }
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, width+32);
            ((Active*)*it)->alterables->values.set(4, 20+randrange(200));
            ((Active*)*it)->alterables->values.set(5, randrange(360));
        }
        media.play_id(SOUND_BIKE_DRIVEBY_127, -1, 1);
    }
    event_126_85_end: ;
}
void Frames::event_func_20760()
{
    // event 127_85
    {
        if (!(group_main_engine_1 && group_main_engine_enemies_enemy_spawning_1)) goto event_127_85_end;
        if (!((((Counter*)get_instance(guidistance_4172_instances))->value) <= (5100))) goto event_127_85_end;
        if (once_condition_127_85) goto event_127_85_end;
        once_condition_127_85 = true;
        ((Active*)get_instance(guimeters_4173_instances))->alterables->values.sub(1, 300);
        enemythundercarrierarm_4154_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemythundercarrierarm_4154(454, 131), 1);
            enemythundercarrierarm_4154_instances.add_back();
        }
        enemythundercarrier_4153_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemythundercarrier_4153(486, 133), 1);
            enemythundercarrier_4153_instances.add_back();
        }
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, width+32);
            ((Active*)*it)->alterables->values.set(4, 20+randrange(200));
            ((Active*)*it)->alterables->values.set(5, randrange(360));
        }
        media.play_id(SOUND_BIKE_DRIVEBY_127, -1, 1);
        ((Active*)get_instance(guimeters_4173_instances))->alterables->values.set(0, 5000);
    }
    event_127_85_end: ;
}
void Frames::event_func_20761()
{
    // event 128_85
    {
        if (!(group_main_engine_1 && group_main_engine_enemies_enemy_spawning_1)) goto event_128_85_end;
        if (!((((Active*)get_instance(guimeters_4173_instances))->alterables->values.get(2)) > (((Counter*)get_instance(guidistance_4172_instances))->value))) goto event_128_85_end;
        if (!((((Counter*)get_instance(guidistance_4172_instances))->value) > (1000))) goto event_128_85_end;
        ((Active*)get_instance(guimeters_4173_instances))->alterables->values.sub(2, 200);
        enemythundercarrierarm_4154_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemythundercarrierarm_4154(454, 131), 1);
            enemythundercarrierarm_4154_instances.add_back();
        }
        enemythundercarrier_4153_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemythundercarrier_4153(486, 133), 1);
            enemythundercarrier_4153_instances.add_back();
        }
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, width+32);
            ((Active*)*it)->alterables->values.set(4, get_max(20, get_min(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(1)-30+randrange(61), 220)));
            ((Active*)*it)->alterables->values.set(5, randrange(360));
        }
        media.play_id(SOUND_BIKE_DRIVEBY_127, -1, 1);
    }
    event_128_85_end: ;
}
void Frames::event_func_20762()
{
    // event 129_85
    {
        if (!(group_main_engine_1 && group_main_engine_enemies_enemy_spawning_1)) goto event_129_85_end;
        if (!((((Active*)get_instance(guimeters_4173_instances))->alterables->values.get(3)) > (((Counter*)get_instance(guidistance_4172_instances))->value))) goto event_129_85_end;
        if (!((((Counter*)get_instance(guidistance_4172_instances))->value) > (500))) goto event_129_85_end;
        ((Active*)get_instance(guimeters_4173_instances))->alterables->values.sub(3, 320);
        enemyufo_4156_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemyufo_4156(458, 141), 1);
            enemyufo_4156_instances.add_back();
        }
        for (ObjectIterator it(enemyufo_4156_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, width+32);
            ((Active*)*it)->alterables->values.set(4, 50+randrange(height-100));
        }
    }
    event_129_85_end: ;
}
void Frames::event_func_20763()
{
    // event 130_85
    {
        if (!(group_main_engine_1 && group_main_engine_enemies_enemy_spawning_1)) goto event_130_85_end;
        if (!((((Counter*)get_instance(guidistance_4172_instances))->value) <= (4170))) goto event_130_85_end;
        if (once_condition_130_85) goto event_130_85_end;
        once_condition_130_85 = true;
        ((Active*)get_instance(guimeters_4173_instances))->alterables->values.sub(3, 320);
        enemyufo_4156_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemyufo_4156(458, 141), 1);
            enemyufo_4156_instances.add_back();
        }
        for (ObjectIterator it(enemyufo_4156_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, width+32);
            ((Active*)*it)->alterables->values.set(4, 50+randrange(height-100));
        }
    }
    event_130_85_end: ;
}
void Frames::event_func_20764()
{
    // event 131_85
    {
        if (!(group_main_engine_1 && group_main_engine_enemies_enemy_spawning_1)) goto event_131_85_end;
        if (!((((Counter*)get_instance(guidistance_4172_instances))->value) <= (4140))) goto event_131_85_end;
        if (once_condition_131_85) goto event_131_85_end;
        once_condition_131_85 = true;
        ((Active*)get_instance(guimeters_4173_instances))->alterables->values.sub(3, 320);
        enemyufo_4156_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemyufo_4156(458, 141), 1);
            enemyufo_4156_instances.add_back();
        }
        for (ObjectIterator it(enemyufo_4156_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, width+32);
            ((Active*)*it)->alterables->values.set(4, 50+randrange(height-100));
        }
    }
    event_131_85_end: ;
}
void Frames::event_func_20765()
{
    // event 132_85
    {
        if (!(group_main_engine_1 && group_main_engine_enemies_enemy_spawning_1)) goto event_132_85_end;
        if (!((((Active*)get_instance(guimeters_4173_instances))->alterables->values.get(4)) > (((Counter*)get_instance(guidistance_4172_instances))->value))) goto event_132_85_end;
        ((Active*)get_instance(guimeters_4173_instances))->alterables->values.sub(4, 380);
        enemyufo_4156_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemyufo_4156(458, 141), 1);
            enemyufo_4156_instances.add_back();
        }
        for (ObjectIterator it(enemyufo_4156_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, width+32);
            ((Active*)*it)->alterables->values.set(4, 50+randrange(height-100));
        }
    }
    event_132_85_end: ;
}
void Frames::event_func_20766()
{
    // event 133_85
    {
        if (!(group_main_engine_1 && group_main_engine_enemies_enemy_spawning_1)) goto event_133_85_end;
        if (!((((Counter*)get_instance(guidistance_4172_instances))->value) <= (4010))) goto event_133_85_end;
        if (once_condition_133_85) goto event_133_85_end;
        once_condition_133_85 = true;
        ((Active*)get_instance(guimeters_4173_instances))->alterables->values.set(0, 4000);
    }
    event_133_85_end: ;
}
void Frames::event_func_20767()
{
    // event 134_85
    {
        if (!(group_main_engine_1)) goto event_134_85_end;
        qualifier_17.clear_selection();
        for (QualifierIterator it(qualifier_17); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->alterables->values.add(3, ((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->alterables->values.add(4, ((Active*)*it)->alterables->values.get(6));
        }
    }
    event_134_85_end: ;
}
void Frames::event_func_20768()
{
    // event 135_85
    {
        if (!(group_main_engine_1)) goto event_135_85_end;
        qualifier_17.clear_selection();
        for (QualifierIterator it(qualifier_17); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (-100))) { it.deselect(); continue; }
        }
        if (!qualifier_17.has_selection()) goto event_135_85_end;
        for (QualifierIterator it(qualifier_17); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_135_85_end: ;
}
void Frames::event_func_20769()
{
    // event 136_85
    {
        if (!(group_main_engine_1)) goto event_136_85_end;
        enemyorb_4152_instances.clear_selection();
        for (ObjectIterator it(enemyorb_4152_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (width+10))) { it.deselect(); continue; }
        }
        if (!enemyorb_4152_instances.has_selection()) goto event_136_85_end;
        for (ObjectIterator it(enemyorb_4152_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 2);
        }
    }
    event_136_85_end: ;
}
void Frames::event_func_20770()
{
    // event 137_85
    {
        if (!(group_main_engine_1)) goto event_137_85_end;
        enemyorb_4152_instances.clear_selection();
        for (ObjectIterator it(enemyorb_4152_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4)+sin_deg(((Active*)*it)->alterables->values.get(5))*8);
            ((Active*)*it)->alterables->values.add(5, 5);
            ((Active*)*it)->alterables->values.sub(3, 2);
            ((Active*)*it)->alterables->values.add(6, 1);
        }
    }
    event_137_85_end: ;
}
void Frames::event_func_20771()
{
    // event 138_85
    {
        if (!(group_main_engine_1)) goto event_138_85_end;
        enemyorb_4152_instances.clear_selection();
        for (ObjectIterator it(enemyorb_4152_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (30))) { it.deselect(); continue; }
        }
        if (!enemyorb_4152_instances.has_selection()) goto event_138_85_end;
        FrameObject * single_instance_138_85_0; single_instance_138_85_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyorb_4152_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyorbshot_3293(parent->x + -12, parent->y + 0), parent->layer);
                if (single_instance_138_85_0 == NULL)
                    single_instance_138_85_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_138_85_0))->alterables->values.set(3, ((Active*)single_instance_138_85_0)->get_x());
        ((Active*)((Active*)single_instance_138_85_0))->alterables->values.set(4, ((Active*)single_instance_138_85_0)->get_y());
        media.play_id(SOUND_BLASTER_E_329, -1, 1);
        ((Active*)((Active*)single_instance_138_85_0))->alterables->values.set(6, 0.25);
    }
    event_138_85_end: ;
}
void Frames::event_func_20772()
{
    // event 139_85
    {
        if (!(group_main_engine_1)) goto event_139_85_end;
        enemyorb_4152_instances.clear_selection();
        for (ObjectIterator it(enemyorb_4152_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (35))) { it.deselect(); continue; }
        }
        if (!enemyorb_4152_instances.has_selection()) goto event_139_85_end;
        FrameObject * single_instance_139_85_0; single_instance_139_85_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyorb_4152_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyorbshot_3293(parent->x + -12, parent->y + 0), parent->layer);
                if (single_instance_139_85_0 == NULL)
                    single_instance_139_85_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_139_85_0))->alterables->values.set(3, ((Active*)single_instance_139_85_0)->get_x());
        ((Active*)((Active*)single_instance_139_85_0))->alterables->values.set(4, ((Active*)single_instance_139_85_0)->get_y());
        media.play_id(SOUND_BLASTER_E_329, -1, 1);
    }
    event_139_85_end: ;
}
void Frames::event_func_20773()
{
    // event 140_85
    {
        if (!(group_main_engine_1)) goto event_140_85_end;
        enemyorb_4152_instances.clear_selection();
        for (ObjectIterator it(enemyorb_4152_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (40))) { it.deselect(); continue; }
        }
        if (!enemyorb_4152_instances.has_selection()) goto event_140_85_end;
        FrameObject * single_instance_140_85_0; single_instance_140_85_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyorb_4152_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyorbshot_3293(parent->x + -12, parent->y + 0), parent->layer);
                if (single_instance_140_85_0 == NULL)
                    single_instance_140_85_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_140_85_0))->alterables->values.set(3, ((Active*)single_instance_140_85_0)->get_x());
        ((Active*)((Active*)single_instance_140_85_0))->alterables->values.set(4, ((Active*)single_instance_140_85_0)->get_y());
        media.play_id(SOUND_BLASTER_E_329, -1, 1);
        ((Active*)((Active*)single_instance_140_85_0))->alterables->values.set(6, -0.25);
    }
    event_140_85_end: ;
}
void Frames::event_func_20774()
{
    // event 141_85
    {
        if (!(group_main_engine_1)) goto event_141_85_end;
        enemyorb_4152_instances.clear_selection();
        for (ObjectIterator it(enemyorb_4152_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (60))) { it.deselect(); continue; }
        }
        if (!enemyorb_4152_instances.has_selection()) goto event_141_85_end;
        for (ObjectIterator it(enemyorb_4152_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, -60);
        }
    }
    event_141_85_end: ;
}
void Frames::event_func_20775()
{
    // event 142_85
    {
        if (!(group_main_engine_1)) goto event_142_85_end;
        enemyorbshot_3293_instances.clear_selection();
        playerholodragonlaser_4160_instances.clear_selection();
        if (!check_overlap(enemyorbshot_3293_instances, playerholodragonlaser_4160_instances)) goto event_142_85_end;
        for (ObjectIterator it(playerholodragonlaser_4160_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!playerholodragonlaser_4160_instances.has_selection()) goto event_142_85_end;
        if (!((((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(4)) > (50))) goto event_142_85_end;
        FrameObject * single_instance_142_85_0; single_instance_142_85_0 = pick_random(enemyorbshot_3293_instances);
        if (single_instance_142_85_0 == NULL) goto event_142_85_end;
        ((Active*)((Active*)single_instance_142_85_0))->destroy();
        FrameObject * single_instance_142_85_1; single_instance_142_85_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(((Active*)single_instance_142_85_0)->x + 0, ((Active*)single_instance_142_85_0)->y + 0), ((Active*)single_instance_142_85_0)->layer);
            if (single_instance_142_85_1 == NULL)
                single_instance_142_85_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_142_85_1))->set_scale(0.3);
    }
    event_142_85_end: ;
}
void Frames::event_func_20776()
{
    // event 143_85
    {
        if (!(group_main_engine_1)) goto event_143_85_end;
        playerfireball_4155_instances.clear_selection();
        enemyorbshot_3293_instances.clear_selection();
        if (!check_overlap(playerfireball_4155_instances, enemyorbshot_3293_instances)) goto event_143_85_end;
        FrameObject * single_instance_143_85_0; single_instance_143_85_0 = pick_random(enemyorbshot_3293_instances);
        if (single_instance_143_85_0 == NULL) goto event_143_85_end;
        ((Active*)((Active*)single_instance_143_85_0))->destroy();
        FrameObject * single_instance_143_85_1; single_instance_143_85_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(((Active*)single_instance_143_85_0)->x + 0, ((Active*)single_instance_143_85_0)->y + 0), ((Active*)single_instance_143_85_0)->layer);
            if (single_instance_143_85_1 == NULL)
                single_instance_143_85_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_143_85_1))->set_scale(0.3);
        for (ObjectIterator it(playerfireball_4155_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_143_85_end: ;
}
void Frames::event_func_20777()
{
    // event 144_85
    {
        if (!(group_main_engine_1)) goto event_144_85_end;
        minibossflame_1199_instances.clear_selection();
        enemyorbshot_3293_instances.clear_selection();
        if (!check_overlap(minibossflame_1199_instances, enemyorbshot_3293_instances)) goto event_144_85_end;
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!minibossflame_1199_instances.has_selection()) goto event_144_85_end;
        FrameObject * single_instance_144_85_0; single_instance_144_85_0 = pick_random(enemyorbshot_3293_instances);
        if (single_instance_144_85_0 == NULL) goto event_144_85_end;
        ((Active*)((Active*)single_instance_144_85_0))->destroy();
        FrameObject * single_instance_144_85_1; single_instance_144_85_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(((Active*)single_instance_144_85_0)->x + 0, ((Active*)single_instance_144_85_0)->y + 0), ((Active*)single_instance_144_85_0)->layer);
            if (single_instance_144_85_1 == NULL)
                single_instance_144_85_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_144_85_1))->set_scale(0.3);
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_144_85_end: ;
}
void Frames::event_func_20778()
{
    // event 145_85
    {
        if (!(group_main_engine_1)) goto event_145_85_end;
        enemyorb_4152_instances.clear_selection();
        for (ObjectIterator it(enemyorb_4152_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyorb_4152_instances.has_selection()) goto event_145_85_end;
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(9, 6);
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        {
            loop_xplode_running = true;
            int times = int(8);
            loop_xplode_index = 0;
            while (loop_xplode_index < times) {
                loop_xplode_85();
                if (!loop_xplode_running) break;
                loop_xplode_index++;
            }
        }
    }
    event_145_85_end: ;
}
void Frames::event_func_20779()
{
    // event 147_85
    {
        if (!(group_main_engine_1)) goto event_147_85_end;
        enemyorb_4152_instances.clear_selection();
        for (ObjectIterator it(enemyorb_4152_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) >= (7))) { it.deselect(); continue; }
        }
        if (!enemyorb_4152_instances.has_selection()) goto event_147_85_end;
        for (ObjectIterator it(enemyorb_4152_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_147_85_end: ;
}
void Frames::event_func_20780()
{
    // event 148_85
    {
        if (!(group_main_engine_1)) goto event_148_85_end;
        enemyorb_4152_instances.clear_selection();
        for (ObjectIterator it(enemyorb_4152_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (-32))) { it.deselect(); continue; }
        }
        if (!enemyorb_4152_instances.has_selection()) goto event_148_85_end;
        for (ObjectIterator it(enemyorb_4152_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_148_85_end: ;
}
void Frames::event_func_20781()
{
    // event 149_85
    {
        if (!(group_main_engine_1)) goto event_149_85_end;
        enemythundercarrier_4153_instances.clear_selection();
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (width+10))) { it.deselect(); continue; }
        }
        if (!enemythundercarrier_4153_instances.has_selection()) goto event_149_85_end;
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 2);
        }
    }
    event_149_85_end: ;
}
void Frames::event_func_20782()
{
    // event 150_85
    {
        if (!(group_main_engine_1)) goto event_150_85_end;
        enemythundercarrier_4153_instances.clear_selection();
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (width+48))) { it.deselect(); continue; }
        }
        if (!enemythundercarrier_4153_instances.has_selection()) goto event_150_85_end;
        if (!check_overlap(enemythundercarrier_4153_instances, enemythundercarrier_4153_instances)) goto event_150_85_end;
        FrameObject * single_instance_150_85_0; single_instance_150_85_0 = pick_random(enemythundercarrier_4153_instances);
        if (single_instance_150_85_0 == NULL) goto event_150_85_end;
        ((Active*)((Active*)single_instance_150_85_0))->alterables->values.set(4, 50+randrange(height-100));
        ((Active*)((Active*)single_instance_150_85_0))->set_y(((Active*)single_instance_150_85_0)->alterables->values.get(4));
    }
    event_150_85_end: ;
}
void Frames::event_func_20783()
{
    // event 151_85
    {
        if (!(group_main_engine_1)) goto event_151_85_end;
        if (!((enemythundercarrierarm_4154_instances.size()) > (enemythundercarrier_4153_instances.size()))) goto event_151_85_end;
        enemythundercarrierarm_4154_instances.clear_selection();
        FrameObject * single_instance_151_85_0; single_instance_151_85_0 = pick_random(enemythundercarrierarm_4154_instances);
        if (single_instance_151_85_0 == NULL) goto event_151_85_end;
        ((Active*)((Active*)single_instance_151_85_0))->destroy();
    }
    event_151_85_end: ;
}
void Frames::event_func_20784()
{
    // event 152_85
    {
        if (!(group_main_engine_1)) goto event_152_85_end;
        enemythundercarrier_4153_instances.clear_selection();
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4));
        }
        enemythundercarrierarm_4154_instances.clear_selection();
        for (ObjectIterator it(enemythundercarrierarm_4154_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(enemythundercarrier_4153_instances, it.current_index));
            if (parent == NULL) goto pos_end_152_85_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_152_85_0: ;
        }
        for (ObjectIterator it(enemythundercarrierarm_4154_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_single(enemythundercarrier_4153_instances, it.current_index, default_active_instance))->alterables->values.get(5));
        }
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, ((Active*)*it)->alterables->values.get(7));
        }
        for (ObjectIterator it(enemythundercarrierarm_4154_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_152_85_end: ;
}
void Frames::event_func_20785()
{
    // event 153_85
    {
        if (!(group_main_engine_1)) goto event_153_85_end;
        enemythundercarrier_4153_instances.clear_selection();
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!enemythundercarrier_4153_instances.has_selection()) goto event_153_85_end;
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7)+0.1, -1));
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    event_153_85_end: ;
}
