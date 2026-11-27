#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_3303()
{
    // event 1427_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1427_15_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1427_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (7))) goto event_1427_15_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1427_15_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(npccouchlilac_545_instances))->set_visible(true);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(npccouchlilac_545_instances));
            if (parent == NULL) goto pos_end_1427_15_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 44, parent->get_y() + 2);
            pos_end_1427_15_0: ;
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(npccouchlilac_545_instances));
            if (parent == NULL) goto pos_end_1427_15_1;
            ((Active*)*it)->set_global_position(parent->get_x() + -32, parent->get_y() + 2);
            pos_end_1427_15_1: ;
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_animation(10);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(51);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_83);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(5);
            ((Active*)*it)->restore_frame();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(0, 4);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
    }
    event_1427_15_end: ;
}
void Frames::event_func_3304()
{
    // event 1428_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1428_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (4))) goto event_1428_15_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 704);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 1500);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, height);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 7);
    }
    event_1428_15_end: ;
}
void Frames::event_func_3305()
{
    // event 1429_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1429_15_end;
        if (!(((Active*)get_instance(npccouchlilac_545_instances))->test_animation(0))) goto event_1429_15_end;
        ((Active*)get_instance(npccouchlilac_545_instances))->set_direction(((Active*)get_instance(npccouchlilac_545_instances))->alterables->values.get(1));
        ((Active*)get_instance(npccouchlilac_545_instances))->force_frame(((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_frame());
    }
    event_1429_15_end: ;
}
void Frames::event_func_3306()
{
    // event 1430_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1430_15_end;
        if (!((global_values->get(3)%math_helper%200) == (30))) goto event_1430_15_end;
        ((Active*)get_instance(npccouchlilac_545_instances))->alterables->values.set(0, 3);
    }
    event_1430_15_end: ;
}
void Frames::event_func_3307()
{
    // event 1431_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1431_15_end;
        if (!((global_values->get(3)%math_helper%200) == (100))) goto event_1431_15_end;
        ((Active*)get_instance(npccouchlilac_545_instances))->alterables->values.set(0, 0);
    }
    event_1431_15_end: ;
}
void Frames::event_func_3308()
{
    // event 1432_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1432_15_end;
        if (!((global_values->get(3)%math_helper%6) == (5))) goto event_1432_15_end;
        if (!((((Active*)get_instance(npccouchlilac_545_instances))->alterables->values.get(1)) > (((Active*)get_instance(npccouchlilac_545_instances))->alterables->values.get(0)))) goto event_1432_15_end;
        ((Active*)get_instance(npccouchlilac_545_instances))->alterables->values.sub(1, 1);
    }
    event_1432_15_end: ;
}
void Frames::event_func_3309()
{
    // event 1433_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1433_15_end;
        if (!((global_values->get(3)%math_helper%6) == (5))) goto event_1433_15_end;
        if (!((((Active*)get_instance(npccouchlilac_545_instances))->alterables->values.get(1)) < (((Active*)get_instance(npccouchlilac_545_instances))->alterables->values.get(0)))) goto event_1433_15_end;
        ((Active*)get_instance(npccouchlilac_545_instances))->alterables->values.add(1, 1);
    }
    event_1433_15_end: ;
}
void Frames::event_func_3310()
{
    // event 1434_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1434_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (4))) goto event_1434_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (100))) goto event_1434_15_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1434_15_end: ;
}
void Frames::event_func_3311()
{
    // event 1435_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1435_15_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1435_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (8))) goto event_1435_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (14))) goto event_1435_15_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1435_15_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
    }
    event_1435_15_end: ;
}
void Frames::event_func_3312()
{
    // event 1436_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1436_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (10))) goto event_1436_15_end;
        if (not_always_1436_15 > loop_count) {
            not_always_1436_15 = loop_count + 2;
            goto event_1436_15_end;
        }
        not_always_1436_15 = loop_count + 2;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(21);
        }
    }
    event_1436_15_end: ;
}
void Frames::event_func_3313()
{
    // event 1437_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1437_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (12))) goto event_1437_15_end;
        if (not_always_1437_15 > loop_count) {
            not_always_1437_15 = loop_count + 2;
            goto event_1437_15_end;
        }
        not_always_1437_15 = loop_count + 2;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(npccouchlilac_545_instances));
            if (parent == NULL) goto pos_end_1437_15_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 10, parent->get_y() + -8);
            pos_end_1437_15_0: ;
        }
        ((Active*)get_instance(npccouchlilac_545_instances))->set_visible(false);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(69);
        }
    }
    event_1437_15_end: ;
}
void Frames::event_func_3314()
{
    // event 1438_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1438_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (13))) goto event_1438_15_end;
        if (not_always_1438_15 > loop_count) {
            not_always_1438_15 = loop_count + 2;
            goto event_1438_15_end;
        }
        not_always_1438_15 = loop_count + 2;
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_1438_15_end: ;
}
void Frames::event_func_3315()
{
    // event 1439_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1439_15_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1439_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (14))) goto event_1439_15_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1439_15_end;
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
    event_1439_15_end: ;
}
void Frames::event_func_3316()
{
    // event 1440_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1440_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (6))) goto event_1440_15_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 4);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(5));
        }
    }
    event_1440_15_end: ;
}
void Frames::event_func_3317()
{
    // event 1441_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1441_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (6))) goto event_1441_15_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1441_15_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        media.play(str_data_bgm_m_tvshow_ogg_103, 31-1, 1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(npccouchlilac_545_instances))->set_visible(true);
        ((Active*)get_instance(npccouchcarol_555_instances))->set_visible(true);
        ((Active*)get_instance(chips_628_instances))->set_visible(true);
        ((Active*)get_instance(furniturefloor6_550_instances))->set_direction(1);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_83);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(0, 7);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->force_frame(0);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(npccouchlilac_545_instances));
            if (parent == NULL) goto pos_end_1441_15_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 60, parent->get_y() + 2);
            pos_end_1441_15_0: ;
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(39);
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1441_15_end: ;
}
void Frames::event_func_3318()
{
    // event 1442_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1442_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (7))) goto event_1442_15_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 4);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(5));
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 14);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 704);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 1500);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, height);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(npccouchlilac_545_instances));
            if (parent == NULL) goto pos_end_1442_15_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 60, parent->get_y() + 2);
            pos_end_1442_15_0: ;
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(39);
            ((Active*)*it)->set_visible(true);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_1442_15_end: ;
}
void Frames::event_func_3319()
{
    // event 1443_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1443_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (7))) goto event_1443_15_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1443_15_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(npccouchcarol_555_instances))->force_animation(7);
        ((Active*)get_instance(npccouchcarol_555_instances))->restore_frame();
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_1443_15_end: ;
}
void Frames::event_func_3320()
{
    // event 1444_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1444_15_end;
        if (!(((Active*)get_instance(npccouchcarol_555_instances))->test_animation(7))) goto event_1444_15_end;
        if (!((((Active*)get_instance(npccouchcarol_555_instances))->get_frame()) == (6))) goto event_1444_15_end;
        if (not_always_1444_15 > loop_count) {
            not_always_1444_15 = loop_count + 2;
            goto event_1444_15_end;
        }
        not_always_1444_15 = loop_count + 2;
        media.play(str_data_voices_eng_ca_carol_chew_ogg_104, 21-1, 1);
    }
    event_1444_15_end: ;
}
void Frames::event_func_3321()
{
    // event 1445_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1445_15_end;
        if (!(((Active*)get_instance(npccouchcarol_555_instances))->is_animation_finished(7))) goto event_1445_15_end;
        ((Active*)get_instance(npccouchcarol_555_instances))->set_direction(1);
    }
    event_1445_15_end: ;
}
void Frames::event_func_3322()
{
    // event 1446_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1446_15_end;
        if (!(((Active*)get_instance(npccouchcarol_555_instances))->test_animation(0))) goto event_1446_15_end;
        if (!(((Active*)get_instance(npccouchcarol_555_instances))->test_directions(1))) goto event_1446_15_end;
        ((Active*)get_instance(npccouchcarol_555_instances))->force_frame(((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_frame());
    }
    event_1446_15_end: ;
}
void Frames::event_func_3323()
{
    // event 1447_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1447_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (8))) goto event_1447_15_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
    }
    event_1447_15_end: ;
}
void Frames::event_func_3324()
{
    // event 1448_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1448_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (8))) goto event_1448_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (160))) goto event_1448_15_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(npccouchcarol_555_instances))->set_direction(0);
    }
    event_1448_15_end: ;
}
void Frames::event_func_3325()
{
    // event 1449_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1449_15_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1449_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (15))) goto event_1449_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (19))) goto event_1449_15_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1449_15_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
    }
    event_1449_15_end: ;
}
void Frames::event_func_3326()
{
    // event 1450_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1450_15_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1450_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (19))) goto event_1450_15_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1450_15_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(28);
        }
        ((Active*)get_instance(npccouchlilac_545_instances))->set_direction(0);
        ((Active*)get_instance(npccouchlilac_545_instances))->force_animation(5);
        ((Active*)get_instance(npccouchcarol_555_instances))->force_animation(5);
        ((Active*)get_instance(npccouchcarol_555_instances))->set_direction(0);
        media.play(str_data_voices_eng_ca_ca_07_b5_ogg_105, 19-1, 1);
        media.play(str_data_voices_eng_li_li_06_10_ogg_106, 18-1, 1);
        media.play(str_data_voices_eng_mi_mi_03_03_ogg_107, 21-1, 1);
        ((Active*)get_instance(npccouchlilac_545_instances))->restore_frame();
    }
    event_1450_15_end: ;
}
void Frames::event_func_3327()
{
    // event 1451_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1451_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (10))) goto event_1451_15_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
    }
    event_1451_15_end: ;
}
void Frames::event_func_3328()
{
    // event 1452_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1452_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (10))) goto event_1452_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (80))) goto event_1452_15_end;
        ((Active*)get_instance(npccouchcarol_555_instances))->force_animation(0);
        ((Active*)get_instance(npccouchcarol_555_instances))->set_direction(0);
    }
    event_1452_15_end: ;
}
void Frames::event_func_3329()
{
    // event 1453_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1453_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (10))) goto event_1453_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (90))) goto event_1453_15_end;
        ((Active*)get_instance(npccouchlilac_545_instances))->force_animation(0);
    }
    event_1453_15_end: ;
}
void Frames::event_func_3330()
{
    // event 1454_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1454_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (10))) goto event_1454_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (110))) goto event_1454_15_end;
        ((Active*)get_instance(npccouchlilac_545_instances))->force_animation(0);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(39);
        }
        ((Active*)get_instance(npccouchcarol_555_instances))->force_frame(0);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1454_15_end: ;
}
void Frames::event_func_3331()
{
    // event 1455_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1455_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (10))) goto event_1455_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (280))) goto event_1455_15_end;
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(0, 16);
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
    event_1455_15_end: ;
}
void Frames::event_func_3332()
{
    // event 1456_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1456_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (10))) goto event_1456_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (300))) goto event_1456_15_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(npccouchlilac_545_instances))->set_visible(false);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_frame(63);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(npccouchlilac_545_instances));
            if (parent == NULL) goto pos_end_1456_15_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 10, parent->get_y() + -23);
            pos_end_1456_15_0: ;
        }
    }
    event_1456_15_end: ;
}
void Frames::event_func_3333()
{
    // event 1457_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1457_15_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1457_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (20))) goto event_1457_15_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1457_15_end;
        if (!((global_values->get(1)) != (2))) goto event_1457_15_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
    }
    event_1457_15_end: ;
}
void Frames::event_func_3334()
{
    // event 1458_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1458_15_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1458_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (20))) goto event_1458_15_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1458_15_end;
        if (!((global_values->get(1)) == (2))) goto event_1458_15_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(yes_115_instances))->set_visible(true);
        ((Active*)get_instance(no_646_instances))->set_visible(true);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(crystal_456_instances))->set_y(((Active*)get_instance(yes_115_instances))->get_y());
        ((Active*)get_instance(crystal_456_instances))->set_visible(true);
            group_pause_1 = false;
    
    }
    event_1458_15_end: ;
}
void Frames::event_func_3335()
{
    // event 1459_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1459_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (12))) goto event_1459_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) < (12))) goto event_1459_15_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
    }
    event_1459_15_end: ;
}
void Frames::event_func_3336()
{
    // event 1460_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1460_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (12))) goto event_1460_15_end;
        if (!((((Active*)get_instance(yes_115_instances))->alterables->values.get(0)) == (0))) goto event_1460_15_end;
        ((Active*)get_instance(crystal_456_instances))->set_y(((Active*)get_instance(yes_115_instances))->get_y());
    }
    event_1460_15_end: ;
}
void Frames::event_func_3337()
{
    // event 1461_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1461_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (12))) goto event_1461_15_end;
        if (!((((Active*)get_instance(yes_115_instances))->alterables->values.get(0)) == (1))) goto event_1461_15_end;
        ((Active*)get_instance(crystal_456_instances))->set_y(((Active*)get_instance(no_646_instances))->get_y());
    }
    event_1461_15_end: ;
}
void Frames::event_func_3338()
{
    // event 1462_15
    bool or_result_1462_15 = false;
    bool or_temp_result_1462_15_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto or_event_1462_15_0_end;
        npcshellduck_533_instances.clear_selection();
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (12))) { it.deselect(); continue; }
        }
        if (!npcshellduck_533_instances.has_selection()) goto or_event_1462_15_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1462_15_0_end;
        or_result_1462_15 = true;
        or_temp_result_1462_15_0 = true;
    }
    or_event_1462_15_0_end: ;
    npcshellduck_533_instances.clear_saved_selection();
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1462_15_0) {
        inputsp1_21_instances.save_selection();
        npcshellduck_533_instances.save_selection();
    }
    // event 1462_15
    bool or_temp_result_1462_15_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto or_event_1462_15_1_end;
        npcshellduck_533_instances.clear_selection();
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (12))) { it.deselect(); continue; }
        }
        if (!npcshellduck_533_instances.has_selection()) goto or_event_1462_15_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1462_15_1_end;
        or_result_1462_15 = true;
        or_temp_result_1462_15_1 = true;
        or_event_1462_15_1_end: ;
        if (or_temp_result_1462_15_1) {
            inputsp1_21_instances.save_selection();
            npcshellduck_533_instances.save_selection();
        }
        if (!or_result_1462_15) goto or_final_or_event_1462_15_1_end;
        inputsp1_21_instances.empty_selection();
        npcshellduck_533_instances.empty_selection();
        if (or_temp_result_1462_15_0 || or_temp_result_1462_15_1) {
            inputsp1_21_instances.restore_selection();
        }
        if (or_temp_result_1462_15_0 || or_temp_result_1462_15_1) {
            npcshellduck_533_instances.restore_selection();
        }
        yes_115_instances.clear_selection();
        for (ObjectIterator it(yes_115_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+1)%math_helper%2);
        }
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
    }
    or_final_or_event_1462_15_1_end: ;
}
void Frames::event_func_3339()
{
    // event 1463_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1463_15_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1463_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (12))) goto event_1463_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (10))) goto event_1463_15_end;
        if (!((((Active*)get_instance(yes_115_instances))->alterables->values.get(0)) == (0))) goto event_1463_15_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(yes_115_instances))->set_visible(false);
        ((Active*)get_instance(no_646_instances))->set_visible(false);
        ((Active*)get_instance(crystal_456_instances))->set_visible(false);
        if (!group_pause_1) {
            group_pause_1 = true;
        }
    }
    event_1463_15_end: ;
}
void Frames::event_func_3340()
{
    // event 1464_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1464_15_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1464_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (21))) goto event_1464_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (26))) goto event_1464_15_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1464_15_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
    }
    event_1464_15_end: ;
}
void Frames::event_func_3341()
{
    // event 1465_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1465_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (22))) goto event_1465_15_end;
        if (not_always_1465_15 > loop_count) {
            not_always_1465_15 = loop_count + 2;
            goto event_1465_15_end;
        }
        not_always_1465_15 = loop_count + 2;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1465_15_end: ;
}
void Frames::event_func_3342()
{
    // event 1466_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1466_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (25))) goto event_1466_15_end;
        if (not_always_1466_15 > loop_count) {
            not_always_1466_15 = loop_count + 2;
            goto event_1466_15_end;
        }
        not_always_1466_15 = loop_count + 2;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(60);
        }
    }
    event_1466_15_end: ;
}
void Frames::event_func_3343()
{
    // event 1467_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1467_15_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1467_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (26))) goto event_1467_15_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1467_15_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(0, 14);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(17);
            ((Active*)*it)->force_speed(14);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
    }
    event_1467_15_end: ;
}
void Frames::event_func_3344()
{
    // event 1468_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1468_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (14))) goto event_1468_15_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
    }
    event_1468_15_end: ;
}
void Frames::event_func_3345()
{
    // event 1469_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1469_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (14))) goto event_1469_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (60))) goto event_1469_15_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30);
        }
        media.play(str_data_voices_eng_mi_mi_03_05_ogg_108, 21-1, 1);
    }
    event_1469_15_end: ;
}
void Frames::event_func_3346()
{
    // event 1470_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1470_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (14))) goto event_1470_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (200))) goto event_1470_15_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1470_15_end: ;
}
void Frames::event_func_3347()
{
    // event 1471_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1471_15_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1471_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (27))) goto event_1471_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (30))) goto event_1471_15_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1471_15_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
    }
    event_1471_15_end: ;
}
void Frames::event_func_3348()
{
    // event 1472_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1472_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (28))) goto event_1472_15_end;
        if (not_always_1472_15 > loop_count) {
            not_always_1472_15 = loop_count + 2;
            goto event_1472_15_end;
        }
        not_always_1472_15 = loop_count + 2;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(50);
        }
    }
    event_1472_15_end: ;
}
void Frames::event_func_3349()
{
    // event 1473_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1473_15_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1473_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (30))) goto event_1473_15_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1473_15_end;
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
        media.stop_channel(31-1);
    }
    event_1473_15_end: ;
}
void Frames::event_func_3350()
{
    // event 1474_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1474_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (16))) goto event_1474_15_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 2);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(5));
        }
    }
    event_1474_15_end: ;
}
void Frames::event_func_3351()
{
    // event 1475_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1)) goto event_1475_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (16))) goto event_1475_15_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1475_15_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(0, 0);
            group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1) {
            group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1 = true;
        }
        media.stop_channel(31-1);
    }
    event_1475_15_end: ;
}
void Frames::event_func_3352()
{
    // event 1476_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1)) goto event_1476_15_end;
        if (!((global_values->get(4)) == (12))) goto event_1476_15_end;
        if (once_condition_1476_15) goto event_1476_15_end;
        once_condition_1476_15 = true;
        if (!group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1) {
            group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1 = true;
        }
        {
            loop_stop_player_running = true;
            int times = int(1);
            loop_stop_player_index = 0;
            while (loop_stop_player_index < times) {
                loop_stop_player_13();
                if (!loop_stop_player_running) break;
                loop_stop_player_index++;
            }
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 280);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 400);
        creditstorquerocket_579_instances.clear_selection();
        for (ObjectIterator it(creditstorquerocket_579_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        torquerocket3_640_instances.clear_selection();
        for (ObjectIterator it(torquerocket3_640_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        torquerocket2_641_instances.clear_selection();
        for (ObjectIterator it(torquerocket2_641_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        torquerocket_632_instances.clear_selection();
        for (ObjectIterator it(torquerocket_632_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1476_15_end: ;
}
void Frames::event_func_3353()
{
    // event 1477_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1477_15_end;
        if (once_condition_1477_15) goto event_1477_15_end;
        once_condition_1477_15 = true;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1477_15_end: ;
}
void Frames::event_func_3354()
{
    // event 1478_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1478_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) < (5))) goto event_1478_15_end;
        media.set_channel_volume(32-1, global_values->get(25)*0.2);
    }
    event_1478_15_end: ;
}
void Frames::event_func_3355()
{
    // event 1479_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1479_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (0))) goto event_1479_15_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 4);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(5));
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 30);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 312);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 1500);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, height);
        ((Active*)get_instance(npccouchlilac_545_instances))->force_animation(7);
        ((Active*)get_instance(npccouchlilac_545_instances))->set_direction(0);
        ((Active*)get_instance(npccouchlilac_545_instances))->set_visible(true);
        {
            FrameObject * parent = ((Active*)get_instance(furniturefloor5_544_instances));
            if (parent == NULL) goto pos_end_1479_15_0;
            ((Active*)get_instance(npccouchlilac_545_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1479_15_0: ;
        }
        ((Active*)get_instance(chips_628_instances))->set_direction(1);
        {
            FrameObject * parent = ((Active*)get_instance(furniturefloor5_544_instances));
            if (parent == NULL) goto pos_end_1479_15_1;
            ((Active*)get_instance(chips_628_instances))->set_global_position(parent->get_x() + -54, parent->get_y() + 41);
            pos_end_1479_15_1: ;
        }
        ((Active*)get_instance(chips_628_instances))->set_visible(true);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1532);
            ((Active*)*it)->set_x(520);
            ((Active*)*it)->set_visible(true);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(0);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_1479_15_end: ;
}
void Frames::event_func_3356()
{
    // event 1480_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1480_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (0))) goto event_1480_15_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1480_15_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.stop_channel(21-1);
    }
    event_1480_15_end: ;
}
void Frames::event_func_3357()
{
    // event 1481_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1481_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (1))) goto event_1481_15_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
    }
    event_1481_15_end: ;
}
void Frames::event_func_3358()
{
    // event 1482_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1482_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (1))) goto event_1482_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (60))) goto event_1482_15_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1482_15_end: ;
}
void Frames::event_func_3359()
{
    // event 1483_15
    bool or_result_1483_15 = false;
    bool or_temp_result_1483_15_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto or_event_1483_15_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1483_15_0_end;
        or_result_1483_15 = true;
        or_temp_result_1483_15_0 = true;
    }
    or_event_1483_15_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1483_15_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1483_15
    bool or_temp_result_1483_15_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto or_event_1483_15_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1483_15_1_end;
        or_result_1483_15 = true;
        or_temp_result_1483_15_1 = true;
    }
    or_event_1483_15_1_end: ;
    if (or_temp_result_1483_15_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1483_15
    bool or_temp_result_1483_15_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto or_event_1483_15_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1483_15_2_end;
        or_result_1483_15 = true;
        or_temp_result_1483_15_2 = true;
        or_event_1483_15_2_end: ;
        if (or_temp_result_1483_15_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1483_15) goto or_final_or_event_1483_15_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1483_15_0 || or_temp_result_1483_15_1 || or_temp_result_1483_15_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1483_15_2_end: ;
}
void Frames::event_func_3360()
{
    // event 1484_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1484_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (31))) goto event_1484_15_end;
        if (not_always_1484_15 > loop_count) {
            not_always_1484_15 = loop_count + 2;
            goto event_1484_15_end;
        }
        not_always_1484_15 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(1);
    }
    event_1484_15_end: ;
}
void Frames::event_func_3361()
{
    // event 1485_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1485_15_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1485_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (31))) goto event_1485_15_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1485_15_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 86);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.play_id(SOUND_COMMON_SKID_6, -1, 1);
    }
    event_1485_15_end: ;
}
void Frames::event_func_3362()
{
    // event 1486_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1486_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (3))) goto event_1486_15_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(16);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)*0.1);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.sub(1, 2);
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
        }
    }
    event_1486_15_end: ;
}
void Frames::event_func_3363()
{
    // event 1487_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1487_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (3))) goto event_1487_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) <= (0))) goto event_1487_15_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(6);
        }
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
    }
    event_1487_15_end: ;
}
void Frames::event_func_3364()
{
    // event 1488_15
    bool or_result_1488_15 = false;
    bool or_temp_result_1488_15_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto or_event_1488_15_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (41))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1488_15_0_end;
        dialogarrow_568_instances.clear_selection();
        for (ObjectIterator it(dialogarrow_568_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!dialogarrow_568_instances.has_selection()) goto or_event_1488_15_0_end;
        or_result_1488_15 = true;
        or_temp_result_1488_15_0 = true;
    }
    or_event_1488_15_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    dialogarrow_568_instances.clear_saved_selection();
    if (or_temp_result_1488_15_0) {
        dialogbox_566_instances.save_selection();
        dialogarrow_568_instances.save_selection();
    }
    // event 1488_15
    bool or_temp_result_1488_15_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto or_event_1488_15_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (34))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1488_15_1_end;
        if (!((media.get_channel_position(-1 +21)) > (2000))) goto or_event_1488_15_1_end;
        or_result_1488_15 = true;
        or_temp_result_1488_15_1 = true;
    }
    or_event_1488_15_1_end: ;
    if (or_temp_result_1488_15_1) {
        dialogbox_566_instances.save_selection();
    }
    // event 1488_15
    bool or_temp_result_1488_15_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto or_event_1488_15_2_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (40))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1488_15_2_end;
        if (!((media.get_channel_position(-1 +21)) > (2800))) goto or_event_1488_15_2_end;
        or_result_1488_15 = true;
        or_temp_result_1488_15_2 = true;
        or_event_1488_15_2_end: ;
        if (or_temp_result_1488_15_2) {
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1488_15) goto or_final_or_event_1488_15_2_end;
        dialogbox_566_instances.empty_selection();
        dialogarrow_568_instances.empty_selection();
        if (or_temp_result_1488_15_0 || or_temp_result_1488_15_1 || or_temp_result_1488_15_2) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1488_15_0) {
            dialogarrow_568_instances.restore_selection();
        }
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
            ((Active*)*it)->alterables->values.set(7, 1);
        }
        for (ObjectIterator it(dialogarrow_568_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        media.stop_channel(20-1);
    }
    or_final_or_event_1488_15_2_end: ;
}
void Frames::event_func_3365()
{
    // event 1489_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1489_15_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(41))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(64))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (2))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1489_15_end;
        if (not_always_1489_15 > loop_count) {
            not_always_1489_15 = loop_count + 2;
            goto event_1489_15_end;
        }
        not_always_1489_15 = loop_count + 2;
        media.play_id(SOUND_JUMP_HI_340, -1, 1);
    }
    event_1489_15_end: ;
}
void Frames::event_func_3366()
{
    // event 1490_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1490_15_end;
        if (!(((Active*)get_instance(npccouchlilac_545_instances))->test_directions(1))) goto event_1490_15_end;
        ((Active*)get_instance(npccouchlilac_545_instances))->force_frame(((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_frame());
    }
    event_1490_15_end: ;
}
void Frames::event_func_3367()
{
    // event 1491_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1491_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (33))) goto event_1491_15_end;
        if (not_always_1491_15 > loop_count) {
            not_always_1491_15 = loop_count + 2;
            goto event_1491_15_end;
        }
        not_always_1491_15 = loop_count + 2;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(3);
        }
    }
    event_1491_15_end: ;
}
void Frames::event_func_3368()
{
    // event 1492_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1492_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (33))) goto event_1492_15_end;
        if (!((media.get_channel_position(-1 +20)) > (0))) goto event_1492_15_end;
        if (!((media.get_channel_position(-1 +20)) < (800))) goto event_1492_15_end;
        if (not_always_1492_15 > loop_count) {
            not_always_1492_15 = loop_count + 2;
            goto event_1492_15_end;
        }
        not_always_1492_15 = loop_count + 2;
        ((Active*)get_instance(npccouchlilac_545_instances))->set_direction(0);
    }
    event_1492_15_end: ;
}
void Frames::event_func_3369()
{
    // event 1493_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1493_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (33))) goto event_1493_15_end;
        if (!((media.get_channel_position(-1 +20)) > (800))) goto event_1493_15_end;
        if (!((media.get_channel_position(-1 +20)) < (2500))) goto event_1493_15_end;
        if (not_always_1493_15 > loop_count) {
            not_always_1493_15 = loop_count + 2;
            goto event_1493_15_end;
        }
        not_always_1493_15 = loop_count + 2;
        ((Active*)get_instance(npccouchlilac_545_instances))->set_direction(1);
        ((Active*)get_instance(npccouchlilac_545_instances))->force_frame(0);
        ((Active*)get_instance(npccouchlilac_545_instances))->restore_frame();
    }
    event_1493_15_end: ;
}
void Frames::event_func_3370()
{
    // event 1494_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1494_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (33))) goto event_1494_15_end;
        if (!((media.get_channel_position(-1 +20)) >= (2500))) goto event_1494_15_end;
        if (not_always_1494_15 > loop_count) {
            not_always_1494_15 = loop_count + 2;
            goto event_1494_15_end;
        }
        not_always_1494_15 = loop_count + 2;
        ((Active*)get_instance(npccouchlilac_545_instances))->set_direction(0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 3);
    }
    event_1494_15_end: ;
}
void Frames::event_func_3371()
{
    // event 1495_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1495_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (34))) goto event_1495_15_end;
        if (not_always_1495_15 > loop_count) {
            not_always_1495_15 = loop_count + 2;
            goto event_1495_15_end;
        }
        not_always_1495_15 = loop_count + 2;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(28);
        }
    }
    event_1495_15_end: ;
}
void Frames::event_func_3372()
{
    // event 1496_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1496_15_end;
        if (!((global_values->get(27)) == (0))) goto event_1496_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (34))) goto event_1496_15_end;
        if (!media.is_channel_playing(20-1)) goto event_1496_15_end;
        if (!(!media.is_channel_playing(21-1))) goto event_1496_15_end;
        media.play(str_data_voices_eng_109+mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 6, 2)+str__89+mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 6, 8)+str_ogg_90, 21-1);
        media.stop_channel(20-1);
    }
    event_1496_15_end: ;
}
void Frames::event_func_3373()
{
    // event 1497_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1497_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (35))) goto event_1497_15_end;
        if (!(!media.is_channel_playing(21-1))) goto event_1497_15_end;
        if (not_always_1497_15 > loop_count) {
            not_always_1497_15 = loop_count + 2;
            goto event_1497_15_end;
        }
        not_always_1497_15 = loop_count + 2;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(3);
        }
    }
    event_1497_15_end: ;
}
void Frames::event_func_3374()
{
    // event 1498_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1498_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (35))) goto event_1498_15_end;
        if (!((media.get_channel_position(-1 +20)) < (810))) goto event_1498_15_end;
        if (once_condition_1498_15) goto event_1498_15_end;
        once_condition_1498_15 = true;
        ((Active*)get_instance(npccouchlilac_545_instances))->set_direction(3);
        ((Active*)get_instance(npccouchlilac_545_instances))->force_frame(0);
        ((Active*)get_instance(npccouchlilac_545_instances))->restore_frame();
    }
    event_1498_15_end: ;
}
void Frames::event_func_3375()
{
    // event 1499_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1499_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (35))) goto event_1499_15_end;
        if (!((media.get_channel_position(-1 +20)) >= (810))) goto event_1499_15_end;
        if (not_always_1499_15 > loop_count) {
            not_always_1499_15 = loop_count + 2;
            goto event_1499_15_end;
        }
        not_always_1499_15 = loop_count + 2;
        ((Active*)get_instance(npccouchlilac_545_instances))->set_direction(0);
    }
    event_1499_15_end: ;
}
void Frames::event_func_3376()
{
    // event 1500_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1500_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (36))) goto event_1500_15_end;
        if (once_condition_1500_15) goto event_1500_15_end;
        once_condition_1500_15 = true;
        media.stop_channel(21-1);
    }
    event_1500_15_end: ;
}
void Frames::event_func_3377()
{
    // event 1501_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1501_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (37))) goto event_1501_15_end;
        if (!((media.get_channel_position(-1 +20)) < (1050))) goto event_1501_15_end;
        if (once_condition_1501_15) goto event_1501_15_end;
        once_condition_1501_15 = true;
        ((Active*)get_instance(npccouchlilac_545_instances))->set_direction(2);
        ((Active*)get_instance(npccouchlilac_545_instances))->force_frame(0);
        ((Active*)get_instance(npccouchlilac_545_instances))->restore_frame();
    }
    event_1501_15_end: ;
}
void Frames::event_func_3378()
{
    // event 1502_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1502_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (37))) goto event_1502_15_end;
        if (!((media.get_channel_position(-1 +20)) >= (1050))) goto event_1502_15_end;
        if (not_always_1502_15 > loop_count) {
            not_always_1502_15 = loop_count + 2;
            goto event_1502_15_end;
        }
        not_always_1502_15 = loop_count + 2;
        ((Active*)get_instance(npccouchlilac_545_instances))->set_direction(0);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(3);
        }
    }
    event_1502_15_end: ;
}
void Frames::event_func_3379()
{
    // event 1503_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1503_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (38))) goto event_1503_15_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_max(((Active*)*it)->get_y()-8, ((Active*)get_instance(furniturefloor4_540_instances, it.current_index, default_active_instance))->get_y()));
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(6);
        }
    }
    event_1503_15_end: ;
}
void Frames::event_func_3380()
{
    // event 1504_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1504_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (39))) goto event_1504_15_end;
        if (!((media.get_channel_position(-1 +20)) < (1000))) goto event_1504_15_end;
        if (once_condition_1504_15) goto event_1504_15_end;
        once_condition_1504_15 = true;
        ((Active*)get_instance(npccouchlilac_545_instances))->set_direction(4);
        ((Active*)get_instance(npccouchlilac_545_instances))->force_frame(0);
        ((Active*)get_instance(npccouchlilac_545_instances))->restore_frame();
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(3);
        }
    }
    event_1504_15_end: ;
}
void Frames::event_func_3381()
{
    // event 1505_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1505_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (39))) goto event_1505_15_end;
        if (!((media.get_channel_position(-1 +20)) >= (1000))) goto event_1505_15_end;
        if (!((media.get_channel_position(-1 +20)) < (2300))) goto event_1505_15_end;
        if (once_condition_1505_15) goto event_1505_15_end;
        once_condition_1505_15 = true;
        ((Active*)get_instance(npccouchlilac_545_instances))->set_direction(3);
        ((Active*)get_instance(npccouchlilac_545_instances))->force_frame(0);
        ((Active*)get_instance(npccouchlilac_545_instances))->restore_frame();
    }
    event_1505_15_end: ;
}
void Frames::event_func_3382()
{
    // event 1506_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1506_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (39))) goto event_1506_15_end;
        if (!((media.get_channel_position(-1 +20)) >= (2300))) goto event_1506_15_end;
        if (not_always_1506_15 > loop_count) {
            not_always_1506_15 = loop_count + 2;
            goto event_1506_15_end;
        }
        not_always_1506_15 = loop_count + 2;
        ((Active*)get_instance(npccouchlilac_545_instances))->set_direction(0);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(3);
        }
    }
    event_1506_15_end: ;
}
void Frames::event_func_3383()
{
    // event 1507_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1507_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (40))) goto event_1507_15_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(12);
            ((Active*)*it)->set_x(get_min(((Active*)*it)->get_x()+8, ((Active*)get_instance(furniturefloor5_544_instances))->get_action_x()));
            ((Active*)*it)->restore_frame();
        }
    }
    event_1507_15_end: ;
}
void Frames::event_func_3384()
{
    // event 1508_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1508_15_end;
        if (!((global_values->get(27)) == (0))) goto event_1508_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (40))) goto event_1508_15_end;
        if (!media.is_channel_playing(20-1)) goto event_1508_15_end;
        if (!(!media.is_channel_playing(21-1))) goto event_1508_15_end;
        media.play(str_data_voices_eng_109+mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 6, 2)+str__89+mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 6, 8)+str_ogg_90, 21-1);
        media.stop_channel(20-1);
    }
    event_1508_15_end: ;
}
void Frames::event_func_3385()
{
    // event 1509_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1509_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (41))) goto event_1509_15_end;
        if (!(!media.is_channel_playing(21-1))) goto event_1509_15_end;
        if (not_always_1509_15 > loop_count) {
            not_always_1509_15 = loop_count + 2;
            goto event_1509_15_end;
        }
        not_always_1509_15 = loop_count + 2;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1509_15_end: ;
}
void Frames::event_func_3386()
{
    // event 1510_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1510_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (41))) goto event_1510_15_end;
        if (not_always_1510_15 > loop_count) {
            not_always_1510_15 = loop_count + 2;
            goto event_1510_15_end;
        }
        not_always_1510_15 = loop_count + 2;
        ((Active*)get_instance(npccouchlilac_545_instances))->set_direction(0);
    }
    event_1510_15_end: ;
}
void Frames::event_func_3387()
{
    // event 1511_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1511_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (41))) goto event_1511_15_end;
        if (!((media.get_channel_position(-1 +20)) >= (500))) goto event_1511_15_end;
        if (not_always_1511_15 > loop_count) {
            not_always_1511_15 = loop_count + 2;
            goto event_1511_15_end;
        }
        not_always_1511_15 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 9);
    }
    event_1511_15_end: ;
}
void Frames::event_func_3388()
{
    // event 1512_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1512_15_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1512_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (41))) goto event_1512_15_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1512_15_end;
        media.set_channel_volume(32-1, global_values->get(25));
        media.stop_channel(20-1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(laddertop_357_instances));
            if (parent == NULL) goto pos_end_1512_15_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1512_15_0: ;
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(laddertop_357_instances));
            if (parent == NULL) goto pos_end_1512_15_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1512_15_1: ;
        }
        media.stop_channel(21-1);
    }
    event_1512_15_end: ;
}
void Frames::event_func_3389()
{
    // event 1513_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1513_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (5))) goto event_1513_15_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 580);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 976);
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
    }
    event_1513_15_end: ;
}
void Frames::event_func_3390()
{
    // event 1514_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1514_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (5))) goto event_1514_15_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (980))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1514_15_end;
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
    event_1514_15_end: ;
}
void Frames::event_func_3391()
{
    // event 1515_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1515_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (6))) goto event_1515_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (7))) goto event_1515_15_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(24), 1050));
            ((Active*)*it)->alterables->values.add(24, 0.25);
            ((Active*)*it)->set_x(get_max(((Active*)*it)->get_x()-5, ((Active*)get_instance(objecttententrance_551_instances))->get_x()+20));
        }
    }
    event_1515_15_end: ;
}
void Frames::event_func_3392()
{
    // event 1516_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1516_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (6))) goto event_1516_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (7))) goto event_1516_15_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (1050))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1516_15_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(30);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30);
        }
    }
    event_1516_15_end: ;
}
void Frames::event_func_3393()
{
    // event 1517_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1517_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (6))) goto event_1517_15_end;
        ((Active*)get_instance(objecttententrance_551_instances))->set_visible(true);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(35);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+3);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_speed(25);
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1517_15_end: ;
}
void Frames::event_func_3394()
{
    // event 1518_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1518_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (6))) goto event_1518_15_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (980))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1518_15_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->alterables->values.set(24, -3);
        }
        media.play_id(SOUND_COMMON_JUMP_8, -1, 1);
    }
    event_1518_15_end: ;
}
void Frames::event_func_3395()
{
    // event 1519_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1519_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (7))) goto event_1519_15_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(24), 1050));
            ((Active*)*it)->alterables->values.add(24, 0.25);
            ((Active*)*it)->set_x(get_max(((Active*)*it)->get_x()-5, ((Active*)get_instance(objecttententrance_551_instances))->get_x()+20));
        }
    }
    event_1519_15_end: ;
}
void Frames::event_func_3396()
{
    // event 1520_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1520_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (7))) goto event_1520_15_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (1050))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1520_15_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(30);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30);
        }
    }
    event_1520_15_end: ;
}
void Frames::event_func_3397()
{
    // event 1521_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1521_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (6))) goto event_1521_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (7))) goto event_1521_15_end;
        if (!((global_values->get(1)) == (0))) goto event_1521_15_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0), ((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()));
    }
    event_1521_15_end: ;
}
void Frames::event_func_3398()
{
    // event 1522_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1522_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (6))) goto event_1522_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (7))) goto event_1522_15_end;
        if (!((global_values->get(1)) != (0))) goto event_1522_15_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0), ((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_x()));
    }
    event_1522_15_end: ;
}
void Frames::event_func_3399()
{
    // event 1523_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1523_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (7))) goto event_1523_15_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(objecttententrance_551_instances))->get_x()+20))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1523_15_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
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
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1523_15_end: ;
}
void Frames::event_func_3400()
{
    // event 1524_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1524_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (8))) goto event_1524_15_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 4);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(5));
        }
    }
    event_1524_15_end: ;
}
void Frames::event_func_3401()
{
    // event 1525_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1525_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (8))) goto event_1525_15_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1525_15_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(18);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(1404, 1554);
            pos_end_1525_15_0: ;
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(1350, 1554);
            pos_end_1525_15_1: ;
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->force_frame(9);
            ((Active*)*it)->restore_frame();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_animation(15);
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(tentlight_617_instances));
            if (parent == NULL) goto pos_end_1525_15_2;
            ((Active*)*it)->set_global_position(parent->get_x() + -29, parent->get_y() + 30);
            pos_end_1525_15_2: ;
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1525_15_end: ;
}
void Frames::event_func_3402()
{
    // event 1526_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1526_15_end;
        if (once_condition_1526_15) goto event_1526_15_end;
        once_condition_1526_15 = true;
        objectkeystone_311_instances.empty_selection();
        // select single: false true false
        {
            FrameObject * parent = ((Active*)get_instance(tentlight_617_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                objectkeystone_311_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                objectkeystone_311_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                objectkeystone_311_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                objectkeystone_311_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                objectkeystone_311_instances.add_back();
            }
        }
        torqueshell_616_instances.clear_selection();
        spread_value(torqueshell_616_instances, 0, 0);
        for (ObjectIterator it(torqueshell_616_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1526_15_end: ;
}
