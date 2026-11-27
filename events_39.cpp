#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_3403()
{
    // event 1527_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1527_15_end;
        if (once_condition_1527_15) goto event_1527_15_end;
        once_condition_1527_15 = true;
        objectkeystone_311_instances.clear_selection();
        spread_value(objectkeystone_311_instances, 9, 0);
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->values.get(9));
            ((Active*)*it)->alterables->values.set(9, ((Active*)*it)->alterables->values.get(9)*72);
        }
    }
    event_1527_15_end: ;
}
void Frames::event_func_3404()
{
    // event 1528_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1528_15_end;
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, ((Active*)get_instance(tentlight_617_instances))->get_x()+cos_deg(((Active*)*it)->alterables->values.get(9))*64);
            ((Active*)*it)->alterables->values.set(5, ((Active*)get_instance(tentlight_617_instances))->get_y()-sin_deg(((Active*)*it)->alterables->values.get(9))*24);
            ((Active*)*it)->set_scale(1+sin_deg(((Active*)*it)->alterables->values.get(9))*0.25);
            ((Active*)*it)->alterables->values.set(9, (((Active*)*it)->alterables->values.get(9)+2)%math_helper%360);
            ((Active*)*it)->alterables->values.set(6, 0);
        }
    }
    event_1528_15_end: ;
}
void Frames::event_func_3405()
{
    // event 1529_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1529_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (9))) goto event_1529_15_end;
        media.set_channel_volume(32-1, global_values->get(25)*0.2);
    }
    event_1529_15_end: ;
}
void Frames::event_func_3406()
{
    // event 1530_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1530_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (9))) goto event_1530_15_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 1320);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 1500);
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 4);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(5));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        torqueshell_616_instances.clear_selection();
        for (ObjectIterator it(torqueshell_616_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1530_15_end: ;
}
void Frames::event_func_3407()
{
    // event 1531_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1531_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (9))) goto event_1531_15_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1531_15_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 42);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1531_15_end: ;
}
void Frames::event_func_3408()
{
    // event 1532_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1532_15_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1532_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (42))) goto event_1532_15_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1532_15_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.play(str_data_voices_88+global_strings->get(11)+str_to_to_03_01_ogg_110, 21-1, 1);
    }
    event_1532_15_end: ;
}
void Frames::event_func_3409()
{
    // event 1533_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1533_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (11))) goto event_1533_15_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(38);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_speed(0);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+12);
        }
    }
    event_1533_15_end: ;
}
void Frames::event_func_3410()
{
    // event 1534_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1534_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (11))) goto event_1534_15_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_y()))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1534_15_end;
        monitorcrate_409_instances.clear_selection();
        pick_objects_in_zone(monitorcrate_409_instances, 1097, 1359, 1401, 1641);
        for (ObjectIterator it(monitorcrate_409_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1534_15_end: ;
}
void Frames::event_func_3411()
{
    // event 1535_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1535_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (11))) goto event_1535_15_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_y()))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1535_15_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(playerskinsash_418_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->force_speed(50);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1535_15_end: ;
}
void Frames::event_func_3412()
{
    // event 1536_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1536_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (12))) goto event_1536_15_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
    }
    event_1536_15_end: ;
}
void Frames::event_func_3413()
{
    // event 1537_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1537_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (12))) goto event_1537_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (60))) goto event_1537_15_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(6);
        }
    }
    event_1537_15_end: ;
}
void Frames::event_func_3414()
{
    // event 1538_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1538_15_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1538_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (43))) goto event_1538_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (48))) goto event_1538_15_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1538_15_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
    }
    event_1538_15_end: ;
}
void Frames::event_func_3415()
{
    // event 1539_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1539_15_end;
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playerskintorque_450_instances, default_active_instance))->get_x()-20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playerskintorque_450_instances, default_active_instance))->get_x()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(playerskintorque_450_instances, default_active_instance))->get_y()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playerskintorque_450_instances, default_active_instance))->get_y()+20))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!objectcrystal_279_instances.has_selection()) goto event_1539_15_end;
        FrameObject * single_instance_1539_15_0; single_instance_1539_15_0 = pick_random(objectcrystal_279_instances);
        if (single_instance_1539_15_0 == NULL) goto event_1539_15_end;
        ((Active*)((Active*)single_instance_1539_15_0))->alterables->values.set(5, 1);
        ((Active*)get_instance(playercharactersensor_383_instances))->alterables->flags.enable(0);
    }
    event_1539_15_end: ;
}
void Frames::event_func_3416()
{
    // event 1540_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1540_15_end;
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_x()-20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_x()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_y()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_y()+20))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!objectcrystal_279_instances.has_selection()) goto event_1540_15_end;
        FrameObject * single_instance_1540_15_0; single_instance_1540_15_0 = pick_random(objectcrystal_279_instances);
        if (single_instance_1540_15_0 == NULL) goto event_1540_15_end;
        ((Active*)((Active*)single_instance_1540_15_0))->alterables->values.set(5, 1);
        ((Active*)get_instance(playercharactersensor_383_instances))->alterables->flags.enable(0);
    }
    event_1540_15_end: ;
}
void Frames::event_func_3417()
{
    // event 1541_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1541_15_end;
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()-20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_y()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_y()+20))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!objectcrystal_279_instances.has_selection()) goto event_1541_15_end;
        FrameObject * single_instance_1541_15_0; single_instance_1541_15_0 = pick_random(objectcrystal_279_instances);
        if (single_instance_1541_15_0 == NULL) goto event_1541_15_end;
        ((Active*)((Active*)single_instance_1541_15_0))->alterables->values.set(5, 1);
        ((Active*)get_instance(playercharactersensor_383_instances))->alterables->flags.enable(0);
    }
    event_1541_15_end: ;
}
void Frames::event_func_3418()
{
    // event 1542_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1542_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (44))) goto event_1542_15_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playerskintorque_450_instances, default_active_instance))->get_x()+50))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1542_15_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(30);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1542_15_end: ;
}
void Frames::event_func_3419()
{
    // event 1543_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1543_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (44))) goto event_1543_15_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(playerskintorque_450_instances, default_active_instance))->get_x()+50))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1543_15_end;
        if (not_always_1543_15 > loop_count) {
            not_always_1543_15 = loop_count + 2;
            goto event_1543_15_end;
        }
        not_always_1543_15 = loop_count + 2;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(27);
        }
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(true);
    }
    event_1543_15_end: ;
}
void Frames::event_func_3420()
{
    // event 1544_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1544_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (45))) goto event_1544_15_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_x()-100))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1544_15_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_max(((Active*)*it)->get_x()-3, ((Active*)get_instance(playerskincarol_445_instances, it.current_index, default_active_instance))->get_x()-100));
        }
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1544_15_end: ;
}
void Frames::event_func_3421()
{
    // event 1545_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1545_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (45))) goto event_1545_15_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_x()-100))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1545_15_end;
        if (not_always_1545_15 > loop_count) {
            not_always_1545_15 = loop_count + 2;
            goto event_1545_15_end;
        }
        not_always_1545_15 = loop_count + 2;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(true);
    }
    event_1545_15_end: ;
}
void Frames::event_func_3422()
{
    // event 1546_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1546_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (46))) goto event_1546_15_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_x()-30))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1546_15_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30);
        }
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1546_15_end: ;
}
void Frames::event_func_3423()
{
    // event 1547_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1547_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (46))) goto event_1547_15_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_x()-30))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1547_15_end;
        if (not_always_1547_15 > loop_count) {
            not_always_1547_15 = loop_count + 2;
            goto event_1547_15_end;
        }
        not_always_1547_15 = loop_count + 2;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(0);
        }
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(true);
    }
    event_1547_15_end: ;
}
void Frames::event_func_3424()
{
    // event 1548_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1548_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (46))) goto event_1548_15_end;
        if (!((media.get_channel_position(-1 +20)) > (1500))) goto event_1548_15_end;
        if (not_always_1548_15 > loop_count) {
            not_always_1548_15 = loop_count + 2;
            goto event_1548_15_end;
        }
        not_always_1548_15 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 6);
    }
    event_1548_15_end: ;
}
void Frames::event_func_3425()
{
    // event 1549_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1549_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (48))) goto event_1549_15_end;
        if (not_always_1549_15 > loop_count) {
            not_always_1549_15 = loop_count + 2;
            goto event_1549_15_end;
        }
        not_always_1549_15 = loop_count + 2;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1549_15_end: ;
}
void Frames::event_func_3426()
{
    // event 1550_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1550_15_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1550_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (48))) goto event_1550_15_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1550_15_end;
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
    event_1550_15_end: ;
}
void Frames::event_func_3427()
{
    // event 1551_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1551_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (14))) goto event_1551_15_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 4);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(5));
        }
    }
    event_1551_15_end: ;
}
void Frames::event_func_3428()
{
    // event 1552_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1552_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (14))) goto event_1552_15_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1552_15_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(0);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(1342, 1554);
            pos_end_1552_15_0: ;
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_animation(40);
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(1224, 1554);
            pos_end_1552_15_1: ;
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        monitorbroken_330_instances.clear_selection();
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(0, 15);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        monitorcrate_409_instances.clear_selection();
        for (ObjectIterator it(monitorcrate_409_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(1310, 1554);
            pos_end_1552_15_2: ;
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->set_visible(true);
        }
        torqueshell_616_instances.clear_selection();
        for (ObjectIterator it(torqueshell_616_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(57);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(72);
        }
    }
    event_1552_15_end: ;
}
void Frames::event_func_3429()
{
    // event 1553_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1553_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (15))) goto event_1553_15_end;
        if (!((levelcardfade2_24_instances.size()) == (0))) goto event_1553_15_end;
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
    event_1553_15_end: ;
}
void Frames::event_func_3430()
{
    // event 1554_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1554_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (15))) goto event_1554_15_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 1272);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 1500);
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 4);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(5));
        }
        torqueshell_616_instances.clear_selection();
        for (ObjectIterator it(torqueshell_616_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_1554_15_end: ;
}
void Frames::event_func_3431()
{
    // event 1555_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1555_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (52))) goto event_1555_15_end;
        if (not_always_1555_15 > loop_count) {
            not_always_1555_15 = loop_count + 2;
            goto event_1555_15_end;
        }
        not_always_1555_15 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(3);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()+20);
    }
    event_1555_15_end: ;
}
void Frames::event_func_3432()
{
    // event 1556_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1556_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (54))) goto event_1556_15_end;
        if (not_always_1556_15 > loop_count) {
            not_always_1556_15 = loop_count + 2;
            goto event_1556_15_end;
        }
        not_always_1556_15 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()-20);
    }
    event_1556_15_end: ;
}
void Frames::event_func_3433()
{
    // event 1557_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1557_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (15))) goto event_1557_15_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1557_15_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 52);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1557_15_end: ;
}
void Frames::event_func_3434()
{
    // event 1558_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1558_15_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1558_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (52))) goto event_1558_15_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1558_15_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
    }
    event_1558_15_end: ;
}
void Frames::event_func_3435()
{
    // event 1559_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1559_15_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1559_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (49))) goto event_1559_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) != (52))) goto event_1559_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (56))) goto event_1559_15_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1559_15_end;
        media.stop_channel(20-1);
    }
    event_1559_15_end: ;
}
void Frames::event_func_3436()
{
    // event 1560_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1560_15_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1560_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (49))) goto event_1560_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (56))) goto event_1560_15_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1560_15_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1560_15_end: ;
}
void Frames::event_func_3437()
{
    // event 1561_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1561_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (54))) goto event_1561_15_end;
        if (!((media.get_channel_position(-1 +20)) > (1500))) goto event_1561_15_end;
        if (not_always_1561_15 > loop_count) {
            not_always_1561_15 = loop_count + 2;
            goto event_1561_15_end;
        }
        not_always_1561_15 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 75);
    }
    event_1561_15_end: ;
}
void Frames::event_func_3438()
{
    // event 1562_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1562_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (56))) goto event_1562_15_end;
        if (not_always_1562_15 > loop_count) {
            not_always_1562_15 = loop_count + 2;
            goto event_1562_15_end;
        }
        not_always_1562_15 = loop_count + 2;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_1562_15_end: ;
}
void Frames::event_func_3439()
{
    // event 1563_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1563_15_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1563_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (56))) goto event_1563_15_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1563_15_end;
        media.stop_channel(20-1);
        media.play(str_data_voices_88+global_strings->get(11)+str_li_li_07_11_ogg_111, 21-1, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(18);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
    }
    event_1563_15_end: ;
}
void Frames::event_func_3440()
{
    // event 1564_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1564_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (17))) goto event_1564_15_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
    }
    event_1564_15_end: ;
}
void Frames::event_func_3441()
{
    // event 1565_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1565_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (17))) goto event_1565_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) < (40))) goto event_1565_15_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(78);
        }
    }
    event_1565_15_end: ;
}
void Frames::event_func_3442()
{
    // event 1566_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1566_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (17))) goto event_1566_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) >= (40))) goto event_1566_15_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(72);
        }
    }
    event_1566_15_end: ;
}
void Frames::event_func_3443()
{
    // event 1567_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1567_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (17))) goto event_1567_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (80))) goto event_1567_15_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1567_15_end: ;
}
void Frames::event_func_3444()
{
    // event 1568_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1568_15_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1568_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (57))) goto event_1568_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (67))) goto event_1568_15_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1568_15_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
    }
    event_1568_15_end: ;
}
void Frames::event_func_3445()
{
    // event 1569_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1569_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (61))) goto event_1569_15_end;
        if (not_always_1569_15 > loop_count) {
            not_always_1569_15 = loop_count + 2;
            goto event_1569_15_end;
        }
        not_always_1569_15 = loop_count + 2;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_1569_15_end: ;
}
void Frames::event_func_3446()
{
    // event 1570_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1570_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (61))) goto event_1570_15_end;
        if (!((media.get_channel_position(-1 +20)) > (2000))) goto event_1570_15_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 33);
    }
    event_1570_15_end: ;
}
void Frames::event_func_3447()
{
    // event 1571_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1571_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (63))) goto event_1571_15_end;
        if (not_always_1571_15 > loop_count) {
            not_always_1571_15 = loop_count + 2;
            goto event_1571_15_end;
        }
        not_always_1571_15 = loop_count + 2;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(21);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(72);
        }
    }
    event_1571_15_end: ;
}
void Frames::event_func_3448()
{
    // event 1572_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1572_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (67))) goto event_1572_15_end;
        if (!((global_values->get(27)) == (0))) goto event_1572_15_end;
        if (!((media.get_channel_position(-1 +20)) > (2500))) goto event_1572_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (18))) goto event_1572_15_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(7)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_fadein_music_112+global_strings->get(7)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 5);
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
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
    }
    event_1572_15_end: ;
}
void Frames::event_func_3449()
{
    // event 1573_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1573_15_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1573_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (67))) goto event_1573_15_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1573_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (18))) goto event_1573_15_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(7)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_fadein_music_112+global_strings->get(7)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 5);
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
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
    }
    event_1573_15_end: ;
}
void Frames::event_func_3450()
{
    // event 1574_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1574_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (19))) goto event_1574_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (21))) goto event_1574_15_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 0.5);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(5));
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
    }
    event_1574_15_end: ;
}
void Frames::event_func_3451()
{
    // event 1575_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1575_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (19))) goto event_1575_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (21))) goto event_1575_15_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1575_15_end;
        if (!((brevonimage_576_instances.size()) == (0))) goto event_1575_15_end;
        FrameObject * single_instance_1575_15_0; single_instance_1575_15_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(levelcardfade2_24_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_brevonimage_576(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1575_15_0 == NULL)
                    single_instance_1575_15_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1575_15_0))->set_x(((Active*)single_instance_1575_15_0)->get_x()+global_values->get(16)*0.5);
        {
            ((Active*)single_instance_1575_15_0)->blend_color.set_semi_transparency(128);
        }
    }
    event_1575_15_end: ;
}
void Frames::event_func_3452()
{
    // event 1576_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1576_15_end;
        brevonimage_576_instances.clear_selection();
        for (ObjectIterator it(brevonimage_576_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (128))) { it.deselect(); continue; }
        }
        if (!brevonimage_576_instances.has_selection()) goto event_1576_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) < (21))) goto event_1576_15_end;
        for (ObjectIterator it(brevonimage_576_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        for (ObjectIterator it(brevonimage_576_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(0));
        }
    }
    event_1576_15_end: ;
}
void Frames::event_func_3453()
{
    // event 1577_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1577_15_end;
        brevonimage_576_instances.clear_selection();
        for (ObjectIterator it(brevonimage_576_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonimage_576_instances.has_selection()) goto event_1577_15_end;
        if (!((global_values->get(3)%math_helper%30) == (0))) goto event_1577_15_end;
        FrameObject * single_instance_1577_15_0; single_instance_1577_15_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonimage_576_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_lightspark2_577(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1577_15_0 == NULL)
                    single_instance_1577_15_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1577_15_0))->set_y(((Active*)single_instance_1577_15_0)->get_y()+global_values->get(17)-randrange(100));
        ((Active*)((Active*)single_instance_1577_15_0))->set_x(((Active*)single_instance_1577_15_0)->get_x()-200+randrange(401));
        ((Active*)((Active*)single_instance_1577_15_0))->alterables->values.set(0, 0);
    }
    event_1577_15_end: ;
}
void Frames::event_func_3454()
{
    // event 1578_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1578_15_end;
        lightspark2_577_instances.clear_selection();
        for (ObjectIterator it(lightspark2_577_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_min(256-((Active*)get_instance(brevonimage_576_instances, it.current_index, default_active_instance))->alterables->values.get(0)-((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(lightspark2_577_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
    }
    event_1578_15_end: ;
}
void Frames::event_func_3455()
{
    // event 1579_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1579_15_end;
        lightspark2_577_instances.clear_selection();
        for (ObjectIterator it(lightspark2_577_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!lightspark2_577_instances.has_selection()) goto event_1579_15_end;
        for (ObjectIterator it(lightspark2_577_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
    }
    event_1579_15_end: ;
}
void Frames::event_func_3456()
{
    // event 1580_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1580_15_end;
        lightspark2_577_instances.clear_selection();
        for (ObjectIterator it(lightspark2_577_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!lightspark2_577_instances.has_selection()) goto event_1580_15_end;
        for (ObjectIterator it(lightspark2_577_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1580_15_end: ;
}
void Frames::event_func_3457()
{
    // event 1581_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1581_15_end;
        lightspark2_577_instances.clear_selection();
        for (ObjectIterator it(lightspark2_577_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!lightspark2_577_instances.has_selection()) goto event_1581_15_end;
        for (ObjectIterator it(lightspark2_577_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 1);
        }
    }
    event_1581_15_end: ;
}
void Frames::event_func_3458()
{
    // event 1582_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1582_15_end;
        lightspark2_577_instances.clear_selection();
        for (ObjectIterator it(lightspark2_577_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!lightspark2_577_instances.has_selection()) goto event_1582_15_end;
        for (ObjectIterator it(lightspark2_577_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1582_15_end: ;
}
void Frames::event_func_3459()
{
    // event 1583_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1583_15_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1583_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (67))) goto event_1583_15_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1583_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (19))) goto event_1583_15_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
    }
    event_1583_15_end: ;
}
void Frames::event_func_3460()
{
    // event 1584_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1584_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (68))) goto event_1584_15_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 1);
    }
    event_1584_15_end: ;
}
void Frames::event_func_3461()
{
    // event 1585_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1585_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (69))) goto event_1585_15_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 0);
    }
    event_1585_15_end: ;
}
void Frames::event_func_3462()
{
    // event 1586_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1586_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (19))) goto event_1586_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (340))) goto event_1586_15_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1586_15_end: ;
}
void Frames::event_func_3463()
{
    // event 1587_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1587_15_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1587_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (68))) goto event_1587_15_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1587_15_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1587_15_end: ;
}
void Frames::event_func_3464()
{
    // event 1588_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1588_15_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1588_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (69))) goto event_1588_15_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1588_15_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
    }
    event_1588_15_end: ;
}
void Frames::event_func_3465()
{
    // event 1589_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1589_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (21))) goto event_1589_15_end;
        brevonimage_576_instances.clear_selection();
        for (ObjectIterator it(brevonimage_576_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonimage_576_instances.has_selection()) goto event_1589_15_end;
        for (ObjectIterator it(brevonimage_576_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -2);
        }
        for (ObjectIterator it(brevonimage_576_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(0));
        }
    }
    event_1589_15_end: ;
}
void Frames::event_func_3466()
{
    // event 1590_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1)) goto event_1590_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (21))) goto event_1590_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (70))) goto event_1590_15_end;
        global_values->set(4, 99);
        next_frame = 69 + 0;    
    
    }
    event_1590_15_end: ;
}
void Frames::event_func_3467()
{
    // event 1591_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1)) goto event_1591_15_end;
        if (!((global_values->get(4)) == (13))) goto event_1591_15_end;
        if (once_condition_1591_15) goto event_1591_15_end;
        once_condition_1591_15 = true;
        if (!group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1) {
            group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1 = true;
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
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(0, 0);
        monitorbroken_330_instances.clear_selection();
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_3000_113);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_unqueue_music_70);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        creditstorquerocket_579_instances.clear_selection();
        for (ObjectIterator it(creditstorquerocket_579_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        torquerocket_632_instances.clear_selection();
        for (ObjectIterator it(torquerocket_632_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        torquerocket2_641_instances.clear_selection();
        for (ObjectIterator it(torquerocket2_641_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        torquerocket3_640_instances.clear_selection();
        for (ObjectIterator it(torquerocket3_640_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1591_15_end: ;
}
void Frames::event_func_3468()
{
    // event 1592_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto event_1592_15_end;
        if (once_condition_1592_15) goto event_1592_15_end;
        once_condition_1592_15 = true;
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
    }
    event_1592_15_end: ;
}
void Frames::event_func_3469()
{
    // event 1593_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto event_1593_15_end;
        if (once_condition_1593_15) goto event_1593_15_end;
        once_condition_1593_15 = true;
        objectkeystone_311_instances.clear_selection();
        spread_value(objectkeystone_311_instances, 9, 0);
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->values.get(9));
            ((Active*)*it)->alterables->values.set(9, ((Active*)*it)->alterables->values.get(9)*72);
        }
    }
    event_1593_15_end: ;
}
void Frames::event_func_3470()
{
    // event 1594_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto event_1594_15_end;
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, ((Active*)get_instance(tentlight_617_instances))->get_x()+cos_deg(((Active*)*it)->alterables->values.get(9))*64);
            ((Active*)*it)->alterables->values.set(5, ((Active*)get_instance(tentlight_617_instances))->get_y()-sin_deg(((Active*)*it)->alterables->values.get(9))*24);
            ((Active*)*it)->set_scale(1+sin_deg(((Active*)*it)->alterables->values.get(9))*0.25);
            ((Active*)*it)->alterables->values.set(9, (((Active*)*it)->alterables->values.get(9)+2)%math_helper%360);
            ((Active*)*it)->alterables->values.set(6, 0);
        }
    }
    event_1594_15_end: ;
}
void Frames::event_func_3471()
{
    // event 1595_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto event_1595_15_end;
        monitorcrate_409_instances.clear_selection();
        pick_objects_in_zone(monitorcrate_409_instances, 1097, 1359, 1401, 1641);
        if (once_condition_1595_15) goto event_1595_15_end;
        once_condition_1595_15 = true;
        for (ObjectIterator it(monitorcrate_409_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1595_15_end: ;
}
void Frames::event_func_3472()
{
    // event 1596_15
    bool or_result_1596_15 = false;
    bool or_temp_result_1596_15_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto or_event_1596_15_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1596_15_0_end;
        or_result_1596_15 = true;
        or_temp_result_1596_15_0 = true;
    }
    or_event_1596_15_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1596_15_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1596_15
    bool or_temp_result_1596_15_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto or_event_1596_15_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1596_15_1_end;
        or_result_1596_15 = true;
        or_temp_result_1596_15_1 = true;
    }
    or_event_1596_15_1_end: ;
    if (or_temp_result_1596_15_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1596_15
    bool or_temp_result_1596_15_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto or_event_1596_15_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1596_15_2_end;
        or_result_1596_15 = true;
        or_temp_result_1596_15_2 = true;
        or_event_1596_15_2_end: ;
        if (or_temp_result_1596_15_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1596_15) goto or_final_or_event_1596_15_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1596_15_0 || or_temp_result_1596_15_1 || or_temp_result_1596_15_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1596_15_2_end: ;
}
void Frames::event_func_3473()
{
    // event 1597_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto event_1597_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (0))) goto event_1597_15_end;
        if (!((levelcardfade2_24_instances.size()) == (0))) goto event_1597_15_end;
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
    event_1597_15_end: ;
}
void Frames::event_func_3474()
{
    // event 1598_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto event_1598_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (0))) goto event_1598_15_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 1272);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 1500);
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 4);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(5));
        }
        torqueshell_616_instances.clear_selection();
        for (ObjectIterator it(torqueshell_616_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(0);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(1342, 1554);
            pos_end_1598_15_0: ;
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->move_front();
            ((Active*)*it)->force_frame(72);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(1310, 1554);
            pos_end_1598_15_1: ;
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_frame(57);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_animation(40);
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(1224, 1554);
            pos_end_1598_15_2: ;
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
    }
    event_1598_15_end: ;
}
void Frames::event_func_3475()
{
    // event 1599_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto event_1599_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (71))) goto event_1599_15_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 1);
    }
    event_1599_15_end: ;
}
void Frames::event_func_3476()
{
    // event 1600_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto event_1600_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (72))) goto event_1600_15_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 0);
    }
    event_1600_15_end: ;
}
void Frames::event_func_3477()
{
    // event 1601_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto event_1601_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (0))) goto event_1601_15_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1601_15_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 71);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1601_15_end: ;
}
void Frames::event_func_3478()
{
    // event 1602_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto event_1602_15_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1602_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (70))) goto event_1602_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (72))) goto event_1602_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) != (71))) goto event_1602_15_end;
        media.stop_channel(20-1);
    }
    event_1602_15_end: ;
}
void Frames::event_func_3479()
{
    // event 1603_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto event_1603_15_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1603_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (70))) goto event_1603_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (72))) goto event_1603_15_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1603_15_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1603_15_end: ;
}
void Frames::event_func_3480()
{
    // event 1604_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto event_1604_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (46))) goto event_1604_15_end;
        if (!((media.get_channel_position(-1 +20)) > (1500))) goto event_1604_15_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 6);
    }
    event_1604_15_end: ;
}
void Frames::event_func_3481()
{
    // event 1605_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto event_1605_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (71))) goto event_1605_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) <= (72))) goto event_1605_15_end;
        if (!((media.get_channel_position(-1 +20)) > (4200))) goto event_1605_15_end;
        if (!((media.get_channel_position(-1 +20)) < (4750))) goto event_1605_15_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(1);
        }
    }
    event_1605_15_end: ;
}
void Frames::event_func_3482()
{
    // event 1606_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto event_1606_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (71))) goto event_1606_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) <= (72))) goto event_1606_15_end;
        if (!((media.get_channel_position(-1 +20)) >= (4750))) goto event_1606_15_end;
        if (!((media.get_channel_position(-1 +20)) < (7400))) goto event_1606_15_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 9);
    }
    event_1606_15_end: ;
}
void Frames::event_func_3483()
{
    // event 1607_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto event_1607_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (71))) goto event_1607_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) <= (72))) goto event_1607_15_end;
        if (!((media.get_channel_position(-1 +20)) >= (7400))) goto event_1607_15_end;
        if (!((media.get_channel_position(-1 +20)) < (8250))) goto event_1607_15_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(1);
        }
    }
    event_1607_15_end: ;
}
void Frames::event_func_3484()
{
    // event 1608_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto event_1608_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (71))) goto event_1608_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) <= (72))) goto event_1608_15_end;
        if (!((media.get_channel_position(-1 +20)) >= (8250))) goto event_1608_15_end;
        if (!((media.get_channel_position(-1 +20)) < (9550))) goto event_1608_15_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 12);
    }
    event_1608_15_end: ;
}
void Frames::event_func_3485()
{
    // event 1609_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto event_1609_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (71))) goto event_1609_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) <= (72))) goto event_1609_15_end;
        if (!((media.get_channel_position(-1 +20)) >= (9550))) goto event_1609_15_end;
        if (!((media.get_channel_position(-1 +20)) < (10250))) goto event_1609_15_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(1);
        }
    }
    event_1609_15_end: ;
}
void Frames::event_func_3486()
{
    // event 1610_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto event_1610_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (71))) goto event_1610_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) <= (72))) goto event_1610_15_end;
        if (!((media.get_channel_position(-1 +20)) >= (10250))) goto event_1610_15_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 12);
    }
    event_1610_15_end: ;
}
void Frames::event_func_3487()
{
    // event 1611_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto event_1611_15_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1611_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (72))) goto event_1611_15_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1611_15_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.play(str_data_voices_88+global_strings->get(11)+str_ca_ca_08_11_ogg_114, 19-1);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(3);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_1611_15_end: ;
}
void Frames::event_func_3488()
{
    // event 1612_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto event_1612_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (2))) goto event_1612_15_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
    }
    event_1612_15_end: ;
}
void Frames::event_func_3489()
{
    // event 1613_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto event_1613_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (2))) goto event_1613_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (10))) goto event_1613_15_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(9);
        }
    }
    event_1613_15_end: ;
}
void Frames::event_func_3490()
{
    // event 1614_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto event_1614_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (2))) goto event_1614_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (3))) goto event_1614_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(7)) < (40))) goto event_1614_15_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(3+(global_values->get(3)/math_helper/5)%math_helper%3);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(7, 1);
    }
    event_1614_15_end: ;
}
void Frames::event_func_3491()
{
    // event 1615_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto event_1615_15_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1615_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (73))) goto event_1615_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (77))) goto event_1615_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) != (74))) goto event_1615_15_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1615_15_end;
        media.stop_channel(20-1);
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1615_15_end: ;
}
void Frames::event_func_3492()
{
    // event 1616_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto event_1616_15_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1616_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (74))) goto event_1616_15_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1616_15_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
    }
    event_1616_15_end: ;
}
void Frames::event_func_3493()
{
    // event 1617_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto event_1617_15_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1617_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (73))) goto event_1617_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (77))) goto event_1617_15_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1617_15_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1617_15_end: ;
}
void Frames::event_func_3494()
{
    // event 1618_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto event_1618_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (74))) goto event_1618_15_end;
        if (once_condition_1618_15) goto event_1618_15_end;
        once_condition_1618_15 = true;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(3);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()+20);
    }
    event_1618_15_end: ;
}
void Frames::event_func_3495()
{
    // event 1619_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto event_1619_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (76))) goto event_1619_15_end;
        if (once_condition_1619_15) goto event_1619_15_end;
        once_condition_1619_15 = true;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()-20);
    }
    event_1619_15_end: ;
}
void Frames::event_func_3496()
{
    // event 1620_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto event_1620_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (76))) goto event_1620_15_end;
        if (!((media.get_channel_position(-1 +20)) > (1600))) goto event_1620_15_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 18);
    }
    event_1620_15_end: ;
}
void Frames::event_func_3497()
{
    // event 1621_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto event_1621_15_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1621_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (77))) goto event_1621_15_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1621_15_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
    }
    event_1621_15_end: ;
}
void Frames::event_func_3498()
{
    // event 1622_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto event_1622_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (4))) goto event_1622_15_end;
        if (once_condition_1622_15) goto event_1622_15_end;
        once_condition_1622_15 = true;
        ((Active*)get_instance(objecttent_480_instances))->alterables->flags.enable(2);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_fadein_music_112+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1622_15_end: ;
}
void Frames::event_func_3499()
{
    // event 1623_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto event_1623_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (4))) goto event_1623_15_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->restore_frame();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
    }
    event_1623_15_end: ;
}
void Frames::event_func_3500()
{
    // event 1624_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto event_1624_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (4))) goto event_1624_15_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_x()-30))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1624_15_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->restore_speed();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1624_15_end: ;
}
void Frames::event_func_3501()
{
    // event 1625_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto event_1625_15_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1625_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (78))) goto event_1625_15_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1625_15_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 2);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
    }
    event_1625_15_end: ;
}
void Frames::event_func_3502()
{
    // event 1626_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1)) goto event_1626_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (78))) goto event_1626_15_end;
        if (once_condition_1626_15) goto event_1626_15_end;
        once_condition_1626_15 = true;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(3);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()+20);
    }
    event_1626_15_end: ;
}
