#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_20521()
{
    // event 2912_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2912_83_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_2912_83_end;
        if (!((global_values->get(3)) > (0))) goto event_2912_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->flags.enable(4);
    }
    event_2912_83_end: ;
}
void Frames::event_func_20522()
{
    // event 2913_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2913_83_end;
        if (!(((Active*)get_instance(themagister_2115_instances))->alterables->flags.is_on(4))) goto event_2913_83_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (0))) goto event_2913_83_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(7)) == (0))) goto event_2913_83_end;
        if (!((global_values->get(0)) != (1))) goto event_2913_83_end;
        global_values->set(4, 14);
        next_frame = 15 + 0;    
    
        media.stop_samples();
    }
    event_2913_83_end: ;
}
void Frames::event_func_20523()
{
    // event 2914_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2914_83_end;
        if (!(((Active*)get_instance(themagister_2115_instances))->alterables->flags.is_on(4))) goto event_2914_83_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (0))) goto event_2914_83_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(7)) == (0))) goto event_2914_83_end;
        if (!((global_values->get(0)) == (1))) goto event_2914_83_end;
        media.stop_samples();
        next_frame = 86 + 0;    
    
    }
    event_2914_83_end: ;
}
void Frames::event_func_20524()
{
    // event 2916_83
    {
        if (!(group_main_engine_1)) goto event_2916_83_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->set_y(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(10)+sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(9))*8);
        {
            FrameObject * parent = ((Active*)get_instance(npcsyntax_2519_instances));
            if (parent == NULL) goto pos_end_2916_83_0;
            ((Active*)get_instance(syntaxprojection1_4100_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2916_83_0: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(syntaxprojection1_4100_instances));
            if (parent == NULL) goto pos_end_2916_83_1;
            ((Active*)get_instance(syntaxprojection2_4098_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_2916_83_1: ;
        }
        syntaxprojection3_4101_instances.clear_selection();
        for (ObjectIterator it(syntaxprojection3_4101_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(syntaxprojection1_4100_instances))->get_action_x()+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)get_instance(syntaxprojection1_4100_instances))->get_action_y()+((Active*)*it)->alterables->values.get(1));
        }
    }
    event_2916_83_end: ;
}
void Frames::event_func_20525()
{
    // event 2917_83
    {
        if (!(group_main_engine_1)) goto event_2917_83_end;
        if (!(((Active*)get_instance(npcsyntax_2519_instances))->alterables->flags.is_off(1))) goto event_2917_83_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.add(3, 2);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.add(8, 2);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.add(9, 2);
    }
    event_2917_83_end: ;
}
void Frames::event_func_20526()
{
    // event 2918_83
    {
        if (!(group_main_engine_1)) goto event_2918_83_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(11)) == (0))) goto event_2918_83_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->set_y(get_min(((Active*)get_instance(npcsyntax_2519_instances))->get_y(), 1765));
    }
    event_2918_83_end: ;
}
void Frames::event_func_20527()
{
    // event 2919_83
    {
        if (!(group_main_engine_1)) goto event_2919_83_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(11)) == (0))) goto event_2919_83_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(14)) == (1))) goto event_2919_83_end;
        npcsyntaxleftarm_2517_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxleftarm_2517_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcsyntax_2519_instances))->get_action_x()+cos_deg(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*15)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(6)+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(4))*((Active*)*it)->alterables->values.get(0)*6);
            ((Active*)*it)->set_y(((Active*)get_instance(npcsyntax_2519_instances))->get_action_y()+sin_deg(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*15)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(6)+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(4))*((Active*)*it)->alterables->values.get(0)*6);
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*20)*(0-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(6)-((Active*)*it)->alterables->values.get(0)*4)-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(4), 0);
        }
        npcsyntaxrightarm_2518_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxrightarm_2518_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcsyntax_2519_instances))->get_action_x()+28+cos_deg(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(8)-((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(7)+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(5))*((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*6);
            ((Active*)*it)->set_y(((Active*)get_instance(npcsyntax_2519_instances))->get_action_y()-1+sin_deg(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(8)-((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(7)+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(5))*((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*6);
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(8)-((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*20)*(0-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(7)-((Active*)*it)->alterables->values.get(0)*4)-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(5), 0);
        }
        ((Active*)get_instance(npcsyntax_2519_instances))->set_direction(0);
        for (ObjectIterator it(npcsyntaxleftarm_2517_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(npcsyntaxrightarm_2518_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_2919_83_end: ;
}
void Frames::event_func_20528()
{
    // event 2920_83
    {
        if (!(group_main_engine_1)) goto event_2920_83_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(11)) == (0))) goto event_2920_83_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(14)) == (-1))) goto event_2920_83_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->set_direction(16);
        npcsyntaxleftarm_2517_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxleftarm_2517_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcsyntax_2519_instances))->get_action_x()-28+cos_deg(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*15)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(6)+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(4))*((Active*)*it)->alterables->values.get(0)*6);
            ((Active*)*it)->set_y(((Active*)get_instance(npcsyntax_2519_instances))->get_action_y()+sin_deg(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*15)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(6)+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(4))*((Active*)*it)->alterables->values.get(0)*6);
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*20)*(0-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(6)-((Active*)*it)->alterables->values.get(0)*4)-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(4), 0);
            ((Active*)*it)->set_direction(16);
        }
        npcsyntaxrightarm_2518_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxrightarm_2518_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcsyntax_2519_instances))->get_action_x()+cos_deg(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(8)-((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(7)+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(5))*((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*6);
            ((Active*)*it)->set_y(((Active*)get_instance(npcsyntax_2519_instances))->get_action_y()-1+sin_deg(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(8)-((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(7)+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(5))*((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*6);
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(8)-((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*20)*(0-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(7)-((Active*)*it)->alterables->values.get(0)*4)-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(5), 0);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_2920_83_end: ;
}
void Frames::event_func_20529()
{
    // event 2921_83
    {
        if (!(group_main_engine_1)) goto event_2921_83_end;
        npcsyntaxleftarm_2517_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxleftarm_2517_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (npcsyntaxleftarm_2517_instances.size()-1))) { it.deselect(); continue; }
        }
        if (!npcsyntaxleftarm_2517_instances.has_selection()) goto event_2921_83_end;
        for (ObjectIterator it(npcsyntaxleftarm_2517_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
        }
    }
    event_2921_83_end: ;
}
void Frames::event_func_20530()
{
    // event 2922_83
    {
        if (!(group_main_engine_1)) goto event_2922_83_end;
        npcsyntaxrightarm_2518_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxrightarm_2518_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (npcsyntaxrightarm_2518_instances.size()-1))) { it.deselect(); continue; }
        }
        if (!npcsyntaxrightarm_2518_instances.has_selection()) goto event_2922_83_end;
        for (ObjectIterator it(npcsyntaxrightarm_2518_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
        }
    }
    event_2922_83_end: ;
}
void Frames::event_func_20531()
{
    // event 3055_83
    {
        if (!(group_main_engine_1)) goto event_3055_83_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(20)) == (0))) goto event_3055_83_end;
        if (not_always_3055_83 > loop_count) {
            not_always_3055_83 = loop_count + 2;
            goto event_3055_83_end;
        }
        not_always_3055_83 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, ((Active*)get_instance(sign_351_instances))->get_x()+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, height);
    }
    event_3055_83_end: ;
}
void Frames::event_func_20532()
{
    // event 3172_83
    {
        if (!(group_pause_1)) goto event_3172_83_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_3172_83_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_3172_83_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_3172_83_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_3172_83_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(true);
        media.pause_samples();
            group_main_engine_1 = false;
    
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 5);
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
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
        ((Active*)get_instance(npcneera_2464_instances))->stop_animation();
        ((Active*)get_instance(themagister_2115_instances))->stop_animation();
        ((Active*)get_instance(gongshield_633_instances))->stop_animation();
        ((Active*)get_instance(npcgong_634_instances))->stop_animation();
        npcsgmerc_4021_instances.clear_selection();
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        npcking_4099_instances.clear_selection();
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(npcsyntax_2519_instances))->stop_animation();
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        npcsgmerc2_4096_instances.clear_selection();
        for (ObjectIterator it(npcsgmerc2_4096_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(syntaxprojection1_4100_instances))->stop_animation();
        ((Active*)get_instance(syntaxprojection2_4098_instances))->stop_animation();
        syntaxprojection3_4101_instances.clear_selection();
        for (ObjectIterator it(syntaxprojection3_4101_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        crowd_4129_instances.clear_selection();
        for (ObjectIterator it(crowd_4129_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        kingdomstone_1587_instances.clear_selection();
        for (ObjectIterator it(kingdomstone_1587_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        kingdomstonebig_4102_instances.clear_selection();
        for (ObjectIterator it(kingdomstonebig_4102_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guipause_453_instances))->move_front();
        ((Active*)get_instance(crystal_456_instances))->move_front();
        ((Active*)get_instance(npcmayor_3950_instances))->stop_animation();
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(npcdinnercarol_4112_instances))->stop_animation();
        ((Active*)get_instance(npcdinnerlilac_4106_instances))->stop_animation();
        ((Active*)get_instance(npcdinnermilla_4109_instances))->stop_animation();
        npcdisgruntledservant_4137_instances.clear_selection();
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(npcdinnerlilac2_4107_instances))->stop_animation();
        ((Active*)get_instance(npcdinnercarol2_4108_instances))->stop_animation();
        ((Active*)get_instance(npcdinnertorque_4113_instances))->stop_animation();
        ((Active*)get_instance(npcfallenhero_4111_instances))->stop_animation();
        effectzaobuff_3947_instances.clear_selection();
        for (ObjectIterator it(effectzaobuff_3947_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bathfiller_4118_instances))->stop_animation();
        for (ObjectIterator it(floorcandle2_4117_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(npclilacbath_4116_instances))->stop_animation();
        ((Active*)get_instance(npchologram1_3060_instances))->stop_animation();
        ((Active*)get_instance(npchologram2_3074_instances))->stop_animation();
        ((Active*)get_instance(npcpangu_3073_instances))->stop_animation();
        waterfallback_1016_instances.clear_selection();
        for (ObjectIterator it(waterfallback_1016_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        waterfallfront_1061_instances.clear_selection();
        for (ObjectIterator it(waterfallfront_1061_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(npcshellduck_533_instances))->stop_animation();
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        endingsparkle_578_instances.clear_selection();
        for (ObjectIterator it(endingsparkle_578_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_3172_83_end: ;
}
void Frames::event_func_20533()
{
    // event 3173_83
    bool or_result_3173_83 = false;
    bool or_temp_result_3173_83_0 = false;
    {
        if (!(group_pause_1)) goto or_event_3173_83_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_3173_83_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_3173_83_0_end;
        or_result_3173_83 = true;
        or_temp_result_3173_83_0 = true;
    }
    or_event_3173_83_0_end: ;
    // event 3173_83
    bool or_temp_result_3173_83_1 = false;
    {
        if (!(group_pause_1)) goto or_event_3173_83_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_3173_83_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_3173_83_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_3173_83_1_end;
        or_result_3173_83 = true;
        or_temp_result_3173_83_1 = true;
        or_event_3173_83_1_end: ;
        if (!or_result_3173_83) goto or_final_or_event_3173_83_1_end;
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
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
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
        ((Active*)get_instance(npcgong_634_instances))->start_animation();
        ((Active*)get_instance(gongshield_633_instances))->start_animation();
        ((Active*)get_instance(npcneera_2464_instances))->start_animation();
        ((Active*)get_instance(themagister_2115_instances))->start_animation();
        npcsgmerc_4021_instances.clear_selection();
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        npcking_4099_instances.clear_selection();
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(npcsyntax_2519_instances))->start_animation();
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        npcsgmerc2_4096_instances.clear_selection();
        for (ObjectIterator it(npcsgmerc2_4096_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(syntaxprojection1_4100_instances))->start_animation();
        ((Active*)get_instance(syntaxprojection2_4098_instances))->start_animation();
        syntaxprojection3_4101_instances.clear_selection();
        for (ObjectIterator it(syntaxprojection3_4101_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        crowd_4129_instances.clear_selection();
        for (ObjectIterator it(crowd_4129_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        kingdomstone_1587_instances.clear_selection();
        for (ObjectIterator it(kingdomstone_1587_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        kingdomstonebig_4102_instances.clear_selection();
        for (ObjectIterator it(kingdomstonebig_4102_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        npcdisgruntledservant_4137_instances.clear_selection();
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(npcdinnermilla_4109_instances))->start_animation();
        ((Active*)get_instance(npcdinnerlilac_4106_instances))->start_animation();
        ((Active*)get_instance(npcdinnercarol_4112_instances))->start_animation();
        ((Active*)get_instance(npcmayor_3950_instances))->start_animation();
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(npcdinnerlilac2_4107_instances))->start_animation();
        ((Active*)get_instance(npcdinnercarol2_4108_instances))->start_animation();
        ((Active*)get_instance(npcdinnertorque_4113_instances))->start_animation();
        ((Active*)get_instance(npcfallenhero_4111_instances))->start_animation();
        effectzaobuff_3947_instances.clear_selection();
        for (ObjectIterator it(effectzaobuff_3947_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bathfiller_4118_instances))->start_animation();
        for (ObjectIterator it(floorcandle2_4117_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(npclilacbath_4116_instances))->start_animation();
        ((Active*)get_instance(npchologram1_3060_instances))->start_animation();
        ((Active*)get_instance(npchologram2_3074_instances))->start_animation();
        ((Active*)get_instance(npcpangu_3073_instances))->start_animation();
        waterfallback_1016_instances.clear_selection();
        for (ObjectIterator it(waterfallback_1016_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        waterfallfront_1061_instances.clear_selection();
        for (ObjectIterator it(waterfallfront_1061_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(npcshellduck_533_instances))->start_animation();
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        endingsparkle_578_instances.clear_selection();
        for (ObjectIterator it(endingsparkle_578_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_3173_83_1_end: ;
}
void Frames::event_func_20534()
{
    // event 3180_83
    {
        if (!(group_pause_1)) goto event_3180_83_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_3180_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_3180_83_end;
        if (!((global_values->get(4)) <= (0))) goto event_3180_83_end;
        next_frame = 15 + 0;    
    
        global_values->set(4, 11);
        media.stop_samples();
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 9);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_3180_83_end: ;
}
void Frames::event_func_20535()
{
    // event 3181_83
    {
        if (!(group_pause_1)) goto event_3181_83_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_3181_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_3181_83_end;
        if (!((global_values->get(4)) > (0))) goto event_3181_83_end;
        if (!((global_values->get(4)) < (4))) goto event_3181_83_end;
        next_frame = 14 + 0;    
    
        global_values->set(4, 12);
        media.stop_samples();
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 9);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_3181_83_end: ;
}
void Frames::event_func_20536()
{
    // event 3182_83
    {
        if (!(group_pause_1)) goto event_3182_83_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_3182_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_3182_83_end;
        if (!((global_values->get(4)) == (4))) goto event_3182_83_end;
        global_values->set(4, 5);
        next_frame = (index+1-0)-1 + 0;    
    
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 9);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_3182_83_end: ;
}
void Frames::event_func_20537()
{
    // event 3183_83
    {
        if (!(group_pause_1)) goto event_3183_83_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_3183_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_3183_83_end;
        if (!((global_values->get(4)) == (5))) goto event_3183_83_end;
        global_values->set(4, 6);
        next_frame = (index+1-0)-1 + 0;    
    
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 9);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_3183_83_end: ;
}
void Frames::event_func_20538()
{
    // event 3184_83
    {
        if (!(group_pause_1)) goto event_3184_83_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_3184_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_3184_83_end;
        if (!((global_values->get(4)) == (6))) goto event_3184_83_end;
        global_values->set(4, 99);
        next_frame = 35 + 0;    
    
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 9);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_3184_83_end: ;
}
void Frames::event_func_20539()
{
    // event 3185_83
    {
        if (!(group_pause_1)) goto event_3185_83_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_3185_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_3185_83_end;
        if (!((global_values->get(4)) == (7))) goto event_3185_83_end;
        global_values->set(4, 0);
        next_frame = 35 + 0;    
    
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 9);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_3185_83_end: ;
}
void Frames::event_func_20540()
{
    // event 3186_83
    {
        if (!(group_pause_1)) goto event_3186_83_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_3186_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_3186_83_end;
        if (!((global_values->get(4)) == (8))) goto event_3186_83_end;
        global_values->set(4, 9);
        next_frame = (index+1-0)-1 + 0;    
    
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 9);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_3186_83_end: ;
}
void Frames::event_func_20541()
{
    // event 3187_83
    {
        if (!(group_pause_1)) goto event_3187_83_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_3187_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_3187_83_end;
        if (!((global_values->get(4)) == (9))) goto event_3187_83_end;
        global_values->set(4, 10);
        next_frame = (index+1-0)-1 + 0;    
    
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 9);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_3187_83_end: ;
}
void Frames::event_func_20542()
{
    // event 3188_83
    {
        if (!(group_pause_1)) goto event_3188_83_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_3188_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_3188_83_end;
        if (!((global_values->get(4)) == (10))) goto event_3188_83_end;
        global_values->set(4, 11);
        next_frame = (index+1-0)-1 + 0;    
    
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 9);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_3188_83_end: ;
}
void Frames::event_func_20543()
{
    // event 3189_83
    {
        if (!(group_pause_1)) goto event_3189_83_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_3189_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_3189_83_end;
        if (!((global_values->get(4)) == (11))) goto event_3189_83_end;
        global_values->set(4, 0);
        next_frame = 39 + 0;    
    
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 9);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_3189_83_end: ;
}
void Frames::event_func_20544()
{
    // event 3190_83
    {
        if (!(group_pause_1)) goto event_3190_83_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_3190_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_3190_83_end;
        if (!((global_values->get(4)) == (12))) goto event_3190_83_end;
        global_values->set(4, 99);
        next_frame = 35 + 0;    
    
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 9);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_3190_83_end: ;
}
void Frames::event_func_20545()
{
    // event 3191_83
    {
        if (!(group_pause_1)) goto event_3191_83_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_3191_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_3191_83_end;
        if (!((global_values->get(4)) == (13))) goto event_3191_83_end;
        if (!((global_values->get(1)) == (0))) goto event_3191_83_end;
        global_values->set(4, 0);
        next_frame = 44 + 0;    
    
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 9);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_3191_83_end: ;
}
void Frames::event_func_20546()
{
    // event 3192_83
    {
        if (!(group_pause_1)) goto event_3192_83_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_3192_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_3192_83_end;
        if (!((global_values->get(4)) == (13))) goto event_3192_83_end;
        if (!((global_values->get(1)) != (0))) goto event_3192_83_end;
        global_values->set(4, 14);
        next_frame = (index+1-0)-1 + 0;    
    
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 9);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_3192_83_end: ;
}
void Frames::event_func_20547()
{
    // event 3193_83
    {
        if (!(group_pause_1)) goto event_3193_83_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_3193_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_3193_83_end;
        if (!((global_values->get(4)) == (14))) goto event_3193_83_end;
        global_values->set(4, 0);
        next_frame = 56 + 0;    
    
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 9);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_3193_83_end: ;
}
void Frames::event_func_20548()
{
    // event 3194_83
    {
        if (!(group_pause_1)) goto event_3194_83_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_3194_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_3194_83_end;
        if (!((global_values->get(4)) == (15))) goto event_3194_83_end;
        global_values->set(4, 17);
        next_frame = (index+1-0)-1 + 0;    
    
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 9);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_3194_83_end: ;
}
void Frames::event_func_20549()
{
    // event 3195_83
    {
        if (!(group_pause_1)) goto event_3195_83_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_3195_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_3195_83_end;
        if (!((global_values->get(4)) == (16))) goto event_3195_83_end;
        global_values->set(4, 99);
        next_frame = 35 + 0;    
    
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 9);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_3195_83_end: ;
}
void Frames::event_func_20550()
{
    // event 3196_83
    {
        if (!(group_pause_1)) goto event_3196_83_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_3196_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_3196_83_end;
        if (!((global_values->get(4)) == (17))) goto event_3196_83_end;
        if (!((global_values->get(1)) == (0))) goto event_3196_83_end;
        global_values->set(4, 18);
        next_frame = (index+1-0)-1 + 0;    
    
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 9);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_3196_83_end: ;
}
void Frames::event_func_20551()
{
    // event 3197_83
    {
        if (!(group_pause_1)) goto event_3197_83_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_3197_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_3197_83_end;
        if (!((global_values->get(4)) == (17))) goto event_3197_83_end;
        if (!((global_values->get(1)) != (0))) goto event_3197_83_end;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 9);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        global_values->set(4, 0);
        next_frame = 82 + 0;    
    
    }
    event_3197_83_end: ;
}
void Frames::event_func_20552()
{
    // event 3198_83
    {
        if (!(group_pause_1)) goto event_3198_83_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_3198_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_3198_83_end;
        if (!((global_values->get(4)) == (18))) goto event_3198_83_end;
        global_values->set(4, 19);
        next_frame = (index+1-0)-1 + 0;    
    
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 9);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_3198_83_end: ;
}
void Frames::event_func_20553()
{
    // event 3199_83
    {
        if (!(group_pause_1)) goto event_3199_83_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_3199_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_3199_83_end;
        if (!((global_values->get(4)) == (19))) goto event_3199_83_end;
        global_values->set(4, 0);
        next_frame = 50 + 0;    
    
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 9);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_3199_83_end: ;
}
void Frames::event_func_20554()
{
    // event 3200_83
    {
        if (!(group_pause_1)) goto event_3200_83_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) >= (3))) goto event_3200_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_3200_83_end;
        if (!((global_values->get(4)) == (20))) goto event_3200_83_end;
        global_values->set(4, 0);
        next_frame = 85 + 0;    
    
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 9);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_3200_83_end: ;
}
void Frames::event_func_20555()
{
    // event 3201_83
    {
        if (!(group_pause_1)) goto event_3201_83_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) >= (3))) goto event_3201_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_3201_83_end;
        if (!((global_values->get(4)) == (21))) goto event_3201_83_end;
        global_values->set(4, 0);
        next_frame = 67 + 0;    
    
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 9);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_3201_83_end: ;
}
void Frames::event_func_20556()
{
    // event 3202_83
    {
        if (!(group_pause_1)) goto event_3202_83_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (4))) goto event_3202_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_3202_83_end;
        if (!((global_values->get(4)) < (4))) goto event_3202_83_end;
        next_frame = 29 + 0;    
    
        global_values->set(4, 0);
        media.stop_samples();
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, ((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 3));
    }
    event_3202_83_end: ;
}
void Frames::event_func_20557()
{
    // event 3203_83
    {
        if (!(group_pause_1)) goto event_3203_83_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (4))) goto event_3203_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_3203_83_end;
        if (!((global_values->get(4)) >= (4))) goto event_3203_83_end;
        if (!((global_values->get(4)) <= (7))) goto event_3203_83_end;
        next_frame = 35 + 0;    
    
        global_values->set(4, 0);
        media.stop_samples();
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, ((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 3));
    }
    event_3203_83_end: ;
}
void Frames::event_func_20558()
{
    // event 3204_83
    {
        if (!(group_pause_1)) goto event_3204_83_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (4))) goto event_3204_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_3204_83_end;
        if (!((global_values->get(4)) >= (8))) goto event_3204_83_end;
        if (!((global_values->get(4)) <= (12))) goto event_3204_83_end;
        next_frame = 39 + 0;    
    
        global_values->set(4, 0);
        media.stop_samples();
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, ((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 3));
    }
    event_3204_83_end: ;
}
void Frames::event_func_20559()
{
    // event 3205_83
    {
        if (!(group_pause_1)) goto event_3205_83_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (4))) goto event_3205_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_3205_83_end;
        if (!((global_values->get(4)) == (13))) goto event_3205_83_end;
        if (!((global_values->get(1)) == (0))) goto event_3205_83_end;
        next_frame = 44 + 0;    
    
        global_values->set(4, 0);
        media.stop_samples();
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, ((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 3));
    }
    event_3205_83_end: ;
}
void Frames::event_func_20560()
{
    // event 3206_83
    {
        if (!(group_pause_1)) goto event_3206_83_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (4))) goto event_3206_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_3206_83_end;
        if (!((global_values->get(4)) == (13))) goto event_3206_83_end;
        if (!((global_values->get(1)) != (0))) goto event_3206_83_end;
        next_frame = 56 + 0;    
    
        global_values->set(4, 0);
        media.stop_samples();
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, ((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 3));
    }
    event_3206_83_end: ;
}
void Frames::event_func_20561()
{
    // event 3207_83
    {
        if (!(group_pause_1)) goto event_3207_83_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (4))) goto event_3207_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_3207_83_end;
        if (!((global_values->get(4)) >= (14))) goto event_3207_83_end;
        if (!((global_values->get(4)) <= (15))) goto event_3207_83_end;
        next_frame = 56 + 0;    
    
        global_values->set(4, 0);
        media.stop_samples();
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, ((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 3));
    }
    event_3207_83_end: ;
}
void Frames::event_func_20562()
{
    // event 3208_83
    {
        if (!(group_pause_1)) goto event_3208_83_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (4))) goto event_3208_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_3208_83_end;
        if (!((global_values->get(4)) == (16))) goto event_3208_83_end;
        next_frame = 44 + 0;    
    
        global_values->set(4, 0);
        media.stop_samples();
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, ((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 3));
    }
    event_3208_83_end: ;
}
void Frames::event_func_20563()
{
    // event 3209_83
    {
        if (!(group_pause_1)) goto event_3209_83_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (4))) goto event_3209_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_3209_83_end;
        if (!((global_values->get(4)) >= (17))) goto event_3209_83_end;
        if (!((global_values->get(4)) <= (19))) goto event_3209_83_end;
        if (!((global_values->get(1)) == (0))) goto event_3209_83_end;
        next_frame = 50 + 0;    
    
        global_values->set(4, 0);
        media.stop_samples();
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, ((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 3));
    }
    event_3209_83_end: ;
}
void Frames::event_func_20564()
{
    // event 3210_83
    {
        if (!(group_pause_1)) goto event_3210_83_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (4))) goto event_3210_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_3210_83_end;
        if (!((global_values->get(4)) >= (17))) goto event_3210_83_end;
        if (!((global_values->get(4)) <= (19))) goto event_3210_83_end;
        if (!((global_values->get(1)) != (0))) goto event_3210_83_end;
        next_frame = 85 + 0;    
    
        global_values->set(4, 0);
        media.stop_samples();
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, ((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 3));
    }
    event_3210_83_end: ;
}
void Frames::handle_frame_84_events()
{
    test_collisions_83();
    event_func_19166();
    event_func_2760();
    event_func_2764();
    event_func_2767();
    event_func_2777();
    event_func_2804();
    event_func_2805();
    event_func_2806();
    event_func_2813();
    event_func_2820();
    event_func_2821();
    event_func_2822();
    event_func_1957();
    event_func_2128();
    event_func_2859();
    event_func_2266();
    event_func_2270();
    event_func_19384();
    event_func_19883();
    event_func_2650();
    if (!group_main_engine_1) goto group_main_engine_1_end;
    event_func_1349();
    if (!group_main_engine_global_methods_player_1) goto group_main_engine_global_methods_player_1_end;
    event_func_2728();
    event_func_2729();
    event_func_2730();
    event_func_2731();
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
    event_func_2735();
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
    event_func_2736();
    group_main_engine_global_methods_player_player_movement_1_end: ;
    event_func_6053();
    event_func_1425();
    event_func_1426();
    event_func_1427();
    event_func_1428();
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
    event_func_2738();
    event_func_2739();
    event_func_2740();
    event_func_2741();
    event_func_1453();
    event_func_1454();
    event_func_1455();
    event_func_1456();
    event_func_1457();
    event_func_1458();
    event_func_1459();
    event_func_1460();
    event_func_1461();
    event_func_2742();
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
    event_func_2744();
    event_func_1473();
    event_func_16748();
    event_func_1475();
    event_func_1476();
    event_func_1477();
    event_func_1478();
    event_func_1479();
    event_func_1480();
    event_func_1481();
    event_func_1482();
    event_func_1483();
    event_func_2745();
    event_func_2746();
    event_func_2747();
    event_func_2748();
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
    event_func_2749();
    event_func_1542();
    event_func_1543();
    event_func_1544();
    event_func_1545();
    event_func_1546();
    event_func_1547();
    event_func_2750();
    event_func_2751();
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
    event_func_2752();
    event_func_2753();
    event_func_2754();
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
    event_func_2755();
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
    event_func_2756();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1_end;
    event_func_1637();
    event_func_1638();
    event_func_1639();
    event_func_1640();
    event_func_1641();
    event_func_1642();
    event_func_1643();
    event_func_2757();
    event_func_2758();
    event_func_2759();
    event_func_1648();
    event_func_1649();
    event_func_1650();
    event_func_2761();
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
    event_func_2762();
    event_func_1677();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1_end;
    event_func_2763();
    event_func_1679();
    event_func_2765();
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
    event_func_2766();
    event_func_1694();
    event_func_1695();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1_end;
    event_func_1696();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1_end;
    event_func_1698();
    event_func_2768();
    event_func_2769();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1_end;
    event_func_1701();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1_end;
    event_func_2770();
    event_func_1703();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1_end;
    event_func_1704();
    event_func_1705();
    event_func_2775();
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
    event_func_2776();
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
    event_func_2778();
    event_func_2779();
    event_func_2780();
    event_func_2781();
    event_func_1750();
    event_func_1751();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end;
    event_func_1752();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1) goto group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1_end;
    event_func_1753();
    event_func_2782();
    event_func_1755();
    event_func_1756();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_16749();
    event_func_1759();
    event_func_16750();
    event_func_1763();
    event_func_1764();
    event_func_1765();
    event_func_1766();
    event_func_16751();
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
    event_func_2784();
    event_func_2785();
    event_func_1781();
    event_func_2786();
    event_func_2787();
    event_func_1784();
    event_func_16752();
    event_func_1786();
    event_func_1787();
    event_func_1788();
    event_func_1789();
    event_func_1790();
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1_end;
    event_func_2788();
    event_func_1792();
    event_func_2789();
    event_func_2790();
    event_func_1795();
    event_func_1796();
    event_func_1797();
    event_func_1798();
    event_func_1799();
    event_func_1800();
    event_func_2791();
    event_func_2792();
    event_func_2793();
    event_func_2794();
    event_func_2795();
    event_func_1806();
    event_func_1807();
    event_func_2796();
    event_func_1809();
    event_func_1810();
    event_func_1811();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1_end;
    event_func_2797();
    event_func_1813();
    event_func_1814();
    event_func_1815();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end;
    event_func_1816();
    event_func_2798();
    event_func_2799();
    event_func_2800();
    event_func_2801();
    event_func_2802();
    event_func_2803();
    event_func_2807();
    event_func_1827();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end;
    event_func_2808();
    event_func_2809();
    event_func_2810();
    event_func_2811();
    event_func_2812();
    event_func_2814();
    event_func_2815();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1_end;
    event_func_1836();
    event_func_2816();
    event_func_2817();
    event_func_2818();
    event_func_1840();
    event_func_1841();
    event_func_1842();
    event_func_2819();
    event_func_1844();
    event_func_16753();
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
    event_func_2823();
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
    event_func_19167();
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
    event_func_16755();
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
    event_func_2824();
    event_func_1973();
    event_func_2825();
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
    event_func_16756();
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
    event_func_2836();
    event_func_2043();
    event_func_2837();
    event_func_2838();
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
    event_func_2082();
    event_func_2083();
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
    event_func_2842();
    event_func_2142();
    event_func_2143();
    event_func_1301();
    event_func_2144();
    event_func_1302();
    event_func_2145();
    event_func_2146();
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1_end: ;
    event_func_2698();
    event_func_2147();
    event_func_2148();
    event_func_2843();
    event_func_2844();
    event_func_2151();
    event_func_2845();
    event_func_2846();
    event_func_2847();
    event_func_2848();
    event_func_2156();
    event_func_2849();
    event_func_2850();
    event_func_2851();
    event_func_2852();
    event_func_2853();
    event_func_2854();
    event_func_2855();
    event_func_2856();
    event_func_2857();
    event_func_2858();
    event_func_2860();
    event_func_2861();
    event_func_2862();
    event_func_2863();
    event_func_2864();
    event_func_2865();
    event_func_2866();
    event_func_2867();
    event_func_2868();
    event_func_2869();
    event_func_2870();
    event_func_2871();
    event_func_2872();
    event_func_2873();
    event_func_2874();
    event_func_2875();
    event_func_2876();
    event_func_2877();
    event_func_2878();
    event_func_2879();
    event_func_2880();
    event_func_2881();
    event_func_2882();
    event_func_2883();
    event_func_2884();
    event_func_2885();
    event_func_2886();
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
    event_func_2887();
    event_func_2888();
    event_func_2889();
    event_func_2890();
    event_func_2891();
    event_func_2892();
    event_func_2893();
    event_func_2221();
    event_func_2894();
    event_func_2895();
    event_func_2896();
    event_func_2225();
    event_func_2226();
    event_func_2227();
    event_func_2228();
    event_func_2229();
    event_func_2230();
    event_func_2231();
    event_func_2232();
    event_func_2897();
    event_func_2898();
    event_func_2899();
    event_func_2900();
    event_func_2237();
    event_func_2901();
    event_func_2902();
    event_func_2903();
    event_func_2904();
    event_func_2905();
    event_func_2906();
    event_func_2907();
    event_func_2908();
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
    event_func_16757();
    event_func_2289();
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
    event_func_2912();
    event_func_2314();
    event_func_2913();
    event_func_2914();
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
    event_func_2321();
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
    event_func_16758();
    event_func_16759();
    event_func_16760();
    event_func_16761();
    event_func_16762();
    event_func_16763();
    if (!group_main_engine_global_methods_common_objects_shields_2_1_wood_shield_2_1) goto group_main_engine_global_methods_common_objects_shields_2_1_wood_shield_2_1_end;
    event_func_16764();
    event_func_16765();
    event_func_16766();
    event_func_16767();
    event_func_16768();
    event_func_16769();
    event_func_16770();
    event_func_16771();
    event_func_16772();
    group_main_engine_global_methods_common_objects_shields_2_1_wood_shield_2_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_2_2_flame_shield_2_1) goto group_main_engine_global_methods_common_objects_shields_2_2_flame_shield_2_1_end;
    event_func_16773();
    event_func_16774();
    event_func_16775();
    event_func_16776();
    group_main_engine_global_methods_common_objects_shields_2_2_flame_shield_2_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_2_3_magnetic_shield_2_1) goto group_main_engine_global_methods_common_objects_shields_2_3_magnetic_shield_2_1_end;
    event_func_16777();
    event_func_16778();
    group_main_engine_global_methods_common_objects_shields_2_3_magnetic_shield_2_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_2_4_water_shield_2_1) goto group_main_engine_global_methods_common_objects_shields_2_4_water_shield_2_1_end;
    event_func_16779();
    event_func_16780();
    event_func_16781();
    event_func_16782();
    event_func_16783();
    event_func_16784();
    event_func_16785();
    group_main_engine_global_methods_common_objects_shields_2_4_water_shield_2_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_2_5_earth_shield_2_1) goto group_main_engine_global_methods_common_objects_shields_2_5_earth_shield_2_1_end;
    event_func_16786();
    event_func_16787();
    event_func_16788();
    event_func_16789();
    event_func_16790();
    group_main_engine_global_methods_common_objects_shields_2_5_earth_shield_2_1_end: ;
    event_func_2946();
    event_func_2947();
    event_func_2948();
    event_func_2949();
    event_func_2423();
    event_func_2950();
    event_func_2425();
    event_func_2426();
    event_func_2427();
    event_func_2428();
    event_func_2429();
    event_func_2430();
    event_func_2951();
    event_func_2952();
    event_func_2433();
    event_func_2953();
    event_func_2435();
    event_func_2954();
    event_func_2955();
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
    event_func_6058();
    event_func_2476();
    event_func_2477();
    event_func_2478();
    event_func_2479();
    event_func_2480();
    event_func_2481();
    event_func_2482();
    event_func_2483();
    event_func_2484();
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
    event_func_2978();
    event_func_2979();
    event_func_2980();
    event_func_4355();
    event_func_4356();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    if (!group_main_engine_level_specific_methods_frame_transition_1) goto group_main_engine_level_specific_methods_frame_transition_1_end;
    event_func_19168();
    event_func_5352();
    event_func_19169();
    event_func_19170();
    event_func_19171();
    group_main_engine_level_specific_methods_frame_transition_1_end: ;
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_dialog_system_1) goto group_main_engine_level_specific_methods_cutscenes_dialog_system_1_end;
    event_func_15491();
    event_func_15492();
    event_func_15493();
    event_func_15494();
    event_func_15495();
    event_func_15496();
    event_func_15497();
    event_func_15498();
    event_func_15499();
    event_func_15500();
    event_func_15501();
    event_func_15502();
    event_func_15503();
    event_func_15504();
    event_func_15505();
    event_func_15506();
    event_func_15507();
    event_func_15508();
    if (!group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1) goto group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1_end;
    event_func_15509();
    event_func_15510();
    event_func_15511();
    event_func_15512();
    event_func_15513();
    event_func_15514();
    event_func_15515();
    event_func_15516();
    event_func_15517();
    event_func_15518();
    event_func_15519();
    event_func_15520();
    event_func_15521();
    event_func_15522();
    event_func_18606();
    event_func_18607();
    event_func_18608();
    event_func_15523();
    event_func_19172();
    event_func_18610();
    event_func_18611();
    event_func_18612();
    event_func_18613();
    event_func_18614();
    event_func_18615();
    event_func_18616();
    event_func_18617();
    event_func_19173();
    event_func_18619();
    event_func_18620();
    event_func_15525();
    event_func_19174();
    event_func_19175();
    group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1_end: ;
    event_func_15526();
    if (!group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1) goto group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1_end;
    event_func_15527();
    event_func_15528();
    event_func_15529();
    event_func_15530();
    event_func_15531();
    event_func_15532();
    event_func_15533();
    event_func_15534();
    event_func_15535();
    event_func_15536();
    event_func_15537();
    event_func_15538();
    event_func_15539();
    event_func_15540();
    event_func_15541();
    event_func_18621();
    event_func_18622();
    event_func_19176();
    event_func_18624();
    event_func_18625();
    event_func_18626();
    event_func_18627();
    event_func_18628();
    event_func_18629();
    event_func_18630();
    event_func_18631();
    event_func_19177();
    event_func_18633();
    event_func_18634();
    event_func_15543();
    event_func_19178();
    event_func_19179();
    group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1_end: ;
    event_func_15544();
    group_main_engine_level_specific_methods_cutscenes_dialog_system_1_end: ;
    event_func_3004();
    event_func_3005();
    event_func_3006();
    event_func_3007();
    if (!group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1) goto group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1_end;
    event_func_19180();
    event_func_19181();
    event_func_19182();
    event_func_19183();
    event_func_19184();
    event_func_19185();
    event_func_19186();
    event_func_19187();
    event_func_19188();
    event_func_19189();
    event_func_19190();
    event_func_19191();
    event_func_19192();
    event_func_19193();
    event_func_19194();
    event_func_19195();
    event_func_19196();
    event_func_19197();
    event_func_19198();
    event_func_19199();
    event_func_19200();
    event_func_19201();
    event_func_19202();
    event_func_19203();
    event_func_19204();
    event_func_19205();
    event_func_19206();
    event_func_19207();
    event_func_19208();
    event_func_19209();
    event_func_19210();
    event_func_19211();
    event_func_19212();
    event_func_19213();
    event_func_19214();
    event_func_19215();
    event_func_19216();
    event_func_19217();
    event_func_19218();
    group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1) goto group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1_end;
    event_func_19219();
    event_func_19220();
    event_func_19221();
    event_func_19222();
    event_func_19223();
    event_func_19224();
    event_func_19225();
    event_func_19226();
    event_func_19227();
    event_func_19228();
    event_func_19229();
    event_func_19230();
    event_func_19231();
    event_func_19232();
    event_func_19233();
    event_func_19234();
    event_func_19235();
    event_func_19236();
    event_func_19237();
    event_func_19238();
    event_func_19239();
    event_func_19240();
    event_func_19241();
    event_func_19242();
    event_func_19243();
    event_func_19244();
    event_func_19245();
    event_func_19246();
    event_func_19247();
    event_func_19248();
    event_func_19249();
    event_func_19250();
    event_func_19251();
    event_func_19252();
    event_func_19253();
    event_func_19254();
    event_func_19255();
    event_func_19256();
    event_func_19257();
    event_func_19258();
    event_func_19259();
    event_func_19260();
    event_func_19261();
    event_func_19262();
    event_func_19263();
    event_func_19264();
    event_func_19265();
    event_func_19266();
    event_func_19267();
    event_func_19268();
    event_func_19269();
    event_func_19270();
    event_func_19271();
    event_func_19272();
    event_func_19273();
    event_func_19274();
    event_func_19275();
    event_func_19276();
    event_func_19277();
    event_func_19278();
    event_func_19279();
    event_func_19280();
    event_func_19281();
    event_func_19282();
    group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_intro_scene_1) goto group_main_engine_level_specific_methods_cutscenes_intro_scene_1_end;
    event_func_19283();
    event_func_19284();
    event_func_19285();
    event_func_19286();
    event_func_19287();
    event_func_19288();
    event_func_19289();
    event_func_19290();
    event_func_19291();
    event_func_19292();
    event_func_19293();
    event_func_19294();
    event_func_19295();
    event_func_19296();
    event_func_19297();
    event_func_19298();
    event_func_19299();
    event_func_19300();
    event_func_19301();
    event_func_19302();
    event_func_19303();
    event_func_19304();
    event_func_19305();
    event_func_19306();
    event_func_19307();
    event_func_19308();
    event_func_19309();
    event_func_19310();
    event_func_19311();
    event_func_19312();
    event_func_19313();
    event_func_19314();
    event_func_19315();
    event_func_19316();
    event_func_19317();
    event_func_19318();
    event_func_19319();
    event_func_19320();
    event_func_19321();
    event_func_19322();
    event_func_19323();
    event_func_19324();
    event_func_19325();
    event_func_19326();
    event_func_19327();
    event_func_19328();
    event_func_19329();
    event_func_19330();
    event_func_19331();
    event_func_19332();
    event_func_19333();
    event_func_19334();
    event_func_19335();
    event_func_19336();
    event_func_19337();
    event_func_19338();
    event_func_19339();
    event_func_19340();
    event_func_19341();
    event_func_19342();
    event_func_19343();
    event_func_19344();
    event_func_19345();
    event_func_19346();
    event_func_19347();
    event_func_19348();
    event_func_19349();
    event_func_19350();
    event_func_19351();
    event_func_19352();
    event_func_19353();
    event_func_19354();
    event_func_19355();
    event_func_19356();
    event_func_19357();
    event_func_19358();
    event_func_19359();
    event_func_19360();
    event_func_19361();
    event_func_19362();
    event_func_19363();
    event_func_19364();
    event_func_19365();
    event_func_19366();
    event_func_19367();
    event_func_19368();
    event_func_19369();
    event_func_19370();
    event_func_19371();
    event_func_19372();
    event_func_19373();
    event_func_19374();
    event_func_19375();
    event_func_19376();
    event_func_19377();
    event_func_19378();
    event_func_19379();
    event_func_19380();
    event_func_19381();
    event_func_19382();
    event_func_19383();
    event_func_19385();
    event_func_19386();
    event_func_19387();
    event_func_19388();
    event_func_19389();
    event_func_19390();
    event_func_19391();
    event_func_19392();
    event_func_19393();
    event_func_19394();
    event_func_19395();
    event_func_19396();
    event_func_19397();
    event_func_19398();
    event_func_19399();
    event_func_19400();
    event_func_19401();
    event_func_19402();
    event_func_19403();
    event_func_19404();
    event_func_19405();
    event_func_19406();
    event_func_19407();
    event_func_19408();
    event_func_19409();
    event_func_19410();
    event_func_19411();
    event_func_19412();
    event_func_19413();
    event_func_19414();
    event_func_19415();
    event_func_19416();
    event_func_19417();
    event_func_19418();
    event_func_19419();
    event_func_19420();
    event_func_19421();
    event_func_19422();
    event_func_19423();
    event_func_19424();
    event_func_19425();
    event_func_19426();
    event_func_19427();
    event_func_19428();
    event_func_19429();
    event_func_19430();
    event_func_19431();
    event_func_19432();
    event_func_19433();
    event_func_19434();
    event_func_19435();
    event_func_19436();
    event_func_19437();
    event_func_19438();
    event_func_19439();
    event_func_19440();
    event_func_19441();
    event_func_19442();
    event_func_19443();
    event_func_19444();
    if (!group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1) goto group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1_end;
    event_func_19445();
    event_func_19446();
    event_func_19447();
    event_func_19448();
    event_func_19449();
    event_func_19450();
    event_func_19451();
    event_func_19452();
    event_func_19453();
    event_func_19454();
    event_func_19455();
    event_func_19456();
    event_func_19457();
    event_func_19458();
    event_func_19459();
    event_func_19460();
    event_func_19461();
    event_func_19462();
    event_func_19463();
    event_func_19464();
    event_func_19465();
    event_func_19466();
    event_func_19467();
    event_func_19468();
    event_func_19469();
    event_func_19470();
    event_func_19471();
    event_func_19472();
    event_func_19473();
    event_func_19474();
    event_func_19475();
    event_func_19476();
    event_func_19477();
    event_func_19478();
    event_func_19479();
    event_func_19480();
    event_func_19481();
    event_func_19482();
    event_func_19483();
    event_func_19484();
    event_func_19485();
    event_func_19486();
    event_func_19487();
    event_func_19488();
    event_func_19489();
    event_func_19490();
    event_func_19491();
    event_func_19492();
    event_func_19493();
    event_func_19494();
    event_func_19495();
    event_func_19496();
    event_func_19497();
    event_func_19498();
    event_func_19499();
    event_func_19500();
    event_func_19501();
    event_func_19502();
    event_func_19503();
    event_func_19504();
    event_func_19505();
    event_func_19506();
    event_func_19507();
    event_func_19508();
    event_func_19509();
    event_func_19510();
    event_func_19511();
    event_func_19512();
    event_func_19513();
    event_func_19513();
    event_func_19513();
    event_func_19514();
    event_func_19514();
    event_func_19514();
    event_func_19514();
    event_func_19515();
    event_func_19516();
    event_func_19517();
    event_func_19518();
    event_func_19519();
    event_func_19520();
    event_func_19521();
    event_func_19522();
    event_func_19523();
    event_func_19524();
    event_func_19525();
    event_func_19526();
    event_func_19527();
    event_func_19528();
    event_func_19529();
    event_func_19530();
    event_func_19531();
    event_func_19532();
    event_func_19533();
    event_func_19534();
    event_func_19535();
    group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1_end: ;
    event_func_19536();
    event_func_19537();
    event_func_19538();
    event_func_19539();
    event_func_19540();
    event_func_19541();
    event_func_19542();
    event_func_19543();
    event_func_19544();
    event_func_19545();
    event_func_19546();
    event_func_19547();
    event_func_19548();
    event_func_19549();
    event_func_19550();
    event_func_19551();
    event_func_19552();
    event_func_19553();
    event_func_19554();
    event_func_19555();
    event_func_19556();
    event_func_19557();
    event_func_19558();
    event_func_19559();
    event_func_19560();
    event_func_19561();
    event_func_19562();
    event_func_19563();
    event_func_19564();
    event_func_19565();
    event_func_19566();
    group_main_engine_level_specific_methods_cutscenes_intro_scene_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_kingdom_stone_1) goto group_main_engine_level_specific_methods_cutscenes_kingdom_stone_1_end;
    event_func_19567();
    event_func_19568();
    event_func_19569();
    event_func_19570();
    event_func_19571();
    event_func_19572();
    event_func_19573();
    event_func_19574();
    event_func_19575();
    event_func_19576();
    event_func_19577();
    event_func_19578();
    event_func_19579();
    event_func_19580();
    event_func_19581();
    event_func_19582();
    event_func_19583();
    event_func_19584();
    event_func_19585();
    group_main_engine_level_specific_methods_cutscenes_kingdom_stone_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1) goto group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1_end;
    event_func_19586();
    event_func_19587();
    event_func_19588();
    event_func_19589();
    event_func_19590();
    event_func_19591();
    event_func_19592();
    event_func_19593();
    event_func_19594();
    event_func_19595();
    event_func_19596();
    event_func_19597();
    event_func_19598();
    event_func_19599();
    event_func_19600();
    event_func_19601();
    event_func_19602();
    event_func_19603();
    event_func_19604();
    event_func_19605();
    event_func_19606();
    event_func_19607();
    event_func_19608();
    event_func_19609();
    event_func_19610();
    event_func_19611();
    event_func_19612();
    event_func_19613();
    event_func_19614();
    event_func_19615();
    event_func_19616();
    event_func_19617();
    event_func_19618();
    event_func_19619();
    event_func_19620();
    event_func_19621();
    event_func_19622();
    event_func_19623();
    event_func_19624();
    event_func_19625();
    event_func_19626();
    event_func_19627();
    event_func_19628();
    event_func_19629();
    event_func_19630();
    event_func_19631();
    event_func_19632();
    event_func_19633();
    event_func_19634();
    event_func_19635();
    event_func_19636();
    event_func_19637();
    event_func_19638();
    event_func_19639();
    event_func_19640();
    event_func_19641();
    event_func_19642();
    event_func_19643();
    event_func_19644();
    event_func_19645();
    event_func_19646();
    event_func_19647();
    event_func_19648();
    group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1) goto group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1_end;
    event_func_19649();
    event_func_19650();
    event_func_19651();
    event_func_19652();
    event_func_19653();
    event_func_19654();
    event_func_19655();
    event_func_19656();
    event_func_19657();
    event_func_19658();
    event_func_19659();
    event_func_19660();
    event_func_19661();
    event_func_19662();
    event_func_19663();
    event_func_19664();
    event_func_19665();
    event_func_19665();
    event_func_19665();
    event_func_19665();
    event_func_19665();
    event_func_19665();
    event_func_19665();
    event_func_19665();
    event_func_19665();
    event_func_19665();
    event_func_19665();
    event_func_19665();
    event_func_19665();
    event_func_19665();
    event_func_19665();
    event_func_19666();
    event_func_19667();
    event_func_19668();
    event_func_19669();
    event_func_19670();
    event_func_19671();
    event_func_19672();
    event_func_19673();
    event_func_19674();
    event_func_19675();
    event_func_19676();
    event_func_19677();
    event_func_19678();
    event_func_19679();
    event_func_19680();
    event_func_19681();
    event_func_19682();
    event_func_19683();
    event_func_19684();
    event_func_19685();
    event_func_19686();
    event_func_19687();
    event_func_19688();
    event_func_19689();
    event_func_19690();
    event_func_19691();
    event_func_19692();
    event_func_19693();
    event_func_19694();
    event_func_19695();
    event_func_19696();
    event_func_19697();
    event_func_19698();
    event_func_19699();
    event_func_19700();
    event_func_19701();
    event_func_19702();
    event_func_19703();
    event_func_19704();
    event_func_19705();
    event_func_19706();
    event_func_19707();
    event_func_19708();
    group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1) goto group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1_end;
    event_func_8306();
    event_func_19709();
    event_func_19710();
    event_func_19711();
    event_func_19712();
    event_func_19713();
    event_func_19714();
    event_func_19715();
    event_func_19716();
    event_func_19717();
    event_func_19718();
    event_func_19719();
    event_func_19720();
    event_func_19721();
    event_func_8311();
    event_func_19722();
    event_func_19723();
    event_func_19724();
    event_func_19725();
    event_func_19726();
    event_func_19727();
    event_func_19728();
    event_func_19729();
    event_func_19730();
    event_func_19731();
    event_func_8317();
    event_func_19732();
    event_func_19733();
    event_func_19734();
    event_func_19735();
    event_func_19736();
    event_func_19737();
    event_func_19738();
    event_func_19739();
    event_func_19740();
    event_func_19741();
    event_func_19742();
    event_func_19743();
    event_func_19744();
    event_func_19745();
    event_func_19746();
    event_func_19747();
    event_func_19748();
    event_func_19749();
    event_func_19750();
    event_func_19751();
    event_func_19752();
    event_func_19753();
    event_func_19754();
    group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1) goto group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1_end;
    event_func_19755();
    event_func_19756();
    event_func_19757();
    event_func_19758();
    event_func_19759();
    event_func_19760();
    event_func_19761();
    event_func_19762();
    event_func_19763();
    event_func_19764();
    event_func_19765();
    event_func_19766();
    event_func_19767();
    event_func_19768();
    event_func_19769();
    event_func_19770();
    event_func_19771();
    event_func_19772();
    event_func_19773();
    event_func_19774();
    event_func_19775();
    event_func_19776();
    event_func_19777();
    event_func_19778();
    event_func_19779();
    event_func_19780();
    event_func_19781();
    event_func_19782();
    event_func_19783();
    event_func_19784();
    event_func_19785();
    group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1) goto group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1_end;
    event_func_19786();
    event_func_19787();
    event_func_19788();
    event_func_19789();
    event_func_19790();
    event_func_19791();
    event_func_19792();
    event_func_19793();
    event_func_19794();
    event_func_19795();
    event_func_19796();
    event_func_19797();
    event_func_19798();
    event_func_19799();
    event_func_19800();
    event_func_19801();
    event_func_19802();
    event_func_19803();
    event_func_19804();
    event_func_19805();
    event_func_19806();
    event_func_19807();
    event_func_19808();
    event_func_19809();
    event_func_19810();
    event_func_19811();
    event_func_19812();
    event_func_19813();
    event_func_19814();
    event_func_19815();
    event_func_19816();
    event_func_19817();
    event_func_19818();
    event_func_19819();
    event_func_19820();
    event_func_19821();
    event_func_19822();
    event_func_19823();
    event_func_19824();
    event_func_19825();
    event_func_19826();
    event_func_19827();
    event_func_19828();
    event_func_19829();
    event_func_19830();
    event_func_19831();
    event_func_19832();
    event_func_19833();
    event_func_19834();
    event_func_19835();
    event_func_19836();
    event_func_19837();
    event_func_19838();
    event_func_19839();
    event_func_19840();
    event_func_19841();
    event_func_19842();
    event_func_19843();
    event_func_19844();
    event_func_19845();
    event_func_19846();
    event_func_19847();
    event_func_19848();
    event_func_19849();
    event_func_19850();
    event_func_19851();
    event_func_19852();
    event_func_19853();
    event_func_19854();
    event_func_19855();
    event_func_19856();
    event_func_19857();
    event_func_19858();
    event_func_19859();
    event_func_19860();
    event_func_19861();
    event_func_19862();
    event_func_19863();
    event_func_19864();
    event_func_19865();
    event_func_19866();
    event_func_19867();
    event_func_19868();
    event_func_19869();
    event_func_19870();
    event_func_19871();
    event_func_19872();
    event_func_19873();
    event_func_19874();
    event_func_19875();
    event_func_19876();
    event_func_19877();
    event_func_19878();
    event_func_19879();
    event_func_19880();
    event_func_19881();
    event_func_19882();
    event_func_19884();
    event_func_19885();
    event_func_19886();
    event_func_19887();
    event_func_19888();
    event_func_19889();
    event_func_19890();
    event_func_19891();
    event_func_19892();
    event_func_19893();
    event_func_19894();
    event_func_19895();
    group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1) goto group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1_end;
    event_func_19896();
    event_func_19897();
    event_func_19898();
    event_func_19899();
    event_func_19900();
    event_func_19901();
    event_func_19902();
    event_func_19903();
    event_func_19904();
    event_func_19905();
    event_func_19906();
    event_func_19907();
    event_func_19908();
    event_func_19909();
    event_func_19910();
    event_func_19911();
    event_func_19912();
    event_func_19913();
    event_func_19914();
    event_func_19915();
    event_func_19916();
    event_func_19917();
    event_func_19918();
    event_func_19919();
    event_func_19920();
    event_func_19921();
    event_func_19922();
    event_func_19923();
    event_func_19924();
    event_func_19925();
    event_func_19926();
    event_func_19927();
    event_func_19928();
    event_func_19929();
    event_func_19930();
    event_func_19931();
    event_func_19932();
    event_func_19933();
    event_func_19934();
    event_func_19935();
    event_func_19936();
    event_func_19937();
    event_func_19938();
    event_func_19939();
    event_func_19940();
    event_func_19941();
    event_func_19942();
    event_func_19943();
    event_func_19944();
    event_func_19945();
    event_func_19946();
    event_func_19947();
    event_func_19948();
    event_func_19949();
    event_func_19950();
    event_func_19951();
    event_func_19952();
    event_func_19953();
    group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1) goto group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1_end;
    event_func_19954();
    event_func_19955();
    event_func_19956();
    event_func_19957();
    event_func_19958();
    event_func_19959();
    event_func_19960();
    event_func_19961();
    event_func_19962();
    event_func_19963();
    event_func_19964();
    event_func_19965();
    event_func_19966();
    event_func_19967();
    event_func_19968();
    event_func_19969();
    event_func_19970();
    event_func_19971();
    event_func_19972();
    event_func_19973();
    event_func_19974();
    event_func_19975();
    event_func_19976();
    event_func_19977();
    event_func_19978();
    event_func_19979();
    event_func_19980();
    event_func_19981();
    event_func_19982();
    event_func_19983();
    event_func_19984();
    event_func_19985();
    event_func_19986();
    event_func_19987();
    event_func_19988();
    group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1) goto group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1_end;
    event_func_19989();
    event_func_19990();
    event_func_19991();
    event_func_19992();
    event_func_19993();
    event_func_19994();
    event_func_19995();
    event_func_19996();
    event_func_19997();
    event_func_19998();
    event_func_19999();
    event_func_20000();
    event_func_20001();
    event_func_20002();
    event_func_20003();
    event_func_20004();
    event_func_20005();
    event_func_20006();
    event_func_20007();
    event_func_20008();
    event_func_20009();
    event_func_20010();
    event_func_20011();
    event_func_20012();
    event_func_20013();
    event_func_20014();
    group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1) goto group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1_end;
    event_func_20015();
    event_func_20016();
    event_func_20017();
    event_func_20018();
    event_func_20019();
    event_func_20020();
    event_func_20021();
    event_func_20022();
    event_func_20023();
    event_func_20024();
    event_func_20025();
    event_func_20026();
    event_func_20027();
    event_func_20028();
    event_func_20029();
    event_func_20030();
    event_func_20031();
    event_func_20032();
    event_func_20033();
    event_func_20034();
    event_func_20035();
    event_func_20036();
    event_func_20037();
    event_func_20038();
    event_func_20039();
    event_func_20040();
    event_func_20041();
    event_func_20042();
    event_func_20043();
    event_func_20044();
    event_func_20045();
    event_func_20046();
    group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1) goto group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1_end;
    event_func_20047();
    event_func_20048();
    event_func_20049();
    event_func_20050();
    event_func_20051();
    event_func_20052();
    event_func_20053();
    event_func_20054();
    event_func_20055();
    event_func_20056();
    event_func_20057();
    event_func_20058();
    event_func_20059();
    event_func_20060();
    event_func_20061();
    event_func_20062();
    event_func_20063();
    event_func_20064();
    event_func_20065();
    event_func_20066();
    event_func_20067();
    event_func_20068();
    event_func_20069();
    event_func_20070();
    event_func_20071();
    event_func_20072();
    event_func_20073();
    event_func_20074();
    event_func_20075();
    event_func_20076();
    event_func_20077();
    event_func_20078();
    event_func_20079();
    event_func_20080();
    event_func_20081();
    event_func_20082();
    event_func_20083();
    event_func_20084();
    event_func_20085();
    event_func_20086();
    event_func_20087();
    event_func_20088();
    event_func_20089();
    event_func_20090();
    event_func_20091();
    event_func_20092();
    event_func_20093();
    event_func_20094();
    event_func_20095();
    event_func_20096();
    event_func_20097();
    event_func_20098();
    event_func_20099();
    event_func_20100();
    event_func_20101();
    event_func_20102();
    event_func_20103();
    event_func_20104();
    event_func_20105();
    event_func_20106();
    event_func_20107();
    event_func_20108();
    event_func_20109();
    event_func_20110();
    event_func_20111();
    event_func_20112();
    event_func_20113();
    event_func_20114();
    event_func_20115();
    event_func_20116();
    event_func_20117();
    event_func_20118();
    event_func_20119();
    event_func_20120();
    event_func_20121();
    event_func_20122();
    event_func_20123();
    event_func_20124();
    event_func_20125();
    event_func_20126();
    event_func_20127();
    event_func_20128();
    event_func_20129();
    group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_trap_hideout_1) goto group_main_engine_level_specific_methods_cutscenes_trap_hideout_1_end;
    event_func_20130();
    event_func_20131();
    event_func_20132();
    event_func_20133();
    event_func_20134();
    event_func_20135();
    event_func_20136();
    event_func_20137();
    event_func_20138();
    event_func_20139();
    event_func_20140();
    event_func_20141();
    event_func_20142();
    event_func_20143();
    event_func_20144();
    event_func_20145();
    event_func_20146();
    event_func_20147();
    event_func_20148();
    event_func_20149();
    event_func_20150();
    event_func_20151();
    group_main_engine_level_specific_methods_cutscenes_trap_hideout_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_enter_team_spade_1) goto group_main_engine_level_specific_methods_cutscenes_enter_team_spade_1_end;
    event_func_20152();
    event_func_20153();
    event_func_20154();
    event_func_20155();
    event_func_20156();
    event_func_20157();
    event_func_20158();
    event_func_20159();
    event_func_20160();
    event_func_20161();
    event_func_20162();
    event_func_20163();
    event_func_20164();
    event_func_20165();
    event_func_20166();
    group_main_engine_level_specific_methods_cutscenes_enter_team_spade_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1) goto group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1_end;
    event_func_20167();
    event_func_20168();
    event_func_20169();
    event_func_20170();
    event_func_20171();
    event_func_20172();
    event_func_20173();
    event_func_20174();
    event_func_20175();
    event_func_20176();
    event_func_20177();
    event_func_20178();
    event_func_20179();
    event_func_20180();
    event_func_20181();
    event_func_20182();
    event_func_20183();
    event_func_20184();
    event_func_20185();
    event_func_20186();
    event_func_20187();
    event_func_20188();
    event_func_20189();
    event_func_20190();
    event_func_20191();
    event_func_20192();
    event_func_20193();
    event_func_20194();
    event_func_20195();
    event_func_20196();
    event_func_20197();
    event_func_20198();
    event_func_20199();
    event_func_20200();
    event_func_20201();
    event_func_20202();
    event_func_20203();
    event_func_20204();
    event_func_20205();
    event_func_20206();
    event_func_20207();
    event_func_20208();
    event_func_20209();
    event_func_20210();
    event_func_20211();
    event_func_20212();
    event_func_20213();
    event_func_20214();
    event_func_20215();
    event_func_20216();
    event_func_20217();
    event_func_20218();
    event_func_20219();
    event_func_20220();
    event_func_20221();
    event_func_20222();
    event_func_20223();
    event_func_20224();
    event_func_20225();
    event_func_20226();
    event_func_20227();
    event_func_20228();
    event_func_20229();
    event_func_20230();
    event_func_20231();
    event_func_20232();
    event_func_20233();
    event_func_20234();
    event_func_20235();
    event_func_20236();
    event_func_20237();
    event_func_20238();
    event_func_20239();
    event_func_20240();
    event_func_20241();
    event_func_20242();
    event_func_20243();
    event_func_20244();
    event_func_20245();
    event_func_20246();
    event_func_20247();
    event_func_20248();
    event_func_20249();
    event_func_20250();
    event_func_20251();
    event_func_20252();
    event_func_20253();
    event_func_20254();
    event_func_20255();
    event_func_20256();
    event_func_20257();
    event_func_20258();
    event_func_20259();
    event_func_20260();
    event_func_20261();
    event_func_20262();
    event_func_20263();
    event_func_20264();
    event_func_20265();
    event_func_20266();
    event_func_20267();
    event_func_20268();
    event_func_20269();
    event_func_20270();
    group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_lilac_s_arrest_1) goto group_main_engine_level_specific_methods_cutscenes_lilac_s_arrest_1_end;
    event_func_20271();
    event_func_20272();
    event_func_20273();
    event_func_20274();
    event_func_20275();
    event_func_20276();
    event_func_20277();
    event_func_20278();
    group_main_engine_level_specific_methods_cutscenes_lilac_s_arrest_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1) goto group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1_end;
    event_func_20279();
    event_func_20280();
    event_func_20281();
    event_func_20282();
    event_func_20283();
    event_func_20284();
    event_func_20285();
    event_func_20286();
    event_func_20287();
    event_func_20288();
    event_func_20289();
    event_func_20290();
    event_func_20291();
    event_func_20292();
    event_func_20293();
    event_func_20294();
    event_func_20295();
    event_func_20296();
    event_func_20297();
    event_func_20298();
    event_func_20299();
    event_func_20300();
    event_func_20301();
    event_func_20302();
    event_func_20303();
    event_func_20304();
    event_func_20305();
    event_func_20306();
    event_func_20307();
    event_func_20308();
    event_func_20309();
    event_func_20310();
    event_func_20311();
    event_func_20312();
    event_func_20313();
    event_func_20314();
    event_func_20315();
    event_func_20316();
    event_func_20317();
    event_func_20318();
    event_func_20319();
    event_func_20320();
    event_func_20321();
    event_func_20322();
    event_func_20323();
    event_func_20324();
    event_func_20325();
    event_func_20326();
    event_func_20327();
    group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1) goto group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1_end;
    event_func_20328();
    event_func_20329();
    event_func_20330();
    event_func_20331();
    event_func_20332();
    event_func_20333();
    event_func_20334();
    if (!group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1) goto group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1_end;
    event_func_20335();
    event_func_20336();
    event_func_20337();
    event_func_20338();
    event_func_20339();
    event_func_20340();
    event_func_20341();
    event_func_20342();
    event_func_20343();
    event_func_20344();
    event_func_20345();
    event_func_20346();
    event_func_20347();
    event_func_20348();
    event_func_20349();
    event_func_20350();
    event_func_20351();
    event_func_20352();
    event_func_20353();
    event_func_20354();
    event_func_20355();
    event_func_20356();
    event_func_20357();
    event_func_20358();
    event_func_20359();
    event_func_20360();
    event_func_20361();
    event_func_20362();
    event_func_20363();
    event_func_20364();
    event_func_20365();
    event_func_20366();
    event_func_20367();
    event_func_20368();
    event_func_20369();
    event_func_20370();
    event_func_20371();
    event_func_20372();
    event_func_20373();
    event_func_20374();
    event_func_20375();
    event_func_20376();
    event_func_20377();
    event_func_20378();
    event_func_20379();
    event_func_20380();
    event_func_20381();
    event_func_20382();
    event_func_20383();
    group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1) goto group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1_end;
    event_func_20384();
    event_func_20385();
    event_func_20386();
    event_func_20387();
    event_func_20388();
    event_func_20389();
    event_func_20390();
    event_func_20391();
    event_func_20392();
    event_func_20393();
    event_func_20394();
    event_func_20395();
    event_func_20396();
    event_func_20397();
    event_func_20398();
    event_func_20399();
    event_func_20400();
    event_func_20401();
    event_func_20402();
    event_func_20403();
    event_func_20404();
    event_func_20405();
    event_func_20406();
    event_func_20407();
    event_func_20408();
    event_func_20409();
    event_func_20410();
    event_func_20411();
    event_func_20412();
    event_func_20413();
    event_func_20414();
    event_func_20415();
    event_func_20416();
    event_func_20417();
    event_func_20418();
    event_func_20419();
    event_func_20420();
    if (!group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_hologram_grow_1) goto group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_hologram_grow_1_end;
    event_func_20421();
    event_func_20422();
    event_func_20423();
    event_func_20424();
    event_func_20425();
    event_func_20426();
    group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_hologram_grow_1_end: ;
    event_func_20427();
    event_func_20428();
    event_func_20429();
    group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1_end: ;
    group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_ending_1) goto group_main_engine_level_specific_methods_cutscenes_ending_1_end;
    event_func_20430();
    event_func_20431();
    event_func_20432();
    event_func_20433();
    event_func_20434();
    event_func_20435();
    event_func_20436();
    event_func_20437();
    event_func_20438();
    event_func_20439();
    event_func_20440();
    event_func_20441();
    event_func_20442();
    event_func_20443();
    event_func_20444();
    event_func_20445();
    event_func_20446();
    event_func_20447();
    event_func_20448();
    event_func_20449();
    event_func_20450();
    event_func_20451();
    event_func_20452();
    event_func_20453();
    event_func_20454();
    event_func_20455();
    event_func_20456();
    event_func_20457();
    event_func_20458();
    event_func_20459();
    event_func_20460();
    event_func_20461();
    event_func_20462();
    event_func_20463();
    event_func_20464();
    event_func_20465();
    event_func_20466();
    event_func_20467();
    event_func_20468();
    event_func_20469();
    event_func_20470();
    event_func_20471();
    event_func_20472();
    event_func_20473();
    event_func_20474();
    event_func_20475();
    event_func_20476();
    event_func_20477();
    event_func_20478();
    event_func_20479();
    event_func_20480();
    event_func_20481();
    event_func_20482();
    event_func_20483();
    event_func_20484();
    event_func_20485();
    event_func_20486();
    event_func_20487();
    event_func_20488();
    event_func_20489();
    event_func_20490();
    event_func_20491();
    event_func_20492();
    event_func_20493();
    event_func_20494();
    event_func_20495();
    event_func_20496();
    event_func_20497();
    event_func_20498();
    event_func_20499();
    event_func_20500();
    event_func_20501();
    event_func_20502();
    event_func_20503();
    event_func_20504();
    event_func_20505();
    event_func_20506();
    event_func_20507();
    event_func_20508();
    event_func_20509();
    event_func_20510();
    event_func_20511();
    event_func_20512();
    event_func_20513();
    event_func_20514();
    event_func_20515();
    event_func_20516();
    event_func_20517();
    event_func_20518();
    event_func_20519();
    event_func_20520();
    event_func_20521();
    event_func_20522();
    event_func_20523();
    group_main_engine_level_specific_methods_cutscenes_ending_1_end: ;
    event_func_20524();
    event_func_20525();
    event_func_20526();
    event_func_20527();
    event_func_20528();
    event_func_20529();
    event_func_20530();
    if (!group_main_engine_interface_and_post_processing_methods_shields_1) goto group_main_engine_interface_and_post_processing_methods_shields_1_end;
    event_func_17092();
    event_func_17093();
    event_func_17094();
    event_func_17095();
    event_func_17096();
    event_func_17097();
    if (!group_main_engine_interface_and_post_processing_methods_shields_1_wood_shield_1) goto group_main_engine_interface_and_post_processing_methods_shields_1_wood_shield_1_end;
    event_func_17098();
    event_func_17099();
    event_func_17100();
    event_func_17101();
    event_func_17102();
    event_func_17103();
    event_func_17104();
    event_func_17105();
    event_func_17106();
    event_func_17107();
    event_func_17108();
    event_func_17109();
    group_main_engine_interface_and_post_processing_methods_shields_1_wood_shield_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_shields_2_flame_shield_1) goto group_main_engine_interface_and_post_processing_methods_shields_2_flame_shield_1_end;
    event_func_17110();
    event_func_17111();
    event_func_17112();
    event_func_17113();
    group_main_engine_interface_and_post_processing_methods_shields_2_flame_shield_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_shields_3_magnetic_shield_1) goto group_main_engine_interface_and_post_processing_methods_shields_3_magnetic_shield_1_end;
    event_func_17114();
    event_func_17115();
    group_main_engine_interface_and_post_processing_methods_shields_3_magnetic_shield_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_shields_4_water_shield_1) goto group_main_engine_interface_and_post_processing_methods_shields_4_water_shield_1_end;
    event_func_17116();
    event_func_17117();
    event_func_17118();
    event_func_17119();
    event_func_17120();
    event_func_17121();
    event_func_17122();
    group_main_engine_interface_and_post_processing_methods_shields_4_water_shield_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_shields_5_earth_shield_1) goto group_main_engine_interface_and_post_processing_methods_shields_5_earth_shield_1_end;
    event_func_17123();
    event_func_17124();
    event_func_17125();
    event_func_17126();
    event_func_17127();
    event_func_17128();
    event_func_17129();
    event_func_17130();
    group_main_engine_interface_and_post_processing_methods_shields_5_earth_shield_1_end: ;
    event_func_17131();
    event_func_17132();
    event_func_17133();
    event_func_17134();
    event_func_17135();
    event_func_17136();
    event_func_17137();
    event_func_17138();
    event_func_17139();
    event_func_17140();
    event_func_17141();
    group_main_engine_interface_and_post_processing_methods_shields_1_end: ;
    event_func_3235();
    event_func_3236();
    event_func_3237();
    event_func_3238();
    event_func_3239();
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
    event_func_3912();
    event_func_20531();
    event_func_3915();
    event_func_3916();
    event_func_3917();
    event_func_3918();
    event_func_3919();
    event_func_3920();
    event_func_3921();
    event_func_3922();
    event_func_3923();
    event_func_3924();
    event_func_3925();
    event_func_3926();
    event_func_3927();
    event_func_3928();
    event_func_3929();
    event_func_3930();
    event_func_3931();
    event_func_3932();
    event_func_3933();
    event_func_3934();
    event_func_3935();
    event_func_3936();
    event_func_3937();
    event_func_3938();
    event_func_3939();
    event_func_3940();
    event_func_3941();
    if (!group_main_engine_interface_and_post_processing_methods_timer_1) goto group_main_engine_interface_and_post_processing_methods_timer_1_end;
    group_main_engine_interface_and_post_processing_methods_timer_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_titlecard_1) goto group_main_engine_interface_and_post_processing_methods_titlecard_1_end;
    group_main_engine_interface_and_post_processing_methods_titlecard_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_me_music_engine_1) goto group_main_engine_interface_and_post_processing_methods_me_music_engine_1_end;
    event_func_11346();
    event_func_11347();
    event_func_11348();
    event_func_11349();
    event_func_11350();
    event_func_11351();
    event_func_11352();
    event_func_11353();
    group_main_engine_interface_and_post_processing_methods_me_music_engine_1_end: ;
    event_func_3246();
    event_func_3247();
    event_func_3248();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_20532();
    event_func_20533();
    event_func_2644();
    event_func_3252();
    event_func_3253();
    event_func_17550();
    event_func_17551();
    event_func_3976();
    event_func_20534();
    event_func_20535();
    event_func_20536();
    event_func_20537();
    event_func_20538();
    event_func_20539();
    event_func_20540();
    event_func_20541();
    event_func_20542();
    event_func_20543();
    event_func_20544();
    event_func_20545();
    event_func_20546();
    event_func_20547();
    event_func_20548();
    event_func_20549();
    event_func_20550();
    event_func_20551();
    event_func_20552();
    event_func_20553();
    event_func_20554();
    event_func_20555();
    event_func_20556();
    event_func_20557();
    event_func_20558();
    event_func_20559();
    event_func_20560();
    event_func_20561();
    event_func_20562();
    event_func_20563();
    event_func_20564();
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
void Frames::handle_frame_84_pre_events()
{
}
void Frames::event_func_20565()
{
    // event 4_83
    {
        if (!(group_main_engine_1)) goto event_4_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->set_x(((Active*)get_instance(dialogbox_566_instances))->get_x()+global_values->get(16)*0.5);
        ((Active*)get_instance(dialogbox2_567_instances))->set_x(((Active*)get_instance(dialogbox2_567_instances))->get_x()+global_values->get(16)*0.5);
        ((Active*)get_instance(dialogarrow_568_instances))->set_x(((Active*)get_instance(dialogarrow_568_instances))->get_x()+global_values->get(16)*0.5);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_x(((TextBlitter*)get_instance(dialogtext_569_instances))->get_x()+global_values->get(16)*0.5);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->load(str_data_font_bmp_7);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_x(((TextBlitter*)get_instance(subtitletext_3433_instances))->get_x()+global_values->get(16)*0.5);
    }
    event_4_83_end: ;
}
void Frames::event_func_20566()
{
    // event 1502_83
    {
        if (!(group_main_engine_1)) goto event_1502_83_end;
        if (!((global_values->get(4)) == (0))) goto event_1502_83_end;
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
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        if (!group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1) {
            group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1 = true;
        }
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
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((SystemBox*)get_instance(daytimesky_4027_instances))->set_visible(false);
    }
    event_1502_83_end: ;
}
void Frames::event_func_20567()
{
    // event 1542_83
    {
        if (!(group_main_engine_1)) goto event_1542_83_end;
        if (!((global_values->get(4)) == (1))) goto event_1542_83_end;
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
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        if (!group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1) {
            group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1 = true;
        }
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
        brevonartifact_3975_instances.clear_selection();
        for (ObjectIterator it(brevonartifact_3975_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_y());
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1542_83_end: ;
}
void Frames::event_func_20568()
{
    // event 1607_83
    {
        if (!(group_main_engine_1)) goto event_1607_83_end;
        if (!((global_values->get(4)) == (2))) goto event_1607_83_end;
        if (!group_main_engine_level_specific_methods_cutscenes_intro_scene_1) {
            group_main_engine_level_specific_methods_cutscenes_intro_scene_1 = true;
        }
        brevonartifact_3975_instances.clear_selection();
        for (ObjectIterator it(brevonartifact_3975_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_y());
        }
        brevonmechbackwing_2538_instances.clear_selection();
        spread_value(brevonmechbackwing_2538_instances, 1, 3);
        brevonmechfrontwing_2546_instances.clear_selection();
        spread_value(brevonmechfrontwing_2546_instances, 1, 3);
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, 390);
        }
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
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        set_random_seed(1);
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(14, 0);
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(15, 0);
    }
    event_1607_83_end: ;
}
void Frames::event_func_20569()
{
    // event 1781_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1781_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->flags.enable(16);
        }
    }
    event_1781_83_end: ;
}
void Frames::event_func_20570()
{
    // event 1885_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1885_83_end;
        enemyelitespawner_3345_instances.clear_selection();
        for (ObjectIterator it(enemyelitespawner_3345_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_y());
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(0)-300);
        }
    }
    event_1885_83_end: ;
}
void Frames::event_func_20571()
{
    // event 1894_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1894_83_end;
        bosschoppertail_2215_instances.clear_selection();
        spread_value(bosschoppertail_2215_instances, 0, 0);
        for (ObjectIterator it(bosschoppertail_2215_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)-((Active*)*it)->alterables->values.get(0)*16);
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->alterables->values.get(2)-((Active*)*it)->alterables->values.get(0)*16);
        }
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(13, ((Active*)*it)->get_y());
            ((Active*)*it)->force_animation(9);
        }
    }
    event_1894_83_end: ;
}
void Frames::event_func_20572()
{
    // event 1921_83
    {
        if (!(group_main_engine_1)) goto event_1921_83_end;
        if (!((global_values->get(4)) > (2))) goto event_1921_83_end;
        qualifier_30.clear_selection();
        for (QualifierIterator it(qualifier_30); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        acidfloor_4139_instances.clear_selection();
        for (ObjectIterator it(acidfloor_4139_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        acidfloorglow_4140_instances.clear_selection();
        for (ObjectIterator it(acidfloorglow_4140_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1921_83_end: ;
}
void Frames::event_func_20573()
{
    // event 1941_83
    {
        if (!(group_main_engine_1)) goto event_1941_83_end;
        if (!((global_values->get(4)) > (3))) goto event_1941_83_end;
        if (!((global_values->get(4)) != (21))) goto event_1941_83_end;
        bosschopperbars_2212_instances.clear_selection();
        for (ObjectIterator it(bosschopperbars_2212_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosschopperbars2_2213_instances.clear_selection();
        for (ObjectIterator it(bosschopperbars2_2213_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosschoppertailblade2_2214_instances.clear_selection();
        for (ObjectIterator it(bosschoppertailblade2_2214_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosschoppertail_2215_instances.clear_selection();
        for (ObjectIterator it(bosschoppertail_2215_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosschoppertailblade_2217_instances.clear_selection();
        for (ObjectIterator it(bosschoppertailblade_2217_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosschopperblade_2218_instances.clear_selection();
        for (ObjectIterator it(bosschopperblade_2218_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        npcmercdebris_4105_instances.clear_selection();
        for (ObjectIterator it(npcmercdebris_4105_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosskujackerleg2_2105_instances.clear_selection();
        for (ObjectIterator it(bosskujackerleg2_2105_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosskujackertail_2104_instances.clear_selection();
        for (ObjectIterator it(bosskujackertail_2104_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosskujackerleg1_2106_instances.clear_selection();
        for (ObjectIterator it(bosskujackerleg1_2106_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosskujackerbase_2107_instances.clear_selection();
        for (ObjectIterator it(bosskujackerbase_2107_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosskujackerhead2_2108_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead2_2108_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosskujackertailtarget_2109_instances.clear_selection();
        for (ObjectIterator it(bosskujackertailtarget_2109_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosskujackerwing1_2110_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing1_2110_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosskujackerwing2_2111_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing2_2111_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosskujackerpilot_2112_instances.clear_selection();
        for (ObjectIterator it(bosskujackerpilot_2112_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosskujackerhead_2113_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        npcsgmerc_4021_instances.clear_selection();
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        npckingaxe_4097_instances.clear_selection();
        for (ObjectIterator it(npckingaxe_4097_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        npcking_4099_instances.clear_selection();
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unlock_music_82);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_stop_music_83);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1941_83_end: ;
}
void Frames::event_func_20574()
{
    // event 1942_83
    {
        if (!(group_main_engine_1)) goto event_1942_83_end;
        if (!((global_values->get(4)) == (4))) goto event_1942_83_end;
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
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        if (!group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1) {
            group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1 = true;
        }
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
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1942_83_end: ;
}
void Frames::event_func_20575()
{
    // event 2006_83
    {
        if (!(group_main_engine_1)) goto event_2006_83_end;
        if (!((global_values->get(4)) == (5))) goto event_2006_83_end;
        if (!group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1) {
            group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1 = true;
        }
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
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
    }
    event_2006_83_end: ;
}
void Frames::event_func_20576()
{
    // event 2081_83
    {
        if (!(group_main_engine_1)) goto event_2081_83_end;
        if (!((global_values->get(4)) == (6))) goto event_2081_83_end;
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
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        if (!group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1) {
            group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 = true;
        }
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
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2081_83_end: ;
}
void Frames::event_func_20577()
{
    // event 2131_83
    {
        if (!(group_main_engine_1)) goto event_2131_83_end;
        if (!((global_values->get(4)) == (7))) goto event_2131_83_end;
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
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        if (!group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1) {
            group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1 = true;
        }
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
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.disable(4);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.disable(5);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.disable(6);
    }
    event_2131_83_end: ;
}
void Frames::event_func_20578()
{
    // event 2163_83
    {
        if (!(group_main_engine_1)) goto event_2163_83_end;
        if (!((global_values->get(4)) == (8))) goto event_2163_83_end;
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
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        if (!group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1) {
            group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1 = true;
        }
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
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_2163_83_end: ;
}
void Frames::event_func_20579()
{
    // event 2274_83
    {
        if (!(group_main_engine_1)) goto event_2274_83_end;
        if (!((global_values->get(4)) == (9))) goto event_2274_83_end;
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
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        if (!group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1) {
            group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1 = true;
        }
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
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_2274_83_end: ;
}
void Frames::event_func_20580()
{
    // event 2333_83
    {
        if (!(group_main_engine_1)) goto event_2333_83_end;
        if (!((global_values->get(4)) == (10))) goto event_2333_83_end;
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
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        if (!group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1) {
            group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1 = true;
        }
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
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_2333_83_end: ;
}
void Frames::event_func_20581()
{
    // event 2369_83
    {
        if (!(group_main_engine_1)) goto event_2369_83_end;
        if (!((global_values->get(4)) == (11))) goto event_2369_83_end;
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
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        if (!group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1) {
            group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1 = true;
        }
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
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_2369_83_end: ;
}
void Frames::event_func_20582()
{
    // event 2396_83
    {
        if (!(group_main_engine_1)) goto event_2396_83_end;
        if (!((global_values->get(4)) == (12))) goto event_2396_83_end;
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
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        if (!group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1) {
            group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1 = true;
        }
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
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unlock_music_82);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_2396_83_end: ;
}
void Frames::event_func_20583()
{
    // event 2430_83
    {
        if (!(group_main_engine_1)) goto event_2430_83_end;
        if (!((global_values->get(4)) == (13))) goto event_2430_83_end;
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
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        if (!group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1) {
            group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1 = true;
        }
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
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2430_83_end: ;
}
void Frames::event_func_20584()
{
    // event 2514_83
    {
        if (!(group_main_engine_1)) goto event_2514_83_end;
        if (!((global_values->get(4)) == (14))) goto event_2514_83_end;
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
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        if (!group_main_engine_level_specific_methods_cutscenes_trap_hideout_1) {
            group_main_engine_level_specific_methods_cutscenes_trap_hideout_1 = true;
        }
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
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_2514_83_end: ;
}
void Frames::event_func_20585()
{
    // event 2537_83
    {
        if (!(group_main_engine_1)) goto event_2537_83_end;
        if (!((global_values->get(4)) == (16))) goto event_2537_83_end;
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
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        if (!group_main_engine_level_specific_methods_cutscenes_enter_team_spade_1) {
            group_main_engine_level_specific_methods_cutscenes_enter_team_spade_1 = true;
        }
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
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2537_83_end: ;
}
void Frames::event_func_20586()
{
    // event 2553_83
    {
        if (!(group_main_engine_1)) goto event_2553_83_end;
        if (!((global_values->get(4)) == (17))) goto event_2553_83_end;
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
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        if (!group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1) {
            group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1 = true;
        }
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
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(bosshovercopturbine2_2331_instances))->alterables->values.set(18, 10);
        ((Active*)get_instance(bosshovercopturbine1_2333_instances))->alterables->values.set(18, 10);
        ((Active*)get_instance(levelhovercraftlight_2451_instances))->set_x_scale(8);
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.set(0, ((Active*)get_instance(bosshovercop_2332_instances))->get_x());
        ((Active*)get_instance(bosshovercop_2332_instances))->alterables->values.set(1, ((Active*)get_instance(bosshovercop_2332_instances))->get_y());
    }
    event_2553_83_end: ;
}
void Frames::event_func_20587()
{
    // event 2658_83
    {
        if (!(group_main_engine_1)) goto event_2658_83_end;
        if (!((global_values->get(4)) == (18))) goto event_2658_83_end;
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
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        if (!group_main_engine_level_specific_methods_cutscenes_lilac_s_arrest_1) {
            group_main_engine_level_specific_methods_cutscenes_lilac_s_arrest_1 = true;
        }
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
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2658_83_end: ;
}
void Frames::event_func_20588()
{
    // event 2667_83
    {
        if (!(group_main_engine_1)) goto event_2667_83_end;
        if (!((global_values->get(4)) == (19))) goto event_2667_83_end;
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
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        if (!group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1) {
            group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1 = true;
        }
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
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_2667_83_end: ;
}
void Frames::event_func_20589()
{
    // event 2717_83
    {
        if (!(group_main_engine_1)) goto event_2717_83_end;
        if (!((global_values->get(4)) == (20))) goto event_2717_83_end;
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
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        if (!group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1) {
            group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 = true;
        }
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
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        npcpanguleftarm_3075_instances.clear_selection();
        spread_value(npcpanguleftarm_3075_instances, 0, 0);
        npcpangurightarm_3076_instances.clear_selection();
        spread_value(npcpangurightarm_3076_instances, 0, 0);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_2717_83_end: ;
}
void Frames::event_func_20590()
{
    // event 2820_83
    {
        if (!(group_main_engine_1)) goto event_2820_83_end;
        if (!((global_values->get(4)) == (21))) goto event_2820_83_end;
        if (!group_main_engine_level_specific_methods_cutscenes_ending_1) {
            group_main_engine_level_specific_methods_cutscenes_ending_1 = true;
        }
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
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
        parallaxthermalbase_4023_instances.clear_selection();
        for (ObjectIterator it(parallaxthermalbase_4023_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
            group_pause_1 = false;
    
        global_values->set(3, 0);
        levelparallaxpiece9_3554_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece9_3554_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_global_position(((SystemBox*)*it)->get_x(), ((SystemBox*)*it)->get_y()+80);
        }
    }
    event_2820_83_end: ;
}
void Frames::event_func_20591()
{
    // event 2915_83
    {
        if (!(group_main_engine_1)) goto event_2915_83_end;
        npcsyntaxleftarm_2517_instances.clear_selection();
        spread_value(npcsyntaxleftarm_2517_instances, 0, 0);
        npcsyntaxrightarm_2518_instances.clear_selection();
        spread_value(npcsyntaxrightarm_2518_instances, 0, 0);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(10, ((Active*)get_instance(npcsyntax_2519_instances))->get_y());
        syntaxprojection3_4101_instances.clear_selection();
        for (ObjectIterator it(syntaxprojection3_4101_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x()-((Active*)get_instance(syntaxprojection1_4100_instances))->get_action_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y()-((Active*)get_instance(syntaxprojection1_4100_instances))->get_action_y());
        }
    }
    event_2915_83_end: ;
}
void Frames::event_func_20592()
{
    // event 3115_83
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_3115_83_end;
        if (!((global_values->get(4)) != (5))) goto event_3115_83_end;
        if (!((global_values->get(4)) != (21))) goto event_3115_83_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3115_83_end: ;
}
void Frames::event_func_20593()
{
    // event 3116_83
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_3116_83_end;
        ((Active*)get_instance(guiscoretimerings_451_instances))->set_visible(true);
        ((Active*)get_instance(guiicon_452_instances))->set_visible(true);
            group_main_engine_interface_and_post_processing_methods_titlecard_1 = false;
    
        ((Counter*)get_instance(guilives_454_instances))->set_visible(true);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
        {
            loop_gui_shiftup_running = true;
            int times = int(40);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_14();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
        ((Active*)get_instance(playerstartingpoint_358_instances))->set_visible(false);
        ((Active*)get_instance(guipause_453_instances))->force_frame(2);
        if (!group_pause_1) {
            group_pause_1 = true;
        }
    }
    event_3116_83_end: ;
}
void Frames::on_frame_84_start_events()
{
    event_func_17154();
    event_func_17155();
    event_func_20565();
    event_func_4498();
    event_func_17159();
    event_func_17160();
    event_func_17161();
    event_func_17162();
    event_func_17163();
    event_func_17164();
    event_func_17165();
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
    event_func_3269();
    event_func_17167();
    event_func_2674();
    event_func_2675();
    event_func_2676();
    event_func_3270();
    event_func_2678();
    event_func_2679();
    event_func_2680();
    event_func_2681();
    event_func_2682();
    event_func_2683();
    event_func_2684();
    event_func_2685();
    event_func_3273();
    event_func_2686();
    event_func_20566();
    event_func_20567();
    event_func_20568();
    event_func_20569();
    event_func_20570();
    event_func_20571();
    event_func_20572();
    event_func_20573();
    event_func_20574();
    event_func_20575();
    event_func_20576();
    event_func_20577();
    event_func_20578();
    event_func_20579();
    event_func_20580();
    event_func_20581();
    event_func_20582();
    event_func_20583();
    event_func_20584();
    event_func_20585();
    event_func_20586();
    event_func_20587();
    event_func_20588();
    event_func_20589();
    event_func_20590();
    event_func_20591();
    event_func_3994();
    event_func_3995();
    event_func_3996();
    event_func_20592();
    event_func_20593();
    event_func_11365();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_84_init()
{
    index = 83;
    width = 7168;
    height = 8000;
    virtual_width = 7168;
    virtual_height = 8000;
    background_color = Color(0, 0, 0);
    timer_base = 0;
    reset_image_cache();
    flush_image_cache();
    layers.resize(8);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    layers[1].init(1, 0.0, 1.0, true, false, false);
    layers[2].init(2, 0.600000023842, 1.0, true, false, false);
    layers[3].init(3, 1.0, 1.0, true, false, false);
    layers[4].init(4, 1.0, 1.0, true, false, false);
    layers[5].init(5, 1.0, 1.0, true, false, false);
    layers[6].init(6, 0.0, 0.0, true, false, false);
    layers[7].init(7, 1.0, 1.0, true, false, false);
    #ifdef CHOWDREN_HAS_MRT
    #endif
    #ifdef CHOWDREN_IS_3DS
    #endif
    static ObjectList* qualifier_30_instances[] = {&brevonmechbackshoulder_2514_instances, &brevonmechbackclaw_2515_instances, &brevonmechbackarm_2516_instances, &brevonmechbackwing_2538_instances, &brevonmechfrontleg_2539_instances, &brevonmechabdomen_2540_instances, &brevonmechfrontleg2_2541_instances, &brevonmechfrontknee_2542_instances, &brevonmechtorso_2543_instances, &brevonmechhead_2544_instances, &brevonmechfrontfoot_2545_instances, &brevonmechfrontwing_2546_instances, &brevonmechfrontshoulder_2547_instances, &brevonmechfrontarm_2548_instances, &brevonmechfrontclaw_2549_instances, &brevonmechaxle_2550_instances, NULL};
    qualifier_30.set(16, &qualifier_30_instances[0]);
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, NULL};
    qualifier_8.set(9, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorbomb_563_instances, &hazardspikesup_558_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &generaledge01_3894_instances, &generaledge02_3895_instances, &generaledge03_3896_instances, &generaledge04_3897_instances, &generaledge05_3898_instances, NULL};
    qualifier_9.set(36, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&bosskujackertailtarget_2109_instances, &bosskujackerhead_2113_instances, &bosschopper_2216_instances, &enemyelitemask_2511_instances, NULL};
    qualifier_20.set(4, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece5_510_instances, NULL};
    qualifier_0.set(1, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorbomb_563_instances, &hazardspikesup_558_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &floorcandle2_4117_instances, NULL};
    qualifier_7.set(26, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorbomb_563_instances, NULL};
    qualifier_4.set(33, &qualifier_4_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, &generalanglechanger165_3899_instances, &generalanglechanger255_3900_instances, &generalanglechanger285_3901_instances, NULL};
    qualifier_18.set(5, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(11, &qualifier_19_instances[0]);
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
    add_object(create_parallaxthermalbase_4023(207, 5329), 0);
    add_background_object(create_levelparallaxpiece6_4025(0, 2376), 1);
    add_background_object(create_levelparallaxpiece6_4025(400, 2376), 1);
    add_background_object(create_levelparallaxpiece6_4025(400, 1368), 1);
    add_background_object(create_sunset_4026(0, 384), 1);
    add_background_object(create_daytimesky_4027(0, 384), 1);
    add_background_object(create_quickbackdrop_4028(0, 760), 1);
    add_background_object(create_backdrop37_4029(0, 512), 1);
    add_background_object(create_backdrop41_4030(0, 2528), 1);
    add_background_object(create_backbuilding3_4031(32, 544), 1);
    add_background_object(create_backbuilding3_4031(104, 552), 1);
    add_background_object(create_backbuilding3_4031(160, 544), 1);
    add_background_object(create_backbuilding3_4031(328, 552), 1);
    add_background_object(create_backbuilding3_4031(384, 552), 1);
    add_background_object(create_backbuilding2_4032(144, 560), 1);
    add_background_object(create_backbuilding2_4032(64, 560), 1);
    add_background_object(create_backbuilding2_4032(280, 560), 1);
    add_background_object(create_backbuilding2_4032(432, 560), 1);
    add_background_object(create_backbuilding2_4032(480, 568), 1);
    add_background_object(create_backbuilding1_4033(120, 576), 1);
    add_background_object(create_backbuilding1_4033(200, 560), 1);
    add_background_object(create_backbuilding1_4033(320, 568), 1);
    add_background_object(create_backbuilding1_4033(-8, 560), 1);
    add_background_object(create_levelparallaxpiece6_4025(0, 1368), 1);
    add_background_object(create_levelparallaxpiece9_4034(0, 1504), 1);
    add_background_object(create_levelparallaxpiece9_4034(384, 1504), 1);
    add_background_object(create_levelparallaxpiece6_4025(400, 1792), 1);
    add_background_object(create_levelparallaxpiece6_4025(0, 1792), 1);
    add_background_object(create_levelparallaxpiece9_4034(0, 2016), 1);
    add_background_object(create_levelparallaxpiece9_4034(384, 2016), 1);
    add_background_object(create_backdrop37_4029(0, 920), 1);
    add_background_object(create_backdrop_4035(216, 768), 1);
    add_background_object(create_levelparallaxpiece5_4036(0, 928), 1);
    add_background_object(create_backdrop40_4037(32, 2560), 1);
    add_background_object(create_backdrop40_4037(104, 2568), 1);
    add_background_object(create_backdrop40_4037(160, 2560), 1);
    add_background_object(create_backdrop40_4037(328, 2568), 1);
    add_background_object(create_backdrop40_4037(384, 2568), 1);
    add_background_object(create_backdrop39_4038(144, 2576), 1);
    add_background_object(create_backdrop39_4038(64, 2576), 1);
    add_background_object(create_backdrop39_4038(280, 2576), 1);
    add_background_object(create_backdrop39_4038(432, 2576), 1);
    add_background_object(create_backdrop39_4038(480, 2584), 1);
    add_background_object(create_backdrop38_4039(120, 2592), 1);
    add_background_object(create_backdrop38_4039(200, 2576), 1);
    add_background_object(create_backdrop38_4039(320, 2584), 1);
    add_background_object(create_backdrop38_4039(-8, 2576), 1);
    add_background_object(create_levelparallaxpiece7_4040(0, 4560), 1);
    add_background_object(create_levelparallaxpiece7_4040(391, 4560), 1);
    add_background_object(create_levelparallaxpiece6_4025(0, 5080), 1);
    add_background_object(create_levelparallaxpiece6_4025(400, 5080), 1);
    add_background_object(create_levelparallaxpiece1_4041(320, 5296), 1);
    add_background_object(create_levelparallaxpiece1_4041(0, 5296), 1);
    add_object(create_parallaxthermalbase_4023(207, 5329), 1);
    add_object(create_levelparalaxwatersurface_7(0, 5397), 1);
    add_object(create_buildingwindow_4042(191, 2593), 1);
    add_object(create_buildingwindow_4042(175, 2597), 1);
    add_object(create_buildingwindow2_4043(212, 2594), 1);
    add_object(create_buildingwindow2_4043(229, 2599), 1);
    add_object(create_buildingwindow_4042(245, 2600), 1);
    add_object(create_buildingwindow_4042(110, 2593), 1);
    add_object(create_buildingwindow_4042(92, 2598), 1);
    add_object(create_buildingwindow2_4043(292, 2601), 1);
    add_object(create_buildingwindow_4042(308, 2599), 1);
    add_object(create_buildingwindow2_4043(394, 2593), 1);
    add_object(create_buildingwindow2_4043(351, 2579), 1);
    add_object(create_buildingwindow2_4043(184, 2571), 1);
    add_object(create_buildingwindow2_4043(128, 2579), 1);
    add_object(create_buildingwindow2_4043(56, 2571), 1);
    add_object(create_buildingwindow_4042(191, 577), 1);
    add_object(create_buildingwindow_4042(175, 581), 1);
    add_object(create_buildingwindow2_4043(212, 578), 1);
    add_object(create_buildingwindow2_4043(229, 583), 1);
    add_object(create_buildingwindow_4042(245, 584), 1);
    add_object(create_buildingwindow_4042(110, 577), 1);
    add_object(create_buildingwindow_4042(92, 582), 1);
    add_object(create_buildingwindow2_4043(292, 585), 1);
    add_object(create_buildingwindow_4042(308, 583), 1);
    add_object(create_buildingwindow2_4043(394, 577), 1);
    add_object(create_buildingwindow2_4043(351, 563), 1);
    add_object(create_buildingwindow2_4043(184, 555), 1);
    add_object(create_buildingwindow2_4043(128, 563), 1);
    add_object(create_buildingwindow2_4043(56, 555), 1);
    add_background_object(create_jcrockpillar1_2344(336, 5240), 2);
    add_background_object(create_jcrockpillar1_2344(440, 4920), 2);
    add_background_object(create_jcrockpillar1_2344(280, 5064), 2);
    add_background_object(create_jcrockpillar1_2344(1728, 4496), 2);
    add_background_object(create_jcplant1_2349(0, 4744), 2);
    add_background_object(create_jctreetrunk_2343(560, 4680), 2);
    add_background_object(create_shuigangbackpillar_4044(64, 1920), 2);
    add_background_object(create_shuigangbackpillar_4044(64, 1792), 2);
    add_background_object(create_shuigangbackpillar_4044(64, 2048), 2);
    add_background_object(create_shuigangbackpillar_4044(432, 1920), 2);
    add_background_object(create_shuigangbackpillar_4044(432, 1792), 2);
    add_background_object(create_shuigangbackpillar_4044(432, 2048), 2);
    add_background_object(create_shuigangback1_4045(4736, 1528), 2);
    add_background_object(create_shuigangback1_4045(5056, 1528), 2);
    add_background_object(create_shuigangback1_4045(5120, 1528), 2);
    add_background_object(create_shuigangback1_4045(4672, 1528), 2);
    add_background_object(create_shuigangback1_4045(4608, 1528), 2);
    add_background_object(create_shuigangback1_4045(4544, 1528), 2);
    add_background_object(create_shuigangback1_4045(4480, 1528), 2);
    add_background_object(create_shuigangback2_4046(4736, 1400), 2);
    add_background_object(create_shuigangback2_4046(5056, 1400), 2);
    add_background_object(create_shuigangback2_4046(5120, 1400), 2);
    add_background_object(create_shuigangback2_4046(5184, 1400), 2);
    add_background_object(create_shuigangback2_4046(5248, 1400), 2);
    add_background_object(create_shuigangback2_4046(5376, 1400), 2);
    add_background_object(create_shuigangback2_4046(4736, 1272), 2);
    add_background_object(create_shuigangback2_4046(5056, 1272), 2);
    add_background_object(create_shuigangback2_4046(5184, 1272), 2);
    add_background_object(create_shuigangback2_4046(5248, 1272), 2);
    add_background_object(create_shuigangback2_4046(4672, 1400), 2);
    add_background_object(create_shuigangback2_4046(4672, 1272), 2);
    add_background_object(create_shuigangback2_4046(4608, 1400), 2);
    add_background_object(create_shuigangback2_4046(4608, 1272), 2);
    add_background_object(create_shuigangback2_4046(4544, 1400), 2);
    add_background_object(create_shuigangback2_4046(4544, 1272), 2);
    add_background_object(create_shuigangback2_4046(4480, 1400), 2);
    add_background_object(create_shuigangback2_4046(4480, 1272), 2);
    add_background_object(create_shuigangbackpillar_4044(4800, 1528), 2);
    add_background_object(create_shuigangbackpillar_4044(5024, 1400), 2);
    add_background_object(create_shuigangbackpillar_4044(5024, 1528), 2);
    add_background_object(create_shuigangbackpillar_4044(4800, 1400), 2);
    add_background_object(create_shuigangbackpillar_4044(5024, 1272), 2);
    add_background_object(create_shuigangbackpillar_4044(4800, 1272), 2);
    add_background_object(create_backdrop44_4047(5184, 1528), 2);
    add_background_object(create_backdrop44_4047(5248, 1528), 2);
    add_background_object(create_backdrop44_4047(5312, 1528), 2);
    add_background_object(create_backdrop44_4047(5376, 1528), 2);
    add_background_object(create_backdrop44_4047(5440, 1528), 2);
    add_background_object(create_shuigangback2_4046(5312, 1400), 2);
    add_background_object(create_shuigangback2_4046(5312, 1272), 2);
    add_background_object(create_shuigangback2_4046(5376, 1272), 2);
    add_background_object(create_shuigangback2_4046(5440, 1400), 2);
    add_background_object(create_shuigangback2_4046(5440, 1272), 2);
    add_background_object(create_shuigangback2_4046(5120, 1272), 2);
    add_background_object(create_shuigangbackpillar_4044(4448, 1528), 2);
    add_background_object(create_shuigangbackpillar_4044(4448, 1400), 2);
    add_background_object(create_shuigangbackpillar_4044(4448, 1272), 2);
    add_background_object(create_shuigangbackpillar_4044(4224, 1528), 2);
    add_background_object(create_shuigangbackpillar_4044(4224, 1400), 2);
    add_background_object(create_shuigangbackpillar_4044(4224, 1272), 2);
    add_background_object(create_shuigangback1_4045(4160, 1528), 2);
    add_background_object(create_shuigangback1_4045(4096, 1528), 2);
    add_background_object(create_shuigangback1_4045(4032, 1528), 2);
    add_background_object(create_shuigangback1_4045(3968, 1528), 2);
    add_background_object(create_shuigangback1_4045(3904, 1528), 2);
    add_background_object(create_shuigangback2_4046(4160, 1400), 2);
    add_background_object(create_shuigangback2_4046(4160, 1272), 2);
    add_background_object(create_shuigangback2_4046(4096, 1400), 2);
    add_background_object(create_shuigangback2_4046(4096, 1272), 2);
    add_background_object(create_shuigangback2_4046(4032, 1400), 2);
    add_background_object(create_shuigangback2_4046(4032, 1272), 2);
    add_background_object(create_shuigangback2_4046(3968, 1400), 2);
    add_background_object(create_shuigangback2_4046(3968, 1272), 2);
    add_background_object(create_shuigangback2_4046(3904, 1400), 2);
    add_background_object(create_shuigangback2_4046(3904, 1272), 2);
    add_background_object(create_shuigangbackpillar_4044(3872, 1528), 2);
    add_background_object(create_shuigangbackpillar_4044(3872, 1400), 2);
    add_background_object(create_shuigangbackpillar_4044(3872, 1272), 2);
    add_background_object(create_shuigangbackpillar_4044(1344, 1528), 2);
    add_background_object(create_shuigangbackpillar_4044(1344, 1400), 2);
    add_background_object(create_shuigangbackpillar_4044(1344, 1272), 2);
    add_background_object(create_shuigangback1_4045(1280, 1528), 2);
    add_background_object(create_shuigangback1_4045(1216, 1528), 2);
    add_background_object(create_shuigangback1_4045(1152, 1528), 2);
    add_background_object(create_shuigangback1_4045(1088, 1528), 2);
    add_background_object(create_shuigangback1_4045(1024, 1528), 2);
    add_background_object(create_shuigangback2_4046(1280, 1400), 2);
    add_background_object(create_shuigangback2_4046(1280, 1272), 2);
    add_background_object(create_shuigangback2_4046(1216, 1400), 2);
    add_background_object(create_shuigangback2_4046(1216, 1272), 2);
    add_background_object(create_shuigangback2_4046(1152, 1400), 2);
    add_background_object(create_shuigangback2_4046(1152, 1272), 2);
    add_background_object(create_shuigangback2_4046(1088, 1400), 2);
    add_background_object(create_shuigangback2_4046(1088, 1272), 2);
    add_background_object(create_shuigangback2_4046(1024, 1400), 2);
    add_background_object(create_shuigangback2_4046(1024, 1272), 2);
    add_background_object(create_shuigangbackpillar_4044(992, 1528), 2);
    add_background_object(create_shuigangbackpillar_4044(992, 1400), 2);
    add_background_object(create_shuigangbackpillar_4044(992, 1272), 2);
    add_background_object(create_shuigangbackpillar_4044(768, 1528), 2);
    add_background_object(create_shuigangbackpillar_4044(768, 1400), 2);
    add_background_object(create_shuigangbackpillar_4044(768, 1272), 2);
    add_background_object(create_shuigangback1_4045(704, 1528), 2);
    add_background_object(create_shuigangback1_4045(640, 1528), 2);
    add_background_object(create_shuigangback1_4045(576, 1528), 2);
    add_background_object(create_shuigangback1_4045(512, 1528), 2);
    add_background_object(create_shuigangback1_4045(448, 1528), 2);
    add_background_object(create_shuigangback2_4046(704, 1400), 2);
    add_background_object(create_shuigangback2_4046(704, 1272), 2);
    add_background_object(create_shuigangback2_4046(640, 1400), 2);
    add_background_object(create_shuigangback2_4046(640, 1272), 2);
    add_background_object(create_shuigangback2_4046(576, 1400), 2);
    add_background_object(create_shuigangback2_4046(576, 1272), 2);
    add_background_object(create_shuigangback2_4046(512, 1400), 2);
    add_background_object(create_shuigangback2_4046(448, 1400), 2);
    add_background_object(create_shuigangback2_4046(448, 1272), 2);
    add_background_object(create_shuigangbackpillar_4044(416, 1528), 2);
    add_background_object(create_shuigangbackpillar_4044(416, 1400), 2);
    add_background_object(create_shuigangbackpillar_4044(416, 1272), 2);
    add_background_object(create_shuigangback2_4046(512, 1272), 2);
    add_background_object(create_shuigangbackpillar_4044(192, 1528), 2);
    add_background_object(create_shuigangbackpillar_4044(192, 1400), 2);
    add_background_object(create_shuigangbackpillar_4044(192, 1272), 2);
    add_background_object(create_shuigangback1_4045(128, 1528), 2);
    add_background_object(create_shuigangback1_4045(64, 1528), 2);
    add_background_object(create_shuigangback1_4045(0, 1528), 2);
    add_background_object(create_shuigangback1_4045(-64, 1528), 2);
    add_background_object(create_shuigangback1_4045(-128, 1528), 2);
    add_background_object(create_shuigangback2_4046(128, 1400), 2);
    add_background_object(create_shuigangback2_4046(128, 1272), 2);
    add_background_object(create_shuigangback2_4046(64, 1400), 2);
    add_background_object(create_shuigangback2_4046(64, 1272), 2);
    add_background_object(create_shuigangback2_4046(0, 1400), 2);
    add_background_object(create_shuigangback2_4046(0, 1272), 2);
    add_background_object(create_shuigangback2_4046(-64, 1400), 2);
    add_background_object(create_shuigangback2_4046(-128, 1400), 2);
    add_background_object(create_shuigangback2_4046(-128, 1272), 2);
    add_background_object(create_shuigangbackpillar_4044(-160, 1528), 2);
    add_background_object(create_shuigangbackpillar_4044(-160, 1400), 2);
    add_background_object(create_shuigangbackpillar_4044(-160, 1272), 2);
    add_background_object(create_shuigangback2_4046(-64, 1272), 2);
    add_background_object(create_shuigangcurtain1_4048(4800, 1368), 2);
    add_background_object(create_shuigangcurtain1_4048(5024, 1368), 2);
    add_background_object(create_shuigangcurtain1_4048(4448, 1368), 2);
    add_background_object(create_shuigangcurtain1_4048(4224, 1368), 2);
    add_background_object(create_shuigangcurtain1_4048(3872, 1368), 2);
    add_background_object(create_shuigangcurtain1_4048(1344, 1368), 2);
    add_background_object(create_shuigangcurtain1_4048(992, 1368), 2);
    add_background_object(create_shuigangcurtain1_4048(768, 1368), 2);
    add_background_object(create_shuigangcurtain1_4048(416, 1368), 2);
    add_background_object(create_shuigangcurtain1_4048(192, 1368), 2);
    add_background_object(create_shuigangcurtain1_4048(-160, 1368), 2);
    add_background_object(create_shuigangbackpillar_4044(3648, 1528), 2);
    add_background_object(create_shuigangbackpillar_4044(3648, 1400), 2);
    add_background_object(create_shuigangbackpillar_4044(3648, 1272), 2);
    add_background_object(create_shuigangback1_4045(3584, 1528), 2);
    add_background_object(create_shuigangback1_4045(3520, 1528), 2);
    add_background_object(create_shuigangback1_4045(3456, 1528), 2);
    add_background_object(create_shuigangback1_4045(3392, 1528), 2);
    add_background_object(create_shuigangback1_4045(3328, 1528), 2);
    add_background_object(create_shuigangback2_4046(3584, 1400), 2);
    add_background_object(create_shuigangback2_4046(3584, 1272), 2);
    add_background_object(create_shuigangback2_4046(3520, 1400), 2);
    add_background_object(create_shuigangback2_4046(3520, 1272), 2);
    add_background_object(create_shuigangback2_4046(3456, 1400), 2);
    add_background_object(create_shuigangback2_4046(3456, 1272), 2);
    add_background_object(create_shuigangback2_4046(3392, 1400), 2);
    add_background_object(create_shuigangback2_4046(3392, 1272), 2);
    add_background_object(create_shuigangback2_4046(3328, 1400), 2);
    add_background_object(create_shuigangback2_4046(3328, 1272), 2);
    add_background_object(create_shuigangbackpillar_4044(3296, 1528), 2);
    add_background_object(create_shuigangbackpillar_4044(3296, 1400), 2);
    add_background_object(create_shuigangbackpillar_4044(3296, 1272), 2);
    add_background_object(create_shuigangcurtain1_4048(3648, 1368), 2);
    add_background_object(create_shuigangcurtain1_4048(3296, 1368), 2);
    add_background_object(create_shuigangbackpillar_4044(3072, 1528), 2);
    add_background_object(create_shuigangbackpillar_4044(3072, 1400), 2);
    add_background_object(create_shuigangbackpillar_4044(3072, 1272), 2);
    add_background_object(create_shuigangback1_4045(3008, 1528), 2);
    add_background_object(create_shuigangback1_4045(2944, 1528), 2);
    add_background_object(create_shuigangback1_4045(2880, 1528), 2);
    add_background_object(create_shuigangback1_4045(2816, 1528), 2);
    add_background_object(create_shuigangback1_4045(2752, 1528), 2);
    add_background_object(create_shuigangback2_4046(3008, 1400), 2);
    add_background_object(create_shuigangback2_4046(3008, 1272), 2);
    add_background_object(create_shuigangback2_4046(2944, 1400), 2);
    add_background_object(create_shuigangback2_4046(2944, 1272), 2);
    add_background_object(create_shuigangback2_4046(2880, 1400), 2);
    add_background_object(create_shuigangback2_4046(2880, 1272), 2);
    add_background_object(create_shuigangback2_4046(2816, 1400), 2);
    add_background_object(create_shuigangback2_4046(2816, 1272), 2);
    add_background_object(create_shuigangback2_4046(2752, 1400), 2);
    add_background_object(create_shuigangback2_4046(2752, 1272), 2);
    add_background_object(create_shuigangbackpillar_4044(2720, 1528), 2);
    add_background_object(create_shuigangbackpillar_4044(2720, 1400), 2);
    add_background_object(create_shuigangbackpillar_4044(2720, 1272), 2);
    add_background_object(create_shuigangcurtain1_4048(3072, 1368), 2);
    add_background_object(create_shuigangcurtain1_4048(2720, 1368), 2);
    add_background_object(create_shuigangbackpillar_4044(2496, 1528), 2);
    add_background_object(create_shuigangbackpillar_4044(2496, 1400), 2);
    add_background_object(create_shuigangbackpillar_4044(2496, 1272), 2);
    add_background_object(create_shuigangback1_4045(2432, 1528), 2);
    add_background_object(create_shuigangback1_4045(2368, 1528), 2);
    add_background_object(create_shuigangback1_4045(2304, 1528), 2);
    add_background_object(create_shuigangback1_4045(2240, 1528), 2);
    add_background_object(create_shuigangback1_4045(2176, 1528), 2);
    add_background_object(create_shuigangback2_4046(2432, 1400), 2);
    add_background_object(create_shuigangback2_4046(2432, 1272), 2);
    add_background_object(create_shuigangback2_4046(2368, 1400), 2);
    add_background_object(create_shuigangback2_4046(2368, 1272), 2);
    add_background_object(create_shuigangback2_4046(2304, 1400), 2);
    add_background_object(create_shuigangback2_4046(2304, 1272), 2);
    add_background_object(create_shuigangback2_4046(2240, 1400), 2);
    add_background_object(create_shuigangback2_4046(2240, 1272), 2);
    add_background_object(create_shuigangback2_4046(2176, 1400), 2);
    add_background_object(create_shuigangback2_4046(2176, 1272), 2);
    add_background_object(create_shuigangbackpillar_4044(2144, 1528), 2);
    add_background_object(create_shuigangbackpillar_4044(2144, 1400), 2);
    add_background_object(create_shuigangbackpillar_4044(2144, 1272), 2);
    add_background_object(create_shuigangcurtain1_4048(2496, 1368), 2);
    add_background_object(create_shuigangcurtain1_4048(2144, 1368), 2);
    add_background_object(create_shuigangbackpillar_4044(1920, 1528), 2);
    add_background_object(create_shuigangbackpillar_4044(1920, 1400), 2);
    add_background_object(create_shuigangbackpillar_4044(1920, 1272), 2);
    add_background_object(create_shuigangback1_4045(1856, 1528), 2);
    add_background_object(create_shuigangback1_4045(1792, 1528), 2);
    add_background_object(create_shuigangback1_4045(1728, 1528), 2);
    add_background_object(create_shuigangback1_4045(1664, 1528), 2);
    add_background_object(create_shuigangback1_4045(1600, 1528), 2);
    add_background_object(create_shuigangback2_4046(1856, 1400), 2);
    add_background_object(create_shuigangback2_4046(1856, 1272), 2);
    add_background_object(create_shuigangback2_4046(1792, 1400), 2);
    add_background_object(create_shuigangback2_4046(1792, 1272), 2);
    add_background_object(create_shuigangback2_4046(1728, 1400), 2);
    add_background_object(create_shuigangback2_4046(1728, 1272), 2);
    add_background_object(create_shuigangback2_4046(1664, 1400), 2);
    add_background_object(create_shuigangback2_4046(1664, 1272), 2);
    add_background_object(create_shuigangback2_4046(1600, 1400), 2);
    add_background_object(create_shuigangback2_4046(1600, 1272), 2);
    add_background_object(create_shuigangbackpillar_4044(1568, 1528), 2);
    add_background_object(create_shuigangbackpillar_4044(1568, 1400), 2);
    add_background_object(create_shuigangbackpillar_4044(1568, 1272), 2);
    add_background_object(create_shuigangcurtain1_4048(1920, 1368), 2);
    add_background_object(create_shuigangcurtain1_4048(1568, 1368), 2);
    add_background_object(create_backdrop18_4049(32, 3416), 2);
    add_background_object(create_backdrop18_4049(128, 3416), 2);
    add_background_object(create_backdrop18_4049(224, 3416), 2);
    add_background_object(create_backdrop18_4049(416, 3416), 2);
    add_background_object(create_backdrop18_4049(320, 3416), 2);
    add_background_object(create_backdrop19_4050(96, 3416), 2);
    add_background_object(create_backdrop19_4050(192, 3416), 2);
    add_background_object(create_backdrop19_4050(0, 3416), 2);
    add_background_object(create_backdrop19_4050(288, 3416), 2);
    add_background_object(create_backdrop19_4050(480, 3416), 2);
    add_background_object(create_backdrop19_4050(384, 3416), 2);
    add_background_object(create_backdrop18_4049(512, 3416), 2);
    add_background_object(create_backdrop18_4049(608, 3416), 2);
    add_background_object(create_backdrop18_4049(704, 3416), 2);
    add_background_object(create_backdrop18_4049(896, 3416), 2);
    add_background_object(create_backdrop18_4049(800, 3416), 2);
    add_background_object(create_backdrop19_4050(576, 3416), 2);
    add_background_object(create_backdrop19_4050(672, 3416), 2);
    add_background_object(create_backdrop19_4050(768, 3416), 2);
    add_background_object(create_backdrop19_4050(960, 3416), 2);
    add_background_object(create_backdrop19_4050(864, 3416), 2);
    add_background_object(create_backdrop20_4051(0, 3288), 2);
    add_background_object(create_backdrop20_4051(128, 3288), 2);
    add_background_object(create_backdrop20_4051(256, 3288), 2);
    add_background_object(create_backdrop20_4051(384, 3288), 2);
    add_background_object(create_backdrop20_4051(512, 3288), 2);
    add_background_object(create_backdrop20_4051(640, 3288), 2);
    add_background_object(create_backdrop20_4051(768, 3288), 2);
    add_background_object(create_backdrop20_4051(896, 3288), 2);
    add_background_object(create_backdrop18_4049(992, 3416), 2);
    add_background_object(create_backdrop19_4050(1056, 3416), 2);
    add_background_object(create_backdrop18_4049(1088, 3416), 2);
    add_background_object(create_backdrop19_4050(1152, 3416), 2);
    add_background_object(create_backdrop20_4051(1024, 3288), 2);
    add_background_object(create_backdrop18_4049(1184, 3416), 2);
    add_background_object(create_backdrop19_4050(1248, 3416), 2);
    add_background_object(create_backdrop20_4051(1152, 3288), 2);
    add_background_object(create_backdrop21_4052(320, 3368), 2);
    add_background_object(create_thback3_3127(80, 3288), 2);
    add_background_object(create_thback4_3128(80, 3416), 2);
    add_background_object(create_thback3_3127(224, 3288), 2);
    add_background_object(create_thback4_3128(224, 3416), 2);
    add_background_object(create_thback3_3127(512, 3288), 2);
    add_background_object(create_thback4_3128(512, 3416), 2);
    add_background_object(create_thback3_3127(656, 3288), 2);
    add_background_object(create_thback4_3128(656, 3416), 2);
    add_background_object(create_thback3_3127(800, 3288), 2);
    add_background_object(create_thback4_3128(800, 3416), 2);
    add_background_object(create_thback3_3127(944, 3288), 2);
    add_background_object(create_thback4_3128(944, 3416), 2);
    add_background_object(create_backdrop18_4049(1280, 3416), 2);
    add_background_object(create_backdrop19_4050(1344, 3416), 2);
    add_background_object(create_backdrop18_4049(1376, 3416), 2);
    add_background_object(create_backdrop19_4050(1440, 3416), 2);
    add_background_object(create_backdrop18_4049(1472, 3416), 2);
    add_background_object(create_backdrop19_4050(1536, 3416), 2);
    add_background_object(create_backdrop18_4049(1568, 3416), 2);
    add_background_object(create_backdrop19_4050(1632, 3416), 2);
    add_background_object(create_backdrop18_4049(1664, 3416), 2);
    add_background_object(create_backdrop19_4050(1728, 3416), 2);
    add_background_object(create_backdrop18_4049(1760, 3416), 2);
    add_background_object(create_backdrop19_4050(1824, 3416), 2);
    add_background_object(create_backdrop20_4051(1280, 3288), 2);
    add_background_object(create_backdrop20_4051(1408, 3288), 2);
    add_background_object(create_backdrop20_4051(1536, 3288), 2);
    add_background_object(create_backdrop20_4051(1664, 3288), 2);
    add_background_object(create_backdrop18_4049(1856, 3416), 2);
    add_background_object(create_backdrop20_4051(1792, 3288), 2);
    add_background_object(create_thback3_3127(1088, 3288), 2);
    add_background_object(create_thback4_3128(1088, 3416), 2);
    add_background_object(create_thback3_3127(1232, 3288), 2);
    add_background_object(create_thback4_3128(1232, 3416), 2);
    add_background_object(create_thback3_3127(1376, 3288), 2);
    add_background_object(create_thback4_3128(1376, 3416), 2);
    add_background_object(create_thback3_3127(1520, 3288), 2);
    add_background_object(create_thback4_3128(1520, 3416), 2);
    add_background_object(create_thback3_3127(1664, 3288), 2);
    add_background_object(create_thback4_3128(1664, 3416), 2);
    add_background_object(create_thback3_3127(1808, 3288), 2);
    add_background_object(create_thback4_3128(1808, 3416), 2);
    add_background_object(create_zaoshipwall_4053(0, 3832), 2);
    add_background_object(create_zaoshipindoor1_4054(80, 3904), 2);
    add_background_object(create_zaoshipindoor4_4055(400, 3984), 2);
    add_background_object(create_zaoshipindoor5_4056(328, 3992), 2);
    add_background_object(create_zaoshipindoor4_4055(320, 3984), 2);
    add_background_object(create_zaoshipindoor5_4056(248, 3992), 2);
    add_background_object(create_zaoshipindoor4_4055(240, 3984), 2);
    add_background_object(create_zaoshipindoor5_4056(168, 3992), 2);
    add_background_object(create_zaoshipindoor4_4055(160, 3984), 2);
    add_background_object(create_zaoshipindoor6_4057(144, 3856), 2);
    add_background_object(create_zaoshipindoor1_4054(208, 3904), 2);
    add_background_object(create_zaoshipindoor1_4054(336, 3904), 2);
    add_background_object(create_zaoshipindoor6_4057(272, 3856), 2);
    add_background_object(create_zaoshipindoor6_4057(400, 3856), 2);
    add_background_object(create_zaoshipindoor6_4057(16, 3856), 2);
    add_background_object(create_aquabrickback9_665(256, 4256), 2);
    add_background_object(create_aquabrickback1_661(128, 4256), 2);
    add_background_object(create_aquabrickback10_664(512, 4248), 2);
    add_background_object(create_aquabrickback6_660(0, 4256), 2);
    add_background_object(create_aquabrickback1_661(384, 4256), 2);
    add_background_object(create_lightray2_666(16, 4296), 2);
    add_background_object(create_lightray1_659(32, 4264), 2);
    add_background_object(create_jcrockpillar1_2344(656, 4504), 2);
    add_background_object(create_jcrockpillar1_2344(904, 4504), 2);
    add_background_object(create_jcrockpillar1_2344(800, 4400), 2);
    add_background_object(create_jcrock1_2345(896, 4720), 2);
    add_background_object(create_jcplant1_2349(504, 4768), 2);
    add_background_object(create_jcrockpillar1_2344(696, 4720), 2);
    add_background_object(create_jcrock1_2345(424, 4744), 2);
    add_background_object(create_jcbud1_2367(392, 4760), 2);
    add_background_object(create_jcrock1_2345(192, 4720), 2);
    add_background_object(create_jcplant1_2349(40, 4768), 2);
    add_background_object(create_jcrock1_2345(-40, 4744), 2);
    add_background_object(create_jcplant1_2349(-56, 4768), 2);
    add_background_object(create_jcrock1_2345(1376, 4720), 2);
    add_background_object(create_jcplant1_2349(1480, 4776), 2);
    add_background_object(create_jcplant1_2349(1528, 4752), 2);
    add_background_object(create_jcplant1_2349(1568, 4768), 2);
    add_background_object(create_jcplanet3_2356(1584, 4752), 2);
    add_background_object(create_jcplanet4_2351(1616, 4736), 2);
    add_background_object(create_jcplanet4_2351(1744, 4760), 2);
    add_background_object(create_jcplanet3_2356(1824, 4736), 2);
    add_background_object(create_jcplanet3_2356(1712, 4736), 2);
    add_background_object(create_jcplanet3_2356(1864, 4752), 2);
    add_background_object(create_jcplanet3_2356(1928, 4768), 2);
    add_background_object(create_jcplanet4_2351(1960, 4736), 2);
    add_background_object(create_jcrock1_2345(2088, 4752), 2);
    add_background_object(create_jcplant1_2349(-48, 5304), 2);
    add_background_object(create_jcplant1_2349(-8, 5328), 2);
    add_background_object(create_jcplant1_2349(-80, 5328), 2);
    add_background_object(create_jcplant1_2349(312, 5304), 2);
    add_background_object(create_jcplant1_2349(256, 5328), 2);
    add_background_object(create_jcrock1_2345(336, 5296), 2);
    add_background_object(create_jcplant1_2349(360, 5328), 2);
    add_background_object(create_jcplant1_2349(592, 5344), 2);
    add_background_object(create_jcplant1_2349(688, 5328), 2);
    add_background_object(create_jcrock1_2345(760, 5296), 2);
    add_background_object(create_jcrockpillar1_2344(520, 5064), 2);
    add_background_object(create_thsewerback_3082(0, 5792), 2);
    add_background_object(create_plcaveback1_3014(8, 6400), 2);
    add_background_object(create_plcaveback1_3014(72, 6240), 2);
    add_background_object(create_plcaveback1_3014(184, 6448), 2);
    add_background_object(create_plcaveback1_3014(248, 6288), 2);
    add_background_object(create_plcaveback1_3014(400, 6400), 2);
    add_background_object(create_plcaveback1_3014(464, 6240), 2);
    add_background_object(create_plcaveback1_3014(592, 6448), 2);
    add_background_object(create_plcaveback1_3014(656, 6288), 2);
    add_object(create_jeepbase_3991(3600, 5316), 2);
    add_object(create_jeepbase_3991(3848, 5316), 2);
    add_object(create_jeepbase_3991(2608, 5316), 2);
    add_object(create_jeepbase_3991(2856, 5316), 2);
    add_object(create_jeepbase_3991(4344, 5316), 2);
    add_object(create_jeepbase_3991(3352, 5316), 2);
    add_object(create_jeepbase_3991(2360, 5316), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(3200, 85), 2);
    add_object(create_link_352(88, -96), 2);
    add_object(create_objectcrystal_279(-275, 82), 2);
    add_object(create_laddertop_357(-460, 327), 2);
    add_object(create_objectcodec_354(-295, 108), 2);
    add_object(create_shieldearth_314(-140, 348), 2);
    add_object(create_shieldflameback_315(-96, 344), 2);
    add_object(create_shieldwood_313(-148, 340), 2);
    add_object(create_shieldmagnetic_317(-132, 348), 2);
    add_object(create_shieldwater_318(-84, 348), 2);
    add_object(create_shieldflamefront_316(-100, 348), 2);
    add_object(create_objectjumppad_530(3064, -208), 2);
    add_object(create_objectfuel_528(-412, 308), 2);
    add_object(create_guikeystone_455(136, -40), 2);
    add_object(create_bosshovercopsiren4_2329(1728, 5200), 2);
    add_object(create_bosshovercopsiren3_2330(1752, 5200), 2);
    add_object(create_bosshovercopturbine2_2331(1724, 5217), 2);
    add_object(create_bosshovercopturbine1_2333(1644, 5217), 2);
    add_object(create_bosshovercoppropellor_2334(1672, 5216), 2);
    add_object(create_bosshovercoppropellor2_2335(1752, 5216), 2);
    add_object(create_bosshovercopsiren1_2336(1648, 5200), 2);
    add_object(create_bosshovercopsiren2_2337(1632, 5200), 2);
    add_object(create_levelhovercraftlight_2451(1624, 5273), 2);
    add_object(create_bosshovercop_2332(1464, 5320), 2);
    add_object(create_waterfallback_1016(160, 6296), 2);
    add_object(create_waterfallback_1016(160, 6392), 2);
    add_object(create_waterfallfront_1061(192, 6352), 2);
    add_object(create_waterfallfront_1061(192, 6448), 2);
    add_object(create_waterfallback_1016(376, 6296), 2);
    add_object(create_waterfallback_1016(376, 6392), 2);
    add_object(create_waterfallfront_1061(408, 6352), 2);
    add_object(create_waterfallfront_1061(408, 6448), 2);
    add_object(create_waterfallback_1016(480, 6296), 2);
    add_object(create_waterfallback_1016(480, 6392), 2);
    add_object(create_waterfallfront_1061(512, 6352), 2);
    add_object(create_waterfallfront_1061(512, 6448), 2);
    add_object(create_waterfallback_1016(632, 6296), 2);
    add_object(create_waterfallback_1016(632, 6392), 2);
    add_object(create_waterfallfront_1061(664, 6352), 2);
    add_object(create_waterfallfront_1061(664, 6448), 2);
    add_object(create_jeepwheel1_3992(2424, 5352), 2);
    add_object(create_jeepwheel2_3993(2296, 5352), 2);
    add_object(create_jeepwheel1_3992(2672, 5352), 2);
    add_object(create_jeepwheel2_3993(2544, 5352), 2);
    add_object(create_jeepwheel1_3992(2920, 5352), 2);
    add_object(create_jeepwheel2_3993(2792, 5352), 2);
    add_object(create_jeepwheel1_3992(4408, 5352), 2);
    add_object(create_jeepwheel2_3993(4280, 5352), 2);
    add_object(create_jeepwheel1_3992(3416, 5352), 2);
    add_object(create_jeepwheel2_3993(3288, 5352), 2);
    add_object(create_jeepwheel1_3992(3664, 5352), 2);
    add_object(create_jeepwheel2_3993(3536, 5352), 2);
    add_object(create_jeepwheel1_3992(3912, 5352), 2);
    add_object(create_jeepwheel2_3993(3784, 5352), 2);
    add_object(create_jeepbase_3991(4096, 5316), 2);
    add_object(create_jeepwheel1_3992(4160, 5352), 2);
    add_object(create_jeepwheel2_3993(4032, 5352), 2);
    add_object(create_jeepbase_3991(3104, 5316), 2);
    add_object(create_jeepwheel1_3992(3168, 5352), 2);
    add_object(create_jeepwheel2_3993(3040, 5352), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_object(create_mapdata2_32(-432, 240), 2);
    add_background_object(create_thstone11_3085(0, 5400), 3);
    add_background_object(create_thstone11_3085(128, 5400), 3);
    add_background_object(create_thstone11_3085(256, 5400), 3);
    add_background_object(create_thstone11_3085(384, 5400), 3);
    add_background_object(create_thstone11_3085(512, 5400), 3);
    add_background_object(create_thstone11_3085(640, 5400), 3);
    add_background_object(create_thstone11_3085(768, 5400), 3);
    add_background_object(create_thstone11_3085(896, 5400), 3);
    add_background_object(create_outfitter_4058(536, 6368), 3);
    add_background_object(create_plindoorruins1_3012(0, 6360), 3);
    add_background_object(create_plindoorruins1_3012(0, 6232), 3);
    add_background_object(create_shangtubathback_4059(1072, 2520), 3);
    add_background_object(create_shangtubathback_4059(1200, 2520), 3);
    add_background_object(create_shangtubathback_4059(1072, 2568), 3);
    add_background_object(create_shangtubathback_4059(1200, 2568), 3);
    add_background_object(create_shangtubathback_4059(1072, 2472), 3);
    add_background_object(create_shangtubathback_4059(1200, 2472), 3);
    add_background_object(create_shangtubathback_4059(1328, 2520), 3);
    add_background_object(create_shangtubathback_4059(1456, 2520), 3);
    add_background_object(create_shangtubathback_4059(1328, 2568), 3);
    add_background_object(create_shangtubathback_4059(1456, 2568), 3);
    add_background_object(create_shangtubathback_4059(1328, 2472), 3);
    add_background_object(create_shangtubathback_4059(1456, 2472), 3);
    add_background_object(create_shangtubathback_4059(1584, 2520), 3);
    add_background_object(create_shangtubathback_4059(1712, 2520), 3);
    add_background_object(create_shangtubathback_4059(1584, 2568), 3);
    add_background_object(create_shangtubathback_4059(1712, 2568), 3);
    add_background_object(create_shangtubathback_4059(1584, 2472), 3);
    add_background_object(create_shangtubathback_4059(1712, 2472), 3);
    add_background_object(create_shangtubackwall2_4060(1104, 2488), 3);
    add_background_object(create_shangtubackwall3_4061(1104, 2552), 3);
    add_background_object(create_shangtubackwall2_4060(1168, 2488), 3);
    add_background_object(create_shangtubackwall2_4060(1232, 2488), 3);
    add_background_object(create_shangtubackwall_4062(1040, 2360), 3);
    add_background_object(create_shangtubackwall_4062(1040, 2488), 3);
    add_background_object(create_thback3_3127(192, 5728), 3);
    add_background_object(create_thback4_3128(192, 5856), 3);
    add_background_object(create_thstone11_3085(32, 6016), 3);
    add_background_object(create_jcdirt2_2379(1136, 4688), 3);
    add_background_object(create_jcdirt2_2379(1136, 4752), 3);
    add_background_object(create_jcdirt1_594(1152, 4488), 3);
    add_background_object(create_jcdirt1_594(896, 4488), 3);
    add_background_object(create_aquabrick2_706(5952, 1656), 3);
    add_background_object(create_stuckarrow_4063(376, 536), 3);
    add_background_object(create_shangtuwindow_4064(128, 472), 3);
    add_background_object(create_shangtuwindow_4064(0, 472), 3);
    add_background_object(create_shangtuwindow_4064(848, 472), 3);
    add_background_object(create_shangtuwindow_4064(976, 472), 3);
    add_background_object(create_shangtubackwall_4062(128, 344), 3);
    add_background_object(create_shangtubackwall_4062(784, 472), 3);
    add_background_object(create_shangtubackwall_4062(784, 344), 3);
    add_background_object(create_shangtubackwall_4062(192, 472), 3);
    add_background_object(create_shangtubackwall_4062(192, 344), 3);
    add_background_object(create_shangtubackwall_4062(64, 472), 3);
    add_background_object(create_shangtubackwall_4062(64, 344), 3);
    add_background_object(create_shangtubackwall_4062(0, 344), 3);
    add_background_object(create_shangtubackwall_4062(848, 344), 3);
    add_background_object(create_shangtubackwall_4062(912, 472), 3);
    add_background_object(create_shangtubackwall_4062(912, 344), 3);
    add_background_object(create_shangtubackwall_4062(976, 344), 3);
    add_background_object(create_backdrop9_4065(608, 392), 3);
    add_background_object(create_backdrop9_4065(400, 488), 3);
    add_background_object(create_backdrop9_4065(400, 384), 3);
    add_background_object(create_backdrop9_4065(504, 488), 3);
    add_background_object(create_backdrop9_4065(504, 384), 3);
    add_background_object(create_backdrop9_4065(608, 488), 3);
    add_background_object(create_backdrop8_4066(688, 392), 3);
    add_background_object(create_backdrop8_4066(320, 488), 3);
    add_background_object(create_backdrop8_4066(320, 392), 3);
    add_background_object(create_backdrop8_4066(688, 488), 3);
    add_background_object(create_backdrop7_4067(744, 392), 3);
    add_background_object(create_backdrop7_4067(264, 488), 3);
    add_background_object(create_backdrop7_4067(264, 392), 3);
    add_background_object(create_backdrop7_4067(744, 488), 3);
    add_background_object(create_shangtuarch3_4068(256, 584), 3);
    add_background_object(create_shangtuarch4_4069(520, 584), 3);
    add_background_object(create_shangtufloor1_4070(0, 600), 3);
    add_background_object(create_shangtufloor1_4070(128, 600), 3);
    add_background_object(create_shangtufloor1_4070(256, 600), 3);
    add_background_object(create_shangtufloor1_4070(384, 600), 3);
    add_background_object(create_shangtufloor1_4070(512, 600), 3);
    add_background_object(create_shangtufloor1_4070(640, 600), 3);
    add_background_object(create_shangtufloor1_4070(768, 600), 3);
    add_background_object(create_shangtufloor1_4070(896, 600), 3);
    add_background_object(create_shangtufloor2_4071(0, 664), 3);
    add_background_object(create_shangtufloor2_4071(128, 664), 3);
    add_background_object(create_shangtufloor2_4071(256, 664), 3);
    add_background_object(create_shangtufloor2_4071(384, 664), 3);
    add_background_object(create_shangtufloor2_4071(512, 664), 3);
    add_background_object(create_shangtufloor2_4071(640, 664), 3);
    add_background_object(create_shangtufloor2_4071(768, 664), 3);
    add_background_object(create_shangtufloor2_4071(896, 664), 3);
    add_background_object(create_shangtuflag1_4072(400, 416), 3);
    add_background_object(create_shangtuflag1_4072(504, 416), 3);
    add_background_object(create_shangtuflag1_4072(600, 416), 3);
    add_background_object(create_shangtuflag2_4073(328, 408), 3);
    add_background_object(create_shangtuflag2_4073(680, 408), 3);
    add_background_object(create_shangtuflag3_4074(280, 400), 3);
    add_background_object(create_shangtuflag3_4074(736, 400), 3);
    add_background_object(create_shangtuarch2_4075(520, 368), 3);
    add_background_object(create_shangtuarch1_4076(256, 368), 3);
    add_background_object(create_shangtucolumn1_4077(192, 504), 3);
    add_background_object(create_shangtucolumn1_4077(64, 504), 3);
    add_background_object(create_shangtucolumn1_4077(784, 504), 3);
    add_background_object(create_shangtucolumn1_4077(912, 504), 3);
    add_background_object(create_shangtucolumn2_4078(192, 408), 3);
    add_background_object(create_shangtucolumn2_4078(192, 312), 3);
    add_background_object(create_shangtucolumn2_4078(64, 408), 3);
    add_background_object(create_shangtucolumn2_4078(64, 312), 3);
    add_background_object(create_shangtucolumn2_4078(784, 408), 3);
    add_background_object(create_shangtucolumn2_4078(784, 312), 3);
    add_background_object(create_shangtucolumn2_4078(912, 408), 3);
    add_background_object(create_shangtucolumn2_4078(912, 312), 3);
    add_background_object(create_shangtuwindow_4064(128, 872), 3);
    add_background_object(create_shangtuwindow_4064(0, 872), 3);
    add_background_object(create_shangtubackwall_4062(128, 744), 3);
    add_background_object(create_shangtubackwall_4062(192, 872), 3);
    add_background_object(create_shangtubackwall_4062(192, 744), 3);
    add_background_object(create_shangtubackwall_4062(64, 872), 3);
    add_background_object(create_shangtubackwall_4062(64, 744), 3);
    add_background_object(create_shangtubackwall_4062(0, 744), 3);
    add_background_object(create_shangtucolumn1_4077(192, 904), 3);
    add_background_object(create_shangtucolumn1_4077(64, 904), 3);
    add_background_object(create_shangtucolumn2_4078(192, 808), 3);
    add_background_object(create_shangtucolumn2_4078(192, 712), 3);
    add_background_object(create_shangtucolumn2_4078(64, 808), 3);
    add_background_object(create_shangtucolumn2_4078(64, 712), 3);
    add_background_object(create_shangtuwindow_4064(384, 872), 3);
    add_background_object(create_shangtuwindow_4064(256, 872), 3);
    add_background_object(create_shangtubackwall_4062(384, 744), 3);
    add_background_object(create_shangtubackwall_4062(448, 872), 3);
    add_background_object(create_shangtubackwall_4062(448, 744), 3);
    add_background_object(create_shangtubackwall_4062(320, 872), 3);
    add_background_object(create_shangtubackwall_4062(320, 744), 3);
    add_background_object(create_shangtubackwall_4062(256, 744), 3);
    add_background_object(create_shangtucolumn1_4077(448, 904), 3);
    add_background_object(create_shangtucolumn1_4077(320, 904), 3);
    add_background_object(create_shangtucolumn2_4078(448, 808), 3);
    add_background_object(create_shangtucolumn2_4078(448, 712), 3);
    add_background_object(create_shangtucolumn2_4078(320, 808), 3);
    add_background_object(create_shangtucolumn2_4078(320, 712), 3);
    add_background_object(create_shangtuwindow_4064(640, 872), 3);
    add_background_object(create_shangtuwindow_4064(512, 872), 3);
    add_background_object(create_shangtubackwall_4062(640, 744), 3);
    add_background_object(create_shangtubackwall_4062(704, 872), 3);
    add_background_object(create_shangtubackwall_4062(704, 744), 3);
    add_background_object(create_shangtubackwall_4062(576, 872), 3);
    add_background_object(create_shangtubackwall_4062(576, 744), 3);
    add_background_object(create_shangtubackwall_4062(512, 744), 3);
    add_background_object(create_shangtucolumn1_4077(704, 904), 3);
    add_background_object(create_shangtucolumn1_4077(576, 904), 3);
    add_background_object(create_shangtucolumn2_4078(704, 808), 3);
    add_background_object(create_shangtucolumn2_4078(704, 712), 3);
    add_background_object(create_shangtucolumn2_4078(576, 808), 3);
    add_background_object(create_shangtucolumn2_4078(576, 712), 3);
    add_background_object(create_shangtuwindow_4064(768, 872), 3);
    add_background_object(create_shangtubackwall_4062(768, 744), 3);
    add_background_object(create_shangtufloor1_4070(0, 1000), 3);
    add_background_object(create_shangtufloor1_4070(128, 1000), 3);
    add_background_object(create_shangtufloor1_4070(256, 1000), 3);
    add_background_object(create_shangtufloor1_4070(384, 1000), 3);
    add_background_object(create_shangtufloor1_4070(512, 1000), 3);
    add_background_object(create_shangtufloor1_4070(640, 1000), 3);
    add_background_object(create_shangtufloor1_4070(768, 1000), 3);
    add_background_object(create_shangtufloor1_4070(896, 1000), 3);
    add_background_object(create_shangtufloor2_4071(0, 1064), 3);
    add_background_object(create_shangtufloor2_4071(128, 1064), 3);
    add_background_object(create_shangtufloor2_4071(256, 1064), 3);
    add_background_object(create_shangtufloor2_4071(384, 1064), 3);
    add_background_object(create_shangtufloor2_4071(512, 1064), 3);
    add_background_object(create_shangtufloor2_4071(640, 1064), 3);
    add_background_object(create_shangtufloor2_4071(768, 1064), 3);
    add_background_object(create_shangtufloor2_4071(896, 1064), 3);
    add_background_object(create_shangtubackwall_4062(832, 872), 3);
    add_background_object(create_shangtubackwall_4062(832, 744), 3);
    add_background_object(create_shangtucolumn1_4077(832, 904), 3);
    add_background_object(create_shangtucolumn2_4078(832, 808), 3);
    add_background_object(create_shangtucolumn2_4078(832, 712), 3);
    add_background_object(create_shangtuwindow_4064(896, 872), 3);
    add_background_object(create_shangtubackwall_4062(896, 744), 3);
    add_background_object(create_aquabrick11_688(5760, 1648), 3);
    add_background_object(create_aquabrick11_688(5952, 1672), 3);
    add_background_object(create_aquabrick11_688(6080, 1672), 3);
    add_background_object(create_aquabrick11_688(6208, 1672), 3);
    add_background_object(create_aquabrick11_688(6848, 1672), 3);
    add_background_object(create_aquabrick11_688(6976, 1672), 3);
    add_background_object(create_aquabrick11_688(7104, 1672), 3);
    add_background_object(create_aquabrick11_688(5824, 1672), 3);
    add_background_object(create_aquabrick11_688(5696, 1672), 3);
    add_background_object(create_aquabrick11_688(5760, 1712), 3);
    add_background_object(create_aquabrick11_688(5952, 1648), 3);
    add_background_object(create_aquabrick11_688(5952, 1712), 3);
    add_background_object(create_shuigangtapestry_4079(7104, 1344), 3);
    add_background_object(create_shuigangtapestry_4079(6976, 1344), 3);
    add_background_object(create_shuigangtapestry_4079(6976, 1432), 3);
    add_background_object(create_shuigangtapestry_4079(7104, 1432), 3);
    add_background_object(create_shuigangtapestry_4079(7040, 1344), 3);
    add_background_object(create_aquabrick2_706(5888, 1656), 3);
    add_background_object(create_aquabrick2_706(6016, 1656), 3);
    add_background_object(create_aquabrick2_706(6080, 1656), 3);
    add_background_object(create_aquabrick2_706(6144, 1656), 3);
    add_background_object(create_aquabrick2_706(6208, 1656), 3);
    add_background_object(create_aquabrick2_706(6784, 1656), 3);
    add_background_object(create_aquabrick2_706(6848, 1656), 3);
    add_background_object(create_aquabrick2_706(6912, 1656), 3);
    add_background_object(create_aquabrick2_706(6976, 1656), 3);
    add_background_object(create_aquabrick2_706(7040, 1656), 3);
    add_background_object(create_aquabrick2_706(7104, 1656), 3);
    add_background_object(create_aquabrick2_706(5824, 1656), 3);
    add_background_object(create_aquabrick2_706(5632, 1656), 3);
    add_background_object(create_aquabrick2_706(5696, 1656), 3);
    add_background_object(create_aquabrick2_706(5760, 1632), 3);
    add_background_object(create_aquabrick2_706(5952, 1632), 3);
    add_background_object(create_aquabrick1_676(5888, 1672), 3);
    add_background_object(create_aquabrick1_676(6016, 1672), 3);
    add_background_object(create_aquabrick1_676(6144, 1672), 3);
    add_background_object(create_aquabrick1_676(6784, 1672), 3);
    add_background_object(create_aquabrick1_676(6912, 1672), 3);
    add_background_object(create_aquabrick1_676(7040, 1672), 3);
    add_background_object(create_aquabrick1_676(5952, 1336), 3);
    add_background_object(create_aquabrick1_676(5888, 1336), 3);
    add_background_object(create_aquabrick1_676(6080, 1336), 3);
    add_background_object(create_aquabrick1_676(6016, 1336), 3);
    add_background_object(create_aquabrick1_676(6208, 1336), 3);
    add_background_object(create_aquabrick1_676(6144, 1336), 3);
    add_background_object(create_aquabrick1_676(6848, 1336), 3);
    add_background_object(create_aquabrick1_676(6784, 1336), 3);
    add_background_object(create_aquabrick1_676(6976, 1336), 3);
    add_background_object(create_aquabrick1_676(6912, 1336), 3);
    add_background_object(create_aquabrick1_676(7104, 1336), 3);
    add_background_object(create_aquabrick1_676(7040, 1336), 3);
    add_background_object(create_aquabrick1_676(5824, 1336), 3);
    add_background_object(create_aquabrick1_676(5760, 1336), 3);
    add_background_object(create_aquabrick1_676(5632, 1672), 3);
    add_background_object(create_aquabrick1_676(5696, 1336), 3);
    add_background_object(create_aquabrick1_676(5632, 1336), 3);
    add_background_object(create_aquabrick1_676(5760, 1680), 3);
    add_background_object(create_aquabrick1_676(5760, 1744), 3);
    add_background_object(create_aquabrick1_676(5952, 1680), 3);
    add_background_object(create_aquabrick1_676(5952, 1744), 3);
    add_background_object(create_aquabrick3_691(5888, 1704), 3);
    add_background_object(create_aquabrick3_691(6016, 1704), 3);
    add_background_object(create_aquabrick3_691(6144, 1704), 3);
    add_background_object(create_aquabrick3_691(6784, 1704), 3);
    add_background_object(create_aquabrick3_691(6912, 1704), 3);
    add_background_object(create_aquabrick3_691(7040, 1704), 3);
    add_background_object(create_aquabrick3_691(5888, 1272), 3);
    add_background_object(create_aquabrick3_691(6016, 1272), 3);
    add_background_object(create_aquabrick3_691(6144, 1272), 3);
    add_background_object(create_aquabrick3_691(6784, 1272), 3);
    add_background_object(create_aquabrick3_691(6912, 1272), 3);
    add_background_object(create_aquabrick3_691(7040, 1272), 3);
    add_background_object(create_aquabrick3_691(5760, 1704), 3);
    add_background_object(create_aquabrick3_691(5760, 1272), 3);
    add_background_object(create_aquabrick3_691(5632, 1704), 3);
    add_background_object(create_aquabrick3_691(5632, 1272), 3);
    add_background_object(create_shuigangstars_4080(6912, 1624), 3);
    add_background_object(create_shuigangthrone_4081(7032, 1560), 3);
    add_background_object(create_shuigangpillar1_4082(6240, 1560), 3);
    add_background_object(create_shuigangpillar1_4082(6048, 1560), 3);
    add_background_object(create_shuigangpillar1_4082(5856, 1560), 3);
    add_background_object(create_shuigangpillar1_4082(5664, 1560), 3);
    add_background_object(create_shuigangpillar2_4083(6240, 1464), 3);
    add_background_object(create_shuigangpillar2_4083(6240, 1368), 3);
    add_background_object(create_shuigangpillar2_4083(6048, 1464), 3);
    add_background_object(create_shuigangpillar2_4083(6048, 1368), 3);
    add_background_object(create_shuigangpillar2_4083(5856, 1464), 3);
    add_background_object(create_shuigangpillar2_4083(5856, 1368), 3);
    add_background_object(create_shuigangpillar2_4083(5664, 1464), 3);
    add_background_object(create_shuigangpillar2_4083(5664, 1368), 3);
    add_background_object(create_aquabrick13_712(5744, 1632), 3);
    add_background_object(create_aquabrick13_712(5936, 1632), 3);
    add_background_object(create_aquabrick6_709(5824, 1632), 3);
    add_background_object(create_aquabrick6_709(6016, 1632), 3);
    add_background_object(create_aquabrick14_693(5744, 1648), 3);
    add_background_object(create_aquabrick14_693(5744, 1712), 3);
    add_background_object(create_aquabrick14_693(5936, 1648), 3);
    add_background_object(create_aquabrick14_693(5936, 1712), 3);
    add_background_object(create_aquabrick4_707(5816, 1648), 3);
    add_background_object(create_aquabrick4_707(5816, 1712), 3);
    add_background_object(create_aquabrick4_707(6008, 1648), 3);
    add_background_object(create_aquabrick4_707(6008, 1712), 3);
    add_background_object(create_aquabrick11_688(5568, 1672), 3);
    add_background_object(create_aquabrick2_706(5504, 1656), 3);
    add_background_object(create_aquabrick2_706(5568, 1656), 3);
    add_background_object(create_aquabrick1_676(5504, 1672), 3);
    add_background_object(create_aquabrick1_676(5568, 1336), 3);
    add_background_object(create_aquabrick1_676(5504, 1336), 3);
    add_background_object(create_aquabrick3_691(5504, 1704), 3);
    add_background_object(create_aquabrick3_691(5504, 1272), 3);
    add_background_object(create_aquabrick11_688(5440, 1672), 3);
    add_background_object(create_aquabrick2_706(5376, 1656), 3);
    add_background_object(create_aquabrick2_706(5440, 1656), 3);
    add_background_object(create_aquabrick1_676(5376, 1672), 3);
    add_background_object(create_aquabrick1_676(5440, 1336), 3);
    add_background_object(create_aquabrick1_676(5376, 1336), 3);
    add_background_object(create_aquabrick3_691(5376, 1704), 3);
    add_background_object(create_aquabrick3_691(5376, 1272), 3);
    add_background_object(create_aquabrick11_688(5312, 1672), 3);
    add_background_object(create_aquabrick2_706(5248, 1656), 3);
    add_background_object(create_aquabrick2_706(5312, 1656), 3);
    add_background_object(create_aquabrick1_676(5248, 1672), 3);
    add_background_object(create_aquabrick1_676(5312, 1336), 3);
    add_background_object(create_aquabrick1_676(5248, 1336), 3);
    add_background_object(create_aquabrick3_691(5248, 1704), 3);
    add_background_object(create_aquabrick3_691(5248, 1272), 3);
    add_background_object(create_aquabrick11_688(5184, 1672), 3);
    add_background_object(create_aquabrick2_706(5120, 1656), 3);
    add_background_object(create_aquabrick2_706(5184, 1656), 3);
    add_background_object(create_aquabrick1_676(5120, 1672), 3);
    add_background_object(create_aquabrick1_676(5184, 1336), 3);
    add_background_object(create_aquabrick1_676(5120, 1336), 3);
    add_background_object(create_aquabrick3_691(5120, 1704), 3);
    add_background_object(create_aquabrick3_691(5120, 1272), 3);
    add_background_object(create_aquabrick11_688(5056, 1672), 3);
    add_background_object(create_aquabrick2_706(4992, 1656), 3);
    add_background_object(create_aquabrick2_706(5056, 1656), 3);
    add_background_object(create_aquabrick1_676(4992, 1672), 3);
    add_background_object(create_aquabrick1_676(5056, 1336), 3);
    add_background_object(create_aquabrick1_676(4992, 1336), 3);
    add_background_object(create_aquabrick3_691(4992, 1704), 3);
    add_background_object(create_aquabrick3_691(4992, 1272), 3);
    add_background_object(create_aquabrick11_688(4928, 1672), 3);
    add_background_object(create_aquabrick2_706(4864, 1656), 3);
    add_background_object(create_aquabrick2_706(4928, 1656), 3);
    add_background_object(create_aquabrick1_676(4864, 1672), 3);
    add_background_object(create_aquabrick1_676(4928, 1336), 3);
    add_background_object(create_aquabrick1_676(4864, 1336), 3);
    add_background_object(create_aquabrick3_691(4864, 1704), 3);
    add_background_object(create_aquabrick3_691(4864, 1272), 3);
    add_background_object(create_aquabrick11_688(4800, 1672), 3);
    add_background_object(create_aquabrick2_706(4736, 1656), 3);
    add_background_object(create_aquabrick2_706(4800, 1656), 3);
    add_background_object(create_aquabrick1_676(4736, 1672), 3);
    add_background_object(create_aquabrick1_676(4800, 1336), 3);
    add_background_object(create_aquabrick1_676(4736, 1336), 3);
    add_background_object(create_aquabrick3_691(4736, 1704), 3);
    add_background_object(create_aquabrick3_691(4736, 1272), 3);
    add_background_object(create_aquabrick11_688(4672, 1672), 3);
    add_background_object(create_aquabrick2_706(4608, 1656), 3);
    add_background_object(create_aquabrick2_706(4672, 1656), 3);
    add_background_object(create_aquabrick1_676(4608, 1672), 3);
    add_background_object(create_aquabrick1_676(4672, 1336), 3);
    add_background_object(create_aquabrick1_676(4608, 1336), 3);
    add_background_object(create_aquabrick3_691(4608, 1704), 3);
    add_background_object(create_aquabrick3_691(4608, 1272), 3);
    add_background_object(create_aquabrick11_688(4544, 1672), 3);
    add_background_object(create_aquabrick2_706(4480, 1656), 3);
    add_background_object(create_aquabrick2_706(4544, 1656), 3);
    add_background_object(create_aquabrick1_676(4480, 1672), 3);
    add_background_object(create_aquabrick1_676(4544, 1336), 3);
    add_background_object(create_aquabrick1_676(4480, 1336), 3);
    add_background_object(create_aquabrick3_691(4480, 1704), 3);
    add_background_object(create_aquabrick3_691(4480, 1272), 3);
    add_background_object(create_shuigangpillar1_4082(5280, 1560), 3);
    add_background_object(create_shuigangpillar1_4082(5088, 1560), 3);
    add_background_object(create_shuigangpillar2_4083(5280, 1464), 3);
    add_background_object(create_shuigangpillar2_4083(5280, 1368), 3);
    add_background_object(create_shuigangpillar2_4083(5088, 1464), 3);
    add_background_object(create_shuigangpillar2_4083(5088, 1368), 3);
    add_background_object(create_shuigangpillar1_4082(4704, 1560), 3);
    add_background_object(create_shuigangpillar1_4082(4512, 1560), 3);
    add_background_object(create_aquabrick11_688(960, 1672), 3);
    add_background_object(create_aquabrick2_706(896, 1656), 3);
    add_background_object(create_aquabrick2_706(960, 1656), 3);
    add_background_object(create_aquabrick1_676(896, 1672), 3);
    add_background_object(create_aquabrick1_676(960, 1336), 3);
    add_background_object(create_aquabrick1_676(896, 1336), 3);
    add_background_object(create_aquabrick3_691(896, 1704), 3);
    add_background_object(create_aquabrick3_691(896, 1272), 3);
    add_background_object(create_aquabrick11_688(832, 1672), 3);
    add_background_object(create_aquabrick2_706(768, 1656), 3);
    add_background_object(create_aquabrick2_706(832, 1656), 3);
    add_background_object(create_aquabrick1_676(768, 1672), 3);
    add_background_object(create_aquabrick1_676(832, 1336), 3);
    add_background_object(create_aquabrick1_676(768, 1336), 3);
    add_background_object(create_aquabrick3_691(768, 1704), 3);
    add_background_object(create_aquabrick3_691(768, 1272), 3);
    add_background_object(create_aquabrick11_688(704, 1672), 3);
    add_background_object(create_aquabrick2_706(640, 1656), 3);
    add_background_object(create_aquabrick2_706(704, 1656), 3);
    add_background_object(create_aquabrick1_676(640, 1672), 3);
    add_background_object(create_aquabrick1_676(704, 1336), 3);
    add_background_object(create_aquabrick1_676(640, 1336), 3);
    add_background_object(create_aquabrick3_691(640, 1704), 3);
    add_background_object(create_aquabrick3_691(640, 1272), 3);
    add_background_object(create_aquabrick11_688(576, 1672), 3);
    add_background_object(create_aquabrick2_706(512, 1656), 3);
    add_background_object(create_aquabrick2_706(576, 1656), 3);
    add_background_object(create_aquabrick1_676(512, 1672), 3);
    add_background_object(create_aquabrick1_676(576, 1336), 3);
    add_background_object(create_aquabrick1_676(512, 1336), 3);
    add_background_object(create_aquabrick3_691(512, 1704), 3);
    add_background_object(create_aquabrick3_691(512, 1272), 3);
    add_background_object(create_aquabrick11_688(448, 1672), 3);
    add_background_object(create_aquabrick2_706(384, 1656), 3);
    add_background_object(create_aquabrick2_706(448, 1656), 3);
    add_background_object(create_aquabrick1_676(384, 1672), 3);
    add_background_object(create_aquabrick1_676(448, 1336), 3);
    add_background_object(create_aquabrick1_676(384, 1336), 3);
    add_background_object(create_aquabrick3_691(384, 1704), 3);
    add_background_object(create_aquabrick3_691(384, 1272), 3);
    add_background_object(create_aquabrick11_688(320, 1672), 3);
    add_background_object(create_aquabrick2_706(256, 1656), 3);
    add_background_object(create_aquabrick2_706(320, 1656), 3);
    add_background_object(create_aquabrick1_676(256, 1672), 3);
    add_background_object(create_aquabrick1_676(320, 1336), 3);
    add_background_object(create_aquabrick1_676(256, 1336), 3);
    add_background_object(create_aquabrick3_691(256, 1704), 3);
    add_background_object(create_aquabrick3_691(256, 1272), 3);
    add_background_object(create_aquabrick11_688(192, 1672), 3);
    add_background_object(create_aquabrick2_706(128, 1656), 3);
    add_background_object(create_aquabrick2_706(192, 1656), 3);
    add_background_object(create_aquabrick1_676(128, 1672), 3);
    add_background_object(create_aquabrick1_676(192, 1336), 3);
    add_background_object(create_aquabrick1_676(128, 1336), 3);
    add_background_object(create_aquabrick3_691(128, 1704), 3);
    add_background_object(create_aquabrick3_691(128, 1272), 3);
    add_background_object(create_aquabrick11_688(64, 1672), 3);
    add_background_object(create_aquabrick2_706(0, 1656), 3);
    add_background_object(create_aquabrick2_706(64, 1656), 3);
    add_background_object(create_aquabrick1_676(0, 1672), 3);
    add_background_object(create_aquabrick1_676(64, 1336), 3);
    add_background_object(create_aquabrick1_676(0, 1336), 3);
    add_background_object(create_aquabrick3_691(0, 1704), 3);
    add_background_object(create_aquabrick3_691(0, 1272), 3);
    add_background_object(create_shuigangpillar1_4082(672, 1560), 3);
    add_background_object(create_shuigangpillar1_4082(480, 1560), 3);
    add_background_object(create_shuigangpillar3_4084(480, 1544), 3);
    add_background_object(create_shuigangpillar1_4082(96, 1560), 3);
    add_background_object(create_shuigangpillar1_4082(-96, 1560), 3);
    add_background_object(create_shuigangpillar2_4083(96, 1464), 3);
    add_background_object(create_shuigangpillar2_4083(96, 1368), 3);
    add_background_object(create_shuigangpillar2_4083(-96, 1464), 3);
    add_background_object(create_shuigangpillar2_4083(-96, 1368), 3);
    add_background_object(create_shuigangtapestry_4079(160, 1792), 3);
    add_background_object(create_shuigangtapestry_4079(304, 1792), 3);
    add_background_object(create_shuigangtapestry_4079(232, 1792), 3);
    add_background_object(create_shuigangtapestry_4079(160, 1904), 3);
    add_background_object(create_shuigangtapestry_4079(304, 1904), 3);
    add_background_object(create_shuigangtapestry_4079(232, 1848), 3);
    add_background_object(create_shuigangcurtain1_4048(64, 1792), 3);
    add_background_object(create_shuigangcurtain2_4085(272, 1792), 3);
    add_background_object(create_aquabrick1_676(0, 1768), 3);
    add_background_object(create_aquabrick1_676(64, 1768), 3);
    add_background_object(create_aquabrick1_676(128, 1768), 3);
    add_background_object(create_aquabrick1_676(192, 1768), 3);
    add_background_object(create_aquabrick1_676(256, 1768), 3);
    add_background_object(create_aquabrick1_676(320, 1768), 3);
    add_background_object(create_aquabrick1_676(384, 1768), 3);
    add_background_object(create_aquabrick1_676(448, 1768), 3);
    add_background_object(create_aquabrick1_676(512, 1768), 3);
    add_background_object(create_aquabrick1_676(576, 1768), 3);
    add_background_object(create_aquabrick1_676(640, 1768), 3);
    add_background_object(create_aquabrick1_676(704, 1768), 3);
    add_background_object(create_aquabrick1_676(768, 1768), 3);
    add_background_object(create_aquabrick1_676(832, 1768), 3);
    add_background_object(create_aquabrick1_676(896, 1768), 3);
    add_background_object(create_aquabrick1_676(960, 1768), 3);
    add_background_object(create_aquabrick1_676(4480, 1768), 3);
    add_background_object(create_aquabrick1_676(4544, 1768), 3);
    add_background_object(create_aquabrick1_676(4608, 1768), 3);
    add_background_object(create_aquabrick1_676(4672, 1768), 3);
    add_background_object(create_aquabrick1_676(4736, 1768), 3);
    add_background_object(create_aquabrick1_676(4800, 1768), 3);
    add_background_object(create_aquabrick1_676(4864, 1768), 3);
    add_background_object(create_aquabrick1_676(4928, 1768), 3);
    add_background_object(create_aquabrick1_676(4992, 1768), 3);
    add_background_object(create_aquabrick1_676(5056, 1768), 3);
    add_background_object(create_aquabrick1_676(5120, 1768), 3);
    add_background_object(create_aquabrick1_676(5184, 1768), 3);
    add_background_object(create_aquabrick1_676(5248, 1768), 3);
    add_background_object(create_aquabrick1_676(5312, 1768), 3);
    add_background_object(create_aquabrick1_676(5376, 1768), 3);
    add_background_object(create_aquabrick1_676(5440, 1768), 3);
    add_background_object(create_aquabrick1_676(5504, 1768), 3);
    add_background_object(create_aquabrick1_676(5568, 1768), 3);
    add_background_object(create_aquabrick1_676(5632, 1768), 3);
    add_background_object(create_aquabrick1_676(5696, 1768), 3);
    add_background_object(create_aquabrick1_676(5760, 1768), 3);
    add_background_object(create_aquabrick1_676(5824, 1768), 3);
    add_background_object(create_aquabrick1_676(5888, 1768), 3);
    add_background_object(create_aquabrick1_676(5952, 1768), 3);
    add_background_object(create_aquabrick1_676(6016, 1768), 3);
    add_background_object(create_aquabrick1_676(6080, 1768), 3);
    add_background_object(create_aquabrick1_676(6144, 1768), 3);
    add_background_object(create_aquabrick1_676(6208, 1768), 3);
    add_background_object(create_aquabrick1_676(6784, 1768), 3);
    add_background_object(create_aquabrick1_676(6848, 1768), 3);
    add_background_object(create_aquabrick1_676(6912, 1768), 3);
    add_background_object(create_aquabrick1_676(6976, 1768), 3);
    add_background_object(create_aquabrick1_676(7040, 1768), 3);
    add_background_object(create_aquabrick1_676(7104, 1768), 3);
    add_background_object(create_aquabrick2_706(4416, 1656), 3);
    add_background_object(create_aquabrick1_676(4416, 1672), 3);
    add_background_object(create_aquabrick1_676(4416, 1336), 3);
    add_background_object(create_aquabrick11_688(4352, 1672), 3);
    add_background_object(create_aquabrick2_706(4288, 1656), 3);
    add_background_object(create_aquabrick2_706(4352, 1656), 3);
    add_background_object(create_aquabrick1_676(4288, 1672), 3);
    add_background_object(create_aquabrick1_676(4352, 1336), 3);
    add_background_object(create_aquabrick1_676(4288, 1336), 3);
    add_background_object(create_aquabrick3_691(4352, 1704), 3);
    add_background_object(create_aquabrick3_691(4352, 1272), 3);
    add_background_object(create_aquabrick11_688(4224, 1672), 3);
    add_background_object(create_aquabrick2_706(4160, 1656), 3);
    add_background_object(create_aquabrick2_706(4224, 1656), 3);
    add_background_object(create_aquabrick1_676(4160, 1672), 3);
    add_background_object(create_aquabrick1_676(4224, 1336), 3);
    add_background_object(create_aquabrick1_676(4160, 1336), 3);
    add_background_object(create_aquabrick3_691(4224, 1704), 3);
    add_background_object(create_aquabrick3_691(4224, 1272), 3);
    add_background_object(create_aquabrick11_688(4096, 1672), 3);
    add_background_object(create_aquabrick2_706(4032, 1656), 3);
    add_background_object(create_aquabrick2_706(4096, 1656), 3);
    add_background_object(create_aquabrick1_676(4032, 1672), 3);
    add_background_object(create_aquabrick1_676(4096, 1336), 3);
    add_background_object(create_aquabrick1_676(4032, 1336), 3);
    add_background_object(create_aquabrick3_691(4096, 1704), 3);
    add_background_object(create_aquabrick3_691(4096, 1272), 3);
    add_background_object(create_aquabrick11_688(3968, 1672), 3);
    add_background_object(create_aquabrick2_706(3904, 1656), 3);
    add_background_object(create_aquabrick2_706(3968, 1656), 3);
    add_background_object(create_aquabrick1_676(3904, 1672), 3);
    add_background_object(create_aquabrick1_676(3968, 1336), 3);
    add_background_object(create_aquabrick1_676(3904, 1336), 3);
    add_background_object(create_aquabrick3_691(3968, 1704), 3);
    add_background_object(create_aquabrick3_691(3968, 1272), 3);
    add_background_object(create_shuigangpillar1_4082(4128, 1560), 3);
    add_background_object(create_shuigangpillar1_4082(3936, 1560), 3);
    add_background_object(create_aquabrick1_676(3904, 1768), 3);
    add_background_object(create_aquabrick1_676(3968, 1768), 3);
    add_background_object(create_aquabrick1_676(4032, 1768), 3);
    add_background_object(create_aquabrick1_676(4096, 1768), 3);
    add_background_object(create_aquabrick1_676(4160, 1768), 3);
    add_background_object(create_aquabrick1_676(4224, 1768), 3);
    add_background_object(create_aquabrick1_676(4288, 1768), 3);
    add_background_object(create_aquabrick1_676(4352, 1768), 3);
    add_background_object(create_aquabrick1_676(4416, 1768), 3);
    add_background_object(create_aquabrick2_706(3840, 1656), 3);
    add_background_object(create_aquabrick1_676(3840, 1672), 3);
    add_background_object(create_aquabrick1_676(3840, 1336), 3);
    add_background_object(create_aquabrick3_691(3840, 1704), 3);
    add_background_object(create_aquabrick3_691(3840, 1272), 3);
    add_background_object(create_aquabrick11_688(3776, 1672), 3);
    add_background_object(create_aquabrick2_706(3712, 1656), 3);
    add_background_object(create_aquabrick2_706(3776, 1656), 3);
    add_background_object(create_aquabrick1_676(3712, 1672), 3);
    add_background_object(create_aquabrick1_676(3776, 1336), 3);
    add_background_object(create_aquabrick1_676(3712, 1336), 3);
    add_background_object(create_aquabrick3_691(3712, 1704), 3);
    add_background_object(create_aquabrick3_691(3712, 1272), 3);
    add_background_object(create_aquabrick11_688(3648, 1672), 3);
    add_background_object(create_aquabrick2_706(3584, 1656), 3);
    add_background_object(create_aquabrick2_706(3648, 1656), 3);
    add_background_object(create_aquabrick1_676(3584, 1672), 3);
    add_background_object(create_aquabrick1_676(3648, 1336), 3);
    add_background_object(create_aquabrick1_676(3584, 1336), 3);
    add_background_object(create_aquabrick3_691(3584, 1704), 3);
    add_background_object(create_aquabrick3_691(3584, 1272), 3);
    add_background_object(create_aquabrick11_688(3520, 1672), 3);
    add_background_object(create_aquabrick2_706(3456, 1656), 3);
    add_background_object(create_aquabrick2_706(3520, 1656), 3);
    add_background_object(create_aquabrick1_676(3456, 1672), 3);
    add_background_object(create_aquabrick1_676(3520, 1336), 3);
    add_background_object(create_aquabrick1_676(3456, 1336), 3);
    add_background_object(create_aquabrick3_691(3456, 1704), 3);
    add_background_object(create_aquabrick3_691(3456, 1272), 3);
    add_background_object(create_aquabrick11_688(3392, 1672), 3);
    add_background_object(create_aquabrick2_706(3328, 1656), 3);
    add_background_object(create_aquabrick2_706(3392, 1656), 3);
    add_background_object(create_aquabrick1_676(3328, 1672), 3);
    add_background_object(create_aquabrick1_676(3392, 1336), 3);
    add_background_object(create_aquabrick1_676(3328, 1336), 3);
    add_background_object(create_aquabrick3_691(3328, 1704), 3);
    add_background_object(create_aquabrick3_691(3328, 1272), 3);
    add_background_object(create_shuigangpillar1_4082(3552, 1560), 3);
    add_background_object(create_shuigangpillar1_4082(3360, 1560), 3);
    add_background_object(create_aquabrick1_676(3328, 1768), 3);
    add_background_object(create_aquabrick1_676(3392, 1768), 3);
    add_background_object(create_aquabrick1_676(3456, 1768), 3);
    add_background_object(create_aquabrick1_676(3520, 1768), 3);
    add_background_object(create_aquabrick1_676(3584, 1768), 3);
    add_background_object(create_aquabrick1_676(3648, 1768), 3);
    add_background_object(create_aquabrick1_676(3712, 1768), 3);
    add_background_object(create_aquabrick1_676(3776, 1768), 3);
    add_background_object(create_aquabrick1_676(3840, 1768), 3);
    add_background_object(create_aquabrick2_706(3264, 1656), 3);
    add_background_object(create_aquabrick1_676(3264, 1672), 3);
    add_background_object(create_aquabrick1_676(3264, 1336), 3);
    add_background_object(create_aquabrick11_688(3200, 1672), 3);
    add_background_object(create_aquabrick2_706(3136, 1656), 3);
    add_background_object(create_aquabrick2_706(3200, 1656), 3);
    add_background_object(create_aquabrick1_676(3136, 1672), 3);
    add_background_object(create_aquabrick1_676(3200, 1336), 3);
    add_background_object(create_aquabrick1_676(3136, 1336), 3);
    add_background_object(create_aquabrick3_691(3200, 1704), 3);
    add_background_object(create_aquabrick3_691(3200, 1272), 3);
    add_background_object(create_aquabrick11_688(3072, 1672), 3);
    add_background_object(create_aquabrick2_706(3008, 1656), 3);
    add_background_object(create_aquabrick2_706(3072, 1656), 3);
    add_background_object(create_aquabrick1_676(3008, 1672), 3);
    add_background_object(create_aquabrick1_676(3072, 1336), 3);
    add_background_object(create_aquabrick1_676(3008, 1336), 3);
    add_background_object(create_aquabrick3_691(3072, 1704), 3);
    add_background_object(create_aquabrick3_691(3072, 1272), 3);
    add_background_object(create_aquabrick11_688(2944, 1672), 3);
    add_background_object(create_aquabrick2_706(2880, 1656), 3);
    add_background_object(create_aquabrick2_706(2944, 1656), 3);
    add_background_object(create_aquabrick1_676(2880, 1672), 3);
    add_background_object(create_aquabrick1_676(2944, 1336), 3);
    add_background_object(create_aquabrick1_676(2880, 1336), 3);
    add_background_object(create_aquabrick3_691(2944, 1704), 3);
    add_background_object(create_aquabrick3_691(2944, 1272), 3);
    add_background_object(create_aquabrick11_688(2816, 1672), 3);
    add_background_object(create_aquabrick2_706(2752, 1656), 3);
    add_background_object(create_aquabrick2_706(2816, 1656), 3);
    add_background_object(create_aquabrick1_676(2752, 1672), 3);
    add_background_object(create_aquabrick1_676(2816, 1336), 3);
    add_background_object(create_aquabrick1_676(2752, 1336), 3);
    add_background_object(create_aquabrick3_691(2816, 1704), 3);
    add_background_object(create_aquabrick3_691(2816, 1272), 3);
    add_background_object(create_shuigangpillar1_4082(2976, 1560), 3);
    add_background_object(create_shuigangpillar1_4082(2784, 1560), 3);
    add_background_object(create_aquabrick1_676(2752, 1768), 3);
    add_background_object(create_aquabrick1_676(2816, 1768), 3);
    add_background_object(create_aquabrick1_676(2880, 1768), 3);
    add_background_object(create_aquabrick1_676(2944, 1768), 3);
    add_background_object(create_aquabrick1_676(3008, 1768), 3);
    add_background_object(create_aquabrick1_676(3072, 1768), 3);
    add_background_object(create_aquabrick1_676(3136, 1768), 3);
    add_background_object(create_aquabrick1_676(3200, 1768), 3);
    add_background_object(create_aquabrick1_676(3264, 1768), 3);
    add_background_object(create_aquabrick2_706(2688, 1656), 3);
    add_background_object(create_aquabrick1_676(2688, 1672), 3);
    add_background_object(create_aquabrick1_676(2688, 1336), 3);
    add_background_object(create_aquabrick3_691(2688, 1704), 3);
    add_background_object(create_aquabrick3_691(2688, 1272), 3);
    add_background_object(create_aquabrick11_688(2624, 1672), 3);
    add_background_object(create_aquabrick2_706(2560, 1656), 3);
    add_background_object(create_aquabrick2_706(2624, 1656), 3);
    add_background_object(create_aquabrick1_676(2560, 1672), 3);
    add_background_object(create_aquabrick1_676(2624, 1336), 3);
    add_background_object(create_aquabrick1_676(2560, 1336), 3);
    add_background_object(create_aquabrick3_691(2560, 1704), 3);
    add_background_object(create_aquabrick3_691(2560, 1272), 3);
    add_background_object(create_aquabrick11_688(2496, 1672), 3);
    add_background_object(create_aquabrick2_706(2432, 1656), 3);
    add_background_object(create_aquabrick2_706(2496, 1656), 3);
    add_background_object(create_aquabrick1_676(2432, 1672), 3);
    add_background_object(create_aquabrick1_676(2496, 1336), 3);
    add_background_object(create_aquabrick1_676(2432, 1336), 3);
    add_background_object(create_aquabrick3_691(2432, 1704), 3);
    add_background_object(create_aquabrick3_691(2432, 1272), 3);
    add_background_object(create_aquabrick11_688(2368, 1672), 3);
    add_background_object(create_aquabrick2_706(2304, 1656), 3);
    add_background_object(create_aquabrick2_706(2368, 1656), 3);
    add_background_object(create_aquabrick1_676(2304, 1672), 3);
    add_background_object(create_aquabrick1_676(2368, 1336), 3);
    add_background_object(create_aquabrick1_676(2304, 1336), 3);
    add_background_object(create_aquabrick3_691(2304, 1704), 3);
    add_background_object(create_aquabrick3_691(2304, 1272), 3);
    add_background_object(create_aquabrick11_688(2240, 1672), 3);
    add_background_object(create_aquabrick2_706(2176, 1656), 3);
    add_background_object(create_aquabrick2_706(2240, 1656), 3);
    add_background_object(create_aquabrick1_676(2176, 1672), 3);
    add_background_object(create_aquabrick1_676(2240, 1336), 3);
    add_background_object(create_aquabrick1_676(2176, 1336), 3);
    add_background_object(create_aquabrick3_691(2176, 1704), 3);
    add_background_object(create_aquabrick3_691(2176, 1272), 3);
    add_background_object(create_shuigangpillar1_4082(2400, 1560), 3);
    add_background_object(create_shuigangpillar1_4082(2208, 1560), 3);
    add_background_object(create_aquabrick1_676(2176, 1768), 3);
    add_background_object(create_aquabrick1_676(2240, 1768), 3);
    add_background_object(create_aquabrick1_676(2304, 1768), 3);
    add_background_object(create_aquabrick1_676(2368, 1768), 3);
    add_background_object(create_aquabrick1_676(2432, 1768), 3);
    add_background_object(create_aquabrick1_676(2496, 1768), 3);
    add_background_object(create_aquabrick1_676(2560, 1768), 3);
    add_background_object(create_aquabrick1_676(2624, 1768), 3);
    add_background_object(create_aquabrick1_676(2688, 1768), 3);
    add_background_object(create_aquabrick2_706(2112, 1656), 3);
    add_background_object(create_aquabrick1_676(2112, 1672), 3);
    add_background_object(create_aquabrick1_676(2112, 1336), 3);
    add_background_object(create_aquabrick11_688(2048, 1672), 3);
    add_background_object(create_aquabrick2_706(1984, 1656), 3);
    add_background_object(create_aquabrick2_706(2048, 1656), 3);
    add_background_object(create_aquabrick1_676(1984, 1672), 3);
    add_background_object(create_aquabrick1_676(2048, 1336), 3);
    add_background_object(create_aquabrick1_676(1984, 1336), 3);
    add_background_object(create_aquabrick3_691(2048, 1704), 3);
    add_background_object(create_aquabrick3_691(2048, 1272), 3);
    add_background_object(create_aquabrick11_688(1920, 1672), 3);
    add_background_object(create_aquabrick2_706(1856, 1656), 3);
    add_background_object(create_aquabrick2_706(1920, 1656), 3);
    add_background_object(create_aquabrick1_676(1856, 1672), 3);
    add_background_object(create_aquabrick1_676(1920, 1336), 3);
    add_background_object(create_aquabrick1_676(1856, 1336), 3);
    add_background_object(create_aquabrick3_691(1920, 1704), 3);
    add_background_object(create_aquabrick3_691(1920, 1272), 3);
    add_background_object(create_aquabrick11_688(1792, 1672), 3);
    add_background_object(create_aquabrick2_706(1728, 1656), 3);
    add_background_object(create_aquabrick2_706(1792, 1656), 3);
    add_background_object(create_aquabrick1_676(1728, 1672), 3);
    add_background_object(create_aquabrick1_676(1792, 1336), 3);
    add_background_object(create_aquabrick1_676(1728, 1336), 3);
    add_background_object(create_aquabrick3_691(1792, 1704), 3);
    add_background_object(create_aquabrick3_691(1792, 1272), 3);
    add_background_object(create_aquabrick11_688(1664, 1672), 3);
    add_background_object(create_aquabrick2_706(1600, 1656), 3);
    add_background_object(create_aquabrick2_706(1664, 1656), 3);
    add_background_object(create_aquabrick1_676(1600, 1672), 3);
    add_background_object(create_aquabrick1_676(1664, 1336), 3);
    add_background_object(create_aquabrick1_676(1600, 1336), 3);
    add_background_object(create_aquabrick3_691(1664, 1704), 3);
    add_background_object(create_aquabrick3_691(1664, 1272), 3);
    add_background_object(create_shuigangpillar1_4082(1824, 1560), 3);
    add_background_object(create_shuigangpillar1_4082(1632, 1560), 3);
    add_background_object(create_aquabrick1_676(1600, 1768), 3);
    add_background_object(create_aquabrick1_676(1664, 1768), 3);
    add_background_object(create_aquabrick1_676(1728, 1768), 3);
    add_background_object(create_aquabrick1_676(1792, 1768), 3);
    add_background_object(create_aquabrick1_676(1856, 1768), 3);
    add_background_object(create_aquabrick1_676(1920, 1768), 3);
    add_background_object(create_aquabrick1_676(1984, 1768), 3);
    add_background_object(create_aquabrick1_676(2048, 1768), 3);
    add_background_object(create_aquabrick1_676(2112, 1768), 3);
    add_background_object(create_aquabrick2_706(1536, 1656), 3);
    add_background_object(create_aquabrick1_676(1536, 1672), 3);
    add_background_object(create_aquabrick1_676(1536, 1336), 3);
    add_background_object(create_aquabrick3_691(1536, 1704), 3);
    add_background_object(create_aquabrick3_691(1536, 1272), 3);
    add_background_object(create_aquabrick11_688(1472, 1672), 3);
    add_background_object(create_aquabrick2_706(1408, 1656), 3);
    add_background_object(create_aquabrick2_706(1472, 1656), 3);
    add_background_object(create_aquabrick1_676(1408, 1672), 3);
    add_background_object(create_aquabrick1_676(1472, 1336), 3);
    add_background_object(create_aquabrick1_676(1408, 1336), 3);
    add_background_object(create_aquabrick3_691(1408, 1704), 3);
    add_background_object(create_aquabrick3_691(1408, 1272), 3);
    add_background_object(create_aquabrick11_688(1344, 1672), 3);
    add_background_object(create_aquabrick2_706(1280, 1656), 3);
    add_background_object(create_aquabrick2_706(1344, 1656), 3);
    add_background_object(create_aquabrick1_676(1280, 1672), 3);
    add_background_object(create_aquabrick1_676(1344, 1336), 3);
    add_background_object(create_aquabrick1_676(1280, 1336), 3);
    add_background_object(create_aquabrick3_691(1280, 1704), 3);
    add_background_object(create_aquabrick3_691(1280, 1272), 3);
    add_background_object(create_aquabrick11_688(1216, 1672), 3);
    add_background_object(create_aquabrick2_706(1152, 1656), 3);
    add_background_object(create_aquabrick2_706(1216, 1656), 3);
    add_background_object(create_aquabrick1_676(1152, 1672), 3);
    add_background_object(create_aquabrick1_676(1216, 1336), 3);
    add_background_object(create_aquabrick1_676(1152, 1336), 3);
    add_background_object(create_aquabrick3_691(1152, 1704), 3);
    add_background_object(create_aquabrick3_691(1152, 1272), 3);
    add_background_object(create_aquabrick11_688(1088, 1672), 3);
    add_background_object(create_aquabrick2_706(1024, 1656), 3);
    add_background_object(create_aquabrick2_706(1088, 1656), 3);
    add_background_object(create_aquabrick1_676(1024, 1672), 3);
    add_background_object(create_aquabrick1_676(1088, 1336), 3);
    add_background_object(create_aquabrick1_676(1024, 1336), 3);
    add_background_object(create_aquabrick3_691(1024, 1704), 3);
    add_background_object(create_aquabrick3_691(1024, 1272), 3);
    add_background_object(create_shuigangpillar1_4082(1248, 1560), 3);
    add_background_object(create_shuigangpillar1_4082(1056, 1560), 3);
    add_background_object(create_aquabrick1_676(1024, 1768), 3);
    add_background_object(create_aquabrick1_676(1088, 1768), 3);
    add_background_object(create_aquabrick1_676(1152, 1768), 3);
    add_background_object(create_aquabrick1_676(1216, 1768), 3);
    add_background_object(create_aquabrick1_676(1280, 1768), 3);
    add_background_object(create_aquabrick1_676(1344, 1768), 3);
    add_background_object(create_aquabrick1_676(1408, 1768), 3);
    add_background_object(create_aquabrick1_676(1472, 1768), 3);
    add_background_object(create_aquabrick1_676(1536, 1768), 3);
    add_background_object(create_shuigangpillar3_4084(672, 1544), 3);
    add_background_object(create_shuigangpillar3_4084(1056, 1544), 3);
    add_background_object(create_shuigangpillar3_4084(1248, 1544), 3);
    add_background_object(create_shuigangpillar3_4084(1632, 1544), 3);
    add_background_object(create_shuigangpillar3_4084(1824, 1544), 3);
    add_background_object(create_shuigangpillar3_4084(2208, 1544), 3);
    add_background_object(create_shuigangpillar3_4084(2400, 1544), 3);
    add_background_object(create_shuigangpillar3_4084(2784, 1544), 3);
    add_background_object(create_shuigangpillar3_4084(2976, 1544), 3);
    add_background_object(create_shuigangpillar3_4084(3360, 1544), 3);
    add_background_object(create_shuigangpillar3_4084(3552, 1544), 3);
    add_background_object(create_shuigangpillar3_4084(3936, 1544), 3);
    add_background_object(create_shuigangpillar3_4084(4128, 1544), 3);
    add_background_object(create_shuigangpillar3_4084(4512, 1544), 3);
    add_background_object(create_shuigangpillar3_4084(4704, 1544), 3);
    add_background_object(create_aquabrick11_688(6464, 1672), 3);
    add_background_object(create_aquabrick11_688(6592, 1672), 3);
    add_background_object(create_aquabrick11_688(6720, 1672), 3);
    add_background_object(create_aquabrick2_706(6400, 1656), 3);
    add_background_object(create_aquabrick2_706(6464, 1656), 3);
    add_background_object(create_aquabrick2_706(6528, 1656), 3);
    add_background_object(create_aquabrick2_706(6592, 1656), 3);
    add_background_object(create_aquabrick2_706(6656, 1656), 3);
    add_background_object(create_aquabrick2_706(6720, 1656), 3);
    add_background_object(create_aquabrick1_676(6400, 1672), 3);
    add_background_object(create_aquabrick1_676(6528, 1672), 3);
    add_background_object(create_aquabrick1_676(6656, 1672), 3);
    add_background_object(create_aquabrick3_691(6400, 1704), 3);
    add_background_object(create_aquabrick3_691(6528, 1704), 3);
    add_background_object(create_aquabrick3_691(6656, 1704), 3);
    add_background_object(create_aquabrick1_676(6400, 1768), 3);
    add_background_object(create_aquabrick1_676(6464, 1768), 3);
    add_background_object(create_aquabrick1_676(6528, 1768), 3);
    add_background_object(create_aquabrick1_676(6592, 1768), 3);
    add_background_object(create_aquabrick1_676(6656, 1768), 3);
    add_background_object(create_aquabrick1_676(6720, 1768), 3);
    add_background_object(create_aquabrick1_676(6464, 1336), 3);
    add_background_object(create_aquabrick1_676(6400, 1336), 3);
    add_background_object(create_aquabrick1_676(6592, 1336), 3);
    add_background_object(create_aquabrick1_676(6528, 1336), 3);
    add_background_object(create_aquabrick1_676(6720, 1336), 3);
    add_background_object(create_aquabrick1_676(6656, 1336), 3);
    add_background_object(create_aquabrick3_691(6400, 1272), 3);
    add_background_object(create_aquabrick3_691(6528, 1272), 3);
    add_background_object(create_aquabrick3_691(6656, 1272), 3);
    add_background_object(create_aquabrick11_688(6336, 1672), 3);
    add_background_object(create_aquabrick2_706(6272, 1656), 3);
    add_background_object(create_aquabrick2_706(6336, 1656), 3);
    add_background_object(create_aquabrick1_676(6272, 1672), 3);
    add_background_object(create_aquabrick3_691(6272, 1704), 3);
    add_background_object(create_aquabrick1_676(6272, 1768), 3);
    add_background_object(create_aquabrick1_676(6336, 1768), 3);
    add_background_object(create_aquabrick1_676(6336, 1336), 3);
    add_background_object(create_aquabrick1_676(6272, 1336), 3);
    add_background_object(create_aquabrick3_691(6272, 1272), 3);
    add_background_object(create_shuigangpillar1_4082(6624, 1560), 3);
    add_background_object(create_shuigangpillar1_4082(6432, 1560), 3);
    add_background_object(create_shuigangpillar2_4083(6624, 1464), 3);
    add_background_object(create_shuigangpillar2_4083(6624, 1368), 3);
    add_background_object(create_shuigangpillar2_4083(6432, 1464), 3);
    add_background_object(create_shuigangpillar2_4083(6432, 1368), 3);
    add_background_object(create_shuigangpillar1_4082(6816, 1560), 3);
    add_background_object(create_shuigangpillar2_4083(6816, 1464), 3);
    add_background_object(create_shuigangpillar2_4083(6816, 1368), 3);
    add_background_object(create_stuckarrow_4063(376, 2552), 3);
    add_background_object(create_shangtuwindow_4064(128, 2488), 3);
    add_background_object(create_shangtuwindow_4064(0, 2488), 3);
    add_background_object(create_shangtuwindow_4064(848, 2488), 3);
    add_background_object(create_shangtuwindow_4064(976, 2488), 3);
    add_background_object(create_shangtubackwall_4062(128, 2360), 3);
    add_background_object(create_shangtubackwall_4062(784, 2488), 3);
    add_background_object(create_shangtubackwall_4062(784, 2360), 3);
    add_background_object(create_shangtubackwall_4062(192, 2488), 3);
    add_background_object(create_shangtubackwall_4062(192, 2360), 3);
    add_background_object(create_shangtubackwall_4062(64, 2488), 3);
    add_background_object(create_shangtubackwall_4062(64, 2360), 3);
    add_background_object(create_shangtubackwall_4062(0, 2360), 3);
    add_background_object(create_shangtubackwall_4062(848, 2360), 3);
    add_background_object(create_shangtubackwall_4062(912, 2488), 3);
    add_background_object(create_shangtubackwall_4062(912, 2360), 3);
    add_background_object(create_shangtubackwall_4062(976, 2360), 3);
    add_background_object(create_backdrop9_4065(608, 2408), 3);
    add_background_object(create_backdrop9_4065(400, 2504), 3);
    add_background_object(create_backdrop9_4065(400, 2400), 3);
    add_background_object(create_backdrop9_4065(504, 2504), 3);
    add_background_object(create_backdrop9_4065(504, 2400), 3);
    add_background_object(create_backdrop9_4065(608, 2504), 3);
    add_background_object(create_backdrop8_4066(688, 2408), 3);
    add_background_object(create_backdrop8_4066(320, 2504), 3);
    add_background_object(create_backdrop8_4066(320, 2408), 3);
    add_background_object(create_backdrop8_4066(688, 2504), 3);
    add_background_object(create_backdrop7_4067(744, 2408), 3);
    add_background_object(create_backdrop7_4067(264, 2504), 3);
    add_background_object(create_backdrop7_4067(264, 2408), 3);
    add_background_object(create_backdrop7_4067(744, 2504), 3);
    add_background_object(create_shangtuarch3_4068(256, 2600), 3);
    add_background_object(create_shangtuarch4_4069(520, 2600), 3);
    add_background_object(create_shangtufloor1_4070(0, 2616), 3);
    add_background_object(create_shangtufloor1_4070(128, 2616), 3);
    add_background_object(create_shangtufloor1_4070(256, 2616), 3);
    add_background_object(create_shangtufloor1_4070(384, 2616), 3);
    add_background_object(create_shangtufloor1_4070(512, 2616), 3);
    add_background_object(create_shangtufloor1_4070(640, 2616), 3);
    add_background_object(create_shangtufloor1_4070(768, 2616), 3);
    add_background_object(create_shangtufloor1_4070(896, 2616), 3);
    add_background_object(create_shangtufloor2_4071(0, 2680), 3);
    add_background_object(create_shangtufloor2_4071(128, 2680), 3);
    add_background_object(create_shangtufloor2_4071(256, 2680), 3);
    add_background_object(create_shangtufloor2_4071(384, 2680), 3);
    add_background_object(create_shangtufloor2_4071(512, 2680), 3);
    add_background_object(create_shangtufloor2_4071(640, 2680), 3);
    add_background_object(create_shangtufloor2_4071(768, 2680), 3);
    add_background_object(create_shangtufloor2_4071(896, 2680), 3);
    add_background_object(create_shangtuflag1_4072(400, 2432), 3);
    add_background_object(create_shangtuflag1_4072(504, 2432), 3);
    add_background_object(create_shangtuflag1_4072(600, 2432), 3);
    add_background_object(create_shangtuflag2_4073(328, 2424), 3);
    add_background_object(create_shangtuflag2_4073(680, 2424), 3);
    add_background_object(create_shangtuflag3_4074(280, 2416), 3);
    add_background_object(create_shangtuflag3_4074(736, 2416), 3);
    add_background_object(create_shangtuarch2_4075(520, 2384), 3);
    add_background_object(create_shangtuarch1_4076(256, 2384), 3);
    add_background_object(create_shangtucolumn1_4077(192, 2520), 3);
    add_background_object(create_shangtucolumn1_4077(64, 2520), 3);
    add_background_object(create_shangtucolumn1_4077(784, 2520), 3);
    add_background_object(create_shangtucolumn1_4077(912, 2520), 3);
    add_background_object(create_shangtucolumn2_4078(192, 2424), 3);
    add_background_object(create_shangtucolumn2_4078(192, 2328), 3);
    add_background_object(create_shangtucolumn2_4078(64, 2424), 3);
    add_background_object(create_shangtucolumn2_4078(64, 2328), 3);
    add_background_object(create_shangtucolumn2_4078(784, 2424), 3);
    add_background_object(create_shangtucolumn2_4078(784, 2328), 3);
    add_background_object(create_shangtucolumn2_4078(912, 2424), 3);
    add_background_object(create_shangtucolumn2_4078(912, 2328), 3);
    add_background_object(create_ship28_2075(4656, 2360), 3);
    add_background_object(create_ship28_2075(4456, 2440), 3);
    add_background_object(create_ship28_2075(4496, 2424), 3);
    add_background_object(create_ship28_2075(4536, 2408), 3);
    add_background_object(create_ship28_2075(4576, 2392), 3);
    add_background_object(create_ship28_2075(4616, 2376), 3);
    add_background_object(create_shipbottomsail_2074(3904, 2480), 3);
    add_background_object(create_shipbottomsail_2074(4200, 2440), 3);
    add_background_object(create_shipbottomsail_2074(4280, 2416), 3);
    add_background_object(create_shipbottomsail_2074(3968, 2456), 3);
    add_background_object(create_shipbottomsail_2074(3712, 2456), 3);
    add_background_object(create_shipbottomsail_2074(4024, 2416), 3);
    add_background_object(create_shipbottomsail_2074(3968, 2416), 3);
    add_background_object(create_shipbottomsail_2074(3712, 2416), 3);
    add_background_object(create_ship26_2082(3776, 2544), 3);
    add_background_object(create_ship26_2082(3840, 2536), 3);
    add_background_object(create_ship26_2082(3904, 2528), 3);
    add_background_object(create_ship26_2082(3968, 2520), 3);
    add_background_object(create_ship26_2082(4032, 2512), 3);
    add_background_object(create_ship26_2082(4096, 2504), 3);
    add_background_object(create_ship26_2082(4160, 2496), 3);
    add_background_object(create_ship26_2082(3712, 2552), 3);
    add_background_object(create_ship27_2083(4224, 2480), 3);
    add_background_object(create_ship29_2084(4680, 2376), 3);
    add_background_object(create_shipthrusterfront_2085(3968, 2488), 3);
    add_background_object(create_shipthrusterend_2086(3584, 2488), 3);
    add_background_object(create_shipthrustermid_2088(3680, 2488), 3);
    add_background_object(create_shipbottomsailshadow_2089(3912, 2376), 3);
    add_background_object(create_shipthrustermid_2088(3680, 2320), 3);
    add_background_object(create_shipthrusterend_2086(3584, 2320), 3);
    add_background_object(create_shipthrusterfront_2085(3968, 2320), 3);
    add_background_object(create_mallfloor1_1891(0, 3544), 3);
    add_background_object(create_mallfloor1_1891(128, 3544), 3);
    add_background_object(create_redcarpet_1919(0, 3544), 3);
    add_background_object(create_redcarpet_1919(128, 3544), 3);
    add_background_object(create_mallfloor1_1891(0, 3192), 3);
    add_background_object(create_mallfloor1_1891(128, 3192), 3);
    add_background_object(create_mallfloor1_1891(256, 3544), 3);
    add_background_object(create_mallfloor1_1891(384, 3544), 3);
    add_background_object(create_redcarpet_1919(256, 3544), 3);
    add_background_object(create_redcarpet_1919(384, 3544), 3);
    add_background_object(create_mallfloor1_1891(256, 3192), 3);
    add_background_object(create_mallfloor1_1891(384, 3192), 3);
    add_background_object(create_mallfloor1_1891(512, 3544), 3);
    add_background_object(create_mallfloor1_1891(640, 3544), 3);
    add_background_object(create_redcarpet_1919(512, 3544), 3);
    add_background_object(create_redcarpet_1919(640, 3544), 3);
    add_background_object(create_mallfloor1_1891(512, 3192), 3);
    add_background_object(create_mallfloor1_1891(640, 3192), 3);
    add_background_object(create_mallfloor1_1891(768, 3544), 3);
    add_background_object(create_mallfloor1_1891(896, 3544), 3);
    add_background_object(create_redcarpet_1919(768, 3544), 3);
    add_background_object(create_redcarpet_1919(896, 3544), 3);
    add_background_object(create_mallfloor1_1891(768, 3192), 3);
    add_background_object(create_mallfloor1_1891(896, 3192), 3);
    add_background_object(create_backdrop24_4086(336, 3488), 3);
    add_background_object(create_backdrop24_4086(456, 3488), 3);
    add_background_object(create_backdrop24_4086(416, 3488), 3);
    add_background_object(create_backdrop24_4086(376, 3488), 3);
    add_background_object(create_backdrop24_4086(576, 3488), 3);
    add_background_object(create_backdrop24_4086(536, 3488), 3);
    add_background_object(create_backdrop24_4086(496, 3488), 3);
    add_background_object(create_backdrop24_4086(696, 3488), 3);
    add_background_object(create_backdrop24_4086(656, 3488), 3);
    add_background_object(create_backdrop24_4086(616, 3488), 3);
    add_background_object(create_backdrop25_4087(280, 3488), 3);
    add_background_object(create_mallscalecolumn1_1888(88, 3464), 3);
    add_background_object(create_mallscalecolumn1_1888(88, 3496), 3);
    add_background_object(create_mallscalecolumn2_1889(88, 3528), 3);
    add_background_object(create_mallscalecolumn1_1888(88, 3400), 3);
    add_background_object(create_mallscalecolumn1_1888(88, 3432), 3);
    add_background_object(create_mallscalecolumn1_1888(88, 3336), 3);
    add_background_object(create_mallscalecolumn1_1888(88, 3368), 3);
    add_background_object(create_mallscalecolumn1_1888(88, 3304), 3);
    add_background_object(create_mallscalecolumn2_1889(88, 3288), 3);
    add_background_object(create_mallscalecolumn1_1888(792, 3464), 3);
    add_background_object(create_mallscalecolumn2_1889(792, 3528), 3);
    add_background_object(create_mallscalecolumn1_1888(792, 3400), 3);
    add_background_object(create_mallscalecolumn1_1888(792, 3432), 3);
    add_background_object(create_mallscalecolumn1_1888(792, 3336), 3);
    add_background_object(create_mallscalecolumn1_1888(792, 3368), 3);
    add_background_object(create_mallscalecolumn1_1888(792, 3304), 3);
    add_background_object(create_mallscalecolumn2_1889(792, 3288), 3);
    add_background_object(create_mallscalecolumn1_1888(792, 3496), 3);
    add_background_object(create_mallfloor1_1891(1024, 3544), 3);
    add_background_object(create_mallfloor1_1891(1152, 3544), 3);
    add_background_object(create_redcarpet_1919(1024, 3544), 3);
    add_background_object(create_redcarpet_1919(1152, 3544), 3);
    add_background_object(create_mallfloor1_1891(1024, 3192), 3);
    add_background_object(create_mallfloor1_1891(1152, 3192), 3);
    add_background_object(create_mallscalecolumn1_1888(1048, 3464), 3);
    add_background_object(create_mallscalecolumn2_1889(1048, 3528), 3);
    add_background_object(create_mallscalecolumn1_1888(1048, 3400), 3);
    add_background_object(create_mallscalecolumn1_1888(1048, 3432), 3);
    add_background_object(create_mallscalecolumn1_1888(1048, 3336), 3);
    add_background_object(create_mallscalecolumn1_1888(1048, 3368), 3);
    add_background_object(create_mallscalecolumn1_1888(1048, 3304), 3);
    add_background_object(create_mallscalecolumn2_1889(1048, 3288), 3);
    add_background_object(create_mallscalecolumn1_1888(1048, 3496), 3);
    add_background_object(create_mallfloor1_1891(1280, 3544), 3);
    add_background_object(create_mallfloor1_1891(1408, 3544), 3);
    add_background_object(create_redcarpet_1919(1280, 3544), 3);
    add_background_object(create_redcarpet_1919(1408, 3544), 3);
    add_background_object(create_mallfloor1_1891(1280, 3192), 3);
    add_background_object(create_mallfloor1_1891(1408, 3192), 3);
    add_background_object(create_mallscalecolumn1_1888(1304, 3464), 3);
    add_background_object(create_mallscalecolumn2_1889(1304, 3528), 3);
    add_background_object(create_mallscalecolumn1_1888(1304, 3400), 3);
    add_background_object(create_mallscalecolumn1_1888(1304, 3432), 3);
    add_background_object(create_mallscalecolumn1_1888(1304, 3336), 3);
    add_background_object(create_mallscalecolumn1_1888(1304, 3368), 3);
    add_background_object(create_mallscalecolumn1_1888(1304, 3304), 3);
    add_background_object(create_mallscalecolumn2_1889(1304, 3288), 3);
    add_background_object(create_mallscalecolumn1_1888(1304, 3496), 3);
    add_background_object(create_mallfloor1_1891(1536, 3544), 3);
    add_background_object(create_mallfloor1_1891(1536, 3192), 3);
    add_background_object(create_mallscalecolumn1_1888(1560, 3464), 3);
    add_background_object(create_mallscalecolumn2_1889(1560, 3528), 3);
    add_background_object(create_mallscalecolumn1_1888(1560, 3400), 3);
    add_background_object(create_mallscalecolumn1_1888(1560, 3432), 3);
    add_background_object(create_mallscalecolumn1_1888(1560, 3336), 3);
    add_background_object(create_mallscalecolumn1_1888(1560, 3368), 3);
    add_background_object(create_mallscalecolumn1_1888(1560, 3304), 3);
    add_background_object(create_mallscalecolumn2_1889(1560, 3288), 3);
    add_background_object(create_mallscalecolumn1_1888(1560, 3496), 3);
    add_background_object(create_redcarpet_1919(1536, 3544), 3);
    add_background_object(create_mallfloor1_1891(1664, 3544), 3);
    add_background_object(create_redcarpet_1919(1664, 3544), 3);
    add_background_object(create_mallfloor1_1891(1664, 3192), 3);
    add_background_object(create_mallfloor1_1891(1792, 3544), 3);
    add_background_object(create_mallfloor1_1891(1792, 3192), 3);
    add_background_object(create_mallscalecolumn1_1888(1816, 3464), 3);
    add_background_object(create_mallscalecolumn2_1889(1816, 3528), 3);
    add_background_object(create_mallscalecolumn1_1888(1816, 3400), 3);
    add_background_object(create_mallscalecolumn1_1888(1816, 3432), 3);
    add_background_object(create_mallscalecolumn1_1888(1816, 3336), 3);
    add_background_object(create_mallscalecolumn1_1888(1816, 3368), 3);
    add_background_object(create_mallscalecolumn1_1888(1816, 3304), 3);
    add_background_object(create_mallscalecolumn2_1889(1816, 3288), 3);
    add_background_object(create_mallscalecolumn1_1888(1816, 3496), 3);
    add_background_object(create_redcarpet_1919(1792, 3544), 3);
    add_background_object(create_mallfloor1_1891(1920, 3544), 3);
    add_background_object(create_redcarpet_1919(1920, 3544), 3);
    add_background_object(create_mallfloor1_1891(1920, 3192), 3);
    add_background_object(create_mallfloor1_1891(2048, 3544), 3);
    add_background_object(create_mallfloor1_1891(2048, 3192), 3);
    add_background_object(create_mallscalecolumn1_1888(2072, 3464), 3);
    add_background_object(create_mallscalecolumn2_1889(2072, 3528), 3);
    add_background_object(create_mallscalecolumn1_1888(2072, 3400), 3);
    add_background_object(create_mallscalecolumn1_1888(2072, 3432), 3);
    add_background_object(create_mallscalecolumn1_1888(2072, 3336), 3);
    add_background_object(create_mallscalecolumn1_1888(2072, 3368), 3);
    add_background_object(create_mallscalecolumn1_1888(2072, 3304), 3);
    add_background_object(create_mallscalecolumn2_1889(2072, 3288), 3);
    add_background_object(create_mallscalecolumn1_1888(2072, 3496), 3);
    add_background_object(create_redcarpet_1919(2048, 3544), 3);
    add_background_object(create_mallfloor1_1891(2176, 3544), 3);
    add_background_object(create_redcarpet_1919(2176, 3544), 3);
    add_background_object(create_mallfloor1_1891(2176, 3192), 3);
    add_background_object(create_mallfloor1_1891(2304, 3544), 3);
    add_background_object(create_mallfloor1_1891(2304, 3192), 3);
    add_background_object(create_mallscalecolumn1_1888(2328, 3464), 3);
    add_background_object(create_mallscalecolumn2_1889(2328, 3528), 3);
    add_background_object(create_mallscalecolumn1_1888(2328, 3400), 3);
    add_background_object(create_mallscalecolumn1_1888(2328, 3432), 3);
    add_background_object(create_mallscalecolumn1_1888(2328, 3336), 3);
    add_background_object(create_mallscalecolumn1_1888(2328, 3368), 3);
    add_background_object(create_mallscalecolumn1_1888(2328, 3304), 3);
    add_background_object(create_mallscalecolumn2_1889(2328, 3288), 3);
    add_background_object(create_mallscalecolumn1_1888(2328, 3496), 3);
    add_background_object(create_redcarpet_1919(2304, 3544), 3);
    add_background_object(create_zaoshipindoor2_4088(0, 4016), 3);
    add_background_object(create_zaoshipindoor3_4089(0, 3952), 3);
    add_background_object(create_zaoshipindoor2_4088(128, 4016), 3);
    add_background_object(create_zaoshipindoor2_4088(256, 4016), 3);
    add_background_object(create_zaoshipindoor2_4088(384, 4016), 3);
    add_background_object(create_zaoshipindoor2_4088(512, 4016), 3);
    add_background_object(create_aquabrick11_688(192, 4392), 3);
    add_background_object(create_aquabrick2_706(104, 4376), 3);
    add_background_object(create_aquabrick2_706(168, 4376), 3);
    add_background_object(create_aquabrick1_676(128, 4392), 3);
    add_background_object(create_aquabrick1_676(192, 4232), 3);
    add_background_object(create_aquabrick1_676(128, 4232), 3);
    add_background_object(create_aquabrick3_691(128, 4424), 3);
    add_background_object(create_aquabrick3_691(128, 4168), 3);
    add_background_object(create_aquabrick11_688(64, 4392), 3);
    add_background_object(create_aquabrick2_706(-24, 4376), 3);
    add_background_object(create_aquabrick2_706(40, 4376), 3);
    add_background_object(create_aquabrick1_676(0, 4392), 3);
    add_background_object(create_aquabrick1_676(64, 4232), 3);
    add_background_object(create_aquabrick1_676(0, 4232), 3);
    add_background_object(create_aquabrick3_691(0, 4424), 3);
    add_background_object(create_aquabrick3_691(0, 4168), 3);
    add_background_object(create_aquabrick11_688(448, 4392), 3);
    add_background_object(create_aquabrick2_706(360, 4376), 3);
    add_background_object(create_aquabrick1_676(384, 4392), 3);
    add_background_object(create_aquabrick1_676(448, 4232), 3);
    add_background_object(create_aquabrick1_676(384, 4232), 3);
    add_background_object(create_aquabrick3_691(384, 4424), 3);
    add_background_object(create_aquabrick3_691(384, 4168), 3);
    add_background_object(create_aquabrick11_688(320, 4392), 3);
    add_background_object(create_aquabrick2_706(232, 4376), 3);
    add_background_object(create_aquabrick2_706(296, 4376), 3);
    add_background_object(create_aquabrick1_676(256, 4392), 3);
    add_background_object(create_aquabrick1_676(320, 4232), 3);
    add_background_object(create_aquabrick1_676(256, 4232), 3);
    add_background_object(create_aquabrick3_691(256, 4424), 3);
    add_background_object(create_aquabrick3_691(256, 4168), 3);
    add_background_object(create_aquabrick3_691(512, 4424), 3);
    add_background_object(create_aquabrick3_691(512, 4168), 3);
    add_background_object(create_aquabrick21_683(512, 4232), 3);
    add_background_object(create_aquabrick21_683(512, 4296), 3);
    add_background_object(create_aquabrick14_693(504, 4328), 3);
    add_background_object(create_aquabrick14_693(504, 4264), 3);
    add_background_object(create_aquadirt_689(440, 4376), 3);
    add_background_object(create_aquadirt2_692(440, 4368), 3);
    add_background_object(create_aquabrick6_709(424, 4376), 3);
    add_background_object(create_jcdirt6_2398(896, 4672), 3);
    add_background_object(create_jcdirt6_2398(1024, 4672), 3);
    add_background_object(create_tentfloorfaderight3_4090(896, 4656), 3);
    add_background_object(create_tentfloorfaderight3_4090(960, 4656), 3);
    add_background_object(create_tentfloorfaderight3_4090(1024, 4656), 3);
    add_background_object(create_tentfloorfaderight3_4090(1088, 4656), 3);
    add_background_object(create_tbsolidblack_2688(896, 4528), 3);
    add_background_object(create_tbsolidblack_2688(1024, 4528), 3);
    add_background_object(create_tbsolidblack_2688(1152, 4528), 3);
    add_background_object(create_tbsolidblack_2688(1280, 4616), 3);
    add_background_object(create_tbsolidblack_2688(896, 4488), 3);
    add_background_object(create_tbsolidblack_2688(1024, 4488), 3);
    add_background_object(create_tbsolidblack_2688(1152, 4488), 3);
    add_background_object(create_tbsolidblack_2688(1280, 4488), 3);
    add_background_object(create_tbsolidblack_2688(1280, 4744), 3);
    add_background_object(create_tbsolidblack_2688(1280, 4872), 3);
    add_background_object(create_tbsolidblack_2688(1152, 4864), 3);
    add_background_object(create_tbsolidblack_2688(1152, 4656), 3);
    add_background_object(create_tbsolidblack_2688(1152, 4784), 3);
    add_background_object(create_tbsolidblack_2688(1024, 4816), 3);
    add_background_object(create_tbsolidblack_2688(896, 4816), 3);
    add_background_object(create_tbsolidblack_2688(768, 4816), 3);
    add_background_object(create_tbsolidblack_2688(640, 4816), 3);
    add_background_object(create_tbsolidblack_2688(512, 4816), 3);
    add_background_object(create_tbsolidblack_2688(384, 4816), 3);
    add_background_object(create_tbsolidblack_2688(256, 4816), 3);
    add_background_object(create_aquabrick3_691(640, 4168), 3);
    add_background_object(create_aquabrick3_691(640, 4232), 3);
    add_background_object(create_aquabrick3_691(640, 4296), 3);
    add_background_object(create_aquabrick3_691(640, 4360), 3);
    add_background_object(create_aquabrick3_691(640, 4424), 3);
    add_background_object(create_aquabrick3_691(768, 4168), 3);
    add_background_object(create_aquabrick3_691(768, 4232), 3);
    add_background_object(create_aquabrick3_691(768, 4296), 3);
    add_background_object(create_aquabrick3_691(768, 4360), 3);
    add_background_object(create_aquabrick3_691(768, 4424), 3);
    add_background_object(create_tbsolidblack_2688(1408, 4816), 3);
    add_background_object(create_jcdirt6_2398(1408, 4832), 3);
    add_background_object(create_jcflatground1_2375(1408, 4816), 3);
    add_background_object(create_tentfloorfaderight2_4091(1408, 4816), 3);
    add_background_object(create_tentfloorfaderight2_4091(1472, 4816), 3);
    add_background_object(create_tbsolidblack_2688(1408, 4864), 3);
    add_background_object(create_tbsolidblack_2688(1536, 4816), 3);
    add_background_object(create_jcdirt6_2398(1536, 4832), 3);
    add_background_object(create_jcflatground1_2375(1536, 4816), 3);
    add_background_object(create_tentfloorfaderight2_4091(1536, 4816), 3);
    add_background_object(create_tentfloorfaderight2_4091(1600, 4816), 3);
    add_background_object(create_tbsolidblack_2688(1536, 4864), 3);
    add_background_object(create_tbsolidblack_2688(1664, 4816), 3);
    add_background_object(create_jcdirt6_2398(1664, 4832), 3);
    add_background_object(create_jcflatground1_2375(1664, 4816), 3);
    add_background_object(create_tentfloorfaderight2_4091(1664, 4816), 3);
    add_background_object(create_tentfloorfaderight2_4091(1728, 4816), 3);
    add_background_object(create_tbsolidblack_2688(1664, 4864), 3);
    add_background_object(create_tbsolidblack_2688(1792, 4816), 3);
    add_background_object(create_jcdirt6_2398(1792, 4832), 3);
    add_background_object(create_jcflatground1_2375(1792, 4816), 3);
    add_background_object(create_tentfloorfaderight2_4091(1792, 4816), 3);
    add_background_object(create_tentfloorfaderight2_4091(1856, 4816), 3);
    add_background_object(create_tbsolidblack_2688(1792, 4864), 3);
    add_background_object(create_tbsolidblack_2688(1920, 4816), 3);
    add_background_object(create_jcdirt6_2398(1920, 4832), 3);
    add_background_object(create_jcflatground1_2375(1920, 4816), 3);
    add_background_object(create_tentfloorfaderight2_4091(1920, 4816), 3);
    add_background_object(create_tentfloorfaderight2_4091(1984, 4816), 3);
    add_background_object(create_tbsolidblack_2688(1920, 4864), 3);
    add_background_object(create_tbsolidblack_2688(2048, 4816), 3);
    add_background_object(create_jcdirt6_2398(2048, 4832), 3);
    add_background_object(create_jcflatground1_2375(2048, 4816), 3);
    add_background_object(create_tentfloorfaderight2_4091(2048, 4816), 3);
    add_background_object(create_tentfloorfaderight2_4091(2112, 4816), 3);
    add_background_object(create_tbsolidblack_2688(2048, 4864), 3);
    add_background_object(create_tbsolidblack_2688(2176, 4816), 3);
    add_background_object(create_jcdirt6_2398(2176, 4832), 3);
    add_background_object(create_jcflatground1_2375(2176, 4816), 3);
    add_background_object(create_tentfloorfaderight2_4091(2176, 4816), 3);
    add_background_object(create_tentfloorfaderight2_4091(2240, 4816), 3);
    add_background_object(create_tbsolidblack_2688(2176, 4864), 3);
    add_background_object(create_tbsolidblack_2688(-128, 4816), 3);
    add_background_object(create_tbsolidblack_2688(128, 4816), 3);
    add_background_object(create_tbsolidblack_2688(0, 4816), 3);
    add_background_object(create_jcdirt6_2398(0, 5392), 3);
    add_background_object(create_jcdirt6_2398(128, 5392), 3);
    add_background_object(create_jcdirt6_2398(256, 5392), 3);
    add_background_object(create_jcdirt6_2398(384, 5392), 3);
    add_background_object(create_jcflatground1_2375(384, 5376), 3);
    add_background_object(create_jcflatground1_2375(256, 5376), 3);
    add_background_object(create_jcflatground1_2375(128, 5376), 3);
    add_background_object(create_jcflatground1_2375(0, 5376), 3);
    add_background_object(create_jcdirt6_2398(512, 5392), 3);
    add_background_object(create_jcdirt6_2398(640, 5392), 3);
    add_background_object(create_jcflatground1_2375(640, 5376), 3);
    add_background_object(create_jcflatground1_2375(512, 5376), 3);
    add_background_object(create_jcdirt6_2398(768, 5392), 3);
    add_background_object(create_jcdirt6_2398(896, 5392), 3);
    add_background_object(create_jcflatground1_2375(896, 5376), 3);
    add_background_object(create_jcflatground1_2375(768, 5376), 3);
    add_background_object(create_thdirtypipe_3084(128, 5920), 3);
    add_background_object(create_thdirtypipe_3084(128, 5856), 3);
    add_background_object(create_thdirtypipe_3084(128, 5792), 3);
    add_background_object(create_thstone11_3085(-312, 5920), 3);
    add_background_object(create_thstone8_3098(-312, 5920), 3);
    add_background_object(create_thstone4_3086(-312, 5952), 3);
    add_background_object(create_thstone6_3095(-312, 6016), 3);
    add_background_object(create_thstone2_3092(-280, 5920), 3);
    add_background_object(create_thstone1_3091(-280, 6016), 3);
    add_background_object(create_thstone7_3097(-216, 5920), 3);
    add_background_object(create_thstone5_3096(-216, 6016), 3);
    add_background_object(create_thstone3_3090(-216, 5952), 3);
    add_background_object(create_thstone3_3090(32, 5632), 3);
    add_background_object(create_thstone3_3090(32, 5696), 3);
    add_background_object(create_thstone3_3090(32, 5760), 3);
    add_background_object(create_thstone3_3090(32, 5824), 3);
    add_background_object(create_thstone3_3090(32, 5888), 3);
    add_background_object(create_thstone4_3086(128, 5632), 3);
    add_background_object(create_thstone11_3085(-96, 5632), 3);
    add_background_object(create_thstone11_3085(-96, 5760), 3);
    add_background_object(create_thstone11_3085(-96, 5888), 3);
    add_background_object(create_thstone4_3086(128, 5696), 3);
    add_background_object(create_thstone11_3085(160, 5632), 3);
    add_background_object(create_thstone11_3085(288, 5632), 3);
    add_background_object(create_thstone6_3095(128, 5760), 3);
    add_background_object(create_thstone1_3091(160, 5760), 3);
    add_background_object(create_thstone1_3091(224, 5760), 3);
    add_background_object(create_thstone1_3091(288, 5760), 3);
    add_background_object(create_thstone8_3098(64, 5984), 3);
    add_background_object(create_thstone2_3092(96, 5984), 3);
    add_background_object(create_thstone2_3092(160, 5984), 3);
    add_background_object(create_thstone2_3092(224, 5984), 3);
    add_background_object(create_thstone3_3090(32, 5952), 3);
    add_background_object(create_thstone4_3086(64, 6016), 3);
    add_background_object(create_thstone11_3085(160, 6016), 3);
    add_background_object(create_thstone3_3090(32, 6016), 3);
    add_background_object(create_thstone4_3086(64, 6080), 3);
    add_background_object(create_thstone11_3085(-96, 5952), 3);
    add_background_object(create_thstone3_3090(32, 6080), 3);
    add_background_object(create_thdirtypipe_3084(288, 5920), 3);
    add_background_object(create_thdirtypipe_3084(288, 5856), 3);
    add_background_object(create_thdirtypipe_3084(288, 5792), 3);
    add_background_object(create_thstone11_3085(-96, 6016), 3);
    add_background_object(create_thstone7_3097(288, 5984), 3);
    add_background_object(create_thstone3_3090(288, 6016), 3);
    add_background_object(create_thstone3_3090(288, 6080), 3);
    add_background_object(create_thstone4_3086(384, 6016), 3);
    add_background_object(create_thstone4_3086(384, 6080), 3);
    add_background_object(create_thstone4_3086(384, 5888), 3);
    add_background_object(create_thstone4_3086(384, 5952), 3);
    add_background_object(create_thstone4_3086(384, 5760), 3);
    add_background_object(create_thstone4_3086(384, 5824), 3);
    add_background_object(create_thstone4_3086(384, 5632), 3);
    add_background_object(create_thstone4_3086(384, 5696), 3);
    add_background_object(create_thstone5_3096(352, 5760), 3);
    add_background_object(create_thstone3_3090(352, 5696), 3);
    add_background_object(create_thstone3_3090(352, 5632), 3);
    add_background_object(create_thstone11_3085(416, 5632), 3);
    add_background_object(create_thstone11_3085(416, 5760), 3);
    add_background_object(create_thstone11_3085(416, 5888), 3);
    add_background_object(create_thstone11_3085(416, 6016), 3);
    add_background_object(create_backofficer_4092(224, 928), 3);
    add_background_object(create_shangtucolumn1_4077(1040, 2520), 3);
    add_background_object(create_shangtucolumn2_4078(1040, 2424), 3);
    add_background_object(create_shangtucolumn2_4078(1040, 2328), 3);
    add_background_object(create_shangtufloor1_4070(1024, 2616), 3);
    add_background_object(create_shangtufloor2_4071(1024, 2680), 3);
    add_background_object(create_shangtufloor1_4070(1152, 2616), 3);
    add_background_object(create_shangtufloor2_4071(1152, 2680), 3);
    add_background_object(create_shangtufloor1_4070(1280, 2616), 3);
    add_background_object(create_shangtufloor2_4071(1280, 2680), 3);
    add_background_object(create_shangtufloor1_4070(1408, 2616), 3);
    add_background_object(create_shangtufloor2_4071(1408, 2680), 3);
    add_background_object(create_shangtubackwall_4062(1104, 2360), 3);
    add_background_object(create_shangtubackwall_4062(1232, 2360), 3);
    add_background_object(create_shangtubackwall_4062(1296, 2360), 3);
    add_background_object(create_shangtubackwall_4062(1296, 2488), 3);
    add_background_object(create_shangtucolumn1_4077(1296, 2520), 3);
    add_background_object(create_shangtucolumn2_4078(1296, 2424), 3);
    add_background_object(create_shangtucolumn2_4078(1296, 2328), 3);
    add_background_object(create_shangtufloor1_4070(1536, 2616), 3);
    add_background_object(create_shangtufloor2_4071(1536, 2680), 3);
    add_background_object(create_shangtubackwall3_4061(1104, 2488), 3);
    add_background_object(create_shangtubackwall3_4061(1288, 2552), 3);
    add_background_object(create_shangtubackwall3_4061(1288, 2488), 3);
    add_background_object(create_shangtubackwall3_4061(1104, 2424), 3);
    add_background_object(create_shangtubackwall3_4061(1104, 2360), 3);
    add_background_object(create_shangtubackwall3_4061(1288, 2424), 3);
    add_background_object(create_shangtubackwall3_4061(1288, 2360), 3);
    add_background_object(create_shangtufloor1_4070(1664, 2616), 3);
    add_background_object(create_shangtufloor2_4071(1664, 2680), 3);
    add_background_object(create_shangtufloor1_4070(1792, 2616), 3);
    add_background_object(create_shangtufloor2_4071(1792, 2680), 3);
    add_background_object(create_shangtubackwall2_4060(1360, 2488), 3);
    add_background_object(create_shangtubackwall3_4061(1360, 2552), 3);
    add_background_object(create_shangtubackwall2_4060(1424, 2488), 3);
    add_background_object(create_shangtubackwall2_4060(1488, 2488), 3);
    add_background_object(create_shangtubackwall_4062(1360, 2360), 3);
    add_background_object(create_shangtubackwall_4062(1488, 2360), 3);
    add_background_object(create_shangtubackwall_4062(1552, 2360), 3);
    add_background_object(create_shangtubackwall_4062(1552, 2488), 3);
    add_background_object(create_shangtucolumn1_4077(1552, 2520), 3);
    add_background_object(create_shangtucolumn2_4078(1552, 2424), 3);
    add_background_object(create_shangtucolumn2_4078(1552, 2328), 3);
    add_background_object(create_shangtubackwall3_4061(1360, 2488), 3);
    add_background_object(create_shangtubackwall3_4061(1544, 2552), 3);
    add_background_object(create_shangtubackwall3_4061(1544, 2488), 3);
    add_background_object(create_shangtubackwall3_4061(1360, 2424), 3);
    add_background_object(create_shangtubackwall3_4061(1360, 2360), 3);
    add_background_object(create_shangtubackwall3_4061(1544, 2424), 3);
    add_background_object(create_shangtubackwall3_4061(1544, 2360), 3);
    add_background_object(create_shangtubackwall2_4060(1616, 2488), 3);
    add_background_object(create_shangtubackwall3_4061(1616, 2552), 3);
    add_background_object(create_shangtubackwall2_4060(1680, 2488), 3);
    add_background_object(create_shangtubackwall2_4060(1744, 2488), 3);
    add_background_object(create_shangtubackwall_4062(1616, 2360), 3);
    add_background_object(create_shangtubackwall_4062(1744, 2360), 3);
    add_background_object(create_shangtubackwall_4062(1808, 2360), 3);
    add_background_object(create_shangtubackwall_4062(1808, 2488), 3);
    add_background_object(create_shangtucolumn1_4077(1808, 2520), 3);
    add_background_object(create_shangtucolumn2_4078(1808, 2424), 3);
    add_background_object(create_shangtucolumn2_4078(1808, 2328), 3);
    add_background_object(create_shangtubackwall3_4061(1616, 2488), 3);
    add_background_object(create_shangtubackwall3_4061(1800, 2552), 3);
    add_background_object(create_shangtubackwall3_4061(1800, 2488), 3);
    add_background_object(create_shangtubackwall3_4061(1616, 2424), 3);
    add_background_object(create_shangtubackwall3_4061(1616, 2360), 3);
    add_background_object(create_shangtubackwall3_4061(1800, 2424), 3);
    add_background_object(create_shangtubackwall3_4061(1800, 2360), 3);
    add_background_object(create_shangtuwindow_4064(1872, 2488), 3);
    add_background_object(create_shangtubackwall_4062(1872, 2360), 3);
    add_background_object(create_shangtufloor1_4070(1920, 2616), 3);
    add_background_object(create_shangtufloor2_4071(1920, 2680), 3);
    add_background_object(create_shangtuwindow_4064(1168, 2360), 3);
    add_background_object(create_shangtuwindow_4064(1680, 2360), 3);
    add_background_object(create_bathfillerback_4093(1216, 2536), 3);
    add_background_object(create_bathfillerback_4093(1728, 2536), 3);
    add_background_object(create_shangtubackwall_4062(1424, 2360), 3);
    add_background_object(create_plstonewall1_2913(0, 6184), 3);
    add_background_object(create_plstonewall12_2914(0, 6312), 3);
    add_background_object(create_plstonewall13_2915(128, 6312), 3);
    add_background_object(create_plstonewall1_2913(256, 6184), 3);
    add_background_object(create_plstonewall12_2914(256, 6312), 3);
    add_background_object(create_plstonewall13_2915(384, 6312), 3);
    add_background_object(create_tentfloorfaderight3_4090(0, 6272), 3);
    add_background_object(create_tentfloorfaderight3_4090(64, 6272), 3);
    add_background_object(create_tentfloorfaderight3_4090(128, 6272), 3);
    add_background_object(create_tentfloorfaderight3_4090(192, 6272), 3);
    add_background_object(create_tbsolidblack_2688(0, 6144), 3);
    add_background_object(create_tbsolidblack_2688(128, 6144), 3);
    add_background_object(create_tentfloorfaderight3_4090(256, 6272), 3);
    add_background_object(create_tentfloorfaderight3_4090(320, 6272), 3);
    add_background_object(create_tentfloorfaderight3_4090(384, 6272), 3);
    add_background_object(create_tentfloorfaderight3_4090(448, 6272), 3);
    add_background_object(create_tbsolidblack_2688(256, 6144), 3);
    add_background_object(create_tbsolidblack_2688(384, 6144), 3);
    add_background_object(create_plstonewall1_2913(512, 6184), 3);
    add_background_object(create_plstonewall12_2914(512, 6312), 3);
    add_background_object(create_plstonewall13_2915(640, 6312), 3);
    add_background_object(create_tentfloorfaderight3_4090(512, 6272), 3);
    add_background_object(create_tentfloorfaderight3_4090(576, 6272), 3);
    add_background_object(create_tentfloorfaderight3_4090(640, 6272), 3);
    add_background_object(create_tentfloorfaderight3_4090(704, 6272), 3);
    add_background_object(create_tbsolidblack_2688(512, 6144), 3);
    add_background_object(create_tbsolidblack_2688(640, 6144), 3);
    add_background_object(create_plstonewall1_2913(0, 6488), 3);
    add_background_object(create_plstonewall1_2913(256, 6488), 3);
    add_background_object(create_tentfloorfaderight2_4091(0, 6488), 3);
    add_background_object(create_tentfloorfaderight2_4091(64, 6488), 3);
    add_background_object(create_tbsolidblack_2688(0, 6536), 3);
    add_background_object(create_tentfloorfaderight2_4091(128, 6488), 3);
    add_background_object(create_tentfloorfaderight2_4091(192, 6488), 3);
    add_background_object(create_tbsolidblack_2688(128, 6536), 3);
    add_background_object(create_tentfloorfaderight2_4091(256, 6488), 3);
    add_background_object(create_tentfloorfaderight2_4091(320, 6488), 3);
    add_background_object(create_tbsolidblack_2688(256, 6536), 3);
    add_background_object(create_tentfloorfaderight2_4091(384, 6488), 3);
    add_background_object(create_tentfloorfaderight2_4091(448, 6488), 3);
    add_background_object(create_tbsolidblack_2688(384, 6536), 3);
    add_background_object(create_plstonewall1_2913(512, 6488), 3);
    add_background_object(create_plstonewall1_2913(768, 6488), 3);
    add_background_object(create_tentfloorfaderight2_4091(512, 6488), 3);
    add_background_object(create_tentfloorfaderight2_4091(576, 6488), 3);
    add_background_object(create_tbsolidblack_2688(512, 6536), 3);
    add_background_object(create_tentfloorfaderight2_4091(640, 6488), 3);
    add_background_object(create_tentfloorfaderight2_4091(704, 6488), 3);
    add_background_object(create_tbsolidblack_2688(640, 6536), 3);
    add_background_object(create_tentfloorfaderight2_4091(768, 6488), 3);
    add_background_object(create_tentfloorfaderight2_4091(832, 6488), 3);
    add_background_object(create_tbsolidblack_2688(768, 6536), 3);
    add_background_object(create_tentfloorfaderight2_4091(896, 6488), 3);
    add_background_object(create_tentfloorfaderight2_4091(960, 6488), 3);
    add_background_object(create_tbsolidblack_2688(896, 6536), 3);
    add_background_object(create_plstonewall1_2913(768, 6184), 3);
    add_background_object(create_plstonewall12_2914(768, 6312), 3);
    add_background_object(create_plstonewall13_2915(896, 6312), 3);
    add_background_object(create_tentfloorfaderight3_4090(768, 6272), 3);
    add_background_object(create_tentfloorfaderight3_4090(832, 6272), 3);
    add_background_object(create_tentfloorfaderight3_4090(896, 6272), 3);
    add_background_object(create_tentfloorfaderight3_4090(960, 6272), 3);
    add_background_object(create_tbsolidblack_2688(768, 6144), 3);
    add_background_object(create_tbsolidblack_2688(896, 6144), 3);
    add_object(create_fragment_4094(332, 588), 3);
    add_object(create_npcfallenherohelmet_4095(1944, 1655), 3);
    add_object(create_brevonmechbackwing_2538(-177, 3021), 3);
    add_object(create_brevonmechbackwing_2538(-137, 3021), 3);
    add_object(create_brevonmechbackwing_2538(-97, 3021), 3);
    add_object(create_brevonmechbackwing_2538(-57, 3021), 3);
    add_object(create_enemyelitemask_2511(-44, 1656), 3);
    add_object(create_npcsgmerc2_4096(-80, 1639), 3);
    add_object(create_npckingaxe_4097(7065, 1618), 3);
    add_object(create_npcstofficer_3941(418, 999), 3);
    add_object(create_brevonartifact_3975(1406, 1594), 3);
    add_object(create_syntaxprojection2_4098(1512, 1528), 3);
    add_object(create_playerstartingpoint_358(93, 581), 3);
    add_object(create_themagister_2115(452, 583), 3);
    add_object(create_gongshield_633(-152, 584), 3);
    add_object(create_npcgong_634(-152, 584), 3);
    add_object(create_npcneera_2464(591, 976), 3);
    add_object(create_npcsgmerc_4021(6256, 1639), 3);
    add_object(create_npcsgmerc_4021(5864, 1639), 3);
    add_object(create_npcsgmerc_4021(5912, 1639), 3);
    add_object(create_npcking_4099(7052, 1623), 3);
    add_object(create_npcsyntaxleftarm_2517(1633, 1898), 3);
    add_object(create_npcsyntaxleftarm_2517(1649, 1898), 3);
    add_object(create_npcsyntaxleftarm_2517(1665, 1898), 3);
    add_object(create_npcsyntaxleftarm_2517(1681, 1898), 3);
    add_object(create_npcsyntaxleftarm_2517(1697, 1898), 3);
    add_object(create_npcsyntaxleftarm_2517(1713, 1898), 3);
    add_object(create_npcsyntaxleftarm_2517(1729, 1898), 3);
    add_object(create_npcsyntaxleftarm_2517(1617, 1898), 3);
    add_object(create_npcsyntaxleftarm_2517(1601, 1898), 3);
    add_object(create_npcsyntaxrightarm_2518(1633, 1906), 3);
    add_object(create_npcsyntaxrightarm_2518(1649, 1906), 3);
    add_object(create_npcsyntaxrightarm_2518(1665, 1906), 3);
    add_object(create_npcsyntaxrightarm_2518(1681, 1906), 3);
    add_object(create_npcsyntaxrightarm_2518(1697, 1906), 3);
    add_object(create_npcsyntaxrightarm_2518(1713, 1906), 3);
    add_object(create_npcsyntaxrightarm_2518(1729, 1906), 3);
    add_object(create_npcsyntaxrightarm_2518(1617, 1906), 3);
    add_object(create_npcsyntaxrightarm_2518(1601, 1906), 3);
    add_object(create_npcsyntax_3976(1568, 1949), 3);
    add_object(create_brevon_3683(1371, 1655), 3);
    add_object(create_enemyelite_2510(-41, 1655), 3);
    add_object(create_syntaxprojection1_4100(1619, 1523), 3);
    add_object(create_syntaxprojection3_4101(1559, 1543), 3);
    add_object(create_syntaxprojection3_4101(1511, 1527), 3);
    add_object(create_npcdail_4017(1444, 1655), 3);
    add_object(create_kingdomstonebig_4102(296, 2960), 3);
    add_object(create_kingdomstonesparkle_4103(-136, 3096), 3);
    add_object(create_kingdomstonesparkle_4103(-120, 3096), 3);
    add_object(create_kingdomstonesparkle_4103(-104, 3096), 3);
    add_object(create_kingdomstonesparkle_4103(-88, 3096), 3);
    add_object(create_kingdomstonesparkle_4103(-136, 3112), 3);
    add_object(create_kingdomstonesparkle_4103(-120, 3112), 3);
    add_object(create_kingdomstonesparkle_4103(-104, 3112), 3);
    add_object(create_kingdomstonesparkle_4103(-88, 3112), 3);
    add_object(create_kingdomstonesparkle_4103(-136, 3128), 3);
    add_object(create_kingdomstonesparkle_4103(-120, 3128), 3);
    add_object(create_kingdomstonesparkle_4103(-104, 3128), 3);
    add_object(create_kingdomstonesparkle_4103(-88, 3128), 3);
    add_object(create_kingdomstonesparkle_4103(-136, 3144), 3);
    add_object(create_kingdomstonesparkle_4103(-120, 3144), 3);
    add_object(create_kingdomstonesparkle_4103(-104, 3144), 3);
    add_object(create_kingdomstonesparkle_4103(-88, 3144), 3);
    add_object(create_brevonmechbackclaw_2515(-121, 2693), 3);
    add_object(create_brevonmechbackarm_2516(-59, 2691), 3);
    add_object(create_brevonmechfrontleg_2539(-283, 2691), 3);
    add_object(create_brevonmechanimations_2551(-48, 2768), 3);
    add_object(create_brevonmechbackshoulder_2514(-124, 1916), 3);
    add_object(create_brevonmechabdomen_2540(-224, 1892), 3);
    add_object(create_brevonmechtorso_2543(-146, 1899), 3);
    add_object(create_brevonmechhead_2544(-130, 1919), 3);
    add_object(create_npcsgmerc_4021(232, 1639), 3);
    add_object(create_npcsgmerc_4021(432, 1639), 3);
    add_object(create_npcsgmerc_4021(6104, 1639), 3);
    add_object(create_npcsgmerc_4021(6160, 1639), 3);
    add_object(create_npcsgmerc_4021(608, 1639), 3);
    add_object(create_npcsgmerc_4021(688, 1639), 3);
    add_object(create_breakableshuigangpillar_4104(480, 1464), 3);
    add_object(create_breakableshuigangpillarpiece_4020(-256, 1440), 3);
    add_object(create_breakableshuigangpillar_4104(480, 1368), 3);
    add_object(create_breakableshuigangpillar_4104(672, 1464), 3);
    add_object(create_breakableshuigangpillar_4104(672, 1368), 3);
    add_object(create_breakableshuigangpillar_4104(1056, 1464), 3);
    add_object(create_breakableshuigangpillar_4104(1056, 1368), 3);
    add_object(create_breakableshuigangpillar_4104(1248, 1464), 3);
    add_object(create_breakableshuigangpillar_4104(1248, 1368), 3);
    add_object(create_breakableshuigangpillar_4104(1632, 1464), 3);
    add_object(create_breakableshuigangpillar_4104(1632, 1368), 3);
    add_object(create_breakableshuigangpillar_4104(1824, 1464), 3);
    add_object(create_breakableshuigangpillar_4104(1824, 1368), 3);
    add_object(create_breakableshuigangpillar_4104(2208, 1464), 3);
    add_object(create_breakableshuigangpillar_4104(2208, 1368), 3);
    add_object(create_breakableshuigangpillar_4104(2400, 1464), 3);
    add_object(create_breakableshuigangpillar_4104(2400, 1368), 3);
    add_object(create_breakableshuigangpillar_4104(2784, 1464), 3);
    add_object(create_breakableshuigangpillar_4104(2784, 1368), 3);
    add_object(create_breakableshuigangpillar_4104(2976, 1464), 3);
    add_object(create_breakableshuigangpillar_4104(2976, 1368), 3);
    add_object(create_breakableshuigangpillar_4104(3360, 1464), 3);
    add_object(create_breakableshuigangpillar_4104(3360, 1368), 3);
    add_object(create_breakableshuigangpillar_4104(3552, 1464), 3);
    add_object(create_breakableshuigangpillar_4104(3552, 1368), 3);
    add_object(create_breakableshuigangpillar_4104(3936, 1464), 3);
    add_object(create_breakableshuigangpillar_4104(3936, 1368), 3);
    add_object(create_breakableshuigangpillar_4104(4128, 1464), 3);
    add_object(create_breakableshuigangpillar_4104(4128, 1368), 3);
    add_object(create_enemyelitespawner_3345(4071, 1655), 3);
    add_object(create_enemyelitespawner_3345(4159, 1655), 3);
    add_object(create_enemyelitespawner_3345(4247, 1655), 3);
    add_object(create_enemyelitespawner_3345(4335, 1655), 3);
    add_object(create_npcsgmerc_4021(4688, 1639), 3);
    add_object(create_npcsgmerc_4021(4808, 1639), 3);
    add_object(create_npcsgmerc_4021(5016, 1639), 3);
    add_object(create_npcsgmerc_4021(4960, 1639), 3);
    add_object(create_npcsgmerc_4021(5096, 1639), 3);
    add_object(create_brevonmechfrontwing_2546(-265, 3021), 3);
    add_object(create_brevonmechfrontwing_2546(-305, 3021), 3);
    add_object(create_brevonmechfrontwing_2546(-345, 3021), 3);
    add_object(create_brevonmechfrontwing_2546(-385, 3021), 3);
    add_object(create_brevonmechfrontshoulder_2547(-252, 1916), 3);
    add_object(create_brevonmechfrontarm_2548(-193, 2690), 3);
    add_object(create_brevonmechfrontleg2_2541(-281, 2662), 3);
    add_object(create_brevonmechfrontknee_2542(-359, 2653), 3);
    add_object(create_brevonmechfrontclaw_2549(-262, 2697), 3);
    add_object(create_brevonmechfrontfoot_2545(-384, 2689), 3);
    add_object(create_brevonmechaxle_2550(-147, 2712), 3);
    add_object(create_npcsgmerc_4021(5176, 1639), 3);
    add_object(create_npcsgmerc_4021(5256, 1639), 3);
    add_object(create_npcsgmerc_4021(5312, 1639), 3);
    add_object(create_npcsgmerc_4021(5392, 1639), 3);
    add_object(create_enemyelitespawner_3345(3983, 1655), 3);
    add_object(create_enemyelitespawner_3345(3895, 1655), 3);
    add_object(create_npcsgmerc_4021(5504, 1639), 3);
    add_object(create_npcsgmerc_4021(5584, 1639), 3);
    add_object(create_npcsgmerc_4021(5640, 1639), 3);
    add_object(create_npcsgmerc_4021(6216, 1639), 3);
    add_object(create_bosschopperbars_2212(6088, 2128), 3);
    add_object(create_bosschopperbars2_2213(6088, 2128), 3);
    add_object(create_bosschoppertailblade2_2214(6008, 2056), 3);
    add_object(create_bosschoppertail_2215(6008, 2056), 3);
    add_object(create_bosschoppertail_2215(6024, 2072), 3);
    add_object(create_bosschoppertail_2215(6040, 2088), 3);
    add_object(create_bosschoppertail_2215(6056, 2104), 3);
    add_object(create_bosschoppertailblade_2217(6008, 2056), 3);
    add_object(create_bosschopper_2216(5980, 1508), 3);
    add_object(create_breakableshuigangpillar_4104(4512, 1464), 3);
    add_object(create_breakableshuigangpillar_4104(4512, 1368), 3);
    add_object(create_breakableshuigangpillar_4104(4704, 1464), 3);
    add_object(create_breakableshuigangpillar_4104(4704, 1368), 3);
    add_object(create_bosschopperblade_2218(6088, 2128), 3);
    add_object(create_bosskujackertail_2104(1631, 3155), 3);
    add_object(create_bosskujackertail_2104(1663, 3155), 3);
    add_object(create_bosskujackertail_2104(1695, 3155), 3);
    add_object(create_bosskujackertail_2104(1727, 3155), 3);
    add_object(create_bosskujackertail_2104(1759, 3155), 3);
    add_object(create_bosskujackertail_2104(1791, 3155), 3);
    add_object(create_bosskujackertail_2104(1823, 3155), 3);
    add_object(create_bosskujackertail_2104(1855, 3155), 3);
    add_object(create_bosskujackertail_2104(1887, 3155), 3);
    add_object(create_bosskujackerleg2_2105(1783, 2928), 3);
    add_object(create_bosskujackerleg1_2106(1712, 2928), 3);
    add_object(create_bosskujackerbase_2107(1744, 2904), 3);
    add_object(create_bosskujackerhead2_2108(1456, 3040), 3);
    add_object(create_bosskujackerhead2_2108(1472, 3040), 3);
    add_object(create_bosskujackerhead2_2108(1488, 3040), 3);
    add_object(create_bosskujackerhead2_2108(1504, 3040), 3);
    add_object(create_bosskujackerhead2_2108(1520, 3040), 3);
    add_object(create_bosskujackertailtarget_2109(1620, 3009), 3);
    add_object(create_bosskujackertailtarget_2109(1652, 3009), 3);
    add_object(create_bosskujackertailtarget_2109(1684, 3009), 3);
    add_object(create_bosskujackertailtarget_2109(1716, 3009), 3);
    add_object(create_bosskujackertailtarget_2109(1748, 3009), 3);
    add_object(create_bosskujackertailtarget_2109(1780, 3009), 3);
    add_object(create_bosskujackertailtarget_2109(1812, 3009), 3);
    add_object(create_bosskujackertailtarget_2109(1844, 3009), 3);
    add_object(create_bosskujackertailtarget_2109(1876, 3009), 3);
    add_object(create_bosskujackerwing1_2110(1593, 2903), 3);
    add_object(create_bosskujackerwing1_2110(1633, 2903), 3);
    add_object(create_bosskujackerwing1_2110(1673, 2903), 3);
    add_object(create_bosskujackerwing1_2110(1713, 2903), 3);
    add_object(create_bosskujackerwing2_2111(1894, 2903), 3);
    add_object(create_bosskujackerwing2_2111(1854, 2903), 3);
    add_object(create_bosskujackerwing2_2111(1814, 2903), 3);
    add_object(create_bosskujackerwing2_2111(1774, 2903), 3);
    add_object(create_bosskujackerpilot_2112(1590, 3160), 3);
    add_object(create_bosskujackerhead_2113(1751, 2896), 3);
    add_object(create_npcdinnerlilac_4106(589, 3515), 3);
    add_object(create_npcdinnerlilac2_4107(589, 3515), 3);
    add_object(create_npcdinnercarol2_4108(629, 3515), 3);
    add_object(create_npcdinnermilla_4109(549, 3515), 3);
    add_object(create_message2_4110(32, 8016), 3);
    add_object(create_npcfallenhero_4111(2001, 1655), 3);
    add_object(create_npcdinnercarol_4112(629, 3515), 3);
    add_object(create_npcdinnertorque_4113(389, 3515), 3);
    add_object(create_npcshellduck_533(-124, 3529), 3);
    add_object(create_npcmayor_3950(304, 3506), 3);
    add_object(create_npcmerc_1283(192, 3527), 3);
    add_object(create_npcmerc_1283(248, 3527), 3);
    add_object(create_npcmerc_1283(88, 3527), 3);
    add_object(create_npcfallenherohelmet_4095(2224, 1655), 3);
    add_object(create_npcserpentine_947(1524, 1540), 3);
    add_object(create_kingdomstone_3665(1488, 1520), 3);
    add_object(create_npccouchlilac_545(297, 4006), 3);
    add_object(create_npccouchcarol_555(212, 3987), 3);
    add_object(create_placeholdercharactertail_4114(-172, 4809), 3);
    add_object(create_placeholdercharacter_4115(-172, 4809), 3);
    add_object(create_npclilacbath_4116(1400, 2568), 3);
    add_object(create_floorcandle2_4117(1123, 2610), 3);
    add_object(create_floorcandle2_4117(1275, 2610), 3);
    add_object(create_bathfiller_4118(1472, 2504), 3);
    add_object(create_floorcandle2_4117(1379, 2610), 3);
    add_object(create_floorcandle2_4117(1531, 2610), 3);
    add_object(create_floorcandle2_4117(1635, 2610), 3);
    add_object(create_floorcandle2_4117(1787, 2610), 3);
    add_object(create_npchologram1_3060(2387, 2542), 3);
    add_object(create_npcpangu_3073(2512, 2541), 3);
    add_object(create_npchologram2_3074(2491, 2547), 3);
    add_object(create_npcpanguleftarm_3075(2545, 2546), 3);
    add_object(create_npcpanguleftarm_3075(2553, 2546), 3);
    add_object(create_npcpanguleftarm_3075(2569, 2546), 3);
    add_object(create_npcpanguleftarm_3075(2577, 2546), 3);
    add_object(create_npcpanguleftarm_3075(2585, 2546), 3);
    add_object(create_npcpanguleftarm_3075(2593, 2546), 3);
    add_object(create_npcpanguleftarm_3075(2609, 2546), 3);
    add_object(create_npcpanguleftarm_3075(2617, 2546), 3);
    add_object(create_npcpanguleftarm_3075(2625, 2546), 3);
    add_object(create_npcpangurightarm_3076(2545, 2554), 3);
    add_object(create_npcpangurightarm_3076(2553, 2554), 3);
    add_object(create_npcpangurightarm_3076(2569, 2554), 3);
    add_object(create_npcpangurightarm_3076(2577, 2554), 3);
    add_object(create_npcpangurightarm_3076(2585, 2554), 3);
    add_object(create_npcpangurightarm_3076(2593, 2554), 3);
    add_object(create_npcpangurightarm_3076(2609, 2554), 3);
    add_object(create_npcpangurightarm_3076(2617, 2554), 3);
    add_object(create_npcpangurightarm_3076(2625, 2554), 3);
    add_object(create_npcshieldguard_4024(480, 2600), 3);
    add_object(create_npcshieldguard_4024(512, 2600), 3);
    add_object(create_npcdinnerneera_4119(473, 3515), 3);
    add_background_object(create_podium1_4120(72, 2080), 4);
    add_background_object(create_podium3_4121(248, 2048), 4);
    add_background_object(create_podium2_4122(264, 2080), 4);
    add_background_object(create_aquabrick11_688(576, 1672), 4);
    add_background_object(create_aquabrick2_706(512, 1656), 4);
    add_background_object(create_aquabrick2_706(576, 1656), 4);
    add_background_object(create_aquabrick1_676(512, 1672), 4);
    add_background_object(create_aquabrick3_691(512, 1704), 4);
    add_background_object(create_aquabrick11_688(448, 1672), 4);
    add_background_object(create_aquabrick2_706(384, 1656), 4);
    add_background_object(create_aquabrick2_706(448, 1656), 4);
    add_background_object(create_aquabrick1_676(384, 1672), 4);
    add_background_object(create_aquabrick3_691(384, 1704), 4);
    add_background_object(create_aquabrick11_688(320, 1672), 4);
    add_background_object(create_aquabrick2_706(256, 1656), 4);
    add_background_object(create_aquabrick2_706(320, 1656), 4);
    add_background_object(create_aquabrick1_676(256, 1672), 4);
    add_background_object(create_aquabrick3_691(256, 1704), 4);
    add_background_object(create_aquabrick11_688(192, 1672), 4);
    add_background_object(create_aquabrick2_706(128, 1656), 4);
    add_background_object(create_aquabrick2_706(192, 1656), 4);
    add_background_object(create_aquabrick1_676(128, 1672), 4);
    add_background_object(create_aquabrick3_691(128, 1704), 4);
    add_background_object(create_aquabrick11_688(64, 1672), 4);
    add_background_object(create_aquabrick2_706(0, 1656), 4);
    add_background_object(create_aquabrick2_706(64, 1656), 4);
    add_background_object(create_aquabrick1_676(0, 1672), 4);
    add_background_object(create_aquabrick3_691(0, 1704), 4);
    add_background_object(create_aquabrick1_676(0, 1768), 4);
    add_background_object(create_aquabrick1_676(64, 1768), 4);
    add_background_object(create_aquabrick1_676(128, 1768), 4);
    add_background_object(create_aquabrick1_676(192, 1768), 4);
    add_background_object(create_aquabrick1_676(256, 1768), 4);
    add_background_object(create_aquabrick1_676(320, 1768), 4);
    add_background_object(create_aquabrick1_676(384, 1768), 4);
    add_background_object(create_aquabrick1_676(448, 1768), 4);
    add_background_object(create_aquabrick1_676(512, 1768), 4);
    add_background_object(create_aquabrick1_676(576, 1768), 4);
    add_background_object(create_backdrop22_4123(312, 3512), 4);
    add_background_object(create_backdrop23_4124(720, 3512), 4);
    add_background_object(create_backdrop26_4125(336, 3512), 4);
    add_background_object(create_backdrop26_4125(464, 3512), 4);
    add_background_object(create_backdrop26_4125(592, 3512), 4);
    add_background_object(create_aquabrick2_706(104, 4376), 4);
    add_background_object(create_aquabrick2_706(168, 4376), 4);
    add_background_object(create_aquabrick2_706(-24, 4376), 4);
    add_background_object(create_aquabrick2_706(40, 4376), 4);
    add_background_object(create_aquabrick2_706(360, 4376), 4);
    add_background_object(create_aquabrick2_706(232, 4376), 4);
    add_background_object(create_aquabrick2_706(296, 4376), 4);
    add_background_object(create_aquabrick6_709(424, 4376), 4);
    add_background_object(create_jcdirt6_2398(768, 4832), 4);
    add_background_object(create_jcdirt6_2398(896, 4832), 4);
    add_background_object(create_jcdirt6_2398(1024, 4832), 4);
    add_background_object(create_jcflatground1_2375(768, 4816), 4);
    add_background_object(create_jcflatground1_2375(896, 4816), 4);
    add_background_object(create_jcflatground1_2375(1024, 4816), 4);
    add_background_object(create_tentfloorfaderight_614(1024, 4816), 4);
    add_background_object(create_tentfloorfaderight2_4091(768, 4816), 4);
    add_background_object(create_tentfloorfaderight2_4091(832, 4816), 4);
    add_background_object(create_tentfloorfaderight2_4091(896, 4816), 4);
    add_background_object(create_tentfloorfaderight2_4091(960, 4816), 4);
    add_background_object(create_tentfloorfaderight2_4091(1024, 4816), 4);
    add_background_object(create_tentfloorfaderight2_4091(1088, 4816), 4);
    add_background_object(create_tbsolidblack_2688(1024, 4864), 4);
    add_background_object(create_tbsolidblack_2688(896, 4864), 4);
    add_background_object(create_tbsolidblack_2688(768, 4864), 4);
    add_background_object(create_jcdirt6_2398(640, 4832), 4);
    add_background_object(create_jcflatground1_2375(640, 4816), 4);
    add_background_object(create_tentfloorfaderight2_4091(640, 4816), 4);
    add_background_object(create_tentfloorfaderight2_4091(704, 4816), 4);
    add_background_object(create_tbsolidblack_2688(640, 4864), 4);
    add_background_object(create_jcdirt6_2398(512, 4832), 4);
    add_background_object(create_jcflatground1_2375(512, 4816), 4);
    add_background_object(create_tentfloorfaderight2_4091(512, 4816), 4);
    add_background_object(create_tentfloorfaderight2_4091(576, 4816), 4);
    add_background_object(create_tbsolidblack_2688(512, 4864), 4);
    add_background_object(create_jcdirt6_2398(384, 4832), 4);
    add_background_object(create_jcflatground1_2375(384, 4816), 4);
    add_background_object(create_tentfloorfaderight2_4091(384, 4816), 4);
    add_background_object(create_tentfloorfaderight2_4091(448, 4816), 4);
    add_background_object(create_tbsolidblack_2688(384, 4864), 4);
    add_background_object(create_jcdirt6_2398(256, 4832), 4);
    add_background_object(create_jcflatground1_2375(256, 4816), 4);
    add_background_object(create_tentfloorfaderight2_4091(256, 4816), 4);
    add_background_object(create_tentfloorfaderight2_4091(320, 4816), 4);
    add_background_object(create_tbsolidblack_2688(256, 4864), 4);
    add_background_object(create_jcplant1_2349(1128, 4768), 4);
    add_background_object(create_jcplant1_2349(1088, 4808), 4);
    add_background_object(create_jcplant1_2349(1168, 4808), 4);
    add_background_object(create_jcplant1_2349(1048, 4848), 4);
    add_background_object(create_jcplant1_2349(1128, 4848), 4);
    add_background_object(create_jcplant1_2349(1216, 4848), 4);
    add_background_object(create_jcplant1_2349(1008, 4888), 4);
    add_background_object(create_jcplant1_2349(1264, 4888), 4);
    add_background_object(create_jcplant1_2349(1184, 4888), 4);
    add_background_object(create_jcplant1_2349(1096, 4888), 4);
    add_background_object(create_jcplant1_2349(624, 4784), 4);
    add_background_object(create_jcplant1_2349(584, 4824), 4);
    add_background_object(create_jcplant1_2349(664, 4824), 4);
    add_background_object(create_jcplant1_2349(544, 4864), 4);
    add_background_object(create_jcplant1_2349(624, 4864), 4);
    add_background_object(create_jcplant1_2349(712, 4864), 4);
    add_background_object(create_jcdirt6_2398(128, 4832), 4);
    add_background_object(create_jcflatground1_2375(128, 4816), 4);
    add_background_object(create_tentfloorfaderight2_4091(128, 4816), 4);
    add_background_object(create_tentfloorfaderight2_4091(192, 4816), 4);
    add_background_object(create_tbsolidblack_2688(128, 4864), 4);
    add_background_object(create_jcdirt6_2398(0, 4832), 4);
    add_background_object(create_jcflatground1_2375(0, 4816), 4);
    add_background_object(create_tentfloorfaderight2_4091(0, 4816), 4);
    add_background_object(create_tentfloorfaderight2_4091(64, 4816), 4);
    add_background_object(create_tbsolidblack_2688(0, 4864), 4);
    add_background_object(create_bath_4126(1144, 2584), 4);
    add_background_object(create_bath_4126(1400, 2584), 4);
    add_background_object(create_bath_4126(1656, 2584), 4);
    add_background_object(create_plstonewallfloor_4127(0, 6456), 4);
    add_background_object(create_plstonewallfloor_4127(256, 6456), 4);
    add_background_object(create_plstonewall1_2913(0, 6488), 4);
    add_background_object(create_plstonewall1_2913(256, 6488), 4);
    add_background_object(create_tentfloorfaderight2_4091(0, 6488), 4);
    add_background_object(create_tentfloorfaderight2_4091(64, 6488), 4);
    add_background_object(create_tbsolidblack_2688(0, 6536), 4);
    add_background_object(create_tentfloorfaderight2_4091(128, 6488), 4);
    add_background_object(create_tentfloorfaderight2_4091(192, 6488), 4);
    add_background_object(create_tbsolidblack_2688(128, 6536), 4);
    add_background_object(create_tentfloorfaderight2_4091(256, 6488), 4);
    add_background_object(create_tentfloorfaderight2_4091(320, 6488), 4);
    add_background_object(create_tbsolidblack_2688(256, 6536), 4);
    add_background_object(create_tentfloorfaderight2_4091(384, 6488), 4);
    add_background_object(create_tentfloorfaderight2_4091(448, 6488), 4);
    add_background_object(create_tbsolidblack_2688(384, 6536), 4);
    add_background_object(create_plstonewall1_2913(512, 6488), 4);
    add_background_object(create_plstonewall1_2913(768, 6488), 4);
    add_background_object(create_tentfloorfaderight2_4091(512, 6488), 4);
    add_background_object(create_tentfloorfaderight2_4091(576, 6488), 4);
    add_background_object(create_tbsolidblack_2688(512, 6536), 4);
    add_background_object(create_tentfloorfaderight2_4091(640, 6488), 4);
    add_background_object(create_tentfloorfaderight2_4091(704, 6488), 4);
    add_background_object(create_tbsolidblack_2688(640, 6536), 4);
    add_background_object(create_tentfloorfaderight2_4091(768, 6488), 4);
    add_background_object(create_tentfloorfaderight2_4091(832, 6488), 4);
    add_background_object(create_tbsolidblack_2688(768, 6536), 4);
    add_background_object(create_tentfloorfaderight2_4091(896, 6488), 4);
    add_background_object(create_tentfloorfaderight2_4091(960, 6488), 4);
    add_background_object(create_tbsolidblack_2688(896, 6536), 4);
    add_background_object(create_plstonewallfloor_4127(512, 6456), 4);
    add_background_object(create_plstonewallfloor_4127(768, 6456), 4);
    add_object(create_food5_4128(680, 3496), 4);
    add_object(create_crowd_4129(28, 2148), 4);
    add_object(create_crowd_4129(96, 2195), 4);
    add_object(create_crowd_4129(116, 2148), 4);
    add_object(create_crowd_4129(156, 2156), 4);
    add_object(create_crowd_4129(212, 2148), 4);
    add_object(create_crowd_4129(260, 2156), 4);
    add_object(create_crowd_4129(308, 2148), 4);
    add_object(create_crowd_4129(340, 2164), 4);
    add_object(create_crowd_4129(388, 2156), 4);
    add_object(create_crowd_4129(436, 2164), 4);
    add_object(create_crowd_4129(476, 2156), 4);
    add_object(create_crowd_4129(284, 2164), 4);
    add_object(create_crowd_4129(188, 2164), 4);
    add_object(create_crowd_4129(236, 2172), 4);
    add_object(create_crowd_4129(404, 2172), 4);
    add_object(create_crowd_4129(44, 2172), 4);
    add_object(create_food1_4130(480, 3496), 4);
    add_object(create_food6_4131(328, 3496), 4);
    add_object(create_food3_4132(320, 3496), 4);
    add_object(create_food3_4132(504, 3496), 4);
    add_object(create_food7_4133(648, 3496), 4);
    add_object(create_food7_4133(656, 3496), 4);
    add_object(create_food7_4133(400, 3496), 4);
    add_object(create_food7_4133(312, 3496), 4);
    add_object(create_food5_4128(360, 3496), 4);
    add_object(create_food4_4134(432, 3496), 4);
    add_object(create_food8_4135(456, 3496), 4);
    add_object(create_food6_4131(456, 3496), 4);
    add_object(create_food8_4135(312, 3496), 4);
    add_object(create_food2_4136(464, 3512), 4);
    add_object(create_food2_4136(720, 3512), 4);
    add_object(create_food2_4136(688, 3512), 4);
    add_object(create_food2_4136(656, 3512), 4);
    add_object(create_npcdisgruntledservant_4137(718, 3537), 4);
    add_object(create_npcdisgruntledservant_4137(686, 3537), 4);
    add_object(create_npcdisgruntledservant_4137(654, 3537), 4);
    add_object(create_npcdisgruntledservant_4137(462, 3537), 4);
    add_object(create_gate_4138(160, 4264), 4);
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
    add_object(create_acidfloor_4139(0, 1656), 5);
    add_object(create_acidfloor_4139(576, 1656), 5);
    add_object(create_acidfloorglow_4140(0, 1592), 5);
    add_object(create_acidfloorglow_4140(576, 1592), 5);
    add_object(create_acidfloor_4139(64, 1656), 5);
    add_object(create_acidfloor_4139(512, 1656), 5);
    add_object(create_acidfloorglow_4140(64, 1592), 5);
    add_object(create_acidfloorglow_4140(512, 1592), 5);
    add_object(create_acidfloor_4139(128, 1656), 5);
    add_object(create_acidfloor_4139(448, 1656), 5);
    add_object(create_acidfloorglow_4140(128, 1592), 5);
    add_object(create_acidfloorglow_4140(448, 1592), 5);
    add_object(create_acidfloor_4139(192, 1656), 5);
    add_object(create_acidfloor_4139(384, 1656), 5);
    add_object(create_acidfloorglow_4140(192, 1592), 5);
    add_object(create_acidfloorglow_4140(384, 1592), 5);
    add_object(create_acidfloor_4139(256, 1656), 5);
    add_object(create_acidfloor_4139(320, 1656), 5);
    add_object(create_acidfloorglow_4140(256, 1592), 5);
    add_object(create_acidfloorglow_4140(320, 1592), 5);
    add_object(create_playerskinmillatail_381(-91, 273), 5);
    add_object(create_playerskincarolbike_382(-104, 264), 5);
    add_object(create_playerskinmilla_446(-91, 273), 5);
    add_object(create_playerskincaroltail_444(-112, 273), 5);
    add_object(create_playerskincarol_445(-108, 273), 5);
    add_object(create_playerskinspade_419(-122, 273), 5);
    add_object(create_playercharactersensor_383(-155, 188), 5);
    add_object(create_mastergroupsa_384(-168, -8), 5);
    add_object(create_mastergroupsb_385(-152, -8), 5);
    add_object(create_generaledge01_3894(-168, 16), 5);
    add_object(create_generaledge02_3895(-168, 16), 5);
    add_object(create_generaledge03_3896(-168, 16), 5);
    add_object(create_generaledge04_3897(-168, 16), 5);
    add_object(create_generaledge05_3898(-168, 16), 5);
    add_object(create_generalanglechanger75_386(-168, 48), 5);
    add_object(create_generalanglechanger165_3899(-152, 48), 5);
    add_object(create_generalanglechanger255_3900(-128, 48), 5);
    add_object(create_generalanglechanger285_3901(-104, 48), 5);
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
    add_object(create_cameralimitbossbottom_420(2768, -73), 5);
    add_object(create_cameralimitbossleft_421(2608, -192), 5);
    add_object(create_cameralimitbossright_422(2927, -192), 5);
    add_object(create_cameralimitbosstop_423(2768, -312), 5);
    add_object(create_cameratriggerboss_424(2624, -200), 5);
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
    add_object(create_layerobject_10(-168, 648), 5);
    add_object(create_sarassteampluginfreedomplanet_26(-32, -88), 5);
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_mapdata_30(-432, 232), 5);
    add_object(create_guiscoretimerings_451(8, 8), 6);
    add_object(create_guienergy_124(16, 10), 6);
    add_object(create_guitimermilli_360(306, -29), 6);
    add_object(create_guitimermilli2_361(298, -29), 6);
    add_object(create_guitimers_362(282, -29), 6);
    add_object(create_guitimers2_363(274, -29), 6);
    add_object(create_guitimerm_364(258, -29), 6);
    add_object(create_guitimerm2_365(250, -29), 6);
    add_object(create_guirings_122(8, 19), 6);
    add_object(create_guiicon_452(135, 12), 6);
    add_object(create_guipause_453(0, 101), 6);
    add_object(create_guilives_454(164, 19), 6);
    add_object(create_guikeystone_455(112, -40), 6);
    add_object(create_crystal_456(-53, 141), 6);
    add_object(create_guipowercard_457(91, 7), 6);
    add_object(create_guipowercard_457(75, 7), 6);
    add_object(create_guipowercard_457(59, 7), 6);
    add_object(create_guipowercard_457(43, 7), 6);
    add_object(create_guipowercard_457(27, 7), 6);
    add_object(create_guicrystal_121(206, 19), 6);
    add_object(create_guitimer_564(216, -48), 6);
    add_object(create_dialogdata_4141(-136, 464), 6);
    add_object(create_dialogbox_566(0, 8), 6);
    add_object(create_dialogbox2_567(-156, 71), 6);
    add_object(create_dialogarrow_568(132, 40), 6);
    add_object(create_dialogtext_569(-148, 8), 6);
    add_object(create_fade_54(0, 0), 6);
    add_object(create_subtitletext_3433(-160, 8), 6);
    add_object(create_subtitledata_4142(-184, 464), 6);
    add_object(create_timebonustotal_460(-256, -72), 7);
    add_object(create_levelcardfade_461(0, 0), 7);
    add_object(create_levelcardfade2_24(-328, -336), 7);
    add_object(create_levelcardgameover_462(0, 256), 7);
    add_object(create_guilifebasemeter_125(0, 0), 7);
    add_object(create_levelcardintro1_464(16, -240), 7);
    add_object(create_levelcardintro3_760(0, 248), 7);
    add_object(create_levelcardintro2_761(0, 248), 7);
    add_object(create_locationname_570(16, 192), 7);
    loop_itm_running = false;
    loop_itm_index = 0;
    loop_sound_kick1_running = false;
    loop_sound_kick1_index = 0;
    loop_sound_kick0_running = false;
    loop_sound_kick0_index = 0;
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
    loop_iterate_pushables_running = false;
    loop_iterate_pushables_index = 0;
    loop_death_running = false;
    loop_death_index = 0;
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
    loop_pillar_running = false;
    loop_pillar_index = 0;
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
    loop_sound_explode1_running = false;
    loop_sound_explode1_index = 0;
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
    loop_sound_help_running = false;
    loop_sound_help_index = 0;
    loop_sound_hurt0_running = false;
    loop_sound_hurt0_index = 0;
    loop_player01detectcharactersensor_running = false;
    loop_player01detectcharactersensor_index = 0;
    loop_player01detectangle_running = false;
    loop_player01detectangle_index = 0;
    loop_sound_explode3_running = false;
    loop_sound_explode3_index = 0;
    loop_sound_explode2_running = false;
    loop_sound_explode2_index = 0;
    loop_import_deadzones_running = false;
    loop_import_deadzones_index = 0;
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
    loop_head_running = false;
    loop_head_index = 0;
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
    loop_voice_running = false;
    loop_voice_index = 0;
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
    loop_st_running = false;
    loop_st_index = 0;
    loop_player01detectsensorright_running = false;
    loop_player01detectsensorright_index = 0;
    loop_process_call_stop_music_running = false;
    loop_process_call_stop_music_index = 0;
    static DynamicLoops frame_loops;
    loops = &frame_loops;
    static bool loops_initialized = false;
    if (!loops_initialized) {
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_83, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_83, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_83, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_83, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_83, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_83, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_83, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_83, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_83, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_83, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_83, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_83, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_83, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_83, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_83, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_83, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_83, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_83, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_83, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_83, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_83, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_83, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_83, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_83, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_83, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_83, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_83, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_83, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_83, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_83, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_83, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_83, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_83, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_83, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_83, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_83, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_83, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_83, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_83, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_83, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_83, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_83, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_83, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_83, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_83, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_83, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_83, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_83, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_83, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_83, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_83, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_83, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_83, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_83, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    once_condition_2083_83 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    not_always_2495_83 = loop_count;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    once_condition_2441_83 = false;
    not_always_1039_13 = loop_count;
    once_condition_2398_83 = false;
    not_always_1448_13 = loop_count;
    not_always_1149_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    once_condition_2414_83 = false;
    group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1 = false;
    once_condition_1546_83 = false;
    not_always_1694_83 = loop_count;
    not_always_1725_83 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_lilac_s_apology_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_2160_83 = loop_count;
    group_main_engine_global_methods_common_objects_shields_2_2_flame_shield_2_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    once_condition_39_14 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    not_always_422_13 = loop_count;
    group_sound_events_milla_1 = false;
    not_always_1047_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    once_condition_2119_83 = false;
    not_always_1287_76 = loop_count;
    once_condition_63_0 = false;
    once_condition_2516_83 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_101_0 = loop_count;
    once_condition_1956_83 = false;
    once_condition_2323_83 = false;
    not_always_65_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    not_always_2417_83 = loop_count;
    not_always_585_13 = loop_count;
    once_condition_2791_83 = false;
    not_always_2137_46 = loop_count;
    group_debug_mode_debugging_1 = false;
    once_condition_2783_83 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    not_always_1401_83 = loop_count;
    not_always_558_13 = loop_count;
    once_condition_565_76 = false;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    not_always_1790_76 = loop_count;
    once_condition_2128_83 = false;
    not_always_234_13 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_escape_plan_fail_1 = false;
    group_main_engine_global_methods_common_objects_shields_2_1_wood_shield_2_1 = false;
    once_condition_2311_83 = false;
    once_condition_550_76 = false;
    not_always_2393_83 = loop_count;
    not_always_2049_83 = loop_count;
    not_always_1994_83 = loop_count;
    not_always_70_13 = loop_count;
    not_always_606_14 = loop_count;
    once_condition_66_13 = false;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    once_condition_2444_83 = false;
    once_condition_63_13 = false;
    once_condition_2487_83 = false;
    not_always_2136_46 = loop_count;
    once_condition_2303_83 = false;
    group_main_engine_level_specific_methods_frame_transition_1 = false;
    not_always_2381_83 = loop_count;
    once_condition_2555_83 = false;
    once_condition_2306_83 = false;
    once_condition_2784_83 = false;
    not_always_522_13 = loop_count;
    not_always_236_13 = loop_count;
    not_always_2366_83 = loop_count;
    once_condition_2008_83 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    not_always_1528_13 = loop_count;
    not_always_2641_83 = loop_count;
    not_always_67_13 = loop_count;
    not_always_1765_83 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    not_always_69_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_dragon_scientist_1 = true;
    once_condition_57_14 = false;
    once_condition_2647_83 = false;
    group_main_engine_level_specific_methods_cutscenes_enter_team_spade_1 = false;
    not_always_2418_83 = loop_count;
    group_main_engine_global_methods_common_objects_shields_2_4_water_shield_2_1 = false;
    not_always_121_0 = loop_count;
    once_condition_2792_83 = false;
    not_always_1996_83 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1 = false;
    not_always_2382_83 = loop_count;
    not_always_1051_14 = loop_count;
    once_condition_2392_83 = false;
    not_always_1048_14 = loop_count;
    not_always_2909_83 = loop_count;
    not_always_1708_72 = loop_count;
    not_always_1046_14 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    group_main_engine_global_methods_common_objects_shields_2_5_earth_shield_2_1 = false;
    not_always_2189_83 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    once_condition_2180_83 = false;
    not_always_100_0 = loop_count;
    not_always_1420_13 = loop_count;
    once_condition_2295_83 = false;
    once_condition_1935_83 = false;
    not_always_1422_13 = loop_count;
    not_always_2534_83 = loop_count;
    not_always_814_13 = loop_count;
    once_condition_2297_83 = false;
    once_condition_2726_83 = false;
    not_always_2442_83 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_2315_83 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_ending_1 = false;
    group_main_engine_interface_and_post_processing_methods_shields_1_wood_shield_1 = false;
    once_condition_2324_83 = false;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    not_always_2001_83 = loop_count;
    not_always_1530_83 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    not_always_43_13 = loop_count;
    not_always_1581_83 = loop_count;
    not_always_45_13 = loop_count;
    not_always_98_0 = loop_count;
    once_condition_138_0 = false;
    group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1 = false;
    group_debug_mode_1 = false;
    not_always_52_13 = loop_count;
    once_condition_2318_83 = false;
    not_always_2511_83 = loop_count;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    once_condition_2774_83 = false;
    group_sound_events_torque_1 = false;
    group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 = false;
    group_main_engine_level_specific_methods_cutscenes_kingdom_stone_taken_1 = false;
    once_condition_41_14 = false;
    not_always_1572_83 = loop_count;
    once_condition_2235_83 = false;
    group_main_engine_level_specific_methods_cutscenes_jade_creek_cave_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    group_mac_controls_1 = false;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    not_always_2614_83 = loop_count;
    not_always_58_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    once_condition_2540_83 = false;
    not_always_450_13 = loop_count;
    once_condition_2243_83 = false;
    not_always_150_0 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_dialog_system_1 = true;
    group_main_engine_interface_and_post_processing_methods_me_music_engine_1 = true;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    not_always_1680_72 = loop_count;
    not_always_41_13 = loop_count;
    not_always_240_14 = loop_count;
    not_always_2280_83 = loop_count;
    not_always_1763_83 = loop_count;
    once_condition_2748_83 = false;
    not_always_172_8 = loop_count;
    not_always_1450_13 = loop_count;
    not_always_929_13 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_intro_scene_1 = false;
    not_always_174_8 = loop_count;
    not_always_99_0 = loop_count;
    once_condition_2165_83 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    not_always_2709_83 = loop_count;
    not_always_2061_83 = loop_count;
    not_always_1993_83 = loop_count;
    not_always_809_13 = loop_count;
    not_always_826_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    every_819_13 = 0.0f;
    not_always_311_14 = loop_count;
    group_main_engine_1 = true;
    once_condition_1505_83 = false;
    not_always_2527_83 = loop_count;
    once_condition_65_13 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_dungeon_escape_plan_1 = false;
    not_always_2528_83 = loop_count;
    not_always_2365_83 = loop_count;
    not_always_1697_16 = loop_count;
    not_always_1698_83 = loop_count;
    not_always_2384_83 = loop_count;
    once_condition_2761_83 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_interface_and_post_processing_methods_shields_1 = false;
    once_condition_2260_83 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    once_condition_2310_83 = false;
    group_sound_events_spade_1 = false;
    not_always_1724_83 = loop_count;
    once_condition_2415_83 = false;
    not_always_2287_83 = loop_count;
    not_always_1449_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1 = false;
    once_condition_1597_83 = false;
    once_condition_2539_83 = false;
    group_main_engine_global_methods_player_player_movement_1 = true;
    not_always_68_13 = loop_count;
    not_always_813_13 = loop_count;
    once_condition_2299_83 = false;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    not_always_171_8 = loop_count;
    once_condition_2017_83 = false;
    once_condition_2276_83 = false;
    once_condition_2118_83 = false;
    once_condition_58_14 = false;
    group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 = false;
    not_always_130_0 = loop_count;
    not_always_744_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    once_condition_2391_83 = false;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_2226_83 = loop_count;
    once_condition_2844_83 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    not_always_103_0 = loop_count;
    not_always_1447_13 = loop_count;
    not_always_1735_83 = loop_count;
    once_condition_64_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    once_condition_1950_83 = false;
    not_always_2550_83 = loop_count;
    not_always_1148_14 = loop_count;
    once_condition_38_14 = false;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    not_always_173_8 = loop_count;
    not_always_175_8 = loop_count;
    once_condition_2302_83 = false;
    not_always_1049_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    not_always_57_13 = loop_count;
    once_condition_2669_83 = false;
    not_always_2076_83 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_2379_83 = loop_count;
    not_always_235_13 = loop_count;
    not_always_1693_83 = loop_count;
    not_always_2664_83 = loop_count;
    once_condition_2793_83 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    group_main_engine_level_specific_methods_cutscenes_kingdom_stone_1 = false;
    once_condition_2504_83 = false;
    once_condition_2307_83 = false;
    not_always_553_13 = loop_count;
    not_always_2271_83 = loop_count;
    once_condition_1716_83 = false;
    group_pause_1 = false;
    not_always_1050_14 = loop_count;
    not_always_1995_83 = loop_count;
    not_always_1733_83 = loop_count;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_1333_14 = loop_count;
    not_always_2046_83 = loop_count;
    not_always_1421_13 = loop_count;
    not_always_1997_83 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    once_condition_2660_83 = false;
    once_condition_2485_83 = false;
    once_condition_2371_83 = false;
    group_main_engine_interface_and_post_processing_methods_shields_5_earth_shield_1 = false;
    once_condition_2825_83 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    not_always_1764_83 = loop_count;
    not_always_1104_13 = loop_count;
    group_sound_events_carol_1 = false;
    not_always_2443_83 = loop_count;
    not_always_1539_83 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_1687_72 = loop_count;
    not_always_2269_83 = loop_count;
    once_condition_2790_83 = false;
    once_condition_2762_83 = false;
    not_always_2050_83 = loop_count;
    not_always_1683_72 = loop_count;
    once_condition_2296_83 = false;
    once_condition_1934_83 = false;
    group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_2380_83 = loop_count;
    once_condition_2435_83 = false;
    group_main_engine_level_specific_methods_cutscenes_lilac_s_arrest_1 = false;
    not_always_2330_83 = loop_count;
    not_always_44_13 = loop_count;
    not_always_1425_13 = loop_count;
    not_always_675_13 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_trap_hideout_1 = false;
    group_main_engine_interface_and_post_processing_methods_shields_3_magnetic_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    not_always_1778_83 = loop_count;
    once_condition_2335_83 = false;
    not_always_2907_83 = loop_count;
    not_always_449_13 = loop_count;
    once_condition_1925_83 = false;
    group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_hologram_grow_1 = false;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    group_main_engine_level_specific_methods_cutscenes_thermal_base_implodes_1 = false;
    not_always_1803_76 = loop_count;
    not_always_2654_83 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    not_always_1529_13 = loop_count;
    not_always_97_0 = loop_count;
    group_main_engine_interface_and_post_processing_methods_shields_4_water_shield_1 = false;
    not_always_2003_83 = loop_count;
    once_condition_2298_83 = false;
    not_always_40_13 = loop_count;
    not_always_1573_83 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    not_always_540_13 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_magister_s_mission_to_lilac_1 = false;
    not_always_95_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    group_main_engine_level_specific_methods_cutscenes_brevon_s_intruders_1 = false;
    not_always_46_13 = loop_count;
    not_always_2352_83 = loop_count;
    not_always_102_0 = loop_count;
    once_condition_2181_83 = false;
    not_always_53_13 = loop_count;
    group_main_engine_interface_and_post_processing_methods_shields_2_flame_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    not_always_815_13 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    once_condition_2133_83 = false;
    not_always_1777_83 = loop_count;
    group_main_engine_global_methods_common_objects_shields_2_3_magnetic_shield_2_1 = false;
    not_always_1052_13 = loop_count;
    not_always_2060_83 = loop_count;
    once_condition_2449_83 = false;
    not_always_2230_83 = loop_count;
    not_always_51_13 = loop_count;
    not_always_2446_83 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1 = false;
    not_always_1806_76 = loop_count;
    once_condition_40_14 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1 = false;
    once_condition_2304_83 = false;
    once_condition_50_13 = false;
    not_always_1698_16 = loop_count;
    not_always_2075_83 = loop_count;
    once_condition_2167_83 = false;
    not_always_539_13 = loop_count;
    not_always_2817_83 = loop_count;
    not_always_1684_72 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_140_0 = loop_count;
    once_condition_2749_83 = false;
    not_always_64_0 = loop_count;
    not_always_1998_83 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    not_always_1582_83 = loop_count;
    once_condition_1608_83 = false;
    not_always_2314_83 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    once_condition_2628_83 = false;
    not_always_2714_83 = loop_count;
    not_always_2000_83 = loop_count;
    once_condition_2109_83 = false;
    once_condition_1549_83 = false;
    once_condition_59_14 = false;
    once_condition_48_13 = false;
    not_always_825_13 = loop_count;
    not_always_3055_83 = loop_count;
    group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    not_always_96_0 = loop_count;
    not_always_2710_83 = loop_count;
    once_condition_2450_83 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    not_always_560_14 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1 = true;
    once_condition_2448_83 = false;
    not_always_1992_83 = loop_count;
    not_always_2078_83 = loop_count;
    not_always_59_13 = loop_count;
}
void Frames::event_func_20594()
{
    // event 35_84
    {
        FrameObject * single_instance_35_84_0; single_instance_35_84_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(spacedreadnought_4149_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_active_4146(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_35_84_0 == NULL)
                    single_instance_35_84_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_35_84_0))->alterables->values.set(2, ((Active*)get_instance(spacedreadnought_4149_instances))->get_x());
        ((Active*)((Active*)single_instance_35_84_0))->alterables->values.set(3, ((Active*)get_instance(spacedreadnought_4149_instances))->get_y());
        ((Active*)((Active*)single_instance_35_84_0))->alterables->values.set(0, loop_s_index*8.1+randrange(30)*0.1);
        ((Active*)((Active*)single_instance_35_84_0))->alterables->values.set(1, 10+randrange(5)+loop_s_index*0.1);
        ((Active*)((Active*)single_instance_35_84_0))->alterables->values.set(4, 1+loop_s_index*0.02);
        ((Active*)((Active*)single_instance_35_84_0))->force_frame(randrange(10));
        ((Active*)((Active*)single_instance_35_84_0))->restore_frame();
        ((Active*)((Active*)single_instance_35_84_0))->force_speed(25+randrange(20));
    }
    event_35_84_end: ;
}
void Frames::loop_s_84()
{
    event_func_20594();
}
void Frames::loop_wrapper_sound_explode8_84(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_sound_explode3_84(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode2_84(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_84(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_sound_explode0_84(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_84(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_84(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_sound_explode5_84(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_84(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::event_func_20595()
{
    // event 45_84
    {
        if (!((((Active*)foreach_instance_smoke)->alterables->values.get(2)) > (0))) goto event_45_84_end;
        ((Active*)((Active*)foreach_instance_smoke))->alterables->values.sub(2, 1);
        FrameObject * single_instance_45_84_0; single_instance_45_84_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsdust01_332(((Active*)foreach_instance_smoke)->x + 0, ((Active*)foreach_instance_smoke)->y + 8), ((Active*)foreach_instance_smoke)->layer);
            if (single_instance_45_84_0 == NULL)
                single_instance_45_84_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_45_84_0))->set_angle(randrange(4)*90, 0);
        ((Active*)((Active*)single_instance_45_84_0))->set_direction(24);
        ((Active*)((Active*)single_instance_45_84_0))->force_speed(100);
        ((Active*)((Active*)single_instance_45_84_0))->get_movement()->set_speed(50);
    }
    event_45_84_end: ;
}
void Frames::foreach_smoke_84()
{
    event_func_20595();
}
void Frames::test_collisions_84()
{
    ObjectList::iterator it1, it2;
}
void Frames::event_func_20596()
{
    // event 3_84
    {
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_3_84_end;
        titlestar_50_instances.clear_selection();
        for (ObjectIterator it(titlestar_50_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+1)%math_helper%21);
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(0));
        }
    }
    event_3_84_end: ;
}
void Frames::event_func_20597()
{
    // event 4_84
    {
        // group: Cutscene events
        ((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.add(1, 1);
        ((SystemBox*)get_instance(space_4147_instances))->set_global_position(((SystemBox*)get_instance(space_4147_instances))->get_x(), ((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)*0.05);
    }
    event_4_84_end: ;
}
void Frames::event_func_20598()
{
    // event 5_84
    {
        // group: Cutscene events
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(0)) == (0))) goto event_5_84_end;
        if (once_condition_5_84) goto event_5_84_end;
        once_condition_5_84 = true;
        media.play_id(SOUND_DREADNOUGHT_FLAME_437, 25-1, 0);
        media.set_channel_volume(25-1, 0);
    }
    event_5_84_end: ;
}
void Frames::event_func_20599()
{
    // event 6_84
    {
        // group: Cutscene events
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(0)) == (0))) goto event_6_84_end;
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) < (820))) goto event_6_84_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(1));
        }
        media.set_channel_volume(25-1, get_min(media.get_channel_volume(-1 +25)+1, 50));
    }
    event_6_84_end: ;
}
void Frames::event_func_20600()
{
    // event 7_84
    {
        // group: Cutscene events
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) < (900))) goto event_7_84_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_7_84_end;
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_7_84_end: ;
}
void Frames::event_func_20601()
{
    // event 8_84
    {
        // group: Cutscene events
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_8_84_end;
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(0)) == (0))) goto event_8_84_end;
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) < (120))) goto event_8_84_end;
        ((Active*)get_instance(spacedreadnought_4149_instances))->set_y(((Active*)get_instance(spacedreadnought_4149_instances))->get_y()-1);
    }
    event_8_84_end: ;
}
void Frames::event_func_20602()
{
    // event 9_84
    {
        // group: Cutscene events
        if (!((global_values->get(3)%math_helper%10) == (0))) goto event_9_84_end;
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(0)) == (0))) goto event_9_84_end;
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) > (120))) goto event_9_84_end;
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) < (240))) goto event_9_84_end;
        ((Active*)get_instance(spacedreadnought_4149_instances))->set_y(((Active*)get_instance(spacedreadnought_4149_instances))->get_y()-1);
    }
    event_9_84_end: ;
}
void Frames::event_func_20603()
{
    // event 10_84
    {
        // group: Cutscene events
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(0)) == (0))) goto event_10_84_end;
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) == (120))) goto event_10_84_end;
        media.play_id(SOUND_SCENE_POWERDOWN_427, 24-1);
        media.set_channel_volume(24-1, 30);
    }
    event_10_84_end: ;
}
void Frames::event_func_20604()
{
    // event 11_84
    {
        // group: Cutscene events
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(0)) == (0))) goto event_11_84_end;
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) == (140))) goto event_11_84_end;
        liftoffjet_4150_instances.clear_selection();
        for (ObjectIterator it(liftoffjet_4150_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        media.stop_channel(25-1);
        for (ObjectIterator it(liftoffjet_4150_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 5);
        }
    }
    event_11_84_end: ;
}
