#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_12231()
{
    // event 1724_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1724_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(12)) == (4))) goto event_1724_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(13)) > (478))) goto event_1724_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(13)) < (514))) goto event_1724_55_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
    }
    event_1724_55_end: ;
}
void Frames::event_func_12232()
{
    // event 1725_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1725_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(12)) == (4))) goto event_1725_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(13)) == (514))) goto event_1725_55_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->restore_speed();
        }
    }
    event_1725_55_end: ;
}
void Frames::event_func_12233()
{
    // event 1726_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1726_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(12)) == (4))) goto event_1726_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(13)) == (530))) goto event_1726_55_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(30);
        }
    }
    event_1726_55_end: ;
}
void Frames::event_func_12234()
{
    // event 1727_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1727_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(12)) == (4))) goto event_1727_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(13)) == (534))) goto event_1727_55_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.play_id(SOUND_METALHIT_45, -1, 1);
        ((Active*)get_instance(npchologram2_3074_instances))->set_visible(true);
        ((Active*)get_instance(npcpangu_3073_instances))->set_x(((Active*)get_instance(npcpangu_3073_instances))->get_x()+4);
        ((Active*)get_instance(npcpangu_3073_instances))->set_angle(0, 0);
        ((Active*)get_instance(npchologram2_3074_instances))->set_direction(1);
    }
    event_1727_55_end: ;
}
void Frames::event_func_12235()
{
    // event 1728_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1728_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(12)) == (4))) goto event_1728_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(13)) >= (534))) goto event_1728_55_end;
        ((Active*)get_instance(npchologram2_3074_instances))->set_angle(((Active*)get_instance(npchologram2_3074_instances))->get_angle()+30, 0);
    }
    event_1728_55_end: ;
}
void Frames::event_func_12236()
{
    // event 1729_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1729_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(12)) == (4))) goto event_1729_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(13)) == (550))) goto event_1729_55_end;
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->flags.disable(1);
        media.play_id(SOUND_SYNTAX_APPEAR_2_286, -1, 1);
    }
    event_1729_55_end: ;
}
void Frames::event_func_12237()
{
    // event 1730_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1730_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(12)) == (4))) goto event_1730_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(13)) >= (584))) goto event_1730_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(13)) < (590))) goto event_1730_55_end;
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.sub(10, 12);
    }
    event_1730_55_end: ;
}
void Frames::event_func_12238()
{
    // event 1731_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1731_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(12)) == (4))) goto event_1731_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(13)) > (610))) goto event_1731_55_end;
        ((Active*)get_instance(npchologram2_3074_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.add(12, 1);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.set(13, 0);
    }
    event_1731_55_end: ;
}
void Frames::event_func_12239()
{
    // event 1732_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1732_55_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1732_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (8))) goto event_1732_55_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1732_55_end;
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.add(12, 1);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
    }
    event_1732_55_end: ;
}
void Frames::event_func_12240()
{
    // event 1733_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1733_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(12)) == (6))) goto event_1733_55_end;
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.set(14, 1);
        ((Active*)get_instance(npcpangu_3073_instances))->set_x(((Active*)get_instance(npcpangu_3073_instances))->get_x()+3);
    }
    event_1733_55_end: ;
}
void Frames::event_func_12241()
{
    // event 1734_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1734_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(12)) == (6))) goto event_1734_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(13)) > (60))) goto event_1734_55_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+3);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30);
        }
    }
    event_1734_55_end: ;
}
void Frames::event_func_12242()
{
    // event 1735_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1735_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(12)) == (6))) goto event_1735_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(13)) > (120))) goto event_1735_55_end;
        if (!group_main_engine_level_specific_methods_frame_transition_boss_defeated_1) {
            group_main_engine_level_specific_methods_frame_transition_boss_defeated_1 = true;
        }
    }
    event_1735_55_end: ;
}
void Frames::event_func_12243()
{
    // event 1736_55
    {
        if (!(group_main_engine_1)) goto event_1736_55_end;
        if (!((global_values->get(4)) < (2))) goto event_1736_55_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (2834))) goto event_1736_55_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (3000))) goto event_1736_55_end;
        global_values->set(4, 2);
        global_values->set(5, 2834);
        global_values->set(6, 1550);
        {
            loop_cp_running = true;
            int times = int(1);
            loop_cp_index = 0;
            while (loop_cp_index < times) {
                loop_cp_16();
                if (!loop_cp_running) break;
                loop_cp_index++;
            }
        }
    }
    event_1736_55_end: ;
}
void Frames::event_func_12244()
{
    // event 1737_55
    {
        if (!(group_main_engine_1)) goto event_1737_55_end;
        if (!((global_values->get(4)) < (3))) goto event_1737_55_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (4000))) goto event_1737_55_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (300))) goto event_1737_55_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (41))) goto event_1737_55_end;
        global_values->set(4, 3);
        global_values->set(5, 4480);
        global_values->set(6, 208);
        {
            loop_cp_running = true;
            int times = int(1);
            loop_cp_index = 0;
            while (loop_cp_index < times) {
                loop_cp_16();
                if (!loop_cp_running) break;
                loop_cp_index++;
            }
        }
    }
    event_1737_55_end: ;
}
void Frames::event_func_12245()
{
    // event 1738_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_big_door_1)) goto event_1738_55_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()))) goto event_1738_55_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()))) goto event_1738_55_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) < (((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()))) goto event_1738_55_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) > (((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()-400))) goto event_1738_55_end;
        if (not_always_1738_55 > loop_count) {
            not_always_1738_55 = loop_count + 2;
            goto event_1738_55_end;
        }
        not_always_1738_55 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 1);
    }
    event_1738_55_end: ;
}
void Frames::event_func_12246()
{
    // event 1740_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_big_door_1)) goto event_1740_55_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(objectstonedoor1_2993_instances))->get_x()))) goto event_1740_55_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(objectstonedoor2_2996_instances))->get_x()))) goto event_1740_55_end;
        if (!((((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->values.get(0)) < (0.4))) goto event_1740_55_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (0))) goto event_1740_55_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1740_55_end;
            group_main_engine_level_specific_methods_big_door_1 = false;
    
        if (!group_main_engine_level_specific_methods_frame_transition_1) {
            group_main_engine_level_specific_methods_frame_transition_1 = true;
        }
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
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
        ((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->flags.disable(2);
        ((Active*)get_instance(objectstonedoor1_2993_instances))->alterables->flags.disable(1);
        effectscolordot_308_instances.clear_selection();
        for (ObjectIterator it(effectscolordot_308_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_2000_69);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
    }
    event_1740_55_end: ;
}
void Frames::event_func_12247()
{
    // event 1741_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_boss_arena_1)) goto event_1741_55_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 4928);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, width);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, height);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(7, -40);
    }
    event_1741_55_end: ;
}
void Frames::event_func_12248()
{
    // event 1742_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_boss_arena_1)) goto event_1742_55_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) > (4900))) goto event_1742_55_end;
        if (once_condition_1742_55) goto event_1742_55_end;
        once_condition_1742_55 = true;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1742_55_end: ;
}
void Frames::event_func_12249()
{
    // event 1745_55
    bool or_result_1745_55 = false;
    bool or_temp_result_1745_55_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1745_55_0_end;
        bossholodragonneck_3057_instances.clear_selection();
        for (ObjectIterator it(bossholodragonneck_3057_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (0))) { it.deselect(); continue; }
        }
        if (!bossholodragonneck_3057_instances.has_selection()) goto or_event_1745_55_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(23)) > (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1745_55_0_end;
        or_result_1745_55 = true;
        or_temp_result_1745_55_0 = true;
    }
    or_event_1745_55_0_end: ;
    bossholodragonneck_3057_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1745_55_0) {
        bossholodragonneck_3057_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 1745_55
    bool or_temp_result_1745_55_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1745_55_1_end;
        bossholodragonneck_3057_instances.clear_selection();
        for (ObjectIterator it(bossholodragonneck_3057_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (0))) { it.deselect(); continue; }
        }
        if (!bossholodragonneck_3057_instances.has_selection()) goto or_event_1745_55_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(23)) > (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (((Active*)get_single(bossholodragonneck_3057_instances, default_active_instance))->get_y()))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1745_55_1_end;
        or_result_1745_55 = true;
        or_temp_result_1745_55_1 = true;
    }
    or_event_1745_55_1_end: ;
    if (or_temp_result_1745_55_1) {
        bossholodragonneck_3057_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 1745_55
    bool or_temp_result_1745_55_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1745_55_2_end;
        bossholodragonneck_3057_instances.clear_selection();
        for (ObjectIterator it(bossholodragonneck_3057_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (120))) { it.deselect(); continue; }
        }
        if (!bossholodragonneck_3057_instances.has_selection()) goto or_event_1745_55_2_end;
        or_result_1745_55 = true;
        or_temp_result_1745_55_2 = true;
        or_event_1745_55_2_end: ;
        if (or_temp_result_1745_55_2) {
            bossholodragonneck_3057_instances.save_selection();
        }
        if (!or_result_1745_55) goto or_final_or_event_1745_55_2_end;
        bossholodragonneck_3057_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_1745_55_0 || or_temp_result_1745_55_1 || or_temp_result_1745_55_2) {
            bossholodragonneck_3057_instances.restore_selection();
        }
        if (or_temp_result_1745_55_0 || or_temp_result_1745_55_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(bossholodragonneck_3057_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 1);
        }
    }
    or_final_or_event_1745_55_2_end: ;
}
void Frames::event_func_12250()
{
    // event 1746_55
    {
        if (!(group_main_engine_1)) goto event_1746_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (-2))) goto event_1746_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) >= (120))) goto event_1746_55_end;
        if (once_condition_1746_55) goto event_1746_55_end;
        once_condition_1746_55 = true;
        media.play_id(SOUND_DRAGONROAR_2_335, -1, 1);
    }
    event_1746_55_end: ;
}
void Frames::event_func_12251()
{
    // event 1747_55
    {
        if (!(group_main_engine_1)) goto event_1747_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (-2))) goto event_1747_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) >= (120))) goto event_1747_55_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
    }
    event_1747_55_end: ;
}
void Frames::event_func_12252()
{
    // event 1748_55
    {
        if (!(group_main_engine_1)) goto event_1748_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (-2))) goto event_1748_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) >= (120))) goto event_1748_55_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) == (0))) goto event_1748_55_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1748_55_end;
        if (!group_main_engine_level_specific_methods_bosses_boss_holodragon_1) {
            group_main_engine_level_specific_methods_bosses_boss_holodragon_1 = true;
        }
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(3, ((Active*)get_instance(player_389_instances))->get_x()+100);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 50);
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(10, -1);
    }
    event_1748_55_end: ;
}
void Frames::event_func_12253()
{
    // event 1749_55
    {
        if (!(group_main_engine_1)) goto event_1749_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (-1))) goto event_1749_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(11)) <= (230))) goto event_1749_55_end;
        if (!(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.is_off(1))) goto event_1749_55_end;
        if (!((global_values->get(0)) == (2))) goto event_1749_55_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.enable(1);
        media.play(str_data_voices_88+global_strings->get(11)+str_li_li_33_01_ogg_208, 25-1);
    }
    event_1749_55_end: ;
}
void Frames::event_func_12254()
{
    // event 1750_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1750_55_end;
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(0, (((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(0)+((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(6))%math_helper%360);
        bossholodragonpupil_3056_instances.clear_selection();
        for (ObjectIterator it(bossholodragonpupil_3056_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        bossholodragonbrow_3059_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbrow_3059_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1750_55_end: ;
}
void Frames::event_func_12255()
{
    // event 1751_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1751_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(9)) == (-1))) goto event_1751_55_end;
        bossholodragoneye_3055_instances.clear_selection();
        for (ObjectIterator it(bossholodragoneye_3055_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        bossholodragontoptooth_3049_instances.clear_selection();
        for (ObjectIterator it(bossholodragontoptooth_3049_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        bossholodragonpupil_3056_instances.clear_selection();
        for (ObjectIterator it(bossholodragonpupil_3056_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        bossholodragonbrow_3059_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbrow_3059_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        bossholodragonbottomtooth_3050_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbottomtooth_3050_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        bossholodragonscale_3051_instances.clear_selection();
        for (ObjectIterator it(bossholodragonscale_3051_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(bossholodragonpupil_3056_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(3)-40, get_min(((Active*)*it)->alterables->values.get(3)+(((Active*)get_instance(player_389_instances))->get_x()-((Active*)get_single(bossholodragoneye_3055_instances, it.current_index, default_active_instance))->get_x())*0.15, ((Active*)*it)->alterables->values.get(3)+40)));
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(4)-40, get_min(((Active*)*it)->alterables->values.get(4)-(((Active*)get_instance(player_389_instances))->get_x()-((Active*)get_single(bossholodragoneye_3055_instances, it.current_index, default_active_instance))->get_x())*0.15, ((Active*)*it)->alterables->values.get(4)+40)));
        }
        bossholodragonbreath_3048_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbreath_3048_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        bossholodragonear_3058_instances.clear_selection();
        for (ObjectIterator it(bossholodragonear_3058_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1751_55_end: ;
}
void Frames::event_func_12256()
{
    // event 1752_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1752_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(9)) == (1))) goto event_1752_55_end;
        bossholodragoneye_3055_instances.clear_selection();
        for (ObjectIterator it(bossholodragoneye_3055_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        bossholodragontoptooth_3049_instances.clear_selection();
        for (ObjectIterator it(bossholodragontoptooth_3049_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        bossholodragonpupil_3056_instances.clear_selection();
        for (ObjectIterator it(bossholodragonpupil_3056_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        bossholodragonbrow_3059_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbrow_3059_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        bossholodragonbottomtooth_3050_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbottomtooth_3050_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        bossholodragonscale_3051_instances.clear_selection();
        for (ObjectIterator it(bossholodragonscale_3051_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        for (ObjectIterator it(bossholodragonpupil_3056_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(3)-40, get_min(((Active*)*it)->alterables->values.get(3)+(((Active*)get_single(bossholodragoneye_3055_instances, it.current_index, default_active_instance))->get_x()-((Active*)get_instance(player_389_instances))->get_x())*0.15, ((Active*)*it)->alterables->values.get(3)+40)));
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(4)-40, get_min(((Active*)*it)->alterables->values.get(4)-(((Active*)get_single(bossholodragoneye_3055_instances, it.current_index, default_active_instance))->get_x()-((Active*)get_instance(player_389_instances))->get_x())*0.15, ((Active*)*it)->alterables->values.get(4)+40)));
        }
        bossholodragonbreath_3048_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbreath_3048_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        bossholodragonear_3058_instances.clear_selection();
        for (ObjectIterator it(bossholodragonear_3058_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_1752_55_end: ;
}
void Frames::event_func_12257()
{
    // event 1753_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1753_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) >= (6))) goto event_1753_55_end;
        bossholodragonpupil_3056_instances.clear_selection();
        for (ObjectIterator it(bossholodragonpupil_3056_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->alterables->values.get(4));
        }
    }
    event_1753_55_end: ;
}
void Frames::event_func_12258()
{
    // event 1754_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1754_55_end;
        ((Active*)get_instance(bossholodragonneck_3057_instances))->set_x(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(3));
        ((Active*)get_instance(bossholodragonneck_3057_instances))->set_y(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(4)+sin_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(0)+10)*((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(5));
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(1, sin_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(0)+100)*((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(5)*0.25-get_min(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(5)*0.25, 20)-((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(7));
    }
    event_1754_55_end: ;
}
void Frames::event_func_12259()
{
    // event 1755_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1755_55_end;
        qualifier_32.clear_selection();
        for (QualifierIterator it(qualifier_32); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(3)+((Active*)*it)->alterables->values.get(1)*(0-((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(9)));
            ((Active*)*it)->set_y(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(4)+((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_angle(0, 0);
        }
    }
    event_1755_55_end: ;
}
void Frames::event_func_12260()
{
    // event 1756_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1756_55_end;
        bossholodragonscale_3051_instances.clear_selection();
        for (ObjectIterator it(bossholodragonscale_3051_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossholodragonneck_3057_instances))->get_x()+(cos_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1)-((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(7))*((Active*)*it)->alterables->values.get(1)+sin_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1)-((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(7))*((Active*)*it)->alterables->values.get(2))*(0-((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(9)));
            ((Active*)*it)->set_y(((Active*)get_instance(bossholodragonneck_3057_instances))->get_y()+sin_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1)-((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(7))*((Active*)*it)->alterables->values.get(1)*-1+cos_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1)-((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(7))*((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_angle((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1)-((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(7))*(0-((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(9)), 0);
        }
        bossholodragontoptooth_3049_instances.clear_selection();
        for (ObjectIterator it(bossholodragontoptooth_3049_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossholodragonneck_3057_instances))->get_x()+(cos_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1)-((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(7))*((Active*)*it)->alterables->values.get(1)+sin_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1)-((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(7))*((Active*)*it)->alterables->values.get(2))*(0-((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(9)));
            ((Active*)*it)->set_y(((Active*)get_instance(bossholodragonneck_3057_instances))->get_y()+sin_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1)-((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(7))*((Active*)*it)->alterables->values.get(1)*-1+cos_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1)-((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(7))*((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_angle((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1)-((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(7))*(0-((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(9)), 0);
        }
        bossholodragonbrow_3059_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbrow_3059_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossholodragonneck_3057_instances))->get_x()+(cos_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(1)+sin_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(2))*(0-((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(9)));
            ((Active*)*it)->set_y(((Active*)get_instance(bossholodragonneck_3057_instances))->get_y()+sin_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(1)*-1+cos_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_angle(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1)*(0-((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(9)), 0);
        }
        bossholodragonpupil_3056_instances.clear_selection();
        for (ObjectIterator it(bossholodragonpupil_3056_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossholodragonneck_3057_instances))->get_x()+(cos_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(1)+sin_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(2))*(0-((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(9)));
            ((Active*)*it)->set_y(((Active*)get_instance(bossholodragonneck_3057_instances))->get_y()+sin_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(1)*-1+cos_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_angle(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1)*(0-((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(9)), 0);
        }
        bossholodragoneye_3055_instances.clear_selection();
        for (ObjectIterator it(bossholodragoneye_3055_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossholodragonneck_3057_instances))->get_x()+(cos_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(1)+sin_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(2))*(0-((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(9)));
            ((Active*)*it)->set_y(((Active*)get_instance(bossholodragonneck_3057_instances))->get_y()+sin_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(1)*-1+cos_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_angle(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1)*(0-((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(9)), 0);
        }
        bossholodragonbreath_3048_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbreath_3048_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossholodragonneck_3057_instances))->get_x()+(cos_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(1)+sin_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(2))*(0-((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(9)));
            ((Active*)*it)->set_y(((Active*)get_instance(bossholodragonneck_3057_instances))->get_y()+sin_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(1)*-1+cos_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(2));
        }
        bossholodragonbottomtooth_3050_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbottomtooth_3050_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossholodragonneck_3057_instances))->get_x()+(cos_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1)+((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(7))*((Active*)*it)->alterables->values.get(1)+sin_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1)+((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(7))*((Active*)*it)->alterables->values.get(2))*(0-((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(9)));
            ((Active*)*it)->set_y(((Active*)get_instance(bossholodragonneck_3057_instances))->get_y()+sin_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1)+((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(7))*((Active*)*it)->alterables->values.get(1)*-1+cos_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1)+((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(7))*((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_angle((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1)+((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(7))*(0-((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(9)), 0);
        }
        bossholodragonear_3058_instances.clear_selection();
        for (ObjectIterator it(bossholodragonear_3058_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossholodragonneck_3057_instances))->get_x()+(cos_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(1)+sin_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(2))*(0-((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(9)));
            ((Active*)*it)->set_y(((Active*)get_instance(bossholodragonneck_3057_instances))->get_y()+sin_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(1)*-1+cos_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_angle(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(1)*(0-((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(9)), 0);
        }
        bossholodragonscale2_3052_instances.clear_selection();
        for (ObjectIterator it(bossholodragonscale2_3052_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)*it)->alterables->values.get(0)*15+((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(0)-135)*((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(5));
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+sin_deg(((Active*)*it)->alterables->values.get(0)*15+((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(0)+90-135)*((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(5)*0.125*(0-((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(9)), 0);
        }
        bossholodragonscale3_3053_instances.clear_selection();
        for (ObjectIterator it(bossholodragonscale3_3053_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)*it)->alterables->values.get(0)*15+((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(0)-135)*((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(5));
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+sin_deg(((Active*)*it)->alterables->values.get(0)*15+((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(0)+90-135)*((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(5)*0.125*(0-((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(9)), 0);
        }
        bossholodragonscale4_3054_instances.clear_selection();
        for (ObjectIterator it(bossholodragonscale4_3054_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)*it)->alterables->values.get(0)*15+((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(0)-135)*((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(5));
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+sin_deg(((Active*)*it)->alterables->values.get(0)*15+((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(0)+90-135)*((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(5)*0.125*(0-((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(9)), 0);
        }
    }
    event_1756_55_end: ;
}
void Frames::event_func_12261()
{
    // event 1757_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1757_55_end;
        qualifier_32.clear_selection();
        for (QualifierIterator it(qualifier_32); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(11));
        }
        bossholodragonhitspot3_3071_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot3_3071_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(11));
        }
        bossholodragonhitspot2_3070_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot2_3070_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(11));
        }
        bossholodragonhitspot1_3069_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot1_3069_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(11));
        }
    }
    event_1757_55_end: ;
}
void Frames::event_func_12262()
{
    // event 1758_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1758_55_end;
        bossholodragonpupil_3056_instances.clear_selection();
        for (ObjectIterator it(bossholodragonpupil_3056_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(0);
        }
    }
    event_1758_55_end: ;
}
void Frames::event_func_12263()
{
    // event 1759_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1759_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (-1))) goto event_1759_55_end;
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(11, get_max(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(11)-1, 0));
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(6, 0.5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 50);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(24);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(24);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(24);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(24);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(24);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(24);
        }
    }
    event_1759_55_end: ;
}
void Frames::event_func_12264()
{
    // event 1760_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1760_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (-1))) goto event_1760_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(11)) <= (0))) goto event_1760_55_end;
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.add(12, 1);
    }
    event_1760_55_end: ;
}
void Frames::event_func_12265()
{
    // event 1761_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1761_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (-1))) goto event_1761_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(11)) == (1))) goto event_1761_55_end;
        media.play_id(SOUND_DRAGONROAR2_332, -1, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 1);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unlock_music_82);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1761_55_end: ;
}
void Frames::event_func_12266()
{
    // event 1762_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1762_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (-1))) goto event_1762_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(11)) <= (0))) goto event_1762_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) < (120))) goto event_1762_55_end;
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(7, get_min(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(7)+2, 24));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 12);
    }
    event_1762_55_end: ;
}
void Frames::event_func_12267()
{
    // event 1763_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1763_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (-1))) goto event_1763_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(11)) <= (0))) goto event_1763_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) > (120))) goto event_1763_55_end;
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(7, get_max(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(7)-2, 0));
    }
    event_1763_55_end: ;
}
void Frames::event_func_12268()
{
    // event 1764_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1764_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (-1))) goto event_1764_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) > (140))) goto event_1764_55_end;
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(10, 0);
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(12, 0);
        media.play_id(SOUND_DRAGONROAR_5_333, -1, 1);
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
    }
    event_1764_55_end: ;
}
void Frames::event_func_12269()
{
    // event 1765_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1765_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (0))) goto event_1765_55_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) > (0))) goto event_1765_55_end;
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
    event_1765_55_end: ;
}
void Frames::event_func_12270()
{
    // event 1766_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1766_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (0))) goto event_1766_55_end;
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.add(3, ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(8));
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.add(12, 1);
    }
    event_1766_55_end: ;
}
void Frames::event_func_12271()
{
    // event 1767_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1767_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (0))) goto event_1767_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(9)) == (-1))) goto event_1767_55_end;
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(5, 20-((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(8)*6);
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(6, 2-((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(8)*0.2);
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(8, get_max(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(8)-0.15, -15));
    }
    event_1767_55_end: ;
}
void Frames::event_func_12272()
{
    // event 1768_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1768_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (0))) goto event_1768_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(9)) == (1))) goto event_1768_55_end;
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(5, 20+((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(8)*6);
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(6, 2+((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(8)*0.2);
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(8, get_min(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(8)+0.15, 15));
    }
    event_1768_55_end: ;
}
void Frames::event_func_12273()
{
    // event 1769_55
    bool or_result_1769_55 = false;
    bool or_temp_result_1769_55_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto or_event_1769_55_0_end;
        bossholodragonneck_3057_instances.clear_selection();
        for (ObjectIterator it(bossholodragonneck_3057_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()-2600))) { it.deselect(); continue; }
        }
        if (!bossholodragonneck_3057_instances.has_selection()) goto or_event_1769_55_0_end;
        or_result_1769_55 = true;
        or_temp_result_1769_55_0 = true;
    }
    or_event_1769_55_0_end: ;
    bossholodragonneck_3057_instances.clear_saved_selection();
    if (or_temp_result_1769_55_0) {
        bossholodragonneck_3057_instances.save_selection();
    }
    // event 1769_55
    bool or_temp_result_1769_55_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto or_event_1769_55_1_end;
        bossholodragonneck_3057_instances.clear_selection();
        for (ObjectIterator it(bossholodragonneck_3057_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()+2600))) { it.deselect(); continue; }
        }
        if (!bossholodragonneck_3057_instances.has_selection()) goto or_event_1769_55_1_end;
        or_result_1769_55 = true;
        or_temp_result_1769_55_1 = true;
    }
    or_event_1769_55_1_end: ;
    if (or_temp_result_1769_55_1) {
        bossholodragonneck_3057_instances.save_selection();
    }
    // event 1769_55
    bool or_temp_result_1769_55_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto or_event_1769_55_2_end;
        bossholodragonneck_3057_instances.clear_selection();
        for (ObjectIterator it(bossholodragonneck_3057_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (420))) { it.deselect(); continue; }
        }
        if (!bossholodragonneck_3057_instances.has_selection()) goto or_event_1769_55_2_end;
        or_result_1769_55 = true;
        or_temp_result_1769_55_2 = true;
    }
    or_event_1769_55_2_end: ;
    if (or_temp_result_1769_55_2) {
        bossholodragonneck_3057_instances.save_selection();
    }
    // event 1769_55
    bool or_temp_result_1769_55_3 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto or_event_1769_55_3_end;
        bossholodragonneck_3057_instances.clear_selection();
        for (ObjectIterator it(bossholodragonneck_3057_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) > (0))) { it.deselect(); continue; }
        }
        if (!bossholodragonneck_3057_instances.has_selection()) goto or_event_1769_55_3_end;
        or_result_1769_55 = true;
        or_temp_result_1769_55_3 = true;
        or_event_1769_55_3_end: ;
        if (or_temp_result_1769_55_3) {
            bossholodragonneck_3057_instances.save_selection();
        }
        if (!or_result_1769_55) goto or_final_or_event_1769_55_3_end;
        bossholodragonneck_3057_instances.empty_selection();
        if (or_temp_result_1769_55_0 || or_temp_result_1769_55_1 || or_temp_result_1769_55_2 || or_temp_result_1769_55_3) {
            bossholodragonneck_3057_instances.restore_selection();
        }
        for (ObjectIterator it(bossholodragonneck_3057_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, get_min(((Active*)*it)->alterables->values.get(11)+4, 255));
        }
    }
    or_final_or_event_1769_55_3_end: ;
}
void Frames::event_func_12274()
{
    // event 1770_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1770_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (0))) goto event_1770_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(11)) >= (255))) goto event_1770_55_end;
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(9, 0-((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(9));
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(10, ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(13));
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(12, 0);
        bossholodragonbreath_3048_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbreath_3048_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -30);
        }
    }
    event_1770_55_end: ;
}
void Frames::event_func_12275()
{
    // event 1771_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1771_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (1))) goto event_1771_55_end;
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(8, 0);
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(5, 40);
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(6, 5);
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(3, (((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(3)*9+((Active*)get_instance(player_389_instances))->get_x()-320*((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(9))*0.1);
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.add(12, 1);
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(11, 0);
        bossholodragonlaser_3045_instances.clear_selection();
        for (ObjectIterator it(bossholodragonlaser_3045_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_instance(bossholodragonbreath_3048_instances, it.current_index, default_active_instance))->get_direction());
        }
    }
    event_1771_55_end: ;
}
void Frames::event_func_12276()
{
    // event 1772_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1772_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (1))) goto event_1772_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) == (1))) goto event_1772_55_end;
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.add(12, 1);
        media.play_id(SOUND_BIGCHARGE_200, -1, 1);
    }
    event_1772_55_end: ;
}
void Frames::event_func_12277()
{
    // event 1773_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1773_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (1))) goto event_1773_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) == (150))) goto event_1773_55_end;
        media.play_id(SOUND_DRAGONROAR2_332, -1, 1);
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.add(12, 1);
        media.play_id(SOUND_COMMON_BUBBLESWEEP_169, -1, 1);
    }
    event_1773_55_end: ;
}
void Frames::event_func_12278()
{
    // event 1774_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1774_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (1))) goto event_1774_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) < (150))) goto event_1774_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(9)) == (1))) goto event_1774_55_end;
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()+20);
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1774_55_end: ;
}
void Frames::event_func_12279()
{
    // event 1775_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1775_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (1))) goto event_1775_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) < (150))) goto event_1775_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(9)) == (-1))) goto event_1775_55_end;
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()+global_values->get(16)-20);
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1775_55_end: ;
}
void Frames::event_func_12280()
{
    // event 1776_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1776_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (1))) goto event_1776_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) < (300))) goto event_1776_55_end;
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(7, get_min(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(7)+2, 24));
    }
    event_1776_55_end: ;
}
void Frames::event_func_12281()
{
    // event 1777_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1777_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (1))) goto event_1777_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) >= (300))) goto event_1777_55_end;
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(7, get_max(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(7)-2, 0));
        bossholodragonbreath_3048_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbreath_3048_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        bossholodragonlaser_3045_instances.clear_selection();
        for (ObjectIterator it(bossholodragonlaser_3045_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(height+200);
        }
        for (ObjectIterator it(bossholodragonbreath_3048_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(bossholodragoneye_3055_instances, it.current_index, default_active_instance))->layer->index+1-1);
            ((Active*)*it)->move_back();
            ((Active*)*it)->restore_frame();
        }
    }
    event_1777_55_end: ;
}
void Frames::event_func_12282()
{
    // event 1778_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1778_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (1))) goto event_1778_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) == (320))) goto event_1778_55_end;
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->flags.toggle(1);
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.add(12, 1);
    }
    event_1778_55_end: ;
}
void Frames::event_func_12283()
{
    // event 1779_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1779_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (1))) goto event_1779_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) > (330))) goto event_1779_55_end;
        if (!(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->flags.is_off(1))) goto event_1779_55_end;
        media.play_id(SOUND_DRAGONROAR_5_333, -1, 1);
    }
    event_1779_55_end: ;
}
void Frames::event_func_12284()
{
    // event 1780_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1780_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (1))) goto event_1780_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) > (330))) goto event_1780_55_end;
        if (!(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->flags.is_on(1))) goto event_1780_55_end;
        media.play_id(SOUND_DRAGONROAR_6_334, -1, 1);
    }
    event_1780_55_end: ;
}
void Frames::event_func_12285()
{
    // event 1781_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1781_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (1))) goto event_1781_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) > (330))) goto event_1781_55_end;
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(10, 0);
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(8, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1));
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.add(13, 1);
    }
    event_1781_55_end: ;
}
void Frames::event_func_12286()
{
    // event 1782_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1782_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (1))) goto event_1782_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(7)) >= (24))) goto event_1782_55_end;
        bossholodragonbreath_3048_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbreath_3048_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1782_55_end: ;
}
void Frames::event_func_12287()
{
    // event 1783_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1783_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (1))) goto event_1783_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) > (150))) goto event_1783_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) < (300))) goto event_1783_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(9)) == (1))) goto event_1783_55_end;
        bossholodragonlaser_3045_instances.clear_selection();
        for (ObjectIterator it(bossholodragonlaser_3045_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(bossholodragonbreath_3048_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->set_x(get_max(frame_left()-20, ((Active*)get_instance(bossholodragonbreath_3048_instances, it.current_index, default_active_instance))->get_x()));
        }
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.add(12, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 12);
        bossholodragonbreath_3048_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbreath_3048_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_single(bossholodragonlaser_3045_instances, it.current_index, default_active_instance))->layer->index+1-1);
            ((Active*)*it)->force_frame(0);
        }
        {
            ObjectIterator other_it(bossholodragonlaser_3045_instances);
            for (ObjectIterator it(bossholodragonbreath_3048_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1783_55_0_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_1783_55_0_end: ;
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1783_55_end: ;
}
void Frames::event_func_12288()
{
    // event 1784_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1784_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (1))) goto event_1784_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) > (150))) goto event_1784_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) < (300))) goto event_1784_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(9)) == (-1))) goto event_1784_55_end;
        bossholodragonlaser_3045_instances.clear_selection();
        for (ObjectIterator it(bossholodragonlaser_3045_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(bossholodragonbreath_3048_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->set_x(get_min(frame_left()+global_values->get(16)+20, ((Active*)get_instance(bossholodragonbreath_3048_instances, it.current_index, default_active_instance))->get_x()));
        }
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.add(12, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 12);
        bossholodragonbreath_3048_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbreath_3048_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_single(bossholodragonlaser_3045_instances, it.current_index, default_active_instance))->layer->index+1-1);
            ((Active*)*it)->force_frame(0);
        }
        {
            ObjectIterator other_it(bossholodragonlaser_3045_instances);
            for (ObjectIterator it(bossholodragonbreath_3048_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1784_55_0_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_1784_55_0_end: ;
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1784_55_end: ;
}
void Frames::event_func_12289()
{
    // event 1785_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1785_55_end;
        bossholodragonlaser_3045_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(bossholodragonlaser_3045_instances, playercharactersensor_383_instances)) goto event_1785_55_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1785_55_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (5))) goto event_1785_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) < (6))) goto event_1785_55_end;
        if (!((((Active*)get_instance(playersensorleftbig_391_instances))->alterables->values.get(25)) == (0))) goto event_1785_55_end;
        if (!((((Active*)get_instance(playersensorrightbig_393_instances))->alterables->values.get(25)) == (0))) goto event_1785_55_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(23, ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(9)*10);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_min(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 4));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
    }
    event_1785_55_end: ;
}
void Frames::event_func_12290()
{
    // event 1786_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1786_55_end;
        bossholodragonlaser_3045_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(bossholodragonlaser_3045_instances, playercharactersensor_383_instances)) goto event_1786_55_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1786_55_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1786_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) < (6))) goto event_1786_55_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1786_55_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 3);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
    }
    event_1786_55_end: ;
}
void Frames::event_func_12291()
{
    // event 1787_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1787_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (2))) goto event_1787_55_end;
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.add(12, 1);
        bossholodragonclaw_3068_instances.clear_selection();
        for (ObjectIterator it(bossholodragonclaw_3068_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1787_55_end: ;
}
void Frames::event_func_12292()
{
    // event 1788_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1788_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (2))) goto event_1788_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) == (1))) goto event_1788_55_end;
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.add(12, 1);
    }
    event_1788_55_end: ;
}
void Frames::event_func_12293()
{
    // event 1789_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1789_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (2))) goto event_1789_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) < (70))) goto event_1789_55_end;
        bossholodragonclaw_3068_instances.clear_selection();
        for (ObjectIterator it(bossholodragonclaw_3068_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(player_389_instances))->get_y()-220);
            ((Active*)*it)->set_x(((((Active*)*it)->get_x()-((Active*)*it)->alterables->values.get(3)*64)*9+((Active*)get_instance(player_389_instances))->get_x())*0.1+((Active*)*it)->alterables->values.get(3)*64);
            ((Active*)*it)->blend_color.set_alpha_coefficient(get_max(255-((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)*10, 0));
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1789_55_end: ;
}
void Frames::event_func_12294()
{
    // event 1790_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1790_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (2))) goto event_1790_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) >= (70))) goto event_1790_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) < (80))) goto event_1790_55_end;
        bossholodragonclaw_3068_instances.clear_selection();
        for (ObjectIterator it(bossholodragonclaw_3068_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-4);
        }
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->flags.disable(4);
    }
    event_1790_55_end: ;
}
void Frames::event_func_12295()
{
    // event 1791_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1791_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (2))) goto event_1791_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) >= (80))) goto event_1791_55_end;
        bossholodragonclaw_3068_instances.clear_selection();
        for (ObjectIterator it(bossholodragonclaw_3068_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y()+20, ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(4)));
        }
    }
    event_1791_55_end: ;
}
void Frames::event_func_12296()
{
    // event 1792_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1792_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (2))) goto event_1792_55_end;
        bossholodragonclaw_3068_instances.clear_selection();
        for (ObjectIterator it(bossholodragonclaw_3068_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(4)))) { it.deselect(); continue; }
        }
        if (!bossholodragonclaw_3068_instances.has_selection()) goto event_1792_55_end;
        if (!(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->flags.is_off(4))) goto event_1792_55_end;
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->flags.enable(4);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 4));
        media.play_id(SOUND_COMMON_SLAM2_132, -1, 1);
    }
    event_1792_55_end: ;
}
void Frames::event_func_12297()
{
    // event 1793_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1793_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (2))) goto event_1793_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) > (150))) goto event_1793_55_end;
        bossholodragonclaw_3068_instances.clear_selection();
        for (ObjectIterator it(bossholodragonclaw_3068_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(get_min((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)-150)*15, 255));
        }
    }
    event_1793_55_end: ;
}
void Frames::event_func_12298()
{
    // event 1794_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1794_55_end;
        bossholodragonclaw_3068_instances.clear_selection();
        player_389_instances.clear_selection();
        if (!check_overlap(bossholodragonclaw_3068_instances, player_389_instances)) goto event_1794_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (2))) goto event_1794_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) >= (80))) goto event_1794_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) < (150))) goto event_1794_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) < (6))) goto event_1794_55_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1794_55_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1794_55_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
    }
    event_1794_55_end: ;
}
void Frames::event_func_12299()
{
    // event 1795_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1795_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (2))) goto event_1795_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) > (180))) goto event_1795_55_end;
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(13, 2);
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(10, 1);
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(12, 300);
        bossholodragonclaw_3068_instances.clear_selection();
        for (ObjectIterator it(bossholodragonclaw_3068_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(height+100);
        }
    }
    event_1795_55_end: ;
}
void Frames::event_func_12300()
{
    // event 1796_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1796_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (3))) goto event_1796_55_end;
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.add(12, 1);
    }
    event_1796_55_end: ;
}
void Frames::event_func_12301()
{
    // event 1797_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1797_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (3))) goto event_1797_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)%math_helper%10) == (5))) goto event_1797_55_end;
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.add(12, 1);
        FrameObject * single_instance_1797_55_0; single_instance_1797_55_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossholodragonflame_3046(parent->x + 0, parent->y + -500), parent->layer);
                if (single_instance_1797_55_0 == NULL)
                    single_instance_1797_55_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1797_55_0))->alterables->values.set(0, cos_deg(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)*5)*120);
        ((Active*)((Active*)single_instance_1797_55_0))->alterables->values.set(1, -120-randrange(20));
    }
    event_1797_55_end: ;
}
void Frames::event_func_12302()
{
    // event 1798_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1798_55_end;
        bossholodragonflame_3046_instances.clear_selection();
        for (ObjectIterator it(bossholodragonflame_3046_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!bossholodragonflame_3046_instances.has_selection()) goto event_1798_55_end;
        for (ObjectIterator it(bossholodragonflame_3046_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(player_389_instances))->get_x()+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)get_instance(player_389_instances))->get_y()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->blend_color.set_alpha_coefficient(get_max(((Active*)*it)->alterables->values.get(3), 0));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(3)-10);
        }
    }
    event_1798_55_end: ;
}
void Frames::event_func_12303()
{
    // event 1799_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1799_55_end;
        bossholodragonflame_3046_instances.clear_selection();
        for (ObjectIterator it(bossholodragonflame_3046_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (-200))) { it.deselect(); continue; }
        }
        if (!bossholodragonflame_3046_instances.has_selection()) goto event_1799_55_end;
        for (ObjectIterator it(bossholodragonflame_3046_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(player_389_instances))->x + 0, ((Active*)get_instance(player_389_instances))->y + 0));
            ((Active*)*it)->get_movement()->set_speed(100);
        }
    }
    event_1799_55_end: ;
}
void Frames::event_func_12304()
{
    // event 1800_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1800_55_end;
        bossholodragonflame_3046_instances.clear_selection();
        for (ObjectIterator it(bossholodragonflame_3046_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->is_near_border(-80))) { it.deselect(); continue; }
        }
        if (!bossholodragonflame_3046_instances.has_selection()) goto event_1800_55_end;
        for (ObjectIterator it(bossholodragonflame_3046_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1800_55_end: ;
}
void Frames::event_func_12305()
{
    // event 1803_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1803_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (3))) goto event_1803_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) > (210))) goto event_1803_55_end;
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(10, 1);
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(12, 300);
    }
    event_1803_55_end: ;
}
void Frames::event_func_12306()
{
    // event 1804_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1804_55_end;
        bossholodragonhitspot1_3069_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot1_3069_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bossholodragonscale2_3052_instances, it.current_index));
            if (parent == NULL) goto pos_end_1804_55_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + -24);
            pos_end_1804_55_0: ;
        }
        bossholodragonhitspot2_3070_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot2_3070_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bossholodragonscale3_3053_instances, it.current_index));
            if (parent == NULL) goto pos_end_1804_55_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + -24);
            pos_end_1804_55_1: ;
        }
        bossholodragonhitspot3_3071_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot3_3071_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bossholodragonscale4_3054_instances, it.current_index));
            if (parent == NULL) goto pos_end_1804_55_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + -18);
            pos_end_1804_55_2: ;
        }
    }
    event_1804_55_end: ;
}
void Frames::event_func_12307()
{
    // event 1805_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1805_55_end;
        bossholodragonhitspot1_3069_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot1_3069_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossholodragonhitspot1_3069_instances.has_selection()) goto event_1805_55_end;
        for (ObjectIterator it(bossholodragonhitspot1_3069_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1805_55_end: ;
}
void Frames::event_func_12308()
{
    // event 1806_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1806_55_end;
        bossholodragonhitspot1_3069_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot1_3069_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossholodragonhitspot1_3069_instances.has_selection()) goto event_1806_55_end;
        for (ObjectIterator it(bossholodragonhitspot1_3069_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1806_55_end: ;
}
void Frames::event_func_12309()
{
    // event 1807_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1807_55_end;
        bossholodragonhitspot2_3070_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot2_3070_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossholodragonhitspot2_3070_instances.has_selection()) goto event_1807_55_end;
        for (ObjectIterator it(bossholodragonhitspot2_3070_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1807_55_end: ;
}
void Frames::event_func_12310()
{
    // event 1808_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1808_55_end;
        bossholodragonhitspot2_3070_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot2_3070_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossholodragonhitspot2_3070_instances.has_selection()) goto event_1808_55_end;
        for (ObjectIterator it(bossholodragonhitspot2_3070_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1808_55_end: ;
}
void Frames::event_func_12311()
{
    // event 1809_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1809_55_end;
        bossholodragonhitspot3_3071_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot3_3071_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossholodragonhitspot3_3071_instances.has_selection()) goto event_1809_55_end;
        for (ObjectIterator it(bossholodragonhitspot3_3071_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1809_55_end: ;
}
void Frames::event_func_12312()
{
    // event 1810_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1810_55_end;
        bossholodragonhitspot3_3071_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot3_3071_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossholodragonhitspot3_3071_instances.has_selection()) goto event_1810_55_end;
        for (ObjectIterator it(bossholodragonhitspot3_3071_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1810_55_end: ;
}
void Frames::event_func_12313()
{
    // event 1811_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1811_55_end;
        bossholodragonhitspot1_3069_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot1_3069_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bossholodragonhitspot1_3069_instances.has_selection()) goto event_1811_55_end;
        for (ObjectIterator it(bossholodragonhitspot1_3069_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        media.stop_sample(SOUND_COMMON_STRIKE_23);
        media.play_id(SOUND_METALHIT_45, -1, 1);
        FrameObject * single_instance_1811_55_0; single_instance_1811_55_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossholodragonhitspot1_3069_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1811_55_0 == NULL)
                    single_instance_1811_55_0 = new_obj;
            }
        }
        for (ObjectIterator it(bossholodragonhitspot1_3069_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.add(14, 1);
    }
    event_1811_55_end: ;
}
void Frames::event_func_12314()
{
    // event 1812_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1812_55_end;
        bossholodragonhitspot2_3070_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot2_3070_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bossholodragonhitspot2_3070_instances.has_selection()) goto event_1812_55_end;
        for (ObjectIterator it(bossholodragonhitspot2_3070_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        media.stop_sample(SOUND_COMMON_STRIKE_23);
        media.play_id(SOUND_METALHIT_45, -1, 1);
        FrameObject * single_instance_1812_55_0; single_instance_1812_55_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossholodragonhitspot2_3070_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1812_55_0 == NULL)
                    single_instance_1812_55_0 = new_obj;
            }
        }
        for (ObjectIterator it(bossholodragonhitspot2_3070_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.add(14, 1);
    }
    event_1812_55_end: ;
}
void Frames::event_func_12315()
{
    // event 1813_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1813_55_end;
        bossholodragonhitspot3_3071_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot3_3071_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bossholodragonhitspot3_3071_instances.has_selection()) goto event_1813_55_end;
        for (ObjectIterator it(bossholodragonhitspot3_3071_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        media.stop_sample(SOUND_COMMON_STRIKE_23);
        media.play_id(SOUND_METALHIT_45, -1, 1);
        FrameObject * single_instance_1813_55_0; single_instance_1813_55_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossholodragonhitspot3_3071_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1813_55_0 == NULL)
                    single_instance_1813_55_0 = new_obj;
            }
        }
        for (ObjectIterator it(bossholodragonhitspot3_3071_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.add(14, 1);
    }
    event_1813_55_end: ;
}
void Frames::event_func_12316()
{
    // event 1814_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1814_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) < (6))) goto event_1814_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(14)) > (bossholodragonhitspot1_3069_instances.size()+bossholodragonhitspot2_3070_instances.size()+bossholodragonhitspot3_3071_instances.size()-5))) goto event_1814_55_end;
        bossholodragoneye2_3072_instances.clear_selection();
        for (ObjectIterator it(bossholodragoneye2_3072_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->set_direction(((Active*)get_instance(bossholodragoneye_3055_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->set_angle(((Active*)get_instance(bossholodragoneye_3055_instances, it.current_index, default_active_instance))->get_angle(), 0);
        }
        for (ObjectIterator it(bossholodragoneye2_3072_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bossholodragoneye_3055_instances, it.current_index));
            if (parent == NULL) goto pos_end_1814_55_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1814_55_0: ;
        }
    }
    event_1814_55_end: ;
}
void Frames::event_func_12317()
{
    // event 1815_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1815_55_end;
        bossholodragoneye2_3072_instances.clear_selection();
        for (ObjectIterator it(bossholodragoneye2_3072_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (10))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossholodragoneye2_3072_instances.has_selection()) goto event_1815_55_end;
        for (ObjectIterator it(bossholodragoneye2_3072_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->flags.toggle(1);
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1815_55_end: ;
}
void Frames::event_func_12318()
{
    // event 1816_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1816_55_end;
        bossholodragoneye2_3072_instances.clear_selection();
        for (ObjectIterator it(bossholodragoneye2_3072_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (10))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!bossholodragoneye2_3072_instances.has_selection()) goto event_1816_55_end;
        for (ObjectIterator it(bossholodragoneye2_3072_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->flags.toggle(1);
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1816_55_end: ;
}
void Frames::event_func_12319()
{
    // event 1817_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1817_55_end;
        bossholodragoneye2_3072_instances.clear_selection();
        for (ObjectIterator it(bossholodragoneye2_3072_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!bossholodragoneye2_3072_instances.has_selection()) goto event_1817_55_end;
        for (ObjectIterator it(bossholodragoneye2_3072_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->alterables->values.set(3, 9);
        }
    }
    event_1817_55_end: ;
}
void Frames::event_func_12320()
{
    // event 1818_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_6_defeated_1)) goto event_1818_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) < (6))) goto event_1818_55_end;
        bossholodragoneye2_3072_instances.clear_selection();
        for (ObjectIterator it(bossholodragoneye2_3072_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bossholodragoneye2_3072_instances.has_selection()) goto event_1818_55_end;
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(10, 6);
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(7, 24);
        bossholodragonpupil_3056_instances.clear_selection();
        for (ObjectIterator it(bossholodragonpupil_3056_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(0.4);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_1000_209);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
        for (ObjectIterator it(bossholodragoneye2_3072_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(6, 0);
        media.stop_sample(SOUND_DRAGONROAR2_332);
        media.stop_sample(SOUND_DRAGONROAR_5_333);
        media.stop_sample(SOUND_DRAGONROAR_6_334);
        media.play_id(SOUND_DRAGONROAR_4_336, -1, 1);
        bossholodragonbreath_3048_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbreath_3048_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bossholodragonlaser_3045_instances.clear_selection();
        for (ObjectIterator it(bossholodragonlaser_3045_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(12, 0);
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
            group_pause_1 = false;
    
    }
    event_1818_55_end: ;
}
void Frames::event_func_12321()
{
    // event 1819_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_6_defeated_1)) goto event_1819_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (6))) goto event_1819_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) < (400))) goto event_1819_55_end;
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.add(12, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)*19+((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(3))*0.05);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)*19+((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(4))*0.05);
    }
    event_1819_55_end: ;
}
void Frames::event_func_12322()
{
    // event 1820_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_6_defeated_1)) goto event_1820_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (6))) goto event_1820_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) > (100))) goto event_1820_55_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1820_55_end;
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1820_55_0_end;
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
        dynamic_1820_55_0_end: ;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+10, 10));
    }
    event_1820_55_end: ;
}
void Frames::event_func_12323()
{
    // event 1821_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_6_defeated_1)) goto event_1821_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (6))) goto event_1821_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) > (100))) goto event_1821_55_end;
        FrameObject * single_instance_1821_55_0; single_instance_1821_55_0 = NULL;
        // select single: true false false
        bossholodragoneye_3055_instances.clear_selection();
        for (ObjectIterator p_it(bossholodragoneye_3055_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1821_55_0 == NULL)
                    single_instance_1821_55_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1821_55_0))->set_y(((Active*)single_instance_1821_55_0)->get_y()+randrange(200));
        ((Active*)((Active*)single_instance_1821_55_0))->set_x(((Active*)single_instance_1821_55_0)->get_x()+100-randrange(200));
    }
    event_1821_55_end: ;
}
void Frames::event_func_12324()
{
    // event 1822_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_6_defeated_1)) goto event_1822_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (6))) goto event_1822_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) > (100))) goto event_1822_55_end;
        bossholodragonscale2_3052_instances.clear_selection();
        FrameObject * single_instance_1822_55_0; single_instance_1822_55_0 = pick_random(bossholodragonscale2_3052_instances);
        if (single_instance_1822_55_0 == NULL) goto event_1822_55_end;
        FrameObject * single_instance_1822_55_1; single_instance_1822_55_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(((Active*)single_instance_1822_55_0)->x + 0, ((Active*)single_instance_1822_55_0)->y + 0), ((Active*)single_instance_1822_55_0)->layer);
            if (single_instance_1822_55_1 == NULL)
                single_instance_1822_55_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1822_55_1))->set_y(((Active*)single_instance_1822_55_1)->get_y()+randrange(100));
    }
    event_1822_55_end: ;
}
void Frames::event_func_12325()
{
    // event 1823_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_6_defeated_1)) goto event_1823_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (6))) goto event_1823_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) > (100))) goto event_1823_55_end;
        bossholodragonscale3_3053_instances.clear_selection();
        FrameObject * single_instance_1823_55_0; single_instance_1823_55_0 = pick_random(bossholodragonscale3_3053_instances);
        if (single_instance_1823_55_0 == NULL) goto event_1823_55_end;
        FrameObject * single_instance_1823_55_1; single_instance_1823_55_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(((Active*)single_instance_1823_55_0)->x + 0, ((Active*)single_instance_1823_55_0)->y + 0), ((Active*)single_instance_1823_55_0)->layer);
            if (single_instance_1823_55_1 == NULL)
                single_instance_1823_55_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1823_55_1))->set_y(((Active*)single_instance_1823_55_1)->get_y()+randrange(100));
    }
    event_1823_55_end: ;
}
void Frames::event_func_12326()
{
    // event 1824_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_6_defeated_1)) goto event_1824_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (6))) goto event_1824_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) > (100))) goto event_1824_55_end;
        bossholodragonscale4_3054_instances.clear_selection();
        FrameObject * single_instance_1824_55_0; single_instance_1824_55_0 = pick_random(bossholodragonscale4_3054_instances);
        if (single_instance_1824_55_0 == NULL) goto event_1824_55_end;
        FrameObject * single_instance_1824_55_1; single_instance_1824_55_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(((Active*)single_instance_1824_55_0)->x + 0, ((Active*)single_instance_1824_55_0)->y + 0), ((Active*)single_instance_1824_55_0)->layer);
            if (single_instance_1824_55_1 == NULL)
                single_instance_1824_55_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1824_55_1))->set_y(((Active*)single_instance_1824_55_1)->get_y()+randrange(100));
    }
    event_1824_55_end: ;
}
void Frames::event_func_12327()
{
    // event 1825_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_6_defeated_1)) goto event_1825_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (6))) goto event_1825_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) == (400))) goto event_1825_55_end;
        media.play_id(SOUND_COMMON_BOSSEXPLODE_76, -1, 1);
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
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(10, 7);
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(12, 0);
    }
    event_1825_55_end: ;
}
void Frames::event_func_12328()
{
    // event 1826_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_6_defeated_1)) goto event_1826_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (7))) goto event_1826_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) < (100))) goto event_1826_55_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(((Active*)*it)->blend_color.get_semi_transparency()-8, 0));
        }
    }
    event_1826_55_end: ;
}
void Frames::event_func_12329()
{
    // event 1827_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_6_defeated_1)) goto event_1827_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (7))) goto event_1827_55_end;
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.add(12, 1);
    }
    event_1827_55_end: ;
}
void Frames::event_func_12330()
{
    // event 1828_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_6_defeated_1)) goto event_1828_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (7))) goto event_1828_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) == (19))) goto event_1828_55_end;
        if (once_condition_1828_55) goto event_1828_55_end;
        once_condition_1828_55 = true;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 50);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, 1460);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, 1192);
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
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 6100);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 1740);
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
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 0);
        bossholodragonhitspot1_3069_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot1_3069_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonhitspot2_3070_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot2_3070_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonhitspot3_3071_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot3_3071_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonbreath_3048_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbreath_3048_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonlaser_3045_instances.clear_selection();
        for (ObjectIterator it(bossholodragonlaser_3045_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragontoptooth_3049_instances.clear_selection();
        for (ObjectIterator it(bossholodragontoptooth_3049_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonbottomtooth_3050_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbottomtooth_3050_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonscale_3051_instances.clear_selection();
        for (ObjectIterator it(bossholodragonscale_3051_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonscale2_3052_instances.clear_selection();
        for (ObjectIterator it(bossholodragonscale2_3052_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonscale3_3053_instances.clear_selection();
        for (ObjectIterator it(bossholodragonscale3_3053_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonscale4_3054_instances.clear_selection();
        for (ObjectIterator it(bossholodragonscale4_3054_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonear_3058_instances.clear_selection();
        for (ObjectIterator it(bossholodragonear_3058_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragoneye_3055_instances.clear_selection();
        for (ObjectIterator it(bossholodragoneye_3055_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonpupil_3056_instances.clear_selection();
        for (ObjectIterator it(bossholodragonpupil_3056_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonbrow_3059_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbrow_3059_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        effectplasmaburst_3047_instances.clear_selection();
        for (ObjectIterator it(effectplasmaburst_3047_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonflame_3046_instances.clear_selection();
        for (ObjectIterator it(bossholodragonflame_3046_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonclaw_3068_instances.clear_selection();
        for (ObjectIterator it(bossholodragonclaw_3068_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1828_55_end: ;
}
