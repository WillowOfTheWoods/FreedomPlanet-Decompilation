#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_7006()
{
    // event 1601_30
    {
        if (!(group_main_engine_1)) goto event_1601_30_end;
        enemyflarecannon_1820_instances.clear_selection();
        for (ObjectIterator it(enemyflarecannon_1820_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) != (64))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemyflarecannon_1820_instances.has_selection()) goto event_1601_30_end;
        for (ObjectIterator it(enemyflarecannon_1820_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1601_30_end: ;
}
void Frames::event_func_7007()
{
    // event 1602_30
    {
        if (!(group_main_engine_1)) goto event_1602_30_end;
        enemyflarecannon_1820_instances.clear_selection();
        for (ObjectIterator it(enemyflarecannon_1820_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!enemyflarecannon_1820_instances.has_selection()) goto event_1602_30_end;
        for (ObjectIterator it(enemyflarecannon_1820_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        FrameObject * single_instance_1602_30_0; single_instance_1602_30_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyflarecannon_1820_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1602_30_0 == NULL)
                    single_instance_1602_30_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1602_30_0))->set_direction(3);
        ((Active*)((Active*)single_instance_1602_30_0))->alterables->values.set(1, -3);
        FrameObject * single_instance_1602_30_1; single_instance_1602_30_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyflarecannon_1820_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + -8), parent->layer);
                if (single_instance_1602_30_1 == NULL)
                    single_instance_1602_30_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(enemyflarecannon_1820_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_30();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1602_30_end: ;
}
void Frames::event_func_7008()
{
    // event 1604_30
    {
        if (!(group_main_engine_1)) goto event_1604_30_end;
        enemyflarecannon_1820_instances.clear_selection();
        for (ObjectIterator it(enemyflarecannon_1820_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyflarecannon_1820_instances.has_selection()) goto event_1604_30_end;
        for (ObjectIterator it(enemyflarecannon_1820_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1604_30_end: ;
}
void Frames::event_func_7009()
{
    // event 1605_30
    {
        if (!(group_main_engine_1)) goto event_1605_30_end;
        enemyflare_1787_instances.clear_selection();
        for (ObjectIterator it(enemyflare_1787_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) < (2))) { it.deselect(); continue; }
        }
        if (!enemyflare_1787_instances.has_selection()) goto event_1605_30_end;
        for (ObjectIterator it(enemyflare_1787_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1605_30_end: ;
}
void Frames::event_func_7010()
{
    // event 1606_30
    {
        if (!(group_main_engine_1)) goto event_1606_30_end;
        enemyflare_1787_instances.clear_selection();
        for (ObjectIterator it(enemyflare_1787_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyflare_1787_instances.has_selection()) goto event_1606_30_end;
        for (ObjectIterator it(enemyflare_1787_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+0.5, 15));
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1606_30_end: ;
}
void Frames::event_func_7011()
{
    // event 1607_30
    {
        if (!(group_main_engine_1)) goto event_1607_30_end;
        enemyflare_1787_instances.clear_selection();
        for (ObjectIterator it(enemyflare_1787_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (24))) { it.deselect(); continue; }
        }
        if (!enemyflare_1787_instances.has_selection()) goto event_1607_30_end;
        for (ObjectIterator it(enemyflare_1787_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 2);
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->alterables->values.set(4, 0);
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(25, 4);
        FrameObject * single_instance_1607_30_0; single_instance_1607_30_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyflare_1787_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1607_30_0 == NULL)
                    single_instance_1607_30_0 = new_obj;
            }
        }
    }
    event_1607_30_end: ;
}
void Frames::event_func_7012()
{
    // event 1612_30
    {
        if (!(group_main_engine_1)) goto event_1612_30_end;
        enemyflare_1787_instances.clear_selection();
        for (ObjectIterator it(enemyflare_1787_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
        }
        if (!enemyflare_1787_instances.has_selection()) goto event_1612_30_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1612_30_end;
        FrameObject * single_instance_1612_30_0; single_instance_1612_30_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyflare_1787_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectflareburst_1788(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1612_30_0 == NULL)
                    single_instance_1612_30_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1612_30_0))->set_x(((Active*)single_instance_1612_30_0)->get_x()-30+randrange(61));
        ((Active*)((Active*)single_instance_1612_30_0))->set_y(((Active*)single_instance_1612_30_0)->get_y()-30+randrange(61));
        for (ObjectIterator it(enemyflare_1787_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
        media.play_id(SOUND_COMMON_FIRECRACKER_432, -1, 1);
    }
    event_1612_30_end: ;
}
void Frames::event_func_7013()
{
    // event 1613_30
    {
        if (!(group_main_engine_1)) goto event_1613_30_end;
        enemyflare_1787_instances.clear_selection();
        for (ObjectIterator it(enemyflare_1787_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (8))) { it.deselect(); continue; }
        }
        if (!enemyflare_1787_instances.has_selection()) goto event_1613_30_end;
        for (ObjectIterator it(enemyflare_1787_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1613_30_end: ;
}
void Frames::event_func_7014()
{
    // event 1614_30
    {
        if (!(group_main_engine_1)) goto event_1614_30_end;
        enemyflare_1787_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(enemyflare_1787_instances, playercharactersensor_383_instances)) goto event_1614_30_end;
        for (ObjectIterator it(enemyflare_1787_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
        }
        if (!enemyflare_1787_instances.has_selection()) goto event_1614_30_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1614_30_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1614_30_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1614_30_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
    }
    event_1614_30_end: ;
}
void Frames::event_func_7015()
{
    // event 1616_30
    {
        if (!(group_main_engine_1)) goto event_1616_30_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto event_1616_30_end;
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(-128);
            ((Active*)*it)->alterables->values.set(2, 5);
        }
    }
    event_1616_30_end: ;
}
void Frames::event_func_7016()
{
    // event 1617_30
    {
        if (!(group_main_engine_1)) goto event_1617_30_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (frame_left()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (frame_left()-120))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (((Active*)get_instance(player_389_instances))->get_y()-150))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (((Active*)get_instance(player_389_instances))->get_y()+150))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto event_1617_30_end;
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(7));
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(5, get_max(8, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+2));
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_visible(true);
        }
        media.play_id(SOUND_BIKE_DRIVEBY_127, -1, 1);
    }
    event_1617_30_end: ;
}
void Frames::event_func_7017()
{
    // event 1618_30
    {
        if (!(group_main_engine_1)) goto event_1618_30_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (frame_right()+40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (frame_right()+120))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (((Active*)get_instance(player_389_instances))->get_y()-150))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (((Active*)get_instance(player_389_instances))->get_y()+150))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto event_1618_30_end;
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(7));
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(5, get_min(-8, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-2));
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_visible(true);
        }
        media.play_id(SOUND_BIKE_DRIVEBY_127, -1, 1);
    }
    event_1618_30_end: ;
}
void Frames::event_func_7018()
{
    // event 1619_30
    {
        if (!(group_main_engine_1)) goto event_1619_30_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (1))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto event_1619_30_end;
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(6));
            ((Active*)*it)->alterables->values.add(6, ((Active*)*it)->alterables->values.get(5));
        }
    }
    event_1619_30_end: ;
}
void Frames::event_func_7019()
{
    // event 1620_30
    {
        if (!(group_main_engine_1)) goto event_1620_30_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (((Active*)get_instance(player_389_instances))->get_x()+50))) { it.deselect(); continue; }
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto event_1620_30_end;
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->alterables->values.set(5, get_min(((Active*)*it)->alterables->values.get(5), get_max(6, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))));
        }
    }
    event_1620_30_end: ;
}
void Frames::event_func_7020()
{
    // event 1621_30
    {
        if (!(group_main_engine_1)) goto event_1621_30_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (((Active*)get_instance(player_389_instances))->get_x()-50))) { it.deselect(); continue; }
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto event_1621_30_end;
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->alterables->values.set(5, get_max(((Active*)*it)->alterables->values.get(5), get_min(-6, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))));
        }
    }
    event_1621_30_end: ;
}
void Frames::event_func_7021()
{
    // event 1622_30
    {
        if (!(group_main_engine_1)) goto event_1622_30_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto event_1622_30_end;
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, get_max(((Active*)*it)->alterables->values.get(5)-0.2, 2));
        }
    }
    event_1622_30_end: ;
}
void Frames::event_func_7022()
{
    // event 1623_30
    {
        if (!(group_main_engine_1)) goto event_1623_30_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto event_1623_30_end;
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, get_min(((Active*)*it)->alterables->values.get(5)+0.2, -2));
        }
    }
    event_1623_30_end: ;
}
void Frames::event_func_7023()
{
    // event 1624_30
    bool or_result_1624_30 = false;
    bool or_temp_result_1624_30_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1624_30_0_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (2))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto or_event_1624_30_0_end;
        or_result_1624_30 = true;
        or_temp_result_1624_30_0 = true;
    }
    or_event_1624_30_0_end: ;
    enemysuperturretus_1828_instances.clear_saved_selection();
    if (or_temp_result_1624_30_0) {
        enemysuperturretus_1828_instances.save_selection();
    }
    // event 1624_30
    bool or_temp_result_1624_30_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1624_30_1_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (-2))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto or_event_1624_30_1_end;
        or_result_1624_30 = true;
        or_temp_result_1624_30_1 = true;
        or_event_1624_30_1_end: ;
        if (or_temp_result_1624_30_1) {
            enemysuperturretus_1828_instances.save_selection();
        }
        if (!or_result_1624_30) goto or_final_or_event_1624_30_1_end;
        enemysuperturretus_1828_instances.empty_selection();
        if (or_temp_result_1624_30_0 || or_temp_result_1624_30_1) {
            enemysuperturretus_1828_instances.restore_selection();
        }
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->values.set(3, 3);
        }
    }
    or_final_or_event_1624_30_1_end: ;
}
void Frames::event_func_7024()
{
    // event 1625_30
    {
        if (!(group_main_engine_1)) goto event_1625_30_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) <= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto event_1625_30_end;
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1625_30_end: ;
}
void Frames::event_func_7025()
{
    // event 1626_30
    {
        if (!(group_main_engine_1)) goto event_1626_30_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) <= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto event_1626_30_end;
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1626_30_end: ;
}
void Frames::event_func_7026()
{
    // event 1627_30
    {
        if (!(group_main_engine_1)) goto event_1627_30_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (7))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto event_1627_30_end;
        media.play_id(SOUND_COMMON_BLASTER1_28, -1, 1);
        FrameObject * single_instance_1627_30_0; single_instance_1627_30_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysuperturretus_1828_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemypellet_863(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1627_30_0 == NULL)
                    single_instance_1627_30_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1627_30_0))->set_direction(((Active*)get_single(enemysuperturretus_1828_instances, default_active_instance))->get_direction()+16);
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1627_30_end: ;
}
void Frames::event_func_7027()
{
    // event 1628_30
    {
        if (!(group_main_engine_1)) goto event_1628_30_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) != (7))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto event_1628_30_end;
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1628_30_end: ;
}
void Frames::event_func_7028()
{
    // event 1629_30
    {
        if (!(group_main_engine_1)) goto event_1629_30_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto event_1629_30_end;
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_1629_30_end: ;
}
void Frames::event_func_7029()
{
    // event 1630_30
    {
        if (!(group_main_engine_1)) goto event_1630_30_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto event_1630_30_end;
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_1630_30_end: ;
}
void Frames::event_func_7030()
{
    // event 1631_30
    {
        if (!(group_main_engine_1)) goto event_1631_30_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto event_1631_30_end;
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, get_max(((Active*)*it)->alterables->values.get(5)-0.2, -12));
        }
    }
    event_1631_30_end: ;
}
void Frames::event_func_7031()
{
    // event 1632_30
    {
        if (!(group_main_engine_1)) goto event_1632_30_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto event_1632_30_end;
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, get_min(((Active*)*it)->alterables->values.get(5)+0.2, 12));
        }
    }
    event_1632_30_end: ;
}
void Frames::event_func_7032()
{
    // event 1633_30
    {
        if (!(group_main_engine_1)) goto event_1633_30_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (frame_left()-400))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto event_1633_30_end;
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    event_1633_30_end: ;
}
void Frames::event_func_7033()
{
    // event 1634_30
    {
        if (!(group_main_engine_1)) goto event_1634_30_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (frame_right()+400))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto event_1634_30_end;
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    event_1634_30_end: ;
}
void Frames::event_func_7034()
{
    // event 1635_30
    {
        if (!(group_main_engine_1)) goto event_1635_30_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto event_1635_30_end;
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->alterables->values.set(3, 6);
        }
    }
    event_1635_30_end: ;
}
void Frames::event_func_7035()
{
    // event 1636_30
    bool or_result_1636_30 = false;
    bool or_temp_result_1636_30_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1636_30_0_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto or_event_1636_30_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemysuperturretus_1828_instances, qualifier_7)) goto or_event_1636_30_0_end;
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto or_event_1636_30_0_end;
        or_result_1636_30 = true;
        or_temp_result_1636_30_0 = true;
    }
    or_event_1636_30_0_end: ;
    enemysuperturretus_1828_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1636_30_0) {
        enemysuperturretus_1828_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1636_30
    bool or_temp_result_1636_30_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1636_30_1_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto or_event_1636_30_1_end;
        or_result_1636_30 = true;
        or_temp_result_1636_30_1 = true;
        or_event_1636_30_1_end: ;
        if (or_temp_result_1636_30_1) {
            enemysuperturretus_1828_instances.save_selection();
        }
        if (!or_result_1636_30) goto or_final_or_event_1636_30_1_end;
        enemysuperturretus_1828_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1636_30_0 || or_temp_result_1636_30_1) {
            enemysuperturretus_1828_instances.restore_selection();
        }
        if (or_temp_result_1636_30_0) {
            qualifier_7.restore_selection();
        }
        FrameObject * single_instance_1636_30_0; single_instance_1636_30_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysuperturretus_1828_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1636_30_0 == NULL)
                    single_instance_1636_30_0 = new_obj;
            }
        }
        FrameObject * single_instance_1636_30_1; single_instance_1636_30_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysuperturretus_1828_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1636_30_1 == NULL)
                    single_instance_1636_30_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        ((Active*)((Active*)single_instance_1636_30_0))->set_direction(4);
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_30();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    or_final_or_event_1636_30_1_end: ;
}
void Frames::event_func_7036()
{
    // event 1638_30
    {
        if (!(group_main_engine_1)) goto event_1638_30_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto event_1638_30_end;
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1638_30_end: ;
}
void Frames::event_func_7037()
{
    // event 1674_30
    {
        if (!(group_main_engine_1)) goto event_1674_30_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (8060))) goto event_1674_30_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_floating_lanterns_1) goto event_1674_30_end;
        if (!group_main_engine_level_specific_methods_floating_lanterns_1) {
            group_main_engine_level_specific_methods_floating_lanterns_1 = true;
        }
    }
    event_1674_30_end: ;
}
void Frames::event_func_7038()
{
    // event 1675_30
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_floating_lanterns_1)) goto event_1675_30_end;
        if (once_condition_1675_30) goto event_1675_30_end;
        once_condition_1675_30 = true;
        floatinglantern_1829_instances.clear_selection();
        spread_value(floatinglantern_1829_instances, 1, 0);
        static FlatObjectList swap_1675_30;
        swap_1675_30.clear();
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            swap_1675_30.push_back(((Active*)*it));
        }
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0.5+(((Active*)*it)->alterables->values.get(1)%math_helper%10)*0.05);
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->get_x()*(((Active*)*it)->alterables->values.get(0))+2000);
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_y());
            ((Active*)*it)->set_layer(get_max(3, get_min((((Active*)*it)->alterables->values.get(0)-0.05)*6.25, 5))-1);
        }
        swap_position(swap_1675_30);
    }
    event_1675_30_end: ;
}
void Frames::event_func_7039()
{
    // event 1676_30
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_floating_lanterns_1)) goto event_1676_30_end;
        if (!((((Active*)get_instance(floatinglantern_1829_instances, default_active_instance))->layer->index+1) == (4))) goto event_1676_30_end;
        floatinglantern_1829_instances.clear_selection();
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(3-1);
        }
    }
    event_1676_30_end: ;
}
void Frames::event_func_7040()
{
    // event 1677_30
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_floating_lanterns_1)) goto event_1677_30_end;
        floatinglantern_1829_instances.clear_selection();
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0.5))) { it.deselect(); continue; }
        }
        if (!floatinglantern_1829_instances.has_selection()) goto event_1677_30_end;
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1677_30_end: ;
}
void Frames::event_func_7041()
{
    // event 1678_30
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_floating_lanterns_1)) goto event_1678_30_end;
        floatinglantern_1829_instances.clear_selection();
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0.55))) { it.deselect(); continue; }
        }
        if (!floatinglantern_1829_instances.has_selection()) goto event_1678_30_end;
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1678_30_end: ;
}
void Frames::event_func_7042()
{
    // event 1679_30
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_floating_lanterns_1)) goto event_1679_30_end;
        floatinglantern_1829_instances.clear_selection();
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0.6))) { it.deselect(); continue; }
        }
        if (!floatinglantern_1829_instances.has_selection()) goto event_1679_30_end;
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1679_30_end: ;
}
void Frames::event_func_7043()
{
    // event 1680_30
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_floating_lanterns_1)) goto event_1680_30_end;
        floatinglantern_1829_instances.clear_selection();
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0.65))) { it.deselect(); continue; }
        }
        if (!floatinglantern_1829_instances.has_selection()) goto event_1680_30_end;
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1680_30_end: ;
}
void Frames::event_func_7044()
{
    // event 1681_30
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_floating_lanterns_1)) goto event_1681_30_end;
        floatinglantern_1829_instances.clear_selection();
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0.7))) { it.deselect(); continue; }
        }
        if (!floatinglantern_1829_instances.has_selection()) goto event_1681_30_end;
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1681_30_end: ;
}
void Frames::event_func_7045()
{
    // event 1682_30
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_floating_lanterns_1)) goto event_1682_30_end;
        floatinglantern_1829_instances.clear_selection();
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0.75))) { it.deselect(); continue; }
        }
        if (!floatinglantern_1829_instances.has_selection()) goto event_1682_30_end;
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1682_30_end: ;
}
void Frames::event_func_7046()
{
    // event 1683_30
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_floating_lanterns_1)) goto event_1683_30_end;
        floatinglantern_1829_instances.clear_selection();
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0.8))) { it.deselect(); continue; }
        }
        if (!floatinglantern_1829_instances.has_selection()) goto event_1683_30_end;
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1683_30_end: ;
}
void Frames::event_func_7047()
{
    // event 1684_30
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_floating_lanterns_1)) goto event_1684_30_end;
        floatinglantern_1829_instances.clear_selection();
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0.85))) { it.deselect(); continue; }
        }
        if (!floatinglantern_1829_instances.has_selection()) goto event_1684_30_end;
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1684_30_end: ;
}
void Frames::event_func_7048()
{
    // event 1685_30
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_floating_lanterns_1)) goto event_1685_30_end;
        floatinglantern_1829_instances.clear_selection();
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0.9))) { it.deselect(); continue; }
        }
        if (!floatinglantern_1829_instances.has_selection()) goto event_1685_30_end;
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1685_30_end: ;
}
void Frames::event_func_7049()
{
    // event 1686_30
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_floating_lanterns_1)) goto event_1686_30_end;
        floatinglantern_1829_instances.clear_selection();
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0.95))) { it.deselect(); continue; }
        }
        if (!floatinglantern_1829_instances.has_selection()) goto event_1686_30_end;
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1686_30_end: ;
}
void Frames::event_func_7050()
{
    // event 1687_30
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_floating_lanterns_1)) goto event_1687_30_end;
        floatinglantern_1829_instances.clear_selection();
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!floatinglantern_1829_instances.has_selection()) goto event_1687_30_end;
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1687_30_end: ;
}
void Frames::event_func_7051()
{
    // event 1688_30
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_floating_lanterns_1)) goto event_1688_30_end;
        floatinglantern_1829_instances.clear_selection();
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(2)+frame_left()*(0.8-((Active*)*it)->alterables->values.get(0)));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(3)+frame_top()*(0.8-((Active*)*it)->alterables->values.get(0)));
            ((Active*)*it)->alterables->values.sub(3, ((Active*)*it)->alterables->values.get(0)*2);
        }
    }
    event_1688_30_end: ;
}
void Frames::event_func_7052()
{
    // event 1689_30
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_floating_lanterns_1)) goto event_1689_30_end;
        floatinglantern_1829_instances.clear_selection();
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (frame_top()-60))) { it.deselect(); continue; }
        }
        if (!floatinglantern_1829_instances.has_selection()) goto event_1689_30_end;
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 350);
        }
    }
    event_1689_30_end: ;
}
void Frames::event_func_7053()
{
    // event 1690_30
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_floating_lanterns_1)) goto event_1690_30_end;
        floatinglantern_1829_instances.clear_selection();
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (frame_bottom()+50))) { it.deselect(); continue; }
        }
        if (!floatinglantern_1829_instances.has_selection()) goto event_1690_30_end;
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 350);
        }
    }
    event_1690_30_end: ;
}
void Frames::event_func_7054()
{
    // event 1691_30
    {
        if (!(group_main_engine_1)) goto event_1691_30_end;
        if (!((global_values->get(4)) < (2))) goto event_1691_30_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (6520))) goto event_1691_30_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (width-100))) goto event_1691_30_end;
        global_values->set(4, 2);
        global_values->set(5, 6520);
        global_values->set(6, 490);
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
    event_1691_30_end: ;
}
void Frames::event_func_7055()
{
    // event 1716_30
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1)) goto event_1716_30_end;
        minibossbulldozer_1719_instances.clear_selection();
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossbulldozer_1719_instances.has_selection()) goto event_1716_30_end;
        for (ObjectIterator it(minibossbulldozer_1719_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(25, 5);
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
    }
    event_1716_30_end: ;
}
void Frames::event_func_7056()
{
    // event 1963_30
    {
        if (!(group_pause_1)) goto event_1963_30_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_1963_30_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_1963_30_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1963_30_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1963_30_end;
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
        pigeon_1724_instances.clear_selection();
        for (ObjectIterator it(pigeon_1724_instances); !it.end(); ++it) {
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
        fireworkparticle_1622_instances.clear_selection();
        for (ObjectIterator it(fireworkparticle_1622_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->advance_movement(+1);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemytrafficle_1717_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle_1717_instances); !it.end(); ++it) {
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
        ((Active*)get_instance(objectjumppad_530_instances))->stop_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
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
        bgstar_4_instances.clear_selection();
        for (ObjectIterator it(bgstar_4_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(largesign2_1636_instances))->stop_animation();
        floatinglantern_1829_instances.clear_selection();
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        gimmickboostblockflame_1750_instances.clear_selection();
        for (ObjectIterator it(gimmickboostblockflame_1750_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemylaser_1626_instances.clear_selection();
        for (ObjectIterator it(enemylaser_1626_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectflareburst_1788_instances.clear_selection();
        for (ObjectIterator it(effectflareburst_1788_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        signyield_1738_instances.clear_selection();
        for (ObjectIterator it(signyield_1738_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        signstop_1716_instances.clear_selection();
        for (ObjectIterator it(signstop_1716_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyflare_1787_instances.clear_selection();
        for (ObjectIterator it(enemyflare_1787_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_1963_30_end: ;
}
void Frames::event_func_7057()
{
    // event 1964_30
    bool or_result_1964_30 = false;
    bool or_temp_result_1964_30_0 = false;
    {
        if (!(group_pause_1)) goto or_event_1964_30_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_1964_30_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1964_30_0_end;
        or_result_1964_30 = true;
        or_temp_result_1964_30_0 = true;
    }
    or_event_1964_30_0_end: ;
    // event 1964_30
    bool or_temp_result_1964_30_1 = false;
    {
        if (!(group_pause_1)) goto or_event_1964_30_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_1964_30_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1964_30_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_1964_30_1_end;
        or_result_1964_30 = true;
        or_temp_result_1964_30_1 = true;
        or_event_1964_30_1_end: ;
        if (!or_result_1964_30) goto or_final_or_event_1964_30_1_end;
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
        pigeon_1724_instances.clear_selection();
        for (ObjectIterator it(pigeon_1724_instances); !it.end(); ++it) {
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
        fireworkparticle_1622_instances.clear_selection();
        for (ObjectIterator it(fireworkparticle_1622_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->advance_movement(-1);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemytrafficle_1717_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle_1717_instances); !it.end(); ++it) {
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
        ((Active*)get_instance(objectjumppad_530_instances))->start_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
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
        bgstar_4_instances.clear_selection();
        for (ObjectIterator it(bgstar_4_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(largesign2_1636_instances))->start_animation();
        floatinglantern_1829_instances.clear_selection();
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        gimmickboostblockflame_1750_instances.clear_selection();
        for (ObjectIterator it(gimmickboostblockflame_1750_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemylaser_1626_instances.clear_selection();
        for (ObjectIterator it(enemylaser_1626_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectflareburst_1788_instances.clear_selection();
        for (ObjectIterator it(effectflareburst_1788_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        signyield_1738_instances.clear_selection();
        for (ObjectIterator it(signyield_1738_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        signstop_1716_instances.clear_selection();
        for (ObjectIterator it(signstop_1716_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyflare_1787_instances.clear_selection();
        for (ObjectIterator it(enemyflare_1787_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_1964_30_1_end: ;
}
void Frames::handle_frame_31_events()
{
    test_collisions_30();
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
    event_func_6749();
    event_func_6752();
    event_func_6835();
    event_func_6913();
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
    event_func_5410();
    event_func_5411();
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
    event_func_6649();
    event_func_6650();
    event_func_6651();
    event_func_2774();
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
    event_func_6958();
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
    event_func_6959();
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
    event_func_6960();
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
    event_func_2960();
    event_func_2961();
    event_func_2962();
    event_func_2963();
    event_func_2964();
    event_func_2965();
    event_func_2966();
    event_func_2967();
    event_func_2968();
    event_func_6961();
    event_func_6962();
    event_func_6963();
    event_func_6964();
    event_func_6965();
    event_func_6966();
    event_func_6967();
    event_func_6968();
    event_func_6969();
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
    event_func_6666();
    event_func_6674();
    event_func_6675();
    event_func_6676();
    event_func_6677();
    event_func_6678();
    event_func_6679();
    event_func_6680();
    event_func_6681();
    event_func_6682();
    event_func_6683();
    event_func_6684();
    event_func_6685();
    event_func_6686();
    event_func_6687();
    event_func_6688();
    event_func_6689();
    event_func_6690();
    event_func_6691();
    event_func_6692();
    event_func_6970();
    event_func_6971();
    event_func_6972();
    event_func_6973();
    event_func_6974();
    event_func_6975();
    event_func_6976();
    event_func_6977();
    event_func_6701();
    event_func_6709();
    event_func_6710();
    event_func_6711();
    event_func_6712();
    event_func_6713();
    event_func_6714();
    event_func_6715();
    event_func_6716();
    event_func_6717();
    event_func_6718();
    event_func_6719();
    event_func_6720();
    event_func_6721();
    event_func_6722();
    event_func_6723();
    event_func_6724();
    event_func_6725();
    event_func_6726();
    event_func_6727();
    event_func_6728();
    event_func_6729();
    event_func_6730();
    event_func_6731();
    event_func_6732();
    event_func_6733();
    event_func_6734();
    event_func_6735();
    event_func_6736();
    event_func_6737();
    event_func_6738();
    event_func_6978();
    event_func_6979();
    event_func_6980();
    event_func_6981();
    event_func_6982();
    event_func_6983();
    event_func_6984();
    event_func_6985();
    event_func_6986();
    event_func_6987();
    event_func_6988();
    event_func_6989();
    event_func_6990();
    event_func_6991();
    event_func_6992();
    event_func_6993();
    event_func_6994();
    event_func_6995();
    event_func_6996();
    event_func_6997();
    event_func_6739();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_6740();
    event_func_6741();
    event_func_6742();
    event_func_6743();
    event_func_6744();
    event_func_6745();
    event_func_6746();
    event_func_6747();
    event_func_6748();
    event_func_6750();
    event_func_6751();
    event_func_6753();
    event_func_6754();
    event_func_6755();
    event_func_6756();
    event_func_6757();
    event_func_6758();
    event_func_6759();
    event_func_6760();
    event_func_6761();
    event_func_6762();
    event_func_6763();
    event_func_6764();
    event_func_6765();
    event_func_6766();
    event_func_6767();
    event_func_6998();
    event_func_6769();
    event_func_6770();
    event_func_6771();
    event_func_6772();
    event_func_6773();
    event_func_6774();
    event_func_6775();
    event_func_6776();
    event_func_6777();
    event_func_6778();
    event_func_6779();
    event_func_6780();
    event_func_6781();
    event_func_6782();
    event_func_6783();
    event_func_6784();
    event_func_6785();
    event_func_6786();
    event_func_6787();
    event_func_6788();
    event_func_6789();
    event_func_6790();
    event_func_6791();
    event_func_6792();
    event_func_6793();
    event_func_6794();
    event_func_6795();
    event_func_6796();
    event_func_6797();
    event_func_6798();
    event_func_6799();
    event_func_6800();
    event_func_6801();
    event_func_6802();
    event_func_6803();
    event_func_6804();
    event_func_6805();
    event_func_6806();
    event_func_6807();
    event_func_6808();
    event_func_6809();
    event_func_6810();
    event_func_6811();
    event_func_6812();
    event_func_6999();
    event_func_7000();
    event_func_7001();
    event_func_7002();
    event_func_7003();
    event_func_7004();
    event_func_7005();
    event_func_7006();
    event_func_7007();
    event_func_7008();
    event_func_7009();
    event_func_7010();
    event_func_7011();
    event_func_7012();
    event_func_7013();
    event_func_7014();
    event_func_7015();
    event_func_7016();
    event_func_7017();
    event_func_7018();
    event_func_7019();
    event_func_7020();
    event_func_7021();
    event_func_7022();
    event_func_7023();
    event_func_7024();
    event_func_7025();
    event_func_7026();
    event_func_7027();
    event_func_7028();
    event_func_7029();
    event_func_7030();
    event_func_7031();
    event_func_7032();
    event_func_7033();
    event_func_7034();
    event_func_7035();
    event_func_7036();
    event_func_4636();
    event_func_2996();
    event_func_2997();
    event_func_2998();
    event_func_3286();
    event_func_3867();
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) goto group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end;
    event_func_4173();
    event_func_4638();
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end: ;
    event_func_6819();
    event_func_6820();
    event_func_6821();
    event_func_6822();
    event_func_6823();
    event_func_6824();
    event_func_6825();
    event_func_6826();
    event_func_6827();
    event_func_6828();
    event_func_6829();
    event_func_6830();
    event_func_6831();
    event_func_6832();
    event_func_6833();
    event_func_6834();
    event_func_7037();
    if (!group_main_engine_level_specific_methods_floating_lanterns_1) goto group_main_engine_level_specific_methods_floating_lanterns_1_end;
    event_func_7038();
    event_func_7039();
    event_func_7040();
    event_func_7041();
    event_func_7042();
    event_func_7043();
    event_func_7044();
    event_func_7045();
    event_func_7046();
    event_func_7047();
    event_func_7048();
    event_func_7049();
    event_func_7050();
    event_func_7051();
    event_func_7052();
    event_func_7053();
    group_main_engine_level_specific_methods_floating_lanterns_1_end: ;
    event_func_7054();
    event_func_6874();
    if (!group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1) goto group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1_end;
    event_func_6875();
    event_func_6876();
    event_func_6877();
    event_func_6878();
    event_func_6879();
    event_func_6880();
    event_func_6881();
    event_func_6882();
    event_func_6883();
    event_func_6884();
    event_func_6885();
    event_func_6886();
    event_func_6887();
    event_func_6888();
    event_func_6889();
    event_func_6890();
    event_func_6891();
    event_func_6892();
    event_func_6893();
    event_func_6894();
    event_func_6895();
    event_func_6896();
    event_func_7055();
    event_func_6898();
    event_func_6899();
    event_func_6900();
    event_func_6901();
    event_func_6902();
    event_func_6903();
    event_func_6904();
    event_func_6905();
    event_func_6906();
    event_func_6907();
    event_func_6908();
    event_func_6909();
    event_func_6910();
    event_func_6911();
    event_func_6912();
    event_func_6914();
    event_func_6915();
    event_func_6916();
    event_func_6917();
    event_func_6918();
    event_func_6919();
    event_func_6920();
    event_func_6921();
    event_func_6922();
    event_func_6923();
    event_func_6924();
    event_func_6925();
    event_func_6926();
    event_func_6927();
    event_func_6928();
    event_func_6929();
    event_func_6930();
    event_func_6931();
    event_func_6932();
    event_func_6933();
    event_func_6934();
    group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1_end: ;
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
    event_func_6935();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_7056();
    event_func_7057();
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
void Frames::handle_frame_31_pre_events()
{
}
void Frames::event_func_7058()
{
    // event 2_30
    {
        if (!(group_main_engine_1)) goto event_2_30_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 2000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 33);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 13);
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        ((SystemBox*)get_instance(leveltrollycar_1791_instances))->set_visible(false);
        ((SystemBox*)get_instance(leveltrollycar_1791_instances))->alterables->values.set(0, ((SystemBox*)get_instance(leveltrollycar_1791_instances))->get_x());
    }
    event_2_30_end: ;
}
void Frames::event_func_7059()
{
    // event 1443_30
    {
        if (!(group_main_engine_1)) goto event_1443_30_end;
        ((Active*)get_instance(gimmickrollingarchbase_1725_instances))->alterables->flags.enable(0);
    }
    event_1443_30_end: ;
}
void Frames::event_func_7060()
{
    // event 1488_30
    {
        if (!(group_main_engine_1)) goto event_1488_30_end;
        ((Active*)get_instance(leveltrollycarlight_1792_instances))->set_x_scale(6);
        ((Active*)get_instance(leveltrollycarlight2_1793_instances))->set_x_scale(6);
        ((SystemBox*)get_instance(leveltrollycar_1791_instances))->alterables->values.set(3, 6420);
        media.lock(28-1);
    }
    event_1488_30_end: ;
}
void Frames::event_func_7061()
{
    // event 1593_30
    {
        if (!(group_main_engine_1)) goto event_1593_30_end;
        enemyflarecannon_1820_instances.clear_selection();
        for (ObjectIterator it(enemyflarecannon_1820_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
        }
    }
    event_1593_30_end: ;
}
void Frames::event_func_7062()
{
    // event 1615_30
    {
        if (!(group_main_engine_1)) goto event_1615_30_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->get_y());
        }
    }
    event_1615_30_end: ;
}
void Frames::event_func_7063()
{
    // event 1910_30
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1910_30_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(2);
        }
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(2);
        }
    }
    event_1910_30_end: ;
}
void Frames::on_frame_31_start_events()
{
    event_func_4133();
    event_func_7058();
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
    event_func_6939();
    event_func_6940();
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
    event_func_6941();
    event_func_7059();
    event_func_6944();
    event_func_7060();
    event_func_6945();
    event_func_7061();
    event_func_7062();
    event_func_2686();
    event_func_2687();
    event_func_6947();
    event_func_2689();
    event_func_2690();
    event_func_2691();
    event_func_7063();
    event_func_4145();
    event_func_4146();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_31_init()
{
    index = 30;
    width = 11624;
    height = 1864;
    virtual_width = 11624;
    virtual_height = 1864;
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
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &goldplatform1_1735_instances, &goldplatform2_1736_instances, &goldplatform3_1737_instances, &levelferriswheel1_1765_instances, &levelferriswheel2_1766_instances, &levelferriswheel3_1767_instances, &levelferriswheel4_1768_instances, &leveltrolleyplatform_1818_instances, &leveltrolleyplatform2_1819_instances, NULL};
    qualifier_8.set(18, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &goldplatform1_1735_instances, &goldplatform2_1736_instances, &goldplatform3_1737_instances, &levelferriswheel1_1765_instances, &levelferriswheel2_1766_instances, &levelferriswheel3_1767_instances, &levelferriswheel4_1768_instances, &hazardspikesup_558_instances, &leveltrolleyplatform_1818_instances, &leveltrolleyplatform2_1819_instances, NULL};
    qualifier_9.set(41, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&minibossbulldozerdoor_1718_instances, &minibossbulldozer_1719_instances, &gimmickboostblock_1747_instances, &enemytrafficle1_1757_instances, &enemytrafficle2_1758_instances, &enemytrafficle3_1759_instances, &lamppostfront_1778_instances, &enemycoilhead_1782_instances, &enemyflarecannon_1820_instances, &enemysuperturretus_1828_instances, NULL};
    qualifier_20.set(10, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece0a_1612_instances, &levelparallaxboat1_1613_instances, &levelparallaxpiece1_2_instances, &levelparallaxpiece3_468_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece4_469_instances, &levelparallaxcar_1619_instances, &levelparallaxpiece2_861_instances, &levelparallaxpiece5_510_instances, NULL};
    qualifier_0.set(9, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &gimmickrollingarchbase_1725_instances, &breakablewall_1748_instances, &breakablefloor1_1760_instances, &breakablefloor2_1761_instances, &hazardspikesup_558_instances, &minibossbulldozerhitbox_1776_instances, &gimmickverticalhalfpipe1_1821_instances, &gimmickverticalhalfpipe4_1822_instances, &gimmickverticalhalfpipe3_1823_instances, &gimmickverticalhalfpipe6_1824_instances, &gimmickverticalhalfpipe2_1825_instances, &gimmickverticalhalfpipe5_1826_instances, &gimmickteetertotter_1827_instances, NULL};
    qualifier_7.set(38, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &enemysuperturretus_1828_instances, NULL};
    qualifier_4.set(35, &qualifier_4_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(12, &qualifier_19_instances[0]);
    static ObjectList* qualifier_22_instances[] = {&objectchair_522_instances, NULL};
    qualifier_22.set(1, &qualifier_22_instances[0]);
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
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, NULL};
    qualifier_12.set(2, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &levelferriswheel1_1765_instances, &levelferriswheel2_1766_instances, &levelferriswheel3_1767_instances, &levelferriswheel4_1768_instances, NULL};
    qualifier_13.set(5, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0a_1612(0, 0), 0);
    add_background_object(create_levelparallaxboat1_1613(0, 120), 0);
    add_background_object(create_levelparallaxpiece1_1614(0, 96), 0);
    add_background_object(create_levelparallaxpiece3_1615(0, 152), 0);
    add_background_object(create_levelparallaxpiece2_1616(0, 208), 0);
    add_background_object(create_levelparallaxpiece4_1617(0, 264), 0);
    add_background_object(create_levelparallaxpiece5_1786(0, 352), 0);
    add_background_object(create_levelparallaxcar_1619(0, 688), 0);
    add_background_object(create_levelparallaxpiece2_1620(0, 696), 0);
    add_object(create_bgstar_4(177, 41), 0);
    add_object(create_bgstar_4(129, 33), 0);
    add_object(create_bgstar_4(201, 17), 0);
    add_object(create_bgstar_4(97, 49), 0);
    add_object(create_bgstar_4(25, 57), 0);
    add_object(create_bgstar_4(281, 41), 0);
    add_object(create_bgstar_4(225, 49), 0);
    add_object(create_bgstar_4(449, 33), 0);
    add_object(create_bgstar_4(433, 65), 0);
    add_object(create_bgstar_4(345, 57), 0);
    add_object(create_bgstar_4(385, 25), 0);
    add_object(create_bgstar_4(417, 49), 0);
    add_object(create_bgstar_4(65, 25), 0);
    add_object(create_bgstar_4(297, 25), 0);
    add_object(create_bgstar_4(161, 49), 0);
    add_object(create_bgstar_4(361, 49), 0);
    add_background_object(create_fnwall11_1627(4800, 968), 1);
    add_background_object(create_fnwall11_1627(4800, 1096), 1);
    add_background_object(create_fnwall11_1627(4720, 1032), 1);
    add_background_object(create_fnwall11_1627(4720, 1224), 1);
    add_background_object(create_fnwall11_1627(4880, 1032), 1);
    add_background_object(create_fnwall11_1627(4880, 1224), 1);
    add_background_object(create_fnwall11_1627(1392, 1168), 1);
    add_background_object(create_fnwall11_1627(1328, 1168), 1);
    add_background_object(create_fnwall11_1627(1328, 1296), 1);
    add_background_object(create_fnwall10_1628(680, 1360), 1);
    add_background_object(create_fnwall10_1628(840, 1360), 1);
    add_background_object(create_fnwall10_1628(760, 1424), 1);
    add_background_object(create_fnwall10_1628(760, 1296), 1);
    add_background_object(create_fnwall10_1628(760, 1488), 1);
    add_background_object(create_fnwall11_1627(760, 1360), 1);
    add_background_object(create_fnwall11_1627(760, 1168), 1);
    add_background_object(create_fnwall11_1627(680, 1424), 1);
    add_background_object(create_fnwall11_1627(840, 1424), 1);
    add_background_object(create_fnwall11_1627(680, 1232), 1);
    add_background_object(create_fnwall11_1627(840, 1232), 1);
    add_background_object(create_fnwall11_1627(680, 1168), 1);
    add_background_object(create_fnwall11_1627(840, 1168), 1);
    add_background_object(create_fnwall12_1629(664, 1424), 1);
    add_background_object(create_fnwall12_1629(824, 1424), 1);
    add_background_object(create_fnwall12_1629(664, 1296), 1);
    add_background_object(create_fnwall12_1629(824, 1296), 1);
    add_background_object(create_fnwall12_1629(664, 1168), 1);
    add_background_object(create_fnwall12_1629(824, 1168), 1);
    add_background_object(create_fnwall13_1630(728, 1424), 1);
    add_background_object(create_fnwall13_1630(888, 1424), 1);
    add_background_object(create_fnwall13_1630(728, 1296), 1);
    add_background_object(create_fnwall13_1630(888, 1296), 1);
    add_background_object(create_fnwall13_1630(728, 1168), 1);
    add_background_object(create_fnwall13_1630(888, 1168), 1);
    add_background_object(create_fnwall15_1631(680, 1168), 1);
    add_background_object(create_fnwall15_1631(760, 1168), 1);
    add_background_object(create_fnwall15_1631(840, 1168), 1);
    add_background_object(create_fngreenroof_1632(856, 1104), 1);
    add_background_object(create_fngreenroof_1632(792, 1104), 1);
    add_background_object(create_fngreenroof_1632(728, 1104), 1);
    add_background_object(create_fngreenroof_1632(664, 1104), 1);
    add_background_object(create_fnwall10_1628(1184, 1360), 1);
    add_background_object(create_fnwall10_1628(1472, 1360), 1);
    add_background_object(create_fnwall10_1628(1264, 1424), 1);
    add_background_object(create_fnwall10_1628(1264, 1296), 1);
    add_background_object(create_fnwall10_1628(1264, 1488), 1);
    add_background_object(create_fnwall11_1627(1264, 1360), 1);
    add_background_object(create_fnwall11_1627(1264, 1168), 1);
    add_background_object(create_fnwall11_1627(1184, 1424), 1);
    add_background_object(create_fnwall11_1627(1472, 1424), 1);
    add_background_object(create_fnwall11_1627(1184, 1232), 1);
    add_background_object(create_fnwall11_1627(1472, 1232), 1);
    add_background_object(create_fnwall11_1627(1184, 1168), 1);
    add_background_object(create_fnwall11_1627(1472, 1168), 1);
    add_background_object(create_fnwall12_1629(1168, 1424), 1);
    add_background_object(create_fnwall12_1629(1456, 1424), 1);
    add_background_object(create_fnwall12_1629(1168, 1296), 1);
    add_background_object(create_fnwall12_1629(1456, 1296), 1);
    add_background_object(create_fnwall12_1629(1168, 1168), 1);
    add_background_object(create_fnwall12_1629(1456, 1168), 1);
    add_background_object(create_fnwall13_1630(1232, 1424), 1);
    add_background_object(create_fnwall13_1630(1520, 1424), 1);
    add_background_object(create_fnwall13_1630(1232, 1296), 1);
    add_background_object(create_fnwall13_1630(1520, 1296), 1);
    add_background_object(create_fnwall13_1630(1232, 1168), 1);
    add_background_object(create_fnwall13_1630(1520, 1168), 1);
    add_background_object(create_fnwall15_1631(1184, 1168), 1);
    add_background_object(create_fnwall15_1631(1264, 1168), 1);
    add_background_object(create_fnwall15_1631(1472, 1168), 1);
    add_background_object(create_fngreenroof_1632(1488, 1104), 1);
    add_background_object(create_fngreenroof_1632(1232, 1104), 1);
    add_background_object(create_fngreenroof_1632(1168, 1104), 1);
    add_background_object(create_fnwall10_1628(1392, 1296), 1);
    add_background_object(create_fnwall10_1628(1392, 1488), 1);
    add_background_object(create_fnwall11_1627(1392, 1360), 1);
    add_background_object(create_fnwall10_1628(1328, 1360), 1);
    add_background_object(create_fnwall10_1628(1328, 1232), 1);
    add_background_object(create_fnwall11_1627(1328, 1424), 1);
    add_background_object(create_fnwall15_1631(1328, 1168), 1);
    add_background_object(create_fnwall15_1631(1392, 1168), 1);
    add_background_object(create_fngreenroof_1632(1424, 1104), 1);
    add_background_object(create_fngreenroof_1632(1360, 1104), 1);
    add_background_object(create_fngreenroof_1632(1296, 1104), 1);
    add_background_object(create_fnwall10_1628(3152, 1416), 1);
    add_background_object(create_fnwall10_1628(3312, 1416), 1);
    add_background_object(create_fnwall10_1628(3232, 1480), 1);
    add_background_object(create_fnwall10_1628(3232, 1352), 1);
    add_background_object(create_fnwall10_1628(3232, 1544), 1);
    add_background_object(create_fnwall11_1627(3232, 1416), 1);
    add_background_object(create_fnwall11_1627(3232, 1224), 1);
    add_background_object(create_fnwall11_1627(3152, 1480), 1);
    add_background_object(create_fnwall11_1627(3312, 1480), 1);
    add_background_object(create_fnwall11_1627(3152, 1288), 1);
    add_background_object(create_fnwall11_1627(3312, 1288), 1);
    add_background_object(create_fnwall11_1627(3152, 1224), 1);
    add_background_object(create_fnwall11_1627(3312, 1224), 1);
    add_background_object(create_fnwall12_1629(3136, 1480), 1);
    add_background_object(create_fnwall12_1629(3296, 1480), 1);
    add_background_object(create_fnwall12_1629(3136, 1352), 1);
    add_background_object(create_fnwall12_1629(3296, 1352), 1);
    add_background_object(create_fnwall12_1629(3136, 1224), 1);
    add_background_object(create_fnwall12_1629(3296, 1224), 1);
    add_background_object(create_fnwall13_1630(3200, 1480), 1);
    add_background_object(create_fnwall13_1630(3360, 1480), 1);
    add_background_object(create_fnwall13_1630(3200, 1352), 1);
    add_background_object(create_fnwall13_1630(3360, 1352), 1);
    add_background_object(create_fnwall13_1630(3200, 1224), 1);
    add_background_object(create_fnwall13_1630(3360, 1224), 1);
    add_background_object(create_fnwall15_1631(3152, 1224), 1);
    add_background_object(create_fnwall15_1631(3232, 1224), 1);
    add_background_object(create_fnwall15_1631(3312, 1224), 1);
    add_background_object(create_fngreenroof_1632(3328, 1160), 1);
    add_background_object(create_fngreenroof_1632(3264, 1160), 1);
    add_background_object(create_fngreenroof_1632(3200, 1160), 1);
    add_background_object(create_fngreenroof_1632(3136, 1160), 1);
    add_background_object(create_fnwall10_1628(3536, 1496), 1);
    add_background_object(create_fnwall10_1628(3696, 1496), 1);
    add_background_object(create_fnwall10_1628(3616, 1560), 1);
    add_background_object(create_fnwall10_1628(3616, 1432), 1);
    add_background_object(create_fnwall10_1628(3616, 1624), 1);
    add_background_object(create_fnwall11_1627(3616, 1496), 1);
    add_background_object(create_fnwall11_1627(3616, 1304), 1);
    add_background_object(create_fnwall11_1627(3536, 1560), 1);
    add_background_object(create_fnwall11_1627(3696, 1560), 1);
    add_background_object(create_fnwall11_1627(3536, 1368), 1);
    add_background_object(create_fnwall11_1627(3696, 1368), 1);
    add_background_object(create_fnwall11_1627(3536, 1304), 1);
    add_background_object(create_fnwall11_1627(3696, 1304), 1);
    add_background_object(create_fnwall12_1629(3520, 1560), 1);
    add_background_object(create_fnwall12_1629(3680, 1560), 1);
    add_background_object(create_fnwall12_1629(3520, 1432), 1);
    add_background_object(create_fnwall12_1629(3680, 1432), 1);
    add_background_object(create_fnwall12_1629(3520, 1304), 1);
    add_background_object(create_fnwall12_1629(3680, 1304), 1);
    add_background_object(create_fnwall13_1630(3584, 1560), 1);
    add_background_object(create_fnwall13_1630(3744, 1560), 1);
    add_background_object(create_fnwall13_1630(3584, 1432), 1);
    add_background_object(create_fnwall13_1630(3744, 1432), 1);
    add_background_object(create_fnwall13_1630(3584, 1304), 1);
    add_background_object(create_fnwall13_1630(3744, 1304), 1);
    add_background_object(create_fnwall15_1631(3536, 1304), 1);
    add_background_object(create_fnwall15_1631(3616, 1304), 1);
    add_background_object(create_fnwall15_1631(3696, 1304), 1);
    add_background_object(create_fngreenroof_1632(3712, 1240), 1);
    add_background_object(create_fngreenroof_1632(3648, 1240), 1);
    add_background_object(create_fngreenroof_1632(3584, 1240), 1);
    add_background_object(create_fngreenroof_1632(3520, 1240), 1);
    add_background_object(create_fnwall10_1628(4000, 1312), 1);
    add_background_object(create_fnwall10_1628(4160, 1312), 1);
    add_background_object(create_fnwall10_1628(4080, 1376), 1);
    add_background_object(create_fnwall10_1628(4080, 1248), 1);
    add_background_object(create_fnwall10_1628(4080, 1440), 1);
    add_background_object(create_fnwall11_1627(4080, 1312), 1);
    add_background_object(create_fnwall11_1627(4080, 1120), 1);
    add_background_object(create_fnwall11_1627(4000, 1376), 1);
    add_background_object(create_fnwall11_1627(4160, 1376), 1);
    add_background_object(create_fnwall11_1627(4000, 1184), 1);
    add_background_object(create_fnwall11_1627(4160, 1184), 1);
    add_background_object(create_fnwall11_1627(4000, 1120), 1);
    add_background_object(create_fnwall11_1627(4160, 1120), 1);
    add_background_object(create_fnwall12_1629(3984, 1376), 1);
    add_background_object(create_fnwall12_1629(4144, 1376), 1);
    add_background_object(create_fnwall12_1629(3984, 1248), 1);
    add_background_object(create_fnwall12_1629(4144, 1248), 1);
    add_background_object(create_fnwall12_1629(3984, 1120), 1);
    add_background_object(create_fnwall12_1629(4144, 1120), 1);
    add_background_object(create_fnwall13_1630(4048, 1376), 1);
    add_background_object(create_fnwall13_1630(4208, 1376), 1);
    add_background_object(create_fnwall13_1630(4048, 1248), 1);
    add_background_object(create_fnwall13_1630(4208, 1248), 1);
    add_background_object(create_fnwall13_1630(4048, 1120), 1);
    add_background_object(create_fnwall13_1630(4208, 1120), 1);
    add_background_object(create_fnwall15_1631(4000, 1120), 1);
    add_background_object(create_fnwall15_1631(4080, 1120), 1);
    add_background_object(create_fnwall15_1631(4160, 1120), 1);
    add_background_object(create_fngreenroof_1632(4176, 1056), 1);
    add_background_object(create_fngreenroof_1632(4112, 1056), 1);
    add_background_object(create_fngreenroof_1632(4048, 1056), 1);
    add_background_object(create_fngreenroof_1632(3984, 1056), 1);
    add_background_object(create_fnwall10_1628(4376, 1360), 1);
    add_background_object(create_fnwall10_1628(4536, 1360), 1);
    add_background_object(create_fnwall10_1628(4456, 1424), 1);
    add_background_object(create_fnwall10_1628(4456, 1296), 1);
    add_background_object(create_fnwall10_1628(4456, 1488), 1);
    add_background_object(create_fnwall11_1627(4456, 1360), 1);
    add_background_object(create_fnwall11_1627(4456, 1168), 1);
    add_background_object(create_fnwall11_1627(4376, 1424), 1);
    add_background_object(create_fnwall11_1627(4536, 1424), 1);
    add_background_object(create_fnwall11_1627(4376, 1232), 1);
    add_background_object(create_fnwall11_1627(4536, 1232), 1);
    add_background_object(create_fnwall11_1627(4376, 1168), 1);
    add_background_object(create_fnwall11_1627(4536, 1168), 1);
    add_background_object(create_fnwall12_1629(4360, 1424), 1);
    add_background_object(create_fnwall12_1629(4520, 1424), 1);
    add_background_object(create_fnwall12_1629(4360, 1296), 1);
    add_background_object(create_fnwall12_1629(4520, 1296), 1);
    add_background_object(create_fnwall12_1629(4360, 1168), 1);
    add_background_object(create_fnwall12_1629(4520, 1168), 1);
    add_background_object(create_fnwall13_1630(4424, 1424), 1);
    add_background_object(create_fnwall13_1630(4584, 1424), 1);
    add_background_object(create_fnwall13_1630(4424, 1296), 1);
    add_background_object(create_fnwall13_1630(4584, 1296), 1);
    add_background_object(create_fnwall13_1630(4424, 1168), 1);
    add_background_object(create_fnwall13_1630(4584, 1168), 1);
    add_background_object(create_fnwall15_1631(4376, 1168), 1);
    add_background_object(create_fnwall15_1631(4456, 1168), 1);
    add_background_object(create_fnwall15_1631(4536, 1168), 1);
    add_background_object(create_fngreenroof_1632(4552, 1104), 1);
    add_background_object(create_fngreenroof_1632(4488, 1104), 1);
    add_background_object(create_fngreenroof_1632(4424, 1104), 1);
    add_background_object(create_fngreenroof_1632(4360, 1104), 1);
    add_background_object(create_fnwall10_1628(4720, 1032), 1);
    add_background_object(create_fnwall10_1628(4880, 1032), 1);
    add_background_object(create_fnwall10_1628(4800, 1352), 1);
    add_background_object(create_fnwall10_1628(4800, 968), 1);
    add_background_object(create_fnwall10_1628(4800, 1416), 1);
    add_background_object(create_fnwall11_1627(4800, 1288), 1);
    add_background_object(create_fnwall11_1627(4800, 840), 1);
    add_background_object(create_fnwall11_1627(4720, 1352), 1);
    add_background_object(create_fnwall11_1627(4880, 1352), 1);
    add_background_object(create_fnwall11_1627(4720, 904), 1);
    add_background_object(create_fnwall11_1627(4880, 904), 1);
    add_background_object(create_fnwall11_1627(4720, 840), 1);
    add_background_object(create_fnwall11_1627(4880, 840), 1);
    add_background_object(create_fnwall12_1629(4704, 1352), 1);
    add_background_object(create_fnwall12_1629(4864, 1352), 1);
    add_background_object(create_fnwall12_1629(4704, 968), 1);
    add_background_object(create_fnwall12_1629(4864, 968), 1);
    add_background_object(create_fnwall12_1629(4704, 840), 1);
    add_background_object(create_fnwall12_1629(4864, 840), 1);
    add_background_object(create_fnwall13_1630(4768, 1352), 1);
    add_background_object(create_fnwall13_1630(4928, 1352), 1);
    add_background_object(create_fnwall13_1630(4768, 968), 1);
    add_background_object(create_fnwall13_1630(4928, 968), 1);
    add_background_object(create_fnwall13_1630(4768, 840), 1);
    add_background_object(create_fnwall13_1630(4928, 840), 1);
    add_background_object(create_fnwall15_1631(4720, 840), 1);
    add_background_object(create_fnwall15_1631(4800, 840), 1);
    add_background_object(create_fnwall15_1631(4880, 840), 1);
    add_background_object(create_fngreenroof_1632(4896, 776), 1);
    add_background_object(create_fngreenroof_1632(4832, 776), 1);
    add_background_object(create_fngreenroof_1632(4768, 776), 1);
    add_background_object(create_fngreenroof_1632(4704, 776), 1);
    add_background_object(create_fnwall10_1628(4800, 1224), 1);
    add_background_object(create_fnwall10_1628(4720, 1160), 1);
    add_background_object(create_fnwall10_1628(4880, 1160), 1);
    add_background_object(create_fnwall10_1628(4800, 1096), 1);
    add_background_object(create_fnwall12_1629(4704, 1096), 1);
    add_background_object(create_fnwall12_1629(4864, 1096), 1);
    add_background_object(create_fnwall13_1630(4768, 1096), 1);
    add_background_object(create_fnwall13_1630(4928, 1096), 1);
    add_background_object(create_fnwall12_1629(4704, 1224), 1);
    add_background_object(create_fnwall12_1629(4864, 1224), 1);
    add_background_object(create_fnwall13_1630(4768, 1224), 1);
    add_background_object(create_fnwall13_1630(4928, 1224), 1);
    add_object(create_fireworklauncher_1633(5496, 601), 1);
    add_object(create_fireworklauncher_1633(5632, 689), 1);
    add_object(create_fireworklauncher_1633(5800, 649), 1);
    add_object(create_fireworklauncher_1633(6568, 737), 1);
    add_object(create_fireworklauncher_1633(6464, 809), 1);
    add_object(create_fireworklauncher_1633(5984, 769), 1);
    add_object(create_fireworklauncher_1633(6088, 713), 1);
    add_object(create_fireworklauncher_1633(6336, 649), 1);
    add_object(create_fireworklauncher_1633(6392, 705), 1);
    add_background_object(create_railroad2_1789(-32, 1624), 2);
    add_background_object(create_railroad1_1790(-32, 1560), 2);
    add_background_object(create_leveltrollycar_1791(152, 1432), 2);
    add_background_object(create_fnwall16_1669(5440, 1136), 2);
    add_background_object(create_fnwall16_1669(5568, 1136), 2);
    add_background_object(create_fnwall14_1668(5376, 1136), 2);
    add_background_object(create_fnwall14_1668(5696, 1136), 2);
    add_object(create_leveltrollycarlight_1792(-208, 1434), 2);
    add_object(create_leveltrollycarlight2_1793(-215, 1434), 2);
    add_object(create_paperlantern_527(3000, 1064), 2);
    add_object(create_paperlantern_527(3064, 1064), 2);
    add_object(create_paperlantern_527(5424, 1128), 2);
    add_object(create_paperlantern_527(5680, 1128), 2);
    add_object(create_largesign3_1794(5072, 600), 2);
    add_background_object(create_fnclothesline_1641(5760, 840), 3);
    add_background_object(create_fnclothesline_1641(5824, 840), 3);
    add_background_object(create_fnclothesline_1641(5888, 840), 3);
    add_background_object(create_fnclothesline_1641(5952, 840), 3);
    add_background_object(create_fnbackwall6_1648(10000, 1672), 3);
    add_background_object(create_fnbackwall6_1648(9872, 1672), 3);
    add_background_object(create_fnbackwall6_1648(10128, 1672), 3);
    add_background_object(create_fnbackwall6_1648(10000, 1768), 3);
    add_background_object(create_fnbackwall6_1648(9872, 1768), 3);
    add_background_object(create_fnbackwall6_1648(10128, 1768), 3);
    add_background_object(create_fnbackwall6_1648(9304, 1672), 3);
    add_background_object(create_fnbackwall6_1648(9176, 1672), 3);
    add_background_object(create_fnbackwall6_1648(9432, 1672), 3);
    add_background_object(create_fnbackwall6_1648(9304, 1768), 3);
    add_background_object(create_fnbackwall6_1648(9176, 1768), 3);
    add_background_object(create_fnbackwall6_1648(9432, 1768), 3);
    add_background_object(create_fnbackwall6_1648(7296, 1760), 3);
    add_background_object(create_rooftop5_1651(11416, 1152), 3);
    add_background_object(create_fnredcolumnback_1646(11560, 1168), 3);
    add_background_object(create_fnredcolumnback_1646(11480, 1168), 3);
    add_background_object(create_fnbackhedge_1666(8704, 1600), 3);
    add_background_object(create_fnbackwall4_1647(8408, 1408), 3);
    add_background_object(create_fnbackwall4_1647(8536, 1504), 3);
    add_background_object(create_fnbackwall4_1647(8664, 1600), 3);
    add_background_object(create_fnbackwall6_1648(8280, 1408), 3);
    add_background_object(create_fnbackwall6_1648(8408, 1504), 3);
    add_background_object(create_fnbackwall6_1648(8536, 1600), 3);
    add_background_object(create_fnbackhedge_1666(7432, 1312), 3);
    add_background_object(create_backwall2_1642(7768, 1312), 3);
    add_background_object(create_fnbackhedge_1666(7680, 1312), 3);
    add_background_object(create_fnbackhedge_1666(7560, 1312), 3);
    add_background_object(create_fnredcolumnback_1646(7360, 1608), 3);
    add_background_object(create_fnfloor20_1667(6520, 280), 3);
    add_background_object(create_fnfloor12_1659(6520, 280), 3);
    add_background_object(create_fnbackwall5_1643(8776, 600), 3);
    add_background_object(create_fnbackwall5_1643(8648, 504), 3);
    add_background_object(create_fnbackwall1_1645(8776, 504), 3);
    add_background_object(create_backwall2_1642(7640, 1024), 3);
    add_background_object(create_fnbackwall4_1647(8280, 1312), 3);
    add_background_object(create_fnbackwall6_1648(8024, 1312), 3);
    add_background_object(create_fnbackwall6_1648(7896, 1312), 3);
    add_background_object(create_fnbackwall6_1648(8152, 1312), 3);
    add_background_object(create_fnbackwall6_1648(7896, 1216), 3);
    add_background_object(create_fnbackwall6_1648(8152, 1216), 3);
    add_background_object(create_fnbackwall5_1643(7768, 1216), 3);
    add_background_object(create_fnbackwall3_1663(8280, 1216), 3);
    add_background_object(create_fnbackwall6_1648(7768, 1120), 3);
    add_background_object(create_fnbackwall6_1648(8280, 1120), 3);
    add_background_object(create_fnbackwall6_1648(8024, 1120), 3);
    add_background_object(create_fnbackwall6_1648(7896, 1120), 3);
    add_background_object(create_fnbackwall6_1648(8152, 1120), 3);
    add_background_object(create_fnbackwall5_1643(7640, 1120), 3);
    add_background_object(create_floor34_1657(8888, 664), 3);
    add_background_object(create_floor34_1657(8792, 664), 3);
    add_background_object(create_fnbackwall6_1648(7768, 1024), 3);
    add_background_object(create_fnbackwall6_1648(8280, 1024), 3);
    add_background_object(create_fnbackwall6_1648(8024, 1024), 3);
    add_background_object(create_fnbackwall6_1648(7896, 1024), 3);
    add_background_object(create_fnbackwall6_1648(8152, 1024), 3);
    add_background_object(create_backwall2_1642(7768, 928), 3);
    add_background_object(create_fnbackwall4_1647(8280, 928), 3);
    add_background_object(create_fnredcolumnback_1646(8224, 808), 3);
    add_background_object(create_fnredcolumnback_1646(7896, 808), 3);
    add_background_object(create_fnbackwall6_1648(8024, 928), 3);
    add_background_object(create_fnbackwall6_1648(7896, 928), 3);
    add_background_object(create_fnbackwall6_1648(8152, 928), 3);
    add_background_object(create_fnredcolumnback_1646(8064, 800), 3);
    add_background_object(create_floor19_1697(7224, 688), 3);
    add_background_object(create_fnredcolumnback_1646(6496, 400), 3);
    add_background_object(create_fnredcolumnback_1646(6328, 408), 3);
    add_background_object(create_fnredcolumnback_1646(6656, 400), 3);
    add_background_object(create_fnbackwall4_1647(6400, 464), 3);
    add_background_object(create_backwall2_1642(6272, 464), 3);
    add_background_object(create_fnredcolumnback_1646(6400, 648), 3);
    add_background_object(create_fnredcolumnback_1646(6480, 648), 3);
    add_background_object(create_fnbackwall6_1648(6528, 560), 3);
    add_background_object(create_fnbackwall6_1648(6400, 560), 3);
    add_background_object(create_backwall2_1642(6576, 1032), 3);
    add_background_object(create_fnbackwall5_1643(6528, 608), 3);
    add_background_object(create_fnbackwall5_1643(6656, 704), 3);
    add_background_object(create_fnbackwall6_1648(6656, 608), 3);
    add_background_object(create_fnapartmentwall1_1655(6272, 1104), 3);
    add_background_object(create_fnapartmentwindow_1656(6336, 1104), 3);
    add_background_object(create_fnapartmentwindow_1656(6400, 1104), 3);
    add_background_object(create_fnapartmentwall1_1655(6464, 1104), 3);
    add_background_object(create_fnapartmentwall1_1655(6272, 1008), 3);
    add_background_object(create_fnapartmentwindow_1656(6336, 1008), 3);
    add_background_object(create_fnapartmentwindow_1656(6400, 1008), 3);
    add_background_object(create_fnapartmentwall1_1655(6464, 1008), 3);
    add_background_object(create_fnwall21_1665(6272, 1056), 3);
    add_background_object(create_fnwall21_1665(6512, 1056), 3);
    add_background_object(create_fnapartmentwall1_1655(6272, 912), 3);
    add_background_object(create_fnapartmentwindow_1656(6336, 912), 3);
    add_background_object(create_fnapartmentwindow_1656(6400, 912), 3);
    add_background_object(create_fnapartmentwall1_1655(6464, 912), 3);
    add_background_object(create_fnwall14_1668(6208, 1184), 3);
    add_background_object(create_fnwall16_1669(6080, 1184), 3);
    add_background_object(create_fnbackhedge_1666(4992, 1168), 3);
    add_background_object(create_fnbackhedge_1666(5120, 1168), 3);
    add_background_object(create_fnbackhedge_1666(6400, 1120), 3);
    add_background_object(create_fnbackhedge_1666(6656, 1120), 3);
    add_background_object(create_fnbackhedge_1666(6528, 1120), 3);
    add_background_object(create_fnsoil_1678(6144, 1632), 3);
    add_background_object(create_dragonslope2_1795(4944, 256), 3);
    add_background_object(create_floor33_1674(4992, 184), 3);
    add_background_object(create_fnbackwall6_1648(5120, 1664), 3);
    add_background_object(create_fnbackwall6_1648(4992, 1664), 3);
    add_background_object(create_fnfloor15_1693(5120, 1664), 3);
    add_background_object(create_fnbackwall4_1647(3000, 1144), 3);
    add_background_object(create_fnbackwall6_1648(4864, 1136), 3);
    add_background_object(create_fnbackwall5_1643(4224, 1040), 3);
    add_background_object(create_backwall2_1642(4152, 848), 3);
    add_background_object(create_fnbackwall4_1647(3520, 464), 3);
    add_background_object(create_backwall2_1642(3392, 464), 3);
    add_background_object(create_fnbackwall3_1663(3520, 464), 3);
    add_background_object(create_fnredcolumnback_1646(4624, 328), 3);
    add_background_object(create_fnbackwall3_1663(5016, 752), 3);
    add_background_object(create_fnbackwall4_1647(4976, 648), 3);
    add_background_object(create_fnbackwall6_1648(4848, 552), 3);
    add_background_object(create_fnbackwall6_1648(4848, 648), 3);
    add_background_object(create_rooftop4_1652(4944, 312), 3);
    add_background_object(create_fnredcolumnback_1646(4904, 328), 3);
    add_background_object(create_fnbackwall6_1648(4848, 456), 3);
    add_background_object(create_fnbackwall6_1648(4592, 552), 3);
    add_background_object(create_fnbackwall6_1648(4592, 456), 3);
    add_background_object(create_fnbackwall6_1648(4720, 456), 3);
    add_background_object(create_fnredcolumnback_1646(4760, 328), 3);
    add_background_object(create_fnredcolumnback_1646(4488, 448), 3);
    add_background_object(create_fnredcolumnback_1646(4488, 328), 3);
    add_background_object(create_fnbackwall6_1648(4336, 456), 3);
    add_background_object(create_fnbackwall5_1643(4208, 552), 3);
    add_background_object(create_fnbackwall6_1648(4336, 552), 3);
    add_background_object(create_fnbackwall6_1648(4464, 552), 3);
    add_background_object(create_rooftop5_1651(4272, 312), 3);
    add_background_object(create_fnredcolumnback_1646(4336, 328), 3);
    add_background_object(create_floor33_1674(4512, 128), 3);
    add_background_object(create_floor19_1697(4648, 128), 3);
    add_background_object(create_fnbackwall6_1648(4888, 752), 3);
    add_background_object(create_fnbackwall6_1648(4632, 752), 3);
    add_background_object(create_fnbackwall6_1648(4760, 752), 3);
    add_background_object(create_fnbackwall1_1645(4792, 848), 3);
    add_background_object(create_rooftop5_1651(4264, 712), 3);
    add_background_object(create_fnredcolumnback_1646(4328, 728), 3);
    add_background_object(create_fnredcolumnback_1646(4472, 728), 3);
    add_background_object(create_ferriswheelbase2_1644(4064, 880), 3);
    add_background_object(create_ferriswheelbase2_1644(4064, 816), 3);
    add_background_object(create_fnredcolumnback_1646(3096, 1064), 3);
    add_background_object(create_rooftop5_1651(2888, 1056), 3);
    add_background_object(create_fnredcolumnback_1646(2952, 1064), 3);
    add_background_object(create_fnsoil_1678(3712, 1520), 3);
    add_background_object(create_fnsoil_1678(3840, 1520), 3);
    add_background_object(create_fnbackwall5_1643(3392, 944), 3);
    add_background_object(create_backwall2_1642(3392, 944), 3);
    add_background_object(create_verticalhalfpipe1_1796(3264, 944), 3);
    add_background_object(create_verticalhalfpipe3_1797(3264, 464), 3);
    add_background_object(create_verticalhalfpipe2_1798(3264, 848), 3);
    add_background_object(create_fnbackwall6_1648(3776, 848), 3);
    add_background_object(create_fnbackwall6_1648(3776, 1136), 3);
    add_background_object(create_fnbackwall1_1645(3648, 1136), 3);
    add_background_object(create_fnbackwall1_1645(3712, 1232), 3);
    add_background_object(create_fnbackwall5_1643(3584, 1232), 3);
    add_background_object(create_fnbackwall6_1648(3712, 1328), 3);
    add_background_object(create_backwall2_1642(3584, 1328), 3);
    add_background_object(create_fnfloor10_1692(3600, 1392), 3);
    add_background_object(create_fnfloor9_1688(3584, 1392), 3);
    add_background_object(create_rooftop4_1652(9880, 1504), 3);
    add_background_object(create_rooftop5_1651(9464, 1504), 3);
    add_background_object(create_fnredcolumnback_1646(9688, 1520), 3);
    add_background_object(create_fnredcolumnback_1646(9856, 1520), 3);
    add_background_object(create_fnredcolumnback_1646(9520, 1520), 3);
    add_background_object(create_riverbridge2_1799(9680, 1568), 3);
    add_background_object(create_riverbridge2_1799(9552, 1568), 3);
    add_background_object(create_riverbridge8_1800(10128, 1568), 3);
    add_background_object(create_riverbridge7_1801(10144, 1576), 3);
    add_background_object(create_riverbridge6_1802(9168, 1576), 3);
    add_background_object(create_riverbridge2_1799(9296, 1568), 3);
    add_background_object(create_riverbridge2_1799(9424, 1568), 3);
    add_background_object(create_riverbridge2_1799(9872, 1568), 3);
    add_background_object(create_riverbridge2_1799(10000, 1568), 3);
    add_background_object(create_ferriswheelbase2_1644(224, 1200), 3);
    add_background_object(create_ferriswheelbase2_1644(224, 1264), 3);
    add_background_object(create_ferriswheelbase2_1644(2560, 1424), 3);
    add_background_object(create_ferriswheelbase2_1644(2656, 1424), 3);
    add_background_object(create_fnredcolumnback_1646(2216, 1184), 3);
    add_background_object(create_fnredcolumnback_1646(2344, 1184), 3);
    add_background_object(create_rooftop4_1652(2504, 1168), 3);
    add_background_object(create_rooftop5_1651(2024, 1168), 3);
    add_background_object(create_fnredcolumnback_1646(2096, 1184), 3);
    add_background_object(create_fnredcolumnback_1646(2464, 1184), 3);
    add_background_object(create_fnfloor6_1650(2240, 1304), 3);
    add_background_object(create_fnfloor6_1650(2368, 1304), 3);
    add_background_object(create_floor7_1680(2496, 1304), 3);
    add_background_object(create_fnfloor6_1650(2112, 1304), 3);
    add_background_object(create_floor5_1679(2080, 1304), 3);
    add_background_object(create_ferriswheelbase2_1644(3936, 656), 3);
    add_background_object(create_ferriswheelbase_1664(3920, 600), 3);
    add_background_object(create_gimmickrollingarchback_1689(4736, 472), 3);
    add_background_object(create_hangingclothes1_1803(5824, 856), 3);
    add_background_object(create_hangingclothes2_1804(5896, 856), 3);
    add_background_object(create_fnfloor8_1649(0, 1328), 3);
    add_background_object(create_fnfloor8_1649(0, 1424), 3);
    add_background_object(create_fnfloor8_1649(0, 1520), 3);
    add_background_object(create_fnfloor8_1649(0, 1616), 3);
    add_background_object(create_fnfloor8_1649(0, 1712), 3);
    add_background_object(create_fnfloor8_1649(0, 1808), 3);
    add_background_object(create_fnfloor8_1649(0, 1136), 3);
    add_background_object(create_fnfloor12_1659(0, 1328), 3);
    add_background_object(create_fnfloor12_1659(0, 1136), 3);
    add_background_object(create_fnfloor20_1667(128, 1328), 3);
    add_background_object(create_fnfloor20_1667(256, 1328), 3);
    add_background_object(create_fnfloor8_1649(384, 1520), 3);
    add_background_object(create_fnfloor8_1649(384, 1616), 3);
    add_background_object(create_fnfloor8_1649(384, 1712), 3);
    add_background_object(create_fnfloor8_1649(384, 1808), 3);
    add_background_object(create_fnfloor12_1659(128, 1328), 3);
    add_background_object(create_fnfloor12_1659(256, 1328), 3);
    add_background_object(create_fnfloor27_1684(128, 1376), 3);
    add_background_object(create_fnfloor28_1685(304, 1376), 3);
    add_background_object(create_fnfloor8_1649(384, 1424), 3);
    add_background_object(create_fnfloor15_1693(384, 1328), 3);
    add_background_object(create_fnfloor16_1694(384, 1328), 3);
    add_background_object(create_fnfloor8_1649(512, 1520), 3);
    add_background_object(create_fnfloor15_1693(512, 1424), 3);
    add_background_object(create_fnfloor16_1694(512, 1424), 3);
    add_background_object(create_fnfloor15_1693(640, 1520), 3);
    add_background_object(create_fnfloor20_1667(512, 1616), 3);
    add_background_object(create_fnfloor20_1667(640, 1616), 3);
    add_background_object(create_fnfloor16_1694(640, 1520), 3);
    add_background_object(create_fnfloor27_1684(512, 1664), 3);
    add_background_object(create_fnfloor28_1685(688, 1664), 3);
    add_background_object(create_fnfloor8_1649(768, 1616), 3);
    add_background_object(create_fnfloor8_1649(768, 1712), 3);
    add_background_object(create_fnfloor8_1649(768, 1808), 3);
    add_background_object(create_fnfloor12_1659(768, 1616), 3);
    add_background_object(create_fnfloor8_1649(896, 1616), 3);
    add_background_object(create_fnfloor12_1659(896, 1616), 3);
    add_background_object(create_fnfloor8_1649(1024, 1616), 3);
    add_background_object(create_fnfloor12_1659(1024, 1616), 3);
    add_background_object(create_fnfloor8_1649(1152, 1616), 3);
    add_background_object(create_fnfloor8_1649(1280, 1616), 3);
    add_background_object(create_fnfloor8_1649(1280, 1520), 3);
    add_background_object(create_fnfloor11_1690(1200, 1520), 3);
    add_background_object(create_fnfloor9_1688(1280, 1520), 3);
    add_background_object(create_fnfloor12_1659(1280, 1520), 3);
    add_background_object(create_fnfloor13_1691(1280, 1520), 3);
    add_background_object(create_fnfloor8_1649(1408, 1616), 3);
    add_background_object(create_fnfloor8_1649(1408, 1520), 3);
    add_background_object(create_fnfloor12_1659(1408, 1520), 3);
    add_background_object(create_fnfloor12_1659(1152, 1616), 3);
    add_background_object(create_fnfloor10_1692(1520, 1520), 3);
    add_background_object(create_fnfloor14_1660(1520, 1520), 3);
    add_background_object(create_fnfloor8_1649(1536, 1616), 3);
    add_background_object(create_fnfloor12_1659(1536, 1616), 3);
    add_background_object(create_fnfloor8_1649(1664, 1616), 3);
    add_background_object(create_fnfloor12_1659(1664, 1616), 3);
    add_background_object(create_fnfloor8_1649(1792, 1616), 3);
    add_background_object(create_fnfloor8_1649(1920, 1616), 3);
    add_background_object(create_fnfloor8_1649(1920, 1520), 3);
    add_background_object(create_fnfloor9_1688(1920, 1520), 3);
    add_background_object(create_fnfloor12_1659(1920, 1520), 3);
    add_background_object(create_fnfloor13_1691(1920, 1520), 3);
    add_background_object(create_fnfloor12_1659(1792, 1616), 3);
    add_background_object(create_fnfloor8_1649(2048, 1616), 3);
    add_background_object(create_fnfloor8_1649(2048, 1328), 3);
    add_background_object(create_fnfloor8_1649(2048, 1424), 3);
    add_background_object(create_fnfloor8_1649(2048, 1520), 3);
    add_background_object(create_fnfloor9_1688(2048, 1424), 3);
    add_background_object(create_fnfloor9_1688(2048, 1328), 3);
    add_background_object(create_fnfloor12_1659(2048, 1328), 3);
    add_background_object(create_fnfloor13_1691(2048, 1328), 3);
    add_background_object(create_fnfloor8_1649(2176, 1616), 3);
    add_background_object(create_fnfloor8_1649(2176, 1328), 3);
    add_background_object(create_fnfloor12_1659(2176, 1328), 3);
    add_background_object(create_fnfloor8_1649(2304, 1616), 3);
    add_background_object(create_fnfloor8_1649(2304, 1328), 3);
    add_background_object(create_fnfloor12_1659(2304, 1328), 3);
    add_background_object(create_fnrooftop3_1658(1992, 1056), 3);
    add_background_object(create_fnrooftop2_1687(2336, 1056), 3);
    add_background_object(create_fnrooftop1_1686(2272, 1056), 3);
    add_background_object(create_fnfloor8_1649(2432, 1616), 3);
    add_background_object(create_fnfloor8_1649(2432, 1328), 3);
    add_background_object(create_fnfloor12_1659(2432, 1328), 3);
    add_background_object(create_lamppostback_1709(352, 1248), 3);
    add_background_object(create_lamppostback_1709(224, 1248), 3);
    add_background_object(create_lamppostback_1709(96, 1248), 3);
    add_background_object(create_lamppostback_1709(1312, 1440), 3);
    add_background_object(create_lamppostback_1709(1472, 1440), 3);
    add_background_object(create_lamppostback_1709(1952, 1440), 3);
    add_background_object(create_edgeoverlay_1805(280, 1304), 3);
    add_background_object(create_edgeoverlay_1805(1544, 1592), 3);
    add_background_object(create_edgeoverlay_1805(1872, 1592), 3);
    add_background_object(create_fnfloor10_1692(112, 1136), 3);
    add_background_object(create_fnfloor14_1660(112, 1136), 3);
    add_background_object(create_fnfloor17_1661(0, 1216), 3);
    add_background_object(create_fnfloor12_1659(2560, 1424), 3);
    add_background_object(create_fnfloor10_1692(2544, 1328), 3);
    add_background_object(create_fnfloor14_1660(2544, 1328), 3);
    add_background_object(create_fnfloor8_1649(2560, 1616), 3);
    add_background_object(create_fnfloor8_1649(2688, 1616), 3);
    add_background_object(create_fnfloor8_1649(2816, 1616), 3);
    add_background_object(create_fnfloor12_1659(2688, 1616), 3);
    add_background_object(create_fnfloor12_1659(2816, 1616), 3);
    add_background_object(create_fnfloor14_1660(2672, 1424), 3);
    add_background_object(create_fnfloor12_1659(2560, 1616), 3);
    add_background_object(create_fnfloor17_1661(2560, 1440), 3);
    add_background_object(create_ferriswheelbase2_1644(2656, 1488), 3);
    add_background_object(create_ferriswheelbase2_1644(2656, 1552), 3);
    add_background_object(create_fnwall6_1670(2360, 1488), 3);
    add_background_object(create_fnwall7_1671(2424, 1488), 3);
    add_background_object(create_fnredcolumn_1673(2480, 1488), 3);
    add_background_object(create_fnfloor20_1667(2432, 1424), 3);
    add_background_object(create_fnwall6_1670(2200, 1488), 3);
    add_background_object(create_fnwall7_1671(2264, 1488), 3);
    add_background_object(create_fnredcolumn_1673(2160, 1488), 3);
    add_background_object(create_fnredcolumn_1673(2320, 1488), 3);
    add_background_object(create_fnfloor20_1667(2304, 1424), 3);
    add_background_object(create_fnfloor20_1667(2176, 1424), 3);
    add_background_object(create_fnfloor12_1659(2176, 1616), 3);
    add_background_object(create_fnfloor12_1659(2304, 1616), 3);
    add_background_object(create_fnfloor12_1659(2432, 1616), 3);
    add_background_object(create_fnfloor17_1661(2432, 1464), 3);
    add_background_object(create_fnfloor17_1661(2304, 1464), 3);
    add_background_object(create_fnfloor17_1661(2176, 1464), 3);
    add_background_object(create_fnfloor17_1661(2160, 1472), 3);
    add_background_object(create_fnfloor17_1661(2288, 1472), 3);
    add_background_object(create_fnfloor17_1661(2416, 1472), 3);
    add_background_object(create_fnfloor13_1691(2560, 1424), 3);
    add_background_object(create_ferriswheelbase2_1644(2560, 1488), 3);
    add_background_object(create_ferriswheelbase2_1644(2560, 1552), 3);
    add_background_object(create_fnfloor10_1692(2544, 1376), 3);
    add_background_object(create_fnfloor8_1649(2944, 1616), 3);
    add_background_object(create_fnfloor8_1649(3200, 1616), 3);
    add_background_object(create_fnfloor12_1659(2944, 1616), 3);
    add_background_object(create_fnfloor8_1649(3072, 1616), 3);
    add_background_object(create_fnfloor12_1659(3072, 1616), 3);
    add_background_object(create_fnfloor8_1649(3328, 1520), 3);
    add_background_object(create_fnfloor8_1649(3456, 1520), 3);
    add_background_object(create_fnfloor12_1659(3328, 1520), 3);
    add_background_object(create_fnfloor12_1659(3456, 1520), 3);
    add_background_object(create_fnfloor8_1649(3584, 1520), 3);
    add_background_object(create_fnfloor8_1649(3584, 1616), 3);
    add_background_object(create_fnfloor8_1649(3584, 1424), 3);
    add_background_object(create_fnfloor8_1649(3712, 1424), 3);
    add_background_object(create_fnfloor12_1659(3584, 1424), 3);
    add_background_object(create_fnfloor12_1659(3712, 1424), 3);
    add_background_object(create_riverbridgebase1_1806(9192, 1608), 3);
    add_background_object(create_riverbridgebase2_1807(9448, 1608), 3);
    add_background_object(create_riverbridgebase3_1808(10128, 1608), 3);
    add_background_object(create_fnfloor8_1649(8960, 1760), 3);
    add_background_object(create_fnfloor8_1649(9088, 1760), 3);
    add_background_object(create_fnfloor8_1649(8960, 1664), 3);
    add_background_object(create_fnfloor8_1649(9088, 1664), 3);
    add_background_object(create_fnfloor12_1659(8960, 1664), 3);
    add_background_object(create_fnfloor12_1659(9088, 1664), 3);
    add_background_object(create_lamppostback_1709(2608, 1344), 3);
    add_background_object(create_ferriswheelbase2_1644(128, 1200), 3);
    add_background_object(create_fnfloor12_1659(128, 1200), 3);
    add_background_object(create_fnfloor14_1660(240, 1200), 3);
    add_background_object(create_fnfloor17_1661(128, 1216), 3);
    add_background_object(create_fnfloor13_1691(128, 1200), 3);
    add_background_object(create_ferriswheelbase2_1644(128, 1264), 3);
    add_background_object(create_fnfloor35_1710(3200, 1520), 3);
    add_background_object(create_fnfloor36_1711(3200, 1520), 3);
    add_background_object(create_fnfloor8_1649(3328, 1616), 3);
    add_background_object(create_fnfloor8_1649(3456, 1616), 3);
    add_background_object(create_fnfloor9_1688(3584, 1424), 3);
    add_background_object(create_fnfloor13_1691(3584, 1392), 3);
    add_background_object(create_fnfloor10_1692(9200, 1664), 3);
    add_background_object(create_fnfloor10_1692(9200, 1760), 3);
    add_background_object(create_fnfloor8_1649(10224, 1664), 3);
    add_background_object(create_fnfloor9_1688(10224, 1664), 3);
    add_background_object(create_fnfloor12_1659(10224, 1664), 3);
    add_background_object(create_fnfloor8_1649(10352, 1664), 3);
    add_background_object(create_fnfloor12_1659(10352, 1664), 3);
    add_background_object(create_fnfloor8_1649(10224, 1760), 3);
    add_background_object(create_fnfloor9_1688(10224, 1760), 3);
    add_background_object(create_fnfloor8_1649(10352, 1760), 3);
    add_background_object(create_riverbridgebase2_1807(9512, 1608), 3);
    add_background_object(create_riverbridgebase2_1807(9576, 1608), 3);
    add_background_object(create_riverbridge2_1799(9744, 1568), 3);
    add_background_object(create_riverbridgebase2_1807(9640, 1608), 3);
    add_background_object(create_riverbridgebase2_1807(9704, 1608), 3);
    add_background_object(create_riverbridgebase2_1807(9768, 1608), 3);
    add_background_object(create_riverbridgebase2_1807(9832, 1608), 3);
    add_background_object(create_riverbridgebase2_1807(9896, 1608), 3);
    add_background_object(create_riverbridgebase2_1807(10064, 1608), 3);
    add_background_object(create_fnfloor8_1649(9520, 1664), 3);
    add_background_object(create_fnfloor8_1649(9648, 1664), 3);
    add_background_object(create_fnfloor8_1649(9520, 1760), 3);
    add_background_object(create_fnfloor8_1649(9648, 1760), 3);
    add_background_object(create_floor7_1680(9872, 1640), 3);
    add_background_object(create_fnfloor6_1650(9552, 1640), 3);
    add_background_object(create_floor5_1679(9520, 1640), 3);
    add_background_object(create_fnrooftop3_1658(9432, 1392), 3);
    add_background_object(create_fnrooftop2_1687(9712, 1392), 3);
    add_background_object(create_fnfloor6_1650(9744, 1640), 3);
    add_background_object(create_fnfloor12_1659(9520, 1664), 3);
    add_background_object(create_fnfloor8_1649(9776, 1664), 3);
    add_background_object(create_fnfloor8_1649(9776, 1760), 3);
    add_background_object(create_fnfloor12_1659(9776, 1664), 3);
    add_background_object(create_fnfloor6_1650(9648, 1640), 3);
    add_background_object(create_fnfloor12_1659(9648, 1664), 3);
    add_background_object(create_fnfloor9_1688(9520, 1664), 3);
    add_background_object(create_fnfloor9_1688(9520, 1760), 3);
    add_background_object(create_fnfloor10_1692(9888, 1664), 3);
    add_background_object(create_fnfloor10_1692(9888, 1760), 3);
    add_background_object(create_fnfloor14_1660(9888, 1664), 3);
    add_background_object(create_fnfloor13_1691(9520, 1664), 3);
    add_background_object(create_edgeoverlay_1805(2568, 1400), 3);
    add_background_object(create_fnfloor8_1649(3840, 1424), 3);
    add_background_object(create_fnfloor8_1649(3840, 1328), 3);
    add_background_object(create_fnfloor9_1688(3840, 1328), 3);
    add_background_object(create_fnfloor8_1649(3840, 1232), 3);
    add_background_object(create_fnfloor9_1688(3840, 1232), 3);
    add_background_object(create_fnfloor9_1688(3808, 1328), 3);
    add_background_object(create_fnfloor10_1692(3824, 1328), 3);
    add_background_object(create_fnfloor14_1660(3824, 1328), 3);
    add_background_object(create_fnfloor13_1691(3808, 1328), 3);
    add_background_object(create_fnfloor8_1649(3840, 1136), 3);
    add_background_object(create_fnfloor9_1688(3840, 1136), 3);
    add_background_object(create_fnfloor8_1649(3840, 1040), 3);
    add_background_object(create_fnfloor9_1688(3840, 1040), 3);
    add_background_object(create_fnfloor8_1649(3520, 1136), 3);
    add_background_object(create_fnfloor10_1692(3632, 1136), 3);
    add_background_object(create_fnfloor17_1661(3520, 1224), 3);
    add_background_object(create_fnfloor8_1649(3520, 1040), 3);
    add_background_object(create_fnfloor10_1692(3632, 1040), 3);
    add_background_object(create_fnfloor8_1649(3840, 944), 3);
    add_background_object(create_fnfloor9_1688(3840, 944), 3);
    add_background_object(create_fnfloor8_1649(3840, 848), 3);
    add_background_object(create_fnfloor9_1688(3840, 848), 3);
    add_background_object(create_fnfloor8_1649(3520, 848), 3);
    add_background_object(create_fnfloor10_1692(3632, 848), 3);
    add_background_object(create_fnfloor8_1649(3520, 752), 3);
    add_background_object(create_fnfloor10_1692(3632, 752), 3);
    add_background_object(create_fnfloor17_1661(3552, 1224), 3);
    add_background_object(create_fnfloor12_1659(3840, 848), 3);
    add_background_object(create_fnfloor13_1691(3840, 848), 3);
    add_background_object(create_fnfloor14_1660(3600, 1392), 3);
    add_background_object(create_fnfloor8_1649(3968, 1424), 3);
    add_background_object(create_fnfloor8_1649(3968, 1328), 3);
    add_background_object(create_fnfloor8_1649(3968, 1232), 3);
    add_background_object(create_fnfloor8_1649(3968, 1136), 3);
    add_background_object(create_fnfloor8_1649(3968, 1040), 3);
    add_background_object(create_fnfloor8_1649(3968, 944), 3);
    add_background_object(create_fnfloor8_1649(3520, 656), 3);
    add_background_object(create_fnfloor10_1692(3632, 656), 3);
    add_background_object(create_fnfloor8_1649(3520, 560), 3);
    add_background_object(create_fnfloor10_1692(3632, 560), 3);
    add_background_object(create_fnfloor15_1693(3968, 848), 3);
    add_background_object(create_fnfloor16_1694(3968, 848), 3);
    add_background_object(create_fnfloor8_1649(4096, 944), 3);
    add_background_object(create_fnfloor12_1659(4096, 944), 3);
    add_background_object(create_fnrooftop3_1658(4232, 600), 3);
    add_background_object(create_fnfloor8_1649(4512, 600), 3);
    add_background_object(create_fnfloor9_1688(4512, 600), 3);
    add_background_object(create_fnfloor12_1659(4512, 600), 3);
    add_background_object(create_fnfloor13_1691(4512, 600), 3);
    add_background_object(create_fnfloor11_1690(4560, 504), 3);
    add_background_object(create_fnfloor8_1649(4512, 696), 3);
    add_background_object(create_fnfloor9_1688(4512, 696), 3);
    add_background_object(create_fnfloor8_1649(4640, 600), 3);
    add_background_object(create_fnfloor8_1649(4640, 504), 3);
    add_background_object(create_fnfloor12_1659(4640, 504), 3);
    add_background_object(create_fnfloor8_1649(4768, 600), 3);
    add_background_object(create_fnfloor8_1649(4768, 504), 3);
    add_background_object(create_fnfloor12_1659(4768, 504), 3);
    add_background_object(create_fnfloor8_1649(4640, 696), 3);
    add_background_object(create_fnfloor8_1649(4768, 696), 3);
    add_background_object(create_fnfloor8_1649(4896, 696), 3);
    add_background_object(create_fnfloor29_1706(4896, 600), 3);
    add_background_object(create_fnbackwall1_1645(3544, 1944), 3);
    add_background_object(create_backwall2_1642(3672, 1944), 3);
    add_background_object(create_fnbackwall3_1663(3800, 1944), 3);
    add_background_object(create_fnbackwall4_1647(3800, 2040), 3);
    add_background_object(create_fnbackwall5_1643(3544, 2040), 3);
    add_background_object(create_fnbackwall6_1648(3672, 2040), 3);
    add_background_object(create_fnfloor8_1649(3392, 1136), 3);
    add_background_object(create_fnfloor17_1661(3392, 1224), 3);
    add_background_object(create_fnfloor8_1649(3392, 1040), 3);
    add_background_object(create_fnfloor8_1649(3392, 848), 3);
    add_background_object(create_fnfloor8_1649(3392, 752), 3);
    add_background_object(create_fnfloor8_1649(3392, 656), 3);
    add_background_object(create_fnfloor8_1649(3392, 560), 3);
    add_background_object(create_fnbackwall4_1647(3648, 1040), 3);
    add_background_object(create_fnbackwall3_1663(3648, 944), 3);
    add_background_object(create_fnbackwall1_1645(3648, 848), 3);
    add_background_object(create_fnbackwall4_1647(3776, 752), 3);
    add_background_object(create_fnbackwall6_1648(3648, 752), 3);
    add_background_object(create_fnbackwall4_1647(3648, 656), 3);
    add_background_object(create_lamppostback_1709(3392, 1440), 3);
    add_background_object(create_lamppostback_1709(3488, 1440), 3);
    add_background_object(create_fnfloor12_1659(3520, 1040), 3);
    add_background_object(create_fnfloor14_1660(3632, 1040), 3);
    add_background_object(create_fnfloor12_1659(3392, 1040), 3);
    add_background_object(create_fnfloor8_1649(3264, 1136), 3);
    add_background_object(create_fnfloor17_1661(3264, 1224), 3);
    add_background_object(create_fnfloor8_1649(3264, 1040), 3);
    add_background_object(create_fnfloor12_1659(3264, 1040), 3);
    add_background_object(create_fnfloor17_1661(3552, 928), 3);
    add_background_object(create_fnbackwall6_1648(3520, 944), 3);
    add_background_object(create_fnfloor8_1649(3136, 1136), 3);
    add_background_object(create_fnfloor8_1649(3136, 1040), 3);
    add_background_object(create_fnfloor8_1649(3136, 944), 3);
    add_background_object(create_fnfloor29_1706(3264, 944), 3);
    add_background_object(create_fnfloor10_1692(3248, 944), 3);
    add_background_object(create_fnfloor8_1649(3136, 752), 3);
    add_background_object(create_fnfloor10_1692(3248, 752), 3);
    add_background_object(create_verticalhalfpipe2_1798(3264, 752), 3);
    add_background_object(create_verticalhalfpipe2_1798(3264, 656), 3);
    add_background_object(create_verticalhalfpipe2_1798(3264, 560), 3);
    add_background_object(create_fnfloor8_1649(3136, 656), 3);
    add_background_object(create_fnfloor10_1692(3248, 656), 3);
    add_background_object(create_fnfloor8_1649(3136, 560), 3);
    add_background_object(create_fnfloor10_1692(3248, 560), 3);
    add_background_object(create_fnfloor12_1659(3136, 944), 3);
    add_background_object(create_fnfloor14_1660(3248, 944), 3);
    add_background_object(create_fnfloor9_1688(3392, 560), 3);
    add_background_object(create_fnfloor9_1688(3392, 656), 3);
    add_background_object(create_fnfloor9_1688(3392, 752), 3);
    add_background_object(create_fnfloor9_1688(3392, 848), 3);
    add_background_object(create_fnfloor17_1661(3424, 928), 3);
    add_background_object(create_fnrooftop3_1658(2856, 944), 3);
    add_background_object(create_fnfloor9_1688(3136, 944), 3);
    add_background_object(create_fnfloor13_1691(3136, 944), 3);
    add_background_object(create_fnfloor9_1688(3136, 1040), 3);
    add_background_object(create_fnfloor9_1688(3136, 1088), 3);
    add_background_object(create_fnfloor17_1661(3136, 1224), 3);
    add_background_object(create_fnbackwall5_1643(3136, 848), 3);
    add_background_object(create_backwall2_1642(3136, 848), 3);
    add_background_object(create_fnfloor9_1688(3136, 752), 3);
    add_background_object(create_fnfloor17_1661(3136, 832), 3);
    add_background_object(create_fnfloor17_1661(3392, 928), 3);
    add_background_object(create_fnfloor9_1688(3136, 656), 3);
    add_background_object(create_fnfloor9_1688(3136, 560), 3);
    add_background_object(create_fnfloor27_1684(3264, 464), 3);
    add_background_object(create_fnfloor8_1649(3136, 464), 3);
    add_background_object(create_fnfloor10_1692(3248, 464), 3);
    add_background_object(create_fnfloor9_1688(3136, 464), 3);
    add_background_object(create_fnfloor8_1649(3264, 368), 3);
    add_background_object(create_fnfloor8_1649(3136, 368), 3);
    add_background_object(create_fnfloor9_1688(3136, 368), 3);
    add_background_object(create_fnfloor8_1649(3392, 368), 3);
    add_background_object(create_fnfloor8_1649(3520, 368), 3);
    add_background_object(create_fnfloor17_1661(3520, 448), 3);
    add_background_object(create_fnfloor17_1661(3392, 448), 3);
    add_background_object(create_fnfloor17_1661(3264, 448), 3);
    add_background_object(create_fnsoil_1678(896, 1664), 3);
    add_background_object(create_fnsoil_1678(896, 1792), 3);
    add_background_object(create_fnsoil_1678(1024, 1664), 3);
    add_background_object(create_fnsoil_1678(1024, 1792), 3);
    add_background_object(create_fnsoil_1678(1152, 1664), 3);
    add_background_object(create_fnsoil_1678(1152, 1792), 3);
    add_background_object(create_fnsoil_1678(1280, 1664), 3);
    add_background_object(create_fnsoil_1678(1280, 1792), 3);
    add_background_object(create_fnsoil_1678(1408, 1664), 3);
    add_background_object(create_fnsoil_1678(1408, 1792), 3);
    add_background_object(create_fnsoil_1678(1536, 1664), 3);
    add_background_object(create_fnsoil_1678(1536, 1792), 3);
    add_background_object(create_fnsoil_1678(1664, 1664), 3);
    add_background_object(create_fnsoil_1678(1664, 1792), 3);
    add_background_object(create_fnsoil_1678(1792, 1664), 3);
    add_background_object(create_fnsoil_1678(1792, 1792), 3);
    add_background_object(create_fnsoil_1678(1920, 1664), 3);
    add_background_object(create_fnsoil_1678(1920, 1792), 3);
    add_background_object(create_fnsoil_1678(2048, 1664), 3);
    add_background_object(create_fnsoil_1678(2048, 1792), 3);
    add_background_object(create_fnsoil_1678(2176, 1664), 3);
    add_background_object(create_fnsoil_1678(2176, 1792), 3);
    add_background_object(create_fnsoil_1678(2304, 1664), 3);
    add_background_object(create_fnsoil_1678(2304, 1792), 3);
    add_background_object(create_fnsoil_1678(2432, 1664), 3);
    add_background_object(create_fnsoil_1678(2432, 1792), 3);
    add_background_object(create_fnsoil_1678(2560, 1664), 3);
    add_background_object(create_fnsoil_1678(2560, 1792), 3);
    add_background_object(create_fnsoil_1678(2688, 1664), 3);
    add_background_object(create_fnsoil_1678(2688, 1792), 3);
    add_background_object(create_fnsoil_1678(2816, 1664), 3);
    add_background_object(create_fnsoil_1678(2816, 1792), 3);
    add_background_object(create_fnsoil_1678(2944, 1664), 3);
    add_background_object(create_fnsoil_1678(2944, 1792), 3);
    add_background_object(create_fnsoil_1678(3072, 1664), 3);
    add_background_object(create_fnsoil_1678(3072, 1792), 3);
    add_background_object(create_fnsoil_1678(3200, 1664), 3);
    add_background_object(create_fnsoil_1678(3200, 1792), 3);
    add_background_object(create_fnsoil_1678(3328, 1664), 3);
    add_background_object(create_fnsoil_1678(3328, 1792), 3);
    add_background_object(create_fnsoil_1678(3456, 1664), 3);
    add_background_object(create_fnsoil_1678(3456, 1792), 3);
    add_background_object(create_fnsoil_1678(3584, 1664), 3);
    add_background_object(create_fnsoil_1678(3584, 1792), 3);
    add_background_object(create_fnsoil_1678(3712, 1648), 3);
    add_background_object(create_fnsoil_1678(3712, 1776), 3);
    add_background_object(create_fnsoil_1678(3840, 1648), 3);
    add_background_object(create_fnsoil_1678(3840, 1776), 3);
    add_background_object(create_fnsoil_1678(3968, 1776), 3);
    add_background_object(create_fnsoil_1678(3968, 1648), 3);
    add_background_object(create_fnsoil_1678(4096, 1648), 3);
    add_background_object(create_fnsoil_1678(4096, 1776), 3);
    add_background_object(create_fnfloor10_1692(3696, 1568), 3);
    add_background_object(create_fnfloor10_1692(3696, 1520), 3);
    add_background_object(create_fnfloor12_1659(3392, 560), 3);
    add_background_object(create_fnfloor13_1691(3392, 560), 3);
    add_background_object(create_fnfloor12_1659(3520, 560), 3);
    add_background_object(create_fnfloor14_1660(3632, 560), 3);
    add_background_object(create_fnfloor17_1661(3008, 1224), 3);
    add_background_object(create_fnfloor20_1667(3008, 1184), 3);
    add_background_object(create_fnfloor12_1659(3008, 1184), 3);
    add_background_object(create_fnfloor13_1691(3008, 1184), 3);
    add_background_object(create_fnfloor8_1649(3264, 272), 3);
    add_background_object(create_fnfloor8_1649(3136, 272), 3);
    add_background_object(create_fnfloor9_1688(3136, 272), 3);
    add_background_object(create_fnfloor8_1649(3392, 272), 3);
    add_background_object(create_fnfloor8_1649(3520, 272), 3);
    add_background_object(create_fnfloor8_1649(3264, 176), 3);
    add_background_object(create_fnfloor8_1649(3136, 176), 3);
    add_background_object(create_fnfloor9_1688(3136, 176), 3);
    add_background_object(create_fnfloor8_1649(3392, 176), 3);
    add_background_object(create_fnfloor8_1649(3520, 176), 3);
    add_background_object(create_fnfloor8_1649(3264, 80), 3);
    add_background_object(create_fnfloor8_1649(3136, 80), 3);
    add_background_object(create_fnfloor9_1688(3136, 80), 3);
    add_background_object(create_fnfloor8_1649(3392, 80), 3);
    add_background_object(create_fnfloor8_1649(3520, 80), 3);
    add_background_object(create_fnfloor8_1649(3264, -16), 3);
    add_background_object(create_fnfloor8_1649(3136, -16), 3);
    add_background_object(create_fnfloor9_1688(3136, -16), 3);
    add_background_object(create_fnfloor8_1649(3392, -16), 3);
    add_background_object(create_fnfloor8_1649(3520, -16), 3);
    add_background_object(create_fnfloor8_1649(3648, 368), 3);
    add_background_object(create_fnfloor8_1649(3776, 272), 3);
    add_background_object(create_fnfloor10_1692(3760, 368), 3);
    add_background_object(create_fnfloor10_1692(3888, 272), 3);
    add_background_object(create_fnfloor17_1661(3648, 448), 3);
    add_background_object(create_ferriswheelbase2_1644(3936, 784), 3);
    add_background_object(create_ferriswheelbase2_1644(3936, 720), 3);
    add_background_object(create_ferriswheelbase2_1644(4064, 752), 3);
    add_background_object(create_ferriswheelbase2_1644(4064, 688), 3);
    add_background_object(create_ferriswheelbase2_1644(4064, 624), 3);
    add_background_object(create_ferriswheelbase2_1644(4064, 560), 3);
    add_background_object(create_ferriswheelbase2_1644(4064, 496), 3);
    add_background_object(create_ferriswheelbase2_1644(4064, 432), 3);
    add_background_object(create_ferriswheelbase_1664(4048, 376), 3);
    add_background_object(create_fnfloor8_1649(3648, 272), 3);
    add_background_object(create_fnfloor17_1661(3776, 360), 3);
    add_background_object(create_fnfloor12_1659(3648, 272), 3);
    add_background_object(create_fnfloor12_1659(3776, 272), 3);
    add_background_object(create_fnfloor14_1660(3888, 272), 3);
    add_background_object(create_fnfloor10_1692(3632, -16), 3);
    add_background_object(create_fnfloor10_1692(3632, 80), 3);
    add_background_object(create_fnfloor10_1692(3632, 176), 3);
    add_background_object(create_fnbackhedge_1666(3648, 208), 3);
    add_background_object(create_fnbackhedge_1666(3776, 208), 3);
    add_background_object(create_fnbackwall6_1648(4408, 848), 3);
    add_background_object(create_fnbackwall6_1648(4280, 848), 3);
    add_background_object(create_fnbackwall5_1643(4504, 800), 3);
    add_background_object(create_fnfloor17_1661(4512, 784), 3);
    add_background_object(create_fnfloor17_1661(4640, 784), 3);
    add_background_object(create_fnbackwall1_1645(4536, 848), 3);
    add_background_object(create_fnbackwall6_1648(4664, 848), 3);
    add_background_object(create_fnfloor17_1661(4768, 784), 3);
    add_background_object(create_fnfloor17_1661(4896, 784), 3);
    add_background_object(create_fnbackwall6_1648(4920, 848), 3);
    add_background_object(create_fnbackwall4_1647(5048, 848), 3);
    add_background_object(create_fnfloor8_1649(4224, 944), 3);
    add_background_object(create_fnfloor12_1659(4224, 944), 3);
    add_background_object(create_fnrooftop2_1687(4776, 200), 3);
    add_background_object(create_fnrooftop3_1658(4240, 200), 3);
    add_background_object(create_fnrooftop1_1686(4520, 200), 3);
    add_background_object(create_fnrooftop1_1686(4584, 200), 3);
    add_background_object(create_fnrooftop1_1686(4648, 200), 3);
    add_background_object(create_fnrooftop1_1686(4712, 200), 3);
    add_background_object(create_backwall2_1642(4208, 456), 3);
    add_background_object(create_fnbackwall1_1645(4464, 456), 3);
    add_background_object(create_fnbackwall4_1647(4976, 456), 3);
    add_background_object(create_fnbackwall3_1663(4976, 552), 3);
    add_background_object(create_ferriswheelbase2_1644(3424, 464), 3);
    add_background_object(create_ferriswheelbase2_1644(3424, 496), 3);
    add_background_object(create_ferriswheelbase2_1644(3584, 464), 3);
    add_background_object(create_ferriswheelbase2_1644(3584, 496), 3);
    add_background_object(create_ferriswheelbase2_1644(3424, 944), 3);
    add_background_object(create_ferriswheelbase2_1644(3424, 976), 3);
    add_background_object(create_ferriswheelbase2_1644(3584, 944), 3);
    add_background_object(create_ferriswheelbase2_1644(3584, 976), 3);
    add_background_object(create_ferriswheelbase2_1644(3152, 848), 3);
    add_background_object(create_ferriswheelbase2_1644(3152, 880), 3);
    add_background_object(create_ferriswheelbase2_1644(3216, 848), 3);
    add_background_object(create_ferriswheelbase2_1644(3216, 880), 3);
    add_background_object(create_fnfloor12_1659(4896, 696), 3);
    add_background_object(create_poster1_1712(2144, 1344), 3);
    add_background_object(create_poster2_1713(3544, 160), 3);
    add_background_object(create_fnbackwall6_1648(4352, 944), 3);
    add_background_object(create_fnbackwall6_1648(4480, 944), 3);
    add_background_object(create_fnbackwall6_1648(4608, 944), 3);
    add_background_object(create_fnbackwall6_1648(4736, 944), 3);
    add_background_object(create_fnbackwall6_1648(4864, 944), 3);
    add_background_object(create_fnbackwall6_1648(4992, 944), 3);
    add_background_object(create_fnfloor10_1692(4336, 944), 3);
    add_background_object(create_fnfloor14_1660(4336, 944), 3);
    add_background_object(create_fnfloor17_1661(4096, 1032), 3);
    add_background_object(create_fnfloor8_1649(4352, 1136), 3);
    add_background_object(create_fnfloor8_1649(4480, 1136), 3);
    add_background_object(create_fnfloor8_1649(4608, 1136), 3);
    add_background_object(create_fnfloor8_1649(4736, 1136), 3);
    add_background_object(create_fnfloor12_1659(4352, 1136), 3);
    add_background_object(create_fnfloor12_1659(4480, 1136), 3);
    add_background_object(create_fnfloor12_1659(4608, 1136), 3);
    add_background_object(create_fnfloor12_1659(4736, 1136), 3);
    add_background_object(create_fnbackwall6_1648(4352, 1040), 3);
    add_background_object(create_fnbackwall6_1648(4480, 1040), 3);
    add_background_object(create_fnbackwall6_1648(4608, 1040), 3);
    add_background_object(create_fnbackwall6_1648(4736, 1040), 3);
    add_background_object(create_fnbackwall6_1648(4864, 1040), 3);
    add_background_object(create_fnbackwall6_1648(4992, 1040), 3);
    add_background_object(create_ferriswheelbase2_1644(2944, 1424), 3);
    add_background_object(create_ferriswheelbase2_1644(3040, 1424), 3);
    add_background_object(create_fnfloor12_1659(2944, 1424), 3);
    add_background_object(create_fnfloor14_1660(3056, 1424), 3);
    add_background_object(create_fnfloor17_1661(2944, 1440), 3);
    add_background_object(create_ferriswheelbase2_1644(3040, 1488), 3);
    add_background_object(create_ferriswheelbase2_1644(3040, 1552), 3);
    add_background_object(create_fnfloor13_1691(2944, 1424), 3);
    add_background_object(create_ferriswheelbase2_1644(2944, 1488), 3);
    add_background_object(create_ferriswheelbase2_1644(2944, 1552), 3);
    add_background_object(create_fnfloor9_1688(4352, 1136), 3);
    add_background_object(create_fnfloor13_1691(4352, 1136), 3);
    add_background_object(create_fnfloor15_1693(4864, 1136), 3);
    add_background_object(create_fnbackwall1_1645(4992, 1136), 3);
    add_background_object(create_fnbackwall4_1647(5120, 944), 3);
    add_background_object(create_fnbackwall3_1663(5120, 1040), 3);
    add_background_object(create_fnbackwall4_1647(5120, 1136), 3);
    add_background_object(create_fnfloor8_1649(4864, 1232), 3);
    add_background_object(create_fnfloor16_1694(4864, 1136), 3);
    add_background_object(create_fnfloor8_1649(4736, 1232), 3);
    add_background_object(create_fnfloor8_1649(4352, 1232), 3);
    add_background_object(create_fnfloor8_1649(4480, 1232), 3);
    add_background_object(create_fnfloor8_1649(4608, 1232), 3);
    add_background_object(create_fnfloor8_1649(4992, 1232), 3);
    add_background_object(create_fnfloor8_1649(5120, 1232), 3);
    add_background_object(create_fnfloor12_1659(4992, 1232), 3);
    add_background_object(create_fnfloor12_1659(5120, 1232), 3);
    add_background_object(create_fnfloor8_1649(5248, 1232), 3);
    add_background_object(create_fnfloor12_1659(5248, 1232), 3);
    add_background_object(create_fnfloor8_1649(5024, 696), 3);
    add_background_object(create_fnfloor10_1692(4080, 1040), 3);
    add_background_object(create_fnfloor10_1692(4080, 1136), 3);
    add_background_object(create_fnfloor10_1692(4080, 1232), 3);
    add_background_object(create_fnfloor8_1649(4232, 1232), 3);
    add_background_object(create_fnfloor8_1649(4136, 1232), 3);
    add_background_object(create_fnladder_1662(4096, 1232), 3);
    add_background_object(create_fnladder_1662(4096, 1264), 3);
    add_background_object(create_fnladder_1662(4096, 1296), 3);
    add_background_object(create_fnfloor24_1703(4248, 1232), 3);
    add_background_object(create_fnfloor24_1703(4248, 1280), 3);
    add_background_object(create_fnfloor12_1659(4136, 1232), 3);
    add_background_object(create_fnfloor9_1688(4136, 1232), 3);
    add_background_object(create_fnfloor13_1691(4136, 1232), 3);
    add_background_object(create_fnfloor12_1659(4232, 1232), 3);
    add_background_object(create_fnfloor10_1692(4080, 1328), 3);
    add_background_object(create_fnfloor10_1692(4080, 1424), 3);
    add_background_object(create_fnfloor8_1649(3968, 1520), 3);
    add_background_object(create_fnfloor10_1692(4080, 1520), 3);
    add_background_object(create_fnfloor8_1649(3968, 1616), 3);
    add_background_object(create_fnfloor8_1649(4096, 1616), 3);
    add_background_object(create_fnfloor12_1659(4096, 1616), 3);
    add_background_object(create_fnapartmentwall1_1655(5504, 992), 3);
    add_background_object(create_fnapartmentwall1_1655(5568, 992), 3);
    add_background_object(create_fnapartmentwall1_1655(5376, 992), 3);
    add_background_object(create_fnapartmentwall1_1655(5696, 992), 3);
    add_background_object(create_fnapartmentwall2_1677(5376, 1088), 3);
    add_background_object(create_fnapartmentwall2_1677(5632, 1088), 3);
    add_background_object(create_fnapartmentwall2_1677(5504, 1088), 3);
    add_background_object(create_fnapartmentwall3_1676(5376, 752), 3);
    add_background_object(create_fnapartmentwall3_1676(5504, 752), 3);
    add_background_object(create_fnapartmentwall3_1676(5632, 752), 3);
    add_background_object(create_fnapartmentwindow_1656(5440, 992), 3);
    add_background_object(create_fnapartmentwindow_1656(5632, 992), 3);
    add_background_object(create_fnwall21_1665(5376, 1040), 3);
    add_background_object(create_fnwall21_1665(5744, 1040), 3);
    add_background_object(create_fnapartmentwall1_1655(5504, 896), 3);
    add_background_object(create_fnapartmentwall1_1655(5568, 896), 3);
    add_background_object(create_fnapartmentwall1_1655(5376, 896), 3);
    add_background_object(create_fnapartmentwall1_1655(5696, 896), 3);
    add_background_object(create_fnapartmentwindow_1656(5440, 896), 3);
    add_background_object(create_fnapartmentwindow_1656(5632, 896), 3);
    add_background_object(create_fnapartmentwall1_1655(5504, 800), 3);
    add_background_object(create_fnapartmentwall1_1655(5568, 800), 3);
    add_background_object(create_fnapartmentwall1_1655(5376, 800), 3);
    add_background_object(create_fnapartmentwall1_1655(5696, 800), 3);
    add_background_object(create_fnapartmentwindow_1656(5440, 800), 3);
    add_background_object(create_fnapartmentwindow_1656(5632, 800), 3);
    add_background_object(create_fnwall21_1665(5744, 944), 3);
    add_background_object(create_fnwall21_1665(5376, 944), 3);
    add_background_object(create_fnwall21_1665(5744, 848), 3);
    add_background_object(create_fnwall21_1665(5376, 848), 3);
    add_background_object(create_fnwall21_1665(5744, 752), 3);
    add_background_object(create_fnwall21_1665(5376, 752), 3);
    add_background_object(create_fnfloor10_1692(5136, 696), 3);
    add_background_object(create_fnfloor12_1659(5024, 696), 3);
    add_background_object(create_fnfloor17_1661(5024, 784), 3);
    add_background_object(create_fnfloor14_1660(5136, 696), 3);
    add_background_object(create_fnfloor12_1659(5152, 696), 3);
    add_background_object(create_fnfloor14_1660(5264, 696), 3);
    add_background_object(create_fnfloor13_1691(5152, 696), 3);
    add_background_object(create_fnfloor17_1661(5152, 712), 3);
    add_background_object(create_fnfloor17_1661(4136, 1320), 3);
    add_background_object(create_fnfloor17_1661(4232, 1320), 3);
    add_background_object(create_fnfloor17_1661(4352, 1320), 3);
    add_background_object(create_fnfloor17_1661(4480, 1320), 3);
    add_background_object(create_fnfloor17_1661(4608, 1320), 3);
    add_background_object(create_fnfloor17_1661(4736, 1320), 3);
    add_background_object(create_fnfloor17_1661(4864, 1320), 3);
    add_background_object(create_fnfloor17_1661(4992, 1320), 3);
    add_background_object(create_fnfloor17_1661(5120, 1320), 3);
    add_background_object(create_fnfloor17_1661(5248, 1320), 3);
    add_background_object(create_fnfloor8_1649(5376, 1232), 3);
    add_background_object(create_fnfloor12_1659(5376, 1232), 3);
    add_background_object(create_fnfloor8_1649(5504, 1232), 3);
    add_background_object(create_fnfloor12_1659(5504, 1232), 3);
    add_background_object(create_fnfloor17_1661(5376, 1320), 3);
    add_background_object(create_fnfloor17_1661(5504, 1320), 3);
    add_background_object(create_fnfloor8_1649(5632, 1232), 3);
    add_background_object(create_fnfloor12_1659(5632, 1232), 3);
    add_background_object(create_fnfloor17_1661(5632, 1320), 3);
    add_background_object(create_fnladder_1662(4096, 1328), 3);
    add_background_object(create_fnladder_1662(4096, 1360), 3);
    add_background_object(create_ferriswheelbase2_1644(4096, 1424), 3);
    add_background_object(create_ferriswheelbase2_1644(4192, 1424), 3);
    add_background_object(create_fnfloor12_1659(4096, 1424), 3);
    add_background_object(create_fnfloor14_1660(4208, 1424), 3);
    add_background_object(create_fnfloor17_1661(4096, 1440), 3);
    add_background_object(create_ferriswheelbase2_1644(4192, 1488), 3);
    add_background_object(create_ferriswheelbase2_1644(4192, 1552), 3);
    add_background_object(create_fnfloor13_1691(4096, 1424), 3);
    add_background_object(create_ferriswheelbase2_1644(4096, 1488), 3);
    add_background_object(create_ferriswheelbase2_1644(4096, 1552), 3);
    add_background_object(create_fnsoil_1678(4224, 1648), 3);
    add_background_object(create_fnsoil_1678(4224, 1776), 3);
    add_background_object(create_fnfloor8_1649(4224, 1616), 3);
    add_background_object(create_fnfloor12_1659(4224, 1616), 3);
    add_background_object(create_ferriswheelbase2_1644(4320, 1040), 3);
    add_background_object(create_fnfloor17_1661(4224, 1032), 3);
    add_background_object(create_ferriswheelbase2_1644(4320, 1104), 3);
    add_background_object(create_ferriswheelbase2_1644(4320, 1168), 3);
    add_background_object(create_backwall2_1642(2872, 1144), 3);
    add_background_object(create_fnbackwall5_1643(2872, 1240), 3);
    add_background_object(create_fnbackwall3_1663(3256, 1240), 3);
    add_background_object(create_fnbackwall1_1645(3128, 1240), 3);
    add_background_object(create_fnbackwall6_1648(3000, 1240), 3);
    add_background_object(create_fnladder_1662(4352, 944), 3);
    add_background_object(create_fnladder_1662(4352, 976), 3);
    add_background_object(create_fnladder_1662(4352, 1008), 3);
    add_background_object(create_fnfloor8_1649(4352, 1568), 3);
    add_background_object(create_fnfloor12_1659(4352, 1568), 3);
    add_background_object(create_fnfloor13_1691(4352, 1568), 3);
    add_background_object(create_fnfloor8_1649(4352, 1664), 3);
    add_background_object(create_fnfloor10_1692(4464, 1568), 3);
    add_background_object(create_fnfloor14_1660(4464, 1568), 3);
    add_background_object(create_fnfloor8_1649(4352, 1760), 3);
    add_background_object(create_fnfloor8_1649(4352, 1856), 3);
    add_background_object(create_fnfloor8_1649(4480, 1760), 3);
    add_background_object(create_fnfloor8_1649(4480, 1856), 3);
    add_background_object(create_fnfloor8_1649(4608, 1760), 3);
    add_background_object(create_fnfloor8_1649(4608, 1856), 3);
    add_background_object(create_fnfloor10_1692(4464, 1664), 3);
    add_background_object(create_fnbackwall6_1648(4480, 1664), 3);
    add_background_object(create_fnbackwall6_1648(4608, 1664), 3);
    add_background_object(create_fnbackwall4_1647(4480, 1568), 3);
    add_background_object(create_fnbackwall1_1645(4736, 1664), 3);
    add_background_object(create_fnbackwall6_1648(4864, 1664), 3);
    add_background_object(create_backwall2_1642(4864, 1568), 3);
    add_background_object(create_fnbackwall1_1645(4992, 1568), 3);
    add_background_object(create_fnbackwall6_1648(5248, 1664), 3);
    add_background_object(create_fnbackwall4_1647(5120, 1568), 3);
    add_background_object(create_fnbackwall1_1645(5376, 1664), 3);
    add_background_object(create_fnbackwall6_1648(5504, 1664), 3);
    add_background_object(create_backwall2_1642(5504, 1568), 3);
    add_background_object(create_fnbackwall1_1645(5632, 1568), 3);
    add_background_object(create_fnbackwall6_1648(5632, 1664), 3);
    add_background_object(create_fnfloor12_1659(4608, 1760), 3);
    add_background_object(create_fnfloor12_1659(4480, 1760), 3);
    add_background_object(create_fnfloor8_1649(4736, 1760), 3);
    add_background_object(create_fnfloor8_1649(4736, 1856), 3);
    add_background_object(create_fnfloor8_1649(4864, 1760), 3);
    add_background_object(create_fnfloor8_1649(4864, 1856), 3);
    add_background_object(create_fnfloor12_1659(4864, 1760), 3);
    add_background_object(create_fnfloor12_1659(4736, 1760), 3);
    add_background_object(create_fnfloor8_1649(5120, 1760), 3);
    add_background_object(create_fnfloor8_1649(5120, 1856), 3);
    add_background_object(create_fnfloor8_1649(4992, 1760), 3);
    add_background_object(create_fnfloor8_1649(4992, 1856), 3);
    add_background_object(create_fnfloor12_1659(4992, 1760), 3);
    add_background_object(create_fnfloor16_1694(5120, 1664), 3);
    add_background_object(create_fnfloor29_1706(4480, 1664), 3);
    add_background_object(create_fnbackwall4_1647(5760, 1568), 3);
    add_background_object(create_backwall2_1642(5888, 1568), 3);
    add_background_object(create_fnbackwall6_1648(5760, 1664), 3);
    add_background_object(create_fnbackwall6_1648(5888, 1664), 3);
    add_background_object(create_fnfloor8_1649(5248, 1760), 3);
    add_background_object(create_fnfloor8_1649(5248, 1856), 3);
    add_background_object(create_fnfloor8_1649(5376, 1760), 3);
    add_background_object(create_fnfloor8_1649(5376, 1856), 3);
    add_background_object(create_fnfloor12_1659(5376, 1760), 3);
    add_background_object(create_fnfloor12_1659(5248, 1760), 3);
    add_background_object(create_fnfloor8_1649(5504, 1760), 3);
    add_background_object(create_fnfloor8_1649(5504, 1856), 3);
    add_background_object(create_fnfloor12_1659(5504, 1760), 3);
    add_background_object(create_fnfloor8_1649(5632, 1760), 3);
    add_background_object(create_fnfloor8_1649(5632, 1856), 3);
    add_background_object(create_fnfloor8_1649(5760, 1760), 3);
    add_background_object(create_fnfloor8_1649(5760, 1856), 3);
    add_background_object(create_fnfloor12_1659(5760, 1760), 3);
    add_background_object(create_fnfloor12_1659(5632, 1760), 3);
    add_background_object(create_fnfloor8_1649(5888, 1664), 3);
    add_background_object(create_fnfloor8_1649(5888, 1856), 3);
    add_background_object(create_fnfloor12_1659(5888, 1664), 3);
    add_background_object(create_fnfloor8_1649(6016, 1568), 3);
    add_background_object(create_fnfloor8_1649(6016, 1664), 3);
    add_background_object(create_fnfloor9_1688(5888, 1664), 3);
    add_background_object(create_fnfloor9_1688(6016, 1568), 3);
    add_background_object(create_fnfloor8_1649(5888, 1760), 3);
    add_background_object(create_fnfloor13_1691(5888, 1664), 3);
    add_background_object(create_fnfloor8_1649(6016, 1472), 3);
    add_background_object(create_fnfloor9_1688(6016, 1472), 3);
    add_background_object(create_fnfloor8_1649(6144, 1568), 3);
    add_background_object(create_fnfloor8_1649(6144, 1472), 3);
    add_background_object(create_fnsoil_1678(6016, 1760), 3);
    add_background_object(create_fnsoil_1678(6144, 1760), 3);
    add_background_object(create_fnfloor8_1649(6016, 1376), 3);
    add_background_object(create_fnfloor9_1688(6016, 1376), 3);
    add_background_object(create_fnfloor8_1649(6016, 1280), 3);
    add_background_object(create_fnfloor9_1688(6016, 1280), 3);
    add_background_object(create_fnfloor8_1649(6144, 1376), 3);
    add_background_object(create_fnfloor8_1649(6144, 1280), 3);
    add_background_object(create_fnfloor12_1659(6016, 1280), 3);
    add_background_object(create_fnfloor13_1691(6016, 1280), 3);
    add_background_object(create_fnfloor35_1710(6144, 1184), 3);
    add_background_object(create_fnfloor36_1711(6144, 1184), 3);
    add_background_object(create_fnfloor8_1649(6272, 1280), 3);
    add_background_object(create_fnfloor8_1649(6272, 1184), 3);
    add_background_object(create_fnfloor12_1659(6272, 1184), 3);
    add_background_object(create_fnfloor8_1649(6400, 1280), 3);
    add_background_object(create_fnfloor8_1649(6400, 1136), 3);
    add_background_object(create_fnfloor12_1659(6400, 1136), 3);
    add_background_object(create_fnfloor8_1649(5760, 1232), 3);
    add_background_object(create_fnfloor12_1659(5760, 1232), 3);
    add_background_object(create_fnfloor17_1661(5760, 1320), 3);
    add_background_object(create_fnfloor10_1692(5872, 1232), 3);
    add_background_object(create_fnfloor14_1660(5872, 1232), 3);
    add_background_object(create_fnfloor10_1692(4880, 600), 3);
    add_background_object(create_fnfloor10_1692(6128, 1664), 3);
    add_background_object(create_fnsoil_1678(6272, 1632), 3);
    add_background_object(create_fnsoil_1678(6272, 1760), 3);
    add_background_object(create_fnsoil_1678(6272, 1376), 3);
    add_background_object(create_fnsoil_1678(6272, 1504), 3);
    add_background_object(create_fnfloor10_1692(6256, 1568), 3);
    add_background_object(create_fnfloor10_1692(6256, 1472), 3);
    add_background_object(create_fnfloor10_1692(6256, 1376), 3);
    add_background_object(create_fnsoil_1678(6400, 1632), 3);
    add_background_object(create_fnsoil_1678(6400, 1760), 3);
    add_background_object(create_fnsoil_1678(6400, 1376), 3);
    add_background_object(create_fnsoil_1678(6400, 1504), 3);
    add_background_object(create_fnfloor9_1688(6400, 1136), 3);
    add_background_object(create_fnfloor13_1691(6400, 1136), 3);
    add_background_object(create_fnfloor8_1649(6528, 1280), 3);
    add_background_object(create_fnfloor8_1649(6528, 1184), 3);
    add_background_object(create_fnfloor12_1659(6528, 1184), 3);
    add_background_object(create_fnsoil_1678(6528, 1632), 3);
    add_background_object(create_fnsoil_1678(6528, 1760), 3);
    add_background_object(create_fnsoil_1678(6528, 1376), 3);
    add_background_object(create_fnsoil_1678(6528, 1504), 3);
    add_background_object(create_fnsoil_1678(6656, 1632), 3);
    add_background_object(create_fnsoil_1678(6656, 1760), 3);
    add_background_object(create_fnsoil_1678(6656, 1376), 3);
    add_background_object(create_fnsoil_1678(6656, 1504), 3);
    add_background_object(create_fnsoil_1678(6784, 1632), 3);
    add_background_object(create_fnsoil_1678(6784, 1760), 3);
    add_background_object(create_fnsoil_1678(6784, 1376), 3);
    add_background_object(create_fnsoil_1678(6784, 1504), 3);
    add_background_object(create_fnfloor8_1649(6656, 1280), 3);
    add_background_object(create_fnfloor8_1649(6656, 1184), 3);
    add_background_object(create_fnfloor12_1659(6656, 1184), 3);
    add_background_object(create_fnfloor8_1649(6784, 1280), 3);
    add_background_object(create_fnfloor8_1649(6784, 1184), 3);
    add_background_object(create_fnfloor10_1692(6512, 1136), 3);
    add_background_object(create_fnfloor8_1649(6400, 1184), 3);
    add_background_object(create_fnfloor14_1660(6512, 1136), 3);
    add_background_object(create_fnfloor8_1649(6784, 1088), 3);
    add_background_object(create_fnfloor8_1649(6784, 992), 3);
    add_background_object(create_fnsoil_1678(6912, 1632), 3);
    add_background_object(create_fnsoil_1678(6912, 1760), 3);
    add_background_object(create_fnsoil_1678(6912, 1376), 3);
    add_background_object(create_fnsoil_1678(6912, 1504), 3);
    add_background_object(create_fnfloor8_1649(6912, 1280), 3);
    add_background_object(create_fnfloor8_1649(6912, 1184), 3);
    add_background_object(create_fnfloor8_1649(6912, 1088), 3);
    add_background_object(create_fnfloor8_1649(6912, 992), 3);
    add_background_object(create_fnfloor9_1688(6784, 1088), 3);
    add_background_object(create_fnfloor9_1688(6784, 992), 3);
    add_background_object(create_verticalhalfpipe4_1809(6624, 1088), 3);
    add_background_object(create_verticalhalfpipe5_1810(6704, 992), 3);
    add_background_object(create_verticalhalfpipe6_1811(6624, 608), 3);
    add_background_object(create_fnfloor11_1690(6704, 1088), 3);
    add_background_object(create_fnfloor8_1649(6784, 896), 3);
    add_background_object(create_fnfloor8_1649(6784, 800), 3);
    add_background_object(create_fnfloor8_1649(6912, 896), 3);
    add_background_object(create_fnfloor8_1649(6912, 800), 3);
    add_background_object(create_fnfloor9_1688(6784, 896), 3);
    add_background_object(create_fnfloor9_1688(6784, 800), 3);
    add_background_object(create_verticalhalfpipe5_1810(6704, 896), 3);
    add_background_object(create_verticalhalfpipe5_1810(6704, 800), 3);
    add_background_object(create_fnfloor8_1649(6784, 704), 3);
    add_background_object(create_fnfloor8_1649(6912, 704), 3);
    add_background_object(create_fnfloor9_1688(6784, 704), 3);
    add_background_object(create_verticalhalfpipe5_1810(6704, 704), 3);
    add_background_object(create_fnfloor8_1649(6784, 608), 3);
    add_background_object(create_fnfloor8_1649(6912, 608), 3);
    add_background_object(create_fnfloor28_1685(6704, 608), 3);
    add_background_object(create_fnfloor8_1649(6784, 512), 3);
    add_background_object(create_fnfloor8_1649(6912, 512), 3);
    add_background_object(create_fnfloor8_1649(6528, 512), 3);
    add_background_object(create_fnfloor8_1649(6656, 512), 3);
    add_background_object(create_fnbackhedge_1666(6272, 1120), 3);
    add_background_object(create_fnbackhedge_1666(5760, 1168), 3);
    add_background_object(create_fnbackhedge_1666(5248, 1168), 3);
    add_background_object(create_fnfloor17_1661(6528, 592), 3);
    add_background_object(create_fnwall14_1668(6016, 1184), 3);
    add_background_object(create_fnapartmentwall2_1677(6016, 1136), 3);
    add_background_object(create_fnapartmentwall2_1677(6144, 1136), 3);
    add_background_object(create_fnapartmentwall1_1655(6016, 1040), 3);
    add_background_object(create_fnapartmentwindow_1656(6080, 1040), 3);
    add_background_object(create_fnapartmentwindow_1656(6144, 1040), 3);
    add_background_object(create_fnapartmentwall1_1655(6208, 1040), 3);
    add_background_object(create_fnapartmentwall1_1655(6016, 944), 3);
    add_background_object(create_fnapartmentwindow_1656(6080, 944), 3);
    add_background_object(create_fnapartmentwindow_1656(6144, 944), 3);
    add_background_object(create_fnapartmentwall1_1655(6208, 944), 3);
    add_background_object(create_fnapartmentwall1_1655(6016, 848), 3);
    add_background_object(create_fnapartmentwindow_1656(6080, 848), 3);
    add_background_object(create_fnapartmentwindow_1656(6144, 848), 3);
    add_background_object(create_fnapartmentwall1_1655(6208, 848), 3);
    add_background_object(create_fnapartmentwall3_1676(6016, 704), 3);
    add_background_object(create_fnapartmentwall1_1655(6016, 752), 3);
    add_background_object(create_fnapartmentwindow_1656(6080, 752), 3);
    add_background_object(create_fnapartmentwindow_1656(6144, 752), 3);
    add_background_object(create_fnapartmentwall1_1655(6208, 752), 3);
    add_background_object(create_fnapartmentwall3_1676(6144, 704), 3);
    add_background_object(create_fnwall21_1665(6016, 704), 3);
    add_background_object(create_fnwall21_1665(6016, 800), 3);
    add_background_object(create_fnwall21_1665(6016, 896), 3);
    add_background_object(create_fnwall21_1665(6016, 992), 3);
    add_background_object(create_fnwall21_1665(6016, 1088), 3);
    add_background_object(create_fnwall21_1665(6256, 704), 3);
    add_background_object(create_fnwall21_1665(6256, 800), 3);
    add_background_object(create_fnwall21_1665(6256, 896), 3);
    add_background_object(create_fnwall21_1665(6256, 992), 3);
    add_background_object(create_fnwall21_1665(6256, 1088), 3);
    add_background_object(create_fnapartmentwall3_1676(6272, 768), 3);
    add_background_object(create_fnapartmentwall1_1655(6272, 816), 3);
    add_background_object(create_fnapartmentwindow_1656(6336, 816), 3);
    add_background_object(create_fnapartmentwindow_1656(6400, 816), 3);
    add_background_object(create_fnapartmentwall1_1655(6464, 816), 3);
    add_background_object(create_fnapartmentwall3_1676(6400, 768), 3);
    add_background_object(create_fnwall21_1665(6272, 768), 3);
    add_background_object(create_fnwall21_1665(6272, 864), 3);
    add_background_object(create_fnwall21_1665(6512, 768), 3);
    add_background_object(create_fnwall21_1665(6512, 864), 3);
    add_background_object(create_fnwall21_1665(6272, 960), 3);
    add_background_object(create_fnwall21_1665(6512, 960), 3);
    add_background_object(create_fnlockedbike_1812(5376, 1200), 3);
    add_background_object(create_fnfloor8_1649(6400, 512), 3);
    add_background_object(create_fnfloor9_1688(6400, 512), 3);
    add_background_object(create_fnfloor17_1661(6400, 592), 3);
    add_background_object(create_fnbackwall5_1643(6272, 560), 3);
    add_background_object(create_floor19_1697(5128, 184), 3);
    add_background_object(create_dragonslope1_1702(5208, 256), 3);
    add_background_object(create_dragonslope1_1702(5256, 304), 3);
    add_background_object(create_floor22_1698(5304, 352), 3);
    add_background_object(create_floor37_1813(5872, 352), 3);
    add_background_object(create_floor33_1674(5952, 280), 3);
    add_background_object(create_floor19_1697(6088, 280), 3);
    add_background_object(create_floor22_1698(6168, 352), 3);
    add_background_object(create_lamppostback_1709(6400, 1056), 3);
    add_background_object(create_lamppostback_1709(6496, 1056), 3);
    add_background_object(create_lamppostback_1709(5152, 1152), 3);
    add_background_object(create_lamppostback_1709(5312, 1152), 3);
    add_background_object(create_fnfloor20_1667(6376, 364), 3);
    add_background_object(create_floor33_1674(6384, 280), 3);
    add_background_object(create_floor37_1813(6304, 352), 3);
    add_background_object(create_fnfloor20_1667(6504, 364), 3);
    add_background_object(create_fnrooftop2_1687(6520, 280), 3);
    add_background_object(create_fnfloor12_1659(6400, 512), 3);
    add_background_object(create_fnfloor13_1691(6400, 512), 3);
    add_background_object(create_fnfloor12_1659(6528, 512), 3);
    add_background_object(create_floor37_1813(5440, 352), 3);
    add_background_object(create_floor33_1674(5520, 280), 3);
    add_background_object(create_floor19_1697(5656, 280), 3);
    add_background_object(create_floor22_1698(5736, 352), 3);
    add_background_object(create_fnfloor12_1659(6656, 512), 3);
    add_background_object(create_fnfloor12_1659(6784, 512), 3);
    add_background_object(create_fnfloor12_1659(6912, 512), 3);
    add_background_object(create_fnfloor15_1693(7040, 512), 3);
    add_background_object(create_fnfloor8_1649(7040, 608), 3);
    add_background_object(create_fnfloor16_1694(7040, 512), 3);
    add_background_object(create_fnfloor15_1693(7168, 608), 3);
    add_background_object(create_fnfloor8_1649(7168, 704), 3);
    add_background_object(create_fnfloor16_1694(7168, 608), 3);
    add_background_object(create_fnfloor8_1649(7040, 704), 3);
    add_background_object(create_floor37_1813(7440, 760), 3);
    add_background_object(create_floor33_1674(7520, 688), 3);
    add_background_object(create_floor22_1698(7304, 760), 3);
    add_background_object(create_floor19_1697(7656, 688), 3);
    add_background_object(create_floor37_1813(7872, 760), 3);
    add_background_object(create_floor33_1674(7952, 688), 3);
    add_background_object(create_floor22_1698(7736, 760), 3);
    add_background_object(create_fnfloor8_1649(7168, 800), 3);
    add_background_object(create_fnfloor8_1649(7040, 800), 3);
    add_background_object(create_fnfloor10_1692(7280, 800), 3);
    add_background_object(create_fnfloor10_1692(7280, 704), 3);
    add_background_object(create_fnfloor8_1649(7168, 896), 3);
    add_background_object(create_fnfloor8_1649(7040, 896), 3);
    add_background_object(create_fnfloor10_1692(7280, 896), 3);
    add_background_object(create_fnfloor8_1649(7168, 992), 3);
    add_background_object(create_fnfloor8_1649(7040, 992), 3);
    add_background_object(create_fnfloor10_1692(7280, 992), 3);
    add_background_object(create_fnfloor8_1649(7040, 1088), 3);
    add_background_object(create_fnrooftop2_1687(8088, 688), 3);
    add_background_object(create_floor30_1707(8304, 944), 3);
    add_background_object(create_floor19_1697(7656, 936), 3);
    add_background_object(create_floor37_1813(7872, 1008), 3);
    add_background_object(create_floor33_1674(7952, 936), 3);
    add_background_object(create_floor22_1698(7736, 1008), 3);
    add_background_object(create_floor19_1697(8088, 936), 3);
    add_background_object(create_floor22_1698(8168, 1008), 3);
    add_background_object(create_floor26_1653(8392, 818), 3);
    add_background_object(create_fnfloor8_1649(8520, 408), 3);
    add_background_object(create_fnfloor9_1688(8520, 408), 3);
    add_background_object(create_fnfloor17_1661(8520, 496), 3);
    add_background_object(create_fnfloor8_1649(8520, 312), 3);
    add_background_object(create_fnfloor9_1688(8520, 312), 3);
    add_background_object(create_fnfloor8_1649(8648, 408), 3);
    add_background_object(create_fnfloor17_1661(8648, 496), 3);
    add_background_object(create_fnfloor8_1649(8648, 312), 3);
    add_background_object(create_fnfloor8_1649(8520, 216), 3);
    add_background_object(create_fnfloor9_1688(8520, 216), 3);
    add_background_object(create_fnfloor8_1649(8520, 120), 3);
    add_background_object(create_fnfloor9_1688(8520, 120), 3);
    add_background_object(create_fnfloor8_1649(8648, 216), 3);
    add_background_object(create_fnfloor8_1649(8648, 120), 3);
    add_background_object(create_fnfloor8_1649(8520, 24), 3);
    add_background_object(create_fnfloor9_1688(8520, 24), 3);
    add_background_object(create_fnfloor8_1649(8648, 24), 3);
    add_background_object(create_fnfloor8_1649(8520, -72), 3);
    add_background_object(create_fnfloor9_1688(8520, -72), 3);
    add_background_object(create_fnfloor8_1649(8648, -72), 3);
    add_background_object(create_fnfloor8_1649(8776, 408), 3);
    add_background_object(create_fnfloor17_1661(8776, 496), 3);
    add_background_object(create_fnfloor8_1649(8776, 312), 3);
    add_background_object(create_fnfloor8_1649(8776, 216), 3);
    add_background_object(create_fnfloor8_1649(8776, 120), 3);
    add_background_object(create_fnfloor8_1649(8776, 24), 3);
    add_background_object(create_fnfloor8_1649(8776, -72), 3);
    add_background_object(create_fnfloor8_1649(8904, 600), 3);
    add_background_object(create_fnfloor8_1649(8904, 312), 3);
    add_background_object(create_fnfloor8_1649(8904, 216), 3);
    add_background_object(create_fnfloor8_1649(8904, 120), 3);
    add_background_object(create_fnfloor8_1649(8904, 24), 3);
    add_background_object(create_fnfloor8_1649(8904, -72), 3);
    add_background_object(create_floor26_1653(7520, 936), 3);
    add_background_object(create_floor31_1708(7520, 1062), 3);
    add_background_object(create_fnfloor8_1649(7040, 1184), 3);
    add_background_object(create_fnfloor8_1649(7040, 1280), 3);
    add_background_object(create_fnfloor15_1693(7296, 1184), 3);
    add_background_object(create_fnfloor8_1649(7296, 1280), 3);
    add_background_object(create_fnfloor16_1694(7296, 1184), 3);
    add_background_object(create_fnfloor15_1693(7424, 1280), 3);
    add_background_object(create_fnfloor8_1649(7296, 1376), 3);
    add_background_object(create_fnfloor8_1649(7424, 1376), 3);
    add_background_object(create_fnfloor16_1694(7424, 1280), 3);
    add_background_object(create_floor25_1654(7656, 1152), 3);
    add_background_object(create_floor30_1707(7664, 1280), 3);
    add_background_object(create_fnfloor8_1649(7936, 1376), 3);
    add_background_object(create_fnfloor12_1659(7936, 1376), 3);
    add_background_object(create_fnfloor9_1688(7296, 1376), 3);
    add_background_object(create_fnfloor8_1649(8904, 408), 3);
    add_background_object(create_fnfloor8_1649(8904, 504), 3);
    add_background_object(create_fnfloor9_1688(8904, 504), 3);
    add_background_object(create_fnfloor9_1688(8904, 600), 3);
    add_background_object(create_fnfloor17_1661(8904, 688), 3);
    add_background_object(create_floor37_1813(8528, 784), 3);
    add_background_object(create_dragonslope2_1795(8608, 736), 3);
    add_background_object(create_floor33_1674(8656, 664), 3);
    add_background_object(create_floor34_1657(8824, 664), 3);
    add_background_object(create_floor34_1657(8856, 664), 3);
    add_background_object(create_fnbackwall4_1647(8408, 1024), 3);
    add_background_object(create_fnbackwall3_1663(8408, 1120), 3);
    add_background_object(create_fnbackwall1_1645(8024, 1216), 3);
    add_background_object(create_fnfloor10_1692(7152, 1088), 3);
    add_background_object(create_fnbackwall3_1663(7168, 1088), 3);
    add_background_object(create_fnbackwall4_1647(7168, 1088), 3);
    add_background_object(create_fnfloor17_1661(7168, 1080), 3);
    add_background_object(create_fnsignholder_1634(7296, 856), 3);
    add_background_object(create_fnsignholder_1634(7296, 1016), 3);
    add_background_object(create_fnfloor8_1649(7680, 1376), 3);
    add_background_object(create_fnfloor8_1649(7552, 1376), 3);
    add_background_object(create_fnfloor12_1659(7552, 1376), 3);
    add_background_object(create_fnfloor12_1659(7680, 1376), 3);
    add_background_object(create_poster1_1712(6432, 544), 3);
    add_background_object(create_fnfloor8_1649(9032, 600), 3);
    add_background_object(create_fnfloor8_1649(9032, 312), 3);
    add_background_object(create_fnfloor8_1649(9032, 216), 3);
    add_background_object(create_fnfloor8_1649(9032, 120), 3);
    add_background_object(create_fnfloor8_1649(9032, 24), 3);
    add_background_object(create_fnfloor8_1649(9032, -72), 3);
    add_background_object(create_fnfloor8_1649(9032, 408), 3);
    add_background_object(create_fnfloor8_1649(9032, 504), 3);
    add_background_object(create_fnfloor17_1661(9032, 688), 3);
    add_background_object(create_fnfloor8_1649(9160, 600), 3);
    add_background_object(create_fnfloor8_1649(9160, 312), 3);
    add_background_object(create_fnfloor8_1649(9160, 216), 3);
    add_background_object(create_fnfloor8_1649(9160, 120), 3);
    add_background_object(create_fnfloor8_1649(9160, 24), 3);
    add_background_object(create_fnfloor8_1649(9160, -72), 3);
    add_background_object(create_fnfloor8_1649(9160, 408), 3);
    add_background_object(create_fnfloor8_1649(9160, 504), 3);
    add_background_object(create_fnladder_1662(6360, 512), 3);
    add_background_object(create_fnladder_1662(6360, 544), 3);
    add_background_object(create_fnladder_1662(6360, 576), 3);
    add_background_object(create_fnladder_1662(6360, 608), 3);
    add_background_object(create_fnladder_1662(6360, 640), 3);
    add_background_object(create_fnladder_1662(6360, 672), 3);
    add_background_object(create_edgeoverlay_1805(6848, 488), 3);
    add_background_object(create_fnfloor14_1660(6632, 280), 3);
    add_background_object(create_edgeoverlay_1805(6600, 256), 3);
    add_background_object(create_fnbigsign1_1814(5496, 648), 3);
    add_background_object(create_fnbigsign2_1815(6064, 600), 3);
    add_background_object(create_fnbackwall1_1645(7168, 1184), 3);
    add_background_object(create_fnfloor10_1692(7152, 1184), 3);
    add_background_object(create_fnbackwall5_1643(7168, 1280), 3);
    add_background_object(create_fnfloor9_1688(7296, 1280), 3);
    add_background_object(create_fnfloor10_1692(7152, 1280), 3);
    add_background_object(create_fnfloor8_1649(7040, 1376), 3);
    add_background_object(create_fnfloor10_1692(7152, 1376), 3);
    add_background_object(create_fnfloor8_1649(7040, 1472), 3);
    add_background_object(create_fnfloor10_1692(7152, 1472), 3);
    add_background_object(create_fnfloor8_1649(7296, 1472), 3);
    add_background_object(create_fnfloor9_1688(7296, 1472), 3);
    add_background_object(create_fnfloor8_1649(7040, 1568), 3);
    add_background_object(create_fnfloor10_1692(7152, 1568), 3);
    add_background_object(create_fnfloor8_1649(7040, 1664), 3);
    add_background_object(create_fnfloor10_1692(7152, 1664), 3);
    add_background_object(create_fnfloor8_1649(7040, 1760), 3);
    add_background_object(create_fnfloor8_1649(7040, 1856), 3);
    add_background_object(create_fnfloor8_1649(7168, 1760), 3);
    add_background_object(create_fnfloor8_1649(7168, 1856), 3);
    add_background_object(create_fnfloor8_1649(7280, 1784), 3);
    add_background_object(create_fnfloor8_1649(7296, 1856), 3);
    add_background_object(create_fnfloor8_1649(7424, 1760), 3);
    add_background_object(create_fnfloor8_1649(7424, 1856), 3);
    add_background_object(create_fnfloor8_1649(7552, 1760), 3);
    add_background_object(create_fnfloor8_1649(7552, 1856), 3);
    add_background_object(create_fnfloor8_1649(7680, 1760), 3);
    add_background_object(create_fnfloor8_1649(7680, 1856), 3);
    add_background_object(create_fnfloor29_1706(7168, 1664), 3);
    add_background_object(create_fnfloor12_1659(7168, 1760), 3);
    add_background_object(create_fnfloor12_1659(7424, 1760), 3);
    add_background_object(create_fnfloor12_1659(7552, 1760), 3);
    add_background_object(create_fnfloor12_1659(7680, 1760), 3);
    add_background_object(create_fnfloor8_1649(7424, 1472), 3);
    add_background_object(create_fnfloor8_1649(7936, 1472), 3);
    add_background_object(create_fnfloor8_1649(7680, 1472), 3);
    add_background_object(create_fnfloor8_1649(7552, 1472), 3);
    add_background_object(create_fnbackwall5_1643(7296, 1568), 3);
    add_background_object(create_backwall2_1642(7296, 1664), 3);
    add_background_object(create_fnbackwall6_1648(7424, 1568), 3);
    add_background_object(create_fnbackwall6_1648(7424, 1664), 3);
    add_background_object(create_fnbackwall6_1648(7552, 1568), 3);
    add_background_object(create_fnbackwall6_1648(7552, 1664), 3);
    add_background_object(create_fnbackwall6_1648(7680, 1568), 3);
    add_background_object(create_fnbackwall6_1648(7680, 1664), 3);
    add_background_object(create_fnfloor8_1649(8192, 1568), 3);
    add_background_object(create_fnfloor8_1649(8192, 1664), 3);
    add_background_object(create_fnfloor8_1649(7936, 1760), 3);
    add_background_object(create_fnfloor8_1649(7936, 1856), 3);
    add_background_object(create_fnfloor8_1649(7808, 1760), 3);
    add_background_object(create_fnfloor8_1649(7808, 1856), 3);
    add_background_object(create_fnfloor12_1659(7808, 1760), 3);
    add_background_object(create_fnfloor9_1688(8192, 1664), 3);
    add_background_object(create_fnfloor9_1688(8192, 1568), 3);
    add_background_object(create_fnfloor9_1688(7936, 1472), 3);
    add_background_object(create_fnfloor9_1688(7936, 1376), 3);
    add_background_object(create_fnfloor13_1691(7936, 1376), 3);
    add_background_object(create_fnbackwall6_1648(7808, 1664), 3);
    add_background_object(create_fnbackwall4_1647(7808, 1568), 3);
    add_background_object(create_fnfloor10_1692(7792, 1472), 3);
    add_background_object(create_fnfloor10_1692(7792, 1376), 3);
    add_background_object(create_fnfloor14_1660(7792, 1376), 3);
    add_background_object(create_fnfloor17_1661(7296, 1560), 3);
    add_background_object(create_fnfloor17_1661(7424, 1560), 3);
    add_background_object(create_fnfloor17_1661(7552, 1560), 3);
    add_background_object(create_fnfloor17_1661(7680, 1560), 3);
    add_background_object(create_fnbackwall5_1643(7808, 1408), 3);
    add_background_object(create_fnladder_1662(7896, 1376), 3);
    add_background_object(create_fnladder_1662(7896, 1408), 3);
    add_background_object(create_fnladder_1662(7896, 1440), 3);
    add_background_object(create_fnladder_1662(7896, 1472), 3);
    add_background_object(create_fnladder_1662(7896, 1504), 3);
    add_background_object(create_fnladder_1662(7896, 1536), 3);
    add_background_object(create_fnladder_1662(7896, 1568), 3);
    add_background_object(create_fnladder_1662(7896, 1600), 3);
    add_background_object(create_fnladder_1662(7896, 1632), 3);
    add_background_object(create_fnladder_1662(7896, 1664), 3);
    add_background_object(create_fnfloor8_1649(8064, 1376), 3);
    add_background_object(create_fnfloor12_1659(8064, 1376), 3);
    add_background_object(create_fnfloor8_1649(8192, 1376), 3);
    add_background_object(create_fnfloor12_1659(8192, 1376), 3);
    add_background_object(create_fnfloor8_1649(8064, 1472), 3);
    add_background_object(create_fnfloor8_1649(8320, 1568), 3);
    add_background_object(create_fnfloor8_1649(8320, 1664), 3);
    add_background_object(create_fnfloor8_1649(8064, 1760), 3);
    add_background_object(create_fnfloor8_1649(8064, 1856), 3);
    add_background_object(create_fnfloor8_1649(8192, 1472), 3);
    add_background_object(create_fnfloor8_1649(8320, 1472), 3);
    add_background_object(create_fnfloor8_1649(8192, 1760), 3);
    add_background_object(create_fnfloor8_1649(8192, 1856), 3);
    add_background_object(create_fnfloor8_1649(8320, 1760), 3);
    add_background_object(create_fnfloor8_1649(8320, 1856), 3);
    add_background_object(create_fnfloor12_1659(7936, 1760), 3);
    add_background_object(create_fnfloor12_1659(8064, 1760), 3);
    add_background_object(create_fnbackwall6_1648(7936, 1664), 3);
    add_background_object(create_fnbackwall6_1648(8064, 1664), 3);
    add_background_object(create_backwall2_1642(7936, 1568), 3);
    add_background_object(create_fnbackwall6_1648(8064, 1568), 3);
    add_background_object(create_fnfloor17_1661(8064, 1560), 3);
    add_background_object(create_fnfloor17_1661(7936, 1560), 3);
    add_background_object(create_fnfloor9_1688(7296, 1232), 3);
    add_background_object(create_lamppostback_1709(7568, 1296), 3);
    add_background_object(create_fnlockedbike_1812(5352, 1200), 3);
    add_background_object(create_fnlockedbike_1812(5336, 1200), 3);
    add_background_object(create_fnfloor15_1693(8320, 1376), 3);
    add_background_object(create_fnfloor16_1694(8320, 1376), 3);
    add_background_object(create_fnfloor8_1649(8448, 1664), 3);
    add_background_object(create_fnfloor8_1649(8448, 1760), 3);
    add_background_object(create_fnfloor8_1649(8448, 1568), 3);
    add_background_object(create_fnfloor8_1649(8448, 1856), 3);
    add_background_object(create_fnfloor15_1693(8448, 1472), 3);
    add_background_object(create_fnfloor16_1694(8448, 1472), 3);
    add_background_object(create_fnfloor8_1649(8576, 1760), 3);
    add_background_object(create_fnfloor8_1649(8576, 1856), 3);
    add_background_object(create_fnfloor8_1649(8576, 1664), 3);
    add_background_object(create_fnfloor15_1693(8576, 1568), 3);
    add_background_object(create_fnfloor16_1694(8576, 1568), 3);
    add_background_object(create_fnfloor8_1649(8960, 1856), 3);
    add_background_object(create_fnfloor8_1649(9088, 1856), 3);
    add_background_object(create_fnfloor10_1692(9200, 1856), 3);
    add_background_object(create_fnfloor8_1649(10224, 1856), 3);
    add_background_object(create_fnfloor9_1688(10224, 1856), 3);
    add_background_object(create_fnfloor8_1649(10352, 1856), 3);
    add_background_object(create_fnfloor8_1649(9520, 1856), 3);
    add_background_object(create_fnfloor8_1649(9648, 1856), 3);
    add_background_object(create_fnfloor8_1649(9776, 1856), 3);
    add_background_object(create_fnfloor9_1688(9520, 1856), 3);
    add_background_object(create_fnfloor10_1692(9888, 1856), 3);
    add_background_object(create_fnfloor8_1649(8704, 1760), 3);
    add_background_object(create_fnfloor8_1649(8704, 1664), 3);
    add_background_object(create_fnfloor12_1659(8704, 1664), 3);
    add_background_object(create_fnfloor8_1649(8704, 1856), 3);
    add_background_object(create_fnfloor8_1649(8832, 1760), 3);
    add_background_object(create_fnfloor8_1649(8832, 1664), 3);
    add_background_object(create_fnfloor12_1659(8832, 1664), 3);
    add_background_object(create_fnfloor8_1649(8832, 1856), 3);
    add_background_object(create_riverbridgebase2_1807(9320, 1608), 3);
    add_background_object(create_riverbridgebase2_1807(9384, 1608), 3);
    add_background_object(create_riverbridgebase2_1807(9960, 1608), 3);
    add_background_object(create_riverbridgebase2_1807(10024, 1608), 3);
    add_background_object(create_fnbackhedge_1666(8832, 1600), 3);
    add_background_object(create_fnbackhedge_1666(8960, 1600), 3);
    add_background_object(create_fnbackhedge_1666(10352, 1600), 3);
    add_background_object(create_fnfloor8_1649(10480, 1664), 3);
    add_background_object(create_fnfloor12_1659(10480, 1664), 3);
    add_background_object(create_fnfloor8_1649(10480, 1760), 3);
    add_background_object(create_fnfloor8_1649(10480, 1856), 3);
    add_background_object(create_fnbackhedge_1666(10480, 1600), 3);
    add_background_object(create_fnfloor8_1649(10608, 1616), 3);
    add_background_object(create_fnfloor12_1659(10608, 1616), 3);
    add_background_object(create_fnfloor8_1649(10608, 1712), 3);
    add_background_object(create_fnfloor8_1649(10608, 1808), 3);
    add_background_object(create_fnbackhedge_1666(10608, 1552), 3);
    add_background_object(create_fnfloor8_1649(10736, 1568), 3);
    add_background_object(create_fnfloor12_1659(10736, 1568), 3);
    add_background_object(create_fnfloor8_1649(10736, 1664), 3);
    add_background_object(create_fnfloor8_1649(10736, 1760), 3);
    add_background_object(create_fnbackhedge_1666(10736, 1504), 3);
    add_background_object(create_fnfloor8_1649(10864, 1520), 3);
    add_background_object(create_fnfloor12_1659(10864, 1520), 3);
    add_background_object(create_fnfloor8_1649(10864, 1616), 3);
    add_background_object(create_fnfloor8_1649(10864, 1712), 3);
    add_background_object(create_fnbackhedge_1666(10864, 1456), 3);
    add_background_object(create_fnfloor8_1649(10992, 1472), 3);
    add_background_object(create_fnfloor12_1659(10992, 1472), 3);
    add_background_object(create_fnfloor8_1649(10992, 1568), 3);
    add_background_object(create_fnfloor8_1649(10992, 1664), 3);
    add_background_object(create_fnbackhedge_1666(10992, 1408), 3);
    add_background_object(create_fnfloor8_1649(10736, 1856), 3);
    add_background_object(create_fnfloor8_1649(10864, 1808), 3);
    add_background_object(create_fnfloor8_1649(10992, 1760), 3);
    add_background_object(create_fnfloor8_1649(10992, 1856), 3);
    add_background_object(create_fnfloor8_1649(11120, 1424), 3);
    add_background_object(create_fnfloor12_1659(11120, 1424), 3);
    add_background_object(create_fnfloor8_1649(11120, 1520), 3);
    add_background_object(create_fnfloor8_1649(11120, 1616), 3);
    add_background_object(create_fnbackhedge_1666(11120, 1360), 3);
    add_background_object(create_fnfloor8_1649(11120, 1712), 3);
    add_background_object(create_fnfloor8_1649(11120, 1808), 3);
    add_background_object(create_fnfloor8_1649(11248, 1376), 3);
    add_background_object(create_fnfloor12_1659(11248, 1376), 3);
    add_background_object(create_fnfloor8_1649(11248, 1424), 3);
    add_background_object(create_fnbackhedge_1666(11248, 1312), 3);
    add_background_object(create_fnfloor8_1649(11376, 1328), 3);
    add_background_object(create_fnfloor12_1659(11376, 1328), 3);
    add_background_object(create_fnfloor8_1649(11376, 1424), 3);
    add_background_object(create_fnbackhedge_1666(11376, 1264), 3);
    add_background_object(create_fnfloor8_1649(11504, 1328), 3);
    add_background_object(create_fnfloor12_1659(11504, 1328), 3);
    add_background_object(create_fnfloor8_1649(11504, 1424), 3);
    add_background_object(create_fnbackhedge_1666(11504, 1264), 3);
    add_background_object(create_fnfloor12_1659(11632, 1328), 3);
    add_background_object(create_fnstatue_1714(11400, 1216), 3);
    add_background_object(create_lamppostback_1709(10608, 1536), 3);
    add_background_object(create_lamppostback_1709(10736, 1488), 3);
    add_background_object(create_fnfloor13_1691(10608, 1616), 3);
    add_background_object(create_fnfloor13_1691(10736, 1568), 3);
    add_background_object(create_lamppostback_1709(10864, 1440), 3);
    add_background_object(create_lamppostback_1709(10992, 1392), 3);
    add_background_object(create_lamppostback_1709(11120, 1344), 3);
    add_background_object(create_lamppostback_1709(11248, 1296), 3);
    add_background_object(create_edgeoverlay_1805(10944, 1496), 3);
    add_background_object(create_edgeoverlay_1805(11200, 1400), 3);
    add_background_object(create_fnrooftop3_1658(11384, 1040), 3);
    add_background_object(create_fnfloor13_1691(10864, 1520), 3);
    add_background_object(create_fnfloor13_1691(10992, 1472), 3);
    add_background_object(create_fnfloor13_1691(11120, 1424), 3);
    add_background_object(create_fnfloor13_1691(11248, 1376), 3);
    add_background_object(create_fnfloor13_1691(11376, 1328), 3);
    add_background_object(create_bigsign3_1816(8032, 1280), 3);
    add_background_object(create_bigsign4_1817(3440, 584), 3);
    add_background_object(create_lamppostback_1709(7984, 1296), 3);
    add_background_object(create_lamppostback_1709(8208, 1296), 3);
    add_background_object(create_fnsoil_1678(11248, 1520), 3);
    add_background_object(create_fnsoil_1678(11376, 1520), 3);
    add_background_object(create_fnsoil_1678(11504, 1520), 3);
    add_background_object(create_fnsoil_1678(11248, 1648), 3);
    add_background_object(create_fnsoil_1678(11376, 1648), 3);
    add_background_object(create_fnsoil_1678(11504, 1648), 3);
    add_background_object(create_fnsoil_1678(11248, 1776), 3);
    add_background_object(create_fnsoil_1678(11376, 1776), 3);
    add_background_object(create_fnsoil_1678(11504, 1776), 3);
    add_background_object(create_fnfloor10_1692(9272, -72), 3);
    add_background_object(create_fnfloor10_1692(9272, 24), 3);
    add_background_object(create_fnfloor10_1692(9272, 120), 3);
    add_background_object(create_fnfloor10_1692(9272, 216), 3);
    add_background_object(create_fnfloor10_1692(9272, 312), 3);
    add_background_object(create_fnfloor10_1692(9272, 408), 3);
    add_background_object(create_fnfloor10_1692(9272, 504), 3);
    add_background_object(create_fnfloor10_1692(9272, 600), 3);
    add_background_object(create_fnfloor17_1661(9160, 688), 3);
    add_background_object(create_fnfloor8_1649(9160, 832), 3);
    add_background_object(create_fnfloor8_1649(9032, 832), 3);
    add_background_object(create_fnfloor9_1688(9032, 832), 3);
    add_background_object(create_fnfloor10_1692(9272, 832), 3);
    add_background_object(create_fnfloor12_1659(9032, 832), 3);
    add_background_object(create_fnfloor12_1659(9160, 832), 3);
    add_background_object(create_fnfloor13_1691(9032, 832), 3);
    add_background_object(create_fnfloor14_1660(9272, 832), 3);
    add_background_object(create_fnfloor17_1661(9032, 920), 3);
    add_background_object(create_fnfloor17_1661(9160, 920), 3);
    add_background_object(create_fnredcolumnback_1646(9040, 704), 3);
    add_background_object(create_fnredcolumnback_1646(9232, 704), 3);
    add_background_object(create_poster2_1713(8224, 1616), 3);
    add_background_object(create_fnfloor8_1649(7408, 1784), 3);
    add_background_object(create_fnfloor17_1661(7296, 1768), 3);
    add_background_object(create_fnfloor12_1659(7360, 1760), 3);
    add_object(create_minibossbulldozerdoor_1718(7643, 1747), 3);
    add_object(create_minibossbulldozer_1719(7639, 1744), 3);
    add_object(create_redspringupleft_439(5864, 1640), 3);
    add_object(create_lamppostfront_1778(1328, 1458), 3);
    add_object(create_enemytrafficle_1717(3012, 1536), 3);
    add_object(create_levelferriswheelpiece_1720(3952, 632), 3);
    add_object(create_levelferriswheelpiece_1720(3952, 632), 3);
    add_object(create_levelferriswheelpiece_1720(3952, 632), 3);
    add_object(create_levelferriswheelpiece_1720(3952, 632), 3);
    add_object(create_levelferriswheelpiece_1720(3952, 632), 3);
    add_object(create_levelferriswheelpiece_1720(3952, 632), 3);
    add_object(create_levelferriswheelpiece_1720(3952, 632), 3);
    add_object(create_levelferriswheelpiece_1720(3952, 632), 3);
    add_object(create_levelferriswheelpiece_1720(3952, 632), 3);
    add_object(create_levelferriswheelpiece_1720(3952, 632), 3);
    add_object(create_levelferriswheelpiece_1720(3952, 632), 3);
    add_object(create_levelferriswheelpiece_1720(3952, 632), 3);
    add_object(create_levelferriswheelpiece_1720(3952, 632), 3);
    add_object(create_levelferriswheelpiece_1720(3952, 632), 3);
    add_object(create_levelferriswheelpiece_1720(3952, 632), 3);
    add_object(create_levelferriswheelpiece_1720(3952, 632), 3);
    add_object(create_levelferriswheelpiece_1720(3952, 632), 3);
    add_object(create_levelferriswheelpiece_1720(3952, 632), 3);
    add_object(create_levelferriswheelpiece_1720(3952, 632), 3);
    add_object(create_levelferriswheelpiece_1720(3952, 632), 3);
    add_object(create_enemylimiter_350(-491, 114), 3);
    add_object(create_sign_351(11992, -51), 3);
    add_object(create_playerstartingpoint_358(61, 1117), 3);
    add_object(create_link_352(88, -96), 3);
    add_object(create_objectcrystal_279(-275, 82), 3);
    add_object(create_objectcodec_354(-295, 108), 3);
    add_object(create_breakablewall_1748(-160, 560), 3);
    add_object(create_shieldearth_314(-140, 348), 3);
    add_object(create_shieldflameback_315(-96, 344), 3);
    add_object(create_shieldwood_313(-148, 340), 3);
    add_object(create_shieldmagnetic_317(-132, 348), 3);
    add_object(create_shieldwater_318(-84, 348), 3);
    add_object(create_shieldflamefront_316(-100, 348), 3);
    add_object(create_monitorkeystone_562(-216, 168), 3);
    add_object(create_objectjumppad_1510(-296, 168), 3);
    add_object(create_gimmickrollingarchbase_1725(4640, 376), 3);
    add_object(create_gimmickrollingarch_1715(4768, 504), 3);
    add_object(create_gimmickclothesline2_1740(5832, 856), 3);
    add_object(create_gimmickhanginglongsensor2_1741(6008, 864), 3);
    add_object(create_gimmickhanginglongsensor2_1741(5752, 864), 3);
    add_object(create_enemycoilpiece1_1751(2240, 1328), 3);
    add_object(create_enemycoilpiece3_1752(2239, 1328), 3);
    add_object(create_enemycoilpiece2_1753(2240, 1328), 3);
    add_object(create_enemycoilpiece4_1754(2239, 1328), 3);
    add_object(create_enemycoil_1755(2240, 1328), 3);
    add_object(create_breakablefloor1_1760(7560, -104), 3);
    add_object(create_breakablefloor2_1761(7560, -152), 3);
    add_object(create_levelferriswheel1_1765(3952, 632), 3);
    add_object(create_levelferriswheel2_1766(3952, 632), 3);
    add_object(create_levelferriswheel3_1767(3952, 632), 3);
    add_object(create_levelferriswheel4_1768(3952, 632), 3);
    add_object(create_enemytrafficle1_1757(3012, 1515), 3);
    add_object(create_enemytrafficle2_1758(3012, 1539), 3);
    add_object(create_enemytrafficle3_1759(3012, 1563), 3);
    add_object(create_cameratriggerboss_424(6928, -384), 3);
    add_object(create_leveltrolleyplatform_1818(-432, 1456), 3);
    add_object(create_leveltrolleyplatform2_1819(-304, 1432), 3);
    add_object(create_yellowspringup_434(2016, 1504), 3);
    add_object(create_gimmickrollingarch2_1726(4864, 504), 3);
    add_object(create_objectfuel_528(-152, 1392), 3);
    add_object(create_lamppostfront_1778(1488, 1458), 3);
    add_object(create_lamppostfront_1778(368, 1266), 3);
    add_object(create_lamppostfront_1778(240, 1266), 3);
    add_object(create_lamppostfront_1778(112, 1266), 3);
    add_object(create_lamppostfront_1778(1968, 1458), 3);
    add_object(create_enemyflarecannon_1820(300, 1304), 3);
    add_object(create_enemyflarecannon_1820(1564, 1592), 3);
    add_object(create_effectflareburst_1788(-216, 1136), 3);
    add_object(create_enemyflarecannon_1820(1892, 1592), 3);
    add_object(create_monitorfireshield_328(1808, 1584), 3);
    add_object(create_objectpetal_302(1777, 1409), 3);
    add_object(create_objectpetal_302(1721, 1409), 3);
    add_object(create_objectpetal_302(1665, 1409), 3);
    add_object(create_pigeon_1724(2468, 1104), 3);
    add_object(create_pigeon_1724(2100, 1112), 3);
    add_object(create_pigeon_1724(2508, 1112), 3);
    add_object(create_pigeon_1724(2164, 1096), 3);
    add_object(create_lamppostfront_1778(2624, 1362), 3);
    add_object(create_signyield_1738(1440, 1520), 3);
    add_object(create_signyield_1738(2752, 1616), 3);
    add_object(create_signstop_1716(240, 1200), 3);
    add_object(create_enemyflarecannon_1820(2588, 1400), 3);
    add_object(create_redspringupleft_439(3808, 1296), 3);
    add_object(create_redspringupleft_439(3808, 1264), 3);
    add_object(create_redspringupleft_439(3808, 1232), 3);
    add_object(create_redspringupleft_439(3808, 1200), 3);
    add_object(create_redspringupleft_439(3808, 1168), 3);
    add_object(create_redspringupleft_439(3808, 1136), 3);
    add_object(create_redspringupright_438(3648, 1200), 3);
    add_object(create_redspringupright_438(3648, 1168), 3);
    add_object(create_redspringupright_438(3648, 1136), 3);
    add_object(create_redspringupright_438(3648, 1104), 3);
    add_object(create_redspringupright_438(3648, 1072), 3);
    add_object(create_redspringupright_438(3648, 1040), 3);
    add_object(create_redspringupright_438(3648, 904), 3);
    add_object(create_redspringupright_438(3648, 872), 3);
    add_object(create_redspringupright_438(3648, 840), 3);
    add_object(create_redspringupleft_439(3808, 1104), 3);
    add_object(create_redspringupleft_439(3808, 1072), 3);
    add_object(create_redspringupleft_439(3808, 1040), 3);
    add_object(create_redspringupleft_439(3808, 1008), 3);
    add_object(create_redspringupleft_439(3808, 976), 3);
    add_object(create_redspringupleft_439(3808, 944), 3);
    add_object(create_redspringupleft_439(3808, 912), 3);
    add_object(create_redspringupleft_439(3808, 880), 3);
    add_object(create_redspringupleft_439(3808, 848), 3);
    add_object(create_redspringupright_438(3648, 808), 3);
    add_object(create_redspringupright_438(3648, 776), 3);
    add_object(create_redspringupright_438(3648, 744), 3);
    add_object(create_redspringupright_438(3648, 712), 3);
    add_object(create_yellowspringup_434(3552, 1504), 3);
    add_object(create_enemylimiter_350(2109, 1330), 3);
    add_object(create_enemylimiter_350(2133, 1330), 3);
    add_object(create_enemylimiter_350(2501, 1330), 3);
    add_object(create_enemylimiter_350(2477, 1330), 3);
    add_object(create_enemycoilpiece1_1751(2424, 1192), 3);
    add_object(create_enemycoilpiece3_1752(2423, 1192), 3);
    add_object(create_enemycoilpiece2_1753(2424, 1192), 3);
    add_object(create_enemycoilpiece4_1754(2423, 1192), 3);
    add_object(create_enemycoil_1755(2424, 1188), 3);
    add_object(create_enemycoilflip_1756(2424, 1188), 3);
    add_object(create_enemylimiter_350(2509, 1202), 3);
    add_object(create_enemylimiter_350(2485, 1202), 3);
    add_object(create_enemylimiter_350(2157, 1202), 3);
    add_object(create_enemylimiter_350(2133, 1202), 3);
    add_object(create_enemycoilhead_1782(2240, 1288), 3);
    add_object(create_enemycoilhead_1782(2424, 1152), 3);
    add_object(create_lamppostfront_1778(3408, 1458), 3);
    add_object(create_lamppostfront_1778(3504, 1458), 3);
    add_object(create_gimmickverticalhalfpipe1_1821(3264, 944), 3);
    add_object(create_gimmickverticalhalfpipe4_1822(6688, 1088), 3);
    add_object(create_gimmickverticalhalfpipe3_1823(3264, 464), 3);
    add_object(create_gimmickverticalhalfpipe6_1824(6688, 608), 3);
    add_object(create_gimmickverticalhalfpipe2_1825(3264, 848), 3);
    add_object(create_gimmickverticalhalfpipe5_1826(6768, 992), 3);
    add_object(create_gimmickverticalhalfpipe2_1825(3264, 752), 3);
    add_object(create_gimmickverticalhalfpipe2_1825(3264, 656), 3);
    add_object(create_gimmickverticalhalfpipe2_1825(3264, 560), 3);
    add_object(create_objectcodec_354(2304, 981), 3);
    add_object(create_monitorwoodshield_325(3064, 1152), 3);
    add_object(create_objectcrystal_279(2277, 970), 3);
    add_object(create_objectcrystal_279(2333, 970), 3);
    add_object(create_objectcrystal_279(2293, 954), 3);
    add_object(create_objectcrystal_279(2317, 954), 3);
    add_object(create_objectcrystal_279(2277, 994), 3);
    add_object(create_objectcrystal_279(2333, 994), 3);
    add_object(create_objectcrystal_279(2293, 1010), 3);
    add_object(create_objectcrystal_279(2317, 1010), 3);
    add_object(create_pigeon_1724(3592, 1392), 3);
    add_object(create_pigeon_1724(3605, 1392), 3);
    add_object(create_levelferriswheelpiece_1720(4080, 408), 3);
    add_object(create_levelferriswheelpiece_1720(4080, 408), 3);
    add_object(create_levelferriswheelpiece_1720(4080, 408), 3);
    add_object(create_levelferriswheelpiece_1720(4080, 408), 3);
    add_object(create_levelferriswheelpiece_1720(4080, 408), 3);
    add_object(create_levelferriswheelpiece_1720(4080, 408), 3);
    add_object(create_levelferriswheelpiece_1720(4080, 408), 3);
    add_object(create_levelferriswheelpiece_1720(4080, 408), 3);
    add_object(create_levelferriswheelpiece_1720(4080, 408), 3);
    add_object(create_levelferriswheelpiece_1720(4080, 408), 3);
    add_object(create_levelferriswheelpiece_1720(4080, 408), 3);
    add_object(create_levelferriswheelpiece_1720(4080, 408), 3);
    add_object(create_levelferriswheelpiece_1720(4080, 408), 3);
    add_object(create_levelferriswheelpiece_1720(4080, 408), 3);
    add_object(create_levelferriswheelpiece_1720(4080, 408), 3);
    add_object(create_levelferriswheelpiece_1720(4080, 408), 3);
    add_object(create_levelferriswheelpiece_1720(4080, 408), 3);
    add_object(create_levelferriswheelpiece_1720(4080, 408), 3);
    add_object(create_levelferriswheelpiece_1720(4080, 408), 3);
    add_object(create_levelferriswheelpiece_1720(4080, 408), 3);
    add_object(create_levelferriswheel1_1765(4080, 408), 3);
    add_object(create_levelferriswheel2_1766(4080, 408), 3);
    add_object(create_levelferriswheel3_1767(4080, 408), 3);
    add_object(create_levelferriswheel4_1768(4080, 408), 3);
    add_object(create_monitorcrystals_324(3744, 240), 3);
    add_object(create_monitorearthshield_326(3776, 240), 3);
    add_object(create_objectcrystal_279(4621, 498), 3);
    add_object(create_objectcrystal_279(4629, 450), 3);
    add_object(create_objectcrystal_279(4653, 410), 3);
    add_object(create_objectcrystal_279(4685, 378), 3);
    add_object(create_objectcrystal_279(4725, 362), 3);
    add_object(create_enemytrafficle_1717(3884, 424), 3);
    add_object(create_enemytrafficle1_1757(3884, 403), 3);
    add_object(create_enemytrafficle2_1758(3884, 427), 3);
    add_object(create_enemytrafficle3_1759(3884, 451), 3);
    add_object(create_objectpetal_302(3497, 537), 3);
    add_object(create_objectpetal_302(3545, 537), 3);
    add_object(create_gimmickteetertotter_1827(4640, 1008), 3);
    add_object(create_gimmickteetertotter_1827(2816, 1328), 3);
    add_object(create_gimmickteetertotter_1827(5168, 936), 3);
    add_object(create_objectcodec_354(5474, 1389), 3);
    add_object(create_objectcrystal_279(4325, 922), 3);
    add_object(create_objectcrystal_279(4285, 922), 3);
    add_object(create_objectcrystal_279(4245, 922), 3);
    add_object(create_laddertop_357(4116, 1255), 3);
    add_object(create_goldplatform3_1737(5696, 744), 3);
    add_object(create_goldplatform3_1737(5632, 744), 3);
    add_object(create_goldplatform3_1737(5568, 744), 3);
    add_object(create_goldplatform3_1737(5504, 744), 3);
    add_object(create_goldplatform3_1737(5440, 744), 3);
    add_object(create_goldplatform3_1737(5376, 744), 3);
    add_object(create_goldplatform1_1735(5440, 888), 3);
    add_object(create_goldplatform1_1735(5632, 824), 3);
    add_object(create_goldplatform2_1736(5504, 856), 3);
    add_object(create_goldplatform2_1736(5568, 824), 3);
    add_object(create_gimmickboostblock_1747(4320, 1080), 3);
    add_object(create_gimmickboostblockturn_1749(4304, 1064), 3);
    add_object(create_gimmickboostblockflame_1750(4322, 1074), 3);
    add_object(create_gimmickboostblock_1747(4192, 1192), 3);
    add_object(create_gimmickboostblockturn_1749(4176, 1176), 3);
    add_object(create_gimmickboostblockflame_1750(4194, 1194), 3);
    add_object(create_objectcrystal_279(4877, 826), 3);
    add_object(create_objectcrystal_279(4909, 826), 3);
    add_object(create_objectcrystal_279(4877, 858), 3);
    add_object(create_objectcrystal_279(4909, 858), 3);
    add_object(create_objectcrystal_279(4877, 890), 3);
    add_object(create_objectcrystal_279(4909, 890), 3);
    add_object(create_monitorrings_407(4624, 1104), 3);
    add_object(create_monitorcrystals_324(2624, 1584), 3);
    add_object(create_monitorcrystals_324(2592, 1584), 3);
    add_object(create_laddertop_357(4372, 967), 3);
    add_object(create_objectcrystal_279(1413, 1250), 3);
    add_object(create_objectcrystal_279(1397, 1282), 3);
    add_object(create_objectcrystal_279(1429, 1282), 3);
    add_object(create_objectcrystal_279(1413, 1314), 3);
    add_object(create_objectcrystal_279(1357, 1250), 3);
    add_object(create_objectcrystal_279(1341, 1282), 3);
    add_object(create_objectcrystal_279(1373, 1282), 3);
    add_object(create_objectcrystal_279(1357, 1314), 3);
    add_object(create_yellowspringup_434(4320, 1600), 3);
    add_object(create_yellowspringup_434(4288, 1600), 3);
    add_object(create_redspringleft_442(5104, 1728), 3);
    add_object(create_redspringleft_442(5104, 1696), 3);
    add_object(create_redspringleft_442(5104, 1664), 3);
    add_object(create_redspringleft_442(5872, 1728), 3);
    add_object(create_redspringleft_442(5872, 1696), 3);
    add_object(create_redspringleft_442(5872, 1664), 3);
    add_object(create_enemysuperturretus_1828(4931, 1160), 3);
    add_object(create_signstop_1716(5808, 1232), 3);
    add_object(create_signstop_1716(6096, 1280), 3);
    add_object(create_enemysuperturretus_1828(4723, 648), 3);
    add_object(create_enemysuperturretus_1828(443, 1400), 3);
    add_object(create_redspringup_440(5888, 1648), 3);
    add_object(create_redspringup_440(5920, 1648), 3);
    add_object(create_redspringup_440(5952, 1648), 3);
    add_object(create_redspringup_440(5984, 1648), 3);
    add_object(create_enemysuperturretus_1828(4395, 1408), 3);
    add_object(create_enemysuperturretus_1828(4667, 1360), 3);
    add_object(create_enemysuperturretus_1828(5211, 720), 3);
    add_object(create_objectcrystal_279(4509, 178), 3);
    add_object(create_objectcrystal_279(4533, 154), 3);
    add_object(create_objectcrystal_279(4557, 130), 3);
    add_object(create_objectcrystal_279(4741, 130), 3);
    add_object(create_objectcrystal_279(4765, 154), 3);
    add_object(create_objectcrystal_279(4789, 178), 3);
    add_object(create_redspringright_441(6528, 1136), 3);
    add_object(create_gimmickverticalhalfpipe5_1826(6768, 896), 3);
    add_object(create_gimmickverticalhalfpipe5_1826(6768, 800), 3);
    add_object(create_gimmickverticalhalfpipe5_1826(6768, 704), 3);
    add_object(create_goldplatform3_1737(6016, 696), 3);
    add_object(create_goldplatform3_1737(6080, 696), 3);
    add_object(create_goldplatform3_1737(6144, 696), 3);
    add_object(create_goldplatform3_1737(6208, 696), 3);
    add_object(create_goldplatform1_1735(6080, 1032), 3);
    add_object(create_goldplatform1_1735(6144, 1032), 3);
    add_object(create_goldplatform1_1735(6080, 936), 3);
    add_object(create_goldplatform1_1735(6144, 936), 3);
    add_object(create_goldplatform1_1735(6080, 840), 3);
    add_object(create_goldplatform1_1735(6144, 840), 3);
    add_object(create_goldplatform3_1737(6272, 760), 3);
    add_object(create_goldplatform3_1737(6336, 760), 3);
    add_object(create_goldplatform3_1737(6400, 760), 3);
    add_object(create_goldplatform3_1737(6464, 760), 3);
    add_object(create_goldplatform1_1735(6336, 904), 3);
    add_object(create_goldplatform1_1735(6400, 904), 3);
    add_object(create_monitorcrystals_324(6128, 904), 3);
    add_object(create_monitorcrystals_324(6128, 808), 3);
    add_object(create_objectcrystal_279(5813, 658), 3);
    add_object(create_objectcrystal_279(5861, 634), 3);
    add_object(create_objectcrystal_279(5909, 626), 3);
    add_object(create_objectcrystal_279(5957, 626), 3);
    add_object(create_gimmickclothesline2_1740(5904, 856), 3);
    add_object(create_gimmickclothesline2_1740(5976, 856), 3);
    add_object(create_gimmickclothesline2_1740(6000, 856), 3);
    add_object(create_paperlantern_527(5768, 856), 3);
    add_object(create_paperlantern_527(3472, 936), 3);
    add_object(create_enemysuperturretus_1828(5243, 248), 3);
    add_object(create_lamppostfront_1778(6416, 1074), 3);
    add_object(create_lamppostfront_1778(6512, 1074), 3);
    add_object(create_lamppostfront_1778(5168, 1170), 3);
    add_object(create_lamppostfront_1778(5328, 1170), 3);
    add_object(create_goldplatform1_1735(5952, 1280), 3);
    add_object(create_goldplatform1_1735(5888, 1280), 3);
    add_object(create_yellowspringup_434(6272, 744), 3);
    add_object(create_yellowspringup_434(6304, 744), 3);
    add_object(create_enemysuperturretus_1828(7243, 640), 3);
    add_object(create_enemysuperturretus_1828(7387, 672), 3);
    add_object(create_redspringleft_442(8888, 632), 3);
    add_object(create_monitorcrate_409(6384, 872), 3);
    add_object(create_largesign2_1636(7320, 832), 3);
    add_object(create_laddertop_357(6380, 535), 3);
    add_object(create_enemyflarecannon_1820(6868, 488), 3);
    add_object(create_enemyflarecannon_1820(6620, 256), 3);
    add_object(create_objectcrystal_279(5757, 290), 3);
    add_object(create_objectcrystal_279(5789, 322), 3);
    add_object(create_objectcrystal_279(5821, 354), 3);
    add_object(create_objectcrystal_279(5853, 370), 3);
    add_object(create_objectcrystal_279(5893, 370), 3);
    add_object(create_objectcrystal_279(5925, 354), 3);
    add_object(create_objectcrystal_279(5957, 322), 3);
    add_object(create_objectcrystal_279(5989, 290), 3);
    add_object(create_objectcrystal_279(5325, 290), 3);
    add_object(create_objectcrystal_279(5357, 322), 3);
    add_object(create_objectcrystal_279(5389, 354), 3);
    add_object(create_objectcrystal_279(5421, 370), 3);
    add_object(create_objectcrystal_279(5461, 370), 3);
    add_object(create_objectcrystal_279(5493, 354), 3);
    add_object(create_objectcrystal_279(5525, 322), 3);
    add_object(create_objectcrystal_279(5557, 290), 3);
    add_object(create_objectcrystal_279(5845, 250), 3);
    add_object(create_objectcrystal_279(5877, 250), 3);
    add_object(create_objectcrystal_279(5909, 250), 3);
    add_object(create_yellowspringdown_437(7264, 1096), 3);
    add_object(create_yellowspringdown_437(7232, 1096), 3);
    add_object(create_yellowspringdown_437(7200, 1096), 3);
    add_object(create_yellowspringdown_437(7168, 1096), 3);
    add_object(create_laddertop_357(7916, 1399), 3);
    add_object(create_minibossbulldozerarm_1772(7647, 1720), 3);
    add_object(create_minibossbulldozerwheel1_1773(7603, 1747), 3);
    add_object(create_minibossbulldozerwheel2_1774(7680, 1752), 3);
    add_object(create_minibossbulldozerclaw_1775(7647, 1720), 3);
    add_object(create_minibosslimiter_1771(7776, 1696), 3);
    add_object(create_minibossbulldozerhitbox_1776(7647, 2064), 3);
    add_object(create_minibosslimiter_1771(7400, 1696), 3);
    add_object(create_objectchair_1779(5853, 1209), 3);
    add_object(create_objectchair_1779(4165, 1593), 3);
    add_object(create_objectchair_1779(3461, 1497), 3);
    add_object(create_objectchair_1779(165, 1177), 3);
    add_object(create_objectchair_1779(1373, 1497), 3);
    add_object(create_objectchair_1779(2565, 1593), 3);
    add_object(create_objectchair_1779(6469, 1113), 3);
    add_object(create_objectchair_1779(6341, 1161), 3);
    add_object(create_objectchair_1779(3869, 249), 3);
    add_object(create_objectchair_1779(3693, 249), 3);
    add_object(create_objectchair_1779(6605, 489), 3);
    add_object(create_objectchair_1779(6445, 489), 3);
    add_object(create_objectchair_1779(7637, 1353), 3);
    add_object(create_lamppostfront_1778(7584, 1314), 3);
    add_object(create_floatinglantern_1829(10032, 996), 3);
    add_object(create_floatinglantern_1829(10288, 996), 3);
    add_object(create_floatinglantern_1829(9064, 996), 3);
    add_object(create_floatinglantern_1829(9312, 1100), 3);
    add_object(create_floatinglantern_1829(9560, 1100), 3);
    add_object(create_floatinglantern_1829(9816, 1100), 3);
    add_object(create_floatinglantern_1829(9944, 1100), 3);
    add_object(create_floatinglantern_1829(10080, 1100), 3);
    add_object(create_floatinglantern_1829(10352, 1100), 3);
    add_object(create_floatinglantern_1829(10256, 1196), 3);
    add_object(create_floatinglantern_1829(9232, 1196), 3);
    add_object(create_floatinglantern_1829(9488, 1196), 3);
    add_object(create_floatinglantern_1829(9688, 1100), 3);
    add_object(create_floatinglantern_1829(9864, 1196), 3);
    add_object(create_floatinglantern_1829(10464, 1196), 3);
    add_object(create_floatinglantern_1829(10544, 1084), 3);
    add_object(create_floatinglantern_1829(10128, 1196), 3);
    add_object(create_floatinglantern_1829(9640, 996), 3);
    add_object(create_floatinglantern_1829(9736, 1196), 3);
    add_object(create_floatinglantern_1829(9440, 1100), 3);
    add_object(create_floatinglantern_1829(9608, 1196), 3);
    add_object(create_floatinglantern_1829(8928, 1076), 3);
    add_object(create_floatinglantern_1829(9392, 996), 3);
    add_object(create_floatinglantern_1829(10208, 1100), 3);
    add_object(create_floatinglantern_1829(10160, 996), 3);
    add_object(create_floatinglantern_1829(9896, 996), 3);
    add_object(create_floatinglantern_1829(9144, 1100), 3);
    add_object(create_floatinglantern_1829(9360, 1196), 3);
    add_object(create_floatinglantern_1829(9768, 996), 3);
    add_object(create_floatinglantern_1829(9264, 996), 3);
    add_object(create_lamppostfront_1778(10624, 1554), 3);
    add_object(create_lamppostfront_1778(10752, 1506), 3);
    add_object(create_lamppostfront_1778(10880, 1458), 3);
    add_object(create_lamppostfront_1778(11008, 1410), 3);
    add_object(create_lamppostfront_1778(11136, 1362), 3);
    add_object(create_lamppostfront_1778(11264, 1314), 3);
    add_object(create_enemyflarecannon_1820(10964, 1496), 3);
    add_object(create_enemyflarecannon_1820(11220, 1400), 3);
    add_object(create_objectcrystal_279(9533, 1530), 3);
    add_object(create_objectcrystal_279(9597, 1530), 3);
    add_object(create_objectcrystal_279(9661, 1530), 3);
    add_object(create_objectcrystal_279(9725, 1530), 3);
    add_object(create_objectcrystal_279(9789, 1530), 3);
    add_object(create_objectcrystal_279(9853, 1530), 3);
    add_object(create_objectcrystal_279(9565, 1562), 3);
    add_object(create_objectcrystal_279(9629, 1562), 3);
    add_object(create_objectcrystal_279(9693, 1562), 3);
    add_object(create_objectcrystal_279(9757, 1562), 3);
    add_object(create_objectcrystal_279(9821, 1562), 3);
    add_object(create_objectcrystal_279(9885, 1562), 3);
    add_object(create_objectcrystal_279(9533, 1594), 3);
    add_object(create_objectcrystal_279(9597, 1594), 3);
    add_object(create_objectcrystal_279(9661, 1594), 3);
    add_object(create_objectcrystal_279(9725, 1594), 3);
    add_object(create_objectcrystal_279(9789, 1594), 3);
    add_object(create_objectcrystal_279(9853, 1594), 3);
    add_object(create_floatinglantern_1829(10784, 988), 3);
    add_object(create_floatinglantern_1829(10864, 1124), 3);
    add_object(create_floatinglantern_1829(10744, 1204), 3);
    add_object(create_floatinglantern_1829(11056, 1180), 3);
    add_object(create_floatinglantern_1829(11248, 1108), 3);
    add_object(create_floatinglantern_1829(11024, 1020), 3);
    add_object(create_enemysuperturretus_1828(10211, 1528), 3);
    add_object(create_lamppostfront_1778(8000, 1314), 3);
    add_object(create_lamppostfront_1778(8224, 1314), 3);
    add_object(create_objectpetal_302(7985, 705), 3);
    add_object(create_objectpetal_302(8081, 665), 3);
    add_object(create_objectpetal_302(8193, 705), 3);
    add_object(create_objectcrystal_279(7581, 930), 3);
    add_object(create_objectcrystal_279(7549, 954), 3);
    add_object(create_objectcrystal_279(7525, 986), 3);
    add_object(create_objectcrystal_279(7509, 1026), 3);
    add_object(create_objectcrystal_279(7509, 1066), 3);
    add_object(create_objectcrystal_279(7509, 1106), 3);
    add_object(create_objectcrystal_279(7525, 1138), 3);
    add_object(create_objectcrystal_279(7549, 1170), 3);
    add_object(create_objectcrystal_279(7581, 1194), 3);
    add_object(create_floatinglantern_1829(11200, 972), 3);
    add_object(create_floatinglantern_1829(10424, 1020), 3);
    add_object(create_floatinglantern_1829(11120, 1068), 3);
    add_object(create_floatinglantern_1829(11336, 1012), 3);
    add_object(create_floatinglantern_1829(11544, 1052), 3);
    add_object(create_floatinglantern_1829(11472, 1164), 3);
    add_object(create_floatinglantern_1829(11424, 1068), 3);
    add_object(create_floatinglantern_1829(11592, 1164), 3);
    add_object(create_floatinglantern_1829(11640, 1084), 3);
    add_object(create_floatinglantern_1829(11896, 1084), 3);
    add_object(create_floatinglantern_1829(11768, 1084), 3);
    add_object(create_floatinglantern_1829(11704, 980), 3);
    add_object(create_floatinglantern_1829(11960, 980), 3);
    add_object(create_floatinglantern_1829(11816, 980), 3);
    add_object(create_floatinglantern_1829(12000, 1140), 3);
    add_object(create_floatinglantern_1829(12096, 1012), 3);
    add_object(create_floatinglantern_1829(12240, 1052), 3);
    add_object(create_floatinglantern_1829(12160, 1116), 3);
    add_object(create_floatinglantern_1829(10952, 1092), 3);
    add_object(create_floatinglantern_1829(11352, 1164), 3);
    add_object(create_floatinglantern_1829(10688, 1060), 3);
    add_object(create_floatinglantern_1829(9992, 1196), 3);
    add_object(create_floatinglantern_1829(9512, 996), 3);
    add_object(create_floatinglantern_1829(10608, 1164), 3);
    add_object(create_yellowspringupright_433(3616, 1392), 3);
    add_object(create_yellowspringupright_433(3648, 1392), 3);
    add_object(create_yellowspringupright_433(3680, 1392), 3);
    add_object(create_objectcrystal_279(8157, 1714), 3);
    add_object(create_objectcrystal_279(8157, 1666), 3);
    add_object(create_objectcrystal_279(8157, 1618), 3);
    add_object(create_objectcrystal_279(8109, 1714), 3);
    add_object(create_objectcrystal_279(8109, 1666), 3);
    add_object(create_objectcrystal_279(8109, 1618), 3);
    add_object(create_objectcrystal_279(8061, 1714), 3);
    add_object(create_objectcrystal_279(8061, 1666), 3);
    add_object(create_objectcrystal_279(8061, 1618), 3);
    add_object(create_monitor1up_410(9144, 800), 3);
    add_object(create_objectcrystal_279(9077, 778), 3);
    add_object(create_objectcrystal_279(9077, 762), 3);
    add_object(create_objectcrystal_279(9077, 746), 3);
    add_object(create_objectcrystal_279(9077, 730), 3);
    add_object(create_objectcrystal_279(9109, 778), 3);
    add_object(create_objectcrystal_279(9109, 762), 3);
    add_object(create_objectcrystal_279(9109, 746), 3);
    add_object(create_objectcrystal_279(9109, 730), 3);
    add_object(create_objectcrystal_279(9085, 746), 3);
    add_object(create_objectcrystal_279(9093, 762), 3);
    add_object(create_objectcrystal_279(9101, 770), 3);
    add_object(create_objectcrystal_279(9133, 778), 3);
    add_object(create_objectcrystal_279(9133, 762), 3);
    add_object(create_objectcrystal_279(9133, 746), 3);
    add_object(create_objectcrystal_279(9133, 730), 3);
    add_object(create_objectcrystal_279(9165, 730), 3);
    add_object(create_objectcrystal_279(9165, 778), 3);
    add_object(create_objectcrystal_279(9157, 762), 3);
    add_object(create_objectcrystal_279(9157, 746), 3);
    add_object(create_objectcrystal_279(9181, 730), 3);
    add_object(create_objectcrystal_279(9181, 778), 3);
    add_object(create_objectcrystal_279(9205, 730), 3);
    add_object(create_objectcrystal_279(9205, 778), 3);
    add_object(create_objectcrystal_279(9205, 762), 3);
    add_object(create_objectcrystal_279(9205, 746), 3);
    add_object(create_objectcrystal_279(9221, 730), 3);
    add_object(create_objectcrystal_279(9221, 778), 3);
    add_object(create_objectcrystal_279(9221, 754), 3);
    add_object(create_objectcrystal_279(9237, 730), 3);
    add_object(create_objectcrystal_279(9237, 778), 3);
    add_object(create_objectfuel_528(5444, 1220), 3);
    add_object(create_yellowspringup_434(7296, 1760), 3);
    add_object(create_yellowspringup_434(7328, 1760), 3);
    add_object(create_objectcodec_354(9714, 1357), 3);
    add_object(create_savedata_28(-104, 16), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
    add_background_object(create_riverbridge3_1830(9200, 1576), 4);
    add_background_object(create_riverbridge4_1831(10112, 1576), 4);
    add_background_object(create_riverbridge1_1832(9456, 1568), 4);
    add_background_object(create_fnfloor14_1660(9200, 1664), 4);
    add_background_object(create_fnfloor13_1691(10224, 1664), 4);
    add_background_object(create_riverbridge5_1833(10096, 1568), 4);
    add_background_object(create_riverbridge1_1832(9968, 1568), 4);
    add_background_object(create_riverbridge1_1832(9584, 1568), 4);
    add_background_object(create_riverbridge1_1832(9712, 1568), 4);
    add_background_object(create_fnfloor8_1649(4640, 504), 4);
    add_background_object(create_fnfloor12_1659(4640, 504), 4);
    add_background_object(create_fnfloor8_1649(4768, 504), 4);
    add_background_object(create_fnfloor12_1659(4768, 504), 4);
    add_background_object(create_fnfloor10_1692(4880, 504), 4);
    add_background_object(create_fnfloor14_1660(4880, 504), 4);
    add_background_object(create_teetertotteraxle_824(4624, 992), 4);
    add_background_object(create_teetertotteraxle_824(5152, 920), 4);
    add_background_object(create_fnrailing_1784(5440, 864), 4);
    add_background_object(create_fnrailingslope_1785(5504, 832), 4);
    add_background_object(create_fnrailingslope_1785(5568, 800), 4);
    add_background_object(create_fnrailing_1784(5632, 800), 4);
    add_background_object(create_fnrailing_1784(6080, 1008), 4);
    add_background_object(create_fnrailing_1784(6080, 912), 4);
    add_background_object(create_fnrailing_1784(6144, 912), 4);
    add_background_object(create_fnrailing_1784(6080, 816), 4);
    add_background_object(create_fnrailing_1784(6144, 816), 4);
    add_background_object(create_fnrailing_1784(6336, 880), 4);
    add_background_object(create_fnrailing_1784(6400, 880), 4);
    add_background_object(create_fnrailing_1784(6144, 1008), 4);
    add_background_object(create_teetertotteraxle_824(2800, 1312), 4);
    add_background_object(create_fnrooftop3_1658(6240, 280), 4);
    add_background_object(create_fnrailing_1784(5888, 1256), 4);
    add_background_object(create_fnrailing_1784(5952, 1256), 4);
    add_background_object(create_fnrooftop3_1658(7808, 688), 4);
    add_background_object(create_riverbridge1_1832(9840, 1568), 4);
    add_background_object(create_riverbridge1_1832(9328, 1568), 4);
    add_object(create_paperlantern_527(6608, 600), 4);
    add_object(create_paperlantern_527(6544, 600), 4);
    add_object(create_paperlantern_527(6416, 600), 4);
    add_object(create_pigeon_1724(6292, 320), 4);
    add_object(create_pigeon_1724(6316, 329), 4);
    add_object(create_pigeon_1724(6348, 334), 4);
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
    add_object(create_playerskinmillatail_381(-83, 273), 5);
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
    add_object(create_hazardspikesup_1769(-208, 392), 5);
    add_object(create_hazardspikesdown_960(-168, 392), 5);
    add_object(create_hazardspikesleft_959(-128, 392), 5);
    add_object(create_hazardspikesright_961(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(7232, -113), 5);
    add_object(create_cameralimitbossleft_421(7032, -248), 5);
    add_object(create_cameralimitbossright_422(7383, -248), 5);
    add_object(create_cameralimitbosstop_423(7216, -368), 5);
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
    add_object(create_layerchangeswitch2_1239(-328, -8), 5);
    add_object(create_objectbike_322(-216, 320), 5);
    add_object(create_playerreflect_447(-72, 232), 5);
    add_object(create_playerdig_448(-56, 242), 5);
    add_object(create_playerskintorquearm_449(-88, 224), 5);
    add_object(create_playerskintorque_450(-68, 273), 5);
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_mapdata_30(-432, 232), 5);
    add_object(create_windowcontrol_27(-432, 200), 5);
    add_object(create_recorddata_34(-432, 248), 5);
    add_object(create_guiicon_452(135, 12), 6);
    add_object(create_guiscoretimerings_451(8, 8), 6);
    add_object(create_guikeystone_455(272, -64), 6);
    add_object(create_guienergy_124(16, 10), 6);
    add_object(create_guitimermilli_360(309, 19), 6);
    add_object(create_guicrystal_121(206, 19), 6);
    add_object(create_guitimermilli2_361(299, 19), 6);
    add_object(create_guitimers_362(283, 19), 6);
    add_object(create_guitimers2_363(273, 19), 6);
    add_object(create_guitimerm_364(257, 19), 6);
    add_object(create_guitimerm2_365(247, 19), 6);
    add_object(create_guirings_122(8, 19), 6);
    add_object(create_guilives_454(164, 19), 6);
    add_object(create_guipause_453(0, 101), 6);
    add_object(create_guikeystone_455(256, -64), 6);
    add_object(create_guikeystone_455(240, -64), 6);
    add_object(create_guikeystone_455(224, -64), 6);
    add_object(create_guikeystone_455(208, -64), 6);
    add_object(create_crystal_456(-53, 141), 6);
    add_object(create_guipowercard_457(91, 7), 6);
    add_object(create_guipowercard_457(75, 7), 6);
    add_object(create_guipowercard_457(59, 7), 6);
    add_object(create_guipowercard_457(43, 7), 6);
    add_object(create_guipowercard_457(27, 7), 6);
    add_object(create_guitimer_564(216, 0), 6);
    add_object(create_timebonustotal_460(-256, -72), 7);
    add_object(create_levelcardfade_461(0, 0), 7);
    add_object(create_levelcardfade2_24(-328, -336), 7);
    add_object(create_levelcardintro1_464(16, -240), 7);
    add_object(create_levelcardintro2_761(0, 248), 7);
    add_object(create_levelcardintro3_760(0, 248), 7);
    add_object(create_levelcardgameover_462(0, 256), 7);
    add_object(create_guilifebasemeter_125(0, 0), 7);
    loop_itm_running = false;
    loop_itm_index = 0;
    loop_sound_kick1_running = false;
    loop_sound_kick1_index = 0;
    loop_process_call_unqueue_music_running = false;
    loop_process_call_unqueue_music_index = 0;
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
    loop_bdfloor_running = false;
    loop_bdfloor_index = 0;
    loop_iterate_pushables_running = false;
    loop_iterate_pushables_index = 0;
    loop_death_running = false;
    loop_death_index = 0;
    loop_lamp_running = false;
    loop_lamp_index = 0;
    loop_cutscene_end_running = false;
    loop_cutscene_end_index = 0;
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
    loop_process_call_resume_music_running = false;
    loop_process_call_resume_music_index = 0;
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
    loop_sound_kick0_running = false;
    loop_sound_kick0_index = 0;
    loop_player01_interruption_control_running = false;
    loop_player01_interruption_control_index = 0;
    loop_color_dots_running = false;
    loop_color_dots_index = 0;
    loop_player01up_running = false;
    loop_player01up_index = 0;
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
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_30, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_30, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_30, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_30, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_30, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_30, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_30, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_30, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_30, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_30, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_30, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_30, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_30, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_30, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_30, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_30, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_30, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_30, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_30, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_30, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_30, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_30, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_30, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_30, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_30, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_30, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_30, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_30, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_30, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_30, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_30, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_30, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_30, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_30, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_30, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_30, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_30, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_30, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_30, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_30, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_30, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_30, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_30, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_30, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_30, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_1388_13 = loop_count;
    not_always_44_13 = loop_count;
    not_always_1400_30 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    not_always_1364_14 = loop_count;
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
    not_always_1457_13 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    not_always_1425_13 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    once_condition_138_0 = false;
    not_always_68_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    not_always_1149_14 = loop_count;
    not_always_1037_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    once_condition_36_13 = false;
    group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_1407_30 = loop_count;
    not_always_43_13 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_1405_30 = loop_count;
    not_always_121_0 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1404_30 = loop_count;
    not_always_1033_13 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    not_always_600_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
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
    not_always_1550_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    not_always_308_13 = loop_count;
    not_always_1401_30 = loop_count;
    group_sound_events_milla_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_46_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    not_always_1406_30 = loop_count;
    not_always_1832_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = true;
    not_always_53_13 = loop_count;
    not_always_98_0 = loop_count;
    not_always_172_8 = loop_count;
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
    not_always_1455_13 = loop_count;
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
    not_always_1458_13 = loop_count;
    not_always_558_13 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    not_always_1643_21 = loop_count;
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
    not_always_101_0 = loop_count;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_1399_30 = loop_count;
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
    group_main_engine_level_specific_methods_floating_lanterns_1 = false;
    not_always_1052_13 = loop_count;
    not_always_70_13 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    once_condition_63_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_174_8 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    once_condition_66_13 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    not_always_69_13 = loop_count;
    once_condition_1675_30 = false;
    not_always_1039_13 = loop_count;
    not_always_95_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    once_condition_59_14 = false;
    not_always_809_13 = loop_count;
    once_condition_48_13 = false;
    not_always_1402_30 = loop_count;
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
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    not_always_100_0 = loop_count;
    not_always_103_0 = loop_count;
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
    not_always_1403_30 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_7064()
{
    // event 1530_31
    {
        if (!(group_main_engine_1)) goto event_1530_31_end;
        gimmickdragontunnelhead_1638_instances.clear_selection();
        for (ObjectIterator it(gimmickdragontunnelhead_1638_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (loop_dt_index))) { it.deselect(); continue; }
        }
        if (!gimmickdragontunnelhead_1638_instances.has_selection()) goto event_1530_31_end;
        gimmickdragontunnel1_1845_instances.clear_selection();
        for (ObjectIterator it(gimmickdragontunnel1_1845_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (((Active*)get_single(gimmickdragontunnelhead_1638_instances, default_active_instance))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!gimmickdragontunnel1_1845_instances.has_selection()) goto event_1530_31_end;
        for (ObjectIterator it(gimmickdragontunnelhead_1638_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(gimmickdragontunnel1_1845_instances, it.current_index));
            if (parent == NULL) goto pos_end_1530_31_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1530_31_0: ;
        }
        for (ObjectIterator it(gimmickdragontunnelhead_1638_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_single(gimmickdragontunnel1_1845_instances, it.current_index, default_active_instance))->alterables->values.get(4)-90)*30, 0);
        }
    }
    event_1530_31_end: ;
}
void Frames::loop_dt_31()
{
    event_func_7064();
}
void Frames::event_func_7065()
{
    // event 1824_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_bossinitiate_lilac_1)) goto event_1824_31_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1824_31_end: ;
}
void Frames::event_func_7066()
{
    // event 1830_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_bossinitiate_carol_1)) goto event_1830_31_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1830_31_end: ;
}
void Frames::loop_trigger_deactivate_boss_31()
{
    event_func_7065();
    event_func_7066();
}
void Frames::event_func_7067()
{
    // event 2271_31
    {
        if (!(group_main_engine_1)) goto event_2271_31_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_stage3c_ogg_150, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_2271_31_end: ;
}
void Frames::loop_play_music_6_31()
{
    event_func_7067();
}
void Frames::event_func_7068()
{
    // event 1719_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_voice_acting_1)) goto event_1719_31_end;
        if (!((global_values->get(26)) == (0))) goto event_1719_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(8)) == (0))) goto event_1719_31_end;
        media.play(str_data_voices_88+global_strings->get(11)+str__89+mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 6, 2)+str__89+mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 6, 8)+str_ogg_90, 20-1);
    }
    event_1719_31_end: ;
}
void Frames::event_func_7069()
{
    // event 1720_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_voice_acting_1)) goto event_1720_31_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(9, 0);
    }
    event_1720_31_end: ;
}
void Frames::event_func_7070()
{
    // event 1721_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_voice_acting_1)) goto event_1721_31_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)) < (6))) goto event_1721_31_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(9, 1);
    }
    event_1721_31_end: ;
}
void Frames::event_func_7071()
{
    // event 1757_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1)) goto event_1757_31_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, string_to_number(mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 3, 2)));
    }
    event_1757_31_end: ;
}
void Frames::loop_voice_31()
{
    event_func_7068();
    event_func_7069();
    event_func_7070();
    event_func_7071();
}
void Frames::event_func_7072()
{
    // event 2061_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_defeated_1)) goto event_2061_31_end;
        FrameObject * single_instance_2061_31_0; single_instance_2061_31_0 = NULL;
        // select single: true false false
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator p_it(minibosssamu_1876_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibosssamudebris_1837(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2061_31_0 == NULL)
                    single_instance_2061_31_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2061_31_0))->force_frame(loop_samu_index);
        ((Active*)((Active*)single_instance_2061_31_0))->set_direction(12-loop_samu_index*2);
    }
    event_2061_31_end: ;
}
void Frames::loop_samu_31()
{
    event_func_7072();
}
void Frames::event_func_7073()
{
    // event 1835_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1835_31_end;
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1 = false;
    
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 = false;
    
            group_main_engine_level_specific_methods_bosses_boss_serpentine_dual_crash_1 = false;
    
            group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1 = false;
    
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(6, 0);
        bosschargeglow_1865_instances.clear_selection();
        for (ObjectIterator it(bosschargeglow_1865_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(-128, 0);
            pos_end_1835_31_0: ;
        }
            group_main_engine_level_specific_methods_bosses_boss_serpentine_missile_1 = false;
    
    }
    event_1835_31_end: ;
}
void Frames::loop_boss_action_31()
{
    event_func_7073();
}
void Frames::loop_wrapper_sound_hurt1_31(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_31(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_31(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_31(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_31(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_31(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_process_call_resume_music_31(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_sound_idle7_31(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_31(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_13();
}
void Frames::loop_wrapper_sound_dig2_31(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_31(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_31(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_31(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_sound_explode5_31(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_31(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_process_call_unlock_music_31(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_31(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_sound_explode8_31(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_process_call_reset_music_31(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_31(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_31(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_31(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
