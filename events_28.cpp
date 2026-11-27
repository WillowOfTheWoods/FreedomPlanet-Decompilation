#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_2418()
{
    // event 1260_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_5_earth_shield_1)) goto event_1260_13_end;
        shieldearth_314_instances.clear_selection();
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldearth_314_instances.has_selection()) goto event_1260_13_end;
        if (!((((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.get(18)) != (((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)))) goto event_1260_13_end;
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        ((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.set(18, ((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1));
    }
    event_1260_13_end: ;
}
void Frames::event_func_2419()
{
    // event 1261_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_5_earth_shield_1)) goto event_1261_13_end;
        shieldearth_314_instances.clear_selection();
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldearth_314_instances.has_selection()) goto event_1261_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) != (1))) goto event_1261_13_end;
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_single(shieldearth_314_instances, default_active_instance))->move_front(((Active*)get_instance(playerskinsash_418_instances)));
    }
    event_1261_13_end: ;
}
void Frames::event_func_2420()
{
    // event 1262_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_5_earth_shield_1)) goto event_1262_13_end;
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+120))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-120))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+120))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-120))) { it.deselect(); continue; }
        }
        if (!objectcrystal_279_instances.has_selection()) goto event_1262_13_end;
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(4);
        }
    }
    event_1262_13_end: ;
}
void Frames::event_func_2421()
{
    // event 1263_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_5_earth_shield_1)) goto event_1263_13_end;
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!objectcrystal_279_instances.has_selection()) goto event_1263_13_end;
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1263_13_end: ;
}
void Frames::event_func_2422()
{
    // event 1264_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_5_earth_shield_1)) goto event_1264_13_end;
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->is_near_border(-50))) { it.deselect(); continue; }
        }
        if (!objectcrystal_279_instances.has_selection()) goto event_1264_13_end;
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
            ((Active*)*it)->alterables->flags.disable(0);
            ((Active*)*it)->advance_movement(-1);
            ((Active*)*it)->alterables->values.set(7, 0.5);
            ((Active*)*it)->alterables->values.set(6, 8);
        }
    }
    event_1264_13_end: ;
}
void Frames::event_func_2423()
{
    // event 1282_13
    {
        if (!(group_main_engine_1)) goto event_1282_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (1))) goto event_1282_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (0))) goto event_1282_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1282_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1282_13_end;
        if (!((((Active*)get_instance(laddertop_357_instances))->get_y()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)))) goto event_1282_13_end;
        if (!((((Active*)get_instance(laddertop_357_instances))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-15))) goto event_1282_13_end;
        if (!((((Active*)get_instance(laddertop_357_instances))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+15))) goto event_1282_13_end;
        if (!(test_ladder(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)))) goto event_1282_13_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) < (4))) goto event_1282_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 27);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 46);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(laddertop_357_instances))->get_x());
        media.stop_sample(SOUND_COMMON_ROLLING_2_7);
    }
    event_1282_13_end: ;
}
void Frames::event_func_2424()
{
    // event 1283_13
    {
        if (!(group_main_engine_1)) goto event_1283_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_1283_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (0))) goto event_1283_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1283_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1283_13_end;
        playersensorbottombig_397_instances.clear_selection();
        laddertop_357_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, laddertop_357_instances)) goto event_1283_13_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) < (4))) goto event_1283_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (46))) goto event_1283_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) < (4))) goto event_1283_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 28);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 25);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(laddertop_357_instances))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(laddertop_357_instances))->get_y()+8);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 4);
        media.stop_sample(SOUND_COMMON_ROLLING_2_7);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(14, 0);
    }
    event_1283_13_end: ;
}
void Frames::event_func_2425()
{
    // event 1284_13
    {
        if (!(group_main_engine_1)) goto event_1284_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(12)) == (4))) goto event_1284_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (25))) goto event_1284_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 0);
    }
    event_1284_13_end: ;
}
void Frames::event_func_2426()
{
    // event 1285_13
    {
        if (!(group_main_engine_1)) goto event_1285_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (1))) goto event_1285_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (0))) goto event_1285_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1285_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1285_13_end;
        if (!((((Active*)get_instance(laddertop_357_instances))->get_y()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)))) goto event_1285_13_end;
        if (!((((Active*)get_instance(laddertop_357_instances))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-25))) goto event_1285_13_end;
        if (!((((Active*)get_instance(laddertop_357_instances))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)))) goto event_1285_13_end;
        if (!(test_ladder(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)))) goto event_1285_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) >= (4))) goto event_1285_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 47);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 46);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(laddertop_357_instances))->get_x());
        media.stop_sample(SOUND_COMMON_ROLLING_2_7);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
    }
    event_1285_13_end: ;
}
void Frames::event_func_2427()
{
    // event 1286_13
    {
        if (!(group_main_engine_1)) goto event_1286_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (1))) goto event_1286_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (0))) goto event_1286_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1286_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1286_13_end;
        if (!((((Active*)get_instance(laddertop_357_instances))->get_y()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)))) goto event_1286_13_end;
        if (!((((Active*)get_instance(laddertop_357_instances))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-25))) goto event_1286_13_end;
        if (!((((Active*)get_instance(laddertop_357_instances))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)))) goto event_1286_13_end;
        if (!(test_ladder(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)))) goto event_1286_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) <= (-4))) goto event_1286_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 47);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 46);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(laddertop_357_instances))->get_x());
        media.stop_sample(SOUND_COMMON_ROLLING_2_7);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, -1);
    }
    event_1286_13_end: ;
}
void Frames::event_func_2428()
{
    // event 1287_13
    {
        if (!(group_main_engine_1)) goto event_1287_13_end;
        qualifier_14.clear_selection();
        spread_value(qualifier_14, 8, 0);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(18, get_max(((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.get(18)-1, 0));
    }
    event_1287_13_end: ;
}
void Frames::event_func_2429()
{
    // event 1288_13
    {
        if (!(group_main_engine_1)) goto event_1288_13_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1288_13_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(4);
        }
    }
    event_1288_13_end: ;
}
void Frames::event_func_2430()
{
    // event 1289_13
    {
        if (!(group_main_engine_1)) goto event_1289_13_end;
        {
            loop_iterate_pushables_running = true;
            int times = int(qualifier_14.size());
            loop_iterate_pushables_index = 0;
            while (loop_iterate_pushables_index < times) {
                loop_iterate_pushables_13();
                if (!loop_iterate_pushables_running) break;
                loop_iterate_pushables_index++;
            }
        }
    }
    event_1289_13_end: ;
}
void Frames::event_func_2431()
{
    // event 1294_13
    {
        if (!(group_main_engine_1)) goto event_1294_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (11))) goto event_1294_13_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(5);
        }
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.add(11, 1);
    }
    event_1294_13_end: ;
}
void Frames::event_func_2432()
{
    // event 1295_13
    {
        if (!(group_main_engine_1)) goto event_1295_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (11))) goto event_1295_13_end;
        if (not_always_1295_13 > loop_count) {
            not_always_1295_13 = loop_count + 2;
            goto event_1295_13_end;
        }
        not_always_1295_13 = loop_count + 2;
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(11, 0);
        {
            loop_sound_stoppush_running = true;
            int times = int(1);
            loop_sound_stoppush_index = 0;
            while (loop_sound_stoppush_index < times) {
                loop_sound_stoppush_0();
                if (!loop_sound_stoppush_running) break;
                loop_sound_stoppush_index++;
            }
        }
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1295_13_end: ;
}
void Frames::event_func_2433()
{
    // event 1296_13
    {
        if (!(group_main_engine_1)) goto event_1296_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (11))) goto event_1296_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (1))) goto event_1296_13_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1296_13_end;
        playersensorrightbig_393_instances.clear_selection();
        if (!check_overlap(qualifier_14, playersensorrightbig_393_instances)) goto event_1296_13_end;
        if (test_obstacle(((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(2), ((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(3)-2)) goto event_1296_13_end;
        if (test_obstacle(((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(2), ((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(1))) goto event_1296_13_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1296_13_end: ;
}
void Frames::event_func_2434()
{
    // event 1297_13
    {
        if (!(group_main_engine_1)) goto event_1297_13_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1297_13_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+1);
            ((Active*)*it)->alterables->values.set(1, 4);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+1);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(11, 0);
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_13();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
        {
            loop_reposition_skin_running = true;
            int times = int(1);
            loop_reposition_skin_index = 0;
            while (loop_reposition_skin_index < times) {
                loop_reposition_skin_13();
                if (!loop_reposition_skin_running) break;
                loop_reposition_skin_index++;
            }
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(18, 4);
    }
    event_1297_13_end: ;
}
void Frames::event_func_2435()
{
    // event 1298_13
    {
        if (!(group_main_engine_1)) goto event_1298_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (11))) goto event_1298_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_1298_13_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1298_13_end;
        playersensorleftbig_391_instances.clear_selection();
        if (!check_overlap(qualifier_14, playersensorleftbig_391_instances)) goto event_1298_13_end;
        if (test_obstacle(((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(0)-1, ((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(3)-2)) goto event_1298_13_end;
        if (test_obstacle(((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(0)-1, ((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(1))) goto event_1298_13_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -1);
        }
    }
    event_1298_13_end: ;
}
void Frames::event_func_2436()
{
    // event 1299_13
    {
        if (!(group_main_engine_1)) goto event_1299_13_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1299_13_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-1);
            ((Active*)*it)->alterables->values.set(1, 4);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-1);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(11, 0);
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_13();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
        {
            loop_reposition_skin_running = true;
            int times = int(1);
            loop_reposition_skin_index = 0;
            while (loop_reposition_skin_index < times) {
                loop_reposition_skin_13();
                if (!loop_reposition_skin_running) break;
                loop_reposition_skin_index++;
            }
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(18, 4);
    }
    event_1299_13_end: ;
}
void Frames::event_func_2437()
{
    // event 1300_13
    {
        if (!(group_main_engine_1)) goto event_1300_13_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(11)) == (40))) goto event_1300_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.add(11, 1);
        {
            loop_sound_cantmoveit_running = true;
            int times = int(1);
            loop_sound_cantmoveit_index = 0;
            while (loop_sound_cantmoveit_index < times) {
                loop_sound_cantmoveit_8();
                if (!loop_sound_cantmoveit_running) break;
                loop_sound_cantmoveit_index++;
            }
        }
    }
    event_1300_13_end: ;
}
void Frames::event_func_2438()
{
    // event 1301_13
    {
        if (!(group_main_engine_1)) goto event_1301_13_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1301_13_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1301_13_end: ;
}
void Frames::event_func_2439()
{
    // event 1302_13
    {
        if (!(group_main_engine_1)) goto event_1302_13_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1302_13_end;
        FrameObject * single_instance_1302_13_0; single_instance_1302_13_0 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_14); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust_305(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1302_13_0 == NULL)
                    single_instance_1302_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1302_13_0))->set_y(((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(3));
        ((Active*)((Active*)single_instance_1302_13_0))->set_x(((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(0)+randrange(((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(2)-((Active*)get_single(qualifier_14, default_active_instance))->get_box_index(0)));
        ((Active*)((Active*)single_instance_1302_13_0))->set_angle(randrange(360), 0);
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    event_1302_13_end: ;
}
void Frames::event_func_2440()
{
    // event 1303_13
    {
        if (!(group_main_engine_1)) goto event_1303_13_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1303_13_end;
        if (!(!media.is_sample_playing(SOUND_DRAG_43))) goto event_1303_13_end;
        media.play_id(SOUND_DRAG_43, -1, 0);
    }
    event_1303_13_end: ;
}
void Frames::event_func_2441()
{
    // event 1304_13
    {
        if (!(group_main_engine_1)) goto event_1304_13_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (1))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1304_13_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 1);
        }
    }
    event_1304_13_end: ;
}
void Frames::event_func_2442()
{
    // event 1305_13
    {
        if (!(group_main_engine_1)) goto event_1305_13_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1305_13_end;
        if (!media.is_sample_playing(SOUND_DRAG_43)) goto event_1305_13_end;
        media.stop_sample(SOUND_DRAG_43);
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1305_13_end: ;
}
void Frames::event_func_2443()
{
    // event 1306_13
    {
        if (!(group_main_engine_1)) goto event_1306_13_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(4))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1306_13_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->alterables->values.add(5, 0.25);
        }
    }
    event_1306_13_end: ;
}
void Frames::event_func_2444()
{
    // event 1307_13
    bool or_result_1307_13 = false;
    bool or_temp_result_1307_13_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1307_13_0_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto or_event_1307_13_0_end;
        or_result_1307_13 = true;
        or_temp_result_1307_13_0 = true;
    }
    or_event_1307_13_0_end: ;
    qualifier_14.clear_saved_selection();
    if (or_temp_result_1307_13_0) {
        qualifier_14.save_selection();
    }
    // event 1307_13
    bool or_temp_result_1307_13_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1307_13_1_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto or_event_1307_13_1_end;
        or_result_1307_13 = true;
        or_temp_result_1307_13_1 = true;
        or_event_1307_13_1_end: ;
        if (or_temp_result_1307_13_1) {
            qualifier_14.save_selection();
        }
        if (!or_result_1307_13) goto or_final_or_event_1307_13_1_end;
        qualifier_14.clear_selection();
        if (or_temp_result_1307_13_0 || or_temp_result_1307_13_1) {
            qualifier_14.restore_selection();
        }
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    or_final_or_event_1307_13_1_end: ;
}
void Frames::event_func_2445()
{
    // event 1308_13
    {
        if (!(group_main_engine_1)) goto event_1308_13_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (frame_left()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (frame_right()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (frame_top()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (frame_bottom()))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1308_13_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    event_1308_13_end: ;
}
void Frames::event_func_2446()
{
    // event 1309_13
    bool or_result_1309_13 = false;
    bool or_temp_result_1309_13_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1309_13_0_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) <= (frame_left()))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto or_event_1309_13_0_end;
        or_result_1309_13 = true;
        or_temp_result_1309_13_0 = true;
    }
    or_event_1309_13_0_end: ;
    qualifier_14.clear_saved_selection();
    if (or_temp_result_1309_13_0) {
        qualifier_14.save_selection();
    }
    // event 1309_13
    bool or_temp_result_1309_13_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1309_13_1_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (frame_right()))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto or_event_1309_13_1_end;
        or_result_1309_13 = true;
        or_temp_result_1309_13_1 = true;
    }
    or_event_1309_13_1_end: ;
    if (or_temp_result_1309_13_1) {
        qualifier_14.save_selection();
    }
    // event 1309_13
    bool or_temp_result_1309_13_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1309_13_2_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) <= (frame_top()))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto or_event_1309_13_2_end;
        or_result_1309_13 = true;
        or_temp_result_1309_13_2 = true;
        or_event_1309_13_2_end: ;
        if (or_temp_result_1309_13_2) {
            qualifier_14.save_selection();
        }
        if (!or_result_1309_13) goto or_final_or_event_1309_13_2_end;
        qualifier_14.clear_selection();
        if (or_temp_result_1309_13_0 || or_temp_result_1309_13_1 || or_temp_result_1309_13_2) {
            qualifier_14.restore_selection();
        }
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(3);
        }
    }
    or_final_or_event_1309_13_2_end: ;
}
void Frames::event_func_2447()
{
    // event 1310_13
    {
        if (!(group_main_engine_1)) goto event_1310_13_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (height+32))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1310_13_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1310_13_end: ;
}
void Frames::event_func_2448()
{
    // event 1311_13
    {
        if (!(group_main_engine_1)) goto event_1311_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(25)) == (0))) goto event_1311_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (20))) goto event_1311_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (21))) goto event_1311_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (26))) goto event_1311_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (44))) goto event_1311_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1311_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1311_13_end;
        playercharactersensor_383_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(playercharactersensor_383_instances, qualifier_20)) goto event_1311_13_end;
        FrameObject * single_instance_1311_13_0; single_instance_1311_13_0 = pick_random(qualifier_20);
        if (single_instance_1311_13_0 == NULL) goto event_1311_13_end;
        if (!((((Active*)single_instance_1311_13_0)->alterables->values.get(1)) > (0))) goto event_1311_13_end;
        if (!((((Active*)single_instance_1311_13_0)->alterables->values.get(2)) <= (0))) goto event_1311_13_end;
        if (!(((Active*)single_instance_1311_13_0)->alterables->flags.is_off(6))) goto event_1311_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, ((Active*)single_instance_1311_13_0)->alterables->values.get(1));
    }
    event_1311_13_end: ;
}
void Frames::event_func_2449()
{
    // event 1312_13
    {
        if (!(group_main_engine_1)) goto event_1312_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(25)) == (1))) goto event_1312_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1312_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_1312_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(8)) < (4))) goto event_1312_13_end;
        playersensorbottombig_397_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, qualifier_20)) goto event_1312_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1312_13_end;
        FrameObject * single_instance_1312_13_0; single_instance_1312_13_0 = pick_random(qualifier_20);
        if (single_instance_1312_13_0 == NULL) goto event_1312_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(8, 1);
        ((Active*)((Active*)single_instance_1312_13_0))->alterables->values.set(2, 5);
        ((Active*)((Active*)single_instance_1312_13_0))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)/math_helper/2.0);
        ((Active*)((Active*)single_instance_1312_13_0))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6));
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        ((Active*)((Active*)single_instance_1312_13_0))->alterables->values.sub(0, 3+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)/math_helper/5));
        {
            ((Active*)single_instance_1312_13_0)->set_shader(Render::INVERT);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(10, 5);
    }
    event_1312_13_end: ;
}
void Frames::event_func_2450()
{
    // event 1313_13
    {
        if (!(group_main_engine_1)) goto event_1313_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(25)) == (1))) goto event_1313_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1313_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_1313_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(8)) < (4))) goto event_1313_13_end;
        playersensorbottombig_397_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, qualifier_20)) goto event_1313_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(5))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1313_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(8, 1);
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 5);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(10, 5);
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
    }
    event_1313_13_end: ;
}
void Frames::event_func_2451()
{
    // event 1314_13
    {
        if (!(group_main_engine_1)) goto event_1314_13_end;
        qualifier_14.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(qualifier_14, qualifier_20)) goto event_1314_13_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(4))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1314_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1314_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 5);
            ((Active*)*it)->alterables->values.set(23, -2+randrange(5));
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(qualifier_14, it.current_index, default_active_instance))->alterables->values.get(5)+4);
        }
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 4+get_abs(((Active*)get_single(qualifier_14, it.current_index, default_active_instance))->alterables->values.get(5)/math_helper/5));
        }
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 4);
        }
    }
    event_1314_13_end: ;
}
void Frames::event_func_2452()
{
    // event 1315_13
    {
        if (!(group_main_engine_1)) goto event_1315_13_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1315_13_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(7, 1);
        }
    }
    event_1315_13_end: ;
}
void Frames::event_func_2453()
{
    // event 1316_13
    {
        if (!(group_main_engine_1)) goto event_1316_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(25)) == (1))) goto event_1316_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) < (0))) goto event_1316_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_1316_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(8)) < (4))) goto event_1316_13_end;
        playersensortopbig_395_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, qualifier_20)) goto event_1316_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1316_13_end;
        FrameObject * single_instance_1316_13_0; single_instance_1316_13_0 = pick_random(qualifier_20);
        if (single_instance_1316_13_0 == NULL) goto event_1316_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(8, 1);
        ((Active*)((Active*)single_instance_1316_13_0))->alterables->values.set(2, 5);
        ((Active*)((Active*)single_instance_1316_13_0))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)/math_helper/2.0);
        ((Active*)((Active*)single_instance_1316_13_0))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6));
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        ((Active*)((Active*)single_instance_1316_13_0))->alterables->values.sub(0, 3+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)/math_helper/5));
        {
            ((Active*)single_instance_1316_13_0)->set_shader(Render::INVERT);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(10, 5);
    }
    event_1316_13_end: ;
}
void Frames::event_func_2454()
{
    // event 1317_13
    {
        if (!(group_main_engine_1)) goto event_1317_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(25)) == (1))) goto event_1317_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) < (0))) goto event_1317_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_1317_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(8)) < (4))) goto event_1317_13_end;
        playersensortopbig_395_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, qualifier_20)) goto event_1317_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(5))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1317_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(8, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(10, 5);
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 5);
        }
    }
    event_1317_13_end: ;
}
void Frames::event_func_2455()
{
    // event 1318_13
    {
        if (!(group_main_engine_1)) goto event_1318_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_1318_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (5))) goto event_1318_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_1318_13_end;
        playersensorrightbig_393_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, qualifier_20)) goto event_1318_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1318_13_end;
        FrameObject * single_instance_1318_13_0; single_instance_1318_13_0 = pick_random(qualifier_20);
        if (single_instance_1318_13_0 == NULL) goto event_1318_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(8, 1);
        ((Active*)((Active*)single_instance_1318_13_0))->alterables->values.set(2, 5);
        ((Active*)((Active*)single_instance_1318_13_0))->alterables->values.set(23, get_max(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-2), 3)*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)((Active*)single_instance_1318_13_0))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)/math_helper/2.0);
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        ((Active*)((Active*)single_instance_1318_13_0))->alterables->values.sub(0, 1+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)/math_helper/4));
        {
            ((Active*)single_instance_1318_13_0)->set_shader(Render::INVERT);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(10, 3);
    }
    event_1318_13_end: ;
}
void Frames::event_func_2456()
{
    // event 1319_13
    {
        if (!(group_main_engine_1)) goto event_1319_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_1319_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (-5))) goto event_1319_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_1319_13_end;
        playersensorleftbig_391_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, qualifier_20)) goto event_1319_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1319_13_end;
        FrameObject * single_instance_1319_13_0; single_instance_1319_13_0 = pick_random(qualifier_20);
        if (single_instance_1319_13_0 == NULL) goto event_1319_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(8, 1);
        ((Active*)((Active*)single_instance_1319_13_0))->alterables->values.set(2, 5);
        ((Active*)((Active*)single_instance_1319_13_0))->alterables->values.set(23, get_max(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-2), 3)*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)((Active*)single_instance_1319_13_0))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)/math_helper/2.0);
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        ((Active*)((Active*)single_instance_1319_13_0))->alterables->values.sub(0, 1+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)/math_helper/4));
        {
            ((Active*)single_instance_1319_13_0)->set_shader(Render::INVERT);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(10, 3);
    }
    event_1319_13_end: ;
}
void Frames::event_func_2457()
{
    // event 1320_13
    {
        if (!(group_main_engine_1)) goto event_1320_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_1320_13_end;
        shieldinstashield_359_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(shieldinstashield_359_instances, qualifier_20)) goto event_1320_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1320_13_end;
        FrameObject * single_instance_1320_13_0; single_instance_1320_13_0 = pick_random(qualifier_20);
        if (single_instance_1320_13_0 == NULL) goto event_1320_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(8, 1);
        ((Active*)((Active*)single_instance_1320_13_0))->alterables->values.set(2, 5+((Active*)get_single(shieldinstashield_359_instances, default_active_instance))->alterables->values.get(0));
        ((Active*)((Active*)single_instance_1320_13_0))->alterables->values.set(23, get_max(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*1.5), 3-((Active*)get_single(shieldinstashield_359_instances, default_active_instance))->alterables->values.get(0))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)((Active*)single_instance_1320_13_0))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)/math_helper/2.0);
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        ((Active*)((Active*)single_instance_1320_13_0))->alterables->values.sub(0, 4-((Active*)get_single(shieldinstashield_359_instances, default_active_instance))->alterables->values.get(0)+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)/math_helper/10));
        {
            ((Active*)single_instance_1320_13_0)->set_shader(Render::INVERT);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(10, 5-((Active*)get_single(shieldinstashield_359_instances, default_active_instance))->alterables->flags.get(4)*5);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    event_1320_13_end: ;
}
void Frames::event_func_2458()
{
    // event 1321_13
    {
        if (!(group_main_engine_1)) goto event_1321_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_1321_13_end;
        shieldinstashield_359_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(shieldinstashield_359_instances, qualifier_20)) goto event_1321_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(5))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1321_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(8, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(10, 5-((Active*)get_single(shieldinstashield_359_instances, default_active_instance))->alterables->flags.get(4)*5);
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 5+((Active*)get_single(shieldinstashield_359_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
    }
    event_1321_13_end: ;
}
void Frames::event_func_2459()
{
    // event 1322_13
    {
        if (!(group_main_engine_1)) goto event_1322_13_end;
        qualifier_20.clear_selection();
        playerreflect_447_instances.clear_selection();
        if (!check_overlap(qualifier_20, playerreflect_447_instances)) goto event_1322_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (3))) goto event_1322_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(5)) < (15))) goto event_1322_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1322_13_end;
        FrameObject * single_instance_1322_13_0; single_instance_1322_13_0 = pick_random(qualifier_20);
        if (single_instance_1322_13_0 == NULL) goto event_1322_13_end;
        ((Active*)((Active*)single_instance_1322_13_0))->alterables->values.set(2, 5);
        ((Active*)((Active*)single_instance_1322_13_0))->alterables->values.set(23, ((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(23)*0.75);
        ((Active*)((Active*)single_instance_1322_13_0))->alterables->values.set(24, ((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(24)*0.75);
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        ((Active*)((Active*)single_instance_1322_13_0))->alterables->values.sub(0, ((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(7)-1+get_max(1, global_values->get(12)));
        {
            ((Active*)single_instance_1322_13_0)->set_shader(Render::INVERT);
        }
    }
    event_1322_13_end: ;
}
void Frames::event_func_2460()
{
    // event 1323_13
    {
        if (!(group_main_engine_1)) goto event_1323_13_end;
        qualifier_20.clear_selection();
        playerreflect_447_instances.clear_selection();
        if (!check_overlap(qualifier_20, playerreflect_447_instances)) goto event_1323_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (3))) goto event_1323_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(5)) < (15))) goto event_1323_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1323_13_end;
        FrameObject * single_instance_1323_13_0; single_instance_1323_13_0 = pick_random(qualifier_20);
        if (single_instance_1323_13_0 == NULL) goto event_1323_13_end;
        ((Active*)((Active*)single_instance_1323_13_0))->alterables->values.set(2, 5);
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
    }
    event_1323_13_end: ;
}
void Frames::event_func_2461()
{
    // event 1324_13
    {
        if (!(group_main_engine_1)) goto event_1324_13_end;
        qualifier_20.clear_selection();
        playerreflect_447_instances.clear_selection();
        if (!check_overlap(qualifier_20, playerreflect_447_instances)) goto event_1324_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (5))) goto event_1324_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(5)) < (3))) goto event_1324_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1324_13_end;
        FrameObject * single_instance_1324_13_0; single_instance_1324_13_0 = pick_random(qualifier_20);
        if (single_instance_1324_13_0 == NULL) goto event_1324_13_end;
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        ((Active*)((Active*)single_instance_1324_13_0))->alterables->values.set(2, 5);
        ((Active*)((Active*)single_instance_1324_13_0))->alterables->values.set(23, cos_deg(((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(2))*5*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)((Active*)single_instance_1324_13_0))->alterables->values.set(24, sin_deg(((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(2))*-5*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)((Active*)single_instance_1324_13_0))->alterables->values.sub(0, ((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(7)-1+get_max(1, global_values->get(12)));
        {
            ((Active*)single_instance_1324_13_0)->set_shader(Render::INVERT);
        }
    }
    event_1324_13_end: ;
}
void Frames::event_func_2462()
{
    // event 1325_13
    {
        if (!(group_main_engine_1)) goto event_1325_13_end;
        qualifier_20.clear_selection();
        playerreflect_447_instances.clear_selection();
        if (!check_overlap(qualifier_20, playerreflect_447_instances)) goto event_1325_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (5))) goto event_1325_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(5)) < (15))) goto event_1325_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1325_13_end;
        FrameObject * single_instance_1325_13_0; single_instance_1325_13_0 = pick_random(qualifier_20);
        if (single_instance_1325_13_0 == NULL) goto event_1325_13_end;
        ((Active*)((Active*)single_instance_1325_13_0))->alterables->values.set(2, 5);
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
    }
    event_1325_13_end: ;
}
void Frames::event_func_2463()
{
    // event 1326_13
    {
        if (!(group_main_engine_1)) goto event_1326_13_end;
        if (!((global_values->get(3)%math_helper%8) == (0))) goto event_1326_13_end;
        shieldflamefront_316_instances.clear_selection();
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!shieldflamefront_316_instances.has_selection()) goto event_1326_13_end;
        qualifier_20.clear_selection();
        if (!check_overlap(shieldflamefront_316_instances, qualifier_20)) goto event_1326_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1326_13_end;
        FrameObject * single_instance_1326_13_0; single_instance_1326_13_0 = pick_random(qualifier_20);
        if (single_instance_1326_13_0 == NULL) goto event_1326_13_end;
        ((Active*)((Active*)single_instance_1326_13_0))->alterables->values.set(2, 3);
        ((Active*)((Active*)single_instance_1326_13_0))->alterables->values.set(23, get_max(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*1.5), 2)*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)((Active*)single_instance_1326_13_0))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)/math_helper/2.0);
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        ((Active*)((Active*)single_instance_1326_13_0))->alterables->values.sub(0, 1);
        {
            ((Active*)single_instance_1326_13_0)->set_shader(Render::INVERT);
        }
    }
    event_1326_13_end: ;
}
void Frames::event_func_2464()
{
    // event 1327_13
    {
        if (!(group_main_engine_1)) goto event_1327_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_1327_13_end;
        playerprojectile_320_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(playerprojectile_320_instances, qualifier_20)) goto event_1327_13_end;
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerprojectile_320_instances.has_selection()) goto event_1327_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1327_13_end;
        FrameObject * single_instance_1327_13_0; single_instance_1327_13_0 = pick_random(qualifier_20);
        if (single_instance_1327_13_0 == NULL) goto event_1327_13_end;
        ((Active*)((Active*)single_instance_1327_13_0))->alterables->values.set(2, 3);
        ((Active*)((Active*)single_instance_1327_13_0))->alterables->values.set(23, ((Active*)get_single(playerprojectile_320_instances, default_active_instance))->alterables->values.get(2)/math_helper/2.0);
        ((Active*)((Active*)single_instance_1327_13_0))->alterables->values.set(24, ((Active*)get_single(playerprojectile_320_instances, default_active_instance))->alterables->values.get(3)/math_helper/2.0);
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        ((Active*)((Active*)single_instance_1327_13_0))->alterables->values.sub(0, ((Active*)get_single(playerprojectile_320_instances, default_active_instance))->alterables->values.get(8));
        {
            ((Active*)single_instance_1327_13_0)->set_shader(Render::INVERT);
        }
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.add(0, 5);
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1327_13_end: ;
}
void Frames::event_func_2465()
{
    // event 1328_13
    {
        if (!(group_main_engine_1)) goto event_1328_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_1328_13_end;
        playerprojectile_320_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(playerprojectile_320_instances, qualifier_20)) goto event_1328_13_end;
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerprojectile_320_instances.has_selection()) goto event_1328_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(5))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1328_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 3);
        }
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1328_13_end: ;
}
void Frames::event_func_2466()
{
    // event 1329_13
    {
        if (!(group_main_engine_1)) goto event_1329_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_1329_13_end;
        playerprojectile_320_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(playerprojectile_320_instances, qualifier_20)) goto event_1329_13_end;
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (0))) { it.deselect(); continue; }
        }
        if (!playerprojectile_320_instances.has_selection()) goto event_1329_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1329_13_end;
        FrameObject * single_instance_1329_13_0; single_instance_1329_13_0 = pick_random(qualifier_20);
        if (single_instance_1329_13_0 == NULL) goto event_1329_13_end;
        ((Active*)((Active*)single_instance_1329_13_0))->alterables->values.set(2, 3);
        ((Active*)((Active*)single_instance_1329_13_0))->alterables->values.set(23, ((Active*)get_single(playerprojectile_320_instances, default_active_instance))->alterables->values.get(2)/math_helper/2.0);
        ((Active*)((Active*)single_instance_1329_13_0))->alterables->values.set(24, ((Active*)get_single(playerprojectile_320_instances, default_active_instance))->alterables->values.get(3)/math_helper/2.0);
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        ((Active*)((Active*)single_instance_1329_13_0))->alterables->values.sub(0, ((Active*)get_single(playerprojectile_320_instances, default_active_instance))->alterables->values.get(8));
        {
            ((Active*)single_instance_1329_13_0)->set_shader(Render::INVERT);
        }
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    event_1329_13_end: ;
}
void Frames::event_func_2467()
{
    // event 1330_13
    {
        if (!(group_main_engine_1)) goto event_1330_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_1330_13_end;
        playerprojectile_320_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(playerprojectile_320_instances, qualifier_20)) goto event_1330_13_end;
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (0))) { it.deselect(); continue; }
        }
        if (!playerprojectile_320_instances.has_selection()) goto event_1330_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(5))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1330_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 3);
        }
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    event_1330_13_end: ;
}
void Frames::event_func_2468()
{
    // event 1331_13
    {
        if (!(group_main_engine_1)) goto event_1331_13_end;
        qualifier_19.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(qualifier_19, qualifier_20)) goto event_1331_13_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1331_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1331_13_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 3);
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(qualifier_19, it.current_index, default_active_instance))->alterables->values.get(23)/math_helper/2.0);
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(qualifier_19, it.current_index, default_active_instance))->alterables->values.get(24)/math_helper/2.0);
            ((Active*)*it)->alterables->values.sub(0, 15);
        }
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
    }
    event_1331_13_end: ;
}
void Frames::event_func_2469()
{
    // event 1332_13
    {
        if (!(group_main_engine_1)) goto event_1332_13_end;
        qualifier_19.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(qualifier_19, qualifier_20)) goto event_1332_13_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1332_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1332_13_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
    }
    event_1332_13_end: ;
}
void Frames::event_func_2470()
{
    // event 1333_13
    {
        if (!(group_main_engine_1)) goto event_1333_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(25)) == (1))) goto event_1333_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_1333_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(8)) < (4))) goto event_1333_13_end;
        playersensorleftbig_391_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, qualifier_20)) goto event_1333_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1333_13_end;
        FrameObject * single_instance_1333_13_0; single_instance_1333_13_0 = pick_random(qualifier_20);
        if (single_instance_1333_13_0 == NULL) goto event_1333_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(8, 1);
        ((Active*)((Active*)single_instance_1333_13_0))->alterables->values.set(2, 5);
        ((Active*)((Active*)single_instance_1333_13_0))->alterables->values.set(23, get_max(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*1.5), 3)*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)((Active*)single_instance_1333_13_0))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)/math_helper/2.0);
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        ((Active*)((Active*)single_instance_1333_13_0))->alterables->values.sub(0, 3+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)/math_helper/5));
        {
            ((Active*)single_instance_1333_13_0)->set_shader(Render::INVERT);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(10, 5);
    }
    event_1333_13_end: ;
}
void Frames::event_func_2471()
{
    // event 1334_13
    {
        if (!(group_main_engine_1)) goto event_1334_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(25)) == (1))) goto event_1334_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_1334_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(8)) < (4))) goto event_1334_13_end;
        playersensorleftbig_391_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, qualifier_20)) goto event_1334_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(5))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1334_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(8, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(10, 5);
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 5);
        }
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
    }
    event_1334_13_end: ;
}
void Frames::event_func_2472()
{
    // event 1335_13
    {
        if (!(group_main_engine_1)) goto event_1335_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(25)) == (1))) goto event_1335_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_1335_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(8)) < (4))) goto event_1335_13_end;
        playersensorrightbig_393_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, qualifier_20)) goto event_1335_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1335_13_end;
        FrameObject * single_instance_1335_13_0; single_instance_1335_13_0 = pick_random(qualifier_20);
        if (single_instance_1335_13_0 == NULL) goto event_1335_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(8, 1);
        ((Active*)((Active*)single_instance_1335_13_0))->alterables->values.set(2, 5);
        ((Active*)((Active*)single_instance_1335_13_0))->alterables->values.set(23, get_max(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*1.5), 3)*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)((Active*)single_instance_1335_13_0))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)/math_helper/2.0);
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        ((Active*)((Active*)single_instance_1335_13_0))->alterables->values.sub(0, 3+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)/math_helper/5));
        {
            ((Active*)single_instance_1335_13_0)->set_shader(Render::INVERT);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(10, 5);
    }
    event_1335_13_end: ;
}
void Frames::event_func_2473()
{
    // event 1336_13
    {
        if (!(group_main_engine_1)) goto event_1336_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(25)) == (1))) goto event_1336_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_1336_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(8)) < (4))) goto event_1336_13_end;
        playersensorrightbig_393_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, qualifier_20)) goto event_1336_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(5))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1336_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(8, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(10, 5);
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 5);
        }
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
    }
    event_1336_13_end: ;
}
void Frames::event_func_2474()
{
    // event 1337_13
    {
        if (!(group_main_engine_1)) goto event_1337_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(25)) == (1))) goto event_1337_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_1337_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(8)) < (4))) goto event_1337_13_end;
        playercharactersensor_383_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(playercharactersensor_383_instances, qualifier_20)) goto event_1337_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1337_13_end;
        FrameObject * single_instance_1337_13_0; single_instance_1337_13_0 = pick_random(qualifier_20);
        if (single_instance_1337_13_0 == NULL) goto event_1337_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(8, 1);
        ((Active*)((Active*)single_instance_1337_13_0))->alterables->values.set(2, 5);
        ((Active*)((Active*)single_instance_1337_13_0))->alterables->values.set(23, get_max(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*1.5), 3)*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)((Active*)single_instance_1337_13_0))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6));
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        ((Active*)((Active*)single_instance_1337_13_0))->alterables->values.sub(0, 1);
        {
            ((Active*)single_instance_1337_13_0)->set_shader(Render::INVERT);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(10, 5);
    }
    event_1337_13_end: ;
}
void Frames::event_func_2475()
{
    // event 1338_13
    {
        if (!(group_main_engine_1)) goto event_1338_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(25)) == (1))) goto event_1338_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_1338_13_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.is_on(8))) goto event_1338_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) >= (30))) goto event_1338_13_end;
        player_389_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(player_389_instances, qualifier_20)) goto event_1338_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1338_13_end;
        media.play_id(SOUND_COMMON_EXPLODE7B_2_316, -1, 1);
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 20);
        }
    }
    event_1338_13_end: ;
}
void Frames::event_func_2476()
{
    // event 1339_13
    {
        if (!(group_main_engine_1)) goto event_1339_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(25)) == (1))) goto event_1339_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_1339_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(8)) < (4))) goto event_1339_13_end;
        playercharactersensor_383_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(playercharactersensor_383_instances, qualifier_20)) goto event_1339_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(5))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1339_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(8, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(10, 5);
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 5);
        }
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
    }
    event_1339_13_end: ;
}
void Frames::event_func_2477()
{
    // event 1340_13
    {
        if (!(group_main_engine_1)) goto event_1340_13_end;
        monitoricon_331_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(monitoricon_331_instances, qualifier_20)) goto event_1340_13_end;
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (9))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1340_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1340_13_end;
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(25))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1340_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 5);
            ((Active*)*it)->alterables->values.set(23, -2+randrange(5));
            ((Active*)*it)->alterables->values.set(24, -3);
        }
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 15);
        }
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(25);
        }
    }
    event_1340_13_end: ;
}
void Frames::event_func_2478()
{
    // event 1341_13
    bool or_result_1341_13 = false;
    bool or_temp_result_1341_13_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1341_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1341_13_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1341_13_0_end;
        or_result_1341_13 = true;
        or_temp_result_1341_13_0 = true;
    }
    or_event_1341_13_0_end: ;
    playerothers_123_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1341_13_0) {
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 1341_13
    bool or_temp_result_1341_13_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1341_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1341_13_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1341_13_1_end;
        playersensorleftbig_391_instances.clear_selection();
        if (!check_not_overlap(playersensorleftbig_391_instances, qualifier_20)) goto or_event_1341_13_1_end;
        playersensorrightbig_393_instances.clear_selection();
        if (!check_not_overlap(playersensorrightbig_393_instances, qualifier_20)) goto or_event_1341_13_1_end;
        playersensortopbig_395_instances.clear_selection();
        if (!check_not_overlap(playersensortopbig_395_instances, qualifier_20)) goto or_event_1341_13_1_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_not_overlap(playersensorbottombig_397_instances, qualifier_20)) goto or_event_1341_13_1_end;
        playercharactersensor_383_instances.clear_selection();
        if (!check_not_overlap(playercharactersensor_383_instances, qualifier_20)) goto or_event_1341_13_1_end;
        or_result_1341_13 = true;
        or_temp_result_1341_13_1 = true;
        or_event_1341_13_1_end: ;
        playersensorbottombig_397_instances.clear_saved_selection();
        playersensorrightbig_393_instances.clear_saved_selection();
        playersensortopbig_395_instances.clear_saved_selection();
        playercharactersensor_383_instances.clear_saved_selection();
        playersensorleftbig_391_instances.clear_saved_selection();
        if (or_temp_result_1341_13_1) {
            playersensorbottombig_397_instances.save_selection();
            playersensorrightbig_393_instances.save_selection();
            playersensortopbig_395_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            playercharactersensor_383_instances.save_selection();
            playerothers_123_instances.save_selection();
            playersensorleftbig_391_instances.save_selection();
        }
        if (!or_result_1341_13) goto or_final_or_event_1341_13_1_end;
        playersensorrightbig_393_instances.empty_selection();
        playercharactersensor_383_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playersensorleftbig_391_instances.empty_selection();
        playersensortopbig_395_instances.empty_selection();
        playersensorbottombig_397_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        if (or_temp_result_1341_13_1) {
            playersensorbottombig_397_instances.restore_selection();
        }
        if (or_temp_result_1341_13_1) {
            playersensorrightbig_393_instances.restore_selection();
        }
        if (or_temp_result_1341_13_1) {
            playersensortopbig_395_instances.restore_selection();
        }
        if (or_temp_result_1341_13_0 || or_temp_result_1341_13_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1341_13_1) {
            playercharactersensor_383_instances.restore_selection();
        }
        if (or_temp_result_1341_13_0 || or_temp_result_1341_13_1) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1341_13_1) {
            playersensorleftbig_391_instances.restore_selection();
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 0);
        }
    }
    or_final_or_event_1341_13_1_end: ;
}
void Frames::event_func_2479()
{
    // event 1342_13
    {
        if (!(group_main_engine_1)) goto event_1342_13_end;
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1342_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(2, 1);
        }
    }
    event_1342_13_end: ;
}
void Frames::event_func_2480()
{
    // event 1343_13
    bool or_result_1343_13 = false;
    bool or_temp_result_1343_13_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1343_13_0_end;
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto or_event_1343_13_0_end;
        or_result_1343_13 = true;
        or_temp_result_1343_13_0 = true;
    }
    or_event_1343_13_0_end: ;
    qualifier_20.clear_saved_selection();
    if (or_temp_result_1343_13_0) {
        qualifier_20.save_selection();
    }
    // event 1343_13
    bool or_temp_result_1343_13_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1343_13_1_end;
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto or_event_1343_13_1_end;
        or_result_1343_13 = true;
        or_temp_result_1343_13_1 = true;
        or_event_1343_13_1_end: ;
        if (or_temp_result_1343_13_1) {
            qualifier_20.save_selection();
        }
        if (!or_result_1343_13) goto or_final_or_event_1343_13_1_end;
        qualifier_20.empty_selection();
        if (or_temp_result_1343_13_0 || or_temp_result_1343_13_1) {
            qualifier_20.restore_selection();
        }
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(14);
        }
    }
    or_final_or_event_1343_13_1_end: ;
}
void Frames::event_func_2481()
{
    // event 1344_13
    {
        if (!(group_main_engine_1)) goto event_1344_13_end;
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1344_13_end;
        media.play_id(SOUND_COMMON_STRIKE_23, -1, 1);
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->alterables->values.sub(24, 3);
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    event_1344_13_end: ;
}
void Frames::event_func_2482()
{
    // event 1345_13
    {
        if (!(group_main_engine_1)) goto event_1345_13_end;
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(16))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1345_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(24));
            ((Active*)*it)->alterables->values.add(25, 1);
            ((Active*)*it)->alterables->values.set(24, get_min(((Active*)*it)->alterables->values.get(24)+0.25, 15));
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+get_max(((Active*)*it)->alterables->values.get(23)*2, 8), 0);
        }
    }
    event_1345_13_end: ;
}
void Frames::event_func_2483()
{
    // event 1346_13
    {
        if (!(group_main_engine_1)) goto event_1346_13_end;
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(18)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1346_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(18, 1);
        }
        FrameObject * single_instance_1346_13_0; single_instance_1346_13_0 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_20); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1346_13_0 == NULL)
                    single_instance_1346_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1346_13_0))->advance_movement(+1);
        ((Active*)((Active*)single_instance_1346_13_0))->alterables->flags.enable(0);
        ((Active*)((Active*)single_instance_1346_13_0))->set_direction(8+((((Active*)get_single(qualifier_20, default_active_instance))->alterables->values.get(18)+1)/math_helper/2)*((((Active*)get_single(qualifier_20, default_active_instance))->alterables->values.get(18)%math_helper%2)*2-1));
    }
    event_1346_13_end: ;
}
void Frames::event_func_2484()
{
    // event 1347_13
    {
        if (!(group_main_engine_1)) goto event_1347_13_end;
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(16))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1347_13_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1347_13_end: ;
}
void Frames::event_func_2485()
{
    // event 1348_13
    {
        if (!(group_main_engine_1)) goto event_1348_13_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(0)) == (1))) goto event_1348_13_end;
        effectshade_356_instances.clear_selection();
        for (ObjectIterator it(effectshade_356_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!effectshade_356_instances.has_selection()) goto event_1348_13_end;
        for (ObjectIterator it(effectshade_356_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
    }
    event_1348_13_end: ;
}
void Frames::event_func_2486()
{
    // event 1350_13
    {
        if (!(group_main_engine_1)) goto event_1350_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (width))) goto event_1350_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_1350_13_end;
        if (!((fadeedge_57_instances.size()) == (0))) goto event_1350_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(0);
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_direction(0);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        fadeedge_57_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fadeedge_57(0, 0), 6);
            fadeedge_57_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-global_values->get(16)-120);
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        media.stop_channel(32-1);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        set_lives(manager.lives + (objectextralife_304_instances.size()));
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(fadeedge_57_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1350_13_end: ;
}
void Frames::event_func_2487()
{
    // event 1351_13
    {
        if (!(group_main_engine_1)) goto event_1351_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (width+50))) goto event_1351_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 0);
    }
    event_1351_13_end: ;
}
void Frames::event_func_2488()
{
    // event 1352_13
    {
        if (!(group_main_engine_1)) goto event_1352_13_end;
        fadeedge_57_instances.clear_selection();
        for (ObjectIterator it(fadeedge_57_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!fadeedge_57_instances.has_selection()) goto event_1352_13_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_min(((Active*)*it)->get_x()+32, frame_left()));
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        for (ObjectIterator it(fadeedge_57_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(levelcardfade2_24_instances, it.current_index, default_active_instance))->get_x()+global_values->get(16)+120);
            ((Active*)*it)->set_y(((Active*)get_single(levelcardfade2_24_instances, it.current_index, default_active_instance))->get_y());
        }
        media.stop_channel(32-1);
    }
    event_1352_13_end: ;
}
void Frames::event_func_2489()
{
    // event 1353_13
    {
        if (!(group_main_engine_1)) goto event_1353_13_end;
        fadeedge_57_instances.clear_selection();
        for (ObjectIterator it(fadeedge_57_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!fadeedge_57_instances.has_selection()) goto event_1353_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1353_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1), 2));
    }
    event_1353_13_end: ;
}
void Frames::event_func_2490()
{
    // event 1354_13
    {
        if (!(group_main_engine_1)) goto event_1354_13_end;
        fadeedge_57_instances.clear_selection();
        for (ObjectIterator it(fadeedge_57_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!fadeedge_57_instances.has_selection()) goto event_1354_13_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1354_13_end;
        global_values->set(4, 0);
        next_frame = 8 + 0;    
    
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.disable(9);
    }
    event_1354_13_end: ;
}
void Frames::event_func_2491()
{
    // event 1356_13
    {
        if (!(group_main_engine_1)) goto event_1356_13_end;
        global_values->set(3, global_values->get(3)+1);
    }
    event_1356_13_end: ;
}
void Frames::event_func_2492()
{
    // event 1360_13
    {
        if (!(group_main_engine_1)) goto event_1360_13_end;
        chancecube_366_instances.clear_selection();
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.add(5, get_max(get_abs(((Active*)*it)->alterables->values.get(23))+get_abs(((Active*)*it)->alterables->values.get(24)), 0.25));
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 5);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 120);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, width-global_values->get(16)*0.5);
        bonusstagecrystalfront1_368_instances.clear_selection();
        for (ObjectIterator it(bonusstagecrystalfront1_368_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/10)%math_helper%4);
        }
        bonusstagecrystalfront2_369_instances.clear_selection();
        for (ObjectIterator it(bonusstagecrystalfront2_369_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/10)%math_helper%4);
        }
        bonusstagecrystalfront3_371_instances.clear_selection();
        for (ObjectIterator it(bonusstagecrystalfront3_371_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/10)%math_helper%4);
        }
        bonusstagecrystalfront4_370_instances.clear_selection();
        for (ObjectIterator it(bonusstagecrystalfront4_370_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/10)%math_helper%4);
        }
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(9, 0);
    }
    event_1360_13_end: ;
}
void Frames::event_func_2493()
{
    // event 1361_13
    {
        if (!(group_main_engine_1)) goto event_1361_13_end;
        chancecube_366_instances.clear_selection();
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!chancecube_366_instances.has_selection()) goto event_1361_13_end;
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.set(4, (1+randrange(6))*90);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 5);
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(7);
        }
        ((Active*)get_instance(guikeystones_458_instances))->alterables->values.add(0, 30);
        media.play_id(SOUND_UI_SCORETALLY_15, -1, 0);
    }
    event_1361_13_end: ;
}
void Frames::event_func_2494()
{
    // event 1362_13
    {
        if (!(group_main_engine_1)) goto event_1362_13_end;
        if (!((((Active*)get_instance(guikeystones_458_instances))->alterables->values.get(0)) > (0))) goto event_1362_13_end;
        ((Active*)get_instance(guikeystones_458_instances))->alterables->values.sub(0, 1);
        ((Counter*)get_instance(guikeystonecount_459_instances))->subtract(1);
    }
    event_1362_13_end: ;
}
void Frames::event_func_2495()
{
    // event 1363_13
    {
        if (!(group_main_engine_1)) goto event_1363_13_end;
        if (!((((Active*)get_instance(guikeystones_458_instances))->alterables->values.get(0)) <= (0))) goto event_1363_13_end;
        if (not_always_1363_13 > loop_count) {
            not_always_1363_13 = loop_count + 2;
            goto event_1363_13_end;
        }
        not_always_1363_13 = loop_count + 2;
        media.stop_sample(SOUND_UI_SCORETALLY_15);
    }
    event_1363_13_end: ;
}
void Frames::event_func_2496()
{
    // event 1364_13
    {
        if (!(group_main_engine_1)) goto event_1364_13_end;
        chancecube_366_instances.clear_selection();
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!chancecube_366_instances.has_selection()) goto event_1364_13_end;
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, get_min(((Active*)*it)->alterables->values.get(24)+0.25, 15));
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(24));
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+((Active*)*it)->alterables->values.get(23)*-2, 0);
            ((Active*)*it)->alterables->values.add(4, get_abs(((Active*)*it)->alterables->values.get(23)*2));
            ((Active*)*it)->alterables->values.set(3, int(((Active*)*it)->alterables->values.get(4)/math_helper/90)%math_helper%8+1);
        }
    }
    event_1364_13_end: ;
}
void Frames::event_func_2497()
{
    // event 1365_13
    {
        if (!(group_main_engine_1)) goto event_1365_13_end;
        chancecube_366_instances.clear_selection();
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (20))) { it.deselect(); continue; }
        }
        if (!chancecube_366_instances.has_selection()) goto event_1365_13_end;
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(5, 10);
        }
        FrameObject * single_instance_1365_13_0; single_instance_1365_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(chancecube_366_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1365_13_0 == NULL)
                    single_instance_1365_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1365_13_0))->set_x(((Active*)get_single(chancecube_366_instances, default_active_instance))->get_x()-16+randrange(33));
        ((Active*)((Active*)single_instance_1365_13_0))->set_y(((Active*)get_single(chancecube_366_instances, default_active_instance))->get_y()-16+randrange(33));
    }
    event_1365_13_end: ;
}
void Frames::event_func_2498()
{
    // event 1366_13
    {
        if (!(group_main_engine_1)) goto event_1366_13_end;
        chancecube_366_instances.clear_selection();
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) <= (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (frame_bottom()-40))) { it.deselect(); continue; }
        }
        if (!chancecube_366_instances.has_selection()) goto event_1366_13_end;
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, 0);
        }
    }
    event_1366_13_end: ;
}
void Frames::event_func_2499()
{
    // event 1367_13
    bool or_result_1367_13 = false;
    bool or_temp_result_1367_13_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1367_13_0_end;
        chancecube_366_instances.clear_selection();
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) <= (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(23)) > (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(23)) < (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (frame_bottom()-40))) { it.deselect(); continue; }
        }
        if (!chancecube_366_instances.has_selection()) goto or_event_1367_13_0_end;
        or_result_1367_13 = true;
        or_temp_result_1367_13_0 = true;
    }
    or_event_1367_13_0_end: ;
    chancecube_366_instances.clear_saved_selection();
    if (or_temp_result_1367_13_0) {
        chancecube_366_instances.save_selection();
    }
    // event 1367_13
    bool or_temp_result_1367_13_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1367_13_1_end;
        chancecube_366_instances.clear_selection();
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
        }
        if (!chancecube_366_instances.has_selection()) goto or_event_1367_13_1_end;
        or_result_1367_13 = true;
        or_temp_result_1367_13_1 = true;
        or_event_1367_13_1_end: ;
        if (or_temp_result_1367_13_1) {
            chancecube_366_instances.save_selection();
        }
        if (!or_result_1367_13) goto or_final_or_event_1367_13_1_end;
        chancecube_366_instances.empty_selection();
        if (or_temp_result_1367_13_0 || or_temp_result_1367_13_1) {
            chancecube_366_instances.restore_selection();
        }
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    or_final_or_event_1367_13_1_end: ;
}
void Frames::event_func_2500()
{
    // event 1368_13
    {
        if (!(group_main_engine_1)) goto event_1368_13_end;
        chancecube_366_instances.clear_selection();
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (frame_bottom()-40))) { it.deselect(); continue; }
        }
        if (!chancecube_366_instances.has_selection()) goto event_1368_13_end;
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(6);
            ((Active*)*it)->alterables->values.set(0, 1);
            ((Active*)*it)->alterables->values.set(24, (0-((Active*)*it)->alterables->values.get(24))*0.5);
        }
        media.play_id(SOUND_LILAC_COMETREBOUND_2_31, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 3);
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1368_13_end: ;
}
void Frames::event_func_2501()
{
    // event 1369_13
    {
        if (!(group_main_engine_1)) goto event_1369_13_end;
        chancecube_366_instances.clear_selection();
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (frame_top()+40))) { it.deselect(); continue; }
        }
        if (!chancecube_366_instances.has_selection()) goto event_1369_13_end;
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(6);
            ((Active*)*it)->alterables->values.set(0, 1);
            ((Active*)*it)->alterables->values.set(24, 0-((Active*)*it)->alterables->values.get(24));
        }
        media.play_id(SOUND_LILAC_COMETREBOUND_2_31, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 3);
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1369_13_end: ;
}
void Frames::event_func_2502()
{
    // event 1370_13
    {
        if (!(group_main_engine_1)) goto event_1370_13_end;
        chancecube_366_instances.clear_selection();
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(23)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (frame_left()+40))) { it.deselect(); continue; }
        }
        if (!chancecube_366_instances.has_selection()) goto event_1370_13_end;
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 0-((Active*)*it)->alterables->values.get(23));
        }
        media.play_id(SOUND_LILAC_COMETREBOUND_2_31, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 3);
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1370_13_end: ;
}
void Frames::event_func_2503()
{
    // event 1371_13
    {
        if (!(group_main_engine_1)) goto event_1371_13_end;
        chancecube_366_instances.clear_selection();
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(23)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (frame_right()-40))) { it.deselect(); continue; }
        }
        if (!chancecube_366_instances.has_selection()) goto event_1371_13_end;
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 0-((Active*)*it)->alterables->values.get(23));
        }
        media.play_id(SOUND_LILAC_COMETREBOUND_2_31, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 3);
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1371_13_end: ;
}
void Frames::event_func_2504()
{
    // event 1372_13
    {
        if (!(group_main_engine_1)) goto event_1372_13_end;
        chancecube_366_instances.clear_selection();
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(23)) < (0))) { it.deselect(); continue; }
        }
        if (!chancecube_366_instances.has_selection()) goto event_1372_13_end;
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, get_min(((Active*)*it)->alterables->values.get(23)+0.04, 0));
        }
    }
    event_1372_13_end: ;
}
void Frames::event_func_2505()
{
    // event 1373_13
    {
        if (!(group_main_engine_1)) goto event_1373_13_end;
        chancecube_366_instances.clear_selection();
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(23)) > (0))) { it.deselect(); continue; }
        }
        if (!chancecube_366_instances.has_selection()) goto event_1373_13_end;
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, get_max(((Active*)*it)->alterables->values.get(23)-0.04, 0));
        }
    }
    event_1373_13_end: ;
}
void Frames::event_func_2506()
{
    // event 1374_13
    {
        if (!(group_main_engine_1)) goto event_1374_13_end;
        chancecube_366_instances.clear_selection();
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(23)) == (0))) { it.deselect(); continue; }
        }
        if (!chancecube_366_instances.has_selection()) goto event_1374_13_end;
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
    }
    event_1374_13_end: ;
}
void Frames::event_func_2507()
{
    // event 1375_13
    {
        if (!(group_main_engine_1)) goto event_1375_13_end;
        chancecube_366_instances.clear_selection();
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (20))) { it.deselect(); continue; }
        }
        if (!chancecube_366_instances.has_selection()) goto event_1375_13_end;
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
        media.play_id(SOUND_COMMON_REWARD_2_40, -1, 1);
        FrameObject * single_instance_1375_13_0; single_instance_1375_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(chancecube_366_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1375_13_0 == NULL)
                    single_instance_1375_13_0 = new_obj;
            }
        }
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1375_13_end: ;
}
void Frames::event_func_2508()
{
    // event 1376_13
    {
        if (!(group_main_engine_1)) goto event_1376_13_end;
        chancecube_366_instances.clear_selection();
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!chancecube_366_instances.has_selection()) goto event_1376_13_end;
        FrameObject * single_instance_1376_13_0; single_instance_1376_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(chancecube_366_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitorwoodshield_325(parent->x + -16, parent->y + -16), parent->layer);
                if (single_instance_1376_13_0 == NULL)
                    single_instance_1376_13_0 = new_obj;
            }
        }
        media.play_id(SOUND_ITEM_ITEMBOX_12, -1, 1);
        FrameObject * single_instance_1376_13_1; single_instance_1376_13_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(chancecube_366_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1376_13_1 == NULL)
                    single_instance_1376_13_1 = new_obj;
            }
        }
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
        ((Active*)((Active*)single_instance_1376_13_0))->alterables->values.set(0, 1);
        ((Active*)((Active*)single_instance_1376_13_0))->alterables->values.set(1, -6);
        ((Active*)((Active*)single_instance_1376_13_0))->alterables->flags.enable(0);
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.sub(14, 30);
    }
    event_1376_13_end: ;
}
void Frames::event_func_2509()
{
    // event 1377_13
    {
        if (!(group_main_engine_1)) goto event_1377_13_end;
        chancecube_366_instances.clear_selection();
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
        }
        if (!chancecube_366_instances.has_selection()) goto event_1377_13_end;
        media.play_id(SOUND_ITEM_ITEMBOX_12, -1, 1);
        FrameObject * single_instance_1377_13_0; single_instance_1377_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(chancecube_366_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitorearthshield_326(parent->x + -16, parent->y + -16), parent->layer);
                if (single_instance_1377_13_0 == NULL)
                    single_instance_1377_13_0 = new_obj;
            }
        }
        FrameObject * single_instance_1377_13_1; single_instance_1377_13_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(chancecube_366_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1377_13_1 == NULL)
                    single_instance_1377_13_1 = new_obj;
            }
        }
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
        ((Active*)((Active*)single_instance_1377_13_0))->alterables->values.set(0, 1);
        ((Active*)((Active*)single_instance_1377_13_0))->alterables->values.set(1, -6);
        ((Active*)((Active*)single_instance_1377_13_0))->alterables->flags.enable(0);
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.sub(14, 30);
    }
    event_1377_13_end: ;
}
void Frames::event_func_2510()
{
    // event 1378_13
    {
        if (!(group_main_engine_1)) goto event_1378_13_end;
        chancecube_366_instances.clear_selection();
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (5))) { it.deselect(); continue; }
        }
        if (!chancecube_366_instances.has_selection()) goto event_1378_13_end;
        media.play_id(SOUND_ITEM_ITEMBOX_12, -1, 1);
        FrameObject * single_instance_1378_13_0; single_instance_1378_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(chancecube_366_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitorwatershield_327(parent->x + -16, parent->y + -16), parent->layer);
                if (single_instance_1378_13_0 == NULL)
                    single_instance_1378_13_0 = new_obj;
            }
        }
        FrameObject * single_instance_1378_13_1; single_instance_1378_13_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(chancecube_366_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1378_13_1 == NULL)
                    single_instance_1378_13_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1378_13_0))->alterables->values.set(0, 1);
        ((Active*)((Active*)single_instance_1378_13_0))->alterables->values.set(1, -6);
        ((Active*)((Active*)single_instance_1378_13_0))->alterables->flags.enable(0);
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.sub(14, 30);
    }
    event_1378_13_end: ;
}
void Frames::event_func_2511()
{
    // event 1379_13
    {
        if (!(group_main_engine_1)) goto event_1379_13_end;
        chancecube_366_instances.clear_selection();
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (7))) { it.deselect(); continue; }
        }
        if (!chancecube_366_instances.has_selection()) goto event_1379_13_end;
        media.play_id(SOUND_ITEM_ITEMBOX_12, -1, 1);
        FrameObject * single_instance_1379_13_0; single_instance_1379_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(chancecube_366_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitorfireshield_328(parent->x + -16, parent->y + -16), parent->layer);
                if (single_instance_1379_13_0 == NULL)
                    single_instance_1379_13_0 = new_obj;
            }
        }
        FrameObject * single_instance_1379_13_1; single_instance_1379_13_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(chancecube_366_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1379_13_1 == NULL)
                    single_instance_1379_13_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1379_13_0))->alterables->values.set(0, 1);
        ((Active*)((Active*)single_instance_1379_13_0))->alterables->values.set(1, -6);
        ((Active*)((Active*)single_instance_1379_13_0))->alterables->flags.enable(0);
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.sub(14, 30);
    }
    event_1379_13_end: ;
}
void Frames::event_func_2512()
{
    // event 1380_13
    {
        if (!(group_main_engine_1)) goto event_1380_13_end;
        chancecube_366_instances.clear_selection();
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (8))) { it.deselect(); continue; }
        }
        if (!chancecube_366_instances.has_selection()) goto event_1380_13_end;
        media.play_id(SOUND_ITEM_ITEMBOX_12, -1, 1);
        FrameObject * single_instance_1380_13_0; single_instance_1380_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(chancecube_366_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitormetalshield_329(parent->x + -16, parent->y + -16), parent->layer);
                if (single_instance_1380_13_0 == NULL)
                    single_instance_1380_13_0 = new_obj;
            }
        }
        FrameObject * single_instance_1380_13_1; single_instance_1380_13_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(chancecube_366_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1380_13_1 == NULL)
                    single_instance_1380_13_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1380_13_0))->alterables->values.set(0, 1);
        ((Active*)((Active*)single_instance_1380_13_0))->alterables->values.set(1, -6);
        ((Active*)((Active*)single_instance_1380_13_0))->alterables->flags.enable(0);
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.sub(14, 30);
    }
    event_1380_13_end: ;
}
void Frames::event_func_2513()
{
    // event 1381_13
    bool or_result_1381_13 = false;
    bool or_temp_result_1381_13_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1381_13_0_end;
        chancecube_366_instances.clear_selection();
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!chancecube_366_instances.has_selection()) goto or_event_1381_13_0_end;
        or_result_1381_13 = true;
        or_temp_result_1381_13_0 = true;
    }
    or_event_1381_13_0_end: ;
    chancecube_366_instances.clear_saved_selection();
    if (or_temp_result_1381_13_0) {
        chancecube_366_instances.save_selection();
    }
    // event 1381_13
    bool or_temp_result_1381_13_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1381_13_1_end;
        chancecube_366_instances.clear_selection();
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
        }
        if (!chancecube_366_instances.has_selection()) goto or_event_1381_13_1_end;
        or_result_1381_13 = true;
        or_temp_result_1381_13_1 = true;
    }
    or_event_1381_13_1_end: ;
    if (or_temp_result_1381_13_1) {
        chancecube_366_instances.save_selection();
    }
    // event 1381_13
    bool or_temp_result_1381_13_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1381_13_2_end;
        chancecube_366_instances.clear_selection();
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
        }
        if (!chancecube_366_instances.has_selection()) goto or_event_1381_13_2_end;
        or_result_1381_13 = true;
        or_temp_result_1381_13_2 = true;
        or_event_1381_13_2_end: ;
        if (or_temp_result_1381_13_2) {
            chancecube_366_instances.save_selection();
        }
        if (!or_result_1381_13) goto or_final_or_event_1381_13_2_end;
        chancecube_366_instances.empty_selection();
        if (or_temp_result_1381_13_0 || or_temp_result_1381_13_1 || or_temp_result_1381_13_2) {
            chancecube_366_instances.restore_selection();
        }
        media.play_id(SOUND_ITEM_ITEMBOX_12, -1, 1);
        FrameObject * single_instance_1381_13_0; single_instance_1381_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(chancecube_366_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitoricon_331(parent->x + -16, parent->y + -16), parent->layer);
                if (single_instance_1381_13_0 == NULL)
                    single_instance_1381_13_0 = new_obj;
            }
        }
        FrameObject * single_instance_1381_13_1; single_instance_1381_13_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(chancecube_366_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1381_13_1 == NULL)
                    single_instance_1381_13_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1381_13_0))->force_frame(8);
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
            ((Active*)*it)->set_visible(false);
        }
        masterlevel_37_instances.clear_selection();
        for (ObjectIterator it(masterlevel_37_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(14, 30);
        }
    }
    or_final_or_event_1381_13_2_end: ;
}
void Frames::event_func_2514()
{
    // event 1382_13
    bool or_result_1382_13 = false;
    bool or_temp_result_1382_13_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1382_13_0_end;
        chancecube_366_instances.clear_selection();
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (70))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
        }
        if (!chancecube_366_instances.has_selection()) goto or_event_1382_13_0_end;
        or_result_1382_13 = true;
        or_temp_result_1382_13_0 = true;
    }
    or_event_1382_13_0_end: ;
    chancecube_366_instances.clear_saved_selection();
    if (or_temp_result_1382_13_0) {
        chancecube_366_instances.save_selection();
    }
    // event 1382_13
    bool or_temp_result_1382_13_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1382_13_1_end;
        chancecube_366_instances.clear_selection();
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (70))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
        }
        if (!chancecube_366_instances.has_selection()) goto or_event_1382_13_1_end;
        or_result_1382_13 = true;
        or_temp_result_1382_13_1 = true;
        or_event_1382_13_1_end: ;
        if (or_temp_result_1382_13_1) {
            chancecube_366_instances.save_selection();
        }
        if (!or_result_1382_13) goto or_final_or_event_1382_13_1_end;
        chancecube_366_instances.empty_selection();
        if (or_temp_result_1382_13_0 || or_temp_result_1382_13_1) {
            chancecube_366_instances.restore_selection();
        }
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
        media.play_id(SOUND_ITEM_ITEMBOX_12, -1, 1);
        FrameObject * single_instance_1382_13_0; single_instance_1382_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(chancecube_366_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitoricon_331(parent->x + -76, parent->y + -46), parent->layer);
                if (single_instance_1382_13_0 == NULL)
                    single_instance_1382_13_0 = new_obj;
            }
        }
        FrameObject * single_instance_1382_13_1; single_instance_1382_13_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(chancecube_366_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + -50, parent->y + -30), parent->layer);
                if (single_instance_1382_13_1 == NULL)
                    single_instance_1382_13_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1382_13_0))->force_frame(8);
        ((Active*)((Active*)single_instance_1382_13_0))->set_x(get_min(((Active*)single_instance_1382_13_0)->get_x(), frame_right()-40));
    }
    or_final_or_event_1382_13_1_end: ;
}
void Frames::event_func_2515()
{
    // event 1383_13
    {
        if (!(group_main_engine_1)) goto event_1383_13_end;
        chancecube_366_instances.clear_selection();
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
        }
        if (!chancecube_366_instances.has_selection()) goto event_1383_13_end;
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
        media.play_id(SOUND_ITEM_ITEMBOX_12, -1, 1);
        FrameObject * single_instance_1383_13_0; single_instance_1383_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(chancecube_366_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitoricon_331(parent->x + 16, parent->y + -46), parent->layer);
                if (single_instance_1383_13_0 == NULL)
                    single_instance_1383_13_0 = new_obj;
            }
        }
        FrameObject * single_instance_1383_13_1; single_instance_1383_13_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(chancecube_366_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 20, parent->y + -30), parent->layer);
                if (single_instance_1383_13_1 == NULL)
                    single_instance_1383_13_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1383_13_0))->force_frame(8);
        ((Active*)((Active*)single_instance_1383_13_0))->set_x(get_max(((Active*)single_instance_1383_13_0)->get_x(), frame_left()+40));
    }
    event_1383_13_end: ;
}
void Frames::event_func_2516()
{
    // event 1384_13
    {
        if (!(group_main_engine_1)) goto event_1384_13_end;
        chancecube_366_instances.clear_selection();
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (91))) { it.deselect(); continue; }
        }
        if (!chancecube_366_instances.has_selection()) goto event_1384_13_end;
        if (!((((Counter*)get_instance(guikeystonecount_459_instances))->value) > (0))) goto event_1384_13_end;
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->set_angle(0, 0);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(0, 1);
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->alterables->flags.disable(6);
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(7));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(8));
        }
        FrameObject * single_instance_1384_13_0; single_instance_1384_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(chancecube_366_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1384_13_0 == NULL)
                    single_instance_1384_13_0 = new_obj;
            }
        }
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1384_13_end: ;
}
void Frames::event_func_2517()
{
    // event 1385_13
    {
        if (!(group_main_engine_1)) goto event_1385_13_end;
        if (!((((Counter*)get_instance(guikeystonecount_459_instances))->value) > (0))) goto event_1385_13_end;
        if (not_always_1385_13 > loop_count) {
            not_always_1385_13 = loop_count + 2;
            goto event_1385_13_end;
        }
        not_always_1385_13 = loop_count + 2;
        ((Active*)get_instance(guikeystones_458_instances))->set_visible(true);
        ((Counter*)get_instance(guikeystonecount_459_instances))->set_visible(true);
    }
    event_1385_13_end: ;
}
