#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_12095()
{
    // event 1488_54
    {
        if (!(group_main_engine_1)) goto event_1488_54_end;
        gimmickspinball_1175_instances.clear_selection();
        for (ObjectIterator it(gimmickspinball_1175_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0)+cos_deg(((Active*)*it)->alterables->values.get(3))*120);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1)+sin_deg(((Active*)*it)->alterables->values.get(3))*-120);
        }
        gimmickspinballchain_3030_instances.clear_selection();
        for (ObjectIterator it(gimmickspinballchain_3030_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(gimmickspinball_1175_instances, it.current_index, default_active_instance))->alterables->values.get(0)+cos_deg(((Active*)get_single(gimmickspinball_1175_instances, it.current_index, default_active_instance))->alterables->values.get(3))*((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)get_single(gimmickspinball_1175_instances, it.current_index, default_active_instance))->alterables->values.get(1)+sin_deg(((Active*)get_single(gimmickspinball_1175_instances, it.current_index, default_active_instance))->alterables->values.get(3))*((Active*)*it)->alterables->values.get(0)*-1);
        }
        gimmickspinballchain2_3031_instances.clear_selection();
        for (ObjectIterator it(gimmickspinballchain2_3031_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(gimmickspinball_1175_instances, it.current_index, default_active_instance))->alterables->values.get(0)+cos_deg(((Active*)get_single(gimmickspinball_1175_instances, it.current_index, default_active_instance))->alterables->values.get(3))*((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)get_single(gimmickspinball_1175_instances, it.current_index, default_active_instance))->alterables->values.get(1)+sin_deg(((Active*)get_single(gimmickspinball_1175_instances, it.current_index, default_active_instance))->alterables->values.get(3))*((Active*)*it)->alterables->values.get(0)*-1);
        }
        gimmickspinballchain3_3032_instances.clear_selection();
        for (ObjectIterator it(gimmickspinballchain3_3032_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(gimmickspinball_1175_instances, it.current_index, default_active_instance))->alterables->values.get(0)+cos_deg(((Active*)get_single(gimmickspinball_1175_instances, it.current_index, default_active_instance))->alterables->values.get(3))*((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)get_single(gimmickspinball_1175_instances, it.current_index, default_active_instance))->alterables->values.get(1)+sin_deg(((Active*)get_single(gimmickspinball_1175_instances, it.current_index, default_active_instance))->alterables->values.get(3))*((Active*)*it)->alterables->values.get(0)*-1);
        }
        gimmickspinballchain4_3033_instances.clear_selection();
        for (ObjectIterator it(gimmickspinballchain4_3033_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(gimmickspinball_1175_instances, it.current_index, default_active_instance))->alterables->values.get(0)+cos_deg(((Active*)get_single(gimmickspinball_1175_instances, it.current_index, default_active_instance))->alterables->values.get(3))*((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)get_single(gimmickspinball_1175_instances, it.current_index, default_active_instance))->alterables->values.get(1)+sin_deg(((Active*)get_single(gimmickspinball_1175_instances, it.current_index, default_active_instance))->alterables->values.get(3))*((Active*)*it)->alterables->values.get(0)*-1);
        }
        for (ObjectIterator it(gimmickspinball_1175_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, (((Active*)*it)->alterables->values.get(3)+358)%math_helper%360);
        }
    }
    event_1488_54_end: ;
}
void Frames::event_func_12096()
{
    // event 1490_54
    {
        if (!(group_main_engine_1)) goto event_1490_54_end;
        ((Active*)get_instance(gimmickbreakoutplatform_3037_instances))->set_x(((Active*)get_instance(gimmickbreakoutball_3039_instances))->get_x()+((Active*)get_instance(gimmickbreakoutball_3039_instances))->alterables->values.get(2));
        ((Active*)get_instance(gimmickbreakoutplatformmask_3038_instances))->set_x(((Active*)get_instance(gimmickbreakoutball_3039_instances))->get_x()+((Active*)get_instance(gimmickbreakoutball_3039_instances))->alterables->values.get(2));
        ((Active*)get_instance(gimmickbreakoutplatform_3037_instances))->alterables->values.set(0, ((Active*)get_instance(gimmickbreakoutball_3039_instances))->alterables->values.get(0)*(1-get_min(1, get_abs(((Active*)get_instance(gimmickbreakoutball_3039_instances))->alterables->values.get(2)))));
    }
    event_1490_54_end: ;
}
void Frames::event_func_12097()
{
    // event 1491_54
    {
        if (!(group_main_engine_1)) goto event_1491_54_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1491_54_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickbreakoutplatform_3037_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickbreakoutplatform_3037_instances)) goto event_1491_54_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(23, ((Active*)get_instance(gimmickbreakoutplatform_3037_instances))->alterables->values.get(0));
    }
    event_1491_54_end: ;
}
void Frames::event_func_12098()
{
    // event 1494_54
    {
        if (!(group_main_engine_1)) goto event_1494_54_end;
        if (!(((Active*)get_instance(gimmickbreakoutball_3039_instances))->alterables->flags.is_off(1))) goto event_1494_54_end;
        if (((Active*)get_instance(gimmickbreakoutball_3039_instances))->is_near_border(-70)) goto event_1494_54_end;
        ((Active*)get_instance(gimmickbreakoutball_3039_instances))->alterables->flags.enable(1);
    }
    event_1494_54_end: ;
}
void Frames::event_func_12099()
{
    // event 1495_54
    {
        if (!(group_main_engine_1)) goto event_1495_54_end;
        if (!(((Active*)get_instance(gimmickbreakoutball_3039_instances))->alterables->flags.is_on(1))) goto event_1495_54_end;
        if (((Active*)get_instance(gimmickbreakoutball_3039_instances))->is_near_border(-180)) goto event_1495_54_end;
        ((Active*)get_instance(gimmickbreakoutball_3039_instances))->set_x(((Active*)get_instance(gimmickbreakoutball_3039_instances))->get_x()+((Active*)get_instance(gimmickbreakoutball_3039_instances))->alterables->values.get(0));
        ((Active*)get_instance(gimmickbreakoutball_3039_instances))->set_y(((Active*)get_instance(gimmickbreakoutball_3039_instances))->get_y()+((Active*)get_instance(gimmickbreakoutball_3039_instances))->alterables->values.get(1));
    }
    event_1495_54_end: ;
}
void Frames::event_func_12100()
{
    // event 1496_54
    {
        if (!(group_main_engine_1)) goto event_1496_54_end;
        ((Active*)get_instance(gimmickbreakoutball_3039_instances))->alterables->values.set(2, 0);
        {
            {
                foreach_instance_ball = ((Active*)get_instance(gimmickbreakoutball_3039_instances));
                foreach_ball_54();
            }
        }
    }
    event_1496_54_end: ;
}
void Frames::event_func_12101()
{
    // event 1499_54
    {
        if (!(group_main_engine_1)) goto event_1499_54_end;
        ((Active*)get_instance(gimmickbreakoutball_3039_instances))->force_direction(2);
    }
    event_1499_54_end: ;
}
void Frames::event_func_12102()
{
    // event 1500_54
    {
        if (!(group_main_engine_1)) goto event_1500_54_end;
        if (!(((Active*)get_instance(gimmickbreakoutball_3039_instances))->overlaps_background())) goto event_1500_54_end;
        ((Active*)get_instance(gimmickbreakoutball_3039_instances))->alterables->values.set(1, -2);
        ((Active*)get_instance(gimmickbreakoutball_3039_instances))->force_animation(0);
        ((Active*)get_instance(gimmickbreakoutball_3039_instances))->force_animation(7);
    }
    event_1500_54_end: ;
}
void Frames::event_func_12103()
{
    // event 1501_54
    {
        if (!(group_main_engine_1)) goto event_1501_54_end;
        ((Active*)get_instance(gimmickbreakoutball_3039_instances))->force_direction(1);
    }
    event_1501_54_end: ;
}
void Frames::event_func_12104()
{
    // event 1502_54
    {
        if (!(group_main_engine_1)) goto event_1502_54_end;
        if (!(((Active*)get_instance(gimmickbreakoutball_3039_instances))->overlaps_background())) goto event_1502_54_end;
        ((Active*)get_instance(gimmickbreakoutball_3039_instances))->alterables->values.set(1, 2);
        ((Active*)get_instance(gimmickbreakoutball_3039_instances))->force_animation(0);
        ((Active*)get_instance(gimmickbreakoutball_3039_instances))->force_animation(7);
    }
    event_1502_54_end: ;
}
void Frames::event_func_12105()
{
    // event 1503_54
    {
        if (!(group_main_engine_1)) goto event_1503_54_end;
        ((Active*)get_instance(gimmickbreakoutball_3039_instances))->force_direction(0);
        effectrebound_3003_instances.clear_selection();
        for (ObjectIterator it(effectrebound_3003_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(((Active*)*it)->alterables->values.get(0));
        }
        effectrebound2_3004_instances.clear_selection();
        for (ObjectIterator it(effectrebound2_3004_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(((Active*)*it)->alterables->values.get(0));
        }
        for (ObjectIterator it(effectrebound_3003_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 4);
        }
        for (ObjectIterator it(effectrebound2_3004_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 4);
        }
    }
    event_1503_54_end: ;
}
void Frames::event_func_12106()
{
    // event 1504_54
    {
        if (!(group_main_engine_1)) goto event_1504_54_end;
        if (!((((Active*)get_instance(gimmickbreakoutball_3039_instances))->alterables->values.get(1)) > (0))) goto event_1504_54_end;
        gimmickbreakoutball_3039_instances.clear_selection();
        gimmickbreakoutplatform_3037_instances.clear_selection();
        if (!check_overlap(gimmickbreakoutball_3039_instances, gimmickbreakoutplatform_3037_instances)) goto event_1504_54_end;
        ((Active*)get_instance(gimmickbreakoutball_3039_instances))->alterables->values.set(1, -2);
        ((Active*)get_instance(gimmickbreakoutplatform_3037_instances))->force_animation(0);
        ((Active*)get_instance(gimmickbreakoutplatform_3037_instances))->force_animation(7);
        ((Active*)get_instance(gimmickbreakoutball_3039_instances))->force_animation(0);
        ((Active*)get_instance(gimmickbreakoutball_3039_instances))->force_animation(7);
    }
    event_1504_54_end: ;
}
void Frames::event_func_12107()
{
    // event 1511_54
    {
        if (!(group_main_engine_1)) goto event_1511_54_end;
        hazardgiantsword_3043_instances.clear_selection();
        for (ObjectIterator it(hazardgiantsword_3043_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-300))) { it.deselect(); continue; }
        }
        if (!hazardgiantsword_3043_instances.has_selection()) goto event_1511_54_end;
        for (ObjectIterator it(hazardgiantsword_3043_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
        media.play_id(SOUND_SHIMMERFAST_150, -1, 1);
    }
    event_1511_54_end: ;
}
void Frames::event_func_12108()
{
    // event 1512_54
    {
        if (!(group_main_engine_1)) goto event_1512_54_end;
        hazardgiantsword_3043_instances.clear_selection();
        for (ObjectIterator it(hazardgiantsword_3043_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!hazardgiantsword_3043_instances.has_selection()) goto event_1512_54_end;
        for (ObjectIterator it(hazardgiantsword_3043_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1512_54_end: ;
}
void Frames::event_func_12109()
{
    // event 1513_54
    {
        if (!(group_main_engine_1)) goto event_1513_54_end;
        hazardgiantsword_3043_instances.clear_selection();
        for (ObjectIterator it(hazardgiantsword_3043_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (20))) { it.deselect(); continue; }
        }
        if (!hazardgiantsword_3043_instances.has_selection()) goto event_1513_54_end;
        for (ObjectIterator it(hazardgiantsword_3043_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 2);
            ((Active*)*it)->alterables->values.set(4, 10);
        }
    }
    event_1513_54_end: ;
}
void Frames::event_func_12110()
{
    // event 1514_54
    {
        if (!(group_main_engine_1)) goto event_1514_54_end;
        hazardgiantsword_3043_instances.clear_selection();
        for (ObjectIterator it(hazardgiantsword_3043_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!hazardgiantsword_3043_instances.has_selection()) goto event_1514_54_end;
        for (ObjectIterator it(hazardgiantsword_3043_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->alterables->values.set(1, 15);
        }
    }
    event_1514_54_end: ;
}
void Frames::event_func_12111()
{
    // event 1516_54
    {
        if (!(group_main_engine_1)) goto event_1516_54_end;
        hazardgiantsword_3043_instances.clear_selection();
        for (ObjectIterator it(hazardgiantsword_3043_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!hazardgiantsword_3043_instances.has_selection()) goto event_1516_54_end;
        for (ObjectIterator it(hazardgiantsword_3043_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 3);
        }
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
        for (ObjectIterator it(hazardgiantsword_3043_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1516_54_end: ;
}
void Frames::event_func_12112()
{
    // event 1517_54
    {
        if (!(group_main_engine_1)) goto event_1517_54_end;
        hazardgiantswordmask_3041_instances.clear_selection();
        for (ObjectIterator it(hazardgiantswordmask_3041_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(hazardgiantsword_3043_instances, it.current_index));
            if (parent == NULL) goto pos_end_1517_54_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1517_54_0: ;
        }
        for (ObjectIterator it(hazardgiantswordmask_3041_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(hazardgiantsword_3043_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
    }
    event_1517_54_end: ;
}
void Frames::event_func_12113()
{
    // event 1518_54
    {
        if (!(group_main_engine_1)) goto event_1518_54_end;
        hazardgiantswordmask_3041_instances.clear_selection();
        for (ObjectIterator it(hazardgiantswordmask_3041_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (1))) { it.deselect(); continue; }
        }
        if (!hazardgiantswordmask_3041_instances.has_selection()) goto event_1518_54_end;
        for (ObjectIterator it(hazardgiantswordmask_3041_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1518_54_end: ;
}
void Frames::event_func_12114()
{
    // event 1519_54
    {
        if (!(group_main_engine_1)) goto event_1519_54_end;
        hazardgiantswordmask_3041_instances.clear_selection();
        for (ObjectIterator it(hazardgiantswordmask_3041_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!hazardgiantswordmask_3041_instances.has_selection()) goto event_1519_54_end;
        for (ObjectIterator it(hazardgiantswordmask_3041_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1519_54_end: ;
}
void Frames::event_func_12115()
{
    // event 1719_54
    {
        if (!(group_main_engine_1)) goto event_1719_54_end;
        if (!((global_values->get(4)) < (2))) goto event_1719_54_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (5750))) goto event_1719_54_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (6000))) goto event_1719_54_end;
        global_values->set(4, 2);
        global_values->set(5, 5864);
        global_values->set(6, 1588);
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
    event_1719_54_end: ;
}
void Frames::event_func_12116()
{
    // event 1720_54
    {
        if (!(group_main_engine_1)) goto event_1720_54_end;
        if (!((global_values->get(4)) < (3))) goto event_1720_54_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (7900))) goto event_1720_54_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (8000))) goto event_1720_54_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (600))) goto event_1720_54_end;
        global_values->set(4, 3);
        global_values->set(5, 7980);
        global_values->set(6, 370);
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
    event_1720_54_end: ;
}
void Frames::event_func_12117()
{
    // event 1945_54
    {
        if (!(group_pause_1)) goto event_1945_54_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_1945_54_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_1945_54_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1945_54_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1945_54_end;
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
        enemysleepgas_2889_instances.clear_selection();
        for (ObjectIterator it(enemysleepgas_2889_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(objectcyclonetop_2963_instances))->stop_animation();
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        effectterreonwarning_2986_instances.clear_selection();
        for (ObjectIterator it(effectterreonwarning_2986_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyobelisklaser_3002_instances.clear_selection();
        for (ObjectIterator it(enemyobelisklaser_3002_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemywallstingerback_3009_instances.clear_selection();
        for (ObjectIterator it(enemywallstingerback_3009_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objecttimegatepiece_2966_instances.clear_selection();
        for (ObjectIterator it(objecttimegatepiece_2966_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyterreondebris_2972_instances.clear_selection();
        for (ObjectIterator it(enemyterreondebris_2972_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyterreonrightshoulder_2982_instances.clear_selection();
        for (ObjectIterator it(enemyterreonrightshoulder_2982_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyterreonleftshoulder_2981_instances.clear_selection();
        for (ObjectIterator it(enemyterreonleftshoulder_2981_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(enemyterreonrightleg_2984_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(enemyterreonleftleg_2983_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsconfetti_2890_instances.clear_selection();
        for (ObjectIterator it(effectsconfetti_2890_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
    }
    event_1945_54_end: ;
}
void Frames::event_func_12118()
{
    // event 1946_54
    bool or_result_1946_54 = false;
    bool or_temp_result_1946_54_0 = false;
    {
        if (!(group_pause_1)) goto or_event_1946_54_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_1946_54_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1946_54_0_end;
        or_result_1946_54 = true;
        or_temp_result_1946_54_0 = true;
    }
    or_event_1946_54_0_end: ;
    // event 1946_54
    bool or_temp_result_1946_54_1 = false;
    {
        if (!(group_pause_1)) goto or_event_1946_54_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_1946_54_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1946_54_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_1946_54_1_end;
        or_result_1946_54 = true;
        or_temp_result_1946_54_1 = true;
        or_event_1946_54_1_end: ;
        if (!or_result_1946_54) goto or_final_or_event_1946_54_1_end;
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
        enemysleepgas_2889_instances.clear_selection();
        for (ObjectIterator it(enemysleepgas_2889_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(objectcyclonetop_2963_instances))->start_animation();
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        effectterreonwarning_2986_instances.clear_selection();
        for (ObjectIterator it(effectterreonwarning_2986_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyobelisklaser_3002_instances.clear_selection();
        for (ObjectIterator it(enemyobelisklaser_3002_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemywallstingerback_3009_instances.clear_selection();
        for (ObjectIterator it(enemywallstingerback_3009_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objecttimegatepiece_2966_instances.clear_selection();
        for (ObjectIterator it(objecttimegatepiece_2966_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyterreondebris_2972_instances.clear_selection();
        for (ObjectIterator it(enemyterreondebris_2972_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyterreonrightshoulder_2982_instances.clear_selection();
        for (ObjectIterator it(enemyterreonrightshoulder_2982_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyterreonleftshoulder_2981_instances.clear_selection();
        for (ObjectIterator it(enemyterreonleftshoulder_2981_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(enemyterreonrightleg_2984_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(enemyterreonleftleg_2983_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsconfetti_2890_instances.clear_selection();
        for (ObjectIterator it(effectsconfetti_2890_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_1946_54_1_end: ;
}
void Frames::handle_frame_55_events()
{
    test_collisions_54();
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
    event_func_12051();
    event_func_2650();
    if (!group_main_engine_1) goto group_main_engine_1_end;
    event_func_11864();
    event_func_11865();
    event_func_11866();
    event_func_11867();
    event_func_11868();
    event_func_11869();
    event_func_11870();
    event_func_11871();
    event_func_11872();
    event_func_11873();
    event_func_11874();
    event_func_11875();
    event_func_11876();
    event_func_11877();
    event_func_11878();
    event_func_11879();
    event_func_11880();
    event_func_11881();
    event_func_11882();
    event_func_11883();
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
    event_func_11756();
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
    event_func_11757();
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
    event_func_11758();
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
    event_func_4355();
    event_func_4356();
    if (!group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1) goto group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end;
    event_func_3737();
    event_func_3738();
    event_func_3739();
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end: ;
    event_func_12086();
    event_func_12087();
    event_func_12088();
    event_func_12089();
    event_func_11763();
    event_func_12090();
    event_func_12091();
    event_func_12092();
    event_func_11767();
    event_func_12093();
    event_func_12094();
    event_func_2981();
    event_func_2982();
    event_func_2983();
    event_func_2984();
    event_func_2985();
    event_func_2986();
    event_func_2987();
    event_func_11770();
    event_func_11771();
    event_func_11772();
    event_func_11773();
    event_func_11774();
    event_func_11775();
    event_func_11776();
    event_func_11777();
    event_func_11884();
    event_func_11885();
    event_func_11886();
    event_func_11887();
    event_func_11888();
    event_func_11889();
    event_func_11890();
    event_func_11891();
    event_func_12009();
    event_func_12010();
    event_func_12011();
    event_func_12012();
    event_func_12013();
    event_func_12014();
    event_func_12015();
    event_func_12016();
    event_func_12095();
    event_func_12018();
    event_func_12096();
    event_func_12097();
    event_func_12021();
    event_func_12022();
    event_func_12098();
    event_func_12099();
    event_func_12100();
    event_func_12101();
    event_func_12102();
    event_func_12103();
    event_func_12104();
    event_func_12105();
    event_func_12106();
    event_func_12032();
    event_func_12033();
    event_func_12107();
    event_func_12108();
    event_func_12109();
    event_func_12110();
    event_func_12111();
    event_func_12112();
    event_func_12113();
    event_func_12114();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_11782();
    event_func_11783();
    event_func_11784();
    event_func_11785();
    event_func_11786();
    event_func_11787();
    event_func_11788();
    event_func_11789();
    event_func_11790();
    event_func_11791();
    event_func_11792();
    event_func_11793();
    event_func_11794();
    event_func_11795();
    event_func_11796();
    event_func_11797();
    event_func_11798();
    event_func_11799();
    event_func_11800();
    event_func_11801();
    event_func_11802();
    event_func_11803();
    event_func_11804();
    event_func_11805();
    event_func_11806();
    event_func_11807();
    event_func_11808();
    event_func_11809();
    event_func_11810();
    event_func_12034();
    event_func_11812();
    event_func_11813();
    event_func_11814();
    event_func_11815();
    event_func_12035();
    event_func_12036();
    event_func_12037();
    event_func_12038();
    event_func_12039();
    event_func_12040();
    event_func_12041();
    event_func_12042();
    event_func_12043();
    event_func_4594();
    event_func_4595();
    event_func_4596();
    event_func_4597();
    event_func_4598();
    event_func_4599();
    event_func_4600();
    event_func_4601();
    event_func_4602();
    event_func_4603();
    event_func_4604();
    event_func_4605();
    event_func_4606();
    event_func_4607();
    event_func_4608();
    event_func_4609();
    event_func_4610();
    event_func_4611();
    event_func_4612();
    event_func_4613();
    event_func_4614();
    event_func_4615();
    event_func_4616();
    event_func_4617();
    event_func_4618();
    event_func_4619();
    event_func_4620();
    event_func_4621();
    event_func_4622();
    event_func_11816();
    event_func_11817();
    event_func_11818();
    event_func_11819();
    event_func_11820();
    event_func_11821();
    event_func_11822();
    event_func_11823();
    event_func_11824();
    event_func_11825();
    event_func_11826();
    event_func_11827();
    event_func_11828();
    event_func_11829();
    event_func_11830();
    event_func_11831();
    event_func_11832();
    event_func_11833();
    event_func_11834();
    event_func_11835();
    event_func_11892();
    event_func_11893();
    event_func_11894();
    event_func_11895();
    event_func_11896();
    event_func_11897();
    event_func_11898();
    event_func_11899();
    event_func_11900();
    event_func_11901();
    event_func_11902();
    event_func_11903();
    event_func_11904();
    event_func_11905();
    event_func_11906();
    event_func_11907();
    event_func_11908();
    event_func_11909();
    event_func_11910();
    event_func_11911();
    event_func_11912();
    event_func_11913();
    event_func_11914();
    event_func_11915();
    event_func_11916();
    event_func_11917();
    event_func_11918();
    event_func_11919();
    event_func_11920();
    event_func_11921();
    event_func_11922();
    event_func_11923();
    event_func_11924();
    event_func_11925();
    event_func_11926();
    event_func_11927();
    event_func_11928();
    event_func_11929();
    event_func_11930();
    event_func_11931();
    event_func_11932();
    event_func_11933();
    event_func_11934();
    event_func_11935();
    event_func_11936();
    event_func_11937();
    event_func_11938();
    event_func_11939();
    event_func_11940();
    event_func_12044();
    event_func_12045();
    event_func_12046();
    event_func_12047();
    event_func_12048();
    event_func_12049();
    event_func_12050();
    event_func_12052();
    event_func_12053();
    event_func_12054();
    event_func_12055();
    event_func_12056();
    event_func_12057();
    event_func_12058();
    event_func_12059();
    event_func_3808();
    event_func_2996();
    event_func_2997();
    event_func_2998();
    event_func_3286();
    event_func_3867();
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) goto group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end;
    event_func_4173();
    event_func_4059();
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end: ;
    event_func_12115();
    event_func_12116();
    event_func_12062();
    event_func_12063();
    event_func_12064();
    event_func_12065();
    event_func_12066();
    event_func_12067();
    event_func_12068();
    event_func_12069();
    event_func_12070();
    event_func_12071();
    event_func_12072();
    event_func_12073();
    event_func_12074();
    event_func_12075();
    event_func_12076();
    event_func_11837();
    event_func_11838();
    event_func_11839();
    event_func_12077();
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
    event_func_12117();
    event_func_12118();
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
void Frames::handle_frame_55_pre_events()
{
}
void Frames::event_func_12119()
{
    // event 27_54
    {
        if (!(group_main_engine_1)) goto event_27_54_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 2000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 88);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 36);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
    }
    event_27_54_end: ;
}
void Frames::event_func_12120()
{
    // event 1432_54
    {
        if (!(group_main_engine_1)) goto event_1432_54_end;
        ((Active*)get_instance(objectcyclonetop_2963_instances))->alterables->values.set(5, ((Active*)get_instance(objectcyclonetop_2963_instances))->get_x());
        ((Active*)get_instance(objectcyclonetop_2963_instances))->alterables->values.set(6, ((Active*)get_instance(objectcyclonetop_2963_instances))->get_y());
    }
    event_1432_54_end: ;
}
void Frames::event_func_12121()
{
    // event 1478_54
    {
        if (!(group_main_engine_1)) goto event_1478_54_end;
        objectvanishingblock_3034_instances.clear_selection();
        for (ObjectIterator it(objectvanishingblock_3034_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
        spread_value(objectvanishingblock_3034_instances, 0, 0);
        for (ObjectIterator it(objectvanishingblock_3034_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)*6)%math_helper%210);
            ((Active*)*it)->move_back();
        }
    }
    event_1478_54_end: ;
}
void Frames::event_func_12122()
{
    // event 1487_54
    {
        if (!(group_main_engine_1)) goto event_1487_54_end;
        gimmickspinball_1175_instances.clear_selection();
        for (ObjectIterator it(gimmickspinball_1175_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
        }
    }
    event_1487_54_end: ;
}
void Frames::event_func_12123()
{
    // event 1510_54
    {
        if (!(group_main_engine_1)) goto event_1510_54_end;
        hazardgiantsword_3043_instances.clear_selection();
        for (ObjectIterator it(hazardgiantsword_3043_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
    }
    event_1510_54_end: ;
}
void Frames::on_frame_55_start_events()
{
    event_func_11842();
    event_func_11944();
    event_func_4133();
    event_func_12119();
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
    event_func_12081();
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
    event_func_12120();
    event_func_9635();
    event_func_3275();
    event_func_11846();
    event_func_12121();
    event_func_12122();
    event_func_12123();
    event_func_11848();
    event_func_11849();
    event_func_12083();
    event_func_11850();
    event_func_11947();
    event_func_12084();
    event_func_2686();
    event_func_2687();
    event_func_3277();
    event_func_2690();
    event_func_2691();
    event_func_11948();
    event_func_4145();
    event_func_5573();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_55_init()
{
    index = 54;
    width = 11376;
    height = 2144;
    virtual_width = 11376;
    virtual_height = 2144;
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
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &gimmickbridgelog_412_instances, &gimmickbowarrowplatform_2970_instances, &gimmickbreakoutplatform_3037_instances, NULL};
    qualifier_8.set(12, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesup_558_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &gimmickbridgelog_412_instances, &gimmickbowarrowplatform_2970_instances, &gimmickbreakoutplatform_3037_instances, NULL};
    qualifier_9.set(35, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemycacteon_990_instances, &enemystinger_2891_instances, &enemysunflora_2960_instances, &enemystingernest_2961_instances, &enemyterreonleftleg_2983_instances, &enemyterreonrightleg_2984_instances, &enemyterreon_2985_instances, &enemywallstinger_3006_instances, &enemyobelisk_3035_instances, &hazardgiantsword_3043_instances, NULL};
    qualifier_20.set(10, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece0_465_instances, &levelparallaxpiece1_466_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece3_468_instances, NULL};
    qualifier_0.set(4, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesup_558_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &breakableplrock_2987_instances, &objectvanishingblock_3034_instances, NULL};
    qualifier_7.set(28, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &enemycacteon_990_instances, &objecttimegatepiece_2966_instances, NULL};
    qualifier_4.set(36, &qualifier_4_instances[0]);
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
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, NULL};
    qualifier_12.set(2, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, NULL};
    qualifier_13.set(1, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0_2998(0, 0), 0);
    add_background_object(create_levelparallaxpiece1_2999(0, 0), 0);
    add_background_object(create_levelparallaxpiece2_3000(0, 88), 0);
    add_background_object(create_levelparallaxpiece3_3001(0, 0), 0);
    add_background_object(create_quickbackdrop_3007(0, 1384), 1);
    add_background_object(create_quickbackdrop2_3008(0, 1200), 1);
    add_object(create_enemywallstingerback_3009(116, 1452), 1);
    add_object(create_enemywallstingerback_3009(204, 1404), 1);
    add_object(create_enemywallstingerback_3009(164, 1484), 1);
    add_object(create_enemywallstingerback_3009(220, 1460), 1);
    add_object(create_enemywallstingerback_3009(260, 1516), 1);
    add_object(create_enemywallstingerback_3009(300, 1476), 1);
    add_object(create_enemywallstingerback_3009(268, 1420), 1);
    add_object(create_enemywallstingerback_3009(324, 1396), 1);
    add_object(create_enemywallstingerback_3009(356, 1444), 1);
    add_object(create_enemywallstingerback_3009(364, 1508), 1);
    add_object(create_enemywallstingerback_3009(404, 1476), 1);
    add_object(create_enemywallstingerback_3009(420, 1412), 1);
    add_object(create_enemywallstingerback_3009(468, 1460), 1);
    add_object(create_enemywallstingerback_3009(76, 1468), 1);
    add_object(create_enemywallstingerback_3009(164, 1420), 1);
    add_object(create_enemywallstingerback_3009(124, 1500), 1);
    add_object(create_enemywallstingerback_3009(180, 1476), 1);
    add_object(create_enemywallstingerback_3009(220, 1532), 1);
    add_object(create_enemywallstingerback_3009(260, 1492), 1);
    add_object(create_enemywallstingerback_3009(228, 1436), 1);
    add_object(create_enemywallstingerback_3009(284, 1412), 1);
    add_object(create_enemywallstingerback_3009(316, 1460), 1);
    add_object(create_enemywallstingerback_3009(324, 1524), 1);
    add_object(create_enemywallstingerback_3009(364, 1492), 1);
    add_object(create_enemywallstingerback_3009(380, 1428), 1);
    add_object(create_enemywallstingerback_3009(428, 1476), 1);
    add_object(create_enemywallstingerback_3009(148, 1484), 1);
    add_object(create_enemywallstingerback_3009(236, 1436), 1);
    add_object(create_enemywallstingerback_3009(196, 1516), 1);
    add_object(create_enemywallstingerback_3009(252, 1492), 1);
    add_object(create_enemywallstingerback_3009(292, 1548), 1);
    add_object(create_enemywallstingerback_3009(332, 1508), 1);
    add_object(create_enemywallstingerback_3009(300, 1452), 1);
    add_object(create_enemywallstingerback_3009(356, 1428), 1);
    add_object(create_enemywallstingerback_3009(388, 1476), 1);
    add_object(create_enemywallstingerback_3009(396, 1540), 1);
    add_object(create_enemywallstingerback_3009(436, 1508), 1);
    add_object(create_enemywallstingerback_3009(452, 1444), 1);
    add_object(create_enemywallstingerback_3009(500, 1668), 1);
    add_object(create_enemywallstingerback_3009(196, 1452), 1);
    add_object(create_enemywallstingerback_3009(156, 1532), 1);
    add_object(create_enemywallstingerback_3009(212, 1508), 1);
    add_object(create_enemywallstingerback_3009(252, 1564), 1);
    add_object(create_enemywallstingerback_3009(292, 1524), 1);
    add_object(create_enemywallstingerback_3009(260, 1468), 1);
    add_object(create_enemywallstingerback_3009(316, 1444), 1);
    add_object(create_enemywallstingerback_3009(348, 1492), 1);
    add_object(create_enemywallstingerback_3009(356, 1556), 1);
    add_object(create_enemywallstingerback_3009(396, 1524), 1);
    add_object(create_enemywallstingerback_3009(412, 1460), 1);
    add_object(create_enemywallstingerback_3009(460, 1508), 1);
    add_object(create_wallstingerlimittop_3010(-116, 1375), 1);
    add_object(create_wallstingerlimitbottom_3011(-116, 1656), 1);
    add_object(create_enemywallstingerback_3009(68, 1540), 1);
    add_object(create_enemywallstingerback_3009(156, 1492), 1);
    add_object(create_enemywallstingerback_3009(116, 1572), 1);
    add_object(create_enemywallstingerback_3009(172, 1548), 1);
    add_object(create_enemywallstingerback_3009(212, 1604), 1);
    add_object(create_enemywallstingerback_3009(252, 1564), 1);
    add_object(create_enemywallstingerback_3009(220, 1508), 1);
    add_object(create_enemywallstingerback_3009(276, 1484), 1);
    add_object(create_enemywallstingerback_3009(308, 1532), 1);
    add_object(create_enemywallstingerback_3009(316, 1596), 1);
    add_object(create_enemywallstingerback_3009(356, 1564), 1);
    add_object(create_enemywallstingerback_3009(372, 1500), 1);
    add_object(create_enemywallstingerback_3009(420, 1548), 1);
    add_object(create_enemywallstingerback_3009(28, 1556), 1);
    add_object(create_enemywallstingerback_3009(116, 1508), 1);
    add_object(create_enemywallstingerback_3009(76, 1588), 1);
    add_object(create_enemywallstingerback_3009(132, 1564), 1);
    add_object(create_enemywallstingerback_3009(172, 1620), 1);
    add_object(create_enemywallstingerback_3009(212, 1580), 1);
    add_object(create_enemywallstingerback_3009(180, 1524), 1);
    add_object(create_enemywallstingerback_3009(236, 1500), 1);
    add_object(create_enemywallstingerback_3009(268, 1548), 1);
    add_object(create_enemywallstingerback_3009(276, 1612), 1);
    add_object(create_enemywallstingerback_3009(316, 1580), 1);
    add_object(create_enemywallstingerback_3009(332, 1516), 1);
    add_object(create_enemywallstingerback_3009(380, 1564), 1);
    add_object(create_enemywallstingerback_3009(100, 1572), 1);
    add_object(create_enemywallstingerback_3009(108, 1540), 1);
    add_object(create_enemywallstingerback_3009(148, 1604), 1);
    add_object(create_enemywallstingerback_3009(180, 1580), 1);
    add_object(create_enemywallstingerback_3009(244, 1636), 1);
    add_object(create_enemywallstingerback_3009(284, 1596), 1);
    add_object(create_enemywallstingerback_3009(252, 1540), 1);
    add_object(create_enemywallstingerback_3009(68, 1508), 1);
    add_object(create_enemywallstingerback_3009(340, 1564), 1);
    add_object(create_enemywallstingerback_3009(348, 1628), 1);
    add_object(create_enemywallstingerback_3009(388, 1596), 1);
    add_object(create_enemywallstingerback_3009(468, 1540), 1);
    add_object(create_enemywallstingerback_3009(452, 1580), 1);
    add_object(create_enemywallstingerback_3009(148, 1540), 1);
    add_object(create_enemywallstingerback_3009(108, 1620), 1);
    add_object(create_enemywallstingerback_3009(164, 1596), 1);
    add_object(create_enemywallstingerback_3009(28, 1500), 1);
    add_object(create_enemywallstingerback_3009(244, 1612), 1);
    add_object(create_enemywallstingerback_3009(212, 1556), 1);
    add_object(create_enemywallstingerback_3009(268, 1532), 1);
    add_object(create_enemywallstingerback_3009(300, 1580), 1);
    add_object(create_enemywallstingerback_3009(44, 1436), 1);
    add_object(create_enemywallstingerback_3009(348, 1612), 1);
    add_object(create_enemywallstingerback_3009(364, 1540), 1);
    add_object(create_enemywallstingerback_3009(412, 1596), 1);
    add_background_object(create_plcaveback1_3014(5344, 1448), 2);
    add_background_object(create_plcaveback1_3014(5280, 1608), 2);
    add_background_object(create_plcaveback1_3014(4352, 1720), 2);
    add_background_object(create_plindoorruins1_3012(4208, 1376), 2);
    add_background_object(create_plindoorruins1_3012(4208, 1504), 2);
    add_background_object(create_plindoorruins1_3012(4080, 1184), 2);
    add_background_object(create_plindoorruins1_3012(4080, 1312), 2);
    add_background_object(create_plindoorruins1_3012(2792, 1152), 2);
    add_background_object(create_plindoorruins1_3012(1080, 1152), 2);
    add_background_object(create_plindoorruins1_3012(784, 512), 2);
    add_background_object(create_plindoorruins1_3012(784, 640), 2);
    add_background_object(create_plindoorruins1_3012(784, 768), 2);
    add_background_object(create_plindoorruins1_3012(784, 1024), 2);
    add_background_object(create_plindoorruins1_3012(784, 1152), 2);
    add_background_object(create_plindoorruins1_3012(3440, 608), 2);
    add_background_object(create_plindoorruins1_3012(3440, 736), 2);
    add_background_object(create_plindoorruins1_3012(3440, 864), 2);
    add_background_object(create_plindoorruins1_3012(3440, 1120), 2);
    add_background_object(create_plindoorruins1_3012(3440, 1248), 2);
    add_background_object(create_plindoorruins3_3016(208, 1232), 2);
    add_background_object(create_plindoorruins3_3016(280, 1184), 2);
    add_background_object(create_plindoorruins3_3016(488, 1232), 2);
    add_background_object(create_plindoorruins3_3016(696, 1192), 2);
    add_background_object(create_plindoorruins3_3016(840, 1192), 2);
    add_background_object(create_plindoorruins3_3016(1128, 1224), 2);
    add_background_object(create_plindoorruins2_3015(1080, 1088), 2);
    add_background_object(create_plindoorruins1_3012(1320, 896), 2);
    add_background_object(create_plindoorruins2_3015(1320, 832), 2);
    add_background_object(create_plindoorruins1_3012(600, 1184), 2);
    add_background_object(create_plindoorruins2_3015(600, 1120), 2);
    add_background_object(create_plindoorruins1_3012(1696, 1152), 2);
    add_background_object(create_plindoorruins2_3015(1696, 1088), 2);
    add_background_object(create_plindoorruins1_3012(1936, 1216), 2);
    add_background_object(create_plindoorruins2_3015(1936, 1152), 2);
    add_background_object(create_plindoorruins3_3016(1624, 1168), 2);
    add_background_object(create_plindoorruins3_3016(1552, 1216), 2);
    add_background_object(create_plindoorruins3_3016(2312, 1224), 2);
    add_background_object(create_plindoorruins3_3016(2400, 1152), 2);
    add_background_object(create_plindoorruins3_3016(2720, 1208), 2);
    add_background_object(create_plindoorruins2_3015(2792, 1088), 2);
    add_background_object(create_plindoorruins1_3012(3032, 1216), 2);
    add_background_object(create_plindoorruins2_3015(3032, 1152), 2);
    add_background_object(create_plindoorruins1_3012(2176, 416), 2);
    add_background_object(create_plindoorruins1_3012(2176, 288), 2);
    add_background_object(create_plindoorruins1_3012(2176, 160), 2);
    add_background_object(create_plindoorruins1_3012(784, 384), 2);
    add_background_object(create_plindoorruins1_3012(784, 256), 2);
    add_background_object(create_plindoorruins1_3012(784, 128), 2);
    add_background_object(create_plindoorruins1_3012(784, 0), 2);
    add_background_object(create_plcaveback1_3014(-160, 656), 2);
    add_background_object(create_plcaveback2_3013(3392, 416), 2);
    add_background_object(create_plcaveback2_3013(3328, 256), 2);
    add_background_object(create_plcaveback2_3013(3264, 96), 2);
    add_background_object(create_plindoorruins1_3012(3840, 640), 2);
    add_background_object(create_plindoorruins1_3012(3840, 768), 2);
    add_background_object(create_plindoorruins1_3012(4736, 832), 2);
    add_background_object(create_plindoorruins1_3012(4736, 960), 2);
    add_background_object(create_plindoorruins1_3012(5312, 1344), 2);
    add_background_object(create_plindoorruins1_3012(5120, 1120), 2);
    add_background_object(create_plindoorruins1_3012(5120, 1248), 2);
    add_background_object(create_plindoorruins1_3012(5120, 1376), 2);
    add_background_object(create_plindoorruins1_3012(5504, 1376), 2);
    add_background_object(create_plindoorruins1_3012(3440, 992), 2);
    add_background_object(create_plindoorruins1_3012(784, 896), 2);
    add_background_object(create_plindoorruins1_3012(3208, 800), 2);
    add_background_object(create_plindoorruins2_3015(3208, 736), 2);
    add_background_object(create_plindoorruins1_3012(3208, 928), 2);
    add_background_object(create_plindoorruins1_3012(3208, 1056), 2);
    add_background_object(create_plindoorruins1_3012(3208, 1184), 2);
    add_background_object(create_plindoorruins1_3012(2576, 768), 2);
    add_background_object(create_plindoorruins2_3015(2576, 704), 2);
    add_background_object(create_plindoorruins1_3012(2576, 896), 2);
    add_background_object(create_plindoorruins1_3012(2576, 1024), 2);
    add_background_object(create_plindoorruins1_3012(2576, 1152), 2);
    add_background_object(create_plindoorruins1_3012(1320, 1024), 2);
    add_background_object(create_plindoorruins1_3012(1320, 1152), 2);
    add_background_object(create_plcaveback1_3014(4136, 928), 2);
    add_background_object(create_plcaveback1_3014(4200, 768), 2);
    add_background_object(create_plcaveback1_3014(4264, 608), 2);
    add_background_object(create_plcaveback1_3014(4776, 1136), 2);
    add_background_object(create_plcaveback1_3014(4840, 976), 2);
    add_background_object(create_plcaveback1_3014(4904, 816), 2);
    add_background_object(create_plcaveback1_3014(4968, 656), 2);
    add_background_object(create_plindoorruins1_3012(7808, 1440), 2);
    add_background_object(create_plindoorruins1_3012(7808, 1312), 2);
    add_background_object(create_plindoorruins1_3012(7808, 1184), 2);
    add_background_object(create_plindoorruins1_3012(7808, 1056), 2);
    add_background_object(create_plindoorruins1_3012(7808, 928), 2);
    add_background_object(create_plindoorruins1_3012(7808, 800), 2);
    add_background_object(create_plsignup_2916(7832, 1408), 2);
    add_background_object(create_plindoorruins1_3012(7648, 1216), 2);
    add_background_object(create_plindoorruins1_3012(7648, 1344), 2);
    add_background_object(create_plindoorruins1_3012(7648, 1472), 2);
    add_background_object(create_plsignup_2916(7672, 1408), 2);
    add_background_object(create_plindoorruins1_3012(6800, 1536), 2);
    add_background_object(create_plindoorruins1_3012(6800, 1664), 2);
    add_background_object(create_plindoorruins1_3012(6480, 1664), 2);
    add_background_object(create_plindoorruins1_3012(6480, 1216), 2);
    add_background_object(create_plindoorruins1_3012(6480, 1536), 2);
    add_background_object(create_plindoorruins1_3012(5728, 1488), 2);
    add_background_object(create_plindoorruins3_3016(7296, 1648), 2);
    add_background_object(create_plindoorruins3_3016(7208, 1688), 2);
    add_background_object(create_plindoorruins3_3016(7368, 1688), 2);
    add_background_object(create_plcaveback1_3014(7312, 960), 2);
    add_background_object(create_plcaveback1_3014(7376, 800), 2);
    add_background_object(create_plcaveback1_3014(7440, 640), 2);
    add_background_object(create_plcaveback1_3014(7504, 480), 2);
    add_background_object(create_plcaveback2_3013(7504, 320), 2);
    add_background_object(create_plcaveback2_3013(7440, 160), 2);
    add_background_object(create_plindoorruins1_3012(32, 192), 2);
    add_background_object(create_plindoorruins2_3015(32, 128), 2);
    add_background_object(create_plindoorruins1_3012(8832, 256), 2);
    add_background_object(create_plindoorruins1_3012(8832, 384), 2);
    add_background_object(create_plindoorruins1_3012(8544, 544), 2);
    add_background_object(create_plindoorruins1_3012(8832, 608), 2);
    add_background_object(create_plindoorruins1_3012(8704, 384), 2);
    add_background_object(create_plindoorruins1_3012(8992, 384), 2);
    add_background_object(create_plindoorruins1_3012(9152, 640), 2);
    add_background_object(create_plindoorruins1_3012(9312, 416), 2);
    add_background_object(create_plindoorruins1_3012(9312, 544), 2);
    add_background_object(create_plindoorruins1_3012(9312, 672), 2);
    add_background_object(create_plindoorruins1_3012(9600, 384), 2);
    add_background_object(create_plcaveback2_3013(3712, 928), 2);
    add_background_object(create_plcaveback2_3013(3776, 1088), 2);
    add_background_object(create_plcaveback2_3013(3840, 1248), 2);
    add_background_object(create_plcaveback1_3014(4336, 1216), 2);
    add_background_object(create_plcaveback1_3014(4272, 1376), 2);
    add_background_object(create_plcaveback1_3014(4208, 1536), 2);
    add_background_object(create_plindoorruins1_3012(4208, 1248), 2);
    add_background_object(create_plindoorruins1_3012(3792, 896), 2);
    add_background_object(create_plindoorruins1_3012(3792, 1024), 2);
    add_background_object(create_plindoorruins1_3012(3568, 1280), 2);
    add_background_object(create_plindoorruins1_3012(3568, 1152), 2);
    add_background_object(create_plcaveback1_3014(4416, 1560), 2);
    add_background_object(create_plcaveback1_3014(4480, 1400), 2);
    add_background_object(create_plcaveback1_3014(4584, 1696), 2);
    add_background_object(create_plcaveback1_3014(4648, 1536), 2);
    add_background_object(create_plcaveback1_3014(4816, 1664), 2);
    add_background_object(create_plcaveback1_3014(4752, 1824), 2);
    add_background_object(create_plcaveback1_3014(5152, 1928), 2);
    add_background_object(create_plcaveback1_3014(5216, 1768), 2);
    add_background_object(create_plcaveback1_3014(5392, 1824), 2);
    add_background_object(create_plcaveback1_3014(5456, 1664), 2);
    add_background_object(create_plcaveback1_3014(5520, 1504), 2);
    add_background_object(create_plcaveback1_3014(5328, 1984), 2);
    add_background_object(create_plcaveback1_3014(5592, 1896), 2);
    add_background_object(create_plindoorruins1_3012(2176, 1152), 2);
    add_background_object(create_plindoorruins1_3012(2176, 1024), 2);
    add_background_object(create_plcaveback1_3014(5408, 1288), 2);
    add_background_object(create_plcaveback1_3014(5472, 1128), 2);
    add_background_object(create_plindoorruins1_3012(9128, 384), 2);
    add_background_object(create_plindoorruins3_3016(4008, 952), 2);
    add_background_object(create_plindoorruins1_3012(7632, 192), 2);
    add_background_object(create_plindoorruins3_3016(8040, 392), 2);
    add_background_object(create_plcaveback1_3014(10424, 512), 2);
    add_background_object(create_plcaveback1_3014(10488, 352), 2);
    add_background_object(create_plcaveback1_3014(10552, 192), 2);
    add_background_object(create_plcaveback2_3013(10424, 672), 2);
    add_background_object(create_plcaveback1_3014(10688, 664), 2);
    add_background_object(create_plcaveback2_3013(10688, 824), 2);
    add_background_object(create_plcaveback2_3013(10752, 984), 2);
    add_background_object(create_plruins8_2911(9456, 312), 2);
    add_background_object(create_plindoorruins1_3012(9456, 328), 2);
    add_background_object(create_plindoorruins1_3012(9456, 456), 2);
    add_background_object(create_plindoorruins1_3012(10192, 512), 2);
    add_background_object(create_plindoorruins1_3012(10248, 256), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(11376, -35), 2);
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
    add_object(create_gimmickbowstring_2974(5766, 1318), 2);
    add_object(create_gimmickbowstring_2974(5766, 1334), 2);
    add_object(create_gimmickbowstring_2974(5766, 1350), 2);
    add_object(create_gimmickbowstring_2974(5766, 1366), 2);
    add_object(create_gimmickbowstring_2974(5766, 1382), 2);
    add_object(create_gimmickbowstring_2974(5766, 1398), 2);
    add_object(create_gimmickbowstring_2974(5766, 1414), 2);
    add_object(create_gimmickbowstring_2974(5766, 1430), 2);
    add_object(create_gimmickbowstring_2974(5766, 1446), 2);
    add_object(create_gimmickbowstring_2974(5766, 1462), 2);
    add_object(create_hazardgiantswordmask_3041(8176, 240), 2);
    add_object(create_hazardgiantswordmask_3041(8352, 240), 2);
    add_object(create_gimmickbowstring_2974(9758, -202), 2);
    add_object(create_gimmickbowstring_2974(9758, -186), 2);
    add_object(create_gimmickbowstring_2974(9758, -170), 2);
    add_object(create_gimmickbowstring_2974(9758, -154), 2);
    add_object(create_gimmickbowstring_2974(9758, -138), 2);
    add_object(create_gimmickbowstring_2974(9758, -122), 2);
    add_object(create_gimmickbowstring_2974(9758, -106), 2);
    add_object(create_gimmickbowstring_2974(9758, -90), 2);
    add_object(create_gimmickbowstring_2974(9758, -74), 2);
    add_object(create_gimmickbowstring_2974(9758, -58), 2);
    add_object(create_hazardgiantswordmask_3041(8880, 288), 2);
    add_object(create_hazardgiantswordmask_3041(10688, 272), 2);
    add_object(create_hazardgiantswordmask_3041(10400, 432), 2);
    add_object(create_hazardgiantswordmask_3041(9312, 528), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_plcavebrick5_3017(10832, 640), 3);
    add_background_object(create_plcavebrick5_3017(10832, 704), 3);
    add_background_object(create_plcavebrick5_3017(10704, 576), 3);
    add_background_object(create_plcavebrick3_3018(10352, 384), 3);
    add_background_object(create_plcavebrick2_3019(10704, 384), 3);
    add_background_object(create_plvine1_2938(9256, 232), 3);
    add_background_object(create_plvine1_2938(7552, 208), 3);
    add_background_object(create_plvine1_2938(6304, 1240), 3);
    add_background_object(create_plvine1_2938(6232, 1232), 3);
    add_background_object(create_plcavebrick2_3019(5664, 1984), 3);
    add_background_object(create_plcavebrick3_3018(5440, 1472), 3);
    add_background_object(create_plcavebrick1_3020(3552, 928), 3);
    add_background_object(create_plcavebrick1_3020(3552, 1056), 3);
    add_background_object(create_plcavebrick5_3017(9168, 288), 3);
    add_background_object(create_plcavebrick5_3017(9136, 256), 3);
    add_background_object(create_plbow_2975(9752, -224), 3);
    add_background_object(create_plcavebrick12_3026(7168, 1632), 3);
    add_background_object(create_plplant3_2922(7616, 1056), 3);
    add_background_object(create_plvine1_2938(6384, 1200), 3);
    add_background_object(create_plvine1_2938(6672, 1232), 3);
    add_background_object(create_plcavebrick2_3019(3792, 128), 3);
    add_background_object(create_plbow_2975(5760, 1296), 3);
    add_background_object(create_plcavebrick1_3020(0, 768), 3);
    add_background_object(create_plcavebrick10_3029(-408, 1232), 3);
    add_background_object(create_lightray1_659(-464, 1056), 3);
    add_background_object(create_lightray2_666(-464, 1056), 3);
    add_background_object(create_plcaveback1_3014(-584, 992), 3);
    add_background_object(create_plcaveback2_3013(-568, 984), 3);
    add_background_object(create_plcavebrick1_3020(-488, 1016), 3);
    add_background_object(create_plcavebrick10_3029(-496, 1024), 3);
    add_background_object(create_plcavebrick11_3025(-472, 1048), 3);
    add_background_object(create_plcavebrick12_3026(-464, 1040), 3);
    add_background_object(create_plcavebrick2_3019(-464, 1024), 3);
    add_background_object(create_plcavebrick3_3018(-440, 1024), 3);
    add_background_object(create_plcavebrick4_3023(-456, 1024), 3);
    add_background_object(create_plcavebrick5_3017(-440, 1064), 3);
    add_background_object(create_plcavebrick6_3022(-488, 1072), 3);
    add_background_object(create_plcavebrick7_3021(-496, 1008), 3);
    add_background_object(create_plcavebrick8_3024(-496, 1056), 3);
    add_background_object(create_plcavebrick9_3028(-456, 1048), 3);
    add_background_object(create_plindoorruins1_3012(-472, 1016), 3);
    add_background_object(create_plindoorruins2_3015(-496, 1016), 3);
    add_background_object(create_plindoorruins3_3016(-464, 1000), 3);
    add_background_object(create_plmask_2973(-448, 1048), 3);
    add_background_object(create_plruins8_2911(-480, 1056), 3);
    add_background_object(create_plrunestone_2992(-464, 1048), 3);
    add_background_object(create_plsignup_2916(-424, 1064), 3);
    add_background_object(create_plvine1_2938(-392, 1096), 3);
    add_background_object(create_plvine2_2941(-496, 1080), 3);
    add_background_object(create_signwarning_1028(-520, 1176), 3);
    add_background_object(create_plcavebrick1_3020(0, 1024), 3);
    add_background_object(create_plcavebrick1_3020(0, 576), 3);
    add_background_object(create_plcavebrick1_3020(0, 448), 3);
    add_background_object(create_plcavebrick1_3020(0, 1152), 3);
    add_background_object(create_plcavebrick1_3020(0, 1280), 3);
    add_background_object(create_plcavebrick1_3020(128, 1280), 3);
    add_background_object(create_plcavebrick1_3020(256, 1280), 3);
    add_background_object(create_plcavebrick1_3020(384, 1280), 3);
    add_background_object(create_plcavebrick1_3020(512, 1280), 3);
    add_background_object(create_plcavebrick1_3020(640, 1280), 3);
    add_background_object(create_plcavebrick1_3020(768, 1280), 3);
    add_background_object(create_plcavebrick1_3020(896, 1280), 3);
    add_background_object(create_plcavebrick3_3018(128, 1152), 3);
    add_background_object(create_plcavebrick3_3018(128, 1024), 3);
    add_background_object(create_plcavebrick3_3018(128, 768), 3);
    add_background_object(create_plcavebrick3_3018(128, 576), 3);
    add_background_object(create_plcavebrick3_3018(128, 448), 3);
    add_background_object(create_plcavebrick4_3023(768, 480), 3);
    add_background_object(create_plcavebrick5_3017(800, 480), 3);
    add_background_object(create_plcavebrick6_3022(864, 480), 3);
    add_background_object(create_plcavebrick1_3020(0, 320), 3);
    add_background_object(create_plcavebrick3_3018(128, 320), 3);
    add_background_object(create_plcavebrick4_3023(2160, 512), 3);
    add_background_object(create_plcavebrick5_3017(2192, 512), 3);
    add_background_object(create_plcavebrick6_3022(2256, 512), 3);
    add_background_object(create_plcavebrick1_3020(1024, 1280), 3);
    add_background_object(create_plcavebrick1_3020(1152, 1280), 3);
    add_background_object(create_plcavebrick1_3020(1280, 1280), 3);
    add_background_object(create_plcavebrick1_3020(1408, 1280), 3);
    add_background_object(create_plcavebrick1_3020(1536, 1280), 3);
    add_background_object(create_plcavebrick1_3020(1664, 1280), 3);
    add_background_object(create_plcavebrick1_3020(1792, 1280), 3);
    add_background_object(create_plcavebrick1_3020(1920, 1280), 3);
    add_background_object(create_plcavebrick1_3020(2048, 1280), 3);
    add_background_object(create_plcavebrick1_3020(2176, 1280), 3);
    add_background_object(create_plcavebrick1_3020(2304, 1280), 3);
    add_background_object(create_plcavebrick1_3020(2432, 1280), 3);
    add_background_object(create_plcavebrick1_3020(2560, 1280), 3);
    add_background_object(create_plcavebrick1_3020(2688, 1280), 3);
    add_background_object(create_plcavebrick1_3020(2416, -64), 3);
    add_background_object(create_plcavebrick1_3020(2416, 64), 3);
    add_background_object(create_plcavebrick1_3020(2288, -64), 3);
    add_background_object(create_plcavebrick1_3020(2288, 64), 3);
    add_background_object(create_plcavebrick1_3020(2544, -64), 3);
    add_background_object(create_plcavebrick1_3020(2544, 64), 3);
    add_background_object(create_plcavebrick1_3020(2672, -64), 3);
    add_background_object(create_plcavebrick1_3020(2672, 64), 3);
    add_background_object(create_plcavebrick1_3020(2160, -64), 3);
    add_background_object(create_plcavebrick1_3020(2160, 64), 3);
    add_background_object(create_plcavebrick1_3020(2800, -64), 3);
    add_background_object(create_plcavebrick1_3020(2800, 64), 3);
    add_background_object(create_plcavebrick1_3020(2928, -64), 3);
    add_background_object(create_plcavebrick1_3020(2928, 64), 3);
    add_background_object(create_plcavebrick1_3020(3056, -64), 3);
    add_background_object(create_plcavebrick1_3020(3056, 64), 3);
    add_background_object(create_plcavebrick1_3020(3184, -64), 3);
    add_background_object(create_plcavebrick1_3020(3184, 64), 3);
    add_background_object(create_plcavebrick1_3020(3312, -64), 3);
    add_background_object(create_plcavebrick1_3020(3312, 64), 3);
    add_background_object(create_plcavebrick1_3020(3440, -64), 3);
    add_background_object(create_plcavebrick1_3020(3440, 64), 3);
    add_background_object(create_plcavebrick1_3020(3568, -64), 3);
    add_background_object(create_plcavebrick1_3020(3568, 64), 3);
    add_background_object(create_plcavebrick2_3019(3552, 416), 3);
    add_background_object(create_plcavebrick1_3020(3584, 416), 3);
    add_background_object(create_plcavebrick1_3020(3696, -64), 3);
    add_background_object(create_plcavebrick1_3020(3696, 64), 3);
    add_background_object(create_plcavebrick1_3020(3824, 0), 3);
    add_background_object(create_plcavebrick1_3020(3824, 128), 3);
    add_background_object(create_plcavebrick1_3020(3824, 256), 3);
    add_background_object(create_plcavebrick1_3020(3824, 384), 3);
    add_background_object(create_plcavebrick1_3020(3824, 512), 3);
    add_background_object(create_plcavebrick2_3019(3792, 512), 3);
    add_background_object(create_plcavebrick3_3018(3712, 416), 3);
    add_background_object(create_plcavebrick2_3019(3792, 384), 3);
    add_background_object(create_plcavebrick2_3019(3792, 256), 3);
    add_background_object(create_plcavebrick2_3019(3552, 544), 3);
    add_background_object(create_plcavebrick1_3020(3584, 544), 3);
    add_background_object(create_plcavebrick3_3018(3712, 544), 3);
    add_background_object(create_plcavebrick2_3019(3552, 672), 3);
    add_background_object(create_plcavebrick1_3020(3584, 672), 3);
    add_background_object(create_plcavebrick2_3019(3552, 800), 3);
    add_background_object(create_plcavebrick1_3020(3584, 800), 3);
    add_background_object(create_plcavebrick5_3017(3520, 576), 3);
    add_background_object(create_plcavebrick4_3023(3424, 576), 3);
    add_background_object(create_plcavebrick5_3017(3456, 576), 3);
    add_background_object(create_plcavebrick5_3017(3520, 608), 3);
    add_background_object(create_plcavebrick4_3023(3488, 608), 3);
    add_background_object(create_plcavebrick1_3020(2816, 1280), 3);
    add_background_object(create_plcavebrick1_3020(2944, 1280), 3);
    add_background_object(create_plcavebrick1_3020(3072, 1280), 3);
    add_background_object(create_plcavebrick1_3020(3200, 1312), 3);
    add_background_object(create_plcavebrick1_3020(3328, 1344), 3);
    add_background_object(create_plcavebrick1_3020(3456, 1376), 3);
    add_background_object(create_plcavebrick1_3020(3584, 1376), 3);
    add_background_object(create_plcavebrick1_3020(3712, 1376), 3);
    add_background_object(create_plcavebrick2_3019(3552, 1056), 3);
    add_background_object(create_plcavebrick5_3017(2896, 192), 3);
    add_background_object(create_plcavebrick4_3023(2864, 192), 3);
    add_background_object(create_plcavebrick6_3022(2960, 192), 3);
    add_background_object(create_plcavebrick5_3017(3280, 192), 3);
    add_background_object(create_plcavebrick4_3023(3248, 192), 3);
    add_background_object(create_plcavebrick6_3022(3344, 192), 3);
    add_background_object(create_plcavebrick1_3020(1904, -64), 3);
    add_background_object(create_plcavebrick1_3020(1776, -64), 3);
    add_background_object(create_plcavebrick1_3020(2032, -64), 3);
    add_background_object(create_plcavebrick1_3020(1648, -64), 3);
    add_background_object(create_plcavebrick1_3020(1520, -64), 3);
    add_background_object(create_plcavebrick1_3020(1392, -64), 3);
    add_background_object(create_plcavebrick1_3020(1264, -64), 3);
    add_background_object(create_plcavebrick1_3020(1136, -64), 3);
    add_background_object(create_plcavebrick1_3020(1008, -64), 3);
    add_background_object(create_plcavebrick1_3020(880, -64), 3);
    add_background_object(create_plcavebrick1_3020(752, -64), 3);
    add_background_object(create_plcavebrick1_3020(368, -64), 3);
    add_background_object(create_plcavebrick1_3020(240, -64), 3);
    add_background_object(create_plcavebrick2_3019(208, -64), 3);
    add_background_object(create_plcavebrick10_3029(160, 1216), 3);
    add_background_object(create_plcavebrick2_3019(2128, 64), 3);
    add_background_object(create_plcavebrick1_3020(3712, 768), 3);
    add_background_object(create_plcavebrick5_3017(3712, 736), 3);
    add_background_object(create_plcavebrick5_3017(3712, 704), 3);
    add_background_object(create_plcavebrick5_3017(3840, 864), 3);
    add_background_object(create_plcavebrick5_3017(3840, 832), 3);
    add_background_object(create_plcavebrick1_3020(3968, 1024), 3);
    add_background_object(create_plcavebrick5_3017(3968, 992), 3);
    add_background_object(create_plcavebrick5_3017(3968, 960), 3);
    add_background_object(create_plcavebrick11_3025(3712, 640), 3);
    add_background_object(create_plcavebrick11_3025(3776, 704), 3);
    add_background_object(create_plcavebrick11_3025(3840, 768), 3);
    add_background_object(create_plcavebrick11_3025(3904, 832), 3);
    add_background_object(create_plcavebrick11_3025(3968, 896), 3);
    add_background_object(create_plcavebrick11_3025(4032, 960), 3);
    add_background_object(create_plcavebrick1_3020(4096, 1056), 3);
    add_background_object(create_plcavebrick7_3021(4096, 1024), 3);
    add_background_object(create_plcavebrick1_3020(4096, 1376), 3);
    add_background_object(create_plcavebrick1_3020(4224, 1088), 3);
    add_background_object(create_plcavebrick7_3021(4224, 1056), 3);
    add_background_object(create_plcavebrick1_3020(4352, 1088), 3);
    add_background_object(create_plcavebrick1_3020(4480, 1088), 3);
    add_background_object(create_plcavebrick1_3020(4480, 960), 3);
    add_background_object(create_plcavebrick1_3020(4608, 992), 3);
    add_background_object(create_plcavebrick9_3028(4416, 1024), 3);
    add_background_object(create_plcavebrick1_3020(4608, 1120), 3);
    add_background_object(create_plcavebrick1_3020(3952, 0), 3);
    add_background_object(create_plcavebrick1_3020(3952, 128), 3);
    add_background_object(create_plcavebrick1_3020(3952, 256), 3);
    add_background_object(create_plcavebrick1_3020(3952, 384), 3);
    add_background_object(create_plcavebrick1_3020(3952, 512), 3);
    add_background_object(create_plcavebrick1_3020(4080, 0), 3);
    add_background_object(create_plcavebrick1_3020(4080, 128), 3);
    add_background_object(create_plcavebrick1_3020(4080, 256), 3);
    add_background_object(create_plcavebrick1_3020(4080, 384), 3);
    add_background_object(create_plcavebrick1_3020(4080, 512), 3);
    add_background_object(create_plcavebrick1_3020(4208, 0), 3);
    add_background_object(create_plcavebrick1_3020(4208, 128), 3);
    add_background_object(create_plcavebrick1_3020(4208, 256), 3);
    add_background_object(create_plcavebrick1_3020(4208, 384), 3);
    add_background_object(create_plcavebrick1_3020(4208, 512), 3);
    add_background_object(create_plcavebrick1_3020(4336, 0), 3);
    add_background_object(create_plcavebrick1_3020(4336, 128), 3);
    add_background_object(create_plcavebrick1_3020(4336, 256), 3);
    add_background_object(create_plcavebrick1_3020(4336, 384), 3);
    add_background_object(create_plcavebrick1_3020(4336, 512), 3);
    add_background_object(create_plcavebrick7_3021(4736, 736), 3);
    add_background_object(create_plcavebrick4_3023(4704, 736), 3);
    add_background_object(create_plcavebrick4_3023(4704, 768), 3);
    add_background_object(create_plcavebrick4_3023(4704, 800), 3);
    add_background_object(create_plcavebrick5_3017(4736, 768), 3);
    add_background_object(create_plcavebrick5_3017(4800, 768), 3);
    add_background_object(create_plcavebrick5_3017(4800, 800), 3);
    add_background_object(create_plcavebrick5_3017(4736, 800), 3);
    add_background_object(create_plcavebrick11_3025(4864, 768), 3);
    add_background_object(create_plcavebrick11_3025(4928, 832), 3);
    add_background_object(create_plcavebrick5_3017(4864, 832), 3);
    add_background_object(create_plcavebrick5_3017(5120, 1088), 3);
    add_background_object(create_plcavebrick11_3025(5184, 1088), 3);
    add_background_object(create_plcavebrick11_3025(5248, 1152), 3);
    add_background_object(create_plcavebrick5_3017(5184, 1152), 3);
    add_background_object(create_plcavebrick7_3021(4608, 960), 3);
    add_background_object(create_plcavebrick11_3025(4736, 992), 3);
    add_background_object(create_plcavebrick11_3025(4800, 1056), 3);
    add_background_object(create_plcavebrick5_3017(4736, 1056), 3);
    add_background_object(create_plcavebrick5_3017(4800, 1120), 3);
    add_background_object(create_plcavebrick11_3025(4864, 1120), 3);
    add_background_object(create_plcavebrick11_3025(5120, 1376), 3);
    add_background_object(create_plcavebrick5_3017(4864, 1184), 3);
    add_background_object(create_plcavebrick5_3017(5120, 1440), 3);
    add_background_object(create_plcavebrick1_3020(4736, 1152), 3);
    add_background_object(create_plcavebrick1_3020(4864, 1280), 3);
    add_background_object(create_plcavebrick1_3020(4736, 1280), 3);
    add_background_object(create_plcavebrick1_3020(4608, 1248), 3);
    add_background_object(create_plcavebrick5_3017(4736, 1088), 3);
    add_background_object(create_plcavebrick5_3017(4736, 1120), 3);
    add_background_object(create_plcavebrick5_3017(4864, 1216), 3);
    add_background_object(create_plcavebrick5_3017(4864, 1248), 3);
    add_background_object(create_plcavebrick7_3021(5184, 1440), 3);
    add_background_object(create_plcavebrick1_3020(5312, 1472), 3);
    add_background_object(create_plcavebrick1_3020(5184, 1472), 3);
    add_background_object(create_plcavebrick4_3023(4832, 832), 3);
    add_background_object(create_plcavebrick5_3017(4896, 864), 3);
    add_background_object(create_plcavebrick5_3017(5152, 1120), 3);
    add_background_object(create_plcavebrick5_3017(5216, 1184), 3);
    add_background_object(create_plcavebrick4_3023(4864, 864), 3);
    add_background_object(create_plcavebrick4_3023(5088, 1088), 3);
    add_background_object(create_plcavebrick4_3023(5120, 1120), 3);
    add_background_object(create_plcavebrick4_3023(5152, 1152), 3);
    add_background_object(create_plcavebrick4_3023(5184, 1184), 3);
    add_background_object(create_plcavebrick11_3025(5312, 1216), 3);
    add_background_object(create_plcavebrick5_3017(5248, 1216), 3);
    add_background_object(create_plcavebrick5_3017(5280, 1248), 3);
    add_background_object(create_plcavebrick4_3023(5216, 1216), 3);
    add_background_object(create_plcavebrick4_3023(5248, 1248), 3);
    add_background_object(create_plcavebrick11_3025(5376, 1280), 3);
    add_background_object(create_plcavebrick5_3017(5312, 1280), 3);
    add_background_object(create_plcavebrick5_3017(5344, 1312), 3);
    add_background_object(create_plcavebrick4_3023(5280, 1280), 3);
    add_background_object(create_plcavebrick4_3023(5312, 1312), 3);
    add_background_object(create_plcavebrick7_3021(5440, 1344), 3);
    add_background_object(create_plcavebrick5_3017(5376, 1344), 3);
    add_background_object(create_plcavebrick4_3023(5344, 1344), 3);
    add_background_object(create_plcavebrick5_3017(5408, 1376), 3);
    add_background_object(create_plcavebrick4_3023(5376, 1376), 3);
    add_background_object(create_plcavebrick5_3017(5472, 1376), 3);
    add_background_object(create_plcavebrick5_3017(5536, 1376), 3);
    add_background_object(create_plcavebrick6_3022(5600, 1376), 3);
    add_background_object(create_plcavebrick5_3017(5056, 1024), 3);
    add_background_object(create_plcavebrick11_3025(5120, 1024), 3);
    add_background_object(create_plcavebrick5_3017(5088, 1056), 3);
    add_background_object(create_plcavebrick4_3023(5024, 1024), 3);
    add_background_object(create_plcavebrick4_3023(5056, 1056), 3);
    add_background_object(create_plcavebrick5_3017(4992, 960), 3);
    add_background_object(create_plcavebrick11_3025(5056, 960), 3);
    add_background_object(create_plcavebrick5_3017(5024, 992), 3);
    add_background_object(create_plcavebrick4_3023(4960, 960), 3);
    add_background_object(create_plcavebrick4_3023(4992, 992), 3);
    add_background_object(create_plcavebrick5_3017(4928, 896), 3);
    add_background_object(create_plcavebrick11_3025(4992, 896), 3);
    add_background_object(create_plcavebrick5_3017(4960, 928), 3);
    add_background_object(create_plcavebrick4_3023(4896, 896), 3);
    add_background_object(create_plcavebrick4_3023(4928, 928), 3);
    add_background_object(create_plcavebrick11_3025(4928, 1184), 3);
    add_background_object(create_plcavebrick5_3017(4928, 1248), 3);
    add_background_object(create_plcavebrick11_3025(4992, 1248), 3);
    add_background_object(create_plcavebrick11_3025(5056, 1312), 3);
    add_background_object(create_plcavebrick5_3017(4992, 1312), 3);
    add_background_object(create_plcavebrick5_3017(4992, 1344), 3);
    add_background_object(create_plcavebrick1_3020(4992, 1376), 3);
    add_background_object(create_plcavebrick1_3020(5056, 1472), 3);
    add_background_object(create_plcavebrick1_3020(4864, 1408), 3);
    add_background_object(create_plcavebrick5_3017(4992, 1504), 3);
    add_background_object(create_plcavebrick1_3020(4928, 1536), 3);
    add_background_object(create_plcavebrick1_3020(4800, 1536), 3);
    add_background_object(create_plcavebrick1_3020(4736, 1408), 3);
    add_background_object(create_plcavebrick1_3020(4608, 1376), 3);
    add_background_object(create_plcavebrick1_3020(4480, 1408), 3);
    add_background_object(create_plcavebrick1_3020(4464, 256), 3);
    add_background_object(create_plcavebrick1_3020(4464, 384), 3);
    add_background_object(create_plcavebrick1_3020(4464, 512), 3);
    add_background_object(create_plcavebrick1_3020(4592, 256), 3);
    add_background_object(create_plcavebrick1_3020(4592, 384), 3);
    add_background_object(create_plcavebrick1_3020(4592, 512), 3);
    add_background_object(create_plcavebrick1_3020(4720, 256), 3);
    add_background_object(create_plcavebrick1_3020(4720, 384), 3);
    add_background_object(create_plcavebrick1_3020(4720, 512), 3);
    add_background_object(create_plcavebrick1_3020(4848, 256), 3);
    add_background_object(create_plcavebrick1_3020(4848, 384), 3);
    add_background_object(create_plcavebrick1_3020(4848, 512), 3);
    add_background_object(create_plcavebrick1_3020(4976, 288), 3);
    add_background_object(create_plcavebrick1_3020(4976, 416), 3);
    add_background_object(create_plcavebrick1_3020(4976, 544), 3);
    add_background_object(create_plcavebrick4_3023(4944, 640), 3);
    add_background_object(create_plcavebrick4_3023(4976, 672), 3);
    add_background_object(create_plcavebrick5_3017(5040, 672), 3);
    add_background_object(create_plcavebrick5_3017(5008, 672), 3);
    add_background_object(create_plcavebrick5_3017(5040, 704), 3);
    add_background_object(create_plcavebrick4_3023(5008, 704), 3);
    add_background_object(create_plcavebrick5_3017(5072, 736), 3);
    add_background_object(create_plcavebrick4_3023(5040, 736), 3);
    add_background_object(create_plcavebrick4_3023(5072, 768), 3);
    add_background_object(create_plcavebrick1_3020(5104, 416), 3);
    add_background_object(create_plcavebrick1_3020(5104, 544), 3);
    add_background_object(create_plcavebrick1_3020(5104, 672), 3);
    add_background_object(create_plcavebrick4_3023(5104, 800), 3);
    add_background_object(create_plcavebrick5_3017(5168, 800), 3);
    add_background_object(create_plcavebrick5_3017(5136, 800), 3);
    add_background_object(create_plcavebrick5_3017(5168, 832), 3);
    add_background_object(create_plcavebrick4_3023(5136, 832), 3);
    add_background_object(create_plcavebrick5_3017(5200, 864), 3);
    add_background_object(create_plcavebrick4_3023(5168, 864), 3);
    add_background_object(create_plcavebrick4_3023(5200, 896), 3);
    add_background_object(create_plcavebrick1_3020(5232, 544), 3);
    add_background_object(create_plcavebrick1_3020(5232, 672), 3);
    add_background_object(create_plcavebrick1_3020(5232, 800), 3);
    add_background_object(create_plcavebrick4_3023(5232, 928), 3);
    add_background_object(create_plcavebrick5_3017(5296, 928), 3);
    add_background_object(create_plcavebrick5_3017(5264, 928), 3);
    add_background_object(create_plcavebrick5_3017(5296, 960), 3);
    add_background_object(create_plcavebrick4_3023(5264, 960), 3);
    add_background_object(create_plcavebrick5_3017(5328, 992), 3);
    add_background_object(create_plcavebrick4_3023(5296, 992), 3);
    add_background_object(create_plcavebrick4_3023(5328, 1024), 3);
    add_background_object(create_plcavebrick1_3020(5360, 672), 3);
    add_background_object(create_plcavebrick1_3020(5360, 800), 3);
    add_background_object(create_plcavebrick1_3020(5360, 928), 3);
    add_background_object(create_plcavebrick4_3023(5360, 1056), 3);
    add_background_object(create_plcavebrick5_3017(5424, 1056), 3);
    add_background_object(create_plcavebrick5_3017(5392, 1056), 3);
    add_background_object(create_plcavebrick5_3017(5424, 1088), 3);
    add_background_object(create_plcavebrick4_3023(5392, 1088), 3);
    add_background_object(create_plcavebrick5_3017(5456, 1120), 3);
    add_background_object(create_plcavebrick4_3023(5424, 1120), 3);
    add_background_object(create_plcavebrick4_3023(5456, 1152), 3);
    add_background_object(create_plcavebrick1_3020(5488, 800), 3);
    add_background_object(create_plcavebrick1_3020(5488, 928), 3);
    add_background_object(create_plcavebrick1_3020(5488, 1056), 3);
    add_background_object(create_plcavebrick4_3023(5488, 1184), 3);
    add_background_object(create_plcavebrick5_3017(5552, 1184), 3);
    add_background_object(create_plcavebrick5_3017(5520, 1184), 3);
    add_background_object(create_plcavebrick5_3017(5552, 1216), 3);
    add_background_object(create_plcavebrick4_3023(5520, 1216), 3);
    add_background_object(create_plcavebrick1_3020(5616, 992), 3);
    add_background_object(create_plcavebrick1_3020(5616, 1120), 3);
    add_background_object(create_plcavebrick1_3020(5616, 864), 3);
    add_background_object(create_plcavebrick2_3019(3552, 928), 3);
    add_background_object(create_plcavebrick1_3020(0, 896), 3);
    add_background_object(create_plcavebrick3_3018(128, 896), 3);
    add_background_object(create_plcavebrick7_3021(4480, 928), 3);
    add_background_object(create_plcavebrick1_3020(3936, 1504), 3);
    add_background_object(create_plcavebrick5_3017(5696, 1472), 3);
    add_background_object(create_plcavebrick5_3017(5760, 1472), 3);
    add_background_object(create_plcavebrick6_3022(5824, 1472), 3);
    add_background_object(create_plcavebrick1_3020(5312, 1600), 3);
    add_background_object(create_plcavebrick1_3020(5184, 1600), 3);
    add_background_object(create_plcavebrick1_3020(5056, 1600), 3);
    add_background_object(create_plcavebrick1_3020(5312, 1728), 3);
    add_background_object(create_plcavebrick1_3020(5696, 1600), 3);
    add_background_object(create_plcavebrick1_3020(5824, 1600), 3);
    add_background_object(create_plcavebrick1_3020(5696, 1728), 3);
    add_background_object(create_plcavebrick1_3020(5824, 1728), 3);
    add_background_object(create_plcavebrick1_3020(5952, 1664), 3);
    add_background_object(create_plcavebrick1_3020(5952, 1792), 3);
    add_background_object(create_plcavebrick1_3020(6080, 1728), 3);
    add_background_object(create_plcavebrick1_3020(6080, 1856), 3);
    add_background_object(create_plcavebrick1_3020(5824, 1856), 3);
    add_background_object(create_plcavebrick1_3020(5952, 1920), 3);
    add_background_object(create_plcavebrick1_3020(6080, 1984), 3);
    add_background_object(create_plcavebrick1_3020(6208, 1760), 3);
    add_background_object(create_plcavebrick1_3020(6208, 1888), 3);
    add_background_object(create_plcavebrick1_3020(6208, 2016), 3);
    add_background_object(create_plcavebrick6_3022(5952, 1600), 3);
    add_background_object(create_plcavebrick6_3022(6080, 1664), 3);
    add_background_object(create_plcavebrick5_3017(5952, 1632), 3);
    add_background_object(create_plcavebrick5_3017(6080, 1696), 3);
    add_background_object(create_plcavebrick6_3022(6016, 1632), 3);
    add_background_object(create_plcavebrick6_3022(6144, 1696), 3);
    add_background_object(create_plcavebrick6_3022(6208, 1728), 3);
    add_background_object(create_plcavebrick1_3020(5696, 1856), 3);
    add_background_object(create_plcavebrick1_3020(6080, 2112), 3);
    add_background_object(create_plcavebrick1_3020(5952, 2048), 3);
    add_background_object(create_plcavebrick1_3020(5824, 1984), 3);
    add_background_object(create_plcavebrick1_3020(6336, 1760), 3);
    add_background_object(create_plcavebrick1_3020(6336, 1888), 3);
    add_background_object(create_plcavebrick1_3020(6336, 2016), 3);
    add_background_object(create_plcavebrick1_3020(6464, 1760), 3);
    add_background_object(create_plcavebrick1_3020(6464, 1888), 3);
    add_background_object(create_plcavebrick1_3020(6464, 2016), 3);
    add_background_object(create_plcavebrick1_3020(6592, 1760), 3);
    add_background_object(create_plcavebrick1_3020(6592, 1888), 3);
    add_background_object(create_plcavebrick1_3020(6592, 2016), 3);
    add_background_object(create_plcavebrick1_3020(6464, 1472), 3);
    add_background_object(create_plcavebrick2_3019(6432, 1472), 3);
    add_background_object(create_plcavebrick3_3018(6592, 1472), 3);
    add_background_object(create_plcavebrick1_3020(6720, 1760), 3);
    add_background_object(create_plcavebrick1_3020(6720, 1888), 3);
    add_background_object(create_plcavebrick1_3020(6720, 2016), 3);
    add_background_object(create_plcavebrick1_3020(6464, 1344), 3);
    add_background_object(create_plcavebrick2_3019(6432, 1344), 3);
    add_background_object(create_plcavebrick3_3018(6592, 1344), 3);
    add_background_object(create_plcavebrick1_3020(5744, 992), 3);
    add_background_object(create_plcavebrick1_3020(5744, 1120), 3);
    add_background_object(create_plcavebrick1_3020(5744, 864), 3);
    add_background_object(create_plcavebrick1_3020(5872, 992), 3);
    add_background_object(create_plcavebrick1_3020(5872, 1120), 3);
    add_background_object(create_plcavebrick1_3020(5872, 864), 3);
    add_background_object(create_plcavebrick1_3020(6000, 992), 3);
    add_background_object(create_plcavebrick1_3020(6000, 1120), 3);
    add_background_object(create_plcavebrick1_3020(6000, 864), 3);
    add_background_object(create_plcavebrick1_3020(6128, 992), 3);
    add_background_object(create_plcavebrick1_3020(6128, 1120), 3);
    add_background_object(create_plcavebrick1_3020(6128, 864), 3);
    add_background_object(create_plcavebrick1_3020(6256, 992), 3);
    add_background_object(create_plcavebrick1_3020(6256, 1120), 3);
    add_background_object(create_plcavebrick1_3020(6256, 864), 3);
    add_background_object(create_plcavebrick1_3020(6384, 992), 3);
    add_background_object(create_plcavebrick1_3020(6384, 1120), 3);
    add_background_object(create_plcavebrick1_3020(6384, 864), 3);
    add_background_object(create_plcavebrick1_3020(6512, 992), 3);
    add_background_object(create_plcavebrick1_3020(6512, 1120), 3);
    add_background_object(create_plcavebrick1_3020(6512, 864), 3);
    add_background_object(create_plcavebrick1_3020(6640, 992), 3);
    add_background_object(create_plcavebrick1_3020(6640, 1120), 3);
    add_background_object(create_plcavebrick1_3020(6640, 864), 3);
    add_background_object(create_plvine2_2941(6672, 1592), 3);
    add_background_object(create_plvine1_2938(6672, 1520), 3);
    add_background_object(create_plvine1_2938(6672, 1448), 3);
    add_background_object(create_plvine1_2938(6672, 1376), 3);
    add_background_object(create_plvine1_2938(6672, 1304), 3);
    add_background_object(create_plcavebrick1_3020(6768, 992), 3);
    add_background_object(create_plcavebrick1_3020(6768, 1120), 3);
    add_background_object(create_plcavebrick1_3020(6768, 864), 3);
    add_background_object(create_plcavebrick1_3020(6848, 1760), 3);
    add_background_object(create_plcavebrick1_3020(6848, 1888), 3);
    add_background_object(create_plcavebrick1_3020(6848, 2016), 3);
    add_background_object(create_plcavebrick1_3020(6976, 1728), 3);
    add_background_object(create_plcavebrick1_3020(6976, 1856), 3);
    add_background_object(create_plcavebrick1_3020(6976, 1984), 3);
    add_background_object(create_plcavebrick1_3020(7104, 1728), 3);
    add_background_object(create_plcavebrick1_3020(7104, 1856), 3);
    add_background_object(create_plcavebrick1_3020(7104, 1984), 3);
    add_background_object(create_plcavebrick5_3017(6784, 1536), 3);
    add_background_object(create_plcavebrick4_3023(6752, 1536), 3);
    add_background_object(create_plcavebrick5_3017(6848, 1536), 3);
    add_background_object(create_plvine2_2941(6384, 1416), 3);
    add_background_object(create_plvine1_2938(6384, 1344), 3);
    add_background_object(create_plvine1_2938(6384, 1272), 3);
    add_background_object(create_plcavebrick8_3024(7040, 1696), 3);
    add_background_object(create_plcavebrick1_3020(7232, 1760), 3);
    add_background_object(create_plcavebrick1_3020(7232, 1888), 3);
    add_background_object(create_plcavebrick1_3020(7232, 2016), 3);
    add_background_object(create_plcavebrick8_3024(6848, 1728), 3);
    add_background_object(create_plcavebrick10_3029(7232, 1696), 3);
    add_background_object(create_plcavebrick1_3020(7360, 1760), 3);
    add_background_object(create_plcavebrick1_3020(7360, 1888), 3);
    add_background_object(create_plcavebrick1_3020(7360, 2016), 3);
    add_background_object(create_plcavebrick1_3020(7104, 2112), 3);
    add_background_object(create_plcavebrick1_3020(6976, 2112), 3);
    add_background_object(create_plcavebrick1_3020(7488, 1728), 3);
    add_background_object(create_plcavebrick1_3020(7488, 1856), 3);
    add_background_object(create_plcavebrick1_3020(7488, 1984), 3);
    add_background_object(create_plcavebrick1_3020(7488, 1600), 3);
    add_background_object(create_plcavebrick9_3028(7424, 1696), 3);
    add_background_object(create_plcavebrick1_3020(7616, 1696), 3);
    add_background_object(create_plcavebrick1_3020(7616, 1824), 3);
    add_background_object(create_plcavebrick1_3020(7616, 1568), 3);
    add_background_object(create_plcavebrick4_3023(7584, 1568), 3);
    add_background_object(create_plcavebrick1_3020(7744, 1664), 3);
    add_background_object(create_plcavebrick1_3020(7744, 1792), 3);
    add_background_object(create_plcavebrick1_3020(7744, 1536), 3);
    add_background_object(create_plcavebrick4_3023(7712, 1536), 3);
    add_background_object(create_plcavebrick1_3020(7616, 1952), 3);
    add_background_object(create_plcavebrick1_3020(7744, 1920), 3);
    add_background_object(create_plcavebrick1_3020(7872, 1632), 3);
    add_background_object(create_plcavebrick1_3020(7872, 1760), 3);
    add_background_object(create_plcavebrick4_3023(7840, 1504), 3);
    add_background_object(create_plcavebrick1_3020(7984, 1664), 3);
    add_background_object(create_plcavebrick1_3020(7984, 1792), 3);
    add_background_object(create_plcavebrick1_3020(7984, 1536), 3);
    add_background_object(create_plcavebrick1_3020(7984, 1280), 3);
    add_background_object(create_plcavebrick1_3020(7984, 1408), 3);
    add_background_object(create_plcavebrick1_3020(7984, 1152), 3);
    add_background_object(create_plcavebrick1_3020(6896, 992), 3);
    add_background_object(create_plcavebrick1_3020(6896, 1120), 3);
    add_background_object(create_plcavebrick1_3020(6896, 864), 3);
    add_background_object(create_plcavebrick1_3020(7024, 992), 3);
    add_background_object(create_plcavebrick1_3020(7024, 1120), 3);
    add_background_object(create_plcavebrick1_3020(7024, 864), 3);
    add_background_object(create_plcavebrick1_3020(7152, 992), 3);
    add_background_object(create_plcavebrick1_3020(7152, 1120), 3);
    add_background_object(create_plcavebrick1_3020(7152, 864), 3);
    add_background_object(create_plcavebrick1_3020(7280, 992), 3);
    add_background_object(create_plcavebrick1_3020(7280, 1120), 3);
    add_background_object(create_plcavebrick1_3020(7280, 864), 3);
    add_background_object(create_plcavebrick1_3020(7408, 1120), 3);
    add_background_object(create_plcavebrick1_3020(7536, 1120), 3);
    add_background_object(create_plcavebrick1_3020(7984, 1024), 3);
    add_background_object(create_plcavebrick1_3020(7984, 896), 3);
    add_background_object(create_plcavebrick2_3019(7952, 1408), 3);
    add_background_object(create_plcavebrick2_3019(7952, 1280), 3);
    add_background_object(create_plcavebrick2_3019(7952, 1152), 3);
    add_background_object(create_plcavebrick2_3019(7952, 1024), 3);
    add_background_object(create_plcavebrick2_3019(7952, 896), 3);
    add_background_object(create_plcavebrick3_3018(7408, 992), 3);
    add_background_object(create_plcavebrick5_3017(7664, 1120), 3);
    add_background_object(create_plcavebrick5_3017(7664, 1152), 3);
    add_background_object(create_plcavebrick5_3017(7664, 1184), 3);
    add_background_object(create_plcavebrick3_3018(7408, 864), 3);
    add_background_object(create_plcavebrick1_3020(7984, 736), 3);
    add_background_object(create_plcavebrick1_3020(7856, 768), 3);
    add_background_object(create_plcavebrick1_3020(7728, 768), 3);
    add_background_object(create_plcavebrick2_3019(7696, 768), 3);
    add_background_object(create_plcavebrick1_3020(7152, 736), 3);
    add_background_object(create_plcavebrick1_3020(7280, 736), 3);
    add_background_object(create_plcavebrick3_3018(7408, 736), 3);
    add_background_object(create_plcavebrick5_3017(7168, 1696), 3);
    add_background_object(create_plcavebrick6_3022(7728, 1184), 3);
    add_background_object(create_plcavebrick6_3022(7728, 1152), 3);
    add_background_object(create_plcavebrick6_3022(7728, 1120), 3);
    add_background_object(create_plcavebrick6_3022(6912, 1536), 3);
    add_background_object(create_plcavebrick1_3020(7872, 1504), 3);
    add_background_object(create_plcavebrick1_3020(8112, 1664), 3);
    add_background_object(create_plcavebrick1_3020(8112, 1792), 3);
    add_background_object(create_plcavebrick1_3020(8112, 1536), 3);
    add_background_object(create_plcavebrick1_3020(8112, 1280), 3);
    add_background_object(create_plcavebrick1_3020(8112, 1408), 3);
    add_background_object(create_plcavebrick1_3020(8112, 1152), 3);
    add_background_object(create_plcavebrick1_3020(8112, 1024), 3);
    add_background_object(create_plcavebrick1_3020(8112, 896), 3);
    add_background_object(create_plcavebrick1_3020(8112, 768), 3);
    add_background_object(create_plcavebrick1_3020(8240, 1664), 3);
    add_background_object(create_plcavebrick1_3020(8240, 1792), 3);
    add_background_object(create_plcavebrick1_3020(8240, 1536), 3);
    add_background_object(create_plcavebrick1_3020(8240, 1280), 3);
    add_background_object(create_plcavebrick1_3020(8240, 1408), 3);
    add_background_object(create_plcavebrick1_3020(8240, 1152), 3);
    add_background_object(create_plcavebrick1_3020(8240, 1024), 3);
    add_background_object(create_plcavebrick1_3020(8240, 896), 3);
    add_background_object(create_plcavebrick1_3020(8240, 768), 3);
    add_background_object(create_plcavebrick1_3020(7728, 640), 3);
    add_background_object(create_plcavebrick2_3019(7696, 640), 3);
    add_background_object(create_plcavebrick1_3020(7280, 608), 3);
    add_background_object(create_plcavebrick3_3018(7408, 608), 3);
    add_background_object(create_plcavebrick1_3020(7728, 512), 3);
    add_background_object(create_plcavebrick2_3019(7696, 512), 3);
    add_background_object(create_plcavebrick1_3020(7280, 480), 3);
    add_background_object(create_plcavebrick3_3018(7408, 480), 3);
    add_background_object(create_plcavebrick1_3020(7280, 352), 3);
    add_background_object(create_plcavebrick3_3018(7408, 352), 3);
    add_background_object(create_plcavebrick6_3022(7664, 1216), 3);
    add_background_object(create_plcavebrick1_3020(7984, 608), 3);
    add_background_object(create_plcavebrick1_3020(7856, 640), 3);
    add_background_object(create_plcavebrick1_3020(8112, 640), 3);
    add_background_object(create_plcavebrick1_3020(7920, 384), 3);
    add_background_object(create_plcavebrick1_3020(7152, 608), 3);
    add_background_object(create_plcavebrick1_3020(7152, 480), 3);
    add_background_object(create_plcavebrick1_3020(7152, 352), 3);
    add_background_object(create_plcavebrick5_3017(7408, 544), 3);
    add_background_object(create_plcavebrick6_3022(7472, 544), 3);
    add_background_object(create_plcavebrick5_3017(7664, 544), 3);
    add_background_object(create_plcavebrick4_3023(7632, 544), 3);
    add_background_object(create_plcavebrick1_3020(7280, 224), 3);
    add_background_object(create_plcavebrick3_3018(7408, 224), 3);
    add_background_object(create_plcavebrick1_3020(7152, 224), 3);
    add_background_object(create_plcavebrick1_3020(7280, 96), 3);
    add_background_object(create_plcavebrick1_3020(7152, 96), 3);
    add_background_object(create_plcavebrick1_3020(7280, -32), 3);
    add_background_object(create_plcavebrick1_3020(7152, -32), 3);
    add_background_object(create_plcavebrick1_3020(7536, -32), 3);
    add_background_object(create_plcavebrick1_3020(7408, -32), 3);
    add_background_object(create_plcavebrick1_3020(7664, -32), 3);
    add_background_object(create_plcavebrick1_3020(7792, -32), 3);
    add_background_object(create_plcavebrick1_3020(7920, -32), 3);
    add_background_object(create_plcavebrick1_3020(7536, 96), 3);
    add_background_object(create_plcavebrick1_3020(7408, 96), 3);
    add_background_object(create_plcavebrick1_3020(7664, 96), 3);
    add_background_object(create_plcavebrick1_3020(7792, 96), 3);
    add_background_object(create_plcavebrick1_3020(7920, 96), 3);
    add_background_object(create_plcavebrick5_3017(7664, 352), 3);
    add_background_object(create_plcavebrick6_3022(7696, 352), 3);
    add_background_object(create_plcavebrick4_3023(7632, 352), 3);
    add_background_object(create_plcavebrick5_3017(7632, 320), 3);
    add_background_object(create_plcavebrick6_3022(7696, 320), 3);
    add_background_object(create_plcavebrick4_3023(7632, 320), 3);
    add_background_object(create_plcavebrick5_3017(7664, 288), 3);
    add_background_object(create_plcavebrick6_3022(7696, 288), 3);
    add_background_object(create_plcavebrick4_3023(7632, 288), 3);
    add_background_object(create_plcavebrick5_3017(7856, 448), 3);
    add_background_object(create_plcavebrick5_3017(7856, 480), 3);
    add_background_object(create_plcavebrick12_3026(7792, 448), 3);
    add_background_object(create_plcavebrick12_3026(7856, 384), 3);
    add_background_object(create_plcavebrick1_3020(7856, 512), 3);
    add_background_object(create_plcavebrick1_3020(8048, 448), 3);
    add_background_object(create_plcavebrick1_3020(8176, 512), 3);
    add_background_object(create_plcavebrick5_3017(7984, 864), 3);
    add_background_object(create_plcavebrick5_3017(8048, 864), 3);
    add_background_object(create_plcavebrick5_3017(7984, 576), 3);
    add_background_object(create_plcavebrick5_3017(8048, 576), 3);
    add_background_object(create_plcavebrick5_3017(7984, 512), 3);
    add_background_object(create_plcavebrick5_3017(7984, 544), 3);
    add_background_object(create_plcavebrick5_3017(8112, 608), 3);
    add_background_object(create_plcavebrick5_3017(8112, 576), 3);
    add_background_object(create_plcavebrick1_3020(8048, -32), 3);
    add_background_object(create_plcavebrick1_3020(8176, -32), 3);
    add_background_object(create_plcavebrick1_3020(8304, -32), 3);
    add_background_object(create_plcavebrick1_3020(8048, 96), 3);
    add_background_object(create_plcavebrick1_3020(8176, 96), 3);
    add_background_object(create_plcavebrick1_3020(8304, 96), 3);
    add_background_object(create_plcavebrick6_3022(8048, 384), 3);
    add_background_object(create_plcavebrick6_3022(8048, 416), 3);
    add_background_object(create_plcavebrick6_3022(8176, 448), 3);
    add_background_object(create_plcavebrick6_3022(8176, 480), 3);
    add_background_object(create_plcavebrick5_3017(0, 288), 3);
    add_background_object(create_plcavebrick6_3022(64, 288), 3);
    add_background_object(create_plcavebrick1_3020(624, -64), 3);
    add_background_object(create_plcavebrick1_3020(496, -64), 3);
    add_background_object(create_plcavebrick1_3020(8304, 512), 3);
    add_background_object(create_plcavebrick1_3020(8240, 640), 3);
    add_background_object(create_plcavebrick1_3020(8368, 640), 3);
    add_background_object(create_plcavebrick1_3020(8432, -32), 3);
    add_background_object(create_plcavebrick1_3020(8560, 0), 3);
    add_background_object(create_plcavebrick1_3020(8688, 128), 3);
    add_background_object(create_plcavebrick1_3020(8432, 96), 3);
    add_background_object(create_plcavebrick1_3020(8560, 128), 3);
    add_background_object(create_plcavebrick1_3020(8816, 128), 3);
    add_background_object(create_plcavebrick1_3020(8944, 128), 3);
    add_background_object(create_plcavebrick1_3020(8560, 672), 3);
    add_background_object(create_plcavebrick1_3020(8688, 704), 3);
    add_background_object(create_plcavebrick7_3021(8560, 640), 3);
    add_background_object(create_plcavebrick7_3021(8688, 672), 3);
    add_background_object(create_plcavebrick1_3020(8560, 800), 3);
    add_background_object(create_plcavebrick1_3020(8688, 832), 3);
    add_background_object(create_plcavebrick1_3020(8816, 736), 3);
    add_background_object(create_plcavebrick1_3020(8944, 768), 3);
    add_background_object(create_plcavebrick7_3021(8816, 704), 3);
    add_background_object(create_plcavebrick7_3021(8944, 736), 3);
    add_background_object(create_plcavebrick1_3020(8816, 864), 3);
    add_background_object(create_plcavebrick1_3020(8944, 896), 3);
    add_background_object(create_plcavebrick4_3023(8528, 224), 3);
    add_background_object(create_plcavebrick1_3020(8944, 0), 3);
    add_background_object(create_plcavebrick1_3020(8816, 0), 3);
    add_background_object(create_plcavebrick1_3020(8688, 0), 3);
    add_background_object(create_plmask_2973(7648, 304), 3);
    add_background_object(create_plmask_2973(7664, 1136), 3);
    add_background_object(create_plcavebrick1_3020(0, 1408), 3);
    add_background_object(create_plcavebrick1_3020(128, 1408), 3);
    add_background_object(create_plcavebrick1_3020(256, 1408), 3);
    add_background_object(create_plcavebrick1_3020(384, 1408), 3);
    add_background_object(create_plcavebrick1_3020(512, 1408), 3);
    add_background_object(create_plcavebrick1_3020(640, 1408), 3);
    add_background_object(create_plcavebrick1_3020(768, 1408), 3);
    add_background_object(create_plcavebrick1_3020(896, 1408), 3);
    add_background_object(create_plcavebrick1_3020(1024, 1408), 3);
    add_background_object(create_plcavebrick1_3020(1152, 1408), 3);
    add_background_object(create_plcavebrick1_3020(1280, 1408), 3);
    add_background_object(create_plcavebrick1_3020(1408, 1408), 3);
    add_background_object(create_plcavebrick1_3020(1536, 1408), 3);
    add_background_object(create_plcavebrick1_3020(1664, 1408), 3);
    add_background_object(create_plcavebrick1_3020(1792, 1408), 3);
    add_background_object(create_plcavebrick1_3020(1920, 1408), 3);
    add_background_object(create_plcavebrick1_3020(2048, 1408), 3);
    add_background_object(create_plcavebrick1_3020(2176, 1408), 3);
    add_background_object(create_plcavebrick1_3020(2304, 1408), 3);
    add_background_object(create_plcavebrick1_3020(2432, 1408), 3);
    add_background_object(create_plcavebrick1_3020(2560, 1408), 3);
    add_background_object(create_plcavebrick1_3020(2688, 1408), 3);
    add_background_object(create_plcavebrick1_3020(2816, 1408), 3);
    add_background_object(create_plcavebrick1_3020(2944, 1408), 3);
    add_background_object(create_plcavebrick1_3020(3072, 1408), 3);
    add_background_object(create_plcavebrick1_3020(3200, 1440), 3);
    add_background_object(create_plcavebrick1_3020(3328, 1472), 3);
    add_background_object(create_plcavebrick1_3020(3456, 1504), 3);
    add_background_object(create_plcavebrick1_3020(3584, 1504), 3);
    add_background_object(create_plcavebrick1_3020(3712, 1504), 3);
    add_background_object(create_plcavebrick1_3020(3840, 1376), 3);
    add_background_object(create_plcavebrick1_3020(3968, 1376), 3);
    add_background_object(create_plcavebrick5_3017(8560, 512), 3);
    add_background_object(create_plcavebrick5_3017(8624, 512), 3);
    add_background_object(create_plcavebrick5_3017(8688, 512), 3);
    add_background_object(create_plcavebrick5_3017(8752, 512), 3);
    add_background_object(create_plcavebrick1_3020(8880, 512), 3);
    add_background_object(create_plcavebrick5_3017(8816, 512), 3);
    add_background_object(create_plcavebrick5_3017(8816, 544), 3);
    add_background_object(create_plcavebrick5_3017(8816, 576), 3);
    add_background_object(create_plcavebrick5_3017(8752, 544), 3);
    add_background_object(create_plcavebrick4_3023(8528, 512), 3);
    add_background_object(create_plcavebrick4_3023(8720, 544), 3);
    add_background_object(create_plcavebrick4_3023(8784, 576), 3);
    add_background_object(create_plcavebrick4_3023(8848, 608), 3);
    add_background_object(create_plcavebrick3_3018(8432, 512), 3);
    add_background_object(create_plcavebrick5_3017(8496, 640), 3);
    add_background_object(create_plcavebrick5_3017(8496, 672), 3);
    add_background_object(create_plcavebrick5_3017(8496, 704), 3);
    add_background_object(create_plcavebrick5_3017(8496, 736), 3);
    add_background_object(create_plcavebrick5_3017(8368, 768), 3);
    add_background_object(create_plcavebrick5_3017(8368, 800), 3);
    add_background_object(create_plcavebrick5_3017(8368, 832), 3);
    add_background_object(create_plcavebrick5_3017(8368, 864), 3);
    add_background_object(create_plcavebrick1_3020(8432, 768), 3);
    add_background_object(create_plcavebrick1_3020(9008, 512), 3);
    add_background_object(create_plcavebrick3_3018(9200, 256), 3);
    add_background_object(create_plcavebrick1_3020(9072, 128), 3);
    add_background_object(create_plcavebrick1_3020(9200, 128), 3);
    add_background_object(create_plcavebrick1_3020(9200, 0), 3);
    add_background_object(create_plcavebrick1_3020(9072, 0), 3);
    add_background_object(create_plcavebrick1_3020(9136, 512), 3);
    add_background_object(create_plcavebrick1_3020(9072, 768), 3);
    add_background_object(create_plcavebrick1_3020(9072, 896), 3);
    add_background_object(create_plcavebrick1_3020(9200, 768), 3);
    add_background_object(create_plcavebrick1_3020(9200, 896), 3);
    add_background_object(create_plcavebrick1_3020(9328, 768), 3);
    add_background_object(create_plcavebrick1_3020(9328, 896), 3);
    add_background_object(create_plcavebrick1_3020(9456, 768), 3);
    add_background_object(create_plcavebrick1_3020(9456, 896), 3);
    add_background_object(create_plcavebrick1_3020(9456, 512), 3);
    add_background_object(create_plcavebrick1_3020(9456, 640), 3);
    add_background_object(create_plcavebrick3_3018(9264, 512), 3);
    add_background_object(create_plcavebrick2_3019(9424, 512), 3);
    add_background_object(create_plcavebrick2_3019(9424, 640), 3);
    add_background_object(create_plcavebrick9_3028(9360, 704), 3);
    add_background_object(create_plcavebrick1_3020(9328, 128), 3);
    add_background_object(create_plcavebrick1_3020(9456, 128), 3);
    add_background_object(create_plcavebrick1_3020(9456, 0), 3);
    add_background_object(create_plcavebrick1_3020(9328, 0), 3);
    add_background_object(create_plcavebrick5_3017(9344, 384), 3);
    add_background_object(create_plcavebrick5_3017(9408, 384), 3);
    add_background_object(create_plcavebrick5_3017(9472, 384), 3);
    add_background_object(create_plcavebrick5_3017(9536, 384), 3);
    add_background_object(create_plcavebrick5_3017(9600, 384), 3);
    add_background_object(create_plcavebrick4_3023(9312, 384), 3);
    add_background_object(create_plcavebrick6_3022(9664, 384), 3);
    add_background_object(create_plcavebrick1_3020(9584, 128), 3);
    add_background_object(create_plcavebrick1_3020(9584, 0), 3);
    add_background_object(create_plcavebrick1_3020(9712, 128), 3);
    add_background_object(create_plcavebrick1_3020(9840, 128), 3);
    add_background_object(create_plcavebrick1_3020(9840, 0), 3);
    add_background_object(create_plcavebrick1_3020(9712, 0), 3);
    add_background_object(create_plcavebrick1_3020(9584, 512), 3);
    add_background_object(create_plcavebrick1_3020(9712, 512), 3);
    add_background_object(create_plcavebrick4_3023(8656, 352), 3);
    add_background_object(create_plcavebrick5_3017(8688, 352), 3);
    add_background_object(create_plcavebrick5_3017(8752, 352), 3);
    add_background_object(create_plcavebrick5_3017(8688, 320), 3);
    add_background_object(create_plcavebrick5_3017(8752, 320), 3);
    add_background_object(create_plcavebrick4_3023(8656, 320), 3);
    add_background_object(create_plcavebrick5_3017(8944, 352), 3);
    add_background_object(create_plcavebrick5_3017(9008, 352), 3);
    add_background_object(create_plcavebrick5_3017(8944, 320), 3);
    add_background_object(create_plcavebrick5_3017(9008, 320), 3);
    add_background_object(create_plcavebrick5_3017(9136, 352), 3);
    add_background_object(create_plcavebrick5_3017(9136, 320), 3);
    add_background_object(create_plcavebrick4_3023(9136, 288), 3);
    add_background_object(create_plcavebrick4_3023(9136, 256), 3);
    add_background_object(create_plcavebrick5_3017(9072, 352), 3);
    add_background_object(create_plcavebrick5_3017(9072, 320), 3);
    add_background_object(create_plcavebrick7_3021(3200, 1280), 3);
    add_background_object(create_plcavebrick7_3021(3328, 1312), 3);
    add_background_object(create_plcavebrick7_3021(3456, 1344), 3);
    add_background_object(create_plcavebrick3_3018(3648, 1056), 3);
    add_background_object(create_plcavebrick3_3018(3648, 928), 3);
    add_background_object(create_plcavebrick5_3017(3712, 896), 3);
    add_background_object(create_plcavebrick5_3017(3776, 896), 3);
    add_background_object(create_plcavebrick5_3017(3840, 896), 3);
    add_background_object(create_plcavebrick5_3017(3904, 896), 3);
    add_background_object(create_plcavebrick1_3020(3776, 1120), 3);
    add_background_object(create_plcavebrick1_3020(3776, 1248), 3);
    add_background_object(create_plcavebrick2_3019(3776, 1248), 3);
    add_background_object(create_plcavebrick2_3019(3776, 1120), 3);
    add_background_object(create_plcavebrick3_3018(3872, 1120), 3);
    add_background_object(create_plcavebrick5_3017(3904, 1312), 3);
    add_background_object(create_plcavebrick9_3028(3712, 1312), 3);
    add_background_object(create_plcavebrick5_3017(3904, 928), 3);
    add_background_object(create_plcavebrick5_3017(3648, 928), 3);
    add_background_object(create_plcavebrick6_3022(3712, 928), 3);
    add_background_object(create_plcavebrick4_3023(3872, 928), 3);
    add_background_object(create_plcavebrick2_3019(3968, 960), 3);
    add_background_object(create_plcavebrick4_3023(3968, 1088), 3);
    add_background_object(create_plcavebrick4_3023(3968, 1120), 3);
    add_background_object(create_plcavebrick11_3025(3904, 1248), 3);
    add_background_object(create_plcavebrick11_3025(3968, 1312), 3);
    add_background_object(create_plcavebrick5_3017(3904, 1344), 3);
    add_background_object(create_plcavebrick1_3020(3840, 1504), 3);
    add_background_object(create_plcavebrick1_3020(4064, 1504), 3);
    add_background_object(create_plcavebrick4_3023(4064, 1152), 3);
    add_background_object(create_plcavebrick4_3023(4192, 1184), 3);
    add_background_object(create_plcavebrick2_3019(4448, 1408), 3);
    add_background_object(create_plcavebrick3_3018(4224, 1376), 3);
    add_background_object(create_plcavebrick3_3018(4192, 1504), 3);
    add_background_object(create_plcavebrick1_3020(4096, 1632), 3);
    add_background_object(create_plcavebrick1_3020(3968, 1632), 3);
    add_background_object(create_plcavebrick1_3020(4096, 1760), 3);
    add_background_object(create_plcavebrick1_3020(3968, 1760), 3);
    add_background_object(create_plcavebrick1_3020(4352, 1632), 3);
    add_background_object(create_plcavebrick1_3020(4224, 1632), 3);
    add_background_object(create_plcavebrick1_3020(4352, 1760), 3);
    add_background_object(create_plcavebrick1_3020(4224, 1760), 3);
    add_background_object(create_plcavebrick5_3017(4608, 1504), 3);
    add_background_object(create_plcavebrick5_3017(4672, 1504), 3);
    add_background_object(create_plcavebrick5_3017(4480, 1376), 3);
    add_background_object(create_plcavebrick5_3017(4544, 1376), 3);
    add_background_object(create_plcavebrick4_3023(4448, 1376), 3);
    add_background_object(create_plcavebrick9_3028(4544, 1312), 3);
    add_background_object(create_plcavebrick13_3042(4544, 1216), 3);
    add_background_object(create_plcavebrick4_3023(4192, 1216), 3);
    add_background_object(create_plcavebrick5_3017(4224, 1216), 3);
    add_background_object(create_plcavebrick6_3022(4288, 1216), 3);
    add_background_object(create_plcavebrick1_3020(4480, 1664), 3);
    add_background_object(create_plcavebrick7_3021(4480, 1632), 3);
    add_background_object(create_plcavebrick1_3020(3840, 1632), 3);
    add_background_object(create_plcavebrick1_3020(3840, 1760), 3);
    add_background_object(create_plcavebrick1_3020(4480, 1792), 3);
    add_background_object(create_plcavebrick1_3020(4608, 1792), 3);
    add_background_object(create_plcavebrick1_3020(4352, 1888), 3);
    add_background_object(create_plcavebrick1_3020(4480, 1920), 3);
    add_background_object(create_plcavebrick1_3020(4608, 1920), 3);
    add_background_object(create_plcavebrick3_3018(4608, 1664), 3);
    add_background_object(create_plcavebrick1_3020(4224, 1888), 3);
    add_background_object(create_plcavebrick1_3020(4736, 1792), 3);
    add_background_object(create_plcavebrick1_3020(4864, 1792), 3);
    add_background_object(create_plcavebrick1_3020(4736, 1920), 3);
    add_background_object(create_plcavebrick1_3020(4864, 1920), 3);
    add_background_object(create_plcavebrick2_3019(4768, 1536), 3);
    add_background_object(create_plcavebrick5_3017(4160, 1504), 3);
    add_background_object(create_plcavebrick6_3022(4224, 1504), 3);
    add_background_object(create_plcavebrick5_3017(5568, 1472), 3);
    add_background_object(create_plcavebrick5_3017(5632, 1472), 3);
    add_background_object(create_plcavebrick5_3017(5440, 1472), 3);
    add_background_object(create_plcavebrick5_3017(5504, 1472), 3);
    add_background_object(create_plcavebrick2_3019(5664, 1600), 3);
    add_background_object(create_plcavebrick2_3019(5664, 1728), 3);
    add_background_object(create_plcavebrick2_3019(5664, 1856), 3);
    add_background_object(create_plcavebrick3_3018(5440, 1600), 3);
    add_background_object(create_plcavebrick3_3018(5440, 1728), 3);
    add_background_object(create_plrunestone_2992(7736, 1040), 3);
    add_background_object(create_plrunestone_2992(5664, 1520), 3);
    add_background_object(create_lightray1_659(4832, 640), 3);
    add_background_object(create_lightray1_659(4816, 672), 3);
    add_background_object(create_lightray2_666(4800, 704), 3);
    add_background_object(create_lightray1_659(4656, 640), 3);
    add_background_object(create_lightray2_666(4640, 672), 3);
    add_background_object(create_plcavebrick1_3020(5376, 2048), 3);
    add_background_object(create_plcavebrick1_3020(4864, 2048), 3);
    add_background_object(create_plcavebrick1_3020(4992, 2048), 3);
    add_background_object(create_plcavebrick1_3020(5504, 2048), 3);
    add_background_object(create_plcavebrick1_3020(5120, 2048), 3);
    add_background_object(create_plcavebrick1_3020(5248, 2048), 3);
    add_background_object(create_plcavebrick1_3020(5696, 1984), 3);
    add_background_object(create_plcavebrick1_3020(5760, 2048), 3);
    add_background_object(create_plcavebrick1_3020(5632, 2048), 3);
    add_background_object(create_plcavebrick1_3020(5888, 2048), 3);
    add_background_object(create_plcavebrick1_3020(5312, 1856), 3);
    add_background_object(create_plcavebrick3_3018(5440, 1856), 3);
    add_background_object(create_plcavebrick2_3019(5280, 1728), 3);
    add_background_object(create_plcavebrick2_3019(5280, 1856), 3);
    add_background_object(create_plcavebrick3_3018(4992, 1792), 3);
    add_background_object(create_plcavebrick3_3018(4992, 1920), 3);
    add_background_object(create_plcavebrick1_3020(4736, 2048), 3);
    add_background_object(create_plcavebrick4_3023(5024, 1696), 3);
    add_background_object(create_plcavebrick4_3023(5024, 1664), 3);
    add_background_object(create_plcavebrick1_3020(4608, 2048), 3);
    add_background_object(create_plcavebrick1_3020(2160, 544), 3);
    add_background_object(create_plcavebrick2_3019(2160, 544), 3);
    add_background_object(create_plcavebrick3_3018(2256, 544), 3);
    add_background_object(create_plcavebrick1_3020(2160, 672), 3);
    add_background_object(create_plcavebrick2_3019(2160, 672), 3);
    add_background_object(create_plcavebrick3_3018(2256, 672), 3);
    add_background_object(create_plcavebrick1_3020(2160, 800), 3);
    add_background_object(create_plcavebrick2_3019(2160, 800), 3);
    add_background_object(create_plcavebrick3_3018(2256, 800), 3);
    add_background_object(create_plcavebrick1_3020(2160, 928), 3);
    add_background_object(create_plcavebrick2_3019(2160, 928), 3);
    add_background_object(create_plcavebrick3_3018(2256, 928), 3);
    add_background_object(create_plcavebrick4_3023(8912, 352), 3);
    add_background_object(create_plcavebrick4_3023(8912, 320), 3);
    add_background_object(create_plcavebrick6_3022(8816, 320), 3);
    add_background_object(create_plcavebrick6_3022(8816, 352), 3);
    add_background_object(create_plmask_2973(2192, 528), 3);
    add_background_object(create_plmask_2973(2192, 976), 3);
    add_background_object(create_signwarning_1028(128, 728), 3);
    add_background_object(create_plvine1_2938(6232, 1304), 3);
    add_background_object(create_plvine2_2941(6232, 1520), 3);
    add_background_object(create_plvine1_2938(6232, 1448), 3);
    add_background_object(create_plvine1_2938(6232, 1376), 3);
    add_background_object(create_plvine2_2941(6304, 1312), 3);
    add_background_object(create_plvine1_2938(7552, 352), 3);
    add_background_object(create_plvine2_2941(7552, 568), 3);
    add_background_object(create_plvine1_2938(7552, 496), 3);
    add_background_object(create_plvine1_2938(7552, 424), 3);
    add_background_object(create_plvine1_2938(7552, 280), 3);
    add_background_object(create_plvine2_2941(9256, 376), 3);
    add_background_object(create_plvine1_2938(9256, 304), 3);
    add_background_object(create_plcavebrick3_3018(9840, 512), 3);
    add_background_object(create_plcavebrick4_3023(9984, 512), 3);
    add_background_object(create_plcavebrick6_3022(10016, 512), 3);
    add_background_object(create_plspinballchain_3027(10000, 512), 3);
    add_background_object(create_plcavebrick1_3020(9584, 640), 3);
    add_background_object(create_plcavebrick1_3020(9712, 640), 3);
    add_background_object(create_plcavebrick1_3020(9584, 768), 3);
    add_background_object(create_plcavebrick1_3020(9584, 896), 3);
    add_background_object(create_plcavebrick1_3020(9712, 768), 3);
    add_background_object(create_plcavebrick1_3020(9712, 896), 3);
    add_background_object(create_plcavebrick1_3020(9840, 768), 3);
    add_background_object(create_plcavebrick1_3020(9840, 896), 3);
    add_background_object(create_plcavebrick1_3020(9840, 640), 3);
    add_background_object(create_plcavebrick1_3020(10096, 640), 3);
    add_background_object(create_plcavebrick1_3020(10096, 768), 3);
    add_background_object(create_plcavebrick1_3020(10096, 896), 3);
    add_background_object(create_plcavebrick1_3020(9968, 128), 3);
    add_background_object(create_plcavebrick1_3020(9968, 0), 3);
    add_background_object(create_plcavebrick1_3020(10096, 128), 3);
    add_background_object(create_plcavebrick1_3020(10224, 128), 3);
    add_background_object(create_plcavebrick1_3020(10224, 0), 3);
    add_background_object(create_plcavebrick1_3020(10096, 0), 3);
    add_background_object(create_plcavebrick1_3020(10736, 128), 3);
    add_background_object(create_plcavebrick1_3020(10736, 0), 3);
    add_background_object(create_plcavebrick1_3020(10256, 512), 3);
    add_background_object(create_plcavebrick1_3020(10224, 384), 3);
    add_background_object(create_plcavebrick1_3020(10224, 640), 3);
    add_background_object(create_plcavebrick1_3020(10480, 672), 3);
    add_background_object(create_plcavebrick1_3020(10480, 800), 3);
    add_background_object(create_plcavebrick1_3020(10224, 768), 3);
    add_background_object(create_plcavebrick1_3020(10480, 928), 3);
    add_background_object(create_plcavebrick1_3020(10224, 896), 3);
    add_background_object(create_plcavebrick1_3020(10480, 1056), 3);
    add_background_object(create_plcavebrick2_3019(10192, 384), 3);
    add_background_object(create_plcavebrick2_3019(10256, 512), 3);
    add_background_object(create_plcavebrick1_3020(9968, 640), 3);
    add_background_object(create_plcavebrick1_3020(9968, 768), 3);
    add_background_object(create_plcavebrick1_3020(9968, 896), 3);
    add_background_object(create_plcavebrick1_3020(10864, 128), 3);
    add_background_object(create_plcavebrick1_3020(10864, 0), 3);
    add_background_object(create_plcavebrick1_3020(10992, 128), 3);
    add_background_object(create_plcavebrick1_3020(10992, 0), 3);
    add_background_object(create_plcavebrick11_3025(10608, 672), 3);
    add_background_object(create_plcavebrick7_3021(10480, 640), 3);
    add_background_object(create_plcavebrick11_3025(10672, 736), 3);
    add_background_object(create_plcavebrick11_3025(10736, 800), 3);
    add_background_object(create_plcavebrick11_3025(10800, 864), 3);
    add_background_object(create_plcavebrick11_3025(10864, 928), 3);
    add_background_object(create_plcavebrick11_3025(10928, 992), 3);
    add_background_object(create_plcavebrick11_3025(10992, 1056), 3);
    add_background_object(create_plcavebrick11_3025(11056, 1120), 3);
    add_background_object(create_plcavebrick11_3025(11120, 1184), 3);
    add_background_object(create_plcavebrick1_3020(10352, 128), 3);
    add_background_object(create_plcavebrick1_3020(10480, 128), 3);
    add_background_object(create_plcavebrick1_3020(10480, 0), 3);
    add_background_object(create_plcavebrick1_3020(10352, 0), 3);
    add_background_object(create_plcavebrick1_3020(10608, 128), 3);
    add_background_object(create_plcavebrick1_3020(10608, 0), 3);
    add_background_object(create_plcavebrick1_3020(10352, 640), 3);
    add_background_object(create_plcavebrick4_3023(10416, 352), 3);
    add_background_object(create_plcavebrick6_3022(10448, 352), 3);
    add_background_object(create_plspinballchain_3027(10432, 352), 3);
    add_background_object(create_plcavebrick5_3017(10352, 384), 3);
    add_background_object(create_plcavebrick5_3017(10416, 384), 3);
    add_background_object(create_plcavebrick5_3017(10480, 384), 3);
    add_background_object(create_plcavebrick1_3020(10736, 256), 3);
    add_background_object(create_plcavebrick6_3022(10544, 384), 3);
    add_background_object(create_plcavebrick1_3020(10736, 384), 3);
    add_background_object(create_plcavebrick5_3017(10672, 480), 3);
    add_background_object(create_plcavebrick2_3019(10704, 256), 3);
    add_background_object(create_plcavebrick5_3017(10608, 480), 3);
    add_background_object(create_plcavebrick5_3017(10544, 480), 3);
    add_background_object(create_plcavebrick3_3018(10352, 512), 3);
    add_background_object(create_plcavebrick5_3017(10488, 480), 3);
    add_background_object(create_plcavebrick4_3023(10456, 480), 3);
    add_background_object(create_plcavebrick1_3020(10352, 768), 3);
    add_background_object(create_plcavebrick1_3020(10352, 896), 3);
    add_background_object(create_plcavebrick1_3020(10352, 1024), 3);
    add_background_object(create_plcavebrick1_3020(10608, 800), 3);
    add_background_object(create_plcavebrick1_3020(10608, 928), 3);
    add_background_object(create_plcavebrick1_3020(10608, 1056), 3);
    add_background_object(create_plcavebrick5_3017(10608, 736), 3);
    add_background_object(create_plcavebrick5_3017(10608, 768), 3);
    add_background_object(create_plcavebrick1_3020(10736, 928), 3);
    add_background_object(create_plcavebrick1_3020(10736, 1056), 3);
    add_background_object(create_plcavebrick1_3020(10736, 1184), 3);
    add_background_object(create_plcavebrick5_3017(10736, 864), 3);
    add_background_object(create_plcavebrick5_3017(10736, 896), 3);
    add_background_object(create_plcavebrick1_3020(10864, 1056), 3);
    add_background_object(create_plcavebrick1_3020(10864, 1184), 3);
    add_background_object(create_plcavebrick1_3020(10864, 1312), 3);
    add_background_object(create_plcavebrick5_3017(10864, 992), 3);
    add_background_object(create_plcavebrick5_3017(10864, 1024), 3);
    add_background_object(create_plcavebrick1_3020(10992, 1184), 3);
    add_background_object(create_plcavebrick1_3020(10992, 1312), 3);
    add_background_object(create_plcavebrick1_3020(10992, 1440), 3);
    add_background_object(create_plcavebrick5_3017(10992, 1120), 3);
    add_background_object(create_plcavebrick5_3017(10992, 1152), 3);
    add_background_object(create_plcavebrick1_3020(11120, 1312), 3);
    add_background_object(create_plcavebrick1_3020(11120, 1440), 3);
    add_background_object(create_plcavebrick1_3020(11120, 1568), 3);
    add_background_object(create_plcavebrick5_3017(11120, 1248), 3);
    add_background_object(create_plcavebrick5_3017(11120, 1280), 3);
    add_background_object(create_plcavebrick11_3025(11184, 1248), 3);
    add_background_object(create_plcavebrick1_3020(10736, 512), 3);
    add_background_object(create_plcavebrick5_3017(10640, 512), 3);
    add_background_object(create_plcavebrick5_3017(10672, 544), 3);
    add_background_object(create_plcavebrick4_3023(10608, 512), 3);
    add_background_object(create_plcavebrick4_3023(10640, 544), 3);
    add_background_object(create_plcavebrick4_3023(10672, 576), 3);
    add_background_object(create_plcavebrick4_3023(10704, 608), 3);
    add_background_object(create_plcavebrick1_3020(10864, 512), 3);
    add_background_object(create_plcavebrick1_3020(10864, 640), 3);
    add_background_object(create_plcavebrick5_3017(10800, 672), 3);
    add_background_object(create_plcavebrick4_3023(10768, 672), 3);
    add_background_object(create_plcavebrick4_3023(10800, 704), 3);
    add_background_object(create_plcavebrick4_3023(10832, 736), 3);
    add_background_object(create_plcavebrick5_3017(10768, 640), 3);
    add_background_object(create_plcavebrick4_3023(10736, 640), 3);
    add_background_object(create_plcavebrick5_3017(10704, 512), 3);
    add_background_object(create_plcavebrick5_3017(10960, 768), 3);
    add_background_object(create_plcavebrick5_3017(10960, 832), 3);
    add_background_object(create_plcavebrick1_3020(10992, 768), 3);
    add_background_object(create_plcavebrick5_3017(10928, 800), 3);
    add_background_object(create_plcavebrick4_3023(10896, 800), 3);
    add_background_object(create_plcavebrick4_3023(10928, 832), 3);
    add_background_object(create_plcavebrick4_3023(10960, 864), 3);
    add_background_object(create_plcavebrick5_3017(10896, 768), 3);
    add_background_object(create_plcavebrick4_3023(10864, 768), 3);
    add_background_object(create_plcavebrick1_3020(10992, 640), 3);
    add_background_object(create_plcavebrick1_3020(11120, 768), 3);
    add_background_object(create_plcavebrick5_3017(11088, 896), 3);
    add_background_object(create_plcavebrick5_3017(11088, 960), 3);
    add_background_object(create_plcavebrick1_3020(11120, 896), 3);
    add_background_object(create_plcavebrick5_3017(11056, 928), 3);
    add_background_object(create_plcavebrick4_3023(11024, 928), 3);
    add_background_object(create_plcavebrick4_3023(11056, 960), 3);
    add_background_object(create_plcavebrick4_3023(11088, 992), 3);
    add_background_object(create_plcavebrick5_3017(11024, 896), 3);
    add_background_object(create_plcavebrick4_3023(10992, 896), 3);
    add_background_object(create_plcavebrick5_3017(11216, 1024), 3);
    add_background_object(create_plcavebrick5_3017(11216, 1088), 3);
    add_background_object(create_plcavebrick1_3020(11248, 1024), 3);
    add_background_object(create_plcavebrick5_3017(11184, 1056), 3);
    add_background_object(create_plcavebrick4_3023(11152, 1056), 3);
    add_background_object(create_plcavebrick4_3023(11184, 1088), 3);
    add_background_object(create_plcavebrick4_3023(11216, 1120), 3);
    add_background_object(create_plcavebrick5_3017(11152, 1024), 3);
    add_background_object(create_plcavebrick4_3023(11120, 1024), 3);
    add_background_object(create_plcavebrick1_3020(11248, 896), 3);
    add_background_object(create_plcavebrick5_3017(11344, 1152), 3);
    add_background_object(create_plcavebrick5_3017(11344, 1216), 3);
    add_background_object(create_plcavebrick5_3017(11312, 1184), 3);
    add_background_object(create_plcavebrick4_3023(11280, 1184), 3);
    add_background_object(create_plcavebrick4_3023(11312, 1216), 3);
    add_background_object(create_plcavebrick4_3023(11344, 1248), 3);
    add_background_object(create_plcavebrick5_3017(11280, 1152), 3);
    add_background_object(create_plcavebrick4_3023(11248, 1152), 3);
    add_background_object(create_plcavebrick11_3025(11248, 1312), 3);
    add_background_object(create_plcavebrick1_3020(11248, 1440), 3);
    add_background_object(create_plcavebrick1_3020(11248, 1568), 3);
    add_background_object(create_plcavebrick1_3020(11248, 1696), 3);
    add_background_object(create_plcavebrick5_3017(11248, 1376), 3);
    add_background_object(create_plcavebrick5_3017(11248, 1408), 3);
    add_background_object(create_plcavebrick11_3025(11312, 1376), 3);
    add_background_object(create_plcavebrick5_3017(11376, 1504), 3);
    add_background_object(create_plcavebrick5_3017(11440, 1504), 3);
    add_background_object(create_plcavebrick1_3020(10864, 256), 3);
    add_background_object(create_plcavebrick1_3020(10864, 384), 3);
    add_background_object(create_plcavebrick1_3020(10992, 512), 3);
    add_background_object(create_plcavebrick1_3020(10992, 256), 3);
    add_background_object(create_plcavebrick1_3020(10992, 384), 3);
    add_background_object(create_plcavebrick1_3020(11120, 128), 3);
    add_background_object(create_plcavebrick1_3020(11120, 0), 3);
    add_background_object(create_plcavebrick1_3020(11120, 640), 3);
    add_background_object(create_plcavebrick1_3020(11120, 512), 3);
    add_background_object(create_plcavebrick1_3020(11120, 256), 3);
    add_background_object(create_plcavebrick1_3020(11120, 384), 3);
    add_background_object(create_plcavebrick1_3020(11248, 128), 3);
    add_background_object(create_plcavebrick1_3020(11248, 0), 3);
    add_background_object(create_plcavebrick1_3020(11248, 640), 3);
    add_background_object(create_plcavebrick1_3020(11248, 512), 3);
    add_background_object(create_plcavebrick1_3020(11248, 256), 3);
    add_background_object(create_plcavebrick1_3020(11248, 384), 3);
    add_background_object(create_plcavebrick1_3020(11248, 768), 3);
    add_background_object(create_plcavebrick1_3020(10736, 1312), 3);
    add_background_object(create_plcavebrick1_3020(10864, 1440), 3);
    add_background_object(create_plcavebrick1_3020(10992, 1568), 3);
    add_background_object(create_plcavebrick1_3020(11120, 1696), 3);
    add_background_object(create_plcavebrick1_3020(11248, 1824), 3);
    add_background_object(create_plcavebrick1_3020(10736, 1440), 3);
    add_background_object(create_plcavebrick1_3020(10864, 1568), 3);
    add_background_object(create_plcavebrick1_3020(10992, 1696), 3);
    add_background_object(create_plcavebrick1_3020(11120, 1824), 3);
    add_background_object(create_plcavebrick1_3020(10736, 1568), 3);
    add_background_object(create_plcavebrick1_3020(10864, 1696), 3);
    add_background_object(create_plcavebrick1_3020(10992, 1824), 3);
    add_background_object(create_plcavebrick1_3020(10736, 1696), 3);
    add_background_object(create_plcavebrick1_3020(10864, 1824), 3);
    add_background_object(create_plcavebrick1_3020(10736, 1824), 3);
    add_background_object(create_plcavebrick1_3020(11248, 1952), 3);
    add_background_object(create_plcavebrick1_3020(11120, 1952), 3);
    add_background_object(create_plcavebrick1_3020(11248, 2080), 3);
    add_background_object(create_plcavebrick1_3020(10992, 1952), 3);
    add_background_object(create_plcavebrick1_3020(11120, 2080), 3);
    add_background_object(create_plcavebrick1_3020(10864, 1952), 3);
    add_background_object(create_plcavebrick1_3020(10992, 2080), 3);
    add_background_object(create_plcavebrick1_3020(10736, 1952), 3);
    add_background_object(create_plcavebrick1_3020(10864, 2080), 3);
    add_background_object(create_plcavebrick1_3020(10736, 2080), 3);
    add_background_object(create_plcavebrick1_3020(10608, 1184), 3);
    add_background_object(create_plcavebrick5_3017(9840, 608), 3);
    add_background_object(create_plcavebrick6_3022(9904, 608), 3);
    add_background_object(create_plmask_2973(10288, 544), 3);
    add_background_object(create_plmask_2973(10656, 496), 3);
    add_background_object(create_plcavebrick11_3025(11376, 1440), 3);
    add_background_object(create_plcavebrick5_3017(11504, 1504), 3);
    add_background_object(create_plcavebrick5_3017(11376, 1536), 3);
    add_background_object(create_plcavebrick5_3017(11440, 1536), 3);
    add_background_object(create_plcavebrick5_3017(11504, 1536), 3);
    add_object(create_monitorkeystone_562(9872, 576), 3);
    add_object(create_gimmickspinballchain_3030(10060, 516), 3);
    add_object(create_gimmickspinballchain2_3031(10084, 516), 3);
    add_object(create_gimmickspinballchain3_3032(10060, 540), 3);
    add_object(create_gimmickspinballchain4_3033(10084, 540), 3);
    add_object(create_playerstartingpoint_358(53, 749), 3);
    add_object(create_enemysleepgas_2889(-200, 888), 3);
    add_object(create_gimmickbridgelog_2339(-440, 904), 3);
    add_object(create_gimmickbridge12logs_353(-520, 760), 3);
    add_object(create_objectcyclonetop_2963(-504, 904), 3);
    add_object(create_objecttimegatepiece_2966(-343, 1337), 3);
    add_object(create_gimmickbowarrow_2979(5808, 1392), 3);
    add_object(create_layerchangeswitch_404(7504, -144), 3);
    add_object(create_enemyterreonleftshoulder_2981(1308, 1252), 3);
    add_object(create_enemyterreonrightshoulder_2982(1356, 1252), 3);
    add_object(create_enemyterreonleftleg_2983(1291, 1246), 3);
    add_object(create_enemyterreonrightleg_2984(1372, 1246), 3);
    add_object(create_enemyterreon_2985(1331, 1246), 3);
    add_object(create_effectterreonwarning_2986(1332, 1192), 3);
    add_object(create_layerchangeswitch2_1239(7304, -128), 3);
    add_object(create_breakableplrock_2987(-440, 1464), 3);
    add_object(create_gimmickhangingidlesensor_740(553, -104), 3);
    add_object(create_objectvanishingblock_3034(192, 768), 3);
    add_object(create_gimmickbreakoutwallright_3036(3216, 352), 3);
    add_object(create_gimmickbreakoutwallright_3036(3216, 224), 3);
    add_object(create_gimmickbreakoutplatform_3037(3121, 398), 3);
    add_object(create_gimmickbreakoutplatformmask_3038(3120, 396), 3);
    add_object(create_gimmickbreakoutball_3039(3120, 344), 3);
    add_object(create_gimmickbreakoutwallleft_3040(3023, 352), 3);
    add_object(create_gimmickbreakoutwallleft_3040(3023, 224), 3);
    add_object(create_objectvanishingblock_3034(224, 768), 3);
    add_object(create_objectvanishingblock_3034(256, 768), 3);
    add_object(create_objectvanishingblock_3034(256, 736), 3);
    add_object(create_objectvanishingblock_3034(256, 704), 3);
    add_object(create_objectvanishingblock_3034(256, 672), 3);
    add_object(create_objectvanishingblock_3034(288, 672), 3);
    add_object(create_objectvanishingblock_3034(320, 672), 3);
    add_object(create_objectvanishingblock_3034(352, 672), 3);
    add_object(create_objectvanishingblock_3034(512, 640), 3);
    add_object(create_objectvanishingblock_3034(480, 640), 3);
    add_object(create_objectvanishingblock_3034(448, 608), 3);
    add_object(create_objectvanishingblock_3034(416, 576), 3);
    add_object(create_objectvanishingblock_3034(384, 544), 3);
    add_object(create_objectvanishingblock_3034(352, 512), 3);
    add_object(create_objectvanishingblock_3034(352, 704), 3);
    add_object(create_objectvanishingblock_3034(352, 736), 3);
    add_object(create_objectvanishingblock_3034(352, 768), 3);
    add_object(create_objectvanishingblock_3034(384, 768), 3);
    add_object(create_objectvanishingblock_3034(416, 768), 3);
    add_object(create_objectvanishingblock_3034(448, 768), 3);
    add_object(create_objectvanishingblock_3034(480, 768), 3);
    add_object(create_objectvanishingblock_3034(512, 768), 3);
    add_object(create_objectvanishingblock_3034(544, 768), 3);
    add_object(create_objectvanishingblock_3034(576, 768), 3);
    add_object(create_objectvanishingblock_3034(608, 768), 3);
    add_object(create_objectvanishingblock_3034(640, 768), 3);
    add_object(create_objectvanishingblock_3034(640, 736), 3);
    add_object(create_objectvanishingblock_3034(608, 736), 3);
    add_object(create_objectvanishingblock_3034(608, 704), 3);
    add_object(create_objectvanishingblock_3034(640, 704), 3);
    add_object(create_objectvanishingblock_3034(608, 544), 3);
    add_object(create_objectvanishingblock_3034(640, 544), 3);
    add_object(create_objectvanishingblock_3034(640, 512), 3);
    add_object(create_objectvanishingblock_3034(672, 512), 3);
    add_object(create_objectvanishingblock_3034(672, 480), 3);
    add_object(create_objectvanishingblock_3034(704, 480), 3);
    add_object(create_objectvanishingblock_3034(928, 480), 3);
    add_object(create_objectvanishingblock_3034(960, 480), 3);
    add_object(create_objectvanishingblock_3034(960, 448), 3);
    add_object(create_objectvanishingblock_3034(960, 512), 3);
    add_object(create_objectvanishingblock_3034(992, 448), 3);
    add_object(create_objectvanishingblock_3034(992, 512), 3);
    add_object(create_objectvanishingblock_3034(992, 416), 3);
    add_object(create_objectvanishingblock_3034(992, 544), 3);
    add_object(create_objectvanishingblock_3034(1024, 416), 3);
    add_object(create_objectvanishingblock_3034(1024, 544), 3);
    add_object(create_objectvanishingblock_3034(1024, 384), 3);
    add_object(create_objectvanishingblock_3034(1024, 576), 3);
    add_object(create_objectvanishingblock_3034(1056, 384), 3);
    add_object(create_objectvanishingblock_3034(1056, 576), 3);
    add_object(create_objectvanishingblock_3034(1056, 352), 3);
    add_object(create_objectvanishingblock_3034(1056, 608), 3);
    add_object(create_objectvanishingblock_3034(1088, 608), 3);
    add_object(create_objectvanishingblock_3034(1088, 352), 3);
    add_object(create_objectvanishingblock_3034(1120, 352), 3);
    add_object(create_objectvanishingblock_3034(1152, 352), 3);
    add_object(create_objectvanishingblock_3034(1184, 352), 3);
    add_object(create_objectvanishingblock_3034(1216, 352), 3);
    add_object(create_objectvanishingblock_3034(1248, 352), 3);
    add_object(create_objectvanishingblock_3034(1248, 320), 3);
    add_object(create_objectvanishingblock_3034(1248, 288), 3);
    add_object(create_objectvanishingblock_3034(1248, 256), 3);
    add_object(create_objectvanishingblock_3034(1248, 224), 3);
    add_object(create_objectvanishingblock_3034(1216, 224), 3);
    add_object(create_objectvanishingblock_3034(1184, 224), 3);
    add_object(create_objectvanishingblock_3034(1152, 224), 3);
    add_object(create_objectvanishingblock_3034(1152, 256), 3);
    add_object(create_objectvanishingblock_3034(1152, 288), 3);
    add_object(create_objectvanishingblock_3034(1152, 320), 3);
    add_object(create_objectvanishingblock_3034(1120, 608), 3);
    add_object(create_objectvanishingblock_3034(1152, 608), 3);
    add_object(create_objectvanishingblock_3034(1184, 608), 3);
    add_object(create_objectvanishingblock_3034(1216, 608), 3);
    add_object(create_objectvanishingblock_3034(1248, 608), 3);
    add_object(create_objectvanishingblock_3034(1248, 576), 3);
    add_object(create_objectvanishingblock_3034(1280, 608), 3);
    add_object(create_objectvanishingblock_3034(1280, 544), 3);
    add_object(create_objectvanishingblock_3034(1312, 608), 3);
    add_object(create_objectvanishingblock_3034(1312, 512), 3);
    add_object(create_objectvanishingblock_3034(1344, 608), 3);
    add_object(create_objectvanishingblock_3034(1344, 480), 3);
    add_object(create_objectvanishingblock_3034(1376, 608), 3);
    add_object(create_objectvanishingblock_3034(1376, 512), 3);
    add_object(create_objectvanishingblock_3034(1408, 608), 3);
    add_object(create_objectvanishingblock_3034(1408, 544), 3);
    add_object(create_objectvanishingblock_3034(1440, 608), 3);
    add_object(create_objectvanishingblock_3034(1440, 576), 3);
    add_object(create_objectvanishingblock_3034(1472, 608), 3);
    add_object(create_objectvanishingblock_3034(1504, 608), 3);
    add_object(create_objectvanishingblock_3034(1536, 608), 3);
    add_object(create_objectvanishingblock_3034(1568, 608), 3);
    add_object(create_objectvanishingblock_3034(1600, 608), 3);
    add_object(create_objectvanishingblock_3034(1696, 512), 3);
    add_object(create_objectvanishingblock_3034(1696, 640), 3);
    add_object(create_objectvanishingblock_3034(1728, 512), 3);
    add_object(create_objectvanishingblock_3034(1728, 640), 3);
    add_object(create_objectvanishingblock_3034(1760, 512), 3);
    add_object(create_objectvanishingblock_3034(1760, 640), 3);
    add_object(create_objectvanishingblock_3034(1792, 512), 3);
    add_object(create_objectvanishingblock_3034(1792, 640), 3);
    add_object(create_objectvanishingblock_3034(1824, 512), 3);
    add_object(create_objectvanishingblock_3034(1824, 640), 3);
    add_object(create_objectvanishingblock_3034(1920, 448), 3);
    add_object(create_objectvanishingblock_3034(1920, 576), 3);
    add_object(create_objectvanishingblock_3034(1952, 448), 3);
    add_object(create_objectvanishingblock_3034(1952, 576), 3);
    add_object(create_objectvanishingblock_3034(1984, 448), 3);
    add_object(create_objectvanishingblock_3034(1984, 576), 3);
    add_object(create_objectvanishingblock_3034(2016, 448), 3);
    add_object(create_objectvanishingblock_3034(2016, 576), 3);
    add_object(create_objectvanishingblock_3034(2048, 448), 3);
    add_object(create_objectvanishingblock_3034(2048, 576), 3);
    add_object(create_objectpetal_302(1217, 281), 3);
    add_object(create_objectpetal_302(1217, 321), 3);
    add_object(create_objectvanishingblock_3034(2288, 512), 3);
    add_object(create_objectvanishingblock_3034(2288, 480), 3);
    add_object(create_objectvanishingblock_3034(2288, 448), 3);
    add_object(create_objectvanishingblock_3034(2320, 448), 3);
    add_object(create_objectvanishingblock_3034(2352, 448), 3);
    add_object(create_objectvanishingblock_3034(2352, 352), 3);
    add_object(create_objectvanishingblock_3034(2384, 352), 3);
    add_object(create_objectvanishingblock_3034(2416, 352), 3);
    add_object(create_objectvanishingblock_3034(2416, 320), 3);
    add_object(create_objectvanishingblock_3034(2416, 288), 3);
    add_object(create_objectvanishingblock_3034(2448, 448), 3);
    add_object(create_objectvanishingblock_3034(2480, 448), 3);
    add_object(create_objectvanishingblock_3034(2512, 448), 3);
    add_object(create_objectvanishingblock_3034(2512, 416), 3);
    add_object(create_objectvanishingblock_3034(2512, 384), 3);
    add_object(create_objectvanishingblock_3034(2576, 288), 3);
    add_object(create_objectvanishingblock_3034(2608, 288), 3);
    add_object(create_objectvanishingblock_3034(2640, 288), 3);
    add_object(create_objectvanishingblock_3034(2640, 320), 3);
    add_object(create_objectvanishingblock_3034(2640, 352), 3);
    add_object(create_objectvanishingblock_3034(2768, 288), 3);
    add_object(create_objectvanishingblock_3034(2768, 320), 3);
    add_object(create_objectvanishingblock_3034(2768, 352), 3);
    add_object(create_objectvanishingblock_3034(2768, 384), 3);
    add_object(create_objectvanishingblock_3034(2768, 416), 3);
    add_object(create_objectvanishingblock_3034(2736, 416), 3);
    add_object(create_objectvanishingblock_3034(2704, 416), 3);
    add_object(create_objectvanishingblock_3034(2800, 416), 3);
    add_object(create_objectvanishingblock_3034(2832, 416), 3);
    add_object(create_objectvanishingblock_3034(2864, 416), 3);
    add_object(create_objectvanishingblock_3034(2896, 416), 3);
    add_object(create_objectvanishingblock_3034(2928, 416), 3);
    add_object(create_objectvanishingblock_3034(2896, 224), 3);
    add_object(create_objectvanishingblock_3034(2896, 256), 3);
    add_object(create_objectvanishingblock_3034(2896, 288), 3);
    add_object(create_objectvanishingblock_3034(2960, 416), 3);
    add_object(create_objectvanishingblock_3034(2960, 448), 3);
    add_object(create_objectvanishingblock_3034(2992, 448), 3);
    add_object(create_objectvanishingblock_3034(2992, 416), 3);
    add_object(create_objectvanishingblock_3034(3024, 416), 3);
    add_object(create_objectvanishingblock_3034(3024, 448), 3);
    add_object(create_objectvanishingblock_3034(3056, 448), 3);
    add_object(create_objectvanishingblock_3034(3056, 416), 3);
    add_object(create_objectvanishingblock_3034(3088, 416), 3);
    add_object(create_objectvanishingblock_3034(3088, 448), 3);
    add_object(create_objectvanishingblock_3034(3120, 448), 3);
    add_object(create_objectvanishingblock_3034(3120, 416), 3);
    add_object(create_objectvanishingblock_3034(3152, 416), 3);
    add_object(create_objectvanishingblock_3034(3152, 448), 3);
    add_object(create_objectvanishingblock_3034(3184, 448), 3);
    add_object(create_objectvanishingblock_3034(3184, 416), 3);
    add_object(create_objectvanishingblock_3034(3216, 416), 3);
    add_object(create_objectvanishingblock_3034(3216, 448), 3);
    add_object(create_objectvanishingblock_3034(3248, 448), 3);
    add_object(create_objectvanishingblock_3034(3248, 416), 3);
    add_object(create_objectvanishingblock_3034(3280, 416), 3);
    add_object(create_objectvanishingblock_3034(3312, 416), 3);
    add_object(create_objectvanishingblock_3034(3344, 416), 3);
    add_object(create_objectvanishingblock_3034(3376, 416), 3);
    add_object(create_objectvanishingblock_3034(3408, 416), 3);
    add_object(create_objectvanishingblock_3034(3440, 416), 3);
    add_object(create_yellowspringup_434(3520, 560), 3);
    add_object(create_objectcrystal_279(445, 738), 3);
    add_object(create_objectcrystal_279(493, 738), 3);
    add_object(create_objectcrystal_279(541, 738), 3);
    add_object(create_objectcrystal_279(789, 450), 3);
    add_object(create_objectcrystal_279(829, 450), 3);
    add_object(create_objectcrystal_279(869, 450), 3);
    add_object(create_objectcrystal_279(1205, 402), 3);
    add_object(create_objectcrystal_279(1205, 442), 3);
    add_object(create_objectcrystal_279(1205, 482), 3);
    add_object(create_objectpetal_302(1745, 609), 3);
    add_object(create_objectpetal_302(1809, 609), 3);
    add_object(create_objectpetal_302(1961, 545), 3);
    add_object(create_objectpetal_302(2025, 545), 3);
    add_object(create_objecttimegate_2965(2625, 1232), 3);
    add_object(create_objecttimegatepiece_2966(2649, 1233), 3);
    add_object(create_objecttimegatepiece_2966(2657, 1233), 3);
    add_object(create_objecttimegatepiece_2966(2665, 1233), 3);
    add_object(create_objecttimegatepiece_2966(2673, 1233), 3);
    add_object(create_objecttimegatepiece_2966(2681, 1233), 3);
    add_object(create_objecttimegatepiece_2966(2689, 1233), 3);
    add_object(create_objecttimegatepiece_2966(2697, 1233), 3);
    add_object(create_objecttimegatepiece_2966(2705, 1233), 3);
    add_object(create_objecttimegatepiece_2966(2713, 1233), 3);
    add_object(create_objecttimegatepiece_2966(2721, 1233), 3);
    add_object(create_objecttimegate_2965(1865, 1232), 3);
    add_object(create_objecttimegatepiece_2966(1889, 1233), 3);
    add_object(create_objecttimegatepiece_2966(1897, 1233), 3);
    add_object(create_objecttimegatepiece_2966(1905, 1233), 3);
    add_object(create_objecttimegatepiece_2966(1913, 1233), 3);
    add_object(create_objecttimegatepiece_2966(1921, 1233), 3);
    add_object(create_objecttimegatepiece_2966(1929, 1233), 3);
    add_object(create_objecttimegatepiece_2966(1937, 1233), 3);
    add_object(create_objecttimegatepiece_2966(1945, 1233), 3);
    add_object(create_objecttimegatepiece_2966(1953, 1233), 3);
    add_object(create_objecttimegatepiece_2966(1961, 1233), 3);
    add_object(create_objecttimegate_2965(1017, 1232), 3);
    add_object(create_objecttimegatepiece_2966(1041, 1233), 3);
    add_object(create_objecttimegatepiece_2966(1049, 1233), 3);
    add_object(create_objecttimegatepiece_2966(1057, 1233), 3);
    add_object(create_objecttimegatepiece_2966(1065, 1233), 3);
    add_object(create_objecttimegatepiece_2966(1073, 1233), 3);
    add_object(create_objecttimegatepiece_2966(1081, 1233), 3);
    add_object(create_objecttimegatepiece_2966(1089, 1233), 3);
    add_object(create_objecttimegatepiece_2966(1097, 1233), 3);
    add_object(create_objecttimegatepiece_2966(1105, 1233), 3);
    add_object(create_objecttimegatepiece_2966(1113, 1233), 3);
    add_object(create_objecttimegate_2965(457, 1232), 3);
    add_object(create_objecttimegatepiece_2966(481, 1233), 3);
    add_object(create_objecttimegatepiece_2966(489, 1233), 3);
    add_object(create_objecttimegatepiece_2966(497, 1233), 3);
    add_object(create_objecttimegatepiece_2966(505, 1233), 3);
    add_object(create_objecttimegatepiece_2966(513, 1233), 3);
    add_object(create_objecttimegatepiece_2966(521, 1233), 3);
    add_object(create_objecttimegatepiece_2966(529, 1233), 3);
    add_object(create_objecttimegatepiece_2966(537, 1233), 3);
    add_object(create_objecttimegatepiece_2966(545, 1233), 3);
    add_object(create_objecttimegatepiece_2966(553, 1233), 3);
    add_object(create_objectcrystal_279(493, 618), 3);
    add_object(create_objectcrystal_279(613, 522), 3);
    add_object(create_objectcrystal_279(645, 490), 3);
    add_object(create_objecttimegate_2965(4593, 904), 3);
    add_object(create_objecttimegatepiece_2966(4617, 905), 3);
    add_object(create_objecttimegatepiece_2966(4625, 905), 3);
    add_object(create_objecttimegatepiece_2966(4633, 905), 3);
    add_object(create_objecttimegatepiece_2966(4641, 905), 3);
    add_object(create_objecttimegatepiece_2966(4649, 905), 3);
    add_object(create_objecttimegatepiece_2966(4657, 905), 3);
    add_object(create_objecttimegatepiece_2966(4665, 905), 3);
    add_object(create_objecttimegatepiece_2966(4673, 905), 3);
    add_object(create_objecttimegatepiece_2966(4681, 905), 3);
    add_object(create_objecttimegatepiece_2966(4689, 905), 3);
    add_object(create_enemystingernest_2961(6400, 1492), 3);
    add_object(create_enemywallstinger_3006(6496, 1536), 3);
    add_object(create_enemywallstinger_3006(6568, 1552), 3);
    add_object(create_enemywallstinger_3006(6528, 1592), 3);
    add_object(create_enemystingernest_2961(6688, 1668), 3);
    add_object(create_enemywallstinger_3006(6544, 1512), 3);
    add_object(create_enemywallstinger_3006(6496, 1464), 3);
    add_object(create_enemywallstinger_3006(6584, 1464), 3);
    add_object(create_enemywallstinger_3006(6536, 1416), 3);
    add_object(create_laddertop_357(6688, 1215), 3);
    add_object(create_laddertop_357(6400, 1215), 3);
    add_object(create_monitorwoodshield_325(6512, 1312), 3);
    add_object(create_gimmickbridge12logs_353(7760, 1064), 3);
    add_object(create_enemysunflora_2960(7648, 1080), 3);
    add_object(create_objecttimegate_2965(7361, 1528), 3);
    add_object(create_objecttimegatepiece_2966(7385, 1529), 3);
    add_object(create_objecttimegatepiece_2966(7393, 1529), 3);
    add_object(create_objecttimegatepiece_2966(7401, 1529), 3);
    add_object(create_objecttimegatepiece_2966(7409, 1529), 3);
    add_object(create_objecttimegatepiece_2966(7417, 1529), 3);
    add_object(create_objecttimegatepiece_2966(7425, 1529), 3);
    add_object(create_objecttimegatepiece_2966(7433, 1529), 3);
    add_object(create_objecttimegatepiece_2966(7441, 1529), 3);
    add_object(create_objecttimegatepiece_2966(7449, 1529), 3);
    add_object(create_objecttimegatepiece_2966(7457, 1529), 3);
    add_object(create_objectpetal_302(2393, 329), 3);
    add_object(create_objectcrystal_279(7829, 1378), 3);
    add_object(create_objectcrystal_279(7861, 1346), 3);
    add_object(create_objectcrystal_279(7893, 1314), 3);
    add_object(create_objectcrystal_279(7925, 1282), 3);
    add_object(create_monitorwatershield_327(5760, 1568), 3);
    add_object(create_objectvanishingblock_3034(7440, 1024), 3);
    add_object(create_objectvanishingblock_3034(7504, 928), 3);
    add_object(create_objectcrystal_279(7565, 466), 3);
    add_object(create_objectcrystal_279(7573, 570), 3);
    add_object(create_objectcrystal_279(7717, 258), 3);
    add_object(create_objectcrystal_279(7565, 530), 3);
    add_object(create_objectcrystal_279(7645, 258), 3);
    add_object(create_objectcrystal_279(7573, 498), 3);
    add_object(create_objecttimegate_2965(289, 120), 3);
    add_object(create_objecttimegatepiece_2966(313, 121), 3);
    add_object(create_objecttimegatepiece_2966(321, 121), 3);
    add_object(create_objecttimegatepiece_2966(329, 121), 3);
    add_object(create_objecttimegatepiece_2966(337, 121), 3);
    add_object(create_objecttimegatepiece_2966(345, 121), 3);
    add_object(create_objecttimegatepiece_2966(353, 121), 3);
    add_object(create_objecttimegatepiece_2966(361, 121), 3);
    add_object(create_objecttimegatepiece_2966(369, 121), 3);
    add_object(create_objecttimegatepiece_2966(377, 121), 3);
    add_object(create_objecttimegatepiece_2966(385, 121), 3);
    add_object(create_yellowspringupright_433(0, 256), 3);
    add_object(create_objectvanishingblock_3034(7472, 1024), 3);
    add_object(create_objectvanishingblock_3034(7536, 928), 3);
    add_object(create_objectvanishingblock_3034(7504, 1024), 3);
    add_object(create_objectvanishingblock_3034(7568, 928), 3);
    add_object(create_objectvanishingblock_3034(7440, 832), 3);
    add_object(create_objectvanishingblock_3034(7472, 832), 3);
    add_object(create_objectvanishingblock_3034(7504, 832), 3);
    add_object(create_objectvanishingblock_3034(7536, 832), 3);
    add_object(create_objectvanishingblock_3034(7536, 800), 3);
    add_object(create_objectvanishingblock_3034(7600, 928), 3);
    add_object(create_objectvanishingblock_3034(7632, 928), 3);
    add_object(create_objectvanishingblock_3034(7664, 928), 3);
    add_object(create_objectvanishingblock_3034(7664, 896), 3);
    add_object(create_objectvanishingblock_3034(7664, 864), 3);
    add_object(create_objectvanishingblock_3034(7568, 800), 3);
    add_object(create_objectvanishingblock_3034(7568, 768), 3);
    add_object(create_objectvanishingblock_3034(7664, 832), 3);
    add_object(create_objectvanishingblock_3034(7664, 800), 3);
    add_object(create_objectvanishingblock_3034(7632, 896), 3);
    add_object(create_objectvanishingblock_3034(7600, 896), 3);
    add_object(create_objectvanishingblock_3034(7664, 672), 3);
    add_object(create_objectvanishingblock_3034(7632, 672), 3);
    add_object(create_objectvanishingblock_3034(7600, 672), 3);
    add_object(create_objectvanishingblock_3034(7568, 672), 3);
    add_object(create_objectvanishingblock_3034(7536, 672), 3);
    add_object(create_objectvanishingblock_3034(7504, 672), 3);
    add_object(create_objectvanishingblock_3034(7504, 800), 3);
    add_object(create_objectvanishingblock_3034(7472, 800), 3);
    add_object(create_objectvanishingblock_3034(7440, 800), 3);
    add_object(create_objectvanishingblock_3034(7440, 768), 3);
    add_object(create_objectvanishingblock_3034(7440, 736), 3);
    add_object(create_objectvanishingblock_3034(9552, -40), 3);
    add_object(create_objectvanishingblock_3034(9584, -40), 3);
    add_object(create_objectvanishingblock_3034(9616, -40), 3);
    add_object(create_hazardgiantsword_3043(8352, 240), 3);
    add_object(create_hazardgiantsword_3043(8176, 240), 3);
    add_object(create_gimmickbowarrow_2979(9800, -128), 3);
    add_object(create_hazardgiantsword_3043(8880, 288), 3);
    add_object(create_objectvanishingblock_3034(8656, 480), 3);
    add_object(create_objectvanishingblock_3034(8656, 448), 3);
    add_object(create_objectvanishingblock_3034(8656, 416), 3);
    add_object(create_objectvanishingblock_3034(8656, 384), 3);
    add_object(create_objectvanishingblock_3034(8688, 384), 3);
    add_object(create_objectvanishingblock_3034(8688, 416), 3);
    add_object(create_objectvanishingblock_3034(8688, 448), 3);
    add_object(create_objectvanishingblock_3034(8688, 480), 3);
    add_object(create_objectvanishingblock_3034(8720, 480), 3);
    add_object(create_objectvanishingblock_3034(8720, 448), 3);
    add_object(create_objectvanishingblock_3034(8720, 416), 3);
    add_object(create_objectvanishingblock_3034(8720, 384), 3);
    add_object(create_objectvanishingblock_3034(8752, 384), 3);
    add_object(create_objectvanishingblock_3034(8752, 416), 3);
    add_object(create_objectvanishingblock_3034(8752, 448), 3);
    add_object(create_objectvanishingblock_3034(8752, 480), 3);
    add_object(create_objectvanishingblock_3034(8784, 480), 3);
    add_object(create_objectvanishingblock_3034(8784, 448), 3);
    add_object(create_objectvanishingblock_3034(8784, 416), 3);
    add_object(create_objectvanishingblock_3034(8784, 384), 3);
    add_object(create_objectvanishingblock_3034(8944, 384), 3);
    add_object(create_objectvanishingblock_3034(8944, 416), 3);
    add_object(create_objectvanishingblock_3034(8944, 448), 3);
    add_object(create_objectvanishingblock_3034(8944, 480), 3);
    add_object(create_objectvanishingblock_3034(8976, 480), 3);
    add_object(create_objectvanishingblock_3034(8976, 448), 3);
    add_object(create_objectvanishingblock_3034(8976, 416), 3);
    add_object(create_objectvanishingblock_3034(8976, 384), 3);
    add_object(create_objectvanishingblock_3034(9008, 384), 3);
    add_object(create_objectvanishingblock_3034(9008, 416), 3);
    add_object(create_objectvanishingblock_3034(9008, 448), 3);
    add_object(create_objectvanishingblock_3034(9008, 480), 3);
    add_object(create_objectvanishingblock_3034(9040, 480), 3);
    add_object(create_objectvanishingblock_3034(9040, 448), 3);
    add_object(create_objectvanishingblock_3034(9040, 416), 3);
    add_object(create_objectvanishingblock_3034(9040, 384), 3);
    add_object(create_objectvanishingblock_3034(9072, 384), 3);
    add_object(create_objectvanishingblock_3034(9072, 416), 3);
    add_object(create_objectvanishingblock_3034(9072, 448), 3);
    add_object(create_objectvanishingblock_3034(9072, 480), 3);
    add_object(create_objectvanishingblock_3034(4256, 1376), 3);
    add_object(create_objectvanishingblock_3034(4288, 1376), 3);
    add_object(create_objectvanishingblock_3034(4320, 1376), 3);
    add_object(create_objectvanishingblock_3034(4352, 1376), 3);
    add_object(create_objectvanishingblock_3034(4384, 1376), 3);
    add_object(create_objectvanishingblock_3034(4416, 1376), 3);
    add_object(create_objectvanishingblock_3034(4416, 1408), 3);
    add_object(create_objectvanishingblock_3034(4384, 1408), 3);
    add_object(create_objectvanishingblock_3034(4352, 1408), 3);
    add_object(create_objectvanishingblock_3034(4320, 1408), 3);
    add_object(create_objectvanishingblock_3034(4288, 1408), 3);
    add_object(create_objectvanishingblock_3034(4256, 1408), 3);
    add_object(create_objectvanishingblock_3034(4256, 1440), 3);
    add_object(create_objectvanishingblock_3034(4288, 1440), 3);
    add_object(create_objectvanishingblock_3034(4320, 1440), 3);
    add_object(create_objectvanishingblock_3034(4352, 1440), 3);
    add_object(create_objectvanishingblock_3034(4384, 1440), 3);
    add_object(create_objectvanishingblock_3034(4416, 1440), 3);
    add_object(create_objectvanishingblock_3034(4416, 1472), 3);
    add_object(create_objectvanishingblock_3034(4384, 1472), 3);
    add_object(create_objectvanishingblock_3034(4352, 1472), 3);
    add_object(create_objectvanishingblock_3034(4320, 1472), 3);
    add_object(create_objectvanishingblock_3034(4288, 1472), 3);
    add_object(create_objectvanishingblock_3034(4256, 1472), 3);
    add_object(create_objectvanishingblock_3034(4256, 1504), 3);
    add_object(create_objectvanishingblock_3034(4288, 1504), 3);
    add_object(create_objectvanishingblock_3034(4320, 1504), 3);
    add_object(create_objectvanishingblock_3034(4352, 1504), 3);
    add_object(create_objectvanishingblock_3034(4384, 1504), 3);
    add_object(create_objectvanishingblock_3034(4416, 1504), 3);
    add_object(create_monitorbomb_563(8336, 480), 3);
    add_object(create_monitorbomb_563(8368, 480), 3);
    add_object(create_monitorbomb_563(8400, 480), 3);
    add_object(create_monitorbomb_563(8432, 480), 3);
    add_object(create_hazardspikesup_950(9312, 352), 3);
    add_object(create_hazardspikesup_950(9344, 352), 3);
    add_object(create_hazardspikesup_950(9376, 352), 3);
    add_object(create_hazardspikesup_950(9408, 352), 3);
    add_object(create_hazardspikesup_950(9440, 352), 3);
    add_object(create_hazardspikesup_950(9472, 352), 3);
    add_object(create_hazardspikesup_950(9504, 352), 3);
    add_object(create_hazardspikesup_950(9536, 352), 3);
    add_object(create_hazardspikesup_950(9568, 352), 3);
    add_object(create_hazardspikesup_950(9600, 352), 3);
    add_object(create_hazardspikesup_950(9632, 352), 3);
    add_object(create_hazardspikesup_950(9664, 352), 3);
    add_object(create_enemyterreonleftshoulder_2981(2932, 1252), 3);
    add_object(create_enemyterreonrightshoulder_2982(2980, 1252), 3);
    add_object(create_enemyterreonleftleg_2983(2915, 1246), 3);
    add_object(create_enemyterreonrightleg_2984(2996, 1246), 3);
    add_object(create_enemyterreon_2985(2955, 1246), 3);
    add_object(create_effectterreonwarning_2986(2956, 1192), 3);
    add_object(create_enemyobelisk_3035(3836, 1092), 3);
    add_object(create_objectvanishingblock_3034(5632, 1952), 3);
    add_object(create_objectvanishingblock_3034(5600, 1952), 3);
    add_object(create_objectvanishingblock_3034(5568, 1952), 3);
    add_object(create_objectvanishingblock_3034(5536, 1952), 3);
    add_object(create_objectvanishingblock_3034(5504, 1952), 3);
    add_object(create_objectvanishingblock_3034(5472, 1952), 3);
    add_object(create_objectvanishingblock_3034(5472, 1920), 3);
    add_object(create_objectvanishingblock_3034(5504, 1920), 3);
    add_object(create_objectvanishingblock_3034(5536, 1920), 3);
    add_object(create_objectvanishingblock_3034(5568, 1920), 3);
    add_object(create_objectvanishingblock_3034(5600, 1920), 3);
    add_object(create_objectvanishingblock_3034(5632, 1920), 3);
    add_object(create_objectvanishingblock_3034(5632, 1888), 3);
    add_object(create_objectvanishingblock_3034(5600, 1888), 3);
    add_object(create_objectvanishingblock_3034(5568, 1888), 3);
    add_object(create_objectvanishingblock_3034(5536, 1888), 3);
    add_object(create_objectvanishingblock_3034(5504, 1888), 3);
    add_object(create_objectvanishingblock_3034(5472, 1888), 3);
    add_object(create_objectvanishingblock_3034(5472, 1856), 3);
    add_object(create_objectvanishingblock_3034(5504, 1856), 3);
    add_object(create_objectvanishingblock_3034(5536, 1856), 3);
    add_object(create_objectvanishingblock_3034(5568, 1856), 3);
    add_object(create_objectvanishingblock_3034(5600, 1856), 3);
    add_object(create_objectvanishingblock_3034(5632, 1856), 3);
    add_object(create_objectvanishingblock_3034(5632, 1824), 3);
    add_object(create_objectvanishingblock_3034(5600, 1824), 3);
    add_object(create_objectvanishingblock_3034(5568, 1824), 3);
    add_object(create_objectvanishingblock_3034(5536, 1824), 3);
    add_object(create_objectvanishingblock_3034(5504, 1824), 3);
    add_object(create_objectvanishingblock_3034(5472, 1824), 3);
    add_object(create_objectvanishingblock_3034(5472, 1792), 3);
    add_object(create_objectvanishingblock_3034(5504, 1792), 3);
    add_object(create_objectvanishingblock_3034(5536, 1792), 3);
    add_object(create_objectvanishingblock_3034(5568, 1792), 3);
    add_object(create_objectvanishingblock_3034(5600, 1792), 3);
    add_object(create_objectvanishingblock_3034(5632, 1792), 3);
    add_object(create_objectvanishingblock_3034(5632, 1760), 3);
    add_object(create_objectvanishingblock_3034(5600, 1760), 3);
    add_object(create_objectvanishingblock_3034(5568, 1760), 3);
    add_object(create_objectvanishingblock_3034(5536, 1760), 3);
    add_object(create_objectvanishingblock_3034(5504, 1760), 3);
    add_object(create_objectvanishingblock_3034(5472, 1760), 3);
    add_object(create_objectvanishingblock_3034(5472, 1728), 3);
    add_object(create_objectvanishingblock_3034(5504, 1728), 3);
    add_object(create_objectvanishingblock_3034(5536, 1728), 3);
    add_object(create_objectvanishingblock_3034(5568, 1728), 3);
    add_object(create_objectvanishingblock_3034(5600, 1728), 3);
    add_object(create_objectvanishingblock_3034(5632, 1728), 3);
    add_object(create_objectvanishingblock_3034(5632, 1696), 3);
    add_object(create_objectvanishingblock_3034(5600, 1696), 3);
    add_object(create_objectvanishingblock_3034(5568, 1696), 3);
    add_object(create_objectvanishingblock_3034(5536, 1696), 3);
    add_object(create_objectvanishingblock_3034(5504, 1696), 3);
    add_object(create_objectvanishingblock_3034(5472, 1696), 3);
    add_object(create_objectvanishingblock_3034(5472, 1664), 3);
    add_object(create_objectvanishingblock_3034(5504, 1664), 3);
    add_object(create_objectvanishingblock_3034(5536, 1664), 3);
    add_object(create_objectvanishingblock_3034(5568, 1664), 3);
    add_object(create_objectvanishingblock_3034(5600, 1664), 3);
    add_object(create_objectvanishingblock_3034(5632, 1664), 3);
    add_object(create_objectvanishingblock_3034(5632, 1632), 3);
    add_object(create_objectvanishingblock_3034(5600, 1632), 3);
    add_object(create_objectvanishingblock_3034(5568, 1632), 3);
    add_object(create_objectvanishingblock_3034(5536, 1632), 3);
    add_object(create_objectvanishingblock_3034(5504, 1632), 3);
    add_object(create_objectvanishingblock_3034(5472, 1632), 3);
    add_object(create_objectvanishingblock_3034(5472, 1600), 3);
    add_object(create_objectvanishingblock_3034(5504, 1600), 3);
    add_object(create_objectvanishingblock_3034(5536, 1600), 3);
    add_object(create_objectvanishingblock_3034(5568, 1600), 3);
    add_object(create_objectvanishingblock_3034(5600, 1600), 3);
    add_object(create_objectvanishingblock_3034(5632, 1600), 3);
    add_object(create_objectvanishingblock_3034(5024, 1824), 3);
    add_object(create_objectvanishingblock_3034(5056, 1824), 3);
    add_object(create_objectvanishingblock_3034(5088, 1824), 3);
    add_object(create_objectvanishingblock_3034(5120, 1824), 3);
    add_object(create_objectvanishingblock_3034(5152, 1824), 3);
    add_object(create_objectvanishingblock_3034(5184, 1824), 3);
    add_object(create_objectvanishingblock_3034(5216, 1824), 3);
    add_object(create_objectvanishingblock_3034(5248, 1824), 3);
    add_object(create_objectvanishingblock_3034(5248, 1856), 3);
    add_object(create_objectvanishingblock_3034(5216, 1856), 3);
    add_object(create_objectvanishingblock_3034(5184, 1856), 3);
    add_object(create_objectvanishingblock_3034(5152, 1856), 3);
    add_object(create_objectvanishingblock_3034(5120, 1856), 3);
    add_object(create_objectvanishingblock_3034(5088, 1856), 3);
    add_object(create_objectvanishingblock_3034(5056, 1856), 3);
    add_object(create_objectvanishingblock_3034(5024, 1856), 3);
    add_object(create_objectvanishingblock_3034(5024, 1888), 3);
    add_object(create_objectvanishingblock_3034(5056, 1888), 3);
    add_object(create_objectvanishingblock_3034(5088, 1888), 3);
    add_object(create_objectvanishingblock_3034(5120, 1888), 3);
    add_object(create_objectvanishingblock_3034(5152, 1888), 3);
    add_object(create_objectvanishingblock_3034(5184, 1888), 3);
    add_object(create_objectvanishingblock_3034(5216, 1888), 3);
    add_object(create_objectvanishingblock_3034(5248, 1888), 3);
    add_object(create_objectvanishingblock_3034(5248, 1920), 3);
    add_object(create_objectvanishingblock_3034(5216, 1920), 3);
    add_object(create_objectvanishingblock_3034(5184, 1920), 3);
    add_object(create_objectvanishingblock_3034(5152, 1920), 3);
    add_object(create_objectvanishingblock_3034(5120, 1920), 3);
    add_object(create_objectvanishingblock_3034(5088, 1920), 3);
    add_object(create_objectvanishingblock_3034(5056, 1920), 3);
    add_object(create_objectvanishingblock_3034(5024, 1920), 3);
    add_object(create_objectvanishingblock_3034(5024, 1952), 3);
    add_object(create_objectvanishingblock_3034(5056, 1952), 3);
    add_object(create_objectvanishingblock_3034(5088, 1952), 3);
    add_object(create_objectvanishingblock_3034(5120, 1952), 3);
    add_object(create_objectvanishingblock_3034(5152, 1952), 3);
    add_object(create_objectvanishingblock_3034(5184, 1952), 3);
    add_object(create_objectvanishingblock_3034(5216, 1952), 3);
    add_object(create_objectvanishingblock_3034(5248, 1952), 3);
    add_object(create_enemycacteon_990(4608, 1641), 3);
    add_object(create_enemycacteon_990(4952, 1777), 3);
    add_object(create_enemywallstinger_3006(4600, 1696), 3);
    add_object(create_enemywallstinger_3006(4688, 1824), 3);
    add_object(create_enemywallstinger_3006(4840, 1824), 3);
    add_object(create_enemywallstinger_3006(4848, 1632), 3);
    add_object(create_enemywallstinger_3006(4976, 1632), 3);
    add_object(create_enemywallstinger_3006(5072, 1696), 3);
    add_object(create_enemywallstinger_3006(5224, 1696), 3);
    add_object(create_enemywallstinger_3006(5320, 1784), 3);
    add_object(create_enemywallstinger_3006(5320, 1864), 3);
    add_object(create_enemywallstinger_3006(5320, 1936), 3);
    add_object(create_enemywallstinger_3006(4976, 1832), 3);
    add_object(create_enemywallstinger_3006(4984, 1928), 3);
    add_object(create_enemyobelisk_3035(9476, 484), 3);
    add_object(create_enemystinger_2891(5375, 2016), 3);
    add_object(create_enemyterreonleftshoulder_2981(2204, 1252), 3);
    add_object(create_enemyterreonrightshoulder_2982(2252, 1252), 3);
    add_object(create_enemyterreonleftleg_2983(2187, 1246), 3);
    add_object(create_enemyterreonrightleg_2984(2268, 1246), 3);
    add_object(create_enemyterreon_2985(2227, 1246), 3);
    add_object(create_effectterreonwarning_2986(2228, 1192), 3);
    add_object(create_laddertop_357(6248, 1215), 3);
    add_object(create_enemystingernest_2961(6248, 1596), 3);
    add_object(create_enemystingernest_2961(6320, 1388), 3);
    add_object(create_laddertop_357(6322, 1215), 3);
    add_object(create_laddertop_357(7568, 191), 3);
    add_object(create_objectcrystal_279(7669, 258), 3);
    add_object(create_objectcrystal_279(7693, 258), 3);
    add_object(create_laddertop_357(9272, 223), 3);
    add_object(create_gimmickspinballchain_3030(10492, 356), 3);
    add_object(create_gimmickspinballchain2_3031(10516, 356), 3);
    add_object(create_gimmickspinballchain3_3032(10492, 380), 3);
    add_object(create_gimmickspinballchain4_3033(10516, 380), 3);
    add_object(create_enemywallstinger_3006(11240, 1376), 3);
    add_object(create_enemywallstinger_3006(11176, 1304), 3);
    add_object(create_enemywallstinger_3006(11104, 1256), 3);
    add_object(create_enemywallstinger_3006(11032, 1200), 3);
    add_object(create_enemywallstinger_3006(11104, 1328), 3);
    add_object(create_enemywallstinger_3006(11304, 1152), 3);
    add_object(create_enemywallstinger_3006(11288, 1432), 3);
    add_object(create_enemywallstinger_3006(11184, 1400), 3);
    add_object(create_objectcrystal_279(8685, 562), 3);
    add_object(create_objectcrystal_279(8653, 562), 3);
    add_object(create_objectcrystal_279(8621, 562), 3);
    add_object(create_objectcrystal_279(8589, 562), 3);
    add_object(create_monitorfireshield_328(9488, 296), 3);
    add_object(create_objectcrystal_279(10125, 378), 3);
    add_object(create_objectcrystal_279(10101, 402), 3);
    add_object(create_objectcrystal_279(10149, 402), 3);
    add_object(create_objectcrystal_279(10125, 426), 3);
    add_object(create_objectcrystal_279(10293, 298), 3);
    add_object(create_objectcrystal_279(10269, 322), 3);
    add_object(create_objectcrystal_279(10317, 322), 3);
    add_object(create_objectcrystal_279(10293, 346), 3);
    add_object(create_hazardgiantsword_3043(10688, 272), 3);
    add_object(create_hazardgiantsword_3043(10400, 432), 3);
    add_object(create_monitorrings_407(10672, 448), 3);
    add_object(create_monitorbomb_563(10384, 608), 3);
    add_object(create_monitorkeystone_562(10224, 608), 3);
    add_object(create_monitorbomb_563(7504, 1088), 3);
    add_object(create_monitorbomb_563(7472, 1088), 3);
    add_object(create_monitorbomb_563(7440, 1088), 3);
    add_object(create_hazardgiantsword_3043(9312, 528), 3);
    add_object(create_gimmickspinball_1175(10016, 528), 3);
    add_object(create_gimmickspinball_1175(10448, 368), 3);
    add_object(create_monitorcrystals_324(8864, 480), 3);
    add_object(create_objectcodec_354(4354, 1597), 3);
    add_object(create_objectcodec_354(2490, 421), 3);
    add_object(create_objectcodec_354(9106, 285), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
    add_background_object(create_lightray1_659(3504, 192), 4);
    add_background_object(create_lightray1_659(3488, 224), 4);
    add_background_object(create_lightray2_666(3472, 256), 4);
    add_background_object(create_lightray1_659(3656, 192), 4);
    add_background_object(create_lightray2_666(3640, 224), 4);
    add_background_object(create_lightray1_659(2344, 192), 4);
    add_background_object(create_lightray2_666(2328, 224), 4);
    add_background_object(create_lightray1_659(2496, 192), 4);
    add_background_object(create_lightray1_659(2480, 224), 4);
    add_background_object(create_lightray2_666(2464, 256), 4);
    add_background_object(create_lightray1_659(2744, 192), 4);
    add_background_object(create_lightray2_666(2728, 224), 4);
    add_background_object(create_lightray1_659(2168, 192), 4);
    add_background_object(create_lightray1_659(2152, 224), 4);
    add_background_object(create_lightray2_666(2136, 256), 4);
    add_background_object(create_lightray1_659(840, 64), 4);
    add_background_object(create_lightray2_666(824, 96), 4);
    add_background_object(create_lightray1_659(1152, 64), 4);
    add_background_object(create_lightray1_659(1136, 96), 4);
    add_background_object(create_lightray1_659(1288, 64), 4);
    add_background_object(create_lightray2_666(1120, 128), 4);
    add_background_object(create_lightray2_666(1272, 96), 4);
    add_background_object(create_lightray1_659(1008, 64), 4);
    add_background_object(create_lightray2_666(992, 96), 4);
    add_background_object(create_lightray1_659(1440, 64), 4);
    add_background_object(create_lightray1_659(1424, 96), 4);
    add_background_object(create_lightray2_666(1408, 128), 4);
    add_background_object(create_lightray1_659(1736, 64), 4);
    add_background_object(create_lightray1_659(1720, 96), 4);
    add_background_object(create_lightray1_659(1872, 64), 4);
    add_background_object(create_lightray2_666(1704, 128), 4);
    add_background_object(create_lightray2_666(1856, 96), 4);
    add_background_object(create_lightray1_659(1592, 64), 4);
    add_background_object(create_lightray2_666(1576, 96), 4);
    add_background_object(create_lightray1_659(2024, 64), 4);
    add_background_object(create_lightray1_659(2008, 96), 4);
    add_background_object(create_lightray2_666(1992, 128), 4);
    add_background_object(create_lightray1_659(376, 64), 4);
    add_background_object(create_lightray1_659(360, 96), 4);
    add_background_object(create_lightray1_659(512, 64), 4);
    add_background_object(create_lightray2_666(344, 128), 4);
    add_background_object(create_lightray2_666(496, 96), 4);
    add_background_object(create_lightray1_659(232, 64), 4);
    add_background_object(create_lightray2_666(216, 96), 4);
    add_background_object(create_lightray1_659(664, 64), 4);
    add_background_object(create_lightray1_659(648, 96), 4);
    add_background_object(create_lightray2_666(632, 128), 4);
    add_background_object(create_lightray1_659(7528, 224), 4);
    add_background_object(create_lightray1_659(7512, 256), 4);
    add_background_object(create_lightray2_666(7496, 288), 4);
    add_background_object(create_lightray1_659(7696, 224), 4);
    add_background_object(create_lightray2_666(7680, 256), 4);
    add_background_object(create_lightray1_659(7872, 224), 4);
    add_background_object(create_lightray1_659(7856, 256), 4);
    add_background_object(create_lightray2_666(7840, 288), 4);
    add_background_object(create_lightray1_659(8016, 224), 4);
    add_background_object(create_lightray2_666(8000, 256), 4);
    add_background_object(create_lightray1_659(8176, 224), 4);
    add_background_object(create_lightray1_659(8160, 256), 4);
    add_background_object(create_lightray2_666(8144, 288), 4);
    add_background_object(create_lightray1_659(8320, 224), 4);
    add_background_object(create_lightray2_666(8304, 256), 4);
    add_background_object(create_lightray1_659(8552, 256), 4);
    add_background_object(create_lightray1_659(8536, 288), 4);
    add_background_object(create_lightray2_666(8520, 320), 4);
    add_background_object(create_lightray1_659(8720, 256), 4);
    add_background_object(create_lightray2_666(8704, 288), 4);
    add_background_object(create_lightray1_659(9024, 256), 4);
    add_background_object(create_lightray2_666(9008, 288), 4);
    add_background_object(create_lightray1_659(9320, 256), 4);
    add_background_object(create_lightray1_659(9304, 288), 4);
    add_background_object(create_lightray2_666(9288, 320), 4);
    add_background_object(create_lightray1_659(9496, 256), 4);
    add_background_object(create_lightray2_666(9480, 288), 4);
    add_background_object(create_lightray1_659(9672, 256), 4);
    add_background_object(create_lightray1_659(9656, 288), 4);
    add_background_object(create_lightray2_666(9640, 320), 4);
    add_background_object(create_lightray1_659(9840, 256), 4);
    add_background_object(create_lightray2_666(9824, 288), 4);
    add_background_object(create_lightray1_659(10016, 256), 4);
    add_background_object(create_lightray1_659(10000, 288), 4);
    add_background_object(create_lightray2_666(9984, 320), 4);
    add_background_object(create_lightray1_659(10176, 256), 4);
    add_background_object(create_lightray2_666(10160, 288), 4);
    add_background_object(create_lightray1_659(10368, 256), 4);
    add_background_object(create_lightray1_659(10352, 288), 4);
    add_background_object(create_lightray2_666(10336, 320), 4);
    add_background_object(create_lightray1_659(10496, 256), 4);
    add_background_object(create_lightray2_666(10480, 288), 4);
    add_background_object(create_lightray1_659(10640, 256), 4);
    add_background_object(create_lightray1_659(10624, 288), 4);
    add_background_object(create_lightray2_666(10608, 320), 4);
    add_background_object(create_plcavebrick1_3020(7280, 96), 4);
    add_background_object(create_plcavebrick1_3020(7152, 96), 4);
    add_background_object(create_plcavebrick1_3020(7536, 96), 4);
    add_background_object(create_plcavebrick1_3020(7408, 96), 4);
    add_background_object(create_plcavebrick1_3020(7664, 96), 4);
    add_background_object(create_plcavebrick1_3020(7792, 96), 4);
    add_background_object(create_plcavebrick1_3020(7920, 96), 4);
    add_background_object(create_plcavebrick1_3020(8048, 96), 4);
    add_background_object(create_plcavebrick1_3020(8176, 96), 4);
    add_background_object(create_plcavebrick1_3020(8304, 96), 4);
    add_background_object(create_plcavebrick1_3020(8688, 128), 4);
    add_background_object(create_plcavebrick1_3020(8432, 96), 4);
    add_background_object(create_plcavebrick1_3020(8560, 128), 4);
    add_background_object(create_plcavebrick1_3020(8816, 128), 4);
    add_background_object(create_plcavebrick1_3020(8944, 128), 4);
    add_background_object(create_plcavebrick4_3023(8528, 224), 4);
    add_background_object(create_plcavebrick1_3020(9072, 128), 4);
    add_background_object(create_plcavebrick1_3020(9200, 128), 4);
    add_background_object(create_plcavebrick1_3020(9328, 128), 4);
    add_background_object(create_plcavebrick1_3020(9456, 128), 4);
    add_background_object(create_plcavebrick1_3020(9584, 128), 4);
    add_background_object(create_plcavebrick1_3020(9712, 128), 4);
    add_background_object(create_plcavebrick1_3020(9840, 128), 4);
    add_background_object(create_plcavebrick1_3020(9968, 128), 4);
    add_background_object(create_plcavebrick1_3020(10096, 128), 4);
    add_background_object(create_plcavebrick1_3020(10224, 128), 4);
    add_background_object(create_plcavebrick1_3020(10352, 128), 4);
    add_background_object(create_plcavebrick1_3020(10480, 128), 4);
    add_background_object(create_plcavebrick1_3020(10608, 128), 4);
    add_background_object(create_plcavebrick1_3020(10736, 128), 4);
    add_background_object(create_plcavebrick1_3020(10864, 128), 4);
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
    add_object(create_hazardspikesup_950(-208, 392), 5);
    add_object(create_hazardspikesdown_960(-168, 392), 5);
    add_object(create_hazardspikesleft_959(-128, 392), 5);
    add_object(create_hazardspikesright_961(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
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
    loop_cacteon_floor_running = false;
    loop_cacteon_floor_index = 0;
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
    loop_sound_kick2_running = false;
    loop_sound_kick2_index = 0;
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
    loop_stinger_running = false;
    loop_stinger_index = 0;
    loop_gimmik_bridge12_rightside_running = false;
    loop_gimmik_bridge12_rightside_index = 0;
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
    loop_cacteon_running = false;
    loop_cacteon_index = 0;
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
    loop_sound_pounce_running = false;
    loop_sound_pounce_index = 0;
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
    loop_gimmik_bridge12_leftside_running = false;
    loop_gimmik_bridge12_leftside_index = 0;
    loop_process_call_stop_music_running = false;
    loop_process_call_stop_music_index = 0;
    static DynamicLoops frame_loops;
    loops = &frame_loops;
    static bool loops_initialized = false;
    if (!loops_initialized) {
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_54, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_54, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_54, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_54, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_54, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_54, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_54, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_54, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_54, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_54, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_54, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_54, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_54, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_54, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_54, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_54, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_54, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_54, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_54, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_54, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_54, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_54, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_54, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_54, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_54, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_54, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_54, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_54, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_54, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_54, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_54, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_54, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_54, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_54, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_54, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_54, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_54, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_54, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_54, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_54, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_54, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_54, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_54, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_54, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_54, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_54, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_54, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_54, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_54, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_54, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_54, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_54, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_54, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_54, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
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
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    not_always_1550_16 = loop_count;
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
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
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
    not_always_1482_53 = loop_count;
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
    not_always_1480_53 = loop_count;
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
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
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
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
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
void Frames::event_func_12124()
{
    // event 2031_55
    {
        if (!(group_main_engine_1)) goto event_2031_55_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_boss4_ogg_207, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_2031_55_end: ;
}
void Frames::loop_play_music_4_55()
{
    event_func_12124();
}
void Frames::event_func_12125()
{
    // event 1661_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_voice_acting_1)) goto event_1661_55_end;
        if (!((global_values->get(26)) == (0))) goto event_1661_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(8)) == (0))) goto event_1661_55_end;
        media.play(str_data_voices_88+global_strings->get(11)+str__89+mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 6, 2)+str__89+mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 6, 8)+str_ogg_90, 20-1);
    }
    event_1661_55_end: ;
}
void Frames::event_func_12126()
{
    // event 1662_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_voice_acting_1)) goto event_1662_55_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(9, 0);
    }
    event_1662_55_end: ;
}
void Frames::event_func_12127()
{
    // event 1663_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_voice_acting_1)) goto event_1663_55_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)) < (6))) goto event_1663_55_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(9, 1);
    }
    event_1663_55_end: ;
}
void Frames::event_func_12128()
{
    // event 1695_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_pangu_1)) goto event_1695_55_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, string_to_number(mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 3, 2)));
    }
    event_1695_55_end: ;
}
void Frames::loop_voice_55()
{
    event_func_12125();
    event_func_12126();
    event_func_12127();
    event_func_12128();
}
void Frames::loop_wrapper_sound_hurt1_55(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_55(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_55(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_55(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_55(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_55(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_process_call_resume_music_55(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_sound_idle7_55(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_55(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_13();
}
void Frames::loop_wrapper_sound_dig2_55(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_55(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_55(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_55(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_sound_explode5_55(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_55(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_process_call_unlock_music_55(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_55(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_sound_explode8_55(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_process_call_reset_music_55(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_55(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_55(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_55(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_explode0_55(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_55(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_55(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_camera_mode1_55(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_13();
}
void Frames::loop_wrapper_camera_mode0_55(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_13();
}
void Frames::loop_wrapper_process_call_play_music_55(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_55(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_13();
}
void Frames::loop_wrapper_sound_attack1_55(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_55(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_55(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_55(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_play_music_8_55(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_uppercut3_55(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_55(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_55(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_55(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_55(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_55(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_55(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_55(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_55(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_55();
}
void Frames::loop_wrapper_play_music_5_55(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_53();
}
void Frames::loop_wrapper_play_music_6_55(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_53();
}
void Frames::loop_wrapper_sound_go0_55(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_unqueue_music_55(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_process_call_me_55(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_55(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_53();
}
void Frames::loop_wrapper_sound_explode3_55(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_cyclone0_55(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_sound_explode2_55(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_55(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_process_call_stop_music_55(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::event_func_12129()
{
    // event 1802_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1802_55_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1802_55_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1802_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) < (6))) goto event_1802_55_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)((Active*)col_instance_2))->destroy();
        media.play_id(SOUND_COMMON_EXPLODE2_98, -1, 1);
        FrameObject * single_instance_1802_55_0; single_instance_1802_55_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectplasmaburst_3047(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1802_55_0 == NULL)
                single_instance_1802_55_0 = new_obj;
        }
    }
    event_1802_55_end: ;
}
void Frames::col_16_55()
{
    event_func_12129();
}
void Frames::event_func_12130()
{
    // event 1476_55
    {
        if (!(group_main_engine_1)) goto event_1476_55_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(3)) == (0))) goto event_1476_55_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1476_55_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(8);
        }
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, 100);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(3, 1);
        media.play_id(SOUND_BOOST_RING_326, -1, 1);
    }
    event_1476_55_end: ;
}
void Frames::col_20_55()
{
    event_func_12130();
}
void Frames::event_func_12131()
{
    // event 1801_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1)) goto event_1801_55_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(2)) == (1))) goto event_1801_55_end;
        ((Active*)((Active*)col_instance_1))->destroy();
        FrameObject * single_instance_1801_55_0; single_instance_1801_55_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectplasmaburst_3047(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1801_55_0 == NULL)
                single_instance_1801_55_0 = new_obj;
        }
        media.play_id(SOUND_COMMON_EXPLODE2_98, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 4));
    }
    event_1801_55_end: ;
}
void Frames::col_25_55()
{
    event_func_12131();
}
