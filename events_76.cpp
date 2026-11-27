#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_6229()
{
    // event 1695_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_local_transitions_1)) goto event_1695_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (1608))) goto event_1695_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (1864))) goto event_1695_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (1024-50))) goto event_1695_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) >= (0))) goto event_1695_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1695_28_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(2, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
    }
    event_1695_28_end: ;
}
void Frames::event_func_6230()
{
    // event 1696_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_local_transitions_1)) goto event_1696_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (1608))) goto event_1696_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (1864))) goto event_1696_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (1024-50))) goto event_1696_28_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) <= (0))) goto event_1696_28_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(13))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1696_28_end;
        global_values->set(4, -2);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, 920);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelcardfade_461_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade_461(0, 0), 6);
            levelcardfade_461_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
        }
        if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) {
            group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = true;
        }
            group_main_engine_level_specific_methods_local_transitions_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        enemyiris_1183_instances.clear_selection();
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(8, 0);
            ((Active*)*it)->get_movement()->set_speed(0);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(10));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(11));
        }
        media.stop_sample(SOUND_RUMBLEDEEP_110);
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    event_1696_28_end: ;
}
void Frames::event_func_6231()
{
    // event 1698_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1)) goto event_1698_28_end;
        basementlight_1269_instances.clear_selection();
        for (ObjectIterator it(basementlight_1269_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_max(frame_left(), get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23), frame_right())));
            ((Active*)*it)->set_y(get_max(frame_top(), get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24), frame_bottom())));
        }
            group_main_engine_level_specific_methods_rooms_crusher_room_1 = false;
    
        for (ObjectIterator it(basementlight_1269_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        lightstonetop_1571_instances.clear_selection();
        for (ObjectIterator it(lightstonetop_1571_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        lightstonetop2_1574_instances.clear_selection();
        for (ObjectIterator it(lightstonetop2_1574_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1698_28_end: ;
}
void Frames::event_func_6232()
{
    // event 1699_28
    bool or_result_1699_28 = false;
    bool or_temp_result_1699_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1)) goto or_event_1699_28_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) <= (840))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1699_28_0_end;
        or_result_1699_28 = true;
        or_temp_result_1699_28_0 = true;
    }
    or_event_1699_28_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1699_28_0) {
        playermovementvalues_245_instances.save_selection();
    }
    // event 1699_28
    bool or_temp_result_1699_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1)) goto or_event_1699_28_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) < (1096))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(23)) > (900))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1699_28_1_end;
        or_result_1699_28 = true;
        or_temp_result_1699_28_1 = true;
        or_event_1699_28_1_end: ;
        if (or_temp_result_1699_28_1) {
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_1699_28) goto or_final_or_event_1699_28_1_end;
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_1699_28_0 || or_temp_result_1699_28_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        mastercamera_430_instances.clear_selection();
        for (ObjectIterator it(mastercamera_430_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 2920);
            ((Active*)*it)->alterables->values.set(5, 1480);
        }
    }
    or_final_or_event_1699_28_1_end: ;
}
void Frames::event_func_6233()
{
    // event 1700_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1)) goto event_1700_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (840))) goto event_1700_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (1096))) goto event_1700_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) <= (900))) goto event_1700_28_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, 768);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, 1480);
    }
    event_1700_28_end: ;
}
void Frames::event_func_6234()
{
    // event 1701_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1)) goto event_1701_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) >= (1096))) goto event_1701_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (1608))) goto event_1701_28_end;
        if (!((minibossrailing_923_instances.size()) > (0))) goto event_1701_28_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, 896);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, 1480);
    }
    event_1701_28_end: ;
}
void Frames::event_func_6235()
{
    // event 1702_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1)) goto event_1702_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) >= (1096))) goto event_1702_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (1608))) goto event_1702_28_end;
        if (!((minibossrailing_923_instances.size()) == (0))) goto event_1702_28_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, 1280);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, 1480);
    }
    event_1702_28_end: ;
}
void Frames::event_func_6236()
{
    // event 1703_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1)) goto event_1703_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) >= (1096))) goto event_1703_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (1608))) goto event_1703_28_end;
        if (!group_main_engine_level_specific_methods_rooms_miniboss_room_1) {
            group_main_engine_level_specific_methods_rooms_miniboss_room_1 = true;
        }
    }
    event_1703_28_end: ;
}
void Frames::event_func_6237()
{
    // event 1704_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1)) goto event_1704_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (1608))) goto event_1704_28_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, 1280);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, 2888);
        if (!group_main_engine_level_specific_methods_rooms_crusher_room_1) {
            group_main_engine_level_specific_methods_rooms_crusher_room_1 = true;
        }
    }
    event_1704_28_end: ;
}
void Frames::event_func_6238()
{
    // event 1705_28
    bool or_result_1705_28 = false;
    bool or_temp_result_1705_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1 && group_main_engine_level_specific_methods_rooms_crusher_room_1)) goto or_event_1705_28_0_end;
        spikeceiling_1568_instances.clear_selection();
        for (ObjectIterator it(spikeceiling_1568_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!spikeceiling_1568_instances.has_selection()) goto or_event_1705_28_0_end;
        if (not_always_1705_28 > loop_count) {
            not_always_1705_28 = loop_count + 2;
            goto or_event_1705_28_0_end;
        }
        not_always_1705_28 = loop_count + 2;
        or_result_1705_28 = true;
        or_temp_result_1705_28_0 = true;
    }
    or_event_1705_28_0_end: ;
    spikeceiling_1568_instances.clear_saved_selection();
    if (or_temp_result_1705_28_0) {
        spikeceiling_1568_instances.save_selection();
    }
    // event 1705_28
    bool or_temp_result_1705_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1 && group_main_engine_level_specific_methods_rooms_crusher_room_1)) goto or_event_1705_28_1_end;
        spikeceiling_1568_instances.clear_selection();
        for (ObjectIterator it(spikeceiling_1568_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!spikeceiling_1568_instances.has_selection()) goto or_event_1705_28_1_end;
        if (not_always_1705_28 > loop_count) {
            not_always_1705_28 = loop_count + 2;
            goto or_event_1705_28_1_end;
        }
        not_always_1705_28 = loop_count + 2;
        or_result_1705_28 = true;
        or_temp_result_1705_28_1 = true;
        or_event_1705_28_1_end: ;
        if (or_temp_result_1705_28_1) {
            spikeceiling_1568_instances.save_selection();
        }
        if (!or_result_1705_28) goto or_final_or_event_1705_28_1_end;
        spikeceiling_1568_instances.empty_selection();
        if (or_temp_result_1705_28_0 || or_temp_result_1705_28_1) {
            spikeceiling_1568_instances.restore_selection();
        }
        media.stop_sample(SOUND_RUMBLEDEEP_110);
        media.play_id(SOUND_RUMBLEDEEP_110, -1, 0);
    }
    or_final_or_event_1705_28_1_end: ;
}
void Frames::event_func_6239()
{
    // event 1706_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1 && group_main_engine_level_specific_methods_rooms_crusher_room_1)) goto event_1706_28_end;
        ((Active*)get_instance(spikeceiling_1568_instances))->set_x(frame_left()-(frame_left()%math_helper%32));
        ((Active*)get_instance(spikeceiling_1568_instances))->move_front();
    }
    event_1706_28_end: ;
}
void Frames::event_func_6240()
{
    // event 1707_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1 && group_main_engine_level_specific_methods_rooms_crusher_room_1)) goto event_1707_28_end;
        if (!((((Active*)get_instance(spikeceiling_1568_instances))->alterables->values.get(0)) == (0))) goto event_1707_28_end;
        ((Active*)get_instance(spikeceiling_1568_instances))->set_y(((Active*)get_instance(spikeceiling_1568_instances))->get_y()+1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+2, 2));
    }
    event_1707_28_end: ;
}
void Frames::event_func_6241()
{
    // event 1708_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1 && group_main_engine_level_specific_methods_rooms_crusher_room_1)) goto event_1708_28_end;
        enemyfirespitter_1385_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (1000))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(spikeceiling_1568_instances))->get_box_index(3)+10))) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto event_1708_28_end;
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 100);
            ((Active*)*it)->alterables->values.set(24, 2);
        }
    }
    event_1708_28_end: ;
}
void Frames::event_func_6242()
{
    // event 1709_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1 && group_main_engine_level_specific_methods_rooms_crusher_room_1)) goto event_1709_28_end;
        if (!((((Active*)get_instance(spikeceiling_1568_instances))->alterables->values.get(0)) == (0))) goto event_1709_28_end;
        if (!((((Active*)get_instance(spikeceiling_1568_instances))->get_y()) >= (2752))) goto event_1709_28_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+4, 4));
        ((Active*)get_instance(spikeceiling_1568_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(spikeceiling_1568_instances))->alterables->values.set(2, ((Active*)get_instance(spikeceiling_1568_instances))->get_y());
        media.stop_sample(SOUND_RUMBLEDEEP_110);
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
        ((Active*)get_instance(lightstonebase_1569_instances))->alterables->flags.disable(1);
    }
    event_1709_28_end: ;
}
void Frames::event_func_6243()
{
    // event 1710_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1 && group_main_engine_level_specific_methods_rooms_crusher_room_1)) goto event_1710_28_end;
        if (!(((Active*)get_instance(switchwallplate_814_instances))->alterables->flags.is_on(0))) goto event_1710_28_end;
        if (!(((Active*)get_instance(lightstonebase_1569_instances))->alterables->flags.is_off(0))) goto event_1710_28_end;
        ((Active*)get_instance(lightstonebase_1569_instances))->alterables->flags.enable(0);
        ((Active*)get_instance(lightstonebase_1569_instances))->force_animation(7);
        media.play_id(SOUND_COMMON_LIGHTRAY_111, -1, 1);
        ((Active*)get_instance(lightstonebase_1569_instances))->set_layer(5-1);
        lightstonetop_1571_instances.clear_selection();
        for (ObjectIterator it(lightstonetop_1571_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(5-1);
        }
    }
    event_1710_28_end: ;
}
void Frames::event_func_6244()
{
    // event 1711_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1 && group_main_engine_level_specific_methods_rooms_crusher_room_1)) goto event_1711_28_end;
        if (!(((Active*)get_instance(lightstonebase_1569_instances))->test_animation(7))) goto event_1711_28_end;
        ((Active*)get_instance(lightstonebase_1569_instances))->alterables->values.add(0, 0.07);
        ((Active*)get_instance(lightstonebase_1569_instances))->set_direction(((Active*)get_instance(lightstonebase_1569_instances))->alterables->values.get(0));
    }
    event_1711_28_end: ;
}
void Frames::event_func_6245()
{
    // event 1712_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1 && group_main_engine_level_specific_methods_rooms_crusher_room_1)) goto event_1712_28_end;
        if (!(((Active*)get_instance(lightstonebase_1569_instances))->test_animation(7))) goto event_1712_28_end;
        if (!(((Active*)get_instance(switchwallplate_814_instances))->alterables->flags.is_off(0))) goto event_1712_28_end;
        ((Active*)get_instance(lightstonebase_1569_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(lightstonebase_1569_instances))->set_direction(0);
        ((Active*)get_instance(lightstonebase_1569_instances))->force_animation(0);
        media.stop_sample(SOUND_COMMON_LIGHTRAY_111);
        ((Active*)get_instance(lightstonebase_1569_instances))->alterables->flags.disable(0);
        ((Active*)get_instance(lightstonebase_1569_instances))->set_layer(3-1);
        ((Active*)get_instance(lightstonebase_1569_instances))->move_back();
        lightstonetop_1571_instances.clear_selection();
        for (ObjectIterator it(lightstonetop_1571_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(3-1);
            ((Active*)*it)->move_back();
        }
    }
    event_1712_28_end: ;
}
void Frames::event_func_6246()
{
    // event 1713_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1 && group_main_engine_level_specific_methods_rooms_crusher_room_1)) goto event_1713_28_end;
        if (!(((Active*)get_instance(lightstonebase_1569_instances))->test_animation(7))) goto event_1713_28_end;
        if (!((((Active*)get_instance(lightstonebase_1569_instances))->alterables->values.get(0)) >= (8))) goto event_1713_28_end;
        ((Active*)get_instance(lightstonebase_1569_instances))->force_animation(0);
        lightstonetop_1571_instances.clear_selection();
        for (ObjectIterator it(lightstonetop_1571_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
        ((Active*)get_instance(lightstonebase_1569_instances))->alterables->flags.enable(1);
        media.play_id(SOUND_COMMON_REWARD_2_40, -1, 1);
        ((Active*)get_instance(lightstonebase_1569_instances))->set_layer(3-1);
        ((Active*)get_instance(lightstonebase_1569_instances))->move_back();
        for (ObjectIterator it(lightstonetop_1571_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(3-1);
            ((Active*)*it)->move_back();
        }
    }
    event_1713_28_end: ;
}
void Frames::event_func_6247()
{
    // event 1714_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1 && group_main_engine_level_specific_methods_rooms_crusher_room_1)) goto event_1714_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (1608))) goto event_1714_28_end;
        if (!(((Active*)get_instance(lightstonebase_1569_instances))->alterables->flags.is_on(1))) goto event_1714_28_end;
        basementlight_1269_instances.clear_selection();
        for (ObjectIterator it(basementlight_1269_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1714_28_end: ;
}
void Frames::event_func_6248()
{
    // event 1715_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1 && group_main_engine_level_specific_methods_rooms_crusher_room_1)) goto event_1715_28_end;
        if (!((((Active*)get_instance(spikeceiling_1568_instances))->alterables->values.get(0)) == (1))) goto event_1715_28_end;
        if (!(((Active*)get_instance(lightstonebase_1569_instances))->alterables->flags.is_on(1))) goto event_1715_28_end;
        ((Active*)get_instance(spikeceiling_1568_instances))->alterables->values.add(0, 1);
    }
    event_1715_28_end: ;
}
void Frames::event_func_6249()
{
    // event 1716_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1 && group_main_engine_level_specific_methods_rooms_crusher_room_1)) goto event_1716_28_end;
        if (!((((Active*)get_instance(spikeceiling_1568_instances))->alterables->values.get(0)) == (2))) goto event_1716_28_end;
        ((Active*)get_instance(spikeceiling_1568_instances))->alterables->values.add(1, 0.1);
        ((Active*)get_instance(spikeceiling_1568_instances))->set_direction(((Active*)get_instance(spikeceiling_1568_instances))->alterables->values.get(1));
    }
    event_1716_28_end: ;
}
void Frames::event_func_6250()
{
    // event 1717_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1 && group_main_engine_level_specific_methods_rooms_crusher_room_1)) goto event_1717_28_end;
        if (!((((Active*)get_instance(spikeceiling_1568_instances))->alterables->values.get(0)) == (2))) goto event_1717_28_end;
        if (!((((Active*)get_instance(spikeceiling_1568_instances))->alterables->values.get(1)) >= (5))) goto event_1717_28_end;
        ((Active*)get_instance(spikeceiling_1568_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(spikeceiling_1568_instances))->alterables->values.set(3, 0.25);
    }
    event_1717_28_end: ;
}
void Frames::event_func_6251()
{
    // event 1718_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1 && group_main_engine_level_specific_methods_rooms_crusher_room_1)) goto event_1718_28_end;
        if (!((((Active*)get_instance(spikeceiling_1568_instances))->alterables->values.get(0)) == (3))) goto event_1718_28_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+2, 2));
        ((Active*)get_instance(spikeceiling_1568_instances))->set_y(((Active*)get_instance(spikeceiling_1568_instances))->alterables->values.get(2));
        ((Active*)get_instance(spikeceiling_1568_instances))->alterables->values.set(3, get_min(((Active*)get_instance(spikeceiling_1568_instances))->alterables->values.get(3)+0.004, 1));
        ((Active*)get_instance(spikeceiling_1568_instances))->alterables->values.sub(2, ((Active*)get_instance(spikeceiling_1568_instances))->alterables->values.get(3));
    }
    event_1718_28_end: ;
}
void Frames::event_func_6252()
{
    // event 1719_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1 && group_main_engine_level_specific_methods_rooms_crusher_room_1)) goto event_1719_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1719_28_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) == (0))) goto event_1719_28_end;
        playersensorbottombig_397_instances.clear_selection();
        spikeceiling_1568_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, spikeceiling_1568_instances)) goto event_1719_28_end;
        if (!((((Active*)get_instance(spikeceiling_1568_instances))->alterables->values.get(0)) >= (3))) goto event_1719_28_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)/math_helper/2));
    }
    event_1719_28_end: ;
}
void Frames::event_func_6253()
{
    // event 1720_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1 && group_main_engine_level_specific_methods_rooms_crusher_room_1)) goto event_1720_28_end;
        if (!((((Active*)get_instance(spikeceiling_1568_instances))->alterables->values.get(0)) == (3))) goto event_1720_28_end;
        playersensorbottombig_397_instances.clear_selection();
        spikeceiling_1568_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, spikeceiling_1568_instances)) goto event_1720_28_end;
        if (!((((Active*)get_instance(playersensortopbig_395_instances))->alterables->values.get(25)) == (1))) goto event_1720_28_end;
        ((Counter*)get_instance(guirings_122_instances))->set(0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 0);
    }
    event_1720_28_end: ;
}
void Frames::event_func_6254()
{
    // event 1721_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1 && group_main_engine_level_specific_methods_rooms_crusher_room_1)) goto event_1721_28_end;
        if (!((((Active*)get_instance(spikeceiling_1568_instances))->alterables->values.get(0)) == (3))) goto event_1721_28_end;
        player_389_instances.clear_selection();
        levelcrushdeath_1607_instances.clear_selection();
        if (!check_overlap(player_389_instances, levelcrushdeath_1607_instances)) goto event_1721_28_end;
        ((Counter*)get_instance(guirings_122_instances))->set(0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 9);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 0);
    }
    event_1721_28_end: ;
}
void Frames::event_func_6255()
{
    // event 1722_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1 && group_main_engine_level_specific_methods_rooms_crusher_room_1)) goto event_1722_28_end;
        if (!((((Active*)get_instance(spikeceiling_1568_instances))->alterables->values.get(0)) == (3))) goto event_1722_28_end;
        if (!((((Active*)get_instance(spikeceiling_1568_instances))->get_y()) <= (1872))) goto event_1722_28_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+4, 4));
        ((Active*)get_instance(spikeceiling_1568_instances))->alterables->values.add(0, 1);
        media.stop_sample(SOUND_RUMBLEDEEP_110);
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
    }
    event_1722_28_end: ;
}
void Frames::event_func_6256()
{
    // event 1723_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1 && group_main_engine_level_specific_methods_rooms_miniboss_room_1)) goto event_1723_28_end;
        if (!(((Active*)get_instance(switchwallplate2_1421_instances))->alterables->flags.is_on(0))) goto event_1723_28_end;
        if (!(((Active*)get_instance(lightstonebase2_1570_instances))->alterables->flags.is_off(0))) goto event_1723_28_end;
        media.play_id(SOUND_COMMON_LIGHTRAY_111, -1, 1);
        ((Active*)get_instance(lightstonebase2_1570_instances))->alterables->flags.enable(0);
        ((Active*)get_instance(lightstonebase2_1570_instances))->force_animation(7);
        ((Active*)get_instance(lightstonebase2_1570_instances))->set_layer(5-1);
        lightstonetop2_1574_instances.clear_selection();
        for (ObjectIterator it(lightstonetop2_1574_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(5-1);
        }
    }
    event_1723_28_end: ;
}
void Frames::event_func_6257()
{
    // event 1724_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1 && group_main_engine_level_specific_methods_rooms_miniboss_room_1)) goto event_1724_28_end;
        if (!(((Active*)get_instance(lightstonebase2_1570_instances))->test_animation(7))) goto event_1724_28_end;
        ((Active*)get_instance(lightstonebase2_1570_instances))->alterables->values.add(0, 0.07);
        ((Active*)get_instance(lightstonebase2_1570_instances))->set_direction(((Active*)get_instance(lightstonebase2_1570_instances))->alterables->values.get(0));
    }
    event_1724_28_end: ;
}
void Frames::event_func_6258()
{
    // event 1725_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1 && group_main_engine_level_specific_methods_rooms_miniboss_room_1)) goto event_1725_28_end;
        if (!(((Active*)get_instance(lightstonebase2_1570_instances))->test_animation(7))) goto event_1725_28_end;
        if (!(((Active*)get_instance(switchwallplate2_1421_instances))->alterables->flags.is_off(0))) goto event_1725_28_end;
        media.stop_sample(SOUND_COMMON_LIGHTRAY_111);
        ((Active*)get_instance(lightstonebase2_1570_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(lightstonebase2_1570_instances))->set_direction(0);
        ((Active*)get_instance(lightstonebase2_1570_instances))->force_animation(0);
        ((Active*)get_instance(lightstonebase2_1570_instances))->alterables->flags.disable(0);
        ((Active*)get_instance(lightstonebase2_1570_instances))->set_layer(3-1);
        ((Active*)get_instance(lightstonebase2_1570_instances))->move_back();
        lightstonetop2_1574_instances.clear_selection();
        for (ObjectIterator it(lightstonetop2_1574_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(3-1);
            ((Active*)*it)->move_back();
        }
    }
    event_1725_28_end: ;
}
void Frames::event_func_6259()
{
    // event 1726_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1 && group_main_engine_level_specific_methods_rooms_miniboss_room_1)) goto event_1726_28_end;
        if (!(((Active*)get_instance(lightstonebase2_1570_instances))->test_animation(7))) goto event_1726_28_end;
        if (!((((Active*)get_instance(lightstonebase2_1570_instances))->alterables->values.get(0)) >= (8))) goto event_1726_28_end;
        media.play_id(SOUND_COMMON_REWARD_2_40, -1, 1);
        ((Active*)get_instance(lightstonebase2_1570_instances))->force_animation(0);
        ((Active*)get_instance(lightstonebase2_1570_instances))->alterables->flags.enable(1);
        lightstonetop2_1574_instances.clear_selection();
        for (ObjectIterator it(lightstonetop2_1574_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->set_layer(3-1);
            ((Active*)*it)->move_back();
        }
        ((Active*)get_instance(lightstonebase2_1570_instances))->set_layer(3-1);
        ((Active*)get_instance(lightstonebase2_1570_instances))->move_back();
    }
    event_1726_28_end: ;
}
void Frames::event_func_6260()
{
    // event 1727_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1 && group_main_engine_level_specific_methods_rooms_miniboss_room_1)) goto event_1727_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) >= (1096))) goto event_1727_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (1608))) goto event_1727_28_end;
        if (!(((Active*)get_instance(lightstonebase2_1570_instances))->alterables->flags.is_on(1))) goto event_1727_28_end;
        basementlight_1269_instances.clear_selection();
        for (ObjectIterator it(basementlight_1269_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1727_28_end: ;
}
void Frames::event_func_6261()
{
    // event 1728_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1)) goto event_1728_28_end;
        if (!(((Active*)get_instance(lightstonebase_1569_instances))->alterables->flags.is_on(1))) goto event_1728_28_end;
        ((Active*)get_instance(lightstonedoor1_1585_instances))->set_y(680);
    }
    event_1728_28_end: ;
}
void Frames::event_func_6262()
{
    // event 1729_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1)) goto event_1729_28_end;
        if (!(((Active*)get_instance(lightstonebase2_1570_instances))->alterables->flags.is_on(1))) goto event_1729_28_end;
        ((Active*)get_instance(lightstonedoor2_1586_instances))->set_y(680);
    }
    event_1729_28_end: ;
}
void Frames::event_func_6263()
{
    // event 1730_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_rooms_1)) goto event_1730_28_end;
        if (!(((Active*)get_instance(lightstonebase_1569_instances))->alterables->flags.is_on(1))) goto event_1730_28_end;
        if (!(((Active*)get_instance(lightstonebase2_1570_instances))->alterables->flags.is_on(1))) goto event_1730_28_end;
        basementlight_1269_instances.clear_selection();
        for (ObjectIterator it(basementlight_1269_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1730_28_end: ;
}
void Frames::event_func_6264()
{
    // event 1732_28
    bool or_result_1732_28 = false;
    bool or_temp_result_1732_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto or_event_1732_28_0_end;
        player_389_instances.clear_selection();
        for (ObjectIterator it(player_389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (1096))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (1608))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (2000))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(minibossbonegolem_1576_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!player_389_instances.has_selection()) goto or_event_1732_28_0_end;
        if (!((minibossrailing_923_instances.size()) > (0))) goto or_event_1732_28_0_end;
        minibossbonegolem_1576_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolem_1576_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!minibossbonegolem_1576_instances.has_selection()) goto or_event_1732_28_0_end;
        or_result_1732_28 = true;
        or_temp_result_1732_28_0 = true;
    }
    or_event_1732_28_0_end: ;
    player_389_instances.clear_saved_selection();
    minibossbonegolem_1576_instances.clear_saved_selection();
    if (or_temp_result_1732_28_0) {
        player_389_instances.save_selection();
        minibossbonegolem_1576_instances.save_selection();
    }
    // event 1732_28
    bool or_temp_result_1732_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto or_event_1732_28_1_end;
        minibossbonegolem_1576_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolem_1576_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!minibossbonegolem_1576_instances.has_selection()) goto or_event_1732_28_1_end;
        or_result_1732_28 = true;
        or_temp_result_1732_28_1 = true;
        or_event_1732_28_1_end: ;
        if (or_temp_result_1732_28_1) {
            minibossbonegolem_1576_instances.save_selection();
        }
        if (!or_result_1732_28) goto or_final_or_event_1732_28_1_end;
        player_389_instances.empty_selection();
        minibossbonegolem_1576_instances.empty_selection();
        if (or_temp_result_1732_28_0) {
            player_389_instances.restore_selection();
        }
        if (or_temp_result_1732_28_0 || or_temp_result_1732_28_1) {
            minibossbonegolem_1576_instances.restore_selection();
        }
        if (!group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_appear_1) {
            group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_appear_1 = true;
        }
        qualifier_28.clear_selection();
        for (QualifierIterator it(qualifier_28); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(17, randrange(5));
        }
        gimmickmovingpillar1_1407_instances.clear_selection();
        for (ObjectIterator it(gimmickmovingpillar1_1407_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-88);
        }
        gimmickmovingpillar3_1409_instances.clear_selection();
        for (ObjectIterator it(gimmickmovingpillar3_1409_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-88);
        }
        for (ObjectIterator it(minibossbonegolem_1576_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(11);
        }
        media.play_id(SOUND_ITEM_SHIELDEARTH_2_57, -1, 1);
    }
    or_final_or_event_1732_28_1_end: ;
}
void Frames::event_func_6265()
{
    // event 1733_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1733_28_end;
        minibossbonegolem_1576_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolem_1576_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolem_1576_instances.has_selection()) goto event_1733_28_end;
        minibossbonegolempiece_1577_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece_1577_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
        minibossbonegolempiece6_1578_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece6_1578_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
        minibossbonegolemneck1_1580_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck1_1580_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
        minibossbonegolemneck2_1581_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck2_1581_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
        minibossbonegolemneck3_1582_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck3_1582_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
        minibossbonegolemneck4_1583_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck4_1583_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
        minibossbonegolemhead_1584_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
    }
    event_1733_28_end: ;
}
void Frames::event_func_6266()
{
    // event 1734_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1734_28_end;
        minibossbonegolem_1576_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolem_1576_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
        }
        if (!minibossbonegolem_1576_instances.has_selection()) goto event_1734_28_end;
        minibossbonegolempiece_1577_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece_1577_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
        minibossbonegolempiece6_1578_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece6_1578_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
        minibossbonegolemneck1_1580_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck1_1580_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
        minibossbonegolemneck2_1581_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck2_1581_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
        minibossbonegolemneck3_1582_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck3_1582_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
        minibossbonegolemneck4_1583_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck4_1583_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
        minibossbonegolemhead_1584_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
    }
    event_1734_28_end: ;
}
void Frames::event_func_6267()
{
    // event 1735_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_appear_1)) goto event_1735_28_end;
        qualifier_28.clear_selection();
        for (QualifierIterator it(qualifier_28); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!qualifier_28.has_selection()) goto event_1735_28_end;
        for (QualifierIterator it(qualifier_28); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(17, 1+randrange(3));
        }
    }
    event_1735_28_end: ;
}
void Frames::event_func_6268()
{
    // event 1736_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_appear_1)) goto event_1736_28_end;
        qualifier_28.clear_selection();
        for (QualifierIterator it(qualifier_28); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) > (5))) { it.deselect(); continue; }
        }
        if (!qualifier_28.has_selection()) goto event_1736_28_end;
        for (QualifierIterator it(qualifier_28); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+(((Active*)*it)->alterables->flags.get(2)*2)-1);
            ((Active*)*it)->alterables->flags.toggle(2);
            ((Active*)*it)->alterables->values.set(17, 0);
        }
    }
    event_1736_28_end: ;
}
void Frames::event_func_6269()
{
    // event 1737_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_appear_1)) goto event_1737_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (30))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1737_28_end;
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_1737_28_end: ;
}
void Frames::event_func_6270()
{
    // event 1738_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_appear_1)) goto event_1738_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (30))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1738_28_end;
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_max(((Active*)*it)->get_y()-2, ((Active*)get_instance(minibossbonegolem_1576_instances, it.current_index, default_active_instance))->get_y()-12));
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    event_1738_28_end: ;
}
void Frames::event_func_6271()
{
    // event 1739_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_appear_1)) goto event_1739_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) <= (((Active*)get_instance(minibossbonegolem_1576_instances, default_active_instance))->get_y()-12))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1739_28_end;
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1739_28_end: ;
}
void Frames::event_func_6272()
{
    // event 1740_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_appear_1)) goto event_1740_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (31))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1740_28_end;
        minibossbonegolempiece3_1575_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece3_1575_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece3_1575_instances.has_selection()) goto event_1740_28_end;
        for (ObjectIterator it(minibossbonegolempiece3_1575_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_min(((Active*)*it)->get_x()+10, ((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->get_x()));
            ((Active*)*it)->set_y(get_max(((Active*)*it)->get_y()-6, ((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->get_y()+3));
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    event_1740_28_end: ;
}
void Frames::event_func_6273()
{
    // event 1741_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_appear_1)) goto event_1741_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (31))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1741_28_end;
        minibossbonegolempiece3_1575_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece3_1575_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_single(minibossbonegolempiece5_1579_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) <= (((Active*)get_single(minibossbonegolempiece5_1579_instances, default_active_instance))->get_y()+3))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece3_1575_instances.has_selection()) goto event_1741_28_end;
        for (ObjectIterator it(minibossbonegolempiece3_1575_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -45+sin_deg(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(1))*20*(((Active*)*it)->alterables->values.get(1)*2-1));
        }
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
        for (ObjectIterator it(minibossbonegolempiece3_1575_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)+45, 0);
        }
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
    }
    event_1741_28_end: ;
}
void Frames::event_func_6274()
{
    // event 1742_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_appear_1)) goto event_1742_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (32))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1742_28_end;
        minibossbonegolempiece_1577_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece_1577_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece_1577_instances.has_selection()) goto event_1742_28_end;
        for (ObjectIterator it(minibossbonegolempiece_1577_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_min(((Active*)*it)->get_x()+10, ((Active*)get_instance(minibossbonegolempiece3_1575_instances, it.current_index, default_active_instance))->get_action_x()));
            ((Active*)*it)->set_y(get_max(((Active*)*it)->get_y()-4, ((Active*)get_instance(minibossbonegolempiece3_1575_instances, it.current_index, default_active_instance))->get_action_y()));
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    event_1742_28_end: ;
}
void Frames::event_func_6275()
{
    // event 1743_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_appear_1)) goto event_1743_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (32))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1743_28_end;
        minibossbonegolempiece_1577_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece_1577_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(minibossbonegolempiece3_1575_instances, default_active_instance))->get_action_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) <= (((Active*)get_instance(minibossbonegolempiece3_1575_instances, default_active_instance))->get_action_y()))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece_1577_instances.has_selection()) goto event_1743_28_end;
        for (ObjectIterator it(minibossbonegolempiece_1577_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -20+45+cos_deg(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(1))*30*(((Active*)*it)->alterables->values.get(1)*2-1));
        }
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
        for (ObjectIterator it(minibossbonegolempiece_1577_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)-45, 0);
        }
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
    }
    event_1743_28_end: ;
}
void Frames::event_func_6276()
{
    // event 1744_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_appear_1)) goto event_1744_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (33))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1744_28_end;
        minibossbonegolempiece6_1578_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece6_1578_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece6_1578_instances.has_selection()) goto event_1744_28_end;
        for (ObjectIterator it(minibossbonegolempiece6_1578_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_min(((Active*)*it)->get_x()+10, ((Active*)get_instance(minibossbonegolempiece_1577_instances, it.current_index, default_active_instance))->get_action_x()));
            ((Active*)*it)->set_y(get_max(((Active*)*it)->get_y()-2, ((Active*)get_instance(minibossbonegolempiece_1577_instances, it.current_index, default_active_instance))->get_action_y()));
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    event_1744_28_end: ;
}
void Frames::event_func_6277()
{
    // event 1745_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_appear_1)) goto event_1745_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (33))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1745_28_end;
        minibossbonegolempiece6_1578_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece6_1578_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(minibossbonegolempiece_1577_instances, default_active_instance))->get_action_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) <= (((Active*)get_instance(minibossbonegolempiece_1577_instances, default_active_instance))->get_action_y()))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece6_1578_instances.has_selection()) goto event_1745_28_end;
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
    }
    event_1745_28_end: ;
}
void Frames::event_func_6278()
{
    // event 1746_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_appear_1)) goto event_1746_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (34))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1746_28_end;
        minibossbonegolempiece3_1575_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece3_1575_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece3_1575_instances.has_selection()) goto event_1746_28_end;
        for (ObjectIterator it(minibossbonegolempiece3_1575_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_max(((Active*)*it)->get_x()-8, ((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->get_x()+24));
            ((Active*)*it)->set_y(get_max(((Active*)*it)->get_y()-5, ((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->get_y()+3));
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    event_1746_28_end: ;
}
void Frames::event_func_6279()
{
    // event 1747_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_appear_1)) goto event_1747_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (34))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1747_28_end;
        minibossbonegolempiece3_1575_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece3_1575_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_single(minibossbonegolempiece5_1579_instances, default_active_instance))->get_x()+24))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) <= (((Active*)get_single(minibossbonegolempiece5_1579_instances, default_active_instance))->get_y()+3))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece3_1575_instances.has_selection()) goto event_1747_28_end;
        for (ObjectIterator it(minibossbonegolempiece3_1575_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -45+sin_deg(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(1))*20*(((Active*)*it)->alterables->values.get(1)*2-1));
        }
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
        for (ObjectIterator it(minibossbonegolempiece3_1575_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)+45, 0);
        }
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
    }
    event_1747_28_end: ;
}
void Frames::event_func_6280()
{
    // event 1748_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_appear_1)) goto event_1748_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (35))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1748_28_end;
        minibossbonegolempiece_1577_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece_1577_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece_1577_instances.has_selection()) goto event_1748_28_end;
        minibossbonegolempiece3_1575_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece3_1575_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece3_1575_instances.has_selection()) goto event_1748_28_end;
        for (ObjectIterator it(minibossbonegolempiece_1577_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_min(((Active*)*it)->get_x()+10, ((Active*)get_single(minibossbonegolempiece3_1575_instances, it.current_index, default_active_instance))->get_action_x()));
            ((Active*)*it)->set_y(get_max(((Active*)*it)->get_y()-4, ((Active*)get_single(minibossbonegolempiece3_1575_instances, it.current_index, default_active_instance))->get_action_y()));
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    event_1748_28_end: ;
}
void Frames::event_func_6281()
{
    // event 1749_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_appear_1)) goto event_1749_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (35))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1749_28_end;
        minibossbonegolempiece_1577_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece_1577_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece_1577_instances.has_selection()) goto event_1749_28_end;
        minibossbonegolempiece3_1575_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece3_1575_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece3_1575_instances.has_selection()) goto event_1749_28_end;
        for (ObjectIterator it(minibossbonegolempiece_1577_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_single(minibossbonegolempiece3_1575_instances, default_active_instance))->get_action_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) <= (((Active*)get_single(minibossbonegolempiece3_1575_instances, default_active_instance))->get_action_y()))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece_1577_instances.has_selection()) goto event_1749_28_end;
        for (ObjectIterator it(minibossbonegolempiece_1577_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -20+45+cos_deg(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(1))*30*(((Active*)*it)->alterables->values.get(1)*2-1));
        }
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
        for (ObjectIterator it(minibossbonegolempiece_1577_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)-45, 0);
        }
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
    }
    event_1749_28_end: ;
}
void Frames::event_func_6282()
{
    // event 1750_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_appear_1)) goto event_1750_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (36))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1750_28_end;
        minibossbonegolempiece6_1578_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece6_1578_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece6_1578_instances.has_selection()) goto event_1750_28_end;
        minibossbonegolempiece_1577_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece_1577_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece_1577_instances.has_selection()) goto event_1750_28_end;
        for (ObjectIterator it(minibossbonegolempiece6_1578_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_max(((Active*)*it)->get_x()-10, ((Active*)get_single(minibossbonegolempiece_1577_instances, it.current_index, default_active_instance))->get_action_x()));
            ((Active*)*it)->set_y(get_max(((Active*)*it)->get_y()-2, ((Active*)get_single(minibossbonegolempiece_1577_instances, it.current_index, default_active_instance))->get_action_y()));
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    event_1750_28_end: ;
}
void Frames::event_func_6283()
{
    // event 1751_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_appear_1)) goto event_1751_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (36))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1751_28_end;
        minibossbonegolempiece6_1578_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece6_1578_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece6_1578_instances.has_selection()) goto event_1751_28_end;
        minibossbonegolempiece_1577_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece_1577_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece_1577_instances.has_selection()) goto event_1751_28_end;
        for (ObjectIterator it(minibossbonegolempiece6_1578_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_single(minibossbonegolempiece_1577_instances, default_active_instance))->get_action_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) <= (((Active*)get_single(minibossbonegolempiece_1577_instances, default_active_instance))->get_action_y()))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece6_1578_instances.has_selection()) goto event_1751_28_end;
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
    }
    event_1751_28_end: ;
}
void Frames::event_func_6284()
{
    // event 1752_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_appear_1)) goto event_1752_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (37))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1752_28_end;
        minibossbonegolemneck1_1580_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck1_1580_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_max(((Active*)*it)->get_x()-8, ((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->get_action_x()));
            ((Active*)*it)->set_y(get_max(((Active*)*it)->get_y()-8, ((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->get_action_y()));
        }
    }
    event_1752_28_end: ;
}
void Frames::event_func_6285()
{
    // event 1753_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_appear_1)) goto event_1753_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (37))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1753_28_end;
        minibossbonegolemneck1_1580_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck1_1580_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_single(minibossbonegolempiece5_1579_instances, default_active_instance))->get_action_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) <= (((Active*)get_single(minibossbonegolempiece5_1579_instances, default_active_instance))->get_action_y()))) { it.deselect(); continue; }
        }
        if (!minibossbonegolemneck1_1580_instances.has_selection()) goto event_1753_28_end;
        for (ObjectIterator it(minibossbonegolemneck1_1580_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 30-90+sin_deg(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(1))*10*(((Active*)get_instance(minibossbonegolempiece3_1575_instances, it.current_index, default_active_instance))->alterables->values.get(1)*2-1));
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)+90, 0);
        }
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
        for (ObjectIterator it(minibossbonegolemneck1_1580_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
    }
    event_1753_28_end: ;
}
void Frames::event_func_6286()
{
    // event 1754_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_appear_1)) goto event_1754_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (38))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1754_28_end;
        minibossbonegolemneck2_1581_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck2_1581_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_max(((Active*)*it)->get_x()-8, ((Active*)get_instance(minibossbonegolemneck1_1580_instances, it.current_index, default_active_instance))->get_action_x()));
            ((Active*)*it)->set_y(get_max(((Active*)*it)->get_y()-8, ((Active*)get_instance(minibossbonegolemneck1_1580_instances, it.current_index, default_active_instance))->get_action_y()));
        }
    }
    event_1754_28_end: ;
}
void Frames::event_func_6287()
{
    // event 1755_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_appear_1)) goto event_1755_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (38))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1755_28_end;
        minibossbonegolemneck2_1581_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck2_1581_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(minibossbonegolemneck1_1580_instances, default_active_instance))->get_action_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) <= (((Active*)get_instance(minibossbonegolemneck1_1580_instances, default_active_instance))->get_action_y()))) { it.deselect(); continue; }
        }
        if (!minibossbonegolemneck2_1581_instances.has_selection()) goto event_1755_28_end;
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
        for (ObjectIterator it(minibossbonegolemneck2_1581_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 60-90+sin_deg(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(1)-20)*10*(((Active*)get_instance(minibossbonegolempiece3_1575_instances, it.current_index, default_active_instance))->alterables->values.get(1)*2-1));
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)+90, 0);
            ((Active*)*it)->alterables->flags.enable(3);
        }
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
    }
    event_1755_28_end: ;
}
void Frames::event_func_6288()
{
    // event 1756_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_appear_1)) goto event_1756_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (39))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1756_28_end;
        minibossbonegolemneck3_1582_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck3_1582_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_max(((Active*)*it)->get_x()-9, ((Active*)get_instance(minibossbonegolemneck2_1581_instances, it.current_index, default_active_instance))->get_action_x()));
            ((Active*)*it)->set_y(get_max(((Active*)*it)->get_y()-9, ((Active*)get_instance(minibossbonegolemneck2_1581_instances, it.current_index, default_active_instance))->get_action_y()));
        }
    }
    event_1756_28_end: ;
}
void Frames::event_func_6289()
{
    // event 1757_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_appear_1)) goto event_1757_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (39))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1757_28_end;
        minibossbonegolemneck3_1582_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck3_1582_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(minibossbonegolemneck2_1581_instances, default_active_instance))->get_action_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) <= (((Active*)get_instance(minibossbonegolemneck2_1581_instances, default_active_instance))->get_action_y()))) { it.deselect(); continue; }
        }
        if (!minibossbonegolemneck3_1582_instances.has_selection()) goto event_1757_28_end;
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
        for (ObjectIterator it(minibossbonegolemneck3_1582_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 100-90+sin_deg(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(1)-40)*10*(((Active*)get_instance(minibossbonegolempiece3_1575_instances, it.current_index, default_active_instance))->alterables->values.get(1)*2-1));
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)+90, 0);
            ((Active*)*it)->alterables->flags.enable(3);
        }
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
    }
    event_1757_28_end: ;
}
void Frames::event_func_6290()
{
    // event 1758_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_appear_1)) goto event_1758_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (40))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1758_28_end;
        minibossbonegolemneck4_1583_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck4_1583_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_max(((Active*)*it)->get_x()-10, ((Active*)get_instance(minibossbonegolemneck3_1582_instances, it.current_index, default_active_instance))->get_action_x()));
            ((Active*)*it)->set_y(get_max(((Active*)*it)->get_y()-10, ((Active*)get_instance(minibossbonegolemneck3_1582_instances, it.current_index, default_active_instance))->get_action_y()));
        }
    }
    event_1758_28_end: ;
}
void Frames::event_func_6291()
{
    // event 1759_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_appear_1)) goto event_1759_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (40))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1759_28_end;
        minibossbonegolemneck4_1583_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck4_1583_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(minibossbonegolemneck3_1582_instances, default_active_instance))->get_action_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) <= (((Active*)get_instance(minibossbonegolemneck3_1582_instances, default_active_instance))->get_action_y()))) { it.deselect(); continue; }
        }
        if (!minibossbonegolemneck4_1583_instances.has_selection()) goto event_1759_28_end;
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
        for (ObjectIterator it(minibossbonegolemneck4_1583_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 80-90+sin_deg(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(1)-60)*10*(((Active*)get_instance(minibossbonegolempiece3_1575_instances, it.current_index, default_active_instance))->alterables->values.get(1)*2-1));
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)+90, 0);
            ((Active*)*it)->alterables->flags.enable(3);
        }
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
    }
    event_1759_28_end: ;
}
void Frames::event_func_6292()
{
    // event 1760_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_appear_1)) goto event_1760_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (41))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1760_28_end;
        minibossbonegolemhead_1584_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_max(((Active*)*it)->get_x()-10, ((Active*)get_instance(minibossbonegolemneck4_1583_instances, it.current_index, default_active_instance))->get_action_x()));
            ((Active*)*it)->set_y(get_max(((Active*)*it)->get_y()-10, ((Active*)get_instance(minibossbonegolemneck4_1583_instances, it.current_index, default_active_instance))->get_action_y()));
        }
    }
    event_1760_28_end: ;
}
void Frames::event_func_6293()
{
    // event 1761_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_appear_1)) goto event_1761_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (41))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1761_28_end;
        minibossbonegolemhead_1584_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(minibossbonegolemneck4_1583_instances, default_active_instance))->get_action_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) <= (((Active*)get_instance(minibossbonegolemneck4_1583_instances, default_active_instance))->get_action_y()))) { it.deselect(); continue; }
        }
        if (!minibossbonegolemhead_1584_instances.has_selection()) goto event_1761_28_end;
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
    }
    event_1761_28_end: ;
}
void Frames::event_func_6294()
{
    // event 1762_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_appear_1)) goto event_1762_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (42))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1762_28_end;
            group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_appear_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1) {
            group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1 = true;
        }
        minibossbonegolem_1576_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolem_1576_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(5);
        }
    }
    event_1762_28_end: ;
}
void Frames::event_func_6295()
{
    // event 1763_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1)) goto event_1763_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1763_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1763_28_end;
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1763_28_end: ;
}
void Frames::event_func_6296()
{
    // event 1764_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1)) goto event_1764_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1764_28_end;
        minibossbonegolem_1576_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolem_1576_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolem_1576_instances.has_selection()) goto event_1764_28_end;
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 8);
            ((Active*)*it)->alterables->values.set(0, 1);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+3);
        }
    }
    event_1764_28_end: ;
}
void Frames::event_func_6297()
{
    // event 1765_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1)) goto event_1765_28_end;
        playersensorbottombig_397_instances.clear_selection();
        minibossbonegolempiece5_1579_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, minibossbonegolempiece5_1579_instances)) goto event_1765_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1765_28_end;
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1765_28_end;
        minibossbonegolem_1576_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolem_1576_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolem_1576_instances.has_selection()) goto event_1765_28_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+3);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+3);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+3);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+3);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+3);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+3);
        }
    }
    event_1765_28_end: ;
}
void Frames::event_func_6298()
{
    // event 1766_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1)) goto event_1766_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1766_28_end;
        minibossbonegolem_1576_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolem_1576_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolem_1576_instances.has_selection()) goto event_1766_28_end;
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, -8);
            ((Active*)*it)->alterables->values.set(0, -1);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-3);
        }
    }
    event_1766_28_end: ;
}
void Frames::event_func_6299()
{
    // event 1767_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1)) goto event_1767_28_end;
        playersensorbottombig_397_instances.clear_selection();
        minibossbonegolempiece5_1579_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, minibossbonegolempiece5_1579_instances)) goto event_1767_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1767_28_end;
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1767_28_end;
        minibossbonegolem_1576_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolem_1576_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolem_1576_instances.has_selection()) goto event_1767_28_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-3);
    }
    event_1767_28_end: ;
}
void Frames::event_func_6300()
{
    // event 1768_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1)) goto event_1768_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)*it)->alterables->values.get(5)))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1768_28_end;
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, -2);
        }
    }
    event_1768_28_end: ;
}
void Frames::event_func_6301()
{
    // event 1769_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1)) goto event_1769_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)*it)->alterables->values.get(4)))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1769_28_end;
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 2);
        }
    }
    event_1769_28_end: ;
}
void Frames::event_func_6302()
{
    // event 1770_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1)) goto event_1770_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1770_28_end;
        minibossbonegolem_1576_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolem_1576_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolem_1576_instances.has_selection()) goto event_1770_28_end;
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-0.1, -1));
        }
    }
    event_1770_28_end: ;
}
void Frames::event_func_6303()
{
    // event 1771_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1)) goto event_1771_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1771_28_end;
        minibossbonegolem_1576_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolem_1576_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolem_1576_instances.has_selection()) goto event_1771_28_end;
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+0.1, 1));
        }
    }
    event_1771_28_end: ;
}
void Frames::event_func_6304()
{
    // event 1772_28
    bool or_result_1772_28 = false;
    bool or_temp_result_1772_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1)) goto or_event_1772_28_0_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto or_event_1772_28_0_end;
        or_result_1772_28 = true;
        or_temp_result_1772_28_0 = true;
    }
    or_event_1772_28_0_end: ;
    minibossbonegolempiece5_1579_instances.clear_saved_selection();
    if (or_temp_result_1772_28_0) {
        minibossbonegolempiece5_1579_instances.save_selection();
    }
    // event 1772_28
    bool or_temp_result_1772_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1)) goto or_event_1772_28_1_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto or_event_1772_28_1_end;
        or_result_1772_28 = true;
        or_temp_result_1772_28_1 = true;
        or_event_1772_28_1_end: ;
        if (or_temp_result_1772_28_1) {
            minibossbonegolempiece5_1579_instances.save_selection();
        }
        if (!or_result_1772_28) goto or_final_or_event_1772_28_1_end;
        minibossbonegolempiece5_1579_instances.empty_selection();
        if (or_temp_result_1772_28_0 || or_temp_result_1772_28_1) {
            minibossbonegolempiece5_1579_instances.restore_selection();
        }
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->alterables->values.get(0));
        }
    }
    or_final_or_event_1772_28_1_end: ;
}
void Frames::event_func_6305()
{
    // event 1773_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1)) goto event_1773_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (2))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1773_28_end;
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
        }
    }
    event_1773_28_end: ;
}
void Frames::event_func_6306()
{
    // event 1774_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1)) goto event_1774_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (2))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1774_28_end;
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(7);
            ((Active*)*it)->alterables->values.set(7, -60);
        }
    }
    event_1774_28_end: ;
}
void Frames::event_func_6307()
{
    // event 1775_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1)) goto event_1775_28_end;
        minibossbonegolemneck1_1580_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck1_1580_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(minibossbonegolempiece5_1579_instances, it.current_index));
            if (parent == NULL) goto pos_end_1775_28_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1775_28_0: ;
        }
        minibossbonegolemneck2_1581_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck2_1581_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(minibossbonegolemneck1_1580_instances, it.current_index));
            if (parent == NULL) goto pos_end_1775_28_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1775_28_1: ;
        }
        minibossbonegolemneck3_1582_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck3_1582_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(minibossbonegolemneck2_1581_instances, it.current_index));
            if (parent == NULL) goto pos_end_1775_28_2;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1775_28_2: ;
        }
        minibossbonegolemneck4_1583_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck4_1583_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(minibossbonegolemneck3_1582_instances, it.current_index));
            if (parent == NULL) goto pos_end_1775_28_3;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1775_28_3: ;
        }
        minibossbonegolemhead_1584_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(minibossbonegolemneck4_1583_instances, it.current_index));
            if (parent == NULL) goto pos_end_1775_28_4;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1775_28_4: ;
        }
        minibossbonegolempiece3_1575_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece3_1575_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->get_y()+3);
            ((Active*)*it)->set_x(((Active*)get_instance(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->get_x()+(((Active*)*it)->alterables->values.get(1)*24)*((Active*)get_instance(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
        minibossbonegolempiece_1577_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece_1577_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(minibossbonegolempiece3_1575_instances, it.current_index));
            if (parent == NULL) goto pos_end_1775_28_5;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1775_28_5: ;
        }
        minibossbonegolempiece6_1578_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece6_1578_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(minibossbonegolempiece_1577_instances, it.current_index, default_active_instance))->get_action_x());
            ((Active*)*it)->set_y(get_min(((Active*)get_single(minibossbonegolempiece_1577_instances, it.current_index, default_active_instance))->get_action_y(), ((Active*)get_instance(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->get_y()+50));
        }
        minibossbonegolem_1576_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolem_1576_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(minibossbonegolempiece5_1579_instances, it.current_index));
            if (parent == NULL) goto pos_end_1775_28_6;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 12);
            pos_end_1775_28_6: ;
        }
    }
    event_1775_28_end: ;
}
void Frames::event_func_6308()
{
    // event 1776_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1)) goto event_1776_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1776_28_end;
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(1);
        }
    }
    event_1776_28_end: ;
}
void Frames::event_func_6309()
{
    // event 1777_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1)) goto event_1777_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1777_28_end;
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(1);
        }
    }
    event_1777_28_end: ;
}
void Frames::event_func_6310()
{
    // event 1778_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1)) goto event_1778_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1778_28_end;
        minibossbonegolempiece6_1578_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece6_1578_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        minibossbonegolemneck1_1580_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck1_1580_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(0, 30-90+sin_deg(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(1))*10*(((Active*)get_instance(minibossbonegolempiece3_1575_instances, it.current_index, default_active_instance))->alterables->values.get(1)*2-1));
        }
        minibossbonegolemneck2_1581_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck2_1581_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(0, 60-90+sin_deg(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(1)-20)*10*(((Active*)get_instance(minibossbonegolempiece3_1575_instances, it.current_index, default_active_instance))->alterables->values.get(1)*2-1));
        }
        minibossbonegolemneck3_1582_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck3_1582_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(0, 100-90+sin_deg(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(1)-40)*10*(((Active*)get_instance(minibossbonegolempiece3_1575_instances, it.current_index, default_active_instance))->alterables->values.get(1)*2-1));
        }
        minibossbonegolemneck4_1583_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck4_1583_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(0, 80-90+sin_deg(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(1)-60)*10*(((Active*)get_instance(minibossbonegolempiece3_1575_instances, it.current_index, default_active_instance))->alterables->values.get(1)*2-1));
        }
        minibossbonegolempiece3_1575_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece3_1575_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -45+sin_deg(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(1))*20*(((Active*)*it)->alterables->values.get(1)*2-1));
        }
        minibossbonegolempiece_1577_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece_1577_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -20+45+cos_deg(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(1))*30*(((Active*)*it)->alterables->values.get(1)*2-1));
        }
        minibossbonegolemhead_1584_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->flags.get(1)*16);
        }
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1778_28_end: ;
}
void Frames::event_func_6311()
{
    // event 1779_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1)) goto event_1779_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1779_28_end;
        minibossbonegolempiece6_1578_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece6_1578_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        minibossbonegolemneck1_1580_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck1_1580_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(0, 150-90-sin_deg(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(1))*10*(((Active*)get_instance(minibossbonegolempiece3_1575_instances, it.current_index, default_active_instance))->alterables->values.get(1)*2-1));
        }
        minibossbonegolemneck2_1581_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck2_1581_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(0, 120-90-sin_deg(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(1)-20)*10*(((Active*)get_instance(minibossbonegolempiece3_1575_instances, it.current_index, default_active_instance))->alterables->values.get(1)*2-1));
        }
        minibossbonegolemneck3_1582_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck3_1582_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(0, 80-90-sin_deg(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(1)-40)*10*(((Active*)get_instance(minibossbonegolempiece3_1575_instances, it.current_index, default_active_instance))->alterables->values.get(1)*2-1));
        }
        minibossbonegolemneck4_1583_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck4_1583_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(0, 100-90-sin_deg(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(1)-60)*10*(((Active*)get_instance(minibossbonegolempiece3_1575_instances, it.current_index, default_active_instance))->alterables->values.get(1)*2-1));
        }
        minibossbonegolempiece3_1575_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece3_1575_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 90-45+sin_deg(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(1))*20*(((Active*)*it)->alterables->values.get(1)*2-1));
        }
        minibossbonegolempiece_1577_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece_1577_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -60-20+45-cos_deg(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(1))*30*(((Active*)*it)->alterables->values.get(1)*2-1));
        }
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        minibossbonegolemhead_1584_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16+((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->flags.get(1)*16);
        }
    }
    event_1779_28_end: ;
}
void Frames::event_func_6312()
{
    // event 1780_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1)) goto event_1780_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (-1))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1780_28_end;
        minibossbonegolemneck4_1583_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck4_1583_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((((Active*)*it)->get_x()*(1+get_abs(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0)))+((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->get_x()*(1-get_abs(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0))))*0.5);
        }
        minibossbonegolemneck3_1582_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck3_1582_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((((Active*)*it)->get_x()*(1+get_abs(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0)))+((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->get_x()*(1-get_abs(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0))))*0.5);
        }
        minibossbonegolemneck2_1581_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck2_1581_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((((Active*)*it)->get_x()*(1+get_abs(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0)))+((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->get_x()*(1-get_abs(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0))))*0.5);
        }
        minibossbonegolemneck1_1580_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck1_1580_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((((Active*)*it)->get_x()*(1+get_abs(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0)))+((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->get_x()*(1-get_abs(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0))))*0.5);
        }
        minibossbonegolemhead_1584_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((((Active*)*it)->get_x()*(1+get_abs(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0)))+((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->get_x()*(1-get_abs(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0))))*0.5);
        }
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(get_abs(((Active*)*it)->alterables->values.get(0)));
        }
        minibossbonegolempiece_1577_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece_1577_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((((Active*)*it)->get_x()*(1+get_abs(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0)))+(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->get_x()-16+((Active*)*it)->alterables->values.get(1)*32)*(1-get_abs(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0))))*0.5);
        }
        minibossbonegolempiece3_1575_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece3_1575_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((((Active*)*it)->get_x()*(1+get_abs(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0)))+(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->get_x()-16+((Active*)*it)->alterables->values.get(1)*32)*(1-get_abs(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0))))*0.5);
        }
        minibossbonegolempiece6_1578_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece6_1578_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((((Active*)*it)->get_x()*(1+get_abs(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0)))+(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->get_x()-16+((Active*)*it)->alterables->values.get(1)*32)*(1-get_abs(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0))))*0.5);
        }
        for (ObjectIterator it(minibossbonegolemneck1_1580_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)*get_abs(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0)));
        }
        for (ObjectIterator it(minibossbonegolemneck2_1581_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)*get_abs(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0)));
        }
        for (ObjectIterator it(minibossbonegolemneck3_1582_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)*get_abs(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0)));
        }
        for (ObjectIterator it(minibossbonegolemneck4_1583_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)*get_abs(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0)));
        }
        for (ObjectIterator it(minibossbonegolempiece3_1575_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)*get_abs(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0)));
        }
        for (ObjectIterator it(minibossbonegolempiece_1577_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)*get_abs(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0)));
        }
    }
    event_1780_28_end: ;
}
void Frames::event_func_6313()
{
    // event 1781_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1)) goto event_1781_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1781_28_end;
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1781_28_end: ;
}
void Frames::event_func_6314()
{
    // event 1782_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1)) goto event_1782_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1782_28_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, minibossbonegolempiece5_1579_instances)) goto event_1782_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1782_28_end;
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1782_28_end: ;
}
void Frames::event_func_6315()
{
    // event 1783_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1)) goto event_1783_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1783_28_end;
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
        }
        if (!group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_miniboss_bone_golem_attacks_ground_peck_1) {
            group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_miniboss_bone_golem_attacks_ground_peck_1 = true;
        }
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(7);
        }
    }
    event_1783_28_end: ;
}
void Frames::event_func_6316()
{
    // event 1784_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1)) goto event_1784_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1784_28_end;
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
        }
        if (!group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_miniboss_bone_golem_attacks_back_peck_1) {
            group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_miniboss_bone_golem_attacks_back_peck_1 = true;
        }
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(7);
        }
    }
    event_1784_28_end: ;
}
void Frames::event_func_6317()
{
    // event 1785_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1)) goto event_1785_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1785_28_end;
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, (((Active*)*it)->alterables->values.get(2)+1)%math_helper%80);
        }
    }
    event_1785_28_end: ;
}
void Frames::event_func_6318()
{
    // event 1786_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_miniboss_bone_golem_attacks_ground_peck_1)) goto event_1786_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (30))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1786_28_end;
        minibossbonegolemneck1_1580_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck1_1580_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)+get_min(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*1.5, 30)*((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
        minibossbonegolemneck2_1581_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck2_1581_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)+get_min(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*1.5, 30)*((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
        minibossbonegolemneck3_1582_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck3_1582_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)+get_min(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*1.5, 30)*((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
        minibossbonegolemneck4_1583_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck4_1583_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)+get_min(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*1.5, 30)*((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
        minibossbonegolemhead_1584_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(get_min(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0), 20), -20));
        }
    }
    event_1786_28_end: ;
}
void Frames::event_func_6319()
{
    // event 1787_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_miniboss_bone_golem_attacks_ground_peck_1)) goto event_1787_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1787_28_end;
        minibossbonegolemneck1_1580_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck1_1580_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)+330-((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*10, -125));
        }
        minibossbonegolemneck2_1581_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck2_1581_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)+330-((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*10, -125));
        }
        minibossbonegolemneck3_1582_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck3_1582_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)+330-((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*10, -125));
        }
        minibossbonegolemneck4_1583_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck4_1583_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)+330-((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*10, -125));
        }
        minibossbonegolemhead_1584_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(170-((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*5, -30));
        }
    }
    event_1787_28_end: ;
}
void Frames::event_func_6320()
{
    // event 1788_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_miniboss_bone_golem_attacks_ground_peck_1)) goto event_1788_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1788_28_end;
        minibossbonegolemneck1_1580_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck1_1580_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)-330+((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*10, 125));
        }
        minibossbonegolemhead_1584_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(-170+((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*5, 30));
        }
        minibossbonegolemneck2_1581_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck2_1581_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)-330+((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*10, 125));
        }
        minibossbonegolemneck3_1582_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck3_1582_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)-330+((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*10, 125));
        }
        minibossbonegolemneck4_1583_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck4_1583_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)-330+((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*10, 125));
        }
    }
    event_1788_28_end: ;
}
void Frames::event_func_6321()
{
    // event 1789_28
    bool or_result_1789_28 = false;
    bool or_temp_result_1789_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_miniboss_bone_golem_attacks_ground_peck_1)) goto or_event_1789_28_0_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto or_event_1789_28_0_end;
        minibossbonegolemneck4_1583_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck4_1583_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (125))) { it.deselect(); continue; }
        }
        if (!minibossbonegolemneck4_1583_instances.has_selection()) goto or_event_1789_28_0_end;
        minibossbonegolemhead_1584_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolemhead_1584_instances.has_selection()) goto or_event_1789_28_0_end;
        or_result_1789_28 = true;
        or_temp_result_1789_28_0 = true;
    }
    or_event_1789_28_0_end: ;
    minibossbonegolempiece5_1579_instances.clear_saved_selection();
    minibossbonegolemhead_1584_instances.clear_saved_selection();
    minibossbonegolemneck4_1583_instances.clear_saved_selection();
    if (or_temp_result_1789_28_0) {
        minibossbonegolempiece5_1579_instances.save_selection();
        minibossbonegolemhead_1584_instances.save_selection();
        minibossbonegolemneck4_1583_instances.save_selection();
    }
    // event 1789_28
    bool or_temp_result_1789_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_miniboss_bone_golem_attacks_ground_peck_1)) goto or_event_1789_28_1_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto or_event_1789_28_1_end;
        minibossbonegolemneck4_1583_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck4_1583_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (-125))) { it.deselect(); continue; }
        }
        if (!minibossbonegolemneck4_1583_instances.has_selection()) goto or_event_1789_28_1_end;
        minibossbonegolemhead_1584_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolemhead_1584_instances.has_selection()) goto or_event_1789_28_1_end;
        or_result_1789_28 = true;
        or_temp_result_1789_28_1 = true;
        or_event_1789_28_1_end: ;
        if (or_temp_result_1789_28_1) {
            minibossbonegolempiece5_1579_instances.save_selection();
            minibossbonegolemhead_1584_instances.save_selection();
            minibossbonegolemneck4_1583_instances.save_selection();
        }
        if (!or_result_1789_28) goto or_final_or_event_1789_28_1_end;
        minibossbonegolemneck4_1583_instances.empty_selection();
        minibossbonegolemhead_1584_instances.empty_selection();
        minibossbonegolempiece5_1579_instances.empty_selection();
        if (or_temp_result_1789_28_0 || or_temp_result_1789_28_1) {
            minibossbonegolempiece5_1579_instances.restore_selection();
        }
        if (or_temp_result_1789_28_0 || or_temp_result_1789_28_1) {
            minibossbonegolemhead_1584_instances.restore_selection();
        }
        if (or_temp_result_1789_28_0 || or_temp_result_1789_28_1) {
            minibossbonegolemneck4_1583_instances.restore_selection();
        }
        FrameObject * single_instance_1789_28_0; single_instance_1789_28_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibossbonegolemhead_1584_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hazardshockwave_1524(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1789_28_0 == NULL)
                    single_instance_1789_28_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1789_28_0))->set_direction(((Active*)get_single(minibossbonegolemhead_1584_instances, default_active_instance))->get_direction());
        ((Active*)((Active*)single_instance_1789_28_0))->set_y(((Active*)get_single(minibossbonegolempiece5_1579_instances, default_active_instance))->get_y()+56);
    }
    or_final_or_event_1789_28_1_end: ;
}
void Frames::event_func_6322()
{
    // event 1790_28
    bool or_result_1790_28 = false;
    bool or_temp_result_1790_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_miniboss_bone_golem_attacks_ground_peck_1)) goto or_event_1790_28_0_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto or_event_1790_28_0_end;
        minibossbonegolemneck4_1583_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck4_1583_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (125))) { it.deselect(); continue; }
        }
        if (!minibossbonegolemneck4_1583_instances.has_selection()) goto or_event_1790_28_0_end;
        minibossbonegolemhead_1584_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolemhead_1584_instances.has_selection()) goto or_event_1790_28_0_end;
        or_result_1790_28 = true;
        or_temp_result_1790_28_0 = true;
    }
    or_event_1790_28_0_end: ;
    minibossbonegolempiece5_1579_instances.clear_saved_selection();
    minibossbonegolemhead_1584_instances.clear_saved_selection();
    minibossbonegolemneck4_1583_instances.clear_saved_selection();
    if (or_temp_result_1790_28_0) {
        minibossbonegolempiece5_1579_instances.save_selection();
        minibossbonegolemhead_1584_instances.save_selection();
        minibossbonegolemneck4_1583_instances.save_selection();
    }
    // event 1790_28
    bool or_temp_result_1790_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_miniboss_bone_golem_attacks_ground_peck_1)) goto or_event_1790_28_1_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto or_event_1790_28_1_end;
        minibossbonegolemneck4_1583_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck4_1583_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (-125))) { it.deselect(); continue; }
        }
        if (!minibossbonegolemneck4_1583_instances.has_selection()) goto or_event_1790_28_1_end;
        minibossbonegolemhead_1584_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolemhead_1584_instances.has_selection()) goto or_event_1790_28_1_end;
        or_result_1790_28 = true;
        or_temp_result_1790_28_1 = true;
        or_event_1790_28_1_end: ;
        if (or_temp_result_1790_28_1) {
            minibossbonegolempiece5_1579_instances.save_selection();
            minibossbonegolemhead_1584_instances.save_selection();
            minibossbonegolemneck4_1583_instances.save_selection();
        }
        if (!or_result_1790_28) goto or_final_or_event_1790_28_1_end;
        minibossbonegolemneck4_1583_instances.empty_selection();
        minibossbonegolemhead_1584_instances.empty_selection();
        minibossbonegolempiece5_1579_instances.empty_selection();
        if (or_temp_result_1790_28_0 || or_temp_result_1790_28_1) {
            minibossbonegolempiece5_1579_instances.restore_selection();
        }
        if (or_temp_result_1790_28_0 || or_temp_result_1790_28_1) {
            minibossbonegolemhead_1584_instances.restore_selection();
        }
        if (or_temp_result_1790_28_0 || or_temp_result_1790_28_1) {
            minibossbonegolemneck4_1583_instances.restore_selection();
        }
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
        FrameObject * single_instance_1790_28_0; single_instance_1790_28_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibossbonegolemhead_1584_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hazardshockwave_1524(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1790_28_0 == NULL)
                    single_instance_1790_28_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1790_28_0))->set_direction(((Active*)get_single(minibossbonegolemhead_1584_instances, default_active_instance))->get_direction()+16);
        ((Active*)((Active*)single_instance_1790_28_0))->set_y(((Active*)get_single(minibossbonegolempiece5_1579_instances, default_active_instance))->get_y()+56);
        mastercamera_430_instances.clear_selection();
        for (ObjectIterator it(mastercamera_430_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, get_min(((Active*)*it)->alterables->values.get(25)+6, 6));
        }
        media.play_id(SOUND_COMMON_EXPLODE_8_17, -1, 1);
    }
    or_final_or_event_1790_28_1_end: ;
}
void Frames::event_func_6323()
{
    // event 1791_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_miniboss_bone_golem_attacks_ground_peck_1)) goto event_1791_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1791_28_end;
        minibossbonegolemneck1_1580_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck1_1580_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(get_max(-225-180+((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*5, -125), ((Active*)*it)->alterables->values.get(0)));
        }
        minibossbonegolemneck2_1581_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck2_1581_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(get_max(-225-180+((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*5, -125), ((Active*)*it)->alterables->values.get(0)));
        }
        minibossbonegolemneck3_1582_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck3_1582_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(get_max(-225-180+((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*5, -125), ((Active*)*it)->alterables->values.get(0)));
        }
        minibossbonegolemneck4_1583_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck4_1583_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(get_max(-225-180+((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*5, -125), ((Active*)*it)->alterables->values.get(0)));
        }
        minibossbonegolemhead_1584_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+1, 0));
        }
    }
    event_1791_28_end: ;
}
void Frames::event_func_6324()
{
    // event 1792_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_miniboss_bone_golem_attacks_ground_peck_1)) goto event_1792_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1792_28_end;
        minibossbonegolemneck1_1580_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck1_1580_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(get_min(225+180-((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*5, 125), ((Active*)*it)->alterables->values.get(0)));
        }
        minibossbonegolemhead_1584_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-1, 0));
        }
        minibossbonegolemneck2_1581_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck2_1581_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(get_min(225+180-((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*5, 125), ((Active*)*it)->alterables->values.get(0)));
        }
        minibossbonegolemneck3_1582_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck3_1582_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(get_min(225+180-((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*5, 125), ((Active*)*it)->alterables->values.get(0)));
        }
        minibossbonegolemneck4_1583_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck4_1583_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(get_min(225+180-((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*5, 125), ((Active*)*it)->alterables->values.get(0)));
        }
    }
    event_1792_28_end: ;
}
void Frames::event_func_6325()
{
    // event 1793_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_miniboss_bone_golem_attacks_ground_peck_1)) goto event_1793_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1793_28_end;
        minibossbonegolemhead_1584_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
            group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_miniboss_bone_golem_attacks_ground_peck_1 = false;
    
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1793_28_end: ;
}
void Frames::event_func_6326()
{
    // event 1794_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_miniboss_bone_golem_attacks_back_peck_1)) goto event_1794_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (30))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1794_28_end;
        minibossbonegolemneck1_1580_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck1_1580_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)+get_min(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*1.5, 30)*((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0)*-1);
        }
        minibossbonegolemneck2_1581_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck2_1581_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)+get_min(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*1.5, 30)*((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0)*-1);
        }
        minibossbonegolemneck3_1582_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck3_1582_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)+get_min(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*1.5, 30)*((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0)*-1);
        }
        minibossbonegolemneck4_1583_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck4_1583_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)+get_min(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*1.5, 30)*((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0)*-1);
        }
        minibossbonegolemhead_1584_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(get_min(((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0)*-1, 20), -20));
        }
    }
    event_1794_28_end: ;
}
void Frames::event_func_6327()
{
    // event 1795_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_miniboss_bone_golem_attacks_back_peck_1)) goto event_1795_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1795_28_end;
        minibossbonegolemhead_1584_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(170-((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*5, -40));
        }
        minibossbonegolemneck1_1580_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck1_1580_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)+330-((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*10, ((Active*)*it)->alterables->values.get(0)-20));
        }
        minibossbonegolemneck2_1581_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck2_1581_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)+330-((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*10, ((Active*)*it)->alterables->values.get(0)-45));
        }
        minibossbonegolemneck3_1582_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck3_1582_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)+330-((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*10, ((Active*)*it)->alterables->values.get(0)-60));
        }
        minibossbonegolemneck4_1583_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck4_1583_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)+390-((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*12, ((Active*)*it)->alterables->values.get(0)-120));
        }
    }
    event_1795_28_end: ;
}
void Frames::event_func_6328()
{
    // event 1796_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_miniboss_bone_golem_attacks_back_peck_1)) goto event_1796_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1796_28_end;
        minibossbonegolemneck1_1580_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck1_1580_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)-330+((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*10, ((Active*)*it)->alterables->values.get(0)+20));
        }
        minibossbonegolemhead_1584_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(-170+((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*5, 40));
        }
        minibossbonegolemneck2_1581_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck2_1581_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)-330+((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*10, ((Active*)*it)->alterables->values.get(0)+45));
        }
        minibossbonegolemneck3_1582_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck3_1582_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)-330+((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*10, ((Active*)*it)->alterables->values.get(0)+60));
        }
        minibossbonegolemneck4_1583_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck4_1583_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)-390+((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*12, ((Active*)*it)->alterables->values.get(0)+120));
        }
    }
    event_1796_28_end: ;
}
