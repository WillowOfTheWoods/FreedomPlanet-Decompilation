#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_20221()
{
    // event 2608_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2608_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (22))) goto event_2608_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(2, 0.4);
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)get_instance(themagister_2115_instances))->alterables->values.get(2));
        }
    }
    event_2608_83_end: ;
}
void Frames::event_func_20222()
{
    // event 2609_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2609_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (22))) goto event_2609_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(2)) > (0))) goto event_2609_83_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (5361))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_2609_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(5361);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_layer(4-1);
        }
    }
    event_2609_83_end: ;
}
void Frames::event_func_20223()
{
    // event 2610_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2610_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (23))) goto event_2610_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (20))) goto event_2610_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
    }
    event_2610_83_end: ;
}
void Frames::event_func_20224()
{
    // event 2611_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2611_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (23))) goto event_2611_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (40))) goto event_2611_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(24);
        }
    }
    event_2611_83_end: ;
}
void Frames::event_func_20225()
{
    // event 2612_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2612_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (23))) goto event_2612_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (70))) goto event_2612_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 260);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_2612_83_end: ;
}
void Frames::event_func_20226()
{
    // event 2613_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2613_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2613_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (260))) goto event_2613_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2613_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2613_83_end: ;
}
void Frames::event_func_20227()
{
    // event 2614_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2614_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (261))) goto event_2614_83_end;
        if (not_always_2614_83 > loop_count) {
            not_always_2614_83 = loop_count + 2;
            goto event_2614_83_end;
        }
        not_always_2614_83 = loop_count + 2;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_2614_83_end: ;
}
void Frames::event_func_20228()
{
    // event 2615_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2615_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2615_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (261))) goto event_2615_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) <= (264))) goto event_2615_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2615_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2615_83_end: ;
}
void Frames::event_func_20229()
{
    // event 2616_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2616_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (25))) goto event_2616_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (20))) goto event_2616_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (40))) goto event_2616_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
    }
    event_2616_83_end: ;
}
void Frames::event_func_20230()
{
    // event 2617_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2617_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (25))) goto event_2617_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (40))) goto event_2617_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->restore_speed();
        }
    }
    event_2617_83_end: ;
}
void Frames::event_func_20231()
{
    // event 2618_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2618_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (25))) goto event_2618_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (120))) goto event_2618_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_2618_83_end: ;
}
void Frames::event_func_20232()
{
    // event 2619_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2619_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (25))) goto event_2619_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (160))) goto event_2619_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(48);
        }
        media.play_id(SOUND_MILLA_HURT0_179, -1, 1);
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_2619_83_end: ;
}
void Frames::event_func_20233()
{
    // event 2620_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2620_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (25))) goto event_2620_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (200))) goto event_2620_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_2620_83_end: ;
}
void Frames::event_func_20234()
{
    // event 2621_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2621_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (27))) goto event_2621_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (80))) goto event_2621_83_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 2);
    }
    event_2621_83_end: ;
}
void Frames::event_func_20235()
{
    // event 2622_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2622_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (27))) goto event_2622_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (40))) goto event_2622_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (75))) goto event_2622_83_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
    }
    event_2622_83_end: ;
}
void Frames::event_func_20236()
{
    // event 2623_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2623_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (27))) goto event_2623_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (75))) goto event_2623_83_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(21);
            ((Active*)*it)->set_direction(31);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
        }
        media.play_id(SOUND_TORQUE_TRANSFORM_436, -1, 1);
    }
    event_2623_83_end: ;
}
void Frames::event_func_20237()
{
    // event 2624_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2624_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (27))) goto event_2624_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (50))) goto event_2624_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (80))) goto event_2624_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
    }
    event_2624_83_end: ;
}
void Frames::event_func_20238()
{
    // event 2625_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2625_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (27))) goto event_2625_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (80))) goto event_2625_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(27);
        }
    }
    event_2625_83_end: ;
}
void Frames::event_func_20239()
{
    // event 2626_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2626_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (27))) goto event_2626_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (120))) goto event_2626_83_end;
        {
            FrameObject * parent = ((Active*)get_instance(playerskintorque_450_instances));
            if (parent == NULL) goto pos_end_2626_83_0;
            ((Active*)get_instance(npcshellduck_533_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2626_83_0: ;
        }
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(5);
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(0);
        ((Active*)get_instance(npcshellduck_533_instances))->force_frame(15);
        ((Active*)get_instance(npcshellduck_533_instances))->set_visible(true);
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_2626_83_end: ;
}
void Frames::event_func_20240()
{
    // event 2627_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2627_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (27))) goto event_2627_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (130))) goto event_2627_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        jeepbase_3991_instances.clear_selection();
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -10);
        }
        ((Active*)get_instance(gongshield_633_instances))->set_layer(3-1);
        ((Active*)get_instance(npcgong_634_instances))->set_direction(16);
        ((Active*)get_instance(npcgong_634_instances))->set_layer(3-1);
    }
    event_2627_83_end: ;
}
void Frames::event_func_20241()
{
    // event 2628_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2628_83_end;
        if (once_condition_2628_83) goto event_2628_83_end;
        once_condition_2628_83 = true;
        jeepbase_3991_instances.clear_selection();
        spread_value(jeepbase_3991_instances, 4, 0);
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(5, 950-((Active*)*it)->alterables->values.get(4)*100);
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->alterables->values.get(4)*10);
        }
    }
    event_2628_83_end: ;
}
void Frames::event_func_20242()
{
    // event 2629_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2629_83_end;
        jeepbase_3991_instances.clear_selection();
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1)+randrange(get_max(0, get_min(get_abs(((Active*)*it)->alterables->values.get(3)), 3))));
        }
        jeepwheel1_3992_instances.clear_selection();
        for (ObjectIterator it(jeepwheel1_3992_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(jeepbase_3991_instances, it.current_index));
            if (parent == NULL) goto pos_end_2629_83_0;
            ((Active*)*it)->set_global_position(parent->get_x() + -64, parent->get_y() + 37);
            pos_end_2629_83_0: ;
        }
        for (ObjectIterator it(jeepwheel1_3992_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(jeepbase_3991_instances, it.current_index, default_active_instance))->alterables->values.get(2), 0);
        }
        jeepwheel2_3993_instances.clear_selection();
        for (ObjectIterator it(jeepwheel2_3993_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(jeepbase_3991_instances, it.current_index));
            if (parent == NULL) goto pos_end_2629_83_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 64, parent->get_y() + 37);
            pos_end_2629_83_1: ;
        }
        for (ObjectIterator it(jeepwheel2_3993_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(jeepbase_3991_instances, it.current_index, default_active_instance))->alterables->values.get(2), 0);
        }
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, ((Active*)*it)->alterables->values.get(3)*-3);
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(3));
        }
        {
            ObjectIterator other_it(jeepbase_3991_instances);
            for (ObjectIterator it(jeepwheel1_3992_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_2629_83_2_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_2629_83_2_end: ;
        {
            ObjectIterator other_it(jeepbase_3991_instances);
            for (ObjectIterator it(jeepwheel2_3993_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_2629_83_3_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_2629_83_3_end: ;
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
    }
    event_2629_83_end: ;
}
void Frames::event_func_20243()
{
    // event 2630_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2630_83_end;
        jeepbase_3991_instances.clear_selection();
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!jeepbase_3991_instances.has_selection()) goto event_2630_83_end;
        {
            FrameObject * parent = ((Active*)get_single(jeepbase_3991_instances));
            if (parent == NULL) goto pos_end_2630_83_0;
            ((Active*)get_instance(npcgong_634_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 0);
            pos_end_2630_83_0: ;
        }
        ((Active*)get_instance(npcgong_634_instances))->move_back(((Active*)get_single(jeepbase_3991_instances)));
        {
            FrameObject * parent = ((Active*)get_instance(npcgong_634_instances));
            if (parent == NULL) goto pos_end_2630_83_1;
            ((Active*)get_instance(gongshield_633_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2630_83_1: ;
        }
        ((Active*)get_instance(gongshield_633_instances))->set_direction(((Active*)get_instance(npcgong_634_instances))->get_direction());
        ((Active*)get_instance(gongshield_633_instances))->move_back(((Active*)get_instance(npcgong_634_instances)));
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(17);
        }
    }
    event_2630_83_end: ;
}
void Frames::event_func_20244()
{
    // event 2631_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2631_83_end;
        jeepbase_3991_instances.clear_selection();
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (100))) { it.deselect(); continue; }
        }
        if (!jeepbase_3991_instances.has_selection()) goto event_2631_83_end;
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 50-randrange(100));
            ((Active*)*it)->force_frame(randrange(4));
        }
    }
    event_2631_83_end: ;
}
void Frames::event_func_20245()
{
    // event 2632_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2632_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (29))) goto event_2632_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (200))) goto event_2632_83_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)*0.05, 3));
        jeepbase_3991_instances.clear_selection();
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_2632_83_end: ;
}
void Frames::event_func_20246()
{
    // event 2633_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2633_83_end;
        jeepbase_3991_instances.clear_selection();
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (frame_right()+100))) { it.deselect(); continue; }
        }
        if (!jeepbase_3991_instances.has_selection()) goto event_2633_83_end;
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        media.play_id(SOUND_SCENE_JEEPSTOP_435, -1, 1);
    }
    event_2633_83_end: ;
}
void Frames::event_func_20247()
{
    // event 2634_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2634_83_end;
        jeepbase_3991_instances.clear_selection();
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)*it)->alterables->values.get(5)))) { it.deselect(); continue; }
        }
        if (!jeepbase_3991_instances.has_selection()) goto event_2634_83_end;
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_2634_83_end: ;
}
void Frames::event_func_20248()
{
    // event 2635_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2635_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (29))) goto event_2635_83_end;
        jeepbase_3991_instances.clear_selection();
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!jeepbase_3991_instances.has_selection()) goto event_2635_83_end;
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+0.1, 0));
        }
    }
    event_2635_83_end: ;
}
void Frames::event_func_20249()
{
    // event 2636_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2636_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (29))) goto event_2636_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (120))) goto event_2636_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
    }
    event_2636_83_end: ;
}
void Frames::event_func_20250()
{
    // event 2637_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2637_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (29))) goto event_2637_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (130))) goto event_2637_83_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_frame(0);
    }
    event_2637_83_end: ;
}
void Frames::event_func_20251()
{
    // event 2638_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2638_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (29))) goto event_2638_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (140))) goto event_2638_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(36);
        }
    }
    event_2638_83_end: ;
}
void Frames::event_func_20252()
{
    // event 2639_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2639_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (29))) goto event_2639_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (150))) goto event_2639_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(npcgong_634_instances))->force_animation(5);
    }
    event_2639_83_end: ;
}
void Frames::event_func_20253()
{
    // event 2640_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2640_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (30))) goto event_2640_83_end;
        jeepbase_3991_instances.clear_selection();
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (0))) { it.deselect(); continue; }
        }
        if (!jeepbase_3991_instances.has_selection()) goto event_2640_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_2640_83_end: ;
}
void Frames::event_func_20254()
{
    // event 2641_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2641_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (272))) goto event_2641_83_end;
        if (not_always_2641_83 > loop_count) {
            not_always_2641_83 = loop_count + 2;
            goto event_2641_83_end;
        }
        not_always_2641_83 = loop_count + 2;
        ((Active*)get_instance(npcshellduck_533_instances))->force_frame(0);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
    }
    event_2641_83_end: ;
}
void Frames::event_func_20255()
{
    // event 2642_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2642_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2642_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (265))) goto event_2642_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (273))) goto event_2642_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2642_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2642_83_end: ;
}
void Frames::event_func_20256()
{
    // event 2643_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2643_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (273))) goto event_2643_83_end;
        if (!((media.get_channel_position(-1 +20)) > (1900))) goto event_2643_83_end;
        if (!((media.get_channel_position(-1 +20)) < (2200))) goto event_2643_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 21);
        ((Active*)get_instance(npcgong_634_instances))->force_frame(21);
    }
    event_2643_83_end: ;
}
void Frames::event_func_20257()
{
    // event 2644_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2644_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (273))) goto event_2644_83_end;
        if (!((media.get_channel_position(-1 +20)) >= (2200))) goto event_2644_83_end;
        if (!((media.get_channel_position(-1 +20)) < (2600))) goto event_2644_83_end;
        ((Active*)get_instance(npcgong_634_instances))->force_frame(22);
    }
    event_2644_83_end: ;
}
void Frames::event_func_20258()
{
    // event 2645_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2645_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (273))) goto event_2645_83_end;
        if (!((media.get_channel_position(-1 +20)) > (2600))) goto event_2645_83_end;
        if (!((media.get_channel_position(-1 +20)) < (3000))) goto event_2645_83_end;
        ((Active*)get_instance(npcgong_634_instances))->force_frame(21);
    }
    event_2645_83_end: ;
}
void Frames::event_func_20259()
{
    // event 2646_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2646_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (273))) goto event_2646_83_end;
        if (!((media.get_channel_position(-1 +20)) > (3650))) goto event_2646_83_end;
        if (!((media.get_channel_position(-1 +20)) < (4100))) goto event_2646_83_end;
        ((Active*)get_instance(npcgong_634_instances))->force_frame(21);
    }
    event_2646_83_end: ;
}
void Frames::event_func_20260()
{
    // event 2647_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2647_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (273))) goto event_2647_83_end;
        if (!((media.get_channel_position(-1 +20)) > (5800))) goto event_2647_83_end;
        if (once_condition_2647_83) goto event_2647_83_end;
        once_condition_2647_83 = true;
        ((Active*)get_instance(npcgong_634_instances))->force_frame(18);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 18);
    }
    event_2647_83_end: ;
}
void Frames::event_func_20261()
{
    // event 2648_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2648_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2648_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (273))) goto event_2648_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2648_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcstofficer_3941_instances))->set_layer(3-1);
        ((Active*)get_instance(npcstofficer_3941_instances))->move_back();
        ((Active*)get_instance(npcstofficer_3941_instances))->set_x(((Active*)get_instance(npcgong_634_instances))->get_x());
        ((Active*)get_instance(npcstofficer_3941_instances))->set_y(((Active*)get_instance(npcgong_634_instances))->get_y());
        ((Active*)get_instance(npcstofficer_3941_instances))->set_direction(16);
    }
    event_2648_83_end: ;
}
void Frames::event_func_20262()
{
    // event 2649_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2649_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (32))) goto event_2649_83_end;
        ((Active*)get_instance(npcstofficer_3941_instances))->move_back();
    }
    event_2649_83_end: ;
}
void Frames::event_func_20263()
{
    // event 2650_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2650_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (32))) goto event_2650_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (4))) goto event_2650_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (10))) goto event_2650_83_end;
        ((Active*)get_instance(npcstofficer_3941_instances))->set_y(((Active*)get_instance(npcstofficer_3941_instances))->get_y()-5);
    }
    event_2650_83_end: ;
}
void Frames::event_func_20264()
{
    // event 2651_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2651_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (32))) goto event_2651_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (10))) goto event_2651_83_end;
        ((Active*)get_instance(npcstofficer_3941_instances))->force_animation(5);
        media.play_id(SOUND_WANGH_2_364, -1, 1);
    }
    event_2651_83_end: ;
}
void Frames::event_func_20265()
{
    // event 2652_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2652_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (32))) goto event_2652_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (33))) goto event_2652_83_end;
        ((Active*)get_instance(npcstofficer_3941_instances))->force_animation(0);
    }
    event_2652_83_end: ;
}
void Frames::event_func_20266()
{
    // event 2653_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2653_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (32))) goto event_2653_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (80))) goto event_2653_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(0, 3);
    }
    event_2653_83_end: ;
}
void Frames::event_func_20267()
{
    // event 2654_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2654_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2654_83_end;
        if (not_always_2654_83 > loop_count) {
            not_always_2654_83 = loop_count + 2;
            goto event_2654_83_end;
        }
        not_always_2654_83 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
            group_pause_1 = false;
    
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_1000_209);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_2654_83_end: ;
}
void Frames::event_func_20268()
{
    // event 2655_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2655_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2655_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
    }
    event_2655_83_end: ;
}
void Frames::event_func_20269()
{
    // event 2656_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2656_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2656_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2656_83_end;
        if (!((global_values->get(1)) == (0))) goto event_2656_83_end;
        global_values->set(4, 19);
        next_frame = (index+1-0)-1 + 0;    
    
    }
    event_2656_83_end: ;
}
void Frames::event_func_20270()
{
    // event 2657_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1)) goto event_2657_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2657_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2657_83_end;
        if (!((global_values->get(1)) != (0))) goto event_2657_83_end;
        global_values->set(4, 0);
        next_frame = 82 + 0;    
    
    }
    event_2657_83_end: ;
}
void Frames::event_func_20271()
{
    // event 2659_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_arrest_1)) goto event_2659_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
    }
    event_2659_83_end: ;
}
void Frames::event_func_20272()
{
    // event 2660_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_arrest_1)) goto event_2660_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2660_83_end;
        if (once_condition_2660_83) goto event_2660_83_end;
        once_condition_2660_83 = true;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 213);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, height);
        ((TextBlitter*)get_instance(message2_43_instances))->load(str_data_font_bmp_7);
        ((TextBlitter*)get_instance(message2_43_instances))->set_text(str_placeholder_frame_for_338+newline_character+newline_character+str_outside_thermal_base_lilac_s_arrest_339+newline_character+newline_character+str_press_any_button_to_continue_340);
    }
    event_2660_83_end: ;
}
void Frames::event_func_20273()
{
    // event 2661_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_arrest_1)) goto event_2661_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2661_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1161);
            ((Active*)*it)->set_x(-48);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1161);
            ((Active*)*it)->set_x(-128);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(themagister_2115_instances))->force_animation(5);
        ((Active*)get_instance(themagister_2115_instances))->force_frame(3);
    }
    event_2661_83_end: ;
}
void Frames::event_func_20274()
{
    // event 2662_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_arrest_1)) goto event_2662_83_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_2662_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2662_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
    }
    event_2662_83_end: ;
}
void Frames::event_func_20275()
{
    // event 2663_83
    bool or_result_2663_83 = false;
    bool or_temp_result_2663_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_arrest_1)) goto or_event_2663_83_0_end;
        themagister_2115_instances.clear_selection();
        for (ObjectIterator it(themagister_2115_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!themagister_2115_instances.has_selection()) goto or_event_2663_83_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2663_83_0_end;
        or_result_2663_83 = true;
        or_temp_result_2663_83_0 = true;
    }
    or_event_2663_83_0_end: ;
    themagister_2115_instances.clear_saved_selection();
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_2663_83_0) {
        themagister_2115_instances.save_selection();
        inputsp1_21_instances.save_selection();
    }
    // event 2663_83
    bool or_temp_result_2663_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_arrest_1)) goto or_event_2663_83_1_end;
        themagister_2115_instances.clear_selection();
        for (ObjectIterator it(themagister_2115_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!themagister_2115_instances.has_selection()) goto or_event_2663_83_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2663_83_1_end;
        or_result_2663_83 = true;
        or_temp_result_2663_83_1 = true;
    }
    or_event_2663_83_1_end: ;
    if (or_temp_result_2663_83_1) {
        themagister_2115_instances.save_selection();
        inputsp1_21_instances.save_selection();
    }
    // event 2663_83
    bool or_temp_result_2663_83_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_arrest_1)) goto or_event_2663_83_2_end;
        themagister_2115_instances.clear_selection();
        for (ObjectIterator it(themagister_2115_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!themagister_2115_instances.has_selection()) goto or_event_2663_83_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2663_83_2_end;
        or_result_2663_83 = true;
        or_temp_result_2663_83_2 = true;
        or_event_2663_83_2_end: ;
        if (or_temp_result_2663_83_2) {
            themagister_2115_instances.save_selection();
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_2663_83) goto or_final_or_event_2663_83_2_end;
        inputsp1_21_instances.empty_selection();
        themagister_2115_instances.empty_selection();
        if (or_temp_result_2663_83_0 || or_temp_result_2663_83_1 || or_temp_result_2663_83_2) {
            themagister_2115_instances.restore_selection();
        }
        if (or_temp_result_2663_83_0 || or_temp_result_2663_83_1 || or_temp_result_2663_83_2) {
            inputsp1_21_instances.restore_selection();
        }
        for (ObjectIterator it(themagister_2115_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 2);
        }
    }
    or_final_or_event_2663_83_2_end: ;
}
void Frames::event_func_20276()
{
    // event 2664_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_arrest_1)) goto event_2664_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_2664_83_end;
        if (not_always_2664_83 > loop_count) {
            not_always_2664_83 = loop_count + 2;
            goto event_2664_83_end;
        }
        not_always_2664_83 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
            group_pause_1 = false;
    
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_1000_209);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_2664_83_end: ;
}
void Frames::event_func_20277()
{
    // event 2665_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_arrest_1)) goto event_2665_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_2665_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
    }
    event_2665_83_end: ;
}
void Frames::event_func_20278()
{
    // event 2666_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_s_arrest_1)) goto event_2666_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_2666_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2666_83_end;
        global_values->set(4, 19);
        next_frame = (index+1-0)-1 + 0;    
    
    }
    event_2666_83_end: ;
}
void Frames::event_func_20279()
{
    // event 2668_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2668_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
    }
    event_2668_83_end: ;
}
void Frames::event_func_20280()
{
    // event 2669_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2669_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2669_83_end;
        if (once_condition_2669_83) goto event_2669_83_end;
        once_condition_2669_83 = true;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 500);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 2508);
    }
    event_2669_83_end: ;
}
void Frames::event_func_20281()
{
    // event 2670_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2670_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2670_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(2602);
            ((Active*)*it)->set_x(470);
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(themagister_2115_instances))->set_y(2599);
        ((Active*)get_instance(themagister_2115_instances))->set_x(572);
        ((Active*)get_instance(themagister_2115_instances))->set_direction(0);
        ((Active*)get_instance(themagister_2115_instances))->force_animation(5);
        ((Active*)get_instance(npcneera_2464_instances))->set_visible(true);
        ((Active*)get_instance(npcneera_2464_instances))->set_y(2592);
        ((Active*)get_instance(npcneera_2464_instances))->set_x(400);
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(5);
        ((Active*)get_instance(npcneera_2464_instances))->force_frame(3);
        ((Active*)get_instance(npcneera_2464_instances))->set_direction(0);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(93);
        }
        ((Active*)get_instance(themagister_2115_instances))->force_frame(3);
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_2670_83_end: ;
}
void Frames::event_func_20282()
{
    // event 2671_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2671_83_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_2671_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2671_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 217);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        if (!group_pause_1) {
            group_pause_1 = true;
        }
    }
    event_2671_83_end: ;
}
void Frames::event_func_20283()
{
    // event 2672_83
    bool or_result_2672_83 = false;
    bool or_temp_result_2672_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto or_event_2672_83_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2672_83_0_end;
        or_result_2672_83 = true;
        or_temp_result_2672_83_0 = true;
    }
    or_event_2672_83_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_2672_83_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 2672_83
    bool or_temp_result_2672_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto or_event_2672_83_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2672_83_1_end;
        or_result_2672_83 = true;
        or_temp_result_2672_83_1 = true;
    }
    or_event_2672_83_1_end: ;
    if (or_temp_result_2672_83_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 2672_83
    bool or_temp_result_2672_83_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto or_event_2672_83_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2672_83_2_end;
        or_result_2672_83 = true;
        or_temp_result_2672_83_2 = true;
        or_event_2672_83_2_end: ;
        if (or_temp_result_2672_83_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_2672_83) goto or_final_or_event_2672_83_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_2672_83_0 || or_temp_result_2672_83_1 || or_temp_result_2672_83_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_2672_83_2_end: ;
}
void Frames::event_func_20284()
{
    // event 2673_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2673_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2673_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (220))) goto event_2673_83_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_2673_83_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(13)) == (1))) goto event_2673_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2673_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 232);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_2673_83_end: ;
}
void Frames::event_func_20285()
{
    // event 2674_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2674_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (232))) goto event_2674_83_end;
        if (!((media.get_channel_position(-1 +20)) >= (1400))) goto event_2674_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(102);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 102);
    }
    event_2674_83_end: ;
}
void Frames::event_func_20286()
{
    // event 2675_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2675_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2675_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (232))) goto event_2675_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2675_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 221);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_2675_83_end: ;
}
void Frames::event_func_20287()
{
    // event 2676_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2676_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2676_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (217))) goto event_2676_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (219))) goto event_2676_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2676_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2676_83_end: ;
}
void Frames::event_func_20288()
{
    // event 2677_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2677_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2677_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (219))) goto event_2677_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2677_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
    }
    event_2677_83_end: ;
}
void Frames::event_func_20289()
{
    // event 2678_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2678_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_2678_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (20))) goto event_2678_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(102);
        }
    }
    event_2678_83_end: ;
}
void Frames::event_func_20290()
{
    // event 2679_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2679_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_2679_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (50))) goto event_2679_83_end;
        ((Active*)get_instance(themagister_2115_instances))->force_frame(4);
    }
    event_2679_83_end: ;
}
void Frames::event_func_20291()
{
    // event 2680_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2680_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_2680_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (70))) goto event_2680_83_end;
        ((Active*)get_instance(themagister_2115_instances))->set_direction(16);
        ((Active*)get_instance(themagister_2115_instances))->force_frame(0);
    }
    event_2680_83_end: ;
}
void Frames::event_func_20292()
{
    // event 2681_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2681_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_2681_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (90))) goto event_2681_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(96);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2681_83_end: ;
}
void Frames::event_func_20293()
{
    // event 2682_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2682_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2682_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (220))) goto event_2682_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (224))) goto event_2682_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2682_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2682_83_end: ;
}
void Frames::event_func_20294()
{
    // event 2683_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2683_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (224))) goto event_2683_83_end;
        if (!((media.get_channel_position(-1 +20)) > (0))) goto event_2683_83_end;
        if (!((media.get_channel_position(-1 +20)) < (250))) goto event_2683_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(97);
        }
    }
    event_2683_83_end: ;
}
void Frames::event_func_20295()
{
    // event 2684_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2684_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (224))) goto event_2684_83_end;
        if (!((media.get_channel_position(-1 +20)) >= (250))) goto event_2684_83_end;
        if (!((media.get_channel_position(-1 +20)) < (500))) goto event_2684_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(96);
        }
    }
    event_2684_83_end: ;
}
void Frames::event_func_20296()
{
    // event 2685_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2685_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (224))) goto event_2685_83_end;
        if (!((media.get_channel_position(-1 +20)) >= (500))) goto event_2685_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 99);
    }
    event_2685_83_end: ;
}
void Frames::event_func_20297()
{
    // event 2686_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2686_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2686_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (224))) goto event_2686_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2686_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
            group_pause_1 = false;
    
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(99);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_2000_69);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_2686_83_end: ;
}
void Frames::event_func_20298()
{
    // event 2687_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2687_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_2687_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
    }
    event_2687_83_end: ;
}
void Frames::event_func_20299()
{
    // event 2688_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2688_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_2688_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2688_83_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, ((Active*)get_instance(npclilacbath_4116_instances))->get_x()+50);
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, ((Active*)get_instance(npclilacbath_4116_instances))->get_y()-30);
        floorcandle2_4117_instances.clear_selection();
        spread_value(floorcandle2_4117_instances, 0, 0);
        for (ObjectIterator it(floorcandle2_4117_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(0)%math_helper%4);
            ((Active*)*it)->restore_frame();
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
        }
    }
    event_2688_83_end: ;
}
void Frames::event_func_20300()
{
    // event 2689_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2689_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2689_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 2);
        }
    }
    event_2689_83_end: ;
}
void Frames::event_func_20301()
{
    // event 2690_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2690_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2690_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2690_83_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        if (!group_pause_1) {
            group_pause_1 = true;
        }
    }
    event_2690_83_end: ;
}
void Frames::event_func_20302()
{
    // event 2691_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2691_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_2691_83_end;
        if (!((global_values->get(3)%math_helper%16) == (0))) goto event_2691_83_end;
        FrameObject * single_instance_2691_83_0; single_instance_2691_83_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(npclilacbath_4116_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsheart_307(parent->x + 19, parent->y + 24), parent->layer);
                if (single_instance_2691_83_0 == NULL)
                    single_instance_2691_83_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2691_83_0))->set_x(((Active*)single_instance_2691_83_0)->get_x()+randrange(60));
        ((Active*)((Active*)single_instance_2691_83_0))->alterables->values.set(0, ((Active*)single_instance_2691_83_0)->get_x());
        ((Active*)((Active*)single_instance_2691_83_0))->alterables->values.set(1, randrange(20));
    }
    event_2691_83_end: ;
}
void Frames::event_func_20303()
{
    // event 2692_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2692_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_2692_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (70))) goto event_2692_83_end;
        ((Active*)get_instance(npclilacbath_4116_instances))->force_frame(1);
    }
    event_2692_83_end: ;
}
void Frames::event_func_20304()
{
    // event 2693_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2693_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_2693_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (80))) goto event_2693_83_end;
        ((Active*)get_instance(npclilacbath_4116_instances))->force_frame(2);
    }
    event_2693_83_end: ;
}
void Frames::event_func_20305()
{
    // event 2694_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2694_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_2694_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (90))) goto event_2694_83_end;
        ((Active*)get_instance(npclilacbath_4116_instances))->force_frame(1);
    }
    event_2694_83_end: ;
}
void Frames::event_func_20306()
{
    // event 2695_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2695_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_2695_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (100))) goto event_2695_83_end;
        ((Active*)get_instance(npclilacbath_4116_instances))->force_frame(0);
    }
    event_2695_83_end: ;
}
void Frames::event_func_20307()
{
    // event 2696_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2696_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_2696_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (170))) goto event_2696_83_end;
        ((Active*)get_instance(npclilacbath_4116_instances))->restore_frame();
        ((Active*)get_instance(npclilacbath_4116_instances))->force_speed(10);
    }
    event_2696_83_end: ;
}
void Frames::event_func_20308()
{
    // event 2697_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2697_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_2697_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (190))) goto event_2697_83_end;
        media.play_id(SOUND_ITEM_SHIELDWATER_2_3, -1, 1);
        FrameObject * single_instance_2697_83_0; single_instance_2697_83_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(npclilacbath_4116_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswatersplash_416(parent->x + 17, parent->y + 22), parent->layer);
                if (single_instance_2697_83_0 == NULL)
                    single_instance_2697_83_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2697_83_0))->force_speed(15);
    }
    event_2697_83_end: ;
}
void Frames::event_func_20309()
{
    // event 2698_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2698_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_2698_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (220))) goto event_2698_83_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_4000_162);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_2698_83_end: ;
}
void Frames::event_func_20310()
{
    // event 2699_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2699_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_2699_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (320))) goto event_2699_83_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
            group_pause_1 = false;
    
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(99);
        }
    }
    event_2699_83_end: ;
}
void Frames::event_func_20311()
{
    // event 2700_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2700_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_2700_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (320))) goto event_2700_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_2700_83_end: ;
}
void Frames::event_func_20312()
{
    // event 2701_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2701_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_2701_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (320))) goto event_2701_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2701_83_end;
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 670);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 2508);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->set_x(990);
        }
        ((Active*)get_instance(npcneera_2464_instances))->set_x(910);
        ((Active*)get_instance(themagister_2115_instances))->set_x(600);
        ((Active*)get_instance(themagister_2115_instances))->set_direction(16);
        ((Active*)get_instance(themagister_2115_instances))->force_frame(3);
    }
    event_2701_83_end: ;
}
void Frames::event_func_20313()
{
    // event 2702_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2702_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2702_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 2);
        }
    }
    event_2702_83_end: ;
}
void Frames::event_func_20314()
{
    // event 2703_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2703_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2703_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2703_83_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        if (!group_pause_1) {
            group_pause_1 = true;
        }
    }
    event_2703_83_end: ;
}
void Frames::event_func_20315()
{
    // event 2704_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2704_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_2704_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-3);
            ((Active*)*it)->force_speed(30);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(35);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
    }
    event_2704_83_end: ;
}
void Frames::event_func_20316()
{
    // event 2705_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2705_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_2705_83_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->get_x()) >= (((Active*)get_instance(themagister_2115_instances))->get_x()+60))) goto event_2705_83_end;
        ((Active*)get_instance(npcneera_2464_instances))->set_direction(17);
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(1);
        ((Active*)get_instance(npcneera_2464_instances))->set_x(((Active*)get_instance(npcneera_2464_instances))->get_x()-3);
    }
    event_2705_83_end: ;
}
void Frames::event_func_20317()
{
    // event 2706_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2706_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_2706_83_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->get_x()) < (((Active*)get_instance(themagister_2115_instances))->get_x()+60))) goto event_2706_83_end;
        ((Active*)get_instance(npcneera_2464_instances))->set_direction(0);
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(5);
        ((Active*)get_instance(npcneera_2464_instances))->force_frame(3);
    }
    event_2706_83_end: ;
}
void Frames::event_func_20318()
{
    // event 2707_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2707_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_2707_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(themagister_2115_instances))->get_x()+110))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_2707_83_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->restore_speed();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 225);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_2707_83_end: ;
}
void Frames::event_func_20319()
{
    // event 2708_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2708_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2708_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (225))) goto event_2708_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (230))) goto event_2708_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2708_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2708_83_end: ;
}
void Frames::event_func_20320()
{
    // event 2709_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1)) goto event_2709_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (228))) goto event_2709_83_end;
        if (not_always_2709_83 > loop_count) {
            not_always_2709_83 = loop_count + 2;
            goto event_2709_83_end;
        }
        not_always_2709_83 = loop_count + 2;
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()+20);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(3);
    }
    event_2709_83_end: ;
}
