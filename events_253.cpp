#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_20321()
{
    // event 2710_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2710_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (230))) goto event_2710_83_end;
        if (not_always_2710_83 > loop_count) {
            not_always_2710_83 = loop_count + 2;
            goto event_2710_83_end;
        }
        not_always_2710_83 = loop_count + 2;
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()-20);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
    }
    event_2710_83_end: ;
}
void Frames::event_func_20322()
{
    // event 2711_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2711_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2711_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (230))) goto event_2711_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2711_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
    }
    event_2711_83_end: ;
}
void Frames::event_func_20323()
{
    // event 2712_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2712_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_2712_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (20))) goto event_2712_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
        }
    }
    event_2712_83_end: ;
}
void Frames::event_func_20324()
{
    // event 2713_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2713_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_2713_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (50))) goto event_2713_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(36);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_2713_83_end: ;
}
void Frames::event_func_20325()
{
    // event 2714_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2714_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (12))) goto event_2714_83_end;
        if (not_always_2714_83 > loop_count) {
            not_always_2714_83 = loop_count + 2;
            goto event_2714_83_end;
        }
        not_always_2714_83 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
            group_pause_1 = false;
    
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_2000_69);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_2714_83_end: ;
}
void Frames::event_func_20326()
{
    // event 2715_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2715_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (12))) goto event_2715_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_2715_83_end: ;
}
void Frames::event_func_20327()
{
    // event 2716_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2716_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (12))) goto event_2716_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2716_83_end;
        global_values->set(4, 0);
        next_frame = 50 + 0;    
    
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, ((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 3));
    }
    event_2716_83_end: ;
}
void Frames::event_func_20328()
{
    // event 2718_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1)) goto event_2718_83_end;
        ((Active*)get_instance(npcpangu_3073_instances))->set_y(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(10)+sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(9))*8);
        {
            FrameObject * parent = ((Active*)get_instance(npcpangu_3073_instances));
            if (parent == NULL) goto pos_end_2718_83_0;
            ((Active*)get_instance(npchologram2_3074_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2718_83_0: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(npchologram2_3074_instances));
            if (parent == NULL) goto pos_end_2718_83_1;
            ((Active*)get_instance(npchologram1_3060_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_2718_83_1: ;
        }
    }
    event_2718_83_end: ;
}
void Frames::event_func_20329()
{
    // event 2719_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1)) goto event_2719_83_end;
        if (!(((Active*)get_instance(npcpangu_3073_instances))->alterables->flags.is_off(1))) goto event_2719_83_end;
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.add(3, 2);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.add(8, 2);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.add(9, 2);
    }
    event_2719_83_end: ;
}
void Frames::event_func_20330()
{
    // event 2720_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1)) goto event_2720_83_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(11)) == (0))) goto event_2720_83_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(14)) == (1))) goto event_2720_83_end;
        npcpanguleftarm_3075_instances.clear_selection();
        for (ObjectIterator it(npcpanguleftarm_3075_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcpangu_3073_instances))->get_action_x()+cos_deg(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*15)*((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(6)+((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(4))*((Active*)*it)->alterables->values.get(0)*6);
            ((Active*)*it)->set_y(((Active*)get_instance(npcpangu_3073_instances))->get_action_y()+sin_deg(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*15)*((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(6)+((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(4))*((Active*)*it)->alterables->values.get(0)*6);
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*20)*(0-((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(6)-((Active*)*it)->alterables->values.get(0)*4)-((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(4), 0);
        }
        npcpangurightarm_3076_instances.clear_selection();
        for (ObjectIterator it(npcpangurightarm_3076_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcpangu_3073_instances))->get_action_x()+28+cos_deg(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(8)-((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15)*((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(7)+((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(5))*((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*6);
            ((Active*)*it)->set_y(((Active*)get_instance(npcpangu_3073_instances))->get_action_y()-1+sin_deg(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(8)-((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15)*((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(7)+((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(5))*((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*6);
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(8)-((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*20)*(0-((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(7)-((Active*)*it)->alterables->values.get(0)*4)-((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(5), 0);
        }
        ((Active*)get_instance(npcpangu_3073_instances))->set_direction(0);
        for (ObjectIterator it(npcpanguleftarm_3075_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(npcpangurightarm_3076_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_2720_83_end: ;
}
void Frames::event_func_20331()
{
    // event 2721_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1)) goto event_2721_83_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(11)) == (0))) goto event_2721_83_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(14)) == (-1))) goto event_2721_83_end;
        ((Active*)get_instance(npcpangu_3073_instances))->set_direction(16);
        npcpanguleftarm_3075_instances.clear_selection();
        for (ObjectIterator it(npcpanguleftarm_3075_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcpangu_3073_instances))->get_action_x()-28+cos_deg(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*15)*((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(6)+((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(4))*((Active*)*it)->alterables->values.get(0)*6);
            ((Active*)*it)->set_y(((Active*)get_instance(npcpangu_3073_instances))->get_action_y()+sin_deg(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*15)*((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(6)+((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(4))*((Active*)*it)->alterables->values.get(0)*6);
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*20)*(0-((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(6)-((Active*)*it)->alterables->values.get(0)*4)-((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(4), 0);
            ((Active*)*it)->set_direction(16);
        }
        npcpangurightarm_3076_instances.clear_selection();
        for (ObjectIterator it(npcpangurightarm_3076_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcpangu_3073_instances))->get_action_x()+cos_deg(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(8)-((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15)*((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(7)+((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(5))*((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*6);
            ((Active*)*it)->set_y(((Active*)get_instance(npcpangu_3073_instances))->get_action_y()-1+sin_deg(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(8)-((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15)*((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(7)+((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(5))*((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*6);
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(8)-((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*20)*(0-((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(7)-((Active*)*it)->alterables->values.get(0)*4)-((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(5), 0);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_2721_83_end: ;
}
void Frames::event_func_20332()
{
    // event 2722_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1)) goto event_2722_83_end;
        npcpanguleftarm_3075_instances.clear_selection();
        for (ObjectIterator it(npcpanguleftarm_3075_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (npcpanguleftarm_3075_instances.size()-1))) { it.deselect(); continue; }
        }
        if (!npcpanguleftarm_3075_instances.has_selection()) goto event_2722_83_end;
        for (ObjectIterator it(npcpanguleftarm_3075_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
        }
    }
    event_2722_83_end: ;
}
void Frames::event_func_20333()
{
    // event 2723_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1)) goto event_2723_83_end;
        npcpangurightarm_3076_instances.clear_selection();
        for (ObjectIterator it(npcpangurightarm_3076_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (npcpangurightarm_3076_instances.size()-1))) { it.deselect(); continue; }
        }
        if (!npcpangurightarm_3076_instances.has_selection()) goto event_2723_83_end;
        for (ObjectIterator it(npcpangurightarm_3076_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
        }
    }
    event_2723_83_end: ;
}
void Frames::event_func_20334()
{
    // event 2724_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1)) goto event_2724_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
    }
    event_2724_83_end: ;
}
void Frames::event_func_20335()
{
    // event 2725_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2725_83_end;
        waterfallback_1016_instances.clear_selection();
        for (ObjectIterator it(waterfallback_1016_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/6)%math_helper%8);
        }
        waterfallfront_1061_instances.clear_selection();
        for (ObjectIterator it(waterfallfront_1061_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)*it)->alterables->values.get(0)-1);
            ((Active*)*it)->force_frame(((global_values->get(3)+3)/math_helper/6)%math_helper%8);
        }
    }
    event_2725_83_end: ;
}
void Frames::event_func_20336()
{
    // event 2726_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2726_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2726_83_end;
        if (once_condition_2726_83) goto event_2726_83_end;
        once_condition_2726_83 = true;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 224);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 6380);
        media.play_id(SOUND_WATERFALL_153, 29-1, 0);
        media.set_channel_volume(29-1, 50);
        ((Active*)get_instance(npchologram1_3060_instances))->set_visible(false);
        ((Active*)get_instance(npchologram2_3074_instances))->set_visible(false);
    }
    event_2726_83_end: ;
}
void Frames::event_func_20337()
{
    // event 2727_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2727_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2727_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
    }
    event_2727_83_end: ;
}
void Frames::event_func_20338()
{
    // event 2728_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2728_83_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_2728_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2728_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        if (!group_pause_1) {
            group_pause_1 = true;
        }
    }
    event_2728_83_end: ;
}
void Frames::event_func_20339()
{
    // event 2729_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2729_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2729_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (330))) goto event_2729_83_end;
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.set(10, ((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_y()-80);
        ((Active*)get_instance(npcpangu_3073_instances))->set_x(((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()+90);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(6475);
            ((Active*)*it)->set_x(440);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(0);
        }
    }
    event_2729_83_end: ;
}
void Frames::event_func_20340()
{
    // event 2730_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2730_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2730_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (64))) goto event_2730_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (330))) goto event_2730_83_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 1);
    }
    event_2730_83_end: ;
}
void Frames::event_func_20341()
{
    // event 2731_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2731_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2731_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (330))) goto event_2731_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (370))) goto event_2731_83_end;
        ((Active*)get_instance(npcpangu_3073_instances))->set_x(((Active*)get_instance(npcpangu_3073_instances))->get_x()+2);
    }
    event_2731_83_end: ;
}
void Frames::event_func_20342()
{
    // event 2732_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2732_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2732_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (400))) goto event_2732_83_end;
        ((Active*)get_instance(npchologram1_3060_instances))->set_direction(1);
        ((Active*)get_instance(npchologram1_3060_instances))->set_visible(true);
        media.play_id(SOUND_PLBLOCK_APPEAR_330, -1, 1);
        ((Active*)get_instance(npchologram2_3074_instances))->set_direction(4);
        ((Active*)get_instance(npchologram2_3074_instances))->set_visible(true);
    }
    event_2732_83_end: ;
}
void Frames::event_func_20343()
{
    // event 2733_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2733_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2733_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (420))) goto event_2733_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(28);
        }
    }
    event_2733_83_end: ;
}
void Frames::event_func_20344()
{
    // event 2734_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2734_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2734_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (430))) goto event_2734_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 233);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2734_83_end: ;
}
void Frames::event_func_20345()
{
    // event 2735_83
    bool or_result_2735_83 = false;
    bool or_temp_result_2735_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto or_event_2735_83_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2735_83_0_end;
        or_result_2735_83 = true;
        or_temp_result_2735_83_0 = true;
    }
    or_event_2735_83_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_2735_83_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 2735_83
    bool or_temp_result_2735_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto or_event_2735_83_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2735_83_1_end;
        or_result_2735_83 = true;
        or_temp_result_2735_83_1 = true;
    }
    or_event_2735_83_1_end: ;
    if (or_temp_result_2735_83_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 2735_83
    bool or_temp_result_2735_83_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto or_event_2735_83_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2735_83_2_end;
        or_result_2735_83 = true;
        or_temp_result_2735_83_2 = true;
        or_event_2735_83_2_end: ;
        if (or_temp_result_2735_83_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_2735_83) goto or_final_or_event_2735_83_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_2735_83_0 || or_temp_result_2735_83_1 || or_temp_result_2735_83_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_2735_83_2_end: ;
}
void Frames::event_func_20346()
{
    // event 2736_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2736_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_2736_83_end;
        if (!(((Active*)get_instance(npchologram1_3060_instances))->test_directions(2))) goto event_2736_83_end;
        if (!media.is_channel_playing(20-1)) goto event_2736_83_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_2736_83_end;
        ((Active*)get_instance(npchologram1_3060_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(npchologram1_3060_instances))->get_frame()+1+randrange(2))%math_helper%3);
    }
    event_2736_83_end: ;
}
void Frames::event_func_20347()
{
    // event 2737_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2737_83_end;
        if (!(!media.is_channel_playing(20-1))) goto event_2737_83_end;
        if (!((((Active*)get_instance(npchologram1_3060_instances))->get_frame()%math_helper%4) > (0))) goto event_2737_83_end;
        if (!(((Active*)get_instance(npchologram1_3060_instances))->test_directions(2))) goto event_2737_83_end;
        ((Active*)get_instance(npchologram1_3060_instances))->force_frame(((Active*)get_instance(npchologram1_3060_instances))->get_frame()-1);
    }
    event_2737_83_end: ;
}
void Frames::event_func_20348()
{
    // event 2738_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2738_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2738_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (233))) goto event_2738_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (235))) goto event_2738_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2738_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2738_83_end: ;
}
void Frames::event_func_20349()
{
    // event 2739_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2739_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2739_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (235))) goto event_2739_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2739_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
    }
    event_2739_83_end: ;
}
void Frames::event_func_20350()
{
    // event 2740_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2740_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_2740_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (15))) goto event_2740_83_end;
        ((Active*)get_instance(npchologram1_3060_instances))->set_direction(4);
        ((Active*)get_instance(npchologram1_3060_instances))->restore_frame();
        ((Active*)get_instance(npchologram1_3060_instances))->restore_speed();
    }
    event_2740_83_end: ;
}
void Frames::event_func_20351()
{
    // event 2741_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2741_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_2741_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (60))) goto event_2741_83_end;
        ((Active*)get_instance(npchologram1_3060_instances))->force_frame(1);
        ((Active*)get_instance(npchologram1_3060_instances))->force_speed(0);
        media.play_id(SOUND_PLBLOCK_APPEAR_330, -1, 1);
    }
    event_2741_83_end: ;
}
void Frames::event_func_20352()
{
    // event 2742_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2742_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_2742_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (90))) goto event_2742_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_2742_83_end: ;
}
void Frames::event_func_20353()
{
    // event 2743_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2743_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2743_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (236))) goto event_2743_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (238))) goto event_2743_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2743_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2743_83_end: ;
}
void Frames::event_func_20354()
{
    // event 2744_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2744_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (235))) goto event_2744_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 1);
    }
    event_2744_83_end: ;
}
void Frames::event_func_20355()
{
    // event 2745_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2745_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (236))) goto event_2745_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 0);
    }
    event_2745_83_end: ;
}
void Frames::event_func_20356()
{
    // event 2746_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2746_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (237))) goto event_2746_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 1);
    }
    event_2746_83_end: ;
}
void Frames::event_func_20357()
{
    // event 2747_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2747_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (238))) goto event_2747_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 0);
    }
    event_2747_83_end: ;
}
void Frames::event_func_20358()
{
    // event 2748_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2748_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (238))) goto event_2748_83_end;
        if (once_condition_2748_83) goto event_2748_83_end;
        once_condition_2748_83 = true;
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()+20);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(3);
    }
    event_2748_83_end: ;
}
void Frames::event_func_20359()
{
    // event 2749_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2749_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (239))) goto event_2749_83_end;
        if (once_condition_2749_83) goto event_2749_83_end;
        once_condition_2749_83 = true;
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()-20);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
    }
    event_2749_83_end: ;
}
void Frames::event_func_20360()
{
    // event 2750_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2750_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2750_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (238))) goto event_2750_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2750_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
    }
    event_2750_83_end: ;
}
void Frames::event_func_20361()
{
    // event 2751_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2751_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_2751_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (15))) goto event_2751_83_end;
        ((Active*)get_instance(npchologram1_3060_instances))->set_direction(5);
        ((Active*)get_instance(npchologram1_3060_instances))->restore_frame();
        ((Active*)get_instance(npchologram1_3060_instances))->restore_speed();
    }
    event_2751_83_end: ;
}
void Frames::event_func_20362()
{
    // event 2752_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2752_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_2752_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (60))) goto event_2752_83_end;
        ((Active*)get_instance(npchologram1_3060_instances))->force_frame(1);
        ((Active*)get_instance(npchologram1_3060_instances))->force_speed(0);
        media.play_id(SOUND_PLBLOCK_APPEAR_330, -1, 1);
    }
    event_2752_83_end: ;
}
void Frames::event_func_20363()
{
    // event 2753_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2753_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_2753_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (90))) goto event_2753_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_2753_83_end: ;
}
void Frames::event_func_20364()
{
    // event 2754_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2754_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2754_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (239))) goto event_2754_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2754_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2754_83_end: ;
}
void Frames::event_func_20365()
{
    // event 2755_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2755_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2755_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (240))) goto event_2755_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2755_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
    }
    event_2755_83_end: ;
}
void Frames::event_func_20366()
{
    // event 2756_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2756_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_2756_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (15))) goto event_2756_83_end;
        ((Active*)get_instance(npchologram1_3060_instances))->set_direction(6);
        ((Active*)get_instance(npchologram1_3060_instances))->restore_frame();
        ((Active*)get_instance(npchologram1_3060_instances))->restore_speed();
    }
    event_2756_83_end: ;
}
void Frames::event_func_20367()
{
    // event 2757_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2757_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_2757_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (60))) goto event_2757_83_end;
        media.play_id(SOUND_PLBLOCK_APPEAR_330, -1, 1);
        ((Active*)get_instance(npchologram1_3060_instances))->set_direction(1);
        ((Active*)get_instance(npchologram1_3060_instances))->force_frame(0);
    }
    event_2757_83_end: ;
}
void Frames::event_func_20368()
{
    // event 2758_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2758_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_2758_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (90))) goto event_2758_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_2758_83_end: ;
}
void Frames::event_func_20369()
{
    // event 2759_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2759_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (240))) goto event_2759_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 1);
    }
    event_2759_83_end: ;
}
void Frames::event_func_20370()
{
    // event 2760_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2760_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (241))) goto event_2760_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 0);
    }
    event_2760_83_end: ;
}
void Frames::event_func_20371()
{
    // event 2761_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2761_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (240))) goto event_2761_83_end;
        if (once_condition_2761_83) goto event_2761_83_end;
        once_condition_2761_83 = true;
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()+20);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(3);
    }
    event_2761_83_end: ;
}
void Frames::event_func_20372()
{
    // event 2762_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2762_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (242))) goto event_2762_83_end;
        if (once_condition_2762_83) goto event_2762_83_end;
        once_condition_2762_83 = true;
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()-20);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
    }
    event_2762_83_end: ;
}
void Frames::event_func_20373()
{
    // event 2763_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2763_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2763_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (241))) goto event_2763_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2763_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
    }
    event_2763_83_end: ;
}
void Frames::event_func_20374()
{
    // event 2764_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2764_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_2764_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (15))) goto event_2764_83_end;
        ((Active*)get_instance(npchologram1_3060_instances))->force_frame(4);
    }
    event_2764_83_end: ;
}
void Frames::event_func_20375()
{
    // event 2765_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2765_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_2765_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_2765_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_2765_83_end: ;
}
void Frames::event_func_20376()
{
    // event 2766_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2766_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_2766_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (15))) goto event_2766_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%2) == (0))) goto event_2766_83_end;
        ((Active*)get_instance(npchologram1_3060_instances))->set_visible(false);
        ((Active*)get_instance(npchologram2_3074_instances))->set_visible(false);
    }
    event_2766_83_end: ;
}
void Frames::event_func_20377()
{
    // event 2767_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2767_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_2767_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (15))) goto event_2767_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%2) == (1))) goto event_2767_83_end;
        ((Active*)get_instance(npchologram1_3060_instances))->set_visible(true);
        ((Active*)get_instance(npchologram2_3074_instances))->set_visible(true);
    }
    event_2767_83_end: ;
}
void Frames::event_func_20378()
{
    // event 2768_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2768_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_2768_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (45))) goto event_2768_83_end;
        ((Active*)get_instance(npchologram1_3060_instances))->set_visible(false);
        ((Active*)get_instance(npchologram2_3074_instances))->set_visible(false);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.play_id(SOUND_PLBLOCK_VANISH_331, -1, 1);
    }
    event_2768_83_end: ;
}
void Frames::event_func_20379()
{
    // event 2769_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2769_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_2769_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (60))) goto event_2769_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(33);
        }
    }
    event_2769_83_end: ;
}
void Frames::event_func_20380()
{
    // event 2770_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2770_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_2770_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (90))) goto event_2770_83_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_4000_162);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_2770_83_end: ;
}
void Frames::event_func_20381()
{
    // event 2771_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2771_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_2771_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (100))) goto event_2771_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
            group_pause_1 = false;
    
    }
    event_2771_83_end: ;
}
void Frames::event_func_20382()
{
    // event 2772_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2772_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_2772_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (100))) goto event_2772_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_2772_83_end: ;
}
void Frames::event_func_20383()
{
    // event 2773_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1)) goto event_2773_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_2773_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (100))) goto event_2773_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2773_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unlock_music_82);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(0, 0);
            group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1) {
            group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1 = true;
        }
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        media.stop_channel(29-1);
    }
    event_2773_83_end: ;
}
void Frames::event_func_20384()
{
    // event 2774_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2774_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2774_83_end;
        if (once_condition_2774_83) goto event_2774_83_end;
        once_condition_2774_83 = true;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 500);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 2508);
        ((Active*)get_instance(themagister_2115_instances))->set_y(2599);
        ((Active*)get_instance(themagister_2115_instances))->set_x(572);
        ((Active*)get_instance(themagister_2115_instances))->set_direction(16);
        ((Active*)get_instance(themagister_2115_instances))->force_animation(5);
        ((Active*)get_instance(npchologram1_3060_instances))->set_direction(2);
        ((Active*)get_instance(npchologram2_3074_instances))->set_direction(3);
        ((Active*)get_instance(npchologram1_3060_instances))->set_visible(true);
        ((Active*)get_instance(npchologram2_3074_instances))->set_visible(true);
    }
    event_2774_83_end: ;
}
void Frames::event_func_20385()
{
    // event 2775_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2775_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2775_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(2602);
            ((Active*)*it)->set_x(470);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(0);
        }
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.set(10, ((Active*)get_instance(themagister_2115_instances))->get_y()-80);
        ((Active*)get_instance(npcpangu_3073_instances))->set_x(((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_x()-70);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.set(14, 1);
    }
    event_2775_83_end: ;
}
void Frames::event_func_20386()
{
    // event 2776_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2776_83_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_2776_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2776_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        if (!group_pause_1) {
            group_pause_1 = true;
        }
    }
    event_2776_83_end: ;
}
void Frames::event_func_20387()
{
    // event 2777_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2777_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2777_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (60))) goto event_2777_83_end;
        ((Active*)get_instance(npchologram2_3074_instances))->set_visible(false);
        ((Active*)get_instance(npchologram1_3060_instances))->set_visible(false);
        media.play_id(SOUND_PLBLOCK_VANISH_331, -1, 1);
    }
    event_2777_83_end: ;
}
void Frames::event_func_20388()
{
    // event 2778_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2778_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2778_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (120))) goto event_2778_83_end;
        ((Active*)get_instance(themagister_2115_instances))->set_direction(0);
    }
    event_2778_83_end: ;
}
void Frames::event_func_20389()
{
    // event 2779_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2779_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2779_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (140))) goto event_2779_83_end;
        ((Active*)get_instance(themagister_2115_instances))->force_frame(3);
    }
    event_2779_83_end: ;
}
void Frames::event_func_20390()
{
    // event 2780_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2780_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2780_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (180))) goto event_2780_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 243);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2780_83_end: ;
}
void Frames::event_func_20391()
{
    // event 2781_83
    bool or_result_2781_83 = false;
    bool or_temp_result_2781_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto or_event_2781_83_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2781_83_0_end;
        or_result_2781_83 = true;
        or_temp_result_2781_83_0 = true;
    }
    or_event_2781_83_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_2781_83_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 2781_83
    bool or_temp_result_2781_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto or_event_2781_83_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2781_83_1_end;
        or_result_2781_83 = true;
        or_temp_result_2781_83_1 = true;
    }
    or_event_2781_83_1_end: ;
    if (or_temp_result_2781_83_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 2781_83
    bool or_temp_result_2781_83_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto or_event_2781_83_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2781_83_2_end;
        or_result_2781_83 = true;
        or_temp_result_2781_83_2 = true;
        or_event_2781_83_2_end: ;
        if (or_temp_result_2781_83_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_2781_83) goto or_final_or_event_2781_83_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_2781_83_0 || or_temp_result_2781_83_1 || or_temp_result_2781_83_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_2781_83_2_end: ;
}
void Frames::event_func_20392()
{
    // event 2782_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2782_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2782_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (243))) goto event_2782_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (246))) goto event_2782_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2782_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2782_83_end: ;
}
void Frames::event_func_20393()
{
    // event 2783_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2783_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (245))) goto event_2783_83_end;
        if (once_condition_2783_83) goto event_2783_83_end;
        once_condition_2783_83 = true;
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()+20);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(3);
        ((Active*)get_instance(themagister_2115_instances))->set_direction(16);
    }
    event_2783_83_end: ;
}
void Frames::event_func_20394()
{
    // event 2784_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2784_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (246))) goto event_2784_83_end;
        if (once_condition_2784_83) goto event_2784_83_end;
        once_condition_2784_83 = true;
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()-20);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
    }
    event_2784_83_end: ;
}
void Frames::event_func_20395()
{
    // event 2785_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2785_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2785_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (246))) goto event_2785_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2785_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_3000_113);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_2785_83_end: ;
}
void Frames::event_func_20396()
{
    // event 2786_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2786_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_2786_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (30))) goto event_2786_83_end;
        ((Active*)get_instance(themagister_2115_instances))->set_direction(0);
    }
    event_2786_83_end: ;
}
void Frames::event_func_20397()
{
    // event 2787_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2787_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_2787_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (50))) goto event_2787_83_end;
        ((Active*)get_instance(themagister_2115_instances))->force_frame(3);
    }
    event_2787_83_end: ;
}
void Frames::event_func_20398()
{
    // event 2788_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2788_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_2788_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (140))) goto event_2788_83_end;
        ((Active*)get_instance(themagister_2115_instances))->force_frame(4);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_2788_83_end: ;
}
void Frames::event_func_20399()
{
    // event 2789_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2789_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2789_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (247))) goto event_2789_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (252))) goto event_2789_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2789_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2789_83_end: ;
}
void Frames::event_func_20400()
{
    // event 2790_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2790_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (249))) goto event_2790_83_end;
        if (once_condition_2790_83) goto event_2790_83_end;
        once_condition_2790_83 = true;
        ((Active*)get_instance(themagister_2115_instances))->force_frame(0);
        ((Active*)get_instance(themagister_2115_instances))->set_direction(16);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()+20);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(3);
    }
    event_2790_83_end: ;
}
void Frames::event_func_20401()
{
    // event 2791_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2791_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (250))) goto event_2791_83_end;
        if (once_condition_2791_83) goto event_2791_83_end;
        once_condition_2791_83 = true;
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()-20);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
    }
    event_2791_83_end: ;
}
void Frames::event_func_20402()
{
    // event 2792_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2792_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (251))) goto event_2792_83_end;
        if (once_condition_2792_83) goto event_2792_83_end;
        once_condition_2792_83 = true;
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()+20);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(3);
    }
    event_2792_83_end: ;
}
void Frames::event_func_20403()
{
    // event 2793_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2793_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (252))) goto event_2793_83_end;
        if (once_condition_2793_83) goto event_2793_83_end;
        once_condition_2793_83 = true;
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()-20);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
    }
    event_2793_83_end: ;
}
void Frames::event_func_20404()
{
    // event 2794_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2794_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2794_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (252))) goto event_2794_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2794_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
            group_pause_1 = false;
    
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_2794_83_end: ;
}
void Frames::event_func_20405()
{
    // event 2795_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2795_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_2795_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 4);
        }
    }
    event_2795_83_end: ;
}
void Frames::event_func_20406()
{
    // event 2796_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2796_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_2796_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2796_83_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unlock_music_82);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
        }
            group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1) {
            group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1 = true;
        }
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        media.stop_channel(29-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2796_83_end: ;
}
void Frames::event_func_20407()
{
    // event 2797_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2797_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2797_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(2602);
            ((Active*)*it)->set_x(330);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.set(10, ((Active*)get_instance(themagister_2115_instances))->get_y()-80);
        ((Active*)get_instance(npcpangu_3073_instances))->set_x(((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_x()-70);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.set(14, 1);
        ((Active*)get_instance(themagister_2115_instances))->set_x(420);
        ((Active*)get_instance(npcneera_2464_instances))->set_visible(true);
        ((Active*)get_instance(npcneera_2464_instances))->set_y(2592);
        ((Active*)get_instance(npcneera_2464_instances))->set_x(400);
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(5);
        ((Active*)get_instance(npcneera_2464_instances))->force_frame(3);
        ((Active*)get_instance(npcneera_2464_instances))->set_direction(16);
        npcshieldguard_3994_instances.clear_selection();
        for (ObjectIterator it(npcshieldguard_3994_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 380);
        for (ObjectIterator it(npcshieldguard_3994_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_2797_83_end: ;
}
void Frames::event_func_20408()
{
    // event 2798_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2798_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2798_83_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_2798_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        if (!group_pause_1) {
            group_pause_1 = true;
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2798_83_end: ;
}
void Frames::event_func_20409()
{
    // event 2799_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2799_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2799_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (253))) goto event_2799_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (254))) goto event_2799_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2799_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2799_83_end: ;
}
void Frames::event_func_20410()
{
    // event 2800_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2800_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2800_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (254))) goto event_2800_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2800_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
    }
    event_2800_83_end: ;
}
void Frames::event_func_20411()
{
    // event 2801_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2801_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2801_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (20))) goto event_2801_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(0);
        }
    }
    event_2801_83_end: ;
}
void Frames::event_func_20412()
{
    // event 2802_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2802_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2802_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (40))) goto event_2802_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
            ((Active*)*it)->restore_frame();
        }
    }
    event_2802_83_end: ;
}
void Frames::event_func_20413()
{
    // event 2803_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2803_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2803_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (40))) goto event_2803_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(npcpangu_3073_instances))->get_x()-5))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_2803_83_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_2803_83_end: ;
}
void Frames::event_func_20414()
{
    // event 2804_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2804_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_2804_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (20))) goto event_2804_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
    }
    event_2804_83_end: ;
}
void Frames::event_func_20415()
{
    // event 2805_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2805_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_2805_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (40))) goto event_2805_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
        }
        media.play_id(SOUND_COMMON_JUMP_8, -1, 1);
    }
    event_2805_83_end: ;
}
void Frames::event_func_20416()
{
    // event 2806_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2806_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_2806_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (40))) goto event_2806_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-8);
        }
    }
    event_2806_83_end: ;
}
void Frames::event_func_20417()
{
    // event 2807_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2807_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_2807_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (40))) goto event_2807_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(npcpangu_3073_instances))->get_y()+40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_2807_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(15);
        }
    }
    event_2807_83_end: ;
}
void Frames::event_func_20418()
{
    // event 2808_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2808_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (9))) goto event_2808_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(npcpangu_3073_instances))->get_y()+40);
        }
    }
    event_2808_83_end: ;
}
void Frames::event_func_20419()
{
    // event 2809_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2809_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_2809_83_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->get_x()) > (((Active*)get_instance(npcpangu_3073_instances))->get_x()-40))) goto event_2809_83_end;
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(1);
        ((Active*)get_instance(npcneera_2464_instances))->set_direction(17);
        ((Active*)get_instance(npcneera_2464_instances))->set_x(((Active*)get_instance(npcneera_2464_instances))->get_x()-3);
        ((Active*)get_instance(npcneera_2464_instances))->restore_frame();
    }
    event_2809_83_end: ;
}
void Frames::event_func_20420()
{
    // event 2810_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2810_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_2810_83_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->get_x()) <= (((Active*)get_instance(npcpangu_3073_instances))->get_x()-40))) goto event_2810_83_end;
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(5);
        ((Active*)get_instance(npcneera_2464_instances))->set_direction(0);
        ((Active*)get_instance(npcneera_2464_instances))->force_frame(3);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_2810_83_end: ;
}
