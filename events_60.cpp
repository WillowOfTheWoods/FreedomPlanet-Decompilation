#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_4980()
{
    // event 1578_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1578_23_end;
        bossgiantboulder_1087_instances.clear_selection();
        breakablerock2_1007_instances.clear_selection();
        if (!check_overlap(bossgiantboulder_1087_instances, breakablerock2_1007_instances)) goto event_1578_23_end;
        for (ObjectIterator it(breakablerock2_1007_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(2)+1);
            ((Active*)*it)->alterables->values.set(24, -8+randrange(12));
        }
    }
    event_1578_23_end: ;
}
void Frames::event_func_4981()
{
    // event 1579_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1579_23_end;
        breakable1_1079_instances.clear_selection();
        bossgiantboulder_1087_instances.clear_selection();
        if (!check_overlap(breakable1_1079_instances, bossgiantboulder_1087_instances)) goto event_1579_23_end;
        for (ObjectIterator it(breakable1_1079_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(bossgiantboulder_1087_instances))->get_x()+30))) { it.deselect(); continue; }
        }
        if (!breakable1_1079_instances.has_selection()) goto event_1579_23_end;
        for (ObjectIterator it(breakable1_1079_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(2)+1);
            ((Active*)*it)->alterables->values.set(24, -8+randrange(8));
        }
    }
    event_1579_23_end: ;
}
void Frames::event_func_4982()
{
    // event 1580_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1580_23_end;
        breakable2_1078_instances.clear_selection();
        bossgiantboulder_1087_instances.clear_selection();
        if (!check_overlap(breakable2_1078_instances, bossgiantboulder_1087_instances)) goto event_1580_23_end;
        for (ObjectIterator it(breakable2_1078_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(bossgiantboulder_1087_instances))->get_x()+100))) { it.deselect(); continue; }
        }
        if (!breakable2_1078_instances.has_selection()) goto event_1580_23_end;
        for (ObjectIterator it(breakable2_1078_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(2)+1);
            ((Active*)*it)->alterables->values.set(24, -8+randrange(8));
        }
    }
    event_1580_23_end: ;
}
void Frames::event_func_4983()
{
    // event 1581_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1581_23_end;
        breakable3_1080_instances.clear_selection();
        bossgiantboulder_1087_instances.clear_selection();
        if (!check_overlap(breakable3_1080_instances, bossgiantboulder_1087_instances)) goto event_1581_23_end;
        for (ObjectIterator it(breakable3_1080_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(bossgiantboulder_1087_instances))->get_x()+30))) { it.deselect(); continue; }
        }
        if (!breakable3_1080_instances.has_selection()) goto event_1581_23_end;
        for (ObjectIterator it(breakable3_1080_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(2)+1);
            ((Active*)*it)->alterables->values.set(24, -8+randrange(8));
        }
    }
    event_1581_23_end: ;
}
void Frames::event_func_4984()
{
    // event 1582_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1582_23_end;
        bossgiantboulder_1087_instances.clear_selection();
        enemydragonfly_944_instances.clear_selection();
        if (!check_overlap(bossgiantboulder_1087_instances, enemydragonfly_944_instances)) goto event_1582_23_end;
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!enemydragonfly_944_instances.has_selection()) goto event_1582_23_end;
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(2)+3);
            ((Active*)*it)->alterables->values.set(24, -8+randrange(12));
        }
    }
    event_1582_23_end: ;
}
void Frames::event_func_4985()
{
    // event 1583_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1583_23_end;
        bossgiantboulder_1087_instances.clear_selection();
        enemyturretus_938_instances.clear_selection();
        if (!check_overlap(bossgiantboulder_1087_instances, enemyturretus_938_instances)) goto event_1583_23_end;
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!enemyturretus_938_instances.has_selection()) goto event_1583_23_end;
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(2)+3);
            ((Active*)*it)->alterables->values.set(24, -8+randrange(12));
        }
    }
    event_1583_23_end: ;
}
void Frames::event_func_4986()
{
    // event 1584_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1584_23_end;
        breakable1_1079_instances.clear_selection();
        for (ObjectIterator it(breakable1_1079_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!breakable1_1079_instances.has_selection()) goto event_1584_23_end;
        breakabledebris1_1066_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(breakable1_1079_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakabledebris1_1066(parent->x + 40, parent->y + 0), parent->layer);
                breakabledebris1_1066_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakabledebris1_1066(parent->x + 56, parent->y + 0), parent->layer);
                breakabledebris1_1066_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakabledebris1_1066(parent->x + 72, parent->y + 0), parent->layer);
                breakabledebris1_1066_instances.add_back();
            }
        }
        for (ObjectIterator it(breakabledebris1_1066_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 8.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(1, -4.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, 0.3);
            ((Active*)*it)->move_back();
        }
    }
    event_1584_23_end: ;
}
void Frames::event_func_4987()
{
    // event 1585_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1585_23_end;
        breakable1_1079_instances.clear_selection();
        for (ObjectIterator it(breakable1_1079_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!breakable1_1079_instances.has_selection()) goto event_1585_23_end;
        breakabledebris1_1066_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(breakable1_1079_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakabledebris1_1066(parent->x + 40, parent->y + 0), parent->layer);
                breakabledebris1_1066_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakabledebris1_1066(parent->x + 56, parent->y + 0), parent->layer);
                breakabledebris1_1066_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakabledebris1_1066(parent->x + 72, parent->y + 0), parent->layer);
                breakabledebris1_1066_instances.add_back();
            }
        }
        for (ObjectIterator it(breakabledebris1_1066_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 8.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(1, -4.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, 0.3);
        }
        FrameObject * single_instance_1585_23_1; single_instance_1585_23_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(breakable1_1079_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 50, parent->y + 31), parent->layer);
                if (single_instance_1585_23_1 == NULL)
                    single_instance_1585_23_1 = new_obj;
            }
        }
        for (ObjectIterator it(breakabledebris1_1066_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        for (ObjectIterator it(breakabledebris1_1066_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        for (ObjectIterator it(breakable1_1079_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1585_23_end: ;
}
void Frames::event_func_4988()
{
    // event 1586_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1586_23_end;
        breakable2_1078_instances.clear_selection();
        for (ObjectIterator it(breakable2_1078_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!breakable2_1078_instances.has_selection()) goto event_1586_23_end;
        breakabledebris1_1066_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(breakable2_1078_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakabledebris1_1066(parent->x + 0, parent->y + 0), parent->layer);
                breakabledebris1_1066_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakabledebris1_1066(parent->x + 16, parent->y + 0), parent->layer);
                breakabledebris1_1066_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakabledebris1_1066(parent->x + 32, parent->y + 0), parent->layer);
                breakabledebris1_1066_instances.add_back();
            }
        }
        for (ObjectIterator it(breakabledebris1_1066_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 8.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(1, -4.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, 0.3);
            ((Active*)*it)->move_back();
        }
    }
    event_1586_23_end: ;
}
void Frames::event_func_4989()
{
    // event 1587_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1587_23_end;
        breakable2_1078_instances.clear_selection();
        for (ObjectIterator it(breakable2_1078_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!breakable2_1078_instances.has_selection()) goto event_1587_23_end;
        breakabledebris1_1066_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(breakable2_1078_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakabledebris1_1066(parent->x + 0, parent->y + 0), parent->layer);
                breakabledebris1_1066_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakabledebris1_1066(parent->x + 16, parent->y + 0), parent->layer);
                breakabledebris1_1066_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakabledebris1_1066(parent->x + 32, parent->y + 0), parent->layer);
                breakabledebris1_1066_instances.add_back();
            }
        }
        for (ObjectIterator it(breakabledebris1_1066_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 8.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(1, -4.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, 0.3);
        }
        FrameObject * single_instance_1587_23_1; single_instance_1587_23_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(breakable2_1078_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 23, parent->y + 35), parent->layer);
                if (single_instance_1587_23_1 == NULL)
                    single_instance_1587_23_1 = new_obj;
            }
        }
        for (ObjectIterator it(breakabledebris1_1066_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
            ((Active*)*it)->move_back();
        }
        for (ObjectIterator it(breakable2_1078_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_COMMON_EXPLODE2_98, -1, 1);
    }
    event_1587_23_end: ;
}
void Frames::event_func_4990()
{
    // event 1588_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1588_23_end;
        breakable3_1080_instances.clear_selection();
        for (ObjectIterator it(breakable3_1080_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!breakable3_1080_instances.has_selection()) goto event_1588_23_end;
        breakabledebris1_1066_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(breakable3_1080_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakabledebris1_1066(parent->x + 0, parent->y + 0), parent->layer);
                breakabledebris1_1066_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakabledebris1_1066(parent->x + 16, parent->y + 0), parent->layer);
                breakabledebris1_1066_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakabledebris1_1066(parent->x + 32, parent->y + 0), parent->layer);
                breakabledebris1_1066_instances.add_back();
            }
        }
        for (ObjectIterator it(breakabledebris1_1066_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 8.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(1, -4.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, 0.3);
            ((Active*)*it)->move_back();
        }
    }
    event_1588_23_end: ;
}
void Frames::event_func_4991()
{
    // event 1589_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1589_23_end;
        breakable3_1080_instances.clear_selection();
        for (ObjectIterator it(breakable3_1080_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!breakable3_1080_instances.has_selection()) goto event_1589_23_end;
        breakabledebris1_1066_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(breakable3_1080_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakabledebris1_1066(parent->x + 0, parent->y + 0), parent->layer);
                breakabledebris1_1066_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakabledebris1_1066(parent->x + 16, parent->y + 0), parent->layer);
                breakabledebris1_1066_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakabledebris1_1066(parent->x + 32, parent->y + 0), parent->layer);
                breakabledebris1_1066_instances.add_back();
            }
        }
        for (ObjectIterator it(breakabledebris1_1066_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 8.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(1, -4.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, 0.3);
        }
        FrameObject * single_instance_1589_23_1; single_instance_1589_23_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(breakable3_1080_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 31, parent->y + 36), parent->layer);
                if (single_instance_1589_23_1 == NULL)
                    single_instance_1589_23_1 = new_obj;
            }
        }
        for (ObjectIterator it(breakabledebris1_1066_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
            ((Active*)*it)->move_back();
        }
        for (ObjectIterator it(breakable3_1080_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
    }
    event_1589_23_end: ;
}
void Frames::event_func_4992()
{
    // event 1590_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1590_23_end;
        breakabledebris1_1066_instances.clear_selection();
        for (ObjectIterator it(breakabledebris1_1066_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)+((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(3)+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4));
        }
    }
    event_1590_23_end: ;
}
void Frames::event_func_4993()
{
    // event 1591_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1591_23_end;
        breakabledebris1_1066_instances.clear_selection();
        for (ObjectIterator it(breakabledebris1_1066_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (frame_bottom()+80))) { it.deselect(); continue; }
        }
        if (!breakabledebris1_1066_instances.has_selection()) goto event_1591_23_end;
        for (ObjectIterator it(breakabledebris1_1066_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1591_23_end: ;
}
void Frames::event_func_4994()
{
    // event 1592_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_boulder_collisions_and_speed_changes_1)) goto event_1592_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(bossgiantboulder_1087_instances))->get_x()+200))) goto event_1592_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (((Active*)get_instance(bossgiantboulder_1087_instances))->get_y()-100))) goto event_1592_23_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (1))) goto event_1592_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1592_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1592_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (48))) goto event_1592_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (get_max(7, ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(2)+1)))) goto event_1592_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1592_23_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+0.02+(1-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11))*0.15);
    }
    event_1592_23_end: ;
}
void Frames::event_func_4995()
{
    // event 1593_23
    bool or_result_1593_23 = false;
    bool or_temp_result_1593_23_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_boulder_collisions_and_speed_changes_1)) goto or_event_1593_23_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1593_23_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1593_23_0_end;
        playercharactersensor_383_instances.clear_selection();
        bossgiantboulder_1087_instances.clear_selection();
        if (!check_overlap(playercharactersensor_383_instances, bossgiantboulder_1087_instances)) goto or_event_1593_23_0_end;
        for (ObjectIterator it(bossgiantboulder_1087_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) != (8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) != (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (11))) { it.deselect(); continue; }
        }
        if (!bossgiantboulder_1087_instances.has_selection()) goto or_event_1593_23_0_end;
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) != (8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) != (48))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1593_23_0_end;
        or_result_1593_23 = true;
        or_temp_result_1593_23_0 = true;
    }
    or_event_1593_23_0_end: ;
    playerothers_123_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    playercharactersensor_383_instances.clear_saved_selection();
    bossgiantboulder_1087_instances.clear_saved_selection();
    if (or_temp_result_1593_23_0) {
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        bossgiantboulder_1087_instances.save_selection();
        playercharactersensor_383_instances.save_selection();
    }
    // event 1593_23
    bool or_temp_result_1593_23_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_boulder_collisions_and_speed_changes_1)) goto or_event_1593_23_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1593_23_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1593_23_1_end;
        playercharactersensor_383_instances.clear_selection();
        bossgiantboulder_1087_instances.clear_selection();
        if (!check_overlap(playercharactersensor_383_instances, bossgiantboulder_1087_instances)) goto or_event_1593_23_1_end;
        for (ObjectIterator it(bossgiantboulder_1087_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (9))) { it.deselect(); continue; }
        }
        if (!bossgiantboulder_1087_instances.has_selection()) goto or_event_1593_23_1_end;
        if (!((get_abs(((Active*)get_single(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(1))) < (3))) goto or_event_1593_23_1_end;
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) != (8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) != (48))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1593_23_1_end;
        or_result_1593_23 = true;
        or_temp_result_1593_23_1 = true;
        or_event_1593_23_1_end: ;
        if (or_temp_result_1593_23_1) {
            playerothers_123_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            bossgiantboulder_1087_instances.save_selection();
            playercharactersensor_383_instances.save_selection();
        }
        if (!or_result_1593_23) goto or_final_or_event_1593_23_1_end;
        bossgiantboulder_1087_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        playercharactersensor_383_instances.empty_selection();
        if (or_temp_result_1593_23_0 || or_temp_result_1593_23_1) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1593_23_0 || or_temp_result_1593_23_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1593_23_0 || or_temp_result_1593_23_1) {
            bossgiantboulder_1087_instances.restore_selection();
        }
        if (or_temp_result_1593_23_0 || or_temp_result_1593_23_1) {
            playercharactersensor_383_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(17, 1);
        }
        guilifebasemeter_125_instances.clear_selection();
        for (ObjectIterator it(guilifebasemeter_125_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 5);
        }
    }
    or_final_or_event_1593_23_1_end: ;
}
void Frames::event_func_4996()
{
    // event 1594_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_boulder_collisions_and_speed_changes_1)) goto event_1594_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (8))) goto event_1594_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(4)) < (11))) goto event_1594_23_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(2)+4);
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->flags.enable(3);
    }
    event_1594_23_end: ;
}
void Frames::event_func_4997()
{
    // event 1595_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_boulder_collisions_and_speed_changes_1)) goto event_1595_23_end;
        if (!(((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->flags.is_on(3))) goto event_1595_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1595_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1595_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (48))) goto event_1595_23_end;
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->flags.disable(3);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(2), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
    }
    event_1595_23_end: ;
}
void Frames::event_func_4998()
{
    // event 1596_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_boulder_collisions_and_speed_changes_1)) goto event_1596_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()-320))) goto event_1596_23_end;
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(2, get_max(((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(2), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
    }
    event_1596_23_end: ;
}
void Frames::event_func_4999()
{
    // event 1597_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_boulder_collisions_and_speed_changes_1)) goto event_1597_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_1597_23_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) >= (30))) goto event_1597_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (((Active*)get_instance(bossgiantboulder_1087_instances))->get_y()-64))) goto event_1597_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(bossgiantboulder_1087_instances))->get_x()+50))) goto event_1597_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1597_23_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, 0);
        media.play_id(SOUND_LILAC_COMETREBOUND_2_31, -1, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 12);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
    }
    event_1597_23_end: ;
}
void Frames::event_func_5000()
{
    // event 1598_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_boulder_collisions_and_speed_changes_1)) goto event_1598_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (((Active*)get_instance(bossgiantboulder_1087_instances))->get_y()-64))) goto event_1598_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(bossgiantboulder_1087_instances))->get_x()+50))) goto event_1598_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1598_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (48))) goto event_1598_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1598_23_end;
        if (!((((Active*)get_instance(playersensorrightbig_393_instances))->alterables->values.get(25)) == (0))) goto event_1598_23_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23), ((Active*)get_instance(bossgiantboulder_1087_instances))->get_x()+50));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(4, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
    }
    event_1598_23_end: ;
}
void Frames::event_func_5001()
{
    // event 1599_23
    bool or_result_1599_23 = false;
    bool or_temp_result_1599_23_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_boulder_collisions_and_speed_changes_1)) goto or_event_1599_23_0_end;
        player_389_instances.clear_selection();
        bossgiantboulder_1087_instances.clear_selection();
        if (!check_overlap(player_389_instances, bossgiantboulder_1087_instances)) goto or_event_1599_23_0_end;
        if (!(test_obstacle(((Active*)get_single(player_389_instances, default_active_instance))->get_x()+12, ((Active*)get_single(player_389_instances, default_active_instance))->get_y()))) goto or_event_1599_23_0_end;
        for (ObjectIterator it(bossgiantboulder_1087_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) != (8))) { it.deselect(); continue; }
        }
        if (!bossgiantboulder_1087_instances.has_selection()) goto or_event_1599_23_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) != (8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) != (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) != (48))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1599_23_0_end;
        or_result_1599_23 = true;
        or_temp_result_1599_23_0 = true;
    }
    or_event_1599_23_0_end: ;
    player_389_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    bossgiantboulder_1087_instances.clear_saved_selection();
    if (or_temp_result_1599_23_0) {
        playermovementvalues_245_instances.save_selection();
        player_389_instances.save_selection();
        bossgiantboulder_1087_instances.save_selection();
    }
    // event 1599_23
    bool or_temp_result_1599_23_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_boulder_collisions_and_speed_changes_1)) goto or_event_1599_23_1_end;
        player_389_instances.clear_selection();
        bossgiantboulder_1087_instances.clear_selection();
        if (!check_overlap(player_389_instances, bossgiantboulder_1087_instances)) goto or_event_1599_23_1_end;
        breakablerock2_1007_instances.clear_selection();
        if (!check_overlap(player_389_instances, breakablerock2_1007_instances)) goto or_event_1599_23_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) != (8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) != (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) != (48))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1599_23_1_end;
        or_result_1599_23 = true;
        or_temp_result_1599_23_1 = true;
        or_event_1599_23_1_end: ;
        breakablerock2_1007_instances.clear_saved_selection();
        if (or_temp_result_1599_23_1) {
            playermovementvalues_245_instances.save_selection();
            player_389_instances.save_selection();
            breakablerock2_1007_instances.save_selection();
            bossgiantboulder_1087_instances.save_selection();
        }
        if (!or_result_1599_23) goto or_final_or_event_1599_23_1_end;
        player_389_instances.empty_selection();
        bossgiantboulder_1087_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        breakablerock2_1007_instances.empty_selection();
        if (or_temp_result_1599_23_0 || or_temp_result_1599_23_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1599_23_0 || or_temp_result_1599_23_1) {
            player_389_instances.restore_selection();
        }
        if (or_temp_result_1599_23_1) {
            breakablerock2_1007_instances.restore_selection();
        }
        if (or_temp_result_1599_23_0 || or_temp_result_1599_23_1) {
            bossgiantboulder_1087_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(17, 1);
        }
        guirings_122_instances.clear_selection();
        for (ObjectIterator it(guirings_122_instances); !it.end(); ++it) {
            ((Counter*)*it)->set(0);
        }
        guilifebasemeter_125_instances.clear_selection();
        for (ObjectIterator it(guilifebasemeter_125_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 1);
        }
    }
    or_final_or_event_1599_23_1_end: ;
}
void Frames::event_func_5002()
{
    // event 1600_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_boulder_collisions_and_speed_changes_1)) goto event_1600_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (9))) goto event_1600_23_end;
            group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_boulder_collisions_and_speed_changes_1 = false;
    
            group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_boulder_reposition_1 = false;
    
    }
    event_1600_23_end: ;
}
void Frames::event_func_5003()
{
    // event 1601_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1)) goto event_1601_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(4)) > (0))) goto event_1601_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(4)) < (11))) goto event_1601_23_end;
        player_389_instances.clear_selection();
        bossgiantboulder_1087_instances.clear_selection();
        if (!check_overlap(player_389_instances, bossgiantboulder_1087_instances)) goto event_1601_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (9))) goto event_1601_23_end;
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
    }
    event_1601_23_end: ;
}
void Frames::event_func_5004()
{
    // event 1602_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_boulder_reposition_1)) goto event_1602_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(0)) > (frame_right()+200))) goto event_1602_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(4)) > (0))) goto event_1602_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(4)) < (11))) goto event_1602_23_end;
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(2, 14);
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->flags.enable(4);
    }
    event_1602_23_end: ;
}
void Frames::event_func_5005()
{
    // event 1603_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_boulder_reposition_1)) goto event_1603_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(4)) == (1))) goto event_1603_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(0)) > (frame_right()+200))) goto event_1603_23_end;
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(0, 672);
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(1, 2112);
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(4, 1);
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 33)), 2, 33);
    }
    event_1603_23_end: ;
}
void Frames::event_func_5006()
{
    // event 1604_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_boulder_reposition_1)) goto event_1604_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(4)) == (2))) goto event_1604_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(0)) > (frame_right()+200))) goto event_1604_23_end;
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(0, 2592);
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(1, 2240);
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(4, 1);
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 33)), 2, 33);
    }
    event_1604_23_end: ;
}
void Frames::event_func_5007()
{
    // event 1605_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_boulder_reposition_1)) goto event_1605_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(4)) == (3))) goto event_1605_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(0)) > (frame_right()+200))) goto event_1605_23_end;
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(0, 2592);
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(1, 2240);
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(4, 2);
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 33)), 2, 33);
    }
    event_1605_23_end: ;
}
void Frames::event_func_5008()
{
    // event 1606_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_boulder_reposition_1)) goto event_1606_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(4)) == (4))) goto event_1606_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(0)) > (frame_right()+200))) goto event_1606_23_end;
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.sub(4, 1);
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(0, 4320);
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(1, 2240);
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 33)), 2, 33);
    }
    event_1606_23_end: ;
}
void Frames::event_func_5009()
{
    // event 1607_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_boulder_reposition_1)) goto event_1607_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(4)) == (5))) goto event_1607_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(0)) > (frame_right()+200))) goto event_1607_23_end;
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.sub(4, 1);
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(0, 5472);
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(1, 2312);
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 33)), 2, 33);
    }
    event_1607_23_end: ;
}
void Frames::event_func_5010()
{
    // event 1608_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_boulder_reposition_1)) goto event_1608_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(4)) == (6))) goto event_1608_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(0)) > (frame_right()+200))) goto event_1608_23_end;
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.sub(4, 1);
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(0, 7072);
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(1, 2384);
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 33)), 2, 33);
    }
    event_1608_23_end: ;
}
void Frames::event_func_5011()
{
    // event 1609_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1 && group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_boulder_reposition_1)) goto event_1609_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(4)) >= (7))) goto event_1609_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(4)) <= (10))) goto event_1609_23_end;
        if (!((((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.get(0)) > (frame_right()+200))) goto event_1609_23_end;
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(0, 8480);
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(1, 2384);
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(4, 6);
        ((Active*)get_instance(bossgiantboulder_1087_instances))->alterables->values.set(7, 0);
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 33)), 2, 33);
    }
    event_1609_23_end: ;
}
void Frames::event_func_5012()
{
    // event 1610_23
    {
        if (!(group_main_engine_1)) goto event_1610_23_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1610_23_end;
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(playercharactersensor_383_instances, cameratriggerboss_424_instances)) goto event_1610_23_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 1);
        {
            loop_trigger_deactivate_boss_running = true;
            int times = int(1);
            loop_trigger_deactivate_boss_index = 0;
            while (loop_trigger_deactivate_boss_index < times) {
                loop_trigger_deactivate_boss_23();
                if (!loop_trigger_deactivate_boss_running) break;
                loop_trigger_deactivate_boss_index++;
            }
        }
        if (!group_main_engine_level_specific_methods_bosses_snake_boss_1) {
            group_main_engine_level_specific_methods_bosses_snake_boss_1 = true;
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(15, 1);
            group_main_engine_level_specific_methods_bosses_boss_checkpoint_boulder_chase_1 = false;
    
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 1);
    }
    event_1610_23_end: ;
}
void Frames::event_func_5013()
{
    // event 1612_23
    {
        if (!(group_main_engine_1)) goto event_1612_23_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(12)) == (1))) goto event_1612_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+16))) goto event_1612_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0))) goto event_1612_23_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
    }
    event_1612_23_end: ;
}
void Frames::event_func_5014()
{
    // event 1615_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1)) goto event_1615_23_end;
        if (once_condition_1615_23) goto event_1615_23_end;
        once_condition_1615_23 = true;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1615_23_end: ;
}
void Frames::event_func_5015()
{
    // event 1616_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1)) goto event_1616_23_end;
        if (once_condition_1616_23) goto event_1616_23_end;
        once_condition_1616_23 = true;
        bossgeyseroverlap1_1001_instances.clear_selection();
        spread_value(bossgeyseroverlap1_1001_instances, 0, 0);
        bossserpentinehead_948_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_bossserpentinehead_948(8968, 1797), 2);
            bossserpentinehead_948_instances.add_back();
        }
        bosssnakebody_995_instances.empty_selection();
        // select single: false true false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_bosssnakebody_995(8922, 1790), 2);
            bosssnakebody_995_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_bosssnakebody_995(8922, 1790), 2);
            bosssnakebody_995_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_bosssnakebody_995(8922, 1790), 2);
            bosssnakebody_995_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_bosssnakebody_995(8922, 1790), 2);
            bosssnakebody_995_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_bosssnakebody_995(8922, 1790), 2);
            bosssnakebody_995_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_bosssnakebody_995(8922, 1790), 2);
            bosssnakebody_995_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_bosssnakebody_995(8922, 1790), 2);
            bosssnakebody_995_instances.add_back();
        }
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        spread_value(bosssnakebody_995_instances, 7, 1);
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(get_min(1, 1.2-(((Active*)*it)->alterables->values.get(7)*0.05)));
            ((Active*)*it)->alterables->flags.enable(16);
            ((Active*)*it)->alterables->values.set(0, 4);
        }
    }
    event_1616_23_end: ;
}
void Frames::event_func_5016()
{
    // event 1617_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1)) goto event_1617_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1617_23_end;
        if (!((((Counter*)get_instance(guibosshealth_1089_instances))->value) > (0))) goto event_1617_23_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1617_23_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1617_23_end;
        playercharactersensor_383_instances.clear_selection();
        bossfireball_967_instances.clear_selection();
        if (!check_overlap(playercharactersensor_383_instances, bossfireball_967_instances)) goto event_1617_23_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, ((Active*)get_single(bossfireball_967_instances, default_active_instance))->alterables->values.get(0));
    }
    event_1617_23_end: ;
}
void Frames::event_func_5017()
{
    // event 1618_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1)) goto event_1618_23_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!objectpetal_302_instances.has_selection()) goto event_1618_23_end;
        if (!(test_obstacle(((Active*)get_single(objectpetal_302_instances, default_active_instance))->get_x(), ((Active*)get_single(objectpetal_302_instances, default_active_instance))->get_box_index(1)))) goto event_1618_23_end;
        if (!(test_obstacle(((Active*)get_single(objectpetal_302_instances, default_active_instance))->get_x(), ((Active*)get_single(objectpetal_302_instances, default_active_instance))->get_box_index(3)))) goto event_1618_23_end;
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1618_23_end: ;
}
void Frames::event_func_5018()
{
    // event 1619_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1)) goto event_1619_23_end;
        bossboulder_1064_instances.clear_selection();
        for (ObjectIterator it(bossboulder_1064_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(4), 0);
            ((Active*)*it)->alterables->values.add(4, 2);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(7));
            ((Active*)*it)->alterables->values.add(7, ((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+0.2, 8));
            ((Active*)*it)->set_layer(((Active*)*it)->alterables->values.get(5)-1);
        }
    }
    event_1619_23_end: ;
}
void Frames::event_func_5019()
{
    // event 1620_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1)) goto event_1620_23_end;
        bossboulder_1064_instances.clear_selection();
        for (ObjectIterator it(bossboulder_1064_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(cameralimitbosstop_423_instances, default_active_instance))->get_y()+100))) { it.deselect(); continue; }
        }
        if (!bossboulder_1064_instances.has_selection()) goto event_1620_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (26))) goto event_1620_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (3))) goto event_1620_23_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (5))) goto event_1620_23_end;
        for (ObjectIterator it(bossboulder_1064_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 5);
        }
    }
    event_1620_23_end: ;
}
void Frames::event_func_5020()
{
    // event 1621_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1)) goto event_1621_23_end;
        bossboulder_1064_instances.clear_selection();
        for (ObjectIterator it(bossboulder_1064_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(cameralimitbosstop_423_instances, default_active_instance))->get_y()+100))) { it.deselect(); continue; }
        }
        if (!bossboulder_1064_instances.has_selection()) goto event_1621_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_1621_23_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) <= (5))) goto event_1621_23_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (5))) goto event_1621_23_end;
        for (ObjectIterator it(bossboulder_1064_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 5);
        }
    }
    event_1621_23_end: ;
}
void Frames::event_func_5021()
{
    // event 1622_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1)) goto event_1622_23_end;
        bossboulder_1064_instances.clear_selection();
        for (ObjectIterator it(bossboulder_1064_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (7.5))) { it.deselect(); continue; }
        }
        if (!bossboulder_1064_instances.has_selection()) goto event_1622_23_end;
        for (ObjectIterator it(bossboulder_1064_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1622_23_end: ;
}
void Frames::event_func_5022()
{
    // event 1623_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1)) goto event_1623_23_end;
        bossboulder_1064_instances.clear_selection();
        for (ObjectIterator it(bossboulder_1064_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (3))) { it.deselect(); continue; }
        }
        if (!bossboulder_1064_instances.has_selection()) goto event_1623_23_end;
        for (ObjectIterator it(bossboulder_1064_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -3);
            ((Active*)*it)->alterables->flags.disable(0);
            ((Active*)*it)->alterables->values.add(6, 1);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+3, 3));
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
    }
    event_1623_23_end: ;
}
void Frames::event_func_5023()
{
    // event 1624_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1)) goto event_1624_23_end;
        bossboulder_1064_instances.clear_selection();
        for (ObjectIterator it(bossboulder_1064_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()+40))) { it.deselect(); continue; }
        }
        if (!bossboulder_1064_instances.has_selection()) goto event_1624_23_end;
        for (ObjectIterator it(bossboulder_1064_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1624_23_end: ;
}
void Frames::event_func_5024()
{
    // event 1625_23
    bool or_result_1625_23 = false;
    bool or_temp_result_1625_23_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1)) goto or_event_1625_23_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) >= (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) <= (6))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1625_23_0_end;
        or_result_1625_23 = true;
        or_temp_result_1625_23_0 = true;
    }
    or_event_1625_23_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1625_23_0) {
        playermovementvalues_245_instances.save_selection();
    }
    // event 1625_23
    bool or_temp_result_1625_23_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1)) goto or_event_1625_23_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (26))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1625_23_1_end;
        or_result_1625_23 = true;
        or_temp_result_1625_23_1 = true;
    }
    or_event_1625_23_1_end: ;
    if (or_temp_result_1625_23_1) {
        playermovementvalues_245_instances.save_selection();
    }
    // event 1625_23
    bool or_temp_result_1625_23_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1)) goto or_event_1625_23_2_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (8))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1625_23_2_end;
        or_result_1625_23 = true;
        or_temp_result_1625_23_2 = true;
        or_event_1625_23_2_end: ;
        playerothers_123_instances.clear_saved_selection();
        if (or_temp_result_1625_23_2) {
            playerothers_123_instances.save_selection();
        }
        if (!or_result_1625_23) goto or_final_or_event_1625_23_2_end;
        playermovementvalues_245_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        if (or_temp_result_1625_23_2) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1625_23_0 || or_temp_result_1625_23_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        bossboulder_1064_instances.clear_selection();
        for (ObjectIterator it(bossboulder_1064_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(5);
        }
    }
    or_final_or_event_1625_23_2_end: ;
}
void Frames::event_func_5025()
{
    // event 1628_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1)) goto event_1628_23_end;
        bossboulder_1064_instances.clear_selection();
        for (ObjectIterator it(bossboulder_1064_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bossboulder_1064_instances.has_selection()) goto event_1628_23_end;
        if (!((((Active*)get_single(bossboulder_1064_instances, default_active_instance))->x_scale) > (0.85))) goto event_1628_23_end;
        FrameObject * single_instance_1628_23_0; single_instance_1628_23_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossboulder_1064_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectpetal_302(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1628_23_0 == NULL)
                    single_instance_1628_23_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1628_23_0))->advance_movement(+1);
        ((Active*)((Active*)single_instance_1628_23_0))->set_direction(8);
        ((Active*)((Active*)single_instance_1628_23_0))->alterables->values.set(0, 2);
    }
    event_1628_23_end: ;
}
void Frames::event_func_5026()
{
    // event 1629_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1)) goto event_1629_23_end;
        bossboulder_1064_instances.clear_selection();
        for (ObjectIterator it(bossboulder_1064_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bossboulder_1064_instances.has_selection()) goto event_1629_23_end;
        for (ObjectIterator it(bossboulder_1064_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        breakablerockpiece_355_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(bossboulder_1064_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerockpiece_355(parent->x + -10, parent->y + -10), parent->layer);
                breakablerockpiece_355_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerockpiece_355(parent->x + -10, parent->y + 10), parent->layer);
                breakablerockpiece_355_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerockpiece_355(parent->x + 10, parent->y + 10), parent->layer);
                breakablerockpiece_355_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerockpiece_355(parent->x + 10, parent->y + -10), parent->layer);
                breakablerockpiece_355_instances.add_back();
            }
        }
        for (ObjectIterator it(breakablerockpiece_355_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(bossboulder_1064_instances, it.current_index, default_active_instance))->alterables->values.get(23)-2.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_single(bossboulder_1064_instances, it.current_index, default_active_instance))->alterables->values.get(24)-4.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, 0.3);
            ((Active*)*it)->set_angle(randrange(4)*90, 0);
        }
        media.stop_sample(SOUND_COMMON_STRIKE_23);
        media.play_id(SOUND_COMMON_SHATTER_13, -1, 1);
    }
    event_1629_23_end: ;
}
void Frames::event_func_5027()
{
    // event 1630_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_boulder_fall_1)) goto event_1630_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+2, 2));
    }
    event_1630_23_end: ;
}
void Frames::event_func_5028()
{
    // event 1631_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_boulder_fall_1)) goto event_1631_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (12))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1631_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        bossboulder_1064_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_bossboulder_1064(12784, 1810), 2);
            bossboulder_1064_instances.add_back();
        }
        for (ObjectIterator it(bossboulder_1064_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+sin_deg(((Active*)get_single(bossserpentinehead_948_instances, it.current_index, default_active_instance))->alterables->values.get(1)*30)*280-40+randrange(81));
            ((Active*)*it)->set_angle(randrange(360), 0);
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->layer->index+1);
            ((Active*)*it)->set_scale(1-(randrange(30)*0.01));
        }
        effectwarning_1065_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectwarning_1065(12784, 1798), 5);
            effectwarning_1065_instances.add_back();
        }
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(bossboulder_1064_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->set_y(((Active*)get_instance(bossgeyseroverlap1_1001_instances, it.current_index, default_active_instance))->get_box_index(1)+24);
        }
    }
    event_1631_23_end: ;
}
void Frames::event_func_5029()
{
    // event 1632_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_boulder_fall_1)) goto event_1632_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (65))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1632_23_end;
        if (!((((Active*)get_instance(guiboss_1088_instances))->alterables->values.get(0)) > (0))) goto event_1632_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1632_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1632_23_end;
        ((Active*)get_instance(guiboss_1088_instances))->set_visible(true);
        ((Counter*)get_instance(guibosshealth_1089_instances))->set_visible(true);
    }
    event_1632_23_end: ;
}
void Frames::event_func_5030()
{
    // event 1633_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_boulder_fall_1)) goto event_1633_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (150))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1633_23_end;
        if (!((((Counter*)get_instance(guibosshealth_1089_instances))->value) > (1))) goto event_1633_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, ((Active*)*it)->alterables->values.get(7)%math_helper%2);
        }
    }
    event_1633_23_end: ;
}
void Frames::event_func_5031()
{
    // event 1634_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_boulder_fall_1)) goto event_1634_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (150))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1634_23_end;
        if (!((((Counter*)get_instance(guibosshealth_1089_instances))->value) > (1))) goto event_1634_23_end;
        {
            double check_value = 1;
            bosssnakebody_995_instances.clear_selection();
            for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
                if (!((*it)->alterables->values.get(9) == check_value)) it.deselect();
            }
        }
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(6);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->alterables->values.set(0, 4);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1634_23_end: ;
}
void Frames::event_func_5032()
{
    // event 1635_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_boulder_fall_1)) goto event_1635_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (150))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1635_23_end;
        if (!((((Counter*)get_instance(guibosshealth_1089_instances))->value) == (3))) goto event_1635_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->alterables->values.set(0, 0);
        }
            group_main_engine_level_specific_methods_bosses_snake_boss_snake_boulder_fall_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1) {
            group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1 = true;
        }
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->alterables->values.set(6, 0);
        }
    }
    event_1635_23_end: ;
}
void Frames::event_func_5033()
{
    // event 1636_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_boulder_fall_1)) goto event_1636_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (150))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1636_23_end;
        if (!((((Counter*)get_instance(guibosshealth_1089_instances))->value) < (3))) goto event_1636_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->alterables->values.set(0, 0);
        }
            group_main_engine_level_specific_methods_bosses_snake_boss_snake_boulder_fall_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1) {
            group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1 = true;
        }
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.set(6, 1);
        }
    }
    event_1636_23_end: ;
}
void Frames::event_func_5034()
{
    // event 1637_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1637_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1637_23_end;
        bossgeyseroverlap1_1001_instances.clear_selection();
        for (ObjectIterator it(bossgeyseroverlap1_1001_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_single(bossserpentinehead_948_instances, default_active_instance))->alterables->values.get(4)))) { it.deselect(); continue; }
        }
        if (!bossgeyseroverlap1_1001_instances.has_selection()) goto event_1637_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_single(bossgeyseroverlap1_1001_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_single(bossgeyseroverlap1_1001_instances, it.current_index, default_active_instance))->get_y()+40);
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1637_23_end: ;
}
void Frames::event_func_5035()
{
    // event 1638_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1638_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1638_23_end;
        bossgeyseroverlap1_1001_instances.clear_selection();
        for (ObjectIterator it(bossgeyseroverlap1_1001_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_single(bossserpentinehead_948_instances, default_active_instance))->alterables->values.get(6)))) { it.deselect(); continue; }
        }
        if (!bossgeyseroverlap1_1001_instances.has_selection()) goto event_1638_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->alterables->values.get(2)-((Active*)get_single(bossgeyseroverlap1_1001_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1638_23_end: ;
}
void Frames::event_func_5036()
{
    // event 1639_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1639_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1639_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(2)-(((Active*)*it)->alterables->values.get(5)*0.5)+(cos_deg(get_min(((Active*)*it)->alterables->values.get(0), 180))*((Active*)*it)->alterables->values.get(5)*0.5));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(3)-get_abs(sin_deg(get_min(((Active*)*it)->alterables->values.get(0), 180))*180));
        }
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)get_single(bossserpentinehead_948_instances, it.current_index, default_active_instance))->alterables->values.get(0)-(((Active*)*it)->alterables->values.get(7)*8), 0));
            ((Active*)*it)->set_x(((Active*)get_single(bossserpentinehead_948_instances, it.current_index, default_active_instance))->alterables->values.get(2)-(((Active*)get_single(bossserpentinehead_948_instances, it.current_index, default_active_instance))->alterables->values.get(5)*0.5)+(cos_deg(get_min(((Active*)*it)->alterables->values.get(6), 180))*((Active*)get_single(bossserpentinehead_948_instances, it.current_index, default_active_instance))->alterables->values.get(5)*0.5));
            ((Active*)*it)->set_y(((Active*)get_single(bossserpentinehead_948_instances, it.current_index, default_active_instance))->alterables->values.get(3)-get_abs(sin_deg(get_min(((Active*)*it)->alterables->values.get(6), 180))*180));
        }
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(get_min(get_max(-180, ((Active*)*it)->alterables->values.get(0)*get_min(get_max(-1, ((Active*)*it)->alterables->values.get(5)), 1)), 180), 0);
            ((Active*)*it)->set_direction(get_min(get_max(0, ((Active*)*it)->alterables->values.get(5)), 1)*-16);
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)+1.2);
        }
    }
    event_1639_23_end: ;
}
void Frames::event_func_5037()
{
    // event 1640_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1640_23_end;
        if (!((global_values->get(3)%math_helper%10) == (5))) goto event_1640_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1640_23_end;
        media.play_id(SOUND_SERPENT_MOVE_2_35, -1, 1);
    }
    event_1640_23_end: ;
}
void Frames::event_func_5038()
{
    // event 1641_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1641_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (180+(bosssnakebody_995_instances.size()*12)))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1641_23_end;
        bossgeyseroverlap1_1001_instances.clear_selection();
        for (ObjectIterator it(bossgeyseroverlap1_1001_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_single(bossserpentinehead_948_instances, default_active_instance))->alterables->values.get(6)))) { it.deselect(); continue; }
        }
        if (!bossgeyseroverlap1_1001_instances.has_selection()) goto event_1641_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_single(bossgeyseroverlap1_1001_instances, it.current_index, default_active_instance))->get_y()+40);
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_angle(0, 0);
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_single(bossgeyseroverlap1_1001_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1641_23_end: ;
}
void Frames::event_func_5039()
{
    // event 1642_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1642_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (-1))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1642_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(7, 0.1);
        }
    }
    event_1642_23_end: ;
}
void Frames::event_func_5040()
{
    // event 1643_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1643_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (1))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1643_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 0.1);
        }
    }
    event_1643_23_end: ;
}
void Frames::event_func_5041()
{
    // event 1644_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1644_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1644_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(2)+(20*((Active*)*it)->alterables->values.get(7))-(cos_deg(((Active*)*it)->alterables->values.get(0))*20*((Active*)*it)->alterables->values.get(7))+(sin_deg(global_values->get(3)*4)*8));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)+(cos_deg(global_values->get(3)*8)*8));
        }
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)get_single(bossserpentinehead_948_instances, it.current_index, default_active_instance))->alterables->values.get(0)+24-(((Active*)*it)->alterables->values.get(7)*24), 0));
            ((Active*)*it)->set_x(((Active*)get_single(bossserpentinehead_948_instances, it.current_index, default_active_instance))->alterables->values.get(2)-(20*((Active*)get_single(bossserpentinehead_948_instances, it.current_index, default_active_instance))->alterables->values.get(7))+(cos_deg(((Active*)*it)->alterables->values.get(6))*20*((Active*)get_single(bossserpentinehead_948_instances, it.current_index, default_active_instance))->alterables->values.get(7))+(sin_deg(global_values->get(3)*4+(((Active*)*it)->alterables->values.get(7)*15))*8));
            ((Active*)*it)->set_y(((Active*)get_single(bossserpentinehead_948_instances, it.current_index, default_active_instance))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(6)+(cos_deg(global_values->get(3)*8+(((Active*)*it)->alterables->values.get(7)*15))*8));
        }
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1.5+((Active*)*it)->alterables->values.get(7));
        }
    }
    event_1644_23_end: ;
}
void Frames::event_func_5042()
{
    // event 1645_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1645_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (80))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1645_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1645_23_end: ;
}
void Frames::event_func_5043()
{
    // event 1646_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1646_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (80))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1646_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+4, 80));
        }
    }
    event_1646_23_end: ;
}
void Frames::event_func_5044()
{
    // event 1647_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1647_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (80))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1647_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-4, 0));
        }
    }
    event_1647_23_end: ;
}
void Frames::event_func_5045()
{
    // event 1648_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1648_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (5))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1648_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->alterables->flags.disable(14);
        }
    }
    event_1648_23_end: ;
}
void Frames::event_func_5046()
{
    // event 1649_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1649_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (40))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1649_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_animation();
        }
    }
    event_1649_23_end: ;
}
void Frames::event_func_5047()
{
    // event 1650_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1650_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(11))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(14))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1650_23_end;
        FrameObject * single_instance_1650_23_0; single_instance_1650_23_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossserpentinehead_948_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossfireball_967(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1650_23_0 == NULL)
                    single_instance_1650_23_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1650_23_0))->set_direction((((Active*)get_single(bossserpentinehead_948_instances, default_active_instance))->get_frame()*8)+16);
        media.play_id(SOUND_FIREBALL_2_46, -1, 1);
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 6);
            ((Active*)*it)->alterables->flags.enable(14);
        }
    }
    event_1650_23_end: ;
}
void Frames::event_func_5048()
{
    // event 1651_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1651_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(11))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(14))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1651_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_animation();
            ((Active*)*it)->alterables->flags.disable(14);
        }
    }
    event_1651_23_end: ;
}
void Frames::event_func_5049()
{
    // event 1652_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1652_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1652_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, (((Active*)*it)->alterables->values.get(6)+1)%math_helper%2);
        }
    }
    event_1652_23_end: ;
}
void Frames::event_func_5050()
{
    // event 1653_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1653_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1653_23_end;
            group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1) {
            group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1 = true;
        }
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1653_23_end: ;
}
void Frames::event_func_5051()
{
    // event 1654_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1654_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) != (((Active*)*it)->alterables->values.get(4)))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1654_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1654_23_end: ;
}
void Frames::event_func_5052()
{
    // event 1655_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1)) goto event_1655_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1655_23_end;
        bossgeyseroverlap1_1001_instances.clear_selection();
        for (ObjectIterator it(bossgeyseroverlap1_1001_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!bossgeyseroverlap1_1001_instances.has_selection()) goto event_1655_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_single(bossgeyseroverlap1_1001_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_single(bossgeyseroverlap1_1001_instances, it.current_index, default_active_instance))->get_y()+40);
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        ((Active*)get_instance(bossbouncemode_1082_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(bossbouncemode_1082_instances))->alterables->flags.disable(0);
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(11, 0);
        }
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
            ((Active*)*it)->alterables->values.set(11, 0);
        }
    }
    event_1655_23_end: ;
}
void Frames::event_func_5053()
{
    // event 1656_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1)) goto event_1656_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1656_23_end;
        bossgeyseroverlap1_1001_instances.clear_selection();
        for (ObjectIterator it(bossgeyseroverlap1_1001_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!bossgeyseroverlap1_1001_instances.has_selection()) goto event_1656_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->alterables->values.get(2)-((Active*)get_single(bossgeyseroverlap1_1001_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(10, ((Active*)*it)->alterables->values.get(5)*0.5);
            ((Active*)*it)->alterables->values.set(2, (((Active*)*it)->alterables->values.get(2)+((Active*)get_single(bossgeyseroverlap1_1001_instances, it.current_index, default_active_instance))->get_x())*0.5);
            ((Active*)*it)->alterables->values.set(0, 90);
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->alterables->values.set(9, 9);
        }
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, ((Active*)get_single(bossserpentinehead_948_instances, it.current_index, default_active_instance))->alterables->values.get(10));
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_single(bossserpentinehead_948_instances, it.current_index, default_active_instance))->alterables->values.get(3));
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)get_single(bossserpentinehead_948_instances, it.current_index, default_active_instance))->alterables->values.get(0)-(((Active*)*it)->alterables->values.get(7)*((Active*)get_single(bossserpentinehead_948_instances, it.current_index, default_active_instance))->alterables->values.get(9)), 0));
        }
    }
    event_1656_23_end: ;
}
void Frames::event_func_5054()
{
    // event 1657_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1)) goto event_1657_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) >= (12))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1657_23_end;
        if (!((((Active*)get_instance(bossbouncemode_1082_instances))->alterables->values.get(2)) >= (5))) goto event_1657_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossbouncemode_1082_instances))->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)get_instance(bossbouncemode_1082_instances))->alterables->values.get(1));
        }
        ((Active*)get_instance(bossbouncemode_1082_instances))->set_direction(get_direction_int(((Active*)get_instance(bossbouncemode_1082_instances))->x, ((Active*)get_instance(bossbouncemode_1082_instances))->y, ((Active*)get_single(bossserpentinehead_948_instances))->x + 0, ((Active*)get_single(bossserpentinehead_948_instances))->y + 0));
    }
    event_1657_23_end: ;
}
void Frames::event_func_5055()
{
    // event 1658_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1)) goto event_1658_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (2))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1658_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(2)+(sin_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(10)));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(3)-(cos_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(10)));
        }
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(bossserpentinehead_948_instances, it.current_index, default_active_instance))->alterables->values.get(2)+(sin_deg(((Active*)*it)->alterables->values.get(6))*((Active*)*it)->alterables->values.get(10)));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(3)-(cos_deg(((Active*)*it)->alterables->values.get(6))*((Active*)*it)->alterables->values.get(10)));
        }
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle((((Active*)*it)->alterables->values.get(0)-90)*get_min(get_max(-1, ((Active*)*it)->alterables->values.get(5)), 1), 0);
            ((Active*)*it)->set_direction(get_min(get_max(0, ((Active*)*it)->alterables->values.get(5)), 1)*-16);
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)+1.5+((Active*)*it)->alterables->values.get(11));
        }
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->alterables->values.get(6)+1.5+((Active*)*it)->alterables->values.get(11));
        }
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    event_1658_23_end: ;
}
void Frames::event_func_5056()
{
    // event 1659_23
    bool or_result_1659_23 = false;
    bool or_temp_result_1659_23_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1)) goto or_event_1659_23_0_end;
        if (!((global_values->get(3)%math_helper%10) == (5))) goto or_event_1659_23_0_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) < (12))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto or_event_1659_23_0_end;
        or_result_1659_23 = true;
        or_temp_result_1659_23_0 = true;
    }
    or_event_1659_23_0_end: ;
    bossserpentinehead_948_instances.clear_saved_selection();
    if (or_temp_result_1659_23_0) {
        bossserpentinehead_948_instances.save_selection();
    }
    // event 1659_23
    bool or_temp_result_1659_23_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1)) goto or_event_1659_23_1_end;
        if (!((global_values->get(3)%math_helper%10) == (5))) goto or_event_1659_23_1_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto or_event_1659_23_1_end;
        or_result_1659_23 = true;
        or_temp_result_1659_23_1 = true;
        or_event_1659_23_1_end: ;
        if (or_temp_result_1659_23_1) {
            bossserpentinehead_948_instances.save_selection();
        }
        if (!or_result_1659_23) goto or_final_or_event_1659_23_1_end;
        bossserpentinehead_948_instances.empty_selection();
        if (or_temp_result_1659_23_0 || or_temp_result_1659_23_1) {
            bossserpentinehead_948_instances.restore_selection();
        }
        media.play_id(SOUND_SERPENT_MOVE_2_35, -1, 1);
    }
    or_final_or_event_1659_23_1_end: ;
}
void Frames::event_func_5057()
{
    // event 1660_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1)) goto event_1660_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) < (-44))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1660_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, ((Active*)*it)->alterables->values.get(10)+44);
            ((Active*)*it)->alterables->values.set(10, -44);
            ((Active*)*it)->alterables->values.set(11, 6);
        }
    }
    event_1660_23_end: ;
}
void Frames::event_func_5058()
{
    // event 1661_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1)) goto event_1661_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1661_23_end;
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) < (-44))) { it.deselect(); continue; }
        }
        if (!bosssnakebody_995_instances.has_selection()) goto event_1661_23_end;
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, ((Active*)*it)->alterables->values.get(10)+44);
            ((Active*)*it)->alterables->values.set(10, -44);
            ((Active*)*it)->alterables->values.set(11, 6);
        }
    }
    event_1661_23_end: ;
}
void Frames::event_func_5059()
{
    // event 1662_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1)) goto event_1662_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1662_23_end;
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) < (-44))) { it.deselect(); continue; }
        }
        if (!bosssnakebody_995_instances.has_selection()) goto event_1662_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(3);
        }
    }
    event_1662_23_end: ;
}
void Frames::event_func_5060()
{
    // event 1663_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1)) goto event_1663_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) < (12))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1663_23_end;
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, get_min(((Active*)*it)->alterables->values.get(11)+0.2, 12));
        }
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, get_min(((Active*)*it)->alterables->values.get(11)+0.2, 12));
        }
        ((Active*)get_instance(bossbouncemode_1082_instances))->set_x(((Active*)get_single(bossserpentinehead_948_instances, default_active_instance))->alterables->values.get(2));
        ((Active*)get_instance(bossbouncemode_1082_instances))->set_y(((Active*)get_single(bossserpentinehead_948_instances, default_active_instance))->alterables->values.get(3));
        ((Active*)get_instance(bossbouncemode_1082_instances))->alterables->values.set(0, ((Active*)get_single(bossserpentinehead_948_instances, default_active_instance))->alterables->values.get(2));
        ((Active*)get_instance(bossbouncemode_1082_instances))->alterables->values.set(1, ((Active*)get_single(bossserpentinehead_948_instances, default_active_instance))->alterables->values.get(3));
    }
    event_1663_23_end: ;
}
void Frames::event_func_5061()
{
    // event 1664_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1)) goto event_1664_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) >= (12))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1664_23_end;
        if (!(((Active*)get_instance(bossbouncemode_1082_instances))->alterables->flags.is_off(0))) goto event_1664_23_end;
        ((Active*)get_instance(bossbouncemode_1082_instances))->get_movement()->start();
        ((Active*)get_instance(bossbouncemode_1082_instances))->alterables->flags.enable(0);
        ((Active*)get_instance(bossbouncemode_1082_instances))->set_direction(get_direction_int(((Active*)get_instance(bossbouncemode_1082_instances))->x, ((Active*)get_instance(bossbouncemode_1082_instances))->y, ((Active*)get_instance(player_389_instances))->x + 0, ((Active*)get_instance(player_389_instances))->y + 0));
        media.play_id(SOUND_COMMON_ROLLING_2_7, -1, 1);
    }
    event_1664_23_end: ;
}
void Frames::event_func_5062()
{
    // event 1665_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1)) goto event_1665_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) >= (12))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1665_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(bossbouncemode_1082_instances))->get_x());
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(bossbouncemode_1082_instances))->get_y());
        }
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(bossbouncemode_1082_instances))->get_y());
        }
    }
    event_1665_23_end: ;
}
void Frames::event_func_5063()
{
    // event 1668_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1)) goto event_1668_23_end;
        if (!(((Active*)get_instance(bossbouncemode_1082_instances))->test_directions(256))) goto event_1668_23_end;
        ((Active*)get_instance(bossbouncemode_1082_instances))->set_direction(pick_random(2, 6, 10));
    }
    event_1668_23_end: ;
}
void Frames::event_func_5064()
{
    // event 1669_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1)) goto event_1669_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(25)) == (0))) goto event_1669_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (20))) goto event_1669_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (21))) goto event_1669_23_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1669_23_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1669_23_end;
        playercharactersensor_383_instances.clear_selection();
        bosssnakebody_995_instances.clear_selection();
        if (!check_overlap(playercharactersensor_383_instances, bosssnakebody_995_instances)) goto event_1669_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) >= (12))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1669_23_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
    }
    event_1669_23_end: ;
}
void Frames::event_func_5065()
{
    // event 1670_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1)) goto event_1670_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) >= (12))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1670_23_end;
        if (!((((Active*)get_instance(bossbouncemode_1082_instances))->alterables->values.get(2)) >= (5))) goto event_1670_23_end;
        if (!((((Active*)get_instance(bossbouncemode_1082_instances))->get_x()) > (((Active*)get_instance(bossbouncemode_1082_instances))->alterables->values.get(0)-3))) goto event_1670_23_end;
        if (!((((Active*)get_instance(bossbouncemode_1082_instances))->get_x()) < (((Active*)get_instance(bossbouncemode_1082_instances))->alterables->values.get(0)+3))) goto event_1670_23_end;
        if (!((((Active*)get_instance(bossbouncemode_1082_instances))->get_y()) > (((Active*)get_instance(bossbouncemode_1082_instances))->alterables->values.get(1)-3))) goto event_1670_23_end;
        if (!((((Active*)get_instance(bossbouncemode_1082_instances))->get_y()) < (((Active*)get_instance(bossbouncemode_1082_instances))->alterables->values.get(1)+3))) goto event_1670_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 3);
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(bossbouncemode_1082_instances))->alterables->values.get(0));
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(bossbouncemode_1082_instances))->alterables->values.get(1));
        }
        ((Active*)get_instance(bossbouncemode_1082_instances))->get_movement()->stop(false);
    }
    event_1670_23_end: ;
}
void Frames::event_func_5066()
{
    // event 1671_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1)) goto event_1671_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) > (6))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1671_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, get_max(((Active*)*it)->alterables->values.get(11)-0.2, 6));
        }
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, get_max(((Active*)*it)->alterables->values.get(11)-0.2, 6));
        }
    }
    event_1671_23_end: ;
}
void Frames::event_func_5067()
{
    // event 1672_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1)) goto event_1672_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) <= (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (188))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1672_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, ((Active*)*it)->alterables->values.get(5)*0.5);
            ((Active*)*it)->alterables->values.set(11, 0);
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(bossgeyseroverlap1_1001_instances, it.current_index, default_active_instance))->get_y()+40);
            ((Active*)*it)->alterables->values.add(12, 1);
        }
    }
    event_1672_23_end: ;
}
void Frames::event_func_5068()
{
    // event 1673_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1)) goto event_1673_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) <= (6))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1673_23_end;
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (((Active*)get_single(bossserpentinehead_948_instances, default_active_instance))->alterables->values.get(12)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) >= (180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (188))) { it.deselect(); continue; }
        }
        if (!bosssnakebody_995_instances.has_selection()) goto event_1673_23_end;
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, ((Active*)get_single(bossserpentinehead_948_instances, it.current_index, default_active_instance))->alterables->values.get(5)*0.5);
            ((Active*)*it)->alterables->values.set(11, 0);
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(bossgeyseroverlap1_1001_instances, it.current_index, default_active_instance))->get_y()+40);
        }
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 1);
        }
    }
    event_1673_23_end: ;
}
void Frames::event_func_5069()
{
    // event 1674_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1)) goto event_1674_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) <= (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (270))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1674_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 270);
        }
    }
    event_1674_23_end: ;
}
void Frames::event_func_5070()
{
    // event 1675_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1)) goto event_1675_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) <= (6))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1675_23_end;
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) >= (270))) { it.deselect(); continue; }
        }
        if (!bosssnakebody_995_instances.has_selection()) goto event_1675_23_end;
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 270);
        }
    }
    event_1675_23_end: ;
}
void Frames::event_func_5071()
{
    // event 1676_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1)) goto event_1676_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) <= (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (270))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1676_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(4);
        }
    }
    event_1676_23_end: ;
}
void Frames::event_func_5072()
{
    // event 1677_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1)) goto event_1677_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) <= (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (270))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1677_23_end;
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) < (270))) { it.deselect(); continue; }
        }
        if (!bosssnakebody_995_instances.has_selection()) goto event_1677_23_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(4);
        }
    }
    event_1677_23_end: ;
}
void Frames::event_func_5073()
{
    // event 1678_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1)) goto event_1678_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1678_23_end;
        bossgeyseroverlap1_1001_instances.clear_selection();
        if (!check_overlap(bossserpentinehead_948_instances, bossgeyseroverlap1_1001_instances)) goto event_1678_23_end;
            group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1) {
            group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1 = true;
        }
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_single(bossgeyseroverlap1_1001_instances, it.current_index, default_active_instance))->get_y()+40);
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_angle(0, 0);
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_single(bossgeyseroverlap1_1001_instances, it.current_index, default_active_instance))->alterables->values.get(0));
            ((Active*)*it)->alterables->flags.disable(4);
        }
    }
    event_1678_23_end: ;
}
void Frames::event_func_5074()
{
    // event 1679_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_spin_attack_1)) goto event_1679_23_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)%math_helper%360);
        }
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->alterables->values.get(6)%math_helper%360);
        }
    }
    event_1679_23_end: ;
}
void Frames::event_func_5075()
{
    // event 1680_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_hitting_1)) goto event_1680_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bossserpentinehead_948_instances, it.current_index));
            if (parent == NULL) goto pos_end_1680_23_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1680_23_0: ;
        }
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(((Active*)get_instance(bossserpentinehead_948_instances, it.current_index, default_active_instance))->current_animation);
            ((Active*)*it)->force_frame(((Active*)get_instance(bossserpentinehead_948_instances, it.current_index, default_active_instance))->get_frame());
            ((Active*)*it)->set_direction(((Active*)get_instance(bossserpentinehead_948_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->set_angle(((Active*)get_instance(bossserpentinehead_948_instances, it.current_index, default_active_instance))->get_angle(), 0);
        }
    }
    event_1680_23_end: ;
}
void Frames::event_func_5076()
{
    // event 1681_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_hitting_1)) goto event_1681_23_end;
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(256)) { it.deselect(); continue; }
        }
        if (!bosssnakebody_995_instances.has_selection()) goto event_1681_23_end;
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 60);
            ((Active*)*it)->set_direction(8);
        }
        FrameObject * single_instance_1681_23_0; single_instance_1681_23_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssnakebody_995_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1681_23_0 == NULL)
                    single_instance_1681_23_0 = new_obj;
            }
        }
        media.stop_sample(SOUND_COMMON_STRIKE_23);
        media.play_id(SOUND_METALHIT_45, -1, 1);
        ((Active*)single_instance_1681_23_0)->move_front(((Active*)get_single(bosssnakebody_995_instances)));
    }
    event_1681_23_end: ;
}
void Frames::event_func_5077()
{
    // event 1682_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_hitting_1)) goto event_1682_23_end;
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!bosssnakebody_995_instances.has_selection()) goto event_1682_23_end;
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(5, 1);
            ((Active*)*it)->alterables->values.add(4, get_min(((Active*)*it)->alterables->values.get(5)*0.01, 1));
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(4));
        }
    }
    event_1682_23_end: ;
}
void Frames::event_func_5078()
{
    // event 1683_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_hitting_1)) goto event_1683_23_end;
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (4))) { it.deselect(); continue; }
        }
        if (!bosssnakebody_995_instances.has_selection()) goto event_1683_23_end;
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(4, 4);
        }
    }
    event_1683_23_end: ;
}
void Frames::event_func_5079()
{
    // event 1684_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_hitting_1)) goto event_1684_23_end;
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bosssnakebody_995_instances.has_selection()) goto event_1684_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 3);
            ((Active*)*it)->alterables->flags.disable(6);
        }
    }
    event_1684_23_end: ;
}
