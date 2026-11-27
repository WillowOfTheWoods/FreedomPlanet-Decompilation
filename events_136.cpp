#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_10959()
{
    // event 1411_45
    {
        if (!(group_main_engine_1)) goto event_1411_45_end;
        if (!((((Active*)get_instance(levellift_2647_instances))->alterables->values.get(16)) == (1))) goto event_1411_45_end;
        ((Active*)get_instance(levellift_2647_instances))->alterables->values.set(9, ((Active*)get_instance(levellift_2647_instances))->alterables->values.get(9)-8);
    }
    event_1411_45_end: ;
}
void Frames::event_func_10960()
{
    // event 1412_45
    {
        if (!(group_main_engine_1)) goto event_1412_45_end;
        if (!((((Active*)get_instance(levellift_2647_instances))->alterables->values.get(16)) == (1))) goto event_1412_45_end;
        playersensorbottombig_397_instances.clear_selection();
        levellift_2647_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, levellift_2647_instances)) goto event_1412_45_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1412_45_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.sub(24, 8);
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
    event_1412_45_end: ;
}
void Frames::event_func_10961()
{
    // event 1413_45
    {
        if (!(group_main_engine_1)) goto event_1413_45_end;
        if (!((((Active*)get_instance(levellift_2647_instances))->alterables->values.get(16)) == (1))) goto event_1413_45_end;
        levellift_2647_instances.clear_selection();
        levellifttop_2650_instances.clear_selection();
        if (!check_overlap(levellift_2647_instances, levellifttop_2650_instances)) goto event_1413_45_end;
        if (!((((Active*)get_instance(levellift_2647_instances))->alterables->values.get(9)) <= (((Active*)get_instance(levellifttop_2650_instances))->get_y()))) goto event_1413_45_end;
        ((Active*)get_instance(levellift_2647_instances))->alterables->values.set(9, ((Active*)get_instance(levellifttop_2650_instances))->get_y());
        ((Active*)get_instance(levellift_2647_instances))->alterables->values.add(16, 1);
        media.play_id(SOUND_COMMON_SWITCH_2_49, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(25, 3);
        ((Active*)get_instance(levellift_2647_instances))->alterables->flags.enable(2);
        ((Active*)get_instance(levellift_2647_instances))->alterables->values.set(17, 3);
    }
    event_1413_45_end: ;
}
void Frames::event_func_10962()
{
    // event 1414_45
    {
        if (!(group_main_engine_1)) goto event_1414_45_end;
        if (!((((Active*)get_instance(levellift_2647_instances))->alterables->values.get(16)) == (3))) goto event_1414_45_end;
        ((Active*)get_instance(levellift_2647_instances))->alterables->values.set(9, ((Active*)get_instance(levellift_2647_instances))->alterables->values.get(9)+8);
    }
    event_1414_45_end: ;
}
void Frames::event_func_10963()
{
    // event 1415_45
    {
        if (!(group_main_engine_1)) goto event_1415_45_end;
        if (!((((Active*)get_instance(levellift_2647_instances))->alterables->values.get(16)) == (3))) goto event_1415_45_end;
        playersensorbottombig_397_instances.clear_selection();
        levellift_2647_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, levellift_2647_instances)) goto event_1415_45_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1415_45_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(24, 8);
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
    event_1415_45_end: ;
}
void Frames::event_func_10964()
{
    // event 1416_45
    {
        if (!(group_main_engine_1)) goto event_1416_45_end;
        if (!((((Active*)get_instance(levellift_2647_instances))->alterables->values.get(16)) == (3))) goto event_1416_45_end;
        levellift_2647_instances.clear_selection();
        levelliftbottom_2651_instances.clear_selection();
        if (!check_overlap(levellift_2647_instances, levelliftbottom_2651_instances)) goto event_1416_45_end;
        if (!((((Active*)get_instance(levellift_2647_instances))->alterables->values.get(9)) >= (((Active*)get_instance(levelliftbottom_2651_instances))->get_y()))) goto event_1416_45_end;
        ((Active*)get_instance(levellift_2647_instances))->alterables->values.set(9, ((Active*)get_instance(levelliftbottom_2651_instances))->get_y());
        ((Active*)get_instance(levellift_2647_instances))->alterables->values.set(16, 0);
        media.play_id(SOUND_COMMON_SWITCH_2_49, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(25, 3);
        ((Active*)get_instance(levellift_2647_instances))->alterables->flags.enable(2);
        ((Active*)get_instance(levellift_2647_instances))->alterables->values.set(17, 3);
    }
    event_1416_45_end: ;
}
void Frames::event_func_10965()
{
    // event 1418_45
    {
        if (!(group_main_engine_1)) goto event_1418_45_end;
        ((Active*)get_instance(levelfireplatform1_2646_instances))->force_frame((((Active*)get_instance(levelfireplatform1_2646_instances))->alterables->values.get(4)/math_helper/180+1)%math_helper%2);
        ((Active*)get_instance(levelfireplatformflame1_2644_instances))->alterables->values.set(0, ((Active*)get_instance(levelfireplatform1_2646_instances))->alterables->values.get(4));
        ((Active*)get_instance(levelfireplatformflame2_2645_instances))->alterables->values.set(0, ((Active*)get_instance(levelfireplatform1_2646_instances))->alterables->values.get(4));
    }
    event_1418_45_end: ;
}
void Frames::event_func_10966()
{
    // event 1419_45
    {
        if (!(group_main_engine_1)) goto event_1419_45_end;
        {
            FrameObject * parent = ((Active*)get_instance(levelfireplatform1_2646_instances));
            if (parent == NULL) goto pos_end_1419_45_0;
            ((Active*)get_instance(levelfireplatformflame1_2644_instances))->set_global_position(parent->get_action_x() + -52, parent->get_action_y() + 0);
            pos_end_1419_45_0: ;
        }
        ((Active*)get_instance(levelfireplatformflame1_2644_instances))->set_direction(((Active*)get_instance(levelfireplatform1_2646_instances))->get_frame()*16);
        ((Active*)get_instance(levelfireplatformflame1_2644_instances))->set_y(((Active*)get_instance(levelfireplatformflame1_2644_instances))->get_y()+get_floor(((Active*)get_instance(levelfireplatform1_2646_instances))->alterables->values.get(18)));
        {
            FrameObject * parent = ((Active*)get_instance(levelfireplatform1_2646_instances));
            if (parent == NULL) goto pos_end_1419_45_1;
            ((Active*)get_instance(levelfireplatformflame2_2645_instances))->set_global_position(parent->get_action_x() + 52, parent->get_action_y() + 0);
            pos_end_1419_45_1: ;
        }
        ((Active*)get_instance(levelfireplatformflame2_2645_instances))->set_direction(((Active*)get_instance(levelfireplatform1_2646_instances))->get_frame()*16);
        ((Active*)get_instance(levelfireplatformflame2_2645_instances))->set_y(((Active*)get_instance(levelfireplatformflame2_2645_instances))->get_y()+get_floor(((Active*)get_instance(levelfireplatform1_2646_instances))->alterables->values.get(18)));
    }
    event_1419_45_end: ;
}
void Frames::event_func_10967()
{
    // event 1420_45
    {
        if (!(group_main_engine_1)) goto event_1420_45_end;
        if (!((((Active*)get_instance(levelfireplatform1_2646_instances))->alterables->values.get(4)) == (12))) goto event_1420_45_end;
        if (((Active*)get_instance(levelfireplatform1_2646_instances))->is_near_border(-60)) goto event_1420_45_end;
        if (not_always_1420_45 > loop_count) {
            not_always_1420_45 = loop_count + 2;
            goto event_1420_45_end;
        }
        not_always_1420_45 = loop_count + 2;
        media.play_id(SOUND_FIREPLATFORM_284, -1, 1);
    }
    event_1420_45_end: ;
}
void Frames::event_func_10968()
{
    // event 1421_45
    {
        if (!(group_main_engine_1)) goto event_1421_45_end;
        if (!((((Active*)get_instance(levelfireplatform1_2646_instances))->alterables->values.get(4)) == (192))) goto event_1421_45_end;
        if (((Active*)get_instance(levelfireplatform1_2646_instances))->is_near_border(-60)) goto event_1421_45_end;
        if (not_always_1421_45 > loop_count) {
            not_always_1421_45 = loop_count + 2;
            goto event_1421_45_end;
        }
        not_always_1421_45 = loop_count + 2;
        media.play_id(SOUND_FIREPLATFORM_284, -1, 1);
    }
    event_1421_45_end: ;
}
void Frames::event_func_10969()
{
    // event 1422_45
    {
        if (!(group_main_engine_1)) goto event_1422_45_end;
        if (!((((Active*)get_instance(levelfireplatformflame1_2644_instances))->alterables->values.get(0)) > (160))) goto event_1422_45_end;
        if (!((((Active*)get_instance(levelfireplatformflame1_2644_instances))->alterables->values.get(0)) < (190))) goto event_1422_45_end;
        ((Active*)get_instance(levelfireplatformflame1_2644_instances))->set_direction(((Active*)get_instance(levelfireplatformflame1_2644_instances))->get_direction()+1);
        ((Active*)get_instance(levelfireplatformflame2_2645_instances))->set_direction(((Active*)get_instance(levelfireplatformflame2_2645_instances))->get_direction()+1);
    }
    event_1422_45_end: ;
}
void Frames::event_func_10970()
{
    // event 1423_45
    {
        if (!(group_main_engine_1)) goto event_1423_45_end;
        if (!((((Active*)get_instance(levelfireplatformflame1_2644_instances))->alterables->values.get(0)) > (340))) goto event_1423_45_end;
        ((Active*)get_instance(levelfireplatformflame1_2644_instances))->set_direction(((Active*)get_instance(levelfireplatformflame1_2644_instances))->get_direction()+1);
        ((Active*)get_instance(levelfireplatformflame2_2645_instances))->set_direction(((Active*)get_instance(levelfireplatformflame2_2645_instances))->get_direction()+1);
    }
    event_1423_45_end: ;
}
void Frames::event_func_10971()
{
    // event 1424_45
    {
        if (!(group_main_engine_1)) goto event_1424_45_end;
        if (!((((Active*)get_instance(levelfireplatformflame1_2644_instances))->alterables->values.get(0)) < (10))) goto event_1424_45_end;
        ((Active*)get_instance(levelfireplatformflame1_2644_instances))->set_direction(((Active*)get_instance(levelfireplatformflame1_2644_instances))->get_direction()+1);
        ((Active*)get_instance(levelfireplatformflame2_2645_instances))->set_direction(((Active*)get_instance(levelfireplatformflame2_2645_instances))->get_direction()+1);
    }
    event_1424_45_end: ;
}
void Frames::event_func_10972()
{
    // event 1425_45
    {
        if (!(group_main_engine_1)) goto event_1425_45_end;
        if (((Active*)get_instance(levelfireplatformflame1_2644_instances))->is_near_border(-50)) goto event_1425_45_end;
        levelfireplatformflame1_2644_instances.clear_selection();
        player_389_instances.clear_selection();
        if (!check_overlap(levelfireplatformflame1_2644_instances, player_389_instances)) goto event_1425_45_end;
        if (!((((Active*)get_instance(levelfireplatformflame1_2644_instances))->get_direction()%math_helper%8) == (0))) goto event_1425_45_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1425_45_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1425_45_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1425_45_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 30);
        ((Active*)get_instance(playerskinsash_418_instances))->set_blend_color(make_color_int(255, 160, 128));
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_blend_color(make_color_int(255, 160, 128));
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
    }
    event_1425_45_end: ;
}
void Frames::event_func_10973()
{
    // event 1426_45
    {
        if (!(group_main_engine_1)) goto event_1426_45_end;
        if (((Active*)get_instance(levelfireplatformflame2_2645_instances))->is_near_border(-50)) goto event_1426_45_end;
        levelfireplatformflame2_2645_instances.clear_selection();
        player_389_instances.clear_selection();
        if (!check_overlap(levelfireplatformflame2_2645_instances, player_389_instances)) goto event_1426_45_end;
        if (!((((Active*)get_instance(levelfireplatformflame2_2645_instances))->get_direction()%math_helper%8) == (0))) goto event_1426_45_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1426_45_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1426_45_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1426_45_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 30);
        ((Active*)get_instance(playerskinsash_418_instances))->set_blend_color(make_color_int(255, 160, 128));
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_blend_color(make_color_int(255, 160, 128));
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
    }
    event_1426_45_end: ;
}
void Frames::event_func_10974()
{
    // event 1428_45
    {
        if (!(group_main_engine_1)) goto event_1428_45_end;
        levelscrollingplatformflame1_2654_instances.clear_selection();
        for (ObjectIterator it(levelscrollingplatformflame1_2654_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(levelscrollingplatform1_2662_instances, it.current_index));
            if (parent == NULL) goto pos_end_1428_45_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1428_45_0: ;
        }
        for (ObjectIterator it(levelscrollingplatformflame1_2654_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(levelscrollingplatform1_2662_instances, it.current_index, default_active_instance))->alterables->values.get(17));
            ((Active*)*it)->set_visible(true);
        }
        levelscrollingplatformmask1_2607_instances.clear_selection();
        for (ObjectIterator it(levelscrollingplatformmask1_2607_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(levelscrollingplatform1_2662_instances, it.current_index));
            if (parent == NULL) goto pos_end_1428_45_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1428_45_1: ;
        }
    }
    event_1428_45_end: ;
}
void Frames::event_func_10975()
{
    // event 1441_45
    {
        if (!(group_main_engine_1)) goto event_1441_45_end;
        levelpistonplatformmask_2685_instances.clear_selection();
        for (ObjectIterator it(levelpistonplatformmask_2685_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(levelpistonplatform1_2717_instances, it.current_index));
            if (parent == NULL) goto pos_end_1441_45_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1441_45_0: ;
        }
        levelspinplaformsupport_2686_instances.clear_selection();
        for (ObjectIterator it(levelspinplaformsupport_2686_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(levelspinplatform_2718_instances, it.current_index));
            if (parent == NULL) goto pos_end_1441_45_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1441_45_1: ;
        }
        for (ObjectIterator it(levelspinplaformsupport_2686_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(levelspinplatform_2718_instances, it.current_index, default_active_instance))->alterables->values.get(0)+90, 0);
            ((Active*)*it)->set_x_scale(((Active*)get_instance(levelspinplatform_2718_instances, it.current_index, default_active_instance))->alterables->values.get(2)*0.25);
        }
        levelspinplatformmask_2687_instances.clear_selection();
        for (ObjectIterator it(levelspinplatformmask_2687_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(levelspinplatform_2718_instances, it.current_index));
            if (parent == NULL) goto pos_end_1441_45_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1441_45_2: ;
        }
    }
    event_1441_45_end: ;
}
void Frames::event_func_10976()
{
    // event 1442_45
    {
        if (!(group_main_engine_1)) goto event_1442_45_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_1442_45_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (1))) goto event_1442_45_end;
        playersensorbottombig_397_instances.clear_selection();
        levelpistonplatform1_2717_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, levelpistonplatform1_2717_instances)) goto event_1442_45_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(6, get_min(sin_deg(((Active*)get_single(levelpistonplatform1_2717_instances, default_active_instance))->alterables->values.get(4)+45)*((Active*)get_single(levelpistonplatform1_2717_instances, default_active_instance))->alterables->values.get(6)*-0.01*get_abs(((Active*)get_single(levelpistonplatform1_2717_instances, default_active_instance))->alterables->values.get(5)), 0));
    }
    event_1442_45_end: ;
}
void Frames::event_func_10977()
{
    // event 1443_45
    {
        if (!(group_main_engine_1)) goto event_1443_45_end;
        hazardfireup_2226_instances.clear_selection();
        for (ObjectIterator it(hazardfireup_2226_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!hazardfireup_2226_instances.has_selection()) goto event_1443_45_end;
        player_389_instances.clear_selection();
        if (!check_overlap(hazardfireup_2226_instances, player_389_instances)) goto event_1443_45_end;
        playersensortopbig_395_instances.clear_selection();
        if (!check_overlap(hazardfireup_2226_instances, playersensortopbig_395_instances)) goto event_1443_45_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1443_45_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1443_45_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1443_45_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 30);
        ((Active*)get_instance(playerskinsash_418_instances))->set_blend_color(make_color_int(255, 160, 128));
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_blend_color(make_color_int(255, 160, 128));
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
    }
    event_1443_45_end: ;
}
void Frames::event_func_10978()
{
    // event 1444_45
    {
        if (!(group_main_engine_1)) goto event_1444_45_end;
        hazardlavapit_2719_instances.clear_selection();
        for (ObjectIterator it(hazardlavapit_2719_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/15)%math_helper%4);
        }
    }
    event_1444_45_end: ;
}
void Frames::event_func_10979()
{
    // event 1447_45
    {
        if (!(group_main_engine_1)) goto event_1447_45_end;
        if (!((global_values->get(3)%math_helper%240) < (100))) goto event_1447_45_end;
        hazardlavafallwarning_2709_instances.clear_selection();
        for (ObjectIterator it(hazardlavafallwarning_2709_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1447_45_end: ;
}
void Frames::event_func_10980()
{
    // event 1448_45
    {
        if (!(group_main_engine_1)) goto event_1448_45_end;
        if (!((global_values->get(3)%math_helper%240) > (100))) goto event_1448_45_end;
        if (!((global_values->get(3)%math_helper%240) < (150))) goto event_1448_45_end;
        hazardlavafallwarning_2709_instances.clear_selection();
        for (ObjectIterator it(hazardlavafallwarning_2709_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
        }
        if (!hazardlavafallwarning_2709_instances.has_selection()) goto event_1448_45_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(24)) == (0))) goto event_1448_45_end;
        if (not_always_1448_45 > loop_count) {
            not_always_1448_45 = loop_count + 2;
            goto event_1448_45_end;
        }
        not_always_1448_45 = loop_count + 2;
        media.play_id(SOUND_COMMON_TBALARM1_304, -1, 1);
    }
    event_1448_45_end: ;
}
void Frames::event_func_10981()
{
    // event 1449_45
    {
        if (!(group_main_engine_1)) goto event_1449_45_end;
        if (!((global_values->get(3)%math_helper%240) > (100))) goto event_1449_45_end;
        hazardlavafallwarning_2709_instances.clear_selection();
        for (ObjectIterator it(hazardlavafallwarning_2709_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/3)%math_helper%4);
        }
    }
    event_1449_45_end: ;
}
void Frames::event_func_10982()
{
    // event 1450_45
    {
        if (!(group_main_engine_1)) goto event_1450_45_end;
        if (!((global_values->get(3)%math_helper%240) == (150))) goto event_1450_45_end;
        hazardlavafall_2720_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall_2720_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
            ((Active*)*it)->move_front();
        }
    }
    event_1450_45_end: ;
}
void Frames::event_func_10983()
{
    // event 1451_45
    {
        if (!(group_main_engine_1)) goto event_1451_45_end;
        hazardlavafall_2720_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall_2720_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!hazardlavafall_2720_instances.has_selection()) goto event_1451_45_end;
        for (ObjectIterator it(hazardlavafall_2720_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 10);
        }
    }
    event_1451_45_end: ;
}
void Frames::event_func_10984()
{
    // event 1452_45
    {
        if (!(group_main_engine_1)) goto event_1452_45_end;
        hazardlavafall_2720_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall_2720_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (((Active*)*it)->alterables->values.get(3)))) { it.deselect(); continue; }
        }
        if (!hazardlavafall_2720_instances.has_selection()) goto event_1452_45_end;
        for (ObjectIterator it(hazardlavafall_2720_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+10);
        }
    }
    event_1452_45_end: ;
}
void Frames::event_func_10985()
{
    // event 1453_45
    {
        if (!(group_main_engine_1)) goto event_1453_45_end;
        if (!((global_values->get(3)%math_helper%10) == (0))) goto event_1453_45_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(24)) == (0))) goto event_1453_45_end;
        hazardlavafall_2720_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall_2720_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
        }
        if (!hazardlavafall_2720_instances.has_selection()) goto event_1453_45_end;
        media.play_id(SOUND_SERPENT_MOVE_2_35, -1, 1);
    }
    event_1453_45_end: ;
}
void Frames::event_func_10986()
{
    // event 1454_45
    {
        if (!(group_main_engine_1)) goto event_1454_45_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(24)) == (0))) goto event_1454_45_end;
        hazardlavafall_2720_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall_2720_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
        }
        if (!hazardlavafall_2720_instances.has_selection()) goto event_1454_45_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+1, 3), ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)));
    }
    event_1454_45_end: ;
}
void Frames::event_func_10987()
{
    // event 1455_45
    {
        if (!(group_main_engine_1)) goto event_1455_45_end;
        hazardlavafall_2720_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall_2720_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!hazardlavafall_2720_instances.has_selection()) goto event_1455_45_end;
        {
            SavedSelection extra_hazardlavafall_2720_instances(hazardlavafall_2720_instances);
            for (SavedIterator it(extra_hazardlavafall_2720_instances); !it.end(); ++it) {
                foreach_instance_lvf = ((Active*)*it);
                foreach_lvf_45();
            }
        }
    }
    event_1455_45_end: ;
}
void Frames::event_func_10988()
{
    // event 1457_45
    bool or_result_1457_45 = false;
    bool or_temp_result_1457_45_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1457_45_0_end;
        hazardlavafall_2720_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall_2720_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (0))) { it.deselect(); continue; }
        }
        if (!hazardlavafall_2720_instances.has_selection()) goto or_event_1457_45_0_end;
        player_389_instances.clear_selection();
        if (!check_overlap(hazardlavafall_2720_instances, player_389_instances)) goto or_event_1457_45_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) != (2))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1457_45_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1457_45_0_end;
        or_result_1457_45 = true;
        or_temp_result_1457_45_0 = true;
    }
    or_event_1457_45_0_end: ;
    player_389_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    hazardlavafall_2720_instances.clear_saved_selection();
    if (or_temp_result_1457_45_0) {
        playermovementvalues_245_instances.save_selection();
        playerothers_123_instances.save_selection();
        player_389_instances.save_selection();
        hazardlavafall_2720_instances.save_selection();
    }
    // event 1457_45
    bool or_temp_result_1457_45_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1457_45_1_end;
        hazardlavafall_2720_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall_2720_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (0))) { it.deselect(); continue; }
        }
        if (!hazardlavafall_2720_instances.has_selection()) goto or_event_1457_45_1_end;
        player_389_instances.clear_selection();
        if (!check_overlap(hazardlavafall_2720_instances, player_389_instances)) goto or_event_1457_45_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) != (2))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1457_45_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) != (21))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1457_45_1_end;
        or_result_1457_45 = true;
        or_temp_result_1457_45_1 = true;
        or_event_1457_45_1_end: ;
        if (or_temp_result_1457_45_1) {
            playermovementvalues_245_instances.save_selection();
            playerothers_123_instances.save_selection();
            player_389_instances.save_selection();
            hazardlavafall_2720_instances.save_selection();
        }
        if (!or_result_1457_45) goto or_final_or_event_1457_45_1_end;
        player_389_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        hazardlavafall_2720_instances.empty_selection();
        if (or_temp_result_1457_45_0 || or_temp_result_1457_45_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1457_45_0 || or_temp_result_1457_45_1) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1457_45_0 || or_temp_result_1457_45_1) {
            player_389_instances.restore_selection();
        }
        if (or_temp_result_1457_45_0 || or_temp_result_1457_45_1) {
            hazardlavafall_2720_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(17, 1);
        }
        guilifebasemeter_125_instances.clear_selection();
        for (ObjectIterator it(guilifebasemeter_125_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 3);
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(17, 30);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        for (ObjectIterator it(hazardlavafall_2720_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 5);
        }
        for (ObjectIterator it(guilifebasemeter_125_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 1);
        }
    }
    or_final_or_event_1457_45_1_end: ;
}
void Frames::event_func_10989()
{
    // event 1458_45
    {
        if (!(group_main_engine_1)) goto event_1458_45_end;
        hazardlavafall_2720_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall_2720_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (1))) { it.deselect(); continue; }
        }
        if (!hazardlavafall_2720_instances.has_selection()) goto event_1458_45_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) < (1))) goto event_1458_45_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
    }
    event_1458_45_end: ;
}
void Frames::event_func_10990()
{
    // event 1459_45
    {
        if (!(group_main_engine_1)) goto event_1459_45_end;
        hazardlavafall_2720_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall_2720_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
        }
        if (!hazardlavafall_2720_instances.has_selection()) goto event_1459_45_end;
        for (ObjectIterator it(hazardlavafall_2720_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(4, 1);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_min(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 5));
    }
    event_1459_45_end: ;
}
void Frames::event_func_10991()
{
    // event 1460_45
    {
        if (!(group_main_engine_1)) goto event_1460_45_end;
        hazardlavafall_2720_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall_2720_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!hazardlavafall_2720_instances.has_selection()) goto event_1460_45_end;
        qualifier_20.clear_selection();
        if (!check_overlap(hazardlavafall_2720_instances, qualifier_20)) goto event_1460_45_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1460_45_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 1);
        }
    }
    event_1460_45_end: ;
}
void Frames::event_func_10992()
{
    // event 1461_45
    bool or_result_1461_45 = false;
    bool or_temp_result_1461_45_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1461_45_0_end;
        playersensorrightbig_393_instances.clear_selection();
        switchbuttonright_2714_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, switchbuttonright_2714_instances)) goto or_event_1461_45_0_end;
        for (ObjectIterator it(switchbuttonright_2714_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!switchbuttonright_2714_instances.has_selection()) goto or_event_1461_45_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (11))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1461_45_0_end;
        or_result_1461_45 = true;
        or_temp_result_1461_45_0 = true;
    }
    or_event_1461_45_0_end: ;
    playersensorrightbig_393_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    switchbuttonright_2714_instances.clear_saved_selection();
    if (or_temp_result_1461_45_0) {
        playersensorrightbig_393_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        switchbuttonright_2714_instances.save_selection();
    }
    // event 1461_45
    bool or_temp_result_1461_45_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1461_45_1_end;
        playersensorrightbig_393_instances.clear_selection();
        switchbuttonright_2714_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, switchbuttonright_2714_instances)) goto or_event_1461_45_1_end;
        for (ObjectIterator it(switchbuttonright_2714_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!switchbuttonright_2714_instances.has_selection()) goto or_event_1461_45_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (47))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1461_45_1_end;
        or_result_1461_45 = true;
        or_temp_result_1461_45_1 = true;
        or_event_1461_45_1_end: ;
        if (or_temp_result_1461_45_1) {
            playersensorrightbig_393_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            switchbuttonright_2714_instances.save_selection();
        }
        if (!or_result_1461_45) goto or_final_or_event_1461_45_1_end;
        switchbuttonright_2714_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playersensorrightbig_393_instances.empty_selection();
        if (or_temp_result_1461_45_0 || or_temp_result_1461_45_1) {
            playersensorrightbig_393_instances.restore_selection();
        }
        if (or_temp_result_1461_45_0 || or_temp_result_1461_45_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1461_45_0 || or_temp_result_1461_45_1) {
            switchbuttonright_2714_instances.restore_selection();
        }
        for (ObjectIterator it(switchbuttonright_2714_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->flags.enable(0);
        }
        media.play_id(SOUND_COMMON_SWITCH_2_49, -1, 1);
        objectexplosiveblockdestroyer_2678_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(switchbuttonright_2714_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectexplosiveblockdestroyer_2678(parent->x + 0, parent->y + 0), parent->layer);
                objectexplosiveblockdestroyer_2678_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectexplosiveblockdestroyer_2678(parent->x + -64, parent->y + -64), parent->layer);
                objectexplosiveblockdestroyer_2678_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectexplosiveblockdestroyer_2678(parent->x + -128, parent->y + -128), parent->layer);
                objectexplosiveblockdestroyer_2678_instances.add_back();
            }
        }
    }
    or_final_or_event_1461_45_1_end: ;
}
void Frames::event_func_10993()
{
    // event 1462_45
    bool or_result_1462_45 = false;
    bool or_temp_result_1462_45_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1462_45_0_end;
        playersensorleftbig_391_instances.clear_selection();
        switchbuttonleft_2715_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, switchbuttonleft_2715_instances)) goto or_event_1462_45_0_end;
        for (ObjectIterator it(switchbuttonleft_2715_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!switchbuttonleft_2715_instances.has_selection()) goto or_event_1462_45_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (11))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1462_45_0_end;
        or_result_1462_45 = true;
        or_temp_result_1462_45_0 = true;
    }
    or_event_1462_45_0_end: ;
    switchbuttonleft_2715_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    playersensorleftbig_391_instances.clear_saved_selection();
    if (or_temp_result_1462_45_0) {
        switchbuttonleft_2715_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playersensorleftbig_391_instances.save_selection();
    }
    // event 1462_45
    bool or_temp_result_1462_45_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1462_45_1_end;
        playersensorleftbig_391_instances.clear_selection();
        switchbuttonleft_2715_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, switchbuttonleft_2715_instances)) goto or_event_1462_45_1_end;
        for (ObjectIterator it(switchbuttonleft_2715_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!switchbuttonleft_2715_instances.has_selection()) goto or_event_1462_45_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (47))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1462_45_1_end;
        or_result_1462_45 = true;
        or_temp_result_1462_45_1 = true;
        or_event_1462_45_1_end: ;
        if (or_temp_result_1462_45_1) {
            switchbuttonleft_2715_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            playersensorleftbig_391_instances.save_selection();
        }
        if (!or_result_1462_45) goto or_final_or_event_1462_45_1_end;
        switchbuttonleft_2715_instances.empty_selection();
        playersensorleftbig_391_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_1462_45_0 || or_temp_result_1462_45_1) {
            switchbuttonleft_2715_instances.restore_selection();
        }
        if (or_temp_result_1462_45_0 || or_temp_result_1462_45_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1462_45_0 || or_temp_result_1462_45_1) {
            playersensorleftbig_391_instances.restore_selection();
        }
        media.play_id(SOUND_COMMON_SWITCH_2_49, -1, 1);
        objectexplosiveblockdestroyer_2678_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(switchbuttonleft_2715_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectexplosiveblockdestroyer_2678(parent->x + 0, parent->y + 0), parent->layer);
                objectexplosiveblockdestroyer_2678_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectexplosiveblockdestroyer_2678(parent->x + 64, parent->y + -64), parent->layer);
                objectexplosiveblockdestroyer_2678_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectexplosiveblockdestroyer_2678(parent->x + 128, parent->y + -128), parent->layer);
                objectexplosiveblockdestroyer_2678_instances.add_back();
            }
        }
        for (ObjectIterator it(switchbuttonleft_2715_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->flags.enable(0);
        }
        for (ObjectIterator it(objectexplosiveblockdestroyer_2678_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -1);
        }
    }
    or_final_or_event_1462_45_1_end: ;
}
void Frames::event_func_10994()
{
    // event 1463_45
    {
        if (!(group_main_engine_1)) goto event_1463_45_end;
        objectexplosiveblockdestroyer_2678_instances.clear_selection();
        for (ObjectIterator it(objectexplosiveblockdestroyer_2678_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!objectexplosiveblockdestroyer_2678_instances.has_selection()) goto event_1463_45_end;
        for (ObjectIterator it(objectexplosiveblockdestroyer_2678_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+12*((Active*)*it)->alterables->values.get(2));
        }
    }
    event_1463_45_end: ;
}
void Frames::event_func_10995()
{
    // event 1464_45
    {
        if (!(group_main_engine_1)) goto event_1464_45_end;
        objectexplosiveblockdestroyer_2678_instances.clear_selection();
        for (ObjectIterator it(objectexplosiveblockdestroyer_2678_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!objectexplosiveblockdestroyer_2678_instances.has_selection()) goto event_1464_45_end;
        objectexplosiveblock_2708_instances.clear_selection();
        if (!check_overlap(objectexplosiveblockdestroyer_2678_instances, objectexplosiveblock_2708_instances)) goto event_1464_45_end;
        for (ObjectIterator it(objectexplosiveblockdestroyer_2678_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
        }
    }
    event_1464_45_end: ;
}
void Frames::event_func_10996()
{
    // event 1465_45
    {
        if (!(group_main_engine_1)) goto event_1465_45_end;
        objectexplosiveblockdestroyer_2678_instances.clear_selection();
        for (ObjectIterator it(objectexplosiveblockdestroyer_2678_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!objectexplosiveblockdestroyer_2678_instances.has_selection()) goto event_1465_45_end;
        for (ObjectIterator it(objectexplosiveblockdestroyer_2678_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+2*((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1465_45_end: ;
}
void Frames::event_func_10997()
{
    // event 1466_45
    {
        if (!(group_main_engine_1)) goto event_1466_45_end;
        objectexplosiveblockdestroyer_2678_instances.clear_selection();
        for (ObjectIterator it(objectexplosiveblockdestroyer_2678_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!objectexplosiveblockdestroyer_2678_instances.has_selection()) goto event_1466_45_end;
        objectexplosiveblock_2708_instances.clear_selection();
        if (!check_overlap(objectexplosiveblockdestroyer_2678_instances, objectexplosiveblock_2708_instances)) goto event_1466_45_end;
        for (ObjectIterator it(objectexplosiveblock_2708_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!objectexplosiveblock_2708_instances.has_selection()) goto event_1466_45_end;
        for (ObjectIterator it(objectexplosiveblock_2708_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 8));
        for (ObjectIterator it(objectexplosiveblockdestroyer_2678_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        FrameObject * single_instance_1466_45_0; single_instance_1466_45_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectexplosiveblock_2708_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 32, parent->y + 32), parent->layer);
                if (single_instance_1466_45_0 == NULL)
                    single_instance_1466_45_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
    }
    event_1466_45_end: ;
}
void Frames::event_func_10998()
{
    // event 1467_45
    {
        if (!(group_main_engine_1)) goto event_1467_45_end;
        objectexplosiveblockdestroyer_2678_instances.clear_selection();
        for (ObjectIterator it(objectexplosiveblockdestroyer_2678_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (30))) { it.deselect(); continue; }
        }
        if (!objectexplosiveblockdestroyer_2678_instances.has_selection()) goto event_1467_45_end;
        for (ObjectIterator it(objectexplosiveblockdestroyer_2678_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1467_45_end: ;
}
void Frames::event_func_10999()
{
    // event 1468_45
    {
        if (!(group_main_engine_1)) goto event_1468_45_end;
        objectexplosiveblock_2708_instances.clear_selection();
        for (ObjectIterator it(objectexplosiveblock_2708_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!objectexplosiveblock_2708_instances.has_selection()) goto event_1468_45_end;
        {
            SavedSelection extra_objectexplosiveblock_2708_instances(objectexplosiveblock_2708_instances);
            for (SavedIterator it(extra_objectexplosiveblock_2708_instances); !it.end(); ++it) {
                foreach_instance_ec = ((Active*)*it);
                foreach_ec_45();
            }
        }
    }
    event_1468_45_end: ;
}
void Frames::event_func_11000()
{
    // event 1470_45
    {
        if (!(group_main_engine_1)) goto event_1470_45_end;
        objectexplosiveblock_2708_instances.clear_selection();
        for (ObjectIterator it(objectexplosiveblock_2708_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (60))) { it.deselect(); continue; }
        }
        if (!objectexplosiveblock_2708_instances.has_selection()) goto event_1470_45_end;
        for (ObjectIterator it(objectexplosiveblock_2708_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1470_45_end: ;
}
void Frames::event_func_11001()
{
    // event 1573_45
    {
        if (!(group_main_engine_1)) goto event_1573_45_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1573_45_end;
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        FrameObject * single_instance_1573_45_0; single_instance_1573_45_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1573_45_0 == NULL)
                    single_instance_1573_45_0 = new_obj;
            }
        }
        FrameObject * single_instance_1573_45_1; single_instance_1573_45_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1573_45_1 == NULL)
                    single_instance_1573_45_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
            ((Active*)*it)->alterables->flags.enable(11);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_45();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1573_45_end: ;
}
void Frames::event_func_11002()
{
    // event 1605_45
    {
        if (!(group_main_engine_1)) goto event_1605_45_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto event_1605_45_end;
        qualifier_19.clear_selection();
        if (!check_overlap(enemyseeker_2648_instances, qualifier_19)) goto event_1605_45_end;
        FrameObject * single_instance_1605_45_0; single_instance_1605_45_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyseeker_2648_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + -8), parent->layer);
                if (single_instance_1605_45_0 == NULL)
                    single_instance_1605_45_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1605_45_0))->set_direction(2);
        FrameObject * single_instance_1605_45_1; single_instance_1605_45_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyseeker_2648_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1605_45_1 == NULL)
                    single_instance_1605_45_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        media.play_id(SOUND_ITEM_ITEMBOX_12, -1, 1);
        FrameObject * single_instance_1605_45_2; single_instance_1605_45_2 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_19); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitorbroken_330(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1605_45_2 == NULL)
                    single_instance_1605_45_2 = new_obj;
            }
        }
        FrameObject * single_instance_1605_45_3; single_instance_1605_45_3 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_19); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitoricon_331(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1605_45_3 == NULL)
                    single_instance_1605_45_3 = new_obj;
            }
        }
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
            ((Active*)*it)->destroy();
        }
        ((Active*)((Active*)single_instance_1605_45_2))->set_direction(((Active*)get_single(qualifier_19, default_active_instance))->alterables->values.get(3));
        ((Active*)((Active*)single_instance_1605_45_2))->move_back();
        ((Active*)((Active*)single_instance_1605_45_3))->force_frame(((Active*)get_single(qualifier_19, default_active_instance))->alterables->values.get(2));
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_45();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1605_45_end: ;
}
void Frames::event_func_11003()
{
    // event 1606_45
    bool or_result_1606_45 = false;
    bool or_temp_result_1606_45_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1606_45_0_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto or_event_1606_45_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyseeker_2648_instances, qualifier_7)) goto or_event_1606_45_0_end;
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto or_event_1606_45_0_end;
        or_result_1606_45 = true;
        or_temp_result_1606_45_0 = true;
    }
    or_event_1606_45_0_end: ;
    enemyseeker_2648_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1606_45_0) {
        enemyseeker_2648_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1606_45
    bool or_temp_result_1606_45_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1606_45_1_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto or_event_1606_45_1_end;
        or_result_1606_45 = true;
        or_temp_result_1606_45_1 = true;
        or_event_1606_45_1_end: ;
        if (or_temp_result_1606_45_1) {
            enemyseeker_2648_instances.save_selection();
        }
        if (!or_result_1606_45) goto or_final_or_event_1606_45_1_end;
        enemyseeker_2648_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1606_45_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1606_45_0 || or_temp_result_1606_45_1) {
            enemyseeker_2648_instances.restore_selection();
        }
        FrameObject * single_instance_1606_45_0; single_instance_1606_45_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyseeker_2648_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1606_45_0 == NULL)
                    single_instance_1606_45_0 = new_obj;
            }
        }
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_45();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(11);
        }
    }
    or_final_or_event_1606_45_1_end: ;
}
void Frames::event_func_11004()
{
    // event 1647_45
    {
        if (!(group_main_engine_1)) goto event_1647_45_end;
        enemylavasquid_2721_instances.clear_selection();
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
        }
        if (!enemylavasquid_2721_instances.has_selection()) goto event_1647_45_end;
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
            ((Active*)*it)->set_direction((((Active*)*it)->alterables->values.get(6)+1)*8+16+((Active*)*it)->alterables->values.get(5));
        }
    }
    event_1647_45_end: ;
}
void Frames::event_func_11005()
{
    // event 1648_45
    {
        if (!(group_main_engine_1)) goto event_1648_45_end;
        enemylavasquid_2721_instances.clear_selection();
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (30))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(11)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
        }
        if (!enemylavasquid_2721_instances.has_selection()) goto event_1648_45_end;
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->alterables->values.set(5, 0-((Active*)*it)->alterables->values.get(5));
        }
    }
    event_1648_45_end: ;
}
void Frames::event_func_11006()
{
    // event 1649_45
    {
        if (!(group_main_engine_1)) goto event_1649_45_end;
        enemylavasquid_2721_instances.clear_selection();
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (50))) { it.deselect(); continue; }
        }
        if (!enemylavasquid_2721_instances.has_selection()) goto event_1649_45_end;
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1649_45_end: ;
}
void Frames::event_func_11007()
{
    // event 1650_45
    {
        if (!(group_main_engine_1)) goto event_1650_45_end;
        enemylavasquid_2721_instances.clear_selection();
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (80))) { it.deselect(); continue; }
        }
        if (!enemylavasquid_2721_instances.has_selection()) goto event_1650_45_end;
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->get_x());
        }
    }
    event_1650_45_end: ;
}
void Frames::event_func_11008()
{
    // event 1651_45
    {
        if (!(group_main_engine_1)) goto event_1651_45_end;
        enemylavasquid_2721_instances.clear_selection();
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(7))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!enemylavasquid_2721_instances.has_selection()) goto event_1651_45_end;
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        FrameObject * single_instance_1651_45_0; single_instance_1651_45_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemylavasquid_2721_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemylavasquidlaser_2676(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1651_45_0 == NULL)
                    single_instance_1651_45_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1651_45_0))->alterables->values.set(0, ((Active*)single_instance_1651_45_0)->alterables->values.get(0)*((Active*)get_single(enemylavasquid_2721_instances, default_active_instance))->alterables->values.get(6));
        media.play_id(SOUND_COMMON_BLASTER7_73, -1, 1);
        FrameObject * single_instance_1651_45_1; single_instance_1651_45_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemylavasquid_2721_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1651_45_1 == NULL)
                    single_instance_1651_45_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1651_45_1))->set_x_scale(0.5);
    }
    event_1651_45_end: ;
}
void Frames::event_func_11009()
{
    // event 1652_45
    {
        if (!(group_main_engine_1)) goto event_1652_45_end;
        enemylavasquid_2721_instances.clear_selection();
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!enemylavasquid_2721_instances.has_selection()) goto event_1652_45_end;
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)*it)->alterables->values.get(6)+1)*8+16);
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1652_45_end: ;
}
void Frames::event_func_11010()
{
    // event 1653_45
    {
        if (!(group_main_engine_1)) goto event_1653_45_end;
        enemylavasquid_2721_instances.clear_selection();
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (30))) { it.deselect(); continue; }
        }
        if (!enemylavasquid_2721_instances.has_selection()) goto event_1653_45_end;
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->values.set(8, ((Active*)*it)->alterables->values.get(6)*-8);
        }
    }
    event_1653_45_end: ;
}
void Frames::event_func_11011()
{
    // event 1654_45
    {
        if (!(group_main_engine_1)) goto event_1654_45_end;
        enemylavasquid_2721_instances.clear_selection();
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
        }
        if (!enemylavasquid_2721_instances.has_selection()) goto event_1654_45_end;
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(7));
            ((Active*)*it)->alterables->values.add(7, ((Active*)*it)->alterables->values.get(8));
        }
    }
    event_1654_45_end: ;
}
void Frames::event_func_11012()
{
    // event 1655_45
    {
        if (!(group_main_engine_1)) goto event_1655_45_end;
        enemylavasquid_2721_instances.clear_selection();
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0))) { it.deselect(); continue; }
        }
        if (!enemylavasquid_2721_instances.has_selection()) goto event_1655_45_end;
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, get_max(((Active*)*it)->alterables->values.get(8)-0.2, 0));
        }
    }
    event_1655_45_end: ;
}
void Frames::event_func_11013()
{
    // event 1656_45
    {
        if (!(group_main_engine_1)) goto event_1656_45_end;
        enemylavasquid_2721_instances.clear_selection();
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) < (0))) { it.deselect(); continue; }
        }
        if (!enemylavasquid_2721_instances.has_selection()) goto event_1656_45_end;
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, get_min(((Active*)*it)->alterables->values.get(8)+0.2, 0));
        }
    }
    event_1656_45_end: ;
}
void Frames::event_func_11014()
{
    // event 1657_45
    {
        if (!(group_main_engine_1)) goto event_1657_45_end;
        enemylavasquid_2721_instances.clear_selection();
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
        }
        if (!enemylavasquid_2721_instances.has_selection()) goto event_1657_45_end;
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    event_1657_45_end: ;
}
void Frames::event_func_11015()
{
    // event 1658_45
    {
        if (!(group_main_engine_1)) goto event_1658_45_end;
        enemylavasquid_2721_instances.clear_selection();
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!enemylavasquid_2721_instances.has_selection()) goto event_1658_45_end;
        enemylimiter_350_instances.clear_selection();
        if (!check_overlap(enemylavasquid_2721_instances, enemylimiter_350_instances)) goto event_1658_45_end;
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_single(enemylimiter_350_instances, default_active_instance))->get_box_index(2)))) { it.deselect(); continue; }
        }
        if (!enemylavasquid_2721_instances.has_selection()) goto event_1658_45_end;
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1658_45_end: ;
}
void Frames::event_func_11016()
{
    // event 1659_45
    {
        if (!(group_main_engine_1)) goto event_1659_45_end;
        enemylavasquid_2721_instances.clear_selection();
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!enemylavasquid_2721_instances.has_selection()) goto event_1659_45_end;
        enemylimiter_350_instances.clear_selection();
        if (!check_overlap(enemylavasquid_2721_instances, enemylimiter_350_instances)) goto event_1659_45_end;
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_single(enemylimiter_350_instances, default_active_instance))->get_box_index(0)))) { it.deselect(); continue; }
        }
        if (!enemylavasquid_2721_instances.has_selection()) goto event_1659_45_end;
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1659_45_end: ;
}
void Frames::event_func_11017()
{
    // event 1660_45
    {
        if (!(group_main_engine_1)) goto event_1660_45_end;
        enemylavasquid_2721_instances.clear_selection();
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!enemylavasquid_2721_instances.has_selection()) goto event_1660_45_end;
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 3);
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    event_1660_45_end: ;
}
void Frames::event_func_11018()
{
    // event 1661_45
    {
        if (!(group_main_engine_1)) goto event_1661_45_end;
        enemylavasquid_2721_instances.clear_selection();
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
        }
        if (!enemylavasquid_2721_instances.has_selection()) goto event_1661_45_end;
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(9);
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1661_45_end: ;
}
void Frames::event_func_11019()
{
    // event 1662_45
    {
        if (!(group_main_engine_1)) goto event_1662_45_end;
        enemylavasquid_2721_instances.clear_selection();
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (15))) { it.deselect(); continue; }
        }
        if (!enemylavasquid_2721_instances.has_selection()) goto event_1662_45_end;
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->flags.disable(2);
            ((Active*)*it)->alterables->values.set(6, 0-((Active*)*it)->alterables->values.get(6));
        }
    }
    event_1662_45_end: ;
}
void Frames::event_func_11020()
{
    // event 1663_45
    {
        if (!(group_main_engine_1)) goto event_1663_45_end;
        enemylavasquid_2721_instances.clear_selection();
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemylavasquid_2721_instances.has_selection()) goto event_1663_45_end;
        FrameObject * single_instance_1663_45_0; single_instance_1663_45_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemylavasquid_2721_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemylavasquiddebris_2677(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1663_45_0 == NULL)
                    single_instance_1663_45_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1663_45_0))->set_direction(((Active*)get_single(enemylavasquid_2721_instances, default_active_instance))->get_direction());
        ((Active*)((Active*)single_instance_1663_45_0))->alterables->values.set(23, ((Active*)get_single(enemylavasquid_2721_instances, default_active_instance))->alterables->values.get(23));
        ((Active*)((Active*)single_instance_1663_45_0))->alterables->values.set(24, ((Active*)get_single(enemylavasquid_2721_instances, default_active_instance))->alterables->values.get(24)-4);
    }
    event_1663_45_end: ;
}
void Frames::event_func_11021()
{
    // event 1664_45
    {
        if (!(group_main_engine_1)) goto event_1664_45_end;
        enemylavasquid_2721_instances.clear_selection();
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemylavasquid_2721_instances.has_selection()) goto event_1664_45_end;
        FrameObject * single_instance_1664_45_0; single_instance_1664_45_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemylavasquid_2721_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemylavasquiddebris_2677(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1664_45_0 == NULL)
                    single_instance_1664_45_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1664_45_0))->set_direction(((Active*)get_single(enemylavasquid_2721_instances, default_active_instance))->get_direction());
        ((Active*)((Active*)single_instance_1664_45_0))->force_frame(1);
        ((Active*)((Active*)single_instance_1664_45_0))->alterables->values.set(23, ((Active*)get_single(enemylavasquid_2721_instances, default_active_instance))->alterables->values.get(23));
        ((Active*)((Active*)single_instance_1664_45_0))->alterables->values.set(24, ((Active*)get_single(enemylavasquid_2721_instances, default_active_instance))->alterables->values.get(24)+4);
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1664_45_1; single_instance_1664_45_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_objectkeystone_311(((Active*)single_instance_1664_45_0)->x + 0, ((Active*)single_instance_1664_45_0)->y + 0), ((Active*)single_instance_1664_45_0)->layer);
            if (single_instance_1664_45_1 == NULL)
                single_instance_1664_45_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1664_45_1))->set_direction(3);
    }
    event_1664_45_end: ;
}
void Frames::event_func_11022()
{
    // event 1665_45
    bool or_result_1665_45 = false;
    bool or_temp_result_1665_45_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1665_45_0_end;
        enemylavasquiddebris_2677_instances.clear_selection();
        for (ObjectIterator it(enemylavasquiddebris_2677_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemylavasquiddebris_2677_instances.has_selection()) goto or_event_1665_45_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemylavasquiddebris_2677_instances, qualifier_7)) goto or_event_1665_45_0_end;
        for (ObjectIterator it(enemylavasquiddebris_2677_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemylavasquiddebris_2677_instances.has_selection()) goto or_event_1665_45_0_end;
        or_result_1665_45 = true;
        or_temp_result_1665_45_0 = true;
    }
    or_event_1665_45_0_end: ;
    enemylavasquiddebris_2677_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1665_45_0) {
        qualifier_7.save_selection();
        enemylavasquiddebris_2677_instances.save_selection();
    }
    // event 1665_45
    bool or_temp_result_1665_45_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1665_45_1_end;
        enemylavasquiddebris_2677_instances.clear_selection();
        for (ObjectIterator it(enemylavasquiddebris_2677_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemylavasquiddebris_2677_instances.has_selection()) goto or_event_1665_45_1_end;
        or_result_1665_45 = true;
        or_temp_result_1665_45_1 = true;
        or_event_1665_45_1_end: ;
        if (or_temp_result_1665_45_1) {
            enemylavasquiddebris_2677_instances.save_selection();
        }
        if (!or_result_1665_45) goto or_final_or_event_1665_45_1_end;
        enemylavasquiddebris_2677_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1665_45_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1665_45_0 || or_temp_result_1665_45_1) {
            enemylavasquiddebris_2677_instances.restore_selection();
        }
        FrameObject * single_instance_1665_45_0; single_instance_1665_45_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemylavasquiddebris_2677_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1665_45_0 == NULL)
                    single_instance_1665_45_0 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(enemylavasquiddebris_2677_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_45();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        enemylavasquiddebris_2677_instances.clear_selection();
        for (ObjectIterator it(enemylavasquiddebris_2677_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(11);
        }
    }
    or_final_or_event_1665_45_1_end: ;
}
void Frames::event_func_11023()
{
    // event 1667_45
    {
        if (!(group_main_engine_1)) goto event_1667_45_end;
        enemylavasquiddebris_2677_instances.clear_selection();
        for (ObjectIterator it(enemylavasquiddebris_2677_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemylavasquiddebris_2677_instances.has_selection()) goto event_1667_45_end;
        for (ObjectIterator it(enemylavasquiddebris_2677_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1667_45_end: ;
}
void Frames::event_func_11024()
{
    // event 1668_45
    {
        if (!(group_main_engine_1)) goto event_1668_45_end;
        enemylavasquidlaser_2676_instances.clear_selection();
        for (ObjectIterator it(enemylavasquidlaser_2676_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(0));
        }
    }
    event_1668_45_end: ;
}
void Frames::event_func_11025()
{
    // event 1669_45
    {
        if (!(group_main_engine_1)) goto event_1669_45_end;
        enemylavasquidlaser_2676_instances.clear_selection();
        for (ObjectIterator it(enemylavasquidlaser_2676_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_near_border(-100))) { it.deselect(); continue; }
        }
        if (!enemylavasquidlaser_2676_instances.has_selection()) goto event_1669_45_end;
        for (ObjectIterator it(enemylavasquidlaser_2676_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1669_45_end: ;
}
void Frames::event_func_11026()
{
    // event 1672_45
    {
        if (!(group_main_engine_1)) goto event_1672_45_end;
        enemylavasquidlaser_2676_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(enemylavasquidlaser_2676_instances, qualifier_19)) goto event_1672_45_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1672_45_end;
        FrameObject * single_instance_1672_45_0; single_instance_1672_45_0 = pick_random(qualifier_19);
        if (single_instance_1672_45_0 == NULL) goto event_1672_45_end;
        ((Active*)((Active*)single_instance_1672_45_0))->alterables->flags.enable(6);
    }
    event_1672_45_end: ;
}
void Frames::event_func_11027()
{
    // event 1674_45
    {
        if (!(group_main_engine_1)) goto event_1674_45_end;
        ((Active*)get_instance(minibosstrapdoor_2722_instances))->set_x(((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->values.get(0)+((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->values.get(1));
        enemywallpusher_2723_instances.clear_selection();
        for (ObjectIterator it(enemywallpusher_2723_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 30);
        }
    }
    event_1674_45_end: ;
}
void Frames::event_func_11028()
{
    // event 1675_45
    {
        if (!(group_main_engine_1)) goto event_1675_45_end;
        if (!((((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->values.get(2)) == (0))) goto event_1675_45_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(minibosstrapdoor_2722_instances))->get_x()-200))) goto event_1675_45_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) > (((Active*)get_instance(minibosstrapdoor_2722_instances))->get_y()+48))) goto event_1675_45_end;
        ((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->values.add(2, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 1);
    }
    event_1675_45_end: ;
}
void Frames::event_func_11029()
{
    // event 1676_45
    {
        if (!(group_main_engine_1)) goto event_1676_45_end;
        if (!((((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->values.get(2)) == (1))) goto event_1676_45_end;
        if (!((((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->values.get(1)) > (0))) goto event_1676_45_end;
        ((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->values.sub(1, 8);
    }
    event_1676_45_end: ;
}
void Frames::event_func_11030()
{
    // event 1677_45
    {
        if (!(group_main_engine_1)) goto event_1677_45_end;
        if (!((((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->values.get(2)) == (1))) goto event_1677_45_end;
        ((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->flags.disable(1);
    }
    event_1677_45_end: ;
}
void Frames::event_func_11031()
{
    // event 1678_45
    {
        if (!(group_main_engine_1)) goto event_1678_45_end;
        if (!((((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->values.get(2)) == (1))) goto event_1678_45_end;
        playersensorrightbig_393_instances.clear_selection();
        minibossbarrier_924_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, minibossbarrier_924_instances)) goto event_1678_45_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (11))) goto event_1678_45_end;
        ((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->flags.enable(1);
    }
    event_1678_45_end: ;
}
void Frames::event_func_11032()
{
    // event 1679_45
    {
        if (!(group_main_engine_1)) goto event_1679_45_end;
        if (!((((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->values.get(2)) == (1))) goto event_1679_45_end;
        minibossbarrier_924_instances.clear_selection();
        if (!check_not_overlap(minibossbarrier_924_instances, enemylimiter_350_instances)) goto event_1679_45_end;
        if (!(((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->flags.is_off(1))) goto event_1679_45_end;
        enemywallpusher_2723_instances.clear_selection();
        for (ObjectIterator it(enemywallpusher_2723_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-2);
        }
        for (ObjectIterator it(minibossbarrier_924_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-2);
        }
        minibossrailing2_1165_instances.clear_selection();
        for (ObjectIterator it(minibossrailing2_1165_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-2);
        }
    }
    event_1679_45_end: ;
}
void Frames::event_func_11033()
{
    // event 1680_45
    {
        if (!(group_main_engine_1)) goto event_1680_45_end;
        if (!((((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->values.get(2)) == (1))) goto event_1680_45_end;
        minibossbarrier_924_instances.clear_selection();
        if (!check_not_overlap(minibossbarrier_924_instances, enemylimiter_350_instances)) goto event_1680_45_end;
        if (!(((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->flags.is_off(1))) goto event_1680_45_end;
        playersensorrightbig_393_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, minibossbarrier_924_instances)) goto event_1680_45_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.sub(23, 2);
    }
    event_1680_45_end: ;
}
void Frames::event_func_11034()
{
    // event 1681_45
    {
        if (!(group_main_engine_1)) goto event_1681_45_end;
        if (!((((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->values.get(2)) == (1))) goto event_1681_45_end;
        minibossbarrier_924_instances.clear_selection();
        if (!check_not_overlap(minibossbarrier_924_instances, enemylimiter_350_instances)) goto event_1681_45_end;
        if (!(((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->flags.is_on(1))) goto event_1681_45_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1681_45_end;
        enemywallpusher_2723_instances.clear_selection();
        for (ObjectIterator it(enemywallpusher_2723_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-1);
        }
        for (ObjectIterator it(minibossbarrier_924_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-1);
        }
        minibossrailing2_1165_instances.clear_selection();
        for (ObjectIterator it(minibossrailing2_1165_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-1);
        }
    }
    event_1681_45_end: ;
}
void Frames::event_func_11035()
{
    // event 1682_45
    {
        if (!(group_main_engine_1)) goto event_1682_45_end;
        if (!((((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->values.get(2)) == (1))) goto event_1682_45_end;
        minibossbarrier_924_instances.clear_selection();
        if (!check_not_overlap(minibossbarrier_924_instances, enemylimiter_350_instances)) goto event_1682_45_end;
        if (!(((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->flags.is_on(1))) goto event_1682_45_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1682_45_end;
        playersensorrightbig_393_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, minibossbarrier_924_instances)) goto event_1682_45_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.sub(23, 1);
    }
    event_1682_45_end: ;
}
void Frames::event_func_11036()
{
    // event 1683_45
    {
        if (!(group_main_engine_1)) goto event_1683_45_end;
        if (!((((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->values.get(2)) == (1))) goto event_1683_45_end;
        minibossbarrier_924_instances.clear_selection();
        enemylimiter_350_instances.clear_selection();
        if (!check_overlap(minibossbarrier_924_instances, enemylimiter_350_instances)) goto event_1683_45_end;
        if (!(((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->flags.is_off(1))) goto event_1683_45_end;
        enemywallpusher_2723_instances.clear_selection();
        for (ObjectIterator it(enemywallpusher_2723_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1683_45_end: ;
}
void Frames::event_func_11037()
{
    // event 1684_45
    {
        if (!(group_main_engine_1)) goto event_1684_45_end;
        if (!((((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->values.get(2)) == (1))) goto event_1684_45_end;
        minibossbarrier_924_instances.clear_selection();
        enemylimiter_350_instances.clear_selection();
        if (!check_overlap(minibossbarrier_924_instances, enemylimiter_350_instances)) goto event_1684_45_end;
        if (!(((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->flags.is_on(1))) goto event_1684_45_end;
        enemywallpusher_2723_instances.clear_selection();
        for (ObjectIterator it(enemywallpusher_2723_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1684_45_end: ;
}
void Frames::event_func_11038()
{
    // event 1685_45
    {
        if (!(group_main_engine_1)) goto event_1685_45_end;
        if (!((((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->values.get(2)) == (1))) goto event_1685_45_end;
        enemywallpusher_2723_instances.clear_selection();
        for (ObjectIterator it(enemywallpusher_2723_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (3))) { it.deselect(); continue; }
        }
        if (!enemywallpusher_2723_instances.has_selection()) goto event_1685_45_end;
        for (ObjectIterator it(enemywallpusher_2723_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 10);
        }
    }
    event_1685_45_end: ;
}
void Frames::event_func_11039()
{
    // event 1686_45
    bool or_result_1686_45 = false;
    bool or_temp_result_1686_45_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1686_45_0_end;
        playerreflect_447_instances.clear_selection();
        enemywallpusher_2723_instances.clear_selection();
        if (!check_overlap(playerreflect_447_instances, enemywallpusher_2723_instances)) goto or_event_1686_45_0_end;
        or_result_1686_45 = true;
        or_temp_result_1686_45_0 = true;
    }
    or_event_1686_45_0_end: ;
    enemywallpusher_2723_instances.clear_saved_selection();
    playerreflect_447_instances.clear_saved_selection();
    if (or_temp_result_1686_45_0) {
        enemywallpusher_2723_instances.save_selection();
        playerreflect_447_instances.save_selection();
    }
    // event 1686_45
    bool or_temp_result_1686_45_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1686_45_1_end;
        effectswhiteburst_5_instances.clear_selection();
        enemywallpusher_2723_instances.clear_selection();
        if (!check_overlap(effectswhiteburst_5_instances, enemywallpusher_2723_instances)) goto or_event_1686_45_1_end;
        or_result_1686_45 = true;
        or_temp_result_1686_45_1 = true;
    }
    or_event_1686_45_1_end: ;
    effectswhiteburst_5_instances.clear_saved_selection();
    if (or_temp_result_1686_45_1) {
        enemywallpusher_2723_instances.save_selection();
        effectswhiteburst_5_instances.save_selection();
    }
    // event 1686_45
    bool or_temp_result_1686_45_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1686_45_2_end;
        thunderspark_339_instances.clear_selection();
        enemywallpusher_2723_instances.clear_selection();
        if (!check_overlap(thunderspark_339_instances, enemywallpusher_2723_instances)) goto or_event_1686_45_2_end;
        or_result_1686_45 = true;
        or_temp_result_1686_45_2 = true;
        or_event_1686_45_2_end: ;
        thunderspark_339_instances.clear_saved_selection();
        if (or_temp_result_1686_45_2) {
            thunderspark_339_instances.save_selection();
            enemywallpusher_2723_instances.save_selection();
        }
        if (!or_result_1686_45) goto or_final_or_event_1686_45_2_end;
        thunderspark_339_instances.empty_selection();
        playerreflect_447_instances.empty_selection();
        enemywallpusher_2723_instances.empty_selection();
        effectswhiteburst_5_instances.empty_selection();
        if (or_temp_result_1686_45_0 || or_temp_result_1686_45_1 || or_temp_result_1686_45_2) {
            enemywallpusher_2723_instances.restore_selection();
        }
        if (or_temp_result_1686_45_1) {
            effectswhiteburst_5_instances.restore_selection();
        }
        if (or_temp_result_1686_45_2) {
            thunderspark_339_instances.restore_selection();
        }
        if (or_temp_result_1686_45_0) {
            playerreflect_447_instances.restore_selection();
        }
        for (ObjectIterator it(enemywallpusher_2723_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 13);
        }
    }
    or_final_or_event_1686_45_2_end: ;
}
void Frames::event_func_11040()
{
    // event 1687_45
    {
        if (!(group_main_engine_1)) goto event_1687_45_end;
        if (!((((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->values.get(2)) == (1))) goto event_1687_45_end;
        enemywallpusher_2723_instances.clear_selection();
        for (ObjectIterator it(enemywallpusher_2723_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!enemywallpusher_2723_instances.has_selection()) goto event_1687_45_end;
        minibossrailing2_1165_instances.clear_selection();
        for (ObjectIterator it(minibossrailing2_1165_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+get_floor(((Active*)get_single(enemywallpusher_2723_instances, it.current_index, default_active_instance))->alterables->values.get(3)/math_helper/2));
        }
        minibossbarrier_924_instances.clear_selection();
        for (ObjectIterator it(minibossbarrier_924_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+get_floor(((Active*)get_single(enemywallpusher_2723_instances, it.current_index, default_active_instance))->alterables->values.get(3)/math_helper/2));
        }
        for (ObjectIterator it(enemywallpusher_2723_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+get_floor(((Active*)*it)->alterables->values.get(3)/math_helper/2));
        }
    }
    event_1687_45_end: ;
}
void Frames::event_func_11041()
{
    // event 1688_45
    {
        if (!(group_main_engine_1)) goto event_1688_45_end;
        if (!((((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->values.get(2)) == (1))) goto event_1688_45_end;
        enemywallpusher_2723_instances.clear_selection();
        for (ObjectIterator it(enemywallpusher_2723_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!enemywallpusher_2723_instances.has_selection()) goto event_1688_45_end;
        for (ObjectIterator it(enemywallpusher_2723_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 0.5);
        }
    }
    event_1688_45_end: ;
}
void Frames::event_func_11042()
{
    // event 1689_45
    {
        if (!(group_main_engine_1)) goto event_1689_45_end;
        if (!((((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->values.get(2)) == (1))) goto event_1689_45_end;
        minibossbarrier_924_instances.clear_selection();
        switchbuttonright_2714_instances.clear_selection();
        if (!check_overlap(minibossbarrier_924_instances, switchbuttonright_2714_instances)) goto event_1689_45_end;
        for (ObjectIterator it(switchbuttonright_2714_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->flags.enable(0);
        }
        media.play_id(SOUND_COMMON_SWITCH_2_49, -1, 1);
        objectexplosiveblockdestroyer_2678_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(switchbuttonright_2714_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectexplosiveblockdestroyer_2678(parent->x + 0, parent->y + 0), parent->layer);
                objectexplosiveblockdestroyer_2678_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectexplosiveblockdestroyer_2678(parent->x + -64, parent->y + -64), parent->layer);
                objectexplosiveblockdestroyer_2678_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectexplosiveblockdestroyer_2678(parent->x + -128, parent->y + -128), parent->layer);
                objectexplosiveblockdestroyer_2678_instances.add_back();
            }
        }
        ((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->values.add(2, 1);
    }
    event_1689_45_end: ;
}
void Frames::event_func_11043()
{
    // event 1690_45
    {
        if (!(group_main_engine_1)) goto event_1690_45_end;
        if (!((((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->values.get(2)) == (2))) goto event_1690_45_end;
        ((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->values.set(1, get_min(((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->values.get(1)+3, 128));
    }
    event_1690_45_end: ;
}
void Frames::event_func_11044()
{
    // event 1691_45
    {
        if (!(group_main_engine_1)) goto event_1691_45_end;
        if (!((((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->values.get(2)) == (2))) goto event_1691_45_end;
        if (!((((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->values.get(1)) >= (128))) goto event_1691_45_end;
        objectcrystal_279_instances.empty_selection();
        // select single: false true false
        minibossrailing2_1165_instances.clear_selection();
        for (ObjectIterator p_it(minibossrailing2_1165_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + 0, parent->y + 12), parent->layer);
                objectcrystal_279_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + 0, parent->y + 36), parent->layer);
                objectcrystal_279_instances.add_back();
            }
        }
        media.play_id(SOUND_COMMON_REWARD_2_40, -1, 1);
        minibossbarrier_924_instances.clear_selection();
        for (ObjectIterator it(minibossbarrier_924_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        for (ObjectIterator it(minibossrailing2_1165_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->values.add(2, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
    }
    event_1691_45_end: ;
}
void Frames::event_func_11045()
{
    // event 1692_45
    bool or_result_1692_45 = false;
    bool or_temp_result_1692_45_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1692_45_0_end;
        enemywallpusher_2723_instances.clear_selection();
        objectexplosiveblock_2708_instances.clear_selection();
        if (!check_overlap(enemywallpusher_2723_instances, objectexplosiveblock_2708_instances)) goto or_event_1692_45_0_end;
        for (ObjectIterator it(objectexplosiveblock_2708_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!objectexplosiveblock_2708_instances.has_selection()) goto or_event_1692_45_0_end;
        or_result_1692_45 = true;
        or_temp_result_1692_45_0 = true;
    }
    or_event_1692_45_0_end: ;
    objectexplosiveblock_2708_instances.clear_saved_selection();
    enemywallpusher_2723_instances.clear_saved_selection();
    if (or_temp_result_1692_45_0) {
        objectexplosiveblock_2708_instances.save_selection();
        enemywallpusher_2723_instances.save_selection();
    }
    // event 1692_45
    bool or_temp_result_1692_45_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1692_45_1_end;
        minibosstrapdoor_2722_instances.clear_selection();
        for (ObjectIterator it(minibosstrapdoor_2722_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (32))) { it.deselect(); continue; }
        }
        if (!minibosstrapdoor_2722_instances.has_selection()) goto or_event_1692_45_1_end;
        if (!((enemywallpusher_2723_instances.size()) > (0))) goto or_event_1692_45_1_end;
        or_result_1692_45 = true;
        or_temp_result_1692_45_1 = true;
        or_event_1692_45_1_end: ;
        minibosstrapdoor_2722_instances.clear_saved_selection();
        if (or_temp_result_1692_45_1) {
            minibosstrapdoor_2722_instances.save_selection();
        }
        if (!or_result_1692_45) goto or_final_or_event_1692_45_1_end;
        objectexplosiveblock_2708_instances.empty_selection();
        enemywallpusher_2723_instances.empty_selection();
        minibosstrapdoor_2722_instances.empty_selection();
        if (or_temp_result_1692_45_0) {
            objectexplosiveblock_2708_instances.restore_selection();
        }
        if (or_temp_result_1692_45_0) {
            enemywallpusher_2723_instances.restore_selection();
        }
        if (or_temp_result_1692_45_1) {
            minibosstrapdoor_2722_instances.restore_selection();
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        FrameObject * single_instance_1692_45_0; single_instance_1692_45_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemywallpusher_2723_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1692_45_0 == NULL)
                    single_instance_1692_45_0 = new_obj;
            }
        }
        FrameObject * single_instance_1692_45_1; single_instance_1692_45_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemywallpusher_2723_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1692_45_1 == NULL)
                    single_instance_1692_45_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemywallpusher_2723_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_45();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    or_final_or_event_1692_45_1_end: ;
}
void Frames::event_func_11046()
{
    // event 1694_45
    {
        if (!(group_main_engine_1)) goto event_1694_45_end;
        enemywallpusher_2723_instances.clear_selection();
        for (ObjectIterator it(enemywallpusher_2723_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemywallpusher_2723_instances.has_selection()) goto event_1694_45_end;
        for (ObjectIterator it(enemywallpusher_2723_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1694_45_end: ;
}
void Frames::event_func_11047()
{
    // event 1724_45
    {
        if (!(group_main_engine_1)) goto event_1724_45_end;
        if (!((frame_top()) < (2400))) goto event_1724_45_end;
        if (not_always_1724_45 > loop_count) {
            not_always_1724_45 = loop_count + 2;
            goto event_1724_45_end;
        }
        not_always_1724_45 = loop_count + 2;
        mediumbubble_769_instances.clear_selection();
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1724_45_end: ;
}
void Frames::event_func_11048()
{
    // event 1725_45
    {
        if (!(group_main_engine_1)) goto event_1725_45_end;
        if (!((frame_top()) > (2400))) goto event_1725_45_end;
        mediumbubble_769_instances.clear_selection();
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1725_45_end: ;
}
void Frames::event_func_11049()
{
    // event 1758_45
    {
        if (!(group_main_engine_1)) goto event_1758_45_end;
        if (!((((Active*)get_instance(npcsyntaxeye_2609_instances))->alterables->values.get(2)) == (0))) goto event_1758_45_end;
        if (!((((Active*)get_instance(npcsyntaxeye_2609_instances))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-150))) goto event_1758_45_end;
        if (!((((Active*)get_instance(npcsyntaxeye_2609_instances))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+150))) goto event_1758_45_end;
        if (!((((Active*)get_instance(npcsyntaxeye_2609_instances))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-150))) goto event_1758_45_end;
        if (!((((Active*)get_instance(npcsyntaxeye_2609_instances))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+150))) goto event_1758_45_end;
        ((Active*)get_instance(npcsyntaxeye_2609_instances))->force_animation(7);
        ((Active*)get_instance(npcsyntaxeye_2609_instances))->set_visible(true);
        media.play_id(SOUND_SYNTAX_APPEAR_2_286, -1, 1);
        ((Active*)get_instance(npcsyntaxeye_2609_instances))->alterables->values.add(2, 1);
    }
    event_1758_45_end: ;
}
void Frames::event_func_11050()
{
    // event 1759_45
    {
        if (!(group_main_engine_1)) goto event_1759_45_end;
        if (!((((Active*)get_instance(npcsyntaxeye_2609_instances))->alterables->values.get(2)) > (0))) goto event_1759_45_end;
        if (!(((Active*)get_instance(levellift_2647_instances))->alterables->flags.is_off(6))) goto event_1759_45_end;
        if (!((((Active*)get_instance(levellift_2647_instances))->get_x()) < (((Active*)get_instance(npcsyntaxeye_2609_instances))->get_x()+300))) goto event_1759_45_end;
        if (!((((Active*)get_instance(levellift_2647_instances))->get_x()) > (((Active*)get_instance(npcsyntaxeye_2609_instances))->get_x()-300))) goto event_1759_45_end;
        ((Active*)get_instance(levellift_2647_instances))->alterables->values.add(16, 1);
        ((Active*)get_instance(levellift_2647_instances))->alterables->flags.enable(6);
    }
    event_1759_45_end: ;
}
void Frames::event_func_11051()
{
    // event 1760_45
    {
        if (!(group_main_engine_1)) goto event_1760_45_end;
        if (!((((Active*)get_instance(levellift_2647_instances))->alterables->values.get(16)) == (1))) goto event_1760_45_end;
        enemyelitemask_2511_instances.clear_selection();
        levellift_2647_instances.clear_selection();
        if (!check_overlap(enemyelitemask_2511_instances, levellift_2647_instances)) goto event_1760_45_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(6, 8);
            ((Active*)*it)->alterables->values.set(16, 1);
        }
    }
    event_1760_45_end: ;
}
void Frames::event_func_11052()
{
    // event 1761_45
    {
        if (!(group_main_engine_1)) goto event_1761_45_end;
        if (!(((Active*)get_instance(npcsyntaxeye_2609_instances))->flags & VISIBLE)) goto event_1761_45_end;
        if (!((((Active*)get_instance(npcsyntaxeye_2609_instances))->alterables->values.get(2)) < (50))) goto event_1761_45_end;
        ((Active*)get_instance(npcsyntaxeye_2609_instances))->alterables->values.add(2, 1);
    }
    event_1761_45_end: ;
}
void Frames::event_func_11053()
{
    // event 1762_45
    {
        if (!(group_main_engine_1)) goto event_1762_45_end;
        if (!((((Active*)get_instance(npcsyntaxeye_2609_instances))->alterables->values.get(2)) == (49))) goto event_1762_45_end;
        if (!((global_values->get(23)) == (1))) goto event_1762_45_end;
        if (once_condition_1762_45) goto event_1762_45_end;
        once_condition_1762_45 = true;
        ((Active*)get_instance(npcsyntaxeye_2609_instances))->alterables->values.add(2, 1);
        media.play(str_data_voices_eng_sx_sx_intrusion_ogg_197, 20-1);
    }
    event_1762_45_end: ;
}
void Frames::event_func_11054()
{
    // event 1763_45
    {
        if (!(group_main_engine_1)) goto event_1763_45_end;
        if (!((((Active*)get_instance(npcsyntaxeye_2609_instances))->alterables->values.get(2)) >= (50))) goto event_1763_45_end;
        if (((Active*)get_instance(npcsyntaxeye_2609_instances))->test_animation(7)) goto event_1763_45_end;
        ((Active*)get_instance(npcsyntaxeye_2609_instances))->set_x(get_max(((Active*)get_instance(npcsyntaxeye_2609_instances))->alterables->values.get(0)-30, get_min(((Active*)get_instance(npcsyntaxeye_2609_instances))->alterables->values.get(0)+(((Active*)get_instance(player_389_instances))->get_x()-((Active*)get_instance(npcsyntaxeye_2609_instances))->get_x())*0.25, ((Active*)get_instance(npcsyntaxeye_2609_instances))->alterables->values.get(0)+30)));
        ((Active*)get_instance(npcsyntaxeye_2609_instances))->set_y(get_max(((Active*)get_instance(npcsyntaxeye_2609_instances))->alterables->values.get(1)-30, get_min(((Active*)get_instance(npcsyntaxeye_2609_instances))->alterables->values.get(1)+(((Active*)get_instance(player_389_instances))->get_y()-((Active*)get_instance(npcsyntaxeye_2609_instances))->get_y())*0.25, ((Active*)get_instance(npcsyntaxeye_2609_instances))->alterables->values.get(1)+30)));
    }
    event_1763_45_end: ;
}
void Frames::event_func_11055()
{
    // event 1764_45
    {
        if (!(group_main_engine_1)) goto event_1764_45_end;
        if (!((((Active*)get_instance(npcsyntaxeye_2609_instances))->alterables->values.get(2)) >= (50))) goto event_1764_45_end;
        if (!(((Active*)get_instance(npcsyntaxeye_2609_instances))->is_near_border(-50))) goto event_1764_45_end;
        ((Active*)get_instance(npcsyntaxeye_2609_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(npcsyntaxeye_2609_instances))->set_visible(false);
        ((Active*)get_instance(npcsyntaxeye_2609_instances))->set_x(((Active*)get_instance(npcsyntaxeye_2609_instances))->alterables->values.get(0));
        ((Active*)get_instance(npcsyntaxeye_2609_instances))->set_y(((Active*)get_instance(npcsyntaxeye_2609_instances))->alterables->values.get(1));
    }
    event_1764_45_end: ;
}
void Frames::event_func_11056()
{
    // event 1765_45
    {
        if (!(group_main_engine_1)) goto event_1765_45_end;
        if (!((global_values->get(4)) < (2))) goto event_1765_45_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (2000))) goto event_1765_45_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (2400))) goto event_1765_45_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (2260))) goto event_1765_45_end;
        global_values->set(4, 2);
        global_values->set(5, 2120);
        global_values->set(6, 2222);
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
    event_1765_45_end: ;
}
void Frames::event_func_11057()
{
    // event 1766_45
    {
        if (!(group_main_engine_1)) goto event_1766_45_end;
        if (!((global_values->get(4)) < (3))) goto event_1766_45_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (6100))) goto event_1766_45_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (6300))) goto event_1766_45_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (2900))) goto event_1766_45_end;
        global_values->set(4, 3);
        global_values->set(5, 6144);
        global_values->set(6, 3184);
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
    event_1766_45_end: ;
}
void Frames::event_func_11058()
{
    // event 1767_45
    {
        if (!(group_main_engine_1)) goto event_1767_45_end;
        if (!((global_values->get(3)%math_helper%5) == (1))) goto event_1767_45_end;
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.sub(5, 128);
    }
    event_1767_45_end: ;
}
