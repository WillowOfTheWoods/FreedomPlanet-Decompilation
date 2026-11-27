#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_12502()
{
    // event 1459_57
    {
        if (!(group_main_engine_1)) goto event_1459_57_end;
        enemymetalpup_3149_instances.clear_selection();
        for (ObjectIterator it(enemymetalpup_3149_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!enemymetalpup_3149_instances.has_selection()) goto event_1459_57_end;
        for (ObjectIterator it(enemymetalpup_3149_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(4)*2);
            ((Active*)*it)->force_animation(1);
        }
    }
    event_1459_57_end: ;
}
void Frames::event_func_12503()
{
    // event 1460_57
    {
        if (!(group_main_engine_1)) goto event_1460_57_end;
        enemymetalpup_3149_instances.clear_selection();
        for (ObjectIterator it(enemymetalpup_3149_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemymetalpup_3149_instances.has_selection()) goto event_1460_57_end;
        if (!check_not_overlap(enemymetalpup_3149_instances, enemylimiter_350_instances)) goto event_1460_57_end;
        for (ObjectIterator it(enemymetalpup_3149_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1460_57_end: ;
}
void Frames::event_func_12504()
{
    // event 1461_57
    {
        if (!(group_main_engine_1)) goto event_1461_57_end;
        enemymetalpup_3149_instances.clear_selection();
        for (ObjectIterator it(enemymetalpup_3149_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!enemymetalpup_3149_instances.has_selection()) goto event_1461_57_end;
        enemylimiter_350_instances.clear_selection();
        if (!check_overlap(enemymetalpup_3149_instances, enemylimiter_350_instances)) goto event_1461_57_end;
        for (ObjectIterator it(enemymetalpup_3149_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!enemymetalpup_3149_instances.has_selection()) goto event_1461_57_end;
        for (ObjectIterator it(enemymetalpup_3149_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1461_57_end: ;
}
void Frames::event_func_12505()
{
    // event 1462_57
    {
        if (!(group_main_engine_1)) goto event_1462_57_end;
        enemymetalpup_3149_instances.clear_selection();
        for (ObjectIterator it(enemymetalpup_3149_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(10)) { it.deselect(); continue; }
        }
        if (!enemymetalpup_3149_instances.has_selection()) goto event_1462_57_end;
        for (ObjectIterator it(enemymetalpup_3149_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0-((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1462_57_end: ;
}
void Frames::event_func_12506()
{
    // event 1463_57
    {
        if (!(group_main_engine_1)) goto event_1463_57_end;
        enemymetalpup_3149_instances.clear_selection();
        player_389_instances.clear_selection();
        if (!check_overlap(enemymetalpup_3149_instances, player_389_instances)) goto event_1463_57_end;
        for (ObjectIterator it(enemymetalpup_3149_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (0))) { it.deselect(); continue; }
        }
        if (!enemymetalpup_3149_instances.has_selection()) goto event_1463_57_end;
        for (ObjectIterator it(enemymetalpup_3149_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 2);
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1463_57_end: ;
}
void Frames::event_func_12507()
{
    // event 1464_57
    {
        if (!(group_main_engine_1)) goto event_1464_57_end;
        enemymetalpup_3149_instances.clear_selection();
        for (ObjectIterator it(enemymetalpup_3149_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) < (3))) { it.deselect(); continue; }
        }
        if (!enemymetalpup_3149_instances.has_selection()) goto event_1464_57_end;
        for (ObjectIterator it(enemymetalpup_3149_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1464_57_end: ;
}
void Frames::event_func_12508()
{
    // event 1465_57
    {
        if (!(group_main_engine_1)) goto event_1465_57_end;
        enemymetalpup_3149_instances.clear_selection();
        for (ObjectIterator it(enemymetalpup_3149_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (3))) { it.deselect(); continue; }
        }
        if (!enemymetalpup_3149_instances.has_selection()) goto event_1465_57_end;
        for (ObjectIterator it(enemymetalpup_3149_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 5);
        }
    }
    event_1465_57_end: ;
}
void Frames::event_func_12509()
{
    // event 1466_57
    {
        if (!(group_main_engine_1)) goto event_1466_57_end;
        enemymetalpup_3149_instances.clear_selection();
        for (ObjectIterator it(enemymetalpup_3149_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
        }
        if (!enemymetalpup_3149_instances.has_selection()) goto event_1466_57_end;
        for (ObjectIterator it(enemymetalpup_3149_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->alterables->values.set(5, 30);
        }
    }
    event_1466_57_end: ;
}
void Frames::event_func_12510()
{
    // event 1467_57
    {
        if (!(group_main_engine_1)) goto event_1467_57_end;
        enemymetalpup_3149_instances.clear_selection();
        for (ObjectIterator it(enemymetalpup_3149_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!enemymetalpup_3149_instances.has_selection()) goto event_1467_57_end;
        for (ObjectIterator it(enemymetalpup_3149_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(5, 1);
        }
    }
    event_1467_57_end: ;
}
void Frames::event_func_12511()
{
    // event 1468_57
    {
        if (!(group_main_engine_1)) goto event_1468_57_end;
        enemymetalpup_3149_instances.clear_selection();
        for (ObjectIterator it(enemymetalpup_3149_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (6))) { it.deselect(); continue; }
        }
        if (!enemymetalpup_3149_instances.has_selection()) goto event_1468_57_end;
        for (ObjectIterator it(enemymetalpup_3149_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 6);
        }
    }
    event_1468_57_end: ;
}
void Frames::event_func_12512()
{
    // event 1469_57
    {
        if (!(group_main_engine_1)) goto event_1469_57_end;
        enemymetalpup_3149_instances.clear_selection();
        for (ObjectIterator it(enemymetalpup_3149_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
        }
        if (!enemymetalpup_3149_instances.has_selection()) goto event_1469_57_end;
        for (ObjectIterator it(enemymetalpup_3149_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1469_57_end: ;
}
void Frames::event_func_12513()
{
    // event 1470_57
    bool or_result_1470_57 = false;
    bool or_temp_result_1470_57_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1470_57_0_end;
        enemymetalpup_3149_instances.clear_selection();
        for (ObjectIterator it(enemymetalpup_3149_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemymetalpup_3149_instances.has_selection()) goto or_event_1470_57_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemymetalpup_3149_instances, qualifier_7)) goto or_event_1470_57_0_end;
        for (ObjectIterator it(enemymetalpup_3149_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemymetalpup_3149_instances.has_selection()) goto or_event_1470_57_0_end;
        or_result_1470_57 = true;
        or_temp_result_1470_57_0 = true;
    }
    or_event_1470_57_0_end: ;
    enemymetalpup_3149_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1470_57_0) {
        enemymetalpup_3149_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1470_57
    bool or_temp_result_1470_57_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1470_57_1_end;
        enemymetalpup_3149_instances.clear_selection();
        for (ObjectIterator it(enemymetalpup_3149_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemymetalpup_3149_instances.has_selection()) goto or_event_1470_57_1_end;
        or_result_1470_57 = true;
        or_temp_result_1470_57_1 = true;
        or_event_1470_57_1_end: ;
        if (or_temp_result_1470_57_1) {
            enemymetalpup_3149_instances.save_selection();
        }
        if (!or_result_1470_57) goto or_final_or_event_1470_57_1_end;
        enemymetalpup_3149_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1470_57_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1470_57_0 || or_temp_result_1470_57_1) {
            enemymetalpup_3149_instances.restore_selection();
        }
        for (ObjectIterator it(enemymetalpup_3149_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1470_57_0; single_instance_1470_57_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemymetalpup_3149_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1470_57_0 == NULL)
                    single_instance_1470_57_0 = new_obj;
            }
        }
        FrameObject * single_instance_1470_57_1; single_instance_1470_57_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemymetalpup_3149_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1470_57_1 == NULL)
                    single_instance_1470_57_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_SHADEKILL_2_50, -1, 1);
    }
    or_final_or_event_1470_57_1_end: ;
}
void Frames::event_func_12514()
{
    // event 1473_57
    {
        if (!(group_main_engine_1)) goto event_1473_57_end;
        enemytotematic_3103_instances.clear_selection();
        for (ObjectIterator it(enemytotematic_3103_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!enemytotematic_3103_instances.has_selection()) goto event_1473_57_end;
        media.play_id(SOUND_COMMON_EXPLODE7B_2_316, -1, 1);
        FrameObject * single_instance_1473_57_0; single_instance_1473_57_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytotematic_3103_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1473_57_0 == NULL)
                    single_instance_1473_57_0 = new_obj;
            }
        }
        for (ObjectIterator it(enemytotematic_3103_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_57();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        enemytotematic_3103_instances.clear_selection();
        for (ObjectIterator it(enemytotematic_3103_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1473_57_end: ;
}
void Frames::event_func_12515()
{
    // event 1476_57
    {
        if (!(group_main_engine_1)) goto event_1476_57_end;
        enemyshockpuppet_3150_instances.clear_selection();
        for (ObjectIterator it(enemyshockpuppet_3150_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
        }
        if (!enemyshockpuppet_3150_instances.has_selection()) goto event_1476_57_end;
        for (ObjectIterator it(enemyshockpuppet_3150_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1476_57_end: ;
}
void Frames::event_func_12516()
{
    // event 1477_57
    {
        if (!(group_main_engine_1)) goto event_1477_57_end;
        enemyshockpuppet_3150_instances.clear_selection();
        for (ObjectIterator it(enemyshockpuppet_3150_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (30))) { it.deselect(); continue; }
        }
        if (!enemyshockpuppet_3150_instances.has_selection()) goto event_1477_57_end;
        for (ObjectIterator it(enemyshockpuppet_3150_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_1477_57_end: ;
}
void Frames::event_func_12517()
{
    // event 1478_57
    {
        if (!(group_main_engine_1)) goto event_1478_57_end;
        enemyshockpuppet_3150_instances.clear_selection();
        for (ObjectIterator it(enemyshockpuppet_3150_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyshockpuppet_3150_instances.has_selection()) goto event_1478_57_end;
        for (ObjectIterator it(enemyshockpuppet_3150_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1478_57_end: ;
}
void Frames::event_func_12518()
{
    // event 1479_57
    {
        if (!(group_main_engine_1)) goto event_1479_57_end;
        enemyshockpuppet_3150_instances.clear_selection();
        for (ObjectIterator it(enemyshockpuppet_3150_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (40))) { it.deselect(); continue; }
        }
        if (!enemyshockpuppet_3150_instances.has_selection()) goto event_1479_57_end;
        for (ObjectIterator it(enemyshockpuppet_3150_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1479_57_end: ;
}
void Frames::event_func_12519()
{
    // event 1480_57
    {
        if (!(group_main_engine_1)) goto event_1480_57_end;
        enemyshockpuppet_3150_instances.clear_selection();
        for (ObjectIterator it(enemyshockpuppet_3150_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!enemyshockpuppet_3150_instances.has_selection()) goto event_1480_57_end;
        media.play_id(SOUND_ENEMY_ELECTRIC_167, -1, 1);
        for (ObjectIterator it(enemyshockpuppet_3150_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1480_57_end: ;
}
void Frames::event_func_12520()
{
    // event 1481_57
    {
        if (!(group_main_engine_1)) goto event_1481_57_end;
        enemyshockpuppet_3150_instances.clear_selection();
        for (ObjectIterator it(enemyshockpuppet_3150_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemyshockpuppet_3150_instances.has_selection()) goto event_1481_57_end;
        for (ObjectIterator it(enemyshockpuppet_3150_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1481_57_end: ;
}
void Frames::event_func_12521()
{
    // event 1482_57
    {
        if (!(group_main_engine_1)) goto event_1482_57_end;
        enemyshockpuppet_3150_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(enemyshockpuppet_3150_instances, playercharactersensor_383_instances)) goto event_1482_57_end;
        for (ObjectIterator it(enemyshockpuppet_3150_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemyshockpuppet_3150_instances.has_selection()) goto event_1482_57_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1482_57_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (3))) goto event_1482_57_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1482_57_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        media.play_id(SOUND_DAMAGE_ELECTRIC_2_373, -1, 1);
    }
    event_1482_57_end: ;
}
void Frames::event_func_12522()
{
    // event 1483_57
    {
        if (!(group_main_engine_1)) goto event_1483_57_end;
        enemyshockpuppet_3150_instances.clear_selection();
        for (ObjectIterator it(enemyshockpuppet_3150_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (100))) { it.deselect(); continue; }
        }
        if (!enemyshockpuppet_3150_instances.has_selection()) goto event_1483_57_end;
        for (ObjectIterator it(enemyshockpuppet_3150_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, -60);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1483_57_end: ;
}
void Frames::event_func_12523()
{
    // event 1484_57
    {
        if (!(group_main_engine_1)) goto event_1484_57_end;
        enemyshockpuppet_3150_instances.clear_selection();
        for (ObjectIterator it(enemyshockpuppet_3150_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyshockpuppet_3150_instances.has_selection()) goto event_1484_57_end;
        for (ObjectIterator it(enemyshockpuppet_3150_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 6);
            ((Active*)*it)->force_animation(10);
        }
    }
    event_1484_57_end: ;
}
void Frames::event_func_12524()
{
    // event 1485_57
    bool or_result_1485_57 = false;
    bool or_temp_result_1485_57_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1485_57_0_end;
        enemyshockpuppet_3150_instances.clear_selection();
        for (ObjectIterator it(enemyshockpuppet_3150_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyshockpuppet_3150_instances.has_selection()) goto or_event_1485_57_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyshockpuppet_3150_instances, qualifier_7)) goto or_event_1485_57_0_end;
        for (ObjectIterator it(enemyshockpuppet_3150_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyshockpuppet_3150_instances.has_selection()) goto or_event_1485_57_0_end;
        or_result_1485_57 = true;
        or_temp_result_1485_57_0 = true;
    }
    or_event_1485_57_0_end: ;
    enemyshockpuppet_3150_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1485_57_0) {
        enemyshockpuppet_3150_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1485_57
    bool or_temp_result_1485_57_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1485_57_1_end;
        enemyshockpuppet_3150_instances.clear_selection();
        for (ObjectIterator it(enemyshockpuppet_3150_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyshockpuppet_3150_instances.has_selection()) goto or_event_1485_57_1_end;
        or_result_1485_57 = true;
        or_temp_result_1485_57_1 = true;
        or_event_1485_57_1_end: ;
        if (or_temp_result_1485_57_1) {
            enemyshockpuppet_3150_instances.save_selection();
        }
        if (!or_result_1485_57) goto or_final_or_event_1485_57_1_end;
        qualifier_7.empty_selection();
        enemyshockpuppet_3150_instances.empty_selection();
        if (or_temp_result_1485_57_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1485_57_0 || or_temp_result_1485_57_1) {
            enemyshockpuppet_3150_instances.restore_selection();
        }
        for (ObjectIterator it(enemyshockpuppet_3150_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1485_57_0; single_instance_1485_57_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyshockpuppet_3150_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1485_57_0 == NULL)
                    single_instance_1485_57_0 = new_obj;
            }
        }
        FrameObject * single_instance_1485_57_1; single_instance_1485_57_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyshockpuppet_3150_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1485_57_1 == NULL)
                    single_instance_1485_57_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_SHADEKILL_2_50, -1, 1);
    }
    or_final_or_event_1485_57_1_end: ;
}
void Frames::event_func_12525()
{
    // event 1487_57
    {
        if (!(group_main_engine_1)) goto event_1487_57_end;
        enemybladeorbiter_3153_instances.clear_selection();
        for (ObjectIterator it(enemybladeorbiter_3153_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) < (6))) { it.deselect(); continue; }
        }
        if (!enemybladeorbiter_3153_instances.has_selection()) goto event_1487_57_end;
        for (ObjectIterator it(enemybladeorbiter_3153_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(6));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(7)+sin_deg(((Active*)*it)->alterables->values.get(8))*4);
            ((Active*)*it)->alterables->values.add(10, 1);
        }
    }
    event_1487_57_end: ;
}
void Frames::event_func_12526()
{
    // event 1488_57
    {
        if (!(group_main_engine_1)) goto event_1488_57_end;
        enemybladeorbiterleft_3151_instances.clear_selection();
        for (ObjectIterator it(enemybladeorbiterleft_3151_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(get_max(0, (((Active*)get_instance(enemybladeorbiter_3153_instances, it.current_index, default_active_instance))->alterables->values.get(4)-30)*2), 315));
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(enemybladeorbiter_3153_instances, it.current_index, default_active_instance))->alterables->values.get(5));
            ((Active*)*it)->force_frame(0);
        }
        enemybladeorbiterright_3152_instances.clear_selection();
        for (ObjectIterator it(enemybladeorbiterright_3152_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(get_max(0, (((Active*)get_instance(enemybladeorbiter_3153_instances, it.current_index, default_active_instance))->alterables->values.get(4)-30)*2), 315));
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(enemybladeorbiter_3153_instances, it.current_index, default_active_instance))->alterables->values.get(5));
            ((Active*)*it)->force_frame(0);
        }
        for (ObjectIterator it(enemybladeorbiterleft_3151_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, get_min(((Active*)get_instance(enemybladeorbiter_3153_instances, it.current_index, default_active_instance))->get_x()-20, ((Active*)get_instance(enemybladeorbiter_3153_instances, it.current_index, default_active_instance))->get_x()-20-sin_deg(((Active*)get_instance(enemybladeorbiter_3153_instances, it.current_index, default_active_instance))->alterables->values.get(4))*32));
            ((Active*)*it)->alterables->values.set(5, ((Active*)get_instance(enemybladeorbiter_3153_instances, it.current_index, default_active_instance))->get_y()-20-sin_deg(((Active*)get_instance(enemybladeorbiter_3153_instances, it.current_index, default_active_instance))->alterables->values.get(4)*2)*(32+get_max(0, (((Active*)get_instance(enemybladeorbiter_3153_instances, it.current_index, default_active_instance))->alterables->values.get(4)-180)*0.2))+sin_deg(((Active*)get_instance(enemybladeorbiter_3153_instances, it.current_index, default_active_instance))->alterables->values.get(8)-30)*3);
        }
        for (ObjectIterator it(enemybladeorbiterright_3152_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, get_max(((Active*)get_instance(enemybladeorbiter_3153_instances, it.current_index, default_active_instance))->get_x()+20, ((Active*)get_instance(enemybladeorbiter_3153_instances, it.current_index, default_active_instance))->get_x()+20+sin_deg(((Active*)get_instance(enemybladeorbiter_3153_instances, it.current_index, default_active_instance))->alterables->values.get(4))*32));
            ((Active*)*it)->alterables->values.set(5, ((Active*)get_instance(enemybladeorbiter_3153_instances, it.current_index, default_active_instance))->get_y()-20-sin_deg(((Active*)get_instance(enemybladeorbiter_3153_instances, it.current_index, default_active_instance))->alterables->values.get(4)*2)*(32+get_max(0, (((Active*)get_instance(enemybladeorbiter_3153_instances, it.current_index, default_active_instance))->alterables->values.get(4)-180)*0.2))+sin_deg(((Active*)get_instance(enemybladeorbiter_3153_instances, it.current_index, default_active_instance))->alterables->values.get(8)-30)*3);
        }
        for (ObjectIterator it(enemybladeorbiterleft_3151_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        for (ObjectIterator it(enemybladeorbiterright_3152_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1488_57_end: ;
}
void Frames::event_func_12527()
{
    // event 1489_57
    {
        if (!(group_main_engine_1)) goto event_1489_57_end;
        enemybladeorbiterleft_3151_instances.clear_selection();
        for (ObjectIterator it(enemybladeorbiterleft_3151_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (6))) { it.deselect(); continue; }
        }
        if (!enemybladeorbiterleft_3151_instances.has_selection()) goto event_1489_57_end;
        for (ObjectIterator it(enemybladeorbiterleft_3151_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1489_57_end: ;
}
void Frames::event_func_12528()
{
    // event 1490_57
    {
        if (!(group_main_engine_1)) goto event_1490_57_end;
        enemybladeorbiterright_3152_instances.clear_selection();
        for (ObjectIterator it(enemybladeorbiterright_3152_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (6))) { it.deselect(); continue; }
        }
        if (!enemybladeorbiterright_3152_instances.has_selection()) goto event_1490_57_end;
        for (ObjectIterator it(enemybladeorbiterright_3152_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0-((Active*)*it)->alterables->values.get(0), 0);
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1490_57_end: ;
}
void Frames::event_func_12529()
{
    // event 1491_57
    {
        if (!(group_main_engine_1)) goto event_1491_57_end;
        enemybladeorbiter_3153_instances.clear_selection();
        for (ObjectIterator it(enemybladeorbiter_3153_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (6))) { it.deselect(); continue; }
        }
        if (!enemybladeorbiter_3153_instances.has_selection()) goto event_1491_57_end;
        for (ObjectIterator it(enemybladeorbiter_3153_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(10, 80-randrange(40));
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1491_57_end: ;
}
void Frames::event_func_12530()
{
    // event 1492_57
    {
        if (!(group_main_engine_1)) goto event_1492_57_end;
        enemybladeorbiter_3153_instances.clear_selection();
        for (ObjectIterator it(enemybladeorbiter_3153_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!enemybladeorbiter_3153_instances.has_selection()) goto event_1492_57_end;
        for (ObjectIterator it(enemybladeorbiter_3153_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, (((Active*)*it)->alterables->values.get(8)+12)%math_helper%360);
            ((Active*)*it)->alterables->values.add(9, 1);
        }
    }
    event_1492_57_end: ;
}
void Frames::event_func_12531()
{
    // event 1493_57
    {
        if (!(group_main_engine_1)) goto event_1493_57_end;
        enemybladeorbiter_3153_instances.clear_selection();
        for (ObjectIterator it(enemybladeorbiter_3153_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-150))) { it.deselect(); continue; }
        }
        if (!enemybladeorbiter_3153_instances.has_selection()) goto event_1493_57_end;
        for (ObjectIterator it(enemybladeorbiter_3153_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 1);
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.set(9, 0);
        }
        media.play_id(SOUND_MANTALITH_SLASH_151, -1, 1);
    }
    event_1493_57_end: ;
}
void Frames::event_func_12532()
{
    // event 1494_57
    {
        if (!(group_main_engine_1)) goto event_1494_57_end;
        enemybladeorbiter_3153_instances.clear_selection();
        for (ObjectIterator it(enemybladeorbiter_3153_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!enemybladeorbiter_3153_instances.has_selection()) goto event_1494_57_end;
        for (ObjectIterator it(enemybladeorbiter_3153_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, get_min(((Active*)*it)->alterables->values.get(4)+1, 360));
            ((Active*)*it)->alterables->values.set(8, ((Active*)*it)->alterables->values.get(4)*2+180);
            ((Active*)*it)->alterables->values.add(9, 1);
        }
    }
    event_1494_57_end: ;
}
void Frames::event_func_12533()
{
    // event 1495_57
    {
        if (!(group_main_engine_1)) goto event_1495_57_end;
        enemybladeorbiter_3153_instances.clear_selection();
        for (ObjectIterator it(enemybladeorbiter_3153_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (20))) { it.deselect(); continue; }
        }
        if (!enemybladeorbiter_3153_instances.has_selection()) goto event_1495_57_end;
        for (ObjectIterator it(enemybladeorbiter_3153_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 2);
            ((Active*)*it)->alterables->values.set(9, 0);
        }
    }
    event_1495_57_end: ;
}
void Frames::event_func_12534()
{
    // event 1496_57
    bool or_result_1496_57 = false;
    bool or_temp_result_1496_57_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1496_57_0_end;
        enemybladeorbiter_3153_instances.clear_selection();
        for (ObjectIterator it(enemybladeorbiter_3153_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (318))) { it.deselect(); continue; }
        }
        if (!enemybladeorbiter_3153_instances.has_selection()) goto or_event_1496_57_0_end;
        or_result_1496_57 = true;
        or_temp_result_1496_57_0 = true;
    }
    or_event_1496_57_0_end: ;
    enemybladeorbiter_3153_instances.clear_saved_selection();
    if (or_temp_result_1496_57_0) {
        enemybladeorbiter_3153_instances.save_selection();
    }
    // event 1496_57
    bool or_temp_result_1496_57_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1496_57_1_end;
        enemybladeorbiter_3153_instances.clear_selection();
        for (ObjectIterator it(enemybladeorbiter_3153_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (20))) { it.deselect(); continue; }
        }
        if (!enemybladeorbiter_3153_instances.has_selection()) goto or_event_1496_57_1_end;
        or_result_1496_57 = true;
        or_temp_result_1496_57_1 = true;
        or_event_1496_57_1_end: ;
        if (or_temp_result_1496_57_1) {
            enemybladeorbiter_3153_instances.save_selection();
        }
        if (!or_result_1496_57) goto or_final_or_event_1496_57_1_end;
        enemybladeorbiter_3153_instances.empty_selection();
        if (or_temp_result_1496_57_0 || or_temp_result_1496_57_1) {
            enemybladeorbiter_3153_instances.restore_selection();
        }
        for (ObjectIterator it(enemybladeorbiter_3153_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, get_min(((Active*)*it)->alterables->values.get(4)+6, 360));
            ((Active*)*it)->alterables->values.set(8, ((Active*)*it)->alterables->values.get(4)*2+180);
        }
    }
    or_final_or_event_1496_57_1_end: ;
}
void Frames::event_func_12535()
{
    // event 1497_57
    {
        if (!(group_main_engine_1)) goto event_1497_57_end;
        enemybladeorbiter_3153_instances.clear_selection();
        for (ObjectIterator it(enemybladeorbiter_3153_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (210))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (318))) { it.deselect(); continue; }
        }
        if (!enemybladeorbiter_3153_instances.has_selection()) goto event_1497_57_end;
        for (ObjectIterator it(enemybladeorbiter_3153_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, get_min(((Active*)*it)->alterables->values.get(4)+6, 360));
        }
    }
    event_1497_57_end: ;
}
void Frames::event_func_12536()
{
    // event 1498_57
    {
        if (!(group_main_engine_1)) goto event_1498_57_end;
        enemybladeorbiter_3153_instances.clear_selection();
        for (ObjectIterator it(enemybladeorbiter_3153_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (318))) { it.deselect(); continue; }
        }
        if (!enemybladeorbiter_3153_instances.has_selection()) goto event_1498_57_end;
        for (ObjectIterator it(enemybladeorbiter_3153_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 1);
        }
    }
    event_1498_57_end: ;
}
void Frames::event_func_12537()
{
    // event 1499_57
    {
        if (!(group_main_engine_1)) goto event_1499_57_end;
        enemybladeorbiter_3153_instances.clear_selection();
        for (ObjectIterator it(enemybladeorbiter_3153_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (360))) { it.deselect(); continue; }
        }
        if (!enemybladeorbiter_3153_instances.has_selection()) goto event_1499_57_end;
        for (ObjectIterator it(enemybladeorbiter_3153_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(9, -40);
        }
    }
    event_1499_57_end: ;
}
void Frames::event_func_12538()
{
    // event 1500_57
    {
        if (!(group_main_engine_1)) goto event_1500_57_end;
        enemybladeorbiterleft_3151_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(enemybladeorbiterleft_3151_instances, playercharactersensor_383_instances)) goto event_1500_57_end;
        for (ObjectIterator it(enemybladeorbiterleft_3151_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
        }
        if (!enemybladeorbiterleft_3151_instances.has_selection()) goto event_1500_57_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1500_57_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1500_57_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.sub(1, 2);
    }
    event_1500_57_end: ;
}
void Frames::event_func_12539()
{
    // event 1501_57
    {
        if (!(group_main_engine_1)) goto event_1501_57_end;
        enemybladeorbiterright_3152_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(enemybladeorbiterright_3152_instances, playercharactersensor_383_instances)) goto event_1501_57_end;
        for (ObjectIterator it(enemybladeorbiterright_3152_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
        }
        if (!enemybladeorbiterright_3152_instances.has_selection()) goto event_1501_57_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1501_57_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1501_57_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(1, 2);
    }
    event_1501_57_end: ;
}
void Frames::event_func_12540()
{
    // event 1504_57
    {
        if (!(group_main_engine_1)) goto event_1504_57_end;
        enemybladeorbiter_3153_instances.clear_selection();
        for (ObjectIterator it(enemybladeorbiter_3153_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (6))) { it.deselect(); continue; }
        }
        if (!enemybladeorbiter_3153_instances.has_selection()) goto event_1504_57_end;
        for (ObjectIterator it(enemybladeorbiter_3153_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 6);
        }
    }
    event_1504_57_end: ;
}
void Frames::event_func_12541()
{
    // event 1505_57
    {
        if (!(group_main_engine_1)) goto event_1505_57_end;
        enemybladeorbiter_3153_instances.clear_selection();
        for (ObjectIterator it(enemybladeorbiter_3153_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (6))) { it.deselect(); continue; }
        }
        if (!enemybladeorbiter_3153_instances.has_selection()) goto event_1505_57_end;
        for (ObjectIterator it(enemybladeorbiter_3153_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1505_57_end: ;
}
void Frames::event_func_12542()
{
    // event 1506_57
    bool or_result_1506_57 = false;
    bool or_temp_result_1506_57_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1506_57_0_end;
        enemybladeorbiter_3153_instances.clear_selection();
        for (ObjectIterator it(enemybladeorbiter_3153_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemybladeorbiter_3153_instances.has_selection()) goto or_event_1506_57_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemybladeorbiter_3153_instances, qualifier_7)) goto or_event_1506_57_0_end;
        for (ObjectIterator it(enemybladeorbiter_3153_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemybladeorbiter_3153_instances.has_selection()) goto or_event_1506_57_0_end;
        or_result_1506_57 = true;
        or_temp_result_1506_57_0 = true;
    }
    or_event_1506_57_0_end: ;
    enemybladeorbiter_3153_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1506_57_0) {
        enemybladeorbiter_3153_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1506_57
    bool or_temp_result_1506_57_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1506_57_1_end;
        enemybladeorbiter_3153_instances.clear_selection();
        for (ObjectIterator it(enemybladeorbiter_3153_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemybladeorbiter_3153_instances.has_selection()) goto or_event_1506_57_1_end;
        or_result_1506_57 = true;
        or_temp_result_1506_57_1 = true;
        or_event_1506_57_1_end: ;
        if (or_temp_result_1506_57_1) {
            enemybladeorbiter_3153_instances.save_selection();
        }
        if (!or_result_1506_57) goto or_final_or_event_1506_57_1_end;
        enemybladeorbiter_3153_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1506_57_0 || or_temp_result_1506_57_1) {
            enemybladeorbiter_3153_instances.restore_selection();
        }
        if (or_temp_result_1506_57_0) {
            qualifier_7.restore_selection();
        }
        for (ObjectIterator it(enemybladeorbiter_3153_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1506_57_0; single_instance_1506_57_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybladeorbiter_3153_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1506_57_0 == NULL)
                    single_instance_1506_57_0 = new_obj;
            }
        }
        FrameObject * single_instance_1506_57_1; single_instance_1506_57_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybladeorbiter_3153_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1506_57_1 == NULL)
                    single_instance_1506_57_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_SHADEKILL_2_50, -1, 1);
    }
    or_final_or_event_1506_57_1_end: ;
}
void Frames::event_func_12543()
{
    // event 1507_57
    {
        if (!(group_main_engine_1)) goto event_1507_57_end;
        enemybladeorbiterleft_3151_instances.clear_selection();
        for (ObjectIterator it(enemybladeorbiterleft_3151_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (6))) { it.deselect(); continue; }
        }
        if (!enemybladeorbiterleft_3151_instances.has_selection()) goto event_1507_57_end;
        for (ObjectIterator it(enemybladeorbiterleft_3151_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.add(3, 0.3);
        }
        enemybladeorbiterright_3152_instances.clear_selection();
        for (ObjectIterator it(enemybladeorbiterright_3152_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.add(3, 0.3);
        }
    }
    event_1507_57_end: ;
}
void Frames::event_func_12544()
{
    // event 1508_57
    {
        if (!(group_main_engine_1)) goto event_1508_57_end;
        if (!((enemybladeorbiterleft_3151_instances.size()) > (enemybladeorbiter_3153_instances.size()))) goto event_1508_57_end;
        enemybladeorbiterleft_3151_instances.clear_selection();
        FrameObject * single_instance_1508_57_0; single_instance_1508_57_0 = pick_random(enemybladeorbiterleft_3151_instances);
        if (single_instance_1508_57_0 == NULL) goto event_1508_57_end;
        ((Active*)((Active*)single_instance_1508_57_0))->destroy();
    }
    event_1508_57_end: ;
}
void Frames::event_func_12545()
{
    // event 1509_57
    {
        if (!(group_main_engine_1)) goto event_1509_57_end;
        if (!((enemybladeorbiterright_3152_instances.size()) > (enemybladeorbiter_3153_instances.size()))) goto event_1509_57_end;
        enemybladeorbiterright_3152_instances.clear_selection();
        FrameObject * single_instance_1509_57_0; single_instance_1509_57_0 = pick_random(enemybladeorbiterright_3152_instances);
        if (single_instance_1509_57_0 == NULL) goto event_1509_57_end;
        ((Active*)((Active*)single_instance_1509_57_0))->destroy();
    }
    event_1509_57_end: ;
}
void Frames::event_func_12546()
{
    // event 1511_57
    {
        if (!(group_main_engine_1)) goto event_1511_57_end;
        enemyrocketpunchershield_3162_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpunchershield_3162_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(enemyrocketpuncher_3160_instances, it.current_index, default_active_instance))->get_x()+((Active*)get_instance(enemyrocketpuncher_3160_instances, it.current_index, default_active_instance))->alterables->values.get(6)*((Active*)get_instance(enemyrocketpuncher_3160_instances, it.current_index, default_active_instance))->alterables->values.get(8));
        }
        enemyrocketpuncherhand_3161_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpuncherhand_3161_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(enemyrocketpuncher_3160_instances, it.current_index, default_active_instance))->get_x()+((Active*)get_instance(enemyrocketpuncher_3160_instances, it.current_index, default_active_instance))->alterables->values.get(4)*((Active*)get_instance(enemyrocketpuncher_3160_instances, it.current_index, default_active_instance))->alterables->values.get(8));
            ((Active*)*it)->set_y(((Active*)get_instance(enemyrocketpuncher_3160_instances, it.current_index, default_active_instance))->get_y()+((Active*)get_instance(enemyrocketpuncher_3160_instances, it.current_index, default_active_instance))->alterables->values.get(5));
        }
        for (ObjectIterator it(enemyrocketpunchershield_3162_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(enemyrocketpuncher_3160_instances, it.current_index, default_active_instance))->get_y()+((Active*)get_instance(enemyrocketpuncher_3160_instances, it.current_index, default_active_instance))->alterables->values.get(7));
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(enemyrocketpuncher_3160_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        for (ObjectIterator it(enemyrocketpuncherhand_3161_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(enemyrocketpuncher_3160_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        for (ObjectIterator it(enemyrocketpunchershield_3162_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_instance(enemyrocketpuncher_3160_instances, it.current_index, default_active_instance))->alterables->values.get(8));
        }
        for (ObjectIterator it(enemyrocketpuncherhand_3161_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(enemyrocketpuncher_3160_instances, it.current_index, default_active_instance))->alterables->values.get(8));
        }
        for (ObjectIterator it(enemyrocketpunchershield_3162_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 4-int(((Active*)get_instance(enemyrocketpuncher_3160_instances, it.current_index, default_active_instance))->alterables->values.get(6)*0.2));
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->alterables->flags.enable(5);
        }
        effectrocketpuncherwarning_3163_instances.clear_selection();
        for (ObjectIterator it(effectrocketpuncherwarning_3163_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(enemyrocketpuncher_3160_instances, it.current_index, default_active_instance))->get_x()+((Active*)get_instance(enemyrocketpuncher_3160_instances, it.current_index, default_active_instance))->alterables->values.get(4)*((Active*)get_instance(enemyrocketpuncher_3160_instances, it.current_index, default_active_instance))->alterables->values.get(8));
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(enemyrocketpuncher_3160_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(enemyrocketpuncher_3160_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
    }
    event_1511_57_end: ;
}
void Frames::event_func_12547()
{
    // event 1512_57
    {
        if (!(group_main_engine_1)) goto event_1512_57_end;
        effectrocketpuncherwarning_3163_instances.clear_selection();
        for (ObjectIterator it(effectrocketpuncherwarning_3163_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (frame_top()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (frame_top()+global_values->get(17)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (frame_left()+global_values->get(16)+30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (frame_left()+global_values->get(16)+200))) { it.deselect(); continue; }
        }
        if (!effectrocketpuncherwarning_3163_instances.has_selection()) goto event_1512_57_end;
        for (ObjectIterator it(effectrocketpuncherwarning_3163_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_x(frame_left()+global_values->get(16)-20);
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1512_57_end: ;
}
void Frames::event_func_12548()
{
    // event 1513_57
    {
        if (!(group_main_engine_1)) goto event_1513_57_end;
        effectrocketpuncherwarning_3163_instances.clear_selection();
        for (ObjectIterator it(effectrocketpuncherwarning_3163_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (frame_top()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (frame_top()+global_values->get(17)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (frame_left()-30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (frame_left()-200))) { it.deselect(); continue; }
        }
        if (!effectrocketpuncherwarning_3163_instances.has_selection()) goto event_1513_57_end;
        for (ObjectIterator it(effectrocketpuncherwarning_3163_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_x(frame_left()+20);
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1513_57_end: ;
}
void Frames::event_func_12549()
{
    // event 1514_57
    {
        if (!(group_main_engine_1)) goto event_1514_57_end;
        enemyrocketpuncher_3160_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyrocketpuncher_3160_instances.has_selection()) goto event_1514_57_end;
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1514_57_end: ;
}
void Frames::event_func_12550()
{
    // event 1515_57
    {
        if (!(group_main_engine_1)) goto event_1515_57_end;
        enemyrocketpuncher_3160_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemyrocketpuncher_3160_instances.has_selection()) goto event_1515_57_end;
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1515_57_end: ;
}
void Frames::event_func_12551()
{
    // event 1516_57
    {
        if (!(group_main_engine_1)) goto event_1516_57_end;
        enemyrocketpunchershield_3162_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpunchershield_3162_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyrocketpunchershield_3162_instances.has_selection()) goto event_1516_57_end;
        for (ObjectIterator it(enemyrocketpunchershield_3162_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1516_57_end: ;
}
void Frames::event_func_12552()
{
    // event 1517_57
    {
        if (!(group_main_engine_1)) goto event_1517_57_end;
        enemyrocketpunchershield_3162_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpunchershield_3162_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemyrocketpunchershield_3162_instances.has_selection()) goto event_1517_57_end;
        for (ObjectIterator it(enemyrocketpunchershield_3162_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1517_57_end: ;
}
void Frames::event_func_12553()
{
    // event 1518_57
    {
        if (!(group_main_engine_1)) goto event_1518_57_end;
        enemyrocketpunchershield_3162_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpunchershield_3162_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) > (0))) { it.deselect(); continue; }
        }
        if (!enemyrocketpunchershield_3162_instances.has_selection()) goto event_1518_57_end;
        for (ObjectIterator it(enemyrocketpunchershield_3162_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1518_57_end: ;
}
void Frames::event_func_12554()
{
    // event 1519_57
    {
        if (!(group_main_engine_1)) goto event_1519_57_end;
        enemyrocketpunchershield_3162_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpunchershield_3162_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
        }
        if (!enemyrocketpunchershield_3162_instances.has_selection()) goto event_1519_57_end;
        for (ObjectIterator it(enemyrocketpunchershield_3162_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1519_57_end: ;
}
void Frames::event_func_12555()
{
    // event 1520_57
    {
        if (!(group_main_engine_1)) goto event_1520_57_end;
        enemyrocketpunchershield_3162_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpunchershield_3162_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!enemyrocketpunchershield_3162_instances.has_selection()) goto event_1520_57_end;
        for (ObjectIterator it(enemyrocketpunchershield_3162_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1520_57_end: ;
}
void Frames::event_func_12556()
{
    // event 1521_57
    {
        if (!(group_main_engine_1)) goto event_1521_57_end;
        enemyrocketpunchershield_3162_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpunchershield_3162_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!enemyrocketpunchershield_3162_instances.has_selection()) goto event_1521_57_end;
        for (ObjectIterator it(enemyrocketpunchershield_3162_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1521_57_end: ;
}
void Frames::event_func_12557()
{
    // event 1522_57
    {
        if (!(group_main_engine_1)) goto event_1522_57_end;
        enemyrocketpuncherhand_3161_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpuncherhand_3161_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyrocketpuncherhand_3161_instances.has_selection()) goto event_1522_57_end;
        for (ObjectIterator it(enemyrocketpuncherhand_3161_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1522_57_end: ;
}
void Frames::event_func_12558()
{
    // event 1523_57
    {
        if (!(group_main_engine_1)) goto event_1523_57_end;
        enemyrocketpuncherhand_3161_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpuncherhand_3161_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemyrocketpuncherhand_3161_instances.has_selection()) goto event_1523_57_end;
        for (ObjectIterator it(enemyrocketpuncherhand_3161_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1523_57_end: ;
}
void Frames::event_func_12559()
{
    // event 1524_57
    bool or_result_1524_57 = false;
    bool or_temp_result_1524_57_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1524_57_0_end;
        enemyrocketpuncherhand_3161_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpuncherhand_3161_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyrocketpuncherhand_3161_instances.has_selection()) goto or_event_1524_57_0_end;
        or_result_1524_57 = true;
        or_temp_result_1524_57_0 = true;
    }
    or_event_1524_57_0_end: ;
    enemyrocketpuncherhand_3161_instances.clear_saved_selection();
    if (or_temp_result_1524_57_0) {
        enemyrocketpuncherhand_3161_instances.save_selection();
    }
    // event 1524_57
    bool or_temp_result_1524_57_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1524_57_1_end;
        enemyrocketpuncherhand_3161_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpuncherhand_3161_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!enemyrocketpuncherhand_3161_instances.has_selection()) goto or_event_1524_57_1_end;
        or_result_1524_57 = true;
        or_temp_result_1524_57_1 = true;
        or_event_1524_57_1_end: ;
        if (or_temp_result_1524_57_1) {
            enemyrocketpuncherhand_3161_instances.save_selection();
        }
        if (!or_result_1524_57) goto or_final_or_event_1524_57_1_end;
        enemyrocketpuncherhand_3161_instances.clear_selection();
        if (or_temp_result_1524_57_0 || or_temp_result_1524_57_1) {
            enemyrocketpuncherhand_3161_instances.restore_selection();
        }
        for (ObjectIterator it(enemyrocketpuncherhand_3161_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->alterables->flags.disable(6);
        }
    }
    or_final_or_event_1524_57_1_end: ;
}
void Frames::event_func_12560()
{
    // event 1525_57
    bool or_result_1525_57 = false;
    bool or_temp_result_1525_57_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1525_57_0_end;
        enemyrocketpuncherhand_3161_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpuncherhand_3161_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyrocketpuncherhand_3161_instances.has_selection()) goto or_event_1525_57_0_end;
        or_result_1525_57 = true;
        or_temp_result_1525_57_0 = true;
    }
    or_event_1525_57_0_end: ;
    enemyrocketpuncherhand_3161_instances.clear_saved_selection();
    if (or_temp_result_1525_57_0) {
        enemyrocketpuncherhand_3161_instances.save_selection();
    }
    // event 1525_57
    bool or_temp_result_1525_57_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1525_57_1_end;
        enemyrocketpuncherhand_3161_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpuncherhand_3161_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!enemyrocketpuncherhand_3161_instances.has_selection()) goto or_event_1525_57_1_end;
        or_result_1525_57 = true;
        or_temp_result_1525_57_1 = true;
        or_event_1525_57_1_end: ;
        if (or_temp_result_1525_57_1) {
            enemyrocketpuncherhand_3161_instances.save_selection();
        }
        if (!or_result_1525_57) goto or_final_or_event_1525_57_1_end;
        enemyrocketpuncherhand_3161_instances.clear_selection();
        if (or_temp_result_1525_57_0 || or_temp_result_1525_57_1) {
            enemyrocketpuncherhand_3161_instances.restore_selection();
        }
        for (ObjectIterator it(enemyrocketpuncherhand_3161_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->alterables->flags.disable(6);
        }
    }
    or_final_or_event_1525_57_1_end: ;
}
void Frames::event_func_12561()
{
    // event 1526_57
    {
        if (!(group_main_engine_1)) goto event_1526_57_end;
        enemyrocketpuncherhand_3161_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpuncherhand_3161_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!enemyrocketpuncherhand_3161_instances.has_selection()) goto event_1526_57_end;
        for (ObjectIterator it(enemyrocketpuncherhand_3161_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->alterables->flags.disable(6);
        }
    }
    event_1526_57_end: ;
}
void Frames::event_func_12562()
{
    // event 1527_57
    {
        if (!(group_main_engine_1)) goto event_1527_57_end;
        enemyrocketpuncherhand_3161_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpuncherhand_3161_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!enemyrocketpuncherhand_3161_instances.has_selection()) goto event_1527_57_end;
        for (ObjectIterator it(enemyrocketpuncherhand_3161_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->set_visible(false);
        }
        FrameObject * single_instance_1527_57_0; single_instance_1527_57_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyrocketpuncherhand_3161_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1527_57_0 == NULL)
                    single_instance_1527_57_0 = new_obj;
            }
        }
    }
    event_1527_57_end: ;
}
void Frames::event_func_12563()
{
    // event 1528_57
    {
        if (!(group_main_engine_1)) goto event_1528_57_end;
        enemyrocketpuncher_3160_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-150)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemyrocketpuncher_3160_instances.has_selection()) goto event_1528_57_end;
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 1);
            ((Active*)*it)->alterables->values.set(8, -1);
            ((Active*)*it)->alterables->flags.enable(5);
        }
    }
    event_1528_57_end: ;
}
void Frames::event_func_12564()
{
    // event 1529_57
    {
        if (!(group_main_engine_1)) goto event_1529_57_end;
        enemyrocketpuncher_3160_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-150)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemyrocketpuncher_3160_instances.has_selection()) goto event_1529_57_end;
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 1);
            ((Active*)*it)->alterables->values.set(8, 1);
            ((Active*)*it)->alterables->flags.enable(5);
        }
    }
    event_1529_57_end: ;
}
void Frames::event_func_12565()
{
    // event 1530_57
    {
        if (!(group_main_engine_1)) goto event_1530_57_end;
        enemyrocketpuncher_3160_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (30))) { it.deselect(); continue; }
        }
        if (!enemyrocketpuncher_3160_instances.has_selection()) goto event_1530_57_end;
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->alterables->flags.disable(5);
        }
    }
    event_1530_57_end: ;
}
void Frames::event_func_12566()
{
    // event 1531_57
    {
        if (!(group_main_engine_1)) goto event_1531_57_end;
        enemyrocketpuncher_3160_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyrocketpuncher_3160_instances.has_selection()) goto event_1531_57_end;
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-2, 0));
            ((Active*)*it)->alterables->values.set(5, get_max(((Active*)*it)->alterables->values.get(5)-2, 8));
            ((Active*)*it)->alterables->values.set(4, get_min(((Active*)*it)->alterables->values.get(4)+8, 28));
            ((Active*)*it)->alterables->values.add(9, 1);
        }
    }
    event_1531_57_end: ;
}
void Frames::event_func_12567()
{
    // event 1532_57
    {
        if (!(group_main_engine_1)) goto event_1532_57_end;
        enemyrocketpuncher_3160_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (30))) { it.deselect(); continue; }
        }
        if (!enemyrocketpuncher_3160_instances.has_selection()) goto event_1532_57_end;
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 2);
            ((Active*)*it)->alterables->values.set(9, 0);
        }
    }
    event_1532_57_end: ;
}
void Frames::event_func_12568()
{
    // event 1533_57
    {
        if (!(group_main_engine_1)) goto event_1533_57_end;
        enemyrocketpuncher_3160_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!enemyrocketpuncher_3160_instances.has_selection()) goto event_1533_57_end;
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 1);
            ((Active*)*it)->alterables->values.set(4, get_min(((Active*)*it)->alterables->values.get(4)+10, 200));
        }
    }
    event_1533_57_end: ;
}
void Frames::event_func_12569()
{
    // event 1534_57
    {
        if (!(group_main_engine_1)) goto event_1534_57_end;
        enemyrocketpuncher_3160_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (40))) { it.deselect(); continue; }
        }
        if (!enemyrocketpuncher_3160_instances.has_selection()) goto event_1534_57_end;
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 3);
            ((Active*)*it)->alterables->values.set(9, 0);
        }
    }
    event_1534_57_end: ;
}
void Frames::event_func_12570()
{
    // event 1535_57
    {
        if (!(group_main_engine_1)) goto event_1535_57_end;
        enemyrocketpuncher_3160_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!enemyrocketpuncher_3160_instances.has_selection()) goto event_1535_57_end;
        enemyrocketpuncherhand_3161_instances.clear_selection();
        playerreflect_447_instances.clear_selection();
        if (!check_overlap(enemyrocketpuncherhand_3161_instances, playerreflect_447_instances)) goto event_1535_57_end;
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 3);
            ((Active*)*it)->alterables->values.set(9, 0);
        }
    }
    event_1535_57_end: ;
}
void Frames::event_func_12571()
{
    // event 1536_57
    {
        if (!(group_main_engine_1)) goto event_1536_57_end;
        enemyrocketpuncher_3160_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
        }
        if (!enemyrocketpuncher_3160_instances.has_selection()) goto event_1536_57_end;
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, get_max(((Active*)*it)->alterables->values.get(4)-10, 28));
        }
    }
    event_1536_57_end: ;
}
void Frames::event_func_12572()
{
    // event 1537_57
    {
        if (!(group_main_engine_1)) goto event_1537_57_end;
        enemyrocketpuncher_3160_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (28))) { it.deselect(); continue; }
        }
        if (!enemyrocketpuncher_3160_instances.has_selection()) goto event_1537_57_end;
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 4);
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1537_57_end: ;
}
void Frames::event_func_12573()
{
    // event 1538_57
    {
        if (!(group_main_engine_1)) goto event_1538_57_end;
        enemyrocketpuncherhand_3161_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(enemyrocketpuncherhand_3161_instances, playercharactersensor_383_instances)) goto event_1538_57_end;
        for (ObjectIterator it(enemyrocketpuncherhand_3161_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (3))) { it.deselect(); continue; }
        }
        if (!enemyrocketpuncherhand_3161_instances.has_selection()) goto event_1538_57_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1538_57_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1538_57_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 20);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(1, ((Active*)get_single(enemyrocketpuncherhand_3161_instances, default_active_instance))->alterables->values.get(1)*8);
    }
    event_1538_57_end: ;
}
void Frames::event_func_12574()
{
    // event 1540_57
    {
        if (!(group_main_engine_1)) goto event_1540_57_end;
        enemyrocketpuncher_3160_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
        }
        if (!enemyrocketpuncher_3160_instances.has_selection()) goto event_1540_57_end;
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_min(((Active*)*it)->alterables->values.get(6)+2, 24));
            ((Active*)*it)->alterables->values.set(5, get_min(((Active*)*it)->alterables->values.get(5)+2, 16));
            ((Active*)*it)->alterables->values.set(4, get_max(((Active*)*it)->alterables->values.get(4)-8, -24));
            ((Active*)*it)->alterables->values.add(9, 1);
        }
    }
    event_1540_57_end: ;
}
void Frames::event_func_12575()
{
    // event 1541_57
    {
        if (!(group_main_engine_1)) goto event_1541_57_end;
        enemyrocketpuncher_3160_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (15))) { it.deselect(); continue; }
        }
        if (!enemyrocketpuncher_3160_instances.has_selection()) goto event_1541_57_end;
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(9, -40);
        }
    }
    event_1541_57_end: ;
}
void Frames::event_func_12576()
{
    // event 1542_57
    {
        if (!(group_main_engine_1)) goto event_1542_57_end;
        enemyrocketpuncher_3160_instances.clear_selection();
        playerreflect_447_instances.clear_selection();
        if (!check_overlap(enemyrocketpuncher_3160_instances, playerreflect_447_instances)) goto event_1542_57_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (5))) goto event_1542_57_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(5)) < (3))) goto event_1542_57_end;
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (4))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!enemyrocketpuncher_3160_instances.has_selection()) goto event_1542_57_end;
        FrameObject * single_instance_1542_57_0; single_instance_1542_57_0 = pick_random(enemyrocketpuncher_3160_instances);
        if (single_instance_1542_57_0 == NULL) goto event_1542_57_end;
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        ((Active*)((Active*)single_instance_1542_57_0))->alterables->values.set(2, 3);
        ((Active*)((Active*)single_instance_1542_57_0))->alterables->values.set(23, cos_deg(((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(2))*5*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)((Active*)single_instance_1542_57_0))->alterables->values.set(24, sin_deg(((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(2))*-5*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)((Active*)single_instance_1542_57_0))->alterables->values.sub(0, ((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(7)*2);
        {
            ((Active*)single_instance_1542_57_0)->set_shader(Render::INVERT);
        }
    }
    event_1542_57_end: ;
}
void Frames::event_func_12577()
{
    // event 1543_57
    {
        if (!(group_main_engine_1)) goto event_1543_57_end;
        enemyrocketpuncher_3160_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyrocketpuncher_3160_instances.has_selection()) goto event_1543_57_end;
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->alterables->values.set(3, 6);
        }
    }
    event_1543_57_end: ;
}
void Frames::event_func_12578()
{
    // event 1544_57
    {
        if (!(group_main_engine_1)) goto event_1544_57_end;
        enemyrocketpuncher_3160_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyrocketpuncher_3160_instances.has_selection()) goto event_1544_57_end;
        if (!((global_values->get(3)%math_helper%7) == (0))) goto event_1544_57_end;
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        FrameObject * single_instance_1544_57_0; single_instance_1544_57_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyrocketpuncher_3160_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1544_57_0 == NULL)
                    single_instance_1544_57_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1544_57_0))->set_x(((Active*)single_instance_1544_57_0)->get_x()-20+randrange(41));
        ((Active*)((Active*)single_instance_1544_57_0))->set_y(((Active*)single_instance_1544_57_0)->get_y()-20+randrange(41));
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(16, 1);
        }
    }
    event_1544_57_end: ;
}
void Frames::event_func_12579()
{
    // event 1545_57
    {
        if (!(group_main_engine_1)) goto event_1545_57_end;
        enemyrocketpuncher_3160_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (10))) { it.deselect(); continue; }
        }
        if (!enemyrocketpuncher_3160_instances.has_selection()) goto event_1545_57_end;
        FrameObject * single_instance_1545_57_0; single_instance_1545_57_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyrocketpuncher_3160_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1545_57_0 == NULL)
                    single_instance_1545_57_0 = new_obj;
            }
        }
        FrameObject * single_instance_1545_57_1; single_instance_1545_57_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyrocketpuncher_3160_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1545_57_1 == NULL)
                    single_instance_1545_57_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1545_57_1))->set_direction(3);
    }
    event_1545_57_end: ;
}
void Frames::event_func_12580()
{
    // event 1546_57
    {
        if (!(group_main_engine_1)) goto event_1546_57_end;
        enemyrocketpuncher_3160_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (10))) { it.deselect(); continue; }
        }
        if (!enemyrocketpuncher_3160_instances.has_selection()) goto event_1546_57_end;
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -8);
        }
        {
            loop_spawndebris_running = true;
            int times = int(8);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_57();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1546_57_0_end;
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
        dynamic_1546_57_0_end: ;
    }
    event_1546_57_end: ;
}
void Frames::event_func_12581()
{
    // event 1548_57
    {
        if (!(group_main_engine_1)) goto event_1548_57_end;
        enemyrocketpuncher_3160_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemyrocketpuncher_3160_instances.has_selection()) goto event_1548_57_end;
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1548_57_end: ;
}
void Frames::event_func_12582()
{
    // event 1549_57
    {
        if (!(group_main_engine_1)) goto event_1549_57_end;
        if (!((enemyrocketpunchershield_3162_instances.size()) > (enemyrocketpuncher_3160_instances.size()))) goto event_1549_57_end;
        enemyrocketpunchershield_3162_instances.clear_selection();
        FrameObject * single_instance_1549_57_0; single_instance_1549_57_0 = pick_random(enemyrocketpunchershield_3162_instances);
        if (single_instance_1549_57_0 == NULL) goto event_1549_57_end;
        ((Active*)((Active*)single_instance_1549_57_0))->destroy();
    }
    event_1549_57_end: ;
}
void Frames::event_func_12583()
{
    // event 1550_57
    {
        if (!(group_main_engine_1)) goto event_1550_57_end;
        if (!((enemyrocketpuncherhand_3161_instances.size()) > (enemyrocketpuncher_3160_instances.size()))) goto event_1550_57_end;
        enemyrocketpuncherhand_3161_instances.clear_selection();
        FrameObject * single_instance_1550_57_0; single_instance_1550_57_0 = pick_random(enemyrocketpuncherhand_3161_instances);
        if (single_instance_1550_57_0 == NULL) goto event_1550_57_end;
        ((Active*)((Active*)single_instance_1550_57_0))->destroy();
    }
    event_1550_57_end: ;
}
void Frames::event_func_12584()
{
    // event 1551_57
    {
        if (!(group_main_engine_1)) goto event_1551_57_end;
        if (!((effectrocketpuncherwarning_3163_instances.size()) > (enemyrocketpuncher_3160_instances.size()))) goto event_1551_57_end;
        effectrocketpuncherwarning_3163_instances.clear_selection();
        FrameObject * single_instance_1551_57_0; single_instance_1551_57_0 = pick_random(effectrocketpuncherwarning_3163_instances);
        if (single_instance_1551_57_0 == NULL) goto event_1551_57_end;
        ((Active*)((Active*)single_instance_1551_57_0))->destroy();
    }
    event_1551_57_end: ;
}
void Frames::event_func_12585()
{
    // event 1554_57
    {
        if (!(group_main_engine_1)) goto event_1554_57_end;
        enemyrocketpuncherhand_3161_instances.clear_selection();
        gimmickbarrel_3159_instances.clear_selection();
        if (!check_overlap(enemyrocketpuncherhand_3161_instances, gimmickbarrel_3159_instances)) goto event_1554_57_end;
        for (ObjectIterator it(enemyrocketpuncherhand_3161_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (3))) { it.deselect(); continue; }
        }
        if (!enemyrocketpuncherhand_3161_instances.has_selection()) goto event_1554_57_end;
        for (ObjectIterator it(gimmickbarrel_3159_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!gimmickbarrel_3159_instances.has_selection()) goto event_1554_57_end;
        for (ObjectIterator it(gimmickbarrel_3159_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
        media.play_id(SOUND_ITEM_CRATE_2_280, -1, 1);
        media.play_id(SOUND_COMMON_EXPLODE9_313, -1, 1);
    }
    event_1554_57_end: ;
}
void Frames::event_func_12586()
{
    // event 1555_57
    {
        if (!(group_main_engine_1)) goto event_1555_57_end;
        enemyrocketpuncherhand_3161_instances.clear_selection();
        enemytotematic_3103_instances.clear_selection();
        if (!check_overlap(enemyrocketpuncherhand_3161_instances, enemytotematic_3103_instances)) goto event_1555_57_end;
        for (ObjectIterator it(enemyrocketpuncherhand_3161_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (3))) { it.deselect(); continue; }
        }
        if (!enemyrocketpuncherhand_3161_instances.has_selection()) goto event_1555_57_end;
        for (ObjectIterator it(enemytotematic_3103_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!enemytotematic_3103_instances.has_selection()) goto event_1555_57_end;
        for (ObjectIterator it(enemytotematic_3103_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    event_1555_57_end: ;
}
void Frames::event_func_12587()
{
    // event 1564_57
    {
        if (!(group_main_engine_1)) goto event_1564_57_end;
        if (!((global_values->get(4)) < (2))) goto event_1564_57_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (7280))) goto event_1564_57_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (7480))) goto event_1564_57_end;
        global_values->set(4, 2);
        global_values->set(5, 7380);
        global_values->set(6, 570);
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
    event_1564_57_end: ;
}
void Frames::event_func_12588()
{
    // event 1774_57
    {
        if (!(group_pause_1)) goto event_1774_57_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_1774_57_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_1774_57_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1774_57_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1774_57_end;
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
        ((Active*)get_instance(objectjumppad_530_instances))->stop_animation();
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
    }
    event_1774_57_end: ;
}
void Frames::event_func_12589()
{
    // event 1775_57
    bool or_result_1775_57 = false;
    bool or_temp_result_1775_57_0 = false;
    {
        if (!(group_pause_1)) goto or_event_1775_57_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_1775_57_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1775_57_0_end;
        or_result_1775_57 = true;
        or_temp_result_1775_57_0 = true;
    }
    or_event_1775_57_0_end: ;
    // event 1775_57
    bool or_temp_result_1775_57_1 = false;
    {
        if (!(group_pause_1)) goto or_event_1775_57_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_1775_57_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1775_57_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_1775_57_1_end;
        or_result_1775_57 = true;
        or_temp_result_1775_57_1 = true;
        or_event_1775_57_1_end: ;
        if (!or_result_1775_57) goto or_final_or_event_1775_57_1_end;
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
        ((Active*)get_instance(objectjumppad_530_instances))->start_animation();
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
    }
    or_final_or_event_1775_57_1_end: ;
}
void Frames::handle_frame_58_events()
{
    test_collisions_57();
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
    event_func_12465();
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
    event_func_12466();
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
    event_func_12467();
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
    event_func_3735();
    event_func_3736();
    if (!group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1) goto group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end;
    event_func_3737();
    event_func_3738();
    event_func_3739();
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end: ;
    event_func_12468();
    event_func_12469();
    event_func_12470();
    event_func_12471();
    event_func_12472();
    event_func_12473();
    event_func_12474();
    event_func_12475();
    event_func_12476();
    event_func_12477();
    event_func_12478();
    event_func_12479();
    event_func_12480();
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
    event_func_12514();
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
    event_func_12580();
    event_func_12581();
    event_func_12582();
    event_func_12583();
    event_func_12584();
    event_func_12585();
    event_func_12586();
    event_func_3808();
    event_func_2996();
    event_func_2997();
    event_func_2998();
    event_func_3286();
    event_func_2491();
    event_func_12587();
    if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) goto group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end;
    event_func_4173();
    event_func_4059();
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end: ;
    event_func_12438();
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
    if (!group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1) goto group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1_end;
    event_func_2575();
    event_func_4119();
    event_func_2577();
    event_func_3243();
    event_func_3244();
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
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_12588();
    event_func_12589();
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
void Frames::handle_frame_58_pre_events()
{
}
void Frames::event_func_12590()
{
    // event 3_57
    {
        if (!(group_main_engine_1)) goto event_3_57_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 2000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 72);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 39);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
    }
    event_3_57_end: ;
}
void Frames::event_func_12591()
{
    // event 1404_57
    {
        if (!(group_main_engine_1)) goto event_1404_57_end;
        hazardshuriken_3154_instances.clear_selection();
        for (ObjectIterator it(hazardshuriken_3154_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
        hazardshurikenturn_3156_instances.clear_selection();
        for (ObjectIterator it(hazardshurikenturn_3156_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
        }
        levelhideoutplatform1_3157_instances.clear_selection();
        spread_value(levelhideoutplatform1_3157_instances, 4, 0);
        for (ObjectIterator it(levelhideoutplatform1_3157_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, (((Active*)*it)->alterables->values.get(4)*180)%math_helper%360);
        }
    }
    event_1404_57_end: ;
}
void Frames::event_func_12592()
{
    // event 1409_57
    {
        if (!(group_main_engine_1)) goto event_1409_57_end;
        gimmickbarrel_3159_instances.clear_selection();
        for (ObjectIterator it(gimmickbarrel_3159_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
        }
    }
    event_1409_57_end: ;
}
void Frames::event_func_12593()
{
    // event 1486_57
    {
        if (!(group_main_engine_1)) goto event_1486_57_end;
        enemybladeorbiter_3153_instances.clear_selection();
        for (ObjectIterator it(enemybladeorbiter_3153_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->get_y());
        }
    }
    event_1486_57_end: ;
}
void Frames::event_func_12594()
{
    // event 1510_57
    {
        if (!(group_main_engine_1)) goto event_1510_57_end;
        enemyrocketpuncher_3160_instances.clear_selection();
        for (ObjectIterator it(enemyrocketpuncher_3160_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
            ((Active*)*it)->alterables->flags.enable(16);
        }
    }
    event_1510_57_end: ;
}
void Frames::event_func_12595()
{
    // event 1722_57
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1722_57_end;
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(7);
        }
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(5);
        }
    }
    event_1722_57_end: ;
}
void Frames::on_frame_58_start_events()
{
    event_func_12442();
    event_func_4133();
    event_func_12590();
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
    event_func_12445();
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
    event_func_3273();
    event_func_3986();
    event_func_3987();
    event_func_12591();
    event_func_12592();
    event_func_12593();
    event_func_12594();
    event_func_2686();
    event_func_2687();
    event_func_3277();
    event_func_2690();
    event_func_2691();
    event_func_12595();
    event_func_4145();
    event_func_5573();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_58_init()
{
    index = 57;
    width = 12816;
    height = 1800;
    virtual_width = 12816;
    virtual_height = 1800;
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
    static ObjectList* qualifier_20_instances[] = {&enemytotematic_3103_instances, &enemymetalpup_3149_instances, &enemyshockpuppet_3150_instances, &enemybladeorbiter_3153_instances, &hazardshuriken_3154_instances, &enemyrocketpuncher_3160_instances, &enemyrocketpunchershield_3162_instances, NULL};
    qualifier_20.set(7, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece0_465_instances, NULL};
    qualifier_0.set(1, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &enemytotematic_3103_instances, &hazardspikesdown_559_instances, &hazardspikesup_558_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, &levelhideoutplatform1_3157_instances, &enemyrocketpunchershield_3162_instances, &levelthcollapsingplatform_3164_instances, &levelthcollapsingplatformpiece_3165_instances, NULL};
    qualifier_7.set(31, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_4.set(34, &qualifier_4_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(12, &qualifier_19_instances[0]);
    static ObjectList* qualifier_23_instances[] = {&gimmickhangingidlesensor_740_instances, NULL};
    qualifier_23.set(1, &qualifier_23_instances[0]);
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
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &levelhideoutplatform1_3157_instances, NULL};
    qualifier_13.set(2, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0_3121(0, 0), 0);
    add_background_object(create_thtorchtop_3122(768, 1008), 1);
    add_background_object(create_thtorchmid_3123(768, 1032), 1);
    add_background_object(create_thtorchmid_3123(768, 1096), 1);
    add_background_object(create_thtorchmid_3123(768, 1160), 1);
    add_background_object(create_thtorchmid_3123(768, 1224), 1);
    add_background_object(create_thtorchtop_3122(896, 1072), 1);
    add_background_object(create_thtorchmid_3123(896, 1096), 1);
    add_background_object(create_thtorchmid_3123(896, 1160), 1);
    add_background_object(create_thtorchmid_3123(896, 1224), 1);
    add_background_object(create_thtorchmid_3123(768, 1288), 1);
    add_background_object(create_thtorchmid_3123(896, 1288), 1);
    add_background_object(create_thtorchmid_3123(768, 1352), 1);
    add_background_object(create_thtorchmid_3123(896, 1352), 1);
    add_background_object(create_thtorchmid_3123(768, 1416), 1);
    add_background_object(create_thtorchmid_3123(896, 1416), 1);
    add_background_object(create_thtorchtop_3122(1024, 1136), 1);
    add_background_object(create_thtorchmid_3123(1024, 1160), 1);
    add_background_object(create_thtorchmid_3123(1024, 1224), 1);
    add_background_object(create_thtorchmid_3123(1024, 1288), 1);
    add_background_object(create_thtorchmid_3123(1024, 1352), 1);
    add_background_object(create_thtorchmid_3123(1024, 1416), 1);
    add_background_object(create_thtorchtop_3122(1160, 1200), 1);
    add_background_object(create_thtorchmid_3123(1160, 1224), 1);
    add_background_object(create_thtorchmid_3123(1160, 1288), 1);
    add_background_object(create_thtorchmid_3123(1160, 1352), 1);
    add_background_object(create_thtorchmid_3123(1160, 1416), 1);
    add_background_object(create_thtorchtop_3122(1296, 1136), 1);
    add_background_object(create_thtorchmid_3123(1296, 1160), 1);
    add_background_object(create_thtorchmid_3123(1296, 1224), 1);
    add_background_object(create_thtorchmid_3123(1296, 1288), 1);
    add_background_object(create_thtorchmid_3123(1296, 1352), 1);
    add_background_object(create_thtorchmid_3123(1296, 1416), 1);
    add_background_object(create_thtorchtop_3122(1440, 1008), 1);
    add_background_object(create_thtorchmid_3123(1440, 1032), 1);
    add_background_object(create_thtorchmid_3123(1440, 1096), 1);
    add_background_object(create_thtorchmid_3123(1440, 1416), 1);
    add_background_object(create_thtorchtop_3122(1584, 1136), 1);
    add_background_object(create_thtorchmid_3123(1584, 1160), 1);
    add_background_object(create_thtorchmid_3123(1584, 1224), 1);
    add_background_object(create_thtorchmid_3123(1584, 1288), 1);
    add_background_object(create_thtorchmid_3123(1584, 1352), 1);
    add_background_object(create_thtorchmid_3123(1584, 1416), 1);
    add_background_object(create_thtorchtop_3122(1720, 1200), 1);
    add_background_object(create_thtorchmid_3123(1720, 1224), 1);
    add_background_object(create_thtorchmid_3123(1720, 1288), 1);
    add_background_object(create_thtorchmid_3123(1720, 1352), 1);
    add_background_object(create_thtorchmid_3123(1720, 1416), 1);
    add_background_object(create_thtorchtop_3122(1856, 1136), 1);
    add_background_object(create_thtorchmid_3123(1856, 1160), 1);
    add_background_object(create_thtorchmid_3123(1856, 1224), 1);
    add_background_object(create_thtorchmid_3123(1856, 1288), 1);
    add_background_object(create_thtorchmid_3123(1856, 1352), 1);
    add_background_object(create_thtorchmid_3123(1856, 1416), 1);
    add_background_object(create_thtorchmid_3123(1440, 1160), 1);
    add_background_object(create_thtorchmid_3123(1440, 1224), 1);
    add_background_object(create_thtorchmid_3123(1440, 1288), 1);
    add_background_object(create_thtorchmid_3123(1440, 1352), 1);
    add_background_object(create_thtorchtop_3122(2056, 496), 1);
    add_background_object(create_thtorchmid_3123(2056, 520), 1);
    add_background_object(create_thtorchmid_3123(2056, 584), 1);
    add_background_object(create_thtorchmid_3123(2056, 712), 1);
    add_background_object(create_thtorchmid_3123(2056, 904), 1);
    add_background_object(create_thtorchmid_3123(2056, 968), 1);
    add_background_object(create_thtorchtop_3122(2192, 432), 1);
    add_background_object(create_thtorchmid_3123(2192, 456), 1);
    add_background_object(create_thtorchmid_3123(2192, 712), 1);
    add_background_object(create_thtorchmid_3123(2192, 904), 1);
    add_background_object(create_thtorchmid_3123(2192, 968), 1);
    add_background_object(create_thtorchtop_3122(2328, 496), 1);
    add_background_object(create_thtorchmid_3123(2328, 520), 1);
    add_background_object(create_thtorchmid_3123(2328, 584), 1);
    add_background_object(create_thtorchmid_3123(2328, 712), 1);
    add_background_object(create_thtorchmid_3123(2328, 904), 1);
    add_background_object(create_thtorchmid_3123(2328, 968), 1);
    add_background_object(create_thtorchmid_3123(2056, 1160), 1);
    add_background_object(create_thtorchmid_3123(2056, 1224), 1);
    add_background_object(create_thtorchmid_3123(2056, 1288), 1);
    add_background_object(create_thtorchmid_3123(2056, 1352), 1);
    add_background_object(create_thtorchmid_3123(2192, 1160), 1);
    add_background_object(create_thtorchmid_3123(2192, 1224), 1);
    add_background_object(create_thtorchmid_3123(2192, 1288), 1);
    add_background_object(create_thtorchmid_3123(2192, 1352), 1);
    add_background_object(create_thtorchmid_3123(2328, 1160), 1);
    add_background_object(create_thtorchmid_3123(2328, 1224), 1);
    add_background_object(create_thtorchmid_3123(2328, 1288), 1);
    add_background_object(create_thtorchmid_3123(2328, 1352), 1);
    add_background_object(create_thtorchmid_3123(2056, 1416), 1);
    add_background_object(create_thtorchmid_3123(2192, 1416), 1);
    add_background_object(create_thtorchmid_3123(2328, 1416), 1);
    add_background_object(create_thtorchmid_3123(2056, 1032), 1);
    add_background_object(create_thtorchmid_3123(2056, 1096), 1);
    add_background_object(create_thtorchmid_3123(2192, 1032), 1);
    add_background_object(create_thtorchmid_3123(2192, 1096), 1);
    add_background_object(create_thtorchmid_3123(2328, 1032), 1);
    add_background_object(create_thtorchmid_3123(2328, 1096), 1);
    add_background_object(create_thtorchmid_3123(2056, 776), 1);
    add_background_object(create_thtorchmid_3123(2192, 776), 1);
    add_background_object(create_thtorchmid_3123(2328, 776), 1);
    add_background_object(create_thtorchmid_3123(2056, 840), 1);
    add_background_object(create_thtorchmid_3123(2192, 840), 1);
    add_background_object(create_thtorchmid_3123(2328, 840), 1);
    add_background_object(create_thtorchmid_3123(2056, 648), 1);
    add_background_object(create_thtorchmid_3123(2192, 520), 1);
    add_background_object(create_thtorchmid_3123(2328, 648), 1);
    add_background_object(create_thtorchmid_3123(2192, 584), 1);
    add_background_object(create_thtorchmid_3123(2192, 648), 1);
    add_background_object(create_thtorchtop_3122(3136, 752), 1);
    add_background_object(create_thtorchmid_3123(3136, 776), 1);
    add_background_object(create_thtorchmid_3123(3136, 904), 1);
    add_background_object(create_thtorchmid_3123(3136, 1096), 1);
    add_background_object(create_thtorchmid_3123(3136, 1160), 1);
    add_background_object(create_thtorchtop_3122(3272, 688), 1);
    add_background_object(create_thtorchmid_3123(3272, 712), 1);
    add_background_object(create_thtorchmid_3123(3272, 904), 1);
    add_background_object(create_thtorchmid_3123(3272, 1096), 1);
    add_background_object(create_thtorchmid_3123(3272, 1160), 1);
    add_background_object(create_thtorchmid_3123(3136, 1352), 1);
    add_background_object(create_thtorchmid_3123(3136, 1416), 1);
    add_background_object(create_thtorchmid_3123(3272, 1352), 1);
    add_background_object(create_thtorchmid_3123(3272, 1416), 1);
    add_background_object(create_thtorchmid_3123(3136, 1224), 1);
    add_background_object(create_thtorchmid_3123(3136, 1288), 1);
    add_background_object(create_thtorchmid_3123(3272, 1224), 1);
    add_background_object(create_thtorchmid_3123(3272, 1288), 1);
    add_background_object(create_thtorchmid_3123(3136, 968), 1);
    add_background_object(create_thtorchmid_3123(3272, 968), 1);
    add_background_object(create_thtorchmid_3123(3136, 1032), 1);
    add_background_object(create_thtorchmid_3123(3272, 1032), 1);
    add_background_object(create_thtorchmid_3123(3136, 840), 1);
    add_background_object(create_thtorchmid_3123(3272, 776), 1);
    add_background_object(create_thtorchmid_3123(3272, 840), 1);
    add_background_object(create_thtorchtop_3122(3416, 944), 1);
    add_background_object(create_thtorchmid_3123(3416, 968), 1);
    add_background_object(create_thtorchmid_3123(3416, 1096), 1);
    add_background_object(create_thtorchmid_3123(3416, 1288), 1);
    add_background_object(create_thtorchmid_3123(3416, 1352), 1);
    add_background_object(create_thtorchmid_3123(3416, 1416), 1);
    add_background_object(create_thtorchmid_3123(3416, 1160), 1);
    add_background_object(create_thtorchmid_3123(3416, 1224), 1);
    add_background_object(create_thtorchmid_3123(3416, 1032), 1);
    add_background_object(create_thtorchtop_3122(3568, 1072), 1);
    add_background_object(create_thtorchmid_3123(3568, 1096), 1);
    add_background_object(create_thtorchmid_3123(3568, 1224), 1);
    add_background_object(create_thtorchmid_3123(3568, 1416), 1);
    add_background_object(create_thtorchmid_3123(3568, 1288), 1);
    add_background_object(create_thtorchmid_3123(3568, 1352), 1);
    add_background_object(create_thtorchmid_3123(3568, 1160), 1);
    add_background_object(create_thtorchtop_3122(3720, 1136), 1);
    add_background_object(create_thtorchmid_3123(3720, 1160), 1);
    add_background_object(create_thtorchmid_3123(3720, 1288), 1);
    add_background_object(create_thtorchmid_3123(3720, 1352), 1);
    add_background_object(create_thtorchmid_3123(3720, 1416), 1);
    add_background_object(create_thtorchmid_3123(3720, 1224), 1);
    add_background_object(create_thtorchtop_3122(3904, 1008), 1);
    add_background_object(create_thtorchmid_3123(3904, 1032), 1);
    add_background_object(create_thtorchmid_3123(3904, 1096), 1);
    add_background_object(create_thtorchmid_3123(3904, 1160), 1);
    add_background_object(create_thtorchmid_3123(3904, 1224), 1);
    add_background_object(create_thtorchtop_3122(4032, 1072), 1);
    add_background_object(create_thtorchmid_3123(4032, 1096), 1);
    add_background_object(create_thtorchmid_3123(4032, 1160), 1);
    add_background_object(create_thtorchmid_3123(4032, 1224), 1);
    add_background_object(create_thtorchmid_3123(3904, 1288), 1);
    add_background_object(create_thtorchmid_3123(4032, 1288), 1);
    add_background_object(create_thtorchmid_3123(3904, 1352), 1);
    add_background_object(create_thtorchmid_3123(4032, 1352), 1);
    add_background_object(create_thtorchmid_3123(3904, 1416), 1);
    add_background_object(create_thtorchmid_3123(4032, 1416), 1);
    add_background_object(create_thtorchtop_3122(4160, 1136), 1);
    add_background_object(create_thtorchmid_3123(4160, 1160), 1);
    add_background_object(create_thtorchmid_3123(4160, 1224), 1);
    add_background_object(create_thtorchmid_3123(4160, 1288), 1);
    add_background_object(create_thtorchmid_3123(4160, 1352), 1);
    add_background_object(create_thtorchmid_3123(4160, 1416), 1);
    add_background_object(create_thtorchtop_3122(4296, 1200), 1);
    add_background_object(create_thtorchmid_3123(4296, 1224), 1);
    add_background_object(create_thtorchmid_3123(4296, 1288), 1);
    add_background_object(create_thtorchmid_3123(4296, 1352), 1);
    add_background_object(create_thtorchmid_3123(4296, 1416), 1);
    add_background_object(create_thtorchtop_3122(4432, 1136), 1);
    add_background_object(create_thtorchmid_3123(4432, 1160), 1);
    add_background_object(create_thtorchmid_3123(4432, 1224), 1);
    add_background_object(create_thtorchmid_3123(4432, 1288), 1);
    add_background_object(create_thtorchmid_3123(4432, 1352), 1);
    add_background_object(create_thtorchmid_3123(4432, 1416), 1);
    add_background_object(create_thtorchtop_3122(4576, 1008), 1);
    add_background_object(create_thtorchmid_3123(4576, 1032), 1);
    add_background_object(create_thtorchmid_3123(4576, 1096), 1);
    add_background_object(create_thtorchmid_3123(4576, 1416), 1);
    add_background_object(create_thtorchtop_3122(4720, 1136), 1);
    add_background_object(create_thtorchmid_3123(4720, 1160), 1);
    add_background_object(create_thtorchmid_3123(4720, 1224), 1);
    add_background_object(create_thtorchmid_3123(4720, 1288), 1);
    add_background_object(create_thtorchmid_3123(4720, 1352), 1);
    add_background_object(create_thtorchmid_3123(4720, 1416), 1);
    add_background_object(create_thtorchtop_3122(4856, 1200), 1);
    add_background_object(create_thtorchmid_3123(4856, 1224), 1);
    add_background_object(create_thtorchmid_3123(4856, 1288), 1);
    add_background_object(create_thtorchmid_3123(4856, 1352), 1);
    add_background_object(create_thtorchmid_3123(4856, 1416), 1);
    add_background_object(create_thtorchtop_3122(4992, 1136), 1);
    add_background_object(create_thtorchmid_3123(4992, 1160), 1);
    add_background_object(create_thtorchmid_3123(4992, 1224), 1);
    add_background_object(create_thtorchmid_3123(4992, 1288), 1);
    add_background_object(create_thtorchmid_3123(4992, 1352), 1);
    add_background_object(create_thtorchmid_3123(4992, 1416), 1);
    add_background_object(create_thtorchmid_3123(4576, 1160), 1);
    add_background_object(create_thtorchmid_3123(4576, 1224), 1);
    add_background_object(create_thtorchmid_3123(4576, 1288), 1);
    add_background_object(create_thtorchmid_3123(4576, 1352), 1);
    add_background_object(create_thtorchtop_3122(5136, 1136), 1);
    add_background_object(create_thtorchmid_3123(5136, 1160), 1);
    add_background_object(create_thtorchmid_3123(5136, 1224), 1);
    add_background_object(create_thtorchmid_3123(5136, 1288), 1);
    add_background_object(create_thtorchmid_3123(5136, 1352), 1);
    add_background_object(create_thtorchmid_3123(5136, 1416), 1);
    add_background_object(create_thtorchtop_3122(5272, 1200), 1);
    add_background_object(create_thtorchmid_3123(5272, 1224), 1);
    add_background_object(create_thtorchmid_3123(5272, 1288), 1);
    add_background_object(create_thtorchmid_3123(5272, 1352), 1);
    add_background_object(create_thtorchmid_3123(5272, 1416), 1);
    add_background_object(create_thtorchtop_3122(5408, 1136), 1);
    add_background_object(create_thtorchmid_3123(5408, 1160), 1);
    add_background_object(create_thtorchmid_3123(5408, 1224), 1);
    add_background_object(create_thtorchmid_3123(5408, 1288), 1);
    add_background_object(create_thtorchmid_3123(5408, 1352), 1);
    add_background_object(create_thtorchmid_3123(5408, 1416), 1);
    add_background_object(create_thtorchtop_3122(5552, 752), 1);
    add_background_object(create_thtorchmid_3123(5552, 776), 1);
    add_background_object(create_thtorchmid_3123(5552, 904), 1);
    add_background_object(create_thtorchmid_3123(5552, 1096), 1);
    add_background_object(create_thtorchmid_3123(5552, 1160), 1);
    add_background_object(create_thtorchtop_3122(5688, 688), 1);
    add_background_object(create_thtorchmid_3123(5688, 712), 1);
    add_background_object(create_thtorchmid_3123(5688, 904), 1);
    add_background_object(create_thtorchmid_3123(5688, 1096), 1);
    add_background_object(create_thtorchmid_3123(5688, 1160), 1);
    add_background_object(create_thtorchmid_3123(5552, 1352), 1);
    add_background_object(create_thtorchmid_3123(5552, 1416), 1);
    add_background_object(create_thtorchmid_3123(5688, 1352), 1);
    add_background_object(create_thtorchmid_3123(5688, 1416), 1);
    add_background_object(create_thtorchmid_3123(5552, 1224), 1);
    add_background_object(create_thtorchmid_3123(5552, 1288), 1);
    add_background_object(create_thtorchmid_3123(5688, 1224), 1);
    add_background_object(create_thtorchmid_3123(5688, 1288), 1);
    add_background_object(create_thtorchmid_3123(5552, 968), 1);
    add_background_object(create_thtorchmid_3123(5688, 968), 1);
    add_background_object(create_thtorchmid_3123(5552, 1032), 1);
    add_background_object(create_thtorchmid_3123(5688, 1032), 1);
    add_background_object(create_thtorchmid_3123(5552, 840), 1);
    add_background_object(create_thtorchmid_3123(5688, 776), 1);
    add_background_object(create_thtorchmid_3123(5688, 840), 1);
    add_background_object(create_thtorchtop_3122(5832, 944), 1);
    add_background_object(create_thtorchmid_3123(5832, 968), 1);
    add_background_object(create_thtorchmid_3123(5832, 1096), 1);
    add_background_object(create_thtorchmid_3123(5832, 1288), 1);
    add_background_object(create_thtorchmid_3123(5832, 1352), 1);
    add_background_object(create_thtorchmid_3123(5832, 1416), 1);
    add_background_object(create_thtorchmid_3123(5832, 1160), 1);
    add_background_object(create_thtorchmid_3123(5832, 1224), 1);
    add_background_object(create_thtorchmid_3123(5832, 1032), 1);
    add_background_object(create_thtorchtop_3122(5984, 1072), 1);
    add_background_object(create_thtorchmid_3123(5984, 1096), 1);
    add_background_object(create_thtorchmid_3123(5984, 1224), 1);
    add_background_object(create_thtorchmid_3123(5984, 1416), 1);
    add_background_object(create_thtorchmid_3123(5984, 1288), 1);
    add_background_object(create_thtorchmid_3123(5984, 1352), 1);
    add_background_object(create_thtorchmid_3123(5984, 1160), 1);
    add_background_object(create_thtorchtop_3122(6136, 1136), 1);
    add_background_object(create_thtorchmid_3123(6136, 1160), 1);
    add_background_object(create_thtorchmid_3123(6136, 1288), 1);
    add_background_object(create_thtorchmid_3123(6136, 1352), 1);
    add_background_object(create_thtorchmid_3123(6136, 1416), 1);
    add_background_object(create_thtorchmid_3123(6136, 1224), 1);
    add_background_object(create_thtorchtop_3122(6320, 1008), 1);
    add_background_object(create_thtorchmid_3123(6320, 1032), 1);
    add_background_object(create_thtorchmid_3123(6320, 1096), 1);
    add_background_object(create_thtorchmid_3123(6320, 1160), 1);
    add_background_object(create_thtorchmid_3123(6320, 1224), 1);
    add_background_object(create_thtorchtop_3122(6448, 1072), 1);
    add_background_object(create_thtorchmid_3123(6448, 1096), 1);
    add_background_object(create_thtorchmid_3123(6448, 1160), 1);
    add_background_object(create_thtorchmid_3123(6448, 1224), 1);
    add_background_object(create_thtorchmid_3123(6320, 1288), 1);
    add_background_object(create_thtorchmid_3123(6448, 1288), 1);
    add_background_object(create_thtorchmid_3123(6320, 1352), 1);
    add_background_object(create_thtorchmid_3123(6448, 1352), 1);
    add_background_object(create_thtorchmid_3123(6320, 1416), 1);
    add_background_object(create_thtorchmid_3123(6448, 1416), 1);
    add_background_object(create_thtorchtop_3122(6576, 1136), 1);
    add_background_object(create_thtorchmid_3123(6576, 1160), 1);
    add_background_object(create_thtorchmid_3123(6576, 1224), 1);
    add_background_object(create_thtorchmid_3123(6576, 1288), 1);
    add_background_object(create_thtorchmid_3123(6576, 1352), 1);
    add_background_object(create_thtorchmid_3123(6576, 1416), 1);
    add_background_object(create_thtorchtop_3122(6712, 1200), 1);
    add_background_object(create_thtorchmid_3123(6712, 1224), 1);
    add_background_object(create_thtorchmid_3123(6712, 1288), 1);
    add_background_object(create_thtorchmid_3123(6712, 1352), 1);
    add_background_object(create_thtorchmid_3123(6712, 1416), 1);
    add_background_object(create_thtorchtop_3122(6848, 1136), 1);
    add_background_object(create_thtorchmid_3123(6848, 1160), 1);
    add_background_object(create_thtorchmid_3123(6848, 1224), 1);
    add_background_object(create_thtorchmid_3123(6848, 1288), 1);
    add_background_object(create_thtorchmid_3123(6848, 1352), 1);
    add_background_object(create_thtorchmid_3123(6848, 1416), 1);
    add_background_object(create_thtorchtop_3122(6992, 1008), 1);
    add_background_object(create_thtorchmid_3123(6992, 1032), 1);
    add_background_object(create_thtorchmid_3123(6992, 1096), 1);
    add_background_object(create_thtorchmid_3123(6992, 1416), 1);
    add_background_object(create_thtorchtop_3122(7136, 1136), 1);
    add_background_object(create_thtorchmid_3123(7136, 1160), 1);
    add_background_object(create_thtorchmid_3123(7136, 1224), 1);
    add_background_object(create_thtorchmid_3123(7136, 1288), 1);
    add_background_object(create_thtorchmid_3123(7136, 1352), 1);
    add_background_object(create_thtorchmid_3123(7136, 1416), 1);
    add_background_object(create_thtorchtop_3122(7272, 1200), 1);
    add_background_object(create_thtorchmid_3123(7272, 1224), 1);
    add_background_object(create_thtorchmid_3123(7272, 1288), 1);
    add_background_object(create_thtorchmid_3123(7272, 1352), 1);
    add_background_object(create_thtorchmid_3123(7272, 1416), 1);
    add_background_object(create_thtorchtop_3122(7408, 1136), 1);
    add_background_object(create_thtorchmid_3123(7408, 1160), 1);
    add_background_object(create_thtorchmid_3123(7408, 1224), 1);
    add_background_object(create_thtorchmid_3123(7408, 1288), 1);
    add_background_object(create_thtorchmid_3123(7408, 1352), 1);
    add_background_object(create_thtorchmid_3123(7408, 1416), 1);
    add_background_object(create_thtorchmid_3123(6992, 1160), 1);
    add_background_object(create_thtorchmid_3123(6992, 1224), 1);
    add_background_object(create_thtorchmid_3123(6992, 1288), 1);
    add_background_object(create_thtorchmid_3123(6992, 1352), 1);
    add_background_object(create_thtorchtop_3122(7552, 1136), 1);
    add_background_object(create_thtorchmid_3123(7552, 1160), 1);
    add_background_object(create_thtorchmid_3123(7552, 1224), 1);
    add_background_object(create_thtorchmid_3123(7552, 1288), 1);
    add_background_object(create_thtorchmid_3123(7552, 1352), 1);
    add_background_object(create_thtorchmid_3123(7552, 1416), 1);
    add_background_object(create_thtorchtop_3122(7688, 1200), 1);
    add_background_object(create_thtorchmid_3123(7688, 1224), 1);
    add_background_object(create_thtorchmid_3123(7688, 1288), 1);
    add_background_object(create_thtorchmid_3123(7688, 1352), 1);
    add_background_object(create_thtorchmid_3123(7688, 1416), 1);
    add_background_object(create_thtorchtop_3122(7824, 1136), 1);
    add_background_object(create_thtorchmid_3123(7824, 1160), 1);
    add_background_object(create_thtorchmid_3123(7824, 1224), 1);
    add_background_object(create_thtorchmid_3123(7824, 1288), 1);
    add_background_object(create_thtorchmid_3123(7824, 1352), 1);
    add_background_object(create_thtorchmid_3123(7824, 1416), 1);
    add_background_object(create_thtorchtop_3122(7968, 1008), 1);
    add_background_object(create_thtorchmid_3123(7968, 1032), 1);
    add_background_object(create_thtorchmid_3123(7968, 1096), 1);
    add_background_object(create_thtorchmid_3123(7968, 1160), 1);
    add_background_object(create_thtorchmid_3123(7968, 1224), 1);
    add_background_object(create_thtorchtop_3122(8096, 1072), 1);
    add_background_object(create_thtorchmid_3123(8096, 1096), 1);
    add_background_object(create_thtorchmid_3123(8096, 1160), 1);
    add_background_object(create_thtorchmid_3123(8096, 1224), 1);
    add_background_object(create_thtorchmid_3123(7968, 1288), 1);
    add_background_object(create_thtorchmid_3123(8096, 1288), 1);
    add_background_object(create_thtorchmid_3123(7968, 1352), 1);
    add_background_object(create_thtorchmid_3123(8096, 1352), 1);
    add_background_object(create_thtorchmid_3123(7968, 1416), 1);
    add_background_object(create_thtorchmid_3123(8096, 1416), 1);
    add_background_object(create_thtorchtop_3122(8224, 1136), 1);
    add_background_object(create_thtorchmid_3123(8224, 1160), 1);
    add_background_object(create_thtorchmid_3123(8224, 1224), 1);
    add_background_object(create_thtorchmid_3123(8224, 1288), 1);
    add_background_object(create_thtorchmid_3123(8224, 1352), 1);
    add_background_object(create_thtorchmid_3123(8224, 1416), 1);
    add_background_object(create_thtorchtop_3122(8360, 1200), 1);
    add_background_object(create_thtorchmid_3123(8360, 1224), 1);
    add_background_object(create_thtorchmid_3123(8360, 1288), 1);
    add_background_object(create_thtorchmid_3123(8360, 1352), 1);
    add_background_object(create_thtorchmid_3123(8360, 1416), 1);
    add_background_object(create_thtorchtop_3122(8496, 1136), 1);
    add_background_object(create_thtorchmid_3123(8496, 1160), 1);
    add_background_object(create_thtorchmid_3123(8496, 1224), 1);
    add_background_object(create_thtorchmid_3123(8496, 1288), 1);
    add_background_object(create_thtorchmid_3123(8496, 1352), 1);
    add_background_object(create_thtorchmid_3123(8496, 1416), 1);
    add_background_object(create_thtorchtop_3122(8640, 1008), 1);
    add_background_object(create_thtorchmid_3123(8640, 1032), 1);
    add_background_object(create_thtorchmid_3123(8640, 1096), 1);
    add_background_object(create_thtorchmid_3123(8640, 1416), 1);
    add_background_object(create_thtorchtop_3122(8784, 1136), 1);
    add_background_object(create_thtorchmid_3123(8784, 1160), 1);
    add_background_object(create_thtorchmid_3123(8784, 1224), 1);
    add_background_object(create_thtorchmid_3123(8784, 1288), 1);
    add_background_object(create_thtorchmid_3123(8784, 1352), 1);
    add_background_object(create_thtorchmid_3123(8784, 1416), 1);
    add_background_object(create_thtorchtop_3122(8920, 1200), 1);
    add_background_object(create_thtorchmid_3123(8920, 1224), 1);
    add_background_object(create_thtorchmid_3123(8920, 1288), 1);
    add_background_object(create_thtorchmid_3123(8920, 1352), 1);
    add_background_object(create_thtorchmid_3123(8920, 1416), 1);
    add_background_object(create_thtorchtop_3122(9056, 1136), 1);
    add_background_object(create_thtorchmid_3123(9056, 1160), 1);
    add_background_object(create_thtorchmid_3123(9056, 1224), 1);
    add_background_object(create_thtorchmid_3123(9056, 1288), 1);
    add_background_object(create_thtorchmid_3123(9056, 1352), 1);
    add_background_object(create_thtorchmid_3123(9056, 1416), 1);
    add_background_object(create_thtorchmid_3123(8640, 1160), 1);
    add_background_object(create_thtorchmid_3123(8640, 1224), 1);
    add_background_object(create_thtorchmid_3123(8640, 1288), 1);
    add_background_object(create_thtorchmid_3123(8640, 1352), 1);
    add_background_object(create_thtorchtop_3122(9200, 1136), 1);
    add_background_object(create_thtorchmid_3123(9200, 1160), 1);
    add_background_object(create_thtorchmid_3123(9200, 1224), 1);
    add_background_object(create_thtorchmid_3123(9200, 1288), 1);
    add_background_object(create_thtorchmid_3123(9200, 1352), 1);
    add_background_object(create_thtorchmid_3123(9200, 1416), 1);
    add_background_object(create_thtorchtop_3122(9336, 1200), 1);
    add_background_object(create_thtorchmid_3123(9336, 1224), 1);
    add_background_object(create_thtorchmid_3123(9336, 1288), 1);
    add_background_object(create_thtorchmid_3123(9336, 1352), 1);
    add_background_object(create_thtorchmid_3123(9336, 1416), 1);
    add_background_object(create_thtorchtop_3122(9472, 1136), 1);
    add_background_object(create_thtorchmid_3123(9472, 1160), 1);
    add_background_object(create_thtorchmid_3123(9472, 1224), 1);
    add_background_object(create_thtorchmid_3123(9472, 1288), 1);
    add_background_object(create_thtorchmid_3123(9472, 1352), 1);
    add_background_object(create_thtorchmid_3123(9472, 1416), 1);
    add_object(create_thflame_3124(784, 944), 1);
    add_object(create_thflame_3124(912, 1008), 1);
    add_object(create_thflame_3124(1040, 1072), 1);
    add_object(create_thflame_3124(1176, 1136), 1);
    add_object(create_thflame_3124(1312, 1072), 1);
    add_object(create_thflame_3124(1456, 944), 1);
    add_object(create_thflame_3124(1600, 1072), 1);
    add_object(create_thflame_3124(1736, 1136), 1);
    add_object(create_thflame_3124(1872, 1072), 1);
    add_object(create_thflame_3124(2072, 432), 1);
    add_object(create_thflame_3124(2208, 368), 1);
    add_object(create_thflame_3124(2344, 432), 1);
    add_object(create_thflame_3124(3152, 688), 1);
    add_object(create_thflame_3124(3288, 624), 1);
    add_object(create_thflame_3124(3432, 880), 1);
    add_object(create_thflame_3124(3584, 1008), 1);
    add_object(create_thflame_3124(3736, 1072), 1);
    add_object(create_thflame_3124(3920, 944), 1);
    add_object(create_thflame_3124(4048, 1008), 1);
    add_object(create_thflame_3124(4176, 1072), 1);
    add_object(create_thflame_3124(4312, 1136), 1);
    add_object(create_thflame_3124(4448, 1072), 1);
    add_object(create_thflame_3124(4592, 944), 1);
    add_object(create_thflame_3124(4736, 1072), 1);
    add_object(create_thflame_3124(4872, 1136), 1);
    add_object(create_thflame_3124(5008, 1072), 1);
    add_object(create_thflame_3124(5152, 1072), 1);
    add_object(create_thflame_3124(5288, 1136), 1);
    add_object(create_thflame_3124(5424, 1072), 1);
    add_object(create_thflame_3124(5568, 688), 1);
    add_object(create_thflame_3124(5704, 624), 1);
    add_object(create_thflame_3124(5848, 880), 1);
    add_object(create_thflame_3124(6000, 1008), 1);
    add_object(create_thflame_3124(6152, 1072), 1);
    add_object(create_thflame_3124(6336, 944), 1);
    add_object(create_thflame_3124(6464, 1008), 1);
    add_object(create_thflame_3124(6592, 1072), 1);
    add_object(create_thflame_3124(6728, 1136), 1);
    add_object(create_thflame_3124(6864, 1072), 1);
    add_object(create_thflame_3124(7008, 944), 1);
    add_object(create_thflame_3124(7152, 1072), 1);
    add_object(create_thflame_3124(7288, 1136), 1);
    add_object(create_thflame_3124(7424, 1072), 1);
    add_object(create_thflame_3124(7568, 1072), 1);
    add_object(create_thflame_3124(7704, 1136), 1);
    add_object(create_thflame_3124(7840, 1072), 1);
    add_object(create_thflame_3124(7984, 944), 1);
    add_object(create_thflame_3124(8112, 1008), 1);
    add_object(create_thflame_3124(8240, 1072), 1);
    add_object(create_thflame_3124(8376, 1136), 1);
    add_object(create_thflame_3124(8512, 1072), 1);
    add_object(create_thflame_3124(8656, 944), 1);
    add_object(create_thflame_3124(8800, 1072), 1);
    add_object(create_thflame_3124(8936, 1136), 1);
    add_object(create_thflame_3124(9072, 1072), 1);
    add_object(create_thflame_3124(9216, 1072), 1);
    add_object(create_thflame_3124(9352, 1136), 1);
    add_object(create_thflame_3124(9488, 1072), 1);
    add_background_object(create_thback2_3125(9856, 416), 2);
    add_background_object(create_thback2_3125(9856, 544), 2);
    add_background_object(create_thback2_3125(9920, 544), 2);
    add_background_object(create_thback2_3125(6176, 1168), 2);
    add_background_object(create_thback5_3081(3136, 920), 2);
    add_background_object(create_thback5_3081(3136, 1048), 2);
    add_background_object(create_thback5_3081(3104, 888), 2);
    add_background_object(create_thback5_3081(3104, 1016), 2);
    add_background_object(create_thback5_3081(768, 1464), 2);
    add_background_object(create_thback5_3081(768, 1592), 2);
    add_background_object(create_thback5_3081(0, 1528), 2);
    add_background_object(create_thback5_3081(128, 1528), 2);
    add_background_object(create_thback5_3081(256, 1528), 2);
    add_background_object(create_thback5_3081(384, 1528), 2);
    add_background_object(create_thback1_3126(512, 1528), 2);
    add_background_object(create_thback1_3126(640, 1528), 2);
    add_background_object(create_thback2_3125(768, 1528), 2);
    add_background_object(create_thback1_3126(896, 1464), 2);
    add_background_object(create_thback3_3127(1192, 1240), 2);
    add_background_object(create_thback4_3128(1192, 1368), 2);
    add_background_object(create_thback2_3125(1664, 1168), 2);
    add_background_object(create_thback2_3125(1792, 1168), 2);
    add_background_object(create_thback2_3125(1728, 1168), 2);
    add_background_object(create_thback3_3127(1384, 1176), 2);
    add_background_object(create_thback4_3128(1384, 1304), 2);
    add_background_object(create_thback3_3127(896, 1016), 2);
    add_background_object(create_thback4_3128(896, 1272), 2);
    add_background_object(create_thback3_3127(896, 1144), 2);
    add_background_object(create_thback3_3127(1664, 1328), 2);
    add_background_object(create_thback4_3128(1664, 1456), 2);
    add_background_object(create_thback3_3127(1888, 1328), 2);
    add_background_object(create_thback4_3128(1888, 1456), 2);
    add_background_object(create_thback3_3127(2072, 504), 2);
    add_background_object(create_thback4_3128(2072, 760), 2);
    add_background_object(create_thback3_3127(2072, 632), 2);
    add_background_object(create_thback3_3127(2192, 376), 2);
    add_background_object(create_thback4_3128(2192, 632), 2);
    add_background_object(create_thback3_3127(2192, 504), 2);
    add_background_object(create_thback4_3128(2312, 760), 2);
    add_background_object(create_thback2_3125(2592, 984), 2);
    add_background_object(create_thback2_3125(2656, 984), 2);
    add_background_object(create_thback1_3126(2464, 936), 2);
    add_background_object(create_thback2_3125(2720, 984), 2);
    add_background_object(create_thback2_3125(2784, 984), 2);
    add_background_object(create_thback2_3125(2848, 984), 2);
    add_background_object(create_thback2_3125(2912, 984), 2);
    add_background_object(create_thback2_3125(2592, 856), 2);
    add_background_object(create_thback2_3125(2656, 856), 2);
    add_background_object(create_thback2_3125(2720, 856), 2);
    add_background_object(create_thback2_3125(2784, 856), 2);
    add_background_object(create_thback2_3125(2848, 856), 2);
    add_background_object(create_thback2_3125(2912, 856), 2);
    add_background_object(create_thback3_3127(4256, 952), 2);
    add_background_object(create_thback4_3128(4256, 1080), 2);
    add_background_object(create_thback3_3127(4056, 1400), 2);
    add_background_object(create_thback4_3128(4056, 1528), 2);
    add_background_object(create_thback3_3127(3520, 872), 2);
    add_background_object(create_thback4_3128(3520, 1000), 2);
    add_background_object(create_thback2_3125(2976, 984), 2);
    add_background_object(create_thback2_3125(3040, 984), 2);
    add_background_object(create_thback2_3125(2976, 856), 2);
    add_background_object(create_thback2_3125(3040, 856), 2);
    add_background_object(create_thback5_3081(3488, 1192), 2);
    add_background_object(create_thback5_3081(3488, 1320), 2);
    add_background_object(create_thback5_3081(3616, 1192), 2);
    add_background_object(create_thback5_3081(3616, 1320), 2);
    add_background_object(create_thback5_3081(3744, 1192), 2);
    add_background_object(create_thback5_3081(3744, 1320), 2);
    add_background_object(create_thback5_3081(3872, 1192), 2);
    add_background_object(create_thback5_3081(3872, 1320), 2);
    add_background_object(create_thback5_3081(3488, 1448), 2);
    add_background_object(create_thback5_3081(3616, 1448), 2);
    add_background_object(create_thback5_3081(3744, 1448), 2);
    add_background_object(create_thback5_3081(3872, 1448), 2);
    add_background_object(create_thback5_3081(3360, 1192), 2);
    add_background_object(create_thback5_3081(3232, 1192), 2);
    add_background_object(create_thback2_3125(5120, 224), 2);
    add_background_object(create_thback2_3125(5120, 96), 2);
    add_background_object(create_thback2_3125(5056, 96), 2);
    add_background_object(create_thback2_3125(5056, 224), 2);
    add_background_object(create_thback3_3127(5312, 1408), 2);
    add_background_object(create_thback4_3128(5312, 1536), 2);
    add_background_object(create_thback5_3081(4640, 1512), 2);
    add_background_object(create_thback5_3081(4640, 1384), 2);
    add_background_object(create_thback5_3081(4768, 1512), 2);
    add_background_object(create_thback5_3081(4768, 1384), 2);
    add_background_object(create_thback5_3081(4896, 1544), 2);
    add_background_object(create_thback5_3081(4896, 1416), 2);
    add_background_object(create_thback2_3125(5344, 768), 2);
    add_background_object(create_thback2_3125(5344, 896), 2);
    add_background_object(create_thback2_3125(5344, 1024), 2);
    add_background_object(create_thback2_3125(5280, 768), 2);
    add_background_object(create_thback2_3125(5280, 896), 2);
    add_background_object(create_thback2_3125(5280, 1024), 2);
    add_background_object(create_thback2_3125(5216, 768), 2);
    add_background_object(create_thback2_3125(5216, 896), 2);
    add_background_object(create_thback2_3125(5216, 1024), 2);
    add_background_object(create_thback2_3125(5152, 768), 2);
    add_background_object(create_thback2_3125(5152, 896), 2);
    add_background_object(create_thback2_3125(5152, 1024), 2);
    add_background_object(create_thback3_3127(5472, 1216), 2);
    add_background_object(create_thback4_3128(5472, 1472), 2);
    add_background_object(create_thback3_3127(5472, 1344), 2);
    add_background_object(create_thback5_3081(5024, 960), 2);
    add_background_object(create_thback5_3081(5024, 1088), 2);
    add_background_object(create_thback5_3081(5408, 1024), 2);
    add_background_object(create_thback5_3081(5408, 896), 2);
    add_background_object(create_thback5_3081(5408, 768), 2);
    add_background_object(create_thback1_3126(4896, 1320), 2);
    add_background_object(create_thback1_3126(6048, 1168), 2);
    add_background_object(create_thback1_3126(6240, 1168), 2);
    add_background_object(create_thback1_3126(6200, 1464), 2);
    add_background_object(create_thbackbarrel_3129(2872, 616), 2);
    add_background_object(create_thbackbarrel_3129(2768, 568), 2);
    add_background_object(create_thbackbarrel_3129(2712, 1032), 2);
    add_background_object(create_thbackbarrel_3129(2904, 1032), 2);
    add_background_object(create_thbackbarrel_3129(3000, 1032), 2);
    add_background_object(create_thbackbarrel_3129(2952, 1032), 2);
    add_background_object(create_thback2_3125(5184, 224), 2);
    add_background_object(create_thback5_3081(5248, 224), 2);
    add_background_object(create_thback5_3081(5376, 224), 2);
    add_background_object(create_thback5_3081(5408, 352), 2);
    add_background_object(create_thback5_3081(5536, 320), 2);
    add_background_object(create_thback5_3081(5280, 352), 2);
    add_background_object(create_thback5_3081(5408, 480), 2);
    add_background_object(create_thback5_3081(5536, 448), 2);
    add_background_object(create_thback5_3081(5536, 576), 2);
    add_background_object(create_thback5_3081(5536, 704), 2);
    add_background_object(create_thback5_3081(5664, 640), 2);
    add_background_object(create_thback5_3081(5664, 768), 2);
    add_background_object(create_thback5_3081(5792, 640), 2);
    add_background_object(create_thback5_3081(5792, 768), 2);
    add_background_object(create_thback5_3081(5920, 640), 2);
    add_background_object(create_thback5_3081(5920, 768), 2);
    add_background_object(create_thbackbarrel_3129(9792, 592), 2);
    add_background_object(create_thbackbarrel_3129(9792, 512), 2);
    add_background_object(create_thbackbarrel_3129(9888, 592), 2);
    add_background_object(create_thbackbarrel_3129(9840, 592), 2);
    add_background_object(create_thback2_3125(10048, 544), 2);
    add_background_object(create_thback2_3125(9984, 544), 2);
    add_background_object(create_thback2_3125(9920, 416), 2);
    add_background_object(create_thback2_3125(9984, 416), 2);
    add_background_object(create_thback2_3125(10048, 416), 2);
    add_background_object(create_thback1_3126(8080, 1000), 2);
    add_background_object(create_thback1_3126(11360, 1048), 2);
    add_background_object(create_thback1_3126(11552, 1048), 2);
    add_background_object(create_thback1_3126(11744, 1016), 2);
    add_background_object(create_thback2_3125(11488, 1048), 2);
    add_background_object(create_thback2_3125(11680, 1048), 2);
    add_background_object(create_thback2_3125(11680, 920), 2);
    add_background_object(create_thback2_3125(11872, 1016), 2);
    add_background_object(create_thback1_3126(11936, 1016), 2);
    add_background_object(create_thback2_3125(11616, 920), 2);
    add_background_object(create_thback2_3125(11552, 920), 2);
    add_background_object(create_thback2_3125(11488, 920), 2);
    add_background_object(create_thback2_3125(11424, 920), 2);
    add_background_object(create_thback2_3125(11360, 920), 2);
    add_background_object(create_thback3_3127(12464, 504), 2);
    add_background_object(create_thback4_3128(12464, 760), 2);
    add_background_object(create_thback3_3127(12336, 504), 2);
    add_background_object(create_thback3_3127(12208, 504), 2);
    add_background_object(create_thback3_3127(12336, 760), 2);
    add_background_object(create_thback3_3127(12208, 760), 2);
    add_background_object(create_thback3_3127(12208, 888), 2);
    add_background_object(create_thback4_3128(12336, 888), 2);
    add_background_object(create_thback4_3128(12208, 1016), 2);
    add_background_object(create_thback3_3127(7608, 512), 2);
    add_background_object(create_thback4_3128(7608, 640), 2);
    add_background_object(create_thback3_3127(7760, 632), 2);
    add_background_object(create_thback4_3128(7760, 760), 2);
    add_background_object(create_thback3_3127(7760, 504), 2);
    add_background_object(create_thback3_3127(7952, 768), 2);
    add_background_object(create_thback4_3128(7952, 896), 2);
    add_background_object(create_thback3_3127(7952, 640), 2);
    add_background_object(create_thback3_3127(7952, 512), 2);
    add_background_object(create_thback3_3127(8480, 768), 2);
    add_background_object(create_thback4_3128(8480, 896), 2);
    add_background_object(create_thback3_3127(8480, 640), 2);
    add_background_object(create_thback3_3127(8480, 512), 2);
    add_background_object(create_thback3_3127(8944, 712), 2);
    add_background_object(create_thback4_3128(8944, 840), 2);
    add_background_object(create_thback3_3127(9328, 416), 2);
    add_background_object(create_thback3_3127(9328, 288), 2);
    add_background_object(create_thback4_3128(9328, 544), 2);
    add_background_object(create_thback3_3127(9680, 264), 2);
    add_background_object(create_thback4_3128(9680, 392), 2);
    add_background_object(create_thback3_3127(10928, 952), 2);
    add_background_object(create_thback3_3127(11056, 952), 2);
    add_background_object(create_thback4_3128(10928, 1080), 2);
    add_background_object(create_thback4_3128(11056, 1080), 2);
    add_background_object(create_thback3_3127(12464, 632), 2);
    add_background_object(create_thback3_3127(12336, 632), 2);
    add_background_object(create_thback3_3127(12208, 632), 2);
    add_background_object(create_thback5_3081(12640, 568), 2);
    add_background_object(create_thback5_3081(12640, 440), 2);
    add_background_object(create_thback5_3081(12768, 568), 2);
    add_background_object(create_thback5_3081(12768, 440), 2);
    add_background_object(create_ryblossomtreehuge1_3130(4264, 1400), 2);
    add_background_object(create_ryblossomtreehuge2_3131(5584, 1304), 2);
    add_background_object(create_ryblossomtree3_3132(4352, 1456), 2);
    add_background_object(create_ryblossomtree3_3132(4288, 1368), 2);
    add_background_object(create_ryblossomtree3_3132(4184, 1512), 2);
    add_background_object(create_ryblossomtree3_3132(5584, 1312), 2);
    add_background_object(create_ryblossomtree3_3132(5504, 1432), 2);
    add_background_object(create_ryblossomtree3_3132(5664, 1448), 2);
    add_background_object(create_ryblossomtree3_3132(5696, 1352), 2);
    add_background_object(create_ryblossomtree4_3133(4272, 1536), 2);
    add_background_object(create_ryblossomtree4_3133(4224, 1432), 2);
    add_background_object(create_ryblossomtree4_3133(4432, 1528), 2);
    add_background_object(create_ryblossomtree4_3133(5760, 1408), 2);
    add_background_object(create_ryblossomtree4_3133(5552, 1368), 2);
    add_background_object(create_ryblossomtree4_3133(5680, 1280), 2);
    add_background_object(create_ryblossomtreehuge2_3131(2064, 1512), 2);
    add_background_object(create_ryblossomtree3_3132(2064, 1520), 2);
    add_background_object(create_ryblossomtree3_3132(1984, 1640), 2);
    add_background_object(create_ryblossomtree3_3132(2144, 1656), 2);
    add_background_object(create_ryblossomtree3_3132(2176, 1560), 2);
    add_background_object(create_ryblossomtree4_3133(2240, 1616), 2);
    add_background_object(create_ryblossomtree4_3133(2032, 1576), 2);
    add_background_object(create_ryblossomtree4_3133(2160, 1488), 2);
    add_background_object(create_ryblossomtreehuge1_3130(2408, 456), 2);
    add_background_object(create_ryblossomtree3_3132(2496, 512), 2);
    add_background_object(create_ryblossomtree3_3132(2432, 424), 2);
    add_background_object(create_ryblossomtree3_3132(2328, 568), 2);
    add_background_object(create_ryblossomtree4_3133(2416, 592), 2);
    add_background_object(create_ryblossomtree4_3133(2368, 488), 2);
    add_background_object(create_ryblossomtree4_3133(2576, 584), 2);
    add_background_object(create_thbackbarrel_3129(2600, 616), 2);
    add_background_object(create_thbackbarrel_3129(2704, 552), 2);
    add_background_object(create_thback3_3127(2312, 632), 2);
    add_background_object(create_thback3_3127(2312, 504), 2);
    add_background_object(create_thback3_3127(2312, 376), 2);
    add_background_object(create_ryblossomtreehuge2_3131(4824, 696), 2);
    add_background_object(create_ryblossomtree3_3132(4824, 704), 2);
    add_background_object(create_ryblossomtree3_3132(4744, 824), 2);
    add_background_object(create_ryblossomtree3_3132(4904, 840), 2);
    add_background_object(create_ryblossomtree3_3132(4936, 744), 2);
    add_background_object(create_ryblossomtree4_3133(5000, 800), 2);
    add_background_object(create_ryblossomtree4_3133(4792, 760), 2);
    add_background_object(create_ryblossomtree4_3133(4920, 672), 2);
    add_background_object(create_thback1_3126(5024, 832), 2);
    add_background_object(create_ryblossomtreehuge1_3130(9352, 888), 2);
    add_background_object(create_ryblossomtree3_3132(9440, 944), 2);
    add_background_object(create_ryblossomtree3_3132(9376, 856), 2);
    add_background_object(create_ryblossomtree3_3132(9272, 1000), 2);
    add_background_object(create_ryblossomtree4_3133(9360, 1024), 2);
    add_background_object(create_ryblossomtree4_3133(9312, 920), 2);
    add_background_object(create_ryblossomtree4_3133(9520, 1016), 2);
    add_background_object(create_ryblossomtreehuge2_3131(10592, 984), 2);
    add_background_object(create_ryblossomtree3_3132(10592, 992), 2);
    add_background_object(create_ryblossomtree3_3132(10512, 1112), 2);
    add_background_object(create_ryblossomtree3_3132(10672, 1128), 2);
    add_background_object(create_ryblossomtree3_3132(10704, 1032), 2);
    add_background_object(create_ryblossomtree4_3133(10768, 1088), 2);
    add_background_object(create_ryblossomtree4_3133(10560, 1048), 2);
    add_background_object(create_ryblossomtree4_3133(10688, 960), 2);
    add_background_object(create_ryblossomtreehuge1_3130(9888, 792), 2);
    add_background_object(create_ryblossomtree3_3132(9976, 848), 2);
    add_background_object(create_ryblossomtree3_3132(9912, 760), 2);
    add_background_object(create_ryblossomtree3_3132(9808, 904), 2);
    add_background_object(create_ryblossomtree4_3133(9896, 928), 2);
    add_background_object(create_ryblossomtree4_3133(9848, 824), 2);
    add_background_object(create_ryblossomtree4_3133(10056, 920), 2);
    add_background_object(create_thback4_3128(10040, 864), 2);
    add_background_object(create_thback3_3127(10040, 736), 2);
    add_background_object(create_thback4_3128(9840, 864), 2);
    add_background_object(create_thback3_3127(9840, 736), 2);
    add_background_object(create_ryblossomtreehuge2_3131(8856, 448), 2);
    add_background_object(create_ryblossomtree3_3132(8856, 456), 2);
    add_background_object(create_ryblossomtree3_3132(8776, 576), 2);
    add_background_object(create_ryblossomtree3_3132(8936, 592), 2);
    add_background_object(create_ryblossomtree3_3132(8968, 496), 2);
    add_background_object(create_ryblossomtree4_3133(9032, 552), 2);
    add_background_object(create_ryblossomtree4_3133(8824, 512), 2);
    add_background_object(create_ryblossomtree4_3133(8952, 424), 2);
    add_background_object(create_ryblossomtreehuge1_3130(12288, 936), 2);
    add_background_object(create_ryblossomtree3_3132(12376, 992), 2);
    add_background_object(create_ryblossomtree3_3132(12312, 904), 2);
    add_background_object(create_ryblossomtree3_3132(12208, 1048), 2);
    add_background_object(create_ryblossomtree4_3133(12296, 1072), 2);
    add_background_object(create_ryblossomtree4_3133(12248, 968), 2);
    add_background_object(create_ryblossomtree4_3133(12456, 1064), 2);
    add_background_object(create_thback1_3126(10864, 504), 2);
    add_background_object(create_thback1_3126(11056, 504), 2);
    add_background_object(create_thback2_3125(10992, 504), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
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
    add_object(create_objectjumppad_530(-104, 576), 2);
    add_object(create_objectfuel_528(-148, 524), 2);
    add_object(create_thbacklight1_3083(0, 1528), 2);
    add_object(create_thbacklight1_3083(96, 1528), 2);
    add_object(create_thbacklight1_3083(192, 1528), 2);
    add_object(create_thbacklight1_3083(288, 1528), 2);
    add_object(create_thbacklight1_3083(384, 1528), 2);
    add_object(create_thbacklight1_3083(3136, 984), 2);
    add_object(create_thbacklight1_3083(3200, 984), 2);
    add_object(create_thbacklight1_3083(3936, 1352), 2);
    add_object(create_thbacklight1_3083(3552, 1352), 2);
    add_object(create_thbacklight1_3083(3808, 1352), 2);
    add_object(create_thbacklight1_3083(3680, 1352), 2);
    add_object(create_thbacklight1_3083(4672, 1480), 2);
    add_object(create_thbacklight1_3083(4960, 1480), 2);
    add_object(create_thbacklight1_3083(4864, 1480), 2);
    add_object(create_thbacklight1_3083(4768, 1480), 2);
    add_object(create_thbacklight1_3083(5248, 224), 2);
    add_object(create_thbacklight1_3083(5312, 224), 2);
    add_object(create_thbacklight1_3083(5504, 416), 2);
    add_object(create_thbacklight1_3083(5600, 416), 2);
    add_object(create_thbacklight1_3083(5600, 608), 2);
    add_object(create_thbacklight1_3083(5728, 704), 2);
    add_object(create_thbacklight1_3083(5920, 704), 2);
    add_object(create_thbacklight1_3083(5824, 704), 2);
    add_object(create_thbacklight1_3083(12672, 536), 2);
    add_object(create_thbacklight1_3083(12768, 536), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_object(create_mapdata2_32(-432, 240), 2);
    add_background_object(create_thwood2_3134(11744, 1144), 3);
    add_background_object(create_thwood2_3134(11872, 1144), 3);
    add_background_object(create_thwood2_3134(12000, 1144), 3);
    add_background_object(create_thwood2_3134(12128, 1144), 3);
    add_background_object(create_rydiagonalpipe1_3088(12576, 984), 3);
    add_background_object(create_rydiagonalpipe1_3088(12512, 1048), 3);
    add_background_object(create_rydiagonalpipe1_3088(12448, 1112), 3);
    add_background_object(create_thstone11_3085(9792, 0), 3);
    add_background_object(create_thstone11_3085(9792, 128), 3);
    add_background_object(create_thtire2_3135(10256, 1080), 3);
    add_background_object(create_thtire1_3136(10288, 1112), 3);
    add_background_object(create_thtire2_3135(10328, 1192), 3);
    add_background_object(create_thwood3_3137(8848, 720), 3);
    add_background_object(create_thwood3_3137(8976, 720), 3);
    add_background_object(create_thtire4_3138(8704, 904), 3);
    add_background_object(create_thtire5_3139(8576, 1096), 3);
    add_background_object(create_thtire4_3138(8384, 1096), 3);
    add_background_object(create_thtire3_3140(8288, 744), 3);
    add_background_object(create_thstone11_3085(8288, 968), 3);
    add_background_object(create_thstone11_3085(8288, 840), 3);
    add_background_object(create_thtire4_3138(7984, 1096), 3);
    add_background_object(create_thtire5_3139(8256, 1096), 3);
    add_background_object(create_thtire4_3138(7888, 1000), 3);
    add_background_object(create_thtire4_3138(7696, 808), 3);
    add_background_object(create_thtire3_3140(7600, 744), 3);
    add_background_object(create_thtire4_3138(5440, 512), 3);
    add_background_object(create_thtire4_3138(5312, 416), 3);
    add_background_object(create_thtire3_3140(5440, 544), 3);
    add_background_object(create_thtire3_3140(5344, 448), 3);
    add_background_object(create_thtire3_3140(5216, 352), 3);
    add_background_object(create_thrope2_3141(5136, 960), 3);
    add_background_object(create_thstone1_3091(4896, 1288), 3);
    add_background_object(create_thstone11_3085(3104, 1288), 3);
    add_background_object(create_thstone11_3085(3360, 1288), 3);
    add_background_object(create_thstone11_3085(3232, 1288), 3);
    add_background_object(create_thwood3_3137(3360, 1320), 3);
    add_background_object(create_thwood3_3137(3232, 1320), 3);
    add_background_object(create_thwood3_3137(4000, 1768), 3);
    add_background_object(create_thstone11_3085(3872, 1544), 3);
    add_background_object(create_thstone11_3085(3744, 1544), 3);
    add_background_object(create_thstone11_3085(3616, 1544), 3);
    add_background_object(create_thstone11_3085(3488, 1544), 3);
    add_background_object(create_thwood3_3137(3488, 1544), 3);
    add_background_object(create_thwood2_3134(3488, 1512), 3);
    add_background_object(create_thwood3_3137(4896, 1432), 3);
    add_background_object(create_thwood3_3137(4640, 1432), 3);
    add_background_object(create_thwood3_3137(3872, 1192), 3);
    add_background_object(create_thwood3_3137(4000, 1144), 3);
    add_background_object(create_thrope3_3142(4504, 1112), 3);
    add_background_object(create_thrope3_3142(3680, 1048), 3);
    add_background_object(create_thstone3_3090(4096, 952), 3);
    add_background_object(create_thstone4_3086(4064, 952), 3);
    add_background_object(create_thtire2_3135(2496, 1608), 3);
    add_background_object(create_thtire2_3135(2336, 1712), 3);
    add_background_object(create_thwood2_3134(2432, 696), 3);
    add_background_object(create_thwood2_3134(2560, 696), 3);
    add_background_object(create_thstone3_3090(1032, 1192), 3);
    add_background_object(create_thstone4_3086(1000, 1192), 3);
    add_background_object(create_thtire2_3135(1416, 1488), 3);
    add_background_object(create_thrope2_3141(1152, 1704), 3);
    add_background_object(create_thrope2_3141(1024, 1640), 3);
    add_background_object(create_rydiagonalpipe2_3089(-376, 936), 3);
    add_background_object(create_rydiagonalpipe1_3088(-200, 896), 3);
    add_background_object(create_thtotemback_3087(5008, 1576), 3);
    add_background_object(create_thtotemback_3087(5008, 1608), 3);
    add_background_object(create_thstone1_3091(0, 1496), 3);
    add_background_object(create_thstone2_3092(-224, 1072), 3);
    add_background_object(create_thstone9_3093(-224, 1104), 3);
    add_background_object(create_thwood1_3094(-144, 848), 3);
    add_background_object(create_thstone1_3091(64, 1496), 3);
    add_background_object(create_thstone1_3091(128, 1496), 3);
    add_background_object(create_thstone1_3091(192, 1496), 3);
    add_background_object(create_thstone1_3091(256, 1496), 3);
    add_background_object(create_thstone1_3091(320, 1496), 3);
    add_background_object(create_thstone1_3091(384, 1496), 3);
    add_background_object(create_thstone1_3091(448, 1496), 3);
    add_background_object(create_thstone1_3091(512, 1496), 3);
    add_background_object(create_thstone1_3091(576, 1496), 3);
    add_background_object(create_thstone1_3091(640, 1496), 3);
    add_background_object(create_thstone1_3091(704, 1496), 3);
    add_background_object(create_thstone1_3091(768, 1496), 3);
    add_background_object(create_thstone3_3090(832, 1432), 3);
    add_background_object(create_thstone5_3096(832, 1496), 3);
    add_background_object(create_thstone6_3095(-256, 1168), 3);
    add_background_object(create_thstone4_3086(-256, 1104), 3);
    add_background_object(create_thwood2_3134(0, 1656), 3);
    add_background_object(create_thwood2_3134(128, 1656), 3);
    add_background_object(create_thwood2_3134(384, 1656), 3);
    add_background_object(create_thwood2_3134(256, 1656), 3);
    add_background_object(create_thwood2_3134(512, 1656), 3);
    add_background_object(create_thwood2_3134(640, 1656), 3);
    add_background_object(create_thwood2_3134(768, 1656), 3);
    add_background_object(create_thwood2_3134(896, 1656), 3);
    add_background_object(create_thwood6_3143(832, 1624), 3);
    add_background_object(create_thwood5_3144(1024, 1592), 3);
    add_background_object(create_thwood4_3145(880, 1592), 3);
    add_background_object(create_thwood5_3144(1024, 1656), 3);
    add_background_object(create_thwood5_3144(1024, 1688), 3);
    add_background_object(create_thwood2_3134(896, 1704), 3);
    add_background_object(create_thwood2_3134(768, 1704), 3);
    add_background_object(create_thwood5_3144(1024, 1720), 3);
    add_background_object(create_thwood2_3134(0, 1704), 3);
    add_background_object(create_thwood2_3134(128, 1704), 3);
    add_background_object(create_thwood2_3134(384, 1704), 3);
    add_background_object(create_thwood2_3134(256, 1704), 3);
    add_background_object(create_thwood2_3134(512, 1704), 3);
    add_background_object(create_thwood2_3134(640, 1704), 3);
    add_background_object(create_thwood3_3137(896, 1592), 3);
    add_background_object(create_thwood2_3134(896, 1752), 3);
    add_background_object(create_thwood2_3134(1024, 1752), 3);
    add_background_object(create_thwood2_3134(768, 1752), 3);
    add_background_object(create_thwood2_3134(1152, 1752), 3);
    add_background_object(create_ladder_494(1208, 1528), 3);
    add_background_object(create_thwood5_3144(1024, 1624), 3);
    add_background_object(create_thwood4_3145(816, 1624), 3);
    add_background_object(create_thwood3_3137(896, 1624), 3);
    add_background_object(create_thstone3_3090(-160, 1104), 3);
    add_background_object(create_thstone5_3096(-160, 1168), 3);
    add_background_object(create_thstone7_3097(-160, 1072), 3);
    add_background_object(create_thstone8_3098(-256, 1072), 3);
    add_background_object(create_thwood2_3134(384, 1752), 3);
    add_background_object(create_thwood2_3134(512, 1752), 3);
    add_background_object(create_thwood2_3134(256, 1752), 3);
    add_background_object(create_thwood2_3134(640, 1752), 3);
    add_background_object(create_thwood2_3134(128, 1752), 3);
    add_background_object(create_thwood2_3134(0, 1752), 3);
    add_background_object(create_thstone1_3091(-224, 1168), 3);
    add_background_object(create_thstone9_3093(768, 1432), 3);
    add_background_object(create_thwood5_3144(1520, 1528), 3);
    add_background_object(create_thwood4_3145(1248, 1528), 3);
    add_background_object(create_thwood3_3137(1264, 1528), 3);
    add_background_object(create_ladder_494(1208, 1560), 3);
    add_background_object(create_ladder_494(1208, 1592), 3);
    add_background_object(create_thwood2_3134(1280, 1752), 3);
    add_background_object(create_thwood2_3134(1408, 1752), 3);
    add_background_object(create_thstone3_3090(1392, 1656), 3);
    add_background_object(create_thstone4_3086(1360, 1656), 3);
    add_background_object(create_thstone10_3146(1360, 1560), 3);
    add_background_object(create_thstone3_3090(1392, 1592), 3);
    add_background_object(create_thstone4_3086(1360, 1592), 3);
    add_background_object(create_thstone10_3146(1360, 1720), 3);
    add_background_object(create_ladder_494(1208, 1624), 3);
    add_background_object(create_thwood3_3137(1392, 1528), 3);
    add_background_object(create_ladder_494(1536, 1528), 3);
    add_background_object(create_ladder_494(1536, 1560), 3);
    add_background_object(create_ladder_494(1536, 1592), 3);
    add_background_object(create_ladder_494(1536, 1624), 3);
    add_background_object(create_thrope1_3147(1064, 1208), 3);
    add_background_object(create_thrope3_3142(1256, 1144), 3);
    add_background_object(create_thwood2_3134(1536, 1752), 3);
    add_background_object(create_thtire1_3136(1304, 1496), 3);
    add_background_object(create_thtire1_3136(1368, 1496), 3);
    add_background_object(create_thtire1_3136(1368, 1464), 3);
    add_background_object(create_thwood3_3137(864, 1432), 3);
    add_background_object(create_thwood5_3144(1024, 1432), 3);
    add_background_object(create_thwood6_3143(960, 1432), 3);
    add_background_object(create_thstone3_3090(832, 1368), 3);
    add_background_object(create_thstone9_3093(768, 1368), 3);
    add_background_object(create_thstone3_3090(832, 1304), 3);
    add_background_object(create_thstone11_3085(0, 1368), 3);
    add_background_object(create_thstone11_3085(128, 1368), 3);
    add_background_object(create_thstone11_3085(256, 1368), 3);
    add_background_object(create_thstone11_3085(384, 1368), 3);
    add_background_object(create_thstone11_3085(512, 1368), 3);
    add_background_object(create_thstone11_3085(640, 1368), 3);
    add_background_object(create_thwood5_3144(2416, 1504), 3);
    add_background_object(create_thwood4_3145(2208, 1504), 3);
    add_background_object(create_thwood3_3137(2224, 1504), 3);
    add_background_object(create_thwood2_3134(1664, 1752), 3);
    add_background_object(create_thwood2_3134(1792, 1752), 3);
    add_background_object(create_thtire1_3136(1872, 1720), 3);
    add_background_object(create_thtire1_3136(1808, 1720), 3);
    add_background_object(create_thtire1_3136(1744, 1720), 3);
    add_background_object(create_thtire1_3136(1680, 1720), 3);
    add_background_object(create_thtire1_3136(1744, 1688), 3);
    add_background_object(create_thtire1_3136(1808, 1688), 3);
    add_background_object(create_thtire1_3136(1808, 1656), 3);
    add_background_object(create_thwood2_3134(1920, 1752), 3);
    add_background_object(create_thwood2_3134(2048, 1752), 3);
    add_background_object(create_thwood5_3144(2096, 1600), 3);
    add_background_object(create_thwood4_3145(1952, 1600), 3);
    add_background_object(create_thwood3_3137(1968, 1600), 3);
    add_background_object(create_thstone1_3091(1776, 1552), 3);
    add_background_object(create_thstone3_3090(1840, 1488), 3);
    add_background_object(create_thstone5_3096(1840, 1552), 3);
    add_background_object(create_thstone9_3093(1776, 1488), 3);
    add_background_object(create_thstone6_3095(1744, 1552), 3);
    add_background_object(create_thstone4_3086(1744, 1488), 3);
    add_background_object(create_thstone3_3090(1840, 1360), 3);
    add_background_object(create_thstone9_3093(1776, 1360), 3);
    add_background_object(create_thstone4_3086(1744, 1360), 3);
    add_background_object(create_thstone8_3098(1744, 1328), 3);
    add_background_object(create_thstone2_3092(1776, 1328), 3);
    add_background_object(create_thstone7_3097(1840, 1328), 3);
    add_background_object(create_thstone3_3090(1840, 1424), 3);
    add_background_object(create_thstone9_3093(1776, 1424), 3);
    add_background_object(create_thstone4_3086(1744, 1424), 3);
    add_background_object(create_thwood5_3144(1984, 1296), 3);
    add_background_object(create_thwood4_3145(1648, 1296), 3);
    add_background_object(create_thwood3_3137(1728, 1296), 3);
    add_background_object(create_thwood6_3143(1664, 1296), 3);
    add_background_object(create_thwood5_3144(1856, 1136), 3);
    add_background_object(create_thwood4_3145(1648, 1136), 3);
    add_background_object(create_thwood3_3137(1728, 1136), 3);
    add_background_object(create_thwood6_3143(1664, 1136), 3);
    add_background_object(create_thstone11_3085(704, 1240), 3);
    add_background_object(create_thstone3_3090(832, 1240), 3);
    add_background_object(create_thstone3_3090(832, 1176), 3);
    add_background_object(create_thstone11_3085(704, 1112), 3);
    add_background_object(create_thstone3_3090(832, 1112), 3);
    add_background_object(create_thstone3_3090(832, 1048), 3);
    add_background_object(create_thstone11_3085(704, 984), 3);
    add_background_object(create_thstone3_3090(832, 984), 3);
    add_background_object(create_thstone10_3146(1000, 1176), 3);
    add_background_object(create_thstone10_3146(1000, 1240), 3);
    add_background_object(create_thstone10_3146(1192, 1208), 3);
    add_background_object(create_thstone10_3146(1384, 1144), 3);
    add_background_object(create_thstone11_3085(704, 856), 3);
    add_background_object(create_thstone11_3085(832, 856), 3);
    add_background_object(create_thwood3_3137(864, 984), 3);
    add_background_object(create_thstone11_3085(960, 856), 3);
    add_background_object(create_thwood3_3137(992, 984), 3);
    add_background_object(create_thstone11_3085(1088, 856), 3);
    add_background_object(create_thwood3_3137(1120, 984), 3);
    add_background_object(create_thstone11_3085(1216, 856), 3);
    add_background_object(create_thwood3_3137(1248, 984), 3);
    add_background_object(create_thstone11_3085(1344, 856), 3);
    add_background_object(create_thwood3_3137(1376, 984), 3);
    add_background_object(create_thwood2_3134(2176, 1752), 3);
    add_background_object(create_thwood2_3134(2304, 1752), 3);
    add_background_object(create_thwood2_3134(2432, 1752), 3);
    add_background_object(create_thstone11_3085(1472, 856), 3);
    add_background_object(create_thwood3_3137(1504, 984), 3);
    add_background_object(create_thstone11_3085(1600, 856), 3);
    add_background_object(create_thwood3_3137(1632, 984), 3);
    add_background_object(create_thstone11_3085(1728, 856), 3);
    add_background_object(create_thwood3_3137(1760, 984), 3);
    add_background_object(create_thstone11_3085(1856, 856), 3);
    add_background_object(create_thwood3_3137(1888, 984), 3);
    add_background_object(create_thhandlebar_3148(1008, 1016), 3);
    add_background_object(create_thhandlebar_3148(1112, 1016), 3);
    add_background_object(create_thhandlebar_3148(1216, 1016), 3);
    add_background_object(create_thhandlebar_3148(1320, 1016), 3);
    add_background_object(create_thstone11_3085(576, 1240), 3);
    add_background_object(create_thstone11_3085(576, 1112), 3);
    add_background_object(create_thstone11_3085(576, 984), 3);
    add_background_object(create_thstone11_3085(576, 856), 3);
    add_background_object(create_thwood3_3137(1856, 1296), 3);
    add_background_object(create_thhandlebar_3148(1936, 1328), 3);
    add_background_object(create_thwood6_3143(2048, 1440), 3);
    add_background_object(create_thwood5_3144(2112, 1440), 3);
    add_background_object(create_thwood4_3145(2032, 1440), 3);
    add_background_object(create_thstone3_3090(1968, 1200), 3);
    add_background_object(create_thstone4_3086(1936, 1200), 3);
    add_background_object(create_thstone10_3146(1936, 1264), 3);
    add_background_object(create_thstone10_3146(1936, 1168), 3);
    add_background_object(create_thstone3_3090(1984, 888), 3);
    add_background_object(create_thwood5_3144(2016, 984), 3);
    add_background_object(create_thstone11_3085(1728, 728), 3);
    add_background_object(create_thstone11_3085(1856, 728), 3);
    add_background_object(create_thstone3_3090(1984, 824), 3);
    add_background_object(create_thstone3_3090(1984, 760), 3);
    add_background_object(create_thstone11_3085(1728, 600), 3);
    add_background_object(create_thstone11_3085(1856, 600), 3);
    add_background_object(create_thstone3_3090(1984, 696), 3);
    add_background_object(create_thstone3_3090(1984, 632), 3);
    add_background_object(create_thstone11_3085(1728, 344), 3);
    add_background_object(create_thstone11_3085(1984, 344), 3);
    add_background_object(create_thstone3_3090(2112, 376), 3);
    add_background_object(create_thstone4_3086(2560, 1736), 3);
    add_background_object(create_thstone4_3086(2560, 1672), 3);
    add_background_object(create_thstone11_3085(2592, 1672), 3);
    add_background_object(create_thstone4_3086(2560, 1608), 3);
    add_background_object(create_thstone4_3086(2560, 1544), 3);
    add_background_object(create_thstone11_3085(2592, 1544), 3);
    add_background_object(create_thstone4_3086(2560, 1480), 3);
    add_background_object(create_thstone4_3086(2560, 1416), 3);
    add_background_object(create_thstone11_3085(2592, 1416), 3);
    add_background_object(create_thstone4_3086(2560, 1352), 3);
    add_background_object(create_thstone11_3085(2592, 1288), 3);
    add_background_object(create_thwood3_3137(2432, 1352), 3);
    add_background_object(create_thwood4_3145(2416, 1352), 3);
    add_background_object(create_thwood6_3143(2352, 1504), 3);
    add_background_object(create_thstone11_3085(2464, 1224), 3);
    add_background_object(create_thstone11_3085(2592, 1160), 3);
    add_background_object(create_thstone11_3085(2464, 1096), 3);
    add_background_object(create_thstone4_3086(2432, 1256), 3);
    add_background_object(create_thstone4_3086(2432, 1192), 3);
    add_background_object(create_thstone4_3086(2432, 1096), 3);
    add_background_object(create_thstone11_3085(2464, 776), 3);
    add_background_object(create_thstone4_3086(2432, 776), 3);
    add_background_object(create_thstone11_3085(2592, 776), 3);
    add_background_object(create_thstone2_3092(2528, 744), 3);
    add_background_object(create_thstone2_3092(2592, 744), 3);
    add_background_object(create_thstone2_3092(2656, 744), 3);
    add_background_object(create_thwood2_3134(2688, 696), 3);
    add_background_object(create_thstone11_3085(2720, 776), 3);
    add_background_object(create_thstone2_3092(2720, 744), 3);
    add_background_object(create_thstone2_3092(2784, 744), 3);
    add_background_object(create_thwood2_3134(2816, 696), 3);
    add_background_object(create_thstone11_3085(2848, 776), 3);
    add_background_object(create_thstone2_3092(2848, 744), 3);
    add_background_object(create_thstone2_3092(2912, 744), 3);
    add_background_object(create_thstone2_3092(2464, 744), 3);
    add_background_object(create_thstone8_3098(2432, 744), 3);
    add_background_object(create_thwood4_3145(2632, 664), 3);
    add_background_object(create_thwood3_3137(2648, 664), 3);
    add_background_object(create_thwood5_3144(2904, 664), 3);
    add_background_object(create_thwood3_3137(2776, 664), 3);
    add_background_object(create_thwood3_3137(2712, 632), 3);
    add_background_object(create_thwood5_3144(2840, 632), 3);
    add_background_object(create_thwood4_3145(2696, 632), 3);
    add_background_object(create_thstone11_3085(2976, 776), 3);
    add_background_object(create_thstone2_3092(2976, 744), 3);
    add_background_object(create_thstone2_3092(3040, 744), 3);
    add_background_object(create_thstone11_3085(3104, 776), 3);
    add_background_object(create_thstone2_3092(3104, 744), 3);
    add_background_object(create_thstone2_3092(3168, 744), 3);
    add_background_object(create_thwood2_3134(2944, 696), 3);
    add_background_object(create_thwood2_3134(3072, 696), 3);
    add_background_object(create_thstone6_3095(2432, 904), 3);
    add_background_object(create_thstone4_3086(2432, 840), 3);
    add_background_object(create_thstone1_3091(2464, 904), 3);
    add_background_object(create_thstone1_3091(2528, 904), 3);
    add_background_object(create_thstone1_3091(2592, 904), 3);
    add_background_object(create_thstone1_3091(2656, 904), 3);
    add_background_object(create_thstone1_3091(2720, 904), 3);
    add_background_object(create_thstone1_3091(2784, 904), 3);
    add_background_object(create_thstone2_3092(2464, 1064), 3);
    add_background_object(create_thstone8_3098(2432, 1064), 3);
    add_background_object(create_thwood2_3134(2592, 1112), 3);
    add_background_object(create_thwood2_3134(2720, 1112), 3);
    add_background_object(create_thwood2_3134(2848, 1112), 3);
    add_background_object(create_thstone11_3085(2720, 1288), 3);
    add_background_object(create_thstone11_3085(2720, 1160), 3);
    add_background_object(create_thstone11_3085(2720, 1672), 3);
    add_background_object(create_thstone11_3085(2720, 1544), 3);
    add_background_object(create_thstone11_3085(2720, 1416), 3);
    add_background_object(create_thstone11_3085(2848, 1160), 3);
    add_background_object(create_thstone1_3091(2848, 904), 3);
    add_background_object(create_thstone1_3091(2912, 904), 3);
    add_background_object(create_thtire1_3136(2496, 1720), 3);
    add_background_object(create_thtire1_3136(2496, 1688), 3);
    add_background_object(create_thtire1_3136(2496, 1656), 3);
    add_background_object(create_thtire1_3136(2432, 1720), 3);
    add_background_object(create_thtire1_3136(2432, 1688), 3);
    add_background_object(create_thtire1_3136(2368, 1720), 3);
    add_background_object(create_thstone11_3085(1728, 216), 3);
    add_background_object(create_thstone11_3085(1856, 216), 3);
    add_background_object(create_thstone11_3085(1728, 88), 3);
    add_background_object(create_thstone11_3085(1856, 88), 3);
    add_background_object(create_thstone11_3085(1984, 216), 3);
    add_background_object(create_thstone11_3085(1984, 88), 3);
    add_background_object(create_thstone11_3085(2112, 216), 3);
    add_background_object(create_thstone11_3085(2112, 88), 3);
    add_background_object(create_thstone11_3085(2240, 216), 3);
    add_background_object(create_thstone11_3085(2240, 88), 3);
    add_background_object(create_thstone11_3085(2368, 216), 3);
    add_background_object(create_thstone11_3085(2368, 88), 3);
    add_background_object(create_thstone11_3085(2496, 216), 3);
    add_background_object(create_thstone11_3085(2496, 88), 3);
    add_background_object(create_thwood3_3137(2272, 344), 3);
    add_background_object(create_thwood3_3137(2400, 344), 3);
    add_background_object(create_thwood3_3137(2528, 344), 3);
    add_background_object(create_thstone11_3085(1728, 472), 3);
    add_background_object(create_thstone3_3090(1984, 568), 3);
    add_background_object(create_thstone3_3090(1984, 504), 3);
    add_background_object(create_thwood3_3137(2144, 344), 3);
    add_background_object(create_thstone11_3085(1856, 344), 3);
    add_background_object(create_thstone11_3085(1856, 472), 3);
    add_background_object(create_thwood3_3137(2016, 472), 3);
    add_background_object(create_thwood5_3144(2144, 472), 3);
    add_background_object(create_thstone11_3085(2848, 1288), 3);
    add_background_object(create_thstone1_3091(2976, 904), 3);
    add_background_object(create_thstone1_3091(3040, 904), 3);
    add_background_object(create_thstone1_3091(3104, 904), 3);
    add_background_object(create_thstone1_3091(3168, 904), 3);
    add_background_object(create_thstone5_3096(3232, 904), 3);
    add_background_object(create_thstone7_3097(3232, 744), 3);
    add_background_object(create_thstone3_3090(3232, 776), 3);
    add_background_object(create_thstone3_3090(3232, 840), 3);
    add_background_object(create_thstone11_3085(2976, 1160), 3);
    add_background_object(create_thwood2_3134(2976, 1112), 3);
    add_background_object(create_thwood2_3134(3104, 1112), 3);
    add_background_object(create_thwood2_3134(3232, 1112), 3);
    add_background_object(create_thstone11_3085(3104, 1160), 3);
    add_background_object(create_thwood2_3134(3360, 1112), 3);
    add_background_object(create_thwood2_3134(3488, 1112), 3);
    add_background_object(create_thwood2_3134(3616, 1112), 3);
    add_background_object(create_thwood2_3134(3744, 1112), 3);
    add_background_object(create_thwood2_3134(3872, 1112), 3);
    add_background_object(create_thwood2_3134(4000, 1112), 3);
    add_background_object(create_thwood5_3144(3200, 696), 3);
    add_background_object(create_thwood5_3144(3200, 712), 3);
    add_background_object(create_thrope2_3141(3264, 744), 3);
    add_background_object(create_thrope2_3141(3392, 808), 3);
    add_background_object(create_thstone10_3146(4064, 1080), 3);
    add_background_object(create_thstone10_3146(4064, 920), 3);
    add_background_object(create_thrope3_3142(3808, 984), 3);
    add_background_object(create_thrope3_3142(3936, 920), 3);
    add_background_object(create_thstone3_3090(4096, 1016), 3);
    add_background_object(create_thstone4_3086(4064, 1016), 3);
    add_background_object(create_thstone10_3146(4256, 920), 3);
    add_background_object(create_thwood3_3137(4128, 920), 3);
    add_background_object(create_thwood2_3134(4768, 1112), 3);
    add_background_object(create_thstone11_3085(4896, 1160), 3);
    add_background_object(create_thstone11_3085(4896, 1032), 3);
    add_background_object(create_thwood2_3134(4640, 1112), 3);
    add_background_object(create_thstone4_3086(4864, 1096), 3);
    add_background_object(create_thstone4_3086(4864, 1032), 3);
    add_background_object(create_thwood4_3145(4624, 1112), 3);
    add_background_object(create_thwood4_3145(4624, 1144), 3);
    add_background_object(create_thwood4_3145(4624, 1176), 3);
    add_background_object(create_thwood4_3145(4624, 1208), 3);
    add_background_object(create_thwood4_3145(4624, 1240), 3);
    add_background_object(create_thwood5_3144(4128, 1112), 3);
    add_background_object(create_thwood5_3144(4128, 1144), 3);
    add_background_object(create_thrope3_3142(4376, 1176), 3);
    add_background_object(create_thrope3_3142(4248, 1240), 3);
    add_background_object(create_thwood2_3134(3872, 1160), 3);
    add_background_object(create_thwood5_3144(4000, 1176), 3);
    add_background_object(create_thwood5_3144(4000, 1192), 3);
    add_background_object(create_thrope3_3142(4120, 1304), 3);
    add_background_object(create_thwood3_3137(3744, 1192), 3);
    add_background_object(create_thwood2_3134(3744, 1160), 3);
    add_background_object(create_thwood2_3134(4640, 1160), 3);
    add_background_object(create_thwood2_3134(4768, 1160), 3);
    add_background_object(create_thwood2_3134(4640, 1208), 3);
    add_background_object(create_thwood2_3134(4768, 1208), 3);
    add_background_object(create_thwood2_3134(4640, 1400), 3);
    add_background_object(create_thwood2_3134(4896, 1400), 3);
    add_background_object(create_thwood5_3144(4896, 1160), 3);
    add_background_object(create_thwood5_3144(4896, 1192), 3);
    add_background_object(create_thwood5_3144(4896, 1224), 3);
    add_background_object(create_thwood5_3144(4896, 1368), 3);
    add_background_object(create_thwood5_3144(5024, 1432), 3);
    add_background_object(create_thwood4_3145(4624, 1432), 3);
    add_background_object(create_thstone10_3146(4056, 1368), 3);
    add_background_object(create_thwood3_3137(3616, 1192), 3);
    add_background_object(create_thwood2_3134(3616, 1160), 3);
    add_background_object(create_thwood3_3137(3488, 1192), 3);
    add_background_object(create_thwood2_3134(3488, 1160), 3);
    add_background_object(create_thwood5_3144(3488, 1288), 3);
    add_background_object(create_thwood5_3144(3488, 1320), 3);
    add_background_object(create_thwood5_3144(3488, 1352), 3);
    add_background_object(create_thwood5_3144(3488, 1384), 3);
    add_background_object(create_thstone11_3085(3360, 1416), 3);
    add_background_object(create_thwood5_3144(3488, 1416), 3);
    add_background_object(create_thwood5_3144(3488, 1448), 3);
    add_background_object(create_thwood5_3144(3488, 1480), 3);
    add_background_object(create_thstone11_3085(3360, 1544), 3);
    add_background_object(create_thwood3_3137(3616, 1544), 3);
    add_background_object(create_thwood2_3134(3616, 1512), 3);
    add_background_object(create_thwood3_3137(3744, 1544), 3);
    add_background_object(create_thwood2_3134(3744, 1512), 3);
    add_background_object(create_thwood3_3137(3872, 1544), 3);
    add_background_object(create_thwood2_3134(3872, 1512), 3);
    add_background_object(create_thwood5_3144(4000, 1512), 3);
    add_background_object(create_thwood5_3144(4000, 1544), 3);
    add_background_object(create_thstone11_3085(3232, 1416), 3);
    add_background_object(create_thstone11_3085(3232, 1544), 3);
    add_background_object(create_thstone11_3085(3360, 1672), 3);
    add_background_object(create_thstone11_3085(3232, 1672), 3);
    add_background_object(create_thstone11_3085(3616, 1672), 3);
    add_background_object(create_thstone11_3085(3488, 1672), 3);
    add_background_object(create_thstone11_3085(3872, 1672), 3);
    add_background_object(create_thstone11_3085(3744, 1672), 3);
    add_background_object(create_thwood5_3144(4000, 1576), 3);
    add_background_object(create_thwood2_3134(4000, 1640), 3);
    add_background_object(create_thwood5_3144(4000, 1608), 3);
    add_background_object(create_thwood2_3134(4000, 1688), 3);
    add_background_object(create_thwood2_3134(4000, 1736), 3);
    add_background_object(create_thwood3_3137(4512, 1768), 3);
    add_background_object(create_thwood2_3134(4512, 1640), 3);
    add_background_object(create_thwood2_3134(4512, 1688), 3);
    add_background_object(create_thwood2_3134(4512, 1736), 3);
    add_background_object(create_thwood3_3137(4640, 1768), 3);
    add_background_object(create_thwood2_3134(4640, 1640), 3);
    add_background_object(create_thwood2_3134(4640, 1688), 3);
    add_background_object(create_thwood2_3134(4640, 1736), 3);
    add_background_object(create_thwood3_3137(4768, 1768), 3);
    add_background_object(create_thwood2_3134(4768, 1640), 3);
    add_background_object(create_thwood2_3134(4768, 1688), 3);
    add_background_object(create_thwood2_3134(4768, 1736), 3);
    add_background_object(create_thwood3_3137(5536, 1768), 3);
    add_background_object(create_thwood2_3134(5536, 1640), 3);
    add_background_object(create_thwood2_3134(5536, 1688), 3);
    add_background_object(create_thwood2_3134(5536, 1736), 3);
    add_background_object(create_thwood3_3137(5664, 1768), 3);
    add_background_object(create_thwood2_3134(5664, 1640), 3);
    add_background_object(create_thwood2_3134(5664, 1688), 3);
    add_background_object(create_thwood2_3134(5664, 1736), 3);
    add_background_object(create_thwood2_3134(5664, 1592), 3);
    add_background_object(create_thwood2_3134(5664, 1544), 3);
    add_background_object(create_thwood4_3145(5648, 1544), 3);
    add_background_object(create_thwood4_3145(5648, 1576), 3);
    add_background_object(create_thwood4_3145(5648, 1608), 3);
    add_background_object(create_thstone10_3146(3520, 872), 3);
    add_background_object(create_thwood3_3137(3360, 1192), 3);
    add_background_object(create_thwood2_3134(3360, 1160), 3);
    add_background_object(create_thwood3_3137(3232, 1192), 3);
    add_background_object(create_thwood2_3134(3232, 1160), 3);
    add_background_object(create_thwood4_3145(3216, 1192), 3);
    add_background_object(create_thwood2_3134(3360, 1288), 3);
    add_background_object(create_thwood2_3134(3232, 1288), 3);
    add_background_object(create_thwood4_3145(3216, 1288), 3);
    add_background_object(create_thstone3_3090(3232, 1224), 3);
    add_background_object(create_thstone11_3085(3104, 1416), 3);
    add_background_object(create_thstone11_3085(3104, 1544), 3);
    add_background_object(create_thstone11_3085(3104, 1672), 3);
    add_background_object(create_thstone11_3085(2976, 1288), 3);
    add_background_object(create_thstone11_3085(2976, 1416), 3);
    add_background_object(create_thstone11_3085(2976, 1544), 3);
    add_background_object(create_thstone11_3085(2976, 1672), 3);
    add_background_object(create_thstone11_3085(2848, 1416), 3);
    add_background_object(create_thstone11_3085(2848, 1544), 3);
    add_background_object(create_thstone11_3085(2848, 1672), 3);
    add_background_object(create_thwood5_3144(5792, 1544), 3);
    add_background_object(create_thwood5_3144(5792, 1576), 3);
    add_background_object(create_thwood3_3137(5792, 1768), 3);
    add_background_object(create_thwood2_3134(5792, 1640), 3);
    add_background_object(create_thwood2_3134(5792, 1688), 3);
    add_background_object(create_thwood2_3134(5792, 1736), 3);
    add_background_object(create_thwood2_3134(5792, 1592), 3);
    add_background_object(create_thwood3_3137(5920, 1768), 3);
    add_background_object(create_thwood2_3134(5920, 1640), 3);
    add_background_object(create_thwood2_3134(5920, 1688), 3);
    add_background_object(create_thwood2_3134(5920, 1736), 3);
    add_background_object(create_thwood2_3134(5920, 1592), 3);
    add_background_object(create_thwood3_3137(6048, 1768), 3);
    add_background_object(create_thwood2_3134(6048, 1640), 3);
    add_background_object(create_thwood2_3134(6048, 1688), 3);
    add_background_object(create_thwood2_3134(6048, 1736), 3);
    add_background_object(create_thwood2_3134(6048, 1592), 3);
    add_background_object(create_thstone8_3098(4864, 1000), 3);
    add_background_object(create_thstone2_3092(4896, 1000), 3);
    add_background_object(create_thstone2_3092(4960, 1000), 3);
    add_background_object(create_thstone7_3097(5024, 1000), 3);
    add_background_object(create_thstone3_3090(5024, 1032), 3);
    add_background_object(create_thstone3_3090(5024, 1096), 3);
    add_background_object(create_thstone3_3090(5024, 1160), 3);
    add_background_object(create_thstone3_3090(5024, 1224), 3);
    add_background_object(create_thstone5_3096(5024, 1288), 3);
    add_background_object(create_thstone1_3091(4960, 1288), 3);
    add_background_object(create_thwood4_3145(4864, 968), 3);
    add_background_object(create_thwood3_3137(4880, 968), 3);
    add_background_object(create_thwood3_3137(5008, 968), 3);
    add_background_object(create_thwood5_3144(5136, 968), 3);
    add_background_object(create_thwood2_3134(4880, 936), 3);
    add_background_object(create_thwood2_3134(5008, 936), 3);
    add_background_object(create_thwood4_3145(4864, 936), 3);
    add_background_object(create_thwood5_3144(5136, 936), 3);
    add_background_object(create_thwood4_3145(5136, 1184), 3);
    add_background_object(create_thwood3_3137(5152, 1184), 3);
    add_background_object(create_thwood3_3137(5328, 1184), 3);
    add_background_object(create_thwood5_3144(5456, 1184), 3);
    add_background_object(create_thwood2_3134(5152, 1152), 3);
    add_background_object(create_thwood2_3134(5328, 1152), 3);
    add_background_object(create_thwood4_3145(5136, 1152), 3);
    add_background_object(create_thwood5_3144(5456, 1152), 3);
    add_background_object(create_thstone4_3086(5472, 1056), 3);
    add_background_object(create_thstone3_3090(5504, 1056), 3);
    add_background_object(create_thstone4_3086(5472, 1120), 3);
    add_background_object(create_thstone3_3090(5504, 1120), 3);
    add_background_object(create_thstone10_3146(5472, 1184), 3);
    add_background_object(create_thstone4_3086(5472, 992), 3);
    add_background_object(create_thstone3_3090(5504, 992), 3);
    add_background_object(create_thstone4_3086(5472, 928), 3);
    add_background_object(create_thstone3_3090(5504, 928), 3);
    add_background_object(create_thstone4_3086(5472, 864), 3);
    add_background_object(create_thstone3_3090(5504, 864), 3);
    add_background_object(create_thstone10_3146(5472, 832), 3);
    add_background_object(create_thstone10_3146(5264, 1024), 3);
    add_background_object(create_thtotemback_3087(4952, 1576), 3);
    add_background_object(create_thtotemback_3087(4952, 1608), 3);
    add_background_object(create_thtotemback_3087(4896, 1576), 3);
    add_background_object(create_thtotemback_3087(4896, 1608), 3);
    add_background_object(create_thtotemback_3087(4840, 1576), 3);
    add_background_object(create_thtotemback_3087(4840, 1608), 3);
    add_background_object(create_thtotemback_3087(4776, 1576), 3);
    add_background_object(create_thtotemback_3087(4776, 1608), 3);
    add_background_object(create_thtotemback_3087(4720, 1576), 3);
    add_background_object(create_thtotemback_3087(4720, 1608), 3);
    add_background_object(create_thtotemback_3087(4664, 1576), 3);
    add_background_object(create_thtotemback_3087(4664, 1608), 3);
    add_background_object(create_thtotemback_3087(5928, 1496), 3);
    add_background_object(create_thtotemback_3087(5928, 1528), 3);
    add_background_object(create_thtotemback_3087(5928, 1560), 3);
    add_background_object(create_thtotemback_3087(5872, 1496), 3);
    add_background_object(create_thtotemback_3087(5872, 1528), 3);
    add_background_object(create_thtotemback_3087(5872, 1560), 3);
    add_background_object(create_thtotemback_3087(5872, 1400), 3);
    add_background_object(create_thtotemback_3087(5872, 1432), 3);
    add_background_object(create_thtotemback_3087(5872, 1464), 3);
    add_background_object(create_thtotemback_3087(5928, 1432), 3);
    add_background_object(create_thtotemback_3087(5928, 1464), 3);
    add_background_object(create_thtotemback_3087(5984, 1496), 3);
    add_background_object(create_thtotemback_3087(5984, 1528), 3);
    add_background_object(create_thtotemback_3087(5984, 1560), 3);
    add_background_object(create_thtotemback_3087(5984, 1464), 3);
    add_background_object(create_thtotemback_3087(6096, 1496), 3);
    add_background_object(create_thtotemback_3087(6096, 1528), 3);
    add_background_object(create_thtotemback_3087(6096, 1560), 3);
    add_background_object(create_thtotemback_3087(6040, 1496), 3);
    add_background_object(create_thtotemback_3087(6040, 1528), 3);
    add_background_object(create_thtotemback_3087(6040, 1560), 3);
    add_background_object(create_thtotemback_3087(6040, 1400), 3);
    add_background_object(create_thtotemback_3087(6040, 1432), 3);
    add_background_object(create_thtotemback_3087(6040, 1464), 3);
    add_background_object(create_thtotemback_3087(6096, 1432), 3);
    add_background_object(create_thtotemback_3087(6096, 1464), 3);
    add_background_object(create_thtotemback_3087(6152, 1496), 3);
    add_background_object(create_thtotemback_3087(6152, 1528), 3);
    add_background_object(create_thtotemback_3087(6152, 1560), 3);
    add_background_object(create_thtotemback_3087(6152, 1464), 3);
    add_background_object(create_thwood3_3137(6176, 1768), 3);
    add_background_object(create_thwood2_3134(6176, 1640), 3);
    add_background_object(create_thwood2_3134(6176, 1688), 3);
    add_background_object(create_thwood2_3134(6176, 1736), 3);
    add_background_object(create_thwood2_3134(6176, 1592), 3);
    add_background_object(create_thwood3_3137(6304, 1768), 3);
    add_background_object(create_thwood2_3134(6304, 1640), 3);
    add_background_object(create_thwood2_3134(6304, 1688), 3);
    add_background_object(create_thwood2_3134(6304, 1736), 3);
    add_background_object(create_thwood2_3134(6304, 1592), 3);
    add_background_object(create_thwood3_3137(6432, 1768), 3);
    add_background_object(create_thwood2_3134(6432, 1640), 3);
    add_background_object(create_thwood2_3134(6432, 1688), 3);
    add_background_object(create_thwood2_3134(6432, 1736), 3);
    add_background_object(create_thwood2_3134(6432, 1592), 3);
    add_background_object(create_thwood3_3137(6560, 1768), 3);
    add_background_object(create_thwood2_3134(6560, 1640), 3);
    add_background_object(create_thwood2_3134(6560, 1688), 3);
    add_background_object(create_thwood2_3134(6560, 1736), 3);
    add_background_object(create_thwood2_3134(6560, 1592), 3);
    add_background_object(create_thwood3_3137(6688, 1768), 3);
    add_background_object(create_thwood2_3134(6688, 1640), 3);
    add_background_object(create_thwood2_3134(6688, 1688), 3);
    add_background_object(create_thwood2_3134(6688, 1736), 3);
    add_background_object(create_thwood2_3134(6688, 1592), 3);
    add_background_object(create_thtotemback_3087(4816, 1048), 3);
    add_background_object(create_thtotemback_3087(4816, 1080), 3);
    add_background_object(create_thtotemback_3087(4760, 1048), 3);
    add_background_object(create_thtotemback_3087(4760, 1080), 3);
    add_background_object(create_thtotemback_3087(4704, 1048), 3);
    add_background_object(create_thtotemback_3087(4704, 1080), 3);
    add_background_object(create_thtotemback_3087(3816, 1448), 3);
    add_background_object(create_thtotemback_3087(3816, 1480), 3);
    add_background_object(create_thtotemback_3087(3760, 1448), 3);
    add_background_object(create_thtotemback_3087(3760, 1480), 3);
    add_background_object(create_thtotemback_3087(3704, 1448), 3);
    add_background_object(create_thtotemback_3087(3704, 1480), 3);
    add_background_object(create_thtotemback_3087(3648, 1448), 3);
    add_background_object(create_thtotemback_3087(3648, 1480), 3);
    add_background_object(create_thwood4_3145(5024, 800), 3);
    add_background_object(create_thwood3_3137(5040, 800), 3);
    add_background_object(create_thwood3_3137(5424, 800), 3);
    add_background_object(create_thwood5_3144(5680, 800), 3);
    add_background_object(create_thwood2_3134(5040, 768), 3);
    add_background_object(create_thwood2_3134(5424, 768), 3);
    add_background_object(create_thwood4_3145(5024, 768), 3);
    add_background_object(create_thwood5_3144(5552, 768), 3);
    add_background_object(create_thwood3_3137(5168, 800), 3);
    add_background_object(create_thwood2_3134(5168, 768), 3);
    add_background_object(create_thwood3_3137(5296, 800), 3);
    add_background_object(create_thwood2_3134(5296, 768), 3);
    add_background_object(create_thstone1_3091(5056, 736), 3);
    add_background_object(create_thstone1_3091(5120, 736), 3);
    add_background_object(create_thstone6_3095(5024, 736), 3);
    add_background_object(create_thstone1_3091(5184, 736), 3);
    add_background_object(create_thstone1_3091(5248, 736), 3);
    add_background_object(create_thstone1_3091(5312, 736), 3);
    add_background_object(create_thstone11_3085(5056, 608), 3);
    add_background_object(create_thstone11_3085(5184, 608), 3);
    add_background_object(create_thstone11_3085(5312, 608), 3);
    add_background_object(create_thstone4_3086(5024, 672), 3);
    add_background_object(create_thstone4_3086(5024, 608), 3);
    add_background_object(create_thstone11_3085(5056, 480), 3);
    add_background_object(create_thstone11_3085(5184, 480), 3);
    add_background_object(create_thstone11_3085(5280, 480), 3);
    add_background_object(create_thstone4_3086(5024, 544), 3);
    add_background_object(create_thstone4_3086(5024, 480), 3);
    add_background_object(create_thstone11_3085(5056, 352), 3);
    add_background_object(create_thstone11_3085(5120, 352), 3);
    add_background_object(create_thstone4_3086(5024, 384), 3);
    add_background_object(create_thstone11_3085(5440, 224), 3);
    add_background_object(create_thstone11_3085(5184, 96), 3);
    add_background_object(create_thstone11_3085(5312, 96), 3);
    add_background_object(create_thstone11_3085(5440, 96), 3);
    add_background_object(create_thstone4_3086(5184, 96), 3);
    add_background_object(create_thstone11_3085(5056, -32), 3);
    add_background_object(create_thstone11_3085(5312, -32), 3);
    add_background_object(create_thstone11_3085(5440, -32), 3);
    add_background_object(create_thstone4_3086(5024, 0), 3);
    add_background_object(create_thstone11_3085(5184, -32), 3);
    add_background_object(create_thstone6_3095(5024, 64), 3);
    add_background_object(create_thstone1_3091(5056, 64), 3);
    add_background_object(create_thstone1_3091(5120, 64), 3);
    add_background_object(create_thstone8_3098(5024, 352), 3);
    add_background_object(create_thstone2_3092(5056, 352), 3);
    add_background_object(create_thstone2_3092(5120, 352), 3);
    add_background_object(create_thwood3_3137(4256, 1768), 3);
    add_background_object(create_thwood2_3134(4256, 1640), 3);
    add_background_object(create_thwood2_3134(4256, 1688), 3);
    add_background_object(create_thwood2_3134(4256, 1736), 3);
    add_background_object(create_thwood3_3137(4384, 1768), 3);
    add_background_object(create_thwood2_3134(4384, 1640), 3);
    add_background_object(create_thwood2_3134(4384, 1688), 3);
    add_background_object(create_thwood2_3134(4384, 1736), 3);
    add_background_object(create_thwood3_3137(4128, 1768), 3);
    add_background_object(create_thwood2_3134(4128, 1640), 3);
    add_background_object(create_thwood2_3134(4128, 1688), 3);
    add_background_object(create_thwood2_3134(4128, 1736), 3);
    add_background_object(create_thwood3_3137(4896, 1768), 3);
    add_background_object(create_thwood2_3134(4896, 1640), 3);
    add_background_object(create_thwood2_3134(4896, 1688), 3);
    add_background_object(create_thwood2_3134(4896, 1736), 3);
    add_background_object(create_thwood3_3137(5024, 1768), 3);
    add_background_object(create_thwood2_3134(5024, 1640), 3);
    add_background_object(create_thwood2_3134(5024, 1688), 3);
    add_background_object(create_thwood2_3134(5024, 1736), 3);
    add_background_object(create_thwood3_3137(5152, 1768), 3);
    add_background_object(create_thwood2_3134(5152, 1640), 3);
    add_background_object(create_thwood2_3134(5152, 1688), 3);
    add_background_object(create_thwood2_3134(5152, 1736), 3);
    add_background_object(create_thwood3_3137(5280, 1768), 3);
    add_background_object(create_thwood2_3134(5280, 1640), 3);
    add_background_object(create_thwood2_3134(5280, 1688), 3);
    add_background_object(create_thwood2_3134(5280, 1736), 3);
    add_background_object(create_thwood3_3137(5408, 1768), 3);
    add_background_object(create_thwood2_3134(5408, 1640), 3);
    add_background_object(create_thwood2_3134(5408, 1688), 3);
    add_background_object(create_thwood2_3134(5408, 1736), 3);
    add_background_object(create_thtotemback_3087(4608, 1576), 3);
    add_background_object(create_thtotemback_3087(4608, 1608), 3);
    add_background_object(create_thrope2_3141(5056, 1280), 3);
    add_background_object(create_thrope2_3141(5184, 1344), 3);
    add_background_object(create_thstone10_3146(5312, 1408), 3);
    add_background_object(create_thwood2_3134(4640, 1352), 3);
    add_background_object(create_thwood2_3134(4768, 1352), 3);
    add_background_object(create_thwood2_3134(4640, 1304), 3);
    add_background_object(create_thwood2_3134(4768, 1304), 3);
    add_background_object(create_thwood2_3134(4640, 1256), 3);
    add_background_object(create_thwood2_3134(4768, 1256), 3);
    add_background_object(create_thwood4_3145(4624, 1272), 3);
    add_background_object(create_thwood4_3145(4624, 1304), 3);
    add_background_object(create_thwood4_3145(4624, 1336), 3);
    add_background_object(create_thwood4_3145(4624, 1368), 3);
    add_background_object(create_thwood4_3145(4624, 1400), 3);
    add_background_object(create_thwood5_3144(4896, 1320), 3);
    add_background_object(create_thwood5_3144(4896, 1352), 3);
    add_background_object(create_thwood5_3144(4896, 1256), 3);
    add_background_object(create_thwood5_3144(4896, 1288), 3);
    add_background_object(create_thwood5_3144(5024, 1400), 3);
    add_background_object(create_thwood3_3137(4768, 1432), 3);
    add_background_object(create_thwood2_3134(4768, 1400), 3);
    add_background_object(create_thwood3_3137(5280, 1184), 3);
    add_background_object(create_thwood2_3134(5280, 1152), 3);
    add_background_object(create_thwood4_3145(6040, 1328), 3);
    add_background_object(create_thwood3_3137(6056, 1328), 3);
    add_background_object(create_thwood3_3137(6232, 1328), 3);
    add_background_object(create_thwood5_3144(6360, 1328), 3);
    add_background_object(create_thwood2_3134(6056, 1296), 3);
    add_background_object(create_thwood2_3134(6232, 1296), 3);
    add_background_object(create_thwood4_3145(6040, 1296), 3);
    add_background_object(create_thwood5_3144(6360, 1296), 3);
    add_background_object(create_thwood3_3137(6184, 1328), 3);
    add_background_object(create_thwood2_3134(6184, 1296), 3);
    add_background_object(create_thwood4_3145(6040, 1136), 3);
    add_background_object(create_thwood3_3137(6056, 1136), 3);
    add_background_object(create_thwood3_3137(6232, 1136), 3);
    add_background_object(create_thwood5_3144(6360, 1136), 3);
    add_background_object(create_thwood2_3134(6056, 1104), 3);
    add_background_object(create_thwood2_3134(6232, 1104), 3);
    add_background_object(create_thwood4_3145(6040, 1104), 3);
    add_background_object(create_thwood5_3144(6360, 1104), 3);
    add_background_object(create_thwood3_3137(6184, 1136), 3);
    add_background_object(create_thwood2_3134(6184, 1104), 3);
    add_background_object(create_thstone4_3086(6504, 1208), 3);
    add_background_object(create_thstone3_3090(6536, 1208), 3);
    add_background_object(create_thstone10_3146(6504, 1272), 3);
    add_background_object(create_thstone10_3146(6504, 1176), 3);
    add_background_object(create_thwood3_3137(6200, 1432), 3);
    add_background_object(create_thwood4_3145(6184, 1432), 3);
    add_background_object(create_thwood5_3144(6520, 1432), 3);
    add_background_object(create_thwood3_3137(6328, 1432), 3);
    add_background_object(create_thback2_3125(6328, 1464), 3);
    add_background_object(create_thback1_3126(6392, 1464), 3);
    add_background_object(create_thwood6_3143(6456, 1432), 3);
    add_background_object(create_thwood2_3134(6544, 1544), 3);
    add_background_object(create_thwood4_3145(6528, 1544), 3);
    add_background_object(create_thwood4_3145(6528, 1560), 3);
    add_background_object(create_thwood3_3137(6816, 1768), 3);
    add_background_object(create_thwood2_3134(6816, 1736), 3);
    add_background_object(create_thwood2_3134(6816, 1640), 3);
    add_background_object(create_thwood2_3134(6816, 1688), 3);
    add_background_object(create_thwood2_3134(6816, 1592), 3);
    add_background_object(create_thwood3_3137(6944, 1768), 3);
    add_background_object(create_thwood2_3134(6944, 1736), 3);
    add_background_object(create_thwood2_3134(6944, 1640), 3);
    add_background_object(create_thwood2_3134(6944, 1688), 3);
    add_background_object(create_thwood2_3134(6944, 1592), 3);
    add_background_object(create_thwood3_3137(7072, 1768), 3);
    add_background_object(create_thwood2_3134(7072, 1736), 3);
    add_background_object(create_thwood2_3134(7072, 1640), 3);
    add_background_object(create_thwood2_3134(7072, 1688), 3);
    add_background_object(create_thwood2_3134(7072, 1592), 3);
    add_background_object(create_thstone7_3097(7168, 1528), 3);
    add_background_object(create_thstone8_3098(6944, 1528), 3);
    add_background_object(create_thstone6_3095(6944, 1560), 3);
    add_background_object(create_thstone5_3096(7168, 1560), 3);
    add_background_object(create_thstone2_3092(6976, 1528), 3);
    add_background_object(create_thstone2_3092(7040, 1528), 3);
    add_background_object(create_thstone2_3092(7104, 1528), 3);
    add_background_object(create_thstone1_3091(6976, 1560), 3);
    add_background_object(create_thstone1_3091(7040, 1560), 3);
    add_background_object(create_thstone1_3091(7104, 1560), 3);
    add_background_object(create_thwood5_3144(6672, 1560), 3);
    add_background_object(create_thwood5_3144(6672, 1544), 3);
    add_background_object(create_thstone4_3086(7200, 1736), 3);
    add_background_object(create_thstone4_3086(7200, 1672), 3);
    add_background_object(create_thstone11_3085(7232, 1672), 3);
    add_background_object(create_thstone11_3085(7360, 1672), 3);
    add_background_object(create_thstone4_3086(7200, 1608), 3);
    add_background_object(create_thstone4_3086(7200, 1544), 3);
    add_background_object(create_thstone11_3085(7232, 1544), 3);
    add_background_object(create_thstone11_3085(7360, 1544), 3);
    add_background_object(create_thstone4_3086(7200, 1480), 3);
    add_background_object(create_thstone4_3086(7200, 1416), 3);
    add_background_object(create_thstone11_3085(7232, 1416), 3);
    add_background_object(create_thstone11_3085(7360, 1416), 3);
    add_background_object(create_thstone4_3086(7200, 1352), 3);
    add_background_object(create_thstone4_3086(7200, 1288), 3);
    add_background_object(create_thstone11_3085(7232, 1288), 3);
    add_background_object(create_thstone11_3085(7360, 1288), 3);
    add_background_object(create_thstone4_3086(7200, 1224), 3);
    add_background_object(create_thstone4_3086(7200, 1160), 3);
    add_background_object(create_thstone11_3085(7232, 1160), 3);
    add_background_object(create_thstone11_3085(7360, 1160), 3);
    add_background_object(create_thstone4_3086(7200, 1096), 3);
    add_background_object(create_thstone4_3086(7200, 1032), 3);
    add_background_object(create_thstone11_3085(7232, 1032), 3);
    add_background_object(create_thstone11_3085(7360, 1032), 3);
    add_background_object(create_thstone4_3086(7200, 968), 3);
    add_background_object(create_thstone4_3086(7200, 904), 3);
    add_background_object(create_thstone11_3085(7232, 904), 3);
    add_background_object(create_thstone11_3085(7360, 904), 3);
    add_background_object(create_thstone4_3086(7200, 840), 3);
    add_background_object(create_thstone4_3086(7200, 776), 3);
    add_background_object(create_thstone11_3085(7232, 776), 3);
    add_background_object(create_thstone11_3085(7360, 776), 3);
    add_background_object(create_thstone8_3098(7200, 744), 3);
    add_background_object(create_thstone2_3092(7232, 744), 3);
    add_background_object(create_thstone2_3092(7296, 744), 3);
    add_background_object(create_thstone2_3092(7360, 744), 3);
    add_background_object(create_thstone2_3092(7424, 744), 3);
    add_background_object(create_thstone11_3085(5696, 480), 3);
    add_background_object(create_thstone1_3091(5952, 608), 3);
    add_background_object(create_thstone1_3091(6016, 608), 3);
    add_background_object(create_thstone11_3085(5824, 480), 3);
    add_background_object(create_thstone11_3085(5952, 480), 3);
    add_background_object(create_thstone1_3091(6080, 608), 3);
    add_background_object(create_thstone1_3091(6144, 608), 3);
    add_background_object(create_thstone1_3091(6208, 736), 3);
    add_background_object(create_thstone1_3091(6272, 736), 3);
    add_background_object(create_thstone11_3085(6080, 480), 3);
    add_background_object(create_thstone11_3085(6208, 608), 3);
    add_background_object(create_thstone1_3091(6336, 736), 3);
    add_background_object(create_thstone1_3091(6400, 736), 3);
    add_background_object(create_thstone1_3091(6464, 736), 3);
    add_background_object(create_thstone1_3091(6528, 736), 3);
    add_background_object(create_thstone11_3085(6336, 608), 3);
    add_background_object(create_thstone11_3085(6464, 608), 3);
    add_background_object(create_thstone1_3091(6592, 736), 3);
    add_background_object(create_thstone1_3091(6656, 736), 3);
    add_background_object(create_thstone11_3085(6592, 608), 3);
    add_background_object(create_thstone11_3085(6592, 480), 3);
    add_background_object(create_thstone1_3091(6720, 736), 3);
    add_background_object(create_thstone1_3091(6784, 736), 3);
    add_background_object(create_thstone11_3085(6720, 608), 3);
    add_background_object(create_thstone11_3085(6720, 480), 3);
    add_background_object(create_thstone5_3096(6848, 736), 3);
    add_background_object(create_thstone3_3090(6848, 672), 3);
    add_background_object(create_thstone3_3090(6848, 608), 3);
    add_background_object(create_thstone3_3090(6848, 544), 3);
    add_background_object(create_thstone3_3090(6848, 480), 3);
    add_background_object(create_thstone11_3085(6464, 352), 3);
    add_background_object(create_thstone11_3085(6464, 224), 3);
    add_background_object(create_thstone11_3085(6592, 352), 3);
    add_background_object(create_thstone11_3085(6592, 224), 3);
    add_background_object(create_thstone11_3085(6720, 352), 3);
    add_background_object(create_thstone11_3085(6720, 224), 3);
    add_background_object(create_thstone3_3090(6848, 416), 3);
    add_background_object(create_thstone3_3090(6848, 352), 3);
    add_background_object(create_thstone3_3090(6848, 288), 3);
    add_background_object(create_thstone3_3090(6848, 224), 3);
    add_background_object(create_thstone11_3085(6464, 96), 3);
    add_background_object(create_thstone11_3085(6464, -32), 3);
    add_background_object(create_thstone11_3085(6592, 96), 3);
    add_background_object(create_thstone11_3085(6592, -32), 3);
    add_background_object(create_thstone11_3085(6720, 96), 3);
    add_background_object(create_thstone11_3085(6720, -32), 3);
    add_background_object(create_thstone3_3090(6848, 160), 3);
    add_background_object(create_thstone3_3090(6848, 96), 3);
    add_background_object(create_thstone3_3090(6848, 32), 3);
    add_background_object(create_thstone3_3090(6848, -32), 3);
    add_background_object(create_thback1_3126(7232, 616), 3);
    add_background_object(create_thwood3_3137(7232, 584), 3);
    add_background_object(create_thwood4_3145(7216, 584), 3);
    add_background_object(create_thwood5_3144(7552, 584), 3);
    add_background_object(create_thwood3_3137(7360, 584), 3);
    add_background_object(create_thback2_3125(7360, 616), 3);
    add_background_object(create_thback1_3126(7424, 616), 3);
    add_background_object(create_thwood6_3143(7488, 584), 3);
    add_background_object(create_thstone11_3085(5696, 352), 3);
    add_background_object(create_thstone11_3085(5824, 352), 3);
    add_background_object(create_thstone11_3085(5952, 352), 3);
    add_background_object(create_thstone11_3085(5696, 224), 3);
    add_background_object(create_thstone11_3085(5824, 224), 3);
    add_background_object(create_thstone11_3085(5952, 224), 3);
    add_background_object(create_thstone11_3085(5568, 224), 3);
    add_background_object(create_thstone11_3085(5696, 96), 3);
    add_background_object(create_thstone11_3085(5824, 96), 3);
    add_background_object(create_thstone11_3085(5952, 96), 3);
    add_background_object(create_thstone11_3085(5568, 96), 3);
    add_background_object(create_thstone11_3085(5696, -32), 3);
    add_background_object(create_thstone11_3085(5824, -32), 3);
    add_background_object(create_thstone11_3085(5952, -32), 3);
    add_background_object(create_thstone11_3085(5568, -32), 3);
    add_background_object(create_thstone2_3092(5184, 352), 3);
    add_background_object(create_thwood4_3145(5168, 192), 3);
    add_background_object(create_thwood3_3137(5184, 192), 3);
    add_background_object(create_thwood3_3137(5312, 192), 3);
    add_background_object(create_thstone4_3086(5440, 192), 3);
    add_background_object(create_thstone4_3086(5440, 256), 3);
    add_background_object(create_thstone7_3097(5248, 352), 3);
    add_background_object(create_thstone3_3090(5248, 384), 3);
    add_background_object(create_thstone6_3095(5440, 320), 3);
    add_background_object(create_thstone1_3091(5472, 320), 3);
    add_background_object(create_thstone1_3091(5536, 320), 3);
    add_background_object(create_thstone1_3091(5600, 320), 3);
    add_background_object(create_thstone4_3086(5664, 480), 3);
    add_background_object(create_thstone4_3086(5664, 416), 3);
    add_background_object(create_thstone4_3086(5664, 544), 3);
    add_background_object(create_thstone6_3095(5664, 608), 3);
    add_background_object(create_thstone1_3091(5696, 608), 3);
    add_background_object(create_thstone1_3091(5760, 608), 3);
    add_background_object(create_thstone1_3091(5824, 608), 3);
    add_background_object(create_thstone1_3091(5888, 608), 3);
    add_background_object(create_thwood4_3145(5408, 608), 3);
    add_background_object(create_thwood3_3137(5424, 608), 3);
    add_background_object(create_thwood5_3144(5552, 608), 3);
    add_background_object(create_thwood5_3144(5552, 640), 3);
    add_background_object(create_thwood5_3144(5552, 672), 3);
    add_background_object(create_thwood5_3144(5552, 704), 3);
    add_background_object(create_thwood5_3144(5552, 736), 3);
    add_background_object(create_thwood2_3134(5424, 720), 3);
    add_background_object(create_thwood2_3134(5424, 672), 3);
    add_background_object(create_thwood2_3134(5424, 624), 3);
    add_background_object(create_thwood4_3145(5408, 640), 3);
    add_background_object(create_thwood4_3145(5408, 672), 3);
    add_background_object(create_thwood4_3145(5408, 704), 3);
    add_background_object(create_thwood4_3145(5408, 736), 3);
    add_background_object(create_thstone4_3086(5664, 352), 3);
    add_background_object(create_thwood3_3137(5552, 800), 3);
    add_background_object(create_thstone10_3146(5992, 736), 3);
    add_background_object(create_thstone4_3086(5992, 768), 3);
    add_background_object(create_thstone3_3090(6024, 768), 3);
    add_background_object(create_thstone4_3086(5992, 832), 3);
    add_background_object(create_thstone3_3090(6024, 832), 3);
    add_background_object(create_thstone10_3146(5992, 896), 3);
    add_background_object(create_thwood3_3137(5592, 896), 3);
    add_background_object(create_thwood5_3144(5976, 896), 3);
    add_background_object(create_thwood4_3145(5536, 896), 3);
    add_background_object(create_thstone10_3146(6144, 640), 3);
    add_background_object(create_thstone4_3086(6144, 672), 3);
    add_background_object(create_thstone3_3090(6176, 672), 3);
    add_background_object(create_thstone4_3086(6144, 928), 3);
    add_background_object(create_thstone3_3090(6176, 928), 3);
    add_background_object(create_thstone10_3146(6144, 992), 3);
    add_background_object(create_thstone4_3086(6144, 736), 3);
    add_background_object(create_thstone3_3090(6176, 736), 3);
    add_background_object(create_thstone4_3086(6144, 800), 3);
    add_background_object(create_thstone3_3090(6176, 800), 3);
    add_background_object(create_thstone4_3086(6144, 864), 3);
    add_background_object(create_thstone3_3090(6176, 864), 3);
    add_background_object(create_thstone11_3085(6336, 480), 3);
    add_background_object(create_thstone11_3085(6464, 480), 3);
    add_background_object(create_thstone6_3095(6208, 736), 3);
    add_background_object(create_thstone4_3086(6208, 672), 3);
    add_background_object(create_thstone4_3086(6208, 608), 3);
    add_background_object(create_thstone5_3096(6176, 608), 3);
    add_background_object(create_thstone3_3090(6176, 544), 3);
    add_background_object(create_thstone4_3086(6208, 544), 3);
    add_background_object(create_thstone3_3090(6176, 480), 3);
    add_background_object(create_thstone4_3086(6208, 480), 3);
    add_background_object(create_thstone4_3086(5664, 288), 3);
    add_background_object(create_thstone4_3086(5664, 224), 3);
    add_background_object(create_thstone4_3086(5664, 160), 3);
    add_background_object(create_thstone4_3086(5664, 96), 3);
    add_background_object(create_thstone5_3096(5632, 320), 3);
    add_background_object(create_thstone3_3090(5632, 256), 3);
    add_background_object(create_thstone3_3090(5632, 192), 3);
    add_background_object(create_thstone3_3090(5632, 128), 3);
    add_background_object(create_thstone4_3086(5664, 32), 3);
    add_background_object(create_thstone4_3086(5664, -32), 3);
    add_background_object(create_thstone3_3090(5632, 64), 3);
    add_background_object(create_thstone3_3090(5632, 0), 3);
    add_background_object(create_thstone4_3086(5440, 64), 3);
    add_background_object(create_thstone4_3086(5440, 128), 3);
    add_background_object(create_thstone4_3086(5440, -64), 3);
    add_background_object(create_thstone4_3086(5440, 0), 3);
    add_background_object(create_thstone3_3090(5632, -64), 3);
    add_background_object(create_thstone6_3095(5184, 160), 3);
    add_background_object(create_thstone1_3091(5216, 160), 3);
    add_background_object(create_thstone1_3091(5280, 160), 3);
    add_background_object(create_thstone1_3091(5344, 160), 3);
    add_background_object(create_thstone5_3096(5408, 160), 3);
    add_background_object(create_thstone3_3090(5408, 96), 3);
    add_background_object(create_thstone3_3090(5408, 32), 3);
    add_background_object(create_thstone3_3090(5408, -32), 3);
    add_background_object(create_thstone4_3086(5184, 32), 3);
    add_background_object(create_thstone4_3086(5184, -32), 3);
    add_background_object(create_thstone5_3096(5152, 64), 3);
    add_background_object(create_thstone3_3090(5152, 0), 3);
    add_background_object(create_thstone2_3092(2528, 1064), 3);
    add_background_object(create_thstone7_3097(2560, 1064), 3);
    add_background_object(create_thstone3_3090(2560, 1096), 3);
    add_background_object(create_thstone6_3095(2432, 1128), 3);
    add_background_object(create_thstone1_3091(2464, 1128), 3);
    add_background_object(create_thstone1_3091(2528, 1128), 3);
    add_background_object(create_thstone5_3096(2560, 1128), 3);
    add_background_object(create_thstone2_3092(2464, 1160), 3);
    add_background_object(create_thstone8_3098(2432, 1160), 3);
    add_background_object(create_thstone2_3092(2528, 1160), 3);
    add_background_object(create_thstone6_3095(2432, 1320), 3);
    add_background_object(create_thstone1_3091(2464, 1320), 3);
    add_background_object(create_thstone1_3091(2528, 1320), 3);
    add_background_object(create_thstone2_3092(2592, 1352), 3);
    add_background_object(create_thstone8_3098(2560, 1352), 3);
    add_background_object(create_thstone1_3091(2592, 1320), 3);
    add_background_object(create_thstone2_3092(2592, 1160), 3);
    add_background_object(create_thstone2_3092(2656, 1352), 3);
    add_background_object(create_thstone1_3091(2656, 1320), 3);
    add_background_object(create_thstone2_3092(2656, 1160), 3);
    add_background_object(create_thstone2_3092(2720, 1352), 3);
    add_background_object(create_thstone1_3091(2720, 1320), 3);
    add_background_object(create_thstone2_3092(2720, 1160), 3);
    add_background_object(create_thstone2_3092(2784, 1352), 3);
    add_background_object(create_thstone1_3091(2784, 1320), 3);
    add_background_object(create_thstone2_3092(2784, 1160), 3);
    add_background_object(create_thstone2_3092(2848, 1352), 3);
    add_background_object(create_thstone1_3091(2848, 1320), 3);
    add_background_object(create_thstone2_3092(2848, 1160), 3);
    add_background_object(create_thstone2_3092(2912, 1352), 3);
    add_background_object(create_thstone1_3091(2912, 1320), 3);
    add_background_object(create_thstone2_3092(2912, 1160), 3);
    add_background_object(create_thstone2_3092(2976, 1352), 3);
    add_background_object(create_thstone1_3091(2976, 1320), 3);
    add_background_object(create_thstone2_3092(2976, 1160), 3);
    add_background_object(create_thstone2_3092(3040, 1352), 3);
    add_background_object(create_thstone1_3091(3040, 1320), 3);
    add_background_object(create_thstone2_3092(3040, 1160), 3);
    add_background_object(create_thstone2_3092(3104, 1160), 3);
    add_background_object(create_thstone2_3092(3168, 1160), 3);
    add_background_object(create_thwood4_3145(3216, 1160), 3);
    add_background_object(create_thstone2_3092(3104, 1352), 3);
    add_background_object(create_thstone1_3091(3104, 1320), 3);
    add_background_object(create_thstone2_3092(3168, 1352), 3);
    add_background_object(create_thstone1_3091(3168, 1320), 3);
    add_background_object(create_thwood4_3145(3216, 1320), 3);
    add_background_object(create_thstone2_3092(3232, 1352), 3);
    add_background_object(create_thstone2_3092(3296, 1352), 3);
    add_background_object(create_thstone2_3092(3360, 1352), 3);
    add_background_object(create_thstone2_3092(3424, 1352), 3);
    add_background_object(create_thstone7_3097(3456, 1352), 3);
    add_background_object(create_thstone3_3090(3456, 1384), 3);
    add_background_object(create_thstone3_3090(3456, 1448), 3);
    add_background_object(create_thstone3_3090(3456, 1512), 3);
    add_background_object(create_thstone3_3090(3456, 1576), 3);
    add_background_object(create_thstone3_3090(3456, 1640), 3);
    add_background_object(create_thstone3_3090(3456, 1704), 3);
    add_background_object(create_thstone3_3090(3456, 1768), 3);
    add_background_object(create_thstone8_3098(3488, 1576), 3);
    add_background_object(create_thstone4_3086(3488, 1608), 3);
    add_background_object(create_thstone4_3086(3488, 1672), 3);
    add_background_object(create_thstone4_3086(3488, 1736), 3);
    add_background_object(create_thstone2_3092(3520, 1576), 3);
    add_background_object(create_thstone2_3092(3584, 1576), 3);
    add_background_object(create_thstone2_3092(3648, 1576), 3);
    add_background_object(create_thstone2_3092(3712, 1576), 3);
    add_background_object(create_thstone2_3092(3776, 1576), 3);
    add_background_object(create_thstone2_3092(3840, 1576), 3);
    add_background_object(create_thstone2_3092(3904, 1576), 3);
    add_background_object(create_thstone7_3097(3968, 1576), 3);
    add_background_object(create_thstone3_3090(3968, 1608), 3);
    add_background_object(create_thstone3_3090(3968, 1672), 3);
    add_background_object(create_thstone3_3090(3968, 1736), 3);
    add_background_object(create_thstone7_3097(832, 984), 3);
    add_background_object(create_thstone2_3092(768, 984), 3);
    add_background_object(create_thstone2_3092(704, 984), 3);
    add_background_object(create_thstone2_3092(640, 984), 3);
    add_background_object(create_thstone1_3091(640, 952), 3);
    add_background_object(create_thstone1_3091(704, 952), 3);
    add_background_object(create_thstone1_3091(768, 952), 3);
    add_background_object(create_thstone1_3091(832, 952), 3);
    add_background_object(create_thstone1_3091(896, 952), 3);
    add_background_object(create_thstone1_3091(960, 952), 3);
    add_background_object(create_thstone1_3091(1024, 952), 3);
    add_background_object(create_thstone1_3091(1088, 952), 3);
    add_background_object(create_thstone1_3091(1152, 952), 3);
    add_background_object(create_thstone1_3091(1216, 952), 3);
    add_background_object(create_thstone1_3091(1280, 952), 3);
    add_background_object(create_thstone1_3091(1344, 952), 3);
    add_background_object(create_thstone1_3091(1408, 952), 3);
    add_background_object(create_thstone1_3091(1472, 952), 3);
    add_background_object(create_thstone1_3091(1536, 952), 3);
    add_background_object(create_thstone1_3091(1600, 952), 3);
    add_background_object(create_thstone1_3091(1664, 952), 3);
    add_background_object(create_thstone1_3091(1728, 952), 3);
    add_background_object(create_thstone1_3091(1792, 952), 3);
    add_background_object(create_thstone1_3091(1856, 952), 3);
    add_background_object(create_thstone1_3091(1920, 952), 3);
    add_background_object(create_thstone5_3096(1984, 952), 3);
    add_background_object(create_thstone2_3092(576, 984), 3);
    add_background_object(create_thstone2_3092(512, 984), 3);
    add_background_object(create_thstone1_3091(512, 952), 3);
    add_background_object(create_thstone1_3091(576, 952), 3);
    add_background_object(create_thwood3_3137(5720, 896), 3);
    add_background_object(create_thwood3_3137(5848, 896), 3);
    add_background_object(create_thwood6_3143(5552, 896), 3);
    add_background_object(create_thwood2_3134(5552, 816), 3);
    add_background_object(create_thwood4_3145(5536, 832), 3);
    add_background_object(create_thwood2_3134(5552, 864), 3);
    add_background_object(create_thwood4_3145(5536, 864), 3);
    add_background_object(create_thwood5_3144(5680, 832), 3);
    add_background_object(create_thwood5_3144(5680, 864), 3);
    add_background_object(create_thwood6_3143(6280, 880), 3);
    add_background_object(create_thwood4_3145(6264, 880), 3);
    add_background_object(create_thwood5_3144(6344, 880), 3);
    add_background_object(create_thwood4_3145(6264, 848), 3);
    add_background_object(create_thwood5_3144(6280, 848), 3);
    add_background_object(create_thwood5_3144(6664, 928), 3);
    add_background_object(create_thwood4_3145(6456, 928), 3);
    add_background_object(create_thwood3_3137(6472, 928), 3);
    add_background_object(create_thwood6_3143(6600, 928), 3);
    add_background_object(create_thstone1_3091(5184, 416), 3);
    add_background_object(create_thstone5_3096(5248, 416), 3);
    add_background_object(create_thstone1_3091(5056, 416), 3);
    add_background_object(create_thstone1_3091(5120, 416), 3);
    add_background_object(create_thstone6_3095(5024, 416), 3);
    add_background_object(create_thstone8_3098(5024, 448), 3);
    add_background_object(create_thstone2_3092(5056, 448), 3);
    add_background_object(create_thstone2_3092(5120, 448), 3);
    add_background_object(create_thstone2_3092(5184, 448), 3);
    add_background_object(create_thstone2_3092(5248, 448), 3);
    add_background_object(create_thstone2_3092(5312, 448), 3);
    add_background_object(create_thstone3_3090(5376, 672), 3);
    add_background_object(create_thstone5_3096(5376, 736), 3);
    add_background_object(create_thstone3_3090(5376, 608), 3);
    add_background_object(create_thstone3_3090(5376, 544), 3);
    add_background_object(create_thstone3_3090(5376, 480), 3);
    add_background_object(create_thstone7_3097(5376, 448), 3);
    add_background_object(create_thstone7_3097(7488, 744), 3);
    add_background_object(create_thstone3_3090(7488, 776), 3);
    add_background_object(create_thstone3_3090(7488, 840), 3);
    add_background_object(create_thtire4_3138(7792, 904), 3);
    add_background_object(create_thtire3_3140(7792, 936), 3);
    add_background_object(create_thtire3_3140(7696, 840), 3);
    add_background_object(create_thwood2_3134(7520, 744), 3);
    add_background_object(create_thwood2_3134(7520, 792), 3);
    add_background_object(create_thwood5_3144(7648, 744), 3);
    add_background_object(create_thwood5_3144(7648, 776), 3);
    add_background_object(create_thwood5_3144(7648, 808), 3);
    add_background_object(create_thwood2_3134(7616, 840), 3);
    add_background_object(create_thwood2_3134(7616, 888), 3);
    add_background_object(create_thwood5_3144(7744, 840), 3);
    add_background_object(create_thwood5_3144(7744, 872), 3);
    add_background_object(create_thwood5_3144(7744, 904), 3);
    add_background_object(create_thwood2_3134(7520, 840), 3);
    add_background_object(create_thwood2_3134(7520, 888), 3);
    add_background_object(create_thwood2_3134(7520, 936), 3);
    add_background_object(create_thwood2_3134(7520, 984), 3);
    add_background_object(create_thstone3_3090(7488, 904), 3);
    add_background_object(create_thstone3_3090(7488, 968), 3);
    add_background_object(create_thstone3_3090(7488, 1032), 3);
    add_background_object(create_thstone3_3090(7488, 1096), 3);
    add_background_object(create_thstone3_3090(7488, 1160), 3);
    add_background_object(create_thstone3_3090(7488, 1224), 3);
    add_background_object(create_thwood2_3134(7648, 936), 3);
    add_background_object(create_thwood2_3134(7648, 984), 3);
    add_background_object(create_thwood5_3144(7840, 936), 3);
    add_background_object(create_thwood5_3144(7840, 968), 3);
    add_background_object(create_thwood5_3144(7840, 1000), 3);
    add_background_object(create_thwood2_3134(7712, 936), 3);
    add_background_object(create_thwood2_3134(7712, 984), 3);
    add_background_object(create_thtire3_3140(7888, 1032), 3);
    add_background_object(create_thwood2_3134(7520, 1032), 3);
    add_background_object(create_thwood2_3134(7648, 1032), 3);
    add_background_object(create_thwood2_3134(7776, 1032), 3);
    add_background_object(create_thwood5_3144(7936, 1032), 3);
    add_background_object(create_thwood5_3144(7936, 1064), 3);
    add_background_object(create_thwood5_3144(7936, 1096), 3);
    add_background_object(create_thwood2_3134(7520, 1080), 3);
    add_background_object(create_thwood2_3134(7648, 1080), 3);
    add_background_object(create_thwood2_3134(7776, 1080), 3);
    add_background_object(create_thwood2_3134(7808, 1032), 3);
    add_background_object(create_thwood2_3134(7808, 1080), 3);
    add_background_object(create_thwood2_3134(7520, 1128), 3);
    add_background_object(create_thwood2_3134(7648, 1128), 3);
    add_background_object(create_thwood2_3134(7776, 1128), 3);
    add_background_object(create_thwood2_3134(7520, 1176), 3);
    add_background_object(create_thwood2_3134(7648, 1176), 3);
    add_background_object(create_thwood2_3134(7776, 1176), 3);
    add_background_object(create_thwood2_3134(7904, 1128), 3);
    add_background_object(create_thwood2_3134(7904, 1176), 3);
    add_background_object(create_thwood2_3134(8032, 1128), 3);
    add_background_object(create_thwood2_3134(8032, 1176), 3);
    add_background_object(create_thwood2_3134(7520, 1224), 3);
    add_background_object(create_thwood2_3134(7648, 1224), 3);
    add_background_object(create_thwood2_3134(7776, 1224), 3);
    add_background_object(create_thwood2_3134(7904, 1224), 3);
    add_background_object(create_thwood2_3134(8032, 1224), 3);
    add_background_object(create_thstone3_3090(7488, 1288), 3);
    add_background_object(create_thstone3_3090(7488, 1352), 3);
    add_background_object(create_thstone3_3090(7488, 1416), 3);
    add_background_object(create_thstone3_3090(7488, 1480), 3);
    add_background_object(create_thstone3_3090(7488, 1544), 3);
    add_background_object(create_thstone3_3090(7488, 1608), 3);
    add_background_object(create_thstone3_3090(7488, 1672), 3);
    add_background_object(create_thstone3_3090(7488, 1736), 3);
    add_background_object(create_thwood2_3134(7520, 1272), 3);
    add_background_object(create_thwood2_3134(7648, 1272), 3);
    add_background_object(create_thwood2_3134(7776, 1272), 3);
    add_background_object(create_thwood2_3134(7520, 1320), 3);
    add_background_object(create_thwood2_3134(7648, 1320), 3);
    add_background_object(create_thwood2_3134(7776, 1320), 3);
    add_background_object(create_thwood2_3134(7904, 1272), 3);
    add_background_object(create_thwood2_3134(7904, 1320), 3);
    add_background_object(create_thwood2_3134(8032, 1272), 3);
    add_background_object(create_thwood2_3134(8032, 1320), 3);
    add_background_object(create_thwood2_3134(8160, 1128), 3);
    add_background_object(create_thwood2_3134(8160, 1176), 3);
    add_background_object(create_thwood2_3134(8160, 1224), 3);
    add_background_object(create_thwood2_3134(8160, 1272), 3);
    add_background_object(create_thwood2_3134(8160, 1320), 3);
    add_background_object(create_thwood2_3134(8288, 1128), 3);
    add_background_object(create_thwood2_3134(8288, 1176), 3);
    add_background_object(create_thwood2_3134(8288, 1224), 3);
    add_background_object(create_thwood2_3134(8288, 1272), 3);
    add_background_object(create_thwood2_3134(8288, 1320), 3);
    add_background_object(create_thstone10_3146(8288, 1096), 3);
    add_background_object(create_thstone4_3086(8288, 1032), 3);
    add_background_object(create_thstone4_3086(8288, 968), 3);
    add_background_object(create_thstone4_3086(8288, 904), 3);
    add_background_object(create_thstone4_3086(8288, 840), 3);
    add_background_object(create_thstone10_3146(8288, 808), 3);
    add_background_object(create_thstone10_3146(8352, 1096), 3);
    add_background_object(create_thstone3_3090(8384, 1032), 3);
    add_background_object(create_thstone3_3090(8384, 968), 3);
    add_background_object(create_thstone3_3090(8384, 904), 3);
    add_background_object(create_thstone3_3090(8384, 840), 3);
    add_background_object(create_thstone10_3146(8352, 808), 3);
    add_background_object(create_thwood2_3134(8416, 1128), 3);
    add_background_object(create_thwood2_3134(8416, 1176), 3);
    add_background_object(create_thwood2_3134(8416, 1224), 3);
    add_background_object(create_thwood2_3134(8416, 1272), 3);
    add_background_object(create_thwood2_3134(8416, 1320), 3);
    add_background_object(create_thwood2_3134(8544, 1128), 3);
    add_background_object(create_thwood2_3134(8544, 1176), 3);
    add_background_object(create_thwood2_3134(8544, 1224), 3);
    add_background_object(create_thwood2_3134(8544, 1272), 3);
    add_background_object(create_thwood2_3134(8544, 1320), 3);
    add_background_object(create_thwood2_3134(8672, 1128), 3);
    add_background_object(create_thwood2_3134(8672, 1176), 3);
    add_background_object(create_thwood2_3134(8672, 1224), 3);
    add_background_object(create_thwood2_3134(8672, 1272), 3);
    add_background_object(create_thwood2_3134(8672, 1320), 3);
    add_background_object(create_thwood2_3134(8800, 1128), 3);
    add_background_object(create_thwood2_3134(8800, 1176), 3);
    add_background_object(create_thwood2_3134(8800, 1224), 3);
    add_background_object(create_thwood2_3134(8800, 1272), 3);
    add_background_object(create_thwood2_3134(8800, 1320), 3);
    add_background_object(create_thtire3_3140(8608, 744), 3);
    add_background_object(create_thstone11_3085(8608, 968), 3);
    add_background_object(create_thstone11_3085(8608, 840), 3);
    add_background_object(create_thstone10_3146(8608, 1096), 3);
    add_background_object(create_thstone4_3086(8608, 1032), 3);
    add_background_object(create_thstone4_3086(8608, 968), 3);
    add_background_object(create_thstone4_3086(8608, 904), 3);
    add_background_object(create_thstone4_3086(8608, 840), 3);
    add_background_object(create_thstone10_3146(8608, 808), 3);
    add_background_object(create_thstone10_3146(8672, 1096), 3);
    add_background_object(create_thstone3_3090(8704, 1032), 3);
    add_background_object(create_thstone3_3090(8704, 968), 3);
    add_background_object(create_thstone3_3090(8704, 904), 3);
    add_background_object(create_thstone3_3090(8704, 840), 3);
    add_background_object(create_thstone10_3146(8672, 808), 3);
    add_background_object(create_thwood2_3134(8752, 1080), 3);
    add_background_object(create_thwood4_3145(8736, 1096), 3);
    add_background_object(create_thwood2_3134(8752, 1032), 3);
    add_background_object(create_thwood2_3134(8752, 984), 3);
    add_background_object(create_thwood2_3134(8752, 936), 3);
    add_background_object(create_thwood4_3145(8736, 1064), 3);
    add_background_object(create_thwood4_3145(8736, 1032), 3);
    add_background_object(create_thwood4_3145(8736, 1000), 3);
    add_background_object(create_thwood4_3145(8736, 968), 3);
    add_background_object(create_thwood4_3145(8736, 936), 3);
    add_background_object(create_thwood2_3134(8880, 1080), 3);
    add_background_object(create_thwood2_3134(8880, 1032), 3);
    add_background_object(create_thwood2_3134(8880, 984), 3);
    add_background_object(create_thwood2_3134(8880, 936), 3);
    add_background_object(create_thwood2_3134(8848, 688), 3);
    add_background_object(create_thwood4_3145(8832, 720), 3);
    add_background_object(create_thwood4_3145(8832, 688), 3);
    add_background_object(create_thwood2_3134(8976, 688), 3);
    add_background_object(create_thwood5_3144(9104, 688), 3);
    add_background_object(create_thwood5_3144(9104, 720), 3);
    add_background_object(create_thwood2_3134(9008, 1080), 3);
    add_background_object(create_thwood2_3134(9008, 1032), 3);
    add_background_object(create_thwood2_3134(9008, 984), 3);
    add_background_object(create_thwood2_3134(9008, 936), 3);
    add_background_object(create_thwood5_3144(9136, 936), 3);
    add_background_object(create_thwood5_3144(9136, 968), 3);
    add_background_object(create_thwood5_3144(9136, 1000), 3);
    add_background_object(create_thwood5_3144(9136, 1032), 3);
    add_background_object(create_thwood5_3144(9136, 1064), 3);
    add_background_object(create_thwood5_3144(9136, 1096), 3);
    add_background_object(create_thwood2_3134(8928, 1224), 3);
    add_background_object(create_thwood2_3134(8928, 1272), 3);
    add_background_object(create_thwood2_3134(8928, 1320), 3);
    add_background_object(create_thwood2_3134(9056, 1128), 3);
    add_background_object(create_thwood2_3134(9056, 1176), 3);
    add_background_object(create_thwood2_3134(9056, 1224), 3);
    add_background_object(create_thwood2_3134(9056, 1272), 3);
    add_background_object(create_thwood2_3134(9056, 1320), 3);
    add_background_object(create_thwood2_3134(9184, 1128), 3);
    add_background_object(create_thwood2_3134(9184, 1176), 3);
    add_background_object(create_thwood2_3134(9184, 1224), 3);
    add_background_object(create_thwood2_3134(9184, 1272), 3);
    add_background_object(create_thwood2_3134(9184, 1320), 3);
    add_background_object(create_rydiagonalpipe1_3088(9216, 808), 3);
    add_background_object(create_rydiagonalpipe1_3088(9152, 872), 3);
    add_background_object(create_rydiagonalpipe1_3088(9088, 936), 3);
    add_background_object(create_rydiagonalpipe1_3088(9024, 1000), 3);
    add_background_object(create_rydiagonalpipe1_3088(8960, 1064), 3);
    add_background_object(create_rydiagonalpipe1_3088(9408, 616), 3);
    add_background_object(create_rydiagonalpipe1_3088(9344, 680), 3);
    add_background_object(create_rydiagonalpipe1_3088(9280, 744), 3);
    add_background_object(create_rydiagonalpipe1_3088(9472, 552), 3);
    add_background_object(create_thwood2_3134(8928, 1176), 3);
    add_background_object(create_thwood2_3134(8928, 1128), 3);
    add_background_object(create_thstone4_3086(9536, 488), 3);
    add_background_object(create_thstone4_3086(9536, 552), 3);
    add_background_object(create_thstone10_3146(9536, 456), 3);
    add_background_object(create_thstone3_3090(9568, 488), 3);
    add_background_object(create_thstone3_3090(9568, 552), 3);
    add_background_object(create_thwood2_3134(9312, 1128), 3);
    add_background_object(create_thwood2_3134(9312, 1176), 3);
    add_background_object(create_thwood2_3134(9312, 1224), 3);
    add_background_object(create_thwood2_3134(9312, 1272), 3);
    add_background_object(create_thwood2_3134(9312, 1320), 3);
    add_background_object(create_thwood2_3134(9440, 1128), 3);
    add_background_object(create_thwood2_3134(9440, 1176), 3);
    add_background_object(create_thwood2_3134(9440, 1224), 3);
    add_background_object(create_thwood2_3134(9440, 1272), 3);
    add_background_object(create_thwood2_3134(9440, 1320), 3);
    add_background_object(create_thwood2_3134(9568, 1176), 3);
    add_background_object(create_thwood2_3134(9568, 1224), 3);
    add_background_object(create_thwood2_3134(9568, 1272), 3);
    add_background_object(create_thwood2_3134(9568, 1320), 3);
    add_background_object(create_thstone4_3086(10112, 512), 3);
    add_background_object(create_thstone4_3086(10112, 576), 3);
    add_background_object(create_thstone10_3146(10112, 640), 3);
    add_background_object(create_thstone10_3146(10112, 480), 3);
    add_background_object(create_thstone3_3090(10144, 512), 3);
    add_background_object(create_thstone3_3090(10144, 576), 3);
    add_background_object(create_thwood3_3137(9776, 704), 3);
    add_background_object(create_thwood3_3137(10032, 704), 3);
    add_background_object(create_thwood2_3134(9776, 672), 3);
    add_background_object(create_thwood4_3145(9760, 704), 3);
    add_background_object(create_thwood4_3145(9760, 672), 3);
    add_background_object(create_thwood2_3134(10032, 672), 3);
    add_background_object(create_thwood5_3144(10160, 672), 3);
    add_background_object(create_thwood5_3144(10160, 704), 3);
    add_background_object(create_thstone4_3086(10112, 352), 3);
    add_background_object(create_thstone4_3086(10112, 416), 3);
    add_background_object(create_thstone10_3146(10112, 320), 3);
    add_background_object(create_thstone3_3090(10144, 352), 3);
    add_background_object(create_thstone3_3090(10144, 416), 3);
    add_background_object(create_thstone4_3086(10112, 192), 3);
    add_background_object(create_thstone4_3086(10112, 256), 3);
    add_background_object(create_thstone10_3146(10112, 160), 3);
    add_background_object(create_thstone3_3090(10144, 192), 3);
    add_background_object(create_thstone3_3090(10144, 256), 3);
    add_background_object(create_thstone4_3086(10112, 32), 3);
    add_background_object(create_thstone4_3086(10112, 96), 3);
    add_background_object(create_thstone10_3146(10112, 0), 3);
    add_background_object(create_thstone3_3090(10144, 32), 3);
    add_background_object(create_thstone3_3090(10144, 96), 3);
    add_background_object(create_thwood2_3134(9696, 1176), 3);
    add_background_object(create_thwood2_3134(9696, 1224), 3);
    add_background_object(create_thwood2_3134(9696, 1272), 3);
    add_background_object(create_thwood2_3134(9696, 1320), 3);
    add_background_object(create_thwood2_3134(9824, 1128), 3);
    add_background_object(create_thwood2_3134(9824, 1176), 3);
    add_background_object(create_thwood2_3134(9824, 1224), 3);
    add_background_object(create_thwood2_3134(9824, 1272), 3);
    add_background_object(create_thwood2_3134(9824, 1320), 3);
    add_background_object(create_thwood2_3134(9824, 1032), 3);
    add_background_object(create_thwood2_3134(9824, 1080), 3);
    add_background_object(create_thwood4_3145(9808, 1096), 3);
    add_background_object(create_thwood4_3145(9808, 1064), 3);
    add_background_object(create_thwood4_3145(9808, 1032), 3);
    add_background_object(create_thtotemback_3087(10072, 968), 3);
    add_background_object(create_thtotemback_3087(10072, 1000), 3);
    add_background_object(create_thtotemback_3087(10016, 968), 3);
    add_background_object(create_thtotemback_3087(10016, 1000), 3);
    add_background_object(create_thtotemback_3087(9960, 968), 3);
    add_background_object(create_thtotemback_3087(9960, 1000), 3);
    add_background_object(create_thtotemback_3087(9904, 968), 3);
    add_background_object(create_thtotemback_3087(9904, 1000), 3);
    add_background_object(create_thtotemback_3087(9320, 1064), 3);
    add_background_object(create_thtotemback_3087(9320, 1096), 3);
    add_background_object(create_thtotemback_3087(9264, 1064), 3);
    add_background_object(create_thtotemback_3087(9264, 1096), 3);
    add_background_object(create_thtotemback_3087(9208, 1064), 3);
    add_background_object(create_thtotemback_3087(9208, 1096), 3);
    add_background_object(create_thtotemback_3087(9152, 1064), 3);
    add_background_object(create_thtotemback_3087(9152, 1096), 3);
    add_background_object(create_thwood2_3134(9952, 1128), 3);
    add_background_object(create_thwood2_3134(9952, 1176), 3);
    add_background_object(create_thwood2_3134(9952, 1224), 3);
    add_background_object(create_thwood2_3134(9952, 1272), 3);
    add_background_object(create_thwood2_3134(9952, 1320), 3);
    add_background_object(create_thwood2_3134(9952, 1032), 3);
    add_background_object(create_thwood2_3134(9952, 1080), 3);
    add_background_object(create_thwood2_3134(10080, 1128), 3);
    add_background_object(create_thwood2_3134(10080, 1176), 3);
    add_background_object(create_thwood2_3134(10080, 1224), 3);
    add_background_object(create_thwood2_3134(10080, 1272), 3);
    add_background_object(create_thwood2_3134(10080, 1320), 3);
    add_background_object(create_thwood2_3134(10080, 1032), 3);
    add_background_object(create_thwood2_3134(10080, 1080), 3);
    add_background_object(create_thwood3_3137(9904, 704), 3);
    add_background_object(create_thwood2_3134(9904, 672), 3);
    add_background_object(create_thstone6_3095(9856, 448), 3);
    add_background_object(create_thstone5_3096(10080, 448), 3);
    add_background_object(create_thstone1_3091(9888, 448), 3);
    add_background_object(create_thstone1_3091(9952, 448), 3);
    add_background_object(create_thstone1_3091(10016, 448), 3);
    add_background_object(create_thstone11_3085(9856, 320), 3);
    add_background_object(create_thstone11_3085(9984, 320), 3);
    add_background_object(create_thstone11_3085(9856, 192), 3);
    add_background_object(create_thstone11_3085(9984, 192), 3);
    add_background_object(create_thstone11_3085(9856, 64), 3);
    add_background_object(create_thstone11_3085(9984, 64), 3);
    add_background_object(create_thstone3_3090(10080, 384), 3);
    add_background_object(create_thstone4_3086(9856, 384), 3);
    add_background_object(create_thstone3_3090(10080, 320), 3);
    add_background_object(create_thstone4_3086(9856, 320), 3);
    add_background_object(create_thstone3_3090(10080, 256), 3);
    add_background_object(create_thstone4_3086(9856, 256), 3);
    add_background_object(create_thstone3_3090(10080, 192), 3);
    add_background_object(create_thstone4_3086(9856, 192), 3);
    add_background_object(create_thstone3_3090(10080, 128), 3);
    add_background_object(create_thstone4_3086(9856, 128), 3);
    add_background_object(create_thstone3_3090(10080, 64), 3);
    add_background_object(create_thstone4_3086(9856, 64), 3);
    add_background_object(create_thwood6_3143(9760, 1128), 3);
    add_background_object(create_thwood4_3145(9744, 1128), 3);
    add_background_object(create_thwood5_3144(9568, 1128), 3);
    add_background_object(create_thwood3_3137(9568, 1144), 3);
    add_background_object(create_thwood3_3137(9696, 1144), 3);
    add_background_object(create_thwood5_3144(10208, 1032), 3);
    add_background_object(create_thwood5_3144(10208, 1064), 3);
    add_background_object(create_thwood5_3144(10208, 1096), 3);
    add_background_object(create_thwood5_3144(10336, 1128), 3);
    add_background_object(create_thwood2_3134(10208, 1224), 3);
    add_background_object(create_thwood2_3134(10208, 1272), 3);
    add_background_object(create_thwood2_3134(10208, 1320), 3);
    add_background_object(create_thwood5_3144(10336, 1160), 3);
    add_background_object(create_thwood5_3144(10336, 1192), 3);
    add_background_object(create_thwood2_3134(9952, 1368), 3);
    add_background_object(create_thwood2_3134(9952, 1416), 3);
    add_background_object(create_thwood2_3134(9952, 1464), 3);
    add_background_object(create_thwood2_3134(10080, 1368), 3);
    add_background_object(create_thwood2_3134(10080, 1416), 3);
    add_background_object(create_thwood2_3134(10080, 1464), 3);
    add_background_object(create_thwood2_3134(10208, 1368), 3);
    add_background_object(create_thwood2_3134(10208, 1416), 3);
    add_background_object(create_thwood2_3134(10208, 1464), 3);
    add_background_object(create_thwood2_3134(10336, 1224), 3);
    add_background_object(create_thwood2_3134(10336, 1272), 3);
    add_background_object(create_thwood2_3134(10336, 1320), 3);
    add_background_object(create_thwood2_3134(10464, 1224), 3);
    add_background_object(create_thwood2_3134(10464, 1272), 3);
    add_background_object(create_thwood2_3134(10464, 1320), 3);
    add_background_object(create_thwood2_3134(10592, 1224), 3);
    add_background_object(create_thwood2_3134(10592, 1272), 3);
    add_background_object(create_thwood2_3134(10592, 1320), 3);
    add_background_object(create_thwood2_3134(10336, 1368), 3);
    add_background_object(create_thwood2_3134(10336, 1416), 3);
    add_background_object(create_thwood2_3134(10336, 1464), 3);
    add_background_object(create_thwood2_3134(10464, 1368), 3);
    add_background_object(create_thwood2_3134(10464, 1416), 3);
    add_background_object(create_thwood2_3134(10464, 1464), 3);
    add_background_object(create_thwood2_3134(10592, 1368), 3);
    add_background_object(create_thwood2_3134(10592, 1416), 3);
    add_background_object(create_thwood2_3134(10592, 1464), 3);
    add_background_object(create_thhandlebar_3148(9792, 736), 3);
    add_background_object(create_thhandlebar_3148(9896, 736), 3);
    add_background_object(create_thhandlebar_3148(10000, 736), 3);
    add_background_object(create_thhandlebar_3148(10104, 736), 3);
    add_background_object(create_thwood2_3134(10208, 1128), 3);
    add_background_object(create_thwood2_3134(10208, 1176), 3);
    add_background_object(create_thtire1_3136(10224, 1096), 3);
    add_background_object(create_thtire1_3136(10224, 1064), 3);
    add_background_object(create_thtire1_3136(9744, 1096), 3);
    add_background_object(create_thtire1_3136(9744, 1064), 3);
    add_background_object(create_thtire1_3136(9744, 1032), 3);
    add_background_object(create_thstone11_3085(8080, 840), 3);
    add_background_object(create_thstone11_3085(8080, 584), 3);
    add_background_object(create_thstone10_3146(8080, 968), 3);
    add_background_object(create_thstone4_3086(8080, 904), 3);
    add_background_object(create_thstone4_3086(8080, 840), 3);
    add_background_object(create_thstone4_3086(8080, 648), 3);
    add_background_object(create_thstone4_3086(8080, 584), 3);
    add_background_object(create_thstone10_3146(8080, 552), 3);
    add_background_object(create_thstone10_3146(8144, 968), 3);
    add_background_object(create_thstone3_3090(8176, 904), 3);
    add_background_object(create_thstone3_3090(8176, 840), 3);
    add_background_object(create_thstone3_3090(8176, 648), 3);
    add_background_object(create_thstone3_3090(8176, 584), 3);
    add_background_object(create_thstone10_3146(8144, 552), 3);
    add_background_object(create_thstone11_3085(8080, 712), 3);
    add_background_object(create_thstone4_3086(8080, 776), 3);
    add_background_object(create_thstone4_3086(8080, 712), 3);
    add_background_object(create_thstone3_3090(8176, 776), 3);
    add_background_object(create_thstone3_3090(8176, 712), 3);
    add_background_object(create_thstone6_3095(6880, 480), 3);
    add_background_object(create_thstone4_3086(6880, 416), 3);
    add_background_object(create_thstone4_3086(6880, 352), 3);
    add_background_object(create_thstone11_3085(6912, 352), 3);
    add_background_object(create_thstone4_3086(6880, 288), 3);
    add_background_object(create_thstone4_3086(6880, 224), 3);
    add_background_object(create_thstone11_3085(6912, 224), 3);
    add_background_object(create_thstone4_3086(6880, 160), 3);
    add_background_object(create_thstone4_3086(6880, 96), 3);
    add_background_object(create_thstone11_3085(6912, 96), 3);
    add_background_object(create_thstone4_3086(6880, 32), 3);
    add_background_object(create_thstone4_3086(6880, -32), 3);
    add_background_object(create_thstone11_3085(6912, -32), 3);
    add_background_object(create_thstone1_3091(6912, 480), 3);
    add_background_object(create_thstone1_3091(6976, 480), 3);
    add_background_object(create_thstone11_3085(7040, 352), 3);
    add_background_object(create_thstone11_3085(7040, 224), 3);
    add_background_object(create_thstone11_3085(7040, 96), 3);
    add_background_object(create_thstone11_3085(7040, -32), 3);
    add_background_object(create_thstone1_3091(7040, 480), 3);
    add_background_object(create_thstone1_3091(7104, 480), 3);
    add_background_object(create_thstone11_3085(7168, 352), 3);
    add_background_object(create_thstone11_3085(7168, 224), 3);
    add_background_object(create_thstone11_3085(7168, 96), 3);
    add_background_object(create_thstone11_3085(7168, -32), 3);
    add_background_object(create_thstone1_3091(7168, 480), 3);
    add_background_object(create_thstone1_3091(7232, 480), 3);
    add_background_object(create_thstone11_3085(7296, 352), 3);
    add_background_object(create_thstone11_3085(7296, 224), 3);
    add_background_object(create_thstone11_3085(7296, 96), 3);
    add_background_object(create_thstone11_3085(7296, -32), 3);
    add_background_object(create_thstone1_3091(7296, 480), 3);
    add_background_object(create_thstone1_3091(7360, 480), 3);
    add_background_object(create_thstone11_3085(7424, 352), 3);
    add_background_object(create_thstone11_3085(7424, 224), 3);
    add_background_object(create_thstone11_3085(7424, 96), 3);
    add_background_object(create_thstone11_3085(7424, -32), 3);
    add_background_object(create_thstone1_3091(7424, 480), 3);
    add_background_object(create_thstone1_3091(7488, 480), 3);
    add_background_object(create_thstone11_3085(7552, 352), 3);
    add_background_object(create_thstone11_3085(7552, 224), 3);
    add_background_object(create_thstone11_3085(7552, 96), 3);
    add_background_object(create_thstone11_3085(7552, -32), 3);
    add_background_object(create_thstone1_3091(7552, 480), 3);
    add_background_object(create_thstone1_3091(7616, 480), 3);
    add_background_object(create_thstone11_3085(7680, 352), 3);
    add_background_object(create_thstone11_3085(7680, 224), 3);
    add_background_object(create_thstone11_3085(7680, 96), 3);
    add_background_object(create_thstone11_3085(7680, -32), 3);
    add_background_object(create_thstone1_3091(7680, 480), 3);
    add_background_object(create_thstone1_3091(7744, 480), 3);
    add_background_object(create_thstone11_3085(7808, 352), 3);
    add_background_object(create_thstone11_3085(7808, 224), 3);
    add_background_object(create_thstone11_3085(7808, 96), 3);
    add_background_object(create_thstone11_3085(7808, -32), 3);
    add_background_object(create_thstone1_3091(7808, 480), 3);
    add_background_object(create_thstone1_3091(7872, 480), 3);
    add_background_object(create_thstone11_3085(7936, 352), 3);
    add_background_object(create_thstone11_3085(7936, 224), 3);
    add_background_object(create_thstone11_3085(7936, 96), 3);
    add_background_object(create_thstone11_3085(7936, -32), 3);
    add_background_object(create_thstone1_3091(7936, 480), 3);
    add_background_object(create_thstone1_3091(8000, 480), 3);
    add_background_object(create_thstone11_3085(8064, 352), 3);
    add_background_object(create_thstone11_3085(8064, 224), 3);
    add_background_object(create_thstone11_3085(8064, 96), 3);
    add_background_object(create_thstone11_3085(8064, -32), 3);
    add_background_object(create_thstone1_3091(8064, 480), 3);
    add_background_object(create_thstone1_3091(8128, 480), 3);
    add_background_object(create_thstone11_3085(8192, 352), 3);
    add_background_object(create_thstone11_3085(8192, 224), 3);
    add_background_object(create_thstone11_3085(8192, 96), 3);
    add_background_object(create_thstone11_3085(8192, -32), 3);
    add_background_object(create_thstone1_3091(8192, 480), 3);
    add_background_object(create_thstone1_3091(8256, 480), 3);
    add_background_object(create_thstone11_3085(8320, 352), 3);
    add_background_object(create_thstone11_3085(8320, 224), 3);
    add_background_object(create_thstone11_3085(8320, 96), 3);
    add_background_object(create_thstone11_3085(8320, -32), 3);
    add_background_object(create_thstone1_3091(8320, 480), 3);
    add_background_object(create_thstone1_3091(8384, 480), 3);
    add_background_object(create_thstone11_3085(8448, 352), 3);
    add_background_object(create_thstone11_3085(8448, 224), 3);
    add_background_object(create_thstone11_3085(8448, 96), 3);
    add_background_object(create_thstone11_3085(8448, -32), 3);
    add_background_object(create_thstone1_3091(8448, 480), 3);
    add_background_object(create_thstone1_3091(8512, 480), 3);
    add_background_object(create_thstone11_3085(8576, 352), 3);
    add_background_object(create_thstone11_3085(8576, 224), 3);
    add_background_object(create_thstone11_3085(8576, 96), 3);
    add_background_object(create_thstone11_3085(8576, -32), 3);
    add_background_object(create_thstone1_3091(8576, 480), 3);
    add_background_object(create_thstone1_3091(8640, 480), 3);
    add_background_object(create_thstone11_3085(8704, 352), 3);
    add_background_object(create_thstone11_3085(8704, 224), 3);
    add_background_object(create_thstone11_3085(8704, 96), 3);
    add_background_object(create_thstone11_3085(8704, -32), 3);
    add_background_object(create_thstone1_3091(8704, 480), 3);
    add_background_object(create_thstone1_3091(8768, 480), 3);
    add_background_object(create_thstone11_3085(8832, 352), 3);
    add_background_object(create_thstone11_3085(8832, 224), 3);
    add_background_object(create_thstone11_3085(8832, 96), 3);
    add_background_object(create_thstone11_3085(8832, -32), 3);
    add_background_object(create_thstone1_3091(8832, 480), 3);
    add_background_object(create_thstone1_3091(8896, 480), 3);
    add_background_object(create_thstone11_3085(8960, 352), 3);
    add_background_object(create_thstone11_3085(8960, 224), 3);
    add_background_object(create_thstone11_3085(8960, 96), 3);
    add_background_object(create_thstone11_3085(8960, -32), 3);
    add_background_object(create_thstone1_3091(8960, 480), 3);
    add_background_object(create_thstone1_3091(9024, 480), 3);
    add_background_object(create_thstone11_3085(9088, 352), 3);
    add_background_object(create_thstone11_3085(9088, 224), 3);
    add_background_object(create_thstone11_3085(9088, 96), 3);
    add_background_object(create_thstone11_3085(9088, -32), 3);
    add_background_object(create_thstone1_3091(9088, 480), 3);
    add_background_object(create_thstone1_3091(9152, 480), 3);
    add_background_object(create_thstone5_3096(9216, 480), 3);
    add_background_object(create_thstone3_3090(9216, 416), 3);
    add_background_object(create_thstone3_3090(9216, 352), 3);
    add_background_object(create_thstone3_3090(9216, 288), 3);
    add_background_object(create_thstone3_3090(9216, 224), 3);
    add_background_object(create_thstone3_3090(9216, 160), 3);
    add_background_object(create_thstone3_3090(9216, 96), 3);
    add_background_object(create_thstone3_3090(9216, 32), 3);
    add_background_object(create_thstone3_3090(9216, -32), 3);
    add_background_object(create_thstone11_3085(9280, 128), 3);
    add_background_object(create_thstone4_3086(9248, 192), 3);
    add_background_object(create_thstone4_3086(9248, 128), 3);
    add_background_object(create_thstone6_3095(9248, 256), 3);
    add_background_object(create_thstone1_3091(9280, 256), 3);
    add_background_object(create_thstone1_3091(9344, 256), 3);
    add_background_object(create_thstone11_3085(9280, 0), 3);
    add_background_object(create_thstone4_3086(9248, 64), 3);
    add_background_object(create_thstone4_3086(9248, 0), 3);
    add_background_object(create_thstone11_3085(9408, 128), 3);
    add_background_object(create_thstone1_3091(9408, 256), 3);
    add_background_object(create_thstone1_3091(9472, 256), 3);
    add_background_object(create_thstone11_3085(9408, 0), 3);
    add_background_object(create_thstone11_3085(9536, 128), 3);
    add_background_object(create_thstone1_3091(9536, 256), 3);
    add_background_object(create_thstone1_3091(9600, 256), 3);
    add_background_object(create_thstone11_3085(9536, 0), 3);
    add_background_object(create_thstone11_3085(9664, 128), 3);
    add_background_object(create_thstone1_3091(9664, 256), 3);
    add_background_object(create_thstone1_3091(9728, 256), 3);
    add_background_object(create_thstone11_3085(9664, 0), 3);
    add_background_object(create_thstone1_3091(9792, 256), 3);
    add_background_object(create_thstone10_3146(9536, 584), 3);
    add_background_object(create_thstone5_3096(9824, 256), 3);
    add_background_object(create_thstone3_3090(9824, 192), 3);
    add_background_object(create_thstone3_3090(9824, 128), 3);
    add_background_object(create_thstone3_3090(9824, 64), 3);
    add_background_object(create_thstone3_3090(9824, 0), 3);
    add_background_object(create_thwood2_3134(10720, 1224), 3);
    add_background_object(create_thwood2_3134(10720, 1272), 3);
    add_background_object(create_thwood2_3134(10720, 1320), 3);
    add_background_object(create_thwood2_3134(10848, 1224), 3);
    add_background_object(create_thwood2_3134(10848, 1272), 3);
    add_background_object(create_thwood2_3134(10848, 1320), 3);
    add_background_object(create_thwood2_3134(10720, 1368), 3);
    add_background_object(create_thwood2_3134(10720, 1416), 3);
    add_background_object(create_thwood2_3134(10720, 1464), 3);
    add_background_object(create_thwood2_3134(10848, 1368), 3);
    add_background_object(create_thwood2_3134(10848, 1416), 3);
    add_background_object(create_thwood2_3134(10848, 1464), 3);
    add_background_object(create_thwood2_3134(10976, 1224), 3);
    add_background_object(create_thwood2_3134(10976, 1272), 3);
    add_background_object(create_thwood2_3134(10976, 1320), 3);
    add_background_object(create_thwood2_3134(10976, 1368), 3);
    add_background_object(create_thwood2_3134(10976, 1416), 3);
    add_background_object(create_thwood2_3134(10976, 1464), 3);
    add_background_object(create_thwood2_3134(11104, 1224), 3);
    add_background_object(create_thwood2_3134(11104, 1272), 3);
    add_background_object(create_thwood2_3134(11104, 1320), 3);
    add_background_object(create_thwood2_3134(11232, 1224), 3);
    add_background_object(create_thwood2_3134(11232, 1272), 3);
    add_background_object(create_thwood2_3134(11232, 1320), 3);
    add_background_object(create_thwood2_3134(11104, 1368), 3);
    add_background_object(create_thwood2_3134(11104, 1416), 3);
    add_background_object(create_thwood2_3134(11104, 1464), 3);
    add_background_object(create_thwood2_3134(11232, 1368), 3);
    add_background_object(create_thwood2_3134(11232, 1416), 3);
    add_background_object(create_thwood2_3134(11232, 1464), 3);
    add_background_object(create_thwood2_3134(11360, 1224), 3);
    add_background_object(create_thwood2_3134(11360, 1272), 3);
    add_background_object(create_thwood2_3134(11360, 1320), 3);
    add_background_object(create_thwood2_3134(11360, 1368), 3);
    add_background_object(create_thwood2_3134(11360, 1416), 3);
    add_background_object(create_thwood2_3134(11360, 1464), 3);
    add_background_object(create_thwood2_3134(11360, 1176), 3);
    add_background_object(create_thwood2_3134(11488, 1224), 3);
    add_background_object(create_thwood2_3134(11488, 1272), 3);
    add_background_object(create_thwood2_3134(11488, 1320), 3);
    add_background_object(create_thwood2_3134(11488, 1368), 3);
    add_background_object(create_thwood2_3134(11488, 1176), 3);
    add_background_object(create_thwood2_3134(11744, 1176), 3);
    add_background_object(create_thwood2_3134(11744, 1224), 3);
    add_background_object(create_thwood2_3134(11744, 1272), 3);
    add_background_object(create_thwood2_3134(11744, 1320), 3);
    add_background_object(create_thwood2_3134(11872, 1176), 3);
    add_background_object(create_thwood2_3134(11872, 1224), 3);
    add_background_object(create_thwood2_3134(11872, 1272), 3);
    add_background_object(create_thwood2_3134(11872, 1320), 3);
    add_background_object(create_thtotemback_3087(6096, 1400), 3);
    add_background_object(create_thtotemback_3087(6040, 1368), 3);
    add_background_object(create_thtotemback_3087(6096, 1368), 3);
    add_background_object(create_thwood4_3145(11344, 1176), 3);
    add_background_object(create_thwood4_3145(11344, 1192), 3);
    add_background_object(create_thwood4_3145(11728, 1144), 3);
    add_background_object(create_thwood2_3134(11616, 1224), 3);
    add_background_object(create_thwood2_3134(11616, 1272), 3);
    add_background_object(create_thwood2_3134(11616, 1320), 3);
    add_background_object(create_thwood2_3134(11616, 1176), 3);
    add_background_object(create_thwood2_3134(12000, 1176), 3);
    add_background_object(create_thwood2_3134(12000, 1224), 3);
    add_background_object(create_thwood2_3134(12000, 1272), 3);
    add_background_object(create_thwood2_3134(12000, 1320), 3);
    add_background_object(create_thstone1_3091(11728, 984), 3);
    add_background_object(create_thstone1_3091(11792, 984), 3);
    add_background_object(create_thstone11_3085(11728, 856), 3);
    add_background_object(create_thstone1_3091(11856, 984), 3);
    add_background_object(create_thstone1_3091(11920, 984), 3);
    add_background_object(create_thstone11_3085(11856, 856), 3);
    add_background_object(create_thstone1_3091(11472, 984), 3);
    add_background_object(create_thstone1_3091(11536, 984), 3);
    add_background_object(create_thstone11_3085(11472, 856), 3);
    add_background_object(create_thstone1_3091(11600, 984), 3);
    add_background_object(create_thstone1_3091(11664, 984), 3);
    add_background_object(create_thstone11_3085(11600, 856), 3);
    add_background_object(create_thstone1_3091(11216, 984), 3);
    add_background_object(create_thstone1_3091(11280, 984), 3);
    add_background_object(create_thstone11_3085(11216, 856), 3);
    add_background_object(create_thstone1_3091(11344, 984), 3);
    add_background_object(create_thstone1_3091(11408, 984), 3);
    add_background_object(create_thstone11_3085(11344, 856), 3);
    add_background_object(create_thstone6_3095(11184, 984), 3);
    add_background_object(create_thstone4_3086(11184, 920), 3);
    add_background_object(create_thstone4_3086(11184, 856), 3);
    add_background_object(create_thstone1_3091(11984, 984), 3);
    add_background_object(create_thstone1_3091(12048, 984), 3);
    add_background_object(create_thstone11_3085(11984, 856), 3);
    add_background_object(create_thstone11_3085(11728, 728), 3);
    add_background_object(create_thstone11_3085(11856, 728), 3);
    add_background_object(create_thstone11_3085(11472, 728), 3);
    add_background_object(create_thstone11_3085(11600, 728), 3);
    add_background_object(create_thstone11_3085(11216, 728), 3);
    add_background_object(create_thstone11_3085(11344, 728), 3);
    add_background_object(create_thstone4_3086(11184, 792), 3);
    add_background_object(create_thstone4_3086(11184, 728), 3);
    add_background_object(create_thstone11_3085(11984, 728), 3);
    add_background_object(create_thwood2_3134(12128, 1176), 3);
    add_background_object(create_thwood2_3134(12128, 1224), 3);
    add_background_object(create_thwood2_3134(12128, 1272), 3);
    add_background_object(create_thwood2_3134(12128, 1320), 3);
    add_background_object(create_thwood2_3134(12256, 1176), 3);
    add_background_object(create_thwood2_3134(12256, 1224), 3);
    add_background_object(create_thwood2_3134(12256, 1272), 3);
    add_background_object(create_thwood2_3134(12256, 1320), 3);
    add_background_object(create_thwood5_3144(12256, 1144), 3);
    add_background_object(create_thwood2_3134(12384, 1176), 3);
    add_background_object(create_thwood2_3134(12384, 1224), 3);
    add_background_object(create_thwood2_3134(12384, 1272), 3);
    add_background_object(create_thwood2_3134(12384, 1320), 3);
    add_background_object(create_thwood2_3134(12512, 1176), 3);
    add_background_object(create_thwood2_3134(12512, 1224), 3);
    add_background_object(create_thwood2_3134(12512, 1272), 3);
    add_background_object(create_thwood2_3134(12512, 1320), 3);
    add_background_object(create_thwood2_3134(12640, 1176), 3);
    add_background_object(create_thwood2_3134(12640, 1224), 3);
    add_background_object(create_thwood2_3134(12640, 1272), 3);
    add_background_object(create_thwood2_3134(12640, 1320), 3);
    add_background_object(create_thwood2_3134(12768, 1176), 3);
    add_background_object(create_thwood2_3134(12768, 1224), 3);
    add_background_object(create_thwood2_3134(12768, 1272), 3);
    add_background_object(create_thwood2_3134(12768, 1320), 3);
    add_background_object(create_thwood2_3134(12640, 984), 3);
    add_background_object(create_thwood2_3134(12640, 1032), 3);
    add_background_object(create_thwood2_3134(12640, 1080), 3);
    add_background_object(create_thwood2_3134(12640, 1128), 3);
    add_background_object(create_thwood2_3134(12768, 984), 3);
    add_background_object(create_thwood2_3134(12768, 1032), 3);
    add_background_object(create_thwood2_3134(12768, 1080), 3);
    add_background_object(create_thwood2_3134(12768, 1128), 3);
    add_background_object(create_thwood2_3134(12640, 792), 3);
    add_background_object(create_thwood2_3134(12640, 840), 3);
    add_background_object(create_thwood2_3134(12640, 888), 3);
    add_background_object(create_thwood2_3134(12640, 936), 3);
    add_background_object(create_thwood2_3134(12768, 792), 3);
    add_background_object(create_thwood2_3134(12768, 840), 3);
    add_background_object(create_thwood2_3134(12768, 888), 3);
    add_background_object(create_thwood2_3134(12768, 936), 3);
    add_background_object(create_thstone5_3096(12112, 984), 3);
    add_background_object(create_thstone3_3090(12112, 920), 3);
    add_background_object(create_thstone3_3090(12112, 856), 3);
    add_background_object(create_thstone3_3090(12112, 792), 3);
    add_background_object(create_thstone3_3090(12112, 728), 3);
    add_background_object(create_thwood4_3145(12624, 792), 3);
    add_background_object(create_thwood4_3145(12624, 824), 3);
    add_background_object(create_thwood4_3145(12624, 856), 3);
    add_background_object(create_thwood4_3145(12624, 888), 3);
    add_background_object(create_thwood4_3145(12624, 920), 3);
    add_background_object(create_thwood4_3145(12624, 952), 3);
    add_background_object(create_thwood4_3145(12624, 984), 3);
    add_background_object(create_thwood4_3145(12624, 1016), 3);
    add_background_object(create_thwood4_3145(12624, 1048), 3);
    add_background_object(create_thwood4_3145(12624, 1080), 3);
    add_background_object(create_thwood4_3145(12624, 1112), 3);
    add_background_object(create_thwood4_3145(12624, 1144), 3);
    add_background_object(create_thstone11_3085(11856, 600), 3);
    add_background_object(create_thstone11_3085(11984, 600), 3);
    add_background_object(create_thstone11_3085(11856, 472), 3);
    add_background_object(create_thstone11_3085(11984, 472), 3);
    add_background_object(create_thstone3_3090(12112, 664), 3);
    add_background_object(create_thstone3_3090(12112, 600), 3);
    add_background_object(create_thstone3_3090(12112, 536), 3);
    add_background_object(create_thstone3_3090(12112, 472), 3);
    add_background_object(create_thstone11_3085(11856, 344), 3);
    add_background_object(create_thstone11_3085(11984, 344), 3);
    add_background_object(create_thstone11_3085(11856, 216), 3);
    add_background_object(create_thstone11_3085(11984, 216), 3);
    add_background_object(create_thstone3_3090(12112, 408), 3);
    add_background_object(create_thstone3_3090(12112, 344), 3);
    add_background_object(create_thstone3_3090(12112, 280), 3);
    add_background_object(create_thstone3_3090(12112, 216), 3);
    add_background_object(create_thstone4_3086(12144, 88), 3);
    add_background_object(create_thstone4_3086(12144, 152), 3);
    add_background_object(create_thstone11_3085(12176, 88), 3);
    add_background_object(create_thstone4_3086(12144, 216), 3);
    add_background_object(create_thstone4_3086(12144, 280), 3);
    add_background_object(create_thstone11_3085(12176, 216), 3);
    add_background_object(create_thstone4_3086(12144, 344), 3);
    add_background_object(create_thstone4_3086(12144, 408), 3);
    add_background_object(create_thstone11_3085(12176, 344), 3);
    add_background_object(create_thstone6_3095(12144, 472), 3);
    add_background_object(create_thstone1_3091(12176, 472), 3);
    add_background_object(create_thstone1_3091(12240, 472), 3);
    add_background_object(create_thstone11_3085(12304, 88), 3);
    add_background_object(create_thstone11_3085(12304, 216), 3);
    add_background_object(create_thstone11_3085(12304, 344), 3);
    add_background_object(create_thstone1_3091(12304, 472), 3);
    add_background_object(create_thstone1_3091(12368, 472), 3);
    add_background_object(create_thstone11_3085(12432, 88), 3);
    add_background_object(create_thstone11_3085(12432, 216), 3);
    add_background_object(create_thstone11_3085(12432, 344), 3);
    add_background_object(create_thstone1_3091(12432, 472), 3);
    add_background_object(create_thstone1_3091(12496, 472), 3);
    add_background_object(create_thstone11_3085(12560, 88), 3);
    add_background_object(create_thstone11_3085(12560, 216), 3);
    add_background_object(create_thstone11_3085(12560, 344), 3);
    add_background_object(create_thstone1_3091(12560, 472), 3);
    add_background_object(create_thstone1_3091(12624, 472), 3);
    add_background_object(create_thstone11_3085(12688, 88), 3);
    add_background_object(create_thstone11_3085(12688, 216), 3);
    add_background_object(create_thstone11_3085(12688, 344), 3);
    add_background_object(create_thstone1_3091(12688, 472), 3);
    add_background_object(create_thstone1_3091(12752, 472), 3);
    add_background_object(create_thstone1_3091(11024, 920), 3);
    add_background_object(create_thstone1_3091(11088, 920), 3);
    add_background_object(create_thstone11_3085(11024, 792), 3);
    add_background_object(create_thstone5_3096(11152, 920), 3);
    add_background_object(create_thstone3_3090(11152, 856), 3);
    add_background_object(create_thstone3_3090(11152, 792), 3);
    add_background_object(create_thstone1_3091(10896, 920), 3);
    add_background_object(create_thstone1_3091(10960, 920), 3);
    add_background_object(create_thstone11_3085(10896, 792), 3);
    add_background_object(create_thstone6_3095(10864, 920), 3);
    add_background_object(create_thstone4_3086(10864, 856), 3);
    add_background_object(create_thstone4_3086(10864, 792), 3);
    add_background_object(create_thstone11_3085(11024, 664), 3);
    add_background_object(create_thstone3_3090(11152, 728), 3);
    add_background_object(create_thstone3_3090(11152, 664), 3);
    add_background_object(create_thstone11_3085(10896, 664), 3);
    add_background_object(create_thstone4_3086(10864, 728), 3);
    add_background_object(create_thstone4_3086(10864, 664), 3);
    add_background_object(create_thwood2_3134(12640, 696), 3);
    add_background_object(create_thwood2_3134(12640, 744), 3);
    add_background_object(create_thwood2_3134(12768, 696), 3);
    add_background_object(create_thwood2_3134(12768, 744), 3);
    add_background_object(create_thwood4_3145(12624, 696), 3);
    add_background_object(create_thwood4_3145(12624, 728), 3);
    add_background_object(create_thwood4_3145(12624, 760), 3);
    add_background_object(create_thtire1_3136(12560, 1144), 3);
    add_background_object(create_thtire1_3136(12560, 1112), 3);
    add_background_object(create_thtire1_3136(12560, 1080), 3);
    add_background_object(create_thtire1_3136(12496, 1144), 3);
    add_background_object(create_thstone11_3085(9856, -64), 3);
    add_background_object(create_thstone11_3085(9984, -64), 3);
    add_background_object(create_thstone3_3090(10080, 0), 3);
    add_background_object(create_thstone4_3086(9856, 0), 3);
    add_background_object(create_thstone3_3090(10080, -64), 3);
    add_background_object(create_thstone4_3086(9856, -64), 3);
    add_background_object(create_thstone3_3090(1984, 440), 3);
    add_background_object(create_thstone3_3090(1984, 376), 3);
    add_background_object(create_thstone3_3090(1984, 312), 3);
    add_background_object(create_thstone3_3090(1984, 248), 3);
    add_background_object(create_thstone5_3096(2112, 440), 3);
    add_background_object(create_thstone1_3091(2048, 440), 3);
    add_background_object(create_thstone6_3095(2016, 440), 3);
    add_background_object(create_thstone4_3086(2016, 376), 3);
    add_background_object(create_thstone4_3086(2016, 312), 3);
    add_background_object(create_thstone4_3086(2016, 248), 3);
    add_background_object(create_thstone3_3090(2112, 312), 3);
    add_background_object(create_thstone3_3090(2112, 248), 3);
    add_background_object(create_thstone3_3090(1984, 184), 3);
    add_background_object(create_thstone4_3086(2016, 184), 3);
    add_background_object(create_thstone3_3090(2112, 184), 3);
    add_background_object(create_thstone3_3090(1984, 120), 3);
    add_background_object(create_thstone4_3086(2016, 120), 3);
    add_background_object(create_thstone3_3090(2112, 120), 3);
    add_background_object(create_thstone3_3090(1984, 56), 3);
    add_background_object(create_thstone4_3086(2016, 56), 3);
    add_background_object(create_thstone3_3090(2112, 56), 3);
    add_background_object(create_thstone3_3090(1984, -8), 3);
    add_background_object(create_thstone4_3086(2016, -8), 3);
    add_background_object(create_thstone3_3090(2112, -8), 3);
    add_background_object(create_thstone11_3085(11472, 600), 3);
    add_background_object(create_thstone11_3085(11216, 600), 3);
    add_background_object(create_thstone11_3085(11344, 600), 3);
    add_background_object(create_thstone4_3086(11184, 664), 3);
    add_background_object(create_thstone4_3086(11184, 600), 3);
    add_background_object(create_thstone11_3085(11472, 472), 3);
    add_background_object(create_thstone11_3085(11216, 472), 3);
    add_background_object(create_thstone11_3085(11344, 472), 3);
    add_background_object(create_thstone4_3086(11184, 536), 3);
    add_background_object(create_thstone4_3086(11184, 472), 3);
    add_background_object(create_thstone11_3085(11472, 344), 3);
    add_background_object(create_thstone11_3085(11216, 344), 3);
    add_background_object(create_thstone11_3085(11344, 344), 3);
    add_background_object(create_thstone4_3086(11184, 408), 3);
    add_background_object(create_thstone4_3086(11184, 344), 3);
    add_background_object(create_thstone11_3085(11472, 216), 3);
    add_background_object(create_thstone11_3085(11216, 216), 3);
    add_background_object(create_thstone11_3085(11344, 216), 3);
    add_background_object(create_thstone4_3086(11184, 280), 3);
    add_background_object(create_thstone4_3086(11184, 216), 3);
    add_background_object(create_thstone11_3085(11024, 344), 3);
    add_background_object(create_thstone3_3090(11152, 408), 3);
    add_background_object(create_thstone3_3090(11152, 344), 3);
    add_background_object(create_thstone11_3085(10640, 344), 3);
    add_background_object(create_thstone4_3086(10608, 408), 3);
    add_background_object(create_thstone4_3086(10608, 344), 3);
    add_background_object(create_thstone8_3098(10864, 632), 3);
    add_background_object(create_thstone2_3092(11024, 632), 3);
    add_background_object(create_thstone2_3092(11088, 632), 3);
    add_background_object(create_thstone7_3097(11152, 632), 3);
    add_background_object(create_thstone2_3092(10896, 632), 3);
    add_background_object(create_thstone2_3092(10960, 632), 3);
    add_background_object(create_thstone1_3091(11024, 472), 3);
    add_background_object(create_thstone1_3091(11088, 472), 3);
    add_background_object(create_thstone5_3096(11152, 472), 3);
    add_background_object(create_thstone1_3091(10640, 472), 3);
    add_background_object(create_thstone1_3091(10704, 472), 3);
    add_background_object(create_thstone6_3095(10608, 472), 3);
    add_background_object(create_thstone11_3085(10768, 344), 3);
    add_background_object(create_thstone1_3091(10768, 472), 3);
    add_background_object(create_thstone1_3091(10832, 472), 3);
    add_background_object(create_thstone11_3085(10896, 344), 3);
    add_background_object(create_thstone1_3091(10896, 472), 3);
    add_background_object(create_thstone1_3091(10960, 472), 3);
    add_background_object(create_thstone11_3085(11024, 216), 3);
    add_background_object(create_thstone3_3090(11152, 280), 3);
    add_background_object(create_thstone3_3090(11152, 216), 3);
    add_background_object(create_thstone11_3085(10640, 216), 3);
    add_background_object(create_thstone4_3086(10608, 280), 3);
    add_background_object(create_thstone4_3086(10608, 216), 3);
    add_background_object(create_thstone11_3085(10768, 216), 3);
    add_background_object(create_thstone11_3085(10896, 216), 3);
    add_object(create_playerstartingpoint_358(101, 1637), 3);
    add_object(create_enemymetalpup_3149(495, 1644), 3);
    add_object(create_enemytotematic_3103(5032, 1624), 3);
    add_object(create_enemytotematic_3103(5032, 1592), 3);
    add_object(create_enemyshockpuppet_3150(1151, 1136), 3);
    add_object(create_laddertop_357(1228, 1551), 3);
    add_object(create_laddertop_357(1556, 1551), 3);
    add_object(create_enemybladeorbiterleft_3151(684, 1556), 3);
    add_object(create_enemybladeorbiterright_3152(723, 1556), 3);
    add_object(create_enemybladeorbiter_3153(704, 1576), 3);
    add_object(create_enemybladeorbiterleft_3151(940, 1492), 3);
    add_object(create_enemybladeorbiterright_3152(979, 1492), 3);
    add_object(create_enemybladeorbiter_3153(960, 1512), 3);
    add_object(create_enemybladeorbiterleft_3151(1292, 1604), 3);
    add_object(create_enemybladeorbiterright_3152(1331, 1604), 3);
    add_object(create_enemybladeorbiter_3153(1312, 1624), 3);
    add_object(create_enemybladeorbiterleft_3151(1468, 1388), 3);
    add_object(create_enemybladeorbiterright_3152(1507, 1388), 3);
    add_object(create_enemybladeorbiter_3153(1488, 1408), 3);
    add_object(create_hazardshuriken_3154(2384, 1472), 3);
    add_object(create_hazardshurikenbase_3155(2384, 1472), 3);
    add_object(create_hazardshurikenturn_3156(2176, 1472), 3);
    add_object(create_enemymetalpup_3149(943, 1420), 3);
    add_object(create_enemylimiter_350(869, 1418), 3);
    add_object(create_enemylimiter_350(1053, 1418), 3);
    add_object(create_hazardshurikenturn_3156(2176, 1568), 3);
    add_object(create_hazardshurikenturn_3156(2464, 1568), 3);
    add_object(create_hazardshurikenturn_3156(2464, 1472), 3);
    add_object(create_hazardshuriken_3154(1992, 1568), 3);
    add_object(create_hazardshurikenbase_3155(1992, 1568), 3);
    add_object(create_hazardshurikenturn_3156(1920, 1568), 3);
    add_object(create_hazardshurikenturn_3156(1920, 1664), 3);
    add_object(create_hazardshurikenturn_3156(2144, 1664), 3);
    add_object(create_hazardshurikenturn_3156(2144, 1568), 3);
    add_object(create_gimmickhangingidlesensor_740(1033, 1040), 3);
    add_object(create_gimmickhangingidlesensor_740(1137, 1040), 3);
    add_object(create_gimmickhangingidlesensor_740(1241, 1040), 3);
    add_object(create_gimmickhangingidlesensor_740(1345, 1040), 3);
    add_object(create_gimmickhangingidlesensor_740(1961, 1352), 3);
    add_object(create_levelhideoutplatform1_3157(2160, 1232), 3);
    add_object(create_levelhideoutplatformflame_3158(2160, 1296), 3);
    add_object(create_levelhideoutplatform1_3157(2272, 1096), 3);
    add_object(create_levelhideoutplatformflame_3158(2272, 1160), 3);
    add_object(create_hazardspikesright_3120(2016, 952), 3);
    add_object(create_hazardspikesright_3120(2016, 920), 3);
    add_object(create_hazardspikesright_3120(2016, 888), 3);
    add_object(create_hazardspikesright_3120(2016, 856), 3);
    add_object(create_hazardspikesright_3120(2016, 824), 3);
    add_object(create_hazardspikesright_3120(2016, 792), 3);
    add_object(create_hazardspikesright_3120(2016, 760), 3);
    add_object(create_hazardspikesright_3120(2016, 728), 3);
    add_object(create_levelhideoutplatform1_3157(2160, 824), 3);
    add_object(create_levelhideoutplatformflame_3158(2160, 888), 3);
    add_object(create_levelhideoutplatform1_3157(2312, 632), 3);
    add_object(create_levelhideoutplatformflame_3158(2312, 696), 3);
    add_object(create_hazardspikesright_3120(2016, 696), 3);
    add_object(create_hazardspikesright_3120(2016, 664), 3);
    add_object(create_hazardspikesright_3120(2016, 632), 3);
    add_object(create_hazardspikesright_3120(2144, 440), 3);
    add_object(create_hazardspikesright_3120(2144, 408), 3);
    add_object(create_hazardspikesright_3120(2144, 376), 3);
    add_object(create_hazardspikesleft_3119(2400, 1320), 3);
    add_object(create_hazardspikesleft_3119(2400, 1288), 3);
    add_object(create_hazardspikesleft_3119(2400, 1256), 3);
    add_object(create_hazardspikesleft_3119(2400, 1224), 3);
    add_object(create_hazardspikesleft_3119(2400, 1192), 3);
    add_object(create_hazardspikesleft_3119(2400, 1160), 3);
    add_object(create_hazardspikesleft_3119(2400, 824), 3);
    add_object(create_hazardspikesleft_3119(2400, 792), 3);
    add_object(create_hazardspikesleft_3119(2400, 760), 3);
    add_object(create_hazardspikesleft_3119(2400, 728), 3);
    add_object(create_hazardspikesleft_3119(2400, 696), 3);
    add_object(create_hazardspikesright_3120(2016, 568), 3);
    add_object(create_hazardspikesright_3120(2016, 536), 3);
    add_object(create_hazardspikesright_3120(2016, 504), 3);
    add_object(create_hazardspikesright_3120(2016, 600), 3);
    add_object(create_enemylimiter_350(2701, 618), 3);
    add_object(create_enemylimiter_350(2877, 618), 3);
    add_object(create_enemymetalpup_3149(2775, 620), 3);
    add_object(create_yellowspringup_434(2064, 1424), 3);
    add_object(create_objectcrystal_279(2997, 586), 3);
    add_object(create_objectcrystal_279(2965, 570), 3);
    add_object(create_objectcrystal_279(2925, 562), 3);
    add_object(create_objectcrystal_279(2885, 562), 3);
    add_object(create_monitorcrate_409(1272, 1496), 3);
    add_object(create_monitorcrate_409(1424, 1720), 3);
    add_object(create_monitorcrate_409(1456, 1720), 3);
    add_object(create_monitorcrate_409(1488, 1720), 3);
    add_object(create_monitorcrate_409(1760, 1104), 3);
    add_object(create_monitorcrate_409(1728, 1104), 3);
    add_object(create_gimmickbarrel_3159(3016, 656), 3);
    add_object(create_gimmickbarrel_3159(2648, 1072), 3);
    add_object(create_enemymetalpup_3149(3063, 1100), 3);
    add_object(create_enemymetalpup_3149(3407, 1100), 3);
    add_object(create_enemylimiter_350(2893, 1098), 3);
    add_object(create_enemylimiter_350(3181, 1098), 3);
    add_object(create_enemylimiter_350(3229, 1098), 3);
    add_object(create_enemylimiter_350(3581, 1098), 3);
    add_object(create_objectcrystal_279(4237, 1194), 3);
    add_object(create_objectcrystal_279(4269, 1178), 3);
    add_object(create_objectcrystal_279(4301, 1162), 3);
    add_object(create_objectcrystal_279(4333, 1146), 3);
    add_object(create_objectcrystal_279(4365, 1130), 3);
    add_object(create_objectcrystal_279(4397, 1114), 3);
    add_object(create_objectcrystal_279(4429, 1098), 3);
    add_object(create_objectcrystal_279(4461, 1082), 3);
    add_object(create_objectcrystal_279(4173, 1226), 3);
    add_object(create_objectcrystal_279(4205, 1210), 3);
    add_object(create_objectpetal_302(4209, 1449), 3);
    add_object(create_objectpetal_302(4273, 1425), 3);
    add_object(create_objectpetal_302(4345, 1489), 3);
    add_object(create_objectpetal_302(4401, 1449), 3);
    add_object(create_objectpetal_302(4457, 1401), 3);
    add_object(create_objectpetal_302(4497, 1441), 3);
    add_object(create_enemymetalpup_3149(4199, 908), 3);
    add_object(create_enemylimiter_350(4077, 906), 3);
    add_object(create_enemylimiter_350(4325, 906), 3);
    add_object(create_monitorcrate_409(3424, 1256), 3);
    add_object(create_monitorcrate_409(3360, 1256), 3);
    add_object(create_monitorkeystone_562(3392, 1256), 3);
    add_object(create_monitorwoodshield_325(3296, 1256), 3);
    add_object(create_enemytotematic_3103(4976, 1624), 3);
    add_object(create_enemytotematic_3103(4976, 1592), 3);
    add_object(create_enemytotematic_3103(4920, 1624), 3);
    add_object(create_enemytotematic_3103(4920, 1592), 3);
    add_object(create_enemytotematic_3103(4864, 1624), 3);
    add_object(create_enemytotematic_3103(4864, 1592), 3);
    add_object(create_enemytotematic_3103(4800, 1624), 3);
    add_object(create_enemytotematic_3103(4800, 1592), 3);
    add_object(create_enemytotematic_3103(4744, 1624), 3);
    add_object(create_enemytotematic_3103(4744, 1592), 3);
    add_object(create_enemytotematic_3103(4688, 1624), 3);
    add_object(create_enemytotematic_3103(4688, 1592), 3);
    add_object(create_enemytotematic_3103(5952, 1576), 3);
    add_object(create_enemytotematic_3103(5952, 1544), 3);
    add_object(create_enemytotematic_3103(5952, 1512), 3);
    add_object(create_enemytotematic_3103(5896, 1576), 3);
    add_object(create_enemytotematic_3103(5896, 1544), 3);
    add_object(create_enemytotematic_3103(5896, 1512), 3);
    add_object(create_enemytotematic_3103(5896, 1480), 3);
    add_object(create_enemytotematic_3103(5896, 1448), 3);
    add_object(create_enemytotematic_3103(5896, 1416), 3);
    add_object(create_enemytotematic_3103(5952, 1480), 3);
    add_object(create_enemytotematic_3103(5952, 1448), 3);
    add_object(create_enemytotematic_3103(6008, 1576), 3);
    add_object(create_enemytotematic_3103(6008, 1544), 3);
    add_object(create_enemytotematic_3103(6008, 1512), 3);
    add_object(create_enemytotematic_3103(6008, 1480), 3);
    add_object(create_enemytotematic_3103(6120, 1576), 3);
    add_object(create_enemytotematic_3103(6120, 1544), 3);
    add_object(create_enemytotematic_3103(6120, 1512), 3);
    add_object(create_enemytotematic_3103(6064, 1576), 3);
    add_object(create_enemytotematic_3103(6064, 1544), 3);
    add_object(create_enemytotematic_3103(6064, 1512), 3);
    add_object(create_enemytotematic_3103(6064, 1480), 3);
    add_object(create_enemytotematic_3103(6064, 1448), 3);
    add_object(create_enemytotematic_3103(6064, 1416), 3);
    add_object(create_enemytotematic_3103(6120, 1480), 3);
    add_object(create_enemytotematic_3103(6120, 1448), 3);
    add_object(create_enemytotematic_3103(6176, 1576), 3);
    add_object(create_enemytotematic_3103(6176, 1544), 3);
    add_object(create_enemytotematic_3103(6176, 1512), 3);
    add_object(create_enemytotematic_3103(6176, 1480), 3);
    add_object(create_enemytotematic_3103(4840, 1096), 3);
    add_object(create_enemytotematic_3103(4840, 1064), 3);
    add_object(create_enemytotematic_3103(4784, 1096), 3);
    add_object(create_enemytotematic_3103(4784, 1064), 3);
    add_object(create_enemytotematic_3103(4728, 1096), 3);
    add_object(create_enemytotematic_3103(4728, 1064), 3);
    add_object(create_enemytotematic_3103(3840, 1496), 3);
    add_object(create_enemytotematic_3103(3840, 1464), 3);
    add_object(create_enemytotematic_3103(3784, 1496), 3);
    add_object(create_enemytotematic_3103(3784, 1464), 3);
    add_object(create_enemytotematic_3103(3728, 1496), 3);
    add_object(create_enemytotematic_3103(3728, 1464), 3);
    add_object(create_enemytotematic_3103(3672, 1496), 3);
    add_object(create_enemytotematic_3103(3672, 1464), 3);
    add_object(create_objectcrystal_279(3997, 842), 3);
    add_object(create_objectcrystal_279(4029, 826), 3);
    add_object(create_objectcrystal_279(3933, 874), 3);
    add_object(create_objectcrystal_279(3965, 858), 3);
    add_object(create_objectcrystal_279(2525, 978), 3);
    add_object(create_objectcrystal_279(2533, 1002), 3);
    add_object(create_objectcrystal_279(2525, 1026), 3);
    add_object(create_objectcrystal_279(2533, 1050), 3);
    add_object(create_enemyshockpuppet_3150(6255, 1520), 3);
    add_object(create_objectpetal_302(5153, 129), 3);
    add_object(create_objectpetal_302(5089, 129), 3);
    add_object(create_objectpetal_302(5153, 193), 3);
    add_object(create_objectpetal_302(5089, 193), 3);
    add_object(create_objectpetal_302(5153, 257), 3);
    add_object(create_objectpetal_302(5089, 257), 3);
    add_object(create_objectpetal_302(5153, 321), 3);
    add_object(create_objectpetal_302(5089, 321), 3);
    add_object(create_enemytotematic_3103(4632, 1624), 3);
    add_object(create_enemytotematic_3103(4632, 1592), 3);
    add_object(create_monitorkeystone_562(4912, 1368), 3);
    add_object(create_monitorkeystone_562(4944, 1368), 3);
    add_object(create_enemyshockpuppet_3150(5087, 872), 3);
    add_object(create_enemybladeorbiterleft_3151(5388, 1020), 3);
    add_object(create_enemybladeorbiterright_3152(5427, 1020), 3);
    add_object(create_enemybladeorbiter_3153(5408, 1040), 3);
    add_object(create_objectcrystal_279(5109, 1274), 3);
    add_object(create_objectcrystal_279(5157, 1298), 3);
    add_object(create_objectcrystal_279(5205, 1322), 3);
    add_object(create_objectcrystal_279(5253, 1346), 3);
    add_object(create_objectcrystal_279(5301, 1370), 3);
    add_object(create_hazardshuriken_3154(6536, 1144), 3);
    add_object(create_hazardshurikenbase_3155(6536, 1144), 3);
    add_object(create_hazardshurikenturn_3156(6472, 1144), 3);
    add_object(create_hazardshurikenturn_3156(6472, 1336), 3);
    add_object(create_hazardshurikenturn_3156(6600, 1336), 3);
    add_object(create_hazardshurikenturn_3156(6600, 1144), 3);
    add_object(create_monitorbomb_563(1696, 1104), 3);
    add_object(create_monitorbomb_563(1792, 1104), 3);
    add_object(create_monitorbomb_563(1728, 1264), 3);
    add_object(create_monitorbomb_563(1760, 1264), 3);
    add_object(create_monitorbomb_563(5296, 1120), 3);
    add_object(create_monitorbomb_563(5264, 1120), 3);
    add_object(create_monitorbomb_563(5232, 1120), 3);
    add_object(create_monitorbomb_563(5200, 1120), 3);
    add_object(create_monitorbomb_563(5168, 1120), 3);
    add_object(create_monitorbomb_563(5328, 1120), 3);
    add_object(create_monitorbomb_563(5360, 1120), 3);
    add_object(create_monitorbomb_563(5392, 1120), 3);
    add_object(create_monitorearthshield_326(6200, 1264), 3);
    add_object(create_levelhideoutplatform1_3157(6704, 1592), 3);
    add_object(create_levelhideoutplatformflame_3158(6704, 1656), 3);
    add_object(create_levelhideoutplatform1_3157(6768, 1592), 3);
    add_object(create_levelhideoutplatformflame_3158(6768, 1656), 3);
    add_object(create_levelhideoutplatform1_3157(6832, 1592), 3);
    add_object(create_levelhideoutplatformflame_3158(6832, 1656), 3);
    add_object(create_levelhideoutplatform1_3157(6896, 1592), 3);
    add_object(create_levelhideoutplatformflame_3158(6896, 1656), 3);
    add_object(create_levelhideoutplatform1_3157(6736, 1592), 3);
    add_object(create_levelhideoutplatformflame_3158(6736, 1656), 3);
    add_object(create_levelhideoutplatform1_3157(6800, 1592), 3);
    add_object(create_levelhideoutplatformflame_3158(6800, 1656), 3);
    add_object(create_levelhideoutplatform1_3157(6864, 1592), 3);
    add_object(create_levelhideoutplatformflame_3158(6864, 1656), 3);
    add_object(create_levelhideoutplatform1_3157(6928, 1592), 3);
    add_object(create_levelhideoutplatformflame_3158(6928, 1656), 3);
    add_object(create_levelhideoutplatform1_3157(6960, 1528), 3);
    add_object(create_levelhideoutplatformflame_3158(6960, 1592), 3);
    add_object(create_levelhideoutplatform1_3157(7024, 1528), 3);
    add_object(create_levelhideoutplatformflame_3158(7024, 1592), 3);
    add_object(create_levelhideoutplatform1_3157(7088, 1528), 3);
    add_object(create_levelhideoutplatformflame_3158(7088, 1592), 3);
    add_object(create_levelhideoutplatform1_3157(7152, 1528), 3);
    add_object(create_levelhideoutplatformflame_3158(7152, 1592), 3);
    add_object(create_levelhideoutplatform1_3157(6992, 1528), 3);
    add_object(create_levelhideoutplatformflame_3158(6992, 1592), 3);
    add_object(create_levelhideoutplatform1_3157(7056, 1528), 3);
    add_object(create_levelhideoutplatformflame_3158(7056, 1592), 3);
    add_object(create_levelhideoutplatform1_3157(7120, 1528), 3);
    add_object(create_levelhideoutplatformflame_3158(7120, 1592), 3);
    add_object(create_levelhideoutplatform1_3157(7184, 1528), 3);
    add_object(create_levelhideoutplatformflame_3158(7184, 1592), 3);
    add_object(create_levelhideoutplatform1_3157(6944, 1224), 3);
    add_object(create_levelhideoutplatformflame_3158(6944, 1288), 3);
    add_object(create_levelhideoutplatform1_3157(7024, 1224), 3);
    add_object(create_levelhideoutplatformflame_3158(7024, 1288), 3);
    add_object(create_levelhideoutplatform1_3157(7104, 1224), 3);
    add_object(create_levelhideoutplatformflame_3158(7104, 1288), 3);
    add_object(create_levelhideoutplatform1_3157(7184, 1224), 3);
    add_object(create_levelhideoutplatformflame_3158(7184, 1288), 3);
    add_object(create_levelhideoutplatform1_3157(6944, 968), 3);
    add_object(create_levelhideoutplatformflame_3158(6944, 1032), 3);
    add_object(create_levelhideoutplatform1_3157(7024, 968), 3);
    add_object(create_levelhideoutplatformflame_3158(7024, 1032), 3);
    add_object(create_levelhideoutplatform1_3157(7104, 968), 3);
    add_object(create_levelhideoutplatformflame_3158(7104, 1032), 3);
    add_object(create_levelhideoutplatform1_3157(7184, 968), 3);
    add_object(create_levelhideoutplatformflame_3158(7184, 1032), 3);
    add_object(create_objectcrystal_279(5005, 818), 3);
    add_object(create_objectcrystal_279(5005, 778), 3);
    add_object(create_objectcrystal_279(5005, 706), 3);
    add_object(create_objectcrystal_279(5005, 666), 3);
    add_object(create_objectcrystal_279(5005, 594), 3);
    add_object(create_objectcrystal_279(5005, 554), 3);
    add_object(create_objectcrystal_279(5005, 482), 3);
    add_object(create_objectcrystal_279(5005, 442), 3);
    add_object(create_yellowspringupright_433(5568, 768), 3);
    add_object(create_yellowspringupright_433(5600, 768), 3);
    add_object(create_yellowspringupright_433(5632, 768), 3);
    add_object(create_objectcrystal_279(6125, 746), 3);
    add_object(create_objectcrystal_279(6125, 794), 3);
    add_object(create_objectcrystal_279(6125, 842), 3);
    add_object(create_objectcrystal_279(6125, 890), 3);
    add_object(create_enemyshockpuppet_3150(5567, 472), 3);
    add_object(create_hazardspikesup_3118(5696, 864), 3);
    add_object(create_hazardspikesup_3118(5728, 864), 3);
    add_object(create_hazardspikesup_3118(5760, 864), 3);
    add_object(create_hazardspikesup_3118(5792, 864), 3);
    add_object(create_hazardspikesup_3118(5824, 864), 3);
    add_object(create_hazardspikesup_3118(5856, 864), 3);
    add_object(create_redspringupright_438(6296, 848), 3);
    add_object(create_hazardspikesup_3118(5888, 864), 3);
    add_object(create_hazardspikesup_3118(5920, 864), 3);
    add_object(create_hazardshuriken_3154(6632, 896), 3);
    add_object(create_hazardshurikenbase_3155(6632, 896), 3);
    add_object(create_hazardshurikenturn_3156(6424, 896), 3);
    add_object(create_hazardshurikenturn_3156(6424, 992), 3);
    add_object(create_hazardshurikenturn_3156(6712, 992), 3);
    add_object(create_hazardshurikenturn_3156(6712, 896), 3);
    add_object(create_objectcrystal_279(5549, 418), 3);
    add_object(create_objectcrystal_279(5589, 418), 3);
    add_object(create_objectcrystal_279(5549, 546), 3);
    add_object(create_objectcrystal_279(5589, 546), 3);
    add_object(create_objectcrystal_279(5517, 514), 3);
    add_object(create_objectcrystal_279(5621, 514), 3);
    add_object(create_objectcrystal_279(5517, 450), 3);
    add_object(create_objectcrystal_279(5621, 450), 3);
    add_object(create_objectcrystal_279(6981, 930), 3);
    add_object(create_objectcrystal_279(6981, 1010), 3);
    add_object(create_objectcrystal_279(6981, 970), 3);
    add_object(create_objectcrystal_279(7061, 930), 3);
    add_object(create_objectcrystal_279(7061, 1010), 3);
    add_object(create_objectcrystal_279(7061, 970), 3);
    add_object(create_objectcrystal_279(7141, 930), 3);
    add_object(create_objectcrystal_279(7141, 1010), 3);
    add_object(create_objectcrystal_279(7141, 970), 3);
    add_object(create_objectcrystal_279(6981, 1186), 3);
    add_object(create_objectcrystal_279(6981, 1266), 3);
    add_object(create_objectcrystal_279(6981, 1226), 3);
    add_object(create_objectcrystal_279(7061, 1186), 3);
    add_object(create_objectcrystal_279(7061, 1266), 3);
    add_object(create_objectcrystal_279(7061, 1226), 3);
    add_object(create_objectcrystal_279(7141, 1186), 3);
    add_object(create_objectcrystal_279(7141, 1266), 3);
    add_object(create_objectcrystal_279(7141, 1226), 3);
    add_object(create_levelhideoutplatform1_3157(8512, 728), 3);
    add_object(create_levelhideoutplatformflame_3158(8512, 792), 3);
    add_object(create_gimmickbarrel_3159(10072, 632), 3);
    add_object(create_enemytotematic_3103(10096, 1016), 3);
    add_object(create_enemytotematic_3103(10096, 984), 3);
    add_object(create_enemytotematic_3103(10040, 1016), 3);
    add_object(create_enemytotematic_3103(10040, 984), 3);
    add_object(create_enemytotematic_3103(9984, 1016), 3);
    add_object(create_enemytotematic_3103(9984, 984), 3);
    add_object(create_enemytotematic_3103(9928, 1016), 3);
    add_object(create_enemytotematic_3103(9928, 984), 3);
    add_object(create_enemytotematic_3103(9344, 1112), 3);
    add_object(create_enemytotematic_3103(9344, 1080), 3);
    add_object(create_enemytotematic_3103(9288, 1112), 3);
    add_object(create_enemytotematic_3103(9288, 1080), 3);
    add_object(create_enemytotematic_3103(9232, 1112), 3);
    add_object(create_enemytotematic_3103(9232, 1080), 3);
    add_object(create_enemytotematic_3103(9176, 1112), 3);
    add_object(create_enemytotematic_3103(9176, 1080), 3);
    add_object(create_objectcrystal_279(9517, 658), 3);
    add_object(create_objectcrystal_279(9501, 674), 3);
    add_object(create_objectcrystal_279(9485, 690), 3);
    add_object(create_objectcrystal_279(9469, 706), 3);
    add_object(create_objectcrystal_279(9453, 722), 3);
    add_object(create_yellowspringup_434(9584, 1128), 3);
    add_object(create_yellowspringup_434(9616, 1128), 3);
    add_object(create_yellowspringup_434(9648, 1128), 3);
    add_object(create_yellowspringup_434(9680, 1128), 3);
    add_object(create_yellowspringup_434(9712, 1128), 3);
    add_object(create_enemymetalpup_3149(8975, 676), 3);
    add_object(create_enemylimiter_350(8837, 674), 3);
    add_object(create_enemylimiter_350(9141, 674), 3);
    add_object(create_enemybladeorbiterleft_3151(8884, 804), 3);
    add_object(create_enemybladeorbiterright_3152(8923, 804), 3);
    add_object(create_enemybladeorbiter_3153(8904, 824), 3);
    add_object(create_enemybladeorbiterleft_3151(9028, 804), 3);
    add_object(create_enemybladeorbiterright_3152(9067, 804), 3);
    add_object(create_enemybladeorbiter_3153(9048, 824), 3);
    add_object(create_enemyshockpuppet_3150(10511, 1152), 3);
    add_object(create_enemyshockpuppet_3150(10655, 1152), 3);
    add_object(create_enemyshockpuppet_3150(9879, 616), 3);
    add_object(create_gimmickhangingidlesensor_740(9817, 760), 3);
    add_object(create_gimmickhangingidlesensor_740(9921, 760), 3);
    add_object(create_gimmickhangingidlesensor_740(10025, 760), 3);
    add_object(create_gimmickhangingidlesensor_740(10129, 760), 3);
    add_object(create_objectcrystal_279(9925, 922), 3);
    add_object(create_objectcrystal_279(9981, 922), 3);
    add_object(create_objectcrystal_279(10037, 922), 3);
    add_object(create_objectcrystal_279(10093, 922), 3);
    add_object(create_enemymetalpup_3149(4127, 1628), 3);
    add_object(create_enemylimiter_350(4621, 1626), 3);
    add_object(create_enemylimiter_350(4029, 1626), 3);
    add_object(create_enemymetalpup_3149(4503, 1628), 3);
    add_object(create_enemyrocketpuncher_3160(11160, 1184), 3);
    add_object(create_enemyrocketpuncherhand_3161(11136, 1200), 3);
    add_object(create_enemyrocketpunchershield_3162(11192, 1184), 3);
    add_object(create_enemyrocketpuncher_3160(6224, 1392), 3);
    add_object(create_enemyrocketpuncherhand_3161(6200, 1408), 3);
    add_object(create_enemyrocketpunchershield_3162(6256, 1392), 3);
    add_object(create_enemyrocketpuncher_3160(6560, 1504), 3);
    add_object(create_enemyrocketpuncherhand_3161(6536, 1520), 3);
    add_object(create_enemyrocketpunchershield_3162(6592, 1504), 3);
    add_object(create_enemytotematic_3103(6120, 1416), 3);
    add_object(create_enemytotematic_3103(6064, 1384), 3);
    add_object(create_enemytotematic_3103(6120, 1384), 3);
    add_object(create_enemyrocketpuncher_3160(7488, 704), 3);
    add_object(create_enemyrocketpuncherhand_3161(7464, 720), 3);
    add_object(create_enemyrocketpunchershield_3162(7520, 704), 3);
    add_object(create_effectrocketpuncherwarning_3163(7484, 656), 3);
    add_object(create_effectrocketpuncherwarning_3163(6220, 1344), 3);
    add_object(create_effectrocketpuncherwarning_3163(6556, 1456), 3);
    add_object(create_effectrocketpuncherwarning_3163(11156, 1136), 3);
    add_object(create_monitorcrate_409(11312, 1192), 3);
    add_object(create_monitorbomb_563(11280, 1192), 3);
    add_object(create_monitorbomb_563(11248, 1192), 3);
    add_object(create_monitorbomb_563(11456, 1144), 3);
    add_object(create_monitorbomb_563(11488, 1144), 3);
    add_object(create_monitorbomb_563(11520, 1144), 3);
    add_object(create_enemyrocketpuncher_3160(11672, 1136), 3);
    add_object(create_enemyrocketpuncherhand_3161(11648, 1152), 3);
    add_object(create_enemyrocketpunchershield_3162(11704, 1136), 3);
    add_object(create_effectrocketpuncherwarning_3163(11668, 1088), 3);
    add_object(create_monitorbomb_563(11552, 1144), 3);
    add_object(create_monitorbomb_563(11736, 1112), 3);
    add_object(create_monitorbomb_563(11768, 1112), 3);
    add_object(create_monitorbomb_563(11800, 1112), 3);
    add_object(create_monitorbomb_563(11584, 1144), 3);
    add_object(create_redspringupright_438(12272, 1144), 3);
    add_object(create_redspringupright_438(12304, 1144), 3);
    add_object(create_objectfuel_528(6028, 724), 3);
    add_object(create_enemylimiter_350(613, 1642), 3);
    add_object(create_enemylimiter_350(245, 1642), 3);
    add_object(create_levelthcollapsingplatform_3164(9600, 456), 3);
    add_object(create_levelthcollapsingplatform_3164(9728, 456), 3);
    add_object(create_levelthcollapsingplatform_3164(1616, 1400), 3);
    add_object(create_objectpetal_302(1721, 1385), 3);
    add_object(create_objectpetal_302(1681, 1385), 3);
    add_object(create_objectpetal_302(1641, 1385), 3);
    add_object(create_levelthcollapsingplatform_3164(6208, 992), 3);
    add_object(create_objectcrystal_279(8093, 522), 3);
    add_object(create_objectcrystal_279(8109, 538), 3);
    add_object(create_objectcrystal_279(8125, 522), 3);
    add_object(create_objectcrystal_279(8141, 538), 3);
    add_object(create_objectcrystal_279(8157, 522), 3);
    add_object(create_objectcrystal_279(8173, 538), 3);
    add_object(create_objectcrystal_279(8189, 522), 3);
    add_object(create_levelthcollapsingplatform_3164(12368, 728), 3);
    add_object(create_levelthcollapsingplatform_3164(12144, 648), 3);
    add_object(create_objectpetal_302(12161, 625), 3);
    add_object(create_objectpetal_302(12193, 625), 3);
    add_object(create_objectpetal_302(12225, 625), 3);
    add_object(create_objectpetal_302(12257, 625), 3);
    add_object(create_objectcodec_354(2530, 1629), 3);
    add_object(create_objectcodec_354(1762, 1205), 3);
    add_object(create_objectcodec_354(4994, 1381), 3);
    add_object(create_objectcodec_354(8514, 541), 3);
    add_object(create_monitorkeystone_562(10992, 600), 3);
    add_object(create_monitorkeystone_562(11024, 600), 3);
    add_object(create_objectfuel_528(11124, 620), 3);
    add_background_object(create_thwood2_3134(6688, 1640), 4);
    add_background_object(create_thwood2_3134(6688, 1688), 4);
    add_background_object(create_thwood2_3134(6688, 1592), 4);
    add_background_object(create_thwood2_3134(6816, 1640), 4);
    add_background_object(create_thwood2_3134(6816, 1688), 4);
    add_background_object(create_thwood2_3134(6816, 1592), 4);
    add_background_object(create_thwood2_3134(6944, 1640), 4);
    add_background_object(create_thwood2_3134(6944, 1592), 4);
    add_background_object(create_thwood2_3134(7072, 1640), 4);
    add_background_object(create_thwood2_3134(7072, 1592), 4);
    add_background_object(create_thstone7_3097(7168, 1528), 4);
    add_background_object(create_thstone8_3098(6944, 1528), 4);
    add_background_object(create_thstone6_3095(6944, 1560), 4);
    add_background_object(create_thstone5_3096(7168, 1560), 4);
    add_background_object(create_thstone2_3092(6976, 1528), 4);
    add_background_object(create_thstone2_3092(7040, 1528), 4);
    add_background_object(create_thstone2_3092(7104, 1528), 4);
    add_background_object(create_thstone1_3091(6976, 1560), 4);
    add_background_object(create_thstone1_3091(7040, 1560), 4);
    add_background_object(create_thstone1_3091(7104, 1560), 4);
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
    add_object(create_cameralimitbossbottom_420(2264, -72), 5);
    add_object(create_cameralimitbossleft_421(2103, -192), 5);
    add_object(create_cameralimitbossright_422(2424, -192), 5);
    add_object(create_cameralimitbosstop_423(2264, -313), 5);
    add_object(create_cameratriggerboss_424(2120, -200), 5);
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
    loop_collapse_running = false;
    loop_collapse_index = 0;
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
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_57, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_57, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_57, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_57, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_57, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_57, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_57, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_57, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_57, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_57, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_57, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_57, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_57, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_57, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_57, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_57, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_57, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_57, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_57, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_57, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_57, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_57, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_57, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_57, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_57, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_57, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_57, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_57, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_57, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_57, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_57, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_57, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_57, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_57, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_57, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_57, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_57, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_57, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_57, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_57, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_57, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_57, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_57, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_57, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_57, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_57, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_57, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_57, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_57, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_57, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_57, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_57, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_57, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_57, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_1388_13 = loop_count;
    not_always_44_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_449_13 = loop_count;
    not_always_97_0 = loop_count;
    not_always_1449_13 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    not_always_101_0 = loop_count;
    not_always_1425_13 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    not_always_1717_17 = loop_count;
    once_condition_138_0 = false;
    not_always_68_13 = loop_count;
    not_always_1149_14 = loop_count;
    not_always_1037_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    once_condition_36_13 = false;
    not_always_1482_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_100_0 = loop_count;
    not_always_43_13 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_121_0 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1033_13 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    not_always_600_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_96_0 = loop_count;
    not_always_130_0 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    not_always_308_13 = loop_count;
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
    not_always_98_0 = loop_count;
    once_condition_63_0 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    not_always_1447_13 = loop_count;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_52_13 = loop_count;
    not_always_1036_13 = loop_count;
    not_always_1035_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_422_13 = loop_count;
    not_always_1295_13 = loop_count;
    not_always_522_13 = loop_count;
    once_condition_64_13 = false;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1148_14 = loop_count;
    once_condition_57_14 = false;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    once_condition_38_13 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    not_always_1034_13 = loop_count;
    not_always_558_13 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    not_always_45_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_57_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_450_13 = loop_count;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    not_always_1831_16 = loop_count;
    not_always_1456_13 = loop_count;
    not_always_99_0 = loop_count;
    group_mac_controls_1 = false;
    not_always_1740_14 = loop_count;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_234_13 = loop_count;
    not_always_140_0 = loop_count;
    not_always_553_13 = loop_count;
    not_always_813_13 = loop_count;
    not_always_64_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = false;
    group_pause_1 = false;
    not_always_41_13 = loop_count;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_540_13 = loop_count;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    not_always_1421_13 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_70_13 = loop_count;
    not_always_172_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    once_condition_63_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_174_8 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    once_condition_66_13 = false;
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1 = true;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    not_always_69_13 = loop_count;
    not_always_1039_13 = loop_count;
    not_always_95_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    once_condition_59_14 = false;
    not_always_809_13 = loop_count;
    once_condition_48_13 = false;
    not_always_103_0 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
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
    not_always_1741_14 = loop_count;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    once_condition_50_13 = false;
    once_condition_37_13 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_554_13 = loop_count;
    once_condition_35_13 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_12596()
{
    // event 1652_58
    {
        if (!(group_main_engine_1)) goto event_1652_58_end;
        enemybikeninjamask_3171_instances.clear_selection();
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (-1))) { it.deselect(); continue; }
        }
        if (!enemybikeninjamask_3171_instances.has_selection()) goto event_1652_58_end;
        FrameObject * single_instance_1652_58_0; single_instance_1652_58_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybikeninjamask_3171_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1652_58_0 == NULL)
                    single_instance_1652_58_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1652_58_0))->get_movement()->set_speed(50+randrange(30));
        ((Active*)((Active*)single_instance_1652_58_0))->force_frame(45+((Active*)get_single(enemybikeninjamask_3171_instances, default_active_instance))->alterables->values.get(0)*-1);
        for (ObjectIterator it(enemybikeninjamask_3171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1652_58_end: ;
}
void Frames::loop_spawndebris_58()
{
    event_func_1176();
    event_func_1177();
    event_func_1178();
    event_func_12378();
    event_func_12454();
    event_func_12596();
}
