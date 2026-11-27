#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_8368()
{
    // event 1614_35
    bool or_result_1614_35 = false;
    bool or_temp_result_1614_35_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_cannon_fire_1)) goto or_event_1614_35_0_end;
        if (!((global_values->get(3)%math_helper%17) == (0))) goto or_event_1614_35_0_end;
        levelairship1_2059_instances.clear_selection();
        for (ObjectIterator it(levelairship1_2059_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
        }
        if (!levelairship1_2059_instances.has_selection()) goto or_event_1614_35_0_end;
        masterlevel_37_instances.clear_selection();
        for (ObjectIterator it(masterlevel_37_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(4))) { it.deselect(); continue; }
        }
        if (!masterlevel_37_instances.has_selection()) goto or_event_1614_35_0_end;
        or_result_1614_35 = true;
        or_temp_result_1614_35_0 = true;
    }
    or_event_1614_35_0_end: ;
    levelairship1_2059_instances.clear_saved_selection();
    masterlevel_37_instances.clear_saved_selection();
    if (or_temp_result_1614_35_0) {
        levelairship1_2059_instances.save_selection();
        masterlevel_37_instances.save_selection();
    }
    // event 1614_35
    bool or_temp_result_1614_35_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_cannon_fire_1)) goto or_event_1614_35_1_end;
        if (!((global_values->get(3)%math_helper%22) == (0))) goto or_event_1614_35_1_end;
        levelairship1_2059_instances.clear_selection();
        for (ObjectIterator it(levelairship1_2059_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
        }
        if (!levelairship1_2059_instances.has_selection()) goto or_event_1614_35_1_end;
        masterlevel_37_instances.clear_selection();
        for (ObjectIterator it(masterlevel_37_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(4))) { it.deselect(); continue; }
        }
        if (!masterlevel_37_instances.has_selection()) goto or_event_1614_35_1_end;
        or_result_1614_35 = true;
        or_temp_result_1614_35_1 = true;
        or_event_1614_35_1_end: ;
        if (or_temp_result_1614_35_1) {
            levelairship1_2059_instances.save_selection();
            masterlevel_37_instances.save_selection();
        }
        if (!or_result_1614_35) goto or_final_or_event_1614_35_1_end;
        masterlevel_37_instances.empty_selection();
        levelairship1_2059_instances.empty_selection();
        if (or_temp_result_1614_35_0 || or_temp_result_1614_35_1) {
            levelairship1_2059_instances.restore_selection();
        }
        if (or_temp_result_1614_35_0 || or_temp_result_1614_35_1) {
            masterlevel_37_instances.restore_selection();
        }
        FrameObject * single_instance_1614_35_0; single_instance_1614_35_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(levelairship1_2059_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shipbullet_2051(parent->x + -56, parent->y + 18), parent->layer);
                if (single_instance_1614_35_0 == NULL)
                    single_instance_1614_35_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1614_35_0))->set_x(((Active*)single_instance_1614_35_0)->get_x()+randrange(150));
    }
    or_final_or_event_1614_35_1_end: ;
}
void Frames::event_func_8369()
{
    // event 1615_35
    bool or_result_1615_35 = false;
    bool or_temp_result_1615_35_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_cannon_fire_1)) goto or_event_1615_35_0_end;
        if (!((global_values->get(3)%math_helper%17) == (0))) goto or_event_1615_35_0_end;
        levelairship1_2059_instances.clear_selection();
        for (ObjectIterator it(levelairship1_2059_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!levelairship1_2059_instances.has_selection()) goto or_event_1615_35_0_end;
        masterlevel_37_instances.clear_selection();
        for (ObjectIterator it(masterlevel_37_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
        }
        if (!masterlevel_37_instances.has_selection()) goto or_event_1615_35_0_end;
        or_result_1615_35 = true;
        or_temp_result_1615_35_0 = true;
    }
    or_event_1615_35_0_end: ;
    levelairship1_2059_instances.clear_saved_selection();
    masterlevel_37_instances.clear_saved_selection();
    if (or_temp_result_1615_35_0) {
        levelairship1_2059_instances.save_selection();
        masterlevel_37_instances.save_selection();
    }
    // event 1615_35
    bool or_temp_result_1615_35_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_cannon_fire_1)) goto or_event_1615_35_1_end;
        if (!((global_values->get(3)%math_helper%22) == (0))) goto or_event_1615_35_1_end;
        levelairship1_2059_instances.clear_selection();
        for (ObjectIterator it(levelairship1_2059_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!levelairship1_2059_instances.has_selection()) goto or_event_1615_35_1_end;
        masterlevel_37_instances.clear_selection();
        for (ObjectIterator it(masterlevel_37_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
        }
        if (!masterlevel_37_instances.has_selection()) goto or_event_1615_35_1_end;
        or_result_1615_35 = true;
        or_temp_result_1615_35_1 = true;
        or_event_1615_35_1_end: ;
        if (or_temp_result_1615_35_1) {
            levelairship1_2059_instances.save_selection();
            masterlevel_37_instances.save_selection();
        }
        if (!or_result_1615_35) goto or_final_or_event_1615_35_1_end;
        masterlevel_37_instances.empty_selection();
        levelairship1_2059_instances.empty_selection();
        if (or_temp_result_1615_35_0 || or_temp_result_1615_35_1) {
            levelairship1_2059_instances.restore_selection();
        }
        if (or_temp_result_1615_35_0 || or_temp_result_1615_35_1) {
            masterlevel_37_instances.restore_selection();
        }
        FrameObject * single_instance_1615_35_0; single_instance_1615_35_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(levelairship1_2059_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shipbullet_2051(parent->x + -56, parent->y + 18), parent->layer);
                if (single_instance_1615_35_0 == NULL)
                    single_instance_1615_35_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1615_35_0))->set_x(((Active*)single_instance_1615_35_0)->get_x()+randrange(150));
    }
    or_final_or_event_1615_35_1_end: ;
}
void Frames::event_func_8370()
{
    // event 1616_35
    bool or_result_1616_35 = false;
    bool or_temp_result_1616_35_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_cannon_fire_1)) goto or_event_1616_35_0_end;
        if (!((global_values->get(3)%math_helper%17) == (0))) goto or_event_1616_35_0_end;
        levelairship1_2059_instances.clear_selection();
        for (ObjectIterator it(levelairship1_2059_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (2))) { it.deselect(); continue; }
        }
        if (!levelairship1_2059_instances.has_selection()) goto or_event_1616_35_0_end;
        masterlevel_37_instances.clear_selection();
        for (ObjectIterator it(masterlevel_37_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!masterlevel_37_instances.has_selection()) goto or_event_1616_35_0_end;
        or_result_1616_35 = true;
        or_temp_result_1616_35_0 = true;
    }
    or_event_1616_35_0_end: ;
    levelairship1_2059_instances.clear_saved_selection();
    masterlevel_37_instances.clear_saved_selection();
    if (or_temp_result_1616_35_0) {
        levelairship1_2059_instances.save_selection();
        masterlevel_37_instances.save_selection();
    }
    // event 1616_35
    bool or_temp_result_1616_35_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_cannon_fire_1)) goto or_event_1616_35_1_end;
        if (!((global_values->get(3)%math_helper%22) == (0))) goto or_event_1616_35_1_end;
        levelairship1_2059_instances.clear_selection();
        for (ObjectIterator it(levelairship1_2059_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (2))) { it.deselect(); continue; }
        }
        if (!levelairship1_2059_instances.has_selection()) goto or_event_1616_35_1_end;
        masterlevel_37_instances.clear_selection();
        for (ObjectIterator it(masterlevel_37_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!masterlevel_37_instances.has_selection()) goto or_event_1616_35_1_end;
        or_result_1616_35 = true;
        or_temp_result_1616_35_1 = true;
        or_event_1616_35_1_end: ;
        if (or_temp_result_1616_35_1) {
            levelairship1_2059_instances.save_selection();
            masterlevel_37_instances.save_selection();
        }
        if (!or_result_1616_35) goto or_final_or_event_1616_35_1_end;
        masterlevel_37_instances.empty_selection();
        levelairship1_2059_instances.empty_selection();
        if (or_temp_result_1616_35_0 || or_temp_result_1616_35_1) {
            levelairship1_2059_instances.restore_selection();
        }
        if (or_temp_result_1616_35_0 || or_temp_result_1616_35_1) {
            masterlevel_37_instances.restore_selection();
        }
        FrameObject * single_instance_1616_35_0; single_instance_1616_35_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(levelairship1_2059_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shipbullet_2051(parent->x + -56, parent->y + 18), parent->layer);
                if (single_instance_1616_35_0 == NULL)
                    single_instance_1616_35_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1616_35_0))->set_x(((Active*)single_instance_1616_35_0)->get_x()+randrange(150));
    }
    or_final_or_event_1616_35_1_end: ;
}
void Frames::event_func_8371()
{
    // event 1617_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_cannon_fire_1)) goto event_1617_35_end;
        shipbullet_1984_instances.clear_selection();
        for (ObjectIterator it(shipbullet_1984_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) > (0))) { it.deselect(); continue; }
        }
        if (!shipbullet_1984_instances.has_selection()) goto event_1617_35_end;
        for (ObjectIterator it(shipbullet_1984_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-8);
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1617_35_end: ;
}
void Frames::event_func_8372()
{
    // event 1618_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_cannon_fire_1)) goto event_1618_35_end;
        shipbullet_1984_instances.clear_selection();
        for (ObjectIterator it(shipbullet_1984_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (20))) { it.deselect(); continue; }
        }
        if (!shipbullet_1984_instances.has_selection()) goto event_1618_35_end;
        for (ObjectIterator it(shipbullet_1984_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1618_35_end: ;
}
void Frames::event_func_8373()
{
    // event 1619_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_cannon_fire_1)) goto event_1619_35_end;
        gimmickcannonbullet_2050_instances.clear_selection();
        for (ObjectIterator it(gimmickcannonbullet_2050_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(0, cos_deg(((Active*)*it)->alterables->values.get(3))*((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.sub(1, sin_deg(((Active*)*it)->alterables->values.get(3))*((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(3), 0);
        }
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1619_35_end: ;
}
void Frames::event_func_8374()
{
    // event 1621_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1621_35_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1621_35_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (1200))) goto event_1621_35_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->flags.get(4)+((Active*)get_instance(masterlevel_37_instances))->alterables->flags.get(5)+((Active*)get_instance(masterlevel_37_instances))->alterables->flags.get(6)) >= (3))) goto event_1621_35_end;
        leveldarksky_2069_instances.clear_selection();
        for (ObjectIterator it(leveldarksky_2069_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!leveldarksky_2069_instances.has_selection()) goto event_1621_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(4, ((Active*)get_instance(player_389_instances))->get_x());
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(5, get_min(((Active*)get_instance(bosstornado_2114_instances))->get_y()-500, frame_top()-200));
        for (ObjectIterator it(leveldarksky_2069_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(43);
            ((Active*)*it)->set_y_scale(24);
        }
        for (ObjectIterator it(leveldarksky_2069_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        for (ObjectIterator it(leveldarksky_2069_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_4000_162);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        for (ObjectIterator it(leveldarksky_2069_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
        }
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
            group_main_engine_level_specific_methods_bosses_cannon_fire_1 = false;
    
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
    }
    event_1621_35_end: ;
}
void Frames::event_func_8375()
{
    // event 1622_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1622_35_end;
        leveldarksky_2069_instances.clear_selection();
        for (ObjectIterator it(leveldarksky_2069_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!leveldarksky_2069_instances.has_selection()) goto event_1622_35_end;
        for (ObjectIterator it(leveldarksky_2069_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 0.5);
        }
        for (ObjectIterator it(leveldarksky_2069_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(1));
        }
        {
            loop_gui_shiftup_running = true;
            int times = int(1);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_14();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
    }
    event_1622_35_end: ;
}
void Frames::event_func_8376()
{
    // event 1623_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1623_35_end;
        leveldarksky_2069_instances.clear_selection();
        for (ObjectIterator it(leveldarksky_2069_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (64))) { it.deselect(); continue; }
        }
        if (!leveldarksky_2069_instances.has_selection()) goto event_1623_35_end;
        for (ObjectIterator it(leveldarksky_2069_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1623_35_end: ;
}
void Frames::event_func_8377()
{
    // event 1624_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1624_35_end;
        leveldarksky_2069_instances.clear_selection();
        for (ObjectIterator it(leveldarksky_2069_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!leveldarksky_2069_instances.has_selection()) goto event_1624_35_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(7, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)-3, -50));
        for (ObjectIterator it(leveldarksky_2069_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
        }
    }
    event_1624_35_end: ;
}
void Frames::event_func_8378()
{
    // event 1625_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1625_35_end;
        leveldarksky_2069_instances.clear_selection();
        for (ObjectIterator it(leveldarksky_2069_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (50))) { it.deselect(); continue; }
        }
        if (!leveldarksky_2069_instances.has_selection()) goto event_1625_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(4, ((Active*)get_instance(player_389_instances))->get_x());
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(5, get_min(((Active*)get_instance(bosstornado_2114_instances))->get_y()-500, frame_top()-200));
        if (!group_main_engine_level_specific_methods_bosses_boss_prince_dail_1) {
            group_main_engine_level_specific_methods_bosses_boss_prince_dail_1 = true;
        }
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(7, 8);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 1);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unlock_music_82);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
        }
        ((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.set(1, 0);
        media.unlock(25-1);
    }
    event_1625_35_end: ;
}
void Frames::event_func_8379()
{
    // event 1626_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1626_35_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) > (0))) goto event_1626_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(0)) < (60))) goto event_1626_35_end;
        {
            loop_gui_shiftdown_running = true;
            int times = int(2);
            loop_gui_shiftdown_index = 0;
            while (loop_gui_shiftdown_index < times) {
                loop_gui_shiftdown_14();
                if (!loop_gui_shiftdown_running) break;
                loop_gui_shiftdown_index++;
            }
        }
        ((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.add(0, 1);
    }
    event_1626_35_end: ;
}
void Frames::event_func_8380()
{
    // event 1627_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1627_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(1)) < (700))) goto event_1627_35_end;
        ((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.add(1, 1);
    }
    event_1627_35_end: ;
}
void Frames::event_func_8381()
{
    // event 1628_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1628_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(1)) == (200))) goto event_1628_35_end;
        if (once_condition_1628_35) goto event_1628_35_end;
        once_condition_1628_35 = true;
        media.play(str_data_voices_88+global_strings->get(11)+str_da_da_04_01_ogg_163, 25-1);
    }
    event_1628_35_end: ;
}
void Frames::event_func_8382()
{
    // event 1629_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1629_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(1)) == (200))) goto event_1629_35_end;
        if (!((global_values->get(23)) == (1))) goto event_1629_35_end;
        ((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->flags.enable(1);
        global_values->set(23, 0);
    }
    event_1629_35_end: ;
}
void Frames::event_func_8383()
{
    // event 1630_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1630_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(1)) == (380))) goto event_1630_35_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1630_35_end;
        if (once_condition_1630_35) goto event_1630_35_end;
        once_condition_1630_35 = true;
        media.play(str_data_voices_88+global_strings->get(11)+str_li_lilac_never_ogg_164, 25-1);
    }
    event_1630_35_end: ;
}
void Frames::event_func_8384()
{
    // event 1631_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1631_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(1)) == (380))) goto event_1631_35_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (2))) goto event_1631_35_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) <= (3))) goto event_1631_35_end;
        if (once_condition_1631_35) goto event_1631_35_end;
        once_condition_1631_35 = true;
        media.play(str_data_voices_88+global_strings->get(11)+str_ca_carol_fatchance_ogg_165, 25-1);
    }
    event_1631_35_end: ;
}
void Frames::event_func_8385()
{
    // event 1632_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1632_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(1)) == (380))) goto event_1632_35_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_1632_35_end;
        if (once_condition_1632_35) goto event_1632_35_end;
        once_condition_1632_35 = true;
        media.play(str_data_voices_88+global_strings->get(11)+str_mi_milla_icantiwont_ogg_166, 25-1);
    }
    event_1632_35_end: ;
}
void Frames::event_func_8386()
{
    // event 1633_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1633_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(1)) == (380))) goto event_1633_35_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (5))) goto event_1633_35_end;
        if (once_condition_1633_35) goto event_1633_35_end;
        once_condition_1633_35 = true;
        media.play(str_data_voices_88+global_strings->get(11)+str_to_to_12_01_ogg_167, 25-1);
    }
    event_1633_35_end: ;
}
void Frames::event_func_8387()
{
    // event 1634_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1634_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(1)) == (500))) goto event_1634_35_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (4))) goto event_1634_35_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (5))) goto event_1634_35_end;
        if (once_condition_1634_35) goto event_1634_35_end;
        once_condition_1634_35 = true;
        media.play(str_data_voices_88+global_strings->get(11)+str_da_da_04_02_ogg_168, 25-1);
    }
    event_1634_35_end: ;
}
void Frames::event_func_8388()
{
    // event 1635_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1635_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(1)) == (550))) goto event_1635_35_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_1635_35_end;
        if (once_condition_1635_35) goto event_1635_35_end;
        once_condition_1635_35 = true;
        media.play(str_data_voices_88+global_strings->get(11)+str_da_da_04_02_ogg_168, 25-1);
    }
    event_1635_35_end: ;
}
void Frames::event_func_8389()
{
    // event 1636_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1636_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(1)) == (650))) goto event_1636_35_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (5))) goto event_1636_35_end;
        if (once_condition_1636_35) goto event_1636_35_end;
        once_condition_1636_35 = true;
        media.play(str_data_voices_88+global_strings->get(11)+str_da_da_04_02_ogg_168, 25-1);
    }
    event_1636_35_end: ;
}
void Frames::event_func_8390()
{
    // event 1637_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1637_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(1)) == (680))) goto event_1637_35_end;
        if (!(((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->flags.is_on(1))) goto event_1637_35_end;
        global_values->set(23, 1);
    }
    event_1637_35_end: ;
}
void Frames::event_func_8391()
{
    // event 1638_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1638_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (0))) goto event_1638_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(18)) == (3))) goto event_1638_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(7)) > (3))) goto event_1638_35_end;
        if (once_condition_1638_35) goto event_1638_35_end;
        once_condition_1638_35 = true;
        media.play(str_data_voices_88+global_strings->get(11)+str_da_da_04_03_ogg_169, 25-1);
    }
    event_1638_35_end: ;
}
void Frames::event_func_8392()
{
    // event 1639_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1639_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (0))) goto event_1639_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(14)) == (1))) goto event_1639_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(6)) < (10))) goto event_1639_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.add(6, 0.2);
    }
    event_1639_35_end: ;
}
void Frames::event_func_8393()
{
    // event 1640_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1640_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (0))) goto event_1640_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(14)) == (-1))) goto event_1640_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(6)) > (-10))) goto event_1640_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.sub(6, 0.2);
    }
    event_1640_35_end: ;
}
void Frames::event_func_8394()
{
    // event 1641_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1641_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (0))) goto event_1641_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(15)) == (-1))) goto event_1641_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.sub(7, 0.1);
    }
    event_1641_35_end: ;
}
void Frames::event_func_8395()
{
    // event 1642_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1642_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (0))) goto event_1642_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(15)) == (1))) goto event_1642_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.add(7, 0.1);
    }
    event_1642_35_end: ;
}
void Frames::event_func_8396()
{
    // event 1643_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1643_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(15)) == (0))) goto event_1643_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(7)) > (0))) goto event_1643_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.sub(7, 0.1);
    }
    event_1643_35_end: ;
}
void Frames::event_func_8397()
{
    // event 1644_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1644_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(15)) == (0))) goto event_1644_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(7)) < (0))) goto event_1644_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.add(7, 0.1);
    }
    event_1644_35_end: ;
}
void Frames::event_func_8398()
{
    // event 1645_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1645_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(14)) == (0))) goto event_1645_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (0))) goto event_1645_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(6)) < (0))) goto event_1645_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.add(6, 0.2);
    }
    event_1645_35_end: ;
}
void Frames::event_func_8399()
{
    // event 1646_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1646_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(14)) == (0))) goto event_1646_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (0))) goto event_1646_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(6)) > (0))) goto event_1646_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.sub(6, 0.2);
    }
    event_1646_35_end: ;
}
void Frames::event_func_8400()
{
    // event 1647_35
    bool or_result_1647_35 = false;
    bool or_temp_result_1647_35_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto or_event_1647_35_0_end;
        bosskujackerbase_2107_instances.clear_selection();
        for (ObjectIterator it(bosskujackerbase_2107_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
        }
        if (!bosskujackerbase_2107_instances.has_selection()) goto or_event_1647_35_0_end;
        or_result_1647_35 = true;
        or_temp_result_1647_35_0 = true;
    }
    or_event_1647_35_0_end: ;
    bosskujackerbase_2107_instances.clear_saved_selection();
    if (or_temp_result_1647_35_0) {
        bosskujackerbase_2107_instances.save_selection();
    }
    // event 1647_35
    bool or_temp_result_1647_35_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto or_event_1647_35_1_end;
        bosskujackerbase_2107_instances.clear_selection();
        for (ObjectIterator it(bosskujackerbase_2107_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
        }
        if (!bosskujackerbase_2107_instances.has_selection()) goto or_event_1647_35_1_end;
        or_result_1647_35 = true;
        or_temp_result_1647_35_1 = true;
        or_event_1647_35_1_end: ;
        if (or_temp_result_1647_35_1) {
            bosskujackerbase_2107_instances.save_selection();
        }
        if (!or_result_1647_35) goto or_final_or_event_1647_35_1_end;
        bosskujackerbase_2107_instances.empty_selection();
        if (or_temp_result_1647_35_0 || or_temp_result_1647_35_1) {
            bosskujackerbase_2107_instances.restore_selection();
        }
        for (ObjectIterator it(bosskujackerbase_2107_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(6, 0.5);
        }
    }
    or_final_or_event_1647_35_1_end: ;
}
void Frames::event_func_8401()
{
    // event 1648_35
    bool or_result_1648_35 = false;
    bool or_temp_result_1648_35_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto or_event_1648_35_0_end;
        bosskujackerbase_2107_instances.clear_selection();
        for (ObjectIterator it(bosskujackerbase_2107_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (0))) { it.deselect(); continue; }
        }
        if (!bosskujackerbase_2107_instances.has_selection()) goto or_event_1648_35_0_end;
        or_result_1648_35 = true;
        or_temp_result_1648_35_0 = true;
    }
    or_event_1648_35_0_end: ;
    bosskujackerbase_2107_instances.clear_saved_selection();
    if (or_temp_result_1648_35_0) {
        bosskujackerbase_2107_instances.save_selection();
    }
    // event 1648_35
    bool or_temp_result_1648_35_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto or_event_1648_35_1_end;
        bosskujackerbase_2107_instances.clear_selection();
        for (ObjectIterator it(bosskujackerbase_2107_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (0))) { it.deselect(); continue; }
        }
        if (!bosskujackerbase_2107_instances.has_selection()) goto or_event_1648_35_1_end;
        or_result_1648_35 = true;
        or_temp_result_1648_35_1 = true;
        or_event_1648_35_1_end: ;
        if (or_temp_result_1648_35_1) {
            bosskujackerbase_2107_instances.save_selection();
        }
        if (!or_result_1648_35) goto or_final_or_event_1648_35_1_end;
        bosskujackerbase_2107_instances.empty_selection();
        if (or_temp_result_1648_35_0 || or_temp_result_1648_35_1) {
            bosskujackerbase_2107_instances.restore_selection();
        }
        for (ObjectIterator it(bosskujackerbase_2107_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 0.5);
        }
    }
    or_final_or_event_1648_35_1_end: ;
}
void Frames::event_func_8402()
{
    // event 1649_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1649_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (0))) goto event_1649_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.add(4, ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(6));
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.add(5, ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(7));
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(3, get_min(get_max(-45, ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(6)*-5), 45));
    }
    event_1649_35_end: ;
}
void Frames::event_func_8403()
{
    // event 1650_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1650_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (0))) goto event_1650_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(18)) > (1))) goto event_1650_35_end;
        bosskujackerhead_2113_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(7))) { it.deselect(); continue; }
        }
        if (!bosskujackerhead_2113_instances.has_selection()) goto event_1650_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(16)) != (3))) goto event_1650_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.add(19, 1);
    }
    event_1650_35_end: ;
}
void Frames::event_func_8404()
{
    // event 1651_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1651_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (0))) goto event_1651_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(19)) > (30))) goto event_1651_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(16, 1);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(19, -500);
    }
    event_1651_35_end: ;
}
void Frames::event_func_8405()
{
    // event 1652_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1652_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (0))) goto event_1652_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(14)) == (0))) goto event_1652_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(16)) == (0))) goto event_1652_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(12)) > (-999))) goto event_1652_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(14, 1);
    }
    event_1652_35_end: ;
}
void Frames::event_func_8406()
{
    // event 1653_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1653_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (0))) goto event_1653_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(4)) < (((Active*)get_instance(player_389_instances))->get_x()-80))) goto event_1653_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(3)) > (0))) goto event_1653_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(16)) == (0))) goto event_1653_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(12)) > (-999))) goto event_1653_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(14, 1);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.add(6, 0.2);
    }
    event_1653_35_end: ;
}
void Frames::event_func_8407()
{
    // event 1654_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1654_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (0))) goto event_1654_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(4)) > (((Active*)get_instance(player_389_instances))->get_x()+80))) goto event_1654_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(3)) < (0))) goto event_1654_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(16)) == (0))) goto event_1654_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(12)) > (-999))) goto event_1654_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(14, -1);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.sub(6, 0.2);
    }
    event_1654_35_end: ;
}
void Frames::event_func_8408()
{
    // event 1655_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1655_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (0))) goto event_1655_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(4)) >= (1170))) goto event_1655_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(5)) > (((Active*)get_instance(bosstornado_2114_instances))->get_y()-120))) goto event_1655_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.add(5, -1);
    }
    event_1655_35_end: ;
}
void Frames::event_func_8409()
{
    // event 1656_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1656_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (0))) goto event_1656_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(4)) >= (1170))) goto event_1656_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(5)) < (((Active*)get_instance(bosstornado_2114_instances))->get_y()-120))) goto event_1656_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.add(5, 2);
    }
    event_1656_35_end: ;
}
void Frames::event_func_8410()
{
    // event 1657_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1657_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (0))) goto event_1657_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(4)) < (1170))) goto event_1657_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(5)) > (((Active*)get_instance(bosstornado_2114_instances))->get_y()-280))) goto event_1657_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.add(5, -1);
    }
    event_1657_35_end: ;
}
void Frames::event_func_8411()
{
    // event 1658_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1658_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (0))) goto event_1658_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(4)) < (1170))) goto event_1658_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(5)) < (((Active*)get_instance(bosstornado_2114_instances))->get_y()-280))) goto event_1658_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.add(5, 2);
    }
    event_1658_35_end: ;
}
void Frames::event_func_8412()
{
    // event 1659_35
    bool or_result_1659_35 = false;
    bool or_temp_result_1659_35_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto or_event_1659_35_0_end;
        bosskujackerbase_2107_instances.clear_selection();
        for (ObjectIterator it(bosskujackerbase_2107_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (90))) { it.deselect(); continue; }
        }
        if (!bosskujackerbase_2107_instances.has_selection()) goto or_event_1659_35_0_end;
        or_result_1659_35 = true;
        or_temp_result_1659_35_0 = true;
    }
    or_event_1659_35_0_end: ;
    bosskujackerbase_2107_instances.clear_saved_selection();
    if (or_temp_result_1659_35_0) {
        bosskujackerbase_2107_instances.save_selection();
    }
    // event 1659_35
    bool or_temp_result_1659_35_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto or_event_1659_35_1_end;
        bosskujackerbase_2107_instances.clear_selection();
        for (ObjectIterator it(bosskujackerbase_2107_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (270))) { it.deselect(); continue; }
        }
        if (!bosskujackerbase_2107_instances.has_selection()) goto or_event_1659_35_1_end;
        or_result_1659_35 = true;
        or_temp_result_1659_35_1 = true;
        or_event_1659_35_1_end: ;
        if (or_temp_result_1659_35_1) {
            bosskujackerbase_2107_instances.save_selection();
        }
        if (!or_result_1659_35) goto or_final_or_event_1659_35_1_end;
        bosskujackerbase_2107_instances.empty_selection();
        if (or_temp_result_1659_35_0 || or_temp_result_1659_35_1) {
            bosskujackerbase_2107_instances.restore_selection();
        }
        for (ObjectIterator it(bosskujackerbase_2107_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)+((Active*)*it)->alterables->values.get(2)*0.1)%math_helper%360);
        }
    }
    or_final_or_event_1659_35_1_end: ;
}
void Frames::event_func_8413()
{
    // event 1660_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1660_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) <= (0))) goto event_1660_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(2)) > (45))) goto event_1660_35_end;
        if (!(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->flags.is_off(2))) goto event_1660_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)) > (300))) goto event_1660_35_end;
        media.play_id(SOUND_WINGFLAP_275, -1, 1);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->flags.enable(2);
    }
    event_1660_35_end: ;
}
void Frames::event_func_8414()
{
    // event 1661_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1661_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) <= (0))) goto event_1661_35_end;
        if (!(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->flags.is_on(2))) goto event_1661_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)) < (90))) goto event_1661_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->flags.disable(2);
    }
    event_1661_35_end: ;
}
void Frames::event_func_8415()
{
    // event 1662_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1662_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (0))) goto event_1662_35_end;
        if (!((global_values->get(3)%math_helper%20) == (0))) goto event_1662_35_end;
        bosskujackerhead_2113_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(player_389_instances))->x + 0, ((Active*)get_instance(player_389_instances))->y + 0));
        }
    }
    event_1662_35_end: ;
}
void Frames::event_func_8416()
{
    // event 1663_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1663_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (0))) goto event_1663_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(16)) == (0))) goto event_1663_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.add(12, 1);
    }
    event_1663_35_end: ;
}
void Frames::event_func_8417()
{
    // event 1664_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1664_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (0))) goto event_1664_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(12)) > (200-get_min(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(18)*20, 50)))) goto event_1664_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.add(17, 1);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(12, -40+randrange(70));
    }
    event_1664_35_end: ;
}
void Frames::event_func_8418()
{
    // event 1665_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1665_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(17)) == (1))) goto event_1665_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(16, 2);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.add(17, 1+randrange(2)*2);
    }
    event_1665_35_end: ;
}
void Frames::event_func_8419()
{
    // event 1666_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1666_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(17)) == (3))) goto event_1666_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(16, 2);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.add(17, 1);
    }
    event_1666_35_end: ;
}
void Frames::event_func_8420()
{
    // event 1667_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1667_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(17)) == (5))) goto event_1667_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(16, 2);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.add(17, 1);
    }
    event_1667_35_end: ;
}
void Frames::event_func_8421()
{
    // event 1668_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1668_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(17)) == (7))) goto event_1668_35_end;
        if (!(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->flags.is_off(5))) goto event_1668_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(16, 4);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->flags.toggle(5);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(17, 0);
    }
    event_1668_35_end: ;
}
void Frames::event_func_8422()
{
    // event 1669_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1669_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(17)) == (7))) goto event_1669_35_end;
        if (!(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->flags.is_on(5))) goto event_1669_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(16, 4);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->flags.toggle(5);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(17, 2+randrange(2)*2);
    }
    event_1669_35_end: ;
}
void Frames::event_func_8423()
{
    // event 1670_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1670_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(16)) == (1))) goto event_1670_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(6)) < (0))) goto event_1670_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(14, 0);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(6, get_min(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(6)+0.4, 0));
    }
    event_1670_35_end: ;
}
void Frames::event_func_8424()
{
    // event 1671_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1671_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(16)) == (1))) goto event_1671_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(6)) > (0))) goto event_1671_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(14, 0);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(6, get_max(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(6)-0.4, 0));
    }
    event_1671_35_end: ;
}
void Frames::event_func_8425()
{
    // event 1672_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1672_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(16)) == (1))) goto event_1672_35_end;
        if (once_condition_1672_35) goto event_1672_35_end;
        once_condition_1672_35 = true;
        media.play_id(SOUND_DAIL_TRUEPOWER2_274, -1, 1);
    }
    event_1672_35_end: ;
}
void Frames::event_func_8426()
{
    // event 1673_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1673_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(16)) == (1))) goto event_1673_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(6)) == (0))) goto event_1673_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(8, 1);
        bosskujackerhead_2113_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->force_animation(11);
        }
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(1, 180);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->flags.disable(2);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(2, 60);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(9, 5);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(16, 0);
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
        bosskujackertailtarget_2109_instances.clear_selection();
        for (ObjectIterator it(bosskujackertailtarget_2109_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
    }
    event_1673_35_end: ;
}
void Frames::event_func_8427()
{
    // event 1674_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1674_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (1))) goto event_1674_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(5)) > (((Active*)get_instance(bosstornado_2114_instances))->get_y()-200))) goto event_1674_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.sub(5, 2);
    }
    event_1674_35_end: ;
}
void Frames::event_func_8428()
{
    // event 1675_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1675_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (1))) goto event_1675_35_end;
        bosskujackerhead_2113_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.add(4, ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(6));
    }
    event_1675_35_end: ;
}
void Frames::event_func_8429()
{
    // event 1676_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1676_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (1))) goto event_1676_35_end;
        bosskujackertailtarget_2109_instances.clear_selection();
        for (ObjectIterator it(bosskujackertailtarget_2109_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(2))) { it.deselect(); continue; }
        }
        if (!bosskujackertailtarget_2109_instances.has_selection()) goto event_1676_35_end;
        for (ObjectIterator it(bosskujackertailtarget_2109_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(2);
        }
    }
    event_1676_35_end: ;
}
void Frames::event_func_8430()
{
    // event 1677_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1677_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (1))) goto event_1677_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)) > (0))) goto event_1677_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)) < (180))) goto event_1677_35_end;
        bosskujackerhead_2113_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
        }
        ((Active*)get_instance(bosskujackerleg1_2106_instances))->force_frame(0);
        ((Active*)get_instance(bosskujackerleg2_2105_instances))->force_frame(0);
    }
    event_1677_35_end: ;
}
void Frames::event_func_8431()
{
    // event 1678_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1678_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (1))) goto event_1678_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)) > (20))) goto event_1678_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)) < (160))) goto event_1678_35_end;
        bosskujackerhead_2113_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(2);
        }
        ((Active*)get_instance(bosskujackerleg2_2105_instances))->force_frame(1);
        ((Active*)get_instance(bosskujackerleg1_2106_instances))->force_frame(1);
    }
    event_1678_35_end: ;
}
void Frames::event_func_8432()
{
    // event 1679_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1679_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (1))) goto event_1679_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)) > (40))) goto event_1679_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)) < (140))) goto event_1679_35_end;
        if (!(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->flags.is_off(2))) goto event_1679_35_end;
        media.play_id(SOUND_KUJACKER_CHARGELIGHTNING_273, -1, 1);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->flags.enable(2);
    }
    event_1679_35_end: ;
}
void Frames::event_func_8433()
{
    // event 1680_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1680_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (1))) goto event_1680_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)) > (40))) goto event_1680_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)) < (140))) goto event_1680_35_end;
        bosskujackerhead_2113_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(3);
        }
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.sub(1, 9-(global_values->get(3)%math_helper%5)*3);
        bosskujackerwing1_2110_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing1_2110_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
        bosskujackerwing2_2111_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing2_2111_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
        ((Active*)get_instance(bosskujackerbase_2107_instances))->force_animation(11);
        bosskujackerhead2_2108_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead2_2108_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(0)/math_helper/2);
        }
        bosskujackertail_2104_instances.clear_selection();
        for (ObjectIterator it(bosskujackertail_2104_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
        ((Active*)get_instance(bosskujackerleg2_2105_instances))->force_frame(2);
        ((Active*)get_instance(bosskujackerleg1_2106_instances))->force_frame(2);
        FrameObject * single_instance_1680_35_0; single_instance_1680_35_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosskujackerbase_2107_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectschargebeam_2052(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1680_35_0 == NULL)
                    single_instance_1680_35_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1680_35_0))->alterables->values.set(1, randrange(360));
    }
    event_1680_35_end: ;
}
void Frames::event_func_8434()
{
    // event 1681_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1681_35_end;
        effectschargebeam_2052_instances.clear_selection();
        for (ObjectIterator it(effectschargebeam_2052_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(1), 0);
            ((Active*)*it)->set_x_scale(((Active*)*it)->alterables->values.get(0)*0.1);
            ((Active*)*it)->alterables->values.sub(0, 2);
            ((Active*)*it)->move_back();
        }
    }
    event_1681_35_end: ;
}
void Frames::event_func_8435()
{
    // event 1682_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1682_35_end;
        effectschargebeam_2052_instances.clear_selection();
        for (ObjectIterator it(effectschargebeam_2052_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
        }
        if (!effectschargebeam_2052_instances.has_selection()) goto event_1682_35_end;
        for (ObjectIterator it(effectschargebeam_2052_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1682_35_end: ;
}
void Frames::event_func_8436()
{
    // event 1683_35
    bool or_result_1683_35 = false;
    bool or_temp_result_1683_35_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto or_event_1683_35_0_end;
        bosskujackerbase_2107_instances.clear_selection();
        for (ObjectIterator it(bosskujackerbase_2107_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!bosskujackerbase_2107_instances.has_selection()) goto or_event_1683_35_0_end;
        or_result_1683_35 = true;
        or_temp_result_1683_35_0 = true;
    }
    or_event_1683_35_0_end: ;
    bosskujackerbase_2107_instances.clear_saved_selection();
    if (or_temp_result_1683_35_0) {
        bosskujackerbase_2107_instances.save_selection();
    }
    // event 1683_35
    bool or_temp_result_1683_35_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto or_event_1683_35_1_end;
        bosskujackerbase_2107_instances.clear_selection();
        for (ObjectIterator it(bosskujackerbase_2107_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (180))) { it.deselect(); continue; }
        }
        if (!bosskujackerbase_2107_instances.has_selection()) goto or_event_1683_35_1_end;
        or_result_1683_35 = true;
        or_temp_result_1683_35_1 = true;
        or_event_1683_35_1_end: ;
        if (or_temp_result_1683_35_1) {
            bosskujackerbase_2107_instances.save_selection();
        }
        if (!or_result_1683_35) goto or_final_or_event_1683_35_1_end;
        bosskujackerbase_2107_instances.empty_selection();
        if (or_temp_result_1683_35_0 || or_temp_result_1683_35_1) {
            bosskujackerbase_2107_instances.restore_selection();
        }
        {
            loop_lightning_running = true;
            int times = int(16);
            loop_lightning_index = 0;
            while (loop_lightning_index < times) {
                loop_lightning_35();
                if (!loop_lightning_running) break;
                loop_lightning_index++;
            }
        }
    }
    or_final_or_event_1683_35_1_end: ;
}
void Frames::event_func_8437()
{
    // event 1685_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1685_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (1))) goto event_1685_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)) > (40))) goto event_1685_35_end;
        if (!(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->flags.is_on(2))) goto event_1685_35_end;
        bosslightning2_2058_instances.clear_selection();
        for (ObjectIterator it(bosslightning2_2058_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/2)%math_helper%4);
        }
    }
    event_1685_35_end: ;
}
void Frames::event_func_8438()
{
    // event 1686_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1686_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (2))) goto event_1686_35_end;
        if (!(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->flags.is_on(2))) goto event_1686_35_end;
        bosslightning2_2058_instances.clear_selection();
        for (ObjectIterator it(bosslightning2_2058_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/2)%math_helper%6);
        }
    }
    event_1686_35_end: ;
}
void Frames::event_func_8439()
{
    // event 1687_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1687_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (1))) goto event_1687_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)) >= (170))) goto event_1687_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)) < (180))) goto event_1687_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(8, 2);
        bosskujackerhead_2113_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        bosskujackerhead2_2108_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead2_2108_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        bosskujackerwing1_2110_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing1_2110_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        bosskujackerwing2_2111_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing2_2111_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        bosskujackertail_2104_instances.clear_selection();
        for (ObjectIterator it(bosskujackertail_2104_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        ((Active*)get_instance(bosskujackerbase_2107_instances))->force_animation(0);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->flags.disable(2);
    }
    event_1687_35_end: ;
}
void Frames::event_func_8440()
{
    // event 1688_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1688_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (2))) goto event_1688_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)) > (180))) goto event_1688_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)) < (300))) goto event_1688_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.sub(1, 2);
    }
    event_1688_35_end: ;
}
void Frames::event_func_8441()
{
    // event 1689_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1689_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (2))) goto event_1689_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)) > (180))) goto event_1689_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)) < (300))) goto event_1689_35_end;
        if (!(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->flags.is_off(2))) goto event_1689_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->flags.enable(2);
        media.play_id(SOUND_KUJACKER_LIGHTNING_272, -1, 1);
        leveldarksky_2069_instances.clear_selection();
        for (ObjectIterator it(leveldarksky_2069_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 20));
    }
    event_1689_35_end: ;
}
void Frames::event_func_8442()
{
    // event 1690_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1690_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (2))) goto event_1690_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)) >= (0))) goto event_1690_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)) < (20))) goto event_1690_35_end;
        bosskujackertailtarget_2109_instances.clear_selection();
        for (ObjectIterator it(bosskujackertailtarget_2109_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(4))) { it.deselect(); continue; }
        }
        if (!bosskujackertailtarget_2109_instances.has_selection()) goto event_1690_35_end;
        for (ObjectIterator it(bosskujackertailtarget_2109_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_1690_35_end: ;
}
void Frames::event_func_8443()
{
    // event 1691_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1691_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (2))) goto event_1691_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)) >= (0))) goto event_1691_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)) < (20))) goto event_1691_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(8, 0);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(1, 200);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->flags.disable(2);
        bosskujackerhead_2113_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(5);
        }
        bosskujackertailtarget_2109_instances.clear_selection();
        for (ObjectIterator it(bosskujackertailtarget_2109_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(5);
        }
    }
    event_1691_35_end: ;
}
void Frames::event_func_8444()
{
    // event 1692_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1692_35_end;
        bosslightning2_2058_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(bosslightning2_2058_instances, playercharactersensor_383_instances)) goto event_1692_35_end;
        for (ObjectIterator it(bosslightning2_2058_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(2))) { it.deselect(); continue; }
        }
        if (!bosslightning2_2058_instances.has_selection()) goto event_1692_35_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1692_35_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (3))) goto event_1692_35_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1692_35_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 20);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
        media.play_id(SOUND_DAMAGE_ELECTRIC_2_373, -1, 1);
    }
    event_1692_35_end: ;
}
void Frames::event_func_8445()
{
    // event 1693_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1693_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(16)) == (2))) goto event_1693_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(6)) < (0))) goto event_1693_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(14, 0);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(6, get_min(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(6)+0.2, 0));
    }
    event_1693_35_end: ;
}
void Frames::event_func_8446()
{
    // event 1694_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1694_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(16)) == (2))) goto event_1694_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(6)) > (0))) goto event_1694_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(14, 0);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(6, get_max(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(6)-0.2, 0));
    }
    event_1694_35_end: ;
}
void Frames::event_func_8447()
{
    // event 1695_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1695_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(16)) == (2))) goto event_1695_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(6)) == (0))) goto event_1695_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(8, 3);
        bosskujackerhead_2113_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->force_animation(11);
        }
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(1, 180);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(2, 60);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(9, 5);
        FrameObject * single_instance_1695_35_0; single_instance_1695_35_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosskujackerbase_2107_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossbolt_2054(parent->x + 0, parent->y + 80), parent->layer);
                if (single_instance_1695_35_0 == NULL)
                    single_instance_1695_35_0 = new_obj;
            }
        }
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(16, 0);
        media.play_id(SOUND_KUJACKER_ZAP_276, -1, 1);
    }
    event_1695_35_end: ;
}
void Frames::event_func_8448()
{
    // event 1696_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1696_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (3))) goto event_1696_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.add(1, 1);
    }
    event_1696_35_end: ;
}
void Frames::event_func_8449()
{
    // event 1697_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1697_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (3))) goto event_1697_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)) < (180))) goto event_1697_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)) >= (160))) goto event_1697_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(8, 0);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->flags.disable(3);
    }
    event_1697_35_end: ;
}
void Frames::event_func_8450()
{
    // event 1698_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1698_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(16)) == (3))) goto event_1698_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(14, 1);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.add(6, 0.2);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(10, -1);
    }
    event_1698_35_end: ;
}
void Frames::event_func_8451()
{
    // event 1699_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1699_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(16)) == (3))) goto event_1699_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(4)) > (frame_right()+500))) goto event_1699_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(8, 4);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(16, 0);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->set_direction(0);
        bosskujackerhead2_2108_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead2_2108_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        bosskujackerwing1_2110_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing1_2110_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        bosskujackerwing2_2111_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing2_2111_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(bosskujackerleg2_2105_instances))->set_direction(0);
        ((Active*)get_instance(bosskujackerleg1_2106_instances))->set_direction(0);
    }
    event_1699_35_end: ;
}
void Frames::event_func_8452()
{
    // event 1700_35
    bool or_result_1700_35 = false;
    bool or_temp_result_1700_35_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto or_event_1700_35_0_end;
        bosskujackerbase_2107_instances.clear_selection();
        for (ObjectIterator it(bosskujackerbase_2107_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) != (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (frame_right()+100))) { it.deselect(); continue; }
        }
        if (!bosskujackerbase_2107_instances.has_selection()) goto or_event_1700_35_0_end;
        if (!((effectwarning_1065_instances.size()) == (0))) goto or_event_1700_35_0_end;
        or_result_1700_35 = true;
        or_temp_result_1700_35_0 = true;
    }
    or_event_1700_35_0_end: ;
    bosskujackerbase_2107_instances.clear_saved_selection();
    if (or_temp_result_1700_35_0) {
        bosskujackerbase_2107_instances.save_selection();
    }
    // event 1700_35
    bool or_temp_result_1700_35_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto or_event_1700_35_1_end;
        bosskujackerbase_2107_instances.clear_selection();
        for (ObjectIterator it(bosskujackerbase_2107_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) < (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (60))) { it.deselect(); continue; }
        }
        if (!bosskujackerbase_2107_instances.has_selection()) goto or_event_1700_35_1_end;
        if (!((effectwarning_1065_instances.size()) == (0))) goto or_event_1700_35_1_end;
        or_result_1700_35 = true;
        or_temp_result_1700_35_1 = true;
        or_event_1700_35_1_end: ;
        if (or_temp_result_1700_35_1) {
            bosskujackerbase_2107_instances.save_selection();
        }
        if (!or_result_1700_35) goto or_final_or_event_1700_35_1_end;
        bosskujackerbase_2107_instances.empty_selection();
        if (or_temp_result_1700_35_0 || or_temp_result_1700_35_1) {
            bosskujackerbase_2107_instances.restore_selection();
        }
        FrameObject * single_instance_1700_35_0; single_instance_1700_35_0 = NULL;
        // select single: true false false
        player_389_instances.clear_selection();
        for (ObjectIterator p_it(player_389_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectwarning_1513(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1700_35_0 == NULL)
                    single_instance_1700_35_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1700_35_0))->set_visible(true);
    }
    or_final_or_event_1700_35_1_end: ;
}
void Frames::event_func_8453()
{
    // event 1701_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1701_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (4))) goto event_1701_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(12)) == (0))) goto event_1701_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(10)) < (0))) goto event_1701_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.add(12, 1);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(4, frame_right()+200);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(5, ((Active*)get_instance(effectwarning_1065_instances, default_active_instance))->get_y()-30);
        media.play_id(SOUND_KUJACKER_RIGHT_2_270, -1, 1);
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1701_35_end: ;
}
void Frames::event_func_8454()
{
    // event 1702_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1702_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (4))) goto event_1702_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(12)) == (0))) goto event_1702_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(10)) > (0))) goto event_1702_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.add(12, 1);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(4, frame_left()-200);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(5, ((Active*)get_instance(effectwarning_1065_instances, default_active_instance))->get_y()-30);
        media.play_id(SOUND_KUJACKER_LEFT_2_271, -1, 1);
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1702_35_end: ;
}
void Frames::event_func_8455()
{
    // event 1703_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1703_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (4))) goto event_1703_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(6, ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(10)*16);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.add(4, cos_deg(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(3))*((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(6));
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.add(5, sin_deg(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(3))*((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(6)*-1);
        bosskujackertailtarget_2109_instances.clear_selection();
        for (ObjectIterator it(bosskujackertailtarget_2109_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
    }
    event_1703_35_end: ;
}
void Frames::event_func_8456()
{
    // event 1704_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1704_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (4))) goto event_1704_35_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1704_35_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1704_35_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1704_35_end;
        bosskujackerhead_2113_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(bosskujackerhead_2113_instances, playercharactersensor_383_instances)) goto event_1704_35_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -8);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.sub(24, 4);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 6));
        media.play_id(SOUND_COMMON_STRIKE_23, -1, 1);
    }
    event_1704_35_end: ;
}
void Frames::event_func_8457()
{
    // event 1705_35
    bool or_result_1705_35 = false;
    bool or_temp_result_1705_35_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto or_event_1705_35_0_end;
        bosskujackerbase_2107_instances.clear_selection();
        for (ObjectIterator it(bosskujackerbase_2107_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!bosskujackerbase_2107_instances.has_selection()) goto or_event_1705_35_0_end;
        or_result_1705_35 = true;
        or_temp_result_1705_35_0 = true;
    }
    or_event_1705_35_0_end: ;
    bosskujackerbase_2107_instances.clear_saved_selection();
    if (or_temp_result_1705_35_0) {
        bosskujackerbase_2107_instances.save_selection();
    }
    // event 1705_35
    bool or_temp_result_1705_35_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto or_event_1705_35_1_end;
        bosskujackerbase_2107_instances.clear_selection();
        for (ObjectIterator it(bosskujackerbase_2107_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!bosskujackerbase_2107_instances.has_selection()) goto or_event_1705_35_1_end;
        or_result_1705_35 = true;
        or_temp_result_1705_35_1 = true;
        or_event_1705_35_1_end: ;
        if (or_temp_result_1705_35_1) {
            bosskujackerbase_2107_instances.save_selection();
        }
        if (!or_result_1705_35) goto or_final_or_event_1705_35_1_end;
        bosskujackerbase_2107_instances.empty_selection();
        if (or_temp_result_1705_35_0 || or_temp_result_1705_35_1) {
            bosskujackerbase_2107_instances.restore_selection();
        }
        for (ObjectIterator it(bosskujackerbase_2107_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(4);
        }
    }
    or_final_or_event_1705_35_1_end: ;
}
void Frames::event_func_8458()
{
    // event 1706_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1706_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (4))) goto event_1706_35_end;
        if (!(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->flags.is_on(4))) goto event_1706_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.add(12, 1);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(3, get_min(90, get_max(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(3)+((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(11), -90)));
    }
    event_1706_35_end: ;
}
void Frames::event_func_8459()
{
    // event 1707_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1707_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (4))) goto event_1707_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(12)) > (100))) goto event_1707_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(10, 0-((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(10));
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->flags.disable(4);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.add(13, 1);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(11, ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(11)*((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(13)%math_helper%2)*2-1));
        bosstailtracker_2057_instances.clear_selection();
        for (ObjectIterator it(bosstailtracker_2057_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(-100, -100);
            pos_end_1707_35_0: ;
        }
    }
    event_1707_35_end: ;
}
void Frames::event_func_8460()
{
    // event 1708_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1708_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (4))) goto event_1708_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(13)) > (3))) goto event_1708_35_end;
        bosskujackerhead_2113_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(7))) { it.deselect(); continue; }
        }
        if (!bosskujackerhead_2113_instances.has_selection()) goto event_1708_35_end;
        bosskujackertailtarget_2109_instances.clear_selection();
        for (ObjectIterator it(bosskujackertailtarget_2109_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(6);
            ((Active*)*it)->alterables->values.set(0, 3);
            ((Active*)*it)->set_direction(1);
        }
    }
    event_1708_35_end: ;
}
void Frames::event_func_8461()
{
    // event 1709_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1709_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (4))) goto event_1709_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(13)) > (3))) goto event_1709_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(4, ((Active*)get_instance(player_389_instances))->get_x());
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(5, get_min(((Active*)get_instance(bosstornado_2114_instances))->get_y()-500, frame_top()-200));
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(7, 10);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(8, 0);
        bosskujackerwing1_2110_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing1_2110_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        bosskujackerwing2_2111_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing2_2111_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        bosskujackerhead_2113_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        ((Active*)get_instance(bosskujackerleg2_2105_instances))->force_animation(0);
        ((Active*)get_instance(bosskujackerleg1_2106_instances))->force_animation(0);
        ((Active*)get_instance(bosskujackerpilot_2112_instances))->force_animation(0);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->force_animation(0);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(9, 5);
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
            ((Active*)*it)->alterables->flags.disable(6);
            ((Active*)*it)->alterables->flags.disable(7);
        }
        bosskujackertailtarget_2109_instances.clear_selection();
        for (ObjectIterator it(bosskujackertailtarget_2109_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(5);
        }
    }
    event_1709_35_end: ;
}
void Frames::event_func_8462()
{
    // event 1710_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1710_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(16)) == (4))) goto event_1710_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(6)) < (0))) goto event_1710_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(14, 0);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(6, get_min(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(6)+0.4, 0));
    }
    event_1710_35_end: ;
}
void Frames::event_func_8463()
{
    // event 1711_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1711_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(16)) == (4))) goto event_1711_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(6)) > (0))) goto event_1711_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(14, 0);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(6, get_max(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(6)-0.4, 0));
    }
    event_1711_35_end: ;
}
void Frames::event_func_8464()
{
    // event 1712_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1712_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(16)) == (4))) goto event_1712_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(6)) == (0))) goto event_1712_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(8, -1);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->set_direction(24);
        ((Active*)get_instance(bosstornado_2114_instances))->set_x(((Active*)get_instance(bosskujackerbase_2107_instances))->get_x());
        bosskujackerhead_2113_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(16, 0);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->flags.disable(3);
        ((Active*)get_instance(bosstornado_2114_instances))->alterables->values.set(0, 0);
    }
    event_1712_35_end: ;
}
void Frames::event_func_8465()
{
    // event 1713_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1713_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (-1))) goto event_1713_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(5)) > (((Active*)get_instance(bosstornado_2114_instances))->get_y()-200))) goto event_1713_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.sub(5, 2);
    }
    event_1713_35_end: ;
}
void Frames::event_func_8466()
{
    // event 1714_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1714_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (-1))) goto event_1714_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(9, get_min(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(9)+0.1, 12));
        effectsgust_2055_instances.clear_selection();
        for (ObjectIterator it(effectsgust_2055_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-2);
        }
    }
    event_1714_35_end: ;
}
void Frames::event_func_8467()
{
    // event 1715_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1715_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (-1))) goto event_1715_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(2)) < (90))) goto event_1715_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.add(2, 1);
    }
    event_1715_35_end: ;
}
