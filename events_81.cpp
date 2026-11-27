#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_6664()
{
    // event 1410_29
    {
        if (!(group_main_engine_1)) goto event_1410_29_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (12))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1410_29_end;
        if (not_always_1410_29 > loop_count) {
            not_always_1410_29 = loop_count + 2;
            goto event_1410_29_end;
        }
        not_always_1410_29 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 270);
        }
    }
    event_1410_29_end: ;
}
void Frames::event_func_6665()
{
    // event 1411_29
    {
        if (!(group_main_engine_1)) goto event_1411_29_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (13))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1411_29_end;
        if (not_always_1411_29 > loop_count) {
            not_always_1411_29 = loop_count + 2;
            goto event_1411_29_end;
        }
        not_always_1411_29 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 270);
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1411_29_end: ;
}
void Frames::event_func_6666()
{
    // event 1426_29
    {
        if (!(group_main_engine_1)) goto event_1426_29_end;
        levelferriswheelpiece_1720_instances.clear_selection();
        for (ObjectIterator it(levelferriswheelpiece_1720_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0)+cos_deg(((Active*)*it)->alterables->values.get(3)+(((Active*)*it)->alterables->values.get(2)/math_helper/5)*90-(((Active*)*it)->alterables->values.get(2)%math_helper%5)*10)*(((Active*)*it)->alterables->values.get(2)%math_helper%5+1)*22);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1)+sin_deg(((Active*)*it)->alterables->values.get(3)+(((Active*)*it)->alterables->values.get(2)/math_helper/5)*90-(((Active*)*it)->alterables->values.get(2)%math_helper%5)*10)*(((Active*)*it)->alterables->values.get(2)%math_helper%5+1)*22);
            ((Active*)*it)->alterables->values.set(3, (((Active*)*it)->alterables->values.get(3)+1)%math_helper%360);
        }
    }
    event_1426_29_end: ;
}
void Frames::event_func_6667()
{
    // event 1428_29
    {
        if (!(group_main_engine_1)) goto event_1428_29_end;
        gimmickdragontunnel1_1637_instances.clear_selection();
        for (ObjectIterator it(gimmickdragontunnel1_1637_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(8)+((Active*)*it)->alterables->values.get(16));
        }
        gimmickdragontunnel2_1639_instances.clear_selection();
        for (ObjectIterator it(gimmickdragontunnel2_1639_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(8)-((Active*)*it)->alterables->values.get(16));
        }
    }
    event_1428_29_end: ;
}
void Frames::event_func_6668()
{
    // event 1429_29
    {
        if (!(group_main_engine_1)) goto event_1429_29_end;
        gimmickdragontunnel1_1637_instances.clear_selection();
        for (ObjectIterator it(gimmickdragontunnel1_1637_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(16, 4);
        }
        gimmickdragontunnel2_1639_instances.clear_selection();
        for (ObjectIterator it(gimmickdragontunnel2_1639_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(16, 4);
        }
        for (ObjectIterator it(gimmickdragontunnel1_1637_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(sin_deg(((Active*)*it)->alterables->values.get(4)-90)*30, 0);
        }
        for (ObjectIterator it(gimmickdragontunnel2_1639_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(sin_deg(((Active*)*it)->alterables->values.get(4)-90)*-30, 0);
        }
        {
            SavedSelection extra_gimmickdragontunnel1_1637_instances(gimmickdragontunnel1_1637_instances);
            for (SavedIterator selected(extra_gimmickdragontunnel1_1637_instances); !selected.end(); ++selected) {
                foreach_instance_d1 = ((Active*)*selected);
                foreach_d1_29();
            }
        }
        {
            SavedSelection extra_gimmickdragontunnel2_1639_instances(gimmickdragontunnel2_1639_instances);
            for (SavedIterator selected(extra_gimmickdragontunnel2_1639_instances); !selected.end(); ++selected) {
                foreach_instance_d2 = ((Active*)*selected);
                foreach_d2_29();
            }
        }
        gimmickdragontunnelmask1_1780_instances.clear_selection();
        for (ObjectIterator it(gimmickdragontunnelmask1_1780_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
        gimmickdragontunnelmask2_1781_instances.clear_selection();
        for (ObjectIterator it(gimmickdragontunnelmask2_1781_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1429_29_end: ;
}
void Frames::event_func_6669()
{
    // event 1430_29
    {
        if (!(group_main_engine_1)) goto event_1430_29_end;
        gimmickdragontunnel1_1637_instances.clear_selection();
        for (ObjectIterator it(gimmickdragontunnel1_1637_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) >= (752))) { it.deselect(); continue; }
        }
        if (!gimmickdragontunnel1_1637_instances.has_selection()) goto event_1430_29_end;
        for (ObjectIterator it(gimmickdragontunnel1_1637_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.sub(16, 752);
        }
    }
    event_1430_29_end: ;
}
void Frames::event_func_6670()
{
    // event 1431_29
    {
        if (!(group_main_engine_1)) goto event_1431_29_end;
        gimmickdragontunnel2_1639_instances.clear_selection();
        for (ObjectIterator it(gimmickdragontunnel2_1639_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) >= (752))) { it.deselect(); continue; }
        }
        if (!gimmickdragontunnel2_1639_instances.has_selection()) goto event_1431_29_end;
        for (ObjectIterator it(gimmickdragontunnel2_1639_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 180);
            ((Active*)*it)->alterables->values.sub(16, 752);
        }
    }
    event_1431_29_end: ;
}
void Frames::event_func_6671()
{
    // event 1432_29
    {
        if (!(group_main_engine_1)) goto event_1432_29_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickdragontunnelmask1_1780_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickdragontunnelmask1_1780_instances)) goto event_1432_29_end;
        if (!((((Active*)get_instance(playersensorrightbig_393_instances))->alterables->values.get(25)) == (0))) goto event_1432_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1432_29_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(23, 4);
    }
    event_1432_29_end: ;
}
void Frames::event_func_6672()
{
    // event 1433_29
    {
        if (!(group_main_engine_1)) goto event_1433_29_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickdragontunnelmask2_1781_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickdragontunnelmask2_1781_instances)) goto event_1433_29_end;
        if (!((((Active*)get_instance(playersensorleftbig_391_instances))->alterables->values.get(25)) == (0))) goto event_1433_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1433_29_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(23, -4);
    }
    event_1433_29_end: ;
}
void Frames::event_func_6673()
{
    // event 1436_29
    {
        if (!(group_main_engine_1)) goto event_1436_29_end;
        {
            loop_dt_running = true;
            int times = int(get_max(gimmickdragontunnelhead_1638_instances.size(), gimmickdragontunnelhead2_1640_instances.size()));
            loop_dt_index = 0;
            while (loop_dt_index < times) {
                loop_dt_29();
                if (!loop_dt_running) break;
                loop_dt_index++;
            }
        }
    }
    event_1436_29_end: ;
}
void Frames::event_func_6674()
{
    // event 1439_29
    {
        if (!(group_main_engine_1)) goto event_1439_29_end;
        playersensortopbig_395_instances.clear_selection();
        gimmickclothesline2_1740_instances.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, gimmickclothesline2_1740_instances)) goto event_1439_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) > (0))) goto event_1439_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (41))) goto event_1439_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1439_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1439_29_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (0))) goto event_1439_29_end;
        media.play_id(SOUND_CAROL_WALL_2_33, -1, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        for (ObjectIterator it(gimmickclothesline2_1740_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1439_29_end: ;
}
void Frames::event_func_6675()
{
    // event 1440_29
    bool or_result_1440_29 = false;
    bool or_temp_result_1440_29_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1440_29_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (41))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1440_29_0_end;
        playerskinsash_418_instances.clear_selection();
        gimmickclothesline2_1740_instances.clear_selection();
        if (!check_overlap(playerskinsash_418_instances, gimmickclothesline2_1740_instances)) goto or_event_1440_29_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_1440_29_0_end;
        or_result_1440_29 = true;
        or_temp_result_1440_29_0 = true;
    }
    or_event_1440_29_0_end: ;
    gimmickclothesline2_1740_instances.clear_saved_selection();
    playerinput_19_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1440_29_0) {
        gimmickclothesline2_1740_instances.save_selection();
        playerinput_19_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 1440_29
    bool or_temp_result_1440_29_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1440_29_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (41))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1440_29_1_end;
        playerskinsash_418_instances.clear_selection();
        gimmickclothesline2_1740_instances.clear_selection();
        if (!check_overlap(playerskinsash_418_instances, gimmickclothesline2_1740_instances)) goto or_event_1440_29_1_end;
        playersensorrightbig_393_instances.clear_selection();
        gimmickhanginglongsensor2_1741_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, gimmickhanginglongsensor2_1741_instances)) goto or_event_1440_29_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_1440_29_1_end;
        or_result_1440_29 = true;
        or_temp_result_1440_29_1 = true;
    }
    or_event_1440_29_1_end: ;
    gimmickhanginglongsensor2_1741_instances.clear_saved_selection();
    playersensorrightbig_393_instances.clear_saved_selection();
    if (or_temp_result_1440_29_1) {
        gimmickclothesline2_1740_instances.save_selection();
        gimmickhanginglongsensor2_1741_instances.save_selection();
        playersensorrightbig_393_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playerinput_19_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 1440_29
    bool or_temp_result_1440_29_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1440_29_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (41))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1440_29_2_end;
        playerskinsash_418_instances.clear_selection();
        gimmickclothesline2_1740_instances.clear_selection();
        if (!check_overlap(playerskinsash_418_instances, gimmickclothesline2_1740_instances)) goto or_event_1440_29_2_end;
        playersensorleftbig_391_instances.clear_selection();
        gimmickhanginglongsensor2_1741_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, gimmickhanginglongsensor2_1741_instances)) goto or_event_1440_29_2_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_1440_29_2_end;
        or_result_1440_29 = true;
        or_temp_result_1440_29_2 = true;
        or_event_1440_29_2_end: ;
        playersensorleftbig_391_instances.clear_saved_selection();
        if (or_temp_result_1440_29_2) {
            gimmickclothesline2_1740_instances.save_selection();
            gimmickhanginglongsensor2_1741_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            playerinput_19_instances.save_selection();
            playerskinsash_418_instances.save_selection();
            playersensorleftbig_391_instances.save_selection();
        }
        if (!or_result_1440_29) goto or_final_or_event_1440_29_2_end;
        gimmickclothesline2_1740_instances.empty_selection();
        playersensorrightbig_393_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playersensorleftbig_391_instances.empty_selection();
        playerskinsash_418_instances.empty_selection();
        gimmickhanginglongsensor2_1741_instances.empty_selection();
        if (or_temp_result_1440_29_0 || or_temp_result_1440_29_1 || or_temp_result_1440_29_2) {
            gimmickclothesline2_1740_instances.restore_selection();
        }
        if (or_temp_result_1440_29_1 || or_temp_result_1440_29_2) {
            gimmickhanginglongsensor2_1741_instances.restore_selection();
        }
        if (or_temp_result_1440_29_1) {
            playersensorrightbig_393_instances.restore_selection();
        }
        if (or_temp_result_1440_29_0 || or_temp_result_1440_29_1 || or_temp_result_1440_29_2) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1440_29_0 || or_temp_result_1440_29_1 || or_temp_result_1440_29_2) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_1440_29_0 || or_temp_result_1440_29_1 || or_temp_result_1440_29_2) {
            playerskinsash_418_instances.restore_selection();
        }
        if (or_temp_result_1440_29_2) {
            playersensorleftbig_391_instances.restore_selection();
        }
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, 41);
        }
    }
    or_final_or_event_1440_29_2_end: ;
}
void Frames::event_func_6676()
{
    // event 1441_29
    {
        if (!(group_main_engine_1)) goto event_1441_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (41))) goto event_1441_29_end;
        playerskinsash_418_instances.clear_selection();
        gimmickclothesline2_1740_instances.clear_selection();
        if (!check_overlap(playerskinsash_418_instances, gimmickclothesline2_1740_instances)) goto event_1441_29_end;
        playersensorrightbig_393_instances.clear_selection();
        if (!check_not_overlap(playersensorrightbig_393_instances, gimmickhanginglongsensor2_1741_instances)) goto event_1441_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1441_29_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (1))) goto event_1441_29_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 42);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 3);
    }
    event_1441_29_end: ;
}
void Frames::event_func_6677()
{
    // event 1442_29
    {
        if (!(group_main_engine_1)) goto event_1442_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (41))) goto event_1442_29_end;
        playerskinsash_418_instances.clear_selection();
        gimmickclothesline2_1740_instances.clear_selection();
        if (!check_overlap(playerskinsash_418_instances, gimmickclothesline2_1740_instances)) goto event_1442_29_end;
        playersensorleftbig_391_instances.clear_selection();
        if (!check_not_overlap(playersensorleftbig_391_instances, gimmickhanginglongsensor2_1741_instances)) goto event_1442_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1442_29_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (1))) goto event_1442_29_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 42);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -3);
    }
    event_1442_29_end: ;
}
void Frames::event_func_6678()
{
    // event 1443_29
    {
        if (!(group_main_engine_1)) goto event_1443_29_end;
        gimmickclothesline2_1740_instances.clear_selection();
        for (ObjectIterator it(gimmickclothesline2_1740_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!gimmickclothesline2_1740_instances.has_selection()) goto event_1443_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) > (0))) goto event_1443_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1443_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1443_29_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 41);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(gimmickclothesline2_1740_instances, default_active_instance))->get_y()+32);
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(25, 0);
        for (ObjectIterator it(gimmickclothesline2_1740_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 1);
        }
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
    }
    event_1443_29_end: ;
}
void Frames::event_func_6679()
{
    // event 1444_29
    {
        if (!(group_main_engine_1)) goto event_1444_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (41))) goto event_1444_29_end;
        gimmickclothesline2_1740_instances.clear_selection();
        for (ObjectIterator it(gimmickclothesline2_1740_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1444_29_end: ;
}
void Frames::event_func_6680()
{
    // event 1445_29
    {
        if (!(group_main_engine_1)) goto event_1445_29_end;
        breakablewall_1748_instances.clear_selection();
        for (ObjectIterator it(breakablewall_1748_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
        breakablefloor1_1760_instances.clear_selection();
        for (ObjectIterator it(breakablefloor1_1760_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
        breakablefloor2_1761_instances.clear_selection();
        for (ObjectIterator it(breakablefloor2_1761_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1445_29_end: ;
}
void Frames::event_func_6681()
{
    // event 1446_29
    bool or_result_1446_29 = false;
    bool or_temp_result_1446_29_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1446_29_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) >= (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) <= (6))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1446_29_0_end;
        or_result_1446_29 = true;
        or_temp_result_1446_29_0 = true;
    }
    or_event_1446_29_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1446_29_0) {
        playermovementvalues_245_instances.save_selection();
    }
    // event 1446_29
    bool or_temp_result_1446_29_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1446_29_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (26))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1446_29_1_end;
        or_result_1446_29 = true;
        or_temp_result_1446_29_1 = true;
    }
    or_event_1446_29_1_end: ;
    if (or_temp_result_1446_29_1) {
        playermovementvalues_245_instances.save_selection();
    }
    // event 1446_29
    bool or_temp_result_1446_29_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1446_29_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1446_29_2_end;
        if (!((get_abs(((Active*)get_single(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(1))) > (5))) goto or_event_1446_29_2_end;
        or_result_1446_29 = true;
        or_temp_result_1446_29_2 = true;
        or_event_1446_29_2_end: ;
        if (or_temp_result_1446_29_2) {
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_1446_29) goto or_final_or_event_1446_29_2_end;
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_1446_29_0 || or_temp_result_1446_29_1 || or_temp_result_1446_29_2) {
            playermovementvalues_245_instances.restore_selection();
        }
        breakablewall_1748_instances.clear_selection();
        for (ObjectIterator it(breakablewall_1748_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1446_29_2_end: ;
}
void Frames::event_func_6682()
{
    // event 1448_29
    bool or_result_1448_29 = false;
    bool or_temp_result_1448_29_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1448_29_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1448_29_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1448_29_0_end;
        playersensorleftbig_391_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, breakablewall_1748_instances)) goto or_event_1448_29_0_end;
        or_result_1448_29 = true;
        or_temp_result_1448_29_0 = true;
    }
    or_event_1448_29_0_end: ;
    breakablewall_1748_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    playersensorleftbig_391_instances.clear_saved_selection();
    if (or_temp_result_1448_29_0) {
        breakablewall_1748_instances.save_selection();
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playersensorleftbig_391_instances.save_selection();
    }
    // event 1448_29
    bool or_temp_result_1448_29_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1448_29_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1448_29_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1448_29_1_end;
        playersensorrightbig_393_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, breakablewall_1748_instances)) goto or_event_1448_29_1_end;
        or_result_1448_29 = true;
        or_temp_result_1448_29_1 = true;
    }
    or_event_1448_29_1_end: ;
    playersensorrightbig_393_instances.clear_saved_selection();
    if (or_temp_result_1448_29_1) {
        playersensorrightbig_393_instances.save_selection();
        breakablewall_1748_instances.save_selection();
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 1448_29
    bool or_temp_result_1448_29_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1448_29_2_end;
        shieldinstashield_359_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        if (!check_overlap(shieldinstashield_359_instances, breakablewall_1748_instances)) goto or_event_1448_29_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (26))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1448_29_2_end;
        or_result_1448_29 = true;
        or_temp_result_1448_29_2 = true;
    }
    or_event_1448_29_2_end: ;
    shieldinstashield_359_instances.clear_saved_selection();
    if (or_temp_result_1448_29_2) {
        breakablewall_1748_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        shieldinstashield_359_instances.save_selection();
    }
    // event 1448_29
    bool or_temp_result_1448_29_3 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1448_29_3_end;
        playerreflect_447_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        if (!check_overlap(playerreflect_447_instances, breakablewall_1748_instances)) goto or_event_1448_29_3_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto or_event_1448_29_3_end;
        or_result_1448_29 = true;
        or_temp_result_1448_29_3 = true;
    }
    or_event_1448_29_3_end: ;
    playerreflect_447_instances.clear_saved_selection();
    if (or_temp_result_1448_29_3) {
        breakablewall_1748_instances.save_selection();
        playerreflect_447_instances.save_selection();
    }
    // event 1448_29
    bool or_temp_result_1448_29_4 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1448_29_4_end;
        thunderspark_339_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        if (!check_overlap(thunderspark_339_instances, breakablewall_1748_instances)) goto or_event_1448_29_4_end;
        or_result_1448_29 = true;
        or_temp_result_1448_29_4 = true;
        or_event_1448_29_4_end: ;
        thunderspark_339_instances.clear_saved_selection();
        if (or_temp_result_1448_29_4) {
            breakablewall_1748_instances.save_selection();
            thunderspark_339_instances.save_selection();
        }
        if (!or_result_1448_29) goto or_final_or_event_1448_29_4_end;
        playersensorrightbig_393_instances.empty_selection();
        breakablewall_1748_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playersensorleftbig_391_instances.empty_selection();
        thunderspark_339_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        playerreflect_447_instances.empty_selection();
        shieldinstashield_359_instances.empty_selection();
        if (or_temp_result_1448_29_1) {
            playersensorrightbig_393_instances.restore_selection();
        }
        if (or_temp_result_1448_29_0 || or_temp_result_1448_29_1 || or_temp_result_1448_29_2 || or_temp_result_1448_29_3 || or_temp_result_1448_29_4) {
            breakablewall_1748_instances.restore_selection();
        }
        if (or_temp_result_1448_29_0 || or_temp_result_1448_29_1 || or_temp_result_1448_29_2) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1448_29_4) {
            thunderspark_339_instances.restore_selection();
        }
        if (or_temp_result_1448_29_0) {
            playersensorleftbig_391_instances.restore_selection();
        }
        if (or_temp_result_1448_29_3) {
            playerreflect_447_instances.restore_selection();
        }
        if (or_temp_result_1448_29_0 || or_temp_result_1448_29_1) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1448_29_2) {
            shieldinstashield_359_instances.restore_selection();
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 5);
        }
        for (ObjectIterator it(breakablewall_1748_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, get_min(get_max(get_max(get_abs(((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(1)*1.5), 3)*((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(16), -10), 10));
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(6)/math_helper/2.0);
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    or_final_or_event_1448_29_4_end: ;
}
void Frames::event_func_6683()
{
    // event 1449_29
    bool or_result_1449_29 = false;
    bool or_temp_result_1449_29_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1449_29_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1449_29_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1449_29_0_end;
        playersensorbottombig_397_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, breakablewall_1748_instances)) goto or_event_1449_29_0_end;
        or_result_1449_29 = true;
        or_temp_result_1449_29_0 = true;
    }
    or_event_1449_29_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    playersensorbottombig_397_instances.clear_saved_selection();
    breakablewall_1748_instances.clear_saved_selection();
    if (or_temp_result_1449_29_0) {
        playersensorbottombig_397_instances.save_selection();
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        breakablewall_1748_instances.save_selection();
    }
    // event 1449_29
    bool or_temp_result_1449_29_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1449_29_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1449_29_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1449_29_1_end;
        playersensortopbig_395_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, breakablewall_1748_instances)) goto or_event_1449_29_1_end;
        or_result_1449_29 = true;
        or_temp_result_1449_29_1 = true;
        or_event_1449_29_1_end: ;
        playersensortopbig_395_instances.clear_saved_selection();
        if (or_temp_result_1449_29_1) {
            breakablewall_1748_instances.save_selection();
            playerothers_123_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            playersensortopbig_395_instances.save_selection();
        }
        if (!or_result_1449_29) goto or_final_or_event_1449_29_1_end;
        playersensortopbig_395_instances.empty_selection();
        playersensorbottombig_397_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        breakablewall_1748_instances.empty_selection();
        if (or_temp_result_1449_29_0) {
            playersensorbottombig_397_instances.restore_selection();
        }
        if (or_temp_result_1449_29_0 || or_temp_result_1449_29_1) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1449_29_0 || or_temp_result_1449_29_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1449_29_1) {
            playersensortopbig_395_instances.restore_selection();
        }
        if (or_temp_result_1449_29_0 || or_temp_result_1449_29_1) {
            breakablewall_1748_instances.restore_selection();
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 5);
        }
        for (ObjectIterator it(breakablewall_1748_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, get_min(get_max(((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(1)/math_helper/2.0, -10), 10));
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(6));
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    or_final_or_event_1449_29_1_end: ;
}
void Frames::event_func_6684()
{
    // event 1450_29
    {
        if (!(group_main_engine_1)) goto event_1450_29_end;
        breakablewall_1748_instances.clear_selection();
        for (ObjectIterator it(breakablewall_1748_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!breakablewall_1748_instances.has_selection()) goto event_1450_29_end;
        media.play_id(SOUND_COMMON_SHATTER_13, -1, 1);
        for (ObjectIterator it(breakablewall_1748_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        breakablewallpiece_1621_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(breakablewall_1748_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablewallpiece_1621(parent->x + 10, parent->y + 10), parent->layer);
                breakablewallpiece_1621_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablewallpiece_1621(parent->x + 30, parent->y + 10), parent->layer);
                breakablewallpiece_1621_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablewallpiece_1621(parent->x + 10, parent->y + 30), parent->layer);
                breakablewallpiece_1621_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablewallpiece_1621(parent->x + 30, parent->y + 30), parent->layer);
                breakablewallpiece_1621_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablewallpiece_1621(parent->x + 10, parent->y + 42), parent->layer);
                breakablewallpiece_1621_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablewallpiece_1621(parent->x + 30, parent->y + 42), parent->layer);
                breakablewallpiece_1621_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablewallpiece_1621(parent->x + 10, parent->y + 62), parent->layer);
                breakablewallpiece_1621_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablewallpiece_1621(parent->x + 30, parent->y + 62), parent->layer);
                breakablewallpiece_1621_instances.add_back();
            }
        }
        for (ObjectIterator it(breakablewallpiece_1621_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(breakablewall_1748_instances, it.current_index, default_active_instance))->alterables->values.get(23)-2.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_single(breakablewall_1748_instances, it.current_index, default_active_instance))->alterables->values.get(24)-4.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, 0.3);
            ((Active*)*it)->set_angle(randrange(4)*90, 0);
        }
    }
    event_1450_29_end: ;
}
void Frames::event_func_6685()
{
    // event 1451_29
    {
        if (!(group_main_engine_1)) goto event_1451_29_end;
        breakablewallpiece_1621_instances.clear_selection();
        for (ObjectIterator it(breakablewallpiece_1621_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)+((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(3)+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+((Active*)*it)->alterables->values.get(0), 0);
        }
    }
    event_1451_29_end: ;
}
void Frames::event_func_6686()
{
    // event 1452_29
    {
        if (!(group_main_engine_1)) goto event_1452_29_end;
        breakablewallpiece_1621_instances.clear_selection();
        for (ObjectIterator it(breakablewallpiece_1621_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (frame_bottom()+80))) { it.deselect(); continue; }
        }
        if (!breakablewallpiece_1621_instances.has_selection()) goto event_1452_29_end;
        for (ObjectIterator it(breakablewallpiece_1621_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1452_29_end: ;
}
void Frames::event_func_6687()
{
    // event 1453_29
    {
        if (!(group_main_engine_1)) goto event_1453_29_end;
        monitoricon_331_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        if (!check_overlap(monitoricon_331_instances, breakablewall_1748_instances)) goto event_1453_29_end;
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (9))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1453_29_end;
        for (ObjectIterator it(breakablewall_1748_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1453_29_end: ;
}
void Frames::event_func_6688()
{
    // event 1454_29
    {
        if (!(group_main_engine_1)) goto event_1454_29_end;
        monitoricon_331_instances.clear_selection();
        breakablefloor2_1761_instances.clear_selection();
        if (!check_overlap(monitoricon_331_instances, breakablefloor2_1761_instances)) goto event_1454_29_end;
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (9))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1454_29_end;
        for (ObjectIterator it(breakablefloor2_1761_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1454_29_end: ;
}
void Frames::event_func_6689()
{
    // event 1455_29
    {
        if (!(group_main_engine_1)) goto event_1455_29_end;
        breakablefloor1_1760_instances.clear_selection();
        for (ObjectIterator it(breakablefloor1_1760_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!breakablefloor1_1760_instances.has_selection()) goto event_1455_29_end;
        media.play_id(SOUND_COMMON_SHATTER_13, -1, 1);
        for (ObjectIterator it(breakablefloor1_1760_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        breakablefloorpiece_1625_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(breakablefloor1_1760_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece_1625(parent->x + 8, parent->y + 12), parent->layer);
                breakablefloorpiece_1625_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece_1625(parent->x + 24, parent->y + 12), parent->layer);
                breakablefloorpiece_1625_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece_1625(parent->x + 40, parent->y + 12), parent->layer);
                breakablefloorpiece_1625_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece_1625(parent->x + 56, parent->y + 12), parent->layer);
                breakablefloorpiece_1625_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece_1625(parent->x + 8, parent->y + 36), parent->layer);
                breakablefloorpiece_1625_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece_1625(parent->x + 24, parent->y + 36), parent->layer);
                breakablefloorpiece_1625_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece_1625(parent->x + 40, parent->y + 36), parent->layer);
                breakablefloorpiece_1625_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece_1625(parent->x + 56, parent->y + 36), parent->layer);
                breakablefloorpiece_1625_instances.add_back();
            }
        }
        for (ObjectIterator it(breakablefloorpiece_1625_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(breakablefloor1_1760_instances, it.current_index, default_active_instance))->alterables->values.get(23)-4.0+randrange(8.0));
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_single(breakablefloor1_1760_instances, it.current_index, default_active_instance))->alterables->values.get(24)-4.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, 0.3);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(3, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)));
    }
    event_1455_29_end: ;
}
void Frames::event_func_6690()
{
    // event 1456_29
    {
        if (!(group_main_engine_1)) goto event_1456_29_end;
        breakablefloor2_1761_instances.clear_selection();
        for (ObjectIterator it(breakablefloor2_1761_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!breakablefloor2_1761_instances.has_selection()) goto event_1456_29_end;
        for (ObjectIterator it(breakablefloor2_1761_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        breakablefloorpiece_1625_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(breakablefloor2_1761_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece_1625(parent->x + 8, parent->y + 12), parent->layer);
                breakablefloorpiece_1625_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece_1625(parent->x + 24, parent->y + 12), parent->layer);
                breakablefloorpiece_1625_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece_1625(parent->x + 40, parent->y + 12), parent->layer);
                breakablefloorpiece_1625_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece_1625(parent->x + 56, parent->y + 12), parent->layer);
                breakablefloorpiece_1625_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece_1625(parent->x + 8, parent->y + 36), parent->layer);
                breakablefloorpiece_1625_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece_1625(parent->x + 24, parent->y + 36), parent->layer);
                breakablefloorpiece_1625_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece_1625(parent->x + 40, parent->y + 36), parent->layer);
                breakablefloorpiece_1625_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece_1625(parent->x + 56, parent->y + 36), parent->layer);
                breakablefloorpiece_1625_instances.add_back();
            }
        }
        for (ObjectIterator it(breakablefloorpiece_1625_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(breakablefloor2_1761_instances, it.current_index, default_active_instance))->alterables->values.get(23)-4.0+randrange(8.0));
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_single(breakablefloor2_1761_instances, it.current_index, default_active_instance))->alterables->values.get(24)-4.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, 0.3);
        }
        media.play_id(SOUND_COMMON_SHATTER_13, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(3, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)));
    }
    event_1456_29_end: ;
}
void Frames::event_func_6691()
{
    // event 1457_29
    {
        if (!(group_main_engine_1)) goto event_1457_29_end;
        breakablefloorpiece_1625_instances.clear_selection();
        for (ObjectIterator it(breakablefloorpiece_1625_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)+((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(3)+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+((Active*)*it)->alterables->values.get(0), 0);
        }
    }
    event_1457_29_end: ;
}
void Frames::event_func_6692()
{
    // event 1458_29
    {
        if (!(group_main_engine_1)) goto event_1458_29_end;
        breakablefloorpiece_1625_instances.clear_selection();
        for (ObjectIterator it(breakablefloorpiece_1625_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (frame_bottom()+80))) { it.deselect(); continue; }
        }
        if (!breakablefloorpiece_1625_instances.has_selection()) goto event_1458_29_end;
        for (ObjectIterator it(breakablefloorpiece_1625_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1458_29_end: ;
}
void Frames::event_func_6693()
{
    // event 1460_29
    {
        if (!(group_main_engine_1)) goto event_1460_29_end;
        gimmickrollingarch_1715_instances.clear_selection();
        for (ObjectIterator it(gimmickrollingarch_1715_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
            ((Active*)*it)->alterables->values.set(0, get_max(0, get_min(((Active*)*it)->alterables->values.get(0), 180)));
        }
        gimmickrollingarch2_1726_instances.clear_selection();
        for (ObjectIterator it(gimmickrollingarch2_1726_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(gimmickrollingarch_1715_instances, it.current_index));
            if (parent == NULL) goto pos_end_1460_29_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1460_29_0: ;
        }
        for (ObjectIterator it(gimmickrollingarch2_1726_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(gimmickrollingarch_1715_instances, it.current_index, default_active_instance))->alterables->values.get(0)*3, 0);
        }
    }
    event_1460_29_end: ;
}
void Frames::event_func_6694()
{
    // event 1461_29
    {
        if (!(group_main_engine_1)) goto event_1461_29_end;
        playersensorrightbig_393_instances.clear_selection();
        gimmickrollingarch_1715_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, gimmickrollingarch_1715_instances)) goto event_1461_29_end;
        gimmickrollingarchbase_1725_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, gimmickrollingarchbase_1725_instances)) goto event_1461_29_end;
        playersensorleftbig_391_instances.clear_selection();
        if (!check_not_overlap(playersensorleftbig_391_instances, gimmickrollingarch_1715_instances)) goto event_1461_29_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_not_overlap(playersensorbottombig_397_instances, gimmickrollingarch_1715_instances)) goto event_1461_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) >= (0))) goto event_1461_29_end;
        for (ObjectIterator it(gimmickrollingarch_1715_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (175))) { it.deselect(); continue; }
        }
        if (!gimmickrollingarch_1715_instances.has_selection()) goto event_1461_29_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 90);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, 90);
        for (ObjectIterator it(gimmickrollingarchbase_1725_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
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
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 1);
    }
    event_1461_29_end: ;
}
void Frames::event_func_6695()
{
    // event 1462_29
    {
        if (!(group_main_engine_1)) goto event_1462_29_end;
        playersensorleftbig_391_instances.clear_selection();
        gimmickrollingarch_1715_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, gimmickrollingarch_1715_instances)) goto event_1462_29_end;
        gimmickrollingarchbase_1725_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, gimmickrollingarchbase_1725_instances)) goto event_1462_29_end;
        playersensorrightbig_393_instances.clear_selection();
        if (!check_not_overlap(playersensorrightbig_393_instances, gimmickrollingarch_1715_instances)) goto event_1462_29_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_not_overlap(playersensorbottombig_397_instances, gimmickrollingarch_1715_instances)) goto event_1462_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) <= (0))) goto event_1462_29_end;
        for (ObjectIterator it(gimmickrollingarch_1715_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (5))) { it.deselect(); continue; }
        }
        if (!gimmickrollingarch_1715_instances.has_selection()) goto event_1462_29_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 270);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, 270);
        for (ObjectIterator it(gimmickrollingarchbase_1725_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
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
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 1);
    }
    event_1462_29_end: ;
}
void Frames::event_func_6696()
{
    // event 1463_29
    {
        if (!(group_main_engine_1)) goto event_1463_29_end;
        gimmickrollingarchbase_1725_instances.clear_selection();
        for (ObjectIterator it(gimmickrollingarchbase_1725_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!gimmickrollingarchbase_1725_instances.has_selection()) goto event_1463_29_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickrollingarchbase_1725_instances)) goto event_1463_29_end;
        gimmickrollingarch_1715_instances.clear_selection();
        if (!check_overlap(gimmickrollingarchbase_1725_instances, gimmickrollingarch_1715_instances)) goto event_1463_29_end;
        for (ObjectIterator it(gimmickrollingarch_1715_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 180-atan2_deg(((Active*)*it)->get_y()-((Active*)get_instance(playersensorbottombig_397_instances))->get_y(), ((Active*)*it)->get_x()-((Active*)get_instance(playersensorbottombig_397_instances))->get_x()));
            ((Active*)*it)->alterables->values.set(1, 0.001);
        }
    }
    event_1463_29_end: ;
}
void Frames::event_func_6697()
{
    // event 1464_29
    {
        if (!(group_main_engine_1)) goto event_1464_29_end;
        gimmickrollingarchbase_1725_instances.clear_selection();
        for (ObjectIterator it(gimmickrollingarchbase_1725_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!gimmickrollingarchbase_1725_instances.has_selection()) goto event_1464_29_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickrollingarchbase_1725_instances)) goto event_1464_29_end;
        gimmickrollingarch_1715_instances.clear_selection();
        if (!check_overlap(gimmickrollingarchbase_1725_instances, gimmickrollingarch_1715_instances)) goto event_1464_29_end;
        for (ObjectIterator it(gimmickrollingarch_1715_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (190))) { it.deselect(); continue; }
        }
        if (!gimmickrollingarch_1715_instances.has_selection()) goto event_1464_29_end;
        for (ObjectIterator it(gimmickrollingarch_1715_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 360);
        }
    }
    event_1464_29_end: ;
}
void Frames::event_func_6698()
{
    // event 1465_29
    {
        if (!(group_main_engine_1)) goto event_1465_29_end;
        gimmickrollingarchbase_1725_instances.clear_selection();
        for (ObjectIterator it(gimmickrollingarchbase_1725_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!gimmickrollingarchbase_1725_instances.has_selection()) goto event_1465_29_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_not_overlap(playersensorbottombig_397_instances, gimmickrollingarchbase_1725_instances)) goto event_1465_29_end;
        for (ObjectIterator it(gimmickrollingarchbase_1725_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1465_29_end: ;
}
void Frames::event_func_6699()
{
    // event 1466_29
    {
        if (!(group_main_engine_1)) goto event_1466_29_end;
        gimmickrollingarchbase_1725_instances.clear_selection();
        for (ObjectIterator it(gimmickrollingarchbase_1725_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!gimmickrollingarchbase_1725_instances.has_selection()) goto event_1466_29_end;
        gimmickrollingarch_1715_instances.clear_selection();
        if (!check_overlap(gimmickrollingarch_1715_instances, gimmickrollingarchbase_1725_instances)) goto event_1466_29_end;
        for (ObjectIterator it(gimmickrollingarch_1715_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (180))) { it.deselect(); continue; }
        }
        if (!gimmickrollingarch_1715_instances.has_selection()) goto event_1466_29_end;
        for (ObjectIterator it(gimmickrollingarch_1715_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(1, 0.2);
        }
    }
    event_1466_29_end: ;
}
void Frames::event_func_6700()
{
    // event 1467_29
    {
        if (!(group_main_engine_1)) goto event_1467_29_end;
        gimmickrollingarchbase_1725_instances.clear_selection();
        for (ObjectIterator it(gimmickrollingarchbase_1725_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!gimmickrollingarchbase_1725_instances.has_selection()) goto event_1467_29_end;
        gimmickrollingarch_1715_instances.clear_selection();
        if (!check_overlap(gimmickrollingarch_1715_instances, gimmickrollingarchbase_1725_instances)) goto event_1467_29_end;
        for (ObjectIterator it(gimmickrollingarch_1715_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!gimmickrollingarch_1715_instances.has_selection()) goto event_1467_29_end;
        for (ObjectIterator it(gimmickrollingarch_1715_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.sub(1, 0.2);
        }
    }
    event_1467_29_end: ;
}
void Frames::event_func_6701()
{
    // event 1468_29
    bool or_result_1468_29 = false;
    bool or_temp_result_1468_29_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1468_29_0_end;
        gimmickrollingarch_1715_instances.clear_selection();
        for (ObjectIterator it(gimmickrollingarch_1715_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) != (0))) { it.deselect(); continue; }
        }
        if (!gimmickrollingarch_1715_instances.has_selection()) goto or_event_1468_29_0_end;
        or_result_1468_29 = true;
        or_temp_result_1468_29_0 = true;
    }
    or_event_1468_29_0_end: ;
    gimmickrollingarch_1715_instances.clear_saved_selection();
    if (or_temp_result_1468_29_0) {
        gimmickrollingarch_1715_instances.save_selection();
    }
    // event 1468_29
    bool or_temp_result_1468_29_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1468_29_1_end;
        gimmickrollingarch_1715_instances.clear_selection();
        for (ObjectIterator it(gimmickrollingarch_1715_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) != (0))) { it.deselect(); continue; }
        }
        if (!gimmickrollingarch_1715_instances.has_selection()) goto or_event_1468_29_1_end;
        or_result_1468_29 = true;
        or_temp_result_1468_29_1 = true;
        or_event_1468_29_1_end: ;
        if (or_temp_result_1468_29_1) {
            gimmickrollingarch_1715_instances.save_selection();
        }
        if (!or_result_1468_29) goto or_final_or_event_1468_29_1_end;
        gimmickrollingarch_1715_instances.empty_selection();
        if (or_temp_result_1468_29_0 || or_temp_result_1468_29_1) {
            gimmickrollingarch_1715_instances.restore_selection();
        }
        for (ObjectIterator it(gimmickrollingarch_1715_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play_id(SOUND_EDITOR_PLACEOBJECT_143, -1, 1);
    }
    or_final_or_event_1468_29_1_end: ;
}
void Frames::event_func_6702()
{
    // event 1469_29
    {
        if (!(group_main_engine_1)) goto event_1469_29_end;
        gimmicklanternbridge2_1728_instances.clear_selection();
        for (ObjectIterator it(gimmicklanternbridge2_1728_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(gimmicklanternbridge1_1727_instances, it.current_index));
            if (parent == NULL) goto pos_end_1469_29_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1469_29_0: ;
        }
        gimmicklanternbridge3_1729_instances.clear_selection();
        for (ObjectIterator it(gimmicklanternbridge3_1729_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(gimmicklanternbridge2_1728_instances, it.current_index));
            if (parent == NULL) goto pos_end_1469_29_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1469_29_1: ;
        }
        gimmicklanternbridge4_1730_instances.clear_selection();
        for (ObjectIterator it(gimmicklanternbridge4_1730_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(gimmicklanternbridge3_1729_instances, it.current_index));
            if (parent == NULL) goto pos_end_1469_29_2;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1469_29_2: ;
        }
        gimmicklanternbridge5_1731_instances.clear_selection();
        for (ObjectIterator it(gimmicklanternbridge5_1731_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(gimmicklanternbridge4_1730_instances, it.current_index));
            if (parent == NULL) goto pos_end_1469_29_3;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1469_29_3: ;
        }
        gimmicklanternbridge6_1732_instances.clear_selection();
        for (ObjectIterator it(gimmicklanternbridge6_1732_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(gimmicklanternbridge5_1731_instances, it.current_index));
            if (parent == NULL) goto pos_end_1469_29_4;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1469_29_4: ;
        }
        gimmicklanternbridge7_1733_instances.clear_selection();
        for (ObjectIterator it(gimmicklanternbridge7_1733_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(gimmicklanternbridge6_1732_instances, it.current_index));
            if (parent == NULL) goto pos_end_1469_29_5;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1469_29_5: ;
        }
        gimmicklanternbridge8_1734_instances.clear_selection();
        for (ObjectIterator it(gimmicklanternbridge8_1734_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(gimmicklanternbridge7_1733_instances, it.current_index));
            if (parent == NULL) goto pos_end_1469_29_6;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1469_29_6: ;
        }
        for (ObjectIterator it(gimmicklanternbridge2_1728_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(gimmicklanternbridge1_1727_instances, it.current_index, default_active_instance))->alterables->values.get(0), 0);
        }
        for (ObjectIterator it(gimmicklanternbridge3_1729_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(gimmicklanternbridge1_1727_instances, it.current_index, default_active_instance))->alterables->values.get(0)*2, 0);
        }
        for (ObjectIterator it(gimmicklanternbridge4_1730_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(gimmicklanternbridge1_1727_instances, it.current_index, default_active_instance))->alterables->values.get(0)*3, 0);
        }
        for (ObjectIterator it(gimmicklanternbridge5_1731_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(gimmicklanternbridge1_1727_instances, it.current_index, default_active_instance))->alterables->values.get(0)*4, 0);
        }
        for (ObjectIterator it(gimmicklanternbridge6_1732_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(gimmicklanternbridge1_1727_instances, it.current_index, default_active_instance))->alterables->values.get(0)*5, 0);
        }
        for (ObjectIterator it(gimmicklanternbridge7_1733_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(gimmicklanternbridge1_1727_instances, it.current_index, default_active_instance))->alterables->values.get(0)*6, 0);
        }
        for (ObjectIterator it(gimmicklanternbridge8_1734_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(gimmicklanternbridge1_1727_instances, it.current_index, default_active_instance))->alterables->values.get(0)*7, 0);
        }
        for (ObjectIterator it(gimmicklanternbridge3_1729_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_instance(gimmicklanternbridge1_1727_instances, it.current_index, default_active_instance))->get_direction());
        }
        for (ObjectIterator it(gimmicklanternbridge4_1730_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_instance(gimmicklanternbridge1_1727_instances, it.current_index, default_active_instance))->get_direction());
        }
        for (ObjectIterator it(gimmicklanternbridge5_1731_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_instance(gimmicklanternbridge1_1727_instances, it.current_index, default_active_instance))->get_direction());
        }
        for (ObjectIterator it(gimmicklanternbridge6_1732_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_instance(gimmicklanternbridge1_1727_instances, it.current_index, default_active_instance))->get_direction());
        }
        for (ObjectIterator it(gimmicklanternbridge7_1733_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_instance(gimmicklanternbridge1_1727_instances, it.current_index, default_active_instance))->get_direction());
        }
        for (ObjectIterator it(gimmicklanternbridge8_1734_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_instance(gimmicklanternbridge1_1727_instances, it.current_index, default_active_instance))->get_direction());
        }
        for (ObjectIterator it(gimmicklanternbridge2_1728_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_instance(gimmicklanternbridge1_1727_instances, it.current_index, default_active_instance))->get_direction());
        }
    }
    event_1469_29_end: ;
}
void Frames::event_func_6703()
{
    // event 1470_29
    {
        if (!(group_main_engine_1)) goto event_1470_29_end;
        gimmicklanternbridge1_1727_instances.clear_selection();
        for (ObjectIterator it(gimmicklanternbridge1_1727_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (180))) { it.deselect(); continue; }
        }
        if (!gimmicklanternbridge1_1727_instances.has_selection()) goto event_1470_29_end;
        for (ObjectIterator it(gimmicklanternbridge1_1727_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, cos_deg(((Active*)*it)->alterables->values.get(1)+180)*6.5*((Active*)*it)->alterables->values.get(2)+6.5*((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, 8);
        }
    }
    event_1470_29_end: ;
}
void Frames::event_func_6704()
{
    // event 1471_29
    {
        if (!(group_main_engine_1)) goto event_1471_29_end;
        gimmicklanternbridge1_1727_instances.clear_selection();
        for (ObjectIterator it(gimmicklanternbridge1_1727_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (30))) { it.deselect(); continue; }
        }
        if (!gimmicklanternbridge1_1727_instances.has_selection()) goto event_1471_29_end;
        for (ObjectIterator it(gimmicklanternbridge1_1727_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1471_29_end: ;
}
void Frames::event_func_6705()
{
    // event 1472_29
    {
        if (!(group_main_engine_1)) goto event_1472_29_end;
        gimmicklanternbridge1_1727_instances.clear_selection();
        for (ObjectIterator it(gimmicklanternbridge1_1727_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (30))) { it.deselect(); continue; }
        }
        if (!gimmicklanternbridge1_1727_instances.has_selection()) goto event_1472_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1472_29_end;
        for (ObjectIterator it(gimmicklanternbridge1_1727_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(3, -1);
        }
    }
    event_1472_29_end: ;
}
void Frames::event_func_6706()
{
    // event 1473_29
    {
        if (!(group_main_engine_1)) goto event_1473_29_end;
        gimmicklanternbridge1_1727_instances.clear_selection();
        for (ObjectIterator it(gimmicklanternbridge1_1727_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!gimmicklanternbridge1_1727_instances.has_selection()) goto event_1473_29_end;
        for (ObjectIterator it(gimmicklanternbridge1_1727_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, cos_deg(((Active*)*it)->alterables->values.get(1)+180)*6.5*((Active*)*it)->alterables->values.get(2)+6.5*((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.sub(1, 4);
        }
    }
    event_1473_29_end: ;
}
void Frames::event_func_6707()
{
    // event 1474_29
    {
        if (!(group_main_engine_1)) goto event_1474_29_end;
        gimmicklanternbridge1_1727_instances.clear_selection();
        for (ObjectIterator it(gimmicklanternbridge1_1727_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
        }
        if (!gimmicklanternbridge1_1727_instances.has_selection()) goto event_1474_29_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_single(gimmicklanternbridge1_1727_instances, default_active_instance))->get_x()))) goto event_1474_29_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_single(gimmicklanternbridge1_1727_instances, default_active_instance))->get_x()-88))) goto event_1474_29_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) < (((Active*)get_single(gimmicklanternbridge1_1727_instances, default_active_instance))->get_y()))) goto event_1474_29_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) > (((Active*)get_single(gimmicklanternbridge1_1727_instances, default_active_instance))->get_y()-200))) goto event_1474_29_end;
        for (ObjectIterator it(gimmicklanternbridge1_1727_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1474_29_end: ;
}
void Frames::event_func_6708()
{
    // event 1475_29
    {
        if (!(group_main_engine_1)) goto event_1475_29_end;
        gimmicklanternbridge1_1727_instances.clear_selection();
        for (ObjectIterator it(gimmicklanternbridge1_1727_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
        }
        if (!gimmicklanternbridge1_1727_instances.has_selection()) goto event_1475_29_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_single(gimmicklanternbridge1_1727_instances, default_active_instance))->get_x()))) goto event_1475_29_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_single(gimmicklanternbridge1_1727_instances, default_active_instance))->get_x()+88))) goto event_1475_29_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) < (((Active*)get_single(gimmicklanternbridge1_1727_instances, default_active_instance))->get_y()))) goto event_1475_29_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) > (((Active*)get_single(gimmicklanternbridge1_1727_instances, default_active_instance))->get_y()-200))) goto event_1475_29_end;
        for (ObjectIterator it(gimmicklanternbridge1_1727_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1475_29_end: ;
}
void Frames::event_func_6709()
{
    // event 1477_29
    {
        if (!(group_main_engine_1)) goto event_1477_29_end;
        gimmickboostblock_1747_instances.clear_selection();
        for (ObjectIterator it(gimmickboostblock_1747_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-120)) { it.deselect(); continue; }
        }
        if (!gimmickboostblock_1747_instances.has_selection()) goto event_1477_29_end;
        for (ObjectIterator it(gimmickboostblock_1747_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1477_29_end: ;
}
void Frames::event_func_6710()
{
    // event 1478_29
    {
        if (!(group_main_engine_1)) goto event_1478_29_end;
        gimmickboostblock_1747_instances.clear_selection();
        for (ObjectIterator it(gimmickboostblock_1747_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!gimmickboostblock_1747_instances.has_selection()) goto event_1478_29_end;
        for (ObjectIterator it(gimmickboostblock_1747_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->force_animation(1);
        }
    }
    event_1478_29_end: ;
}
void Frames::event_func_6711()
{
    // event 1479_29
    {
        if (!(group_main_engine_1)) goto event_1479_29_end;
        gimmickboostblockflame_1750_instances.clear_selection();
        for (ObjectIterator it(gimmickboostblockflame_1750_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(gimmickboostblockflame_1750_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(gimmickboostblock_1747_instances, it.current_index));
            if (parent == NULL) goto pos_end_1479_29_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1479_29_0: ;
        }
        for (ObjectIterator it(gimmickboostblockflame_1750_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_instance(gimmickboostblock_1747_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(gimmickboostblock_1747_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
    }
    event_1479_29_end: ;
}
void Frames::event_func_6712()
{
    // event 1480_29
    {
        if (!(group_main_engine_1)) goto event_1480_29_end;
        gimmickboostblockflame_1750_instances.clear_selection();
        for (ObjectIterator it(gimmickboostblockflame_1750_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!gimmickboostblockflame_1750_instances.has_selection()) goto event_1480_29_end;
        for (ObjectIterator it(gimmickboostblockflame_1750_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1480_29_end: ;
}
void Frames::event_func_6713()
{
    // event 1481_29
    {
        if (!(group_main_engine_1)) goto event_1481_29_end;
        gimmickboostblockflame_1750_instances.clear_selection();
        for (ObjectIterator it(gimmickboostblockflame_1750_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-30)) { it.deselect(); continue; }
        }
        if (!gimmickboostblockflame_1750_instances.has_selection()) goto event_1481_29_end;
        if (!((global_values->get(3)%math_helper%2) == (1))) goto event_1481_29_end;
        FrameObject * single_instance_1481_29_0; single_instance_1481_29_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gimmickboostblockflame_1750_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust01_332(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1481_29_0 == NULL)
                    single_instance_1481_29_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1481_29_0))->set_direction(((Active*)get_single(gimmickboostblockflame_1750_instances, default_active_instance))->get_direction()+16);
        ((Active*)((Active*)single_instance_1481_29_0))->force_speed(50);
        ((Active*)((Active*)single_instance_1481_29_0))->set_angle(randrange(4)*90, 0);
    }
    event_1481_29_end: ;
}
void Frames::event_func_6714()
{
    // event 1483_29
    {
        if (!(group_main_engine_1)) goto event_1483_29_end;
        player_389_instances.clear_selection();
        gimmickboostblock_1747_instances.clear_selection();
        if (!check_overlap(player_389_instances, gimmickboostblock_1747_instances)) goto event_1483_29_end;
        for (ObjectIterator it(gimmickboostblock_1747_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!gimmickboostblock_1747_instances.has_selection()) goto event_1483_29_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(23, ((Active*)get_single(gimmickboostblock_1747_instances, default_active_instance))->alterables->values.get(4));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(24, ((Active*)get_single(gimmickboostblock_1747_instances, default_active_instance))->alterables->values.get(5));
    }
    event_1483_29_end: ;
}
void Frames::event_func_6715()
{
    // event 1484_29
    {
        if (!(group_main_engine_1)) goto event_1484_29_end;
        gimmickboostblock_1747_instances.clear_selection();
        for (ObjectIterator it(gimmickboostblock_1747_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
        }
        if (!gimmickboostblock_1747_instances.has_selection()) goto event_1484_29_end;
        playersensorleftbig_391_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, gimmickboostblock_1747_instances)) goto event_1484_29_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(0, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
    }
    event_1484_29_end: ;
}
void Frames::event_func_6716()
{
    // event 1485_29
    {
        if (!(group_main_engine_1)) goto event_1485_29_end;
        gimmickboostblock_1747_instances.clear_selection();
        for (ObjectIterator it(gimmickboostblock_1747_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (0))) { it.deselect(); continue; }
        }
        if (!gimmickboostblock_1747_instances.has_selection()) goto event_1485_29_end;
        playersensorrightbig_393_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, gimmickboostblock_1747_instances)) goto event_1485_29_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_min(0, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
    }
    event_1485_29_end: ;
}
void Frames::event_func_6717()
{
    // event 1486_29
    {
        if (!(group_main_engine_1)) goto event_1486_29_end;
        gimmickboostblock_1747_instances.clear_selection();
        for (ObjectIterator it(gimmickboostblock_1747_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!gimmickboostblock_1747_instances.has_selection()) goto event_1486_29_end;
        playersensortopbig_395_instances.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, gimmickboostblock_1747_instances)) goto event_1486_29_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, get_max(0, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)));
    }
    event_1486_29_end: ;
}
void Frames::event_func_6718()
{
    // event 1487_29
    {
        if (!(group_main_engine_1)) goto event_1487_29_end;
        gimmickboostblock_1747_instances.clear_selection();
        for (ObjectIterator it(gimmickboostblock_1747_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (0))) { it.deselect(); continue; }
        }
        if (!gimmickboostblock_1747_instances.has_selection()) goto event_1487_29_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickboostblock_1747_instances)) goto event_1487_29_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, get_min(0, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)));
    }
    event_1487_29_end: ;
}
void Frames::event_func_6719()
{
    // event 1489_29
    {
        if (!(group_main_engine_1)) goto event_1489_29_end;
        gimmickboostblock_1747_instances.clear_selection();
        player_389_instances.clear_selection();
        if (!check_overlap(gimmickboostblock_1747_instances, player_389_instances)) goto event_1489_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1489_29_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1489_29_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
    }
    event_1489_29_end: ;
}
void Frames::event_func_6720()
{
    // event 1490_29
    {
        if (!(group_main_engine_1)) goto event_1490_29_end;
        gimmickboostblockflame_1750_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(gimmickboostblockflame_1750_instances, playercharactersensor_383_instances)) goto event_1490_29_end;
        for (ObjectIterator it(gimmickboostblockflame_1750_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!gimmickboostblockflame_1750_instances.has_selection()) goto event_1490_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1490_29_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1490_29_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1490_29_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
    }
    event_1490_29_end: ;
}
void Frames::event_func_6721()
{
    // event 1491_29
    {
        if (!(group_main_engine_1)) goto event_1491_29_end;
        gimmickboostblock_1747_instances.clear_selection();
        for (ObjectIterator it(gimmickboostblock_1747_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-80)) { it.deselect(); continue; }
        }
        if (!gimmickboostblock_1747_instances.has_selection()) goto event_1491_29_end;
        for (ObjectIterator it(gimmickboostblock_1747_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
        media.play_id(SOUND_BOOSTBLOCK_163, -1, 1);
    }
    event_1491_29_end: ;
}
void Frames::event_func_6722()
{
    // event 1492_29
    {
        if (!(group_main_engine_1)) goto event_1492_29_end;
        gimmickboostblock_1747_instances.clear_selection();
        for (ObjectIterator it(gimmickboostblock_1747_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (80))) { it.deselect(); continue; }
        }
        if (!gimmickboostblock_1747_instances.has_selection()) goto event_1492_29_end;
        for (ObjectIterator it(gimmickboostblock_1747_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_1492_29_end: ;
}
void Frames::event_func_6723()
{
    // event 1493_29
    {
        if (!(group_main_engine_1)) goto event_1493_29_end;
        gimmickboostblock_1747_instances.clear_selection();
        for (ObjectIterator it(gimmickboostblock_1747_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (80))) { it.deselect(); continue; }
        }
        if (!gimmickboostblock_1747_instances.has_selection()) goto event_1493_29_end;
        for (ObjectIterator it(gimmickboostblock_1747_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)*-1);
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->alterables->values.get(5)*-1);
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+16);
        }
    }
    event_1493_29_end: ;
}
void Frames::event_func_6724()
{
    // event 1494_29
    {
        if (!(group_main_engine_1)) goto event_1494_29_end;
        paperlantern_527_instances.clear_selection();
        for (ObjectIterator it(paperlantern_527_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((frame_time * 1000.0)/math_helper/150)%math_helper%4);
        }
    }
    event_1494_29_end: ;
}
void Frames::event_func_6725()
{
    // event 1495_29
    {
        if (!(group_main_engine_1)) goto event_1495_29_end;
        signyield_1738_instances.clear_selection();
        for (ObjectIterator it(signyield_1738_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-30)) { it.deselect(); continue; }
        }
        if (!signyield_1738_instances.has_selection()) goto event_1495_29_end;
        for (ObjectIterator it(signyield_1738_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(((Active*)*it)->alterables->values.get(0));
        }
    }
    event_1495_29_end: ;
}
void Frames::event_func_6726()
{
    // event 1496_29
    {
        if (!(group_main_engine_1)) goto event_1496_29_end;
        signyield_1738_instances.clear_selection();
        for (ObjectIterator it(signyield_1738_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_near_border(-30))) { it.deselect(); continue; }
        }
        if (!signyield_1738_instances.has_selection()) goto event_1496_29_end;
        for (ObjectIterator it(signyield_1738_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1496_29_end: ;
}
void Frames::event_func_6727()
{
    // event 1497_29
    {
        if (!(group_main_engine_1)) goto event_1497_29_end;
        playercharactersensor_383_instances.clear_selection();
        signyield_1738_instances.clear_selection();
        if (!check_overlap(playercharactersensor_383_instances, signyield_1738_instances)) goto event_1497_29_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) >= (5))) goto event_1497_29_end;
        for (ObjectIterator it(signyield_1738_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_floor(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*10));
        }
    }
    event_1497_29_end: ;
}
void Frames::event_func_6728()
{
    // event 1498_29
    {
        if (!(group_main_engine_1)) goto event_1498_29_end;
        signyield_1738_instances.clear_selection();
        for (ObjectIterator it(signyield_1738_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (20))) { it.deselect(); continue; }
        }
        if (!signyield_1738_instances.has_selection()) goto event_1498_29_end;
        for (ObjectIterator it(signyield_1738_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 1);
        }
    }
    event_1498_29_end: ;
}
void Frames::event_func_6729()
{
    // event 1499_29
    {
        if (!(group_main_engine_1)) goto event_1499_29_end;
        signyield_1738_instances.clear_selection();
        for (ObjectIterator it(signyield_1738_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
        }
        if (!signyield_1738_instances.has_selection()) goto event_1499_29_end;
        for (ObjectIterator it(signyield_1738_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->force_speed(0);
        }
    }
    event_1499_29_end: ;
}
void Frames::event_func_6730()
{
    // event 1500_29
    {
        if (!(group_main_engine_1)) goto event_1500_29_end;
        signstop_1716_instances.clear_selection();
        for (ObjectIterator it(signstop_1716_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-30)) { it.deselect(); continue; }
        }
        if (!signstop_1716_instances.has_selection()) goto event_1500_29_end;
        for (ObjectIterator it(signstop_1716_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(((Active*)*it)->alterables->values.get(0));
        }
    }
    event_1500_29_end: ;
}
void Frames::event_func_6731()
{
    // event 1501_29
    {
        if (!(group_main_engine_1)) goto event_1501_29_end;
        signstop_1716_instances.clear_selection();
        for (ObjectIterator it(signstop_1716_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_near_border(-30))) { it.deselect(); continue; }
        }
        if (!signstop_1716_instances.has_selection()) goto event_1501_29_end;
        for (ObjectIterator it(signstop_1716_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1501_29_end: ;
}
void Frames::event_func_6732()
{
    // event 1502_29
    {
        if (!(group_main_engine_1)) goto event_1502_29_end;
        playercharactersensor_383_instances.clear_selection();
        signstop_1716_instances.clear_selection();
        if (!check_overlap(playercharactersensor_383_instances, signstop_1716_instances)) goto event_1502_29_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) >= (5))) goto event_1502_29_end;
        for (ObjectIterator it(signstop_1716_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_floor(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*10));
        }
    }
    event_1502_29_end: ;
}
void Frames::event_func_6733()
{
    // event 1503_29
    {
        if (!(group_main_engine_1)) goto event_1503_29_end;
        signstop_1716_instances.clear_selection();
        for (ObjectIterator it(signstop_1716_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (20))) { it.deselect(); continue; }
        }
        if (!signstop_1716_instances.has_selection()) goto event_1503_29_end;
        for (ObjectIterator it(signstop_1716_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 1);
        }
    }
    event_1503_29_end: ;
}
void Frames::event_func_6734()
{
    // event 1504_29
    {
        if (!(group_main_engine_1)) goto event_1504_29_end;
        signstop_1716_instances.clear_selection();
        for (ObjectIterator it(signstop_1716_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
        }
        if (!signstop_1716_instances.has_selection()) goto event_1504_29_end;
        for (ObjectIterator it(signstop_1716_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->force_speed(0);
        }
    }
    event_1504_29_end: ;
}
void Frames::event_func_6735()
{
    // event 1505_29
    {
        if (!(group_main_engine_1)) goto event_1505_29_end;
        lamppostfront_1778_instances.clear_selection();
        for (ObjectIterator it(lamppostfront_1778_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!lamppostfront_1778_instances.has_selection()) goto event_1505_29_end;
        media.stop_sample(SOUND_COMMON_STRIKE_23);
        media.play_id(SOUND_COMMON_GLASSBREAK_2_134, -1, 1);
        for (ObjectIterator it(lamppostfront_1778_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        {
            loop_lamp_running = true;
            int times = int(5);
            loop_lamp_index = 0;
            while (loop_lamp_index < times) {
                loop_lamp_29();
                if (!loop_lamp_running) break;
                loop_lamp_index++;
            }
        }
    }
    event_1505_29_end: ;
}
void Frames::event_func_6736()
{
    // event 1506_29
    {
        if (!(group_main_engine_1)) goto event_1506_29_end;
        lamppostfront_1778_instances.clear_selection();
        for (ObjectIterator it(lamppostfront_1778_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!lamppostfront_1778_instances.has_selection()) goto event_1506_29_end;
        for (ObjectIterator it(lamppostfront_1778_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1506_29_end: ;
}
void Frames::event_func_6737()
{
    // event 1507_29
    bool or_result_1507_29 = false;
    bool or_temp_result_1507_29_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1507_29_0_end;
        lamppostfront_1778_instances.clear_selection();
        for (ObjectIterator it(lamppostfront_1778_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!lamppostfront_1778_instances.has_selection()) goto or_event_1507_29_0_end;
        or_result_1507_29 = true;
        or_temp_result_1507_29_0 = true;
    }
    or_event_1507_29_0_end: ;
    lamppostfront_1778_instances.clear_saved_selection();
    if (or_temp_result_1507_29_0) {
        lamppostfront_1778_instances.save_selection();
    }
    // event 1507_29
    bool or_temp_result_1507_29_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1507_29_1_end;
        lamppostfront_1778_instances.clear_selection();
        for (ObjectIterator it(lamppostfront_1778_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!lamppostfront_1778_instances.has_selection()) goto or_event_1507_29_1_end;
        qualifier_7.clear_selection();
        if (!check_overlap(lamppostfront_1778_instances, qualifier_7)) goto or_event_1507_29_1_end;
        or_result_1507_29 = true;
        or_temp_result_1507_29_1 = true;
        or_event_1507_29_1_end: ;
        qualifier_7.clear_saved_selection();
        if (or_temp_result_1507_29_1) {
            lamppostfront_1778_instances.save_selection();
            qualifier_7.save_selection();
        }
        if (!or_result_1507_29) goto or_final_or_event_1507_29_1_end;
        lamppostfront_1778_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1507_29_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1507_29_0 || or_temp_result_1507_29_1) {
            lamppostfront_1778_instances.restore_selection();
        }
        for (ObjectIterator it(lamppostfront_1778_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        {
            loop_lamp_running = true;
            int times = int(2);
            loop_lamp_index = 0;
            while (loop_lamp_index < times) {
                loop_lamp_29();
                if (!loop_lamp_running) break;
                loop_lamp_index++;
            }
        }
    }
    or_final_or_event_1507_29_1_end: ;
}
void Frames::event_func_6738()
{
    // event 1510_29
    {
        if (!(group_main_engine_1)) goto event_1510_29_end;
        lamppostfront_1778_instances.clear_selection();
        for (ObjectIterator it(lamppostfront_1778_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (2))) { it.deselect(); continue; }
        }
        if (!lamppostfront_1778_instances.has_selection()) goto event_1510_29_end;
        for (ObjectIterator it(lamppostfront_1778_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1510_29_end: ;
}
void Frames::event_func_6739()
{
    // event 1511_29
    bool or_result_1511_29 = false;
    bool or_temp_result_1511_29_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1511_29_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1511_29_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(65536)) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1511_29_0_end;
        player_389_instances.clear_selection();
        objectchair_522_instances.clear_selection();
        if (!check_overlap(player_389_instances, objectchair_522_instances)) goto or_event_1511_29_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) < (4))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1511_29_0_end;
        or_result_1511_29 = true;
        or_temp_result_1511_29_0 = true;
    }
    or_event_1511_29_0_end: ;
    player_389_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    objectchair_522_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1511_29_0) {
        playermovementvalues_245_instances.save_selection();
        playerothers_123_instances.save_selection();
        player_389_instances.save_selection();
        objectchair_522_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 1511_29
    bool or_temp_result_1511_29_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1511_29_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_1511_29_1_end;
        player_389_instances.clear_selection();
        objectchair_522_instances.clear_selection();
        if (!check_overlap(player_389_instances, objectchair_522_instances)) goto or_event_1511_29_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) < (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1511_29_1_end;
        if (!((get_abs(((Active*)get_single(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(1))) < (2))) goto or_event_1511_29_1_end;
        or_result_1511_29 = true;
        or_temp_result_1511_29_1 = true;
        or_event_1511_29_1_end: ;
        playerinput_19_instances.clear_saved_selection();
        if (or_temp_result_1511_29_1) {
            playermovementvalues_245_instances.save_selection();
            playerinput_19_instances.save_selection();
            player_389_instances.save_selection();
            objectchair_522_instances.save_selection();
        }
        if (!or_result_1511_29) goto or_final_or_event_1511_29_1_end;
        player_389_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        objectchair_522_instances.empty_selection();
        playerskinsash_418_instances.empty_selection();
        if (or_temp_result_1511_29_0 || or_temp_result_1511_29_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1511_29_0 || or_temp_result_1511_29_1) {
            objectchair_522_instances.restore_selection();
        }
        if (or_temp_result_1511_29_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_1511_29_0) {
            playerskinsash_418_instances.restore_selection();
        }
        if (or_temp_result_1511_29_0) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1511_29_0 || or_temp_result_1511_29_1) {
            player_389_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 39);
        }
    }
    or_final_or_event_1511_29_1_end: ;
}
void Frames::event_func_6740()
{
    // event 1517_29
    {
        if (!(group_main_engine_1)) goto event_1517_29_end;
        enemycoil_1755_instances.clear_selection();
        for (ObjectIterator it(enemycoil_1755_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) != (180))) { it.deselect(); continue; }
        }
        if (!enemycoil_1755_instances.has_selection()) goto event_1517_29_end;
        enemycoilflip_1756_instances.clear_selection();
        if (!check_overlap(enemycoil_1755_instances, enemycoilflip_1756_instances)) goto event_1517_29_end;
        for (ObjectIterator it(enemycoil_1755_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 180);
        }
        for (ObjectIterator it(enemycoilflip_1756_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1517_29_end: ;
}
void Frames::event_func_6741()
{
    // event 1518_29
    {
        if (!(group_main_engine_1)) goto event_1518_29_end;
        enemycoil_1755_instances.clear_selection();
        for (ObjectIterator it(enemycoil_1755_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!enemycoil_1755_instances.has_selection()) goto event_1518_29_end;
        for (ObjectIterator it(enemycoil_1755_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, -4);
        }
    }
    event_1518_29_end: ;
}
void Frames::event_func_6742()
{
    // event 1519_29
    {
        if (!(group_main_engine_1)) goto event_1519_29_end;
        enemycoil_1755_instances.clear_selection();
        for (ObjectIterator it(enemycoil_1755_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemycoil_1755_instances.has_selection()) goto event_1519_29_end;
        for (ObjectIterator it(enemycoil_1755_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 4);
        }
    }
    event_1519_29_end: ;
}
void Frames::event_func_6743()
{
    // event 1520_29
    {
        if (!(group_main_engine_1)) goto event_1520_29_end;
        enemycoil_1755_instances.clear_selection();
        for (ObjectIterator it(enemycoil_1755_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!enemycoil_1755_instances.has_selection()) goto event_1520_29_end;
        media.play_id(SOUND_COIL_STEP_164, -1, 1);
    }
    event_1520_29_end: ;
}
void Frames::event_func_6744()
{
    // event 1521_29
    {
        if (!(group_main_engine_1)) goto event_1521_29_end;
        enemycoil_1755_instances.clear_selection();
        for (ObjectIterator it(enemycoil_1755_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) != (0))) { it.deselect(); continue; }
        }
        if (!enemycoil_1755_instances.has_selection()) goto event_1521_29_end;
        for (ObjectIterator it(enemycoil_1755_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.set(4, 120);
            ((Active*)*it)->alterables->values.set(5, (((Active*)*it)->alterables->values.get(5)+1)%math_helper%2);
        }
    }
    event_1521_29_end: ;
}
void Frames::event_func_6745()
{
    // event 1522_29
    {
        if (!(group_main_engine_1)) goto event_1522_29_end;
        enemycoil_1755_instances.clear_selection();
        for (ObjectIterator it(enemycoil_1755_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!enemycoil_1755_instances.has_selection()) goto event_1522_29_end;
        for (ObjectIterator it(enemycoil_1755_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.set(4, 20);
            ((Active*)*it)->alterables->values.set(5, (((Active*)*it)->alterables->values.get(5)+1)%math_helper%2);
        }
    }
    event_1522_29_end: ;
}
void Frames::event_func_6746()
{
    // event 1523_29
    {
        if (!(group_main_engine_1)) goto event_1523_29_end;
        enemycoil_1755_instances.clear_selection();
        for (ObjectIterator it(enemycoil_1755_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) != (0))) { it.deselect(); continue; }
        }
        if (!enemycoil_1755_instances.has_selection()) goto event_1523_29_end;
        for (ObjectIterator it(enemycoil_1755_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, get_max(0, ((Active*)*it)->alterables->values.get(4)-1));
        }
    }
    event_1523_29_end: ;
}
void Frames::event_func_6747()
{
    // event 1524_29
    {
        if (!(group_main_engine_1)) goto event_1524_29_end;
        enemycoil_1755_instances.clear_selection();
        for (ObjectIterator it(enemycoil_1755_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
        }
        if (!enemycoil_1755_instances.has_selection()) goto event_1524_29_end;
        for (ObjectIterator it(enemycoil_1755_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, get_max(0, ((Active*)*it)->alterables->values.get(4)-1));
        }
    }
    event_1524_29_end: ;
}
void Frames::event_func_6748()
{
    // event 1525_29
    {
        if (!(group_main_engine_1)) goto event_1525_29_end;
        enemycoilhead_1782_instances.clear_selection();
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!enemycoilhead_1782_instances.has_selection()) goto event_1525_29_end;
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1525_29_end: ;
}
void Frames::event_func_6749()
{
    // event 1526_29
    {
        if (!(group_main_engine_1)) goto event_1526_29_end;
        enemycoilhead_1782_instances.clear_selection();
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(8))) { it.deselect(); continue; }
        }
        if (!enemycoilhead_1782_instances.has_selection()) goto event_1526_29_end;
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        media.play_id(SOUND_ENEMY_ELECTRIC_167, -1, 1);
    }
    event_1526_29_end: ;
}
void Frames::event_func_6750()
{
    // event 1527_29
    {
        if (!(group_main_engine_1)) goto event_1527_29_end;
        enemycoilhead_1782_instances.clear_selection();
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(7))) { it.deselect(); continue; }
        }
        if (!enemycoilhead_1782_instances.has_selection()) goto event_1527_29_end;
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 5);
        }
    }
    event_1527_29_end: ;
}
void Frames::event_func_6751()
{
    // event 1528_29
    {
        if (!(group_main_engine_1)) goto event_1528_29_end;
        enemycoilhead_1782_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(enemycoilhead_1782_instances, playercharactersensor_383_instances)) goto event_1528_29_end;
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(7))) { it.deselect(); continue; }
        }
        if (!enemycoilhead_1782_instances.has_selection()) goto event_1528_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1528_29_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (3))) goto event_1528_29_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1528_29_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        media.play_id(SOUND_DAMAGE_ELECTRIC_2_373, -1, 1);
    }
    event_1528_29_end: ;
}
void Frames::event_func_6752()
{
    // event 1529_29
    {
        if (!(group_main_engine_1)) goto event_1529_29_end;
        enemycoilhead_1782_instances.clear_selection();
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(7))) { it.deselect(); continue; }
        }
        if (!enemycoilhead_1782_instances.has_selection()) goto event_1529_29_end;
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
    }
    event_1529_29_end: ;
}
void Frames::event_func_6753()
{
    // event 1530_29
    {
        if (!(group_main_engine_1)) goto event_1530_29_end;
        enemycoilhead_1782_instances.clear_selection();
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!enemycoilhead_1782_instances.has_selection()) goto event_1530_29_end;
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1530_29_end: ;
}
void Frames::event_func_6754()
{
    // event 1531_29
    {
        if (!(group_main_engine_1)) goto event_1531_29_end;
        enemycoil_1755_instances.clear_selection();
        for (ObjectIterator it(enemycoil_1755_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemycoil_1755_instances.has_selection()) goto event_1531_29_end;
        for (ObjectIterator it(enemycoil_1755_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1531_29_end: ;
}
void Frames::event_func_6755()
{
    // event 1532_29
    {
        if (!(group_main_engine_1)) goto event_1532_29_end;
        enemycoil_1755_instances.clear_selection();
        for (ObjectIterator it(enemycoil_1755_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (60))) { it.deselect(); continue; }
        }
        if (!enemycoil_1755_instances.has_selection()) goto event_1532_29_end;
        for (ObjectIterator it(enemycoil_1755_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 120);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-cos_deg(((Active*)*it)->alterables->values.get(7))*75);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-sin_deg(((Active*)*it)->alterables->values.get(7))*-75);
        }
    }
    event_1532_29_end: ;
}
void Frames::event_func_6756()
{
    // event 1533_29
    {
        if (!(group_main_engine_1)) goto event_1533_29_end;
        enemycoil_1755_instances.clear_selection();
        for (ObjectIterator it(enemycoil_1755_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (-60))) { it.deselect(); continue; }
        }
        if (!enemycoil_1755_instances.has_selection()) goto event_1533_29_end;
        for (ObjectIterator it(enemycoil_1755_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 120);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+cos_deg(((Active*)*it)->alterables->values.get(7))*75);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)*it)->alterables->values.get(7))*-75);
        }
    }
    event_1533_29_end: ;
}
void Frames::event_func_6757()
{
    // event 1534_29
    {
        if (!(group_main_engine_1)) goto event_1534_29_end;
        enemycoil_1755_instances.clear_selection();
        enemylimiter_350_instances.clear_selection();
        if (!check_overlap(enemycoil_1755_instances, enemylimiter_350_instances)) goto event_1534_29_end;
        for (ObjectIterator it(enemycoil_1755_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!enemycoil_1755_instances.has_selection()) goto event_1534_29_end;
        for (ObjectIterator it(enemycoil_1755_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->alterables->values.get(6)*-1);
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1534_29_end: ;
}
void Frames::event_func_6758()
{
    // event 1535_29
    {
        if (!(group_main_engine_1)) goto event_1535_29_end;
        enemycoil_1755_instances.clear_selection();
        for (ObjectIterator it(enemycoil_1755_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!enemycoil_1755_instances.has_selection()) goto event_1535_29_end;
        if (!check_not_overlap(enemycoil_1755_instances, enemylimiter_350_instances)) goto event_1535_29_end;
        for (ObjectIterator it(enemycoil_1755_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1535_29_end: ;
}
void Frames::event_func_6759()
{
    // event 1536_29
    {
        if (!(group_main_engine_1)) goto event_1536_29_end;
        enemycoilpiece2_1753_instances.clear_selection();
        for (ObjectIterator it(enemycoilpiece2_1753_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(enemycoil_1755_instances, it.current_index, default_active_instance))->alterables->values.get(3));
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(enemycoil_1755_instances, it.current_index, default_active_instance))->alterables->values.get(3)*2);
        }
        enemycoilpiece1_1751_instances.clear_selection();
        for (ObjectIterator it(enemycoilpiece1_1751_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(enemycoil_1755_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        enemycoilpiece3_1752_instances.clear_selection();
        for (ObjectIterator it(enemycoilpiece3_1752_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(enemycoil_1755_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        enemycoilpiece4_1754_instances.clear_selection();
        for (ObjectIterator it(enemycoilpiece4_1754_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(enemycoil_1755_instances, it.current_index, default_active_instance))->alterables->values.get(3));
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(enemycoil_1755_instances, it.current_index, default_active_instance))->alterables->values.get(3)*2);
        }
        for (ObjectIterator it(enemycoilpiece2_1753_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(enemycoilhead_1782_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
        for (ObjectIterator it(enemycoilpiece1_1751_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(enemycoilhead_1782_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
        for (ObjectIterator it(enemycoilpiece3_1752_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(enemycoilhead_1782_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
        for (ObjectIterator it(enemycoilpiece4_1754_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(enemycoilhead_1782_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
    }
    event_1536_29_end: ;
}
void Frames::event_func_6760()
{
    // event 1537_29
    {
        if (!(group_main_engine_1)) goto event_1537_29_end;
        enemycoilpiece1_1751_instances.clear_selection();
        for (ObjectIterator it(enemycoilpiece1_1751_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (0))) { it.deselect(); continue; }
        }
        if (!enemycoilpiece1_1751_instances.has_selection()) goto event_1537_29_end;
        for (ObjectIterator it(enemycoilpiece1_1751_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(3)*0.5);
        }
    }
    event_1537_29_end: ;
}
void Frames::event_func_6761()
{
    // event 1538_29
    {
        if (!(group_main_engine_1)) goto event_1538_29_end;
        enemycoilpiece1_1751_instances.clear_selection();
        for (ObjectIterator it(enemycoilpiece1_1751_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (0))) { it.deselect(); continue; }
        }
        if (!enemycoilpiece1_1751_instances.has_selection()) goto event_1538_29_end;
        for (ObjectIterator it(enemycoilpiece1_1751_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(3)*1.5);
        }
    }
    event_1538_29_end: ;
}
void Frames::event_func_6762()
{
    // event 1539_29
    {
        if (!(group_main_engine_1)) goto event_1539_29_end;
        enemycoilpiece3_1752_instances.clear_selection();
        for (ObjectIterator it(enemycoilpiece3_1752_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (0))) { it.deselect(); continue; }
        }
        if (!enemycoilpiece3_1752_instances.has_selection()) goto event_1539_29_end;
        for (ObjectIterator it(enemycoilpiece3_1752_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(3)*1.5);
        }
    }
    event_1539_29_end: ;
}
void Frames::event_func_6763()
{
    // event 1540_29
    {
        if (!(group_main_engine_1)) goto event_1540_29_end;
        enemycoilpiece3_1752_instances.clear_selection();
        for (ObjectIterator it(enemycoilpiece3_1752_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (0))) { it.deselect(); continue; }
        }
        if (!enemycoilpiece3_1752_instances.has_selection()) goto event_1540_29_end;
        for (ObjectIterator it(enemycoilpiece3_1752_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(3)*0.5);
        }
    }
    event_1540_29_end: ;
}
