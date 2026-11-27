#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_9931()
{
    // event 1800_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_neera_attack_selection_1)) goto event_1800_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(4)) == (6))) goto event_1800_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1800_41_end;
        ((Active*)get_instance(npcneera_2464_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(npcneera_2464_instances))->set_direction(1);
    }
    event_1800_41_end: ;
}
void Frames::event_func_9932()
{
    // event 1801_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_neera_attack_selection_1)) goto event_1801_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(4)) == (6))) goto event_1801_41_end;
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(8);
        ((Active*)get_instance(npcneera_2464_instances))->alterables->values.set(9, ((Active*)get_instance(bossneerahitbox_2465_instances, default_active_instance))->alterables->values.get(24));
        ((Active*)get_instance(npcneera_2464_instances))->alterables->values.set(8, ((Active*)get_instance(bossneerahitbox_2465_instances, default_active_instance))->alterables->values.get(23));
        ((Active*)get_instance(npcneera_2464_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(npcneera_2464_instances))->alterables->values.set(5, 0);
    }
    event_1801_41_end: ;
}
void Frames::event_func_9933()
{
    // event 1802_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_neera_attack_selection_1)) goto event_1802_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(4)) == (7))) goto event_1802_41_end;
        ((Active*)get_instance(npcneera_2464_instances))->alterables->values.set(9, get_min(((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(9)+0.25, 15));
        ((Active*)get_instance(npcneera_2464_instances))->alterables->values.add(5, 1);
        {
            ((Active*)get_instance(npcneera_2464_instances))->set_shader(NULL);
        }
    }
    event_1802_41_end: ;
}
void Frames::event_func_9934()
{
    // event 1803_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_neera_attack_selection_1)) goto event_1803_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(4)) == (7))) goto event_1803_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(8)) > (0))) goto event_1803_41_end;
        levelicebarrier_2456_instances.clear_selection();
        for (ObjectIterator it(levelicebarrier_2456_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(npcneera_2464_instances))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(npcneera_2464_instances))->get_x()+48))) { it.deselect(); continue; }
        }
        if (!levelicebarrier_2456_instances.has_selection()) goto event_1803_41_end;
        ((Active*)get_instance(npcneera_2464_instances))->alterables->values.set(8, 0);
    }
    event_1803_41_end: ;
}
void Frames::event_func_9935()
{
    // event 1804_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_neera_attack_selection_1)) goto event_1804_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(4)) == (7))) goto event_1804_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(8)) < (0))) goto event_1804_41_end;
        levelicebarrier_2456_instances.clear_selection();
        for (ObjectIterator it(levelicebarrier_2456_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(npcneera_2464_instances))->get_x()-48))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(npcneera_2464_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!levelicebarrier_2456_instances.has_selection()) goto event_1804_41_end;
        ((Active*)get_instance(npcneera_2464_instances))->alterables->values.set(8, 0);
    }
    event_1804_41_end: ;
}
void Frames::event_func_9936()
{
    // event 1805_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_neera_attack_selection_1)) goto event_1805_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(4)) == (7))) goto event_1805_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(5)) > (18))) goto event_1805_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(9)) > (0))) goto event_1805_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(7)) >= (((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(10)))) goto event_1805_41_end;
        bossneerahitbox_2465_instances.clear_selection();
        for (ObjectIterator it(bossneerahitbox_2465_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossneerahitbox_2465_instances.has_selection()) goto event_1805_41_end;
        ((Active*)get_instance(npcneera_2464_instances))->alterables->values.set(4, 4);
        ((Active*)get_instance(npcneera_2464_instances))->alterables->values.set(9, 0);
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(10);
        ((Active*)get_instance(npcneera_2464_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(npcneera_2464_instances))->alterables->values.set(8, 0);
        media.play_id(SOUND_CAROL_WALL_2_33, -1, 1);
    }
    event_1805_41_end: ;
}
void Frames::event_func_9937()
{
    // event 1806_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_neera_attack_selection_1)) goto event_1806_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(4)) == (7))) goto event_1806_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(5)) > (18))) goto event_1806_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(9)) > (0))) goto event_1806_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(7)) >= (((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(10)))) goto event_1806_41_end;
        bossneerahitbox_2465_instances.clear_selection();
        for (ObjectIterator it(bossneerahitbox_2465_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bossneerahitbox_2465_instances.has_selection()) goto event_1806_41_end;
        ((Active*)get_instance(npcneera_2464_instances))->alterables->values.set(4, 8);
        ((Active*)get_instance(npcneera_2464_instances))->alterables->values.set(9, 0);
        ((Active*)get_instance(npcneera_2464_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(npcneera_2464_instances))->alterables->values.set(8, 0);
        ((Active*)get_instance(npcneera_2464_instances))->set_direction(get_direction_int(((Active*)get_instance(npcneera_2464_instances))->x, ((Active*)get_instance(npcneera_2464_instances))->y, ((Active*)get_instance(player_389_instances))->x + 0, ((Active*)get_instance(player_389_instances))->y + 0));
        media.play_id(SOUND_CAROL_WALL_2_33, -1, 1);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_1500_126);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        if (!group_main_engine_level_specific_methods_submarine_section_1) {
            group_main_engine_level_specific_methods_submarine_section_1 = true;
        }
        media.play_id(SOUND_NE_RRR_2_301, -1, 1);
    }
    event_1806_41_end: ;
}
void Frames::event_func_9938()
{
    // event 1807_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_neera_attack_selection_1)) goto event_1807_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(4)) == (8))) goto event_1807_41_end;
        levelicebarrier_2456_instances.clear_selection();
        for (ObjectIterator it(levelicebarrier_2456_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()-200))) { it.deselect(); continue; }
        }
        if (!levelicebarrier_2456_instances.has_selection()) goto event_1807_41_end;
        for (ObjectIterator it(levelicebarrier_2456_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1807_41_end: ;
}
void Frames::event_func_9939()
{
    // event 1808_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_neera_attack_selection_1)) goto event_1808_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(4)) == (8))) goto event_1808_41_end;
        ((Active*)get_instance(npcneera_2464_instances))->alterables->values.add(5, 1);
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(17);
        ((Active*)get_instance(npcneera_2464_instances))->set_y(((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(10));
    }
    event_1808_41_end: ;
}
void Frames::event_func_9940()
{
    // event 1809_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_neera_attack_selection_1)) goto event_1809_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(4)) == (8))) goto event_1809_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(5)) > (30))) goto event_1809_41_end;
        if (not_always_1809_41 > loop_count) {
            not_always_1809_41 = loop_count + 2;
            goto event_1809_41_end;
        }
        not_always_1809_41 = loop_count + 2;
        {
            loop_next_act_running = true;
            int times = int(1);
            loop_next_act_index = 0;
            while (loop_next_act_index < times) {
                loop_next_act_41();
                if (!loop_next_act_running) break;
                loop_next_act_index++;
            }
        }
    }
    event_1809_41_end: ;
}
void Frames::event_func_9941()
{
    // event 1810_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_neera_attack_selection_1)) goto event_1810_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(4)) == (8))) goto event_1810_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(5)) > (30))) goto event_1810_41_end;
        if (not_always_1810_41 > loop_count) {
            not_always_1810_41 = loop_count + 2;
            goto event_1810_41_end;
        }
        not_always_1810_41 = loop_count + 2;
            group_main_engine_level_specific_methods_bosses_boss_neera_attack_selection_1 = false;
    
            group_main_engine_level_specific_methods_bosses_boss_neera_neera_hit_1 = false;
    
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
            group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_main_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_neera_neera_escapes_1) {
            group_main_engine_level_specific_methods_bosses_boss_neera_neera_escapes_1 = true;
        }
        ((Active*)get_instance(sign_351_instances))->set_x(0);
    }
    event_1810_41_end: ;
}
void Frames::event_func_9942()
{
    // event 1811_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_neera_neera_hit_1)) goto event_1811_41_end;
        bossneerahitbox_2465_instances.clear_selection();
        for (ObjectIterator it(bossneerahitbox_2465_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (1))) { it.deselect(); continue; }
        }
        if (!bossneerahitbox_2465_instances.has_selection()) goto event_1811_41_end;
        if (!(((Active*)get_instance(npcneera_2464_instances))->alterables->flags.is_off(3))) goto event_1811_41_end;
        if (not_always_1811_41 > loop_count) {
            not_always_1811_41 = loop_count + 2;
            goto event_1811_41_end;
        }
        not_always_1811_41 = loop_count + 2;
        {
            ((Active*)get_instance(npcneera_2464_instances))->set_shader(Render::INVERT);
        }
    }
    event_1811_41_end: ;
}
void Frames::event_func_9943()
{
    // event 1812_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_neera_neera_hit_1)) goto event_1812_41_end;
        bossneerahitbox_2465_instances.clear_selection();
        for (ObjectIterator it(bossneerahitbox_2465_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (1))) { it.deselect(); continue; }
        }
        if (!bossneerahitbox_2465_instances.has_selection()) goto event_1812_41_end;
        if (!(((Active*)get_instance(npcneera_2464_instances))->alterables->flags.is_on(3))) goto event_1812_41_end;
        if (not_always_1812_41 > loop_count) {
            not_always_1812_41 = loop_count + 2;
            goto event_1812_41_end;
        }
        not_always_1812_41 = loop_count + 2;
        media.stop_sample(SOUND_COMMON_NULLHIT_2_30);
    }
    event_1812_41_end: ;
}
void Frames::event_func_9944()
{
    // event 1813_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_neera_neera_hit_1)) goto event_1813_41_end;
        bossneerahitbox_2465_instances.clear_selection();
        for (ObjectIterator it(bossneerahitbox_2465_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (4))) { it.deselect(); continue; }
        }
        if (!bossneerahitbox_2465_instances.has_selection()) goto event_1813_41_end;
        if (!(((Active*)get_instance(npcneera_2464_instances))->alterables->flags.is_on(3))) goto event_1813_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(11)) <= (0))) goto event_1813_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(12)) <= (0))) goto event_1813_41_end;
        {
            qualifier_21.clear_selection();
            for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(4))) it.deselect();
            }
        }
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1813_41_end: ;
}
void Frames::event_func_9945()
{
    // event 1814_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_neera_neera_hit_1)) goto event_1814_41_end;
        bossneerahitbox_2465_instances.clear_selection();
        for (ObjectIterator it(bossneerahitbox_2465_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (4))) { it.deselect(); continue; }
        }
        if (!bossneerahitbox_2465_instances.has_selection()) goto event_1814_41_end;
        if (!(((Active*)get_instance(npcneera_2464_instances))->alterables->flags.is_on(3))) goto event_1814_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(11)) <= (0))) goto event_1814_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(12)) <= (0))) goto event_1814_41_end;
        ((Active*)get_instance(npcneera_2464_instances))->alterables->flags.disable(3);
        for (ObjectIterator it(bossneerahitbox_2465_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 30);
        }
        {
            ((Active*)get_instance(npcneera_2464_instances))->set_shader(NULL);
        }
        media.play_id(SOUND_ITEM_SHIELDBREAK_11, -1, 1);
    }
    event_1814_41_end: ;
}
void Frames::event_func_9946()
{
    // event 1815_41
    bool or_result_1815_41 = false;
    bool or_temp_result_1815_41_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_neera_neera_hit_1)) goto or_event_1815_41_0_end;
        bossneerahitbox_2465_instances.clear_selection();
        for (ObjectIterator it(bossneerahitbox_2465_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (1))) { it.deselect(); continue; }
        }
        if (!bossneerahitbox_2465_instances.has_selection()) goto or_event_1815_41_0_end;
        or_result_1815_41 = true;
        or_temp_result_1815_41_0 = true;
    }
    or_event_1815_41_0_end: ;
    bossneerahitbox_2465_instances.clear_saved_selection();
    if (or_temp_result_1815_41_0) {
        bossneerahitbox_2465_instances.save_selection();
    }
    // event 1815_41
    bool or_temp_result_1815_41_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_neera_neera_hit_1)) goto or_event_1815_41_1_end;
        bossneerahitbox_2465_instances.clear_selection();
        for (ObjectIterator it(bossneerahitbox_2465_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (25))) { it.deselect(); continue; }
        }
        if (!bossneerahitbox_2465_instances.has_selection()) goto or_event_1815_41_1_end;
        or_result_1815_41 = true;
        or_temp_result_1815_41_1 = true;
        or_event_1815_41_1_end: ;
        if (or_temp_result_1815_41_1) {
            bossneerahitbox_2465_instances.save_selection();
        }
        if (!or_result_1815_41) goto or_final_or_event_1815_41_1_end;
        bossneerahitbox_2465_instances.clear_selection();
        if (or_temp_result_1815_41_0 || or_temp_result_1815_41_1) {
            bossneerahitbox_2465_instances.restore_selection();
        }
        {
            ((Active*)get_instance(npcneera_2464_instances))->set_shader(NULL);
        }
    }
    or_final_or_event_1815_41_1_end: ;
}
void Frames::event_func_9947()
{
    // event 1816_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_neera_neera_hit_1)) goto event_1816_41_end;
        bossneerahitbox_2465_instances.clear_selection();
        for (ObjectIterator it(bossneerahitbox_2465_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (4))) { it.deselect(); continue; }
        }
        if (!bossneerahitbox_2465_instances.has_selection()) goto event_1816_41_end;
        if (!(((Active*)get_instance(npcneera_2464_instances))->alterables->flags.is_on(3))) goto event_1816_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(11)) <= (0))) goto event_1816_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(12)) > (0))) goto event_1816_41_end;
        {
            qualifier_21.clear_selection();
            for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(4))) it.deselect();
            }
        }
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1816_41_end: ;
}
void Frames::event_func_9948()
{
    // event 1817_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_neera_neera_hit_1)) goto event_1817_41_end;
        bossneerahitbox_2465_instances.clear_selection();
        for (ObjectIterator it(bossneerahitbox_2465_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (4))) { it.deselect(); continue; }
        }
        if (!bossneerahitbox_2465_instances.has_selection()) goto event_1817_41_end;
        if (!(((Active*)get_instance(npcneera_2464_instances))->alterables->flags.is_on(3))) goto event_1817_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(11)) <= (0))) goto event_1817_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(12)) > (0))) goto event_1817_41_end;
        ((Active*)get_instance(npcneera_2464_instances))->alterables->values.sub(12, 1);
        {
            ((Active*)get_instance(npcneera_2464_instances))->set_shader(NULL);
        }
        media.play_id(SOUND_ITEM_SHIELDHIT_317, -1, 1);
        ((Active*)get_instance(npcneera_2464_instances))->alterables->values.set(11, 30);
    }
    event_1817_41_end: ;
}
void Frames::event_func_9949()
{
    // event 1818_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_neera_neera_hit_1)) goto event_1818_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(11)) > (0))) goto event_1818_41_end;
        ((Active*)get_instance(npcneera_2464_instances))->alterables->values.sub(11, 1);
        bossneerahitbox_2465_instances.clear_selection();
        for (ObjectIterator it(bossneerahitbox_2465_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
    }
    event_1818_41_end: ;
}
void Frames::event_func_9950()
{
    // event 1819_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_neera_neera_hit_1)) goto event_1819_41_end;
        bossneerahitbox_2465_instances.clear_selection();
        for (ObjectIterator it(bossneerahitbox_2465_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(5))) { it.deselect(); continue; }
        }
        if (!bossneerahitbox_2465_instances.has_selection()) goto event_1819_41_end;
        if (!(((Active*)get_instance(npcneera_2464_instances))->alterables->flags.is_off(3))) goto event_1819_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(11)) <= (0))) goto event_1819_41_end;
        for (ObjectIterator it(bossneerahitbox_2465_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(5);
        }
    }
    event_1819_41_end: ;
}
void Frames::event_func_9951()
{
    // event 1820_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_neera_neera_hit_1)) goto event_1820_41_end;
        bossneerahitbox_2465_instances.clear_selection();
        for (ObjectIterator it(bossneerahitbox_2465_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)*it)->alterables->values.get(3)*35))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossneerahitbox_2465_instances.has_selection()) goto event_1820_41_end;
        for (ObjectIterator it(bossneerahitbox_2465_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
        }
        ((Active*)get_instance(npcneera_2464_instances))->alterables->values.set(4, 6);
        ((Active*)get_instance(npcneera_2464_instances))->alterables->flags.enable(4);
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_n_hit_190+number_to_string(randrange(2)));
            if (dyn_it == (*loops).end()) goto dynamic_1820_41_0_end;
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
        dynamic_1820_41_0_end: ;
        media.play_id(SOUND_NE_HURT_2_298, -1, 1);
        ((Active*)get_instance(npcneera_2464_instances))->alterables->flags.disable(5);
    }
    event_1820_41_end: ;
}
void Frames::event_func_9952()
{
    // event 1821_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_neera_neera_hit_1)) goto event_1821_41_end;
        bossneerahitbox_2465_instances.clear_selection();
        for (ObjectIterator it(bossneerahitbox_2465_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bossneerahitbox_2465_instances.has_selection()) goto event_1821_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(4)) < (6))) goto event_1821_41_end;
        for (ObjectIterator it(bossneerahitbox_2465_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
        }
        ((Active*)get_instance(npcneera_2464_instances))->alterables->values.set(4, 6);
        ((Active*)get_instance(npcneera_2464_instances))->alterables->flags.enable(4);
        media.play_id(SOUND_COMMON_PLAYERHIT_2_25, -1, 1);
        FrameObject * single_instance_1821_41_0; single_instance_1821_41_0 = NULL;
        // select single: true false false
        bossicering_2457_instances.clear_selection();
        for (ObjectIterator p_it(bossicering_2457_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1821_41_0 == NULL)
                    single_instance_1821_41_0 = new_obj;
            }
        }
        for (ObjectIterator it(bossicering_2457_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1821_41_end: ;
}
void Frames::event_func_9953()
{
    // event 1822_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_neera_neera_escapes_1)) goto event_1822_41_end;
        if (not_always_1822_41 > loop_count) {
            not_always_1822_41 = loop_count + 2;
            goto event_1822_41_end;
        }
        not_always_1822_41 = loop_count + 2;
        bosshovercopsiren3_2330_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren3_2330_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        bosshovercopsiren4_2329_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren4_2329_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        bosshovercopturbine2_2331_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine2_2331_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        bosshovercoppropellor2_2335_instances.clear_selection();
        for (ObjectIterator it(bosshovercoppropellor2_2335_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        ((Active*)get_instance(bosshovercop_2332_instances))->move_front();
        bosshovercopturbine1_2333_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine1_2333_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        bosshovercoppropellor_2334_instances.clear_selection();
        for (ObjectIterator it(bosshovercoppropellor_2334_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        bosshovercopsiren1_2336_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren1_2336_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        bosshovercopsiren2_2337_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren2_2337_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        ((Active*)get_instance(levelhovercraftlight_2451_instances))->move_front();
    }
    event_1822_41_end: ;
}
void Frames::event_func_9954()
{
    // event 1823_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_neera_neera_escapes_1)) goto event_1823_41_end;
        minibossrailing_923_instances.clear_selection();
        for (ObjectIterator it(minibossrailing_923_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(width+200);
        }
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.set(4, get_min(((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(4)+0.2, 10));
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.set(3, 1);
    }
    event_1823_41_end: ;
}
void Frames::event_func_9955()
{
    // event 1824_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_neera_neera_escapes_1)) goto event_1824_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->get_x()) < (((Active*)get_instance(bosshovercop_2332_instances))->get_x()))) goto event_1824_41_end;
        ((Active*)get_instance(npcneera_2464_instances))->alterables->values.set(4, 0);
    }
    event_1824_41_end: ;
}
void Frames::event_func_9956()
{
    // event 1825_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_neera_neera_escapes_1)) goto event_1825_41_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->alterables->values.get(4)) == (0))) goto event_1825_41_end;
        ((Active*)get_instance(npcneera_2464_instances))->move_back(((Active*)get_instance(bosshovercop_2332_instances)));
        ((Active*)get_instance(npcneera_2464_instances))->move_front(((Active*)get_instance(bosshovercopturbine2_2331_instances)));
        {
            FrameObject * parent = ((Active*)get_instance(bosshovercop_2332_instances));
            if (parent == NULL) goto pos_end_1825_41_0;
            ((Active*)get_instance(npcneera_2464_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + -50);
            pos_end_1825_41_0: ;
        }
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(0);
        ((Active*)get_instance(npcneera_2464_instances))->set_direction(1);
    }
    event_1825_41_end: ;
}
void Frames::event_func_9957()
{
    // event 1826_41
    {
        if (!(group_main_engine_1)) goto event_1826_41_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1826_41_end;
        bossicering_2457_instances.clear_selection();
        for (ObjectIterator it(bossicering_2457_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1826_41_end: ;
}
void Frames::event_func_9958()
{
    // event 1827_41
    {
        if (!(group_main_engine_1)) goto event_1827_41_end;
        bossicering_2457_instances.clear_selection();
        for (ObjectIterator it(bossicering_2457_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!bossicering_2457_instances.has_selection()) goto event_1827_41_end;
        FrameObject * single_instance_1827_41_0; single_instance_1827_41_0 = pick_random(bossicering_2457_instances);
        if (single_instance_1827_41_0 == NULL) goto event_1827_41_end;
        ((Active*)((Active*)single_instance_1827_41_0))->alterables->flags.disable(1);
        FrameObject * single_instance_1827_41_1; single_instance_1827_41_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_ringsparkle_139(((Active*)single_instance_1827_41_0)->x + 0, ((Active*)single_instance_1827_41_0)->y + 0), ((Active*)single_instance_1827_41_0)->layer);
            if (single_instance_1827_41_1 == NULL)
                single_instance_1827_41_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1827_41_1))->set_x(((Active*)single_instance_1827_41_0)->get_x()-16+randrange(33));
        ((Active*)((Active*)single_instance_1827_41_1))->set_y(((Active*)single_instance_1827_41_0)->get_y()-16+randrange(33));
    }
    event_1827_41_end: ;
}
void Frames::event_func_9959()
{
    // event 1833_41
    {
        if (!(group_main_engine_1)) goto event_1833_41_end;
        bossicering_2457_instances.clear_selection();
        for (ObjectIterator it(bossicering_2457_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (2))) { it.deselect(); continue; }
        }
        if (!bossicering_2457_instances.has_selection()) goto event_1833_41_end;
        for (ObjectIterator it(bossicering_2457_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1833_41_0; single_instance_1833_41_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossicering_2457_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1833_41_0 == NULL)
                    single_instance_1833_41_0 = new_obj;
            }
        }
    }
    event_1833_41_end: ;
}
void Frames::event_func_9960()
{
    // event 1834_41
    {
        if (!(group_main_engine_1)) goto event_1834_41_end;
        if (!((bossicering_2457_instances.size()) > (0))) goto event_1834_41_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1834_41_end;
        bossicering_2457_instances.clear_selection();
        player_389_instances.clear_selection();
        if (!check_overlap(bossicering_2457_instances, player_389_instances)) goto event_1834_41_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.set(5, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 30);
        ((Active*)get_instance(playerskinsash_418_instances))->set_blend_color(make_color_int(160, 192, 255));
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(160, 192, 255));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(160, 192, 255));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(160, 192, 255));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(160, 192, 255));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(160, 192, 255));
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_blend_color(make_color_int(160, 192, 255));
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(160, 192, 255));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(160, 192, 255));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(160, 192, 255));
        }
        for (ObjectIterator it(bossicering_2457_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1834_41_0; single_instance_1834_41_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossicering_2457_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1834_41_0 == NULL)
                    single_instance_1834_41_0 = new_obj;
            }
        }
    }
    event_1834_41_end: ;
}
void Frames::event_func_9961()
{
    // event 1840_41
    {
        if (!(group_main_engine_1)) goto event_1840_41_end;
        bossicemissile_2433_instances.clear_selection();
        for (ObjectIterator it(bossicemissile_2433_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playercharactersensor_383_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!bossicemissile_2433_instances.has_selection()) goto event_1840_41_end;
        for (ObjectIterator it(bossicemissile_2433_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->set_visible(false);
        }
        FrameObject * single_instance_1840_41_0; single_instance_1840_41_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossicemissile_2433_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectstickyice_2431(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1840_41_0 == NULL)
                    single_instance_1840_41_0 = new_obj;
            }
        }
        FrameObject * single_instance_1840_41_1; single_instance_1840_41_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossicemissile_2433_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1840_41_1 == NULL)
                    single_instance_1840_41_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1840_41_1))->force_speed(50);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 5));
        media.play_id(SOUND_SENTINEL_SHOT_77, -1, 1);
        media.play_id(SOUND_COMMON_EXPLODE2_98, -1, 1);
        ((Active*)((Active*)single_instance_1840_41_0))->set_scale(3);
    }
    event_1840_41_end: ;
}
void Frames::event_func_9962()
{
    // event 1841_41
    {
        if (!(group_main_engine_1)) goto event_1841_41_end;
        bossicemissile_2433_instances.clear_selection();
        for (ObjectIterator it(bossicemissile_2433_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playercharactersensor_383_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!bossicemissile_2433_instances.has_selection()) goto event_1841_41_end;
        for (ObjectIterator it(bossicemissile_2433_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->set_visible(false);
        }
        FrameObject * single_instance_1841_41_0; single_instance_1841_41_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossicemissile_2433_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectstickyice_2431(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1841_41_0 == NULL)
                    single_instance_1841_41_0 = new_obj;
            }
        }
        FrameObject * single_instance_1841_41_1; single_instance_1841_41_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossicemissile_2433_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1841_41_1 == NULL)
                    single_instance_1841_41_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1841_41_1))->force_speed(50);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 5));
        media.play_id(SOUND_SENTINEL_SHOT_77, -1, 1);
        media.play_id(SOUND_COMMON_EXPLODE2_98, -1, 1);
        ((Active*)((Active*)single_instance_1841_41_0))->set_scale(3);
    }
    event_1841_41_end: ;
}
void Frames::event_func_9963()
{
    // event 1851_41
    {
        if (!(group_main_engine_1)) goto event_1851_41_end;
        bossicecrystal_2430_instances.clear_selection();
        for (ObjectIterator it(bossicecrystal_2430_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!bossicecrystal_2430_instances.has_selection()) goto event_1851_41_end;
        for (ObjectIterator it(bossicecrystal_2430_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->set_visible(false);
        }
        FrameObject * single_instance_1851_41_0; single_instance_1851_41_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossicecrystal_2430_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectstickyice_2431(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1851_41_0 == NULL)
                    single_instance_1851_41_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1851_41_0))->set_angle(-30+randrange(61), 0);
        for (ObjectIterator it(bossicecrystal_2430_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
        media.play_id(SOUND_SENTINEL_SHOT_77, -1, 1);
        FrameObject * single_instance_1851_41_1; single_instance_1851_41_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossicecrystal_2430_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswatersplash_416(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1851_41_1 == NULL)
                    single_instance_1851_41_1 = new_obj;
            }
        }
    }
    event_1851_41_end: ;
}
void Frames::event_func_9964()
{
    // event 1863_41
    {
        if (!(group_main_engine_1)) goto event_1863_41_end;
        if (!((global_values->get(4)) >= (10))) goto event_1863_41_end;
        if (once_condition_1863_41) goto event_1863_41_end;
        once_condition_1863_41 = true;
        if (!group_main_engine_level_specific_methods_bosses_boss_neera_neera_escapes_1) {
            group_main_engine_level_specific_methods_bosses_boss_neera_neera_escapes_1 = true;
        }
        if (!group_main_engine_level_specific_methods_submarine_section_1) {
            group_main_engine_level_specific_methods_submarine_section_1 = true;
        }
        levelicebarrier_2456_instances.clear_selection();
        for (ObjectIterator it(levelicebarrier_2456_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1863_41_end: ;
}
void Frames::event_func_9965()
{
    // event 1864_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_submarine_section_1)) goto event_1864_41_end;
        if (!((((Active*)get_instance(levelparalaxwatersurface_7_instances))->alterables->values.get(0)) > (-600))) goto event_1864_41_end;
        ((Active*)get_instance(levelparalaxwatersurface_7_instances))->alterables->values.sub(0, 2);
    }
    event_1864_41_end: ;
}
void Frames::event_func_9966()
{
    // event 1865_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_submarine_section_1)) goto event_1865_41_end;
        if (!((((Active*)get_instance(levelparalaxwatersurface_7_instances))->alterables->values.get(1)) < (600))) goto event_1865_41_end;
        ((Active*)get_instance(levelparalaxwatersurface_7_instances))->alterables->values.add(1, 1);
    }
    event_1865_41_end: ;
}
void Frames::event_func_9967()
{
    // event 1866_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_submarine_section_1)) goto event_1866_41_end;
        if (!((((Active*)get_instance(player_389_instances))->layer->index+1) >= (5))) goto event_1866_41_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1866_41_end;
        if (!((((Active*)get_instance(levelparalaxwatersurface_7_instances))->alterables->values.get(1)) < (600))) goto event_1866_41_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(23, 1);
    }
    event_1866_41_end: ;
}
void Frames::event_func_9968()
{
    // event 1867_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_submarine_section_1)) goto event_1867_41_end;
        ((LayerObject*)get_instance(layerobject_10_instances))->set_y(5-1, ((Active*)get_instance(levelparalaxwatersurface_7_instances))->alterables->values.get(0)+sin_deg(global_values->get(3)%math_helper%360)*40);
        ((LayerObject*)get_instance(layerobject_10_instances))->set_x(5-1, ((Active*)get_instance(levelparalaxwatersurface_7_instances))->alterables->values.get(1));
        ((LayerObject*)get_instance(layerobject_10_instances))->set_y(6-1, ((Active*)get_instance(levelparalaxwatersurface_7_instances))->alterables->values.get(0)+sin_deg(global_values->get(3)%math_helper%360)*40);
        ((LayerObject*)get_instance(layerobject_10_instances))->set_x(6-1, ((Active*)get_instance(levelparalaxwatersurface_7_instances))->alterables->values.get(1));
    }
    event_1867_41_end: ;
}
void Frames::event_func_9969()
{
    // event 1868_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_submarine_section_1)) goto event_1868_41_end;
        if (!((((Active*)get_instance(player_389_instances))->layer->index+1) < (5))) goto event_1868_41_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, ((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x());
    }
    event_1868_41_end: ;
}
void Frames::event_func_9970()
{
    // event 1869_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_submarine_section_1)) goto event_1869_41_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (10580))) goto event_1869_41_end;
        if (!((((Active*)get_instance(player_389_instances))->layer->index+1) < (5))) goto event_1869_41_end;
        ((Active*)get_instance(playerstartingpoint_358_instances))->set_layer(5-1);
        {
            loop_update_layer_running = true;
            int times = int(1);
            loop_update_layer_index = 0;
            while (loop_update_layer_index < times) {
                loop_update_layer_41();
                if (!loop_update_layer_running) break;
                loop_update_layer_index++;
            }
        }
    }
    event_1869_41_end: ;
}
void Frames::event_func_9971()
{
    // event 1870_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_submarine_section_1)) goto event_1870_41_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (10580))) goto event_1870_41_end;
        if (!((((Active*)get_instance(player_389_instances))->layer->index+1) >= (5))) goto event_1870_41_end;
        ((Active*)get_instance(playerstartingpoint_358_instances))->set_layer(4-1);
        {
            loop_update_layer_running = true;
            int times = int(1);
            loop_update_layer_index = 0;
            while (loop_update_layer_index < times) {
                loop_update_layer_41();
                if (!loop_update_layer_running) break;
                loop_update_layer_index++;
            }
        }
    }
    event_1870_41_end: ;
}
void Frames::event_func_9972()
{
    // event 1872_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_submarine_section_1)) goto event_1872_41_end;
        if (once_condition_1872_41) goto event_1872_41_end;
        once_condition_1872_41 = true;
        hazardtorpedolauncher_2496_instances.clear_selection();
        spread_value(hazardtorpedolauncher_2496_instances, 0, 0);
        for (ObjectIterator it(hazardtorpedolauncher_2496_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)*7)%math_helper%150);
        }
    }
    event_1872_41_end: ;
}
void Frames::event_func_9973()
{
    // event 1873_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_submarine_section_1)) goto event_1873_41_end;
        hazardtorpedolauncher_2496_instances.clear_selection();
        for (ObjectIterator it(hazardtorpedolauncher_2496_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(1)/math_helper/10);
        }
    }
    event_1873_41_end: ;
}
void Frames::event_func_9974()
{
    // event 1874_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_submarine_section_1)) goto event_1874_41_end;
        hazardtorpedolauncher_2496_instances.clear_selection();
        for (ObjectIterator it(hazardtorpedolauncher_2496_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (60))) { it.deselect(); continue; }
        }
        if (!hazardtorpedolauncher_2496_instances.has_selection()) goto event_1874_41_end;
        for (ObjectIterator it(hazardtorpedolauncher_2496_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1874_41_end: ;
}
void Frames::event_func_9975()
{
    // event 1875_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_submarine_section_1)) goto event_1875_41_end;
        hazardtorpedolauncher_2496_instances.clear_selection();
        for (ObjectIterator it(hazardtorpedolauncher_2496_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (90))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-120)) { it.deselect(); continue; }
        }
        if (!hazardtorpedolauncher_2496_instances.has_selection()) goto event_1875_41_end;
        for (ObjectIterator it(hazardtorpedolauncher_2496_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        FrameObject * single_instance_1875_41_0; single_instance_1875_41_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(hazardtorpedolauncher_2496_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibosstreddbomb_1015(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1875_41_0 == NULL)
                    single_instance_1875_41_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1875_41_0))->alterables->values.set(1, -10);
        ((Active*)((Active*)single_instance_1875_41_0))->set_angle(180, 0);
        FrameObject * single_instance_1875_41_1; single_instance_1875_41_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(hazardtorpedolauncher_2496_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1875_41_1 == NULL)
                    single_instance_1875_41_1 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_EXPLODE4_99, -1, 1);
    }
    event_1875_41_end: ;
}
void Frames::event_func_9976()
{
    // event 1876_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_submarine_section_1)) goto event_1876_41_end;
        hazardtorpedolauncher_2496_instances.clear_selection();
        for (ObjectIterator it(hazardtorpedolauncher_2496_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (120))) { it.deselect(); continue; }
        }
        if (!hazardtorpedolauncher_2496_instances.has_selection()) goto event_1876_41_end;
        for (ObjectIterator it(hazardtorpedolauncher_2496_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1876_41_end: ;
}
void Frames::event_func_9977()
{
    // event 1877_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_submarine_section_1)) goto event_1877_41_end;
        hazardtorpedolauncher_2496_instances.clear_selection();
        for (ObjectIterator it(hazardtorpedolauncher_2496_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (150))) { it.deselect(); continue; }
        }
        if (!hazardtorpedolauncher_2496_instances.has_selection()) goto event_1877_41_end;
        for (ObjectIterator it(hazardtorpedolauncher_2496_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 180);
        }
    }
    event_1877_41_end: ;
}
void Frames::event_func_9978()
{
    // event 1878_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_submarine_section_1)) goto event_1878_41_end;
        hazardtorpedolauncher_2496_instances.clear_selection();
        for (ObjectIterator it(hazardtorpedolauncher_2496_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!hazardtorpedolauncher_2496_instances.has_selection()) goto event_1878_41_end;
        for (ObjectIterator it(hazardtorpedolauncher_2496_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-2, 0));
        }
    }
    event_1878_41_end: ;
}
void Frames::event_func_9979()
{
    // event 1879_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_submarine_section_1)) goto event_1879_41_end;
        hazardtorpedolauncher_2496_instances.clear_selection();
        for (ObjectIterator it(hazardtorpedolauncher_2496_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!hazardtorpedolauncher_2496_instances.has_selection()) goto event_1879_41_end;
        for (ObjectIterator it(hazardtorpedolauncher_2496_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+2, 40));
        }
    }
    event_1879_41_end: ;
}
void Frames::event_func_9980()
{
    // event 1880_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_submarine_section_1)) goto event_1880_41_end;
        minibosstreddbomb_1015_instances.clear_selection();
        for (ObjectIterator it(minibosstreddbomb_1015_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!minibosstreddbomb_1015_instances.has_selection()) goto event_1880_41_end;
        for (ObjectIterator it(minibosstreddbomb_1015_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_y());
        }
    }
    event_1880_41_end: ;
}
void Frames::event_func_9981()
{
    // event 1881_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_submarine_section_1)) goto event_1881_41_end;
        minibosstreddbomb_1015_instances.clear_selection();
        for (ObjectIterator it(minibosstreddbomb_1015_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+0.3, 12));
        }
    }
    event_1881_41_end: ;
}
void Frames::event_func_9982()
{
    // event 1882_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_submarine_section_1)) goto event_1882_41_end;
        minibosstreddbomb_1015_instances.clear_selection();
        for (ObjectIterator it(minibosstreddbomb_1015_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (-2))) { it.deselect(); continue; }
        }
        if (!minibosstreddbomb_1015_instances.has_selection()) goto event_1882_41_end;
        for (ObjectIterator it(minibosstreddbomb_1015_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(get_max(((Active*)*it)->alterables->values.get(1)-5, 0), 0);
        }
    }
    event_1882_41_end: ;
}
void Frames::event_func_9983()
{
    // event 1883_41
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_submarine_section_1)) goto event_1883_41_end;
        minibosstreddbomb_1015_instances.clear_selection();
        for (ObjectIterator it(minibosstreddbomb_1015_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!minibosstreddbomb_1015_instances.has_selection()) goto event_1883_41_end;
        if (!((((Active*)get_single(minibosstreddbomb_1015_instances, default_active_instance))->layer->index+1) != (((Active*)get_instance(player_389_instances))->layer->index+1))) goto event_1883_41_end;
        for (ObjectIterator it(minibosstreddbomb_1015_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        }
    }
    event_1883_41_end: ;
}
void Frames::event_func_9984()
{
    // event 1886_41
    {
        if (!(group_main_engine_1)) goto event_1886_41_end;
        if (!((global_values->get(3)%math_helper%4) == (1))) goto event_1886_41_end;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.sub(5, 384);
        levelicebarrier_2456_instances.clear_selection();
        for (ObjectIterator it(levelicebarrier_2456_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1886_41_end: ;
}
void Frames::event_func_9985()
{
    // event 2124_41
    {
        if (!(group_pause_1)) goto event_2124_41_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_2124_41_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2124_41_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_2124_41_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_2124_41_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(true);
        media.pause_samples();
            group_main_engine_1 = false;
    
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 5);
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerskinsash_418_instances))->stop_animation();
        ((Active*)get_instance(playerskinsashhair_417_instances))->stop_animation();
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
        enemypellet_863_instances.clear_selection();
        for (ObjectIterator it(enemypellet_863_instances); !it.end(); ++it) {
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
        effectfallingleaf_2323_instances.clear_selection();
        for (ObjectIterator it(effectfallingleaf_2323_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectwhisp_656_instances.clear_selection();
        for (ObjectIterator it(effectwhisp_656_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(npcneera_2464_instances))->stop_animation();
        ((Active*)get_instance(levelparalaxwatersurface_7_instances))->stop_animation();
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(objectjumppad_530_instances))->stop_animation();
        bossicering_2457_instances.clear_selection();
        for (ObjectIterator it(bossicering_2457_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bosshovercopsiren4_2329_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren4_2329_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bosshovercopsiren3_2330_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren3_2330_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bosshovercopsiren1_2336_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren1_2336_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bosshovercopsiren2_2337_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren2_2337_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(levelhovercraftlight_2451_instances))->stop_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        mediumbubble_769_instances.clear_selection();
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bubblepatch_806_instances))->stop_animation();
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
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        enemymeteorrollerflame_2420_instances.clear_selection();
        for (ObjectIterator it(enemymeteorrollerflame_2420_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemysharktorpedo2_2328_instances.clear_selection();
        for (ObjectIterator it(enemysharktorpedo2_2328_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemybuoybullet2_2326_instances.clear_selection();
        for (ObjectIterator it(enemybuoybullet2_2326_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemybuoybullet_2325_instances.clear_selection();
        for (ObjectIterator it(enemybuoybullet_2325_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        badnikgolemshot2_1198_instances.clear_selection();
        for (ObjectIterator it(badnikgolemshot2_1198_instances); !it.end(); ++it) {
            ((Active*)*it)->advance_movement(+1);
        }
        gimmickflyingleafplatform_2460_instances.clear_selection();
        for (ObjectIterator it(gimmickflyingleafplatform_2460_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(bossicering_2457_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        generalwaterhorizon_415_instances.clear_selection();
        for (ObjectIterator it(generalwaterhorizon_415_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(gimmickseedspawner_2422_instances))->stop_animation();
    }
    event_2124_41_end: ;
}
void Frames::event_func_9986()
{
    // event 2125_41
    bool or_result_2125_41 = false;
    bool or_temp_result_2125_41_0 = false;
    {
        if (!(group_pause_1)) goto or_event_2125_41_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_2125_41_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2125_41_0_end;
        or_result_2125_41 = true;
        or_temp_result_2125_41_0 = true;
    }
    or_event_2125_41_0_end: ;
    // event 2125_41
    bool or_temp_result_2125_41_1 = false;
    {
        if (!(group_pause_1)) goto or_event_2125_41_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_2125_41_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2125_41_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_2125_41_1_end;
        or_result_2125_41 = true;
        or_temp_result_2125_41_1 = true;
        or_event_2125_41_1_end: ;
        if (!or_result_2125_41) goto or_final_or_event_2125_41_1_end;
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
        ((Active*)get_instance(playerskinsash_418_instances))->start_animation();
        ((Active*)get_instance(playerskinsashhair_417_instances))->start_animation();
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
        enemypellet_863_instances.clear_selection();
        for (ObjectIterator it(enemypellet_863_instances); !it.end(); ++it) {
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
        effectfallingleaf_2323_instances.clear_selection();
        for (ObjectIterator it(effectfallingleaf_2323_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        effectwhisp_656_instances.clear_selection();
        for (ObjectIterator it(effectwhisp_656_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(npcneera_2464_instances))->start_animation();
        ((Active*)get_instance(levelparalaxwatersurface_7_instances))->start_animation();
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(objectjumppad_530_instances))->start_animation();
        bossicering_2457_instances.clear_selection();
        for (ObjectIterator it(bossicering_2457_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bosshovercopsiren4_2329_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren4_2329_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bosshovercopsiren3_2330_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren3_2330_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bosshovercopsiren1_2336_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren1_2336_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bosshovercopsiren2_2337_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren2_2337_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(levelhovercraftlight_2451_instances))->start_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        mediumbubble_769_instances.clear_selection();
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bubblepatch_806_instances))->start_animation();
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
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->start_animation();
        enemymeteorrollerflame_2420_instances.clear_selection();
        for (ObjectIterator it(enemymeteorrollerflame_2420_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemysharktorpedo2_2328_instances.clear_selection();
        for (ObjectIterator it(enemysharktorpedo2_2328_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemybuoybullet2_2326_instances.clear_selection();
        for (ObjectIterator it(enemybuoybullet2_2326_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemybuoybullet_2325_instances.clear_selection();
        for (ObjectIterator it(enemybuoybullet_2325_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        badnikgolemshot2_1198_instances.clear_selection();
        for (ObjectIterator it(badnikgolemshot2_1198_instances); !it.end(); ++it) {
            ((Active*)*it)->advance_movement(-1);
        }
        gimmickflyingleafplatform_2460_instances.clear_selection();
        for (ObjectIterator it(gimmickflyingleafplatform_2460_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(bossicering_2457_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        generalwaterhorizon_415_instances.clear_selection();
        for (ObjectIterator it(generalwaterhorizon_415_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(gimmickseedspawner_2422_instances))->start_animation();
    }
    or_final_or_event_2125_41_1_end: ;
}
void Frames::handle_frame_42_events()
{
    test_collisions_41();
    event_func_1647();
    event_func_1680();
    event_func_1697();
    event_func_1733();
    event_func_1823();
    event_func_1824();
    event_func_1825();
    event_func_1833();
    event_func_1863();
    event_func_1864();
    event_func_1865();
    event_func_1957();
    event_func_2128();
    event_func_2167();
    event_func_2266();
    event_func_2270();
    event_func_2650();
    if (!group_main_engine_1) goto group_main_engine_1_end;
    event_func_1349();
    if (!group_main_engine_global_methods_player_1) goto group_main_engine_global_methods_player_1_end;
    event_func_1350();
    event_func_1351();
    event_func_1352();
    event_func_1353();
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
    event_func_1406();
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
    event_func_1423();
    group_main_engine_global_methods_player_player_movement_1_end: ;
    event_func_3721();
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
    event_func_1449();
    event_func_1450();
    event_func_1451();
    event_func_1452();
    event_func_1453();
    event_func_1454();
    event_func_1455();
    event_func_1456();
    event_func_1457();
    event_func_1458();
    event_func_1459();
    event_func_1460();
    event_func_1461();
    event_func_1462();
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
    event_func_1472();
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
    event_func_1484();
    event_func_1485();
    event_func_1486();
    event_func_1487();
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
    event_func_1541();
    event_func_1542();
    event_func_1543();
    event_func_1544();
    event_func_1545();
    event_func_1546();
    event_func_1547();
    event_func_1548();
    event_func_1549();
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
    event_func_1570();
    event_func_1571();
    event_func_1572();
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
    event_func_1604();
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
    event_func_1636();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1_end;
    event_func_1637();
    event_func_1638();
    event_func_1639();
    event_func_1640();
    event_func_1641();
    event_func_1642();
    event_func_1643();
    event_func_1644();
    event_func_1645();
    event_func_1646();
    event_func_1648();
    event_func_1649();
    event_func_1650();
    event_func_1651();
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
    event_func_1676();
    event_func_1677();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1_end;
    event_func_1678();
    event_func_1679();
    event_func_1681();
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
    event_func_1693();
    event_func_1694();
    event_func_1695();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1_end;
    event_func_1696();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1_end;
    event_func_1698();
    event_func_1699();
    event_func_1700();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1_end;
    event_func_1701();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1_end;
    event_func_1702();
    event_func_1703();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1_end;
    event_func_1704();
    event_func_1705();
    event_func_1706();
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
    event_func_1726();
    event_func_1727();
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
    event_func_1732();
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
    event_func_3724();
    event_func_3725();
    event_func_1748();
    event_func_3726();
    event_func_3727();
    event_func_1751();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end;
    event_func_1752();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1) goto group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1_end;
    event_func_1753();
    event_func_3728();
    event_func_1755();
    event_func_1756();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1758();
    event_func_1759();
    event_func_1760();
    event_func_9660();
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
    event_func_9661();
    event_func_1778();
    event_func_1779();
    event_func_1780();
    event_func_1781();
    event_func_1782();
    event_func_1783();
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
    event_func_1791();
    event_func_1792();
    event_func_1793();
    event_func_1794();
    event_func_1795();
    event_func_1796();
    event_func_1797();
    event_func_1798();
    event_func_1799();
    event_func_1800();
    event_func_1801();
    event_func_1802();
    event_func_1803();
    event_func_1804();
    event_func_1805();
    event_func_1806();
    event_func_1807();
    event_func_1808();
    event_func_1809();
    event_func_1810();
    event_func_1811();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1_end;
    event_func_1812();
    event_func_1813();
    event_func_1814();
    event_func_1815();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end;
    event_func_1816();
    event_func_1817();
    event_func_1818();
    event_func_1819();
    event_func_1820();
    event_func_1821();
    event_func_1822();
    event_func_1826();
    event_func_1827();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end;
    event_func_1828();
    event_func_1829();
    event_func_1830();
    event_func_1831();
    event_func_1832();
    event_func_1834();
    event_func_1835();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1_end;
    event_func_1836();
    event_func_1837();
    event_func_1838();
    event_func_1839();
    event_func_1840();
    event_func_1841();
    event_func_1842();
    event_func_1843();
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
    event_func_1866();
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
    event_func_9662();
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
    event_func_1972();
    event_func_1973();
    event_func_1974();
    event_func_1973();
    event_func_1975();
    event_func_1976();
    event_func_1977();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1_end;
    event_func_1978();
    event_func_1979();
    event_func_2826();
    event_func_2827();
    event_func_1980();
    event_func_1981();
    event_func_1982();
    event_func_1983();
    event_func_1984();
    event_func_1985();
    event_func_1986();
    event_func_2828();
    event_func_1987();
    event_func_2829();
    event_func_1988();
    event_func_1989();
    event_func_2830();
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
    event_func_2042();
    event_func_2043();
    event_func_2044();
    event_func_2045();
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
    event_func_2141();
    event_func_2142();
    event_func_2143();
    event_func_1301();
    event_func_2144();
    event_func_1302();
    event_func_2145();
    event_func_2146();
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1_end: ;
    event_func_1189();
    event_func_2147();
    event_func_2148();
    event_func_2149();
    event_func_2150();
    event_func_2151();
    event_func_2152();
    event_func_2153();
    event_func_2154();
    event_func_2155();
    event_func_2156();
    event_func_2157();
    event_func_2158();
    event_func_2159();
    event_func_2160();
    event_func_2161();
    event_func_2162();
    event_func_2163();
    event_func_2164();
    event_func_2165();
    event_func_2166();
    event_func_2168();
    event_func_2169();
    event_func_2170();
    event_func_2171();
    event_func_2172();
    event_func_2173();
    event_func_2174();
    event_func_2175();
    event_func_2176();
    event_func_2177();
    event_func_2178();
    event_func_2179();
    event_func_2180();
    event_func_2181();
    event_func_2182();
    event_func_2183();
    event_func_2184();
    event_func_2185();
    event_func_2186();
    event_func_2187();
    event_func_2188();
    event_func_2189();
    event_func_2190();
    event_func_2191();
    event_func_2192();
    event_func_2193();
    event_func_2194();
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
    event_func_2214();
    event_func_2215();
    event_func_2216();
    event_func_2217();
    event_func_2218();
    event_func_2219();
    event_func_2220();
    event_func_2221();
    event_func_2222();
    event_func_2223();
    event_func_2224();
    event_func_2225();
    event_func_2226();
    event_func_2227();
    event_func_2228();
    event_func_2229();
    event_func_2230();
    event_func_2231();
    event_func_2232();
    event_func_2233();
    event_func_2234();
    event_func_2235();
    event_func_2236();
    event_func_2237();
    event_func_2238();
    event_func_2239();
    event_func_2240();
    event_func_2241();
    event_func_2242();
    event_func_2243();
    event_func_2244();
    event_func_2245();
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
    event_func_2313();
    event_func_2314();
    event_func_2315();
    event_func_2316();
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
    event_func_2397();
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
    event_func_2406();
    event_func_2407();
    event_func_2408();
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1) goto group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1_end;
    event_func_2409();
    event_func_2410();
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_4_water_shield_1) goto group_main_engine_global_methods_common_objects_shields_4_water_shield_1_end;
    event_func_2411();
    event_func_2412();
    event_func_2413();
    event_func_2414();
    event_func_2415();
    event_func_2416();
    event_func_2417();
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_5_earth_shield_1) goto group_main_engine_global_methods_common_objects_shields_5_earth_shield_1_end;
    event_func_2418();
    event_func_2419();
    event_func_2420();
    event_func_2421();
    event_func_2422();
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1_end: ;
    event_func_2946();
    event_func_2947();
    event_func_2948();
    event_func_2949();
    event_func_3730();
    event_func_3731();
    event_func_2425();
    event_func_3732();
    event_func_3733();
    event_func_2428();
    event_func_2429();
    event_func_2430();
    event_func_2431();
    event_func_2432();
    event_func_2433();
    event_func_2434();
    event_func_2435();
    event_func_2436();
    event_func_2437();
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
    event_func_2475();
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
    event_func_9663();
    event_func_9664();
    event_func_2960();
    event_func_2961();
    event_func_2962();
    event_func_2963();
    event_func_2964();
    event_func_2965();
    event_func_2966();
    event_func_2967();
    event_func_9827();
    event_func_9828();
    event_func_9829();
    event_func_9830();
    event_func_9831();
    event_func_9832();
    event_func_9833();
    event_func_9834();
    event_func_9835();
    event_func_9836();
    event_func_9837();
    event_func_9838();
    event_func_9839();
    event_func_2970();
    event_func_2971();
    event_func_2972();
    event_func_2973();
    event_func_2974();
    event_func_2975();
    event_func_2976();
    event_func_2977();
    event_func_3734();
    event_func_2979();
    event_func_3736();
    event_func_4355();
    event_func_4356();
    event_func_9442();
    event_func_9443();
    event_func_9444();
    event_func_9445();
    event_func_9446();
    event_func_9447();
    event_func_9448();
    event_func_9449();
    event_func_9450();
    event_func_9451();
    event_func_9452();
    event_func_9840();
    event_func_9454();
    event_func_9455();
    event_func_9456();
    event_func_9457();
    event_func_9458();
    event_func_9841();
    event_func_9842();
    event_func_9843();
    event_func_9844();
    event_func_9465();
    event_func_9845();
    event_func_9467();
    event_func_9468();
    event_func_9469();
    event_func_9470();
    event_func_9471();
    event_func_9472();
    event_func_9473();
    event_func_9474();
    event_func_9475();
    event_func_9476();
    event_func_9846();
    event_func_9847();
    event_func_9848();
    event_func_9849();
    event_func_9850();
    event_func_9851();
    event_func_9852();
    event_func_9700();
    event_func_9701();
    event_func_9702();
    event_func_9703();
    event_func_9704();
    event_func_9853();
    event_func_9854();
    event_func_9855();
    event_func_9856();
    event_func_9857();
    event_func_9858();
    event_func_9859();
    event_func_9860();
    event_func_9861();
    event_func_9862();
    event_func_9863();
    event_func_9864();
    event_func_9865();
    event_func_9866();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_9488();
    event_func_9489();
    event_func_9490();
    event_func_9491();
    event_func_9492();
    event_func_9493();
    event_func_9494();
    event_func_9495();
    event_func_9496();
    event_func_9497();
    event_func_9498();
    event_func_9499();
    event_func_9500();
    event_func_9501();
    event_func_9502();
    event_func_9708();
    event_func_9423();
    event_func_9504();
    event_func_9505();
    event_func_9506();
    event_func_9507();
    event_func_9508();
    event_func_9509();
    event_func_9510();
    event_func_9511();
    event_func_9512();
    event_func_9513();
    event_func_9514();
    event_func_9515();
    event_func_9516();
    event_func_9517();
    event_func_9518();
    event_func_9519();
    event_func_9520();
    event_func_9521();
    event_func_9522();
    event_func_9523();
    event_func_9524();
    event_func_9525();
    event_func_9526();
    event_func_9527();
    event_func_9528();
    event_func_9529();
    event_func_9530();
    event_func_9531();
    event_func_9532();
    event_func_9709();
    event_func_9534();
    event_func_9535();
    event_func_9536();
    event_func_9557();
    event_func_9558();
    event_func_9559();
    event_func_9560();
    event_func_9561();
    event_func_9562();
    event_func_9563();
    event_func_9564();
    event_func_9565();
    event_func_9566();
    event_func_9567();
    event_func_9710();
    event_func_9569();
    event_func_9570();
    event_func_9571();
    event_func_9572();
    event_func_9573();
    event_func_9574();
    event_func_9575();
    event_func_9576();
    event_func_9537();
    event_func_9538();
    event_func_9539();
    event_func_9540();
    event_func_9541();
    event_func_9542();
    event_func_9543();
    event_func_9544();
    event_func_9545();
    event_func_9546();
    event_func_9547();
    event_func_9711();
    event_func_9549();
    event_func_9550();
    event_func_9551();
    event_func_9552();
    event_func_9553();
    event_func_9554();
    event_func_9555();
    event_func_9556();
    event_func_9577();
    event_func_9578();
    event_func_9579();
    event_func_9580();
    event_func_9581();
    event_func_9582();
    event_func_9583();
    event_func_9584();
    event_func_9585();
    event_func_9586();
    event_func_9587();
    event_func_9588();
    event_func_9589();
    event_func_9590();
    event_func_9591();
    event_func_9592();
    event_func_9712();
    event_func_9594();
    event_func_9595();
    event_func_9596();
    event_func_9597();
    event_func_9713();
    event_func_9714();
    event_func_9715();
    event_func_9716();
    event_func_9717();
    event_func_9718();
    event_func_9719();
    event_func_9720();
    event_func_9721();
    event_func_9722();
    event_func_5516();
    event_func_3808();
    event_func_2996();
    event_func_2997();
    event_func_2998();
    event_func_3286();
    event_func_3817();
    event_func_3818();
    event_func_3819();
    event_func_3820();
    event_func_3821();
    event_func_3822();
    event_func_9598();
    event_func_9599();
    event_func_9600();
    event_func_9601();
    event_func_9602();
    event_func_9603();
    event_func_3823();
    event_func_3824();
    event_func_3825();
    event_func_3826();
    event_func_3827();
    event_func_3828();
    event_func_3829();
    event_func_3830();
    event_func_3831();
    event_func_3832();
    event_func_3833();
    event_func_3834();
    event_func_3835();
    event_func_3836();
    event_func_3837();
    event_func_4051();
    event_func_4052();
    event_func_3838();
    event_func_3839();
    event_func_3840();
    event_func_3841();
    event_func_3842();
    event_func_3843();
    event_func_3000();
    event_func_9867();
    event_func_6082();
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) goto group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end;
    event_func_4173();
    event_func_9724();
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end: ;
    event_func_9868();
    event_func_9726();
    event_func_9727();
    event_func_9728();
    event_func_9729();
    event_func_9730();
    event_func_9731();
    event_func_9732();
    event_func_9733();
    event_func_9734();
    event_func_9735();
    event_func_9869();
    event_func_9737();
    if (!group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_main_1) goto group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_main_1_end;
    event_func_9738();
    event_func_9870();
    event_func_9871();
    event_func_9741();
    event_func_9742();
    event_func_9872();
    event_func_9873();
    event_func_9745();
    event_func_9746();
    event_func_9747();
    event_func_9748();
    event_func_9749();
    event_func_9750();
    event_func_9874();
    event_func_9753();
    event_func_9875();
    event_func_9876();
    event_func_9877();
    event_func_9878();
    event_func_9759();
    event_func_9760();
    event_func_9761();
    group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_main_1_end: ;
    event_func_9762();
    event_func_9763();
    event_func_9764();
    event_func_9765();
    event_func_9766();
    event_func_9767();
    event_func_9879();
    event_func_9769();
    if (!group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_tow_player_1) goto group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_tow_player_1_end;
    event_func_9770();
    event_func_9771();
    event_func_9772();
    event_func_9773();
    event_func_9774();
    event_func_9775();
    event_func_9776();
    event_func_9777();
    event_func_9778();
    event_func_9779();
    event_func_9780();
    event_func_9781();
    group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_tow_player_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_neera_on_top_of_hovercop_1) goto group_main_engine_level_specific_methods_bosses_boss_neera_on_top_of_hovercop_1_end;
    event_func_9880();
    event_func_9881();
    event_func_9882();
    event_func_9883();
    event_func_9884();
    event_func_9885();
    event_func_9886();
    event_func_9887();
    event_func_9888();
    event_func_9889();
    event_func_9890();
    group_main_engine_level_specific_methods_bosses_boss_neera_on_top_of_hovercop_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_neera_enter_arena_1) goto group_main_engine_level_specific_methods_bosses_boss_neera_enter_arena_1_end;
    group_main_engine_level_specific_methods_bosses_boss_neera_enter_arena_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_neera_ice_floors_1) goto group_main_engine_level_specific_methods_bosses_boss_neera_ice_floors_1_end;
    event_func_9891();
    event_func_9892();
    event_func_9893();
    event_func_9894();
    group_main_engine_level_specific_methods_bosses_boss_neera_ice_floors_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_neera_attack_selection_1) goto group_main_engine_level_specific_methods_bosses_boss_neera_attack_selection_1_end;
    event_func_9895();
    event_func_9896();
    event_func_9897();
    event_func_9898();
    event_func_9899();
    event_func_9900();
    event_func_9901();
    event_func_9902();
    event_func_9903();
    event_func_9904();
    event_func_9905();
    event_func_9906();
    event_func_9907();
    event_func_9908();
    event_func_9909();
    event_func_9910();
    event_func_9911();
    event_func_9912();
    event_func_9913();
    event_func_9914();
    event_func_9915();
    event_func_9916();
    event_func_9917();
    event_func_9918();
    event_func_9919();
    event_func_9920();
    event_func_9921();
    event_func_9922();
    event_func_9923();
    event_func_9924();
    event_func_9925();
    event_func_9926();
    event_func_9927();
    event_func_9928();
    event_func_9929();
    event_func_9930();
    event_func_9931();
    event_func_9932();
    event_func_9933();
    event_func_9934();
    event_func_9935();
    event_func_9936();
    event_func_9937();
    event_func_9938();
    event_func_9939();
    event_func_9940();
    event_func_9941();
    group_main_engine_level_specific_methods_bosses_boss_neera_attack_selection_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_neera_neera_hit_1) goto group_main_engine_level_specific_methods_bosses_boss_neera_neera_hit_1_end;
    event_func_9942();
    event_func_9943();
    event_func_9944();
    event_func_9945();
    event_func_9946();
    event_func_9947();
    event_func_9948();
    event_func_9949();
    event_func_9950();
    event_func_9951();
    event_func_9952();
    group_main_engine_level_specific_methods_bosses_boss_neera_neera_hit_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_neera_neera_escapes_1) goto group_main_engine_level_specific_methods_bosses_boss_neera_neera_escapes_1_end;
    event_func_9953();
    event_func_9954();
    event_func_9955();
    event_func_9956();
    group_main_engine_level_specific_methods_bosses_boss_neera_neera_escapes_1_end: ;
    event_func_9957();
    event_func_9958();
    event_func_9959();
    event_func_9960();
    event_func_9782();
    event_func_9783();
    event_func_9784();
    event_func_9785();
    event_func_9786();
    event_func_9961();
    event_func_9962();
    event_func_9789();
    event_func_9790();
    event_func_9791();
    event_func_9792();
    event_func_9793();
    event_func_9794();
    event_func_9795();
    event_func_9796();
    event_func_9963();
    event_func_9798();
    event_func_9799();
    event_func_9800();
    event_func_9801();
    event_func_9802();
    event_func_9803();
    event_func_9804();
    event_func_9964();
    if (!group_main_engine_level_specific_methods_submarine_section_1) goto group_main_engine_level_specific_methods_submarine_section_1_end;
    event_func_9965();
    event_func_9966();
    event_func_9967();
    event_func_9968();
    event_func_9969();
    event_func_9970();
    event_func_9971();
    event_func_9972();
    event_func_9973();
    event_func_9974();
    event_func_9975();
    event_func_9976();
    event_func_9977();
    event_func_9978();
    event_func_9979();
    event_func_9980();
    event_func_9981();
    event_func_9982();
    event_func_9983();
    group_main_engine_level_specific_methods_submarine_section_1_end: ;
    event_func_9984();
    event_func_2519();
    event_func_2520();
    event_func_2521();
    event_func_2522();
    event_func_2523();
    event_func_2524();
    event_func_2525();
    event_func_2526();
    event_func_2527();
    event_func_2528();
    event_func_2529();
    event_func_2530();
    event_func_2531();
    event_func_2532();
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
    event_func_3910();
    event_func_3911();
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
    event_func_3942();
    event_func_3943();
    event_func_3944();
    event_func_3945();
    event_func_3946();
    event_func_3947();
    event_func_3948();
    event_func_3949();
    event_func_3950();
    event_func_3951();
    event_func_3952();
    event_func_4308();
    event_func_4309();
    event_func_4310();
    event_func_4311();
    event_func_3953();
    event_func_3954();
    event_func_4124();
    event_func_4125();
    event_func_4126();
    event_func_4127();
    event_func_4128();
    event_func_4129();
    event_func_2634();
    event_func_2635();
    event_func_2636();
    event_func_2637();
    event_func_2638();
    event_func_2639();
    event_func_2640();
    event_func_2641();
    event_func_3246();
    event_func_3247();
    event_func_3248();
    event_func_9624();
    event_func_9625();
    event_func_9626();
    event_func_9627();
    event_func_9628();
    event_func_9629();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_9985();
    event_func_9986();
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
    event_func_3977();
    event_func_3978();
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
void Frames::handle_frame_42_pre_events()
{
}
void Frames::event_func_9987()
{
    // event 2_41
    {
        if (!(group_main_engine_1)) goto event_2_41_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 1600);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 57);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 23);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
    }
    event_2_41_end: ;
}
void Frames::event_func_9988()
{
    // event 1458_41
    {
        if (!(group_main_engine_1)) goto event_1458_41_end;
        gimmickflyingleafplatformmask_2462_instances.clear_selection();
        for (ObjectIterator it(gimmickflyingleafplatformmask_2462_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(17, ((Active*)*it)->get_y());
        }
    }
    event_1458_41_end: ;
}
void Frames::event_func_9989()
{
    // event 1690_41
    {
        if (!(group_main_engine_1)) goto event_1690_41_end;
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.set(0, ((Active*)get_instance(bosshovercop_2332_instances))->get_x());
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.set(11, ((Active*)get_instance(bosshovercop_2332_instances))->get_y());
        ((Active*)get_instance(levelhovercraftlight_2451_instances))->set_x_scale(8);
        bosshovercopturbine2_2331_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine2_2331_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, 10);
        }
        bosshovercopturbine1_2333_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine1_2333_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, 10);
        }
        ((Active*)get_instance(npcneera_2464_instances))->set_visible(false);
        ((Active*)get_instance(npcneera_2464_instances))->alterables->values.set(10, ((Active*)get_instance(npcneera_2464_instances))->get_y());
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.set(1, -200);
    }
    event_1690_41_end: ;
}
void Frames::on_frame_42_start_events()
{
    event_func_4133();
    event_func_9987();
    event_func_2659();
    event_func_2660();
    event_func_2661();
    event_func_2662();
    event_func_2663();
    event_func_2664();
    event_func_2665();
    event_func_2666();
    event_func_2667();
    event_func_2668();
    event_func_2669();
    event_func_2670();
    event_func_2671();
    event_func_2672();
    event_func_3267();
    event_func_9634();
    event_func_3269();
    event_func_3984();
    event_func_3985();
    event_func_2673();
    event_func_2674();
    event_func_2675();
    event_func_2676();
    event_func_2677();
    event_func_2678();
    event_func_2679();
    event_func_2680();
    event_func_2681();
    event_func_2682();
    event_func_2683();
    event_func_2684();
    event_func_2685();
    event_func_3272();
    event_func_3273();
    event_func_9808();
    event_func_9641();
    event_func_9988();
    event_func_9642();
    event_func_9643();
    event_func_9644();
    event_func_9809();
    event_func_9810();
    event_func_2686();
    event_func_2687();
    event_func_9989();
    event_func_3994();
    event_func_3995();
    event_func_3996();
    event_func_9812();
    event_func_4145();
    event_func_4146();
    event_func_4143();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_42_init()
{
    index = 41;
    width = 15000;
    height = 2600;
    virtual_width = 15000;
    virtual_height = 2600;
    background_color = Color(0, 0, 0);
    timer_base = 0;
    reset_image_cache();
    flush_image_cache();
    layers.resize(8);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    layers[1].init(1, 0.800000011921, 0.800000011921, true, false, false);
    layers[2].init(2, 1.0, 1.0, true, false, false);
    layers[3].init(3, 1.0, 1.0, true, false, false);
    layers[4].init(4, 1.0, 1.0, true, false, false);
    layers[5].init(5, 1.0, 1.0, true, false, false);
    layers[6].init(6, 0.0, 0.0, true, false, false);
    layers[7].init(7, 1.0, 1.0, true, false, false);
    #ifdef CHOWDREN_HAS_MRT
    #endif
    #ifdef CHOWDREN_IS_3DS
    #endif
    static ObjectList* qualifier_26_instances[] = {&jcwaterstream4_2409_instances, &jcwaterstream3_2410_instances, &jcwaterstream6_2411_instances, &jcwaterstream5_2412_instances, &jcwaterstream2_2413_instances, &jcwaterstream1_2416_instances, NULL};
    qualifier_26.set(6, &qualifier_26_instances[0]);
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &gimmickleafplatform1_2359_instances, &gimmickleafplatform2_2360_instances, &levelcreekplatform_2424_instances, &gimmickflyingleafplatformmask_2462_instances, NULL};
    qualifier_8.set(13, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesup_558_instances, &gimmickleafplatform1_2359_instances, &gimmickleafplatform2_2360_instances, &levelcreekplatform_2424_instances, &hazardspikesdown_559_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, &gimmickflyingleafplatformmask_2462_instances, NULL};
    qualifier_9.set(36, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemyplantturretus_2365_instances, &enemybullfrag_2417_instances, &enemybuoybuoy_2418_instances, &enemymeteorroller_2421_instances, &enemysharktorpedo_2423_instances, &enemybubblorbiter_2443_instances, &bossneerahitbox_2465_instances, NULL};
    qualifier_20.set(7, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece1_2_instances, &levelparallaxpiece0_465_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece5_510_instances, &levelparallaxpiece6_511_instances, NULL};
    qualifier_0.set(5, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &minibossbarrier_924_instances, &hazardspikesup_558_instances, &jcslidingplatform_2414_instances, &enemybullfragmask_2419_instances, &leveljccollapsingplatformpiece_2427_instances, &jcloop1_2445_instances, &jcloop4_2446_instances, &jcloop2_2447_instances, &hazardspikesdown_559_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, &levelicebarrier_2456_instances, &leveljccollapsingplatform_2444_instances, NULL};
    qualifier_7.set(35, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_4.set(34, &qualifier_4_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(12, &qualifier_19_instances[0]);
    static ObjectList* qualifier_14_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_14.set(1, &qualifier_14_instances[0]);
    static ObjectList* qualifier_15_instances[] = {&laddertop_357_instances, &mastergroupsb_385_instances, NULL};
    qualifier_15.set(2, &qualifier_15_instances[0]);
    static ObjectList* qualifier_16_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_16.set(1, &qualifier_16_instances[0]);
    static ObjectList* qualifier_17_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_17.set(1, &qualifier_17_instances[0]);
    static ObjectList* qualifier_10_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &jcloop4_2446_instances, NULL};
    qualifier_10.set(4, &qualifier_10_instances[0]);
    static ObjectList* qualifier_11_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &jcloop2_2447_instances, NULL};
    qualifier_11.set(4, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, &levelcreekplatform_2424_instances, NULL};
    qualifier_12.set(3, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &jcslidingplatform_2414_instances, &levelcreekplatform_2424_instances, &gimmickflyingleafplatformmask_2462_instances, NULL};
    qualifier_13.set(4, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0_2318(0, 0), 0);
    add_background_object(create_levelparallaxpiece2_2319(0, 96), 0);
    add_background_object(create_levelparallaxpiece1_2(0, 208), 0);
    add_background_object(create_levelparallaxpiece5_2320(0, 104), 0);
    add_background_object(create_jcoceanbottom_2455(0, 1872), 0);
    add_background_object(create_levelparallaxpiece6_2322(0, 1600), 0);
    add_object(create_levelparalaxwatersurface_7(0, 445), 0);
    add_background_object(create_jcbamboo3_2340(4472, 336), 1);
    add_background_object(create_jcbamboo3_2341(4472, 224), 1);
    add_background_object(create_jcbamboo4_2342(4472, 768), 1);
    add_background_object(create_jcbamboo4_2342(4472, 856), 1);
    add_background_object(create_jcbamboo3_2341(4472, 112), 1);
    add_background_object(create_jcbamboo3_2341(4472, 0), 1);
    add_background_object(create_jcbamboo4_2342(4472, 944), 1);
    add_background_object(create_jcbamboo4_2342(4472, 1032), 1);
    add_background_object(create_jcbamboo3_2340(4672, 224), 1);
    add_background_object(create_jcbamboo3_2340(4568, 224), 1);
    add_background_object(create_jcbamboo3_2340(4776, 336), 1);
    add_background_object(create_jcbamboo3_2341(4568, 112), 1);
    add_background_object(create_jcbamboo3_2341(4672, 112), 1);
    add_background_object(create_jcbamboo3_2341(4776, 224), 1);
    add_background_object(create_jcbamboo4_2342(4776, 768), 1);
    add_background_object(create_jcbamboo4_2342(4776, 856), 1);
    add_background_object(create_jcbamboo3_2340(4880, 336), 1);
    add_background_object(create_jcbamboo3_2341(4880, 224), 1);
    add_background_object(create_jcbamboo4_2342(4880, 768), 1);
    add_background_object(create_jcbamboo4_2342(4880, 856), 1);
    add_background_object(create_jcbamboo3_2341(4568, 0), 1);
    add_background_object(create_jcbamboo3_2341(4672, 0), 1);
    add_background_object(create_jcbamboo3_2341(4776, 112), 1);
    add_background_object(create_jcbamboo3_2341(4880, 112), 1);
    add_background_object(create_jcbamboo4_2342(4672, 656), 1);
    add_background_object(create_jcbamboo4_2342(4672, 744), 1);
    add_background_object(create_jcbamboo4_2342(4568, 656), 1);
    add_background_object(create_jcbamboo4_2342(4568, 744), 1);
    add_background_object(create_jcbamboo3_2341(4776, 0), 1);
    add_background_object(create_jcbamboo3_2341(4880, 0), 1);
    add_background_object(create_jcbamboo3_2340(4976, 336), 1);
    add_background_object(create_jcbamboo3_2341(4976, 224), 1);
    add_background_object(create_jcbamboo4_2342(4976, 768), 1);
    add_background_object(create_jcbamboo4_2342(4976, 856), 1);
    add_background_object(create_jcbamboo3_2341(4976, 112), 1);
    add_background_object(create_jcbamboo3_2341(4976, 0), 1);
    add_background_object(create_jcbamboo4_2342(4568, 832), 1);
    add_background_object(create_jcbamboo4_2342(4568, 920), 1);
    add_background_object(create_jcbamboo4_2342(4568, 1008), 1);
    add_background_object(create_jcbamboo4_2342(4672, 832), 1);
    add_background_object(create_jcbamboo4_2342(4672, 920), 1);
    add_background_object(create_jcbamboo4_2342(4672, 1008), 1);
    add_background_object(create_jcbamboo4_2342(4776, 944), 1);
    add_background_object(create_jcbamboo4_2342(4776, 1032), 1);
    add_background_object(create_jcbamboo4_2342(4880, 944), 1);
    add_background_object(create_jcbamboo4_2342(4880, 1032), 1);
    add_background_object(create_jcbamboo4_2342(4976, 944), 1);
    add_background_object(create_jcbamboo4_2342(4976, 1032), 1);
    add_background_object(create_jcbamboo3_2340(5576, 336), 1);
    add_background_object(create_jcbamboo3_2341(5576, 224), 1);
    add_background_object(create_jcbamboo4_2342(5576, 768), 1);
    add_background_object(create_jcbamboo4_2342(5576, 856), 1);
    add_background_object(create_jcbamboo3_2341(5576, 112), 1);
    add_background_object(create_jcbamboo3_2341(5576, 0), 1);
    add_background_object(create_jcbamboo4_2342(5576, 944), 1);
    add_background_object(create_jcbamboo4_2342(5576, 1032), 1);
    add_background_object(create_jcbamboo3_2340(5776, 224), 1);
    add_background_object(create_jcbamboo3_2340(5672, 224), 1);
    add_background_object(create_jcbamboo3_2340(5880, 336), 1);
    add_background_object(create_jcbamboo3_2341(5672, 112), 1);
    add_background_object(create_jcbamboo3_2341(5776, 112), 1);
    add_background_object(create_jcbamboo3_2341(5880, 224), 1);
    add_background_object(create_jcbamboo4_2342(5880, 768), 1);
    add_background_object(create_jcbamboo4_2342(5880, 856), 1);
    add_background_object(create_jcbamboo3_2340(5984, 336), 1);
    add_background_object(create_jcbamboo3_2341(5984, 224), 1);
    add_background_object(create_jcbamboo4_2342(5984, 768), 1);
    add_background_object(create_jcbamboo4_2342(5984, 856), 1);
    add_background_object(create_jcbamboo3_2341(5672, 0), 1);
    add_background_object(create_jcbamboo3_2341(5776, 0), 1);
    add_background_object(create_jcbamboo3_2341(5880, 112), 1);
    add_background_object(create_jcbamboo3_2341(5984, 112), 1);
    add_background_object(create_jcbamboo4_2342(5776, 656), 1);
    add_background_object(create_jcbamboo4_2342(5776, 744), 1);
    add_background_object(create_jcbamboo4_2342(5672, 656), 1);
    add_background_object(create_jcbamboo4_2342(5672, 744), 1);
    add_background_object(create_jcbamboo3_2341(5880, 0), 1);
    add_background_object(create_jcbamboo3_2341(5984, 0), 1);
    add_background_object(create_jcbamboo3_2340(6080, 336), 1);
    add_background_object(create_jcbamboo3_2341(6080, 224), 1);
    add_background_object(create_jcbamboo4_2342(6080, 768), 1);
    add_background_object(create_jcbamboo4_2342(6080, 856), 1);
    add_background_object(create_jcbamboo3_2341(6080, 112), 1);
    add_background_object(create_jcbamboo3_2341(6080, 0), 1);
    add_background_object(create_jcbamboo4_2342(5672, 832), 1);
    add_background_object(create_jcbamboo4_2342(5672, 920), 1);
    add_background_object(create_jcbamboo4_2342(5672, 1008), 1);
    add_background_object(create_jcbamboo4_2342(5776, 832), 1);
    add_background_object(create_jcbamboo4_2342(5776, 920), 1);
    add_background_object(create_jcbamboo4_2342(5776, 1008), 1);
    add_background_object(create_jcbamboo4_2342(5880, 944), 1);
    add_background_object(create_jcbamboo4_2342(5880, 1032), 1);
    add_background_object(create_jcbamboo4_2342(5984, 944), 1);
    add_background_object(create_jcbamboo4_2342(5984, 1032), 1);
    add_background_object(create_jcbamboo4_2342(6080, 944), 1);
    add_background_object(create_jcbamboo4_2342(6080, 1032), 1);
    add_background_object(create_jcbamboo3_2340(6168, 336), 1);
    add_background_object(create_jcbamboo3_2341(6168, 224), 1);
    add_background_object(create_jcbamboo4_2342(6168, 768), 1);
    add_background_object(create_jcbamboo4_2342(6168, 856), 1);
    add_background_object(create_jcbamboo3_2341(6168, 112), 1);
    add_background_object(create_jcbamboo3_2341(6168, 0), 1);
    add_background_object(create_jcbamboo4_2342(6168, 944), 1);
    add_background_object(create_jcbamboo4_2342(6168, 1032), 1);
    add_background_object(create_jcbamboo3_2340(6368, 224), 1);
    add_background_object(create_jcbamboo3_2340(6264, 224), 1);
    add_background_object(create_jcbamboo3_2340(6472, 336), 1);
    add_background_object(create_jcbamboo3_2341(6264, 112), 1);
    add_background_object(create_jcbamboo3_2341(6368, 112), 1);
    add_background_object(create_jcbamboo3_2341(6472, 224), 1);
    add_background_object(create_jcbamboo4_2342(6472, 768), 1);
    add_background_object(create_jcbamboo4_2342(6472, 856), 1);
    add_background_object(create_jcbamboo3_2340(6576, 336), 1);
    add_background_object(create_jcbamboo3_2341(6576, 224), 1);
    add_background_object(create_jcbamboo4_2342(6576, 768), 1);
    add_background_object(create_jcbamboo4_2342(6576, 856), 1);
    add_background_object(create_jcbamboo3_2341(6264, 0), 1);
    add_background_object(create_jcbamboo3_2341(6368, 0), 1);
    add_background_object(create_jcbamboo3_2341(6472, 112), 1);
    add_background_object(create_jcbamboo3_2341(6576, 112), 1);
    add_background_object(create_jcbamboo4_2342(6368, 656), 1);
    add_background_object(create_jcbamboo4_2342(6368, 744), 1);
    add_background_object(create_jcbamboo4_2342(6264, 656), 1);
    add_background_object(create_jcbamboo4_2342(6264, 744), 1);
    add_background_object(create_jcbamboo3_2341(6472, 0), 1);
    add_background_object(create_jcbamboo3_2341(6576, 0), 1);
    add_background_object(create_jcbamboo3_2340(6672, 336), 1);
    add_background_object(create_jcbamboo3_2341(6672, 224), 1);
    add_background_object(create_jcbamboo4_2342(6672, 768), 1);
    add_background_object(create_jcbamboo4_2342(6672, 856), 1);
    add_background_object(create_jcbamboo3_2341(6672, 112), 1);
    add_background_object(create_jcbamboo3_2341(6672, 0), 1);
    add_background_object(create_jcbamboo4_2342(6264, 832), 1);
    add_background_object(create_jcbamboo4_2342(6264, 920), 1);
    add_background_object(create_jcbamboo4_2342(6264, 1008), 1);
    add_background_object(create_jcbamboo4_2342(6368, 832), 1);
    add_background_object(create_jcbamboo4_2342(6368, 920), 1);
    add_background_object(create_jcbamboo4_2342(6368, 1008), 1);
    add_background_object(create_jcbamboo4_2342(6472, 944), 1);
    add_background_object(create_jcbamboo4_2342(6472, 1032), 1);
    add_background_object(create_jcbamboo4_2342(6576, 944), 1);
    add_background_object(create_jcbamboo4_2342(6576, 1032), 1);
    add_background_object(create_jcbamboo4_2342(6672, 944), 1);
    add_background_object(create_jcbamboo4_2342(6672, 1032), 1);
    add_background_object(create_jcbamboo3_2340(7264, 672), 1);
    add_background_object(create_jcbamboo3_2341(7264, 560), 1);
    add_background_object(create_jcbamboo4_2342(7264, 1104), 1);
    add_background_object(create_jcbamboo4_2342(7264, 1192), 1);
    add_background_object(create_jcbamboo3_2341(7264, 448), 1);
    add_background_object(create_jcbamboo3_2341(7264, 336), 1);
    add_background_object(create_jcbamboo4_2342(7264, 1280), 1);
    add_background_object(create_jcbamboo4_2342(7264, 1368), 1);
    add_background_object(create_jcbamboo3_2340(7464, 560), 1);
    add_background_object(create_jcbamboo3_2340(7360, 560), 1);
    add_background_object(create_jcbamboo3_2340(7568, 672), 1);
    add_background_object(create_jcbamboo3_2341(7360, 448), 1);
    add_background_object(create_jcbamboo3_2341(7464, 448), 1);
    add_background_object(create_jcbamboo3_2341(7568, 560), 1);
    add_background_object(create_jcbamboo4_2342(7568, 1104), 1);
    add_background_object(create_jcbamboo4_2342(7568, 1192), 1);
    add_background_object(create_jcbamboo3_2340(7672, 672), 1);
    add_background_object(create_jcbamboo3_2341(7672, 560), 1);
    add_background_object(create_jcbamboo4_2342(7672, 1104), 1);
    add_background_object(create_jcbamboo4_2342(7672, 1192), 1);
    add_background_object(create_jcbamboo3_2341(7360, 336), 1);
    add_background_object(create_jcbamboo3_2341(7464, 336), 1);
    add_background_object(create_jcbamboo3_2341(7568, 448), 1);
    add_background_object(create_jcbamboo3_2341(7672, 448), 1);
    add_background_object(create_jcbamboo4_2342(7464, 992), 1);
    add_background_object(create_jcbamboo4_2342(7464, 1080), 1);
    add_background_object(create_jcbamboo4_2342(7360, 992), 1);
    add_background_object(create_jcbamboo4_2342(7360, 1080), 1);
    add_background_object(create_jcbamboo3_2341(7568, 336), 1);
    add_background_object(create_jcbamboo3_2341(7672, 336), 1);
    add_background_object(create_jcbamboo3_2340(7768, 672), 1);
    add_background_object(create_jcbamboo3_2341(7768, 560), 1);
    add_background_object(create_jcbamboo4_2342(7768, 1104), 1);
    add_background_object(create_jcbamboo4_2342(7768, 1192), 1);
    add_background_object(create_jcbamboo3_2341(7768, 448), 1);
    add_background_object(create_jcbamboo3_2341(7768, 336), 1);
    add_background_object(create_jcbamboo4_2342(7360, 1168), 1);
    add_background_object(create_jcbamboo4_2342(7360, 1256), 1);
    add_background_object(create_jcbamboo4_2342(7360, 1344), 1);
    add_background_object(create_jcbamboo4_2342(7464, 1168), 1);
    add_background_object(create_jcbamboo4_2342(7464, 1256), 1);
    add_background_object(create_jcbamboo4_2342(7464, 1344), 1);
    add_background_object(create_jcbamboo4_2342(7568, 1280), 1);
    add_background_object(create_jcbamboo4_2342(7568, 1368), 1);
    add_background_object(create_jcbamboo4_2342(7672, 1280), 1);
    add_background_object(create_jcbamboo4_2342(7672, 1368), 1);
    add_background_object(create_jcbamboo4_2342(7768, 1280), 1);
    add_background_object(create_jcbamboo4_2342(7768, 1368), 1);
    add_background_object(create_jcbamboo3_2340(7856, 672), 1);
    add_background_object(create_jcbamboo3_2341(7856, 560), 1);
    add_background_object(create_jcbamboo4_2342(7856, 1104), 1);
    add_background_object(create_jcbamboo4_2342(7856, 1192), 1);
    add_background_object(create_jcbamboo3_2341(7856, 448), 1);
    add_background_object(create_jcbamboo3_2341(7856, 336), 1);
    add_background_object(create_jcbamboo4_2342(7856, 1280), 1);
    add_background_object(create_jcbamboo4_2342(7856, 1368), 1);
    add_background_object(create_jcbamboo3_2340(8056, 560), 1);
    add_background_object(create_jcbamboo3_2340(7952, 560), 1);
    add_background_object(create_jcbamboo3_2340(8160, 672), 1);
    add_background_object(create_jcbamboo3_2341(7952, 448), 1);
    add_background_object(create_jcbamboo3_2341(8056, 448), 1);
    add_background_object(create_jcbamboo3_2341(8160, 560), 1);
    add_background_object(create_jcbamboo4_2342(8160, 1104), 1);
    add_background_object(create_jcbamboo4_2342(8160, 1192), 1);
    add_background_object(create_jcbamboo3_2340(8264, 672), 1);
    add_background_object(create_jcbamboo3_2341(8264, 560), 1);
    add_background_object(create_jcbamboo4_2342(8264, 1104), 1);
    add_background_object(create_jcbamboo4_2342(8264, 1192), 1);
    add_background_object(create_jcbamboo3_2341(7952, 336), 1);
    add_background_object(create_jcbamboo3_2341(8056, 336), 1);
    add_background_object(create_jcbamboo3_2341(8160, 448), 1);
    add_background_object(create_jcbamboo3_2341(8264, 448), 1);
    add_background_object(create_jcbamboo4_2342(8056, 992), 1);
    add_background_object(create_jcbamboo4_2342(8056, 1080), 1);
    add_background_object(create_jcbamboo4_2342(7952, 992), 1);
    add_background_object(create_jcbamboo4_2342(7952, 1080), 1);
    add_background_object(create_jcbamboo3_2341(8160, 336), 1);
    add_background_object(create_jcbamboo3_2341(8264, 336), 1);
    add_background_object(create_jcbamboo3_2340(8360, 672), 1);
    add_background_object(create_jcbamboo3_2341(8360, 560), 1);
    add_background_object(create_jcbamboo4_2342(8360, 1104), 1);
    add_background_object(create_jcbamboo4_2342(8360, 1192), 1);
    add_background_object(create_jcbamboo3_2341(8360, 448), 1);
    add_background_object(create_jcbamboo3_2341(8360, 336), 1);
    add_background_object(create_jcbamboo4_2342(7952, 1168), 1);
    add_background_object(create_jcbamboo4_2342(7952, 1256), 1);
    add_background_object(create_jcbamboo4_2342(7952, 1344), 1);
    add_background_object(create_jcbamboo4_2342(8056, 1168), 1);
    add_background_object(create_jcbamboo4_2342(8056, 1256), 1);
    add_background_object(create_jcbamboo4_2342(8056, 1344), 1);
    add_background_object(create_jcbamboo4_2342(8160, 1280), 1);
    add_background_object(create_jcbamboo4_2342(8160, 1368), 1);
    add_background_object(create_jcbamboo4_2342(8264, 1280), 1);
    add_background_object(create_jcbamboo4_2342(8264, 1368), 1);
    add_background_object(create_jcbamboo4_2342(8360, 1280), 1);
    add_background_object(create_jcbamboo4_2342(8360, 1368), 1);
    add_background_object(create_jcbamboo4_2342(5576, 1120), 1);
    add_background_object(create_jcbamboo4_2342(5672, 1096), 1);
    add_background_object(create_jcbamboo4_2342(5776, 1096), 1);
    add_background_object(create_jcbamboo4_2342(5880, 1120), 1);
    add_background_object(create_jcbamboo4_2342(5984, 1120), 1);
    add_background_object(create_jcbamboo4_2342(6080, 1120), 1);
    add_background_object(create_jcbamboo4_2342(6168, 1120), 1);
    add_background_object(create_jcbamboo4_2342(6264, 1096), 1);
    add_background_object(create_jcbamboo4_2342(6368, 1096), 1);
    add_background_object(create_jcbamboo4_2342(6472, 1120), 1);
    add_background_object(create_jcbamboo4_2342(6576, 1120), 1);
    add_background_object(create_jcbamboo4_2342(6672, 1120), 1);
    add_background_object(create_jcbamboo4_2342(5576, 1208), 1);
    add_background_object(create_jcbamboo4_2342(5672, 1184), 1);
    add_background_object(create_jcbamboo4_2342(5776, 1184), 1);
    add_background_object(create_jcbamboo4_2342(5880, 1208), 1);
    add_background_object(create_jcbamboo4_2342(5984, 1208), 1);
    add_background_object(create_jcbamboo4_2342(6080, 1208), 1);
    add_background_object(create_jcbamboo4_2342(6168, 1208), 1);
    add_background_object(create_jcbamboo4_2342(6264, 1184), 1);
    add_background_object(create_jcbamboo4_2342(6368, 1184), 1);
    add_background_object(create_jcbamboo4_2342(6472, 1208), 1);
    add_background_object(create_jcbamboo4_2342(6576, 1208), 1);
    add_background_object(create_jcbamboo4_2342(6672, 1208), 1);
    add_background_object(create_jcbamboo3_2341(7264, 224), 1);
    add_background_object(create_jcbamboo3_2341(7264, 112), 1);
    add_background_object(create_jcbamboo3_2341(7360, 224), 1);
    add_background_object(create_jcbamboo3_2341(7464, 224), 1);
    add_background_object(create_jcbamboo3_2341(7360, 112), 1);
    add_background_object(create_jcbamboo3_2341(7464, 112), 1);
    add_background_object(create_jcbamboo3_2341(7568, 224), 1);
    add_background_object(create_jcbamboo3_2341(7672, 224), 1);
    add_background_object(create_jcbamboo3_2341(7568, 112), 1);
    add_background_object(create_jcbamboo3_2341(7672, 112), 1);
    add_background_object(create_jcbamboo3_2341(7768, 224), 1);
    add_background_object(create_jcbamboo3_2341(7768, 112), 1);
    add_background_object(create_jcbamboo3_2341(7856, 224), 1);
    add_background_object(create_jcbamboo3_2341(7856, 112), 1);
    add_background_object(create_jcbamboo3_2341(7952, 224), 1);
    add_background_object(create_jcbamboo3_2341(8056, 224), 1);
    add_background_object(create_jcbamboo3_2341(7952, 112), 1);
    add_background_object(create_jcbamboo3_2341(8056, 112), 1);
    add_background_object(create_jcbamboo3_2341(8160, 224), 1);
    add_background_object(create_jcbamboo3_2341(8264, 224), 1);
    add_background_object(create_jcbamboo3_2341(8160, 112), 1);
    add_background_object(create_jcbamboo3_2341(8264, 112), 1);
    add_background_object(create_jcbamboo3_2341(8360, 224), 1);
    add_background_object(create_jcbamboo3_2341(8360, 112), 1);
    add_background_object(create_jcbamboo3_2341(7264, 0), 1);
    add_background_object(create_jcbamboo3_2341(7264, -112), 1);
    add_background_object(create_jcbamboo3_2341(7360, 0), 1);
    add_background_object(create_jcbamboo3_2341(7464, 0), 1);
    add_background_object(create_jcbamboo3_2341(7360, -112), 1);
    add_background_object(create_jcbamboo3_2341(7464, -112), 1);
    add_background_object(create_jcbamboo3_2341(7568, 0), 1);
    add_background_object(create_jcbamboo3_2341(7672, 0), 1);
    add_background_object(create_jcbamboo3_2341(7568, -112), 1);
    add_background_object(create_jcbamboo3_2341(7672, -112), 1);
    add_background_object(create_jcbamboo3_2341(7768, 0), 1);
    add_background_object(create_jcbamboo3_2341(7768, -112), 1);
    add_background_object(create_jcbamboo3_2341(7856, 0), 1);
    add_background_object(create_jcbamboo3_2341(7856, -112), 1);
    add_background_object(create_jcbamboo3_2341(7952, 0), 1);
    add_background_object(create_jcbamboo3_2341(8056, 0), 1);
    add_background_object(create_jcbamboo3_2341(7952, -112), 1);
    add_background_object(create_jcbamboo3_2341(8056, -112), 1);
    add_background_object(create_jcbamboo3_2341(8160, 0), 1);
    add_background_object(create_jcbamboo3_2341(8264, 0), 1);
    add_background_object(create_jcbamboo3_2341(8160, -112), 1);
    add_background_object(create_jcbamboo3_2341(8264, -112), 1);
    add_background_object(create_jcbamboo3_2341(8360, 0), 1);
    add_background_object(create_jcbamboo3_2341(8360, -112), 1);
    add_background_object(create_dvceilingoverlay_915(9504, 1448), 1);
    add_background_object(create_jcbamboo4_2342(4472, 1120), 1);
    add_background_object(create_jcbamboo4_2342(4472, 1208), 1);
    add_background_object(create_jcbamboo4_2342(4472, 1296), 1);
    add_background_object(create_jcbamboo4_2342(4776, 1120), 1);
    add_background_object(create_jcbamboo4_2342(4880, 1120), 1);
    add_background_object(create_jcbamboo4_2342(4976, 1120), 1);
    add_background_object(create_jcbamboo4_2342(4568, 1096), 1);
    add_background_object(create_jcbamboo4_2342(4568, 1184), 1);
    add_background_object(create_jcbamboo4_2342(4568, 1272), 1);
    add_background_object(create_jcbamboo4_2342(4672, 1096), 1);
    add_background_object(create_jcbamboo4_2342(4672, 1184), 1);
    add_background_object(create_jcbamboo4_2342(4672, 1272), 1);
    add_background_object(create_jcbamboo4_2342(4776, 1208), 1);
    add_background_object(create_jcbamboo4_2342(4776, 1296), 1);
    add_background_object(create_jcbamboo4_2342(4880, 1208), 1);
    add_background_object(create_jcbamboo4_2342(4880, 1296), 1);
    add_background_object(create_jcbamboo4_2342(4976, 1208), 1);
    add_background_object(create_jcbamboo4_2342(4976, 1296), 1);
    add_background_object(create_jcbamboo4_2342(4472, 1384), 1);
    add_background_object(create_jcbamboo4_2342(4472, 1472), 1);
    add_background_object(create_jcbamboo4_2342(4472, 1560), 1);
    add_background_object(create_jcbamboo4_2342(4776, 1384), 1);
    add_background_object(create_jcbamboo4_2342(4880, 1384), 1);
    add_background_object(create_jcbamboo4_2342(4976, 1384), 1);
    add_background_object(create_jcbamboo4_2342(4568, 1360), 1);
    add_background_object(create_jcbamboo4_2342(4568, 1448), 1);
    add_background_object(create_jcbamboo4_2342(4568, 1536), 1);
    add_background_object(create_jcbamboo4_2342(4672, 1360), 1);
    add_background_object(create_jcbamboo4_2342(4672, 1448), 1);
    add_background_object(create_jcbamboo4_2342(4672, 1536), 1);
    add_background_object(create_jcbamboo4_2342(4776, 1472), 1);
    add_background_object(create_jcbamboo4_2342(4776, 1560), 1);
    add_background_object(create_jcbamboo4_2342(4880, 1472), 1);
    add_background_object(create_jcbamboo4_2342(4880, 1560), 1);
    add_background_object(create_jcbamboo4_2342(4976, 1472), 1);
    add_background_object(create_jcbamboo4_2342(4976, 1560), 1);
    add_background_object(create_jcbamboo4_2342(4472, 1648), 1);
    add_background_object(create_jcbamboo4_2342(4472, 1736), 1);
    add_background_object(create_jcbamboo4_2342(4472, 1824), 1);
    add_background_object(create_jcbamboo4_2342(4776, 1648), 1);
    add_background_object(create_jcbamboo4_2342(4880, 1648), 1);
    add_background_object(create_jcbamboo4_2342(4976, 1648), 1);
    add_background_object(create_jcbamboo4_2342(4568, 1624), 1);
    add_background_object(create_jcbamboo4_2342(4568, 1712), 1);
    add_background_object(create_jcbamboo4_2342(4568, 1800), 1);
    add_background_object(create_jcbamboo4_2342(4672, 1624), 1);
    add_background_object(create_jcbamboo4_2342(4672, 1712), 1);
    add_background_object(create_jcbamboo4_2342(4672, 1800), 1);
    add_background_object(create_jcbamboo4_2342(4776, 1736), 1);
    add_background_object(create_jcbamboo4_2342(4776, 1824), 1);
    add_background_object(create_jcbamboo4_2342(4880, 1736), 1);
    add_background_object(create_jcbamboo4_2342(4880, 1824), 1);
    add_background_object(create_jcbamboo4_2342(4976, 1736), 1);
    add_background_object(create_jcbamboo4_2342(4976, 1824), 1);
    add_background_object(create_jcbamboo3_2340(2208, 224), 1);
    add_background_object(create_jcbamboo3_2340(2104, 224), 1);
    add_background_object(create_jcbamboo3_2340(2312, 336), 1);
    add_background_object(create_jcbamboo3_2341(2104, 112), 1);
    add_background_object(create_jcbamboo3_2341(2208, 112), 1);
    add_background_object(create_jcbamboo3_2341(2312, 224), 1);
    add_background_object(create_jcbamboo4_2342(2312, 768), 1);
    add_background_object(create_jcbamboo4_2342(2312, 856), 1);
    add_background_object(create_jcbamboo3_2340(2416, 336), 1);
    add_background_object(create_jcbamboo3_2341(2416, 224), 1);
    add_background_object(create_jcbamboo4_2342(2416, 768), 1);
    add_background_object(create_jcbamboo4_2342(2416, 856), 1);
    add_background_object(create_jcbamboo3_2341(2104, 0), 1);
    add_background_object(create_jcbamboo3_2341(2208, 0), 1);
    add_background_object(create_jcbamboo3_2341(2312, 112), 1);
    add_background_object(create_jcbamboo3_2341(2416, 112), 1);
    add_background_object(create_jcbamboo4_2342(2208, 656), 1);
    add_background_object(create_jcbamboo4_2342(2208, 744), 1);
    add_background_object(create_jcbamboo4_2342(2104, 656), 1);
    add_background_object(create_jcbamboo4_2342(2104, 744), 1);
    add_background_object(create_jcbamboo3_2341(2312, 0), 1);
    add_background_object(create_jcbamboo3_2341(2416, 0), 1);
    add_background_object(create_jcbamboo3_2340(2512, 336), 1);
    add_background_object(create_jcbamboo3_2341(2512, 224), 1);
    add_background_object(create_jcbamboo4_2342(2512, 768), 1);
    add_background_object(create_jcbamboo4_2342(2512, 856), 1);
    add_background_object(create_jcbamboo3_2341(2512, 112), 1);
    add_background_object(create_jcbamboo3_2341(2512, 0), 1);
    add_background_object(create_jcbamboo3_2340(1984, 896), 1);
    add_background_object(create_jcbamboo3_2340(1136, 976), 1);
    add_background_object(create_jcbamboo3_2341(1136, 864), 1);
    add_background_object(create_jcbamboo3_2341(1984, 784), 1);
    add_background_object(create_jcbamboo3_2341(1136, 752), 1);
    add_background_object(create_jcbamboo3_2341(1984, 672), 1);
    add_background_object(create_jcbamboo3_2341(1136, 640), 1);
    add_background_object(create_jcbamboo3_2341(1984, 560), 1);
    add_background_object(create_jcbamboo3_2341(1136, 528), 1);
    add_background_object(create_jcbamboo3_2341(1984, 448), 1);
    add_background_object(create_jcbamboo3_2340(1024, 936), 1);
    add_background_object(create_jcbamboo3_2341(1024, 824), 1);
    add_background_object(create_jcbamboo3_2341(1024, 712), 1);
    add_background_object(create_jcbamboo3_2341(1024, 600), 1);
    add_background_object(create_jcbamboo3_2341(1024, 488), 1);
    add_background_object(create_jcbamboo3_2340(896, 832), 1);
    add_background_object(create_jcbamboo3_2341(896, 720), 1);
    add_background_object(create_jcbamboo3_2341(896, 608), 1);
    add_background_object(create_jcbamboo4_2342(896, 1264), 1);
    add_background_object(create_jcbamboo4_2342(896, 1352), 1);
    add_background_object(create_jcbamboo3_2340(768, 832), 1);
    add_background_object(create_jcbamboo3_2341(768, 720), 1);
    add_background_object(create_jcbamboo3_2341(768, 608), 1);
    add_background_object(create_jcbamboo4_2342(768, 1264), 1);
    add_background_object(create_jcbamboo4_2342(768, 1352), 1);
    add_background_object(create_jcbamboo3_2340(640, 840), 1);
    add_background_object(create_jcbamboo3_2341(640, 728), 1);
    add_background_object(create_jcbamboo3_2341(640, 616), 1);
    add_background_object(create_jcbamboo4_2342(640, 1272), 1);
    add_background_object(create_jcbamboo3_2340(512, 840), 1);
    add_background_object(create_jcbamboo3_2341(512, 728), 1);
    add_background_object(create_jcbamboo3_2341(512, 616), 1);
    add_background_object(create_jcbamboo4_2342(512, 1272), 1);
    add_background_object(create_jcbamboo3_2340(392, 840), 1);
    add_background_object(create_jcbamboo3_2341(392, 728), 1);
    add_background_object(create_jcbamboo3_2341(392, 616), 1);
    add_background_object(create_jcbamboo4_2342(392, 1272), 1);
    add_background_object(create_jcbamboo3_2340(256, 840), 1);
    add_background_object(create_jcbamboo3_2341(256, 728), 1);
    add_background_object(create_jcbamboo3_2341(256, 616), 1);
    add_background_object(create_jcbamboo4_2342(256, 1272), 1);
    add_background_object(create_jcbamboo3_2340(88, 840), 1);
    add_background_object(create_jcbamboo3_2341(88, 728), 1);
    add_background_object(create_jcbamboo3_2341(88, 616), 1);
    add_background_object(create_jcbamboo4_2342(88, 1272), 1);
    add_background_object(create_jcbamboo3_2340(1744, 896), 1);
    add_background_object(create_jcbamboo3_2341(1744, 784), 1);
    add_background_object(create_jcbamboo3_2341(1744, 672), 1);
    add_background_object(create_jcbamboo3_2341(1744, 560), 1);
    add_background_object(create_jcbamboo3_2341(1744, 456), 1);
    add_background_object(create_jcbamboo3_2340(1864, 904), 1);
    add_background_object(create_jcbamboo3_2341(1864, 792), 1);
    add_background_object(create_jcbamboo3_2341(1864, 680), 1);
    add_background_object(create_jcbamboo3_2341(1864, 568), 1);
    add_background_object(create_jcbamboo3_2341(1864, 464), 1);
    add_background_object(create_jcbamboo3_2340(1624, 904), 1);
    add_background_object(create_jcbamboo3_2341(1624, 792), 1);
    add_background_object(create_jcbamboo3_2341(1624, 680), 1);
    add_background_object(create_jcbamboo3_2341(1624, 568), 1);
    add_background_object(create_jcbamboo3_2341(1624, 456), 1);
    add_background_object(create_jcbamboo3_2340(1384, 904), 1);
    add_background_object(create_jcbamboo3_2341(1384, 792), 1);
    add_background_object(create_jcbamboo3_2341(1384, 680), 1);
    add_background_object(create_jcbamboo3_2341(1384, 568), 1);
    add_background_object(create_jcbamboo3_2341(1384, 464), 1);
    add_background_object(create_jcbamboo3_2340(1272, 896), 1);
    add_background_object(create_jcbamboo3_2341(1272, 784), 1);
    add_background_object(create_jcbamboo3_2341(1272, 672), 1);
    add_background_object(create_jcbamboo3_2341(1272, 560), 1);
    add_background_object(create_jcbamboo3_2341(1272, 456), 1);
    add_background_object(create_jcbamboo3_2340(1504, 904), 1);
    add_background_object(create_jcbamboo3_2341(1504, 792), 1);
    add_background_object(create_jcbamboo3_2341(1504, 680), 1);
    add_background_object(create_jcbamboo3_2341(1504, 568), 1);
    add_background_object(create_jcbamboo3_2341(1504, 456), 1);
    add_background_object(create_jcbamboo4_2342(1272, 1416), 1);
    add_background_object(create_jcbamboo4_2342(1384, 1336), 1);
    add_background_object(create_jcbamboo4_2342(1384, 1424), 1);
    add_background_object(create_jcbamboo4_2342(1504, 1336), 1);
    add_background_object(create_jcbamboo4_2342(1504, 1424), 1);
    add_background_object(create_jcbamboo4_2342(1624, 1336), 1);
    add_background_object(create_jcbamboo4_2342(1624, 1424), 1);
    add_background_object(create_jcbamboo4_2342(1984, 1416), 1);
    add_background_object(create_jcbamboo4_2342(1744, 1416), 1);
    add_background_object(create_jcbamboo4_2342(1864, 1336), 1);
    add_background_object(create_jcbamboo4_2342(1864, 1424), 1);
    add_background_object(create_jcbamboo4_2342(2104, 832), 1);
    add_background_object(create_jcbamboo4_2342(2104, 920), 1);
    add_background_object(create_jcbamboo4_2342(2104, 1008), 1);
    add_background_object(create_jcbamboo4_2342(2104, 1096), 1);
    add_background_object(create_jcbamboo4_2342(2104, 1184), 1);
    add_background_object(create_jcbamboo4_2342(2104, 1272), 1);
    add_background_object(create_jcbamboo4_2342(2104, 1360), 1);
    add_background_object(create_jcbamboo4_2342(2208, 832), 1);
    add_background_object(create_jcbamboo4_2342(2208, 920), 1);
    add_background_object(create_jcbamboo4_2342(2208, 1008), 1);
    add_background_object(create_jcbamboo4_2342(2208, 1096), 1);
    add_background_object(create_jcbamboo4_2342(2208, 1184), 1);
    add_background_object(create_jcbamboo4_2342(2208, 1272), 1);
    add_background_object(create_jcbamboo4_2342(2312, 944), 1);
    add_background_object(create_jcbamboo4_2342(2312, 1032), 1);
    add_background_object(create_jcbamboo4_2342(2312, 1120), 1);
    add_background_object(create_jcbamboo4_2342(2312, 1208), 1);
    add_background_object(create_jcbamboo4_2342(2312, 1296), 1);
    add_background_object(create_jcbamboo4_2342(2416, 944), 1);
    add_background_object(create_jcbamboo4_2342(2416, 1032), 1);
    add_background_object(create_jcbamboo4_2342(2416, 1120), 1);
    add_background_object(create_jcbamboo4_2342(2416, 1208), 1);
    add_background_object(create_jcbamboo4_2342(2416, 1296), 1);
    add_background_object(create_jcbamboo4_2342(2512, 944), 1);
    add_background_object(create_jcbamboo4_2342(2512, 1032), 1);
    add_background_object(create_jcbamboo4_2342(2512, 1120), 1);
    add_background_object(create_jcbamboo4_2342(2512, 1208), 1);
    add_background_object(create_jcbamboo4_2342(2512, 1296), 1);
    add_background_object(create_jcbamboo3_2340(2712, 224), 1);
    add_background_object(create_jcbamboo3_2340(2608, 224), 1);
    add_background_object(create_jcbamboo3_2340(2816, 336), 1);
    add_background_object(create_jcbamboo3_2341(2608, 112), 1);
    add_background_object(create_jcbamboo3_2341(2712, 112), 1);
    add_background_object(create_jcbamboo3_2341(2816, 224), 1);
    add_background_object(create_jcbamboo4_2342(2816, 768), 1);
    add_background_object(create_jcbamboo4_2342(2816, 856), 1);
    add_background_object(create_jcbamboo3_2340(2920, 336), 1);
    add_background_object(create_jcbamboo3_2341(2920, 224), 1);
    add_background_object(create_jcbamboo4_2342(2920, 768), 1);
    add_background_object(create_jcbamboo4_2342(2920, 856), 1);
    add_background_object(create_jcbamboo3_2341(2608, 0), 1);
    add_background_object(create_jcbamboo3_2341(2712, 0), 1);
    add_background_object(create_jcbamboo3_2341(2816, 112), 1);
    add_background_object(create_jcbamboo3_2341(2920, 112), 1);
    add_background_object(create_jcbamboo4_2342(2712, 656), 1);
    add_background_object(create_jcbamboo4_2342(2712, 744), 1);
    add_background_object(create_jcbamboo4_2342(2608, 656), 1);
    add_background_object(create_jcbamboo4_2342(2608, 744), 1);
    add_background_object(create_jcbamboo3_2341(2816, 0), 1);
    add_background_object(create_jcbamboo3_2341(2920, 0), 1);
    add_background_object(create_jcbamboo3_2340(3016, 336), 1);
    add_background_object(create_jcbamboo3_2341(3016, 224), 1);
    add_background_object(create_jcbamboo4_2342(3016, 768), 1);
    add_background_object(create_jcbamboo4_2342(3016, 856), 1);
    add_background_object(create_jcbamboo3_2341(3016, 112), 1);
    add_background_object(create_jcbamboo3_2341(3016, 0), 1);
    add_background_object(create_jcbamboo4_2342(2608, 832), 1);
    add_background_object(create_jcbamboo4_2342(2608, 920), 1);
    add_background_object(create_jcbamboo4_2342(2608, 1008), 1);
    add_background_object(create_jcbamboo4_2342(2608, 1096), 1);
    add_background_object(create_jcbamboo4_2342(2608, 1184), 1);
    add_background_object(create_jcbamboo4_2342(2608, 1272), 1);
    add_background_object(create_jcbamboo4_2342(2608, 1360), 1);
    add_background_object(create_jcbamboo4_2342(2712, 832), 1);
    add_background_object(create_jcbamboo4_2342(2712, 920), 1);
    add_background_object(create_jcbamboo4_2342(2712, 1008), 1);
    add_background_object(create_jcbamboo4_2342(2712, 1096), 1);
    add_background_object(create_jcbamboo4_2342(2712, 1184), 1);
    add_background_object(create_jcbamboo4_2342(2712, 1272), 1);
    add_background_object(create_jcbamboo4_2342(2816, 944), 1);
    add_background_object(create_jcbamboo4_2342(2816, 1032), 1);
    add_background_object(create_jcbamboo4_2342(2816, 1120), 1);
    add_background_object(create_jcbamboo4_2342(2816, 1208), 1);
    add_background_object(create_jcbamboo4_2342(2816, 1296), 1);
    add_background_object(create_jcbamboo4_2342(2920, 944), 1);
    add_background_object(create_jcbamboo4_2342(2920, 1032), 1);
    add_background_object(create_jcbamboo4_2342(2920, 1120), 1);
    add_background_object(create_jcbamboo4_2342(2920, 1208), 1);
    add_background_object(create_jcbamboo4_2342(2920, 1296), 1);
    add_background_object(create_jcbamboo4_2342(3016, 944), 1);
    add_background_object(create_jcbamboo4_2342(3016, 1032), 1);
    add_background_object(create_jcbamboo4_2342(3016, 1120), 1);
    add_background_object(create_jcbamboo4_2342(3016, 1208), 1);
    add_background_object(create_jcbamboo4_2342(3016, 1296), 1);
    add_background_object(create_jcbamboo3_2340(3216, 224), 1);
    add_background_object(create_jcbamboo3_2340(3112, 224), 1);
    add_background_object(create_jcbamboo3_2340(3320, 336), 1);
    add_background_object(create_jcbamboo3_2341(3112, 112), 1);
    add_background_object(create_jcbamboo3_2341(3216, 112), 1);
    add_background_object(create_jcbamboo3_2341(3320, 224), 1);
    add_background_object(create_jcbamboo4_2342(3320, 768), 1);
    add_background_object(create_jcbamboo4_2342(3320, 856), 1);
    add_background_object(create_jcbamboo3_2340(3424, 336), 1);
    add_background_object(create_jcbamboo3_2341(3424, 224), 1);
    add_background_object(create_jcbamboo4_2342(3424, 768), 1);
    add_background_object(create_jcbamboo4_2342(3424, 856), 1);
    add_background_object(create_jcbamboo3_2341(3112, 0), 1);
    add_background_object(create_jcbamboo3_2341(3216, 0), 1);
    add_background_object(create_jcbamboo3_2341(3320, 112), 1);
    add_background_object(create_jcbamboo3_2341(3424, 112), 1);
    add_background_object(create_jcbamboo4_2342(3216, 656), 1);
    add_background_object(create_jcbamboo4_2342(3216, 744), 1);
    add_background_object(create_jcbamboo4_2342(3112, 656), 1);
    add_background_object(create_jcbamboo4_2342(3112, 744), 1);
    add_background_object(create_jcbamboo3_2341(3320, 0), 1);
    add_background_object(create_jcbamboo3_2341(3424, 0), 1);
    add_background_object(create_jcbamboo3_2340(3520, 336), 1);
    add_background_object(create_jcbamboo3_2341(3520, 224), 1);
    add_background_object(create_jcbamboo4_2342(3520, 768), 1);
    add_background_object(create_jcbamboo4_2342(3520, 856), 1);
    add_background_object(create_jcbamboo3_2341(3520, 112), 1);
    add_background_object(create_jcbamboo3_2341(3520, 0), 1);
    add_background_object(create_jcbamboo4_2342(3112, 832), 1);
    add_background_object(create_jcbamboo4_2342(3112, 920), 1);
    add_background_object(create_jcbamboo4_2342(3112, 1008), 1);
    add_background_object(create_jcbamboo4_2342(3112, 1096), 1);
    add_background_object(create_jcbamboo4_2342(3112, 1184), 1);
    add_background_object(create_jcbamboo4_2342(3112, 1272), 1);
    add_background_object(create_jcbamboo4_2342(3112, 1360), 1);
    add_background_object(create_jcbamboo4_2342(3216, 832), 1);
    add_background_object(create_jcbamboo4_2342(3216, 920), 1);
    add_background_object(create_jcbamboo4_2342(3216, 1008), 1);
    add_background_object(create_jcbamboo4_2342(3216, 1096), 1);
    add_background_object(create_jcbamboo4_2342(3216, 1184), 1);
    add_background_object(create_jcbamboo4_2342(3216, 1272), 1);
    add_background_object(create_jcbamboo4_2342(3320, 944), 1);
    add_background_object(create_jcbamboo4_2342(3320, 1032), 1);
    add_background_object(create_jcbamboo4_2342(3320, 1120), 1);
    add_background_object(create_jcbamboo4_2342(3320, 1208), 1);
    add_background_object(create_jcbamboo4_2342(3320, 1296), 1);
    add_background_object(create_jcbamboo4_2342(3424, 944), 1);
    add_background_object(create_jcbamboo4_2342(3424, 1032), 1);
    add_background_object(create_jcbamboo4_2342(3424, 1120), 1);
    add_background_object(create_jcbamboo4_2342(3424, 1208), 1);
    add_background_object(create_jcbamboo4_2342(3424, 1296), 1);
    add_background_object(create_jcbamboo4_2342(3520, 944), 1);
    add_background_object(create_jcbamboo4_2342(3520, 1032), 1);
    add_background_object(create_jcbamboo4_2342(3520, 1120), 1);
    add_background_object(create_jcbamboo4_2342(3520, 1208), 1);
    add_background_object(create_jcbamboo4_2342(3520, 1296), 1);
    add_background_object(create_jcbamboo3_2340(3656, 320), 1);
    add_background_object(create_jcbamboo3_2341(3656, 208), 1);
    add_background_object(create_jcbamboo4_2342(3656, 752), 1);
    add_background_object(create_jcbamboo4_2342(3656, 840), 1);
    add_background_object(create_jcbamboo3_2341(3656, 96), 1);
    add_background_object(create_jcbamboo3_2341(3656, -16), 1);
    add_background_object(create_jcbamboo4_2342(3656, 928), 1);
    add_background_object(create_jcbamboo4_2342(3656, 1016), 1);
    add_background_object(create_jcbamboo4_2342(3656, 1104), 1);
    add_background_object(create_jcbamboo4_2342(3656, 1192), 1);
    add_background_object(create_jcbamboo4_2342(3656, 1280), 1);
    add_background_object(create_jcbamboo3_2340(3808, 336), 1);
    add_background_object(create_jcbamboo3_2341(3808, 224), 1);
    add_background_object(create_jcbamboo4_2342(3808, 768), 1);
    add_background_object(create_jcbamboo4_2342(3808, 856), 1);
    add_background_object(create_jcbamboo3_2341(3808, 112), 1);
    add_background_object(create_jcbamboo3_2341(3808, 0), 1);
    add_background_object(create_jcbamboo4_2342(3808, 944), 1);
    add_background_object(create_jcbamboo4_2342(3808, 1032), 1);
    add_background_object(create_jcbamboo4_2342(3808, 1120), 1);
    add_background_object(create_jcbamboo4_2342(3808, 1208), 1);
    add_background_object(create_jcbamboo4_2342(3808, 1296), 1);
    add_background_object(create_jcbamboo4_2342(1272, 1504), 1);
    add_background_object(create_jcbamboo4_2342(1384, 1512), 1);
    add_background_object(create_jcbamboo4_2342(1504, 1512), 1);
    add_background_object(create_jcbamboo4_2342(1624, 1512), 1);
    add_background_object(create_jcbamboo4_2342(1984, 1504), 1);
    add_background_object(create_jcbamboo4_2342(1744, 1504), 1);
    add_background_object(create_jcbamboo4_2342(1864, 1512), 1);
    add_background_object(create_jcbamboo4_2342(2104, 1448), 1);
    add_background_object(create_jcbamboo4_2342(2208, 1360), 1);
    add_background_object(create_jcbamboo4_2342(2208, 1448), 1);
    add_background_object(create_jcbamboo4_2342(2312, 1384), 1);
    add_background_object(create_jcbamboo4_2342(2312, 1472), 1);
    add_background_object(create_jcbamboo4_2342(2416, 1384), 1);
    add_background_object(create_jcbamboo4_2342(2416, 1472), 1);
    add_background_object(create_jcbamboo4_2342(2512, 1384), 1);
    add_background_object(create_jcbamboo4_2342(2512, 1472), 1);
    add_background_object(create_jcbamboo4_2342(2608, 1448), 1);
    add_background_object(create_jcbamboo4_2342(2712, 1360), 1);
    add_background_object(create_jcbamboo4_2342(2712, 1448), 1);
    add_background_object(create_jcbamboo4_2342(2816, 1384), 1);
    add_background_object(create_jcbamboo4_2342(2920, 1384), 1);
    add_background_object(create_jcbamboo4_2342(3016, 1384), 1);
    add_background_object(create_jcbamboo4_2342(2816, 1472), 1);
    add_background_object(create_jcbamboo4_2342(2920, 1472), 1);
    add_background_object(create_jcbamboo4_2342(3216, 1360), 1);
    add_background_object(create_jcbamboo4_2342(3320, 1384), 1);
    add_background_object(create_jcbamboo4_2342(3424, 1384), 1);
    add_background_object(create_jcbamboo4_2342(3520, 1384), 1);
    add_background_object(create_jcbamboo4_2342(3656, 1368), 1);
    add_background_object(create_jcbamboo4_2342(3808, 1384), 1);
    add_background_object(create_jcbamboo4_2342(3216, 1448), 1);
    add_background_object(create_jcbamboo4_2342(3320, 1472), 1);
    add_background_object(create_jcbamboo4_2342(3424, 1472), 1);
    add_background_object(create_jcbamboo4_2342(3520, 1472), 1);
    add_background_object(create_jcbamboo4_2342(3656, 1456), 1);
    add_background_object(create_jcbamboo4_2342(3808, 1472), 1);
    add_background_object(create_jcbamboo4_2342(3112, 1448), 1);
    add_background_object(create_jcbamboo4_2342(3016, 1472), 1);
    add_background_object(create_jcbamboo4_2342(2104, 1536), 1);
    add_background_object(create_jcbamboo4_2342(2208, 1536), 1);
    add_background_object(create_jcbamboo4_2342(2312, 1560), 1);
    add_background_object(create_jcbamboo4_2342(2416, 1560), 1);
    add_background_object(create_jcbamboo4_2342(2512, 1560), 1);
    add_background_object(create_jcbamboo4_2342(2608, 1536), 1);
    add_background_object(create_jcbamboo4_2342(2712, 1536), 1);
    add_background_object(create_jcbamboo4_2342(2816, 1560), 1);
    add_background_object(create_jcbamboo4_2342(2920, 1560), 1);
    add_background_object(create_jcbamboo4_2342(3112, 1536), 1);
    add_background_object(create_jcbamboo4_2342(3016, 1560), 1);
    add_background_object(create_jcbamboo4_2342(3216, 1536), 1);
    add_background_object(create_jcbamboo4_2342(3320, 1560), 1);
    add_background_object(create_jcbamboo4_2342(3424, 1560), 1);
    add_background_object(create_jcbamboo4_2342(3520, 1560), 1);
    add_background_object(create_jcbamboo4_2342(3656, 1544), 1);
    add_background_object(create_jcbamboo4_2342(3808, 1560), 1);
    add_background_object(create_jcbamboo4_2342(2104, 1624), 1);
    add_background_object(create_jcbamboo4_2342(2208, 1624), 1);
    add_background_object(create_jcbamboo4_2342(2312, 1648), 1);
    add_background_object(create_jcbamboo4_2342(2416, 1648), 1);
    add_background_object(create_jcbamboo4_2342(2512, 1648), 1);
    add_background_object(create_jcbamboo4_2342(2608, 1624), 1);
    add_background_object(create_jcbamboo4_2342(2712, 1624), 1);
    add_background_object(create_jcbamboo4_2342(2816, 1648), 1);
    add_background_object(create_jcbamboo4_2342(2920, 1648), 1);
    add_background_object(create_jcbamboo4_2342(3112, 1624), 1);
    add_background_object(create_jcbamboo4_2342(3016, 1648), 1);
    add_background_object(create_jcbamboo4_2342(3216, 1624), 1);
    add_background_object(create_jcbamboo4_2342(3320, 1648), 1);
    add_background_object(create_jcbamboo4_2342(3424, 1648), 1);
    add_background_object(create_jcbamboo4_2342(3520, 1648), 1);
    add_background_object(create_jcbamboo4_2342(3656, 1632), 1);
    add_background_object(create_jcbamboo4_2342(3808, 1648), 1);
    add_background_object(create_jcbamboo4_2342(2104, 1712), 1);
    add_background_object(create_jcbamboo4_2342(2208, 1712), 1);
    add_background_object(create_jcbamboo4_2342(2312, 1736), 1);
    add_background_object(create_jcbamboo4_2342(2416, 1736), 1);
    add_background_object(create_jcbamboo4_2342(2512, 1736), 1);
    add_background_object(create_jcbamboo4_2342(2608, 1712), 1);
    add_background_object(create_jcbamboo4_2342(2712, 1712), 1);
    add_background_object(create_jcbamboo4_2342(2816, 1736), 1);
    add_background_object(create_jcbamboo4_2342(2920, 1736), 1);
    add_background_object(create_jcbamboo4_2342(3112, 1712), 1);
    add_background_object(create_jcbamboo4_2342(3016, 1736), 1);
    add_background_object(create_jcbamboo4_2342(3216, 1712), 1);
    add_background_object(create_jcbamboo4_2342(3320, 1736), 1);
    add_background_object(create_jcbamboo4_2342(3424, 1736), 1);
    add_background_object(create_jcbamboo4_2342(3520, 1736), 1);
    add_background_object(create_jcbamboo4_2342(3656, 1720), 1);
    add_background_object(create_jcbamboo4_2342(3808, 1736), 1);
    add_background_object(create_jcbamboo4_2342(2104, 1800), 1);
    add_background_object(create_jcbamboo4_2342(2208, 1800), 1);
    add_background_object(create_jcbamboo4_2342(2312, 1824), 1);
    add_background_object(create_jcbamboo4_2342(2416, 1824), 1);
    add_background_object(create_jcbamboo4_2342(2512, 1824), 1);
    add_background_object(create_jcbamboo4_2342(2608, 1800), 1);
    add_background_object(create_jcbamboo4_2342(2712, 1800), 1);
    add_background_object(create_jcbamboo4_2342(2816, 1824), 1);
    add_background_object(create_jcbamboo4_2342(2920, 1824), 1);
    add_background_object(create_jcbamboo4_2342(3112, 1800), 1);
    add_background_object(create_jcbamboo4_2342(3016, 1824), 1);
    add_background_object(create_jcbamboo4_2342(3216, 1800), 1);
    add_background_object(create_jcbamboo4_2342(3320, 1824), 1);
    add_background_object(create_jcbamboo4_2342(3424, 1824), 1);
    add_background_object(create_jcbamboo4_2342(3520, 1824), 1);
    add_background_object(create_jcbamboo4_2342(3656, 1808), 1);
    add_background_object(create_jcbamboo4_2342(3808, 1824), 1);
    add_background_object(create_jcbamboo4_2342(2104, 1888), 1);
    add_background_object(create_jcbamboo4_2342(2208, 1888), 1);
    add_background_object(create_jcbamboo4_2342(2312, 1912), 1);
    add_background_object(create_jcbamboo4_2342(2416, 1912), 1);
    add_background_object(create_jcbamboo4_2342(2512, 1912), 1);
    add_background_object(create_jcbamboo4_2342(2608, 1888), 1);
    add_background_object(create_jcbamboo4_2342(2712, 1888), 1);
    add_background_object(create_jcbamboo4_2342(2816, 1912), 1);
    add_background_object(create_jcbamboo4_2342(2920, 1912), 1);
    add_background_object(create_jcbamboo4_2342(3112, 1888), 1);
    add_background_object(create_jcbamboo4_2342(3016, 1912), 1);
    add_background_object(create_jcbamboo4_2342(3216, 1888), 1);
    add_background_object(create_jcbamboo4_2342(3320, 1912), 1);
    add_background_object(create_jcbamboo4_2342(3424, 1912), 1);
    add_background_object(create_jcbamboo4_2342(3520, 1912), 1);
    add_background_object(create_jcbamboo4_2342(3656, 1896), 1);
    add_background_object(create_jcbamboo4_2342(3808, 1912), 1);
    add_background_object(create_jcbamboo4_2342(2104, 1976), 1);
    add_background_object(create_jcbamboo4_2342(2208, 1976), 1);
    add_background_object(create_jcbamboo4_2342(2312, 2000), 1);
    add_background_object(create_jcbamboo4_2342(2416, 2000), 1);
    add_background_object(create_jcbamboo4_2342(2512, 2000), 1);
    add_background_object(create_jcbamboo4_2342(2608, 1976), 1);
    add_background_object(create_jcbamboo4_2342(2712, 1976), 1);
    add_background_object(create_jcbamboo4_2342(2816, 2000), 1);
    add_background_object(create_jcbamboo4_2342(2920, 2000), 1);
    add_background_object(create_jcbamboo4_2342(3112, 1976), 1);
    add_background_object(create_jcbamboo4_2342(3016, 2000), 1);
    add_background_object(create_jcbamboo4_2342(3216, 1976), 1);
    add_background_object(create_jcbamboo4_2342(3320, 2000), 1);
    add_background_object(create_jcbamboo4_2342(3424, 2000), 1);
    add_background_object(create_jcbamboo4_2342(3520, 2000), 1);
    add_background_object(create_jcbamboo4_2342(3656, 1984), 1);
    add_background_object(create_jcbamboo4_2342(3808, 2000), 1);
    add_background_object(create_jcbamboo4_2342(1984, 1592), 1);
    add_background_object(create_jcbamboo4_2342(1984, 1680), 1);
    add_background_object(create_jcbamboo4_2342(1984, 1768), 1);
    add_background_object(create_jcbamboo4_2342(1984, 1856), 1);
    add_background_object(create_jcbamboo4_2342(1864, 1600), 1);
    add_background_object(create_jcbamboo4_2342(1864, 1688), 1);
    add_background_object(create_jcbamboo4_2342(1864, 1776), 1);
    add_background_object(create_jcbamboo4_2342(1744, 1592), 1);
    add_background_object(create_jcbamboo4_2342(1744, 1680), 1);
    add_background_object(create_jcbamboo4_2342(1624, 1600), 1);
    add_background_object(create_jcbamboo3_2341(896, 496), 1);
    add_background_object(create_jcbamboo3_2341(896, 384), 1);
    add_background_object(create_jcbamboo3_2341(768, 496), 1);
    add_background_object(create_jcbamboo3_2341(768, 384), 1);
    add_background_object(create_jcbamboo3_2341(640, 504), 1);
    add_background_object(create_jcbamboo3_2341(640, 392), 1);
    add_background_object(create_jcbamboo3_2341(512, 504), 1);
    add_background_object(create_jcbamboo3_2341(512, 392), 1);
    add_background_object(create_jcbamboo3_2341(392, 504), 1);
    add_background_object(create_jcbamboo3_2341(392, 392), 1);
    add_background_object(create_jcbamboo3_2341(256, 504), 1);
    add_background_object(create_jcbamboo3_2341(256, 392), 1);
    add_background_object(create_jcbamboo3_2341(88, 504), 1);
    add_background_object(create_jcbamboo3_2341(88, 392), 1);
    add_background_object(create_jcbamboo3_2341(1024, 376), 1);
    add_background_object(create_jcbamboo3_2341(1136, 416), 1);
    add_background_object(create_jcbamboo3_2341(896, 272), 1);
    add_background_object(create_jcbamboo3_2341(768, 272), 1);
    add_background_object(create_jcbamboo3_2341(640, 280), 1);
    add_background_object(create_jcbamboo3_2341(512, 280), 1);
    add_background_object(create_jcbamboo3_2341(392, 280), 1);
    add_background_object(create_jcbamboo3_2341(256, 280), 1);
    add_background_object(create_jcbamboo3_2341(88, 280), 1);
    add_background_object(create_jcbamboo3_2341(1024, 264), 1);
    add_background_object(create_jcbamboo3_2341(1136, 304), 1);
    add_background_object(create_jcbamboo3_2341(896, 160), 1);
    add_background_object(create_jcbamboo3_2341(768, 160), 1);
    add_background_object(create_jcbamboo3_2341(640, 168), 1);
    add_background_object(create_jcbamboo3_2341(512, 168), 1);
    add_background_object(create_jcbamboo3_2341(392, 168), 1);
    add_background_object(create_jcbamboo3_2341(256, 168), 1);
    add_background_object(create_jcbamboo3_2341(88, 168), 1);
    add_background_object(create_jcbamboo3_2341(1024, 152), 1);
    add_background_object(create_jcbamboo3_2341(1136, 192), 1);
    add_background_object(create_jcbamboo3_2341(896, 48), 1);
    add_background_object(create_jcbamboo3_2341(768, 48), 1);
    add_background_object(create_jcbamboo3_2341(640, 56), 1);
    add_background_object(create_jcbamboo3_2341(512, 56), 1);
    add_background_object(create_jcbamboo3_2341(392, 56), 1);
    add_background_object(create_jcbamboo3_2341(256, 56), 1);
    add_background_object(create_jcbamboo3_2341(88, 56), 1);
    add_background_object(create_jcbamboo3_2341(1024, 40), 1);
    add_background_object(create_jcbamboo3_2341(1136, 80), 1);
    add_background_object(create_jcbamboo3_2341(896, -64), 1);
    add_background_object(create_jcbamboo3_2341(768, -64), 1);
    add_background_object(create_jcbamboo3_2341(640, -56), 1);
    add_background_object(create_jcbamboo3_2341(512, -56), 1);
    add_background_object(create_jcbamboo3_2341(392, -56), 1);
    add_background_object(create_jcbamboo3_2341(256, -56), 1);
    add_background_object(create_jcbamboo3_2341(88, -56), 1);
    add_background_object(create_jcbamboo3_2341(1024, -72), 1);
    add_background_object(create_jcbamboo3_2341(1136, -32), 1);
    add_background_object(create_jcbamboo4_2342(1272, 1328), 1);
    add_background_object(create_jcbamboo4_2342(1744, 1328), 1);
    add_background_object(create_jcbamboo4_2342(1984, 1328), 1);
    add_background_object(create_jcbamboo3_2341(1984, 344), 1);
    add_background_object(create_jcbamboo3_2341(1984, 232), 1);
    add_background_object(create_jcbamboo3_2341(1984, 120), 1);
    add_background_object(create_jcbamboo3_2341(1984, 8), 1);
    add_background_object(create_jcbamboo3_2341(1744, 344), 1);
    add_background_object(create_jcbamboo3_2341(1744, 232), 1);
    add_background_object(create_jcbamboo3_2341(1744, 120), 1);
    add_background_object(create_jcbamboo3_2341(1744, 16), 1);
    add_background_object(create_jcbamboo3_2341(1864, 352), 1);
    add_background_object(create_jcbamboo3_2341(1864, 240), 1);
    add_background_object(create_jcbamboo3_2341(1864, 128), 1);
    add_background_object(create_jcbamboo3_2341(1864, 24), 1);
    add_background_object(create_jcbamboo3_2341(1624, 352), 1);
    add_background_object(create_jcbamboo3_2341(1624, 240), 1);
    add_background_object(create_jcbamboo3_2341(1624, 128), 1);
    add_background_object(create_jcbamboo3_2341(1624, 16), 1);
    add_background_object(create_jcbamboo3_2341(1384, 352), 1);
    add_background_object(create_jcbamboo3_2341(1384, 240), 1);
    add_background_object(create_jcbamboo3_2341(1384, 128), 1);
    add_background_object(create_jcbamboo3_2341(1384, 24), 1);
    add_background_object(create_jcbamboo3_2341(1272, 344), 1);
    add_background_object(create_jcbamboo3_2341(1272, 232), 1);
    add_background_object(create_jcbamboo3_2341(1272, 120), 1);
    add_background_object(create_jcbamboo3_2341(1272, 16), 1);
    add_background_object(create_jcbamboo3_2341(1504, 352), 1);
    add_background_object(create_jcbamboo3_2341(1504, 240), 1);
    add_background_object(create_jcbamboo3_2341(1504, 128), 1);
    add_background_object(create_jcbamboo3_2341(1504, 16), 1);
    add_background_object(create_jcbamboo3_2341(1984, -104), 1);
    add_background_object(create_jcbamboo3_2341(1744, -96), 1);
    add_background_object(create_jcbamboo3_2341(1864, -88), 1);
    add_background_object(create_jcbamboo3_2341(1624, -96), 1);
    add_background_object(create_jcbamboo3_2341(1384, -88), 1);
    add_background_object(create_jcbamboo3_2341(1272, -96), 1);
    add_background_object(create_jcbamboo3_2341(1504, -96), 1);
    add_background_object(create_jcvinewall2_2458(3432, 720), 1);
    add_background_object(create_jcvinewall2_2458(3432, 848), 1);
    add_background_object(create_jcvinewall2_2458(3432, 976), 1);
    add_background_object(create_jcvinewall2_2458(3432, 1104), 1);
    add_background_object(create_jcvinewall2_2458(3432, 1232), 1);
    add_background_object(create_jcvinewall2_2458(3432, 464), 1);
    add_background_object(create_jcvinewall2_2458(3432, 592), 1);
    add_background_object(create_jcvinewall2_2458(3432, 336), 1);
    add_background_object(create_jcvinewall2_2458(3432, 208), 1);
    add_background_object(create_jcvinewall2_2458(3432, 80), 1);
    add_background_object(create_jcvinewall2_2458(3432, -48), 1);
    add_background_object(create_jcvinewall2_2458(3552, 720), 1);
    add_background_object(create_jcvinewall2_2458(3552, 848), 1);
    add_background_object(create_jcvinewall2_2458(3552, 976), 1);
    add_background_object(create_jcvinewall2_2458(3552, 1104), 1);
    add_background_object(create_jcvinewall2_2458(3552, 1232), 1);
    add_background_object(create_jcvinewall2_2458(3552, 464), 1);
    add_background_object(create_jcvinewall2_2458(3552, 592), 1);
    add_background_object(create_jcvinewall2_2458(3552, 336), 1);
    add_background_object(create_jcvinewall2_2458(3552, 208), 1);
    add_background_object(create_jcvinewall2_2458(3552, 80), 1);
    add_background_object(create_jcvinewall2_2458(3552, -48), 1);
    add_background_object(create_jcvinewall2_2458(3672, 720), 1);
    add_background_object(create_jcvinewall2_2458(3672, 848), 1);
    add_background_object(create_jcvinewall2_2458(3672, 976), 1);
    add_background_object(create_jcvinewall2_2458(3672, 1104), 1);
    add_background_object(create_jcvinewall2_2458(3672, 1232), 1);
    add_background_object(create_jcvinewall2_2458(3672, 464), 1);
    add_background_object(create_jcvinewall2_2458(3672, 592), 1);
    add_background_object(create_jcvinewall2_2458(3672, 336), 1);
    add_background_object(create_jcvinewall2_2458(3672, 208), 1);
    add_background_object(create_jcvinewall2_2458(3672, 80), 1);
    add_background_object(create_jcvinewall2_2458(3672, -48), 1);
    add_background_object(create_jcvinewall2_2458(3792, 720), 1);
    add_background_object(create_jcvinewall2_2458(3792, 848), 1);
    add_background_object(create_jcvinewall2_2458(3792, 976), 1);
    add_background_object(create_jcvinewall2_2458(3792, 1104), 1);
    add_background_object(create_jcvinewall2_2458(3792, 1232), 1);
    add_background_object(create_jcvinewall2_2458(3792, 464), 1);
    add_background_object(create_jcvinewall2_2458(3792, 592), 1);
    add_background_object(create_jcvinewall2_2458(3792, 336), 1);
    add_background_object(create_jcvinewall2_2458(3792, 208), 1);
    add_background_object(create_jcvinewall2_2458(3792, 80), 1);
    add_background_object(create_jcvinewall2_2458(3792, -48), 1);
    add_background_object(create_jcvinewall2_2458(3912, 720), 1);
    add_background_object(create_jcvinewall2_2458(3912, 848), 1);
    add_background_object(create_jcvinewall2_2458(3912, 976), 1);
    add_background_object(create_jcvinewall2_2458(3912, 1104), 1);
    add_background_object(create_jcvinewall2_2458(3912, 1232), 1);
    add_background_object(create_jcvinewall2_2458(3912, 464), 1);
    add_background_object(create_jcvinewall2_2458(3912, 592), 1);
    add_background_object(create_jcvinewall2_2458(3912, 336), 1);
    add_background_object(create_jcvinewall2_2458(3912, 208), 1);
    add_background_object(create_jcvinewall2_2458(3912, 80), 1);
    add_background_object(create_jcvinewall2_2458(3912, -48), 1);
    add_background_object(create_jcvinewall2_2458(4032, 720), 1);
    add_background_object(create_jcvinewall2_2458(4032, 848), 1);
    add_background_object(create_jcvinewall2_2458(4032, 976), 1);
    add_background_object(create_jcvinewall2_2458(4032, 1104), 1);
    add_background_object(create_jcvinewall2_2458(4032, 1232), 1);
    add_background_object(create_jcvinewall2_2458(4032, 464), 1);
    add_background_object(create_jcvinewall2_2458(4032, 592), 1);
    add_background_object(create_jcvinewall2_2458(4032, 336), 1);
    add_background_object(create_jcvinewall2_2458(4032, 208), 1);
    add_background_object(create_jcvinewall2_2458(4032, 80), 1);
    add_background_object(create_jcvinewall2_2458(4032, -48), 1);
    add_background_object(create_jcbamboo4_2342(5776, 1272), 1);
    add_background_object(create_jcbamboo4_2342(5880, 1296), 1);
    add_background_object(create_jcbamboo4_2342(5984, 1296), 1);
    add_background_object(create_jcbamboo4_2342(6080, 1296), 1);
    add_background_object(create_jcbamboo4_2342(6168, 1296), 1);
    add_background_object(create_jcbamboo4_2342(6264, 1272), 1);
    add_background_object(create_jcbamboo4_2342(6368, 1272), 1);
    add_background_object(create_jcbamboo4_2342(6472, 1296), 1);
    add_background_object(create_jcbamboo4_2342(6576, 1296), 1);
    add_background_object(create_jcbamboo4_2342(5776, 1360), 1);
    add_background_object(create_jcbamboo4_2342(5880, 1384), 1);
    add_background_object(create_jcbamboo4_2342(5984, 1384), 1);
    add_background_object(create_jcbamboo4_2342(6080, 1384), 1);
    add_background_object(create_jcbamboo4_2342(6168, 1384), 1);
    add_background_object(create_jcbamboo4_2342(6264, 1360), 1);
    add_background_object(create_jcbamboo4_2342(6368, 1360), 1);
    add_background_object(create_jcbamboo4_2342(6472, 1384), 1);
    add_background_object(create_jcbamboo4_2342(6576, 1384), 1);
    add_background_object(create_jcbamboo4_2342(5576, 1296), 1);
    add_background_object(create_jcbamboo4_2342(5672, 1272), 1);
    add_background_object(create_jcbamboo4_2342(5576, 1384), 1);
    add_background_object(create_jcbamboo4_2342(5672, 1360), 1);
    add_background_object(create_jcbamboo4_2342(6672, 1296), 1);
    add_background_object(create_jcvinewall2_2458(6640, 1128), 1);
    add_background_object(create_jcvinewall2_2458(6640, 1256), 1);
    add_background_object(create_jcvinewall2_2458(6640, 872), 1);
    add_background_object(create_jcvinewall2_2458(6640, 1000), 1);
    add_background_object(create_jcvinewall2_2458(6640, 744), 1);
    add_background_object(create_jcvinewall2_2458(6760, 1128), 1);
    add_background_object(create_jcvinewall2_2458(6760, 1256), 1);
    add_background_object(create_jcvinewall2_2458(6760, 872), 1);
    add_background_object(create_jcvinewall2_2458(6760, 1000), 1);
    add_background_object(create_jcvinewall2_2458(6760, 744), 1);
    add_background_object(create_jcvinewall2_2458(6880, 1128), 1);
    add_background_object(create_jcvinewall2_2458(6880, 1256), 1);
    add_background_object(create_jcvinewall2_2458(6880, 872), 1);
    add_background_object(create_jcvinewall2_2458(6880, 1000), 1);
    add_background_object(create_jcvinewall2_2458(6880, 744), 1);
    add_background_object(create_jcvinewall2_2458(7000, 1128), 1);
    add_background_object(create_jcvinewall2_2458(7000, 1256), 1);
    add_background_object(create_jcvinewall2_2458(7000, 872), 1);
    add_background_object(create_jcvinewall2_2458(7000, 1000), 1);
    add_background_object(create_jcvinewall2_2458(7000, 744), 1);
    add_background_object(create_jcvinewall2_2458(7120, 1128), 1);
    add_background_object(create_jcvinewall2_2458(7120, 1256), 1);
    add_background_object(create_jcvinewall2_2458(7120, 872), 1);
    add_background_object(create_jcvinewall2_2458(7120, 1000), 1);
    add_background_object(create_jcvinewall2_2458(7120, 744), 1);
    add_background_object(create_jcbud2_2368(5376, 1424), 2);
    add_background_object(create_jctreetrunk_2343(9584, 1432), 2);
    add_background_object(create_jctreetrunk_2343(5408, 1408), 2);
    add_background_object(create_jcplanet4_2351(9464, 1480), 2);
    add_background_object(create_jcplanet4_2351(9792, 1496), 2);
    add_background_object(create_jcplanet3_2356(9960, 1488), 2);
    add_background_object(create_jcplant1_2349(9072, 1520), 2);
    add_background_object(create_jcrockpillar1_2344(8800, 1264), 2);
    add_background_object(create_jcbamboo2_2350(8544, 1488), 2);
    add_background_object(create_jcbamboo2_2350(8544, 1376), 2);
    add_background_object(create_jcbamboo2_2350(8544, 1264), 2);
    add_background_object(create_jcbamboo2_2350(8800, 1480), 2);
    add_background_object(create_jcbamboo2_2350(8800, 1368), 2);
    add_background_object(create_jcbamboo2_2350(8800, 1256), 2);
    add_background_object(create_jcrockpillar1_2344(7584, 1088), 2);
    add_background_object(create_jcrockpillar1_2344(7480, 1408), 2);
    add_background_object(create_jcrock1_2345(4080, 1384), 2);
    add_background_object(create_jcrock2_2346(4128, 1424), 2);
    add_background_object(create_jcbamboo2_2350(4736, 1432), 2);
    add_background_object(create_jcbamboo2_2350(4736, 1320), 2);
    add_background_object(create_jcbamboo2_2350(4736, 1208), 2);
    add_background_object(create_jcbamboo2_2350(4736, 1096), 2);
    add_background_object(create_jcbamboo2_2350(4736, 984), 2);
    add_background_object(create_jcbamboo2_2350(4736, 872), 2);
    add_background_object(create_jcbamboo2_2350(4736, 760), 2);
    add_background_object(create_jcbamboo2_2350(4736, 648), 2);
    add_background_object(create_jcbamboo2_2350(4736, 536), 2);
    add_background_object(create_jcbamboo2_2350(4736, 424), 2);
    add_background_object(create_jcbamboo2_2350(4736, 312), 2);
    add_background_object(create_jcbamboo2_2350(4736, 200), 2);
    add_background_object(create_jcbamboo2_2350(4424, 1432), 2);
    add_background_object(create_jcbamboo2_2350(4424, 1320), 2);
    add_background_object(create_jcbamboo2_2350(4424, 1208), 2);
    add_background_object(create_jcbamboo2_2350(4424, 1096), 2);
    add_background_object(create_jcbamboo2_2350(4424, 984), 2);
    add_background_object(create_jcbamboo2_2350(4424, 872), 2);
    add_background_object(create_jcbamboo2_2350(4424, 760), 2);
    add_background_object(create_jcbamboo2_2350(4424, 648), 2);
    add_background_object(create_jcbamboo2_2350(4424, 536), 2);
    add_background_object(create_jcbamboo2_2350(4424, 424), 2);
    add_background_object(create_jcbamboo2_2350(4424, 312), 2);
    add_background_object(create_jcbamboo2_2350(4424, 200), 2);
    add_background_object(create_jcbamboo2_2350(2544, 1504), 2);
    add_background_object(create_jcbamboo1_2347(2544, 968), 2);
    add_background_object(create_jcbamboo2_2350(2664, 1448), 2);
    add_background_object(create_jcplanet3_2356(1216, 1344), 2);
    add_background_object(create_jcrockpillar2_2357(5512, 688), 2);
    add_background_object(create_jcbamboo2_2350(2088, 1464), 2);
    add_background_object(create_jcbamboo1_2347(2088, 928), 2);
    add_background_object(create_jcbamboo2_2348(2088, 784), 2);
    add_background_object(create_jcrockpillar1_2344(5592, 416), 2);
    add_background_object(create_jcrockpillar2_2357(5592, 112), 2);
    add_background_object(create_jcrock2_2346(5480, 632), 2);
    add_background_object(create_jcrockpillar2_2357(984, 1256), 2);
    add_background_object(create_jcrockpillar1_2344(1520, 1272), 2);
    add_background_object(create_jcplant1_2349(624, 1464), 2);
    add_background_object(create_jcplant1_2349(784, 1400), 2);
    add_background_object(create_jcplant1_2349(928, 1512), 2);
    add_background_object(create_jcplanet3_2356(624, 1416), 2);
    add_background_object(create_jcplanet4_2351(952, 1464), 2);
    add_background_object(create_jcplanet3_2356(736, 1360), 2);
    add_background_object(create_jcplanet4_2351(768, 1336), 2);
    add_background_object(create_jctreetrunk_2343(368, 1424), 2);
    add_background_object(create_jcplant1_2349(1096, 1488), 2);
    add_background_object(create_jcplant1_2349(1192, 1400), 2);
    add_background_object(create_jcplant1_2349(1232, 1368), 2);
    add_background_object(create_jcplant1_2349(1400, 1472), 2);
    add_background_object(create_jcplant1_2349(1448, 1504), 2);
    add_background_object(create_jcplanet4_2351(1320, 1368), 2);
    add_background_object(create_jcplanet4_2351(1552, 1496), 2);
    add_background_object(create_jcplanet3_2356(1520, 1480), 2);
    add_background_object(create_jcplant1_2349(2080, 1512), 2);
    add_background_object(create_jcplant1_2349(2592, 1488), 2);
    add_background_object(create_jcplant1_2349(2512, 1512), 2);
    add_background_object(create_jcplant1_2349(2848, 1480), 2);
    add_background_object(create_jcbamboo2_2350(2256, 1480), 2);
    add_background_object(create_jcbamboo1_2347(2256, 944), 2);
    add_background_object(create_jcbamboo2_2348(2256, 800), 2);
    add_background_object(create_jcbamboo2_2350(2392, 1464), 2);
    add_background_object(create_jcbamboo1_2347(2392, 928), 2);
    add_background_object(create_jcbamboo2_2348(2392, 784), 2);
    add_background_object(create_jcbamboo2_2348(2544, 824), 2);
    add_background_object(create_jcbamboo1_2347(2664, 912), 2);
    add_background_object(create_jcbamboo2_2348(2664, 768), 2);
    add_background_object(create_jcbamboo2_2350(2824, 1464), 2);
    add_background_object(create_jcbamboo1_2347(2824, 928), 2);
    add_background_object(create_jcbamboo2_2348(2824, 784), 2);
    add_background_object(create_jcbamboo2_2348(2088, 640), 2);
    add_background_object(create_jcbamboo2_2348(2256, 656), 2);
    add_background_object(create_jcbamboo2_2348(2392, 640), 2);
    add_background_object(create_jcbamboo2_2348(2544, 680), 2);
    add_background_object(create_jcbamboo2_2348(2664, 624), 2);
    add_background_object(create_jcbamboo2_2348(2824, 640), 2);
    add_background_object(create_jcbamboo2_2348(2088, 496), 2);
    add_background_object(create_jcbamboo2_2348(2256, 512), 2);
    add_background_object(create_jcbamboo2_2348(2392, 496), 2);
    add_background_object(create_jcbamboo2_2348(2544, 536), 2);
    add_background_object(create_jcbamboo2_2348(2664, 480), 2);
    add_background_object(create_jcbamboo2_2348(2824, 496), 2);
    add_background_object(create_jcbamboo2_2348(2088, 352), 2);
    add_background_object(create_jcbamboo2_2348(2256, 368), 2);
    add_background_object(create_jcbamboo2_2348(2392, 352), 2);
    add_background_object(create_jcbamboo2_2348(2544, 392), 2);
    add_background_object(create_jcbamboo2_2348(2664, 336), 2);
    add_background_object(create_jcbamboo2_2348(2824, 352), 2);
    add_background_object(create_jcbamboo2_2348(2088, 208), 2);
    add_background_object(create_jcbamboo2_2348(2256, 224), 2);
    add_background_object(create_jcbamboo2_2348(2392, 208), 2);
    add_background_object(create_jcbamboo2_2348(2544, 248), 2);
    add_background_object(create_jcbamboo2_2348(2664, 192), 2);
    add_background_object(create_jcbamboo2_2348(2824, 208), 2);
    add_background_object(create_jcbamboo2_2348(2088, 64), 2);
    add_background_object(create_jcbamboo2_2348(2256, 80), 2);
    add_background_object(create_jcbamboo2_2348(2392, 64), 2);
    add_background_object(create_jcbamboo2_2348(2544, 104), 2);
    add_background_object(create_jcbamboo2_2348(2664, 48), 2);
    add_background_object(create_jcbamboo2_2348(2824, 64), 2);
    add_background_object(create_jcbamboo2_2348(2088, -80), 2);
    add_background_object(create_jcbamboo2_2348(2256, -64), 2);
    add_background_object(create_jcbamboo2_2348(2392, -80), 2);
    add_background_object(create_jcbamboo2_2348(2544, -40), 2);
    add_background_object(create_jcbamboo2_2348(2664, -96), 2);
    add_background_object(create_jcbamboo2_2348(2824, -80), 2);
    add_background_object(create_jcdirt1_594(2816, 1736), 2);
    add_background_object(create_jcdirt1_594(2816, 1928), 2);
    add_background_object(create_jcdirt1_594(2816, 2120), 2);
    add_background_object(create_jcdirt1_594(2816, 2312), 2);
    add_background_object(create_jcdirt1_594(2816, 2504), 2);
    add_background_object(create_jcplant1_2349(2960, 1304), 2);
    add_background_object(create_jcplant3_2354(2960, 704), 2);
    add_background_object(create_jcplant1_2349(2608, 440), 2);
    add_background_object(create_jcplant1_2349(2208, 464), 2);
    add_background_object(create_jcvinewall_2459(4328, 648), 2);
    add_background_object(create_jcvinewall_2459(4448, 648), 2);
    add_background_object(create_jcvinewall_2459(4328, 776), 2);
    add_background_object(create_jcvinewall_2459(4448, 776), 2);
    add_background_object(create_jcvinewall_2459(4328, 904), 2);
    add_background_object(create_jcvinewall_2459(4448, 904), 2);
    add_background_object(create_jcvinewall_2459(4328, 1032), 2);
    add_background_object(create_jcvinewall_2459(4448, 1032), 2);
    add_background_object(create_jcvinewall_2459(4328, 1160), 2);
    add_background_object(create_jcvinewall_2459(4448, 1160), 2);
    add_background_object(create_jcvinewall_2459(4328, 1288), 2);
    add_background_object(create_jcvinewall_2459(4448, 1288), 2);
    add_background_object(create_jcvinewall_2459(4328, 1416), 2);
    add_background_object(create_jcvinewall_2459(4448, 1416), 2);
    add_background_object(create_jcvinewall_2459(4328, 520), 2);
    add_background_object(create_jcvinewall_2459(4448, 520), 2);
    add_background_object(create_jcvinewall_2459(4584, 648), 2);
    add_background_object(create_jcvinewall_2459(4704, 648), 2);
    add_background_object(create_jcvinewall_2459(4584, 776), 2);
    add_background_object(create_jcvinewall_2459(4704, 776), 2);
    add_background_object(create_jcvinewall_2459(4584, 904), 2);
    add_background_object(create_jcvinewall_2459(4704, 904), 2);
    add_background_object(create_jcvinewall_2459(4584, 1032), 2);
    add_background_object(create_jcvinewall_2459(4704, 1032), 2);
    add_background_object(create_jcvinewall_2459(4584, 1160), 2);
    add_background_object(create_jcvinewall_2459(4704, 1160), 2);
    add_background_object(create_jcvinewall_2459(4584, 1288), 2);
    add_background_object(create_jcvinewall_2459(4704, 1288), 2);
    add_background_object(create_jcvinewall_2459(4584, 1416), 2);
    add_background_object(create_jcvinewall_2459(4704, 1416), 2);
    add_background_object(create_jcvinewall_2459(4584, 520), 2);
    add_background_object(create_jcvinewall_2459(4704, 520), 2);
    add_background_object(create_jcvinewall_2459(4824, 648), 2);
    add_background_object(create_jcvinewall_2459(4944, 648), 2);
    add_background_object(create_jcvinewall_2459(4824, 776), 2);
    add_background_object(create_jcvinewall_2459(4944, 776), 2);
    add_background_object(create_jcvinewall_2459(4824, 904), 2);
    add_background_object(create_jcvinewall_2459(4944, 904), 2);
    add_background_object(create_jcvinewall_2459(4824, 1032), 2);
    add_background_object(create_jcvinewall_2459(4944, 1032), 2);
    add_background_object(create_jcvinewall_2459(4824, 1160), 2);
    add_background_object(create_jcvinewall_2459(4944, 1160), 2);
    add_background_object(create_jcvinewall_2459(4824, 1288), 2);
    add_background_object(create_jcvinewall_2459(4944, 1288), 2);
    add_background_object(create_jcvinewall_2459(4824, 1416), 2);
    add_background_object(create_jcvinewall_2459(4944, 1416), 2);
    add_background_object(create_jcvinewall_2459(4824, 520), 2);
    add_background_object(create_jcvinewall_2459(4944, 520), 2);
    add_background_object(create_jcvinewall_2459(4328, 392), 2);
    add_background_object(create_jcvinewall_2459(4448, 392), 2);
    add_background_object(create_jcvinewall_2459(4584, 392), 2);
    add_background_object(create_jcvinewall_2459(4704, 392), 2);
    add_background_object(create_jcvinewall_2459(4824, 392), 2);
    add_background_object(create_jcvinewall_2459(4944, 392), 2);
    add_background_object(create_jcvinewall_2459(4328, 264), 2);
    add_background_object(create_jcvinewall_2459(4448, 264), 2);
    add_background_object(create_jcvinewall_2459(4584, 264), 2);
    add_background_object(create_jcvinewall_2459(4704, 264), 2);
    add_background_object(create_jcvinewall_2459(4824, 264), 2);
    add_background_object(create_jcvinewall_2459(4944, 264), 2);
    add_background_object(create_jcvinewall_2459(4584, 136), 2);
    add_background_object(create_jcvinewall_2459(4704, 136), 2);
    add_background_object(create_jcvinewall_2459(4824, 136), 2);
    add_background_object(create_jcvinewall_2459(4944, 136), 2);
    add_background_object(create_jcbamboo2_2350(4560, 1432), 2);
    add_background_object(create_jcbamboo2_2350(4560, 1320), 2);
    add_background_object(create_jcbamboo2_2350(4560, 1208), 2);
    add_background_object(create_jcbamboo2_2350(4560, 1096), 2);
    add_background_object(create_jcbamboo2_2350(4560, 984), 2);
    add_background_object(create_jcbamboo2_2350(4560, 872), 2);
    add_background_object(create_jcbamboo2_2350(4560, 760), 2);
    add_background_object(create_jcbamboo2_2350(4560, 648), 2);
    add_background_object(create_jcbamboo2_2350(4560, 536), 2);
    add_background_object(create_jcbamboo2_2350(4560, 424), 2);
    add_background_object(create_jcbamboo2_2350(4560, 312), 2);
    add_background_object(create_jcbamboo2_2350(4560, 200), 2);
    add_background_object(create_jcbamboo2_2350(4888, 1432), 2);
    add_background_object(create_jcbamboo2_2350(4888, 1320), 2);
    add_background_object(create_jcbamboo2_2350(4888, 1208), 2);
    add_background_object(create_jcbamboo2_2350(4888, 1096), 2);
    add_background_object(create_jcbamboo2_2350(4888, 984), 2);
    add_background_object(create_jcbamboo2_2350(4888, 872), 2);
    add_background_object(create_jcbamboo2_2350(4888, 760), 2);
    add_background_object(create_jcbamboo2_2350(4888, 648), 2);
    add_background_object(create_jcbamboo2_2350(4888, 536), 2);
    add_background_object(create_jcbamboo2_2350(4888, 424), 2);
    add_background_object(create_jcbamboo2_2350(4888, 312), 2);
    add_background_object(create_jcbamboo2_2350(4888, 200), 2);
    add_background_object(create_jcrock1_2345(3952, 1264), 2);
    add_background_object(create_jcrock2_2346(4176, 1464), 2);
    add_background_object(create_jcrock1_2345(4064, 1448), 2);
    add_background_object(create_jcrock1_2345(4256, 1472), 2);
    add_background_object(create_jcrock2_2346(4440, 1456), 2);
    add_background_object(create_jcrock1_2345(4784, 1480), 2);
    add_background_object(create_jcrock1_2345(4928, 1456), 2);
    add_background_object(create_jcrock2_2346(520, 1488), 2);
    add_background_object(create_jcrock2_2346(2704, 1456), 2);
    add_background_object(create_jcrock1_2345(3072, 680), 2);
    add_background_object(create_jcrockpillar1_2344(5512, 992), 2);
    add_background_object(create_jcrockpillar1_2344(5168, 720), 2);
    add_background_object(create_jcvinewall_2459(5376, 1560), 2);
    add_background_object(create_jcvinewall_2459(5504, 1560), 2);
    add_background_object(create_jcrockpillar2_2357(5512, 1312), 2);
    add_background_object(create_jcdirt1_594(6144, 1544), 2);
    add_background_object(create_jcrock1_2345(5304, 1448), 2);
    add_background_object(create_jcrock2_2346(6064, 1448), 2);
    add_background_object(create_jcbamboo2_2350(6248, 1368), 2);
    add_background_object(create_jcbamboo1_2347(6248, 832), 2);
    add_background_object(create_jcbamboo2_2348(6248, 688), 2);
    add_background_object(create_jcbamboo2_2350(6392, 1368), 2);
    add_background_object(create_jcbamboo1_2347(6392, 832), 2);
    add_background_object(create_jcbamboo2_2348(6392, 688), 2);
    add_background_object(create_jcbamboo2_2350(6528, 1368), 2);
    add_background_object(create_jcbamboo1_2347(6528, 832), 2);
    add_background_object(create_jcbamboo2_2348(6528, 688), 2);
    add_background_object(create_jcbamboo2_2350(6672, 1368), 2);
    add_background_object(create_jcbamboo1_2347(6672, 832), 2);
    add_background_object(create_jcbamboo2_2348(6672, 688), 2);
    add_background_object(create_jcbamboo2_2350(6832, 1576), 2);
    add_background_object(create_jcbamboo1_2347(6832, 1040), 2);
    add_background_object(create_jcbamboo2_2348(6832, 896), 2);
    add_background_object(create_jcbamboo2_2350(6992, 1624), 2);
    add_background_object(create_jcbamboo1_2347(6992, 1088), 2);
    add_background_object(create_jcbamboo2_2348(6992, 944), 2);
    add_background_object(create_jcbamboo2_2350(7144, 1656), 2);
    add_background_object(create_jcbamboo1_2347(7144, 1120), 2);
    add_background_object(create_jcbamboo2_2348(7144, 976), 2);
    add_background_object(create_jcbamboo2_2350(7288, 1616), 2);
    add_background_object(create_jcbamboo1_2347(7288, 1080), 2);
    add_background_object(create_jcbamboo2_2348(7288, 936), 2);
    add_background_object(create_jcbamboo2_2350(7424, 1632), 2);
    add_background_object(create_jcbamboo1_2347(7424, 1096), 2);
    add_background_object(create_jcbamboo2_2348(7424, 952), 2);
    add_background_object(create_jcbamboo2_2350(7592, 1616), 2);
    add_background_object(create_jcbamboo1_2347(7592, 1080), 2);
    add_background_object(create_jcbamboo2_2348(7592, 936), 2);
    add_background_object(create_jcbamboo2_2348(6832, 752), 2);
    add_background_object(create_jcbamboo2_2348(6992, 800), 2);
    add_background_object(create_jcbamboo2_2348(7144, 832), 2);
    add_background_object(create_jcbamboo2_2348(7288, 792), 2);
    add_background_object(create_jcbamboo2_2348(7424, 808), 2);
    add_background_object(create_jcbamboo2_2348(6832, 608), 2);
    add_background_object(create_jcbamboo2_2348(6992, 656), 2);
    add_background_object(create_jcbamboo2_2348(7144, 688), 2);
    add_background_object(create_jcbamboo2_2348(7288, 648), 2);
    add_background_object(create_jcbamboo2_2348(7424, 664), 2);
    add_background_object(create_jcrockpillar1_2344(7800, 1424), 2);
    add_background_object(create_jcvinewall_2459(8912, 1504), 2);
    add_background_object(create_jcvinewall_2459(8432, 1504), 2);
    add_background_object(create_jcvinewall_2459(8552, 1464), 2);
    add_background_object(create_jcvinewall_2459(8672, 1504), 2);
    add_background_object(create_jcvinewall_2459(8792, 1536), 2);
    add_background_object(create_jcvinewall_2459(8432, 1248), 2);
    add_background_object(create_jcvinewall_2459(8552, 1208), 2);
    add_background_object(create_jcvinewall_2459(8672, 1248), 2);
    add_background_object(create_jcvinewall_2459(8792, 1280), 2);
    add_background_object(create_jcvinewall_2459(8912, 1248), 2);
    add_background_object(create_jcvinewall_2459(8432, 1376), 2);
    add_background_object(create_jcvinewall_2459(8552, 1336), 2);
    add_background_object(create_jcvinewall_2459(8672, 1376), 2);
    add_background_object(create_jcvinewall_2459(8792, 1408), 2);
    add_background_object(create_jcvinewall_2459(8912, 1376), 2);
    add_background_object(create_jcbamboo2_2350(8640, 1480), 2);
    add_background_object(create_jcbamboo2_2350(8640, 1368), 2);
    add_background_object(create_jcbamboo2_2350(8640, 1256), 2);
    add_background_object(create_jcbamboo2_2350(9000, 1504), 2);
    add_background_object(create_jcbamboo2_2350(9000, 1392), 2);
    add_background_object(create_jcbamboo2_2350(9000, 1280), 2);
    add_background_object(create_jcbamboo2_2350(8424, 1504), 2);
    add_background_object(create_jcbamboo2_2350(8424, 1392), 2);
    add_background_object(create_jcbamboo2_2350(8424, 1280), 2);
    add_background_object(create_jcrockpillar2_2357(8008, 1472), 2);
    add_background_object(create_jcvinewall_2459(8312, 1344), 2);
    add_background_object(create_jcvinewall_2459(8312, 1472), 2);
    add_background_object(create_jcvinewall_2459(8312, 1600), 2);
    add_background_object(create_jcvinewall_2459(9024, 1328), 2);
    add_background_object(create_jcvinewall_2459(9024, 1456), 2);
    add_background_object(create_jcvinewall_2459(9024, 1584), 2);
    add_background_object(create_jcplant1_2349(9320, 1528), 2);
    add_background_object(create_jcplant1_2349(9392, 1520), 2);
    add_background_object(create_jcplant1_2349(9576, 1544), 2);
    add_background_object(create_jcplant1_2349(9712, 1512), 2);
    add_background_object(create_jcplant1_2349(9808, 1536), 2);
    add_background_object(create_jcplant1_2349(9976, 1520), 2);
    add_background_object(create_jcrock2_2346(10104, 1488), 2);
    add_background_object(create_jcrock2_2346(9480, 1496), 2);
    add_background_object(create_jcplant1_2349(10328, 1536), 2);
    add_background_object(create_jcplanet4_2351(10520, 1496), 2);
    add_background_object(create_jcplanet3_2356(10240, 1488), 2);
    add_background_object(create_jcplanet4_2351(10272, 1512), 2);
    add_background_object(create_jcrock1_2345(6896, 1640), 2);
    add_background_object(create_jcrock2_2346(6744, 1584), 2);
    add_background_object(create_jcrock2_2346(7224, 1648), 2);
    add_background_object(create_jcrock1_2345(7536, 1640), 2);
    add_background_object(create_jcrock1_2345(7720, 1672), 2);
    add_background_object(create_jctreetrunk_2343(2232, 1424), 2);
    add_background_object(create_jctreetrunk_2343(5312, 576), 2);
    add_background_object(create_jctreetrunk_2343(6264, 1336), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(9624, -107), 2);
    add_object(create_link_352(96, -184), 2);
    add_object(create_objectcrystal_279(-275, 82), 2);
    add_object(create_objectcodec_354(-295, 108), 2);
    add_object(create_laddertop_357(-108, 519), 2);
    add_object(create_shieldearth_314(-140, 348), 2);
    add_object(create_shieldflameback_315(-96, 344), 2);
    add_object(create_shieldwood_313(-148, 340), 2);
    add_object(create_shieldmagnetic_317(-132, 348), 2);
    add_object(create_shieldwater_318(-84, 348), 2);
    add_object(create_shieldflamefront_316(-100, 348), 2);
    add_object(create_monitorkeystone_562(-216, 176), 2);
    add_object(create_objectfuel_528(-148, 524), 2);
    add_object(create_jcslidingplatformmask_2363(3296, 768), 2);
    add_object(create_gimmickleafplatformback_2358(2768, 1623), 2);
    add_object(create_gimmickleafplatform1_2359(2768, 1383), 2);
    add_object(create_gimmickleafplatform2_2360(2768, 1383), 2);
    add_object(create_enemyplantturretusstalk_2364(374, 1480), 2);
    add_object(create_enemyplantturretus_2365(370, 1475), 2);
    add_object(create_enemyplantturretushat_2366(370, 1480), 2);
    add_object(create_enemyplantturretusstalk_2364(478, 1496), 2);
    add_object(create_enemyplantturretus_2365(474, 1491), 2);
    add_object(create_enemyplantturretushat_2366(474, 1496), 2);
    add_object(create_gimmickflyingleafplatform_2460(2208, 1520), 2);
    add_object(create_gimmickflyingleafplatform_2460(3016, 1320), 2);
    add_object(create_gimmickflyingleafplatform_2460(2856, 1096), 2);
    add_object(create_gimmickflyingleafplatform_2460(2352, 1240), 2);
    add_object(create_enemyplantturretusstalk_2364(2606, 800), 2);
    add_object(create_enemyplantturretus_2365(2602, 795), 2);
    add_object(create_enemyplantturretushat_2366(2602, 800), 2);
    add_object(create_gimmickflyingleafplatform_2460(2072, 832), 2);
    add_object(create_enemyplantturretusstalk_2364(2462, 528), 2);
    add_object(create_enemyplantturretus_2365(2458, 523), 2);
    add_object(create_enemyplantturretushat_2366(2458, 528), 2);
    add_object(create_enemyplantturretusstalk_2364(3558, 968), 2);
    add_object(create_enemyplantturretus_2365(3554, 963), 2);
    add_object(create_enemyplantturretushat_2366(3554, 968), 2);
    add_object(create_jcwaterstream7_2362(3584, 1096), 2);
    add_object(create_jcwaterstream7_2362(3584, 1160), 2);
    add_object(create_jcwaterstream7_2362(3584, 1224), 2);
    add_object(create_jcwaterstream7_2362(3584, 1288), 2);
    add_object(create_gimmickflyingleafplatform_2460(4792, 1264), 2);
    add_object(create_gimmickflyingleafplatform_2460(4456, 1128), 2);
    add_object(create_gimmickflyingleafplatform_2460(4664, 1000), 2);
    add_object(create_gimmickflyingleafplatform_2460(4920, 672), 2);
    add_object(create_enemyplantturretusstalk_2364(5206, 312), 2);
    add_object(create_enemyplantturretus_2365(5202, 307), 2);
    add_object(create_enemyplantturretushat_2366(5202, 312), 2);
    add_object(create_gimmickleafplatformback_2358(3704, 1439), 2);
    add_object(create_gimmickleafplatform1_2359(3704, 1199), 2);
    add_object(create_gimmickleafplatform2_2360(3704, 1199), 2);
    add_object(create_objectpetal_302(9521, 1505), 2);
    add_object(create_objectpetal_302(9857, 1521), 2);
    add_object(create_objectpetal_302(9977, 1513), 2);
    add_object(create_objectpetal_302(10257, 1513), 2);
    add_object(create_objectpetal_302(10329, 1537), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_jcbud1_2367(6200, 1408), 3);
    add_background_object(create_jcbud1_2367(6584, 1424), 3);
    add_background_object(create_jcbud1_2367(6536, 1400), 3);
    add_background_object(create_jcbud2_2368(6424, 1416), 3);
    add_background_object(create_jcbud1_2367(5744, 1480), 3);
    add_background_object(create_jcbud2_2368(5904, 1488), 3);
    add_background_object(create_jcdirt7_2371(10448, 1592), 3);
    add_background_object(create_jcdirt18_2373(10512, 1592), 3);
    add_background_object(create_jcdirt6_2398(10384, 1640), 3);
    add_background_object(create_jcdirt4_2374(10240, 1576), 3);
    add_background_object(create_jcdirt9_2390(10368, 1576), 3);
    add_background_object(create_jcdirt1_594(9216, 1576), 3);
    add_background_object(create_jcdirt1_594(8960, 1576), 3);
    add_background_object(create_jcdirt1_594(8960, 1768), 3);
    add_background_object(create_jcdirt1_594(8704, 1576), 3);
    add_background_object(create_jcdirt1_594(8448, 1576), 3);
    add_background_object(create_jcdirt1_594(8448, 1768), 3);
    add_background_object(create_jcdirt17_2381(8168, 1600), 3);
    add_background_object(create_jcdirt7_2371(6632, 1512), 3);
    add_background_object(create_jcdirt3_2380(6688, 1488), 3);
    add_background_object(create_jcdirt3_2380(6688, 1552), 3);
    add_background_object(create_jcdirt18_2373(6656, 1480), 3);
    add_background_object(create_jcdirt1_594(6656, 1672), 3);
    add_background_object(create_jcdirt1_594(6400, 1480), 3);
    add_background_object(create_jcrock2_2346(5776, 1488), 3);
    add_background_object(create_jcplant1_2349(5120, 336), 3);
    add_background_object(create_jcdirt5_2377(768, 912), 3);
    add_background_object(create_jcdirt5_2377(768, 528), 3);
    add_background_object(create_jcdirt24_2439(5248, 712), 3);
    add_background_object(create_jcdirt4_2374(5120, 776), 3);
    add_background_object(create_jcdirt4_2374(5120, 584), 3);
    add_background_object(create_jcdirt4_2374(5120, 392), 3);
    add_background_object(create_jcdirt1_594(5120, 1160), 3);
    add_background_object(create_jcdirt1_594(5120, 1544), 3);
    add_background_object(create_jcdirt1_594(3864, 1352), 3);
    add_background_object(create_jcdirt3_2380(4112, 1424), 3);
    add_background_object(create_jcdirt3_2380(4112, 1488), 3);
    add_background_object(create_jcdirt3_2380(4112, 1360), 3);
    add_background_object(create_jcplant1_2349(3408, 968), 3);
    add_background_object(create_jcplant1_2349(3488, 1008), 3);
    add_background_object(create_jcdirt18_2373(3560, 1072), 3);
    add_background_object(create_jcdirt7_2371(3456, 1120), 3);
    add_background_object(create_jcdirt7_2371(3520, 1120), 3);
    add_background_object(create_jcdirt15_2386(3456, 992), 3);
    add_background_object(create_jcdirt7_2371(3456, 1056), 3);
    add_background_object(create_jcdirt7_2371(3520, 1056), 3);
    add_background_object(create_jcplant1_2349(2384, 560), 3);
    add_background_object(create_jcplant1_2349(2472, 544), 3);
    add_background_object(create_jcplant1_2349(2304, 536), 3);
    add_background_object(create_jcdirt7_2371(2592, 528), 3);
    add_background_object(create_jcdirt14_2383(2608, 464), 3);
    add_background_object(create_jcdirt7_2371(2560, 592), 3);
    add_background_object(create_jcdirt7_2371(2672, 464), 3);
    add_background_object(create_jcdirt7_2371(2616, 528), 3);
    add_background_object(create_jcdirt14_2383(2528, 536), 3);
    add_background_object(create_jcdirt7_2371(2368, 608), 3);
    add_background_object(create_jcdirt7_2371(2432, 608), 3);
    add_background_object(create_jcdirt7_2371(2496, 600), 3);
    add_background_object(create_jcdirt15_2386(2304, 528), 3);
    add_background_object(create_jcdirt8_2382(2176, 528), 3);
    add_background_object(create_jcdirt7_2371(2176, 464), 3);
    add_background_object(create_jcdirt15_2386(2240, 464), 3);
    add_background_object(create_jcplant1_2349(2544, 816), 3);
    add_background_object(create_jcdirt1_594(2816, 1544), 3);
    add_background_object(create_jcdirt1_594(2560, 1552), 3);
    add_background_object(create_jcdirt1_594(2304, 1568), 3);
    add_background_object(create_jcdirt1_594(1408, 912), 3);
    add_background_object(create_jcdirt20_2436(1792, 1568), 3);
    add_background_object(create_jcdirt18_2373(1792, 1576), 3);
    add_background_object(create_jcplant1_2349(304, 1504), 3);
    add_background_object(create_jcplant1_2349(408, 1512), 3);
    add_background_object(create_jcdirt1_594(1536, 1568), 3);
    add_background_object(create_jcdirt1_594(1536, 1760), 3);
    add_background_object(create_jcdirt1_594(1184, 1536), 3);
    add_background_object(create_jcdirt1_594(672, 1536), 3);
    add_background_object(create_jcdirt1_594(1024, 1568), 3);
    add_background_object(create_jcdirt1_594(1024, 1760), 3);
    add_background_object(create_jcdirt1_594(768, 1568), 3);
    add_background_object(create_jcdirt1_594(768, 1760), 3);
    add_background_object(create_jcdirt1_594(0, 1632), 3);
    add_background_object(create_jcdirt1_594(5120, 1352), 3);
    add_background_object(create_dvceilingoverlay_915(312, 744), 3);
    add_background_object(create_jcdirt1_594(5664, 712), 3);
    add_background_object(create_jcdirt8_2382(5408, 712), 3);
    add_background_object(create_jcdirt1_594(5408, 136), 3);
    add_background_object(create_jcdirt2_2379(5408, 136), 3);
    add_background_object(create_jcdirt2_2379(5408, 200), 3);
    add_background_object(create_jcdirt2_2379(5408, 264), 3);
    add_background_object(create_jcdirt1_594(5408, -56), 3);
    add_background_object(create_jcdirt2_2379(5408, -56), 3);
    add_background_object(create_jcdirt2_2379(5408, 8), 3);
    add_background_object(create_jcdirt2_2379(5408, 72), 3);
    add_background_object(create_jcgrass1_2392(5408, 712), 3);
    add_background_object(create_jcgrass5_2397(5248, 712), 3);
    add_background_object(create_jcdirt23_2435(5664, 520), 3);
    add_background_object(create_jcdirt22_2438(5664, 328), 3);
    add_background_object(create_jcgrass6_2394(5664, 712), 3);
    add_background_object(create_jcdirt1_594(5792, 520), 3);
    add_background_object(create_jcdirt1_594(5792, 328), 3);
    add_background_object(create_jcdirt1_594(5664, 136), 3);
    add_background_object(create_jcdirt1_594(5664, -56), 3);
    add_background_object(create_seedspawnerstalk_2407(10944, -136), 3);
    add_background_object(create_jcbrokenslope_2372(3304, 816), 3);
    add_background_object(create_jcrockpillar1_2344(-32, 1304), 3);
    add_background_object(create_jcflatground5_2385(0, 1608), 3);
    add_background_object(create_jcdirt1_594(256, 1568), 3);
    add_background_object(create_jcdirt1_594(0, 1824), 3);
    add_background_object(create_jcdirt1_594(256, 1760), 3);
    add_background_object(create_jcdirt1_594(0, 1104), 3);
    add_background_object(create_jcdirt6_2398(0, 1288), 3);
    add_background_object(create_dvceilingoverlay_915(0, 1288), 3);
    add_background_object(create_jcdirt6_2398(128, 1288), 3);
    add_background_object(create_dvceilingoverlay_915(128, 1288), 3);
    add_background_object(create_jcdirt9_2390(384, 1104), 3);
    add_background_object(create_jcdirt4_2374(256, 1104), 3);
    add_background_object(create_jcdirt6_2398(256, 1288), 3);
    add_background_object(create_dvceilingoverlay_915(256, 1288), 3);
    add_background_object(create_jcdirt2_2379(256, 1568), 3);
    add_background_object(create_jcgrass5_2397(256, 1560), 3);
    add_background_object(create_jcdirt12_2388(208, 1640), 3);
    add_background_object(create_jcflatground6_2370(256, 1608), 3);
    add_background_object(create_jcflatground5_2385(128, 1608), 3);
    add_background_object(create_jcdirt13_2389(208, 1768), 3);
    add_background_object(create_jcgrass3_2395(288, 1552), 3);
    add_background_object(create_jcdirt1_594(512, 1568), 3);
    add_background_object(create_jcdirt1_594(512, 1760), 3);
    add_background_object(create_jcgrass4_2396(416, 1552), 3);
    add_background_object(create_jcdirt10_2384(672, 1408), 3);
    add_background_object(create_jcdirt11_2387(800, 1408), 3);
    add_background_object(create_jcdirt14_2383(608, 1504), 3);
    add_background_object(create_jcdirt15_2386(928, 1504), 3);
    add_background_object(create_jcdirt13_2389(664, 1520), 3);
    add_background_object(create_jcdirt13_2389(808, 1512), 3);
    add_background_object(create_jcgrass10_2404(800, 1408), 3);
    add_background_object(create_jcgrass9_2405(928, 1480), 3);
    add_background_object(create_jcgrass8_2403(672, 1408), 3);
    add_background_object(create_jcgrass7_2402(544, 1480), 3);
    add_background_object(create_jcdirt1_594(1280, 1568), 3);
    add_background_object(create_jcdirt1_594(1280, 1760), 3);
    add_background_object(create_jcdirt10_2384(1184, 1408), 3);
    add_background_object(create_jcdirt11_2387(1312, 1408), 3);
    add_background_object(create_jcdirt14_2383(1120, 1504), 3);
    add_background_object(create_jcdirt15_2386(1440, 1504), 3);
    add_background_object(create_jcdirt13_2389(1176, 1520), 3);
    add_background_object(create_jcdirt13_2389(1320, 1512), 3);
    add_background_object(create_jcgrass10_2404(1312, 1408), 3);
    add_background_object(create_jcgrass9_2405(1440, 1480), 3);
    add_background_object(create_jcgrass8_2403(1184, 1408), 3);
    add_background_object(create_jcgrass7_2402(1056, 1480), 3);
    add_background_object(create_dvceilingoverlay_915(312, 1264), 3);
    add_background_object(create_jcdirt1_594(128, 912), 3);
    add_background_object(create_jcdirt5_2377(0, 912), 3);
    add_background_object(create_jcdirt1_594(0, 720), 3);
    add_background_object(create_jcdirt1_594(128, 528), 3);
    add_background_object(create_jcdirt5_2377(0, 528), 3);
    add_background_object(create_jcdirt1_594(256, 720), 3);
    add_background_object(create_jcdirt1_594(384, 528), 3);
    add_background_object(create_jcgrass3_2395(0, 504), 3);
    add_background_object(create_jcgrass4_2396(128, 504), 3);
    add_background_object(create_jcgrass3_2395(256, 504), 3);
    add_background_object(create_jcgrass4_2396(384, 504), 3);
    add_background_object(create_jcgrass3_2395(512, 504), 3);
    add_background_object(create_jcgrass4_2396(768, 504), 3);
    add_background_object(create_jcgrass3_2395(1568, 1552), 3);
    add_background_object(create_jcgrass4_2396(1696, 1552), 3);
    add_background_object(create_jcgrass6_2394(1824, 1560), 3);
    add_background_object(create_jcdirt1_594(1792, 1760), 3);
    add_background_object(create_jcdirt23_2435(1920, 1568), 3);
    add_background_object(create_jcdirt1_594(2048, 1760), 3);
    add_background_object(create_jcdirt1_594(2048, 1568), 3);
    add_background_object(create_jcgrass5_2397(2048, 1560), 3);
    add_background_object(create_jcgrass3_2395(2080, 1552), 3);
    add_background_object(create_jcgrass4_2396(2208, 1552), 3);
    add_background_object(create_jcflatground8_2406(1888, 1736), 3);
    add_background_object(create_jcflatground6_2370(1952, 1736), 3);
    add_background_object(create_jcflatground7_2369(1864, 1736), 3);
    add_background_object(create_jcdirt1_594(384, 912), 3);
    add_background_object(create_jcdirt6_2398(768, 1088), 3);
    add_background_object(create_dvceilingoverlay_915(768, 1088), 3);
    add_background_object(create_jcdirt6_2398(512, 1088), 3);
    add_background_object(create_dvceilingoverlay_915(512, 1088), 3);
    add_background_object(create_jcdirt8_2382(896, 1104), 3);
    add_background_object(create_jcdirt9_2390(1152, 1104), 3);
    add_background_object(create_jcdirt1_594(768, 720), 3);
    add_background_object(create_jcdirt1_594(896, 912), 3);
    add_background_object(create_jcdirt1_594(1152, 912), 3);
    add_background_object(create_jcdirt6_2398(1280, 1088), 3);
    add_background_object(create_dvceilingoverlay_915(1280, 1088), 3);
    add_background_object(create_jcdirt6_2398(1408, 1088), 3);
    add_background_object(create_dvceilingoverlay_915(1408, 1088), 3);
    add_background_object(create_jcdirt4_2374(1024, 1104), 3);
    add_background_object(create_jcdirt13_2389(976, 1120), 3);
    add_background_object(create_jcdirt6_2398(1024, 1272), 3);
    add_background_object(create_dvceilingoverlay_915(1024, 1272), 3);
    add_background_object(create_jcdirt8_2382(1536, 1104), 3);
    add_background_object(create_jcdirt9_2390(1792, 1104), 3);
    add_background_object(create_jcdirt4_2374(1664, 1104), 3);
    add_background_object(create_jcdirt13_2389(1616, 1120), 3);
    add_background_object(create_jcdirt6_2398(1664, 1272), 3);
    add_background_object(create_dvceilingoverlay_915(1664, 1272), 3);
    add_background_object(create_jcdirt1_594(1664, 912), 3);
    add_background_object(create_jcdirt1_594(1536, 1952), 3);
    add_background_object(create_jcdirt1_594(1024, 1952), 3);
    add_background_object(create_jcdirt1_594(768, 1952), 3);
    add_background_object(create_jcdirt1_594(0, 2016), 3);
    add_background_object(create_jcdirt1_594(256, 1952), 3);
    add_background_object(create_jcdirt1_594(512, 1952), 3);
    add_background_object(create_jcdirt1_594(1280, 1952), 3);
    add_background_object(create_jcdirt1_594(1792, 1952), 3);
    add_background_object(create_jcdirt1_594(2048, 1952), 3);
    add_background_object(create_jcdirt1_594(1536, 2144), 3);
    add_background_object(create_jcdirt1_594(1024, 2144), 3);
    add_background_object(create_jcdirt1_594(768, 2144), 3);
    add_background_object(create_jcdirt1_594(0, 2208), 3);
    add_background_object(create_jcdirt1_594(256, 2144), 3);
    add_background_object(create_jcdirt1_594(512, 2144), 3);
    add_background_object(create_jcdirt1_594(1280, 2144), 3);
    add_background_object(create_jcdirt1_594(1792, 2144), 3);
    add_background_object(create_jcdirt1_594(2048, 2144), 3);
    add_background_object(create_jcdirt1_594(1536, 2336), 3);
    add_background_object(create_jcdirt1_594(1024, 2336), 3);
    add_background_object(create_jcdirt1_594(768, 2336), 3);
    add_background_object(create_jcdirt1_594(0, 2400), 3);
    add_background_object(create_jcdirt1_594(256, 2336), 3);
    add_background_object(create_jcdirt1_594(512, 2336), 3);
    add_background_object(create_jcdirt1_594(1280, 2336), 3);
    add_background_object(create_jcdirt1_594(1792, 2336), 3);
    add_background_object(create_jcdirt1_594(2048, 2336), 3);
    add_background_object(create_jcdirt1_594(1536, 2528), 3);
    add_background_object(create_jcdirt1_594(1024, 2528), 3);
    add_background_object(create_jcdirt1_594(768, 2528), 3);
    add_background_object(create_jcdirt1_594(0, 2592), 3);
    add_background_object(create_jcdirt1_594(256, 2528), 3);
    add_background_object(create_jcdirt1_594(512, 2528), 3);
    add_background_object(create_jcdirt1_594(1280, 2528), 3);
    add_background_object(create_jcdirt1_594(1792, 2528), 3);
    add_background_object(create_jcdirt1_594(2048, 2528), 3);
    add_background_object(create_jcdirt1_594(2304, 1760), 3);
    add_background_object(create_jcdirt1_594(2304, 1952), 3);
    add_background_object(create_jcdirt1_594(2304, 2144), 3);
    add_background_object(create_jcdirt1_594(2304, 2336), 3);
    add_background_object(create_jcdirt1_594(2304, 2528), 3);
    add_background_object(create_jcgrass3_2395(2336, 1552), 3);
    add_background_object(create_jcdirt1_594(1280, 720), 3);
    add_background_object(create_jcdirt1_594(1024, 720), 3);
    add_background_object(create_jcdirt1_594(1536, 720), 3);
    add_background_object(create_jcgrass3_2395(2464, 1544), 3);
    add_background_object(create_jcgrass3_2395(2592, 1536), 3);
    add_background_object(create_jcgrass3_2395(2720, 1528), 3);
    add_background_object(create_jcdirt1_594(2560, 1744), 3);
    add_background_object(create_jcdirt1_594(2560, 1936), 3);
    add_background_object(create_jcdirt1_594(2560, 2128), 3);
    add_background_object(create_jcdirt1_594(2560, 2320), 3);
    add_background_object(create_jcdirt1_594(2560, 2512), 3);
    add_background_object(create_jcdirt12_2388(2496, 1592), 3);
    add_background_object(create_jcdirt16_2376(2880, 1464), 3);
    add_background_object(create_jcdirt12_2388(2776, 1600), 3);
    add_background_object(create_jcgrass6_2394(2848, 1528), 3);
    add_background_object(create_jcdirt5_2377(2944, 1352), 3);
    add_background_object(create_jcdirt2_2379(2944, 1352), 3);
    add_background_object(create_jcdirt2_2379(2944, 1416), 3);
    add_background_object(create_jcdirt2_2379(2944, 1480), 3);
    add_background_object(create_jcdirt1_594(3072, 1736), 3);
    add_background_object(create_jcdirt1_594(3072, 1544), 3);
    add_background_object(create_jcdirt1_594(3072, 1352), 3);
    add_background_object(create_jcdirt1_594(3072, 1160), 3);
    add_background_object(create_jcdirt1_594(3072, 968), 3);
    add_background_object(create_jcgrass5_2397(2944, 1344), 3);
    add_background_object(create_jcgrass2_2393(2976, 1344), 3);
    add_background_object(create_jcgrass6_2394(3040, 1344), 3);
    add_background_object(create_jcdirt2_2379(3072, 968), 3);
    add_background_object(create_jcdirt2_2379(3072, 1032), 3);
    add_background_object(create_jcdirt2_2379(3072, 1096), 3);
    add_background_object(create_jcdirt2_2379(3072, 1160), 3);
    add_background_object(create_jcdirt2_2379(3072, 1224), 3);
    add_background_object(create_jcdirt2_2379(3072, 1288), 3);
    add_background_object(create_jcdirt1_594(1792, 720), 3);
    add_background_object(create_jcdirt9_2390(1920, 912), 3);
    add_background_object(create_jcdirt1_594(1792, 528), 3);
    add_background_object(create_jcdirt1_594(1792, 336), 3);
    add_background_object(create_jcdirt1_594(1792, 144), 3);
    add_background_object(create_jcdirt1_594(1792, -48), 3);
    add_background_object(create_jcdirt7_2371(2544, 872), 3);
    add_background_object(create_jcdirt7_2371(2608, 872), 3);
    add_background_object(create_jcdirt2_2379(2544, 872), 3);
    add_background_object(create_jcgrass5_2397(2544, 864), 3);
    add_background_object(create_jcgrass2_2393(2576, 864), 3);
    add_background_object(create_jcdirt3_2380(2656, 872), 3);
    add_background_object(create_jcgrass6_2394(2640, 864), 3);
    add_background_object(create_jcdirt7_2371(2544, 936), 3);
    add_background_object(create_jcdirt7_2371(2608, 936), 3);
    add_background_object(create_jcdirt2_2379(2544, 936), 3);
    add_background_object(create_jcdirt3_2380(2656, 936), 3);
    add_background_object(create_jcdirt6_2398(2544, 984), 3);
    add_background_object(create_dvceilingoverlay_915(2544, 984), 3);
    add_background_object(create_jcdirt8_2382(2944, 776), 3);
    add_background_object(create_jcdirt5_2377(3072, 776), 3);
    add_background_object(create_jcdirt4_2374(3200, 776), 3);
    add_background_object(create_jcgrass5_2397(2944, 768), 3);
    add_background_object(create_jcgrass3_2395(2976, 760), 3);
    add_background_object(create_jcgrass4_2396(3104, 760), 3);
    add_background_object(create_jcdirt3_2380(2032, 848), 3);
    add_background_object(create_jcdirt3_2380(2032, 784), 3);
    add_background_object(create_jcdirt3_2380(2032, 720), 3);
    add_background_object(create_jcdirt3_2380(2032, 656), 3);
    add_background_object(create_jcdirt3_2380(2032, 592), 3);
    add_background_object(create_jcdirt3_2380(2032, 528), 3);
    add_background_object(create_jcdirt3_2380(2032, 464), 3);
    add_background_object(create_jcdirt3_2380(2032, 400), 3);
    add_background_object(create_jcdirt3_2380(2032, 336), 3);
    add_background_object(create_jcdirt3_2380(2032, 272), 3);
    add_background_object(create_jcdirt3_2380(2032, 208), 3);
    add_background_object(create_jcdirt3_2380(2032, 144), 3);
    add_background_object(create_jcdirt3_2380(2032, 80), 3);
    add_background_object(create_jcdirt3_2380(2032, 16), 3);
    add_background_object(create_jcdirt3_2380(2032, -48), 3);
    add_background_object(create_jcdirt1_594(2176, -48), 3);
    add_background_object(create_jcdirt8_2382(2176, 144), 3);
    add_background_object(create_jcdirt1_594(2432, 144), 3);
    add_background_object(create_jcdirt1_594(2432, -48), 3);
    add_background_object(create_jcdirt5_2377(2304, 144), 3);
    add_background_object(create_jcdirt2_2379(2176, -48), 3);
    add_background_object(create_jcdirt2_2379(2176, 16), 3);
    add_background_object(create_jcdirt2_2379(2176, 80), 3);
    add_background_object(create_jcdirt6_2398(2568, 320), 3);
    add_background_object(create_dvceilingoverlay_915(2568, 320), 3);
    add_background_object(create_jcdirt6_2398(2440, 320), 3);
    add_background_object(create_dvceilingoverlay_915(2440, 320), 3);
    add_background_object(create_jcdirt6_2398(2312, 320), 3);
    add_background_object(create_dvceilingoverlay_915(2312, 320), 3);
    add_background_object(create_dvceilingoverlay_915(2248, 304), 3);
    add_background_object(create_jcgrass10_2404(2200, 456), 3);
    add_background_object(create_jcgrass9_2405(2328, 528), 3);
    add_background_object(create_jcgrass7_2402(2456, 528), 3);
    add_background_object(create_jcgrass8_2403(2584, 456), 3);
    add_background_object(create_jcdirt2_2379(2176, 464), 3);
    add_background_object(create_jcgrass5_2397(2168, 456), 3);
    add_background_object(create_jcdirt7_2371(2304, 592), 3);
    add_background_object(create_jcdirt7_2371(2304, 656), 3);
    add_background_object(create_jcdirt7_2371(2368, 656), 3);
    add_background_object(create_jcdirt7_2371(2432, 656), 3);
    add_background_object(create_jcdirt18_2373(2496, 656), 3);
    add_background_object(create_jcdirt18_2373(2616, 592), 3);
    add_background_object(create_jcdirt15_2386(2368, 592), 3);
    add_background_object(create_jcdirt18_2373(2680, 528), 3);
    add_background_object(create_jcdirt3_2380(2728, 464), 3);
    add_background_object(create_jcgrass6_2394(2712, 456), 3);
    add_background_object(create_jcdirt6_2398(2408, 696), 3);
    add_background_object(create_dvceilingoverlay_915(2408, 696), 3);
    add_background_object(create_jcdirt6_2398(2280, 696), 3);
    add_background_object(create_dvceilingoverlay_915(2280, 696), 3);
    add_background_object(create_jcdirt6_2398(2520, 632), 3);
    add_background_object(create_dvceilingoverlay_915(2520, 632), 3);
    add_background_object(create_jcgrass2_2393(3232, 768), 3);
    add_background_object(create_jcgrass6_2394(3296, 768), 3);
    add_background_object(create_jcgrass9_2405(3464, 976), 3);
    add_background_object(create_jcdirt4_2374(3328, 976), 3);
    add_background_object(create_jcdirt3_2380(3448, 976), 3);
    add_background_object(create_jcdirt13_2389(3304, 952), 3);
    add_background_object(create_jcdirt1_594(3328, 1160), 3);
    add_background_object(create_jcdirt13_2389(3416, 1088), 3);
    add_background_object(create_jcgrass6_2394(3592, 1056), 3);
    add_background_object(create_jcdirt1_594(3328, 1352), 3);
    add_background_object(create_jcdirt1_594(3328, 1544), 3);
    add_background_object(create_jcdirt1_594(3328, 1736), 3);
    add_background_object(create_jcdirt1_594(3584, 1544), 3);
    add_background_object(create_jcdirt1_594(3584, 1736), 3);
    add_background_object(create_jcdirt3_2380(3568, 1288), 3);
    add_background_object(create_jcdirt3_2380(3568, 1224), 3);
    add_background_object(create_jcdirt3_2380(3568, 1160), 3);
    add_background_object(create_jcdirt1_594(3584, 1352), 3);
    add_background_object(create_jcgrass4_2396(3584, 1328), 3);
    add_background_object(create_jcdirt1_594(3840, 1544), 3);
    add_background_object(create_jcdirt1_594(3840, 1736), 3);
    add_background_object(create_jcgrass4_2396(3968, 1344), 3);
    add_background_object(create_jcgrass6_2394(4096, 1352), 3);
    add_background_object(create_jcdirt1_594(4096, 1544), 3);
    add_background_object(create_jcdirt1_594(4096, 1736), 3);
    add_background_object(create_jcdirt12_2388(3808, 1440), 3);
    add_background_object(create_jcdirt12_2388(3784, 1352), 3);
    add_background_object(create_jcgrass1_2392(3840, 1344), 3);
    add_background_object(create_jcgrass4_2396(3712, 1336), 3);
    add_background_object(create_jcflatground1_2375(4224, 1544), 3);
    add_background_object(create_jcflatground1_2375(4096, 1544), 3);
    add_background_object(create_jcdirt13_2389(3984, 1496), 3);
    add_background_object(create_jcdirt1_594(4352, 1544), 3);
    add_background_object(create_jcdirt1_594(4352, 1736), 3);
    add_background_object(create_jcflatground1_2375(4480, 1544), 3);
    add_background_object(create_jcflatground1_2375(4352, 1544), 3);
    add_background_object(create_jcdirt1_594(4608, 1544), 3);
    add_background_object(create_jcdirt1_594(4608, 1736), 3);
    add_background_object(create_jcflatground1_2375(4736, 1544), 3);
    add_background_object(create_jcflatground1_2375(4608, 1544), 3);
    add_background_object(create_jcdirt1_594(4864, 1544), 3);
    add_background_object(create_jcdirt1_594(4864, 1736), 3);
    add_background_object(create_jcflatground1_2375(4992, 1544), 3);
    add_background_object(create_jcflatground1_2375(4864, 1544), 3);
    add_background_object(create_jcdirt2_2379(5120, 1160), 3);
    add_background_object(create_jcdirt2_2379(5120, 1224), 3);
    add_background_object(create_jcdirt2_2379(5120, 1288), 3);
    add_background_object(create_jcdirt2_2379(5120, 1352), 3);
    add_background_object(create_jcdirt2_2379(5120, 1416), 3);
    add_background_object(create_jcdirt2_2379(5120, 1480), 3);
    add_background_object(create_jcdirt2_2379(5120, 1544), 3);
    add_background_object(create_jcdirt1_594(4320, 96), 3);
    add_background_object(create_jcdirt1_594(4576, 0), 3);
    add_background_object(create_jcdirt1_594(4832, 0), 3);
    add_background_object(create_jcdirt3_2380(4560, 224), 3);
    add_background_object(create_jcdirt3_2380(4560, 176), 3);
    add_background_object(create_jcdirt1_594(5120, 1736), 3);
    add_background_object(create_jcdirt12_2388(5040, 1560), 3);
    add_background_object(create_jcdirt1_594(5120, 968), 3);
    add_background_object(create_jcdirt2_2379(5120, 968), 3);
    add_background_object(create_jcdirt2_2379(5120, 1032), 3);
    add_background_object(create_jcdirt2_2379(5120, 1096), 3);
    add_background_object(create_jcdirt2_2379(5120, 776), 3);
    add_background_object(create_jcdirt2_2379(5120, 840), 3);
    add_background_object(create_jcdirt2_2379(5120, 904), 3);
    add_background_object(create_jcdirt1_594(4320, -96), 3);
    add_background_object(create_jcdirt2_2379(4320, 224), 3);
    add_background_object(create_jcdirt2_2379(4320, 160), 3);
    add_background_object(create_jcdirt2_2379(4320, 96), 3);
    add_background_object(create_jcdirt2_2379(4320, 32), 3);
    add_background_object(create_jcdirt2_2379(4320, -32), 3);
    add_background_object(create_jcdirt2_2379(5120, 584), 3);
    add_background_object(create_jcdirt2_2379(5120, 648), 3);
    add_background_object(create_jcdirt2_2379(5120, 712), 3);
    add_background_object(create_jcdirt2_2379(5120, 392), 3);
    add_background_object(create_jcdirt2_2379(5120, 456), 3);
    add_background_object(create_jcdirt2_2379(5120, 520), 3);
    add_background_object(create_jcdirt20_2436(5248, 520), 3);
    add_background_object(create_jcgrass1_2392(5280, 712), 3);
    add_background_object(create_jcdirt13_2389(5144, 592), 3);
    add_background_object(create_jcdirt4_2374(512, 720), 3);
    add_background_object(create_jcdirt1_594(896, 528), 3);
    add_background_object(create_jcdirt1_594(1152, 528), 3);
    add_background_object(create_jcgrass3_2395(896, 504), 3);
    add_background_object(create_jcgrass4_2396(1024, 504), 3);
    add_background_object(create_jcgrass3_2395(1152, 504), 3);
    add_background_object(create_jcgrass4_2396(1280, 504), 3);
    add_background_object(create_jcdirt1_594(1408, 528), 3);
    add_background_object(create_jcgrass3_2395(1408, 504), 3);
    add_background_object(create_jcdirt4_2374(1664, 528), 3);
    add_background_object(create_jcdirt1_594(1536, 336), 3);
    add_background_object(create_jcdirt1_594(1536, 144), 3);
    add_background_object(create_jcdirt1_594(1536, -48), 3);
    add_background_object(create_jcgrass2_2393(5152, 384), 3);
    add_background_object(create_jcgrass5_2397(5120, 384), 3);
    add_background_object(create_jcdirt3_2380(5232, 392), 3);
    add_background_object(create_jcgrass6_2394(5216, 384), 3);
    add_background_object(create_jcdirt3_2380(5232, 456), 3);
    add_background_object(create_jcflatground1_2375(5376, 1544), 3);
    add_background_object(create_jcgrass2_2393(5280, 952), 3);
    add_background_object(create_jcgrass5_2397(5248, 952), 3);
    add_background_object(create_jcdirt3_2380(5232, 904), 3);
    add_background_object(create_jcdirt3_2380(5360, 968), 3);
    add_background_object(create_jcgrass6_2394(5344, 952), 3);
    add_background_object(create_jcdirt3_2380(5360, 1032), 3);
    add_background_object(create_jcdirt3_2380(5360, 1096), 3);
    add_background_object(create_jcdirt3_2380(5360, 1160), 3);
    add_background_object(create_jcdirt3_2380(5360, 1224), 3);
    add_background_object(create_jcdirt3_2380(5360, 1288), 3);
    add_background_object(create_jcdirt3_2380(5360, 1352), 3);
    add_background_object(create_jcdirt3_2380(5360, 1416), 3);
    add_background_object(create_jcdirt3_2380(5360, 1480), 3);
    add_background_object(create_jcdirt1_594(5376, 1616), 3);
    add_background_object(create_jcflatground1_2375(5376, 1616), 3);
    add_background_object(create_jcflatground1_2375(5504, 1616), 3);
    add_background_object(create_jcdirt13_2389(5312, 1616), 3);
    add_background_object(create_jcflatground1_2375(5504, 1544), 3);
    add_background_object(create_jcdirt1_594(5888, 1544), 3);
    add_background_object(create_jcflatground1_2375(6016, 1544), 3);
    add_background_object(create_jcdirt1_594(5632, 1736), 3);
    add_background_object(create_jcdirt1_594(5376, 1808), 3);
    add_background_object(create_jcdirt3_2380(5360, 1544), 3);
    add_background_object(create_jcflatground1_2375(5888, 1544), 3);
    add_background_object(create_jcdirt1_594(5888, 1736), 3);
    add_background_object(create_jcdirt7_2371(6144, 1480), 3);
    add_background_object(create_jcdirt7_2371(6208, 1480), 3);
    add_background_object(create_jcdirt7_2371(6272, 1480), 3);
    add_background_object(create_jcdirt7_2371(6336, 1480), 3);
    add_background_object(create_jcdirt2_2379(6144, 1480), 3);
    add_background_object(create_jcdirt12_2388(6144, 1520), 3);
    add_background_object(create_jcgrass5_2397(6144, 1464), 3);
    add_background_object(create_jcdirt1_594(5632, 1544), 3);
    add_background_object(create_jcflatground1_2375(5760, 1544), 3);
    add_background_object(create_jcdirt2_2379(5632, 1560), 3);
    add_background_object(create_jcflatground1_2375(5632, 1544), 3);
    add_background_object(create_jcdirt1_594(6144, 1736), 3);
    add_background_object(create_jcgrass4_2396(6176, 1464), 3);
    add_background_object(create_jcdirt1_594(5920, 136), 3);
    add_background_object(create_jcdirt1_594(5920, -56), 3);
    add_background_object(create_jcdirt1_594(6176, 136), 3);
    add_background_object(create_jcdirt1_594(6176, -56), 3);
    add_background_object(create_jcdirt1_594(6048, 520), 3);
    add_background_object(create_jcdirt1_594(6048, 328), 3);
    add_background_object(create_jcdirt1_594(6432, 136), 3);
    add_background_object(create_jcdirt1_594(6432, -56), 3);
    add_background_object(create_jcdirt1_594(6304, 520), 3);
    add_background_object(create_jcdirt1_594(6304, 328), 3);
    add_background_object(create_jcdirt1_594(6400, 1672), 3);
    add_background_object(create_jcdirt12_2388(6336, 1488), 3);
    add_background_object(create_jcgrass3_2395(6432, 1464), 3);
    add_background_object(create_jcgrass1_2392(6304, 1472), 3);
    add_background_object(create_jcgrass6_2394(6688, 1472), 3);
    add_background_object(create_jcdirt20_2436(6656, 1480), 3);
    add_background_object(create_jcgrass4_2396(6560, 1464), 3);
    add_background_object(create_jcdirt1_594(6400, 1864), 3);
    add_background_object(create_jcdirt1_594(6656, 1864), 3);
    add_background_object(create_jcdirt1_594(6912, 1728), 3);
    add_background_object(create_jcflatground6_2370(6896, 1672), 3);
    add_background_object(create_jcflatground1_2375(6768, 1672), 3);
    add_background_object(create_jcflatground5_2385(6768, 1672), 3);
    add_background_object(create_jcflatground7_2369(6744, 1672), 3);
    add_background_object(create_jcflatground5_2385(6912, 1720), 3);
    add_background_object(create_jcflatground7_2369(6888, 1720), 3);
    add_background_object(create_jcdirt13_2389(6864, 1752), 3);
    add_background_object(create_jcdirt1_594(6912, 1920), 3);
    add_background_object(create_jcflatground5_2385(7040, 1720), 3);
    add_background_object(create_jcdirt1_594(7168, 1728), 3);
    add_background_object(create_jcflatground5_2385(7168, 1720), 3);
    add_background_object(create_jcdirt1_594(7168, 1920), 3);
    add_background_object(create_jcflatground5_2385(7296, 1720), 3);
    add_background_object(create_jcdirt1_594(7424, 1728), 3);
    add_background_object(create_jcflatground5_2385(7424, 1720), 3);
    add_background_object(create_jcdirt1_594(7424, 1920), 3);
    add_background_object(create_jcflatground5_2385(7552, 1720), 3);
    add_background_object(create_jcdirt1_594(6688, 136), 3);
    add_background_object(create_jcdirt1_594(6688, -56), 3);
    add_background_object(create_jcdirt1_594(6560, 520), 3);
    add_background_object(create_jcdirt1_594(6560, 328), 3);
    add_background_object(create_jcdirt1_594(6944, 136), 3);
    add_background_object(create_jcdirt1_594(6944, -56), 3);
    add_background_object(create_jcdirt1_594(6816, 520), 3);
    add_background_object(create_jcdirt1_594(6816, 328), 3);
    add_background_object(create_jcdirt1_594(7200, 136), 3);
    add_background_object(create_jcdirt1_594(7200, -56), 3);
    add_background_object(create_jcdirt1_594(7072, 520), 3);
    add_background_object(create_jcdirt1_594(7072, 328), 3);
    add_background_object(create_jcdirt1_594(7456, 136), 3);
    add_background_object(create_jcdirt1_594(7456, -56), 3);
    add_background_object(create_jcdirt1_594(7328, 520), 3);
    add_background_object(create_jcdirt1_594(7328, 328), 3);
    add_background_object(create_jcdirt1_594(7712, 136), 3);
    add_background_object(create_jcdirt1_594(7712, -56), 3);
    add_background_object(create_jcdirt1_594(7584, 520), 3);
    add_background_object(create_jcdirt1_594(7584, 328), 3);
    add_background_object(create_jcdirt1_594(7968, 136), 3);
    add_background_object(create_jcdirt1_594(7968, -56), 3);
    add_background_object(create_jcdirt1_594(7840, 520), 3);
    add_background_object(create_jcdirt1_594(7840, 328), 3);
    add_background_object(create_jcdirt8_2382(7456, 712), 3);
    add_background_object(create_jcdirt1_594(7712, 712), 3);
    add_background_object(create_jcdirt8_2382(7584, 904), 3);
    add_background_object(create_jcdirt5_2377(7584, 712), 3);
    add_background_object(create_jcdirt5_2377(7712, 904), 3);
    add_background_object(create_jcdirt1_594(7840, 904), 3);
    add_background_object(create_jcdirt8_2382(7712, 1096), 3);
    add_background_object(create_jcdirt5_2377(7840, 1096), 3);
    add_background_object(create_jcdirt8_2382(7840, 1288), 3);
    add_background_object(create_jcdirt5_2377(7968, 1288), 3);
    add_background_object(create_jcdirt1_594(7680, 1728), 3);
    add_background_object(create_jcflatground5_2385(7680, 1720), 3);
    add_background_object(create_jcdirt1_594(7680, 1920), 3);
    add_background_object(create_jcflatground5_2385(7808, 1720), 3);
    add_background_object(create_jcdirt1_594(7936, 1728), 3);
    add_background_object(create_jcflatground5_2385(7936, 1720), 3);
    add_background_object(create_jcdirt1_594(7936, 1920), 3);
    add_background_object(create_jcdirt1_594(7968, 1096), 3);
    add_background_object(create_jcdirt1_594(8096, 904), 3);
    add_background_object(create_jcdirt1_594(7968, 712), 3);
    add_background_object(create_jcdirt1_594(8096, 520), 3);
    add_background_object(create_jcdirt1_594(8096, 328), 3);
    add_background_object(create_jcdirt1_594(8224, 136), 3);
    add_background_object(create_jcdirt1_594(8224, -56), 3);
    add_background_object(create_jcdirt1_594(8224, 712), 3);
    add_background_object(create_jcdirt1_594(8352, 520), 3);
    add_background_object(create_jcdirt1_594(8352, 328), 3);
    add_background_object(create_jcdirt1_594(8480, 136), 3);
    add_background_object(create_jcdirt1_594(8480, -56), 3);
    add_background_object(create_jcdirt6_2398(7968, 1464), 3);
    add_background_object(create_dvceilingoverlay_915(7912, 1448), 3);
    add_background_object(create_jcdirt1_594(8096, 1288), 3);
    add_background_object(create_jcdirt6_2398(8096, 1464), 3);
    add_background_object(create_jcdirt6_2398(8224, 1464), 3);
    add_background_object(create_dvceilingoverlay_915(8224, 1464), 3);
    add_background_object(create_jcdirt1_594(8192, 1576), 3);
    add_background_object(create_jcdirt1_594(8192, 1768), 3);
    add_background_object(create_jcdirt1_594(8224, 1096), 3);
    add_background_object(create_jcdirt9_2390(8352, 1288), 3);
    add_background_object(create_jcflatground5_2385(8192, 1568), 3);
    add_background_object(create_jcdirt2_2379(8184, 1640), 3);
    add_background_object(create_jcdirt2_2379(8184, 1704), 3);
    add_background_object(create_jcflatground5_2385(8064, 1720), 3);
    add_background_object(create_jcflatground6_2370(8192, 1720), 3);
    add_background_object(create_jcflatground7_2369(8168, 1568), 3);
    add_background_object(create_jcflatground6_2370(8320, 1568), 3);
    add_background_object(create_jcgrass5_2397(8344, 1568), 3);
    add_background_object(create_jcgrass1_2392(8376, 1568), 3);
    add_background_object(create_jcgrass1_2392(8504, 1568), 3);
    add_background_object(create_jcgrass1_2392(8632, 1568), 3);
    add_background_object(create_jcgrass1_2392(8760, 1568), 3);
    add_background_object(create_jcdirt1_594(8704, 1768), 3);
    add_background_object(create_jcgrass1_2392(8888, 1568), 3);
    add_background_object(create_jcdirt1_594(8480, 1096), 3);
    add_background_object(create_jcdirt1_594(8736, 1096), 3);
    add_background_object(create_jcdirt6_2398(8480, 1272), 3);
    add_background_object(create_dvceilingoverlay_915(8480, 1272), 3);
    add_background_object(create_jcdirt6_2398(8608, 1272), 3);
    add_background_object(create_dvceilingoverlay_915(8608, 1272), 3);
    add_background_object(create_jcdirt6_2398(8736, 1272), 3);
    add_background_object(create_dvceilingoverlay_915(8736, 1272), 3);
    add_background_object(create_jcdirt6_2398(8864, 1272), 3);
    add_background_object(create_dvceilingoverlay_915(8864, 1272), 3);
    add_background_object(create_jcdirt1_594(8992, 1096), 3);
    add_background_object(create_jcdirt13_2389(8280, 1328), 3);
    add_background_object(create_jcdirt8_2382(8992, 1288), 3);
    add_background_object(create_jcdirt1_594(9248, 1096), 3);
    add_background_object(create_jcdirt9_2390(9248, 1288), 3);
    add_background_object(create_jcdirt5_2377(9120, 1288), 3);
    add_background_object(create_jcdirt12_2388(9160, 1344), 3);
    add_background_object(create_jcdirt6_2398(9120, 1464), 3);
    add_background_object(create_dvceilingoverlay_915(9120, 1464), 3);
    add_background_object(create_dvceilingoverlay_915(9064, 1448), 3);
    add_background_object(create_dvceilingoverlay_915(8280, 1448), 3);
    add_background_object(create_jcgrass1_2392(9016, 1568), 3);
    add_background_object(create_jcdirt9_2390(5920, 712), 3);
    add_background_object(create_jcdirt8_2382(6048, 712), 3);
    add_background_object(create_jcdirt9_2390(6176, 712), 3);
    add_background_object(create_jcdirt8_2382(6560, 712), 3);
    add_background_object(create_jcdirt9_2390(6688, 712), 3);
    add_background_object(create_jcdirt8_2382(7072, 712), 3);
    add_background_object(create_jcdirt9_2390(7200, 712), 3);
    add_background_object(create_jcgrass3_2395(9144, 1560), 3);
    add_background_object(create_jcgrass4_2396(9272, 1560), 3);
    add_background_object(create_jcdirt1_594(9472, 1576), 3);
    add_background_object(create_jcgrass3_2395(9400, 1560), 3);
    add_background_object(create_jcgrass4_2396(9528, 1560), 3);
    add_background_object(create_jcdirt6_2398(9376, 1272), 3);
    add_background_object(create_jcdirt6_2398(9376, 1272), 3);
    add_background_object(create_dvceilingoverlay_915(9376, 1272), 3);
    add_background_object(create_jcdirt9_2390(9504, 1096), 3);
    add_background_object(create_jcdirt1_594(8352, 904), 3);
    add_background_object(create_jcdirt1_594(8480, 712), 3);
    add_background_object(create_jcdirt1_594(8608, 520), 3);
    add_background_object(create_jcdirt1_594(8608, 328), 3);
    add_background_object(create_jcdirt1_594(8736, 136), 3);
    add_background_object(create_jcdirt1_594(8736, -56), 3);
    add_background_object(create_jcdirt1_594(8608, 904), 3);
    add_background_object(create_jcdirt1_594(8736, 712), 3);
    add_background_object(create_jcdirt1_594(8864, 520), 3);
    add_background_object(create_jcdirt1_594(8864, 328), 3);
    add_background_object(create_jcdirt1_594(8992, 136), 3);
    add_background_object(create_jcdirt1_594(8992, -56), 3);
    add_background_object(create_jcdirt1_594(8864, 904), 3);
    add_background_object(create_jcdirt1_594(8992, 712), 3);
    add_background_object(create_jcdirt1_594(9120, 520), 3);
    add_background_object(create_jcdirt1_594(9120, 328), 3);
    add_background_object(create_jcdirt1_594(9248, 136), 3);
    add_background_object(create_jcdirt1_594(9248, -56), 3);
    add_background_object(create_jcdirt1_594(9120, 904), 3);
    add_background_object(create_jcdirt1_594(9248, 712), 3);
    add_background_object(create_jcdirt1_594(9376, 520), 3);
    add_background_object(create_jcdirt1_594(9376, 328), 3);
    add_background_object(create_jcdirt1_594(9504, 136), 3);
    add_background_object(create_jcdirt1_594(9504, -56), 3);
    add_background_object(create_jcdirt1_594(9376, 904), 3);
    add_background_object(create_jcdirt1_594(9504, 712), 3);
    add_background_object(create_jcdirt9_2390(9632, 904), 3);
    add_background_object(create_jcdirt1_594(9632, 520), 3);
    add_background_object(create_jcdirt1_594(9632, 328), 3);
    add_background_object(create_jcdirt1_594(9760, 136), 3);
    add_background_object(create_jcdirt1_594(9760, -56), 3);
    add_background_object(create_jcdirt9_2390(9760, 712), 3);
    add_background_object(create_jcdirt9_2390(9344, 1768), 3);
    add_background_object(create_jcdirt4_2374(9216, 1768), 3);
    add_background_object(create_jcdirt6_2398(9472, 1752), 3);
    add_background_object(create_jcdirt6_2398(9600, 1752), 3);
    add_background_object(create_jcdirt1_594(9728, 1576), 3);
    add_background_object(create_jcdirt6_2398(9728, 1752), 3);
    add_background_object(create_jcdirt6_2398(9856, 1752), 3);
    add_background_object(create_jcdirt1_594(9984, 1576), 3);
    add_background_object(create_jcdirt6_2398(9984, 1752), 3);
    add_background_object(create_jcdirt6_2398(10112, 1752), 3);
    add_background_object(create_jcdirt6_2398(10240, 1752), 3);
    add_background_object(create_jcgrass3_2395(9656, 1560), 3);
    add_background_object(create_jcgrass4_2396(9784, 1560), 3);
    add_background_object(create_jcgrass3_2395(9912, 1560), 3);
    add_background_object(create_jcgrass4_2396(10040, 1560), 3);
    add_background_object(create_jcgrass3_2395(10168, 1560), 3);
    add_background_object(create_jcgrass4_2396(10296, 1560), 3);
    add_background_object(create_jcdirt6_2398(6304, 696), 3);
    add_background_object(create_jcdirt6_2398(6432, 696), 3);
    add_background_object(create_jcdirt6_2398(6816, 696), 3);
    add_background_object(create_jcdirt6_2398(6944, 696), 3);
    add_background_object(create_jcdirt6_2398(7328, 696), 3);
    add_background_object(create_jcgrass4_2396(10424, 1568), 3);
    add_background_object(create_jcgrass6_2394(10552, 1576), 3);
    add_background_object(create_jcdirt9_2390(9888, 328), 3);
    add_background_object(create_dvceilingoverlay_915(7968, 1464), 3);
    add_background_object(create_dvceilingoverlay_915(8096, 1464), 3);
    add_background_object(create_jcgrasstop1_2408(8376, 1560), 3);
    add_background_object(create_jcgrasstop1_2408(8504, 1560), 3);
    add_background_object(create_jcgrasstop1_2408(8632, 1560), 3);
    add_background_object(create_jcgrasstop1_2408(8760, 1560), 3);
    add_background_object(create_jcgrasstop1_2408(8888, 1560), 3);
    add_background_object(create_jcgrasstop1_2408(9016, 1560), 3);
    add_object(create_redspringup_440(4128, 1528), 3);
    add_object(create_bosshovercophook2_2440(8982, 2008), 3);
    add_object(create_playericedeath_2441(8928, 2108), 3);
    add_object(create_objectjumppad_1510(8600, 2104), 3);
    add_object(create_playerstartingpoint_358(69, 1573), 3);
    add_object(create_jcslidingplatformlandpoint_2415(3792, 1288), 3);
    add_object(create_effectwarning_1513(-404, 696), 3);
    add_object(create_jcwaterstream1_2416(11264, -144), 3);
    add_object(create_jcwaterstream2_2413(11136, -152), 3);
    add_object(create_jcwaterstream3_2410(11136, -200), 3);
    add_object(create_jcwaterstream4_2409(11264, -200), 3);
    add_object(create_jcwaterstream5_2412(11352, -240), 3);
    add_object(create_jcwaterstream6_2411(11136, -240), 3);
    add_object(create_jcwaterstream7_2362(11112, -216), 3);
    add_object(create_jcwaterstream8_2361(11408, -216), 3);
    add_object(create_jcloop4_2446(5536, 712), 3);
    add_object(create_jcloop2_2447(5504, 584), 3);
    add_object(create_jcloop2_2447(5504, 648), 3);
    add_object(create_jcloop2_2447(5504, 456), 3);
    add_object(create_jcloop2_2447(5504, 520), 3);
    add_object(create_jcloop2_2447(5504, 328), 3);
    add_object(create_jcloop2_2447(5504, 392), 3);
    add_object(create_jcloop1_2445(5536, 328), 3);
    add_object(create_layerchangeswitch_404(5656, 336), 3);
    add_object(create_layerchangeto0_405(5368, 480), 3);
    add_object(create_layerchangeto0_405(5376, 416), 3);
    add_object(create_layerchangeto0_405(5384, 352), 3);
    add_object(create_bosshovercopsiren4_2329(9128, 2072), 3);
    add_object(create_bosshovercopsiren3_2330(9152, 2072), 3);
    add_object(create_bosshovercopturbine2_2331(9132, 2089), 3);
    add_object(create_bosshovercop_2332(6584, 1560), 3);
    add_object(create_bosshovercopturbine1_2333(9052, 2089), 3);
    add_object(create_bosshovercoppropellor_2334(9072, 2088), 3);
    add_object(create_bosshovercoppropellor2_2335(9152, 2088), 3);
    add_object(create_bosshovercopsiren1_2336(9048, 2072), 3);
    add_object(create_bosshovercopsiren2_2337(9032, 2072), 3);
    add_object(create_bosshovercophook_2449(8905, 2142), 3);
    add_object(create_leveljccollapsingplatform_2461(-384, 2088), 3);
    add_object(create_gimmickseedspawner_2422(10961, -255), 3);
    add_object(create_jcslidingplatform_2414(3296, 768), 3);
    add_object(create_minibossrailing_923(8184, -104), 3);
    add_object(create_minibossbarrier_924(8168, -104), 3);
    add_object(create_minibossrailing_923(8184, -152), 3);
    add_object(create_minibossrailing_923(8184, -176), 3);
    add_object(create_minibossbarrier_924(8168, -184), 3);
    add_object(create_minibossbarrier_924(8168, -152), 3);
    add_object(create_enemysharktorpedo_2423(-460, 2005), 3);
    add_object(create_objectcrystal_279(1309, 1146), 3);
    add_object(create_objectcrystal_279(1509, 1146), 3);
    add_object(create_objectcrystal_279(1349, 1146), 3);
    add_object(create_objectcrystal_279(1389, 1146), 3);
    add_object(create_objectcrystal_279(1429, 1146), 3);
    add_object(create_objectcrystal_279(1469, 1146), 3);
    add_object(create_objectcrystal_279(1309, 1186), 3);
    add_object(create_objectcrystal_279(1509, 1186), 3);
    add_object(create_objectcrystal_279(1349, 1186), 3);
    add_object(create_objectcrystal_279(1389, 1186), 3);
    add_object(create_objectcrystal_279(1429, 1186), 3);
    add_object(create_objectcrystal_279(1469, 1186), 3);
    add_object(create_objectwhispmaker_751(248, 1488), 3);
    add_object(create_objectwhispmaker_751(552, 1472), 3);
    add_object(create_objectwhispmaker_751(960, 1384), 3);
    add_object(create_objectwhispmaker_751(1424, 1296), 3);
    add_object(create_objectwhispmaker_751(1744, 1480), 3);
    add_object(create_enemybuoybuoy_2418(1936, 1624), 3);
    add_object(create_objectpetal_302(1881, 1697), 3);
    add_object(create_objectpetal_302(1961, 1697), 3);
    add_object(create_objectpetal_302(1921, 1713), 3);
    add_object(create_gimmickflyingleafplatformmask_2462(2208, 1520), 3);
    add_object(create_enemylimiter_350(2053, 1538), 3);
    add_object(create_enemymeteorroller_2421(2119, 1540), 3);
    add_object(create_enemymeteorrollerflame_2420(2112, 1536), 3);
    add_object(create_enemymeteorroller_2421(2335, 1540), 3);
    add_object(create_enemymeteorrollerflame_2420(2328, 1536), 3);
    add_object(create_enemymeteorroller_2421(2455, 1532), 3);
    add_object(create_enemymeteorrollerflame_2420(2448, 1528), 3);
    add_object(create_enemymeteorroller_2421(2607, 1524), 3);
    add_object(create_enemymeteorrollerflame_2420(2600, 1520), 3);
    add_object(create_gimmickflyingleafplatformmask_2462(3016, 1320), 3);
    add_object(create_gimmickflyingleafplatformmask_2462(2856, 1096), 3);
    add_object(create_gimmickflyingleafplatformmask_2462(2352, 1240), 3);
    add_object(create_levelcreekplatform_2424(2432, 952), 3);
    add_object(create_levelcreekplatform_2424(2672, 880), 3);
    add_object(create_objectcrystal_279(2349, 1122), 3);
    add_object(create_objectcrystal_279(2349, 1074), 3);
    add_object(create_objectcrystal_279(2349, 1026), 3);
    add_object(create_objectcrystal_279(2349, 978), 3);
    add_object(create_objectcrystal_279(2213, 1378), 3);
    add_object(create_objectcrystal_279(2213, 1330), 3);
    add_object(create_objectcrystal_279(2213, 1282), 3);
    add_object(create_objectcrystal_279(2213, 1234), 3);
    add_object(create_objectcrystal_279(2853, 1042), 3);
    add_object(create_objectcrystal_279(2853, 994), 3);
    add_object(create_objectcrystal_279(2853, 946), 3);
    add_object(create_objectcrystal_279(2853, 898), 3);
    add_object(create_objectcrystal_279(3005, 1250), 3);
    add_object(create_objectcrystal_279(3005, 1202), 3);
    add_object(create_objectcrystal_279(3005, 1154), 3);
    add_object(create_gimmickflyingleafplatformmask_2462(2072, 832), 3);
    add_object(create_objectcrystal_279(2069, 698), 3);
    add_object(create_objectcrystal_279(2069, 650), 3);
    add_object(create_objectcrystal_279(2069, 602), 3);
    add_object(create_objectcrystal_279(2069, 554), 3);
    add_object(create_objectcrystal_279(2069, 506), 3);
    add_object(create_objectcrystal_279(2069, 458), 3);
    add_object(create_objectcrystal_279(2069, 410), 3);
    add_object(create_enemylimiter_350(2365, 914), 3);
    add_object(create_enemylimiter_350(2229, 842), 3);
    add_object(create_enemylimiter_350(2861, 754), 3);
    add_object(create_objectcodec_354(2066, 77), 3);
    add_object(create_jcwaterstream2_2413(3584, 1328), 3);
    add_object(create_jcwaterstream2_2413(3712, 1336), 3);
    add_object(create_jcwaterstream4_2409(3840, 1344), 3);
    add_object(create_jcwaterstream2_2413(3968, 1344), 3);
    add_object(create_jcwaterstream5_2412(4096, 1352), 3);
    add_object(create_jcwaterstream7_2362(4120, 1384), 3);
    add_object(create_jcwaterstream7_2362(4120, 1448), 3);
    add_object(create_jcwaterstream7_2362(4120, 1536), 3);
    add_object(create_jcwaterstream7_2362(4120, 1512), 3);
    add_object(create_redspringup_440(4160, 1528), 3);
    add_object(create_redspringup_440(4192, 1528), 3);
    add_object(create_redspringup_440(4224, 1528), 3);
    add_object(create_redspringup_440(4256, 1528), 3);
    add_object(create_redspringup_440(4288, 1528), 3);
    add_object(create_redspringup_440(4320, 1528), 3);
    add_object(create_redspringup_440(4352, 1528), 3);
    add_object(create_redspringup_440(4384, 1528), 3);
    add_object(create_redspringup_440(4416, 1528), 3);
    add_object(create_redspringup_440(4448, 1528), 3);
    add_object(create_redspringup_440(4480, 1528), 3);
    add_object(create_redspringup_440(4512, 1528), 3);
    add_object(create_redspringup_440(4544, 1528), 3);
    add_object(create_redspringup_440(4576, 1528), 3);
    add_object(create_redspringup_440(4608, 1528), 3);
    add_object(create_redspringup_440(4640, 1528), 3);
    add_object(create_redspringup_440(4672, 1528), 3);
    add_object(create_redspringup_440(4704, 1528), 3);
    add_object(create_redspringup_440(4736, 1528), 3);
    add_object(create_redspringup_440(4768, 1528), 3);
    add_object(create_redspringup_440(4800, 1528), 3);
    add_object(create_redspringup_440(4832, 1528), 3);
    add_object(create_redspringup_440(4864, 1528), 3);
    add_object(create_redspringup_440(4896, 1528), 3);
    add_object(create_redspringup_440(4928, 1528), 3);
    add_object(create_redspringup_440(4960, 1528), 3);
    add_object(create_redspringup_440(4992, 1528), 3);
    add_object(create_redspringup_440(5024, 1528), 3);
    add_object(create_redspringup_440(5056, 1528), 3);
    add_object(create_redspringup_440(5088, 1528), 3);
    add_object(create_gimmickflyingleafplatformmask_2462(4792, 1264), 3);
    add_object(create_gimmickflyingleafplatformmask_2462(4456, 1128), 3);
    add_object(create_gimmickflyingleafplatformmask_2462(4664, 1000), 3);
    add_object(create_gimmickflyingleafplatformmask_2462(4920, 672), 3);
    add_object(create_enemylimiter_350(4461, 378), 3);
    add_object(create_enemylimiter_350(4677, 282), 3);
    add_object(create_enemylimiter_350(4933, 282), 3);
    add_object(create_enemylimiter_350(4805, 282), 3);
    add_object(create_leveljccollapsingplatform_2461(640, 504), 3);
    add_object(create_objectpetal_302(681, 1089), 3);
    add_object(create_objectpetal_302(729, 1089), 3);
    add_object(create_enemybubblorbiter_2443(3104, 736), 3);
    add_object(create_redspringup_440(5376, 1528), 3);
    add_object(create_redspringup_440(5408, 1528), 3);
    add_object(create_monitorwoodshield_325(5248, 920), 3);
    add_object(create_objectpetal_302(5337, 761), 3);
    add_object(create_objectpetal_302(5393, 761), 3);
    add_object(create_objectpetal_302(5313, 801), 3);
    add_object(create_objectpetal_302(5417, 801), 3);
    add_object(create_objectpetal_302(5609, 1593), 3);
    add_object(create_objectpetal_302(5537, 1593), 3);
    add_object(create_objectpetal_302(5473, 1593), 3);
    add_object(create_objectpetal_302(5401, 1593), 3);
    add_object(create_enemybubblorbiter_2443(4024, 1320), 3);
    add_object(create_enemybubblorbiter_2443(5984, 1520), 3);
    add_object(create_enemybubblorbiter_2443(6320, 1448), 3);
    add_object(create_levelicebarrier_2456(9128, 1524), 3);
    add_object(create_levelicebarrierpiece_2463(8891, 2051), 3);
    add_object(create_cameratriggerboss_424(8728, 1416), 3);
    add_object(create_cameratriggerboss_424(8728, 1224), 3);
    add_object(create_npcneera_2464(8575, 1543), 3);
    add_object(create_bossneerahitbox_2465(8662, 2115), 3);
    add_object(create_objectwhispmaker_751(9472, 1480), 3);
    add_object(create_objectwhispmaker_751(9784, 1480), 3);
    add_object(create_objectwhispmaker_751(10104, 1480), 3);
    add_object(create_objectwhispmaker_751(10424, 1480), 3);
    add_object(create_objectwhispmaker_751(8736, 1480), 3);
    add_object(create_layerobject_10(-184, 440), 3);
    add_object(create_cameralimitbossbottom_420(8752, 1607), 3);
    add_object(create_cameralimitbossleft_421(8312, 1528), 3);
    add_object(create_cameralimitbossright_422(9151, 1472), 3);
    add_object(create_cameralimitbosstop_423(8760, 1256), 3);
    add_object(create_layerchangeto0_405(5360, 544), 3);
    add_object(create_layerchangeto0_405(5352, 608), 3);
    add_object(create_layerchangeto0_405(5344, 664), 3);
    add_object(create_enemylimiter_350(3029, 1050), 3);
    add_object(create_levelslipperysurface_2450(1792, 1640), 3);
    add_object(create_levelslipperysurface_2450(1928, 1656), 3);
    add_object(create_levelslipperysurface_2450(2000, 1560), 3);
    add_object(create_levelslipperysurface_2450(5248, 528), 3);
    add_object(create_levelslipperysurface_2450(5280, 624), 3);
    add_object(create_levelslipperysurface_2450(5664, 616), 3);
    add_object(create_levelslipperysurface_2450(5728, 520), 3);
    add_object(create_levelslipperysurface_2450(5728, 424), 3);
    add_object(create_levelslipperysurface_2450(5664, 328), 3);
    add_object(create_levelslipperysurface_2450(5568, 328), 3);
    add_object(create_levelslipperysurface_2450(5496, 424), 3);
    add_object(create_levelslipperysurface_2450(5240, 744), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
    add_background_object(create_jcsubtanker5_2466(12936, 2184), 4);
    add_background_object(create_jcsubtanker6_2467(13000, 2184), 4);
    add_background_object(create_jcsubtanker5_2466(12936, 2248), 4);
    add_background_object(create_jcsubtanker6_2467(13000, 2248), 4);
    add_background_object(create_jcsub7_2468(12688, 2288), 4);
    add_background_object(create_jcsub10_2469(12688, 2352), 4);
    add_background_object(create_jcsub10_2469(12688, 2416), 4);
    add_background_object(create_jcsub18_2470(12656, 2416), 4);
    add_background_object(create_jcsub18_2470(10368, 2384), 4);
    add_background_object(create_jcsubsupportback_2471(12688, 2032), 4);
    add_background_object(create_jcsubsupportback_2471(12688, 2096), 4);
    add_background_object(create_jcsubsupportback_2471(12688, 2160), 4);
    add_background_object(create_jcsubfin3_2472(12680, 2192), 4);
    add_background_object(create_jcsubfin4_2473(12808, 2200), 4);
    add_background_object(create_jcsubfin5_2474(12936, 2256), 4);
    add_background_object(create_jcsubsupportback_2471(11976, 1944), 4);
    add_background_object(create_jcsubsupportback_2471(11976, 2072), 4);
    add_background_object(create_jcsubsupportback_2471(12144, 1944), 4);
    add_background_object(create_jcsubsupportback_2471(12144, 2072), 4);
    add_background_object(create_jcsub18_2470(10368, 2192), 4);
    add_background_object(create_jcsub18_2470(11832, 2192), 4);
    add_background_object(create_jcsub17_2475(11832, 2128), 4);
    add_background_object(create_jcsub10_2469(12248, 2128), 4);
    add_background_object(create_jcsub10_2469(12248, 2192), 4);
    add_background_object(create_jcdirt4_2374(640, 912), 4);
    add_background_object(create_jcdirt5_2377(5536, 712), 4);
    add_background_object(create_jcgrass1_2392(5536, 712), 4);
    add_background_object(create_jcdirt6_2398(5408, 320), 4);
    add_background_object(create_jcdirt8_2382(5408, 712), 4);
    add_background_object(create_jcgrass1_2392(5408, 712), 4);
    add_background_object(create_jcdirt6_2398(4320, 272), 4);
    add_background_object(create_jcdirt6_2398(4448, 272), 4);
    add_background_object(create_jcdirt6_2398(4576, 176), 4);
    add_background_object(create_jcdirt6_2398(4704, 176), 4);
    add_background_object(create_jcdirt6_2398(4832, 176), 4);
    add_background_object(create_jcdirt6_2398(4960, 176), 4);
    add_background_object(create_jcdirt5_2377(640, 720), 4);
    add_background_object(create_jcdirt4_2374(640, 528), 4);
    add_background_object(create_jcdirt6_2398(640, 1088), 4);
    add_background_object(create_jcdirt6_2398(5536, 888), 4);
    add_background_object(create_jcdirt6_2398(5664, 888), 4);
    add_background_object(create_jcdirt6_2398(5792, 888), 4);
    add_background_object(create_jcdirt5_2377(7968, 1288), 4);
    add_background_object(create_jcdirt4_2374(8096, 1288), 4);
    add_background_object(create_jcdirt4_2374(7968, 1096), 4);
    add_background_object(create_jcdirt5_2377(8096, 1096), 4);
    add_background_object(create_jcdirt6_2398(7968, 1464), 4);
    add_background_object(create_jcdirt6_2398(8096, 1464), 4);
    add_background_object(create_jcdirt1_594(8480, 1096), 4);
    add_background_object(create_jcdirt1_594(8736, 1096), 4);
    add_background_object(create_jcdirt6_2398(8480, 1272), 4);
    add_background_object(create_jcdirt6_2398(8608, 1272), 4);
    add_background_object(create_jcdirt6_2398(8736, 1272), 4);
    add_background_object(create_jcdirt6_2398(8864, 1272), 4);
    add_background_object(create_jcdirt1_594(8224, 1096), 4);
    add_background_object(create_jcdirt1_594(8992, 1096), 4);
    add_background_object(create_jcsub1_2476(10496, 2128), 4);
    add_background_object(create_jcsub2_2477(10496, 2448), 4);
    add_background_object(create_jcsub7_2468(10400, 2128), 4);
    add_background_object(create_jcsub12_2478(10400, 2448), 4);
    add_background_object(create_jcsub10_2469(10400, 2192), 4);
    add_background_object(create_jcsub1_2476(11008, 2128), 4);
    add_background_object(create_jcsub9_2479(11008, 2192), 4);
    add_background_object(create_jcsubfin1_2480(11040, 2032), 4);
    add_background_object(create_jcsubfin2_2481(11136, 2032), 4);
    add_background_object(create_jcsubfin3_2472(11232, 2032), 4);
    add_background_object(create_jcsubfin4_2473(11360, 2040), 4);
    add_background_object(create_jcsubfin5_2474(11488, 2096), 4);
    add_background_object(create_jcsub1_2476(11136, 2128), 4);
    add_background_object(create_jcsub1_2476(11264, 2128), 4);
    add_background_object(create_jcsub1_2476(11392, 2128), 4);
    add_background_object(create_jcsub9_2479(10496, 2192), 4);
    add_background_object(create_jcsub9_2479(11136, 2192), 4);
    add_background_object(create_jcsub9_2479(11264, 2192), 4);
    add_background_object(create_jcsub9_2479(11392, 2192), 4);
    add_background_object(create_jcsub7_2468(11864, 2128), 4);
    add_background_object(create_jcsub10_2469(11864, 2192), 4);
    add_background_object(create_jcsub10_2469(12248, 2000), 4);
    add_background_object(create_jcsub18_2470(12216, 2000), 4);
    add_background_object(create_jcsub9_2479(12344, 2192), 4);
    add_background_object(create_jcsub9_2479(12344, 2128), 4);
    add_background_object(create_jcsub1_2476(12344, 1936), 4);
    add_background_object(create_jcsub9_2479(12088, 2192), 4);
    add_background_object(create_jcsub1_2476(12088, 2128), 4);
    add_background_object(create_jcsub9_2479(12344, 2000), 4);
    add_background_object(create_jcsub7_2468(12248, 1936), 4);
    add_background_object(create_jcsub17_2475(12216, 1936), 4);
    add_background_object(create_jcsub1_2476(10624, 2128), 4);
    add_background_object(create_jcsub9_2479(10624, 2192), 4);
    add_background_object(create_jcsub8_2482(12216, 2128), 4);
    add_background_object(create_jcsub11_2483(12216, 2192), 4);
    add_background_object(create_jcsub10_2469(12248, 2256), 4);
    add_background_object(create_jcsub10_2469(10400, 2256), 4);
    add_background_object(create_jcsub9_2479(11008, 2256), 4);
    add_background_object(create_jcsub9_2479(10496, 2256), 4);
    add_background_object(create_jcsub9_2479(11136, 2256), 4);
    add_background_object(create_jcsub9_2479(11264, 2256), 4);
    add_background_object(create_jcsub9_2479(11392, 2256), 4);
    add_background_object(create_jcsub10_2469(11864, 2256), 4);
    add_background_object(create_jcsub9_2479(12344, 2256), 4);
    add_background_object(create_jcsub9_2479(12088, 2256), 4);
    add_background_object(create_jcsub9_2479(10624, 2256), 4);
    add_background_object(create_jcsub11_2483(12216, 2256), 4);
    add_background_object(create_jcsubtanker1_2484(12304, 2032), 4);
    add_background_object(create_jcsub16_2485(12304, 2048), 4);
    add_background_object(create_jcsubtanker2_2486(12368, 2032), 4);
    add_background_object(create_jcsub9_2479(11648, 2256), 4);
    add_background_object(create_jcsub11_2483(11776, 2256), 4);
    add_background_object(create_jcsub9_2479(11648, 2192), 4);
    add_background_object(create_jcsub1_2476(11648, 2128), 4);
    add_background_object(create_jcsub11_2483(11776, 2192), 4);
    add_background_object(create_jcsub8_2482(11832, 2192), 4);
    add_background_object(create_jcsub11_2483(11832, 2256), 4);
    add_background_object(create_jcsub7_2468(9504, 2192), 4);
    add_background_object(create_jcsub10_2469(9504, 2256), 4);
    add_background_object(create_jcsub8_2482(10368, 2192), 4);
    add_background_object(create_jcsub11_2483(10368, 2256), 4);
    add_background_object(create_jcsub9_2479(11520, 2256), 4);
    add_background_object(create_jcsub9_2479(11520, 2192), 4);
    add_background_object(create_jcsub1_2476(11520, 2128), 4);
    add_background_object(create_jcsub16_2485(12368, 2048), 4);
    add_background_object(create_jcsub17_2475(10368, 2128), 4);
    add_background_object(create_jcsub18_2470(9472, 2256), 4);
    add_background_object(create_jcsub17_2475(9472, 2192), 4);
    add_background_object(create_jcsub20_2487(10368, 2448), 4);
    add_background_object(create_jcsubtanker1_2484(12528, 2016), 4);
    add_background_object(create_jcsubtanker4_2488(12936, 2040), 4);
    add_background_object(create_jcsubtanker5_2466(12936, 2120), 4);
    add_background_object(create_jcsubtanker6_2467(13000, 2120), 4);
    add_background_object(create_jcsubtanker5_2489(13000, 2040), 4);
    add_background_object(create_jcsubtanker3_2490(12592, 2016), 4);
    add_background_object(create_jcsub8_2482(12472, 1936), 4);
    add_background_object(create_jcsub11_2483(12472, 2000), 4);
    add_background_object(create_jcsub11_2483(12472, 2128), 4);
    add_background_object(create_jcladder_2491(12096, 1936), 4);
    add_background_object(create_jcsub10_2469(12248, 2064), 4);
    add_background_object(create_jcsub18_2470(12216, 2064), 4);
    add_background_object(create_jcsub9_2479(12344, 2064), 4);
    add_background_object(create_jcsub11_2483(12472, 2064), 4);
    add_background_object(create_jcsubtanker1_2484(12136, 1936), 4);
    add_background_object(create_jcsubtanker2_2486(12200, 1936), 4);
    add_background_object(create_jcladder_2491(12096, 1968), 4);
    add_background_object(create_jcladder_2491(12096, 2000), 4);
    add_background_object(create_jcsubsupportback_2471(12144, 2008), 4);
    add_background_object(create_jcsub9_2479(11960, 2192), 4);
    add_background_object(create_jcsub1_2476(11960, 2128), 4);
    add_background_object(create_jcsub9_2479(11960, 2256), 4);
    add_background_object(create_jcsubtanker1_2484(11968, 1936), 4);
    add_background_object(create_jcsubtanker2_2486(12032, 1936), 4);
    add_background_object(create_jcsub14_2492(11968, 1912), 4);
    add_background_object(create_jcsub15_2493(12032, 1912), 4);
    add_background_object(create_jcsubsupportback_2471(11976, 2008), 4);
    add_background_object(create_jcsub11_2483(12472, 2256), 4);
    add_background_object(create_jcsub11_2483(12472, 2192), 4);
    add_background_object(create_jcsub9_2479(12528, 2256), 4);
    add_background_object(create_jcsub1_2476(12528, 2192), 4);
    add_background_object(create_jcsub8_2482(12656, 2192), 4);
    add_background_object(create_jcsub11_2483(12656, 2256), 4);
    add_background_object(create_jcsub9_2479(12528, 2320), 4);
    add_background_object(create_jcsub11_2483(12656, 2320), 4);
    add_background_object(create_jcsubtanker2_2486(12720, 2016), 4);
    add_background_object(create_jcsub10_2469(12248, 2320), 4);
    add_background_object(create_jcsub9_2479(12344, 2320), 4);
    add_background_object(create_jcsub11_2483(12472, 2320), 4);
    add_background_object(create_jcsub10_2469(11864, 2320), 4);
    add_background_object(create_jcsub9_2479(12088, 2320), 4);
    add_background_object(create_jcsub11_2483(12216, 2320), 4);
    add_background_object(create_jcsub9_2479(11960, 2320), 4);
    add_background_object(create_jcsub10_2469(10400, 2320), 4);
    add_background_object(create_jcsub9_2479(11008, 2320), 4);
    add_background_object(create_jcsub9_2479(10496, 2320), 4);
    add_background_object(create_jcsub9_2479(11136, 2320), 4);
    add_background_object(create_jcsub9_2479(11264, 2320), 4);
    add_background_object(create_jcsub9_2479(11392, 2320), 4);
    add_background_object(create_jcsub9_2479(10624, 2320), 4);
    add_background_object(create_jcsub9_2479(11648, 2320), 4);
    add_background_object(create_jcsub11_2483(11776, 2320), 4);
    add_background_object(create_jcsub11_2483(11832, 2320), 4);
    add_background_object(create_jcsub9_2479(11520, 2320), 4);
    add_background_object(create_jcsub10_2469(9504, 2320), 4);
    add_background_object(create_jcsub11_2483(10368, 2320), 4);
    add_background_object(create_jcsub18_2470(9472, 2320), 4);
    add_background_object(create_jcsub9_2479(12784, 2352), 4);
    add_background_object(create_jcsub1_2476(12784, 2288), 4);
    add_background_object(create_jcsub9_2479(12784, 2416), 4);
    add_background_object(create_jcsub9_2479(12912, 2352), 4);
    add_background_object(create_jcsub1_2476(12912, 2288), 4);
    add_background_object(create_jcsub9_2479(12912, 2416), 4);
    add_background_object(create_jcsub9_2479(13040, 2352), 4);
    add_background_object(create_jcsub1_2476(13040, 2288), 4);
    add_background_object(create_jcsub9_2479(13040, 2416), 4);
    add_background_object(create_jcsubtanker3_2490(12656, 2016), 4);
    add_background_object(create_jcsubtanker1_2484(12680, 2104), 4);
    add_background_object(create_jcsubtanker3_2490(12744, 2104), 4);
    add_background_object(create_jcsubtanker2_2486(13128, 2104), 4);
    add_background_object(create_jcsubtanker3_2490(13064, 2104), 4);
    add_background_object(create_jcsubtanker3_2490(12808, 2104), 4);
    add_background_object(create_jcsubtanker3_2490(12872, 2104), 4);
    add_background_object(create_jcsubtanker4_2488(12936, 1976), 4);
    add_background_object(create_jcsubtanker5_2489(13000, 1976), 4);
    add_background_object(create_jcsubtanker4_2488(12936, 1912), 4);
    add_background_object(create_jcsubtanker5_2489(13000, 1912), 4);
    add_background_object(create_jcsubtanker4_2488(12936, 1848), 4);
    add_background_object(create_jcsubtanker5_2489(13000, 1848), 4);
    add_background_object(create_jcsubtanker4_2488(12936, 1784), 4);
    add_background_object(create_jcsubtanker5_2489(13000, 1784), 4);
    add_background_object(create_jcsubtanker1_2484(12872, 1704), 4);
    add_background_object(create_jcsubtanker2_2486(12936, 1704), 4);
    add_background_object(create_jcsubtanker4_2488(12872, 1720), 4);
    add_background_object(create_jcsubtanker5_2489(12936, 1720), 4);
    add_background_object(create_jcsubtanker1_2484(13000, 1704), 4);
    add_background_object(create_jcsubtanker2_2486(13064, 1704), 4);
    add_background_object(create_jcsubtanker4_2488(13000, 1720), 4);
    add_background_object(create_jcsubtanker5_2489(13064, 1720), 4);
    add_background_object(create_jcsubsupportback_2471(12880, 1784), 4);
    add_background_object(create_jcsubsupportback_2471(12880, 1912), 4);
    add_background_object(create_jcsubsupportback_2471(12880, 1848), 4);
    add_background_object(create_jcsubsupportback_2471(12880, 1976), 4);
    add_background_object(create_jcsubsupportback_2471(12880, 2040), 4);
    add_background_object(create_jcsubsupportback_2471(13088, 1784), 4);
    add_background_object(create_jcsubsupportback_2471(13088, 1912), 4);
    add_background_object(create_jcsubsupportback_2471(13088, 1848), 4);
    add_background_object(create_jcsubsupportback_2471(13088, 1976), 4);
    add_background_object(create_jcsubsupportback_2471(13088, 2040), 4);
    add_background_object(create_jcsubtanker3_2490(12936, 2104), 4);
    add_background_object(create_jcsubtanker3_2490(13000, 2104), 4);
    add_background_object(create_jcsub16_2485(12176, 2288), 4);
    add_background_object(create_jcsub16_2485(12240, 2288), 4);
    add_background_object(create_jcsub16_2485(12008, 2288), 4);
    add_background_object(create_jcsub16_2485(12072, 2288), 4);
    add_background_object(create_jcsub16_2485(12696, 2368), 4);
    add_background_object(create_jcsub16_2485(12760, 2368), 4);
    add_background_object(create_jcsub9_2479(12344, 2384), 4);
    add_background_object(create_jcsub11_2483(12472, 2384), 4);
    add_background_object(create_jcsub10_2469(12248, 2384), 4);
    add_background_object(create_jcsub9_2479(12088, 2384), 4);
    add_background_object(create_jcsub11_2483(12216, 2384), 4);
    add_background_object(create_jcsub10_2469(10400, 2384), 4);
    add_background_object(create_jcsub9_2479(11008, 2384), 4);
    add_background_object(create_jcsub9_2479(10496, 2384), 4);
    add_background_object(create_jcsub9_2479(11136, 2384), 4);
    add_background_object(create_jcsub9_2479(11264, 2384), 4);
    add_background_object(create_jcsub9_2479(11392, 2384), 4);
    add_background_object(create_jcsub9_2479(10624, 2384), 4);
    add_background_object(create_jcsub9_2479(11648, 2384), 4);
    add_background_object(create_jcsub11_2483(11776, 2384), 4);
    add_background_object(create_jcsub9_2479(11520, 2384), 4);
    add_background_object(create_jcsub9_2479(13168, 2352), 4);
    add_background_object(create_jcsub1_2476(13168, 2288), 4);
    add_background_object(create_jcsub9_2479(13168, 2416), 4);
    add_background_object(create_jcsub9_2479(13296, 2352), 4);
    add_background_object(create_jcsub1_2476(13296, 2288), 4);
    add_background_object(create_jcsub9_2479(13296, 2416), 4);
    add_background_object(create_jcsubfin1_2480(13160, 2192), 4);
    add_background_object(create_jcsubfin2_2481(13256, 2192), 4);
    add_background_object(create_jcsubfin3_2472(13352, 2192), 4);
    add_background_object(create_jcsubfin4_2473(13480, 2200), 4);
    add_background_object(create_jcsubfin5_2474(13608, 2256), 4);
    add_background_object(create_jcsub9_2479(13424, 2352), 4);
    add_background_object(create_jcsub1_2476(13424, 2288), 4);
    add_background_object(create_jcsub9_2479(13424, 2416), 4);
    add_background_object(create_jcsub9_2479(13552, 2352), 4);
    add_background_object(create_jcsub1_2476(13552, 2288), 4);
    add_background_object(create_jcsub9_2479(13552, 2416), 4);
    add_background_object(create_jcsub13_2494(10368, 2384), 4);
    add_background_object(create_jcsub12_2478(9504, 2384), 4);
    add_background_object(create_jcsub20_2487(9472, 2384), 4);
    add_background_object(create_jcsub2_2477(10624, 2448), 4);
    add_background_object(create_jcsub2_2477(11008, 2448), 4);
    add_background_object(create_jcsub2_2477(11136, 2448), 4);
    add_background_object(create_jcsub2_2477(11264, 2448), 4);
    add_background_object(create_jcsub2_2477(11392, 2448), 4);
    add_background_object(create_jcsub2_2477(11520, 2448), 4);
    add_background_object(create_jcsub2_2477(11648, 2448), 4);
    add_background_object(create_jcsub13_2494(11776, 2448), 4);
    add_background_object(create_jcsub18_2470(11832, 2384), 4);
    add_background_object(create_jcsub12_2478(11864, 2448), 4);
    add_background_object(create_jcsub20_2487(11832, 2448), 4);
    add_background_object(create_jcsub10_2469(11864, 2384), 4);
    add_background_object(create_jcsub13_2494(11832, 2384), 4);
    add_background_object(create_jcsub9_2479(11960, 2384), 4);
    add_background_object(create_jcsub2_2477(11960, 2448), 4);
    add_background_object(create_jcsub2_2477(12088, 2448), 4);
    add_background_object(create_jcsub2_2477(12216, 2448), 4);
    add_background_object(create_jcsub2_2477(12344, 2448), 4);
    add_background_object(create_jcsub13_2494(12472, 2448), 4);
    add_background_object(create_jcsub13_2494(12656, 2384), 4);
    add_background_object(create_jcsub2_2477(12528, 2384), 4);
    add_background_object(create_jcsub2_2477(12784, 2480), 4);
    add_background_object(create_jcsub2_2477(12912, 2480), 4);
    add_background_object(create_jcsub12_2478(12688, 2480), 4);
    add_background_object(create_jcsub20_2487(12656, 2480), 4);
    add_background_object(create_jcsub2_2477(13040, 2480), 4);
    add_background_object(create_jcsub2_2477(13168, 2480), 4);
    add_background_object(create_jcsub2_2477(13296, 2480), 4);
    add_background_object(create_jcsub2_2477(13424, 2480), 4);
    add_background_object(create_jcsub2_2477(13552, 2480), 4);
    add_background_object(create_jcsub9_2479(13680, 2352), 4);
    add_background_object(create_jcsub1_2476(13680, 2288), 4);
    add_background_object(create_jcsub9_2479(13680, 2416), 4);
    add_background_object(create_jcsub9_2479(13808, 2352), 4);
    add_background_object(create_jcsub1_2476(13808, 2288), 4);
    add_background_object(create_jcsub9_2479(13808, 2416), 4);
    add_background_object(create_jcsub2_2477(13680, 2480), 4);
    add_background_object(create_jcsub2_2477(13808, 2480), 4);
    add_background_object(create_jcsub1_2476(9600, 2192), 4);
    add_background_object(create_jcsub9_2479(9600, 2256), 4);
    add_background_object(create_jcsub9_2479(9600, 2320), 4);
    add_background_object(create_jcsub2_2477(9600, 2384), 4);
    add_background_object(create_jcsub1_2476(9728, 2192), 4);
    add_background_object(create_jcsub9_2479(9728, 2256), 4);
    add_background_object(create_jcsub9_2479(9728, 2320), 4);
    add_background_object(create_jcsub2_2477(9728, 2384), 4);
    add_background_object(create_jcsub1_2476(10240, 2192), 4);
    add_background_object(create_jcsub9_2479(10240, 2256), 4);
    add_background_object(create_jcsub9_2479(10240, 2320), 4);
    add_background_object(create_jcsub2_2477(10240, 2384), 4);
    add_background_object(create_jcsub9_2479(13936, 2352), 4);
    add_background_object(create_jcsub1_2476(13936, 2288), 4);
    add_background_object(create_jcsub9_2479(13936, 2416), 4);
    add_background_object(create_jcsub9_2479(14064, 2352), 4);
    add_background_object(create_jcsub1_2476(14064, 2288), 4);
    add_background_object(create_jcsub9_2479(14064, 2416), 4);
    add_background_object(create_jcsub2_2477(13936, 2480), 4);
    add_background_object(create_jcsub2_2477(14064, 2480), 4);
    add_background_object(create_jcsub9_2479(14320, 2352), 4);
    add_background_object(create_jcsub1_2476(14320, 2288), 4);
    add_background_object(create_jcsub9_2479(14320, 2416), 4);
    add_background_object(create_jcsub2_2477(14320, 2480), 4);
    add_background_object(create_jcsub8_2482(14448, 2288), 4);
    add_background_object(create_jcsub11_2483(14448, 2352), 4);
    add_background_object(create_jcsub11_2483(14448, 2416), 4);
    add_background_object(create_jcsub13_2494(14448, 2480), 4);
    add_background_object(create_jcsub1_2476(10752, 2128), 4);
    add_background_object(create_jcsub9_2479(10752, 2192), 4);
    add_background_object(create_jcsub1_2476(10880, 2128), 4);
    add_background_object(create_jcsub9_2479(10880, 2192), 4);
    add_background_object(create_jcsub9_2479(10752, 2256), 4);
    add_background_object(create_jcsub9_2479(10880, 2256), 4);
    add_background_object(create_jcsub9_2479(10752, 2320), 4);
    add_background_object(create_jcsub9_2479(10880, 2320), 4);
    add_background_object(create_jcsub9_2479(10752, 2384), 4);
    add_background_object(create_jcsub9_2479(10880, 2384), 4);
    add_background_object(create_jcsub2_2477(10752, 2448), 4);
    add_background_object(create_jcsub2_2477(10880, 2448), 4);
    add_background_object(create_jcsub1_2476(9856, 2192), 4);
    add_background_object(create_jcsub9_2479(9856, 2256), 4);
    add_background_object(create_jcsub9_2479(9856, 2320), 4);
    add_background_object(create_jcsub2_2477(9856, 2384), 4);
    add_background_object(create_jcsub1_2476(9984, 2192), 4);
    add_background_object(create_jcsub9_2479(9984, 2256), 4);
    add_background_object(create_jcsub9_2479(9984, 2320), 4);
    add_background_object(create_jcsub2_2477(9984, 2384), 4);
    add_background_object(create_jcsub1_2476(10112, 2192), 4);
    add_background_object(create_jcsub9_2479(10112, 2256), 4);
    add_background_object(create_jcsub9_2479(10112, 2320), 4);
    add_background_object(create_jcsub2_2477(10112, 2384), 4);
    add_background_object(create_jcsub9_2479(14192, 2352), 4);
    add_background_object(create_jcsub1_2476(14192, 2288), 4);
    add_background_object(create_jcsub9_2479(14192, 2416), 4);
    add_background_object(create_jcsub2_2477(14192, 2480), 4);
    add_background_object(create_jcsub21_2495(11776, 2128), 4);
    add_object(create_levelhovercraftlight_2451(9024, 2145), 4);
    add_object(create_enemybullfrag_2417(11967, 2064), 4);
    add_object(create_enemybullfragmask_2419(11972, 2000), 4);
    add_object(create_yellowspringright_435(12528, 2160), 4);
    add_object(create_yellowspringright_435(12528, 2128), 4);
    add_object(create_laddertop_357(12116, 1959), 4);
    add_object(create_monitormetalshield_329(12184, 2096), 4);
    add_object(create_monitorcrate_409(12752, 1984), 4);
    add_object(create_monitorcrate_409(13064, 2072), 4);
    add_object(create_enemybullfrag_2417(12871, 2040), 4);
    add_object(create_enemybullfragmask_2419(12876, 2024), 4);
    add_object(create_monitorcrate_409(12720, 1984), 4);
    add_object(create_hazardtorpedolauncher_2496(9592, 2248), 4);
    add_object(create_hazardtorpedolauncher_2496(9720, 2248), 4);
    add_object(create_hazardtorpedolauncher_2496(9848, 2248), 4);
    add_object(create_hazardtorpedolauncher_2496(9976, 2248), 4);
    add_object(create_hazardtorpedolauncher_2496(10104, 2248), 4);
    add_object(create_hazardtorpedolauncher_2496(10232, 2248), 4);
    add_object(create_hazardtorpedolauncher_2496(10488, 2184), 4);
    add_object(create_hazardtorpedolauncher_2496(10616, 2184), 4);
    add_object(create_hazardtorpedolauncher_2496(10744, 2184), 4);
    add_object(create_hazardtorpedolauncher_2496(10872, 2184), 4);
    add_object(create_hazardtorpedolauncher_2496(11000, 2184), 4);
    add_object(create_hazardtorpedolauncher_2496(11640, 2184), 4);
    add_object(create_hazardtorpedolauncher_2496(11768, 2184), 4);
    add_object(create_hazardtorpedolauncher_2496(12072, 2184), 4);
    add_object(create_hazardtorpedolauncher_2496(12336, 1992), 4);
    add_object(create_hazardtorpedolauncher_2496(12456, 1992), 4);
    add_object(create_hazardtorpedolauncher_2496(12648, 2248), 4);
    add_object(create_hazardtorpedolauncher_2496(13800, 2344), 4);
    add_object(create_hazardtorpedolauncher_2496(13928, 2344), 4);
    add_object(create_hazardtorpedolauncher_2496(14056, 2344), 4);
    add_object(create_hazardtorpedolauncher_2496(14184, 2344), 4);
    add_object(create_monitorrings_407(13096, 2072), 4);
    add_object(create_objectpetal_302(11849, 2169), 4);
    add_background_object(create_separatormasterobjects_372(-176, -32), 5);
    add_background_object(create_separatormasterobjects2_12(-480, 152), 5);
    add_background_object(create_separatorplayerobjects_373(-176, 112), 5);
    add_background_object(create_separatorlayerchange_374(-320, -32), 5);
    add_background_object(create_separatorsprings_375(-344, 152), 5);
    add_background_object(create_separatoreffects_376(-544, -32), 5);
    add_background_object(create_separatorwater_377(-593, 352), 5);
    add_background_object(create_separatormonitors_378(-248, -32), 5);
    add_background_object(create_separatorrings_379(-312, 56), 5);
    add_background_object(create_separatorspikes_556(-216, 376), 5);
    add_background_object(create_jcsubsupportfront_2497(12224, 1952), 5);
    add_background_object(create_jcsubsupportfront_2497(12224, 2016), 5);
    add_background_object(create_jcsubsupportfront_2497(12224, 2080), 5);
    add_background_object(create_jcsub14_2492(12136, 1912), 5);
    add_background_object(create_jcsub15_2493(12200, 1912), 5);
    add_background_object(create_jcsub14_2492(12304, 2008), 5);
    add_background_object(create_jcsub15_2493(12368, 2008), 5);
    add_background_object(create_jcsub14_2492(12528, 1992), 5);
    add_background_object(create_jcsub15_2493(12592, 1992), 5);
    add_background_object(create_jcsubsupportfront_2497(12224, 2144), 5);
    add_background_object(create_jcsubsupportfront_2497(12224, 2208), 5);
    add_background_object(create_jcsubsupportfront_2497(12056, 1952), 5);
    add_background_object(create_jcsubsupportfront_2497(12056, 2016), 5);
    add_background_object(create_jcsubsupportfront_2497(12056, 2080), 5);
    add_background_object(create_jcsubsupportfront_2497(12056, 2144), 5);
    add_background_object(create_jcsubsupportfront_2497(12056, 2208), 5);
    add_background_object(create_jcsub14_2492(12872, 1680), 5);
    add_background_object(create_jcsub15_2493(12936, 1680), 5);
    add_background_object(create_jcsub14_2492(13000, 1680), 5);
    add_background_object(create_jcsub15_2493(13064, 1680), 5);
    add_background_object(create_jcsubtanker1_2484(12008, 2272), 5);
    add_background_object(create_jcsubtanker2_2486(12072, 2272), 5);
    add_background_object(create_jcsubtanker1_2484(12176, 2272), 5);
    add_background_object(create_jcsubtanker2_2486(12240, 2272), 5);
    add_background_object(create_jcsubsupportfront_2497(12744, 2032), 5);
    add_background_object(create_jcsubsupportfront_2497(12744, 2096), 5);
    add_background_object(create_jcsubsupportfront_2497(12744, 2160), 5);
    add_background_object(create_jcsubsupportfront_2497(12744, 2224), 5);
    add_background_object(create_jcsubsupportfront_2497(12744, 2288), 5);
    add_background_object(create_jcsubtanker1_2484(12696, 2352), 5);
    add_background_object(create_jcsubtanker2_2486(12760, 2352), 5);
    add_background_object(create_jcsub22_2498(11776, 2128), 5);
    add_object(create_addtimebonus_380(-288, -72), 5);
    add_object(create_playerskinmillatail_381(-91, 273), 5);
    add_object(create_playerskincarolbike_382(-104, 264), 5);
    add_object(create_playerskinmilla_446(-91, 273), 5);
    add_object(create_playerskincaroltail_444(-112, 273), 5);
    add_object(create_playerskincarol_445(-108, 273), 5);
    add_object(create_playerskinspade_419(-122, 273), 5);
    add_object(create_playercharactersensor_383(-155, 188), 5);
    add_object(create_mastergroupsa_384(-168, -8), 5);
    add_object(create_mastergroupsb_385(-152, -8), 5);
    add_object(create_generalanglechanger75_386(-168, 48), 5);
    add_object(create_playermovementvalues_245(-168, 136), 5);
    add_object(create_playeractionvaluesa_387(-144, 136), 5);
    add_object(create_playeractionvaluesb_388(-144, 144), 5);
    add_object(create_playerothers_123(-120, 136), 5);
    add_object(create_playerinput_19(-440, 176), 5);
    add_object(create_player_389(-123, 213), 5);
    add_object(create_playersensorleft_390(-116, 172), 5);
    add_object(create_playersensorleftbig_391(-107, 173), 5);
    add_object(create_playersensorright_392(-92, 172), 5);
    add_object(create_playersensorrightbig_393(-83, 173), 5);
    add_object(create_playersensortop_394(-116, 188), 5);
    add_object(create_playersensortopbig_395(-107, 189), 5);
    add_object(create_playersensorbottom_396(-92, 188), 5);
    add_object(create_playersensorbottombig_397(-83, 189), 5);
    add_object(create_playersensorslopes_398(-67, 173), 5);
    add_object(create_playersensorplatform_399(-67, 189), 5);
    add_object(create_playersensorleftangle_400(-159, 241), 5);
    add_object(create_playersensorrightangle_401(-151, 241), 5);
    add_object(create_playersensorleftedge_402(-159, 209), 5);
    add_object(create_playersensorrightedge_403(-151, 209), 5);
    add_object(create_layerchangeswitch_404(-312, -8), 5);
    add_object(create_layerchangeto0_405(-296, -8), 5);
    add_object(create_layerchangeto1_406(-280, -8), 5);
    add_object(create_objectpetal_302(-295, 81), 5);
    add_object(create_monitorbroken_330(-248, -16), 5);
    add_object(create_monitorrings_407(-248, 16), 5);
    add_object(create_monitorcrystals_324(-248, 48), 5);
    add_object(create_monitorfireshield_328(-248, 80), 5);
    add_object(create_monitormetalshield_329(-248, 112), 5);
    add_object(create_monitorwatershield_327(-248, 144), 5);
    add_object(create_monitorinvincibility_408(-248, 176), 5);
    add_object(create_monitoricon_331(-248, -13), 5);
    add_object(create_monitorcrate_409(-248, 208), 5);
    add_object(create_monitor1up_410(-248, 240), 5);
    add_object(create_monitorbomb_563(-248, 272), 5);
    add_object(create_effectsdust01_332(-383, 25), 5);
    add_object(create_hazardspikesup_950(-208, 392), 5);
    add_object(create_hazardspikesdown_2452(-168, 392), 5);
    add_object(create_hazardspikesleft_2453(-128, 392), 5);
    add_object(create_hazardspikesright_2454(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_scorevalues_425(-376, -72), 5);
    add_object(create_obj1up_337(-528, 45), 5);
    add_object(create_obj200pts_338(-512, 45), 5);
    add_object(create_obj500pts_426(-488, 45), 5);
    add_object(create_ringsparkle_139(-433, 50), 5);
    add_object(create_sparkle1_300(-433, 103), 5);
    add_object(create_sparkle5_336(-433, 134), 5);
    add_object(create_sparkle2_333(-401, 103), 5);
    add_object(create_sparkle3_334(-369, 103), 5);
    add_object(create_sparkle4_335(-337, 103), 5);
    add_object(create_controllermusic_128(-192, -88), 5);
    add_object(create_stringparser_427(-72, -88), 5);
    add_object(create_bubblenumbers_429(-464, 87), 5);
    add_object(create_mastercamera_430(-136, -8), 5);
    add_object(create_masterinput_20(-464, 176), 5);
    add_object(create_masterlevel_37(-120, -8), 5);
    add_object(create_masterringloss_431(-104, -8), 5);
    add_object(create_thunderspark_339(-400, 40), 5);
    add_object(create_yellowspringupleft_432(-296, 304), 5);
    add_object(create_yellowspringupright_433(-296, 264), 5);
    add_object(create_yellowspringup_434(-296, 184), 5);
    add_object(create_yellowspringright_435(-280, 224), 5);
    add_object(create_yellowspringleft_436(-296, 224), 5);
    add_object(create_yellowspringdown_437(-296, 200), 5);
    add_object(create_redspringupright_438(-336, 264), 5);
    add_object(create_redspringupleft_439(-336, 304), 5);
    add_object(create_redspringup_440(-336, 184), 5);
    add_object(create_redspringright_441(-320, 224), 5);
    add_object(create_redspringleft_442(-336, 224), 5);
    add_object(create_redspringdown_443(-336, 200), 5);
    add_object(create_monitorwoodshield_325(-216, 112), 5);
    add_object(create_monitorearthshield_326(-216, 144), 5);
    add_object(create_inputsp1_21(-416, 176), 5);
    add_object(create_globalinputdata_22(-392, 176), 5);
    add_object(create_objectbike_322(-216, 320), 5);
    add_object(create_playerreflect_447(-72, 224), 5);
    add_object(create_playerdig_448(-56, 234), 5);
    add_object(create_playerskintorquearm_449(-96, 224), 5);
    add_object(create_playerskintorque_450(-68, 273), 5);
    add_object(create_bubblepatch_806(-528, 303), 5);
    add_object(create_mediumbubble_769(-518, 314), 5);
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_mapdata_30(-432, 232), 5);
    add_object(create_recorddata_34(-432, 248), 5);
    add_object(create_guiair_759(-16, 96), 6);
    add_object(create_guiscoretimerings_451(8, 8), 6);
    add_object(create_guikeystone_455(160, -40), 6);
    add_object(create_guienergy_124(16, 10), 6);
    add_object(create_guitimermilli_360(309, 19), 6);
    add_object(create_guitimermilli2_361(299, 19), 6);
    add_object(create_guitimers_362(283, 19), 6);
    add_object(create_guitimers2_363(273, 19), 6);
    add_object(create_guitimerm_364(257, 19), 6);
    add_object(create_guitimerm2_365(247, 19), 6);
    add_object(create_guirings_122(8, 19), 6);
    add_object(create_guiicon_452(135, 12), 6);
    add_object(create_guipause_453(0, 101), 6);
    add_object(create_guilives_454(164, 19), 6);
    add_object(create_guikeystone_455(144, -40), 6);
    add_object(create_guikeystone_455(128, -40), 6);
    add_object(create_guikeystone_455(112, -40), 6);
    add_object(create_guikeystone_455(96, -40), 6);
    add_object(create_crystal_456(-53, 141), 6);
    add_object(create_guipowercard_457(91, 7), 6);
    add_object(create_guipowercard_457(75, 7), 6);
    add_object(create_guipowercard_457(59, 7), 6);
    add_object(create_guipowercard_457(43, 7), 6);
    add_object(create_guipowercard_457(27, 7), 6);
    add_object(create_guicrystal_121(206, 19), 6);
    add_object(create_guitimer_564(216, 0), 6);
    add_object(create_timebonustotal_460(-256, -72), 7);
    add_object(create_levelcardfade_461(0, 0), 7);
    add_object(create_levelcardfade2_24(-328, -336), 7);
    add_object(create_levelcardgameover_462(0, 256), 7);
    add_object(create_guilifebasemeter_125(0, 0), 7);
    add_object(create_levelcardintro1_464(16, -240), 7);
    add_object(create_levelcardintro3_760(0, 248), 7);
    add_object(create_levelcardintro2_761(0, 248), 7);
    loop_itm_running = false;
    loop_itm_index = 0;
    loop_sound_kick1_running = false;
    loop_sound_kick1_index = 0;
    loop_sound_kick0_running = false;
    loop_sound_kick0_index = 0;
    loop_sound_kick2_running = false;
    loop_sound_kick2_index = 0;
    loop_sound_idle3_running = false;
    loop_sound_idle3_index = 0;
    loop_sound_idle5_running = false;
    loop_sound_idle5_index = 0;
    loop_sound_idle7_running = false;
    loop_sound_idle7_index = 0;
    loop_spawn_rings_running = false;
    loop_spawn_rings_index = 0;
    loop_player01slopesup_running = false;
    loop_player01slopesup_index = 0;
    loop_iterate_pushables_running = false;
    loop_iterate_pushables_index = 0;
    loop_death_running = false;
    loop_death_index = 0;
    loop_player01slopesdown_running = false;
    loop_player01slopesdown_index = 0;
    loop_player01detectsensoredges_running = false;
    loop_player01detectsensoredges_index = 0;
    loop_gui_shiftdown_running = false;
    loop_gui_shiftdown_index = 0;
    loop_rings_ringloss_step_running = false;
    loop_rings_ringloss_step_index = 0;
    loop_return_running = false;
    loop_return_index = 0;
    loop_restart_running = false;
    loop_restart_index = 0;
    loop_update_layer_running = false;
    loop_update_layer_index = 0;
    loop_process_call_unlock_music_running = false;
    loop_process_call_unlock_music_index = 0;
    loop_player01detectsensorbottom_running = false;
    loop_player01detectsensorbottom_index = 0;
    loop_monitorsunstuckfromceiling_running = false;
    loop_monitorsunstuckfromceiling_index = 0;
    loop_spawndebris_running = false;
    loop_spawndebris_index = 0;
    loop_process_call_fadeout_music_running = false;
    loop_process_call_fadeout_music_index = 0;
    loop_sound_help_running = false;
    loop_sound_help_index = 0;
    loop_process_call_reset_music_running = false;
    loop_process_call_reset_music_index = 0;
    loop_petal_loss_running = false;
    loop_petal_loss_index = 0;
    loop_player01_interruption_action_running = false;
    loop_player01_interruption_action_index = 0;
    loop_dig_crystals_running = false;
    loop_dig_crystals_index = 0;
    loop_collect_item_running = false;
    loop_collect_item_index = 0;
    loop_iterate_query_me_stop_running = false;
    loop_iterate_query_me_stop_index = 0;
    loop_record_inputs_running = false;
    loop_record_inputs_index = 0;
    loop_reposition_skin_running = false;
    loop_reposition_skin_index = 0;
    loop_sound_explode8_running = false;
    loop_sound_explode8_index = 0;
    loop_bs_running = false;
    loop_bs_index = 0;
    loop_sound_pounce_running = false;
    loop_sound_pounce_index = 0;
    loop_process_call_fadein_music_running = false;
    loop_process_call_fadein_music_index = 0;
    loop_process_call_lock_music_running = false;
    loop_process_call_lock_music_index = 0;
    loop_process_call_unqueue_music_running = false;
    loop_process_call_unqueue_music_index = 0;
    loop_sound_hurt2_running = false;
    loop_sound_hurt2_index = 0;
    loop_sound_cyclone0_running = false;
    loop_sound_cyclone0_index = 0;
    loop_sound_hurt3_running = false;
    loop_sound_hurt3_index = 0;
    loop_player01detectsensortop_running = false;
    loop_player01detectsensortop_index = 0;
    loop_import_deadzones_running = false;
    loop_import_deadzones_index = 0;
    loop_sound_hurt1_running = false;
    loop_sound_hurt1_index = 0;
    loop_process_call_play_music_running = false;
    loop_process_call_play_music_index = 0;
    loop_stop_voices_running = false;
    loop_stop_voices_index = 0;
    loop_sound_stoppush_running = false;
    loop_sound_stoppush_index = 0;
    loop_sound_jump_running = false;
    loop_sound_jump_index = 0;
    loop_bbls_running = false;
    loop_bbls_index = 0;
    loop_cp_running = false;
    loop_cp_index = 0;
    loop_player01detectcharactersensor_running = false;
    loop_player01detectcharactersensor_index = 0;
    loop_player01detectangle_running = false;
    loop_player01detectangle_index = 0;
    loop_sound_explode3_running = false;
    loop_sound_explode3_index = 0;
    loop_sound_explode2_running = false;
    loop_sound_explode2_index = 0;
    loop_sound_explode1_running = false;
    loop_sound_explode1_index = 0;
    loop_sound_explode0_running = false;
    loop_sound_explode0_index = 0;
    loop_sound_explode7_running = false;
    loop_sound_explode7_index = 0;
    loop_sound_explode6_running = false;
    loop_sound_explode6_index = 0;
    loop_sound_explode5_running = false;
    loop_sound_explode5_index = 0;
    loop_sound_explode4_running = false;
    loop_sound_explode4_index = 0;
    loop_sound_die_running = false;
    loop_sound_die_index = 0;
    loop_player01allsensors_running = false;
    loop_player01allsensors_index = 0;
    loop_sound_cantmoveit_running = false;
    loop_sound_cantmoveit_index = 0;
    loop_create_links_1_running = false;
    loop_create_links_1_index = 0;
    loop_collapse_running = false;
    loop_collapse_index = 0;
    loop_next_act_running = false;
    loop_next_act_index = 0;
    loop_player01detectsensormain_running = false;
    loop_player01detectsensormain_index = 0;
    loop_sound_attack1_running = false;
    loop_sound_attack1_index = 0;
    loop_sound_attack0_running = false;
    loop_sound_attack0_index = 0;
    loop_sound_attack3_running = false;
    loop_sound_attack3_index = 0;
    loop_sound_attack2_running = false;
    loop_sound_attack2_index = 0;
    loop_link_objects_1_running = false;
    loop_link_objects_1_index = 0;
    loop_rings_ringloss_running = false;
    loop_rings_ringloss_index = 0;
    loop_play_music_0_running = false;
    loop_play_music_0_index = 0;
    loop_play_music_1_running = false;
    loop_play_music_1_index = 0;
    loop_play_music_2_running = false;
    loop_play_music_2_index = 0;
    loop_play_music_3_running = false;
    loop_play_music_3_index = 0;
    loop_play_music_4_running = false;
    loop_play_music_4_index = 0;
    loop_play_music_5_running = false;
    loop_play_music_5_index = 0;
    loop_play_music_6_running = false;
    loop_play_music_6_index = 0;
    loop_play_music_7_running = false;
    loop_play_music_7_index = 0;
    loop_play_music_8_running = false;
    loop_play_music_8_index = 0;
    loop_process_call_me_running = false;
    loop_process_call_me_index = 0;
    loop_player01detectsensorangles_running = false;
    loop_player01detectsensorangles_index = 0;
    loop_iterate_query_me_reset_running = false;
    loop_iterate_query_me_reset_index = 0;
    loop_sound_hurt0_running = false;
    loop_sound_hurt0_index = 0;
    loop_player01_interruption_control_running = false;
    loop_player01_interruption_control_index = 0;
    loop_color_dots_running = false;
    loop_color_dots_index = 0;
    loop_player01up_running = false;
    loop_player01up_index = 0;
    loop_process_call_resume_music_running = false;
    loop_process_call_resume_music_index = 0;
    loop_sound_dig2_running = false;
    loop_sound_dig2_index = 0;
    loop_sound_dig3_running = false;
    loop_sound_dig3_index = 0;
    loop_sound_dig0_running = false;
    loop_sound_dig0_index = 0;
    loop_sound_dig1_running = false;
    loop_sound_dig1_index = 0;
    loop_spawn_crystals_running = false;
    loop_spawn_crystals_index = 0;
    loop_player01detectsensorslope_running = false;
    loop_player01detectsensorslope_index = 0;
    loop_start_player_running = false;
    loop_start_player_index = 0;
    loop_cutscene_start_running = false;
    loop_cutscene_start_index = 0;
    loop_player01down_running = false;
    loop_player01down_index = 0;
    loop_camera_mode2_running = false;
    loop_camera_mode2_index = 0;
    loop_camera_mode1_running = false;
    loop_camera_mode1_index = 0;
    loop_camera_mode0_running = false;
    loop_camera_mode0_index = 0;
    loop_toolsanglecalculator_running = false;
    loop_toolsanglecalculator_index = 0;
    loop_monitorsunstuckfromground_running = false;
    loop_monitorsunstuckfromground_index = 0;
    loop_player01detectsensorleft_running = false;
    loop_player01detectsensorleft_index = 0;
    loop_action_land_running = false;
    loop_action_land_index = 0;
    loop_check_death_running = false;
    loop_check_death_index = 0;
    loop_plaftorms_updateposition_running = false;
    loop_plaftorms_updateposition_index = 0;
    loop_shift_query_me_running = false;
    loop_shift_query_me_index = 0;
    loop_extralife_floor_running = false;
    loop_extralife_floor_index = 0;
    loop_stop_player_running = false;
    loop_stop_player_index = 0;
    loop_gui_shiftup_running = false;
    loop_gui_shiftup_index = 0;
    loop_player01wallcollision_running = false;
    loop_player01wallcollision_index = 0;
    loop_rings_ringloss_creation_running = false;
    loop_rings_ringloss_creation_index = 0;
    loop_sound_uppercut3_running = false;
    loop_sound_uppercut3_index = 0;
    loop_sound_uppercut1_running = false;
    loop_sound_uppercut1_index = 0;
    loop_sound_uppercut0_running = false;
    loop_sound_uppercut0_index = 0;
    loop_sound_go0_running = false;
    loop_sound_go0_index = 0;
    loop_weapon_running = false;
    loop_weapon_index = 0;
    loop_player01detectsensorright_running = false;
    loop_player01detectsensorright_index = 0;
    loop_process_call_stop_music_running = false;
    loop_process_call_stop_music_index = 0;
    static DynamicLoops frame_loops;
    loops = &frame_loops;
    static bool loops_initialized = false;
    if (!loops_initialized) {
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_41, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_41, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_41, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_41, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_41, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_41, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_41, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_41, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_41, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_41, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_41, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_41, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_41, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_41, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_41, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_41, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_41, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_41, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_41, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_41, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_41, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_41, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_41, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_41, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_41, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_41, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_41, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_41, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_41, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_41, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_41, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_41, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_41, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_41, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_41, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_41, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_41, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_41, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_41, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_41, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_41, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_41, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_41, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_41, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_41, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_41, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_41, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_41, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_41, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_41, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_41, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_41, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_41, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_41, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_1510_16 = loop_count;
    not_always_789_13 = loop_count;
    not_always_1406_41 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_1388_13 = loop_count;
    not_always_1696_16 = loop_count;
    not_always_44_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1811_41 = loop_count;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    not_always_1405_41 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    not_always_1407_41 = loop_count;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_449_13 = loop_count;
    not_always_97_0 = loop_count;
    not_always_1449_13 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    not_always_1400_41 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    not_always_64_0 = loop_count;
    not_always_68_13 = loop_count;
    not_always_1149_14 = loop_count;
    not_always_1037_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_1822_41 = loop_count;
    not_always_585_13 = loop_count;
    not_always_1404_41 = loop_count;
    once_condition_36_13 = false;
    not_always_1482_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_100_0 = loop_count;
    not_always_1513_16 = loop_count;
    not_always_43_13 = loop_count;
    not_always_1420_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_neera_neera_hit_1 = false;
    not_always_121_0 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1399_41 = loop_count;
    not_always_1033_13 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    not_always_1812_41 = loop_count;
    not_always_1505_16 = loop_count;
    not_always_1397_41 = loop_count;
    not_always_600_13 = loop_count;
    not_always_1751_40 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_814_13 = loop_count;
    not_always_1809_41 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_main_1 = false;
    not_always_1832_16 = loop_count;
    not_always_1425_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    not_always_1402_41 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_1512_16 = loop_count;
    not_always_130_0 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    not_always_308_13 = loop_count;
    group_sound_events_milla_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_level_specific_methods_bosses_boss_neera_enter_arena_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_46_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    group_main_engine_level_specific_methods_bosses_boss_neera_on_top_of_hovercop_1 = true;
    not_always_1810_41 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    not_always_1398_41 = loop_count;
    not_always_45_13 = loop_count;
    not_always_53_13 = loop_count;
    not_always_98_0 = loop_count;
    once_condition_63_0 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    not_always_1695_16 = loop_count;
    not_always_1447_13 = loop_count;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_52_13 = loop_count;
    not_always_1755_40 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_tow_player_1 = false;
    not_always_1036_13 = loop_count;
    not_always_1035_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_422_13 = loop_count;
    once_condition_1765_41 = false;
    not_always_1504_16 = loop_count;
    not_always_1295_13 = loop_count;
    not_always_522_13 = loop_count;
    once_condition_64_13 = false;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1148_14 = loop_count;
    not_always_1396_41 = loop_count;
    once_condition_57_14 = false;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    once_condition_38_13 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    not_always_1034_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_neera_ice_floors_1 = false;
    not_always_558_13 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    once_condition_1702_41 = false;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    once_condition_1795_41 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    not_always_1509_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    not_always_1502_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_57_13 = loop_count;
    not_always_1511_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_450_13 = loop_count;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    once_condition_1727_40 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    not_always_1831_16 = loop_count;
    once_condition_138_0 = false;
    not_always_1698_16 = loop_count;
    group_mac_controls_1 = false;
    not_always_101_0 = loop_count;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    once_condition_1863_41 = false;
    not_always_1531_39 = loop_count;
    not_always_1506_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_1697_16 = loop_count;
    not_always_234_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_neera_attack_selection_1 = false;
    not_always_140_0 = loop_count;
    not_always_553_13 = loop_count;
    not_always_813_13 = loop_count;
    group_main_engine_level_specific_methods_submarine_section_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_neera_neera_escapes_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = false;
    group_pause_1 = false;
    not_always_41_13 = loop_count;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_1395_41 = loop_count;
    not_always_540_13 = loop_count;
    not_always_1516_16 = loop_count;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    not_always_1421_13 = loop_count;
    not_always_1515_16 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_70_13 = loop_count;
    not_always_1403_41 = loop_count;
    not_always_172_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    once_condition_63_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_174_8 = loop_count;
    not_always_99_0 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    once_condition_66_13 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    not_always_69_13 = loop_count;
    not_always_1503_16 = loop_count;
    not_always_1039_13 = loop_count;
    not_always_95_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    once_condition_59_14 = false;
    not_always_809_13 = loop_count;
    once_condition_48_13 = false;
    not_always_103_0 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
    not_always_96_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    group_sound_events_carol_1 = false;
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1 = false;
    every_819_13 = 0.0f;
    once_condition_58_14 = false;
    group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_744_13 = loop_count;
    not_always_1038_13 = loop_count;
    not_always_236_13 = loop_count;
    not_always_1401_41 = loop_count;
    group_debug_mode_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    once_condition_50_13 = false;
    once_condition_37_13 = false;
    once_condition_1872_41 = false;
    not_always_1514_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_554_13 = loop_count;
    once_condition_35_13 = false;
    not_always_1507_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::loop_spawndebris_42()
{
    event_func_1176();
    event_func_1177();
    event_func_1178();
    event_func_9423();
    event_func_9426();
    event_func_9425();
    event_func_9427();
}
void Frames::loop_play_music_5_42()
{
    event_func_9815();
}
void Frames::loop_wrapper_sound_hurt1_42(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_42(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_42(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_42(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_42(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_42(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_process_call_resume_music_42(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_sound_idle7_42(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_42(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_16();
}
void Frames::loop_wrapper_sound_dig2_42(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_42(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_42(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_42(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_sound_explode5_42(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_42(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_process_call_unlock_music_42(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_42(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_sound_explode8_42(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_process_call_reset_music_42(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_42(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_42(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_42(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_explode0_42(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_42(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_42(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_camera_mode1_42(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_16();
}
void Frames::loop_wrapper_camera_mode0_42(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_16();
}
void Frames::loop_wrapper_process_call_play_music_42(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_42(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_13();
}
void Frames::loop_wrapper_sound_attack1_42(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_42(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_42(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_42(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_play_music_8_42(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_uppercut3_42(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
