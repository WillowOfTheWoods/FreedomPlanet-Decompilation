#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_3827()
{
    // event 1506_16
    {
        if (!(group_main_engine_1)) goto event_1506_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (1))) goto event_1506_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1506_16_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(0)) == (1))) goto event_1506_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) <= (((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)+8))) goto event_1506_16_end;
        if (not_always_1506_16 > loop_count) {
            not_always_1506_16 = loop_count + 2;
            goto event_1506_16_end;
        }
        not_always_1506_16 = loop_count + 2;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(9, 0-(1-get_min(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)))*30);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 0);
    }
    event_1506_16_end: ;
}
void Frames::event_func_3828()
{
    // event 1507_16
    {
        if (!(group_main_engine_1)) goto event_1507_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (9))) goto event_1507_16_end;
        if (not_always_1507_16 > loop_count) {
            not_always_1507_16 = loop_count + 2;
            goto event_1507_16_end;
        }
        not_always_1507_16 = loop_count + 2;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(9, 0);
    }
    event_1507_16_end: ;
}
void Frames::event_func_3829()
{
    // event 1508_16
    {
        if (!(group_main_engine_1)) goto event_1508_16_end;
        if (!((global_values->get(3)%math_helper%60) == (6))) goto event_1508_16_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) > (((Active*)get_instance(generalwaterhorizon_415_instances, default_active_instance))->get_y()+8))) goto event_1508_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (1))) goto event_1508_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (4))) goto event_1508_16_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(9, 1);
    }
    event_1508_16_end: ;
}
void Frames::event_func_3830()
{
    // event 1509_16
    {
        if (!(group_main_engine_1)) goto event_1509_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)) == (5))) goto event_1509_16_end;
        if (not_always_1509_16 > loop_count) {
            not_always_1509_16 = loop_count + 2;
            goto event_1509_16_end;
        }
        not_always_1509_16 = loop_count + 2;
        media.play_id(SOUND_COMMON_AIRLOSE_18, -1, 1);
    }
    event_1509_16_end: ;
}
void Frames::event_func_3831()
{
    // event 1510_16
    {
        if (!(group_main_engine_1)) goto event_1510_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)) == (10))) goto event_1510_16_end;
        if (not_always_1510_16 > loop_count) {
            not_always_1510_16 = loop_count + 2;
            goto event_1510_16_end;
        }
        not_always_1510_16 = loop_count + 2;
        media.play_id(SOUND_COMMON_AIRLOSE_18, -1, 1);
    }
    event_1510_16_end: ;
}
void Frames::event_func_3832()
{
    // event 1511_16
    {
        if (!(group_main_engine_1)) goto event_1511_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)) == (15))) goto event_1511_16_end;
        if (not_always_1511_16 > loop_count) {
            not_always_1511_16 = loop_count + 2;
            goto event_1511_16_end;
        }
        not_always_1511_16 = loop_count + 2;
        media.play_id(SOUND_COMMON_AIRLOSE_18, -1, 1);
    }
    event_1511_16_end: ;
}
void Frames::event_func_3833()
{
    // event 1512_16
    {
        if (!(group_main_engine_1)) goto event_1512_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)) == (20))) goto event_1512_16_end;
        if (not_always_1512_16 > loop_count) {
            not_always_1512_16 = loop_count + 2;
            goto event_1512_16_end;
        }
        not_always_1512_16 = loop_count + 2;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_6000_122);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
        }
    }
    event_1512_16_end: ;
}
void Frames::event_func_3834()
{
    // event 1513_16
    {
        if (!(group_main_engine_1)) goto event_1513_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)) >= (20))) goto event_1513_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)) < (31))) goto event_1513_16_end;
        if (!((global_values->get(3)%math_helper%120) == (6))) goto event_1513_16_end;
        if (not_always_1513_16 > loop_count) {
            not_always_1513_16 = loop_count + 2;
            goto event_1513_16_end;
        }
        not_always_1513_16 = loop_count + 2;
        media.play_id(SOUND_COUNTDOWN_TICK_41, -1, 1);
        media.set_sample_volume(SOUND_COUNTDOWN_TICK_41, get_min((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)*7)-100, 100));
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
    }
    event_1513_16_end: ;
}
void Frames::event_func_3835()
{
    // event 1514_16
    {
        if (!(group_main_engine_1)) goto event_1514_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)) >= (20))) goto event_1514_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)) < (31))) goto event_1514_16_end;
        if (!((global_values->get(3)%math_helper%120) == (66))) goto event_1514_16_end;
        if (not_always_1514_16 > loop_count) {
            not_always_1514_16 = loop_count + 2;
            goto event_1514_16_end;
        }
        not_always_1514_16 = loop_count + 2;
        media.play_id(SOUND_COUNTDOWN_TOCK_42, -1, 1);
        media.set_sample_volume(SOUND_COUNTDOWN_TOCK_42, get_min((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)*7)-100, 100));
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
    }
    event_1514_16_end: ;
}
void Frames::event_func_3836()
{
    // event 1515_16
    {
        if (!(group_main_engine_1)) goto event_1515_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)) == (32))) goto event_1515_16_end;
        if (not_always_1515_16 > loop_count) {
            not_always_1515_16 = loop_count + 2;
            goto event_1515_16_end;
        }
        not_always_1515_16 = loop_count + 2;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 3);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unqueue_music_70);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        {
            loop_check_death_running = true;
            int times = int(1);
            loop_check_death_index = 0;
            while (loop_check_death_index < times) {
                loop_check_death_13();
                if (!loop_check_death_running) break;
                loop_check_death_index++;
            }
        }
    }
    event_1515_16_end: ;
}
void Frames::event_func_3837()
{
    // event 1516_16
    {
        if (!(group_main_engine_1)) goto event_1516_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)) < (20))) goto event_1516_16_end;
        if (not_always_1516_16 > loop_count) {
            not_always_1516_16 = loop_count + 2;
            goto event_1516_16_end;
        }
        not_always_1516_16 = loop_count + 2;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 1);
            ((Active*)*it)->alterables->values.set(10, 0);
        }
        media.set_channel_volume(32-1, 100);
    }
    event_1516_16_end: ;
}
void Frames::event_func_3838()
{
    // event 1517_16
    {
        if (!(group_main_engine_1)) goto event_1517_16_end;
        effectswatersplash_416_instances.clear_selection();
        for (ObjectIterator it(effectswatersplash_416_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(2));
        }
    }
    event_1517_16_end: ;
}
void Frames::event_func_3839()
{
    // event 1518_16
    {
        if (!(group_main_engine_1)) goto event_1518_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (1))) goto event_1518_16_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) <= (0))) goto event_1518_16_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(2)) < (16))) goto event_1518_16_end;
        ((Counter*)get_instance(guiair_759_instances))->set_x(((Counter*)get_instance(guiair_759_instances))->get_x()+2);
        ((Active*)get_instance(guiicon_452_instances))->alterables->values.add(2, 1);
    }
    event_1518_16_end: ;
}
void Frames::event_func_3840()
{
    // event 1519_16
    bool or_result_1519_16 = false;
    bool or_temp_result_1519_16_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1519_16_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1519_16_0_end;
        guiicon_452_instances.clear_selection();
        for (ObjectIterator it(guiicon_452_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!guiicon_452_instances.has_selection()) goto or_event_1519_16_0_end;
        or_result_1519_16 = true;
        or_temp_result_1519_16_0 = true;
    }
    or_event_1519_16_0_end: ;
    guiicon_452_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    if (or_temp_result_1519_16_0) {
        guiicon_452_instances.save_selection();
        playerothers_123_instances.save_selection();
    }
    // event 1519_16
    bool or_temp_result_1519_16_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1519_16_1_end;
        guiicon_452_instances.clear_selection();
        for (ObjectIterator it(guiicon_452_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!guiicon_452_instances.has_selection()) goto or_event_1519_16_1_end;
        or_result_1519_16 = true;
        or_temp_result_1519_16_1 = true;
        or_event_1519_16_1_end: ;
        if (or_temp_result_1519_16_1) {
            guiicon_452_instances.save_selection();
        }
        if (!or_result_1519_16) goto or_final_or_event_1519_16_1_end;
        guiicon_452_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        if (or_temp_result_1519_16_0 || or_temp_result_1519_16_1) {
            guiicon_452_instances.restore_selection();
        }
        if (or_temp_result_1519_16_0) {
            playerothers_123_instances.restore_selection();
        }
        for (ObjectIterator it(guiicon_452_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(2, 1);
        }
        guiair_759_instances.clear_selection();
        for (ObjectIterator it(guiair_759_instances); !it.end(); ++it) {
            ((Counter*)*it)->set_x(((Counter*)*it)->get_x()-2);
        }
    }
    or_final_or_event_1519_16_1_end: ;
}
void Frames::event_func_3841()
{
    // event 1520_16
    {
        if (!(group_main_engine_1)) goto event_1520_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)) < (20))) goto event_1520_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1520_16_end;
        ((Counter*)get_instance(guiair_759_instances))->set(get_max(6-((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)*0.2, 1));
    }
    event_1520_16_end: ;
}
void Frames::event_func_3842()
{
    // event 1521_16
    {
        if (!(group_main_engine_1)) goto event_1521_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)) < (20))) goto event_1521_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (0))) goto event_1521_16_end;
        ((Counter*)get_instance(guiair_759_instances))->set(get_max(12-((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)*0.5, 1));
    }
    event_1521_16_end: ;
}
void Frames::event_func_3843()
{
    // event 1522_16
    {
        if (!(group_main_engine_1)) goto event_1522_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)) >= (20))) goto event_1522_16_end;
        ((Counter*)get_instance(guiair_759_instances))->set(((frame_time * 1000.0)/math_helper/40)%math_helper%2);
    }
    event_1522_16_end: ;
}
void Frames::event_func_3844()
{
    // event 1524_16
    {
        if (!(group_main_engine_1)) goto event_1524_16_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 1479, 594, 1706, 672)) > (0))) goto event_1524_16_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1524_16_end: ;
}
void Frames::event_func_3845()
{
    // event 1525_16
    {
        if (!(group_main_engine_1)) goto event_1525_16_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 9450, 181, 9655, 263)) > (0))) goto event_1525_16_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1525_16_end: ;
}
void Frames::event_func_3846()
{
    // event 1526_16
    {
        if (!(group_main_engine_1)) goto event_1526_16_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 3214, 838, 3316, 905)) > (0))) goto event_1526_16_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1526_16_end: ;
}
void Frames::event_func_3847()
{
    // event 1527_16
    {
        if (!(group_main_engine_1)) goto event_1527_16_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 8866, 715, 9271, 795)) > (0))) goto event_1527_16_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1527_16_end: ;
}
void Frames::event_func_3848()
{
    // event 1528_16
    {
        if (!(group_main_engine_1)) goto event_1528_16_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 8197, 442, 8419, 508)) > (0))) goto event_1528_16_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1528_16_end: ;
}
void Frames::event_func_3849()
{
    // event 1529_16
    {
        if (!(group_main_engine_1)) goto event_1529_16_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 9247, 611, 10207, 730)) > (0))) goto event_1529_16_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1529_16_end: ;
}
void Frames::event_func_3850()
{
    // event 1530_16
    {
        if (!(group_main_engine_1)) goto event_1530_16_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 10607, 656, 10745, 712)) > (0))) goto event_1530_16_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1530_16_end: ;
}
void Frames::event_func_3851()
{
    // event 1531_16
    {
        if (!(group_main_engine_1)) goto event_1531_16_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 10523, 659, 10564, 714)) > (0))) goto event_1531_16_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1531_16_end: ;
}
void Frames::event_func_3852()
{
    // event 1532_16
    {
        if (!(group_main_engine_1)) goto event_1532_16_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 10413, 1052, 11263, 1155)) > (0))) goto event_1532_16_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1532_16_end: ;
}
void Frames::event_func_3853()
{
    // event 1533_16
    {
        if (!(group_main_engine_1)) goto event_1533_16_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 11671, 822, 12411, 904)) > (0))) goto event_1533_16_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1533_16_end: ;
}
void Frames::event_func_3854()
{
    // event 1534_16
    {
        if (!(group_main_engine_1)) goto event_1534_16_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 10388, 157, 10483, 224)) > (0))) goto event_1534_16_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1534_16_end: ;
}
void Frames::event_func_3855()
{
    // event 1536_16
    {
        if (!(group_main_engine_1)) goto event_1536_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_1536_16_end;
        guikeystone_455_instances.clear_selection();
        for (ObjectIterator it(guikeystone_455_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1536_16_end: ;
}
void Frames::event_func_3856()
{
    // event 1537_16
    {
        if (!(group_main_engine_1)) goto event_1537_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_1537_16_end;
        player_389_instances.clear_selection();
        objectdigspot_734_instances.clear_selection();
        if (!check_overlap(player_389_instances, objectdigspot_734_instances)) goto event_1537_16_end;
        if (!((global_values->get(3)%math_helper%30) >= (15))) goto event_1537_16_end;
        guikeystone_455_instances.clear_selection();
        for (ObjectIterator it(guikeystone_455_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(guikeystone_455_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(guiscoretimerings_451_instances));
            if (parent == NULL) goto pos_end_1537_16_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 68, parent->get_y() + 19);
            pos_end_1537_16_0: ;
        }
    }
    event_1537_16_end: ;
}
void Frames::event_func_3857()
{
    // event 1538_16
    {
        if (!(group_main_engine_1)) goto event_1538_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (27))) goto event_1538_16_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1538_16_end;
        objectdigspot_734_instances.clear_selection();
        player_389_instances.clear_selection();
        if (!check_overlap(objectdigspot_734_instances, player_389_instances)) goto event_1538_16_end;
        ((Active*)get_instance(playerdig_448_instances))->alterables->flags.enable(1);
        for (ObjectIterator it(objectdigspot_734_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1538_16_end: ;
}
void Frames::event_func_3858()
{
    // event 1539_16
    {
        if (!(group_main_engine_1)) goto event_1539_16_end;
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1539_16_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+1);
        }
    }
    event_1539_16_end: ;
}
void Frames::event_func_3859()
{
    // event 1540_16
    {
        if (!(group_main_engine_1)) goto event_1540_16_end;
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1540_16_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-1);
        }
    }
    event_1540_16_end: ;
}
void Frames::event_func_3860()
{
    // event 1541_16
    {
        if (!(group_main_engine_1)) goto event_1541_16_end;
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (3))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1541_16_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        }
    }
    event_1541_16_end: ;
}
void Frames::event_func_3861()
{
    // event 1542_16
    {
        if (!(group_main_engine_1)) goto event_1542_16_end;
        objectdigspot_734_instances.clear_selection();
        for (ObjectIterator it(objectdigspot_734_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!objectdigspot_734_instances.has_selection()) goto event_1542_16_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 38)), 2, 38);
    }
    event_1542_16_end: ;
}
void Frames::event_func_3862()
{
    // event 1543_16
    {
        if (!(group_main_engine_1)) goto event_1543_16_end;
        objectdigspot_734_instances.clear_selection();
        for (ObjectIterator it(objectdigspot_734_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!objectdigspot_734_instances.has_selection()) goto event_1543_16_end;
        for (ObjectIterator it(objectdigspot_734_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1543_16_0; single_instance_1543_16_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectdigspot_734_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitorkeystone_562(parent->x + 16, parent->y + 16), parent->layer);
                if (single_instance_1543_16_0 == NULL)
                    single_instance_1543_16_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1543_16_0))->alterables->values.set(0, 1);
        ((Active*)((Active*)single_instance_1543_16_0))->alterables->flags.enable(0);
        ((Active*)((Active*)single_instance_1543_16_0))->alterables->flags.enable(3);
        ((Active*)((Active*)single_instance_1543_16_0))->set_layer(((Active*)get_single(objectdigspot_734_instances, default_active_instance))->layer->index+1-1-1);
        ((Active*)((Active*)single_instance_1543_16_0))->alterables->values.set(1, -4);
        media.play_id(SOUND_MILLA_DIGSUCCESS_308, -1, 1);
        effectsdebris_319_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(objectdigspot_734_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 14, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 10, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 18, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 22, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
        }
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(pick_random(9, 4, 5, 6, 7, 8, 9, 10, 11, 12));
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->get_movement()->set_speed(30+randrange(20));
        }
        {
            loop_dig_crystals_running = true;
            int times = int(2);
            loop_dig_crystals_index = 0;
            while (loop_dig_crystals_index < times) {
                loop_dig_crystals_13();
                if (!loop_dig_crystals_running) break;
                loop_dig_crystals_index++;
            }
        }
    }
    event_1543_16_end: ;
}
void Frames::event_func_3863()
{
    // event 1544_16
    {
        if (!(group_main_engine_1)) goto event_1544_16_end;
        objectdigspot_734_instances.clear_selection();
        for (ObjectIterator it(objectdigspot_734_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (2))) { it.deselect(); continue; }
        }
        if (!objectdigspot_734_instances.has_selection()) goto event_1544_16_end;
        {
            loop_dig_crystals_running = true;
            int times = int(5);
            loop_dig_crystals_index = 0;
            while (loop_dig_crystals_index < times) {
                loop_dig_crystals_13();
                if (!loop_dig_crystals_running) break;
                loop_dig_crystals_index++;
            }
        }
        objectdigspot_734_instances.clear_selection();
        for (ObjectIterator it(objectdigspot_734_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_MILLA_DIGSUCCESS_308, -1, 1);
        effectsdebris_319_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(objectdigspot_734_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 14, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 10, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 18, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 22, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
        }
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(pick_random(9, 4, 5, 6, 7, 8, 9, 10, 11, 12));
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->get_movement()->set_speed(30+randrange(20));
        }
    }
    event_1544_16_end: ;
}
void Frames::event_func_3864()
{
    // event 1545_16
    {
        if (!(group_main_engine_1)) goto event_1545_16_end;
        objectdigspot_734_instances.clear_selection();
        for (ObjectIterator it(objectdigspot_734_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!objectdigspot_734_instances.has_selection()) goto event_1545_16_end;
        for (ObjectIterator it(objectdigspot_734_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_MILLA_DIGSUCCESS_308, -1, 1);
        effectsdebris_319_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(objectdigspot_734_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 14, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 10, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 18, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 22, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
        }
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(pick_random(9, 4, 5, 6, 7, 8, 9, 10, 11, 12));
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->get_movement()->set_speed(30+randrange(20));
        }
        FrameObject * single_instance_1545_16_1; single_instance_1545_16_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectdigspot_734_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectpetal_302(parent->x + 16, parent->y + 32), parent->layer);
                if (single_instance_1545_16_1 == NULL)
                    single_instance_1545_16_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1545_16_1))->advance_movement(+1);
        ((Active*)((Active*)single_instance_1545_16_1))->alterables->values.set(0, 2);
        ((Active*)((Active*)single_instance_1545_16_1))->set_direction(8);
    }
    event_1545_16_end: ;
}
void Frames::event_func_3865()
{
    // event 1546_16
    {
        if (!(group_main_engine_1)) goto event_1546_16_end;
        objectdigspot_734_instances.clear_selection();
        for (ObjectIterator it(objectdigspot_734_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
        }
        if (!objectdigspot_734_instances.has_selection()) goto event_1546_16_end;
        {
            loop_dig_crystals_running = true;
            int times = int(5);
            loop_dig_crystals_index = 0;
            while (loop_dig_crystals_index < times) {
                loop_dig_crystals_13();
                if (!loop_dig_crystals_running) break;
                loop_dig_crystals_index++;
            }
        }
        objectdigspot_734_instances.clear_selection();
        for (ObjectIterator it(objectdigspot_734_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_MILLA_DIGSUCCESS_308, -1, 1);
        effectsdebris_319_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(objectdigspot_734_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 14, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 10, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 18, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 22, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
        }
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(pick_random(9, 4, 5, 6, 7, 8, 9, 10, 11, 12));
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->get_movement()->set_speed(30+randrange(20));
        }
    }
    event_1546_16_end: ;
}
void Frames::event_func_3866()
{
    // event 1547_16
    {
        if (!(group_main_engine_1)) goto event_1547_16_end;
        objectdigspot_734_instances.clear_selection();
        for (ObjectIterator it(objectdigspot_734_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
        }
        if (!objectdigspot_734_instances.has_selection()) goto event_1547_16_end;
        for (ObjectIterator it(objectdigspot_734_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_MILLA_DIGSUCCESS_308, -1, 1);
        effectsdebris_319_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(objectdigspot_734_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 14, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 10, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 18, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 22, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
        }
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(pick_random(9, 4, 5, 6, 7, 8, 9, 10, 11, 12));
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->get_movement()->set_speed(30+randrange(20));
        }
        FrameObject * single_instance_1547_16_1; single_instance_1547_16_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectdigspot_734_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitorwoodshield_325(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1547_16_1 == NULL)
                    single_instance_1547_16_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1547_16_1))->alterables->values.set(0, 1);
        ((Active*)((Active*)single_instance_1547_16_1))->alterables->flags.enable(0);
        ((Active*)((Active*)single_instance_1547_16_1))->alterables->flags.enable(3);
        ((Active*)((Active*)single_instance_1547_16_1))->set_layer(((Active*)get_single(objectdigspot_734_instances, default_active_instance))->layer->index+1-1-1);
        ((Active*)((Active*)single_instance_1547_16_1))->alterables->values.set(1, -4);
    }
    event_1547_16_end: ;
}
void Frames::event_func_3867()
{
    // event 1550_16
    {
        if (!(group_main_engine_1)) goto event_1550_16_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(24)) == (1))) goto event_1550_16_end;
        if (not_always_1550_16 > loop_count) {
            not_always_1550_16 = loop_count + 2;
            goto event_1550_16_end;
        }
        not_always_1550_16 = loop_count + 2;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_75+global_strings->get(4)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(4)+str_0_1_123);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_reset_music_124+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1550_16_end: ;
}
void Frames::event_func_3868()
{
    // event 1555_16
    {
        if (!(group_main_engine_1)) goto event_1555_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (7540))) goto event_1555_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (7640))) goto event_1555_16_end;
        if (!((global_values->get(4)) < (2))) goto event_1555_16_end;
        global_values->set(4, 2);
        global_values->set(5, 7600);
        global_values->set(6, 1100);
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
    event_1555_16_end: ;
}
void Frames::event_func_3869()
{
    // event 1556_16
    {
        if (!(group_main_engine_1)) goto event_1556_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (11250))) goto event_1556_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (11350))) goto event_1556_16_end;
        if (!((global_values->get(4)) < (3))) goto event_1556_16_end;
        global_values->set(4, 3);
        global_values->set(5, 11300);
        global_values->set(6, 988);
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
    event_1556_16_end: ;
}
void Frames::event_func_3870()
{
    // event 1557_16
    {
        if (!(group_main_engine_1)) goto event_1557_16_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(cameratriggerboss_424_instances, default_active_instance))->get_x()))) goto event_1557_16_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) < (((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()))) goto event_1557_16_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1557_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 1);
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1557_16_end: ;
}
void Frames::event_func_3871()
{
    // event 1558_16
    {
        if (!(group_main_engine_1)) goto event_1558_16_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(cameratriggerboss_424_instances, default_active_instance))->get_x()-240))) goto event_1558_16_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) < (((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()))) goto event_1558_16_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1558_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1558_16_end: ;
}
void Frames::event_func_3872()
{
    // event 1560_16
    {
        if (!(group_main_engine_1)) goto event_1560_16_end;
        minibossironworm_675_instances.clear_selection();
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (-3))) { it.deselect(); continue; }
        }
        if (!minibossironworm_675_instances.has_selection()) goto event_1560_16_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(cameratriggerboss_424_instances, default_active_instance))->get_x()+100))) goto event_1560_16_end;
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, -2);
        }
    }
    event_1560_16_end: ;
}
void Frames::event_func_3873()
{
    // event 1561_16
    {
        if (!(group_main_engine_1)) goto event_1561_16_end;
        minibossironworm_675_instances.clear_selection();
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (-2))) { it.deselect(); continue; }
        }
        if (!minibossironworm_675_instances.has_selection()) goto event_1561_16_end;
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(8, 1);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
    }
    event_1561_16_end: ;
}
void Frames::event_func_3874()
{
    // event 1562_16
    {
        if (!(group_main_engine_1)) goto event_1562_16_end;
        minibossironworm_675_instances.clear_selection();
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (60))) { it.deselect(); continue; }
        }
        if (!minibossironworm_675_instances.has_selection()) goto event_1562_16_end;
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
            ((Active*)*it)->alterables->values.set(8, 0);
        }
        media.play_id(SOUND_ROCK_BURST_244, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 5));
    }
    event_1562_16_end: ;
}
void Frames::event_func_3875()
{
    // event 1563_16
    {
        if (!(group_main_engine_1)) goto event_1563_16_end;
        minibossironworm_675_instances.clear_selection();
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) < (8))) { it.deselect(); continue; }
        }
        if (!minibossironworm_675_instances.has_selection()) goto event_1563_16_end;
        minibossironwormsegment_674_instances.clear_selection();
        for (ObjectIterator it(minibossironwormsegment_674_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(minibossironwormbase_753_instances))->get_x()+sin_deg(180+sin_deg(((Active*)*it)->alterables->values.get(4))*((Active*)get_single(minibossironworm_675_instances, it.current_index, default_active_instance))->alterables->values.get(6))*(get_max(((Active*)*it)->alterables->values.get(3)-1, 0.5)*((Active*)get_single(minibossironworm_675_instances, it.current_index, default_active_instance))->alterables->values.get(4)));
            ((Active*)*it)->set_y(((Active*)get_instance(minibossironwormbase_753_instances))->get_y()+cos_deg(180+sin_deg(((Active*)*it)->alterables->values.get(4))*((Active*)get_single(minibossironworm_675_instances, it.current_index, default_active_instance))->alterables->values.get(6))*(((Active*)*it)->alterables->values.get(3)*((Active*)get_single(minibossironworm_675_instances, it.current_index, default_active_instance))->alterables->values.get(4)));
        }
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(minibossironwormbase_753_instances))->get_x()+sin_deg(180+sin_deg(((Active*)*it)->alterables->values.get(5))*((Active*)*it)->alterables->values.get(6))*((minibossironwormsegment_674_instances.size())*((Active*)*it)->alterables->values.get(4)));
            ((Active*)*it)->set_y(((Active*)get_instance(minibossironwormbase_753_instances))->get_y()+cos_deg(180+sin_deg(((Active*)*it)->alterables->values.get(5))*((Active*)*it)->alterables->values.get(6))*((minibossironwormsegment_674_instances.size()+1)*((Active*)*it)->alterables->values.get(4))-14);
        }
        for (ObjectIterator it(minibossironwormsegment_674_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, (((Active*)*it)->alterables->values.get(4)+((Active*)get_single(minibossironworm_675_instances, it.current_index, default_active_instance))->alterables->values.get(3))%math_helper%360);
        }
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, (((Active*)*it)->alterables->values.get(5)+((Active*)*it)->alterables->values.get(3))%math_helper%360);
        }
    }
    event_1563_16_end: ;
}
void Frames::event_func_3876()
{
    // event 1564_16
    {
        if (!(group_main_engine_1)) goto event_1564_16_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1564_16_end;
        minibossironworm_675_instances.clear_selection();
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) < (8))) { it.deselect(); continue; }
        }
        if (!minibossironworm_675_instances.has_selection()) goto event_1564_16_end;
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(8, 1);
        }
        FrameObject * single_instance_1564_16_0; single_instance_1564_16_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(minibossironwormbase_753_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyrock_657(parent->x + 0, parent->y + -24), parent->layer);
                if (single_instance_1564_16_0 == NULL)
                    single_instance_1564_16_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1564_16_0))->set_scale(1.0-(randrange(10)*0.05));
        ((Active*)((Active*)single_instance_1564_16_0))->set_angle(randrange(360), 0);
        ((Active*)((Active*)single_instance_1564_16_0))->get_movement()->set_speed(((Active*)single_instance_1564_16_0)->get_movement()->get_speed()-10+randrange(20));
        ((Active*)((Active*)single_instance_1564_16_0))->move_back();
    }
    event_1564_16_end: ;
}
void Frames::event_func_3877()
{
    // event 1565_16
    {
        if (!(group_main_engine_1)) goto event_1565_16_end;
        minibossironworm_675_instances.clear_selection();
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (-1))) { it.deselect(); continue; }
        }
        if (!minibossironworm_675_instances.has_selection()) goto event_1565_16_end;
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, get_min(((Active*)*it)->alterables->values.get(4)+(26-((Active*)*it)->alterables->values.get(4))*0.05, 24));
        }
    }
    event_1565_16_end: ;
}
void Frames::event_func_3878()
{
    // event 1566_16
    {
        if (!(group_main_engine_1)) goto event_1566_16_end;
        minibossironworm_675_instances.clear_selection();
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (24))) { it.deselect(); continue; }
        }
        if (!minibossironworm_675_instances.has_selection()) goto event_1566_16_end;
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 0);
        }
        if (!group_main_engine_level_specific_methods_bosses_boss_iron_worm_iron_worm_main_1) {
            group_main_engine_level_specific_methods_bosses_boss_iron_worm_iron_worm_main_1 = true;
        }
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)*it)->layer->index+1+1-1);
            ((Active*)*it)->alterables->values.set(4, 24);
            ((Active*)*it)->alterables->values.set(8, 0);
            ((Active*)*it)->move_back();
        }
    }
    event_1566_16_end: ;
}
void Frames::event_func_3879()
{
    // event 1567_16
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_iron_worm_iron_worm_main_1)) goto event_1567_16_end;
        minibossironworm_675_instances.clear_selection();
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
        }
        if (!minibossironworm_675_instances.has_selection()) goto event_1567_16_end;
        if (not_always_1567_16 > loop_count) {
            not_always_1567_16 = loop_count + 2;
            goto event_1567_16_end;
        }
        not_always_1567_16 = loop_count + 2;
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        minibossironwormsegment_674_instances.clear_selection();
        for (ObjectIterator it(minibossironwormsegment_674_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1567_16_end: ;
}
void Frames::event_func_3880()
{
    // event 1568_16
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_iron_worm_iron_worm_main_1)) goto event_1568_16_end;
        minibossironworm_675_instances.clear_selection();
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (-1))) { it.deselect(); continue; }
        }
        if (!minibossironworm_675_instances.has_selection()) goto event_1568_16_end;
        if (not_always_1568_16 > loop_count) {
            not_always_1568_16 = loop_count + 2;
            goto event_1568_16_end;
        }
        not_always_1568_16 = loop_count + 2;
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        minibossironwormsegment_674_instances.clear_selection();
        for (ObjectIterator it(minibossironwormsegment_674_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1568_16_end: ;
}
void Frames::event_func_3881()
{
    // event 1569_16
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_iron_worm_iron_worm_main_1)) goto event_1569_16_end;
        minibossironworm_675_instances.clear_selection();
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
        }
        if (!minibossironworm_675_instances.has_selection()) goto event_1569_16_end;
        if (not_always_1569_16 > loop_count) {
            not_always_1569_16 = loop_count + 2;
            goto event_1569_16_end;
        }
        not_always_1569_16 = loop_count + 2;
        minibossironwormsegment_674_instances.clear_selection();
        for (ObjectIterator it(minibossironwormsegment_674_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
    }
    event_1569_16_end: ;
}
void Frames::event_func_3882()
{
    // event 1570_16
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_iron_worm_iron_worm_main_1)) goto event_1570_16_end;
        minibossironworm_675_instances.clear_selection();
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!minibossironworm_675_instances.has_selection()) goto event_1570_16_end;
        if (not_always_1570_16 > loop_count) {
            not_always_1570_16 = loop_count + 2;
            goto event_1570_16_end;
        }
        not_always_1570_16 = loop_count + 2;
        minibossironwormsegment_674_instances.clear_selection();
        for (ObjectIterator it(minibossironwormsegment_674_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
    }
    event_1570_16_end: ;
}
void Frames::event_func_3883()
{
    // event 1571_16
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_iron_worm_iron_worm_main_1)) goto event_1571_16_end;
        minibossironworm_675_instances.clear_selection();
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (25))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!minibossironworm_675_instances.has_selection()) goto event_1571_16_end;
        minibossironwormsegment_674_instances.clear_selection();
        for (ObjectIterator it(minibossironwormsegment_674_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(3)*-20-30);
        }
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, (minibossironwormsegment_674_instances.size()+1)*-20-30);
            ((Active*)*it)->alterables->values.set(6, 50);
            ((Active*)*it)->alterables->values.set(7, 6);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1571_16_end: ;
}
void Frames::event_func_3884()
{
    // event 1572_16
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_iron_worm_iron_worm_main_1)) goto event_1572_16_end;
        minibossironworm_675_instances.clear_selection();
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossironworm_675_instances.has_selection()) goto event_1572_16_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1572_16_end;
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(8, 1);
        }
    }
    event_1572_16_end: ;
}
void Frames::event_func_3885()
{
    // event 1573_16
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_iron_worm_iron_worm_main_1)) goto event_1573_16_end;
        minibossironworm_675_instances.clear_selection();
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(8)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()+20))) { it.deselect(); continue; }
        }
        if (!minibossironworm_675_instances.has_selection()) goto event_1573_16_end;
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, -1);
        }
    }
    event_1573_16_end: ;
}
void Frames::event_func_3886()
{
    // event 1574_16
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_iron_worm_iron_worm_main_1)) goto event_1574_16_end;
        minibossironworm_675_instances.clear_selection();
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(8)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()-20))) { it.deselect(); continue; }
        }
        if (!minibossironworm_675_instances.has_selection()) goto event_1574_16_end;
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 1);
        }
    }
    event_1574_16_end: ;
}
void Frames::event_func_3887()
{
    // event 1575_16
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_iron_worm_iron_worm_main_1)) goto event_1575_16_end;
        minibossironworm_675_instances.clear_selection();
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (100))) { it.deselect(); continue; }
        }
        if (!minibossironworm_675_instances.has_selection()) goto event_1575_16_end;
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 1);
            ((Active*)*it)->alterables->values.set(8, 0);
        }
    }
    event_1575_16_end: ;
}
void Frames::event_func_3888()
{
    // event 1576_16
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_iron_worm_iron_worm_main_1)) goto event_1576_16_end;
        minibossironworm_675_instances.clear_selection();
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) < (150))) { it.deselect(); continue; }
        }
        if (!minibossironworm_675_instances.has_selection()) goto event_1576_16_end;
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_min(((Active*)*it)->alterables->values.get(6)+1, 30));
            ((Active*)*it)->alterables->values.add(8, 1);
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1576_16_end: ;
}
void Frames::event_func_3889()
{
    // event 1577_16
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_iron_worm_iron_worm_main_1)) goto event_1577_16_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1577_16_end;
        minibossironworm_675_instances.clear_selection();
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) < (150))) { it.deselect(); continue; }
        }
        if (!minibossironworm_675_instances.has_selection()) goto event_1577_16_end;
        FrameObject * single_instance_1577_16_0; single_instance_1577_16_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibossironworm_675_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibossacid_658(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1577_16_0 == NULL)
                    single_instance_1577_16_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1577_16_0))->set_x(((Active*)single_instance_1577_16_0)->get_x()-8+randrange(17));
        ((Active*)((Active*)single_instance_1577_16_0))->set_y(((Active*)single_instance_1577_16_0)->get_y()-8+randrange(17));
        ((Active*)((Active*)single_instance_1577_16_0))->alterables->values.set(0, ((Active*)single_instance_1577_16_0)->alterables->values.get(0)*((Active*)get_single(minibossironworm_675_instances, default_active_instance))->alterables->values.get(9));
    }
    event_1577_16_end: ;
}
void Frames::event_func_3890()
{
    // event 1578_16
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_iron_worm_iron_worm_main_1)) goto event_1578_16_end;
        minibossironworm_675_instances.clear_selection();
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (150))) { it.deselect(); continue; }
        }
        if (!minibossironworm_675_instances.has_selection()) goto event_1578_16_end;
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-1, 10));
        }
    }
    event_1578_16_end: ;
}
void Frames::event_func_3891()
{
    // event 1579_16
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_iron_worm_iron_worm_main_1)) goto event_1579_16_end;
        minibossironworm_675_instances.clear_selection();
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (10))) { it.deselect(); continue; }
        }
        if (!minibossironworm_675_instances.has_selection()) goto event_1579_16_end;
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 0);
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->alterables->values.set(8, -60);
        }
    }
    event_1579_16_end: ;
}
void Frames::event_func_3892()
{
    // event 1580_16
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_iron_worm_iron_worm_main_1)) goto event_1580_16_end;
        minibossironworm_675_instances.clear_selection();
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (10))) { it.deselect(); continue; }
        }
        if (!minibossironworm_675_instances.has_selection()) goto event_1580_16_end;
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-1, 10));
        }
    }
    event_1580_16_end: ;
}
void Frames::event_func_3893()
{
    // event 1581_16
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_iron_worm_iron_worm_main_1)) goto event_1581_16_end;
        minibossironworm_675_instances.clear_selection();
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (10))) { it.deselect(); continue; }
        }
        if (!minibossironworm_675_instances.has_selection()) goto event_1581_16_end;
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    event_1581_16_end: ;
}
void Frames::event_func_3894()
{
    // event 1582_16
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_iron_worm_iron_worm_main_1)) goto event_1582_16_end;
        minibossironworm_675_instances.clear_selection();
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (7))) { it.deselect(); continue; }
        }
        if (!minibossironworm_675_instances.has_selection()) goto event_1582_16_end;
        minibossironwormsegment_674_instances.clear_selection();
        for (ObjectIterator it(minibossironwormsegment_674_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(3)*-20-30);
        }
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, (minibossironwormsegment_674_instances.size()+1)*-20-30);
            ((Active*)*it)->alterables->values.set(6, 30);
            ((Active*)*it)->alterables->values.set(7, 7);
            ((Active*)*it)->alterables->values.set(8, 0);
        }
    }
    event_1582_16_end: ;
}
void Frames::event_func_3895()
{
    // event 1583_16
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_iron_worm_iron_worm_main_1)) goto event_1583_16_end;
        if (!((global_values->get(3)%math_helper%7) == (0))) goto event_1583_16_end;
        minibossironworm_675_instances.clear_selection();
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (7))) { it.deselect(); continue; }
        }
        if (!minibossironworm_675_instances.has_selection()) goto event_1583_16_end;
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1583_16_0_end;
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
        dynamic_1583_16_0_end: ;
    }
    event_1583_16_end: ;
}
void Frames::event_func_3896()
{
    // event 1584_16
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_iron_worm_iron_worm_main_1)) goto event_1584_16_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1584_16_end;
        minibossironworm_675_instances.clear_selection();
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (7))) { it.deselect(); continue; }
        }
        if (!minibossironworm_675_instances.has_selection()) goto event_1584_16_end;
        FrameObject * single_instance_1584_16_0; single_instance_1584_16_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibossironworm_675_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1584_16_0 == NULL)
                    single_instance_1584_16_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1584_16_0))->set_x(((Active*)single_instance_1584_16_0)->get_x()-20+randrange(41));
        ((Active*)((Active*)single_instance_1584_16_0))->set_y(((Active*)single_instance_1584_16_0)->get_y()-30+randrange(41));
        ((Active*)((Active*)single_instance_1584_16_0))->force_speed(50);
    }
    event_1584_16_end: ;
}
void Frames::event_func_3897()
{
    // event 1585_16
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_iron_worm_iron_worm_main_1)) goto event_1585_16_end;
        minibossironworm_675_instances.clear_selection();
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) < (140))) { it.deselect(); continue; }
        }
        if (!minibossironworm_675_instances.has_selection()) goto event_1585_16_end;
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 16);
            ((Active*)*it)->alterables->values.add(8, 1);
            ((Active*)*it)->force_animation(10);
        }
        minibossironwormsegment_674_instances.clear_selection();
        for (ObjectIterator it(minibossironwormsegment_674_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
        for (ObjectIterator it(minibossironwormsegment_674_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
    }
    event_1585_16_end: ;
}
void Frames::event_func_3898()
{
    // event 1586_16
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_iron_worm_iron_worm_main_1)) goto event_1586_16_end;
        minibossironworm_675_instances.clear_selection();
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (140))) { it.deselect(); continue; }
        }
        if (!minibossironworm_675_instances.has_selection()) goto event_1586_16_end;
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_min(((Active*)*it)->alterables->values.get(6)+3, 90));
            ((Active*)*it)->alterables->values.set(3, get_max(((Active*)*it)->alterables->values.get(3)-2, 4));
        }
    }
    event_1586_16_end: ;
}
void Frames::event_func_3899()
{
    // event 1587_16
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_iron_worm_iron_worm_main_1)) goto event_1587_16_end;
        minibossironworm_675_instances.clear_selection();
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (60))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!minibossironworm_675_instances.has_selection()) goto event_1587_16_end;
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(7, 8);
            ((Active*)*it)->force_animation(0);
        }
        minibossironwormsegment_674_instances.clear_selection();
        for (ObjectIterator it(minibossironwormsegment_674_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, -5);
            ((Active*)*it)->alterables->values.set(23, -3);
        }
        media.play_id(SOUND_COMMON_EXPLODE_8_17, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 5));
    }
    event_1587_16_end: ;
}
void Frames::event_func_3900()
{
    // event 1588_16
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_iron_worm_iron_worm_main_1)) goto event_1588_16_end;
        minibossironworm_675_instances.clear_selection();
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) >= (8))) { it.deselect(); continue; }
        }
        if (!minibossironworm_675_instances.has_selection()) goto event_1588_16_end;
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(24));
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-((Active*)*it)->alterables->values.get(23), 0);
            ((Active*)*it)->alterables->values.set(24, get_min(((Active*)*it)->alterables->values.get(24)+0.25, 12));
        }
    }
    event_1588_16_end: ;
}
void Frames::event_func_3901()
{
    // event 1590_16
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_iron_worm_iron_worm_main_1)) goto event_1590_16_end;
        minibossironworm_675_instances.clear_selection();
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (9))) { it.deselect(); continue; }
        }
        if (!minibossironworm_675_instances.has_selection()) goto event_1590_16_end;
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, 0);
            ((Active*)*it)->alterables->values.set(23, get_min(((Active*)*it)->alterables->values.get(23)+0.09, 0));
        }
    }
    event_1590_16_end: ;
}
void Frames::event_func_3902()
{
    // event 1591_16
    {
        if (!(group_main_engine_1)) goto event_1591_16_end;
        enemyrock_657_instances.clear_selection();
        for (ObjectIterator it(enemyrock_657_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1591_16_end: ;
}
void Frames::event_func_3903()
{
    // event 1595_16
    {
        if (!(group_main_engine_1)) goto event_1595_16_end;
        enemyrock_657_instances.clear_selection();
        for (ObjectIterator it(enemyrock_657_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!enemyrock_657_instances.has_selection()) goto event_1595_16_end;
        for (ObjectIterator it(enemyrock_657_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        media.play_id(SOUND_BLAST1_55, -1, 1);
    }
    event_1595_16_end: ;
}
void Frames::event_func_3904()
{
    // event 1596_16
    {
        if (!(group_main_engine_1)) goto event_1596_16_end;
        enemyrock_657_instances.clear_selection();
        for (ObjectIterator it(enemyrock_657_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(7))) { it.deselect(); continue; }
        }
        if (!enemyrock_657_instances.has_selection()) goto event_1596_16_end;
        for (ObjectIterator it(enemyrock_657_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1596_16_end: ;
}
void Frames::event_func_3905()
{
    // event 1597_16
    {
        if (!(group_main_engine_1)) goto event_1597_16_end;
        minibossacid_658_instances.clear_selection();
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossacid_658_instances.has_selection()) goto event_1597_16_end;
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+0.2, 12));
        }
    }
    event_1597_16_end: ;
}
void Frames::event_func_3906()
{
    // event 1600_16
    {
        if (!(group_main_engine_1)) goto event_1600_16_end;
        minibossacid_658_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(minibossacid_658_instances, playercharactersensor_383_instances)) goto event_1600_16_end;
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossacid_658_instances.has_selection()) goto event_1600_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1600_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1600_16_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 100);
        ((Active*)get_instance(playerskinsash_418_instances))->set_blend_color(make_color_int(128, 255, 128));
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(128, 255, 128));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(128, 255, 128));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(128, 255, 128));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(128, 255, 128));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(128, 255, 128));
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_blend_color(make_color_int(128, 255, 128));
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(128, 255, 128));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(128, 255, 128));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(128, 255, 128));
        }
    }
    event_1600_16_end: ;
}
void Frames::event_func_3907()
{
    // event 1601_16
    {
        if (!(group_main_engine_1)) goto event_1601_16_end;
        minibossacid_658_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(minibossacid_658_instances, playercharactersensor_383_instances)) goto event_1601_16_end;
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossacid_658_instances.has_selection()) goto event_1601_16_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 100);
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 2);
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_x()-((Active*)get_instance(playercharactersensor_383_instances))->get_x());
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_y()-((Active*)get_instance(playercharactersensor_383_instances))->get_y());
        }
        media.play_id(SOUND_BUBBLEHIT_69, -1, 1);
    }
    event_1601_16_end: ;
}
void Frames::event_func_3908()
{
    // event 1602_16
    {
        if (!(group_main_engine_1)) goto event_1602_16_end;
        minibossacid_658_instances.clear_selection();
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (2))) { it.deselect(); continue; }
        }
        if (!minibossacid_658_instances.has_selection()) goto event_1602_16_end;
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playercharactersensor_383_instances))->get_x()+((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)get_instance(playercharactersensor_383_instances))->get_y()+((Active*)*it)->alterables->values.get(5));
        }
    }
    event_1602_16_end: ;
}
void Frames::event_func_3909()
{
    // event 1603_16
    {
        if (!(group_main_engine_1)) goto event_1603_16_end;
        minibossacid_658_instances.clear_selection();
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(10))) { it.deselect(); continue; }
        }
        if (!minibossacid_658_instances.has_selection()) goto event_1603_16_end;
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1603_16_end: ;
}
void Frames::event_func_3910()
{
    // event 1677_16
    {
        if (!(group_main_engine_1)) goto event_1677_16_end;
        if (!((((Counter*)get_instance(guitimerm_364_instances))->value) >= (10))) goto event_1677_16_end;
        ((Counter*)get_instance(guitimerm2_365_instances))->set_visible(false);
        ((Active*)get_instance(guitimer_564_instances))->set_direction(0);
    }
    event_1677_16_end: ;
}
void Frames::event_func_3911()
{
    // event 1678_16
    {
        if (!(group_main_engine_1)) goto event_1678_16_end;
        if (!((((Counter*)get_instance(guitimerm_364_instances))->value) >= (100))) goto event_1678_16_end;
        ((Active*)get_instance(guitimer_564_instances))->set_direction(1);
    }
    event_1678_16_end: ;
}
void Frames::event_func_3912()
{
    // event 1694_16
    bool or_result_1694_16 = false;
    bool or_temp_result_1694_16_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1694_16_0_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto or_event_1694_16_0_end;
        or_result_1694_16 = true;
        or_temp_result_1694_16_0 = true;
    }
    or_event_1694_16_0_end: ;
    cameratriggerboss_424_instances.clear_saved_selection();
    if (or_temp_result_1694_16_0) {
        cameratriggerboss_424_instances.save_selection();
    }
    // event 1694_16
    bool or_temp_result_1694_16_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1694_16_1_end;
        cameralimitbossleft_421_instances.clear_selection();
        for (ObjectIterator it(cameralimitbossleft_421_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!cameralimitbossleft_421_instances.has_selection()) goto or_event_1694_16_1_end;
        or_result_1694_16 = true;
        or_temp_result_1694_16_1 = true;
    }
    or_event_1694_16_1_end: ;
    cameralimitbossleft_421_instances.clear_saved_selection();
    if (or_temp_result_1694_16_1) {
        cameralimitbossleft_421_instances.save_selection();
    }
    // event 1694_16
    bool or_temp_result_1694_16_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1694_16_2_end;
        cameralimitbossright_422_instances.clear_selection();
        for (ObjectIterator it(cameralimitbossright_422_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!cameralimitbossright_422_instances.has_selection()) goto or_event_1694_16_2_end;
        or_result_1694_16 = true;
        or_temp_result_1694_16_2 = true;
    }
    or_event_1694_16_2_end: ;
    cameralimitbossright_422_instances.clear_saved_selection();
    if (or_temp_result_1694_16_2) {
        cameralimitbossright_422_instances.save_selection();
    }
    // event 1694_16
    bool or_temp_result_1694_16_3 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1694_16_3_end;
        cameralimitbossbottom_420_instances.clear_selection();
        for (ObjectIterator it(cameralimitbossbottom_420_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!cameralimitbossbottom_420_instances.has_selection()) goto or_event_1694_16_3_end;
        or_result_1694_16 = true;
        or_temp_result_1694_16_3 = true;
    }
    or_event_1694_16_3_end: ;
    cameralimitbossbottom_420_instances.clear_saved_selection();
    if (or_temp_result_1694_16_3) {
        cameralimitbossbottom_420_instances.save_selection();
    }
    // event 1694_16
    bool or_temp_result_1694_16_4 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1694_16_4_end;
        cameralimitbosstop_423_instances.clear_selection();
        for (ObjectIterator it(cameralimitbosstop_423_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!cameralimitbosstop_423_instances.has_selection()) goto or_event_1694_16_4_end;
        or_result_1694_16 = true;
        or_temp_result_1694_16_4 = true;
        or_event_1694_16_4_end: ;
        cameralimitbosstop_423_instances.clear_saved_selection();
        if (or_temp_result_1694_16_4) {
            cameralimitbosstop_423_instances.save_selection();
        }
        if (!or_result_1694_16) goto or_final_or_event_1694_16_4_end;
        cameralimitbossleft_421_instances.empty_selection();
        cameralimitbossbottom_420_instances.empty_selection();
        cameralimitbossright_422_instances.empty_selection();
        cameratriggerboss_424_instances.empty_selection();
        cameralimitbosstop_423_instances.empty_selection();
        if (or_temp_result_1694_16_3) {
            cameralimitbossbottom_420_instances.restore_selection();
        }
        if (or_temp_result_1694_16_2) {
            cameralimitbossright_422_instances.restore_selection();
        }
        if (or_temp_result_1694_16_1) {
            cameralimitbossleft_421_instances.restore_selection();
        }
        if (or_temp_result_1694_16_0) {
            cameratriggerboss_424_instances.restore_selection();
        }
        if (or_temp_result_1694_16_4) {
            cameralimitbosstop_423_instances.restore_selection();
        }
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(cameralimitbossleft_421_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(cameralimitbossright_422_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(cameralimitbossbottom_420_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(cameralimitbosstop_423_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    or_final_or_event_1694_16_4_end: ;
}
void Frames::event_func_3913()
{
    // event 1695_16
    {
        if (!(group_main_engine_1)) goto event_1695_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(20)) == (0))) goto event_1695_16_end;
        if (!((global_values->get(4)) < (10))) goto event_1695_16_end;
        if (not_always_1695_16 > loop_count) {
            not_always_1695_16 = loop_count + 2;
            goto event_1695_16_end;
        }
        not_always_1695_16 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, ((Active*)get_instance(sign_351_instances))->get_x()+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, height);
    }
    event_1695_16_end: ;
}
void Frames::event_func_3914()
{
    // event 1696_16
    {
        if (!(group_main_engine_1)) goto event_1696_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(20)) == (0))) goto event_1696_16_end;
        if (!((global_values->get(4)) >= (10))) goto event_1696_16_end;
        if (not_always_1696_16 > loop_count) {
            not_always_1696_16 = loop_count + 2;
            goto event_1696_16_end;
        }
        not_always_1696_16 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, ((Active*)get_instance(sign_351_instances))->get_x()-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, width+50);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, height);
    }
    event_1696_16_end: ;
}
void Frames::event_func_3915()
{
    // event 1697_16
    {
        if (!(group_main_engine_1)) goto event_1697_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(20)) == (1))) goto event_1697_16_end;
        if (not_always_1697_16 > loop_count) {
            not_always_1697_16 = loop_count + 2;
            goto event_1697_16_end;
        }
        not_always_1697_16 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, get_min(frame_left(), ((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, get_min(frame_top(), ((Active*)get_instance(cameralimitbosstop_423_instances, default_active_instance))->get_y()));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, get_max(frame_right(), ((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, get_max(frame_bottom(), ((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()));
    }
    event_1697_16_end: ;
}
void Frames::event_func_3916()
{
    // event 1698_16
    {
        if (!(group_main_engine_1)) goto event_1698_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(20)) == (2))) goto event_1698_16_end;
        if (not_always_1698_16 > loop_count) {
            not_always_1698_16 = loop_count + 2;
            goto event_1698_16_end;
        }
        not_always_1698_16 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, ((Active*)get_instance(sign_351_instances))->get_x()-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, ((Active*)get_instance(sign_351_instances))->get_y()-160);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, ((Active*)get_instance(sign_351_instances))->get_x()+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, ((Active*)get_instance(sign_351_instances))->get_y()+80);
    }
    event_1698_16_end: ;
}
void Frames::event_func_3917()
{
    // event 1699_16
    {
        if (!(group_main_engine_1)) goto event_1699_16_end;
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_camera_mode_81+number_to_string(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(12)));
            if (dyn_it == (*loops).end()) goto dynamic_1699_16_0_end;
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
        dynamic_1699_16_0_end: ;
    }
    event_1699_16_end: ;
}
void Frames::event_func_3918()
{
    // event 1727_16
    {
        if (!(group_main_engine_1)) goto event_1727_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(20)) == (1))) goto event_1727_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(2)) < (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()))) goto event_1727_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(2)+2, ((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()));
    }
    event_1727_16_end: ;
}
void Frames::event_func_3919()
{
    // event 1728_16
    {
        if (!(group_main_engine_1)) goto event_1728_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(20)) == (1))) goto event_1728_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(4)) > (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()))) goto event_1728_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(4)-2, ((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()));
    }
    event_1728_16_end: ;
}
void Frames::event_func_3920()
{
    // event 1729_16
    {
        if (!(group_main_engine_1)) goto event_1729_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(20)) == (1))) goto event_1729_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(5)) < (((Active*)get_instance(cameralimitbosstop_423_instances, default_active_instance))->get_y()))) goto event_1729_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(3)+2, ((Active*)get_instance(cameralimitbosstop_423_instances, default_active_instance))->get_y()));
    }
    event_1729_16_end: ;
}
void Frames::event_func_3921()
{
    // event 1730_16
    {
        if (!(group_main_engine_1)) goto event_1730_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(20)) == (1))) goto event_1730_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(5)) > (((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()))) goto event_1730_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(5)-2, ((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()));
    }
    event_1730_16_end: ;
}
void Frames::event_func_3922()
{
    // event 1736_16
    {
        if (!(group_main_engine_1)) goto event_1736_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) < (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(2)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23)))) goto event_1736_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+2, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(2)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23)));
    }
    event_1736_16_end: ;
}
void Frames::event_func_3923()
{
    // event 1737_16
    {
        if (!(group_main_engine_1)) goto event_1737_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) > (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(4)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23)))) goto event_1737_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)-2, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(4)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23)));
    }
    event_1737_16_end: ;
}
void Frames::event_func_3924()
{
    // event 1738_16
    {
        if (!(group_main_engine_1)) goto event_1738_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)) < (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(3)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(24)))) goto event_1738_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)+2, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(3)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(24)));
    }
    event_1738_16_end: ;
}
void Frames::event_func_3925()
{
    // event 1739_16
    {
        if (!(group_main_engine_1)) goto event_1739_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)) > (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(5)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(24)))) goto event_1739_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)-2, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(5)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(24)));
    }
    event_1739_16_end: ;
}
void Frames::event_func_3926()
{
    // event 1740_16
    {
        if (!(group_main_engine_1)) goto event_1740_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(12)) > (0))) goto event_1740_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)) > (0))) goto event_1740_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(6, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)-4, 0));
    }
    event_1740_16_end: ;
}
