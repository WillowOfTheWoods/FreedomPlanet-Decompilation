#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_7335()
{
    // event 1922_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1922_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(5)) == (1))) goto event_1922_31_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->test_animation(9))) goto event_1922_31_end;
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0), -150));
        }
        ((Active*)get_instance(npcserpentine_947_instances))->set_direction(((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(7));
    }
    event_1922_31_end: ;
}
void Frames::event_func_7336()
{
    // event 1923_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1923_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(5)) == (-1))) goto event_1923_31_end;
        if (((Active*)get_instance(npcserpentine_947_instances))->test_animation(9)) goto event_1923_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->set_direction(((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(7)+16);
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0), -90));
        }
    }
    event_1923_31_end: ;
}
void Frames::event_func_7337()
{
    // event 1924_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1924_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(5)) == (-1))) goto event_1924_31_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->test_animation(9))) goto event_1924_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->set_direction(((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(7)+16);
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0), -30));
        }
    }
    event_1924_31_end: ;
}
void Frames::event_func_7338()
{
    // event 1925_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1925_31_end;
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(npcserpentine_947_instances));
            if (parent == NULL) goto pos_end_1925_31_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1925_31_0: ;
        }
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle((int(((Active*)*it)->alterables->values.get(0))/math_helper/10)*10, 0);
            ((Active*)*it)->set_direction(((Active*)get_instance(npcserpentine_947_instances))->get_direction());
            ((Active*)*it)->set_visible(true);
        }
        bossserphitbox_1867_instances.clear_selection();
        for (ObjectIterator it(bossserphitbox_1867_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(npcserpentine_947_instances));
            if (parent == NULL) goto pos_end_1925_31_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1925_31_1: ;
        }
    }
    event_1925_31_end: ;
}
void Frames::event_func_7339()
{
    // event 1926_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1926_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (0))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1926_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->set_x(get_min(((Active*)get_instance(npcserpentine_947_instances))->get_x(), ((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()));
    }
    event_1926_31_end: ;
}
void Frames::event_func_7340()
{
    // event 1927_31
    bool or_result_1927_31 = false;
    bool or_temp_result_1927_31_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto or_event_1927_31_0_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1927_31_0_end;
        or_result_1927_31 = true;
        or_temp_result_1927_31_0 = true;
    }
    or_event_1927_31_0_end: ;
    npcserpentine_947_instances.clear_saved_selection();
    if (or_temp_result_1927_31_0) {
        npcserpentine_947_instances.save_selection();
    }
    // event 1927_31
    bool or_temp_result_1927_31_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto or_event_1927_31_1_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(12))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1927_31_1_end;
        or_result_1927_31 = true;
        or_temp_result_1927_31_1 = true;
    }
    or_event_1927_31_1_end: ;
    if (or_temp_result_1927_31_1) {
        npcserpentine_947_instances.save_selection();
    }
    // event 1927_31
    bool or_temp_result_1927_31_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto or_event_1927_31_2_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(13))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1927_31_2_end;
        or_result_1927_31 = true;
        or_temp_result_1927_31_2 = true;
        or_event_1927_31_2_end: ;
        if (or_temp_result_1927_31_2) {
            npcserpentine_947_instances.save_selection();
        }
        if (!or_result_1927_31) goto or_final_or_event_1927_31_2_end;
        npcserpentine_947_instances.empty_selection();
        if (or_temp_result_1927_31_0 || or_temp_result_1927_31_1 || or_temp_result_1927_31_2) {
            npcserpentine_947_instances.restore_selection();
        }
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    or_final_or_event_1927_31_2_end: ;
}
void Frames::event_func_7341()
{
    // event 1928_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1928_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (0))) goto event_1928_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()-400))) goto event_1928_31_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.is_off(7))) goto event_1928_31_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1) goto event_1928_31_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1) goto event_1928_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(5, 1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(11, 1);
        {
            loop_boss_action_running = true;
            int times = int(1);
            loop_boss_action_index = 0;
            while (loop_boss_action_index < times) {
                loop_boss_action_31();
                if (!loop_boss_action_running) break;
                loop_boss_action_index++;
            }
        }
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 = true;
        }
    }
    event_1928_31_end: ;
}
void Frames::event_func_7342()
{
    // event 1929_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1929_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (0))) goto event_1929_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()+400))) goto event_1929_31_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.is_off(7))) goto event_1929_31_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1) goto event_1929_31_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1) goto event_1929_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(5, -1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(11, 1);
        {
            loop_boss_action_running = true;
            int times = int(1);
            loop_boss_action_index = 0;
            while (loop_boss_action_index < times) {
                loop_boss_action_31();
                if (!loop_boss_action_running) break;
                loop_boss_action_index++;
            }
        }
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 = true;
        }
    }
    event_1929_31_end: ;
}
void Frames::event_func_7343()
{
    // event 1930_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1930_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(11)) == (3))) goto event_1930_31_end;
        bossserphitbox_1867_instances.clear_selection();
        for (ObjectIterator it(bossserphitbox_1867_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bossserphitbox_1867_instances.has_selection()) goto event_1930_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(11, 1);
        media.play_id(SOUND_SERP_BUGEYED_2_197, -1, 1);
    }
    event_1930_31_end: ;
}
void Frames::event_func_7344()
{
    // event 1931_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1931_31_end;
        bossserphitbox_1867_instances.clear_selection();
        for (ObjectIterator it(bossserphitbox_1867_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
        {
            ((Active*)get_instance(npcserpentine_947_instances))->set_shader(NULL);
        }
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
    }
    event_1931_31_end: ;
}
void Frames::event_func_7345()
{
    // event 1932_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1932_31_end;
        shieldserpentine_1868_instances.clear_selection();
        for (ObjectIterator it(shieldserpentine_1868_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!shieldserpentine_1868_instances.has_selection()) goto event_1932_31_end;
        bossserphitbox_1867_instances.clear_selection();
        for (ObjectIterator it(bossserphitbox_1867_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(5);
        }
    }
    event_1932_31_end: ;
}
void Frames::event_func_7346()
{
    // event 1933_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1933_31_end;
        bossserphitbox_1867_instances.clear_selection();
        for (ObjectIterator it(bossserphitbox_1867_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossserphitbox_1867_instances.has_selection()) goto event_1933_31_end;
        {
            ((Active*)get_instance(npcserpentine_947_instances))->set_shader(Render::INVERT);
        }
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
    }
    event_1933_31_end: ;
}
void Frames::event_func_7347()
{
    // event 1934_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1934_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_1934_31_end;
        shieldserpentine_1868_instances.clear_selection();
        for (ObjectIterator it(shieldserpentine_1868_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!shieldserpentine_1868_instances.has_selection()) goto event_1934_31_end;
        bossserphitbox_1867_instances.clear_selection();
        for (ObjectIterator it(bossserphitbox_1867_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossserphitbox_1867_instances.has_selection()) goto event_1934_31_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1) goto event_1934_31_end;
        {
            loop_boss_action_running = true;
            int times = int(1);
            loop_boss_action_index = 0;
            while (loop_boss_action_index < times) {
                loop_boss_action_31();
                if (!loop_boss_action_running) break;
                loop_boss_action_index++;
            }
        }
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1 = true;
        }
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(1, 0);
        bossserphitbox_1867_instances.clear_selection();
        for (ObjectIterator it(bossserphitbox_1867_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 10);
        }
        media.play_id(SOUND_COMMON_PLAYERHIT_2_25, -1, 1);
        media.stop_sample(SOUND_SERP_HIT1_196);
        media.play_id(SOUND_SERP_HIT1_196, -1, 1);
    }
    event_1934_31_end: ;
}
void Frames::event_func_7348()
{
    // event 1935_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1935_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_x()) < (((Active*)get_instance(minibossufobeam_1721_instances))->get_x()+32))) goto event_1935_31_end;
        shieldserpentine_1868_instances.clear_selection();
        for (ObjectIterator it(shieldserpentine_1868_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!shieldserpentine_1868_instances.has_selection()) goto event_1935_31_end;
        bossserphitbox_1867_instances.clear_selection();
        for (ObjectIterator it(bossserphitbox_1867_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossserphitbox_1867_instances.has_selection()) goto event_1935_31_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1) goto event_1935_31_end;
        {
            loop_boss_action_running = true;
            int times = int(1);
            loop_boss_action_index = 0;
            while (loop_boss_action_index < times) {
                loop_boss_action_31();
                if (!loop_boss_action_running) break;
                loop_boss_action_index++;
            }
        }
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1 = true;
        }
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(1, 0);
        media.play_id(SOUND_COMMON_PLAYERHIT_2_25, -1, 1);
        media.stop_sample(SOUND_SERP_HIT1_196);
        media.play_id(SOUND_SERP_HIT1_196, -1, 1);
    }
    event_1935_31_end: ;
}
void Frames::event_func_7349()
{
    // event 1936_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1936_31_end;
        bossserphitbox_1867_instances.clear_selection();
        for (ObjectIterator it(bossserphitbox_1867_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)*it)->alterables->values.get(3)*30))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossserphitbox_1867_instances.has_selection()) goto event_1936_31_end;
        {
            loop_boss_action_running = true;
            int times = int(1);
            loop_boss_action_index = 0;
            while (loop_boss_action_index < times) {
                loop_boss_action_31();
                if (!loop_boss_action_running) break;
                loop_boss_action_index++;
            }
        }
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1 = true;
        }
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(1, 0);
        media.play_id(SOUND_COMMON_PLAYERHIT_2_25, -1, 1);
        media.stop_sample(SOUND_SERP_HIT1_196);
        media.play_id(SOUND_SERP_HIT1_196, -1, 1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(8, 1);
    }
    event_1936_31_end: ;
}
void Frames::event_func_7350()
{
    // event 1937_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1937_31_end;
        bossserphitbox_1867_instances.clear_selection();
        for (ObjectIterator it(bossserphitbox_1867_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)*it)->alterables->values.get(3)*30))) { it.deselect(); continue; }
        }
        if (!bossserphitbox_1867_instances.has_selection()) goto event_1937_31_end;
        for (ObjectIterator it(bossserphitbox_1867_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
        }
        shieldserpentine_1868_instances.clear_selection();
        for (ObjectIterator it(shieldserpentine_1868_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(shieldserpentine_1868_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(-80, 0);
            pos_end_1937_31_0: ;
        }
    }
    event_1937_31_end: ;
}
void Frames::event_func_7351()
{
    // event 1938_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1938_31_end;
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
        ((Active*)get_instance(minibossufohatch2_1723_instances))->move_back();
        ((Active*)get_instance(minibossufohatch1_1722_instances))->move_back();
    }
    event_1938_31_end: ;
}
void Frames::event_func_7352()
{
    // event 1939_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1939_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) < (4))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1939_31_end;
        minibossufo2_1764_instances.clear_selection();
        for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(minibossufo_1763_instances, it.current_index, default_active_instance))->get_x()+cos_deg(((Active*)get_single(minibossufo_1763_instances, it.current_index, default_active_instance))->alterables->values.get(3))*cos_deg(((Active*)*it)->alterables->values.get(0)*90+((Active*)get_single(minibossufo_1763_instances, it.current_index, default_active_instance))->alterables->values.get(4))*80);
            ((Active*)*it)->set_y(((Active*)get_single(minibossufo_1763_instances, it.current_index, default_active_instance))->get_y()-sin_deg(((Active*)get_single(minibossufo_1763_instances, it.current_index, default_active_instance))->alterables->values.get(3))*cos_deg(((Active*)*it)->alterables->values.get(0)*90+((Active*)get_single(minibossufo_1763_instances, it.current_index, default_active_instance))->alterables->values.get(4))*80);
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_single(minibossufo_1763_instances, it.current_index, default_active_instance))->alterables->values.get(4)+((Active*)*it)->alterables->values.get(0)*90);
        }
        {
            FrameObject * parent = ((Active*)get_single(minibossufo_1763_instances));
            if (parent == NULL) goto pos_end_1939_31_0;
            ((Active*)get_instance(minibossufohatch1_1722_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1939_31_0: ;
        }
        {
            FrameObject * parent = ((Active*)get_single(minibossufo_1763_instances));
            if (parent == NULL) goto pos_end_1939_31_1;
            ((Active*)get_instance(minibossufohatch2_1723_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1939_31_1: ;
        }
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(7));
        }
        {
            FrameObject * parent = ((Active*)get_single(minibossufo_1763_instances));
            if (parent == NULL) goto pos_end_1939_31_2;
            ((Active*)get_instance(minibossufobeam_1721_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1939_31_2: ;
        }
    }
    event_1939_31_end: ;
}
void Frames::event_func_7353()
{
    // event 1940_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1940_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) < (4))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1940_31_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, (((Active*)*it)->alterables->values.get(4)+4)%math_helper%360);
        }
    }
    event_1940_31_end: ;
}
void Frames::event_func_7354()
{
    // event 1941_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1941_31_end;
        minibossufo2_1764_instances.clear_selection();
        for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (180))) { it.deselect(); continue; }
        }
        if (!minibossufo2_1764_instances.has_selection()) goto event_1941_31_end;
        {
            minibossufo_1763_instances.clear_selection();
            ObjectIterator other_it(minibossufo_1763_instances);
            for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1941_31_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1941_31_0_end: ;
    }
    event_1941_31_end: ;
}
void Frames::event_func_7355()
{
    // event 1942_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1942_31_end;
        minibossufo2_1764_instances.clear_selection();
        for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (360))) { it.deselect(); continue; }
        }
        if (!minibossufo2_1764_instances.has_selection()) goto event_1942_31_end;
        {
            minibossufo_1763_instances.clear_selection();
            ObjectIterator other_it(minibossufo_1763_instances);
            for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1942_31_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1942_31_0_end: ;
    }
    event_1942_31_end: ;
}
void Frames::event_func_7356()
{
    // event 1943_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1943_31_end;
        minibossufo2_1764_instances.clear_selection();
        for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (360))) { it.deselect(); continue; }
        }
        if (!minibossufo2_1764_instances.has_selection()) goto event_1943_31_end;
        ((Active*)get_single(minibossufo2_1764_instances, default_active_instance))->move_back(((Active*)get_instance(minibossufohatch1_1722_instances)));
    }
    event_1943_31_end: ;
}
void Frames::event_func_7357()
{
    // event 1944_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1944_31_end;
        minibossufo2_1764_instances.clear_selection();
        for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (180+360))) { it.deselect(); continue; }
        }
        if (!minibossufo2_1764_instances.has_selection()) goto event_1944_31_end;
        ((Active*)get_single(minibossufo2_1764_instances, default_active_instance))->move_back(((Active*)get_instance(minibossufohatch1_1722_instances)));
    }
    event_1944_31_end: ;
}
void Frames::event_func_7358()
{
    // event 1945_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1945_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1945_31_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(8)+sin_deg(((Active*)*it)->alterables->values.get(9))*10);
            ((Active*)*it)->alterables->values.add(9, 2);
        }
    }
    event_1945_31_end: ;
}
void Frames::event_func_7359()
{
    // event 1946_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1946_31_end;
        if (!(((Active*)get_instance(minibossufobeam_1721_instances))->flags & VISIBLE)) goto event_1946_31_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(minibossufobeam_1721_instances))->get_x()-32))) goto event_1946_31_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(minibossufobeam_1721_instances))->get_x()+32))) goto event_1946_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1946_31_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1946_31_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 8);
    }
    event_1946_31_end: ;
}
void Frames::event_func_7360()
{
    // event 1947_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1)) goto event_1947_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1947_31_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.add(6, 1);
            ((Active*)*it)->set_layer(4-1);
        }
        minibossufo2_1764_instances.clear_selection();
        for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(4-1);
        }
        ((Active*)get_instance(minibossufohatch2_1723_instances))->set_layer(4-1);
        ((Active*)get_instance(minibossufohatch2_1723_instances))->move_back();
        ((Active*)get_instance(minibossufohatch1_1722_instances))->set_layer(4-1);
        ((Active*)get_instance(minibossufohatch1_1722_instances))->move_back();
        ((Active*)get_instance(minibossufobeam_1721_instances))->set_layer(4-1);
        ((Active*)get_instance(minibossufobeam_1721_instances))->move_back();
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, width);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, height);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
    }
    event_1947_31_end: ;
}
void Frames::event_func_7361()
{
    // event 1948_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1)) goto event_1948_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1948_31_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_max(((Active*)*it)->alterables->values.get(3)-2, -90));
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y()+2, ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(9)-64));
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)*9+((Active*)get_single(minibossufo_1763_instances, default_active_instance))->get_x()+100)*0.1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, ((frame_top()+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(24))*9+((Active*)get_single(minibossufo_1763_instances, default_active_instance))->get_y())*0.1);
    }
    event_1948_31_end: ;
}
void Frames::event_func_7362()
{
    // event 1949_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1)) goto event_1949_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (-90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) >= (((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(9)-64))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1949_31_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
            ((Active*)*it)->force_animation(7);
        }
        media.play_id(SOUND_BIGCHARGE_200, -1, 1);
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(13);
            ((Active*)*it)->set_y(((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(9)-64);
        }
    }
    event_1949_31_end: ;
}
void Frames::event_func_7363()
{
    // event 1950_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1)) goto event_1950_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(13))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1950_31_end;
        if (!(!media.is_sample_playing(SOUND_SERP_KUNGFU_198))) goto event_1950_31_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(13);
        }
        media.play_id(SOUND_SERP_ANNIHILATION_199, -1, 1);
    }
    event_1950_31_end: ;
}
void Frames::event_func_7364()
{
    // event 1951_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1)) goto event_1951_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (2))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1951_31_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, (((Active*)*it)->alterables->values.get(4)+((Active*)*it)->alterables->values.get(13))%math_helper%360);
            ((Active*)*it)->alterables->values.add(13, 0.05);
        }
    }
    event_1951_31_end: ;
}
void Frames::event_func_7365()
{
    // event 1952_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1)) goto event_1952_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) >= (10))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1952_31_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        media.play_id(SOUND_COMMON_BUBBLESWEEP_169, -1, 1);
        ((Active*)get_instance(minibossufobeam_1721_instances))->set_angle(-90, 0);
        ((Active*)get_instance(minibossufobeam_1721_instances))->set_y_scale(8);
        ((Active*)get_instance(minibossufobeam_1721_instances))->set_visible(true);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 8);
    }
    event_1952_31_end: ;
}
void Frames::event_func_7366()
{
    // event 1953_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1)) goto event_1953_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) < (3))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1953_31_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23), ((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()));
    }
    event_1953_31_end: ;
}
void Frames::event_func_7367()
{
    // event 1954_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1)) goto event_1954_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (3))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1954_31_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, (((Active*)*it)->alterables->values.get(4)+((Active*)*it)->alterables->values.get(13))%math_helper%360);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+15);
        }
        ((Active*)get_instance(npcserpentine_947_instances))->set_x(((Active*)get_single(minibossufo_1763_instances, default_active_instance))->get_x());
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, get_max(((Active*)get_single(minibossufo_1763_instances, default_active_instance))->get_x()+100, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)));
        largecolumn_1861_instances.clear_selection();
        for (ObjectIterator it(largecolumn_1861_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(9)-64);
        }
        largecolumn2_1862_instances.clear_selection();
        for (ObjectIterator it(largecolumn2_1862_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)*9+((Active*)get_single(minibossufo_1763_instances, default_active_instance))->get_x()+200)*0.1-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+randrange(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)*2));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)*9+((Active*)get_single(minibossufo_1763_instances, default_active_instance))->get_y()+40)*0.1-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+randrange(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)*2));
    }
    event_1954_31_end: ;
}
void Frames::event_func_7368()
{
    // event 1955_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1)) goto event_1955_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (3))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1955_31_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (frame_right()+300))) goto event_1955_31_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
    }
    event_1955_31_end: ;
}
void Frames::event_func_7369()
{
    // event 1956_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1)) goto event_1956_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (3))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1956_31_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (frame_right()+300))) goto event_1956_31_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (frame_right()+100))) goto event_1956_31_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 10);
    }
    event_1956_31_end: ;
}
void Frames::event_func_7370()
{
    // event 1957_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1)) goto event_1957_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-100))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1957_31_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+0.5, 15));
    }
    event_1957_31_end: ;
}
void Frames::event_func_7371()
{
    // event 1959_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1)) goto event_1959_31_end;
        largecolumn2_1862_instances.clear_selection();
        for (ObjectIterator it(largecolumn2_1862_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!largecolumn2_1862_instances.has_selection()) goto event_1959_31_end;
        for (ObjectIterator it(largecolumn2_1862_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-3, -105));
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
        }
    }
    event_1959_31_end: ;
}
void Frames::event_func_7372()
{
    // event 1960_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1)) goto event_1960_31_end;
        largecolumn2_1862_instances.clear_selection();
        for (ObjectIterator it(largecolumn2_1862_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (-105))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!largecolumn2_1862_instances.has_selection()) goto event_1960_31_end;
        media.play_id(SOUND_MINESTEEL_75, -1, 1);
        for (ObjectIterator it(largecolumn2_1862_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 8);
    }
    event_1960_31_end: ;
}
void Frames::event_func_7373()
{
    // event 1961_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1)) goto event_1961_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (13952-48))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1961_31_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->alterables->values.add(6, 1);
        }
        ((Active*)get_instance(minibossufodebris_1870_instances))->set_angle(-90, 0);
        {
            FrameObject * parent = ((Active*)get_single(minibossufo_1763_instances));
            if (parent == NULL) goto pos_end_1961_31_0;
            ((Active*)get_instance(minibossufodebris_1870_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1961_31_0: ;
        }
        minibossufo2_1764_instances.clear_selection();
        for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->alterables->values.set(2, -3-((Active*)*it)->alterables->values.get(0));
        }
        {
            FrameObject * parent = ((Active*)get_single(minibossufo_1763_instances));
            if (parent == NULL) goto pos_end_1961_31_1;
            ((Active*)get_instance(npcserpentine_947_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1961_31_1: ;
        }
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(8);
        ((Active*)get_instance(npcserpentine_947_instances))->set_visible(true);
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 6);
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
        }
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(3, 3);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_600_151);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
        }
        ((Active*)get_instance(npcserpentine_947_instances))->set_direction(0);
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
    }
    event_1961_31_end: ;
}
void Frames::event_func_7374()
{
    // event 1962_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1)) goto event_1962_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) >= (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (5))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1962_31_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+15);
        }
        minibossufo2_1764_instances.clear_selection();
        for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-4);
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->alterables->values.get(2)+0.3);
        }
        {
            FrameObject * parent = ((Active*)get_single(minibossufo_1763_instances));
            if (parent == NULL) goto pos_end_1962_31_0;
            ((Active*)get_instance(minibossufohatch2_1723_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1962_31_0: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(minibossufodebris_1870_instances));
            if (parent == NULL) goto pos_end_1962_31_1;
            ((Active*)get_instance(minibossufohatch1_1722_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1962_31_1: ;
        }
        ((Active*)get_instance(minibossufobeam_1721_instances))->alterables->values.sub(0, 1);
        ((Active*)get_instance(npcserpentine_947_instances))->set_y(get_min(((Active*)get_instance(npcserpentine_947_instances))->get_y()+((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(3), ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(9)));
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(3, get_min(((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(3)+0.25, 12));
        ((Active*)get_instance(minibossufodebris_1870_instances))->set_y(((Active*)get_instance(minibossufodebris_1870_instances))->get_y()+((Active*)get_instance(minibossufodebris_1870_instances))->alterables->values.get(0));
        ((Active*)get_instance(minibossufodebris_1870_instances))->alterables->values.add(0, 0.2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(1, 1);
    }
    event_1962_31_end: ;
}
void Frames::event_func_7375()
{
    // event 1963_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1)) goto event_1963_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (4))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1963_31_end;
        if (!((((Active*)get_instance(minibossufobeam_1721_instances))->alterables->values.get(0)) <= (1))) goto event_1963_31_end;
        ((Active*)get_instance(minibossufobeam_1721_instances))->set_visible(false);
    }
    event_1963_31_end: ;
}
void Frames::event_func_7376()
{
    // event 1964_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1)) goto event_1964_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (4))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1964_31_end;
        FrameObject * single_instance_1964_31_0; single_instance_1964_31_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(minibossufodebris_1870_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1964_31_0 == NULL)
                    single_instance_1964_31_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1964_31_0))->set_x(((Active*)single_instance_1964_31_0)->get_x()-40+randrange(81));
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
        }
        ((Active*)((Active*)single_instance_1964_31_0))->force_speed(100);
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1964_31_1_end;
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
        dynamic_1964_31_1_end: ;
    }
    event_1964_31_end: ;
}
void Frames::event_func_7377()
{
    // event 1965_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1)) goto event_1965_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) >= (32))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1965_31_end;
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
    }
    event_1965_31_end: ;
}
void Frames::event_func_7378()
{
    // event 1966_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1)) goto event_1966_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) >= (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (5))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1966_31_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_y()) >= (((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(9)))) goto event_1966_31_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(16);
    }
    event_1966_31_end: ;
}
void Frames::event_func_7379()
{
    // event 1967_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1)) goto event_1967_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) < (6))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1967_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (14230))) goto event_1967_31_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, 14230);
    }
    event_1967_31_end: ;
}
void Frames::event_func_7380()
{
    // event 1968_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1)) goto event_1968_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (5))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1968_31_end;
        if (!((((Active*)get_instance(minibossufodebris_1870_instances))->get_y()) >= (((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(9)+24))) goto event_1968_31_end;
        ((Active*)get_instance(minibossufodebris_1870_instances))->alterables->values.set(0, 0);
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(2, 1);
        effectsexplosion01_309_instances.empty_selection();
        // select single: false true false
        {
            FrameObject * parent = ((Active*)get_instance(minibossufodebris_1870_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + -10, parent->y + 0), parent->layer);
                effectsexplosion01_309_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                effectsexplosion01_309_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 20, parent->y + 0), parent->layer);
                effectsexplosion01_309_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 40, parent->y + 0), parent->layer);
                effectsexplosion01_309_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + -20, parent->y + 0), parent->layer);
                effectsexplosion01_309_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 30, parent->y + 0), parent->layer);
                effectsexplosion01_309_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + -40, parent->y + 0), parent->layer);
                effectsexplosion01_309_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + -30, parent->y + 0), parent->layer);
                effectsexplosion01_309_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 10, parent->y + 0), parent->layer);
                effectsexplosion01_309_instances.add_back();
            }
        }
        for (ObjectIterator it(effectsexplosion01_309_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(randrange(4)*90, 0);
        }
        spread_value(effectsexplosion01_309_instances, 0, 0);
        for (ObjectIterator it(effectsexplosion01_309_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(15+((Active*)*it)->alterables->values.get(0)*3);
        }
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
    }
    event_1968_31_end: ;
}
void Frames::event_func_7381()
{
    // event 1969_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1)) goto event_1969_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (6))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1969_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) >= (((Active*)get_instance(npcserpentine_947_instances))->get_x()+100))) goto event_1969_31_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -3);
    }
    event_1969_31_end: ;
}
void Frames::event_func_7382()
{
    // event 1970_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1)) goto event_1970_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (6))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1970_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(npcserpentine_947_instances))->get_x()+100))) goto event_1970_31_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(2, 0);
    }
    event_1970_31_end: ;
}
void Frames::event_func_7383()
{
    // event 1971_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1)) goto event_1971_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (6))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1971_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(npcserpentine_947_instances))->get_x()+100))) goto event_1971_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) == (0))) goto event_1971_31_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
    }
    event_1971_31_end: ;
}
void Frames::event_func_7384()
{
    // event 1972_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1)) goto event_1972_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (7))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1972_31_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 3);
    }
    event_1972_31_end: ;
}
void Frames::event_func_7385()
{
    // event 1973_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1)) goto event_1973_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (7))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1973_31_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) <= (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)))) goto event_1973_31_end;
        if (!((global_values->get(0)) == (2))) goto event_1973_31_end;
        if (!((global_values->get(23)) == (1))) goto event_1973_31_end;
        global_values->set(23, 0);
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(17, 140);
        }
        media.play(str_data_voices_eng_li_lilac_snakeman_ogg_152, 20-1);
    }
    event_1973_31_end: ;
}
void Frames::event_func_7386()
{
    // event 1974_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1)) goto event_1974_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(17)) > (1))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1974_31_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(17, 1);
        }
    }
    event_1974_31_end: ;
}
void Frames::event_func_7387()
{
    // event 1975_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1)) goto event_1975_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(17)) == (1))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1975_31_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(17, 1);
        }
        global_values->set(23, 1);
    }
    event_1975_31_end: ;
}
void Frames::event_func_7388()
{
    // event 1976_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1)) goto event_1976_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (7))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1976_31_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) <= (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)))) goto event_1976_31_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
        minibossbarrier_924_instances.clear_selection();
        for (ObjectIterator it(minibossbarrier_924_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(13948);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 0);
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(minibossufohatch2_1723_instances))->set_visible(false);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 0);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 1);
        }
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(-100);
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
    }
    event_1976_31_end: ;
}
void Frames::event_func_7389()
{
    // event 1977_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1)) goto event_1977_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (8))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1977_31_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) > (0))) goto event_1977_31_end;
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
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 0);
    }
    event_1977_31_end: ;
}
void Frames::event_func_7390()
{
    // event 1978_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1)) goto event_1978_31_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (8))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1978_31_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, 248);
    }
    event_1978_31_end: ;
}
void Frames::event_func_7391()
{
    // event 1979_31
    {
        if (!(group_main_engine_1)) goto event_1979_31_end;
        monitorbomb_563_instances.clear_selection();
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (10800))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (360))) { it.deselect(); continue; }
        }
        if (!monitorbomb_563_instances.has_selection()) goto event_1979_31_end;
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1979_31_end: ;
}
void Frames::event_func_7392()
{
    // event 1980_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1)) goto event_1980_31_end;
        if (once_condition_1980_31) goto event_1980_31_end;
        once_condition_1980_31 = true;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(16, ((Active*)*it)->get_x());
            ((Active*)*it)->set_visible(true);
        }
        minibosssamurighthand_1875_instances.clear_selection();
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        minibosssamulefthand_1874_instances.clear_selection();
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        minibosssamuwheel_1873_instances.clear_selection();
        for (ObjectIterator it(minibosssamuwheel_1873_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1980_31_end: ;
}
void Frames::event_func_7393()
{
    // event 1981_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1)) goto event_1981_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, ((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->alterables->values.add(4, ((Active*)*it)->alterables->values.get(6));
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4)+sin_deg(((Active*)*it)->alterables->values.get(8))*8);
        }
        minibosssamuwheel_1873_instances.clear_selection();
        for (ObjectIterator it(minibosssamuwheel_1873_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+12)%math_helper%360);
        }
        minibosssamurighthand_1875_instances.clear_selection();
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(3)+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(4)+((Active*)*it)->alterables->values.get(1)+sin_deg(((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(8)-60)*8);
        }
        minibosssamulefthand_1874_instances.clear_selection();
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(3)+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(4)+((Active*)*it)->alterables->values.get(1)+sin_deg(((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(8)-60)*8);
        }
        for (ObjectIterator it(minibosssamuwheel_1873_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(4)+sin_deg(((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(8))*8);
        }
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(2), 0);
        }
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(2), 0);
        }
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(9), 0);
        }
        bossgate_1878_instances.clear_selection();
        for (ObjectIterator it(bossgate_1878_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        for (ObjectIterator it(minibosssamuwheel_1873_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1981_31_end: ;
}
void Frames::event_func_7394()
{
    // event 1982_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1)) goto event_1982_31_end;
        if (!((global_values->get(3)%math_helper%10) == (0))) goto event_1982_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(player_389_instances))->x + 0, ((Active*)get_instance(player_389_instances))->y + 0));
        }
    }
    event_1982_31_end: ;
}
void Frames::event_func_7395()
{
    // event 1983_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_float_down_1)) goto event_1983_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, (((Active*)*it)->alterables->values.get(8)+8)%math_helper%360);
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-0.1, 0));
        }
    }
    event_1983_31_end: ;
}
void Frames::event_func_7396()
{
    // event 1984_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_float_down_1)) goto event_1984_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (0))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1984_31_end;
            group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_float_down_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1) {
            group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1 = true;
        }
    }
    event_1984_31_end: ;
}
void Frames::event_func_7397()
{
    // event 1985_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1)) goto event_1985_31_end;
        minibosssamulefthand_1874_instances.clear_selection();
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, sin_deg(((Active*)get_instance(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(8))*-10+((Active*)get_instance(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(5)*-2.5);
        }
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, ((Active*)*it)->alterables->values.get(5)*-2.5);
        }
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, cos_deg(0-((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(9))*-56+sin_deg(((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(9))*40);
            ((Active*)*it)->alterables->values.set(1, sin_deg(0-((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(9))*-56+cos_deg(((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(9))*40);
        }
        minibosssamurighthand_1875_instances.clear_selection();
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, sin_deg(((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(8))*10+((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(5)*-2.5);
            ((Active*)*it)->alterables->values.set(0, cos_deg(0-((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(9))*56+sin_deg(((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(9))*40);
            ((Active*)*it)->alterables->values.set(1, sin_deg(0-((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(9))*56+cos_deg(((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(9))*40);
        }
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
            ((Active*)*it)->alterables->values.set(8, (((Active*)*it)->alterables->values.get(8)+8)%math_helper%360);
        }
    }
    event_1985_31_end: ;
}
void Frames::event_func_7398()
{
    // event 1986_31
    bool or_result_1986_31 = false;
    bool or_temp_result_1986_31_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1)) goto or_event_1986_31_0_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (-1))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto or_event_1986_31_0_end;
        or_result_1986_31 = true;
        or_temp_result_1986_31_0 = true;
    }
    or_event_1986_31_0_end: ;
    minibosssamu_1876_instances.clear_saved_selection();
    if (or_temp_result_1986_31_0) {
        minibosssamu_1876_instances.save_selection();
    }
    // event 1986_31
    bool or_temp_result_1986_31_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1)) goto or_event_1986_31_1_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) != (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto or_event_1986_31_1_end;
        or_result_1986_31 = true;
        or_temp_result_1986_31_1 = true;
    }
    or_event_1986_31_1_end: ;
    if (or_temp_result_1986_31_1) {
        minibosssamu_1876_instances.save_selection();
    }
    // event 1986_31
    bool or_temp_result_1986_31_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1)) goto or_event_1986_31_2_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto or_event_1986_31_2_end;
        or_result_1986_31 = true;
        or_temp_result_1986_31_2 = true;
        or_event_1986_31_2_end: ;
        if (or_temp_result_1986_31_2) {
            minibosssamu_1876_instances.save_selection();
        }
        if (!or_result_1986_31) goto or_final_or_event_1986_31_2_end;
        minibosssamu_1876_instances.empty_selection();
        if (or_temp_result_1986_31_0 || or_temp_result_1986_31_1 || or_temp_result_1986_31_2) {
            minibosssamu_1876_instances.restore_selection();
        }
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, get_max(((Active*)*it)->alterables->values.get(5)-0.25, -7));
        }
    }
    or_final_or_event_1986_31_2_end: ;
}
void Frames::event_func_7399()
{
    // event 1987_31
    bool or_result_1987_31 = false;
    bool or_temp_result_1987_31_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1)) goto or_event_1987_31_0_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (1))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto or_event_1987_31_0_end;
        or_result_1987_31 = true;
        or_temp_result_1987_31_0 = true;
    }
    or_event_1987_31_0_end: ;
    minibosssamu_1876_instances.clear_saved_selection();
    if (or_temp_result_1987_31_0) {
        minibosssamu_1876_instances.save_selection();
    }
    // event 1987_31
    bool or_temp_result_1987_31_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1)) goto or_event_1987_31_1_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) != (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (0))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto or_event_1987_31_1_end;
        or_result_1987_31 = true;
        or_temp_result_1987_31_1 = true;
    }
    or_event_1987_31_1_end: ;
    if (or_temp_result_1987_31_1) {
        minibosssamu_1876_instances.save_selection();
    }
    // event 1987_31
    bool or_temp_result_1987_31_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1)) goto or_event_1987_31_2_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (0))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto or_event_1987_31_2_end;
        or_result_1987_31 = true;
        or_temp_result_1987_31_2 = true;
        or_event_1987_31_2_end: ;
        if (or_temp_result_1987_31_2) {
            minibosssamu_1876_instances.save_selection();
        }
        if (!or_result_1987_31) goto or_final_or_event_1987_31_2_end;
        minibosssamu_1876_instances.empty_selection();
        if (or_temp_result_1987_31_0 || or_temp_result_1987_31_1 || or_temp_result_1987_31_2) {
            minibosssamu_1876_instances.restore_selection();
        }
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, get_min(((Active*)*it)->alterables->values.get(5)+0.25, 7));
        }
    }
    or_final_or_event_1987_31_2_end: ;
}
void Frames::event_func_7400()
{
    // event 1988_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1)) goto event_1988_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (((Active*)get_instance(player_389_instances))->get_y()-80))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1988_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(4, 0.5);
        }
    }
    event_1988_31_end: ;
}
void Frames::event_func_7401()
{
    // event 1989_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1)) goto event_1989_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) < (((Active*)get_instance(player_389_instances))->get_y()-120))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1989_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 0.5);
        }
    }
    event_1989_31_end: ;
}
void Frames::event_func_7402()
{
    // event 1990_31
    bool or_result_1990_31 = false;
    bool or_temp_result_1990_31_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1)) goto or_event_1990_31_0_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)*it)->alterables->values.get(16)+((Active*)*it)->alterables->values.get(17)))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto or_event_1990_31_0_end;
        or_result_1990_31 = true;
        or_temp_result_1990_31_0 = true;
    }
    or_event_1990_31_0_end: ;
    minibosssamu_1876_instances.clear_saved_selection();
    if (or_temp_result_1990_31_0) {
        minibosssamu_1876_instances.save_selection();
    }
    // event 1990_31
    bool or_temp_result_1990_31_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1)) goto or_event_1990_31_1_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)*it)->alterables->values.get(16)-((Active*)*it)->alterables->values.get(17)))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto or_event_1990_31_1_end;
        or_result_1990_31 = true;
        or_temp_result_1990_31_1 = true;
        or_event_1990_31_1_end: ;
        if (or_temp_result_1990_31_1) {
            minibosssamu_1876_instances.save_selection();
        }
        if (!or_result_1990_31) goto or_final_or_event_1990_31_1_end;
        minibosssamu_1876_instances.empty_selection();
        if (or_temp_result_1990_31_0 || or_temp_result_1990_31_1) {
            minibosssamu_1876_instances.restore_selection();
        }
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(15, ((Active*)*it)->alterables->values.get(15)*-1);
        }
    }
    or_final_or_event_1990_31_1_end: ;
}
void Frames::event_func_7403()
{
    // event 1991_31
    bool or_result_1991_31 = false;
    bool or_temp_result_1991_31_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1)) goto or_event_1991_31_0_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (80))) { it.deselect(); continue; }
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()-70))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()+70))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto or_event_1991_31_0_end;
        or_result_1991_31 = true;
        or_temp_result_1991_31_0 = true;
    }
    or_event_1991_31_0_end: ;
    minibosssamu_1876_instances.clear_saved_selection();
    if (or_temp_result_1991_31_0) {
        minibosssamu_1876_instances.save_selection();
    }
    // event 1991_31
    bool or_temp_result_1991_31_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1)) goto or_event_1991_31_1_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (80))) { it.deselect(); continue; }
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (((Active*)get_instance(player_389_instances, default_active_instance))->get_y()-40))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto or_event_1991_31_1_end;
        or_result_1991_31 = true;
        or_temp_result_1991_31_1 = true;
        or_event_1991_31_1_end: ;
        if (or_temp_result_1991_31_1) {
            minibosssamu_1876_instances.save_selection();
        }
        if (!or_result_1991_31) goto or_final_or_event_1991_31_1_end;
        minibosssamu_1876_instances.empty_selection();
        if (or_temp_result_1991_31_0 || or_temp_result_1991_31_1) {
            minibosssamu_1876_instances.restore_selection();
        }
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    or_final_or_event_1991_31_1_end: ;
}
void Frames::event_func_7404()
{
    // event 1992_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1)) goto event_1992_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1992_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    event_1992_31_end: ;
}
void Frames::event_func_7405()
{
    // event 1993_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1)) goto event_1993_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (((Active*)get_instance(player_389_instances))->get_y()-40))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1993_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 8);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->alterables->values.set(9, 0);
        }
            group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1) {
            group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1 = true;
        }
        minibosssamufloorcheck_1877_instances.clear_selection();
        for (ObjectIterator it(minibosssamufloorcheck_1877_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(4)+120);
        }
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 0);
            ((Active*)*it)->alterables->values.set(13, 0);
        }
    }
    event_1993_31_end: ;
}
void Frames::event_func_7406()
{
    // event 1994_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1)) goto event_1994_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) < (2))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1994_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->alterables->values.set(9, 0);
        }
            group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1) {
            group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1 = true;
        }
        minibosssamufloorcheck_1877_instances.clear_selection();
        for (ObjectIterator it(minibosssamufloorcheck_1877_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(4)+120);
        }
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(13, 1);
        }
    }
    event_1994_31_end: ;
}
void Frames::event_func_7407()
{
    // event 1995_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1)) goto event_1995_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (2))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1995_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 10);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->alterables->values.set(9, 0);
        }
            group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1) {
            group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1 = true;
        }
        minibosssamufloorcheck_1877_instances.clear_selection();
        for (ObjectIterator it(minibosssamufloorcheck_1877_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(4)+120);
        }
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 0);
            ((Active*)*it)->alterables->values.set(13, 0);
        }
    }
    event_1995_31_end: ;
}
void Frames::event_func_7408()
{
    // event 1996_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_1996_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) != (0))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1996_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, (((Active*)*it)->alterables->values.get(8)+4)%math_helper%360);
        }
    }
    event_1996_31_end: ;
}
void Frames::event_func_7409()
{
    // event 1997_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_1997_31_end;
        minibosssamulefthand_1874_instances.clear_selection();
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (0))) { it.deselect(); continue; }
        }
        if (!minibosssamulefthand_1874_instances.has_selection()) goto event_1997_31_end;
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+0.2, 0));
        }
    }
    event_1997_31_end: ;
}
void Frames::event_func_7410()
{
    // event 1998_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_1998_31_end;
        minibosssamulefthand_1874_instances.clear_selection();
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!minibosssamulefthand_1874_instances.has_selection()) goto event_1998_31_end;
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(2)-0.2, 0));
        }
    }
    event_1998_31_end: ;
}
void Frames::event_func_7411()
{
    // event 1999_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_1999_31_end;
        minibosssamurighthand_1875_instances.clear_selection();
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (0))) { it.deselect(); continue; }
        }
        if (!minibosssamurighthand_1875_instances.has_selection()) goto event_1999_31_end;
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+0.2, 0));
        }
    }
    event_1999_31_end: ;
}
void Frames::event_func_7412()
{
    // event 2000_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_2000_31_end;
        minibosssamurighthand_1875_instances.clear_selection();
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!minibosssamurighthand_1875_instances.has_selection()) goto event_2000_31_end;
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(2)-0.2, 0));
        }
    }
    event_2000_31_end: ;
}
void Frames::event_func_7413()
{
    // event 2001_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_2001_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) < (30))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2001_31_end;
        minibosssamulefthand_1874_instances.clear_selection();
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-4, -40));
        }
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
    }
    event_2001_31_end: ;
}
void Frames::event_func_7414()
{
    // event 2002_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_2002_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) < (30))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2002_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
        minibosssamurighthand_1875_instances.clear_selection();
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-4, -40));
        }
    }
    event_2002_31_end: ;
}
void Frames::event_func_7415()
{
    // event 2003_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_2003_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (((Active*)*it)->alterables->values.get(12)))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2003_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, get_min(((Active*)*it)->alterables->values.get(4)+4, ((Active*)*it)->alterables->values.get(12)));
        }
    }
    event_2003_31_end: ;
}
void Frames::event_func_7416()
{
    // event 2004_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_2004_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (((Active*)*it)->alterables->values.get(12)))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2004_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, get_max(((Active*)*it)->alterables->values.get(4)-4, ((Active*)*it)->alterables->values.get(12)));
        }
    }
    event_2004_31_end: ;
}
void Frames::event_func_7417()
{
    // event 2005_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_2005_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (((Active*)*it)->alterables->values.get(12)))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2005_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
    }
    event_2005_31_end: ;
}
void Frames::event_func_7418()
{
    // event 2006_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_2006_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) < (60))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2006_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
    }
    event_2006_31_end: ;
}
void Frames::event_func_7419()
{
    // event 2007_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_2007_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) < (60))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2007_31_end;
        minibosssamurighthand_1875_instances.clear_selection();
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (-40))) { it.deselect(); continue; }
        }
        if (!minibosssamurighthand_1875_instances.has_selection()) goto event_2007_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)+4);
        }
        minibosssamulefthand_1874_instances.clear_selection();
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+16, 72));
        }
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-4, -40));
        }
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_2007_31_end: ;
}
void Frames::event_func_7420()
{
    // event 2008_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_2008_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) < (60))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2008_31_end;
        minibosssamulefthand_1874_instances.clear_selection();
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (-40))) { it.deselect(); continue; }
        }
        if (!minibosssamulefthand_1874_instances.has_selection()) goto event_2008_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)+4);
        }
        minibosssamurighthand_1875_instances.clear_selection();
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+16, 72));
            ((Active*)*it)->alterables->flags.enable(1);
        }
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-4, -40));
        }
    }
    event_2008_31_end: ;
}
void Frames::event_func_7421()
{
    // event 2009_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_2009_31_end;
        minibosssamulefthand_1874_instances.clear_selection();
        breakablefloor2_1761_instances.clear_selection();
        if (!check_overlap(minibosssamulefthand_1874_instances, breakablefloor2_1761_instances)) goto event_2009_31_end;
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!minibosssamulefthand_1874_instances.has_selection()) goto event_2009_31_end;
        for (ObjectIterator it(breakablefloor2_1761_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->alterables->values.set(24, -6);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 6);
    }
    event_2009_31_end: ;
}
void Frames::event_func_7422()
{
    // event 2010_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_2010_31_end;
        minibosssamulefthand_1874_instances.clear_selection();
        breakablefloor1_1760_instances.clear_selection();
        if (!check_overlap(minibosssamulefthand_1874_instances, breakablefloor1_1760_instances)) goto event_2010_31_end;
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!minibosssamulefthand_1874_instances.has_selection()) goto event_2010_31_end;
        for (ObjectIterator it(breakablefloor1_1760_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->alterables->values.set(24, -6);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 6);
    }
    event_2010_31_end: ;
}
void Frames::event_func_7423()
{
    // event 2011_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_2011_31_end;
        minibosssamulefthand_1874_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(minibosssamulefthand_1874_instances, playercharactersensor_383_instances)) goto event_2011_31_end;
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playercharactersensor_383_instances))->get_y()))) { it.deselect(); continue; }
        }
        if (!minibosssamulefthand_1874_instances.has_selection()) goto event_2011_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_2011_31_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_2011_31_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*-8);
    }
    event_2011_31_end: ;
}
void Frames::event_func_7424()
{
    // event 2012_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_2012_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) < (60))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2012_31_end;
        minibosssamulefthand_1874_instances.clear_selection();
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!minibosssamulefthand_1874_instances.has_selection()) goto event_2012_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2012_31_end;
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+5, -30));
        }
    }
    event_2012_31_end: ;
}
void Frames::event_func_7425()
{
    // event 2013_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_2013_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) < (60))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2013_31_end;
        minibosssamurighthand_1875_instances.clear_selection();
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!minibosssamurighthand_1875_instances.has_selection()) goto event_2013_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2013_31_end;
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-5, 30));
        }
    }
    event_2013_31_end: ;
}
void Frames::event_func_7426()
{
    // event 2014_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_2014_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (60))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2014_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
        minibosssamulefthand_1874_instances.clear_selection();
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
        minibosssamurighthand_1875_instances.clear_selection();
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_2014_31_end: ;
}
void Frames::event_func_7427()
{
    // event 2015_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_2015_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) < (90))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2015_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
    }
    event_2015_31_end: ;
}
void Frames::event_func_7428()
{
    // event 2016_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_2016_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) < (90))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2016_31_end;
        minibosssamulefthand_1874_instances.clear_selection();
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (-40))) { it.deselect(); continue; }
        }
        if (!minibosssamulefthand_1874_instances.has_selection()) goto event_2016_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)+4);
        }
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-8, -40));
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-4, -56));
        }
        minibosssamurighthand_1875_instances.clear_selection();
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+16, 72));
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_2016_31_end: ;
}
void Frames::event_func_7429()
{
    // event 2017_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_2017_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) < (90))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2017_31_end;
        minibosssamurighthand_1875_instances.clear_selection();
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (-40))) { it.deselect(); continue; }
        }
        if (!minibosssamurighthand_1875_instances.has_selection()) goto event_2017_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)+4);
        }
        minibosssamulefthand_1874_instances.clear_selection();
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+16, 72));
            ((Active*)*it)->alterables->flags.enable(1);
        }
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-8, -40));
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+4, 56));
        }
    }
    event_2017_31_end: ;
}
void Frames::event_func_7430()
{
    // event 2018_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_2018_31_end;
        minibosssamurighthand_1875_instances.clear_selection();
        breakablefloor2_1761_instances.clear_selection();
        if (!check_overlap(minibosssamurighthand_1875_instances, breakablefloor2_1761_instances)) goto event_2018_31_end;
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!minibosssamurighthand_1875_instances.has_selection()) goto event_2018_31_end;
        for (ObjectIterator it(breakablefloor2_1761_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->alterables->values.set(24, -6);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 6);
    }
    event_2018_31_end: ;
}
void Frames::event_func_7431()
{
    // event 2019_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_2019_31_end;
        minibosssamurighthand_1875_instances.clear_selection();
        breakablefloor1_1760_instances.clear_selection();
        if (!check_overlap(minibosssamurighthand_1875_instances, breakablefloor1_1760_instances)) goto event_2019_31_end;
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!minibosssamurighthand_1875_instances.has_selection()) goto event_2019_31_end;
        for (ObjectIterator it(breakablefloor1_1760_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->alterables->values.set(24, -6);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 6);
    }
    event_2019_31_end: ;
}
void Frames::event_func_7432()
{
    // event 2020_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_2020_31_end;
        minibosssamurighthand_1875_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(minibosssamurighthand_1875_instances, playercharactersensor_383_instances)) goto event_2020_31_end;
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playercharactersensor_383_instances))->get_y()))) { it.deselect(); continue; }
        }
        if (!minibosssamurighthand_1875_instances.has_selection()) goto event_2020_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_2020_31_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_2020_31_end;
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*-8);
    }
    event_2020_31_end: ;
}
void Frames::event_func_7433()
{
    // event 2021_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_2021_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) < (90))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2021_31_end;
        minibosssamurighthand_1875_instances.clear_selection();
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!minibosssamurighthand_1875_instances.has_selection()) goto event_2021_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2021_31_end;
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-5, 30));
        }
    }
    event_2021_31_end: ;
}
void Frames::event_func_7434()
{
    // event 2022_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_2022_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) < (90))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2022_31_end;
        minibosssamulefthand_1874_instances.clear_selection();
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!minibosssamulefthand_1874_instances.has_selection()) goto event_2022_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2022_31_end;
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+5, -30));
        }
    }
    event_2022_31_end: ;
}
