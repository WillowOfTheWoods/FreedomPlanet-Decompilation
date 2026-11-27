#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_12837()
{
    // event 1863_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1863_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (-1))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1863_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(2)-0.1, -5));
            ((Active*)*it)->alterables->values.set(7, -1);
        }
    }
    event_1863_58_end: ;
}
void Frames::event_func_12838()
{
    // event 1864_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1864_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (2))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1864_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 2);
        }
    }
    event_1864_58_end: ;
}
void Frames::event_func_12839()
{
    // event 1865_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1865_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (0))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1865_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+0.2, 5));
            ((Active*)*it)->alterables->values.set(7, 1);
        }
    }
    event_1865_58_end: ;
}
void Frames::event_func_12840()
{
    // event 1866_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1866_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1866_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+0.1, 5));
            ((Active*)*it)->alterables->values.set(7, 1);
        }
    }
    event_1866_58_end: ;
}
void Frames::event_func_12841()
{
    // event 1867_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1867_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (0))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1867_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+0.2, 0));
        }
    }
    event_1867_58_end: ;
}
void Frames::event_func_12842()
{
    // event 1868_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1868_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1868_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(2)-0.2, 0));
        }
    }
    event_1868_58_end: ;
}
void Frames::event_func_12843()
{
    // event 1869_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1869_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1869_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 90);
        }
    }
    event_1869_58_end: ;
}
void Frames::event_func_12844()
{
    // event 1870_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1870_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) > (0))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1870_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
        }
    }
    event_1870_58_end: ;
}
void Frames::event_func_12845()
{
    // event 1871_58
    bool or_result_1871_58 = false;
    bool or_temp_result_1871_58_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto or_event_1871_58_0_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()+300))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto or_event_1871_58_0_end;
        or_result_1871_58 = true;
        or_temp_result_1871_58_0 = true;
    }
    or_event_1871_58_0_end: ;
    bossspademask_2231_instances.clear_saved_selection();
    if (or_temp_result_1871_58_0) {
        bossspademask_2231_instances.save_selection();
    }
    // event 1871_58
    bool or_temp_result_1871_58_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto or_event_1871_58_1_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()-300))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto or_event_1871_58_1_end;
        or_result_1871_58 = true;
        or_temp_result_1871_58_1 = true;
        or_event_1871_58_1_end: ;
        if (or_temp_result_1871_58_1) {
            bossspademask_2231_instances.save_selection();
        }
        if (!or_result_1871_58) goto or_final_or_event_1871_58_1_end;
        bossspademask_2231_instances.empty_selection();
        if (or_temp_result_1871_58_0 || or_temp_result_1871_58_1) {
            bossspademask_2231_instances.restore_selection();
        }
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 4);
        }
    }
    or_final_or_event_1871_58_1_end: ;
}
void Frames::event_func_12846()
{
    // event 1872_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1872_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) > (120))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1872_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1872_58_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+200))) goto event_1872_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1872_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 2);
            ((Active*)*it)->alterables->values.set(3, -8);
            ((Active*)*it)->alterables->values.set(11, 0);
        }
        media.play_id(SOUND_COMMON_JUMP_8, -1, 1);
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, -1);
        }
    }
    event_1872_58_end: ;
}
void Frames::event_func_12847()
{
    // event 1873_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1873_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) > (120))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1873_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1873_58_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+200))) goto event_1873_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1873_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 2);
            ((Active*)*it)->alterables->values.set(3, -8);
            ((Active*)*it)->alterables->values.set(11, 0);
        }
        media.play_id(SOUND_COMMON_JUMP_8, -1, 1);
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 1);
        }
    }
    event_1873_58_end: ;
}
void Frames::event_func_12848()
{
    // event 1874_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1874_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (((Active*)*it)->alterables->values.get(4)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1874_58_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
        }
    }
    event_1874_58_end: ;
}
void Frames::event_func_12849()
{
    // event 1875_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1875_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (((Active*)*it)->alterables->values.get(4)))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1875_58_end;
        if (!((get_abs(((Active*)get_single(bossspademask_2231_instances, default_active_instance))->alterables->values.get(2))) > (0))) goto event_1875_58_end;
        if (!((get_abs(((Active*)get_single(bossspademask_2231_instances, default_active_instance))->alterables->values.get(2))) < (5))) goto event_1875_58_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(14+get_abs(((Active*)get_single(bossspademask_2231_instances, it.current_index, default_active_instance))->alterables->values.get(2))*5);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1875_58_end: ;
}
void Frames::event_func_12850()
{
    // event 1876_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1876_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (((Active*)*it)->alterables->values.get(4)))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1876_58_end;
        if (!((get_abs(((Active*)get_single(bossspademask_2231_instances, default_active_instance))->alterables->values.get(2))) >= (5))) goto event_1876_58_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(27+get_abs(((Active*)get_single(bossspademask_2231_instances, it.current_index, default_active_instance))->alterables->values.get(2))*2);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1876_58_end: ;
}
void Frames::event_func_12851()
{
    // event 1877_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1877_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1877_58_end;
        if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_punch_combo_1) {
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_punch_combo_1 = true;
        }
    }
    event_1877_58_end: ;
}
void Frames::event_func_12852()
{
    // event 1878_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1878_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1878_58_end;
        if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_2_jump_1) {
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_2_jump_1 = true;
        }
    }
    event_1878_58_end: ;
}
void Frames::event_func_12853()
{
    // event 1879_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_2_jump_1)) goto event_1879_58_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
        }
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+0.3, 15));
        }
    }
    event_1879_58_end: ;
}
void Frames::event_func_12854()
{
    // event 1880_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_2_jump_1)) goto event_1880_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1880_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, randrange(2)*2-1);
        }
    }
    event_1880_58_end: ;
}
void Frames::event_func_12855()
{
    // event 1881_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_2_jump_1)) goto event_1881_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (-1))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1881_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(2)-0.1, -5));
            ((Active*)*it)->alterables->values.set(7, -1);
        }
    }
    event_1881_58_end: ;
}
void Frames::event_func_12856()
{
    // event 1882_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_2_jump_1)) goto event_1882_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1882_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+0.1, 5));
            ((Active*)*it)->alterables->values.set(7, 1);
        }
    }
    event_1882_58_end: ;
}
void Frames::event_func_12857()
{
    // event 1883_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_2_jump_1)) goto event_1883_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (-2))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1883_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1883_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1883_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 1);
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3), -5));
            ((Active*)*it)->alterables->values.set(5, 5);
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->alterables->values.get(7)*3);
            ((Active*)*it)->alterables->values.set(7, -1);
        }
    }
    event_1883_58_end: ;
}
void Frames::event_func_12858()
{
    // event 1884_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_2_jump_1)) goto event_1884_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (-2))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1884_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1884_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1884_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 1);
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3), -5));
            ((Active*)*it)->alterables->values.set(5, 5);
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->alterables->values.get(7)*3);
            ((Active*)*it)->alterables->values.set(7, 1);
        }
    }
    event_1884_58_end: ;
}
void Frames::event_func_12859()
{
    // event 1885_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_2_jump_1)) goto event_1885_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (((Active*)*it)->alterables->values.get(4)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (((Active*)get_instance(player_389_instances))->get_x()-300))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)get_instance(player_389_instances))->get_x()+300))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1885_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1885_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->alterables->values.set(5, 4);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
            ((Active*)*it)->alterables->values.set(10, 0);
        }
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 3);
        }
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(12, 1);
        }
    }
    event_1885_58_end: ;
}
void Frames::event_func_12860()
{
    // event 1886_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_2_jump_1)) goto event_1886_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (((Active*)*it)->alterables->values.get(4)))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1886_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
            ((Active*)*it)->alterables->values.set(10, 0);
        }
    }
    event_1886_58_end: ;
}
void Frames::event_func_12861()
{
    // event 1887_58
    bool or_result_1887_58 = false;
    bool or_temp_result_1887_58_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_2_jump_1)) goto or_event_1887_58_0_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) < (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (-2))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto or_event_1887_58_0_end;
        or_result_1887_58 = true;
        or_temp_result_1887_58_0 = true;
    }
    or_event_1887_58_0_end: ;
    bossspademask_2231_instances.clear_saved_selection();
    if (or_temp_result_1887_58_0) {
        bossspademask_2231_instances.save_selection();
    }
    // event 1887_58
    bool or_temp_result_1887_58_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_2_jump_1)) goto or_event_1887_58_1_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) < (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (-6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_y()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (0))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto or_event_1887_58_1_end;
        or_result_1887_58 = true;
        or_temp_result_1887_58_1 = true;
        or_event_1887_58_1_end: ;
        if (or_temp_result_1887_58_1) {
            bossspademask_2231_instances.save_selection();
        }
        if (!or_result_1887_58) goto or_final_or_event_1887_58_1_end;
        bossspademask_2231_instances.empty_selection();
        if (or_temp_result_1887_58_0 || or_temp_result_1887_58_1) {
            bossspademask_2231_instances.restore_selection();
        }
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 3);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
    }
    or_final_or_event_1887_58_1_end: ;
}
void Frames::event_func_12862()
{
    // event 1888_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1888_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (3))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1888_58_end;
        if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_3_flash_step_1) {
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_3_flash_step_1 = true;
        }
    }
    event_1888_58_end: ;
}
void Frames::event_func_12863()
{
    // event 1889_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_3_flash_step_1)) goto event_1889_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 1);
        }
    }
    event_1889_58_end: ;
}
void Frames::event_func_12864()
{
    // event 1890_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_3_flash_step_1)) goto event_1890_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (5))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1890_58_end;
        FrameObject * single_instance_1890_58_0; single_instance_1890_58_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossspademask_2231_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + -12), parent->layer);
                if (single_instance_1890_58_0 == NULL)
                    single_instance_1890_58_0 = new_obj;
            }
        }
        media.play_id(SOUND_SPADE_DASH_155, -1, 1);
    }
    event_1890_58_end: ;
}
void Frames::event_func_12865()
{
    // event 1891_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_3_flash_step_1)) goto event_1891_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) > (5))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1891_58_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(29);
        }
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->alterables->values.get(7)*15);
        }
    }
    event_1891_58_end: ;
}
void Frames::event_func_12866()
{
    // event 1892_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_3_flash_step_1)) goto event_1892_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) > (5))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1892_58_end;
        if (!((((Active*)get_single(bossspademask_2231_instances, default_active_instance))->alterables->values.get(9)%math_helper%2) == (1))) goto event_1892_58_end;
        FrameObject * single_instance_1892_58_0; single_instance_1892_58_0 = NULL;
        // select single: true false false
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator p_it(bossspade_2194_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspadeimage_321(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1892_58_0 == NULL)
                    single_instance_1892_58_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1892_58_0))->set_direction(((Active*)get_single(bossspade_2194_instances, default_active_instance))->get_direction());
        ((Active*)single_instance_1892_58_0)->move_back(((Active*)get_single(bossspade_2194_instances)));
    }
    event_1892_58_end: ;
}
void Frames::event_func_12867()
{
    // event 1893_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_3_flash_step_1)) goto event_1893_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) > (13))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1893_58_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(3);
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 2);
            ((Active*)*it)->alterables->values.set(2, get_min(5, get_max(-5, ((Active*)*it)->alterables->values.get(2))));
            ((Active*)*it)->alterables->values.set(9, 0);
        }
    }
    event_1893_58_end: ;
}
void Frames::event_func_12868()
{
    // event 1894_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1894_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (4))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1894_58_end;
        if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1) {
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1 = true;
        }
    }
    event_1894_58_end: ;
}
void Frames::event_func_12869()
{
    // event 1895_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1)) goto event_1895_58_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(25)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(26)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(28)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossspade_2194_instances.has_selection()) goto event_1895_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1895_58_end;
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, -1);
        }
    }
    event_1895_58_end: ;
}
void Frames::event_func_12870()
{
    // event 1896_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1)) goto event_1896_58_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(25)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(26)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(28)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossspade_2194_instances.has_selection()) goto event_1896_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1896_58_end;
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 1);
        }
    }
    event_1896_58_end: ;
}
void Frames::event_func_12871()
{
    // event 1897_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1)) goto event_1897_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (0))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1897_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+0.2, 0));
        }
    }
    event_1897_58_end: ;
}
void Frames::event_func_12872()
{
    // event 1898_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1)) goto event_1898_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1898_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(2)-0.2, 0));
        }
    }
    event_1898_58_end: ;
}
void Frames::event_func_12873()
{
    // event 1899_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1)) goto event_1899_58_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) < (2))) { it.deselect(); continue; }
        }
        if (!bossspade_2194_instances.has_selection()) goto event_1899_58_end;
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    event_1899_58_end: ;
}
void Frames::event_func_12874()
{
    // event 1900_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1)) goto event_1900_58_end;
        if (!((global_values->get(3)%math_helper%(3-get_floor(((Active*)get_instance(bossspade_2194_instances, default_active_instance))->alterables->values.get(1)*0.25))) == (0))) goto event_1900_58_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) >= (2))) { it.deselect(); continue; }
        }
        if (!bossspade_2194_instances.has_selection()) goto event_1900_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1900_58_end;
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)*it)->alterables->values.get(1)*10))) { it.deselect(); continue; }
        }
        if (!bossspade_2194_instances.has_selection()) goto event_1900_58_end;
        media.play_id(SOUND_SPADE_DRAW_71, -1, 1);
        FrameObject * single_instance_1900_58_0; single_instance_1900_58_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossspade_2194_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossspadecard_2128(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1900_58_0 == NULL)
                    single_instance_1900_58_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1900_58_0))->alterables->values.set(0, ((Active*)single_instance_1900_58_0)->get_x());
        ((Active*)((Active*)single_instance_1900_58_0))->alterables->values.set(1, ((Active*)single_instance_1900_58_0)->get_y());
        ((Active*)((Active*)single_instance_1900_58_0))->alterables->values.set(2, cos_deg(0+((Active*)get_single(bossspade_2194_instances, default_active_instance))->alterables->values.get(1)*2-((Active*)get_single(bossspade_2194_instances, default_active_instance))->alterables->values.get(0))*(8+((Active*)get_single(bossspademask_2231_instances, default_active_instance))->alterables->values.get(2)*0.5)*((Active*)get_single(bossspademask_2231_instances, default_active_instance))->alterables->values.get(7));
        ((Active*)((Active*)single_instance_1900_58_0))->alterables->values.set(3, sin_deg(0-0+((Active*)get_single(bossspade_2194_instances, default_active_instance))->alterables->values.get(1)*2-((Active*)get_single(bossspade_2194_instances, default_active_instance))->alterables->values.get(0))*(8+((Active*)get_single(bossspademask_2231_instances, default_active_instance))->alterables->values.get(2)*0.5)*((Active*)get_single(bossspademask_2231_instances, default_active_instance))->alterables->values.get(7));
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 10);
        }
        ((Active*)((Active*)single_instance_1900_58_0))->set_layer(((Active*)get_single(bossspade_2194_instances, default_active_instance))->layer->index+1-1);
        ((Active*)((Active*)single_instance_1900_58_0))->alterables->values.set(8, ((Active*)single_instance_1900_58_0)->alterables->values.get(8)+((Active*)get_single(bossspade_2194_instances, default_active_instance))->alterables->flags.get(1)*2);
    }
    event_1900_58_end: ;
}
void Frames::event_func_12875()
{
    // event 1901_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1)) goto event_1901_58_end;
        if (!((global_values->get(3)%math_helper%(3-get_floor(((Active*)get_instance(bossspade_2194_instances, default_active_instance))->alterables->values.get(1)*0.25))) == (0))) goto event_1901_58_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) >= (2))) { it.deselect(); continue; }
        }
        if (!bossspade_2194_instances.has_selection()) goto event_1901_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) != (1))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1901_58_end;
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)*it)->alterables->values.get(1)*10))) { it.deselect(); continue; }
        }
        if (!bossspade_2194_instances.has_selection()) goto event_1901_58_end;
        FrameObject * single_instance_1901_58_0; single_instance_1901_58_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossspade_2194_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossspadecard_2128(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1901_58_0 == NULL)
                    single_instance_1901_58_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1901_58_0))->alterables->values.set(0, ((Active*)single_instance_1901_58_0)->get_x());
        ((Active*)((Active*)single_instance_1901_58_0))->alterables->values.set(1, ((Active*)single_instance_1901_58_0)->get_y());
        ((Active*)((Active*)single_instance_1901_58_0))->alterables->values.set(2, cos_deg(0+((Active*)get_single(bossspade_2194_instances, default_active_instance))->alterables->values.get(1)*-2+((Active*)get_single(bossspade_2194_instances, default_active_instance))->alterables->values.get(0))*(8+((Active*)get_single(bossspademask_2231_instances, default_active_instance))->alterables->values.get(2)*-0.5)*((Active*)get_single(bossspademask_2231_instances, default_active_instance))->alterables->values.get(7));
        media.play_id(SOUND_SPADE_DRAW_71, -1, 1);
        ((Active*)((Active*)single_instance_1901_58_0))->alterables->values.set(3, sin_deg(0-0+((Active*)get_single(bossspade_2194_instances, default_active_instance))->alterables->values.get(1)*-2+((Active*)get_single(bossspade_2194_instances, default_active_instance))->alterables->values.get(0))*(8+((Active*)get_single(bossspademask_2231_instances, default_active_instance))->alterables->values.get(2)*-0.5)*((Active*)get_single(bossspademask_2231_instances, default_active_instance))->alterables->values.get(7));
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 10);
        }
        ((Active*)((Active*)single_instance_1901_58_0))->set_layer(((Active*)get_single(bossspade_2194_instances, default_active_instance))->layer->index+1-1);
        ((Active*)((Active*)single_instance_1901_58_0))->alterables->values.set(8, ((Active*)single_instance_1901_58_0)->alterables->values.get(8)+((Active*)get_single(bossspade_2194_instances, default_active_instance))->alterables->flags.get(1)*2);
    }
    event_1901_58_end: ;
}
void Frames::event_func_12876()
{
    // event 1902_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1)) goto event_1902_58_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(25))) { it.deselect(); continue; }
        }
        if (!bossspade_2194_instances.has_selection()) goto event_1902_58_end;
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1902_58_end: ;
}
void Frames::event_func_12877()
{
    // event 1903_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1)) goto event_1903_58_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(26))) { it.deselect(); continue; }
        }
        if (!bossspade_2194_instances.has_selection()) goto event_1903_58_end;
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1903_58_end: ;
}
void Frames::event_func_12878()
{
    // event 1904_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1)) goto event_1904_58_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(28))) { it.deselect(); continue; }
        }
        if (!bossspade_2194_instances.has_selection()) goto event_1904_58_end;
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1904_58_end: ;
}
void Frames::event_func_12879()
{
    // event 1905_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1)) goto event_1905_58_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(25)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(26)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(28)) { it.deselect(); continue; }
        }
        if (!bossspade_2194_instances.has_selection()) goto event_1905_58_end;
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    event_1905_58_end: ;
}
void Frames::event_func_12880()
{
    // event 1906_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1906_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (5))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1906_58_end;
        if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_5_dual_crash_1) {
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_5_dual_crash_1 = true;
        }
    }
    event_1906_58_end: ;
}
void Frames::event_func_12881()
{
    // event 1907_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_5_dual_crash_1)) goto event_1907_58_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(21);
        }
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 1);
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+0.3, 2));
        }
    }
    event_1907_58_end: ;
}
void Frames::event_func_12882()
{
    // event 1908_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_5_dual_crash_1)) goto event_1908_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (((Active*)get_instance(player_389_instances))->get_x()+((Active*)*it)->alterables->values.get(7)*-80))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1908_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0-((Active*)*it)->alterables->values.get(2));
        }
    }
    event_1908_58_end: ;
}
void Frames::event_func_12883()
{
    // event 1909_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_5_dual_crash_1)) goto event_1909_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)get_instance(player_389_instances))->get_x()+((Active*)*it)->alterables->values.get(7)*-80))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1909_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0-((Active*)*it)->alterables->values.get(2));
        }
    }
    event_1909_58_end: ;
}
void Frames::event_func_12884()
{
    // event 1910_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_5_dual_crash_1)) goto event_1910_58_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(21))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (3))) { it.deselect(); continue; }
        }
        if (!bossspade_2194_instances.has_selection()) goto event_1910_58_end;
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1910_58_end: ;
}
void Frames::event_func_12885()
{
    // event 1911_58
    bool or_result_1911_58 = false;
    bool or_temp_result_1911_58_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_5_dual_crash_1)) goto or_event_1911_58_0_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(21))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossspade_2194_instances.has_selection()) goto or_event_1911_58_0_end;
        or_result_1911_58 = true;
        or_temp_result_1911_58_0 = true;
    }
    or_event_1911_58_0_end: ;
    bossspade_2194_instances.clear_saved_selection();
    if (or_temp_result_1911_58_0) {
        bossspade_2194_instances.save_selection();
    }
    // event 1911_58
    bool or_temp_result_1911_58_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_5_dual_crash_1)) goto or_event_1911_58_1_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(21))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossspade_2194_instances.has_selection()) goto or_event_1911_58_1_end;
        or_result_1911_58 = true;
        or_temp_result_1911_58_1 = true;
        or_event_1911_58_1_end: ;
        if (or_temp_result_1911_58_1) {
            bossspade_2194_instances.save_selection();
        }
        if (!or_result_1911_58) goto or_final_or_event_1911_58_1_end;
        bossspade_2194_instances.empty_selection();
        if (or_temp_result_1911_58_0 || or_temp_result_1911_58_1) {
            bossspade_2194_instances.restore_selection();
        }
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        FrameObject * single_instance_1911_58_0; single_instance_1911_58_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossspade_2194_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossspadecard_2128(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1911_58_0 == NULL)
                    single_instance_1911_58_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1911_58_0))->alterables->values.set(0, ((Active*)single_instance_1911_58_0)->get_x());
        ((Active*)((Active*)single_instance_1911_58_0))->alterables->values.set(1, ((Active*)single_instance_1911_58_0)->get_y());
        ((Active*)((Active*)single_instance_1911_58_0))->alterables->values.set(2, 8*((Active*)get_instance(bossspademask_2231_instances, default_active_instance))->alterables->values.get(7));
        ((Active*)((Active*)single_instance_1911_58_0))->alterables->values.set(3, 8);
        ((Active*)((Active*)single_instance_1911_58_0))->set_layer(((Active*)get_single(bossspade_2194_instances, default_active_instance))->layer->index+1-1);
        ((Active*)((Active*)single_instance_1911_58_0))->alterables->values.set(6, 1);
        media.play_id(SOUND_SPADE_DUALCRASH_447, -1, 1);
    }
    or_final_or_event_1911_58_1_end: ;
}
void Frames::event_func_12886()
{
    // event 1912_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_5_dual_crash_1)) goto event_1912_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) > (60))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1912_58_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) >= (7))) { it.deselect(); continue; }
        }
        if (!bossspade_2194_instances.has_selection()) goto event_1912_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 2);
            ((Active*)*it)->alterables->values.set(9, 0);
        }
    }
    event_1912_58_end: ;
}
void Frames::event_func_12887()
{
    // event 1913_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1913_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (7))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1913_58_end;
        if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_6_7_flinch_1) {
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_6_7_flinch_1 = true;
        }
    }
    event_1913_58_end: ;
}
void Frames::event_func_12888()
{
    // event 1914_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_6_7_flinch_1)) goto event_1914_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (6))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1914_58_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!bossspade_2194_instances.has_selection()) goto event_1914_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, -1);
        }
    }
    event_1914_58_end: ;
}
void Frames::event_func_12889()
{
    // event 1915_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_6_7_flinch_1)) goto event_1915_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (6))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1915_58_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!bossspade_2194_instances.has_selection()) goto event_1915_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 1);
        }
    }
    event_1915_58_end: ;
}
void Frames::event_func_12890()
{
    // event 1916_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_6_7_flinch_1)) goto event_1916_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (6))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1916_58_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(bossspadehitbox_2232_instances, it.current_index, default_active_instance))->alterables->values.get(23));
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(bossspadehitbox_2232_instances, it.current_index, default_active_instance))->alterables->values.get(24));
        }
    }
    event_1916_58_end: ;
}
void Frames::event_func_12891()
{
    // event 1917_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_6_7_flinch_1)) goto event_1917_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (7))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1917_58_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+0.3, 15));
        }
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 20);
        }
    }
    event_1917_58_end: ;
}
void Frames::event_func_12892()
{
    // event 1918_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_6_7_flinch_1)) goto event_1918_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (7))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1918_58_end;
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossspadehitbox_2232_instances.has_selection()) goto event_1918_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1), ((Active*)*it)->alterables->values.get(4)));
        }
    }
    event_1918_58_end: ;
}
void Frames::event_func_12893()
{
    // event 1919_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_6_7_flinch_1)) goto event_1919_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (7))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1919_58_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) >= (7))) { it.deselect(); continue; }
        }
        if (!bossspade_2194_instances.has_selection()) goto event_1919_58_end;
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(7);
        }
    }
    event_1919_58_end: ;
}
void Frames::event_func_12894()
{
    // event 1920_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_6_7_flinch_1)) goto event_1920_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (7))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1920_58_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (18))) { it.deselect(); continue; }
        }
        if (!bossspade_2194_instances.has_selection()) goto event_1920_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (((Active*)*it)->alterables->values.get(4)))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1920_58_end;
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossspadehitbox_2232_instances.has_selection()) goto event_1920_58_end;
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->alterables->values.set(5, 4);
            ((Active*)*it)->alterables->values.set(11, 0);
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.sub(12, 1);
        }
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
    }
    event_1920_58_end: ;
}
void Frames::event_func_12895()
{
    // event 1921_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_6_7_flinch_1)) goto event_1921_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (((Active*)*it)->alterables->values.get(4)))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1921_58_end;
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bossspadehitbox_2232_instances.has_selection()) goto event_1921_58_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_1500_126);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(5, 9);
            ((Active*)*it)->alterables->values.set(7, -1);
            ((Active*)*it)->alterables->values.set(9, 0);
        }
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(38);
        }
    }
    event_1921_58_end: ;
}
void Frames::event_func_12896()
{
    // event 1922_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1922_58_end;
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) > (1))) { it.deselect(); continue; }
        }
        if (!bossspadehitbox_2232_instances.has_selection()) goto event_1922_58_end;
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(9, 1);
        }
    }
    event_1922_58_end: ;
}
void Frames::event_func_12897()
{
    // event 1923_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1923_58_end;
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
        }
        if (!bossspadehitbox_2232_instances.has_selection()) goto event_1923_58_end;
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(9, 1);
        }
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 0);
    }
    event_1923_58_end: ;
}
void Frames::event_func_12898()
{
    // event 1924_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1924_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (9))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1924_58_end;
        if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_9_defeated_1) {
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_9_defeated_1 = true;
        }
    }
    event_1924_58_end: ;
}
void Frames::event_func_12899()
{
    // event 1925_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_9_defeated_1)) goto event_1925_58_end;
            group_main_engine_level_specific_methods_play_bgm_1 = false;
    
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->alterables->values.add(9, 1);
        }
    }
    event_1925_58_end: ;
}
void Frames::event_func_12900()
{
    // event 1926_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_9_defeated_1)) goto event_1926_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) < (120))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1926_58_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(38);
        }
    }
    event_1926_58_end: ;
}
void Frames::event_func_12901()
{
    // event 1927_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_9_defeated_1)) goto event_1927_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) > (120))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1927_58_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
    }
    event_1927_58_end: ;
}
void Frames::event_func_12902()
{
    // event 1928_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_9_defeated_1)) goto event_1928_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) > (180))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1928_58_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(sign_351_instances))->alterables->flags.enable(0);
        ((Active*)get_instance(sign_351_instances))->alterables->values.set(1, 179);
            group_pause_1 = false;
    
            group_main_engine_level_specific_methods_bosses_boss_spade_1 = false;
    
    }
    event_1928_58_end: ;
}
void Frames::event_func_12903()
{
    // event 1929_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1929_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (11712))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1929_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 11712);
            ((Active*)*it)->alterables->values.set(8, 1);
        }
    }
    event_1929_58_end: ;
}
void Frames::event_func_12904()
{
    // event 1930_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1930_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (12784))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1930_58_end;
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 12784);
            ((Active*)*it)->alterables->values.set(8, -1);
        }
    }
    event_1930_58_end: ;
}
void Frames::event_func_12905()
{
    // event 1931_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1931_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (-1))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1931_58_end;
        if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_spade_hit_1) {
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_spade_hit_1 = true;
        }
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bossspademask_2231_instances, it.current_index));
            if (parent == NULL) goto pos_end_1931_58_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1931_58_0: ;
        }
    }
    event_1931_58_end: ;
}
void Frames::event_func_12906()
{
    // event 1932_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_spade_hit_1)) goto event_1932_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (9))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1932_58_end;
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossspadehitbox_2232_instances.has_selection()) goto event_1932_58_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) > (0))) goto event_1932_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1932_58_end;
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
    event_1932_58_end: ;
}
void Frames::event_func_12907()
{
    // event 1933_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_spade_hit_1)) goto event_1933_58_end;
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (1))) { it.deselect(); continue; }
        }
        if (!bossspadehitbox_2232_instances.has_selection()) goto event_1933_58_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!bossspade_2194_instances.has_selection()) goto event_1933_58_end;
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossspadehitbox_2232_instances.has_selection()) goto event_1933_58_end;
        if (not_always_1933_58 > loop_count) {
            not_always_1933_58 = loop_count + 2;
            goto event_1933_58_end;
        }
        not_always_1933_58 = loop_count + 2;
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
    }
    event_1933_58_end: ;
}
void Frames::event_func_12908()
{
    // event 1934_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_spade_hit_1)) goto event_1934_58_end;
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (1))) { it.deselect(); continue; }
        }
        if (!bossspadehitbox_2232_instances.has_selection()) goto event_1934_58_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
        }
        if (!bossspade_2194_instances.has_selection()) goto event_1934_58_end;
        if (not_always_1934_58 > loop_count) {
            not_always_1934_58 = loop_count + 2;
            goto event_1934_58_end;
        }
        not_always_1934_58 = loop_count + 2;
        media.stop_sample(SOUND_COMMON_NULLHIT_2_30);
    }
    event_1934_58_end: ;
}
void Frames::event_func_12909()
{
    // event 1935_58
    bool or_result_1935_58 = false;
    bool or_temp_result_1935_58_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_spade_hit_1)) goto or_event_1935_58_0_end;
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (1))) { it.deselect(); continue; }
        }
        if (!bossspadehitbox_2232_instances.has_selection()) goto or_event_1935_58_0_end;
        or_result_1935_58 = true;
        or_temp_result_1935_58_0 = true;
    }
    or_event_1935_58_0_end: ;
    bossspadehitbox_2232_instances.clear_saved_selection();
    if (or_temp_result_1935_58_0) {
        bossspadehitbox_2232_instances.save_selection();
    }
    // event 1935_58
    bool or_temp_result_1935_58_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_spade_hit_1)) goto or_event_1935_58_1_end;
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (25))) { it.deselect(); continue; }
        }
        if (!bossspadehitbox_2232_instances.has_selection()) goto or_event_1935_58_1_end;
        or_result_1935_58 = true;
        or_temp_result_1935_58_1 = true;
        or_event_1935_58_1_end: ;
        if (or_temp_result_1935_58_1) {
            bossspadehitbox_2232_instances.save_selection();
        }
        if (!or_result_1935_58) goto or_final_or_event_1935_58_1_end;
        bossspadehitbox_2232_instances.clear_selection();
        if (or_temp_result_1935_58_0 || or_temp_result_1935_58_1) {
            bossspadehitbox_2232_instances.restore_selection();
        }
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
    }
    or_final_or_event_1935_58_1_end: ;
}
void Frames::event_func_12910()
{
    // event 1936_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_spade_hit_1)) goto event_1936_58_end;
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)*it)->alterables->values.get(3)*20))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossspadehitbox_2232_instances.has_selection()) goto event_1936_58_end;
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
        }
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 6);
        }
        media.play_id(SOUND_COMMON_PLAYERHIT_2_25, -1, 1);
        media.play_id(SOUND_SPADE_HURT0_103, -1, 1);
    }
    event_1936_58_end: ;
}
void Frames::event_func_12911()
{
    // event 1937_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_spade_hit_1)) goto event_1937_58_end;
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bossspadehitbox_2232_instances.has_selection()) goto event_1937_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) < (6))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1937_58_end;
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
        }
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 6);
        }
        media.play_id(SOUND_SPADE_DIE_156, -1, 1);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_1500_126);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 3);
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, get_min(((Active*)*it)->alterables->values.get(24), -3));
            ((Active*)*it)->alterables->values.set(9, 25);
        }
        media.stop_sample(SOUND_CROWD_CHEER_365);
    }
    event_1937_58_end: ;
}
void Frames::event_func_12912()
{
    // event 1938_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1938_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1938_58_end: ;
}
void Frames::event_func_12913()
{
    // event 1939_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1939_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1939_58_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1939_58_end: ;
}
void Frames::event_func_12914()
{
    // event 1940_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1940_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (-1))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto event_1940_58_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1940_58_end: ;
}
void Frames::event_func_12915()
{
    // event 1941_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1941_58_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossspademask_2231_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->set_y(((Active*)get_instance(bossspademask_2231_instances, it.current_index, default_active_instance))->get_y());
        }
    }
    event_1941_58_end: ;
}
void Frames::event_func_12916()
{
    // event 1942_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1942_58_end;
        bossspadecard_2128_instances.clear_selection();
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossspadecard_2128_instances.has_selection()) goto event_1942_58_end;
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(3));
        }
    }
    event_1942_58_end: ;
}
void Frames::event_func_12917()
{
    // event 1943_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1943_58_end;
        bossspadecard_2128_instances.clear_selection();
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, get_max(((Active*)*it)->alterables->values.get(5)-1, 0));
            ((Active*)*it)->alterables->values.add(7, 1);
        }
    }
    event_1943_58_end: ;
}
void Frames::event_func_12918()
{
    // event 1944_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1944_58_end;
        bossspadecard_2128_instances.clear_selection();
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) != (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossspadecard_2128_instances.has_selection()) goto event_1944_58_end;
        media.play_id(SOUND_SPADE_CARDNULL_448, -1, 1);
    }
    event_1944_58_end: ;
}
void Frames::event_func_12919()
{
    // event 1945_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1945_58_end;
        bossspadecard_2128_instances.clear_selection();
        playerreflect_447_instances.clear_selection();
        if (!check_overlap(bossspadecard_2128_instances, playerreflect_447_instances)) goto event_1945_58_end;
        if (!(((Active*)get_instance(playerreflect_447_instances))->flags & VISIBLE)) goto event_1945_58_end;
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) != (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossspadecard_2128_instances.has_selection()) goto event_1945_58_end;
        media.play_id(SOUND_SPADE_CARDNULL_448, -1, 1);
    }
    event_1945_58_end: ;
}
void Frames::event_func_12920()
{
    // event 1946_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1946_58_end;
        bossspadecard_2128_instances.clear_selection();
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) != (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossspadecard_2128_instances.has_selection()) goto event_1946_58_end;
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1946_58_0; single_instance_1946_58_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossspadecard_2128_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_thunderspark_339(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1946_58_0 == NULL)
                    single_instance_1946_58_0 = new_obj;
            }
        }
    }
    event_1946_58_end: ;
}
void Frames::event_func_12921()
{
    // event 1947_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1947_58_end;
        bossspadecard_2128_instances.clear_selection();
        playerreflect_447_instances.clear_selection();
        if (!check_overlap(bossspadecard_2128_instances, playerreflect_447_instances)) goto event_1947_58_end;
        if (!(((Active*)get_instance(playerreflect_447_instances))->flags & VISIBLE)) goto event_1947_58_end;
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) != (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossspadecard_2128_instances.has_selection()) goto event_1947_58_end;
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1947_58_0; single_instance_1947_58_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossspadecard_2128_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_thunderspark_339(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1947_58_0 == NULL)
                    single_instance_1947_58_0 = new_obj;
            }
        }
    }
    event_1947_58_end: ;
}
void Frames::event_func_12922()
{
    // event 1948_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1948_58_end;
        bossspadecard_2128_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(bossspadecard_2128_instances, playercharactersensor_383_instances)) goto event_1948_58_end;
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) != (1))) { it.deselect(); continue; }
        }
        if (!bossspadecard_2128_instances.has_selection()) goto event_1948_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1948_58_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1948_58_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
    }
    event_1948_58_end: ;
}
void Frames::event_func_12923()
{
    // event 1949_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1949_58_end;
        bossspadecard_2128_instances.clear_selection();
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!bossspadecard_2128_instances.has_selection()) goto event_1949_58_end;
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)*it)->alterables->values.get(3), ((Active*)*it)->alterables->values.get(2)), 0);
            ((Active*)*it)->alterables->values.add(13, 1);
        }
    }
    event_1949_58_end: ;
}
void Frames::event_func_12924()
{
    // event 1950_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1950_58_end;
        bossspadecard_2128_instances.clear_selection();
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) > (3))) { it.deselect(); continue; }
        }
        if (!bossspadecard_2128_instances.has_selection()) goto event_1950_58_end;
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1950_58_end: ;
}
void Frames::event_func_12925()
{
    // event 1951_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1951_58_end;
        bossspadecard_2128_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(bossspadecard_2128_instances, qualifier_7)) goto event_1951_58_end;
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!bossspadecard_2128_instances.has_selection()) goto event_1951_58_end;
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1951_58_end: ;
}
void Frames::event_func_12926()
{
    // event 1952_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1952_58_end;
        bossspadecard_2128_instances.clear_selection();
        playerreflect_447_instances.clear_selection();
        if (!check_overlap(bossspadecard_2128_instances, playerreflect_447_instances)) goto event_1952_58_end;
        if (!(((Active*)get_instance(playerreflect_447_instances))->flags & VISIBLE)) goto event_1952_58_end;
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!bossspadecard_2128_instances.has_selection()) goto event_1952_58_end;
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1952_58_end: ;
}
void Frames::event_func_12927()
{
    // event 1953_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1953_58_end;
        bossspadecard_2128_instances.clear_selection();
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!bossspadecard_2128_instances.has_selection()) goto event_1953_58_end;
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_XPLODE_2_240, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+3, 3));
        FrameObject * single_instance_1953_58_0; single_instance_1953_58_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossspadecard_2128_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1953_58_0 == NULL)
                    single_instance_1953_58_0 = new_obj;
            }
        }
    }
    event_1953_58_end: ;
}
void Frames::event_func_12928()
{
    // event 1954_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1954_58_end;
        bossspadecard_2128_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(bossspadecard_2128_instances, playercharactersensor_383_instances)) goto event_1954_58_end;
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!bossspadecard_2128_instances.has_selection()) goto event_1954_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1954_58_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1954_58_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
    }
    event_1954_58_end: ;
}
void Frames::event_func_12929()
{
    // event 1955_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1955_58_end;
        bossspadecard_2128_instances.clear_selection();
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_near_border(-100))) { it.deselect(); continue; }
        }
        if (!bossspadecard_2128_instances.has_selection()) goto event_1955_58_end;
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1955_58_end: ;
}
void Frames::event_func_12930()
{
    // event 1956_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1956_58_end;
        bossspadecard_2128_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(bossspadecard_2128_instances, qualifier_20)) goto event_1956_58_end;
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
        }
        if (!bossspadecard_2128_instances.has_selection()) goto event_1956_58_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1956_58_end;
        FrameObject * single_instance_1956_58_0; single_instance_1956_58_0 = pick_random(qualifier_20);
        if (single_instance_1956_58_0 == NULL) goto event_1956_58_end;
        ((Active*)((Active*)single_instance_1956_58_0))->alterables->values.set(2, 3);
        ((Active*)((Active*)single_instance_1956_58_0))->alterables->values.set(23, ((Active*)get_single(bossspadecard_2128_instances, default_active_instance))->alterables->values.get(2)/math_helper/2.0);
        ((Active*)((Active*)single_instance_1956_58_0))->alterables->values.set(24, ((Active*)get_single(bossspadecard_2128_instances, default_active_instance))->alterables->values.get(3)/math_helper/2.0);
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        ((Active*)((Active*)single_instance_1956_58_0))->alterables->values.sub(0, 5);
        {
            ((Active*)single_instance_1956_58_0)->set_shader(Render::INVERT);
        }
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    event_1956_58_end: ;
}
void Frames::event_func_12931()
{
    // event 1957_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1957_58_end;
        bossspadecard_2128_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(bossspadecard_2128_instances, qualifier_20)) goto event_1957_58_end;
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
        }
        if (!bossspadecard_2128_instances.has_selection()) goto event_1957_58_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(5))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1957_58_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 3);
        }
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    event_1957_58_end: ;
}
void Frames::event_func_12932()
{
    // event 1958_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_arena_1)) goto event_1958_58_end;
        if (!((global_values->get(4)) >= (5))) goto event_1958_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (11650))) goto event_1958_58_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, height);
    }
    event_1958_58_end: ;
}
void Frames::event_func_12933()
{
    // event 1959_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_arena_1)) goto event_1959_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (11650))) goto event_1959_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (600))) goto event_1959_58_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, 776);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, get_min(400, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(3)+3, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)-global_values->get(17)*0.5)));
    }
    event_1959_58_end: ;
}
void Frames::event_func_12934()
{
    // event 1960_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_arena_1)) goto event_1960_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(3)))) goto event_1960_58_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(3));
    }
    event_1960_58_end: ;
}
void Frames::event_func_12935()
{
    // event 1961_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_arena_1)) goto event_1961_58_end;
        if (!((global_values->get(3)%math_helper%60) == (0))) goto event_1961_58_end;
        thcrowd_3181_instances.clear_selection();
        for (ObjectIterator it(thcrowd_3181_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(8+randrange(30));
            ((Active*)*it)->move_back();
        }
    }
    event_1961_58_end: ;
}
void Frames::event_func_12936()
{
    // event 1962_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_arena_1)) goto event_1962_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (11650))) goto event_1962_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (600))) goto event_1962_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) == (0))) goto event_1962_58_end;
        {
            double check_value = 11600;
            enemybikeninja_3172_instances.clear_selection();
            for (ObjectIterator it(enemybikeninja_3172_instances); !it.end(); ++it) {
                if (!((*it)->alterables->values.get(5) < check_value)) it.deselect();
            }
            enemybikeninjamask_3171_instances.clear_selection();
            for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
                if (!((*it)->alterables->values.get(5) < check_value)) it.deselect();
            }
        }
        for (ObjectIterator it(enemybikeninja_3172_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1962_58_end: ;
}
