#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_12937()
{
    // event 1963_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_arena_1)) goto event_1963_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (11650))) goto event_1963_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (670))) goto event_1963_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) == (0))) goto event_1963_58_end;
        ((Active*)get_instance(guigoalmessage_3195_instances))->force_frame(1);
        ((Active*)get_instance(guigoalmessage_3195_instances))->set_x(((Active*)get_instance(guigoalmessage_3195_instances))->get_x()+global_values->get(16)*0.5);
        ((Counter*)get_instance(guienemiesleft_3194_instances))->set_x(((Counter*)get_instance(guienemiesleft_3194_instances))->get_x()+global_values->get(16)*0.5);
        ((Active*)get_instance(guigoalmessage_3195_instances))->set_visible(true);
        ((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.add(0, 1);
        media.play_id(SOUND_CROWD_CHEER_365, -1, 1);
        levelthcollapsingplatform_3164_instances.clear_selection();
        for (ObjectIterator it(levelthcollapsingplatform_3164_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1963_58_end: ;
}
void Frames::event_func_12938()
{
    // event 1964_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_arena_1)) goto event_1964_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) == (1))) goto event_1964_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_1964_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(3)) > (15))) goto event_1964_58_end;
        ((Active*)get_instance(guigoalmessage_3195_instances))->force_frame(2);
        ((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.set(3, 15);
    }
    event_1964_58_end: ;
}
void Frames::event_func_12939()
{
    // event 1965_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_arena_1)) goto event_1965_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) == (1))) goto event_1965_58_end;
        ((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.add(1, 1);
    }
    event_1965_58_end: ;
}
void Frames::event_func_12940()
{
    // event 1966_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_arena_1)) goto event_1966_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) == (1))) goto event_1966_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(1)) > (120))) goto event_1966_58_end;
        ((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.set(0, 2);
        ((Active*)get_instance(guigoalmessage_3195_instances))->force_frame(0);
        ((Counter*)get_instance(guienemiesleft_3194_instances))->set_visible(true);
        ((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.set(1, 0);
    }
    event_1966_58_end: ;
}
void Frames::event_func_12941()
{
    // event 1967_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_arena_1)) goto event_1967_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) >= (1))) goto event_1967_58_end;
        ((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.add(2, 1);
        ((Counter*)get_instance(guienemiesleft_3194_instances))->set(((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(3)+enemybikeninjamask_3171_instances.size());
    }
    event_1967_58_end: ;
}
void Frames::event_func_12942()
{
    // event 1968_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_arena_1)) goto event_1968_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) >= (1))) goto event_1968_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(2)) > (15))) goto event_1968_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(3)) > (0))) goto event_1968_58_end;
        if (!((enemybikeninjamask_3171_instances.size()) < (15))) goto event_1968_58_end;
        ((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.set(2, 0);
        effectbikeninjawarning_3170_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectbikeninjawarning_3170(12248, 312), 3);
            effectbikeninjawarning_3170_instances.add_back();
        }
        enemybikeninjamask_3171_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemybikeninjamask_3171(12248, 312), 3);
            enemybikeninjamask_3171_instances.add_back();
        }
        enemybikeninja_3172_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemybikeninja_3172(12248, 312), 3);
            enemybikeninja_3172_instances.add_back();
        }
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -2);
        }
        ((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.sub(3, 1);
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_x()+(((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(3)%math_helper%3-1)*128);
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(4, (((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(3)%math_helper%2)*2-1);
        }
    }
    event_1968_58_end: ;
}
void Frames::event_func_12943()
{
    // event 1969_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_arena_1)) goto event_1969_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) >= (1))) goto event_1969_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) < (3))) goto event_1969_58_end;
        if (!((((Counter*)get_instance(guienemiesleft_3194_instances))->value) < (20))) goto event_1969_58_end;
        enemybikeninjadefeated_3168_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjadefeated_3168_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!enemybikeninjadefeated_3168_instances.has_selection()) goto event_1969_58_end;
        FrameObject * single_instance_1969_58_0; single_instance_1969_58_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybikeninjadefeated_3168_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectpetal_302(parent->x + 0, parent->y + -16), parent->layer);
                if (single_instance_1969_58_0 == NULL)
                    single_instance_1969_58_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1969_58_0))->advance_movement(+1);
        ((Active*)((Active*)single_instance_1969_58_0))->alterables->values.set(0, 2);
        ((Active*)((Active*)single_instance_1969_58_0))->set_direction(8);
    }
    event_1969_58_end: ;
}
void Frames::event_func_12944()
{
    // event 1970_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_arena_1)) goto event_1970_58_end;
        enemybikeninjadefeated_3168_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjadefeated_3168_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!enemybikeninjadefeated_3168_instances.has_selection()) goto event_1970_58_end;
        for (ObjectIterator it(enemybikeninjadefeated_3168_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    event_1970_58_end: ;
}
void Frames::event_func_12945()
{
    // event 1971_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_arena_1)) goto event_1971_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) >= (1))) goto event_1971_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) < (3))) goto event_1971_58_end;
        every_1971_58 += manager.dt;
        if (every_1971_58 < 6.0) goto event_1971_58_end;
        every_1971_58 -= 6.0;
        media.play_id(SOUND_CROWD_CHEER_365, -1, 1);
    }
    event_1971_58_end: ;
}
void Frames::event_func_12946()
{
    // event 1972_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_arena_1)) goto event_1972_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) >= (1))) goto event_1972_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) < (3))) goto event_1972_58_end;
        if (!((((Counter*)get_instance(guienemiesleft_3194_instances))->value) <= (0))) goto event_1972_58_end;
        media.play_id(SOUND_CROWD_CHEER_365, -1, 1);
        ((Active*)get_instance(guigoalmessage_3195_instances))->set_visible(false);
        ((Counter*)get_instance(guienemiesleft_3194_instances))->set_visible(false);
        ((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.set(0, 3);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_3000_113);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
    }
    event_1972_58_end: ;
}
void Frames::event_func_12947()
{
    // event 1973_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_arena_1)) goto event_1973_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) == (3))) goto event_1973_58_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) < (40))) goto event_1973_58_end;
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
    event_1973_58_end: ;
}
void Frames::event_func_12948()
{
    // event 1974_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_arena_1)) goto event_1974_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) == (3))) goto event_1974_58_end;
        ((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.add(1, 1);
    }
    event_1974_58_end: ;
}
void Frames::event_func_12949()
{
    // event 1975_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_arena_1)) goto event_1975_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) == (3))) goto event_1975_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(1)) > (150))) goto event_1975_58_end;
        ((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.add(0, 1);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unlock_music_82);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 1);
        if (!group_main_engine_level_specific_methods_bosses_boss_spade_1) {
            group_main_engine_level_specific_methods_bosses_boss_spade_1 = true;
        }
    }
    event_1975_58_end: ;
}
void Frames::event_func_12950()
{
    // event 1976_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_arena_1)) goto event_1976_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) == (4))) goto event_1976_58_end;
        every_1976_58 += manager.dt;
        if (every_1976_58 < 6.0) goto event_1976_58_end;
        every_1976_58 -= 6.0;
        media.play_id(SOUND_CROWD_CHEER_365, -1, 1);
    }
    event_1976_58_end: ;
}
void Frames::event_func_12951()
{
    // event 1977_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_arena_1)) goto event_1977_58_end;
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(bossspade_2194_instances, default_active_instance))->get_x()-20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(bossspade_2194_instances, default_active_instance))->get_x()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(bossspade_2194_instances, default_active_instance))->get_y()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(bossspade_2194_instances, default_active_instance))->get_y()+20))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!objectcrystal_279_instances.has_selection()) goto event_1977_58_end;
        FrameObject * single_instance_1977_58_0; single_instance_1977_58_0 = pick_random(objectcrystal_279_instances);
        if (single_instance_1977_58_0 == NULL) goto event_1977_58_end;
        ((Active*)((Active*)single_instance_1977_58_0))->alterables->values.set(5, 1);
        ((Active*)get_instance(playercharactersensor_383_instances))->alterables->flags.enable(0);
    }
    event_1977_58_end: ;
}
void Frames::event_func_12952()
{
    // event 1978_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_arena_1)) goto event_1978_58_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(bossspade_2194_instances, default_active_instance))->get_x()-20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(bossspade_2194_instances, default_active_instance))->get_x()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(bossspade_2194_instances, default_active_instance))->get_y()-32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(bossspade_2194_instances, default_active_instance))->get_y()+20))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!objectpetal_302_instances.has_selection()) goto event_1978_58_end;
        FrameObject * single_instance_1978_58_0; single_instance_1978_58_0 = pick_random(objectpetal_302_instances);
        if (single_instance_1978_58_0 == NULL) goto event_1978_58_end;
        ((Active*)get_instance(playercharactersensor_383_instances))->alterables->flags.enable(0);
        media.play_id(SOUND_ITEM_PETALGET2_4, -1, 1);
        effectsheart_307_instances.empty_selection();
        // select single: false true false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsheart_307(((Active*)single_instance_1978_58_0)->x + 0, ((Active*)single_instance_1978_58_0)->y + 0), ((Active*)single_instance_1978_58_0)->layer);
            effectsheart_307_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsheart_307(((Active*)single_instance_1978_58_0)->x + 0, ((Active*)single_instance_1978_58_0)->y + 0), ((Active*)single_instance_1978_58_0)->layer);
            effectsheart_307_instances.add_back();
        }
        ((Active*)((Active*)single_instance_1978_58_0))->destroy();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)single_instance_1978_58_0)->get_x()+randrange(16)-randrange(16));
            ((Active*)*it)->set_y(((Active*)single_instance_1978_58_0)->get_y()+randrange(16)-randrange(16));
            ((Active*)*it)->alterables->values.set(1, randrange(36));
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
        }
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 5);
        }
    }
    event_1978_58_end: ;
}
void Frames::event_func_12953()
{
    // event 1981_58
    {
        if (!(group_main_engine_1)) goto event_1981_58_end;
        if (!((global_values->get(4)) < (5))) goto event_1981_58_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()))) goto event_1981_58_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()))) goto event_1981_58_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) > (((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()-500))) goto event_1981_58_end;
        if (not_always_1981_58 > loop_count) {
            not_always_1981_58 = loop_count + 2;
            goto event_1981_58_end;
        }
        not_always_1981_58 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 1);
    }
    event_1981_58_end: ;
}
void Frames::event_func_12954()
{
    // event 1984_58
    {
        if (!(group_main_engine_1)) goto event_1984_58_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(3)) == (149))) goto event_1984_58_end;
        if (once_condition_1984_58) goto event_1984_58_end;
        once_condition_1984_58 = true;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 50)) == (0))) goto event_1984_58_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25)) <= (300000))) goto event_1984_58_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 2, 50);
    }
    event_1984_58_end: ;
}
void Frames::event_func_12955()
{
    // event 1985_58
    {
        if (!(group_main_engine_1)) goto event_1985_58_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(3)) == (149))) goto event_1985_58_end;
        if (once_condition_1985_58) goto event_1985_58_end;
        once_condition_1985_58 = true;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 30)) == (0))) goto event_1985_58_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 71)) > (0))) goto event_1985_58_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 72)) > (0))) goto event_1985_58_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 73)) > (0))) goto event_1985_58_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 74)) > (0))) goto event_1985_58_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 75)) > (0))) goto event_1985_58_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 76)) > (0))) goto event_1985_58_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 77)) > (0))) goto event_1985_58_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 78)) > (0))) goto event_1985_58_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 79)) > (0))) goto event_1985_58_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 80)) > (0))) goto event_1985_58_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 2, 30);
    }
    event_1985_58_end: ;
}
void Frames::event_func_12956()
{
    // event 1986_58
    {
        if (!(group_main_engine_1)) goto event_1986_58_end;
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (3))) { it.deselect(); continue; }
        }
        if (!bossspadehitbox_2232_instances.has_selection()) goto event_1986_58_end;
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 1);
        }
    }
    event_1986_58_end: ;
}
void Frames::event_func_12957()
{
    // event 1987_58
    {
        if (!(group_main_engine_1)) goto event_1987_58_end;
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!bossspadehitbox_2232_instances.has_selection()) goto event_1987_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_1987_58_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 15)), 2, 15);
    }
    event_1987_58_end: ;
}
void Frames::event_func_12958()
{
    // event 1988_58
    {
        if (!(group_main_engine_1)) goto event_1988_58_end;
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!bossspadehitbox_2232_instances.has_selection()) goto event_1988_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_1988_58_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 12)), 2, 12);
    }
    event_1988_58_end: ;
}
void Frames::event_func_12959()
{
    // event 1989_58
    {
        if (!(group_main_engine_1)) goto event_1989_58_end;
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!bossspadehitbox_2232_instances.has_selection()) goto event_1989_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (20))) goto event_1989_58_end;
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1073741824))) { it.deselect(); continue; }
        }
        if (!shieldinstashield_359_instances.has_selection()) goto event_1989_58_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 13)), 2, 13);
    }
    event_1989_58_end: ;
}
void Frames::event_func_12960()
{
    // event 1990_58
    {
        if (!(group_main_engine_1)) goto event_1990_58_end;
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!bossspadehitbox_2232_instances.has_selection()) goto event_1990_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (20))) goto event_1990_58_end;
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(16384))) { it.deselect(); continue; }
        }
        if (!shieldinstashield_359_instances.has_selection()) goto event_1990_58_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 13)), 2, 13);
    }
    event_1990_58_end: ;
}
void Frames::event_func_12961()
{
    // event 1991_58
    {
        if (!(group_main_engine_1)) goto event_1991_58_end;
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!bossspadehitbox_2232_instances.has_selection()) goto event_1991_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1991_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (21))) goto event_1991_58_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 10)), 2, 10);
    }
    event_1991_58_end: ;
}
void Frames::event_func_12962()
{
    // event 1992_58
    {
        if (!(group_main_engine_1)) goto event_1992_58_end;
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!bossspadehitbox_2232_instances.has_selection()) goto event_1992_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1992_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (26))) goto event_1992_58_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 11)), 2, 11);
    }
    event_1992_58_end: ;
}
void Frames::event_func_12963()
{
    // event 1993_58
    {
        if (!(group_main_engine_1)) goto event_1993_58_end;
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!bossspadehitbox_2232_instances.has_selection()) goto event_1993_58_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (44))) goto event_1993_58_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 14)), 2, 14);
    }
    event_1993_58_end: ;
}
void Frames::event_func_12964()
{
    // event 1994_58
    {
        if (!(group_main_engine_1)) goto event_1994_58_end;
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!bossspadehitbox_2232_instances.has_selection()) goto event_1994_58_end;
        playerreflect_447_instances.clear_selection();
        if (!check_overlap(playerreflect_447_instances, bossspadehitbox_2232_instances)) goto event_1994_58_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (3))) goto event_1994_58_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 16)), 2, 16);
    }
    event_1994_58_end: ;
}
void Frames::event_func_12965()
{
    // event 1995_58
    {
        if (!(group_main_engine_1)) goto event_1995_58_end;
        bossspadehitbox_2232_instances.clear_selection();
        for (ObjectIterator it(bossspadehitbox_2232_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!bossspadehitbox_2232_instances.has_selection()) goto event_1995_58_end;
        playerreflect_447_instances.clear_selection();
        if (!check_overlap(playerreflect_447_instances, bossspadehitbox_2232_instances)) goto event_1995_58_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (5))) goto event_1995_58_end;
        if (!(((Active*)get_instance(playerreflect_447_instances))->test_animation(5))) goto event_1995_58_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 17)), 2, 17);
    }
    event_1995_58_end: ;
}
void Frames::event_func_12966()
{
    // event 2086_58
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_2086_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) <= (0))) goto event_2086_58_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(20)) == (0))) goto event_2086_58_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1) goto event_2086_58_end;
        if (!((global_values->get(4)) < (10))) goto event_2086_58_end;
        if (not_always_2086_58 > loop_count) {
            not_always_2086_58 = loop_count + 2;
            goto event_2086_58_end;
        }
        not_always_2086_58 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, ((Active*)get_instance(sign_351_instances))->get_x()+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, height);
    }
    event_2086_58_end: ;
}
void Frames::event_func_12967()
{
    // event 2087_58
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_2087_58_end;
        if (!((((Active*)get_instance(guigoalmessage_3195_instances))->alterables->values.get(0)) <= (0))) goto event_2087_58_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(20)) == (0))) goto event_2087_58_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1) goto event_2087_58_end;
        if (!((global_values->get(4)) >= (10))) goto event_2087_58_end;
        if (not_always_2087_58 > loop_count) {
            not_always_2087_58 = loop_count + 2;
            goto event_2087_58_end;
        }
        not_always_2087_58 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, ((Active*)get_instance(sign_351_instances))->get_x()-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, width+50);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, height);
    }
    event_2087_58_end: ;
}
void Frames::event_func_12968()
{
    // event 2088_58
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_2088_58_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(20)) == (1))) goto event_2088_58_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1) goto event_2088_58_end;
        if (not_always_2088_58 > loop_count) {
            not_always_2088_58 = loop_count + 2;
            goto event_2088_58_end;
        }
        not_always_2088_58 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, get_min(frame_left(), ((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, get_min(frame_top(), ((Active*)get_instance(cameralimitbosstop_423_instances, default_active_instance))->get_y()));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, get_max(frame_right(), ((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, get_max(frame_bottom(), ((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()));
    }
    event_2088_58_end: ;
}
void Frames::event_func_12969()
{
    // event 2089_58
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_2089_58_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(20)) == (2))) goto event_2089_58_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1) goto event_2089_58_end;
        if (not_always_2089_58 > loop_count) {
            not_always_2089_58 = loop_count + 2;
            goto event_2089_58_end;
        }
        not_always_2089_58 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, ((Active*)get_instance(sign_351_instances))->get_x()-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, ((Active*)get_instance(sign_351_instances))->get_y()-160);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, ((Active*)get_instance(sign_351_instances))->get_x()+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, ((Active*)get_instance(sign_351_instances))->get_y()+80);
    }
    event_2089_58_end: ;
}
void Frames::event_func_12970()
{
    // event 2202_58
    {
        if (!(group_main_engine_1)) goto event_2202_58_end;
        thspotlight_3169_instances.clear_selection();
        for (ObjectIterator it(thspotlight_3169_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()*0.85+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(frame_top()*0.88+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_angle(sin_deg(global_values->get(3)*1.5+((Active*)*it)->alterables->values.get(2))*45, 0);
        }
    }
    event_2202_58_end: ;
}
void Frames::event_func_12971()
{
    // event 2203_58
    {
        if (!(group_main_engine_1)) goto event_2203_58_end;
        if (!((global_values->get(4)) >= (5))) goto event_2203_58_end;
        if (not_always_2203_58 > loop_count) {
            not_always_2203_58 = loop_count + 2;
            goto event_2203_58_end;
        }
        not_always_2203_58 = loop_count + 2;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->set_visible(false);
        thspotlight_3169_instances.clear_selection();
        for (ObjectIterator it(thspotlight_3169_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->set_visible(true);
    }
    event_2203_58_end: ;
}
void Frames::event_func_12972()
{
    // event 2204_58
    {
        if (!(group_pause_1)) goto event_2204_58_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_2204_58_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2204_58_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_2204_58_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_2204_58_end;
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
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
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
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        enemyrocketpuncherhand_3161_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpuncherhand_3161_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectrocketpuncherwarning_3163_instances.clear_selection();
        for (ObjectIterator it(effectrocketpuncherwarning_3163_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        levelhideoutplatformflame_3158_instances.clear_selection();
        for (ObjectIterator it(levelhideoutplatformflame_3158_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        thflame_3124_instances.clear_selection();
        for (ObjectIterator it(thflame_3124_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemybikeninja_3172_instances.clear_selection();
        for (ObjectIterator it(enemybikeninja_3172_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        thcrowd_3181_instances.clear_selection();
        for (ObjectIterator it(thcrowd_3181_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyninjastar_3173_instances.clear_selection();
        for (ObjectIterator it(enemyninjastar_3173_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        thspotlight_3169_instances.clear_selection();
        for (ObjectIterator it(thspotlight_3169_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectbikeninjawarning_3170_instances.clear_selection();
        for (ObjectIterator it(effectbikeninjawarning_3170_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossspadecard_2128_instances.clear_selection();
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_2204_58_end: ;
}
void Frames::event_func_12973()
{
    // event 2205_58
    bool or_result_2205_58 = false;
    bool or_temp_result_2205_58_0 = false;
    {
        if (!(group_pause_1)) goto or_event_2205_58_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_2205_58_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2205_58_0_end;
        or_result_2205_58 = true;
        or_temp_result_2205_58_0 = true;
    }
    or_event_2205_58_0_end: ;
    // event 2205_58
    bool or_temp_result_2205_58_1 = false;
    {
        if (!(group_pause_1)) goto or_event_2205_58_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_2205_58_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2205_58_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_2205_58_1_end;
        or_result_2205_58 = true;
        or_temp_result_2205_58_1 = true;
        or_event_2205_58_1_end: ;
        if (!or_result_2205_58) goto or_final_or_event_2205_58_1_end;
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
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
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
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->start_animation();
        enemyrocketpuncherhand_3161_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpuncherhand_3161_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectrocketpuncherwarning_3163_instances.clear_selection();
        for (ObjectIterator it(effectrocketpuncherwarning_3163_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        levelhideoutplatformflame_3158_instances.clear_selection();
        for (ObjectIterator it(levelhideoutplatformflame_3158_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        thflame_3124_instances.clear_selection();
        for (ObjectIterator it(thflame_3124_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemybikeninja_3172_instances.clear_selection();
        for (ObjectIterator it(enemybikeninja_3172_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        thcrowd_3181_instances.clear_selection();
        for (ObjectIterator it(thcrowd_3181_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyninjastar_3173_instances.clear_selection();
        for (ObjectIterator it(enemyninjastar_3173_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        thspotlight_3169_instances.clear_selection();
        for (ObjectIterator it(thspotlight_3169_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectbikeninjawarning_3170_instances.clear_selection();
        for (ObjectIterator it(effectbikeninjawarning_3170_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossspadecard_2128_instances.clear_selection();
        for (ObjectIterator it(bossspadecard_2128_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_2205_58_1_end: ;
}
void Frames::event_func_12974()
{
    // event 2220_58
    {
        // group: Slowdown Effect
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) > (0))) goto event_2220_58_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(2)%math_helper%((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) != (0))) goto event_2220_58_end;
        if (not_always_2220_58 > loop_count) {
            not_always_2220_58 = loop_count + 2;
            goto event_2220_58_end;
        }
        not_always_2220_58 = loop_count + 2;
            group_main_engine_1 = false;
    
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
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
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
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyrocketpuncherhand_3161_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpuncherhand_3161_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectrocketpuncherwarning_3163_instances.clear_selection();
        for (ObjectIterator it(effectrocketpuncherwarning_3163_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        levelhideoutplatformflame_3158_instances.clear_selection();
        for (ObjectIterator it(levelhideoutplatformflame_3158_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        thflame_3124_instances.clear_selection();
        for (ObjectIterator it(thflame_3124_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemybikeninja_3172_instances.clear_selection();
        for (ObjectIterator it(enemybikeninja_3172_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        thcrowd_3181_instances.clear_selection();
        for (ObjectIterator it(thcrowd_3181_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyninjastar_3173_instances.clear_selection();
        for (ObjectIterator it(enemyninjastar_3173_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_2220_58_end: ;
}
void Frames::event_func_12975()
{
    // event 2221_58
    {
        // group: Slowdown Effect
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) > (0))) goto event_2221_58_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(2)%math_helper%((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) == (0))) goto event_2221_58_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2221_58_end;
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
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
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
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyrocketpuncherhand_3161_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpuncherhand_3161_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectrocketpuncherwarning_3163_instances.clear_selection();
        for (ObjectIterator it(effectrocketpuncherwarning_3163_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        levelhideoutplatformflame_3158_instances.clear_selection();
        for (ObjectIterator it(levelhideoutplatformflame_3158_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        thflame_3124_instances.clear_selection();
        for (ObjectIterator it(thflame_3124_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemybikeninja_3172_instances.clear_selection();
        for (ObjectIterator it(enemybikeninja_3172_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        thcrowd_3181_instances.clear_selection();
        for (ObjectIterator it(thcrowd_3181_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyninjastar_3173_instances.clear_selection();
        for (ObjectIterator it(enemyninjastar_3173_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    event_2221_58_end: ;
}
void Frames::handle_frame_59_events()
{
    test_collisions_58();
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
    event_func_4203();
    event_func_4205();
    event_func_12876();
    event_func_12877();
    event_func_12878();
    event_func_2650();
    event_func_4187();
    event_func_4188();
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
    event_func_12606();
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
    event_func_12607();
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
    event_func_12608();
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
    event_func_2924();
    event_func_2925();
    event_func_2926();
    event_func_2927();
    event_func_2928();
    event_func_2929();
    event_func_2930();
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
    event_func_4745();
    event_func_6655();
    event_func_6060();
    event_func_6061();
    event_func_12609();
    event_func_4546();
    event_func_6064();
    event_func_12610();
    event_func_12611();
    event_func_4752();
    event_func_4753();
    event_func_12612();
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
    if (!group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1) goto group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end;
    event_func_3737();
    event_func_6067();
    event_func_6068();
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end: ;
    event_func_5220();
    event_func_12613();
    event_func_12469();
    event_func_12470();
    event_func_12471();
    event_func_12472();
    event_func_12473();
    event_func_12474();
    event_func_12475();
    event_func_12476();
    event_func_12614();
    event_func_12615();
    event_func_12616();
    event_func_12617();
    event_func_12481();
    event_func_12482();
    event_func_12483();
    event_func_12484();
    event_func_12485();
    event_func_12486();
    event_func_12487();
    event_func_12488();
    event_func_12489();
    event_func_12490();
    event_func_12491();
    event_func_12492();
    event_func_12493();
    event_func_12493();
    event_func_12494();
    event_func_12495();
    event_func_12496();
    event_func_12497();
    event_func_12498();
    event_func_12499();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_12500();
    event_func_12501();
    event_func_12502();
    event_func_12503();
    event_func_12504();
    event_func_12505();
    event_func_12506();
    event_func_12507();
    event_func_12508();
    event_func_12509();
    event_func_12510();
    event_func_12511();
    event_func_12512();
    event_func_12513();
    event_func_12400();
    event_func_12401();
    event_func_12618();
    event_func_12403();
    event_func_12515();
    event_func_12516();
    event_func_12517();
    event_func_12518();
    event_func_12519();
    event_func_12520();
    event_func_12521();
    event_func_12522();
    event_func_12523();
    event_func_12524();
    event_func_12525();
    event_func_12526();
    event_func_12527();
    event_func_12528();
    event_func_12529();
    event_func_12530();
    event_func_12531();
    event_func_12532();
    event_func_12533();
    event_func_12534();
    event_func_12535();
    event_func_12536();
    event_func_12537();
    event_func_12538();
    event_func_12539();
    event_func_12540();
    event_func_12541();
    event_func_12542();
    event_func_12543();
    event_func_12544();
    event_func_12545();
    event_func_12546();
    event_func_12547();
    event_func_12548();
    event_func_12549();
    event_func_12550();
    event_func_12551();
    event_func_12552();
    event_func_12553();
    event_func_12554();
    event_func_12555();
    event_func_12556();
    event_func_12557();
    event_func_12558();
    event_func_12559();
    event_func_12560();
    event_func_12561();
    event_func_12562();
    event_func_12563();
    event_func_12564();
    event_func_12565();
    event_func_12566();
    event_func_12567();
    event_func_12568();
    event_func_12569();
    event_func_12570();
    event_func_12571();
    event_func_12572();
    event_func_12573();
    event_func_12574();
    event_func_12575();
    event_func_12576();
    event_func_12577();
    event_func_12578();
    event_func_12579();
    event_func_12619();
    event_func_12581();
    event_func_12582();
    event_func_12583();
    event_func_12584();
    event_func_12620();
    event_func_12621();
    event_func_12622();
    event_func_12623();
    event_func_12624();
    event_func_12625();
    event_func_12626();
    event_func_12627();
    event_func_12628();
    event_func_12629();
    event_func_12630();
    event_func_12631();
    event_func_12632();
    event_func_12633();
    event_func_12634();
    event_func_12635();
    event_func_12636();
    event_func_12637();
    event_func_12638();
    event_func_12639();
    event_func_12640();
    event_func_12641();
    event_func_12642();
    event_func_12643();
    event_func_12644();
    event_func_12645();
    event_func_12646();
    event_func_12647();
    event_func_12648();
    event_func_12649();
    event_func_12650();
    event_func_12651();
    event_func_12652();
    event_func_12653();
    event_func_12654();
    event_func_12655();
    event_func_12656();
    event_func_12657();
    event_func_12658();
    event_func_12659();
    event_func_12660();
    event_func_12661();
    event_func_12662();
    event_func_12663();
    event_func_12664();
    event_func_12665();
    event_func_12665();
    event_func_12665();
    event_func_12666();
    event_func_12666();
    event_func_12666();
    event_func_12666();
    event_func_12667();
    event_func_12668();
    event_func_12669();
    event_func_12670();
    event_func_12671();
    event_func_12672();
    event_func_12673();
    event_func_12674();
    event_func_12675();
    event_func_12676();
    event_func_12677();
    event_func_12678();
    event_func_12679();
    event_func_12680();
    event_func_12681();
    event_func_12585();
    event_func_12586();
    event_func_12682();
    if (!group_main_engine_level_specific_methods_frame_transition_1) goto group_main_engine_level_specific_methods_frame_transition_1_end;
    event_func_7944();
    event_func_7945();
    event_func_12683();
    event_func_12684();
    group_main_engine_level_specific_methods_frame_transition_1_end: ;
    if (!group_main_engine_level_specific_methods_stage_clear_1) goto group_main_engine_level_specific_methods_stage_clear_1_end;
    event_func_4197();
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
    event_func_12685();
    event_func_6079();
    event_func_12686();
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
    event_func_11573();
    group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1_end: ;
    group_main_engine_level_specific_methods_stage_clear_1_end: ;
    if (!group_main_engine_level_specific_methods_play_bgm_1) goto group_main_engine_level_specific_methods_play_bgm_1_end;
    event_func_4233();
    group_main_engine_level_specific_methods_play_bgm_1_end: ;
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) goto group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end;
    event_func_4173();
    event_func_4059();
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1) goto group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1_end;
    event_func_12687();
    event_func_12688();
    event_func_12689();
    event_func_12690();
    event_func_12691();
    event_func_12692();
    event_func_12693();
    event_func_12694();
    event_func_12695();
    event_func_12696();
    event_func_12697();
    event_func_12698();
    event_func_12699();
    event_func_12700();
    event_func_12701();
    event_func_12702();
    event_func_12703();
    event_func_12704();
    if (!group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_voice_acting_1) goto group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_voice_acting_1_end;
    event_func_12705();
    event_func_12706();
    event_func_12707();
    event_func_12708();
    event_func_12709();
    event_func_12710();
    event_func_12711();
    event_func_12712();
    event_func_12713();
    event_func_12714();
    event_func_12715();
    event_func_12716();
    event_func_12717();
    event_func_12718();
    event_func_12719();
    group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_voice_acting_1_end: ;
    event_func_12720();
    if (!group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_blips_1) goto group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_blips_1_end;
    event_func_12721();
    event_func_12722();
    event_func_12723();
    event_func_12724();
    event_func_12725();
    event_func_12726();
    event_func_12727();
    event_func_12728();
    event_func_12729();
    event_func_12730();
    event_func_12731();
    event_func_12732();
    event_func_12733();
    event_func_12734();
    event_func_12735();
    group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_blips_1_end: ;
    event_func_12736();
    event_func_12737();
    event_func_12738();
    event_func_12739();
    event_func_12740();
    event_func_12741();
    event_func_12742();
    event_func_12743();
    event_func_12744();
    event_func_12745();
    event_func_12746();
    event_func_12747();
    event_func_12748();
    event_func_12749();
    event_func_12750();
    event_func_12751();
    event_func_12752();
    event_func_12753();
    event_func_12754();
    event_func_12755();
    event_func_12756();
    event_func_12757();
    event_func_12758();
    event_func_12759();
    event_func_12760();
    event_func_12761();
    event_func_12762();
    event_func_12763();
    event_func_12764();
    event_func_12765();
    group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1_end: ;
    event_func_12766();
    event_func_12767();
    if (!group_main_engine_level_specific_methods_bosses_1) goto group_main_engine_level_specific_methods_bosses_1_end;
    event_func_12768();
    event_func_12769();
    event_func_12770();
    event_func_12771();
    event_func_12772();
    event_func_12773();
    if (!group_main_engine_level_specific_methods_bosses_boss_prepare_1) goto group_main_engine_level_specific_methods_bosses_boss_prepare_1_end;
    event_func_12774();
    event_func_12775();
    group_main_engine_level_specific_methods_bosses_boss_prepare_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1) goto group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1_end;
    event_func_12776();
    event_func_12777();
    event_func_12778();
    event_func_12779();
    event_func_12780();
    event_func_12781();
    event_func_12782();
    event_func_12783();
    event_func_12784();
    event_func_12785();
    event_func_12786();
    event_func_12787();
    event_func_12788();
    event_func_12789();
    event_func_12790();
    event_func_12791();
    event_func_12792();
    event_func_12793();
    event_func_12794();
    event_func_12795();
    event_func_12796();
    event_func_12797();
    event_func_12798();
    event_func_12799();
    event_func_12800();
    event_func_12801();
    event_func_12802();
    event_func_12803();
    event_func_12804();
    event_func_12805();
    event_func_12806();
    event_func_12807();
    event_func_12808();
    event_func_12809();
    event_func_12810();
    event_func_12811();
    event_func_12812();
    event_func_12813();
    event_func_12814();
    event_func_12815();
    event_func_12816();
    event_func_12817();
    event_func_12818();
    event_func_12819();
    group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1_end: ;
    event_func_12820();
    event_func_12821();
    event_func_12822();
    event_func_12823();
    if (!group_main_engine_level_specific_methods_bosses_boss_spade_1) goto group_main_engine_level_specific_methods_bosses_boss_spade_1_end;
    event_func_12824();
    event_func_12825();
    if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_jump_pad_1) goto group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_jump_pad_1_end;
    event_func_12826();
    event_func_12827();
    event_func_12828();
    event_func_12829();
    event_func_12830();
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_jump_pad_1_end: ;
    event_func_12831();
    if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1) goto group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1_end;
    event_func_12832();
    event_func_12833();
    event_func_12834();
    event_func_12835();
    event_func_12836();
    event_func_12837();
    event_func_12838();
    event_func_12839();
    event_func_12840();
    event_func_12841();
    event_func_12842();
    event_func_12843();
    event_func_12844();
    event_func_12845();
    event_func_12846();
    event_func_12847();
    event_func_12848();
    event_func_12849();
    event_func_12850();
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1_end: ;
    event_func_12851();
    if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_punch_combo_1) goto group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_punch_combo_1_end;
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_punch_combo_1_end: ;
    event_func_12852();
    if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_2_jump_1) goto group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_2_jump_1_end;
    event_func_12853();
    event_func_12854();
    event_func_12855();
    event_func_12856();
    event_func_12857();
    event_func_12858();
    event_func_12859();
    event_func_12860();
    event_func_12861();
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_2_jump_1_end: ;
    event_func_12862();
    if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_3_flash_step_1) goto group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_3_flash_step_1_end;
    event_func_12863();
    event_func_12864();
    event_func_12865();
    event_func_12866();
    event_func_12867();
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_3_flash_step_1_end: ;
    event_func_12868();
    if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1) goto group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1_end;
    event_func_12869();
    event_func_12870();
    event_func_12871();
    event_func_12872();
    event_func_12873();
    event_func_12874();
    event_func_12875();
    event_func_12879();
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1_end: ;
    event_func_12880();
    if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_5_dual_crash_1) goto group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_5_dual_crash_1_end;
    event_func_12881();
    event_func_12882();
    event_func_12883();
    event_func_12884();
    event_func_12885();
    event_func_12886();
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_5_dual_crash_1_end: ;
    event_func_12887();
    if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_6_7_flinch_1) goto group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_6_7_flinch_1_end;
    event_func_12888();
    event_func_12889();
    event_func_12890();
    event_func_12891();
    event_func_12892();
    event_func_12893();
    event_func_12894();
    event_func_12895();
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_6_7_flinch_1_end: ;
    event_func_12896();
    event_func_12897();
    event_func_12898();
    if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_9_defeated_1) goto group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_9_defeated_1_end;
    event_func_12899();
    event_func_12900();
    event_func_12901();
    event_func_12902();
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_9_defeated_1_end: ;
    event_func_12903();
    event_func_12904();
    event_func_12905();
    if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_spade_hit_1) goto group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_spade_hit_1_end;
    event_func_12906();
    event_func_12907();
    event_func_12908();
    event_func_12909();
    event_func_12910();
    event_func_12911();
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_spade_hit_1_end: ;
    event_func_12912();
    event_func_12913();
    event_func_12914();
    event_func_12915();
    group_main_engine_level_specific_methods_bosses_boss_spade_1_end: ;
    event_func_12916();
    event_func_12917();
    event_func_12918();
    event_func_12919();
    event_func_12920();
    event_func_12921();
    event_func_12922();
    event_func_12923();
    event_func_12924();
    event_func_12925();
    event_func_12926();
    event_func_12927();
    event_func_12928();
    event_func_12929();
    event_func_12930();
    event_func_12931();
    group_main_engine_level_specific_methods_bosses_1_end: ;
    if (!group_main_engine_level_specific_methods_arena_1) goto group_main_engine_level_specific_methods_arena_1_end;
    event_func_12932();
    event_func_12933();
    event_func_12934();
    event_func_12935();
    event_func_12936();
    event_func_12937();
    event_func_12938();
    event_func_12939();
    event_func_12940();
    event_func_12941();
    event_func_12942();
    event_func_12943();
    event_func_12944();
    event_func_12945();
    event_func_12946();
    event_func_12947();
    event_func_12948();
    event_func_12949();
    event_func_12950();
    event_func_12951();
    event_func_12952();
    group_main_engine_level_specific_methods_arena_1_end: ;
    event_func_12953();
    event_func_12438();
    event_func_12954();
    event_func_12955();
    event_func_12956();
    event_func_12957();
    event_func_12958();
    event_func_12959();
    event_func_12960();
    event_func_12961();
    event_func_12962();
    event_func_12963();
    event_func_12964();
    event_func_12965();
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
    if (!group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1) goto group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1_end;
    event_func_2575();
    event_func_12966();
    event_func_12967();
    event_func_12968();
    event_func_12969();
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
    event_func_3245();
    event_func_2604();
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1_end: ;
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
    event_func_12970();
    event_func_12971();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_12972();
    event_func_12973();
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
    event_func_4314();
    event_func_12974();
    event_func_12975();
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
void Frames::handle_frame_59_pre_events()
{
}
void Frames::event_func_12976()
{
    // event 2_58
    {
#ifdef CHOWDREN_WAIT
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->find_board(global_values->get(1), 9);
#endif
    }
    event_2_58_end: ;
}
void Frames::event_func_12977()
{
    // event 8_58
    {
        if (!(group_main_engine_1)) goto event_8_58_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 2000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 76);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 40);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
    }
    event_8_58_end: ;
}
void Frames::event_func_12978()
{
    // event 25_58
    {
        if (!(group_main_engine_1)) goto event_25_58_end;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(3, 0.6);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(4, 0.6);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(3, 0.8);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(4, 0.85);
        ((SystemBox*)get_instance(levelparallaxpiece1_466_instances))->alterables->values.set(3, 0.95);
        ((SystemBox*)get_instance(levelparallaxpiece1_466_instances))->alterables->values.set(4, 0.95);
    }
    event_25_58_end: ;
}
void Frames::event_func_12979()
{
    // event 1439_58
    {
        if (!(group_main_engine_1)) goto event_1439_58_end;
        hazardshuriken_3154_instances.clear_selection();
        for (ObjectIterator it(hazardshuriken_3154_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
        ((Active*)get_instance(hazardshurikenturn_3156_instances))->alterables->values.set(0, ((Active*)get_instance(hazardshurikenturn_3156_instances))->get_x());
        ((Active*)get_instance(hazardshurikenturn_3156_instances))->alterables->values.set(1, ((Active*)get_instance(hazardshurikenturn_3156_instances))->get_y());
        levelhideoutplatform1_3157_instances.clear_selection();
        spread_value(levelhideoutplatform1_3157_instances, 4, 0);
        for (ObjectIterator it(levelhideoutplatform1_3157_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, (((Active*)*it)->alterables->values.get(4)*180)%math_helper%360);
        }
    }
    event_1439_58_end: ;
}
void Frames::event_func_12980()
{
    // event 1587_58
    {
        if (!(group_main_engine_1)) goto event_1587_58_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->flags.enable(16);
        }
    }
    event_1587_58_end: ;
}
void Frames::event_func_12981()
{
    // event 1791_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1791_58_end;
        bosscrystalbashersegment_3182_instances.clear_selection();
        spread_value(bosscrystalbashersegment_3182_instances, 0, 1);
        ((Active*)get_instance(bossdoor_3191_instances))->alterables->values.set(0, ((Active*)get_instance(bossdoor_3191_instances))->get_x());
        bosscrystalbasherface_3192_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherface_3192_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
        }
        media.lock(10-1);
        media.lock(11-1);
    }
    event_1791_58_end: ;
}
void Frames::event_func_12982()
{
    // event 1792_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1792_58_end;
        if (!((global_values->get(4)) >= (5))) goto event_1792_58_end;
        minibossrailing_923_instances.clear_selection();
        for (ObjectIterator it(minibossrailing_923_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosscrystalbasherhead_3185_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherhead_3185_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosscrystalbasherface_3192_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbasherface_3192_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosscrystalspike2_3184_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike2_3184_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosscrystalspike_3183_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike_3183_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosscrystalbashersegment_3182_instances.clear_selection();
        for (ObjectIterator it(bosscrystalbashersegment_3182_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1792_58_end: ;
}
void Frames::event_func_12983()
{
    // event 1849_58
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1849_58_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->set_y(-80);
        }
    }
    event_1849_58_end: ;
}
void Frames::event_func_12984()
{
    // event 1979_58
    {
        if (!(group_main_engine_1)) goto event_1979_58_end;
        if (!((global_values->get(1)) != (4))) goto event_1979_58_end;
        objectcrystal_279_instances.clear_selection();
        pick_objects_in_zone(objectcrystal_279_instances, 3008, 212, 3207, 425);
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1979_58_end: ;
}
void Frames::event_func_12985()
{
    // event 1980_58
    {
        if (!(group_main_engine_1)) goto event_1980_58_end;
        hazardshurikenbase_3155_instances.clear_selection();
        for (ObjectIterator it(hazardshurikenbase_3155_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!hazardshurikenbase_3155_instances.has_selection()) goto event_1980_58_end;
        for (ObjectIterator it(hazardshurikenbase_3155_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1980_58_end: ;
}
void Frames::event_func_12986()
{
    // event 2148_58
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_2148_58_end;
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(7);
        }
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(5);
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
    }
    event_2148_58_end: ;
}
void Frames::event_func_12987()
{
    // event 2201_58
    {
        if (!(group_main_engine_1)) goto event_2201_58_end;
        thspotlight_3169_instances.clear_selection();
        for (ObjectIterator it(thspotlight_3169_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
        }
        spread_value(thspotlight_3169_instances, 2, 0);
        for (ObjectIterator it(thspotlight_3169_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->alterables->values.get(2)*60);
        }
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->set_visible(false);
    }
    event_2201_58_end: ;
}
void Frames::on_frame_59_start_events()
{
    event_func_12442();
    event_func_12976();
    event_func_4133();
    event_func_3265();
    event_func_4318();
    event_func_12977();
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
    event_func_12978();
    event_func_3269();
    event_func_3984();
    event_func_3985();
    event_func_2673();
    event_func_2674();
    event_func_2675();
    event_func_2676();
    event_func_3270();
    event_func_2678();
    event_func_2679();
    event_func_2680();
    event_func_2681();
    event_func_2682();
    event_func_2683();
    event_func_3271();
    event_func_2685();
    event_func_3272();
    event_func_3273();
    event_func_3986();
    event_func_3987();
    event_func_12446();
    event_func_12979();
    event_func_12592();
    event_func_12593();
    event_func_12594();
    event_func_12980();
    event_func_2686();
    event_func_4323();
    event_func_12981();
    event_func_12982();
    event_func_12983();
    event_func_12984();
    event_func_12985();
    event_func_3277();
    event_func_2690();
    event_func_2691();
    event_func_12986();
    event_func_4145();
    event_func_5573();
    event_func_2694();
    event_func_12987();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_59_init()
{
    index = 58;
    width = 12816;
    height = 2400;
    virtual_width = 12816;
    virtual_height = 2400;
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
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, NULL};
    qualifier_8.set(9, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesdown_559_instances, &hazardspikesup_558_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, NULL};
    qualifier_9.set(32, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&bossspadehitbox_2232_instances, &enemytotematic_3103_instances, &enemymetalpup_3149_instances, &enemyshockpuppet_3150_instances, &enemybladeorbiter_3153_instances, &hazardshuriken_3154_instances, &enemyrocketpuncher_3160_instances, &enemyrocketpunchershield_3162_instances, &enemybikeninjamask_3171_instances, &bosscrystalbasherface_3192_instances, NULL};
    qualifier_20.set(10, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece1_466_instances, &levelparallaxpiece0_465_instances, &levelparallaxpiece2_467_instances, NULL};
    qualifier_0.set(3, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &minibossbarrier_924_instances, &enemytotematic_3103_instances, &hazardspikesdown_559_instances, &hazardspikesup_558_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, &levelhideoutplatform1_3157_instances, &enemyrocketpunchershield_3162_instances, &levelthcollapsingplatform_3164_instances, &levelthcollapsingplatformpiece_3165_instances, &bossdoor_3191_instances, NULL};
    qualifier_7.set(33, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &bossspade_2194_instances, NULL};
    qualifier_4.set(35, &qualifier_4_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(12, &qualifier_19_instances[0]);
    static ObjectList* qualifier_23_instances[] = {&gimmickhangingidlesensor_740_instances, &gimmickhangingmovingsensor_737_instances, NULL};
    qualifier_23.set(2, &qualifier_23_instances[0]);
    static ObjectList* qualifier_14_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_14.set(1, &qualifier_14_instances[0]);
    static ObjectList* qualifier_15_instances[] = {&laddertop_357_instances, &mastergroupsb_385_instances, NULL};
    qualifier_15.set(2, &qualifier_15_instances[0]);
    static ObjectList* qualifier_16_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_16.set(1, &qualifier_16_instances[0]);
    static ObjectList* qualifier_17_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_17.set(1, &qualifier_17_instances[0]);
    static ObjectList* qualifier_10_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, NULL};
    qualifier_10.set(3, &qualifier_10_instances[0]);
    static ObjectList* qualifier_11_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, NULL};
    qualifier_11.set(3, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, &levelhideoutplatform1_3157_instances, NULL};
    qualifier_12.set(3, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &gimmickhangingmovingbar_1173_instances, &gimmickhangingmovingsensor_737_instances, &levelhideoutplatform1_3157_instances, NULL};
    qualifier_13.set(4, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece1_3166(96, 0), 0);
    add_background_object(create_levelparallaxpiece0_3167(0, 0), 0);
    add_object(create_thspotlight_3169(176, 237), 0);
    add_object(create_thspotlight_3169(320, 237), 0);
    add_object(create_thspotlight_3169(464, 237), 0);
    add_object(create_thspotlight_3169(624, 237), 0);
    add_object(create_thspotlight_3169(768, 237), 0);
    add_object(create_thspotlight_3169(912, 237), 0);
    add_object(create_thspotlight_3169(1048, 237), 0);
    add_object(create_thspotlight_3169(1192, 237), 0);
    add_object(create_thspotlight_3169(1336, 237), 0);
    add_object(create_thspotlight_3169(1488, 237), 0);
    add_object(create_thspotlight_3169(1632, 237), 0);
    add_object(create_thspotlight_3169(1776, 237), 0);
    add_object(create_objecttaostone_532(2251, 530), 0);
    add_background_object(create_thtorchmid_3123(3800, 1168), 1);
    add_background_object(create_thtorchmid_3123(4072, 1168), 1);
    add_background_object(create_levelparallaxpiece2_3174(96, 184), 1);
    add_background_object(create_thtorchtop_3122(128, 1008), 1);
    add_background_object(create_thtorchmid_3123(128, 1032), 1);
    add_background_object(create_thtorchmid_3123(128, 1096), 1);
    add_background_object(create_thtorchmid_3123(128, 1160), 1);
    add_background_object(create_thtorchmid_3123(128, 1224), 1);
    add_background_object(create_thtorchtop_3122(256, 1072), 1);
    add_background_object(create_thtorchmid_3123(256, 1096), 1);
    add_background_object(create_thtorchmid_3123(256, 1160), 1);
    add_background_object(create_thtorchmid_3123(256, 1224), 1);
    add_background_object(create_thtorchmid_3123(128, 1288), 1);
    add_background_object(create_thtorchmid_3123(256, 1288), 1);
    add_background_object(create_thtorchmid_3123(128, 1352), 1);
    add_background_object(create_thtorchmid_3123(256, 1352), 1);
    add_background_object(create_thtorchmid_3123(128, 1416), 1);
    add_background_object(create_thtorchmid_3123(256, 1416), 1);
    add_background_object(create_thtorchtop_3122(384, 1136), 1);
    add_background_object(create_thtorchmid_3123(384, 1160), 1);
    add_background_object(create_thtorchmid_3123(384, 1224), 1);
    add_background_object(create_thtorchmid_3123(384, 1288), 1);
    add_background_object(create_thtorchmid_3123(384, 1352), 1);
    add_background_object(create_thtorchmid_3123(384, 1416), 1);
    add_background_object(create_thtorchtop_3122(520, 1200), 1);
    add_background_object(create_thtorchmid_3123(520, 1224), 1);
    add_background_object(create_thtorchmid_3123(520, 1288), 1);
    add_background_object(create_thtorchmid_3123(520, 1352), 1);
    add_background_object(create_thtorchmid_3123(520, 1416), 1);
    add_background_object(create_thtorchtop_3122(656, 1136), 1);
    add_background_object(create_thtorchmid_3123(656, 1160), 1);
    add_background_object(create_thtorchmid_3123(656, 1224), 1);
    add_background_object(create_thtorchmid_3123(656, 1288), 1);
    add_background_object(create_thtorchmid_3123(656, 1352), 1);
    add_background_object(create_thtorchmid_3123(656, 1416), 1);
    add_background_object(create_thtorchtop_3122(800, 1008), 1);
    add_background_object(create_thtorchmid_3123(800, 1032), 1);
    add_background_object(create_thtorchmid_3123(800, 1096), 1);
    add_background_object(create_thtorchmid_3123(800, 1416), 1);
    add_background_object(create_thtorchtop_3122(944, 1136), 1);
    add_background_object(create_thtorchmid_3123(944, 1160), 1);
    add_background_object(create_thtorchmid_3123(944, 1224), 1);
    add_background_object(create_thtorchmid_3123(944, 1288), 1);
    add_background_object(create_thtorchmid_3123(944, 1352), 1);
    add_background_object(create_thtorchmid_3123(944, 1416), 1);
    add_background_object(create_thtorchtop_3122(1080, 1200), 1);
    add_background_object(create_thtorchmid_3123(1080, 1224), 1);
    add_background_object(create_thtorchmid_3123(1080, 1288), 1);
    add_background_object(create_thtorchmid_3123(1080, 1352), 1);
    add_background_object(create_thtorchmid_3123(1080, 1416), 1);
    add_background_object(create_thtorchtop_3122(1216, 1136), 1);
    add_background_object(create_thtorchmid_3123(1216, 1160), 1);
    add_background_object(create_thtorchmid_3123(1216, 1224), 1);
    add_background_object(create_thtorchmid_3123(1216, 1288), 1);
    add_background_object(create_thtorchmid_3123(1216, 1352), 1);
    add_background_object(create_thtorchmid_3123(1216, 1416), 1);
    add_background_object(create_thtorchmid_3123(800, 1160), 1);
    add_background_object(create_thtorchmid_3123(800, 1224), 1);
    add_background_object(create_thtorchmid_3123(800, 1288), 1);
    add_background_object(create_thtorchmid_3123(800, 1352), 1);
    add_background_object(create_thtorchtop_3122(1416, 496), 1);
    add_background_object(create_thtorchmid_3123(1416, 520), 1);
    add_background_object(create_thtorchmid_3123(1416, 584), 1);
    add_background_object(create_thtorchmid_3123(1416, 712), 1);
    add_background_object(create_thtorchmid_3123(1416, 904), 1);
    add_background_object(create_thtorchmid_3123(1416, 968), 1);
    add_background_object(create_thtorchtop_3122(1552, 432), 1);
    add_background_object(create_thtorchmid_3123(1552, 456), 1);
    add_background_object(create_thtorchmid_3123(1552, 712), 1);
    add_background_object(create_thtorchmid_3123(1552, 904), 1);
    add_background_object(create_thtorchmid_3123(1552, 968), 1);
    add_background_object(create_thtorchtop_3122(1688, 496), 1);
    add_background_object(create_thtorchmid_3123(1688, 520), 1);
    add_background_object(create_thtorchmid_3123(1688, 584), 1);
    add_background_object(create_thtorchmid_3123(1688, 712), 1);
    add_background_object(create_thtorchmid_3123(1688, 904), 1);
    add_background_object(create_thtorchmid_3123(1688, 968), 1);
    add_background_object(create_thtorchmid_3123(1416, 1160), 1);
    add_background_object(create_thtorchmid_3123(1416, 1224), 1);
    add_background_object(create_thtorchmid_3123(1416, 1288), 1);
    add_background_object(create_thtorchmid_3123(1416, 1352), 1);
    add_background_object(create_thtorchmid_3123(1552, 1160), 1);
    add_background_object(create_thtorchmid_3123(1552, 1224), 1);
    add_background_object(create_thtorchmid_3123(1552, 1288), 1);
    add_background_object(create_thtorchmid_3123(1552, 1352), 1);
    add_background_object(create_thtorchmid_3123(1688, 1160), 1);
    add_background_object(create_thtorchmid_3123(1688, 1224), 1);
    add_background_object(create_thtorchmid_3123(1688, 1288), 1);
    add_background_object(create_thtorchmid_3123(1688, 1352), 1);
    add_background_object(create_thtorchmid_3123(1416, 1416), 1);
    add_background_object(create_thtorchmid_3123(1552, 1416), 1);
    add_background_object(create_thtorchmid_3123(1688, 1416), 1);
    add_background_object(create_thtorchmid_3123(1416, 1032), 1);
    add_background_object(create_thtorchmid_3123(1416, 1096), 1);
    add_background_object(create_thtorchmid_3123(1552, 1032), 1);
    add_background_object(create_thtorchmid_3123(1552, 1096), 1);
    add_background_object(create_thtorchmid_3123(1688, 1032), 1);
    add_background_object(create_thtorchmid_3123(1688, 1096), 1);
    add_background_object(create_thtorchmid_3123(1416, 776), 1);
    add_background_object(create_thtorchmid_3123(1552, 776), 1);
    add_background_object(create_thtorchmid_3123(1688, 776), 1);
    add_background_object(create_thtorchmid_3123(1416, 840), 1);
    add_background_object(create_thtorchmid_3123(1552, 840), 1);
    add_background_object(create_thtorchmid_3123(1688, 840), 1);
    add_background_object(create_thtorchmid_3123(1416, 648), 1);
    add_background_object(create_thtorchmid_3123(1552, 520), 1);
    add_background_object(create_thtorchmid_3123(1688, 648), 1);
    add_background_object(create_thtorchmid_3123(1552, 584), 1);
    add_background_object(create_thtorchmid_3123(1552, 648), 1);
    add_background_object(create_thtorchtop_3122(2496, 752), 1);
    add_background_object(create_thtorchmid_3123(2496, 776), 1);
    add_background_object(create_thtorchmid_3123(2496, 904), 1);
    add_background_object(create_thtorchmid_3123(2496, 1096), 1);
    add_background_object(create_thtorchmid_3123(2496, 1160), 1);
    add_background_object(create_thtorchtop_3122(2632, 688), 1);
    add_background_object(create_thtorchmid_3123(2632, 712), 1);
    add_background_object(create_thtorchmid_3123(2632, 904), 1);
    add_background_object(create_thtorchmid_3123(2632, 1096), 1);
    add_background_object(create_thtorchmid_3123(2632, 1160), 1);
    add_background_object(create_thtorchmid_3123(2496, 1352), 1);
    add_background_object(create_thtorchmid_3123(2496, 1416), 1);
    add_background_object(create_thtorchmid_3123(2632, 1352), 1);
    add_background_object(create_thtorchmid_3123(2632, 1416), 1);
    add_background_object(create_thtorchmid_3123(2496, 1224), 1);
    add_background_object(create_thtorchmid_3123(2496, 1288), 1);
    add_background_object(create_thtorchmid_3123(2632, 1224), 1);
    add_background_object(create_thtorchmid_3123(2632, 1288), 1);
    add_background_object(create_thtorchmid_3123(2496, 968), 1);
    add_background_object(create_thtorchmid_3123(2632, 968), 1);
    add_background_object(create_thtorchmid_3123(2496, 1032), 1);
    add_background_object(create_thtorchmid_3123(2632, 1032), 1);
    add_background_object(create_thtorchmid_3123(2496, 840), 1);
    add_background_object(create_thtorchmid_3123(2632, 776), 1);
    add_background_object(create_thtorchmid_3123(2632, 840), 1);
    add_background_object(create_thtorchtop_3122(2776, 624), 1);
    add_background_object(create_thtorchmid_3123(2776, 648), 1);
    add_background_object(create_thtorchmid_3123(2776, 776), 1);
    add_background_object(create_thtorchmid_3123(2776, 968), 1);
    add_background_object(create_thtorchmid_3123(2776, 1032), 1);
    add_background_object(create_thtorchmid_3123(2776, 1096), 1);
    add_background_object(create_thtorchmid_3123(2776, 840), 1);
    add_background_object(create_thtorchmid_3123(2776, 904), 1);
    add_background_object(create_thtorchmid_3123(2776, 712), 1);
    add_background_object(create_thtorchtop_3122(2928, 752), 1);
    add_background_object(create_thtorchmid_3123(2928, 776), 1);
    add_background_object(create_thtorchmid_3123(2928, 904), 1);
    add_background_object(create_thtorchmid_3123(2928, 1096), 1);
    add_background_object(create_thtorchmid_3123(2928, 968), 1);
    add_background_object(create_thtorchmid_3123(2928, 1032), 1);
    add_background_object(create_thtorchmid_3123(2928, 840), 1);
    add_background_object(create_thtorchtop_3122(3080, 816), 1);
    add_background_object(create_thtorchmid_3123(3080, 840), 1);
    add_background_object(create_thtorchmid_3123(3080, 968), 1);
    add_background_object(create_thtorchmid_3123(3080, 1032), 1);
    add_background_object(create_thtorchmid_3123(3080, 1096), 1);
    add_background_object(create_thtorchmid_3123(3080, 904), 1);
    add_background_object(create_thtorchtop_3122(3656, 1136), 1);
    add_background_object(create_thtorchmid_3123(3656, 1160), 1);
    add_background_object(create_thtorchmid_3123(3656, 1224), 1);
    add_background_object(create_thtorchmid_3123(3656, 1288), 1);
    add_background_object(create_thtorchmid_3123(3656, 1352), 1);
    add_background_object(create_thtorchmid_3123(3656, 1416), 1);
    add_background_object(create_thtorchtop_3122(4072, 1080), 1);
    add_background_object(create_thtorchmid_3123(4072, 1104), 1);
    add_background_object(create_thtorchtop_3122(4216, 1136), 1);
    add_background_object(create_thtorchmid_3123(4216, 1160), 1);
    add_background_object(create_thtorchmid_3123(4216, 1224), 1);
    add_background_object(create_thtorchmid_3123(4216, 1288), 1);
    add_background_object(create_thtorchmid_3123(4216, 1352), 1);
    add_background_object(create_thtorchmid_3123(4216, 1416), 1);
    add_background_object(create_thtorchtop_3122(4768, 1200), 1);
    add_background_object(create_thtorchmid_3123(4768, 1224), 1);
    add_background_object(create_thtorchmid_3123(4768, 1288), 1);
    add_background_object(create_thtorchmid_3123(4768, 1352), 1);
    add_background_object(create_thtorchmid_3123(4768, 1416), 1);
    add_background_object(create_thtorchtop_3122(4912, 752), 1);
    add_background_object(create_thtorchmid_3123(4912, 776), 1);
    add_background_object(create_thtorchmid_3123(4912, 904), 1);
    add_background_object(create_thtorchmid_3123(4912, 1096), 1);
    add_background_object(create_thtorchmid_3123(4912, 1160), 1);
    add_background_object(create_thtorchtop_3122(5048, 688), 1);
    add_background_object(create_thtorchmid_3123(5048, 712), 1);
    add_background_object(create_thtorchmid_3123(5048, 904), 1);
    add_background_object(create_thtorchmid_3123(5048, 1096), 1);
    add_background_object(create_thtorchmid_3123(5048, 1160), 1);
    add_background_object(create_thtorchmid_3123(4912, 1352), 1);
    add_background_object(create_thtorchmid_3123(4912, 1416), 1);
    add_background_object(create_thtorchmid_3123(5048, 1352), 1);
    add_background_object(create_thtorchmid_3123(5048, 1416), 1);
    add_background_object(create_thtorchmid_3123(4912, 1224), 1);
    add_background_object(create_thtorchmid_3123(4912, 1288), 1);
    add_background_object(create_thtorchmid_3123(5048, 1224), 1);
    add_background_object(create_thtorchmid_3123(5048, 1288), 1);
    add_background_object(create_thtorchmid_3123(4912, 968), 1);
    add_background_object(create_thtorchmid_3123(5048, 968), 1);
    add_background_object(create_thtorchmid_3123(4912, 1032), 1);
    add_background_object(create_thtorchmid_3123(5048, 1032), 1);
    add_background_object(create_thtorchmid_3123(4912, 840), 1);
    add_background_object(create_thtorchmid_3123(5048, 776), 1);
    add_background_object(create_thtorchmid_3123(5048, 840), 1);
    add_background_object(create_thtorchtop_3122(5192, 944), 1);
    add_background_object(create_thtorchmid_3123(5192, 968), 1);
    add_background_object(create_thtorchmid_3123(5192, 1096), 1);
    add_background_object(create_thtorchmid_3123(5192, 1288), 1);
    add_background_object(create_thtorchmid_3123(5192, 1352), 1);
    add_background_object(create_thtorchmid_3123(5192, 1416), 1);
    add_background_object(create_thtorchmid_3123(5192, 1160), 1);
    add_background_object(create_thtorchmid_3123(5192, 1224), 1);
    add_background_object(create_thtorchmid_3123(5192, 1032), 1);
    add_background_object(create_thtorchtop_3122(5344, 1072), 1);
    add_background_object(create_thtorchmid_3123(5344, 1096), 1);
    add_background_object(create_thtorchmid_3123(5344, 1224), 1);
    add_background_object(create_thtorchmid_3123(5344, 1416), 1);
    add_background_object(create_thtorchmid_3123(5344, 1288), 1);
    add_background_object(create_thtorchmid_3123(5344, 1352), 1);
    add_background_object(create_thtorchmid_3123(5344, 1160), 1);
    add_background_object(create_thtorchtop_3122(5496, 1136), 1);
    add_background_object(create_thtorchmid_3123(5496, 1160), 1);
    add_background_object(create_thtorchmid_3123(5496, 1288), 1);
    add_background_object(create_thtorchmid_3123(5496, 1352), 1);
    add_background_object(create_thtorchmid_3123(5496, 1416), 1);
    add_background_object(create_thtorchmid_3123(5496, 1224), 1);
    add_background_object(create_thtorchtop_3122(5680, 1008), 1);
    add_background_object(create_thtorchmid_3123(5680, 1032), 1);
    add_background_object(create_thtorchmid_3123(5680, 1096), 1);
    add_background_object(create_thtorchmid_3123(5680, 1160), 1);
    add_background_object(create_thtorchmid_3123(5680, 1224), 1);
    add_background_object(create_thtorchtop_3122(5808, 1072), 1);
    add_background_object(create_thtorchmid_3123(5808, 1096), 1);
    add_background_object(create_thtorchmid_3123(5808, 1160), 1);
    add_background_object(create_thtorchmid_3123(5808, 1224), 1);
    add_background_object(create_thtorchmid_3123(5680, 1288), 1);
    add_background_object(create_thtorchmid_3123(5808, 1288), 1);
    add_background_object(create_thtorchmid_3123(5680, 1352), 1);
    add_background_object(create_thtorchmid_3123(5808, 1352), 1);
    add_background_object(create_thtorchmid_3123(5680, 1416), 1);
    add_background_object(create_thtorchmid_3123(5808, 1416), 1);
    add_background_object(create_thtorchtop_3122(5936, 1136), 1);
    add_background_object(create_thtorchmid_3123(5936, 1160), 1);
    add_background_object(create_thtorchmid_3123(5936, 1224), 1);
    add_background_object(create_thtorchmid_3123(5936, 1288), 1);
    add_background_object(create_thtorchmid_3123(5936, 1352), 1);
    add_background_object(create_thtorchmid_3123(5936, 1416), 1);
    add_background_object(create_thtorchtop_3122(6072, 1200), 1);
    add_background_object(create_thtorchmid_3123(6072, 1224), 1);
    add_background_object(create_thtorchmid_3123(6072, 1288), 1);
    add_background_object(create_thtorchmid_3123(6072, 1352), 1);
    add_background_object(create_thtorchmid_3123(6072, 1416), 1);
    add_background_object(create_thtorchtop_3122(6208, 1136), 1);
    add_background_object(create_thtorchmid_3123(6208, 1160), 1);
    add_background_object(create_thtorchmid_3123(6208, 1224), 1);
    add_background_object(create_thtorchmid_3123(6208, 1288), 1);
    add_background_object(create_thtorchmid_3123(6208, 1352), 1);
    add_background_object(create_thtorchmid_3123(6208, 1416), 1);
    add_background_object(create_thtorchtop_3122(6352, 1008), 1);
    add_background_object(create_thtorchmid_3123(6352, 1032), 1);
    add_background_object(create_thtorchmid_3123(6352, 1096), 1);
    add_background_object(create_thtorchmid_3123(6352, 1416), 1);
    add_background_object(create_thtorchtop_3122(6496, 1136), 1);
    add_background_object(create_thtorchmid_3123(6496, 1160), 1);
    add_background_object(create_thtorchmid_3123(6496, 1224), 1);
    add_background_object(create_thtorchmid_3123(6496, 1288), 1);
    add_background_object(create_thtorchmid_3123(6496, 1352), 1);
    add_background_object(create_thtorchmid_3123(6496, 1416), 1);
    add_background_object(create_thtorchtop_3122(6632, 1200), 1);
    add_background_object(create_thtorchmid_3123(6632, 1224), 1);
    add_background_object(create_thtorchmid_3123(6632, 1288), 1);
    add_background_object(create_thtorchmid_3123(6632, 1352), 1);
    add_background_object(create_thtorchmid_3123(6632, 1416), 1);
    add_background_object(create_thtorchtop_3122(6768, 1008), 1);
    add_background_object(create_thtorchmid_3123(6768, 1032), 1);
    add_background_object(create_thtorchmid_3123(6768, 1096), 1);
    add_background_object(create_thtorchmid_3123(6768, 1160), 1);
    add_background_object(create_thtorchmid_3123(6768, 1224), 1);
    add_background_object(create_thtorchmid_3123(6768, 1288), 1);
    add_background_object(create_thtorchmid_3123(6352, 1160), 1);
    add_background_object(create_thtorchmid_3123(6352, 1224), 1);
    add_background_object(create_thtorchmid_3123(6352, 1288), 1);
    add_background_object(create_thtorchmid_3123(6352, 1352), 1);
    add_background_object(create_thtorchtop_3122(6912, 816), 1);
    add_background_object(create_thtorchmid_3123(6912, 840), 1);
    add_background_object(create_thtorchmid_3123(6912, 904), 1);
    add_background_object(create_thtorchmid_3123(6912, 968), 1);
    add_background_object(create_thtorchmid_3123(6912, 1032), 1);
    add_background_object(create_thtorchmid_3123(6912, 1096), 1);
    add_background_object(create_thtorchtop_3122(7048, 688), 1);
    add_background_object(create_thtorchmid_3123(7048, 712), 1);
    add_background_object(create_thtorchmid_3123(7048, 776), 1);
    add_background_object(create_thtorchmid_3123(7048, 840), 1);
    add_background_object(create_thtorchmid_3123(7048, 904), 1);
    add_background_object(create_thtorchtop_3122(7184, 560), 1);
    add_background_object(create_thtorchmid_3123(7184, 584), 1);
    add_background_object(create_thtorchmid_3123(7184, 648), 1);
    add_background_object(create_thtorchmid_3123(7184, 712), 1);
    add_background_object(create_thtorchmid_3123(7184, 776), 1);
    add_background_object(create_thtorchmid_3123(7184, 840), 1);
    add_background_object(create_thtorchtop_3122(7328, 432), 1);
    add_background_object(create_thtorchmid_3123(7328, 456), 1);
    add_background_object(create_thtorchmid_3123(7328, 520), 1);
    add_background_object(create_thtorchmid_3123(7328, 584), 1);
    add_background_object(create_thtorchmid_3123(7328, 648), 1);
    add_background_object(create_thtorchtop_3122(7456, 496), 1);
    add_background_object(create_thtorchmid_3123(7456, 520), 1);
    add_background_object(create_thtorchmid_3123(7456, 584), 1);
    add_background_object(create_thtorchmid_3123(7456, 648), 1);
    add_background_object(create_thtorchmid_3123(7328, 712), 1);
    add_background_object(create_thtorchmid_3123(7456, 712), 1);
    add_background_object(create_thtorchmid_3123(7328, 776), 1);
    add_background_object(create_thtorchmid_3123(7456, 776), 1);
    add_background_object(create_thtorchmid_3123(7328, 840), 1);
    add_background_object(create_thtorchmid_3123(7456, 840), 1);
    add_background_object(create_thtorchtop_3122(7584, 560), 1);
    add_background_object(create_thtorchmid_3123(7584, 584), 1);
    add_background_object(create_thtorchmid_3123(7584, 648), 1);
    add_background_object(create_thtorchmid_3123(7584, 712), 1);
    add_background_object(create_thtorchmid_3123(7584, 776), 1);
    add_background_object(create_thtorchmid_3123(7584, 840), 1);
    add_background_object(create_thtorchtop_3122(8144, 496), 1);
    add_background_object(create_thtorchmid_3123(8144, 520), 1);
    add_background_object(create_thtorchmid_3123(8144, 584), 1);
    add_background_object(create_thtorchmid_3123(8144, 648), 1);
    add_background_object(create_thtorchmid_3123(8144, 712), 1);
    add_background_object(create_thtorchmid_3123(8144, 776), 1);
    add_background_object(create_thtorchtop_3122(8280, 560), 1);
    add_background_object(create_thtorchmid_3123(8280, 584), 1);
    add_background_object(create_thtorchmid_3123(8280, 648), 1);
    add_background_object(create_thtorchmid_3123(8280, 712), 1);
    add_background_object(create_thtorchmid_3123(8280, 776), 1);
    add_background_object(create_thtorchtop_3122(8416, 496), 1);
    add_background_object(create_thtorchmid_3123(8416, 520), 1);
    add_background_object(create_thtorchmid_3123(8416, 584), 1);
    add_background_object(create_thtorchmid_3123(8416, 648), 1);
    add_background_object(create_thtorchmid_3123(8416, 712), 1);
    add_background_object(create_thtorchmid_3123(8416, 776), 1);
    add_background_object(create_thtorchtop_3122(8560, 560), 1);
    add_background_object(create_thtorchmid_3123(8560, 584), 1);
    add_background_object(create_thtorchmid_3123(8560, 648), 1);
    add_background_object(create_thtorchmid_3123(8560, 712), 1);
    add_background_object(create_thtorchmid_3123(8560, 776), 1);
    add_background_object(create_thtorchmid_3123(8560, 840), 1);
    add_background_object(create_thtorchtop_3122(8696, 624), 1);
    add_background_object(create_thtorchmid_3123(8696, 648), 1);
    add_background_object(create_thtorchmid_3123(8696, 712), 1);
    add_background_object(create_thtorchmid_3123(8696, 776), 1);
    add_background_object(create_thtorchmid_3123(8696, 840), 1);
    add_background_object(create_thtorchtop_3122(8832, 560), 1);
    add_background_object(create_thtorchmid_3123(8832, 584), 1);
    add_background_object(create_thtorchmid_3123(8832, 648), 1);
    add_background_object(create_thtorchmid_3123(8832, 712), 1);
    add_background_object(create_thtorchmid_3123(8832, 776), 1);
    add_background_object(create_thtorchmid_3123(8832, 840), 1);
    add_background_object(create_thtorchmid_3123(128, 1480), 1);
    add_background_object(create_thtorchmid_3123(256, 1480), 1);
    add_background_object(create_thtorchmid_3123(128, 1544), 1);
    add_background_object(create_thtorchmid_3123(256, 1544), 1);
    add_background_object(create_thtorchmid_3123(384, 1480), 1);
    add_background_object(create_thtorchmid_3123(384, 1544), 1);
    add_background_object(create_thtorchmid_3123(520, 1480), 1);
    add_background_object(create_thtorchmid_3123(520, 1544), 1);
    add_background_object(create_thtorchmid_3123(656, 1480), 1);
    add_background_object(create_thtorchmid_3123(656, 1544), 1);
    add_background_object(create_thtorchmid_3123(800, 1544), 1);
    add_background_object(create_thtorchmid_3123(944, 1480), 1);
    add_background_object(create_thtorchmid_3123(944, 1544), 1);
    add_background_object(create_thtorchmid_3123(1080, 1480), 1);
    add_background_object(create_thtorchmid_3123(1080, 1544), 1);
    add_background_object(create_thtorchmid_3123(1216, 1480), 1);
    add_background_object(create_thtorchmid_3123(1216, 1544), 1);
    add_background_object(create_thtorchmid_3123(800, 1480), 1);
    add_background_object(create_thtorchmid_3123(1416, 1480), 1);
    add_background_object(create_thtorchmid_3123(1552, 1480), 1);
    add_background_object(create_thtorchmid_3123(1688, 1480), 1);
    add_background_object(create_thtorchmid_3123(1416, 1544), 1);
    add_background_object(create_thtorchmid_3123(1552, 1544), 1);
    add_background_object(create_thtorchmid_3123(1688, 1544), 1);
    add_background_object(create_thtorchmid_3123(2496, 1480), 1);
    add_background_object(create_thtorchmid_3123(2496, 1544), 1);
    add_background_object(create_thtorchmid_3123(2632, 1480), 1);
    add_background_object(create_thtorchmid_3123(2632, 1544), 1);
    add_background_object(create_thtorchmid_3123(2776, 1160), 1);
    add_background_object(create_thtorchmid_3123(2776, 1224), 1);
    add_background_object(create_thtorchmid_3123(2928, 1224), 1);
    add_background_object(create_thtorchmid_3123(2928, 1160), 1);
    add_background_object(create_thtorchmid_3123(3080, 1160), 1);
    add_background_object(create_thtorchmid_3123(3080, 1224), 1);
    add_background_object(create_thtorchmid_3123(3656, 1480), 1);
    add_background_object(create_thtorchmid_3123(3656, 1544), 1);
    add_background_object(create_thtorchmid_3123(4216, 1480), 1);
    add_background_object(create_thtorchmid_3123(4216, 1544), 1);
    add_background_object(create_thtorchmid_3123(4768, 1480), 1);
    add_background_object(create_thtorchmid_3123(4768, 1544), 1);
    add_background_object(create_thtorchmid_3123(4912, 1480), 1);
    add_background_object(create_thtorchmid_3123(4912, 1544), 1);
    add_background_object(create_thtorchmid_3123(5048, 1480), 1);
    add_background_object(create_thtorchmid_3123(5048, 1544), 1);
    add_background_object(create_thtorchmid_3123(5192, 1480), 1);
    add_background_object(create_thtorchmid_3123(5192, 1544), 1);
    add_background_object(create_thtorchmid_3123(5344, 1544), 1);
    add_background_object(create_thtorchmid_3123(5344, 1480), 1);
    add_background_object(create_thtorchmid_3123(5496, 1480), 1);
    add_background_object(create_thtorchmid_3123(5496, 1544), 1);
    add_background_object(create_thtorchmid_3123(5680, 1480), 1);
    add_background_object(create_thtorchmid_3123(5808, 1480), 1);
    add_background_object(create_thtorchmid_3123(5680, 1544), 1);
    add_background_object(create_thtorchmid_3123(5808, 1544), 1);
    add_background_object(create_thtorchmid_3123(5936, 1480), 1);
    add_background_object(create_thtorchmid_3123(5936, 1544), 1);
    add_background_object(create_thtorchmid_3123(6072, 1480), 1);
    add_background_object(create_thtorchmid_3123(6072, 1544), 1);
    add_background_object(create_thtorchmid_3123(6208, 1480), 1);
    add_background_object(create_thtorchmid_3123(6208, 1544), 1);
    add_background_object(create_thtorchmid_3123(6352, 1544), 1);
    add_background_object(create_thtorchmid_3123(6496, 1480), 1);
    add_background_object(create_thtorchmid_3123(6496, 1544), 1);
    add_background_object(create_thtorchmid_3123(6632, 1480), 1);
    add_background_object(create_thtorchmid_3123(6632, 1544), 1);
    add_background_object(create_thtorchmid_3123(6768, 1352), 1);
    add_background_object(create_thtorchmid_3123(6768, 1416), 1);
    add_background_object(create_thtorchmid_3123(6352, 1480), 1);
    add_background_object(create_thtorchmid_3123(6912, 1160), 1);
    add_background_object(create_thtorchmid_3123(6912, 1224), 1);
    add_background_object(create_thtorchmid_3123(7048, 968), 1);
    add_background_object(create_thtorchmid_3123(7048, 1032), 1);
    add_background_object(create_thtorchmid_3123(7184, 904), 1);
    add_background_object(create_thtorchmid_3123(7184, 968), 1);
    add_background_object(create_thtorchmid_3123(7328, 904), 1);
    add_background_object(create_thtorchmid_3123(7456, 904), 1);
    add_background_object(create_thtorchmid_3123(7328, 968), 1);
    add_background_object(create_thtorchmid_3123(7456, 968), 1);
    add_background_object(create_thtorchmid_3123(7584, 904), 1);
    add_background_object(create_thtorchmid_3123(7584, 968), 1);
    add_background_object(create_thtorchmid_3123(8144, 840), 1);
    add_background_object(create_thtorchmid_3123(8144, 904), 1);
    add_background_object(create_thtorchmid_3123(8280, 840), 1);
    add_background_object(create_thtorchmid_3123(8280, 904), 1);
    add_background_object(create_thtorchmid_3123(8416, 840), 1);
    add_background_object(create_thtorchmid_3123(8416, 904), 1);
    add_background_object(create_thtorchmid_3123(8560, 904), 1);
    add_background_object(create_thtorchmid_3123(8560, 968), 1);
    add_background_object(create_thtorchmid_3123(8696, 904), 1);
    add_background_object(create_thtorchmid_3123(8696, 968), 1);
    add_background_object(create_thtorchmid_3123(8832, 904), 1);
    add_background_object(create_thtorchmid_3123(8832, 968), 1);
    add_background_object(create_thtorchmid_3123(128, 1608), 1);
    add_background_object(create_thtorchmid_3123(256, 1608), 1);
    add_background_object(create_thtorchmid_3123(128, 1672), 1);
    add_background_object(create_thtorchmid_3123(256, 1672), 1);
    add_background_object(create_thtorchmid_3123(384, 1608), 1);
    add_background_object(create_thtorchmid_3123(384, 1672), 1);
    add_background_object(create_thtorchmid_3123(520, 1608), 1);
    add_background_object(create_thtorchmid_3123(520, 1672), 1);
    add_background_object(create_thtorchmid_3123(656, 1608), 1);
    add_background_object(create_thtorchmid_3123(656, 1672), 1);
    add_background_object(create_thtorchmid_3123(800, 1672), 1);
    add_background_object(create_thtorchmid_3123(944, 1608), 1);
    add_background_object(create_thtorchmid_3123(944, 1672), 1);
    add_background_object(create_thtorchmid_3123(1080, 1608), 1);
    add_background_object(create_thtorchmid_3123(1080, 1672), 1);
    add_background_object(create_thtorchmid_3123(1216, 1608), 1);
    add_background_object(create_thtorchmid_3123(1216, 1672), 1);
    add_background_object(create_thtorchmid_3123(800, 1608), 1);
    add_background_object(create_thtorchmid_3123(1416, 1608), 1);
    add_background_object(create_thtorchmid_3123(1552, 1608), 1);
    add_background_object(create_thtorchmid_3123(1688, 1608), 1);
    add_background_object(create_thtorchmid_3123(1416, 1672), 1);
    add_background_object(create_thtorchmid_3123(1552, 1672), 1);
    add_background_object(create_thtorchmid_3123(1688, 1672), 1);
    add_background_object(create_thtorchmid_3123(2496, 1608), 1);
    add_background_object(create_thtorchmid_3123(2496, 1672), 1);
    add_background_object(create_thtorchmid_3123(2632, 1608), 1);
    add_background_object(create_thtorchmid_3123(2632, 1672), 1);
    add_background_object(create_thtorchmid_3123(2776, 1608), 1);
    add_background_object(create_thtorchmid_3123(2776, 1672), 1);
    add_background_object(create_thtorchmid_3123(2928, 1672), 1);
    add_background_object(create_thtorchmid_3123(2928, 1608), 1);
    add_background_object(create_thtorchmid_3123(3080, 1608), 1);
    add_background_object(create_thtorchmid_3123(3080, 1672), 1);
    add_background_object(create_thtorchmid_3123(3656, 1608), 1);
    add_background_object(create_thtorchmid_3123(3656, 1672), 1);
    add_background_object(create_thtorchmid_3123(4216, 1608), 1);
    add_background_object(create_thtorchmid_3123(4216, 1672), 1);
    add_background_object(create_thtorchmid_3123(4768, 1608), 1);
    add_background_object(create_thtorchmid_3123(4768, 1672), 1);
    add_background_object(create_thtorchmid_3123(4912, 1608), 1);
    add_background_object(create_thtorchmid_3123(4912, 1672), 1);
    add_background_object(create_thtorchmid_3123(5048, 1608), 1);
    add_background_object(create_thtorchmid_3123(5048, 1672), 1);
    add_background_object(create_thtorchmid_3123(5192, 1608), 1);
    add_background_object(create_thtorchmid_3123(5192, 1672), 1);
    add_background_object(create_thtorchmid_3123(5344, 1672), 1);
    add_background_object(create_thtorchmid_3123(5344, 1608), 1);
    add_background_object(create_thtorchmid_3123(5496, 1608), 1);
    add_background_object(create_thtorchmid_3123(5496, 1672), 1);
    add_background_object(create_thtorchmid_3123(5680, 1608), 1);
    add_background_object(create_thtorchmid_3123(5808, 1608), 1);
    add_background_object(create_thtorchmid_3123(5680, 1672), 1);
    add_background_object(create_thtorchmid_3123(5808, 1672), 1);
    add_background_object(create_thtorchmid_3123(5936, 1608), 1);
    add_background_object(create_thtorchmid_3123(5936, 1672), 1);
    add_background_object(create_thtorchmid_3123(6072, 1608), 1);
    add_background_object(create_thtorchmid_3123(6072, 1672), 1);
    add_background_object(create_thtorchmid_3123(6208, 1608), 1);
    add_background_object(create_thtorchmid_3123(6208, 1672), 1);
    add_background_object(create_thtorchmid_3123(6352, 1672), 1);
    add_background_object(create_thtorchmid_3123(6496, 1608), 1);
    add_background_object(create_thtorchmid_3123(6496, 1672), 1);
    add_background_object(create_thtorchmid_3123(6632, 1608), 1);
    add_background_object(create_thtorchmid_3123(6632, 1672), 1);
    add_background_object(create_thtorchmid_3123(6768, 1480), 1);
    add_background_object(create_thtorchmid_3123(6768, 1544), 1);
    add_background_object(create_thtorchmid_3123(6352, 1608), 1);
    add_background_object(create_thtorchmid_3123(6912, 1288), 1);
    add_background_object(create_thtorchmid_3123(6912, 1352), 1);
    add_background_object(create_thtorchmid_3123(7048, 1096), 1);
    add_background_object(create_thtorchmid_3123(7048, 1160), 1);
    add_background_object(create_thtorchmid_3123(7184, 1032), 1);
    add_background_object(create_thtorchmid_3123(7184, 1096), 1);
    add_background_object(create_thtorchmid_3123(7328, 1032), 1);
    add_background_object(create_thtorchmid_3123(7456, 1032), 1);
    add_background_object(create_thtorchmid_3123(7328, 1096), 1);
    add_background_object(create_thtorchmid_3123(7456, 1096), 1);
    add_background_object(create_thtorchmid_3123(7584, 1032), 1);
    add_background_object(create_thtorchmid_3123(7584, 1096), 1);
    add_background_object(create_thtorchmid_3123(8144, 968), 1);
    add_background_object(create_thtorchmid_3123(8144, 1032), 1);
    add_background_object(create_thtorchmid_3123(8280, 968), 1);
    add_background_object(create_thtorchmid_3123(8280, 1032), 1);
    add_background_object(create_thtorchmid_3123(8416, 968), 1);
    add_background_object(create_thtorchmid_3123(8416, 1032), 1);
    add_background_object(create_thtorchmid_3123(8560, 1032), 1);
    add_background_object(create_thtorchmid_3123(8560, 1096), 1);
    add_background_object(create_thtorchmid_3123(8696, 1032), 1);
    add_background_object(create_thtorchmid_3123(8696, 1096), 1);
    add_background_object(create_thtorchmid_3123(8832, 1032), 1);
    add_background_object(create_thtorchmid_3123(8832, 1096), 1);
    add_background_object(create_thtorchtop_3122(192, 1392), 1);
    add_background_object(create_thtorchmid_3123(192, 1416), 1);
    add_background_object(create_thtorchmid_3123(192, 1480), 1);
    add_background_object(create_thtorchmid_3123(192, 1544), 1);
    add_background_object(create_thtorchmid_3123(192, 1608), 1);
    add_background_object(create_thtorchmid_3123(192, 1672), 1);
    add_background_object(create_thtorchtop_3122(320, 1520), 1);
    add_background_object(create_thtorchmid_3123(320, 1544), 1);
    add_background_object(create_thtorchmid_3123(320, 1608), 1);
    add_background_object(create_thtorchmid_3123(320, 1672), 1);
    add_background_object(create_thtorchmid_3123(128, 1736), 1);
    add_background_object(create_thtorchmid_3123(256, 1736), 1);
    add_background_object(create_thtorchmid_3123(128, 1800), 1);
    add_background_object(create_thtorchmid_3123(256, 1800), 1);
    add_background_object(create_thtorchmid_3123(384, 1736), 1);
    add_background_object(create_thtorchmid_3123(384, 1800), 1);
    add_background_object(create_thtorchmid_3123(520, 1736), 1);
    add_background_object(create_thtorchmid_3123(520, 1800), 1);
    add_background_object(create_thtorchmid_3123(656, 1736), 1);
    add_background_object(create_thtorchmid_3123(656, 1800), 1);
    add_background_object(create_thtorchmid_3123(800, 1800), 1);
    add_background_object(create_thtorchmid_3123(944, 1736), 1);
    add_background_object(create_thtorchmid_3123(944, 1800), 1);
    add_background_object(create_thtorchmid_3123(1080, 1736), 1);
    add_background_object(create_thtorchmid_3123(1080, 1800), 1);
    add_background_object(create_thtorchmid_3123(1216, 1736), 1);
    add_background_object(create_thtorchmid_3123(1216, 1800), 1);
    add_background_object(create_thtorchmid_3123(800, 1736), 1);
    add_background_object(create_thtorchmid_3123(1416, 1736), 1);
    add_background_object(create_thtorchmid_3123(1552, 1736), 1);
    add_background_object(create_thtorchmid_3123(1688, 1736), 1);
    add_background_object(create_thtorchmid_3123(1416, 1800), 1);
    add_background_object(create_thtorchmid_3123(1552, 1800), 1);
    add_background_object(create_thtorchmid_3123(1688, 1800), 1);
    add_background_object(create_thtorchmid_3123(2496, 1736), 1);
    add_background_object(create_thtorchmid_3123(2496, 1800), 1);
    add_background_object(create_thtorchmid_3123(2632, 1736), 1);
    add_background_object(create_thtorchmid_3123(2632, 1800), 1);
    add_background_object(create_thtorchmid_3123(2776, 1736), 1);
    add_background_object(create_thtorchmid_3123(2776, 1800), 1);
    add_background_object(create_thtorchmid_3123(2928, 1800), 1);
    add_background_object(create_thtorchmid_3123(2928, 1736), 1);
    add_background_object(create_thtorchmid_3123(3080, 1736), 1);
    add_background_object(create_thtorchmid_3123(3080, 1800), 1);
    add_background_object(create_thtorchmid_3123(3656, 1736), 1);
    add_background_object(create_thtorchmid_3123(3656, 1800), 1);
    add_background_object(create_thtorchmid_3123(4216, 1736), 1);
    add_background_object(create_thtorchmid_3123(4216, 1800), 1);
    add_background_object(create_thtorchmid_3123(4768, 1736), 1);
    add_background_object(create_thtorchmid_3123(4768, 1800), 1);
    add_background_object(create_thtorchmid_3123(4912, 1736), 1);
    add_background_object(create_thtorchmid_3123(4912, 1800), 1);
    add_background_object(create_thtorchmid_3123(5048, 1736), 1);
    add_background_object(create_thtorchmid_3123(5048, 1800), 1);
    add_background_object(create_thtorchmid_3123(5192, 1736), 1);
    add_background_object(create_thtorchmid_3123(5192, 1800), 1);
    add_background_object(create_thtorchmid_3123(5344, 1800), 1);
    add_background_object(create_thtorchmid_3123(5344, 1736), 1);
    add_background_object(create_thtorchmid_3123(5496, 1736), 1);
    add_background_object(create_thtorchmid_3123(5496, 1800), 1);
    add_background_object(create_thtorchmid_3123(5680, 1736), 1);
    add_background_object(create_thtorchmid_3123(5808, 1736), 1);
    add_background_object(create_thtorchmid_3123(5680, 1800), 1);
    add_background_object(create_thtorchmid_3123(5808, 1800), 1);
    add_background_object(create_thtorchmid_3123(5936, 1736), 1);
    add_background_object(create_thtorchmid_3123(5936, 1800), 1);
    add_background_object(create_thtorchmid_3123(6072, 1736), 1);
    add_background_object(create_thtorchmid_3123(6072, 1800), 1);
    add_background_object(create_thtorchmid_3123(6208, 1736), 1);
    add_background_object(create_thtorchmid_3123(6208, 1800), 1);
    add_background_object(create_thtorchmid_3123(6352, 1800), 1);
    add_background_object(create_thtorchmid_3123(6496, 1736), 1);
    add_background_object(create_thtorchmid_3123(6496, 1800), 1);
    add_background_object(create_thtorchmid_3123(6632, 1736), 1);
    add_background_object(create_thtorchmid_3123(6632, 1800), 1);
    add_background_object(create_thtorchmid_3123(6768, 1608), 1);
    add_background_object(create_thtorchmid_3123(6768, 1672), 1);
    add_background_object(create_thtorchmid_3123(6352, 1736), 1);
    add_background_object(create_thtorchmid_3123(6912, 1416), 1);
    add_background_object(create_thtorchmid_3123(6912, 1480), 1);
    add_background_object(create_thtorchmid_3123(7048, 1224), 1);
    add_background_object(create_thtorchmid_3123(7048, 1288), 1);
    add_background_object(create_thtorchmid_3123(7184, 1160), 1);
    add_background_object(create_thtorchmid_3123(7184, 1224), 1);
    add_background_object(create_thtorchmid_3123(7328, 1160), 1);
    add_background_object(create_thtorchmid_3123(7456, 1160), 1);
    add_background_object(create_thtorchmid_3123(7328, 1224), 1);
    add_background_object(create_thtorchmid_3123(7456, 1224), 1);
    add_background_object(create_thtorchmid_3123(7584, 1160), 1);
    add_background_object(create_thtorchmid_3123(7584, 1224), 1);
    add_background_object(create_thtorchmid_3123(8144, 1096), 1);
    add_background_object(create_thtorchmid_3123(8144, 1160), 1);
    add_background_object(create_thtorchmid_3123(8280, 1096), 1);
    add_background_object(create_thtorchmid_3123(8280, 1160), 1);
    add_background_object(create_thtorchmid_3123(8416, 1096), 1);
    add_background_object(create_thtorchmid_3123(8416, 1160), 1);
    add_background_object(create_thtorchmid_3123(8560, 1160), 1);
    add_background_object(create_thtorchmid_3123(8560, 1224), 1);
    add_background_object(create_thtorchmid_3123(8696, 1160), 1);
    add_background_object(create_thtorchmid_3123(8696, 1224), 1);
    add_background_object(create_thtorchmid_3123(8832, 1160), 1);
    add_background_object(create_thtorchmid_3123(8832, 1224), 1);
    add_background_object(create_thtorchmid_3123(192, 1736), 1);
    add_background_object(create_thtorchmid_3123(192, 1800), 1);
    add_background_object(create_thtorchmid_3123(320, 1736), 1);
    add_background_object(create_thtorchmid_3123(320, 1800), 1);
    add_background_object(create_thtorchmid_3123(128, 1864), 1);
    add_background_object(create_thtorchmid_3123(256, 1864), 1);
    add_background_object(create_thtorchmid_3123(128, 1928), 1);
    add_background_object(create_thtorchmid_3123(256, 1928), 1);
    add_background_object(create_thtorchmid_3123(384, 1864), 1);
    add_background_object(create_thtorchmid_3123(384, 1928), 1);
    add_background_object(create_thtorchmid_3123(520, 1864), 1);
    add_background_object(create_thtorchmid_3123(520, 1928), 1);
    add_background_object(create_thtorchmid_3123(656, 1864), 1);
    add_background_object(create_thtorchmid_3123(656, 1928), 1);
    add_background_object(create_thtorchmid_3123(800, 1928), 1);
    add_background_object(create_thtorchmid_3123(944, 1864), 1);
    add_background_object(create_thtorchmid_3123(944, 1928), 1);
    add_background_object(create_thtorchmid_3123(1080, 1864), 1);
    add_background_object(create_thtorchmid_3123(1080, 1928), 1);
    add_background_object(create_thtorchmid_3123(1216, 1864), 1);
    add_background_object(create_thtorchmid_3123(1216, 1928), 1);
    add_background_object(create_thtorchmid_3123(800, 1864), 1);
    add_background_object(create_thtorchmid_3123(1416, 1864), 1);
    add_background_object(create_thtorchmid_3123(1552, 1864), 1);
    add_background_object(create_thtorchmid_3123(1688, 1864), 1);
    add_background_object(create_thtorchmid_3123(1416, 1928), 1);
    add_background_object(create_thtorchmid_3123(1552, 1928), 1);
    add_background_object(create_thtorchmid_3123(1688, 1928), 1);
    add_background_object(create_thtorchmid_3123(2496, 1864), 1);
    add_background_object(create_thtorchmid_3123(2496, 1928), 1);
    add_background_object(create_thtorchmid_3123(2632, 1864), 1);
    add_background_object(create_thtorchmid_3123(2632, 1928), 1);
    add_background_object(create_thtorchmid_3123(2776, 1864), 1);
    add_background_object(create_thtorchmid_3123(2776, 1928), 1);
    add_background_object(create_thtorchmid_3123(2928, 1928), 1);
    add_background_object(create_thtorchmid_3123(2928, 1864), 1);
    add_background_object(create_thtorchmid_3123(3080, 1864), 1);
    add_background_object(create_thtorchmid_3123(3080, 1928), 1);
    add_background_object(create_thtorchmid_3123(3656, 1864), 1);
    add_background_object(create_thtorchmid_3123(3656, 1928), 1);
    add_background_object(create_thtorchmid_3123(4216, 1864), 1);
    add_background_object(create_thtorchmid_3123(4216, 1928), 1);
    add_background_object(create_thtorchmid_3123(4768, 1864), 1);
    add_background_object(create_thtorchmid_3123(4768, 1928), 1);
    add_background_object(create_thtorchmid_3123(4912, 1864), 1);
    add_background_object(create_thtorchmid_3123(4912, 1928), 1);
    add_background_object(create_thtorchmid_3123(5048, 1864), 1);
    add_background_object(create_thtorchmid_3123(5048, 1928), 1);
    add_background_object(create_thtorchmid_3123(5192, 1864), 1);
    add_background_object(create_thtorchmid_3123(5192, 1928), 1);
    add_background_object(create_thtorchmid_3123(5344, 1928), 1);
    add_background_object(create_thtorchmid_3123(5344, 1864), 1);
    add_background_object(create_thtorchmid_3123(5496, 1864), 1);
    add_background_object(create_thtorchmid_3123(5496, 1928), 1);
    add_background_object(create_thtorchmid_3123(5680, 1864), 1);
    add_background_object(create_thtorchmid_3123(5808, 1864), 1);
    add_background_object(create_thtorchmid_3123(5680, 1928), 1);
    add_background_object(create_thtorchmid_3123(5808, 1928), 1);
    add_background_object(create_thtorchmid_3123(5936, 1864), 1);
    add_background_object(create_thtorchmid_3123(5936, 1928), 1);
    add_background_object(create_thtorchmid_3123(6072, 1864), 1);
    add_background_object(create_thtorchmid_3123(6072, 1928), 1);
    add_background_object(create_thtorchmid_3123(6208, 1864), 1);
    add_background_object(create_thtorchmid_3123(6208, 1928), 1);
    add_background_object(create_thtorchmid_3123(6352, 1928), 1);
    add_background_object(create_thtorchmid_3123(6496, 1864), 1);
    add_background_object(create_thtorchmid_3123(6496, 1928), 1);
    add_background_object(create_thtorchmid_3123(6632, 1864), 1);
    add_background_object(create_thtorchmid_3123(6632, 1928), 1);
    add_background_object(create_thtorchmid_3123(6768, 1736), 1);
    add_background_object(create_thtorchmid_3123(6768, 1800), 1);
    add_background_object(create_thtorchmid_3123(6352, 1864), 1);
    add_background_object(create_thtorchmid_3123(6912, 1544), 1);
    add_background_object(create_thtorchmid_3123(6912, 1608), 1);
    add_background_object(create_thtorchmid_3123(7048, 1352), 1);
    add_background_object(create_thtorchmid_3123(7048, 1416), 1);
    add_background_object(create_thtorchmid_3123(7184, 1288), 1);
    add_background_object(create_thtorchmid_3123(7184, 1352), 1);
    add_background_object(create_thtorchmid_3123(7328, 1288), 1);
    add_background_object(create_thtorchmid_3123(7456, 1288), 1);
    add_background_object(create_thtorchmid_3123(7328, 1352), 1);
    add_background_object(create_thtorchmid_3123(7456, 1352), 1);
    add_background_object(create_thtorchmid_3123(7584, 1288), 1);
    add_background_object(create_thtorchmid_3123(7584, 1352), 1);
    add_background_object(create_thtorchmid_3123(8144, 1224), 1);
    add_background_object(create_thtorchmid_3123(8144, 1288), 1);
    add_background_object(create_thtorchmid_3123(8280, 1224), 1);
    add_background_object(create_thtorchmid_3123(8280, 1288), 1);
    add_background_object(create_thtorchmid_3123(8416, 1224), 1);
    add_background_object(create_thtorchmid_3123(8416, 1288), 1);
    add_background_object(create_thtorchmid_3123(8560, 1288), 1);
    add_background_object(create_thtorchmid_3123(8560, 1352), 1);
    add_background_object(create_thtorchmid_3123(8696, 1288), 1);
    add_background_object(create_thtorchmid_3123(8696, 1352), 1);
    add_background_object(create_thtorchmid_3123(8832, 1288), 1);
    add_background_object(create_thtorchmid_3123(8832, 1352), 1);
    add_background_object(create_thtorchmid_3123(192, 1864), 1);
    add_background_object(create_thtorchmid_3123(192, 1928), 1);
    add_background_object(create_thtorchmid_3123(320, 1864), 1);
    add_background_object(create_thtorchmid_3123(320, 1928), 1);
    add_background_object(create_thtorchtop_3122(224, 1712), 1);
    add_background_object(create_thtorchmid_3123(224, 1736), 1);
    add_background_object(create_thtorchmid_3123(224, 1800), 1);
    add_background_object(create_thtorchmid_3123(224, 1864), 1);
    add_background_object(create_thtorchmid_3123(224, 1928), 1);
    add_background_object(create_thtorchtop_3122(288, 1776), 1);
    add_background_object(create_thtorchmid_3123(288, 1800), 1);
    add_background_object(create_thtorchmid_3123(288, 1864), 1);
    add_background_object(create_thtorchmid_3123(288, 1928), 1);
    add_background_object(create_thbleachers1_3175(3776, 1192), 1);
    add_background_object(create_thbleachers1_3175(3840, 1192), 1);
    add_background_object(create_thbleachers4_3176(3776, 1352), 1);
    add_background_object(create_thbleachers1_3175(4032, 1192), 1);
    add_background_object(create_thbleachers1_3175(4096, 1192), 1);
    add_background_object(create_thbleachers3_3177(4160, 1192), 1);
    add_background_object(create_thbleachers2_3178(3760, 1192), 1);
    add_background_object(create_thbleachers5_3179(3760, 1352), 1);
    add_background_object(create_thbleachers6_3180(4160, 1352), 1);
    add_background_object(create_thbleachers1_3175(3904, 1192), 1);
    add_background_object(create_thbleachers1_3175(3968, 1192), 1);
    add_background_object(create_thbleachers4_3176(3840, 1352), 1);
    add_background_object(create_thbleachers4_3176(3904, 1352), 1);
    add_background_object(create_thbleachers4_3176(3968, 1352), 1);
    add_background_object(create_thbleachers4_3176(4032, 1352), 1);
    add_background_object(create_thbleachers4_3176(4096, 1352), 1);
    add_background_object(create_thbleachers4_3176(3776, 1416), 1);
    add_background_object(create_thbleachers5_3179(3760, 1416), 1);
    add_background_object(create_thbleachers6_3180(4160, 1416), 1);
    add_background_object(create_thbleachers4_3176(3840, 1416), 1);
    add_background_object(create_thbleachers4_3176(3904, 1416), 1);
    add_background_object(create_thbleachers4_3176(3968, 1416), 1);
    add_background_object(create_thbleachers4_3176(4032, 1416), 1);
    add_background_object(create_thbleachers4_3176(4096, 1416), 1);
    add_background_object(create_thbleachers4_3176(3776, 1480), 1);
    add_background_object(create_thbleachers5_3179(3760, 1480), 1);
    add_background_object(create_thbleachers6_3180(4160, 1480), 1);
    add_background_object(create_thbleachers4_3176(3840, 1480), 1);
    add_background_object(create_thbleachers4_3176(3904, 1480), 1);
    add_background_object(create_thbleachers4_3176(3968, 1480), 1);
    add_background_object(create_thbleachers4_3176(4032, 1480), 1);
    add_background_object(create_thbleachers4_3176(4096, 1480), 1);
    add_background_object(create_thbleachers4_3176(3776, 1544), 1);
    add_background_object(create_thbleachers5_3179(3760, 1544), 1);
    add_background_object(create_thbleachers6_3180(4160, 1544), 1);
    add_background_object(create_thbleachers4_3176(3840, 1544), 1);
    add_background_object(create_thbleachers4_3176(3904, 1544), 1);
    add_background_object(create_thbleachers4_3176(3968, 1544), 1);
    add_background_object(create_thbleachers4_3176(4032, 1544), 1);
    add_background_object(create_thbleachers4_3176(4096, 1544), 1);
    add_background_object(create_thbleachers4_3176(3776, 1608), 1);
    add_background_object(create_thbleachers5_3179(3760, 1608), 1);
    add_background_object(create_thbleachers6_3180(4160, 1608), 1);
    add_background_object(create_thbleachers4_3176(3840, 1608), 1);
    add_background_object(create_thbleachers4_3176(3904, 1608), 1);
    add_background_object(create_thbleachers4_3176(3968, 1608), 1);
    add_background_object(create_thbleachers4_3176(4032, 1608), 1);
    add_background_object(create_thbleachers4_3176(4096, 1608), 1);
    add_background_object(create_thbleachers4_3176(3776, 1672), 1);
    add_background_object(create_thbleachers5_3179(3760, 1672), 1);
    add_background_object(create_thbleachers6_3180(4160, 1672), 1);
    add_background_object(create_thbleachers4_3176(3840, 1672), 1);
    add_background_object(create_thbleachers4_3176(3904, 1672), 1);
    add_background_object(create_thbleachers4_3176(3968, 1672), 1);
    add_background_object(create_thbleachers4_3176(4032, 1672), 1);
    add_background_object(create_thbleachers4_3176(4096, 1672), 1);
    add_background_object(create_thbleachers4_3176(3776, 1736), 1);
    add_background_object(create_thbleachers5_3179(3760, 1736), 1);
    add_background_object(create_thbleachers6_3180(4160, 1736), 1);
    add_background_object(create_thbleachers4_3176(3840, 1736), 1);
    add_background_object(create_thbleachers4_3176(3904, 1736), 1);
    add_background_object(create_thbleachers4_3176(3968, 1736), 1);
    add_background_object(create_thbleachers4_3176(4032, 1736), 1);
    add_background_object(create_thbleachers4_3176(4096, 1736), 1);
    add_background_object(create_thbleachers4_3176(3776, 1800), 1);
    add_background_object(create_thbleachers5_3179(3760, 1800), 1);
    add_background_object(create_thbleachers6_3180(4160, 1800), 1);
    add_background_object(create_thbleachers4_3176(3840, 1800), 1);
    add_background_object(create_thbleachers4_3176(3904, 1800), 1);
    add_background_object(create_thbleachers4_3176(3968, 1800), 1);
    add_background_object(create_thbleachers4_3176(4032, 1800), 1);
    add_background_object(create_thbleachers4_3176(4096, 1800), 1);
    add_background_object(create_thbleachers4_3176(3776, 1864), 1);
    add_background_object(create_thbleachers5_3179(3760, 1864), 1);
    add_background_object(create_thbleachers6_3180(4160, 1864), 1);
    add_background_object(create_thbleachers4_3176(3840, 1864), 1);
    add_background_object(create_thbleachers4_3176(3904, 1864), 1);
    add_background_object(create_thbleachers4_3176(3968, 1864), 1);
    add_background_object(create_thbleachers4_3176(4032, 1864), 1);
    add_background_object(create_thbleachers4_3176(4096, 1864), 1);
    add_background_object(create_thbleachers4_3176(3776, 1928), 1);
    add_background_object(create_thbleachers5_3179(3760, 1928), 1);
    add_background_object(create_thbleachers6_3180(4160, 1928), 1);
    add_background_object(create_thbleachers4_3176(3840, 1928), 1);
    add_background_object(create_thbleachers4_3176(3904, 1928), 1);
    add_background_object(create_thbleachers4_3176(3968, 1928), 1);
    add_background_object(create_thbleachers4_3176(4032, 1928), 1);
    add_background_object(create_thbleachers4_3176(4096, 1928), 1);
    add_background_object(create_thtorchmid_3123(3800, 1104), 1);
    add_background_object(create_thtorchtop_3122(3800, 1080), 1);
    add_background_object(create_thtorchmid_3123(4352, 1168), 1);
    add_background_object(create_thtorchmid_3123(4624, 1168), 1);
    add_background_object(create_thtorchtop_3122(4624, 1080), 1);
    add_background_object(create_thtorchmid_3123(4624, 1104), 1);
    add_background_object(create_thbleachers1_3175(4328, 1192), 1);
    add_background_object(create_thbleachers1_3175(4392, 1192), 1);
    add_background_object(create_thbleachers4_3176(4328, 1352), 1);
    add_background_object(create_thbleachers1_3175(4584, 1192), 1);
    add_background_object(create_thbleachers1_3175(4648, 1192), 1);
    add_background_object(create_thbleachers3_3177(4712, 1192), 1);
    add_background_object(create_thbleachers2_3178(4312, 1192), 1);
    add_background_object(create_thbleachers5_3179(4312, 1352), 1);
    add_background_object(create_thbleachers6_3180(4712, 1352), 1);
    add_background_object(create_thbleachers1_3175(4456, 1192), 1);
    add_background_object(create_thbleachers1_3175(4520, 1192), 1);
    add_background_object(create_thbleachers4_3176(4392, 1352), 1);
    add_background_object(create_thbleachers4_3176(4456, 1352), 1);
    add_background_object(create_thbleachers4_3176(4520, 1352), 1);
    add_background_object(create_thbleachers4_3176(4584, 1352), 1);
    add_background_object(create_thbleachers4_3176(4648, 1352), 1);
    add_background_object(create_thbleachers4_3176(4328, 1416), 1);
    add_background_object(create_thbleachers5_3179(4312, 1416), 1);
    add_background_object(create_thbleachers6_3180(4712, 1416), 1);
    add_background_object(create_thbleachers4_3176(4392, 1416), 1);
    add_background_object(create_thbleachers4_3176(4456, 1416), 1);
    add_background_object(create_thbleachers4_3176(4520, 1416), 1);
    add_background_object(create_thbleachers4_3176(4584, 1416), 1);
    add_background_object(create_thbleachers4_3176(4648, 1416), 1);
    add_background_object(create_thbleachers4_3176(4328, 1480), 1);
    add_background_object(create_thbleachers5_3179(4312, 1480), 1);
    add_background_object(create_thbleachers6_3180(4712, 1480), 1);
    add_background_object(create_thbleachers4_3176(4392, 1480), 1);
    add_background_object(create_thbleachers4_3176(4456, 1480), 1);
    add_background_object(create_thbleachers4_3176(4520, 1480), 1);
    add_background_object(create_thbleachers4_3176(4584, 1480), 1);
    add_background_object(create_thbleachers4_3176(4648, 1480), 1);
    add_background_object(create_thbleachers4_3176(4328, 1544), 1);
    add_background_object(create_thbleachers5_3179(4312, 1544), 1);
    add_background_object(create_thbleachers6_3180(4712, 1544), 1);
    add_background_object(create_thbleachers4_3176(4392, 1544), 1);
    add_background_object(create_thbleachers4_3176(4456, 1544), 1);
    add_background_object(create_thbleachers4_3176(4520, 1544), 1);
    add_background_object(create_thbleachers4_3176(4584, 1544), 1);
    add_background_object(create_thbleachers4_3176(4648, 1544), 1);
    add_background_object(create_thbleachers4_3176(4328, 1608), 1);
    add_background_object(create_thbleachers5_3179(4312, 1608), 1);
    add_background_object(create_thbleachers6_3180(4712, 1608), 1);
    add_background_object(create_thbleachers4_3176(4392, 1608), 1);
    add_background_object(create_thbleachers4_3176(4456, 1608), 1);
    add_background_object(create_thbleachers4_3176(4520, 1608), 1);
    add_background_object(create_thbleachers4_3176(4584, 1608), 1);
    add_background_object(create_thbleachers4_3176(4648, 1608), 1);
    add_background_object(create_thbleachers4_3176(4328, 1672), 1);
    add_background_object(create_thbleachers5_3179(4312, 1672), 1);
    add_background_object(create_thbleachers6_3180(4712, 1672), 1);
    add_background_object(create_thbleachers4_3176(4392, 1672), 1);
    add_background_object(create_thbleachers4_3176(4456, 1672), 1);
    add_background_object(create_thbleachers4_3176(4520, 1672), 1);
    add_background_object(create_thbleachers4_3176(4584, 1672), 1);
    add_background_object(create_thbleachers4_3176(4648, 1672), 1);
    add_background_object(create_thbleachers4_3176(4328, 1736), 1);
    add_background_object(create_thbleachers5_3179(4312, 1736), 1);
    add_background_object(create_thbleachers6_3180(4712, 1736), 1);
    add_background_object(create_thbleachers4_3176(4392, 1736), 1);
    add_background_object(create_thbleachers4_3176(4456, 1736), 1);
    add_background_object(create_thbleachers4_3176(4520, 1736), 1);
    add_background_object(create_thbleachers4_3176(4584, 1736), 1);
    add_background_object(create_thbleachers4_3176(4648, 1736), 1);
    add_background_object(create_thbleachers4_3176(4328, 1800), 1);
    add_background_object(create_thbleachers5_3179(4312, 1800), 1);
    add_background_object(create_thbleachers6_3180(4712, 1800), 1);
    add_background_object(create_thbleachers4_3176(4392, 1800), 1);
    add_background_object(create_thbleachers4_3176(4456, 1800), 1);
    add_background_object(create_thbleachers4_3176(4520, 1800), 1);
    add_background_object(create_thbleachers4_3176(4584, 1800), 1);
    add_background_object(create_thbleachers4_3176(4648, 1800), 1);
    add_background_object(create_thbleachers4_3176(4328, 1864), 1);
    add_background_object(create_thbleachers5_3179(4312, 1864), 1);
    add_background_object(create_thbleachers6_3180(4712, 1864), 1);
    add_background_object(create_thbleachers4_3176(4392, 1864), 1);
    add_background_object(create_thbleachers4_3176(4456, 1864), 1);
    add_background_object(create_thbleachers4_3176(4520, 1864), 1);
    add_background_object(create_thbleachers4_3176(4584, 1864), 1);
    add_background_object(create_thbleachers4_3176(4648, 1864), 1);
    add_background_object(create_thbleachers4_3176(4328, 1928), 1);
    add_background_object(create_thbleachers5_3179(4312, 1928), 1);
    add_background_object(create_thbleachers6_3180(4712, 1928), 1);
    add_background_object(create_thbleachers4_3176(4392, 1928), 1);
    add_background_object(create_thbleachers4_3176(4456, 1928), 1);
    add_background_object(create_thbleachers4_3176(4520, 1928), 1);
    add_background_object(create_thbleachers4_3176(4584, 1928), 1);
    add_background_object(create_thbleachers4_3176(4648, 1928), 1);
    add_background_object(create_thtorchmid_3123(4352, 1104), 1);
    add_background_object(create_thtorchtop_3122(4352, 1080), 1);
    add_background_object(create_thtorchmid_3123(2776, 1288), 1);
    add_background_object(create_thtorchmid_3123(2776, 1352), 1);
    add_background_object(create_thtorchmid_3123(2928, 1352), 1);
    add_background_object(create_thtorchmid_3123(2928, 1288), 1);
    add_background_object(create_thtorchmid_3123(3080, 1288), 1);
    add_background_object(create_thtorchmid_3123(3080, 1352), 1);
    add_background_object(create_thtorchmid_3123(2776, 1416), 1);
    add_background_object(create_thtorchmid_3123(2776, 1480), 1);
    add_background_object(create_thtorchmid_3123(2928, 1480), 1);
    add_background_object(create_thtorchmid_3123(2928, 1416), 1);
    add_background_object(create_thtorchmid_3123(3080, 1416), 1);
    add_background_object(create_thtorchmid_3123(3080, 1480), 1);
    add_background_object(create_thtorchmid_3123(2776, 1544), 1);
    add_background_object(create_thtorchmid_3123(2928, 1544), 1);
    add_background_object(create_thtorchmid_3123(3080, 1544), 1);
    add_background_object(create_thtorchtop_3122(2072, 752), 1);
    add_background_object(create_thtorchmid_3123(2072, 776), 1);
    add_background_object(create_thtorchmid_3123(2072, 904), 1);
    add_background_object(create_thtorchmid_3123(2072, 1096), 1);
    add_background_object(create_thtorchmid_3123(2072, 1160), 1);
    add_background_object(create_thtorchtop_3122(2208, 688), 1);
    add_background_object(create_thtorchmid_3123(2208, 712), 1);
    add_background_object(create_thtorchmid_3123(2208, 904), 1);
    add_background_object(create_thtorchmid_3123(2208, 1096), 1);
    add_background_object(create_thtorchmid_3123(2208, 1160), 1);
    add_background_object(create_thtorchmid_3123(2072, 1352), 1);
    add_background_object(create_thtorchmid_3123(2072, 1416), 1);
    add_background_object(create_thtorchmid_3123(2208, 1352), 1);
    add_background_object(create_thtorchmid_3123(2208, 1416), 1);
    add_background_object(create_thtorchmid_3123(2072, 1224), 1);
    add_background_object(create_thtorchmid_3123(2072, 1288), 1);
    add_background_object(create_thtorchmid_3123(2208, 1224), 1);
    add_background_object(create_thtorchmid_3123(2208, 1288), 1);
    add_background_object(create_thtorchmid_3123(2072, 968), 1);
    add_background_object(create_thtorchmid_3123(2208, 968), 1);
    add_background_object(create_thtorchmid_3123(2072, 1032), 1);
    add_background_object(create_thtorchmid_3123(2208, 1032), 1);
    add_background_object(create_thtorchmid_3123(2072, 840), 1);
    add_background_object(create_thtorchmid_3123(2208, 776), 1);
    add_background_object(create_thtorchmid_3123(2208, 840), 1);
    add_background_object(create_thtorchtop_3122(2352, 624), 1);
    add_background_object(create_thtorchmid_3123(2352, 648), 1);
    add_background_object(create_thtorchmid_3123(2352, 776), 1);
    add_background_object(create_thtorchmid_3123(2352, 968), 1);
    add_background_object(create_thtorchmid_3123(2352, 1032), 1);
    add_background_object(create_thtorchmid_3123(2352, 1096), 1);
    add_background_object(create_thtorchmid_3123(2352, 840), 1);
    add_background_object(create_thtorchmid_3123(2352, 904), 1);
    add_background_object(create_thtorchmid_3123(2352, 712), 1);
    add_background_object(create_thtorchmid_3123(2072, 1480), 1);
    add_background_object(create_thtorchmid_3123(2072, 1544), 1);
    add_background_object(create_thtorchmid_3123(2208, 1480), 1);
    add_background_object(create_thtorchmid_3123(2208, 1544), 1);
    add_background_object(create_thtorchmid_3123(2352, 1160), 1);
    add_background_object(create_thtorchmid_3123(2352, 1224), 1);
    add_background_object(create_thtorchmid_3123(2072, 1608), 1);
    add_background_object(create_thtorchmid_3123(2072, 1672), 1);
    add_background_object(create_thtorchmid_3123(2208, 1608), 1);
    add_background_object(create_thtorchmid_3123(2208, 1672), 1);
    add_background_object(create_thtorchmid_3123(2352, 1608), 1);
    add_background_object(create_thtorchmid_3123(2352, 1672), 1);
    add_background_object(create_thtorchmid_3123(2072, 1736), 1);
    add_background_object(create_thtorchmid_3123(2072, 1800), 1);
    add_background_object(create_thtorchmid_3123(2208, 1736), 1);
    add_background_object(create_thtorchmid_3123(2208, 1800), 1);
    add_background_object(create_thtorchmid_3123(2352, 1736), 1);
    add_background_object(create_thtorchmid_3123(2352, 1800), 1);
    add_background_object(create_thtorchmid_3123(2072, 1864), 1);
    add_background_object(create_thtorchmid_3123(2072, 1928), 1);
    add_background_object(create_thtorchmid_3123(2208, 1864), 1);
    add_background_object(create_thtorchmid_3123(2208, 1928), 1);
    add_background_object(create_thtorchmid_3123(2352, 1864), 1);
    add_background_object(create_thtorchmid_3123(2352, 1928), 1);
    add_background_object(create_thtorchmid_3123(2352, 1288), 1);
    add_background_object(create_thtorchmid_3123(2352, 1352), 1);
    add_background_object(create_thtorchmid_3123(2352, 1416), 1);
    add_background_object(create_thtorchmid_3123(2352, 1480), 1);
    add_background_object(create_thtorchmid_3123(2352, 1544), 1);
    add_background_object(create_thtorchtop_3122(1912, 688), 1);
    add_background_object(create_thtorchmid_3123(1912, 712), 1);
    add_background_object(create_thtorchmid_3123(1912, 904), 1);
    add_background_object(create_thtorchmid_3123(1912, 1096), 1);
    add_background_object(create_thtorchmid_3123(1912, 1160), 1);
    add_background_object(create_thtorchmid_3123(1912, 1352), 1);
    add_background_object(create_thtorchmid_3123(1912, 1416), 1);
    add_background_object(create_thtorchmid_3123(1912, 1224), 1);
    add_background_object(create_thtorchmid_3123(1912, 1288), 1);
    add_background_object(create_thtorchmid_3123(1912, 968), 1);
    add_background_object(create_thtorchmid_3123(1912, 1032), 1);
    add_background_object(create_thtorchmid_3123(1912, 776), 1);
    add_background_object(create_thtorchmid_3123(1912, 840), 1);
    add_background_object(create_thtorchmid_3123(1912, 1480), 1);
    add_background_object(create_thtorchmid_3123(1912, 1544), 1);
    add_background_object(create_thtorchmid_3123(1912, 1608), 1);
    add_background_object(create_thtorchmid_3123(1912, 1672), 1);
    add_background_object(create_thtorchmid_3123(1912, 1736), 1);
    add_background_object(create_thtorchmid_3123(1912, 1800), 1);
    add_background_object(create_thtorchmid_3123(1912, 1864), 1);
    add_background_object(create_thtorchmid_3123(1912, 1928), 1);
    add_background_object(create_thtorchmid_3123(7736, 536), 1);
    add_background_object(create_thtorchmid_3123(8008, 536), 1);
    add_background_object(create_thtorchtop_3122(8008, 448), 1);
    add_background_object(create_thtorchmid_3123(8008, 472), 1);
    add_background_object(create_thbleachers1_3175(7712, 560), 1);
    add_background_object(create_thbleachers1_3175(7776, 560), 1);
    add_background_object(create_thbleachers4_3176(7712, 720), 1);
    add_background_object(create_thbleachers1_3175(7968, 560), 1);
    add_background_object(create_thbleachers1_3175(8032, 560), 1);
    add_background_object(create_thbleachers3_3177(8096, 560), 1);
    add_background_object(create_thbleachers2_3178(7696, 560), 1);
    add_background_object(create_thbleachers5_3179(7696, 720), 1);
    add_background_object(create_thbleachers6_3180(8096, 720), 1);
    add_background_object(create_thbleachers1_3175(7840, 560), 1);
    add_background_object(create_thbleachers1_3175(7904, 560), 1);
    add_background_object(create_thbleachers4_3176(7776, 720), 1);
    add_background_object(create_thbleachers4_3176(7840, 720), 1);
    add_background_object(create_thbleachers4_3176(7904, 720), 1);
    add_background_object(create_thbleachers4_3176(7968, 720), 1);
    add_background_object(create_thbleachers4_3176(8032, 720), 1);
    add_background_object(create_thbleachers4_3176(7712, 784), 1);
    add_background_object(create_thbleachers5_3179(7696, 784), 1);
    add_background_object(create_thbleachers6_3180(8096, 784), 1);
    add_background_object(create_thbleachers4_3176(7776, 784), 1);
    add_background_object(create_thbleachers4_3176(7840, 784), 1);
    add_background_object(create_thbleachers4_3176(7904, 784), 1);
    add_background_object(create_thbleachers4_3176(7968, 784), 1);
    add_background_object(create_thbleachers4_3176(8032, 784), 1);
    add_background_object(create_thtorchmid_3123(7736, 472), 1);
    add_background_object(create_thtorchtop_3122(7736, 448), 1);
    add_background_object(create_thbleachers4_3176(7712, 848), 1);
    add_background_object(create_thbleachers5_3179(7696, 848), 1);
    add_background_object(create_thbleachers6_3180(8096, 848), 1);
    add_background_object(create_thbleachers4_3176(7776, 848), 1);
    add_background_object(create_thbleachers4_3176(7840, 848), 1);
    add_background_object(create_thbleachers4_3176(7904, 848), 1);
    add_background_object(create_thbleachers4_3176(7968, 848), 1);
    add_background_object(create_thbleachers4_3176(8032, 848), 1);
    add_background_object(create_thbleachers4_3176(7712, 912), 1);
    add_background_object(create_thbleachers5_3179(7696, 912), 1);
    add_background_object(create_thbleachers6_3180(8096, 912), 1);
    add_background_object(create_thbleachers4_3176(7776, 912), 1);
    add_background_object(create_thbleachers4_3176(7840, 912), 1);
    add_background_object(create_thbleachers4_3176(7904, 912), 1);
    add_background_object(create_thbleachers4_3176(7968, 912), 1);
    add_background_object(create_thbleachers4_3176(8032, 912), 1);
    add_background_object(create_thbleachers4_3176(7712, 976), 1);
    add_background_object(create_thbleachers5_3179(7696, 976), 1);
    add_background_object(create_thbleachers6_3180(8096, 976), 1);
    add_background_object(create_thbleachers4_3176(7776, 976), 1);
    add_background_object(create_thbleachers4_3176(7840, 976), 1);
    add_background_object(create_thbleachers4_3176(7904, 976), 1);
    add_background_object(create_thbleachers4_3176(7968, 976), 1);
    add_background_object(create_thbleachers4_3176(8032, 976), 1);
    add_background_object(create_thbleachers4_3176(7712, 1040), 1);
    add_background_object(create_thbleachers5_3179(7696, 1040), 1);
    add_background_object(create_thbleachers6_3180(8096, 1040), 1);
    add_background_object(create_thbleachers4_3176(7776, 1040), 1);
    add_background_object(create_thbleachers4_3176(7840, 1040), 1);
    add_background_object(create_thbleachers4_3176(7904, 1040), 1);
    add_background_object(create_thbleachers4_3176(7968, 1040), 1);
    add_background_object(create_thbleachers4_3176(8032, 1040), 1);
    add_background_object(create_thtorchmid_3123(3232, 1168), 1);
    add_background_object(create_thtorchmid_3123(3504, 1168), 1);
    add_background_object(create_thtorchtop_3122(3504, 1080), 1);
    add_background_object(create_thtorchmid_3123(3504, 1104), 1);
    add_background_object(create_thbleachers1_3175(3208, 1192), 1);
    add_background_object(create_thbleachers1_3175(3272, 1192), 1);
    add_background_object(create_thbleachers4_3176(3208, 1352), 1);
    add_background_object(create_thbleachers1_3175(3464, 1192), 1);
    add_background_object(create_thbleachers1_3175(3528, 1192), 1);
    add_background_object(create_thbleachers3_3177(3592, 1192), 1);
    add_background_object(create_thbleachers2_3178(3192, 1192), 1);
    add_background_object(create_thbleachers5_3179(3192, 1352), 1);
    add_background_object(create_thbleachers6_3180(3592, 1352), 1);
    add_background_object(create_thbleachers1_3175(3336, 1192), 1);
    add_background_object(create_thbleachers1_3175(3400, 1192), 1);
    add_background_object(create_thbleachers4_3176(3272, 1352), 1);
    add_background_object(create_thbleachers4_3176(3336, 1352), 1);
    add_background_object(create_thbleachers4_3176(3400, 1352), 1);
    add_background_object(create_thbleachers4_3176(3464, 1352), 1);
    add_background_object(create_thbleachers4_3176(3528, 1352), 1);
    add_background_object(create_thbleachers4_3176(3208, 1416), 1);
    add_background_object(create_thbleachers5_3179(3192, 1416), 1);
    add_background_object(create_thbleachers6_3180(3592, 1416), 1);
    add_background_object(create_thbleachers4_3176(3272, 1416), 1);
    add_background_object(create_thbleachers4_3176(3336, 1416), 1);
    add_background_object(create_thbleachers4_3176(3400, 1416), 1);
    add_background_object(create_thbleachers4_3176(3464, 1416), 1);
    add_background_object(create_thbleachers4_3176(3528, 1416), 1);
    add_background_object(create_thbleachers4_3176(3208, 1480), 1);
    add_background_object(create_thbleachers5_3179(3192, 1480), 1);
    add_background_object(create_thbleachers6_3180(3592, 1480), 1);
    add_background_object(create_thbleachers4_3176(3272, 1480), 1);
    add_background_object(create_thbleachers4_3176(3336, 1480), 1);
    add_background_object(create_thbleachers4_3176(3400, 1480), 1);
    add_background_object(create_thbleachers4_3176(3464, 1480), 1);
    add_background_object(create_thbleachers4_3176(3528, 1480), 1);
    add_background_object(create_thbleachers4_3176(3208, 1544), 1);
    add_background_object(create_thbleachers5_3179(3192, 1544), 1);
    add_background_object(create_thbleachers6_3180(3592, 1544), 1);
    add_background_object(create_thbleachers4_3176(3272, 1544), 1);
    add_background_object(create_thbleachers4_3176(3336, 1544), 1);
    add_background_object(create_thbleachers4_3176(3400, 1544), 1);
    add_background_object(create_thbleachers4_3176(3464, 1544), 1);
    add_background_object(create_thbleachers4_3176(3528, 1544), 1);
    add_background_object(create_thbleachers4_3176(3208, 1608), 1);
    add_background_object(create_thbleachers5_3179(3192, 1608), 1);
    add_background_object(create_thbleachers6_3180(3592, 1608), 1);
    add_background_object(create_thbleachers4_3176(3272, 1608), 1);
    add_background_object(create_thbleachers4_3176(3336, 1608), 1);
    add_background_object(create_thbleachers4_3176(3400, 1608), 1);
    add_background_object(create_thbleachers4_3176(3464, 1608), 1);
    add_background_object(create_thbleachers4_3176(3528, 1608), 1);
    add_background_object(create_thbleachers4_3176(3208, 1672), 1);
    add_background_object(create_thbleachers5_3179(3192, 1672), 1);
    add_background_object(create_thbleachers6_3180(3592, 1672), 1);
    add_background_object(create_thbleachers4_3176(3272, 1672), 1);
    add_background_object(create_thbleachers4_3176(3336, 1672), 1);
    add_background_object(create_thbleachers4_3176(3400, 1672), 1);
    add_background_object(create_thbleachers4_3176(3464, 1672), 1);
    add_background_object(create_thbleachers4_3176(3528, 1672), 1);
    add_background_object(create_thbleachers4_3176(3208, 1736), 1);
    add_background_object(create_thbleachers5_3179(3192, 1736), 1);
    add_background_object(create_thbleachers6_3180(3592, 1736), 1);
    add_background_object(create_thbleachers4_3176(3272, 1736), 1);
    add_background_object(create_thbleachers4_3176(3336, 1736), 1);
    add_background_object(create_thbleachers4_3176(3400, 1736), 1);
    add_background_object(create_thbleachers4_3176(3464, 1736), 1);
    add_background_object(create_thbleachers4_3176(3528, 1736), 1);
    add_background_object(create_thbleachers4_3176(3208, 1800), 1);
    add_background_object(create_thbleachers5_3179(3192, 1800), 1);
    add_background_object(create_thbleachers6_3180(3592, 1800), 1);
    add_background_object(create_thbleachers4_3176(3272, 1800), 1);
    add_background_object(create_thbleachers4_3176(3336, 1800), 1);
    add_background_object(create_thbleachers4_3176(3400, 1800), 1);
    add_background_object(create_thbleachers4_3176(3464, 1800), 1);
    add_background_object(create_thbleachers4_3176(3528, 1800), 1);
    add_background_object(create_thbleachers4_3176(3208, 1864), 1);
    add_background_object(create_thbleachers5_3179(3192, 1864), 1);
    add_background_object(create_thbleachers6_3180(3592, 1864), 1);
    add_background_object(create_thbleachers4_3176(3272, 1864), 1);
    add_background_object(create_thbleachers4_3176(3336, 1864), 1);
    add_background_object(create_thbleachers4_3176(3400, 1864), 1);
    add_background_object(create_thbleachers4_3176(3464, 1864), 1);
    add_background_object(create_thbleachers4_3176(3528, 1864), 1);
    add_background_object(create_thbleachers4_3176(3208, 1928), 1);
    add_background_object(create_thbleachers5_3179(3192, 1928), 1);
    add_background_object(create_thbleachers6_3180(3592, 1928), 1);
    add_background_object(create_thbleachers4_3176(3272, 1928), 1);
    add_background_object(create_thbleachers4_3176(3336, 1928), 1);
    add_background_object(create_thbleachers4_3176(3400, 1928), 1);
    add_background_object(create_thbleachers4_3176(3464, 1928), 1);
    add_background_object(create_thbleachers4_3176(3528, 1928), 1);
    add_background_object(create_thtorchmid_3123(3232, 1104), 1);
    add_background_object(create_thtorchtop_3122(3232, 1080), 1);
    add_object(create_thflame_3124(144, 944), 1);
    add_object(create_thflame_3124(272, 1008), 1);
    add_object(create_thflame_3124(400, 1072), 1);
    add_object(create_thflame_3124(536, 1136), 1);
    add_object(create_thflame_3124(672, 1072), 1);
    add_object(create_thflame_3124(816, 944), 1);
    add_object(create_thflame_3124(960, 1072), 1);
    add_object(create_thflame_3124(1096, 1136), 1);
    add_object(create_thflame_3124(1232, 1072), 1);
    add_object(create_thflame_3124(1432, 432), 1);
    add_object(create_thflame_3124(1568, 368), 1);
    add_object(create_thflame_3124(1704, 432), 1);
    add_object(create_thflame_3124(2512, 688), 1);
    add_object(create_thflame_3124(2648, 624), 1);
    add_object(create_thflame_3124(2792, 560), 1);
    add_object(create_thflame_3124(2944, 688), 1);
    add_object(create_thflame_3124(3096, 752), 1);
    add_object(create_thflame_3124(3672, 1072), 1);
    add_object(create_thflame_3124(4088, 1016), 1);
    add_object(create_thflame_3124(4232, 1072), 1);
    add_object(create_thflame_3124(4784, 1136), 1);
    add_object(create_thflame_3124(4928, 688), 1);
    add_object(create_thflame_3124(5064, 624), 1);
    add_object(create_thflame_3124(5208, 880), 1);
    add_object(create_thflame_3124(5360, 1008), 1);
    add_object(create_thflame_3124(5512, 1072), 1);
    add_object(create_thflame_3124(5696, 944), 1);
    add_object(create_thflame_3124(5824, 1008), 1);
    add_object(create_thflame_3124(5952, 1072), 1);
    add_object(create_thflame_3124(6088, 1136), 1);
    add_object(create_thflame_3124(6224, 1072), 1);
    add_object(create_thflame_3124(6368, 944), 1);
    add_object(create_thflame_3124(6512, 1072), 1);
    add_object(create_thflame_3124(6648, 1136), 1);
    add_object(create_thflame_3124(6784, 944), 1);
    add_object(create_thflame_3124(6928, 752), 1);
    add_object(create_thflame_3124(7064, 624), 1);
    add_object(create_thflame_3124(7200, 496), 1);
    add_object(create_thflame_3124(7344, 368), 1);
    add_object(create_thflame_3124(7472, 432), 1);
    add_object(create_thflame_3124(7600, 496), 1);
    add_object(create_thflame_3124(8160, 432), 1);
    add_object(create_thflame_3124(8296, 496), 1);
    add_object(create_thflame_3124(8432, 432), 1);
    add_object(create_thflame_3124(8576, 496), 1);
    add_object(create_thflame_3124(8712, 560), 1);
    add_object(create_thflame_3124(8848, 496), 1);
    add_object(create_thflame_3124(208, 1328), 1);
    add_object(create_thflame_3124(336, 1456), 1);
    add_object(create_thflame_3124(240, 1648), 1);
    add_object(create_thflame_3124(304, 1712), 1);
    add_object(create_thcrowd_3181(3827, 1228), 1);
    add_object(create_thcrowd_3181(3891, 1228), 1);
    add_object(create_thcrowd_3181(3923, 1228), 1);
    add_object(create_thcrowd_3181(3987, 1228), 1);
    add_object(create_thcrowd_3181(4059, 1228), 1);
    add_object(create_thcrowd_3181(4107, 1228), 1);
    add_object(create_thcrowd_3181(3947, 1260), 1);
    add_object(create_thcrowd_3181(4011, 1260), 1);
    add_object(create_thcrowd_3181(4043, 1260), 1);
    add_object(create_thcrowd_3181(3867, 1260), 1);
    add_object(create_thcrowd_3181(3803, 1260), 1);
    add_object(create_thcrowd_3181(4131, 1260), 1);
    add_object(create_thflame_3124(3816, 1016), 1);
    add_object(create_thflame_3124(4640, 1016), 1);
    add_object(create_thcrowd_3181(4379, 1228), 1);
    add_object(create_thcrowd_3181(4459, 1260), 1);
    add_object(create_thcrowd_3181(4443, 1228), 1);
    add_object(create_thcrowd_3181(4515, 1228), 1);
    add_object(create_thcrowd_3181(4579, 1228), 1);
    add_object(create_thcrowd_3181(4659, 1228), 1);
    add_object(create_thcrowd_3181(4523, 1260), 1);
    add_object(create_thcrowd_3181(4563, 1260), 1);
    add_object(create_thcrowd_3181(4619, 1260), 1);
    add_object(create_thcrowd_3181(4419, 1260), 1);
    add_object(create_thcrowd_3181(4355, 1260), 1);
    add_object(create_thcrowd_3181(4683, 1260), 1);
    add_object(create_thflame_3124(4368, 1016), 1);
    add_object(create_thflame_3124(2088, 688), 1);
    add_object(create_thflame_3124(2224, 624), 1);
    add_object(create_thflame_3124(2368, 560), 1);
    add_object(create_thflame_3124(1928, 624), 1);
    add_object(create_thflame_3124(8024, 384), 1);
    add_object(create_thcrowd_3181(7763, 596), 1);
    add_object(create_thcrowd_3181(7843, 628), 1);
    add_object(create_thcrowd_3181(7827, 596), 1);
    add_object(create_thcrowd_3181(7899, 596), 1);
    add_object(create_thcrowd_3181(7963, 596), 1);
    add_object(create_thcrowd_3181(8043, 596), 1);
    add_object(create_thcrowd_3181(7907, 628), 1);
    add_object(create_thcrowd_3181(7947, 628), 1);
    add_object(create_thcrowd_3181(8003, 628), 1);
    add_object(create_thcrowd_3181(7803, 628), 1);
    add_object(create_thcrowd_3181(7739, 628), 1);
    add_object(create_thcrowd_3181(8067, 628), 1);
    add_object(create_thflame_3124(7752, 384), 1);
    add_object(create_thflame_3124(3520, 1016), 1);
    add_object(create_thcrowd_3181(3259, 1228), 1);
    add_object(create_thcrowd_3181(3323, 1228), 1);
    add_object(create_thcrowd_3181(3355, 1228), 1);
    add_object(create_thcrowd_3181(3419, 1228), 1);
    add_object(create_thcrowd_3181(3491, 1228), 1);
    add_object(create_thcrowd_3181(3539, 1228), 1);
    add_object(create_thcrowd_3181(3379, 1260), 1);
    add_object(create_thcrowd_3181(3443, 1260), 1);
    add_object(create_thcrowd_3181(3475, 1260), 1);
    add_object(create_thcrowd_3181(3299, 1260), 1);
    add_object(create_thcrowd_3181(3235, 1260), 1);
    add_object(create_thcrowd_3181(3563, 1260), 1);
    add_object(create_thflame_3124(3248, 1016), 1);
    add_background_object(create_thback5_3081(32, 224), 2);
    add_background_object(create_thback5_3081(0, 2224), 2);
    add_background_object(create_thback5_3081(384, 288), 2);
    add_background_object(create_thback5_3081(256, 288), 2);
    add_background_object(create_thback5_3081(128, 288), 2);
    add_background_object(create_thback5_3081(384, 416), 2);
    add_background_object(create_thback5_3081(256, 416), 2);
    add_background_object(create_thback5_3081(128, 416), 2);
    add_background_object(create_thback5_3081(384, 544), 2);
    add_background_object(create_thback5_3081(256, 544), 2);
    add_background_object(create_thback5_3081(128, 544), 2);
    add_background_object(create_thback5_3081(384, 672), 2);
    add_background_object(create_thback5_3081(256, 672), 2);
    add_background_object(create_thback5_3081(128, 672), 2);
    add_background_object(create_thback5_3081(384, 800), 2);
    add_background_object(create_thback5_3081(256, 800), 2);
    add_background_object(create_thback5_3081(128, 800), 2);
    add_background_object(create_thback5_3081(384, 928), 2);
    add_background_object(create_thback5_3081(256, 928), 2);
    add_background_object(create_thback5_3081(128, 928), 2);
    add_background_object(create_thback5_3081(384, 1024), 2);
    add_background_object(create_thback5_3081(256, 1024), 2);
    add_background_object(create_thback5_3081(128, 1024), 2);
    add_background_object(create_thback5_3081(32, 96), 2);
    add_background_object(create_thback5_3081(32, -32), 2);
    add_background_object(create_thback5_3081(160, -32), 2);
    add_background_object(create_thback5_3081(288, -32), 2);
    add_background_object(create_thback5_3081(416, -32), 2);
    add_background_object(create_thback5_3081(416, 32), 2);
    add_background_object(create_thback5_3081(416, 160), 2);
    add_background_object(create_thback5_3081(416, 224), 2);
    add_background_object(create_thback2_3125(352, 64), 2);
    add_background_object(create_thback2_3125(224, 192), 2);
    add_background_object(create_thback2_3125(288, 192), 2);
    add_background_object(create_thback2_3125(352, 192), 2);
    add_background_object(create_thback2_3125(416, 192), 2);
    add_background_object(create_thback2_3125(224, 64), 2);
    add_background_object(create_thback2_3125(288, 64), 2);
    add_background_object(create_thback2_3125(416, 64), 2);
    add_background_object(create_thback2_3125(160, 192), 2);
    add_background_object(create_thback2_3125(160, 64), 2);
    add_background_object(create_thback5_3081(2960, 64), 2);
    add_background_object(create_thback5_3081(3088, 64), 2);
    add_background_object(create_thback5_3081(3216, 64), 2);
    add_background_object(create_thback5_3081(3344, 64), 2);
    add_background_object(create_thback3_3127(2128, 728), 2);
    add_background_object(create_thback3_3127(2304, 728), 2);
    add_background_object(create_thback4_3128(2128, 856), 2);
    add_background_object(create_thback4_3128(2304, 856), 2);
    add_background_object(create_thback3_3127(2992, 640), 2);
    add_background_object(create_thback4_3128(2992, 896), 2);
    add_background_object(create_thback3_3127(2992, 768), 2);
    add_background_object(create_thback4_3128(2872, 768), 2);
    add_background_object(create_thback3_3127(2872, 640), 2);
    add_background_object(create_thback1_3126(3696, 640), 2);
    add_background_object(create_thback1_3126(3504, 640), 2);
    add_background_object(create_thback2_3125(3632, 640), 2);
    add_background_object(create_thback1_3126(3568, 832), 2);
    add_background_object(create_thback1_3126(3696, 832), 2);
    add_background_object(create_thback2_3125(3504, 832), 2);
    add_background_object(create_thback2_3125(3824, 832), 2);
    add_background_object(create_thback5_3081(3472, 64), 2);
    add_background_object(create_thback5_3081(3472, 192), 2);
    add_background_object(create_thback5_3081(3600, 192), 2);
    add_background_object(create_thback5_3081(3600, 64), 2);
    add_background_object(create_thback5_3081(3728, 64), 2);
    add_background_object(create_thback5_3081(3728, 192), 2);
    add_background_object(create_thback5_3081(3856, 64), 2);
    add_background_object(create_thback5_3081(3856, 192), 2);
    add_background_object(create_thback1_3126(4016, 960), 2);
    add_background_object(create_thback5_3081(3984, 64), 2);
    add_background_object(create_thback5_3081(3984, 192), 2);
    add_background_object(create_thback5_3081(4112, 64), 2);
    add_background_object(create_thback5_3081(4112, 192), 2);
    add_background_object(create_thback5_3081(4240, 64), 2);
    add_background_object(create_thback5_3081(4240, 192), 2);
    add_background_object(create_thback5_3081(4368, 64), 2);
    add_background_object(create_thback5_3081(4368, 192), 2);
    add_background_object(create_thback5_3081(4368, 320), 2);
    add_background_object(create_thback5_3081(4240, 320), 2);
    add_background_object(create_thback5_3081(4496, 192), 2);
    add_background_object(create_thback5_3081(4496, 320), 2);
    add_background_object(create_thback5_3081(4624, 192), 2);
    add_background_object(create_thback5_3081(4624, 320), 2);
    add_background_object(create_thback5_3081(4752, 192), 2);
    add_background_object(create_thback5_3081(4752, 320), 2);
    add_background_object(create_thback5_3081(4880, 192), 2);
    add_background_object(create_thback5_3081(4880, 320), 2);
    add_background_object(create_thback5_3081(4688, 448), 2);
    add_background_object(create_thback5_3081(4816, 448), 2);
    add_background_object(create_thback5_3081(4688, 576), 2);
    add_background_object(create_thback5_3081(4816, 576), 2);
    add_background_object(create_thback2_3125(4112, 544), 2);
    add_background_object(create_thback2_3125(4176, 544), 2);
    add_background_object(create_thback2_3125(4240, 544), 2);
    add_background_object(create_thback2_3125(4240, 544), 2);
    add_background_object(create_thback2_3125(4304, 544), 2);
    add_background_object(create_thback2_3125(4368, 544), 2);
    add_background_object(create_thback2_3125(4432, 544), 2);
    add_background_object(create_thback2_3125(4432, 544), 2);
    add_background_object(create_thback2_3125(4432, 544), 2);
    add_background_object(create_thback2_3125(4496, 544), 2);
    add_background_object(create_thback2_3125(4560, 544), 2);
    add_background_object(create_thback2_3125(4624, 544), 2);
    add_background_object(create_thback5_3081(4560, 416), 2);
    add_background_object(create_thback5_3081(4432, 416), 2);
    add_background_object(create_thback5_3081(4304, 416), 2);
    add_background_object(create_thback5_3081(4176, 416), 2);
    add_background_object(create_thback5_3081(4048, 416), 2);
    add_background_object(create_thback3_3127(4080, 1248), 2);
    add_background_object(create_thback3_3127(4080, 1376), 2);
    add_background_object(create_thback4_3128(4080, 1504), 2);
    add_background_object(create_thback3_3127(4208, 1248), 2);
    add_background_object(create_thback4_3128(4208, 1376), 2);
    add_background_object(create_thback3_3127(4336, 1248), 2);
    add_background_object(create_thback3_3127(4336, 1376), 2);
    add_background_object(create_thback4_3128(4336, 1504), 2);
    add_background_object(create_thback3_3127(4464, 1248), 2);
    add_background_object(create_thback4_3128(4464, 1376), 2);
    add_background_object(create_thback3_3127(4592, 1248), 2);
    add_background_object(create_thback3_3127(4592, 1376), 2);
    add_background_object(create_thback4_3128(4592, 1504), 2);
    add_background_object(create_thback3_3127(5856, 1288), 2);
    add_background_object(create_thback4_3128(5856, 1416), 2);
    add_background_object(create_thback3_3127(5976, 1288), 2);
    add_background_object(create_thback4_3128(5976, 1416), 2);
    add_background_object(create_thback3_3127(6096, 1288), 2);
    add_background_object(create_thback4_3128(6096, 1416), 2);
    add_background_object(create_thback3_3127(6216, 1288), 2);
    add_background_object(create_thback4_3128(6216, 1416), 2);
    add_background_object(create_thback2_3125(6304, 1416), 2);
    add_background_object(create_thback2_3125(6304, 1288), 2);
    add_background_object(create_thback2_3125(6368, 1416), 2);
    add_background_object(create_thback2_3125(6368, 1288), 2);
    add_background_object(create_thback2_3125(6432, 1416), 2);
    add_background_object(create_thback2_3125(6432, 1288), 2);
    add_background_object(create_thback2_3125(6496, 1416), 2);
    add_background_object(create_thback2_3125(6496, 1288), 2);
    add_background_object(create_thback2_3125(6560, 1416), 2);
    add_background_object(create_thback2_3125(6560, 1288), 2);
    add_background_object(create_thback2_3125(6624, 1416), 2);
    add_background_object(create_thback2_3125(6624, 1288), 2);
    add_background_object(create_thback2_3125(6688, 1416), 2);
    add_background_object(create_thback2_3125(6688, 1288), 2);
    add_background_object(create_thback2_3125(6752, 1416), 2);
    add_background_object(create_thback2_3125(6752, 1288), 2);
    add_background_object(create_thback5_3081(7168, 1032), 2);
    add_background_object(create_thback1_3126(7168, 1160), 2);
    add_background_object(create_thback2_3125(6944, 1416), 2);
    add_background_object(create_thback2_3125(6944, 1288), 2);
    add_background_object(create_thback2_3125(6816, 1416), 2);
    add_background_object(create_thback2_3125(6816, 1288), 2);
    add_background_object(create_thback2_3125(6880, 1416), 2);
    add_background_object(create_thback2_3125(6880, 1288), 2);
    add_background_object(create_ryblossomtreehuge1_3130(3136, 336), 2);
    add_background_object(create_ryblossomtree3_3132(3224, 392), 2);
    add_background_object(create_ryblossomtree3_3132(3160, 304), 2);
    add_background_object(create_ryblossomtree3_3132(3056, 448), 2);
    add_background_object(create_ryblossomtree4_3133(3144, 472), 2);
    add_background_object(create_ryblossomtree4_3133(3096, 368), 2);
    add_background_object(create_ryblossomtree4_3133(3304, 464), 2);
    add_background_object(create_ryblossomtreehuge1_3130(4840, 1368), 2);
    add_background_object(create_ryblossomtree3_3132(4928, 1424), 2);
    add_background_object(create_ryblossomtree3_3132(4864, 1336), 2);
    add_background_object(create_ryblossomtree3_3132(4760, 1480), 2);
    add_background_object(create_ryblossomtree4_3133(4848, 1504), 2);
    add_background_object(create_ryblossomtree4_3133(4800, 1400), 2);
    add_background_object(create_ryblossomtree4_3133(5008, 1496), 2);
    add_background_object(create_ryblossomtreehuge1_3130(5424, 1368), 2);
    add_background_object(create_ryblossomtree3_3132(5512, 1424), 2);
    add_background_object(create_ryblossomtree3_3132(5448, 1336), 2);
    add_background_object(create_ryblossomtree3_3132(5344, 1480), 2);
    add_background_object(create_ryblossomtree4_3133(5432, 1504), 2);
    add_background_object(create_ryblossomtree4_3133(5384, 1400), 2);
    add_background_object(create_ryblossomtree4_3133(5592, 1496), 2);
    add_background_object(create_thback1_3126(7936, 1032), 2);
    add_background_object(create_thtire2_3135(9640, 1032), 2);
    add_background_object(create_thtire2_3135(9384, 1032), 2);
    add_background_object(create_thback3_3127(9056, 712), 2);
    add_background_object(create_thback4_3128(9056, 840), 2);
    add_background_object(create_thback3_3127(9184, 712), 2);
    add_background_object(create_thback4_3128(9184, 840), 2);
    add_background_object(create_thback3_3127(9440, 416), 2);
    add_background_object(create_thback4_3128(9440, 544), 2);
    add_background_object(create_thback3_3127(9568, 544), 2);
    add_background_object(create_thback4_3128(9568, 672), 2);
    add_background_object(create_thback3_3127(9568, 416), 2);
    add_background_object(create_thback4_3128(9688, 544), 2);
    add_background_object(create_thback3_3127(9688, 416), 2);
    add_background_object(create_thback3_3127(8288, 552), 2);
    add_background_object(create_thback4_3128(8288, 808), 2);
    add_background_object(create_thback3_3127(8288, 680), 2);
    add_background_object(create_thback3_3127(8416, 552), 2);
    add_background_object(create_thback4_3128(8416, 808), 2);
    add_background_object(create_thback3_3127(8416, 680), 2);
    add_background_object(create_thback3_3127(8704, 160), 2);
    add_background_object(create_thback4_3128(8704, 416), 2);
    add_background_object(create_thback3_3127(8704, 288), 2);
    add_background_object(create_thback3_3127(8896, 160), 2);
    add_background_object(create_thback4_3128(8896, 544), 2);
    add_background_object(create_thback3_3127(8896, 416), 2);
    add_background_object(create_thback3_3127(9088, 160), 2);
    add_background_object(create_thback4_3128(9088, 544), 2);
    add_background_object(create_thback3_3127(9088, 416), 2);
    add_background_object(create_thback3_3127(8896, 288), 2);
    add_background_object(create_thback3_3127(9088, 288), 2);
    add_background_object(create_thback3_3127(9280, 160), 2);
    add_background_object(create_thback4_3128(9280, 416), 2);
    add_background_object(create_thback3_3127(9280, 288), 2);
    add_background_object(create_thbleachers1_3175(11792, 584), 2);
    add_background_object(create_thbleachers1_3175(11856, 584), 2);
    add_background_object(create_thbleachers1_3175(12048, 584), 2);
    add_background_object(create_thbleachers1_3175(12112, 584), 2);
    add_background_object(create_thbleachers3_3177(12176, 584), 2);
    add_background_object(create_thbleachers2_3178(11776, 584), 2);
    add_background_object(create_thbleachers1_3175(11920, 584), 2);
    add_background_object(create_thbleachers1_3175(11984, 584), 2);
    add_background_object(create_thbleachers1_3175(12320, 584), 2);
    add_background_object(create_thbleachers1_3175(12640, 584), 2);
    add_background_object(create_thbleachers1_3175(12512, 584), 2);
    add_background_object(create_thbleachers1_3175(12576, 584), 2);
    add_background_object(create_thbleachers3_3177(12704, 584), 2);
    add_background_object(create_thbleachers2_3178(12304, 584), 2);
    add_background_object(create_thbleachers1_3175(12384, 584), 2);
    add_background_object(create_thbleachers1_3175(12448, 584), 2);
    add_background_object(create_thback2_3125(11456, 488), 2);
    add_background_object(create_thback2_3125(11520, 488), 2);
    add_background_object(create_thback2_3125(11520, 360), 2);
    add_background_object(create_thback2_3125(11456, 360), 2);
    add_background_object(create_thbleachers1_3175(160, 176), 2);
    add_background_object(create_thbleachers1_3175(224, 176), 2);
    add_background_object(create_thbleachers1_3175(352, 176), 2);
    add_background_object(create_thbleachers1_3175(416, 176), 2);
    add_background_object(create_thbleachers3_3177(480, 176), 2);
    add_background_object(create_thbleachers2_3178(144, 176), 2);
    add_background_object(create_thbleachers1_3175(288, 176), 2);
    add_object(create_sign_351(12984, 85), 2);
    add_object(create_link_352(88, -96), 2);
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
    add_object(create_thbacklight1_3083(192, 576), 2);
    add_object(create_thbacklight1_3083(192, 448), 2);
    add_object(create_thbacklight1_3083(192, 800), 2);
    add_object(create_thbacklight1_3083(192, 928), 2);
    add_object(create_thbacklight1_3083(416, 576), 2);
    add_object(create_thbacklight1_3083(416, 448), 2);
    add_object(create_thbacklight1_3083(416, 800), 2);
    add_object(create_thbacklight1_3083(416, 928), 2);
    add_object(create_bosscrystalbashersegment_3182(320, 232), 2);
    add_object(create_bosscrystalbashersegment_3182(320, 256), 2);
    add_object(create_bosscrystalbashersegment_3182(320, 280), 2);
    add_object(create_bosscrystalbashersegment_3182(320, 304), 2);
    add_object(create_bosscrystalspike_3183(320, 184), 2);
    add_object(create_bosscrystalspike2_3184(320, 184), 2);
    add_object(create_bosscrystalbasherhead_3185(320, 184), 2);
    add_object(create_thbacklight1_3083(3216, 64), 2);
    add_object(create_thbacklight1_3083(3056, 64), 2);
    add_object(create_thbacklight1_3083(3664, 96), 2);
    add_object(create_thbacklight1_3083(3760, 96), 2);
    add_object(create_thbacklight1_3083(4464, 288), 2);
    add_object(create_thbacklight1_3083(4560, 288), 2);
    add_object(create_thbacklight1_3083(4656, 288), 2);
    add_object(create_thbacklight1_3083(4752, 288), 2);
    add_object(create_thbacklight1_3083(4848, 288), 2);
    add_object(create_thbacklight1_3083(4752, 480), 2);
    add_object(create_thbacklight1_3083(4848, 480), 2);
    add_object(create_thcrowd_3181(11843, 620), 2);
    add_object(create_thcrowd_3181(11907, 620), 2);
    add_object(create_thcrowd_3181(11939, 620), 2);
    add_object(create_thcrowd_3181(12003, 620), 2);
    add_object(create_thcrowd_3181(12075, 620), 2);
    add_object(create_thcrowd_3181(12123, 620), 2);
    add_object(create_thcrowd_3181(11963, 652), 2);
    add_object(create_thcrowd_3181(12027, 652), 2);
    add_object(create_thcrowd_3181(12059, 652), 2);
    add_object(create_thcrowd_3181(11883, 652), 2);
    add_object(create_thcrowd_3181(11819, 652), 2);
    add_object(create_thcrowd_3181(12147, 652), 2);
    add_object(create_thcrowd_3181(12355, 620), 2);
    add_object(create_thcrowd_3181(12419, 620), 2);
    add_object(create_thcrowd_3181(12459, 620), 2);
    add_object(create_thcrowd_3181(12539, 620), 2);
    add_object(create_thcrowd_3181(12635, 620), 2);
    add_object(create_thcrowd_3181(12675, 620), 2);
    add_object(create_thcrowd_3181(12587, 652), 2);
    add_object(create_thcrowd_3181(12659, 652), 2);
    add_object(create_thcrowd_3181(12515, 652), 2);
    add_object(create_thcrowd_3181(12443, 652), 2);
    add_object(create_thcrowd_3181(12387, 652), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_object(create_mapdata2_32(-432, 240), 2);
    add_background_object(create_thtire9_3186(11680, 456), 3);
    add_background_object(create_thtire8_3187(12752, 392), 3);
    add_background_object(create_thtire5_3139(12752, 712), 3);
    add_background_object(create_thtire4_3138(11680, 712), 3);
    add_background_object(create_rydiagonalpipe2_3089(11696, 336), 3);
    add_background_object(create_thstone8_3098(11688, 392), 3);
    add_background_object(create_thstone4_3086(11688, 424), 3);
    add_background_object(create_thstone6_3095(11688, 456), 3);
    add_background_object(create_thtire5_3139(8128, 1128), 3);
    add_background_object(create_thstone9_3093(8096, 1192), 3);
    add_background_object(create_thstone1_3091(8096, 1256), 3);
    add_background_object(create_rydiagonalpipe2_3089(11568, 208), 3);
    add_background_object(create_rydiagonalpipe2_3089(11632, 272), 3);
    add_background_object(create_thstone11_3085(11136, 776), 3);
    add_background_object(create_thstone11_3085(11136, 904), 3);
    add_background_object(create_thwood3_3137(10848, 568), 3);
    add_background_object(create_thtire5_3139(10144, 808), 3);
    add_background_object(create_thtire5_3139(9464, 1032), 3);
    add_background_object(create_thtire4_3138(9592, 1032), 3);
    add_background_object(create_thtire3_3140(9496, 968), 3);
    add_background_object(create_rydiagonalpipe2_3089(9184, 936), 3);
    add_background_object(create_rydiagonalpipe2_3089(9248, 1000), 3);
    add_background_object(create_rydiagonalpipe1_3088(8992, 1000), 3);
    add_background_object(create_thstone11_3085(8576, 712), 3);
    add_background_object(create_thstone11_3085(8576, 968), 3);
    add_background_object(create_thstone9_3093(4736, 704), 3);
    add_background_object(create_thstone1_3091(4752, 768), 3);
    add_background_object(create_thstone2_3092(4720, 672), 3);
    add_background_object(create_thwood6_3143(4320, 320), 3);
    add_background_object(create_thwood3_3137(3712, 608), 3);
    add_background_object(create_thwood3_3137(3328, 608), 3);
    add_background_object(create_thtire2_3135(3024, 976), 3);
    add_background_object(create_thtire2_3135(2680, 976), 3);
    add_background_object(create_thtire2_3135(2504, 976), 3);
    add_background_object(create_thtire2_3135(2296, 976), 3);
    add_background_object(create_thtire2_3135(2120, 640), 3);
    add_background_object(create_thtire2_3135(2264, 608), 3);
    add_background_object(create_rydiagonalpipe2_3089(704, 256), 3);
    add_background_object(create_rydiagonalpipe2_3089(640, 192), 3);
    add_background_object(create_thwood6_3143(480, 512), 3);
    add_background_object(create_thtire3_3140(16, 240), 3);
    add_background_object(create_thtire3_3140(496, 240), 3);
    add_background_object(create_thtire3_3140(16, -16), 3);
    add_background_object(create_thtire5_3139(464, 304), 3);
    add_background_object(create_thtire6_3188(464, -16), 3);
    add_background_object(create_thtire7_3189(112, -16), 3);
    add_background_object(create_thtire4_3138(112, 304), 3);
    add_background_object(create_thwood5_3144(352, 336), 3);
    add_background_object(create_thwood4_3145(496, 2064), 3);
    add_background_object(create_thwood3_3137(416, 2048), 3);
    add_background_object(create_thwood5_3144(128, 384), 3);
    add_background_object(create_thwood3_3137(224, 368), 3);
    add_background_object(create_thwood5_3144(128, 768), 3);
    add_background_object(create_thwood3_3137(64, 752), 3);
    add_background_object(create_thwood4_3145(496, 912), 3);
    add_background_object(create_thwood3_3137(432, 896), 3);
    add_background_object(create_thwood5_3144(128, 1152), 3);
    add_background_object(create_thwood3_3137(128, 1136), 3);
    add_background_object(create_thwood4_3145(496, 1488), 3);
    add_background_object(create_thwood3_3137(384, 1472), 3);
    add_background_object(create_thwood5_3144(128, 1728), 3);
    add_background_object(create_thwood3_3137(128, 1712), 3);
    add_background_object(create_thwood3_3137(0, 2240), 3);
    add_background_object(create_rydiagonalpipe2_3089(-376, 936), 3);
    add_background_object(create_rydiagonalpipe1_3088(-200, 896), 3);
    add_background_object(create_thstone2_3092(-224, 1072), 3);
    add_background_object(create_thstone9_3093(-224, 1104), 3);
    add_background_object(create_thwood1_3094(-144, 848), 3);
    add_background_object(create_thstone6_3095(-256, 1168), 3);
    add_background_object(create_thstone4_3086(-256, 1104), 3);
    add_background_object(create_thstone3_3090(-160, 1104), 3);
    add_background_object(create_thstone5_3096(-160, 1168), 3);
    add_background_object(create_thstone7_3097(-160, 1072), 3);
    add_background_object(create_thstone8_3098(-256, 1072), 3);
    add_background_object(create_thstone1_3091(-224, 1168), 3);
    add_background_object(create_thbackbarrel_3129(-384, 1096), 3);
    add_background_object(create_thtire3_3140(-416, 1192), 3);
    add_background_object(create_thtire4_3138(-472, 1160), 3);
    add_background_object(create_thtire5_3139(-408, 1160), 3);
    add_background_object(create_ladder_494(-432, 952), 3);
    add_background_object(create_thback1_3126(-464, 784), 3);
    add_background_object(create_thback2_3125(-408, 792), 3);
    add_background_object(create_thback3_3127(-440, 800), 3);
    add_background_object(create_thback4_3128(-432, 824), 3);
    add_background_object(create_thback5_3081(-336, 784), 3);
    add_background_object(create_thhandlebar_3148(216, 1168), 3);
    add_background_object(create_thrope1_3147(-496, 1040), 3);
    add_background_object(create_thrope2_3141(-224, 1000), 3);
    add_background_object(create_thrope3_3142(-280, 1208), 3);
    add_background_object(create_thstone10_3146(-464, 1088), 3);
    add_background_object(create_thstone11_3085(-192, 1224), 3);
    add_background_object(create_thtire1_3136(-480, 1224), 3);
    add_background_object(create_thtire2_3135(-480, 1256), 3);
    add_background_object(create_thwood2_3134(-216, 872), 3);
    add_background_object(create_thwood3_3137(-176, 896), 3);
    add_background_object(create_thwood4_3145(-208, 920), 3);
    add_background_object(create_thwood5_3144(-120, 928), 3);
    add_background_object(create_thwood6_3143(-152, 984), 3);
    add_background_object(create_thwood2_3134(0, 2352), 3);
    add_background_object(create_thwood2_3134(128, 2352), 3);
    add_background_object(create_thwood2_3134(256, 2352), 3);
    add_background_object(create_ladder_494(272, 2240), 3);
    add_background_object(create_thwood2_3134(384, 2352), 3);
    add_background_object(create_thwood2_3134(512, 2352), 3);
    add_background_object(create_thwood2_3134(512, 2304), 3);
    add_background_object(create_thwood2_3134(512, 2256), 3);
    add_background_object(create_thwood4_3145(496, 2320), 3);
    add_background_object(create_thwood4_3145(496, 2288), 3);
    add_background_object(create_thwood4_3145(496, 2256), 3);
    add_background_object(create_thwood2_3134(512, 2208), 3);
    add_background_object(create_thwood2_3134(512, 2160), 3);
    add_background_object(create_thwood4_3145(496, 2224), 3);
    add_background_object(create_thwood4_3145(496, 2192), 3);
    add_background_object(create_thwood4_3145(496, 2160), 3);
    add_background_object(create_thwood2_3134(0, 2208), 3);
    add_background_object(create_thwood5_3144(128, 2208), 3);
    add_background_object(create_thwood5_3144(128, 2240), 3);
    add_background_object(create_thwood2_3134(0, 2160), 3);
    add_background_object(create_thwood2_3134(0, 2112), 3);
    add_background_object(create_thwood5_3144(128, 2144), 3);
    add_background_object(create_thwood5_3144(128, 2176), 3);
    add_background_object(create_thwood5_3144(128, 2112), 3);
    add_background_object(create_thwood2_3134(512, 2112), 3);
    add_background_object(create_thwood2_3134(512, 2064), 3);
    add_background_object(create_thwood4_3145(496, 2128), 3);
    add_background_object(create_thwood4_3145(496, 2096), 3);
    add_background_object(create_thwood2_3134(544, 2016), 3);
    add_background_object(create_thwood2_3134(512, 1968), 3);
    add_background_object(create_thwood4_3145(496, 2000), 3);
    add_background_object(create_thwood4_3145(496, 1968), 3);
    add_background_object(create_thwood2_3134(512, 1920), 3);
    add_background_object(create_thwood2_3134(512, 1872), 3);
    add_background_object(create_thwood4_3145(496, 1936), 3);
    add_background_object(create_thwood4_3145(496, 1904), 3);
    add_background_object(create_thwood4_3145(496, 1872), 3);
    add_background_object(create_ladder_494(272, 2208), 3);
    add_background_object(create_ladder_494(272, 2176), 3);
    add_background_object(create_ladder_494(272, 2144), 3);
    add_background_object(create_ladder_494(272, 2112), 3);
    add_background_object(create_ladder_494(272, 2080), 3);
    add_background_object(create_ladder_494(272, 2048), 3);
    add_background_object(create_ladder_494(272, 2016), 3);
    add_background_object(create_thwood2_3134(512, 1824), 3);
    add_background_object(create_thwood2_3134(512, 1776), 3);
    add_background_object(create_thwood4_3145(496, 1840), 3);
    add_background_object(create_thwood4_3145(496, 1808), 3);
    add_background_object(create_thwood4_3145(496, 1776), 3);
    add_background_object(create_thwood2_3134(512, 1728), 3);
    add_background_object(create_thwood2_3134(512, 1680), 3);
    add_background_object(create_thwood4_3145(496, 1744), 3);
    add_background_object(create_thwood4_3145(496, 1712), 3);
    add_background_object(create_thwood4_3145(496, 1680), 3);
    add_background_object(create_thwood2_3134(512, 1632), 3);
    add_background_object(create_thwood2_3134(512, 1584), 3);
    add_background_object(create_thwood4_3145(496, 1648), 3);
    add_background_object(create_thwood4_3145(496, 1616), 3);
    add_background_object(create_thwood4_3145(496, 1584), 3);
    add_background_object(create_thwood2_3134(0, 2064), 3);
    add_background_object(create_thwood5_3144(128, 2080), 3);
    add_background_object(create_thwood2_3134(0, 2016), 3);
    add_background_object(create_thwood5_3144(128, 2016), 3);
    add_background_object(create_thwood5_3144(128, 2048), 3);
    add_background_object(create_thwood2_3134(0, 1968), 3);
    add_background_object(create_thwood2_3134(0, 1920), 3);
    add_background_object(create_thwood5_3144(128, 1952), 3);
    add_background_object(create_thwood5_3144(128, 1984), 3);
    add_background_object(create_thwood5_3144(128, 1920), 3);
    add_background_object(create_thwood2_3134(0, 1872), 3);
    add_background_object(create_thwood5_3144(128, 1888), 3);
    add_background_object(create_thwood2_3134(0, 1824), 3);
    add_background_object(create_thwood5_3144(128, 1824), 3);
    add_background_object(create_thwood5_3144(128, 1856), 3);
    add_background_object(create_thwood2_3134(0, 1776), 3);
    add_background_object(create_thwood2_3134(0, 1728), 3);
    add_background_object(create_thwood5_3144(128, 1760), 3);
    add_background_object(create_thwood5_3144(128, 1792), 3);
    add_background_object(create_thwood2_3134(0, 1680), 3);
    add_background_object(create_thwood5_3144(256, 1680), 3);
    add_background_object(create_thwood2_3134(0, 1632), 3);
    add_background_object(create_thwood5_3144(128, 1632), 3);
    add_background_object(create_thwood5_3144(128, 1664), 3);
    add_background_object(create_thwood2_3134(0, 1584), 3);
    add_background_object(create_thwood2_3134(0, 1536), 3);
    add_background_object(create_thwood5_3144(128, 1568), 3);
    add_background_object(create_thwood5_3144(128, 1600), 3);
    add_background_object(create_thwood5_3144(128, 1536), 3);
    add_background_object(create_thwood2_3134(0, 1488), 3);
    add_background_object(create_thwood5_3144(128, 1504), 3);
    add_background_object(create_thwood2_3134(0, 1440), 3);
    add_background_object(create_thwood5_3144(128, 1440), 3);
    add_background_object(create_thwood5_3144(128, 1472), 3);
    add_background_object(create_thwood2_3134(512, 1536), 3);
    add_background_object(create_thwood2_3134(512, 1488), 3);
    add_background_object(create_thwood4_3145(496, 1552), 3);
    add_background_object(create_thwood4_3145(496, 1520), 3);
    add_background_object(create_thwood2_3134(512, 1440), 3);
    add_background_object(create_thwood2_3134(512, 1392), 3);
    add_background_object(create_thwood4_3145(496, 1424), 3);
    add_background_object(create_thwood4_3145(496, 1392), 3);
    add_background_object(create_thwood2_3134(0, 1392), 3);
    add_background_object(create_thwood2_3134(0, 1344), 3);
    add_background_object(create_thwood5_3144(128, 1376), 3);
    add_background_object(create_thwood5_3144(128, 1408), 3);
    add_background_object(create_thwood5_3144(128, 1344), 3);
    add_background_object(create_thwood2_3134(0, 1296), 3);
    add_background_object(create_thwood5_3144(128, 1312), 3);
    add_background_object(create_thwood2_3134(0, 1248), 3);
    add_background_object(create_thwood5_3144(128, 1248), 3);
    add_background_object(create_thwood5_3144(128, 1280), 3);
    add_background_object(create_thwood2_3134(512, 1344), 3);
    add_background_object(create_thwood2_3134(512, 1296), 3);
    add_background_object(create_thwood4_3145(496, 1360), 3);
    add_background_object(create_thwood4_3145(496, 1328), 3);
    add_background_object(create_thwood2_3134(512, 1248), 3);
    add_background_object(create_thwood2_3134(512, 1200), 3);
    add_background_object(create_thwood4_3145(496, 1264), 3);
    add_background_object(create_thwood4_3145(496, 1232), 3);
    add_background_object(create_thwood4_3145(496, 1200), 3);
    add_background_object(create_thwood2_3134(0, 1200), 3);
    add_background_object(create_thwood2_3134(0, 1152), 3);
    add_background_object(create_thwood5_3144(128, 1184), 3);
    add_background_object(create_thwood5_3144(128, 1216), 3);
    add_background_object(create_thwood2_3134(0, 1104), 3);
    add_background_object(create_thwood2_3134(0, 1056), 3);
    add_background_object(create_thwood5_3144(128, 1056), 3);
    add_background_object(create_thwood5_3144(128, 1088), 3);
    add_background_object(create_thwood2_3134(512, 1152), 3);
    add_background_object(create_thwood2_3134(512, 1104), 3);
    add_background_object(create_thwood4_3145(496, 1168), 3);
    add_background_object(create_thwood4_3145(496, 1136), 3);
    add_background_object(create_thwood4_3145(496, 1104), 3);
    add_background_object(create_thwood2_3134(512, 1056), 3);
    add_background_object(create_thwood2_3134(512, 1008), 3);
    add_background_object(create_thwood4_3145(496, 1072), 3);
    add_background_object(create_thwood4_3145(496, 1040), 3);
    add_background_object(create_thwood4_3145(496, 1008), 3);
    add_background_object(create_thwood2_3134(0, 1008), 3);
    add_background_object(create_thwood2_3134(0, 960), 3);
    add_background_object(create_thwood5_3144(128, 992), 3);
    add_background_object(create_thwood5_3144(128, 1024), 3);
    add_background_object(create_thwood5_3144(128, 960), 3);
    add_background_object(create_thwood2_3134(0, 912), 3);
    add_background_object(create_thwood5_3144(128, 928), 3);
    add_background_object(create_thwood2_3134(0, 864), 3);
    add_background_object(create_thwood5_3144(128, 864), 3);
    add_background_object(create_thwood5_3144(128, 896), 3);
    add_background_object(create_thwood2_3134(0, 240), 3);
    add_background_object(create_thwood2_3134(0, 192), 3);
    add_background_object(create_thwood5_3144(128, 240), 3);
    add_background_object(create_thwood5_3144(128, 272), 3);
    add_background_object(create_thwood5_3144(128, 208), 3);
    add_background_object(create_thwood2_3134(0, 144), 3);
    add_background_object(create_thwood5_3144(128, 176), 3);
    add_background_object(create_thwood2_3134(0, 96), 3);
    add_background_object(create_thwood5_3144(128, 112), 3);
    add_background_object(create_thwood5_3144(128, 144), 3);
    add_background_object(create_thwood2_3134(0, 48), 3);
    add_background_object(create_thwood2_3134(0, 0), 3);
    add_background_object(create_thwood5_3144(128, 80), 3);
    add_background_object(create_thwood3_3137(160, -16), 3);
    add_background_object(create_thwood3_3137(512, -16), 3);
    add_background_object(create_thwood3_3137(640, -16), 3);
    add_background_object(create_thwood2_3134(512, 960), 3);
    add_background_object(create_thwood2_3134(512, 912), 3);
    add_background_object(create_thwood4_3145(496, 976), 3);
    add_background_object(create_thwood4_3145(496, 944), 3);
    add_background_object(create_thwood2_3134(560, 864), 3);
    add_background_object(create_thwood4_3145(496, 240), 3);
    add_background_object(create_thwood2_3134(128, 1680), 3);
    add_background_object(create_thwood5_3144(256, 1712), 3);
    add_background_object(create_thwood2_3134(384, 1440), 3);
    add_background_object(create_thwood4_3145(368, 1472), 3);
    add_background_object(create_thwood4_3145(496, 1296), 3);
    add_background_object(create_thwood4_3145(368, 1440), 3);
    add_background_object(create_thwood3_3137(216, 1912), 3);
    add_background_object(create_thwood4_3145(200, 1912), 3);
    add_background_object(create_thwood5_3144(344, 1912), 3);
    add_background_object(create_thwood4_3145(384, 1688), 3);
    add_background_object(create_thwood5_3144(400, 1688), 3);
    add_background_object(create_thwood4_3145(416, 1688), 3);
    add_background_object(create_thwood5_3144(432, 1688), 3);
    add_background_object(create_thwood2_3134(128, 1104), 3);
    add_background_object(create_thwood5_3144(256, 1104), 3);
    add_background_object(create_thwood5_3144(256, 1136), 3);
    add_background_object(create_thhandlebar_3148(304, 928), 3);
    add_background_object(create_thstone10_3146(312, 896), 3);
    add_background_object(create_thwood2_3134(512, 816), 3);
    add_background_object(create_thwood4_3145(496, 848), 3);
    add_background_object(create_thwood4_3145(496, 816), 3);
    add_background_object(create_thwood2_3134(0, 816), 3);
    add_background_object(create_thwood2_3134(0, 768), 3);
    add_background_object(create_thwood5_3144(128, 800), 3);
    add_background_object(create_thwood5_3144(128, 832), 3);
    add_background_object(create_thwood2_3134(0, 720), 3);
    add_background_object(create_thwood5_3144(192, 720), 3);
    add_background_object(create_thwood2_3134(0, 672), 3);
    add_background_object(create_thwood5_3144(128, 672), 3);
    add_background_object(create_thwood5_3144(128, 704), 3);
    add_background_object(create_thwood2_3134(512, 768), 3);
    add_background_object(create_thwood2_3134(512, 720), 3);
    add_background_object(create_thwood4_3145(496, 784), 3);
    add_background_object(create_thwood4_3145(496, 752), 3);
    add_background_object(create_thwood4_3145(496, 720), 3);
    add_background_object(create_thwood2_3134(512, 672), 3);
    add_background_object(create_thwood4_3145(496, 688), 3);
    add_background_object(create_thwood2_3134(512, 624), 3);
    add_background_object(create_thwood4_3145(496, 656), 3);
    add_background_object(create_thwood4_3145(496, 624), 3);
    add_background_object(create_thwood2_3134(0, 624), 3);
    add_background_object(create_thwood2_3134(0, 576), 3);
    add_background_object(create_thwood5_3144(128, 608), 3);
    add_background_object(create_thwood5_3144(128, 640), 3);
    add_background_object(create_thwood5_3144(128, 576), 3);
    add_background_object(create_thwood2_3134(0, 528), 3);
    add_background_object(create_thwood5_3144(128, 544), 3);
    add_background_object(create_thwood2_3134(0, 480), 3);
    add_background_object(create_thwood5_3144(128, 480), 3);
    add_background_object(create_thwood5_3144(128, 512), 3);
    add_background_object(create_thwood2_3134(512, 576), 3);
    add_background_object(create_thwood2_3134(512, 528), 3);
    add_background_object(create_thwood4_3145(496, 592), 3);
    add_background_object(create_thwood4_3145(496, 560), 3);
    add_background_object(create_thwood4_3145(496, 544), 3);
    add_background_object(create_thwood2_3134(480, 480), 3);
    add_background_object(create_thwood4_3145(464, 496), 3);
    add_background_object(create_thwood2_3134(480, 432), 3);
    add_background_object(create_thwood4_3145(464, 464), 3);
    add_background_object(create_thwood4_3145(464, 432), 3);
    add_background_object(create_thwood2_3134(0, 432), 3);
    add_background_object(create_thwood2_3134(0, 384), 3);
    add_background_object(create_thwood5_3144(128, 416), 3);
    add_background_object(create_thwood5_3144(128, 448), 3);
    add_background_object(create_thwood2_3134(0, 336), 3);
    add_background_object(create_thwood2_3134(0, 288), 3);
    add_background_object(create_thwood2_3134(480, 384), 3);
    add_background_object(create_thwood2_3134(480, 336), 3);
    add_background_object(create_thwood4_3145(464, 400), 3);
    add_background_object(create_thwood4_3145(464, 368), 3);
    add_background_object(create_thwood4_3145(464, 336), 3);
    add_background_object(create_thwood2_3134(512, 288), 3);
    add_background_object(create_thwood4_3145(496, 304), 3);
    add_background_object(create_thwood2_3134(512, 240), 3);
    add_background_object(create_thwood4_3145(496, 272), 3);
    add_background_object(create_thstone3_3090(344, 832), 3);
    add_background_object(create_thstone4_3086(312, 832), 3);
    add_background_object(create_thstone3_3090(344, 768), 3);
    add_background_object(create_thstone4_3086(312, 768), 3);
    add_background_object(create_thstone3_3090(344, 704), 3);
    add_background_object(create_thstone4_3086(312, 704), 3);
    add_background_object(create_thstone3_3090(344, 640), 3);
    add_background_object(create_thstone4_3086(312, 640), 3);
    add_background_object(create_thstone3_3090(344, 576), 3);
    add_background_object(create_thstone4_3086(312, 576), 3);
    add_background_object(create_thstone10_3146(312, 544), 3);
    add_background_object(create_thwood2_3134(432, 864), 3);
    add_background_object(create_thwood4_3145(416, 864), 3);
    add_background_object(create_thwood4_3145(416, 896), 3);
    add_background_object(create_thwood2_3134(64, 720), 3);
    add_background_object(create_thwood5_3144(192, 752), 3);
    add_background_object(create_thwood2_3134(224, 336), 3);
    add_background_object(create_thwood5_3144(352, 368), 3);
    add_background_object(create_thwood2_3134(416, 2016), 3);
    add_background_object(create_thwood4_3145(400, 2016), 3);
    add_background_object(create_thwood4_3145(400, 2048), 3);
    add_background_object(create_thwood4_3145(464, 1408), 3);
    add_background_object(create_thwood5_3144(480, 1408), 3);
    add_background_object(create_thwood2_3134(512, 16), 3);
    add_background_object(create_thwood4_3145(496, 208), 3);
    add_background_object(create_thwood4_3145(496, 48), 3);
    add_background_object(create_thwood5_3144(128, 48), 3);
    add_background_object(create_thwood5_3144(128, 16), 3);
    add_background_object(create_thwood3_3137(32, -16), 3);
    add_background_object(create_thwood3_3137(416, -16), 3);
    add_background_object(create_thwood3_3137(288, -16), 3);
    add_background_object(create_thwood4_3145(496, 192), 3);
    add_background_object(create_thwood2_3134(512, 192), 3);
    add_background_object(create_thwood5_3144(128, 304), 3);
    add_background_object(create_thwood3_3137(128, 368), 3);
    add_background_object(create_thwood2_3134(128, 336), 3);
    add_background_object(create_thwood4_3145(496, 16), 3);
    add_background_object(create_thwood3_3137(512, 64), 3);
    add_background_object(create_thwood3_3137(640, 64), 3);
    add_background_object(create_thwood3_3137(768, -16), 3);
    add_background_object(create_thwood3_3137(768, 64), 3);
    add_background_object(create_thwood4_3145(464, 512), 3);
    add_background_object(create_thwood2_3134(608, 336), 3);
    add_background_object(create_thwood2_3134(608, 480), 3);
    add_background_object(create_thwood2_3134(608, 432), 3);
    add_background_object(create_thwood2_3134(608, 384), 3);
    add_background_object(create_thwood4_3145(496, 64), 3);
    add_background_object(create_thwood2_3134(640, 16), 3);
    add_background_object(create_thwood2_3134(768, 16), 3);
    add_background_object(create_thwood5_3144(640, 192), 3);
    add_background_object(create_thwood5_3144(640, 224), 3);
    add_background_object(create_thwood5_3144(640, 256), 3);
    add_background_object(create_thwood5_3144(640, 288), 3);
    add_background_object(create_thwood5_3144(640, 304), 3);
    add_background_object(create_thwood5_3144(736, 336), 3);
    add_background_object(create_thwood5_3144(736, 368), 3);
    add_background_object(create_thwood5_3144(736, 400), 3);
    add_background_object(create_thwood5_3144(736, 432), 3);
    add_background_object(create_thwood5_3144(736, 464), 3);
    add_background_object(create_thwood5_3144(736, 496), 3);
    add_background_object(create_rydiagonalpipe2_3089(768, 320), 3);
    add_background_object(create_rydiagonalpipe2_3089(832, 384), 3);
    add_background_object(create_rydiagonalpipe2_3089(896, 448), 3);
    add_background_object(create_rydiagonalpipe2_3089(960, 512), 3);
    add_background_object(create_rydiagonalpipe2_3089(1024, 576), 3);
    add_background_object(create_rydiagonalpipe2_3089(1088, 640), 3);
    add_background_object(create_rydiagonalpipe2_3089(1152, 704), 3);
    add_background_object(create_rydiagonalpipe2_3089(1216, 768), 3);
    add_background_object(create_rydiagonalpipe2_3089(1280, 832), 3);
    add_background_object(create_rydiagonalpipe2_3089(1344, 896), 3);
    add_background_object(create_rydiagonalpipe2_3089(1408, 960), 3);
    add_background_object(create_rydiagonalpipe2_3089(1472, 1024), 3);
    add_background_object(create_thstone4_3086(1536, 1120), 3);
    add_background_object(create_thstone4_3086(1536, 1184), 3);
    add_background_object(create_thstone8_3098(1536, 1088), 3);
    add_background_object(create_thstone2_3092(1568, 1088), 3);
    add_background_object(create_thstone2_3092(1632, 1088), 3);
    add_background_object(create_thstone11_3085(1568, 1120), 3);
    add_background_object(create_thstone2_3092(1696, 1088), 3);
    add_background_object(create_thstone2_3092(1760, 1088), 3);
    add_background_object(create_thstone11_3085(1696, 1120), 3);
    add_background_object(create_thstone2_3092(1824, 1088), 3);
    add_background_object(create_thstone2_3092(1888, 1088), 3);
    add_background_object(create_thstone11_3085(1824, 1120), 3);
    add_background_object(create_thwood2_3134(640, 816), 3);
    add_background_object(create_thwood2_3134(640, 768), 3);
    add_background_object(create_thwood2_3134(640, 720), 3);
    add_background_object(create_thwood2_3134(640, 672), 3);
    add_background_object(create_thwood2_3134(640, 624), 3);
    add_background_object(create_thwood2_3134(640, 576), 3);
    add_background_object(create_thwood2_3134(640, 528), 3);
    add_background_object(create_thwood5_3144(768, 528), 3);
    add_background_object(create_thwood5_3144(768, 560), 3);
    add_background_object(create_thwood5_3144(768, 592), 3);
    add_background_object(create_thwood5_3144(768, 624), 3);
    add_background_object(create_thwood5_3144(768, 656), 3);
    add_background_object(create_thwood5_3144(768, 688), 3);
    add_background_object(create_thwood5_3144(768, 720), 3);
    add_background_object(create_thwood5_3144(768, 752), 3);
    add_background_object(create_thwood5_3144(768, 784), 3);
    add_background_object(create_thwood5_3144(768, 816), 3);
    add_background_object(create_thwood2_3134(688, 864), 3);
    add_background_object(create_thwood2_3134(640, 2352), 3);
    add_background_object(create_thwood2_3134(640, 2304), 3);
    add_background_object(create_thwood2_3134(640, 2256), 3);
    add_background_object(create_thwood2_3134(640, 2208), 3);
    add_background_object(create_thwood2_3134(640, 2160), 3);
    add_background_object(create_thwood2_3134(640, 2112), 3);
    add_background_object(create_thwood2_3134(640, 2064), 3);
    add_background_object(create_thwood2_3134(672, 2016), 3);
    add_background_object(create_thwood2_3134(640, 1968), 3);
    add_background_object(create_thwood2_3134(640, 1920), 3);
    add_background_object(create_thwood2_3134(640, 1872), 3);
    add_background_object(create_thwood2_3134(640, 1824), 3);
    add_background_object(create_thwood2_3134(640, 1776), 3);
    add_background_object(create_thwood2_3134(640, 1728), 3);
    add_background_object(create_thwood2_3134(640, 1680), 3);
    add_background_object(create_thwood2_3134(640, 1632), 3);
    add_background_object(create_thwood2_3134(640, 1584), 3);
    add_background_object(create_thwood2_3134(640, 1536), 3);
    add_background_object(create_thwood2_3134(640, 1488), 3);
    add_background_object(create_thwood2_3134(640, 1440), 3);
    add_background_object(create_thwood2_3134(640, 1392), 3);
    add_background_object(create_thwood2_3134(640, 1344), 3);
    add_background_object(create_thwood2_3134(640, 1296), 3);
    add_background_object(create_thwood2_3134(640, 1248), 3);
    add_background_object(create_thwood2_3134(640, 1200), 3);
    add_background_object(create_thwood2_3134(640, 1152), 3);
    add_background_object(create_thwood2_3134(640, 1104), 3);
    add_background_object(create_thwood2_3134(640, 1056), 3);
    add_background_object(create_thwood2_3134(640, 1008), 3);
    add_background_object(create_thwood2_3134(640, 960), 3);
    add_background_object(create_thwood2_3134(640, 912), 3);
    add_background_object(create_thwood2_3134(768, 2352), 3);
    add_background_object(create_thwood2_3134(768, 2304), 3);
    add_background_object(create_thwood2_3134(768, 2256), 3);
    add_background_object(create_thwood2_3134(768, 2208), 3);
    add_background_object(create_thwood2_3134(768, 2160), 3);
    add_background_object(create_thwood2_3134(768, 2112), 3);
    add_background_object(create_thwood2_3134(768, 2064), 3);
    add_background_object(create_thwood2_3134(768, 2016), 3);
    add_background_object(create_thwood2_3134(768, 1968), 3);
    add_background_object(create_thwood2_3134(768, 1920), 3);
    add_background_object(create_thwood2_3134(768, 1872), 3);
    add_background_object(create_thwood2_3134(768, 1824), 3);
    add_background_object(create_thwood2_3134(768, 1776), 3);
    add_background_object(create_thwood2_3134(768, 1728), 3);
    add_background_object(create_thwood2_3134(768, 1680), 3);
    add_background_object(create_thwood2_3134(768, 1632), 3);
    add_background_object(create_thwood2_3134(768, 1584), 3);
    add_background_object(create_thwood2_3134(768, 1536), 3);
    add_background_object(create_thwood2_3134(768, 1488), 3);
    add_background_object(create_thwood2_3134(768, 1440), 3);
    add_background_object(create_thwood2_3134(768, 1392), 3);
    add_background_object(create_thwood2_3134(768, 1344), 3);
    add_background_object(create_thwood2_3134(768, 1296), 3);
    add_background_object(create_thwood2_3134(768, 1248), 3);
    add_background_object(create_thwood2_3134(768, 1200), 3);
    add_background_object(create_thwood2_3134(768, 1152), 3);
    add_background_object(create_thwood2_3134(768, 1104), 3);
    add_background_object(create_thwood2_3134(768, 1056), 3);
    add_background_object(create_thwood2_3134(768, 1008), 3);
    add_background_object(create_thwood2_3134(768, 960), 3);
    add_background_object(create_thwood2_3134(768, 912), 3);
    add_background_object(create_thwood5_3144(768, 832), 3);
    add_background_object(create_thwood5_3144(816, 864), 3);
    add_background_object(create_thwood5_3144(816, 880), 3);
    add_background_object(create_thwood5_3144(896, 912), 3);
    add_background_object(create_thwood5_3144(896, 944), 3);
    add_background_object(create_thwood5_3144(896, 976), 3);
    add_background_object(create_thwood5_3144(896, 1008), 3);
    add_background_object(create_thwood5_3144(896, 1040), 3);
    add_background_object(create_thwood5_3144(896, 1072), 3);
    add_background_object(create_thwood5_3144(896, 1104), 3);
    add_background_object(create_thwood5_3144(896, 1136), 3);
    add_background_object(create_thwood5_3144(896, 1168), 3);
    add_background_object(create_thwood5_3144(896, 1200), 3);
    add_background_object(create_thwood5_3144(896, 1232), 3);
    add_background_object(create_thwood5_3144(896, 1264), 3);
    add_background_object(create_thwood5_3144(896, 1296), 3);
    add_background_object(create_thwood5_3144(896, 1328), 3);
    add_background_object(create_thwood5_3144(896, 1360), 3);
    add_background_object(create_thwood5_3144(896, 1392), 3);
    add_background_object(create_thwood5_3144(896, 1424), 3);
    add_background_object(create_thwood5_3144(896, 1456), 3);
    add_background_object(create_thwood5_3144(896, 1488), 3);
    add_background_object(create_thwood5_3144(896, 1520), 3);
    add_background_object(create_thwood5_3144(896, 1552), 3);
    add_background_object(create_thwood5_3144(896, 1584), 3);
    add_background_object(create_thwood5_3144(896, 1616), 3);
    add_background_object(create_thwood5_3144(896, 1648), 3);
    add_background_object(create_thwood5_3144(896, 1680), 3);
    add_background_object(create_thwood5_3144(896, 1712), 3);
    add_background_object(create_thwood5_3144(896, 1744), 3);
    add_background_object(create_thwood5_3144(896, 1776), 3);
    add_background_object(create_thwood5_3144(896, 1808), 3);
    add_background_object(create_thwood5_3144(896, 1840), 3);
    add_background_object(create_thwood5_3144(896, 1872), 3);
    add_background_object(create_thwood5_3144(896, 1904), 3);
    add_background_object(create_thwood5_3144(896, 1936), 3);
    add_background_object(create_thwood5_3144(896, 1968), 3);
    add_background_object(create_thwood5_3144(896, 2000), 3);
    add_background_object(create_thwood5_3144(896, 2032), 3);
    add_background_object(create_thwood5_3144(896, 2064), 3);
    add_background_object(create_thwood5_3144(896, 2096), 3);
    add_background_object(create_thwood5_3144(896, 2128), 3);
    add_background_object(create_thwood5_3144(896, 2160), 3);
    add_background_object(create_thwood5_3144(896, 2192), 3);
    add_background_object(create_thwood5_3144(896, 2224), 3);
    add_background_object(create_thwood5_3144(896, 2256), 3);
    add_background_object(create_thwood5_3144(896, 2288), 3);
    add_background_object(create_thwood5_3144(896, 2320), 3);
    add_background_object(create_thwood5_3144(896, 2352), 3);
    add_background_object(create_thwood5_3144(896, 2384), 3);
    add_background_object(create_thstone7_3097(1952, 1088), 3);
    add_background_object(create_thstone3_3090(1952, 1120), 3);
    add_background_object(create_thstone3_3090(1952, 1184), 3);
    add_background_object(create_thstone4_3086(1536, 1248), 3);
    add_background_object(create_thstone4_3086(1536, 1312), 3);
    add_background_object(create_thstone11_3085(1568, 1248), 3);
    add_background_object(create_thstone11_3085(1696, 1248), 3);
    add_background_object(create_thstone11_3085(1824, 1248), 3);
    add_background_object(create_thstone3_3090(1952, 1248), 3);
    add_background_object(create_thstone3_3090(1952, 1312), 3);
    add_background_object(create_thstone4_3086(1984, 1136), 3);
    add_background_object(create_thstone4_3086(1984, 1200), 3);
    add_background_object(create_thstone8_3098(1984, 1104), 3);
    add_background_object(create_thstone2_3092(2016, 1104), 3);
    add_background_object(create_thstone2_3092(2080, 1104), 3);
    add_background_object(create_thstone11_3085(2016, 1136), 3);
    add_background_object(create_thstone4_3086(1984, 1264), 3);
    add_background_object(create_thstone4_3086(1984, 1328), 3);
    add_background_object(create_thstone11_3085(2016, 1264), 3);
    add_background_object(create_thstone7_3097(2144, 1104), 3);
    add_background_object(create_thstone3_3090(2144, 1136), 3);
    add_background_object(create_thstone3_3090(2144, 1200), 3);
    add_background_object(create_thstone3_3090(2144, 1264), 3);
    add_background_object(create_thstone3_3090(2144, 1328), 3);
    add_background_object(create_thstone4_3086(2176, 1040), 3);
    add_background_object(create_thstone4_3086(2176, 1104), 3);
    add_background_object(create_thstone8_3098(2176, 1008), 3);
    add_background_object(create_thstone2_3092(2208, 1008), 3);
    add_background_object(create_thstone2_3092(2272, 1008), 3);
    add_background_object(create_thstone11_3085(2208, 1040), 3);
    add_background_object(create_thstone2_3092(2336, 1008), 3);
    add_background_object(create_thstone2_3092(2400, 1008), 3);
    add_background_object(create_thstone11_3085(2336, 1040), 3);
    add_background_object(create_thstone2_3092(2464, 1008), 3);
    add_background_object(create_thstone2_3092(2528, 1008), 3);
    add_background_object(create_thstone11_3085(2464, 1040), 3);
    add_background_object(create_thstone7_3097(2592, 1008), 3);
    add_background_object(create_thstone3_3090(2592, 1040), 3);
    add_background_object(create_thstone3_3090(2592, 1104), 3);
    add_background_object(create_thstone4_3086(2176, 1168), 3);
    add_background_object(create_thstone4_3086(2176, 1232), 3);
    add_background_object(create_thstone11_3085(2208, 1168), 3);
    add_background_object(create_thstone11_3085(2336, 1168), 3);
    add_background_object(create_thstone11_3085(2464, 1168), 3);
    add_background_object(create_thstone3_3090(2592, 1168), 3);
    add_background_object(create_thstone3_3090(2592, 1232), 3);
    add_background_object(create_thstone4_3086(2176, 1296), 3);
    add_background_object(create_thstone4_3086(2176, 1360), 3);
    add_background_object(create_thstone11_3085(2208, 1296), 3);
    add_background_object(create_thstone11_3085(2336, 1296), 3);
    add_background_object(create_thstone11_3085(2464, 1296), 3);
    add_background_object(create_thstone3_3090(2592, 1296), 3);
    add_background_object(create_thstone3_3090(2592, 1360), 3);
    add_background_object(create_thstone4_3086(2624, 1040), 3);
    add_background_object(create_thstone4_3086(2624, 1104), 3);
    add_background_object(create_thstone8_3098(2624, 1008), 3);
    add_background_object(create_thstone2_3092(2656, 1008), 3);
    add_background_object(create_thstone2_3092(2720, 1008), 3);
    add_background_object(create_thstone11_3085(2656, 1040), 3);
    add_background_object(create_thstone2_3092(2784, 1008), 3);
    add_background_object(create_thstone2_3092(2848, 1008), 3);
    add_background_object(create_thstone11_3085(2784, 1040), 3);
    add_background_object(create_thstone2_3092(2912, 1008), 3);
    add_background_object(create_thstone2_3092(2976, 1008), 3);
    add_background_object(create_thstone11_3085(2912, 1040), 3);
    add_background_object(create_thstone7_3097(3040, 1008), 3);
    add_background_object(create_thstone3_3090(3040, 1040), 3);
    add_background_object(create_thstone3_3090(3040, 1104), 3);
    add_background_object(create_thstone4_3086(2624, 1168), 3);
    add_background_object(create_thstone4_3086(2624, 1232), 3);
    add_background_object(create_thstone11_3085(2656, 1168), 3);
    add_background_object(create_thstone11_3085(2784, 1168), 3);
    add_background_object(create_thstone11_3085(2912, 1168), 3);
    add_background_object(create_thstone3_3090(3040, 1168), 3);
    add_background_object(create_thstone3_3090(3040, 1232), 3);
    add_background_object(create_thstone4_3086(3072, 656), 3);
    add_background_object(create_thstone4_3086(3072, 720), 3);
    add_background_object(create_thstone8_3098(3072, 624), 3);
    add_background_object(create_thstone2_3092(3104, 624), 3);
    add_background_object(create_thstone2_3092(3168, 624), 3);
    add_background_object(create_thstone11_3085(3104, 656), 3);
    add_background_object(create_thstone2_3092(3232, 624), 3);
    add_background_object(create_thstone2_3092(3296, 624), 3);
    add_background_object(create_thstone11_3085(3232, 656), 3);
    add_background_object(create_thstone7_3097(3360, 624), 3);
    add_background_object(create_thstone3_3090(3360, 656), 3);
    add_background_object(create_thstone3_3090(3360, 720), 3);
    add_background_object(create_thstone4_3086(3072, 1040), 3);
    add_background_object(create_thstone4_3086(3072, 1104), 3);
    add_background_object(create_thstone11_3085(3104, 1040), 3);
    add_background_object(create_thstone11_3085(3232, 1040), 3);
    add_background_object(create_thstone3_3090(3360, 1040), 3);
    add_background_object(create_thstone3_3090(3360, 1104), 3);
    add_background_object(create_thstone4_3086(3072, 1168), 3);
    add_background_object(create_thstone4_3086(3072, 1232), 3);
    add_background_object(create_thstone11_3085(3104, 1168), 3);
    add_background_object(create_thstone11_3085(3232, 1168), 3);
    add_background_object(create_thstone3_3090(3360, 1168), 3);
    add_background_object(create_thstone3_3090(3360, 1232), 3);
    add_background_object(create_thstone4_3086(3072, 912), 3);
    add_background_object(create_thstone4_3086(3072, 976), 3);
    add_background_object(create_thstone11_3085(3104, 912), 3);
    add_background_object(create_thstone11_3085(3232, 912), 3);
    add_background_object(create_thstone3_3090(3360, 912), 3);
    add_background_object(create_thstone3_3090(3360, 976), 3);
    add_background_object(create_thstone4_3086(3072, 784), 3);
    add_background_object(create_thstone4_3086(3072, 848), 3);
    add_background_object(create_thstone11_3085(3104, 784), 3);
    add_background_object(create_thstone11_3085(3232, 784), 3);
    add_background_object(create_thstone3_3090(3360, 784), 3);
    add_background_object(create_thstone3_3090(3360, 848), 3);
    add_background_object(create_thwood2_3134(3072, 576), 3);
    add_background_object(create_thwood3_3137(2944, 608), 3);
    add_background_object(create_thwood2_3134(2944, 576), 3);
    add_background_object(create_thwood3_3137(2816, 608), 3);
    add_background_object(create_thwood2_3134(2816, 576), 3);
    add_background_object(create_thwood3_3137(2688, 608), 3);
    add_background_object(create_thwood2_3134(2688, 576), 3);
    add_background_object(create_thwood4_3145(2672, 576), 3);
    add_background_object(create_thwood4_3145(2672, 608), 3);
    add_background_object(create_thwood2_3134(3200, 576), 3);
    add_background_object(create_thhandlebar_3148(2136, 728), 3);
    add_background_object(create_thhandlebar_3148(2224, 728), 3);
    add_background_object(create_thhandlebar_3148(2312, 728), 3);
    add_background_object(create_thwood3_3137(2120, 696), 3);
    add_background_object(create_thwood2_3134(2120, 664), 3);
    add_background_object(create_thwood4_3145(2104, 664), 3);
    add_background_object(create_thwood4_3145(2104, 696), 3);
    add_background_object(create_thwood3_3137(2248, 696), 3);
    add_background_object(create_thwood2_3134(2248, 664), 3);
    add_background_object(create_thwood5_3144(2376, 696), 3);
    add_background_object(create_thwood5_3144(2376, 664), 3);
    add_background_object(create_thtire1_3136(2112, 1072), 3);
    add_background_object(create_thtire1_3136(2112, 1056), 3);
    add_background_object(create_thtire1_3136(2280, 632), 3);
    add_background_object(create_thtire1_3136(2216, 632), 3);
    add_background_object(create_thtire1_3136(2216, 600), 3);
    add_background_object(create_thtire1_3136(2152, 632), 3);
    add_background_object(create_thtire1_3136(2816, 544), 3);
    add_background_object(create_thtire1_3136(2880, 544), 3);
    add_background_object(create_thtire1_3136(2880, 512), 3);
    add_background_object(create_thtire1_3136(2944, 544), 3);
    add_background_object(create_thtire1_3136(2944, 512), 3);
    add_background_object(create_thtire1_3136(2944, 480), 3);
    add_background_object(create_thtire1_3136(3008, 544), 3);
    add_background_object(create_thtire1_3136(3008, 512), 3);
    add_background_object(create_thtire1_3136(3008, 480), 3);
    add_background_object(create_thtire1_3136(3008, 448), 3);
    add_background_object(create_thwood2_3134(3328, 576), 3);
    add_background_object(create_thwood2_3134(3712, 576), 3);
    add_background_object(create_thstone4_3086(2672, -64), 3);
    add_background_object(create_thstone4_3086(2672, 0), 3);
    add_background_object(create_thstone11_3085(2704, -64), 3);
    add_background_object(create_thstone4_3086(2672, 64), 3);
    add_background_object(create_thstone4_3086(2672, 128), 3);
    add_background_object(create_thstone11_3085(2704, 64), 3);
    add_background_object(create_thstone4_3086(2672, 192), 3);
    add_background_object(create_thstone4_3086(2672, 256), 3);
    add_background_object(create_thstone11_3085(2704, 192), 3);
    add_background_object(create_thstone6_3095(2672, 320), 3);
    add_background_object(create_thstone1_3091(2704, 320), 3);
    add_background_object(create_thstone1_3091(2768, 320), 3);
    add_background_object(create_thstone11_3085(2832, -64), 3);
    add_background_object(create_thstone11_3085(2832, 64), 3);
    add_background_object(create_thstone11_3085(2832, 192), 3);
    add_background_object(create_thstone1_3091(2832, 320), 3);
    add_background_object(create_thstone1_3091(2896, 320), 3);
    add_background_object(create_thstone11_3085(2960, -64), 3);
    add_background_object(create_thstone11_3085(3088, -64), 3);
    add_background_object(create_thstone11_3085(3216, -64), 3);
    add_background_object(create_thstone11_3085(3344, 192), 3);
    add_background_object(create_thstone1_3091(3344, 320), 3);
    add_background_object(create_thstone1_3091(3408, 320), 3);
    add_background_object(create_thstone11_3085(3344, -64), 3);
    add_background_object(create_thstone11_3085(3472, -64), 3);
    add_background_object(create_thwood5_3144(3840, 576), 3);
    add_background_object(create_thwood5_3144(3840, 608), 3);
    add_background_object(create_thwood3_3137(3584, 608), 3);
    add_background_object(create_thwood2_3134(3584, 576), 3);
    add_background_object(create_thwood3_3137(3456, 608), 3);
    add_background_object(create_thwood2_3134(3456, 576), 3);
    add_background_object(create_thstone11_3085(3600, -64), 3);
    add_background_object(create_thstone11_3085(3728, -64), 3);
    add_background_object(create_thstone11_3085(3856, -64), 3);
    add_background_object(create_thwood3_3137(3760, 800), 3);
    add_background_object(create_thwood2_3134(3760, 768), 3);
    add_background_object(create_thwood3_3137(3632, 800), 3);
    add_background_object(create_thwood2_3134(3632, 768), 3);
    add_background_object(create_thstone3_3090(3984, 0), 3);
    add_background_object(create_thstone3_3090(3984, -64), 3);
    add_background_object(create_thstone11_3085(4048, 0), 3);
    add_background_object(create_thstone4_3086(4016, 0), 3);
    add_background_object(create_thstone4_3086(4016, 64), 3);
    add_background_object(create_thstone11_3085(4048, 320), 3);
    add_background_object(create_thstone4_3086(4016, 352), 3);
    add_background_object(create_thstone11_3085(4048, 704), 3);
    add_background_object(create_thstone4_3086(4016, 736), 3);
    add_background_object(create_thwood3_3137(3888, 800), 3);
    add_background_object(create_thwood2_3134(3888, 768), 3);
    add_background_object(create_thwood3_3137(3504, 800), 3);
    add_background_object(create_thwood2_3134(3504, 768), 3);
    add_background_object(create_thwood4_3145(3488, 768), 3);
    add_background_object(create_thwood4_3145(3488, 800), 3);
    add_background_object(create_thwood3_3137(3776, 992), 3);
    add_background_object(create_thwood2_3134(3776, 960), 3);
    add_background_object(create_thwood5_3144(3904, 960), 3);
    add_background_object(create_thwood5_3144(3904, 992), 3);
    add_background_object(create_thwood3_3137(3648, 992), 3);
    add_background_object(create_thwood2_3134(3648, 960), 3);
    add_background_object(create_thwood3_3137(3392, 992), 3);
    add_background_object(create_thwood2_3134(3392, 960), 3);
    add_background_object(create_thwood3_3137(3520, 992), 3);
    add_background_object(create_thwood2_3134(3520, 960), 3);
    add_background_object(create_thstone11_3085(4176, 320), 3);
    add_background_object(create_thstone11_3085(4176, 704), 3);
    add_background_object(create_thstone11_3085(4048, 832), 3);
    add_background_object(create_thstone4_3086(4016, 800), 3);
    add_background_object(create_thstone4_3086(4016, 864), 3);
    add_background_object(create_thstone11_3085(4176, 832), 3);
    add_background_object(create_thstone11_3085(4048, 1088), 3);
    add_background_object(create_thstone4_3086(4016, 1088), 3);
    add_background_object(create_thstone4_3086(4016, 1152), 3);
    add_background_object(create_thstone11_3085(4176, 1088), 3);
    add_background_object(create_thwood3_3137(3760, 1120), 3);
    add_background_object(create_thwood2_3134(3760, 1088), 3);
    add_background_object(create_thwood3_3137(3632, 1120), 3);
    add_background_object(create_thwood2_3134(3632, 1088), 3);
    add_background_object(create_thwood3_3137(3888, 1120), 3);
    add_background_object(create_thwood2_3134(3888, 1088), 3);
    add_background_object(create_thwood3_3137(3504, 1120), 3);
    add_background_object(create_thwood2_3134(3504, 1088), 3);
    add_background_object(create_thwood4_3145(3488, 1088), 3);
    add_background_object(create_thwood4_3145(3488, 1120), 3);
    add_background_object(create_thstone6_3095(4016, 1216), 3);
    add_background_object(create_thstone1_3091(4048, 1216), 3);
    add_background_object(create_thstone1_3091(4112, 1216), 3);
    add_background_object(create_thstone1_3091(4176, 1216), 3);
    add_background_object(create_thstone1_3091(4240, 1216), 3);
    add_background_object(create_thstone4_3086(2624, 1296), 3);
    add_background_object(create_thstone4_3086(2624, 1360), 3);
    add_background_object(create_thstone11_3085(2656, 1296), 3);
    add_background_object(create_thstone11_3085(2784, 1296), 3);
    add_background_object(create_thstone11_3085(2912, 1296), 3);
    add_background_object(create_thstone3_3090(3040, 1296), 3);
    add_background_object(create_thstone3_3090(3040, 1360), 3);
    add_background_object(create_thstone4_3086(3072, 1296), 3);
    add_background_object(create_thstone4_3086(3072, 1360), 3);
    add_background_object(create_thstone11_3085(3104, 1296), 3);
    add_background_object(create_thstone11_3085(3232, 1296), 3);
    add_background_object(create_thstone3_3090(3360, 1296), 3);
    add_background_object(create_thstone3_3090(3360, 1360), 3);
    add_background_object(create_thstone6_3095(3312, 320), 3);
    add_background_object(create_thstone4_3086(3312, 256), 3);
    add_background_object(create_thstone4_3086(3312, 192), 3);
    add_background_object(create_thstone8_3098(3312, 192), 3);
    add_background_object(create_thstone2_3092(3344, 192), 3);
    add_background_object(create_thwood6_3143(3232, 192), 3);
    add_background_object(create_thwood5_3144(3296, 192), 3);
    add_background_object(create_thwood4_3145(3216, 192), 3);
    add_background_object(create_thstone5_3096(2960, 320), 3);
    add_background_object(create_thstone3_3090(2960, 256), 3);
    add_background_object(create_thstone3_3090(2960, 192), 3);
    add_background_object(create_thstone3_3090(2960, 128), 3);
    add_background_object(create_thstone3_3090(2960, 64), 3);
    add_background_object(create_thstone3_3090(2960, 0), 3);
    add_background_object(create_thstone3_3090(2960, -64), 3);
    add_background_object(create_thstone4_3086(2992, -64), 3);
    add_background_object(create_thstone4_3086(2992, 0), 3);
    add_background_object(create_thstone6_3095(2992, 32), 3);
    add_background_object(create_thstone1_3091(3024, 32), 3);
    add_background_object(create_thstone1_3091(3088, 32), 3);
    add_background_object(create_thstone1_3091(3152, 32), 3);
    add_background_object(create_thstone1_3091(3216, 32), 3);
    add_background_object(create_thstone1_3091(3280, 32), 3);
    add_background_object(create_thstone1_3091(3344, 32), 3);
    add_background_object(create_thstone1_3091(3408, 32), 3);
    add_background_object(create_thstone2_3092(3408, 192), 3);
    add_background_object(create_thwood6_3143(3008, 192), 3);
    add_background_object(create_thwood5_3144(3072, 192), 3);
    add_background_object(create_thwood4_3145(2992, 192), 3);
    add_background_object(create_rydiagonalpipe2_3089(3392, 1160), 3);
    add_background_object(create_rydiagonalpipe2_3089(3456, 1224), 3);
    add_background_object(create_rydiagonalpipe2_3089(3520, 1288), 3);
    add_background_object(create_rydiagonalpipe2_3089(3584, 1352), 3);
    add_background_object(create_rydiagonalpipe2_3089(3648, 1416), 3);
    add_background_object(create_rydiagonalpipe2_3089(3712, 1480), 3);
    add_background_object(create_rydiagonalpipe2_3089(3776, 1544), 3);
    add_background_object(create_thstone8_3098(3840, 1608), 3);
    add_background_object(create_thstone2_3092(3872, 1608), 3);
    add_background_object(create_thstone2_3092(3936, 1608), 3);
    add_background_object(create_thstone4_3086(3840, 1640), 3);
    add_background_object(create_thstone11_3085(3872, 1640), 3);
    add_background_object(create_thstone4_3086(3840, 1704), 3);
    add_background_object(create_thstone2_3092(4000, 1608), 3);
    add_background_object(create_thstone2_3092(4064, 1608), 3);
    add_background_object(create_thstone11_3085(4000, 1640), 3);
    add_background_object(create_thstone2_3092(4128, 1608), 3);
    add_background_object(create_thstone2_3092(4192, 1608), 3);
    add_background_object(create_thstone11_3085(4128, 1640), 3);
    add_background_object(create_thstone4_3086(3072, 1424), 3);
    add_background_object(create_thstone4_3086(3072, 1488), 3);
    add_background_object(create_thstone11_3085(3104, 1424), 3);
    add_background_object(create_thstone11_3085(3232, 1424), 3);
    add_background_object(create_thstone3_3090(3360, 1424), 3);
    add_background_object(create_thstone3_3090(3360, 1488), 3);
    add_background_object(create_thstone4_3086(3072, 1552), 3);
    add_background_object(create_thstone4_3086(3072, 1616), 3);
    add_background_object(create_thstone11_3085(3104, 1552), 3);
    add_background_object(create_thstone11_3085(3232, 1552), 3);
    add_background_object(create_thstone3_3090(3360, 1552), 3);
    add_background_object(create_thstone3_3090(3360, 1616), 3);
    add_background_object(create_thstone5_3096(3440, 320), 3);
    add_background_object(create_thstone7_3097(3440, 192), 3);
    add_background_object(create_thstone3_3090(3440, 224), 3);
    add_background_object(create_thstone3_3090(3440, 256), 3);
    add_background_object(create_thwood3_3137(3488, 320), 3);
    add_background_object(create_thwood2_3134(3488, 288), 3);
    add_background_object(create_thwood3_3137(3616, 320), 3);
    add_background_object(create_thwood2_3134(3616, 288), 3);
    add_background_object(create_thwood3_3137(3744, 320), 3);
    add_background_object(create_thwood2_3134(3744, 288), 3);
    add_background_object(create_thwood3_3137(3872, 320), 3);
    add_background_object(create_thwood2_3134(3872, 288), 3);
    add_background_object(create_thstone5_3096(3984, 32), 3);
    add_background_object(create_thstone1_3091(3472, 32), 3);
    add_background_object(create_thstone1_3091(3536, 32), 3);
    add_background_object(create_thstone1_3091(3600, 32), 3);
    add_background_object(create_thstone1_3091(3664, 32), 3);
    add_background_object(create_thstone1_3091(3728, 32), 3);
    add_background_object(create_thstone1_3091(3792, 32), 3);
    add_background_object(create_thstone1_3091(3856, 32), 3);
    add_background_object(create_thstone1_3091(3920, 32), 3);
    add_background_object(create_thwood4_3145(3472, 288), 3);
    add_background_object(create_thwood4_3145(3472, 320), 3);
    add_background_object(create_thwood5_3144(4000, 288), 3);
    add_background_object(create_thwood5_3144(4000, 320), 3);
    add_background_object(create_thstone11_3085(4176, 960), 3);
    add_background_object(create_thstone4_3086(3840, 1768), 3);
    add_background_object(create_thstone11_3085(3872, 1768), 3);
    add_background_object(create_thstone4_3086(3840, 1832), 3);
    add_background_object(create_thstone11_3085(4000, 1768), 3);
    add_background_object(create_thstone11_3085(4128, 1768), 3);
    add_background_object(create_thstone7_3097(4256, 1608), 3);
    add_background_object(create_thstone3_3090(4256, 1640), 3);
    add_background_object(create_thstone3_3090(4256, 1704), 3);
    add_background_object(create_thstone3_3090(4256, 1768), 3);
    add_background_object(create_thstone3_3090(4256, 1832), 3);
    add_background_object(create_thstone8_3098(4416, 1608), 3);
    add_background_object(create_thstone2_3092(4448, 1608), 3);
    add_background_object(create_thstone2_3092(4512, 1608), 3);
    add_background_object(create_thstone4_3086(4416, 1640), 3);
    add_background_object(create_thstone11_3085(4448, 1640), 3);
    add_background_object(create_thstone4_3086(4416, 1704), 3);
    add_background_object(create_thstone4_3086(4416, 1768), 3);
    add_background_object(create_thstone11_3085(4448, 1768), 3);
    add_background_object(create_thstone4_3086(4416, 1832), 3);
    add_background_object(create_thstone7_3097(4576, 1608), 3);
    add_background_object(create_thstone3_3090(4576, 1640), 3);
    add_background_object(create_thstone3_3090(4576, 1704), 3);
    add_background_object(create_thstone3_3090(4576, 1768), 3);
    add_background_object(create_thstone3_3090(4576, 1832), 3);
    add_background_object(create_thstone8_3098(4736, 1608), 3);
    add_background_object(create_thstone2_3092(5024, 1608), 3);
    add_background_object(create_thstone2_3092(5088, 1608), 3);
    add_background_object(create_thstone4_3086(4736, 1640), 3);
    add_background_object(create_thstone11_3085(5024, 1640), 3);
    add_background_object(create_thstone4_3086(4736, 1704), 3);
    add_background_object(create_thstone4_3086(4736, 1768), 3);
    add_background_object(create_thstone11_3085(5024, 1768), 3);
    add_background_object(create_thstone4_3086(4736, 1832), 3);
    add_background_object(create_thstone7_3097(5152, 1608), 3);
    add_background_object(create_thstone3_3090(5152, 1640), 3);
    add_background_object(create_thstone3_3090(5152, 1704), 3);
    add_background_object(create_thstone3_3090(5152, 1768), 3);
    add_background_object(create_thstone3_3090(5152, 1832), 3);
    add_background_object(create_thstone2_3092(4896, 1608), 3);
    add_background_object(create_thstone2_3092(4960, 1608), 3);
    add_background_object(create_thstone11_3085(4896, 1640), 3);
    add_background_object(create_thstone11_3085(4896, 1768), 3);
    add_background_object(create_thstone2_3092(4768, 1608), 3);
    add_background_object(create_thstone2_3092(4832, 1608), 3);
    add_background_object(create_thstone11_3085(4768, 1640), 3);
    add_background_object(create_thstone11_3085(4768, 1768), 3);
    add_background_object(create_thstone8_3098(5312, 1608), 3);
    add_background_object(create_thstone2_3092(5600, 1608), 3);
    add_background_object(create_thstone2_3092(5664, 1608), 3);
    add_background_object(create_thstone4_3086(5312, 1640), 3);
    add_background_object(create_thstone11_3085(5600, 1640), 3);
    add_background_object(create_thstone4_3086(5312, 1704), 3);
    add_background_object(create_thstone4_3086(5312, 1768), 3);
    add_background_object(create_thstone11_3085(5600, 1768), 3);
    add_background_object(create_thstone4_3086(5312, 1832), 3);
    add_background_object(create_thstone7_3097(5728, 1608), 3);
    add_background_object(create_thstone3_3090(5728, 1640), 3);
    add_background_object(create_thstone3_3090(5728, 1704), 3);
    add_background_object(create_thstone3_3090(5728, 1768), 3);
    add_background_object(create_thstone3_3090(5728, 1832), 3);
    add_background_object(create_thstone2_3092(5472, 1608), 3);
    add_background_object(create_thstone2_3092(5536, 1608), 3);
    add_background_object(create_thstone11_3085(5472, 1640), 3);
    add_background_object(create_thstone11_3085(5472, 1768), 3);
    add_background_object(create_thstone2_3092(5344, 1608), 3);
    add_background_object(create_thstone2_3092(5408, 1608), 3);
    add_background_object(create_thstone11_3085(5344, 1640), 3);
    add_background_object(create_thstone11_3085(5344, 1768), 3);
    add_background_object(create_thrope1_3147(4288, 1608), 3);
    add_background_object(create_thrope1_3147(4608, 1608), 3);
    add_background_object(create_thrope1_3147(5184, 1608), 3);
    add_background_object(create_thstone4_3086(4144, 992), 3);
    add_background_object(create_thstone8_3098(4016, 1088), 3);
    add_background_object(create_thstone2_3092(4048, 1088), 3);
    add_background_object(create_thstone2_3092(4112, 1088), 3);
    add_background_object(create_thstone2_3092(4176, 1088), 3);
    add_background_object(create_thstone2_3092(4240, 1088), 3);
    add_background_object(create_thstone6_3095(4144, 1056), 3);
    add_background_object(create_thstone8_3098(4144, 960), 3);
    add_background_object(create_thstone6_3095(4016, 928), 3);
    add_background_object(create_thstone1_3091(4048, 928), 3);
    add_background_object(create_thstone1_3091(4112, 928), 3);
    add_background_object(create_thstone1_3091(4176, 928), 3);
    add_background_object(create_thstone1_3091(4176, 1056), 3);
    add_background_object(create_thstone2_3092(4176, 960), 3);
    add_background_object(create_thstone1_3091(4240, 928), 3);
    add_background_object(create_thstone1_3091(4240, 1056), 3);
    add_background_object(create_thstone2_3092(4240, 960), 3);
    add_background_object(create_thstone11_3085(4304, 704), 3);
    add_background_object(create_thstone11_3085(4304, 832), 3);
    add_background_object(create_thstone11_3085(4304, 1088), 3);
    add_background_object(create_thstone1_3091(4304, 1216), 3);
    add_background_object(create_thstone1_3091(4368, 1216), 3);
    add_background_object(create_thstone11_3085(4304, 960), 3);
    add_background_object(create_thstone2_3092(4304, 1088), 3);
    add_background_object(create_thstone2_3092(4368, 1088), 3);
    add_background_object(create_thstone1_3091(4304, 928), 3);
    add_background_object(create_thstone1_3091(4304, 1056), 3);
    add_background_object(create_thstone2_3092(4304, 960), 3);
    add_background_object(create_thstone1_3091(4368, 928), 3);
    add_background_object(create_thstone1_3091(4368, 1056), 3);
    add_background_object(create_thstone2_3092(4368, 960), 3);
    add_background_object(create_thstone11_3085(4432, 704), 3);
    add_background_object(create_thstone11_3085(4432, 832), 3);
    add_background_object(create_thstone11_3085(4432, 1088), 3);
    add_background_object(create_thstone1_3091(4432, 1216), 3);
    add_background_object(create_thstone1_3091(4496, 1216), 3);
    add_background_object(create_thstone11_3085(4688, 960), 3);
    add_background_object(create_thstone2_3092(4432, 1088), 3);
    add_background_object(create_thstone2_3092(4496, 1088), 3);
    add_background_object(create_thstone1_3091(4432, 928), 3);
    add_background_object(create_thstone1_3091(4688, 1056), 3);
    add_background_object(create_thstone2_3092(4688, 960), 3);
    add_background_object(create_thstone1_3091(4496, 928), 3);
    add_background_object(create_thstone1_3091(4752, 1056), 3);
    add_background_object(create_thstone2_3092(4752, 960), 3);
    add_background_object(create_thstone11_3085(4560, 704), 3);
    add_background_object(create_thstone11_3085(4560, 832), 3);
    add_background_object(create_thstone11_3085(4560, 1088), 3);
    add_background_object(create_thstone1_3091(4560, 1216), 3);
    add_background_object(create_thstone1_3091(4624, 1216), 3);
    add_background_object(create_thstone11_3085(4816, 960), 3);
    add_background_object(create_thstone2_3092(4560, 1088), 3);
    add_background_object(create_thstone2_3092(4624, 1088), 3);
    add_background_object(create_thstone1_3091(4560, 928), 3);
    add_background_object(create_thstone1_3091(4816, 1056), 3);
    add_background_object(create_thstone2_3092(4816, 960), 3);
    add_background_object(create_thstone1_3091(4624, 928), 3);
    add_background_object(create_thstone1_3091(4880, 1056), 3);
    add_background_object(create_thstone2_3092(4880, 960), 3);
    add_background_object(create_thwood3_3137(2128, 400), 3);
    add_background_object(create_thwood2_3134(2128, 368), 3);
    add_background_object(create_thwood4_3145(2112, 368), 3);
    add_background_object(create_thwood4_3145(2112, 400), 3);
    add_background_object(create_thwood3_3137(2256, 400), 3);
    add_background_object(create_thwood2_3134(2256, 368), 3);
    add_background_object(create_thwood5_3144(2384, 400), 3);
    add_background_object(create_thwood5_3144(2384, 368), 3);
    add_background_object(create_thstone4_3086(2112, 208), 3);
    add_background_object(create_thstone4_3086(2112, 272), 3);
    add_background_object(create_thstone11_3085(2144, 208), 3);
    add_background_object(create_thstone6_3095(2112, 336), 3);
    add_background_object(create_thstone1_3091(2144, 336), 3);
    add_background_object(create_thstone1_3091(2208, 336), 3);
    add_background_object(create_thstone11_3085(2272, 208), 3);
    add_background_object(create_thstone1_3091(2272, 336), 3);
    add_background_object(create_thstone1_3091(2336, 336), 3);
    add_background_object(create_thstone5_3096(2400, 336), 3);
    add_background_object(create_thstone3_3090(2400, 272), 3);
    add_background_object(create_thstone3_3090(2400, 208), 3);
    add_background_object(create_thstone4_3086(2112, 80), 3);
    add_background_object(create_thstone4_3086(2112, 144), 3);
    add_background_object(create_thstone11_3085(2144, 80), 3);
    add_background_object(create_thstone11_3085(2272, 80), 3);
    add_background_object(create_thstone3_3090(2400, 144), 3);
    add_background_object(create_thstone3_3090(2400, 80), 3);
    add_background_object(create_thstone4_3086(2112, -48), 3);
    add_background_object(create_thstone4_3086(2112, 16), 3);
    add_background_object(create_thstone11_3085(2144, -48), 3);
    add_background_object(create_thstone11_3085(2272, -48), 3);
    add_background_object(create_thstone3_3090(2400, 16), 3);
    add_background_object(create_thstone3_3090(2400, -48), 3);
    add_background_object(create_thtire1_3136(3568, 256), 3);
    add_background_object(create_thtire1_3136(3568, 224), 3);
    add_background_object(create_thtire1_3136(3568, 192), 3);
    add_background_object(create_thtire1_3136(3632, 256), 3);
    add_background_object(create_thtire1_3136(3696, 256), 3);
    add_background_object(create_thtire1_3136(3824, 256), 3);
    add_background_object(create_thtire1_3136(3824, 224), 3);
    add_background_object(create_thstone6_3095(4016, 128), 3);
    add_background_object(create_thstone1_3091(4048, 128), 3);
    add_background_object(create_thstone1_3091(4112, 128), 3);
    add_background_object(create_thstone8_3098(4016, 320), 3);
    add_background_object(create_thstone2_3092(4048, 320), 3);
    add_background_object(create_thstone2_3092(4112, 320), 3);
    add_background_object(create_thstone11_3085(4176, 0), 3);
    add_background_object(create_thstone1_3091(4176, 128), 3);
    add_background_object(create_thstone1_3091(4240, 128), 3);
    add_background_object(create_thstone2_3092(4176, 320), 3);
    add_background_object(create_thstone2_3092(4240, 320), 3);
    add_background_object(create_thtire1_3136(4272, 288), 3);
    add_background_object(create_thtire1_3136(4272, 256), 3);
    add_background_object(create_thstone7_3097(4304, 320), 3);
    add_background_object(create_thstone3_3090(4304, 352), 3);
    add_background_object(create_thstone5_3096(4304, 416), 3);
    add_background_object(create_thstone6_3095(4016, 416), 3);
    add_background_object(create_thstone1_3091(4048, 416), 3);
    add_background_object(create_thstone1_3091(4112, 416), 3);
    add_background_object(create_thstone1_3091(4176, 416), 3);
    add_background_object(create_thstone1_3091(4240, 416), 3);
    add_background_object(create_thstone8_3098(4016, 448), 3);
    add_background_object(create_thstone2_3092(4048, 448), 3);
    add_background_object(create_thstone2_3092(4112, 448), 3);
    add_background_object(create_thstone2_3092(4176, 448), 3);
    add_background_object(create_thstone2_3092(4240, 448), 3);
    add_background_object(create_thstone2_3092(4304, 448), 3);
    add_background_object(create_thstone2_3092(4368, 448), 3);
    add_background_object(create_thstone11_3085(4304, 0), 3);
    add_background_object(create_thstone1_3091(4304, 128), 3);
    add_background_object(create_thstone1_3091(4368, 128), 3);
    add_background_object(create_thstone3_3090(4432, 64), 3);
    add_background_object(create_thstone5_3096(4432, 128), 3);
    add_background_object(create_thstone3_3090(4432, 0), 3);
    add_background_object(create_thstone11_3085(4496, 64), 3);
    add_background_object(create_thstone4_3086(4464, 64), 3);
    add_background_object(create_thstone4_3086(4464, 128), 3);
    add_background_object(create_thstone6_3095(4464, 192), 3);
    add_background_object(create_thstone1_3091(4496, 192), 3);
    add_background_object(create_thstone1_3091(4560, 192), 3);
    add_background_object(create_thstone11_3085(4496, -64), 3);
    add_background_object(create_thstone4_3086(4464, -64), 3);
    add_background_object(create_thstone4_3086(4464, 0), 3);
    add_background_object(create_thtire1_3136(4336, 352), 3);
    add_background_object(create_thtire1_3136(4336, 384), 3);
    add_background_object(create_thtire1_3136(4336, 416), 3);
    add_background_object(create_thwood5_3144(4384, 320), 3);
    add_background_object(create_thstone2_3092(4432, 448), 3);
    add_background_object(create_thstone2_3092(4496, 448), 3);
    add_background_object(create_thstone2_3092(4560, 448), 3);
    add_background_object(create_thstone2_3092(4624, 448), 3);
    add_background_object(create_signwarning_1028(4368, 256), 3);
    add_background_object(create_thstone11_3085(4624, 64), 3);
    add_background_object(create_thstone1_3091(4624, 192), 3);
    add_background_object(create_thstone1_3091(4688, 192), 3);
    add_background_object(create_thstone11_3085(4624, -64), 3);
    add_background_object(create_thstone7_3097(4688, 448), 3);
    add_background_object(create_thstone11_3085(4752, 64), 3);
    add_background_object(create_thstone1_3091(4752, 192), 3);
    add_background_object(create_thstone1_3091(4816, 192), 3);
    add_background_object(create_thstone11_3085(4752, -64), 3);
    add_background_object(create_thstone3_3090(4880, 128), 3);
    add_background_object(create_thstone5_3096(4880, 192), 3);
    add_background_object(create_thstone3_3090(4880, 64), 3);
    add_background_object(create_thstone3_3090(4880, 0), 3);
    add_background_object(create_thstone3_3090(4880, -64), 3);
    add_background_object(create_thstone11_3085(4944, 128), 3);
    add_background_object(create_thstone4_3086(4912, 128), 3);
    add_background_object(create_thstone4_3086(4912, 192), 3);
    add_background_object(create_thstone11_3085(4944, 0), 3);
    add_background_object(create_thstone4_3086(4912, 0), 3);
    add_background_object(create_thstone4_3086(4912, 64), 3);
    add_background_object(create_thstone11_3085(5072, 128), 3);
    add_background_object(create_thstone11_3085(5072, 0), 3);
    add_background_object(create_thstone11_3085(4944, 384), 3);
    add_background_object(create_thstone4_3086(4912, 384), 3);
    add_background_object(create_thstone4_3086(4912, 448), 3);
    add_background_object(create_thstone11_3085(4944, 256), 3);
    add_background_object(create_thstone4_3086(4912, 256), 3);
    add_background_object(create_thstone4_3086(4912, 320), 3);
    add_background_object(create_thstone11_3085(5072, 384), 3);
    add_background_object(create_thstone11_3085(5072, 256), 3);
    add_background_object(create_thstone11_3085(4944, 512), 3);
    add_background_object(create_thstone4_3086(4912, 512), 3);
    add_background_object(create_thstone4_3086(4912, 576), 3);
    add_background_object(create_thstone11_3085(5072, 512), 3);
    add_background_object(create_thstone11_3085(4944, 640), 3);
    add_background_object(create_thstone4_3086(4912, 640), 3);
    add_background_object(create_thstone4_3086(4912, 704), 3);
    add_background_object(create_thstone11_3085(5072, 640), 3);
    add_background_object(create_thstone3_3090(4688, 736), 3);
    add_background_object(create_thstone3_3090(4688, 800), 3);
    add_background_object(create_thstone3_3090(4688, 864), 3);
    add_background_object(create_thstone5_3096(4688, 928), 3);
    add_background_object(create_thstone5_3096(4688, 480), 3);
    add_background_object(create_thstone6_3095(4016, 480), 3);
    add_background_object(create_thstone1_3091(4048, 480), 3);
    add_background_object(create_thstone1_3091(4112, 480), 3);
    add_background_object(create_thstone1_3091(4176, 480), 3);
    add_background_object(create_thstone1_3091(4240, 480), 3);
    add_background_object(create_thstone1_3091(4304, 480), 3);
    add_background_object(create_thstone1_3091(4368, 480), 3);
    add_background_object(create_thstone1_3091(4432, 480), 3);
    add_background_object(create_thstone1_3091(4496, 480), 3);
    add_background_object(create_thstone1_3091(4560, 480), 3);
    add_background_object(create_thstone1_3091(4624, 480), 3);
    add_background_object(create_thstone7_3097(4688, 672), 3);
    add_background_object(create_thstone3_3090(4688, 704), 3);
    add_background_object(create_thstone4_3086(4016, 704), 3);
    add_background_object(create_thstone8_3098(4016, 672), 3);
    add_background_object(create_thstone2_3092(4048, 672), 3);
    add_background_object(create_thstone2_3092(4112, 672), 3);
    add_background_object(create_thstone2_3092(4176, 672), 3);
    add_background_object(create_thstone2_3092(4240, 672), 3);
    add_background_object(create_thstone2_3092(4304, 672), 3);
    add_background_object(create_thstone2_3092(4368, 672), 3);
    add_background_object(create_thstone2_3092(4432, 672), 3);
    add_background_object(create_thstone2_3092(4496, 672), 3);
    add_background_object(create_thstone2_3092(4560, 672), 3);
    add_background_object(create_thstone2_3092(4624, 672), 3);
    add_background_object(create_thbackbarrel_3129(4568, 592), 3);
    add_background_object(create_thbackbarrel_3129(4472, 592), 3);
    add_background_object(create_thbackbarrel_3129(4520, 592), 3);
    add_background_object(create_thbackbarrel_3129(4288, 592), 3);
    add_background_object(create_thbackbarrel_3129(4216, 592), 3);
    add_background_object(create_thbackbarrel_3129(4136, 592), 3);
    add_background_object(create_thbackbarrel_3129(4176, 592), 3);
    add_background_object(create_thstone4_3086(4016, 544), 3);
    add_background_object(create_thstone8_3098(4016, 512), 3);
    add_background_object(create_thstone4_3086(4016, 608), 3);
    add_background_object(create_thstone6_3095(4016, 640), 3);
    add_background_object(create_thstone1_3091(4048, 640), 3);
    add_background_object(create_thstone2_3092(4048, 512), 3);
    add_background_object(create_thstone9_3093(4048, 544), 3);
    add_background_object(create_thstone9_3093(4048, 576), 3);
    add_background_object(create_thstone7_3097(4112, 512), 3);
    add_background_object(create_thstone3_3090(4112, 544), 3);
    add_background_object(create_thstone3_3090(4112, 608), 3);
    add_background_object(create_thstone5_3096(4112, 640), 3);
    add_background_object(create_thstone7_3097(4944, 960), 3);
    add_background_object(create_thstone3_3090(4944, 992), 3);
    add_background_object(create_thstone5_3096(4944, 1056), 3);
    add_background_object(create_thstone7_3097(4688, 1088), 3);
    add_background_object(create_thstone3_3090(4688, 1120), 3);
    add_background_object(create_thstone3_3090(4688, 1184), 3);
    add_background_object(create_thstone5_3096(4688, 1216), 3);
    add_background_object(create_thstone6_3095(4912, 768), 3);
    add_background_object(create_thstone1_3091(4944, 768), 3);
    add_background_object(create_thstone1_3091(5008, 768), 3);
    add_background_object(create_thstone1_3091(5072, 768), 3);
    add_background_object(create_thstone1_3091(5136, 768), 3);
    add_background_object(create_thhandlebar_3148(2752, 640), 3);
    add_background_object(create_thhandlebar_3148(2848, 640), 3);
    add_background_object(create_thhandlebar_3148(2944, 640), 3);
    add_background_object(create_thstone8_3098(5920, 1544), 3);
    add_background_object(create_thstone2_3092(6208, 1544), 3);
    add_background_object(create_thstone2_3092(6272, 1544), 3);
    add_background_object(create_thstone4_3086(5920, 1576), 3);
    add_background_object(create_thstone11_3085(6208, 1576), 3);
    add_background_object(create_thstone4_3086(5920, 1640), 3);
    add_background_object(create_thstone4_3086(5920, 1704), 3);
    add_background_object(create_thstone11_3085(6208, 1704), 3);
    add_background_object(create_thstone4_3086(5920, 1768), 3);
    add_background_object(create_thstone7_3097(6336, 1544), 3);
    add_background_object(create_thstone3_3090(6336, 1576), 3);
    add_background_object(create_thstone3_3090(6336, 1640), 3);
    add_background_object(create_thstone3_3090(6336, 1704), 3);
    add_background_object(create_thstone3_3090(6336, 1768), 3);
    add_background_object(create_thstone2_3092(6080, 1544), 3);
    add_background_object(create_thstone2_3092(6144, 1544), 3);
    add_background_object(create_thstone11_3085(6080, 1576), 3);
    add_background_object(create_thstone11_3085(6080, 1704), 3);
    add_background_object(create_thstone2_3092(5952, 1544), 3);
    add_background_object(create_thstone2_3092(6016, 1544), 3);
    add_background_object(create_thstone11_3085(5952, 1576), 3);
    add_background_object(create_thstone11_3085(5952, 1704), 3);
    add_background_object(create_thstone4_3086(5920, 1832), 3);
    add_background_object(create_thstone11_3085(6208, 1832), 3);
    add_background_object(create_thstone4_3086(5920, 1896), 3);
    add_background_object(create_thstone3_3090(6336, 1832), 3);
    add_background_object(create_thstone3_3090(6336, 1896), 3);
    add_background_object(create_thstone11_3085(6080, 1832), 3);
    add_background_object(create_thstone11_3085(5952, 1832), 3);
    add_background_object(create_thstone8_3098(5760, 1624), 3);
    add_background_object(create_thstone4_3086(5760, 1656), 3);
    add_background_object(create_thstone4_3086(5760, 1720), 3);
    add_background_object(create_thstone2_3092(5792, 1624), 3);
    add_background_object(create_thstone2_3092(5856, 1624), 3);
    add_background_object(create_thstone11_3085(5792, 1656), 3);
    add_background_object(create_thstone7_3097(5888, 1624), 3);
    add_background_object(create_thstone3_3090(5888, 1656), 3);
    add_background_object(create_thstone3_3090(5888, 1720), 3);
    add_background_object(create_thstone4_3086(5760, 1784), 3);
    add_background_object(create_thstone4_3086(5760, 1848), 3);
    add_background_object(create_thstone11_3085(5792, 1784), 3);
    add_background_object(create_thstone3_3090(5888, 1784), 3);
    add_background_object(create_thstone3_3090(5888, 1848), 3);
    add_background_object(create_thtotemback_3087(5976, 1512), 3);
    add_background_object(create_thtotemback_3087(5976, 1480), 3);
    add_background_object(create_thtotemback_3087(6032, 1512), 3);
    add_background_object(create_thtotemback_3087(6032, 1480), 3);
    add_background_object(create_thtotemback_3087(6088, 1512), 3);
    add_background_object(create_thtotemback_3087(6088, 1480), 3);
    add_background_object(create_thtotemback_3087(6144, 1512), 3);
    add_background_object(create_thtotemback_3087(6144, 1480), 3);
    add_background_object(create_thtotemback_3087(6200, 1512), 3);
    add_background_object(create_thtotemback_3087(6200, 1480), 3);
    add_background_object(create_thtotemback_3087(6256, 1512), 3);
    add_background_object(create_thtotemback_3087(6256, 1480), 3);
    add_background_object(create_thtotemback_3087(6312, 1512), 3);
    add_background_object(create_thtotemback_3087(6312, 1480), 3);
    add_background_object(create_thstone8_3098(6368, 1480), 3);
    add_background_object(create_thstone2_3092(6688, 1480), 3);
    add_background_object(create_thstone2_3092(6752, 1480), 3);
    add_background_object(create_thstone4_3086(6368, 1512), 3);
    add_background_object(create_thstone11_3085(6688, 1512), 3);
    add_background_object(create_thstone4_3086(6368, 1576), 3);
    add_background_object(create_thstone4_3086(6368, 1640), 3);
    add_background_object(create_thstone11_3085(6688, 1640), 3);
    add_background_object(create_thstone4_3086(6368, 1704), 3);
    add_background_object(create_thstone7_3097(6944, 1544), 3);
    add_background_object(create_thstone3_3090(6944, 1576), 3);
    add_background_object(create_thstone3_3090(6944, 1640), 3);
    add_background_object(create_thstone3_3090(6944, 1704), 3);
    add_background_object(create_thstone3_3090(6944, 1768), 3);
    add_background_object(create_thstone2_3092(6528, 1480), 3);
    add_background_object(create_thstone2_3092(6592, 1480), 3);
    add_background_object(create_thstone11_3085(6528, 1512), 3);
    add_background_object(create_thstone11_3085(6528, 1640), 3);
    add_background_object(create_thstone2_3092(6400, 1480), 3);
    add_background_object(create_thstone2_3092(6464, 1480), 3);
    add_background_object(create_thstone11_3085(6400, 1512), 3);
    add_background_object(create_thstone11_3085(6400, 1640), 3);
    add_background_object(create_thstone4_3086(6368, 1768), 3);
    add_background_object(create_thstone11_3085(6688, 1768), 3);
    add_background_object(create_thstone4_3086(6368, 1832), 3);
    add_background_object(create_thstone11_3085(6528, 1768), 3);
    add_background_object(create_thstone11_3085(6400, 1768), 3);
    add_background_object(create_thtotemback_3087(6368, 1448), 3);
    add_background_object(create_thtotemback_3087(6368, 1416), 3);
    add_background_object(create_thtotemback_3087(6424, 1448), 3);
    add_background_object(create_thtotemback_3087(6424, 1416), 3);
    add_background_object(create_thtotemback_3087(6536, 1448), 3);
    add_background_object(create_thtotemback_3087(6536, 1416), 3);
    add_background_object(create_thtotemback_3087(6592, 1448), 3);
    add_background_object(create_thtotemback_3087(6592, 1416), 3);
    add_background_object(create_thtotemback_3087(6368, 1384), 3);
    add_background_object(create_thtotemback_3087(6368, 1352), 3);
    add_background_object(create_thtotemback_3087(6424, 1384), 3);
    add_background_object(create_thtotemback_3087(6424, 1352), 3);
    add_background_object(create_thtotemback_3087(6536, 1384), 3);
    add_background_object(create_thtotemback_3087(6536, 1352), 3);
    add_background_object(create_thtotemback_3087(6592, 1384), 3);
    add_background_object(create_thtotemback_3087(6592, 1352), 3);
    add_background_object(create_thtotemback_3087(6368, 1320), 3);
    add_background_object(create_thtotemback_3087(6368, 1288), 3);
    add_background_object(create_thtotemback_3087(6424, 1320), 3);
    add_background_object(create_thtotemback_3087(6424, 1288), 3);
    add_background_object(create_thtotemback_3087(6536, 1320), 3);
    add_background_object(create_thtotemback_3087(6536, 1288), 3);
    add_background_object(create_thtotemback_3087(6592, 1320), 3);
    add_background_object(create_thtotemback_3087(6592, 1288), 3);
    add_background_object(create_thstone2_3092(8000, 1288), 3);
    add_background_object(create_thstone2_3092(8064, 1288), 3);
    add_background_object(create_thstone11_3085(8000, 1320), 3);
    add_background_object(create_thstone11_3085(8000, 1448), 3);
    add_background_object(create_thstone7_3097(8128, 1288), 3);
    add_background_object(create_thstone3_3090(8128, 1320), 3);
    add_background_object(create_thstone3_3090(8128, 1384), 3);
    add_background_object(create_thstone3_3090(8128, 1448), 3);
    add_background_object(create_thstone3_3090(8128, 1512), 3);
    add_background_object(create_thstone2_3092(6976, 1288), 3);
    add_background_object(create_thstone2_3092(7040, 1288), 3);
    add_background_object(create_thstone11_3085(6976, 1320), 3);
    add_background_object(create_thstone11_3085(6976, 1448), 3);
    add_background_object(create_thstone11_3085(8000, 1576), 3);
    add_background_object(create_thstone3_3090(8128, 1576), 3);
    add_background_object(create_thstone3_3090(8128, 1640), 3);
    add_background_object(create_thstone11_3085(6976, 1576), 3);
    add_background_object(create_thstone11_3085(6976, 1704), 3);
    add_background_object(create_thstone11_3085(5856, 1128), 3);
    add_background_object(create_thstone4_3086(5824, 1128), 3);
    add_background_object(create_thstone4_3086(5824, 1192), 3);
    add_background_object(create_thstone11_3085(5984, 1128), 3);
    add_background_object(create_thstone6_3095(5824, 1256), 3);
    add_background_object(create_thstone1_3091(5856, 1256), 3);
    add_background_object(create_thstone1_3091(5920, 1256), 3);
    add_background_object(create_thstone1_3091(5984, 1256), 3);
    add_background_object(create_thstone1_3091(6048, 1256), 3);
    add_background_object(create_thstone11_3085(6368, 1128), 3);
    add_background_object(create_thstone1_3091(6368, 1256), 3);
    add_background_object(create_thstone1_3091(6432, 1256), 3);
    add_background_object(create_thstone3_3090(6752, 1128), 3);
    add_background_object(create_thstone3_3090(6752, 1192), 3);
    add_background_object(create_thstone5_3096(6752, 1256), 3);
    add_background_object(create_thstone11_3085(6112, 1128), 3);
    add_background_object(create_thstone11_3085(6240, 1128), 3);
    add_background_object(create_thstone1_3091(6112, 1256), 3);
    add_background_object(create_thstone1_3091(6176, 1256), 3);
    add_background_object(create_thstone1_3091(6240, 1256), 3);
    add_background_object(create_thstone1_3091(6304, 1256), 3);
    add_background_object(create_thstone11_3085(5856, 1000), 3);
    add_background_object(create_thstone4_3086(5824, 1000), 3);
    add_background_object(create_thstone4_3086(5824, 1064), 3);
    add_background_object(create_thstone11_3085(5984, 1000), 3);
    add_background_object(create_thstone11_3085(6368, 1000), 3);
    add_background_object(create_thstone3_3090(6752, 1000), 3);
    add_background_object(create_thstone3_3090(6752, 1064), 3);
    add_background_object(create_thstone11_3085(6112, 1000), 3);
    add_background_object(create_thstone11_3085(6240, 1000), 3);
    add_background_object(create_thstone11_3085(5856, 872), 3);
    add_background_object(create_thstone4_3086(5824, 872), 3);
    add_background_object(create_thstone4_3086(5824, 936), 3);
    add_background_object(create_thstone11_3085(5984, 872), 3);
    add_background_object(create_thstone11_3085(6368, 872), 3);
    add_background_object(create_thstone3_3090(6752, 872), 3);
    add_background_object(create_thstone3_3090(6752, 936), 3);
    add_background_object(create_thstone11_3085(6112, 872), 3);
    add_background_object(create_thstone11_3085(6240, 872), 3);
    add_background_object(create_thstone11_3085(4432, 960), 3);
    add_background_object(create_thstone1_3091(4432, 1056), 3);
    add_background_object(create_thstone2_3092(4432, 960), 3);
    add_background_object(create_thstone1_3091(4496, 1056), 3);
    add_background_object(create_thstone2_3092(4496, 960), 3);
    add_background_object(create_thstone11_3085(4560, 960), 3);
    add_background_object(create_thstone1_3091(4560, 1056), 3);
    add_background_object(create_thstone2_3092(4560, 960), 3);
    add_background_object(create_thstone1_3091(4624, 1056), 3);
    add_background_object(create_thstone2_3092(4624, 960), 3);
    add_background_object(create_thtire1_3136(4144, 608), 3);
    add_background_object(create_thtire1_3136(4144, 640), 3);
    add_background_object(create_thstone11_3085(6368, 744), 3);
    add_background_object(create_thstone3_3090(6752, 744), 3);
    add_background_object(create_thstone3_3090(6752, 808), 3);
    add_background_object(create_thstone11_3085(6816, 744), 3);
    add_background_object(create_thstone4_3086(6784, 744), 3);
    add_background_object(create_thstone4_3086(6784, 808), 3);
    add_background_object(create_thstone6_3095(6784, 872), 3);
    add_background_object(create_thstone1_3091(6816, 872), 3);
    add_background_object(create_thstone1_3091(6880, 872), 3);
    add_background_object(create_thstone11_3085(7200, 744), 3);
    add_background_object(create_thstone1_3091(7200, 872), 3);
    add_background_object(create_thstone1_3091(7264, 872), 3);
    add_background_object(create_thstone11_3085(7456, 744), 3);
    add_background_object(create_thstone1_3091(7456, 872), 3);
    add_background_object(create_thstone1_3091(7520, 872), 3);
    add_background_object(create_thstone11_3085(7328, 744), 3);
    add_background_object(create_thstone1_3091(7328, 872), 3);
    add_background_object(create_thstone1_3091(7392, 872), 3);
    add_background_object(create_thstone9_3093(7200, 1064), 3);
    add_background_object(create_thstone8_3098(7168, 1032), 3);
    add_background_object(create_thstone2_3092(7200, 1032), 3);
    add_background_object(create_thstone7_3097(7264, 1032), 3);
    add_background_object(create_thstone3_3090(7264, 1064), 3);
    add_background_object(create_thstone4_3086(7168, 1064), 3);
    add_background_object(create_thstone6_3095(7168, 1128), 3);
    add_background_object(create_thstone5_3096(7264, 1128), 3);
    add_background_object(create_thstone1_3091(7200, 1128), 3);
    add_background_object(create_thstone11_3085(7584, 744), 3);
    add_background_object(create_thstone1_3091(7584, 872), 3);
    add_background_object(create_thstone1_3091(7648, 872), 3);
    add_background_object(create_thstone11_3085(7712, 744), 3);
    add_background_object(create_thstone1_3091(7712, 872), 3);
    add_background_object(create_thstone1_3091(7776, 872), 3);
    add_background_object(create_thstone11_3085(7904, 744), 3);
    add_background_object(create_thstone1_3091(7968, 872), 3);
    add_background_object(create_thstone5_3096(8032, 872), 3);
    add_background_object(create_thstone3_3090(8032, 744), 3);
    add_background_object(create_thstone3_3090(8032, 808), 3);
    add_background_object(create_thstone11_3085(7840, 744), 3);
    add_background_object(create_thstone1_3091(7840, 872), 3);
    add_background_object(create_thstone1_3091(7904, 872), 3);
    add_background_object(create_thstone9_3093(7968, 1192), 3);
    add_background_object(create_thstone8_3098(7936, 1160), 3);
    add_background_object(create_thstone2_3092(7968, 1160), 3);
    add_background_object(create_thstone7_3097(8032, 1160), 3);
    add_background_object(create_thstone3_3090(8032, 1192), 3);
    add_background_object(create_thstone4_3086(7936, 1192), 3);
    add_background_object(create_thstone6_3095(7936, 1256), 3);
    add_background_object(create_thstone5_3096(8032, 1256), 3);
    add_background_object(create_thstone1_3091(7968, 1256), 3);
    add_background_object(create_thstone9_3093(7968, 936), 3);
    add_background_object(create_thstone8_3098(7936, 904), 3);
    add_background_object(create_thstone2_3092(7968, 904), 3);
    add_background_object(create_thstone7_3097(8032, 904), 3);
    add_background_object(create_thstone3_3090(8032, 936), 3);
    add_background_object(create_thstone4_3086(7936, 936), 3);
    add_background_object(create_thstone6_3095(7936, 1000), 3);
    add_background_object(create_thstone5_3096(8032, 1000), 3);
    add_background_object(create_thstone1_3091(7968, 1000), 3);
    add_background_object(create_thstone2_3092(7232, 1288), 3);
    add_background_object(create_thstone2_3092(7296, 1288), 3);
    add_background_object(create_thstone11_3085(7232, 1320), 3);
    add_background_object(create_thstone11_3085(7232, 1448), 3);
    add_background_object(create_thstone11_3085(7232, 1576), 3);
    add_background_object(create_thstone11_3085(7232, 1704), 3);
    add_background_object(create_thstone8_3098(8160, 808), 3);
    add_background_object(create_thstone4_3086(8160, 1096), 3);
    add_background_object(create_thstone4_3086(8160, 1160), 3);
    add_background_object(create_thstone2_3092(8192, 1064), 3);
    add_background_object(create_thstone2_3092(8256, 1064), 3);
    add_background_object(create_thstone11_3085(8192, 1096), 3);
    add_background_object(create_thstone4_3086(8160, 1352), 3);
    add_background_object(create_thstone4_3086(8160, 1416), 3);
    add_background_object(create_thstone11_3085(8192, 1352), 3);
    add_background_object(create_thstone4_3086(8160, 1480), 3);
    add_background_object(create_thstone4_3086(8160, 1544), 3);
    add_background_object(create_thstone11_3085(8192, 1480), 3);
    add_background_object(create_thstone4_3086(8160, 1224), 3);
    add_background_object(create_thstone4_3086(8160, 1288), 3);
    add_background_object(create_thstone11_3085(8192, 1224), 3);
    add_background_object(create_thstone11_3085(7904, 616), 3);
    add_background_object(create_thstone3_3090(8032, 616), 3);
    add_background_object(create_thstone3_3090(8032, 680), 3);
    add_background_object(create_thstone4_3086(6976, 1768), 3);
    add_background_object(create_thstone4_3086(6976, 1704), 3);
    add_background_object(create_thstone4_3086(6976, 1640), 3);
    add_background_object(create_thstone4_3086(6976, 1576), 3);
    add_background_object(create_thstone4_3086(6976, 1512), 3);
    add_background_object(create_thstone4_3086(6976, 1448), 3);
    add_background_object(create_thstone4_3086(6976, 1384), 3);
    add_background_object(create_thstone4_3086(6976, 1320), 3);
    add_background_object(create_thstone8_3098(6976, 1288), 3);
    add_background_object(create_thstone11_3085(6616, 1512), 3);
    add_background_object(create_thstone11_3085(6616, 1640), 3);
    add_background_object(create_thstone11_3085(6616, 1768), 3);
    add_background_object(create_thstone2_3092(6656, 1480), 3);
    add_background_object(create_thstone11_3085(5200, 512), 3);
    add_background_object(create_thstone11_3085(5200, 640), 3);
    add_background_object(create_thstone1_3091(5200, 768), 3);
    add_background_object(create_thstone1_3091(5264, 768), 3);
    add_background_object(create_thstone11_3085(5328, 512), 3);
    add_background_object(create_thstone11_3085(5456, 512), 3);
    add_background_object(create_thstone11_3085(5328, 640), 3);
    add_background_object(create_thstone11_3085(5456, 640), 3);
    add_background_object(create_thstone1_3091(5328, 768), 3);
    add_background_object(create_thstone1_3091(5392, 768), 3);
    add_background_object(create_thstone1_3091(5456, 768), 3);
    add_background_object(create_thstone1_3091(5520, 768), 3);
    add_background_object(create_thstone11_3085(5584, 512), 3);
    add_background_object(create_thstone11_3085(5584, 640), 3);
    add_background_object(create_thstone1_3091(5584, 768), 3);
    add_background_object(create_thstone1_3091(5648, 768), 3);
    add_background_object(create_thstone11_3085(5856, 744), 3);
    add_background_object(create_thstone4_3086(5824, 744), 3);
    add_background_object(create_thstone4_3086(5824, 808), 3);
    add_background_object(create_thstone11_3085(5984, 744), 3);
    add_background_object(create_thstone11_3085(5712, 512), 3);
    add_background_object(create_thstone11_3085(5712, 640), 3);
    add_background_object(create_thstone1_3091(5712, 768), 3);
    add_background_object(create_thstone1_3091(5776, 768), 3);
    add_background_object(create_thstone11_3085(5840, 616), 3);
    add_background_object(create_thstone11_3085(5968, 616), 3);
    add_background_object(create_thstone11_3085(5840, 488), 3);
    add_background_object(create_thstone11_3085(5968, 488), 3);
    add_background_object(create_thstone7_3097(4784, 672), 3);
    add_background_object(create_thstone8_3098(4720, 672), 3);
    add_background_object(create_thstone3_3090(4784, 704), 3);
    add_background_object(create_thstone4_3086(4720, 704), 3);
    add_background_object(create_thstone5_3096(4784, 768), 3);
    add_background_object(create_thstone6_3095(4720, 768), 3);
    add_background_object(create_thstone11_3085(7904, 488), 3);
    add_background_object(create_thstone3_3090(8032, 488), 3);
    add_background_object(create_thstone3_3090(8032, 552), 3);
    add_background_object(create_thstone4_3086(8064, 456), 3);
    add_background_object(create_thstone11_3085(8224, 392), 3);
    add_background_object(create_thstone11_3085(8480, 392), 3);
    add_background_object(create_thstone6_3095(8064, 520), 3);
    add_background_object(create_thstone1_3091(8096, 520), 3);
    add_background_object(create_thstone1_3091(8160, 520), 3);
    add_background_object(create_thstone1_3091(8224, 520), 3);
    add_background_object(create_thstone1_3091(8288, 520), 3);
    add_background_object(create_thstone2_3092(8320, 1064), 3);
    add_background_object(create_thstone2_3092(8384, 1064), 3);
    add_background_object(create_thstone11_3085(8320, 1096), 3);
    add_background_object(create_thstone11_3085(8320, 1352), 3);
    add_background_object(create_thstone11_3085(8320, 1480), 3);
    add_background_object(create_thstone11_3085(8320, 1224), 3);
    add_background_object(create_thstone1_3091(8480, 520), 3);
    add_background_object(create_thstone1_3091(8544, 520), 3);
    add_background_object(create_thstone2_3092(8448, 1064), 3);
    add_background_object(create_thstone2_3092(8512, 1064), 3);
    add_background_object(create_thstone11_3085(8448, 1096), 3);
    add_background_object(create_thstone11_3085(7776, 616), 3);
    add_background_object(create_thstone11_3085(7776, 488), 3);
    add_background_object(create_thstone11_3085(7904, 360), 3);
    add_background_object(create_thstone11_3085(7648, 616), 3);
    add_background_object(create_thstone11_3085(7648, 488), 3);
    add_background_object(create_thstone11_3085(7776, 360), 3);
    add_background_object(create_thstone11_3085(6496, 1128), 3);
    add_background_object(create_thstone1_3091(6496, 1256), 3);
    add_background_object(create_thstone1_3091(6560, 1256), 3);
    add_background_object(create_thstone11_3085(6496, 1000), 3);
    add_background_object(create_thstone11_3085(6496, 872), 3);
    add_background_object(create_thstone11_3085(6496, 744), 3);
    add_background_object(create_thstone11_3085(6624, 1128), 3);
    add_background_object(create_thstone1_3091(6624, 1256), 3);
    add_background_object(create_thstone1_3091(6688, 1256), 3);
    add_background_object(create_thstone11_3085(6624, 1000), 3);
    add_background_object(create_thstone11_3085(6624, 872), 3);
    add_background_object(create_thstone11_3085(6624, 744), 3);
    add_background_object(create_thstone7_3097(6784, 1480), 3);
    add_background_object(create_thstone3_3090(6784, 1512), 3);
    add_background_object(create_thstone3_3090(6784, 1576), 3);
    add_background_object(create_thstone3_3090(6784, 1640), 3);
    add_background_object(create_thstone3_3090(6784, 1704), 3);
    add_background_object(create_thstone3_3090(6784, 1768), 3);
    add_background_object(create_thstone3_3090(6784, 1832), 3);
    add_background_object(create_thstone11_3085(6816, 1704), 3);
    add_background_object(create_thstone11_3085(6816, 1576), 3);
    add_background_object(create_thstone2_3092(6880, 1544), 3);
    add_background_object(create_thstone2_3092(6816, 1544), 3);
    add_background_object(create_thstone4_3086(6816, 1704), 3);
    add_background_object(create_thstone4_3086(6816, 1640), 3);
    add_background_object(create_thstone4_3086(6816, 1576), 3);
    add_background_object(create_thstone8_3098(6816, 1544), 3);
    add_background_object(create_thstone4_3086(6816, 1768), 3);
    add_background_object(create_thstone2_3092(7872, 1288), 3);
    add_background_object(create_thstone2_3092(7936, 1288), 3);
    add_background_object(create_thstone11_3085(7872, 1320), 3);
    add_background_object(create_thstone11_3085(7872, 1448), 3);
    add_background_object(create_thstone11_3085(7872, 1576), 3);
    add_background_object(create_thstone11_3085(8096, 392), 3);
    add_background_object(create_thstone3_3090(8032, 424), 3);
    add_background_object(create_thstone4_3086(8064, 392), 3);
    add_background_object(create_thstone3_3090(8032, 360), 3);
    add_background_object(create_thstone11_3085(7648, 360), 3);
    add_background_object(create_thstone2_3092(7104, 1288), 3);
    add_background_object(create_thstone2_3092(7168, 1288), 3);
    add_background_object(create_thstone11_3085(7104, 1320), 3);
    add_background_object(create_thstone11_3085(7104, 1448), 3);
    add_background_object(create_thstone11_3085(7104, 1576), 3);
    add_background_object(create_thstone11_3085(7104, 1704), 3);
    add_background_object(create_thstone11_3085(7072, 744), 3);
    add_background_object(create_thstone1_3091(7072, 872), 3);
    add_background_object(create_thstone1_3091(7136, 872), 3);
    add_background_object(create_thstone6_3095(7008, 1256), 3);
    add_background_object(create_thstone5_3096(7040, 1256), 3);
    add_background_object(create_thstone4_3086(7008, 1192), 3);
    add_background_object(create_thstone3_3090(7040, 1192), 3);
    add_background_object(create_thstone11_3085(6944, 744), 3);
    add_background_object(create_thstone1_3091(6944, 872), 3);
    add_background_object(create_thstone1_3091(7008, 872), 3);
    add_background_object(create_thstone8_3098(7008, 1160), 3);
    add_background_object(create_thstone7_3097(7040, 1160), 3);
    add_background_object(create_thstone8_3098(6976, 1032), 3);
    add_background_object(create_thstone6_3095(6976, 1128), 3);
    add_background_object(create_thstone5_3096(7008, 1128), 3);
    add_background_object(create_thstone7_3097(7008, 1032), 3);
    add_background_object(create_thstone4_3086(6976, 1064), 3);
    add_background_object(create_thstone3_3090(7008, 1064), 3);
    add_background_object(create_thstone11_3085(6816, 616), 3);
    add_background_object(create_thstone11_3085(7200, 616), 3);
    add_background_object(create_thstone11_3085(7456, 616), 3);
    add_background_object(create_thstone11_3085(7328, 616), 3);
    add_background_object(create_thstone11_3085(7584, 616), 3);
    add_background_object(create_thstone11_3085(7072, 616), 3);
    add_background_object(create_thstone11_3085(6944, 616), 3);
    add_background_object(create_thstone11_3085(6368, 616), 3);
    add_background_object(create_thstone3_3090(6752, 616), 3);
    add_background_object(create_thstone3_3090(6752, 680), 3);
    add_background_object(create_thstone4_3086(6784, 616), 3);
    add_background_object(create_thstone4_3086(6784, 680), 3);
    add_background_object(create_thstone11_3085(6496, 616), 3);
    add_background_object(create_thstone11_3085(6624, 616), 3);
    add_background_object(create_thstone7_3097(7328, 1288), 3);
    add_background_object(create_thstone3_3090(7328, 1320), 3);
    add_background_object(create_thstone8_3098(7872, 1288), 3);
    add_background_object(create_thstone4_3086(7872, 1320), 3);
    add_background_object(create_thstone3_3090(7328, 1384), 3);
    add_background_object(create_thstone4_3086(7872, 1384), 3);
    add_background_object(create_thstone3_3090(7328, 1448), 3);
    add_background_object(create_thstone4_3086(7872, 1448), 3);
    add_background_object(create_thstone3_3090(7328, 1512), 3);
    add_background_object(create_thstone4_3086(7872, 1512), 3);
    add_background_object(create_thstone3_3090(7328, 1576), 3);
    add_background_object(create_thstone4_3086(7872, 1576), 3);
    add_background_object(create_thstone3_3090(7328, 1640), 3);
    add_background_object(create_thstone4_3086(7872, 1640), 3);
    add_background_object(create_thstone3_3090(7328, 1704), 3);
    add_background_object(create_thstone3_3090(7328, 1768), 3);
    add_background_object(create_thstone11_3085(7360, 1256), 3);
    add_background_object(create_thstone2_3092(7360, 1224), 3);
    add_background_object(create_thstone2_3092(7424, 1224), 3);
    add_background_object(create_thstone11_3085(7488, 1256), 3);
    add_background_object(create_thstone2_3092(7488, 1224), 3);
    add_background_object(create_thstone2_3092(7552, 1224), 3);
    add_background_object(create_thstone11_3085(7616, 1256), 3);
    add_background_object(create_thstone2_3092(7616, 1224), 3);
    add_background_object(create_thstone2_3092(7680, 1224), 3);
    add_background_object(create_thstone4_3086(7360, 1320), 3);
    add_background_object(create_thstone4_3086(7360, 1256), 3);
    add_background_object(create_thstone8_3098(7360, 1224), 3);
    add_background_object(create_thstone11_3085(7744, 1256), 3);
    add_background_object(create_thstone2_3092(7744, 1224), 3);
    add_background_object(create_thstone2_3092(7808, 1224), 3);
    add_background_object(create_thstone7_3097(7840, 1224), 3);
    add_background_object(create_thstone3_3090(7840, 1256), 3);
    add_background_object(create_thstone3_3090(7840, 1320), 3);
    add_background_object(create_thstone11_3085(7360, 1384), 3);
    add_background_object(create_thstone11_3085(7488, 1384), 3);
    add_background_object(create_thstone11_3085(7616, 1384), 3);
    add_background_object(create_thstone4_3086(7360, 1448), 3);
    add_background_object(create_thstone4_3086(7360, 1384), 3);
    add_background_object(create_thstone11_3085(7744, 1384), 3);
    add_background_object(create_thstone3_3090(7840, 1384), 3);
    add_background_object(create_thstone3_3090(7840, 1448), 3);
    add_background_object(create_thstone11_3085(7360, 1512), 3);
    add_background_object(create_thstone11_3085(7488, 1512), 3);
    add_background_object(create_thstone11_3085(7616, 1512), 3);
    add_background_object(create_thstone4_3086(7360, 1576), 3);
    add_background_object(create_thstone4_3086(7360, 1512), 3);
    add_background_object(create_thstone11_3085(7744, 1512), 3);
    add_background_object(create_thstone3_3090(7840, 1512), 3);
    add_background_object(create_thstone3_3090(7840, 1576), 3);
    add_background_object(create_thstone9_3093(7584, 936), 3);
    add_background_object(create_thstone8_3098(7552, 904), 3);
    add_background_object(create_thstone2_3092(7584, 904), 3);
    add_background_object(create_thstone7_3097(7648, 904), 3);
    add_background_object(create_thstone3_3090(7648, 936), 3);
    add_background_object(create_thstone4_3086(7552, 936), 3);
    add_background_object(create_thstone6_3095(7552, 1000), 3);
    add_background_object(create_thstone5_3096(7648, 1000), 3);
    add_background_object(create_thstone1_3091(7584, 1000), 3);
    add_background_object(create_thstone8_3098(8160, 1064), 3);
    add_background_object(create_thstone7_3097(8192, 808), 3);
    add_background_object(create_thstone3_3090(8192, 968), 3);
    add_background_object(create_thstone4_3086(8160, 968), 3);
    add_background_object(create_thstone6_3095(8160, 1032), 3);
    add_background_object(create_thstone5_3096(8192, 1032), 3);
    add_background_object(create_thstone11_3085(8448, 1224), 3);
    add_background_object(create_thstone1_3091(8672, 128), 3);
    add_background_object(create_thstone2_3092(8576, 1064), 3);
    add_background_object(create_thstone2_3092(8640, 680), 3);
    add_background_object(create_thstone11_3085(8576, 1096), 3);
    add_background_object(create_thstone11_3085(8576, 1224), 3);
    add_background_object(create_thstone2_3092(8704, 680), 3);
    add_background_object(create_thstone2_3092(8768, 680), 3);
    add_background_object(create_thstone11_3085(8704, 712), 3);
    add_background_object(create_thstone11_3085(8704, 968), 3);
    add_background_object(create_thstone3_3090(8192, 904), 3);
    add_background_object(create_thstone4_3086(8160, 904), 3);
    add_background_object(create_thstone3_3090(8192, 840), 3);
    add_background_object(create_thstone4_3086(8160, 840), 3);
    add_background_object(create_thstone11_3085(8736, 0), 3);
    add_background_object(create_thstone1_3091(8736, 128), 3);
    add_background_object(create_thstone1_3091(8800, 128), 3);
    add_background_object(create_thstone11_3085(8864, 0), 3);
    add_background_object(create_thstone1_3091(8864, 128), 3);
    add_background_object(create_thstone1_3091(8928, 128), 3);
    add_background_object(create_thstone2_3092(8960, 680), 3);
    add_background_object(create_thstone2_3092(9024, 680), 3);
    add_background_object(create_thstone11_3085(8992, 0), 3);
    add_background_object(create_thstone1_3091(8992, 128), 3);
    add_background_object(create_thstone1_3091(9056, 128), 3);
    add_background_object(create_thstone11_3085(9120, 0), 3);
    add_background_object(create_thstone1_3091(9120, 128), 3);
    add_background_object(create_thstone1_3091(9184, 128), 3);
    add_background_object(create_thstone2_3092(9088, 680), 3);
    add_background_object(create_thstone2_3092(9152, 680), 3);
    add_background_object(create_thstone11_3085(9248, 0), 3);
    add_background_object(create_thstone1_3091(9248, 128), 3);
    add_background_object(create_thstone1_3091(9312, 128), 3);
    add_background_object(create_thstone8_3098(8544, 680), 3);
    add_background_object(create_thstone4_3086(8544, 968), 3);
    add_background_object(create_thstone6_3095(8544, 1032), 3);
    add_background_object(create_thstone4_3086(8544, 776), 3);
    add_background_object(create_thstone4_3086(8544, 712), 3);
    add_background_object(create_thstone8_3098(8800, 424), 3);
    add_background_object(create_thstone7_3097(8832, 424), 3);
    add_background_object(create_thstone3_3090(8832, 584), 3);
    add_background_object(create_thstone4_3086(8800, 584), 3);
    add_background_object(create_thstone6_3095(8800, 648), 3);
    add_background_object(create_thstone5_3096(8832, 648), 3);
    add_background_object(create_thstone3_3090(8832, 520), 3);
    add_background_object(create_thstone4_3086(8800, 520), 3);
    add_background_object(create_thstone3_3090(8832, 456), 3);
    add_background_object(create_thstone4_3086(8800, 456), 3);
    add_background_object(create_thstone11_3085(8480, 264), 3);
    add_background_object(create_thstone11_3085(8480, 136), 3);
    add_background_object(create_thstone11_3085(8224, 264), 3);
    add_background_object(create_thstone11_3085(8224, 136), 3);
    add_background_object(create_thstone3_3090(8608, 456), 3);
    add_background_object(create_thstone5_3096(8608, 520), 3);
    add_background_object(create_thstone3_3090(8608, 392), 3);
    add_background_object(create_thstone3_3090(8608, 328), 3);
    add_background_object(create_thstone3_3090(8608, 264), 3);
    add_background_object(create_thstone3_3090(8608, 200), 3);
    add_background_object(create_thstone4_3086(8640, 64), 3);
    add_background_object(create_thstone6_3095(8640, 128), 3);
    add_background_object(create_thstone3_3090(8608, 136), 3);
    add_background_object(create_thstone4_3086(8640, 0), 3);
    add_background_object(create_thstone2_3092(8576, 680), 3);
    add_background_object(create_thstone1_3091(8576, 1032), 3);
    add_background_object(create_thstone2_3092(8640, 1064), 3);
    add_background_object(create_thstone1_3091(8640, 1032), 3);
    add_background_object(create_thstone11_3085(8704, 1096), 3);
    add_background_object(create_thstone11_3085(8704, 1224), 3);
    add_background_object(create_thstone2_3092(8704, 1064), 3);
    add_background_object(create_thstone1_3091(8704, 1032), 3);
    add_background_object(create_thstone2_3092(8768, 1064), 3);
    add_background_object(create_thstone1_3091(8768, 1032), 3);
    add_background_object(create_thstone11_3085(8576, 840), 3);
    add_background_object(create_thstone11_3085(8704, 840), 3);
    add_background_object(create_thstone4_3086(8544, 904), 3);
    add_background_object(create_thstone4_3086(8544, 840), 3);
    add_background_object(create_thstone11_3085(8480, 8), 3);
    add_background_object(create_thstone3_3090(8608, 72), 3);
    add_background_object(create_thstone3_3090(8608, 8), 3);
    add_background_object(create_thstone11_3085(8352, 392), 3);
    add_background_object(create_thstone1_3091(8352, 520), 3);
    add_background_object(create_thstone1_3091(8416, 520), 3);
    add_background_object(create_thstone11_3085(8352, 264), 3);
    add_background_object(create_thstone11_3085(8352, 136), 3);
    add_background_object(create_thstone11_3085(8352, 8), 3);
    add_background_object(create_thstone8_3098(8992, 160), 3);
    add_background_object(create_thstone7_3097(9024, 160), 3);
    add_background_object(create_thstone3_3090(9024, 320), 3);
    add_background_object(create_thstone4_3086(8992, 320), 3);
    add_background_object(create_thstone6_3095(8992, 384), 3);
    add_background_object(create_thstone5_3096(9024, 384), 3);
    add_background_object(create_thstone3_3090(9024, 256), 3);
    add_background_object(create_thstone4_3086(8992, 256), 3);
    add_background_object(create_thstone3_3090(9024, 192), 3);
    add_background_object(create_thstone4_3086(8992, 192), 3);
    add_background_object(create_thstone8_3098(9184, 424), 3);
    add_background_object(create_thstone7_3097(9216, 424), 3);
    add_background_object(create_thstone3_3090(9216, 584), 3);
    add_background_object(create_thstone4_3086(9184, 584), 3);
    add_background_object(create_thstone6_3095(9184, 648), 3);
    add_background_object(create_thstone5_3096(9216, 648), 3);
    add_background_object(create_thstone3_3090(9216, 520), 3);
    add_background_object(create_thstone4_3086(9184, 520), 3);
    add_background_object(create_thstone3_3090(9216, 456), 3);
    add_background_object(create_thstone4_3086(9184, 456), 3);
    add_background_object(create_thstone7_3097(9216, 680), 3);
    add_background_object(create_thstone5_3096(9216, 712), 3);
    add_background_object(create_thstone1_3091(8960, 712), 3);
    add_background_object(create_thstone1_3091(9024, 712), 3);
    add_background_object(create_thstone1_3091(9088, 712), 3);
    add_background_object(create_thstone1_3091(9152, 712), 3);
    add_background_object(create_thstone2_3092(8832, 1064), 3);
    add_background_object(create_thstone2_3092(8896, 1064), 3);
    add_background_object(create_thstone2_3092(8960, 1064), 3);
    add_background_object(create_thstone2_3092(9024, 1064), 3);
    add_background_object(create_thstone2_3092(9088, 1064), 3);
    add_background_object(create_thstone2_3092(9152, 1064), 3);
    add_background_object(create_thstone11_3085(8832, 1096), 3);
    add_background_object(create_thstone11_3085(8832, 1224), 3);
    add_background_object(create_thstone11_3085(8960, 1096), 3);
    add_background_object(create_thstone11_3085(8960, 1224), 3);
    add_background_object(create_thstone11_3085(9088, 1096), 3);
    add_background_object(create_thstone11_3085(9088, 1224), 3);
    add_background_object(create_thstone2_3092(9216, 1064), 3);
    add_background_object(create_thstone2_3092(9280, 1064), 3);
    add_background_object(create_thstone2_3092(9344, 1064), 3);
    add_background_object(create_thstone2_3092(9408, 1064), 3);
    add_background_object(create_thstone2_3092(9472, 1064), 3);
    add_background_object(create_thstone2_3092(9536, 1064), 3);
    add_background_object(create_thstone11_3085(9216, 1096), 3);
    add_background_object(create_thstone11_3085(9216, 1224), 3);
    add_background_object(create_thstone11_3085(9344, 1096), 3);
    add_background_object(create_thstone11_3085(9344, 1224), 3);
    add_background_object(create_thstone11_3085(9472, 1096), 3);
    add_background_object(create_thstone11_3085(9472, 1224), 3);
    add_background_object(create_rydiagonalpipe2_3089(9248, 456), 3);
    add_background_object(create_rydiagonalpipe2_3089(9440, 648), 3);
    add_background_object(create_rydiagonalpipe2_3089(9504, 712), 3);
    add_background_object(create_thstone3_3090(9376, 64), 3);
    add_background_object(create_thstone5_3096(9376, 128), 3);
    add_background_object(create_thstone3_3090(9376, 0), 3);
    add_background_object(create_thstone4_3086(9408, 64), 3);
    add_background_object(create_thstone6_3095(9408, 384), 3);
    add_background_object(create_thstone4_3086(9408, 0), 3);
    add_background_object(create_thstone4_3086(9408, 192), 3);
    add_background_object(create_thstone4_3086(9408, 128), 3);
    add_background_object(create_thstone4_3086(9408, 320), 3);
    add_background_object(create_thstone4_3086(9408, 256), 3);
    add_background_object(create_thstone8_3098(8928, 680), 3);
    add_background_object(create_thstone7_3097(8832, 680), 3);
    add_background_object(create_thstone6_3095(8928, 712), 3);
    add_background_object(create_thstone3_3090(8832, 840), 3);
    add_background_object(create_thstone3_3090(8832, 776), 3);
    add_background_object(create_thstone3_3090(8832, 712), 3);
    add_background_object(create_thstone3_3090(8832, 968), 3);
    add_background_object(create_thstone3_3090(8832, 904), 3);
    add_background_object(create_thstone5_3096(8832, 1032), 3);
    add_background_object(create_rydiagonalpipe1_3088(9056, 936), 3);
    add_background_object(create_thstone8_3098(9120, 936), 3);
    add_background_object(create_thstone6_3095(9120, 968), 3);
    add_background_object(create_thstone7_3097(9152, 936), 3);
    add_background_object(create_thstone5_3096(9152, 968), 3);
    add_background_object(create_thstone8_3098(9568, 776), 3);
    add_background_object(create_thstone7_3097(9600, 776), 3);
    add_background_object(create_thstone3_3090(9600, 808), 3);
    add_background_object(create_thstone4_3086(9568, 808), 3);
    add_background_object(create_thstone6_3095(9568, 872), 3);
    add_background_object(create_thstone5_3096(9600, 872), 3);
    add_background_object(create_rydiagonalpipe2_3089(9312, 520), 3);
    add_background_object(create_rydiagonalpipe2_3089(9376, 584), 3);
    add_background_object(create_thtire5_3139(9696, 1032), 3);
    add_background_object(create_thstone2_3092(9600, 1064), 3);
    add_background_object(create_thstone2_3092(9664, 1064), 3);
    add_background_object(create_thstone11_3085(9600, 1096), 3);
    add_background_object(create_thstone11_3085(9600, 1224), 3);
    add_background_object(create_thstone2_3092(9728, 1064), 3);
    add_background_object(create_thstone2_3092(9792, 1064), 3);
    add_background_object(create_thstone11_3085(9728, 1096), 3);
    add_background_object(create_thstone11_3085(9728, 1224), 3);
    add_background_object(create_thstone6_3095(9728, 1032), 3);
    add_background_object(create_thstone11_3085(9440, 0), 3);
    add_background_object(create_thstone11_3085(9568, 0), 3);
    add_background_object(create_thstone11_3085(9440, 128), 3);
    add_background_object(create_thstone11_3085(9568, 128), 3);
    add_background_object(create_thstone11_3085(9440, 256), 3);
    add_background_object(create_thstone11_3085(9568, 256), 3);
    add_background_object(create_thstone1_3091(9440, 384), 3);
    add_background_object(create_thstone1_3091(9504, 384), 3);
    add_background_object(create_thstone1_3091(9568, 384), 3);
    add_background_object(create_thstone1_3091(9632, 384), 3);
    add_background_object(create_thstone5_3096(9760, 1032), 3);
    add_background_object(create_thstone4_3086(9728, 968), 3);
    add_background_object(create_thstone3_3090(9760, 968), 3);
    add_background_object(create_thstone7_3097(9760, 936), 3);
    add_background_object(create_thstone8_3098(9728, 936), 3);
    add_background_object(create_thtire1_3136(9792, 968), 3);
    add_background_object(create_thtire1_3136(9792, 936), 3);
    add_background_object(create_thstone2_3092(9856, 1064), 3);
    add_background_object(create_thstone2_3092(9920, 1064), 3);
    add_background_object(create_thstone11_3085(9856, 1096), 3);
    add_background_object(create_thstone11_3085(9856, 1224), 3);
    add_background_object(create_thtire1_3136(9856, 968), 3);
    add_background_object(create_thtire1_3136(9856, 936), 3);
    add_background_object(create_thtire1_3136(9920, 968), 3);
    add_background_object(create_thtire1_3136(9920, 936), 3);
    add_background_object(create_thstone2_3092(9984, 1064), 3);
    add_background_object(create_thstone2_3092(10048, 1064), 3);
    add_background_object(create_thstone11_3085(9984, 1096), 3);
    add_background_object(create_thstone11_3085(9984, 1224), 3);
    add_background_object(create_thstone2_3092(10112, 1064), 3);
    add_background_object(create_thstone2_3092(10176, 1064), 3);
    add_background_object(create_thstone11_3085(10112, 1096), 3);
    add_background_object(create_thstone11_3085(10112, 1224), 3);
    add_background_object(create_thtire1_3136(9984, 968), 3);
    add_background_object(create_thtire1_3136(9984, 936), 3);
    add_background_object(create_thtire1_3136(10048, 968), 3);
    add_background_object(create_thtire1_3136(10048, 936), 3);
    add_background_object(create_thtire1_3136(10112, 968), 3);
    add_background_object(create_thtire1_3136(10112, 936), 3);
    add_background_object(create_thtire1_3136(9856, 904), 3);
    add_background_object(create_thtire1_3136(9920, 904), 3);
    add_background_object(create_thtire1_3136(9920, 872), 3);
    add_background_object(create_thtire1_3136(9920, 840), 3);
    add_background_object(create_thtire1_3136(9984, 904), 3);
    add_background_object(create_thtire1_3136(9984, 872), 3);
    add_background_object(create_thtire1_3136(9984, 840), 3);
    add_background_object(create_thtire1_3136(10048, 904), 3);
    add_background_object(create_thtire1_3136(10048, 872), 3);
    add_background_object(create_thtire1_3136(10048, 840), 3);
    add_background_object(create_thtire1_3136(10112, 904), 3);
    add_background_object(create_thtire1_3136(10112, 872), 3);
    add_background_object(create_thtire1_3136(10112, 840), 3);
    add_background_object(create_thstone6_3095(9792, 1032), 3);
    add_background_object(create_thstone8_3098(9792, 1000), 3);
    add_background_object(create_thstone2_3092(9824, 1000), 3);
    add_background_object(create_thstone1_3091(9824, 1032), 3);
    add_background_object(create_thstone2_3092(9888, 1000), 3);
    add_background_object(create_thstone1_3091(9888, 1032), 3);
    add_background_object(create_thstone2_3092(9952, 1000), 3);
    add_background_object(create_thstone1_3091(9952, 1032), 3);
    add_background_object(create_thstone2_3092(10016, 1000), 3);
    add_background_object(create_thstone1_3091(10016, 1032), 3);
    add_background_object(create_thstone2_3092(10080, 1000), 3);
    add_background_object(create_thstone1_3091(10080, 1032), 3);
    add_background_object(create_thstone2_3092(10144, 1000), 3);
    add_background_object(create_thstone1_3091(10144, 1032), 3);
    add_background_object(create_thstone7_3097(10208, 1000), 3);
    add_background_object(create_thstone5_3096(10208, 1032), 3);
    add_background_object(create_thtire1_3136(10176, 968), 3);
    add_background_object(create_thtire1_3136(10176, 936), 3);
    add_background_object(create_thtire1_3136(10176, 904), 3);
    add_background_object(create_thtire1_3136(10176, 872), 3);
    add_background_object(create_thtire1_3136(10176, 840), 3);
    add_background_object(create_thtire1_3136(10176, 808), 3);
    add_background_object(create_thtire1_3136(10176, 776), 3);
    add_background_object(create_thtire1_3136(10176, 744), 3);
    add_background_object(create_thstone5_3096(9696, 384), 3);
    add_background_object(create_thstone3_3090(9696, 320), 3);
    add_background_object(create_thstone3_3090(9696, 256), 3);
    add_background_object(create_thstone3_3090(9696, 192), 3);
    add_background_object(create_thstone3_3090(9696, 128), 3);
    add_background_object(create_thstone3_3090(9696, 64), 3);
    add_background_object(create_thstone3_3090(9696, 0), 3);
    add_background_object(create_thstone4_3086(9728, 64), 3);
    add_background_object(create_thstone6_3095(9728, 384), 3);
    add_background_object(create_thstone4_3086(9728, 0), 3);
    add_background_object(create_thstone4_3086(9728, 192), 3);
    add_background_object(create_thstone4_3086(9728, 128), 3);
    add_background_object(create_thstone4_3086(9728, 320), 3);
    add_background_object(create_thstone4_3086(9728, 256), 3);
    add_background_object(create_thstone5_3096(9760, 384), 3);
    add_background_object(create_thstone3_3090(9760, 320), 3);
    add_background_object(create_thstone3_3090(9760, 256), 3);
    add_background_object(create_thstone3_3090(9760, 192), 3);
    add_background_object(create_thstone3_3090(9760, 128), 3);
    add_background_object(create_thstone3_3090(9760, 64), 3);
    add_background_object(create_thstone3_3090(9760, 0), 3);
    add_background_object(create_thwood4_3145(9248, 728), 3);
    add_background_object(create_thwood5_3144(9328, 728), 3);
    add_background_object(create_thwood6_3143(9264, 728), 3);
    add_background_object(create_thstone2_3092(10240, 1064), 3);
    add_background_object(create_thstone2_3092(10304, 1064), 3);
    add_background_object(create_thstone11_3085(10240, 1096), 3);
    add_background_object(create_thstone11_3085(10240, 1224), 3);
    add_background_object(create_thstone2_3092(10368, 1064), 3);
    add_background_object(create_thstone2_3092(10432, 1064), 3);
    add_background_object(create_thstone11_3085(10368, 1096), 3);
    add_background_object(create_thstone11_3085(10368, 1224), 3);
    add_background_object(create_thstone6_3095(10240, 1032), 3);
    add_background_object(create_thstone5_3096(10272, 1032), 3);
    add_background_object(create_thstone4_3086(10240, 776), 3);
    add_background_object(create_thstone3_3090(10272, 776), 3);
    add_background_object(create_thstone7_3097(10272, 744), 3);
    add_background_object(create_thstone8_3098(10240, 744), 3);
    add_background_object(create_thstone4_3086(10240, 840), 3);
    add_background_object(create_thstone3_3090(10272, 840), 3);
    add_background_object(create_thstone4_3086(10240, 904), 3);
    add_background_object(create_thstone3_3090(10272, 904), 3);
    add_background_object(create_thstone4_3086(10240, 968), 3);
    add_background_object(create_thstone3_3090(10272, 968), 3);
    add_background_object(create_thstone6_3095(10304, 1032), 3);
    add_background_object(create_thstone5_3096(10336, 1032), 3);
    add_background_object(create_thstone7_3097(10336, 808), 3);
    add_background_object(create_thstone8_3098(10304, 808), 3);
    add_background_object(create_thstone4_3086(10304, 840), 3);
    add_background_object(create_thstone3_3090(10336, 840), 3);
    add_background_object(create_thstone4_3086(10304, 904), 3);
    add_background_object(create_thstone3_3090(10336, 904), 3);
    add_background_object(create_thstone4_3086(10304, 968), 3);
    add_background_object(create_thstone3_3090(10336, 968), 3);
    add_background_object(create_thstone6_3095(10368, 1032), 3);
    add_background_object(create_thstone5_3096(10400, 1032), 3);
    add_background_object(create_thstone4_3086(10368, 776), 3);
    add_background_object(create_thstone3_3090(10400, 776), 3);
    add_background_object(create_thstone7_3097(10400, 744), 3);
    add_background_object(create_thstone8_3098(10368, 744), 3);
    add_background_object(create_thstone4_3086(10368, 840), 3);
    add_background_object(create_thstone3_3090(10400, 840), 3);
    add_background_object(create_thstone4_3086(10368, 904), 3);
    add_background_object(create_thstone3_3090(10400, 904), 3);
    add_background_object(create_thstone4_3086(10368, 968), 3);
    add_background_object(create_thstone3_3090(10400, 968), 3);
    add_background_object(create_thstone6_3095(10432, 1032), 3);
    add_background_object(create_thstone5_3096(10464, 1032), 3);
    add_background_object(create_thstone7_3097(10464, 808), 3);
    add_background_object(create_thstone8_3098(10432, 808), 3);
    add_background_object(create_thstone4_3086(10432, 840), 3);
    add_background_object(create_thstone3_3090(10464, 840), 3);
    add_background_object(create_thstone4_3086(10432, 904), 3);
    add_background_object(create_thstone3_3090(10464, 904), 3);
    add_background_object(create_thstone4_3086(10432, 968), 3);
    add_background_object(create_thstone3_3090(10464, 968), 3);
    add_background_object(create_thstone2_3092(10496, 1064), 3);
    add_background_object(create_thstone2_3092(10560, 1064), 3);
    add_background_object(create_thstone11_3085(10496, 1096), 3);
    add_background_object(create_thstone11_3085(10496, 1224), 3);
    add_background_object(create_thstone2_3092(10624, 1064), 3);
    add_background_object(create_thstone2_3092(10688, 1064), 3);
    add_background_object(create_thstone11_3085(10624, 1096), 3);
    add_background_object(create_thstone11_3085(10624, 1224), 3);
    add_background_object(create_thstone6_3095(10496, 1032), 3);
    add_background_object(create_thstone5_3096(10528, 1032), 3);
    add_background_object(create_thstone4_3086(10496, 776), 3);
    add_background_object(create_thstone3_3090(10528, 776), 3);
    add_background_object(create_thstone7_3097(10528, 744), 3);
    add_background_object(create_thstone8_3098(10496, 744), 3);
    add_background_object(create_thstone4_3086(10496, 840), 3);
    add_background_object(create_thstone3_3090(10528, 840), 3);
    add_background_object(create_thstone4_3086(10496, 904), 3);
    add_background_object(create_thstone3_3090(10528, 904), 3);
    add_background_object(create_thstone4_3086(10496, 968), 3);
    add_background_object(create_thstone3_3090(10528, 968), 3);
    add_background_object(create_thstone6_3095(10560, 1032), 3);
    add_background_object(create_thstone5_3096(10592, 1032), 3);
    add_background_object(create_thstone7_3097(10592, 808), 3);
    add_background_object(create_thstone8_3098(10560, 808), 3);
    add_background_object(create_thstone4_3086(10560, 840), 3);
    add_background_object(create_thstone3_3090(10592, 840), 3);
    add_background_object(create_thstone4_3086(10560, 904), 3);
    add_background_object(create_thstone3_3090(10592, 904), 3);
    add_background_object(create_thstone4_3086(10560, 968), 3);
    add_background_object(create_thstone3_3090(10592, 968), 3);
    add_background_object(create_thstone6_3095(10624, 1032), 3);
    add_background_object(create_thstone5_3096(10656, 1032), 3);
    add_background_object(create_thstone4_3086(10624, 776), 3);
    add_background_object(create_thstone3_3090(10656, 776), 3);
    add_background_object(create_thstone7_3097(10656, 744), 3);
    add_background_object(create_thstone8_3098(10624, 744), 3);
    add_background_object(create_thstone4_3086(10624, 840), 3);
    add_background_object(create_thstone3_3090(10656, 840), 3);
    add_background_object(create_thstone4_3086(10624, 904), 3);
    add_background_object(create_thstone3_3090(10656, 904), 3);
    add_background_object(create_thstone4_3086(10624, 968), 3);
    add_background_object(create_thstone3_3090(10656, 968), 3);
    add_background_object(create_thstone6_3095(10688, 1032), 3);
    add_background_object(create_thstone5_3096(10720, 1032), 3);
    add_background_object(create_thstone7_3097(10720, 808), 3);
    add_background_object(create_thstone8_3098(10688, 808), 3);
    add_background_object(create_thstone4_3086(10688, 840), 3);
    add_background_object(create_thstone3_3090(10720, 840), 3);
    add_background_object(create_thstone4_3086(10688, 904), 3);
    add_background_object(create_thstone3_3090(10720, 904), 3);
    add_background_object(create_thstone4_3086(10688, 968), 3);
    add_background_object(create_thstone3_3090(10720, 968), 3);
    add_background_object(create_thstone2_3092(10752, 1064), 3);
    add_background_object(create_thstone2_3092(10816, 1064), 3);
    add_background_object(create_thstone11_3085(10752, 1096), 3);
    add_background_object(create_thstone11_3085(10752, 1224), 3);
    add_background_object(create_thstone2_3092(10880, 1064), 3);
    add_background_object(create_thstone2_3092(10944, 1064), 3);
    add_background_object(create_thstone11_3085(10880, 1096), 3);
    add_background_object(create_thstone11_3085(10880, 1224), 3);
    add_background_object(create_thstone6_3095(10752, 1032), 3);
    add_background_object(create_thstone5_3096(10784, 1032), 3);
    add_background_object(create_thstone4_3086(10752, 776), 3);
    add_background_object(create_thstone3_3090(10784, 776), 3);
    add_background_object(create_thstone7_3097(10784, 744), 3);
    add_background_object(create_thstone8_3098(10752, 744), 3);
    add_background_object(create_thstone4_3086(10752, 840), 3);
    add_background_object(create_thstone3_3090(10784, 840), 3);
    add_background_object(create_thstone4_3086(10752, 904), 3);
    add_background_object(create_thstone3_3090(10784, 904), 3);
    add_background_object(create_thstone4_3086(10752, 968), 3);
    add_background_object(create_thstone3_3090(10784, 968), 3);
    add_background_object(create_thstone6_3095(10816, 1032), 3);
    add_background_object(create_thstone5_3096(10848, 1032), 3);
    add_background_object(create_thstone7_3097(10848, 808), 3);
    add_background_object(create_thstone8_3098(10816, 808), 3);
    add_background_object(create_thstone4_3086(10816, 840), 3);
    add_background_object(create_thstone3_3090(10848, 840), 3);
    add_background_object(create_thstone4_3086(10816, 904), 3);
    add_background_object(create_thstone3_3090(10848, 904), 3);
    add_background_object(create_thstone4_3086(10816, 968), 3);
    add_background_object(create_thstone3_3090(10848, 968), 3);
    add_background_object(create_thstone6_3095(10880, 1032), 3);
    add_background_object(create_thstone5_3096(10912, 1032), 3);
    add_background_object(create_thstone4_3086(10880, 776), 3);
    add_background_object(create_thstone3_3090(10912, 776), 3);
    add_background_object(create_thstone7_3097(10912, 744), 3);
    add_background_object(create_thstone8_3098(10880, 744), 3);
    add_background_object(create_thstone4_3086(10880, 840), 3);
    add_background_object(create_thstone3_3090(10912, 840), 3);
    add_background_object(create_thstone4_3086(10880, 904), 3);
    add_background_object(create_thstone3_3090(10912, 904), 3);
    add_background_object(create_thstone4_3086(10880, 968), 3);
    add_background_object(create_thstone3_3090(10912, 968), 3);
    add_background_object(create_thstone6_3095(10944, 1032), 3);
    add_background_object(create_thstone5_3096(10976, 1032), 3);
    add_background_object(create_thstone7_3097(10976, 808), 3);
    add_background_object(create_thstone8_3098(10944, 808), 3);
    add_background_object(create_thstone4_3086(10944, 840), 3);
    add_background_object(create_thstone3_3090(10976, 840), 3);
    add_background_object(create_thstone4_3086(10944, 904), 3);
    add_background_object(create_thstone3_3090(10976, 904), 3);
    add_background_object(create_thstone4_3086(10944, 968), 3);
    add_background_object(create_thstone3_3090(10976, 968), 3);
    add_background_object(create_thwood3_3137(10320, 568), 3);
    add_background_object(create_thwood3_3137(10448, 568), 3);
    add_background_object(create_thwood4_3145(10304, 568), 3);
    add_background_object(create_thwood5_3144(10640, 568), 3);
    add_background_object(create_thwood6_3143(10576, 568), 3);
    add_background_object(create_thstone2_3092(11008, 1064), 3);
    add_background_object(create_thstone2_3092(11072, 1064), 3);
    add_background_object(create_thstone11_3085(11008, 1096), 3);
    add_background_object(create_thstone11_3085(11008, 1224), 3);
    add_background_object(create_thstone6_3095(11008, 1032), 3);
    add_background_object(create_thstone5_3096(11040, 1032), 3);
    add_background_object(create_thstone4_3086(11008, 776), 3);
    add_background_object(create_thstone3_3090(11040, 776), 3);
    add_background_object(create_thstone7_3097(11040, 744), 3);
    add_background_object(create_thstone8_3098(11008, 744), 3);
    add_background_object(create_thstone4_3086(11008, 840), 3);
    add_background_object(create_thstone3_3090(11040, 840), 3);
    add_background_object(create_thstone4_3086(11008, 904), 3);
    add_background_object(create_thstone3_3090(11040, 904), 3);
    add_background_object(create_thstone4_3086(11008, 968), 3);
    add_background_object(create_thstone3_3090(11040, 968), 3);
    add_background_object(create_thstone6_3095(11072, 1032), 3);
    add_background_object(create_thstone5_3096(11104, 1032), 3);
    add_background_object(create_thstone7_3097(11104, 808), 3);
    add_background_object(create_thstone8_3098(11072, 808), 3);
    add_background_object(create_thstone4_3086(11072, 840), 3);
    add_background_object(create_thstone3_3090(11104, 840), 3);
    add_background_object(create_thstone4_3086(11072, 904), 3);
    add_background_object(create_thstone3_3090(11104, 904), 3);
    add_background_object(create_thstone4_3086(11072, 968), 3);
    add_background_object(create_thstone3_3090(11104, 968), 3);
    add_background_object(create_thwood2_3134(10848, 536), 3);
    add_background_object(create_thwood4_3145(10832, 568), 3);
    add_background_object(create_thwood4_3145(10832, 536), 3);
    add_background_object(create_thwood5_3144(10976, 568), 3);
    add_background_object(create_thwood5_3144(10976, 536), 3);
    add_background_object(create_thwood2_3134(10848, 488), 3);
    add_background_object(create_thwood2_3134(10848, 440), 3);
    add_background_object(create_thwood4_3145(10832, 504), 3);
    add_background_object(create_thwood4_3145(10832, 472), 3);
    add_background_object(create_thwood4_3145(10832, 440), 3);
    add_background_object(create_thwood5_3144(10976, 504), 3);
    add_background_object(create_thwood5_3144(10976, 472), 3);
    add_background_object(create_thwood5_3144(10976, 440), 3);
    add_background_object(create_thwood2_3134(10848, 392), 3);
    add_background_object(create_thwood2_3134(10848, 344), 3);
    add_background_object(create_thwood4_3145(10832, 408), 3);
    add_background_object(create_thwood4_3145(10832, 376), 3);
    add_background_object(create_thwood4_3145(10832, 344), 3);
    add_background_object(create_thwood5_3144(10976, 408), 3);
    add_background_object(create_thwood5_3144(10976, 376), 3);
    add_background_object(create_thwood5_3144(10976, 344), 3);
    add_background_object(create_thwood3_3137(11104, 568), 3);
    add_background_object(create_thwood2_3134(11104, 536), 3);
    add_background_object(create_thwood4_3145(11088, 568), 3);
    add_background_object(create_thwood4_3145(11088, 536), 3);
    add_background_object(create_thwood5_3144(11232, 568), 3);
    add_background_object(create_thwood5_3144(11232, 536), 3);
    add_background_object(create_thwood2_3134(11104, 488), 3);
    add_background_object(create_thwood2_3134(11104, 440), 3);
    add_background_object(create_thwood4_3145(11088, 504), 3);
    add_background_object(create_thwood4_3145(11088, 472), 3);
    add_background_object(create_thwood4_3145(11088, 440), 3);
    add_background_object(create_thwood5_3144(11232, 504), 3);
    add_background_object(create_thwood5_3144(11232, 472), 3);
    add_background_object(create_thwood5_3144(11232, 440), 3);
    add_background_object(create_thwood2_3134(11104, 392), 3);
    add_background_object(create_thwood2_3134(11104, 344), 3);
    add_background_object(create_thwood4_3145(11088, 408), 3);
    add_background_object(create_thwood4_3145(11088, 376), 3);
    add_background_object(create_thwood4_3145(11088, 344), 3);
    add_background_object(create_thwood5_3144(11232, 408), 3);
    add_background_object(create_thwood5_3144(11232, 376), 3);
    add_background_object(create_thwood5_3144(11232, 344), 3);
    add_background_object(create_thwood2_3134(11104, 296), 3);
    add_background_object(create_thwood2_3134(11104, 248), 3);
    add_background_object(create_thwood4_3145(11088, 312), 3);
    add_background_object(create_thwood4_3145(11088, 280), 3);
    add_background_object(create_thwood4_3145(11088, 248), 3);
    add_background_object(create_thwood5_3144(11232, 312), 3);
    add_background_object(create_thwood5_3144(11232, 280), 3);
    add_background_object(create_thwood5_3144(11232, 248), 3);
    add_background_object(create_thwood2_3134(11104, 200), 3);
    add_background_object(create_thwood2_3134(11104, 152), 3);
    add_background_object(create_thwood4_3145(11088, 216), 3);
    add_background_object(create_thwood4_3145(11088, 184), 3);
    add_background_object(create_thwood4_3145(11088, 152), 3);
    add_background_object(create_thwood5_3144(11232, 216), 3);
    add_background_object(create_thwood5_3144(11232, 184), 3);
    add_background_object(create_thwood5_3144(11232, 152), 3);
    add_background_object(create_thwood2_3134(11104, 104), 3);
    add_background_object(create_thwood2_3134(11104, 56), 3);
    add_background_object(create_thwood4_3145(11088, 120), 3);
    add_background_object(create_thwood4_3145(11088, 88), 3);
    add_background_object(create_thwood4_3145(11088, 56), 3);
    add_background_object(create_thwood5_3144(11232, 120), 3);
    add_background_object(create_thwood5_3144(11232, 88), 3);
    add_background_object(create_thwood5_3144(11232, 56), 3);
    add_background_object(create_thstone2_3092(11136, 1064), 3);
    add_background_object(create_thstone2_3092(11200, 1064), 3);
    add_background_object(create_thstone11_3085(11136, 1096), 3);
    add_background_object(create_thstone11_3085(11136, 1224), 3);
    add_background_object(create_thstone2_3092(11264, 1064), 3);
    add_background_object(create_thstone2_3092(11328, 1064), 3);
    add_background_object(create_thstone11_3085(11264, 1096), 3);
    add_background_object(create_thstone11_3085(11264, 1224), 3);
    add_background_object(create_thstone6_3095(11136, 1032), 3);
    add_background_object(create_thstone5_3096(11232, 1032), 3);
    add_background_object(create_thstone4_3086(11136, 776), 3);
    add_background_object(create_thstone3_3090(11232, 776), 3);
    add_background_object(create_thstone7_3097(11232, 744), 3);
    add_background_object(create_thstone8_3098(11136, 744), 3);
    add_background_object(create_thstone4_3086(11136, 840), 3);
    add_background_object(create_thstone3_3090(11232, 840), 3);
    add_background_object(create_thstone4_3086(11136, 904), 3);
    add_background_object(create_thstone3_3090(11232, 904), 3);
    add_background_object(create_thstone4_3086(11136, 968), 3);
    add_background_object(create_thstone3_3090(11232, 968), 3);
    add_background_object(create_thstone2_3092(11168, 744), 3);
    add_background_object(create_thstone1_3091(11168, 1032), 3);
    add_background_object(create_thstone6_3095(11264, 1032), 3);
    add_background_object(create_thstone5_3096(11296, 1032), 3);
    add_background_object(create_thstone7_3097(11296, 808), 3);
    add_background_object(create_thstone8_3098(11264, 808), 3);
    add_background_object(create_thstone4_3086(11264, 840), 3);
    add_background_object(create_thstone3_3090(11296, 840), 3);
    add_background_object(create_thstone4_3086(11264, 904), 3);
    add_background_object(create_thstone3_3090(11296, 904), 3);
    add_background_object(create_thstone4_3086(11264, 968), 3);
    add_background_object(create_thstone3_3090(11296, 968), 3);
    add_background_object(create_thstone6_3095(11328, 1032), 3);
    add_background_object(create_thstone5_3096(11360, 1032), 3);
    add_background_object(create_thstone4_3086(11328, 776), 3);
    add_background_object(create_thstone3_3090(11360, 776), 3);
    add_background_object(create_thstone7_3097(11360, 744), 3);
    add_background_object(create_thstone8_3098(11328, 744), 3);
    add_background_object(create_thstone4_3086(11328, 840), 3);
    add_background_object(create_thstone3_3090(11360, 840), 3);
    add_background_object(create_thstone4_3086(11328, 904), 3);
    add_background_object(create_thstone3_3090(11360, 904), 3);
    add_background_object(create_thstone4_3086(11328, 968), 3);
    add_background_object(create_thstone3_3090(11360, 968), 3);
    add_background_object(create_thstone6_3095(11392, 1032), 3);
    add_background_object(create_thstone5_3096(11424, 1032), 3);
    add_background_object(create_thstone7_3097(11424, 808), 3);
    add_background_object(create_thstone8_3098(11392, 808), 3);
    add_background_object(create_thstone4_3086(11392, 840), 3);
    add_background_object(create_thstone3_3090(11424, 840), 3);
    add_background_object(create_thstone4_3086(11392, 904), 3);
    add_background_object(create_thstone3_3090(11424, 904), 3);
    add_background_object(create_thstone4_3086(11392, 968), 3);
    add_background_object(create_thstone3_3090(11424, 968), 3);
    add_background_object(create_thstone2_3092(11392, 1064), 3);
    add_background_object(create_thstone2_3092(11456, 1064), 3);
    add_background_object(create_thstone11_3085(11392, 1096), 3);
    add_background_object(create_thstone11_3085(11392, 1224), 3);
    add_background_object(create_thstone2_3092(11520, 1064), 3);
    add_background_object(create_thstone2_3092(11584, 1064), 3);
    add_background_object(create_thstone11_3085(11520, 1096), 3);
    add_background_object(create_thstone11_3085(11520, 1224), 3);
    add_background_object(create_thstone11_3085(11456, 648), 3);
    add_background_object(create_thstone11_3085(11456, 904), 3);
    add_background_object(create_thstone6_3095(11456, 1032), 3);
    add_background_object(create_thstone5_3096(11552, 1032), 3);
    add_background_object(create_thstone4_3086(11456, 648), 3);
    add_background_object(create_thstone3_3090(11552, 648), 3);
    add_background_object(create_thstone7_3097(11552, 616), 3);
    add_background_object(create_thstone8_3098(11456, 616), 3);
    add_background_object(create_thstone4_3086(11456, 712), 3);
    add_background_object(create_thstone3_3090(11552, 712), 3);
    add_background_object(create_thstone4_3086(11456, 904), 3);
    add_background_object(create_thstone3_3090(11552, 904), 3);
    add_background_object(create_thstone4_3086(11456, 968), 3);
    add_background_object(create_thstone3_3090(11552, 968), 3);
    add_background_object(create_thstone2_3092(11488, 616), 3);
    add_background_object(create_thstone1_3091(11488, 1032), 3);
    add_background_object(create_thstone11_3085(11456, 776), 3);
    add_background_object(create_thstone4_3086(11456, 776), 3);
    add_background_object(create_thstone3_3090(11552, 776), 3);
    add_background_object(create_thstone4_3086(11456, 840), 3);
    add_background_object(create_thstone3_3090(11552, 840), 3);
    add_background_object(create_thstone11_3085(11584, 392), 3);
    add_background_object(create_thstone11_3085(11584, 904), 3);
    add_background_object(create_thstone6_3095(11584, 1032), 3);
    add_background_object(create_thstone5_3096(11680, 1032), 3);
    add_background_object(create_thstone4_3086(11584, 392), 3);
    add_background_object(create_thstone3_3090(11680, 392), 3);
    add_background_object(create_thstone7_3097(11680, 360), 3);
    add_background_object(create_thstone8_3098(11584, 360), 3);
    add_background_object(create_thstone4_3086(11584, 456), 3);
    add_background_object(create_thstone3_3090(11680, 456), 3);
    add_background_object(create_thstone4_3086(11584, 904), 3);
    add_background_object(create_thstone3_3090(11680, 904), 3);
    add_background_object(create_thstone4_3086(11584, 968), 3);
    add_background_object(create_thstone3_3090(11680, 968), 3);
    add_background_object(create_thstone2_3092(11616, 360), 3);
    add_background_object(create_thstone1_3091(11616, 1032), 3);
    add_background_object(create_thstone11_3085(11584, 520), 3);
    add_background_object(create_thstone4_3086(11584, 520), 3);
    add_background_object(create_thstone3_3090(11680, 520), 3);
    add_background_object(create_thstone4_3086(11584, 584), 3);
    add_background_object(create_thstone3_3090(11680, 584), 3);
    add_background_object(create_thstone11_3085(11584, 648), 3);
    add_background_object(create_thstone4_3086(11584, 648), 3);
    add_background_object(create_thstone3_3090(11680, 648), 3);
    add_background_object(create_thstone4_3086(11584, 712), 3);
    add_background_object(create_thstone3_3090(11680, 712), 3);
    add_background_object(create_thstone11_3085(11584, 776), 3);
    add_background_object(create_thstone4_3086(11584, 776), 3);
    add_background_object(create_thstone3_3090(11680, 776), 3);
    add_background_object(create_thstone4_3086(11584, 840), 3);
    add_background_object(create_thstone3_3090(11680, 840), 3);
    add_background_object(create_thwood3_3137(11440, 408), 3);
    add_background_object(create_thwood2_3134(11440, 376), 3);
    add_background_object(create_thwood4_3145(11424, 408), 3);
    add_background_object(create_thwood4_3145(11424, 376), 3);
    add_background_object(create_thwood5_3144(11568, 408), 3);
    add_background_object(create_thwood5_3144(11568, 376), 3);
    add_background_object(create_thwood2_3134(11440, 328), 3);
    add_background_object(create_thwood2_3134(11440, 280), 3);
    add_background_object(create_thwood4_3145(11424, 344), 3);
    add_background_object(create_thwood4_3145(11424, 312), 3);
    add_background_object(create_thwood4_3145(11424, 280), 3);
    add_background_object(create_thwood5_3144(11568, 344), 3);
    add_background_object(create_thwood5_3144(11568, 312), 3);
    add_background_object(create_thwood5_3144(11568, 280), 3);
    add_background_object(create_thwood2_3134(11440, 232), 3);
    add_background_object(create_thwood4_3145(11424, 248), 3);
    add_background_object(create_thwood5_3144(11568, 248), 3);
    add_background_object(create_thwood2_3134(11440, 184), 3);
    add_background_object(create_thwood4_3145(11424, 216), 3);
    add_background_object(create_thwood4_3145(11424, 184), 3);
    add_background_object(create_thwood5_3144(11568, 216), 3);
    add_background_object(create_thwood5_3144(11568, 184), 3);
    add_background_object(create_thstone7_3097(11784, 392), 3);
    add_background_object(create_thstone8_3098(11752, 392), 3);
    add_background_object(create_thstone4_3086(11752, 424), 3);
    add_background_object(create_thstone3_3090(11784, 424), 3);
    add_background_object(create_thstone5_3096(11784, 456), 3);
    add_background_object(create_thstone6_3095(11752, 456), 3);
    add_background_object(create_thstone2_3092(11648, 1064), 3);
    add_background_object(create_thstone2_3092(11712, 1064), 3);
    add_background_object(create_thstone11_3085(11648, 1096), 3);
    add_background_object(create_thstone11_3085(11648, 1224), 3);
    add_background_object(create_thstone2_3092(11776, 1064), 3);
    add_background_object(create_thstone2_3092(11840, 1064), 3);
    add_background_object(create_thstone11_3085(11776, 1096), 3);
    add_background_object(create_thstone11_3085(11776, 1224), 3);
    add_background_object(create_thstone2_3092(11904, 1064), 3);
    add_background_object(create_thstone2_3092(11968, 1064), 3);
    add_background_object(create_thstone11_3085(11904, 1096), 3);
    add_background_object(create_thstone11_3085(11904, 1224), 3);
    add_background_object(create_thstone2_3092(12032, 1064), 3);
    add_background_object(create_thstone2_3092(12096, 1064), 3);
    add_background_object(create_thstone11_3085(12032, 1096), 3);
    add_background_object(create_thstone11_3085(12032, 1224), 3);
    add_background_object(create_thstone2_3092(12160, 1064), 3);
    add_background_object(create_thstone2_3092(12224, 1064), 3);
    add_background_object(create_thstone11_3085(12160, 1096), 3);
    add_background_object(create_thstone11_3085(12160, 1224), 3);
    add_background_object(create_thstone2_3092(12288, 1064), 3);
    add_background_object(create_thstone2_3092(12352, 1064), 3);
    add_background_object(create_thstone11_3085(12288, 1096), 3);
    add_background_object(create_thstone11_3085(12288, 1224), 3);
    add_background_object(create_thstone2_3092(12416, 1064), 3);
    add_background_object(create_thstone2_3092(12480, 1064), 3);
    add_background_object(create_thstone11_3085(12416, 1096), 3);
    add_background_object(create_thstone11_3085(12416, 1224), 3);
    add_background_object(create_thstone2_3092(12544, 1064), 3);
    add_background_object(create_thstone2_3092(12608, 1064), 3);
    add_background_object(create_thstone11_3085(12544, 1096), 3);
    add_background_object(create_thstone11_3085(12544, 1224), 3);
    add_background_object(create_thstone2_3092(12672, 1064), 3);
    add_background_object(create_thstone2_3092(12736, 1064), 3);
    add_background_object(create_thstone11_3085(12672, 1096), 3);
    add_background_object(create_thstone11_3085(12672, 1224), 3);
    add_background_object(create_thstone6_3095(11712, 1032), 3);
    add_background_object(create_thstone4_3086(11712, 904), 3);
    add_background_object(create_thstone4_3086(11712, 968), 3);
    add_background_object(create_thstone1_3091(11744, 1032), 3);
    add_background_object(create_thstone4_3086(11712, 840), 3);
    add_background_object(create_thstone4_3086(11712, 776), 3);
    add_background_object(create_thstone11_3085(11744, 904), 3);
    add_background_object(create_thstone11_3085(11744, 776), 3);
    add_background_object(create_thstone8_3098(11712, 744), 3);
    add_background_object(create_thstone2_3092(11744, 744), 3);
    add_background_object(create_thstone1_3091(11808, 1032), 3);
    add_background_object(create_thstone2_3092(11808, 744), 3);
    add_background_object(create_thstone1_3091(11872, 1032), 3);
    add_background_object(create_thstone11_3085(11872, 904), 3);
    add_background_object(create_thstone11_3085(11872, 776), 3);
    add_background_object(create_thstone2_3092(11872, 744), 3);
    add_background_object(create_thstone1_3091(11936, 1032), 3);
    add_background_object(create_thstone2_3092(11936, 744), 3);
    add_background_object(create_thstone1_3091(12000, 1032), 3);
    add_background_object(create_thstone11_3085(12000, 904), 3);
    add_background_object(create_thstone11_3085(12000, 776), 3);
    add_background_object(create_thstone2_3092(12000, 744), 3);
    add_background_object(create_thstone1_3091(12064, 1032), 3);
    add_background_object(create_thstone2_3092(12064, 744), 3);
    add_background_object(create_thstone1_3091(12128, 1032), 3);
    add_background_object(create_thstone11_3085(12128, 904), 3);
    add_background_object(create_thstone11_3085(12128, 776), 3);
    add_background_object(create_thstone2_3092(12128, 744), 3);
    add_background_object(create_thstone1_3091(12192, 1032), 3);
    add_background_object(create_thstone2_3092(12192, 744), 3);
    add_background_object(create_thstone1_3091(12256, 1032), 3);
    add_background_object(create_thstone11_3085(12256, 904), 3);
    add_background_object(create_thstone11_3085(12256, 776), 3);
    add_background_object(create_thstone2_3092(12256, 744), 3);
    add_background_object(create_thstone1_3091(12320, 1032), 3);
    add_background_object(create_thstone2_3092(12320, 744), 3);
    add_background_object(create_thstone1_3091(12384, 1032), 3);
    add_background_object(create_thstone11_3085(12384, 904), 3);
    add_background_object(create_thstone11_3085(12384, 776), 3);
    add_background_object(create_thstone2_3092(12384, 744), 3);
    add_background_object(create_thstone1_3091(12448, 1032), 3);
    add_background_object(create_thstone2_3092(12448, 744), 3);
    add_background_object(create_thstone1_3091(12512, 1032), 3);
    add_background_object(create_thstone11_3085(12512, 904), 3);
    add_background_object(create_thstone11_3085(12512, 776), 3);
    add_background_object(create_thstone2_3092(12512, 744), 3);
    add_background_object(create_thstone1_3091(12576, 1032), 3);
    add_background_object(create_thstone2_3092(12576, 744), 3);
    add_background_object(create_thstone1_3091(12640, 1032), 3);
    add_background_object(create_thstone11_3085(12640, 904), 3);
    add_background_object(create_thstone11_3085(12640, 776), 3);
    add_background_object(create_thstone2_3092(12640, 744), 3);
    add_background_object(create_thstone1_3091(12704, 1032), 3);
    add_background_object(create_thstone2_3092(12704, 744), 3);
    add_background_object(create_thstone1_3091(12768, 1032), 3);
    add_background_object(create_thstone11_3085(12768, 904), 3);
    add_background_object(create_thstone11_3085(12768, 776), 3);
    add_background_object(create_thstone2_3092(12768, 744), 3);
    add_background_object(create_thstone1_3091(12832, 1032), 3);
    add_background_object(create_thstone2_3092(12832, 744), 3);
    add_background_object(create_thstone6_3095(12584, 392), 3);
    add_background_object(create_thstone1_3091(12616, 392), 3);
    add_background_object(create_thstone1_3091(12680, 392), 3);
    add_background_object(create_thstone11_3085(12616, 264), 3);
    add_background_object(create_thstone4_3086(12584, 328), 3);
    add_background_object(create_thstone4_3086(12584, 264), 3);
    add_background_object(create_thstone4_3086(12784, 456), 3);
    add_background_object(create_thstone8_3098(12784, 424), 3);
    add_background_object(create_thstone4_3086(12784, 584), 3);
    add_background_object(create_thstone4_3086(12784, 648), 3);
    add_background_object(create_thstone6_3095(12784, 712), 3);
    add_background_object(create_thstone4_3086(12784, 520), 3);
    add_background_object(create_thstone8_3098(12584, 232), 3);
    add_background_object(create_thstone2_3092(12616, 232), 3);
    add_background_object(create_thstone2_3092(12680, 232), 3);
    add_background_object(create_thstone6_3095(12456, 200), 3);
    add_background_object(create_thstone1_3091(12488, 200), 3);
    add_background_object(create_thstone1_3091(12552, 200), 3);
    add_background_object(create_thstone11_3085(12488, 72), 3);
    add_background_object(create_thstone4_3086(12456, 136), 3);
    add_background_object(create_thstone4_3086(12456, 72), 3);
    add_background_object(create_thstone8_3098(12456, 40), 3);
    add_background_object(create_thstone2_3092(12488, 40), 3);
    add_background_object(create_thstone2_3092(12552, 40), 3);
    add_background_object(create_thstone1_3091(12616, 200), 3);
    add_background_object(create_thstone1_3091(12680, 200), 3);
    add_background_object(create_thstone11_3085(12616, 72), 3);
    add_background_object(create_thstone2_3092(12616, 40), 3);
    add_background_object(create_thstone2_3092(12680, 40), 3);
    add_background_object(create_thstone6_3095(12400, 8), 3);
    add_background_object(create_thstone1_3091(12432, 8), 3);
    add_background_object(create_thstone1_3091(12496, 8), 3);
    add_background_object(create_thstone11_3085(12432, -120), 3);
    add_background_object(create_thstone4_3086(12400, -56), 3);
    add_background_object(create_thstone4_3086(12400, -120), 3);
    add_background_object(create_thstone1_3091(12560, 8), 3);
    add_background_object(create_thstone1_3091(12624, 8), 3);
    add_background_object(create_thstone11_3085(12560, -120), 3);
    add_background_object(create_thstone8_3098(8064, 1160), 3);
    add_background_object(create_thstone4_3086(8064, 1192), 3);
    add_background_object(create_thstone6_3095(8064, 1256), 3);
    add_background_object(create_thstone2_3092(8096, 1160), 3);
    add_background_object(create_thstone7_3097(8128, 1160), 3);
    add_background_object(create_thstone3_3090(8128, 1192), 3);
    add_background_object(create_thstone5_3096(8128, 1256), 3);
    add_background_object(create_thstone7_3097(11720, 392), 3);
    add_background_object(create_thstone3_3090(11720, 424), 3);
    add_background_object(create_thstone5_3096(11720, 456), 3);
    add_background_object(create_thstone1_3091(12688, 8), 3);
    add_background_object(create_thstone1_3091(12752, 8), 3);
    add_background_object(create_thstone11_3085(12688, -120), 3);
    add_background_object(create_thstone1_3091(12744, 200), 3);
    add_background_object(create_thstone1_3091(12808, 200), 3);
    add_background_object(create_thstone11_3085(12744, 72), 3);
    add_background_object(create_thstone2_3092(12744, 40), 3);
    add_background_object(create_thstone2_3092(12808, 40), 3);
    add_background_object(create_thstone1_3091(12744, 392), 3);
    add_background_object(create_thstone1_3091(12808, 392), 3);
    add_background_object(create_thstone11_3085(12744, 264), 3);
    add_background_object(create_thstone2_3092(12744, 232), 3);
    add_background_object(create_thstone2_3092(12808, 232), 3);
    add_object(create_enemyninja_3190(12107, 721), 3);
    add_object(create_enemyninja_3190(12179, 721), 3);
    add_object(create_enemyninja_3190(12059, 721), 3);
    add_object(create_enemyninja_3190(12387, 721), 3);
    add_object(create_objectjumppad_1233(12120, 744), 3);
    add_object(create_objectjumppad_1233(12376, 744), 3);
    add_object(create_objectjumppad_1233(12248, 744), 3);
    add_object(create_objectjumppad_1233(11992, 744), 3);
    add_object(create_objectjumppad_1233(12632, 744), 3);
    add_object(create_objectjumppad_1233(12504, 744), 3);
    add_object(create_objectjumppad_1233(11864, 744), 3);
    add_object(create_objectjumppad_1233(2400, 400), 3);
    add_object(create_objectjumppad_1233(2392, 696), 3);
    add_object(create_objectjumppad_1233(2704, 640), 3);
    add_object(create_objectjumppad_1233(3072, 672), 3);
    add_object(create_objectjumppad_1233(144, 424), 3);
    add_object(create_objectjumppad_1233(144, 640), 3);
    add_object(create_objectjumppad_1233(496, 952), 3);
    add_object(create_objectjumppad_1233(496, 1344), 3);
    add_object(create_playerstartingpoint_358(45, 2333), 3);
    add_object(create_laddertop_357(-372, 1375), 3);
    add_object(create_hazardshurikenturn_3156(-328, 1576), 3);
    add_object(create_gimmickhangingidlesensor_740(241, 1192), 3);
    add_object(create_gimmickhangingmovingbar_3107(2328, -88), 3);
    add_object(create_gimmickhangingmovingsensor_3108(2353, -28), 3);
    add_object(create_effectrocketpuncherwarning_3163(-556, 1360), 3);
    add_object(create_thbacklight1_3083(-264, 912), 3);
    add_object(create_gimmickbarrel_3159(-424, 1576), 3);
    add_object(create_levelhideoutplatform1_3157(264, 736), 3);
    add_object(create_levelhideoutplatformflame_3158(264, 800), 3);
    add_object(create_enemylimiter_350(-475, 1434), 3);
    add_object(create_enemymetalpup_3149(-441, 1428), 3);
    add_object(create_enemyrocketpuncher_3160(344, 504), 3);
    add_object(create_enemyrocketpuncherhand_3161(320, 520), 3);
    add_object(create_enemyrocketpunchershield_3162(368, 504), 3);
    add_object(create_enemyshockpuppet_3150(279, 1784), 3);
    add_object(create_enemytotematic_3103(-520, 1512), 3);
    add_object(create_laddertop_357(292, 2039), 3);
    add_object(create_enemybladeorbiterleft_3151(-468, 1652), 3);
    add_object(create_enemybladeorbiterright_3152(-429, 1652), 3);
    add_object(create_enemybladeorbiter_3153(-448, 1672), 3);
    add_object(create_hazardshuriken_3154(384, 2232), 3);
    add_object(create_hazardshurikenbase_3155(384, 2232), 3);
    add_object(create_hazardshuriken_3154(456, 2232), 3);
    add_object(create_hazardshurikenbase_3155(456, 2232), 3);
    add_object(create_hazardshuriken_3154(312, 1448), 3);
    add_object(create_hazardshurikenbase_3155(312, 1448), 3);
    add_object(create_objectcrystal_279(165, 1890), 3);
    add_object(create_objectcrystal_279(165, 1930), 3);
    add_object(create_objectcrystal_279(165, 1970), 3);
    add_object(create_objectcrystal_279(165, 2010), 3);
    add_object(create_objectcrystal_279(165, 1850), 3);
    add_object(create_objectcrystal_279(477, 1858), 3);
    add_object(create_objectcrystal_279(477, 1898), 3);
    add_object(create_objectcrystal_279(477, 1938), 3);
    add_object(create_objectcrystal_279(477, 1978), 3);
    add_object(create_objectcrystal_279(477, 1818), 3);
    add_object(create_hazardspikesup_3118(200, 1880), 3);
    add_object(create_hazardspikesup_3118(232, 1880), 3);
    add_object(create_hazardspikesup_3118(264, 1880), 3);
    add_object(create_hazardspikesup_3118(296, 1880), 3);
    add_object(create_hazardspikesup_3118(328, 1880), 3);
    add_object(create_hazardspikesdown_3106(384, 1720), 3);
    add_object(create_hazardspikesdown_3106(416, 1720), 3);
    add_object(create_hazardspikesup_3118(384, 1656), 3);
    add_object(create_hazardspikesup_3118(416, 1656), 3);
    add_object(create_hazardspikesup_3118(368, 1408), 3);
    add_object(create_hazardspikesup_3118(400, 1408), 3);
    add_object(create_hazardspikesup_3118(432, 1408), 3);
    add_object(create_yellowspringup_434(144, 1664), 3);
    add_object(create_yellowspringup_434(176, 1664), 3);
    add_object(create_yellowspringup_434(208, 1664), 3);
    add_object(create_yellowspringup_434(240, 1664), 3);
    add_object(create_enemyshockpuppet_3150(239, 1296), 3);
    add_object(create_gimmickhangingidlesensor_740(329, 952), 3);
    add_object(create_hazardspikesleft_3119(280, 896), 3);
    add_object(create_hazardspikesleft_3119(280, 864), 3);
    add_object(create_hazardspikesleft_3119(280, 832), 3);
    add_object(create_hazardspikesleft_3119(280, 800), 3);
    add_object(create_hazardspikesleft_3119(280, 768), 3);
    add_object(create_hazardspikesleft_3119(280, 736), 3);
    add_object(create_hazardspikesleft_3119(280, 704), 3);
    add_object(create_hazardspikesleft_3119(280, 672), 3);
    add_object(create_hazardspikesleft_3119(280, 640), 3);
    add_object(create_hazardspikesleft_3119(280, 608), 3);
    add_object(create_hazardspikesleft_3119(280, 576), 3);
    add_object(create_hazardspikesleft_3119(280, 544), 3);
    add_object(create_hazardspikesup_3118(240, 1072), 3);
    add_object(create_hazardspikesup_3118(208, 1072), 3);
    add_object(create_hazardspikesup_3118(176, 1072), 3);
    add_object(create_hazardspikesup_3118(144, 1072), 3);
    add_object(create_objectcrystal_279(341, 970), 3);
    add_object(create_objectcrystal_279(381, 970), 3);
    add_object(create_objectcrystal_279(421, 970), 3);
    add_object(create_objectcrystal_279(165, 1234), 3);
    add_object(create_objectcrystal_279(165, 1274), 3);
    add_object(create_objectcrystal_279(165, 1314), 3);
    add_object(create_objectcrystal_279(477, 1194), 3);
    add_object(create_objectcrystal_279(477, 1234), 3);
    add_object(create_objectcrystal_279(477, 1274), 3);
    add_object(create_objectcrystal_279(477, 1074), 3);
    add_object(create_objectcrystal_279(477, 1114), 3);
    add_object(create_objectcrystal_279(477, 1154), 3);
    add_object(create_objectcrystal_279(165, 1546), 3);
    add_object(create_objectcrystal_279(197, 1546), 3);
    add_object(create_objectcrystal_279(229, 1546), 3);
    add_object(create_objectcrystal_279(261, 1546), 3);
    add_object(create_objectcrystal_279(165, 1586), 3);
    add_object(create_objectcrystal_279(197, 1586), 3);
    add_object(create_objectcrystal_279(229, 1586), 3);
    add_object(create_objectcrystal_279(261, 1586), 3);
    add_object(create_objectcrystal_279(165, 1626), 3);
    add_object(create_objectcrystal_279(197, 1626), 3);
    add_object(create_objectcrystal_279(229, 1626), 3);
    add_object(create_objectcrystal_279(261, 1626), 3);
    add_object(create_hazardspikesright_3120(376, 608), 3);
    add_object(create_hazardspikesright_3120(376, 640), 3);
    add_object(create_hazardspikesright_3120(376, 672), 3);
    add_object(create_hazardspikesright_3120(376, 704), 3);
    add_object(create_hazardspikesright_3120(376, 736), 3);
    add_object(create_hazardspikesright_3120(376, 768), 3);
    add_object(create_yellowspringup_434(464, 2000), 3);
    add_object(create_yellowspringup_434(464, 1392), 3);
    add_object(create_objectpetal_302(225, 737), 3);
    add_object(create_objectpetal_302(225, 769), 3);
    add_object(create_objectpetal_302(481, 641), 3);
    add_object(create_objectpetal_302(481, 705), 3);
    add_object(create_objectpetal_302(481, 769), 3);
    add_object(create_bossdoor_3191(352, 336), 3);
    add_object(create_bosscrystalbasherface_3192(320, 184), 3);
    add_object(create_bosscrystalbasherbase_3193(320, 336), 3);
    add_object(create_monitorwoodshield_325(408, 2320), 3);
    add_object(create_minibossrailing_923(512, 96), 3);
    add_object(create_minibossrailing_923(512, 144), 3);
    add_object(create_minibossbarrier_924(496, 144), 3);
    add_object(create_minibossbarrier_924(496, 96), 3);
    add_object(create_yellowspringup_434(464, 848), 3);
    add_object(create_objectpetal_302(857, 377), 3);
    add_object(create_objectpetal_302(985, 505), 3);
    add_object(create_objectpetal_302(1113, 633), 3);
    add_object(create_objectpetal_302(1241, 761), 3);
    add_object(create_objectpetal_302(1369, 889), 3);
    add_object(create_objectpetal_302(1497, 1017), 3);
    add_object(create_enemymetalpup_3149(1695, 1076), 3);
    add_object(create_enemylimiter_350(1557, 1074), 3);
    add_object(create_enemylimiter_350(1845, 1074), 3);
    add_object(create_yellowspringup_434(1984, 1088), 3);
    add_object(create_enemybikeninja_3172(2248, 992), 3);
    add_object(create_enemybikeninjamask_3171(2248, 992), 3);
    add_object(create_enemybikeninja_3172(2400, 952), 3);
    add_object(create_enemybikeninjamask_3171(2400, 952), 3);
    add_object(create_objectfuel_528(2596, 996), 3);
    add_object(create_levelhideoutplatform1_3157(2576, 608), 3);
    add_object(create_levelhideoutplatformflame_3158(2576, 672), 3);
    add_object(create_gimmickhangingidlesensor_740(2161, 752), 3);
    add_object(create_gimmickhangingidlesensor_740(2249, 752), 3);
    add_object(create_gimmickhangingidlesensor_740(2337, 752), 3);
    add_object(create_objectcrystal_279(2357, 650), 3);
    add_object(create_objectcrystal_279(2301, 618), 3);
    add_object(create_objectcrystal_279(2325, 618), 3);
    add_object(create_objectcrystal_279(2237, 586), 3);
    add_object(create_objectcrystal_279(2261, 586), 3);
    add_object(create_objectcrystal_279(2173, 618), 3);
    add_object(create_objectcrystal_279(2197, 618), 3);
    add_object(create_objectcrystal_279(2133, 650), 3);
    add_object(create_objectcrystal_279(2381, 986), 3);
    add_object(create_objectcrystal_279(2413, 986), 3);
    add_object(create_objectcrystal_279(2445, 986), 3);
    add_object(create_objectcrystal_279(2477, 986), 3);
    add_object(create_objectcrystal_279(2765, 986), 3);
    add_object(create_objectcrystal_279(2797, 986), 3);
    add_object(create_objectcrystal_279(2829, 986), 3);
    add_object(create_objectcrystal_279(2861, 986), 3);
    add_object(create_objectcrystal_279(2861, 690), 3);
    add_object(create_objectcrystal_279(2901, 690), 3);
    add_object(create_objectcrystal_279(2941, 690), 3);
    add_object(create_objectcrystal_279(2981, 690), 3);
    add_object(create_objectcrystal_279(2741, 690), 3);
    add_object(create_objectcrystal_279(2781, 690), 3);
    add_object(create_objectcrystal_279(2821, 690), 3);
    add_object(create_enemybikeninja_3172(3296, 536), 3);
    add_object(create_enemybikeninjamask_3171(3296, 536), 3);
    add_object(create_enemybikeninja_3172(3496, 560), 3);
    add_object(create_enemybikeninjamask_3171(3496, 560), 3);
    add_object(create_enemybikeninja_3172(3640, 944), 3);
    add_object(create_enemybikeninjamask_3171(3640, 944), 3);
    add_object(create_objectcrystal_279(3085, 370), 3);
    add_object(create_objectcrystal_279(3101, 338), 3);
    add_object(create_objectcrystal_279(3117, 306), 3);
    add_object(create_objectcrystal_279(3133, 274), 3);
    add_object(create_enemybladeorbiterleft_3151(3740, 660), 3);
    add_object(create_enemybladeorbiterright_3152(3779, 660), 3);
    add_object(create_enemybladeorbiter_3153(3760, 680), 3);
    add_object(create_enemybladeorbiterleft_3151(3548, 660), 3);
    add_object(create_enemybladeorbiterright_3152(3587, 660), 3);
    add_object(create_enemybladeorbiter_3153(3568, 680), 3);
    add_object(create_enemybladeorbiterleft_3151(3740, 852), 3);
    add_object(create_enemybladeorbiterright_3152(3779, 852), 3);
    add_object(create_enemybladeorbiter_3153(3760, 872), 3);
    add_object(create_enemybladeorbiterleft_3151(3612, 852), 3);
    add_object(create_enemybladeorbiterright_3152(3651, 852), 3);
    add_object(create_enemybladeorbiter_3153(3632, 872), 3);
    add_object(create_enemybikeninja_3172(3960, 1592), 3);
    add_object(create_enemybikeninjamask_3171(3960, 1592), 3);
    add_object(create_enemybikeninja_3172(4120, 1592), 3);
    add_object(create_enemybikeninjamask_3171(4120, 1592), 3);
    add_object(create_enemybikeninja_3172(4640, 1592), 3);
    add_object(create_enemybikeninjamask_3171(4640, 1592), 3);
    add_object(create_enemybikeninja_3172(4400, 1592), 3);
    add_object(create_enemybikeninjamask_3171(4400, 1592), 3);
    add_object(create_objectfuel_528(3108, 564), 3);
    add_object(create_objectfuel_528(4084, 1076), 3);
    add_object(create_monitorcrate_409(4112, 1056), 3);
    add_object(create_monitorcrate_409(3728, 736), 3);
    add_object(create_monitorcrate_409(3760, 736), 3);
    add_object(create_monitorcrate_409(3536, 736), 3);
    add_object(create_monitorcrate_409(3568, 736), 3);
    add_object(create_monitorcrate_409(3728, 928), 3);
    add_object(create_monitorcrate_409(3760, 928), 3);
    add_object(create_effectbikeninjawarning_3170(3292, 480), 3);
    add_object(create_effectbikeninjawarning_3170(2252, 936), 3);
    add_object(create_effectbikeninjawarning_3170(2404, 896), 3);
    add_object(create_effectbikeninjawarning_3170(3500, 504), 3);
    add_object(create_effectbikeninjawarning_3170(3964, 1536), 3);
    add_object(create_effectbikeninjawarning_3170(4124, 1536), 3);
    add_object(create_effectbikeninjawarning_3170(4404, 1536), 3);
    add_object(create_effectbikeninjawarning_3170(4644, 1536), 3);
    add_object(create_objectcrystal_279(3053, 914), 3);
    add_object(create_objectcrystal_279(3053, 866), 3);
    add_object(create_objectcrystal_279(3053, 818), 3);
    add_object(create_enemylimiter_350(3637, 242), 3);
    add_object(create_enemylimiter_350(3781, 242), 3);
    add_object(create_enemymetalpup_3149(3695, 244), 3);
    add_object(create_hazardspikesup_3118(3472, 256), 3);
    add_object(create_hazardspikesup_3118(3504, 256), 3);
    add_object(create_hazardspikesup_3118(3536, 256), 3);
    add_object(create_hazardspikesup_3118(3760, 256), 3);
    add_object(create_hazardspikesup_3118(3792, 256), 3);
    add_object(create_hazardspikesup_3118(3888, 256), 3);
    add_object(create_hazardspikesup_3118(3920, 256), 3);
    add_object(create_hazardspikesup_3118(3952, 256), 3);
    add_object(create_hazardspikesup_3118(3984, 256), 3);
    add_object(create_hazardspikesup_3118(4016, 288), 3);
    add_object(create_hazardspikesup_3118(4048, 288), 3);
    add_object(create_hazardspikesup_3118(4080, 288), 3);
    add_object(create_hazardspikesup_3118(4112, 288), 3);
    add_object(create_hazardspikesup_3118(4144, 288), 3);
    add_object(create_hazardspikesup_3118(4176, 288), 3);
    add_object(create_hazardspikesup_3118(4208, 288), 3);
    add_object(create_hazardspikesup_3118(4240, 288), 3);
    add_object(create_hazardspikesdown_3106(4464, 224), 3);
    add_object(create_hazardspikesdown_3106(4496, 224), 3);
    add_object(create_hazardspikesdown_3106(4528, 224), 3);
    add_object(create_hazardspikesdown_3106(4560, 224), 3);
    add_object(create_hazardspikesdown_3106(4592, 224), 3);
    add_object(create_hazardspikesup_3118(4336, 288), 3);
    add_object(create_hazardspikesup_3118(4368, 288), 3);
    add_object(create_monitorbomb_563(3312, 160), 3);
    add_object(create_monitorbomb_563(3344, 160), 3);
    add_object(create_monitorbomb_563(3376, 160), 3);
    add_object(create_monitorbomb_563(3408, 160), 3);
    add_object(create_monitorbomb_563(3440, 160), 3);
    add_object(create_monitorbomb_563(3856, 192), 3);
    add_object(create_monitorbomb_563(3824, 192), 3);
    add_object(create_monitorbomb_563(3600, 160), 3);
    add_object(create_monitorbomb_563(3568, 160), 3);
    add_object(create_objectpetal_302(4121, 185), 3);
    add_object(create_objectpetal_302(4161, 185), 3);
    add_object(create_objectpetal_302(4201, 185), 3);
    add_object(create_objectpetal_302(4241, 193), 3);
    add_object(create_objectpetal_302(4273, 217), 3);
    add_object(create_objectpetal_302(3121, 121), 3);
    add_object(create_objectpetal_302(3185, 121), 3);
    add_object(create_objectpetal_302(3153, 89), 3);
    add_object(create_hazardspikesup_3118(4400, 416), 3);
    add_object(create_hazardspikesup_3118(4432, 416), 3);
    add_object(create_hazardspikesup_3118(4464, 416), 3);
    add_object(create_hazardspikesup_3118(4496, 416), 3);
    add_object(create_hazardspikesup_3118(4528, 416), 3);
    add_object(create_hazardspikesup_3118(4560, 416), 3);
    add_object(create_hazardspikesup_3118(4592, 416), 3);
    add_object(create_hazardspikesup_3118(4624, 416), 3);
    add_object(create_hazardspikesdown_3106(4624, 224), 3);
    add_object(create_hazardspikesdown_3106(4656, 224), 3);
    add_object(create_hazardspikesdown_3106(4688, 224), 3);
    add_object(create_hazardspikesdown_3106(4720, 224), 3);
    add_object(create_hazardspikesup_3118(4656, 416), 3);
    add_object(create_hazardspikesup_3118(4688, 416), 3);
    add_object(create_hazardspikesdown_3106(4752, 224), 3);
    add_object(create_hazardspikesdown_3106(4784, 224), 3);
    add_object(create_hazardspikesdown_3106(4816, 224), 3);
    add_object(create_hazardspikesdown_3106(4848, 224), 3);
    add_object(create_hazardspikesdown_3106(4880, 224), 3);
    add_object(create_gimmickbarrel_3159(4424, 632), 3);
    add_object(create_gimmickhangingidlesensor_740(2777, 664), 3);
    add_object(create_gimmickhangingidlesensor_740(2873, 664), 3);
    add_object(create_gimmickhangingidlesensor_740(2969, 664), 3);
    add_object(create_yellowspringup_434(5760, 1608), 3);
    add_object(create_yellowspringup_434(5792, 1608), 3);
    add_object(create_yellowspringup_434(5824, 1608), 3);
    add_object(create_yellowspringup_434(5856, 1608), 3);
    add_object(create_yellowspringup_434(5888, 1608), 3);
    add_object(create_enemytotematic_3103(6000, 1528), 3);
    add_object(create_enemytotematic_3103(6000, 1496), 3);
    add_object(create_enemytotematic_3103(6056, 1528), 3);
    add_object(create_enemytotematic_3103(6056, 1496), 3);
    add_object(create_enemytotematic_3103(6112, 1528), 3);
    add_object(create_enemytotematic_3103(6112, 1496), 3);
    add_object(create_enemytotematic_3103(6168, 1528), 3);
    add_object(create_enemytotematic_3103(6168, 1496), 3);
    add_object(create_enemytotematic_3103(6224, 1528), 3);
    add_object(create_enemytotematic_3103(6224, 1496), 3);
    add_object(create_enemytotematic_3103(6280, 1528), 3);
    add_object(create_enemytotematic_3103(6280, 1496), 3);
    add_object(create_enemytotematic_3103(6336, 1528), 3);
    add_object(create_enemytotematic_3103(6336, 1496), 3);
    add_object(create_enemytotematic_3103(6392, 1464), 3);
    add_object(create_enemytotematic_3103(6392, 1432), 3);
    add_object(create_enemytotematic_3103(6448, 1464), 3);
    add_object(create_enemytotematic_3103(6448, 1432), 3);
    add_object(create_enemytotematic_3103(6560, 1464), 3);
    add_object(create_enemytotematic_3103(6560, 1432), 3);
    add_object(create_enemytotematic_3103(6616, 1464), 3);
    add_object(create_enemytotematic_3103(6616, 1432), 3);
    add_object(create_enemytotematic_3103(6392, 1400), 3);
    add_object(create_enemytotematic_3103(6392, 1368), 3);
    add_object(create_enemytotematic_3103(6448, 1400), 3);
    add_object(create_enemytotematic_3103(6448, 1368), 3);
    add_object(create_enemytotematic_3103(6560, 1400), 3);
    add_object(create_enemytotematic_3103(6560, 1368), 3);
    add_object(create_enemytotematic_3103(6616, 1400), 3);
    add_object(create_enemytotematic_3103(6616, 1368), 3);
    add_object(create_enemytotematic_3103(6392, 1336), 3);
    add_object(create_enemytotematic_3103(6392, 1304), 3);
    add_object(create_enemytotematic_3103(6448, 1336), 3);
    add_object(create_enemytotematic_3103(6448, 1304), 3);
    add_object(create_enemytotematic_3103(6560, 1336), 3);
    add_object(create_enemytotematic_3103(6560, 1304), 3);
    add_object(create_enemytotematic_3103(6616, 1336), 3);
    add_object(create_enemytotematic_3103(6616, 1304), 3);
    add_object(create_monitorbomb_563(6816, 1512), 3);
    add_object(create_monitorbomb_563(6848, 1512), 3);
    add_object(create_enemytotematic_3103(4840, 688), 3);
    add_object(create_enemytotematic_3103(4888, 688), 3);
    add_object(create_enemytotematic_3103(4840, 720), 3);
    add_object(create_enemytotematic_3103(4888, 720), 3);
    add_object(create_objectcrystal_279(4701, 650), 3);
    add_object(create_objectcrystal_279(4661, 650), 3);
    add_object(create_objectcrystal_279(4621, 650), 3);
    add_object(create_objectcrystal_279(4581, 650), 3);
    add_object(create_objectcrystal_279(4541, 650), 3);
    add_object(create_monitorkeystone_562(4144, 576), 3);
    add_object(create_monitorkeystone_562(4176, 576), 3);
    add_object(create_monitorkeystone_562(2992, 160), 3);
    add_object(create_monitorearthshield_326(7216, 1256), 3);
    add_object(create_bossspade_2194(12310, -31), 3);
    add_object(create_bossspadehitbox_2232(12342, -39), 3);
    add_object(create_bossspademask_2231(12248, 728), 3);
    add_object(create_levelthcollapsingplatform_3164(2840, 840), 3);
    add_object(create_enemyshockpuppet_3150(7999, 1112), 3);
    add_object(create_yellowspringupleft_432(6976, 1256), 3);
    add_object(create_yellowspringupright_433(6784, 1256), 3);
    add_object(create_yellowspringupright_433(6784, 1224), 3);
    add_object(create_yellowspringupright_433(6784, 1192), 3);
    add_object(create_yellowspringupright_433(6784, 1160), 3);
    add_object(create_yellowspringupright_433(6784, 1128), 3);
    add_object(create_yellowspringupright_433(6784, 1096), 3);
    add_object(create_yellowspringupleft_432(6976, 1224), 3);
    add_object(create_yellowspringupleft_432(6976, 1192), 3);
    add_object(create_yellowspringupleft_432(6976, 1160), 3);
    add_object(create_enemyshockpuppet_3150(7231, 984), 3);
    add_object(create_levelthcollapsingplatform_3164(7040, 1032), 3);
    add_object(create_objectcrystal_279(7053, 1082), 3);
    add_object(create_objectcrystal_279(7085, 1082), 3);
    add_object(create_objectcrystal_279(7117, 1082), 3);
    add_object(create_objectcrystal_279(7149, 1082), 3);
    add_object(create_objectcrystal_279(7053, 1114), 3);
    add_object(create_objectcrystal_279(7085, 1114), 3);
    add_object(create_objectcrystal_279(7117, 1114), 3);
    add_object(create_objectcrystal_279(7149, 1114), 3);
    add_object(create_objectcrystal_279(7053, 1146), 3);
    add_object(create_objectcrystal_279(7085, 1146), 3);
    add_object(create_objectcrystal_279(7117, 1146), 3);
    add_object(create_objectcrystal_279(7149, 1146), 3);
    add_object(create_objectcrystal_279(7053, 1018), 3);
    add_object(create_objectcrystal_279(7085, 1018), 3);
    add_object(create_objectcrystal_279(7117, 1018), 3);
    add_object(create_objectcrystal_279(7149, 1018), 3);
    add_object(create_objectcodec_354(170, 1037), 3);
    add_object(create_objectcodec_354(2906, 805), 3);
    add_object(create_hazardspikesup_3118(7872, 1256), 3);
    add_object(create_hazardspikesup_3118(7904, 1256), 3);
    add_object(create_enemyshockpuppet_3150(7487, 1168), 3);
    add_object(create_enemyshockpuppet_3150(7551, 1104), 3);
    add_object(create_enemyshockpuppet_3150(7615, 1168), 3);
    add_object(create_enemyshockpuppet_3150(7679, 1104), 3);
    add_object(create_enemyshockpuppet_3150(7743, 1168), 3);
    add_object(create_levelthcollapsingplatform_3164(7424, 1000), 3);
    add_object(create_objectcrystal_279(7437, 978), 3);
    add_object(create_objectcrystal_279(7469, 978), 3);
    add_object(create_objectcrystal_279(7501, 978), 3);
    add_object(create_objectcrystal_279(7533, 978), 3);
    add_object(create_objectcrystal_279(7437, 946), 3);
    add_object(create_objectcrystal_279(7469, 946), 3);
    add_object(create_objectcrystal_279(7501, 946), 3);
    add_object(create_objectcrystal_279(7533, 946), 3);
    add_object(create_redspringup_440(8224, 1048), 3);
    add_object(create_redspringup_440(8256, 1048), 3);
    add_object(create_redspringup_440(8288, 1048), 3);
    add_object(create_redspringup_440(8320, 1048), 3);
    add_object(create_redspringup_440(8352, 1048), 3);
    add_object(create_redspringup_440(8384, 1048), 3);
    add_object(create_redspringup_440(8416, 1048), 3);
    add_object(create_redspringup_440(8448, 1048), 3);
    add_object(create_redspringup_440(8480, 1048), 3);
    add_object(create_redspringup_440(8512, 1048), 3);
    add_object(create_redspringdown_443(8224, 552), 3);
    add_object(create_redspringdown_443(8256, 552), 3);
    add_object(create_redspringdown_443(8288, 552), 3);
    add_object(create_redspringdown_443(8320, 552), 3);
    add_object(create_redspringdown_443(8480, 552), 3);
    add_object(create_redspringdown_443(8512, 552), 3);
    add_object(create_redspringdown_443(8544, 552), 3);
    add_object(create_redspringdown_443(8576, 552), 3);
    add_object(create_redspringdown_443(8608, 552), 3);
    add_object(create_redspringdown_443(8640, 160), 3);
    add_object(create_redspringdown_443(8672, 160), 3);
    add_object(create_redspringdown_443(8704, 160), 3);
    add_object(create_redspringdown_443(8736, 160), 3);
    add_object(create_redspringdown_443(8768, 160), 3);
    add_object(create_redspringup_440(8544, 664), 3);
    add_object(create_redspringup_440(8576, 664), 3);
    add_object(create_redspringup_440(8160, 792), 3);
    add_object(create_redspringup_440(8192, 792), 3);
    add_object(create_redspringdown_443(8096, 552), 3);
    add_object(create_redspringdown_443(8128, 552), 3);
    add_object(create_redspringdown_443(8160, 552), 3);
    add_object(create_redspringdown_443(8192, 552), 3);
    add_object(create_redspringdown_443(8064, 552), 3);
    add_object(create_redspringup_440(8608, 664), 3);
    add_object(create_redspringup_440(8640, 664), 3);
    add_object(create_redspringup_440(8672, 664), 3);
    add_object(create_redspringup_440(8704, 664), 3);
    add_object(create_redspringup_440(8736, 664), 3);
    add_object(create_redspringup_440(8768, 664), 3);
    add_object(create_redspringup_440(8800, 408), 3);
    add_object(create_redspringup_440(8832, 408), 3);
    add_object(create_redspringup_440(8928, 664), 3);
    add_object(create_redspringup_440(8960, 664), 3);
    add_object(create_redspringup_440(8992, 664), 3);
    add_object(create_redspringup_440(9024, 664), 3);
    add_object(create_redspringup_440(9056, 664), 3);
    add_object(create_redspringup_440(9088, 664), 3);
    add_object(create_redspringup_440(9120, 664), 3);
    add_object(create_redspringup_440(9152, 664), 3);
    add_object(create_redspringdown_443(8800, 160), 3);
    add_object(create_redspringdown_443(8832, 160), 3);
    add_object(create_redspringdown_443(8864, 160), 3);
    add_object(create_redspringdown_443(8896, 160), 3);
    add_object(create_redspringdown_443(8928, 160), 3);
    add_object(create_redspringdown_443(8960, 160), 3);
    add_object(create_redspringdown_443(9056, 160), 3);
    add_object(create_redspringdown_443(9088, 160), 3);
    add_object(create_redspringdown_443(9120, 160), 3);
    add_object(create_redspringdown_443(9152, 160), 3);
    add_object(create_redspringdown_443(8352, 552), 3);
    add_object(create_redspringdown_443(8384, 552), 3);
    add_object(create_redspringdown_443(8416, 552), 3);
    add_object(create_redspringdown_443(8448, 552), 3);
    add_object(create_redspringdown_443(8992, 416), 3);
    add_object(create_redspringdown_443(9024, 416), 3);
    add_object(create_redspringup_440(9184, 408), 3);
    add_object(create_redspringup_440(9216, 408), 3);
    add_object(create_redspringdown_443(9184, 160), 3);
    add_object(create_redspringdown_443(9216, 160), 3);
    add_object(create_redspringdown_443(9248, 160), 3);
    add_object(create_redspringdown_443(9280, 160), 3);
    add_object(create_redspringdown_443(9312, 160), 3);
    add_object(create_redspringdown_443(9344, 160), 3);
    add_object(create_redspringdown_443(9376, 160), 3);
    add_object(create_redspringupright_438(8864, 1032), 3);
    add_object(create_redspringupright_438(8896, 1032), 3);
    add_object(create_redspringdown_443(8928, 744), 3);
    add_object(create_redspringdown_443(8960, 744), 3);
    add_object(create_redspringdown_443(8992, 744), 3);
    add_object(create_redspringdown_443(9024, 744), 3);
    add_object(create_redspringdown_443(9056, 744), 3);
    add_object(create_redspringdown_443(9088, 744), 3);
    add_object(create_redspringdown_443(9120, 744), 3);
    add_object(create_redspringdown_443(9152, 744), 3);
    add_object(create_redspringdown_443(9184, 744), 3);
    add_object(create_redspringdown_443(9216, 744), 3);
    add_object(create_redspringupright_438(8928, 1032), 3);
    add_object(create_redspringupright_438(8960, 1032), 3);
    add_object(create_monitorkeystone_562(9248, 696), 3);
    add_object(create_objectcrystal_279(8285, 850), 3);
    add_object(create_objectcrystal_279(8309, 850), 3);
    add_object(create_objectcrystal_279(8309, 818), 3);
    add_object(create_objectcrystal_279(8285, 818), 3);
    add_object(create_objectcrystal_279(8309, 786), 3);
    add_object(create_objectcrystal_279(8285, 786), 3);
    add_object(create_objectcrystal_279(8293, 754), 3);
    add_object(create_objectcrystal_279(8317, 754), 3);
    add_object(create_objectcrystal_279(8301, 722), 3);
    add_object(create_objectcrystal_279(8317, 690), 3);
    add_object(create_objectcrystal_279(8333, 690), 3);
    add_object(create_objectcrystal_279(8349, 690), 3);
    add_object(create_objectcrystal_279(8341, 658), 3);
    add_object(create_objectcrystal_279(8357, 658), 3);
    add_object(create_objectcrystal_279(8373, 658), 3);
    add_object(create_objectcrystal_279(8389, 658), 3);
    add_object(create_objectcrystal_279(8413, 690), 3);
    add_object(create_objectcrystal_279(8429, 690), 3);
    add_object(create_objectcrystal_279(8445, 690), 3);
    add_object(create_objectcrystal_279(8437, 722), 3);
    add_object(create_objectcrystal_279(8461, 722), 3);
    add_object(create_objectcrystal_279(8469, 754), 3);
    add_object(create_objectcrystal_279(8445, 754), 3);
    add_object(create_objectcrystal_279(8725, 362), 3);
    add_object(create_objectcrystal_279(8701, 362), 3);
    add_object(create_objectcrystal_279(8677, 362), 3);
    add_object(create_objectcrystal_279(9093, 234), 3);
    add_object(create_objectcrystal_279(9109, 234), 3);
    add_object(create_objectcrystal_279(9125, 234), 3);
    add_object(create_objectcrystal_279(9141, 234), 3);
    add_object(create_objectcrystal_279(9157, 234), 3);
    add_object(create_objectcrystal_279(9173, 234), 3);
    add_object(create_objectcrystal_279(9189, 234), 3);
    add_object(create_objectcrystal_279(9205, 234), 3);
    add_object(create_objectcrystal_279(9221, 234), 3);
    add_object(create_objectcrystal_279(9237, 234), 3);
    add_object(create_objectcrystal_279(9253, 234), 3);
    add_object(create_objectcrystal_279(9269, 234), 3);
    add_object(create_objectcrystal_279(9285, 234), 3);
    add_object(create_objectcrystal_279(9301, 234), 3);
    add_object(create_objectcrystal_279(9317, 234), 3);
    add_object(create_objectcrystal_279(9333, 234), 3);
    add_object(create_objectcrystal_279(9349, 234), 3);
    add_object(create_objectcrystal_279(8325, 722), 3);
    add_object(create_objectcrystal_279(8405, 658), 3);
    add_object(create_objectcrystal_279(8421, 658), 3);
    add_object(create_objectcrystal_279(8453, 850), 3);
    add_object(create_objectcrystal_279(8477, 850), 3);
    add_object(create_objectcrystal_279(8477, 818), 3);
    add_object(create_objectcrystal_279(8453, 818), 3);
    add_object(create_objectcrystal_279(8477, 786), 3);
    add_object(create_objectcrystal_279(8453, 786), 3);
    add_object(create_objectcrystal_279(8293, 882), 3);
    add_object(create_objectcrystal_279(8317, 882), 3);
    add_object(create_objectcrystal_279(8469, 882), 3);
    add_object(create_objectcrystal_279(8445, 882), 3);
    add_object(create_objectcrystal_279(8301, 914), 3);
    add_object(create_objectcrystal_279(8437, 914), 3);
    add_object(create_objectcrystal_279(8461, 914), 3);
    add_object(create_objectcrystal_279(8325, 914), 3);
    add_object(create_objectcrystal_279(8317, 946), 3);
    add_object(create_objectcrystal_279(8333, 946), 3);
    add_object(create_objectcrystal_279(8349, 946), 3);
    add_object(create_objectcrystal_279(8413, 946), 3);
    add_object(create_objectcrystal_279(8429, 946), 3);
    add_object(create_objectcrystal_279(8445, 946), 3);
    add_object(create_objectcrystal_279(8341, 978), 3);
    add_object(create_objectcrystal_279(8357, 978), 3);
    add_object(create_objectcrystal_279(8373, 978), 3);
    add_object(create_objectcrystal_279(8389, 978), 3);
    add_object(create_objectcrystal_279(8405, 978), 3);
    add_object(create_objectcrystal_279(8421, 978), 3);
    add_object(create_objectcrystal_279(8741, 330), 3);
    add_object(create_objectcrystal_279(8717, 330), 3);
    add_object(create_objectcrystal_279(8693, 330), 3);
    add_object(create_objectcrystal_279(8757, 298), 3);
    add_object(create_objectcrystal_279(8733, 298), 3);
    add_object(create_objectcrystal_279(8709, 298), 3);
    add_object(create_objectcrystal_279(8741, 266), 3);
    add_object(create_objectcrystal_279(8717, 266), 3);
    add_object(create_objectcrystal_279(8693, 266), 3);
    add_object(create_objectcrystal_279(8725, 234), 3);
    add_object(create_objectcrystal_279(8701, 234), 3);
    add_object(create_objectcrystal_279(8677, 234), 3);
    add_object(create_objectcrystal_279(8933, 362), 3);
    add_object(create_objectcrystal_279(8909, 362), 3);
    add_object(create_objectcrystal_279(8885, 362), 3);
    add_object(create_objectcrystal_279(8949, 330), 3);
    add_object(create_objectcrystal_279(8925, 330), 3);
    add_object(create_objectcrystal_279(8901, 330), 3);
    add_object(create_objectcrystal_279(8965, 298), 3);
    add_object(create_objectcrystal_279(8941, 298), 3);
    add_object(create_objectcrystal_279(8917, 298), 3);
    add_object(create_objectcrystal_279(8949, 266), 3);
    add_object(create_objectcrystal_279(8925, 266), 3);
    add_object(create_objectcrystal_279(8901, 266), 3);
    add_object(create_objectcrystal_279(8933, 234), 3);
    add_object(create_objectcrystal_279(8909, 234), 3);
    add_object(create_objectcrystal_279(8885, 234), 3);
    add_object(create_objectcrystal_279(8829, 362), 3);
    add_object(create_objectcrystal_279(8805, 362), 3);
    add_object(create_objectcrystal_279(8781, 362), 3);
    add_object(create_objectcrystal_279(8845, 330), 3);
    add_object(create_objectcrystal_279(8821, 330), 3);
    add_object(create_objectcrystal_279(8797, 330), 3);
    add_object(create_objectcrystal_279(8861, 298), 3);
    add_object(create_objectcrystal_279(8837, 298), 3);
    add_object(create_objectcrystal_279(8813, 298), 3);
    add_object(create_objectcrystal_279(8845, 266), 3);
    add_object(create_objectcrystal_279(8821, 266), 3);
    add_object(create_objectcrystal_279(8797, 266), 3);
    add_object(create_objectcrystal_279(8829, 234), 3);
    add_object(create_objectcrystal_279(8805, 234), 3);
    add_object(create_objectcrystal_279(8781, 234), 3);
    add_object(create_objectcrystal_279(9093, 274), 3);
    add_object(create_objectcrystal_279(9109, 274), 3);
    add_object(create_objectcrystal_279(9125, 274), 3);
    add_object(create_objectcrystal_279(9141, 274), 3);
    add_object(create_objectcrystal_279(9157, 274), 3);
    add_object(create_objectcrystal_279(9173, 274), 3);
    add_object(create_objectcrystal_279(9189, 274), 3);
    add_object(create_objectcrystal_279(9205, 274), 3);
    add_object(create_objectcrystal_279(9221, 274), 3);
    add_object(create_objectcrystal_279(9237, 274), 3);
    add_object(create_objectcrystal_279(9253, 274), 3);
    add_object(create_objectcrystal_279(9269, 274), 3);
    add_object(create_objectcrystal_279(9285, 274), 3);
    add_object(create_objectcrystal_279(9301, 274), 3);
    add_object(create_objectcrystal_279(9317, 274), 3);
    add_object(create_objectcrystal_279(9333, 274), 3);
    add_object(create_objectcrystal_279(9349, 274), 3);
    add_object(create_objectcrystal_279(9093, 810), 3);
    add_object(create_objectcrystal_279(9109, 810), 3);
    add_object(create_objectcrystal_279(9125, 810), 3);
    add_object(create_objectcrystal_279(9141, 810), 3);
    add_object(create_objectcrystal_279(9157, 810), 3);
    add_object(create_objectcrystal_279(9173, 810), 3);
    add_object(create_objectcrystal_279(9189, 810), 3);
    add_object(create_objectcrystal_279(9205, 810), 3);
    add_object(create_objectcrystal_279(9093, 850), 3);
    add_object(create_objectcrystal_279(9109, 850), 3);
    add_object(create_objectcrystal_279(9125, 850), 3);
    add_object(create_objectcrystal_279(9141, 850), 3);
    add_object(create_objectcrystal_279(9157, 850), 3);
    add_object(create_objectcrystal_279(9173, 850), 3);
    add_object(create_objectcrystal_279(9189, 850), 3);
    add_object(create_objectcrystal_279(9205, 850), 3);
    add_object(create_enemyrocketpuncher_3160(10528, 704), 3);
    add_object(create_enemyrocketpuncherhand_3161(10504, 720), 3);
    add_object(create_enemyrocketpunchershield_3162(10552, 704), 3);
    add_object(create_monitorbomb_563(10368, 712), 3);
    add_object(create_monitorbomb_563(10400, 712), 3);
    add_object(create_monitorbomb_563(10624, 712), 3);
    add_object(create_monitorbomb_563(10656, 712), 3);
    add_object(create_monitorbomb_563(10752, 712), 3);
    add_object(create_monitorbomb_563(10784, 712), 3);
    add_object(create_enemyrocketpuncher_3160(10912, 704), 3);
    add_object(create_enemyrocketpuncherhand_3161(10888, 720), 3);
    add_object(create_enemyrocketpunchershield_3162(10936, 704), 3);
    add_object(create_monitorbomb_563(11008, 712), 3);
    add_object(create_monitorbomb_563(11040, 712), 3);
    add_object(create_monitorbomb_563(10304, 536), 3);
    add_object(create_monitorbomb_563(10336, 536), 3);
    add_object(create_monitorbomb_563(10592, 536), 3);
    add_object(create_monitorbomb_563(10624, 536), 3);
    add_object(create_objectpetal_302(11009, 113), 3);
    add_object(create_objectpetal_302(10969, 97), 3);
    add_object(create_objectpetal_302(10929, 97), 3);
    add_object(create_objectpetal_302(10889, 113), 3);
    add_object(create_levelthcollapsingplatform_3164(11816, 392), 3);
    add_object(create_levelthcollapsingplatform_3164(11944, 392), 3);
    add_object(create_levelthcollapsingplatform_3164(12072, 392), 3);
    add_object(create_levelthcollapsingplatform_3164(12200, 392), 3);
    add_object(create_levelthcollapsingplatform_3164(12328, 392), 3);
    add_object(create_levelthcollapsingplatform_3164(12456, 392), 3);
    add_object(create_enemybladeorbiterleft_3151(11500, 476), 3);
    add_object(create_enemybladeorbiterright_3152(11539, 476), 3);
    add_object(create_enemybladeorbiter_3153(11520, 496), 3);
    add_object(create_monitorbomb_563(6880, 1512), 3);
    add_object(create_monitorbomb_563(6912, 1512), 3);
    add_object(create_monitorbomb_563(6944, 1512), 3);
    add_object(create_enemybladeorbiterleft_3151(10252, 620), 3);
    add_object(create_enemybladeorbiterright_3152(10291, 620), 3);
    add_object(create_enemybladeorbiter_3153(10272, 640), 3);
    add_object(create_monitorrings_407(11504, 584), 3);
    add_object(create_levelhideoutplatform1_3157(11408, 744), 3);
    add_object(create_levelhideoutplatformflame_3158(11408, 808), 3);
    add_object(create_levelhideoutplatform1_3157(11440, 744), 3);
    add_object(create_levelhideoutplatformflame_3158(11440, 808), 3);
    add_object(create_objectfuel_528(11788, 380), 3);
    add_object(create_objectfuel_528(11764, 732), 3);
    add_object(create_objectfuel_528(12732, 732), 3);
    add_object(create_redspringup_440(11296, 792), 3);
    add_object(create_redspringup_440(11264, 792), 3);
    add_object(create_monitorwoodshield_325(12520, 360), 3);
    add_object(create_objectpetal_302(11929, 369), 3);
    add_object(create_objectpetal_302(11993, 369), 3);
    add_object(create_objectpetal_302(12057, 369), 3);
    add_object(create_objectpetal_302(12121, 369), 3);
    add_object(create_objectpetal_302(12185, 369), 3);
    add_object(create_objectpetal_302(12249, 369), 3);
    add_object(create_objectpetal_302(12313, 369), 3);
    add_object(create_objectpetal_302(12377, 369), 3);
    add_object(create_objectpetal_302(12441, 369), 3);
    add_object(create_objectcodec_354(4770, 845), 3);
    add_object(create_objectcodec_354(7810, 965), 3);
    add_object(create_objectcodec_354(10482, 533), 3);
    add_background_object(create_thwood3_3137(416, -16), 4);
    add_background_object(create_thwood2_3134(480, 336), 4);
    add_background_object(create_thstone6_3095(11392, 1032), 4);
    add_background_object(create_thstone5_3096(11424, 1032), 4);
    add_background_object(create_thstone7_3097(11424, 808), 4);
    add_background_object(create_thstone8_3098(11392, 808), 4);
    add_background_object(create_thstone4_3086(11392, 840), 4);
    add_background_object(create_thstone3_3090(11424, 840), 4);
    add_background_object(create_thstone4_3086(11392, 904), 4);
    add_background_object(create_thstone3_3090(11424, 904), 4);
    add_background_object(create_thstone4_3086(11392, 968), 4);
    add_background_object(create_thstone3_3090(11424, 968), 4);
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
    add_object(create_hazardspikesup_3118(-208, 392), 5);
    add_object(create_hazardspikesdown_3106(-168, 392), 5);
    add_object(create_hazardspikesleft_3119(-128, 392), 5);
    add_object(create_hazardspikesright_3120(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_gimmickhangingidlesensor_740(702, -150), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(320, 2391), 5);
    add_object(create_cameralimitbossleft_421(96, 1976), 5);
    add_object(create_cameralimitbossright_422(543, 1968), 5);
    add_object(create_cameralimitbosstop_423(304, 8), 5);
    add_object(create_cameratriggerboss_424(736, 1576), 5);
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
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_mapdata_30(-432, 232), 5);
    add_object(create_recorddata_34(-432, 248), 5);
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
    add_object(create_guienemiesleft_3194(20, 51), 6);
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
    add_object(create_guigoalmessage_3195(0, 40), 6);
    add_object(create_dialogdata_3196(-132, 472), 6);
    add_object(create_dialogbox_566(0, 8), 6);
    add_object(create_dialogbox2_567(-156, 71), 6);
    add_object(create_dialogarrow_568(132, 40), 6);
    add_object(create_dialogtext_569(-148, 8), 6);
    add_object(create_timebonustotal_460(-256, -72), 7);
    add_object(create_levelcardfade2_24(-328, -336), 7);
    add_object(create_guilifebasemeter_125(0, 0), 7);
    add_object(create_levelcardintro1_464(16, -240), 7);
    add_object(create_sarassteampluginfreedomplanet_26(-192, -128), 7);
    add_object(create_levelcardactclear4_846(-48, 212), 7);
    add_object(create_levelcardactclear1_847(-160, 24), 7);
    add_object(create_levelcardactclear2_848(-88, 88), 7);
    add_object(create_levelcardactclear3_849(-72, 88), 7);
    add_object(create_totalcrystals_854(44, 230), 7);
    add_object(create_levelcardbonus1_850(-12, 109), 7);
    add_object(create_levelcardbonus2_851(76, 109), 7);
    add_object(create_levelcardbonus3_852(-16, -64), 7);
    add_object(create_totalbonus_853(-18, -40), 7);
    add_object(create_levelcardfade_461(0, 0), 7);
    add_object(create_levelcardintro3_760(0, 248), 7);
    add_object(create_levelcardintro2_761(0, 248), 7);
    add_object(create_levelcardgameover_462(0, 256), 7);
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
    loop_sound_hurt0_running = false;
    loop_sound_hurt0_index = 0;
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
    loop_voice_running = false;
    loop_voice_index = 0;
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
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_58, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_58, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_58, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_58, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_58, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_58, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_58, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_58, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_58, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_58, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_58, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_58, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_58, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_58, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_58, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_58, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_58, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_58, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_58, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_58, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_58, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_58, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_58, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_58, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_58, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_58, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_58, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_58, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_58, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_58, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_58, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_58, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_58, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_58, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_58, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_58, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_58, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_58, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_58, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_58, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_58, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_58, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_58, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_58, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_58, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_58, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_58, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_58, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_58, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_58, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_58, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_58, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_58, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_58, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_789_13 = loop_count;
    not_always_1508_19 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_1412_22 = loop_count;
    not_always_1388_13 = loop_count;
    not_always_44_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    not_always_98_0 = loop_count;
    not_always_234_13 = loop_count;
    once_condition_1683_58 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    not_always_809_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_crystal_basher_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    not_always_1051_14 = loop_count;
    not_always_1050_14 = loop_count;
    every_1609_58 = 0.0f;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_449_13 = loop_count;
    not_always_140_0 = loop_count;
    not_always_1048_14 = loop_count;
    not_always_1517_19 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    once_condition_40_14 = false;
    not_always_1046_14 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_punch_combo_1 = false;
    not_always_1448_13 = loop_count;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_2_jump_1 = false;
    not_always_1410_21 = loop_count;
    not_always_68_13 = loop_count;
    not_always_1149_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    not_always_97_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_1719_58 = loop_count;
    not_always_100_0 = loop_count;
    not_always_1933_58 = loop_count;
    not_always_43_13 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_121_0 = loop_count;
    once_condition_1761_58 = false;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_spade_1 = false;
    not_always_1742_58 = loop_count;
    group_main_engine_level_specific_methods_play_bgm_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    not_always_1417_58 = loop_count;
    not_always_2088_58 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    once_condition_1517_23 = false;
    not_always_96_0 = loop_count;
    not_always_130_0 = loop_count;
    group_main_engine_level_specific_methods_stage_clear_1 = true;
    once_condition_39_14 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_blips_1 = false;
    group_sound_events_milla_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_46_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    not_always_1832_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = true;
    not_always_53_13 = loop_count;
    not_always_1047_14 = loop_count;
    not_always_1531_19 = loop_count;
    once_condition_1685_58 = false;
    once_condition_63_0 = false;
    not_always_1398_28 = loop_count;
    not_always_1518_19 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_spade_hit_1 = false;
    not_always_1447_13 = loop_count;
    not_always_2203_58 = loop_count;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_5_dual_crash_1 = false;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_52_13 = loop_count;
    not_always_2089_58 = loop_count;
    not_always_1723_58 = loop_count;
    not_always_101_0 = loop_count;
    every_1971_58 = 0.0f;
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_3_flash_step_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_1720_58 = loop_count;
    not_always_65_0 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1 = false;
    not_always_422_13 = loop_count;
    every_1976_58 = 0.0f;
    once_condition_1531_23 = false;
    not_always_522_13 = loop_count;
    not_always_1395_28 = loop_count;
    once_condition_64_13 = false;
    not_always_1333_14 = loop_count;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1148_14 = loop_count;
    once_condition_57_14 = false;
    once_condition_38_14 = false;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    group_main_engine_level_specific_methods_bosses_1 = true;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    not_always_2086_58 = loop_count;
    once_condition_1844_58 = false;
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_jump_pad_1 = false;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    once_condition_1522_19 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    not_always_69_13 = loop_count;
    not_always_1425_13 = loop_count;
    once_condition_41_14 = false;
    not_always_1049_14 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1 = false;
    not_always_1496_34 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    not_always_45_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_57_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_450_13 = loop_count;
    not_always_1422_22 = loop_count;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_dialog_system_dialog_voices_voice_acting_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    not_always_1831_16 = loop_count;
    once_condition_138_0 = false;
    not_always_1449_13 = loop_count;
    not_always_1421_22 = loop_count;
    group_mac_controls_1 = false;
    not_always_172_8 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_prepare_1 = false;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_539_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    not_always_558_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    group_main_engine_level_specific_methods_cutscenes_asking_spade_for_help_1 = false;
    not_always_1516_19 = loop_count;
    not_always_553_13 = loop_count;
    not_always_813_13 = loop_count;
    not_always_64_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    not_always_2220_58 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = false;
    group_pause_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_9_defeated_1 = false;
    not_always_41_13 = loop_count;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_540_13 = loop_count;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    not_always_1421_13 = loop_count;
    not_always_70_13 = loop_count;
    not_always_606_14 = loop_count;
    not_always_1786_58 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1410_58 = loop_count;
    not_always_1450_13 = loop_count;
    once_condition_63_13 = false;
    group_main_engine_level_specific_methods_frame_transition_1 = false;
    not_always_174_8 = loop_count;
    not_always_99_0 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_6_7_flinch_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    once_condition_66_13 = false;
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1 = true;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    once_condition_4_19 = false;
    not_always_1039_13 = loop_count;
    not_always_2087_58 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    once_condition_59_14 = false;
    group_main_engine_level_specific_methods_arena_1 = true;
    every_1608_58 = 0.0f;
    once_condition_48_13 = false;
    not_always_1934_58 = loop_count;
    not_always_1981_58 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
    once_condition_1984_58 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    group_sound_events_carol_1 = false;
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1 = false;
    every_819_13 = 0.0f;
    not_always_814_13 = loop_count;
    not_always_1510_19 = loop_count;
    once_condition_58_14 = false;
    group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    not_always_311_14 = loop_count;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_744_13 = loop_count;
    not_always_95_0 = loop_count;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    not_always_1394_28 = loop_count;
    not_always_103_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    not_always_1400_29 = loop_count;
    not_always_1414_58 = loop_count;
    once_condition_50_13 = false;
    not_always_560_14 = loop_count;
    once_condition_1985_58 = false;
    once_condition_1523_28 = false;
    not_always_1515_19 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_58_13 = loop_count;
    not_always_1413_58 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_1514_19 = loop_count;
    not_always_1716_58 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    not_always_1525_19 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::loop_spawndebris_59()
{
    event_func_1176();
    event_func_1177();
    event_func_1178();
    event_func_6950();
    event_func_9423();
    event_func_11380();
}
void Frames::event_func_12988()
{
    // event 1868_59
    {
        if (!(group_main_engine_1)) goto event_1868_59_end;
        media.play(str_data_bgm_m_1up_ogg_48, 32-1, ((Active*)get_instance(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1868_59_end: ;
}
void Frames::loop_play_music_2_59()
{
    event_func_12988();
}
void Frames::event_func_12989()
{
    // event 1871_59
    {
        if (!(group_main_engine_1)) goto event_1871_59_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_stage9_ogg_211, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1871_59_end: ;
}
void Frames::loop_play_music_5_59()
{
    event_func_12989();
}
void Frames::event_func_12990()
{
    // event 1872_59
    {
        if (!(group_main_engine_1)) goto event_1872_59_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1872_59_end: ;
}
void Frames::loop_play_music_6_59()
{
    event_func_12990();
}
void Frames::loop_wrapper_sound_hurt1_59(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_59(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_59(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_59(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_59(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_59(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_process_call_resume_music_59(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_sound_idle7_59(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_59(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_16();
}
void Frames::loop_wrapper_sound_dig2_59(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_59(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_59(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_59(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_sound_explode5_59(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_59(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_process_call_unlock_music_59(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_59(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_sound_explode8_59(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_process_call_reset_music_59(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_59(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_59(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_59(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_explode0_59(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_59(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_59(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_camera_mode1_59(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_16();
}
void Frames::loop_wrapper_camera_mode0_59(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_16();
}
void Frames::loop_wrapper_process_call_play_music_59(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_59(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_59();
}
void Frames::loop_wrapper_sound_attack1_59(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_59(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_59(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_59(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_play_music_8_59(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_uppercut3_59(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_59(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_59(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_59(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
