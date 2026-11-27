#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_16936()
{
    // event 1583_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1583_76_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(1)) == (2))) goto event_1583_76_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(4)) >= (3))) goto event_1583_76_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_frame()) == (4))) goto event_1583_76_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(0);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.disable(1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(7, 0);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(8, 1);
    }
    event_1583_76_end: ;
}
void Frames::event_func_16937()
{
    // event 1584_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1584_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (6))) goto event_1584_76_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(8)) > (0))) goto event_1584_76_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
    }
    event_1584_76_end: ;
}
void Frames::event_func_16938()
{
    // event 1585_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1585_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (6))) goto event_1585_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (8))) goto event_1585_76_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)*19+((Active*)get_instance(npcshellduck_533_instances))->get_x()-80)*0.05);
    }
    event_1585_76_end: ;
}
void Frames::event_func_16939()
{
    // event 1587_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1587_76_end;
        if (!(((Active*)get_instance(npcshellduck_533_instances))->alterables->flags.is_on(1))) goto event_1587_76_end;
        ((Active*)get_instance(npcshellduck_533_instances))->set_x(((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(2));
        ((Active*)get_instance(npcshellduck_533_instances))->set_y(((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(3));
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(2, ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(4));
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(3, ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(5));
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(5, get_min(((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(5)+0.2, 15));
    }
    event_1587_76_end: ;
}
void Frames::event_func_16940()
{
    // event 1589_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1589_76_end;
        npcshellduck_533_instances.clear_selection();
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (4736))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (-4))) { it.deselect(); continue; }
        }
        if (!npcshellduck_533_instances.has_selection()) goto event_1589_76_end;
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0-((Active*)*it)->alterables->values.get(4)*0.5);
        }
    }
    event_1589_76_end: ;
}
void Frames::event_func_16941()
{
    // event 1593_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1593_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(4)) < (0))) goto event_1593_76_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(8)) >= (1))) goto event_1593_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (6))) goto event_1593_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (7))) goto event_1593_76_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(0, 9);
    }
    event_1593_76_end: ;
}
void Frames::event_func_16942()
{
    // event 1594_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1594_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (9))) goto event_1594_76_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(1);
        ((Active*)get_instance(npcserpentine_947_instances))->set_x(((Active*)get_instance(npcserpentine_947_instances))->get_x()+4);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)*19+((Active*)get_instance(npcserpentine_947_instances))->get_x())*0.05);
        ((Active*)get_instance(npcserpentine_947_instances))->restore_frame();
    }
    event_1594_76_end: ;
}
void Frames::event_func_16943()
{
    // event 1595_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1595_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (9))) goto event_1595_76_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_x()) >= (((Active*)get_instance(npcshellduck_533_instances))->get_x()-5))) goto event_1595_76_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->flags.enable(1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(5, -6);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->set_x(((Active*)get_instance(npcserpentine_947_instances))->get_x());
    }
    event_1595_76_end: ;
}
void Frames::event_func_16944()
{
    // event 1596_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1596_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (10))) goto event_1596_76_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.is_off(3))) goto event_1596_76_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.enable(3);
        media.play_id(SOUND_SERP_MADLAUGH_193, -1, 1);
    }
    event_1596_76_end: ;
}
void Frames::event_func_16945()
{
    // event 1597_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1597_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (10))) goto event_1597_76_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(12);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(shieldserpentine_1868_instances))->set_visible(true);
        {
            FrameObject * parent = ((Active*)get_instance(npcserpentine_947_instances));
            if (parent == NULL) goto pos_end_1597_76_0;
            ((Active*)get_instance(shieldserpentine_1868_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1597_76_0: ;
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
    }
    event_1597_76_end: ;
}
void Frames::event_func_16946()
{
    // event 1598_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1598_76_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->is_animation_finished(12))) goto event_1598_76_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.is_off(1))) goto event_1598_76_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(13);
    }
    event_1598_76_end: ;
}
void Frames::event_func_16947()
{
    // event 1599_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1599_76_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->test_animation(13))) goto event_1599_76_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_frame()) == (5))) goto event_1599_76_end;
        if (not_always_1599_76 > loop_count) {
            not_always_1599_76 = loop_count + 2;
            goto event_1599_76_end;
        }
        not_always_1599_76 = loop_count + 2;
        FrameObject * single_instance_1599_76_0; single_instance_1599_76_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(npcserpentine_947_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossrapidbullet_1834(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1599_76_0 == NULL)
                    single_instance_1599_76_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_BLASTER2_194, -1, 1);
        ((Active*)((Active*)single_instance_1599_76_0))->alterables->values.set(2, ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(4)+2);
        ((Active*)((Active*)single_instance_1599_76_0))->alterables->values.set(3, (((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(4)%math_helper%2)*2-1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(4, 1);
    }
    event_1599_76_end: ;
}
void Frames::event_func_16948()
{
    // event 1600_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1600_76_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->test_animation(13))) goto event_1600_76_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_frame()) == (8))) goto event_1600_76_end;
        if (not_always_1600_76 > loop_count) {
            not_always_1600_76 = loop_count + 2;
            goto event_1600_76_end;
        }
        not_always_1600_76 = loop_count + 2;
        FrameObject * single_instance_1600_76_0; single_instance_1600_76_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(npcserpentine_947_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossrapidbullet_1834(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1600_76_0 == NULL)
                    single_instance_1600_76_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1600_76_0))->alterables->values.set(2, ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(4)+2);
        ((Active*)((Active*)single_instance_1600_76_0))->alterables->values.set(3, (((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(4)%math_helper%2)*2-1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(4, 1);
        media.play_id(SOUND_COMMON_BLASTER2_194, -1, 1);
    }
    event_1600_76_end: ;
}
void Frames::event_func_16949()
{
    // event 1601_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1601_76_end;
        bossrapidbullet_1834_instances.clear_selection();
        for (ObjectIterator it(bossrapidbullet_1834_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!bossrapidbullet_1834_instances.has_selection()) goto event_1601_76_end;
        for (ObjectIterator it(bossrapidbullet_1834_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-16);
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1601_76_end: ;
}
void Frames::event_func_16950()
{
    // event 1603_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1603_76_end;
        bossrapidbullet_1834_instances.clear_selection();
        for (ObjectIterator it(bossrapidbullet_1834_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (frame_top()-30))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossrapidbullet_1834_instances.has_selection()) goto event_1603_76_end;
        FrameObject * single_instance_1603_76_0; single_instance_1603_76_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossrapidbullet_1834_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectfallingleaf_2323(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1603_76_0 == NULL)
                    single_instance_1603_76_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1603_76_0))->set_y(frame_top()-randrange(20));
        ((Active*)((Active*)single_instance_1603_76_0))->set_x(((Active*)single_instance_1603_76_0)->get_x()-30+randrange(61));
        ((Active*)((Active*)single_instance_1603_76_0))->set_angle(randrange(360), 0);
        ((Active*)((Active*)single_instance_1603_76_0))->get_movement()->set_speed(20+randrange(20));
        for (ObjectIterator it(bossrapidbullet_1834_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1603_76_end: ;
}
void Frames::event_func_16951()
{
    // event 1604_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1604_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (11))) goto event_1604_76_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->is_animation_finished(13))) goto event_1604_76_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(5);
        ((Active*)get_instance(npcserpentine_947_instances))->set_direction(4);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(shieldserpentine_1868_instances))->set_visible(false);
        ((Active*)get_instance(npcserpentine_947_instances))->restore_frame();
        ((Active*)get_instance(npcserpentine_947_instances))->restore_speed();
    }
    event_1604_76_end: ;
}
void Frames::event_func_16952()
{
    // event 1605_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1605_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (12))) goto event_1605_76_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(2, ((Active*)get_instance(npcserpentine_947_instances))->get_x()-150);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(3, ((Active*)get_instance(npcserpentine_947_instances))->get_y()-300);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->flags.disable(1);
    }
    event_1605_76_end: ;
}
void Frames::event_func_16953()
{
    // event 1606_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1606_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (12))) goto event_1606_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (55))) goto event_1606_76_end;
        ((Active*)get_instance(npcserpentine_947_instances))->set_direction(0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
    }
    event_1606_76_end: ;
}
void Frames::event_func_16954()
{
    // event 1607_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1607_76_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1607_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (19))) goto event_1607_76_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1607_76_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        media.stop_channel(20-1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(npcshellduck_533_instances));
            if (parent == NULL) goto pos_end_1607_76_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 80, parent->get_y() + -300);
            pos_end_1607_76_0: ;
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0, 0);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 1);
        media.play_id(SOUND_SCENE_LEAVES_433, -1, 1);
    }
    event_1607_76_end: ;
}
void Frames::event_func_16955()
{
    // event 1608_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1608_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (14))) goto event_1608_76_end;
        ((Active*)get_instance(npcshellduck_533_instances))->set_y(get_min(((Active*)get_instance(npcshellduck_533_instances))->get_y()+12, ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(6)));
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y()+12, ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(6)));
            ((Active*)*it)->force_animation(27);
            ((Active*)*it)->force_speed(0);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1608_76_end: ;
}
void Frames::event_func_16956()
{
    // event 1609_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1609_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (14))) goto event_1609_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->get_y()) >= (((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(6)))) goto event_1609_76_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(5);
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(1);
    }
    event_1609_76_end: ;
}
void Frames::event_func_16957()
{
    // event 1610_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1610_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (14))) goto event_1610_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->get_y()) >= (((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(6)))) goto event_1610_76_end;
        if (not_always_1610_76 > loop_count) {
            not_always_1610_76 = loop_count + 2;
            goto event_1610_76_end;
        }
        not_always_1610_76 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 1);
    }
    event_1610_76_end: ;
}
void Frames::event_func_16958()
{
    // event 1611_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1611_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (14))) goto event_1611_76_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (((Active*)get_instance(npcshellduck_533_instances))->get_y()))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1611_76_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(31);
        }
    }
    event_1611_76_end: ;
}
void Frames::event_func_16959()
{
    // event 1612_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1612_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (14))) goto event_1612_76_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (((Active*)get_instance(npcshellduck_533_instances))->get_y()))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1612_76_end;
        if (not_always_1612_76 > loop_count) {
            not_always_1612_76 = loop_count + 2;
            goto event_1612_76_end;
        }
        not_always_1612_76 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 1);
    }
    event_1612_76_end: ;
}
void Frames::event_func_16960()
{
    // event 1613_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1613_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (14))) goto event_1613_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (30))) goto event_1613_76_end;
        ((Active*)get_instance(npcserpentine_947_instances))->set_direction(16);
        ((Active*)get_instance(npcserpentine_947_instances))->force_frame(0);
    }
    event_1613_76_end: ;
}
void Frames::event_func_16961()
{
    // event 1614_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1614_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (14))) goto event_1614_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) < (20))) goto event_1614_76_end;
        effectfallingleaf_2323_instances.empty_selection();
        // select single: false true false
        {
            FrameObject * parent = ((Active*)get_instance(npcshellduck_533_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectfallingleaf_2323(parent->x + 0, parent->y + 0), parent->layer);
                effectfallingleaf_2323_instances.add_back();
            }
        }
        // select single: false true true
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator p_it(playerskinsash_418_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectfallingleaf_2323(parent->x + 0, parent->y + 0), parent->layer);
                effectfallingleaf_2323_instances.add_back();
            }
        }
        for (ObjectIterator it(effectfallingleaf_2323_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(frame_top()-randrange(20));
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-30+randrange(61));
            ((Active*)*it)->set_angle(randrange(360), 0);
            ((Active*)*it)->get_movement()->set_speed(20+randrange(20));
        }
    }
    event_1614_76_end: ;
}
void Frames::event_func_16962()
{
    // event 1615_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1615_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (14))) goto event_1615_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (70))) goto event_1615_76_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1615_76_end: ;
}
void Frames::event_func_16963()
{
    // event 1616_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1616_76_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1616_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (20))) goto event_1616_76_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1616_76_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        media.stop_channel(20-1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(30);
        }
        ((Active*)get_instance(npcserpentine_947_instances))->force_frame(0);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1616_76_end: ;
}
void Frames::event_func_16964()
{
    // event 1617_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1617_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (16))) goto event_1617_76_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
    }
    event_1617_76_end: ;
}
void Frames::event_func_16965()
{
    // event 1618_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1618_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (16))) goto event_1618_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (35))) goto event_1618_76_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
    }
    event_1618_76_end: ;
}
void Frames::event_func_16966()
{
    // event 1619_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1619_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (17))) goto event_1619_76_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
    }
    event_1619_76_end: ;
}
void Frames::event_func_16967()
{
    // event 1620_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1620_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (17))) goto event_1620_76_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(npcshellduck_533_instances))->get_x()+30))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1620_76_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1620_76_end: ;
}
void Frames::event_func_16968()
{
    // event 1621_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1621_76_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1621_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (21))) goto event_1621_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (24))) goto event_1621_76_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1621_76_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1621_76_end: ;
}
void Frames::event_func_16969()
{
    // event 1622_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1622_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (24))) goto event_1622_76_end;
        if (once_condition_1622_76) goto event_1622_76_end;
        once_condition_1622_76 = true;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_83);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1622_76_end: ;
}
void Frames::event_func_16970()
{
    // event 1623_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1623_76_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1623_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (24))) goto event_1623_76_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1623_76_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_y());
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(13, 0);
        media.play_id(SOUND_LILAC_COMETSTART_9, -1, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, 100);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
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
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        media.play_id(SOUND_SERP_WHATTHE_259, -1, 1);
    }
    event_1623_76_end: ;
}
void Frames::event_func_16971()
{
    // event 1624_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1624_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (19))) goto event_1624_76_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
    }
    event_1624_76_end: ;
}
void Frames::event_func_16972()
{
    // event 1625_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1625_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (19))) goto event_1625_76_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(npcserpentine_947_instances))->get_x()+500))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1625_76_end;
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
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(5723);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->set_x(5740);
        ((Active*)get_instance(npcshellduck_533_instances))->set_y(((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(6));
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(6));
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
    }
    event_1625_76_end: ;
}
void Frames::event_func_16973()
{
    // event 1626_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1626_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (19))) goto event_1626_76_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_1626_76_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(5);
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(2);
        {
            FrameObject * parent = ((Active*)get_instance(playerskinsash_418_instances));
            if (parent == NULL) goto pos_end_1626_76_0;
            ((Active*)get_instance(npcshellduck_533_instances))->set_global_position(parent->get_x() + -24, parent->get_y() + 0);
            pos_end_1626_76_0: ;
        }
    }
    event_1626_76_end: ;
}
void Frames::event_func_16974()
{
    // event 1627_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1627_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (19))) goto event_1627_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) < (10))) goto event_1627_76_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_frame(12);
    }
    event_1627_76_end: ;
}
void Frames::event_func_16975()
{
    // event 1628_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1628_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (19))) goto event_1628_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (30))) goto event_1628_76_end;
        ((Active*)get_instance(npcserpentine_947_instances))->restore_frame();
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(7);
        ((Active*)get_instance(npcserpentine_947_instances))->force_frame(2);
        ((Active*)get_instance(npcserpentine_947_instances))->restore_frame();
    }
    event_1628_76_end: ;
}
void Frames::event_func_16976()
{
    // event 1629_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1629_76_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->test_animation(7))) goto event_1629_76_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_frame()) == (2))) goto event_1629_76_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(3)) == (0))) goto event_1629_76_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(3, -6);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(9, ((Active*)get_instance(npcserpentine_947_instances))->get_y());
    }
    event_1629_76_end: ;
}
void Frames::event_func_16977()
{
    // event 1630_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1630_76_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->test_animation(7))) goto event_1630_76_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_frame()) >= (2))) goto event_1630_76_end;
        ((Active*)get_instance(npcserpentine_947_instances))->set_y(get_min(((Active*)get_instance(npcserpentine_947_instances))->get_y()+((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(3), ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(9)));
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(3, 0.25);
    }
    event_1630_76_end: ;
}
void Frames::event_func_16978()
{
    // event 1631_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1631_76_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->test_animation(7))) goto event_1631_76_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_frame()) >= (2))) goto event_1631_76_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(3)) > (0))) goto event_1631_76_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_y()) >= (((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(9)))) goto event_1631_76_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(0);
        ((Active*)get_instance(bossserpentinearm_1863_instances))->set_angle(270, 0);
        ((Active*)get_instance(bossserpentinearm_1863_instances))->set_direction(2);
        ((Active*)get_instance(npcserpentine_947_instances))->set_direction(1);
        ((Active*)get_instance(bossserpentinearm_1863_instances))->alterables->values.set(0, 270);
        ((Active*)get_instance(bossserpentinearm_1863_instances))->set_visible(true);
    }
    event_1631_76_end: ;
}
void Frames::event_func_16979()
{
    // event 1632_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1632_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (19))) goto event_1632_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (40))) goto event_1632_76_end;
        ((Active*)get_instance(npcserpentine_947_instances))->set_direction(0);
    }
    event_1632_76_end: ;
}
void Frames::event_func_16980()
{
    // event 1633_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1633_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (19))) goto event_1633_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (80))) goto event_1633_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) < (95))) goto event_1633_76_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)*19+((Active*)get_instance(npcserpentine_947_instances))->get_x())*0.05);
    }
    event_1633_76_end: ;
}
void Frames::event_func_16981()
{
    // event 1634_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1634_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (19))) goto event_1634_76_end;
        {
            FrameObject * parent = ((Active*)get_instance(npcserpentine_947_instances));
            if (parent == NULL) goto pos_end_1634_76_0;
            ((Active*)get_instance(bossserpentinearm_1863_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1634_76_0: ;
        }
    }
    event_1634_76_end: ;
}
void Frames::event_func_16982()
{
    // event 1635_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1635_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (19))) goto event_1635_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (80))) goto event_1635_76_end;
        ((Active*)get_instance(bossserpentinearm_1863_instances))->set_angle(((Active*)get_instance(bossserpentinearm_1863_instances))->alterables->values.get(0), 0);
        ((Active*)get_instance(bossserpentinearm_1863_instances))->alterables->values.set(0, get_min(((Active*)get_instance(bossserpentinearm_1863_instances))->alterables->values.get(0)+10, 360));
    }
    event_1635_76_end: ;
}
void Frames::event_func_16983()
{
    // event 1636_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1636_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (19))) goto event_1636_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (95))) goto event_1636_76_end;
        FrameObject * single_instance_1636_76_0; single_instance_1636_76_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossserpentinearm_1863_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossmissile_2122(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1636_76_0 == NULL)
                    single_instance_1636_76_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_MISSILE_195, -1, 1);
        ((Active*)((Active*)single_instance_1636_76_0))->alterables->values.set(5, 1);
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(14);
        ((Active*)get_instance(bossserpentinearm_1863_instances))->set_direction(3);
        ((Active*)((Active*)single_instance_1636_76_0))->alterables->values.set(0, ((Active*)single_instance_1636_76_0)->get_x());
        ((Active*)((Active*)single_instance_1636_76_0))->alterables->values.set(1, ((Active*)single_instance_1636_76_0)->get_y());
    }
    event_1636_76_end: ;
}
void Frames::event_func_16984()
{
    // event 1637_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1637_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (19))) goto event_1637_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) >= (95))) goto event_1637_76_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_min((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)*9+((Active*)get_instance(bossmissile_2023_instances, default_active_instance))->get_x())*0.1, ((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()-global_values->get(16)*0.5-50));
    }
    event_1637_76_end: ;
}
void Frames::event_func_16985()
{
    // event 1638_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1638_76_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1638_76_end;
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+0.5, 16));
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1638_76_end: ;
}
void Frames::event_func_16986()
{
    // event 1639_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1639_76_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1639_76_end;
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(3));
        }
    }
    event_1639_76_end: ;
}
void Frames::event_func_16987()
{
    // event 1640_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1640_76_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->is_animation_finished(14))) goto event_1640_76_end;
        ((Active*)get_instance(npcserpentine_947_instances))->set_direction(0);
        ((Active*)get_instance(bossserpentinearm_1863_instances))->set_visible(false);
    }
    event_1640_76_end: ;
}
void Frames::event_func_16988()
{
    // event 1641_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1641_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (19))) goto event_1641_76_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1641_76_end;
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        media.play_id(SOUND_COMMON_EXPLODE2_98, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 10);
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
    }
    event_1641_76_end: ;
}
void Frames::event_func_16989()
{
    // event 1642_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1642_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (20))) goto event_1642_76_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_min(((Active*)*it)->blend_color.get_semi_transparency()+2, 128));
        }
    }
    event_1642_76_end: ;
}
void Frames::event_func_16990()
{
    // event 1643_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1643_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (20))) goto event_1643_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (100))) goto event_1643_76_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 2);
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1643_76_end: ;
}
void Frames::event_func_16991()
{
    // event 1644_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1644_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (20))) goto event_1644_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (160))) goto event_1644_76_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        media.play_id(SOUND_JETBOOST_2_61, -1, 1);
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(9);
        ((Active*)get_instance(npcserpentine_947_instances))->force_frame(4);
        ((Active*)get_instance(npcserpentine_947_instances))->restore_frame();
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(2, 10);
        ((Active*)get_instance(npcserpentine_947_instances))->set_x(((Active*)get_instance(npcserpentine_947_instances))->get_x()+600);
    }
    event_1644_76_end: ;
}
void Frames::event_func_16992()
{
    // event 1645_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1645_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (20))) goto event_1645_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (21))) goto event_1645_76_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1645_76_end;
        FrameObject * single_instance_1645_76_0; single_instance_1645_76_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(active_93_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust01_332(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1645_76_0 == NULL)
                    single_instance_1645_76_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1645_76_0))->set_x(((Active*)single_instance_1645_76_0)->get_x()-30+randrange(61));
        ((Active*)((Active*)single_instance_1645_76_0))->set_direction(pick_random(3, 7, 8, 9));
    }
    event_1645_76_end: ;
}
void Frames::event_func_16993()
{
    // event 1646_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1646_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (21))) goto event_1646_76_end;
        ((Active*)get_instance(npcserpentine_947_instances))->set_x(((Active*)get_instance(npcserpentine_947_instances))->get_x()+((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(2));
    }
    event_1646_76_end: ;
}
void Frames::event_func_16994()
{
    // event 1647_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1647_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (21))) goto event_1647_76_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_x()) > (((Active*)get_instance(npcshellduck_533_instances))->get_x()-100))) goto event_1647_76_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
    }
    event_1647_76_end: ;
}
void Frames::event_func_16995()
{
    // event 1648_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1648_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (22))) goto event_1648_76_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(2)) > (0))) goto event_1648_76_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(15);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(2, get_max(((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(2)-0.5, 0));
    }
    event_1648_76_end: ;
}
void Frames::event_func_16996()
{
    // event 1649_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1649_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (22))) goto event_1649_76_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(2)) <= (0))) goto event_1649_76_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(11);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
    }
    event_1649_76_end: ;
}
void Frames::event_func_16997()
{
    // event 1650_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1650_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (23))) goto event_1650_76_end;
        if (((Active*)get_instance(npcserpentine_947_instances))->test_animation(11)) goto event_1650_76_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(5);
        ((Active*)get_instance(npcserpentine_947_instances))->set_direction(28);
    }
    event_1650_76_end: ;
}
void Frames::event_func_16998()
{
    // event 1651_76
    bool or_result_1651_76 = false;
    bool or_temp_result_1651_76_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto or_event_1651_76_0_end;
        if (!((global_values->get(27)) == (0))) goto or_event_1651_76_0_end;
        npcshellduck_533_instances.clear_selection();
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (24))) { it.deselect(); continue; }
        }
        if (!npcshellduck_533_instances.has_selection()) goto or_event_1651_76_0_end;
        if (!((media.get_channel_position(-1 +20)) > (1750))) goto or_event_1651_76_0_end;
        or_result_1651_76 = true;
        or_temp_result_1651_76_0 = true;
    }
    or_event_1651_76_0_end: ;
    npcshellduck_533_instances.clear_saved_selection();
    if (or_temp_result_1651_76_0) {
        npcshellduck_533_instances.save_selection();
    }
    // event 1651_76
    bool or_temp_result_1651_76_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto or_event_1651_76_1_end;
        if (!((global_values->get(27)) == (1))) goto or_event_1651_76_1_end;
        npcshellduck_533_instances.clear_selection();
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (24))) { it.deselect(); continue; }
        }
        if (!npcshellduck_533_instances.has_selection()) goto or_event_1651_76_1_end;
        or_result_1651_76 = true;
        or_temp_result_1651_76_1 = true;
        or_event_1651_76_1_end: ;
        if (or_temp_result_1651_76_1) {
            npcshellduck_533_instances.save_selection();
        }
        if (!or_result_1651_76) goto or_final_or_event_1651_76_1_end;
        npcshellduck_533_instances.empty_selection();
        if (or_temp_result_1651_76_0 || or_temp_result_1651_76_1) {
            npcshellduck_533_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
        }
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    or_final_or_event_1651_76_1_end: ;
}
void Frames::event_func_16999()
{
    // event 1652_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1652_76_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1652_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (25))) goto event_1652_76_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1652_76_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        media.stop_channel(20-1);
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(9);
        ((Active*)get_instance(npcserpentine_947_instances))->restore_frame();
        ((Active*)get_instance(npcserpentine_947_instances))->set_direction(16);
    }
    event_1652_76_end: ;
}
void Frames::event_func_17000()
{
    // event 1653_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1653_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (25))) goto event_1653_76_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_frame()) >= (4))) goto event_1653_76_end;
        media.play_id(SOUND_JETBOOST_2_61, -1, 1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(2, -10);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        FrameObject * single_instance_1653_76_0; single_instance_1653_76_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(npcserpentine_947_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1653_76_0 == NULL)
                    single_instance_1653_76_0 = new_obj;
            }
        }
    }
    event_1653_76_end: ;
}
void Frames::event_func_17001()
{
    // event 1654_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1654_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (26))) goto event_1654_76_end;
        ((Active*)get_instance(npcserpentine_947_instances))->set_x(((Active*)get_instance(npcserpentine_947_instances))->get_x()+((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(2));
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
    }
    event_1654_76_end: ;
}
void Frames::event_func_17002()
{
    // event 1655_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1655_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (26))) goto event_1655_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (80))) goto event_1655_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) <= (110))) goto event_1655_76_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-3);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->set_angle(0, 0);
        }
    }
    event_1655_76_end: ;
}
void Frames::event_func_17003()
{
    // event 1656_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1656_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (26))) goto event_1656_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (110))) goto event_1656_76_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(1);
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(0);
        ((Active*)get_instance(npcshellduck_533_instances))->set_x(((Active*)get_instance(npcshellduck_533_instances))->get_x()+3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 1);
    }
    event_1656_76_end: ;
}
void Frames::event_func_17004()
{
    // event 1657_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1657_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (26))) goto event_1657_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (140))) goto event_1657_76_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(5);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(16);
    }
    event_1657_76_end: ;
}
void Frames::event_func_17005()
{
    // event 1658_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1658_76_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1658_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (26))) goto event_1658_76_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1658_76_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->set_layer(4-1);
    }
    event_1658_76_end: ;
}
void Frames::event_func_17006()
{
    // event 1659_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1659_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (28))) goto event_1659_76_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(1);
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(16);
        ((Active*)get_instance(npcshellduck_533_instances))->set_x(((Active*)get_instance(npcshellduck_533_instances))->get_x()-4);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->restore_frame();
    }
    event_1659_76_end: ;
}
void Frames::event_func_17007()
{
    // event 1660_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1660_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (28))) goto event_1660_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (30))) goto event_1660_76_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(5);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1660_76_end: ;
}
void Frames::event_func_17008()
{
    // event 1661_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1661_76_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1661_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (27))) goto event_1661_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (29))) goto event_1661_76_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1661_76_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1661_76_end: ;
}
void Frames::event_func_17009()
{
    // event 1662_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1662_76_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1662_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (29))) goto event_1662_76_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1662_76_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
    }
    event_1662_76_end: ;
}
void Frames::event_func_17010()
{
    // event 1663_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1663_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (30))) goto event_1663_76_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(placeholdercharacter_1588_instances))->set_direction(1);
        {
            FrameObject * parent = ((Active*)get_instance(playerskinsash_418_instances));
            if (parent == NULL) goto pos_end_1663_76_0;
            ((Active*)get_instance(placeholdercharacter_1588_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1663_76_0: ;
        }
        ((Active*)get_instance(placeholdercharactertail_3891_instances))->set_direction(1);
        {
            FrameObject * parent = ((Active*)get_instance(playerskinsash_418_instances));
            if (parent == NULL) goto pos_end_1663_76_1;
            ((Active*)get_instance(placeholdercharactertail_3891_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1663_76_1: ;
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_y());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()-600);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 10);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 3);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 30);
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
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
    }
    event_1663_76_end: ;
}
void Frames::event_func_17011()
{
    // event 1664_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1664_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (31))) goto event_1664_76_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.sub(1, 0.1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
    }
    event_1664_76_end: ;
}
void Frames::event_func_17012()
{
    // event 1665_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1665_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (31))) goto event_1665_76_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (6))) goto event_1665_76_end;
        ((Active*)get_instance(placeholdercharacter_1588_instances))->set_direction(17);
        ((Active*)get_instance(placeholdercharactertail_3891_instances))->set_direction(17);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)-2, ((Active*)get_instance(npcshellduck_533_instances))->get_x()-120));
    }
    event_1665_76_end: ;
}
void Frames::event_func_17013()
{
    // event 1666_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1666_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (31))) goto event_1666_76_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) <= (0))) goto event_1666_76_end;
        FrameObject * single_instance_1666_76_0; single_instance_1666_76_0 = NULL;
        // select single: true false false
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator p_it(playerskincarolbike_382_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectbike_322(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1666_76_0 == NULL)
                    single_instance_1666_76_0 = new_obj;
            }
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 2);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
    }
    event_1666_76_end: ;
}
void Frames::event_func_17014()
{
    // event 1667_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1667_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (32))) goto event_1667_76_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 5);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 1);
    }
    event_1667_76_end: ;
}
void Frames::event_func_17015()
{
    // event 1668_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1668_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (32))) goto event_1668_76_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(npcshellduck_533_instances))->get_x()-160))) goto event_1668_76_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
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
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
    }
    event_1668_76_end: ;
}
void Frames::event_func_17016()
{
    // event 1669_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1669_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (33))) goto event_1669_76_end;
        if (!((playerskinsash_418_instances.size()) > (0))) goto event_1669_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (37))) goto event_1669_76_end;
        ((Active*)get_instance(placeholdercharacter_1588_instances))->set_visible(false);
        ((Active*)get_instance(placeholdercharactertail_3891_instances))->set_visible(false);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_animation(40);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(placeholdercharacter_1588_instances));
            if (parent == NULL) goto pos_end_1669_76_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1669_76_0: ;
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0, 0);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0, 0);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1669_76_end: ;
}
void Frames::event_func_17017()
{
    // event 1670_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1670_76_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1670_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (31))) goto event_1670_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (41))) goto event_1670_76_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1670_76_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1670_76_end: ;
}
void Frames::event_func_17018()
{
    // event 1671_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1671_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (33))) goto event_1671_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (37))) goto event_1671_76_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_x()+30))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1671_76_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(21);
        }
    }
    event_1671_76_end: ;
}
void Frames::event_func_17019()
{
    // event 1672_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1672_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (33))) goto event_1672_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (37))) goto event_1672_76_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_x()+30))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1672_76_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 27);
    }
    event_1672_76_end: ;
}
void Frames::event_func_17020()
{
    // event 1673_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1673_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (38))) goto event_1673_76_end;
        if (not_always_1673_76 > loop_count) {
            not_always_1673_76 = loop_count + 2;
            goto event_1673_76_end;
        }
        not_always_1673_76 = loop_count + 2;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playerskincarol_445_instances, it.current_index, default_active_instance))->get_x()+30);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1673_76_end: ;
}
void Frames::event_func_17021()
{
    // event 1674_76
    bool or_result_1674_76 = false;
    bool or_temp_result_1674_76_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto or_event_1674_76_0_end;
        if (!((global_values->get(27)) == (0))) goto or_event_1674_76_0_end;
        npcshellduck_533_instances.clear_selection();
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (33))) { it.deselect(); continue; }
        }
        if (!npcshellduck_533_instances.has_selection()) goto or_event_1674_76_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (37))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1674_76_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_x()+30))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1674_76_0_end;
        if (!((media.get_channel_position(-1 +20)) > (1740))) goto or_event_1674_76_0_end;
        or_result_1674_76 = true;
        or_temp_result_1674_76_0 = true;
    }
    or_event_1674_76_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    npcshellduck_533_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1674_76_0) {
        dialogbox_566_instances.save_selection();
        npcshellduck_533_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 1674_76
    bool or_temp_result_1674_76_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto or_event_1674_76_1_end;
        if (!((global_values->get(27)) == (1))) goto or_event_1674_76_1_end;
        npcshellduck_533_instances.clear_selection();
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (33))) { it.deselect(); continue; }
        }
        if (!npcshellduck_533_instances.has_selection()) goto or_event_1674_76_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (37))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1674_76_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_x()+30))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1674_76_1_end;
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (20))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1674_76_1_end;
        or_result_1674_76 = true;
        or_temp_result_1674_76_1 = true;
        or_event_1674_76_1_end: ;
        if (or_temp_result_1674_76_1) {
            dialogbox_566_instances.save_selection();
            npcshellduck_533_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1674_76) goto or_final_or_event_1674_76_1_end;
        playerskinsash_418_instances.empty_selection();
        npcshellduck_533_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1674_76_0 || or_temp_result_1674_76_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1674_76_0 || or_temp_result_1674_76_1) {
            npcshellduck_533_instances.restore_selection();
        }
        if (or_temp_result_1674_76_0 || or_temp_result_1674_76_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 30);
        }
    }
    or_final_or_event_1674_76_1_end: ;
}
void Frames::event_func_17022()
{
    // event 1675_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1675_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (33))) goto event_1675_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (38))) goto event_1675_76_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()+60))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1675_76_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(27);
        }
    }
    event_1675_76_end: ;
}
void Frames::event_func_17023()
{
    // event 1676_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1676_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (33))) goto event_1676_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (38))) goto event_1676_76_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()+60))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1676_76_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 9);
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1676_76_end: ;
}
void Frames::event_func_17024()
{
    // event 1677_76
    bool or_result_1677_76 = false;
    bool or_temp_result_1677_76_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto or_event_1677_76_0_end;
        if (!((global_values->get(27)) == (0))) goto or_event_1677_76_0_end;
        npcshellduck_533_instances.clear_selection();
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (33))) { it.deselect(); continue; }
        }
        if (!npcshellduck_533_instances.has_selection()) goto or_event_1677_76_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (38))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1677_76_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_x()+30))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1677_76_0_end;
        if (!((media.get_channel_position(-1 +20)) > (2380))) goto or_event_1677_76_0_end;
        or_result_1677_76 = true;
        or_temp_result_1677_76_0 = true;
    }
    or_event_1677_76_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    npcshellduck_533_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1677_76_0) {
        dialogbox_566_instances.save_selection();
        npcshellduck_533_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 1677_76
    bool or_temp_result_1677_76_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto or_event_1677_76_1_end;
        if (!((global_values->get(27)) == (1))) goto or_event_1677_76_1_end;
        npcshellduck_533_instances.clear_selection();
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (33))) { it.deselect(); continue; }
        }
        if (!npcshellduck_533_instances.has_selection()) goto or_event_1677_76_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (38))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1677_76_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_x()+30))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1677_76_1_end;
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (35))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1677_76_1_end;
        or_result_1677_76 = true;
        or_temp_result_1677_76_1 = true;
        or_event_1677_76_1_end: ;
        if (or_temp_result_1677_76_1) {
            dialogbox_566_instances.save_selection();
            npcshellduck_533_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1677_76) goto or_final_or_event_1677_76_1_end;
        playerskinsash_418_instances.empty_selection();
        npcshellduck_533_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1677_76_0 || or_temp_result_1677_76_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1677_76_0 || or_temp_result_1677_76_1) {
            npcshellduck_533_instances.restore_selection();
        }
        if (or_temp_result_1677_76_0 || or_temp_result_1677_76_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 18);
        }
    }
    or_final_or_event_1677_76_1_end: ;
}
void Frames::event_func_17025()
{
    // event 1678_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1678_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (39))) goto event_1678_76_end;
        if (not_always_1678_76 > loop_count) {
            not_always_1678_76 = loop_count + 2;
            goto event_1678_76_end;
        }
        not_always_1678_76 = loop_count + 2;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playerskinsash_418_instances, it.current_index, default_active_instance))->get_x()+60);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1678_76_end: ;
}
void Frames::event_func_17026()
{
    // event 1679_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1679_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (33))) goto event_1679_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (39))) goto event_1679_76_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 6);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1679_76_end: ;
}
void Frames::event_func_17027()
{
    // event 1680_76
    bool or_result_1680_76 = false;
    bool or_temp_result_1680_76_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto or_event_1680_76_0_end;
        if (!((global_values->get(27)) == (0))) goto or_event_1680_76_0_end;
        npcshellduck_533_instances.clear_selection();
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (33))) { it.deselect(); continue; }
        }
        if (!npcshellduck_533_instances.has_selection()) goto or_event_1680_76_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (39))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1680_76_0_end;
        if (!((media.get_channel_position(-1 +20)) > (1450))) goto or_event_1680_76_0_end;
        or_result_1680_76 = true;
        or_temp_result_1680_76_0 = true;
    }
    or_event_1680_76_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    npcshellduck_533_instances.clear_saved_selection();
    if (or_temp_result_1680_76_0) {
        dialogbox_566_instances.save_selection();
        npcshellduck_533_instances.save_selection();
    }
    // event 1680_76
    bool or_temp_result_1680_76_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto or_event_1680_76_1_end;
        if (!((global_values->get(27)) == (1))) goto or_event_1680_76_1_end;
        npcshellduck_533_instances.clear_selection();
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (33))) { it.deselect(); continue; }
        }
        if (!npcshellduck_533_instances.has_selection()) goto or_event_1680_76_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (39))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (20))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1680_76_1_end;
        or_result_1680_76 = true;
        or_temp_result_1680_76_1 = true;
        or_event_1680_76_1_end: ;
        if (or_temp_result_1680_76_1) {
            dialogbox_566_instances.save_selection();
            npcshellduck_533_instances.save_selection();
        }
        if (!or_result_1680_76) goto or_final_or_event_1680_76_1_end;
        npcshellduck_533_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1680_76_0 || or_temp_result_1680_76_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1680_76_0 || or_temp_result_1680_76_1) {
            npcshellduck_533_instances.restore_selection();
        }
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 12);
        }
    }
    or_final_or_event_1680_76_1_end: ;
}
void Frames::event_func_17028()
{
    // event 1681_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1681_76_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1681_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (41))) goto event_1681_76_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1681_76_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
    }
    event_1681_76_end: ;
}
void Frames::event_func_17029()
{
    // event 1682_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1682_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (34))) goto event_1682_76_end;
        if (not_always_1682_76 > loop_count) {
            not_always_1682_76 = loop_count + 2;
            goto event_1682_76_end;
        }
        not_always_1682_76 = loop_count + 2;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 2);
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        media.stop_channel(32-1);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
    }
    event_1682_76_end: ;
}
void Frames::event_func_17030()
{
    // event 1683_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1683_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (34))) goto event_1683_76_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()-2);
        }
    }
    event_1683_76_end: ;
}
void Frames::event_func_17031()
{
    // event 1684_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1684_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (34))) goto event_1684_76_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) <= (0))) goto event_1684_76_end;
        next_frame = 14 + 0;    
    
        global_values->set(4, 11);
    }
    event_1684_76_end: ;
}
void Frames::event_func_17032()
{
    // event 1691_76
    {
        if (!(group_main_engine_1)) goto event_1691_76_end;
        enemylaser_1626_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(enemylaser_1626_instances, playercharactersensor_383_instances)) goto event_1691_76_end;
        for (ObjectIterator it(enemylaser_1626_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (4))) { it.deselect(); continue; }
        }
        if (!enemylaser_1626_instances.has_selection()) goto event_1691_76_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1691_76_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1691_76_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1691_76_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1691_76_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        for (ObjectIterator it(enemylaser_1626_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1691_76_0; single_instance_1691_76_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemylaser_1626_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1691_76_0 == NULL)
                    single_instance_1691_76_0 = new_obj;
            }
        }
    }
    event_1691_76_end: ;
}
void Frames::event_func_17033()
{
    // event 1692_76
    {
        if (!(group_main_engine_1)) goto event_1692_76_end;
        if (!((playerskinsash_418_instances.size()) == (0))) goto event_1692_76_end;
        FrameObject * single_instance_1692_76_0; single_instance_1692_76_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinsash_418(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1692_76_0 == NULL)
                    single_instance_1692_76_0 = new_obj;
            }
        }
    }
    event_1692_76_end: ;
}
void Frames::event_func_17034()
{
    // event 1693_76
    {
        if (!(group_main_engine_1)) goto event_1693_76_end;
        if (!((playerskinspade_419_instances.size()) == (0))) goto event_1693_76_end;
        FrameObject * single_instance_1693_76_0; single_instance_1693_76_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinspade_419(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1693_76_0 == NULL)
                    single_instance_1693_76_0 = new_obj;
            }
        }
    }
    event_1693_76_end: ;
}
void Frames::event_func_17035()
{
    // event 1694_76
    {
        if (!(group_main_engine_1)) goto event_1694_76_end;
        if (!((playerskincarol_445_instances.size()) == (0))) goto event_1694_76_end;
        FrameObject * single_instance_1694_76_0; single_instance_1694_76_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincarol_445(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1694_76_0 == NULL)
                    single_instance_1694_76_0 = new_obj;
            }
        }
    }
    event_1694_76_end: ;
}
