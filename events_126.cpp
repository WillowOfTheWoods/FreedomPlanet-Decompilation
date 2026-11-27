#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_10090()
{
    // event 877_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1)) goto event_877_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_877_43_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11));
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 40-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)*40);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
    }
    event_877_43_end: ;
}
void Frames::event_func_10091()
{
    // event 878_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1)) goto event_878_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_878_43_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (1))) goto event_878_43_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
    }
    event_878_43_end: ;
}
void Frames::event_func_10092()
{
    // event 879_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1)) goto event_879_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_879_43_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (1))) goto event_879_43_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, -1);
    }
    event_879_43_end: ;
}
void Frames::event_func_10093()
{
    // event 1194_43
    {
        if (!(group_main_engine_1)) goto event_1194_43_end;
        playerreflect_447_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(playerreflect_447_instances, qualifier_19)) goto event_1194_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_1194_43_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1194_43_end;
        FrameObject * single_instance_1194_43_0; single_instance_1194_43_0 = pick_random(qualifier_19);
        if (single_instance_1194_43_0 == NULL) goto event_1194_43_end;
        ((Active*)((Active*)single_instance_1194_43_0))->alterables->flags.enable(6);
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 3);
        }
    }
    event_1194_43_end: ;
}
void Frames::event_func_10094()
{
    // event 1195_43
    {
        if (!(group_main_engine_1)) goto event_1195_43_end;
        playerreflect_447_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(playerreflect_447_instances, qualifier_19)) goto event_1195_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_1195_43_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1195_43_end;
        FrameObject * single_instance_1195_43_0; single_instance_1195_43_0 = pick_random(qualifier_19);
        if (single_instance_1195_43_0 == NULL) goto event_1195_43_end;
        ((Active*)((Active*)single_instance_1195_43_0))->alterables->flags.enable(6);
    }
    event_1195_43_end: ;
}
void Frames::event_func_10095()
{
    // event 1321_43
    {
        if (!(group_main_engine_1)) goto event_1321_43_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_1321_43_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (0))) goto event_1321_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1321_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1321_43_end;
        playersensorbottombig_397_instances.clear_selection();
        laddertop_357_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, laddertop_357_instances)) goto event_1321_43_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) < (4))) goto event_1321_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (46))) goto event_1321_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (4))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_1321_43_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 28);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 25);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(laddertop_357_instances))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(laddertop_357_instances))->get_y()+8);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 4);
        media.stop_sample(SOUND_COMMON_ROLLING_2_7);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 0);
        }
    }
    event_1321_43_end: ;
}
void Frames::event_func_10096()
{
    // event 1360_43
    {
        if (!(group_main_engine_1)) goto event_1360_43_end;
        qualifier_20.clear_selection();
        playerreflect_447_instances.clear_selection();
        if (!check_overlap(qualifier_20, playerreflect_447_instances)) goto event_1360_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (15))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_1360_43_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1360_43_end;
        FrameObject * single_instance_1360_43_0; single_instance_1360_43_0 = pick_random(qualifier_20);
        if (single_instance_1360_43_0 == NULL) goto event_1360_43_end;
        ((Active*)((Active*)single_instance_1360_43_0))->alterables->values.set(2, 5);
        ((Active*)((Active*)single_instance_1360_43_0))->alterables->values.set(23, ((Active*)get_single(playerreflect_447_instances, default_active_instance))->alterables->values.get(23)*0.75);
        ((Active*)((Active*)single_instance_1360_43_0))->alterables->values.set(24, ((Active*)get_single(playerreflect_447_instances, default_active_instance))->alterables->values.get(24)*0.75);
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        ((Active*)((Active*)single_instance_1360_43_0))->alterables->values.sub(0, ((Active*)get_single(playerreflect_447_instances, default_active_instance))->alterables->values.get(7)-1+get_max(1, global_values->get(12)));
        {
            ((Active*)single_instance_1360_43_0)->set_shader(Render::INVERT);
        }
    }
    event_1360_43_end: ;
}
void Frames::event_func_10097()
{
    // event 1361_43
    {
        if (!(group_main_engine_1)) goto event_1361_43_end;
        qualifier_20.clear_selection();
        playerreflect_447_instances.clear_selection();
        if (!check_overlap(qualifier_20, playerreflect_447_instances)) goto event_1361_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (15))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_1361_43_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1361_43_end;
        FrameObject * single_instance_1361_43_0; single_instance_1361_43_0 = pick_random(qualifier_20);
        if (single_instance_1361_43_0 == NULL) goto event_1361_43_end;
        ((Active*)((Active*)single_instance_1361_43_0))->alterables->values.set(2, 5);
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
    }
    event_1361_43_end: ;
}
void Frames::event_func_10098()
{
    // event 1362_43
    {
        if (!(group_main_engine_1)) goto event_1362_43_end;
        qualifier_20.clear_selection();
        playerreflect_447_instances.clear_selection();
        if (!check_overlap(qualifier_20, playerreflect_447_instances)) goto event_1362_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (3))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_1362_43_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1362_43_end;
        FrameObject * single_instance_1362_43_0; single_instance_1362_43_0 = pick_random(qualifier_20);
        if (single_instance_1362_43_0 == NULL) goto event_1362_43_end;
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        ((Active*)((Active*)single_instance_1362_43_0))->alterables->values.set(2, 5);
        ((Active*)((Active*)single_instance_1362_43_0))->alterables->values.set(23, cos_deg(((Active*)get_single(playerreflect_447_instances, default_active_instance))->alterables->values.get(2))*5*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)((Active*)single_instance_1362_43_0))->alterables->values.set(24, sin_deg(((Active*)get_single(playerreflect_447_instances, default_active_instance))->alterables->values.get(2))*-5*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)((Active*)single_instance_1362_43_0))->alterables->values.sub(0, ((Active*)get_single(playerreflect_447_instances, default_active_instance))->alterables->values.get(7)-1+get_max(1, global_values->get(12)));
        {
            ((Active*)single_instance_1362_43_0)->set_shader(Render::INVERT);
        }
    }
    event_1362_43_end: ;
}
void Frames::event_func_10099()
{
    // event 1363_43
    {
        if (!(group_main_engine_1)) goto event_1363_43_end;
        qualifier_20.clear_selection();
        playerreflect_447_instances.clear_selection();
        if (!check_overlap(qualifier_20, playerreflect_447_instances)) goto event_1363_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (15))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_1363_43_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1363_43_end;
        FrameObject * single_instance_1363_43_0; single_instance_1363_43_0 = pick_random(qualifier_20);
        if (single_instance_1363_43_0 == NULL) goto event_1363_43_end;
        ((Active*)((Active*)single_instance_1363_43_0))->alterables->values.set(2, 5);
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
    }
    event_1363_43_end: ;
}
void Frames::event_func_10100()
{
    // event 1431_43
    {
        if (!(group_main_engine_1)) goto event_1431_43_end;
        if (!((((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(5)) == (0))) goto event_1431_43_end;
        if (!((((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(9)) > (((Active*)get_instance(player_389_instances))->get_x()-200))) goto event_1431_43_end;
        if (!((((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(9)) < (((Active*)get_instance(player_389_instances))->get_x()+200))) goto event_1431_43_end;
        if (!((((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(10)) > (((Active*)get_instance(player_389_instances))->get_y()-300))) goto event_1431_43_end;
        if (!((((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(10)) < (((Active*)get_instance(player_389_instances))->get_y()+300))) goto event_1431_43_end;
        ((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.set(5, 1);
    }
    event_1431_43_end: ;
}
void Frames::event_func_10101()
{
    // event 1432_43
    {
        if (!(group_main_engine_1)) goto event_1432_43_end;
        if (!((((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(5)) == (1))) goto event_1432_43_end;
        if (!((((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(1)) < (0))) goto event_1432_43_end;
        ((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.add(1, 8);
    }
    event_1432_43_end: ;
}
void Frames::event_func_10102()
{
    // event 1433_43
    {
        if (!(group_main_engine_1)) goto event_1433_43_end;
        if (!((((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(5)) == (1))) goto event_1433_43_end;
        if (!((((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(1)) == (0))) goto event_1433_43_end;
        if (!((((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(7)) < (110))) goto event_1433_43_end;
        ((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.add(7, 10);
        ((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.set(6, sin_deg(((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(7))*96);
    }
    event_1433_43_end: ;
}
void Frames::event_func_10103()
{
    // event 1434_43
    {
        if (!(group_main_engine_1)) goto event_1434_43_end;
        if (!((((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(5)) == (1))) goto event_1434_43_end;
        if (!((((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(1)) == (0))) goto event_1434_43_end;
        if (!((((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(7)) >= (110))) goto event_1434_43_end;
        ((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.set(2, 1);
    }
    event_1434_43_end: ;
}
void Frames::event_func_10104()
{
    // event 1435_43
    {
        if (!(group_main_engine_1)) goto event_1435_43_end;
        ((Active*)get_instance(gimmickleafplatformback_2358_instances))->set_x(((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(3)+cos_deg(((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(0))*((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(1));
        ((Active*)get_instance(gimmickleafplatformback_2358_instances))->set_y(((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(4)-sin_deg(((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(0))*((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(1));
        ((Active*)get_instance(gimmickleafplatformback_2358_instances))->set_angle(((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(0)-90, 0);
    }
    event_1435_43_end: ;
}
void Frames::event_func_10105()
{
    // event 1436_43
    {
        if (!(group_main_engine_1)) goto event_1436_43_end;
        {
            FrameObject * parent = ((Active*)get_instance(gimmickleafplatformback_2358_instances));
            if (parent == NULL) goto pos_end_1436_43_0;
            ((Active*)get_instance(gimmickleafplatform1_2359_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1436_43_0: ;
        }
        ((Active*)get_instance(gimmickleafplatform1_2359_instances))->alterables->values.set(0, ((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(0)+((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(6));
        ((Active*)get_instance(gimmickleafplatform1_2359_instances))->set_angle(((Active*)get_instance(gimmickleafplatform1_2359_instances))->alterables->values.get(0)-90, 0);
        {
            FrameObject * parent = ((Active*)get_instance(gimmickleafplatformback_2358_instances));
            if (parent == NULL) goto pos_end_1436_43_1;
            ((Active*)get_instance(gimmickleafplatform2_2360_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1436_43_1: ;
        }
        ((Active*)get_instance(gimmickleafplatform2_2360_instances))->alterables->values.set(0, ((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(0)-((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(6));
        ((Active*)get_instance(gimmickleafplatform2_2360_instances))->set_angle(((Active*)get_instance(gimmickleafplatform2_2360_instances))->alterables->values.get(0)-90, 0);
        ((Active*)get_instance(gimmickleafplatform1_2359_instances))->alterables->values.set(1, ((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(2));
        ((Active*)get_instance(gimmickleafplatform2_2360_instances))->alterables->values.set(1, ((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(2));
    }
    event_1436_43_end: ;
}
void Frames::event_func_10106()
{
    // event 1437_43
    {
        if (!(group_main_engine_1)) goto event_1437_43_end;
        if (!((((Active*)get_instance(gimmickleafplatform1_2359_instances))->alterables->values.get(1)) == (1))) goto event_1437_43_end;
        ((Active*)get_instance(gimmickleafplatform1_2359_instances))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        ((Active*)get_instance(gimmickleafplatform1_2359_instances))->move_back();
    }
    event_1437_43_end: ;
}
void Frames::event_func_10107()
{
    // event 1438_43
    {
        if (!(group_main_engine_1)) goto event_1438_43_end;
        if (!((((Active*)get_instance(gimmickleafplatform2_2360_instances))->alterables->values.get(1)) == (1))) goto event_1438_43_end;
        ((Active*)get_instance(gimmickleafplatform2_2360_instances))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        ((Active*)get_instance(gimmickleafplatform2_2360_instances))->move_back();
    }
    event_1438_43_end: ;
}
void Frames::event_func_10108()
{
    // event 1439_43
    {
        if (!(group_main_engine_1)) goto event_1439_43_end;
        if (!((((Active*)get_instance(gimmickleafplatform1_2359_instances))->alterables->values.get(1)) == (0))) goto event_1439_43_end;
        ((Active*)get_instance(gimmickleafplatform1_2359_instances))->set_layer(3-1);
    }
    event_1439_43_end: ;
}
void Frames::event_func_10109()
{
    // event 1440_43
    {
        if (!(group_main_engine_1)) goto event_1440_43_end;
        if (!((((Active*)get_instance(gimmickleafplatform2_2360_instances))->alterables->values.get(1)) == (0))) goto event_1440_43_end;
        ((Active*)get_instance(gimmickleafplatform2_2360_instances))->set_layer(3-1);
    }
    event_1440_43_end: ;
}
void Frames::event_func_10110()
{
    // event 1441_43
    {
        if (!(group_main_engine_1)) goto event_1441_43_end;
        if (!((((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(2)) > (0))) goto event_1441_43_end;
        if (!(((Active*)get_instance(gimmickleafplatformback_2358_instances))->is_near_border(-300))) goto event_1441_43_end;
        ((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.set(7, 0);
        ((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.set(1, -128);
        ((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.set(5, 0);
    }
    event_1441_43_end: ;
}
void Frames::event_func_10111()
{
    // event 1442_43
    {
        if (!(group_main_engine_1)) goto event_1442_43_end;
        ((Active*)get_instance(jcwaterstream1_2416_instances))->force_frame((global_values->get(3)/math_helper/2)%math_helper%6);
        ((Active*)get_instance(jcwaterstream2_2413_instances))->force_frame((global_values->get(3)/math_helper/2)%math_helper%6);
        ((Active*)get_instance(jcwaterstream3_2410_instances))->force_frame((global_values->get(3)/math_helper/2)%math_helper%6);
        ((Active*)get_instance(jcwaterstream4_2409_instances))->force_frame((global_values->get(3)/math_helper/2)%math_helper%6);
        ((Active*)get_instance(jcwaterstream5_2412_instances))->force_frame((global_values->get(3)/math_helper/2)%math_helper%6);
        ((Active*)get_instance(jcwaterstream6_2411_instances))->force_frame((global_values->get(3)/math_helper/2)%math_helper%6);
        ((Active*)get_instance(jcwaterstream7_2362_instances))->force_frame((global_values->get(3)/math_helper/2)%math_helper%6);
        ((Active*)get_instance(jcwaterstream8_2361_instances))->force_frame((global_values->get(3)/math_helper/2)%math_helper%6);
    }
    event_1442_43_end: ;
}
void Frames::event_func_10112()
{
    // event 1450_43
    {
        if (!(group_main_engine_1)) goto event_1450_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1450_43_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickflyingleafplatformmask_2462_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickflyingleafplatformmask_2462_instances)) goto event_1450_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (((Active*)get_single(gimmickflyingleafplatformmask_2462_instances, default_active_instance))->get_y()))) goto event_1450_43_end;
        for (ObjectIterator it(gimmickflyingleafplatformmask_2462_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_14();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
    }
    event_1450_43_end: ;
}
void Frames::event_func_10113()
{
    // event 1456_43
    {
        if (!(group_main_engine_1)) goto event_1456_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1456_43_end;
        playersensorbottombig_397_instances.clear_selection();
        leveljccollapsingplatform_2444_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, leveljccollapsingplatform_2444_instances)) goto event_1456_43_end;
        for (ObjectIterator it(leveljccollapsingplatform_2444_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!leveljccollapsingplatform_2444_instances.has_selection()) goto event_1456_43_end;
        for (ObjectIterator it(leveljccollapsingplatform_2444_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
        media.play_id(SOUND_COMMON_SHATTER_13, -1, 1);
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
    }
    event_1456_43_end: ;
}
void Frames::event_func_10114()
{
    // event 1462_43
    {
        if (!(group_main_engine_1)) goto event_1462_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1462_43_end;
        playersensorbottombig_397_instances.clear_selection();
        jcslidingplatform_2414_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, jcslidingplatform_2414_instances)) goto event_1462_43_end;
        if (!((((Active*)get_instance(jcslidingplatform_2414_instances))->alterables->values.get(18)) == (0))) goto event_1462_43_end;
        ((Active*)get_instance(jcslidingplatform_2414_instances))->alterables->values.set(18, 1);
        ((Active*)get_instance(jcslidingplatform_2414_instances))->alterables->values.set(19, ((Active*)get_instance(jcslidingplatform_2414_instances))->get_x()+150);
        media.play_id(SOUND_COMMON_SHATTER_13, -1, 1);
    }
    event_1462_43_end: ;
}
void Frames::event_func_10115()
{
    // event 1482_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1)) goto event_1482_43_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (48))) goto event_1482_43_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)+1)*8+17);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)+1)*8+17);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)+1)*8+17);
        }
    }
    event_1482_43_end: ;
}
void Frames::event_func_10116()
{
    // event 1483_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1)) goto event_1483_43_end;
        if (!((((Active*)get_instance(sign_351_instances))->alterables->values.get(1)) >= (150))) goto event_1483_43_end;
        if (not_always_1483_43 > loop_count) {
            not_always_1483_43 = loop_count + 2;
            goto event_1483_43_end;
        }
        not_always_1483_43 = loop_count + 2;
        if (!group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1) {
            group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1 = true;
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(23, 1);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_83);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(10, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25));
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(13, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25));
        ((Counter*)get_instance(totalcrystals_854_instances))->set(manager.score);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(15, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(9));
    }
    event_1483_43_end: ;
}
void Frames::event_func_10117()
{
    // event 1506_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1506_43_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(3)) == (150))) goto event_1506_43_end;
        if (!((global_values->get(0)) != (2))) goto event_1506_43_end;
        ((Active*)get_instance(levelcardactclear4_846_instances))->set_visible(false);
        ((Active*)get_instance(levelcardactclear3_849_instances))->set_visible(false);
        ((Active*)get_instance(levelcardactclear2_848_instances))->set_visible(false);
        ((Active*)get_instance(levelcardactclear1_847_instances))->set_visible(false);
            group_main_engine_level_specific_methods_stage_clear_1 = false;
    
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
        ((Counter*)get_instance(levelcardbonus1_850_instances))->set_visible(false);
        ((Counter*)get_instance(levelcardbonus2_851_instances))->set_visible(false);
        ((Counter*)get_instance(levelcardbonus3_852_instances))->set_visible(false);
        ((Counter*)get_instance(totalbonus_853_instances))->set_visible(false);
        ((Counter*)get_instance(totalcrystals_854_instances))->set_visible(false);
        ((Active*)get_instance(sign_351_instances))->alterables->values.set(1, 0);
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.set(0, 999);
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(23, 0);
        ((Active*)get_instance(levelcardactclear1_847_instances))->alterables->flags.disable(0);
        ((Counter*)get_instance(guitimermilli_360_instances))->set_y(-99);
        ((Counter*)get_instance(guitimermilli2_361_instances))->set_y(-99);
        ((Counter*)get_instance(guitimers_362_instances))->set_y(-99);
        ((Counter*)get_instance(guitimers2_363_instances))->set_y(-99);
        ((Counter*)get_instance(guitimerm_364_instances))->set_y(-99);
        ((Counter*)get_instance(guitimerm2_365_instances))->set_y(-99);
        if (!group_main_engine_level_specific_methods_frame_transition_1) {
            group_main_engine_level_specific_methods_frame_transition_1 = true;
        }
    }
    event_1506_43_end: ;
}
void Frames::event_func_10118()
{
    // event 1507_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1507_43_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(3)) == (150))) goto event_1507_43_end;
        if (!((global_values->get(0)) == (2))) goto event_1507_43_end;
        ((Active*)get_instance(levelcardactclear4_846_instances))->set_visible(false);
        ((Active*)get_instance(levelcardactclear3_849_instances))->set_visible(false);
        ((Active*)get_instance(levelcardactclear2_848_instances))->set_visible(false);
        ((Active*)get_instance(levelcardactclear1_847_instances))->set_visible(false);
            group_main_engine_level_specific_methods_stage_clear_1 = false;
    
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
        ((Counter*)get_instance(levelcardbonus1_850_instances))->set_visible(false);
        ((Counter*)get_instance(levelcardbonus2_851_instances))->set_visible(false);
        ((Counter*)get_instance(levelcardbonus3_852_instances))->set_visible(false);
        ((Counter*)get_instance(totalbonus_853_instances))->set_visible(false);
        ((Counter*)get_instance(totalcrystals_854_instances))->set_visible(false);
        ((Active*)get_instance(sign_351_instances))->alterables->values.set(1, 0);
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.set(0, 999);
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(23, 0);
        ((Active*)get_instance(levelcardactclear1_847_instances))->alterables->flags.disable(0);
        ((Counter*)get_instance(guitimermilli_360_instances))->set_y(-99);
        ((Counter*)get_instance(guitimermilli2_361_instances))->set_y(-99);
        ((Counter*)get_instance(guitimers_362_instances))->set_y(-99);
        ((Counter*)get_instance(guitimers2_363_instances))->set_y(-99);
        ((Counter*)get_instance(guitimerm_364_instances))->set_y(-99);
        ((Counter*)get_instance(guitimerm2_365_instances))->set_y(-99);
        if (!group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1) {
            group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 = true;
        }
    }
    event_1507_43_end: ;
}
void Frames::event_func_10119()
{
    // event 1512_43
    {
        if (!(group_main_engine_1)) goto event_1512_43_end;
        {
            FrameObject * parent = ((Active*)get_instance(enemyplantturretus_2365_instances));
            if (parent == NULL) goto pos_end_1512_43_0;
            ((Active*)get_instance(enemyplantturretushat_2366_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1512_43_0: ;
        }
        ((Active*)get_instance(enemyplantturretushat_2366_instances))->set_direction(((Active*)get_instance(enemyplantturretus_2365_instances, default_active_instance))->get_direction());
        ((Active*)get_instance(enemyplantturretushat_2366_instances))->set_layer(((Active*)get_instance(enemyplantturretus_2365_instances, default_active_instance))->layer->index+1-1);
        ((Active*)get_instance(enemyplantturretushat_2366_instances))->move_front(((Active*)get_instance(enemyplantturretus_2365_instances)));
        ((Active*)get_instance(enemyplantturretushat_2366_instances))->alterables->values.set(0, ((Active*)get_instance(enemyplantturretus_2365_instances, default_active_instance))->alterables->values.get(0));
        ((Active*)get_instance(enemyplantturretusstalk_2364_instances))->alterables->values.set(0, ((Active*)get_instance(enemyplantturretus_2365_instances, default_active_instance))->alterables->values.get(0));
        ((Active*)get_instance(enemyplantturretusstalk_2364_instances))->alterables->values.set(1, ((Active*)get_instance(enemyplantturretus_2365_instances, default_active_instance))->get_y());
        ((Active*)get_instance(enemyplantturretusstalk_2364_instances))->alterables->values.set(2, ((Active*)get_instance(enemyplantturretus_2365_instances, default_active_instance))->get_x());
        effectfallingleaf_2323_instances.clear_selection();
        for (ObjectIterator it(effectfallingleaf_2323_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+1, 0);
        }
    }
    event_1512_43_end: ;
}
void Frames::event_func_10120()
{
    // event 1513_43
    {
        if (!(group_main_engine_1)) goto event_1513_43_end;
        if (!((((Active*)get_instance(enemyplantturretusstalk_2364_instances))->alterables->values.get(0)) > (0))) goto event_1513_43_end;
        ((Active*)get_instance(enemyplantturretusstalk_2364_instances))->set_y(((Active*)get_instance(enemyplantturretusstalk_2364_instances))->alterables->values.get(1));
        ((Active*)get_instance(enemyplantturretusstalk_2364_instances))->set_x(((Active*)get_instance(enemyplantturretusstalk_2364_instances))->alterables->values.get(2));
    }
    event_1513_43_end: ;
}
void Frames::event_func_10121()
{
    // event 1529_43
    bool or_result_1529_43 = false;
    bool or_temp_result_1529_43_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1529_43_0_end;
        enemyplantturretus_2365_instances.clear_selection();
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemyplantturretus_2365_instances.has_selection()) goto or_event_1529_43_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyplantturretus_2365_instances, qualifier_7)) goto or_event_1529_43_0_end;
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyplantturretus_2365_instances.has_selection()) goto or_event_1529_43_0_end;
        or_result_1529_43 = true;
        or_temp_result_1529_43_0 = true;
    }
    or_event_1529_43_0_end: ;
    qualifier_7.clear_saved_selection();
    enemyplantturretus_2365_instances.clear_saved_selection();
    if (or_temp_result_1529_43_0) {
        qualifier_7.save_selection();
        enemyplantturretus_2365_instances.save_selection();
    }
    // event 1529_43
    bool or_temp_result_1529_43_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1529_43_1_end;
        enemyplantturretus_2365_instances.clear_selection();
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyplantturretus_2365_instances.has_selection()) goto or_event_1529_43_1_end;
        or_result_1529_43 = true;
        or_temp_result_1529_43_1 = true;
        or_event_1529_43_1_end: ;
        if (or_temp_result_1529_43_1) {
            enemyplantturretus_2365_instances.save_selection();
        }
        if (!or_result_1529_43) goto or_final_or_event_1529_43_1_end;
        enemyplantturretus_2365_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1529_43_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1529_43_0 || or_temp_result_1529_43_1) {
            enemyplantturretus_2365_instances.restore_selection();
        }
        FrameObject * single_instance_1529_43_0; single_instance_1529_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyplantturretus_2365_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1529_43_0 == NULL)
                    single_instance_1529_43_0 = new_obj;
            }
        }
        FrameObject * single_instance_1529_43_1; single_instance_1529_43_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyplantturretus_2365_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1529_43_1 == NULL)
                    single_instance_1529_43_1 = new_obj;
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
                loop_spawndebris_43();
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
    or_final_or_event_1529_43_1_end: ;
}
void Frames::event_func_10122()
{
    // event 1532_43
    {
        if (!(group_main_engine_1)) goto event_1532_43_end;
        if (!((((Active*)get_instance(enemyplantturretushat_2366_instances))->alterables->values.get(0)) <= (0))) goto event_1532_43_end;
        if (!(((Active*)get_instance(enemyplantturretushat_2366_instances))->flags & VISIBLE)) goto event_1532_43_end;
        ((Active*)get_instance(enemyplantturretushat_2366_instances))->set_visible(false);
    }
    event_1532_43_end: ;
}
void Frames::event_func_10123()
{
    // event 1549_43
    bool or_result_1549_43 = false;
    bool or_temp_result_1549_43_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1549_43_0_end;
        enemybuoybuoy_2418_instances.clear_selection();
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemybuoybuoy_2418_instances.has_selection()) goto or_event_1549_43_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemybuoybuoy_2418_instances, qualifier_7)) goto or_event_1549_43_0_end;
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemybuoybuoy_2418_instances.has_selection()) goto or_event_1549_43_0_end;
        or_result_1549_43 = true;
        or_temp_result_1549_43_0 = true;
    }
    or_event_1549_43_0_end: ;
    enemybuoybuoy_2418_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1549_43_0) {
        enemybuoybuoy_2418_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1549_43
    bool or_temp_result_1549_43_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1549_43_1_end;
        enemybuoybuoy_2418_instances.clear_selection();
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemybuoybuoy_2418_instances.has_selection()) goto or_event_1549_43_1_end;
        or_result_1549_43 = true;
        or_temp_result_1549_43_1 = true;
        or_event_1549_43_1_end: ;
        if (or_temp_result_1549_43_1) {
            enemybuoybuoy_2418_instances.save_selection();
        }
        if (!or_result_1549_43) goto or_final_or_event_1549_43_1_end;
        qualifier_7.empty_selection();
        enemybuoybuoy_2418_instances.empty_selection();
        if (or_temp_result_1549_43_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1549_43_0 || or_temp_result_1549_43_1) {
            enemybuoybuoy_2418_instances.restore_selection();
        }
        FrameObject * single_instance_1549_43_0; single_instance_1549_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybuoybuoy_2418_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1549_43_0 == NULL)
                    single_instance_1549_43_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1549_43_0))->set_direction(2);
        FrameObject * single_instance_1549_43_1; single_instance_1549_43_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybuoybuoy_2418_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1549_43_1 == NULL)
                    single_instance_1549_43_1 = new_obj;
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
                loop_spawndebris_43();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    or_final_or_event_1549_43_1_end: ;
}
void Frames::event_func_10124()
{
    // event 1562_43
    {
        if (!(group_main_engine_1)) goto event_1562_43_end;
        {
            enemyelite_2510_instances.clear_selection();
            SavedSelection extra_enemyelite_2510_instances(enemyelite_2510_instances);
            for (SavedIterator it(extra_enemyelite_2510_instances); !it.end(); ++it) {
                foreach_instance_elite = ((Active*)*it);
                foreach_elite_43();
            }
        }
    }
    event_1562_43_end: ;
}
void Frames::event_func_10125()
{
    // event 1563_43
    {
        if (!(group_main_engine_1)) goto event_1563_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) < (30))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1563_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 30);
        }
    }
    event_1563_43_end: ;
}
void Frames::event_func_10126()
{
    // event 1564_43
    {
        if (!(group_main_engine_1)) goto event_1564_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) == (30))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1564_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, -1);
            ((Active*)*it)->alterables->values.add(10, 1);
        }
    }
    event_1564_43_end: ;
}
void Frames::event_func_10127()
{
    // event 1565_43
    {
        if (!(group_main_engine_1)) goto event_1565_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1565_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 0-((Active*)*it)->alterables->values.get(13));
        }
    }
    event_1565_43_end: ;
}
void Frames::event_func_10128()
{
    // event 1566_43
    {
        if (!(group_main_engine_1)) goto event_1566_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (-1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1566_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 0-((Active*)*it)->alterables->values.get(13));
        }
    }
    event_1566_43_end: ;
}
void Frames::event_func_10129()
{
    // event 1568_43
    {
        if (!(group_main_engine_1)) goto event_1568_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-220))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+100))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1568_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1568_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 1);
        }
    }
    event_1568_43_end: ;
}
void Frames::event_func_10130()
{
    // event 1569_43
    {
        if (!(group_main_engine_1)) goto event_1569_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+220))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+100))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1569_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1569_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 1);
        }
    }
    event_1569_43_end: ;
}
void Frames::event_func_10131()
{
    // event 1570_43
    {
        if (!(group_main_engine_1)) goto event_1570_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1570_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1570_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 1);
        }
    }
    event_1570_43_end: ;
}
void Frames::event_func_10132()
{
    // event 1572_43
    {
        if (!(group_main_engine_1)) goto event_1572_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1572_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (9))) goto event_1572_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 0);
        }
    }
    event_1572_43_end: ;
}
void Frames::event_func_10133()
{
    // event 1573_43
    bool or_result_1573_43 = false;
    bool or_temp_result_1573_43_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1573_43_0_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(21)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1573_43_0_end;
        or_result_1573_43 = true;
        or_temp_result_1573_43_0 = true;
    }
    or_event_1573_43_0_end: ;
    enemyelitemask_2511_instances.clear_saved_selection();
    if (or_temp_result_1573_43_0) {
        enemyelitemask_2511_instances.save_selection();
    }
    // event 1573_43
    bool or_temp_result_1573_43_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1573_43_1_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()-200))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1573_43_1_end;
        or_result_1573_43 = true;
        or_temp_result_1573_43_1 = true;
    }
    or_event_1573_43_1_end: ;
    if (or_temp_result_1573_43_1) {
        enemyelitemask_2511_instances.save_selection();
    }
    // event 1573_43
    bool or_temp_result_1573_43_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1573_43_2_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()+200))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1573_43_2_end;
        or_result_1573_43 = true;
        or_temp_result_1573_43_2 = true;
        or_event_1573_43_2_end: ;
        if (or_temp_result_1573_43_2) {
            enemyelitemask_2511_instances.save_selection();
        }
        if (!or_result_1573_43) goto or_final_or_event_1573_43_2_end;
        enemyelitemask_2511_instances.empty_selection();
        if (or_temp_result_1573_43_0 || or_temp_result_1573_43_1 || or_temp_result_1573_43_2) {
            enemyelitemask_2511_instances.restore_selection();
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(21, ((Active*)get_instance(player_389_instances, it.current_index, default_active_instance))->get_x());
        }
    }
    or_final_or_event_1573_43_2_end: ;
}
void Frames::event_func_10134()
{
    // event 1574_43
    {
        if (!(group_main_engine_1)) goto event_1574_43_end;
        if (!((global_values->get(3)%math_helper%20) == (((Active*)get_instance(enemyelite_2510_instances))->get_fixed().get_uint()%math_helper%20))) goto event_1574_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)*it)->alterables->values.get(21)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)*it)->alterables->values.get(21)+60))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1574_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 1);
        }
    }
    event_1574_43_end: ;
}
void Frames::event_func_10135()
{
    // event 1575_43
    {
        if (!(group_main_engine_1)) goto event_1575_43_end;
        if (!((global_values->get(3)%math_helper%20) == (((Active*)get_instance(enemyelite_2510_instances))->get_fixed().get_uint()%math_helper%20))) goto event_1575_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)*it)->alterables->values.get(21)+80))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1575_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, -1);
        }
    }
    event_1575_43_end: ;
}
void Frames::event_func_10136()
{
    // event 1576_43
    {
        if (!(group_main_engine_1)) goto event_1576_43_end;
        if (!((global_values->get(3)%math_helper%20) == (((Active*)get_instance(enemyelite_2510_instances))->get_fixed().get_uint()%math_helper%20))) goto event_1576_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)*it)->alterables->values.get(21)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)*it)->alterables->values.get(21)-60))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1576_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, -1);
        }
    }
    event_1576_43_end: ;
}
void Frames::event_func_10137()
{
    // event 1577_43
    {
        if (!(group_main_engine_1)) goto event_1577_43_end;
        if (!((global_values->get(3)%math_helper%20) == (((Active*)get_instance(enemyelite_2510_instances))->get_fixed().get_uint()%math_helper%20))) goto event_1577_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)*it)->alterables->values.get(21)-80))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1577_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 1);
        }
    }
    event_1577_43_end: ;
}
void Frames::event_func_10138()
{
    // event 1578_43
    {
        if (!(group_main_engine_1)) goto event_1578_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(17)) < (21))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1578_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 1);
            ((Active*)*it)->alterables->values.add(17, 10);
        }
    }
    event_1578_43_end: ;
}
void Frames::event_func_10139()
{
    // event 1579_43
    {
        if (!(group_main_engine_1)) goto event_1579_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (-1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(17)) < (21))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1579_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 1);
            ((Active*)*it)->alterables->values.add(17, 10);
        }
    }
    event_1579_43_end: ;
}
void Frames::event_func_10140()
{
    // event 1580_43
    {
        if (!(group_main_engine_1)) goto event_1580_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(17)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1580_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(17, 1);
        }
    }
    event_1580_43_end: ;
}
void Frames::event_func_10141()
{
    // event 1581_43
    {
        if (!(group_main_engine_1)) goto event_1581_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(17)) >= (21))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1581_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(17, 0);
            ((Active*)*it)->alterables->values.set(13, 0-((Active*)*it)->alterables->values.get(13));
            ((Active*)*it)->alterables->values.set(14, 0);
            ((Active*)*it)->alterables->values.set(16, 0);
        }
    }
    event_1581_43_end: ;
}
void Frames::event_func_10142()
{
    // event 1582_43
    {
        if (!(group_main_engine_1)) goto event_1582_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (-1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(17)) >= (21))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1582_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(17, 0);
            ((Active*)*it)->alterables->values.set(13, 0-((Active*)*it)->alterables->values.get(13));
            ((Active*)*it)->alterables->values.set(14, 0);
            ((Active*)*it)->alterables->values.set(16, 0);
        }
    }
    event_1582_43_end: ;
}
void Frames::event_func_10143()
{
    // event 1583_43
    {
        if (!(group_main_engine_1)) goto event_1583_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-120))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+120))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+120))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1583_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(19, 1);
        }
    }
    event_1583_43_end: ;
}
void Frames::event_func_10144()
{
    // event 1584_43
    {
        if (!(group_main_engine_1)) goto event_1584_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(19)) > (30))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1584_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(19, -70);
            ((Active*)*it)->alterables->values.set(15, 1);
        }
    }
    event_1584_43_end: ;
}
void Frames::event_func_10145()
{
    // event 1585_43
    {
        if (!(group_main_engine_1)) goto event_1585_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(19)) < (-60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1585_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, -1);
        }
    }
    event_1585_43_end: ;
}
void Frames::event_func_10146()
{
    // event 1586_43
    {
        if (!(group_main_engine_1)) goto event_1586_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(19)) < (-60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1586_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
        }
    }
    event_1586_43_end: ;
}
void Frames::event_func_10147()
{
    // event 1587_43
    {
        if (!(group_main_engine_1)) goto event_1587_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1587_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(19, 1);
        }
    }
    event_1587_43_end: ;
}
void Frames::event_func_10148()
{
    // event 1588_43
    {
        if (!(group_main_engine_1)) goto event_1588_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(19)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1588_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(15, 0);
        }
    }
    event_1588_43_end: ;
}
void Frames::event_func_10149()
{
    // event 1589_43
    {
        if (!(group_main_engine_1)) goto event_1589_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (3))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1589_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7)+0.4, 2));
            ((Active*)*it)->alterables->values.set(4, 1);
        }
    }
    event_1589_43_end: ;
}
void Frames::event_func_10150()
{
    // event 1590_43
    {
        if (!(group_main_engine_1)) goto event_1590_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (3))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1590_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-0.4, -2));
            ((Active*)*it)->alterables->values.set(4, -1);
        }
    }
    event_1590_43_end: ;
}
void Frames::event_func_10151()
{
    // event 1591_43
    {
        if (!(group_main_engine_1)) goto event_1591_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (3))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1591_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7)+0.4, 5));
            ((Active*)*it)->alterables->values.set(4, 1);
        }
    }
    event_1591_43_end: ;
}
void Frames::event_func_10152()
{
    // event 1592_43
    {
        if (!(group_main_engine_1)) goto event_1592_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (3))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1592_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-0.4, -5));
            ((Active*)*it)->alterables->values.set(4, -1);
        }
    }
    event_1592_43_end: ;
}
void Frames::event_func_10153()
{
    // event 1593_43
    {
        if (!(group_main_engine_1)) goto event_1593_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) != (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (3))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1593_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-0.4, 0));
        }
    }
    event_1593_43_end: ;
}
void Frames::event_func_10154()
{
    // event 1594_43
    {
        if (!(group_main_engine_1)) goto event_1594_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) != (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (3))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1594_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7)+0.4, 0));
        }
    }
    event_1594_43_end: ;
}
void Frames::event_func_10155()
{
    // event 1595_43
    {
        if (!(group_main_engine_1)) goto event_1595_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1595_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    event_1595_43_end: ;
}
void Frames::event_func_10156()
{
    // event 1596_43
    {
        if (!(group_main_engine_1)) goto event_1596_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) != (1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1596_43_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) > (3))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1596_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 2);
            ((Active*)*it)->alterables->values.set(10, 0);
        }
    }
    event_1596_43_end: ;
}
void Frames::event_func_10157()
{
    // event 1597_43
    {
        if (!(group_main_engine_1)) goto event_1597_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1597_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
    }
    event_1597_43_end: ;
}
void Frames::event_func_10158()
{
    // event 1598_43
    {
        if (!(group_main_engine_1)) goto event_1598_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) > (6))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1598_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(21, 0);
        }
    }
    event_1598_43_end: ;
}
void Frames::event_func_10159()
{
    // event 1599_43
    {
        if (!(group_main_engine_1)) goto event_1599_43_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1599_43_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->values.get(3));
        }
    }
    event_1599_43_end: ;
}
void Frames::event_func_10160()
{
    // event 1600_43
    {
        if (!(group_main_engine_1)) goto event_1600_43_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1600_43_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16+((Active*)*it)->alterables->values.get(3));
        }
    }
    event_1600_43_end: ;
}
void Frames::event_func_10161()
{
    // event 1601_43
    {
        if (!(group_main_engine_1)) goto event_1601_43_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1601_43_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1601_43_end: ;
}
void Frames::event_func_10162()
{
    // event 1604_43
    {
        if (!(group_main_engine_1)) goto event_1604_43_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1604_43_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1604_43_end: ;
}
void Frames::event_func_10163()
{
    // event 1605_43
    {
        if (!(group_main_engine_1)) goto event_1605_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1605_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1605_43_end: ;
}
void Frames::event_func_10164()
{
    // event 1606_43
    {
        if (!(group_main_engine_1)) goto event_1606_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1606_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
    }
    event_1606_43_end: ;
}
void Frames::event_func_10165()
{
    // event 1607_43
    {
        if (!(group_main_engine_1)) goto event_1607_43_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(12)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(10)) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1607_43_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    event_1607_43_end: ;
}
void Frames::event_func_10166()
{
    // event 1608_43
    {
        if (!(group_main_engine_1)) goto event_1608_43_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(12)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (2))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1608_43_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1608_43_end: ;
}
void Frames::event_func_10167()
{
    // event 1609_43
    {
        if (!(group_main_engine_1)) goto event_1609_43_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1609_43_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        FrameObject * single_instance_1609_43_0; single_instance_1609_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelite_2510_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyelitechargeglow_2507(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1609_43_0 == NULL)
                    single_instance_1609_43_0 = new_obj;
            }
        }
    }
    event_1609_43_end: ;
}
void Frames::event_func_10168()
{
    // event 1610_43
    {
        if (!(group_main_engine_1)) goto event_1610_43_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(12)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (25))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1610_43_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(12);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    event_1610_43_end: ;
}
void Frames::event_func_10169()
{
    // event 1611_43
    {
        if (!(group_main_engine_1)) goto event_1611_43_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1611_43_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
    }
    event_1611_43_end: ;
}
void Frames::event_func_10170()
{
    // event 1612_43
    {
        if (!(group_main_engine_1)) goto event_1612_43_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-2))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1612_43_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1612_43_end: ;
}
void Frames::event_func_10171()
{
    // event 1613_43
    {
        if (!(group_main_engine_1)) goto event_1613_43_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1613_43_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1613_43_end: ;
}
void Frames::event_func_10172()
{
    // event 1614_43
    {
        if (!(group_main_engine_1)) goto event_1614_43_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1614_43_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(13);
            ((Active*)*it)->restore_speed();
        }
    }
    event_1614_43_end: ;
}
void Frames::event_func_10173()
{
    // event 1615_43
    {
        if (!(group_main_engine_1)) goto event_1615_43_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) != (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (3))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1615_43_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
    }
    event_1615_43_end: ;
}
void Frames::event_func_10174()
{
    // event 1616_43
    bool or_result_1616_43 = false;
    bool or_temp_result_1616_43_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1616_43_0_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto or_event_1616_43_0_end;
        or_result_1616_43 = true;
        or_temp_result_1616_43_0 = true;
    }
    or_event_1616_43_0_end: ;
    enemyelite_2510_instances.clear_saved_selection();
    if (or_temp_result_1616_43_0) {
        enemyelite_2510_instances.save_selection();
    }
    // event 1616_43
    bool or_temp_result_1616_43_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1616_43_1_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto or_event_1616_43_1_end;
        or_result_1616_43 = true;
        or_temp_result_1616_43_1 = true;
        or_event_1616_43_1_end: ;
        if (or_temp_result_1616_43_1) {
            enemyelite_2510_instances.save_selection();
        }
        if (!or_result_1616_43) goto or_final_or_event_1616_43_1_end;
        enemyelite_2510_instances.empty_selection();
        if (or_temp_result_1616_43_0 || or_temp_result_1616_43_1) {
            enemyelite_2510_instances.restore_selection();
        }
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
    }
    or_final_or_event_1616_43_1_end: ;
}
void Frames::event_func_10175()
{
    // event 1617_43
    {
        if (!(group_main_engine_1)) goto event_1617_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1617_43_end;
        media.play_id(SOUND_JUMP_T_2_233, -1, 1);
    }
    event_1617_43_end: ;
}
void Frames::event_func_10176()
{
    // event 1618_43
    {
        if (!(group_main_engine_1)) goto event_1618_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1618_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -1);
            ((Active*)*it)->alterables->values.set(8, -10);
        }
        FrameObject * single_instance_1618_43_0; single_instance_1618_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1618_43_0 == NULL)
                    single_instance_1618_43_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1618_43_0))->move_back();
        ((Active*)((Active*)single_instance_1618_43_0))->set_y_scale(0.25);
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 0);
        }
    }
    event_1618_43_end: ;
}
void Frames::event_func_10177()
{
    // event 1619_43
    {
        if (!(group_main_engine_1)) goto event_1619_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) > (16))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1619_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -1);
        }
    }
    event_1619_43_end: ;
}
void Frames::event_func_10178()
{
    // event 1620_43
    {
        if (!(group_main_engine_1)) goto event_1620_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (-2))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1620_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, get_min(((Active*)*it)->alterables->values.get(8)+0.5, 15));
        }
    }
    event_1620_43_end: ;
}
void Frames::event_func_10179()
{
    // event 1621_43
    {
        if (!(group_main_engine_1)) goto event_1621_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (-2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1621_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, get_max(0, ((Active*)*it)->alterables->values.get(8)));
        }
    }
    event_1621_43_end: ;
}
void Frames::event_func_10180()
{
    // event 1622_43
    {
        if (!(group_main_engine_1)) goto event_1622_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1622_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1622_43_end: ;
}
void Frames::event_func_10181()
{
    // event 1623_43
    {
        if (!(group_main_engine_1)) goto event_1623_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (3))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1623_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -2);
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->alterables->values.get(4)+((Active*)*it)->alterables->values.get(23));
            ((Active*)*it)->alterables->values.set(8, -1+((Active*)*it)->alterables->values.get(24));
            ((Active*)*it)->alterables->values.sub(6, 12);
            ((Active*)*it)->alterables->values.set(2, 0);
        }
    }
    event_1623_43_end: ;
}
void Frames::event_func_10182()
{
    // event 1624_43
    {
        if (!(group_main_engine_1)) goto event_1624_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(20)) >= (1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1624_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 6);
        }
    }
    event_1624_43_end: ;
}
void Frames::event_func_10183()
{
    // event 1625_43
    {
        if (!(group_main_engine_1)) goto event_1625_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1625_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, -3);
            ((Active*)*it)->alterables->values.add(12, 1);
            ((Active*)*it)->alterables->values.add(20, 1);
        }
    }
    event_1625_43_end: ;
}
void Frames::event_func_10184()
{
    // event 1626_43
    {
        if (!(group_main_engine_1)) goto event_1626_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) >= (1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1626_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 0);
            ((Active*)*it)->alterables->values.set(3, 3);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    event_1626_43_end: ;
}
void Frames::event_func_10185()
{
    // event 1627_43
    {
        if (!(group_main_engine_1)) goto event_1627_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1627_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 1);
        }
    }
    event_1627_43_end: ;
}
void Frames::event_func_10186()
{
    // event 1628_43
    {
        if (!(group_main_engine_1)) goto event_1628_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (20))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1628_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 4);
            ((Active*)*it)->alterables->values.set(12, 0);
        }
    }
    event_1628_43_end: ;
}
void Frames::event_func_10187()
{
    // event 1629_43
    {
        if (!(group_main_engine_1)) goto event_1629_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1629_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 1);
        }
    }
    event_1629_43_end: ;
}
void Frames::event_func_10188()
{
    // event 1630_43
    {
        if (!(group_main_engine_1)) goto event_1630_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (22))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1630_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->flags.disable(6);
            ((Active*)*it)->alterables->values.set(0, 20);
        }
    }
    event_1630_43_end: ;
}
void Frames::event_func_10189()
{
    // event 1631_43
    {
        if (!(group_main_engine_1)) goto event_1631_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (3))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1631_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
        }
    }
    event_1631_43_end: ;
}
