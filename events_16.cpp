#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_1289()
{
    // event 1069_13
    {
        if (!(group_main_engine_1)) goto event_1069_13_end;
        ((Active*)get_instance(masterringloss_431_instances))->alterables->values.set(4, 1-((Active*)get_instance(masterringloss_431_instances))->alterables->values.get(4));
    }
    event_1069_13_end: ;
}
void Frames::loop_rings_ringloss_creation_13()
{
    event_func_1287();
    event_func_1288();
    event_func_1289();
}
void Frames::event_func_1290()
{
    // event 1066_13
    {
        if (!(group_main_engine_1)) goto event_1066_13_end;
        ((Active*)get_instance(masterringloss_431_instances))->alterables->values.set(3, get_min(16, ((Active*)get_instance(masterringloss_431_instances))->alterables->values.get(0)));
        ((Active*)get_instance(masterringloss_431_instances))->alterables->values.set(0, get_max(((Active*)get_instance(masterringloss_431_instances))->alterables->values.get(0)-16, 0));
        ((Active*)get_instance(masterringloss_431_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(masterringloss_431_instances))->alterables->values.set(5, 11.25);
        {
            loop_rings_ringloss_creation_running = true;
            int times = int(((Active*)get_instance(masterringloss_431_instances))->alterables->values.get(3));
            loop_rings_ringloss_creation_index = 0;
            while (loop_rings_ringloss_creation_index < times) {
                loop_rings_ringloss_creation_13();
                if (!loop_rings_ringloss_creation_running) break;
                loop_rings_ringloss_creation_index++;
            }
        }
        ((Active*)get_instance(masterringloss_431_instances))->alterables->values.set(6, ((Active*)get_instance(masterringloss_431_instances))->alterables->values.get(6)-((Active*)get_instance(masterringloss_431_instances))->alterables->values.get(8));
    }
    event_1066_13_end: ;
}
void Frames::loop_rings_ringloss_step_13()
{
    event_func_1290();
}
void Frames::event_func_1291()
{
    // event 1581_13
    {
        if (!(group_main_engine_1)) goto event_1581_13_end;
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(((ArrayObject*)*it)->get_value(((ArrayObject*)*it)->data.x_pos+1, 0), ((ArrayObject*)*it)->data.x_pos, 0);
            ((ArrayObject*)*it)->set_value(((ArrayObject*)*it)->get_value(((ArrayObject*)*it)->data.x_pos+1, 1), ((ArrayObject*)*it)->data.x_pos, 1);
            ((ArrayObject*)*it)->set_value(((ArrayObject*)*it)->get_value(((ArrayObject*)*it)->data.x_pos+1, 2), ((ArrayObject*)*it)->data.x_pos, 2);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1581_13_end: ;
}
void Frames::loop_shift_query_me_13()
{
    event_func_1291();
}
void Frames::event_func_1292()
{
    // event 1580_13
    {
        if (!(group_main_engine_1)) goto event_1580_13_end;
        if (!((((ArrayObject*)get_instance(queuemusic_232_instances))->get_value(((ArrayObject*)get_instance(queuemusic_232_instances))->data.x_pos, 0)) == (string_to_number(((StringParser*)get_instance(stringparser_427_instances))->get_element(2))))) goto event_1580_13_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)-1);
        }
        {
            loop_shift_query_me_running = true;
            int times = int(((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(4)-((ArrayObject*)get_instance(queuemusic_232_instances))->data.x_pos);
            loop_shift_query_me_index = 0;
            while (loop_shift_query_me_index < times) {
                loop_shift_query_me_13();
                if (!loop_shift_query_me_running) break;
                loop_shift_query_me_index++;
            }
        }
            loop_iterate_query_me_stop_running = false;
    
    }
    event_1580_13_end: ;
}
void Frames::event_func_1293()
{
    // event 1582_13
    {
        if (!(group_main_engine_1)) goto event_1582_13_end;
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1582_13_end: ;
}
void Frames::loop_iterate_query_me_stop_13()
{
    event_func_1292();
    event_func_1293();
}
void Frames::event_func_1294()
{
    // event 1566_13
    {
        if (!(group_main_engine_1)) goto event_1566_13_end;
        if (!media.is_channel_playing(32-1)) goto event_1566_13_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (string_to_number(((StringParser*)get_instance(stringparser_427_instances))->get_element(2))))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (string_to_number(((StringParser*)get_instance(stringparser_427_instances))->get_element(4))))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto event_1566_13_end;
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(((Active*)get_single(controllermusic_128_instances, it.current_index, default_active_instance))->alterables->values.get(3), ((ArrayObject*)*it)->data.x_pos, 0);
            ((ArrayObject*)*it)->set_value(media.get_channel_position(-1 +32), ((ArrayObject*)*it)->data.x_pos, 1);
            ((ArrayObject*)*it)->set_value(((Active*)get_single(controllermusic_128_instances, it.current_index, default_active_instance))->alterables->values.get(6), ((ArrayObject*)*it)->data.x_pos, 2);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1566_13_end: ;
}
void Frames::event_func_1295()
{
    // event 1567_13
    {
        if (!(group_main_engine_1)) goto event_1567_13_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (string_to_number(((StringParser*)get_instance(stringparser_427_instances))->get_element(2))))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (string_to_number(((StringParser*)get_instance(stringparser_427_instances))->get_element(4))))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto event_1567_13_end;
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, string_to_number(((StringParser*)get_instance(stringparser_427_instances, it.current_index))->get_element(3)));
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_play_music_56+((StringParser*)get_instance(stringparser_427_instances))->get_element(2));
            if (dyn_it == (*loops).end()) goto dynamic_1567_13_0_end;
            DynamicLoop & dyn_loop = dyn_it->second;
            (*dyn_loop.running) = true;
            int times = int(1);
            (*dyn_loop.index) = 0;
            while ((*dyn_loop.index) < times) {
                dyn_loop.callback(this);
                if (!(*dyn_loop.running)) break;
                (*dyn_loop.index)++;
            }
        }
        dynamic_1567_13_0_end: ;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, string_to_number(((StringParser*)get_instance(stringparser_427_instances, it.current_index))->get_element(2)));
            ((Active*)*it)->alterables->values.set(6, string_to_number(((StringParser*)get_instance(stringparser_427_instances, it.current_index))->get_element(4)));
        }
        media.set_channel_volume(32-1, global_values->get(25));
    }
    event_1567_13_end: ;
}
void Frames::event_func_1296()
{
    // event 1568_13
    {
        if (!(group_main_engine_1)) goto event_1568_13_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((ArrayObject*)get_instance(queuemusic_232_instances, it.current_index))->data.x_pos);
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->data.x_pos = 0;
        }
        {
            loop_iterate_query_me_stop_running = true;
            int times = int(((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(4));
            loop_iterate_query_me_stop_index = 0;
            while (loop_iterate_query_me_stop_index < times) {
                loop_iterate_query_me_stop_13();
                if (!loop_iterate_query_me_stop_running) break;
                loop_iterate_query_me_stop_index++;
            }
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->data.x_pos = ((Active*)get_instance(controllermusic_128_instances, it.current_index, default_active_instance))->alterables->values.get(4);
        }
    }
    event_1568_13_end: ;
}
void Frames::event_func_1297()
{
    // event 1569_13
    {
        if (!(group_main_engine_1)) goto event_1569_13_end;
        if (!media.is_channel_playing(32-1)) goto event_1569_13_end;
        if (!((string_to_number(((StringParser*)get_instance(stringparser_427_instances))->get_element(3))) == (0))) goto event_1569_13_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (string_to_number(((StringParser*)get_instance(stringparser_427_instances))->get_element(2))))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (string_to_number(((StringParser*)get_instance(stringparser_427_instances))->get_element(4))))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto event_1569_13_end;
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringParser*)get_instance(stringparser_427_instances, it.current_index))->get_element(2)), ((ArrayObject*)*it)->data.x_pos, 0);
            ((ArrayObject*)*it)->set_value(0, ((ArrayObject*)*it)->data.x_pos, 1);
            ((ArrayObject*)*it)->set_value(string_to_number(((StringParser*)get_instance(stringparser_427_instances, it.current_index))->get_element(4)), ((ArrayObject*)*it)->data.x_pos, 2);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1569_13_end: ;
}
void Frames::loop_process_call_play_music_13()
{
    event_func_1294();
    event_func_1295();
    event_func_1296();
    event_func_1297();
}
void Frames::event_func_1298()
{
    // event 1577_13
    {
        if (!(group_main_engine_1)) goto event_1577_13_end;
        if (!((((StringParser*)get_instance(stringparser_427_instances))->value.size()) == (12))) goto event_1577_13_end;
        media.stop_channel(32-1);
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->data.x_pos = 0;
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -1);
            ((Active*)*it)->alterables->values.set(6, 0);
        }
    }
    event_1577_13_end: ;
}
void Frames::event_func_1299()
{
    // event 1578_13
    {
        if (!(group_main_engine_1)) goto event_1578_13_end;
        if (!((((StringParser*)get_instance(stringparser_427_instances))->value.size()) > (12))) goto event_1578_13_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (string_to_number(((StringParser*)get_instance(stringparser_427_instances))->get_element(2))))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto event_1578_13_end;
        media.stop_channel(32-1);
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -1);
            ((Active*)*it)->alterables->values.set(6, 0);
        }
    }
    event_1578_13_end: ;
}
void Frames::event_func_1300()
{
    // event 1579_13
    {
        if (!(group_main_engine_1)) goto event_1579_13_end;
        if (!((((StringParser*)get_instance(stringparser_427_instances))->value.size()) > (12))) goto event_1579_13_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (string_to_number(((StringParser*)get_instance(stringparser_427_instances))->get_element(2))))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto event_1579_13_end;
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((ArrayObject*)get_instance(queuemusic_232_instances, it.current_index))->data.x_pos);
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->data.x_pos = 0;
        }
        {
            loop_iterate_query_me_stop_running = true;
            int times = int(((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(4));
            loop_iterate_query_me_stop_index = 0;
            while (loop_iterate_query_me_stop_index < times) {
                loop_iterate_query_me_stop_13();
                if (!loop_iterate_query_me_stop_running) break;
                loop_iterate_query_me_stop_index++;
            }
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->data.x_pos = ((Active*)get_instance(controllermusic_128_instances, it.current_index, default_active_instance))->alterables->values.get(4);
        }
    }
    event_1579_13_end: ;
}
void Frames::loop_process_call_stop_music_13()
{
    event_func_1298();
    event_func_1299();
    event_func_1300();
}
void Frames::event_func_1301()
{
    // event 932_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_check_for_being_hurt_1)) goto event_932_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (2))) goto event_932_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 9);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 0);
        {
            loop_sound_die_running = true;
            int times = int(1);
            loop_sound_die_index = 0;
            while (loop_sound_die_index < times) {
                loop_sound_die_8();
                if (!loop_sound_die_running) break;
                loop_sound_die_index++;
            }
        }
            group_main_engine_global_methods_player_player_control_actions_common_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = false;
    
            group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = false;
    
    }
    event_932_13_end: ;
}
void Frames::event_func_1302()
{
    // event 935_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_check_for_being_hurt_1)) goto event_935_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (3))) goto event_935_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 10);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 0);
    }
    event_935_13_end: ;
}
void Frames::loop_check_death_13()
{
    event_func_1301();
    event_func_1302();
}
void Frames::event_func_1303()
{
    // event 1281_13
    {
        if (!(group_main_engine_1)) goto event_1281_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) >= (21))) goto event_1281_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) <= (25))) goto event_1281_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
    }
    event_1281_13_end: ;
}
void Frames::loop_player01_interruption_action_13()
{
    event_func_1303();
}
void Frames::event_func_1304()
{
    // event 1162_13
    {
        if (!(group_main_engine_1)) goto event_1162_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) >= (5))) goto event_1162_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) <= (6))) goto event_1162_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) >= (0))) goto event_1162_13_end;
        playersensorrightbig_393_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, qualifier_19)) goto event_1162_13_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1162_13_end: ;
}
void Frames::event_func_1305()
{
    // event 1163_13
    {
        if (!(group_main_engine_1)) goto event_1163_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_1163_13_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) > (5))) goto event_1163_13_end;
        playersensorrightbig_393_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, qualifier_19)) goto event_1163_13_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1163_13_end: ;
}
void Frames::event_func_1306()
{
    // event 1164_13
    {
        if (!(group_main_engine_1)) goto event_1164_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) >= (5))) goto event_1164_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) <= (6))) goto event_1164_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) <= (0))) goto event_1164_13_end;
        playersensorleftbig_391_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, qualifier_19)) goto event_1164_13_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1164_13_end: ;
}
void Frames::event_func_1307()
{
    // event 1165_13
    {
        if (!(group_main_engine_1)) goto event_1165_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_1165_13_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) > (5))) goto event_1165_13_end;
        playersensorleftbig_391_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, qualifier_19)) goto event_1165_13_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1165_13_end: ;
}
void Frames::event_func_1308()
{
    // event 1166_13
    bool or_result_1166_13 = false;
    bool or_temp_result_1166_13_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1166_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) >= (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1166_13_0_end;
        playersensorbottombig_397_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, qualifier_19)) goto or_event_1166_13_0_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto or_event_1166_13_0_end;
        or_result_1166_13 = true;
        or_temp_result_1166_13_0 = true;
    }
    or_event_1166_13_0_end: ;
    playersensorbottombig_397_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    qualifier_19.clear_saved_selection();
    if (or_temp_result_1166_13_0) {
        playersensorbottombig_397_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        qualifier_19.save_selection();
    }
    // event 1166_13
    bool or_temp_result_1166_13_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1166_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1166_13_1_end;
        playercharactersensor_383_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(playercharactersensor_383_instances, qualifier_19)) goto or_event_1166_13_1_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto or_event_1166_13_1_end;
        or_result_1166_13 = true;
        or_temp_result_1166_13_1 = true;
        or_event_1166_13_1_end: ;
        playercharactersensor_383_instances.clear_saved_selection();
        if (or_temp_result_1166_13_1) {
            playermovementvalues_245_instances.save_selection();
            playercharactersensor_383_instances.save_selection();
            qualifier_19.save_selection();
        }
        if (!or_result_1166_13) goto or_final_or_event_1166_13_1_end;
        playersensorbottombig_397_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        qualifier_19.empty_selection();
        playercharactersensor_383_instances.empty_selection();
        if (or_temp_result_1166_13_0 || or_temp_result_1166_13_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1166_13_0) {
            playersensorbottombig_397_instances.restore_selection();
        }
        if (or_temp_result_1166_13_0 || or_temp_result_1166_13_1) {
            qualifier_19.restore_selection();
        }
        if (or_temp_result_1166_13_1) {
            playercharactersensor_383_instances.restore_selection();
        }
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    or_final_or_event_1166_13_1_end: ;
}
void Frames::event_func_1309()
{
    // event 1265_13
    {
        if (!(group_main_engine_1)) goto event_1265_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1265_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1265_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1265_13_end;
        playersensorbottombig_397_instances.clear_selection();
        redspringup_440_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, redspringup_440_instances)) goto event_1265_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -18);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 0);
        for (ObjectIterator it(redspringup_440_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1265_13_end: ;
}
void Frames::event_func_1310()
{
    // event 1266_13
    {
        if (!(group_main_engine_1)) goto event_1266_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) <= (0))) goto event_1266_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1266_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1266_13_end;
        playersensorleftbig_391_instances.clear_selection();
        redspringright_441_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, redspringright_441_instances)) goto event_1266_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 14);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        {
            loop_player01_interruption_action_running = true;
            int times = int(1);
            loop_player01_interruption_action_index = 0;
            while (loop_player01_interruption_action_index < times) {
                loop_player01_interruption_action_13();
                if (!loop_player01_interruption_action_running) break;
                loop_player01_interruption_action_index++;
            }
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(14, 5);
        redspringright_441_instances.clear_selection();
        for (ObjectIterator it(redspringright_441_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1266_13_end: ;
}
void Frames::event_func_1311()
{
    // event 1267_13
    {
        if (!(group_main_engine_1)) goto event_1267_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) >= (0))) goto event_1267_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1267_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1267_13_end;
        playersensorrightbig_393_instances.clear_selection();
        redspringleft_442_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, redspringleft_442_instances)) goto event_1267_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -14);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        {
            loop_player01_interruption_action_running = true;
            int times = int(1);
            loop_player01_interruption_action_index = 0;
            while (loop_player01_interruption_action_index < times) {
                loop_player01_interruption_action_13();
                if (!loop_player01_interruption_action_running) break;
                loop_player01_interruption_action_index++;
            }
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(14, -5);
        redspringleft_442_instances.clear_selection();
        for (ObjectIterator it(redspringleft_442_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1267_13_end: ;
}
void Frames::event_func_1312()
{
    // event 1268_13
    {
        if (!(group_main_engine_1)) goto event_1268_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) <= (0))) goto event_1268_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1268_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1268_13_end;
        playersensortopbig_395_instances.clear_selection();
        redspringdown_443_instances.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, redspringdown_443_instances)) goto event_1268_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 18);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        for (ObjectIterator it(redspringdown_443_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1268_13_end: ;
}
void Frames::event_func_1313()
{
    // event 1269_13
    {
        if (!(group_main_engine_1)) goto event_1269_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1269_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1269_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1269_13_end;
        playersensorbottombig_397_instances.clear_selection();
        redspringupright_438_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, redspringupright_438_instances)) goto event_1269_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 14);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -14);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(14, 5);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 0);
        for (ObjectIterator it(redspringupright_438_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1269_13_end: ;
}
void Frames::event_func_1314()
{
    // event 1270_13
    {
        if (!(group_main_engine_1)) goto event_1270_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1270_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) <= (0))) goto event_1270_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1270_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1270_13_end;
        playersensorleftbig_391_instances.clear_selection();
        redspringupright_438_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, redspringupright_438_instances)) goto event_1270_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 14);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -14);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(14, 5);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 0);
        for (ObjectIterator it(redspringupright_438_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1270_13_end: ;
}
void Frames::event_func_1315()
{
    // event 1271_13
    {
        if (!(group_main_engine_1)) goto event_1271_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1271_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1271_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1271_13_end;
        playersensorbottombig_397_instances.clear_selection();
        redspringupleft_439_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, redspringupleft_439_instances)) goto event_1271_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -14);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -14);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(14, -5);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 0);
        for (ObjectIterator it(redspringupleft_439_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1271_13_end: ;
}
void Frames::event_func_1316()
{
    // event 1272_13
    {
        if (!(group_main_engine_1)) goto event_1272_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1272_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) >= (0))) goto event_1272_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1272_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1272_13_end;
        playersensorrightbig_393_instances.clear_selection();
        redspringupleft_439_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, redspringupleft_439_instances)) goto event_1272_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -14);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -14);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(14, -5);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 0);
        for (ObjectIterator it(redspringupleft_439_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1272_13_end: ;
}
void Frames::event_func_1317()
{
    // event 1273_13
    {
        if (!(group_main_engine_1)) goto event_1273_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1273_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1273_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1273_13_end;
        playersensorbottombig_397_instances.clear_selection();
        yellowspringup_434_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, yellowspringup_434_instances)) goto event_1273_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -11);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 0);
        for (ObjectIterator it(yellowspringup_434_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1273_13_end: ;
}
void Frames::event_func_1318()
{
    // event 1274_13
    {
        if (!(group_main_engine_1)) goto event_1274_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) <= (0))) goto event_1274_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1274_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1274_13_end;
        playersensorleftbig_391_instances.clear_selection();
        yellowspringright_435_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, yellowspringright_435_instances)) goto event_1274_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 10);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        {
            loop_player01_interruption_action_running = true;
            int times = int(1);
            loop_player01_interruption_action_index = 0;
            while (loop_player01_interruption_action_index < times) {
                loop_player01_interruption_action_13();
                if (!loop_player01_interruption_action_running) break;
                loop_player01_interruption_action_index++;
            }
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(14, 5);
        yellowspringright_435_instances.clear_selection();
        for (ObjectIterator it(yellowspringright_435_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1274_13_end: ;
}
void Frames::event_func_1319()
{
    // event 1275_13
    {
        if (!(group_main_engine_1)) goto event_1275_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) >= (0))) goto event_1275_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1275_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1275_13_end;
        playersensorrightbig_393_instances.clear_selection();
        yellowspringleft_436_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, yellowspringleft_436_instances)) goto event_1275_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -10);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        {
            loop_player01_interruption_action_running = true;
            int times = int(1);
            loop_player01_interruption_action_index = 0;
            while (loop_player01_interruption_action_index < times) {
                loop_player01_interruption_action_13();
                if (!loop_player01_interruption_action_running) break;
                loop_player01_interruption_action_index++;
            }
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(14, -5);
        yellowspringleft_436_instances.clear_selection();
        for (ObjectIterator it(yellowspringleft_436_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1275_13_end: ;
}
void Frames::event_func_1320()
{
    // event 1276_13
    {
        if (!(group_main_engine_1)) goto event_1276_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) <= (0))) goto event_1276_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1276_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1276_13_end;
        playersensortopbig_395_instances.clear_selection();
        yellowspringdown_437_instances.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, yellowspringdown_437_instances)) goto event_1276_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 11);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        for (ObjectIterator it(yellowspringdown_437_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1276_13_end: ;
}
void Frames::event_func_1321()
{
    // event 1277_13
    {
        if (!(group_main_engine_1)) goto event_1277_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1277_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1277_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1277_13_end;
        playersensorbottombig_397_instances.clear_selection();
        yellowspringupright_433_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, yellowspringupright_433_instances)) goto event_1277_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 9);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -9);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(14, 5);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 0);
        for (ObjectIterator it(yellowspringupright_433_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1277_13_end: ;
}
void Frames::event_func_1322()
{
    // event 1278_13
    {
        if (!(group_main_engine_1)) goto event_1278_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1278_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) <= (0))) goto event_1278_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1278_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1278_13_end;
        playersensorleftbig_391_instances.clear_selection();
        yellowspringupright_433_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, yellowspringupright_433_instances)) goto event_1278_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 9);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -9);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(14, 5);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 0);
        for (ObjectIterator it(yellowspringupright_433_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1278_13_end: ;
}
void Frames::event_func_1323()
{
    // event 1279_13
    {
        if (!(group_main_engine_1)) goto event_1279_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1279_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1279_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1279_13_end;
        playersensorbottombig_397_instances.clear_selection();
        yellowspringupleft_432_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, yellowspringupleft_432_instances)) goto event_1279_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -9);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -9);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(14, -5);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 0);
        for (ObjectIterator it(yellowspringupleft_432_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1279_13_end: ;
}
void Frames::event_func_1324()
{
    // event 1280_13
    {
        if (!(group_main_engine_1)) goto event_1280_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1280_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) >= (0))) goto event_1280_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1280_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1280_13_end;
        playersensorrightbig_393_instances.clear_selection();
        yellowspringupleft_432_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, yellowspringupleft_432_instances)) goto event_1280_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -9);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -9);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(14, -5);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 0);
        for (ObjectIterator it(yellowspringupleft_432_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1280_13_end: ;
}
void Frames::loop_player01_interruption_control_13()
{
    event_func_1304();
    event_func_1305();
    event_func_1306();
    event_func_1307();
    event_func_1308();
    event_func_1309();
    event_func_1310();
    event_func_1311();
    event_func_1312();
    event_func_1313();
    event_func_1314();
    event_func_1315();
    event_func_1316();
    event_func_1317();
    event_func_1318();
    event_func_1319();
    event_func_1320();
    event_func_1321();
    event_func_1322();
    event_func_1323();
    event_func_1324();
}
void Frames::event_func_1325()
{
    // event 1043_13
    {
        if (!(group_main_engine_1)) goto event_1043_13_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (loop_link_objects_1_index))) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto event_1043_13_end;
        link_352_instances.clear_selection();
        if (!check_overlap(qualifier_12, link_352_instances)) goto event_1043_13_end;
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, ((Active*)get_single(link_352_instances, it.current_index, default_active_instance))->alterables->values.get(25));
        }
    }
    event_1043_13_end: ;
}
void Frames::loop_create_links_1_13()
{
    event_func_1325();
}
void Frames::event_func_1326()
{
    // event 1042_13
    {
        if (!(group_main_engine_1)) goto event_1042_13_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (loop_link_objects_1_index))) { it.deselect(); continue; }
            if (((Active*)(*it))->outside_playfield()) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto event_1042_13_end;
        {
            loop_create_links_1_running = true;
            int times = int(1);
            loop_create_links_1_index = 0;
            while (loop_create_links_1_index < times) {
                loop_create_links_1_13();
                if (!loop_create_links_1_running) break;
                loop_create_links_1_index++;
            }
        }
    }
    event_1042_13_end: ;
}
void Frames::loop_link_objects_1_13()
{
    event_func_1326();
}
void Frames::event_func_1327()
{
    // event 1065_13
    {
        if (!(group_main_engine_1)) goto event_1065_13_end;
        ((Active*)get_instance(masterringloss_431_instances))->alterables->values.set(0, get_min(((Active*)get_instance(masterringloss_431_instances))->alterables->values.get(0), 32));
        ((Active*)get_instance(masterringloss_431_instances))->alterables->values.set(6, ((Active*)get_instance(masterringloss_431_instances))->alterables->values.get(7));
        {
            loop_rings_ringloss_step_running = true;
            int times = int(1+((Active*)get_instance(masterringloss_431_instances))->alterables->values.get(0));
            loop_rings_ringloss_step_index = 0;
            while (loop_rings_ringloss_step_index < times) {
                loop_rings_ringloss_step_13();
                if (!loop_rings_ringloss_step_running) break;
                loop_rings_ringloss_step_index++;
            }
        }
    }
    event_1065_13_end: ;
}
void Frames::loop_rings_ringloss_13()
{
    event_func_1327();
}
void Frames::event_func_1328()
{
    // event 1575_13
    {
        if (!(group_main_engine_1)) goto event_1575_13_end;
        if (!((((ArrayObject*)get_instance(queuemusic_232_instances))->get_value(((ArrayObject*)get_instance(queuemusic_232_instances))->data.x_pos, 0)) == (string_to_number(((StringParser*)get_instance(stringparser_427_instances))->get_element(2))))) goto event_1575_13_end;
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(0, ((ArrayObject*)*it)->data.x_pos, 1);
        }
            loop_iterate_query_me_reset_running = false;
    
    }
    event_1575_13_end: ;
}
void Frames::loop_iterate_query_me_reset_13()
{
    event_func_1328();
    event_func_1293();
}
void Frames::event_func_1329()
{
    // event 1573_13
    {
        if (!(group_main_engine_1)) goto event_1573_13_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (string_to_number(((StringParser*)get_instance(stringparser_427_instances))->get_element(2))))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto event_1573_13_end;
        if (!((global_values->get(4)) >= (0))) goto event_1573_13_end;
        media.set_channel_position(32-1, 0);
    }
    event_1573_13_end: ;
}
void Frames::event_func_1330()
{
    // event 1574_13
    {
        if (!(group_main_engine_1)) goto event_1574_13_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (string_to_number(((StringParser*)get_instance(stringparser_427_instances))->get_element(2))))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto event_1574_13_end;
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((ArrayObject*)get_instance(queuemusic_232_instances, it.current_index))->data.x_pos);
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->data.x_pos = 0;
        }
        {
            loop_iterate_query_me_reset_running = true;
            int times = int(((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(4));
            loop_iterate_query_me_reset_index = 0;
            while (loop_iterate_query_me_reset_index < times) {
                loop_iterate_query_me_reset_13();
                if (!loop_iterate_query_me_reset_running) break;
                loop_iterate_query_me_reset_index++;
            }
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->data.x_pos = ((Active*)get_instance(controllermusic_128_instances, it.current_index, default_active_instance))->alterables->values.get(4);
        }
    }
    event_1574_13_end: ;
}
void Frames::loop_process_call_reset_music_13()
{
    event_func_1329();
    event_func_1330();
}
void Frames::loop_wrapper_sound_kick1_13(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_13(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_13(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_13(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_13(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_sound_idle7_13(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_play_music_8_13(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_dig2_13(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_13(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_13(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_13(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_process_call_unlock_music_13(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_13(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_process_call_reset_music_13(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_13(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_13(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_13(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_hurt1_13(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_camera_mode2_13(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_13();
}
void Frames::loop_wrapper_camera_mode1_13(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_13();
}
void Frames::loop_wrapper_camera_mode0_13(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_13();
}
void Frames::loop_wrapper_process_call_play_music_13(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_13(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_13();
}
void Frames::loop_wrapper_sound_attack1_13(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_13(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_13(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_13(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_sound_uppercut3_13(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_13(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_13(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_13(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_13(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_13(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_13(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_13(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_13(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_13();
}
void Frames::loop_wrapper_play_music_5_13(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_13();
}
void Frames::loop_wrapper_play_music_6_13(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_13();
}
void Frames::loop_wrapper_play_music_7_13(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_13();
}
void Frames::loop_wrapper_process_call_resume_music_13(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_process_call_me_13(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_process_call_unqueue_music_13(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_sound_cyclone0_13(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_process_call_stop_music_13(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
