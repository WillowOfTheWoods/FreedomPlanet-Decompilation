#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_15432()
{
    // event 1609_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_conversation_1)) goto event_1609_72_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1609_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (3))) goto event_1609_72_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1609_72_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox2_567_instances))->set_visible(false);
            group_main_engine_level_specific_methods_cutscenes_brevon_conversation_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_approach_brevon_1) {
            group_main_engine_level_specific_methods_cutscenes_approach_brevon_1 = true;
        }
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 58);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_visible(false);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.enable(2);
    }
    event_1609_72_end: ;
}
void Frames::event_func_15433()
{
    // event 1610_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_restore_hud_and_star_background_1)) goto event_1610_72_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(4, 1);
    }
    event_1610_72_end: ;
}
void Frames::event_func_15434()
{
    // event 1611_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_restore_hud_and_star_background_1)) goto event_1611_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) <= (40))) goto event_1611_72_end;
        {
            loop_gui_shiftdown_running = true;
            int times = int(1);
            loop_gui_shiftdown_index = 0;
            while (loop_gui_shiftdown_index < times) {
                loop_gui_shiftdown_14();
                if (!loop_gui_shiftdown_running) break;
                loop_gui_shiftdown_index++;
            }
        }
    }
    event_1611_72_end: ;
}
void Frames::event_func_15435()
{
    // event 1612_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_restore_hud_and_star_background_1)) goto event_1612_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (1))) goto event_1612_72_end;
        levelcardfade_461_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade_461(0, 0), 2);
            levelcardfade_461_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
            ((Active*)*it)->move_back();
            ((Active*)*it)->set_direction(8);
        }
        media.play_id(SOUND_DARKSURGE_395, -1, 1);
    }
    event_1612_72_end: ;
}
void Frames::event_func_15436()
{
    // event 1613_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_restore_hud_and_star_background_1)) goto event_1613_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (0))) goto event_1613_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (70))) goto event_1613_72_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()-2);
        }
    }
    event_1613_72_end: ;
}
void Frames::event_func_15437()
{
    // event 1614_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_restore_hud_and_star_background_1)) goto event_1614_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (70))) goto event_1614_72_end;
        ((SystemBox*)get_instance(parallaxspaceback_3755_instances))->set_visible(true);
        ((SystemBox*)get_instance(parallaxspaceback2_3756_instances))->set_visible(true);
        ((SystemBox*)get_instance(parallaxspaceback3_3757_instances))->set_visible(true);
    }
    event_1614_72_end: ;
}
void Frames::event_func_15438()
{
    // event 1615_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_restore_hud_and_star_background_1)) goto event_1615_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (70))) goto event_1615_72_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+2);
        }
    }
    event_1615_72_end: ;
}
void Frames::event_func_15439()
{
    // event 1616_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_restore_hud_and_star_background_1)) goto event_1616_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (135))) goto event_1616_72_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 0);
            group_main_engine_level_specific_methods_cutscenes_restore_hud_and_star_background_1 = false;
    
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(3, 0);
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1616_72_end: ;
}
void Frames::event_func_15440()
{
    // event 1618_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mech_defeated_1)) goto event_1618_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (0))) goto event_1618_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (((Active*)get_instance(kingdomstone_1587_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1618_72_end;
        if (!((global_values->get(1)) == (4))) goto event_1618_72_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_5000_251);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1618_72_end: ;
}
void Frames::event_func_15441()
{
    // event 1619_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mech_defeated_1)) goto event_1619_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (0))) goto event_1619_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (((Active*)get_instance(kingdomstone_1587_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1619_72_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 0);
        media.play_id(SOUND_BREVONMECH_BEAMDOWN_396, -1, 1);
    }
    event_1619_72_end: ;
}
void Frames::event_func_15442()
{
    // event 1620_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mech_defeated_1)) goto event_1620_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1620_72_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(4, 1);
        bosstractorbeam_3759_instances.clear_selection();
        for (ObjectIterator it(bosstractorbeam_3759_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechabdomen_2540_instances, it.current_index));
            if (parent == NULL) goto pos_end_1620_72_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1620_72_0: ;
        }
        for (ObjectIterator it(bosstractorbeam_3759_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y_scale(30);
            ((Active*)*it)->set_x_scale(get_min(((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)*0.05, 1));
        }
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
    }
    event_1620_72_end: ;
}
void Frames::event_func_15443()
{
    // event 1621_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mech_defeated_1)) goto event_1621_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1621_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (60))) goto event_1621_72_end;
        {
            FrameObject * parent = ((Active*)get_instance(brevonmechabdomen_2540_instances));
            if (parent == NULL) goto pos_end_1621_72_0;
            ((Active*)get_instance(brevon_3683_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 32);
            pos_end_1621_72_0: ;
        }
        ((Active*)get_instance(brevon_3683_instances))->set_visible(true);
        ((Active*)get_instance(brevon_3683_instances))->force_animation(7);
        ((Active*)get_instance(brevon_3683_instances))->restore_speed();
        ((Active*)get_instance(brevon_3683_instances))->set_direction(get_direction_int(((Active*)get_instance(brevon_3683_instances))->x, ((Active*)get_instance(brevon_3683_instances))->y, ((Active*)get_instance(brevonmechtorso_2543_instances))->x + 0, ((Active*)get_instance(brevonmechtorso_2543_instances))->y + 0));
        ((Active*)get_instance(brevon_3683_instances))->move_back();
    }
    event_1621_72_end: ;
}
void Frames::event_func_15444()
{
    // event 1622_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mech_defeated_1)) goto event_1622_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1622_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (60))) goto event_1622_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (180))) goto event_1622_72_end;
        ((Active*)get_instance(brevon_3683_instances))->set_y(((Active*)get_instance(brevon_3683_instances))->get_y()+1);
        ((Active*)get_instance(brevon_3683_instances))->force_animation(7);
        ((Active*)get_instance(brevon_3683_instances))->move_back();
    }
    event_1622_72_end: ;
}
void Frames::event_func_15445()
{
    // event 1623_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mech_defeated_1)) goto event_1623_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1623_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (180))) goto event_1623_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(8, 1);
        }
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, -1);
        }
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(brevon_3683_instances))->get_x());
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(brevon_3683_instances))->get_y()-32);
        }
        media.play_id(SOUND_BREVON_HYPERSPIN_397, -1, 1);
        if (!group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1) {
            group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1 = true;
        }
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1));
        }
    }
    event_1623_72_end: ;
}
void Frames::event_func_15446()
{
    // event 1624_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mech_defeated_1)) goto event_1624_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1624_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (200))) goto event_1624_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        FrameObject * single_instance_1624_72_0; single_instance_1624_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonsuitpelvis_3771_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1624_72_0 == NULL)
                    single_instance_1624_72_0 = new_obj;
            }
        }
    }
    event_1624_72_end: ;
}
void Frames::event_func_15447()
{
    // event 1625_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mech_defeated_1)) goto event_1625_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1625_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (220))) goto event_1625_72_end;
        brevonsuitbackleg_3767_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackleg_3767_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        FrameObject * single_instance_1625_72_0; single_instance_1625_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonsuitbackleg_3767_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1625_72_0 == NULL)
                    single_instance_1625_72_0 = new_obj;
            }
        }
    }
    event_1625_72_end: ;
}
void Frames::event_func_15448()
{
    // event 1626_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mech_defeated_1)) goto event_1626_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1626_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (239))) goto event_1626_72_end;
        brevonsuitbackknee_3768_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackknee_3768_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        FrameObject * single_instance_1626_72_0; single_instance_1626_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonsuitbackknee_3768_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1626_72_0 == NULL)
                    single_instance_1626_72_0 = new_obj;
            }
        }
    }
    event_1626_72_end: ;
}
void Frames::event_func_15449()
{
    // event 1627_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mech_defeated_1)) goto event_1627_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1627_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (257))) goto event_1627_72_end;
        brevonsuitbackfoot_3769_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackfoot_3769_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        FrameObject * single_instance_1627_72_0; single_instance_1627_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonsuitbackfoot_3769_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1627_72_0 == NULL)
                    single_instance_1627_72_0 = new_obj;
            }
        }
    }
    event_1627_72_end: ;
}
void Frames::event_func_15450()
{
    // event 1628_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mech_defeated_1)) goto event_1628_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1628_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (274))) goto event_1628_72_end;
        brevonsuitfrontleg_3772_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontleg_3772_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        FrameObject * single_instance_1628_72_0; single_instance_1628_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonsuitfrontleg_3772_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1628_72_0 == NULL)
                    single_instance_1628_72_0 = new_obj;
            }
        }
    }
    event_1628_72_end: ;
}
void Frames::event_func_15451()
{
    // event 1629_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mech_defeated_1)) goto event_1629_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1629_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (290))) goto event_1629_72_end;
        brevonsuitfrontknee_3773_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontknee_3773_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        FrameObject * single_instance_1629_72_0; single_instance_1629_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonsuitfrontknee_3773_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1629_72_0 == NULL)
                    single_instance_1629_72_0 = new_obj;
            }
        }
    }
    event_1629_72_end: ;
}
void Frames::event_func_15452()
{
    // event 1630_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mech_defeated_1)) goto event_1630_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1630_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (305))) goto event_1630_72_end;
        brevonsuitfrontfoot_3774_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontfoot_3774_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        FrameObject * single_instance_1630_72_0; single_instance_1630_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonsuitfrontfoot_3774_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1630_72_0 == NULL)
                    single_instance_1630_72_0 = new_obj;
            }
        }
    }
    event_1630_72_end: ;
}
void Frames::event_func_15453()
{
    // event 1631_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mech_defeated_1)) goto event_1631_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1631_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (319))) goto event_1631_72_end;
        brevonsuitbackarm_3766_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackarm_3766_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        FrameObject * single_instance_1631_72_0; single_instance_1631_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonsuitbackarm_3766_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1631_72_0 == NULL)
                    single_instance_1631_72_0 = new_obj;
            }
        }
    }
    event_1631_72_end: ;
}
void Frames::event_func_15454()
{
    // event 1632_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mech_defeated_1)) goto event_1632_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1632_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (332))) goto event_1632_72_end;
        brevonsuitbackgun_3765_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackgun_3765_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        FrameObject * single_instance_1632_72_0; single_instance_1632_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonsuitbackgun_3765_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1632_72_0 == NULL)
                    single_instance_1632_72_0 = new_obj;
            }
        }
    }
    event_1632_72_end: ;
}
void Frames::event_func_15455()
{
    // event 1633_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mech_defeated_1)) goto event_1633_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1633_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (344))) goto event_1633_72_end;
        brevonsuittorso_3775_instances.clear_selection();
        for (ObjectIterator it(brevonsuittorso_3775_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        FrameObject * single_instance_1633_72_0; single_instance_1633_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonsuittorso_3775_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1633_72_0 == NULL)
                    single_instance_1633_72_0 = new_obj;
            }
        }
    }
    event_1633_72_end: ;
}
void Frames::event_func_15456()
{
    // event 1634_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mech_defeated_1)) goto event_1634_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1634_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (355))) goto event_1634_72_end;
        brevonsuitfrontarm_3776_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontarm_3776_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        FrameObject * single_instance_1634_72_0; single_instance_1634_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonsuitfrontarm_3776_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1634_72_0 == NULL)
                    single_instance_1634_72_0 = new_obj;
            }
        }
    }
    event_1634_72_end: ;
}
void Frames::event_func_15457()
{
    // event 1635_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mech_defeated_1)) goto event_1635_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1635_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (365))) goto event_1635_72_end;
        brevonsuitfrontgun_3777_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontgun_3777_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        FrameObject * single_instance_1635_72_0; single_instance_1635_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonsuitfrontgun_3777_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1635_72_0 == NULL)
                    single_instance_1635_72_0 = new_obj;
            }
        }
    }
    event_1635_72_end: ;
}
void Frames::event_func_15458()
{
    // event 1636_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mech_defeated_1)) goto event_1636_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1636_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (375))) goto event_1636_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        FrameObject * single_instance_1636_72_0; single_instance_1636_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonsuithead_3770_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1636_72_0 == NULL)
                    single_instance_1636_72_0 = new_obj;
            }
        }
        ((Active*)get_instance(brevon_3683_instances))->set_visible(false);
        ((Active*)get_instance(brevon_3683_instances))->set_x(0);
    }
    event_1636_72_end: ;
}
void Frames::event_func_15459()
{
    // event 1637_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mech_defeated_1)) goto event_1637_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1637_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (475))) goto event_1637_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (500))) goto event_1637_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_max(((Active*)*it)->alterables->values.get(3)-0.1, 0));
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-0.1, 0));
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7)+0.1, 1));
            ((Active*)*it)->alterables->values.set(8, get_max(((Active*)*it)->alterables->values.get(8)-0.1, 0));
            ((Active*)*it)->alterables->values.set(9, get_max(((Active*)*it)->alterables->values.get(9)-0.1, 0));
            ((Active*)*it)->alterables->values.set(10, get_max(((Active*)*it)->alterables->values.get(10)-0.1, 0));
            ((Active*)*it)->alterables->values.set(11, get_max(((Active*)*it)->alterables->values.get(11)-0.1, 0));
            ((Active*)*it)->alterables->values.set(12, get_max(((Active*)*it)->alterables->values.get(12)-0.1, 0));
        }
    }
    event_1637_72_end: ;
}
void Frames::event_func_15460()
{
    // event 1638_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mech_defeated_1)) goto event_1638_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1638_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (500))) goto event_1638_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 2);
        }
    }
    event_1638_72_end: ;
}
void Frames::event_func_15461()
{
    // event 1639_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mech_defeated_1)) goto event_1639_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1639_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (500))) goto event_1639_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)get_instance(brevonsuithead_3770_instances, default_active_instance))->alterables->values.get(5)-80))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto event_1639_72_end;
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(5)-80);
        }
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 0);
        media.play_id(SOUND_COMMON_SLAM2_132, -1, 1);
    }
    event_1639_72_end: ;
}
void Frames::event_func_15462()
{
    // event 1640_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mech_defeated_1)) goto event_1640_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_1640_72_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(4, 1);
    }
    event_1640_72_end: ;
}
void Frames::event_func_15463()
{
    // event 1641_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mech_defeated_1)) goto event_1641_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_1641_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (20))) goto event_1641_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_max(((Active*)*it)->alterables->values.get(3)-0.1, 0));
            ((Active*)*it)->alterables->values.set(4, get_max(((Active*)*it)->alterables->values.get(4)-0.1, 0));
            ((Active*)*it)->alterables->values.set(5, get_max(((Active*)*it)->alterables->values.get(5)-0.1, 0));
            ((Active*)*it)->alterables->values.set(6, get_min(((Active*)*it)->alterables->values.get(6)+0.05, 1));
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-0.1, 0));
            ((Active*)*it)->alterables->values.set(8, get_max(((Active*)*it)->alterables->values.get(8)-0.1, 0));
            ((Active*)*it)->alterables->values.set(9, get_max(((Active*)*it)->alterables->values.get(9)-0.1, 0));
            ((Active*)*it)->alterables->values.set(10, get_max(((Active*)*it)->alterables->values.get(10)-0.1, 0));
            ((Active*)*it)->alterables->values.set(11, get_max(((Active*)*it)->alterables->values.get(11)-0.1, 0));
            ((Active*)*it)->alterables->values.set(12, get_max(((Active*)*it)->alterables->values.get(12)-0.1, 0));
        }
    }
    event_1641_72_end: ;
}
void Frames::event_func_15464()
{
    // event 1642_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mech_defeated_1)) goto event_1642_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_1642_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (20))) goto event_1642_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+0.05, 1));
            ((Active*)*it)->alterables->values.set(4, get_max(((Active*)*it)->alterables->values.get(4)-0.05, 0));
            ((Active*)*it)->alterables->values.set(5, get_max(((Active*)*it)->alterables->values.get(5)-0.05, 0));
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-0.05, 0));
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-0.05, 0));
            ((Active*)*it)->alterables->values.set(8, get_max(((Active*)*it)->alterables->values.get(8)-0.05, 0));
            ((Active*)*it)->alterables->values.set(9, get_max(((Active*)*it)->alterables->values.get(9)-0.05, 0));
            ((Active*)*it)->alterables->values.set(10, get_max(((Active*)*it)->alterables->values.get(10)-0.05, 0));
            ((Active*)*it)->alterables->values.set(11, get_max(((Active*)*it)->alterables->values.get(11)-0.05, 0));
            ((Active*)*it)->alterables->values.set(12, get_max(((Active*)*it)->alterables->values.get(12)-0.05, 0));
        }
    }
    event_1642_72_end: ;
}
void Frames::event_func_15465()
{
    // event 1643_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mech_defeated_1)) goto event_1643_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_1643_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (25))) goto event_1643_72_end;
        bosstractorbeam_3759_instances.clear_selection();
        for (ObjectIterator it(bosstractorbeam_3759_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(get_max(((Active*)*it)->x_scale-0.1, 0));
        }
    }
    event_1643_72_end: ;
}
void Frames::event_func_15466()
{
    // event 1644_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mech_defeated_1)) goto event_1644_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_1644_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (35))) goto event_1644_72_end;
        bosstractorbeam_3759_instances.clear_selection();
        for (ObjectIterator it(bosstractorbeam_3759_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_ABSOLUTION_DASH_296, -1, 1);
    }
    event_1644_72_end: ;
}
void Frames::event_func_15467()
{
    // event 1645_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mech_defeated_1)) goto event_1645_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_1645_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (35))) goto event_1645_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 20);
        }
    }
    event_1645_72_end: ;
}
void Frames::event_func_15468()
{
    // event 1646_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mech_defeated_1)) goto event_1646_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_1646_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (100))) goto event_1646_72_end;
        if (!((global_values->get(1)) == (4))) goto event_1646_72_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unlock_music_82);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1646_72_end: ;
}
void Frames::event_func_15469()
{
    // event 1647_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_mech_defeated_1)) goto event_1647_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_1647_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (100))) goto event_1647_72_end;
            group_main_engine_level_specific_methods_cutscenes_mech_defeated_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_restore_hud_and_star_background_1) {
            group_main_engine_level_specific_methods_cutscenes_restore_hud_and_star_background_1 = true;
        }
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 0);
            group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 = false;
    
        brevonmechaxle_2550_instances.clear_selection();
        for (ObjectIterator it(brevonmechaxle_2550_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechfrontclaw_2549_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontclaw_2549_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechfrontshoulder_2547_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontshoulder_2547_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechfrontwing_2546_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontwing_2546_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechfrontarm_2548_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontarm_2548_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechfrontfoot_2545_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontfoot_2545_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechfrontknee_2542_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontknee_2542_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechfrontleg2_2541_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg2_2541_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechfrontleg_2539_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg_2539_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechabdomen_2540_instances.clear_selection();
        for (ObjectIterator it(brevonmechabdomen_2540_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechturret_3333_instances.clear_selection();
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechbackarm_2516_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackarm_2516_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechbackclaw_2515_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackclaw_2515_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechbackshoulder_2514_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackshoulder_2514_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechbackwing_2538_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackwing_2538_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechcharge_3325_instances.clear_selection();
        for (ObjectIterator it(brevonmechcharge_3325_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
        }
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0), 10));
        }
    }
    event_1647_72_end: ;
}
void Frames::event_func_15470()
{
    // event 1649_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_power_suit_defeated_1)) goto event_1649_72_end;
        qualifier_34.clear_selection();
        for (QualifierIterator it(qualifier_34); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(24));
            ((Active*)*it)->alterables->values.add(24, 0.3);
        }
    }
    event_1649_72_end: ;
}
void Frames::event_func_15471()
{
    // event 1650_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_power_suit_defeated_1)) goto event_1650_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (0))) goto event_1650_72_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(4, 1);
    }
    event_1650_72_end: ;
}
void Frames::event_func_15472()
{
    // event 1651_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_power_suit_defeated_1)) goto event_1651_72_end;
        qualifier_34.clear_selection();
        for (QualifierIterator it(qualifier_34); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(brevon_3683_instances))->get_y()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_34.has_selection()) goto event_1651_72_end;
        for (QualifierIterator it(qualifier_34); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, 0-((Active*)*it)->alterables->values.get(24));
        }
    }
    event_1651_72_end: ;
}
void Frames::event_func_15473()
{
    // event 1652_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_power_suit_defeated_1)) goto event_1652_72_end;
        qualifier_34.clear_selection();
        for (QualifierIterator it(qualifier_34); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (frame_left()-50))) { it.deselect(); continue; }
        }
        if (!qualifier_34.has_selection()) goto event_1652_72_end;
        for (QualifierIterator it(qualifier_34); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1652_72_end: ;
}
void Frames::event_func_15474()
{
    // event 1653_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_power_suit_defeated_1)) goto event_1653_72_end;
        qualifier_34.clear_selection();
        for (QualifierIterator it(qualifier_34); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (frame_right()+50))) { it.deselect(); continue; }
        }
        if (!qualifier_34.has_selection()) goto event_1653_72_end;
        for (QualifierIterator it(qualifier_34); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1653_72_end: ;
}
void Frames::event_func_15475()
{
    // event 1654_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_power_suit_defeated_1)) goto event_1654_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (0))) goto event_1654_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (75))) goto event_1654_72_end;
        if (!(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.is_off(3))) goto event_1654_72_end;
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1)) goto event_1654_72_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 6);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(4, 1);
    }
    event_1654_72_end: ;
}
void Frames::event_func_15476()
{
    // event 1655_72
    bool or_result_1655_72 = false;
    bool or_temp_result_1655_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_power_suit_defeated_1)) goto or_event_1655_72_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1655_72_0_end;
        or_result_1655_72 = true;
        or_temp_result_1655_72_0 = true;
    }
    or_event_1655_72_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1655_72_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1655_72
    bool or_temp_result_1655_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_power_suit_defeated_1)) goto or_event_1655_72_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1655_72_1_end;
        or_result_1655_72 = true;
        or_temp_result_1655_72_1 = true;
    }
    or_event_1655_72_1_end: ;
    if (or_temp_result_1655_72_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1655_72
    bool or_temp_result_1655_72_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_power_suit_defeated_1)) goto or_event_1655_72_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1655_72_2_end;
        or_result_1655_72 = true;
        or_temp_result_1655_72_2 = true;
        or_event_1655_72_2_end: ;
        if (or_temp_result_1655_72_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1655_72) goto or_final_or_event_1655_72_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1655_72_0 || or_temp_result_1655_72_1 || or_temp_result_1655_72_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1655_72_2_end: ;
}
void Frames::event_func_15477()
{
    // event 1656_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_power_suit_defeated_1)) goto event_1656_72_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1656_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (6))) goto event_1656_72_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1656_72_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox2_567_instances))->set_visible(false);
            group_main_engine_level_specific_methods_cutscenes_dialog_system_1 = false;
    
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_visible(false);
        ((Active*)get_instance(brevon_3683_instances))->force_frame(48);
    }
    event_1656_72_end: ;
}
void Frames::event_func_15478()
{
    // event 1657_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_power_suit_defeated_1)) goto event_1657_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (0))) goto event_1657_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (80))) goto event_1657_72_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unlock_music_201+global_strings->get(4)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(4)+str_0_1_123);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1657_72_end: ;
}
void Frames::event_func_15479()
{
    // event 1658_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_power_suit_defeated_1)) goto event_1658_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (0))) goto event_1658_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (80))) goto event_1658_72_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 2);
    }
    event_1658_72_end: ;
}
void Frames::event_func_15480()
{
    // event 1659_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_power_suit_defeated_1)) goto event_1659_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (0))) goto event_1659_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (80))) goto event_1659_72_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) >= (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)))) goto event_1659_72_end;
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(3, 6);
            group_main_engine_level_specific_methods_cutscenes_power_suit_defeated_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1) {
            group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 = true;
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 0);
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.set(4, -10);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.enable(3);
    }
    event_1659_72_end: ;
}
void Frames::event_func_15481()
{
    // event 1660_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_red_siren_effect_1)) goto event_1660_72_end;
        ((Active*)get_instance(redflash_3737_instances))->alterables->values.set(1, (((Active*)get_instance(redflash_3737_instances))->alterables->values.get(1)+4)%math_helper%360);
        ((Active*)get_instance(redflash_3737_instances))->set_visible(true);
        ((Active*)get_instance(redflash_3737_instances))->blend_color.set_alpha_coefficient(255-64+cos_deg(((Active*)get_instance(redflash_3737_instances))->alterables->values.get(1))*64);
    }
    event_1660_72_end: ;
}
void Frames::event_func_15482()
{
    // event 1661_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_1661_72_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(4, 1);
    }
    event_1661_72_end: ;
}
void Frames::event_func_15483()
{
    // event 1662_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_1662_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (0))) goto event_1662_72_end;
        if (once_condition_1662_72) goto event_1662_72_end;
        once_condition_1662_72 = true;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, ((Active*)get_instance(kingdomstone_1587_instances))->get_x());
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, ((Active*)get_instance(kingdomstone_1587_instances))->get_y()+30);
        bosshealthbar1_3760_instances.clear_selection();
        for (ObjectIterator it(bosshealthbar1_3760_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosshealthbar2_3761_instances.clear_selection();
        for (ObjectIterator it(bosshealthbar2_3761_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevondummycape_3758_instances.clear_selection();
        for (ObjectIterator it(brevondummycape_3758_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        if (!group_main_engine_level_specific_methods_cutscenes_red_siren_effect_1) {
            group_main_engine_level_specific_methods_cutscenes_red_siren_effect_1 = true;
        }
        ((Active*)get_instance(redflash_3737_instances))->set_x_scale(43);
        ((Active*)get_instance(redflash_3737_instances))->set_y_scale(24);
        ((Active*)get_instance(redflash_3737_instances))->set_layer(1-1);
        {
            ((Active*)get_instance(redflash_3737_instances))->set_shader(Render::ADDITIVE);
        }
        ((Active*)get_instance(redflash_3737_instances))->set_direction(1);
        ((Active*)get_instance(redflash_3737_instances))->alterables->flags.enable(1);
    }
    event_1662_72_end: ;
}
void Frames::event_func_15484()
{
    // event 1663_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_1663_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (0))) goto event_1663_72_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 3);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1663_72_end: ;
}
void Frames::event_func_15485()
{
    // event 1664_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_1664_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (0))) goto event_1664_72_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_1664_72_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 0);
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(player_389_instances))->set_x(frame_left()-60);
        ((Active*)get_instance(player_389_instances))->set_y(306);
    }
    event_1664_72_end: ;
}
void Frames::event_func_15486()
{
    // event 1665_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_1665_72_end;
        if (!((global_values->get(1)) == (0))) goto event_1665_72_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            if (parent == NULL) goto pos_end_1665_72_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1665_72_0: ;
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1665_72_end: ;
}
void Frames::event_func_15487()
{
    // event 1666_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_1666_72_end;
        if (!((global_values->get(1)) >= (2))) goto event_1666_72_end;
        if (!((global_values->get(1)) <= (3))) goto event_1666_72_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            if (parent == NULL) goto pos_end_1666_72_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1666_72_0: ;
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1666_72_end: ;
}
void Frames::event_func_15488()
{
    // event 1667_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_1667_72_end;
        if (!((global_values->get(1)) == (4))) goto event_1667_72_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            if (parent == NULL) goto pos_end_1667_72_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1667_72_0: ;
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1667_72_end: ;
}
void Frames::event_func_15489()
{
    // event 1668_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_1668_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1668_72_end;
        ((Active*)get_instance(player_389_instances))->set_x(((Active*)get_instance(player_389_instances))->get_x()+5);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_speed(35);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_speed(35);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_speed(35);
        }
    }
    event_1668_72_end: ;
}
void Frames::event_func_15490()
{
    // event 1669_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_1669_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1669_72_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) >= (((Active*)get_instance(kingdomstone_1587_instances))->get_x()))) goto event_1669_72_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(24);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(24);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(24);
        }
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 0);
    }
    event_1669_72_end: ;
}
void Frames::event_func_15491()
{
    // event 1670_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1)) goto event_1670_72_end;
        if (!((playerskinsash_418_instances.size()) == (0))) goto event_1670_72_end;
        FrameObject * single_instance_1670_72_0; single_instance_1670_72_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinsash_418(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1670_72_0 == NULL)
                    single_instance_1670_72_0 = new_obj;
            }
        }
    }
    event_1670_72_end: ;
}
void Frames::event_func_15492()
{
    // event 1671_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1)) goto event_1671_72_end;
        if (!((playerskinspade_419_instances.size()) == (0))) goto event_1671_72_end;
        FrameObject * single_instance_1671_72_0; single_instance_1671_72_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinspade_419(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1671_72_0 == NULL)
                    single_instance_1671_72_0 = new_obj;
            }
        }
    }
    event_1671_72_end: ;
}
void Frames::event_func_15493()
{
    // event 1672_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1)) goto event_1672_72_end;
        if (!((playerskincarol_445_instances.size()) == (0))) goto event_1672_72_end;
        FrameObject * single_instance_1672_72_0; single_instance_1672_72_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincarol_445(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1672_72_0 == NULL)
                    single_instance_1672_72_0 = new_obj;
            }
        }
    }
    event_1672_72_end: ;
}
void Frames::event_func_15494()
{
    // event 1673_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1)) goto event_1673_72_end;
        if (!((playerskincarolbike_382_instances.size()) == (0))) goto event_1673_72_end;
        FrameObject * single_instance_1673_72_0; single_instance_1673_72_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincarolbike_382(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1673_72_0 == NULL)
                    single_instance_1673_72_0 = new_obj;
            }
        }
    }
    event_1673_72_end: ;
}
void Frames::event_func_15495()
{
    // event 1674_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1)) goto event_1674_72_end;
        if (!((playerskinmilla_446_instances.size()) == (0))) goto event_1674_72_end;
        FrameObject * single_instance_1674_72_0; single_instance_1674_72_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinmilla_446(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1674_72_0 == NULL)
                    single_instance_1674_72_0 = new_obj;
            }
        }
    }
    event_1674_72_end: ;
}
void Frames::event_func_15496()
{
    // event 1675_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1)) goto event_1675_72_end;
        if (!((playerskintorque_450_instances.size()) == (0))) goto event_1675_72_end;
        FrameObject * single_instance_1675_72_0; single_instance_1675_72_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskintorque_450(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1675_72_0 == NULL)
                    single_instance_1675_72_0 = new_obj;
            }
        }
    }
    event_1675_72_end: ;
}
void Frames::event_func_15497()
{
    // event 1676_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1)) goto event_1676_72_end;
        if (!((playerskinsashhair_417_instances.size()) == (0))) goto event_1676_72_end;
        FrameObject * single_instance_1676_72_0; single_instance_1676_72_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinsashhair_417(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1676_72_0 == NULL)
                    single_instance_1676_72_0 = new_obj;
            }
        }
    }
    event_1676_72_end: ;
}
void Frames::event_func_15498()
{
    // event 1677_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1)) goto event_1677_72_end;
        if (!((playerskincaroltail_444_instances.size()) == (0))) goto event_1677_72_end;
        FrameObject * single_instance_1677_72_0; single_instance_1677_72_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincaroltail_444(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1677_72_0 == NULL)
                    single_instance_1677_72_0 = new_obj;
            }
        }
    }
    event_1677_72_end: ;
}
void Frames::event_func_15499()
{
    // event 1678_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1)) goto event_1678_72_end;
        if (!((playerskinmillatail_381_instances.size()) == (0))) goto event_1678_72_end;
        FrameObject * single_instance_1678_72_0; single_instance_1678_72_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinmillatail_381(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1678_72_0 == NULL)
                    single_instance_1678_72_0 = new_obj;
            }
        }
    }
    event_1678_72_end: ;
}
void Frames::event_func_15500()
{
    // event 1679_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1)) goto event_1679_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(7)) == (1))) goto event_1679_72_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->strings.set(0, ((Text*)get_instance(dialogdata_565_instances))->get_paragraph(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)));
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 0);
    }
    event_1679_72_end: ;
}
void Frames::event_func_15501()
{
    // event 1680_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1)) goto event_1680_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (0))) goto event_1680_72_end;
        if (not_always_1680_72 > loop_count) {
            not_always_1680_72 = loop_count + 2;
            goto event_1680_72_end;
        }
        not_always_1680_72 = loop_count + 2;
        ((Active*)get_instance(dialogbox2_567_instances))->set_visible(false);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->set_visible(false);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_visible(false);
    }
    event_1680_72_end: ;
}
void Frames::event_func_15502()
{
    // event 1681_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1)) goto event_1681_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (1))) goto event_1681_72_end;
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
                loop_voice_72();
                if (!loop_voice_running) break;
                loop_voice_index++;
            }
        }
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_visible(true);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_text(empty_string);
    }
    event_1681_72_end: ;
}
void Frames::event_func_15503()
{
    // event 1682_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1)) goto event_1682_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1682_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1682_72_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(2, 1);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_text(mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 15, ((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)+2));
    }
    event_1682_72_end: ;
}
void Frames::event_func_15504()
{
    // event 1683_72
    bool or_result_1683_72 = false;
    bool or_temp_result_1683_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1)) goto or_event_1683_72_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto or_event_1683_72_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) >= (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto or_event_1683_72_0_end;
        if (not_always_1683_72 > loop_count) {
            not_always_1683_72 = loop_count + 2;
            goto or_event_1683_72_0_end;
        }
        not_always_1683_72 = loop_count + 2;
        or_result_1683_72 = true;
        or_temp_result_1683_72_0 = true;
    }
    or_event_1683_72_0_end: ;
    // event 1683_72
    bool or_temp_result_1683_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1)) goto or_event_1683_72_1_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto or_event_1683_72_1_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) >= (10))) goto or_event_1683_72_1_end;
        if (not_always_1683_72 > loop_count) {
            not_always_1683_72 = loop_count + 2;
            goto or_event_1683_72_1_end;
        }
        not_always_1683_72 = loop_count + 2;
        or_result_1683_72 = true;
        or_temp_result_1683_72_1 = true;
        or_event_1683_72_1_end: ;
        if (!or_result_1683_72) goto or_final_or_event_1683_72_1_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(true);
    }
    or_final_or_event_1683_72_1_end: ;
}
void Frames::event_func_15505()
{
    // event 1684_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1)) goto event_1684_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (0))) goto event_1684_72_end;
        if (not_always_1684_72 > loop_count) {
            not_always_1684_72 = loop_count + 2;
            goto event_1684_72_end;
        }
        not_always_1684_72 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(12, global_values->get(25));
    }
    event_1684_72_end: ;
}
void Frames::event_func_15506()
{
    // event 1685_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1)) goto event_1685_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1685_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12)) > (global_values->get(25)*0.4))) goto event_1685_72_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.sub(12, global_values->get(25)*0.02);
    }
    event_1685_72_end: ;
}
void Frames::event_func_15507()
{
    // event 1686_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1)) goto event_1686_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1686_72_end;
        if (!((media.get_channel_volume(-1 +32)) > (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12)))) goto event_1686_72_end;
        media.set_channel_volume(32-1, ((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12));
    }
    event_1686_72_end: ;
}
void Frames::event_func_15508()
{
    // event 1687_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1)) goto event_1687_72_end;
        if (!((global_values->get(27)) == (0))) goto event_1687_72_end;
        if (not_always_1687_72 > loop_count) {
            not_always_1687_72 = loop_count + 2;
            goto event_1687_72_end;
        }
        not_always_1687_72 = loop_count + 2;
            group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1) {
            group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1 = true;
        }
    }
    event_1687_72_end: ;
}
void Frames::event_func_15509()
{
    // event 1691_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1691_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1691_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1691_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1691_72_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1691_72_end;
        if (!media.is_channel_playing(20-1)) goto event_1691_72_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1691_72_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1691_72_end: ;
}
void Frames::event_func_15510()
{
    // event 1692_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1692_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1692_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1692_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1692_72_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1692_72_end;
        if (!media.is_channel_playing(20-1)) goto event_1692_72_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1692_72_end: ;
}
void Frames::event_func_15511()
{
    // event 1693_72
    bool or_result_1693_72 = false;
    bool or_temp_result_1693_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1693_72_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1693_72_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1693_72_0_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1693_72_0_end;
        or_result_1693_72 = true;
        or_temp_result_1693_72_0 = true;
    }
    or_event_1693_72_0_end: ;
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1693_72_0) {
        playerskinsash_418_instances.save_selection();
    }
    // event 1693_72
    bool or_temp_result_1693_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1693_72_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1693_72_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1693_72_1_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1693_72_1_end;
        or_result_1693_72 = true;
        or_temp_result_1693_72_1 = true;
        or_event_1693_72_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1693_72_1) {
            dialogbox_566_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1693_72) goto or_final_or_event_1693_72_1_end;
        playerskinsash_418_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1693_72_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1693_72_0 || or_temp_result_1693_72_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1693_72_1_end: ;
}
void Frames::event_func_15512()
{
    // event 1694_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1694_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1694_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1694_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1694_72_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1694_72_end;
        if (!media.is_channel_playing(20-1)) goto event_1694_72_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1694_72_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1694_72_end: ;
}
void Frames::event_func_15513()
{
    // event 1695_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1695_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1695_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1695_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1695_72_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1695_72_end;
        if (!media.is_channel_playing(20-1)) goto event_1695_72_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1695_72_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1695_72_end: ;
}
void Frames::event_func_15514()
{
    // event 1696_72
    bool or_result_1696_72 = false;
    bool or_temp_result_1696_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1696_72_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1696_72_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1696_72_0_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1696_72_0_end;
        or_result_1696_72 = true;
        or_temp_result_1696_72_0 = true;
    }
    or_event_1696_72_0_end: ;
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_1696_72_0) {
        playerskincarol_445_instances.save_selection();
    }
    // event 1696_72
    bool or_temp_result_1696_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1696_72_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (2))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1696_72_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1696_72_1_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1696_72_1_end;
        or_result_1696_72 = true;
        or_temp_result_1696_72_1 = true;
        or_event_1696_72_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1696_72_1) {
            dialogbox_566_instances.save_selection();
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_1696_72) goto or_final_or_event_1696_72_1_end;
        playerskincarol_445_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1696_72_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1696_72_0 || or_temp_result_1696_72_1) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1696_72_1_end: ;
}
void Frames::event_func_15515()
{
    // event 1697_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1697_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1697_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1697_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1697_72_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1697_72_end;
        if (!media.is_channel_playing(20-1)) goto event_1697_72_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1697_72_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1697_72_end: ;
}
void Frames::event_func_15516()
{
    // event 1698_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1698_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1698_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1698_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1698_72_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1698_72_end;
        if (!media.is_channel_playing(20-1)) goto event_1698_72_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1698_72_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1698_72_end: ;
}
void Frames::event_func_15517()
{
    // event 1699_72
    bool or_result_1699_72 = false;
    bool or_temp_result_1699_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1699_72_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1699_72_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1699_72_0_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1699_72_0_end;
        or_result_1699_72 = true;
        or_temp_result_1699_72_0 = true;
    }
    or_event_1699_72_0_end: ;
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_1699_72_0) {
        playerskinmilla_446_instances.save_selection();
    }
    // event 1699_72
    bool or_temp_result_1699_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1699_72_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1699_72_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1699_72_1_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1699_72_1_end;
        or_result_1699_72 = true;
        or_temp_result_1699_72_1 = true;
        or_event_1699_72_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1699_72_1) {
            dialogbox_566_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_1699_72) goto or_final_or_event_1699_72_1_end;
        playerskinmilla_446_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1699_72_0 || or_temp_result_1699_72_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        if (or_temp_result_1699_72_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1699_72_1_end: ;
}
void Frames::event_func_15518()
{
    // event 1700_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1700_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1700_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1700_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1700_72_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1700_72_end;
        if (!media.is_channel_playing(20-1)) goto event_1700_72_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1700_72_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1700_72_end: ;
}
void Frames::event_func_15519()
{
    // event 1701_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1701_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1701_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1701_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1701_72_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1701_72_end;
        if (!media.is_channel_playing(20-1)) goto event_1701_72_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1701_72_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1701_72_end: ;
}
void Frames::event_func_15520()
{
    // event 1702_72
    bool or_result_1702_72 = false;
    bool or_temp_result_1702_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1702_72_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1702_72_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1702_72_0_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1702_72_0_end;
        or_result_1702_72 = true;
        or_temp_result_1702_72_0 = true;
    }
    or_event_1702_72_0_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    if (or_temp_result_1702_72_0) {
        playerskinspade_419_instances.save_selection();
    }
    // event 1702_72
    bool or_temp_result_1702_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1702_72_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1702_72_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1702_72_1_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1702_72_1_end;
        or_result_1702_72 = true;
        or_temp_result_1702_72_1 = true;
        or_event_1702_72_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1702_72_1) {
            playerskinspade_419_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1702_72) goto or_final_or_event_1702_72_1_end;
        playerskinspade_419_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1702_72_0 || or_temp_result_1702_72_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_1702_72_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1702_72_1_end: ;
}
void Frames::event_func_15521()
{
    // event 1703_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1703_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1703_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1703_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1703_72_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1703_72_end;
        if (!media.is_channel_playing(20-1)) goto event_1703_72_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1703_72_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1703_72_end: ;
}
void Frames::event_func_15522()
{
    // event 1704_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1704_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1704_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1704_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1704_72_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1704_72_end;
        if (!media.is_channel_playing(20-1)) goto event_1704_72_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1704_72_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1704_72_end: ;
}
void Frames::event_func_15523()
{
    // event 1705_72
    bool or_result_1705_72 = false;
    bool or_temp_result_1705_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1705_72_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1705_72_0_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1705_72_0_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1705_72_0_end;
        or_result_1705_72 = true;
        or_temp_result_1705_72_0 = true;
    }
    or_event_1705_72_0_end: ;
    playerskintorque_450_instances.clear_saved_selection();
    if (or_temp_result_1705_72_0) {
        playerskintorque_450_instances.save_selection();
    }
    // event 1705_72
    bool or_temp_result_1705_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1705_72_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1705_72_1_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1705_72_1_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1705_72_1_end;
        or_result_1705_72 = true;
        or_temp_result_1705_72_1 = true;
        or_event_1705_72_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1705_72_1) {
            dialogbox_566_instances.save_selection();
            playerskintorque_450_instances.save_selection();
        }
        if (!or_result_1705_72) goto or_final_or_event_1705_72_1_end;
        dialogbox_566_instances.empty_selection();
        playerskintorque_450_instances.empty_selection();
        if (or_temp_result_1705_72_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1705_72_0 || or_temp_result_1705_72_1) {
            playerskintorque_450_instances.restore_selection();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1705_72_1_end: ;
}
void Frames::event_func_15524()
{
    // event 1706_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1706_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1706_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (12))) goto event_1706_72_end;
        if (!(((Active*)get_instance(brevon_3683_instances))->test_animation(5))) goto event_1706_72_end;
        if (!media.is_channel_playing(20-1)) goto event_1706_72_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1706_72_end;
        ((Active*)get_instance(brevon_3683_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(brevon_3683_instances))->get_frame()+1+randrange(2))%math_helper%4);
    }
    event_1706_72_end: ;
}
void Frames::event_func_15525()
{
    // event 1707_72
    bool or_result_1707_72 = false;
    bool or_temp_result_1707_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1707_72_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1707_72_0_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto or_event_1707_72_0_end;
        if (!((((Active*)get_single(brevon_3683_instances, default_active_instance))->get_frame()%math_helper%4) > (0))) goto or_event_1707_72_0_end;
        or_result_1707_72 = true;
        or_temp_result_1707_72_0 = true;
    }
    or_event_1707_72_0_end: ;
    brevon_3683_instances.clear_saved_selection();
    if (or_temp_result_1707_72_0) {
        brevon_3683_instances.save_selection();
    }
    // event 1707_72
    bool or_temp_result_1707_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1707_72_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (12))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1707_72_1_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto or_event_1707_72_1_end;
        if (!((((Active*)get_single(brevon_3683_instances, default_active_instance))->get_frame()%math_helper%4) > (0))) goto or_event_1707_72_1_end;
        or_result_1707_72 = true;
        or_temp_result_1707_72_1 = true;
        or_event_1707_72_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1707_72_1) {
            brevon_3683_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1707_72) goto or_final_or_event_1707_72_1_end;
        brevon_3683_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1707_72_0 || or_temp_result_1707_72_1) {
            brevon_3683_instances.restore_selection();
        }
        if (or_temp_result_1707_72_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1707_72_1_end: ;
}
void Frames::event_func_15526()
{
    // event 1708_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1)) goto event_1708_72_end;
        if (!((global_values->get(27)) == (1))) goto event_1708_72_end;
        if (not_always_1708_72 > loop_count) {
            not_always_1708_72 = loop_count + 2;
            goto event_1708_72_end;
        }
        not_always_1708_72 = loop_count + 2;
            group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1) {
            group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1 = true;
        }
    }
    event_1708_72_end: ;
}
void Frames::event_func_15527()
{
    // event 1709_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1709_72_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1709_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1709_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1709_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1709_72_end;
        media.play_id(SOUND_TALK_F_302, -1, 1);
    }
    event_1709_72_end: ;
}
void Frames::event_func_15528()
{
    // event 1710_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1710_72_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1710_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1710_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1710_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1710_72_end;
        media.play_id(SOUND_TALK_F_302, -1, 1);
    }
    event_1710_72_end: ;
}
void Frames::event_func_15529()
{
    // event 1711_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1711_72_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1711_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1711_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1711_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1711_72_end;
        media.play_id(SOUND_TALK_C_289, -1, 1);
    }
    event_1711_72_end: ;
}
void Frames::event_func_15530()
{
    // event 1712_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1712_72_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1712_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1712_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1712_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1712_72_end;
        media.play_id(SOUND_TALK_M_303, -1, 1);
    }
    event_1712_72_end: ;
}
void Frames::event_func_15531()
{
    // event 1713_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1713_72_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1713_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1713_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1713_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (6))) goto event_1713_72_end;
        media.play_id(SOUND_TALK_M_303, -1, 1);
    }
    event_1713_72_end: ;
}
