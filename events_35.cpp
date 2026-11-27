#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_3056()
{
    // event 1466_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1466_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (1))) goto event_1466_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (1))) goto event_1466_14_end;
        ((Active*)get_instance(furniturephone_541_instances))->set_direction(1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
        media.play_id(SOUND_TELEPHONE_363, -1, 1);
    }
    event_1466_14_end: ;
}
void Frames::event_func_3057()
{
    // event 1467_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1467_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (1))) goto event_1467_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (60))) goto event_1467_14_end;
        ((Active*)get_instance(furniturephone_541_instances))->set_direction(0);
    }
    event_1467_14_end: ;
}
void Frames::event_func_3058()
{
    // event 1468_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1468_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (1))) goto event_1468_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (120))) goto event_1468_14_end;
        ((Active*)get_instance(furniturephone_541_instances))->set_direction(1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
        media.play_id(SOUND_TELEPHONE_363, -1, 1);
    }
    event_1468_14_end: ;
}
void Frames::event_func_3059()
{
    // event 1469_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1469_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (1))) goto event_1469_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (180))) goto event_1469_14_end;
        ((Active*)get_instance(furniturephone_541_instances))->set_direction(0);
    }
    event_1469_14_end: ;
}
void Frames::event_func_3060()
{
    // event 1470_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1470_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (1))) goto event_1470_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (240))) goto event_1470_14_end;
        ((Active*)get_instance(furniturephone_541_instances))->set_direction(1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
        media.play_id(SOUND_TELEPHONE_363, -1, 1);
    }
    event_1470_14_end: ;
}
void Frames::event_func_3061()
{
    // event 1471_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1471_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (1))) goto event_1471_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (190))) goto event_1471_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(511, 1535);
            pos_end_1471_14_0: ;
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_animation(16);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(4, 12);
        media.play_id(SOUND_COMMON_SKID_6, -1, 1);
    }
    event_1471_14_end: ;
}
void Frames::event_func_3062()
{
    // event 1472_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1472_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (1))) goto event_1472_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (190))) goto event_1472_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) < (250))) goto event_1472_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(4));
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(4, get_max(((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(4)-0.25, 0));
    }
    event_1472_14_end: ;
}
void Frames::event_func_3063()
{
    // event 1473_14
    bool or_result_1473_14 = false;
    bool or_temp_result_1473_14_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto or_event_1473_14_0_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (1))) goto or_event_1473_14_0_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (190))) goto or_event_1473_14_0_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) < (250))) goto or_event_1473_14_0_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(4)) <= (0))) goto or_event_1473_14_0_end;
        or_result_1473_14 = true;
        or_temp_result_1473_14_0 = true;
    }
    or_event_1473_14_0_end: ;
    // event 1473_14
    bool or_temp_result_1473_14_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto or_event_1473_14_1_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (1))) goto or_event_1473_14_1_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (190))) goto or_event_1473_14_1_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) < (250))) goto or_event_1473_14_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(furniturephone_541_instances))->get_x()+40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1473_14_1_end;
        or_result_1473_14 = true;
        or_temp_result_1473_14_1 = true;
        or_event_1473_14_1_end: ;
        playerskinsash_418_instances.clear_saved_selection();
        if (or_temp_result_1473_14_1) {
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1473_14) goto or_final_or_event_1473_14_1_end;
        playerskinsash_418_instances.clear_selection();
        if (or_temp_result_1473_14_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(4, 0);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
    }
    or_final_or_event_1473_14_1_end: ;
}
void Frames::event_func_3064()
{
    // event 1474_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1474_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (1))) goto event_1474_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (250))) goto event_1474_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(24);
        }
    }
    event_1474_14_end: ;
}
void Frames::event_func_3065()
{
    // event 1475_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1475_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (1))) goto event_1475_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (260))) goto event_1475_14_end;
        ((Active*)get_instance(npccouchlilac_545_instances))->set_x(((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x());
        ((Active*)get_instance(npccouchlilac_545_instances))->force_animation(8);
        ((Active*)get_instance(npccouchlilac_545_instances))->set_y(((Active*)get_instance(furniturephone_541_instances))->get_y()+30);
        media.stop_sample(SOUND_TELEPHONE_363);
        ((Active*)get_instance(furniturephone_541_instances))->set_direction(2);
        ((Active*)get_instance(npccouchlilac_545_instances))->set_visible(true);
    }
    event_1475_14_end: ;
}
void Frames::event_func_3066()
{
    // event 1476_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1476_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (1))) goto event_1476_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (260))) goto event_1476_14_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 21);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1476_14_end: ;
}
void Frames::event_func_3067()
{
    // event 1477_14
    bool or_result_1477_14 = false;
    bool or_temp_result_1477_14_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto or_event_1477_14_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1477_14_0_end;
        or_result_1477_14 = true;
        or_temp_result_1477_14_0 = true;
    }
    or_event_1477_14_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1477_14_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1477_14
    bool or_temp_result_1477_14_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto or_event_1477_14_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1477_14_1_end;
        or_result_1477_14 = true;
        or_temp_result_1477_14_1 = true;
    }
    or_event_1477_14_1_end: ;
    if (or_temp_result_1477_14_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1477_14
    bool or_temp_result_1477_14_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto or_event_1477_14_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1477_14_2_end;
        or_result_1477_14 = true;
        or_temp_result_1477_14_2 = true;
        or_event_1477_14_2_end: ;
        if (or_temp_result_1477_14_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1477_14) goto or_final_or_event_1477_14_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1477_14_0 || or_temp_result_1477_14_1 || or_temp_result_1477_14_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1477_14_2_end: ;
}
void Frames::event_func_3068()
{
    // event 1478_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1478_14_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1478_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (21))) goto event_1478_14_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1478_14_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
    }
    event_1478_14_end: ;
}
void Frames::event_func_3069()
{
    // event 1479_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1479_14_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1479_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (22))) goto event_1479_14_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1479_14_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
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
    event_1479_14_end: ;
}
void Frames::event_func_3070()
{
    // event 1480_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1480_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (3))) goto event_1480_14_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 4);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(5));
        }
    }
    event_1480_14_end: ;
}
void Frames::event_func_3071()
{
    // event 1481_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1481_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (3))) goto event_1481_14_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1481_14_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(0, 4);
    }
    event_1481_14_end: ;
}
void Frames::event_func_3072()
{
    // event 1482_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1482_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (4))) goto event_1482_14_end;
        if (!((levelcardfade2_24_instances.size()) == (0))) goto event_1482_14_end;
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
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_1482_14_end: ;
}
void Frames::event_func_3073()
{
    // event 1483_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1483_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (4))) goto event_1483_14_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 4);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(5));
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(500);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(npccouchlilac_545_instances))->set_visible(false);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 312);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1535);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
        }
    }
    event_1483_14_end: ;
}
void Frames::event_func_3074()
{
    // event 1484_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1484_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (4))) goto event_1484_14_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1484_14_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1484_14_end: ;
}
void Frames::event_func_3075()
{
    // event 1485_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1485_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (5))) goto event_1485_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30);
        }
    }
    event_1485_14_end: ;
}
void Frames::event_func_3076()
{
    // event 1486_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1486_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (5))) goto event_1486_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (440))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1486_14_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 23);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1486_14_end: ;
}
void Frames::event_func_3077()
{
    // event 1487_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1487_14_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1487_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (23))) goto event_1487_14_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1487_14_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
        ((Active*)get_instance(npccouchcarol_555_instances))->force_animation(9);
    }
    event_1487_14_end: ;
}
void Frames::event_func_3078()
{
    // event 1488_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1488_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (24))) goto event_1488_14_end;
        if (!((media.get_channel_position(-1 +20)) > (1000))) goto event_1488_14_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(npccouchcarol_555_instances));
            if (parent == NULL) goto pos_end_1488_14_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1488_14_0: ;
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(get_max(51, ((Active*)*it)->get_frame()));
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(npccouchcarol_555_instances))->set_visible(false);
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_1488_14_end: ;
}
void Frames::event_func_3079()
{
    // event 1489_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1489_14_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1489_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (24))) goto event_1489_14_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1489_14_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(npccouchcarol_555_instances));
            if (parent == NULL) goto pos_end_1489_14_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1489_14_0: ;
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(51);
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(npccouchcarol_555_instances))->set_visible(false);
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        media.play(str_data_voices_88+global_strings->get(11)+str_mi_mi_05_01_ogg_94, 19-1);
        furniturefloor4_540_instances.clear_selection();
        for (ObjectIterator it(furniturefloor4_540_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1489_14_end: ;
}
void Frames::event_func_3080()
{
    // event 1490_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1490_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (7))) goto event_1490_14_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
    }
    event_1490_14_end: ;
}
void Frames::event_func_3081()
{
    // event 1491_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1491_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (7))) goto event_1491_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (18))) goto event_1491_14_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
        media.play(str_data_voices_88+global_strings->get(11)+str_ca_ca_09_02_ogg_95, 18-1);
        ((Active*)get_instance(npccouchcarol_555_instances))->force_animation(10);
        ((Active*)get_instance(npccouchcarol_555_instances))->set_visible(true);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1491_14_end: ;
}
void Frames::event_func_3082()
{
    // event 1492_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1492_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (7))) goto event_1492_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (18))) goto event_1492_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) < (28))) goto event_1492_14_end;
        ((Active*)get_instance(npccouchcarol_555_instances))->set_y(((Active*)get_instance(npccouchcarol_555_instances))->get_y()+2);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+2);
        }
    }
    event_1492_14_end: ;
}
void Frames::event_func_3083()
{
    // event 1493_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1493_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (7))) goto event_1493_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (28))) goto event_1493_14_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(38);
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(npccouchcarol_555_instances))->set_visible(false);
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1493_14_end: ;
}
void Frames::event_func_3084()
{
    // event 1494_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1494_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (7))) goto event_1494_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (40))) goto event_1494_14_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(13);
            ((Active*)*it)->force_frame(12);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(33);
        }
    }
    event_1494_14_end: ;
}
void Frames::event_func_3085()
{
    // event 1495_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1495_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (7))) goto event_1495_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (80))) goto event_1495_14_end;
        furniturefloor4_540_instances.clear_selection();
        for (ObjectIterator it(furniturefloor4_540_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_animation(40);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(321, 1521);
            pos_end_1495_14_0: ;
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1495_14_end: ;
}
void Frames::event_func_3086()
{
    // event 1496_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1496_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (8))) goto event_1496_14_end;
        {
            furniturefloor4_540_instances.clear_selection();
            ObjectIterator other_it(furniturefloor4_540_instances);
            playerskinmilla_446_instances.clear_selection();
            for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1496_14_0_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_1496_14_0_end: ;
    }
    event_1496_14_end: ;
}
void Frames::event_func_3087()
{
    // event 1497_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1497_14_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1497_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (25))) goto event_1497_14_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1497_14_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.play(str_data_voices_88+global_strings->get(11)+str_li_li_08_03_ogg_96, 19-1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(18);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
        }
    }
    event_1497_14_end: ;
}
void Frames::event_func_3088()
{
    // event 1498_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1498_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (9))) goto event_1498_14_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
    }
    event_1498_14_end: ;
}
void Frames::event_func_3089()
{
    // event 1499_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1499_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (9))) goto event_1499_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (60))) goto event_1499_14_end;
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
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(27);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
    }
    event_1499_14_end: ;
}
void Frames::event_func_3090()
{
    // event 1500_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1500_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (9))) goto event_1500_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (60))) goto event_1500_14_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 4);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(5));
        }
    }
    event_1500_14_end: ;
}
void Frames::event_func_3091()
{
    // event 1501_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1501_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (9))) goto event_1501_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (60))) goto event_1501_14_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1501_14_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        monitorbroken_330_instances.clear_selection();
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(0, 10);
        monitorcrate_409_instances.clear_selection();
        for (ObjectIterator it(monitorcrate_409_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1501_14_end: ;
}
void Frames::event_func_3092()
{
    // event 1502_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1502_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (10))) goto event_1502_14_end;
        if (!((levelcardfade2_24_instances.size()) == (0))) goto event_1502_14_end;
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
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_1502_14_end: ;
}
void Frames::event_func_3093()
{
    // event 1503_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1503_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (10))) goto event_1503_14_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 4);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(5));
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 580);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 976);
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(objecttent_480_instances));
            if (parent == NULL) goto pos_end_1503_14_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 111, parent->get_y() + 81);
            pos_end_1503_14_0: ;
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_animation(40);
        }
    }
    event_1503_14_end: ;
}
void Frames::event_func_3094()
{
    // event 1504_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1504_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (10))) goto event_1504_14_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1504_14_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(laddertop_357_instances));
            if (parent == NULL) goto pos_end_1504_14_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + -50);
            pos_end_1504_14_0: ;
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(laddertop_357_instances));
            if (parent == NULL) goto pos_end_1504_14_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1504_14_1: ;
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(laddertop_357_instances));
            if (parent == NULL) goto pos_end_1504_14_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1504_14_2: ;
        }
    }
    event_1504_14_end: ;
}
void Frames::event_func_3095()
{
    // event 1505_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1505_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (11))) goto event_1505_14_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(35);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+3);
            ((Active*)*it)->set_direction(16);
        }
        ((Active*)get_instance(objecttententrance_551_instances))->set_visible(true);
        ((Active*)get_instance(npcshellduck_533_instances))->set_visible(false);
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(35);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+3);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_speed(25);
        }
    }
    event_1505_14_end: ;
}
void Frames::event_func_3096()
{
    // event 1506_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1506_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (11))) goto event_1506_14_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (980))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1506_14_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->alterables->values.set(24, -3);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        media.play_id(SOUND_COMMON_JUMP_8, -1, 1);
    }
    event_1506_14_end: ;
}
void Frames::event_func_3097()
{
    // event 1507_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1507_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (12))) goto event_1507_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (14))) goto event_1507_14_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(objecttent_480_instances))->get_x()+260))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1507_14_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(24), 1050));
            ((Active*)*it)->alterables->values.add(24, 0.25);
            ((Active*)*it)->set_x(get_max(((Active*)*it)->get_x()-5, ((Active*)get_instance(objecttententrance_551_instances))->get_x()+260));
        }
    }
    event_1507_14_end: ;
}
void Frames::event_func_3098()
{
    // event 1508_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1508_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (12))) goto event_1508_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (14))) goto event_1508_14_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (1050))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(objecttent_480_instances))->get_x()+260))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1508_14_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(30);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30);
        }
    }
    event_1508_14_end: ;
}
void Frames::event_func_3099()
{
    // event 1509_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1509_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (13))) goto event_1509_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (14))) goto event_1509_14_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(objecttent_480_instances))->get_x()+260))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1509_14_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->restore_speed();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
    }
    event_1509_14_end: ;
}
void Frames::event_func_3100()
{
    // event 1510_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1510_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (12))) goto event_1510_14_end;
        ((Active*)get_instance(objecttententrance_551_instances))->set_visible(true);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(35);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+3);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_speed(25);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(35);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+4);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_speed(30);
        }
    }
    event_1510_14_end: ;
}
void Frames::event_func_3101()
{
    // event 1511_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1511_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (12))) goto event_1511_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (980))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1511_14_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->alterables->values.set(24, -3);
        }
        media.play_id(SOUND_COMMON_JUMP_8, -1, 1);
    }
    event_1511_14_end: ;
}
void Frames::event_func_3102()
{
    // event 1512_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1512_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (13))) goto event_1512_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (14))) goto event_1512_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(objecttent_480_instances))->get_x()+230))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1512_14_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(24), 1050));
            ((Active*)*it)->alterables->values.add(24, 0.25);
            ((Active*)*it)->set_x(get_max(((Active*)*it)->get_x()-5, ((Active*)get_instance(objecttententrance_551_instances))->get_x()+230));
        }
    }
    event_1512_14_end: ;
}
void Frames::event_func_3103()
{
    // event 1513_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1513_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (13))) goto event_1513_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (14))) goto event_1513_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (1050))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(objecttent_480_instances))->get_x()+230))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1513_14_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(30);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30);
        }
    }
    event_1513_14_end: ;
}
void Frames::event_func_3104()
{
    // event 1514_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1514_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (13))) goto event_1514_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (14))) goto event_1514_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(objecttent_480_instances))->get_x()+230))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1514_14_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->restore_speed();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
    }
    event_1514_14_end: ;
}
void Frames::event_func_3105()
{
    // event 1515_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1515_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (13))) goto event_1515_14_end;
        ((Active*)get_instance(objecttententrance_551_instances))->set_visible(true);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(35);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+4);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_speed(30);
        }
    }
    event_1515_14_end: ;
}
void Frames::event_func_3106()
{
    // event 1516_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1516_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (13))) goto event_1516_14_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (980))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1516_14_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        media.play_id(SOUND_COMMON_JUMP_8, -1, 1);
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->alterables->values.set(24, -3);
        }
    }
    event_1516_14_end: ;
}
void Frames::event_func_3107()
{
    // event 1517_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1517_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (14))) goto event_1517_14_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(objecttent_480_instances))->get_x()+290))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1517_14_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(24), 1050));
            ((Active*)*it)->alterables->values.add(24, 0.25);
            ((Active*)*it)->set_x(get_max(((Active*)*it)->get_x()-5, ((Active*)get_instance(objecttententrance_551_instances))->get_x()+290));
        }
    }
    event_1517_14_end: ;
}
void Frames::event_func_3108()
{
    // event 1518_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1518_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (14))) goto event_1518_14_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (1050))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(objecttent_480_instances))->get_x()+290))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1518_14_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(30);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30);
        }
    }
    event_1518_14_end: ;
}
void Frames::event_func_3109()
{
    // event 1519_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1519_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (14))) goto event_1519_14_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(objecttent_480_instances))->get_x()+290))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1519_14_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->restore_speed();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
    }
    event_1519_14_end: ;
}
void Frames::event_func_3110()
{
    // event 1520_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1520_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (12))) goto event_1520_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (14))) goto event_1520_14_end;
        if (!((global_values->get(1)) == (0))) goto event_1520_14_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0), ((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()));
    }
    event_1520_14_end: ;
}
void Frames::event_func_3111()
{
    // event 1521_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1521_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (12))) goto event_1521_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (14))) goto event_1521_14_end;
        if (!((global_values->get(1)) == (4))) goto event_1521_14_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0), ((Active*)get_instance(playerskinmilla_446_instances, default_active_instance))->get_x()));
    }
    event_1521_14_end: ;
}
void Frames::event_func_3112()
{
    // event 1522_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1522_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (12))) goto event_1522_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (14))) goto event_1522_14_end;
        if (!((global_values->get(1)) != (0))) goto event_1522_14_end;
        if (!((global_values->get(1)) != (4))) goto event_1522_14_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0), ((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_x()));
    }
    event_1522_14_end: ;
}
void Frames::event_func_3113()
{
    // event 1523_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1523_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (14))) goto event_1523_14_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(objecttent_480_instances))->get_x()+290))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1523_14_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
    }
    event_1523_14_end: ;
}
void Frames::event_func_3114()
{
    // event 1524_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1524_14_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1524_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (28))) goto event_1524_14_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1524_14_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_1524_14_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(13)) == (1))) goto event_1524_14_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 36);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1524_14_end: ;
}
void Frames::event_func_3115()
{
    // event 1525_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1525_14_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1525_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (26))) goto event_1525_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (35))) goto event_1525_14_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1525_14_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
    }
    event_1525_14_end: ;
}
void Frames::event_func_3116()
{
    // event 1526_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1526_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (27))) goto event_1526_14_end;
        if (!((media.get_channel_position(-1 +20)) > (2233))) goto event_1526_14_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 6);
    }
    event_1526_14_end: ;
}
void Frames::event_func_3117()
{
    // event 1527_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1527_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (28))) goto event_1527_14_end;
        if (!((media.get_channel_position(-1 +20)) > (0))) goto event_1527_14_end;
        if (!((media.get_channel_position(-1 +20)) < (1000))) goto event_1527_14_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_direction(18);
            ((Active*)*it)->force_speed(14);
        }
    }
    event_1527_14_end: ;
}
void Frames::event_func_3118()
{
    // event 1528_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1528_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (28))) goto event_1528_14_end;
        if (!((media.get_channel_position(-1 +20)) >= (1000))) goto event_1528_14_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(get_max(21, ((Active*)*it)->get_frame()));
        }
    }
    event_1528_14_end: ;
}
void Frames::event_func_3119()
{
    // event 1529_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1529_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (36))) goto event_1529_14_end;
        if (!((media.get_channel_position(-1 +20)) > (3550))) goto event_1529_14_end;
        if (!((media.get_channel_position(-1 +20)) < (3750))) goto event_1529_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(13);
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1529_14_end: ;
}
void Frames::event_func_3120()
{
    // event 1530_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1530_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (36))) goto event_1530_14_end;
        if (!((media.get_channel_position(-1 +20)) > (3750))) goto event_1530_14_end;
        if (!((media.get_channel_position(-1 +20)) < (5000))) goto event_1530_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
        }
    }
    event_1530_14_end: ;
}
void Frames::event_func_3121()
{
    // event 1531_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1531_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (36))) goto event_1531_14_end;
        if (!((media.get_channel_position(-1 +20)) > (5000))) goto event_1531_14_end;
        if (!((media.get_channel_position(-1 +20)) < (6350))) goto event_1531_14_end;
        if (once_condition_1531_14) goto event_1531_14_end;
        once_condition_1531_14 = true;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(19);
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1531_14_end: ;
}
void Frames::event_func_3122()
{
    // event 1532_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1532_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (36))) goto event_1532_14_end;
        if (!((media.get_channel_position(-1 +20)) > (6350))) goto event_1532_14_end;
        if (!((media.get_channel_position(-1 +20)) < (6600))) goto event_1532_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1532_14_end: ;
}
void Frames::event_func_3123()
{
    // event 1533_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1533_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (36))) goto event_1533_14_end;
        if (!((media.get_channel_position(-1 +20)) > (6600))) goto event_1533_14_end;
        if (!((media.get_channel_position(-1 +20)) < (8000))) goto event_1533_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 81);
    }
    event_1533_14_end: ;
}
void Frames::event_func_3124()
{
    // event 1534_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1534_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (36))) goto event_1534_14_end;
        if (!((media.get_channel_position(-1 +20)) > (8000))) goto event_1534_14_end;
        if (!((media.get_channel_position(-1 +20)) < (8500))) goto event_1534_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(19);
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1534_14_end: ;
}
void Frames::event_func_3125()
{
    // event 1535_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1535_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (36))) goto event_1535_14_end;
        if (!((media.get_channel_position(-1 +20)) > (8500))) goto event_1535_14_end;
        if (!((media.get_channel_position(-1 +20)) < (10250))) goto event_1535_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 81);
    }
    event_1535_14_end: ;
}
void Frames::event_func_3126()
{
    // event 1536_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1536_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (36))) goto event_1536_14_end;
        if (!((media.get_channel_position(-1 +20)) > (10250))) goto event_1536_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(18);
        }
    }
    event_1536_14_end: ;
}
void Frames::event_func_3127()
{
    // event 1537_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1537_14_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1537_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (36))) goto event_1537_14_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1537_14_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 29);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1537_14_end: ;
}
void Frames::event_func_3128()
{
    // event 1538_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1538_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (29))) goto event_1538_14_end;
        if (not_always_1538_14 > loop_count) {
            not_always_1538_14 = loop_count + 2;
            goto event_1538_14_end;
        }
        not_always_1538_14 = loop_count + 2;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(21);
        }
    }
    event_1538_14_end: ;
}
void Frames::event_func_3129()
{
    // event 1539_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1539_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (29))) goto event_1539_14_end;
        if (!((media.get_channel_position(-1 +20)) > (3700))) goto event_1539_14_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 27);
    }
    event_1539_14_end: ;
}
void Frames::event_func_3130()
{
    // event 1540_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1540_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (33))) goto event_1540_14_end;
        if (!((media.get_channel_position(-1 +20)) > (650))) goto event_1540_14_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 30);
    }
    event_1540_14_end: ;
}
void Frames::event_func_3131()
{
    // event 1541_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1541_14_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1541_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (35))) goto event_1541_14_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1541_14_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
    }
    event_1541_14_end: ;
}
void Frames::event_func_3132()
{
    // event 1542_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1542_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (16))) goto event_1542_14_end;
        if (not_always_1542_14 > loop_count) {
            not_always_1542_14 = loop_count + 2;
            goto event_1542_14_end;
        }
        not_always_1542_14 = loop_count + 2;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 2);
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-global_values->get(16)-120);
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        media.stop_channel(32-1);
    }
    event_1542_14_end: ;
}
void Frames::event_func_3133()
{
    // event 1543_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1543_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (16))) goto event_1543_14_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_min(((Active*)*it)->get_x()+32, frame_left()));
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1543_14_end: ;
}
void Frames::event_func_3134()
{
    // event 1544_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1544_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (16))) goto event_1544_14_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1544_14_end;
        global_values->set(4, 0);
        next_frame = 78 + 0;    
    
    }
    event_1544_14_end: ;
}
void Frames::event_func_3135()
{
    // event 1545_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1)) goto event_1545_14_end;
        if (!((playerskinsash_418_instances.size()) == (0))) goto event_1545_14_end;
        FrameObject * single_instance_1545_14_0; single_instance_1545_14_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinsash_418(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1545_14_0 == NULL)
                    single_instance_1545_14_0 = new_obj;
            }
        }
    }
    event_1545_14_end: ;
}
void Frames::event_func_3136()
{
    // event 1546_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1)) goto event_1546_14_end;
        if (!((playerskinspade_419_instances.size()) == (0))) goto event_1546_14_end;
        FrameObject * single_instance_1546_14_0; single_instance_1546_14_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinspade_419(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1546_14_0 == NULL)
                    single_instance_1546_14_0 = new_obj;
            }
        }
    }
    event_1546_14_end: ;
}
void Frames::event_func_3137()
{
    // event 1547_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1)) goto event_1547_14_end;
        if (!((playerskincarol_445_instances.size()) == (0))) goto event_1547_14_end;
        FrameObject * single_instance_1547_14_0; single_instance_1547_14_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincarol_445(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1547_14_0 == NULL)
                    single_instance_1547_14_0 = new_obj;
            }
        }
    }
    event_1547_14_end: ;
}
void Frames::event_func_3138()
{
    // event 1548_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1)) goto event_1548_14_end;
        if (!((playerskincarolbike_382_instances.size()) == (0))) goto event_1548_14_end;
        FrameObject * single_instance_1548_14_0; single_instance_1548_14_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincarolbike_382(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1548_14_0 == NULL)
                    single_instance_1548_14_0 = new_obj;
            }
        }
    }
    event_1548_14_end: ;
}
void Frames::event_func_3139()
{
    // event 1549_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1)) goto event_1549_14_end;
        if (!((playerskinmilla_446_instances.size()) == (0))) goto event_1549_14_end;
        FrameObject * single_instance_1549_14_0; single_instance_1549_14_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinmilla_446(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1549_14_0 == NULL)
                    single_instance_1549_14_0 = new_obj;
            }
        }
    }
    event_1549_14_end: ;
}
void Frames::event_func_3140()
{
    // event 1550_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1)) goto event_1550_14_end;
        if (!((playerskintorque_450_instances.size()) == (0))) goto event_1550_14_end;
        FrameObject * single_instance_1550_14_0; single_instance_1550_14_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskintorque_450(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1550_14_0 == NULL)
                    single_instance_1550_14_0 = new_obj;
            }
        }
    }
    event_1550_14_end: ;
}
void Frames::event_func_3141()
{
    // event 1551_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1)) goto event_1551_14_end;
        if (!((playerskinsashhair_417_instances.size()) == (0))) goto event_1551_14_end;
        FrameObject * single_instance_1551_14_0; single_instance_1551_14_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinsashhair_417(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1551_14_0 == NULL)
                    single_instance_1551_14_0 = new_obj;
            }
        }
    }
    event_1551_14_end: ;
}
void Frames::event_func_3142()
{
    // event 1552_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1)) goto event_1552_14_end;
        if (!((playerskincaroltail_444_instances.size()) == (0))) goto event_1552_14_end;
        FrameObject * single_instance_1552_14_0; single_instance_1552_14_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincaroltail_444(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1552_14_0 == NULL)
                    single_instance_1552_14_0 = new_obj;
            }
        }
    }
    event_1552_14_end: ;
}
void Frames::event_func_3143()
{
    // event 1553_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1)) goto event_1553_14_end;
        if (!((playerskinmillatail_381_instances.size()) == (0))) goto event_1553_14_end;
        FrameObject * single_instance_1553_14_0; single_instance_1553_14_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinmillatail_381(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1553_14_0 == NULL)
                    single_instance_1553_14_0 = new_obj;
            }
        }
    }
    event_1553_14_end: ;
}
void Frames::event_func_3144()
{
    // event 1554_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1)) goto event_1554_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(7)) == (1))) goto event_1554_14_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->strings.set(0, ((Text*)get_instance(dialogdata_565_instances))->get_paragraph(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)));
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 0);
    }
    event_1554_14_end: ;
}
void Frames::event_func_3145()
{
    // event 1555_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1)) goto event_1555_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (0))) goto event_1555_14_end;
        if (not_always_1555_14 > loop_count) {
            not_always_1555_14 = loop_count + 2;
            goto event_1555_14_end;
        }
        not_always_1555_14 = loop_count + 2;
        ((Active*)get_instance(dialogbox2_567_instances))->set_visible(false);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->set_visible(false);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_visible(false);
    }
    event_1555_14_end: ;
}
void Frames::event_func_3146()
{
    // event 1556_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1)) goto event_1556_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (1))) goto event_1556_14_end;
        ((Active*)get_instance(dialogbox_566_instances))->set_visible(true);
        ((Active*)get_instance(dialogbox2_567_instances))->set_visible(true);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(1, string_size(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0))-15);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(3, string_to_number(mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 0, 2)));
        ((Active*)get_instance(dialogbox2_567_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3));
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 2);
        {
            loop_voice_running = true;
            int times = int(1);
            loop_voice_index = 0;
            while (loop_voice_index < times) {
                loop_voice_14();
                if (!loop_voice_running) break;
                loop_voice_index++;
            }
        }
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_visible(true);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_text(empty_string);
    }
    event_1556_14_end: ;
}
void Frames::event_func_3147()
{
    // event 1557_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1)) goto event_1557_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1557_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1557_14_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(2, 1);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_text(mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 15, ((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)+2));
    }
    event_1557_14_end: ;
}
void Frames::event_func_3148()
{
    // event 1558_14
    bool or_result_1558_14 = false;
    bool or_temp_result_1558_14_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1)) goto or_event_1558_14_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto or_event_1558_14_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) >= (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto or_event_1558_14_0_end;
        if (not_always_1558_14 > loop_count) {
            not_always_1558_14 = loop_count + 2;
            goto or_event_1558_14_0_end;
        }
        not_always_1558_14 = loop_count + 2;
        or_result_1558_14 = true;
        or_temp_result_1558_14_0 = true;
    }
    or_event_1558_14_0_end: ;
    // event 1558_14
    bool or_temp_result_1558_14_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1)) goto or_event_1558_14_1_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto or_event_1558_14_1_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) >= (10))) goto or_event_1558_14_1_end;
        if (not_always_1558_14 > loop_count) {
            not_always_1558_14 = loop_count + 2;
            goto or_event_1558_14_1_end;
        }
        not_always_1558_14 = loop_count + 2;
        or_result_1558_14 = true;
        or_temp_result_1558_14_1 = true;
        or_event_1558_14_1_end: ;
        if (!or_result_1558_14) goto or_final_or_event_1558_14_1_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(true);
    }
    or_final_or_event_1558_14_1_end: ;
}
void Frames::event_func_3149()
{
    // event 1559_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1)) goto event_1559_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (0))) goto event_1559_14_end;
        if (not_always_1559_14 > loop_count) {
            not_always_1559_14 = loop_count + 2;
            goto event_1559_14_end;
        }
        not_always_1559_14 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(12, global_values->get(25));
    }
    event_1559_14_end: ;
}
void Frames::event_func_3150()
{
    // event 1560_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1)) goto event_1560_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1560_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12)) > (global_values->get(25)*0.4))) goto event_1560_14_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.sub(12, global_values->get(25)*0.02);
    }
    event_1560_14_end: ;
}
void Frames::event_func_3151()
{
    // event 1561_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1)) goto event_1561_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1561_14_end;
        if (!((media.get_channel_volume(-1 +32)) > (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12)))) goto event_1561_14_end;
        media.set_channel_volume(32-1, ((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12));
    }
    event_1561_14_end: ;
}
void Frames::event_func_3152()
{
    // event 1562_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1)) goto event_1562_14_end;
        if (!((global_values->get(27)) == (0))) goto event_1562_14_end;
        if (not_always_1562_14 > loop_count) {
            not_always_1562_14 = loop_count + 2;
            goto event_1562_14_end;
        }
        not_always_1562_14 = loop_count + 2;
            group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_blips_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1) {
            group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1 = true;
        }
    }
    event_1562_14_end: ;
}
void Frames::event_func_3153()
{
    // event 1566_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1566_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1566_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1566_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1566_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1566_14_end;
        if (!media.is_channel_playing(20-1)) goto event_1566_14_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1566_14_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1566_14_end: ;
}
void Frames::event_func_3154()
{
    // event 1567_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1567_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1567_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1567_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1567_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1567_14_end;
        if (!media.is_channel_playing(20-1)) goto event_1567_14_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1567_14_end: ;
}
void Frames::event_func_3155()
{
    // event 1568_14
    bool or_result_1568_14 = false;
    bool or_temp_result_1568_14_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1568_14_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1568_14_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1568_14_0_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1568_14_0_end;
        or_result_1568_14 = true;
        or_temp_result_1568_14_0 = true;
    }
    or_event_1568_14_0_end: ;
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1568_14_0) {
        playerskinsash_418_instances.save_selection();
    }
    // event 1568_14
    bool or_temp_result_1568_14_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1568_14_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1568_14_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1568_14_1_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1568_14_1_end;
        or_result_1568_14 = true;
        or_temp_result_1568_14_1 = true;
        or_event_1568_14_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1568_14_1) {
            dialogbox_566_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1568_14) goto or_final_or_event_1568_14_1_end;
        playerskinsash_418_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1568_14_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1568_14_0 || or_temp_result_1568_14_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1568_14_1_end: ;
}
