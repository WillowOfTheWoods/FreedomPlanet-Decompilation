#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_18358()
{
    // event 1624_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1624_81_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1624_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (30))) goto event_1624_81_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1624_81_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.play_id(SOUND_SYNTAX_APPEAR_2_286, -1, 1);
        ((Active*)get_instance(npcsyntax_2519_instances))->set_x(((Active*)get_instance(brevon_3683_instances))->get_x()+80);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(10, ((Active*)get_instance(brevon_3683_instances))->get_y()-90);
        ((Active*)get_instance(npcsyntax_2519_instances))->force_animation(7);
    }
    event_1624_81_end: ;
}
void Frames::event_func_18359()
{
    // event 1625_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1625_81_end;
        if (((Active*)get_instance(npcsyntax_2519_instances))->test_animation(7)) goto event_1625_81_end;
        if (once_condition_1625_81) goto event_1625_81_end;
        once_condition_1625_81 = true;
        if (not_always_1625_81 > loop_count) {
            not_always_1625_81 = loop_count + 2;
            goto event_1625_81_end;
        }
        not_always_1625_81 = loop_count + 2;
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(14, -1);
    }
    event_1625_81_end: ;
}
void Frames::event_func_18360()
{
    // event 1626_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1626_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (32))) goto event_1626_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (20))) goto event_1626_81_end;
        ((Active*)get_instance(npclilactorture_3974_instances))->set_direction(2);
    }
    event_1626_81_end: ;
}
void Frames::event_func_18361()
{
    // event 1627_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1627_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (32))) goto event_1627_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_1627_81_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
    }
    event_1627_81_end: ;
}
void Frames::event_func_18362()
{
    // event 1628_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1628_81_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1628_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (31))) goto event_1628_81_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1628_81_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1628_81_end: ;
}
void Frames::event_func_18363()
{
    // event 1629_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1629_81_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1629_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (32))) goto event_1629_81_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1629_81_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_2000_69);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1629_81_end: ;
}
void Frames::event_func_18364()
{
    // event 1630_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1630_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (34))) goto event_1630_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (60))) goto event_1630_81_end;
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
            ((ArrayObject*)*it)->set_string(str_fadeout_music_1000_209);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1630_81_end: ;
}
void Frames::event_func_18365()
{
    // event 1631_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1631_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (34))) goto event_1631_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_1631_81_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1631_81_end: ;
}
void Frames::event_func_18366()
{
    // event 1632_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1632_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (34))) goto event_1632_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_1632_81_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1632_81_end;
        global_values->set(4, 1);
        next_frame = (index+1-0)-1 + 0;    
    
    }
    event_1632_81_end: ;
}
void Frames::event_func_18367()
{
    // event 1633_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1633_81_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->set_y(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(10)+sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(9))*8);
    }
    event_1633_81_end: ;
}
void Frames::event_func_18368()
{
    // event 1634_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1634_81_end;
        if (!(((Active*)get_instance(npcsyntax_2519_instances))->alterables->flags.is_off(1))) goto event_1634_81_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.add(3, 2);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.add(8, 2);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.add(9, 2);
    }
    event_1634_81_end: ;
}
void Frames::event_func_18369()
{
    // event 1635_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1635_81_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(11)) == (0))) goto event_1635_81_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->set_y(get_min(((Active*)get_instance(npcsyntax_2519_instances))->get_y(), 1765));
    }
    event_1635_81_end: ;
}
void Frames::event_func_18370()
{
    // event 1636_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1636_81_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(11)) == (0))) goto event_1636_81_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(14)) == (1))) goto event_1636_81_end;
        npcsyntaxleftarm_2517_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxleftarm_2517_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcsyntax_2519_instances))->get_action_x()+cos_deg(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*15)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(6)+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(4))*((Active*)*it)->alterables->values.get(0)*6);
            ((Active*)*it)->set_y(((Active*)get_instance(npcsyntax_2519_instances))->get_action_y()+sin_deg(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*15)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(6)+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(4))*((Active*)*it)->alterables->values.get(0)*6);
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*20)*(0-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(6)-((Active*)*it)->alterables->values.get(0)*4)-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(4), 0);
        }
        npcsyntaxrightarm_2518_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxrightarm_2518_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcsyntax_2519_instances))->get_action_x()+28+cos_deg(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(8)-((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(7)+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(5))*((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*6);
            ((Active*)*it)->set_y(((Active*)get_instance(npcsyntax_2519_instances))->get_action_y()-1+sin_deg(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(8)-((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(7)+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(5))*((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*6);
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(8)-((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*20)*(0-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(7)-((Active*)*it)->alterables->values.get(0)*4)-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(5), 0);
        }
        ((Active*)get_instance(npcsyntax_2519_instances))->set_direction(0);
        for (ObjectIterator it(npcsyntaxleftarm_2517_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(npcsyntaxrightarm_2518_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1636_81_end: ;
}
void Frames::event_func_18371()
{
    // event 1637_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1637_81_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(11)) == (0))) goto event_1637_81_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(14)) == (-1))) goto event_1637_81_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->set_direction(16);
        npcsyntaxleftarm_2517_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxleftarm_2517_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcsyntax_2519_instances))->get_action_x()-28+cos_deg(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*15)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(6)+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(4))*((Active*)*it)->alterables->values.get(0)*6);
            ((Active*)*it)->set_y(((Active*)get_instance(npcsyntax_2519_instances))->get_action_y()+sin_deg(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*15)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(6)+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(4))*((Active*)*it)->alterables->values.get(0)*6);
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*20)*(0-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(6)-((Active*)*it)->alterables->values.get(0)*4)-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(4), 0);
            ((Active*)*it)->set_direction(16);
        }
        npcsyntaxrightarm_2518_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxrightarm_2518_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcsyntax_2519_instances))->get_action_x()+cos_deg(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(8)-((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(7)+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(5))*((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*6);
            ((Active*)*it)->set_y(((Active*)get_instance(npcsyntax_2519_instances))->get_action_y()-1+sin_deg(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(8)-((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(7)+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(5))*((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*6);
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(8)-((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*20)*(0-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(7)-((Active*)*it)->alterables->values.get(0)*4)-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(5), 0);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1637_81_end: ;
}
void Frames::event_func_18372()
{
    // event 1638_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1638_81_end;
        npcsyntaxleftarm_2517_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxleftarm_2517_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (npcsyntaxleftarm_2517_instances.size()-1))) { it.deselect(); continue; }
        }
        if (!npcsyntaxleftarm_2517_instances.has_selection()) goto event_1638_81_end;
        for (ObjectIterator it(npcsyntaxleftarm_2517_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
        }
    }
    event_1638_81_end: ;
}
void Frames::event_func_18373()
{
    // event 1639_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1639_81_end;
        npcsyntaxrightarm_2518_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxrightarm_2518_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (npcsyntaxrightarm_2518_instances.size()-1))) { it.deselect(); continue; }
        }
        if (!npcsyntaxrightarm_2518_instances.has_selection()) goto event_1639_81_end;
        for (ObjectIterator it(npcsyntaxrightarm_2518_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
        }
    }
    event_1639_81_end: ;
}
void Frames::event_func_18374()
{
    // event 1641_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1641_81_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
    }
    event_1641_81_end: ;
}
void Frames::event_func_18375()
{
    // event 1643_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1643_81_end;
        {
            enemyelite_2510_instances.clear_selection();
            SavedSelection extra_enemyelite_2510_instances(enemyelite_2510_instances);
            for (SavedIterator it(extra_enemyelite_2510_instances); !it.end(); ++it) {
                foreach_instance_elite = ((Active*)*it);
                foreach_elite_81();
            }
        }
    }
    event_1643_81_end: ;
}
void Frames::event_func_18376()
{
    // event 1644_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1644_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) < (30))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1644_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 30);
        }
    }
    event_1644_81_end: ;
}
void Frames::event_func_18377()
{
    // event 1645_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1645_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) == (30))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1645_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, -1);
            ((Active*)*it)->alterables->values.add(10, 1);
        }
    }
    event_1645_81_end: ;
}
void Frames::event_func_18378()
{
    // event 1646_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1646_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1646_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 0-((Active*)*it)->alterables->values.get(13));
        }
    }
    event_1646_81_end: ;
}
void Frames::event_func_18379()
{
    // event 1647_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1647_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (-1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1647_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 0-((Active*)*it)->alterables->values.get(13));
        }
    }
    event_1647_81_end: ;
}
void Frames::event_func_18380()
{
    // event 1649_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1649_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-220))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+100))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1649_81_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1649_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 1);
        }
    }
    event_1649_81_end: ;
}
void Frames::event_func_18381()
{
    // event 1650_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1650_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+220))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+100))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1650_81_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1650_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 1);
        }
    }
    event_1650_81_end: ;
}
void Frames::event_func_18382()
{
    // event 1651_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1651_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1651_81_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1651_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 1);
        }
    }
    event_1651_81_end: ;
}
void Frames::event_func_18383()
{
    // event 1653_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1653_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1653_81_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (9))) goto event_1653_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 0);
        }
    }
    event_1653_81_end: ;
}
void Frames::event_func_18384()
{
    // event 1654_81
    bool or_result_1654_81 = false;
    bool or_temp_result_1654_81_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto or_event_1654_81_0_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(21)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1654_81_0_end;
        or_result_1654_81 = true;
        or_temp_result_1654_81_0 = true;
    }
    or_event_1654_81_0_end: ;
    enemyelitemask_2511_instances.clear_saved_selection();
    if (or_temp_result_1654_81_0) {
        enemyelitemask_2511_instances.save_selection();
    }
    // event 1654_81
    bool or_temp_result_1654_81_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto or_event_1654_81_1_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()-200))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1654_81_1_end;
        or_result_1654_81 = true;
        or_temp_result_1654_81_1 = true;
    }
    or_event_1654_81_1_end: ;
    if (or_temp_result_1654_81_1) {
        enemyelitemask_2511_instances.save_selection();
    }
    // event 1654_81
    bool or_temp_result_1654_81_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto or_event_1654_81_2_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()+200))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1654_81_2_end;
        or_result_1654_81 = true;
        or_temp_result_1654_81_2 = true;
        or_event_1654_81_2_end: ;
        if (or_temp_result_1654_81_2) {
            enemyelitemask_2511_instances.save_selection();
        }
        if (!or_result_1654_81) goto or_final_or_event_1654_81_2_end;
        enemyelitemask_2511_instances.empty_selection();
        if (or_temp_result_1654_81_0 || or_temp_result_1654_81_1 || or_temp_result_1654_81_2) {
            enemyelitemask_2511_instances.restore_selection();
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(21, ((Active*)get_instance(player_389_instances, it.current_index, default_active_instance))->get_x());
        }
    }
    or_final_or_event_1654_81_2_end: ;
}
void Frames::event_func_18385()
{
    // event 1655_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1655_81_end;
        if (!((global_values->get(3)%math_helper%20) == (((Active*)get_instance(enemyelite_2510_instances))->get_fixed().get_uint()%math_helper%20))) goto event_1655_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)*it)->alterables->values.get(21)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)*it)->alterables->values.get(21)+60))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1655_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 1);
        }
    }
    event_1655_81_end: ;
}
void Frames::event_func_18386()
{
    // event 1656_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1656_81_end;
        if (!((global_values->get(3)%math_helper%20) == (((Active*)get_instance(enemyelite_2510_instances))->get_fixed().get_uint()%math_helper%20))) goto event_1656_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)*it)->alterables->values.get(21)+80))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1656_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, -1);
        }
    }
    event_1656_81_end: ;
}
void Frames::event_func_18387()
{
    // event 1657_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1657_81_end;
        if (!((global_values->get(3)%math_helper%20) == (((Active*)get_instance(enemyelite_2510_instances))->get_fixed().get_uint()%math_helper%20))) goto event_1657_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)*it)->alterables->values.get(21)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)*it)->alterables->values.get(21)-60))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1657_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, -1);
        }
    }
    event_1657_81_end: ;
}
void Frames::event_func_18388()
{
    // event 1658_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1658_81_end;
        if (!((global_values->get(3)%math_helper%20) == (((Active*)get_instance(enemyelite_2510_instances))->get_fixed().get_uint()%math_helper%20))) goto event_1658_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)*it)->alterables->values.get(21)-80))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1658_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 1);
        }
    }
    event_1658_81_end: ;
}
void Frames::event_func_18389()
{
    // event 1659_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1659_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(17)) < (21))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1659_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 1);
            ((Active*)*it)->alterables->values.add(17, 10);
        }
    }
    event_1659_81_end: ;
}
void Frames::event_func_18390()
{
    // event 1660_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1660_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (-1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(17)) < (21))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1660_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 1);
            ((Active*)*it)->alterables->values.add(17, 10);
        }
    }
    event_1660_81_end: ;
}
void Frames::event_func_18391()
{
    // event 1661_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1661_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(17)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1661_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(17, 1);
        }
    }
    event_1661_81_end: ;
}
void Frames::event_func_18392()
{
    // event 1662_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1662_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(17)) >= (21))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1662_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(17, 0);
            ((Active*)*it)->alterables->values.set(13, 0-((Active*)*it)->alterables->values.get(13));
            ((Active*)*it)->alterables->values.set(14, 0);
            ((Active*)*it)->alterables->values.set(16, 0);
        }
    }
    event_1662_81_end: ;
}
void Frames::event_func_18393()
{
    // event 1663_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1663_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (-1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(17)) >= (21))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1663_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(17, 0);
            ((Active*)*it)->alterables->values.set(13, 0-((Active*)*it)->alterables->values.get(13));
            ((Active*)*it)->alterables->values.set(14, 0);
            ((Active*)*it)->alterables->values.set(16, 0);
        }
    }
    event_1663_81_end: ;
}
void Frames::event_func_18394()
{
    // event 1664_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1664_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-120))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+120))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+120))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1664_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(19, 1);
        }
    }
    event_1664_81_end: ;
}
void Frames::event_func_18395()
{
    // event 1665_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1665_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(19)) > (30))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1665_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(19, -70);
            ((Active*)*it)->alterables->values.set(15, 1);
        }
    }
    event_1665_81_end: ;
}
void Frames::event_func_18396()
{
    // event 1666_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1666_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(19)) < (-60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1666_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, -1);
        }
    }
    event_1666_81_end: ;
}
void Frames::event_func_18397()
{
    // event 1667_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1667_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(19)) < (-60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1667_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
        }
    }
    event_1667_81_end: ;
}
void Frames::event_func_18398()
{
    // event 1668_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1668_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1668_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(19, 1);
        }
    }
    event_1668_81_end: ;
}
void Frames::event_func_18399()
{
    // event 1669_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1669_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(19)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1669_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(15, 0);
        }
    }
    event_1669_81_end: ;
}
void Frames::event_func_18400()
{
    // event 1670_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1670_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (3))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1670_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7)+0.4, 2));
            ((Active*)*it)->alterables->values.set(4, 1);
        }
    }
    event_1670_81_end: ;
}
void Frames::event_func_18401()
{
    // event 1671_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1671_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (3))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1671_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-0.4, -2));
            ((Active*)*it)->alterables->values.set(4, -1);
        }
    }
    event_1671_81_end: ;
}
void Frames::event_func_18402()
{
    // event 1672_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1672_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (3))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1672_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7)+0.4, 5));
            ((Active*)*it)->alterables->values.set(4, 1);
        }
    }
    event_1672_81_end: ;
}
void Frames::event_func_18403()
{
    // event 1673_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1673_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (3))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1673_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-0.4, -5));
            ((Active*)*it)->alterables->values.set(4, -1);
        }
    }
    event_1673_81_end: ;
}
void Frames::event_func_18404()
{
    // event 1674_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1674_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) != (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (3))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1674_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-0.4, 0));
        }
    }
    event_1674_81_end: ;
}
void Frames::event_func_18405()
{
    // event 1675_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1675_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) != (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (3))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1675_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7)+0.4, 0));
        }
    }
    event_1675_81_end: ;
}
void Frames::event_func_18406()
{
    // event 1676_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1676_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1676_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    event_1676_81_end: ;
}
void Frames::event_func_18407()
{
    // event 1677_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1677_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) != (1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1677_81_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) > (3))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1677_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 2);
            ((Active*)*it)->alterables->values.set(10, 0);
        }
    }
    event_1677_81_end: ;
}
void Frames::event_func_18408()
{
    // event 1678_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1678_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1678_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
    }
    event_1678_81_end: ;
}
void Frames::event_func_18409()
{
    // event 1679_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1679_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) > (6))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1679_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(21, 0);
        }
    }
    event_1679_81_end: ;
}
void Frames::event_func_18410()
{
    // event 1680_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1680_81_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1680_81_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->values.get(3));
        }
    }
    event_1680_81_end: ;
}
void Frames::event_func_18411()
{
    // event 1681_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1681_81_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1681_81_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16+((Active*)*it)->alterables->values.get(3));
        }
    }
    event_1681_81_end: ;
}
void Frames::event_func_18412()
{
    // event 1682_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1682_81_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1682_81_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1682_81_end: ;
}
void Frames::event_func_18413()
{
    // event 1685_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1685_81_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1685_81_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1685_81_end: ;
}
void Frames::event_func_18414()
{
    // event 1686_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1686_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1686_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1686_81_end: ;
}
void Frames::event_func_18415()
{
    // event 1687_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1687_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1687_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
    }
    event_1687_81_end: ;
}
void Frames::event_func_18416()
{
    // event 1688_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1688_81_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(12)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(10)) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1688_81_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    event_1688_81_end: ;
}
void Frames::event_func_18417()
{
    // event 1689_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1689_81_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(12)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (2))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1689_81_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1689_81_end: ;
}
void Frames::event_func_18418()
{
    // event 1690_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1690_81_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1690_81_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        FrameObject * single_instance_1690_81_0; single_instance_1690_81_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelite_2510_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyelitechargeglow_2507(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1690_81_0 == NULL)
                    single_instance_1690_81_0 = new_obj;
            }
        }
    }
    event_1690_81_end: ;
}
void Frames::event_func_18419()
{
    // event 1691_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1691_81_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(12)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (25))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1691_81_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(12);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    event_1691_81_end: ;
}
void Frames::event_func_18420()
{
    // event 1692_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1692_81_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1692_81_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
    }
    event_1692_81_end: ;
}
void Frames::event_func_18421()
{
    // event 1693_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1693_81_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-2))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1693_81_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1693_81_end: ;
}
void Frames::event_func_18422()
{
    // event 1694_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1694_81_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1694_81_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1694_81_end: ;
}
void Frames::event_func_18423()
{
    // event 1695_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1695_81_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1695_81_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(13);
            ((Active*)*it)->restore_speed();
        }
    }
    event_1695_81_end: ;
}
void Frames::event_func_18424()
{
    // event 1696_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1696_81_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) != (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (3))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1696_81_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
    }
    event_1696_81_end: ;
}
void Frames::event_func_18425()
{
    // event 1697_81
    bool or_result_1697_81 = false;
    bool or_temp_result_1697_81_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto or_event_1697_81_0_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto or_event_1697_81_0_end;
        or_result_1697_81 = true;
        or_temp_result_1697_81_0 = true;
    }
    or_event_1697_81_0_end: ;
    enemyelite_2510_instances.clear_saved_selection();
    if (or_temp_result_1697_81_0) {
        enemyelite_2510_instances.save_selection();
    }
    // event 1697_81
    bool or_temp_result_1697_81_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto or_event_1697_81_1_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto or_event_1697_81_1_end;
        or_result_1697_81 = true;
        or_temp_result_1697_81_1 = true;
        or_event_1697_81_1_end: ;
        if (or_temp_result_1697_81_1) {
            enemyelite_2510_instances.save_selection();
        }
        if (!or_result_1697_81) goto or_final_or_event_1697_81_1_end;
        enemyelite_2510_instances.empty_selection();
        if (or_temp_result_1697_81_0 || or_temp_result_1697_81_1) {
            enemyelite_2510_instances.restore_selection();
        }
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
    }
    or_final_or_event_1697_81_1_end: ;
}
void Frames::event_func_18426()
{
    // event 1698_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1698_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1698_81_end;
        media.play_id(SOUND_JUMP_T_2_233, -1, 1);
    }
    event_1698_81_end: ;
}
void Frames::event_func_18427()
{
    // event 1699_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1699_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1699_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -1);
            ((Active*)*it)->alterables->values.set(8, -10);
        }
        FrameObject * single_instance_1699_81_0; single_instance_1699_81_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1699_81_0 == NULL)
                    single_instance_1699_81_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1699_81_0))->move_back();
        ((Active*)((Active*)single_instance_1699_81_0))->set_y_scale(0.25);
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 0);
        }
    }
    event_1699_81_end: ;
}
void Frames::event_func_18428()
{
    // event 1700_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1700_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) > (16))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1700_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -1);
        }
    }
    event_1700_81_end: ;
}
void Frames::event_func_18429()
{
    // event 1701_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1701_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (-2))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1701_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, get_min(((Active*)*it)->alterables->values.get(8)+0.5, 15));
        }
    }
    event_1701_81_end: ;
}
void Frames::event_func_18430()
{
    // event 1702_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1702_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (-2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1702_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, get_max(0, ((Active*)*it)->alterables->values.get(8)));
        }
    }
    event_1702_81_end: ;
}
void Frames::event_func_18431()
{
    // event 1703_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1703_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1703_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1703_81_end: ;
}
void Frames::event_func_18432()
{
    // event 1704_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1704_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (3))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1704_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -2);
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->alterables->values.get(4)+((Active*)*it)->alterables->values.get(23));
            ((Active*)*it)->alterables->values.set(8, -1+((Active*)*it)->alterables->values.get(24));
            ((Active*)*it)->alterables->values.sub(6, 12);
            ((Active*)*it)->alterables->values.set(2, 0);
        }
    }
    event_1704_81_end: ;
}
void Frames::event_func_18433()
{
    // event 1705_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1705_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(20)) >= (1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1705_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 6);
        }
    }
    event_1705_81_end: ;
}
void Frames::event_func_18434()
{
    // event 1706_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1706_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1706_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, -3);
            ((Active*)*it)->alterables->values.add(12, 1);
            ((Active*)*it)->alterables->values.add(20, 1);
        }
    }
    event_1706_81_end: ;
}
void Frames::event_func_18435()
{
    // event 1707_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1707_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) >= (1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1707_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 0);
            ((Active*)*it)->alterables->values.set(3, 3);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    event_1707_81_end: ;
}
void Frames::event_func_18436()
{
    // event 1708_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1708_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1708_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 1);
        }
    }
    event_1708_81_end: ;
}
void Frames::event_func_18437()
{
    // event 1709_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1709_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (20))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1709_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 4);
            ((Active*)*it)->alterables->values.set(12, 0);
        }
    }
    event_1709_81_end: ;
}
void Frames::event_func_18438()
{
    // event 1710_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1710_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1710_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 1);
        }
    }
    event_1710_81_end: ;
}
void Frames::event_func_18439()
{
    // event 1711_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1711_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (22))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1711_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->flags.disable(6);
            ((Active*)*it)->alterables->values.set(0, 20);
        }
    }
    event_1711_81_end: ;
}
void Frames::event_func_18440()
{
    // event 1712_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1712_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (3))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1712_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
        }
    }
    event_1712_81_end: ;
}
void Frames::event_func_18441()
{
    // event 1713_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1713_81_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (1))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1713_81_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1713_81_end: ;
}
void Frames::event_func_18442()
{
    // event 1715_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1715_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(1);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+1);
            ((Active*)*it)->alterables->flags.disable(4);
        }
    }
    event_1715_81_end: ;
}
void Frames::event_func_18443()
{
    // event 1716_81
    bool or_result_1716_81 = false;
    bool or_temp_result_1716_81_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto or_event_1716_81_0_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1716_81_0_end;
        or_result_1716_81 = true;
        or_temp_result_1716_81_0 = true;
    }
    or_event_1716_81_0_end: ;
    enemyelitemask_2511_instances.clear_saved_selection();
    if (or_temp_result_1716_81_0) {
        enemyelitemask_2511_instances.save_selection();
    }
    // event 1716_81
    bool or_temp_result_1716_81_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto or_event_1716_81_1_end;
        enemyelitemask_2511_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(enemyelitemask_2511_instances, qualifier_7)) goto or_event_1716_81_1_end;
        or_result_1716_81 = true;
        or_temp_result_1716_81_1 = true;
    }
    or_event_1716_81_1_end: ;
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1716_81_1) {
        enemyelitemask_2511_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1716_81
    bool or_temp_result_1716_81_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto or_event_1716_81_2_end;
        enemyelitemask_2511_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(enemyelitemask_2511_instances, qualifier_8)) goto or_event_1716_81_2_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_single(qualifier_8, default_active_instance))->get_y()))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1716_81_2_end;
        or_result_1716_81 = true;
        or_temp_result_1716_81_2 = true;
        or_event_1716_81_2_end: ;
        qualifier_8.clear_saved_selection();
        if (or_temp_result_1716_81_2) {
            enemyelitemask_2511_instances.save_selection();
            qualifier_8.save_selection();
        }
        if (!or_result_1716_81) goto or_final_or_event_1716_81_2_end;
        qualifier_8.empty_selection();
        qualifier_7.empty_selection();
        enemyelitemask_2511_instances.empty_selection();
        if (or_temp_result_1716_81_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1716_81_2) {
            qualifier_8.restore_selection();
        }
        if (or_temp_result_1716_81_0 || or_temp_result_1716_81_1 || or_temp_result_1716_81_2) {
            enemyelitemask_2511_instances.restore_selection();
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
            ((Active*)*it)->alterables->values.sub(6, 1);
            ((Active*)*it)->alterables->flags.enable(4);
            ((Active*)*it)->alterables->values.set(11, 0);
        }
    }
    or_final_or_event_1716_81_2_end: ;
}
void Frames::event_func_18444()
{
    // event 1717_81
    bool or_result_1717_81 = false;
    bool or_temp_result_1717_81_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto or_event_1717_81_0_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1717_81_0_end;
        or_result_1717_81 = true;
        or_temp_result_1717_81_0 = true;
    }
    or_event_1717_81_0_end: ;
    enemyelitemask_2511_instances.clear_saved_selection();
    if (or_temp_result_1717_81_0) {
        enemyelitemask_2511_instances.save_selection();
    }
    // event 1717_81
    bool or_temp_result_1717_81_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto or_event_1717_81_1_end;
        enemyelitemask_2511_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(enemyelitemask_2511_instances, qualifier_7)) goto or_event_1717_81_1_end;
        or_result_1717_81 = true;
        or_temp_result_1717_81_1 = true;
    }
    or_event_1717_81_1_end: ;
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1717_81_1) {
        enemyelitemask_2511_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1717_81
    bool or_temp_result_1717_81_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto or_event_1717_81_2_end;
        enemyelitemask_2511_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(enemyelitemask_2511_instances, qualifier_8)) goto or_event_1717_81_2_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_single(qualifier_8, default_active_instance))->get_y()))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1717_81_2_end;
        or_result_1717_81 = true;
        or_temp_result_1717_81_2 = true;
        or_event_1717_81_2_end: ;
        qualifier_8.clear_saved_selection();
        if (or_temp_result_1717_81_2) {
            enemyelitemask_2511_instances.save_selection();
            qualifier_8.save_selection();
        }
        if (!or_result_1717_81) goto or_final_or_event_1717_81_2_end;
        qualifier_8.empty_selection();
        qualifier_7.empty_selection();
        enemyelitemask_2511_instances.empty_selection();
        if (or_temp_result_1717_81_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1717_81_2) {
            qualifier_8.restore_selection();
        }
        if (or_temp_result_1717_81_0 || or_temp_result_1717_81_1 || or_temp_result_1717_81_2) {
            enemyelitemask_2511_instances.restore_selection();
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
            ((Active*)*it)->alterables->values.sub(6, 1);
        }
    }
    or_final_or_event_1717_81_2_end: ;
}
void Frames::event_func_18445()
{
    // event 1720_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1720_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1720_81_end;
        if (!check_not_overlap(enemyelitemask_2511_instances, qualifier_7)) goto event_1720_81_end;
        if (!check_not_overlap(enemyelitemask_2511_instances, qualifier_8)) goto event_1720_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+1);
            ((Active*)*it)->alterables->values.add(6, 1);
            ((Active*)*it)->alterables->values.add(11, 1);
        }
    }
    event_1720_81_end: ;
}
void Frames::event_func_18446()
{
    // event 1724_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1724_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(2);
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1724_81_end: ;
}
void Frames::event_func_18447()
{
    // event 1725_81
    bool or_result_1725_81 = false;
    bool or_temp_result_1725_81_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto or_event_1725_81_0_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1725_81_0_end;
        or_result_1725_81 = true;
        or_temp_result_1725_81_0 = true;
    }
    or_event_1725_81_0_end: ;
    enemyelitemask_2511_instances.clear_saved_selection();
    if (or_temp_result_1725_81_0) {
        enemyelitemask_2511_instances.save_selection();
    }
    // event 1725_81
    bool or_temp_result_1725_81_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto or_event_1725_81_1_end;
        enemyelitemask_2511_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(enemyelitemask_2511_instances, qualifier_7)) goto or_event_1725_81_1_end;
        or_result_1725_81 = true;
        or_temp_result_1725_81_1 = true;
        or_event_1725_81_1_end: ;
        qualifier_7.clear_saved_selection();
        if (or_temp_result_1725_81_1) {
            enemyelitemask_2511_instances.save_selection();
            qualifier_7.save_selection();
        }
        if (!or_result_1725_81) goto or_final_or_event_1725_81_1_end;
        qualifier_7.empty_selection();
        enemyelitemask_2511_instances.empty_selection();
        if (or_temp_result_1725_81_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1725_81_0 || or_temp_result_1725_81_1) {
            enemyelitemask_2511_instances.restore_selection();
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7), 0));
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    or_final_or_event_1725_81_1_end: ;
}
void Frames::event_func_18448()
{
    // event 1726_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1726_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(3);
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1726_81_end: ;
}
void Frames::event_func_18449()
{
    // event 1727_81
    bool or_result_1727_81 = false;
    bool or_temp_result_1727_81_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto or_event_1727_81_0_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1727_81_0_end;
        or_result_1727_81 = true;
        or_temp_result_1727_81_0 = true;
    }
    or_event_1727_81_0_end: ;
    enemyelitemask_2511_instances.clear_saved_selection();
    if (or_temp_result_1727_81_0) {
        enemyelitemask_2511_instances.save_selection();
    }
    // event 1727_81
    bool or_temp_result_1727_81_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto or_event_1727_81_1_end;
        enemyelitemask_2511_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(enemyelitemask_2511_instances, qualifier_7)) goto or_event_1727_81_1_end;
        or_result_1727_81 = true;
        or_temp_result_1727_81_1 = true;
        or_event_1727_81_1_end: ;
        qualifier_7.clear_saved_selection();
        if (or_temp_result_1727_81_1) {
            enemyelitemask_2511_instances.save_selection();
            qualifier_7.save_selection();
        }
        if (!or_result_1727_81) goto or_final_or_event_1727_81_1_end;
        qualifier_7.empty_selection();
        enemyelitemask_2511_instances.empty_selection();
        if (or_temp_result_1727_81_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1727_81_0 || or_temp_result_1727_81_1) {
            enemyelitemask_2511_instances.restore_selection();
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7), 0));
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    or_final_or_event_1727_81_1_end: ;
}
void Frames::event_func_18450()
{
    // event 1728_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1728_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(4);
            ((Active*)*it)->alterables->flags.disable(3);
        }
    }
    event_1728_81_end: ;
}
void Frames::event_func_18451()
{
    // event 1729_81
    bool or_result_1729_81 = false;
    bool or_temp_result_1729_81_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto or_event_1729_81_0_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1729_81_0_end;
        or_result_1729_81 = true;
        or_temp_result_1729_81_0 = true;
    }
    or_event_1729_81_0_end: ;
    enemyelitemask_2511_instances.clear_saved_selection();
    if (or_temp_result_1729_81_0) {
        enemyelitemask_2511_instances.save_selection();
    }
    // event 1729_81
    bool or_temp_result_1729_81_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto or_event_1729_81_1_end;
        enemyelitemask_2511_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(enemyelitemask_2511_instances, qualifier_7)) goto or_event_1729_81_1_end;
        or_result_1729_81 = true;
        or_temp_result_1729_81_1 = true;
        or_event_1729_81_1_end: ;
        qualifier_7.clear_saved_selection();
        if (or_temp_result_1729_81_1) {
            enemyelitemask_2511_instances.save_selection();
            qualifier_7.save_selection();
        }
        if (!or_result_1729_81) goto or_final_or_event_1729_81_1_end;
        qualifier_7.empty_selection();
        enemyelitemask_2511_instances.empty_selection();
        if (or_temp_result_1729_81_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1729_81_0 || or_temp_result_1729_81_1) {
            enemyelitemask_2511_instances.restore_selection();
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    or_final_or_event_1729_81_1_end: ;
}
void Frames::event_func_18452()
{
    // event 1730_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1730_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
            ((Active*)*it)->force_direction(0);
        }
    }
    event_1730_81_end: ;
}
void Frames::event_func_18453()
{
    // event 1731_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1731_81_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(enemyelitemask_2511_instances, it.current_index));
            if (parent == NULL) goto pos_end_1731_81_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1731_81_0: ;
        }
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(enemyelitemask_2511_instances, it.current_index, default_active_instance))->alterables->values.get(3));
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(enemyelitemask_2511_instances, it.current_index, default_active_instance))->alterables->values.get(4));
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(enemyelitemask_2511_instances, it.current_index, default_active_instance))->alterables->values.get(7));
        }
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, ((Active*)*it)->alterables->values.get(7));
            ((Active*)*it)->alterables->values.add(6, ((Active*)*it)->alterables->values.get(8));
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(6));
        }
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_single(enemyelitemask_2511_instances, it.current_index, default_active_instance))->alterables->values.get(9));
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_single(enemyelitemask_2511_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, get_min(get_max(0, ((Active*)*it)->alterables->values.get(5)), width));
        }
    }
    event_1731_81_end: ;
}
void Frames::event_func_18454()
{
    // event 1732_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1732_81_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1732_81_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1732_81_end: ;
}
void Frames::event_func_18455()
{
    // event 1733_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1733_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1733_81_end;
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        FrameObject * single_instance_1733_81_0; single_instance_1733_81_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1733_81_0 == NULL)
                    single_instance_1733_81_0 = new_obj;
            }
        }
        FrameObject * single_instance_1733_81_1; single_instance_1733_81_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1733_81_1 == NULL)
                    single_instance_1733_81_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
            ((Active*)*it)->alterables->flags.enable(11);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_81();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1733_81_end: ;
}
void Frames::event_func_18456()
{
    // event 1735_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1735_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1735_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1735_81_end: ;
}
void Frames::event_func_18457()
{
    // event 1736_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1736_81_end;
        enemyelitechargeglow_2507_instances.clear_selection();
        for (ObjectIterator it(enemyelitechargeglow_2507_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!enemyelitechargeglow_2507_instances.has_selection()) goto event_1736_81_end;
        for (ObjectIterator it(enemyelitechargeglow_2507_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        for (ObjectIterator it(enemyelitechargeglow_2507_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        media.play_id(SOUND_COMMON_CHARGE1_191, -1, 1);
    }
    event_1736_81_end: ;
}
