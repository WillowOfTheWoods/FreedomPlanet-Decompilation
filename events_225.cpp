#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_17770()
{
    // event 1540_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1540_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (4))) goto event_1540_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (170))) goto event_1540_79_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        effectsspadeimage_321_instances.clear_selection();
        for (ObjectIterator it(effectsspadeimage_321_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(0);
        }
    }
    event_1540_79_end: ;
}
void Frames::event_func_17771()
{
    // event 1541_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1541_79_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1541_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (15))) goto event_1541_79_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1541_79_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 4);
            ((Active*)*it)->alterables->values.set(11, 80);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
    }
    event_1541_79_end: ;
}
void Frames::event_func_17772()
{
    // event 1542_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1542_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (6))) goto event_1542_79_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0), ((Active*)get_instance(minibossufo_1763_instances, default_active_instance))->get_x()-50));
    }
    event_1542_79_end: ;
}
void Frames::event_func_17773()
{
    // event 1543_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1543_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (6))) goto event_1543_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (70))) goto event_1543_79_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(1, 2);
    }
    event_1543_79_end: ;
}
void Frames::event_func_17774()
{
    // event 1544_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1544_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (6))) goto event_1544_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (240))) goto event_1544_79_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(npcshellduck_533_instances))->get_y());
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-100);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-100);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-100);
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-100);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
    }
    event_1544_79_end: ;
}
void Frames::event_func_17775()
{
    // event 1545_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1545_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (7))) goto event_1545_79_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
    }
    event_1545_79_end: ;
}
void Frames::event_func_17776()
{
    // event 1546_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1546_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (7))) goto event_1546_79_end;
        if (!((global_values->get(1)) != (0))) goto event_1546_79_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1546_79_end: ;
}
void Frames::event_func_17777()
{
    // event 1547_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1547_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (7))) goto event_1547_79_end;
        if (!((global_values->get(1)) != (2))) goto event_1547_79_end;
        if (!((global_values->get(1)) != (3))) goto event_1547_79_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1547_79_end: ;
}
void Frames::event_func_17778()
{
    // event 1548_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1548_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (7))) goto event_1548_79_end;
        if (!((global_values->get(1)) != (4))) goto event_1548_79_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1548_79_end: ;
}
void Frames::event_func_17779()
{
    // event 1549_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1549_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (7))) goto event_1549_79_end;
        if (!((global_values->get(1)) != (5))) goto event_1549_79_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1549_79_end: ;
}
void Frames::event_func_17780()
{
    // event 1550_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1550_79_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1550_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (16))) goto event_1550_79_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1550_79_end;
        if (!((global_values->get(1)) != (2))) goto event_1550_79_end;
        if (!((global_values->get(1)) != (4))) goto event_1550_79_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
    }
    event_1550_79_end: ;
}
void Frames::event_func_17781()
{
    // event 1551_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1551_79_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1551_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (16))) goto event_1551_79_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1551_79_end;
        if (!((global_values->get(1)) == (2))) goto event_1551_79_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 2);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
    }
    event_1551_79_end: ;
}
void Frames::event_func_17782()
{
    // event 1552_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1552_79_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1552_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (16))) goto event_1552_79_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1552_79_end;
        if (!((global_values->get(1)) == (4))) goto event_1552_79_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 3);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
    }
    event_1552_79_end: ;
}
void Frames::event_func_17783()
{
    // event 1553_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1553_79_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1553_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) > (16))) goto event_1553_79_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1553_79_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 4);
            ((Active*)*it)->alterables->values.set(11, 80);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
        media.stop_channel(32-1);
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        fadeedge_57_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fadeedge_57(0, 0), 6);
            fadeedge_57_instances.add_back();
        }
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 2);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-global_values->get(16)-120);
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_83);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1553_79_end: ;
}
void Frames::event_func_17784()
{
    // event 1554_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1554_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (8))) goto event_1554_79_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_min(((Active*)*it)->get_x()+32, frame_left()));
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        fadeedge_57_instances.clear_selection();
        for (ObjectIterator it(fadeedge_57_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(levelcardfade2_24_instances, it.current_index, default_active_instance))->get_x()+global_values->get(16)+120);
            ((Active*)*it)->set_y(((Active*)get_single(levelcardfade2_24_instances, it.current_index, default_active_instance))->get_y());
        }
    }
    event_1554_79_end: ;
}
void Frames::event_func_17785()
{
    // event 1555_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1555_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (8))) goto event_1555_79_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1555_79_end;
        next_frame = 29 + 0;    
    
    }
    event_1555_79_end: ;
}
void Frames::event_func_17786()
{
    // event 1556_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1556_79_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(3), 0);
        }
        minibossufo2_1764_instances.clear_selection();
        for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(minibossufo_1763_instances, it.current_index, default_active_instance))->alterables->values.get(3), 0);
        }
        ((Active*)get_instance(minibossufohatch1_1722_instances))->set_angle(((Active*)get_single(minibossufo_1763_instances, default_active_instance))->alterables->values.get(3)-((Active*)get_single(minibossufo_1763_instances, default_active_instance))->alterables->values.get(10), 0);
        ((Active*)get_instance(minibossufohatch2_1723_instances))->set_angle(((Active*)get_single(minibossufo_1763_instances, default_active_instance))->alterables->values.get(3)+((Active*)get_single(minibossufo_1763_instances, default_active_instance))->alterables->values.get(10), 0);
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, ((Active*)*it)->alterables->values.get(5));
        }
    }
    event_1556_79_end: ;
}
void Frames::event_func_17787()
{
    // event 1557_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1557_79_end;
        minibossufo2_1764_instances.clear_selection();
        for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(minibossufo_1763_instances, it.current_index, default_active_instance))->get_x()+cos_deg(((Active*)get_instance(minibossufo_1763_instances, it.current_index, default_active_instance))->alterables->values.get(3))*cos_deg(((Active*)*it)->alterables->values.get(0)*90+((Active*)get_instance(minibossufo_1763_instances, it.current_index, default_active_instance))->alterables->values.get(4))*80);
            ((Active*)*it)->set_y(((Active*)get_instance(minibossufo_1763_instances, it.current_index, default_active_instance))->get_y()-sin_deg(((Active*)get_instance(minibossufo_1763_instances, it.current_index, default_active_instance))->alterables->values.get(3))*cos_deg(((Active*)*it)->alterables->values.get(0)*90+((Active*)get_instance(minibossufo_1763_instances, it.current_index, default_active_instance))->alterables->values.get(4))*80);
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(minibossufo_1763_instances, it.current_index, default_active_instance))->alterables->values.get(4)+((Active*)*it)->alterables->values.get(0)*90);
        }
        {
            FrameObject * parent = ((Active*)get_instance(minibossufo_1763_instances));
            if (parent == NULL) goto pos_end_1557_79_0;
            ((Active*)get_instance(minibossufohatch1_1722_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1557_79_0: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(minibossufo_1763_instances));
            if (parent == NULL) goto pos_end_1557_79_1;
            ((Active*)get_instance(minibossufohatch2_1723_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1557_79_1: ;
        }
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(7));
        }
    }
    event_1557_79_end: ;
}
void Frames::event_func_17788()
{
    // event 1558_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1558_79_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, (((Active*)*it)->alterables->values.get(4)+4)%math_helper%360);
        }
    }
    event_1558_79_end: ;
}
void Frames::event_func_17789()
{
    // event 1559_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1559_79_end;
        minibossufo2_1764_instances.clear_selection();
        for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (180))) { it.deselect(); continue; }
        }
        if (!minibossufo2_1764_instances.has_selection()) goto event_1559_79_end;
        {
            minibossufo_1763_instances.clear_selection();
            ObjectIterator other_it(minibossufo_1763_instances);
            for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1559_79_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1559_79_0_end: ;
    }
    event_1559_79_end: ;
}
void Frames::event_func_17790()
{
    // event 1560_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1560_79_end;
        minibossufo2_1764_instances.clear_selection();
        for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (360))) { it.deselect(); continue; }
        }
        if (!minibossufo2_1764_instances.has_selection()) goto event_1560_79_end;
        {
            minibossufo_1763_instances.clear_selection();
            ObjectIterator other_it(minibossufo_1763_instances);
            for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1560_79_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1560_79_0_end: ;
    }
    event_1560_79_end: ;
}
void Frames::event_func_17791()
{
    // event 1561_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1561_79_end;
        minibossufo2_1764_instances.clear_selection();
        for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (360))) { it.deselect(); continue; }
        }
        if (!minibossufo2_1764_instances.has_selection()) goto event_1561_79_end;
        ((Active*)get_single(minibossufo2_1764_instances, default_active_instance))->move_back(((Active*)get_instance(minibossufohatch1_1722_instances)));
    }
    event_1561_79_end: ;
}
void Frames::event_func_17792()
{
    // event 1562_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1562_79_end;
        minibossufo2_1764_instances.clear_selection();
        for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (180+360))) { it.deselect(); continue; }
        }
        if (!minibossufo2_1764_instances.has_selection()) goto event_1562_79_end;
        ((Active*)get_single(minibossufo2_1764_instances, default_active_instance))->move_back(((Active*)get_instance(minibossufohatch1_1722_instances)));
    }
    event_1562_79_end: ;
}
void Frames::event_func_17793()
{
    // event 1563_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1563_79_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1563_79_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, get_min(((Active*)*it)->alterables->values.get(10)+3, 45));
        }
    }
    event_1563_79_end: ;
}
void Frames::event_func_17794()
{
    // event 1564_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1564_79_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) >= (45))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1564_79_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->values.add(6, 1);
        }
        media.play_id(SOUND_CHARGESMALL_2_168, -1, 1);
    }
    event_1564_79_end: ;
}
void Frames::event_func_17795()
{
    // event 1565_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1565_79_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1565_79_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
        }
    }
    event_1565_79_end: ;
}
void Frames::event_func_17796()
{
    // event 1566_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1566_79_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (60))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1566_79_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
        }
        media.play_id(SOUND_COMMON_BUBBLESWEEP_169, -1, 1);
    }
    event_1566_79_end: ;
}
void Frames::event_func_17797()
{
    // event 1567_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1567_79_end;
        minibossufobeam_1721_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(minibossufobeam_1721_instances, playercharactersensor_383_instances)) goto event_1567_79_end;
        if (!(((Active*)get_instance(minibossufobeam_1721_instances))->flags & VISIBLE)) goto event_1567_79_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1567_79_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1567_79_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
    }
    event_1567_79_end: ;
}
void Frames::event_func_17798()
{
    // event 1568_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1568_79_end;
        minibossufobeam_1721_instances.clear_selection();
        breakablefloor2_1761_instances.clear_selection();
        if (!check_overlap(minibossufobeam_1721_instances, breakablefloor2_1761_instances)) goto event_1568_79_end;
        if (!(((Active*)get_instance(minibossufobeam_1721_instances))->flags & VISIBLE)) goto event_1568_79_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 5);
        }
        for (ObjectIterator it(breakablefloor2_1761_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        effectswhiteburst_5_instances.empty_selection();
        // select single: false true false
        {
            FrameObject * parent = ((Active*)get_instance(minibossufobeam_1721_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->get_action_x() - parent->layer->off_x + -16, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                effectswhiteburst_5_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->get_action_x() - parent->layer->off_x + 16, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                effectswhiteburst_5_instances.add_back();
            }
        }
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-10+randrange(21));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-8+randrange(17));
            ((Active*)*it)->force_frame(4);
            ((Active*)*it)->restore_frame();
        }
        ((Active*)get_instance(minibossufobeam_1721_instances))->alterables->values.sub(0, 0.5);
    }
    event_1568_79_end: ;
}
void Frames::event_func_17799()
{
    // event 1569_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1569_79_end;
        breakablefloor2_1761_instances.clear_selection();
        for (ObjectIterator it(breakablefloor2_1761_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (5))) { it.deselect(); continue; }
        }
        if (!breakablefloor2_1761_instances.has_selection()) goto event_1569_79_end;
        for (ObjectIterator it(breakablefloor2_1761_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->alterables->values.set(23, 0);
            ((Active*)*it)->alterables->values.set(24, -4);
        }
    }
    event_1569_79_end: ;
}
void Frames::event_func_17800()
{
    // event 1570_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1570_79_end;
        {
            FrameObject * parent = ((Active*)get_instance(minibossufo_1763_instances));
            if (parent == NULL) goto pos_end_1570_79_0;
            ((Active*)get_instance(minibossufobeam_1721_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1570_79_0: ;
        }
        ((Active*)get_instance(minibossufobeam_1721_instances))->set_y_scale(((Active*)get_instance(minibossufobeam_1721_instances))->alterables->values.get(0));
    }
    event_1570_79_end: ;
}
void Frames::event_func_17801()
{
    // event 1571_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1571_79_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) > (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1571_79_end;
        if (!((((Active*)get_instance(minibossufobeam_1721_instances))->alterables->values.get(0)) < (12))) goto event_1571_79_end;
        ((Active*)get_instance(minibossufobeam_1721_instances))->alterables->values.add(0, 0.5);
        ((Active*)get_instance(minibossufobeam_1721_instances))->set_visible(true);
    }
    event_1571_79_end: ;
}
void Frames::event_func_17802()
{
    // event 1572_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1572_79_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) > (60))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1572_79_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(11, 1);
        }
        ((Active*)get_instance(minibossufobeam_1721_instances))->alterables->values.set(0, get_max(((Active*)get_instance(minibossufobeam_1721_instances))->alterables->values.get(0)-0.5, 0));
    }
    event_1572_79_end: ;
}
void Frames::event_func_17803()
{
    // event 1573_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1573_79_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) <= (60))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1573_79_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
            ((Active*)*it)->alterables->values.set(11, 0);
            ((Active*)*it)->force_animation(0);
        }
        ((Active*)get_instance(minibossufobeam_1721_instances))->set_visible(false);
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1573_79_end: ;
}
void Frames::event_func_17804()
{
    // event 1574_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1574_79_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (5))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1574_79_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, get_max(((Active*)*it)->alterables->values.get(10)-3, 0));
        }
    }
    event_1574_79_end: ;
}
void Frames::event_func_17805()
{
    // event 1575_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1575_79_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (16))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1575_79_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7)+0.1, 16));
        }
    }
    event_1575_79_end: ;
}
void Frames::event_func_17806()
{
    // event 1576_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1576_79_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (-90))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1576_79_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
        }
    }
    event_1576_79_end: ;
}
void Frames::event_func_17807()
{
    // event 1577_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_spade_1)) goto event_1577_79_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (frame_right()+400))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1577_79_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        minibossufo2_1764_instances.clear_selection();
        for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(minibossufohatch2_1723_instances))->set_visible(false);
        ((Active*)get_instance(minibossufohatch1_1722_instances))->set_visible(false);
    }
    event_1577_79_end: ;
}
void Frames::event_func_17808()
{
    // event 1579_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1579_79_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
    }
    event_1579_79_end: ;
}
void Frames::event_func_17809()
{
    // event 1580_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1580_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (0))) goto event_1580_79_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(1));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 4);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 2496);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 180);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(266);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(266);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(266);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(266);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(2496+30);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(2496+80);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(2496-30);
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(2496-80);
            ((Active*)*it)->force_animation(40);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(30);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(60);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(3);
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(21);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1580_79_end: ;
}
void Frames::event_func_17810()
{
    // event 1581_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1581_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (0))) goto event_1581_79_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1581_79_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        if (!group_pause_1) {
            group_pause_1 = true;
        }
    }
    event_1581_79_end: ;
}
void Frames::event_func_17811()
{
    // event 1582_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1582_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (1))) goto event_1582_79_end;
        if (!((global_values->get(1)) <= (1))) goto event_1582_79_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 20);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1582_79_end: ;
}
void Frames::event_func_17812()
{
    // event 1583_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1583_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (1))) goto event_1583_79_end;
        if (!((global_values->get(1)) >= (2))) goto event_1583_79_end;
        if (!((global_values->get(1)) <= (3))) goto event_1583_79_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 21);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1583_79_end: ;
}
void Frames::event_func_17813()
{
    // event 1584_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1584_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (1))) goto event_1584_79_end;
        if (!((global_values->get(1)) == (4))) goto event_1584_79_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 22);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1584_79_end: ;
}
void Frames::event_func_17814()
{
    // event 1585_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1585_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (1))) goto event_1585_79_end;
        if (!((global_values->get(1)) > (4))) goto event_1585_79_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 23);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1585_79_end: ;
}
void Frames::event_func_17815()
{
    // event 1586_79
    bool or_result_1586_79 = false;
    bool or_temp_result_1586_79_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto or_event_1586_79_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1586_79_0_end;
        or_result_1586_79 = true;
        or_temp_result_1586_79_0 = true;
    }
    or_event_1586_79_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1586_79_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1586_79
    bool or_temp_result_1586_79_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto or_event_1586_79_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1586_79_1_end;
        or_result_1586_79 = true;
        or_temp_result_1586_79_1 = true;
    }
    or_event_1586_79_1_end: ;
    if (or_temp_result_1586_79_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1586_79
    bool or_temp_result_1586_79_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto or_event_1586_79_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1586_79_2_end;
        or_result_1586_79 = true;
        or_temp_result_1586_79_2 = true;
        or_event_1586_79_2_end: ;
        if (or_temp_result_1586_79_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1586_79) goto or_final_or_event_1586_79_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1586_79_0 || or_temp_result_1586_79_1 || or_temp_result_1586_79_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1586_79_2_end: ;
}
void Frames::event_func_17816()
{
    // event 1587_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1587_79_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1587_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (24))) goto event_1587_79_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1587_79_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 24);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
    }
    event_1587_79_end: ;
}
void Frames::event_func_17817()
{
    // event 1588_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1588_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (3))) goto event_1588_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (20))) goto event_1588_79_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(24);
        }
    }
    event_1588_79_end: ;
}
void Frames::event_func_17818()
{
    // event 1589_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1589_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (3))) goto event_1589_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (30))) goto event_1589_79_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(36);
        }
    }
    event_1589_79_end: ;
}
void Frames::event_func_17819()
{
    // event 1590_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1590_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (3))) goto event_1590_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (40))) goto event_1590_79_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1590_79_end: ;
}
void Frames::event_func_17820()
{
    // event 1591_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1591_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (3))) goto event_1591_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (50))) goto event_1591_79_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(15);
        }
    }
    event_1591_79_end: ;
}
void Frames::event_func_17821()
{
    // event 1592_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1592_79_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1592_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (24))) goto event_1592_79_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1592_79_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(0);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(36);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(24);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(0, 4);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(15);
        }
    }
    event_1592_79_end: ;
}
void Frames::event_func_17822()
{
    // event 1593_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1593_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (4))) goto event_1593_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) < (30))) goto event_1593_79_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 2);
    }
    event_1593_79_end: ;
}
void Frames::event_func_17823()
{
    // event 1594_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1594_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (4))) goto event_1594_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (30))) goto event_1594_79_end;
        media.play_id(SOUND_JETBOOST_2_61, -1, 1);
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(9);
        ((Active*)get_instance(npcserpentine_947_instances))->force_frame(4);
        ((Active*)get_instance(npcserpentine_947_instances))->restore_frame();
        ((Active*)get_instance(npcserpentine_947_instances))->set_visible(true);
    }
    event_1594_79_end: ;
}
void Frames::event_func_17824()
{
    // event 1595_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1595_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (4))) goto event_1595_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (30))) goto event_1595_79_end;
        ((Active*)get_instance(npcserpentine_947_instances))->set_x(((Active*)get_instance(npcserpentine_947_instances))->get_x()+8);
    }
    event_1595_79_end: ;
}
void Frames::event_func_17825()
{
    // event 1596_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1596_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (4))) goto event_1596_79_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_x()) > (frame_left()+30))) goto event_1596_79_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(15);
    }
    event_1596_79_end: ;
}
void Frames::event_func_17826()
{
    // event 1597_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1597_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (5))) goto event_1597_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (15))) goto event_1597_79_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(0);
    }
    event_1597_79_end: ;
}
void Frames::event_func_17827()
{
    // event 1598_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1598_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (5))) goto event_1598_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (30))) goto event_1598_79_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(5);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(npcserpentine_947_instances))->set_direction(28);
    }
    event_1598_79_end: ;
}
void Frames::event_func_17828()
{
    // event 1599_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1599_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (25))) goto event_1599_79_end;
        if (!((media.get_channel_position(-1 +20)) > (1200))) goto event_1599_79_end;
        ((Active*)get_instance(npcserpentine_947_instances))->set_direction(0);
    }
    event_1599_79_end: ;
}
void Frames::event_func_17829()
{
    // event 1600_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1600_79_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1600_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (25))) goto event_1600_79_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1600_79_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcserpentine_947_instances))->set_direction(0);
        ship1_1982_instances.clear_selection();
        for (ObjectIterator it(ship1_1982_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-100);
        }
        ship2_1985_instances.clear_selection();
        for (ObjectIterator it(ship2_1985_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-100);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(4, 3);
    }
    event_1600_79_end: ;
}
void Frames::event_func_17830()
{
    // event 1601_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1601_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (7))) goto event_1601_79_end;
        ((LayerObject*)get_instance(layerobject_10_instances))->set_x(5-1, ((LayerObject*)get_instance(layerobject_10_instances))->get_x(-1 + 5)+((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(4));
        ((LayerObject*)get_instance(layerobject_10_instances))->set_y(5-1, 0-get_max(0, (((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)-120)*0.2));
        ship1_1982_instances.clear_selection();
        for (ObjectIterator it(ship1_1982_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+1);
        }
        ship2_1985_instances.clear_selection();
        for (ObjectIterator it(ship2_1985_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+2);
        }
        for (ObjectIterator it(ship1_1982_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(ship2_1985_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(ship1_1982_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(frame_top()*0.97+50);
        }
        for (ObjectIterator it(ship2_1985_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(frame_top()*0.95+50);
        }
    }
    event_1601_79_end: ;
}
void Frames::event_func_17831()
{
    // event 1602_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1602_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (7))) goto event_1602_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (320))) goto event_1602_79_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(4, get_min(((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(4)+0.1, 6));
    }
    event_1602_79_end: ;
}
void Frames::event_func_17832()
{
    // event 1603_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1603_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (7))) goto event_1603_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (8))) goto event_1603_79_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)*0.05, 3));
    }
    event_1603_79_end: ;
}
void Frames::event_func_17833()
{
    // event 1604_79
    bool or_result_1604_79 = false;
    bool or_temp_result_1604_79_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto or_event_1604_79_0_end;
        ship2_1985_instances.clear_selection();
        for (ObjectIterator it(ship2_1985_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!ship2_1985_instances.has_selection()) goto or_event_1604_79_0_end;
        if (!((global_values->get(3)%math_helper%7) == (0))) goto or_event_1604_79_0_end;
        for (ObjectIterator it(ship2_1985_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (frame_right()))) { it.deselect(); continue; }
        }
        if (!ship2_1985_instances.has_selection()) goto or_event_1604_79_0_end;
        or_result_1604_79 = true;
        or_temp_result_1604_79_0 = true;
    }
    or_event_1604_79_0_end: ;
    ship2_1985_instances.clear_saved_selection();
    if (or_temp_result_1604_79_0) {
        ship2_1985_instances.save_selection();
    }
    // event 1604_79
    bool or_temp_result_1604_79_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto or_event_1604_79_1_end;
        ship2_1985_instances.clear_selection();
        for (ObjectIterator it(ship2_1985_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!ship2_1985_instances.has_selection()) goto or_event_1604_79_1_end;
        if (!((global_values->get(3)%math_helper%12) == (0))) goto or_event_1604_79_1_end;
        for (ObjectIterator it(ship2_1985_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (frame_right()))) { it.deselect(); continue; }
        }
        if (!ship2_1985_instances.has_selection()) goto or_event_1604_79_1_end;
        or_result_1604_79 = true;
        or_temp_result_1604_79_1 = true;
        or_event_1604_79_1_end: ;
        if (or_temp_result_1604_79_1) {
            ship2_1985_instances.save_selection();
        }
        if (!or_result_1604_79) goto or_final_or_event_1604_79_1_end;
        ship2_1985_instances.empty_selection();
        if (or_temp_result_1604_79_0 || or_temp_result_1604_79_1) {
            ship2_1985_instances.restore_selection();
        }
        FrameObject * single_instance_1604_79_0; single_instance_1604_79_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(ship2_1985_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shipbullet_1984(parent->x + -56, parent->y + 18), parent->layer);
                if (single_instance_1604_79_0 == NULL)
                    single_instance_1604_79_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1604_79_0))->set_x(((Active*)single_instance_1604_79_0)->get_x()+randrange(120));
        ((Active*)((Active*)single_instance_1604_79_0))->set_angle(30-randrange(61), 0);
    }
    or_final_or_event_1604_79_1_end: ;
}
void Frames::event_func_17834()
{
    // event 1605_79
    bool or_result_1605_79 = false;
    bool or_temp_result_1605_79_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto or_event_1605_79_0_end;
        ship2_1985_instances.clear_selection();
        for (ObjectIterator it(ship2_1985_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!ship2_1985_instances.has_selection()) goto or_event_1605_79_0_end;
        if (!((global_values->get(3)%math_helper%7) == (0))) goto or_event_1605_79_0_end;
        ship1_1982_instances.clear_selection();
        for (ObjectIterator it(ship1_1982_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (frame_right()))) { it.deselect(); continue; }
        }
        if (!ship1_1982_instances.has_selection()) goto or_event_1605_79_0_end;
        or_result_1605_79 = true;
        or_temp_result_1605_79_0 = true;
    }
    or_event_1605_79_0_end: ;
    ship2_1985_instances.clear_saved_selection();
    ship1_1982_instances.clear_saved_selection();
    if (or_temp_result_1605_79_0) {
        ship2_1985_instances.save_selection();
        ship1_1982_instances.save_selection();
    }
    // event 1605_79
    bool or_temp_result_1605_79_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto or_event_1605_79_1_end;
        ship2_1985_instances.clear_selection();
        for (ObjectIterator it(ship2_1985_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!ship2_1985_instances.has_selection()) goto or_event_1605_79_1_end;
        if (!((global_values->get(3)%math_helper%12) == (0))) goto or_event_1605_79_1_end;
        ship1_1982_instances.clear_selection();
        for (ObjectIterator it(ship1_1982_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (frame_right()))) { it.deselect(); continue; }
        }
        if (!ship1_1982_instances.has_selection()) goto or_event_1605_79_1_end;
        or_result_1605_79 = true;
        or_temp_result_1605_79_1 = true;
        or_event_1605_79_1_end: ;
        if (or_temp_result_1605_79_1) {
            ship2_1985_instances.save_selection();
            ship1_1982_instances.save_selection();
        }
        if (!or_result_1605_79) goto or_final_or_event_1605_79_1_end;
        ship2_1985_instances.empty_selection();
        ship1_1982_instances.empty_selection();
        if (or_temp_result_1605_79_0 || or_temp_result_1605_79_1) {
            ship2_1985_instances.restore_selection();
        }
        if (or_temp_result_1605_79_0 || or_temp_result_1605_79_1) {
            ship1_1982_instances.restore_selection();
        }
        FrameObject * single_instance_1605_79_0; single_instance_1605_79_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(ship1_1982_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shipbullet_1984(parent->x + -31, parent->y + 9), parent->layer);
                if (single_instance_1605_79_0 == NULL)
                    single_instance_1605_79_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1605_79_0))->set_x(((Active*)single_instance_1605_79_0)->get_x()+randrange(60));
        ((Active*)((Active*)single_instance_1605_79_0))->set_angle(30-randrange(61), 0);
        ((Active*)((Active*)single_instance_1605_79_0))->set_direction(1);
    }
    or_final_or_event_1605_79_1_end: ;
}
void Frames::event_func_17835()
{
    // event 1606_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1606_79_end;
        shipbullet_1984_instances.clear_selection();
        for (ObjectIterator it(shipbullet_1984_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) > (0))) { it.deselect(); continue; }
        }
        if (!shipbullet_1984_instances.has_selection()) goto event_1606_79_end;
        for (ObjectIterator it(shipbullet_1984_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+8-((Active*)*it)->get_direction()*4);
            ((Active*)*it)->alterables->values.add(0, 2-((Active*)*it)->get_direction()*0.5);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+sin_deg(((Active*)*it)->get_angle())*(4-((Active*)*it)->get_direction()*2));
        }
    }
    event_1606_79_end: ;
}
void Frames::event_func_17836()
{
    // event 1607_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1607_79_end;
        shipbullet_1984_instances.clear_selection();
        for (ObjectIterator it(shipbullet_1984_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (30))) { it.deselect(); continue; }
        }
        if (!shipbullet_1984_instances.has_selection()) goto event_1607_79_end;
        for (ObjectIterator it(shipbullet_1984_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1607_79_end: ;
}
void Frames::event_func_17837()
{
    // event 1608_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1608_79_end;
        shipbullet_1984_instances.clear_selection();
        for (ObjectIterator it(shipbullet_1984_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (frame_bottom()))) { it.deselect(); continue; }
        }
        if (!shipbullet_1984_instances.has_selection()) goto event_1608_79_end;
        for (ObjectIterator it(shipbullet_1984_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1608_79_end: ;
}
void Frames::event_func_17838()
{
    // event 1609_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1609_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (7))) goto event_1609_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (40))) goto event_1609_79_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(10);
        }
    }
    event_1609_79_end: ;
}
void Frames::event_func_17839()
{
    // event 1610_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1610_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (7))) goto event_1610_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (60))) goto event_1610_79_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(10);
        }
    }
    event_1610_79_end: ;
}
void Frames::event_func_17840()
{
    // event 1611_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1611_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (7))) goto event_1611_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (70))) goto event_1611_79_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(10);
        }
    }
    event_1611_79_end: ;
}
void Frames::event_func_17841()
{
    // event 1612_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1612_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (7))) goto event_1612_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (80))) goto event_1612_79_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->restore_frame();
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(7)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1612_79_end: ;
}
void Frames::event_func_17842()
{
    // event 1613_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1613_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (7))) goto event_1613_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (260))) goto event_1613_79_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(9);
        ((Active*)get_instance(npcserpentine_947_instances))->force_speed(0);
    }
    event_1613_79_end: ;
}
void Frames::event_func_17843()
{
    // event 1614_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1614_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (7))) goto event_1614_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (290))) goto event_1614_79_end;
        ((Active*)get_instance(npcserpentine_947_instances))->set_direction(8);
        ((Active*)get_instance(npcserpentine_947_instances))->force_frame(4);
        ((Active*)get_instance(npcserpentine_947_instances))->restore_speed();
        ((Active*)get_instance(npcserpentine_947_instances))->restore_frame();
        media.play_id(SOUND_JETBOOST_2_61, -1, 1);
        FrameObject * single_instance_1614_79_0; single_instance_1614_79_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(npcserpentine_947_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1614_79_0 == NULL)
                    single_instance_1614_79_0 = new_obj;
            }
        }
    }
    event_1614_79_end: ;
}
void Frames::event_func_17844()
{
    // event 1615_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1615_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (7))) goto event_1615_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (290))) goto event_1615_79_end;
        ((Active*)get_instance(npcserpentine_947_instances))->set_y(get_max(((Active*)get_instance(npcserpentine_947_instances))->get_y()-10, -50));
    }
    event_1615_79_end: ;
}
void Frames::event_func_17845()
{
    // event 1616_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1616_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (7))) goto event_1616_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (330))) goto event_1616_79_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 2);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1616_79_end: ;
}
void Frames::event_func_17846()
{
    // event 1617_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1617_79_end;
        if (!((global_values->get(27)) == (0))) goto event_1617_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (27))) goto event_1617_79_end;
        if (!media.is_channel_playing(20-1)) goto event_1617_79_end;
        if (!(!media.is_channel_playing(21-1))) goto event_1617_79_end;
        media.play(str_data_voices_88+global_strings->get(11)+str__89+mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 6, 2)+str__89+mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 6, 8)+str_ogg_90, 21-1);
        media.stop_channel(20-1);
    }
    event_1617_79_end: ;
}
void Frames::event_func_17847()
{
    // event 1618_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1618_79_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1618_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (27))) goto event_1618_79_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1618_79_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
    }
    event_1618_79_end: ;
}
void Frames::event_func_17848()
{
    // event 1619_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1619_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (7))) goto event_1619_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (390))) goto event_1619_79_end;
        placeholdercharacter_1588_instances.clear_selection();
        spread_value(placeholdercharacter_1588_instances, 0, 0);
        for (ObjectIterator it(placeholdercharacter_1588_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->values.get(0));
        }
        placeholdercharactertail_3891_instances.clear_selection();
        spread_value(placeholdercharactertail_3891_instances, 0, 0);
        for (ObjectIterator it(placeholdercharactertail_3891_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->values.get(0));
        }
    }
    event_1619_79_end: ;
}
void Frames::event_func_17849()
{
    // event 1620_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1620_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (7))) goto event_1620_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (390))) goto event_1620_79_end;
        placeholdercharacter_1588_instances.clear_selection();
        for (ObjectIterator it(placeholdercharacter_1588_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!placeholdercharacter_1588_instances.has_selection()) goto event_1620_79_end;
        for (ObjectIterator it(placeholdercharacter_1588_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerskincarol_445_instances, it.current_index));
            if (parent == NULL) goto pos_end_1620_79_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1620_79_0: ;
        }
    }
    event_1620_79_end: ;
}
void Frames::event_func_17850()
{
    // event 1621_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1621_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (7))) goto event_1621_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (390))) goto event_1621_79_end;
        placeholdercharactertail_3891_instances.clear_selection();
        for (ObjectIterator it(placeholdercharactertail_3891_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!placeholdercharactertail_3891_instances.has_selection()) goto event_1621_79_end;
        for (ObjectIterator it(placeholdercharactertail_3891_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerskincarol_445_instances, it.current_index));
            if (parent == NULL) goto pos_end_1621_79_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1621_79_0: ;
        }
    }
    event_1621_79_end: ;
}
void Frames::event_func_17851()
{
    // event 1622_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1622_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (7))) goto event_1622_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (390))) goto event_1622_79_end;
        placeholdercharacter_1588_instances.clear_selection();
        for (ObjectIterator it(placeholdercharacter_1588_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!placeholdercharacter_1588_instances.has_selection()) goto event_1622_79_end;
        for (ObjectIterator it(placeholdercharacter_1588_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerskinmilla_446_instances, it.current_index));
            if (parent == NULL) goto pos_end_1622_79_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1622_79_0: ;
        }
    }
    event_1622_79_end: ;
}
void Frames::event_func_17852()
{
    // event 1623_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1623_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (7))) goto event_1623_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (390))) goto event_1623_79_end;
        placeholdercharactertail_3891_instances.clear_selection();
        for (ObjectIterator it(placeholdercharactertail_3891_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!placeholdercharactertail_3891_instances.has_selection()) goto event_1623_79_end;
        for (ObjectIterator it(placeholdercharactertail_3891_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerskinmilla_446_instances, it.current_index));
            if (parent == NULL) goto pos_end_1623_79_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1623_79_0: ;
        }
    }
    event_1623_79_end: ;
}
void Frames::event_func_17853()
{
    // event 1624_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1624_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (7))) goto event_1624_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (390))) goto event_1624_79_end;
        placeholdercharacter_1588_instances.clear_selection();
        for (ObjectIterator it(placeholdercharacter_1588_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!placeholdercharacter_1588_instances.has_selection()) goto event_1624_79_end;
        for (ObjectIterator it(placeholdercharacter_1588_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerskintorque_450_instances, it.current_index));
            if (parent == NULL) goto pos_end_1624_79_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1624_79_0: ;
        }
    }
    event_1624_79_end: ;
}
void Frames::event_func_17854()
{
    // event 1625_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1625_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (7))) goto event_1625_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (390))) goto event_1625_79_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 0);
        {
            loop_start_player_running = true;
            int times = int(1);
            loop_start_player_index = 0;
            while (loop_start_player_index < times) {
                loop_start_player_13();
                if (!loop_start_player_running) break;
                loop_start_player_index++;
            }
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_y());
    }
    event_1625_79_end: ;
}
void Frames::event_func_17855()
{
    // event 1626_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1626_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (8))) goto event_1626_79_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+5, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-30));
    }
    event_1626_79_end: ;
}
void Frames::event_func_17856()
{
    // event 1627_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1627_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (8))) goto event_1627_79_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (0))) goto event_1627_79_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -8);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 1);
        {
            loop_sound_jump_running = true;
            int times = int(1);
            loop_sound_jump_index = 0;
            while (loop_sound_jump_index < times) {
                loop_sound_jump_13();
                if (!loop_sound_jump_running) break;
                loop_sound_jump_index++;
            }
        }
    }
    event_1627_79_end: ;
}
void Frames::event_func_17857()
{
    // event 1628_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1628_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (8))) goto event_1628_79_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (0))) goto event_1628_79_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) > (-1))) goto event_1628_79_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(13, 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 10*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11));
        }
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, 100);
        media.play_id(SOUND_LILAC_COMETSTART_9, 19-1);
        media.set_channel_volume(19-1, 50);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(16, -1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(4, 0);
    }
    event_1628_79_end: ;
}
void Frames::event_func_17858()
{
    // event 1629_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1629_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (9))) goto event_1629_79_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-30));
    }
    event_1629_79_end: ;
}
void Frames::event_func_17859()
{
    // event 1630_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1630_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (9))) goto event_1630_79_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1630_79_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(1, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 0);
    }
    event_1630_79_end: ;
}
void Frames::event_func_17860()
{
    // event 1631_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1631_79_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1631_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (28))) goto event_1631_79_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1631_79_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
    }
    event_1631_79_end: ;
}
void Frames::event_func_17861()
{
    // event 1632_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1632_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (9))) goto event_1632_79_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1632_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (0))) goto event_1632_79_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
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
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(7, 0);
    }
    event_1632_79_end: ;
}
void Frames::event_func_17862()
{
    // event 1633_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1633_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (10))) goto event_1633_79_end;
        if (!((playerskintorque_450_instances.size()) > (0))) goto event_1633_79_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_y(((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->set_x(frame_left()-100);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_y(((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->set_x(frame_left()-30);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_y(((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->set_x(frame_left()-60);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(21);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
    }
    event_1633_79_end: ;
}
void Frames::event_func_17863()
{
    // event 1634_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1634_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (11))) goto event_1634_79_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(playerskinsash_418_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->set_x(get_max(((Active*)*it)->get_x(), frame_left()-60));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(playerskinsash_418_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->set_x(get_max(((Active*)*it)->get_x(), frame_left()-100));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(playerskinsash_418_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->set_x(get_max(((Active*)*it)->get_x(), frame_left()-30));
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1634_79_end: ;
}
void Frames::event_func_17864()
{
    // event 1635_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1635_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (11))) goto event_1635_79_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()+50))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1635_79_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
    }
    event_1635_79_end: ;
}
void Frames::event_func_17865()
{
    // event 1636_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1636_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (11))) goto event_1636_79_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()+50))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1636_79_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->restore_speed();
        }
    }
    event_1636_79_end: ;
}
void Frames::event_func_17866()
{
    // event 1637_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1637_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (11))) goto event_1637_79_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()-80))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1637_79_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
    }
    event_1637_79_end: ;
}
void Frames::event_func_17867()
{
    // event 1638_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1638_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (11))) goto event_1638_79_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()-80))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1638_79_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->restore_speed();
        }
    }
    event_1638_79_end: ;
}
void Frames::event_func_17868()
{
    // event 1639_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1639_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (11))) goto event_1639_79_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()-40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1639_79_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
    }
    event_1639_79_end: ;
}
void Frames::event_func_17869()
{
    // event 1640_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1640_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (11))) goto event_1640_79_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()-40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1640_79_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->restore_speed();
        }
    }
    event_1640_79_end: ;
}
