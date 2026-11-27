#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_5080()
{
    // event 1685_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_hitting_1)) goto event_1685_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1685_23_end;
        if (not_always_1685_23 > loop_count) {
            not_always_1685_23 = loop_count + 2;
            goto event_1685_23_end;
        }
        not_always_1685_23 = loop_count + 2;
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(5);
            ((Active*)*it)->flash((80) / 1000.0);
        }
    }
    event_1685_23_end: ;
}
void Frames::event_func_5081()
{
    // event 1686_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_hitting_1)) goto event_1686_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1686_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0, 0);
            ((Active*)*it)->restore_animation();
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->start_animation();
        }
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->advance_movement(+1);
            ((Active*)*it)->force_animation(8);
        }
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        media.stop_sample(SOUND_COMMON_STRIKE_23);
        media.play_id(SOUND_COMMON_BOSSHIT_47, -1, 1);
            group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1 = false;
    
            group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1 = false;
    
            group_main_engine_level_specific_methods_bosses_snake_boss_snake_hitting_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1) {
            group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1 = true;
        }
        ((Counter*)get_instance(guibosshealth_1089_instances))->subtract(1);
        ((Active*)get_instance(bossbouncemode_1082_instances))->get_movement()->stop(false);
    }
    event_1686_23_end: ;
}
void Frames::event_func_5082()
{
    // event 1687_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1687_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(21, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(22, ((Active*)*it)->get_y());
        }
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosssnakehitbox_999_instances, it.current_index));
            if (parent == NULL) goto pos_end_1687_23_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1687_23_0: ;
        }
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
    }
    event_1687_23_end: ;
}
void Frames::event_func_5083()
{
    // event 1688_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1688_23_end;
        {
            loop_movesnake_running = true;
            int times = int(bosssnakebody_995_instances.size()+1);
            loop_movesnake_index = 0;
            while (loop_movesnake_index < times) {
                loop_movesnake_23();
                if (!loop_movesnake_running) break;
                loop_movesnake_index++;
            }
        }
    }
    event_1688_23_end: ;
}
void Frames::event_func_5084()
{
    // event 1690_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1690_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1690_23_end;
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1690_23_end: ;
}
void Frames::event_func_5085()
{
    // event 1691_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1691_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1691_23_end;
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1691_23_end: ;
}
void Frames::event_func_5086()
{
    // event 1692_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1692_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (60))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1692_23_end;
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_max(get_min(((Active*)*it)->get_x(), ((Active*)get_instance(cameralimitbossright_422_instances, it.current_index, default_active_instance))->get_x()), ((Active*)get_instance(cameralimitbossleft_421_instances, it.current_index, default_active_instance))->get_x()));
        }
    }
    event_1692_23_end: ;
}
void Frames::event_func_5087()
{
    // event 1693_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1693_23_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1693_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (60))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1693_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(get_abs(((Active*)*it)->get_frame()-1));
        }
    }
    event_1693_23_end: ;
}
void Frames::event_func_5088()
{
    // event 1694_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1694_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) >= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (60))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1694_23_end;
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 0);
            ((Active*)*it)->alterables->values.set(24, 0);
        }
    }
    event_1694_23_end: ;
}
void Frames::event_func_5089()
{
    // event 1695_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1695_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (60))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1695_23_end;
        if (!((((Counter*)get_instance(guibosshealth_1089_instances))->value) > (0))) goto event_1695_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1695_23_end: ;
}
void Frames::event_func_5090()
{
    // event 1696_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1696_23_end;
        if (!((global_values->get(3)%math_helper%6) == (5))) goto event_1696_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (60))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(7))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1696_23_end;
        if (!((((Counter*)get_instance(guibosshealth_1089_instances))->value) > (0))) goto event_1696_23_end;
        media.play_id(SOUND_SERPENT_MOVE_2_35, -1, 1);
    }
    event_1696_23_end: ;
}
void Frames::event_func_5091()
{
    // event 1697_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1697_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (60))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(7))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1697_23_end;
        if (!((((Counter*)get_instance(guibosshealth_1089_instances))->value) > (0))) goto event_1697_23_end;
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 0);
            ((Active*)*it)->alterables->values.set(24, -8);
        }
    }
    event_1697_23_end: ;
}
void Frames::event_func_5092()
{
    // event 1698_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1698_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(cameralimitbosstop_423_instances, default_active_instance))->get_y()-100))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1698_23_end;
        if (!((((Counter*)get_instance(guibosshealth_1089_instances))->value) > (0))) goto event_1698_23_end;
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, -340);
            ((Active*)*it)->alterables->values.set(10, -1);
        }
            group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_snake_boss_snake_hitting_1) {
            group_main_engine_level_specific_methods_bosses_snake_boss_snake_hitting_1 = true;
        }
        if (!group_main_engine_level_specific_methods_bosses_snake_boss_snake_boulder_fall_1) {
            group_main_engine_level_specific_methods_bosses_snake_boss_snake_boulder_fall_1 = true;
        }
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
        }
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->alterables->values.set(4, 0);
        }
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(6);
            ((Active*)*it)->alterables->values.set(0, 1);
        }
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_single(bosssnakehitbox_999_instances, it.current_index, default_active_instance))->get_y());
        }
#ifdef CHOWDREN_WAIT
        clickteam_movement_controller_56(0);
#endif
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->advance_movement(-1);
            ((Active*)*it)->set_direction(8);
        }
    }
    event_1698_23_end: ;
}
void Frames::event_func_5093()
{
    // event 1699_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1699_23_end;
        if (!((((Counter*)get_instance(guibosshealth_1089_instances))->value) == (0))) goto event_1699_23_end;
        if (not_always_1699_23 > loop_count) {
            not_always_1699_23 = loop_count + 2;
            goto event_1699_23_end;
        }
        not_always_1699_23 = loop_count + 2;
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_83);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 6);
            group_main_engine_level_specific_methods_play_bgm_1 = false;
    
            group_pause_1 = false;
    
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
    }
    event_1699_23_end: ;
}
void Frames::event_func_5094()
{
    // event 1700_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1700_23_end;
        if (!((((Counter*)get_instance(guibosshealth_1089_instances))->value) == (0))) goto event_1700_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) < (60))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1700_23_end;
        effectsexplosion06_312_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion06_312(0, 0), 2);
            effectsexplosion06_312_instances.add_back();
        }
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, randrange(8));
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1700_23_1_end;
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
        dynamic_1700_23_1_end: ;
    }
    event_1700_23_end: ;
}
void Frames::event_func_5095()
{
    // event 1701_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1701_23_end;
        effectsexplosion06_312_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
        }
        if (!effectsexplosion06_312_instances.has_selection()) goto event_1701_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) < (4))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1701_23_end;
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, -1);
            ((Active*)*it)->set_x(((Active*)get_instance(bossserpentinehead_948_instances, it.current_index, default_active_instance))->get_x()-20+randrange(41));
            ((Active*)*it)->set_y(((Active*)get_instance(bossserpentinehead_948_instances, it.current_index, default_active_instance))->get_y()-20+randrange(41));
            ((Active*)*it)->force_speed(100);
        }
    }
    event_1701_23_end: ;
}
void Frames::event_func_5096()
{
    // event 1702_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1702_23_end;
        effectsexplosion06_312_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0))) { it.deselect(); continue; }
        }
        if (!effectsexplosion06_312_instances.has_selection()) goto event_1702_23_end;
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (((Active*)get_single(effectsexplosion06_312_instances, default_active_instance))->alterables->values.get(8)))) { it.deselect(); continue; }
        }
        if (!bosssnakebody_995_instances.has_selection()) goto event_1702_23_end;
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, -1);
            ((Active*)*it)->set_x(((Active*)get_single(bosssnakebody_995_instances, it.current_index, default_active_instance))->get_x()-20+randrange(41));
            ((Active*)*it)->set_y(((Active*)get_single(bosssnakebody_995_instances, it.current_index, default_active_instance))->get_y()-20+randrange(41));
            ((Active*)*it)->force_speed(100);
        }
    }
    event_1702_23_end: ;
}
void Frames::event_func_5097()
{
    // event 1703_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1703_23_end;
        if (!((((Counter*)get_instance(guibosshealth_1089_instances))->value) == (0))) goto event_1703_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (60))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1703_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_1703_23_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 2);
    }
    event_1703_23_end: ;
}
void Frames::event_func_5098()
{
    // event 1704_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1704_23_end;
        if (!((((Counter*)get_instance(guibosshealth_1089_instances))->value) == (0))) goto event_1704_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (60))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1704_23_end;
        media.play_id(SOUND_COMMON_BOSSEXPLODE_76, -1, 1);
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 61);
        }
            group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = false;
    
        if (!group_main_engine_interface_and_post_processing_methods_event_camera_system_1) {
            group_main_engine_interface_and_post_processing_methods_event_camera_system_1 = true;
        }
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 1);
        }
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_direction(8);
        }
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(12);
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        bosstunnel_1083_instances.clear_selection();
        for (ObjectIterator it(bosstunnel_1083_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(bossserpentinehead_948_instances, it.current_index, default_active_instance))->get_x());
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+10, 10));
        levelcardfade_461_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade_461(0, 0), 7);
            levelcardfade_461_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
        }
        bosstunnel3_1084_instances.clear_selection();
        for (ObjectIterator it(bosstunnel3_1084_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_single(bossserpentinehead_948_instances, it.current_index, default_active_instance))->get_y());
        }
        bossfireball_967_instances.clear_selection();
        for (ObjectIterator it(bossfireball_967_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(2, 0);
    }
    event_1704_23_end: ;
}
void Frames::event_func_5099()
{
    // event 1705_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1705_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (60))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1705_23_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_min(((Active*)*it)->blend_color.get_semi_transparency()+2, 128));
        }
    }
    event_1705_23_end: ;
}
void Frames::event_func_5100()
{
    // event 1706_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1706_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (60))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1706_23_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1706_23_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->set_y(-99);
        }
    }
    event_1706_23_end: ;
}
void Frames::event_func_5101()
{
    // event 1707_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1707_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (1))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1707_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1707_23_end: ;
}
void Frames::event_func_5102()
{
    // event 1708_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1708_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) <= (2))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1708_23_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, ((Active*)get_instance(bossserpentinehead_948_instances, default_active_instance))->get_x());
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, ((Active*)get_instance(bossserpentinehead_948_instances, default_active_instance))->get_y());
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-12, 0);
        }
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(get_abs(((Active*)get_single(bosssnakehitbox_999_instances, it.current_index, default_active_instance))->alterables->values.get(24))*4.1);
        }
    }
    event_1708_23_end: ;
}
void Frames::event_func_5103()
{
    // event 1709_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1709_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1709_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) <= (1))) goto event_1709_23_end;
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 0);
            ((Active*)*it)->alterables->values.set(24, -12);
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
    event_1709_23_end: ;
}
void Frames::event_func_5104()
{
    // event 1710_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1710_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1710_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (2))) goto event_1710_23_end;
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 14);
            ((Active*)*it)->alterables->values.set(24, 0);
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
    event_1710_23_end: ;
}
void Frames::event_func_5105()
{
    // event 1711_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1711_23_end;
        if (!((global_values->get(3)%math_helper%6) == (1))) goto event_1711_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1711_23_end;
        media.play_id(SOUND_COMMON_SHATTER_13, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+3, 3));
    }
    event_1711_23_end: ;
}
void Frames::event_func_5106()
{
    // event 1713_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1713_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1713_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) <= (1))) goto event_1713_23_end;
        bosstunnel_1083_instances.clear_selection();
        for (ObjectIterator it(bosstunnel_1083_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_single(bosssnakehitbox_999_instances, default_active_instance))->get_y()))) { it.deselect(); continue; }
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!bosstunnel_1083_instances.has_selection()) goto event_1713_23_end;
        for (ObjectIterator it(bosstunnel_1083_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        breakablerockpiece_355_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(bosstunnel_1083_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerockpiece_355(parent->x + -20, parent->y + -8), parent->layer);
                breakablerockpiece_355_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerockpiece_355(parent->x + 0, parent->y + -8), parent->layer);
                breakablerockpiece_355_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerockpiece_355(parent->x + 20, parent->y + -8), parent->layer);
                breakablerockpiece_355_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerockpiece_355(parent->x + -20, parent->y + 8), parent->layer);
                breakablerockpiece_355_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerockpiece_355(parent->x + 0, parent->y + 8), parent->layer);
                breakablerockpiece_355_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerockpiece_355(parent->x + 20, parent->y + 8), parent->layer);
                breakablerockpiece_355_instances.add_back();
            }
        }
        for (ObjectIterator it(breakablerockpiece_355_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -9+randrange(19));
            ((Active*)*it)->alterables->values.set(1, -9+randrange(5));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, 0.3);
            ((Active*)*it)->set_angle(randrange(4)*90, 0);
        }
    }
    event_1713_23_end: ;
}
void Frames::event_func_5107()
{
    // event 1714_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1714_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1714_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (2))) goto event_1714_23_end;
        bosstunnel3_1084_instances.clear_selection();
        for (ObjectIterator it(bosstunnel3_1084_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_single(bosssnakehitbox_999_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!bosstunnel3_1084_instances.has_selection()) goto event_1714_23_end;
        breakablerockpiece_355_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(bosstunnel3_1084_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerockpiece_355(parent->x + -8, parent->y + -20), parent->layer);
                breakablerockpiece_355_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerockpiece_355(parent->x + -8, parent->y + 0), parent->layer);
                breakablerockpiece_355_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerockpiece_355(parent->x + -8, parent->y + 20), parent->layer);
                breakablerockpiece_355_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerockpiece_355(parent->x + 8, parent->y + -20), parent->layer);
                breakablerockpiece_355_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerockpiece_355(parent->x + 8, parent->y + 0), parent->layer);
                breakablerockpiece_355_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerockpiece_355(parent->x + 8, parent->y + 20), parent->layer);
                breakablerockpiece_355_instances.add_back();
            }
        }
        for (ObjectIterator it(breakablerockpiece_355_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 9+randrange(5));
            ((Active*)*it)->alterables->values.set(1, -9+randrange(17));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, 0.3);
            ((Active*)*it)->set_angle(randrange(4)*90, 0);
        }
        for (ObjectIterator it(bosstunnel3_1084_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1714_23_end: ;
}
void Frames::event_func_5108()
{
    // event 1715_23
    bool or_result_1715_23 = false;
    bool or_temp_result_1715_23_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto or_event_1715_23_0_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto or_event_1715_23_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1715_23_0_end;
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (1250))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto or_event_1715_23_0_end;
        or_result_1715_23 = true;
        or_temp_result_1715_23_0 = true;
    }
    or_event_1715_23_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    bosssnakehitbox_999_instances.clear_saved_selection();
    if (or_temp_result_1715_23_0) {
        playermovementvalues_245_instances.save_selection();
        bosssnakehitbox_999_instances.save_selection();
    }
    // event 1715_23
    bool or_temp_result_1715_23_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto or_event_1715_23_1_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto or_event_1715_23_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (2))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1715_23_1_end;
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (13677))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto or_event_1715_23_1_end;
        or_result_1715_23 = true;
        or_temp_result_1715_23_1 = true;
        or_event_1715_23_1_end: ;
        if (or_temp_result_1715_23_1) {
            playermovementvalues_245_instances.save_selection();
            bosssnakehitbox_999_instances.save_selection();
        }
        if (!or_result_1715_23) goto or_final_or_event_1715_23_1_end;
        bosssnakehitbox_999_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_1715_23_0 || or_temp_result_1715_23_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1715_23_0 || or_temp_result_1715_23_1) {
            bosssnakehitbox_999_instances.restore_selection();
        }
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 2);
        }
    }
    or_final_or_event_1715_23_1_end: ;
}
void Frames::event_func_5109()
{
    // event 1716_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1716_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (2))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1716_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_1716_23_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 2);
    }
    event_1716_23_end: ;
}
void Frames::event_func_5110()
{
    // event 1717_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1717_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (2))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1717_23_end;
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, get_max(((Active*)*it)->alterables->values.get(23)-0.07, 0));
        }
    }
    event_1717_23_end: ;
}
void Frames::event_func_5111()
{
    // event 1718_23
    bool or_result_1718_23 = false;
    bool or_temp_result_1718_23_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto or_event_1718_23_0_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (2))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto or_event_1718_23_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1718_23_0_end;
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (1140))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto or_event_1718_23_0_end;
        or_result_1718_23 = true;
        or_temp_result_1718_23_0 = true;
    }
    or_event_1718_23_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    bosssnakehitbox_999_instances.clear_saved_selection();
    if (or_temp_result_1718_23_0) {
        playermovementvalues_245_instances.save_selection();
        bosssnakehitbox_999_instances.save_selection();
    }
    // event 1718_23
    bool or_temp_result_1718_23_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto or_event_1718_23_1_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (2))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto or_event_1718_23_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (2))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1718_23_1_end;
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (13730))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto or_event_1718_23_1_end;
        or_result_1718_23 = true;
        or_temp_result_1718_23_1 = true;
        or_event_1718_23_1_end: ;
        if (or_temp_result_1718_23_1) {
            playermovementvalues_245_instances.save_selection();
            bosssnakehitbox_999_instances.save_selection();
        }
        if (!or_result_1718_23) goto or_final_or_event_1718_23_1_end;
        bosssnakehitbox_999_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_1718_23_0 || or_temp_result_1718_23_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1718_23_0 || or_temp_result_1718_23_1) {
            bosssnakehitbox_999_instances.restore_selection();
        }
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(3-1);
        }
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(3-1);
        }
    }
    or_final_or_event_1718_23_1_end: ;
}
void Frames::event_func_5112()
{
    // event 1719_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1719_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1719_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (2))) goto event_1719_23_end;
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1719_23_end;
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, 20);
        }
    }
    event_1719_23_end: ;
}
void Frames::event_func_5113()
{
    // event 1720_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1720_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1720_23_end;
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, ((Active*)*it)->alterables->values.get(24)*-0.5);
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
    }
    event_1720_23_end: ;
}
void Frames::event_func_5114()
{
    // event 1721_23
    bool or_result_1721_23 = false;
    bool or_temp_result_1721_23_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto or_event_1721_23_0_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (2))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto or_event_1721_23_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (2))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1721_23_0_end;
        or_result_1721_23 = true;
        or_temp_result_1721_23_0 = true;
    }
    or_event_1721_23_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    bosssnakehitbox_999_instances.clear_saved_selection();
    if (or_temp_result_1721_23_0) {
        playermovementvalues_245_instances.save_selection();
        bosssnakehitbox_999_instances.save_selection();
    }
    // event 1721_23
    bool or_temp_result_1721_23_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto or_event_1721_23_1_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (1))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto or_event_1721_23_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1721_23_1_end;
        or_result_1721_23 = true;
        or_temp_result_1721_23_1 = true;
        or_event_1721_23_1_end: ;
        if (or_temp_result_1721_23_1) {
            playermovementvalues_245_instances.save_selection();
            bosssnakehitbox_999_instances.save_selection();
        }
        if (!or_result_1721_23) goto or_final_or_event_1721_23_1_end;
        bosssnakehitbox_999_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_1721_23_0 || or_temp_result_1721_23_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1721_23_0 || or_temp_result_1721_23_1) {
            bosssnakehitbox_999_instances.restore_selection();
        }
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(8, 1);
            ((Active*)*it)->alterables->values.set(24, 0);
        }
    }
    or_final_or_event_1721_23_1_end: ;
}
void Frames::event_func_5115()
{
    // event 1722_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1722_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (3))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1722_23_end;
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(8, 1);
        }
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bossserpentinehead_948_instances, it.current_index));
            if (parent == NULL) goto pos_end_1722_23_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1722_23_0: ;
        }
        FrameObject * single_instance_1722_23_1; single_instance_1722_23_1 = NULL;
        // select single: true false false
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator p_it(bossserpentinehead_948_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1722_23_1 == NULL)
                    single_instance_1722_23_1 = new_obj;
            }
        }
        {
            loop_boss_explode_running = true;
            int times = int(bosssnakebody_995_instances.size());
            loop_boss_explode_index = 0;
            while (loop_boss_explode_index < times) {
                loop_boss_explode_23();
                if (!loop_boss_explode_running) break;
                loop_boss_explode_index++;
            }
        }
    }
    event_1722_23_end: ;
}
void Frames::event_func_5116()
{
    // event 1727_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1727_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (4))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1727_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) < (45))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1727_23_end;
        FrameObject * single_instance_1727_23_0; single_instance_1727_23_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossserpentinehead_948_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1727_23_0 == NULL)
                    single_instance_1727_23_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1727_23_0))->set_x(((Active*)get_single(bossserpentinehead_948_instances, default_active_instance))->get_x()+sin_deg(((Active*)get_single(bossserpentinehead_948_instances, default_active_instance))->alterables->values.get(17)*132)*(8+sin_deg(((Active*)get_single(bossserpentinehead_948_instances, default_active_instance))->alterables->values.get(17)*2)*40));
        ((Active*)((Active*)single_instance_1727_23_0))->set_y(((Active*)get_single(bossserpentinehead_948_instances, default_active_instance))->get_y()-sin_deg(((Active*)get_single(bossserpentinehead_948_instances, default_active_instance))->alterables->values.get(17)*5)*80);
        ((Active*)((Active*)single_instance_1727_23_0))->force_speed(30+cos_deg(((Active*)get_single(bossserpentinehead_948_instances, default_active_instance))->alterables->values.get(17)*143)*10);
    }
    event_1727_23_end: ;
}
void Frames::event_func_5117()
{
    // event 1728_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1728_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (4))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1728_23_end;
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, 0);
        }
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(17, 1);
        }
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 0);
        }
    }
    event_1728_23_end: ;
}
void Frames::event_func_5118()
{
    // event 1729_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1729_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (4))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1729_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) > (70))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1729_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1729_23_end;
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
            group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_snake_boss_snake_destroyed_1) {
            group_main_engine_level_specific_methods_bosses_snake_boss_snake_destroyed_1 = true;
        }
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(7);
        ((Active*)get_instance(playerskinsash_418_instances))->force_speed(50);
        ((Active*)get_instance(player_389_instances))->set_x(((Active*)get_instance(bosstunnel_1083_instances, default_active_instance))->get_x());
        ((Active*)get_instance(player_389_instances))->set_y(frame_bottom()+50);
        ((Active*)get_instance(playerskinsash_418_instances))->set_angle(0, 0);
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(0);
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_angle(0, 0);
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_direction(0);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_animation(7);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_speed(50);
        media.play_id(SOUND_LILAC_COMETDASH_53, -1, 1);
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
    }
    event_1729_23_end: ;
}
void Frames::event_func_5119()
{
    // event 1730_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1730_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (4))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1730_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) > (70))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1730_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_1730_23_end;
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
            group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_snake_boss_snake_destroyed_1) {
            group_main_engine_level_specific_methods_bosses_snake_boss_snake_destroyed_1 = true;
        }
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play_id(SOUND_COMMON_ROLLING_2_7, -1, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, 2200);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, frame_left()-100);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 8);
    }
    event_1730_23_end: ;
}
void Frames::event_func_5120()
{
    // event 1731_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_destroyed_1)) goto event_1731_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1731_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1731_23_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 40);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 8);
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            if (parent == NULL) goto pos_end_1731_23_0;
            ((Active*)get_instance(playerskinsash_418_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1731_23_0: ;
        }
        ((Active*)get_instance(player_389_instances))->set_y(((Active*)get_instance(player_389_instances))->get_y()-10);
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            if (parent == NULL) goto pos_end_1731_23_1;
            ((Active*)get_instance(playerskinsashhair_417_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 8);
            pos_end_1731_23_1: ;
        }
    }
    event_1731_23_end: ;
}
void Frames::event_func_5121()
{
    // event 1732_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_destroyed_1)) goto event_1732_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1732_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1732_23_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) < (1230))) goto event_1732_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(player_389_instances))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(player_389_instances))->get_y());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 6);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -4);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
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
    }
    event_1732_23_end: ;
}
void Frames::event_func_5122()
{
    // event 1733_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_destroyed_1)) goto event_1733_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) > (0))) goto event_1733_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1733_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) != (0))) goto event_1733_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (20))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1733_23_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 6);
    }
    event_1733_23_end: ;
}
void Frames::event_func_5123()
{
    // event 1734_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_destroyed_1)) goto event_1734_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1734_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) > (0))) goto event_1734_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1734_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (6))) goto event_1734_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
    }
    event_1734_23_end: ;
}
void Frames::event_func_5124()
{
    // event 1735_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_destroyed_1)) goto event_1735_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (40))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1735_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1735_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1735_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(1, 0);
    }
    event_1735_23_end: ;
}
void Frames::event_func_5125()
{
    // event 1736_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_destroyed_1)) goto event_1736_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (40))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1736_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) > (0))) goto event_1736_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (6))) goto event_1736_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
    }
    event_1736_23_end: ;
}
void Frames::event_func_5126()
{
    // event 1737_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_destroyed_1)) goto event_1737_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (25))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1737_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1737_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1737_23_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(1, 1);
    }
    event_1737_23_end: ;
}
void Frames::event_func_5127()
{
    // event 1738_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_destroyed_1)) goto event_1738_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (40))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1738_23_end;
        ((Active*)get_instance(sign_351_instances))->alterables->flags.enable(0);
        ((Active*)get_instance(sign_351_instances))->alterables->values.set(1, 179);
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 41);
        }
    }
    event_1738_23_end: ;
}
void Frames::event_func_5128()
{
    // event 1739_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_destroyed_1)) goto event_1739_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (41))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1739_23_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1) goto event_1739_23_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 1);
    }
    event_1739_23_end: ;
}
void Frames::event_func_5129()
{
    // event 1740_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_destroyed_1)) goto event_1740_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (41))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1740_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (frame_right()+32))) goto event_1740_23_end;
        if (not_always_1740_23 > loop_count) {
            not_always_1740_23 = loop_count + 2;
            goto event_1740_23_end;
        }
        not_always_1740_23 = loop_count + 2;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, width-50);
    }
    event_1740_23_end: ;
}
void Frames::event_func_5130()
{
    // event 1744_23
    {
        if (!(group_main_engine_1)) goto event_1744_23_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(3)) == (149))) goto event_1744_23_end;
        if (once_condition_1744_23) goto event_1744_23_end;
        once_condition_1744_23 = true;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 43)) == (0))) goto event_1744_23_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25)) <= (300000))) goto event_1744_23_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 2, 43);
    }
    event_1744_23_end: ;
}
void Frames::event_func_5131()
{
    // event 1745_23
    {
        if (!(group_main_engine_1)) goto event_1745_23_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(3)) == (149))) goto event_1745_23_end;
        if (once_condition_1745_23) goto event_1745_23_end;
        once_condition_1745_23 = true;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 23)) == (0))) goto event_1745_23_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 1)) > (0))) goto event_1745_23_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 2)) > (0))) goto event_1745_23_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 3)) > (0))) goto event_1745_23_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 4)) > (0))) goto event_1745_23_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 5)) > (0))) goto event_1745_23_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 6)) > (0))) goto event_1745_23_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 7)) > (0))) goto event_1745_23_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 8)) > (0))) goto event_1745_23_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 9)) > (0))) goto event_1745_23_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 10)) > (0))) goto event_1745_23_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 2, 23);
    }
    event_1745_23_end: ;
}
void Frames::event_func_5132()
{
    // event 1746_23
    {
        if (!(group_main_engine_1)) goto event_1746_23_end;
        if (!((((Counter*)get_instance(guibosshealth_1089_instances))->value) == (0))) goto event_1746_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1746_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_1746_23_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 15)), 2, 15);
    }
    event_1746_23_end: ;
}
void Frames::event_func_5133()
{
    // event 1747_23
    {
        if (!(group_main_engine_1)) goto event_1747_23_end;
        if (!((((Counter*)get_instance(guibosshealth_1089_instances))->value) == (0))) goto event_1747_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1747_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_1747_23_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 12)), 2, 12);
    }
    event_1747_23_end: ;
}
void Frames::event_func_5134()
{
    // event 1748_23
    {
        if (!(group_main_engine_1)) goto event_1748_23_end;
        if (!((((Counter*)get_instance(guibosshealth_1089_instances))->value) == (0))) goto event_1748_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1748_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (20))) goto event_1748_23_end;
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1073741824))) { it.deselect(); continue; }
        }
        if (!shieldinstashield_359_instances.has_selection()) goto event_1748_23_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 13)), 2, 13);
    }
    event_1748_23_end: ;
}
void Frames::event_func_5135()
{
    // event 1749_23
    {
        if (!(group_main_engine_1)) goto event_1749_23_end;
        if (!((((Counter*)get_instance(guibosshealth_1089_instances))->value) == (0))) goto event_1749_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1749_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (20))) goto event_1749_23_end;
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(16384))) { it.deselect(); continue; }
        }
        if (!shieldinstashield_359_instances.has_selection()) goto event_1749_23_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 13)), 2, 13);
    }
    event_1749_23_end: ;
}
void Frames::event_func_5136()
{
    // event 1750_23
    {
        if (!(group_main_engine_1)) goto event_1750_23_end;
        if (!((((Counter*)get_instance(guibosshealth_1089_instances))->value) == (0))) goto event_1750_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1750_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1750_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (21))) goto event_1750_23_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 10)), 2, 10);
    }
    event_1750_23_end: ;
}
void Frames::event_func_5137()
{
    // event 1751_23
    {
        if (!(group_main_engine_1)) goto event_1751_23_end;
        if (!((((Counter*)get_instance(guibosshealth_1089_instances))->value) == (0))) goto event_1751_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1751_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1751_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (26))) goto event_1751_23_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 11)), 2, 11);
    }
    event_1751_23_end: ;
}
void Frames::event_func_5138()
{
    // event 1752_23
    {
        if (!(group_main_engine_1)) goto event_1752_23_end;
        if (!((((Counter*)get_instance(guibosshealth_1089_instances))->value) == (0))) goto event_1752_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1752_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (44))) goto event_1752_23_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 14)), 2, 14);
    }
    event_1752_23_end: ;
}
void Frames::event_func_5139()
{
    // event 1753_23
    {
        if (!(group_main_engine_1)) goto event_1753_23_end;
        if (!((((Counter*)get_instance(guibosshealth_1089_instances))->value) == (0))) goto event_1753_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1753_23_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (3))) goto event_1753_23_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 16)), 2, 16);
    }
    event_1753_23_end: ;
}
void Frames::event_func_5140()
{
    // event 1754_23
    {
        if (!(group_main_engine_1)) goto event_1754_23_end;
        if (!((((Counter*)get_instance(guibosshealth_1089_instances))->value) == (0))) goto event_1754_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1754_23_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (5))) goto event_1754_23_end;
        if (!(((Active*)get_instance(playerreflect_447_instances))->test_animation(5))) goto event_1754_23_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 17)), 2, 17);
    }
    event_1754_23_end: ;
}
void Frames::event_func_5141()
{
    // event 1883_23
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_event_camera_system_1)) goto event_1883_23_end;
        set_display_center(frame_left()+((frame_right()-frame_left())/math_helper/2)+(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)-(frame_left()+((frame_right()-frame_left())/math_helper/2)))*0.1, -1);
        set_display_center(-1, frame_top()+((frame_bottom()-frame_top())/math_helper/2)+(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)-(frame_top()+((frame_bottom()-frame_top())/math_helper/2)))*0.1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, width);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, height);
    }
    event_1883_23_end: ;
}
void Frames::event_func_5142()
{
    // event 1967_23
    {
        if (!(group_pause_1)) goto event_1967_23_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_1967_23_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_1967_23_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1967_23_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1967_23_end;
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
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemysporeprojectile_969_instances.clear_selection();
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossfireball_967_instances.clear_selection();
        for (ObjectIterator it(bossfireball_967_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        ((Active*)get_instance(bossbouncemode_1082_instances))->get_movement()->stop(false);
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsspringbeam_470_instances.clear_selection();
        for (ObjectIterator it(effectsspringbeam_470_instances); !it.end(); ++it) {
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
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
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
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        littlebubble_1068_instances.clear_selection();
        for (ObjectIterator it(littlebubble_1068_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->stop_animation();
    }
    event_1967_23_end: ;
}
void Frames::event_func_5143()
{
    // event 1968_23
    bool or_result_1968_23 = false;
    bool or_temp_result_1968_23_0 = false;
    {
        if (!(group_pause_1)) goto or_event_1968_23_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_1968_23_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1968_23_0_end;
        or_result_1968_23 = true;
        or_temp_result_1968_23_0 = true;
    }
    or_event_1968_23_0_end: ;
    // event 1968_23
    bool or_temp_result_1968_23_1 = false;
    {
        if (!(group_pause_1)) goto or_event_1968_23_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_1968_23_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1968_23_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_1968_23_1_end;
        or_result_1968_23 = true;
        or_temp_result_1968_23_1 = true;
        or_event_1968_23_1_end: ;
        if (!or_result_1968_23) goto or_final_or_event_1968_23_1_end;
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
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemysporeprojectile_969_instances.clear_selection();
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossfireball_967_instances.clear_selection();
        for (ObjectIterator it(bossfireball_967_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        ((Active*)get_instance(bossbouncemode_1082_instances))->get_movement()->start();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
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
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
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
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->start_animation();
        littlebubble_1068_instances.clear_selection();
        for (ObjectIterator it(littlebubble_1068_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->start_animation();
    }
    or_final_or_event_1968_23_1_end: ;
}
void Frames::event_func_5144()
{
    // event 1979_23
    {
        if (!(group_pause_1)) goto event_1979_23_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_1979_23_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1979_23_end;
        {
            loop_restart_running = true;
            int times = int(1);
            loop_restart_index = 0;
            while (loop_restart_index < times) {
                loop_restart_23();
                if (!loop_restart_running) break;
                loop_restart_index++;
            }
        }
    }
    event_1979_23_end: ;
}
void Frames::event_func_5145()
{
    // event 1983_23
    {
        // group: Slowdown Effect
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) > (0))) goto event_1983_23_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(2)%math_helper%((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) != (0))) goto event_1983_23_end;
        if (not_always_1983_23 > loop_count) {
            not_always_1983_23 = loop_count + 2;
            goto event_1983_23_end;
        }
        not_always_1983_23 = loop_count + 2;
            group_main_engine_1 = false;
    
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
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
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
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemysporeprojectile_969_instances.clear_selection();
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossfireball_967_instances.clear_selection();
        for (ObjectIterator it(bossfireball_967_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        ((Active*)get_instance(bossbouncemode_1082_instances))->get_movement()->stop(false);
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsspringbeam_470_instances.clear_selection();
        for (ObjectIterator it(effectsspringbeam_470_instances); !it.end(); ++it) {
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
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
    }
    event_1983_23_end: ;
}
void Frames::event_func_5146()
{
    // event 1984_23
    {
        // group: Slowdown Effect
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) > (0))) goto event_1984_23_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(2)%math_helper%((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) == (0))) goto event_1984_23_end;
        if (not_always_1984_23 > loop_count) {
            not_always_1984_23 = loop_count + 2;
            goto event_1984_23_end;
        }
        not_always_1984_23 = loop_count + 2;
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
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
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
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemysporeprojectile_969_instances.clear_selection();
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossfireball_967_instances.clear_selection();
        for (ObjectIterator it(bossfireball_967_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        ((Active*)get_instance(bossbouncemode_1082_instances))->get_movement()->start();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
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
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
    }
    event_1984_23_end: ;
}
void Frames::handle_frame_24_events()
{
    test_collisions_23();
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
    event_func_4203();
    event_func_4205();
    event_func_2650();
    event_func_4187();
    event_func_4188();
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
    event_func_1369();
    event_func_1370();
    event_func_1371();
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
    event_func_4518();
    event_func_4519();
    event_func_4520();
    event_func_4521();
    event_func_4522();
    event_func_4347();
    event_func_4523();
    event_func_4524();
    event_func_4525();
    event_func_4351();
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
    event_func_1746();
    event_func_1747();
    event_func_1748();
    event_func_1749();
    event_func_1750();
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
    event_func_4352();
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
    event_func_4909();
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1) goto group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1_end;
    event_func_1774();
    event_func_2783();
    event_func_1776();
    event_func_4353();
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
    event_func_4910();
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
    event_func_4354();
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
    event_func_1997();
    event_func_1998();
    event_func_1999();
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
    event_func_2024();
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
    if (!group_main_engine_global_methods_common_objects_collectables_tao_stone_1) goto group_main_engine_global_methods_common_objects_collectables_tao_stone_1_end;
    event_func_2320();
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1_end: ;
    event_func_2321();
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
    event_func_4911();
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
    event_func_2423();
    event_func_2424();
    event_func_2425();
    event_func_2426();
    event_func_2427();
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
    event_func_4534();
    event_func_4535();
    event_func_2962();
    event_func_4536();
    event_func_4537();
    event_func_4538();
    event_func_4539();
    event_func_4540();
    event_func_4912();
    event_func_4913();
    event_func_4914();
    event_func_4543();
    event_func_4915();
    event_func_4916();
    event_func_4546();
    event_func_4917();
    event_func_4918();
    event_func_4919();
    event_func_4920();
    event_func_4921();
    event_func_4922();
    event_func_4923();
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
    event_func_4549();
    event_func_4550();
    event_func_4376();
    event_func_4377();
    event_func_4924();
    event_func_4925();
    event_func_4926();
    event_func_4927();
    event_func_4928();
    event_func_4551();
    event_func_2988();
    event_func_2989();
    event_func_4929();
    event_func_4930();
    event_func_4931();
    event_func_4932();
    event_func_4933();
    event_func_4934();
    event_func_4558();
    event_func_4935();
    event_func_4936();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_4384();
    event_func_4385();
    event_func_4386();
    event_func_4387();
    event_func_4388();
    event_func_4389();
    event_func_4390();
    event_func_4391();
    event_func_4392();
    event_func_4393();
    event_func_4937();
    event_func_4395();
    event_func_4396();
    event_func_4397();
    event_func_4398();
    event_func_4399();
    event_func_4400();
    event_func_4401();
    event_func_4402();
    event_func_4403();
    event_func_4404();
    event_func_4405();
    event_func_4406();
    event_func_4407();
    event_func_4408();
    event_func_4409();
    event_func_4410();
    event_func_4411();
    event_func_4412();
    event_func_4413();
    event_func_4414();
    event_func_4415();
    event_func_4416();
    event_func_4417();
    event_func_4418();
    event_func_4419();
    event_func_4420();
    event_func_4421();
    event_func_4422();
    event_func_4423();
    event_func_4424();
    event_func_4425();
    event_func_4938();
    event_func_2996();
    event_func_4939();
    event_func_2998();
    event_func_4940();
    if (!group_main_engine_level_specific_methods_stage_clear_1) goto group_main_engine_level_specific_methods_stage_clear_1_end;
    event_func_4941();
    event_func_4198();
    event_func_4199();
    event_func_4200();
    event_func_4202();
    event_func_4204();
    event_func_4206();
    event_func_4207();
    event_func_4208();
    event_func_4209();
    event_func_4210();
    event_func_4211();
    if (!group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1) goto group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1_end;
    event_func_4942();
    event_func_4943();
    event_func_4944();
    event_func_4214();
    event_func_4215();
    event_func_4216();
    event_func_4217();
    event_func_4218();
    event_func_4219();
    event_func_4220();
    event_func_4221();
    event_func_4222();
    event_func_4223();
    event_func_4945();
    event_func_4946();
    group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1_end: ;
    group_main_engine_level_specific_methods_stage_clear_1_end: ;
    if (!group_main_engine_level_specific_methods_play_bgm_1) goto group_main_engine_level_specific_methods_play_bgm_1_end;
    event_func_4233();
    group_main_engine_level_specific_methods_play_bgm_1_end: ;
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) goto group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end;
    event_func_4173();
    event_func_4947();
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end: ;
    event_func_4948();
    event_func_4949();
    event_func_4950();
    event_func_4951();
    event_func_4873();
    event_func_4874();
    event_func_4875();
    event_func_4876();
    event_func_4877();
    event_func_4952();
    if (!group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1) goto group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1_end;
    event_func_4953();
    event_func_4954();
    event_func_4955();
    event_func_4956();
    event_func_4957();
    event_func_4958();
    event_func_4959();
    event_func_4960();
    event_func_4961();
    event_func_4962();
    event_func_4963();
    event_func_4964();
    event_func_4965();
    event_func_4966();
    event_func_4967();
    event_func_4968();
    event_func_4969();
    event_func_4970();
    event_func_4971();
    event_func_4972();
    event_func_4973();
    event_func_4974();
    event_func_4975();
    event_func_4976();
    event_func_4977();
    event_func_4978();
    event_func_4979();
    event_func_4980();
    event_func_4981();
    event_func_4982();
    event_func_4983();
    event_func_4984();
    event_func_4985();
    event_func_4986();
    event_func_4987();
    event_func_4988();
    event_func_4989();
    event_func_4990();
    event_func_4991();
    event_func_4992();
    event_func_4993();
    if (!group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_boulder_collisions_and_speed_changes_1) goto group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_boulder_collisions_and_speed_changes_1_end;
    event_func_4994();
    event_func_4995();
    event_func_4996();
    event_func_4997();
    event_func_4998();
    event_func_4999();
    event_func_5000();
    event_func_5001();
    event_func_5002();
    group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_boulder_collisions_and_speed_changes_1_end: ;
    event_func_5003();
    if (!group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_boulder_reposition_1) goto group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_boulder_reposition_1_end;
    event_func_5004();
    event_func_5005();
    event_func_5006();
    event_func_5007();
    event_func_5008();
    event_func_5009();
    event_func_5010();
    event_func_5011();
    group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_boulder_reposition_1_end: ;
    group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1_end: ;
    event_func_5012();
    event_func_5013();
    if (!group_main_engine_level_specific_methods_bosses_snake_boss_1) goto group_main_engine_level_specific_methods_bosses_snake_boss_1_end;
    event_func_5014();
    event_func_5015();
    event_func_5016();
    event_func_5017();
    event_func_5018();
    event_func_5019();
    event_func_5020();
    event_func_5021();
    event_func_5022();
    event_func_5023();
    event_func_5024();
    event_func_5025();
    event_func_5026();
    if (!group_main_engine_level_specific_methods_bosses_snake_boss_snake_boulder_fall_1) goto group_main_engine_level_specific_methods_bosses_snake_boss_snake_boulder_fall_1_end;
    event_func_5027();
    event_func_5028();
    event_func_5029();
    event_func_5030();
    event_func_5031();
    event_func_5032();
    event_func_5033();
    group_main_engine_level_specific_methods_bosses_snake_boss_snake_boulder_fall_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1) goto group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1_end;
    event_func_5034();
    event_func_5035();
    event_func_5036();
    event_func_5037();
    event_func_5038();
    event_func_5039();
    event_func_5040();
    event_func_5041();
    event_func_5042();
    event_func_5043();
    event_func_5044();
    event_func_5045();
    event_func_5046();
    event_func_5047();
    event_func_5048();
    event_func_5049();
    event_func_5050();
    event_func_5051();
    group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1) goto group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1_end;
    event_func_5052();
    event_func_5053();
    event_func_5054();
    event_func_5055();
    event_func_5056();
    event_func_5057();
    event_func_5058();
    event_func_5059();
    event_func_5060();
    event_func_5061();
    event_func_5062();
    event_func_5063();
    event_func_5064();
    event_func_5065();
    event_func_5066();
    event_func_5067();
    event_func_5068();
    event_func_5069();
    event_func_5070();
    event_func_5071();
    event_func_5072();
    event_func_5073();
    event_func_5074();
    group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_snake_boss_snake_hitting_1) goto group_main_engine_level_specific_methods_bosses_snake_boss_snake_hitting_1_end;
    event_func_5075();
    event_func_5076();
    event_func_5077();
    event_func_5078();
    event_func_5079();
    event_func_5080();
    event_func_5081();
    group_main_engine_level_specific_methods_bosses_snake_boss_snake_hitting_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1) goto group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1_end;
    event_func_5082();
    event_func_5083();
    event_func_5084();
    event_func_5085();
    event_func_5086();
    event_func_5087();
    event_func_5088();
    event_func_5089();
    event_func_5090();
    event_func_5091();
    event_func_5092();
    event_func_5093();
    event_func_5094();
    event_func_5095();
    event_func_5096();
    event_func_5097();
    event_func_5098();
    event_func_5099();
    event_func_5100();
    event_func_5101();
    event_func_5102();
    event_func_5103();
    event_func_5104();
    event_func_5105();
    event_func_5106();
    event_func_5107();
    event_func_5108();
    event_func_5109();
    event_func_5110();
    event_func_5111();
    event_func_5112();
    event_func_5113();
    event_func_5114();
    event_func_5115();
    event_func_5116();
    event_func_5117();
    event_func_5118();
    event_func_5119();
    group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_snake_boss_snake_destroyed_1) goto group_main_engine_level_specific_methods_bosses_snake_boss_snake_destroyed_1_end;
    event_func_5120();
    event_func_5121();
    event_func_5122();
    event_func_5123();
    event_func_5124();
    event_func_5125();
    event_func_5126();
    event_func_5127();
    event_func_5128();
    event_func_5129();
    group_main_engine_level_specific_methods_bosses_snake_boss_snake_destroyed_1_end: ;
    group_main_engine_level_specific_methods_bosses_snake_boss_1_end: ;
    event_func_4685();
    event_func_5130();
    event_func_5131();
    event_func_5132();
    event_func_5133();
    event_func_5134();
    event_func_5135();
    event_func_5136();
    event_func_5137();
    event_func_5138();
    event_func_5139();
    event_func_5140();
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
    if (!group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1) goto group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1_end;
    event_func_2575();
    event_func_2576();
    event_func_2577();
    event_func_2578();
    event_func_2579();
    event_func_2580();
    event_func_2581();
    event_func_2582();
    event_func_2583();
    event_func_2584();
    event_func_2585();
    event_func_2586();
    event_func_2587();
    event_func_2588();
    event_func_2589();
    event_func_2590();
    event_func_2591();
    event_func_2592();
    event_func_2593();
    event_func_2594();
    event_func_2595();
    event_func_2596();
    event_func_2597();
    event_func_2598();
    event_func_2599();
    event_func_2600();
    event_func_2601();
    event_func_2602();
    event_func_2603();
    event_func_2604();
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_event_camera_system_1) goto group_main_engine_interface_and_post_processing_methods_event_camera_system_1_end;
    event_func_5141();
    group_main_engine_interface_and_post_processing_methods_event_camera_system_1_end: ;
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
    event_func_3247();
    event_func_3248();
    event_func_3249();
    event_func_4691();
    event_func_4692();
    event_func_4693();
    event_func_4694();
    event_func_4695();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_5142();
    event_func_5143();
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
    event_func_5144();
    event_func_3978();
    group_pause_1_end: ;
    event_func_4314();
    event_func_5145();
    event_func_5146();
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
    group_debug_mode_debugging_1_end: ;
    group_debug_mode_1_end: ;
    event_func_226();
    event_func_227();
    event_func_228();
    event_func_229();
    event_func_2653();
    event_func_2619();
}
void Frames::handle_frame_24_pre_events()
{
}
void Frames::event_func_5147()
{
    // event 1_23
    {
        global_values->set(4, -1);
    }
    event_1_23_end: ;
}
void Frames::event_func_5148()
{
    // event 2_23
    {
#ifdef CHOWDREN_WAIT
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->find_board(global_values->get(1), 1);
#endif
    }
    event_2_23_end: ;
}
void Frames::event_func_5149()
{
    // event 7_23
    {
        if (!(group_main_engine_1)) goto event_7_23_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 2700);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 8);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 3);
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
    }
    event_7_23_end: ;
}
void Frames::event_func_5150()
{
    // event 24_23
    {
        if (!(group_main_engine_1)) goto event_24_23_end;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(3, 0.99);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(4, 0.94);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(3, 0.98);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(4, 0.93);
        ((SystemBox*)get_instance(levelparallaxpiece2_861_instances))->alterables->values.set(3, 0.4);
        ((SystemBox*)get_instance(levelparallaxpiece2_861_instances))->alterables->values.set(4, 0.5);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(3, 0.95);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(4, 0.91);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(3, 0.96);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(4, 0.92);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(6, -0.1);
        ((SystemBox*)get_instance(levelparallaxpiece4_469_instances))->alterables->values.set(3, 0.92);
        ((SystemBox*)get_instance(levelparallaxpiece4_469_instances))->alterables->values.set(4, 0.88);
        ((SystemBox*)get_instance(levelparallaxpiece4_469_instances))->alterables->values.set(6, -0.3);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(3, 0.6);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(4, 0.7);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(3, 0.5);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(4, 0.6);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(3, 0.35);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(4, 0.43);
        ((SystemBox*)get_instance(levelparallaxpiece10_765_instances))->alterables->values.set(3, 0.4);
        ((SystemBox*)get_instance(levelparallaxpiece10_765_instances))->alterables->values.set(4, 0.5);
        ((SystemBox*)get_instance(levelparallaxpiece9_763_instances))->alterables->values.set(3, 0.6);
        ((SystemBox*)get_instance(levelparallaxpiece9_763_instances))->alterables->values.set(4, 0.7);
        ((SystemBox*)get_instance(levelparallaxpiece8_762_instances))->alterables->values.set(3, 0.7);
        ((SystemBox*)get_instance(levelparallaxpiece8_762_instances))->alterables->values.set(4, 0.8);
        ((SystemBox*)get_instance(levelparallaxpiece11_966_instances))->alterables->values.set(3, 0.35);
        ((SystemBox*)get_instance(levelparallaxpiece11_966_instances))->alterables->values.set(4, 0.43);
        ((SystemBox*)get_instance(levelparallaxpiece12_1010_instances))->alterables->values.set(3, 0.15);
        ((SystemBox*)get_instance(levelparallaxpiece12_1010_instances))->alterables->values.set(4, 0.15);
        ((SystemBox*)get_instance(levelparallaxpiece13_1011_instances))->alterables->values.set(3, 0.15);
        ((SystemBox*)get_instance(levelparallaxpiece13_1011_instances))->alterables->values.set(4, 0.15);
    }
    event_24_23_end: ;
}
void Frames::on_frame_24_start_events()
{
    event_func_5147();
    event_func_5148();
    event_func_4133();
    event_func_4318();
    event_func_5149();
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
    event_func_5150();
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
    event_func_2686();
    event_func_4323();
    event_func_4703();
    event_func_2689();
    event_func_2690();
    event_func_2691();
    event_func_2692();
    event_func_4145();
    event_func_4146();
    event_func_4893();
    event_func_2694();
    event_func_4705();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_24_init()
{
    index = 23;
    width = 16232;
    height = 2576;
    virtual_width = 16232;
    virtual_height = 2576;
    background_color = Color(0, 0, 0);
    timer_base = 0;
    reset_image_cache();
    flush_image_cache();
    layers.resize(8);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    layers[1].init(1, 1.0, 1.0, true, false, false);
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
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &gimmickbridgelog_412_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, NULL};
    qualifier_8.set(10, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &gimmickbridgelog_412_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorbomb_563_instances, &hazardspikesup_558_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, NULL};
    qualifier_9.set(32, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemyturretus_938_instances, &enemydragonfly_944_instances, &bosssnakebody_995_instances, &bosssnakehitbox_999_instances, &bossboulder_1064_instances, NULL};
    qualifier_20.set(5, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece0_465_instances, &levelparallaxpiece1_2_instances, &levelparallaxpiece3_468_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece4_469_instances, &levelparallaxpiece5_510_instances, &levelparallaxpiece6_511_instances, &levelparallaxpiece2_861_instances, &levelparallaxpiece8_762_instances, &levelparallaxpiece9_763_instances, &levelparallaxpiece10_765_instances, &levelparallaxpiece7_764_instances, &levelparallaxpiece11_966_instances, &levelparallaxpiece12_1010_instances, &levelparallaxpiece13_1011_instances, NULL};
    qualifier_0.set(15, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorbomb_563_instances, &hazardspikesup_558_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &breakablerock2_1007_instances, &switchdoor_735_instances, &bosstunnel2_1077_instances, &levellayer115_1085_instances, &levellayer1loop03_1086_instances, NULL};
    qualifier_7.set(30, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &monitorbomb_563_instances, &enemyturretus_938_instances, &enemydragonfly_944_instances, &bossserpentinehead_948_instances, &bossfireball_967_instances, &bosssnakebody_995_instances, &bosssnakehitbox_999_instances, &bossboulder_1064_instances, NULL};
    qualifier_4.set(39, &qualifier_4_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(11, &qualifier_19_instances[0]);
    static ObjectList* qualifier_14_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_14.set(1, &qualifier_14_instances[0]);
    static ObjectList* qualifier_15_instances[] = {&laddertop_357_instances, &mastergroupsb_385_instances, NULL};
    qualifier_15.set(2, &qualifier_15_instances[0]);
    static ObjectList* qualifier_16_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_16.set(1, &qualifier_16_instances[0]);
    static ObjectList* qualifier_17_instances[] = {&mastergroupsb_385_instances, &bossfireball_967_instances, NULL};
    qualifier_17.set(2, &qualifier_17_instances[0]);
    static ObjectList* qualifier_10_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, NULL};
    qualifier_10.set(3, &qualifier_10_instances[0]);
    static ObjectList* qualifier_11_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &levellayer115_1085_instances, &levellayer1loop03_1086_instances, NULL};
    qualifier_11.set(5, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, NULL};
    qualifier_12.set(2, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &levelgeyserplate_998_instances, NULL};
    qualifier_13.set(2, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0_465(0, 0), 0);
    add_background_object(create_levelparallaxpiece1_855(0, 112), 0);
    add_background_object(create_levelparallaxpiece3_856(0, 88), 0);
    add_background_object(create_levelparallaxpiece2_857(0, 128), 0);
    add_background_object(create_levelparallaxpiece4_858(0, 168), 0);
    add_background_object(create_levelparallaxpiece5_859(0, 256), 0);
    add_background_object(create_levelparallaxpiece6_860(0, 424), 0);
    add_background_object(create_levelparallaxpiece2_861(0, 376), 0);
    add_background_object(create_levelparallaxpiece8_962(0, 400), 0);
    add_background_object(create_levelparallaxpiece9_963(0, 608), 0);
    add_background_object(create_levelparallaxpiece10_964(0, 936), 0);
    add_background_object(create_levelparallaxpiece7_965(0, 728), 0);
    add_background_object(create_levelparallaxpiece11_966(0, 1552), 0);
    add_background_object(create_levelparallaxpiece12_1010(0, 1648), 0);
    add_background_object(create_levelparallaxpiece13_1063(0, 1712), 0);
    add_background_object(create_dvbackwall_866(12696, 2064), 0);
    add_background_object(create_dvbackwall_866(12696, 1872), 0);
    add_background_object(create_dvbackwall_866(12616, 2064), 0);
    add_background_object(create_dvbackwall_866(12616, 1872), 0);
    add_object(create_levelparalaxwatersurface_968(48, 1247), 0);
    add_object(create_waterfallback_1016(12752, 1840), 0);
    add_object(create_waterfallback_1016(12688, 1840), 0);
    add_object(create_waterfallback_1016(12816, 1840), 0);
    add_object(create_waterfallback_1016(12752, 1936), 0);
    add_object(create_waterfallback_1016(12688, 1936), 0);
    add_object(create_waterfallback_1016(12816, 1936), 0);
    add_object(create_waterfallback_1016(12752, 2032), 0);
    add_object(create_waterfallback_1016(12688, 2032), 0);
    add_object(create_waterfallback_1016(12816, 2032), 0);
    add_object(create_waterfallback_1016(12752, 2128), 0);
    add_object(create_waterfallback_1016(12688, 2128), 0);
    add_object(create_waterfallback_1016(12816, 2128), 0);
    add_object(create_waterfallback_1016(12752, 2224), 0);
    add_object(create_waterfallback_1016(12688, 2224), 0);
    add_object(create_waterfallback_1016(12816, 2224), 0);
    add_object(create_waterfallfront_1061(12784, 1896), 0);
    add_object(create_waterfallfront_1061(12720, 1896), 0);
    add_object(create_waterfallfront_1061(12784, 1992), 0);
    add_object(create_waterfallfront_1061(12720, 1992), 0);
    add_object(create_waterfallfront_1061(12848, 1896), 0);
    add_object(create_waterfallfront_1061(12848, 1992), 0);
    add_object(create_waterfallfront_1061(12784, 2088), 0);
    add_object(create_waterfallfront_1061(12720, 2088), 0);
    add_object(create_waterfallfront_1061(12784, 2184), 0);
    add_object(create_waterfallfront_1061(12720, 2184), 0);
    add_object(create_waterfallfront_1061(12848, 2088), 0);
    add_object(create_waterfallfront_1061(12848, 2184), 0);
    add_object(create_waterfallfront_1061(12784, 2280), 0);
    add_object(create_waterfallfront_1061(12720, 2280), 0);
    add_object(create_waterfallfront_1061(12848, 2280), 0);
    add_object(create_waterfallback_1016(12624, 1840), 0);
    add_object(create_waterfallback_1016(12624, 1936), 0);
    add_object(create_waterfallback_1016(12624, 2032), 0);
    add_object(create_waterfallback_1016(12624, 2128), 0);
    add_object(create_waterfallback_1016(12624, 2224), 0);
    add_object(create_waterfallfront_1061(12656, 1896), 0);
    add_object(create_waterfallfront_1061(12656, 1992), 0);
    add_object(create_waterfallfront_1061(12656, 2088), 0);
    add_object(create_waterfallfront_1061(12656, 2184), 0);
    add_object(create_waterfallfront_1061(12656, 2280), 0);
    add_object(create_waterfallback_1016(12880, 1840), 0);
    add_object(create_waterfallback_1016(12880, 1936), 0);
    add_object(create_waterfallback_1016(12880, 2032), 0);
    add_object(create_waterfallback_1016(12880, 2128), 0);
    add_object(create_waterfallback_1016(12880, 2224), 0);
    add_object(create_waterfallfront_1061(12912, 1896), 0);
    add_object(create_waterfallfront_1061(12912, 1992), 0);
    add_object(create_waterfallfront_1061(12912, 2088), 0);
    add_object(create_waterfallfront_1061(12912, 2184), 0);
    add_object(create_waterfallfront_1061(12912, 2280), 0);
    add_background_object(create_dvtree1_893(4600, 2176), 1);
    add_background_object(create_dvtree5_879(2248, 2240), 1);
    add_background_object(create_dvbackwall_866(2744, 2104), 1);
    add_background_object(create_dvtree6_871(2344, 2088), 1);
    add_background_object(create_dvtree6_871(2560, 2096), 1);
    add_background_object(create_dvtree6_871(2648, 2080), 1);
    add_background_object(create_dvtree2_883(2376, 2120), 1);
    add_background_object(create_dvbackwall_866(1672, 2064), 1);
    add_background_object(create_dvbackrock1_882(1760, 2104), 1);
    add_background_object(create_dvbackwall_866(1432, 2056), 1);
    add_background_object(create_dvbackwall_866(1152, 2032), 1);
    add_background_object(create_dvtree3_897(1296, 2056), 1);
    add_background_object(create_dvtree1_893(928, 2056), 1);
    add_background_object(create_dvbackrock1_882(5640, 2104), 1);
    add_background_object(create_dvwall1_482(3776, 2312), 1);
    add_background_object(create_dvwall1_482(3776, 2504), 1);
    add_background_object(create_dvbackwall_866(11400, 1960), 1);
    add_background_object(create_dvbackwall_866(11400, 2152), 1);
    add_background_object(create_dvtree3_897(11568, 2080), 1);
    add_background_object(create_dvbackwall_866(10976, 1872), 1);
    add_background_object(create_dvbackwall_866(10976, 2064), 1);
    add_background_object(create_dvtree1_893(11200, 2032), 1);
    add_background_object(create_dvbackwall_866(12208, 1784), 1);
    add_background_object(create_dvbackwall_866(12208, 1976), 1);
    add_background_object(create_dvbackwall_866(12208, 2168), 1);
    add_background_object(create_dvtree6_871(12320, 1896), 1);
    add_background_object(create_dvtree5_879(12336, 2240), 1);
    add_background_object(create_dvbackrock3_881(12600, 2232), 1);
    add_background_object(create_dvbackrock3_881(12832, 2224), 1);
    add_background_object(create_dvbackrock2_890(12504, 2184), 1);
    add_background_object(create_dvbackrock1_882(12736, 2152), 1);
    add_background_object(create_dvtree6_871(12400, 1856), 1);
    add_background_object(create_dvtree5_879(12408, 2232), 1);
    add_background_object(create_dvtree5_879(12656, 2224), 1);
    add_background_object(create_dvtree5_879(12864, 2216), 1);
    add_background_object(create_dvtree5_879(12960, 2240), 1);
    add_background_object(create_dvtree5_879(13040, 2208), 1);
    add_background_object(create_dvtree6_871(12568, 1832), 1);
    add_background_object(create_dvtree6_871(12640, 1856), 1);
    add_background_object(create_dvtree6_871(12712, 1840), 1);
    add_background_object(create_dvtree6_871(12888, 1856), 1);
    add_background_object(create_dvtree6_871(12976, 1840), 1);
    add_background_object(create_dvtree6_871(13064, 1864), 1);
    add_background_object(create_dvbackwall_866(13112, 1792), 1);
    add_background_object(create_dvbackwall_866(13112, 1984), 1);
    add_background_object(create_dvbackwall_866(13112, 2176), 1);
    add_background_object(create_dvbackwall_866(11840, 1928), 1);
    add_background_object(create_dvbackwall_866(11840, 2120), 1);
    add_background_object(create_dvbackwall_866(10736, 1872), 1);
    add_background_object(create_dvbackwall_866(10736, 2064), 1);
    add_background_object(create_dvtree1_893(10912, 2040), 1);
    add_background_object(create_dvtree3_897(10952, 2112), 1);
    add_background_object(create_dvtree5_879(10848, 2136), 1);
    add_background_object(create_dvbackrock1_882(11192, 2096), 1);
    add_background_object(create_dvbackrock2_890(11256, 2136), 1);
    add_background_object(create_dvbackrock3_881(11128, 2160), 1);
    add_background_object(create_dvtree6_871(11296, 1960), 1);
    add_background_object(create_dvtree6_871(11384, 1976), 1);
    add_background_object(create_dvtree6_871(11624, 1968), 1);
    add_background_object(create_dvtree6_871(11728, 1976), 1);
    add_background_object(create_dvtree6_871(11680, 2000), 1);
    add_background_object(create_dvbackrock3_881(11328, 2176), 1);
    add_background_object(create_dvbackrock3_881(11440, 2192), 1);
    add_background_object(create_dvbackrock3_881(11512, 2184), 1);
    add_background_object(create_dvbackrock2_890(11584, 2144), 1);
    add_background_object(create_dvtree1_893(11728, 2144), 1);
    add_background_object(create_dvbackwall_866(336, 1648), 1);
    add_background_object(create_dvbackwall_866(336, 1840), 1);
    add_background_object(create_dvbackwall_866(336, 2032), 1);
    add_background_object(create_dvbackwall_866(680, 2008), 1);
    add_background_object(create_dvbackwall_866(1936, 2080), 1);
    add_background_object(create_dvwall1_482(2752, 2312), 1);
    add_background_object(create_dvwall1_482(2752, 2504), 1);
    add_background_object(create_dvwall1_482(2496, 2312), 1);
    add_background_object(create_dvwall1_482(2496, 2504), 1);
    add_background_object(create_dvwall1_482(3264, 2312), 1);
    add_background_object(create_dvwall1_482(3264, 2504), 1);
    add_background_object(create_dvwall1_482(3008, 2312), 1);
    add_background_object(create_dvwall1_482(3008, 2504), 1);
    add_background_object(create_dvbackwall_866(2984, 2104), 1);
    add_background_object(create_dvtree2_883(3648, 1984), 1);
    add_background_object(create_dvtree1_893(5592, 1984), 1);
    add_background_object(create_dvceilingoverlay3_1067(3520, 2232), 1);
    add_background_object(create_dvceilingoverlay3_1067(3888, 2192), 1);
    add_background_object(create_dvtree6_871(208, 1600), 1);
    add_background_object(create_dvbackrock1_882(296, 1864), 1);
    add_background_object(create_dvbackrock2_890(544, 2088), 1);
    add_background_object(create_dvbackrock3_881(864, 2152), 1);
    add_background_object(create_dvbackrock3_881(960, 2168), 1);
    add_background_object(create_dvbackrock3_881(1344, 2176), 1);
    add_background_object(create_dvbackrock1_882(1392, 2112), 1);
    add_background_object(create_dvbackrock3_881(1896, 2216), 1);
    add_background_object(create_dvbackrock3_881(1728, 2200), 1);
    add_background_object(create_dvbackrock2_890(1808, 2168), 1);
    add_background_object(create_dvbackrock3_881(2328, 2240), 1);
    add_background_object(create_dvtree5_879(2648, 2256), 1);
    add_background_object(create_dvtree5_879(1640, 2200), 1);
    add_background_object(create_dvtree5_879(3040, 2248), 1);
    add_background_object(create_dvtree5_879(3416, 2248), 1);
    add_background_object(create_dvbackrock3_881(2952, 2264), 1);
    add_background_object(create_dvtree6_871(3296, 1920), 1);
    add_background_object(create_dvtree6_871(3352, 1896), 1);
    add_background_object(create_dvtree6_871(3552, 1896), 1);
    add_background_object(create_dvbackrock1_882(3936, 2152), 1);
    add_background_object(create_dvbackrock3_881(4072, 2264), 1);
    add_background_object(create_dvbackrock3_881(3904, 2248), 1);
    add_background_object(create_dvbackrock2_890(3984, 2216), 1);
    add_background_object(create_dvbackrock3_881(3776, 2272), 1);
    add_background_object(create_dvbackrock3_881(4568, 2272), 1);
    add_background_object(create_dvtree1_893(4424, 2200), 1);
    add_background_object(create_dvtree3_897(4736, 2224), 1);
    add_background_object(create_dvtree1_893(4896, 2192), 1);
    add_background_object(create_dvtree1_893(5048, 2264), 1);
    add_background_object(create_dvtree3_897(5192, 2208), 1);
    add_background_object(create_dvbackrock3_881(5248, 2320), 1);
    add_background_object(create_dvgeyserback_980(6176, 2256), 1);
    add_background_object(create_dvgeyserback_980(6528, 2336), 1);
    add_background_object(create_dvgeyserback_980(6776, 2288), 1);
    add_background_object(create_dvwall3_873(10728, 1280), 2);
    add_background_object(create_dvtree5_879(15872, 2288), 2);
    add_background_object(create_dvtree5_879(15752, 2280), 2);
    add_background_object(create_dvtree1_893(15200, 2160), 2);
    add_background_object(create_dvtree5_879(15456, 2264), 2);
    add_background_object(create_dvtree5_879(15128, 2272), 2);
    add_background_object(create_dvtree5_879(14920, 2272), 2);
    add_background_object(create_dvtree5_879(14744, 2288), 2);
    add_background_object(create_dvtree5_879(14456, 2264), 2);
    add_background_object(create_dvtree3_897(14640, 2160), 2);
    add_background_object(create_dvbackrock3_881(14296, 2224), 2);
    add_background_object(create_dvtree3_897(14304, 2128), 2);
    add_background_object(create_dvtree5_879(14016, 2280), 2);
    add_background_object(create_dvtree5_879(13920, 2256), 2);
    add_background_object(create_dvtree1_893(13864, 2160), 2);
    add_background_object(create_dvtree4_874(9360, 2208), 2);
    add_background_object(create_dvtree2_883(8384, 2272), 2);
    add_background_object(create_dvbackrock2_890(14992, 2240), 2);
    add_background_object(create_dvbackrock2_890(14600, 2240), 2);
    add_background_object(create_dvbackrock1_882(14528, 2192), 2);
    add_background_object(create_dvbackrock2_890(14288, 2232), 2);
    add_background_object(create_dvbackrock3_881(14224, 2264), 2);
    add_background_object(create_dvbackrock3_881(14360, 2264), 2);
    add_background_object(create_dvtree6_871(14768, 1664), 2);
    add_background_object(create_dvtree6_871(14696, 1648), 2);
    add_background_object(create_dvtree6_871(14192, 1664), 2);
    add_background_object(create_dvtree6_871(14272, 1656), 2);
    add_background_object(create_dvtree6_871(14424, 1640), 2);
    add_background_object(create_dvtree6_871(14568, 1664), 2);
    add_background_object(create_dvtree6_871(13592, 1672), 2);
    add_background_object(create_dvtree6_871(13680, 1640), 2);
    add_background_object(create_dvtree6_871(13816, 1664), 2);
    add_background_object(create_dvtree6_871(13936, 1664), 2);
    add_background_object(create_dvtree6_871(13880, 1680), 2);
    add_background_object(create_dvtree6_871(14056, 1640), 2);
    add_background_object(create_dvbackrock2_890(13768, 2224), 2);
    add_background_object(create_dvbackrock1_882(13592, 2184), 2);
    add_background_object(create_dvwall1_482(14440, 1288), 2);
    add_background_object(create_levelbackdrop02_875(13608, 1672), 2);
    add_background_object(create_dvwall1_482(14952, 1288), 2);
    add_background_object(create_dvtree4_874(16, 1624), 2);
    add_background_object(create_dirt12_1069(5504, 2240), 2);
    add_background_object(create_dirt12_1069(3520, 2168), 2);
    add_background_object(create_dvwall1_482(3520, 2296), 2);
    add_background_object(create_dvwall1_482(2976, 1920), 2);
    add_background_object(create_dvwall1_482(2976, 1728), 2);
    add_background_object(create_dvwall1_482(2208, 1920), 2);
    add_background_object(create_dvwall1_482(9920, 2368), 2);
    add_background_object(create_dvwall1_482(9920, 2560), 2);
    add_background_object(create_dvwall1_482(9664, 2368), 2);
    add_background_object(create_dvwall1_482(9408, 2384), 2);
    add_background_object(create_dvwall1_482(9664, 2560), 2);
    add_background_object(create_dvwall1_482(9408, 2576), 2);
    add_background_object(create_dvwall1_482(9152, 2400), 2);
    add_background_object(create_dvwall1_482(8896, 2416), 2);
    add_background_object(create_dvwall1_482(9152, 2592), 2);
    add_background_object(create_dvwall1_482(8896, 2608), 2);
    add_background_object(create_dvwall1_482(8640, 2432), 2);
    add_background_object(create_dvwall1_482(8384, 2448), 2);
    add_background_object(create_dvwall1_482(8128, 2448), 2);
    add_background_object(create_dvwall1_482(7872, 2448), 2);
    add_background_object(create_dvwall1_482(7616, 2448), 2);
    add_background_object(create_dvwall1_482(7616, 2640), 2);
    add_background_object(create_dvwall1_482(7360, 2448), 2);
    add_background_object(create_dvwall1_482(7360, 2640), 2);
    add_background_object(create_dvwall1_482(7104, 2448), 2);
    add_background_object(create_dvwall1_482(7104, 2640), 2);
    add_background_object(create_dvwall1_482(6848, 2448), 2);
    add_background_object(create_dvwall1_482(6848, 2640), 2);
    add_background_object(create_dvwall1_482(6592, 2432), 2);
    add_background_object(create_dvwall1_482(6592, 2624), 2);
    add_background_object(create_dvwall1_482(6336, 2416), 2);
    add_background_object(create_dvwall1_482(6336, 2608), 2);
    add_background_object(create_dvwall1_482(6080, 2400), 2);
    add_background_object(create_dvwall1_482(6080, 2592), 2);
    add_background_object(create_dvwall1_482(5824, 2384), 2);
    add_background_object(create_dvwall1_482(5824, 2576), 2);
    add_background_object(create_dvwall1_482(5568, 2368), 2);
    add_background_object(create_dvwall1_482(5568, 2560), 2);
    add_background_object(create_dvwall1_482(5312, 2368), 2);
    add_background_object(create_dvwall1_482(5312, 2560), 2);
    add_background_object(create_dvwall1_482(5056, 2368), 2);
    add_background_object(create_dvwall1_482(5056, 2560), 2);
    add_background_object(create_dvwall1_482(4800, 2352), 2);
    add_background_object(create_dvwall1_482(4800, 2544), 2);
    add_background_object(create_dvwall1_482(4544, 2336), 2);
    add_background_object(create_dvwall1_482(4544, 2528), 2);
    add_background_object(create_dvwall1_482(4288, 2312), 2);
    add_background_object(create_dvwall1_482(4288, 2504), 2);
    add_background_object(create_dvwall1_482(4032, 2312), 2);
    add_background_object(create_dvwall1_482(4032, 2504), 2);
    add_background_object(create_dvwall1_482(2240, 2296), 2);
    add_background_object(create_dvwall1_482(2240, 2488), 2);
    add_background_object(create_dvwall1_482(1728, 2264), 2);
    add_background_object(create_dvwall1_482(1728, 2456), 2);
    add_background_object(create_dvwall1_482(1984, 2280), 2);
    add_background_object(create_dvwall1_482(1984, 2472), 2);
    add_background_object(create_dvwall1_482(1216, 2232), 2);
    add_background_object(create_dvwall1_482(1216, 2424), 2);
    add_background_object(create_dvwall1_482(1472, 2248), 2);
    add_background_object(create_dvwall1_482(1472, 2440), 2);
    add_background_object(create_dvwall1_482(704, 2200), 2);
    add_background_object(create_dvwall1_482(704, 2392), 2);
    add_background_object(create_dvwall1_482(960, 2216), 2);
    add_background_object(create_dvwall1_482(960, 2408), 2);
    add_background_object(create_dvwall6_885(264, 1912), 2);
    add_background_object(create_dvwall6_885(432, 2016), 2);
    add_background_object(create_dvwall6_885(512, 2096), 2);
    add_background_object(create_dvwall6_885(192, 1832), 2);
    add_background_object(create_dvwall1_482(448, 2192), 2);
    add_background_object(create_dvwall1_482(192, 2000), 2);
    add_background_object(create_levelbackdrop7_917(9736, 2344), 2);
    add_background_object(create_levelbackdrop7_917(9528, 2344), 2);
    add_background_object(create_levelbackdrop02_875(10792, 1216), 2);
    add_background_object(create_levelbackdrop7_917(9256, 2368), 2);
    add_background_object(create_levelbackdrop7_917(8920, 2392), 2);
    add_background_object(create_levelbackdrop7_917(8712, 2392), 2);
    add_background_object(create_levelbackdrop7_917(8408, 2408), 2);
    add_background_object(create_levelbackdrop7_917(8200, 2408), 2);
    add_background_object(create_levelbackdrop02_875(3296, 1920), 2);
    add_background_object(create_dvwall8_877(3232, 1984), 2);
    add_background_object(create_dvwall9_889(488, 1808), 2);
    add_background_object(create_dvwall9_889(360, 1688), 2);
    add_background_object(create_levelbackdrop02_875(256, 1552), 2);
    add_background_object(create_dvwall1_482(0, 1424), 2);
    add_background_object(create_levelbackdrop12_880(3648, 2120), 2);
    add_background_object(create_levelbackdrop13_884(3584, 2040), 2);
    add_background_object(create_levelbackdrop02_875(3584, 2104), 2);
    add_background_object(create_levelbackdrop02_875(3520, 2104), 2);
    add_background_object(create_levelbackdrop02_875(3520, 2040), 2);
    add_background_object(create_dvfloorcurvesmallright_888(3456, 2232), 2);
    add_background_object(create_dvwalledge1_887(12368, 2048), 2);
    add_background_object(create_dvwall1_482(12136, 2280), 2);
    add_background_object(create_dvwall1_482(11368, 2240), 2);
    add_background_object(create_dvwall1_482(11624, 2256), 2);
    add_background_object(create_dvwall1_482(11112, 2216), 2);
    add_background_object(create_dvwall1_482(10856, 2208), 2);
    add_background_object(create_dvtree3_897(11992, 2128), 2);
    add_background_object(create_dvbackrock2_890(12016, 2200), 2);
    add_background_object(create_dvtree6_871(11976, 1952), 2);
    add_background_object(create_dvtree6_871(12056, 1976), 2);
    add_background_object(create_dvwall1_482(12136, 2392), 2);
    add_background_object(create_dvwall1_482(11880, 2272), 2);
    add_background_object(create_dvwall1_482(10600, 2192), 2);
    add_background_object(create_dvwall1_482(12136, 1792), 2);
    add_background_object(create_dvwall1_482(12136, 1600), 2);
    add_background_object(create_dvwall1_482(12136, 1408), 2);
    add_background_object(create_dvbackrock2_890(11808, 1200), 2);
    add_background_object(create_dvtree5_879(12008, 1240), 2);
    add_background_object(create_dvtree5_879(11920, 1224), 2);
    add_background_object(create_dvtree6_871(10896, 1968), 2);
    add_background_object(create_dvtree6_871(11008, 1976), 2);
    add_background_object(create_dvtree6_871(10952, 2000), 2);
    add_background_object(create_dvbackrock1_882(10576, 2056), 2);
    add_background_object(create_dvbackrock3_881(10672, 2136), 2);
    add_background_object(create_dvtree1_893(10416, 2024), 2);
    add_background_object(create_dvtree1_893(10096, 2032), 2);
    add_background_object(create_dvtree3_897(10192, 1984), 2);
    add_background_object(create_dvbackrock2_890(10208, 2064), 2);
    add_background_object(create_dvwall1_482(10344, 2176), 2);
    add_background_object(create_dvwall1_482(10088, 2160), 2);
    add_background_object(create_dvbackrock3_881(13360, 1224), 2);
    add_background_object(create_dvtree2_883(13080, 1104), 2);
    add_background_object(create_dvtree1_893(12280, 1112), 2);
    add_background_object(create_dvbackrock2_890(12208, 1184), 2);
    add_background_object(create_dvbackrock3_881(12272, 1232), 2);
    add_background_object(create_dvwall1_482(13160, 1480), 2);
    add_background_object(create_dvwall1_482(12904, 1480), 2);
    add_background_object(create_dvwall1_482(12648, 1480), 2);
    add_background_object(create_dvwall1_482(12392, 1480), 2);
    add_background_object(create_dvtree2_883(12568, 1048), 2);
    add_background_object(create_dvwall9_889(12808, 552), 2);
    add_background_object(create_dvbackrock3_881(12088, 360), 2);
    add_background_object(create_dvtree4_874(12928, 416), 2);
    add_background_object(create_dvbackrock2_890(12912, 456), 2);
    add_background_object(create_dvtree2_883(12736, 376), 2);
    add_background_object(create_dvbackrock1_882(12248, 224), 2);
    add_background_object(create_dvtree2_883(12416, 288), 2);
    add_background_object(create_levelbackdrop12_880(12448, 424), 2);
    add_background_object(create_levelbackdrop02_875(12280, 408), 2);
    add_background_object(create_levelbackdrop02_875(12280, 344), 2);
    add_background_object(create_levelbackdrop02_875(12216, 344), 2);
    add_background_object(create_dvwall1_482(12008, 408), 2);
    add_background_object(create_dvwall6_885(12344, 344), 2);
    add_background_object(create_dvwall8_877(12440, 472), 2);
    add_background_object(create_dvtree1_893(12864, 1088), 2);
    add_background_object(create_dvbackrock1_882(12536, 1120), 2);
    add_background_object(create_dvbackrock1_882(12608, 1192), 2);
    add_background_object(create_dvbackrock1_882(12456, 1160), 2);
    add_background_object(create_dvtree5_879(12376, 1232), 2);
    add_background_object(create_dvhalfpipe3_1070(7840, 2256), 2);
    add_background_object(create_dvhalfpipe1_1071(7200, 2256), 2);
    add_background_object(create_dvbackwall_866(-168, 1632), 2);
    add_background_object(create_dvtree6_871(-64, 1656), 2);
    add_background_object(create_dvhalfpipe2_1072(7712, 2256), 2);
    add_background_object(create_dvrockedge2_904(7328, 2440), 2);
    add_background_object(create_dvrockslope2_910(7968, 2440), 2);
    add_background_object(create_dvwall1_482(-64, 1808), 2);
    add_background_object(create_dvrockslope4_901(-32, 1784), 2);
    add_background_object(create_levelbackdrop02_875(0, 1616), 2);
    add_background_object(create_levelbackdrop02_875(64, 1616), 2);
    add_background_object(create_dvrockslope1_896(96, 1792), 2);
    add_background_object(create_dvwall4_485(0, 1520), 2);
    add_background_object(create_dvrockslope1_896(-96, 1784), 2);
    add_background_object(create_dvwalledge2_978(112, 1608), 2);
    add_background_object(create_dvrockceiling_891(0, 1656), 2);
    add_background_object(create_dvceilingoverlay_915(0, 1656), 2);
    add_background_object(create_dvrockslope2_910(7200, 2440), 2);
    add_background_object(create_dvrockedge1_905(7936, 2440), 2);
    add_background_object(create_dvrockedge2_904(11632, 696), 2);
    add_background_object(create_dvrockedge1_905(11536, 696), 2);
    add_background_object(create_geyserbase2_987(11568, 688), 2);
    add_background_object(create_dvladder_914(11448, 760), 2);
    add_background_object(create_switchbase_986(11800, -56), 2);
    add_background_object(create_dvwall1_482(12136, 1288), 2);
    add_background_object(create_dvceilingcurveleft_979(12392, 1864), 2);
    add_background_object(create_dvceilingcurveright_984(13032, 1864), 2);
    add_background_object(create_dvfloorcurveright_907(13032, 2144), 2);
    add_background_object(create_dvwall1_482(12392, 2272), 2);
    add_background_object(create_dvwall1_482(12392, 2512), 2);
    add_background_object(create_dvwall1_482(12648, 2272), 2);
    add_background_object(create_dvwall1_482(12648, 2464), 2);
    add_background_object(create_dvwall1_482(12904, 2272), 2);
    add_background_object(create_dvwall1_482(12904, 2464), 2);
    add_background_object(create_dvwall1_482(13160, 2320), 2);
    add_background_object(create_dvwall1_482(13160, 2464), 2);
    add_background_object(create_dvwall1_482(13160, 1936), 2);
    add_background_object(create_dvwall1_482(13160, 2128), 2);
    add_background_object(create_dvwall1_482(13160, 1744), 2);
    add_background_object(create_dvwall1_482(12904, 1672), 2);
    add_background_object(create_dvwall1_482(12648, 1672), 2);
    add_background_object(create_dvwall1_482(12392, 1672), 2);
    add_background_object(create_dvwall1_482(13160, 1288), 2);
    add_background_object(create_dvwall1_482(13416, 1288), 2);
    add_background_object(create_dvwall1_482(13672, 1288), 2);
    add_background_object(create_dvwall1_482(13928, 1288), 2);
    add_background_object(create_dvwall1_482(14184, 1288), 2);
    add_background_object(create_dvwall1_482(13416, 1480), 2);
    add_background_object(create_dvwall1_482(13416, 1744), 2);
    add_background_object(create_dvwall1_482(13416, 1936), 2);
    add_background_object(create_dvwall1_482(13416, 2128), 2);
    add_background_object(create_dvwall1_482(13416, 2320), 2);
    add_background_object(create_dvwall1_482(13416, 2512), 2);
    add_background_object(create_dvwall1_482(13160, 1552), 2);
    add_background_object(create_dvwall6_982(12328, 1288), 2);
    add_background_object(create_dvwall4_485(12352, 1752), 2);
    add_background_object(create_dvwall4_485(13064, 1752), 2);
    add_background_object(create_dvrockslope4_900(12648, 2264), 2);
    add_background_object(create_dvrockslope4_901(12776, 2264), 2);
    add_background_object(create_dvrockedge2_904(13032, 2272), 2);
    add_background_object(create_dvwalledge1_887(13160, 1920), 2);
    add_background_object(create_dvwall4_485(13152, 1832), 2);
    add_background_object(create_dvwalledge1_887(13160, 1984), 2);
    add_background_object(create_dvwalledge1_887(13160, 2048), 2);
    add_background_object(create_dvwalledge1_887(13160, 2112), 2);
    add_background_object(create_dvwalledge1_887(13160, 2128), 2);
    add_background_object(create_dvwall6_982(13152, 2176), 2);
    add_background_object(create_dvwall6_982(13072, 2256), 2);
    add_background_object(create_dvrockslope4_900(12168, 1272), 2);
    add_background_object(create_dvbackrock3_881(12536, 1232), 2);
    add_background_object(create_dvbackrock3_881(12680, 1256), 2);
    add_background_object(create_dvbackrock2_890(12944, 1192), 2);
    add_background_object(create_dvbackrock3_881(13008, 1240), 2);
    add_background_object(create_dvbackrock1_882(12864, 1160), 2);
    add_background_object(create_dvtree5_879(12816, 1232), 2);
    add_background_object(create_dirt10_1073(12264, 472), 2);
    add_background_object(create_dirt10_1073(12936, 552), 2);
    add_background_object(create_dvwall8_877(12400, 600), 2);
    add_background_object(create_dirt10_1073(12136, 600), 2);
    add_background_object(create_dvwall6_982(12296, 600), 2);
    add_background_object(create_dvwall6_982(12288, 528), 2);
    add_background_object(create_dvwall9_889(12008, 600), 2);
    add_background_object(create_dvwall4_485(12008, 496), 2);
    add_background_object(create_dvwall4_485(12112, 496), 2);
    add_background_object(create_dvwalledge2_978(12512, 536), 2);
    add_background_object(create_dvrockedge2_904(12536, 456), 2);
    add_background_object(create_dvwall6_982(12400, 488), 2);
    add_background_object(create_dvrockceiling_891(12096, 704), 2);
    add_background_object(create_dvrockceiling_891(12192, 704), 2);
    add_background_object(create_dvrockceiling_891(12296, 704), 2);
    add_background_object(create_dvrockslope9_902(12408, 360), 2);
    add_background_object(create_dvrockslope5_912(12344, 328), 2);
    add_background_object(create_dvwall4_485(12232, 376), 2);
    add_background_object(create_dvwall4_485(12192, 344), 2);
    add_background_object(create_dvrockslope4_900(12216, 328), 2);
    add_background_object(create_dvwalledge1_887(12192, 360), 2);
    add_background_object(create_dvrockedge1_905(12184, 336), 2);
    add_background_object(create_dvrockedge2_904(12160, 400), 2);
    add_background_object(create_dvrockslope4_901(12032, 392), 2);
    add_background_object(create_dvrockedge1_905(12000, 392), 2);
    add_background_object(create_dvrockslope4_900(12840, 536), 2);
    add_background_object(create_dvrockedge1_905(12808, 544), 2);
    add_background_object(create_dvrockslope4_901(12400, 2264), 2);
    add_background_object(create_dvrockslope4_901(12968, 536), 2);
    add_background_object(create_dvrockceiling_891(12936, 664), 2);
    add_background_object(create_dvrockslope1_896(13096, 544), 2);
    add_background_object(create_dvrockceiling_891(13064, 664), 2);
    add_background_object(create_dvwall8_877(13192, 552), 2);
    add_background_object(create_dvrockedge2_904(13288, 536), 2);
    add_background_object(create_dvrockslope4_900(13160, 536), 2);
    add_background_object(create_geyserbase2_987(12520, 2264), 2);
    add_background_object(create_geyserbase2_987(12968, 2264), 2);
    add_background_object(create_dvrockslope1_896(12904, 2272), 2);
    add_background_object(create_dvrockslope1_896(12584, 2272), 2);
    add_background_object(create_dvwall6_982(12360, 2432), 2);
    add_background_object(create_dvwall4_485(12464, 2424), 2);
    add_background_object(create_dvwall6_982(12544, 2440), 2);
    add_background_object(create_dvwall6_982(13088, 2368), 2);
    add_background_object(create_dvwall1_482(12904, 1288), 2);
    add_background_object(create_dvwall1_482(12648, 1288), 2);
    add_background_object(create_dvwall1_482(12392, 1288), 2);
    add_background_object(create_dvrockslope4_900(12744, 1272), 2);
    add_background_object(create_dvrockslope4_900(13000, 1272), 2);
    add_background_object(create_dvrockslope4_901(12552, 1272), 2);
    add_background_object(create_dvrockslope4_901(12872, 1272), 2);
    add_background_object(create_dvrockslope1_896(12680, 1280), 2);
    add_background_object(create_dvwall6_982(12328, 1288), 2);
    add_background_object(create_dvrockslope4_900(12424, 1272), 2);
    add_background_object(create_dvwall4_485(13208, 1472), 2);
    add_background_object(create_dvwall6_982(12328, 1400), 2);
    add_background_object(create_dvwall6_982(12320, 1520), 2);
    add_background_object(create_dvwall4_485(13104, 1400), 2);
    add_background_object(create_dvwall4_485(13112, 1520), 2);
    add_background_object(create_dvwall4_485(13288, 1488), 2);
    add_background_object(create_dvrockslope4_901(13128, 1272), 2);
    add_background_object(create_dvwall4_485(12328, 1640), 2);
    add_background_object(create_dvwall4_485(13096, 1640), 2);
    add_background_object(create_dvrockslope4_900(13256, 1272), 2);
    add_background_object(create_dvrockslope4_901(12296, 1272), 2);
    add_background_object(create_dvwall4_485(13312, 1672), 2);
    add_background_object(create_dvrockslope2_910(13640, 1272), 2);
    add_background_object(create_dvrockslope2_910(13768, 1272), 2);
    add_background_object(create_dvrockslope2_910(13896, 1272), 2);
    add_background_object(create_dvrockslope2_910(14024, 1272), 2);
    add_background_object(create_dvrockslope2_910(14152, 1272), 2);
    add_background_object(create_dvrockslope2_910(14280, 1272), 2);
    add_background_object(create_dvrockslope2_910(14408, 1272), 2);
    add_background_object(create_dvrockslope2_910(15048, 1272), 2);
    add_background_object(create_dvrockslope2_910(13512, 1272), 2);
    add_background_object(create_dvrockslope2_910(13384, 1272), 2);
    add_background_object(create_dvwall4_485(13352, 1528), 2);
    add_background_object(create_dvwall4_485(13360, 1616), 2);
    add_background_object(create_dvwall4_485(13408, 1656), 2);
    add_background_object(create_dvwall4_485(13496, 1640), 2);
    add_background_object(create_separatormasterobjects2_12(-480, 152), 2);
    add_background_object(create_dvwall1_482(10856, 1216), 2);
    add_background_object(create_dvwall1_482(10856, 1408), 2);
    add_background_object(create_dvwall1_482(10856, 1600), 2);
    add_background_object(create_dvwall1_482(10856, 1792), 2);
    add_background_object(create_dvwall1_482(11880, 1792), 2);
    add_background_object(create_dvwall1_482(11880, 1408), 2);
    add_background_object(create_dvwall1_482(11880, 1600), 2);
    add_background_object(create_dvrockceiling_891(11880, 1960), 2);
    add_background_object(create_dvrockceiling_891(12008, 1960), 2);
    add_background_object(create_dvwall1_482(11880, 1288), 2);
    add_background_object(create_dvwall1_482(11624, 1792), 2);
    add_background_object(create_dvwall1_482(11624, 1216), 2);
    add_background_object(create_dvwall1_482(11624, 1408), 2);
    add_background_object(create_dvwall1_482(11624, 1600), 2);
    add_background_object(create_dvrockceiling_891(10856, 1960), 2);
    add_background_object(create_dvrockceiling_891(10984, 1960), 2);
    add_background_object(create_dvwall1_482(10088, 2312), 2);
    add_background_object(create_dvwall4_485(10216, 2288), 2);
    add_background_object(create_dvwall4_485(10112, 2264), 2);
    add_background_object(create_dvwall1_482(10344, 2312), 2);
    add_background_object(create_dvwall4_485(10328, 2176), 2);
    add_background_object(create_dvwall4_485(10480, 2256), 2);
    add_background_object(create_dvwall6_982(10352, 2272), 2);
    add_background_object(create_dvwall6_982(12112, 1416), 2);
    add_background_object(create_dvwall6_982(11976, 1432), 2);
    add_background_object(create_dvwall4_485(11856, 1400), 2);
    add_background_object(create_dvrockslope4_901(12040, 1272), 2);
    add_background_object(create_dvwalledge2_978(11864, 1216), 2);
    add_background_object(create_dvwalledge2_978(11864, 1264), 2);
    add_background_object(create_dvwall4_485(11840, 1288), 2);
    add_background_object(create_dvrockedge1_905(11880, 1280), 2);
    add_background_object(create_dvrockslope4_900(11912, 1272), 2);
    add_background_object(create_dvrockedge2_904(11848, 1200), 2);
    add_background_object(create_dvrockslope4_900(11720, 1200), 2);
    add_background_object(create_dvrockceiling_891(12136, 1968), 2);
    add_background_object(create_dvwall1_482(10600, 2312), 2);
    add_background_object(create_dvwall1_482(11880, 2312), 2);
    add_background_object(create_dvwall1_482(11880, 2504), 2);
    add_background_object(create_dvwall6_982(12032, 2296), 2);
    add_background_object(create_dvwall6_982(10784, 2208), 2);
    add_background_object(create_dvwall6_982(10544, 2184), 2);
    add_background_object(create_dvwall6_982(10600, 2296), 2);
    add_background_object(create_dvwall6_982(10704, 2288), 2);
    add_background_object(create_dvwall6_982(11920, 2296), 2);
    add_background_object(create_dvwall1_482(12136, 2504), 2);
    add_background_object(create_dvwall6_982(12096, 2400), 2);
    add_background_object(create_dvwall6_982(12288, 2464), 2);
    add_background_object(create_dvwall6_982(12184, 2480), 2);
    add_background_object(create_dvwall1_482(10856, 2312), 2);
    add_background_object(create_dvwall1_482(11112, 2312), 2);
    add_background_object(create_dvwall6_982(10904, 2272), 2);
    add_background_object(create_dvwall6_982(11024, 2288), 2);
    add_background_object(create_dvwall6_982(11088, 2216), 2);
    add_background_object(create_dvwall6_982(11192, 2296), 2);
    add_background_object(create_dvwall1_482(11368, 2312), 2);
    add_background_object(create_dvwall1_482(11624, 2312), 2);
    add_background_object(create_dvwall6_982(11288, 2232), 2);
    add_background_object(create_dvwall6_982(11400, 2288), 2);
    add_background_object(create_dvwall6_982(11520, 2296), 2);
    add_background_object(create_dvwall6_982(11632, 2288), 2);
    add_background_object(create_dvwall1_482(11624, 2504), 2);
    add_background_object(create_dvwall1_482(11368, 2504), 2);
    add_background_object(create_dvwall6_982(11752, 2296), 2);
    add_background_object(create_dvwall6_982(11840, 2264), 2);
    add_background_object(create_dvwall6_982(12152, 2368), 2);
    add_background_object(create_dvrockceiling_891(11752, 1960), 2);
    add_background_object(create_dvrockceiling_891(11624, 1960), 2);
    add_background_object(create_dvrockslope4_900(10952, 1192), 2);
    add_background_object(create_dvrockslope4_901(10824, 1192), 2);
    add_background_object(create_dvwall1_482(11112, 1600), 2);
    add_background_object(create_dvwall1_482(11112, 1792), 2);
    add_background_object(create_dvrockceiling_891(11112, 1960), 2);
    add_background_object(create_dvrockceiling_891(11240, 1960), 2);
    add_background_object(create_dvrockslope4_900(11208, 1576), 2);
    add_background_object(create_dvwall1_482(11368, 1600), 2);
    add_background_object(create_dvwall1_482(11368, 1792), 2);
    add_background_object(create_dvrockceiling_891(11368, 1960), 2);
    add_background_object(create_dvrockceiling_891(11496, 1960), 2);
    add_background_object(create_dvrockslope4_900(11464, 1576), 2);
    add_background_object(create_dvrockslope4_901(11336, 1576), 2);
    add_background_object(create_dvrockslope1_896(11656, 1208), 2);
    add_background_object(create_dvwalledge1_887(11624, 1216), 2);
    add_background_object(create_dvrockedge1_905(11624, 1208), 2);
    add_background_object(create_dvwalledge1_887(11624, 1280), 2);
    add_background_object(create_dvwalledge1_887(11624, 1344), 2);
    add_background_object(create_dvwalledge1_887(11624, 1408), 2);
    add_background_object(create_dvwalledge1_887(11624, 1472), 2);
    add_background_object(create_dvwalledge1_887(11624, 1536), 2);
    add_background_object(create_dvrockedge2_904(11592, 1576), 2);
    add_background_object(create_dvwall9_889(12264, 1984), 2);
    add_background_object(create_dvwall4_485(12264, 1880), 2);
    add_background_object(create_dvwalledge2_978(12376, 2048), 2);
    add_background_object(create_dvwalledge2_978(12376, 1984), 2);
    add_background_object(create_dvrockslope4_900(12296, 2264), 2);
    add_background_object(create_dvrockslope4_901(12168, 2264), 2);
    add_background_object(create_dvhalfpipe2_1072(7584, 2256), 2);
    add_background_object(create_dvhalfpipe2_1072(7456, 2256), 2);
    add_background_object(create_dvrockslope9_902(544, 2080), 2);
    add_background_object(create_dvrockedge2_904(3808, 2152), 2);
    add_background_object(create_dvrockslope1_896(3744, 2152), 2);
    add_background_object(create_dvrockslope5_912(3552, 2024), 2);
    add_background_object(create_dvrockslope9_902(3616, 2056), 2);
    add_background_object(create_dvwalledge1_887(3520, 2040), 2);
    add_background_object(create_dvwalledge1_887(3520, 2104), 2);
    add_background_object(create_dvrockedge1_905(3520, 2024), 2);
    add_background_object(create_levelbackdrop12_880(5696, 2192), 2);
    add_background_object(create_levelbackdrop13_884(5632, 2120), 2);
    add_background_object(create_levelbackdrop02_875(5632, 2176), 2);
    add_background_object(create_levelbackdrop02_875(5504, 2176), 2);
    add_background_object(create_levelbackdrop02_875(5504, 2112), 2);
    add_background_object(create_levelbackdrop02_875(5568, 2112), 2);
    add_background_object(create_levelbackdrop02_875(5568, 2176), 2);
    add_background_object(create_dvfloorcurvesmallright_888(5440, 2304), 2);
    add_background_object(create_dvrockedge2_904(5792, 2224), 2);
    add_background_object(create_dvrockslope9_902(5664, 2128), 2);
    add_background_object(create_dvwalledge1_887(5504, 2112), 2);
    add_background_object(create_dvwalledge1_887(5504, 2176), 2);
    add_background_object(create_dvrockslope2_910(5792, 2368), 2);
    add_background_object(create_dvrockslope2_910(7072, 2440), 2);
    add_background_object(create_dvwall1_482(672, 1648), 2);
    add_background_object(create_dirt13_1074(672, 1840), 2);
    add_background_object(create_dirt13_1074(928, 1856), 2);
    add_background_object(create_dvwall4_485(880, 1904), 2);
    add_background_object(create_dvwall1_482(928, 1664), 2);
    add_background_object(create_dvwall4_485(880, 1800), 2);
    add_background_object(create_dirt13_1074(1184, 1872), 2);
    add_background_object(create_dvwall4_485(1136, 1920), 2);
    add_background_object(create_dvwall1_482(1184, 1680), 2);
    add_background_object(create_dvwall4_485(1136, 1816), 2);
    add_background_object(create_dirt13_1074(1440, 1888), 2);
    add_background_object(create_dvwall4_485(1392, 1936), 2);
    add_background_object(create_dvwall1_482(1440, 1696), 2);
    add_background_object(create_dvwall4_485(1392, 1832), 2);
    add_background_object(create_dirt13_1074(1696, 1904), 2);
    add_background_object(create_dvwall4_485(1648, 1952), 2);
    add_background_object(create_dvwall1_482(1696, 1712), 2);
    add_background_object(create_dvwall4_485(1648, 1848), 2);
    add_background_object(create_dirt13_1074(1952, 1920), 2);
    add_background_object(create_dvwall4_485(1904, 1968), 2);
    add_background_object(create_dvwall1_482(1952, 1728), 2);
    add_background_object(create_dvwall4_485(1904, 1864), 2);
    add_background_object(create_dvwall1_482(3232, 1728), 2);
    add_background_object(create_dvwall4_485(3192, 1888), 2);
    add_background_object(create_dvwall9_889(544, 1888), 2);
    add_background_object(create_dvwall9_889(416, 1760), 2);
    add_background_object(create_dvwall9_889(288, 1632), 2);
    add_background_object(create_dvwall3_873(544, 1696), 2);
    add_background_object(create_dvwall3_873(416, 1568), 2);
    add_background_object(create_dvwall3_873(544, 1504), 2);
    add_background_object(create_dvwall1_482(288, 1440), 2);
    add_background_object(create_dvwall4_485(200, 1488), 2);
    add_background_object(create_dvwall4_485(304, 1536), 2);
    add_background_object(create_dvwall4_485(376, 1632), 2);
    add_background_object(create_dvwall4_485(504, 1760), 2);
    add_background_object(create_dvwall6_982(448, 1672), 2);
    add_background_object(create_dvwall4_485(440, 1568), 2);
    add_background_object(create_dvwall6_982(576, 1816), 2);
    add_background_object(create_dvwall4_485(648, 1888), 2);
    add_background_object(create_dvwall4_485(608, 1688), 2);
    add_background_object(create_dvwall1_482(3488, 1728), 2);
    add_background_object(create_dvwall1_482(3744, 1728), 2);
    add_background_object(create_dvwall1_482(4000, 1728), 2);
    add_background_object(create_dvwall4_485(2112, 1984), 2);
    add_background_object(create_dvwall4_485(3232, 1840), 2);
    add_background_object(create_dvrockslope4_901(4320, 2296), 2);
    add_background_object(create_dvrockslope2_910(7328, 2440), 2);
    add_background_object(create_dvrockslope2_910(7456, 2440), 2);
    add_background_object(create_dvrockslope2_910(7584, 2440), 2);
    add_background_object(create_dvrockslope2_910(7712, 2440), 2);
    add_background_object(create_dvrockslope2_910(7840, 2440), 2);
    add_background_object(create_dvrockslope2_910(8224, 2440), 2);
    add_background_object(create_dvrockslope4_901(6944, 2432), 2);
    add_background_object(create_dvrockslope2_910(8096, 2440), 2);
    add_background_object(create_dvrockslope2_910(8352, 2440), 2);
    add_background_object(create_dvrockslope4_900(8480, 2432), 2);
    add_background_object(create_levelbackdrop7_917(9064, 2368), 2);
    add_background_object(create_levelbackdrop7_917(9064, 2344), 2);
    add_background_object(create_dvrockslope4_900(9760, 2352), 2);
    add_background_object(create_dvwalledge1_887(10088, 2152), 2);
    add_background_object(create_dvwalledge1_887(10088, 2216), 2);
    add_background_object(create_dvwalledge1_887(10088, 2280), 2);
    add_background_object(create_dvrockslope2_910(9888, 2352), 2);
    add_background_object(create_dvfloorcurveright_907(9960, 2224), 2);
    add_background_object(create_dvwall9_889(10728, 1856), 2);
    add_background_object(create_dvwall3_873(10728, 1664), 2);
    add_background_object(create_dvwall6_982(10776, 1760), 2);
    add_background_object(create_dvwall4_485(10792, 1264), 2);
    add_background_object(create_levelbackdrop02_875(10728, 1216), 2);
    add_background_object(create_dvwalledge1_887(10728, 1208), 2);
    add_background_object(create_dvwalledge1_887(10728, 1272), 2);
    add_background_object(create_dvwalledge1_887(10728, 1784), 2);
    add_background_object(create_dvrockslope1_896(10760, 1192), 2);
    add_background_object(create_dvrockedge1_905(10728, 1192), 2);
    add_background_object(create_dvwalledge1_887(10728, 1800), 2);
    add_background_object(create_dvwall1_482(2976, 1536), 2);
    add_background_object(create_dvwall1_482(3232, 1536), 2);
    add_background_object(create_dvwall1_482(3488, 1536), 2);
    add_background_object(create_dvwall1_482(3744, 1536), 2);
    add_background_object(create_dvwall1_482(4000, 1536), 2);
    add_background_object(create_dvwall1_482(-64, 2000), 2);
    add_background_object(create_dvwall1_482(192, 2192), 2);
    add_background_object(create_dvwall1_482(-64, 2192), 2);
    add_background_object(create_dvwall4_485(416, 2096), 2);
    add_background_object(create_dvwall6_982(160, 1888), 2);
    add_background_object(create_dvwall6_982(344, 2000), 2);
    add_background_object(create_dvrockslope5_912(416, 1984), 2);
    add_background_object(create_dvrockslope9_902(288, 1888), 2);
    add_background_object(create_dvrockslope5_912(160, 1792), 2);
    add_background_object(create_dvwall1_482(448, 2384), 2);
    add_background_object(create_dvwall1_482(192, 2384), 2);
    add_background_object(create_dvwall1_482(8128, 2640), 2);
    add_background_object(create_dvwall1_482(7872, 2640), 2);
    add_background_object(create_dvwall1_482(8640, 2624), 2);
    add_background_object(create_dvwall1_482(8384, 2640), 2);
    add_background_object(create_dvwall1_482(10088, 2504), 2);
    add_background_object(create_dvwall1_482(10344, 2504), 2);
    add_background_object(create_dvwall4_485(680, 2200), 2);
    add_background_object(create_dvrockslope4_901(672, 2176), 2);
    add_background_object(create_dvwall6_982(896, 2208), 2);
    add_background_object(create_dvrockslope4_901(800, 2184), 2);
    add_background_object(create_dvrockslope4_901(928, 2192), 2);
    add_background_object(create_dvwall4_485(920, 2328), 2);
    add_background_object(create_dvwall6_982(640, 2304), 2);
    add_background_object(create_dvwall4_485(1176, 2232), 2);
    add_background_object(create_dvwall6_982(1392, 2240), 2);
    add_background_object(create_dvwall4_485(1416, 2360), 2);
    add_background_object(create_dvwall6_982(1136, 2336), 2);
    add_background_object(create_dvrockslope4_901(1440, 2224), 2);
    add_background_object(create_dvrockslope4_901(1312, 2216), 2);
    add_background_object(create_dvrockslope4_901(1184, 2208), 2);
    add_background_object(create_dvrockslope4_901(1056, 2200), 2);
    add_background_object(create_dvwall4_485(1680, 2256), 2);
    add_background_object(create_dvwall6_982(1896, 2264), 2);
    add_background_object(create_dvwall4_485(1920, 2384), 2);
    add_background_object(create_dvwall6_982(1640, 2360), 2);
    add_background_object(create_dvrockslope4_901(1952, 2256), 2);
    add_background_object(create_dvrockslope4_901(1824, 2248), 2);
    add_background_object(create_dvrockslope4_901(1696, 2240), 2);
    add_background_object(create_dvrockslope4_901(1568, 2232), 2);
    add_background_object(create_dvwall4_485(2200, 2296), 2);
    add_background_object(create_dvwall6_982(2416, 2304), 2);
    add_background_object(create_dvwall4_485(2440, 2424), 2);
    add_background_object(create_dvwall6_982(2160, 2400), 2);
    add_background_object(create_dvrockslope4_901(2336, 2280), 2);
    add_background_object(create_dvrockslope4_901(2208, 2272), 2);
    add_background_object(create_dvrockslope4_901(2080, 2264), 2);
    add_background_object(create_dvwall6_982(3488, 2296), 2);
    add_background_object(create_dvrockslope4_901(2464, 2288), 2);
    add_background_object(create_dvrockedge2_904(3488, 2296), 2);
    add_background_object(create_dvwall6_982(3600, 2328), 2);
    add_background_object(create_dvwall4_485(3704, 2312), 2);
    add_background_object(create_dvrockslope2_910(3808, 2296), 2);
    add_background_object(create_dvrockedge1_905(3776, 2296), 2);
    add_background_object(create_dvwall4_485(4496, 2328), 2);
    add_background_object(create_dvwall6_982(4712, 2336), 2);
    add_background_object(create_dvwall4_485(4736, 2456), 2);
    add_background_object(create_dvwall6_982(4456, 2432), 2);
    add_background_object(create_dvrockslope4_901(4832, 2328), 2);
    add_background_object(create_dvrockslope4_901(4704, 2320), 2);
    add_background_object(create_dvrockslope4_901(4576, 2312), 2);
    add_background_object(create_dvrockslope4_901(4448, 2304), 2);
    add_background_object(create_dvwall4_485(5016, 2360), 2);
    add_background_object(create_dvwall6_982(5232, 2368), 2);
    add_background_object(create_dvwall4_485(5256, 2488), 2);
    add_background_object(create_dvwall6_982(4976, 2464), 2);
    add_background_object(create_dvrockslope4_901(5344, 2360), 2);
    add_background_object(create_dvrockslope4_901(5216, 2352), 2);
    add_background_object(create_dvrockslope4_901(5088, 2344), 2);
    add_background_object(create_dvrockslope4_901(4960, 2336), 2);
    add_background_object(create_dvwall4_485(5472, 2392), 2);
    add_background_object(create_dvrockedge2_904(5472, 2368), 2);
    add_background_object(create_dvwall6_982(5648, 2376), 2);
    add_background_object(create_dvrockedge1_905(5760, 2368), 2);
    add_background_object(create_dvwall6_982(6024, 2392), 2);
    add_background_object(create_dvrockslope4_901(6048, 2376), 2);
    add_background_object(create_dvrockslope4_901(5920, 2368), 2);
    add_background_object(create_dvwall4_485(6040, 2512), 2);
    add_background_object(create_dvwall6_982(6256, 2400), 2);
    add_background_object(create_dvwall4_485(6280, 2520), 2);
    add_background_object(create_dvwall4_485(6560, 2424), 2);
    add_background_object(create_dvwall6_982(6520, 2528), 2);
    add_background_object(create_dvrockslope4_901(6560, 2408), 2);
    add_background_object(create_dvrockslope4_901(6432, 2400), 2);
    add_background_object(create_dvrockslope4_901(6304, 2392), 2);
    add_background_object(create_dvrockslope4_901(6176, 2384), 2);
    add_background_object(create_dvwall6_982(6784, 2440), 2);
    add_background_object(create_dvwall4_485(6808, 2560), 2);
    add_background_object(create_dvrockslope4_901(6816, 2424), 2);
    add_background_object(create_dvrockslope4_901(6688, 2416), 2);
    add_background_object(create_dvwall6_982(8600, 2456), 2);
    add_background_object(create_dvrockslope4_900(8608, 2424), 2);
    add_background_object(create_dvwall6_982(8856, 2432), 2);
    add_background_object(create_dvrockslope4_900(8864, 2408), 2);
    add_background_object(create_dvrockslope4_900(8736, 2416), 2);
    add_background_object(create_dvwall6_982(9104, 2424), 2);
    add_background_object(create_dvwall6_982(9360, 2400), 2);
    add_background_object(create_dvrockslope4_900(8992, 2400), 2);
    add_background_object(create_dvrockslope4_900(9376, 2376), 2);
    add_background_object(create_dvrockslope4_900(9248, 2384), 2);
    add_background_object(create_dvrockslope4_900(9120, 2392), 2);
    add_background_object(create_dvwall6_982(9616, 2384), 2);
    add_background_object(create_dvwall6_982(10056, 2368), 2);
    add_background_object(create_dvrockedge2_904(10064, 2352), 2);
    add_background_object(create_dvrockslope1_896(10008, 2352), 2);
    add_background_object(create_dvrockslope4_900(9632, 2360), 2);
    add_background_object(create_dvrockslope4_900(9504, 2368), 2);
    add_background_object(create_dvwall6_982(10016, 2472), 2);
    add_background_object(create_dvwall6_982(9600, 2496), 2);
    add_background_object(create_dvrockslope2_910(3232, 2296), 2);
    add_background_object(create_dvrockslope2_910(3936, 2296), 2);
    add_background_object(create_dvrockslope2_910(4064, 2296), 2);
    add_background_object(create_dvrockslope2_910(4192, 2296), 2);
    add_background_object(create_dvrockslope2_910(2848, 2296), 2);
    add_background_object(create_dvrockslope2_910(2976, 2296), 2);
    add_background_object(create_dvrockslope2_910(3104, 2296), 2);
    add_background_object(create_dvrockslope2_910(3360, 2296), 2);
    add_background_object(create_dvrockslope2_910(2592, 2296), 2);
    add_background_object(create_dvrockslope2_910(2720, 2296), 2);
    add_background_object(create_dvwall1_482(2208, 1728), 2);
    add_background_object(create_dvwall1_482(2464, 1920), 2);
    add_background_object(create_dvwall1_482(2464, 1728), 2);
    add_background_object(create_dvwall4_485(3136, 1984), 2);
    add_background_object(create_dvwall1_482(2720, 1920), 2);
    add_background_object(create_dvwall1_482(2720, 1728), 2);
    add_background_object(create_dvwall1_482(3520, 2488), 2);
    add_background_object(create_dvwall6_982(5784, 2400), 2);
    add_background_object(create_dvwall8_877(4256, 1792), 2);
    add_background_object(create_dvwall3_873(4256, 1600), 2);
    add_background_object(create_dvwall4_485(4184, 1760), 2);
    add_background_object(create_dvwall4_485(4200, 1648), 2);
    add_background_object(create_dvwall1_482(-64, 2384), 2);
    add_background_object(create_dvwall1_482(14952, 1480), 2);
    add_background_object(create_dvwall1_482(13672, 1480), 2);
    add_background_object(create_dvwall1_482(13928, 1480), 2);
    add_background_object(create_dvwall1_482(14184, 1480), 2);
    add_background_object(create_dvrockceiling_891(13672, 1656), 2);
    add_background_object(create_dvwall4_485(13544, 1664), 2);
    add_background_object(create_dvwalledge2_978(13656, 1672), 2);
    add_background_object(create_dvwalledge2_978(13656, 1736), 2);
    add_background_object(create_dvwalledge2_978(13656, 1800), 2);
    add_background_object(create_dvwalledge2_978(13656, 1864), 2);
    add_background_object(create_dvwalledge2_978(13656, 1928), 2);
    add_background_object(create_dvwalledge2_978(13656, 1992), 2);
    add_background_object(create_dvwalledge2_978(13656, 2056), 2);
    add_background_object(create_dvwalledge2_978(13656, 2120), 2);
    add_background_object(create_dvwall1_482(13672, 2320), 2);
    add_background_object(create_dvwall4_485(13632, 2320), 2);
    add_background_object(create_dvwall1_482(13672, 2512), 2);
    add_background_object(create_dvwall1_482(10600, 2504), 2);
    add_background_object(create_dvwall1_482(10856, 2504), 2);
    add_background_object(create_dvwall1_482(11112, 2504), 2);
    add_background_object(create_dvwall4_485(13616, 2432), 2);
    add_background_object(create_dvwalledge2_978(13656, 2184), 2);
    add_background_object(create_dvwalledge2_978(13656, 2240), 2);
    add_background_object(create_dvrockceiling_891(13800, 1656), 2);
    add_background_object(create_dvrockceiling_891(13928, 1656), 2);
    add_background_object(create_dvrockceiling_891(14056, 1656), 2);
    add_background_object(create_dvrockceiling_891(14184, 1656), 2);
    add_background_object(create_dvrockceiling_891(14312, 1656), 2);
    add_background_object(create_dvrockceiling_891(14952, 1656), 2);
    add_background_object(create_dvrockceiling_891(15080, 1656), 2);
    add_background_object(create_dvwall1_482(13928, 2512), 2);
    add_background_object(create_dvwall1_482(13928, 2320), 2);
    add_background_object(create_dvwall1_482(14696, 2512), 2);
    add_background_object(create_dvwall1_482(14696, 2320), 2);
    add_background_object(create_dvwall1_482(14952, 2512), 2);
    add_background_object(create_dvwall1_482(14952, 2320), 2);
    add_background_object(create_dvwall1_482(14696, 1288), 2);
    add_background_object(create_dvrockslope2_910(14536, 1272), 2);
    add_background_object(create_dvrockslope2_910(14664, 1272), 2);
    add_background_object(create_dvrockslope2_910(14792, 1272), 2);
    add_background_object(create_dvrockslope2_910(14920, 1272), 2);
    add_background_object(create_dvwall1_482(14440, 1480), 2);
    add_background_object(create_dvwall1_482(14696, 1480), 2);
    add_background_object(create_dvrockceiling_891(14440, 1656), 2);
    add_background_object(create_dvrockceiling_891(14568, 1656), 2);
    add_background_object(create_dvrockceiling_891(14696, 1656), 2);
    add_background_object(create_dvrockceiling_891(14824, 1656), 2);
    add_background_object(create_dvwall1_482(14184, 2512), 2);
    add_background_object(create_dvwall1_482(14184, 2320), 2);
    add_background_object(create_dvwall1_482(14440, 2512), 2);
    add_background_object(create_dvwall1_482(14440, 2320), 2);
    add_background_object(create_dvbackrock2_890(15624, 2240), 2);
    add_background_object(create_dvbackrock1_882(15552, 2192), 2);
    add_background_object(create_dvbackrock3_881(15320, 2224), 2);
    add_background_object(create_dvbackrock2_890(15312, 2232), 2);
    add_background_object(create_dvbackrock3_881(15248, 2264), 2);
    add_background_object(create_dvbackrock3_881(15384, 2264), 2);
    add_background_object(create_dvtree6_871(15792, 1664), 2);
    add_background_object(create_dvtree6_871(15720, 1648), 2);
    add_background_object(create_dvtree6_871(15216, 1664), 2);
    add_background_object(create_dvtree6_871(15296, 1656), 2);
    add_background_object(create_dvtree6_871(15448, 1640), 2);
    add_background_object(create_dvtree6_871(15592, 1664), 2);
    add_background_object(create_dvwall1_482(15464, 1288), 2);
    add_background_object(create_dvwall1_482(15976, 1288), 2);
    add_background_object(create_dvwall1_482(15208, 1288), 2);
    add_background_object(create_dvrockslope2_910(15304, 1272), 2);
    add_background_object(create_dvrockslope2_910(15432, 1272), 2);
    add_background_object(create_dvrockslope2_910(16072, 1272), 2);
    add_background_object(create_dvrockslope2_910(16200, 1272), 2);
    add_background_object(create_dvwall1_482(15976, 1480), 2);
    add_background_object(create_dvwall1_482(15208, 1480), 2);
    add_background_object(create_dvrockceiling_891(15208, 1656), 2);
    add_background_object(create_dvrockceiling_891(15336, 1656), 2);
    add_background_object(create_dvrockceiling_891(15976, 1656), 2);
    add_background_object(create_dvrockceiling_891(16104, 1656), 2);
    add_background_object(create_dvwall1_482(15720, 2512), 2);
    add_background_object(create_dvwall1_482(15720, 2320), 2);
    add_background_object(create_dvwall1_482(15976, 2512), 2);
    add_background_object(create_dvwall1_482(15976, 2320), 2);
    add_background_object(create_dvrockslope4_901(16232, 2304), 2);
    add_background_object(create_dvwall1_482(15720, 1288), 2);
    add_background_object(create_dvrockslope2_910(15560, 1272), 2);
    add_background_object(create_dvrockslope2_910(15688, 1272), 2);
    add_background_object(create_dvrockslope2_910(15816, 1272), 2);
    add_background_object(create_dvrockslope2_910(15944, 1272), 2);
    add_background_object(create_dvwall1_482(15464, 1480), 2);
    add_background_object(create_dvwall1_482(15720, 1480), 2);
    add_background_object(create_dvrockceiling_891(15464, 1656), 2);
    add_background_object(create_dvrockceiling_891(15592, 1656), 2);
    add_background_object(create_dvrockceiling_891(15720, 1656), 2);
    add_background_object(create_dvrockceiling_891(15848, 1656), 2);
    add_background_object(create_dvwall1_482(15208, 2512), 2);
    add_background_object(create_dvwall1_482(15208, 2320), 2);
    add_background_object(create_dvwall1_482(15464, 2512), 2);
    add_background_object(create_dvwall1_482(15464, 2320), 2);
    add_background_object(create_dvrockslope2_910(15176, 1272), 2);
    add_background_object(create_dvwall4_485(5512, 2104), 2);
    add_background_object(create_dvrockslope1_896(5536, 2096), 2);
    add_background_object(create_dvrockslope5_912(5600, 2096), 2);
    add_background_object(create_dvrockedge1_905(5504, 2096), 2);
    add_background_object(create_dvrockedge1_905(4336, 2120), 2);
    add_background_object(create_dvrockedge2_904(4368, 2120), 2);
    add_background_object(create_dvrockedge1_905(4832, 2136), 2);
    add_background_object(create_dvrockedge2_904(4864, 2136), 2);
    add_background_object(create_dvwall1_482(5088, 1752), 2);
    add_background_object(create_dvwall1_482(5088, 1944), 2);
    add_background_object(create_dvwall1_482(5344, 1752), 2);
    add_background_object(create_dvrockceiling_891(5344, 1928), 2);
    add_background_object(create_dvwalledge1_887(5088, 1944), 2);
    add_background_object(create_dvwalledge1_887(5088, 2008), 2);
    add_background_object(create_dvwalledge1_887(5088, 2072), 2);
    add_background_object(create_dvwalledge2_978(5328, 1944), 2);
    add_background_object(create_dvwalledge2_978(5328, 2008), 2);
    add_background_object(create_dvwalledge2_978(5328, 2072), 2);
    add_background_object(create_dvrockceiling_891(5216, 2120), 2);
    add_background_object(create_dvwalledge1_887(5088, 1752), 2);
    add_background_object(create_dvwalledge1_887(5088, 1816), 2);
    add_background_object(create_dvwalledge1_887(5088, 1880), 2);
    add_background_object(create_dvwalledge2_978(5584, 1752), 2);
    add_background_object(create_dvwalledge2_978(5584, 1816), 2);
    add_background_object(create_dvwalledge2_978(5584, 1880), 2);
    add_background_object(create_dvrockceiling_891(5472, 1928), 2);
    add_background_object(create_dvrockedge1_905(5088, 1736), 2);
    add_background_object(create_dvrockedge2_904(5568, 1736), 2);
    add_background_object(create_dvrockslope4_901(5120, 1736), 2);
    add_background_object(create_dvrockslope4_900(5440, 1736), 2);
    add_background_object(create_dvrockslope2_910(5248, 1744), 2);
    add_background_object(create_dvrockslope1_896(5376, 1744), 2);
    add_background_object(create_dvceilingoverlay_915(5472, 1928), 2);
    add_background_object(create_dvceilingoverlay_915(5344, 1928), 2);
    add_background_object(create_dvceilingoverlay_915(5216, 2120), 2);
    add_background_object(create_dvrockedge1_905(4584, 2128), 2);
    add_background_object(create_dvrockedge2_904(4616, 2128), 2);
    add_background_object(create_dvrockceiling_891(5088, 2120), 2);
    add_background_object(create_dvceilingoverlay_915(5088, 2120), 2);
    add_background_object(create_dvjumppadblock_1075(10368, 1960), 2);
    add_background_object(create_dvgrass1_507(10088, 2136), 2);
    add_background_object(create_dvgrass3_505(10120, 2136), 2);
    add_background_object(create_dvgrass3_505(10248, 2144), 2);
    add_background_object(create_dvgrass3_505(10376, 2152), 2);
    add_background_object(create_dvgrass3_505(10504, 2160), 2);
    add_background_object(create_dvgrass3_505(10632, 2168), 2);
    add_background_object(create_dvgrass3_505(10760, 2176), 2);
    add_background_object(create_dvgrass3_505(10888, 2184), 2);
    add_background_object(create_dvgrass3_505(11016, 2192), 2);
    add_background_object(create_dvgrass3_505(11144, 2200), 2);
    add_background_object(create_dvgrass3_505(11272, 2208), 2);
    add_background_object(create_dvgrass3_505(11400, 2216), 2);
    add_background_object(create_dvgrass3_505(11528, 2224), 2);
    add_background_object(create_dvgrass3_505(11656, 2232), 2);
    add_background_object(create_dvgrass3_505(11784, 2240), 2);
    add_background_object(create_dvgrass3_505(11912, 2248), 2);
    add_background_object(create_dvgrass3_505(12040, 2256), 2);
    add_background_object(create_dvgrass1_507(13640, 2304), 2);
    add_background_object(create_dvgrass3_505(13672, 2304), 2);
    add_background_object(create_dvgrass5_509(13800, 2304), 2);
    add_background_object(create_dvgrass3_505(13928, 2304), 2);
    add_background_object(create_dvgrass5_509(14056, 2304), 2);
    add_background_object(create_dvgrass3_505(14184, 2304), 2);
    add_background_object(create_dvgrass5_509(14312, 2304), 2);
    add_background_object(create_dvgrass3_505(14440, 2304), 2);
    add_background_object(create_dvgrass5_509(14568, 2304), 2);
    add_background_object(create_dvgrass3_505(14696, 2304), 2);
    add_background_object(create_dvgrass5_509(14824, 2304), 2);
    add_background_object(create_dvgrass3_505(14952, 2304), 2);
    add_background_object(create_dvgrass5_509(15080, 2304), 2);
    add_background_object(create_dvgrass3_505(15208, 2304), 2);
    add_background_object(create_dvgrass5_509(15336, 2304), 2);
    add_background_object(create_dvgrass3_505(15464, 2304), 2);
    add_background_object(create_dvgrass5_509(15592, 2304), 2);
    add_background_object(create_dvgrass3_505(15720, 2304), 2);
    add_background_object(create_dvgrass5_509(15848, 2304), 2);
    add_background_object(create_dvgrass3_505(15976, 2304), 2);
    add_background_object(create_dvgrass5_509(16104, 2304), 2);
    add_background_object(create_dvceilingoverlay2_916(10792, 1952), 2);
    add_background_object(create_dvceilingoverlay2_916(10728, 1928), 2);
    add_background_object(create_dvceilingoverlay2_916(10728, 1896), 2);
    add_background_object(create_dvceilingoverlay2_916(10728, 1864), 2);
    add_background_object(create_dvwall6_982(10824, 1856), 2);
    add_background_object(create_dvwall3_873(10728, 1472), 2);
    add_background_object(create_dvrockedge1_905(11048, 1576), 2);
    add_background_object(create_dvwalledge1_887(10728, 1464), 2);
    add_background_object(create_dvwalledge1_887(10728, 1528), 2);
    add_background_object(create_dvwalledge1_887(10728, 1592), 2);
    add_background_object(create_dvwalledge1_887(10728, 1656), 2);
    add_background_object(create_dvwalledge1_887(10728, 1720), 2);
    add_background_object(create_dvwalledge2_978(11096, 1208), 2);
    add_background_object(create_dvrockedge2_904(11080, 1192), 2);
    add_background_object(create_dvwalledge2_978(11096, 1272), 2);
    add_background_object(create_dvwalledge2_978(11096, 1336), 2);
    add_background_object(create_dvwalledge2_978(11096, 1400), 2);
    add_background_object(create_dvwalledge2_978(11096, 1464), 2);
    add_background_object(create_dvwalledge2_978(11096, 1528), 2);
    add_background_object(create_dvrockslope4_901(11080, 1576), 2);
    add_background_object(create_dvwall9_889(10600, 1344), 2);
    add_background_object(create_dvrockedge1_905(10600, 1328), 2);
    add_background_object(create_dvwall6_982(10696, 1344), 2);
    add_background_object(create_dvrockedge2_904(10696, 1328), 2);
    add_background_object(create_dvrockslope1_896(10632, 1328), 2);
    add_object(create_objectjumppad_1076(10432, 1992), 2);
    add_object(create_objectjumppad_1076(10400, 2024), 2);
    add_object(create_objectjumppad_1076(10120, 2134), 2);
    add_object(create_objectjumppad_1076(5344, 2000), 2);
    add_object(create_objectjumppad_1076(5344, 2096), 2);
    add_object(create_objectjumppad_1076(5504, 2176), 2);
    add_object(create_objectjumppad_1076(5296, 2152), 2);
    add_object(create_objectjumppad_1076(5136, 2152), 2);
    add_object(create_objectjumppad_1076(4864, 2168), 2);
    add_object(create_objectjumppad_1076(4616, 2160), 2);
    add_object(create_objectjumppad_1076(4368, 2152), 2);
    add_object(create_bosstunnel2_1077(3560, 2168), 2);
    add_object(create_bosstunnel2_1077(3624, 2168), 2);
    add_object(create_bosstunnel2_1077(3592, 2168), 2);
    add_object(create_bosstunnel2_1077(3688, 2168), 2);
    add_object(create_bosstunnel2_1077(3752, 2168), 2);
    add_object(create_bosstunnel2_1077(3720, 2168), 2);
    add_object(create_bosstunnel2_1077(3656, 2168), 2);
    add_object(create_bosstunnel2_1077(5544, 2240), 2);
    add_object(create_bosstunnel2_1077(5608, 2240), 2);
    add_object(create_bosstunnel2_1077(5576, 2240), 2);
    add_object(create_bosstunnel2_1077(5672, 2240), 2);
    add_object(create_bosstunnel2_1077(5736, 2240), 2);
    add_object(create_bosstunnel2_1077(5704, 2240), 2);
    add_object(create_bosstunnel2_1077(5640, 2240), 2);
    add_object(create_bosstunnel2_1077(5512, 2240), 2);
    add_object(create_bosstunnel2_1077(3576, 2168), 2);
    add_object(create_bosstunnel2_1077(3640, 2168), 2);
    add_object(create_bosstunnel2_1077(3608, 2168), 2);
    add_object(create_bosstunnel2_1077(3704, 2168), 2);
    add_object(create_bosstunnel2_1077(3768, 2168), 2);
    add_object(create_bosstunnel2_1077(3736, 2168), 2);
    add_object(create_bosstunnel2_1077(3672, 2168), 2);
    add_object(create_bosstunnel2_1077(3544, 2168), 2);
    add_object(create_bosstunnel2_1077(3528, 2168), 2);
    add_object(create_bosstunnel2_1077(5560, 2240), 2);
    add_object(create_bosstunnel2_1077(5624, 2240), 2);
    add_object(create_bosstunnel2_1077(5592, 2240), 2);
    add_object(create_bosstunnel2_1077(5688, 2240), 2);
    add_object(create_bosstunnel2_1077(5752, 2240), 2);
    add_object(create_bosstunnel2_1077(5720, 2240), 2);
    add_object(create_bosstunnel2_1077(5656, 2240), 2);
    add_object(create_bosstunnel2_1077(5528, 2240), 2);
    add_object(create_breakable2_1078(8832, 2280), 2);
    add_object(create_breakable2_1078(8880, 2280), 2);
    add_object(create_breakable2_1078(8928, 2280), 2);
    add_object(create_breakable2_1078(8976, 2280), 2);
    add_object(create_breakable1_1079(8232, 2296), 2);
    add_object(create_breakable3_1080(8320, 2296), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(16312, 1141), 2);
    add_object(create_playerstartingpoint_358(21, 1765), 2);
    add_object(create_link_352(88, -96), 2);
    add_object(create_objectcrystal_279(-275, 82), 2);
    add_object(create_bosssnakebody_995(4516, -180), 2);
    add_object(create_objectcodec_354(-295, 108), 2);
    add_object(create_halfcorkscrewleft_941(7256, 2439), 2);
    add_object(create_halfcorkscrewright_942(8040, 2439), 2);
    add_object(create_layerchangeswitch_404(7360, 2352), 2);
    add_object(create_layerchangeswitch_404(7920, 2352), 2);
    add_object(create_bossserpentinehead_948(4548, -184), 2);
    add_object(create_bosssnakehitbox_999(4604, -136), 2);
    add_object(create_cameratriggerboss_424(12608, 2080), 2);
    add_object(create_levelgeyserplate_998(11600, 687), 2);
    add_object(create_laddertop_357(11468, 783), 2);
    add_object(create_switchpressureplate_752(11800, -56), 2);
    add_object(create_switchdoor_1055(11864, -168), 2);
    add_object(create_cameratriggerboss_424(12608, 1880), 2);
    add_object(create_bossgeyseroverlap1_1081(13000, 2264), 2);
    add_object(create_bossgeyseroverlap1_1081(12552, 2264), 2);
    add_object(create_bossbouncemode_1082(12796, 2092), 2);
    add_object(create_bosstunnel_1083(12824, 1304), 2);
    add_object(create_bosstunnel_1083(12824, 1848), 2);
    add_object(create_bosstunnel_1083(12824, 1816), 2);
    add_object(create_bosstunnel_1083(12824, 1784), 2);
    add_object(create_bosstunnel_1083(12824, 1752), 2);
    add_object(create_bosstunnel3_1084(13176, 2072), 2);
    add_object(create_bosstunnel3_1084(13208, 2072), 2);
    add_object(create_bosstunnel3_1084(13240, 2072), 2);
    add_object(create_bosstunnel3_1084(13272, 2072), 2);
    add_object(create_bosstunnel3_1084(13304, 2072), 2);
    add_object(create_bosstunnel3_1084(13336, 2072), 2);
    add_object(create_bosstunnel3_1084(13368, 2072), 2);
    add_object(create_bosstunnel3_1084(13400, 2072), 2);
    add_object(create_bosstunnel3_1084(13432, 2072), 2);
    add_object(create_bosstunnel3_1084(13464, 2072), 2);
    add_object(create_bosstunnel3_1084(13496, 2072), 2);
    add_object(create_bosstunnel3_1084(13528, 2072), 2);
    add_object(create_bosstunnel3_1084(13560, 2072), 2);
    add_object(create_bosstunnel3_1084(13592, 2072), 2);
    add_object(create_bosstunnel3_1084(13624, 2072), 2);
    add_object(create_bosstunnel_1083(12824, 1720), 2);
    add_object(create_bosstunnel_1083(12824, 1688), 2);
    add_object(create_bosstunnel_1083(12824, 1656), 2);
    add_object(create_bosstunnel_1083(12824, 1624), 2);
    add_object(create_bosstunnel_1083(12824, 1592), 2);
    add_object(create_bosstunnel_1083(12824, 1560), 2);
    add_object(create_bosstunnel_1083(12824, 1528), 2);
    add_object(create_bosstunnel_1083(12824, 1496), 2);
    add_object(create_bosstunnel_1083(12824, 1464), 2);
    add_object(create_bosstunnel_1083(12824, 1432), 2);
    add_object(create_bosstunnel_1083(12824, 1400), 2);
    add_object(create_bosstunnel_1083(12824, 1368), 2);
    add_object(create_bosstunnel_1083(12824, 1336), 2);
    add_object(create_playerinput_19(-440, 176), 2);
    add_object(create_masterinput_20(-464, 176), 2);
    add_object(create_inputsp1_21(-416, 176), 2);
    add_object(create_globalinputdata_22(-392, 176), 2);
    add_object(create_objectpetal_302(11313, 2191), 2);
    add_object(create_objectpetal_302(11217, 2185), 2);
    add_object(create_objectpetal_302(11265, 2188), 2);
    add_object(create_objectpetal_302(11361, 2195), 2);
    add_object(create_levellayer115_1085(12360, 2112), 2);
    add_object(create_levellayer1loop03_1086(12392, 2144), 2);
    add_object(create_levellayer115_1085(12360, 2176), 2);
    add_object(create_levellayer115_1085(12360, 2216), 2);
    add_object(create_shieldearth_314(-140, 348), 2);
    add_object(create_shieldflameback_315(-96, 328), 2);
    add_object(create_shieldwood_313(-140, 340), 2);
    add_object(create_shieldmagnetic_317(-124, 348), 2);
    add_object(create_shieldwater_318(-76, 348), 2);
    add_object(create_shieldflamefront_316(-68, 340), 2);
    add_object(create_breakablerock2_1007(7432, 2368), 2);
    add_object(create_breakablerock2_1007(7464, 2368), 2);
    add_object(create_breakablerock2_1007(7496, 2368), 2);
    add_object(create_breakablerock2_1007(7528, 2368), 2);
    add_object(create_breakablerock2_1007(7560, 2368), 2);
    add_object(create_breakablerock2_1007(7592, 2368), 2);
    add_object(create_breakablerock2_1007(7624, 2368), 2);
    add_object(create_breakablerock2_1007(7656, 2368), 2);
    add_object(create_breakablerock2_1007(7688, 2368), 2);
    add_object(create_breakablerock2_1007(7720, 2368), 2);
    add_object(create_breakablerock2_1007(7752, 2368), 2);
    add_object(create_breakablerock2_1007(7784, 2368), 2);
    add_object(create_breakablerock2_1007(7816, 2368), 2);
    add_object(create_layerchangeswitch_404(7280, 2392), 2);
    add_object(create_breakable1_1079(8184, 2352), 2);
    add_object(create_breakable2_1078(8272, 2352), 2);
    add_object(create_breakable2_1078(8320, 2352), 2);
    add_object(create_breakable3_1080(8368, 2352), 2);
    add_object(create_breakable1_1079(8744, 2280), 2);
    add_object(create_breakable3_1080(9024, 2280), 2);
    add_object(create_breakable1_1079(8696, 2336), 2);
    add_object(create_breakable2_1078(8784, 2336), 2);
    add_object(create_breakable2_1078(8832, 2336), 2);
    add_object(create_breakable3_1080(8880, 2336), 2);
    add_object(create_breakable1_1079(9240, 2312), 2);
    add_object(create_breakable3_1080(9328, 2312), 2);
    add_object(create_breakable1_1079(9560, 2232), 2);
    add_object(create_breakable3_1080(9648, 2232), 2);
    add_object(create_breakable1_1079(9512, 2288), 2);
    add_object(create_breakable2_1078(9600, 2288), 2);
    add_object(create_breakable2_1078(9648, 2288), 2);
    add_object(create_breakable3_1080(9696, 2288), 2);
    add_object(create_bossgiantboulder_1087(784, 1952), 2);
    add_object(create_enemyturretus_938(8743, 2320), 2);
    add_object(create_enemyturretus_938(9327, 2296), 2);
    add_object(create_enemyturretus_938(9559, 2272), 2);
    add_object(create_enemyturretus_938(9735, 2272), 2);
    add_object(create_enemydragonfly_944(2551, 2212), 2);
    add_object(create_enemydragonfly_944(2791, 2236), 2);
    add_object(create_enemydragonfly_944(3135, 2220), 2);
    add_object(create_enemydragonfly_944(4887, 2244), 2);
    add_object(create_enemydragonfly_944(4943, 2276), 2);
    add_object(create_enemydragonfly_944(5007, 2260), 2);
    add_object(create_enemydragonfly_944(5183, 2284), 2);
    add_object(create_objectcrystal_279(5485, 2122), 2);
    add_object(create_objectcrystal_279(5485, 2154), 2);
    add_object(create_objectcrystal_279(5485, 2186), 2);
    add_object(create_objectcrystal_279(5485, 2218), 2);
    add_object(create_objectcrystal_279(5485, 2250), 2);
    add_object(create_layerchangeswitch_404(8000, 2392), 2);
    add_object(create_bosstunnel3_1084(13656, 2072), 2);
    add_object(create_objectjumppad_1076(4040, 2296), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_mapdata_30(-432, 232), 2);
    add_background_object(create_dvrockceiling_891(12960, 1848), 3);
    add_background_object(create_dvrockceiling_891(12840, 1848), 3);
    add_background_object(create_dvrockceiling_891(12712, 1848), 3);
    add_background_object(create_dvrockceiling_891(12592, 1848), 3);
    add_background_object(create_dvwall6_982(12944, 2296), 3);
    add_background_object(create_dvwall4_485(12488, 2296), 3);
    add_background_object(create_dvrockslope4_900(12744, 1272), 3);
    add_background_object(create_dvrockslope4_900(13000, 1272), 3);
    add_background_object(create_dvrockslope4_901(12872, 1272), 3);
    add_background_object(create_dvrockslope4_901(13128, 1272), 3);
    add_background_object(create_dvrockslope4_900(13256, 1272), 3);
    add_background_object(create_dvrockslope4_901(12552, 1272), 3);
    add_background_object(create_dvrockslope1_896(12680, 1280), 3);
    add_background_object(create_dvrockslope4_900(12424, 1272), 3);
    add_background_object(create_dvwall6_982(12224, 1368), 3);
    add_background_object(create_dvrockslope4_901(12296, 1272), 3);
    add_background_object(create_dvrockslope4_900(12168, 1272), 3);
    add_background_object(create_dvrockceiling_891(12368, 1848), 3);
    add_background_object(create_dvrockceiling_891(12472, 1848), 3);
    add_background_object(create_dvrockceiling_891(13056, 1848), 3);
    add_background_object(create_dvrockceiling_891(13184, 1848), 3);
    add_background_object(create_dvrockceiling_891(13288, 1848), 3);
    add_background_object(create_dvrockslope4_900(12280, 2264), 3);
    add_background_object(create_dvrockslope4_901(12160, 2264), 3);
    add_background_object(create_dvrockslope4_901(12400, 2264), 3);
    add_background_object(create_dvrockslope4_900(12040, 2264), 3);
    add_background_object(create_dvrockedge1_905(12008, 2272), 3);
    add_background_object(create_dvrockceiling_891(120, 1600), 3);
    add_background_object(create_dvrockceiling_891(160, 1600), 3);
    add_background_object(create_dvrockceiling_891(3360, 1896), 3);
    add_background_object(create_dvrockceiling_891(3488, 1896), 3);
    add_background_object(create_dvrockceiling_891(3616, 1896), 3);
    add_background_object(create_dvrockceiling_891(3744, 1896), 3);
    add_background_object(create_dvrockceiling_891(3872, 1896), 3);
    add_background_object(create_dvrockceiling_891(4000, 1896), 3);
    add_background_object(create_dirt13_1074(672, 1840), 3);
    add_background_object(create_dvwall4_485(880, 1904), 3);
    add_background_object(create_dvwall4_485(880, 1800), 3);
    add_background_object(create_dvwall6_982(576, 1816), 3);
    add_background_object(create_dvwall4_485(648, 1888), 3);
    add_background_object(create_dvrockedge2_904(3808, 2152), 3);
    add_background_object(create_dvrockslope1_896(3744, 2152), 3);
    add_background_object(create_dvrockslope5_912(3552, 2024), 3);
    add_background_object(create_dvrockslope9_902(3616, 2056), 3);
    add_background_object(create_dvrockedge1_905(3520, 2024), 3);
    add_background_object(create_dvrockslope5_912(48, 1832), 3);
    add_background_object(create_dvrockslope4_901(-80, 1824), 3);
    add_background_object(create_dvtree2_883(136, 1792), 3);
    add_background_object(create_dvrockedge2_904(240, 1960), 3);
    add_background_object(create_dvrockslope9_902(112, 1864), 3);
    add_background_object(create_dvrockceiling_891(4128, 1896), 3);
    add_background_object(create_separatormasterobjects_372(-176, -32), 5);
    add_background_object(create_separatorplayerobjects_373(-176, 112), 5);
    add_background_object(create_separatorlayerchange_374(-320, -32), 5);
    add_background_object(create_separatorsprings_375(-344, 152), 5);
    add_background_object(create_separatoreffects_376(-544, -32), 5);
    add_background_object(create_separatorwater_377(-593, 352), 5);
    add_background_object(create_separatormonitors_378(-248, -32), 5);
    add_background_object(create_separatorrings_379(-312, 56), 5);
    add_background_object(create_separatorspikes_556(-216, 376), 5);
    add_object(create_addtimebonus_380(-288, -72), 5);
    add_object(create_playerskinmillatail_381(-99, 273), 5);
    add_object(create_playerskincarolbike_382(-112, 264), 5);
    add_object(create_playerskinmilla_446(-83, 273), 5);
    add_object(create_playerskincaroltail_444(-112, 273), 5);
    add_object(create_playerskincarol_445(-108, 273), 5);
    add_object(create_playerskinspade_419(-130, 273), 5);
    add_object(create_playercharactersensor_383(-155, 188), 5);
    add_object(create_mastergroupsa_384(-168, -8), 5);
    add_object(create_mastergroupsb_385(-152, -8), 5);
    add_object(create_generalanglechanger75_386(-168, 48), 5);
    add_object(create_playermovementvalues_245(-168, 136), 5);
    add_object(create_playeractionvaluesa_387(-144, 136), 5);
    add_object(create_playeractionvaluesb_388(-144, 144), 5);
    add_object(create_playerothers_123(-120, 136), 5);
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
    add_object(create_hazardspikesdown_960(-168, 392), 5);
    add_object(create_hazardspikesleft_959(-128, 392), 5);
    add_object(create_hazardspikesright_961(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_generalwater_414(-584, 384), 5);
    add_object(create_generalwaterhorizon_415(-584, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(12776, 2303), 5);
    add_object(create_cameralimitbossleft_421(12360, 2080), 5);
    add_object(create_cameralimitbossright_422(13191, 2088), 5);
    add_object(create_cameralimitbosstop_423(12784, 1832), 5);
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
    add_object(create_objectbike_322(-216, 320), 5);
    add_object(create_playerreflect_447(-72, 232), 5);
    add_object(create_playerdig_448(-56, 234), 5);
    add_object(create_playerskintorquearm_449(-96, 216), 5);
    add_object(create_playerskintorque_450(-68, 273), 5);
    add_object(create_functionmusic_1008(-152, -88), 5);
    add_object(create_queuemusic_1009(-112, -88), 5);
    add_object(create_windowcontrol_27(-432, 200), 5);
    add_object(create_recorddata_34(-432, 248), 5);
    add_object(create_guiair_759(-16, 96), 6);
    add_object(create_guiscoretimerings_451(8, 8), 6);
    add_object(create_guiboss_1088(264, 208), 6);
    add_object(create_guikeystone_455(240, -56), 6);
    add_object(create_guienergy_124(16, 10), 6);
    add_object(create_guitimermilli_360(309, 19), 6);
    add_object(create_guibosshealth_1089(277, 222), 6);
    add_object(create_guitimermilli2_361(299, 19), 6);
    add_object(create_guitimers_362(283, 19), 6);
    add_object(create_guitimers2_363(273, 19), 6);
    add_object(create_guitimerm_364(257, 19), 6);
    add_object(create_guitimerm2_365(247, 19), 6);
    add_object(create_guirings_122(8, 19), 6);
    add_object(create_guiicon_452(135, 12), 6);
    add_object(create_guipause_453(0, 101), 6);
    add_object(create_guilives_454(164, 19), 6);
    add_object(create_guikeystone_455(224, -56), 6);
    add_object(create_guikeystone_455(208, -56), 6);
    add_object(create_guikeystone_455(192, -56), 6);
    add_object(create_guikeystone_455(176, -56), 6);
    add_object(create_crystal_456(-53, 141), 6);
    add_object(create_treefront_1038(-208, 1888), 6);
    add_object(create_guipowercard_457(91, 7), 6);
    add_object(create_guipowercard_457(75, 7), 6);
    add_object(create_guipowercard_457(59, 7), 6);
    add_object(create_guipowercard_457(43, 7), 6);
    add_object(create_guipowercard_457(27, 7), 6);
    add_object(create_guicrystal_121(206, 19), 6);
    add_object(create_guitimer_564(216, 0), 6);
    add_background_object(create_dvwall1_482(7840, 192), 7);
    add_background_object(create_dvwall3_873(8096, 256), 7);
    add_background_object(create_dvwall3_873(8096, 64), 7);
    add_object(create_timebonustotal_460(-256, -72), 7);
    add_object(create_levelcardactclear4_846(-48, 212), 7);
    add_object(create_levelcardfade_461(0, 0), 7);
    add_object(create_levelcardfade2_24(-328, -336), 7);
    add_object(create_levelcardactclear1_847(-160, 32), 7);
    add_object(create_levelcardactclear2_848(-88, 88), 7);
    add_object(create_levelcardintro1_464(16, -240), 7);
    add_object(create_levelcardintro2_761(0, 248), 7);
    add_object(create_levelcardintro3_760(0, 248), 7);
    add_object(create_levelcardactclear3_849(-72, 88), 7);
    add_object(create_levelcardbonus1_850(-12, 109), 7);
    add_object(create_levelcardbonus2_851(76, 109), 7);
    add_object(create_levelcardbonus3_852(-8, -64), 7);
    add_object(create_totalbonus_853(-2, -40), 7);
    add_object(create_totalcrystals_854(44, 230), 7);
    add_object(create_levelcardgameover_462(0, 256), 7);
    add_object(create_guilifebasemeter_125(0, 0), 7);
    add_object(create_sarassteampluginfreedomplanet_26(-72, -128), 7);
    add_object(create_mapdata2_32(-432, 240), 7);
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
    loop_cutscene_end_running = false;
    loop_cutscene_end_index = 0;
    loop_player01slopesdown_running = false;
    loop_player01slopesdown_index = 0;
    loop_movesnake_running = false;
    loop_movesnake_index = 0;
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
    loop_trigger_deactivate_boss_running = false;
    loop_trigger_deactivate_boss_index = 0;
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
    loop_tally_running = false;
    loop_tally_index = 0;
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
    loop_boss_explode_running = false;
    loop_boss_explode_index = 0;
    loop_rings_ringloss_running = false;
    loop_rings_ringloss_index = 0;
    loop_play_music_0_running = false;
    loop_play_music_0_index = 0;
    loop_play_music_1_running = false;
    loop_play_music_1_index = 0;
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
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_23, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_23, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_23, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_23, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_23, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_23, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_23, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_23, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_23, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_23, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_23, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_23, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_23, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_23, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_23, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_23, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_23, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_23, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_23, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_23, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_23, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_23, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_23, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_23, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_23, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_23, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_23, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_23, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_23, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_23, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_23, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_23, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_23, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_23, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_23, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_23, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_23, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_23, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_23, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_23, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_23, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_23, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_23, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_23, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_23, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_23, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_23, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_23, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_23, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_23, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_23, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_23, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_23, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    once_condition_1745_23 = false;
    not_always_1508_19 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_1388_13 = loop_count;
    not_always_44_13 = loop_count;
    not_always_1740_23 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    once_condition_56_13 = false;
    once_condition_38_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    not_always_1984_23 = loop_count;
    not_always_1404_23 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_1983_23 = loop_count;
    group_main_engine_interface_and_post_processing_methods_event_camera_system_1 = false;
    not_always_501_13 = loop_count;
    group_sound_events_milla_1 = false;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_172_8 = loop_count;
    not_always_449_13 = loop_count;
    not_always_97_0 = loop_count;
    not_always_1449_13 = loop_count;
    not_always_1517_19 = loop_count;
    not_always_1403_23 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    not_always_1425_13 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    once_condition_138_0 = false;
    not_always_1410_21 = loop_count;
    not_always_68_13 = loop_count;
    not_always_1037_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1 = false;
    not_always_585_13 = loop_count;
    not_always_1408_23 = loop_count;
    once_condition_36_13 = false;
    not_always_1409_23 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_100_0 = loop_count;
    not_always_43_13 = loop_count;
    not_always_554_13 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_121_0 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1406_23 = loop_count;
    not_always_1033_13 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1 = false;
    not_always_600_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_snake_boss_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    group_main_engine_level_specific_methods_play_bgm_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    once_condition_1615_23 = false;
    group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_boulder_collisions_and_speed_changes_1 = true;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_1498_23 = loop_count;
    group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1 = false;
    not_always_130_0 = loop_count;
    group_main_engine_level_specific_methods_stage_clear_1 = true;
    not_always_1407_21 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    not_always_308_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_46_13 = loop_count;
    once_condition_1562_23 = false;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    not_always_1832_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    not_always_1398_23 = loop_count;
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = true;
    not_always_53_13 = loop_count;
    not_always_98_0 = loop_count;
    not_always_1531_19 = loop_count;
    once_condition_63_0 = false;
    once_condition_1522_19 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    once_condition_1744_23 = false;
    not_always_1447_13 = loop_count;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_52_13 = loop_count;
    once_condition_1616_23 = false;
    not_always_1036_13 = loop_count;
    not_always_1035_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_422_13 = loop_count;
    not_always_744_13 = loop_count;
    not_always_1295_13 = loop_count;
    not_always_522_13 = loop_count;
    not_always_168_0 = loop_count;
    once_condition_64_13 = false;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1525_19 = loop_count;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_boulder_reposition_1 = true;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    not_always_1034_13 = loop_count;
    not_always_1458_13 = loop_count;
    not_always_558_13 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    once_condition_1519_23 = false;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    not_always_69_13 = loop_count;
    once_condition_1542_23 = false;
    group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    not_always_45_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    group_main_engine_level_specific_methods_bosses_snake_boss_snake_hitting_1 = true;
    not_always_57_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_450_13 = loop_count;
    once_condition_1517_23 = false;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    not_always_1831_16 = loop_count;
    once_condition_54_13 = false;
    not_always_1456_13 = loop_count;
    not_always_99_0 = loop_count;
    not_always_1518_19 = loop_count;
    group_mac_controls_1 = false;
    not_always_101_0 = loop_count;
    once_condition_1518_23 = false;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    not_always_1972_21 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_1401_23 = loop_count;
    not_always_234_13 = loop_count;
    not_always_1516_19 = loop_count;
    not_always_553_13 = loop_count;
    not_always_140_0 = loop_count;
    not_always_813_13 = loop_count;
    not_always_64_0 = loop_count;
    group_main_engine_level_specific_methods_bosses_snake_boss_snake_destroyed_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = false;
    group_pause_1 = false;
    not_always_41_13 = loop_count;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_1457_13 = loop_count;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    not_always_1421_13 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_70_13 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    not_always_1685_23 = loop_count;
    once_condition_63_13 = false;
    not_always_1699_23 = loop_count;
    not_always_1396_23 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_1973_21 = loop_count;
    not_always_174_8 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    once_condition_66_13 = false;
    not_always_1405_23 = loop_count;
    not_always_1455_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    once_condition_4_19 = false;
    not_always_1039_13 = loop_count;
    not_always_95_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    not_always_809_13 = loop_count;
    once_condition_48_13 = false;
    once_condition_1531_23 = false;
    not_always_103_0 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
    not_always_96_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    group_sound_events_carol_1 = false;
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1 = false;
    every_819_13 = 0.0f;
    not_always_1510_19 = loop_count;
    not_always_540_13 = loop_count;
    group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_snake_boss_snake_boulder_fall_1 = true;
    not_always_1038_13 = loop_count;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    once_condition_1541_23 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_1400_23 = loop_count;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    once_condition_50_13 = false;
    once_condition_37_13 = false;
    not_always_1515_19 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    once_condition_55_13 = false;
    once_condition_35_13 = false;
    not_always_1514_19 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_5151()
{
    // event 1606_24
    {
        if (!(group_main_engine_1)) goto event_1606_24_end;
        enemyspark_1101_instances.clear_selection();
        for (ObjectIterator it(enemyspark_1101_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(16777216))) { it.deselect(); continue; }
        }
        if (!enemyspark_1101_instances.has_selection()) goto event_1606_24_end;
        if (test_obstacle(((Active*)get_single(enemyspark_1101_instances, default_active_instance))->get_x(), ((Active*)get_single(enemyspark_1101_instances, default_active_instance))->get_y()+4)) goto event_1606_24_end;
        for (ObjectIterator it(enemyspark_1101_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)+1);
        }
    }
    event_1606_24_end: ;
}
void Frames::loop_spark_down_24()
{
    event_func_5151();
}
void Frames::event_func_5152()
{
    // event 1502_24
    {
        if (!(group_main_engine_1)) goto event_1502_24_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto event_1502_24_end;
        FrameObject * single_instance_1502_24_0; single_instance_1502_24_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyhopper_1168_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemysporeprojectile_969(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1502_24_0 == NULL)
                    single_instance_1502_24_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1502_24_0))->alterables->values.set(0, ((Active*)get_single(enemyhopper_1168_instances, default_active_instance))->get_x()+cos_deg(((Active*)get_single(enemyhopper_1168_instances, default_active_instance))->alterables->values.get(9)*180.0)*10);
        ((Active*)((Active*)single_instance_1502_24_0))->alterables->values.set(1, ((Active*)get_single(enemyhopper_1168_instances, default_active_instance))->get_action_y());
        ((Active*)((Active*)single_instance_1502_24_0))->alterables->values.set(2, cos_deg(((Active*)get_single(enemyhopper_1168_instances, default_active_instance))->alterables->values.get(9)*180.0)*3);
        ((Active*)((Active*)single_instance_1502_24_0))->alterables->values.set(3, 0);
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(9, 1);
        }
        ((Active*)single_instance_1502_24_0)->move_back(((Active*)get_single(enemyhopper_1168_instances)));
    }
    event_1502_24_end: ;
}
void Frames::loop_hopper_spore_24()
{
    event_func_5152();
}
void Frames::event_func_5153()
{
    // event 1500_24
    {
        if (!(group_main_engine_1)) goto event_1500_24_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (-1))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto event_1500_24_end;
        FrameObject * single_instance_1500_24_0; single_instance_1500_24_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyhopper_1168_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1500_24_0 == NULL)
                    single_instance_1500_24_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1500_24_0))->get_movement()->set_speed(50+randrange(30));
        ((Active*)((Active*)single_instance_1500_24_0))->force_frame(((Active*)get_single(enemyhopper_1168_instances, default_active_instance))->alterables->values.get(0)*-1+16);
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1500_24_end: ;
}
void Frames::loop_spawndebris_24()
{
    event_func_1176();
    event_func_1177();
    event_func_1178();
    event_func_5153();
}
void Frames::event_func_5154()
{
    // event 1431_24
    {
        if (!(group_main_engine_1)) goto event_1431_24_end;
        gimmickrelicpanel_1178_instances.clear_selection();
        for (ObjectIterator it(gimmickrelicpanel_1178_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (12))) { it.deselect(); continue; }
        }
        if (!gimmickrelicpanel_1178_instances.has_selection()) goto event_1431_24_end;
        FrameObject * single_instance_1431_24_0; single_instance_1431_24_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gimmickrelicpanel_1178_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickrelicpanelpiece_1097(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1431_24_0 == NULL)
                    single_instance_1431_24_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1431_24_0))->force_frame(((Active*)get_single(gimmickrelicpanel_1178_instances, default_active_instance))->alterables->values.get(1));
        for (ObjectIterator it(gimmickrelicpanel_1178_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        ((Active*)((Active*)single_instance_1431_24_0))->alterables->values.set(0, ((Active*)single_instance_1431_24_0)->get_y());
        ((Active*)((Active*)single_instance_1431_24_0))->alterables->values.set(3, ((Active*)get_single(gimmickrelicpanel_1178_instances, default_active_instance))->alterables->values.get(1)*4);
    }
    event_1431_24_end: ;
}
void Frames::event_func_5155()
{
    // event 1432_24
    {
        if (!(group_main_engine_1)) goto event_1432_24_end;
        gimmickrelicpanel_1178_instances.clear_selection();
        for (ObjectIterator it(gimmickrelicpanel_1178_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (12))) { it.deselect(); continue; }
        }
        if (!gimmickrelicpanel_1178_instances.has_selection()) goto event_1432_24_end;
        for (ObjectIterator it(gimmickrelicpanel_1178_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1432_24_end: ;
}
void Frames::loop_relicpanel_24()
{
    event_func_5154();
    event_func_5155();
}
void Frames::event_func_5156()
{
    // event 1533_24
    {
        if (!(group_main_engine_1)) goto event_1533_24_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto event_1533_24_end;
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->alterables->values.set(4, 0.4);
            ((Active*)*it)->alterables->values.set(3, 2);
        }
    }
    event_1533_24_end: ;
}
void Frames::event_func_5157()
{
    // event 1534_24
    {
        if (!(group_main_engine_1)) goto event_1534_24_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto event_1534_24_end;
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->alterables->values.set(4, -0.4);
            ((Active*)*it)->alterables->values.set(3, 2);
        }
    }
    event_1534_24_end: ;
}
void Frames::event_func_5158()
{
    // event 1539_24
    {
        if (!(group_main_engine_1)) goto event_1539_24_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (0.5))) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto event_1539_24_end;
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(8, 1);
        }
    }
    event_1539_24_end: ;
}
void Frames::loop_slug_24()
{
    event_func_5156();
    event_func_5157();
    event_func_5158();
}
void Frames::event_func_5159()
{
    // event 1437_24
    {
        if (!(group_main_engine_1)) goto event_1437_24_end;
        gimmickfireballspawner_1179_instances.clear_selection();
        for (ObjectIterator it(gimmickfireballspawner_1179_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-150)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(6)) { it.deselect(); continue; }
        }
        if (!gimmickfireballspawner_1179_instances.has_selection()) goto event_1437_24_end;
        for (ObjectIterator it(gimmickfireballspawner_1179_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1437_24_end: ;
}
void Frames::event_func_5160()
{
    // event 1438_24
    {
        if (!(group_main_engine_1)) goto event_1438_24_end;
        gimmickfireballturretback_1166_instances.clear_selection();
        gimmickfireballturret2_1181_instances.clear_selection();
        if (!check_overlap(gimmickfireballturretback_1166_instances, gimmickfireballturret2_1181_instances)) goto event_1438_24_end;
        if (((Active*)get_instance(gimmickfireballturretback_1166_instances))->test_directions(1)) goto event_1438_24_end;
        ((Active*)get_instance(gimmickfireballturretback_1166_instances))->set_direction(0);
    }
    event_1438_24_end: ;
}
void Frames::event_func_5161()
{
    // event 1439_24
    {
        if (!(group_main_engine_1)) goto event_1439_24_end;
        gimmickfireballspawner_1179_instances.clear_selection();
        for (ObjectIterator it(gimmickfireballspawner_1179_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (10))) { it.deselect(); continue; }
        }
        if (!gimmickfireballspawner_1179_instances.has_selection()) goto event_1439_24_end;
        for (ObjectIterator it(gimmickfireballspawner_1179_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -90);
            ((Active*)*it)->force_animation(6);
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1439_24_end: ;
}
void Frames::event_func_5162()
{
    // event 1440_24
    {
        if (!(group_main_engine_1)) goto event_1440_24_end;
        gimmickfireballspawner_1179_instances.clear_selection();
        for (ObjectIterator it(gimmickfireballspawner_1179_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!gimmickfireballspawner_1179_instances.has_selection()) goto event_1440_24_end;
        for (ObjectIterator it(gimmickfireballspawner_1179_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
        FrameObject * single_instance_1440_24_0; single_instance_1440_24_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gimmickfireballspawner_1179_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickfireball_1096(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1440_24_0 == NULL)
                    single_instance_1440_24_0 = new_obj;
            }
        }
        ((Active*)single_instance_1440_24_0)->move_back(((Active*)get_single(gimmickfireballspawner_1179_instances)));
        media.play_id(SOUND_FIREBALL_2_46, -1, 1);
    }
    event_1440_24_end: ;
}
void Frames::loop_fireball_launcher_24()
{
    event_func_5159();
    event_func_5160();
    event_func_5161();
    event_func_5162();
}
void Frames::event_func_5163()
{
    // event 1456_24
    {
        if (!(group_main_engine_1)) goto event_1456_24_end;
        objectpot_1185_instances.clear_selection();
        for (ObjectIterator it(objectpot_1185_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (5))) { it.deselect(); continue; }
        }
        if (!objectpot_1185_instances.has_selection()) goto event_1456_24_end;
        FrameObject * single_instance_1456_24_0; single_instance_1456_24_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectpot_1185_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1456_24_0 == NULL)
                    single_instance_1456_24_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1456_24_0))->get_movement()->set_speed(40+randrange(30));
        ((Active*)((Active*)single_instance_1456_24_0))->force_frame(51+(((Active*)get_single(objectpot_1185_instances, default_active_instance))->alterables->values.get(3)%math_helper%2));
        ((Active*)((Active*)single_instance_1456_24_0))->set_direction(4+((Active*)get_single(objectpot_1185_instances, default_active_instance))->alterables->values.get(3)*2);
        for (ObjectIterator it(objectpot_1185_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_1456_24_end: ;
}
void Frames::loop_pot_24()
{
    event_func_5163();
}
void Frames::event_func_5164()
{
    // event 1816_24
    {
        if (!(group_main_engine_1)) goto event_1816_24_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_stage2_ogg_137, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1816_24_end: ;
}
void Frames::loop_play_music_5_24()
{
    event_func_5164();
}
void Frames::event_func_5165()
{
    // event 1532_24
    {
        if (!(group_main_engine_1)) goto event_1532_24_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (4))) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto event_1532_24_end;
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.sub(7, 1);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(7));
            ((Active*)*it)->alterables->flags.disable(4);
        }
    }
    event_1532_24_end: ;
}
void Frames::loop_slug_floor_24()
{
    event_func_5165();
}
void Frames::event_func_5166()
{
    // event 1605_24
    {
        if (!(group_main_engine_1)) goto event_1605_24_end;
        enemyspark_1101_instances.clear_selection();
        for (ObjectIterator it(enemyspark_1101_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(16777216))) { it.deselect(); continue; }
        }
        if (!enemyspark_1101_instances.has_selection()) goto event_1605_24_end;
        if (!(test_obstacle(((Active*)get_single(enemyspark_1101_instances, default_active_instance))->get_x(), ((Active*)get_single(enemyspark_1101_instances, default_active_instance))->get_y()+4))) goto event_1605_24_end;
        for (ObjectIterator it(enemyspark_1101_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)-1);
        }
    }
    event_1605_24_end: ;
}
