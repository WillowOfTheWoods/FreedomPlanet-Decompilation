#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_14696()
{
    // event 2036_68
    {
        if (!(group_main_engine_1)) goto event_2036_68_end;
        bossmserpflare_3556_instances.clear_selection();
        for (ObjectIterator it(bossmserpflare_3556_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (2))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-40)) { it.deselect(); continue; }
        }
        if (!bossmserpflare_3556_instances.has_selection()) goto event_2036_68_end;
        FrameObject * single_instance_2036_68_0; single_instance_2036_68_0 = pick_random(bossmserpflare_3556_instances);
        if (single_instance_2036_68_0 == NULL) goto event_2036_68_end;
        FrameObject * single_instance_2036_68_1; single_instance_2036_68_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(((Active*)single_instance_2036_68_0)->get_action_x() - ((Active*)single_instance_2036_68_0)->layer->off_x + 0, ((Active*)single_instance_2036_68_0)->get_action_y() - ((Active*)single_instance_2036_68_0)->layer->off_y + 0), ((Active*)single_instance_2036_68_0)->layer);
            if (single_instance_2036_68_1 == NULL)
                single_instance_2036_68_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_2036_68_1))->set_scale(0.5);
        ((Active*)((Active*)single_instance_2036_68_1))->set_x(((Active*)single_instance_2036_68_1)->get_x()-10+randrange(21));
        ((Active*)((Active*)single_instance_2036_68_1))->set_y(((Active*)single_instance_2036_68_1)->get_y()-10+randrange(21));
        ((Active*)((Active*)single_instance_2036_68_1))->move_back();
    }
    event_2036_68_end: ;
}
void Frames::event_func_14697()
{
    // event 2037_68
    {
        if (!(group_main_engine_1)) goto event_2037_68_end;
        bossmserpflare_3556_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(bossmserpflare_3556_instances, playercharactersensor_383_instances)) goto event_2037_68_end;
        for (ObjectIterator it(bossmserpflare_3556_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playercharactersensor_383_instances))->get_x()-16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playercharactersensor_383_instances))->get_x()+16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(playercharactersensor_383_instances))->get_y()-16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playercharactersensor_383_instances))->get_y()+16))) { it.deselect(); continue; }
        }
        if (!bossmserpflare_3556_instances.has_selection()) goto event_2037_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_2037_68_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_2037_68_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
    }
    event_2037_68_end: ;
}
void Frames::event_func_14698()
{
    // event 2039_68
    {
        if (!(group_main_engine_1)) goto event_2039_68_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(3)) == (149))) goto event_2039_68_end;
        if (once_condition_2039_68) goto event_2039_68_end;
        once_condition_2039_68 = true;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 54)) == (0))) goto event_2039_68_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25)) <= (540000))) goto event_2039_68_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 2, 54);
    }
    event_2039_68_end: ;
}
void Frames::event_func_14699()
{
    // event 2040_68
    {
        if (!(group_main_engine_1)) goto event_2040_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_2040_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_2040_68_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 15)), 2, 15);
    }
    event_2040_68_end: ;
}
void Frames::event_func_14700()
{
    // event 2041_68
    {
        if (!(group_main_engine_1)) goto event_2041_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_2041_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_2041_68_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 12)), 2, 12);
    }
    event_2041_68_end: ;
}
void Frames::event_func_14701()
{
    // event 2042_68
    {
        if (!(group_main_engine_1)) goto event_2042_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_2042_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (20))) goto event_2042_68_end;
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1073741824))) { it.deselect(); continue; }
        }
        if (!shieldinstashield_359_instances.has_selection()) goto event_2042_68_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 13)), 2, 13);
    }
    event_2042_68_end: ;
}
void Frames::event_func_14702()
{
    // event 2043_68
    {
        if (!(group_main_engine_1)) goto event_2043_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_2043_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (20))) goto event_2043_68_end;
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(16384))) { it.deselect(); continue; }
        }
        if (!shieldinstashield_359_instances.has_selection()) goto event_2043_68_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 13)), 2, 13);
    }
    event_2043_68_end: ;
}
void Frames::event_func_14703()
{
    // event 2044_68
    {
        if (!(group_main_engine_1)) goto event_2044_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_2044_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_2044_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (21))) goto event_2044_68_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 10)), 2, 10);
    }
    event_2044_68_end: ;
}
void Frames::event_func_14704()
{
    // event 2045_68
    {
        if (!(group_main_engine_1)) goto event_2045_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_2045_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_2045_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (26))) goto event_2045_68_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 11)), 2, 11);
    }
    event_2045_68_end: ;
}
void Frames::event_func_14705()
{
    // event 2046_68
    {
        if (!(group_main_engine_1)) goto event_2046_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_2046_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (44))) goto event_2046_68_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 14)), 2, 14);
    }
    event_2046_68_end: ;
}
void Frames::event_func_14706()
{
    // event 2208_68
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_2208_68_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) <= (0))) goto event_2208_68_end;
        if (!((global_values->get(4)) == (1))) goto event_2208_68_end;
        if (!((((Active*)get_instance(objecttransporterstart_3412_instances))->get_x()) < (0))) goto event_2208_68_end;
        ((Active*)get_instance(objecttransporterstart_3412_instances))->set_visible(false);
        ((Active*)get_instance(objecttransporterstart_3412_instances))->set_x(0);
    }
    event_2208_68_end: ;
}
void Frames::event_func_14707()
{
    // event 2263_68
    {
        if (!(group_main_engine_1)) goto event_2263_68_end;
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((SystemBox*)*it)->set_global_position(frame_left()+(int(((SystemBox*)*it)->alterables->values.get(9)-frame_left())%math_helper%((SystemBox*)*it)->alterables->values.get(0)), ((SystemBox*)*it)->alterables->values.get(10));
        }
        ((SystemBox*)get_instance(levelparallaxpiece7_3553_instances))->set_global_position(frame_left(), frame_top()-((SystemBox*)get_instance(levelparallaxpiece7_3553_instances))->height+(global_values->get(3)*8)%math_helper%(((SystemBox*)get_instance(levelparallaxpiece7_3553_instances))->height*2));
        ((SystemBox*)get_instance(levelparallaxpiece5_3552_instances))->set_global_position(frame_left()+global_values->get(16)-((SystemBox*)get_instance(levelparallaxpiece5_3552_instances))->width, frame_top()-((SystemBox*)get_instance(levelparallaxpiece5_3552_instances))->height+(global_values->get(3)*4)%math_helper%(((SystemBox*)get_instance(levelparallaxpiece5_3552_instances))->height*2));
        ((SystemBox*)get_instance(levelparallaxpiece9_3554_instances))->set_global_position(frame_left()+global_values->get(16)-((SystemBox*)get_instance(levelparallaxpiece9_3554_instances))->width, frame_top()-((SystemBox*)get_instance(levelparallaxpiece7_3553_instances))->height+((global_values->get(3)+50)*9)%math_helper%(((SystemBox*)get_instance(levelparallaxpiece7_3553_instances))->height*2));
    }
    event_2263_68_end: ;
}
void Frames::event_func_14708()
{
    // event 2264_68
    {
        if (!(group_pause_1)) goto event_2264_68_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_2264_68_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2264_68_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_2264_68_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_2264_68_end;
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
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
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
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        ((Active*)get_instance(bossmserprightclaw_3581_instances))->stop_animation();
        ((Active*)get_instance(bossmserpleftclaw_3586_instances))->stop_animation();
        bossburstshot_3557_instances.clear_selection();
        for (ObjectIterator it(bossburstshot_3557_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        effectfireball_3558_instances.clear_selection();
        for (ObjectIterator it(effectfireball_3558_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(effectwarning2_1864_instances))->stop_animation();
        bossmserplasersight_3563_instances.clear_selection();
        for (ObjectIterator it(bossmserplasersight_3563_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(objecttransporterstart_3412_instances))->stop_animation();
        for (ObjectIterator it(objecttransporter_3344_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        fdconsole1_3504_instances.clear_selection();
        for (ObjectIterator it(fdconsole1_3504_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        fdconsole2_3505_instances.clear_selection();
        for (ObjectIterator it(fdconsole2_3505_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(lockeddoorseal_2672_instances))->stop_animation();
        ((Active*)get_instance(lockeddoorterminal_2606_instances))->stop_animation();
        ((Active*)get_instance(lockedlabdoorfront_3544_instances))->stop_animation();
        ((Active*)get_instance(lockedlabdoorback_3506_instances))->stop_animation();
        labdoorfront_3507_instances.clear_selection();
        for (ObjectIterator it(labdoorfront_3507_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        labdoorback_3500_instances.clear_selection();
        for (ObjectIterator it(labdoorback_3500_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effecttubeshade_3503_instances.clear_selection();
        for (ObjectIterator it(effecttubeshade_3503_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyhomingbullet_2568_instances.clear_selection();
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(hazardspinmine_3326_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemybullet_2098_instances.clear_selection();
        for (ObjectIterator it(enemybullet_2098_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyslimeburst_652_instances.clear_selection();
        for (ObjectIterator it(enemyslimeburst_652_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemybuoybullet_2325_instances.clear_selection();
        for (ObjectIterator it(enemybuoybullet_2325_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemybuoybullet2_2326_instances.clear_selection();
        for (ObjectIterator it(enemybuoybullet2_2326_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        switchbuttonright_2714_instances.clear_selection();
        for (ObjectIterator it(switchbuttonright_2714_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        switchbuttonleft_2715_instances.clear_selection();
        for (ObjectIterator it(switchbuttonleft_2715_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(switchcorkscrewdoor_3536_instances))->stop_animation();
        ((Active*)get_instance(levelelectriccrusherbolt_3538_instances))->stop_animation();
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        ((Active*)get_instance(npcserpentine_947_instances))->stop_animation();
        hazardzapbeamcannon_3420_instances.clear_selection();
        for (ObjectIterator it(hazardzapbeamcannon_3420_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        hazardzapbeam_3388_instances.clear_selection();
        for (ObjectIterator it(hazardzapbeam_3388_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        switchbiglift1_3575_instances.clear_selection();
        for (ObjectIterator it(switchbiglift1_3575_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        switchbiglift2_3576_instances.clear_selection();
        for (ObjectIterator it(switchbiglift2_3576_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyfragbomb_2049_instances.clear_selection();
        for (ObjectIterator it(enemyfragbomb_2049_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_2264_68_end: ;
}
void Frames::event_func_14709()
{
    // event 2265_68
    bool or_result_2265_68 = false;
    bool or_temp_result_2265_68_0 = false;
    {
        if (!(group_pause_1)) goto or_event_2265_68_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_2265_68_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2265_68_0_end;
        or_result_2265_68 = true;
        or_temp_result_2265_68_0 = true;
    }
    or_event_2265_68_0_end: ;
    // event 2265_68
    bool or_temp_result_2265_68_1 = false;
    {
        if (!(group_pause_1)) goto or_event_2265_68_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_2265_68_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2265_68_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_2265_68_1_end;
        or_result_2265_68 = true;
        or_temp_result_2265_68_1 = true;
        or_event_2265_68_1_end: ;
        if (!or_result_2265_68) goto or_final_or_event_2265_68_1_end;
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
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
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
        ((Active*)get_instance(bossmserprightclaw_3581_instances))->start_animation();
        ((Active*)get_instance(bossmserpleftclaw_3586_instances))->start_animation();
        bossburstshot_3557_instances.clear_selection();
        for (ObjectIterator it(bossburstshot_3557_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        effectfireball_3558_instances.clear_selection();
        for (ObjectIterator it(effectfireball_3558_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(effectwarning2_1864_instances))->start_animation();
        bossmserplasersight_3563_instances.clear_selection();
        for (ObjectIterator it(bossmserplasersight_3563_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(objecttransporterstart_3412_instances))->start_animation();
        for (ObjectIterator it(objecttransporter_3344_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        fdconsole1_3504_instances.clear_selection();
        for (ObjectIterator it(fdconsole1_3504_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        fdconsole2_3505_instances.clear_selection();
        for (ObjectIterator it(fdconsole2_3505_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(lockeddoorseal_2672_instances))->start_animation();
        ((Active*)get_instance(lockeddoorterminal_2606_instances))->start_animation();
        ((Active*)get_instance(lockedlabdoorfront_3544_instances))->start_animation();
        ((Active*)get_instance(lockedlabdoorback_3506_instances))->start_animation();
        labdoorfront_3507_instances.clear_selection();
        for (ObjectIterator it(labdoorfront_3507_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        labdoorback_3500_instances.clear_selection();
        for (ObjectIterator it(labdoorback_3500_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effecttubeshade_3503_instances.clear_selection();
        for (ObjectIterator it(effecttubeshade_3503_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyhomingbullet_2568_instances.clear_selection();
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(hazardspinmine_3326_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemybullet_2098_instances.clear_selection();
        for (ObjectIterator it(enemybullet_2098_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyslimeburst_652_instances.clear_selection();
        for (ObjectIterator it(enemyslimeburst_652_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemybuoybullet_2325_instances.clear_selection();
        for (ObjectIterator it(enemybuoybullet_2325_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemybuoybullet2_2326_instances.clear_selection();
        for (ObjectIterator it(enemybuoybullet2_2326_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        switchbuttonright_2714_instances.clear_selection();
        for (ObjectIterator it(switchbuttonright_2714_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        switchbuttonleft_2715_instances.clear_selection();
        for (ObjectIterator it(switchbuttonleft_2715_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(switchcorkscrewdoor_3536_instances))->start_animation();
        ((Active*)get_instance(levelelectriccrusherbolt_3538_instances))->start_animation();
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        ((Active*)get_instance(npcserpentine_947_instances))->start_animation();
        hazardzapbeam_3388_instances.clear_selection();
        for (ObjectIterator it(hazardzapbeam_3388_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        hazardzapbeamcannon_3420_instances.clear_selection();
        for (ObjectIterator it(hazardzapbeamcannon_3420_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        switchbiglift1_3575_instances.clear_selection();
        for (ObjectIterator it(switchbiglift1_3575_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        switchbiglift2_3576_instances.clear_selection();
        for (ObjectIterator it(switchbiglift2_3576_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyfragbomb_2049_instances.clear_selection();
        for (ObjectIterator it(enemyfragbomb_2049_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_2265_68_1_end: ;
}
void Frames::event_func_14710()
{
    // event 2280_68
    {
        // group: Slowdown Effect
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) > (0))) goto event_2280_68_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(2)%math_helper%((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) != (0))) goto event_2280_68_end;
        if (not_always_2280_68 > loop_count) {
            not_always_2280_68 = loop_count + 2;
            goto event_2280_68_end;
        }
        not_always_2280_68 = loop_count + 2;
            group_main_engine_1 = false;
    
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
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
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
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bossmserprightclaw_3581_instances))->stop_animation();
        ((Active*)get_instance(bossmserpleftclaw_3586_instances))->stop_animation();
        bossburstshot_3557_instances.clear_selection();
        for (ObjectIterator it(bossburstshot_3557_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        effectfireball_3558_instances.clear_selection();
        for (ObjectIterator it(effectfireball_3558_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(effectwarning2_1864_instances))->stop_animation();
        bossmserplasersight_3563_instances.clear_selection();
        for (ObjectIterator it(bossmserplasersight_3563_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_2280_68_end: ;
}
void Frames::event_func_14711()
{
    // event 2281_68
    {
        // group: Slowdown Effect
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) > (0))) goto event_2281_68_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(2)%math_helper%((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) == (0))) goto event_2281_68_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2281_68_end;
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
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
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
        ((Active*)get_instance(bossmserprightclaw_3581_instances))->start_animation();
        ((Active*)get_instance(bossmserpleftclaw_3586_instances))->start_animation();
        bossburstshot_3557_instances.clear_selection();
        for (ObjectIterator it(bossburstshot_3557_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        effectfireball_3558_instances.clear_selection();
        for (ObjectIterator it(effectfireball_3558_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(effectwarning2_1864_instances))->start_animation();
        bossmserplasersight_3563_instances.clear_selection();
        for (ObjectIterator it(bossmserplasersight_3563_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    event_2281_68_end: ;
}
void Frames::handle_frame_69_events()
{
    test_collisions_68();
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
    event_func_3807();
    event_func_8732();
    event_func_8733();
    event_func_8741();
    event_func_14519();
    event_func_14521();
    event_func_2650();
    event_func_4187();
    event_func_4188();
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
    event_func_10753();
    event_func_1755();
    event_func_1756();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1758();
    event_func_1759();
    event_func_1760();
    event_func_14445();
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
    event_func_10755();
    event_func_1776();
    event_func_14446();
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
    event_func_14447();
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
    event_func_2924();
    event_func_2925();
    event_func_2926();
    event_func_2927();
    event_func_2928();
    event_func_2929();
    event_func_2930();
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
    event_func_14347();
    event_func_14348();
    if (!group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1) goto group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end;
    event_func_3737();
    event_func_3738();
    event_func_3739();
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end: ;
    event_func_14448();
    event_func_14449();
    event_func_14450();
    event_func_14451();
    event_func_14452();
    event_func_13976();
    event_func_14453();
    event_func_14454();
    event_func_14455();
    event_func_14456();
    event_func_14457();
    event_func_13982();
    event_func_13983();
    event_func_14458();
    event_func_13985();
    event_func_14350();
    event_func_14351();
    event_func_14352();
    event_func_14353();
    event_func_14459();
    event_func_14356();
    event_func_14357();
    event_func_14358();
    event_func_14359();
    event_func_14460();
    event_func_14461();
    event_func_14462();
    event_func_14463();
    event_func_14464();
    event_func_14465();
    event_func_14466();
    event_func_14467();
    event_func_14468();
    event_func_14469();
    event_func_14470();
    event_func_14471();
    event_func_14472();
    event_func_14473();
    event_func_14474();
    event_func_14475();
    event_func_14476();
    event_func_14477();
    event_func_14478();
    event_func_14479();
    event_func_14480();
    event_func_14481();
    event_func_14482();
    event_func_14483();
    event_func_14484();
    event_func_14485();
    event_func_14486();
    event_func_14487();
    event_func_14383();
    event_func_14488();
    event_func_14489();
    event_func_14490();
    event_func_14491();
    event_func_14008();
    event_func_14009();
    event_func_14010();
    event_func_14011();
    event_func_13986();
    event_func_13987();
    event_func_13988();
    event_func_13989();
    event_func_13990();
    event_func_13991();
    event_func_13992();
    event_func_13993();
    event_func_13994();
    event_func_13995();
    event_func_13996();
    event_func_13997();
    event_func_13998();
    event_func_13999();
    event_func_14000();
    event_func_14001();
    event_func_14002();
    event_func_14003();
    event_func_13233();
    event_func_13234();
    event_func_14492();
    event_func_14493();
    event_func_14494();
    event_func_14495();
    event_func_14496();
    event_func_14497();
    event_func_14498();
    event_func_14499();
    event_func_14500();
    event_func_14501();
    event_func_14502();
    event_func_14503();
    event_func_14504();
    event_func_14505();
    event_func_14506();
    event_func_14507();
    event_func_14508();
    event_func_14509();
    event_func_14510();
    event_func_14511();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_10124();
    event_func_10125();
    event_func_10126();
    event_func_10127();
    event_func_10128();
    event_func_10129();
    event_func_10130();
    event_func_10131();
    event_func_10132();
    event_func_10133();
    event_func_10134();
    event_func_10135();
    event_func_10136();
    event_func_10137();
    event_func_10138();
    event_func_10139();
    event_func_10140();
    event_func_10141();
    event_func_10142();
    event_func_10143();
    event_func_10144();
    event_func_10145();
    event_func_10146();
    event_func_10147();
    event_func_10148();
    event_func_10149();
    event_func_10150();
    event_func_10151();
    event_func_10152();
    event_func_10153();
    event_func_10154();
    event_func_10155();
    event_func_10156();
    event_func_10157();
    event_func_10158();
    event_func_10159();
    event_func_10160();
    event_func_10161();
    event_func_10162();
    event_func_10163();
    event_func_10164();
    event_func_10165();
    event_func_10166();
    event_func_10167();
    event_func_10168();
    event_func_10169();
    event_func_10170();
    event_func_10171();
    event_func_10172();
    event_func_10173();
    event_func_10174();
    event_func_10175();
    event_func_10176();
    event_func_10177();
    event_func_10178();
    event_func_10179();
    event_func_10180();
    event_func_10181();
    event_func_10182();
    event_func_10183();
    event_func_10184();
    event_func_10185();
    event_func_10186();
    event_func_10187();
    event_func_10188();
    event_func_10189();
    event_func_10190();
    event_func_10191();
    event_func_10192();
    event_func_10193();
    event_func_10193();
    event_func_10193();
    event_func_10194();
    event_func_10194();
    event_func_10194();
    event_func_10194();
    event_func_10195();
    event_func_10196();
    event_func_10197();
    event_func_10198();
    event_func_10199();
    event_func_10200();
    event_func_10201();
    event_func_10202();
    event_func_10203();
    event_func_14512();
    event_func_10205();
    event_func_10206();
    event_func_10207();
    event_func_10208();
    event_func_10209();
    event_func_10210();
    event_func_10211();
    event_func_10212();
    event_func_10213();
    event_func_10808();
    event_func_10809();
    event_func_14385();
    event_func_13478();
    event_func_13479();
    event_func_13480();
    event_func_13481();
    event_func_13482();
    event_func_13483();
    event_func_14386();
    event_func_11463();
    event_func_11464();
    event_func_11465();
    event_func_11466();
    event_func_11467();
    event_func_11468();
    event_func_11469();
    event_func_11470();
    event_func_11471();
    event_func_11472();
    event_func_11473();
    event_func_11474();
    event_func_11475();
    event_func_11476();
    event_func_11477();
    event_func_11478();
    event_func_11479();
    event_func_11480();
    event_func_14513();
    event_func_11482();
    event_func_3787();
    event_func_3788();
    event_func_3789();
    event_func_3790();
    event_func_3791();
    event_func_3792();
    event_func_3793();
    event_func_3794();
    event_func_3795();
    event_func_3796();
    event_func_3797();
    event_func_3798();
    event_func_3799();
    event_func_3800();
    event_func_3801();
    event_func_3802();
    event_func_3803();
    event_func_3804();
    event_func_3805();
    event_func_3806();
    event_func_8691();
    event_func_8692();
    event_func_8693();
    event_func_8694();
    event_func_8695();
    event_func_8696();
    event_func_8697();
    event_func_8698();
    event_func_8699();
    event_func_8700();
    event_func_8701();
    event_func_8702();
    event_func_8703();
    event_func_8704();
    event_func_9557();
    event_func_9558();
    event_func_9559();
    event_func_9560();
    event_func_9561();
    event_func_9562();
    event_func_9563();
    event_func_9564();
    event_func_9565();
    event_func_9566();
    event_func_9567();
    event_func_14514();
    event_func_9569();
    event_func_9570();
    event_func_9571();
    event_func_9572();
    event_func_9573();
    event_func_9574();
    event_func_9575();
    event_func_9576();
    event_func_8724();
    event_func_8725();
    event_func_8726();
    event_func_8727();
    event_func_8728();
    event_func_8729();
    event_func_8730();
    event_func_8731();
    event_func_14515();
    event_func_8735();
    event_func_8736();
    event_func_8737();
    event_func_8738();
    event_func_8739();
    event_func_8740();
    if (!group_main_engine_level_specific_methods_frame_transition_1) goto group_main_engine_level_specific_methods_frame_transition_1_end;
    event_func_7944();
    event_func_7945();
    event_func_7946();
    group_main_engine_level_specific_methods_frame_transition_1_end: ;
    if (!group_main_engine_level_specific_methods_stage_clear_1) goto group_main_engine_level_specific_methods_stage_clear_1_end;
    event_func_4197();
    event_func_14516();
    event_func_14517();
    event_func_14156();
    event_func_14518();
    event_func_14520();
    event_func_14522();
    event_func_4207();
    event_func_4208();
    event_func_4209();
    event_func_4210();
    event_func_4211();
    if (!group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1) goto group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1_end;
    event_func_4214();
    event_func_4215();
    event_func_4216();
    event_func_4217();
    event_func_4218();
    event_func_4219();
    event_func_4220();
    event_func_4221();
    event_func_4222();
    event_func_4223();
    event_func_4945();
    event_func_14523();
    group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1_end: ;
    group_main_engine_level_specific_methods_stage_clear_1_end: ;
    event_func_14391();
    event_func_14392();
    event_func_14393();
    event_func_14394();
    event_func_14395();
    event_func_14390();
    event_func_14396();
    event_func_14397();
    event_func_14398();
    event_func_14399();
    event_func_14400();
    event_func_14401();
    event_func_14402();
    event_func_3828();
    event_func_14524();
    event_func_14525();
    event_func_3830();
    event_func_3831();
    event_func_3832();
    event_func_3833();
    event_func_3834();
    event_func_3835();
    event_func_14526();
    event_func_3837();
    event_func_14527();
    event_func_4052();
    event_func_3838();
    event_func_14528();
    event_func_14529();
    event_func_14530();
    event_func_3843();
    event_func_14405();
    event_func_14406();
    event_func_14407();
    event_func_14408();
    event_func_14409();
    event_func_14410();
    event_func_14411();
    event_func_14412();
    event_func_14413();
    event_func_6082();
    event_func_2491();
    event_func_10851();
    event_func_10852();
    event_func_10853();
    event_func_11483();
    event_func_11484();
    event_func_14531();
    event_func_11486();
    event_func_11487();
    event_func_11488();
    event_func_11489();
    event_func_14532();
    event_func_14533();
    event_func_14534();
    if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) goto group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end;
    event_func_4173();
    event_func_4059();
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end: ;
    event_func_14535();
    event_func_14536();
    event_func_14537();
    event_func_14538();
    event_func_14539();
    event_func_14540();
    event_func_14541();
    event_func_14542();
    event_func_14543();
    event_func_14418();
    event_func_14544();
    event_func_14545();
    event_func_14546();
    event_func_14547();
    event_func_14548();
    event_func_14549();
    event_func_14550();
    event_func_14551();
    event_func_14552();
    event_func_14553();
    event_func_14554();
    event_func_14555();
    event_func_14556();
    event_func_14557();
    event_func_14558();
    event_func_14559();
    event_func_14560();
    event_func_14561();
    event_func_14562();
    event_func_14563();
    event_func_14564();
    event_func_14565();
    event_func_14566();
    event_func_14567();
    event_func_14568();
    event_func_14569();
    event_func_14570();
    event_func_14571();
    event_func_14572();
    event_func_14573();
    event_func_14574();
    event_func_14575();
    event_func_14576();
    event_func_14577();
    event_func_14578();
    if (!group_main_engine_level_specific_methods_cutscenes_brevon_laughs_1) goto group_main_engine_level_specific_methods_cutscenes_brevon_laughs_1_end;
    event_func_14579();
    group_main_engine_level_specific_methods_cutscenes_brevon_laughs_1_end: ;
    event_func_14580();
    event_func_14581();
    event_func_14582();
    if (!group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1) goto group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1_end;
    event_func_14583();
    if (!group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_animations_and_directions_1) goto group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_animations_and_directions_1_end;
    event_func_14584();
    event_func_14585();
    event_func_14586();
    event_func_14587();
    event_func_14588();
    event_func_14589();
    event_func_14590();
    event_func_14591();
    event_func_14592();
    event_func_14593();
    event_func_14594();
    event_func_14595();
    event_func_14596();
    event_func_14597();
    event_func_14598();
    event_func_14599();
    event_func_14600();
    event_func_14601();
    group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_animations_and_directions_1_end: ;
    event_func_14602();
    event_func_14603();
    event_func_14604();
    event_func_14605();
    event_func_14606();
    event_func_14607();
    event_func_14608();
    event_func_14609();
    event_func_14610();
    event_func_14611();
    event_func_14612();
    event_func_14613();
    event_func_14614();
    event_func_14615();
    event_func_14616();
    event_func_14617();
    event_func_14618();
    event_func_14619();
    event_func_14620();
    event_func_14621();
    event_func_14622();
    event_func_14623();
    event_func_14624();
    event_func_14625();
    event_func_14626();
    event_func_14627();
    event_func_14628();
    event_func_14629();
    event_func_14630();
    event_func_14631();
    event_func_14632();
    event_func_14633();
    event_func_14634();
    event_func_14635();
    event_func_14636();
    event_func_14637();
    event_func_14638();
    event_func_14639();
    event_func_14640();
    event_func_14641();
    event_func_14642();
    event_func_14643();
    event_func_14644();
    event_func_14645();
    event_func_14646();
    event_func_14647();
    event_func_14648();
    event_func_14649();
    event_func_14650();
    event_func_14651();
    event_func_14652();
    event_func_14653();
    event_func_14654();
    event_func_14655();
    event_func_14656();
    event_func_14657();
    event_func_14658();
    event_func_14659();
    event_func_14660();
    event_func_14661();
    event_func_14662();
    event_func_14663();
    event_func_14664();
    event_func_14665();
    event_func_14666();
    event_func_14667();
    group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1_end: ;
    event_func_14668();
    event_func_14669();
    event_func_14670();
    event_func_14671();
    event_func_14672();
    event_func_14673();
    event_func_14674();
    event_func_14675();
    event_func_14676();
    event_func_14677();
    event_func_14678();
    event_func_14679();
    event_func_14680();
    event_func_14681();
    event_func_14682();
    event_func_14683();
    event_func_14684();
    event_func_14685();
    event_func_14686();
    event_func_14687();
    event_func_14688();
    event_func_14689();
    event_func_14690();
    event_func_14691();
    event_func_14692();
    event_func_14693();
    event_func_14694();
    event_func_14695();
    event_func_14696();
    event_func_14697();
    event_func_14698();
    event_func_14699();
    event_func_14700();
    event_func_14701();
    event_func_14702();
    event_func_14703();
    event_func_14704();
    event_func_14705();
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
    event_func_14419();
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
    event_func_9621();
    event_func_3959();
    event_func_3960();
    event_func_3961();
    event_func_3962();
    event_func_3963();
    event_func_10929();
    event_func_14706();
    event_func_3965();
    group_main_engine_interface_and_post_processing_methods_titlecard_1_end: ;
    event_func_3944();
    event_func_3945();
    event_func_3946();
    event_func_3947();
    event_func_3948();
    event_func_3949();
    event_func_3950();
    event_func_3951();
    event_func_3952();
    event_func_4123();
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
    event_func_14421();
    event_func_3247();
    event_func_14707();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_14708();
    event_func_14709();
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
    event_func_4314();
    event_func_14710();
    event_func_14711();
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
void Frames::handle_frame_69_pre_events()
{
}
void Frames::event_func_14712()
{
    // event 1_68
    {
#ifdef CHOWDREN_WAIT
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->find_board(global_values->get(1), 11);
#endif
    }
    event_1_68_end: ;
}
void Frames::event_func_14713()
{
    // event 6_68
    {
        if (!(group_main_engine_1)) goto event_6_68_end;
        levelcardactclear1_847_instances.clear_selection();
        for (ObjectIterator it(levelcardactclear1_847_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+global_values->get(16)*0.5);
        }
        ((Active*)get_instance(levelcardactclear2_848_instances))->set_x(((Active*)get_instance(levelcardactclear2_848_instances))->get_x()+global_values->get(16)*0.5);
        ((Active*)get_instance(levelcardactclear3_849_instances))->set_x(((Active*)get_instance(levelcardactclear3_849_instances))->get_x()+global_values->get(16)*0.5);
        ((Active*)get_instance(levelcardactclear4_846_instances))->set_x(((Active*)get_instance(levelcardactclear4_846_instances))->get_x()+global_values->get(16)*0.5);
        ((Counter*)get_instance(levelcardbonus1_850_instances))->set_x(((Counter*)get_instance(levelcardbonus1_850_instances))->get_x()+global_values->get(16)*0.5);
        ((Counter*)get_instance(levelcardbonus2_851_instances))->set_x(((Counter*)get_instance(levelcardbonus2_851_instances))->get_x()+global_values->get(16)*0.5);
        ((Counter*)get_instance(levelcardbonus3_852_instances))->set_x(((Counter*)get_instance(levelcardbonus3_852_instances))->get_x()+global_values->get(16)*0.5);
        ((Counter*)get_instance(totalbonus_853_instances))->set_x(((Counter*)get_instance(totalbonus_853_instances))->get_x()+global_values->get(16)*0.5);
        ((Counter*)get_instance(totalcrystals_854_instances))->set_x(((Counter*)get_instance(totalcrystals_854_instances))->get_x()+global_values->get(16)*0.5);
    }
    event_6_68_end: ;
}
void Frames::event_func_14714()
{
    // event 7_68
    {
        if (!(group_main_engine_1)) goto event_7_68_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 4800);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 51);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
    }
    event_7_68_end: ;
}
void Frames::event_func_14715()
{
    // event 23_68
    {
        if (!(group_main_engine_1)) goto event_23_68_end;
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(0, ((SystemBox*)*it)->width);
            ((SystemBox*)*it)->alterables->values.set(1, ((SystemBox*)*it)->height);
            ((SystemBox*)*it)->alterables->values.set(2, ((SystemBox*)*it)->get_y());
            ((SystemBox*)*it)->alterables->values.set(7, (frame_right()-frame_left())+1);
            ((SystemBox*)*it)->alterables->values.set(8, (frame_bottom()-frame_top())+1);
        }
        ((SystemBox*)get_instance(levelparallaxpiece7_3553_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece5_3552_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece9_3554_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->set_visible(false);
    }
    event_23_68_end: ;
}
void Frames::event_func_14716()
{
    // event 24_68
    {
        if (!(group_main_engine_1)) goto event_24_68_end;
        ((SystemBox*)get_instance(levelparallaxpiece10_765_instances))->alterables->values.set(3, 0.3);
        ((SystemBox*)get_instance(levelparallaxpiece10_765_instances))->alterables->values.set(4, 0.3);
        ((SystemBox*)get_instance(levelparallaxpiece1_466_instances))->alterables->values.set(3, 0.6);
        ((SystemBox*)get_instance(levelparallaxpiece1_466_instances))->alterables->values.set(4, 0.6);
        ((SystemBox*)get_instance(levelparallaxpiece8_762_instances))->alterables->values.set(3, 0.45);
        ((SystemBox*)get_instance(levelparallaxpiece8_762_instances))->alterables->values.set(4, 0.45);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(3, 0.6);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(4, 0.6);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(3, 0.6);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(4, 0.6);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(3, 1);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(4, 1);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(3, 1);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(4, 1);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(6, -1);
    }
    event_24_68_end: ;
}
void Frames::event_func_14717()
{
    // event 1445_68
    {
        if (!(group_main_engine_1)) goto event_1445_68_end;
        fdrotatingbarrier_3573_instances.clear_selection();
        spread_value(fdrotatingbarrier_3573_instances, 0, 0);
        for (ObjectIterator it(fdrotatingbarrier_3573_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(0)*180)%math_helper%360);
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)*180)%math_helper%360);
        }
    }
    event_1445_68_end: ;
}
void Frames::event_func_14718()
{
    // event 1457_68
    {
        if (!(group_main_engine_1)) goto event_1457_68_end;
        corkscrewdoor_3537_instances.clear_selection();
        spread_value(corkscrewdoor_3537_instances, 0, 0);
        switchcorkscrewdoor_3536_instances.clear_selection();
        spread_value(switchcorkscrewdoor_3536_instances, 0, 0);
        ((Active*)get_instance(corkscrewdoor_3537_instances))->alterables->values.set(1, ((Active*)get_instance(corkscrewdoor_3537_instances))->get_x());
    }
    event_1457_68_end: ;
}
void Frames::event_func_14719()
{
    // event 1471_68
    {
        if (!(group_main_engine_1)) goto event_1471_68_end;
        levelelectriccrusher_3540_instances.clear_selection();
        spread_value(levelelectriccrusher_3540_instances, 4, 0);
        ((Active*)get_instance(levelelectriccrusher_3540_instances))->alterables->values.set(4, ((Active*)get_instance(levelelectriccrusher_3540_instances))->alterables->values.get(4)*45);
    }
    event_1471_68_end: ;
}
void Frames::event_func_14720()
{
    // event 1504_68
    {
        if (!(group_main_engine_1)) goto event_1504_68_end;
        hazardspinmine_3326_instances.clear_selection();
        for (ObjectIterator it(hazardspinmine_3326_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_y());
        }
        spread_value(hazardspinmine_3326_instances, 4, 0);
        for (ObjectIterator it(hazardspinmine_3326_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)*30);
            ((Active*)*it)->alterables->flags.enable(5);
            ((Active*)*it)->alterables->values.set(5, 8);
        }
    }
    event_1504_68_end: ;
}
void Frames::event_func_14721()
{
    // event 1507_68
    {
        if (!(group_main_engine_1)) goto event_1507_68_end;
        objectbiglift_3574_instances.clear_selection();
        for (ObjectIterator it(objectbiglift_3574_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, ((Active*)*it)->get_y());
        }
    }
    event_1507_68_end: ;
}
void Frames::event_func_14722()
{
    // event 1815_68
    {
        if (!(group_main_engine_1)) goto event_1815_68_end;
        if (!((global_values->get(12)) < (2))) goto event_1815_68_end;
        bubblepatch_806_instances.clear_selection();
        for (ObjectIterator it(bubblepatch_806_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1815_68_end: ;
}
void Frames::event_func_14723()
{
    // event 1844_68
    {
        if (!(group_main_engine_1)) goto event_1844_68_end;
        if (!((global_values->get(4)) >= (0))) goto event_1844_68_end;
        if (!((global_values->get(4)) < (4))) goto event_1844_68_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unlock_music_82);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
        }
    }
    event_1844_68_end: ;
}
void Frames::event_func_14724()
{
    // event 1845_68
    {
        if (!(group_main_engine_1)) goto event_1845_68_end;
        if (!((global_values->get(4)) == (4))) goto event_1845_68_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(4)+str_0_1_123);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1845_68_end: ;
}
void Frames::event_func_14725()
{
    // event 1880_68
    {
        if (!(group_main_engine_1)) goto event_1880_68_end;
        basementlight_1269_instances.clear_selection();
        for (ObjectIterator it(basementlight_1269_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(10);
        }
        effecttubeshade_3503_instances.clear_selection();
        for (ObjectIterator it(effecttubeshade_3503_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_y());
        }
        spread_value(effecttubeshade_3503_instances, 1, 0);
        for (ObjectIterator it(effecttubeshade_3503_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)*90)%math_helper%360);
        }
        for (ObjectIterator it(basementlight_1269_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1880_68_end: ;
}
void Frames::event_func_14726()
{
    // event 1884_68
    {
        if (!(group_main_engine_1)) goto event_1884_68_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(16);
        ((Active*)get_instance(npcserpentine_947_instances))->set_direction(16);
        ((Active*)get_instance(npcserpentine_947_instances))->set_visible(true);
        ((Active*)get_instance(bossenergypunch_3587_instances))->set_direction(0);
        ((Active*)get_instance(bossenergypunch_3587_instances))->set_angle(270, 0);
        ((Active*)get_instance(bossenergypunch_3587_instances))->set_visible(true);
        ((Active*)get_instance(bossenergypunch_3587_instances))->set_scale(2);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
    }
    event_1884_68_end: ;
}
void Frames::event_func_14727()
{
    // event 1922_68
    {
        if (!(group_main_engine_1)) goto event_1922_68_end;
        bossmserptail_3579_instances.clear_selection();
        spread_value(bossmserptail_3579_instances, 0, 0);
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(7, ((Active*)get_instance(bossmserptorso_3582_instances))->get_x());
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(8, ((Active*)get_instance(bossmserptorso_3582_instances))->get_y());
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(17, ((Active*)get_instance(bossmserptorso_3582_instances))->get_y());
        bossmserplasersight_3563_instances.clear_selection();
        spread_value(bossmserplasersight_3563_instances, 0, 0);
        for (ObjectIterator it(bossmserplasersight_3563_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(300);
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)*2-3);
        }
    }
    event_1922_68_end: ;
}
void Frames::on_frame_69_start_events()
{
    event_func_14712();
    event_func_4133();
    event_func_14091();
    event_func_14713();
    event_func_14714();
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
    event_func_14715();
    event_func_14716();
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
    event_func_3271();
    event_func_2685();
    event_func_3273();
    event_func_3986();
    event_func_3987();
    event_func_14426();
    event_func_14717();
    event_func_14718();
    event_func_14719();
    event_func_14094();
    event_func_14720();
    event_func_14721();
    event_func_10707();
    event_func_13539();
    event_func_14430();
    event_func_11501();
    event_func_9074();
    event_func_14722();
    event_func_2686();
    event_func_14723();
    event_func_14724();
    event_func_14431();
    event_func_14725();
    event_func_14726();
    event_func_14727();
    event_func_3277();
    event_func_2690();
    event_func_2691();
    event_func_14433();
    event_func_11073();
    event_func_5573();
    event_func_4143();
    event_func_11365();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_69_init()
{
    index = 68;
    width = 8384;
    height = 5888;
    virtual_width = 8384;
    virtual_height = 5888;
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
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &fdplatform_3542_instances, NULL};
    qualifier_8.set(10, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &hazardspikesup_558_instances, &fdplatform_3542_instances, NULL};
    qualifier_9.set(33, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemyslime_741_instances, &enemyhoppermkii_2200_instances, &enemyaxleturret_2201_instances, &enemybuoybuoy_2418_instances, &enemyelitemask_2511_instances, &enemytankbot_2821_instances, &hazardspinmine_3326_instances, &bossmserphead_3585_instances, NULL};
    qualifier_20.set(8, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece1_2_instances, &levelparallaxpiece0_465_instances, &levelparallaxpiece1_466_instances, &levelparallaxpiece3_468_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece8_762_instances, &levelparallaxpiece10_765_instances, NULL};
    qualifier_0.set(7, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &hazardspikesup_558_instances, &objecttransporter_3344_instances, &corkscrewdoor_3537_instances, &levelelectriccrusher_3540_instances, &lockedlabdoorbarrier_3541_instances, &fdrotatingbarrier_3573_instances, &objectbiglift_3574_instances, NULL};
    qualifier_7.set(32, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_4.set(34, &qualifier_4_instances[0]);
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
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &levelelectriccrusher_3540_instances, &objectbiglift_3574_instances, NULL};
    qualifier_13.set(3, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0_3546(736, 0), 0);
    add_background_object(create_levelparallaxpiece1_3198(736, 0), 0);
    add_background_object(create_levelparallaxpiece1_3547(116, 0), 0);
    add_background_object(create_levelparallaxpiece3_3548(120, 0), 0);
    add_background_object(create_levelparallaxpiece2_3549(120, 0), 0);
    add_background_object(create_levelparallaxpiece8_3550(56, 0), 0);
    add_background_object(create_levelparallaxpiece10_3551(0, 0), 0);
    add_background_object(create_levelparallaxpiece5_3552(944, 0), 0);
    add_background_object(create_levelparallaxpiece7_3553(736, 0), 0);
    add_background_object(create_levelparallaxpiece9_3554(880, 0), 0);
    add_background_object(create_fdlabback1_3484(6336, 1824), 2);
    add_background_object(create_fdlabback1_3484(6016, 1824), 2);
    add_background_object(create_fdlabback19_3559(6112, 2560), 2);
    add_background_object(create_fdlabback19_3559(6336, 2560), 2);
    add_background_object(create_fdlabback1_3484(5824, 5472), 2);
    add_background_object(create_fdlabback1_3484(5952, 5472), 2);
    add_background_object(create_fdlabback1_3484(4512, 5696), 2);
    add_background_object(create_fdlabback1_3484(4384, 5440), 2);
    add_background_object(create_fdlabback1_3484(4256, 5440), 2);
    add_background_object(create_fdlabback1_3484(4128, 5440), 2);
    add_background_object(create_fdlabback1_3484(4000, 5440), 2);
    add_background_object(create_fdlabback1_3484(3872, 5440), 2);
    add_background_object(create_fdlabback1_3484(3744, 5440), 2);
    add_background_object(create_fdlabback12_3482(5024, 5184), 2);
    add_background_object(create_fdlabback12_3482(3904, 5056), 2);
    add_background_object(create_fdlabback12_3482(4032, 5056), 2);
    add_background_object(create_fdlabback12_3482(4160, 5056), 2);
    add_background_object(create_fdlabback14_3496(1312, 5664), 2);
    add_background_object(create_fdlabback12_3482(1376, 5696), 2);
    add_background_object(create_fdlabback12_3482(1248, 5696), 2);
    add_background_object(create_fdlabback12_3482(736, 4960), 2);
    add_background_object(create_fdlabback12_3482(608, 4960), 2);
    add_background_object(create_fdlabback12_3482(480, 4960), 2);
    add_background_object(create_fdlabback16_3560(-400, 1712), 2);
    add_background_object(create_fdlabback12_3482(0, 4800), 2);
    add_background_object(create_fdlabback13_3497(128, 4832), 2);
    add_background_object(create_fdlabback13_3497(128, 4896), 2);
    add_background_object(create_fdlabback13_3497(320, 4832), 2);
    add_background_object(create_fdlabback13_3497(320, 4896), 2);
    add_background_object(create_fdlabback12_3482(352, 4800), 2);
    add_background_object(create_fdlabback12_3482(480, 4800), 2);
    add_background_object(create_fdlabback12_3482(608, 4800), 2);
    add_background_object(create_fdlabback12_3482(736, 4800), 2);
    add_background_object(create_fdlabback12_3482(864, 4800), 2);
    add_background_object(create_fdlabback12_3482(864, 4960), 2);
    add_background_object(create_fdlabback14_3496(544, 5120), 2);
    add_background_object(create_fdlabback17_3561(864, 4872), 2);
    add_background_object(create_fdlabback18_3562(800, 5032), 2);
    add_background_object(create_fdlabback18_3562(416, 4872), 2);
    add_background_object(create_fdlabback14_3496(544, 5312), 2);
    add_background_object(create_fdlabback14_3496(544, 5184), 2);
    add_background_object(create_fdlabback14_3496(544, 5248), 2);
    add_background_object(create_fdlabback13_3497(640, 5408), 2);
    add_background_object(create_fdlabback13_3497(640, 5344), 2);
    add_background_object(create_fdlabback12_3482(672, 5440), 2);
    add_background_object(create_fdlabback12_3482(800, 5440), 2);
    add_background_object(create_fdlabback12_3482(928, 5440), 2);
    add_background_object(create_fdlabback12_3482(1056, 5440), 2);
    add_background_object(create_fdlabback16_3560(672, 5280), 2);
    add_background_object(create_fdlabback16_3560(800, 5280), 2);
    add_background_object(create_fdlabback16_3560(928, 5280), 2);
    add_background_object(create_fdlabback16_3560(1056, 5280), 2);
    add_background_object(create_fdlabback17_3561(768, 5400), 2);
    add_background_object(create_fdlabback17_3561(896, 5400), 2);
    add_background_object(create_fdlabback17_3561(1024, 5400), 2);
    add_background_object(create_fdlabback13_3497(1184, 5536), 2);
    add_background_object(create_fdlabback13_3497(1184, 5472), 2);
    add_background_object(create_fdlabback13_3497(1184, 5408), 2);
    add_background_object(create_fdlabback16_3560(832, 5600), 2);
    add_background_object(create_fdlabback13_3497(1248, 5600), 2);
    add_background_object(create_fdlabback13_3497(1248, 5536), 2);
    add_background_object(create_fdlabback13_3497(1248, 5472), 2);
    add_background_object(create_fdlabback13_3497(1312, 5664), 2);
    add_background_object(create_fdlabback13_3497(1312, 5600), 2);
    add_background_object(create_fdlabback13_3497(1312, 5536), 2);
    add_background_object(create_fdlabback12_3482(864, 5696), 2);
    add_background_object(create_fdlabback12_3482(992, 5696), 2);
    add_background_object(create_fdlabback12_3482(1120, 5696), 2);
    add_background_object(create_fdlabback12_3482(1504, 5696), 2);
    add_background_object(create_fdlabback14_3496(1568, 5664), 2);
    add_background_object(create_fdlabback14_3496(1504, 5664), 2);
    add_background_object(create_fdlabback14_3496(1440, 5664), 2);
    add_background_object(create_fdlabback14_3496(1376, 5664), 2);
    add_background_object(create_fdlabback14_3496(1248, 5664), 2);
    add_background_object(create_fdlabback12_3482(1632, 5696), 2);
    add_background_object(create_fdlabback14_3496(1696, 5664), 2);
    add_background_object(create_fdlabback14_3496(1632, 5664), 2);
    add_background_object(create_fdlabback12_3482(1760, 5696), 2);
    add_background_object(create_fdlabback14_3496(1760, 5664), 2);
    add_background_object(create_fdlabback12_3482(1824, 5312), 2);
    add_background_object(create_fdlabback12_3482(1952, 5312), 2);
    add_background_object(create_fdlabback12_3482(1696, 5312), 2);
    add_background_object(create_fdlabback14_3496(1696, 5472), 2);
    add_background_object(create_fdlabback14_3496(1760, 5472), 2);
    add_background_object(create_fdlabback14_3496(2016, 5472), 2);
    add_background_object(create_fdlabback12_3482(2016, 5696), 2);
    add_background_object(create_fdlabback14_3496(2016, 5664), 2);
    add_background_object(create_fdlabback14_3496(2080, 5664), 2);
    add_background_object(create_fdlabback12_3482(2144, 5696), 2);
    add_background_object(create_fdlabback12_3482(2272, 5696), 2);
    add_background_object(create_fdlabback14_3496(2144, 5664), 2);
    add_background_object(create_fdlabback14_3496(2208, 5664), 2);
    add_background_object(create_fdlabback14_3496(2272, 5664), 2);
    add_background_object(create_fdlabback12_3482(2272, 5312), 2);
    add_background_object(create_fdlabback12_3482(2400, 5312), 2);
    add_background_object(create_fdlabback12_3482(2528, 5312), 2);
    add_background_object(create_fdlabback12_3482(1952, 5056), 2);
    add_background_object(create_fdlabback12_3482(2080, 5056), 2);
    add_background_object(create_fdlabback12_3482(2208, 5056), 2);
    add_background_object(create_fdlabback12_3482(2336, 5056), 2);
    add_background_object(create_fdlabback14_3496(2272, 5472), 2);
    add_background_object(create_fdlabback12_3482(2464, 5056), 2);
    add_background_object(create_fdlabback14_3496(2016, 5216), 2);
    add_background_object(create_fdlabback14_3496(1952, 5216), 2);
    add_background_object(create_fdlabback14_3496(2016, 5280), 2);
    add_background_object(create_fdlabback14_3496(1952, 5280), 2);
    add_background_object(create_fdlabback14_3496(2464, 5280), 2);
    add_background_object(create_fdlabback14_3496(2400, 5280), 2);
    add_background_object(create_fdlabback14_3496(2464, 5216), 2);
    add_background_object(create_fdlabback14_3496(2400, 5216), 2);
    add_background_object(create_fdlabback14_3496(2016, 5024), 2);
    add_background_object(create_fdlabback14_3496(1952, 5024), 2);
    add_background_object(create_fdlabback14_3496(2144, 5024), 2);
    add_background_object(create_fdlabback14_3496(2080, 5024), 2);
    add_background_object(create_fdlabback14_3496(2272, 5024), 2);
    add_background_object(create_fdlabback14_3496(2208, 5024), 2);
    add_background_object(create_fdlabback14_3496(2400, 5024), 2);
    add_background_object(create_fdlabback14_3496(2336, 5024), 2);
    add_background_object(create_fdlabback14_3496(2464, 5024), 2);
    add_background_object(create_fdlabback12_3482(2208, 5504), 2);
    add_background_object(create_fdlabback12_3482(2016, 5504), 2);
    add_background_object(create_fdtesttube_3488(2144, 5088), 2);
    add_background_object(create_fdtesttube_3488(2272, 5088), 2);
    add_background_object(create_fdlabback12_3482(2656, 5312), 2);
    add_background_object(create_fdlabback13_3497(2496, 5536), 2);
    add_background_object(create_fdlabback13_3497(2496, 5600), 2);
    add_background_object(create_fdlabback13_3497(2496, 5664), 2);
    add_background_object(create_fdlabback13_3497(2496, 5728), 2);
    add_background_object(create_fdlabback13_3497(2496, 5792), 2);
    add_background_object(create_fdlabback13_3497(2400, 5536), 2);
    add_background_object(create_fdlabback13_3497(2400, 5600), 2);
    add_background_object(create_fdlabback13_3497(2400, 5664), 2);
    add_background_object(create_fdlabback13_3497(2400, 5728), 2);
    add_background_object(create_fdlabback13_3497(2400, 5792), 2);
    add_background_object(create_fdlabback12_3482(2528, 5696), 2);
    add_background_object(create_fdlabback12_3482(2656, 5696), 2);
    add_background_object(create_fdlabback12_3482(2784, 5696), 2);
    add_background_object(create_fdlabback12_3482(2912, 5696), 2);
    add_background_object(create_fdlabback12_3482(3040, 5696), 2);
    add_background_object(create_fdlabback14_3496(2528, 5664), 2);
    add_background_object(create_fdlabback14_3496(2592, 5664), 2);
    add_background_object(create_fdlabback14_3496(2656, 5472), 2);
    add_background_object(create_fdlabback14_3496(2720, 5472), 2);
    add_background_object(create_fdlabback12_3482(2528, 5504), 2);
    add_background_object(create_fdlabback12_3482(2656, 5504), 2);
    add_background_object(create_fdtesttube_3488(1536, 5728), 2);
    add_background_object(create_fdtesttube_3488(1664, 5728), 2);
    add_background_object(create_fdtesttube_3488(1600, 5728), 2);
    add_background_object(create_fdtesttube_3488(1472, 5728), 2);
    add_background_object(create_fdtesttube_3488(2208, 5088), 2);
    add_background_object(create_fdlabback12_3482(3040, 5440), 2);
    add_background_object(create_fdlabback12_3482(2912, 5440), 2);
    add_background_object(create_fdlabback12_3482(3168, 5440), 2);
    add_background_object(create_fdlabback12_3482(3296, 5440), 2);
    add_background_object(create_fdlabback12_3482(3168, 5696), 2);
    add_background_object(create_fdlabback12_3482(3296, 5696), 2);
    add_background_object(create_fdlabback12_3482(3424, 5440), 2);
    add_background_object(create_fdlabback12_3482(3424, 5696), 2);
    add_background_object(create_fdlabback14_3496(3296, 5600), 2);
    add_background_object(create_fdlabback14_3496(3360, 5600), 2);
    add_background_object(create_fdlabback14_3496(3424, 5600), 2);
    add_background_object(create_fdlabback14_3496(2976, 5600), 2);
    add_background_object(create_fdlabback14_3496(3040, 5600), 2);
    add_background_object(create_fdlabback14_3496(2976, 5664), 2);
    add_background_object(create_fdlabback14_3496(3040, 5664), 2);
    add_background_object(create_fdlabback14_3496(3296, 5664), 2);
    add_background_object(create_fdlabback14_3496(3360, 5664), 2);
    add_background_object(create_fdlabback14_3496(3424, 5664), 2);
    add_background_object(create_fdlabback16_3560(2944, 5280), 2);
    add_background_object(create_fdlabback16_3560(3072, 5280), 2);
    add_background_object(create_fdlabback13_3497(3200, 5280), 2);
    add_background_object(create_fdlabback13_3497(3200, 5216), 2);
    add_background_object(create_fdlabback16_3560(3232, 5184), 2);
    add_background_object(create_fdlabback14_3496(3296, 5152), 2);
    add_background_object(create_fdlabback13_3497(3360, 5152), 2);
    add_background_object(create_fdlabback13_3497(3360, 5216), 2);
    add_background_object(create_fdlabback12_3482(3392, 5056), 2);
    add_background_object(create_fdlabback12_3482(3520, 5056), 2);
    add_background_object(create_fdlabback12_3482(3648, 5056), 2);
    add_background_object(create_fdlabback12_3482(3776, 5056), 2);
    add_background_object(create_fdlabback14_3496(3680, 5024), 2);
    add_background_object(create_fdlabback14_3496(3744, 5024), 2);
    add_background_object(create_fdlabback14_3496(3808, 5024), 2);
    add_background_object(create_fdtesttube_3488(3808, 5088), 2);
    add_background_object(create_fdtesttube_3488(3936, 5088), 2);
    add_background_object(create_fdtesttube_3488(4064, 5088), 2);
    add_background_object(create_fdlabback14_3496(3872, 5024), 2);
    add_background_object(create_fdlabback14_3496(3936, 5024), 2);
    add_background_object(create_fdlabback14_3496(4000, 5024), 2);
    add_background_object(create_fdlabback14_3496(4064, 5024), 2);
    add_background_object(create_fdtesttube_3488(4192, 5088), 2);
    add_background_object(create_fdemptyelitesuit_3495(3880, 5136), 2);
    add_background_object(create_fdemptyelitesuit_3495(4008, 5136), 2);
    add_background_object(create_fdemptyelitesuit_3495(4136, 5136), 2);
    add_background_object(create_fdlabback14_3496(4128, 5024), 2);
    add_background_object(create_fdlabback14_3496(4192, 5024), 2);
    add_background_object(create_fdlabback17_3561(3736, 5136), 2);
    add_background_object(create_fdlabback17_3561(3520, 5136), 2);
    add_background_object(create_fdlabback12_3482(4288, 5056), 2);
    add_background_object(create_fdlabback14_3496(4256, 5024), 2);
    add_background_object(create_fdlabback14_3496(4320, 5024), 2);
    add_background_object(create_fdlabback12_3482(4416, 5056), 2);
    add_background_object(create_fdlabback12_3482(4544, 5056), 2);
    add_background_object(create_fdlabback12_3482(4672, 5056), 2);
    add_background_object(create_fdlabback12_3482(4800, 5056), 2);
    add_background_object(create_fdlabback12_3482(4928, 5056), 2);
    add_background_object(create_fdlabback12_3482(5056, 5056), 2);
    add_background_object(create_fdlabback12_3482(4832, 4864), 2);
    add_background_object(create_fdlabback12_3482(4960, 4864), 2);
    add_background_object(create_fdlabback14_3496(5024, 5024), 2);
    add_background_object(create_fdlabback13_3497(4800, 4960), 2);
    add_background_object(create_fdlabback18_3562(4736, 5128), 2);
    add_background_object(create_fdlabback17_3561(4832, 4944), 2);
    add_background_object(create_fdlabback14_3496(4576, 5216), 2);
    add_background_object(create_fdlabback14_3496(4640, 5216), 2);
    add_background_object(create_fdlabback14_3496(4704, 5216), 2);
    add_background_object(create_fdlabback14_3496(4768, 5216), 2);
    add_background_object(create_fdlabback14_3496(4832, 5216), 2);
    add_background_object(create_fdlabback13_3497(4992, 5280), 2);
    add_background_object(create_fdlabback14_3496(5088, 5344), 2);
    add_background_object(create_fdlabback12_3482(5024, 5440), 2);
    add_background_object(create_fdlabback12_3482(4896, 5440), 2);
    add_background_object(create_fdlabback12_3482(4768, 5440), 2);
    add_background_object(create_fdlabback12_3482(4640, 5440), 2);
    add_background_object(create_fdlabback12_3482(4512, 5440), 2);
    add_background_object(create_fdlabback14_3496(5088, 5408), 2);
    add_background_object(create_fdlabback14_3496(4832, 5408), 2);
    add_background_object(create_fdlabback14_3496(4768, 5408), 2);
    add_background_object(create_fdlabback14_3496(4704, 5408), 2);
    add_background_object(create_fdlabback14_3496(4640, 5408), 2);
    add_background_object(create_fdlabback14_3496(4576, 5408), 2);
    add_background_object(create_fdlabback17_3561(4272, 5136), 2);
    add_background_object(create_fdlabback12_3482(4768, 5248), 2);
    add_background_object(create_fdlabback12_3482(4640, 5248), 2);
    add_background_object(create_fdlabback12_3482(4512, 5248), 2);
    add_background_object(create_fdlabback17_3561(2080, 5680), 2);
    add_background_object(create_fdlabback17_3561(2216, 5680), 2);
    add_background_object(create_fdlabback14_3496(3808, 5408), 2);
    add_background_object(create_fdlabback13_3497(4480, 5536), 2);
    add_background_object(create_fdlabback13_3497(4480, 5472), 2);
    add_background_object(create_fdlabback3_3487(4320, 5408), 2);
    add_background_object(create_fdlabback3_3487(4256, 5408), 2);
    add_background_object(create_fdlabback3_3487(4192, 5408), 2);
    add_background_object(create_fdlabback3_3487(4128, 5408), 2);
    add_background_object(create_fdlabback3_3487(4064, 5408), 2);
    add_background_object(create_fdlabback3_3487(4000, 5408), 2);
    add_background_object(create_fdlabback3_3487(3936, 5408), 2);
    add_background_object(create_fdlabback3_3487(3872, 5408), 2);
    add_background_object(create_fdlabback3_3487(3808, 5600), 2);
    add_background_object(create_fdlabback3_3487(4448, 5664), 2);
    add_background_object(create_fdlabback3_3487(4384, 5664), 2);
    add_background_object(create_fdlabback3_3487(4320, 5664), 2);
    add_background_object(create_fdlabback3_3487(4256, 5664), 2);
    add_background_object(create_fdlabback3_3487(4192, 5664), 2);
    add_background_object(create_fdlabback3_3487(4128, 5664), 2);
    add_background_object(create_fdlabback3_3487(4064, 5664), 2);
    add_background_object(create_fdlabback3_3487(4000, 5664), 2);
    add_background_object(create_fdlabback3_3487(3936, 5664), 2);
    add_background_object(create_fdlabback3_3487(3872, 5664), 2);
    add_background_object(create_fdlabback3_3487(3808, 5664), 2);
    add_background_object(create_fdlabback3_3487(4608, 5664), 2);
    add_background_object(create_fdlabback3_3487(4544, 5664), 2);
    add_background_object(create_fdlabback2_3486(4512, 5664), 2);
    add_background_object(create_fdlabback2_3486(4640, 5696), 2);
    add_background_object(create_fdlabback1_3484(4384, 5696), 2);
    add_background_object(create_fdlabback1_3484(4256, 5696), 2);
    add_background_object(create_fdlabback1_3484(4128, 5696), 2);
    add_background_object(create_fdlabback1_3484(4000, 5696), 2);
    add_background_object(create_fdlabback1_3484(3872, 5696), 2);
    add_background_object(create_fdlabback1_3484(3744, 5696), 2);
    add_background_object(create_fdlabback1_3484(5248, 5056), 2);
    add_background_object(create_fdlabback1_3484(5120, 5056), 2);
    add_background_object(create_fdlabback2_3486(5376, 5152), 2);
    add_background_object(create_fdlabback2_3486(5376, 5088), 2);
    add_background_object(create_fdlabback2_3486(5664, 5504), 2);
    add_background_object(create_fdlabback2_3486(5664, 5568), 2);
    add_background_object(create_fdlabback2_3486(6080, 5504), 2);
    add_background_object(create_fdlabback19_3559(6112, 4608), 2);
    add_background_object(create_fdlabback19_3559(6112, 4736), 2);
    add_background_object(create_fdlabback19_3559(6112, 4864), 2);
    add_background_object(create_fdlabback19_3559(6112, 4992), 2);
    add_background_object(create_fdlabback19_3559(6112, 5120), 2);
    add_background_object(create_fdlabback19_3559(6112, 5248), 2);
    add_background_object(create_fdlabback19_3559(6112, 5376), 2);
    add_background_object(create_fdlabback19_3559(6112, 5504), 2);
    add_background_object(create_fdlabback2_3486(6080, 5568), 2);
    add_background_object(create_fdlabback1_3484(5696, 5472), 2);
    add_background_object(create_fdlabback11_3494(5888, 5544), 2);
    add_background_object(create_fdlabback19_3559(6112, 5632), 2);
    add_background_object(create_fdlabback19_3559(6112, 5760), 2);
    add_background_object(create_fdlabback19_3559(6336, 4608), 2);
    add_background_object(create_fdlabback19_3559(6336, 4736), 2);
    add_background_object(create_fdlabback19_3559(6336, 4864), 2);
    add_background_object(create_fdlabback19_3559(6336, 4992), 2);
    add_background_object(create_fdlabback19_3559(6336, 5120), 2);
    add_background_object(create_fdlabback19_3559(6336, 5248), 2);
    add_background_object(create_fdlabback19_3559(6336, 5376), 2);
    add_background_object(create_fdlabback19_3559(6336, 5504), 2);
    add_background_object(create_fdlabback19_3559(6336, 5632), 2);
    add_background_object(create_fdlabback19_3559(6336, 5760), 2);
    add_background_object(create_fdlabback19_3559(6112, 2720), 2);
    add_background_object(create_fdlabback19_3559(6112, 2848), 2);
    add_background_object(create_fdlabback19_3559(6112, 2976), 2);
    add_background_object(create_fdlabback19_3559(6112, 3104), 2);
    add_background_object(create_fdlabback19_3559(6112, 3232), 2);
    add_background_object(create_fdlabback19_3559(6112, 3360), 2);
    add_background_object(create_fdlabback19_3559(6112, 3488), 2);
    add_background_object(create_fdlabback19_3559(6112, 3616), 2);
    add_background_object(create_fdlabback19_3559(6112, 3744), 2);
    add_background_object(create_fdlabback19_3559(6112, 3872), 2);
    add_background_object(create_fdlabback19_3559(6336, 2720), 2);
    add_background_object(create_fdlabback19_3559(6336, 2848), 2);
    add_background_object(create_fdlabback19_3559(6336, 2976), 2);
    add_background_object(create_fdlabback19_3559(6336, 3104), 2);
    add_background_object(create_fdlabback19_3559(6336, 3232), 2);
    add_background_object(create_fdlabback19_3559(6336, 3360), 2);
    add_background_object(create_fdlabback19_3559(6336, 3488), 2);
    add_background_object(create_fdlabback19_3559(6336, 3616), 2);
    add_background_object(create_fdlabback19_3559(6336, 3744), 2);
    add_background_object(create_fdlabback19_3559(6336, 3872), 2);
    add_background_object(create_fdlabback19_3559(6112, 2592), 2);
    add_background_object(create_fdlabback19_3559(6336, 2592), 2);
    add_background_object(create_fdlabback1_3484(6240, 2400), 2);
    add_background_object(create_fdlabback5_3485(6016, 2176), 2);
    add_background_object(create_fdlabback5_3485(6368, 2176), 2);
    add_background_object(create_fdlabback1_3484(6016, 2016), 2);
    add_background_object(create_fdlabback1_3484(6336, 2016), 2);
    add_background_object(create_fdlabback1_3484(6176, 2016), 2);
    add_background_object(create_fdlabback1_3484(6176, 2208), 2);
    add_background_object(create_fdlabback2_3486(6112, 2176), 2);
    add_background_object(create_fdlabback2_3486(6336, 2176), 2);
    add_background_object(create_fdlabback2_3486(5984, 2048), 2);
    add_background_object(create_fdlabback2_3486(5984, 2112), 2);
    add_background_object(create_fdlabback2_3486(5984, 2176), 2);
    add_background_object(create_fdlabback2_3486(5984, 2240), 2);
    add_background_object(create_fdlabback2_3486(5984, 2304), 2);
    add_background_object(create_fdlabback2_3486(6464, 2048), 2);
    add_background_object(create_fdlabback2_3486(6464, 2112), 2);
    add_background_object(create_fdlabback2_3486(6464, 2176), 2);
    add_background_object(create_fdlabback2_3486(6464, 2240), 2);
    add_background_object(create_fdlabback2_3486(6464, 2304), 2);
    add_background_object(create_fdlabback1_3484(6112, 2400), 2);
    add_background_object(create_fdlabback2_3486(6080, 2432), 2);
    add_background_object(create_fdlabback2_3486(6080, 2496), 2);
    add_background_object(create_fdlabback2_3486(6368, 2432), 2);
    add_background_object(create_fdlabback2_3486(6368, 2496), 2);
    add_background_object(create_fdlabback10_3493(6112, 2472), 2);
    add_background_object(create_fdlabback3_3487(5952, 2816), 2);
    add_background_object(create_fdlabback3_3487(5952, 2752), 2);
    add_background_object(create_fdlabback3_3487(5952, 2688), 2);
    add_background_object(create_fdlabback3_3487(5952, 2624), 2);
    add_background_object(create_fdlabback3_3487(6464, 2816), 2);
    add_background_object(create_fdlabback3_3487(6464, 2752), 2);
    add_background_object(create_fdlabback3_3487(6464, 2688), 2);
    add_background_object(create_fdlabback3_3487(6464, 2624), 2);
    add_background_object(create_fdlabback1_3484(5504, 2784), 2);
    add_background_object(create_fdlabback1_3484(5632, 2784), 2);
    add_background_object(create_fdlabback1_3484(5760, 2784), 2);
    add_background_object(create_fdlabback1_3484(5888, 2784), 2);
    add_background_object(create_fdlabback1_3484(6464, 2784), 2);
    add_background_object(create_fdlabback1_3484(6592, 2784), 2);
    add_background_object(create_fdlabback1_3484(6720, 2784), 2);
    add_background_object(create_fdlabback1_3484(6848, 2784), 2);
    add_background_object(create_fdlabback1_3484(6976, 2784), 2);
    add_background_object(create_fdlabback8_3491(6816, 2704), 2);
    add_background_object(create_fdlabback9_3492(6944, 2704), 2);
    add_background_object(create_fdlabback9_3492(6688, 2704), 2);
    add_background_object(create_fdlabback3_3487(6720, 2672), 2);
    add_background_object(create_fdlabback3_3487(6784, 2672), 2);
    add_background_object(create_fdlabback3_3487(6848, 2672), 2);
    add_background_object(create_fdlabback3_3487(6912, 2672), 2);
    add_background_object(create_fdlabback3_3487(6976, 2672), 2);
    add_background_object(create_fdlabback2_3486(6432, 2880), 2);
    add_background_object(create_fdlabback2_3486(6432, 2816), 2);
    add_background_object(create_fdlabback2_3486(6016, 2880), 2);
    add_background_object(create_fdlabback2_3486(6016, 2816), 2);
    add_background_object(create_fdlabback5_3485(6080, 4160), 2);
    add_background_object(create_fdlabback5_3485(6304, 4160), 2);
    add_background_object(create_fdlabback1_3484(6080, 4000), 2);
    add_background_object(create_fdlabback1_3484(6272, 4000), 2);
    add_background_object(create_fdlabback2_3486(6048, 4288), 2);
    add_background_object(create_fdlabback2_3486(6048, 4224), 2);
    add_background_object(create_fdlabback2_3486(6048, 4160), 2);
    add_background_object(create_fdlabback2_3486(6048, 4096), 2);
    add_background_object(create_fdlabback2_3486(6048, 4032), 2);
    add_background_object(create_fdlabback2_3486(6400, 4288), 2);
    add_background_object(create_fdlabback2_3486(6400, 4224), 2);
    add_background_object(create_fdlabback2_3486(6400, 4160), 2);
    add_background_object(create_fdlabback2_3486(6400, 4096), 2);
    add_background_object(create_fdlabback2_3486(6400, 4032), 2);
    add_background_object(create_fdlabback1_3484(5952, 3808), 2);
    add_background_object(create_fdlabback1_3484(6400, 3808), 2);
    add_background_object(create_fdlabback2_3486(5920, 3904), 2);
    add_background_object(create_fdlabback2_3486(5920, 3840), 2);
    add_background_object(create_fdlabback2_3486(6528, 3904), 2);
    add_background_object(create_fdlabback2_3486(6528, 3840), 2);
    add_background_object(create_fdlabback2_3486(6080, 3904), 2);
    add_background_object(create_fdlabback2_3486(6080, 3840), 2);
    add_background_object(create_fdlabback2_3486(6368, 3904), 2);
    add_background_object(create_fdlabback2_3486(6368, 3840), 2);
    add_background_object(create_fdlabback1_3484(6112, 4448), 2);
    add_background_object(create_fdlabback1_3484(6240, 4448), 2);
    add_background_object(create_fdlabback10_3493(6312, 2472), 2);
    add_background_object(create_fdlabback2_3486(6080, 4544), 2);
    add_background_object(create_fdlabback2_3486(6080, 4480), 2);
    add_background_object(create_fdlabback2_3486(6368, 4544), 2);
    add_background_object(create_fdlabback2_3486(6368, 4480), 2);
    add_background_object(create_fdlabback2_3486(5984, 4544), 2);
    add_background_object(create_fdlabback2_3486(5984, 4480), 2);
    add_background_object(create_fdlabback2_3486(6464, 4544), 2);
    add_background_object(create_fdlabback2_3486(6464, 4480), 2);
    add_background_object(create_fdlabback2_3486(5984, 2432), 2);
    add_background_object(create_fdlabback2_3486(5984, 2496), 2);
    add_background_object(create_fdlabback2_3486(6464, 2432), 2);
    add_background_object(create_fdlabback2_3486(6464, 2496), 2);
    add_background_object(create_fdlabback19_3559(6112, 1504), 2);
    add_background_object(create_fdlabback19_3559(6112, 1632), 2);
    add_background_object(create_fdlabback19_3559(6112, 1760), 2);
    add_background_object(create_fdlabback19_3559(6112, 1888), 2);
    add_background_object(create_fdlabback19_3559(6336, 1504), 2);
    add_background_object(create_fdlabback19_3559(6336, 1632), 2);
    add_background_object(create_fdlabback19_3559(6336, 1760), 2);
    add_background_object(create_fdlabback19_3559(6336, 1888), 2);
    add_background_object(create_fdlabback19_3559(6112, 1376), 2);
    add_background_object(create_fdlabback19_3559(6112, 1248), 2);
    add_background_object(create_fdlabback19_3559(6336, 1376), 2);
    add_background_object(create_fdlabback19_3559(6336, 1248), 2);
    add_background_object(create_fdlabback2_3486(6368, 3776), 2);
    add_background_object(create_fdlabback2_3486(6080, 3776), 2);
    add_background_object(create_fdlabback19_3559(6112, 992), 2);
    add_background_object(create_fdlabback19_3559(6112, 1120), 2);
    add_background_object(create_fdlabback19_3559(6336, 992), 2);
    add_background_object(create_fdlabback19_3559(6336, 1120), 2);
    add_background_object(create_fdlabback19_3559(6112, 864), 2);
    add_background_object(create_fdlabback19_3559(6112, 736), 2);
    add_background_object(create_fdlabback19_3559(6336, 864), 2);
    add_background_object(create_fdlabback19_3559(6336, 736), 2);
    add_background_object(create_fdlabback19_3559(6112, 480), 2);
    add_background_object(create_fdlabback19_3559(6112, 608), 2);
    add_background_object(create_fdlabback19_3559(6336, 480), 2);
    add_background_object(create_fdlabback19_3559(6336, 608), 2);
    add_background_object(create_fdlabback19_3559(6112, 352), 2);
    add_background_object(create_fdlabback19_3559(6112, 224), 2);
    add_background_object(create_fdlabback19_3559(6336, 352), 2);
    add_background_object(create_fdlabback19_3559(6336, 224), 2);
    add_background_object(create_fdlabback19_3559(6112, 96), 2);
    add_background_object(create_fdlabback19_3559(6112, -32), 2);
    add_background_object(create_fdlabback19_3559(6336, 96), 2);
    add_background_object(create_fdlabback19_3559(6336, -32), 2);
    add_background_object(create_fdlabback2_3486(6368, 224), 2);
    add_background_object(create_fdlabback2_3486(6368, 160), 2);
    add_background_object(create_fdlabback5_3485(6400, 96), 2);
    add_background_object(create_fdlabback2_3486(6368, 96), 2);
    add_background_object(create_fdlabback2_3486(6496, 224), 2);
    add_background_object(create_fdlabback2_3486(6496, 160), 2);
    add_background_object(create_fdlabback5_3485(6528, 96), 2);
    add_background_object(create_fdlabback2_3486(6496, 96), 2);
    add_background_object(create_fdlabback2_3486(6624, 224), 2);
    add_background_object(create_fdlabback2_3486(6624, 160), 2);
    add_background_object(create_fdlabback5_3485(6656, 96), 2);
    add_background_object(create_fdlabback2_3486(6624, 96), 2);
    add_background_object(create_fdlabback2_3486(6752, 224), 2);
    add_background_object(create_fdlabback2_3486(6752, 160), 2);
    add_background_object(create_fdlabback5_3485(6784, 96), 2);
    add_background_object(create_fdlabback2_3486(6752, 96), 2);
    add_background_object(create_fdlabback2_3486(6880, 224), 2);
    add_background_object(create_fdlabback2_3486(6880, 160), 2);
    add_background_object(create_fdlabback5_3485(6912, 96), 2);
    add_background_object(create_fdlabback2_3486(6880, 96), 2);
    add_background_object(create_fdlabback2_3486(7008, 224), 2);
    add_background_object(create_fdlabback2_3486(7008, 160), 2);
    add_background_object(create_fdlabback2_3486(7008, 96), 2);
    add_background_object(create_fdlabback3_3487(7328, 4576), 2);
    add_background_object(create_fdlabback3_3487(7392, 4576), 2);
    add_background_object(create_fdlabback3_3487(7456, 4576), 2);
    add_background_object(create_fdlabback3_3487(7520, 4576), 2);
    add_background_object(create_fdlabback3_3487(7584, 4576), 2);
    add_background_object(create_fdlabback3_3487(7648, 4576), 2);
    add_background_object(create_fdlabback3_3487(7712, 4576), 2);
    add_background_object(create_fdlabback3_3487(7776, 4576), 2);
    add_background_object(create_fdlabback3_3487(7328, 4464), 2);
    add_background_object(create_fdlabback3_3487(7392, 4464), 2);
    add_background_object(create_fdlabback3_3487(7456, 4464), 2);
    add_background_object(create_fdlabback3_3487(7520, 4464), 2);
    add_background_object(create_fdlabback3_3487(7584, 4464), 2);
    add_background_object(create_fdlabback3_3487(7648, 4464), 2);
    add_background_object(create_fdlabback3_3487(7712, 4464), 2);
    add_background_object(create_fdlabback3_3487(7776, 4464), 2);
    add_background_object(create_fdlabback3_3487(7328, 4352), 2);
    add_background_object(create_fdlabback3_3487(7392, 4352), 2);
    add_background_object(create_fdlabback3_3487(7456, 4352), 2);
    add_background_object(create_fdlabback3_3487(7520, 4352), 2);
    add_background_object(create_fdlabback3_3487(7584, 4352), 2);
    add_background_object(create_fdlabback3_3487(7648, 4352), 2);
    add_background_object(create_fdlabback3_3487(7712, 4352), 2);
    add_background_object(create_fdlabback3_3487(7776, 4352), 2);
    add_background_object(create_fdlabback9_3492(7328, 4496), 2);
    add_background_object(create_fdlabback9_3492(7456, 4496), 2);
    add_background_object(create_fdlabback9_3492(7584, 4496), 2);
    add_background_object(create_fdlabback9_3492(7712, 4496), 2);
    add_background_object(create_fdlabback9_3492(7328, 4384), 2);
    add_background_object(create_fdlabback9_3492(7456, 4384), 2);
    add_background_object(create_fdlabback9_3492(7584, 4384), 2);
    add_background_object(create_fdlabback9_3492(7712, 4384), 2);
    add_background_object(create_fdlabback3_3487(7328, 4240), 2);
    add_background_object(create_fdlabback3_3487(7392, 4240), 2);
    add_background_object(create_fdlabback3_3487(7456, 4240), 2);
    add_background_object(create_fdlabback3_3487(7520, 4240), 2);
    add_background_object(create_fdlabback3_3487(7584, 4240), 2);
    add_background_object(create_fdlabback3_3487(7648, 4240), 2);
    add_background_object(create_fdlabback3_3487(7712, 4240), 2);
    add_background_object(create_fdlabback3_3487(7776, 4240), 2);
    add_background_object(create_fdlabback3_3487(7328, 4128), 2);
    add_background_object(create_fdlabback3_3487(7392, 4128), 2);
    add_background_object(create_fdlabback3_3487(7456, 4128), 2);
    add_background_object(create_fdlabback3_3487(7520, 4128), 2);
    add_background_object(create_fdlabback3_3487(7584, 4128), 2);
    add_background_object(create_fdlabback3_3487(7648, 4128), 2);
    add_background_object(create_fdlabback3_3487(7712, 4128), 2);
    add_background_object(create_fdlabback3_3487(7776, 4128), 2);
    add_background_object(create_fdlabback9_3492(7328, 4272), 2);
    add_background_object(create_fdlabback9_3492(7456, 4272), 2);
    add_background_object(create_fdlabback9_3492(7584, 4272), 2);
    add_background_object(create_fdlabback9_3492(7712, 4272), 2);
    add_background_object(create_fdlabback9_3492(7328, 4160), 2);
    add_background_object(create_fdlabback9_3492(7456, 4160), 2);
    add_background_object(create_fdlabback9_3492(7584, 4160), 2);
    add_background_object(create_fdlabback9_3492(7712, 4160), 2);
    add_background_object(create_fdlabback1_3484(7328, 3968), 2);
    add_background_object(create_fdlabback1_3484(7456, 3968), 2);
    add_background_object(create_fdlabback1_3484(7584, 3968), 2);
    add_background_object(create_fdlabback1_3484(7712, 3968), 2);
    add_background_object(create_fdlabback3_3487(7328, 3936), 2);
    add_background_object(create_fdlabback3_3487(7392, 3936), 2);
    add_background_object(create_fdlabback3_3487(7456, 3936), 2);
    add_background_object(create_fdlabback3_3487(7520, 3936), 2);
    add_background_object(create_fdlabback3_3487(7584, 3936), 2);
    add_background_object(create_fdlabback3_3487(7648, 3936), 2);
    add_background_object(create_fdlabback3_3487(7712, 3936), 2);
    add_background_object(create_fdlabback3_3487(7776, 3936), 2);
    add_background_object(create_fdlabback1_3484(7328, 3776), 2);
    add_background_object(create_fdlabback1_3484(7456, 3776), 2);
    add_background_object(create_fdlabback1_3484(7584, 3776), 2);
    add_background_object(create_fdlabback1_3484(7712, 3776), 2);
    add_background_object(create_fdlabback3_3487(7328, 3744), 2);
    add_background_object(create_fdlabback3_3487(7392, 3744), 2);
    add_background_object(create_fdlabback3_3487(7456, 3744), 2);
    add_background_object(create_fdlabback3_3487(7520, 3744), 2);
    add_background_object(create_fdlabback3_3487(7584, 3744), 2);
    add_background_object(create_fdlabback3_3487(7648, 3744), 2);
    add_background_object(create_fdlabback3_3487(7712, 3744), 2);
    add_background_object(create_fdlabback3_3487(7776, 3744), 2);
    add_background_object(create_fdlabback1_3484(7328, 3584), 2);
    add_background_object(create_fdlabback1_3484(7456, 3584), 2);
    add_background_object(create_fdlabback1_3484(7584, 3584), 2);
    add_background_object(create_fdlabback1_3484(7712, 3584), 2);
    add_background_object(create_fdlabback3_3487(7328, 3552), 2);
    add_background_object(create_fdlabback3_3487(7392, 3552), 2);
    add_background_object(create_fdlabback3_3487(7456, 3552), 2);
    add_background_object(create_fdlabback3_3487(7520, 3552), 2);
    add_background_object(create_fdlabback3_3487(7584, 3552), 2);
    add_background_object(create_fdlabback3_3487(7648, 3552), 2);
    add_background_object(create_fdlabback3_3487(7712, 3552), 2);
    add_background_object(create_fdlabback3_3487(7776, 3552), 2);
    add_background_object(create_fdlabback1_3484(7328, 3392), 2);
    add_background_object(create_fdlabback1_3484(7456, 3392), 2);
    add_background_object(create_fdlabback1_3484(7584, 3392), 2);
    add_background_object(create_fdlabback1_3484(7712, 3392), 2);
    add_background_object(create_fdlabback3_3487(7328, 3360), 2);
    add_background_object(create_fdlabback3_3487(7392, 3360), 2);
    add_background_object(create_fdlabback3_3487(7456, 3360), 2);
    add_background_object(create_fdlabback3_3487(7520, 3360), 2);
    add_background_object(create_fdlabback3_3487(7584, 3360), 2);
    add_background_object(create_fdlabback3_3487(7648, 3360), 2);
    add_background_object(create_fdlabback3_3487(7712, 3360), 2);
    add_background_object(create_fdlabback3_3487(7776, 3360), 2);
    add_background_object(create_fdlabback1_3484(7328, 3200), 2);
    add_background_object(create_fdlabback1_3484(7456, 3200), 2);
    add_background_object(create_fdlabback1_3484(7584, 3200), 2);
    add_background_object(create_fdlabback1_3484(7712, 3200), 2);
    add_background_object(create_fdlabback3_3487(7328, 3168), 2);
    add_background_object(create_fdlabback3_3487(7392, 3168), 2);
    add_background_object(create_fdlabback3_3487(7456, 3168), 2);
    add_background_object(create_fdlabback3_3487(7520, 3168), 2);
    add_background_object(create_fdlabback3_3487(7584, 3168), 2);
    add_background_object(create_fdlabback3_3487(7648, 3168), 2);
    add_background_object(create_fdlabback3_3487(7712, 3168), 2);
    add_background_object(create_fdlabback3_3487(7776, 3168), 2);
    add_background_object(create_fdlabback1_3484(7328, 3008), 2);
    add_background_object(create_fdlabback1_3484(7456, 3008), 2);
    add_background_object(create_fdlabback1_3484(7584, 3008), 2);
    add_background_object(create_fdlabback1_3484(7712, 3008), 2);
    add_background_object(create_fdlabback3_3487(7328, 2976), 2);
    add_background_object(create_fdlabback3_3487(7392, 2976), 2);
    add_background_object(create_fdlabback3_3487(7456, 2976), 2);
    add_background_object(create_fdlabback3_3487(7520, 2976), 2);
    add_background_object(create_fdlabback3_3487(7584, 2976), 2);
    add_background_object(create_fdlabback3_3487(7648, 2976), 2);
    add_background_object(create_fdlabback3_3487(7712, 2976), 2);
    add_background_object(create_fdlabback3_3487(7776, 2976), 2);
    add_background_object(create_fdlabback1_3484(7328, 2816), 2);
    add_background_object(create_fdlabback1_3484(7456, 2816), 2);
    add_background_object(create_fdlabback1_3484(7584, 2816), 2);
    add_background_object(create_fdlabback1_3484(7712, 2816), 2);
    add_background_object(create_fdlabback3_3487(7328, 2784), 2);
    add_background_object(create_fdlabback3_3487(7392, 2784), 2);
    add_background_object(create_fdlabback3_3487(7456, 2784), 2);
    add_background_object(create_fdlabback3_3487(7520, 2784), 2);
    add_background_object(create_fdlabback3_3487(7584, 2784), 2);
    add_background_object(create_fdlabback3_3487(7648, 2784), 2);
    add_background_object(create_fdlabback3_3487(7712, 2784), 2);
    add_background_object(create_fdlabback3_3487(7776, 2784), 2);
    add_background_object(create_fdlabback1_3484(7328, 2624), 2);
    add_background_object(create_fdlabback1_3484(7456, 2624), 2);
    add_background_object(create_fdlabback1_3484(7584, 2624), 2);
    add_background_object(create_fdlabback1_3484(7712, 2624), 2);
    add_background_object(create_fdlabback3_3487(7328, 2592), 2);
    add_background_object(create_fdlabback3_3487(7392, 2592), 2);
    add_background_object(create_fdlabback3_3487(7456, 2592), 2);
    add_background_object(create_fdlabback3_3487(7520, 2592), 2);
    add_background_object(create_fdlabback3_3487(7584, 2592), 2);
    add_background_object(create_fdlabback3_3487(7648, 2592), 2);
    add_background_object(create_fdlabback3_3487(7712, 2592), 2);
    add_background_object(create_fdlabback3_3487(7776, 2592), 2);
    add_background_object(create_fdlabback1_3484(7328, 2432), 2);
    add_background_object(create_fdlabback1_3484(7456, 2432), 2);
    add_background_object(create_fdlabback1_3484(7584, 2432), 2);
    add_background_object(create_fdlabback1_3484(7712, 2432), 2);
    add_background_object(create_fdlabback3_3487(7328, 2400), 2);
    add_background_object(create_fdlabback3_3487(7392, 2400), 2);
    add_background_object(create_fdlabback3_3487(7456, 2400), 2);
    add_background_object(create_fdlabback3_3487(7520, 2400), 2);
    add_background_object(create_fdlabback3_3487(7584, 2400), 2);
    add_background_object(create_fdlabback3_3487(7648, 2400), 2);
    add_background_object(create_fdlabback3_3487(7712, 2400), 2);
    add_background_object(create_fdlabback3_3487(7776, 2400), 2);
    add_background_object(create_fdlabback1_3484(7328, 2240), 2);
    add_background_object(create_fdlabback1_3484(7456, 2240), 2);
    add_background_object(create_fdlabback1_3484(7584, 2240), 2);
    add_background_object(create_fdlabback1_3484(7712, 2240), 2);
    add_background_object(create_fdlabback3_3487(7328, 2208), 2);
    add_background_object(create_fdlabback3_3487(7392, 2208), 2);
    add_background_object(create_fdlabback3_3487(7456, 2208), 2);
    add_background_object(create_fdlabback3_3487(7520, 2208), 2);
    add_background_object(create_fdlabback3_3487(7584, 2208), 2);
    add_background_object(create_fdlabback3_3487(7648, 2208), 2);
    add_background_object(create_fdlabback3_3487(7712, 2208), 2);
    add_background_object(create_fdlabback3_3487(7776, 2208), 2);
    add_background_object(create_fdlabback1_3484(7328, 2048), 2);
    add_background_object(create_fdlabback1_3484(7456, 2048), 2);
    add_background_object(create_fdlabback1_3484(7584, 2048), 2);
    add_background_object(create_fdlabback1_3484(7712, 2048), 2);
    add_background_object(create_fdlabback3_3487(7328, 2016), 2);
    add_background_object(create_fdlabback3_3487(7392, 2016), 2);
    add_background_object(create_fdlabback3_3487(7456, 2016), 2);
    add_background_object(create_fdlabback3_3487(7520, 2016), 2);
    add_background_object(create_fdlabback3_3487(7584, 2016), 2);
    add_background_object(create_fdlabback3_3487(7648, 2016), 2);
    add_background_object(create_fdlabback3_3487(7712, 2016), 2);
    add_background_object(create_fdlabback3_3487(7776, 2016), 2);
    add_background_object(create_fdlabback1_3484(7328, 1856), 2);
    add_background_object(create_fdlabback1_3484(7456, 1856), 2);
    add_background_object(create_fdlabback1_3484(7584, 1856), 2);
    add_background_object(create_fdlabback1_3484(7712, 1856), 2);
    add_background_object(create_fdlabback3_3487(7328, 1824), 2);
    add_background_object(create_fdlabback3_3487(7392, 1824), 2);
    add_background_object(create_fdlabback3_3487(7456, 1824), 2);
    add_background_object(create_fdlabback3_3487(7520, 1824), 2);
    add_background_object(create_fdlabback3_3487(7584, 1824), 2);
    add_background_object(create_fdlabback3_3487(7648, 1824), 2);
    add_background_object(create_fdlabback3_3487(7712, 1824), 2);
    add_background_object(create_fdlabback3_3487(7776, 1824), 2);
    add_background_object(create_fdlabback1_3484(7328, 1664), 2);
    add_background_object(create_fdlabback1_3484(7456, 1664), 2);
    add_background_object(create_fdlabback1_3484(7584, 1664), 2);
    add_background_object(create_fdlabback1_3484(7712, 1664), 2);
    add_background_object(create_fdlabback3_3487(7328, 1632), 2);
    add_background_object(create_fdlabback3_3487(7392, 1632), 2);
    add_background_object(create_fdlabback3_3487(7456, 1632), 2);
    add_background_object(create_fdlabback3_3487(7520, 1632), 2);
    add_background_object(create_fdlabback3_3487(7584, 1632), 2);
    add_background_object(create_fdlabback3_3487(7648, 1632), 2);
    add_background_object(create_fdlabback3_3487(7712, 1632), 2);
    add_background_object(create_fdlabback3_3487(7776, 1632), 2);
    add_background_object(create_fdlabback1_3484(7328, 1472), 2);
    add_background_object(create_fdlabback1_3484(7456, 1472), 2);
    add_background_object(create_fdlabback1_3484(7584, 1472), 2);
    add_background_object(create_fdlabback1_3484(7712, 1472), 2);
    add_background_object(create_fdlabback3_3487(7328, 1440), 2);
    add_background_object(create_fdlabback3_3487(7392, 1440), 2);
    add_background_object(create_fdlabback3_3487(7456, 1440), 2);
    add_background_object(create_fdlabback3_3487(7520, 1440), 2);
    add_background_object(create_fdlabback3_3487(7584, 1440), 2);
    add_background_object(create_fdlabback3_3487(7648, 1440), 2);
    add_background_object(create_fdlabback3_3487(7712, 1440), 2);
    add_background_object(create_fdlabback3_3487(7776, 1440), 2);
    add_background_object(create_fdlabback1_3484(7328, 1280), 2);
    add_background_object(create_fdlabback1_3484(7456, 1280), 2);
    add_background_object(create_fdlabback1_3484(7584, 1280), 2);
    add_background_object(create_fdlabback1_3484(7712, 1280), 2);
    add_background_object(create_fdlabback3_3487(7328, 1248), 2);
    add_background_object(create_fdlabback3_3487(7392, 1248), 2);
    add_background_object(create_fdlabback3_3487(7456, 1248), 2);
    add_background_object(create_fdlabback3_3487(7520, 1248), 2);
    add_background_object(create_fdlabback3_3487(7584, 1248), 2);
    add_background_object(create_fdlabback3_3487(7648, 1248), 2);
    add_background_object(create_fdlabback3_3487(7712, 1248), 2);
    add_background_object(create_fdlabback3_3487(7776, 1248), 2);
    add_background_object(create_fdlabback1_3484(7328, 1088), 2);
    add_background_object(create_fdlabback1_3484(7456, 1088), 2);
    add_background_object(create_fdlabback1_3484(7584, 1088), 2);
    add_background_object(create_fdlabback1_3484(7712, 1088), 2);
    add_background_object(create_fdlabback3_3487(7328, 1056), 2);
    add_background_object(create_fdlabback3_3487(7392, 1056), 2);
    add_background_object(create_fdlabback3_3487(7456, 1056), 2);
    add_background_object(create_fdlabback3_3487(7520, 1056), 2);
    add_background_object(create_fdlabback3_3487(7584, 1056), 2);
    add_background_object(create_fdlabback3_3487(7648, 1056), 2);
    add_background_object(create_fdlabback3_3487(7712, 1056), 2);
    add_background_object(create_fdlabback3_3487(7776, 1056), 2);
    add_background_object(create_fdlabback1_3484(7328, 896), 2);
    add_background_object(create_fdlabback1_3484(7456, 896), 2);
    add_background_object(create_fdlabback1_3484(7584, 896), 2);
    add_background_object(create_fdlabback1_3484(7712, 896), 2);
    add_background_object(create_fdlabback3_3487(7328, 864), 2);
    add_background_object(create_fdlabback3_3487(7392, 864), 2);
    add_background_object(create_fdlabback3_3487(7456, 864), 2);
    add_background_object(create_fdlabback3_3487(7520, 864), 2);
    add_background_object(create_fdlabback3_3487(7584, 864), 2);
    add_background_object(create_fdlabback3_3487(7648, 864), 2);
    add_background_object(create_fdlabback3_3487(7712, 864), 2);
    add_background_object(create_fdlabback3_3487(7776, 864), 2);
    add_background_object(create_fdlabback1_3484(7328, 704), 2);
    add_background_object(create_fdlabback1_3484(7456, 704), 2);
    add_background_object(create_fdlabback1_3484(7584, 704), 2);
    add_background_object(create_fdlabback1_3484(7712, 704), 2);
    add_background_object(create_fdlabback3_3487(7328, 672), 2);
    add_background_object(create_fdlabback3_3487(7392, 672), 2);
    add_background_object(create_fdlabback3_3487(7456, 672), 2);
    add_background_object(create_fdlabback3_3487(7520, 672), 2);
    add_background_object(create_fdlabback3_3487(7584, 672), 2);
    add_background_object(create_fdlabback3_3487(7648, 672), 2);
    add_background_object(create_fdlabback3_3487(7712, 672), 2);
    add_background_object(create_fdlabback3_3487(7776, 672), 2);
    add_background_object(create_fdlabback1_3484(7328, 512), 2);
    add_background_object(create_fdlabback1_3484(7456, 512), 2);
    add_background_object(create_fdlabback1_3484(7584, 512), 2);
    add_background_object(create_fdlabback1_3484(7712, 512), 2);
    add_background_object(create_fdlabback3_3487(7328, 480), 2);
    add_background_object(create_fdlabback3_3487(7392, 480), 2);
    add_background_object(create_fdlabback3_3487(7456, 480), 2);
    add_background_object(create_fdlabback3_3487(7520, 480), 2);
    add_background_object(create_fdlabback3_3487(7584, 480), 2);
    add_background_object(create_fdlabback3_3487(7648, 480), 2);
    add_background_object(create_fdlabback3_3487(7712, 480), 2);
    add_background_object(create_fdlabback3_3487(7776, 480), 2);
    add_background_object(create_fdlabback1_3484(7328, 320), 2);
    add_background_object(create_fdlabback1_3484(7456, 320), 2);
    add_background_object(create_fdlabback1_3484(7584, 320), 2);
    add_background_object(create_fdlabback1_3484(7712, 320), 2);
    add_background_object(create_fdlabback3_3487(7328, 288), 2);
    add_background_object(create_fdlabback3_3487(7392, 288), 2);
    add_background_object(create_fdlabback3_3487(7456, 288), 2);
    add_background_object(create_fdlabback3_3487(7520, 288), 2);
    add_background_object(create_fdlabback3_3487(7584, 288), 2);
    add_background_object(create_fdlabback3_3487(7648, 288), 2);
    add_background_object(create_fdlabback3_3487(7712, 288), 2);
    add_background_object(create_fdlabback3_3487(7776, 288), 2);
    add_background_object(create_fdlabback2_3486(7376, 4608), 2);
    add_background_object(create_fdlabback2_3486(7376, 4672), 2);
    add_background_object(create_fdlabback2_3486(7376, 4736), 2);
    add_background_object(create_fdlabback2_3486(7376, 4800), 2);
    add_background_object(create_fdlabback2_3486(7376, 4864), 2);
    add_background_object(create_fdlabback2_3486(7376, 4928), 2);
    add_background_object(create_fdlabback2_3486(7760, 4608), 2);
    add_background_object(create_fdlabback2_3486(7760, 4672), 2);
    add_background_object(create_fdlabback2_3486(7760, 4736), 2);
    add_background_object(create_fdlabback2_3486(7760, 4800), 2);
    add_background_object(create_fdlabback2_3486(7760, 4864), 2);
    add_background_object(create_fdlabback2_3486(7760, 4928), 2);
    add_background_object(create_fdlabback2_3486(7568, 4608), 2);
    add_background_object(create_fdlabback2_3486(7568, 4672), 2);
    add_background_object(create_fdlabback2_3486(7568, 4736), 2);
    add_background_object(create_fdlabback2_3486(7568, 4800), 2);
    add_background_object(create_fdlabback2_3486(7568, 4864), 2);
    add_background_object(create_fdlabback2_3486(7568, 4928), 2);
    add_background_object(create_fdlabback2_3486(7200, 4736), 2);
    add_background_object(create_fdlabback2_3486(7200, 4800), 2);
    add_background_object(create_fdlabback2_3486(7200, 4864), 2);
    add_background_object(create_fdlabback2_3486(7200, 4928), 2);
    add_background_object(create_fdlabback2_3486(7200, 4672), 2);
    add_background_object(create_fdlabback2_3486(7936, 4736), 2);
    add_background_object(create_fdlabback2_3486(7936, 4800), 2);
    add_background_object(create_fdlabback2_3486(7936, 4864), 2);
    add_background_object(create_fdlabback2_3486(7936, 4928), 2);
    add_background_object(create_fdlabback2_3486(7936, 4672), 2);
    add_background_object(create_fdlabback2_3486(7024, 4736), 2);
    add_background_object(create_fdlabback2_3486(7024, 4800), 2);
    add_background_object(create_fdlabback2_3486(7024, 4864), 2);
    add_background_object(create_fdlabback2_3486(7024, 4928), 2);
    add_background_object(create_fdlabback2_3486(8112, 4736), 2);
    add_background_object(create_fdlabback2_3486(8112, 4800), 2);
    add_background_object(create_fdlabback2_3486(8112, 4864), 2);
    add_background_object(create_fdlabback2_3486(8112, 4928), 2);
    add_background_object(create_fdlabback2_3486(6464, 1856), 2);
    add_background_object(create_fdlabback2_3486(6464, 1920), 2);
    add_background_object(create_fdlabback2_3486(5984, 1856), 2);
    add_background_object(create_fdlabback2_3486(5984, 1920), 2);
    add_background_object(create_fdlabback2_3486(6080, 1856), 2);
    add_background_object(create_fdlabback2_3486(6080, 1920), 2);
    add_background_object(create_fdlabback2_3486(6368, 1856), 2);
    add_background_object(create_fdlabback2_3486(6368, 1920), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(8416, 53), 2);
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
    add_object(create_objectsiren_3337(-329, 2231), 2);
    add_object(create_lockedlabdoorback_3506(5160, 5152), 2);
    add_object(create_lockeddoorterminal_2606(5096, 5216), 2);
    add_object(create_labdoorback_3500(40, 4896), 2);
    add_object(create_levelelectriccrushermask_3501(3040, 5728), 2);
    add_object(create_fdconsole1_3504(-352, 1912), 2);
    add_object(create_fdconsole2_3505(-216, 1912), 2);
    add_object(create_playershieldgiver_3499(4928, 5167), 2);
    add_object(create_fdconsole1_3504(800, 5048), 2);
    add_object(create_fdconsole2_3505(864, 4888), 2);
    add_object(create_fdconsole1_3504(416, 4888), 2);
    add_object(create_fdconsole2_3505(768, 5416), 2);
    add_object(create_fdconsole2_3505(896, 5416), 2);
    add_object(create_fdconsole2_3505(1024, 5416), 2);
    add_object(create_effecttubeshade_3503(2176, 5160), 2);
    add_object(create_effecttubeshade_3503(2304, 5160), 2);
    add_object(create_effecttubeshade_3503(1568, 5800), 2);
    add_object(create_effecttubeshade_3503(1696, 5800), 2);
    add_object(create_effecttubeshade_3503(1632, 5800), 2);
    add_object(create_effecttubeshade_3503(1504, 5800), 2);
    add_object(create_effecttubeshade_3503(2240, 5160), 2);
    add_object(create_effecttubeshade_3503(3840, 5160), 2);
    add_object(create_effecttubeshade_3503(3968, 5160), 2);
    add_object(create_effecttubeshade_3503(4096, 5160), 2);
    add_object(create_effecttubeshade_3503(4224, 5160), 2);
    add_object(create_labdoorback_3500(3656, 5152), 2);
    add_object(create_fdconsole2_3505(3736, 5152), 2);
    add_object(create_fdconsole2_3505(3520, 5152), 2);
    add_object(create_labdoorback_3500(4392, 5152), 2);
    add_object(create_fdconsole1_3504(4736, 5144), 2);
    add_object(create_fdconsole2_3505(4832, 4960), 2);
    add_object(create_fdconsole2_3505(4272, 5152), 2);
    add_object(create_fdconsole2_3505(2080, 5696), 2);
    add_object(create_fdconsole2_3505(2216, 5696), 2);
    add_object(create_hazardzapbeam_3388(4257, 5496), 2);
    add_object(create_hazardzapbeam_3388(4001, 5496), 2);
    add_object(create_hazardzapbeam_3388(4105, 5736), 2);
    add_object(create_hazardzapbeam_3388(4241, 5736), 2);
    add_object(create_hazardzapbeam_3388(4369, 5736), 2);
    add_object(create_labdoorback_3500(4520, 5536), 2);
    add_object(create_playershieldgiver_3499(5824, 5583), 2);
    add_object(create_fdconsole1_3504(5888, 5560), 2);
    add_object(create_playershieldgiver_3499(6240, 2511), 2);
    add_object(create_fdconsole2_3505(6112, 2488), 2);
    add_object(create_fdconsole2_3505(6312, 2488), 2);
    add_object(create_bossmserplasersight_3563(8576, 5001), 2);
    add_object(create_bossmserplasersight_3563(8576, 5025), 2);
    add_object(create_bossmserplasersight_3563(8576, 5041), 2);
    add_object(create_bossmserplasersight_3563(8576, 5057), 2);
    add_object(create_fdconsole1_3504(6816, 2720), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_fdlabfloor8_3517(6368, 320), 3);
    add_background_object(create_fdlabfloor6_3513(6624, 2816), 3);
    add_background_object(create_fdlabwall2_3509(5824, 2688), 3);
    add_background_object(create_fdlabwall1_3508(6528, 2688), 3);
    add_background_object(create_fdlabwall2_3509(6176, 4288), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 5632), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 5696), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 5760), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 5824), 3);
    add_background_object(create_fdlabfloor6_3513(4352, 5376), 3);
    add_background_object(create_fdlabwall3_3518(3584, 4992), 3);
    add_background_object(create_fdlabwall2_3509(3072, 5120), 3);
    add_background_object(create_fdlabfloor8_3517(1824, 5824), 3);
    add_background_object(create_fdlabwall4_3516(1216, 5632), 3);
    add_background_object(create_fdlabwall2_3509(1024, 4992), 3);
    add_background_object(create_fdspiralsparktower_3405(-488, 2184), 3);
    add_background_object(create_fdspiralsparktower_3405(-488, 2216), 3);
    add_background_object(create_fdspiralsparktower_3405(-488, 2248), 3);
    add_background_object(create_tbswitchpadright_2691(976, 4928), 3);
    add_background_object(create_fdfloorswitch_3530(2592, 5464), 3);
    add_background_object(create_fdcurve1_3532(-320, 1744), 3);
    add_background_object(create_fdcurve2_3534(-320, 1744), 3);
    add_background_object(create_fdcurve3_3531(-320, 1744), 3);
    add_background_object(create_fdcurve4_3533(-320, 1744), 3);
    add_background_object(create_fdemptyelitesuit_3495(-296, 1752), 3);
    add_background_object(create_fdlabback1_3484(-336, 1712), 3);
    add_background_object(create_fdlabback10_3493(-304, 1752), 3);
    add_background_object(create_fdlabback11_3494(-328, 1768), 3);
    add_background_object(create_fdlabback12_3482(-336, 1712), 3);
    add_background_object(create_fdlabback13_3497(-296, 1752), 3);
    add_background_object(create_fdlabback14_3496(-288, 1760), 3);
    add_background_object(create_fdlabback15_3498(-320, 1704), 3);
    add_background_object(create_fdlabback2_3486(-288, 1768), 3);
    add_background_object(create_fdlabback3_3487(-296, 1760), 3);
    add_background_object(create_fdlabback4_3489(-296, 1736), 3);
    add_background_object(create_fdlabback5_3485(-320, 1704), 3);
    add_background_object(create_fdlabback6_3483(-336, 1720), 3);
    add_background_object(create_fdlabback7_3490(-336, 1736), 3);
    add_background_object(create_fdlabback8_3491(-336, 1760), 3);
    add_background_object(create_fdlabback9_3492(-336, 1760), 3);
    add_background_object(create_fdlabfloor1_3514(-336, 1776), 3);
    add_background_object(create_fdlabfloor10_3519(-312, 1816), 3);
    add_background_object(create_fdlabfloor11_3512(-280, 1816), 3);
    add_background_object(create_fdlabfloor12_3520(-344, 1816), 3);
    add_background_object(create_fdlabfloor13_3525(-312, 1760), 3);
    add_background_object(create_fdlabfloor14_3526(-304, 1760), 3);
    add_background_object(create_fdlabfloor15_3528(-304, 1752), 3);
    add_background_object(create_fdlabfloor16_3529(-296, 1760), 3);
    add_background_object(create_fdlabfloor2_3521(-280, 1784), 3);
    add_background_object(create_fdlabfloor3_3527(-288, 1760), 3);
    add_background_object(create_fdlabfloor4_3510(-280, 1776), 3);
    add_background_object(create_fdlabfloor5_3522(-304, 1800), 3);
    add_background_object(create_fdlabfloor6_3513(-304, 1784), 3);
    add_background_object(create_fdlabfloor7_3523(-288, 1800), 3);
    add_background_object(create_fdlabfloor8_3517(-280, 1776), 3);
    add_background_object(create_fdlabfloor9_3524(-304, 1800), 3);
    add_background_object(create_fdlabwall1_3508(-208, 1736), 3);
    add_background_object(create_fdlabwall2_3509(-192, 1736), 3);
    add_background_object(create_fdlabwall3_3518(-200, 1768), 3);
    add_background_object(create_fdlabwall4_3516(-200, 1760), 3);
    add_background_object(create_fdlabwall5_3515(-192, 1736), 3);
    add_background_object(create_fdlabwall6_3535(-192, 1720), 3);
    add_background_object(create_fdladder_3448(-184, 1784), 3);
    add_background_object(create_fdventpipe_3511(-216, 1768), 3);
    add_background_object(create_fdlabwall1_3508(0, 4544), 3);
    add_background_object(create_fdlabwall2_3509(128, 4544), 3);
    add_background_object(create_fdlabwall2_3509(0, 4672), 3);
    add_background_object(create_fdlabwall1_3508(128, 4672), 3);
    add_background_object(create_fdlabwall2_3509(0, 4992), 3);
    add_background_object(create_fdlabfloor1_3514(0, 4960), 3);
    add_background_object(create_fdlabwall1_3508(128, 4992), 3);
    add_background_object(create_fdlabfloor1_3514(128, 4960), 3);
    add_background_object(create_fdlabfloor6_3513(0, 4800), 3);
    add_background_object(create_fdlabfloor6_3513(64, 4800), 3);
    add_background_object(create_fdlabfloor6_3513(128, 4800), 3);
    add_background_object(create_fdlabfloor6_3513(192, 4800), 3);
    add_background_object(create_fdlabwall1_3508(256, 4544), 3);
    add_background_object(create_fdlabwall2_3509(384, 4544), 3);
    add_background_object(create_fdlabwall2_3509(256, 4672), 3);
    add_background_object(create_fdlabwall1_3508(384, 4672), 3);
    add_background_object(create_fdlabfloor6_3513(256, 4800), 3);
    add_background_object(create_fdlabfloor6_3513(320, 4800), 3);
    add_background_object(create_fdlabfloor6_3513(384, 4800), 3);
    add_background_object(create_fdlabfloor6_3513(448, 4800), 3);
    add_background_object(create_fdlabwall2_3509(256, 4992), 3);
    add_background_object(create_fdlabfloor1_3514(256, 4960), 3);
    add_background_object(create_fdlabwall1_3508(384, 4992), 3);
    add_background_object(create_fdlabfloor1_3514(384, 4960), 3);
    add_background_object(create_fdlabwall1_3508(0, 5120), 3);
    add_background_object(create_fdlabwall2_3509(128, 5120), 3);
    add_background_object(create_fdlabwall1_3508(256, 5120), 3);
    add_background_object(create_fdlabwall2_3509(384, 5120), 3);
    add_background_object(create_fdlabwall1_3508(512, 4544), 3);
    add_background_object(create_fdlabwall2_3509(896, 4544), 3);
    add_background_object(create_fdlabwall2_3509(512, 4672), 3);
    add_background_object(create_fdlabwall1_3508(896, 4672), 3);
    add_background_object(create_fdlabfloor6_3513(512, 4800), 3);
    add_background_object(create_fdlabfloor6_3513(576, 4800), 3);
    add_background_object(create_fdlabfloor6_3513(896, 4800), 3);
    add_background_object(create_fdlabfloor6_3513(960, 4800), 3);
    add_background_object(create_fdlabwall2_3509(640, 5120), 3);
    add_background_object(create_fdlabwall2_3509(256, 5248), 3);
    add_background_object(create_fdlabwall1_3508(384, 5248), 3);
    add_background_object(create_fdlabwall1_3508(640, 5248), 3);
    add_background_object(create_fdlabwall2_3509(768, 5248), 3);
    add_background_object(create_fdlabwall1_3508(768, 5120), 3);
    add_background_object(create_fdlabfloor2_3521(512, 4960), 3);
    add_background_object(create_fdlabfloor4_3510(512, 4992), 3);
    add_background_object(create_fdlabfloor4_3510(512, 5056), 3);
    add_background_object(create_fdlabfloor1_3514(640, 5120), 3);
    add_background_object(create_fdlabfloor1_3514(768, 5120), 3);
    add_background_object(create_fdlabwall1_3508(1024, 4544), 3);
    add_background_object(create_fdlabwall2_3509(1024, 4672), 3);
    add_background_object(create_fdlabwall1_3508(1024, 4800), 3);
    add_background_object(create_fdlabfloor8_3517(992, 4832), 3);
    add_background_object(create_fdlabfloor8_3517(992, 4896), 3);
    add_background_object(create_fdlabfloor2_3521(992, 4800), 3);
    add_background_object(create_fdlabwall1_3508(128, 5248), 3);
    add_background_object(create_fdlabwall2_3509(0, 5248), 3);
    add_background_object(create_fdlabwall2_3509(640, 4544), 3);
    add_background_object(create_fdlabwall1_3508(640, 4672), 3);
    add_background_object(create_fdlabfloor6_3513(640, 4800), 3);
    add_background_object(create_fdlabfloor6_3513(704, 4800), 3);
    add_background_object(create_fdlabwall1_3508(768, 4544), 3);
    add_background_object(create_fdlabwall2_3509(768, 4672), 3);
    add_background_object(create_fdlabfloor6_3513(768, 4800), 3);
    add_background_object(create_fdlabfloor6_3513(832, 4800), 3);
    add_background_object(create_fdlabfloor7_3523(864, 4992), 3);
    add_background_object(create_fdlabfloor3_3527(864, 4960), 3);
    add_background_object(create_fdlabfloor1_3514(896, 4960), 3);
    add_background_object(create_fdlabfloor6_3513(896, 4992), 3);
    add_background_object(create_fdlabfloor6_3513(960, 4992), 3);
    add_background_object(create_fdlabwall2_3509(896, 5120), 3);
    add_background_object(create_fdlabwall1_3508(896, 5248), 3);
    add_background_object(create_fdlabfloor1_3514(896, 5120), 3);
    add_background_object(create_fdlabwall2_3509(1024, 5248), 3);
    add_background_object(create_fdlabwall1_3508(1024, 5120), 3);
    add_background_object(create_fdlabwall3_3518(1024, 4928), 3);
    add_background_object(create_fdlabfloor8_3517(992, 4992), 3);
    add_background_object(create_fdlabfloor8_3517(992, 5056), 3);
    add_background_object(create_fdlabfloor2_3521(992, 4992), 3);
    add_background_object(create_tbswitchpadright_2691(976, 5088), 3);
    add_background_object(create_fdlabfloor4_3510(512, 5120), 3);
    add_background_object(create_fdlabfloor4_3510(512, 5184), 3);
    add_background_object(create_fdlabfloor4_3510(512, 5248), 3);
    add_background_object(create_fdlabfloor4_3510(512, 5312), 3);
    add_background_object(create_fdlabfloor3_3527(608, 5120), 3);
    add_background_object(create_fdlabfloor8_3517(608, 5152), 3);
    add_background_object(create_fdlabfloor8_3517(608, 5216), 3);
    add_background_object(create_fdlabfloor8_3517(608, 5280), 3);
    add_background_object(create_fdlabfloor7_3523(608, 5344), 3);
    add_background_object(create_fdlabfloor6_3513(640, 5344), 3);
    add_background_object(create_fdlabfloor6_3513(704, 5344), 3);
    add_background_object(create_fdlabfloor6_3513(768, 5344), 3);
    add_background_object(create_fdlabfloor6_3513(832, 5344), 3);
    add_background_object(create_fdlabfloor6_3513(896, 5344), 3);
    add_background_object(create_fdlabfloor6_3513(960, 5344), 3);
    add_background_object(create_fdlabfloor6_3513(1024, 5344), 3);
    add_background_object(create_fdlabfloor6_3513(1056, 5344), 3);
    add_background_object(create_fdlabwall1_3508(256, 5376), 3);
    add_background_object(create_fdlabwall2_3509(384, 5376), 3);
    add_background_object(create_fdlabwall2_3509(256, 5504), 3);
    add_background_object(create_fdlabwall1_3508(384, 5504), 3);
    add_background_object(create_fdlabfloor4_3510(512, 5376), 3);
    add_background_object(create_fdlabfloor4_3510(512, 5440), 3);
    add_background_object(create_fdlabwall2_3509(512, 5504), 3);
    add_background_object(create_fdlabfloor1_3514(512, 5472), 3);
    add_background_object(create_fdlabfloor2_3521(640, 5472), 3);
    add_background_object(create_fdlabfloor4_3510(640, 5504), 3);
    add_background_object(create_fdlabwall2_3509(320, 5632), 3);
    add_background_object(create_fdlabwall1_3508(448, 5632), 3);
    add_background_object(create_fdlabwall1_3508(192, 5632), 3);
    add_background_object(create_fdlabwall2_3509(128, 5376), 3);
    add_background_object(create_fdlabwall1_3508(128, 5504), 3);
    add_background_object(create_fdlabwall2_3509(64, 5632), 3);
    add_background_object(create_fdlabfloor4_3510(640, 5568), 3);
    add_background_object(create_fdlabwall2_3509(576, 5632), 3);
    add_background_object(create_fdlabwall1_3508(704, 5632), 3);
    add_background_object(create_fdlabfloor1_3514(640, 5600), 3);
    add_background_object(create_fdlabwall1_3508(960, 5632), 3);
    add_background_object(create_fdlabfloor1_3514(1024, 5600), 3);
    add_background_object(create_fdlabwall6_3535(1152, 5376), 3);
    add_background_object(create_fdlabwall1_3508(1152, 5248), 3);
    add_background_object(create_fdlabfloor15_3528(1120, 5344), 3);
    add_background_object(create_fdlabfloor15_3528(1184, 5408), 3);
    add_background_object(create_fdlabwall2_3509(1088, 5632), 3);
    add_background_object(create_fdlabwall2_3509(1280, 5376), 3);
    add_background_object(create_fdlabwall6_3535(1280, 5504), 3);
    add_background_object(create_fdlabfloor15_3528(1248, 5472), 3);
    add_background_object(create_fdlabfloor15_3528(1312, 5536), 3);
    add_background_object(create_fdlabfloor11_3512(1152, 5600), 3);
    add_background_object(create_fdlabfloor13_3525(1216, 5600), 3);
    add_background_object(create_fdlabfloor13_3525(1280, 5664), 3);
    add_background_object(create_fdlabfloor11_3512(960, 5600), 3);
    add_background_object(create_fdlabfloor11_3512(768, 5600), 3);
    add_background_object(create_fdlabfloor2_3521(832, 5600), 3);
    add_background_object(create_fdlabfloor4_3510(832, 5632), 3);
    add_background_object(create_fdlabfloor4_3510(832, 5696), 3);
    add_background_object(create_fdlabfloor3_3527(928, 5600), 3);
    add_background_object(create_fdlabfloor8_3517(928, 5632), 3);
    add_background_object(create_fdlabfloor8_3517(928, 5696), 3);
    add_background_object(create_fdlabwall2_3509(704, 5760), 3);
    add_background_object(create_fdlabwall1_3508(576, 5760), 3);
    add_background_object(create_fdlabwall2_3509(-64, 4480), 3);
    add_background_object(create_fdlabwall2_3509(448, 5760), 3);
    add_background_object(create_fdlabwall1_3508(64, 5760), 3);
    add_background_object(create_fdlabfloor4_3510(832, 5760), 3);
    add_background_object(create_fdlabfloor4_3510(832, 5824), 3);
    add_background_object(create_fdlabfloor7_3523(928, 5760), 3);
    add_background_object(create_fdlabfloor6_3513(960, 5760), 3);
    add_background_object(create_fdlabfloor6_3513(1024, 5760), 3);
    add_background_object(create_fdlabfloor6_3513(1088, 5760), 3);
    add_background_object(create_fdlabfloor6_3513(1152, 5760), 3);
    add_background_object(create_fdlabfloor6_3513(1216, 5760), 3);
    add_background_object(create_fdlabfloor6_3513(1280, 5760), 3);
    add_background_object(create_fdlabfloor11_3512(1344, 5728), 3);
    add_background_object(create_fdlabfloor6_3513(1344, 5760), 3);
    add_background_object(create_fdlabfloor2_3521(1408, 5728), 3);
    add_background_object(create_fdlabfloor5_3522(1408, 5760), 3);
    add_background_object(create_fdlabfloor15_3528(1344, 5568), 3);
    add_background_object(create_fdlabfloor6_3513(1408, 5632), 3);
    add_background_object(create_fdlabwall2_3509(1408, 5504), 3);
    add_background_object(create_fdlabwall1_3508(1408, 5376), 3);
    add_background_object(create_fdlabwall1_3508(1280, 5248), 3);
    add_background_object(create_fdlabwall2_3509(1408, 5248), 3);
    add_background_object(create_fdlabwall2_3509(1152, 5120), 3);
    add_background_object(create_fdlabwall1_3508(1280, 5120), 3);
    add_background_object(create_fdlabfloor1_3514(832, 5856), 3);
    add_background_object(create_fdlabfloor1_3514(960, 5856), 3);
    add_background_object(create_fdlabfloor1_3514(1088, 5856), 3);
    add_background_object(create_fdlabfloor1_3514(1216, 5856), 3);
    add_background_object(create_fdlabfloor1_3514(1344, 5856), 3);
    add_background_object(create_fdlabfloor1_3514(1472, 5856), 3);
    add_background_object(create_fdlabfloor6_3513(1472, 5632), 3);
    add_background_object(create_fdlabwall1_3508(1536, 5504), 3);
    add_background_object(create_fdlabwall2_3509(1536, 5376), 3);
    add_background_object(create_fdlabwall1_3508(1536, 5248), 3);
    add_background_object(create_fdlabfloor6_3513(1536, 5632), 3);
    add_background_object(create_fdlabfloor6_3513(1600, 5632), 3);
    add_background_object(create_fdlabwall1_3508(320, 5760), 3);
    add_background_object(create_fdlabwall2_3509(192, 5760), 3);
    add_background_object(create_fdlabfloor1_3514(1600, 5856), 3);
    add_background_object(create_fdlabfloor1_3514(1728, 5856), 3);
    add_background_object(create_fdlabwall1_3508(1856, 5760), 3);
    add_background_object(create_fdlabwall2_3509(1856, 5632), 3);
    add_background_object(create_fdlabwall1_3508(1856, 5504), 3);
    add_background_object(create_fdlabfloor8_3517(1824, 5760), 3);
    add_background_object(create_fdlabfloor8_3517(1824, 5696), 3);
    add_background_object(create_fdlabfloor8_3517(1824, 5632), 3);
    add_background_object(create_fdlabfloor8_3517(1824, 5568), 3);
    add_background_object(create_fdlabfloor8_3517(1824, 5504), 3);
    add_background_object(create_fdlabfloor4_3510(1664, 5568), 3);
    add_background_object(create_fdlabfloor4_3510(1664, 5504), 3);
    add_background_object(create_fdlabfloor4_3510(1984, 5568), 3);
    add_background_object(create_fdlabfloor4_3510(1984, 5504), 3);
    add_background_object(create_fdlabfloor4_3510(1984, 5696), 3);
    add_background_object(create_fdlabfloor4_3510(1984, 5632), 3);
    add_background_object(create_fdlabfloor4_3510(1984, 5824), 3);
    add_background_object(create_fdlabfloor4_3510(1984, 5760), 3);
    add_background_object(create_fdlabfloor1_3514(1984, 5856), 3);
    add_background_object(create_fdlabwall2_3509(1664, 5248), 3);
    add_background_object(create_fdlabwall1_3508(1792, 5248), 3);
    add_background_object(create_fdlabwall1_3508(2240, 5248), 3);
    add_background_object(create_fdlabwall2_3509(1536, 5120), 3);
    add_background_object(create_fdlabwall1_3508(1664, 5120), 3);
    add_background_object(create_fdlabwall2_3509(1792, 5120), 3);
    add_background_object(create_fdlabwall1_3508(1408, 5120), 3);
    add_background_object(create_fdlabfloor4_3510(1664, 5440), 3);
    add_background_object(create_fdlabfloor4_3510(1664, 5376), 3);
    add_background_object(create_fdlabfloor6_3513(1664, 5376), 3);
    add_background_object(create_fdlabfloor6_3513(1728, 5376), 3);
    add_background_object(create_fdlabfloor6_3513(1792, 5376), 3);
    add_background_object(create_fdlabfloor6_3513(1856, 5376), 3);
    add_background_object(create_fdlabfloor3_3527(1664, 5376), 3);
    add_background_object(create_fdlabfloor3_3527(1824, 5472), 3);
    add_background_object(create_fdlabfloor1_3514(1856, 5472), 3);
    add_background_object(create_fdlabfloor2_3521(1984, 5472), 3);
    add_background_object(create_fdladder_3448(1768, 5472), 3);
    add_background_object(create_fdladder_3448(1768, 5504), 3);
    add_background_object(create_fdladder_3448(1768, 5536), 3);
    add_background_object(create_fdladder_3448(1768, 5568), 3);
    add_background_object(create_fdladder_3448(1768, 5600), 3);
    add_background_object(create_fdladder_3448(1768, 5632), 3);
    add_background_object(create_fdladder_3448(1768, 5664), 3);
    add_background_object(create_fdladder_3448(1768, 5696), 3);
    add_background_object(create_fdladder_3448(1768, 5728), 3);
    add_background_object(create_fdlabwall2_3509(2112, 5248), 3);
    add_background_object(create_fdlabwall2_3509(2112, 5504), 3);
    add_background_object(create_fdlabwall1_3508(2112, 5376), 3);
    add_background_object(create_fdlabfloor8_3517(2080, 5568), 3);
    add_background_object(create_fdlabfloor8_3517(2080, 5504), 3);
    add_background_object(create_fdlabfloor8_3517(2080, 5440), 3);
    add_background_object(create_fdlabfloor8_3517(2080, 5376), 3);
    add_background_object(create_fdlabfloor8_3517(2080, 5312), 3);
    add_background_object(create_fdlabfloor8_3517(2080, 5248), 3);
    add_background_object(create_fdlabfloor3_3527(2080, 5216), 3);
    add_background_object(create_fdlabfloor1_3514(2112, 5216), 3);
    add_background_object(create_fdlabfloor1_3514(2240, 5216), 3);
    add_background_object(create_fdlabfloor4_3510(2368, 5312), 3);
    add_background_object(create_fdlabfloor4_3510(2368, 5248), 3);
    add_background_object(create_fdlabfloor2_3521(2368, 5216), 3);
    add_background_object(create_fdlabfloor5_3522(2368, 5376), 3);
    add_background_object(create_fdlabfloor6_3513(2240, 5376), 3);
    add_background_object(create_fdlabfloor6_3513(2304, 5376), 3);
    add_background_object(create_fdlabfloor4_3510(1920, 5312), 3);
    add_background_object(create_fdlabfloor4_3510(1920, 5248), 3);
    add_background_object(create_fdlabfloor4_3510(1920, 5184), 3);
    add_background_object(create_fdlabfloor4_3510(1920, 5120), 3);
    add_background_object(create_fdlabfloor6_3513(2112, 5632), 3);
    add_background_object(create_fdlabfloor6_3513(2176, 5632), 3);
    add_background_object(create_fdlabfloor1_3514(2112, 5856), 3);
    add_background_object(create_fdlabfloor4_3510(2240, 5568), 3);
    add_background_object(create_fdlabfloor4_3510(2240, 5504), 3);
    add_background_object(create_fdlabfloor5_3522(2240, 5632), 3);
    add_background_object(create_fdlabfloor4_3510(2240, 5440), 3);
    add_background_object(create_fdlabfloor4_3510(2240, 5376), 3);
    add_background_object(create_fdlabfloor3_3527(2240, 5376), 3);
    add_background_object(create_fdlabfloor8_3517(2336, 5760), 3);
    add_background_object(create_fdlabfloor8_3517(2336, 5696), 3);
    add_background_object(create_fdlabfloor8_3517(2336, 5632), 3);
    add_background_object(create_fdlabfloor8_3517(2336, 5568), 3);
    add_background_object(create_fdlabfloor8_3517(2336, 5504), 3);
    add_background_object(create_fdlabfloor3_3527(2336, 5472), 3);
    add_background_object(create_fdlabfloor1_3514(2240, 5856), 3);
    add_background_object(create_fdlabfloor1_3514(2368, 5472), 3);
    add_background_object(create_fdlabfloor1_3514(2496, 5472), 3);
    add_background_object(create_fdcurve2_3534(2016, 5760), 3);
    add_background_object(create_fdcurve4_3533(2240, 5760), 3);
    add_background_object(create_fdlabfloor1_3514(1984, 5856), 3);
    add_background_object(create_fdlabfloor5_3522(1664, 5632), 3);
    add_background_object(create_fdlabfloor7_3523(2080, 5632), 3);
    add_background_object(create_fdlabwall1_3508(1792, 4992), 3);
    add_background_object(create_fdlabwall2_3509(1792, 4864), 3);
    add_background_object(create_fdlabfloor4_3510(1920, 5056), 3);
    add_background_object(create_fdlabfloor4_3510(1920, 4992), 3);
    add_background_object(create_fdlabwall1_3508(1920, 4864), 3);
    add_background_object(create_fdlabwall2_3509(1664, 4992), 3);
    add_background_object(create_fdlabwall1_3508(1664, 4864), 3);
    add_background_object(create_fdlabwall2_3509(2048, 4864), 3);
    add_background_object(create_fdlabwall1_3508(2176, 4864), 3);
    add_background_object(create_fdlabwall2_3509(2304, 4864), 3);
    add_background_object(create_fdlabwall1_3508(2432, 4864), 3);
    add_background_object(create_fdlabfloor6_3513(1952, 4992), 3);
    add_background_object(create_fdlabfloor6_3513(2016, 4992), 3);
    add_background_object(create_fdlabfloor6_3513(2080, 4992), 3);
    add_background_object(create_fdlabfloor6_3513(2144, 4992), 3);
    add_background_object(create_fdlabfloor6_3513(2208, 4992), 3);
    add_background_object(create_fdlabfloor6_3513(2272, 4992), 3);
    add_background_object(create_fdlabfloor6_3513(2336, 4992), 3);
    add_background_object(create_fdlabfloor6_3513(2400, 4992), 3);
    add_background_object(create_fdlabfloor6_3513(2464, 4992), 3);
    add_background_object(create_fdlabfloor3_3527(1920, 4992), 3);
    add_background_object(create_fdlabwall2_3509(2560, 4864), 3);
    add_background_object(create_fdlabwall1_3508(2560, 4992), 3);
    add_background_object(create_fdlabwall2_3509(2560, 5120), 3);
    add_background_object(create_fdlabwall1_3508(2560, 5248), 3);
    add_background_object(create_fdlabfloor8_3517(2528, 5312), 3);
    add_background_object(create_fdlabfloor8_3517(2528, 5248), 3);
    add_background_object(create_fdlabfloor8_3517(2528, 5184), 3);
    add_background_object(create_fdlabfloor8_3517(2528, 5120), 3);
    add_background_object(create_fdlabfloor8_3517(2528, 5056), 3);
    add_background_object(create_fdlabfloor8_3517(2528, 4992), 3);
    add_background_object(create_fdlabfloor2_3521(2528, 4992), 3);
    add_background_object(create_fdlabfloor6_3513(2560, 5376), 3);
    add_background_object(create_fdlabfloor6_3513(2624, 5376), 3);
    add_background_object(create_fdlabfloor7_3523(2528, 5376), 3);
    add_background_object(create_fdlabwall1_3508(2688, 5120), 3);
    add_background_object(create_fdlabwall2_3509(2688, 5248), 3);
    add_background_object(create_fdlabwall1_3508(2688, 4864), 3);
    add_background_object(create_fdlabwall2_3509(2688, 4992), 3);
    add_background_object(create_fdlabwall2_3509(2816, 4864), 3);
    add_background_object(create_fdlabwall1_3508(2816, 4992), 3);
    add_background_object(create_fdlabwall2_3509(2816, 5120), 3);
    add_background_object(create_fdlabwall1_3508(2816, 5248), 3);
    add_background_object(create_fdlabfloor6_3513(2688, 5376), 3);
    add_background_object(create_fdlabfloor6_3513(2752, 5376), 3);
    add_background_object(create_fdlabwall2_3509(2816, 5376), 3);
    add_background_object(create_fdlabwall1_3508(2816, 5504), 3);
    add_background_object(create_fdlabfloor8_3517(2784, 5568), 3);
    add_background_object(create_fdlabfloor8_3517(2784, 5504), 3);
    add_background_object(create_fdlabfloor8_3517(2784, 5440), 3);
    add_background_object(create_fdlabfloor8_3517(2784, 5376), 3);
    add_background_object(create_fdlabfloor2_3521(2784, 5376), 3);
    add_background_object(create_fdlabwall2_3509(2688, 5632), 3);
    add_background_object(create_fdlabwall1_3508(2816, 5632), 3);
    add_background_object(create_fdlabfloor2_3521(2624, 5472), 3);
    add_background_object(create_fdlabfloor5_3522(2624, 5504), 3);
    add_background_object(create_fdlabfloor6_3513(2432, 5504), 3);
    add_background_object(create_fdlabfloor6_3513(2496, 5504), 3);
    add_background_object(create_fdlabfloor6_3513(2560, 5504), 3);
    add_background_object(create_fdlabfloor6_3513(2368, 5504), 3);
    add_background_object(create_fdlabfloor1_3514(2368, 5856), 3);
    add_background_object(create_fdlabfloor1_3514(2496, 5856), 3);
    add_background_object(create_fdlabfloor8_3517(2336, 5824), 3);
    add_background_object(create_fdlabfloor4_3510(2368, 5824), 3);
    add_background_object(create_fdlabfloor4_3510(2368, 5760), 3);
    add_background_object(create_fdlabfloor4_3510(2368, 5696), 3);
    add_background_object(create_fdlabfloor4_3510(2368, 5632), 3);
    add_background_object(create_fdlabfloor4_3510(2368, 5568), 3);
    add_background_object(create_fdlabfloor4_3510(2368, 5504), 3);
    add_background_object(create_fdlabfloor3_3527(2368, 5504), 3);
    add_background_object(create_fdlabfloor1_3514(2688, 5600), 3);
    add_background_object(create_fdlabfloor3_3527(2528, 5728), 3);
    add_background_object(create_fdlabfloor7_3523(2528, 5760), 3);
    add_background_object(create_fdlabfloor6_3513(2560, 5760), 3);
    add_background_object(create_fdlabfloor6_3513(2624, 5760), 3);
    add_background_object(create_fdlabfloor1_3514(2624, 5856), 3);
    add_background_object(create_fdlabfloor1_3514(2752, 5856), 3);
    add_background_object(create_fdlabfloor1_3514(2880, 5856), 3);
    add_background_object(create_fdlabfloor6_3513(2688, 5760), 3);
    add_background_object(create_fdlabfloor6_3513(2752, 5760), 3);
    add_background_object(create_fdlabfloor6_3513(2816, 5760), 3);
    add_background_object(create_fdlabfloor6_3513(2880, 5760), 3);
    add_background_object(create_fdlabfloor5_3522(2944, 5760), 3);
    add_background_object(create_fdlabfloor4_3510(2944, 5696), 3);
    add_background_object(create_fdlabfloor4_3510(2944, 5632), 3);
    add_background_object(create_fdlabwall2_3509(3136, 5632), 3);
    add_background_object(create_fdlabfloor8_3517(3104, 5696), 3);
    add_background_object(create_fdlabfloor8_3517(3104, 5632), 3);
    add_background_object(create_fdlabfloor1_3514(3008, 5856), 3);
    add_background_object(create_fdlabwall2_3509(2944, 4992), 3);
    add_background_object(create_fdlabwall1_3508(2944, 4864), 3);
    add_background_object(create_fdlabwall2_3509(3072, 4864), 3);
    add_background_object(create_fdlabwall1_3508(3072, 4992), 3);
    add_background_object(create_fdlabfloor6_3513(2944, 5248), 3);
    add_background_object(create_fdlabfloor6_3513(3008, 5248), 3);
    add_background_object(create_fdlabfloor3_3527(3104, 5600), 3);
    add_background_object(create_fdlabfloor1_3514(3136, 5600), 3);
    add_background_object(create_fdcurve2_3534(2400, 5760), 3);
    add_background_object(create_fdlabwall5_3515(2560, 5632), 3);
    add_background_object(create_fdlabfloor14_3526(2624, 5600), 3);
    add_background_object(create_fdlabfloor14_3526(2560, 5664), 3);
    add_background_object(create_fdlabfloor4_3510(2912, 5344), 3);
    add_background_object(create_fdlabfloor4_3510(2912, 5280), 3);
    add_background_object(create_fdlabfloor4_3510(2944, 5568), 3);
    add_background_object(create_fdlabfloor4_3510(2944, 5504), 3);
    add_background_object(create_fdlabfloor7_3523(3104, 5760), 3);
    add_background_object(create_fdlabfloor6_3513(3136, 5760), 3);
    add_background_object(create_fdlabfloor6_3513(3200, 5760), 3);
    add_background_object(create_fdlabfloor1_3514(3136, 5856), 3);
    add_background_object(create_fdlabfloor1_3514(3264, 5856), 3);
    add_background_object(create_fdlabfloor5_3522(3264, 5760), 3);
    add_background_object(create_fdlabfloor4_3510(3264, 5696), 3);
    add_background_object(create_fdlabfloor4_3510(3264, 5632), 3);
    add_background_object(create_fdlabfloor2_3521(3264, 5600), 3);
    add_background_object(create_fdlabwall2_3509(3520, 5760), 3);
    add_background_object(create_fdlabwall1_3508(3648, 5760), 3);
    add_background_object(create_fdlabwall1_3508(3520, 5632), 3);
    add_background_object(create_fdlabwall2_3509(3648, 5632), 3);
    add_background_object(create_fdlabwall2_3509(3520, 5504), 3);
    add_background_object(create_fdlabwall1_3508(3648, 5504), 3);
    add_background_object(create_fdlabfloor8_3517(3488, 5568), 3);
    add_background_object(create_fdlabfloor8_3517(3488, 5504), 3);
    add_background_object(create_fdlabfloor8_3517(3488, 5696), 3);
    add_background_object(create_fdlabfloor8_3517(3488, 5632), 3);
    add_background_object(create_fdlabfloor8_3517(3488, 5824), 3);
    add_background_object(create_fdlabfloor8_3517(3488, 5760), 3);
    add_background_object(create_fdlabfloor1_3514(3392, 5856), 3);
    add_background_object(create_fdlabwall1_3508(3520, 5376), 3);
    add_background_object(create_fdlabwall2_3509(3648, 5376), 3);
    add_background_object(create_fdlabwall2_3509(3392, 5376), 3);
    add_background_object(create_fdlabwall5_3515(3264, 5248), 3);
    add_background_object(create_fdlabfloor1_3514(3392, 5216), 3);
    add_background_object(create_fdlabfloor3_3527(3104, 5344), 3);
    add_background_object(create_fdlabfloor6_3513(3264, 5504), 3);
    add_background_object(create_fdlabfloor6_3513(3328, 5504), 3);
    add_background_object(create_fdlabfloor14_3526(3328, 5216), 3);
    add_background_object(create_fdlabfloor14_3526(3264, 5280), 3);
    add_background_object(create_fdlabfloor1_3514(3520, 5216), 3);
    add_background_object(create_fdlabfloor6_3513(3392, 5504), 3);
    add_background_object(create_fdlabfloor6_3513(3456, 5504), 3);
    add_background_object(create_fdlabfloor2_3521(3488, 5504), 3);
    add_background_object(create_fdlabwall2_3509(3200, 4992), 3);
    add_background_object(create_fdlabwall1_3508(3200, 4864), 3);
    add_background_object(create_fdlabwall2_3509(3328, 4864), 3);
    add_background_object(create_fdlabwall1_3508(3328, 4992), 3);
    add_background_object(create_fdlabfloor6_3513(3072, 5248), 3);
    add_background_object(create_fdlabfloor6_3513(3136, 5248), 3);
    add_background_object(create_fdlabfloor6_3513(3328, 5120), 3);
    add_background_object(create_fdlabfloor6_3513(3392, 5120), 3);
    add_background_object(create_fdlabwall7_3564(3200, 5120), 3);
    add_background_object(create_fdlabfloor16_3529(3264, 5120), 3);
    add_background_object(create_fdlabfloor16_3529(3200, 5184), 3);
    add_background_object(create_fdlabfloor3_3527(2912, 5248), 3);
    add_background_object(create_fdlabfloor4_3510(2912, 5408), 3);
    add_background_object(create_fdlabwall1_3508(3392, 5248), 3);
    add_background_object(create_fdlabwall2_3509(3520, 5248), 3);
    add_background_object(create_fdlabwall1_3508(3264, 5376), 3);
    add_background_object(create_fdlabwall6_3535(3136, 5376), 3);
    add_background_object(create_fdlabfloor15_3528(3200, 5440), 3);
    add_background_object(create_fdlabfloor15_3528(3136, 5376), 3);
    add_background_object(create_fdlabfloor1_3514(3136, 5344), 3);
    add_background_object(create_fdlabwall1_3508(2944, 5120), 3);
    add_background_object(create_fdcurve3_3531(3392, 5536), 3);
    add_background_object(create_fdlabfloor1_3514(3648, 5216), 3);
    add_background_object(create_fdlabfloor1_3514(3776, 5216), 3);
    add_background_object(create_fdlabwall1_3508(3648, 5248), 3);
    add_background_object(create_fdlabwall2_3509(3776, 5248), 3);
    add_background_object(create_fdlabwall1_3508(3456, 4864), 3);
    add_background_object(create_fdlabwall2_3509(3584, 4864), 3);
    add_background_object(create_fdlabwall1_3508(3712, 4864), 3);
    add_background_object(create_fdlabwall2_3509(3840, 4864), 3);
    add_background_object(create_fdlabfloor5_3522(3456, 5120), 3);
    add_background_object(create_fdlabfloor4_3510(3680, 4992), 3);
    add_background_object(create_fdlabfloor4_3510(3456, 5056), 3);
    add_background_object(create_fdlabfloor6_3513(3488, 5056), 3);
    add_background_object(create_fdlabfloor6_3513(3552, 5056), 3);
    add_background_object(create_fdlabfloor6_3513(3616, 5056), 3);
    add_background_object(create_fdlabfloor6_3513(3712, 4992), 3);
    add_background_object(create_fdlabfloor6_3513(3776, 4992), 3);
    add_background_object(create_fdlabfloor6_3513(3840, 4992), 3);
    add_background_object(create_fdlabfloor3_3527(3456, 5056), 3);
    add_background_object(create_fdlabfloor1_3514(3904, 5216), 3);
    add_background_object(create_fdlabfloor1_3514(4032, 5216), 3);
    add_background_object(create_fdlabwall1_3508(3904, 5248), 3);
    add_background_object(create_fdlabwall2_3509(4032, 5248), 3);
    add_background_object(create_fdlabfloor6_3513(3904, 4992), 3);
    add_background_object(create_fdlabwall1_3508(3968, 4864), 3);
    add_background_object(create_fdlabwall2_3509(4096, 4864), 3);
    add_background_object(create_fdlabfloor6_3513(3968, 4992), 3);
    add_background_object(create_fdlabfloor6_3513(4032, 4992), 3);
    add_background_object(create_fdlabfloor6_3513(4096, 4992), 3);
    add_background_object(create_fdlabfloor6_3513(4160, 4992), 3);
    add_background_object(create_fdlabwall2_3509(-64, 4352), 3);
    add_background_object(create_fdlabfloor10_3519(3104, 5376), 3);
    add_background_object(create_fdlabfloor2_3521(2944, 5472), 3);
    add_background_object(create_fdlabfloor10_3519(2912, 5472), 3);
    add_background_object(create_fdlabfloor1_3514(4160, 5216), 3);
    add_background_object(create_fdlabwall1_3508(4160, 5248), 3);
    add_background_object(create_fdlabfloor3_3527(3680, 4992), 3);
    add_background_object(create_fdlabfloor9_3524(3680, 5056), 3);
    add_background_object(create_fdlabwall3_3518(3456, 4992), 3);
    add_background_object(create_fdlabwall1_3508(4224, 4864), 3);
    add_background_object(create_fdlabfloor6_3513(4224, 4992), 3);
    add_background_object(create_fdlabfloor6_3513(4288, 4992), 3);
    add_background_object(create_fdlabwall2_3509(4352, 4864), 3);
    add_background_object(create_fdlabwall3_3518(4352, 4992), 3);
    add_background_object(create_fdlabwall1_3508(4480, 4928), 3);
    add_background_object(create_fdlabfloor8_3517(4352, 4992), 3);
    add_background_object(create_fdlabfloor2_3521(4352, 4992), 3);
    add_background_object(create_fdlabfloor1_3514(4288, 5216), 3);
    add_background_object(create_fdlabwall2_3509(4288, 5248), 3);
    add_background_object(create_fdlabfloor1_3514(4416, 5216), 3);
    add_background_object(create_fdlabwall1_3508(4416, 5248), 3);
    add_background_object(create_fdlabfloor6_3513(4352, 5056), 3);
    add_background_object(create_fdlabfloor6_3513(4480, 5056), 3);
    add_background_object(create_fdlabfloor6_3513(4544, 5056), 3);
    add_background_object(create_fdlabfloor10_3519(4352, 5056), 3);
    add_background_object(create_fdlabfloor6_3513(4416, 5056), 3);
    add_background_object(create_fdlabfloor2_3521(4544, 5216), 3);
    add_background_object(create_fdlabfloor4_3510(4544, 5248), 3);
    add_background_object(create_fdlabfloor4_3510(4544, 5312), 3);
    add_background_object(create_fdlabfloor4_3510(4544, 5376), 3);
    add_background_object(create_fdlabfloor3_3527(4896, 5216), 3);
    add_background_object(create_fdlabfloor8_3517(4896, 5248), 3);
    add_background_object(create_fdlabfloor8_3517(4896, 5312), 3);
    add_background_object(create_fdlabfloor8_3517(4896, 5376), 3);
    add_background_object(create_fdventpipe_3511(4712, 5400), 3);
    add_background_object(create_fdventpipe_3511(4712, 5448), 3);
    add_background_object(create_fdlabfloor1_3514(4928, 5216), 3);
    add_background_object(create_fdlabwall2_3509(4608, 4928), 3);
    add_background_object(create_fdlabwall2_3509(4480, 4800), 3);
    add_background_object(create_fdlabwall1_3508(4608, 4800), 3);
    add_background_object(create_fdlabwall2_3509(4736, 4800), 3);
    add_background_object(create_fdlabwall1_3508(4864, 4800), 3);
    add_background_object(create_fdlabwall1_3508(4352, 4736), 3);
    add_background_object(create_fdlabwall2_3509(4224, 4736), 3);
    add_background_object(create_fdlabwall1_3508(4096, 4736), 3);
    add_background_object(create_fdlabwall2_3509(3968, 4736), 3);
    add_background_object(create_fdlabwall1_3508(3840, 4736), 3);
    add_background_object(create_fdlabwall2_3509(3712, 4736), 3);
    add_background_object(create_fdlabwall1_3508(3584, 4736), 3);
    add_background_object(create_fdlabwall2_3509(3456, 4736), 3);
    add_background_object(create_fdlabwall1_3508(3328, 4736), 3);
    add_background_object(create_fdlabwall2_3509(3200, 4736), 3);
    add_background_object(create_fdlabfloor6_3513(4672, 5056), 3);
    add_background_object(create_fdlabfloor6_3513(4736, 5056), 3);
    add_background_object(create_fdlabfloor6_3513(4608, 5056), 3);
    add_background_object(create_fdlabfloor6_3513(4864, 5056), 3);
    add_background_object(create_fdlabfloor6_3513(4928, 5056), 3);
    add_background_object(create_fdlabfloor6_3513(4800, 5056), 3);
    add_background_object(create_fdlabfloor5_3522(4992, 5056), 3);
    add_background_object(create_fdlabfloor2_3521(4992, 5024), 3);
    add_background_object(create_fdlabfloor1_3514(4864, 5024), 3);
    add_background_object(create_fdlabfloor4_3510(4736, 4960), 3);
    add_background_object(create_fdlabfloor1_3514(4736, 5024), 3);
    add_background_object(create_fdlabfloor6_3513(4736, 4928), 3);
    add_background_object(create_fdlabfloor6_3513(4800, 4928), 3);
    add_background_object(create_fdlabfloor6_3513(4864, 4928), 3);
    add_background_object(create_fdlabfloor6_3513(4928, 4928), 3);
    add_background_object(create_fdlabwall2_3509(4992, 4800), 3);
    add_background_object(create_fdlabwall1_3508(5120, 4800), 3);
    add_background_object(create_fdlabfloor6_3513(4992, 4928), 3);
    add_background_object(create_fdlabfloor6_3513(5056, 4928), 3);
    add_background_object(create_fdlabwall2_3509(5120, 4928), 3);
    add_background_object(create_fdlabfloor3_3527(4736, 4928), 3);
    add_background_object(create_fdlabfloor8_3517(5088, 4928), 3);
    add_background_object(create_fdlabfloor8_3517(5088, 4992), 3);
    add_background_object(create_fdlabfloor2_3521(5088, 4928), 3);
    add_background_object(create_fdlabfloor7_3523(5088, 5056), 3);
    add_background_object(create_fdlabfloor6_3513(5120, 5056), 3);
    add_background_object(create_fdlabfloor6_3513(5184, 5056), 3);
    add_background_object(create_fdlabfloor1_3514(5056, 5216), 3);
    add_background_object(create_fdlabwall1_3508(5184, 5248), 3);
    add_background_object(create_fdlabfloor1_3514(5184, 5216), 3);
    add_background_object(create_fdlabwall1_3508(5248, 4928), 3);
    add_background_object(create_fdlabwall2_3509(5248, 4800), 3);
    add_background_object(create_fdlabfloor6_3513(5248, 5056), 3);
    add_background_object(create_fdlabfloor6_3513(5312, 5056), 3);
    add_background_object(create_fdladder_3448(5024, 5024), 3);
    add_background_object(create_fdladder_3448(5024, 5056), 3);
    add_background_object(create_fdladder_3448(5024, 5088), 3);
    add_background_object(create_fdladder_3448(5024, 5120), 3);
    add_background_object(create_tbswitchpadleft_2693(4768, 4984), 3);
    add_background_object(create_fdlabwall2_3509(5184, 5376), 3);
    add_background_object(create_fdventpipe_3511(4712, 5496), 3);
    add_background_object(create_fdventpipe_3511(4712, 5544), 3);
    add_background_object(create_fdlabwall2_3509(4928, 5344), 3);
    add_background_object(create_fdlabfloor7_3523(4896, 5440), 3);
    add_background_object(create_fdlabfloor6_3513(4928, 5440), 3);
    add_background_object(create_fdlabfloor6_3513(4992, 5440), 3);
    add_background_object(create_fdlabwall1_3508(4800, 5632), 3);
    add_background_object(create_fdlabwall2_3509(4928, 5632), 3);
    add_background_object(create_fdlabwall2_3509(4672, 5632), 3);
    add_background_object(create_fdlabfloor1_3514(4800, 5600), 3);
    add_background_object(create_fdlabfloor1_3514(4928, 5600), 3);
    add_background_object(create_fdlabfloor2_3521(4768, 5568), 3);
    add_background_object(create_fdlabfloor10_3519(4768, 5600), 3);
    add_background_object(create_fdlabfloor3_3527(4736, 5568), 3);
    add_background_object(create_fdlabfloor9_3524(4736, 5600), 3);
    add_background_object(create_fdlabfloor2_3521(4704, 5568), 3);
    add_background_object(create_fdlabfloor10_3519(4704, 5600), 3);
    add_background_object(create_fdlabfloor3_3527(4672, 5568), 3);
    add_background_object(create_fdlabfloor1_3514(4544, 5600), 3);
    add_background_object(create_fdlabfloor1_3514(4416, 5600), 3);
    add_background_object(create_fdlabwall3_3518(4416, 5376), 3);
    add_background_object(create_fdlabfloor9_3524(4544, 5440), 3);
    add_background_object(create_fdlabfloor6_3513(4480, 5440), 3);
    add_background_object(create_fdlabfloor6_3513(4416, 5440), 3);
    add_background_object(create_fdlabfloor10_3519(4384, 5440), 3);
    add_background_object(create_fdlabfloor8_3517(4384, 5376), 3);
    add_background_object(create_fdlabfloor2_3521(4384, 5376), 3);
    add_background_object(create_fdlabfloor6_3513(4288, 5376), 3);
    add_background_object(create_fdlabfloor6_3513(4224, 5376), 3);
    add_background_object(create_fdlabfloor1_3514(4288, 5600), 3);
    add_background_object(create_fdlabwall1_3508(5184, 5504), 3);
    add_background_object(create_fdlabwall2_3509(5184, 5632), 3);
    add_background_object(create_fdlabwall1_3508(5056, 5632), 3);
    add_background_object(create_fdlabfloor1_3514(5056, 5600), 3);
    add_background_object(create_fdlabfloor5_3522(5056, 5440), 3);
    add_background_object(create_fdlabfloor4_3510(5056, 5376), 3);
    add_background_object(create_fdlabfloor8_3517(5152, 5280), 3);
    add_background_object(create_fdlabfloor8_3517(5152, 5344), 3);
    add_background_object(create_fdlabfloor8_3517(5152, 5408), 3);
    add_background_object(create_fdlabfloor8_3517(5152, 5472), 3);
    add_background_object(create_fdlabfloor8_3517(5152, 5536), 3);
    add_background_object(create_fdlabfloor6_3513(5024, 5248), 3);
    add_background_object(create_fdlabfloor6_3513(5088, 5248), 3);
    add_background_object(create_fdlabfloor6_3513(4960, 5248), 3);
    add_background_object(create_fdlabfloor4_3510(4928, 5280), 3);
    add_background_object(create_fdlabfloor3_3527(4928, 5248), 3);
    add_background_object(create_fdlabfloor2_3521(5152, 5248), 3);
    add_background_object(create_fdlabfloor2_3521(5056, 5344), 3);
    add_background_object(create_fdlabfloor1_3514(4928, 5344), 3);
    add_background_object(create_fdladder_3448(5088, 5344), 3);
    add_background_object(create_fdladder_3448(5088, 5376), 3);
    add_background_object(create_fdladder_3448(5088, 5408), 3);
    add_background_object(create_fdladder_3448(5088, 5440), 3);
    add_background_object(create_fdladder_3448(5088, 5472), 3);
    add_background_object(create_tbswitchpadleft_2693(4960, 5304), 3);
    add_background_object(create_fdlabfloor4_3510(3776, 5504), 3);
    add_background_object(create_fdlabfloor9_3524(1920, 5376), 3);
    add_background_object(create_fdlabwall2_3509(5312, 5248), 3);
    add_background_object(create_fdlabwall1_3508(5312, 5376), 3);
    add_background_object(create_fdlabwall2_3509(5312, 5504), 3);
    add_background_object(create_fdlabwall1_3508(5312, 5632), 3);
    add_background_object(create_fdlabfloor1_3514(5312, 5216), 3);
    add_background_object(create_fdlabwall1_3508(4672, 5760), 3);
    add_background_object(create_fdlabwall2_3509(4800, 5760), 3);
    add_background_object(create_fdlabwall2_3509(4544, 5760), 3);
    add_background_object(create_fdlabwall2_3509(5056, 5760), 3);
    add_background_object(create_fdlabwall1_3508(4928, 5760), 3);
    add_background_object(create_fdlabwall1_3508(5184, 5760), 3);
    add_background_object(create_fdlabwall2_3509(5312, 5760), 3);
    add_background_object(create_fdlabfloor6_3513(4160, 5376), 3);
    add_background_object(create_fdlabfloor6_3513(4096, 5376), 3);
    add_background_object(create_fdlabfloor1_3514(4160, 5600), 3);
    add_background_object(create_fdlabfloor6_3513(4032, 5376), 3);
    add_background_object(create_fdlabfloor6_3513(3968, 5376), 3);
    add_background_object(create_fdlabfloor1_3514(4032, 5600), 3);
    add_background_object(create_fdlabfloor6_3513(3904, 5376), 3);
    add_background_object(create_fdlabfloor1_3514(3904, 5600), 3);
    add_background_object(create_fdlabfloor4_3510(3776, 5568), 3);
    add_background_object(create_fdlabfloor4_3510(3776, 5632), 3);
    add_background_object(create_fdlabwall4_3516(3904, 5760), 3);
    add_background_object(create_fdlabwall2_3509(3776, 5760), 3);
    add_background_object(create_fdlabfloor13_3525(3904, 5728), 3);
    add_background_object(create_fdlabfloor13_3525(3968, 5792), 3);
    add_background_object(create_fdlabfloor1_3514(4032, 5856), 3);
    add_background_object(create_fdlabfloor1_3514(4160, 5856), 3);
    add_background_object(create_fdlabfloor3_3527(3872, 5600), 3);
    add_background_object(create_fdlabfloor6_3513(3904, 5632), 3);
    add_background_object(create_fdlabfloor6_3513(4224, 5632), 3);
    add_background_object(create_fdlabfloor6_3513(4160, 5632), 3);
    add_background_object(create_fdlabfloor6_3513(4096, 5632), 3);
    add_background_object(create_fdlabfloor6_3513(4032, 5632), 3);
    add_background_object(create_fdlabfloor6_3513(3968, 5632), 3);
    add_background_object(create_fdlabfloor1_3514(4288, 5856), 3);
    add_background_object(create_fdlabfloor1_3514(4544, 5728), 3);
    add_background_object(create_fdlabfloor6_3513(4416, 5632), 3);
    add_background_object(create_fdlabfloor6_3513(4352, 5632), 3);
    add_background_object(create_fdlabfloor6_3513(4288, 5632), 3);
    add_background_object(create_fdlabfloor6_3513(4608, 5632), 3);
    add_background_object(create_fdlabfloor6_3513(4544, 5632), 3);
    add_background_object(create_fdlabfloor6_3513(4480, 5632), 3);
    add_background_object(create_fdlabfloor8_3517(4672, 5600), 3);
    add_background_object(create_fdlabfloor3_3527(4512, 5728), 3);
    add_background_object(create_fdlabfloor8_3517(4512, 5760), 3);
    add_background_object(create_fdlabfloor8_3517(4512, 5824), 3);
    add_background_object(create_fdlabfloor1_3514(4416, 5856), 3);
    add_background_object(create_fdlabfloor8_3517(4672, 5664), 3);
    add_background_object(create_fdlabfloor9_3524(4672, 5728), 3);
    add_background_object(create_fdlabfloor10_3519(3872, 5632), 3);
    add_background_object(create_fdlabwall7_3564(3776, 5376), 3);
    add_background_object(create_fdlabfloor4_3510(3776, 5696), 3);
    add_background_object(create_fdlabfloor1_3514(3776, 5728), 3);
    add_background_object(create_fdlabfloor16_3529(3840, 5376), 3);
    add_background_object(create_fdlabfloor16_3529(3776, 5440), 3);
    add_background_object(create_fdfloor7_3565(6176, 2048), 3);
    add_background_object(create_fdfloor7_3565(6368, 2048), 3);
    add_background_object(create_fdfloor8_3566(6176, 2304), 3);
    add_background_object(create_fdfloor8_3566(6368, 2304), 3);
    add_background_object(create_fdventpipesquare_3567(6048, 1792), 3);
    add_background_object(create_fdventpipesquare_3567(6368, 1792), 3);
    add_background_object(create_fdventpipesquare_3567(6048, 1984), 3);
    add_background_object(create_fdventpipesquare_3567(6368, 1984), 3);
    add_background_object(create_fdventpipesquare_3567(6112, 2048), 3);
    add_background_object(create_fdventpipesquare_3567(6304, 2048), 3);
    add_background_object(create_fdventpipesquare_3567(6304, 2112), 3);
    add_background_object(create_fdventpipesquare_3567(6112, 2112), 3);
    add_background_object(create_fdventpipesquare_3567(6304, 2240), 3);
    add_background_object(create_fdventpipesquare_3567(6112, 2240), 3);
    add_background_object(create_fdventpipesquare_3567(6304, 2304), 3);
    add_background_object(create_fdventpipesquare_3567(6112, 2304), 3);
    add_background_object(create_fdventpipesquare_3567(5984, 1984), 3);
    add_background_object(create_fdventpipesquare_3567(6176, 2368), 3);
    add_background_object(create_fdventpipesquare_3567(6112, 2368), 3);
    add_background_object(create_fdventpipesquare_3567(6048, 2368), 3);
    add_background_object(create_fdventpipesquare_3567(6368, 2368), 3);
    add_background_object(create_fdventpipesquare_3567(6304, 2368), 3);
    add_background_object(create_fdventpipesquare_3567(6240, 2368), 3);
    add_background_object(create_fdventpipesquare_3567(5984, 2368), 3);
    add_background_object(create_fdventpipesquare_3567(6432, 2368), 3);
    add_background_object(create_fdventpipesquare_3567(5984, 1792), 3);
    add_background_object(create_fdventpipesquare_3567(6432, 1792), 3);
    add_background_object(create_fdventpipesquare_3567(5760, 2112), 3);
    add_background_object(create_fdventpipesquare_3567(5696, 2112), 3);
    add_background_object(create_fdventpipesquare_3567(5568, 2720), 3);
    add_background_object(create_fdventpipesquare_3567(5632, 2720), 3);
    add_background_object(create_fdventpipesquare_3567(5696, 2720), 3);
    add_background_object(create_fdventpipesquare_3567(5760, 2720), 3);
    add_background_object(create_fdventpipesquare_3567(5632, 2112), 3);
    add_background_object(create_fdventpipesquare_3567(5568, 2112), 3);
    add_background_object(create_fdventpipesquare_3567(5568, 1856), 3);
    add_background_object(create_fdventpipesquare_3567(5568, 1792), 3);
    add_background_object(create_fdventpipesquare_3567(5568, 1920), 3);
    add_background_object(create_fdventpipesquare_3567(5824, 2112), 3);
    add_background_object(create_fdventpipesquare_3567(5824, 2176), 3);
    add_background_object(create_fdventpipesquare_3567(5824, 2240), 3);
    add_background_object(create_fdventpipesquare_3567(6432, 1984), 3);
    add_background_object(create_fdventpipesquare_3567(6720, 2112), 3);
    add_background_object(create_fdventpipesquare_3567(6656, 2112), 3);
    add_background_object(create_fdventpipesquare_3567(6592, 2112), 3);
    add_background_object(create_fdventpipesquare_3567(6784, 2112), 3);
    add_background_object(create_fdventpipesquare_3567(6912, 2112), 3);
    add_background_object(create_fdventpipesquare_3567(6848, 2112), 3);
    add_background_object(create_fdventpipesquare_3567(6976, 2112), 3);
    add_background_object(create_fdventpipesquare_3567(6496, 1792), 3);
    add_background_object(create_fdventpipesquare_3567(6560, 1792), 3);
    add_background_object(create_fdventpipesquare_3567(6592, 2176), 3);
    add_background_object(create_fdventpipesquare_3567(6592, 2240), 3);
    add_background_object(create_fdventpipesquare_3567(6016, 2560), 3);
    add_background_object(create_fdventpipesquare_3567(6016, 2624), 3);
    add_background_object(create_fdventpipesquare_3567(6016, 2688), 3);
    add_background_object(create_fdventpipesquare_3567(6016, 2752), 3);
    add_background_object(create_fdventpipesquare_3567(6400, 2560), 3);
    add_background_object(create_fdventpipesquare_3567(6400, 2624), 3);
    add_background_object(create_fdventpipesquare_3567(6400, 2688), 3);
    add_background_object(create_fdventpipesquare_3567(6400, 2752), 3);
    add_background_object(create_fdventpipesquare_3567(5760, 2784), 3);
    add_background_object(create_fdventpipesquare_3567(5824, 2784), 3);
    add_background_object(create_fdventpipesquare_3567(5888, 2784), 3);
    add_background_object(create_fdventpipesquare_3567(6016, 2784), 3);
    add_background_object(create_fdventpipesquare_3567(6400, 2784), 3);
    add_background_object(create_fdventpipesquare_3567(6528, 2784), 3);
    add_background_object(create_fdventpipesquare_3567(6592, 2784), 3);
    add_background_object(create_fdventpipesquare_3567(6656, 2752), 3);
    add_background_object(create_fdventpipesquare_3567(6656, 2688), 3);
    add_background_object(create_fdventpipesquare_3567(6432, 3968), 3);
    add_background_object(create_fdventpipesquare_3567(6368, 3968), 3);
    add_background_object(create_fdventpipesquare_3567(6048, 3968), 3);
    add_background_object(create_fdventpipesquare_3567(5984, 3968), 3);
    add_background_object(create_fdventpipesquare_3567(6208, 4384), 3);
    add_background_object(create_fdventpipesquare_3567(5568, 3840), 3);
    add_background_object(create_fdventpipesquare_3567(5568, 3904), 3);
    add_background_object(create_fdventpipesquare_3567(5568, 3968), 3);
    add_background_object(create_fdventpipesquare_3567(5568, 4032), 3);
    add_background_object(create_fdventpipesquare_3567(5568, 4096), 3);
    add_background_object(create_fdventpipesquare_3567(6720, 3840), 3);
    add_background_object(create_fdventpipesquare_3567(6720, 3904), 3);
    add_background_object(create_fdventpipesquare_3567(6720, 3968), 3);
    add_background_object(create_fdventpipesquare_3567(6720, 4032), 3);
    add_background_object(create_fdventpipesquare_3567(6720, 4096), 3);
    add_background_object(create_fdventpipesquare_3567(5632, 4096), 3);
    add_background_object(create_fdventpipesquare_3567(6144, 4384), 3);
    add_background_object(create_fdventpipesquare_3567(6080, 4384), 3);
    add_background_object(create_fdventpipesquare_3567(6016, 4384), 3);
    add_background_object(create_fdfloor9_3568(6240, 2048), 3);
    add_background_object(create_fdfloor9_3568(6048, 2048), 3);
    add_background_object(create_fdfloor10_3569(6048, 2304), 3);
    add_background_object(create_fdfloor10_3569(6240, 2304), 3);
    add_background_object(create_fdfloor1_3570(6176, 2240), 3);
    add_background_object(create_fdfloor1_3570(6240, 2240), 3);
    add_background_object(create_fdfloor1_3570(6176, 2112), 3);
    add_background_object(create_fdfloor1_3570(6240, 2112), 3);
    add_background_object(create_fdfloor1_3570(5824, 4160), 3);
    add_background_object(create_fdfloor1_3570(5888, 4160), 3);
    add_background_object(create_fdfloor1_3570(6528, 4160), 3);
    add_background_object(create_fdfloor1_3570(6592, 4160), 3);
    add_background_object(create_fdramp1_3571(5728, 2048), 3);
    add_background_object(create_fdramp2_3572(6624, 2048), 3);
    add_background_object(create_fdlabwall2_3509(5440, 5632), 3);
    add_background_object(create_fdlabwall1_3508(5568, 5632), 3);
    add_background_object(create_fdlabwall1_3508(5440, 5760), 3);
    add_background_object(create_fdlabwall2_3509(5568, 5760), 3);
    add_background_object(create_fdlabwall2_3509(5696, 5632), 3);
    add_background_object(create_fdlabwall1_3508(5824, 5632), 3);
    add_background_object(create_fdlabwall1_3508(5696, 5760), 3);
    add_background_object(create_fdlabwall2_3509(5824, 5760), 3);
    add_background_object(create_fdlabwall2_3509(5952, 5632), 3);
    add_background_object(create_fdlabwall1_3508(5952, 5760), 3);
    add_background_object(create_fdlabwall1_3508(6400, 5632), 3);
    add_background_object(create_fdlabwall2_3509(6400, 5760), 3);
    add_background_object(create_fdlabwall2_3509(6528, 5632), 3);
    add_background_object(create_fdlabwall1_3508(6528, 5760), 3);
    add_background_object(create_fdlabwall1_3508(6656, 5632), 3);
    add_background_object(create_fdlabwall2_3509(6656, 5760), 3);
    add_background_object(create_fdlabwall1_3508(6400, 5376), 3);
    add_background_object(create_fdlabwall2_3509(6400, 5504), 3);
    add_background_object(create_fdlabwall2_3509(6528, 5376), 3);
    add_background_object(create_fdlabwall1_3508(6528, 5504), 3);
    add_background_object(create_fdlabwall1_3508(6656, 5376), 3);
    add_background_object(create_fdlabwall2_3509(6656, 5504), 3);
    add_background_object(create_fdlabwall1_3508(6400, 5120), 3);
    add_background_object(create_fdlabwall2_3509(6400, 5248), 3);
    add_background_object(create_fdlabwall2_3509(6528, 5120), 3);
    add_background_object(create_fdlabwall1_3508(6528, 5248), 3);
    add_background_object(create_fdlabwall1_3508(6656, 5120), 3);
    add_background_object(create_fdlabwall2_3509(6656, 5248), 3);
    add_background_object(create_fdlabwall1_3508(6400, 4864), 3);
    add_background_object(create_fdlabwall2_3509(6400, 4992), 3);
    add_background_object(create_fdlabwall2_3509(6528, 4864), 3);
    add_background_object(create_fdlabwall1_3508(6528, 4992), 3);
    add_background_object(create_fdlabwall1_3508(6656, 4864), 3);
    add_background_object(create_fdlabwall2_3509(6656, 4992), 3);
    add_background_object(create_fdlabwall2_3509(5696, 5376), 3);
    add_background_object(create_fdlabwall1_3508(5824, 5376), 3);
    add_background_object(create_fdlabwall2_3509(5952, 5376), 3);
    add_background_object(create_fdlabwall2_3509(5824, 5248), 3);
    add_background_object(create_fdlabwall1_3508(5952, 5248), 3);
    add_background_object(create_fdlabwall1_3508(5696, 5248), 3);
    add_background_object(create_fdlabwall2_3509(5696, 5120), 3);
    add_background_object(create_fdlabwall1_3508(5824, 5120), 3);
    add_background_object(create_fdlabwall2_3509(5952, 5120), 3);
    add_background_object(create_fdlabwall2_3509(5824, 4992), 3);
    add_background_object(create_fdlabwall1_3508(5952, 4992), 3);
    add_background_object(create_fdlabwall1_3508(5696, 4992), 3);
    add_background_object(create_fdlabwall2_3509(5696, 4864), 3);
    add_background_object(create_fdlabwall1_3508(5824, 4864), 3);
    add_background_object(create_fdlabwall2_3509(5952, 4864), 3);
    add_background_object(create_fdlabwall2_3509(5824, 4736), 3);
    add_background_object(create_fdlabwall1_3508(5952, 4736), 3);
    add_background_object(create_fdlabwall1_3508(5696, 4736), 3);
    add_background_object(create_fdlabwall1_3508(6400, 4608), 3);
    add_background_object(create_fdlabwall2_3509(6400, 4736), 3);
    add_background_object(create_fdlabwall2_3509(6528, 4608), 3);
    add_background_object(create_fdlabwall1_3508(6528, 4736), 3);
    add_background_object(create_fdlabwall1_3508(6656, 4608), 3);
    add_background_object(create_fdlabwall2_3509(6656, 4736), 3);
    add_background_object(create_fdcurve4_3533(6560, 4512), 3);
    add_background_object(create_fdlabwall2_3509(5696, 4608), 3);
    add_background_object(create_fdlabwall1_3508(5824, 4608), 3);
    add_background_object(create_fdlabwall2_3509(5952, 4608), 3);
    add_background_object(create_fdlabwall2_3509(5440, 4608), 3);
    add_background_object(create_fdlabwall1_3508(5568, 4608), 3);
    add_background_object(create_fdlabwall2_3509(5440, 4864), 3);
    add_background_object(create_fdlabwall1_3508(5568, 4864), 3);
    add_background_object(create_fdlabwall2_3509(5568, 4736), 3);
    add_background_object(create_fdlabwall1_3508(5440, 4736), 3);
    add_background_object(create_fdventpipesquare_3567(5376, 4928), 3);
    add_background_object(create_fdventpipesquare_3567(5376, 4864), 3);
    add_background_object(create_fdventpipesquare_3567(5376, 4800), 3);
    add_background_object(create_fdventpipesquare_3567(5376, 4992), 3);
    add_background_object(create_fdlabfloor6_3513(5376, 5056), 3);
    add_background_object(create_fdlabfloor6_3513(5440, 5056), 3);
    add_background_object(create_fdlabfloor6_3513(5504, 5056), 3);
    add_background_object(create_fdlabfloor6_3513(5568, 5056), 3);
    add_background_object(create_fdlabfloor6_3513(5632, 5056), 3);
    add_background_object(create_fdlabfloor8_3517(5664, 5088), 3);
    add_background_object(create_fdlabfloor8_3517(5664, 5152), 3);
    add_background_object(create_fdlabfloor8_3517(5664, 5216), 3);
    add_background_object(create_fdlabfloor8_3517(5664, 5280), 3);
    add_background_object(create_fdlabfloor8_3517(5664, 5344), 3);
    add_background_object(create_fdlabfloor8_3517(5664, 5408), 3);
    add_background_object(create_fdlabfloor2_3521(5664, 5056), 3);
    add_background_object(create_fdlabfloor2_3521(5440, 5216), 3);
    add_background_object(create_fdlabfloor4_3510(5440, 5248), 3);
    add_background_object(create_fdlabfloor4_3510(5440, 5312), 3);
    add_background_object(create_fdlabfloor4_3510(5440, 5376), 3);
    add_background_object(create_fdlabfloor4_3510(5440, 5440), 3);
    add_background_object(create_fdlabfloor4_3510(5440, 5504), 3);
    add_background_object(create_fdlabfloor4_3510(5440, 5568), 3);
    add_background_object(create_fdlabfloor1_3514(5440, 5632), 3);
    add_background_object(create_fdlabfloor1_3514(5568, 5632), 3);
    add_background_object(create_fdlabfloor1_3514(5696, 5632), 3);
    add_background_object(create_fdlabfloor1_3514(5824, 5632), 3);
    add_background_object(create_fdlabfloor1_3514(5952, 5632), 3);
    add_background_object(create_fdlabfloor10_3519(5664, 5472), 3);
    add_background_object(create_fdlabfloor6_3513(5696, 5472), 3);
    add_background_object(create_fdlabfloor6_3513(5760, 5472), 3);
    add_background_object(create_fdlabfloor6_3513(5824, 5472), 3);
    add_background_object(create_fdlabfloor6_3513(5888, 5472), 3);
    add_background_object(create_fdlabfloor6_3513(5952, 5472), 3);
    add_background_object(create_fdlabfloor6_3513(6016, 5472), 3);
    add_background_object(create_fdlabfloor2_3521(6080, 5632), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 5824), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 5760), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 5696), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 5632), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 5568), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 5504), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 5440), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 5376), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 5312), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 5248), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 5184), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 5120), 3);
    add_background_object(create_fdlabfloor9_3524(6080, 5472), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 5408), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 5344), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 5280), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 5216), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 5152), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 5088), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 5024), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 4960), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 4896), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 4832), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 4768), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 4704), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 4640), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 5056), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 4992), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 4928), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 4864), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 4800), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 4736), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 4672), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 4608), 3);
    add_background_object(create_fdcurve2_3534(5824, 4512), 3);
    add_background_object(create_fdlabwall1_3508(5696, 4480), 3);
    add_background_object(create_fdlabwall2_3509(5696, 4352), 3);
    add_background_object(create_fdlabwall2_3509(5440, 4352), 3);
    add_background_object(create_fdlabwall1_3508(5568, 4352), 3);
    add_background_object(create_fdlabwall2_3509(5568, 4480), 3);
    add_background_object(create_fdlabwall1_3508(5440, 4480), 3);
    add_background_object(create_fdlabwall1_3508(5440, 4224), 3);
    add_background_object(create_fdlabwall2_3509(5696, 4160), 3);
    add_background_object(create_fdlabwall1_3508(5568, 4160), 3);
    add_background_object(create_fdlabwall3_3518(5440, 4992), 3);
    add_background_object(create_fdlabwall3_3518(5568, 4992), 3);
    add_background_object(create_fdlabwall3_3518(5568, 4288), 3);
    add_background_object(create_fdlabwall3_3518(5696, 4288), 3);
    add_background_object(create_fdcurve4_3533(6080, 4256), 3);
    add_background_object(create_fdcurve2_3534(6304, 4256), 3);
    add_background_object(create_fdcurve1_3532(6304, 4032), 3);
    add_background_object(create_fdcurve3_3531(6080, 4032), 3);
    add_background_object(create_fdlabwall1_3508(6176, 4160), 3);
    add_background_object(create_fdlabwall2_3509(6176, 4032), 3);
    add_background_object(create_fdlabfloor3_3527(6368, 4608), 3);
    add_background_object(create_fdlabfloor2_3521(6080, 4608), 3);
    add_background_object(create_fdlabfloor1_3514(5952, 4608), 3);
    add_background_object(create_fdlabfloor1_3514(5824, 4608), 3);
    add_background_object(create_fdlabfloor1_3514(6528, 4608), 3);
    add_background_object(create_fdlabfloor1_3514(6400, 4608), 3);
    add_background_object(create_fdlabfloor9_3524(6656, 4608), 3);
    add_background_object(create_fdlabfloor10_3519(5792, 4608), 3);
    add_background_object(create_fdlabwall2_3509(6784, 4608), 3);
    add_background_object(create_fdlabwall1_3508(6912, 4608), 3);
    add_background_object(create_fdlabwall1_3508(6784, 4480), 3);
    add_background_object(create_fdlabwall2_3509(6912, 4480), 3);
    add_background_object(create_fdlabwall2_3509(6656, 4480), 3);
    add_background_object(create_fdlabwall1_3508(6656, 4352), 3);
    add_background_object(create_fdlabwall2_3509(6784, 4352), 3);
    add_background_object(create_fdlabwall1_3508(6912, 4352), 3);
    add_background_object(create_fdlabwall3_3518(6656, 4288), 3);
    add_background_object(create_fdlabwall1_3508(6784, 4224), 3);
    add_background_object(create_fdlabwall2_3509(6912, 4224), 3);
    add_background_object(create_fdlabwall2_3509(6656, 4160), 3);
    add_background_object(create_fdlabwall2_3509(6784, 4096), 3);
    add_background_object(create_fdlabwall1_3508(6912, 4096), 3);
    add_background_object(create_fdlabwall1_3508(6784, 3968), 3);
    add_background_object(create_fdlabwall2_3509(6912, 3968), 3);
    add_background_object(create_fdlabwall2_3509(6784, 3840), 3);
    add_background_object(create_fdlabwall1_3508(6912, 3840), 3);
    add_background_object(create_fdlabwall1_3508(6784, 3712), 3);
    add_background_object(create_fdlabwall2_3509(6912, 3712), 3);
    add_background_object(create_fdcurve3_3531(6624, 3840), 3);
    add_background_object(create_fdcurve1_3532(5632, 3840), 3);
    add_background_object(create_fdlabwall2_3509(5440, 4096), 3);
    add_background_object(create_fdlabwall1_3508(5440, 3968), 3);
    add_background_object(create_fdlabwall2_3509(5440, 3840), 3);
    add_background_object(create_fdlabwall1_3508(5440, 3712), 3);
    add_background_object(create_fdlabfloor6_3513(6144, 4448), 3);
    add_background_object(create_fdlabfloor6_3513(6208, 4448), 3);
    add_background_object(create_fdlabfloor6_3513(6272, 4448), 3);
    add_background_object(create_fdlabfloor6_3513(6336, 4448), 3);
    add_background_object(create_fdlabfloor6_3513(6016, 4448), 3);
    add_background_object(create_fdlabfloor6_3513(6080, 4448), 3);
    add_background_object(create_fdlabfloor6_3513(6400, 4448), 3);
    add_background_object(create_fdlabfloor10_3519(5984, 4448), 3);
    add_background_object(create_fdlabfloor9_3524(6464, 4448), 3);
    add_background_object(create_fdlabfloor4_3510(6464, 4384), 3);
    add_background_object(create_fdlabfloor8_3517(5984, 4384), 3);
    add_background_object(create_fdlabfloor3_3527(5984, 4352), 3);
    add_background_object(create_fdlabfloor1_3514(6016, 4352), 3);
    add_background_object(create_fdlabfloor2_3521(6464, 4352), 3);
    add_background_object(create_fdlabfloor1_3514(6336, 4352), 3);
    add_background_object(create_fdlabfloor11_3512(6144, 4352), 3);
    add_background_object(create_fdlabfloor11_3512(6272, 4352), 3);
    add_background_object(create_fdlabfloor4_3510(6272, 4320), 3);
    add_background_object(create_fdlabfloor4_3510(6272, 4256), 3);
    add_background_object(create_fdlabfloor4_3510(6272, 4192), 3);
    add_background_object(create_fdlabfloor4_3510(6272, 4128), 3);
    add_background_object(create_fdlabfloor4_3510(6272, 4064), 3);
    add_background_object(create_fdlabfloor8_3517(6176, 4320), 3);
    add_background_object(create_fdlabfloor8_3517(6176, 4256), 3);
    add_background_object(create_fdlabfloor8_3517(6176, 4192), 3);
    add_background_object(create_fdlabfloor8_3517(6176, 4128), 3);
    add_background_object(create_fdlabfloor8_3517(6176, 4064), 3);
    add_background_object(create_fdlabfloor11_3512(6208, 4032), 3);
    add_background_object(create_fdlabfloor2_3521(6272, 4032), 3);
    add_background_object(create_fdlabfloor3_3527(6176, 4032), 3);
    add_background_object(create_fdventpipesquare_3567(6336, 4384), 3);
    add_background_object(create_fdventpipesquare_3567(6272, 4384), 3);
    add_background_object(create_fdventpipesquare_3567(6400, 4384), 3);
    add_background_object(create_fdlabfloor4_3510(5792, 4544), 3);
    add_background_object(create_fdlabfloor4_3510(5792, 4480), 3);
    add_background_object(create_fdlabfloor4_3510(5792, 4416), 3);
    add_background_object(create_fdlabfloor4_3510(5792, 4352), 3);
    add_background_object(create_fdlabfloor4_3510(5792, 4288), 3);
    add_background_object(create_fdlabfloor4_3510(5792, 4224), 3);
    add_background_object(create_fdlabfloor4_3510(5792, 4160), 3);
    add_background_object(create_fdlabfloor2_3521(5792, 4160), 3);
    add_background_object(create_fdlabfloor1_3514(5664, 4160), 3);
    add_background_object(create_fdlabfloor1_3514(5536, 4160), 3);
    add_background_object(create_fdlabfloor4_3510(5536, 4096), 3);
    add_background_object(create_fdlabfloor4_3510(5536, 4032), 3);
    add_background_object(create_fdlabfloor4_3510(5536, 3968), 3);
    add_background_object(create_fdlabfloor4_3510(5536, 3904), 3);
    add_background_object(create_fdlabfloor4_3510(5536, 3840), 3);
    add_background_object(create_fdlabwall2_3509(5568, 3712), 3);
    add_background_object(create_fdlabwall1_3508(5696, 3712), 3);
    add_background_object(create_fdlabwall2_3509(5824, 3712), 3);
    add_background_object(create_fdlabwall1_3508(5952, 3712), 3);
    add_background_object(create_fdlabwall1_3508(6528, 3712), 3);
    add_background_object(create_fdlabwall2_3509(6656, 3712), 3);
    add_background_object(create_fdlabwall2_3509(6400, 3712), 3);
    add_background_object(create_fdlabwall1_3508(5824, 3584), 3);
    add_background_object(create_fdlabwall2_3509(5952, 3584), 3);
    add_background_object(create_fdlabwall2_3509(5824, 3456), 3);
    add_background_object(create_fdlabwall1_3508(5952, 3456), 3);
    add_background_object(create_fdlabwall1_3508(5824, 3328), 3);
    add_background_object(create_fdlabwall2_3509(5952, 3328), 3);
    add_background_object(create_fdlabwall2_3509(5824, 3200), 3);
    add_background_object(create_fdlabwall1_3508(5952, 3200), 3);
    add_background_object(create_fdventpipesquare_3567(5920, 3968), 3);
    add_background_object(create_fdventpipesquare_3567(6496, 3968), 3);
    add_background_object(create_fdlabfloor3_3527(5536, 3808), 3);
    add_background_object(create_fdlabfloor6_3513(5568, 3808), 3);
    add_background_object(create_fdlabfloor6_3513(5632, 3808), 3);
    add_background_object(create_fdlabfloor6_3513(5696, 3808), 3);
    add_background_object(create_fdlabfloor6_3513(5760, 3808), 3);
    add_background_object(create_fdlabfloor6_3513(5824, 3808), 3);
    add_background_object(create_fdlabfloor6_3513(5888, 3808), 3);
    add_background_object(create_fdlabfloor6_3513(5952, 3808), 3);
    add_background_object(create_fdlabfloor6_3513(6016, 3808), 3);
    add_background_object(create_fdlabfloor5_3522(6080, 3808), 3);
    add_background_object(create_fdlabfloor7_3523(6368, 3808), 3);
    add_background_object(create_fdlabfloor6_3513(6400, 3808), 3);
    add_background_object(create_fdlabfloor6_3513(6464, 3808), 3);
    add_background_object(create_fdlabfloor6_3513(6528, 3808), 3);
    add_background_object(create_fdlabfloor6_3513(6592, 3808), 3);
    add_background_object(create_fdlabfloor6_3513(6656, 3808), 3);
    add_background_object(create_fdlabfloor6_3513(6720, 3808), 3);
    add_background_object(create_fdlabfloor8_3517(6656, 4544), 3);
    add_background_object(create_fdlabfloor8_3517(6656, 4480), 3);
    add_background_object(create_fdlabfloor8_3517(6656, 4416), 3);
    add_background_object(create_fdlabfloor8_3517(6656, 4352), 3);
    add_background_object(create_fdlabfloor8_3517(6656, 4288), 3);
    add_background_object(create_fdlabfloor8_3517(6656, 4224), 3);
    add_background_object(create_fdlabfloor8_3517(6656, 4160), 3);
    add_background_object(create_fdlabfloor3_3527(6656, 4160), 3);
    add_background_object(create_fdlabfloor1_3514(6688, 4160), 3);
    add_background_object(create_fdlabfloor8_3517(6784, 4096), 3);
    add_background_object(create_fdlabfloor8_3517(6784, 4032), 3);
    add_background_object(create_fdlabfloor8_3517(6784, 3968), 3);
    add_background_object(create_fdlabfloor8_3517(6784, 3904), 3);
    add_background_object(create_fdlabfloor8_3517(6784, 3840), 3);
    add_background_object(create_fdlabfloor2_3521(6784, 3808), 3);
    add_background_object(create_fdlabwall1_3508(6656, 3584), 3);
    add_background_object(create_fdlabwall2_3509(6784, 3584), 3);
    add_background_object(create_fdlabwall1_3508(6912, 3584), 3);
    add_background_object(create_fdlabwall1_3508(6400, 3584), 3);
    add_background_object(create_fdlabwall2_3509(6528, 3584), 3);
    add_background_object(create_fdlabwall1_3508(6528, 3456), 3);
    add_background_object(create_fdlabwall2_3509(6400, 3456), 3);
    add_background_object(create_fdlabwall1_3508(6400, 3328), 3);
    add_background_object(create_fdlabwall2_3509(6528, 3328), 3);
    add_background_object(create_fdlabwall1_3508(6528, 3200), 3);
    add_background_object(create_fdlabwall2_3509(6400, 3200), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 3744), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 3680), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 3616), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 3552), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 3488), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 3424), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 3360), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 3296), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 3232), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 3744), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 3680), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 3616), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 3552), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 3488), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 3424), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 3360), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 3296), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 3232), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 3168), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 3104), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 3040), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 2976), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 3168), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 3104), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 3040), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 2976), 3);
    add_background_object(create_fdlabwall1_3508(5824, 3072), 3);
    add_background_object(create_fdlabwall2_3509(5952, 3072), 3);
    add_background_object(create_fdlabwall2_3509(5824, 2944), 3);
    add_background_object(create_fdlabwall1_3508(5952, 2944), 3);
    add_background_object(create_fdlabwall1_3508(5568, 3072), 3);
    add_background_object(create_fdlabwall2_3509(5696, 3072), 3);
    add_background_object(create_fdlabwall2_3509(5568, 2944), 3);
    add_background_object(create_fdlabwall1_3508(5696, 2944), 3);
    add_background_object(create_fdlabwall2_3509(5440, 3072), 3);
    add_background_object(create_fdlabwall1_3508(5440, 2944), 3);
    add_background_object(create_fdlabwall2_3509(5440, 2816), 3);
    add_background_object(create_fdlabwall1_3508(5440, 2688), 3);
    add_background_object(create_fdlabwall1_3508(6400, 3072), 3);
    add_background_object(create_fdlabwall2_3509(6528, 3072), 3);
    add_background_object(create_fdlabwall1_3508(6528, 2944), 3);
    add_background_object(create_fdlabwall2_3509(6400, 2944), 3);
    add_background_object(create_fdlabwall1_3508(6656, 3072), 3);
    add_background_object(create_fdlabwall2_3509(6784, 3072), 3);
    add_background_object(create_fdlabwall1_3508(6784, 2944), 3);
    add_background_object(create_fdlabwall2_3509(6656, 2944), 3);
    add_background_object(create_fdlabwall1_3508(6912, 3072), 3);
    add_background_object(create_fdlabwall2_3509(7040, 3072), 3);
    add_background_object(create_fdlabwall1_3508(7040, 2944), 3);
    add_background_object(create_fdlabwall2_3509(6912, 2944), 3);
    add_background_object(create_fdlabwall1_3508(7168, 3072), 3);
    add_background_object(create_fdlabwall2_3509(7168, 2944), 3);
    add_background_object(create_fdlabwall2_3509(7040, 2816), 3);
    add_background_object(create_fdlabwall1_3508(7040, 2688), 3);
    add_background_object(create_fdlabwall1_3508(7168, 2816), 3);
    add_background_object(create_fdlabwall2_3509(7168, 2688), 3);
    add_background_object(create_fdlabwall2_3509(7040, 2560), 3);
    add_background_object(create_fdlabwall1_3508(7040, 2432), 3);
    add_background_object(create_fdlabwall1_3508(7168, 2560), 3);
    add_background_object(create_fdlabwall2_3509(7168, 2432), 3);
    add_background_object(create_fdlabwall2_3509(6784, 2560), 3);
    add_background_object(create_fdlabwall1_3508(6784, 2432), 3);
    add_background_object(create_fdlabwall1_3508(6912, 2560), 3);
    add_background_object(create_fdlabwall2_3509(6912, 2432), 3);
    add_background_object(create_fdlabwall2_3509(6528, 2560), 3);
    add_background_object(create_fdlabwall1_3508(6656, 2560), 3);
    add_background_object(create_fdlabwall2_3509(7040, 2304), 3);
    add_background_object(create_fdlabwall1_3508(7040, 2176), 3);
    add_background_object(create_fdlabwall1_3508(7168, 2304), 3);
    add_background_object(create_fdlabwall2_3509(7168, 2176), 3);
    add_background_object(create_fdlabwall2_3509(6784, 2304), 3);
    add_background_object(create_fdlabwall1_3508(6784, 2176), 3);
    add_background_object(create_fdlabwall1_3508(6912, 2304), 3);
    add_background_object(create_fdlabwall2_3509(6912, 2176), 3);
    add_background_object(create_fdlabwall2_3509(6656, 2176), 3);
    add_background_object(create_fdcurve4_3533(6688, 2464), 3);
    add_background_object(create_fdcurve3_3531(6688, 2304), 3);
    add_background_object(create_fdcurve4_3533(6944, 2848), 3);
    add_background_object(create_fdcurve3_3531(6944, 2688), 3);
    add_background_object(create_fdcurve1_3532(6720, 2688), 3);
    add_background_object(create_fdlabwall1_3508(5568, 2560), 3);
    add_background_object(create_fdlabwall2_3509(5440, 2560), 3);
    add_background_object(create_fdlabwall1_3508(5824, 2560), 3);
    add_background_object(create_fdlabwall2_3509(5696, 2560), 3);
    add_background_object(create_fdlabfloor2_3521(6080, 2944), 3);
    add_background_object(create_fdlabfloor1_3514(5952, 2944), 3);
    add_background_object(create_fdlabfloor1_3514(5824, 2944), 3);
    add_background_object(create_fdlabfloor1_3514(5696, 2944), 3);
    add_background_object(create_fdlabfloor1_3514(5568, 2944), 3);
    add_background_object(create_fdlabfloor4_3510(5920, 2656), 3);
    add_background_object(create_fdlabfloor4_3510(5920, 2592), 3);
    add_background_object(create_fdlabfloor2_3521(5920, 2560), 3);
    add_background_object(create_fdlabfloor4_3510(5920, 2720), 3);
    add_background_object(create_fdlabfloor1_3514(5792, 2560), 3);
    add_background_object(create_fdlabfloor1_3514(5664, 2560), 3);
    add_background_object(create_fdlabwall2_3509(5568, 2432), 3);
    add_background_object(create_fdlabwall1_3508(5440, 2432), 3);
    add_background_object(create_fdlabwall1_3508(5568, 2304), 3);
    add_background_object(create_fdlabwall2_3509(5440, 2304), 3);
    add_background_object(create_fdlabfloor4_3510(5664, 2432), 3);
    add_background_object(create_fdlabfloor4_3510(5664, 2368), 3);
    add_background_object(create_fdlabfloor4_3510(5664, 2496), 3);
    add_background_object(create_fdlabfloor4_3510(5664, 2304), 3);
    add_background_object(create_fdlabwall1_3508(5440, 2176), 3);
    add_background_object(create_fdlabwall2_3509(5568, 2176), 3);
    add_background_object(create_fdlabwall1_3508(5696, 2176), 3);
    add_background_object(create_fdlabwall2_3509(5440, 2048), 3);
    add_background_object(create_fdlabwall1_3508(5440, 1920), 3);
    add_background_object(create_fdlabfloor6_3513(5760, 2272), 3);
    add_background_object(create_fdlabfloor6_3513(5696, 2272), 3);
    add_background_object(create_fdlabfloor3_3527(5664, 2272), 3);
    add_background_object(create_fdlabfloor4_3510(5536, 2688), 3);
    add_background_object(create_fdlabfloor4_3510(5536, 2752), 3);
    add_background_object(create_fdlabfloor4_3510(5536, 2816), 3);
    add_background_object(create_fdlabfloor4_3510(5536, 2880), 3);
    add_background_object(create_fdlabfloor6_3513(5760, 2688), 3);
    add_background_object(create_fdlabfloor6_3513(5696, 2688), 3);
    add_background_object(create_fdlabfloor6_3513(5632, 2688), 3);
    add_background_object(create_fdlabfloor6_3513(5568, 2688), 3);
    add_background_object(create_fdlabfloor3_3527(5536, 2688), 3);
    add_background_object(create_fdlabfloor10_3519(5824, 2752), 3);
    add_background_object(create_fdlabfloor9_3524(5920, 2752), 3);
    add_background_object(create_fdlabfloor6_3513(5856, 2752), 3);
    add_background_object(create_fdlabfloor8_3517(5824, 2688), 3);
    add_background_object(create_fdlabfloor2_3521(5824, 2688), 3);
    add_background_object(create_fdlabwall1_3508(5568, 3584), 3);
    add_background_object(create_fdlabwall2_3509(5696, 3584), 3);
    add_background_object(create_fdlabwall2_3509(5440, 3584), 3);
    add_background_object(create_fdlabwall2_3509(5568, 3456), 3);
    add_background_object(create_fdlabwall1_3508(5696, 3456), 3);
    add_background_object(create_fdlabwall1_3508(5568, 3328), 3);
    add_background_object(create_fdlabwall2_3509(5696, 3328), 3);
    add_background_object(create_fdlabwall2_3509(5568, 3200), 3);
    add_background_object(create_fdlabwall1_3508(5696, 3200), 3);
    add_background_object(create_fdlabwall1_3508(5440, 3456), 3);
    add_background_object(create_fdlabwall2_3509(5440, 3328), 3);
    add_background_object(create_fdlabwall1_3508(5440, 3200), 3);
    add_background_object(create_fdlabwall2_3509(5440, 1792), 3);
    add_background_object(create_fdlabwall1_3508(5440, 1664), 3);
    add_background_object(create_fdlabwall2_3509(5440, 1536), 3);
    add_background_object(create_fdlabwall1_3508(5440, 1408), 3);
    add_background_object(create_fdlabwall2_3509(5440, 1280), 3);
    add_background_object(create_fdlabwall1_3508(5568, 1280), 3);
    add_background_object(create_fdlabwall2_3509(5568, 1408), 3);
    add_background_object(create_fdlabwall1_3508(5568, 1536), 3);
    add_background_object(create_fdlabwall2_3509(5568, 1664), 3);
    add_background_object(create_fdlabwall1_3508(5696, 1664), 3);
    add_background_object(create_fdlabwall2_3509(5696, 1536), 3);
    add_background_object(create_fdlabwall1_3508(5696, 1408), 3);
    add_background_object(create_fdlabwall2_3509(5696, 1280), 3);
    add_background_object(create_fdlabwall1_3508(5824, 1280), 3);
    add_background_object(create_fdlabwall2_3509(5824, 1408), 3);
    add_background_object(create_fdlabwall1_3508(5824, 1536), 3);
    add_background_object(create_fdlabwall2_3509(5824, 1664), 3);
    add_background_object(create_fdlabwall1_3508(5952, 1664), 3);
    add_background_object(create_fdlabwall2_3509(5952, 1536), 3);
    add_background_object(create_fdlabwall1_3508(5952, 1408), 3);
    add_background_object(create_fdlabwall2_3509(5952, 1280), 3);
    add_background_object(create_fdlabfloor4_3510(5536, 2112), 3);
    add_background_object(create_fdlabfloor4_3510(5536, 2048), 3);
    add_background_object(create_fdlabfloor4_3510(5536, 1984), 3);
    add_background_object(create_fdlabfloor4_3510(5536, 1920), 3);
    add_background_object(create_fdlabfloor4_3510(5536, 1856), 3);
    add_background_object(create_fdlabfloor4_3510(5536, 1792), 3);
    add_background_object(create_fdlabfloor9_3524(5792, 2272), 3);
    add_background_object(create_fdlabfloor4_3510(5792, 2208), 3);
    add_background_object(create_fdlabfloor2_3521(5792, 2176), 3);
    add_background_object(create_fdlabfloor1_3514(5664, 2176), 3);
    add_background_object(create_fdlabfloor1_3514(5536, 2176), 3);
    add_background_object(create_fdlabfloor3_3527(5536, 1760), 3);
    add_background_object(create_fdlabfloor6_3513(5568, 1760), 3);
    add_background_object(create_fdlabfloor6_3513(5632, 1760), 3);
    add_background_object(create_fdlabfloor6_3513(5696, 1760), 3);
    add_background_object(create_fdlabfloor6_3513(5760, 1760), 3);
    add_background_object(create_fdlabfloor6_3513(5824, 1760), 3);
    add_background_object(create_fdlabfloor6_3513(5888, 1760), 3);
    add_background_object(create_fdlabfloor6_3513(5952, 1760), 3);
    add_background_object(create_fdlabfloor6_3513(6016, 1760), 3);
    add_background_object(create_fdlabfloor9_3524(6080, 1760), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 1696), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 1632), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 1568), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 1504), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 1440), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 1376), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 1312), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 1248), 3);
    add_background_object(create_fdlabfloor3_3527(6368, 2944), 3);
    add_background_object(create_fdlabfloor1_3514(6400, 2944), 3);
    add_background_object(create_fdlabfloor1_3514(6528, 2944), 3);
    add_background_object(create_fdlabfloor1_3514(6656, 2944), 3);
    add_background_object(create_fdlabfloor1_3514(6784, 2944), 3);
    add_background_object(create_fdlabfloor1_3514(6912, 2944), 3);
    add_background_object(create_fdlabfloor8_3517(7040, 2880), 3);
    add_background_object(create_fdlabfloor8_3517(7040, 2816), 3);
    add_background_object(create_fdlabfloor8_3517(7040, 2752), 3);
    add_background_object(create_fdlabfloor8_3517(7040, 2688), 3);
    add_background_object(create_fdlabfloor9_3524(7040, 2944), 3);
    add_background_object(create_fdlabfloor2_3521(7040, 2656), 3);
    add_background_object(create_fdlabfloor6_3513(6976, 2656), 3);
    add_background_object(create_fdlabfloor6_3513(6912, 2656), 3);
    add_background_object(create_fdlabfloor6_3513(6848, 2656), 3);
    add_background_object(create_fdlabfloor6_3513(6784, 2656), 3);
    add_background_object(create_fdlabfloor6_3513(6720, 2656), 3);
    add_background_object(create_fdlabfloor6_3513(6656, 2656), 3);
    add_background_object(create_fdlabfloor9_3524(6688, 2816), 3);
    add_background_object(create_fdlabfloor8_3517(6528, 2560), 3);
    add_background_object(create_fdlabfloor8_3517(6528, 2624), 3);
    add_background_object(create_fdlabfloor8_3517(6528, 2688), 3);
    add_background_object(create_fdlabfloor10_3519(6528, 2752), 3);
    add_background_object(create_fdlabfloor9_3524(6624, 2752), 3);
    add_background_object(create_fdlabfloor6_3513(6560, 2752), 3);
    add_background_object(create_fdlabfloor3_3527(6624, 2656), 3);
    add_background_object(create_fdlabfloor4_3510(6624, 2688), 3);
    add_background_object(create_fdlabfloor3_3527(6528, 2560), 3);
    add_background_object(create_fdlabfloor1_3514(6560, 2560), 3);
    add_background_object(create_fdlabfloor1_3514(6688, 2560), 3);
    add_background_object(create_fdlabfloor8_3517(6784, 2368), 3);
    add_background_object(create_fdlabfloor8_3517(6784, 2432), 3);
    add_background_object(create_fdlabfloor8_3517(6784, 2496), 3);
    add_background_object(create_fdlabfloor8_3517(6784, 2304), 3);
    add_background_object(create_fdlabfloor6_3513(6656, 2272), 3);
    add_background_object(create_fdlabfloor6_3513(6720, 2272), 3);
    add_background_object(create_fdlabfloor2_3521(6784, 2272), 3);
    add_background_object(create_fdlabwall2_3509(7040, 2048), 3);
    add_background_object(create_fdlabwall1_3508(7168, 2048), 3);
    add_background_object(create_fdlabwall2_3509(7168, 1920), 3);
    add_background_object(create_fdlabwall2_3509(7040, 1792), 3);
    add_background_object(create_fdlabwall1_3508(7168, 1792), 3);
    add_background_object(create_fdlabwall1_3508(6912, 1792), 3);
    add_background_object(create_fdlabwall2_3509(6784, 1792), 3);
    add_background_object(create_fdlabwall1_3508(6784, 1920), 3);
    add_background_object(create_fdlabwall2_3509(7168, 1664), 3);
    add_background_object(create_fdlabwall1_3508(7040, 1664), 3);
    add_background_object(create_fdlabwall2_3509(6912, 1664), 3);
    add_background_object(create_fdlabwall1_3508(6784, 1664), 3);
    add_background_object(create_fdlabwall2_3509(6656, 1664), 3);
    add_background_object(create_fdlabwall1_3508(6528, 1664), 3);
    add_background_object(create_fdlabwall2_3509(6400, 1664), 3);
    add_background_object(create_fdlabwall1_3508(6912, 1536), 3);
    add_background_object(create_fdlabwall2_3509(6784, 1536), 3);
    add_background_object(create_fdlabwall1_3508(6656, 1536), 3);
    add_background_object(create_fdlabwall2_3509(6528, 1536), 3);
    add_background_object(create_fdlabwall1_3508(6400, 1536), 3);
    add_background_object(create_fdlabwall2_3509(6912, 1408), 3);
    add_background_object(create_fdlabwall1_3508(6784, 1408), 3);
    add_background_object(create_fdlabwall2_3509(6656, 1408), 3);
    add_background_object(create_fdlabwall1_3508(6528, 1408), 3);
    add_background_object(create_fdlabwall2_3509(6400, 1408), 3);
    add_background_object(create_fdlabwall1_3508(6912, 1280), 3);
    add_background_object(create_fdlabwall2_3509(6784, 1280), 3);
    add_background_object(create_fdlabwall1_3508(6656, 1280), 3);
    add_background_object(create_fdlabwall2_3509(6528, 1280), 3);
    add_background_object(create_fdlabwall1_3508(6400, 1280), 3);
    add_background_object(create_fdlabfloor3_3527(7040, 2048), 3);
    add_background_object(create_fdlabfloor8_3517(7040, 2080), 3);
    add_background_object(create_fdlabfloor8_3517(7040, 2144), 3);
    add_background_object(create_fdlabfloor1_3514(7072, 2048), 3);
    add_background_object(create_fdlabfloor8_3517(7168, 1920), 3);
    add_background_object(create_fdlabfloor8_3517(7168, 1984), 3);
    add_background_object(create_fdlabfloor2_3521(7168, 1888), 3);
    add_background_object(create_fdlabfloor6_3513(7104, 1888), 3);
    add_background_object(create_fdlabfloor6_3513(7040, 1888), 3);
    add_background_object(create_fdlabfloor6_3513(6976, 1888), 3);
    add_background_object(create_fdlabfloor6_3513(6912, 1888), 3);
    add_background_object(create_fdlabfloor4_3510(6880, 1888), 3);
    add_background_object(create_fdlabfloor3_3527(6880, 1888), 3);
    add_background_object(create_fdlabfloor4_3510(6880, 1952), 3);
    add_background_object(create_fdlabfloor8_3517(6784, 1888), 3);
    add_background_object(create_fdlabfloor2_3521(6784, 1888), 3);
    add_background_object(create_fdlabfloor8_3517(6784, 1952), 3);
    add_background_object(create_fdlabfloor9_3524(6880, 2016), 3);
    add_background_object(create_fdlabfloor10_3519(6784, 2016), 3);
    add_background_object(create_fdlabfloor6_3513(6816, 2016), 3);
    add_background_object(create_fdlabfloor10_3519(6752, 1888), 3);
    add_background_object(create_fdlabfloor8_3517(6752, 1824), 3);
    add_background_object(create_fdlabfloor8_3517(6752, 1760), 3);
    add_background_object(create_fdlabfloor6_3513(6592, 1760), 3);
    add_background_object(create_fdlabfloor6_3513(6528, 1760), 3);
    add_background_object(create_fdlabfloor6_3513(6464, 1760), 3);
    add_background_object(create_fdlabfloor6_3513(6400, 1760), 3);
    add_background_object(create_fdlabfloor10_3519(6368, 1760), 3);
    add_background_object(create_fdlabfloor2_3521(6752, 1760), 3);
    add_background_object(create_fdventpipesquare_3567(6624, 1792), 3);
    add_background_object(create_fdlabfloor6_3513(6688, 1760), 3);
    add_background_object(create_fdlabfloor6_3513(6656, 1760), 3);
    add_background_object(create_fdventpipesquare_3567(6688, 1792), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 1696), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 1632), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 1568), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 1504), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 1440), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 1376), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 1312), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 1248), 3);
    add_background_object(create_fdlabfloor1_3514(6944, 2176), 3);
    add_background_object(create_fdlabfloor1_3514(6816, 2176), 3);
    add_background_object(create_fdlabfloor1_3514(6688, 2176), 3);
    add_background_object(create_fdlabfloor3_3527(6656, 2176), 3);
    add_background_object(create_fdlabfloor10_3519(6656, 2272), 3);
    add_background_object(create_fdlabfloor8_3517(6656, 2208), 3);
    add_background_object(create_fdlabfloor2_3521(6080, 2560), 3);
    add_background_object(create_fdlabfloor5_3522(6080, 2592), 3);
    add_background_object(create_fdlabfloor7_3523(6368, 2592), 3);
    add_background_object(create_fdlabfloor3_3527(6368, 2560), 3);
    add_background_object(create_fdlabfloor3_3527(6112, 4000), 3);
    add_background_object(create_fdlabfloor2_3521(6336, 4000), 3);
    add_background_object(create_fdlabfloor1_3514(6144, 4000), 3);
    add_background_object(create_fdlabfloor11_3512(6272, 4000), 3);
    add_background_object(create_fdcurve2_3534(5696, 2464), 3);
    add_background_object(create_fdcurve1_3532(5696, 2304), 3);
    add_background_object(create_fdlabfloor9_3524(5984, 2592), 3);
    add_background_object(create_fdlabfloor10_3519(5952, 2592), 3);
    add_background_object(create_fdlabfloor9_3524(6496, 2592), 3);
    add_background_object(create_fdlabfloor10_3519(6464, 2592), 3);
    add_background_object(create_fdlabfloor3_3527(6112, 2016), 3);
    add_background_object(create_fdlabfloor1_3514(6144, 2016), 3);
    add_background_object(create_fdlabfloor2_3521(6336, 2016), 3);
    add_background_object(create_fdlabfloor11_3512(6272, 2016), 3);
    add_background_object(create_fdcurve1_3532(5824, 4224), 3);
    add_background_object(create_fdcurve3_3531(6560, 4224), 3);
    add_background_object(create_fdlabwall1_3508(5440, 1152), 3);
    add_background_object(create_fdlabwall2_3509(5440, 1024), 3);
    add_background_object(create_fdlabwall1_3508(5440, 896), 3);
    add_background_object(create_fdlabwall2_3509(5440, 768), 3);
    add_background_object(create_fdlabwall1_3508(5568, 768), 3);
    add_background_object(create_fdlabwall2_3509(5568, 896), 3);
    add_background_object(create_fdlabwall1_3508(5568, 1024), 3);
    add_background_object(create_fdlabwall2_3509(5568, 1152), 3);
    add_background_object(create_fdlabwall1_3508(5696, 1152), 3);
    add_background_object(create_fdlabwall2_3509(5696, 1024), 3);
    add_background_object(create_fdlabwall1_3508(5696, 896), 3);
    add_background_object(create_fdlabwall2_3509(5696, 768), 3);
    add_background_object(create_fdlabwall1_3508(5824, 768), 3);
    add_background_object(create_fdlabwall2_3509(5824, 896), 3);
    add_background_object(create_fdlabwall1_3508(5824, 1024), 3);
    add_background_object(create_fdlabwall2_3509(5824, 1152), 3);
    add_background_object(create_fdlabwall1_3508(5952, 1152), 3);
    add_background_object(create_fdlabwall2_3509(5952, 1024), 3);
    add_background_object(create_fdlabwall1_3508(5952, 896), 3);
    add_background_object(create_fdlabwall2_3509(5952, 768), 3);
    add_background_object(create_fdlabwall1_3508(5440, 640), 3);
    add_background_object(create_fdlabwall2_3509(5440, 512), 3);
    add_background_object(create_fdlabwall1_3508(5440, 384), 3);
    add_background_object(create_fdlabwall2_3509(5440, 256), 3);
    add_background_object(create_fdlabwall1_3508(5568, 256), 3);
    add_background_object(create_fdlabwall2_3509(5568, 384), 3);
    add_background_object(create_fdlabwall1_3508(5568, 512), 3);
    add_background_object(create_fdlabwall2_3509(5568, 640), 3);
    add_background_object(create_fdlabwall1_3508(5696, 640), 3);
    add_background_object(create_fdlabwall2_3509(5696, 512), 3);
    add_background_object(create_fdlabwall1_3508(5696, 384), 3);
    add_background_object(create_fdlabwall2_3509(5696, 256), 3);
    add_background_object(create_fdlabwall1_3508(5824, 256), 3);
    add_background_object(create_fdlabwall2_3509(5824, 384), 3);
    add_background_object(create_fdlabwall1_3508(5824, 512), 3);
    add_background_object(create_fdlabwall2_3509(5824, 640), 3);
    add_background_object(create_fdlabwall1_3508(5952, 640), 3);
    add_background_object(create_fdlabwall2_3509(5952, 512), 3);
    add_background_object(create_fdlabwall1_3508(5952, 384), 3);
    add_background_object(create_fdlabwall2_3509(5952, 256), 3);
    add_background_object(create_fdlabwall1_3508(5440, 128), 3);
    add_background_object(create_fdlabwall2_3509(5440, 0), 3);
    add_background_object(create_fdlabwall1_3508(5568, 0), 3);
    add_background_object(create_fdlabwall2_3509(5568, 128), 3);
    add_background_object(create_fdlabwall1_3508(5696, 128), 3);
    add_background_object(create_fdlabwall2_3509(5696, 0), 3);
    add_background_object(create_fdlabwall1_3508(5824, 0), 3);
    add_background_object(create_fdlabwall2_3509(5824, 128), 3);
    add_background_object(create_fdlabwall1_3508(5952, 128), 3);
    add_background_object(create_fdlabwall2_3509(5952, 0), 3);
    add_background_object(create_fdlabwall2_3509(6912, 1152), 3);
    add_background_object(create_fdlabwall1_3508(6784, 1152), 3);
    add_background_object(create_fdlabwall2_3509(6656, 1152), 3);
    add_background_object(create_fdlabwall1_3508(6528, 1152), 3);
    add_background_object(create_fdlabwall2_3509(6400, 1152), 3);
    add_background_object(create_fdlabwall1_3508(6912, 1024), 3);
    add_background_object(create_fdlabwall2_3509(6784, 1024), 3);
    add_background_object(create_fdlabwall1_3508(6656, 1024), 3);
    add_background_object(create_fdlabwall2_3509(6528, 1024), 3);
    add_background_object(create_fdlabwall1_3508(6400, 1024), 3);
    add_background_object(create_fdlabwall2_3509(6912, 896), 3);
    add_background_object(create_fdlabwall1_3508(6784, 896), 3);
    add_background_object(create_fdlabwall2_3509(6656, 896), 3);
    add_background_object(create_fdlabwall1_3508(6528, 896), 3);
    add_background_object(create_fdlabwall2_3509(6400, 896), 3);
    add_background_object(create_fdlabwall1_3508(6912, 768), 3);
    add_background_object(create_fdlabwall2_3509(6784, 768), 3);
    add_background_object(create_fdlabwall1_3508(6656, 768), 3);
    add_background_object(create_fdlabwall2_3509(6528, 768), 3);
    add_background_object(create_fdlabwall1_3508(6400, 768), 3);
    add_background_object(create_fdlabwall2_3509(6912, 640), 3);
    add_background_object(create_fdlabwall1_3508(6784, 640), 3);
    add_background_object(create_fdlabwall2_3509(6656, 640), 3);
    add_background_object(create_fdlabwall1_3508(6528, 640), 3);
    add_background_object(create_fdlabwall2_3509(6400, 640), 3);
    add_background_object(create_fdlabwall1_3508(6912, 512), 3);
    add_background_object(create_fdlabwall2_3509(6784, 512), 3);
    add_background_object(create_fdlabwall1_3508(6656, 512), 3);
    add_background_object(create_fdlabwall2_3509(6528, 512), 3);
    add_background_object(create_fdlabwall1_3508(6400, 512), 3);
    add_background_object(create_fdlabwall2_3509(6912, 320), 3);
    add_background_object(create_fdlabwall1_3508(6784, 320), 3);
    add_background_object(create_fdlabwall2_3509(6656, 320), 3);
    add_background_object(create_fdlabwall1_3508(6528, 320), 3);
    add_background_object(create_fdlabwall2_3509(6400, 320), 3);
    add_background_object(create_fdlabwall1_3508(6912, -64), 3);
    add_background_object(create_fdlabwall2_3509(6784, -64), 3);
    add_background_object(create_fdlabwall1_3508(6656, -64), 3);
    add_background_object(create_fdlabwall2_3509(6528, -64), 3);
    add_background_object(create_fdlabwall1_3508(6400, -64), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 1184), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 1120), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 1056), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 992), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 928), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 864), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 800), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 736), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 672), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 608), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 1184), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 1120), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 1056), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 992), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 928), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 864), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 800), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 736), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 672), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 608), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 544), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 480), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 416), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 352), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 288), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 224), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 544), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 480), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 416), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 352), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 160), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 96), 3);
    add_background_object(create_fdlabfloor4_3510(6080, 32), 3);
    add_background_object(create_fdlabfloor4_3510(6080, -32), 3);
    add_background_object(create_fdlabfloor8_3517(6368, 0), 3);
    add_background_object(create_fdlabfloor8_3517(6368, -64), 3);
    add_background_object(create_fdlabwall3_3518(6400, 448), 3);
    add_background_object(create_fdlabwall3_3518(6528, 448), 3);
    add_background_object(create_fdlabwall3_3518(6656, 448), 3);
    add_background_object(create_fdlabwall3_3518(6784, 448), 3);
    add_background_object(create_fdlabwall3_3518(6912, 448), 3);
    add_background_object(create_fdlabfloor3_3527(6368, 288), 3);
    add_background_object(create_fdlabfloor1_3514(6400, 288), 3);
    add_background_object(create_fdlabfloor1_3514(6528, 288), 3);
    add_background_object(create_fdlabfloor1_3514(6656, 288), 3);
    add_background_object(create_fdlabfloor1_3514(6784, 288), 3);
    add_background_object(create_fdlabfloor1_3514(6912, 288), 3);
    add_background_object(create_fdlabfloor10_3519(6368, 64), 3);
    add_background_object(create_fdlabfloor6_3513(6400, 64), 3);
    add_background_object(create_fdlabfloor6_3513(6464, 64), 3);
    add_background_object(create_fdlabfloor6_3513(6528, 64), 3);
    add_background_object(create_fdlabfloor6_3513(6592, 64), 3);
    add_background_object(create_fdlabfloor6_3513(6656, 64), 3);
    add_background_object(create_fdlabfloor6_3513(6720, 64), 3);
    add_background_object(create_fdlabfloor6_3513(6784, 64), 3);
    add_background_object(create_fdlabfloor6_3513(6848, 64), 3);
    add_background_object(create_fdlabfloor6_3513(6912, 64), 3);
    add_background_object(create_fdlabfloor6_3513(6976, 64), 3);
    add_background_object(create_fdlabback3_3487(6144, 0), 3);
    add_background_object(create_fdlabback3_3487(6208, 0), 3);
    add_background_object(create_fdlabback3_3487(6272, 0), 3);
    add_background_object(create_fdlabfloor9_3524(7008, 64), 3);
    add_background_object(create_fdlabfloor4_3510(7008, 0), 3);
    add_background_object(create_fdlabfloor4_3510(7008, -64), 3);
    add_background_object(create_fdlabfloor2_3521(7296, 288), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 384), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 320), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 512), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 448), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 640), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 576), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 768), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 704), 3);
    add_background_object(create_fdlabwall1_3508(7168, 1536), 3);
    add_background_object(create_fdlabwall2_3509(7040, 1536), 3);
    add_background_object(create_fdlabwall2_3509(7168, 1408), 3);
    add_background_object(create_fdlabwall1_3508(7040, 1408), 3);
    add_background_object(create_fdlabwall1_3508(7168, 1280), 3);
    add_background_object(create_fdlabwall2_3509(7040, 1280), 3);
    add_background_object(create_fdlabwall2_3509(7168, 1152), 3);
    add_background_object(create_fdlabwall1_3508(7040, 1152), 3);
    add_background_object(create_fdlabwall1_3508(7168, 1024), 3);
    add_background_object(create_fdlabwall2_3509(7040, 1024), 3);
    add_background_object(create_fdlabwall2_3509(7168, 896), 3);
    add_background_object(create_fdlabwall1_3508(7040, 896), 3);
    add_background_object(create_fdlabwall1_3508(7168, 768), 3);
    add_background_object(create_fdlabwall2_3509(7040, 768), 3);
    add_background_object(create_fdlabwall2_3509(7168, 640), 3);
    add_background_object(create_fdlabwall1_3508(7040, 640), 3);
    add_background_object(create_fdlabwall1_3508(7168, 512), 3);
    add_background_object(create_fdlabwall2_3509(7040, 512), 3);
    add_background_object(create_fdlabwall2_3509(7168, 320), 3);
    add_background_object(create_fdlabwall1_3508(7040, 320), 3);
    add_background_object(create_fdlabwall3_3518(7040, 448), 3);
    add_background_object(create_fdlabwall3_3518(7168, 448), 3);
    add_background_object(create_fdlabfloor1_3514(7040, 288), 3);
    add_background_object(create_fdlabfloor1_3514(7168, 288), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 896), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 832), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 1024), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 960), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 1152), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 1088), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 1280), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 1216), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 1408), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 1344), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 1536), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 1472), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 1664), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 1600), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 1792), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 1728), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 1920), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 1856), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 2048), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 1984), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 2176), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 2112), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 2304), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 2240), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 2432), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 2368), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 2560), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 2496), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 2688), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 2624), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 2816), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 2752), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 2944), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 2880), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 3008), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 3136), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 3072), 3);
    add_background_object(create_fdlabwall2_3509(7040, 3584), 3);
    add_background_object(create_fdlabwall1_3508(7040, 3456), 3);
    add_background_object(create_fdlabwall1_3508(7168, 3584), 3);
    add_background_object(create_fdlabwall2_3509(7168, 3456), 3);
    add_background_object(create_fdlabwall2_3509(7040, 3328), 3);
    add_background_object(create_fdlabwall1_3508(7040, 3200), 3);
    add_background_object(create_fdlabwall1_3508(7168, 3328), 3);
    add_background_object(create_fdlabwall2_3509(7168, 3200), 3);
    add_background_object(create_fdlabwall1_3508(6784, 3456), 3);
    add_background_object(create_fdlabwall2_3509(6912, 3456), 3);
    add_background_object(create_fdlabwall2_3509(6784, 3328), 3);
    add_background_object(create_fdlabwall1_3508(6784, 3200), 3);
    add_background_object(create_fdlabwall1_3508(6912, 3328), 3);
    add_background_object(create_fdlabwall2_3509(6912, 3200), 3);
    add_background_object(create_fdlabwall2_3509(6656, 3200), 3);
    add_background_object(create_fdlabwall1_3508(6656, 3328), 3);
    add_background_object(create_fdlabwall2_3509(6656, 3456), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 3200), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 3328), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 3264), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 3456), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 3392), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 3584), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 3520), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 3712), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 3648), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 3776), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 3904), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 3840), 3);
    add_background_object(create_fdlabwall2_3509(7040, 3840), 3);
    add_background_object(create_fdlabwall1_3508(7040, 3712), 3);
    add_background_object(create_fdlabwall1_3508(7168, 3840), 3);
    add_background_object(create_fdlabwall2_3509(7168, 3712), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 3968), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 4032), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 4160), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 4096), 3);
    add_background_object(create_fdlabwall2_3509(7040, 4096), 3);
    add_background_object(create_fdlabwall1_3508(7040, 3968), 3);
    add_background_object(create_fdlabwall1_3508(7168, 4096), 3);
    add_background_object(create_fdlabwall2_3509(7168, 3968), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 4224), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 4288), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 4416), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 4352), 3);
    add_background_object(create_fdlabwall2_3509(7040, 4352), 3);
    add_background_object(create_fdlabwall1_3508(7040, 4224), 3);
    add_background_object(create_fdlabwall1_3508(7168, 4352), 3);
    add_background_object(create_fdlabwall2_3509(7168, 4224), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 4480), 3);
    add_background_object(create_fdlabfloor4_3510(7296, 4544), 3);
    add_background_object(create_fdlabwall2_3509(7040, 4608), 3);
    add_background_object(create_fdlabwall1_3508(7040, 4480), 3);
    add_background_object(create_fdlabwall2_3509(7168, 4480), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 320), 3);
    add_background_object(create_fdlabwall1_3508(7872, 512), 3);
    add_background_object(create_fdlabwall2_3509(7872, 320), 3);
    add_background_object(create_fdlabwall3_3518(7872, 448), 3);
    add_background_object(create_fdlabfloor3_3527(7840, 224), 3);
    add_background_object(create_fdlabfloor1_3514(7872, 224), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 384), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 448), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 512), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 576), 3);
    add_background_object(create_fdlabwall2_3509(7872, 640), 3);
    add_background_object(create_fdlabwall1_3508(7872, 768), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 640), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 704), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 768), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 832), 3);
    add_background_object(create_fdlabwall2_3509(7872, 896), 3);
    add_background_object(create_fdlabwall1_3508(7872, 1024), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 896), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 960), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 1024), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 1088), 3);
    add_background_object(create_fdlabwall2_3509(7872, 1152), 3);
    add_background_object(create_fdlabwall1_3508(7872, 1280), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 1152), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 1216), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 1280), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 1344), 3);
    add_background_object(create_fdlabwall2_3509(7872, 1408), 3);
    add_background_object(create_fdlabwall1_3508(7872, 1536), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 1408), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 1472), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 1536), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 1600), 3);
    add_background_object(create_fdlabwall2_3509(7872, 1664), 3);
    add_background_object(create_fdlabwall1_3508(7872, 1792), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 1664), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 1728), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 1792), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 1856), 3);
    add_background_object(create_fdlabwall2_3509(7872, 1920), 3);
    add_background_object(create_fdlabwall1_3508(7872, 2048), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 1920), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 1984), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 2048), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 2112), 3);
    add_background_object(create_fdlabwall2_3509(7872, 2176), 3);
    add_background_object(create_fdlabwall1_3508(7872, 2304), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 2176), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 2240), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 2304), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 2368), 3);
    add_background_object(create_fdlabwall2_3509(7872, 2432), 3);
    add_background_object(create_fdlabwall1_3508(7872, 2560), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 2432), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 2496), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 2560), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 2624), 3);
    add_background_object(create_fdlabwall2_3509(7872, 2688), 3);
    add_background_object(create_fdlabwall1_3508(7872, 2816), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 2688), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 2752), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 2816), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 2880), 3);
    add_background_object(create_fdlabwall2_3509(7872, 2944), 3);
    add_background_object(create_fdlabwall1_3508(7872, 3072), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 2944), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 3008), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 3072), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 3136), 3);
    add_background_object(create_fdlabwall2_3509(7872, 3200), 3);
    add_background_object(create_fdlabwall1_3508(7872, 3328), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 3200), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 3264), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 3328), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 3392), 3);
    add_background_object(create_fdlabwall2_3509(7872, 3456), 3);
    add_background_object(create_fdlabwall1_3508(7872, 3584), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 3456), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 3520), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 3584), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 3648), 3);
    add_background_object(create_fdlabwall2_3509(7872, 3712), 3);
    add_background_object(create_fdlabwall1_3508(7872, 3840), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 3712), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 3776), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 3840), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 3904), 3);
    add_background_object(create_fdlabwall2_3509(7872, 3968), 3);
    add_background_object(create_fdlabwall1_3508(7872, 4096), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 3968), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 4032), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 4096), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 4160), 3);
    add_background_object(create_fdlabwall2_3509(7872, 4224), 3);
    add_background_object(create_fdlabwall1_3508(7872, 4352), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 4224), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 4288), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 4352), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 4416), 3);
    add_background_object(create_fdlabwall2_3509(7872, 4480), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 4480), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 4544), 3);
    add_background_object(create_fdlabwall2_3509(8256, 768), 3);
    add_background_object(create_fdlabwall1_3508(8256, 896), 3);
    add_background_object(create_fdlabwall2_3509(8256, 1024), 3);
    add_background_object(create_fdlabwall1_3508(8256, 1152), 3);
    add_background_object(create_fdlabwall2_3509(8256, 1280), 3);
    add_background_object(create_fdlabwall1_3508(8256, 1408), 3);
    add_background_object(create_fdlabwall2_3509(8256, 1536), 3);
    add_background_object(create_fdlabwall1_3508(8256, 1664), 3);
    add_background_object(create_fdlabwall2_3509(8256, 1792), 3);
    add_background_object(create_fdlabwall1_3508(8256, 1920), 3);
    add_background_object(create_fdlabwall2_3509(8256, 2048), 3);
    add_background_object(create_fdlabwall1_3508(8256, 2176), 3);
    add_background_object(create_fdlabwall2_3509(8256, 2304), 3);
    add_background_object(create_fdlabwall1_3508(8256, 2432), 3);
    add_background_object(create_fdlabwall2_3509(8256, 2560), 3);
    add_background_object(create_fdlabwall1_3508(8256, 2688), 3);
    add_background_object(create_fdlabwall2_3509(8256, 2816), 3);
    add_background_object(create_fdlabwall1_3508(8256, 2944), 3);
    add_background_object(create_fdlabwall2_3509(8256, 3072), 3);
    add_background_object(create_fdlabwall1_3508(8256, 3200), 3);
    add_background_object(create_fdlabwall2_3509(8256, 3328), 3);
    add_background_object(create_fdlabwall1_3508(8256, 3456), 3);
    add_background_object(create_fdlabwall2_3509(8256, 3584), 3);
    add_background_object(create_fdlabwall1_3508(8256, 3712), 3);
    add_background_object(create_fdlabwall2_3509(8256, 3840), 3);
    add_background_object(create_fdlabwall1_3508(8256, 3968), 3);
    add_background_object(create_fdlabwall2_3509(8256, 4096), 3);
    add_background_object(create_fdlabwall1_3508(8256, 4224), 3);
    add_background_object(create_fdlabwall2_3509(8256, 4352), 3);
    add_background_object(create_fdlabwall1_3508(8256, 4480), 3);
    add_background_object(create_fdlabwall2_3509(8256, 4608), 3);
    add_background_object(create_fdlabwall1_3508(8256, 640), 3);
    add_background_object(create_fdlabwall2_3509(8256, 512), 3);
    add_background_object(create_fdlabwall3_3518(8256, 448), 3);
    add_background_object(create_fdlabwall1_3508(8256, 320), 3);
    add_background_object(create_fdlabwall7_3564(7168, 4608), 3);
    add_background_object(create_fdlabwall6_3535(7872, 4608), 3);
    add_background_object(create_fdlabfloor16_3529(7232, 4608), 3);
    add_background_object(create_fdlabfloor16_3529(7168, 4672), 3);
    add_background_object(create_fdlabfloor5_3522(7296, 4608), 3);
    add_background_object(create_fdlabfloor7_3523(7840, 4608), 3);
    add_background_object(create_fdlabfloor15_3528(7872, 4608), 3);
    add_background_object(create_fdlabfloor15_3528(7936, 4672), 3);
    add_background_object(create_fdlabfloor6_3513(8256, 4736), 3);
    add_background_object(create_fdlabfloor6_3513(8320, 4736), 3);
    add_background_object(create_fdlabfloor6_3513(7040, 4736), 3);
    add_background_object(create_fdlabfloor6_3513(7104, 4736), 3);
    add_background_object(create_fdlabfloor6_3513(6912, 4736), 3);
    add_background_object(create_fdlabfloor6_3513(6976, 4736), 3);
    add_background_object(create_fdlabfloor6_3513(6784, 4736), 3);
    add_background_object(create_fdlabfloor6_3513(6848, 4736), 3);
    add_background_object(create_fdlabfloor4_3510(6784, 5696), 3);
    add_background_object(create_fdlabfloor4_3510(6784, 5760), 3);
    add_background_object(create_fdlabfloor4_3510(6784, 5824), 3);
    add_background_object(create_fdlabfloor4_3510(6784, 5504), 3);
    add_background_object(create_fdlabfloor4_3510(6784, 5568), 3);
    add_background_object(create_fdlabfloor4_3510(6784, 5632), 3);
    add_background_object(create_fdlabfloor4_3510(6784, 5312), 3);
    add_background_object(create_fdlabfloor4_3510(6784, 5376), 3);
    add_background_object(create_fdlabfloor4_3510(6784, 5440), 3);
    add_background_object(create_fdlabfloor4_3510(6784, 5120), 3);
    add_background_object(create_fdlabfloor4_3510(6784, 5184), 3);
    add_background_object(create_fdlabfloor4_3510(6784, 5248), 3);
    add_background_object(create_fdlabfloor4_3510(6784, 4928), 3);
    add_background_object(create_fdlabfloor4_3510(6784, 4992), 3);
    add_background_object(create_fdlabfloor4_3510(6784, 5056), 3);
    add_background_object(create_fdlabfloor4_3510(6784, 4864), 3);
    add_background_object(create_fdlabfloor4_3510(6784, 4800), 3);
    add_background_object(create_fdlabfloor4_3510(6784, 4736), 3);
    add_background_object(create_fdlabfloor3_3527(6784, 4736), 3);
    add_background_object(create_fdlabwall2_3509(8384, 4768), 3);
    add_background_object(create_fdlabwall2_3509(8384, 4896), 3);
    add_background_object(create_fdlabwall2_3509(8384, 5024), 3);
    add_background_object(create_fdlabwall2_3509(8384, 5152), 3);
    add_background_object(create_fdlabwall2_3509(8384, 5280), 3);
    add_background_object(create_fdlabwall2_3509(8384, 5408), 3);
    add_background_object(create_fdlabwall2_3509(8384, 5536), 3);
    add_background_object(create_fdlabwall2_3509(8384, 5664), 3);
    add_background_object(create_fdlabwall2_3509(8384, 5792), 3);
    add_background_object(create_fdlabfloor6_3513(8128, 4736), 3);
    add_background_object(create_fdlabfloor6_3513(8192, 4736), 3);
    add_background_object(create_fdlabfloor6_3513(8000, 4736), 3);
    add_background_object(create_fdlabfloor6_3513(8064, 4736), 3);
    add_background_object(create_fdlabwall2_3509(8000, 768), 3);
    add_background_object(create_fdlabwall1_3508(8000, 896), 3);
    add_background_object(create_fdlabwall2_3509(8000, 1024), 3);
    add_background_object(create_fdlabwall1_3508(8000, 1152), 3);
    add_background_object(create_fdlabwall2_3509(8000, 1280), 3);
    add_background_object(create_fdlabwall1_3508(8000, 1408), 3);
    add_background_object(create_fdlabwall2_3509(8000, 1536), 3);
    add_background_object(create_fdlabwall1_3508(8000, 1664), 3);
    add_background_object(create_fdlabwall2_3509(8000, 1792), 3);
    add_background_object(create_fdlabwall1_3508(8000, 1920), 3);
    add_background_object(create_fdlabwall2_3509(8000, 2048), 3);
    add_background_object(create_fdlabwall1_3508(8000, 2176), 3);
    add_background_object(create_fdlabwall2_3509(8000, 2304), 3);
    add_background_object(create_fdlabwall1_3508(8000, 2432), 3);
    add_background_object(create_fdlabwall2_3509(8000, 2560), 3);
    add_background_object(create_fdlabwall1_3508(8000, 2688), 3);
    add_background_object(create_fdlabwall2_3509(8000, 2816), 3);
    add_background_object(create_fdlabwall1_3508(8000, 2944), 3);
    add_background_object(create_fdlabwall2_3509(8000, 3072), 3);
    add_background_object(create_fdlabwall1_3508(8000, 3200), 3);
    add_background_object(create_fdlabwall2_3509(8000, 3328), 3);
    add_background_object(create_fdlabwall1_3508(8000, 3456), 3);
    add_background_object(create_fdlabwall2_3509(8000, 3584), 3);
    add_background_object(create_fdlabwall1_3508(8000, 3712), 3);
    add_background_object(create_fdlabwall2_3509(8000, 3840), 3);
    add_background_object(create_fdlabwall1_3508(8000, 3968), 3);
    add_background_object(create_fdlabwall2_3509(8000, 4096), 3);
    add_background_object(create_fdlabwall1_3508(8000, 4224), 3);
    add_background_object(create_fdlabwall2_3509(8000, 4352), 3);
    add_background_object(create_fdlabwall1_3508(8000, 4480), 3);
    add_background_object(create_fdlabwall2_3509(8000, 4608), 3);
    add_background_object(create_fdlabwall1_3508(8000, 640), 3);
    add_background_object(create_fdlabwall2_3509(8000, 512), 3);
    add_background_object(create_fdlabwall3_3518(8000, 448), 3);
    add_background_object(create_fdlabwall1_3508(8000, 320), 3);
    add_background_object(create_fdlabwall2_3509(8128, 640), 3);
    add_background_object(create_fdlabwall1_3508(8128, 768), 3);
    add_background_object(create_fdlabwall2_3509(8128, 896), 3);
    add_background_object(create_fdlabwall1_3508(8128, 1024), 3);
    add_background_object(create_fdlabwall2_3509(8128, 1152), 3);
    add_background_object(create_fdlabwall1_3508(8128, 1280), 3);
    add_background_object(create_fdlabwall2_3509(8128, 1408), 3);
    add_background_object(create_fdlabwall1_3508(8128, 1536), 3);
    add_background_object(create_fdlabwall2_3509(8128, 1664), 3);
    add_background_object(create_fdlabwall1_3508(8128, 1792), 3);
    add_background_object(create_fdlabwall2_3509(8128, 1920), 3);
    add_background_object(create_fdlabwall1_3508(8128, 2048), 3);
    add_background_object(create_fdlabwall2_3509(8128, 2176), 3);
    add_background_object(create_fdlabwall1_3508(8128, 2304), 3);
    add_background_object(create_fdlabwall2_3509(8128, 2432), 3);
    add_background_object(create_fdlabwall1_3508(8128, 2560), 3);
    add_background_object(create_fdlabwall2_3509(8128, 2688), 3);
    add_background_object(create_fdlabwall1_3508(8128, 2816), 3);
    add_background_object(create_fdlabwall2_3509(8128, 2944), 3);
    add_background_object(create_fdlabwall1_3508(8128, 3072), 3);
    add_background_object(create_fdlabwall2_3509(8128, 3200), 3);
    add_background_object(create_fdlabwall1_3508(8128, 3328), 3);
    add_background_object(create_fdlabwall2_3509(8128, 3456), 3);
    add_background_object(create_fdlabwall1_3508(8128, 3584), 3);
    add_background_object(create_fdlabwall2_3509(8128, 3712), 3);
    add_background_object(create_fdlabwall1_3508(8128, 3840), 3);
    add_background_object(create_fdlabwall2_3509(8128, 3968), 3);
    add_background_object(create_fdlabwall1_3508(8128, 4096), 3);
    add_background_object(create_fdlabwall2_3509(8128, 4224), 3);
    add_background_object(create_fdlabwall1_3508(8128, 4352), 3);
    add_background_object(create_fdlabwall2_3509(8128, 4480), 3);
    add_background_object(create_fdlabwall1_3508(8128, 512), 3);
    add_background_object(create_fdlabwall2_3509(8128, 384), 3);
    add_background_object(create_fdlabwall3_3518(8000, 256), 3);
    add_background_object(create_fdlabwall1_3508(8128, 4608), 3);
    add_background_object(create_fdlabfloor1_3514(8000, 224), 3);
    add_background_object(create_fdlabfloor2_3521(8352, 4736), 3);
    add_background_object(create_fdlabfloor8_3517(8352, 4768), 3);
    add_background_object(create_fdlabfloor8_3517(8352, 4832), 3);
    add_background_object(create_fdlabfloor8_3517(8352, 4896), 3);
    add_background_object(create_fdlabfloor8_3517(8352, 4960), 3);
    add_background_object(create_fdlabfloor8_3517(8352, 5024), 3);
    add_background_object(create_fdlabfloor8_3517(8352, 5088), 3);
    add_background_object(create_fdlabfloor8_3517(8352, 5152), 3);
    add_background_object(create_fdlabfloor8_3517(8352, 5216), 3);
    add_background_object(create_fdlabfloor8_3517(8352, 5280), 3);
    add_background_object(create_fdlabfloor8_3517(8352, 5344), 3);
    add_background_object(create_fdlabfloor8_3517(8352, 5408), 3);
    add_background_object(create_fdlabfloor8_3517(8352, 5472), 3);
    add_background_object(create_fdlabfloor8_3517(8352, 5536), 3);
    add_background_object(create_fdlabfloor8_3517(8352, 5600), 3);
    add_background_object(create_fdlabfloor8_3517(8352, 5664), 3);
    add_background_object(create_fdlabfloor8_3517(8352, 5728), 3);
    add_background_object(create_fdlabfloor8_3517(8352, 5792), 3);
    add_background_object(create_fdlabfloor8_3517(8352, 5856), 3);
    add_background_object(create_fdlabfloor8_3517(7840, 256), 3);
    add_background_object(create_fdlabwall3_3518(7872, 256), 3);
    add_background_object(create_fdlabwall1_3508(8128, 256), 3);
    add_background_object(create_fdlabwall2_3509(8256, 192), 3);
    add_background_object(create_fdlabwall1_3508(8256, 64), 3);
    add_background_object(create_fdlabwall2_3509(8256, -64), 3);
    add_background_object(create_fdlabfloor8_3517(8224, 0), 3);
    add_background_object(create_fdlabfloor8_3517(8224, -64), 3);
    add_background_object(create_fdlabfloor8_3517(8224, 128), 3);
    add_background_object(create_fdlabfloor8_3517(8224, 64), 3);
    add_background_object(create_fdlabfloor8_3517(8224, 192), 3);
    add_background_object(create_fdlabfloor1_3514(8128, 224), 3);
    add_object(create_fdplatform_3542(7264, 4992), 3);
    add_object(create_fdplatform_3542(7136, 4992), 3);
    add_object(create_fdplatform_3542(6304, 288), 3);
    add_object(create_fdplatform_3542(6176, 288), 3);
    add_object(create_fdplatform_3542(-120, 2056), 3);
    add_object(create_fdplatform_3542(2016, 5384), 3);
    add_object(create_fdplatform_3542(2016, 5320), 3);
    add_object(create_fdplatform_3542(2016, 5256), 3);
    add_object(create_fdplatform_3542(6880, 2800), 3);
    add_object(create_fdplatform_3542(6176, 4608), 3);
    add_object(create_fdplatform_3542(6304, 4608), 3);
    add_object(create_fdplatform_3542(6176, 2560), 3);
    add_object(create_fdplatform_3542(6304, 2560), 3);
    add_object(create_fdplatform_3542(7520, 288), 3);
    add_object(create_fdplatform_3542(7392, 288), 3);
    add_object(create_fdplatform_3542(7648, 288), 3);
    add_object(create_fdplatform_3542(7776, 288), 3);
    add_object(create_fdplatform_3542(7520, 4992), 3);
    add_object(create_fdplatform_3542(7392, 4992), 3);
    add_object(create_fdplatform_3542(7648, 4992), 3);
    add_object(create_fdplatform_3542(7776, 4992), 3);
    add_object(create_fdplatform_3542(7008, 4992), 3);
    add_object(create_fdplatform_3542(7904, 4992), 3);
    add_object(create_fdplatform_3542(8032, 4992), 3);
    add_object(create_fdplatform_3542(8160, 4992), 3);
    add_object(create_playerstartingpoint_358(141, 4941), 3);
    add_object(create_objecttransporterwave_3414(-368, 1216), 3);
    add_object(create_objecttransporternode90_3428(-200, 2136), 3);
    add_object(create_objecttransporternode180_3426(-264, 2200), 3);
    add_object(create_objecttransporternode270_3417(-200, 2264), 3);
    add_object(create_objecttransporterstart_3412(-200, 2200), 3);
    add_object(create_objecttransporternode0_3415(-136, 2200), 3);
    add_object(create_hazardspiralsparkmaker_3422(-464, 2172), 3);
    add_object(create_fdspiralsparktowerlight_3423(-456, 2248), 3);
    add_object(create_fdspiralsparktowerlight_3423(-456, 2280), 3);
    add_object(create_fdspiralsparktowerlight_3423(-456, 2312), 3);
    add_object(create_bubblepatch_806(-304, 2343), 3);
    add_object(create_objectkeycard_2643(-376, 1560), 3);
    add_object(create_switchbuttonright_2714(976, 4928), 3);
    add_object(create_objecttransporterstart2_3416(-202, 2206), 3);
    add_object(create_switchcorkscrewdoor_3536(2624, 5456), 3);
    add_object(create_corkscrewdoor_3537(2671, 5519), 3);
    add_object(create_lockedlabdoorbarrier_3541(5160, 5088), 3);
    add_object(create_levelelectriccrusher_3540(3040, 5728), 3);
    add_object(create_levelelectriccrusherbolt_3538(3040, 5728), 3);
    add_object(create_enemyelitemask_2511(84, 5624), 3);
    add_object(create_enemyelite_2510(87, 5623), 3);
    add_object(create_switchbuttonright_2714(976, 5088), 3);
    add_object(create_laddertop_357(1796, 5495), 3);
    add_object(create_redspringup_440(3456, 5840), 3);
    add_object(create_enemyslime_741(1031, 5845), 3);
    add_object(create_enemylimiter_350(973, 5842), 3);
    add_object(create_enemylimiter_350(1805, 5842), 3);
    add_object(create_enemyslime_741(1127, 5845), 3);
    add_object(create_enemyslime_741(1231, 5845), 3);
    add_object(create_enemyslime_741(1447, 5845), 3);
    add_object(create_enemyslime_741(1535, 5845), 3);
    add_object(create_enemyslime_741(1615, 5845), 3);
    add_object(create_enemylimiter_350(973, 5586), 3);
    add_object(create_enemyslime_741(1031, 5589), 3);
    add_object(create_enemylimiter_350(1197, 5586), 3);
    add_object(create_enemyslime_741(1119, 5589), 3);
    add_object(create_enemyslime_741(767, 5589), 3);
    add_object(create_enemylimiter_350(717, 5586), 3);
    add_object(create_enemylimiter_350(837, 5586), 3);
    add_object(create_fdrotatingbarrier_3573(4736, 5240), 3);
    add_object(create_fdrotatingbarrier_3573(4736, 5240), 3);
    add_object(create_laddertop_357(5052, 5047), 3);
    add_object(create_switchbuttonleft_2715(4768, 4984), 3);
    add_object(create_yellowspringup_434(4768, 5552), 3);
    add_object(create_yellowspringup_434(4672, 5552), 3);
    add_object(create_laddertop_357(5116, 5367), 3);
    add_object(create_switchbuttonleft_2715(4960, 5304), 3);
    add_object(create_enemyaxleturret_2201(608, 5056), 3);
    add_object(create_enemyaxleturret2_2202(608, 5056), 3);
    add_object(create_enemyaxleturret_2201(2184, 5752), 3);
    add_object(create_enemyaxleturret2_2202(2184, 5752), 3);
    add_object(create_enemyaxleturret_2201(2464, 5400), 3);
    add_object(create_enemyaxleturret2_2202(2464, 5400), 3);
    add_object(create_monitorbomb_563(352, 4928), 3);
    add_object(create_monitorbomb_563(384, 4928), 3);
    add_object(create_objectcrystal_279(1853, 5442), 3);
    add_object(create_objectcrystal_279(1885, 5442), 3);
    add_object(create_objectcrystal_279(1917, 5442), 3);
    add_object(create_objectcrystal_279(1949, 5442), 3);
    add_object(create_objectcrystal_279(1981, 5442), 3);
    add_object(create_objectcrystal_279(2645, 5602), 3);
    add_object(create_objectcrystal_279(2621, 5626), 3);
    add_object(create_objectcrystal_279(2597, 5650), 3);
    add_object(create_objectcrystal_279(2573, 5674), 3);
    add_object(create_objectcrystal_279(2549, 5698), 3);
    add_object(create_objectcrystal_279(2965, 5450), 3);
    add_object(create_objectcrystal_279(2965, 5418), 3);
    add_object(create_objectcrystal_279(3261, 5314), 3);
    add_object(create_objectcrystal_279(3277, 5298), 3);
    add_object(create_objectcrystal_279(3293, 5282), 3);
    add_object(create_objectcrystal_279(3309, 5266), 3);
    add_object(create_objectcrystal_279(3325, 5250), 3);
    add_object(create_objectcrystal_279(3341, 5234), 3);
    add_object(create_monitorbomb_563(4928, 5568), 3);
    add_object(create_monitorbomb_563(4960, 5568), 3);
    add_object(create_monitorbomb_563(4992, 5568), 3);
    add_object(create_monitorbomb_563(5024, 5568), 3);
    add_object(create_objectkeycard_2643(4584, 5704), 3);
    add_object(create_hazardzapbeamcannon_3420(4256, 5424), 3);
    add_object(create_hazardzapbeamhitbox_3421(4257, 5512), 3);
    add_object(create_hazardzapbeamcannon_3420(4000, 5424), 3);
    add_object(create_hazardzapbeamhitbox_3421(4001, 5512), 3);
    add_object(create_hazardzapbeamcannon_3420(4104, 5680), 3);
    add_object(create_hazardzapbeamhitbox_3421(4105, 5752), 3);
    add_object(create_hazardzapbeamcannon_3420(4240, 5680), 3);
    add_object(create_hazardzapbeamhitbox_3421(4241, 5752), 3);
    add_object(create_hazardzapbeamcannon_3420(4368, 5680), 3);
    add_object(create_hazardzapbeamhitbox_3421(4369, 5752), 3);
    add_object(create_monitorrings_407(7104, 2016), 3);
    add_object(create_monitorbomb_563(7136, 2016), 3);
    add_object(create_monitorbomb_563(7072, 2016), 3);
    add_object(create_objectcrystal_279(5901, 1962), 3);
    add_object(create_objectcrystal_279(5869, 1986), 3);
    add_object(create_objectcrystal_279(5837, 2010), 3);
    add_object(create_objectcrystal_279(6621, 1970), 3);
    add_object(create_objectcrystal_279(6653, 1994), 3);
    add_object(create_objectcrystal_279(6685, 2018), 3);
    add_object(create_monitorcrystals_324(5696, 4128), 3);
    add_object(create_objectpetal_302(5985, 2745), 3);
    add_object(create_objectpetal_302(5985, 2697), 3);
    add_object(create_objectpetal_302(5985, 2649), 3);
    add_object(create_objectpetal_302(6497, 2745), 3);
    add_object(create_objectpetal_302(6497, 2697), 3);
    add_object(create_objectpetal_302(6497, 2649), 3);
    add_object(create_yellowspringright_435(5568, 2080), 3);
    add_object(create_yellowspringleft_436(7024, 2080), 3);
    add_object(create_redspringup_440(6688, 4144), 3);
    add_object(create_redspringup_440(5632, 4080), 3);
    add_object(create_hazardspinmine_3326(6240, 5264), 3);
    add_object(create_hazardspinmine_3326(6240, 5056), 3);
    add_object(create_hazardspinmine_3326(6240, 4936), 3);
    add_object(create_hazardspinmine_3326(6168, 4704), 3);
    add_object(create_hazardspinmine_3326(6312, 4800), 3);
    add_object(create_hazardspinmine_3326(6232, 3576), 3);
    add_object(create_hazardspinmine_3326(6184, 3624), 3);
    add_object(create_hazardspinmine_3326(6136, 3672), 3);
    add_object(create_hazardspinmine_3326(6344, 3440), 3);
    add_object(create_hazardspinmine_3326(6344, 3016), 3);
    add_object(create_hazardspinmine_3326(6248, 3344), 3);
    add_object(create_hazardspinmine_3326(6296, 3392), 3);
    add_object(create_hazardspinmine_3326(6192, 3168), 3);
    add_object(create_hazardspinmine_3326(6248, 3144), 3);
    add_object(create_hazardspinmine_3326(6136, 3192), 3);
    add_object(create_hazardspinmine_3326(6296, 2992), 3);
    add_object(create_objectpetal_302(6209, 2209), 3);
    add_object(create_objectpetal_302(6273, 2209), 3);
    add_object(create_objectpetal_302(6241, 2209), 3);
    add_object(create_objectbiglift_3574(6240, 5632), 3);
    add_object(create_objectbiglift_3574(6240, 3936), 3);
    add_object(create_switchbiglift1_3575(6176, 5632), 3);
    add_object(create_switchbiglift2_3576(6304, 5632), 3);
    add_object(create_switchbiglift1_3575(6176, 3936), 3);
    add_object(create_switchbiglift2_3576(6304, 3936), 3);
    add_object(create_bubblepatch_806(2736, 5599), 3);
    add_object(create_bubblepatch_806(4544, 5215), 3);
    add_object(create_bubblepatch_806(4624, 5599), 3);
    add_object(create_hazardspinmine_3326(6248, 2968), 3);
    add_object(create_enemybuoybuoy_2418(6032, 4192), 3);
    add_object(create_enemybuoybuoy_2418(6448, 4192), 3);
    add_object(create_enemyhoppermkii_2200(5995, 4576), 3);
    add_object(create_enemyhoppermkii_2200(6467, 4576), 3);
    add_object(create_enemylimiter_350(5829, 4562), 3);
    add_object(create_enemylimiter_350(6677, 4562), 3);
    add_object(create_enemybuoybuoy_2418(5792, 4008), 3);
    add_object(create_enemybuoybuoy_2418(6600, 4008), 3);
    add_object(create_enemyhoppermkii_2200(6459, 2912), 3);
    add_object(create_enemyhoppermkii_2200(6019, 2912), 3);
    add_object(create_monitor1up_410(6880, 2768), 3);
    add_object(create_enemylimiter_350(6133, 2898), 3);
    add_object(create_enemylimiter_350(6373, 2898), 3);
    add_object(create_enemylimiter_350(5573, 2898), 3);
    add_object(create_enemylimiter_350(7061, 2898), 3);
    add_object(create_enemyhoppermkii_2200(5859, 2528), 3);
    add_object(create_enemylimiter_350(5781, 2514), 3);
    add_object(create_enemyhoppermkii_2200(6627, 2528), 3);
    add_object(create_enemylimiter_350(6725, 2514), 3);
    add_object(create_enemybuoybuoy_2418(6240, 2712), 3);
    add_object(create_enemybuoybuoy_2418(5712, 1944), 3);
    add_object(create_objecttransporter_3344(5984, 2560), 3);
    add_object(create_enemyelitespawner_3345(5983, 2559), 3);
    add_object(create_enemytankbot_2821(5983, 2521), 3);
    add_object(create_objecttransporter_3344(6496, 2560), 3);
    add_object(create_enemyelitespawner_3345(6495, 2559), 3);
    add_object(create_enemytankbot_2821(6495, 2521), 3);
    add_object(create_enemybuoybuoy_2418(6000, 2208), 3);
    add_object(create_enemybuoybuoy_2418(6480, 2208), 3);
    add_object(create_monitorkeystone_562(5568, 2912), 3);
    add_object(create_objectbiglift_3574(6240, 1952), 3);
    add_object(create_switchbiglift1_3575(6176, 1952), 3);
    add_object(create_switchbiglift2_3576(6304, 1952), 3);
    add_object(create_hazardspinmine_3326(6144, 1832), 3);
    add_object(create_hazardspinmine_3326(6192, 1768), 3);
    add_object(create_bossmserpbackshoulder_3577(8544, 4918), 3);
    add_object(create_hazardspinmine_3326(6240, 1704), 3);
    add_object(create_hazardspinmine_3326(6288, 1640), 3);
    add_object(create_hazardspinmine_3326(6336, 1576), 3);
    add_object(create_hazardspinmine_3326(6288, 1512), 3);
    add_object(create_hazardspinmine_3326(6144, 1320), 3);
    add_object(create_hazardspinmine_3326(6192, 1384), 3);
    add_object(create_hazardspinmine_3326(6240, 1448), 3);
    add_object(create_fdrotatingbarrier_3573(704, 4984), 3);
    add_object(create_fdrotatingbarrier_3573(704, 4984), 3);
    add_object(create_hazardspinmine_3326(6192, 1256), 3);
    add_object(create_hazardspinmine_3326(6240, 1192), 3);
    add_object(create_hazardspinmine_3326(6288, 1128), 3);
    add_object(create_hazardspinmine_3326(6336, 1064), 3);
    add_object(create_cameralimitbossbottom_420(6880, 351), 3);
    add_object(create_bossmserpneck_3578(8548, 4891), 3);
    add_object(create_bossmserptail_3579(8433, 5071), 3);
    add_object(create_bossmserptail_3579(8457, 5071), 3);
    add_object(create_bossmserptail_3579(8481, 5071), 3);
    add_object(create_bossmserptail_3579(8505, 5071), 3);
    add_object(create_bossmserptail_3579(8529, 5063), 3);
    add_object(create_bossmserptail_3579(8537, 5047), 3);
    add_object(create_bossmserptail_3579(8545, 5031), 3);
    add_object(create_bossmserprightarm_3580(8608, 4928), 3);
    add_object(create_bossmserprightclaw_3581(8615, 4925), 3);
    add_object(create_bossmserptorso_3582(8544, 4920), 3);
    add_object(create_bossmserpfrontshoulder_3583(8534, 4918), 3);
    add_object(create_bossmserpleftarm_3584(8488, 4928), 3);
    add_object(create_bossmserphead_3585(8552, 4880), 3);
    add_object(create_bossmserpleftclaw_3586(8480, 4925), 3);
    add_object(create_bossenergypunch_3587(7327, 4992), 3);
    add_object(create_effectwarning2_1864(8468, 4760), 3);
    add_object(create_npcserpentine_947(7772, 260), 3);
    add_object(create_cameralimitbossbottom_420(7176, 351), 3);
    add_object(create_cameralimitbossbottom_420(7472, 351), 3);
    add_object(create_cameralimitbossbottom_420(7776, 351), 3);
    add_object(create_monitor1up_410(6560, 256), 3);
    add_object(create_monitor1up_410(6688, 256), 3);
    add_object(create_monitor1up_410(6816, 256), 3);
    add_object(create_monitor1up_410(6944, 256), 3);
    add_object(create_objecttransporterwave_3414(-400, 2376), 3);
    add_object(create_monitorwatershield_327(6848, 2768), 3);
    add_object(create_monitorwatershield_327(5664, 2912), 3);
    add_object(create_bubblepatch_806(6240, 4607), 3);
    add_object(create_bubblepatch_806(6048, 1983), 3);
    add_object(create_bubblepatch_806(6432, 1983), 3);
    add_object(create_objecttaostone_532(5635, 2874), 3);
    add_object(create_monitor1up_410(8128, 192), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
    add_background_object(create_fdaxle_3588(680, 4960), 4);
    add_background_object(create_fdlabfloor17_3543(2624, 5504), 4);
    add_background_object(create_fdlabfloor12_3520(64, 4960), 4);
    add_background_object(create_fdlabfloor12_3520(5184, 5216), 4);
    add_background_object(create_fdlabfloor6_3513(2560, 5504), 4);
    add_background_object(create_fdlabfloor6_3513(2496, 5504), 4);
    add_background_object(create_fdlabfloor6_3513(2432, 5504), 4);
    add_background_object(create_fdlabfloor6_3513(2368, 5504), 4);
    add_background_object(create_fdlabfloor3_3527(2368, 5504), 4);
    add_background_object(create_fdlabfloor12_3520(3680, 5216), 4);
    add_background_object(create_fdlabfloor12_3520(4416, 5216), 4);
    add_background_object(create_fdaxle_3588(4712, 5216), 4);
    add_background_object(create_teetertotteraxle_824(4240, 5408), 4);
    add_background_object(create_teetertotteraxle_824(3984, 5408), 4);
    add_background_object(create_teetertotteraxle_824(4088, 5664), 4);
    add_background_object(create_teetertotteraxle_824(4224, 5664), 4);
    add_background_object(create_teetertotteraxle_824(4352, 5664), 4);
    add_background_object(create_fdlabfloor12_3520(4544, 5600), 4);
    add_background_object(create_fdlabwall1_3508(6176, 2144), 4);
    add_background_object(create_fdlabfloor9_3524(6304, 2272), 4);
    add_background_object(create_fdlabfloor6_3513(6240, 2272), 4);
    add_background_object(create_fdlabfloor6_3513(6176, 2272), 4);
    add_background_object(create_fdlabfloor10_3519(6144, 2272), 4);
    add_background_object(create_fdlabfloor4_3510(6304, 2208), 4);
    add_background_object(create_fdlabfloor8_3517(6144, 2208), 4);
    add_background_object(create_fdlabfloor8_3517(6144, 2144), 4);
    add_background_object(create_fdlabfloor4_3510(6304, 2144), 4);
    add_background_object(create_fdlabfloor2_3521(6304, 2112), 4);
    add_background_object(create_fdlabfloor3_3527(6144, 2112), 4);
    add_background_object(create_fdlabfloor1_3514(6176, 2112), 4);
    add_object(create_lockedlabdoorfront_3544(5160, 5152), 4);
    add_object(create_lockeddoorseal_2672(5164, 5168), 4);
    add_object(create_labdoorfront_3507(40, 4896), 4);
    add_object(create_labdoorfront_3507(3656, 5152), 4);
    add_object(create_labdoorfront_3507(4392, 5152), 4);
    add_object(create_labdoorfront_3507(4520, 5536), 4);
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
    add_object(create_hazardspikesup_2426(-208, 392), 5);
    add_object(create_hazardspikesdown_960(-168, 392), 5);
    add_object(create_hazardspikesleft_959(-128, 392), 5);
    add_object(create_hazardspikesright_961(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_gimmickhangingidlesensor_740(702, -150), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossleft_421(4672, 1496), 5);
    add_object(create_cameralimitbossright_422(4991, 1496), 5);
    add_object(create_cameralimitbosstop_423(4832, 1472), 5);
    add_object(create_cameratriggerboss_424(4824, 1408), 5);
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
    add_object(create_basementlight_3545(-200, 897), 5);
    add_object(create_cameralimitbossbottom_420(4832, 1511), 5);
    add_object(create_cameralimitbossright_422(1023, 5048), 5);
    add_object(create_cameralimitbossright_422(1023, 4840), 5);
    add_object(create_cameralimitbosstop_423(2080, 4992), 5);
    add_object(create_cameralimitbosstop_423(2400, 4992), 5);
    add_object(create_cameralimitbossright_422(2815, 5512), 5);
    add_object(create_cameralimitbossleft_421(2912, 5496), 5);
    add_object(create_cameralimitbossleft_421(2912, 5272), 5);
    add_object(create_cameralimitbosstop_423(5000, 4928), 5);
    add_object(create_cameralimitbosstop_423(4712, 4928), 5);
    add_object(create_cameralimitbossleft_421(5536, 3840), 5);
    add_object(create_cameralimitbossleft_421(5536, 4032), 5);
    add_object(create_cameralimitbossleft_421(5536, 4248), 5);
    add_object(create_cameralimitbossleft_421(5536, 2968), 5);
    add_object(create_cameralimitbossleft_421(5536, 2768), 5);
    add_object(create_cameralimitbossleft_421(5536, 2104), 5);
    add_object(create_cameralimitbossleft_421(5536, 1888), 5);
    add_object(create_cameralimitbossright_422(7071, 2904), 5);
    add_object(create_cameralimitbossright_422(7071, 2736), 5);
    add_object(create_cameralimitbossright_422(7199, 1984), 5);
    add_object(create_cameralimitbosstop_423(6800, 640), 5);
    add_object(create_cameralimitbossbottom_420(6632, 351), 5);
    add_object(create_cameralimitbossleft_421(6784, 4840), 5);
    add_object(create_cameralimitbossleft_421(6784, 5040), 5);
    add_object(create_cameralimitbossleft_421(6784, 5248), 5);
    add_object(create_cameralimitbossleft_421(6784, 5472), 5);
    add_object(create_cameralimitbossleft_421(6784, 5688), 5);
    add_object(create_cameralimitbossleft_421(6784, 5808), 5);
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_mapdata_30(-432, 232), 5);
    add_object(create_recorddata_34(-432, 248), 5);
    add_object(create_guiair_759(-16, 96), 6);
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
    add_object(create_guikeycards_2673(38, 231), 6);
    add_object(create_guikeycardicon_2674(16, 228), 6);
    add_object(create_subtitletext_3433(-160, 176), 6);
    add_object(create_subtitledata_3589(-144, 448), 6);
    add_object(create_timebonustotal_460(-256, -72), 7);
    add_object(create_timebonustotal_460(-256, -72), 7);
    add_object(create_levelcardfade2_24(-328, -336), 7);
    add_object(create_guilifebasemeter_125(0, 0), 7);
    add_object(create_levelcardintro1_464(16, -240), 7);
    add_object(create_sarassteampluginfreedomplanet_26(-192, -128), 7);
    add_object(create_levelcardactclear4_846(-48, 212), 7);
    add_object(create_levelcardactclear1_847(-448, 735), 7);
    add_object(create_levelcardactclear2_848(-88, 88), 7);
    add_object(create_levelcardactclear3_849(-72, 88), 7);
    add_object(create_totalcrystals_854(44, 230), 7);
    add_object(create_levelcardbonus1_850(-12, 109), 7);
    add_object(create_levelcardbonus2_851(76, 109), 7);
    add_object(create_levelcardbonus3_852(-16, -64), 7);
    add_object(create_totalbonus_853(-18, -40), 7);
    add_object(create_levelcardactclear1_847(-160, 24), 7);
    add_object(create_levelcardfade_461(0, 0), 7);
    add_object(create_levelcardintro3_760(0, 248), 7);
    add_object(create_levelcardgameover_462(0, 256), 7);
    add_object(create_levelcardintro2_761(0, 248), 7);
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
    loop_tally_running = false;
    loop_tally_index = 0;
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
    loop_process_call_stop_music_running = false;
    loop_process_call_stop_music_index = 0;
    static DynamicLoops frame_loops;
    loops = &frame_loops;
    static bool loops_initialized = false;
    if (!loops_initialized) {
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_68, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_68, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_68, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_68, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_68, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_68, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_68, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_68, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_68, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_68, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_68, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_68, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_68, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_68, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_68, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_68, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_68, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_68, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_68, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_68, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_68, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_68, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_68, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_68, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_68, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_68, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_68, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_68, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_68, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_68, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_68, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_68, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_68, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_68, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_68, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_68, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_68, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_68, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_68, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_68, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_68, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_68, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_68, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_68, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    once_condition_1923_68 = false;
    not_always_789_13 = loop_count;
    not_always_1745_47 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_1388_13 = loop_count;
    not_always_44_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    not_always_1510_16 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_brevon_laughs_1 = true;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    once_condition_2039_68 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_449_13 = loop_count;
    not_always_97_0 = loop_count;
    not_always_1449_13 = loop_count;
    not_always_1517_19 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    not_always_101_0 = loop_count;
    not_always_1425_13 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    not_always_68_13 = loop_count;
    not_always_1149_14 = loop_count;
    not_always_1037_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    once_condition_36_13 = false;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_100_0 = loop_count;
    not_always_1513_16 = loop_count;
    not_always_43_13 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_1476_68 = loop_count;
    not_always_121_0 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1033_13 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1 = false;
    not_always_600_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_animations_and_directions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_1512_16 = loop_count;
    not_always_130_0 = loop_count;
    group_main_engine_level_specific_methods_stage_clear_1 = true;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    not_always_308_13 = loop_count;
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
    not_always_1531_19 = loop_count;
    once_condition_63_0 = false;
    once_condition_1522_19 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    not_always_1779_68 = loop_count;
    not_always_1447_13 = loop_count;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    not_always_2280_68 = loop_count;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_52_13 = loop_count;
    not_always_1036_13 = loop_count;
    not_always_1035_13 = loop_count;
    not_always_1783_68 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_422_13 = loop_count;
    not_always_1295_13 = loop_count;
    not_always_522_13 = loop_count;
    not_always_1984_67 = loop_count;
    once_condition_64_13 = false;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1148_14 = loop_count;
    not_always_1802_67 = loop_count;
    once_condition_57_14 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    once_condition_38_13 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    once_condition_1918_68 = false;
    not_always_1034_13 = loop_count;
    not_always_1993_68 = loop_count;
    not_always_558_13 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_2137_46 = loop_count;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    not_always_1509_16 = loop_count;
    not_always_69_13 = loop_count;
    not_always_1496_34 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    not_always_45_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_1896_68 = loop_count;
    group_main_engine_interface_and_post_processing_methods_me_music_engine_1 = true;
    not_always_1511_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_57_13 = loop_count;
    not_always_450_13 = loop_count;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    not_always_1831_16 = loop_count;
    not_always_1803_67 = loop_count;
    once_condition_138_0 = false;
    not_always_99_0 = loop_count;
    not_always_1518_19 = loop_count;
    group_mac_controls_1 = false;
    not_always_1740_14 = loop_count;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_1514_16 = loop_count;
    not_always_234_13 = loop_count;
    not_always_1865_66 = loop_count;
    not_always_1516_19 = loop_count;
    not_always_553_13 = loop_count;
    not_always_140_0 = loop_count;
    not_always_813_13 = loop_count;
    not_always_64_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = false;
    group_pause_1 = false;
    not_always_41_13 = loop_count;
    not_always_1992_68 = loop_count;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_540_13 = loop_count;
    not_always_1516_16 = loop_count;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    not_always_1421_13 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_70_13 = loop_count;
    not_always_172_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    not_always_1991_68 = loop_count;
    once_condition_63_13 = false;
    group_main_engine_level_specific_methods_frame_transition_1 = false;
    not_always_2136_46 = loop_count;
    not_always_174_8 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    once_condition_66_13 = false;
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1 = true;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    once_condition_4_19 = false;
    not_always_1039_13 = loop_count;
    not_always_95_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    once_condition_59_14 = false;
    not_always_809_13 = loop_count;
    once_condition_48_13 = false;
    once_condition_1531_23 = false;
    not_always_103_0 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
    not_always_96_0 = loop_count;
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
    not_always_1448_68 = loop_count;
    group_debug_mode_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_1825_68 = loop_count;
    not_always_745_13 = loop_count;
    not_always_1744_47 = loop_count;
    not_always_66_0 = loop_count;
    once_condition_50_13 = false;
    once_condition_37_13 = false;
    not_always_1515_19 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_554_13 = loop_count;
    once_condition_35_13 = false;
    not_always_1507_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1 = false;
    not_always_59_13 = loop_count;
    not_always_1525_19 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_14728()
{
    // event 1741_69
    {
        if (!(group_main_engine_1)) goto event_1741_69_end;
        enemygatlinggun_3650_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (11))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(19)) < (4))) { it.deselect(); continue; }
        }
        if (!enemygatlinggun_3650_instances.has_selection()) goto event_1741_69_end;
        FrameObject * single_instance_1741_69_0; single_instance_1741_69_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemygatlinggun_3650_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemygatlinggundebris_3595(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1741_69_0 == NULL)
                    single_instance_1741_69_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1741_69_0))->force_frame(((Active*)get_single(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(19));
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(19, 1);
        }
        ((Active*)((Active*)single_instance_1741_69_0))->set_angle(((Active*)get_single(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(3), 0);
    }
    event_1741_69_end: ;
}
void Frames::loop_gd_69()
{
    event_func_14728();
}
void Frames::loop_spawndebris_69()
{
    event_func_1176();
    event_func_1177();
    event_func_1178();
    event_func_10018();
    event_func_10728();
    event_func_11381();
    event_func_8591();
    event_func_9095();
    event_func_13951();
}
void Frames::event_func_14729()
{
    // event 2057_69
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2057_69_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_stage10c_ogg_236, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_2057_69_end: ;
}
void Frames::loop_play_music_5_69()
{
    event_func_14729();
}
void Frames::event_func_14730()
{
    // event 2059_69
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2059_69_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_stage10d_ogg_102, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_2059_69_end: ;
}
void Frames::loop_play_music_7_69()
{
    event_func_14730();
}
void Frames::event_func_14731()
{
    // event 1840_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_voice_acting_1)) goto event_1840_69_end;
        if (!((global_values->get(26)) == (0))) goto event_1840_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(8)) == (0))) goto event_1840_69_end;
        media.play(str_data_voices_88+global_strings->get(11)+str__89+mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 6, 2)+str__89+mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 6, 8)+str_ogg_90, 20-1);
    }
    event_1840_69_end: ;
}
void Frames::event_func_14732()
{
    // event 1841_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_voice_acting_1)) goto event_1841_69_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(9, 0);
    }
    event_1841_69_end: ;
}
void Frames::event_func_14733()
{
    // event 1842_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_voice_acting_1)) goto event_1842_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)) < (6))) goto event_1842_69_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(9, 1);
    }
    event_1842_69_end: ;
}
void Frames::event_func_14734()
{
    // event 1874_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1874_69_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, string_to_number(mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 3, 2)));
    }
    event_1874_69_end: ;
}
void Frames::loop_voice_69()
{
    event_func_14731();
    event_func_14732();
    event_func_14733();
    event_func_14734();
}
void Frames::loop_wrapper_sound_hurt1_69(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_69(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_69(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_69(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_69(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_69(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_process_call_resume_music_69(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_46();
}
void Frames::loop_wrapper_sound_idle7_69(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_69(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_16();
}
void Frames::loop_wrapper_sound_dig2_69(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_69(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_69(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_69(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_sound_explode5_69(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_69(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_process_call_unlock_music_69(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_46();
}
void Frames::loop_wrapper_process_call_fadeout_music_69(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_46();
}
void Frames::loop_wrapper_sound_explode8_69(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_process_call_reset_music_69(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_46();
}
void Frames::loop_wrapper_sound_hurt2_69(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_69(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_69(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_explode0_69(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_69(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_69(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_camera_mode1_69(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_16();
}
void Frames::loop_wrapper_camera_mode0_69(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_16();
}
void Frames::loop_wrapper_process_call_play_music_69(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_46();
}
void Frames::loop_wrapper_sound_attack1_69(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_69(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_69(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_69(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_play_music_8_69(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_46();
}
void Frames::loop_wrapper_sound_uppercut3_69(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_69(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_69(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_69(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_46();
}
void Frames::loop_wrapper_play_music_0_69(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_46();
}
void Frames::loop_wrapper_play_music_1_69(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_46();
}
void Frames::loop_wrapper_process_call_lock_music_69(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_46();
}
void Frames::loop_wrapper_play_music_3_69(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_46();
}
void Frames::loop_wrapper_play_music_4_69(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_46();
}
void Frames::loop_wrapper_play_music_5_69(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_69();
}
void Frames::loop_wrapper_play_music_6_69(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_68();
}
void Frames::loop_wrapper_sound_go0_69(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_unqueue_music_69(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_46();
}
void Frames::loop_wrapper_process_call_me_69(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_46();
}
void Frames::loop_wrapper_play_music_7_69(void * frame)
{
    ((Frames*)frame)->loop_play_music_7_69();
}
void Frames::loop_wrapper_sound_explode3_69(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_cyclone0_69(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_sound_explode2_69(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_69(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
