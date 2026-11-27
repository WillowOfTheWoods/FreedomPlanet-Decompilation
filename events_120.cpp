#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_9700()
{
    // event 1489_40
    {
        if (!(group_main_engine_1)) goto event_1489_40_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1489_40_end;
        playersensorbottombig_397_instances.clear_selection();
        leveljccollapsingplatform_2444_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, leveljccollapsingplatform_2444_instances)) goto event_1489_40_end;
        for (ObjectIterator it(leveljccollapsingplatform_2444_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
        {
            loop_collapse_running = true;
            int times = int(8);
            loop_collapse_index = 0;
            while (loop_collapse_index < times) {
                loop_collapse_40();
                if (!loop_collapse_running) break;
                loop_collapse_index++;
            }
        }
        media.play_id(SOUND_COMMON_COLLAPSE_428, -1, 1);
    }
    event_1489_40_end: ;
}
void Frames::event_func_9701()
{
    // event 1491_40
    {
        if (!(group_main_engine_1)) goto event_1491_40_end;
        leveljccollapsingplatform_2444_instances.clear_selection();
        for (ObjectIterator it(leveljccollapsingplatform_2444_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (8))) { it.deselect(); continue; }
        }
        if (!leveljccollapsingplatform_2444_instances.has_selection()) goto event_1491_40_end;
        for (ObjectIterator it(leveljccollapsingplatform_2444_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1491_40_end: ;
}
void Frames::event_func_9702()
{
    // event 1492_40
    {
        if (!(group_main_engine_1)) goto event_1492_40_end;
        leveljccollapsingplatformpiece_2427_instances.clear_selection();
        for (ObjectIterator it(leveljccollapsingplatformpiece_2427_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!leveljccollapsingplatformpiece_2427_instances.has_selection()) goto event_1492_40_end;
        for (ObjectIterator it(leveljccollapsingplatformpiece_2427_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(2, 1);
        }
    }
    event_1492_40_end: ;
}
void Frames::event_func_9703()
{
    // event 1493_40
    {
        if (!(group_main_engine_1)) goto event_1493_40_end;
        leveljccollapsingplatformpiece_2427_instances.clear_selection();
        for (ObjectIterator it(leveljccollapsingplatformpiece_2427_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
        }
        if (!leveljccollapsingplatformpiece_2427_instances.has_selection()) goto event_1493_40_end;
        for (ObjectIterator it(leveljccollapsingplatformpiece_2427_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+0.3, 15));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1493_40_end: ;
}
void Frames::event_func_9704()
{
    // event 1494_40
    {
        if (!(group_main_engine_1)) goto event_1494_40_end;
        leveljccollapsingplatformpiece_2427_instances.clear_selection();
        for (ObjectIterator it(leveljccollapsingplatformpiece_2427_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (frame_bottom()+50))) { it.deselect(); continue; }
        }
        if (!leveljccollapsingplatformpiece_2427_instances.has_selection()) goto event_1494_40_end;
        for (ObjectIterator it(leveljccollapsingplatformpiece_2427_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1494_40_end: ;
}
void Frames::event_func_9705()
{
    // event 1507_40
    {
        if (!(group_main_engine_1)) goto event_1507_40_end;
        jcloop1_2445_instances.clear_selection();
        for (ObjectIterator it(jcloop1_2445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()))) { it.deselect(); continue; }
        }
        if (!jcloop1_2445_instances.has_selection()) goto event_1507_40_end;
        if (!check_not_overlap(jcloop1_2445_instances, player_389_instances)) goto event_1507_40_end;
        for (ObjectIterator it(jcloop1_2445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1507_40_end: ;
}
void Frames::event_func_9706()
{
    // event 1508_40
    {
        if (!(group_main_engine_1)) goto event_1508_40_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(15)) == (0))) goto event_1508_40_end;
        jcloop1_2445_instances.clear_selection();
        for (ObjectIterator it(jcloop1_2445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1508_40_end: ;
}
void Frames::event_func_9707()
{
    // event 1509_40
    {
        if (!(group_main_engine_1)) goto event_1509_40_end;
        jcloop1_2445_instances.clear_selection();
        for (ObjectIterator it(jcloop1_2445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()))) { it.deselect(); continue; }
        }
        if (!jcloop1_2445_instances.has_selection()) goto event_1509_40_end;
        for (ObjectIterator it(jcloop1_2445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1509_40_end: ;
}
void Frames::event_func_9708()
{
    // event 1532_40
    bool or_result_1532_40 = false;
    bool or_temp_result_1532_40_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1532_40_0_end;
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto or_event_1532_40_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemymeteorroller_2421_instances, qualifier_7)) goto or_event_1532_40_0_end;
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto or_event_1532_40_0_end;
        or_result_1532_40 = true;
        or_temp_result_1532_40_0 = true;
    }
    or_event_1532_40_0_end: ;
    enemymeteorroller_2421_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1532_40_0) {
        enemymeteorroller_2421_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1532_40
    bool or_temp_result_1532_40_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1532_40_1_end;
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto or_event_1532_40_1_end;
        or_result_1532_40 = true;
        or_temp_result_1532_40_1 = true;
        or_event_1532_40_1_end: ;
        if (or_temp_result_1532_40_1) {
            enemymeteorroller_2421_instances.save_selection();
        }
        if (!or_result_1532_40) goto or_final_or_event_1532_40_1_end;
        qualifier_7.empty_selection();
        enemymeteorroller_2421_instances.empty_selection();
        if (or_temp_result_1532_40_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1532_40_0 || or_temp_result_1532_40_1) {
            enemymeteorroller_2421_instances.restore_selection();
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        FrameObject * single_instance_1532_40_0; single_instance_1532_40_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemymeteorroller_2421_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1532_40_0 == NULL)
                    single_instance_1532_40_0 = new_obj;
            }
        }
        FrameObject * single_instance_1532_40_1; single_instance_1532_40_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemymeteorroller_2421_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1532_40_1 == NULL)
                    single_instance_1532_40_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_40();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(11);
        }
    }
    or_final_or_event_1532_40_1_end: ;
}
void Frames::event_func_9709()
{
    // event 1565_40
    bool or_result_1565_40 = false;
    bool or_temp_result_1565_40_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1565_40_0_end;
        enemyplantturretus_2365_instances.clear_selection();
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemyplantturretus_2365_instances.has_selection()) goto or_event_1565_40_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyplantturretus_2365_instances, qualifier_7)) goto or_event_1565_40_0_end;
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyplantturretus_2365_instances.has_selection()) goto or_event_1565_40_0_end;
        or_result_1565_40 = true;
        or_temp_result_1565_40_0 = true;
    }
    or_event_1565_40_0_end: ;
    qualifier_7.clear_saved_selection();
    enemyplantturretus_2365_instances.clear_saved_selection();
    if (or_temp_result_1565_40_0) {
        qualifier_7.save_selection();
        enemyplantturretus_2365_instances.save_selection();
    }
    // event 1565_40
    bool or_temp_result_1565_40_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1565_40_1_end;
        enemyplantturretus_2365_instances.clear_selection();
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyplantturretus_2365_instances.has_selection()) goto or_event_1565_40_1_end;
        or_result_1565_40 = true;
        or_temp_result_1565_40_1 = true;
        or_event_1565_40_1_end: ;
        if (or_temp_result_1565_40_1) {
            enemyplantturretus_2365_instances.save_selection();
        }
        if (!or_result_1565_40) goto or_final_or_event_1565_40_1_end;
        enemyplantturretus_2365_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1565_40_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1565_40_0 || or_temp_result_1565_40_1) {
            enemyplantturretus_2365_instances.restore_selection();
        }
        FrameObject * single_instance_1565_40_0; single_instance_1565_40_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyplantturretus_2365_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1565_40_0 == NULL)
                    single_instance_1565_40_0 = new_obj;
            }
        }
        FrameObject * single_instance_1565_40_1; single_instance_1565_40_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyplantturretus_2365_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1565_40_1 == NULL)
                    single_instance_1565_40_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_40();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        enemyplantturretus_2365_instances.clear_selection();
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(11);
        }
    }
    or_final_or_event_1565_40_1_end: ;
}
void Frames::event_func_9710()
{
    // event 1585_40
    bool or_result_1585_40 = false;
    bool or_temp_result_1585_40_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1585_40_0_end;
        enemybuoybuoy_2418_instances.clear_selection();
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemybuoybuoy_2418_instances.has_selection()) goto or_event_1585_40_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemybuoybuoy_2418_instances, qualifier_7)) goto or_event_1585_40_0_end;
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemybuoybuoy_2418_instances.has_selection()) goto or_event_1585_40_0_end;
        or_result_1585_40 = true;
        or_temp_result_1585_40_0 = true;
    }
    or_event_1585_40_0_end: ;
    enemybuoybuoy_2418_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1585_40_0) {
        enemybuoybuoy_2418_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1585_40
    bool or_temp_result_1585_40_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1585_40_1_end;
        enemybuoybuoy_2418_instances.clear_selection();
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemybuoybuoy_2418_instances.has_selection()) goto or_event_1585_40_1_end;
        or_result_1585_40 = true;
        or_temp_result_1585_40_1 = true;
        or_event_1585_40_1_end: ;
        if (or_temp_result_1585_40_1) {
            enemybuoybuoy_2418_instances.save_selection();
        }
        if (!or_result_1585_40) goto or_final_or_event_1585_40_1_end;
        qualifier_7.empty_selection();
        enemybuoybuoy_2418_instances.empty_selection();
        if (or_temp_result_1585_40_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1585_40_0 || or_temp_result_1585_40_1) {
            enemybuoybuoy_2418_instances.restore_selection();
        }
        FrameObject * single_instance_1585_40_0; single_instance_1585_40_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybuoybuoy_2418_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1585_40_0 == NULL)
                    single_instance_1585_40_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1585_40_0))->set_direction(2);
        FrameObject * single_instance_1585_40_1; single_instance_1585_40_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybuoybuoy_2418_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1585_40_1 == NULL)
                    single_instance_1585_40_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_40();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    or_final_or_event_1585_40_1_end: ;
}
void Frames::event_func_9711()
{
    // event 1609_40
    {
        if (!(group_main_engine_1)) goto event_1609_40_end;
        enemybullfrag_2417_instances.clear_selection();
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (10))) { it.deselect(); continue; }
        }
        if (!enemybullfrag_2417_instances.has_selection()) goto event_1609_40_end;
        FrameObject * single_instance_1609_40_0; single_instance_1609_40_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybullfrag_2417_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1609_40_0 == NULL)
                    single_instance_1609_40_0 = new_obj;
            }
        }
        FrameObject * single_instance_1609_40_1; single_instance_1609_40_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybullfrag_2417_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1609_40_1 == NULL)
                    single_instance_1609_40_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1609_40_1))->set_direction(2);
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -8);
        }
        {
            loop_spawndebris_running = true;
            int times = int(8);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_40();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1609_40_2_end;
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
        dynamic_1609_40_2_end: ;
    }
    event_1609_40_end: ;
}
void Frames::event_func_9712()
{
    // event 1639_40
    {
        if (!(group_main_engine_1)) goto event_1639_40_end;
        enemysharktorpedo_2423_instances.clear_selection();
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (10))) { it.deselect(); continue; }
        }
        if (!enemysharktorpedo_2423_instances.has_selection()) goto event_1639_40_end;
        FrameObject * single_instance_1639_40_0; single_instance_1639_40_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysharktorpedo_2423_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1639_40_0 == NULL)
                    single_instance_1639_40_0 = new_obj;
            }
        }
        FrameObject * single_instance_1639_40_1; single_instance_1639_40_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysharktorpedo_2423_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1639_40_1 == NULL)
                    single_instance_1639_40_1 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_40();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1639_40_end: ;
}
void Frames::event_func_9713()
{
    // event 1649_40
    {
        if (!(group_main_engine_1)) goto event_1649_40_end;
        enemybubblorbiter_2443_instances.clear_selection();
        for (ObjectIterator it(enemybubblorbiter_2443_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!enemybubblorbiter_2443_instances.has_selection()) goto event_1649_40_end;
        for (ObjectIterator it(enemybubblorbiter_2443_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, (((Active*)*it)->alterables->values.get(3)+3)%math_helper%360);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4)-16+sin_deg(((Active*)*it)->alterables->values.get(3))*16);
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(player_389_instances))->x + 0, ((Active*)get_instance(player_389_instances))->y + 0));
        }
    }
    event_1649_40_end: ;
}
void Frames::event_func_9714()
{
    // event 1650_40
    {
        if (!(group_main_engine_1)) goto event_1650_40_end;
        enemybubblorbiter_2443_instances.clear_selection();
        for (ObjectIterator it(enemybubblorbiter_2443_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
        }
        if (!enemybubblorbiter_2443_instances.has_selection()) goto event_1650_40_end;
        {
            badnikgolemshot_1197_instances.clear_selection();
            SavedSelection extra_badnikgolemshot_1197_instances(badnikgolemshot_1197_instances);
            for (SavedIterator it(extra_badnikgolemshot_1197_instances); !it.end(); ++it) {
                foreach_instance_bbl = ((Active*)*it);
                foreach_bbl_40();
            }
        }
    }
    event_1650_40_end: ;
}
void Frames::event_func_9715()
{
    // event 1652_40
    {
        if (!(group_main_engine_1)) goto event_1652_40_end;
        badnikgolemshot_1197_instances.clear_selection();
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (270))) { it.deselect(); continue; }
        }
        if (!badnikgolemshot_1197_instances.has_selection()) goto event_1652_40_end;
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1652_40_end: ;
}
void Frames::event_func_9716()
{
    // event 1653_40
    {
        if (!(group_main_engine_1)) goto event_1653_40_end;
        badnikgolemshot_1197_instances.clear_selection();
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) >= (270))) { it.deselect(); continue; }
        }
        if (!badnikgolemshot_1197_instances.has_selection()) goto event_1653_40_end;
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1653_40_end: ;
}
void Frames::event_func_9717()
{
    // event 1654_40
    bool or_result_1654_40 = false;
    bool or_temp_result_1654_40_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1654_40_0_end;
        enemybubblorbiter_2443_instances.clear_selection();
        for (ObjectIterator it(enemybubblorbiter_2443_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemybubblorbiter_2443_instances.has_selection()) goto or_event_1654_40_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemybubblorbiter_2443_instances, qualifier_7)) goto or_event_1654_40_0_end;
        for (ObjectIterator it(enemybubblorbiter_2443_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemybubblorbiter_2443_instances.has_selection()) goto or_event_1654_40_0_end;
        or_result_1654_40 = true;
        or_temp_result_1654_40_0 = true;
    }
    or_event_1654_40_0_end: ;
    enemybubblorbiter_2443_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1654_40_0) {
        enemybubblorbiter_2443_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1654_40
    bool or_temp_result_1654_40_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1654_40_1_end;
        enemybubblorbiter_2443_instances.clear_selection();
        for (ObjectIterator it(enemybubblorbiter_2443_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemybubblorbiter_2443_instances.has_selection()) goto or_event_1654_40_1_end;
        or_result_1654_40 = true;
        or_temp_result_1654_40_1 = true;
        or_event_1654_40_1_end: ;
        if (or_temp_result_1654_40_1) {
            enemybubblorbiter_2443_instances.save_selection();
        }
        if (!or_result_1654_40) goto or_final_or_event_1654_40_1_end;
        enemybubblorbiter_2443_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1654_40_0 || or_temp_result_1654_40_1) {
            enemybubblorbiter_2443_instances.restore_selection();
        }
        if (or_temp_result_1654_40_0) {
            qualifier_7.restore_selection();
        }
        for (ObjectIterator it(enemybubblorbiter_2443_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1654_40_0; single_instance_1654_40_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybubblorbiter_2443_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1654_40_0 == NULL)
                    single_instance_1654_40_0 = new_obj;
            }
        }
        FrameObject * single_instance_1654_40_1; single_instance_1654_40_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybubblorbiter_2443_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1654_40_1 == NULL)
                    single_instance_1654_40_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_SHADEKILL_2_50, -1, 1);
    }
    or_final_or_event_1654_40_1_end: ;
}
void Frames::event_func_9718()
{
    // event 1655_40
    {
        if (!(group_main_engine_1)) goto event_1655_40_end;
        badnikgolemshot_1197_instances.clear_selection();
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (180))) { it.deselect(); continue; }
        }
        if (!badnikgolemshot_1197_instances.has_selection()) goto event_1655_40_end;
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+6+sin_deg(((Active*)*it)->alterables->values.get(6))*6);
        }
    }
    event_1655_40_end: ;
}
void Frames::event_func_9719()
{
    // event 1656_40
    {
        if (!(group_main_engine_1)) goto event_1656_40_end;
        badnikgolemshot_1197_instances.clear_selection();
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) >= (180))) { it.deselect(); continue; }
        }
        if (!badnikgolemshot_1197_instances.has_selection()) goto event_1656_40_end;
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-6+sin_deg(((Active*)*it)->alterables->values.get(6))*6);
        }
    }
    event_1656_40_end: ;
}
void Frames::event_func_9720()
{
    // event 1660_40
    {
        if (!(group_main_engine_1)) goto event_1660_40_end;
        badnikgolemshot_1197_instances.clear_selection();
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) != (1))) { it.deselect(); continue; }
        }
        if (!badnikgolemshot_1197_instances.has_selection()) goto event_1660_40_end;
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(6);
        }
        badnikgolemshot2_1198_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(badnikgolemshot_1197_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_badnikgolemshot2_1198(parent->x + -6, parent->y + -6), parent->layer);
                badnikgolemshot2_1198_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_badnikgolemshot2_1198(parent->x + 6, parent->y + -6), parent->layer);
                badnikgolemshot2_1198_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_badnikgolemshot2_1198(parent->x + 6, parent->y + 6), parent->layer);
                badnikgolemshot2_1198_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_badnikgolemshot2_1198(parent->x + -6, parent->y + 6), parent->layer);
                badnikgolemshot2_1198_instances.add_back();
            }
        }
        FrameObject * single_instance_1660_40_1; single_instance_1660_40_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(badnikgolemshot_1197_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1660_40_1 == NULL)
                    single_instance_1660_40_1 = new_obj;
            }
        }
        media.play_id(SOUND_BUBBLEHIT_69, -1, 1);
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(4);
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1660_40_end: ;
}
void Frames::event_func_9721()
{
    // event 1661_40
    {
        if (!(group_main_engine_1)) goto event_1661_40_end;
        badnikgolemshot_1197_instances.clear_selection();
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(7))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(4))) { it.deselect(); continue; }
        }
        if (!badnikgolemshot_1197_instances.has_selection()) goto event_1661_40_end;
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(7);
            ((Active*)*it)->destroy();
        }
        badnikgolemshot2_1198_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(badnikgolemshot_1197_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_badnikgolemshot2_1198(parent->x + -6, parent->y + -6), parent->layer);
                badnikgolemshot2_1198_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_badnikgolemshot2_1198(parent->x + 6, parent->y + -6), parent->layer);
                badnikgolemshot2_1198_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_badnikgolemshot2_1198(parent->x + 6, parent->y + 6), parent->layer);
                badnikgolemshot2_1198_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_badnikgolemshot2_1198(parent->x + -6, parent->y + 6), parent->layer);
                badnikgolemshot2_1198_instances.add_back();
            }
        }
        media.play_id(SOUND_BUBBLEHIT_69, -1, 1);
        FrameObject * single_instance_1661_40_1; single_instance_1661_40_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(badnikgolemshot_1197_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1661_40_1 == NULL)
                    single_instance_1661_40_1 = new_obj;
            }
        }
    }
    event_1661_40_end: ;
}
void Frames::event_func_9722()
{
    // event 1662_40
    {
        if (!(group_main_engine_1)) goto event_1662_40_end;
        badnikgolemshot_1197_instances.clear_selection();
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->is_near_border(-200))) { it.deselect(); continue; }
        }
        if (!badnikgolemshot_1197_instances.has_selection()) goto event_1662_40_end;
        for (ObjectIterator it(badnikgolemshot_1197_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1662_40_end: ;
}
void Frames::event_func_9723()
{
    // event 1705_40
    {
        if (!(group_main_engine_1)) goto event_1705_40_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (0))) goto event_1705_40_end;
        if (!(((Active*)get_instance(playersensorbottombig_397_instances))->overlaps_background())) goto event_1705_40_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 1842, 502, 2099, 699)) == (0))) goto event_1705_40_end;
        if (!((objects_in_zone(player_389_instances, 5020, 1424, 5277, 1621)) == (0))) goto event_1705_40_end;
        if (!((objects_in_zone(player_389_instances, 6616, 1399, 6873, 1596)) == (0))) goto event_1705_40_end;
        if (!((objects_in_zone(player_389_instances, 6695, 405, 8138, 772)) == (0))) goto event_1705_40_end;
        if (!((objects_in_zone(player_389_instances, 8000, 1482, 9731, 1710)) == (0))) goto event_1705_40_end;
        if (!((objects_in_zone(player_389_instances, 10342, 1471, 14800, 1764)) == (0))) goto event_1705_40_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_not_overlap(playersensorbottombig_397_instances, qualifier_26)) goto event_1705_40_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1705_40_end: ;
}
void Frames::event_func_9724()
{
    // event 1712_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1)) goto event_1712_40_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->alterables->values.get(0)) >= (32))) goto event_1712_40_end;
        ((Active*)get_instance(guiscoretimerings_451_instances))->set_visible(true);
        ((Active*)get_instance(guiicon_452_instances))->set_visible(true);
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
        if (!group_pause_1) {
            group_pause_1 = true;
        }
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Counter*)get_instance(guilives_454_instances))->set_visible(true);
        levelcardintro1_464_instances.clear_selection();
        for (ObjectIterator it(levelcardintro1_464_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        global_values->set(4, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
            group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = false;
    
    }
    event_1712_40_end: ;
}
void Frames::event_func_9725()
{
    // event 1714_40
    {
        if (!(group_main_engine_1)) goto event_1714_40_end;
        if (!((global_values->get(4)) < (2))) goto event_1714_40_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (820))) goto event_1714_40_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (7050))) goto event_1714_40_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (7250))) goto event_1714_40_end;
        global_values->set(4, 2);
        global_values->set(5, 7080);
        global_values->set(6, 790);
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
    event_1714_40_end: ;
}
void Frames::event_func_9726()
{
    // event 1715_40
    {
        if (!(group_main_engine_1)) goto event_1715_40_end;
        ((Active*)get_instance(bosshovercop_2332_instances))->set_y(((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(1)+sin_deg(((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(2))*5);
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.set(2, (((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(2)+2)%math_helper%360);
        ((Active*)get_instance(bosshovercop_2332_instances))->set_x(((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(0));
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.add(0, ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(4));
        ((Active*)get_instance(bosshovercopturbine1_2333_instances, default_active_instance))->move_front(((Active*)get_instance(bosshovercop_2332_instances)));
        {
            bosshovercopturbine1_2333_instances.clear_selection();
            ObjectIterator other_it(bosshovercopturbine1_2333_instances);
            bosshovercopsiren1_2336_instances.clear_selection();
            for (ObjectIterator it(bosshovercopsiren1_2336_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1715_40_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1715_40_0_end: ;
        {
            ObjectIterator other_it(bosshovercopturbine1_2333_instances);
            bosshovercopsiren2_2337_instances.clear_selection();
            for (ObjectIterator it(bosshovercopsiren2_2337_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1715_40_1_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1715_40_1_end: ;
        ((Active*)get_instance(bosshovercopturbine2_2331_instances, default_active_instance))->move_back(((Active*)get_instance(bosshovercop_2332_instances)));
        {
            bosshovercopturbine2_2331_instances.clear_selection();
            ObjectIterator other_it(bosshovercopturbine2_2331_instances);
            bosshovercopsiren4_2329_instances.clear_selection();
            for (ObjectIterator it(bosshovercopsiren4_2329_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1715_40_2_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_1715_40_2_end: ;
        {
            ObjectIterator other_it(bosshovercopturbine2_2331_instances);
            bosshovercopsiren3_2330_instances.clear_selection();
            for (ObjectIterator it(bosshovercopsiren3_2330_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1715_40_3_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_1715_40_3_end: ;
        {
            ObjectIterator other_it(bosshovercopturbine1_2333_instances);
            bosshovercoppropellor_2334_instances.clear_selection();
            for (ObjectIterator it(bosshovercoppropellor_2334_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1715_40_4_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1715_40_4_end: ;
        {
            ObjectIterator other_it(bosshovercopturbine2_2331_instances);
            bosshovercoppropellor2_2335_instances.clear_selection();
            for (ObjectIterator it(bosshovercoppropellor2_2335_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1715_40_5_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1715_40_5_end: ;
        ((Active*)get_instance(bosshovercophook2_2440_instances))->move_back(((Active*)get_instance(bosshovercop_2332_instances)));
        ((Active*)get_instance(bosshovercophook2_2440_instances))->set_x(((Active*)get_instance(bosshovercop_2332_instances))->get_x());
        ((Active*)get_instance(bosshovercophook2_2440_instances))->set_y(((Active*)get_instance(bosshovercop_2332_instances))->get_box_index(3)+((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(9));
    }
    event_1715_40_end: ;
}
void Frames::event_func_9727()
{
    // event 1716_40
    {
        if (!(group_main_engine_1)) goto event_1716_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(3)) == (1))) goto event_1716_40_end;
        bosshovercopturbine1_2333_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine1_2333_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bosshovercopturbine1_2333_instances.has_selection()) goto event_1716_40_end;
        for (ObjectIterator it(bosshovercopturbine1_2333_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosshovercop_2332_instances));
            if (parent == NULL) goto pos_end_1716_40_0;
            ((Active*)*it)->set_global_position(parent->get_x() + -52, parent->get_y() + -31);
            pos_end_1716_40_0: ;
        }
    }
    event_1716_40_end: ;
}
void Frames::event_func_9728()
{
    // event 1717_40
    {
        if (!(group_main_engine_1)) goto event_1717_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(3)) == (1))) goto event_1717_40_end;
        bosshovercopturbine2_2331_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine2_2331_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bosshovercopturbine2_2331_instances.has_selection()) goto event_1717_40_end;
        for (ObjectIterator it(bosshovercopturbine2_2331_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosshovercop_2332_instances));
            if (parent == NULL) goto pos_end_1717_40_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 28, parent->get_y() + -31);
            pos_end_1717_40_0: ;
        }
    }
    event_1717_40_end: ;
}
void Frames::event_func_9729()
{
    // event 1718_40
    {
        if (!(group_main_engine_1)) goto event_1718_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(3)) == (-1))) goto event_1718_40_end;
        bosshovercopturbine1_2333_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine1_2333_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bosshovercopturbine1_2333_instances.has_selection()) goto event_1718_40_end;
        for (ObjectIterator it(bosshovercopturbine1_2333_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosshovercop_2332_instances));
            if (parent == NULL) goto pos_end_1718_40_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 52, parent->get_y() + -31);
            pos_end_1718_40_0: ;
        }
    }
    event_1718_40_end: ;
}
void Frames::event_func_9730()
{
    // event 1719_40
    {
        if (!(group_main_engine_1)) goto event_1719_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(3)) == (-1))) goto event_1719_40_end;
        bosshovercopturbine2_2331_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine2_2331_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bosshovercopturbine2_2331_instances.has_selection()) goto event_1719_40_end;
        for (ObjectIterator it(bosshovercopturbine2_2331_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosshovercop_2332_instances));
            if (parent == NULL) goto pos_end_1719_40_0;
            ((Active*)*it)->set_global_position(parent->get_x() + -28, parent->get_y() + -31);
            pos_end_1719_40_0: ;
        }
    }
    event_1719_40_end: ;
}
void Frames::event_func_9731()
{
    // event 1720_40
    {
        if (!(group_main_engine_1)) goto event_1720_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(3)) == (1))) goto event_1720_40_end;
        bosshovercopsiren2_2337_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren2_2337_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine1_2333_instances, it.current_index));
            if (parent == NULL) goto pos_end_1720_40_0;
            ((Active*)*it)->set_global_position(parent->get_x() + -22, parent->get_y() + -18);
            pos_end_1720_40_0: ;
        }
        bosshovercopsiren1_2336_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren1_2336_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine1_2333_instances, it.current_index));
            if (parent == NULL) goto pos_end_1720_40_1;
            ((Active*)*it)->set_global_position(parent->get_x() + -8, parent->get_y() + -18);
            pos_end_1720_40_1: ;
        }
        bosshovercopsiren3_2330_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren3_2330_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine2_2331_instances, it.current_index));
            if (parent == NULL) goto pos_end_1720_40_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 22, parent->get_y() + -18);
            pos_end_1720_40_2: ;
        }
        bosshovercopsiren4_2329_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren4_2329_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine2_2331_instances, it.current_index));
            if (parent == NULL) goto pos_end_1720_40_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + -18);
            pos_end_1720_40_3: ;
        }
        bosshovercoppropellor_2334_instances.clear_selection();
        for (ObjectIterator it(bosshovercoppropellor_2334_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine1_2333_instances, it.current_index));
            if (parent == NULL) goto pos_end_1720_40_4;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1720_40_4: ;
        }
        bosshovercoppropellor2_2335_instances.clear_selection();
        for (ObjectIterator it(bosshovercoppropellor2_2335_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine2_2331_instances, it.current_index));
            if (parent == NULL) goto pos_end_1720_40_5;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1720_40_5: ;
        }
        for (ObjectIterator it(bosshovercoppropellor_2334_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle((((Active*)*it)->get_angle()+10)%math_helper%360, 0);
        }
        for (ObjectIterator it(bosshovercoppropellor2_2335_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle((((Active*)*it)->get_angle()+10)%math_helper%360, 0);
        }
        ((Active*)get_instance(bosshovercop_2332_instances))->set_direction(0);
        bosshovercopturbine1_2333_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine1_2333_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        bosshovercopturbine2_2331_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine2_2331_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(bosshovercophook_2449_instances))->set_direction(0);
        {
            FrameObject * parent = ((Active*)get_instance(bosshovercop_2332_instances));
            if (parent == NULL) goto pos_end_1720_40_6;
            ((Active*)get_instance(levelhovercraftlight_2451_instances))->set_global_position(parent->get_x() + 54, parent->get_y() + 32);
            pos_end_1720_40_6: ;
        }
        ((Active*)get_instance(levelhovercraftlight_2451_instances))->set_direction(0);
    }
    event_1720_40_end: ;
}
void Frames::event_func_9732()
{
    // event 1721_40
    {
        if (!(group_main_engine_1)) goto event_1721_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(3)) == (-1))) goto event_1721_40_end;
        bosshovercopsiren2_2337_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren2_2337_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine1_2333_instances, it.current_index));
            if (parent == NULL) goto pos_end_1721_40_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 22, parent->get_y() + -18);
            pos_end_1721_40_0: ;
        }
        bosshovercopsiren1_2336_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren1_2336_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine1_2333_instances, it.current_index));
            if (parent == NULL) goto pos_end_1721_40_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + -18);
            pos_end_1721_40_1: ;
        }
        bosshovercopsiren3_2330_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren3_2330_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine2_2331_instances, it.current_index));
            if (parent == NULL) goto pos_end_1721_40_2;
            ((Active*)*it)->set_global_position(parent->get_x() + -22, parent->get_y() + -18);
            pos_end_1721_40_2: ;
        }
        bosshovercopsiren4_2329_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren4_2329_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine2_2331_instances, it.current_index));
            if (parent == NULL) goto pos_end_1721_40_3;
            ((Active*)*it)->set_global_position(parent->get_x() + -8, parent->get_y() + -18);
            pos_end_1721_40_3: ;
        }
        bosshovercoppropellor_2334_instances.clear_selection();
        for (ObjectIterator it(bosshovercoppropellor_2334_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine1_2333_instances, it.current_index));
            if (parent == NULL) goto pos_end_1721_40_4;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1721_40_4: ;
        }
        bosshovercoppropellor2_2335_instances.clear_selection();
        for (ObjectIterator it(bosshovercoppropellor2_2335_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine2_2331_instances, it.current_index));
            if (parent == NULL) goto pos_end_1721_40_5;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1721_40_5: ;
        }
        for (ObjectIterator it(bosshovercoppropellor_2334_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle((((Active*)*it)->get_angle()+10)%math_helper%360, 0);
        }
        for (ObjectIterator it(bosshovercoppropellor2_2335_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle((((Active*)*it)->get_angle()+10)%math_helper%360, 0);
        }
        ((Active*)get_instance(bosshovercop_2332_instances))->set_direction(16);
        bosshovercopturbine1_2333_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine1_2333_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        bosshovercopturbine2_2331_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine2_2331_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        ((Active*)get_instance(bosshovercophook_2449_instances))->set_direction(16);
        {
            FrameObject * parent = ((Active*)get_instance(bosshovercop_2332_instances));
            if (parent == NULL) goto pos_end_1721_40_6;
            ((Active*)get_instance(levelhovercraftlight_2451_instances))->set_global_position(parent->get_x() + -54, parent->get_y() + 32);
            pos_end_1721_40_6: ;
        }
        ((Active*)get_instance(levelhovercraftlight_2451_instances))->set_direction(16);
    }
    event_1721_40_end: ;
}
void Frames::event_func_9733()
{
    // event 1722_40
    {
        if (!(group_main_engine_1)) goto event_1722_40_end;
        bosshovercopturbine1_2333_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine1_2333_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, (((Active*)*it)->alterables->values.get(3)+5)%math_helper%60);
        }
        bosshovercopturbine2_2331_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine2_2331_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, (((Active*)get_single(bosshovercopturbine1_2333_instances, it.current_index, default_active_instance))->alterables->values.get(3)+5)%math_helper%60);
        }
        bosshovercopsiren2_2337_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren2_2337_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bosshovercopsiren3_2330_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren3_2330_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bosshovercopsiren1_2336_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren1_2336_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        bosshovercopsiren4_2329_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren4_2329_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1722_40_end: ;
}
void Frames::event_func_9734()
{
    // event 1723_40
    {
        if (!(group_main_engine_1)) goto event_1723_40_end;
        bosshovercopturbine1_2333_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine1_2333_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (30))) { it.deselect(); continue; }
        }
        if (!bosshovercopturbine1_2333_instances.has_selection()) goto event_1723_40_end;
        bosshovercopsiren1_2336_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren1_2336_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bosshovercopsiren2_2337_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren2_2337_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1723_40_end: ;
}
void Frames::event_func_9735()
{
    // event 1724_40
    {
        if (!(group_main_engine_1)) goto event_1724_40_end;
        bosshovercopturbine2_2331_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine2_2331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (30))) { it.deselect(); continue; }
        }
        if (!bosshovercopturbine2_2331_instances.has_selection()) goto event_1724_40_end;
        bosshovercopsiren4_2329_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren4_2329_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bosshovercopsiren3_2330_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren3_2330_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1724_40_end: ;
}
void Frames::event_func_9736()
{
    // event 1725_40
    {
        if (!(group_main_engine_1)) goto event_1725_40_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(bosshovercop_2332_instances))->get_x()))) goto event_1725_40_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) > (((Active*)get_instance(bosshovercop_2332_instances))->get_y()-100))) goto event_1725_40_end;
        if (once_condition_1725_40) goto event_1725_40_end;
        once_condition_1725_40 = true;
        if (!group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_main_1) {
            group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_main_1 = true;
        }
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.set(4, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+1, 9));
    }
    event_1725_40_end: ;
}
void Frames::event_func_9737()
{
    // event 1726_40
    {
        if (!(group_main_engine_1)) goto event_1726_40_end;
        if (!(((Active*)get_instance(playericedeath_2441_instances))->flags & VISIBLE)) goto event_1726_40_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1726_40_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 9);
    }
    event_1726_40_end: ;
}
void Frames::event_func_9738()
{
    // event 1727_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_main_1)) goto event_1727_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-500))) goto event_1727_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1727_40_end;
        if (once_condition_1727_40) goto event_1727_40_end;
        once_condition_1727_40 = true;
        media.play_id(SOUND_POLICE_279, -1, 1);
    }
    event_1727_40_end: ;
}
void Frames::event_func_9739()
{
    // event 1728_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_main_1)) goto event_1728_40_end;
        if (!((global_values->get(3)%math_helper%15) == (0))) goto event_1728_40_end;
        if (!(((Active*)get_instance(bosshovercop_2332_instances))->alterables->flags.is_off(6))) goto event_1728_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(3)) == (1))) goto event_1728_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-400))) goto event_1728_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1728_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+100))) goto event_1728_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(7)) > (0))) goto event_1728_40_end;
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.sub(7, 1);
        FrameObject * single_instance_1728_40_0; single_instance_1728_40_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosshovercop_2332_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosshovercopchargeglow_2432(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1728_40_0 == NULL)
                    single_instance_1728_40_0 = new_obj;
            }
        }
    }
    event_1728_40_end: ;
}
void Frames::event_func_9740()
{
    // event 1729_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_main_1)) goto event_1729_40_end;
        if (!((global_values->get(3)%math_helper%15) == (0))) goto event_1729_40_end;
        if (!(((Active*)get_instance(bosshovercop_2332_instances))->alterables->flags.is_off(6))) goto event_1729_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(3)) == (-1))) goto event_1729_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1729_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+400))) goto event_1729_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+100))) goto event_1729_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(7)) > (0))) goto event_1729_40_end;
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.sub(7, 1);
        FrameObject * single_instance_1729_40_0; single_instance_1729_40_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosshovercop_2332_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosshovercopchargeglow_2432(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1729_40_0 == NULL)
                    single_instance_1729_40_0 = new_obj;
            }
        }
    }
    event_1729_40_end: ;
}
void Frames::event_func_9741()
{
    // event 1730_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_main_1)) goto event_1730_40_end;
        bosshovercopchargeglow_2432_instances.clear_selection();
        for (ObjectIterator it(bosshovercopchargeglow_2432_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(3));
            ((Active*)*it)->set_direction(((Active*)get_instance(bosshovercop_2332_instances))->get_direction());
        }
        for (ObjectIterator it(bosshovercopchargeglow_2432_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosshovercop_2332_instances));
            if (parent == NULL) goto pos_end_1730_40_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1730_40_0: ;
        }
    }
    event_1730_40_end: ;
}
void Frames::event_func_9742()
{
    // event 1731_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_main_1)) goto event_1731_40_end;
        bosshovercopchargeglow_2432_instances.clear_selection();
        for (ObjectIterator it(bosshovercopchargeglow_2432_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) > (3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bosshovercopchargeglow_2432_instances.has_selection()) goto event_1731_40_end;
        FrameObject * single_instance_1731_40_0; single_instance_1731_40_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosshovercopchargeglow_2432_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossicecrystal_2430(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1731_40_0 == NULL)
                    single_instance_1731_40_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1731_40_0))->alterables->values.set(2, (3+randrange(30)*0.1)*((Active*)get_single(bosshovercopchargeglow_2432_instances, default_active_instance))->alterables->values.get(0));
        ((Active*)((Active*)single_instance_1731_40_0))->alterables->values.set(3, -5);
        for (ObjectIterator it(bosshovercopchargeglow_2432_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1731_40_end: ;
}
void Frames::event_func_9743()
{
    // event 1732_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_main_1)) goto event_1732_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(7)) <= (0))) goto event_1732_40_end;
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.sub(7, 1);
    }
    event_1732_40_end: ;
}
void Frames::event_func_9744()
{
    // event 1733_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_main_1)) goto event_1733_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(7)) == (-100))) goto event_1733_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(8)) == (0))) goto event_1733_40_end;
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.set(8, 1);
        FrameObject * single_instance_1733_40_0; single_instance_1733_40_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosshovercophook2_2440_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossicemissile_2433(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1733_40_0 == NULL)
                    single_instance_1733_40_0 = new_obj;
            }
        }
        media.play_id(SOUND_ROTATEBIG_165, -1, 1);
    }
    event_1733_40_end: ;
}
void Frames::event_func_9745()
{
    // event 1734_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_main_1)) goto event_1734_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(8)) == (1))) goto event_1734_40_end;
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.add(9, 2);
        bossicemissile_2433_instances.clear_selection();
        for (ObjectIterator it(bossicemissile_2433_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosshovercophook2_2440_instances));
            if (parent == NULL) goto pos_end_1734_40_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1734_40_0: ;
        }
        ((Active*)get_single(bossicemissile_2433_instances, default_active_instance))->move_back(((Active*)get_instance(bosshovercophook2_2440_instances)));
    }
    event_1734_40_end: ;
}
void Frames::event_func_9746()
{
    // event 1735_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_main_1)) goto event_1735_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(8)) == (1))) goto event_1735_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(9)) >= (0))) goto event_1735_40_end;
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.add(8, 1);
        media.stop_sample(SOUND_ROTATEBIG_165);
        media.play_id(SOUND_ROTATEBIG_STOP_166, -1, 1);
    }
    event_1735_40_end: ;
}
void Frames::event_func_9747()
{
    // event 1736_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_main_1)) goto event_1736_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(8)) > (1))) goto event_1736_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(8)) < (30))) goto event_1736_40_end;
        bossicemissile_2433_instances.clear_selection();
        for (ObjectIterator it(bossicemissile_2433_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosshovercophook2_2440_instances));
            if (parent == NULL) goto pos_end_1736_40_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1736_40_0: ;
        }
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.add(8, 1);
        for (ObjectIterator it(bossicemissile_2433_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(3)*2);
        }
    }
    event_1736_40_end: ;
}
void Frames::event_func_9748()
{
    // event 1737_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_main_1)) goto event_1737_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(8)) == (30))) goto event_1737_40_end;
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.add(8, 1);
        bossicemissile_2433_instances.clear_selection();
        for (ObjectIterator it(bossicemissile_2433_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
        }
        media.play_id(SOUND_COMMON_MISSILE_195, -1, 1);
    }
    event_1737_40_end: ;
}
void Frames::event_func_9749()
{
    // event 1738_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_main_1)) goto event_1738_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(8)) > (30))) goto event_1738_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(8)) < (60))) goto event_1738_40_end;
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.add(8, 1);
    }
    event_1738_40_end: ;
}
void Frames::event_func_9750()
{
    // event 1739_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_main_1)) goto event_1739_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(8)) >= (60))) goto event_1739_40_end;
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.add(9, -2);
    }
    event_1739_40_end: ;
}
void Frames::event_func_9751()
{
    // event 1740_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_main_1)) goto event_1740_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(8)) >= (60))) goto event_1740_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(9)) <= (-56))) goto event_1740_40_end;
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.set(8, 0);
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.add(14, 1);
    }
    event_1740_40_end: ;
}
void Frames::event_func_9752()
{
    // event 1741_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_main_1)) goto event_1741_40_end;
        if (!(((Active*)get_instance(bosshovercop_2332_instances))->alterables->flags.is_off(6))) goto event_1741_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(14)) > (2))) goto event_1741_40_end;
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->flags.enable(6);
    }
    event_1741_40_end: ;
}
void Frames::event_func_9753()
{
    // event 1742_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_main_1)) goto event_1742_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(7)) < (-200))) goto event_1742_40_end;
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.set(7, 4);
    }
    event_1742_40_end: ;
}
void Frames::event_func_9754()
{
    // event 1743_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_main_1)) goto event_1743_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()+10))) goto event_1743_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(3)) != (-1))) goto event_1743_40_end;
        bosshovercop_2332_instances.clear_selection();
        if (!check_not_overlap(bosshovercop_2332_instances, player_389_instances)) goto event_1743_40_end;
        if (!(((Active*)get_instance(bosshovercop_2332_instances))->alterables->flags.is_off(6))) goto event_1743_40_end;
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.set(3, -1);
    }
    event_1743_40_end: ;
}
void Frames::event_func_9755()
{
    // event 1744_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_main_1)) goto event_1744_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()-10))) goto event_1744_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(3)) != (1))) goto event_1744_40_end;
        bosshovercop_2332_instances.clear_selection();
        if (!check_not_overlap(bosshovercop_2332_instances, player_389_instances)) goto event_1744_40_end;
        if (!(((Active*)get_instance(bosshovercop_2332_instances))->alterables->flags.is_off(6))) goto event_1744_40_end;
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.set(3, 1);
    }
    event_1744_40_end: ;
}
void Frames::event_func_9756()
{
    // event 1745_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_main_1)) goto event_1745_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+200))) goto event_1745_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(4)) < (5))) goto event_1745_40_end;
        if (!(((Active*)get_instance(bosshovercop_2332_instances))->alterables->flags.is_off(6))) goto event_1745_40_end;
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.set(4, ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(4)+0.2);
    }
    event_1745_40_end: ;
}
void Frames::event_func_9757()
{
    // event 1746_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_main_1)) goto event_1746_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()+200))) goto event_1746_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(4)) > (-5))) goto event_1746_40_end;
        if (!(((Active*)get_instance(bosshovercop_2332_instances))->alterables->flags.is_off(6))) goto event_1746_40_end;
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.set(4, ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(4)-0.2);
    }
    event_1746_40_end: ;
}
void Frames::event_func_9758()
{
    // event 1747_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_main_1)) goto event_1747_40_end;
        if (!(((Active*)get_instance(bosshovercop_2332_instances))->alterables->flags.is_on(6))) goto event_1747_40_end;
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.set(4, ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(4)+0.2);
    }
    event_1747_40_end: ;
}
void Frames::event_func_9759()
{
    // event 1748_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_main_1)) goto event_1748_40_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (9))) goto event_1748_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(5)) > (0))) goto event_1748_40_end;
        ((Active*)get_instance(playerskinsash_418_instances))->set_visible(false);
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
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_visible(false);
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
        ((Active*)get_instance(playericedeath_2441_instances))->set_visible(true);
    }
    event_1748_40_end: ;
}
void Frames::event_func_9760()
{
    // event 1749_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_main_1)) goto event_1749_40_end;
        if (!(((Active*)get_instance(playericedeath_2441_instances))->flags & VISIBLE)) goto event_1749_40_end;
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            if (parent == NULL) goto pos_end_1749_40_0;
            ((Active*)get_instance(playericedeath_2441_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1749_40_0: ;
        }
        ((Active*)get_instance(playericedeath_2441_instances))->move_back();
    }
    event_1749_40_end: ;
}
void Frames::event_func_9761()
{
    // event 1750_40
    bool or_result_1750_40 = false;
    bool or_temp_result_1750_40_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_main_1)) goto or_event_1750_40_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1750_40_0_end;
        playericedeath_2441_instances.clear_selection();
        for (ObjectIterator it(playericedeath_2441_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!playericedeath_2441_instances.has_selection()) goto or_event_1750_40_0_end;
        or_result_1750_40 = true;
        or_temp_result_1750_40_0 = true;
    }
    or_event_1750_40_0_end: ;
    playericedeath_2441_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1750_40_0) {
        playericedeath_2441_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 1750_40
    bool or_temp_result_1750_40_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_main_1)) goto or_event_1750_40_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (9))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1750_40_1_end;
        bosshovercop_2332_instances.clear_selection();
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!bosshovercop_2332_instances.has_selection()) goto or_event_1750_40_1_end;
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (((Active*)get_instance(masterlevel_37_instances, default_active_instance))->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1750_40_1_end;
        playericedeath_2441_instances.clear_selection();
        for (ObjectIterator it(playericedeath_2441_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!playericedeath_2441_instances.has_selection()) goto or_event_1750_40_1_end;
        or_result_1750_40 = true;
        or_temp_result_1750_40_1 = true;
        or_event_1750_40_1_end: ;
        bosshovercop_2332_instances.clear_saved_selection();
        if (or_temp_result_1750_40_1) {
            playericedeath_2441_instances.save_selection();
            bosshovercop_2332_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_1750_40) goto or_final_or_event_1750_40_1_end;
        playericedeath_2441_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        bosshovercop_2332_instances.empty_selection();
        if (or_temp_result_1750_40_0 || or_temp_result_1750_40_1) {
            playericedeath_2441_instances.restore_selection();
        }
        if (or_temp_result_1750_40_1) {
            bosshovercop_2332_instances.restore_selection();
        }
        if (or_temp_result_1750_40_0 || or_temp_result_1750_40_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (!group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_tow_player_1) {
            group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_tow_player_1 = true;
        }
            group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_main_1 = false;
    
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    or_final_or_event_1750_40_1_end: ;
}
void Frames::event_func_9762()
{
    // event 1751_40
    {
        if (!(group_main_engine_1)) goto event_1751_40_end;
        bosshovercopturbine2_2331_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine2_2331_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bosshovercopturbine2_2331_instances.has_selection()) goto event_1751_40_end;
        if (not_always_1751_40 > loop_count) {
            not_always_1751_40 = loop_count + 2;
            goto event_1751_40_end;
        }
        not_always_1751_40 = loop_count + 2;
        bosshovercopsiren4_2329_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren4_2329_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosshovercopsiren3_2330_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren3_2330_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1751_40_end: ;
}
void Frames::event_func_9763()
{
    // event 1752_40
    bool or_result_1752_40 = false;
    bool or_temp_result_1752_40_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1752_40_0_end;
        bosshovercopturbine2_2331_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine2_2331_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bosshovercopturbine2_2331_instances.has_selection()) goto or_event_1752_40_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(bosshovercopturbine2_2331_instances, qualifier_7)) goto or_event_1752_40_0_end;
        for (ObjectIterator it(bosshovercopturbine2_2331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!bosshovercopturbine2_2331_instances.has_selection()) goto or_event_1752_40_0_end;
        or_result_1752_40 = true;
        or_temp_result_1752_40_0 = true;
    }
    or_event_1752_40_0_end: ;
    bosshovercopturbine2_2331_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1752_40_0) {
        bosshovercopturbine2_2331_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1752_40
    bool or_temp_result_1752_40_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1752_40_1_end;
        bosshovercopturbine2_2331_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine2_2331_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!bosshovercopturbine2_2331_instances.has_selection()) goto or_event_1752_40_1_end;
        or_result_1752_40 = true;
        or_temp_result_1752_40_1 = true;
        or_event_1752_40_1_end: ;
        if (or_temp_result_1752_40_1) {
            bosshovercopturbine2_2331_instances.save_selection();
        }
        if (!or_result_1752_40) goto or_final_or_event_1752_40_1_end;
        bosshovercopturbine2_2331_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1752_40_0 || or_temp_result_1752_40_1) {
            bosshovercopturbine2_2331_instances.restore_selection();
        }
        if (or_temp_result_1752_40_0) {
            qualifier_7.restore_selection();
        }
        FrameObject * single_instance_1752_40_0; single_instance_1752_40_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosshovercopturbine2_2331_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1752_40_0 == NULL)
                    single_instance_1752_40_0 = new_obj;
            }
        }
        for (ObjectIterator it(bosshovercopturbine2_2331_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_40();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
    }
    or_final_or_event_1752_40_1_end: ;
}
void Frames::event_func_9764()
{
    // event 1754_40
    {
        if (!(group_main_engine_1)) goto event_1754_40_end;
        bosshovercopturbine2_2331_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine2_2331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!bosshovercopturbine2_2331_instances.has_selection()) goto event_1754_40_end;
        for (ObjectIterator it(bosshovercopturbine2_2331_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosshovercoppropellor2_2335_instances.clear_selection();
        for (ObjectIterator it(bosshovercoppropellor2_2335_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1754_40_end: ;
}
void Frames::event_func_9765()
{
    // event 1755_40
    {
        if (!(group_main_engine_1)) goto event_1755_40_end;
        bosshovercopturbine1_2333_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine1_2333_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bosshovercopturbine1_2333_instances.has_selection()) goto event_1755_40_end;
        if (not_always_1755_40 > loop_count) {
            not_always_1755_40 = loop_count + 2;
            goto event_1755_40_end;
        }
        not_always_1755_40 = loop_count + 2;
        bosshovercopsiren1_2336_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren1_2336_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosshovercopsiren2_2337_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren2_2337_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1755_40_end: ;
}
void Frames::event_func_9766()
{
    // event 1756_40
    bool or_result_1756_40 = false;
    bool or_temp_result_1756_40_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1756_40_0_end;
        bosshovercopturbine1_2333_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine1_2333_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bosshovercopturbine1_2333_instances.has_selection()) goto or_event_1756_40_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(bosshovercopturbine1_2333_instances, qualifier_7)) goto or_event_1756_40_0_end;
        for (ObjectIterator it(bosshovercopturbine1_2333_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!bosshovercopturbine1_2333_instances.has_selection()) goto or_event_1756_40_0_end;
        or_result_1756_40 = true;
        or_temp_result_1756_40_0 = true;
    }
    or_event_1756_40_0_end: ;
    bosshovercopturbine1_2333_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1756_40_0) {
        bosshovercopturbine1_2333_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1756_40
    bool or_temp_result_1756_40_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1756_40_1_end;
        bosshovercopturbine1_2333_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine1_2333_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!bosshovercopturbine1_2333_instances.has_selection()) goto or_event_1756_40_1_end;
        or_result_1756_40 = true;
        or_temp_result_1756_40_1 = true;
        or_event_1756_40_1_end: ;
        if (or_temp_result_1756_40_1) {
            bosshovercopturbine1_2333_instances.save_selection();
        }
        if (!or_result_1756_40) goto or_final_or_event_1756_40_1_end;
        qualifier_7.empty_selection();
        bosshovercopturbine1_2333_instances.empty_selection();
        if (or_temp_result_1756_40_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1756_40_0 || or_temp_result_1756_40_1) {
            bosshovercopturbine1_2333_instances.restore_selection();
        }
        FrameObject * single_instance_1756_40_0; single_instance_1756_40_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosshovercopturbine1_2333_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1756_40_0 == NULL)
                    single_instance_1756_40_0 = new_obj;
            }
        }
        for (ObjectIterator it(bosshovercopturbine1_2333_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_40();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
    }
    or_final_or_event_1756_40_1_end: ;
}
void Frames::event_func_9767()
{
    // event 1758_40
    {
        if (!(group_main_engine_1)) goto event_1758_40_end;
        bosshovercopturbine1_2333_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine1_2333_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!bosshovercopturbine1_2333_instances.has_selection()) goto event_1758_40_end;
        for (ObjectIterator it(bosshovercopturbine1_2333_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosshovercoppropellor_2334_instances.clear_selection();
        for (ObjectIterator it(bosshovercoppropellor_2334_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1758_40_end: ;
}
void Frames::event_func_9768()
{
    // event 1759_40
    {
        if (!(group_main_engine_1)) goto event_1759_40_end;
        if (!(((Active*)get_instance(bosshovercop_2332_instances))->alterables->flags.is_off(6))) goto event_1759_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(0)) > (((Active*)get_instance(minibossrailing_923_instances, default_active_instance))->get_x()-100))) goto event_1759_40_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_tow_player_1) goto event_1759_40_end;
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.set(0, ((Active*)get_instance(minibossrailing_923_instances, default_active_instance))->get_x()-100);
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.set(4, 0);
    }
    event_1759_40_end: ;
}
void Frames::event_func_9769()
{
    // event 1760_40
    {
        if (!(group_main_engine_1)) goto event_1760_40_end;
        if (!((bosshovercopturbine2_2331_instances.size()+bosshovercopturbine1_2333_instances.size()-((Active*)get_instance(bosshovercopturbine2_2331_instances, default_active_instance))->alterables->flags.get(6)-((Active*)get_instance(bosshovercopturbine1_2333_instances, default_active_instance))->alterables->flags.get(6)) <= (0))) goto event_1760_40_end;
        ((Active*)get_instance(bosshovercop_2332_instances))->force_animation(7);
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.add(1, 2);
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.set(8, 0);
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.set(7, 0);
    }
    event_1760_40_end: ;
}
void Frames::event_func_9770()
{
    // event 1761_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_tow_player_1)) goto event_1761_40_end;
        ((Active*)get_instance(playericedeath_2441_instances))->move_back();
        effectstickyice_2431_instances.clear_selection();
        for (ObjectIterator it(effectstickyice_2431_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        ((Active*)get_instance(playericedeath_2441_instances))->force_frame(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0));
    }
    event_1761_40_end: ;
}
void Frames::event_func_9771()
{
    // event 1762_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_tow_player_1)) goto event_1762_40_end;
        if (!((((Active*)get_instance(playericedeath_2441_instances))->get_y()) > (((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)))) goto event_1762_40_end;
        ((Active*)get_instance(playericedeath_2441_instances))->set_y(get_max(((Active*)get_instance(playericedeath_2441_instances))->get_y()-1, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(2)));
    }
    event_1762_40_end: ;
}
void Frames::event_func_9772()
{
    // event 1763_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_tow_player_1)) goto event_1763_40_end;
        if (((Active*)get_instance(bosshovercophook_2449_instances))->flags & VISIBLE) goto event_1763_40_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)*19+((Active*)get_instance(playericedeath_2441_instances))->get_x())*0.05);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)*19+((Active*)get_instance(playericedeath_2441_instances))->get_y())*0.05);
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.set(0, get_max(frame_left()-100, get_min(((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(0), frame_right()+100)));
    }
    event_1763_40_end: ;
}
void Frames::event_func_9773()
{
    // event 1764_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_tow_player_1)) goto event_1764_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(3)) == (0))) goto event_1764_40_end;
        if (!((((Active*)get_instance(playericedeath_2441_instances))->get_y()) <= (((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)+20))) goto event_1764_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->get_x()) >= (((Active*)get_instance(playericedeath_2441_instances))->get_x()))) goto event_1764_40_end;
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.set(3, -1);
    }
    event_1764_40_end: ;
}
void Frames::event_func_9774()
{
    // event 1765_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_tow_player_1)) goto event_1765_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(3)) == (0))) goto event_1765_40_end;
        if (!((((Active*)get_instance(playericedeath_2441_instances))->get_y()) <= (((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)+20))) goto event_1765_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->get_x()) < (((Active*)get_instance(playericedeath_2441_instances))->get_x()))) goto event_1765_40_end;
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.set(3, 1);
    }
    event_1765_40_end: ;
}
void Frames::event_func_9775()
{
    // event 1766_40
    bool or_result_1766_40 = false;
    bool or_temp_result_1766_40_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_tow_player_1)) goto or_event_1766_40_0_end;
        bosshovercop_2332_instances.clear_selection();
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playericedeath_2441_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!bosshovercop_2332_instances.has_selection()) goto or_event_1766_40_0_end;
        or_result_1766_40 = true;
        or_temp_result_1766_40_0 = true;
    }
    or_event_1766_40_0_end: ;
    bosshovercop_2332_instances.clear_saved_selection();
    if (or_temp_result_1766_40_0) {
        bosshovercop_2332_instances.save_selection();
    }
    // event 1766_40
    bool or_temp_result_1766_40_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_tow_player_1)) goto or_event_1766_40_1_end;
        bosshovercop_2332_instances.clear_selection();
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playericedeath_2441_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!bosshovercop_2332_instances.has_selection()) goto or_event_1766_40_1_end;
        or_result_1766_40 = true;
        or_temp_result_1766_40_1 = true;
        or_event_1766_40_1_end: ;
        if (or_temp_result_1766_40_1) {
            bosshovercop_2332_instances.save_selection();
        }
        if (!or_result_1766_40) goto or_final_or_event_1766_40_1_end;
        bosshovercop_2332_instances.empty_selection();
        if (or_temp_result_1766_40_0 || or_temp_result_1766_40_1) {
            bosshovercop_2332_instances.restore_selection();
        }
        player_389_instances.clear_selection();
        for (ObjectIterator it(player_389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    or_final_or_event_1766_40_1_end: ;
}
void Frames::event_func_9776()
{
    // event 1767_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_tow_player_1)) goto event_1767_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(3)) == (1))) goto event_1767_40_end;
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.set(4, get_min(((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(4)+0.1, 12));
    }
    event_1767_40_end: ;
}
void Frames::event_func_9777()
{
    // event 1768_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_tow_player_1)) goto event_1768_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(3)) == (1))) goto event_1768_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->get_x()) > (((Active*)get_instance(playericedeath_2441_instances))->get_x()))) goto event_1768_40_end;
        ((Active*)get_instance(bosshovercophook_2449_instances))->set_y(((Active*)get_instance(playericedeath_2441_instances))->get_y());
        ((Active*)get_instance(bosshovercophook_2449_instances))->set_x(get_max(((Active*)get_instance(playericedeath_2441_instances))->get_x(), ((Active*)get_instance(bosshovercop_2332_instances))->get_x()-200));
        ((Active*)get_instance(bosshovercophook_2449_instances))->set_visible(true);
    }
    event_1768_40_end: ;
}
void Frames::event_func_9778()
{
    // event 1769_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_tow_player_1)) goto event_1769_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(3)) == (1))) goto event_1769_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->get_x()) > (((Active*)get_instance(playericedeath_2441_instances))->get_x()+200))) goto event_1769_40_end;
        ((Active*)get_instance(playericedeath_2441_instances))->set_x(((Active*)get_instance(bosshovercop_2332_instances))->get_x()-200);
    }
    event_1769_40_end: ;
}
void Frames::event_func_9779()
{
    // event 1770_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_tow_player_1)) goto event_1770_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(3)) == (-1))) goto event_1770_40_end;
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.set(4, get_max(((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(4)-0.1, -12));
    }
    event_1770_40_end: ;
}
void Frames::event_func_9780()
{
    // event 1771_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_tow_player_1)) goto event_1771_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(3)) == (-1))) goto event_1771_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->get_x()) < (((Active*)get_instance(playericedeath_2441_instances))->get_x()))) goto event_1771_40_end;
        ((Active*)get_instance(bosshovercophook_2449_instances))->set_y(((Active*)get_instance(playericedeath_2441_instances))->get_y());
        ((Active*)get_instance(bosshovercophook_2449_instances))->set_x(get_min(((Active*)get_instance(playericedeath_2441_instances))->get_x(), ((Active*)get_instance(bosshovercop_2332_instances))->get_x()+200));
        ((Active*)get_instance(bosshovercophook_2449_instances))->set_visible(true);
    }
    event_1771_40_end: ;
}
void Frames::event_func_9781()
{
    // event 1772_40
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_hovercop_boss_hovercop_tow_player_1)) goto event_1772_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(3)) == (-1))) goto event_1772_40_end;
        if (!((((Active*)get_instance(bosshovercop_2332_instances))->get_x()) < (((Active*)get_instance(playericedeath_2441_instances))->get_x()-200))) goto event_1772_40_end;
        ((Active*)get_instance(playericedeath_2441_instances))->set_x(((Active*)get_instance(bosshovercop_2332_instances))->get_x()+200);
    }
    event_1772_40_end: ;
}
void Frames::event_func_9782()
{
    // event 1773_40
    {
        if (!(group_main_engine_1)) goto event_1773_40_end;
        bossicemissile_2433_instances.clear_selection();
        for (ObjectIterator it(bossicemissile_2433_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossicemissile_2433_instances.has_selection()) goto event_1773_40_end;
        for (ObjectIterator it(bossicemissile_2433_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(2));
        }
    }
    event_1773_40_end: ;
}
void Frames::event_func_9783()
{
    // event 1774_40
    {
        if (!(group_main_engine_1)) goto event_1774_40_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1774_40_end;
        bossicemissile_2433_instances.clear_selection();
        for (ObjectIterator it(bossicemissile_2433_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!bossicemissile_2433_instances.has_selection()) goto event_1774_40_end;
        FrameObject * single_instance_1774_40_0; single_instance_1774_40_0 = pick_random(bossicemissile_2433_instances);
        if (single_instance_1774_40_0 == NULL) goto event_1774_40_end;
        FrameObject * single_instance_1774_40_1; single_instance_1774_40_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_mediumbubble_769(((Active*)single_instance_1774_40_0)->x + -16, ((Active*)single_instance_1774_40_0)->y + 0), ((Active*)single_instance_1774_40_0)->layer);
            if (single_instance_1774_40_1 == NULL)
                single_instance_1774_40_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1774_40_1))->alterables->values.set(3, (-10-randrange(11))*0.1);
        ((Active*)((Active*)single_instance_1774_40_1))->alterables->values.set(2, -8-randrange(30)*0.1+((Active*)single_instance_1774_40_0)->alterables->values.get(2));
    }
    event_1774_40_end: ;
}
void Frames::event_func_9784()
{
    // event 1775_40
    {
        if (!(group_main_engine_1)) goto event_1775_40_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1775_40_end;
        bossicemissile_2433_instances.clear_selection();
        for (ObjectIterator it(bossicemissile_2433_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (0))) { it.deselect(); continue; }
        }
        if (!bossicemissile_2433_instances.has_selection()) goto event_1775_40_end;
        FrameObject * single_instance_1775_40_0; single_instance_1775_40_0 = pick_random(bossicemissile_2433_instances);
        if (single_instance_1775_40_0 == NULL) goto event_1775_40_end;
        FrameObject * single_instance_1775_40_1; single_instance_1775_40_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_mediumbubble_769(((Active*)single_instance_1775_40_0)->x + 16, ((Active*)single_instance_1775_40_0)->y + 0), ((Active*)single_instance_1775_40_0)->layer);
            if (single_instance_1775_40_1 == NULL)
                single_instance_1775_40_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1775_40_1))->alterables->values.set(3, (-10-randrange(11))*0.1);
        ((Active*)((Active*)single_instance_1775_40_1))->alterables->values.set(2, 8+randrange(30)*0.1+((Active*)single_instance_1775_40_0)->alterables->values.get(2));
    }
    event_1775_40_end: ;
}
void Frames::event_func_9785()
{
    // event 1776_40
    {
        if (!(group_main_engine_1)) goto event_1776_40_end;
        bossicemissile_2433_instances.clear_selection();
        for (ObjectIterator it(bossicemissile_2433_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!bossicemissile_2433_instances.has_selection()) goto event_1776_40_end;
        for (ObjectIterator it(bossicemissile_2433_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+0.1, 8));
        }
    }
    event_1776_40_end: ;
}
void Frames::event_func_9786()
{
    // event 1777_40
    {
        if (!(group_main_engine_1)) goto event_1777_40_end;
        bossicemissile_2433_instances.clear_selection();
        for (ObjectIterator it(bossicemissile_2433_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (0))) { it.deselect(); continue; }
        }
        if (!bossicemissile_2433_instances.has_selection()) goto event_1777_40_end;
        for (ObjectIterator it(bossicemissile_2433_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(2)-0.1, -8));
        }
    }
    event_1777_40_end: ;
}
void Frames::event_func_9787()
{
    // event 1778_40
    {
        if (!(group_main_engine_1)) goto event_1778_40_end;
        bossicemissile_2433_instances.clear_selection();
        for (ObjectIterator it(bossicemissile_2433_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playercharactersensor_383_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!bossicemissile_2433_instances.has_selection()) goto event_1778_40_end;
        for (ObjectIterator it(bossicemissile_2433_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->set_visible(false);
        }
        FrameObject * single_instance_1778_40_0; single_instance_1778_40_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossicemissile_2433_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectstickyice_2431(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1778_40_0 == NULL)
                    single_instance_1778_40_0 = new_obj;
            }
        }
        FrameObject * single_instance_1778_40_1; single_instance_1778_40_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossicemissile_2433_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1778_40_1 == NULL)
                    single_instance_1778_40_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1778_40_1))->force_speed(50);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 5));
        media.play_id(SOUND_SENTINEL_SHOT_77, -1, 1);
        media.play_id(SOUND_COMMON_EXPLODE2_98, -1, 1);
        ((Active*)((Active*)single_instance_1778_40_0))->set_scale(3);
    }
    event_1778_40_end: ;
}
void Frames::event_func_9788()
{
    // event 1779_40
    {
        if (!(group_main_engine_1)) goto event_1779_40_end;
        bossicemissile_2433_instances.clear_selection();
        for (ObjectIterator it(bossicemissile_2433_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playercharactersensor_383_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!bossicemissile_2433_instances.has_selection()) goto event_1779_40_end;
        for (ObjectIterator it(bossicemissile_2433_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->set_visible(false);
        }
        FrameObject * single_instance_1779_40_0; single_instance_1779_40_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossicemissile_2433_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectstickyice_2431(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1779_40_0 == NULL)
                    single_instance_1779_40_0 = new_obj;
            }
        }
        FrameObject * single_instance_1779_40_1; single_instance_1779_40_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossicemissile_2433_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1779_40_1 == NULL)
                    single_instance_1779_40_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1779_40_1))->force_speed(50);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 5));
        media.play_id(SOUND_SENTINEL_SHOT_77, -1, 1);
        media.play_id(SOUND_COMMON_EXPLODE2_98, -1, 1);
        ((Active*)((Active*)single_instance_1779_40_0))->set_scale(3);
    }
    event_1779_40_end: ;
}
void Frames::event_func_9789()
{
    // event 1780_40
    {
        if (!(group_main_engine_1)) goto event_1780_40_end;
        bossicemissile_2433_instances.clear_selection();
        for (ObjectIterator it(bossicemissile_2433_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bossicemissile_2433_instances.has_selection()) goto event_1780_40_end;
        FrameObject * single_instance_1780_40_0; single_instance_1780_40_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossicemissile_2433_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectstickyice_2431(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1780_40_0 == NULL)
                    single_instance_1780_40_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1780_40_0))->set_angle(-30+randrange(61), 0);
        ((Active*)((Active*)single_instance_1780_40_0))->set_x(((Active*)get_single(bossicemissile_2433_instances, default_active_instance))->get_x()+cos_deg(((Active*)get_single(bossicemissile_2433_instances, default_active_instance))->alterables->values.get(4)-90)*40);
        ((Active*)((Active*)single_instance_1780_40_0))->set_y(((Active*)get_single(bossicemissile_2433_instances, default_active_instance))->get_y()+sin_deg(((Active*)get_single(bossicemissile_2433_instances, default_active_instance))->alterables->values.get(4)-90)*40);
        ((Active*)((Active*)single_instance_1780_40_0))->alterables->flags.enable(2);
    }
    event_1780_40_end: ;
}
void Frames::event_func_9790()
{
    // event 1781_40
    {
        if (!(group_main_engine_1)) goto event_1781_40_end;
        bossicemissile_2433_instances.clear_selection();
        for (ObjectIterator it(bossicemissile_2433_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bossicemissile_2433_instances.has_selection()) goto event_1781_40_end;
        FrameObject * single_instance_1781_40_0; single_instance_1781_40_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossicemissile_2433_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectstickyice_2431(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1781_40_0 == NULL)
                    single_instance_1781_40_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1781_40_0))->set_angle(-30+randrange(61), 0);
        ((Active*)((Active*)single_instance_1781_40_0))->set_x(((Active*)get_single(bossicemissile_2433_instances, default_active_instance))->get_x()+cos_deg(((Active*)get_single(bossicemissile_2433_instances, default_active_instance))->alterables->values.get(4)+90)*40);
        ((Active*)((Active*)single_instance_1781_40_0))->set_y(((Active*)get_single(bossicemissile_2433_instances, default_active_instance))->get_y()+sin_deg(((Active*)get_single(bossicemissile_2433_instances, default_active_instance))->alterables->values.get(4)+90)*40);
        for (ObjectIterator it(bossicemissile_2433_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 20);
        }
        ((Active*)((Active*)single_instance_1781_40_0))->alterables->flags.enable(2);
    }
    event_1781_40_end: ;
}
void Frames::event_func_9791()
{
    // event 1782_40
    {
        if (!(group_main_engine_1)) goto event_1782_40_end;
        effectstickyice_2431_instances.clear_selection();
        for (ObjectIterator it(effectstickyice_2431_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!effectstickyice_2431_instances.has_selection()) goto event_1782_40_end;
        FrameObject * single_instance_1782_40_0; single_instance_1782_40_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(effectstickyice_2431_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1782_40_0 == NULL)
                    single_instance_1782_40_0 = new_obj;
            }
        }
        for (ObjectIterator it(effectstickyice_2431_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1782_40_end: ;
}
void Frames::event_func_9792()
{
    // event 1783_40
    {
        if (!(group_main_engine_1)) goto event_1783_40_end;
        bossicemissile_2433_instances.clear_selection();
        for (ObjectIterator it(bossicemissile_2433_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (180))) { it.deselect(); continue; }
        }
        if (!bossicemissile_2433_instances.has_selection()) goto event_1783_40_end;
        for (ObjectIterator it(bossicemissile_2433_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1783_40_end: ;
}
void Frames::event_func_9793()
{
    // event 1785_40
    {
        if (!(group_main_engine_1)) goto event_1785_40_end;
        bossicemissile_2433_instances.clear_selection();
        for (ObjectIterator it(bossicemissile_2433_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->is_near_border(-40))) { it.deselect(); continue; }
        }
        if (!bossicemissile_2433_instances.has_selection()) goto event_1785_40_end;
        for (ObjectIterator it(bossicemissile_2433_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1785_40_end: ;
}
void Frames::event_func_9794()
{
    // event 1786_40
    {
        if (!(group_main_engine_1)) goto event_1786_40_end;
        bossicecrystal_2430_instances.clear_selection();
        for (ObjectIterator it(bossicecrystal_2430_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossicecrystal_2430_instances.has_selection()) goto event_1786_40_end;
        for (ObjectIterator it(bossicecrystal_2430_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
        }
    }
    event_1786_40_end: ;
}
void Frames::event_func_9795()
{
    // event 1787_40
    {
        if (!(group_main_engine_1)) goto event_1787_40_end;
        bossicecrystal_2430_instances.clear_selection();
        for (ObjectIterator it(bossicecrystal_2430_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossicecrystal_2430_instances.has_selection()) goto event_1787_40_end;
        for (ObjectIterator it(bossicecrystal_2430_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+0.3, 12));
        }
    }
    event_1787_40_end: ;
}
void Frames::event_func_9796()
{
    // event 1788_40
    {
        if (!(group_main_engine_1)) goto event_1788_40_end;
        bossicecrystal_2430_instances.clear_selection();
        for (ObjectIterator it(bossicecrystal_2430_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossicecrystal_2430_instances.has_selection()) goto event_1788_40_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1788_40_end;
        FrameObject * single_instance_1788_40_0; single_instance_1788_40_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossicecrystal_2430_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust_305(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1788_40_0 == NULL)
                    single_instance_1788_40_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1788_40_0))->set_angle(randrange(4)*90, 0);
        ((Active*)((Active*)single_instance_1788_40_0))->move_back();
    }
    event_1788_40_end: ;
}
void Frames::event_func_9797()
{
    // event 1789_40
    {
        if (!(group_main_engine_1)) goto event_1789_40_end;
        bossicecrystal_2430_instances.clear_selection();
        for (ObjectIterator it(bossicecrystal_2430_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.get(1)+64))) { it.deselect(); continue; }
        }
        if (!bossicecrystal_2430_instances.has_selection()) goto event_1789_40_end;
        for (ObjectIterator it(bossicecrystal_2430_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->set_visible(false);
        }
        FrameObject * single_instance_1789_40_0; single_instance_1789_40_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossicecrystal_2430_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectstickyice_2431(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1789_40_0 == NULL)
                    single_instance_1789_40_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1789_40_0))->set_angle(-30+randrange(61), 0);
        for (ObjectIterator it(bossicecrystal_2430_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
        media.play_id(SOUND_SENTINEL_SHOT_77, -1, 1);
        FrameObject * single_instance_1789_40_1; single_instance_1789_40_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossicecrystal_2430_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswatersplash_416(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1789_40_1 == NULL)
                    single_instance_1789_40_1 = new_obj;
            }
        }
    }
    event_1789_40_end: ;
}
void Frames::event_func_9798()
{
    // event 1792_40
    {
        if (!(group_main_engine_1)) goto event_1792_40_end;
        bossicecrystal_2430_instances.clear_selection();
        for (ObjectIterator it(bossicecrystal_2430_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bossicecrystal_2430_instances.has_selection()) goto event_1792_40_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1792_40_end;
        FrameObject * single_instance_1792_40_0; single_instance_1792_40_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossicecrystal_2430_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectstickyice_2431(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1792_40_0 == NULL)
                    single_instance_1792_40_0 = new_obj;
            }
        }
        for (ObjectIterator it(bossicecrystal_2430_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
        ((Active*)((Active*)single_instance_1792_40_0))->set_angle(-30+randrange(61), 0);
        ((Active*)((Active*)single_instance_1792_40_0))->set_x(((Active*)get_single(bossicecrystal_2430_instances, default_active_instance))->get_x()+(((Active*)get_single(bossicecrystal_2430_instances, default_active_instance))->alterables->values.get(4)/math_helper/2)*10*((((Active*)get_single(bossicecrystal_2430_instances, default_active_instance))->alterables->values.get(4)%math_helper%2)*2-1));
    }
    event_1792_40_end: ;
}
void Frames::event_func_9799()
{
    // event 1793_40
    {
        if (!(group_main_engine_1)) goto event_1793_40_end;
        bossicecrystal_2430_instances.clear_selection();
        for (ObjectIterator it(bossicecrystal_2430_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (12))) { it.deselect(); continue; }
        }
        if (!bossicecrystal_2430_instances.has_selection()) goto event_1793_40_end;
        for (ObjectIterator it(bossicecrystal_2430_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1793_40_end: ;
}
