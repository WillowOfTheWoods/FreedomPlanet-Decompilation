#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_8986()
{
    // event 1841_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1)) goto event_1841_36_end;
        if (!(((Active*)get_instance(bossspade_2194_instances))->is_animation_finished(25))) goto event_1841_36_end;
        ((Active*)get_instance(bossspade_2194_instances))->force_animation(24);
        ((Active*)get_instance(bossspade_2194_instances))->force_frame(6);
        ((Active*)get_instance(bossspade_2194_instances))->restore_frame();
    }
    event_1841_36_end: ;
}
void Frames::event_func_8987()
{
    // event 1842_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1)) goto event_1842_36_end;
        if (!(((Active*)get_instance(bossspade_2194_instances))->is_animation_finished(26))) goto event_1842_36_end;
        ((Active*)get_instance(bossspade_2194_instances))->force_animation(24);
        ((Active*)get_instance(bossspade_2194_instances))->force_frame(6);
        ((Active*)get_instance(bossspade_2194_instances))->restore_frame();
    }
    event_1842_36_end: ;
}
void Frames::event_func_8988()
{
    // event 1843_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1)) goto event_1843_36_end;
        if (!(((Active*)get_instance(bossspade_2194_instances))->is_animation_finished(28))) goto event_1843_36_end;
        ((Active*)get_instance(bossspade_2194_instances))->force_animation(24);
        ((Active*)get_instance(bossspade_2194_instances))->force_frame(6);
        ((Active*)get_instance(bossspade_2194_instances))->restore_frame();
    }
    event_1843_36_end: ;
}
void Frames::event_func_8989()
{
    // event 1844_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1)) goto event_1844_36_end;
        if (((Active*)get_instance(bossspade_2194_instances))->test_animation(25)) goto event_1844_36_end;
        if (((Active*)get_instance(bossspade_2194_instances))->test_animation(26)) goto event_1844_36_end;
        if (((Active*)get_instance(bossspade_2194_instances))->test_animation(28)) goto event_1844_36_end;
        ((Active*)get_instance(bossspade_2194_instances))->force_animation(24);
        ((Active*)get_instance(bossspade_2194_instances))->force_frame(6);
        ((Active*)get_instance(bossspade_2194_instances))->restore_frame();
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(5, 0);
    }
    event_1844_36_end: ;
}
void Frames::event_func_8990()
{
    // event 1845_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1845_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(5)) == (5))) goto event_1845_36_end;
        if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_5_dual_crash_1) {
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_5_dual_crash_1 = true;
        }
    }
    event_1845_36_end: ;
}
void Frames::event_func_8991()
{
    // event 1846_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_5_dual_crash_1)) goto event_1846_36_end;
        ((Active*)get_instance(bossspade_2194_instances))->force_animation(21);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.add(9, 1);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(3, get_min(((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(3)+0.3, 2));
    }
    event_1846_36_end: ;
}
void Frames::event_func_8992()
{
    // event 1847_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_5_dual_crash_1)) goto event_1847_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2)) >= (0))) goto event_1847_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(0)) > (((Active*)get_instance(player_389_instances))->get_x()+((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(7)*-80))) goto event_1847_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(2, 0-((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2));
    }
    event_1847_36_end: ;
}
void Frames::event_func_8993()
{
    // event 1848_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_5_dual_crash_1)) goto event_1848_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2)) < (0))) goto event_1848_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(0)) < (((Active*)get_instance(player_389_instances))->get_x()+((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(7)*-80))) goto event_1848_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(2, 0-((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2));
    }
    event_1848_36_end: ;
}
void Frames::event_func_8994()
{
    // event 1849_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_5_dual_crash_1)) goto event_1849_36_end;
        if (!(((Active*)get_instance(bossspade_2194_instances))->test_animation(21))) goto event_1849_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->get_frame()) != (0))) goto event_1849_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->get_frame()) != (3))) goto event_1849_36_end;
        ((Active*)get_instance(bossspade_2194_instances))->alterables->flags.disable(1);
    }
    event_1849_36_end: ;
}
void Frames::event_func_8995()
{
    // event 1850_36
    bool or_result_1850_36 = false;
    bool or_temp_result_1850_36_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_5_dual_crash_1)) goto or_event_1850_36_0_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(21))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossspade_2194_instances.has_selection()) goto or_event_1850_36_0_end;
        or_result_1850_36 = true;
        or_temp_result_1850_36_0 = true;
    }
    or_event_1850_36_0_end: ;
    bossspade_2194_instances.clear_saved_selection();
    if (or_temp_result_1850_36_0) {
        bossspade_2194_instances.save_selection();
    }
    // event 1850_36
    bool or_temp_result_1850_36_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_5_dual_crash_1)) goto or_event_1850_36_1_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(21))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossspade_2194_instances.has_selection()) goto or_event_1850_36_1_end;
        or_result_1850_36 = true;
        or_temp_result_1850_36_1 = true;
        or_event_1850_36_1_end: ;
        if (or_temp_result_1850_36_1) {
            bossspade_2194_instances.save_selection();
        }
        if (!or_result_1850_36) goto or_final_or_event_1850_36_1_end;
        bossspade_2194_instances.empty_selection();
        if (or_temp_result_1850_36_0 || or_temp_result_1850_36_1) {
            bossspade_2194_instances.restore_selection();
        }
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        FrameObject * single_instance_1850_36_0; single_instance_1850_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossspade_2194_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossspadecard_2128(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1850_36_0 == NULL)
                    single_instance_1850_36_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1850_36_0))->alterables->values.set(0, ((Active*)single_instance_1850_36_0)->get_x());
        ((Active*)((Active*)single_instance_1850_36_0))->alterables->values.set(1, ((Active*)single_instance_1850_36_0)->get_y());
        ((Active*)((Active*)single_instance_1850_36_0))->alterables->values.set(2, 8*((Active*)get_instance(bossspademask_2231_instances, default_active_instance))->alterables->values.get(7));
        ((Active*)((Active*)single_instance_1850_36_0))->alterables->values.set(3, 8);
        ((Active*)((Active*)single_instance_1850_36_0))->set_layer(((Active*)get_single(bossspade_2194_instances, default_active_instance))->layer->index+1-1);
        ((Active*)((Active*)single_instance_1850_36_0))->alterables->values.set(6, 1);
        media.play_id(SOUND_SPADE_DUALCRASH_447, -1, 1);
    }
    or_final_or_event_1850_36_1_end: ;
}
void Frames::event_func_8996()
{
    // event 1851_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_5_dual_crash_1)) goto event_1851_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(9)) > (60))) goto event_1851_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->get_frame()) >= (7))) goto event_1851_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(5, 2);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(9, 0);
    }
    event_1851_36_end: ;
}
void Frames::event_func_8997()
{
    // event 1852_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1852_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(5)) >= (6))) goto event_1852_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(5)) <= (7))) goto event_1852_36_end;
        if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_6_7_flinch_1) {
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_6_7_flinch_1 = true;
        }
    }
    event_1852_36_end: ;
}
void Frames::event_func_8998()
{
    // event 1853_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_6_7_flinch_1)) goto event_1853_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(5)) == (6))) goto event_1853_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->get_x()) >= (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1853_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(7, -1);
    }
    event_1853_36_end: ;
}
void Frames::event_func_8999()
{
    // event 1854_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_6_7_flinch_1)) goto event_1854_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(5)) == (6))) goto event_1854_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1854_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(7, 1);
    }
    event_1854_36_end: ;
}
void Frames::event_func_9000()
{
    // event 1855_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_6_7_flinch_1)) goto event_1855_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(5)) == (6))) goto event_1855_36_end;
        ((Active*)get_instance(bossspade_2194_instances))->force_animation(8);
        ((Active*)get_instance(bossspade_2194_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.add(5, 1);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(2, ((Active*)get_instance(bossspadehitbox_2232_instances, default_active_instance))->alterables->values.get(23));
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(3, ((Active*)get_instance(bossspadehitbox_2232_instances, default_active_instance))->alterables->values.get(24));
    }
    event_1855_36_end: ;
}
void Frames::event_func_9001()
{
    // event 1856_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_6_7_flinch_1)) goto event_1856_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(5)) == (7))) goto event_1856_36_end;
        ((Active*)get_instance(bossspade_2194_instances))->alterables->values.add(5, 1);
        {
            ((Active*)get_instance(bossspade_2194_instances))->set_shader(NULL);
        }
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(3, get_min(((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(3)+0.3, 15));
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 20);
        }
    }
    event_1856_36_end: ;
}
void Frames::event_func_9002()
{
    // event 1857_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_6_7_flinch_1)) goto event_1857_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(5)) == (7))) goto event_1857_36_end;
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossspadehitbox_2232_instances.has_selection()) goto event_1857_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(1, get_min(((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(1), ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(4)));
    }
    event_1857_36_end: ;
}
void Frames::event_func_9003()
{
    // event 1858_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_6_7_flinch_1)) goto event_1858_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(5)) == (7))) goto event_1858_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->get_frame()) >= (7))) goto event_1858_36_end;
        ((Active*)get_instance(bossspade_2194_instances))->force_frame(7);
    }
    event_1858_36_end: ;
}
void Frames::event_func_9004()
{
    // event 1859_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_6_7_flinch_1)) goto event_1859_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(5)) == (7))) goto event_1859_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(5)) > (18))) goto event_1859_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(1)) >= (((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(4)))) goto event_1859_36_end;
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossspadehitbox_2232_instances.has_selection()) goto event_1859_36_end;
        ((Active*)get_instance(bossspade_2194_instances))->force_animation(10);
        ((Active*)get_instance(bossspade_2194_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(1, ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(4));
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(5, 4);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(10, 0);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.sub(12, 1);
        ((Active*)get_instance(bossspade_2194_instances))->restore_frame();
    }
    event_1859_36_end: ;
}
void Frames::event_func_9005()
{
    // event 1860_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_6_7_flinch_1)) goto event_1860_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(5)) == (7))) goto event_1860_36_end;
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bossspadehitbox_2232_instances.has_selection()) goto event_1860_36_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) < (40))) goto event_1860_36_end;
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
    event_1860_36_end: ;
}
void Frames::event_func_9006()
{
    // event 1861_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_6_7_flinch_1)) goto event_1861_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(5)) == (7))) goto event_1861_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(5)) > (18))) goto event_1861_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(1)) >= (((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(4)+600))) goto event_1861_36_end;
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bossspadehitbox_2232_instances.has_selection()) goto event_1861_36_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_1500_126);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(5, 9);
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_instance(player_389_instances))->get_x()+200);
            ((Active*)*it)->alterables->values.set(5, ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(1));
        }
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(7, -1);
        ((Active*)get_instance(bossspade_2194_instances))->restore_frame();
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(9, 0);
    }
    event_1861_36_end: ;
}
void Frames::event_func_9007()
{
    // event 1862_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1862_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(5)) == (9))) goto event_1862_36_end;
        if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_9_chopper_flee_1) {
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_9_chopper_flee_1 = true;
        }
    }
    event_1862_36_end: ;
}
void Frames::event_func_9008()
{
    // event 1863_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_9_chopper_flee_1)) goto event_1863_36_end;
        ((Active*)get_instance(bossspade_2194_instances))->force_animation(15);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(0, ((Active*)get_instance(bosschopper_2216_instances, default_active_instance))->get_x()+((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(7)*10);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(1, ((Active*)get_instance(bosschopper_2216_instances, default_active_instance))->get_y()+68);
            group_main_engine_level_specific_methods_play_bgm_1 = false;
    
        ((Active*)get_instance(bossspade_2194_instances))->restore_speed();
    }
    event_1863_36_end: ;
}
void Frames::event_func_9009()
{
    // event 1864_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_9_chopper_flee_1)) goto event_1864_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(9)) == (0))) goto event_1864_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, -8);
            ((Active*)*it)->alterables->values.set(4, get_min(((Active*)get_instance(player_389_instances))->get_x()+150, ((Active*)get_instance(cameralimitbossright_422_instances, it.current_index, default_active_instance))->get_x()-150));
        }
    }
    event_1864_36_end: ;
}
void Frames::event_func_9010()
{
    // event 1865_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_9_chopper_flee_1)) goto event_1865_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(9)) == (0))) goto event_1865_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) < (((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(4)-160))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1865_36_end;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 0);
        }
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.add(9, 1);
    }
    event_1865_36_end: ;
}
void Frames::event_func_9011()
{
    // event 1866_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_9_chopper_flee_1)) goto event_1866_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(9)) > (0))) goto event_1866_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.add(9, 1);
    }
    event_1866_36_end: ;
}
void Frames::event_func_9012()
{
    // event 1867_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_9_chopper_flee_1)) goto event_1867_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(9)) > (60))) goto event_1867_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, -8);
        }
    }
    event_1867_36_end: ;
}
void Frames::event_func_9013()
{
    // event 1868_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_9_chopper_flee_1)) goto event_1868_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(9)) > (90))) goto event_1868_36_end;
        if (once_condition_1868_36) goto event_1868_36_end;
        once_condition_1868_36 = true;
        objectcrystal_279_instances.empty_selection();
        // select single: false true false
        minibossrailing_923_instances.clear_selection();
        for (ObjectIterator p_it(minibossrailing_923_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + 0, parent->y + 12), parent->layer);
                objectcrystal_279_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + 0, parent->y + 36), parent->layer);
                objectcrystal_279_instances.add_back();
            }
        }
        media.play_id(SOUND_COMMON_REWARD_2_40, -1, 1);
        for (ObjectIterator it(minibossrailing_923_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        minibossbarrier_924_instances.clear_selection();
        for (ObjectIterator it(minibossbarrier_924_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.enable(4);
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 1);
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
            ((Active*)*it)->alterables->values.set(3, -1);
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(10, 0);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
            ((ArrayObject*)*it)->data.x_pos = 0;
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        media.stop_channel(32-1);
        ((Active*)get_instance(guicompass_1270_instances))->set_visible(true);
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
    }
    event_1868_36_end: ;
}
void Frames::event_func_9014()
{
    // event 1869_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1869_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(0)) < (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+200))) goto event_1869_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(0, ((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+200);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(8, 1);
    }
    event_1869_36_end: ;
}
void Frames::event_func_9015()
{
    // event 1870_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1870_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(0)) > (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()))) goto event_1870_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(0, ((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x());
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(8, -1);
    }
    event_1870_36_end: ;
}
void Frames::event_func_9016()
{
    // event 1871_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1871_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(5)) > (-1))) goto event_1871_36_end;
        if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_spade_hit_1) {
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_spade_hit_1 = true;
        }
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bossspademask_2231_instances));
            if (parent == NULL) goto pos_end_1871_36_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1871_36_0: ;
        }
    }
    event_1871_36_end: ;
}
void Frames::event_func_9017()
{
    // event 1872_36
    bool or_result_1872_36 = false;
    bool or_temp_result_1872_36_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_spade_hit_1)) goto or_event_1872_36_0_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (9))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto or_event_1872_36_0_end;
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossspadehitbox_2232_instances.has_selection()) goto or_event_1872_36_0_end;
        guiicon_452_instances.clear_selection();
        for (ObjectIterator it(guiicon_452_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!guiicon_452_instances.has_selection()) goto or_event_1872_36_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) != (9))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1872_36_0_end;
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossspade_2194_instances.has_selection()) goto or_event_1872_36_0_end;
        or_result_1872_36 = true;
        or_temp_result_1872_36_0 = true;
    }
    or_event_1872_36_0_end: ;
    guiicon_452_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    bossspadehitbox_2232_instances.clear_saved_selection();
    bossspademask_2231_instances.clear_saved_selection();
    bossspade_2194_instances.clear_saved_selection();
    if (or_temp_result_1872_36_0) {
        guiicon_452_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        bossspadehitbox_2232_instances.save_selection();
        bossspademask_2231_instances.save_selection();
        bossspade_2194_instances.save_selection();
    }
    // event 1872_36
    bool or_temp_result_1872_36_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_spade_hit_1)) goto or_event_1872_36_1_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (90))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto or_event_1872_36_1_end;
        guiicon_452_instances.clear_selection();
        for (ObjectIterator it(guiicon_452_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!guiicon_452_instances.has_selection()) goto or_event_1872_36_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) != (9))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1872_36_1_end;
        or_result_1872_36 = true;
        or_temp_result_1872_36_1 = true;
        or_event_1872_36_1_end: ;
        if (or_temp_result_1872_36_1) {
            guiicon_452_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            bossspademask_2231_instances.save_selection();
        }
        if (!or_result_1872_36) goto or_final_or_event_1872_36_1_end;
        bossspademask_2231_instances.empty_selection();
        guiicon_452_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        bossspade_2194_instances.empty_selection();
        bossspadehitbox_2232_instances.empty_selection();
        if (or_temp_result_1872_36_0 || or_temp_result_1872_36_1) {
            guiicon_452_instances.restore_selection();
        }
        if (or_temp_result_1872_36_0 || or_temp_result_1872_36_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1872_36_0) {
            bossspadehitbox_2232_instances.restore_selection();
        }
        if (or_temp_result_1872_36_0 || or_temp_result_1872_36_1) {
            bossspademask_2231_instances.restore_selection();
        }
        if (or_temp_result_1872_36_0) {
            bossspade_2194_instances.restore_selection();
        }
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
    or_final_or_event_1872_36_1_end: ;
}
void Frames::event_func_9018()
{
    // event 1873_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_spade_hit_1)) goto event_1873_36_end;
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (1))) { it.deselect(); continue; }
        }
        if (!bossspadehitbox_2232_instances.has_selection()) goto event_1873_36_end;
        if (!(((Active*)get_instance(bossspade_2194_instances))->alterables->flags.is_off(3))) goto event_1873_36_end;
        if (not_always_1873_36 > loop_count) {
            not_always_1873_36 = loop_count + 2;
            goto event_1873_36_end;
        }
        not_always_1873_36 = loop_count + 2;
        {
            ((Active*)get_instance(bossspade_2194_instances))->set_shader(Render::INVERT);
        }
    }
    event_1873_36_end: ;
}
void Frames::event_func_9019()
{
    // event 1874_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_spade_hit_1)) goto event_1874_36_end;
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (1))) { it.deselect(); continue; }
        }
        if (!bossspadehitbox_2232_instances.has_selection()) goto event_1874_36_end;
        if (!(((Active*)get_instance(bossspade_2194_instances))->alterables->flags.is_on(3))) goto event_1874_36_end;
        if (not_always_1874_36 > loop_count) {
            not_always_1874_36 = loop_count + 2;
            goto event_1874_36_end;
        }
        not_always_1874_36 = loop_count + 2;
        media.stop_sample(SOUND_COMMON_NULLHIT_2_30);
    }
    event_1874_36_end: ;
}
void Frames::event_func_9020()
{
    // event 1875_36
    bool or_result_1875_36 = false;
    bool or_temp_result_1875_36_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_spade_hit_1)) goto or_event_1875_36_0_end;
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (1))) { it.deselect(); continue; }
        }
        if (!bossspadehitbox_2232_instances.has_selection()) goto or_event_1875_36_0_end;
        or_result_1875_36 = true;
        or_temp_result_1875_36_0 = true;
    }
    or_event_1875_36_0_end: ;
    bossspadehitbox_2232_instances.clear_saved_selection();
    if (or_temp_result_1875_36_0) {
        bossspadehitbox_2232_instances.save_selection();
    }
    // event 1875_36
    bool or_temp_result_1875_36_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_spade_hit_1)) goto or_event_1875_36_1_end;
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (25))) { it.deselect(); continue; }
        }
        if (!bossspadehitbox_2232_instances.has_selection()) goto or_event_1875_36_1_end;
        or_result_1875_36 = true;
        or_temp_result_1875_36_1 = true;
        or_event_1875_36_1_end: ;
        if (or_temp_result_1875_36_1) {
            bossspadehitbox_2232_instances.save_selection();
        }
        if (!or_result_1875_36) goto or_final_or_event_1875_36_1_end;
        bossspadehitbox_2232_instances.clear_selection();
        if (or_temp_result_1875_36_0 || or_temp_result_1875_36_1) {
            bossspadehitbox_2232_instances.restore_selection();
        }
        {
            ((Active*)get_instance(bossspade_2194_instances))->set_shader(NULL);
        }
    }
    or_final_or_event_1875_36_1_end: ;
}
void Frames::event_func_9021()
{
    // event 1876_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_spade_hit_1)) goto event_1876_36_end;
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)*it)->alterables->values.get(3)*20))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossspadehitbox_2232_instances.has_selection()) goto event_1876_36_end;
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
        }
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(5, 6);
        media.play_id(SOUND_COMMON_PLAYERHIT_2_25, -1, 1);
        media.play_id(SOUND_SPADE_HURT0_103, -1, 1);
    }
    event_1876_36_end: ;
}
void Frames::event_func_9022()
{
    // event 1877_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_spade_hit_1)) goto event_1877_36_end;
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bossspadehitbox_2232_instances.has_selection()) goto event_1877_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(5)) < (6))) goto event_1877_36_end;
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
        }
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(5, 6);
        media.play_id(SOUND_SPADE_DIE_156, -1, 1);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_1500_126);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
    }
    event_1877_36_end: ;
}
void Frames::event_func_9023()
{
    // event 1878_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1878_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.add(0, ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2));
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.add(1, ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(3));
        ((Active*)get_instance(bossspademask_2231_instances))->set_x(((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(0));
        ((Active*)get_instance(bossspademask_2231_instances))->set_y(((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(1));
    }
    event_1878_36_end: ;
}
void Frames::event_func_9024()
{
    // event 1879_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1879_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(7)) == (1))) goto event_1879_36_end;
        ((Active*)get_instance(bossspade_2194_instances))->set_direction(0);
    }
    event_1879_36_end: ;
}
void Frames::event_func_9025()
{
    // event 1880_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1880_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(7)) == (-1))) goto event_1880_36_end;
        ((Active*)get_instance(bossspade_2194_instances))->set_direction(16);
    }
    event_1880_36_end: ;
}
void Frames::event_func_9026()
{
    // event 1881_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1881_36_end;
        ((Active*)get_instance(bossspade_2194_instances))->set_x(((Active*)get_instance(bossspademask_2231_instances))->get_x());
        ((Active*)get_instance(bossspade_2194_instances))->set_y(((Active*)get_instance(bossspademask_2231_instances))->get_y());
    }
    event_1881_36_end: ;
}
void Frames::event_func_9027()
{
    // event 1882_36
    {
        if (!(group_main_engine_1)) goto event_1882_36_end;
        bossspadecard_2128_instances.clear_selection();
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossspadecard_2128_instances.has_selection()) goto event_1882_36_end;
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(3));
        }
    }
    event_1882_36_end: ;
}
void Frames::event_func_9028()
{
    // event 1883_36
    {
        if (!(group_main_engine_1)) goto event_1883_36_end;
        bossspadecard_2128_instances.clear_selection();
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, get_max(((Active*)*it)->alterables->values.get(5)-1, 0));
            ((Active*)*it)->alterables->values.add(7, 1);
        }
    }
    event_1883_36_end: ;
}
void Frames::event_func_9029()
{
    // event 1884_36
    {
        if (!(group_main_engine_1)) goto event_1884_36_end;
        bossspadecard_2128_instances.clear_selection();
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) != (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossspadecard_2128_instances.has_selection()) goto event_1884_36_end;
        media.play_id(SOUND_SPADE_CARDNULL_448, -1, 1);
    }
    event_1884_36_end: ;
}
void Frames::event_func_9030()
{
    // event 1885_36
    {
        if (!(group_main_engine_1)) goto event_1885_36_end;
        bossspadecard_2128_instances.clear_selection();
        playerreflect_447_instances.clear_selection();
        if (!check_overlap(bossspadecard_2128_instances, playerreflect_447_instances)) goto event_1885_36_end;
        if (!(((Active*)get_instance(playerreflect_447_instances))->flags & VISIBLE)) goto event_1885_36_end;
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) != (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossspadecard_2128_instances.has_selection()) goto event_1885_36_end;
        media.play_id(SOUND_SPADE_CARDNULL_448, -1, 1);
    }
    event_1885_36_end: ;
}
void Frames::event_func_9031()
{
    // event 1886_36
    {
        if (!(group_main_engine_1)) goto event_1886_36_end;
        bossspadecard_2128_instances.clear_selection();
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) != (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossspadecard_2128_instances.has_selection()) goto event_1886_36_end;
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1886_36_0; single_instance_1886_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossspadecard_2128_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_thunderspark_339(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1886_36_0 == NULL)
                    single_instance_1886_36_0 = new_obj;
            }
        }
    }
    event_1886_36_end: ;
}
void Frames::event_func_9032()
{
    // event 1887_36
    {
        if (!(group_main_engine_1)) goto event_1887_36_end;
        bossspadecard_2128_instances.clear_selection();
        playerreflect_447_instances.clear_selection();
        if (!check_overlap(bossspadecard_2128_instances, playerreflect_447_instances)) goto event_1887_36_end;
        if (!(((Active*)get_instance(playerreflect_447_instances))->flags & VISIBLE)) goto event_1887_36_end;
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) != (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossspadecard_2128_instances.has_selection()) goto event_1887_36_end;
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1887_36_0; single_instance_1887_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossspadecard_2128_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_thunderspark_339(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1887_36_0 == NULL)
                    single_instance_1887_36_0 = new_obj;
            }
        }
    }
    event_1887_36_end: ;
}
void Frames::event_func_9033()
{
    // event 1888_36
    {
        if (!(group_main_engine_1)) goto event_1888_36_end;
        bossspadecard_2128_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(bossspadecard_2128_instances, playercharactersensor_383_instances)) goto event_1888_36_end;
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) != (1))) { it.deselect(); continue; }
        }
        if (!bossspadecard_2128_instances.has_selection()) goto event_1888_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1888_36_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1888_36_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
    }
    event_1888_36_end: ;
}
void Frames::event_func_9034()
{
    // event 1889_36
    {
        if (!(group_main_engine_1)) goto event_1889_36_end;
        bossspadecard_2128_instances.clear_selection();
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!bossspadecard_2128_instances.has_selection()) goto event_1889_36_end;
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)*it)->alterables->values.get(3), ((Active*)*it)->alterables->values.get(2)), 0);
            ((Active*)*it)->alterables->values.add(13, 1);
        }
    }
    event_1889_36_end: ;
}
void Frames::event_func_9035()
{
    // event 1890_36
    {
        if (!(group_main_engine_1)) goto event_1890_36_end;
        bossspadecard_2128_instances.clear_selection();
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) > (3))) { it.deselect(); continue; }
        }
        if (!bossspadecard_2128_instances.has_selection()) goto event_1890_36_end;
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1890_36_end: ;
}
void Frames::event_func_9036()
{
    // event 1891_36
    {
        if (!(group_main_engine_1)) goto event_1891_36_end;
        bossspadecard_2128_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(bossspadecard_2128_instances, qualifier_7)) goto event_1891_36_end;
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!bossspadecard_2128_instances.has_selection()) goto event_1891_36_end;
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1891_36_end: ;
}
void Frames::event_func_9037()
{
    // event 1892_36
    {
        if (!(group_main_engine_1)) goto event_1892_36_end;
        bossspadecard_2128_instances.clear_selection();
        playerreflect_447_instances.clear_selection();
        if (!check_overlap(bossspadecard_2128_instances, playerreflect_447_instances)) goto event_1892_36_end;
        if (!(((Active*)get_instance(playerreflect_447_instances))->flags & VISIBLE)) goto event_1892_36_end;
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!bossspadecard_2128_instances.has_selection()) goto event_1892_36_end;
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1892_36_end: ;
}
void Frames::event_func_9038()
{
    // event 1893_36
    {
        if (!(group_main_engine_1)) goto event_1893_36_end;
        bossspadecard_2128_instances.clear_selection();
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!bossspadecard_2128_instances.has_selection()) goto event_1893_36_end;
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_XPLODE_2_240, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+3, 3));
        FrameObject * single_instance_1893_36_0; single_instance_1893_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossspadecard_2128_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1893_36_0 == NULL)
                    single_instance_1893_36_0 = new_obj;
            }
        }
    }
    event_1893_36_end: ;
}
void Frames::event_func_9039()
{
    // event 1894_36
    {
        if (!(group_main_engine_1)) goto event_1894_36_end;
        bossspadecard_2128_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(bossspadecard_2128_instances, playercharactersensor_383_instances)) goto event_1894_36_end;
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!bossspadecard_2128_instances.has_selection()) goto event_1894_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1894_36_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1894_36_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
    }
    event_1894_36_end: ;
}
void Frames::event_func_9040()
{
    // event 1895_36
    {
        if (!(group_main_engine_1)) goto event_1895_36_end;
        bossspadecard_2128_instances.clear_selection();
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_near_border(-100))) { it.deselect(); continue; }
        }
        if (!bossspadecard_2128_instances.has_selection()) goto event_1895_36_end;
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1895_36_end: ;
}
void Frames::event_func_9041()
{
    // event 1896_36
    {
        if (!(group_main_engine_1)) goto event_1896_36_end;
        bossspadecard_2128_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(bossspadecard_2128_instances, qualifier_20)) goto event_1896_36_end;
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
        }
        if (!bossspadecard_2128_instances.has_selection()) goto event_1896_36_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1896_36_end;
        FrameObject * single_instance_1896_36_0; single_instance_1896_36_0 = pick_random(qualifier_20);
        if (single_instance_1896_36_0 == NULL) goto event_1896_36_end;
        ((Active*)((Active*)single_instance_1896_36_0))->alterables->values.set(2, 3);
        ((Active*)((Active*)single_instance_1896_36_0))->alterables->values.set(23, ((Active*)get_single(bossspadecard_2128_instances, default_active_instance))->alterables->values.get(2)/math_helper/2.0);
        ((Active*)((Active*)single_instance_1896_36_0))->alterables->values.set(24, ((Active*)get_single(bossspadecard_2128_instances, default_active_instance))->alterables->values.get(3)/math_helper/2.0);
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        ((Active*)((Active*)single_instance_1896_36_0))->alterables->values.sub(0, 5);
        {
            ((Active*)single_instance_1896_36_0)->set_shader(Render::INVERT);
        }
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    event_1896_36_end: ;
}
void Frames::event_func_9042()
{
    // event 1897_36
    {
        if (!(group_main_engine_1)) goto event_1897_36_end;
        bossspadecard_2128_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(bossspadecard_2128_instances, qualifier_20)) goto event_1897_36_end;
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
        }
        if (!bossspadecard_2128_instances.has_selection()) goto event_1897_36_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(5))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1897_36_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 3);
        }
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    event_1897_36_end: ;
}
void Frames::event_func_9043()
{
    // event 1898_36
    {
        if (!(group_main_engine_1)) goto event_1898_36_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1898_36_end;
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->get_movement()->set_deceleration(0);
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->get_direction());
        }
    }
    event_1898_36_end: ;
}
void Frames::event_func_9044()
{
    // event 1899_36
    {
        if (!(group_main_engine_1)) goto event_1899_36_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1899_36_end;
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+30);
            ((Active*)*it)->alterables->values.add(7, 1);
        }
    }
    event_1899_36_end: ;
}
void Frames::event_func_9045()
{
    // event 1900_36
    {
        if (!(group_main_engine_1)) goto event_1900_36_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(65536)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1900_36_end;
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, (((Active*)*it)->alterables->values.get(6)+((Active*)*it)->alterables->values.get(5)*0.4)%math_helper%32);
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->values.get(6)+0.5);
        }
    }
    event_1900_36_end: ;
}
void Frames::event_func_9046()
{
    // event 1901_36
    {
        if (!(group_main_engine_1)) goto event_1901_36_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(65536)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1901_36_end;
        qualifier_8.clear_selection();
        if (!check_overlap(bossmissile_2023_instances, qualifier_8)) goto event_1901_36_end;
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, (((Active*)*it)->alterables->values.get(6)+((Active*)*it)->alterables->values.get(5)*0.4)%math_helper%32);
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->values.get(6)+0.5);
        }
    }
    event_1901_36_end: ;
}
void Frames::event_func_9047()
{
    // event 1902_36
    {
        if (!(group_main_engine_1)) goto event_1902_36_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1902_36_end;
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-30);
        }
    }
    event_1902_36_end: ;
}
void Frames::event_func_9048()
{
    // event 1903_36
    bool or_result_1903_36 = false;
    bool or_temp_result_1903_36_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1903_36_0_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(65536))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto or_event_1903_36_0_end;
        or_result_1903_36 = true;
        or_temp_result_1903_36_0 = true;
    }
    or_event_1903_36_0_end: ;
    bossmissile_2023_instances.clear_saved_selection();
    if (or_temp_result_1903_36_0) {
        bossmissile_2023_instances.save_selection();
    }
    // event 1903_36
    bool or_temp_result_1903_36_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1903_36_1_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto or_event_1903_36_1_end;
        or_result_1903_36 = true;
        or_temp_result_1903_36_1 = true;
        or_event_1903_36_1_end: ;
        if (or_temp_result_1903_36_1) {
            bossmissile_2023_instances.save_selection();
        }
        if (!or_result_1903_36) goto or_final_or_event_1903_36_1_end;
        bossmissile_2023_instances.empty_selection();
        if (or_temp_result_1903_36_0 || or_temp_result_1903_36_1) {
            bossmissile_2023_instances.restore_selection();
        }
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(((Active*)*it)->get_movement()->get_speed()+4);
        }
    }
    or_final_or_event_1903_36_1_end: ;
}
void Frames::event_func_9049()
{
    // event 1905_36
    {
        if (!(group_main_engine_1)) goto event_1905_36_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1905_36_end;
        {
            SavedSelection extra_bossmissile_2023_instances(bossmissile_2023_instances);
            for (SavedIterator selected(extra_bossmissile_2023_instances); !selected.end(); ++selected) {
                foreach_instance_m = ((Active*)*selected);
                foreach_m_36();
            }
        }
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(0);
        }
    }
    event_1905_36_end: ;
}
void Frames::event_func_9050()
{
    // event 1907_36
    {
        if (!(group_main_engine_1)) goto event_1907_36_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (30))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1907_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1907_36_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1907_36_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1907_36_end;
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(bossmissile_2023_instances, playercharactersensor_383_instances)) goto event_1907_36_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 20);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -8);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.sub(24, 4);
    }
    event_1907_36_end: ;
}
void Frames::event_func_9051()
{
    // event 1909_36
    {
        if (!(group_main_engine_1)) goto event_1909_36_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_near_border(-300))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1909_36_end;
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1909_36_end: ;
}
void Frames::event_func_9052()
{
    // event 1916_36
    {
        if (!(group_main_engine_1)) goto event_1916_36_end;
        if (!((((Active*)get_instance(playerassist_2028_instances))->alterables->values.get(6)) == (0))) goto event_1916_36_end;
        if (!((((Active*)get_instance(playerassist_2028_instances))->alterables->values.get(8)) >= (2))) goto event_1916_36_end;
        ((Active*)get_instance(playerassist_2028_instances))->alterables->values.set(3, 5);
        ((Active*)get_instance(playerassist_2028_instances))->alterables->values.set(0, frame_left()-500);
        ((Active*)get_instance(playerassist_2028_instances))->alterables->values.set(6, 1);
        ((Active*)get_instance(playerassist_2028_instances))->set_visible(true);
    }
    event_1916_36_end: ;
}
void Frames::event_func_9053()
{
    // event 1917_36
    {
        if (!(group_main_engine_1)) goto event_1917_36_end;
        if (!((((Active*)get_instance(playerassist_2028_instances))->alterables->values.get(6)) == (1))) goto event_1917_36_end;
        if (!((((Active*)get_instance(playerassist_2028_instances))->alterables->values.get(0)) >= (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1917_36_end;
        ((Active*)get_instance(playerassist_2028_instances))->alterables->values.set(6, 2);
    }
    event_1917_36_end: ;
}
void Frames::event_func_9054()
{
    // event 1918_36
    {
        if (!(group_main_engine_1)) goto event_1918_36_end;
        if (!((((Active*)get_instance(playerassist_2028_instances))->alterables->values.get(6)) == (2))) goto event_1918_36_end;
        ((Active*)get_instance(playerassist_2028_instances))->alterables->values.set(0, ((Active*)get_instance(player_389_instances))->get_x());
    }
    event_1918_36_end: ;
}
void Frames::event_func_9055()
{
    // event 1919_36
    {
        if (!(group_main_engine_1)) goto event_1919_36_end;
        ((Active*)get_instance(playerassist_2028_instances))->set_x(((Active*)get_instance(playerassist_2028_instances))->alterables->values.get(0)+sin_deg(((Active*)get_instance(playerassist_2028_instances))->alterables->values.get(2))*32);
        ((Active*)get_instance(playerassist_2028_instances))->set_y(((Active*)get_instance(playerassist_2028_instances))->alterables->values.get(1)+cos_deg(((Active*)get_instance(playerassist_2028_instances))->alterables->values.get(2)*2+90)*8);
        ((Active*)get_instance(playerassist_2028_instances))->alterables->values.set(2, (((Active*)get_instance(playerassist_2028_instances))->alterables->values.get(2)+0.7)%math_helper%360);
        {
            FrameObject * parent = ((Active*)get_instance(playerassist_2028_instances));
            if (parent == NULL) goto pos_end_1919_36_0;
            ((Active*)get_instance(playerassistcopilot_2219_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1919_36_0: ;
        }
        ((Active*)get_instance(playerassist_2028_instances))->alterables->values.add(0, ((Active*)get_instance(playerassist_2028_instances))->alterables->values.get(3));
        ((Active*)get_instance(playerassist_2028_instances))->alterables->values.add(1, ((Active*)get_instance(playerassist_2028_instances))->alterables->values.get(4));
        ((Active*)get_instance(playerassist_2028_instances))->move_front();
    }
    event_1919_36_end: ;
}
void Frames::event_func_9056()
{
    // event 1920_36
    {
        if (!(group_main_engine_1)) goto event_1920_36_end;
        if (!(((Active*)get_instance(playerassist_2028_instances))->flags & VISIBLE)) goto event_1920_36_end;
        if (!(((Active*)get_instance(playerassist_2028_instances))->test_directions(1))) goto event_1920_36_end;
        if (!((((Active*)get_instance(playerassist_2028_instances))->get_x()) > (frame_left()))) goto event_1920_36_end;
        if (!((((Active*)get_instance(playerassist_2028_instances))->get_x()) < (frame_right()+128))) goto event_1920_36_end;
        FrameObject * single_instance_1920_36_0; single_instance_1920_36_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerassist_2028_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust01_332(parent->x + -64, parent->y + 8), parent->layer);
                if (single_instance_1920_36_0 == NULL)
                    single_instance_1920_36_0 = new_obj;
            }
        }
        ((Active*)single_instance_1920_36_0)->move_back(((Active*)get_instance(playerassist_2028_instances)));
        ((Active*)((Active*)single_instance_1920_36_0))->set_direction(16);
        ((Active*)((Active*)single_instance_1920_36_0))->force_speed(50+randrange(50));
        ((Active*)((Active*)single_instance_1920_36_0))->set_angle(randrange(4)*90, 0);
        ((Active*)((Active*)single_instance_1920_36_0))->get_movement()->set_speed(50);
    }
    event_1920_36_end: ;
}
void Frames::event_func_9057()
{
    // event 1921_36
    {
        if (!(group_main_engine_1)) goto event_1921_36_end;
        player_389_instances.clear_selection();
        playerassist_2028_instances.clear_selection();
        if (!check_overlap(player_389_instances, playerassist_2028_instances)) goto event_1921_36_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) > (((Active*)get_instance(playerassistcopilot_2219_instances))->get_y()-16))) goto event_1921_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1921_36_end;
        if (!((((Active*)get_instance(playerassist_2028_instances))->alterables->values.get(6)) >= (1))) goto event_1921_36_end;
        if (!((((Active*)get_instance(playerassist_2028_instances))->alterables->values.get(6)) <= (2))) goto event_1921_36_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 43);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playerassistcopilot_2219_instances))->set_direction(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0));
        ((Active*)get_instance(playerassist_2028_instances))->alterables->values.set(6, 3);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.enable(8);
    }
    event_1921_36_end: ;
}
void Frames::event_func_9058()
{
    // event 1922_36
    {
        if (!(group_main_engine_1)) goto event_1922_36_end;
        if (!((((Active*)get_instance(playerassist_2028_instances))->alterables->values.get(6)) == (3))) goto event_1922_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (43))) goto event_1922_36_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(playerassistcopilot_2219_instances))->set_visible(true);
        ((Active*)get_instance(playerassistcopilot_2219_instances))->move_front();
    }
    event_1922_36_end: ;
}
void Frames::event_func_9059()
{
    // event 1923_36
    {
        if (!(group_main_engine_1)) goto event_1923_36_end;
        if (!((((Active*)get_instance(playerassist_2028_instances))->alterables->values.get(6)) == (3))) goto event_1923_36_end;
        ((Active*)get_instance(playerassist_2028_instances))->alterables->values.set(3, get_min(((Active*)get_instance(playerassist_2028_instances))->alterables->values.get(3)+0.1, 16));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playerassistcopilot_2219_instances))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playerassistcopilot_2219_instances))->get_y());
    }
    event_1923_36_end: ;
}
void Frames::event_func_9060()
{
    // event 1937_36
    {
        if (!(group_main_engine_1)) goto event_1937_36_end;
        if (!(((Active*)get_instance(guicompass_1270_instances))->flags & VISIBLE)) goto event_1937_36_end;
        ((Active*)get_instance(guicompass_1270_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(guicompass_1270_instances))->set_x(get_max(frame_left()+32, get_min(((Active*)get_instance(guicompass_1270_instances))->alterables->values.get(2), frame_left()+global_values->get(16)-32)));
        ((Active*)get_instance(guicompass_1270_instances))->set_y(((Active*)get_instance(guicompass_1270_instances))->alterables->values.get(1)+((Active*)get_instance(guicompass_1270_instances))->alterables->values.get(0)*0.5);
        {
            ((Active*)get_instance(guicompass_1270_instances))->blend_color.set_semi_transparency(((Active*)get_instance(guicompass_1270_instances))->alterables->values.get(0)*4);
        }
    }
    event_1937_36_end: ;
}
void Frames::event_func_9061()
{
    // event 1938_36
    {
        if (!(group_main_engine_1)) goto event_1938_36_end;
        if (!((((Active*)get_instance(guicompass_1270_instances))->alterables->values.get(0)) >= (40))) goto event_1938_36_end;
        ((Active*)get_instance(guicompass_1270_instances))->alterables->values.sub(0, 40);
    }
    event_1938_36_end: ;
}
void Frames::event_func_9062()
{
    // event 2144_36
    {
        if (!(group_main_engine_1)) goto event_2144_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (6900))) goto event_2144_36_end;
        if (once_condition_2144_36) goto event_2144_36_end;
        once_condition_2144_36 = true;
        levelbackgroundplane2_865_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelbackgroundplane2_2234(-100, 0), 0);
            levelbackgroundplane2_865_instances.add_back();
        }
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-320);
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-50);
            ((Active*)*it)->set_direction(4);
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, -5);
            ((Active*)*it)->alterables->values.set(3, frame_left()+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23));
            ((Active*)*it)->alterables->values.set(4, frame_top()+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(24));
            ((Active*)*it)->alterables->values.set(5, 4);
        }
    }
    event_2144_36_end: ;
}
void Frames::event_func_9063()
{
    // event 2145_36
    {
        if (!(group_main_engine_1)) goto event_2145_36_end;
        levelbackgroundplane2_865_instances.clear_selection();
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((frame_left()+((Active*)*it)->alterables->values.get(0))*(0.7+(((Active*)*it)->alterables->values.get(2)*0.05)));
            ((Active*)*it)->set_y((frame_top()+((Active*)*it)->alterables->values.get(1))*(0.7+(((Active*)*it)->alterables->values.get(2)*0.05)));
            ((Active*)*it)->alterables->values.add(0, 8-((Active*)*it)->alterables->values.get(2)*2+(((Active*)*it)->get_direction()*4));
            ((Active*)*it)->alterables->values.add(1, 0.25);
        }
        levelparallaxzaoship_2121_instances.clear_selection();
        for (ObjectIterator it(levelparallaxzaoship_2121_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_global_position(frame_left()*0.6+100, frame_top()*0.6+100);
        }
    }
    event_2145_36_end: ;
}
void Frames::event_func_9064()
{
    // event 2149_36
    {
        if (!(group_pause_1)) goto event_2149_36_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_2149_36_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2149_36_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_2149_36_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_2149_36_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(true);
        media.pause_samples();
            group_main_engine_1 = false;
    
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 5);
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldearth_314_instances.clear_selection();
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldflamefront_316_instances.clear_selection();
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldflameback_315_instances.clear_selection();
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectcodec_354_instances.clear_selection();
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        enemybullet_2098_instances.clear_selection();
        for (ObjectIterator it(enemybullet_2098_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsexplosion01_309_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion01_309_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsexplosion02_411_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion02_411_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsexplosion06_312_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsdust_305_instances.clear_selection();
        for (ObjectIterator it(effectsdust_305_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectshade_356_instances.clear_selection();
        for (ObjectIterator it(effectshade_356_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        thunderspark_339_instances.clear_selection();
        for (ObjectIterator it(thunderspark_339_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswatersplash_416_instances.clear_selection();
        for (ObjectIterator it(effectswatersplash_416_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle1_300_instances.clear_selection();
        for (ObjectIterator it(sparkle1_300_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle2_333_instances.clear_selection();
        for (ObjectIterator it(sparkle2_333_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle3_334_instances.clear_selection();
        for (ObjectIterator it(sparkle3_334_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle4_335_instances.clear_selection();
        for (ObjectIterator it(sparkle4_335_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle5_336_instances.clear_selection();
        for (ObjectIterator it(sparkle5_336_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ringsparkle_139_instances.clear_selection();
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsdebris_319_instances.clear_selection();
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        media.play_id(SOUND_UI_PAUSE_63, -1, 1);
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsspringbeam_470_instances.clear_selection();
        for (ObjectIterator it(effectsspringbeam_470_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        // icache destruction
        goldplatform2_1736_instances.clear_selection();
        laddertop_357_instances.clear_selection();
        goldplatform3_1737_instances.clear_selection();
        levelpistonplatform1_2717_instances.clear_selection();
        levelmovingplatform01_1404_instances.clear_selection();
        gimmickleafplatform2_2360_instances.clear_selection();
        levelglacierplatform2_3282_instances.clear_selection();
        levelglacierplatform1_3251_instances.clear_selection();
        fdplatform_3542_instances.clear_selection();
        leveltrolleyplatform_1818_instances.clear_selection();
        shipplatform1_2093_instances.clear_selection();
        yellowspringupleft_432_instances.clear_selection();
        levelfireplatform1_2646_instances.clear_selection();
        playeractionvaluesa_387_instances.clear_selection();
        playeractionvaluesb_388_instances.clear_selection();
        fdlasertunnelplatform_3728_instances.clear_selection();
        levelfdpushplatform_3539_instances.clear_selection();
        shipplatform3_2095_instances.clear_selection();
        levelcrankferris_3319_instances.clear_selection();
        carouselplatform_2015_instances.clear_selection();
        planeplatform_2038_instances.clear_selection();
        levellagoonplatform1_2967_instances.clear_selection();
        escalatorright_1966_instances.clear_selection();
        minibossgolempiece1_1250_instances.clear_selection();
        minibossgolempiece2_1249_instances.clear_selection();
        yellowspringup_434_instances.clear_selection();
        gimmickrisingswing_1405_instances.clear_selection();
        levelspinplatform_2718_instances.clear_selection();
        levelmovingplatform3_949_instances.clear_selection();
        mastergroupsa_384_instances.clear_selection();
        gimmickdragontunnelmask2_1781_instances.clear_selection();
        redspringupright_438_instances.clear_selection();
        levelrmplatform_1506_instances.clear_selection();
        gimmickcollapsingplatformleftbrick02_667_instances.clear_selection();
        gimmickdragontunnel1_1845_instances.clear_selection();
        leveltrolleyplatform2_1819_instances.clear_selection();
        levelfloatingplatform_1032_instances.clear_selection();
        levelmovingplatform1_1965_instances.clear_selection();
        gimmickswingplatform_768_instances.clear_selection();
        levelfloatingplatform3_1412_instances.clear_selection();
        escalatorleft_1951_instances.clear_selection();
        levelmovingplatform2_940_instances.clear_selection();
        levellagoonplatform2_2980_instances.clear_selection();
        levelvalleyplatform1_939_instances.clear_selection();
        levelferriswheel2_1766_instances.clear_selection();
        gimmickbridgelog_412_instances.clear_selection();
        crystalplatform_2317_instances.clear_selection();
        levelaxelplatform3_844_instances.clear_selection();
        spinninglogmask_1004_instances.clear_selection();
        levelferriswheel1_1765_instances.clear_selection();
        gimmickrollingplatformcave_1497_instances.clear_selection();
        aquabrickplatform_744_instances.clear_selection();
        levelfloatingplatform2_1387_instances.clear_selection();
        levelferriswheel3_1767_instances.clear_selection();
        levelsbplatform1_2096_instances.clear_selection();
        airventplatform_2668_instances.clear_selection();
        levelsbplatform3_2197_instances.clear_selection();
        shipplatform2_2094_instances.clear_selection();
        levelaxelplatform2_654_instances.clear_selection();
        gimmickcrankplatformtop1_2801_instances.clear_selection();
        gimmickcrankplatformtop2_2802_instances.clear_selection();
        gimmickdownhillplatform_3427_instances.clear_selection();
        levelaxelplatform1_653_instances.clear_selection();
        active_2962_instances.clear_selection();
        levelmovingplatform1_3840_instances.clear_selection();
        waterfalllog_1013_instances.clear_selection();
        levelhandcar_1415_instances.clear_selection();
        gimmickbreakoutplatform_3037_instances.clear_selection();
        gimmickrollingplatform_1171_instances.clear_selection();
        minibossbonegolempiece5_1579_instances.clear_selection();
        bosstbplatform_2878_instances.clear_selection();
        gimmickleafplatform1_2359_instances.clear_selection();
        redspringupleft_439_instances.clear_selection();
        gimmickdragontunnelmask1_1780_instances.clear_selection();
        yellowspringupright_433_instances.clear_selection();
        gimmickflyingleafplatformmask_2462_instances.clear_selection();
        levelwaterplatform_1954_instances.clear_selection();
        levelferriswheel4_1768_instances.clear_selection();
        levelfloatingplatform_523_instances.clear_selection();
        bgplatform1_3318_instances.clear_selection();
        gimmickbowarrowplatform_2970_instances.clear_selection();
        levelcreekplatform_2424_instances.clear_selection();
        goldplatform1_1735_instances.clear_selection();
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        // icache destruction
        pressuredoor3_3473_instances.clear_selection();
        gimmickconveyorbeltright_2818_instances.clear_selection();
        yellowspringright_435_instances.clear_selection();
        playerblocker_2756_instances.clear_selection();
        gimmickconveyorbeltleft3_2826_instances.clear_selection();
        gimmickmovingfloor3_1255_instances.clear_selection();
        rmalternatepath_1420_instances.clear_selection();
        gimmickchainwalldown_2292_instances.clear_selection();
        bgloop3_3332_instances.clear_selection();
        tbpipeloop9_2823_instances.clear_selection();
        rmalternatepath2_1379_instances.clear_selection();
        breakablerock_951_instances.clear_selection();
        active_1396_instances.clear_selection();
        spiraltunnelmask_958_instances.clear_selection();
        pushableblock3_1394_instances.clear_selection();
        monitorwoodshield_325_instances.clear_selection();
        collapsingplatform_745_instances.clear_selection();
        objecttransporter_3344_instances.clear_selection();
        levelcrusher1_832_instances.clear_selection();
        levellayer1loop03_808_instances.clear_selection();
        customtile15_3813_instances.clear_selection();
        customtile23_3821_instances.clear_selection();
        bosstunnel2_1077_instances.clear_selection();
        objectspiketrap_3835_instances.clear_selection();
        ramp2_1856_instances.clear_selection();
        monitorfireshield_328_instances.clear_selection();
        fdlooplayer03_3639_instances.clear_selection();
        active_2270_instances.clear_selection();
        customtile3_3801_instances.clear_selection();
        gimmickverticalhalfpipe5_1826_instances.clear_selection();
        customtile14_3812_instances.clear_selection();
        active3_2272_instances.clear_selection();
        collapsingsegment2_3914_instances.clear_selection();
        yellowspringleft_436_instances.clear_selection();
        customtile10_3808_instances.clear_selection();
        fdlooplayer13_3642_instances.clear_selection();
        gimmickaxletunnel_1262_instances.clear_selection();
        layer0loop5_1946_instances.clear_selection();
        lockedlabdoorbarrier_3541_instances.clear_selection();
        customtile24_3822_instances.clear_selection();
        levellayer116_349_instances.clear_selection();
        sbloop6_2225_instances.clear_selection();
        gimmickrollingarchbase_1725_instances.clear_selection();
        breakablerock2_1007_instances.clear_selection();
        monitor1up_410_instances.clear_selection();
        gimmickrotatingpipebase_804_instances.clear_selection();
        gimmicklanternbridge7_1733_instances.clear_selection();
        gimmickverticalhalfpipe6_1824_instances.clear_selection();
        fdlooplayer14_3646_instances.clear_selection();
        monitorwatershield_327_instances.clear_selection();
        levelthcollapsingplatform_3164_instances.clear_selection();
        sbloop3_2211_instances.clear_selection();
        customtile27_3825_instances.clear_selection();
        tbpipeloop2_2804_instances.clear_selection();
        bosscrystalspire_2293_instances.clear_selection();
        levellayer1loop02_1235_instances.clear_selection();
        hazardspikesup_558_instances.clear_selection();
        gimmickconveyorbeltright2_2819_instances.clear_selection();
        switchcolumnfront1_1169_instances.clear_selection();
        fdlooplayer15_3649_instances.clear_selection();
        fdlooplayer01_3643_instances.clear_selection();
        bossdoor_3191_instances.clear_selection();
        levelballtunnel1_1033_instances.clear_selection();
        active2_2271_instances.clear_selection();
        customtile19_3817_instances.clear_selection();
        levelminetrackswitch_1413_instances.clear_selection();
        objectexplosiveblock_2708_instances.clear_selection();
        objectteleblockmask_3246_instances.clear_selection();
        monitormetalshield_329_instances.clear_selection();
        customtile17_3815_instances.clear_selection();
        minibossbulldozerhitbox_1776_instances.clear_selection();
        jellyspring_739_instances.clear_selection();
        turningspring_1960_instances.clear_selection();
        breakableaquabrick2_813_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        monitorkeystone_562_instances.clear_selection();
        levelsbmovingblock1_2310_instances.clear_selection();
        layer0block_1872_instances.clear_selection();
        monitorearthshield_326_instances.clear_selection();
        gimmickconveyorbeltleft2_2825_instances.clear_selection();
        sbloop7_2274_instances.clear_selection();
        gimmicklanternbridge2_1728_instances.clear_selection();
        switchdoor2_754_instances.clear_selection();
        bosshatchdoor_3317_instances.clear_selection();
        redspringup_440_instances.clear_selection();
        customtile6_3804_instances.clear_selection();
        tbpipeloop8_2822_instances.clear_selection();
        enemybullfragmask_2419_instances.clear_selection();
        tbpipeloop11_2850_instances.clear_selection();
        gimmickdrillplatform_1503_instances.clear_selection();
        treetrunk_1034_instances.clear_selection();
        tbpipeloop3_2807_instances.clear_selection();
        levelcrusher2_833_instances.clear_selection();
        customtile20_3818_instances.clear_selection();
        largecolumn2_1862_instances.clear_selection();
        levelballtunnel3_2266_instances.clear_selection();
        layer0loop6_1969_instances.clear_selection();
        levelballtunnel2_2265_instances.clear_selection();
        active4_2273_instances.clear_selection();
        sbloop1_2209_instances.clear_selection();
        gimmicklanternbridge5_1731_instances.clear_selection();
        bgloop1_3330_instances.clear_selection();
        levellayer1loop2_1504_instances.clear_selection();
        gimmickverticalhalfpipe2_1825_instances.clear_selection();
        redspringleft_442_instances.clear_selection();
        pllayer02_2959_instances.clear_selection();
        fdlooplayer04_3647_instances.clear_selection();
        gimmickelevator2_1398_instances.clear_selection();
        jcloop3_2448_instances.clear_selection();
        yellowspringdown_437_instances.clear_selection();
        gimmickchainwallup_2291_instances.clear_selection();
        gimmickrotatingpipe_801_instances.clear_selection();
        breakablefloor1_1760_instances.clear_selection();
        gimmickmovingfloor2_1254_instances.clear_selection();
        gimmickelevator_2020_instances.clear_selection();
        customtile4_3802_instances.clear_selection();
        switchdoor_735_instances.clear_selection();
        customtile7_3805_instances.clear_selection();
        levelelectriccrusher_3540_instances.clear_selection();
        minibosstrapdoor_2722_instances.clear_selection();
        customtile2_3800_instances.clear_selection();
        spikeceiling_1568_instances.clear_selection();
        monitorbomb_563_instances.clear_selection();
        gimmickconveyorbeltright3_2820_instances.clear_selection();
        gimmickverticalhalfpipe3_1823_instances.clear_selection();
        sbloop2_2210_instances.clear_selection();
        tbpipeloop7_2806_instances.clear_selection();
        breakableruins_1184_instances.clear_selection();
        breakableplrock_2987_instances.clear_selection();
        sbloop4_2224_instances.clear_selection();
        tbpipeloop4_2808_instances.clear_selection();
        hazardspikesleft_560_instances.clear_selection();
        levellayer02_1238_instances.clear_selection();
        gimmickverticalhalfpipe4_1822_instances.clear_selection();
        gimmickrelicflippanel_1240_instances.clear_selection();
        layer0loop_1742_instances.clear_selection();
        gimmickcrusherplatform_2306_instances.clear_selection();
        floorcandle2_4117_instances.clear_selection();
        gimmicklanternbridge3_1729_instances.clear_selection();
        fdlooplayer05_3648_instances.clear_selection();
        layer1loop2_1744_instances.clear_selection();
        levelscrollingplatform2_2663_instances.clear_selection();
        tbpipeloop5_2805_instances.clear_selection();
        layer1loop_1745_instances.clear_selection();
        gimmickconveyorbeltleft_2824_instances.clear_selection();
        objectswitchblock2_3340_instances.clear_selection();
        levellayer1loop01_1234_instances.clear_selection();
        pllayer11_2957_instances.clear_selection();
        enemymagnetizercrate_2301_instances.clear_selection();
        levelcrystalspike_2248_instances.clear_selection();
        lightstonedoor2_1586_instances.clear_selection();
        gimmickmovingpillar1_1407_instances.clear_selection();
        fdlooplayer02_3641_instances.clear_selection();
        gimmickchainwallmaskdown_2305_instances.clear_selection();
        levellayer117_1487_instances.clear_selection();
        scrollingfloor_2021_instances.clear_selection();
        monitorcrystals_324_instances.clear_selection();
        leveljccollapsingplatformpiece_2427_instances.clear_selection();
        gimmicklanternbridge8_1734_instances.clear_selection();
        levellayer0loop04_997_instances.clear_selection();
        levelscrollingplatform1_2662_instances.clear_selection();
        jcslidingplatform_2414_instances.clear_selection();
        layer1loop3_1746_instances.clear_selection();
        hazardfloortrap_2748_instances.clear_selection();
        lockeddoorbarrier_2667_instances.clear_selection();
        airlock1_3453_instances.clear_selection();
        levellayer016_996_instances.clear_selection();
        digspothole_1186_instances.clear_selection();
        levelcrusher1_772_instances.clear_selection();
        hazardspikesup2_3909_instances.clear_selection();
        gimmickrelicpanel_1178_instances.clear_selection();
        collapsingsegment1_3912_instances.clear_selection();
        corkscrewdoor_3537_instances.clear_selection();
        breakableaquabrick_743_instances.clear_selection();
        gimmickmovingpillar2_1408_instances.clear_selection();
        minibossbarrier_924_instances.clear_selection();
        customtile5_3803_instances.clear_selection();
        fdrotatingbarrier_3573_instances.clear_selection();
        jcloop4_2446_instances.clear_selection();
        gimmickteetertotter_1827_instances.clear_selection();
        levellayer015_1261_instances.clear_selection();
        monitorcrate_409_instances.clear_selection();
        redspringright_441_instances.clear_selection();
        levelhideoutplatform1_3157_instances.clear_selection();
        bossgate_1878_instances.clear_selection();
        hazardspikesright_561_instances.clear_selection();
        gimmickwaterturbine_2851_instances.clear_selection();
        monitorrings_407_instances.clear_selection();
        pushableblock2_1012_instances.clear_selection();
        objectbiglift_3574_instances.clear_selection();
        monitorinvincibility_408_instances.clear_selection();
        levellayer03_1505_instances.clear_selection();
        gimmickmovingfloor1_1253_instances.clear_selection();
        gimmickchainwallmaskup_2307_instances.clear_selection();
        levellayer002_1260_instances.clear_selection();
        customtile18_3816_instances.clear_selection();
        objectspinningbeam_807_instances.clear_selection();
        levelfireplatform2_2739_instances.clear_selection();
        fdlooplayer12_3636_instances.clear_selection();
        slimefloor_839_instances.clear_selection();
        gimmicklanternbridge6_1732_instances.clear_selection();
        gimmicklanternbridge1_1727_instances.clear_selection();
        tbpipeloop1_2803_instances.clear_selection();
        gimmicksnowspiremask_3247_instances.clear_selection();
        sbloop5_2223_instances.clear_selection();
        layer0loop4_1945_instances.clear_selection();
        levellayer101_1232_instances.clear_selection();
        customtile21_3819_instances.clear_selection();
        gimmickverticalhalfpipe1_1821_instances.clear_selection();
        levellayer001_1237_instances.clear_selection();
        levellayer115_348_instances.clear_selection();
        breakablefloor2_1761_instances.clear_selection();
        pushableblock4_2269_instances.clear_selection();
        layer0loop3_1857_instances.clear_selection();
        pllayer12_2964_instances.clear_selection();
        levellayer115_1085_instances.clear_selection();
        tbpipeloop6_2809_instances.clear_selection();
        leveljccollapsingplatform_2444_instances.clear_selection();
        gimmicklanternbridge4_1730_instances.clear_selection();
        keyboard_1940_instances.clear_selection();
        airlock4_3454_instances.clear_selection();
        tbpipeloop10_2849_instances.clear_selection();
        levelicebarrier_2456_instances.clear_selection();
        customtile26_3824_instances.clear_selection();
        customtile22_3820_instances.clear_selection();
        gimmickmovingpillar3_1409_instances.clear_selection();
        customtile13_3811_instances.clear_selection();
        lightstonedoor1_1585_instances.clear_selection();
        objectvanishingblock_3034_instances.clear_selection();
        levelthcollapsingplatformpiece_3165_instances.clear_selection();
        customtile25_3823_instances.clear_selection();
        slimeraft_843_instances.clear_selection();
        bossclawbase_1393_instances.clear_selection();
        customtile16_3814_instances.clear_selection();
        customtile1_3799_instances.clear_selection();
        jcloop2_2447_instances.clear_selection();
        redspringdown_443_instances.clear_selection();
        levellayer1loop03_1086_instances.clear_selection();
        switchplatform_2100_instances.clear_selection();
        customtile11_3809_instances.clear_selection();
        largecolumn_1861_instances.clear_selection();
        jcloop1_2445_instances.clear_selection();
        scrollingfloor2_3440_instances.clear_selection();
        bgloop2_3331_instances.clear_selection();
        hazardspikesdown_559_instances.clear_selection();
        pushableblock1_531_instances.clear_selection();
        hazardspikesright2_3910_instances.clear_selection();
        fdlooplayer11_3640_instances.clear_selection();
        pllayer01_2958_instances.clear_selection();
        levellift_2647_instances.clear_selection();
        layer0loop2_1743_instances.clear_selection();
        customtile12_3810_instances.clear_selection();
        ramp1_1869_instances.clear_selection();
        objectswitchblock1_3339_instances.clear_selection();
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        // icache destruction
        generaledge05_3898_instances.clear_selection();
        generaledge01_3894_instances.clear_selection();
        generaledge04_3897_instances.clear_selection();
        generaledge02_3895_instances.clear_selection();
        generaledge03_3896_instances.clear_selection();
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(crystal_456_instances))->set_visible(true);
        effectsdust01_332_instances.clear_selection();
        for (ObjectIterator it(effectsdust01_332_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectscrystalbit_323_instances.clear_selection();
        for (ObjectIterator it(effectscrystalbit_323_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        gimmickfandebris_2125_instances.clear_selection();
        for (ObjectIterator it(gimmickfandebris_2125_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        gimmickfan_2220_instances.clear_selection();
        for (ObjectIterator it(gimmickfan_2220_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibossflame_1199_instances.clear_selection();
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        gimmickflamethrower_2196_instances.clear_selection();
        for (ObjectIterator it(gimmickflamethrower_2196_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(levelsbplatform3_2197_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsgroundspark_2025_instances.clear_selection();
        for (ObjectIterator it(effectsgroundspark_2025_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        levelsbplatformflame1_2097_instances.clear_selection();
        for (ObjectIterator it(levelsbplatformflame1_2097_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        hazardfireup_2226_instances.clear_selection();
        for (ObjectIterator it(hazardfireup_2226_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        hazardfiredown_2227_instances.clear_selection();
        for (ObjectIterator it(hazardfiredown_2227_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        hazardfireright_2228_instances.clear_selection();
        for (ObjectIterator it(hazardfireright_2228_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        hazardfireleft_2229_instances.clear_selection();
        for (ObjectIterator it(hazardfireleft_2229_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        levelbackgroundplane2_865_instances.clear_selection();
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerassistcopilot_2219_instances))->stop_animation();
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerassist_2028_instances))->stop_animation();
        ((Active*)get_instance(bosschoppertailblade_2217_instances))->stop_animation();
        ((Active*)get_instance(bosschopperblade_2218_instances))->stop_animation();
        ((Active*)get_instance(bosschoppertailblade2_2214_instances))->stop_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->stop_animation();
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectcodecid_303_instances.clear_selection();
        for (ObjectIterator it(objectcodecid_303_instances); !it.end(); ++it) {
            ((Counter*)*it)->get_movement()->stop(false);
        }
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        monitorbroken_330_instances.clear_selection();
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        enemydronelaser_2127_instances.clear_selection();
        for (ObjectIterator it(enemydronelaser_2127_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        gimmickcannon_2199_instances.clear_selection();
        for (ObjectIterator it(gimmickcannon_2199_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bossspade_2194_instances))->stop_animation();
        bossspadecard_2128_instances.clear_selection();
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyfragbomb_2049_instances.clear_selection();
        for (ObjectIterator it(enemyfragbomb_2049_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_2149_36_end: ;
}
void Frames::event_func_9065()
{
    // event 2150_36
    bool or_result_2150_36 = false;
    bool or_temp_result_2150_36_0 = false;
    {
        if (!(group_pause_1)) goto or_event_2150_36_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_2150_36_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2150_36_0_end;
        or_result_2150_36 = true;
        or_temp_result_2150_36_0 = true;
    }
    or_event_2150_36_0_end: ;
    // event 2150_36
    bool or_temp_result_2150_36_1 = false;
    {
        if (!(group_pause_1)) goto or_event_2150_36_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_2150_36_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2150_36_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_2150_36_1_end;
        or_result_2150_36 = true;
        or_temp_result_2150_36_1 = true;
        or_event_2150_36_1_end: ;
        if (!or_result_2150_36) goto or_final_or_event_2150_36_1_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(false);
        media.resume_samples();
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 2);
        if (!group_main_engine_1) {
            group_main_engine_1 = true;
        }
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldflamefront_316_instances.clear_selection();
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldflameback_315_instances.clear_selection();
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldearth_314_instances.clear_selection();
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectcodec_354_instances.clear_selection();
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        enemybullet_2098_instances.clear_selection();
        for (ObjectIterator it(enemybullet_2098_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        effectsexplosion01_309_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion01_309_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsexplosion02_411_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion02_411_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsexplosion06_312_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsdust_305_instances.clear_selection();
        for (ObjectIterator it(effectsdust_305_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectshade_356_instances.clear_selection();
        for (ObjectIterator it(effectshade_356_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        thunderspark_339_instances.clear_selection();
        for (ObjectIterator it(thunderspark_339_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectswatersplash_416_instances.clear_selection();
        for (ObjectIterator it(effectswatersplash_416_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle1_300_instances.clear_selection();
        for (ObjectIterator it(sparkle1_300_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle2_333_instances.clear_selection();
        for (ObjectIterator it(sparkle2_333_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle3_334_instances.clear_selection();
        for (ObjectIterator it(sparkle3_334_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle4_335_instances.clear_selection();
        for (ObjectIterator it(sparkle4_335_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle5_336_instances.clear_selection();
        for (ObjectIterator it(sparkle5_336_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ringsparkle_139_instances.clear_selection();
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsdebris_319_instances.clear_selection();
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        effectsspringbeam_470_instances.clear_selection();
        for (ObjectIterator it(effectsspringbeam_470_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        // icache destruction
        pressuredoor3_3473_instances.clear_selection();
        gimmickconveyorbeltright_2818_instances.clear_selection();
        yellowspringright_435_instances.clear_selection();
        playerblocker_2756_instances.clear_selection();
        gimmickconveyorbeltleft3_2826_instances.clear_selection();
        gimmickmovingfloor3_1255_instances.clear_selection();
        rmalternatepath_1420_instances.clear_selection();
        gimmickchainwalldown_2292_instances.clear_selection();
        bgloop3_3332_instances.clear_selection();
        tbpipeloop9_2823_instances.clear_selection();
        rmalternatepath2_1379_instances.clear_selection();
        breakablerock_951_instances.clear_selection();
        active_1396_instances.clear_selection();
        spiraltunnelmask_958_instances.clear_selection();
        pushableblock3_1394_instances.clear_selection();
        monitorwoodshield_325_instances.clear_selection();
        collapsingplatform_745_instances.clear_selection();
        objecttransporter_3344_instances.clear_selection();
        levelcrusher1_832_instances.clear_selection();
        levellayer1loop03_808_instances.clear_selection();
        customtile15_3813_instances.clear_selection();
        customtile23_3821_instances.clear_selection();
        bosstunnel2_1077_instances.clear_selection();
        objectspiketrap_3835_instances.clear_selection();
        ramp2_1856_instances.clear_selection();
        monitorfireshield_328_instances.clear_selection();
        fdlooplayer03_3639_instances.clear_selection();
        active_2270_instances.clear_selection();
        customtile3_3801_instances.clear_selection();
        gimmickverticalhalfpipe5_1826_instances.clear_selection();
        customtile14_3812_instances.clear_selection();
        active3_2272_instances.clear_selection();
        collapsingsegment2_3914_instances.clear_selection();
        mastergroupsa_384_instances.clear_selection();
        customtile10_3808_instances.clear_selection();
        fdlooplayer13_3642_instances.clear_selection();
        gimmickaxletunnel_1262_instances.clear_selection();
        layer0loop5_1946_instances.clear_selection();
        lockedlabdoorbarrier_3541_instances.clear_selection();
        customtile24_3822_instances.clear_selection();
        levellayer116_349_instances.clear_selection();
        sbloop6_2225_instances.clear_selection();
        gimmickrollingarchbase_1725_instances.clear_selection();
        breakablerock2_1007_instances.clear_selection();
        monitor1up_410_instances.clear_selection();
        gimmickrotatingpipebase_804_instances.clear_selection();
        gimmicklanternbridge7_1733_instances.clear_selection();
        gimmickverticalhalfpipe6_1824_instances.clear_selection();
        fdlooplayer14_3646_instances.clear_selection();
        monitorwatershield_327_instances.clear_selection();
        levelthcollapsingplatform_3164_instances.clear_selection();
        sbloop3_2211_instances.clear_selection();
        customtile27_3825_instances.clear_selection();
        tbpipeloop2_2804_instances.clear_selection();
        bosscrystalspire_2293_instances.clear_selection();
        levellayer1loop02_1235_instances.clear_selection();
        hazardspikesup_558_instances.clear_selection();
        gimmickconveyorbeltright2_2819_instances.clear_selection();
        switchcolumnfront1_1169_instances.clear_selection();
        fdlooplayer15_3649_instances.clear_selection();
        fdlooplayer01_3643_instances.clear_selection();
        bossdoor_3191_instances.clear_selection();
        levelballtunnel1_1033_instances.clear_selection();
        active2_2271_instances.clear_selection();
        customtile19_3817_instances.clear_selection();
        levelminetrackswitch_1413_instances.clear_selection();
        objectexplosiveblock_2708_instances.clear_selection();
        objectteleblockmask_3246_instances.clear_selection();
        monitormetalshield_329_instances.clear_selection();
        customtile17_3815_instances.clear_selection();
        minibossbulldozerhitbox_1776_instances.clear_selection();
        jellyspring_739_instances.clear_selection();
        turningspring_1960_instances.clear_selection();
        breakableaquabrick2_813_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        monitorkeystone_562_instances.clear_selection();
        levelsbmovingblock1_2310_instances.clear_selection();
        layer0block_1872_instances.clear_selection();
        monitorearthshield_326_instances.clear_selection();
        gimmickconveyorbeltleft2_2825_instances.clear_selection();
        sbloop7_2274_instances.clear_selection();
        gimmicklanternbridge2_1728_instances.clear_selection();
        switchdoor2_754_instances.clear_selection();
        bosshatchdoor_3317_instances.clear_selection();
        redspringup_440_instances.clear_selection();
        customtile6_3804_instances.clear_selection();
        tbpipeloop8_2822_instances.clear_selection();
        enemybullfragmask_2419_instances.clear_selection();
        tbpipeloop11_2850_instances.clear_selection();
        gimmickdrillplatform_1503_instances.clear_selection();
        treetrunk_1034_instances.clear_selection();
        tbpipeloop3_2807_instances.clear_selection();
        levelcrusher2_833_instances.clear_selection();
        customtile20_3818_instances.clear_selection();
        largecolumn2_1862_instances.clear_selection();
        levelballtunnel3_2266_instances.clear_selection();
        layer0loop6_1969_instances.clear_selection();
        levelballtunnel2_2265_instances.clear_selection();
        active4_2273_instances.clear_selection();
        sbloop1_2209_instances.clear_selection();
        gimmicklanternbridge5_1731_instances.clear_selection();
        bgloop1_3330_instances.clear_selection();
        levellayer1loop2_1504_instances.clear_selection();
        gimmickverticalhalfpipe2_1825_instances.clear_selection();
        redspringleft_442_instances.clear_selection();
        pllayer02_2959_instances.clear_selection();
        fdlooplayer04_3647_instances.clear_selection();
        gimmickelevator2_1398_instances.clear_selection();
        jcloop3_2448_instances.clear_selection();
        yellowspringdown_437_instances.clear_selection();
        gimmickchainwallup_2291_instances.clear_selection();
        gimmickrotatingpipe_801_instances.clear_selection();
        breakablefloor1_1760_instances.clear_selection();
        gimmickmovingfloor2_1254_instances.clear_selection();
        gimmickelevator_2020_instances.clear_selection();
        customtile4_3802_instances.clear_selection();
        switchdoor_735_instances.clear_selection();
        customtile7_3805_instances.clear_selection();
        levelelectriccrusher_3540_instances.clear_selection();
        minibosstrapdoor_2722_instances.clear_selection();
        customtile2_3800_instances.clear_selection();
        spikeceiling_1568_instances.clear_selection();
        monitorbomb_563_instances.clear_selection();
        gimmickconveyorbeltright3_2820_instances.clear_selection();
        gimmickverticalhalfpipe3_1823_instances.clear_selection();
        sbloop2_2210_instances.clear_selection();
        tbpipeloop7_2806_instances.clear_selection();
        breakableruins_1184_instances.clear_selection();
        breakableplrock_2987_instances.clear_selection();
        sbloop4_2224_instances.clear_selection();
        tbpipeloop4_2808_instances.clear_selection();
        hazardspikesleft_560_instances.clear_selection();
        levellayer02_1238_instances.clear_selection();
        gimmickverticalhalfpipe4_1822_instances.clear_selection();
        gimmickrelicflippanel_1240_instances.clear_selection();
        playeractionvaluesb_388_instances.clear_selection();
        gimmickcrusherplatform_2306_instances.clear_selection();
        floorcandle2_4117_instances.clear_selection();
        gimmicklanternbridge3_1729_instances.clear_selection();
        fdlooplayer05_3648_instances.clear_selection();
        layer1loop2_1744_instances.clear_selection();
        levelscrollingplatform2_2663_instances.clear_selection();
        tbpipeloop5_2805_instances.clear_selection();
        layer1loop_1745_instances.clear_selection();
        gimmickconveyorbeltleft_2824_instances.clear_selection();
        objectswitchblock2_3340_instances.clear_selection();
        levellayer1loop01_1234_instances.clear_selection();
        pllayer11_2957_instances.clear_selection();
        enemymagnetizercrate_2301_instances.clear_selection();
        levelcrystalspike_2248_instances.clear_selection();
        lightstonedoor2_1586_instances.clear_selection();
        gimmickmovingpillar1_1407_instances.clear_selection();
        fdlooplayer02_3641_instances.clear_selection();
        gimmickchainwallmaskdown_2305_instances.clear_selection();
        levellayer117_1487_instances.clear_selection();
        scrollingfloor_2021_instances.clear_selection();
        monitorcrystals_324_instances.clear_selection();
        leveljccollapsingplatformpiece_2427_instances.clear_selection();
        gimmicklanternbridge8_1734_instances.clear_selection();
        levellayer0loop04_997_instances.clear_selection();
        levelscrollingplatform1_2662_instances.clear_selection();
        jcslidingplatform_2414_instances.clear_selection();
        layer1loop3_1746_instances.clear_selection();
        hazardfloortrap_2748_instances.clear_selection();
        lockeddoorbarrier_2667_instances.clear_selection();
        airlock1_3453_instances.clear_selection();
        levellayer016_996_instances.clear_selection();
        digspothole_1186_instances.clear_selection();
        levelcrusher1_772_instances.clear_selection();
        hazardspikesup2_3909_instances.clear_selection();
        gimmickrelicpanel_1178_instances.clear_selection();
        collapsingsegment1_3912_instances.clear_selection();
        corkscrewdoor_3537_instances.clear_selection();
        breakableaquabrick_743_instances.clear_selection();
        gimmickmovingpillar2_1408_instances.clear_selection();
        minibossbarrier_924_instances.clear_selection();
        customtile5_3803_instances.clear_selection();
        yellowspringleft_436_instances.clear_selection();
        jcloop4_2446_instances.clear_selection();
        gimmickteetertotter_1827_instances.clear_selection();
        levellayer015_1261_instances.clear_selection();
        monitorcrate_409_instances.clear_selection();
        redspringright_441_instances.clear_selection();
        levelhideoutplatform1_3157_instances.clear_selection();
        bossgate_1878_instances.clear_selection();
        hazardspikesright_561_instances.clear_selection();
        gimmickwaterturbine_2851_instances.clear_selection();
        monitorrings_407_instances.clear_selection();
        pushableblock2_1012_instances.clear_selection();
        objectbiglift_3574_instances.clear_selection();
        monitorinvincibility_408_instances.clear_selection();
        levellayer03_1505_instances.clear_selection();
        gimmickmovingfloor1_1253_instances.clear_selection();
        gimmickchainwallmaskup_2307_instances.clear_selection();
        levellayer002_1260_instances.clear_selection();
        customtile18_3816_instances.clear_selection();
        fdrotatingbarrier_3573_instances.clear_selection();
        objectspinningbeam_807_instances.clear_selection();
        levelfireplatform2_2739_instances.clear_selection();
        fdlooplayer12_3636_instances.clear_selection();
        playeractionvaluesa_387_instances.clear_selection();
        slimefloor_839_instances.clear_selection();
        gimmicklanternbridge6_1732_instances.clear_selection();
        gimmicklanternbridge1_1727_instances.clear_selection();
        tbpipeloop1_2803_instances.clear_selection();
        gimmicksnowspiremask_3247_instances.clear_selection();
        sbloop5_2223_instances.clear_selection();
        layer0loop4_1945_instances.clear_selection();
        levellayer101_1232_instances.clear_selection();
        customtile21_3819_instances.clear_selection();
        gimmickverticalhalfpipe1_1821_instances.clear_selection();
        levellayer001_1237_instances.clear_selection();
        levellayer115_348_instances.clear_selection();
        breakablefloor2_1761_instances.clear_selection();
        pushableblock4_2269_instances.clear_selection();
        layer0loop3_1857_instances.clear_selection();
        pllayer12_2964_instances.clear_selection();
        levellayer115_1085_instances.clear_selection();
        tbpipeloop6_2809_instances.clear_selection();
        leveljccollapsingplatform_2444_instances.clear_selection();
        gimmicklanternbridge4_1730_instances.clear_selection();
        keyboard_1940_instances.clear_selection();
        airlock4_3454_instances.clear_selection();
        tbpipeloop10_2849_instances.clear_selection();
        layer0loop_1742_instances.clear_selection();
        levelicebarrier_2456_instances.clear_selection();
        customtile26_3824_instances.clear_selection();
        customtile22_3820_instances.clear_selection();
        gimmickmovingpillar3_1409_instances.clear_selection();
        customtile13_3811_instances.clear_selection();
        lightstonedoor1_1585_instances.clear_selection();
        objectvanishingblock_3034_instances.clear_selection();
        levelthcollapsingplatformpiece_3165_instances.clear_selection();
        customtile25_3823_instances.clear_selection();
        slimeraft_843_instances.clear_selection();
        bossclawbase_1393_instances.clear_selection();
        customtile16_3814_instances.clear_selection();
        customtile1_3799_instances.clear_selection();
        jcloop2_2447_instances.clear_selection();
        redspringdown_443_instances.clear_selection();
        levellayer1loop03_1086_instances.clear_selection();
        switchplatform_2100_instances.clear_selection();
        customtile11_3809_instances.clear_selection();
        largecolumn_1861_instances.clear_selection();
        jcloop1_2445_instances.clear_selection();
        scrollingfloor2_3440_instances.clear_selection();
        bgloop2_3331_instances.clear_selection();
        hazardspikesdown_559_instances.clear_selection();
        pushableblock1_531_instances.clear_selection();
        hazardspikesright2_3910_instances.clear_selection();
        fdlooplayer11_3640_instances.clear_selection();
        pllayer01_2958_instances.clear_selection();
        levellift_2647_instances.clear_selection();
        layer0loop2_1743_instances.clear_selection();
        customtile12_3810_instances.clear_selection();
        ramp1_1869_instances.clear_selection();
        objectswitchblock1_3339_instances.clear_selection();
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        // icache destruction
        goldplatform2_1736_instances.clear_selection();
        laddertop_357_instances.clear_selection();
        goldplatform3_1737_instances.clear_selection();
        levelpistonplatform1_2717_instances.clear_selection();
        levelmovingplatform01_1404_instances.clear_selection();
        gimmickleafplatform2_2360_instances.clear_selection();
        levelglacierplatform2_3282_instances.clear_selection();
        levelglacierplatform1_3251_instances.clear_selection();
        fdplatform_3542_instances.clear_selection();
        leveltrolleyplatform_1818_instances.clear_selection();
        shipplatform1_2093_instances.clear_selection();
        yellowspringupleft_432_instances.clear_selection();
        levelfireplatform1_2646_instances.clear_selection();
        fdlasertunnelplatform_3728_instances.clear_selection();
        levelfdpushplatform_3539_instances.clear_selection();
        shipplatform3_2095_instances.clear_selection();
        levelcrankferris_3319_instances.clear_selection();
        carouselplatform_2015_instances.clear_selection();
        planeplatform_2038_instances.clear_selection();
        levellagoonplatform1_2967_instances.clear_selection();
        escalatorright_1966_instances.clear_selection();
        minibossgolempiece1_1250_instances.clear_selection();
        minibossgolempiece2_1249_instances.clear_selection();
        yellowspringup_434_instances.clear_selection();
        gimmickrisingswing_1405_instances.clear_selection();
        levelspinplatform_2718_instances.clear_selection();
        levelmovingplatform3_949_instances.clear_selection();
        gimmickdragontunnelmask2_1781_instances.clear_selection();
        redspringupright_438_instances.clear_selection();
        levelrmplatform_1506_instances.clear_selection();
        gimmickcollapsingplatformleftbrick02_667_instances.clear_selection();
        gimmickdragontunnel1_1845_instances.clear_selection();
        leveltrolleyplatform2_1819_instances.clear_selection();
        levelfloatingplatform_1032_instances.clear_selection();
        levelmovingplatform1_1965_instances.clear_selection();
        gimmickswingplatform_768_instances.clear_selection();
        levelfloatingplatform3_1412_instances.clear_selection();
        escalatorleft_1951_instances.clear_selection();
        levelmovingplatform2_940_instances.clear_selection();
        levellagoonplatform2_2980_instances.clear_selection();
        levelvalleyplatform1_939_instances.clear_selection();
        levelferriswheel2_1766_instances.clear_selection();
        gimmickbridgelog_412_instances.clear_selection();
        crystalplatform_2317_instances.clear_selection();
        levelaxelplatform3_844_instances.clear_selection();
        spinninglogmask_1004_instances.clear_selection();
        levelferriswheel1_1765_instances.clear_selection();
        gimmickrollingplatformcave_1497_instances.clear_selection();
        aquabrickplatform_744_instances.clear_selection();
        levelfloatingplatform2_1387_instances.clear_selection();
        levelferriswheel3_1767_instances.clear_selection();
        levelsbplatform1_2096_instances.clear_selection();
        airventplatform_2668_instances.clear_selection();
        levelsbplatform3_2197_instances.clear_selection();
        shipplatform2_2094_instances.clear_selection();
        levelaxelplatform2_654_instances.clear_selection();
        gimmickcrankplatformtop1_2801_instances.clear_selection();
        gimmickcrankplatformtop2_2802_instances.clear_selection();
        gimmickdownhillplatform_3427_instances.clear_selection();
        levelaxelplatform1_653_instances.clear_selection();
        active_2962_instances.clear_selection();
        levelmovingplatform1_3840_instances.clear_selection();
        waterfalllog_1013_instances.clear_selection();
        levelhandcar_1415_instances.clear_selection();
        gimmickbreakoutplatform_3037_instances.clear_selection();
        gimmickrollingplatform_1171_instances.clear_selection();
        minibossbonegolempiece5_1579_instances.clear_selection();
        bosstbplatform_2878_instances.clear_selection();
        gimmickleafplatform1_2359_instances.clear_selection();
        redspringupleft_439_instances.clear_selection();
        gimmickdragontunnelmask1_1780_instances.clear_selection();
        yellowspringupright_433_instances.clear_selection();
        gimmickflyingleafplatformmask_2462_instances.clear_selection();
        levelwaterplatform_1954_instances.clear_selection();
        levelferriswheel4_1768_instances.clear_selection();
        levelfloatingplatform_523_instances.clear_selection();
        bgplatform1_3318_instances.clear_selection();
        gimmickbowarrowplatform_2970_instances.clear_selection();
        levelcreekplatform_2424_instances.clear_selection();
        goldplatform1_1735_instances.clear_selection();
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        // icache destruction
        generaledge05_3898_instances.clear_selection();
        generaledge01_3894_instances.clear_selection();
        generaledge04_3897_instances.clear_selection();
        generaledge02_3895_instances.clear_selection();
        generaledge03_3896_instances.clear_selection();
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(crystal_456_instances))->set_visible(false);
        effectsdust01_332_instances.clear_selection();
        for (ObjectIterator it(effectsdust01_332_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectscrystalbit_323_instances.clear_selection();
        for (ObjectIterator it(effectscrystalbit_323_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        gimmickfandebris_2125_instances.clear_selection();
        for (ObjectIterator it(gimmickfandebris_2125_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        gimmickfan_2220_instances.clear_selection();
        for (ObjectIterator it(gimmickfan_2220_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibossflame_1199_instances.clear_selection();
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        gimmickflamethrower_2196_instances.clear_selection();
        for (ObjectIterator it(gimmickflamethrower_2196_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(levelsbplatform3_2197_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsgroundspark_2025_instances.clear_selection();
        for (ObjectIterator it(effectsgroundspark_2025_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        levelsbplatformflame1_2097_instances.clear_selection();
        for (ObjectIterator it(levelsbplatformflame1_2097_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        hazardfireup_2226_instances.clear_selection();
        for (ObjectIterator it(hazardfireup_2226_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        hazardfiredown_2227_instances.clear_selection();
        for (ObjectIterator it(hazardfiredown_2227_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        hazardfireright_2228_instances.clear_selection();
        for (ObjectIterator it(hazardfireright_2228_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        hazardfireleft_2229_instances.clear_selection();
        for (ObjectIterator it(hazardfireleft_2229_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        levelbackgroundplane2_865_instances.clear_selection();
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerassistcopilot_2219_instances))->start_animation();
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerassist_2028_instances))->start_animation();
        ((Active*)get_instance(bosschoppertailblade_2217_instances))->start_animation();
        ((Active*)get_instance(bosschopperblade_2218_instances))->start_animation();
        ((Active*)get_instance(bosschoppertailblade2_2214_instances))->start_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->start_animation();
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectcodecid_303_instances.clear_selection();
        for (ObjectIterator it(objectcodecid_303_instances); !it.end(); ++it) {
            ((Counter*)*it)->get_movement()->start();
        }
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        monitorbroken_330_instances.clear_selection();
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->start_animation();
        enemydronelaser_2127_instances.clear_selection();
        for (ObjectIterator it(enemydronelaser_2127_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        gimmickcannon_2199_instances.clear_selection();
        for (ObjectIterator it(gimmickcannon_2199_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bossspade_2194_instances))->start_animation();
        bossspadecard_2128_instances.clear_selection();
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyfragbomb_2049_instances.clear_selection();
        for (ObjectIterator it(enemyfragbomb_2049_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_2150_36_1_end: ;
}
void Frames::event_func_9066()
{
    // event 2165_36
    {
        if (!(group_pause_1)) goto event_2165_36_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_2165_36_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2165_36_end;
        if (!((global_values->get(4)) >= (99))) goto event_2165_36_end;
        next_frame = 80 + 0;    
    
        global_values->set(4, 0);
    }
    event_2165_36_end: ;
}
void Frames::event_func_9067()
{
    // event 2166_36
    {
        if (!(group_pause_1)) goto event_2166_36_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (4))) goto event_2166_36_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2166_36_end;
        if (!((global_values->get(4)) >= (99))) goto event_2166_36_end;
        next_frame = 39 + 0;    
    
        global_values->set(4, 0);
    }
    event_2166_36_end: ;
}
void Frames::handle_frame_37_events()
{
    test_collisions_36();
    event_func_2760();
    event_func_2764();
    event_func_2767();
    event_func_2777();
    event_func_2804();
    event_func_2805();
    event_func_2806();
    event_func_2813();
    event_func_2820();
    event_func_2821();
    event_func_2822();
    event_func_1957();
    event_func_2128();
    event_func_2859();
    event_func_2266();
    event_func_2270();
    event_func_8682();
    event_func_8732();
    event_func_8733();
    event_func_8741();
    event_func_8986();
    event_func_8987();
    event_func_8988();
    event_func_2650();
    if (!group_main_engine_1) goto group_main_engine_1_end;
    event_func_1349();
    if (!group_main_engine_global_methods_player_1) goto group_main_engine_global_methods_player_1_end;
    event_func_2728();
    event_func_2729();
    event_func_2730();
    event_func_2731();
    event_func_1354();
    event_func_1355();
    event_func_1356();
    event_func_1357();
    event_func_1358();
    event_func_1359();
    event_func_1360();
    event_func_1361();
    event_func_1362();
    event_func_1363();
    event_func_1364();
    event_func_1365();
    event_func_1366();
    event_func_1367();
    event_func_1368();
    event_func_2732();
    event_func_2733();
    event_func_2734();
    event_func_1372();
    event_func_1373();
    event_func_1374();
    event_func_1375();
    event_func_1376();
    event_func_1377();
    event_func_1378();
    event_func_1379();
    event_func_1380();
    event_func_1381();
    event_func_1382();
    event_func_1383();
    event_func_1384();
    if (!group_main_engine_global_methods_player_player_movement_1) goto group_main_engine_global_methods_player_player_movement_1_end;
    if (!group_main_engine_global_methods_player_player_movement_initial_movement_1) goto group_main_engine_global_methods_player_player_movement_initial_movement_1_end;
    event_func_1385();
    group_main_engine_global_methods_player_player_movement_initial_movement_1_end: ;
    event_func_1386();
    event_func_1387();
    event_func_1388();
    event_func_1389();
    event_func_1390();
    event_func_1391();
    event_func_1392();
    event_func_1393();
    event_func_1394();
    event_func_1395();
    event_func_1396();
    event_func_1397();
    event_func_1398();
    event_func_1399();
    event_func_1400();
    event_func_1401();
    event_func_1402();
    event_func_1403();
    event_func_1404();
    event_func_1405();
    event_func_2735();
    event_func_1407();
    event_func_1408();
    event_func_1409();
    event_func_1410();
    event_func_1411();
    event_func_1412();
    event_func_1413();
    event_func_1414();
    event_func_1415();
    event_func_1416();
    event_func_1417();
    event_func_1418();
    event_func_1419();
    event_func_1420();
    event_func_1421();
    event_func_1422();
    event_func_2736();
    group_main_engine_global_methods_player_player_movement_1_end: ;
    event_func_6053();
    event_func_1425();
    event_func_1426();
    event_func_1427();
    event_func_1428();
    event_func_1429();
    event_func_1430();
    if (!group_main_engine_global_methods_player_player_control_control_1) goto group_main_engine_global_methods_player_player_control_control_1_end;
    event_func_1431();
    event_func_1432();
    event_func_1433();
    event_func_1434();
    event_func_1435();
    event_func_1436();
    event_func_1437();
    event_func_1438();
    event_func_1439();
    event_func_1440();
    event_func_1441();
    event_func_1442();
    event_func_1443();
    event_func_1444();
    event_func_1445();
    event_func_1446();
    event_func_1447();
    event_func_1448();
    event_func_2738();
    event_func_2739();
    event_func_2740();
    event_func_2741();
    event_func_1453();
    event_func_1454();
    event_func_1455();
    event_func_1456();
    event_func_1457();
    event_func_1458();
    event_func_1459();
    event_func_1460();
    event_func_1461();
    event_func_2742();
    event_func_1463();
    event_func_1464();
    event_func_1465();
    group_main_engine_global_methods_player_player_control_control_1_end: ;
    event_func_1466();
    event_func_1467();
    event_func_1468();
    event_func_1469();
    event_func_2743();
    event_func_1471();
    event_func_2744();
    event_func_1473();
    event_func_1474();
    event_func_1475();
    event_func_1476();
    event_func_1477();
    event_func_1478();
    event_func_1479();
    event_func_1480();
    event_func_1481();
    event_func_1482();
    event_func_1483();
    event_func_2745();
    event_func_2746();
    event_func_2747();
    event_func_2748();
    event_func_1488();
    event_func_1489();
    if (!group_main_engine_global_methods_player_player_control_actions_charge_attack_1) goto group_main_engine_global_methods_player_player_control_actions_charge_attack_1_end;
    event_func_1490();
    event_func_1491();
    event_func_1492();
    event_func_1493();
    event_func_1494();
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_manage_actions_1) goto group_main_engine_global_methods_player_player_control_actions_manage_actions_1_end;
    event_func_1495();
    event_func_1496();
    event_func_1497();
    event_func_1498();
    event_func_1499();
    event_func_1500();
    event_func_1501();
    event_func_1502();
    event_func_1503();
    event_func_1504();
    event_func_1505();
    event_func_1506();
    event_func_1507();
    event_func_1508();
    event_func_1509();
    event_func_1510();
    event_func_1511();
    event_func_1512();
    event_func_1513();
    event_func_1514();
    event_func_1515();
    event_func_1516();
    event_func_1517();
    event_func_1518();
    event_func_1519();
    event_func_1520();
    event_func_1521();
    event_func_1522();
    event_func_1523();
    event_func_1524();
    event_func_1525();
    event_func_1526();
    event_func_1527();
    event_func_1528();
    event_func_1529();
    event_func_1530();
    event_func_1531();
    event_func_1532();
    event_func_1533();
    event_func_1534();
    event_func_1535();
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1_end;
    event_func_1536();
    event_func_1537();
    event_func_1538();
    event_func_1539();
    event_func_1540();
    event_func_2749();
    event_func_1542();
    event_func_1543();
    event_func_1544();
    event_func_1545();
    event_func_1546();
    event_func_1547();
    event_func_2750();
    event_func_2751();
    event_func_1550();
    event_func_1551();
    event_func_1552();
    event_func_1553();
    event_func_1554();
    event_func_1555();
    event_func_1556();
    event_func_1557();
    event_func_1558();
    event_func_1559();
    event_func_1560();
    event_func_1561();
    event_func_1562();
    event_func_1563();
    event_func_1564();
    event_func_1565();
    event_func_1566();
    event_func_1567();
    event_func_1568();
    event_func_1569();
    event_func_2752();
    event_func_2753();
    event_func_2754();
    event_func_1573();
    event_func_1574();
    event_func_1575();
    event_func_1576();
    event_func_1577();
    event_func_1578();
    event_func_1579();
    event_func_1580();
    event_func_1581();
    event_func_1582();
    event_func_1583();
    event_func_1584();
    event_func_1585();
    event_func_1586();
    event_func_1587();
    event_func_1588();
    event_func_1589();
    event_func_1590();
    event_func_1591();
    event_func_1592();
    event_func_1593();
    event_func_1594();
    event_func_1595();
    event_func_1596();
    event_func_1597();
    event_func_1598();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1_end;
    event_func_1599();
    event_func_1600();
    event_func_1601();
    event_func_1602();
    event_func_1603();
    event_func_2755();
    event_func_1605();
    event_func_1606();
    event_func_1607();
    event_func_1608();
    event_func_1609();
    event_func_1610();
    event_func_1611();
    event_func_1612();
    event_func_1613();
    event_func_1614();
    event_func_1615();
    event_func_1616();
    event_func_1617();
    event_func_1618();
    event_func_1619();
    event_func_1620();
    event_func_1621();
    event_func_1622();
    event_func_1623();
    event_func_1624();
    event_func_1625();
    event_func_1626();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1_end;
    event_func_1627();
    event_func_1628();
    event_func_1629();
    event_func_1630();
    event_func_1631();
    event_func_1632();
    event_func_1633();
    event_func_1634();
    event_func_1635();
    event_func_2756();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1_end;
    event_func_1637();
    event_func_1638();
    event_func_1639();
    event_func_1640();
    event_func_1641();
    event_func_1642();
    event_func_1643();
    event_func_2757();
    event_func_2758();
    event_func_2759();
    event_func_1648();
    event_func_1649();
    event_func_1650();
    event_func_2761();
    event_func_1652();
    event_func_1653();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1_end;
    event_func_1654();
    event_func_1655();
    event_func_1656();
    event_func_1657();
    event_func_1658();
    event_func_1659();
    event_func_1660();
    event_func_1661();
    event_func_1662();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1_end;
    event_func_1663();
    event_func_1664();
    event_func_1665();
    event_func_1666();
    event_func_1667();
    event_func_1668();
    event_func_1669();
    event_func_1670();
    event_func_1671();
    event_func_1672();
    event_func_1673();
    event_func_1674();
    event_func_1675();
    event_func_2762();
    event_func_1677();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1_end;
    event_func_2763();
    event_func_1679();
    event_func_2765();
    event_func_1682();
    event_func_1683();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1_end;
    event_func_1684();
    event_func_1685();
    event_func_1686();
    event_func_1687();
    event_func_1688();
    event_func_1689();
    event_func_1690();
    event_func_1691();
    event_func_1692();
    event_func_2766();
    event_func_1694();
    event_func_1695();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1_end;
    event_func_1696();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1_end;
    event_func_1698();
    event_func_2768();
    event_func_2769();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1_end;
    event_func_1701();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1_end;
    event_func_2770();
    event_func_1703();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1_end;
    event_func_1704();
    event_func_1705();
    event_func_2775();
    event_func_1707();
    event_func_1708();
    event_func_1709();
    event_func_1710();
    event_func_1711();
    event_func_1712();
    event_func_1713();
    event_func_1714();
    event_func_1715();
    event_func_1716();
    event_func_1717();
    event_func_1718();
    event_func_1719();
    event_func_1720();
    event_func_1721();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1_end;
    event_func_1722();
    event_func_1723();
    event_func_1724();
    event_func_1725();
    event_func_3722();
    event_func_3723();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1_end;
    event_func_1728();
    event_func_1729();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1_end;
    event_func_1730();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1_end;
    event_func_1731();
    event_func_2776();
    event_func_1734();
    event_func_1735();
    event_func_1736();
    event_func_1737();
    event_func_1738();
    event_func_1739();
    event_func_1740();
    event_func_1741();
    event_func_1742();
    event_func_1743();
    event_func_1744();
    event_func_1745();
    event_func_6054();
    event_func_6055();
    event_func_2780();
    event_func_6056();
    event_func_3727();
    event_func_1751();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end;
    event_func_1752();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1) goto group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1_end;
    event_func_1753();
    event_func_2782();
    event_func_1755();
    event_func_1756();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1758();
    event_func_1759();
    event_func_1760();
    event_func_8621();
    event_func_1762();
    event_func_1763();
    event_func_1764();
    event_func_1765();
    event_func_1766();
    event_func_1767();
    event_func_1768();
    event_func_1769();
    event_func_1770();
    event_func_1771();
    event_func_1772();
    event_func_1773();
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1) goto group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1_end;
    event_func_1774();
    event_func_2783();
    event_func_1776();
    event_func_8622();
    event_func_1778();
    event_func_2784();
    event_func_2785();
    event_func_1781();
    event_func_2786();
    event_func_2787();
    event_func_1784();
    event_func_1785();
    event_func_1786();
    event_func_1787();
    event_func_1788();
    event_func_1789();
    event_func_1790();
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1_end;
    event_func_2788();
    event_func_1792();
    event_func_2789();
    event_func_2790();
    event_func_1795();
    event_func_1796();
    event_func_1797();
    event_func_1798();
    event_func_1799();
    event_func_1800();
    event_func_2791();
    event_func_2792();
    event_func_2793();
    event_func_2794();
    event_func_2795();
    event_func_1806();
    event_func_1807();
    event_func_2796();
    event_func_1809();
    event_func_1810();
    event_func_1811();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1_end;
    event_func_2797();
    event_func_1813();
    event_func_1814();
    event_func_1815();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end;
    event_func_1816();
    event_func_2798();
    event_func_2799();
    event_func_2800();
    event_func_2801();
    event_func_2802();
    event_func_2803();
    event_func_2807();
    event_func_1827();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end;
    event_func_2808();
    event_func_2809();
    event_func_2810();
    event_func_2811();
    event_func_2812();
    event_func_2814();
    event_func_2815();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1_end;
    event_func_1836();
    event_func_2816();
    event_func_2817();
    event_func_2818();
    event_func_1840();
    event_func_1841();
    event_func_1842();
    event_func_2819();
    event_func_1844();
    event_func_1845();
    event_func_1846();
    event_func_1847();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1_end: ;
    event_func_1848();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1_end;
    event_func_1849();
    event_func_1850();
    event_func_1851();
    event_func_1852();
    event_func_1853();
    event_func_1854();
    event_func_1855();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1_end;
    event_func_1856();
    event_func_1857();
    event_func_1858();
    event_func_1859();
    event_func_1860();
    event_func_1861();
    event_func_1862();
    event_func_2823();
    event_func_1867();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1_end;
    event_func_1868();
    event_func_1869();
    event_func_1870();
    event_func_1871();
    event_func_1872();
    event_func_1873();
    event_func_1874();
    event_func_1875();
    event_func_1876();
    event_func_1877();
    event_func_1878();
    event_func_1879();
    event_func_1880();
    event_func_1881();
    event_func_1882();
    event_func_1883();
    event_func_1884();
    event_func_1885();
    event_func_1886();
    event_func_1887();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1_end;
    event_func_1888();
    event_func_1889();
    event_func_1890();
    event_func_1891();
    event_func_1892();
    event_func_1893();
    event_func_1894();
    event_func_1895();
    event_func_1896();
    event_func_1897();
    event_func_1898();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_1_end;
    event_func_1899();
    event_func_1900();
    event_func_1901();
    event_func_1902();
    event_func_1903();
    event_func_1904();
    event_func_1905();
    event_func_1906();
    event_func_1907();
    event_func_1908();
    event_func_8623();
    event_func_1910();
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1_end;
    event_func_1911();
    event_func_1912();
    event_func_1913();
    event_func_1914();
    event_func_1915();
    event_func_1916();
    event_func_1917();
    event_func_1918();
    event_func_1919();
    event_func_1920();
    event_func_1921();
    event_func_1922();
    event_func_1923();
    event_func_1924();
    event_func_1925();
    event_func_1926();
    event_func_1927();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1_end;
    event_func_1928();
    event_func_1929();
    event_func_1930();
    event_func_1931();
    event_func_1932();
    event_func_1933();
    event_func_1934();
    event_func_1935();
    event_func_1936();
    event_func_1937();
    event_func_1938();
    event_func_1939();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1_end;
    event_func_1940();
    event_func_1941();
    event_func_1942();
    event_func_1943();
    event_func_1944();
    event_func_1945();
    event_func_1946();
    event_func_1947();
    event_func_1948();
    event_func_1949();
    event_func_1950();
    event_func_1951();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1_end;
    event_func_1952();
    event_func_1953();
    event_func_1954();
    event_func_1955();
    event_func_1956();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1_end;
    event_func_1958();
    event_func_1959();
    event_func_1960();
    event_func_1961();
    event_func_1962();
    event_func_1963();
    event_func_1964();
    event_func_1965();
    event_func_1966();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1_end;
    event_func_1967();
    event_func_1968();
    event_func_1969();
    event_func_1970();
    event_func_1971();
    event_func_2824();
    event_func_1973();
    event_func_2825();
    event_func_1973();
    event_func_1975();
    event_func_1976();
    event_func_1977();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1_end;
    event_func_1978();
    event_func_1979();
    event_func_4529();
    event_func_4530();
    event_func_1980();
    event_func_1981();
    event_func_1982();
    event_func_1983();
    event_func_1984();
    event_func_1985();
    event_func_1986();
    event_func_4531();
    event_func_1987();
    event_func_4532();
    event_func_1988();
    event_func_1989();
    event_func_4533();
    event_func_1990();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1_end;
    event_func_1991();
    event_func_1992();
    event_func_1993();
    event_func_1994();
    event_func_1995();
    event_func_1996();
    event_func_2831();
    event_func_1997();
    event_func_2832();
    event_func_2833();
    event_func_2000();
    event_func_2001();
    event_func_2002();
    event_func_2003();
    event_func_2004();
    event_func_2005();
    event_func_2006();
    event_func_2007();
    event_func_2008();
    event_func_2009();
    event_func_2010();
    event_func_2011();
    event_func_2012();
    event_func_2013();
    event_func_2014();
    event_func_2015();
    event_func_2016();
    event_func_2017();
    event_func_2018();
    event_func_2019();
    event_func_2020();
    event_func_2021();
    event_func_2022();
    event_func_2023();
    event_func_2834();
    event_func_2025();
    event_func_2026();
    event_func_2027();
    event_func_2028();
    event_func_2029();
    event_func_2030();
    event_func_2031();
    event_func_2032();
    event_func_2033();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1_end;
    event_func_2034();
    event_func_2035();
    event_func_2036();
    event_func_2037();
    event_func_2038();
    event_func_2835();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1_end;
    event_func_2039();
    event_func_2040();
    event_func_2041();
    event_func_2836();
    event_func_2043();
    event_func_2837();
    event_func_2838();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1_end;
    event_func_2046();
    event_func_2047();
    event_func_2048();
    event_func_2049();
    event_func_2839();
    event_func_2050();
    event_func_2051();
    event_func_2052();
    event_func_2053();
    event_func_2054();
    event_func_2055();
    event_func_2056();
    event_func_2057();
    event_func_2058();
    event_func_2059();
    event_func_2060();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1_end;
    event_func_2061();
    event_func_2062();
    event_func_2063();
    event_func_2064();
    event_func_2065();
    event_func_2066();
    event_func_2067();
    event_func_2068();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1_end;
    event_func_2069();
    event_func_2070();
    event_func_2071();
    event_func_2072();
    event_func_2073();
    event_func_2074();
    event_func_2075();
    event_func_2076();
    event_func_2077();
    event_func_2078();
    event_func_2079();
    event_func_2080();
    event_func_2081();
    event_func_2082();
    event_func_2083();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1_end;
    event_func_2084();
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1_end;
    event_func_2085();
    event_func_2086();
    event_func_2087();
    event_func_2088();
    event_func_2089();
    event_func_2090();
    event_func_2091();
    event_func_2092();
    event_func_2093();
    event_func_2094();
    event_func_2095();
    event_func_2840();
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1_end: ;
    event_func_2841();
    event_func_2098();
    event_func_2099();
    event_func_2100();
    event_func_2101();
    event_func_2102();
    event_func_2103();
    event_func_2104();
    event_func_2105();
    event_func_2106();
    event_func_2107();
    event_func_2108();
    event_func_2109();
    event_func_2110();
    event_func_2111();
    event_func_2112();
    event_func_2113();
    event_func_2114();
    event_func_2115();
    event_func_2116();
    event_func_2117();
    event_func_2118();
    event_func_2119();
    event_func_2120();
    event_func_2121();
    event_func_2122();
    event_func_2123();
    event_func_2124();
    event_func_2125();
    event_func_2126();
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1_end;
    event_func_2127();
    event_func_2129();
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1) goto group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1_end;
    event_func_2130();
    event_func_2131();
    event_func_2132();
    event_func_2133();
    event_func_2134();
    event_func_2135();
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_check_for_being_hurt_1) goto group_main_engine_global_methods_player_player_control_check_for_being_hurt_1_end;
    event_func_2136();
    event_func_2137();
    event_func_2138();
    event_func_2139();
    event_func_2140();
    event_func_2842();
    event_func_2142();
    event_func_2143();
    event_func_1301();
    event_func_2144();
    event_func_1302();
    event_func_2145();
    event_func_2146();
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1_end: ;
    event_func_2698();
    event_func_2147();
    event_func_2148();
    event_func_2843();
    event_func_2844();
    event_func_2151();
    event_func_2845();
    event_func_2846();
    event_func_2847();
    event_func_2848();
    event_func_2156();
    event_func_2849();
    event_func_2850();
    event_func_2851();
    event_func_2852();
    event_func_2853();
    event_func_2854();
    event_func_2855();
    event_func_2856();
    event_func_2857();
    event_func_2858();
    event_func_2860();
    event_func_2861();
    event_func_2862();
    event_func_2863();
    event_func_2864();
    event_func_2865();
    event_func_2866();
    event_func_2867();
    event_func_2868();
    event_func_2869();
    event_func_2870();
    event_func_2871();
    event_func_2872();
    event_func_2873();
    event_func_2874();
    event_func_2875();
    event_func_2876();
    event_func_2877();
    event_func_2878();
    event_func_2879();
    event_func_2880();
    event_func_2881();
    event_func_2882();
    event_func_2883();
    event_func_2884();
    event_func_2885();
    event_func_2886();
    event_func_2195();
    event_func_2196();
    event_func_2197();
    event_func_2198();
    event_func_2199();
    event_func_2200();
    event_func_2201();
    event_func_2202();
    event_func_2203();
    event_func_2204();
    event_func_2205();
    event_func_2206();
    event_func_2207();
    event_func_2208();
    event_func_2209();
    event_func_2210();
    event_func_2211();
    event_func_2212();
    event_func_2213();
    event_func_2887();
    event_func_2888();
    event_func_2889();
    event_func_2890();
    event_func_2891();
    event_func_2892();
    event_func_2893();
    event_func_2221();
    event_func_2894();
    event_func_2895();
    event_func_2896();
    event_func_2225();
    event_func_2226();
    event_func_2227();
    event_func_2228();
    event_func_2229();
    event_func_2230();
    event_func_2231();
    event_func_2232();
    event_func_2897();
    event_func_2898();
    event_func_2899();
    event_func_2900();
    event_func_2237();
    event_func_2901();
    event_func_2902();
    event_func_2903();
    event_func_2904();
    event_func_2905();
    event_func_2906();
    event_func_2907();
    event_func_2908();
    group_main_engine_global_methods_player_1_end: ;
    event_func_2246();
    event_func_2247();
    event_func_2248();
    event_func_2249();
    event_func_2250();
    event_func_2251();
    event_func_2252();
    event_func_2253();
    event_func_2254();
    event_func_2255();
    event_func_2256();
    event_func_2257();
    event_func_2258();
    event_func_2259();
    event_func_2260();
    event_func_2261();
    event_func_2262();
    event_func_2263();
    event_func_2264();
    event_func_2265();
    event_func_2267();
    event_func_2268();
    event_func_2269();
    event_func_2271();
    event_func_2272();
    event_func_2273();
    event_func_2274();
    event_func_2275();
    event_func_2276();
    event_func_2277();
    event_func_2278();
    event_func_2279();
    event_func_2280();
    event_func_2281();
    event_func_2282();
    event_func_2283();
    event_func_2284();
    event_func_2285();
    event_func_2286();
    event_func_2287();
    event_func_2288();
    event_func_2289();
    event_func_2290();
    event_func_2291();
    event_func_2292();
    event_func_2293();
    event_func_2294();
    event_func_2295();
    event_func_2296();
    event_func_2297();
    event_func_2298();
    event_func_2299();
    event_func_2300();
    event_func_2301();
    event_func_2302();
    event_func_2303();
    event_func_2304();
    event_func_2305();
    event_func_2306();
    event_func_2307();
    event_func_2308();
    event_func_2298();
    event_func_2309();
    event_func_2300();
    event_func_2310();
    event_func_2311();
    event_func_2312();
    event_func_2912();
    event_func_2314();
    event_func_2913();
    event_func_2914();
    event_func_2317();
    event_func_2318();
    event_func_2319();
    event_func_2915();
    event_func_2916();
    event_func_2917();
    event_func_2918();
    event_func_2919();
    event_func_2920();
    event_func_2921();
    event_func_2922();
    event_func_2923();
    if (!group_main_engine_global_methods_common_objects_collectables_tao_stone_1) goto group_main_engine_global_methods_common_objects_collectables_tao_stone_1_end;
    event_func_2320();
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1_end: ;
    event_func_2931();
    event_func_2322();
    event_func_2323();
    event_func_2324();
    event_func_2325();
    event_func_2325();
    event_func_2326();
    event_func_2327();
    event_func_2328();
    event_func_2329();
    event_func_2330();
    event_func_2331();
    event_func_2332();
    event_func_2333();
    event_func_2334();
    event_func_2335();
    event_func_2336();
    event_func_2337();
    event_func_2338();
    event_func_2339();
    event_func_2340();
    event_func_2341();
    event_func_2342();
    event_func_2343();
    event_func_2344();
    event_func_2345();
    event_func_2346();
    event_func_2347();
    event_func_2348();
    event_func_2349();
    event_func_2350();
    event_func_2351();
    event_func_2352();
    event_func_2353();
    event_func_2354();
    event_func_2355();
    event_func_2356();
    event_func_2357();
    event_func_2358();
    event_func_2359();
    event_func_2360();
    event_func_2361();
    event_func_2362();
    event_func_2363();
    event_func_2364();
    event_func_2365();
    event_func_2366();
    event_func_2367();
    event_func_2368();
    event_func_2369();
    event_func_2370();
    event_func_2371();
    event_func_2372();
    event_func_2373();
    event_func_2374();
    event_func_2375();
    event_func_2376();
    event_func_2377();
    event_func_2378();
    event_func_2379();
    event_func_2380();
    event_func_2380();
    event_func_2381();
    event_func_2382();
    event_func_2383();
    event_func_2384();
    event_func_2385();
    event_func_2932();
    event_func_3729();
    event_func_2933();
    event_func_2934();
    event_func_2935();
    event_func_2936();
    event_func_2937();
    event_func_2938();
    event_func_2386();
    event_func_2387();
    event_func_2388();
    event_func_2389();
    event_func_2390();
    event_func_2391();
    event_func_2392();
    event_func_2393();
    event_func_2394();
    event_func_2395();
    if (!group_main_engine_global_methods_common_objects_shields_1_wood_shield_1) goto group_main_engine_global_methods_common_objects_shields_1_wood_shield_1_end;
    event_func_2396();
    event_func_2939();
    event_func_2398();
    event_func_2399();
    event_func_2400();
    event_func_2401();
    event_func_2402();
    event_func_2403();
    event_func_2404();
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_2_flame_shield_1) goto group_main_engine_global_methods_common_objects_shields_2_flame_shield_1_end;
    event_func_2405();
    event_func_2940();
    event_func_2941();
    event_func_2408();
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1) goto group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1_end;
    event_func_2409();
    event_func_2942();
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_4_water_shield_1) goto group_main_engine_global_methods_common_objects_shields_4_water_shield_1_end;
    event_func_2411();
    event_func_2943();
    event_func_2413();
    event_func_2414();
    event_func_2415();
    event_func_2416();
    event_func_2944();
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_5_earth_shield_1) goto group_main_engine_global_methods_common_objects_shields_5_earth_shield_1_end;
    event_func_2418();
    event_func_2945();
    event_func_2420();
    event_func_2421();
    event_func_2422();
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1_end: ;
    event_func_2946();
    event_func_2947();
    event_func_2948();
    event_func_2949();
    event_func_3730();
    event_func_6057();
    event_func_2425();
    event_func_3732();
    event_func_3733();
    event_func_2428();
    event_func_2429();
    event_func_2430();
    event_func_2951();
    event_func_2952();
    event_func_2433();
    event_func_2953();
    event_func_2435();
    event_func_2954();
    event_func_2955();
    event_func_2438();
    event_func_2439();
    event_func_2440();
    event_func_2441();
    event_func_2442();
    event_func_2443();
    event_func_2444();
    event_func_2445();
    event_func_2446();
    event_func_2447();
    event_func_2448();
    event_func_2449();
    event_func_2450();
    event_func_2451();
    event_func_2452();
    event_func_2453();
    event_func_2454();
    event_func_2455();
    event_func_2456();
    event_func_2457();
    event_func_2458();
    event_func_2459();
    event_func_2460();
    event_func_2461();
    event_func_2462();
    event_func_2463();
    event_func_2464();
    event_func_2465();
    event_func_2466();
    event_func_2467();
    event_func_2468();
    event_func_2469();
    event_func_2470();
    event_func_2471();
    event_func_2472();
    event_func_2473();
    event_func_2474();
    event_func_6058();
    event_func_2476();
    event_func_2477();
    event_func_2478();
    event_func_2479();
    event_func_2480();
    event_func_2481();
    event_func_2482();
    event_func_2483();
    event_func_2484();
    event_func_2485();
    event_func_2957();
    event_func_2958();
    event_func_2959();
    event_func_4534();
    event_func_4535();
    event_func_2962();
    event_func_4536();
    event_func_4537();
    event_func_4538();
    event_func_4539();
    event_func_4540();
    event_func_8624();
    event_func_4914();
    event_func_8625();
    event_func_2970();
    event_func_2971();
    event_func_2972();
    event_func_2973();
    event_func_2974();
    event_func_2975();
    event_func_2976();
    event_func_2977();
    event_func_2978();
    event_func_2979();
    event_func_6066();
    event_func_2980();
    event_func_4355();
    event_func_4356();
    if (!group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1) goto group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end;
    event_func_3737();
    event_func_6067();
    event_func_6068();
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end: ;
    event_func_8626();
    event_func_8627();
    event_func_8628();
    event_func_8629();
    event_func_8630();
    event_func_8631();
    event_func_8632();
    event_func_8633();
    event_func_8634();
    event_func_8635();
    event_func_8636();
    event_func_8637();
    event_func_8638();
    event_func_8639();
    event_func_8640();
    event_func_8641();
    event_func_8642();
    event_func_8643();
    event_func_8644();
    event_func_8645();
    event_func_5505();
    event_func_8646();
    event_func_8647();
    event_func_8648();
    event_func_8649();
    event_func_8650();
    event_func_8651();
    event_func_8652();
    event_func_8653();
    event_func_8654();
    event_func_8655();
    event_func_8235();
    event_func_8236();
    event_func_8237();
    event_func_8238();
    event_func_8239();
    event_func_8240();
    event_func_8656();
    event_func_8657();
    event_func_8658();
    event_func_8659();
    event_func_8660();
    event_func_8661();
    event_func_8662();
    event_func_8663();
    event_func_8664();
    event_func_8665();
    event_func_8666();
    event_func_8667();
    event_func_8668();
    event_func_8669();
    event_func_6688();
    event_func_8670();
    event_func_8671();
    event_func_8672();
    event_func_8673();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_8674();
    event_func_8675();
    event_func_8676();
    event_func_8677();
    event_func_8678();
    event_func_8679();
    event_func_8680();
    event_func_8681();
    event_func_8683();
    event_func_8684();
    event_func_8685();
    event_func_8686();
    event_func_8687();
    event_func_8688();
    event_func_8689();
    event_func_8690();
    event_func_8691();
    event_func_8692();
    event_func_8693();
    event_func_8694();
    event_func_8695();
    event_func_8696();
    event_func_8697();
    event_func_8698();
    event_func_8699();
    event_func_8700();
    event_func_8701();
    event_func_8702();
    event_func_8703();
    event_func_8704();
    event_func_8705();
    event_func_8706();
    event_func_8707();
    event_func_8708();
    event_func_8709();
    event_func_8710();
    event_func_8711();
    event_func_8712();
    event_func_8713();
    event_func_8714();
    event_func_8715();
    event_func_8716();
    event_func_8717();
    event_func_8718();
    event_func_8719();
    event_func_8720();
    event_func_8721();
    event_func_8722();
    event_func_8723();
    event_func_8724();
    event_func_8725();
    event_func_8726();
    event_func_8727();
    event_func_8728();
    event_func_8729();
    event_func_8730();
    event_func_8731();
    event_func_8734();
    event_func_8735();
    event_func_8736();
    event_func_8737();
    event_func_8738();
    event_func_8739();
    event_func_8740();
    event_func_8742();
    event_func_8743();
    event_func_8744();
    event_func_8745();
    event_func_8746();
    event_func_8747();
    event_func_8748();
    event_func_8749();
    event_func_8750();
    event_func_8751();
    event_func_8752();
    event_func_8753();
    event_func_8754();
    event_func_8755();
    event_func_8756();
    event_func_8757();
    event_func_8758();
    event_func_8759();
    event_func_8760();
    event_func_8761();
    event_func_8762();
    event_func_8763();
    event_func_8764();
    event_func_8765();
    event_func_8766();
    event_func_8767();
    event_func_8768();
    event_func_8769();
    event_func_8770();
    event_func_2996();
    event_func_8771();
    event_func_8772();
    event_func_8773();
    if (!group_main_engine_level_specific_methods_play_bgm_1) goto group_main_engine_level_specific_methods_play_bgm_1_end;
    event_func_8774();
    group_main_engine_level_specific_methods_play_bgm_1_end: ;
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_fly_in_1) goto group_main_engine_level_specific_methods_cutscenes_fly_in_1_end;
    event_func_8775();
    event_func_8776();
    event_func_8777();
    event_func_8778();
    event_func_8779();
    event_func_8780();
    event_func_8781();
    event_func_8782();
    event_func_8783();
    event_func_8784();
    event_func_8785();
    group_main_engine_level_specific_methods_cutscenes_fly_in_1_end: ;
    event_func_8786();
    if (!group_main_engine_level_specific_methods_cutscenes_spade_encounter_1) goto group_main_engine_level_specific_methods_cutscenes_spade_encounter_1_end;
    event_func_8787();
    event_func_8788();
    event_func_8789();
    event_func_8790();
    event_func_8791();
    event_func_8792();
    event_func_8793();
    event_func_8794();
    event_func_8795();
    event_func_8796();
    event_func_8797();
    event_func_8798();
    event_func_8799();
    event_func_8800();
    event_func_8801();
    event_func_8802();
    event_func_8803();
    event_func_8804();
    if (!group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_voice_acting_1) goto group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_voice_acting_1_end;
    event_func_8805();
    event_func_8806();
    event_func_8807();
    event_func_8808();
    event_func_8809();
    event_func_8810();
    event_func_8811();
    event_func_8812();
    event_func_8813();
    event_func_8814();
    event_func_8815();
    event_func_8816();
    event_func_8817();
    event_func_8818();
    event_func_8819();
    group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_voice_acting_1_end: ;
    event_func_8820();
    if (!group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_blips_1) goto group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_blips_1_end;
    event_func_8821();
    event_func_8822();
    event_func_8823();
    event_func_8824();
    event_func_8825();
    event_func_8826();
    event_func_8827();
    event_func_8828();
    event_func_8829();
    event_func_8830();
    event_func_8831();
    event_func_8832();
    event_func_8833();
    event_func_8834();
    event_func_8835();
    group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_blips_1_end: ;
    event_func_8836();
    event_func_8837();
    event_func_8838();
    event_func_8839();
    event_func_8840();
    event_func_8841();
    event_func_8842();
    event_func_8843();
    event_func_8844();
    event_func_8845();
    event_func_8846();
    group_main_engine_level_specific_methods_cutscenes_spade_encounter_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_fall_from_sky_1) goto group_main_engine_level_specific_methods_cutscenes_fall_from_sky_1_end;
    event_func_8847();
    event_func_8848();
    event_func_8849();
    event_func_8850();
    event_func_8851();
    event_func_8852();
    event_func_8853();
    event_func_8854();
    event_func_8855();
    event_func_8856();
    event_func_8857();
    event_func_8858();
    event_func_8859();
    event_func_8860();
    event_func_8861();
    event_func_8862();
    group_main_engine_level_specific_methods_cutscenes_fall_from_sky_1_end: ;
    event_func_8545();
    event_func_8863();
    event_func_8864();
    event_func_8865();
    event_func_8866();
    event_func_8867();
    event_func_8868();
    event_func_8869();
    if (!group_main_engine_level_specific_methods_bosses_miniboss_chopper_1) goto group_main_engine_level_specific_methods_bosses_miniboss_chopper_1_end;
    event_func_8870();
    event_func_8871();
    event_func_8872();
    event_func_8873();
    event_func_8874();
    event_func_8875();
    event_func_8876();
    event_func_8877();
    event_func_8878();
    event_func_8879();
    event_func_8880();
    event_func_8881();
    event_func_8882();
    event_func_8883();
    event_func_8884();
    event_func_8885();
    event_func_8886();
    event_func_8887();
    event_func_8888();
    event_func_8889();
    event_func_8890();
    event_func_8891();
    event_func_8892();
    event_func_8893();
    event_func_8894();
    event_func_8895();
    event_func_8896();
    event_func_8897();
    event_func_8898();
    event_func_8899();
    event_func_8900();
    event_func_8901();
    event_func_8902();
    event_func_8903();
    event_func_8904();
    event_func_8905();
    event_func_8906();
    event_func_8907();
    event_func_8908();
    event_func_8909();
    event_func_8910();
    event_func_8911();
    event_func_8912();
    group_main_engine_level_specific_methods_bosses_miniboss_chopper_1_end: ;
    event_func_8913();
    if (!group_main_engine_level_specific_methods_bosses_boss_spade_1) goto group_main_engine_level_specific_methods_bosses_boss_spade_1_end;
    event_func_8914();
    event_func_8915();
    event_func_8916();
    event_func_8917();
    event_func_8918();
    event_func_8919();
    event_func_8920();
    event_func_8921();
    event_func_8922();
    event_func_8923();
    event_func_8924();
    event_func_8925();
    event_func_8926();
    event_func_8927();
    event_func_8928();
    if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_on_chopper_1) goto group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_on_chopper_1_end;
    event_func_8929();
    event_func_8930();
    event_func_8931();
    event_func_8932();
    event_func_8933();
    event_func_8934();
    event_func_8935();
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_on_chopper_1_end: ;
    event_func_8936();
    if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1) goto group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1_end;
    event_func_8937();
    event_func_8938();
    event_func_8939();
    event_func_8940();
    event_func_8941();
    event_func_8942();
    event_func_8943();
    event_func_8944();
    event_func_8945();
    event_func_8946();
    event_func_8947();
    event_func_8948();
    event_func_8949();
    event_func_8950();
    event_func_8951();
    event_func_8952();
    event_func_8953();
    event_func_8954();
    event_func_8955();
    event_func_8956();
    event_func_8957();
    event_func_8958();
    event_func_8959();
    event_func_8960();
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1_end: ;
    event_func_8961();
    if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_punch_combo_1) goto group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_punch_combo_1_end;
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_punch_combo_1_end: ;
    event_func_8962();
    if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_2_jump_1) goto group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_2_jump_1_end;
    event_func_8963();
    event_func_8964();
    event_func_8965();
    event_func_8966();
    event_func_8967();
    event_func_8968();
    event_func_8969();
    event_func_8970();
    event_func_8971();
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_2_jump_1_end: ;
    event_func_8972();
    if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_3_flash_step_1) goto group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_3_flash_step_1_end;
    event_func_8973();
    event_func_8974();
    event_func_8975();
    event_func_8976();
    event_func_8977();
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_3_flash_step_1_end: ;
    event_func_8978();
    if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1) goto group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1_end;
    event_func_8979();
    event_func_8980();
    event_func_8981();
    event_func_8982();
    event_func_8983();
    event_func_8984();
    event_func_8985();
    event_func_8989();
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1_end: ;
    event_func_8990();
    if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_5_dual_crash_1) goto group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_5_dual_crash_1_end;
    event_func_8991();
    event_func_8992();
    event_func_8993();
    event_func_8994();
    event_func_8995();
    event_func_8996();
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_5_dual_crash_1_end: ;
    event_func_8997();
    if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_6_7_flinch_1) goto group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_6_7_flinch_1_end;
    event_func_8998();
    event_func_8999();
    event_func_9000();
    event_func_9001();
    event_func_9002();
    event_func_9003();
    event_func_9004();
    event_func_9005();
    event_func_9006();
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_6_7_flinch_1_end: ;
    event_func_9007();
    if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_9_chopper_flee_1) goto group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_9_chopper_flee_1_end;
    event_func_9008();
    event_func_9009();
    event_func_9010();
    event_func_9011();
    event_func_9012();
    event_func_9013();
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_9_chopper_flee_1_end: ;
    event_func_9014();
    event_func_9015();
    event_func_9016();
    if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_spade_hit_1) goto group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_spade_hit_1_end;
    event_func_9017();
    event_func_9018();
    event_func_9019();
    event_func_9020();
    event_func_9021();
    event_func_9022();
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_spade_hit_1_end: ;
    event_func_9023();
    event_func_9024();
    event_func_9025();
    event_func_9026();
    group_main_engine_level_specific_methods_bosses_boss_spade_1_end: ;
    event_func_9027();
    event_func_9028();
    event_func_9029();
    event_func_9030();
    event_func_9031();
    event_func_9032();
    event_func_9033();
    event_func_9034();
    event_func_9035();
    event_func_9036();
    event_func_9037();
    event_func_9038();
    event_func_9039();
    event_func_9040();
    event_func_9041();
    event_func_9042();
    event_func_9043();
    event_func_9044();
    event_func_9045();
    event_func_9046();
    event_func_9047();
    event_func_9048();
    event_func_9049();
    event_func_9050();
    event_func_8067();
    event_func_9051();
    event_func_4840();
    event_func_4841();
    event_func_9052();
    event_func_9053();
    event_func_9054();
    event_func_9055();
    event_func_9056();
    event_func_9057();
    event_func_9058();
    event_func_9059();
    event_func_9060();
    event_func_9061();
    event_func_2519();
    event_func_3234();
    event_func_2521();
    event_func_2522();
    event_func_2523();
    event_func_2524();
    event_func_2525();
    event_func_2526();
    event_func_2527();
    event_func_3235();
    event_func_3236();
    event_func_3237();
    event_func_3238();
    event_func_3239();
    event_func_2533();
    event_func_2534();
    event_func_2535();
    event_func_2536();
    event_func_2537();
    event_func_2538();
    event_func_2539();
    event_func_2540();
    event_func_2541();
    event_func_2542();
    event_func_2543();
    event_func_2544();
    event_func_2545();
    event_func_2546();
    event_func_2547();
    event_func_2548();
    event_func_2549();
    event_func_2550();
    event_func_2551();
    event_func_2552();
    event_func_2553();
    event_func_2554();
    event_func_2555();
    event_func_2556();
    event_func_2557();
    event_func_2558();
    event_func_2559();
    event_func_2560();
    event_func_2561();
    event_func_2562();
    event_func_2563();
    event_func_2564();
    event_func_2565();
    event_func_2566();
    event_func_2567();
    event_func_2568();
    event_func_2569();
    event_func_2570();
    event_func_2571();
    event_func_2572();
    event_func_2573();
    event_func_2574();
    event_func_2605();
    event_func_2606();
    event_func_2607();
    event_func_2608();
    event_func_2609();
    event_func_2610();
    event_func_2611();
    event_func_2612();
    event_func_2613();
    event_func_3240();
    event_func_3241();
    event_func_2615();
    event_func_2616();
    event_func_2617();
    event_func_2618();
    event_func_2620();
    event_func_2621();
    event_func_2622();
    event_func_2623();
    event_func_2624();
    event_func_3912();
    event_func_3913();
    event_func_3914();
    event_func_3915();
    event_func_3916();
    event_func_3917();
    event_func_3918();
    event_func_3919();
    event_func_3920();
    event_func_3921();
    event_func_3922();
    event_func_3923();
    event_func_3924();
    event_func_3925();
    event_func_3926();
    event_func_3927();
    event_func_3928();
    event_func_3929();
    event_func_3930();
    event_func_3931();
    event_func_3932();
    event_func_3933();
    event_func_3934();
    event_func_3935();
    event_func_3936();
    event_func_3937();
    event_func_3938();
    event_func_3939();
    event_func_3940();
    event_func_3941();
    if (!group_main_engine_interface_and_post_processing_methods_timer_1) goto group_main_engine_interface_and_post_processing_methods_timer_1_end;
    event_func_3956();
    group_main_engine_interface_and_post_processing_methods_timer_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_titlecard_1) goto group_main_engine_interface_and_post_processing_methods_titlecard_1_end;
    event_func_3959();
    event_func_3960();
    event_func_3961();
    event_func_3962();
    event_func_3963();
    event_func_3964();
    event_func_3965();
    group_main_engine_interface_and_post_processing_methods_titlecard_1_end: ;
    event_func_2634();
    event_func_2635();
    event_func_2636();
    event_func_2637();
    event_func_2638();
    event_func_2639();
    event_func_2640();
    event_func_2641();
    event_func_3246();
    event_func_8558();
    event_func_3248();
    event_func_9062();
    event_func_9063();
    event_func_4492();
    event_func_4493();
    event_func_4494();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_9064();
    event_func_9065();
    event_func_2644();
    event_func_3968();
    event_func_3969();
    event_func_3970();
    event_func_3971();
    event_func_3972();
    event_func_3973();
    event_func_3974();
    event_func_3975();
    event_func_3976();
    event_func_8561();
    event_func_8562();
    event_func_8563();
    event_func_9066();
    event_func_9067();
    group_pause_1_end: ;
    event_func_145();
    event_func_146();
    event_func_147();
    event_func_148();
    event_func_149();
    event_func_150();
    if (!group_pc_controls_input_management_record_input_1) goto group_pc_controls_input_management_record_input_1_end;
    event_func_151();
    if (!group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1) goto group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1_end;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1_end: ;
    if (!group_pc_controls_input_management_record_input_record_input_controller_1) goto group_pc_controls_input_management_record_input_record_input_controller_1_end;
    group_pc_controls_input_management_record_input_record_input_controller_1_end: ;
    event_func_152();
    group_pc_controls_input_management_record_input_1_end: ;
    event_func_153();
    event_func_154();
    event_func_155();
    event_func_156();
    event_func_157();
    event_func_158();
    event_func_159();
    event_func_160();
    event_func_161();
    event_func_162();
    event_func_163();
    event_func_164();
    event_func_165();
    event_func_166();
    event_func_167();
    event_func_168();
    event_func_169();
    event_func_170();
    event_func_171();
    event_func_172();
    event_func_173();
    event_func_174();
    event_func_175();
    event_func_176();
    event_func_177();
    event_func_178();
    event_func_179();
    event_func_180();
    event_func_181();
    event_func_182();
    event_func_183();
    event_func_184();
    event_func_185();
    event_func_186();
    event_func_187();
    event_func_188();
    event_func_189();
    event_func_190();
    event_func_191();
    event_func_192();
    event_func_193();
    event_func_194();
    event_func_195();
    event_func_196();
    event_func_197();
    event_func_198();
    event_func_199();
    event_func_200();
    event_func_201();
    if (!group_mac_controls_1) goto group_mac_controls_1_end;
    event_func_202();
    event_func_203();
    event_func_204();
    event_func_205();
    event_func_206();
    event_func_207();
    event_func_208();
    event_func_209();
    event_func_210();
    event_func_211();
    event_func_212();
    event_func_213();
    event_func_214();
    event_func_215();
    event_func_216();
    event_func_217();
    event_func_218();
    event_func_219();
    event_func_220();
    event_func_221();
    group_mac_controls_1_end: ;
    event_func_947();
    event_func_948();
    event_func_949();
    event_func_950();
    event_func_951();
    event_func_222();
    if (!group_sound_events_lilac_1) goto group_sound_events_lilac_1_end;
    group_sound_events_lilac_1_end: ;
    if (!group_sound_events_spade_1) goto group_sound_events_spade_1_end;
    group_sound_events_spade_1_end: ;
    if (!group_sound_events_carol_1) goto group_sound_events_carol_1_end;
    group_sound_events_carol_1_end: ;
    if (!group_sound_events_milla_1) goto group_sound_events_milla_1_end;
    group_sound_events_milla_1_end: ;
    if (!group_sound_events_torque_1) goto group_sound_events_torque_1_end;
    group_sound_events_torque_1_end: ;
    if (!group_debug_mode_1) goto group_debug_mode_1_end;
    event_func_223();
    event_func_3261();
    if (!group_debug_mode_debugging_1) goto group_debug_mode_debugging_1_end;
    event_func_3262();
    event_func_648();
    event_func_649();
    event_func_650();
    event_func_651();
    event_func_225();
    event_func_952();
    event_func_953();
    event_func_954();
    event_func_652();
    event_func_3263();
    group_debug_mode_debugging_1_end: ;
    group_debug_mode_1_end: ;
    event_func_226();
    event_func_227();
    event_func_228();
    event_func_229();
    event_func_2653();
    event_func_2619();
}
void Frames::handle_frame_37_pre_events()
{
}
void Frames::event_func_9068()
{
    // event 3_36
    {
        if (!(group_main_engine_1)) goto event_3_36_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 2000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 41);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 18);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
    }
    event_3_36_end: ;
}
void Frames::event_func_9069()
{
    // event 20_36
    {
        if (!(group_main_engine_1)) goto event_20_36_end;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(3, 0.99);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(4, 0.99);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(3, 0.97);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(4, 0.97);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(3, 0.95);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(4, 0.95);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(3, 0.98);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(4, 0.98);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(6, -0.05);
        ((SystemBox*)get_instance(levelparallaxpiece4_469_instances))->alterables->values.set(3, 0.96);
        ((SystemBox*)get_instance(levelparallaxpiece4_469_instances))->alterables->values.set(4, 0.96);
        ((SystemBox*)get_instance(levelparallaxpiece4_469_instances))->alterables->values.set(6, -0.2);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(3, 0.7);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(4, 0.97);
        levelparallaxpiece6_511_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece6_511_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(3, 0.5);
            ((SystemBox*)*it)->alterables->values.set(4, 0.9);
        }
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(6, -0.01);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(6, -0.1);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(6, -0.4);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(6, -3);
        for (ObjectIterator it(levelparallaxpiece6_511_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(6, -6);
        }
        levelparallaxpiece7_764_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece7_764_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(3, 0.6);
            ((SystemBox*)*it)->alterables->values.set(4, 0.94);
            ((SystemBox*)*it)->alterables->values.set(6, -4.5);
        }
    }
    event_20_36_end: ;
}
void Frames::event_func_9070()
{
    // event 1444_36
    {
        if (!(group_main_engine_1)) goto event_1444_36_end;
        hazardfireup_2226_instances.clear_selection();
        spread_value(hazardfireup_2226_instances, 0, 0);
        for (ObjectIterator it(hazardfireup_2226_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)*20);
        }
        hazardfiredown_2227_instances.clear_selection();
        spread_value(hazardfiredown_2227_instances, 0, 0);
        for (ObjectIterator it(hazardfiredown_2227_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(hazardfireup_2226_instances, it.current_index, default_active_instance))->alterables->values.get(0)*20);
        }
        hazardfireright_2228_instances.clear_selection();
        spread_value(hazardfireright_2228_instances, 0, 0);
        for (ObjectIterator it(hazardfireright_2228_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(hazardfireup_2226_instances, it.current_index, default_active_instance))->alterables->values.get(0)*20);
        }
        hazardfireleft_2229_instances.clear_selection();
        spread_value(hazardfireleft_2229_instances, 0, 0);
        for (ObjectIterator it(hazardfireleft_2229_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(hazardfireup_2226_instances, it.current_index, default_active_instance))->alterables->values.get(0)*20);
        }
    }
    event_1444_36_end: ;
}
void Frames::event_func_9071()
{
    // event 1464_36
    {
        if (!(group_main_engine_1)) goto event_1464_36_end;
        levelsbplatform3_2197_instances.clear_selection();
        spread_value(levelsbplatform3_2197_instances, 0, 0);
        for (ObjectIterator it(levelsbplatform3_2197_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)*20);
        }
        levelsbplatform1_2096_instances.clear_selection();
        spread_value(levelsbplatform1_2096_instances, 4, 0);
        for (ObjectIterator it(levelsbplatform1_2096_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 90+((Active*)*it)->alterables->values.get(4)*180);
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)*180);
        }
    }
    event_1464_36_end: ;
}
void Frames::event_func_9072()
{
    // event 1467_36
    {
        if (!(group_main_engine_1)) goto event_1467_36_end;
        levelfanblade_2133_instances.clear_selection();
        spread_value(levelfanblade_2133_instances, 0, 0);
        for (ObjectIterator it(levelfanblade_2133_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)*90);
        }
    }
    event_1467_36_end: ;
}
void Frames::event_func_9073()
{
    // event 1487_36
    {
        if (!(group_main_engine_1)) goto event_1487_36_end;
        enemydrone_2222_instances.clear_selection();
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(11, ((Active*)*it)->get_y());
        }
    }
    event_1487_36_end: ;
}
void Frames::event_func_9074()
{
    // event 1553_36
    {
        if (!(group_main_engine_1)) goto event_1553_36_end;
        enemyhoppermkii_2200_instances.clear_selection();
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
        }
    }
    event_1553_36_end: ;
}
void Frames::event_func_9075()
{
    // event 1695_36
    {
        if (!(group_main_engine_1)) goto event_1695_36_end;
        if (!((global_values->get(4)) == (99))) goto event_1695_36_end;
            group_main_engine_interface_and_post_processing_methods_titlecard_1 = false;
    
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
        {
            loop_gui_shiftup_running = true;
            int times = int(40);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_14();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
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
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(guipause_453_instances))->force_frame(2);
        if (!group_main_engine_level_specific_methods_cutscenes_fall_from_sky_1) {
            group_main_engine_level_specific_methods_cutscenes_fall_from_sky_1 = true;
        }
        levelsbplatform1_2096_instances.clear_selection();
        for (ObjectIterator it(levelsbplatform1_2096_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelsbplatformflame1_2097_instances.clear_selection();
        for (ObjectIterator it(levelsbplatformflame1_2097_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        switchplatformmask_2067_instances.clear_selection();
        for (ObjectIterator it(switchplatformmask_2067_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        switchplatform_2100_instances.clear_selection();
        for (ObjectIterator it(switchplatform_2100_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelparallaxpiece7_764_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece7_764_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        levelparallaxpiece6_511_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece6_511_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        levelparallaxzaoship_2121_instances.clear_selection();
        for (ObjectIterator it(levelparallaxzaoship_2121_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        ((Active*)get_instance(zaoshipfalling_2129_instances))->set_visible(true);
        ((Active*)get_instance(zaoshipfalling_2129_instances))->alterables->values.set(0, ((Active*)get_instance(zaoshipfalling_2129_instances))->get_y());
    }
    event_1695_36_end: ;
}
void Frames::event_func_9076()
{
    // event 1715_36
    {
        if (!(group_main_engine_1)) goto event_1715_36_end;
        if (!((global_values->get(4)) >= (2))) goto event_1715_36_end;
        levelbackgroundplane2_865_instances.clear_selection();
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1715_36_end: ;
}
void Frames::event_func_9077()
{
    // event 1718_36
    {
        if (!(group_main_engine_1)) goto event_1718_36_end;
        bosschoppertail_2215_instances.clear_selection();
        spread_value(bosschoppertail_2215_instances, 0, 0);
        for (ObjectIterator it(bosschoppertail_2215_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)-((Active*)*it)->alterables->values.get(0)*16);
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->alterables->values.get(2)-((Active*)*it)->alterables->values.get(0)*16);
        }
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_y()+100);
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.set(13, ((Active*)*it)->get_y());
        }
        levelbackgroundplane2_865_instances.clear_selection();
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1718_36_end: ;
}
void Frames::event_func_9078()
{
    // event 1767_36
    {
        if (!(group_main_engine_1)) goto event_1767_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(0, ((Active*)get_instance(bossspademask_2231_instances))->get_x());
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(1, ((Active*)get_instance(bossspademask_2231_instances))->get_y());
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(4, ((Active*)get_instance(bossspademask_2231_instances))->get_y());
    }
    event_1767_36_end: ;
}
void Frames::event_func_9079()
{
    // event 1915_36
    {
        if (!(group_main_engine_1)) goto event_1915_36_end;
        ((Active*)get_instance(playerassist_2028_instances))->alterables->values.set(0, ((Active*)get_instance(playerassist_2028_instances))->get_x());
        ((Active*)get_instance(playerassist_2028_instances))->alterables->values.set(1, ((Active*)get_instance(playerassist_2028_instances))->get_y());
        ((Active*)get_instance(playerassist_2028_instances))->alterables->values.set(5, ((Active*)get_instance(playerassist_2028_instances))->alterables->values.get(1));
        ((Active*)get_instance(playerassist_2028_instances))->alterables->values.set(7, ((Active*)get_instance(playerassist_2028_instances))->alterables->values.get(0));
    }
    event_1915_36_end: ;
}
void Frames::event_func_9080()
{
    // event 1924_36
    {
        if (!(group_main_engine_1)) goto event_1924_36_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 21)) == (1))) goto event_1924_36_end;
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(104, 200, 248), make_color_int(120, 252, 64));
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(0, 144, 248), make_color_int(40, 184, 0));
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(0, 108, 200), make_color_int(24, 148, 56));
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(0, 64, 168), make_color_int(0, 124, 80));
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(0, 36, 88), make_color_int(0, 64, 48));
    }
    event_1924_36_end: ;
}
void Frames::event_func_9081()
{
    // event 1925_36
    {
        if (!(group_main_engine_1)) goto event_1925_36_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 21)) == (2))) goto event_1925_36_end;
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(104, 200, 248), make_color_int(248, 132, 248));
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(0, 144, 248), make_color_int(248, 32, 244));
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(0, 108, 200), make_color_int(200, 0, 180));
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(0, 64, 168), make_color_int(144, 0, 104));
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(0, 36, 88), make_color_int(88, 0, 64));
    }
    event_1925_36_end: ;
}
void Frames::event_func_9082()
{
    // event 1926_36
    {
        if (!(group_main_engine_1)) goto event_1926_36_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 21)) == (3))) goto event_1926_36_end;
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(104, 200, 248), make_color_int(248, 200, 40));
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(0, 144, 248), make_color_int(248, 152, 0));
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(0, 108, 200), make_color_int(200, 80, 0));
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(0, 64, 168), make_color_int(160, 0, 32));
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(0, 36, 88), make_color_int(88, 0, 40));
    }
    event_1926_36_end: ;
}
void Frames::event_func_9083()
{
    // event 1927_36
    {
        if (!(group_main_engine_1)) goto event_1927_36_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 21)) == (4))) goto event_1927_36_end;
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(104, 200, 248), make_color_int(160, 160, 128));
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(0, 144, 248), make_color_int(100, 100, 80));
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(0, 108, 200), make_color_int(72, 72, 72));
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(0, 64, 168), make_color_int(32, 32, 64));
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(0, 36, 88), make_color_int(8, 8, 32));
    }
    event_1927_36_end: ;
}
