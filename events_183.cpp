#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_14315()
{
    // event 2059_66
    {
        if (!(group_main_engine_1)) goto event_2059_66_end;
        if (!((global_values->get(4)) < (3))) goto event_2059_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (4500))) goto event_2059_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (4600))) goto event_2059_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (900))) goto event_2059_66_end;
        global_values->set(4, 3);
        global_values->set(5, 4508);
        global_values->set(6, 820);
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
    event_2059_66_end: ;
}
void Frames::event_func_14316()
{
    // event 2060_66
    {
        if (!(group_main_engine_1)) goto event_2060_66_end;
        if (!((global_values->get(4)) < (4))) goto event_2060_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (8484))) goto event_2060_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (8584))) goto event_2060_66_end;
        global_values->set(4, 4);
        global_values->set(5, 8484);
        global_values->set(6, 1580);
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
    event_2060_66_end: ;
}
void Frames::event_func_14317()
{
    // event 2061_66
    {
        if (!(group_main_engine_1)) goto event_2061_66_end;
        if (!((global_values->get(4)) < (5))) goto event_2061_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (10650))) goto event_2061_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (10900))) goto event_2061_66_end;
        global_values->set(4, 5);
        global_values->set(5, 10656);
        global_values->set(6, 1416);
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
    event_2061_66_end: ;
}
void Frames::event_func_14318()
{
    // event 2066_66
    {
        if (!(group_main_engine_1)) goto event_2066_66_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(3)) == (149))) goto event_2066_66_end;
        if (once_condition_2066_66) goto event_2066_66_end;
        once_condition_2066_66 = true;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 53)) == (0))) goto event_2066_66_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25)) <= (300000))) goto event_2066_66_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 2, 53);
    }
    event_2066_66_end: ;
}
void Frames::event_func_14319()
{
    // event 2067_66
    {
        if (!(group_main_engine_1)) goto event_2067_66_end;
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1)) goto event_2067_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) == (1))) goto event_2067_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_2067_66_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 15)), 2, 15);
    }
    event_2067_66_end: ;
}
void Frames::event_func_14320()
{
    // event 2068_66
    {
        if (!(group_main_engine_1)) goto event_2068_66_end;
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1)) goto event_2068_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) == (1))) goto event_2068_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_2068_66_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 12)), 2, 12);
    }
    event_2068_66_end: ;
}
void Frames::event_func_14321()
{
    // event 2069_66
    {
        if (!(group_main_engine_1)) goto event_2069_66_end;
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1)) goto event_2069_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) == (1))) goto event_2069_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (20))) goto event_2069_66_end;
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1073741824))) { it.deselect(); continue; }
        }
        if (!shieldinstashield_359_instances.has_selection()) goto event_2069_66_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 13)), 2, 13);
    }
    event_2069_66_end: ;
}
void Frames::event_func_14322()
{
    // event 2070_66
    {
        if (!(group_main_engine_1)) goto event_2070_66_end;
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1)) goto event_2070_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) == (1))) goto event_2070_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (20))) goto event_2070_66_end;
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(16384))) { it.deselect(); continue; }
        }
        if (!shieldinstashield_359_instances.has_selection()) goto event_2070_66_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 13)), 2, 13);
    }
    event_2070_66_end: ;
}
void Frames::event_func_14323()
{
    // event 2071_66
    {
        if (!(group_main_engine_1)) goto event_2071_66_end;
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1)) goto event_2071_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) == (1))) goto event_2071_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_2071_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (21))) goto event_2071_66_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 10)), 2, 10);
    }
    event_2071_66_end: ;
}
void Frames::event_func_14324()
{
    // event 2072_66
    {
        if (!(group_main_engine_1)) goto event_2072_66_end;
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1)) goto event_2072_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) == (1))) goto event_2072_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_2072_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (26))) goto event_2072_66_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 11)), 2, 11);
    }
    event_2072_66_end: ;
}
void Frames::event_func_14325()
{
    // event 2073_66
    {
        if (!(group_main_engine_1)) goto event_2073_66_end;
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1)) goto event_2073_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) == (1))) goto event_2073_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (44))) goto event_2073_66_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 14)), 2, 14);
    }
    event_2073_66_end: ;
}
void Frames::event_func_14326()
{
    // event 2074_66
    {
        if (!(group_main_engine_1)) goto event_2074_66_end;
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1)) goto event_2074_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) == (1))) goto event_2074_66_end;
        playerreflect_447_instances.clear_selection();
        bossmorpherhead_3471_instances.clear_selection();
        if (!check_overlap(playerreflect_447_instances, bossmorpherhead_3471_instances)) goto event_2074_66_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (3))) goto event_2074_66_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 16)), 2, 16);
    }
    event_2074_66_end: ;
}
void Frames::event_func_14327()
{
    // event 2075_66
    {
        if (!(group_main_engine_1)) goto event_2075_66_end;
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1)) goto event_2075_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) == (1))) goto event_2075_66_end;
        playerreflect_447_instances.clear_selection();
        bossmorpherhead_3471_instances.clear_selection();
        if (!check_overlap(playerreflect_447_instances, bossmorpherhead_3471_instances)) goto event_2075_66_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (5))) goto event_2075_66_end;
        if (!(((Active*)get_instance(playerreflect_447_instances))->test_animation(5))) goto event_2075_66_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 17)), 2, 17);
    }
    event_2075_66_end: ;
}
void Frames::event_func_14328()
{
    // event 2279_66
    {
        if (!(group_pause_1)) goto event_2279_66_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_2279_66_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2279_66_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_2279_66_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_2279_66_end;
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
        ((Active*)get_instance(bubblenumbers_429_instances))->stop_animation();
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
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        bosstrainbream_3441_instances.clear_selection();
        for (ObjectIterator it(bosstrainbream_3441_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bosssyntaxelecball_3442_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxelecball_3442_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsgroundspark_2025_instances.clear_selection();
        for (ObjectIterator it(effectsgroundspark_2025_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibosspushbeam_3475_instances.clear_selection();
        for (ObjectIterator it(minibosspushbeam_3475_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectlowspring_3429_instances.clear_selection();
        for (ObjectIterator it(objectlowspring_3429_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        hazardzapbeamcannon_3420_instances.clear_selection();
        for (ObjectIterator it(hazardzapbeamcannon_3420_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        hazardzapbeam_3388_instances.clear_selection();
        for (ObjectIterator it(hazardzapbeam_3388_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        hazardzapbeamhitbox_3421_instances.clear_selection();
        for (ObjectIterator it(hazardzapbeamhitbox_3421_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemydronelaser_2127_instances.clear_selection();
        for (ObjectIterator it(enemydronelaser_2127_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        hazardspiralspark_3375_instances.clear_selection();
        for (ObjectIterator it(hazardspiralspark_3375_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemysporeprojectile_969_instances.clear_selection();
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibossflame_1199_instances.clear_selection();
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyfragbomb_2049_instances.clear_selection();
        for (ObjectIterator it(enemyfragbomb_2049_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_2279_66_end: ;
}
void Frames::event_func_14329()
{
    // event 2280_66
    bool or_result_2280_66 = false;
    bool or_temp_result_2280_66_0 = false;
    {
        if (!(group_pause_1)) goto or_event_2280_66_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_2280_66_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2280_66_0_end;
        or_result_2280_66 = true;
        or_temp_result_2280_66_0 = true;
    }
    or_event_2280_66_0_end: ;
    // event 2280_66
    bool or_temp_result_2280_66_1 = false;
    {
        if (!(group_pause_1)) goto or_event_2280_66_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_2280_66_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2280_66_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_2280_66_1_end;
        or_result_2280_66 = true;
        or_temp_result_2280_66_1 = true;
        or_event_2280_66_1_end: ;
        if (!or_result_2280_66) goto or_final_or_event_2280_66_1_end;
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
        ((Active*)get_instance(bubblenumbers_429_instances))->start_animation();
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
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        bosstrainbream_3441_instances.clear_selection();
        for (ObjectIterator it(bosstrainbream_3441_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bosssyntaxelecball_3442_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxelecball_3442_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsgroundspark_2025_instances.clear_selection();
        for (ObjectIterator it(effectsgroundspark_2025_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibosspushbeam_3475_instances.clear_selection();
        for (ObjectIterator it(minibosspushbeam_3475_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectlowspring_3429_instances.clear_selection();
        for (ObjectIterator it(objectlowspring_3429_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        hazardzapbeamcannon_3420_instances.clear_selection();
        for (ObjectIterator it(hazardzapbeamcannon_3420_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        hazardzapbeam_3388_instances.clear_selection();
        for (ObjectIterator it(hazardzapbeam_3388_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        hazardzapbeamhitbox_3421_instances.clear_selection();
        for (ObjectIterator it(hazardzapbeamhitbox_3421_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemydronelaser_2127_instances.clear_selection();
        for (ObjectIterator it(enemydronelaser_2127_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        hazardspiralspark_3375_instances.clear_selection();
        for (ObjectIterator it(hazardspiralspark_3375_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemysporeprojectile_969_instances.clear_selection();
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibossflame_1199_instances.clear_selection();
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyfragbomb_2049_instances.clear_selection();
        for (ObjectIterator it(enemyfragbomb_2049_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_2280_66_1_end: ;
}
void Frames::event_func_14330()
{
    // event 2295_66
    {
        // group: Slowdown Effect
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) > (0))) goto event_2295_66_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(2)%math_helper%((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) != (0))) goto event_2295_66_end;
        if (not_always_2295_66 > loop_count) {
            not_always_2295_66 = loop_count + 2;
            goto event_2295_66_end;
        }
        not_always_2295_66 = loop_count + 2;
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
        ((Active*)get_instance(bubblenumbers_429_instances))->stop_animation();
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
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        bosstrainbream_3441_instances.clear_selection();
        for (ObjectIterator it(bosstrainbream_3441_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bosssyntaxelecball_3442_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxelecball_3442_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsgroundspark_2025_instances.clear_selection();
        for (ObjectIterator it(effectsgroundspark_2025_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibosspushbeam_3475_instances.clear_selection();
        for (ObjectIterator it(minibosspushbeam_3475_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectlowspring_3429_instances.clear_selection();
        for (ObjectIterator it(objectlowspring_3429_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        guipowercard_457_instances.clear_selection();
        for (ObjectIterator it(guipowercard_457_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_2295_66_end: ;
}
void Frames::event_func_14331()
{
    // event 2296_66
    {
        // group: Slowdown Effect
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) > (0))) goto event_2296_66_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(2)%math_helper%((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) == (0))) goto event_2296_66_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2296_66_end;
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
        ((Active*)get_instance(bubblenumbers_429_instances))->start_animation();
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
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        bosstrainbream_3441_instances.clear_selection();
        for (ObjectIterator it(bosstrainbream_3441_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bosssyntaxelecball_3442_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxelecball_3442_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsgroundspark_2025_instances.clear_selection();
        for (ObjectIterator it(effectsgroundspark_2025_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibosspushbeam_3475_instances.clear_selection();
        for (ObjectIterator it(minibosspushbeam_3475_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectlowspring_3429_instances.clear_selection();
        for (ObjectIterator it(objectlowspring_3429_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        guipowercard_457_instances.clear_selection();
        for (ObjectIterator it(guipowercard_457_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    event_2296_66_end: ;
}
void Frames::handle_frame_67_events()
{
    test_collisions_66();
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
    event_func_4593();
    event_func_8682();
    event_func_8732();
    event_func_8733();
    event_func_8741();
    event_func_4203();
    event_func_4205();
    event_func_2650();
    event_func_4187();
    event_func_4188();
    if (!group_main_engine_1) goto group_main_engine_1_end;
    if (!group_main_engine_scrolling_floor_1) goto group_main_engine_scrolling_floor_1_end;
    event_func_14108();
    event_func_14109();
    event_func_14110();
    event_func_14111();
    event_func_14112();
    event_func_14113();
    event_func_14114();
    event_func_14115();
    event_func_14116();
    event_func_14117();
    event_func_14118();
    event_func_14119();
    event_func_14120();
    event_func_14121();
    event_func_14122();
    event_func_14123();
    event_func_14124();
    event_func_14125();
    event_func_14126();
    group_main_engine_scrolling_floor_1_end: ;
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
    event_func_13966();
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
    event_func_4342();
    event_func_4343();
    event_func_4344();
    event_func_4345();
    event_func_4346();
    event_func_4347();
    event_func_4348();
    event_func_4349();
    event_func_4350();
    event_func_4351();
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
    event_func_13967();
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
    event_func_13968();
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
    event_func_13969();
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
    event_func_4374();
    event_func_4375();
    event_func_4376();
    event_func_4377();
    event_func_13970();
    event_func_13971();
    event_func_13972();
    event_func_13973();
    event_func_13974();
    event_func_13975();
    event_func_13976();
    event_func_13977();
    event_func_13978();
    event_func_13979();
    event_func_13980();
    event_func_13981();
    event_func_13982();
    event_func_13983();
    event_func_13984();
    event_func_13985();
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
    event_func_14127();
    event_func_14128();
    event_func_14001();
    event_func_14002();
    event_func_14003();
    event_func_14004();
    event_func_14005();
    event_func_14006();
    event_func_14007();
    event_func_14008();
    event_func_14009();
    event_func_14010();
    event_func_14011();
    event_func_14012();
    event_func_14013();
    event_func_14014();
    event_func_14015();
    event_func_14016();
    event_func_14017();
    event_func_14018();
    event_func_14019();
    event_func_14020();
    event_func_14021();
    event_func_14129();
    event_func_14056();
    event_func_14130();
    event_func_14131();
    event_func_14132();
    event_func_14133();
    event_func_14134();
    event_func_14135();
    event_func_14136();
    event_func_14137();
    event_func_14138();
    event_func_14139();
    event_func_14140();
    event_func_14141();
    event_func_14142();
    event_func_14143();
    event_func_14144();
    event_func_14145();
    event_func_14146();
    event_func_14147();
    event_func_14148();
    event_func_14149();
    event_func_14150();
    event_func_14151();
    event_func_14152();
    event_func_14153();
    event_func_14154();
    event_func_7545();
    event_func_7546();
    event_func_7547();
    event_func_7548();
    event_func_7549();
    event_func_7550();
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
    event_func_14026();
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
    event_func_13477();
    event_func_13478();
    event_func_13479();
    event_func_13480();
    event_func_13481();
    event_func_14027();
    event_func_13483();
    event_func_14028();
    event_func_14029();
    event_func_14155();
    event_func_14031();
    event_func_5251();
    event_func_5252();
    event_func_5253();
    event_func_5254();
    event_func_5255();
    event_func_5256();
    event_func_5257();
    event_func_5258();
    event_func_5259();
    event_func_5260();
    event_func_5261();
    event_func_5262();
    event_func_5263();
    event_func_5264();
    event_func_5265();
    event_func_5266();
    event_func_5267();
    event_func_5268();
    event_func_14032();
    event_func_5270();
    event_func_4590();
    event_func_4591();
    event_func_4592();
    event_func_8674();
    event_func_8675();
    event_func_8676();
    event_func_8677();
    event_func_8678();
    event_func_8679();
    event_func_8680();
    event_func_8681();
    event_func_8683();
    event_func_8684();
    event_func_8685();
    event_func_8686();
    event_func_8687();
    event_func_8688();
    event_func_14033();
    event_func_8690();
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
    event_func_14034();
    event_func_11482();
    event_func_5689();
    event_func_5690();
    event_func_5691();
    event_func_5692();
    event_func_5693();
    event_func_5694();
    event_func_5695();
    event_func_5696();
    event_func_5697();
    event_func_5698();
    event_func_5699();
    event_func_5700();
    event_func_5701();
    event_func_5702();
    event_func_5703();
    event_func_14035();
    event_func_5705();
    event_func_8724();
    event_func_8725();
    event_func_8726();
    event_func_8727();
    event_func_8728();
    event_func_8729();
    event_func_8730();
    event_func_8731();
    event_func_14036();
    event_func_8735();
    event_func_8736();
    event_func_8737();
    event_func_8738();
    event_func_8739();
    event_func_8740();
    event_func_14037();
    event_func_14038();
    event_func_14039();
    event_func_14040();
    event_func_14041();
    event_func_14042();
    event_func_14043();
    event_func_14044();
    event_func_14045();
    event_func_14046();
    event_func_14047();
    event_func_14048();
    event_func_14049();
    event_func_14050();
    event_func_14051();
    event_func_14052();
    event_func_14053();
    event_func_11910();
    event_func_11913();
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
    event_func_14054();
    event_func_7036();
    event_func_13244();
    if (!group_main_engine_level_specific_methods_frame_transition_1) goto group_main_engine_level_specific_methods_frame_transition_1_end;
    event_func_7944();
    event_func_7945();
    event_func_7946();
    group_main_engine_level_specific_methods_frame_transition_1_end: ;
    if (!group_main_engine_level_specific_methods_stage_clear_1) goto group_main_engine_level_specific_methods_stage_clear_1_end;
    event_func_4197();
    event_func_4198();
    event_func_4199();
    event_func_14156();
    event_func_4202();
    event_func_4204();
    event_func_4206();
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
    event_func_14157();
    group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1_end: ;
    group_main_engine_level_specific_methods_stage_clear_1_end: ;
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) goto group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end;
    event_func_4173();
    event_func_4059();
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end: ;
    event_func_14158();
    event_func_14159();
    event_func_14160();
    event_func_14161();
    event_func_14162();
    event_func_14163();
    event_func_14164();
    event_func_14165();
    event_func_14166();
    event_func_14167();
    event_func_14168();
    event_func_14169();
    event_func_14073();
    event_func_14170();
    event_func_14171();
    event_func_14172();
    if (!group_main_engine_level_specific_methods_bosses_boss_morpher_1) goto group_main_engine_level_specific_methods_bosses_boss_morpher_1_end;
    event_func_14173();
    event_func_14174();
    event_func_14175();
    if (!group_main_engine_level_specific_methods_bosses_boss_morpher_scrolling_floor_movement_1) goto group_main_engine_level_specific_methods_bosses_boss_morpher_scrolling_floor_movement_1_end;
    event_func_14176();
    event_func_14177();
    group_main_engine_level_specific_methods_bosses_boss_morpher_scrolling_floor_movement_1_end: ;
    event_func_14178();
    event_func_14179();
    event_func_14180();
    event_func_14181();
    event_func_14182();
    event_func_14183();
    event_func_14184();
    event_func_14185();
    event_func_14186();
    event_func_14187();
    event_func_14188();
    event_func_14189();
    event_func_14190();
    event_func_14191();
    event_func_14192();
    event_func_14193();
    event_func_14194();
    event_func_14195();
    event_func_14196();
    event_func_14197();
    if (!group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1) goto group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1_end;
    event_func_14198();
    event_func_14199();
    event_func_14200();
    event_func_14201();
    event_func_14202();
    event_func_14203();
    event_func_14204();
    event_func_14205();
    event_func_14206();
    event_func_14207();
    event_func_14208();
    event_func_14209();
    event_func_14210();
    event_func_14211();
    event_func_14212();
    event_func_14213();
    event_func_14214();
    event_func_14215();
    event_func_14216();
    event_func_14217();
    event_func_14218();
    event_func_14219();
    event_func_14220();
    event_func_14221();
    event_func_14222();
    event_func_14223();
    event_func_14224();
    event_func_14225();
    event_func_14226();
    event_func_14227();
    event_func_14228();
    event_func_14229();
    event_func_14230();
    event_func_14231();
    event_func_14232();
    event_func_14233();
    event_func_14234();
    event_func_14235();
    group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1_end: ;
    event_func_14236();
    event_func_14237();
    event_func_14238();
    event_func_14239();
    event_func_14240();
    event_func_14241();
    event_func_14242();
    event_func_14243();
    event_func_14244();
    event_func_14245();
    event_func_14246();
    event_func_14247();
    event_func_14248();
    event_func_14249();
    event_func_14250();
    event_func_14251();
    event_func_14252();
    event_func_14253();
    event_func_14254();
    event_func_14255();
    event_func_14256();
    event_func_14257();
    event_func_14258();
    event_func_14259();
    event_func_14260();
    event_func_14261();
    event_func_14262();
    if (!group_main_engine_level_specific_methods_bosses_boss_morpher_speed_lines_1) goto group_main_engine_level_specific_methods_bosses_boss_morpher_speed_lines_1_end;
    event_func_14263();
    event_func_14264();
    event_func_14265();
    event_func_14266();
    event_func_14267();
    group_main_engine_level_specific_methods_bosses_boss_morpher_speed_lines_1_end: ;
    event_func_14268();
    event_func_14269();
    event_func_14270();
    event_func_14271();
    event_func_14272();
    event_func_14273();
    event_func_14274();
    event_func_14275();
    event_func_14276();
    event_func_14277();
    event_func_14278();
    event_func_14279();
    event_func_14280();
    event_func_14281();
    event_func_14282();
    event_func_14283();
    event_func_14284();
    event_func_14285();
    event_func_14286();
    event_func_14287();
    event_func_14288();
    event_func_14289();
    if (!group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1) goto group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1_end;
    event_func_14290();
    event_func_14291();
    event_func_14292();
    event_func_14293();
    event_func_14294();
    event_func_14295();
    event_func_14296();
    event_func_14297();
    event_func_14298();
    event_func_14299();
    event_func_14300();
    event_func_14301();
    event_func_14302();
    event_func_14303();
    event_func_14304();
    event_func_14305();
    event_func_14306();
    event_func_14307();
    event_func_14308();
    event_func_14309();
    event_func_14310();
    event_func_14311();
    event_func_14312();
    group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1_end: ;
    event_func_14313();
    group_main_engine_level_specific_methods_bosses_boss_morpher_1_end: ;
    event_func_14314();
    event_func_14315();
    event_func_14316();
    event_func_14317();
    event_func_5505();
    event_func_5506();
    event_func_14318();
    event_func_14319();
    event_func_14320();
    event_func_14321();
    event_func_14322();
    event_func_14323();
    event_func_14324();
    event_func_14325();
    event_func_14326();
    event_func_14327();
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
    event_func_14328();
    event_func_14329();
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
    event_func_14330();
    event_func_14331();
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
void Frames::handle_frame_67_pre_events()
{
}
void Frames::event_func_14332()
{
    // event 1_66
    {
#ifdef CHOWDREN_WAIT
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->find_board(global_values->get(1), 8);
#endif
    }
    event_1_66_end: ;
}
void Frames::event_func_14333()
{
    // event 26_66
    {
        if (!(group_main_engine_1)) goto event_26_66_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 2000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 49);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
    }
    event_26_66_end: ;
}
void Frames::event_func_14334()
{
    // event 43_66
    {
        if (!(group_main_engine_1)) goto event_43_66_end;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(3, 0.9);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(4, 0.9);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(3, 0.8);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(4, 0.88);
        ((SystemBox*)get_instance(levelparallaxpiece10_765_instances))->alterables->values.set(3, 0.7);
        ((SystemBox*)get_instance(levelparallaxpiece10_765_instances))->alterables->values.set(4, 0.9);
        ((SystemBox*)get_instance(levelparallaxpiece11_966_instances))->alterables->values.set(3, 0.7);
        ((SystemBox*)get_instance(levelparallaxpiece11_966_instances))->alterables->values.set(4, 0.86);
        ((SystemBox*)get_instance(levelparallaxpiece1_466_instances))->alterables->values.set(3, 0.95);
        ((SystemBox*)get_instance(levelparallaxpiece1_466_instances))->alterables->values.set(4, 0.95);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(3, 1);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(4, 1);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(6, -0.3);
        ((SystemBox*)get_instance(levelparallaxtunnel2_3436_instances))->alterables->values.set(3, 0.5);
        ((SystemBox*)get_instance(levelparallaxtunnel2_3436_instances))->alterables->values.set(4, 0);
        ((SystemBox*)get_instance(levelparallaxtunnel1_3437_instances))->alterables->values.set(3, 0.25);
        ((SystemBox*)get_instance(levelparallaxtunnel1_3437_instances))->alterables->values.set(4, 0);
    }
    event_43_66_end: ;
}
void Frames::event_func_14335()
{
    // event 1461_66
    {
        if (!(group_main_engine_1)) goto event_1461_66_end;
        hazardzapbeam_3388_instances.clear_selection();
        for (ObjectIterator it(hazardzapbeam_3388_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y_scale(48);
        }
        hazardzapbeamhitbox_3421_instances.clear_selection();
        for (ObjectIterator it(hazardzapbeamhitbox_3421_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y_scale(48);
        }
        hazardzapbeamcannon_3420_instances.clear_selection();
        spread_value(hazardzapbeamcannon_3420_instances, 3, 0);
        for (ObjectIterator it(hazardzapbeamcannon_3420_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, (((Active*)*it)->alterables->values.get(3)%math_helper%2)*30);
        }
    }
    event_1461_66_end: ;
}
void Frames::event_func_14336()
{
    // event 1524_66
    {
        if (!(group_main_engine_1)) goto event_1524_66_end;
        pressuredoor1_3446_instances.clear_selection();
        for (ObjectIterator it(pressuredoor1_3446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_y());
        }
        pressuredoor2_3447_instances.clear_selection();
        for (ObjectIterator it(pressuredoor2_3447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_y());
        }
        pressuredoor3_3473_instances.clear_selection();
        for (ObjectIterator it(pressuredoor3_3473_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_y());
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1524_66_end: ;
}
void Frames::event_func_14337()
{
    // event 1908_66
    {
        if (!(group_main_engine_1)) goto event_1908_66_end;
        ((SystemBox*)get_instance(levelparallaxtunnel2_3436_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxtunnel1_3437_instances))->set_visible(false);
    }
    event_1908_66_end: ;
}
void Frames::event_func_14338()
{
    // event 1912_66
    {
        if (!(group_main_engine_1)) goto event_1912_66_end;
        scrollingfloor_3439_instances.clear_selection();
        spread_value(scrollingfloor_3439_instances, 0, 0);
        for (ObjectIterator it(scrollingfloor_3439_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)*128);
        }
        scrollingfloor2_3440_instances.clear_selection();
        spread_value(scrollingfloor2_3440_instances, 0, 0);
        for (ObjectIterator it(scrollingfloor2_3440_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)*128);
        }
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(10, ((Active*)get_instance(bossmorpherhead_3471_instances, default_active_instance))->get_x());
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(11, ((Active*)get_instance(bossmorpherhead_3471_instances, default_active_instance))->get_y());
        bossmorpherhead_3471_instances.clear_selection();
        for (ObjectIterator it(bossmorpherhead_3471_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
        }
    }
    event_1912_66_end: ;
}
void Frames::event_func_14339()
{
    // event 2228_66
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_2228_66_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(11);
        }
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(8);
        }
    }
    event_2228_66_end: ;
}
void Frames::on_frame_67_start_events()
{
    event_func_14332();
    event_func_4133();
    event_func_14091();
    event_func_4318();
    event_func_14333();
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
    event_func_14334();
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
    event_func_14335();
    event_func_14095();
    event_func_14336();
    event_func_10707();
    event_func_13539();
    event_func_14096();
    event_func_5383();
    event_func_9073();
    event_func_11501();
    event_func_9074();
    event_func_14097();
    event_func_7062();
    event_func_2686();
    event_func_2687();
    event_func_14337();
    event_func_14338();
    event_func_3277();
    event_func_2690();
    event_func_2691();
    event_func_14339();
    event_func_4145();
    event_func_5573();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_67_init()
{
    index = 66;
    width = 16800;
    height = 2400;
    virtual_width = 16800;
    virtual_height = 2400;
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
    static ObjectList* qualifier_30_instances[] = {&bossmorpherorb2_3456_instances, &bossmorpherorb1_3457_instances, &bossmorpherpelvis_3459_instances, &bossmorpherwheel4_3460_instances, &bossmorpherwheel3_3461_instances, &bossmorpherwheel2_3462_instances, &bossmorpherwheel1_3463_instances, &bossmorphertube1_3464_instances, &bossmorphertube2_3465_instances, &bossmorphergrill2_3466_instances, &bossmorphergrill1_3467_instances, &bossmorphernode2_3468_instances, &bossmorphernode1_3469_instances, &bossmorpherbody_3470_instances, NULL};
    qualifier_30.set(14, &qualifier_30_instances[0]);
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &gimmickdownhillplatform_3427_instances, NULL};
    qualifier_8.set(10, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &hazardspikesup_558_instances, &gimmickdownhillplatform_3427_instances, NULL};
    qualifier_9.set(33, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemyhopper_1168_instances, &enemyfirespitter_1385_instances, &enemysuperturretus_1828_instances, &enemyhoppermkii_2200_instances, &enemydrone_2222_instances, &enemyelitemask_2511_instances, &enemytankbot_2821_instances, &enemypounder_3419_instances, &bossmorpherhead_3471_instances, NULL};
    qualifier_20.set(9, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece2_467_instances, &levelparallaxpiece1_466_instances, &levelparallaxpiece0_465_instances, &levelparallaxpiece10_765_instances, &levelparallaxpiece7_764_instances, &levelparallaxpiece11_966_instances, &levelparallaxtunnel2_3436_instances, &levelparallaxtunnel1_3437_instances, NULL};
    qualifier_0.set(8, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &hazardspikesup_558_instances, &objecttransporter_3344_instances, &scrollingfloor2_3440_instances, &airlock1_3453_instances, &airlock4_3454_instances, &pressuredoor3_3473_instances, NULL};
    qualifier_7.set(31, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &enemysuperturretus_1828_instances, NULL};
    qualifier_4.set(35, &qualifier_4_instances[0]);
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
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &gimmickdownhillplatform_3427_instances, NULL};
    qualifier_13.set(2, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece2_3370(0, 0), 0);
    add_background_object(create_levelparallaxpiece1_3371(0, 72), 0);
    add_background_object(create_levelparallaxpiece0_3372(0, 96), 0);
    add_background_object(create_levelparallaxpiece7_3379(0, 360), 0);
    add_background_object(create_levelparallaxpiece10_3373(0, 0), 0);
    add_background_object(create_levelparallaxpiece11_3380(0, 416), 0);
    add_background_object(create_levelparallaxtunnel2_3436(0, 1904), 0);
    add_background_object(create_levelparallaxtunnel1_3437(0, 1904), 0);
    add_background_object(create_fdhangarfloor6_3400(9408, 1376), 0);
    add_background_object(create_fdhangarsilo_3381(1088, 640), 1);
    add_background_object(create_fdhangarsilo_3381(1088, 768), 1);
    add_background_object(create_fdhangarsilo_3381(1088, 896), 1);
    add_background_object(create_fdhangarsilo_3381(1088, 512), 1);
    add_background_object(create_fdhangarsilo_3381(1088, 1024), 1);
    add_background_object(create_fdhangarsilo_3381(1088, 1152), 1);
    add_background_object(create_fdhangarsilo_3381(1088, 1280), 1);
    add_background_object(create_fdhangarsilo_3381(680, 768), 1);
    add_background_object(create_fdhangarsilo_3381(680, 896), 1);
    add_background_object(create_fdhangarsilo_3381(680, 1024), 1);
    add_background_object(create_fdhangarsilo_3381(680, 1152), 1);
    add_background_object(create_fdhangarsilo_3381(680, 1280), 1);
    add_background_object(create_fdhangarsilo_3381(680, 640), 1);
    add_background_object(create_fdhangarsilo_3381(1536, 640), 1);
    add_background_object(create_fdhangarsilo_3381(1536, 768), 1);
    add_background_object(create_fdhangarsilo_3381(1536, 896), 1);
    add_background_object(create_fdhangarsilo_3381(1536, 512), 1);
    add_background_object(create_fdhangarsilo_3381(1536, 1024), 1);
    add_background_object(create_fdhangarsilo_3381(1536, 1152), 1);
    add_background_object(create_fdhangarsilo_3381(1536, 1280), 1);
    add_background_object(create_fdhangarsilo_3381(680, 512), 1);
    add_background_object(create_fdhangarsilo_3381(1088, 384), 1);
    add_background_object(create_fdhangarsilo_3381(1088, 256), 1);
    add_background_object(create_fdhangarsilo_3381(680, 384), 1);
    add_background_object(create_fdhangarsilo_3381(680, 256), 1);
    add_background_object(create_fdhangarsilo_3381(1088, 128), 1);
    add_background_object(create_fdhangarsilo_3381(1088, 0), 1);
    add_background_object(create_fdhangarsilo_3381(680, 128), 1);
    add_background_object(create_fdhangarsilo_3381(680, 0), 1);
    add_background_object(create_fdhangarsilo_3381(1536, 384), 1);
    add_background_object(create_fdhangarsilo_3381(1536, 256), 1);
    add_background_object(create_fdhangarsilo_3381(1536, 128), 1);
    add_background_object(create_fdhangarsilo_3381(1536, 0), 1);
    add_background_object(create_fdhangarsilo_3381(1976, 640), 1);
    add_background_object(create_fdhangarsilo_3381(1976, 768), 1);
    add_background_object(create_fdhangarsilo_3381(1976, 896), 1);
    add_background_object(create_fdhangarsilo_3381(1976, 512), 1);
    add_background_object(create_fdhangarsilo_3381(1976, 1024), 1);
    add_background_object(create_fdhangarsilo_3381(1976, 1152), 1);
    add_background_object(create_fdhangarsilo_3381(1976, 1280), 1);
    add_background_object(create_fdhangarsilo_3381(1976, 384), 1);
    add_background_object(create_fdhangarsilo_3381(1976, 256), 1);
    add_background_object(create_fdhangarsilo_3381(1976, 128), 1);
    add_background_object(create_fdhangarsilo_3381(1976, 0), 1);
    add_background_object(create_fdhangarsilo_3381(2376, 640), 1);
    add_background_object(create_fdhangarsilo_3381(2376, 768), 1);
    add_background_object(create_fdhangarsilo_3381(2376, 896), 1);
    add_background_object(create_fdhangarsilo_3381(2376, 512), 1);
    add_background_object(create_fdhangarsilo_3381(2376, 1024), 1);
    add_background_object(create_fdhangarsilo_3381(2376, 1152), 1);
    add_background_object(create_fdhangarsilo_3381(2376, 1280), 1);
    add_background_object(create_fdhangarsilo_3381(2376, 384), 1);
    add_background_object(create_fdhangarsilo_3381(2376, 256), 1);
    add_background_object(create_fdhangarsilo_3381(2376, 128), 1);
    add_background_object(create_fdhangarsilo_3381(2376, 0), 1);
    add_background_object(create_fdhangarsilo_3381(2768, 640), 1);
    add_background_object(create_fdhangarsilo_3381(2768, 768), 1);
    add_background_object(create_fdhangarsilo_3381(2768, 896), 1);
    add_background_object(create_fdhangarsilo_3381(2768, 512), 1);
    add_background_object(create_fdhangarsilo_3381(2768, 1024), 1);
    add_background_object(create_fdhangarsilo_3381(2768, 1152), 1);
    add_background_object(create_fdhangarsilo_3381(2768, 1280), 1);
    add_background_object(create_fdhangarsilo_3381(2768, 384), 1);
    add_background_object(create_fdhangarsilo_3381(2768, 256), 1);
    add_background_object(create_fdhangarsilo_3381(2768, 128), 1);
    add_background_object(create_fdhangarsilo_3381(2768, 0), 1);
    add_background_object(create_fdhangarsilo_3381(3168, 640), 1);
    add_background_object(create_fdhangarsilo_3381(3168, 768), 1);
    add_background_object(create_fdhangarsilo_3381(3168, 896), 1);
    add_background_object(create_fdhangarsilo_3381(3168, 512), 1);
    add_background_object(create_fdhangarsilo_3381(3168, 1024), 1);
    add_background_object(create_fdhangarsilo_3381(3168, 1152), 1);
    add_background_object(create_fdhangarsilo_3381(3168, 1280), 1);
    add_background_object(create_fdhangarsilo_3381(3168, 384), 1);
    add_background_object(create_fdhangarsilo_3381(3168, 256), 1);
    add_background_object(create_fdhangarsilo_3381(3168, 128), 1);
    add_background_object(create_fdhangarsilo_3381(3168, 0), 1);
    add_background_object(create_quickbackdrop2_3443(8608, 1152), 2);
    add_background_object(create_quickbackdrop2_3443(8608, 1408), 2);
    add_background_object(create_quickbackdrop_3444(7520, 0), 2);
    add_background_object(create_quickbackdrop_3444(7904, 0), 2);
    add_background_object(create_quickbackdrop_3444(5536, 0), 2);
    add_background_object(create_fdhalfpipe1_3384(7320, 1544), 2);
    add_background_object(create_fdhalfpipe2_3385(7616, 1544), 2);
    add_background_object(create_fdhalfpipe2_3385(7744, 1544), 2);
    add_background_object(create_fdhalfpipe2_3385(7872, 1544), 2);
    add_background_object(create_fdhalfpipe3_3386(8000, 1544), 2);
    add_background_object(create_fdhalfpipe1_3384(5272, 648), 2);
    add_background_object(create_fdhalfpipe2_3385(5568, 648), 2);
    add_background_object(create_fdhalfpipe3_3386(5696, 648), 2);
    add_background_object(create_fdback1_3383(2496, 1280), 2);
    add_background_object(create_fdback1_3383(2496, 1344), 2);
    add_background_object(create_fdback2_3382(2464, 1280), 2);
    add_background_object(create_fdback2_3382(2560, 1280), 2);
    add_background_object(create_fdback2_3382(2016, 1280), 2);
    add_background_object(create_fdback2_3382(1792, 1280), 2);
    add_background_object(create_fdback1_3383(1824, 1280), 2);
    add_background_object(create_fdback1_3383(1888, 1280), 2);
    add_background_object(create_fdback1_3383(1952, 1280), 2);
    add_background_object(create_fdback1_3383(1824, 1344), 2);
    add_background_object(create_fdback1_3383(1888, 1344), 2);
    add_background_object(create_fdback1_3383(1952, 1344), 2);
    add_background_object(create_fdback2_3382(1408, 1280), 2);
    add_background_object(create_fdback1_3383(1440, 1280), 2);
    add_background_object(create_fdback1_3383(1440, 1344), 2);
    add_background_object(create_fdback2_3382(1504, 1280), 2);
    add_background_object(create_fdback2_3382(1792, 768), 2);
    add_background_object(create_fdback1_3383(1824, 768), 2);
    add_background_object(create_fdback1_3383(1824, 832), 2);
    add_background_object(create_fdback2_3382(1792, 640), 2);
    add_background_object(create_fdback1_3383(1824, 704), 2);
    add_background_object(create_fdback2_3382(1408, 768), 2);
    add_background_object(create_fdback1_3383(1440, 768), 2);
    add_background_object(create_fdback1_3383(1440, 832), 2);
    add_background_object(create_fdback2_3382(1408, 640), 2);
    add_background_object(create_fdback1_3383(1440, 704), 2);
    add_background_object(create_fdback2_3382(1504, 768), 2);
    add_background_object(create_fdback2_3382(1504, 640), 2);
    add_background_object(create_fdback2_3382(1024, 768), 2);
    add_background_object(create_fdback1_3383(1056, 768), 2);
    add_background_object(create_fdback1_3383(1056, 832), 2);
    add_background_object(create_fdback2_3382(1024, 640), 2);
    add_background_object(create_fdback1_3383(1056, 704), 2);
    add_background_object(create_fdback2_3382(1120, 768), 2);
    add_background_object(create_fdback2_3382(1120, 640), 2);
    add_background_object(create_fdback2_3382(2048, 1024), 2);
    add_background_object(create_fdback1_3383(1984, 1088), 2);
    add_background_object(create_quickbackdrop_3444(2208, 0), 2);
    add_background_object(create_quickbackdrop_3444(2848, 0), 2);
    add_background_object(create_quickbackdrop_3444(1568, 0), 2);
    add_background_object(create_quickbackdrop_3444(1184, 0), 2);
    add_background_object(create_fdback2_3382(2400, 1632), 2);
    add_background_object(create_fdback1_3383(2432, 1632), 2);
    add_background_object(create_fdback1_3383(2432, 1696), 2);
    add_background_object(create_fdback1_3383(2496, 1632), 2);
    add_background_object(create_fdback1_3383(2496, 1696), 2);
    add_background_object(create_fdback1_3383(3744, 1472), 2);
    add_background_object(create_fdback1_3383(3680, 1472), 2);
    add_background_object(create_fdback1_3383(3776, 1408), 2);
    add_background_object(create_fdback1_3383(3712, 1408), 2);
    add_background_object(create_fdback1_3383(3744, 1344), 2);
    add_background_object(create_fdback1_3383(3680, 1344), 2);
    add_background_object(create_fdback1_3383(3776, 1280), 2);
    add_background_object(create_fdback1_3383(3712, 1280), 2);
    add_background_object(create_fdback1_3383(3744, 1216), 2);
    add_background_object(create_fdback1_3383(3680, 1216), 2);
    add_background_object(create_fdback1_3383(3776, 1152), 2);
    add_background_object(create_fdback1_3383(3712, 1152), 2);
    add_background_object(create_fdback1_3383(3744, 1088), 2);
    add_background_object(create_fdback1_3383(3680, 1088), 2);
    add_background_object(create_fdback1_3383(3776, 1024), 2);
    add_background_object(create_fdback1_3383(3712, 1024), 2);
    add_background_object(create_fdback1_3383(3744, 960), 2);
    add_background_object(create_fdback1_3383(3680, 960), 2);
    add_background_object(create_fdback1_3383(3776, 896), 2);
    add_background_object(create_fdback1_3383(3712, 896), 2);
    add_background_object(create_fdback1_3383(3744, 832), 2);
    add_background_object(create_fdback1_3383(3680, 832), 2);
    add_background_object(create_fdback1_3383(3776, 768), 2);
    add_background_object(create_fdback1_3383(3712, 768), 2);
    add_background_object(create_fdback2_3382(3680, 1280), 2);
    add_background_object(create_fdback2_3382(3808, 896), 2);
    add_background_object(create_fdback2_3382(3808, 1408), 2);
    add_background_object(create_fdback2_3382(3808, 1280), 2);
    add_background_object(create_fdback2_3382(3808, 1152), 2);
    add_background_object(create_fdback2_3382(3680, 1408), 2);
    add_background_object(create_fdback2_3382(3808, 1024), 2);
    add_background_object(create_fdback1_3383(3712, 704), 2);
    add_background_object(create_fdback1_3383(3776, 704), 2);
    add_background_object(create_fdback2_3382(3808, 704), 2);
    add_background_object(create_quickbackdrop_3444(4256, 0), 2);
    add_background_object(create_fdback2_3382(4448, 1088), 2);
    add_background_object(create_fdback2_3382(4448, 960), 2);
    add_background_object(create_fdback1_3383(4480, 1152), 2);
    add_background_object(create_fdback1_3383(4544, 1152), 2);
    add_background_object(create_fdback1_3383(4480, 1088), 2);
    add_background_object(create_fdback1_3383(4544, 1088), 2);
    add_background_object(create_fdback1_3383(4480, 1024), 2);
    add_background_object(create_fdback1_3383(4544, 1024), 2);
    add_background_object(create_fdback2_3382(4768, 1088), 2);
    add_background_object(create_fdback2_3382(4768, 960), 2);
    add_background_object(create_fdback1_3383(4704, 1024), 2);
    add_background_object(create_fdback1_3383(4704, 1088), 2);
    add_background_object(create_fdback1_3383(4704, 1152), 2);
    add_background_object(create_fdback2_3382(768, 1280), 2);
    add_background_object(create_fdback2_3382(1120, 1280), 2);
    add_background_object(create_fdback1_3383(800, 1280), 2);
    add_background_object(create_fdback1_3383(800, 1344), 2);
    add_background_object(create_fdback1_3383(864, 1280), 2);
    add_background_object(create_fdback1_3383(864, 1344), 2);
    add_background_object(create_fdback1_3383(928, 1280), 2);
    add_background_object(create_fdback1_3383(928, 1344), 2);
    add_background_object(create_fdback1_3383(992, 1280), 2);
    add_background_object(create_fdback1_3383(992, 1344), 2);
    add_background_object(create_fdback1_3383(1056, 1280), 2);
    add_background_object(create_fdback1_3383(1056, 1344), 2);
    add_background_object(create_fdback2_3382(4448, 1216), 2);
    add_background_object(create_fdback1_3383(4480, 1216), 2);
    add_background_object(create_fdback1_3383(4544, 1216), 2);
    add_background_object(create_fdback1_3383(4480, 1280), 2);
    add_background_object(create_fdback1_3383(4544, 1280), 2);
    add_background_object(create_fdback1_3383(1440, 1216), 2);
    add_background_object(create_fdback2_3382(1408, 1152), 2);
    add_background_object(create_fdback2_3382(1504, 1152), 2);
    add_background_object(create_fdback1_3383(3744, 448), 2);
    add_background_object(create_fdback1_3383(3680, 448), 2);
    add_background_object(create_fdback1_3383(3744, 384), 2);
    add_background_object(create_fdback1_3383(3680, 384), 2);
    add_background_object(create_fdback2_3382(3808, 384), 2);
    add_background_object(create_fdback2_3382(3648, 384), 2);
    add_background_object(create_fdback1_3383(2080, 928), 2);
    add_background_object(create_fdback1_3383(2080, 864), 2);
    add_background_object(create_fdback2_3382(2144, 864), 2);
    add_background_object(create_fdback2_3382(4672, 1088), 2);
    add_background_object(create_fdback2_3382(4672, 960), 2);
    add_background_object(create_fdback2_3382(4608, 1088), 2);
    add_background_object(create_fdback2_3382(4608, 960), 2);
    add_background_object(create_fdback2_3382(4928, 1088), 2);
    add_background_object(create_fdback2_3382(4928, 960), 2);
    add_background_object(create_fdback1_3383(4864, 1024), 2);
    add_background_object(create_fdback1_3383(4864, 1088), 2);
    add_background_object(create_fdback1_3383(4864, 1152), 2);
    add_background_object(create_fdback2_3382(4832, 1088), 2);
    add_background_object(create_fdback2_3382(4832, 960), 2);
    add_background_object(create_fdback2_3382(5504, 896), 2);
    add_background_object(create_fdback1_3383(5440, 896), 2);
    add_background_object(create_fdback1_3383(5440, 960), 2);
    add_background_object(create_fdback2_3382(5504, 1024), 2);
    add_background_object(create_fdback1_3383(5440, 1024), 2);
    add_background_object(create_fdback1_3383(5440, 1088), 2);
    add_background_object(create_fdback2_3382(5504, 1152), 2);
    add_background_object(create_fdback1_3383(5440, 1152), 2);
    add_background_object(create_fdback1_3383(5440, 1216), 2);
    add_background_object(create_fdback2_3382(5504, 1280), 2);
    add_background_object(create_fdback1_3383(5440, 1280), 2);
    add_background_object(create_fdback1_3383(5376, 896), 2);
    add_background_object(create_fdback1_3383(5376, 960), 2);
    add_background_object(create_fdback1_3383(5376, 1024), 2);
    add_background_object(create_fdback1_3383(5376, 1088), 2);
    add_background_object(create_fdback1_3383(5376, 1152), 2);
    add_background_object(create_fdback1_3383(5376, 1216), 2);
    add_background_object(create_fdback1_3383(5376, 1280), 2);
    add_background_object(create_fdback2_3382(5344, 896), 2);
    add_background_object(create_fdback2_3382(5344, 1024), 2);
    add_background_object(create_fdback2_3382(5344, 1152), 2);
    add_background_object(create_fdback2_3382(5344, 1280), 2);
    add_background_object(create_fdback2_3382(5120, 1152), 2);
    add_background_object(create_fdback2_3382(5120, 1024), 2);
    add_background_object(create_fdback1_3383(5056, 1152), 2);
    add_background_object(create_fdback1_3383(5056, 1216), 2);
    add_background_object(create_fdback2_3382(5024, 1152), 2);
    add_background_object(create_fdback2_3382(5024, 1024), 2);
    add_background_object(create_fdback2_3382(5120, 1280), 2);
    add_background_object(create_fdback2_3382(5024, 1280), 2);
    add_background_object(create_fdback1_3383(5056, 1280), 2);
    add_background_object(create_fdback1_3383(5056, 1088), 2);
    add_background_object(create_fdback1_3383(5056, 1024), 2);
    add_background_object(create_quickbackdrop_3444(6048, 0), 2);
    add_background_object(create_quickbackdrop_3444(6432, 0), 2);
    add_background_object(create_fdback2_3382(6240, 672), 2);
    add_background_object(create_fdback2_3382(6240, 800), 2);
    add_background_object(create_fdback2_3382(6400, 672), 2);
    add_background_object(create_fdback2_3382(6400, 800), 2);
    add_background_object(create_fdback1_3383(6272, 736), 2);
    add_background_object(create_fdback1_3383(6336, 736), 2);
    add_background_object(create_fdback1_3383(6272, 800), 2);
    add_background_object(create_fdback1_3383(6336, 800), 2);
    add_background_object(create_fdback1_3383(6272, 864), 2);
    add_background_object(create_fdback1_3383(6336, 864), 2);
    add_background_object(create_fdback2_3382(5728, 1856), 2);
    add_background_object(create_fdback2_3382(5728, 1984), 2);
    add_background_object(create_fdback2_3382(5728, 1728), 2);
    add_background_object(create_fdback1_3383(5760, 2048), 2);
    add_background_object(create_fdback1_3383(5760, 1984), 2);
    add_background_object(create_fdback1_3383(5760, 1920), 2);
    add_background_object(create_fdback1_3383(5760, 1856), 2);
    add_background_object(create_fdback1_3383(5760, 1792), 2);
    add_background_object(create_fdback2_3382(5824, 1984), 2);
    add_background_object(create_fdback2_3382(5824, 1856), 2);
    add_background_object(create_fdback2_3382(5824, 1728), 2);
    add_background_object(create_fdback2_3382(2400, 1760), 2);
    add_background_object(create_fdback1_3383(2432, 1760), 2);
    add_background_object(create_fdback1_3383(2432, 1824), 2);
    add_background_object(create_fdback1_3383(2496, 1760), 2);
    add_background_object(create_fdback1_3383(2496, 1824), 2);
    add_background_object(create_fdhalfpipe1_3384(7320, 1136), 2);
    add_background_object(create_fdhalfpipe2_3385(7616, 1136), 2);
    add_background_object(create_fdhalfpipe2_3385(7744, 1136), 2);
    add_background_object(create_fdhalfpipe2_3385(7872, 1136), 2);
    add_background_object(create_fdhalfpipe3_3386(8000, 1136), 2);
    add_background_object(create_fdback2_3382(8576, 1216), 2);
    add_background_object(create_fdback2_3382(8576, 1088), 2);
    add_background_object(create_fdback2_3382(8576, 1472), 2);
    add_background_object(create_fdback2_3382(8576, 1344), 2);
    add_background_object(create_fdback2_3382(8800, 1216), 2);
    add_background_object(create_fdback2_3382(8800, 1088), 2);
    add_background_object(create_fdback2_3382(8800, 1472), 2);
    add_background_object(create_fdback2_3382(8800, 1344), 2);
    add_background_object(create_fdback2_3382(8896, 1216), 2);
    add_background_object(create_fdback2_3382(8896, 1088), 2);
    add_background_object(create_fdback2_3382(8896, 1472), 2);
    add_background_object(create_fdback2_3382(8896, 1344), 2);
    add_background_object(create_fdback2_3382(9376, 1216), 2);
    add_background_object(create_fdback2_3382(9376, 1088), 2);
    add_background_object(create_fdback2_3382(9472, 1216), 2);
    add_background_object(create_fdback2_3382(9472, 1088), 2);
    add_background_object(create_fdback2_3382(9952, 1216), 2);
    add_background_object(create_fdback2_3382(9952, 1088), 2);
    add_background_object(create_fdback2_3382(9952, 1472), 2);
    add_background_object(create_fdback2_3382(9952, 1344), 2);
    add_background_object(create_fdback2_3382(10048, 1216), 2);
    add_background_object(create_fdback2_3382(10048, 1088), 2);
    add_background_object(create_fdback2_3382(10048, 1472), 2);
    add_background_object(create_fdback2_3382(10048, 1344), 2);
    add_background_object(create_fdback2_3382(10528, 1216), 2);
    add_background_object(create_fdback2_3382(10528, 1088), 2);
    add_background_object(create_fdback2_3382(10528, 1472), 2);
    add_background_object(create_fdback2_3382(10528, 1344), 2);
    add_background_object(create_fdback1_3383(9824, 1664), 2);
    add_background_object(create_fdback1_3383(9760, 1664), 2);
    add_background_object(create_fdback1_3383(9696, 1664), 2);
    add_background_object(create_fdback1_3383(9632, 1664), 2);
    add_background_object(create_fdback1_3383(9568, 1664), 2);
    add_background_object(create_fdback1_3383(9504, 1664), 2);
    add_background_object(create_fdback1_3383(9440, 1664), 2);
    add_background_object(create_fdback1_3383(9376, 1664), 2);
    add_background_object(create_fdback1_3383(9312, 1664), 2);
    add_background_object(create_fdback1_3383(9248, 1664), 2);
    add_background_object(create_fdback1_3383(9184, 1664), 2);
    add_background_object(create_fdback2_3382(12320, 1984), 2);
    add_background_object(create_fdback2_3382(12320, 1856), 2);
    add_background_object(create_fdback2_3382(12800, 1984), 2);
    add_background_object(create_fdback2_3382(12800, 1856), 2);
    add_background_object(create_fdback1_3383(12352, 2048), 2);
    add_background_object(create_fdback1_3383(12416, 2048), 2);
    add_background_object(create_fdback1_3383(12352, 1984), 2);
    add_background_object(create_fdback1_3383(12416, 1984), 2);
    add_background_object(create_fdback1_3383(12352, 1920), 2);
    add_background_object(create_fdback1_3383(12416, 1920), 2);
    add_background_object(create_fdback1_3383(12480, 1984), 2);
    add_background_object(create_fdback1_3383(12544, 1984), 2);
    add_background_object(create_fdback1_3383(12480, 1920), 2);
    add_background_object(create_fdback1_3383(12544, 1920), 2);
    add_background_object(create_fdback1_3383(12608, 1984), 2);
    add_background_object(create_fdback1_3383(12672, 1984), 2);
    add_background_object(create_fdback1_3383(12608, 1920), 2);
    add_background_object(create_fdback1_3383(12672, 1920), 2);
    add_background_object(create_fdback1_3383(12736, 1984), 2);
    add_background_object(create_fdback1_3383(12736, 1920), 2);
    add_background_object(create_fdback1_3383(12672, 2048), 2);
    add_background_object(create_fdback1_3383(12736, 2048), 2);
    add_background_object(create_fdback1_3383(0, 640), 2);
    add_background_object(create_fdback1_3383(0, 576), 2);
    add_background_object(create_fdback1_3383(0, 512), 2);
    add_background_object(create_fdback2_3382(64, 576), 2);
    add_background_object(create_fdback2_3382(64, 448), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(17056, 61), 2);
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
    add_object(create_objectsiren_3337(111, 527), 2);
    add_object(create_objectsiren_3337(207, 527), 2);
    add_object(create_hazardzapbeam_3388(4737, 1112), 2);
    add_object(create_hazardzapbeam_3388(4897, 1112), 2);
    add_object(create_hazardzapbeam_3388(6337, 1208), 2);
    add_object(create_effectspeedback_3445(0, 1904), 2);
    add_object(create_objectsiren_3337(1167, 719), 2);
    add_object(create_objectsiren_3337(1391, 719), 2);
    add_object(create_objectsiren_3337(1551, 719), 2);
    add_object(create_objectsiren_3337(1775, 719), 2);
    add_object(create_objectsiren_3337(1471, 1263), 2);
    add_object(create_objectsiren_3337(2159, 1071), 2);
    add_object(create_objectsiren_3337(4495, 495), 2);
    add_object(create_objectsiren_3337(4623, 495), 2);
    add_object(create_objectsiren_3337(5743, 559), 2);
    add_object(create_objectsiren_3337(5519, 559), 2);
    add_object(create_objectsiren_3337(6031, 559), 2);
    add_object(create_objectsiren_3337(5743, 911), 2);
    add_object(create_objectsiren_3337(5519, 911), 2);
    add_object(create_objectsiren_3337(6031, 911), 2);
    add_object(create_pressuredoor1_3446(6270, 736), 2);
    add_object(create_pressuredoor2_3447(6270, 736), 2);
    add_object(create_pressuredoor1_3446(6398, 736), 2);
    add_object(create_pressuredoor2_3447(6398, 736), 2);
    add_object(create_pressuredoor1_3446(12830, 1936), 2);
    add_object(create_pressuredoor2_3447(12830, 1936), 2);
    add_object(create_pressuredoor2_3447(12318, 1936), 2);
    add_object(create_pressuredoor1_3446(12318, 1936), 2);
    add_object(create_pressuredoor1_3446(30, 512), 2);
    add_object(create_pressuredoor2_3447(30, 512), 2);
    add_object(create_objectsiren_3337(4751, 495), 2);
    add_object(create_hazardzapbeam_3388(6753, 1176), 2);
    add_object(create_objectsiren_3337(9087, 1167), 2);
    add_object(create_objectsiren_3337(9215, 1167), 2);
    add_object(create_objectsiren_3337(9087, 1423), 2);
    add_object(create_objectsiren_3337(9215, 1423), 2);
    add_object(create_objectsiren_3337(9343, 1423), 2);
    add_object(create_objectsiren_3337(9535, 1423), 2);
    add_object(create_objectsiren_3337(9663, 1423), 2);
    add_object(create_objectsiren_3337(9791, 1423), 2);
    add_object(create_objectsiren_3337(9663, 1167), 2);
    add_object(create_objectsiren_3337(9791, 1167), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_fdhangarfloor8_3394(4832, 448), 3);
    add_background_object(create_tblongrailing3_2690(1408, 1216), 3);
    add_background_object(create_tblongrailing2_2689(1528, 1216), 3);
    add_background_object(create_fdhangarwall1_3392(10752, 992), 3);
    add_background_object(create_fdhangarwall1_3392(10752, 864), 3);
    add_background_object(create_fdhangarwall1_3392(10752, 736), 3);
    add_background_object(create_fdhangarwall3_3389(10560, 1632), 3);
    add_background_object(create_fdhangarwall3_3389(10560, 1760), 3);
    add_background_object(create_fdhangarwall3_3389(10560, 1888), 3);
    add_background_object(create_fdhangarfloor1_3396(8896, 1600), 3);
    add_background_object(create_fdhangarwall1_3392(8896, 1632), 3);
    add_background_object(create_fdhangarwall1_3392(8896, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(8896, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(9024, 1632), 3);
    add_background_object(create_fdhangarwall1_3392(9024, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(9024, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(9152, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(9152, 1888), 3);
    add_background_object(create_fdhangarwall3_3389(8768, 1760), 3);
    add_background_object(create_fdhangarwall3_3389(8768, 1888), 3);
    add_background_object(create_fdhangarwall2_3393(2560, 1568), 3);
    add_background_object(create_fdhangarwall2_3393(2648, 816), 3);
    add_background_object(create_tblongrailing2_2689(6008, 864), 3);
    add_background_object(create_fdhangarfloor11_3404(3936, 512), 3);
    add_background_object(create_fdhangarfloor1_3396(768, 1408), 3);
    add_background_object(create_fdhangarwall2_3393(2528, 816), 3);
    add_background_object(create_tblongrailing2_2689(3816, 992), 3);
    add_background_object(create_fdhangarwall1_3392(0, 352), 3);
    add_background_object(create_fdhangarfloor1_3396(128, 704), 3);
    add_background_object(create_fdhangarfloor2_3397(256, 704), 3);
    add_background_object(create_fdhangarfloor5_3398(-160, 1760), 3);
    add_background_object(create_fdhangarfloor7_3399(-352, 1760), 3);
    add_background_object(create_fdhangarfloor6_3400(-304, 1760), 3);
    add_background_object(create_fdhangarfloor1_3396(0, 704), 3);
    add_background_object(create_fdhangarfloor4_3390(-160, 1616), 3);
    add_background_object(create_fdhangarfloor8_3394(-352, 1616), 3);
    add_background_object(create_fdhangarfloor6_3400(-240, 1760), 3);
    add_background_object(create_fdhangarfloor1_3396(-304, 1568), 3);
    add_background_object(create_fdhangarfloor2_3397(-160, 1568), 3);
    add_background_object(create_fdhangarfloor3_3401(-352, 1568), 3);
    add_background_object(create_fdhangarwall1_3392(0, 736), 3);
    add_background_object(create_fdhangarfloor9_3402(-160, 1808), 3);
    add_background_object(create_fdhangarfloor10_3403(-352, 1808), 3);
    add_background_object(create_fdhangarwall1_3392(128, 736), 3);
    add_background_object(create_fdhangarwall1_3392(128, 864), 3);
    add_background_object(create_fdhangarwall1_3392(0, 864), 3);
    add_background_object(create_fdhangarfloor1_3396(128, 448), 3);
    add_background_object(create_fdhangarfloor2_3397(256, 448), 3);
    add_background_object(create_fdhangarfloor1_3396(0, 448), 3);
    add_background_object(create_fdhangarfloor5_3398(256, 480), 3);
    add_background_object(create_fdhangarfloor6_3400(128, 480), 3);
    add_background_object(create_fdhangarfloor6_3400(192, 480), 3);
    add_background_object(create_fdhangarfloor6_3400(0, 480), 3);
    add_background_object(create_fdhangarfloor6_3400(64, 480), 3);
    add_background_object(create_fdhangarfloor4_3390(256, 736), 3);
    add_background_object(create_fdhangarwall1_3392(128, 992), 3);
    add_background_object(create_fdhangarwall1_3392(128, 1120), 3);
    add_background_object(create_fdhangarwall1_3392(0, 992), 3);
    add_background_object(create_fdhangarwall1_3392(0, 1120), 3);
    add_background_object(create_fdhangarwall1_3392(-304, 1616), 3);
    add_background_object(create_fdhangarfloor11_3404(-272, 1528), 3);
    add_background_object(create_fdhangarwall1_3392(1024, -32), 3);
    add_background_object(create_fdhangarwall1_3392(1152, -32), 3);
    add_background_object(create_fdhangarwall1_3392(768, -32), 3);
    add_background_object(create_fdhangarwall1_3392(896, -32), 3);
    add_background_object(create_fdhangarwall1_3392(512, -32), 3);
    add_background_object(create_fdhangarwall1_3392(640, -32), 3);
    add_background_object(create_fdhangarwall1_3392(256, -32), 3);
    add_background_object(create_fdhangarwall1_3392(384, -32), 3);
    add_background_object(create_fdhangarwall1_3392(0, -32), 3);
    add_background_object(create_fdhangarwall1_3392(128, -32), 3);
    add_background_object(create_fdhangarfloor6_3400(1216, 96), 3);
    add_background_object(create_fdhangarfloor6_3400(1088, 96), 3);
    add_background_object(create_fdhangarfloor6_3400(1024, 96), 3);
    add_background_object(create_fdhangarfloor6_3400(960, 96), 3);
    add_background_object(create_fdhangarfloor6_3400(896, 96), 3);
    add_background_object(create_fdhangarfloor6_3400(832, 96), 3);
    add_background_object(create_fdhangarfloor6_3400(768, 96), 3);
    add_background_object(create_fdhangarfloor6_3400(704, 96), 3);
    add_background_object(create_fdhangarfloor6_3400(640, 96), 3);
    add_background_object(create_fdhangarfloor6_3400(576, 96), 3);
    add_background_object(create_fdhangarfloor6_3400(512, 96), 3);
    add_background_object(create_fdhangarfloor6_3400(448, 96), 3);
    add_background_object(create_fdhangarfloor6_3400(384, 96), 3);
    add_background_object(create_fdhangarfloor6_3400(320, 96), 3);
    add_background_object(create_fdhangarfloor6_3400(256, 96), 3);
    add_background_object(create_fdhangarfloor6_3400(192, 96), 3);
    add_background_object(create_fdhangarfloor6_3400(128, 96), 3);
    add_background_object(create_fdhangarwall1_3392(0, 96), 3);
    add_background_object(create_fdhangarwall1_3392(0, 224), 3);
    add_background_object(create_fdhangarfloor6_3400(64, 96), 3);
    add_background_object(create_fdhangarfloor6_3400(0, 96), 3);
    add_background_object(create_fdhangarfloor4_3390(128, 288), 3);
    add_background_object(create_fdhangarfloor4_3390(128, 224), 3);
    add_background_object(create_fdhangarfloor4_3390(128, 160), 3);
    add_background_object(create_fdhangarfloor2_3397(128, 128), 3);
    add_background_object(create_fdhangarfloor1_3396(0, 128), 3);
    add_background_object(create_fdhangarfloor4_3390(128, 352), 3);
    add_background_object(create_fdhangarfloor9_3402(128, 416), 3);
    add_background_object(create_fdhangarfloor6_3400(64, 416), 3);
    add_background_object(create_fdhangarfloor6_3400(0, 416), 3);
    add_background_object(create_fdhangarwall2_3393(-560, 1600), 3);
    add_background_object(create_fdhangarwall3_3389(-432, 1536), 3);
    add_background_object(create_fdspiralsparktower_3405(4768, 736), 3);
    add_background_object(create_fdspiralsparktower_3405(4768, 768), 3);
    add_background_object(create_fddownhillplatformrail_3409(288, 704), 3);
    add_background_object(create_fddownhillplatformrail_3409(352, 736), 3);
    add_background_object(create_fddownhillplatformrail_3409(416, 768), 3);
    add_background_object(create_fddownhillplatformrail_3409(480, 800), 3);
    add_background_object(create_fddownhillplatformrail_3409(544, 832), 3);
    add_background_object(create_fddownhillplatformrail_3409(608, 864), 3);
    add_background_object(create_fdhangarfloor3_3401(864, 896), 3);
    add_background_object(create_fdhangarfloor8_3394(864, 992), 3);
    add_background_object(create_fdhangarfloor8_3394(864, 1056), 3);
    add_background_object(create_fdback1_3383(-544, 1704), 3);
    add_background_object(create_fdback2_3382(-480, 1664), 3);
    add_background_object(create_fdhangarfloor13_3408(-600, 1704), 3);
    add_background_object(create_fdhangarwall4_3395(-440, 1688), 3);
    add_background_object(create_fdhangarwall5_3391(-608, 1720), 3);
    add_background_object(create_sbrotorbladetunnel_2178(-464, 1760), 3);
    add_background_object(create_fdhangarfloor4_3390(256, 800), 3);
    add_background_object(create_fdhangarfloor4_3390(256, 864), 3);
    add_background_object(create_fdhangarfloor4_3390(256, 928), 3);
    add_background_object(create_fdhangarfloor4_3390(256, 992), 3);
    add_background_object(create_fdhangarfloor4_3390(256, 1056), 3);
    add_background_object(create_fdhangarwall1_3392(256, 1120), 3);
    add_background_object(create_fdhangarwall1_3392(768, 1120), 3);
    add_background_object(create_fdhangarfloor1_3396(768, 1088), 3);
    add_background_object(create_fdhangarfloor1_3396(256, 1088), 3);
    add_background_object(create_fddownhillplatformrail_3409(672, 896), 3);
    add_background_object(create_fddownhillplatformrail_3409(736, 928), 3);
    add_background_object(create_fddownhillplatformrail_3409(800, 960), 3);
    add_background_object(create_fdhangarfloor8_3394(864, 928), 3);
    add_background_object(create_fdhangarfloor1_3396(896, 896), 3);
    add_background_object(create_fdhangarwall1_3392(896, 928), 3);
    add_background_object(create_fdhangarwall1_3392(896, 1120), 3);
    add_background_object(create_fdhangarwall2_3393(896, 1056), 3);
    add_background_object(create_fdhangarfloor1_3396(1024, 896), 3);
    add_background_object(create_fdhangarwall1_3392(1024, 992), 3);
    add_background_object(create_fdhangarwall1_3392(1024, 1120), 3);
    add_background_object(create_fdhangarwall2_3393(1024, 928), 3);
    add_background_object(create_fdhangarfloor2_3397(1152, 896), 3);
    add_background_object(create_fdhangarfloor4_3390(1152, 928), 3);
    add_background_object(create_fdhangarfloor4_3390(1152, 992), 3);
    add_background_object(create_fdhangarfloor4_3390(1152, 1056), 3);
    add_background_object(create_fdhangarfloor4_3390(1152, 1120), 3);
    add_background_object(create_fdhangarfloor4_3390(1152, 1184), 3);
    add_background_object(create_fdhangarwall1_3392(896, 1440), 3);
    add_background_object(create_fdhangarwall1_3392(1024, 1504), 3);
    add_background_object(create_fdhangarfloor4_3390(1152, 1504), 3);
    add_background_object(create_fdhangarfloor4_3390(1152, 1568), 3);
    add_background_object(create_fdhangarwall2_3393(1024, 1440), 3);
    add_background_object(create_fdhangarwall2_3393(896, 1568), 3);
    add_background_object(create_fdhangarfloor4_3390(1152, 1440), 3);
    add_background_object(create_fdhangarfloor1_3396(896, 1408), 3);
    add_background_object(create_fdhangarfloor2_3397(1152, 1408), 3);
    add_background_object(create_fdhangarfloor5_3398(1152, 1248), 3);
    add_background_object(create_fdhangarfloor6_3400(1088, 1248), 3);
    add_background_object(create_fdhangarfloor6_3400(1024, 1248), 3);
    add_background_object(create_fdhangarfloor6_3400(960, 1248), 3);
    add_background_object(create_fdhangarfloor6_3400(896, 1248), 3);
    add_background_object(create_fdhangarwall1_3392(640, 1440), 3);
    add_background_object(create_fdhangarwall1_3392(768, 1504), 3);
    add_background_object(create_fdhangarwall2_3393(768, 1440), 3);
    add_background_object(create_fdhangarwall2_3393(640, 1568), 3);
    add_background_object(create_fdhangarfloor6_3400(832, 1248), 3);
    add_background_object(create_fdhangarfloor6_3400(768, 1248), 3);
    add_background_object(create_fdhangarfloor3_3401(1376, 896), 3);
    add_background_object(create_fdhangarfloor8_3394(1376, 992), 3);
    add_background_object(create_fdhangarfloor8_3394(1376, 1056), 3);
    add_background_object(create_fdhangarfloor8_3394(1376, 928), 3);
    add_background_object(create_fdhangarfloor1_3396(1408, 896), 3);
    add_background_object(create_fdhangarwall1_3392(1408, 992), 3);
    add_background_object(create_fdhangarwall2_3393(1408, 928), 3);
    add_background_object(create_tblongrailing2_2689(1144, 1280), 3);
    add_background_object(create_tblongrailing3_2690(1408, 1280), 3);
    add_background_object(create_tblongrailing_2707(1152, 1328), 3);
    add_background_object(create_tblongrailing_2707(1216, 1328), 3);
    add_background_object(create_tblongrailing_2707(1280, 1328), 3);
    add_background_object(create_tblongrailing_2707(1344, 1328), 3);
    add_background_object(create_fdhangarfloor8_3394(1376, 1120), 3);
    add_background_object(create_fdhangarfloor8_3394(1376, 1152), 3);
    add_background_object(create_fdhangarwall1_3392(1408, 1120), 3);
    add_background_object(create_fdhangarfloor7_3399(1376, 1216), 3);
    add_background_object(create_fdhangarfloor6_3400(1472, 1216), 3);
    add_background_object(create_fdhangarfloor6_3400(1408, 1216), 3);
    add_background_object(create_fdhangarfloor3_3401(1376, 1408), 3);
    add_background_object(create_fdhangarfloor8_3394(1376, 1504), 3);
    add_background_object(create_fdhangarfloor8_3394(1376, 1568), 3);
    add_background_object(create_fdhangarfloor8_3394(1376, 1440), 3);
    add_background_object(create_fdhangarwall1_3392(1408, 1504), 3);
    add_background_object(create_fdhangarwall2_3393(1408, 1440), 3);
    add_background_object(create_fdhangarfloor2_3397(1536, 896), 3);
    add_background_object(create_fdhangarfloor4_3390(1536, 928), 3);
    add_background_object(create_fdhangarfloor4_3390(1536, 992), 3);
    add_background_object(create_fdhangarfloor4_3390(1536, 1056), 3);
    add_background_object(create_fdhangarfloor4_3390(1536, 1120), 3);
    add_background_object(create_fdhangarfloor4_3390(1536, 1152), 3);
    add_background_object(create_fdhangarfloor4_3390(1536, 1504), 3);
    add_background_object(create_fdhangarfloor4_3390(1536, 1568), 3);
    add_background_object(create_fdhangarfloor4_3390(1536, 1440), 3);
    add_background_object(create_fdhangarfloor2_3397(1536, 1408), 3);
    add_background_object(create_fdhangarfloor5_3398(1536, 1216), 3);
    add_background_object(create_fdhangarfloor3_3401(1760, 896), 3);
    add_background_object(create_fdhangarfloor8_3394(1760, 992), 3);
    add_background_object(create_fdhangarfloor8_3394(1760, 1056), 3);
    add_background_object(create_fdhangarfloor8_3394(1760, 928), 3);
    add_background_object(create_fdhangarfloor1_3396(1792, 896), 3);
    add_background_object(create_fdhangarwall1_3392(1792, 992), 3);
    add_background_object(create_tblongrailing2_2689(1528, 1280), 3);
    add_background_object(create_tblongrailing3_2690(1792, 1280), 3);
    add_background_object(create_tblongrailing_2707(1536, 1328), 3);
    add_background_object(create_tblongrailing_2707(1600, 1328), 3);
    add_background_object(create_tblongrailing_2707(1664, 1328), 3);
    add_background_object(create_tblongrailing_2707(1728, 1328), 3);
    add_background_object(create_fdhangarfloor8_3394(1760, 1120), 3);
    add_background_object(create_fdhangarfloor8_3394(1760, 1184), 3);
    add_background_object(create_fdhangarwall1_3392(1792, 1120), 3);
    add_background_object(create_fdhangarfloor7_3399(1760, 1248), 3);
    add_background_object(create_fdhangarfloor6_3400(1856, 1248), 3);
    add_background_object(create_fdhangarfloor6_3400(1792, 1248), 3);
    add_background_object(create_fdhangarfloor3_3401(1760, 1408), 3);
    add_background_object(create_fdhangarfloor8_3394(1760, 1504), 3);
    add_background_object(create_fdhangarfloor8_3394(1760, 1568), 3);
    add_background_object(create_fdhangarfloor8_3394(1760, 1440), 3);
    add_background_object(create_fdhangarfloor1_3396(1792, 1408), 3);
    add_background_object(create_fdhangarwall1_3392(1792, 1504), 3);
    add_background_object(create_fdhangarwall2_3393(1792, 1440), 3);
    add_background_object(create_fdhangarwall2_3393(1792, 928), 3);
    add_background_object(create_fdhangarwall1_3392(1920, 800), 3);
    add_background_object(create_fdhangarwall1_3392(1920, 672), 3);
    add_background_object(create_fdhangarwall1_3392(1920, 544), 3);
    add_background_object(create_fdhangarwall1_3392(1792, 544), 3);
    add_background_object(create_fdhangarwall1_3392(1664, 544), 3);
    add_background_object(create_fdhangarwall1_3392(1536, 544), 3);
    add_background_object(create_fdhangarfloor8_3394(1888, 768), 3);
    add_background_object(create_fdhangarfloor8_3394(1888, 832), 3);
    add_background_object(create_fdhangarfloor8_3394(1888, 704), 3);
    add_background_object(create_fdhangarfloor6_3400(1600, 672), 3);
    add_background_object(create_fdhangarfloor6_3400(1536, 672), 3);
    add_background_object(create_fdhangarfloor6_3400(1728, 672), 3);
    add_background_object(create_fdhangarfloor6_3400(1664, 672), 3);
    add_background_object(create_fdhangarfloor6_3400(1856, 672), 3);
    add_background_object(create_fdhangarfloor6_3400(1792, 672), 3);
    add_background_object(create_fdhangarfloor2_3397(1888, 672), 3);
    add_background_object(create_fdhangarwall1_3392(1408, 544), 3);
    add_background_object(create_fdhangarwall1_3392(1280, 544), 3);
    add_background_object(create_fdhangarfloor6_3400(1344, 672), 3);
    add_background_object(create_fdhangarfloor6_3400(1280, 672), 3);
    add_background_object(create_fdhangarfloor6_3400(1472, 672), 3);
    add_background_object(create_fdhangarfloor6_3400(1408, 672), 3);
    add_background_object(create_fdhangarwall1_3392(1152, 544), 3);
    add_background_object(create_fdhangarwall1_3392(1024, 544), 3);
    add_background_object(create_fdhangarfloor6_3400(1088, 672), 3);
    add_background_object(create_fdhangarfloor6_3400(1024, 672), 3);
    add_background_object(create_fdhangarfloor6_3400(1216, 672), 3);
    add_background_object(create_fdhangarfloor6_3400(1152, 672), 3);
    add_background_object(create_fdhangarfloor8_3394(992, 544), 3);
    add_background_object(create_fdhangarfloor8_3394(992, 608), 3);
    add_background_object(create_fdhangarfloor7_3399(992, 672), 3);
    add_background_object(create_fdhangarfloor6_3400(1984, 1248), 3);
    add_background_object(create_fdhangarfloor6_3400(1920, 1248), 3);
    add_background_object(create_fdhangarfloor1_3396(2048, 1408), 3);
    add_background_object(create_fdhangarwall1_3392(2048, 1504), 3);
    add_background_object(create_fdhangarwall2_3393(2048, 1440), 3);
    add_background_object(create_fdhangarfloor4_3390(2176, 1504), 3);
    add_background_object(create_fdhangarfloor4_3390(2176, 1568), 3);
    add_background_object(create_fdhangarfloor4_3390(2176, 1440), 3);
    add_background_object(create_fdhangarfloor2_3397(2176, 1408), 3);
    add_background_object(create_fdhangarfloor4_3390(2048, 1184), 3);
    add_background_object(create_fdhangarfloor5_3398(2048, 1248), 3);
    add_background_object(create_fdhangarfloor4_3390(2048, 864), 3);
    add_background_object(create_fdhangarfloor4_3390(2048, 928), 3);
    add_background_object(create_fdhangarfloor4_3390(2048, 992), 3);
    add_background_object(create_fdhangarfloor1_3396(1920, 1408), 3);
    add_background_object(create_fdhangarwall1_3392(1920, 1440), 3);
    add_background_object(create_fdhangarwall2_3393(1920, 1568), 3);
    add_background_object(create_fdhangarfloor3_3401(2080, 992), 3);
    add_background_object(create_fdhangarfloor11_3404(2112, 992), 3);
    add_background_object(create_fdhangarfloor2_3397(2176, 992), 3);
    add_background_object(create_fdhangarfloor10_3403(2080, 1024), 3);
    add_background_object(create_fdhangarfloor6_3400(2112, 1024), 3);
    add_background_object(create_fdhangarfloor5_3398(2176, 1024), 3);
    add_background_object(create_fdhangarfloor3_3401(2400, 1408), 3);
    add_background_object(create_fdhangarfloor8_3394(2400, 1504), 3);
    add_background_object(create_fdhangarfloor8_3394(2400, 1568), 3);
    add_background_object(create_fdhangarfloor8_3394(2400, 1440), 3);
    add_background_object(create_fdhangarwall1_3392(2432, 1504), 3);
    add_background_object(create_fdhangarwall2_3393(2432, 1440), 3);
    add_background_object(create_fdhangarfloor1_3396(2720, 1408), 3);
    add_background_object(create_fdhangarwall1_3392(2560, 1440), 3);
    add_background_object(create_fdhangarwall2_3393(2688, 1440), 3);
    add_background_object(create_fdladder_3448(2088, 1152), 3);
    add_background_object(create_fdladder_3448(2088, 1216), 3);
    add_background_object(create_fdladder_3448(2088, 1248), 3);
    add_background_object(create_fdladder_3448(2088, 1184), 3);
    add_background_object(create_fdhangarfloor2_3397(2720, 1216), 3);
    add_background_object(create_fdhangarfloor5_3398(2720, 1248), 3);
    add_background_object(create_fdhangarfloor1_3396(2464, 1216), 3);
    add_background_object(create_fdhangarfloor6_3400(2528, 1248), 3);
    add_background_object(create_fdhangarfloor6_3400(2464, 1248), 3);
    add_background_object(create_fdhangarfloor3_3401(2432, 1216), 3);
    add_background_object(create_fdhangarfloor7_3399(2432, 1248), 3);
    add_background_object(create_fdhangarwall1_3392(2048, 736), 3);
    add_background_object(create_fdhangarwall1_3392(2048, 608), 3);
    add_background_object(create_fdhangarfloor6_3400(2048, 864), 3);
    add_background_object(create_fdhangarfloor6_3400(2112, 864), 3);
    add_background_object(create_fdhangarfloor3_3401(2048, 864), 3);
    add_background_object(create_fdhangarfloor5_3398(2176, 864), 3);
    add_background_object(create_fdhangarfloor4_3390(2176, 736), 3);
    add_background_object(create_fdhangarfloor4_3390(2176, 800), 3);
    add_background_object(create_fdhangarfloor4_3390(2176, 672), 3);
    add_background_object(create_fdhangarfloor8_3394(1376, 1632), 3);
    add_background_object(create_fdhangarfloor8_3394(1376, 1696), 3);
    add_background_object(create_fdhangarwall1_3392(1408, 1632), 3);
    add_background_object(create_fdhangarfloor4_3390(1536, 1632), 3);
    add_background_object(create_fdhangarfloor4_3390(1536, 1696), 3);
    add_background_object(create_fdhangarfloor8_3394(1376, 1760), 3);
    add_background_object(create_fdhangarfloor8_3394(1376, 1824), 3);
    add_background_object(create_fdhangarwall1_3392(1408, 1760), 3);
    add_background_object(create_fdhangarfloor4_3390(1536, 1760), 3);
    add_background_object(create_fdhangarfloor4_3390(1536, 1824), 3);
    add_background_object(create_fdhangarfloor8_3394(1376, 1888), 3);
    add_background_object(create_fdhangarfloor8_3394(1376, 1952), 3);
    add_background_object(create_fdhangarwall1_3392(1408, 1888), 3);
    add_background_object(create_fdhangarfloor4_3390(1536, 1888), 3);
    add_background_object(create_fdhangarfloor4_3390(1536, 1952), 3);
    add_background_object(create_fdhangarfloor8_3394(1376, 2016), 3);
    add_background_object(create_fdhangarfloor8_3394(1376, 2080), 3);
    add_background_object(create_fdhangarwall1_3392(1408, 2016), 3);
    add_background_object(create_fdhangarfloor4_3390(1536, 2016), 3);
    add_background_object(create_fdhangarfloor4_3390(1536, 2080), 3);
    add_background_object(create_fdhangarfloor8_3394(1376, 2144), 3);
    add_background_object(create_fdhangarfloor8_3394(1376, 2208), 3);
    add_background_object(create_fdhangarwall1_3392(1408, 2144), 3);
    add_background_object(create_fdhangarfloor4_3390(1536, 2144), 3);
    add_background_object(create_fdhangarfloor4_3390(1536, 2208), 3);
    add_background_object(create_fdhangarfloor8_3394(1376, 2272), 3);
    add_background_object(create_fdhangarfloor8_3394(1376, 2336), 3);
    add_background_object(create_fdhangarwall1_3392(1408, 2272), 3);
    add_background_object(create_fdhangarfloor4_3390(1536, 2272), 3);
    add_background_object(create_fdhangarfloor4_3390(1536, 2336), 3);
    add_background_object(create_fdhangarwall1_3392(1024, 1632), 3);
    add_background_object(create_fdhangarfloor4_3390(1152, 1632), 3);
    add_background_object(create_fdhangarfloor4_3390(1152, 1696), 3);
    add_background_object(create_fdhangarwall1_3392(896, 1632), 3);
    add_background_object(create_fdhangarwall1_3392(1024, 1760), 3);
    add_background_object(create_fdhangarfloor4_3390(1152, 1760), 3);
    add_background_object(create_fdhangarfloor4_3390(1152, 1824), 3);
    add_background_object(create_fdhangarwall1_3392(896, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(1024, 1888), 3);
    add_background_object(create_fdhangarfloor4_3390(1152, 1888), 3);
    add_background_object(create_fdhangarfloor4_3390(1152, 1952), 3);
    add_background_object(create_fdhangarwall1_3392(896, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(1024, 2016), 3);
    add_background_object(create_fdhangarfloor4_3390(1152, 2016), 3);
    add_background_object(create_fdhangarfloor4_3390(1152, 2080), 3);
    add_background_object(create_fdhangarwall1_3392(896, 2016), 3);
    add_background_object(create_fdhangarwall1_3392(1024, 2144), 3);
    add_background_object(create_fdhangarfloor4_3390(1152, 2144), 3);
    add_background_object(create_fdhangarfloor4_3390(1152, 2208), 3);
    add_background_object(create_fdhangarwall1_3392(896, 2144), 3);
    add_background_object(create_fdhangarwall1_3392(1024, 2272), 3);
    add_background_object(create_fdhangarfloor4_3390(1152, 2272), 3);
    add_background_object(create_fdhangarfloor4_3390(1152, 2336), 3);
    add_background_object(create_fdhangarwall1_3392(896, 2272), 3);
    add_background_object(create_fdhangarfloor8_3394(1760, 1632), 3);
    add_background_object(create_fdhangarfloor8_3394(1760, 1696), 3);
    add_background_object(create_fdhangarwall1_3392(1792, 1632), 3);
    add_background_object(create_fdhangarwall1_3392(1920, 1632), 3);
    add_background_object(create_fdhangarwall1_3392(2048, 1632), 3);
    add_background_object(create_fdhangarfloor4_3390(2176, 1632), 3);
    add_background_object(create_fdhangarfloor4_3390(2176, 1696), 3);
    add_background_object(create_fdhangarfloor8_3394(1760, 1760), 3);
    add_background_object(create_fdhangarfloor8_3394(1760, 1824), 3);
    add_background_object(create_fdhangarwall1_3392(1792, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(1920, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(2048, 1760), 3);
    add_background_object(create_fdhangarfloor4_3390(2176, 1760), 3);
    add_background_object(create_fdhangarfloor4_3390(2176, 1824), 3);
    add_background_object(create_fdhangarfloor8_3394(1760, 1888), 3);
    add_background_object(create_fdhangarfloor8_3394(1760, 1952), 3);
    add_background_object(create_fdhangarwall1_3392(1792, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(1920, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(2048, 1888), 3);
    add_background_object(create_fdhangarfloor4_3390(2176, 1888), 3);
    add_background_object(create_fdhangarfloor4_3390(2176, 1952), 3);
    add_background_object(create_fdhangarfloor8_3394(1760, 2016), 3);
    add_background_object(create_fdhangarfloor8_3394(1760, 2080), 3);
    add_background_object(create_fdhangarwall1_3392(1792, 2016), 3);
    add_background_object(create_fdhangarwall1_3392(1920, 2016), 3);
    add_background_object(create_fdhangarwall1_3392(2048, 2016), 3);
    add_background_object(create_fdhangarfloor4_3390(2176, 2016), 3);
    add_background_object(create_fdhangarfloor4_3390(2176, 2080), 3);
    add_background_object(create_fdhangarfloor8_3394(1760, 2144), 3);
    add_background_object(create_fdhangarfloor8_3394(1760, 2208), 3);
    add_background_object(create_fdhangarwall1_3392(1792, 2144), 3);
    add_background_object(create_fdhangarwall1_3392(1920, 2144), 3);
    add_background_object(create_fdhangarwall1_3392(2048, 2144), 3);
    add_background_object(create_fdhangarfloor4_3390(2176, 2144), 3);
    add_background_object(create_fdhangarfloor4_3390(2176, 2208), 3);
    add_background_object(create_fdhangarfloor8_3394(1760, 2272), 3);
    add_background_object(create_fdhangarfloor8_3394(1760, 2336), 3);
    add_background_object(create_fdhangarwall1_3392(1792, 2272), 3);
    add_background_object(create_fdhangarwall1_3392(1920, 2272), 3);
    add_background_object(create_fdhangarwall1_3392(2048, 2272), 3);
    add_background_object(create_fdhangarfloor4_3390(2176, 2272), 3);
    add_background_object(create_fdhangarfloor4_3390(2176, 2336), 3);
    add_background_object(create_fdhangarfloor3_3401(2144, 1152), 3);
    add_background_object(create_fdhangarfloor2_3397(2176, 1152), 3);
    add_background_object(create_fdhangarfloor10_3403(2144, 1376), 3);
    add_background_object(create_fdhangarfloor9_3402(2176, 1376), 3);
    add_background_object(create_fdhangarfloor4_3390(2176, 1312), 3);
    add_background_object(create_fdhangarfloor8_3394(2144, 1312), 3);
    add_background_object(create_fdhangarfloor4_3390(2176, 1184), 3);
    add_background_object(create_fdhangarfloor8_3394(2144, 1184), 3);
    add_background_object(create_fdhangarfloor4_3390(2176, 1248), 3);
    add_background_object(create_fdhangarfloor8_3394(2144, 1248), 3);
    add_background_object(create_fdladder_3448(2088, 1280), 3);
    add_background_object(create_fdladder_3448(2088, 1312), 3);
    add_background_object(create_fdhangarwall1_3392(2560, 1632), 3);
    add_background_object(create_fdhangarfloor8_3394(2400, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(2560, 1760), 3);
    add_background_object(create_fdhangarfloor8_3394(2400, 1952), 3);
    add_background_object(create_fdhangarwall1_3392(2432, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(2560, 1888), 3);
    add_background_object(create_fdhangarfloor8_3394(2400, 2016), 3);
    add_background_object(create_fdhangarfloor8_3394(2400, 2080), 3);
    add_background_object(create_fdhangarwall1_3392(2432, 2016), 3);
    add_background_object(create_fdhangarwall1_3392(2560, 2016), 3);
    add_background_object(create_fdhangarfloor8_3394(2400, 2144), 3);
    add_background_object(create_fdhangarfloor8_3394(2400, 2208), 3);
    add_background_object(create_fdhangarwall1_3392(2432, 2144), 3);
    add_background_object(create_fdhangarwall1_3392(2560, 2144), 3);
    add_background_object(create_fdhangarfloor8_3394(2400, 2272), 3);
    add_background_object(create_fdhangarfloor8_3394(2400, 2336), 3);
    add_background_object(create_fdhangarwall1_3392(2432, 2272), 3);
    add_background_object(create_fdhangarwall1_3392(2560, 2272), 3);
    add_background_object(create_fdhangarwall2_3393(1920, 1184), 3);
    add_background_object(create_fdhangarwall1_3392(1920, 928), 3);
    add_background_object(create_fdhangarfloor2_3397(2048, 1152), 3);
    add_background_object(create_fdhangarwall3_3389(1920, 1056), 3);
    add_background_object(create_fdhangarfloor11_3404(1984, 1152), 3);
    add_background_object(create_fdhangarfloor6_3400(1984, 1056), 3);
    add_background_object(create_fdhangarfloor5_3398(2048, 1056), 3);
    add_background_object(create_fdhangarfloor4_3390(1984, 1088), 3);
    add_background_object(create_fdhangarfloor3_3401(1984, 1056), 3);
    add_background_object(create_fdhangarfloor2_3397(2784, 1024), 3);
    add_background_object(create_fdhangarfloor5_3398(2784, 1056), 3);
    add_background_object(create_fdhangarfloor1_3396(2528, 1024), 3);
    add_background_object(create_fdhangarfloor6_3400(2720, 1056), 3);
    add_background_object(create_fdhangarfloor6_3400(2528, 1056), 3);
    add_background_object(create_fdhangarfloor3_3401(2496, 1024), 3);
    add_background_object(create_fdhangarfloor7_3399(2496, 1056), 3);
    add_background_object(create_fdhangarfloor3_3401(3040, 1280), 3);
    add_background_object(create_fdhangarfloor8_3394(3040, 1504), 3);
    add_background_object(create_fdhangarfloor8_3394(3040, 1568), 3);
    add_background_object(create_fdhangarfloor1_3396(3072, 1280), 3);
    add_background_object(create_fdhangarwall1_3392(3072, 1504), 3);
    add_background_object(create_fdhangarfloor8_3394(3040, 1632), 3);
    add_background_object(create_fdhangarfloor8_3394(3040, 1696), 3);
    add_background_object(create_fdhangarwall1_3392(3072, 1632), 3);
    add_background_object(create_fdhangarfloor8_3394(3040, 1440), 3);
    add_background_object(create_fdhangarwall2_3393(3072, 1440), 3);
    add_background_object(create_fdhangarfloor4_3390(2816, 1504), 3);
    add_background_object(create_fdhangarfloor4_3390(2816, 1568), 3);
    add_background_object(create_fdhangarfloor2_3397(2816, 1408), 3);
    add_background_object(create_fdhangarfloor4_3390(2816, 1632), 3);
    add_background_object(create_fdhangarfloor4_3390(2816, 1696), 3);
    add_background_object(create_fdhangarfloor4_3390(2816, 1440), 3);
    add_background_object(create_fdhangarfloor8_3394(3040, 1760), 3);
    add_background_object(create_fdhangarfloor8_3394(3040, 1824), 3);
    add_background_object(create_fdhangarwall1_3392(3072, 1760), 3);
    add_background_object(create_fdhangarfloor8_3394(3040, 1888), 3);
    add_background_object(create_fdhangarfloor8_3394(3040, 1952), 3);
    add_background_object(create_fdhangarwall1_3392(3072, 1888), 3);
    add_background_object(create_fdhangarfloor4_3390(2816, 1760), 3);
    add_background_object(create_fdhangarfloor4_3390(2816, 1824), 3);
    add_background_object(create_fdhangarfloor4_3390(2816, 1888), 3);
    add_background_object(create_fdhangarfloor4_3390(2816, 1952), 3);
    add_background_object(create_fdhangarfloor8_3394(3040, 2016), 3);
    add_background_object(create_fdhangarfloor8_3394(3040, 2080), 3);
    add_background_object(create_fdhangarwall1_3392(3072, 2016), 3);
    add_background_object(create_fdhangarfloor8_3394(3040, 2144), 3);
    add_background_object(create_fdhangarfloor8_3394(3040, 2208), 3);
    add_background_object(create_fdhangarwall1_3392(3072, 2144), 3);
    add_background_object(create_fdhangarfloor4_3390(2816, 2016), 3);
    add_background_object(create_fdhangarfloor4_3390(2816, 2080), 3);
    add_background_object(create_fdhangarfloor4_3390(2816, 2144), 3);
    add_background_object(create_fdhangarfloor4_3390(2816, 2208), 3);
    add_background_object(create_fdhangarfloor8_3394(3040, 2272), 3);
    add_background_object(create_fdhangarfloor8_3394(3040, 2336), 3);
    add_background_object(create_fdhangarwall1_3392(3072, 2272), 3);
    add_background_object(create_fdhangarfloor4_3390(2816, 2272), 3);
    add_background_object(create_fdhangarfloor4_3390(2816, 2336), 3);
    add_background_object(create_fdhangarwall1_3392(3200, 1312), 3);
    add_background_object(create_fdhangarwall1_3392(3200, 1632), 3);
    add_background_object(create_fdhangarwall1_3392(3200, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(3200, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(3200, 2016), 3);
    add_background_object(create_fdhangarwall1_3392(3200, 2144), 3);
    add_background_object(create_fdhangarwall1_3392(3200, 2272), 3);
    add_background_object(create_fdhangarfloor1_3396(3200, 1280), 3);
    add_background_object(create_fdhangarwall1_3392(3072, 1312), 3);
    add_background_object(create_fdhangarfloor8_3394(3040, 1376), 3);
    add_background_object(create_fdhangarfloor8_3394(3040, 1312), 3);
    add_background_object(create_fdhangarfloor11_3404(2432, 1408), 3);
    add_background_object(create_fdhangarfloor3_3401(2560, 1408), 3);
    add_background_object(create_fdhangarfloor2_3397(2464, 1408), 3);
    add_background_object(create_fdhangarfloor11_3404(2496, 1408), 3);
    add_background_object(create_fdhangarwall4_3395(3328, 1312), 3);
    add_background_object(create_fdhangarwall4_3395(3456, 1440), 3);
    add_background_object(create_fdhangarwall1_3392(3328, 1440), 3);
    add_background_object(create_fdhangarwall1_3392(3328, 1568), 3);
    add_background_object(create_fdhangarwall1_3392(3456, 1632), 3);
    add_background_object(create_fdhangarwall1_3392(3584, 1568), 3);
    add_background_object(create_fdhangarwall1_3392(3712, 1632), 3);
    add_background_object(create_fdhangarwall1_3392(3840, 1568), 3);
    add_background_object(create_fdhangarfloor12_3407(3328, 1280), 3);
    add_background_object(create_fdhangarfloor12_3407(3392, 1344), 3);
    add_background_object(create_fdhangarfloor12_3407(3456, 1408), 3);
    add_background_object(create_fdhangarfloor12_3407(3520, 1472), 3);
    add_background_object(create_fdhangarfloor1_3396(3584, 1536), 3);
    add_background_object(create_fdhangarfloor1_3396(3712, 1536), 3);
    add_background_object(create_fdhangarfloor1_3396(3840, 1536), 3);
    add_background_object(create_fdhangarwall2_3393(3456, 1568), 3);
    add_background_object(create_fdhangarwall2_3393(3712, 1568), 3);
    add_background_object(create_fdhangarwall2_3393(3328, 1696), 3);
    add_background_object(create_fdhangarwall2_3393(3584, 1696), 3);
    add_background_object(create_fdhangarwall2_3393(3200, 1440), 3);
    add_background_object(create_fdhangarwall2_3393(3840, 1696), 3);
    add_background_object(create_fdhangarfloor1_3396(2432, 1888), 3);
    add_background_object(create_fdhangarfloor3_3401(2400, 1888), 3);
    add_background_object(create_fdhangarfloor6_3400(2496, 1600), 3);
    add_background_object(create_fdhangarfloor6_3400(2432, 1600), 3);
    add_background_object(create_fdhangarfloor8_3394(2560, 1760), 3);
    add_background_object(create_fdhangarfloor2_3397(2560, 1600), 3);
    add_background_object(create_fdhangarfloor10_3403(2400, 1600), 3);
    add_background_object(create_fdhangarfloor8_3394(2560, 1824), 3);
    add_background_object(create_fdhangarfloor5_3398(2560, 1888), 3);
    add_background_object(create_fdhangarfloor3_3401(1504, 1408), 3);
    add_background_object(create_fdhangarfloor2_3397(1408, 1408), 3);
    add_background_object(create_fdhangarfloor11_3404(1440, 1408), 3);
    add_background_object(create_fdhangarfloor7_3399(1408, 1504), 3);
    add_background_object(create_fdhangarfloor5_3398(1504, 1496), 3);
    add_background_object(create_fdhangarfloor11_3404(1440, 1504), 3);
    add_background_object(create_fdhangarwall1_3392(3328, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(3328, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(3328, 2016), 3);
    add_background_object(create_fdhangarwall1_3392(3328, 2144), 3);
    add_background_object(create_fdhangarwall1_3392(3328, 2272), 3);
    add_background_object(create_fdhangarwall1_3392(3456, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(3456, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(3456, 2016), 3);
    add_background_object(create_fdhangarwall1_3392(3456, 2144), 3);
    add_background_object(create_fdhangarwall1_3392(3456, 2272), 3);
    add_background_object(create_fdhangarfloor3_3401(864, 1408), 3);
    add_background_object(create_fdhangarwall1_3392(512, 1376), 3);
    add_background_object(create_fdhangarwall1_3392(512, 1504), 3);
    add_background_object(create_fdhangarwall1_3392(384, 1248), 3);
    add_background_object(create_fdhangarwall1_3392(384, 1376), 3);
    add_background_object(create_fdhangarwall1_3392(384, 1504), 3);
    add_background_object(create_fdhangarwall1_3392(3968, 1632), 3);
    add_background_object(create_fdhangarwall1_3392(4096, 1632), 3);
    add_background_object(create_fdhangarwall2_3393(3968, 1568), 3);
    add_background_object(create_fdhangarwall2_3393(4096, 1312), 3);
    add_background_object(create_fdhangarwall1_3392(4096, 1504), 3);
    add_background_object(create_fdhangarwall1_3392(4096, 1376), 3);
    add_background_object(create_fdhangarwall1_3392(4096, 864), 3);
    add_background_object(create_fdhangarwall1_3392(3968, 864), 3);
    add_background_object(create_fdhangarfloor8_3394(4192, 992), 3);
    add_background_object(create_fdhangarfloor8_3394(4192, 1056), 3);
    add_background_object(create_fdhangarfloor8_3394(4064, 1312), 3);
    add_background_object(create_fdhangarfloor8_3394(4064, 1376), 3);
    add_background_object(create_fdhangarfloor8_3394(4064, 1440), 3);
    add_background_object(create_fdhangarfloor8_3394(4064, 1504), 3);
    add_background_object(create_fdhangarfloor1_3396(3968, 1536), 3);
    add_background_object(create_fdhangarfloor6_3400(3968, 960), 3);
    add_background_object(create_fdhangarfloor6_3400(4032, 960), 3);
    add_background_object(create_fdhangarfloor6_3400(4096, 960), 3);
    add_background_object(create_fdhangarfloor6_3400(4160, 960), 3);
    add_background_object(create_fdhangarfloor2_3397(4192, 960), 3);
    add_background_object(create_fdhangarcurve4_3411(3968, 1440), 3);
    add_background_object(create_fdhangarfloor8_3394(4192, 1184), 3);
    add_background_object(create_fdhangarfloor3_3401(4064, 1280), 3);
    add_background_object(create_fdhangarfloor8_3394(4192, 1248), 3);
    add_background_object(create_fdhangarfloor1_3396(4096, 1280), 3);
    add_background_object(create_fdhangarfloor8_3394(4192, 1120), 3);
    add_background_object(create_fdhangarwall1_3392(3840, 864), 3);
    add_background_object(create_fdhangarfloor6_3400(3840, 960), 3);
    add_background_object(create_fdhangarfloor6_3400(3904, 992), 3);
    add_background_object(create_tblongrailing3_2690(4080, 992), 3);
    add_background_object(create_tblongrailing_2707(3888, 1040), 3);
    add_background_object(create_tblongrailing_2707(3952, 1040), 3);
    add_background_object(create_tblongrailing_2707(4016, 1040), 3);
    add_background_object(create_fdhangarfloor3_3401(3968, 960), 3);
    add_background_object(create_fdhangarfloor9_3402(3968, 992), 3);
    add_background_object(create_fdhangarfloor2_3397(3904, 960), 3);
    add_background_object(create_fdhangarfloor10_3403(3904, 992), 3);
    add_background_object(create_fdhangarfloor8_3394(3808, 896), 3);
    add_background_object(create_tblongrailing_2707(3824, 1040), 3);
    add_background_object(create_fdhangarfloor10_3403(3808, 960), 3);
    add_background_object(create_fdhangarcurve3_3435(4096, 992), 3);
    add_background_object(create_fdhangarfloor8_3394(3808, 864), 3);
    add_background_object(create_fdhangarfloor3_3401(3808, 832), 3);
    add_background_object(create_fdhangarfloor1_3396(3840, 832), 3);
    add_background_object(create_fdhangarfloor8_3394(3648, 864), 3);
    add_background_object(create_fdhangarfloor4_3390(3680, 864), 3);
    add_background_object(create_fdhangarfloor8_3394(3648, 928), 3);
    add_background_object(create_fdhangarfloor4_3390(3680, 928), 3);
    add_background_object(create_fdhangarfloor8_3394(3648, 992), 3);
    add_background_object(create_fdhangarfloor4_3390(3680, 992), 3);
    add_background_object(create_fdhangarfloor8_3394(3648, 1184), 3);
    add_background_object(create_fdhangarfloor4_3390(3680, 1184), 3);
    add_background_object(create_fdhangarfloor10_3403(3648, 1312), 3);
    add_background_object(create_fdhangarfloor8_3394(3648, 736), 3);
    add_background_object(create_fdhangarfloor4_3390(3680, 736), 3);
    add_background_object(create_fdhangarfloor8_3394(3648, 800), 3);
    add_background_object(create_fdhangarfloor4_3390(3680, 800), 3);
    add_background_object(create_fdhangarfloor1_3396(3968, 832), 3);
    add_background_object(create_fdhangarfloor3_3401(3648, 704), 3);
    add_background_object(create_fdhangarfloor2_3397(3680, 704), 3);
    add_background_object(create_fdhangarwall1_3392(3584, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(3712, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(3840, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(3968, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(4096, 1760), 3);
    add_background_object(create_fdhangarfloor10_3403(3648, 672), 3);
    add_background_object(create_fdhangarfloor6_3400(3680, 672), 3);
    add_background_object(create_fdhangarfloor6_3400(3744, 672), 3);
    add_background_object(create_fdhangarfloor9_3402(3808, 672), 3);
    add_background_object(create_fdhangarwall1_3392(3680, 544), 3);
    add_background_object(create_fdhangarfloor8_3394(3648, 608), 3);
    add_background_object(create_fdhangarfloor8_3394(3648, 544), 3);
    add_background_object(create_fdhangarfloor4_3390(3808, 544), 3);
    add_background_object(create_fdhangarfloor4_3390(3808, 608), 3);
    add_background_object(create_fdhangarfloor1_3396(4096, 832), 3);
    add_background_object(create_fdhangarfloor4_3390(4224, 992), 3);
    add_background_object(create_fdhangarfloor4_3390(4224, 864), 3);
    add_background_object(create_fdhangarfloor4_3390(4224, 928), 3);
    add_background_object(create_fdhangarfloor2_3397(4224, 832), 3);
    add_background_object(create_fdhangarfloor4_3390(4224, 1184), 3);
    add_background_object(create_fdhangarfloor4_3390(4224, 1056), 3);
    add_background_object(create_fdhangarfloor4_3390(4224, 1120), 3);
    add_background_object(create_fdhangarfloor4_3390(4224, 1376), 3);
    add_background_object(create_fdhangarfloor4_3390(4224, 1248), 3);
    add_background_object(create_fdhangarfloor4_3390(4224, 1312), 3);
    add_background_object(create_fdhangarfloor4_3390(4224, 1440), 3);
    add_background_object(create_fdhangarfloor4_3390(4224, 1632), 3);
    add_background_object(create_fdhangarfloor4_3390(4224, 1504), 3);
    add_background_object(create_fdhangarfloor4_3390(4224, 1568), 3);
    add_background_object(create_fdhangarfloor4_3390(4224, 1760), 3);
    add_background_object(create_fdhangarfloor4_3390(4224, 1696), 3);
    add_background_object(create_fdhangarfloor4_3390(4224, 1824), 3);
    add_background_object(create_fdhangarfloor4_3390(4224, 2016), 3);
    add_background_object(create_fdhangarfloor4_3390(4224, 1888), 3);
    add_background_object(create_fdhangarfloor4_3390(4224, 1952), 3);
    add_background_object(create_fdhangarwall1_3392(3968, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(4096, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(3968, 2016), 3);
    add_background_object(create_fdhangarwall1_3392(4096, 2016), 3);
    add_background_object(create_fdhangarwall1_3392(3968, 2144), 3);
    add_background_object(create_fdhangarwall1_3392(4096, 2144), 3);
    add_background_object(create_fdhangarwall1_3392(3968, 2272), 3);
    add_background_object(create_fdhangarwall1_3392(4096, 2272), 3);
    add_background_object(create_fdhangarfloor4_3390(4224, 2080), 3);
    add_background_object(create_fdhangarfloor4_3390(4224, 2144), 3);
    add_background_object(create_fdhangarfloor4_3390(4224, 2336), 3);
    add_background_object(create_fdhangarfloor4_3390(4224, 2208), 3);
    add_background_object(create_fdhangarfloor4_3390(4224, 2272), 3);
    add_background_object(create_fdhangarfloor8_3394(4448, 928), 3);
    add_background_object(create_fdhangarfloor8_3394(4448, 864), 3);
    add_background_object(create_fdhangarfloor3_3401(4448, 832), 3);
    add_background_object(create_fdhangarwall1_3392(4480, 864), 3);
    add_background_object(create_fdhangarfloor8_3394(4448, 1568), 3);
    add_background_object(create_fdhangarfloor8_3394(4448, 1504), 3);
    add_background_object(create_fdhangarwall1_3392(4480, 1504), 3);
    add_background_object(create_fdhangarfloor8_3394(4448, 1696), 3);
    add_background_object(create_fdhangarfloor8_3394(4448, 1632), 3);
    add_background_object(create_fdhangarfloor8_3394(4448, 1824), 3);
    add_background_object(create_fdhangarfloor8_3394(4448, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(4480, 1632), 3);
    add_background_object(create_fdhangarwall1_3392(4480, 1760), 3);
    add_background_object(create_fdhangarfloor8_3394(4448, 1952), 3);
    add_background_object(create_fdhangarfloor8_3394(4448, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(4480, 1888), 3);
    add_background_object(create_fdhangarfloor8_3394(4448, 2080), 3);
    add_background_object(create_fdhangarfloor8_3394(4448, 2016), 3);
    add_background_object(create_fdhangarfloor8_3394(4448, 2208), 3);
    add_background_object(create_fdhangarfloor8_3394(4448, 2144), 3);
    add_background_object(create_fdhangarwall1_3392(4480, 2016), 3);
    add_background_object(create_fdhangarwall1_3392(4480, 2144), 3);
    add_background_object(create_fdhangarfloor8_3394(4448, 2336), 3);
    add_background_object(create_fdhangarfloor8_3394(4448, 2272), 3);
    add_background_object(create_fdhangarwall1_3392(4480, 2272), 3);
    add_background_object(create_fdhangarfloor7_3399(4448, 992), 3);
    add_background_object(create_fdhangarfloor6_3400(4480, 992), 3);
    add_background_object(create_fdhangarfloor6_3400(4544, 992), 3);
    add_background_object(create_fdhangarfloor3_3401(4448, 1344), 3);
    add_background_object(create_fdhangarwall1_3392(4608, 1248), 3);
    add_background_object(create_fdhangarwall1_3392(4608, 1504), 3);
    add_background_object(create_fdhangarwall1_3392(4608, 1632), 3);
    add_background_object(create_fdhangarwall1_3392(4608, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(4608, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(4608, 2016), 3);
    add_background_object(create_fdhangarwall1_3392(4608, 2144), 3);
    add_background_object(create_fdhangarwall1_3392(4608, 2272), 3);
    add_background_object(create_fdhangarfloor1_3396(4608, 1216), 3);
    add_background_object(create_fdhangarwall1_3392(4736, 1248), 3);
    add_background_object(create_fdhangarwall1_3392(4736, 1504), 3);
    add_background_object(create_fdhangarfloor1_3396(4736, 1216), 3);
    add_background_object(create_fdhangarfloor1_3396(4608, 704), 3);
    add_background_object(create_fdhangarwall1_3392(4608, 864), 3);
    add_background_object(create_fdhangarfloor6_3400(4608, 992), 3);
    add_background_object(create_fdhangarfloor6_3400(4672, 992), 3);
    add_background_object(create_fdhangarwall1_3392(256, 1248), 3);
    add_background_object(create_fdhangarwall1_3392(256, 1376), 3);
    add_background_object(create_fdhangarwall1_3392(256, 1504), 3);
    add_background_object(create_fdhangarwall1_3392(128, 1248), 3);
    add_background_object(create_fdhangarwall1_3392(128, 1376), 3);
    add_background_object(create_fdhangarwall1_3392(128, 1504), 3);
    add_background_object(create_fdhangarwall1_3392(0, 1248), 3);
    add_background_object(create_fdhangarwall1_3392(0, 1376), 3);
    add_background_object(create_fdhangarwall1_3392(0, 1504), 3);
    add_background_object(create_fdhangarwall4_3395(384, 1120), 3);
    add_background_object(create_fdhangarwall4_3395(512, 1248), 3);
    add_background_object(create_fdhangarwall2_3393(640, 1376), 3);
    add_background_object(create_fdhangarfloor1_3396(640, 1344), 3);
    add_background_object(create_fdhangarfloor3_3401(736, 1088), 3);
    add_background_object(create_fdhangarfloor8_3394(736, 1184), 3);
    add_background_object(create_fdhangarfloor8_3394(736, 1120), 3);
    add_background_object(create_fdhangarfloor7_3399(736, 1248), 3);
    add_background_object(create_fdhangarfloor2_3397(768, 1344), 3);
    add_background_object(create_fdhangarfloor12_3407(384, 1088), 3);
    add_background_object(create_fdhangarfloor12_3407(448, 1152), 3);
    add_background_object(create_fdhangarfloor12_3407(512, 1216), 3);
    add_background_object(create_fdhangarfloor12_3407(576, 1280), 3);
    add_background_object(create_fdhangarfloor8_3394(4448, 1440), 3);
    add_background_object(create_fdhangarfloor8_3394(4448, 1376), 3);
    add_background_object(create_fdhangarwall1_3392(4480, 1376), 3);
    add_background_object(create_fdhangarwall1_3392(4608, 1376), 3);
    add_background_object(create_fdhangarwall1_3392(4736, 1376), 3);
    add_background_object(create_fdhangarwall1_3392(3200, 1504), 3);
    add_background_object(create_fdhangarfloor5_3398(2816, 880), 3);
    add_background_object(create_fdhangarfloor6_3400(2752, 880), 3);
    add_background_object(create_fdhangarfloor6_3400(2560, 880), 3);
    add_background_object(create_fdhangarfloor8_3394(2528, 816), 3);
    add_background_object(create_fdhangarfloor3_3401(2528, 816), 3);
    add_background_object(create_fdhangarfloor2_3397(2752, 816), 3);
    add_background_object(create_fdhangarfloor11_3404(2560, 816), 3);
    add_background_object(create_fdhangarfloor11_3404(2752, 848), 3);
    add_background_object(create_fdhangarfloor10_3403(2752, 848), 3);
    add_background_object(create_fdhangarfloor2_3397(2816, 848), 3);
    add_background_object(create_fdhangarfloor3_3401(3040, 912), 3);
    add_background_object(create_fdhangarfloor1_3396(3072, 912), 3);
    add_background_object(create_fdhangarfloor7_3399(3040, 944), 3);
    add_background_object(create_fdhangarfloor6_3400(3136, 944), 3);
    add_background_object(create_fdhangarfloor6_3400(3072, 944), 3);
    add_background_object(create_fdhangarfloor1_3396(3200, 912), 3);
    add_background_object(create_fdhangarfloor6_3400(3264, 944), 3);
    add_background_object(create_fdhangarfloor6_3400(3200, 944), 3);
    add_background_object(create_fdhangarfloor1_3396(3328, 912), 3);
    add_background_object(create_fdhangarfloor6_3400(3392, 944), 3);
    add_background_object(create_fdhangarfloor6_3400(3328, 944), 3);
    add_background_object(create_fdhangarfloor1_3396(3456, 912), 3);
    add_background_object(create_fdhangarfloor6_3400(3456, 944), 3);
    add_background_object(create_fdhangarfloor6_3400(3520, 944), 3);
    add_background_object(create_fdhangarfloor2_3397(3584, 912), 3);
    add_background_object(create_fdhangarfloor9_3402(3584, 944), 3);
    add_background_object(create_fdhangarfloor3_3401(4576, 1216), 3);
    add_background_object(create_fdhangarfloor8_3394(4576, 1248), 3);
    add_background_object(create_fdhangarfloor8_3394(4576, 1312), 3);
    add_background_object(create_fdhangarfloor1_3396(4480, 1344), 3);
    add_background_object(create_fdhangarfloor4_3390(768, 1376), 3);
    add_background_object(create_fdhangarfloor1_3396(1024, 1408), 3);
    add_background_object(create_fdladder_3448(3592, 512), 3);
    add_background_object(create_fdhangarfloor3_3401(3648, 512), 3);
    add_background_object(create_fdhangarfloor1_3396(3680, 512), 3);
    add_background_object(create_fdhangarfloor2_3397(3808, 512), 3);
    add_background_object(create_fdladder_3448(3592, 544), 3);
    add_background_object(create_fdladder_3448(3592, 576), 3);
    add_background_object(create_fdladder_3448(3592, 608), 3);
    add_background_object(create_fdladder_3448(3592, 640), 3);
    add_background_object(create_fdladder_3448(3592, 672), 3);
    add_background_object(create_fdladder_3448(3592, 704), 3);
    add_background_object(create_fdladder_3448(3592, 736), 3);
    add_background_object(create_fdladder_3448(3592, 768), 3);
    add_background_object(create_fdhangarwall1_3392(3712, 256), 3);
    add_background_object(create_fdhangarfloor6_3400(3712, 384), 3);
    add_background_object(create_fdhangarfloor6_3400(3776, 384), 3);
    add_background_object(create_fdhangarwall1_3392(3584, 256), 3);
    add_background_object(create_fdhangarfloor6_3400(3584, 384), 3);
    add_background_object(create_fdhangarfloor6_3400(3648, 384), 3);
    add_background_object(create_fdhangarwall1_3392(3840, 256), 3);
    add_background_object(create_fdhangarfloor6_3400(3840, 384), 3);
    add_background_object(create_fdhangarfloor6_3400(3904, 384), 3);
    add_background_object(create_fdhangarwall1_3392(3456, 256), 3);
    add_background_object(create_fdhangarfloor6_3400(3456, 384), 3);
    add_background_object(create_fdhangarfloor6_3400(3520, 384), 3);
    add_background_object(create_fdhangarfloor8_3394(3424, 320), 3);
    add_background_object(create_fdhangarfloor8_3394(3424, 256), 3);
    add_background_object(create_fdhangarwall1_3392(3712, 128), 3);
    add_background_object(create_fdhangarwall1_3392(3584, 128), 3);
    add_background_object(create_fdhangarwall1_3392(3840, 128), 3);
    add_background_object(create_fdhangarwall1_3392(3456, 128), 3);
    add_background_object(create_fdhangarfloor8_3394(3424, 192), 3);
    add_background_object(create_fdhangarfloor8_3394(3424, 128), 3);
    add_background_object(create_fdhangarwall1_3392(3712, 0), 3);
    add_background_object(create_fdhangarwall1_3392(3584, 0), 3);
    add_background_object(create_fdhangarwall1_3392(3840, 0), 3);
    add_background_object(create_fdhangarwall1_3392(3456, 0), 3);
    add_background_object(create_fdhangarfloor8_3394(3424, 64), 3);
    add_background_object(create_fdhangarfloor8_3394(3424, 0), 3);
    add_background_object(create_fdhangarfloor7_3399(3424, 384), 3);
    add_background_object(create_fdhangarwall1_3392(3968, 256), 3);
    add_background_object(create_fdhangarfloor6_3400(3968, 384), 3);
    add_background_object(create_fdhangarfloor6_3400(4032, 384), 3);
    add_background_object(create_fdhangarwall1_3392(4096, 256), 3);
    add_background_object(create_fdhangarfloor6_3400(4096, 384), 3);
    add_background_object(create_fdhangarfloor6_3400(4160, 384), 3);
    add_background_object(create_fdhangarwall1_3392(3968, 128), 3);
    add_background_object(create_fdhangarwall1_3392(4096, 128), 3);
    add_background_object(create_fdhangarwall1_3392(3968, 0), 3);
    add_background_object(create_fdhangarwall1_3392(4096, 0), 3);
    add_background_object(create_fdhangarfloor5_3398(4224, 384), 3);
    add_background_object(create_fdhangarfloor4_3390(4224, 256), 3);
    add_background_object(create_fdhangarfloor4_3390(4224, 320), 3);
    add_background_object(create_fdhangarfloor4_3390(4224, 128), 3);
    add_background_object(create_fdhangarfloor4_3390(4224, 192), 3);
    add_background_object(create_fdhangarfloor4_3390(4224, 0), 3);
    add_background_object(create_fdhangarfloor4_3390(4224, 64), 3);
    add_background_object(create_fdhangarwall1_3392(1920, 416), 3);
    add_background_object(create_fdhangarwall1_3392(1792, 416), 3);
    add_background_object(create_fdhangarwall1_3392(1664, 416), 3);
    add_background_object(create_fdhangarwall1_3392(1536, 416), 3);
    add_background_object(create_fdhangarwall1_3392(1408, 416), 3);
    add_background_object(create_fdhangarwall1_3392(1280, 416), 3);
    add_background_object(create_fdhangarwall1_3392(1152, 416), 3);
    add_background_object(create_fdhangarwall1_3392(1024, 416), 3);
    add_background_object(create_fdhangarfloor8_3394(992, 416), 3);
    add_background_object(create_fdhangarfloor8_3394(992, 480), 3);
    add_background_object(create_fdhangarwall1_3392(1920, 288), 3);
    add_background_object(create_fdhangarwall1_3392(1792, 288), 3);
    add_background_object(create_fdhangarwall1_3392(1664, 288), 3);
    add_background_object(create_fdhangarwall1_3392(1536, 288), 3);
    add_background_object(create_fdhangarwall1_3392(1408, 288), 3);
    add_background_object(create_fdhangarwall1_3392(1280, 288), 3);
    add_background_object(create_fdhangarwall1_3392(1152, 288), 3);
    add_background_object(create_fdhangarwall1_3392(1024, 288), 3);
    add_background_object(create_fdhangarfloor8_3394(992, 288), 3);
    add_background_object(create_fdhangarfloor8_3394(992, 352), 3);
    add_background_object(create_fdhangarwall1_3392(1920, 160), 3);
    add_background_object(create_fdhangarwall1_3392(1792, 160), 3);
    add_background_object(create_fdhangarwall1_3392(1664, 160), 3);
    add_background_object(create_fdhangarwall1_3392(1536, 160), 3);
    add_background_object(create_fdhangarwall1_3392(1408, 160), 3);
    add_background_object(create_fdhangarwall1_3392(1280, 160), 3);
    add_background_object(create_fdhangarwall1_3392(1152, 160), 3);
    add_background_object(create_fdhangarwall1_3392(1024, 160), 3);
    add_background_object(create_fdhangarfloor8_3394(992, 160), 3);
    add_background_object(create_fdhangarfloor8_3394(992, 224), 3);
    add_background_object(create_fdhangarfloor3_3401(992, 128), 3);
    add_background_object(create_fdhangarfloor1_3396(1024, 128), 3);
    add_background_object(create_fdhangarfloor1_3396(1152, 128), 3);
    add_background_object(create_fdhangarwall1_3392(2048, 480), 3);
    add_background_object(create_fdhangarwall1_3392(2176, 480), 3);
    add_background_object(create_fdhangarwall1_3392(2304, 480), 3);
    add_background_object(create_fdhangarwall1_3392(2048, 352), 3);
    add_background_object(create_fdhangarwall1_3392(2176, 352), 3);
    add_background_object(create_fdhangarwall1_3392(2304, 352), 3);
    add_background_object(create_fdhangarwall1_3392(2432, 352), 3);
    add_background_object(create_fdhangarwall1_3392(2560, 352), 3);
    add_background_object(create_fdhangarwall2_3393(2432, 480), 3);
    add_background_object(create_fdhangarwall2_3393(2176, 608), 3);
    add_background_object(create_fdhangarfloor4_3390(2432, 544), 3);
    add_background_object(create_fdhangarfloor4_3390(2304, 608), 3);
    add_background_object(create_fdhangarfloor4_3390(2560, 480), 3);
    add_background_object(create_fdhangarfloor6_3400(2176, 672), 3);
    add_background_object(create_fdhangarfloor6_3400(2240, 672), 3);
    add_background_object(create_fdhangarfloor5_3398(2304, 672), 3);
    add_background_object(create_fdhangarfloor6_3400(2304, 608), 3);
    add_background_object(create_fdhangarfloor6_3400(2368, 608), 3);
    add_background_object(create_fdhangarfloor5_3398(2432, 608), 3);
    add_background_object(create_fdhangarfloor6_3400(2432, 544), 3);
    add_background_object(create_fdhangarfloor6_3400(2496, 544), 3);
    add_background_object(create_fdhangarfloor5_3398(2560, 544), 3);
    add_background_object(create_fdhangarfloor3_3401(2176, 672), 3);
    add_background_object(create_fdhangarfloor3_3401(2304, 608), 3);
    add_background_object(create_fdhangarfloor3_3401(2432, 544), 3);
    add_background_object(create_fdhangarfloor6_3400(2560, 480), 3);
    add_background_object(create_fdhangarfloor6_3400(2752, 480), 3);
    add_background_object(create_fdhangarfloor4_3390(2816, 416), 3);
    add_background_object(create_fdhangarfloor5_3398(2816, 480), 3);
    add_background_object(create_fdhangarfloor3_3401(2560, 480), 3);
    add_background_object(create_fdhangarfloor4_3390(2816, 352), 3);
    add_background_object(create_fdhangarwall1_3392(2048, 224), 3);
    add_background_object(create_fdhangarwall1_3392(2176, 224), 3);
    add_background_object(create_fdhangarwall1_3392(2304, 224), 3);
    add_background_object(create_fdhangarwall1_3392(2432, 224), 3);
    add_background_object(create_fdhangarwall1_3392(2560, 224), 3);
    add_background_object(create_fdhangarfloor4_3390(2816, 288), 3);
    add_background_object(create_fdhangarfloor4_3390(2816, 224), 3);
    add_background_object(create_fdhangarwall1_3392(2048, 96), 3);
    add_background_object(create_fdhangarwall1_3392(2176, 96), 3);
    add_background_object(create_fdhangarwall1_3392(2304, 96), 3);
    add_background_object(create_fdhangarwall1_3392(2432, 96), 3);
    add_background_object(create_fdhangarwall1_3392(2560, 96), 3);
    add_background_object(create_fdhangarfloor4_3390(2816, 160), 3);
    add_background_object(create_fdhangarfloor4_3390(2816, 96), 3);
    add_background_object(create_fdhangarwall1_3392(2048, -32), 3);
    add_background_object(create_fdhangarwall1_3392(2176, -32), 3);
    add_background_object(create_fdhangarwall1_3392(2304, -32), 3);
    add_background_object(create_fdhangarwall1_3392(2432, -32), 3);
    add_background_object(create_fdhangarwall1_3392(2560, -32), 3);
    add_background_object(create_fdhangarfloor4_3390(2816, 32), 3);
    add_background_object(create_fdhangarfloor4_3390(2816, -32), 3);
    add_background_object(create_fdhangarfloor6_3400(1152, 96), 3);
    add_background_object(create_fdhangarwall1_3392(1920, 32), 3);
    add_background_object(create_fdhangarwall1_3392(1792, 32), 3);
    add_background_object(create_fdhangarwall1_3392(1664, 32), 3);
    add_background_object(create_fdhangarwall1_3392(1536, 32), 3);
    add_background_object(create_fdhangarwall1_3392(1408, 32), 3);
    add_background_object(create_fdhangarwall1_3392(1280, 32), 3);
    add_background_object(create_fdhangarwall1_3392(1920, -96), 3);
    add_background_object(create_fdhangarwall1_3392(1792, -96), 3);
    add_background_object(create_fdhangarwall1_3392(1664, -96), 3);
    add_background_object(create_fdhangarwall1_3392(1536, -96), 3);
    add_background_object(create_fdhangarwall1_3392(1408, -96), 3);
    add_background_object(create_fdhangarwall1_3392(1280, -96), 3);
    add_background_object(create_fdhangarfloor3_3401(3464, 640), 3);
    add_background_object(create_fdhangarfloor11_3404(3496, 640), 3);
    add_background_object(create_fdhangarfloor2_3397(3560, 640), 3);
    add_background_object(create_fdhangarfloor9_3402(3560, 672), 3);
    add_background_object(create_fdhangarfloor6_3400(3496, 672), 3);
    add_background_object(create_fdhangarfloor7_3399(3464, 672), 3);
    add_background_object(create_fdhangarfloor3_3401(3616, 912), 3);
    add_background_object(create_fdhangarfloor10_3403(3616, 944), 3);
    add_background_object(create_fdhangarwall1_3392(4608, 736), 3);
    add_background_object(create_fddownhillplatformrail_3409(4000, 512), 3);
    add_background_object(create_fddownhillplatformrail_3409(4064, 544), 3);
    add_background_object(create_fddownhillplatformrail_3409(4128, 576), 3);
    add_background_object(create_fddownhillplatformrail_3409(4192, 608), 3);
    add_background_object(create_fddownhillplatformrail_3409(4256, 640), 3);
    add_background_object(create_fddownhillplatformrail_3409(4320, 672), 3);
    add_background_object(create_fddownhillplatformrail_3409(4384, 704), 3);
    add_background_object(create_fddownhillplatformrail_3409(4448, 736), 3);
    add_background_object(create_fdhangarfloor8_3394(4576, 800), 3);
    add_background_object(create_fdhangarfloor3_3401(4576, 704), 3);
    add_background_object(create_fdhangarfloor8_3394(4576, 736), 3);
    add_background_object(create_fdhangarfloor1_3396(4480, 832), 3);
    add_background_object(create_fddownhillplatformrail_3409(4512, 768), 3);
    add_background_object(create_fdhangarfloor3_3401(3904, 512), 3);
    add_background_object(create_fdhangarfloor2_3397(3968, 512), 3);
    add_background_object(create_fdhangarfloor5_3398(3968, 544), 3);
    add_background_object(create_fdhangarfloor6_3400(3904, 544), 3);
    add_background_object(create_fdhangarfloor10_3403(3904, 544), 3);
    add_background_object(create_fdhangarfloor3_3401(3840, 544), 3);
    add_background_object(create_fdhangarfloor2_3397(3872, 544), 3);
    add_background_object(create_fdhangarfloor5_3398(3872, 576), 3);
    add_background_object(create_fdhangarfloor10_3403(3840, 576), 3);
    add_background_object(create_fdhangarfloor11_3404(3840, 512), 3);
    add_background_object(create_fdhangarwall1_3392(4736, 864), 3);
    add_background_object(create_fdhangarfloor6_3400(4736, 992), 3);
    add_background_object(create_fdhangarfloor6_3400(4800, 992), 3);
    add_background_object(create_fdhangarfloor4_3390(4736, 800), 3);
    add_background_object(create_fdhangarfloor2_3397(4736, 704), 3);
    add_background_object(create_fdhangarfloor4_3390(4736, 736), 3);
    add_background_object(create_fdhangarfloor1_3396(4736, 832), 3);
    add_background_object(create_fdspiralsparktower_3405(4768, 800), 3);
    add_background_object(create_fdhangarwall1_3392(4864, 864), 3);
    add_background_object(create_fdhangarfloor6_3400(4864, 992), 3);
    add_background_object(create_fdhangarfloor6_3400(4928, 992), 3);
    add_background_object(create_fdhangarfloor1_3396(4864, 832), 3);
    add_background_object(create_fdhangarwall1_3392(4864, 1248), 3);
    add_background_object(create_fdhangarfloor1_3396(4864, 1216), 3);
    add_background_object(create_fdhangarwall1_3392(4864, 1376), 3);
    add_background_object(create_fdhangarfloor3_3401(3104, 640), 3);
    add_background_object(create_fdhangarfloor11_3404(3136, 640), 3);
    add_background_object(create_fdhangarfloor2_3397(3200, 640), 3);
    add_background_object(create_fdhangarfloor6_3400(3136, 672), 3);
    add_background_object(create_fdhangarfloor7_3399(3104, 672), 3);
    add_background_object(create_fdhangarfloor5_3398(3200, 672), 3);
    add_background_object(create_fdhangarwall1_3392(4992, 1376), 3);
    add_background_object(create_fdhangarwall1_3392(4992, 864), 3);
    add_background_object(create_fdhangarfloor6_3400(4992, 992), 3);
    add_background_object(create_fdhangarfloor6_3400(5056, 992), 3);
    add_background_object(create_fdhangarfloor1_3396(4992, 832), 3);
    add_background_object(create_fdhangarwall1_3392(5120, 864), 3);
    add_background_object(create_fdhangarfloor6_3400(5120, 992), 3);
    add_background_object(create_fdhangarfloor6_3400(5184, 1120), 3);
    add_background_object(create_fdhangarfloor1_3396(5120, 832), 3);
    add_background_object(create_fdspiralsparktower_3405(5024, 1216), 3);
    add_background_object(create_fdspiralsparktower_3405(5024, 1248), 3);
    add_background_object(create_fdspiralsparktower_3405(5024, 1280), 3);
    add_background_object(create_fdhangarfloor4_3390(4992, 1312), 3);
    add_background_object(create_fdhangarfloor2_3397(4992, 1216), 3);
    add_background_object(create_fdhangarfloor4_3390(4992, 1248), 3);
    add_background_object(create_fdhangarfloor1_3396(4992, 1344), 3);
    add_background_object(create_fdspiralsparktower_3405(5024, 1312), 3);
    add_background_object(create_fdhangarfloor1_3396(5120, 1344), 3);
    add_background_object(create_fdhangarwall1_3392(5120, 1376), 3);
    add_background_object(create_fdhangarwall1_3392(4864, 1504), 3);
    add_background_object(create_fdhangarwall1_3392(4992, 1504), 3);
    add_background_object(create_fdhangarwall1_3392(5120, 1504), 3);
    add_background_object(create_fdhangarwall1_3392(5248, 1376), 3);
    add_background_object(create_fdhangarfloor1_3396(5248, 1344), 3);
    add_background_object(create_fdhangarfloor1_3396(5376, 1344), 3);
    add_background_object(create_fdhangarwall1_3392(5248, 1504), 3);
    add_background_object(create_fdhangarwall1_3392(5376, 1440), 3);
    add_background_object(create_fdhangarfloor6_3400(5248, 1120), 3);
    add_background_object(create_fdhangarfloor6_3400(5312, 864), 3);
    add_background_object(create_fdspiralsparktower_3405(5488, 1024), 3);
    add_background_object(create_fdspiralsparktower_3405(5488, 1248), 3);
    add_background_object(create_fdspiralsparktower_3405(5488, 1280), 3);
    add_background_object(create_fdspiralsparktower_3405(5488, 1312), 3);
    add_background_object(create_fdhangarwall1_3392(5184, 992), 3);
    add_background_object(create_fdhangarfloor8_3394(5152, 1056), 3);
    add_background_object(create_fdhangarfloor7_3399(5152, 1120), 3);
    add_background_object(create_fdhangarfloor8_3394(5152, 992), 3);
    add_background_object(create_fdhangarfloor2_3397(5152, 992), 3);
    add_background_object(create_fdhangarfloor6_3400(5376, 864), 3);
    add_background_object(create_fdhangarfloor6_3400(5440, 864), 3);
    add_background_object(create_fdhangarfloor5_3398(5312, 1120), 3);
    add_background_object(create_fdhangarfloor4_3390(5312, 1056), 3);
    add_background_object(create_fdhangarfloor4_3390(5312, 864), 3);
    add_background_object(create_fdhangarfloor3_3401(5312, 864), 3);
    add_background_object(create_fdspiralsparktower_3405(5488, 1056), 3);
    add_background_object(create_fdspiralsparktower_3405(5488, 1088), 3);
    add_background_object(create_fdspiralsparktower_3405(5488, 1120), 3);
    add_background_object(create_fdhangarfloor2_3397(5504, 1344), 3);
    add_background_object(create_fdhangarfloor1_3396(5248, 832), 3);
    add_background_object(create_fdhangarfloor1_3396(5376, 832), 3);
    add_background_object(create_fdhangarfloor2_3397(5504, 832), 3);
    add_background_object(create_fdhangarfloor4_3390(5504, 1440), 3);
    add_background_object(create_fdhangarfloor4_3390(5504, 1376), 3);
    add_background_object(create_fdhangarfloor4_3390(5504, 1568), 3);
    add_background_object(create_fdhangarfloor4_3390(5504, 1504), 3);
    add_background_object(create_fdhangarwall1_3392(4736, 1632), 3);
    add_background_object(create_fdhangarwall1_3392(4736, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(4736, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(4736, 2016), 3);
    add_background_object(create_fdhangarwall1_3392(4736, 2144), 3);
    add_background_object(create_fdhangarwall1_3392(4736, 2272), 3);
    add_background_object(create_fdhangarwall1_3392(5120, 1632), 3);
    add_background_object(create_fdhangarwall1_3392(5120, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(5248, 1632), 3);
    add_background_object(create_fdhangarwall1_3392(5376, 1632), 3);
    add_background_object(create_fdhangarwall1_3392(5248, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(5376, 1760), 3);
    add_background_object(create_fdhangarfloor4_3390(5504, 1696), 3);
    add_background_object(create_fdhangarfloor4_3390(5504, 1632), 3);
    add_background_object(create_fdhangarfloor4_3390(5504, 1824), 3);
    add_background_object(create_fdhangarfloor4_3390(5504, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(5120, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(5120, 2016), 3);
    add_background_object(create_fdhangarwall1_3392(5248, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(5376, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(5248, 2016), 3);
    add_background_object(create_fdhangarwall1_3392(5376, 2016), 3);
    add_background_object(create_fdhangarfloor4_3390(5504, 1952), 3);
    add_background_object(create_fdhangarfloor4_3390(5504, 1888), 3);
    add_background_object(create_fdhangarfloor4_3390(5504, 2080), 3);
    add_background_object(create_fdhangarfloor4_3390(5504, 2016), 3);
    add_background_object(create_fdhangarwall1_3392(5120, 2144), 3);
    add_background_object(create_fdhangarwall1_3392(5120, 2272), 3);
    add_background_object(create_fdhangarwall1_3392(5248, 2144), 3);
    add_background_object(create_fdhangarwall1_3392(5376, 2144), 3);
    add_background_object(create_fdhangarwall1_3392(5248, 2272), 3);
    add_background_object(create_fdhangarwall1_3392(5376, 2272), 3);
    add_background_object(create_fdhangarfloor4_3390(5504, 2208), 3);
    add_background_object(create_fdhangarfloor4_3390(5504, 2144), 3);
    add_background_object(create_fdhangarfloor4_3390(5504, 2336), 3);
    add_background_object(create_fdhangarfloor4_3390(5504, 2272), 3);
    add_background_object(create_fdhangarfloor8_3394(5728, 1568), 3);
    add_background_object(create_fdhangarfloor8_3394(5728, 1504), 3);
    add_background_object(create_fdhangarfloor8_3394(5728, 1696), 3);
    add_background_object(create_fdhangarfloor8_3394(5728, 1632), 3);
    add_background_object(create_fdhangarfloor8_3394(5856, 1824), 3);
    add_background_object(create_fdhangarfloor8_3394(5856, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(5760, 1632), 3);
    add_background_object(create_fdhangarfloor8_3394(5856, 1952), 3);
    add_background_object(create_fdhangarfloor8_3394(5856, 1888), 3);
    add_background_object(create_fdhangarfloor8_3394(5856, 2080), 3);
    add_background_object(create_fdhangarfloor8_3394(5856, 2016), 3);
    add_background_object(create_fdhangarfloor8_3394(5728, 2208), 3);
    add_background_object(create_fdhangarfloor8_3394(5728, 2144), 3);
    add_background_object(create_fdhangarwall1_3392(5760, 2144), 3);
    add_background_object(create_fdhangarfloor8_3394(5728, 2336), 3);
    add_background_object(create_fdhangarfloor8_3394(5728, 2272), 3);
    add_background_object(create_fdhangarwall1_3392(5760, 2272), 3);
    add_background_object(create_fdhangarfloor3_3401(5728, 1344), 3);
    add_background_object(create_fdhangarfloor8_3394(5728, 1440), 3);
    add_background_object(create_fdhangarfloor8_3394(5728, 1376), 3);
    add_background_object(create_fdhangarfloor1_3396(5760, 1344), 3);
    add_background_object(create_fdhangarwall1_3392(5888, 1504), 3);
    add_background_object(create_fdhangarwall1_3392(5888, 1632), 3);
    add_background_object(create_fdhangarwall1_3392(5888, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(5888, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(5888, 2016), 3);
    add_background_object(create_fdhangarwall1_3392(5888, 2144), 3);
    add_background_object(create_fdhangarwall1_3392(5888, 2272), 3);
    add_background_object(create_fdhangarwall1_3392(5888, 1376), 3);
    add_background_object(create_fdhangarwall3_3389(5248, 864), 3);
    add_background_object(create_fdhangarfloor4_3390(5312, 992), 3);
    add_background_object(create_fdhangarfloor4_3390(5312, 928), 3);
    add_background_object(create_fdspiralsparktower_3405(5488, 1152), 3);
    add_background_object(create_fdspiralsparktower_3405(5488, 1184), 3);
    add_background_object(create_fdspiralsparktower_3405(5488, 1216), 3);
    add_background_object(create_fdhangarfloor9_3402(5504, 864), 3);
    add_background_object(create_fdhangarwall2_3393(5376, 1376), 3);
    add_background_object(create_fdhangarwall2_3393(5376, 1568), 3);
    add_background_object(create_fdhangarwall1_3392(5760, 1440), 3);
    add_background_object(create_fdhangarwall2_3393(5760, 1376), 3);
    add_background_object(create_fdhangarwall2_3393(5760, 1568), 3);
    add_background_object(create_fdhangarfloor6_3400(4736, 448), 3);
    add_background_object(create_fdhangarfloor6_3400(4800, 448), 3);
    add_background_object(create_fdhangarfloor6_3400(4608, 448), 3);
    add_background_object(create_fdhangarfloor6_3400(4672, 448), 3);
    add_background_object(create_fdhangarwall1_3392(4864, 384), 3);
    add_background_object(create_fdhangarfloor6_3400(4864, 512), 3);
    add_background_object(create_fdhangarfloor6_3400(4928, 512), 3);
    add_background_object(create_fdhangarfloor6_3400(4480, 448), 3);
    add_background_object(create_fdhangarfloor6_3400(4544, 448), 3);
    add_background_object(create_fdhangarfloor8_3394(4448, 384), 3);
    add_background_object(create_fdhangarwall1_3392(4736, 256), 3);
    add_background_object(create_fdhangarwall1_3392(4608, 256), 3);
    add_background_object(create_fdhangarwall1_3392(4864, 256), 3);
    add_background_object(create_fdhangarwall1_3392(4480, 256), 3);
    add_background_object(create_fdhangarfloor8_3394(4448, 320), 3);
    add_background_object(create_fdhangarfloor8_3394(4448, 256), 3);
    add_background_object(create_fdhangarwall1_3392(4736, 128), 3);
    add_background_object(create_fdhangarwall1_3392(4608, 128), 3);
    add_background_object(create_fdhangarwall1_3392(4864, 128), 3);
    add_background_object(create_fdhangarwall1_3392(4480, 128), 3);
    add_background_object(create_fdhangarfloor8_3394(4448, 192), 3);
    add_background_object(create_fdhangarfloor8_3394(4448, 128), 3);
    add_background_object(create_fdhangarwall1_3392(4992, 384), 3);
    add_background_object(create_fdhangarfloor6_3400(4992, 512), 3);
    add_background_object(create_fdhangarfloor6_3400(5056, 512), 3);
    add_background_object(create_fdhangarwall1_3392(5120, 384), 3);
    add_background_object(create_fdhangarfloor6_3400(5120, 512), 3);
    add_background_object(create_fdhangarfloor6_3400(5184, 512), 3);
    add_background_object(create_fdhangarwall1_3392(4992, 256), 3);
    add_background_object(create_fdhangarwall1_3392(5120, 256), 3);
    add_background_object(create_fdhangarwall1_3392(4992, 128), 3);
    add_background_object(create_fdhangarwall1_3392(5120, 128), 3);
    add_background_object(create_fdhangarfloor7_3399(4448, 448), 3);
    add_background_object(create_fdhangarwall2_3393(4480, 384), 3);
    add_background_object(create_fdhangarwall1_3392(4736, 0), 3);
    add_background_object(create_fdhangarwall1_3392(4608, 0), 3);
    add_background_object(create_fdhangarwall1_3392(4864, 0), 3);
    add_background_object(create_fdhangarwall1_3392(4480, 0), 3);
    add_background_object(create_fdhangarfloor8_3394(4448, 64), 3);
    add_background_object(create_fdhangarfloor8_3394(4448, 0), 3);
    add_background_object(create_fdhangarwall1_3392(4992, 0), 3);
    add_background_object(create_fdhangarwall1_3392(5120, 0), 3);
    add_background_object(create_fdhangarwall1_3392(5248, 384), 3);
    add_background_object(create_fdhangarfloor6_3400(5248, 512), 3);
    add_background_object(create_fdhangarfloor6_3400(5312, 512), 3);
    add_background_object(create_fdhangarwall1_3392(5376, 384), 3);
    add_background_object(create_fdhangarfloor6_3400(5376, 512), 3);
    add_background_object(create_fdhangarfloor6_3400(5440, 512), 3);
    add_background_object(create_fdhangarwall1_3392(5248, 256), 3);
    add_background_object(create_fdhangarwall1_3392(5376, 256), 3);
    add_background_object(create_fdhangarwall1_3392(5248, 128), 3);
    add_background_object(create_fdhangarwall1_3392(5376, 128), 3);
    add_background_object(create_fdhangarwall1_3392(5248, 0), 3);
    add_background_object(create_fdhangarwall1_3392(5376, 0), 3);
    add_background_object(create_fdhangarfloor9_3402(5504, 512), 3);
    add_background_object(create_fdhangarfloor4_3390(5504, 448), 3);
    add_background_object(create_fdhangarfloor4_3390(5504, 384), 3);
    add_background_object(create_fdhangarfloor4_3390(5504, 320), 3);
    add_background_object(create_fdhangarfloor4_3390(5504, 256), 3);
    add_background_object(create_fdhangarfloor4_3390(5504, 192), 3);
    add_background_object(create_fdhangarfloor4_3390(5504, 128), 3);
    add_background_object(create_fdhangarfloor4_3390(5504, 64), 3);
    add_background_object(create_fdhangarfloor4_3390(5504, 0), 3);
    add_background_object(create_fdhangarfloor10_3403(5728, 864), 3);
    add_background_object(create_fdhangarfloor3_3401(5728, 832), 3);
    add_background_object(create_fdhangarfloor1_3396(5760, 832), 3);
    add_background_object(create_fdhangarfloor1_3396(5888, 832), 3);
    add_background_object(create_fdhangarfloor6_3400(5760, 864), 3);
    add_background_object(create_fdhangarfloor6_3400(5824, 864), 3);
    add_background_object(create_fdhangarfloor6_3400(5888, 864), 3);
    add_background_object(create_fdhangarfloor6_3400(5952, 864), 3);
    add_background_object(create_fdhangarwall1_3392(5760, 384), 3);
    add_background_object(create_fdhangarwall1_3392(5888, 384), 3);
    add_background_object(create_fdhangarwall1_3392(5760, 256), 3);
    add_background_object(create_fdhangarwall1_3392(5888, 256), 3);
    add_background_object(create_fdhangarwall1_3392(5760, 128), 3);
    add_background_object(create_fdhangarwall1_3392(5888, 128), 3);
    add_background_object(create_fdhangarwall1_3392(5760, 0), 3);
    add_background_object(create_fdhangarwall1_3392(5888, 0), 3);
    add_background_object(create_fdhangarfloor10_3403(5728, 512), 3);
    add_background_object(create_fdhangarfloor8_3394(5728, 320), 3);
    add_background_object(create_fdhangarfloor8_3394(5728, 256), 3);
    add_background_object(create_fdhangarfloor8_3394(5728, 448), 3);
    add_background_object(create_fdhangarfloor8_3394(5728, 384), 3);
    add_background_object(create_fdhangarfloor8_3394(5728, 192), 3);
    add_background_object(create_fdhangarfloor8_3394(5728, 128), 3);
    add_background_object(create_fdhangarfloor8_3394(5728, 64), 3);
    add_background_object(create_fdhangarfloor8_3394(5728, 0), 3);
    add_background_object(create_fdhangarfloor6_3400(5760, 512), 3);
    add_background_object(create_fdhangarfloor6_3400(5824, 512), 3);
    add_background_object(create_fdhangarfloor6_3400(5888, 512), 3);
    add_background_object(create_fdhangarfloor6_3400(5952, 512), 3);
    add_background_object(create_fdspiralsparktower_3405(4864, 768), 3);
    add_background_object(create_fdspiralsparktower_3405(4864, 800), 3);
    add_background_object(create_fdspiralsparktower_3405(4960, 800), 3);
    add_background_object(create_fdhangarfloor9_3402(6016, 512), 3);
    add_background_object(create_fdhangarfloor4_3390(6016, 448), 3);
    add_background_object(create_fdhangarfloor4_3390(6016, 384), 3);
    add_background_object(create_fdhangarfloor4_3390(6016, 320), 3);
    add_background_object(create_fdhangarfloor4_3390(6016, 256), 3);
    add_background_object(create_fdhangarfloor4_3390(6016, 192), 3);
    add_background_object(create_fdhangarfloor4_3390(6016, 128), 3);
    add_background_object(create_fdhangarfloor4_3390(6016, 64), 3);
    add_background_object(create_fdhangarfloor4_3390(6016, 0), 3);
    add_background_object(create_fdhangarfloor8_3394(6240, 320), 3);
    add_background_object(create_fdhangarfloor8_3394(6240, 256), 3);
    add_background_object(create_fdhangarfloor8_3394(6240, 448), 3);
    add_background_object(create_fdhangarfloor8_3394(6240, 384), 3);
    add_background_object(create_fdhangarfloor8_3394(6240, 192), 3);
    add_background_object(create_fdhangarfloor8_3394(6240, 128), 3);
    add_background_object(create_fdhangarfloor8_3394(6240, 64), 3);
    add_background_object(create_fdhangarfloor8_3394(6240, 0), 3);
    add_background_object(create_fdhangarwall1_3392(6272, 384), 3);
    add_background_object(create_fdhangarwall1_3392(6272, 256), 3);
    add_background_object(create_fdhangarwall1_3392(6272, 128), 3);
    add_background_object(create_fdhangarwall1_3392(6272, 0), 3);
    add_background_object(create_fdhangarfloor8_3394(6240, 576), 3);
    add_background_object(create_fdhangarfloor8_3394(6240, 512), 3);
    add_background_object(create_fdhangarwall1_3392(6272, 576), 3);
    add_background_object(create_fdhangarfloor8_3394(6240, 960), 3);
    add_background_object(create_fdhangarwall1_3392(6272, 960), 3);
    add_background_object(create_fdhangarfloor9_3402(6016, 864), 3);
    add_background_object(create_fdhangarfloor2_3397(6016, 832), 3);
    add_background_object(create_fdhangarfloor8_3394(6240, 1088), 3);
    add_background_object(create_fdhangarfloor8_3394(6240, 1024), 3);
    add_background_object(create_fdhangarfloor10_3403(6240, 1152), 3);
    add_background_object(create_fdhangarfloor6_3400(6304, 1088), 3);
    add_background_object(create_fdhangarfloor9_3402(6400, 1152), 3);
    add_background_object(create_fdhangarfloor2_3397(6016, 1344), 3);
    add_background_object(create_fdhangarfloor4_3390(6016, 1440), 3);
    add_background_object(create_fdhangarfloor4_3390(6016, 1568), 3);
    add_background_object(create_fdhangarfloor4_3390(6016, 1504), 3);
    add_background_object(create_fdhangarfloor4_3390(6016, 1696), 3);
    add_background_object(create_fdhangarfloor4_3390(6016, 1632), 3);
    add_background_object(create_fdhangarfloor4_3390(6016, 1824), 3);
    add_background_object(create_fdhangarfloor4_3390(6016, 1760), 3);
    add_background_object(create_fdhangarfloor4_3390(6016, 1952), 3);
    add_background_object(create_fdhangarfloor4_3390(6016, 1888), 3);
    add_background_object(create_fdhangarfloor4_3390(6016, 2080), 3);
    add_background_object(create_fdhangarfloor4_3390(6016, 2016), 3);
    add_background_object(create_fdhangarfloor4_3390(6016, 2208), 3);
    add_background_object(create_fdhangarfloor4_3390(6016, 2144), 3);
    add_background_object(create_fdhangarfloor4_3390(6016, 2336), 3);
    add_background_object(create_fdhangarfloor4_3390(6016, 2272), 3);
    add_background_object(create_fdhangarfloor4_3390(6016, 1376), 3);
    add_background_object(create_fdhangarfloor8_3394(6240, 1568), 3);
    add_background_object(create_fdhangarfloor8_3394(6240, 1504), 3);
    add_background_object(create_fdhangarfloor8_3394(6240, 1696), 3);
    add_background_object(create_fdhangarfloor8_3394(6240, 1632), 3);
    add_background_object(create_fdhangarfloor8_3394(6240, 1824), 3);
    add_background_object(create_fdhangarfloor8_3394(6240, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(6272, 1632), 3);
    add_background_object(create_fdhangarwall1_3392(6272, 1760), 3);
    add_background_object(create_fdhangarfloor8_3394(6240, 1952), 3);
    add_background_object(create_fdhangarfloor8_3394(6240, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(6272, 1888), 3);
    add_background_object(create_fdhangarfloor8_3394(6240, 2080), 3);
    add_background_object(create_fdhangarfloor8_3394(6240, 2016), 3);
    add_background_object(create_fdhangarfloor8_3394(6240, 2208), 3);
    add_background_object(create_fdhangarfloor8_3394(6240, 2144), 3);
    add_background_object(create_fdhangarwall1_3392(6272, 2016), 3);
    add_background_object(create_fdhangarwall1_3392(6272, 2144), 3);
    add_background_object(create_fdhangarfloor8_3394(6240, 2336), 3);
    add_background_object(create_fdhangarfloor8_3394(6240, 2272), 3);
    add_background_object(create_fdhangarwall1_3392(6272, 2272), 3);
    add_background_object(create_fdhangarfloor3_3401(6240, 1344), 3);
    add_background_object(create_fdhangarfloor8_3394(6240, 1440), 3);
    add_background_object(create_fdhangarfloor8_3394(6240, 1376), 3);
    add_background_object(create_fdhangarfloor1_3396(6272, 1344), 3);
    add_background_object(create_fdhangarwall1_3392(6272, 1440), 3);
    add_background_object(create_fdhangarwall2_3393(6272, 1376), 3);
    add_background_object(create_fdhangarwall2_3393(6272, 1568), 3);
    add_background_object(create_fdhangarfloor2_3397(6400, 1344), 3);
    add_background_object(create_fdhangarfloor4_3390(6400, 1440), 3);
    add_background_object(create_fdhangarfloor4_3390(6400, 1568), 3);
    add_background_object(create_fdhangarfloor4_3390(6400, 1504), 3);
    add_background_object(create_fdhangarfloor4_3390(6400, 1696), 3);
    add_background_object(create_fdhangarfloor4_3390(6400, 1632), 3);
    add_background_object(create_fdhangarfloor4_3390(6400, 1824), 3);
    add_background_object(create_fdhangarfloor4_3390(6400, 1760), 3);
    add_background_object(create_fdhangarfloor4_3390(6400, 1952), 3);
    add_background_object(create_fdhangarfloor4_3390(6400, 1888), 3);
    add_background_object(create_fdhangarfloor4_3390(6400, 2080), 3);
    add_background_object(create_fdhangarfloor4_3390(6400, 2016), 3);
    add_background_object(create_fdhangarfloor4_3390(6400, 2208), 3);
    add_background_object(create_fdhangarfloor4_3390(6400, 2144), 3);
    add_background_object(create_fdhangarfloor4_3390(6400, 2336), 3);
    add_background_object(create_fdhangarfloor4_3390(6400, 2272), 3);
    add_background_object(create_fdhangarfloor4_3390(6400, 1376), 3);
    add_background_object(create_fdhangarfloor4_3390(6400, 1088), 3);
    add_background_object(create_fdhangarfloor4_3390(6400, 1024), 3);
    add_background_object(create_fdhangarfloor4_3390(6400, 960), 3);
    add_background_object(create_fdhangarfloor4_3390(6400, 448), 3);
    add_background_object(create_fdhangarfloor4_3390(6400, 384), 3);
    add_background_object(create_fdhangarfloor4_3390(6400, 320), 3);
    add_background_object(create_fdhangarfloor4_3390(6400, 256), 3);
    add_background_object(create_fdhangarfloor4_3390(6400, 192), 3);
    add_background_object(create_fdhangarfloor4_3390(6400, 128), 3);
    add_background_object(create_fdhangarfloor4_3390(6400, 64), 3);
    add_background_object(create_fdhangarfloor4_3390(6400, 0), 3);
    add_background_object(create_fdhangarfloor4_3390(6400, 960), 3);
    add_background_object(create_fdhangarfloor4_3390(6400, 576), 3);
    add_background_object(create_fdhangarfloor4_3390(6400, 512), 3);
    add_background_object(create_fdhangarfloor8_3394(6624, 320), 3);
    add_background_object(create_fdhangarfloor8_3394(6624, 256), 3);
    add_background_object(create_fdhangarfloor8_3394(6624, 448), 3);
    add_background_object(create_fdhangarfloor8_3394(6624, 384), 3);
    add_background_object(create_fdhangarfloor8_3394(6624, 192), 3);
    add_background_object(create_fdhangarfloor8_3394(6624, 128), 3);
    add_background_object(create_fdhangarfloor8_3394(6624, 64), 3);
    add_background_object(create_fdhangarfloor8_3394(6624, 0), 3);
    add_background_object(create_fdhangarwall1_3392(6656, 384), 3);
    add_background_object(create_fdhangarwall1_3392(6656, 256), 3);
    add_background_object(create_fdhangarwall1_3392(6656, 128), 3);
    add_background_object(create_fdhangarwall1_3392(6656, 0), 3);
    add_background_object(create_fdhangarfloor8_3394(6624, 576), 3);
    add_background_object(create_fdhangarfloor8_3394(6624, 512), 3);
    add_background_object(create_fdhangarfloor8_3394(6624, 704), 3);
    add_background_object(create_fdhangarfloor8_3394(6624, 640), 3);
    add_background_object(create_fdhangarwall1_3392(6656, 640), 3);
    add_background_object(create_fdhangarwall1_3392(6656, 512), 3);
    add_background_object(create_fdhangarfloor8_3394(6624, 832), 3);
    add_background_object(create_fdhangarfloor8_3394(6624, 768), 3);
    add_background_object(create_fdhangarfloor8_3394(6624, 960), 3);
    add_background_object(create_fdhangarfloor8_3394(6624, 896), 3);
    add_background_object(create_fdhangarwall1_3392(6656, 960), 3);
    add_background_object(create_fdhangarwall1_3392(6656, 768), 3);
    add_background_object(create_fdhangarfloor8_3394(6624, 1088), 3);
    add_background_object(create_fdhangarfloor8_3394(6624, 1024), 3);
    add_background_object(create_fdhangarfloor10_3403(6624, 1152), 3);
    add_background_object(create_fdhangarfloor9_3402(6848, 1152), 3);
    add_background_object(create_fdhangarfloor8_3394(6624, 1568), 3);
    add_background_object(create_fdhangarfloor8_3394(6624, 1504), 3);
    add_background_object(create_fdhangarfloor8_3394(6624, 1696), 3);
    add_background_object(create_fdhangarfloor8_3394(6624, 1632), 3);
    add_background_object(create_fdhangarfloor8_3394(6624, 1824), 3);
    add_background_object(create_fdhangarfloor8_3394(6624, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(6656, 1632), 3);
    add_background_object(create_fdhangarwall1_3392(6656, 1760), 3);
    add_background_object(create_fdhangarfloor8_3394(6624, 1952), 3);
    add_background_object(create_fdhangarfloor8_3394(6624, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(6656, 1888), 3);
    add_background_object(create_fdhangarfloor8_3394(6624, 2080), 3);
    add_background_object(create_fdhangarfloor8_3394(6624, 2016), 3);
    add_background_object(create_fdhangarfloor8_3394(6624, 2208), 3);
    add_background_object(create_fdhangarfloor8_3394(6624, 2144), 3);
    add_background_object(create_fdhangarwall1_3392(6656, 2016), 3);
    add_background_object(create_fdhangarwall1_3392(6656, 2144), 3);
    add_background_object(create_fdhangarfloor8_3394(6624, 2336), 3);
    add_background_object(create_fdhangarfloor8_3394(6624, 2272), 3);
    add_background_object(create_fdhangarwall1_3392(6656, 2272), 3);
    add_background_object(create_fdhangarfloor3_3401(6624, 1344), 3);
    add_background_object(create_fdhangarfloor8_3394(6624, 1440), 3);
    add_background_object(create_fdhangarfloor8_3394(6624, 1376), 3);
    add_background_object(create_fdhangarfloor1_3396(6656, 1344), 3);
    add_background_object(create_fdhangarwall1_3392(6656, 1440), 3);
    add_background_object(create_fdhangarwall2_3393(6656, 1376), 3);
    add_background_object(create_fdhangarwall2_3393(6656, 1568), 3);
    add_background_object(create_fdhangarfloor2_3397(6784, 1344), 3);
    add_background_object(create_fdhangarfloor4_3390(6784, 1440), 3);
    add_background_object(create_fdhangarfloor4_3390(6784, 1568), 3);
    add_background_object(create_fdhangarfloor4_3390(6784, 1504), 3);
    add_background_object(create_fdhangarfloor4_3390(6784, 1696), 3);
    add_background_object(create_fdhangarfloor4_3390(6784, 1632), 3);
    add_background_object(create_fdhangarfloor4_3390(6784, 1824), 3);
    add_background_object(create_fdhangarfloor4_3390(6784, 1760), 3);
    add_background_object(create_fdhangarfloor4_3390(6784, 1952), 3);
    add_background_object(create_fdhangarfloor4_3390(6784, 1888), 3);
    add_background_object(create_fdhangarfloor4_3390(6784, 2080), 3);
    add_background_object(create_fdhangarfloor4_3390(6784, 2016), 3);
    add_background_object(create_fdhangarfloor4_3390(6784, 2208), 3);
    add_background_object(create_fdhangarfloor4_3390(6784, 2144), 3);
    add_background_object(create_fdhangarfloor4_3390(6784, 2336), 3);
    add_background_object(create_fdhangarfloor4_3390(6784, 2272), 3);
    add_background_object(create_fdhangarfloor4_3390(6784, 1376), 3);
    add_background_object(create_fdhangarfloor4_3390(6848, 1088), 3);
    add_background_object(create_fdhangarfloor4_3390(6848, 1024), 3);
    add_background_object(create_fdhangarfloor4_3390(6784, 448), 3);
    add_background_object(create_fdhangarfloor4_3390(6784, 384), 3);
    add_background_object(create_fdhangarfloor4_3390(6784, 320), 3);
    add_background_object(create_fdhangarfloor4_3390(6784, 256), 3);
    add_background_object(create_fdhangarfloor4_3390(6784, 192), 3);
    add_background_object(create_fdhangarfloor4_3390(6784, 128), 3);
    add_background_object(create_fdhangarfloor4_3390(6784, 64), 3);
    add_background_object(create_fdhangarfloor4_3390(6784, 0), 3);
    add_background_object(create_fdhangarfloor4_3390(6848, 960), 3);
    add_background_object(create_fdhangarfloor4_3390(6784, 896), 3);
    add_background_object(create_fdhangarfloor4_3390(6784, 832), 3);
    add_background_object(create_fdhangarfloor4_3390(6784, 768), 3);
    add_background_object(create_fdhangarfloor4_3390(6784, 704), 3);
    add_background_object(create_fdhangarfloor4_3390(6784, 640), 3);
    add_background_object(create_fdhangarfloor4_3390(6784, 576), 3);
    add_background_object(create_fdhangarfloor4_3390(6784, 512), 3);
    add_background_object(create_tblongrailing2_2689(6008, 1184), 3);
    add_background_object(create_tblongrailing3_2690(6272, 1184), 3);
    add_background_object(create_tblongrailing_2707(6080, 1232), 3);
    add_background_object(create_tblongrailing_2707(6144, 1232), 3);
    add_background_object(create_tblongrailing_2707(6208, 1232), 3);
    add_background_object(create_tblongrailing_2707(6016, 1232), 3);
    add_background_object(create_tblongrailing2_2689(6392, 1184), 3);
    add_background_object(create_tblongrailing3_2690(6656, 1184), 3);
    add_background_object(create_tblongrailing_2707(6464, 1232), 3);
    add_background_object(create_tblongrailing_2707(6528, 1232), 3);
    add_background_object(create_tblongrailing_2707(6592, 1232), 3);
    add_background_object(create_tblongrailing_2707(6400, 1232), 3);
    add_background_object(create_tblongrailing_2707(6280, 1232), 3);
    add_background_object(create_tblongrailing_2707(6328, 1232), 3);
    add_background_object(create_fdhangarfloor7_3399(6368, 1152), 3);
    add_background_object(create_fdhangarfloor5_3398(6272, 1152), 3);
    add_background_object(create_fdhangarfloor8_3394(6368, 1088), 3);
    add_background_object(create_fdhangarfloor4_3390(6272, 1088), 3);
    add_background_object(create_fdhangarfloor3_3401(6272, 1088), 3);
    add_background_object(create_fdhangarfloor2_3397(6368, 1088), 3);
    add_background_object(create_tblongrailing2_2689(6008, 1120), 3);
    add_background_object(create_tblongrailing2_2689(6008, 1056), 3);
    add_background_object(create_tblongrailing2_2689(6008, 992), 3);
    add_background_object(create_tblongrailing2_2689(6008, 928), 3);
    add_background_object(create_fdhangarwall1_3392(4864, 1632), 3);
    add_background_object(create_fdhangarwall1_3392(4864, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(4864, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(4864, 2016), 3);
    add_background_object(create_fdhangarwall1_3392(4864, 2144), 3);
    add_background_object(create_fdhangarwall1_3392(4864, 2272), 3);
    add_background_object(create_fdhangarwall1_3392(4992, 1632), 3);
    add_background_object(create_fdhangarwall1_3392(4992, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(4992, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(4992, 2016), 3);
    add_background_object(create_fdhangarwall1_3392(4992, 2144), 3);
    add_background_object(create_fdhangarwall1_3392(4992, 2272), 3);
    add_background_object(create_tblongrailing_2707(6664, 1232), 3);
    add_background_object(create_tblongrailing_2707(6776, 1232), 3);
    add_background_object(create_tblongrailing3_2690(6840, 1184), 3);
    add_background_object(create_fdhangarfloor6_3400(6688, 1088), 3);
    add_background_object(create_fdhangarwall2_3393(6656, 896), 3);
    add_background_object(create_fdhangarfloor7_3399(6816, 1152), 3);
    add_background_object(create_fdhangarfloor5_3398(6656, 1152), 3);
    add_background_object(create_fdhangarfloor8_3394(6816, 1088), 3);
    add_background_object(create_fdhangarfloor4_3390(6656, 1088), 3);
    add_background_object(create_fdhangarfloor3_3401(6656, 1088), 3);
    add_background_object(create_fdhangarfloor2_3397(6816, 1088), 3);
    add_background_object(create_fdhangarfloor9_3402(6400, 704), 3);
    add_background_object(create_fdhangarfloor10_3403(6240, 704), 3);
    add_background_object(create_fdhangarfloor6_3400(6272, 704), 3);
    add_background_object(create_fdhangarfloor6_3400(6336, 704), 3);
    add_background_object(create_fdhangarfloor2_3397(6400, 928), 3);
    add_background_object(create_fdhangarfloor3_3401(6240, 928), 3);
    add_background_object(create_fdhangarfloor1_3396(6272, 928), 3);
    add_background_object(create_fdhangarfloor8_3394(6240, 640), 3);
    add_background_object(create_fdhangarfloor4_3390(6400, 640), 3);
    add_background_object(create_fdhangarwall2_3393(6272, 512), 3);
    add_background_object(create_fdhangarfloor6_3400(6752, 1088), 3);
    add_background_object(create_tblongrailing_2707(6720, 1232), 3);
    add_background_object(create_fdhangarfloor8_3394(6816, 1504), 3);
    add_background_object(create_fdhangarfloor3_3401(6816, 1344), 3);
    add_background_object(create_fdhangarfloor8_3394(6816, 1440), 3);
    add_background_object(create_fdhangarfloor8_3394(6816, 1376), 3);
    add_background_object(create_fdhangarfloor8_3394(6816, 1632), 3);
    add_background_object(create_fdhangarfloor8_3394(6816, 1568), 3);
    add_background_object(create_fdhangarfloor8_3394(6816, 1824), 3);
    add_background_object(create_fdhangarfloor8_3394(6816, 1760), 3);
    add_background_object(create_fdhangarfloor8_3394(6816, 1696), 3);
    add_background_object(create_fdhangarfloor8_3394(6816, 1952), 3);
    add_background_object(create_fdhangarfloor8_3394(6816, 1888), 3);
    add_background_object(create_fdhangarfloor8_3394(6816, 2144), 3);
    add_background_object(create_fdhangarfloor8_3394(6816, 2080), 3);
    add_background_object(create_fdhangarfloor8_3394(6816, 2016), 3);
    add_background_object(create_fdhangarfloor8_3394(6816, 2272), 3);
    add_background_object(create_fdhangarfloor8_3394(6816, 2208), 3);
    add_background_object(create_fdhangarfloor8_3394(6816, 2336), 3);
    add_background_object(create_fdhangarwall1_3392(6848, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(6848, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(6848, 2016), 3);
    add_background_object(create_fdhangarwall1_3392(6848, 2144), 3);
    add_background_object(create_fdhangarwall1_3392(6848, 2272), 3);
    add_background_object(create_fdhangarwall1_3392(6848, 1504), 3);
    add_background_object(create_fdhangarwall1_3392(6848, 1632), 3);
    add_background_object(create_fdhangarwall4_3395(6848, 1376), 3);
    add_background_object(create_fdhangarfloor12_3407(6848, 1344), 3);
    add_background_object(create_fdhangarfloor12_3407(6912, 1408), 3);
    add_background_object(create_fdhangarwall1_3392(6976, 1632), 3);
    add_background_object(create_fdhangarwall1_3392(6976, 1760), 3);
    add_background_object(create_fdhangarwall4_3395(6976, 1504), 3);
    add_background_object(create_fdhangarfloor12_3407(6976, 1472), 3);
    add_background_object(create_fdhangarfloor12_3407(7040, 1536), 3);
    add_background_object(create_fdhangarwall1_3392(7104, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(7104, 1888), 3);
    add_background_object(create_fdhangarwall4_3395(7104, 1632), 3);
    add_background_object(create_fdhangarfloor12_3407(7104, 1600), 3);
    add_background_object(create_fdhangarfloor12_3407(7168, 1664), 3);
    add_background_object(create_fdhangarwall1_3392(6976, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(7232, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(7360, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(7360, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(7232, 1888), 3);
    add_background_object(create_fdhangarfloor1_3396(7232, 1728), 3);
    add_background_object(create_fdhangarfloor1_3396(7360, 1728), 3);
    add_background_object(create_fdhangarfloor2_3397(6848, 928), 3);
    add_background_object(create_fdhangarfloor11_3404(6784, 928), 3);
    add_background_object(create_fdhangarwall3_3389(6784, 960), 3);
    add_background_object(create_fdhangarfloor6_3400(2688, 480), 3);
    add_background_object(create_fdhangarfloor6_3400(2624, 480), 3);
    add_background_object(create_fdhangarwall1_3392(2688, 352), 3);
    add_background_object(create_fdhangarwall1_3392(2688, 224), 3);
    add_background_object(create_fdhangarwall1_3392(2688, 96), 3);
    add_background_object(create_fdhangarwall1_3392(2688, -32), 3);
    add_background_object(create_fdhangarfloor6_3400(2624, 880), 3);
    add_background_object(create_fdhangarfloor6_3400(2688, 880), 3);
    add_background_object(create_fdhangarfloor1_3396(2624, 816), 3);
    add_background_object(create_fdhangarfloor1_3396(2656, 1024), 3);
    add_background_object(create_fdhangarfloor6_3400(2592, 1056), 3);
    add_background_object(create_fdhangarfloor6_3400(2656, 1056), 3);
    add_background_object(create_fdhangarfloor1_3396(2592, 1216), 3);
    add_background_object(create_fdhangarfloor6_3400(2656, 1248), 3);
    add_background_object(create_fdhangarfloor6_3400(2592, 1248), 3);
    add_background_object(create_fdhangarfloor1_3396(2592, 1408), 3);
    add_background_object(create_fdhangarwall1_3392(2688, 1504), 3);
    add_background_object(create_fdhangarwall1_3392(2688, 1632), 3);
    add_background_object(create_fdhangarwall1_3392(2688, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(2688, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(2688, 2016), 3);
    add_background_object(create_fdhangarwall1_3392(2688, 2144), 3);
    add_background_object(create_fdhangarwall1_3392(2688, 2272), 3);
    add_background_object(create_fdhangarfloor2_3397(5888, 1344), 3);
    add_background_object(create_fdhangarfloor3_3401(5984, 1344), 3);
    add_background_object(create_fdhangarfloor11_3404(5920, 1344), 3);
    add_background_object(create_fdhangarfloor10_3403(5728, 1760), 3);
    add_background_object(create_fdhangarfloor6_3400(5760, 1760), 3);
    add_background_object(create_fdhangarfloor6_3400(5824, 1760), 3);
    add_background_object(create_fdhangarfloor3_3401(5728, 2112), 3);
    add_background_object(create_fdhangarfloor1_3396(5760, 2112), 3);
    add_background_object(create_fdhangarfloor2_3397(5856, 1760), 3);
    add_background_object(create_fdhangarfloor8_3394(2560, 1632), 3);
    add_background_object(create_fdhangarfloor8_3394(2560, 1696), 3);
    add_background_object(create_fdhangarwall1_3392(6976, 2016), 3);
    add_background_object(create_fdhangarwall1_3392(6976, 2144), 3);
    add_background_object(create_fdhangarwall1_3392(6976, 2272), 3);
    add_background_object(create_fdhangarfloor2_3397(7488, 1728), 3);
    add_background_object(create_fdhangarfloor4_3390(7488, 1888), 3);
    add_background_object(create_fdhangarfloor4_3390(7488, 1952), 3);
    add_background_object(create_fdhangarfloor4_3390(7488, 1760), 3);
    add_background_object(create_fdhangarfloor4_3390(7488, 1824), 3);
    add_background_object(create_fdhangarwall1_3392(7104, 2016), 3);
    add_background_object(create_fdhangarwall1_3392(7104, 2144), 3);
    add_background_object(create_fdhangarwall1_3392(7232, 2016), 3);
    add_background_object(create_fdhangarwall1_3392(7360, 2016), 3);
    add_background_object(create_fdhangarwall1_3392(7360, 2144), 3);
    add_background_object(create_fdhangarwall1_3392(7232, 2144), 3);
    add_background_object(create_fdhangarfloor4_3390(7488, 2144), 3);
    add_background_object(create_fdhangarfloor4_3390(7488, 2208), 3);
    add_background_object(create_fdhangarfloor4_3390(7488, 2016), 3);
    add_background_object(create_fdhangarfloor4_3390(7488, 2080), 3);
    add_background_object(create_fdhangarwall1_3392(7104, 2272), 3);
    add_background_object(create_fdhangarwall1_3392(7232, 2272), 3);
    add_background_object(create_fdhangarwall1_3392(7360, 2272), 3);
    add_background_object(create_fdhangarfloor4_3390(7488, 2272), 3);
    add_background_object(create_fdhangarfloor4_3390(7488, 2336), 3);
    add_background_object(create_fdhangarwall1_3392(8128, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(8256, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(8256, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(8128, 1888), 3);
    add_background_object(create_fdhangarfloor1_3396(8128, 1728), 3);
    add_background_object(create_fdhangarwall1_3392(8128, 2016), 3);
    add_background_object(create_fdhangarwall1_3392(8256, 2016), 3);
    add_background_object(create_fdhangarwall1_3392(8256, 2144), 3);
    add_background_object(create_fdhangarwall1_3392(8128, 2144), 3);
    add_background_object(create_fdhangarwall1_3392(8128, 2272), 3);
    add_background_object(create_fdhangarwall1_3392(8256, 2272), 3);
    add_background_object(create_fdhangarfloor8_3394(8096, 1952), 3);
    add_background_object(create_fdhangarfloor8_3394(8096, 1888), 3);
    add_background_object(create_fdhangarfloor8_3394(8096, 2080), 3);
    add_background_object(create_fdhangarfloor8_3394(8096, 2016), 3);
    add_background_object(create_fdhangarfloor8_3394(8096, 2208), 3);
    add_background_object(create_fdhangarfloor8_3394(8096, 2144), 3);
    add_background_object(create_fdhangarfloor8_3394(8096, 2336), 3);
    add_background_object(create_fdhangarfloor8_3394(8096, 2272), 3);
    add_background_object(create_fdhangarfloor3_3401(8096, 1728), 3);
    add_background_object(create_fdhangarfloor8_3394(8096, 1824), 3);
    add_background_object(create_fdhangarfloor8_3394(8096, 1760), 3);
    add_background_object(create_fdhangarfloor8_3394(8096, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(7744, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(7744, 1888), 3);
    add_background_object(create_fdhangarfloor1_3396(7744, 1728), 3);
    add_background_object(create_fdhangarwall1_3392(7744, 2016), 3);
    add_background_object(create_fdhangarwall1_3392(7744, 2144), 3);
    add_background_object(create_fdhangarwall1_3392(7744, 2272), 3);
    add_background_object(create_fdhangarfloor8_3394(7712, 1952), 3);
    add_background_object(create_fdhangarfloor8_3394(7712, 1888), 3);
    add_background_object(create_fdhangarfloor8_3394(7712, 2080), 3);
    add_background_object(create_fdhangarfloor8_3394(7712, 2016), 3);
    add_background_object(create_fdhangarfloor8_3394(7712, 2208), 3);
    add_background_object(create_fdhangarfloor8_3394(7712, 2144), 3);
    add_background_object(create_fdhangarfloor8_3394(7712, 2336), 3);
    add_background_object(create_fdhangarfloor8_3394(7712, 2272), 3);
    add_background_object(create_fdhangarfloor3_3401(7712, 1728), 3);
    add_background_object(create_fdhangarfloor8_3394(7712, 1824), 3);
    add_background_object(create_fdhangarfloor8_3394(7712, 1760), 3);
    add_background_object(create_fdhangarfloor8_3394(7712, 1760), 3);
    add_background_object(create_fdhangarfloor2_3397(7872, 1728), 3);
    add_background_object(create_fdhangarfloor4_3390(7872, 1888), 3);
    add_background_object(create_fdhangarfloor4_3390(7872, 1952), 3);
    add_background_object(create_fdhangarfloor4_3390(7872, 1760), 3);
    add_background_object(create_fdhangarfloor4_3390(7872, 1824), 3);
    add_background_object(create_fdhangarfloor4_3390(7872, 2144), 3);
    add_background_object(create_fdhangarfloor4_3390(7872, 2208), 3);
    add_background_object(create_fdhangarfloor4_3390(7872, 2016), 3);
    add_background_object(create_fdhangarfloor4_3390(7872, 2080), 3);
    add_background_object(create_fdhangarfloor4_3390(7872, 2272), 3);
    add_background_object(create_fdhangarfloor4_3390(7872, 2336), 3);
    add_background_object(create_fdhangarfloor1_3396(7360, 1320), 3);
    add_background_object(create_fdhangarfloor2_3397(7488, 1320), 3);
    add_background_object(create_fdhangarfloor9_3402(7488, 1352), 3);
    add_background_object(create_fdhangarfloor6_3400(7424, 1352), 3);
    add_background_object(create_fdhangarfloor6_3400(7360, 1352), 3);
    add_background_object(create_fdhangarfloor1_3396(7232, 1320), 3);
    add_background_object(create_fdhangarfloor6_3400(7296, 1352), 3);
    add_background_object(create_fdhangarfloor6_3400(7232, 1352), 3);
    add_background_object(create_fdhangarfloor3_3401(7200, 1320), 3);
    add_background_object(create_fdhangarfloor7_3399(7200, 1352), 3);
    add_background_object(create_fdhangarfloor1_3396(8256, 1320), 3);
    add_background_object(create_fdhangarfloor2_3397(8384, 1320), 3);
    add_background_object(create_fdhangarfloor6_3400(8320, 1352), 3);
    add_background_object(create_fdhangarfloor6_3400(8256, 1352), 3);
    add_background_object(create_fdhangarfloor1_3396(8128, 1320), 3);
    add_background_object(create_fdhangarfloor6_3400(8192, 1352), 3);
    add_background_object(create_fdhangarfloor6_3400(8128, 1352), 3);
    add_background_object(create_fdhangarfloor3_3401(8096, 1320), 3);
    add_background_object(create_fdhangarfloor5_3398(8384, 1352), 3);
    add_background_object(create_fdhangarfloor10_3403(8096, 1352), 3);
    add_background_object(create_fdhangarwall1_3392(8512, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(8512, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(8384, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(8384, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(8448, 1632), 3);
    add_background_object(create_fdhangarfloor1_3396(8608, 1600), 3);
    add_background_object(create_fdhangarfloor1_3396(8480, 1600), 3);
    add_background_object(create_fdhangarfloor3_3401(8448, 1600), 3);
    add_background_object(create_fdhangarfloor8_3394(8448, 1696), 3);
    add_background_object(create_fdhangarfloor8_3394(8448, 1632), 3);
    add_background_object(create_fdhangarfloor1_3396(8256, 1728), 3);
    add_background_object(create_fdhangarcurve4_3411(8352, 1632), 3);
    add_background_object(create_fdhangarfloor9_3402(8448, 1728), 3);
    add_background_object(create_fdhangarfloor11_3404(8384, 1728), 3);
    add_background_object(create_fdhangarwall1_3392(8576, 1632), 3);
    add_background_object(create_fdhangarwall1_3392(8640, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(8640, 1888), 3);
    add_background_object(create_fdhangarfloor1_3396(8704, 1344), 3);
    add_background_object(create_fdhangarfloor6_3400(8768, 1376), 3);
    add_background_object(create_fdhangarfloor6_3400(8704, 1376), 3);
    add_background_object(create_fdhangarfloor1_3396(8576, 1344), 3);
    add_background_object(create_fdhangarfloor6_3400(8640, 1376), 3);
    add_background_object(create_fdhangarfloor6_3400(8576, 1376), 3);
    add_background_object(create_fdhangarfloor3_3401(8544, 1344), 3);
    add_background_object(create_fdhangarfloor7_3399(8544, 1376), 3);
    add_background_object(create_fdhangarwall1_3392(8704, 1632), 3);
    add_background_object(create_fdhangarfloor6_3400(8768, 1120), 3);
    add_background_object(create_fdhangarfloor6_3400(8704, 1120), 3);
    add_background_object(create_fdhangarfloor6_3400(8640, 1120), 3);
    add_background_object(create_fdhangarfloor6_3400(8576, 1120), 3);
    add_background_object(create_fdhangarfloor7_3399(8544, 1120), 3);
    add_background_object(create_fdhangarfloor8_3394(8544, 1056), 3);
    add_background_object(create_fdhangarfloor8_3394(8544, 992), 3);
    add_background_object(create_fdhangarwall1_3392(8576, 992), 3);
    add_background_object(create_fdhangarwall1_3392(8704, 992), 3);
    add_background_object(create_fdhangarfloor8_3394(8544, 928), 3);
    add_background_object(create_fdhangarfloor8_3394(8544, 864), 3);
    add_background_object(create_fdhangarwall1_3392(8576, 864), 3);
    add_background_object(create_fdhangarwall1_3392(8704, 864), 3);
    add_background_object(create_fdhangarfloor6_3400(8896, 1376), 3);
    add_background_object(create_fdhangarfloor6_3400(8896, 1120), 3);
    add_background_object(create_fdhangarwall1_3392(8832, 992), 3);
    add_background_object(create_fdhangarwall1_3392(8832, 864), 3);
    add_background_object(create_fdhangarfloor8_3394(8544, 800), 3);
    add_background_object(create_fdhangarfloor8_3394(8544, 736), 3);
    add_background_object(create_fdhangarwall1_3392(8576, 736), 3);
    add_background_object(create_fdhangarwall1_3392(8704, 736), 3);
    add_background_object(create_fdhangarwall1_3392(8832, 736), 3);
    add_background_object(create_fdhangarfloor2_3397(8832, 1120), 3);
    add_background_object(create_fdhangarfloor9_3402(8832, 1344), 3);
    add_background_object(create_fdhangarfloor8_3394(8832, 1280), 3);
    add_background_object(create_fdhangarfloor8_3394(8832, 1216), 3);
    add_background_object(create_fdhangarfloor8_3394(8832, 1152), 3);
    add_background_object(create_fdhangarfloor4_3390(8864, 1152), 3);
    add_background_object(create_fdhangarfloor4_3390(8864, 1216), 3);
    add_background_object(create_fdhangarfloor4_3390(8864, 1280), 3);
    add_background_object(create_fdhangarfloor1_3396(8896, 1344), 3);
    add_background_object(create_fdhangarfloor3_3401(8864, 1120), 3);
    add_background_object(create_fdhangarfloor10_3403(8864, 1344), 3);
    add_background_object(create_fdhangarfloor2_3397(8832, 1376), 3);
    add_background_object(create_fdhangarfloor8_3394(8832, 1536), 3);
    add_background_object(create_fdhangarfloor8_3394(8832, 1472), 3);
    add_background_object(create_fdhangarfloor8_3394(8832, 1408), 3);
    add_background_object(create_fdhangarfloor4_3390(8864, 1408), 3);
    add_background_object(create_fdhangarfloor4_3390(8864, 1472), 3);
    add_background_object(create_fdhangarfloor4_3390(8864, 1536), 3);
    add_background_object(create_fdhangarfloor3_3401(8864, 1376), 3);
    add_background_object(create_fdhangarfloor11_3404(8736, 1600), 3);
    add_background_object(create_fdhangarfloor2_3397(8800, 1600), 3);
    add_background_object(create_fdhangarfloor3_3401(8896, 1600), 3);
    add_background_object(create_fdhangarfloor8_3394(8832, 1728), 3);
    add_background_object(create_fdhangarfloor8_3394(8832, 1664), 3);
    add_background_object(create_fdhangarfloor8_3394(8832, 1600), 3);
    add_background_object(create_fdhangarfloor4_3390(8864, 1600), 3);
    add_background_object(create_fdhangarfloor4_3390(8864, 1664), 3);
    add_background_object(create_fdhangarfloor4_3390(8864, 1728), 3);
    add_background_object(create_fdhangarfloor4_3390(8800, 1632), 3);
    add_background_object(create_fdhangarfloor4_3390(8800, 1696), 3);
    add_background_object(create_fdhangarfloor4_3390(8800, 1760), 3);
    add_background_object(create_fdhangarfloor8_3394(8896, 1760), 3);
    add_background_object(create_fdhangarfloor8_3394(8896, 1696), 3);
    add_background_object(create_fdhangarfloor8_3394(8896, 1632), 3);
    add_background_object(create_fdhangarfloor8_3394(8832, 1856), 3);
    add_background_object(create_fdhangarfloor8_3394(8832, 1792), 3);
    add_background_object(create_fdhangarfloor4_3390(8864, 1792), 3);
    add_background_object(create_fdhangarfloor4_3390(8864, 1856), 3);
    add_background_object(create_fdhangarfloor4_3390(8800, 1824), 3);
    add_background_object(create_fdhangarfloor4_3390(8800, 1888), 3);
    add_background_object(create_fdhangarfloor8_3394(8896, 1888), 3);
    add_background_object(create_fdhangarfloor8_3394(8896, 1824), 3);
    add_background_object(create_fdhangarfloor4_3390(8800, 1952), 3);
    add_background_object(create_fdhangarfloor8_3394(8832, 1920), 3);
    add_background_object(create_fdhangarfloor4_3390(8864, 1920), 3);
    add_background_object(create_fdhangarfloor8_3394(8896, 1952), 3);
    add_background_object(create_fdhangarfloor1_3396(9024, 1344), 3);
    add_background_object(create_fdhangarfloor6_3400(8960, 1376), 3);
    add_background_object(create_fdhangarfloor6_3400(9024, 1376), 3);
    add_background_object(create_fdhangarfloor6_3400(9088, 1376), 3);
    add_background_object(create_fdhangarfloor6_3400(9024, 1120), 3);
    add_background_object(create_fdhangarfloor6_3400(8960, 1120), 3);
    add_background_object(create_fdhangarwall1_3392(8960, 992), 3);
    add_background_object(create_fdhangarwall1_3392(8960, 864), 3);
    add_background_object(create_fdhangarwall1_3392(8960, 736), 3);
    add_background_object(create_fdhangarfloor6_3400(9152, 1120), 3);
    add_background_object(create_fdhangarfloor6_3400(9088, 1120), 3);
    add_background_object(create_fdhangarwall1_3392(9088, 992), 3);
    add_background_object(create_fdhangarwall1_3392(9088, 864), 3);
    add_background_object(create_fdhangarwall1_3392(9088, 736), 3);
    add_background_object(create_fdhangarfloor2_3397(8896, 1312), 3);
    add_background_object(create_fdhangarfloor11_3404(8928, 1312), 3);
    add_background_object(create_fdhangarfloor6_3400(9152, 1376), 3);
    add_background_object(create_fdhangarfloor1_3396(9152, 1344), 3);
    add_background_object(create_fdhangarfloor1_3396(9280, 1344), 3);
    add_background_object(create_fdhangarfloor6_3400(9216, 1376), 3);
    add_background_object(create_fdhangarfloor6_3400(9280, 1376), 3);
    add_background_object(create_fdhangarfloor6_3400(9344, 1376), 3);
    add_background_object(create_fdhangarfloor6_3400(9280, 1120), 3);
    add_background_object(create_fdhangarfloor6_3400(9216, 1120), 3);
    add_background_object(create_fdhangarwall1_3392(9216, 992), 3);
    add_background_object(create_fdhangarwall1_3392(9216, 864), 3);
    add_background_object(create_fdhangarwall1_3392(9216, 736), 3);
    add_background_object(create_fdhangarfloor1_3396(9280, 1600), 3);
    add_background_object(create_fdhangarfloor6_3400(9344, 1120), 3);
    add_background_object(create_fdhangarwall1_3392(9344, 992), 3);
    add_background_object(create_fdhangarwall1_3392(9344, 864), 3);
    add_background_object(create_fdhangarwall1_3392(9344, 736), 3);
    add_background_object(create_fdhangarwall1_3392(9280, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(9280, 1888), 3);
    add_background_object(create_fdhangarfloor2_3397(9408, 1120), 3);
    add_background_object(create_fdhangarfloor9_3402(9408, 1344), 3);
    add_background_object(create_fdhangarfloor8_3394(9408, 1280), 3);
    add_background_object(create_fdhangarfloor8_3394(9408, 1216), 3);
    add_background_object(create_fdhangarfloor8_3394(9408, 1152), 3);
    add_background_object(create_fdhangarfloor4_3390(9440, 1152), 3);
    add_background_object(create_fdhangarfloor4_3390(9440, 1216), 3);
    add_background_object(create_fdhangarfloor4_3390(9440, 1280), 3);
    add_background_object(create_fdhangarfloor3_3401(9440, 1120), 3);
    add_background_object(create_fdhangarfloor10_3403(9440, 1344), 3);
    add_background_object(create_fdhangarwall1_3392(9408, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(9408, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(9536, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(9536, 1888), 3);
    add_background_object(create_fdhangarfloor3_3401(9376, 1312), 3);
    add_background_object(create_fdhangarfloor11_3404(9056, 1312), 3);
    add_background_object(create_fdhangarfloor11_3404(9184, 1312), 3);
    add_background_object(create_fdhangarfloor11_3404(9312, 1312), 3);
    add_background_object(create_fdhangarfloor2_3397(8896, 1568), 3);
    add_background_object(create_fdhangarfloor11_3404(8928, 1568), 3);
    add_background_object(create_fdhangarfloor11_3404(9056, 1568), 3);
    add_background_object(create_fdhangarfloor11_3404(9184, 1568), 3);
    add_background_object(create_fdhangarfloor11_3404(9312, 1568), 3);
    add_background_object(create_fdhangarfloor1_3396(9472, 1600), 3);
    add_background_object(create_fdhangarfloor6_3400(9472, 1376), 3);
    add_background_object(create_fdhangarfloor6_3400(9472, 1120), 3);
    add_background_object(create_fdhangarfloor1_3396(9472, 1344), 3);
    add_background_object(create_fdhangarfloor1_3396(9600, 1344), 3);
    add_background_object(create_fdhangarfloor6_3400(9536, 1376), 3);
    add_background_object(create_fdhangarfloor6_3400(9600, 1376), 3);
    add_background_object(create_fdhangarfloor6_3400(9664, 1376), 3);
    add_background_object(create_fdhangarfloor6_3400(9600, 1120), 3);
    add_background_object(create_fdhangarfloor6_3400(9536, 1120), 3);
    add_background_object(create_fdhangarfloor6_3400(9728, 1120), 3);
    add_background_object(create_fdhangarfloor6_3400(9664, 1120), 3);
    add_background_object(create_fdhangarfloor2_3397(9472, 1312), 3);
    add_background_object(create_fdhangarfloor11_3404(9504, 1312), 3);
    add_background_object(create_fdhangarfloor6_3400(9728, 1376), 3);
    add_background_object(create_fdhangarfloor1_3396(9728, 1344), 3);
    add_background_object(create_fdhangarfloor1_3396(9856, 1344), 3);
    add_background_object(create_fdhangarfloor6_3400(9792, 1376), 3);
    add_background_object(create_fdhangarfloor6_3400(9856, 1376), 3);
    add_background_object(create_fdhangarfloor6_3400(9920, 1376), 3);
    add_background_object(create_fdhangarfloor6_3400(9856, 1120), 3);
    add_background_object(create_fdhangarfloor6_3400(9792, 1120), 3);
    add_background_object(create_fdhangarfloor1_3396(9856, 1600), 3);
    add_background_object(create_fdhangarfloor6_3400(9920, 1120), 3);
    add_background_object(create_fdhangarfloor2_3397(9984, 1120), 3);
    add_background_object(create_fdhangarfloor9_3402(9984, 1344), 3);
    add_background_object(create_fdhangarfloor8_3394(9984, 1280), 3);
    add_background_object(create_fdhangarfloor8_3394(9984, 1216), 3);
    add_background_object(create_fdhangarfloor8_3394(9984, 1152), 3);
    add_background_object(create_fdhangarfloor4_3390(10016, 1152), 3);
    add_background_object(create_fdhangarfloor4_3390(10016, 1216), 3);
    add_background_object(create_fdhangarfloor4_3390(10016, 1280), 3);
    add_background_object(create_fdhangarfloor3_3401(10016, 1120), 3);
    add_background_object(create_fdhangarfloor10_3403(10016, 1344), 3);
    add_background_object(create_fdhangarfloor2_3397(9984, 1376), 3);
    add_background_object(create_fdhangarfloor3_3401(10016, 1376), 3);
    add_background_object(create_fdhangarfloor9_3402(9984, 1600), 3);
    add_background_object(create_fdhangarfloor10_3403(10016, 1600), 3);
    add_background_object(create_fdhangarfloor3_3401(9952, 1312), 3);
    add_background_object(create_fdhangarfloor11_3404(9632, 1312), 3);
    add_background_object(create_fdhangarfloor11_3404(9760, 1312), 3);
    add_background_object(create_fdhangarfloor11_3404(9888, 1312), 3);
    add_background_object(create_fdhangarfloor11_3404(9504, 1568), 3);
    add_background_object(create_fdhangarfloor8_3394(9984, 1536), 3);
    add_background_object(create_fdhangarfloor8_3394(9984, 1472), 3);
    add_background_object(create_fdhangarfloor8_3394(9984, 1408), 3);
    add_background_object(create_fdhangarfloor4_3390(10016, 1408), 3);
    add_background_object(create_fdhangarfloor4_3390(10016, 1472), 3);
    add_background_object(create_fdhangarfloor4_3390(10016, 1536), 3);
    add_background_object(create_fdhangarfloor3_3401(9952, 1568), 3);
    add_background_object(create_fdhangarfloor11_3404(9632, 1568), 3);
    add_background_object(create_fdhangarfloor11_3404(9760, 1568), 3);
    add_background_object(create_fdhangarfloor11_3404(9888, 1568), 3);
    add_background_object(create_fdhangarfloor1_3396(10048, 1600), 3);
    add_background_object(create_fdhangarfloor1_3396(10176, 1600), 3);
    add_background_object(create_fdhangarfloor6_3400(10048, 1376), 3);
    add_background_object(create_fdhangarfloor6_3400(10048, 1120), 3);
    add_background_object(create_fdhangarfloor1_3396(10048, 1344), 3);
    add_background_object(create_fdhangarfloor3_3401(10048, 1600), 3);
    add_background_object(create_fdhangarfloor1_3396(10304, 1600), 3);
    add_background_object(create_fdhangarfloor1_3396(10176, 1344), 3);
    add_background_object(create_fdhangarfloor6_3400(10112, 1376), 3);
    add_background_object(create_fdhangarfloor6_3400(10176, 1376), 3);
    add_background_object(create_fdhangarfloor6_3400(10240, 1376), 3);
    add_background_object(create_fdhangarfloor6_3400(10176, 1120), 3);
    add_background_object(create_fdhangarfloor6_3400(10112, 1120), 3);
    add_background_object(create_fdhangarfloor6_3400(10304, 1120), 3);
    add_background_object(create_fdhangarfloor6_3400(10240, 1120), 3);
    add_background_object(create_fdhangarfloor2_3397(10048, 1312), 3);
    add_background_object(create_fdhangarfloor11_3404(10080, 1312), 3);
    add_background_object(create_fdhangarfloor6_3400(10304, 1376), 3);
    add_background_object(create_fdhangarfloor1_3396(10304, 1344), 3);
    add_background_object(create_fdhangarfloor1_3396(10432, 1344), 3);
    add_background_object(create_fdhangarfloor6_3400(10368, 1376), 3);
    add_background_object(create_fdhangarfloor6_3400(10432, 1376), 3);
    add_background_object(create_fdhangarfloor6_3400(10496, 1376), 3);
    add_background_object(create_fdhangarfloor6_3400(10432, 1120), 3);
    add_background_object(create_fdhangarfloor6_3400(10368, 1120), 3);
    add_background_object(create_fdhangarfloor1_3396(10432, 1600), 3);
    add_background_object(create_fdhangarfloor6_3400(10496, 1120), 3);
    add_background_object(create_fdhangarfloor2_3397(10560, 1120), 3);
    add_background_object(create_fdhangarfloor9_3402(10560, 1344), 3);
    add_background_object(create_fdhangarfloor8_3394(10560, 1280), 3);
    add_background_object(create_fdhangarfloor8_3394(10560, 1216), 3);
    add_background_object(create_fdhangarfloor8_3394(10560, 1152), 3);
    add_background_object(create_fdhangarfloor4_3390(10592, 1120), 3);
    add_background_object(create_fdhangarfloor4_3390(10592, 1184), 3);
    add_background_object(create_fdhangarfloor4_3390(10592, 1248), 3);
    add_background_object(create_fdhangarfloor2_3397(10560, 1376), 3);
    add_background_object(create_fdhangarfloor9_3402(10560, 1600), 3);
    add_background_object(create_fdhangarfloor3_3401(10528, 1312), 3);
    add_background_object(create_fdhangarfloor11_3404(10464, 1312), 3);
    add_background_object(create_fdhangarfloor2_3397(10048, 1568), 3);
    add_background_object(create_fdhangarfloor11_3404(10080, 1568), 3);
    add_background_object(create_fdhangarfloor8_3394(10560, 1536), 3);
    add_background_object(create_fdhangarfloor8_3394(10560, 1472), 3);
    add_background_object(create_fdhangarfloor8_3394(10560, 1408), 3);
    add_background_object(create_fdhangarfloor4_3390(10592, 1376), 3);
    add_background_object(create_fdhangarfloor4_3390(10592, 1440), 3);
    add_background_object(create_fdhangarfloor4_3390(10592, 1504), 3);
    add_background_object(create_fdhangarfloor3_3401(10528, 1568), 3);
    add_background_object(create_fdhangarfloor11_3404(10464, 1568), 3);
    add_background_object(create_fdhangarwall1_3392(9664, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(9664, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(9792, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(9792, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(9920, 1632), 3);
    add_background_object(create_fdhangarwall1_3392(9920, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(9920, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(10048, 1632), 3);
    add_background_object(create_fdhangarwall1_3392(10048, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(10048, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(10176, 1632), 3);
    add_background_object(create_fdhangarwall1_3392(10176, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(10176, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(10304, 1632), 3);
    add_background_object(create_fdhangarwall1_3392(10304, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(10304, 1888), 3);
    add_background_object(create_fdhangarwall1_3392(10432, 1632), 3);
    add_background_object(create_fdhangarwall1_3392(10432, 1760), 3);
    add_background_object(create_fdhangarwall1_3392(10432, 1888), 3);
    add_background_object(create_fdhangarfloor4_3390(10592, 1312), 3);
    add_background_object(create_fdhangarfloor4_3390(10848, 1056), 3);
    add_background_object(create_fdhangarfloor4_3390(10592, 1568), 3);
    add_background_object(create_fdhangarwall1_3392(9472, 992), 3);
    add_background_object(create_fdhangarwall1_3392(9472, 864), 3);
    add_background_object(create_fdhangarwall1_3392(9472, 736), 3);
    add_background_object(create_fdhangarwall1_3392(9600, 992), 3);
    add_background_object(create_fdhangarwall1_3392(9600, 864), 3);
    add_background_object(create_fdhangarwall1_3392(9600, 736), 3);
    add_background_object(create_fdhangarwall1_3392(9728, 992), 3);
    add_background_object(create_fdhangarwall1_3392(9728, 864), 3);
    add_background_object(create_fdhangarwall1_3392(9728, 736), 3);
    add_background_object(create_fdhangarwall1_3392(9856, 992), 3);
    add_background_object(create_fdhangarwall1_3392(9856, 864), 3);
    add_background_object(create_fdhangarwall1_3392(9856, 736), 3);
    add_background_object(create_fdhangarwall1_3392(9984, 992), 3);
    add_background_object(create_fdhangarwall1_3392(9984, 864), 3);
    add_background_object(create_fdhangarwall1_3392(9984, 736), 3);
    add_background_object(create_fdhangarwall1_3392(10112, 992), 3);
    add_background_object(create_fdhangarwall1_3392(10112, 864), 3);
    add_background_object(create_fdhangarwall1_3392(10112, 736), 3);
    add_background_object(create_fdhangarwall1_3392(10240, 992), 3);
    add_background_object(create_fdhangarwall1_3392(10240, 864), 3);
    add_background_object(create_fdhangarwall1_3392(10240, 736), 3);
    add_background_object(create_fdhangarwall1_3392(10368, 992), 3);
    add_background_object(create_fdhangarwall1_3392(10368, 864), 3);
    add_background_object(create_fdhangarwall1_3392(10368, 736), 3);
    add_background_object(create_fdhangarfloor8_3394(9888, 1664), 3);
    add_background_object(create_fdhangarfloor1_3396(9792, 1728), 3);
    add_background_object(create_fdhangarfloor6_3400(9856, 1632), 3);
    add_background_object(create_fdhangarfloor6_3400(9792, 1632), 3);
    add_background_object(create_fdhangarfloor1_3396(9664, 1728), 3);
    add_background_object(create_fdhangarfloor6_3400(9728, 1632), 3);
    add_background_object(create_fdhangarfloor6_3400(9664, 1632), 3);
    add_background_object(create_fdhangarfloor1_3396(9536, 1728), 3);
    add_background_object(create_fdhangarfloor6_3400(9600, 1632), 3);
    add_background_object(create_fdhangarfloor6_3400(9536, 1632), 3);
    add_background_object(create_fdhangarfloor1_3396(9408, 1728), 3);
    add_background_object(create_fdhangarfloor6_3400(9472, 1632), 3);
    add_background_object(create_fdhangarfloor6_3400(9408, 1632), 3);
    add_background_object(create_fdhangarfloor1_3396(9280, 1728), 3);
    add_background_object(create_fdhangarfloor6_3400(9344, 1632), 3);
    add_background_object(create_fdhangarfloor6_3400(9280, 1632), 3);
    add_background_object(create_fdhangarfloor1_3396(9152, 1728), 3);
    add_background_object(create_fdhangarfloor6_3400(9216, 1632), 3);
    add_background_object(create_fdhangarfloor6_3400(9152, 1632), 3);
    add_background_object(create_fdhangarfloor2_3397(9888, 1632), 3);
    add_background_object(create_fdhangarfloor4_3390(9152, 1664), 3);
    add_background_object(create_fdhangarfloor3_3401(9152, 1632), 3);
    add_background_object(create_fdhangarfloor10_3403(10208, 1248), 3);
    add_background_object(create_fdhangarfloor1_3396(10240, 1216), 3);
    add_background_object(create_fdhangarfloor9_3402(10368, 1248), 3);
    add_background_object(create_fdhangarfloor6_3400(10240, 1248), 3);
    add_background_object(create_fdhangarfloor6_3400(10304, 1248), 3);
    add_background_object(create_fdhangarfloor2_3397(10368, 1216), 3);
    add_background_object(create_fdhangarfloor3_3401(10208, 1216), 3);
    add_background_object(create_fdhangarfloor10_3403(10208, 1504), 3);
    add_background_object(create_fdhangarfloor1_3396(10240, 1472), 3);
    add_background_object(create_fdhangarfloor9_3402(10368, 1504), 3);
    add_background_object(create_fdhangarfloor6_3400(10240, 1504), 3);
    add_background_object(create_fdhangarfloor6_3400(10304, 1504), 3);
    add_background_object(create_fdhangarfloor2_3397(10368, 1472), 3);
    add_background_object(create_fdhangarfloor3_3401(10208, 1472), 3);
    add_background_object(create_fdhangarfloor2_3397(9600, 1312), 3);
    add_background_object(create_fdhangarfloor9_3402(9568, 1344), 3);
    add_background_object(create_fdhangarfloor10_3403(9600, 1344), 3);
    add_background_object(create_fdhangarfloor3_3401(9568, 1312), 3);
    add_background_object(create_fdhangarfloor2_3397(9728, 1312), 3);
    add_background_object(create_fdhangarfloor9_3402(9696, 1344), 3);
    add_background_object(create_fdhangarfloor10_3403(9728, 1344), 3);
    add_background_object(create_fdhangarfloor3_3401(9696, 1312), 3);
    add_background_object(create_fdhangarfloor2_3397(9856, 1312), 3);
    add_background_object(create_fdhangarfloor9_3402(9824, 1344), 3);
    add_background_object(create_fdhangarfloor10_3403(9856, 1344), 3);
    add_background_object(create_fdhangarfloor3_3401(9824, 1312), 3);
    add_background_object(create_fdhangarfloor2_3397(9152, 1312), 3);
    add_background_object(create_fdhangarfloor9_3402(9120, 1344), 3);
    add_background_object(create_fdhangarfloor10_3403(9152, 1344), 3);
    add_background_object(create_fdhangarfloor3_3401(9120, 1312), 3);
    add_background_object(create_fdhangarfloor2_3397(9152, 1568), 3);
    add_background_object(create_fdhangarfloor9_3402(9120, 1600), 3);
    add_background_object(create_fdhangarfloor10_3403(9152, 1600), 3);
    add_background_object(create_fdhangarfloor3_3401(9120, 1568), 3);
    add_background_object(create_fdhangarfloor2_3397(9728, 1568), 3);
    add_background_object(create_fdhangarfloor9_3402(9696, 1600), 3);
    add_background_object(create_fdhangarfloor10_3403(9728, 1600), 3);
    add_background_object(create_fdhangarfloor3_3401(9696, 1568), 3);
    add_background_object(create_fdhangarfloor10_3403(4832, 512), 3);
    add_background_object(create_fdhangarfloor2_3397(4832, 448), 3);
    add_background_object(create_fdhangarfloor10_3403(2528, 880), 3);
    add_background_object(create_fdhangarfloor4_3390(10848, 928), 3);
    add_background_object(create_fdhangarfloor4_3390(10848, 992), 3);
    add_background_object(create_fdhangarfloor4_3390(10848, 864), 3);
    add_background_object(create_fdhangarfloor4_3390(10848, 800), 3);
    add_background_object(create_fdhangarfloor4_3390(10848, 736), 3);
    add_background_object(create_fdhangarwall1_3392(10752, 608), 3);
    add_background_object(create_fdhangarwall1_3392(10752, 480), 3);
    add_background_object(create_fdhangarwall1_3392(10752, 352), 3);
    add_background_object(create_fdhangarwall1_3392(10240, 608), 3);
    add_background_object(create_fdhangarwall1_3392(10240, 480), 3);
    add_background_object(create_fdhangarwall1_3392(10240, 352), 3);
    add_background_object(create_fdhangarwall1_3392(10368, 608), 3);
    add_background_object(create_fdhangarwall1_3392(10368, 480), 3);
    add_background_object(create_fdhangarwall1_3392(10368, 352), 3);
    add_background_object(create_fdhangarfloor4_3390(10848, 672), 3);
    add_background_object(create_fdhangarfloor4_3390(10848, 608), 3);
    add_background_object(create_fdhangarfloor4_3390(10848, 544), 3);
    add_background_object(create_fdhangarfloor4_3390(10848, 480), 3);
    add_background_object(create_fdhangarfloor4_3390(10848, 416), 3);
    add_background_object(create_fdhangarfloor4_3390(10848, 352), 3);
    add_background_object(create_fdhangarwall1_3392(10752, 224), 3);
    add_background_object(create_fdhangarwall1_3392(10752, 96), 3);
    add_background_object(create_fdhangarwall1_3392(10752, -32), 3);
    add_background_object(create_fdhangarwall1_3392(10240, 224), 3);
    add_background_object(create_fdhangarwall1_3392(10240, 96), 3);
    add_background_object(create_fdhangarwall1_3392(10240, -32), 3);
    add_background_object(create_fdhangarwall1_3392(10368, 224), 3);
    add_background_object(create_fdhangarwall1_3392(10368, 96), 3);
    add_background_object(create_fdhangarwall1_3392(10368, -32), 3);
    add_background_object(create_fdhangarfloor4_3390(10848, 288), 3);
    add_background_object(create_fdhangarfloor4_3390(10848, 224), 3);
    add_background_object(create_fdhangarfloor4_3390(10848, 160), 3);
    add_background_object(create_fdhangarfloor4_3390(10848, 96), 3);
    add_background_object(create_fdhangarfloor4_3390(10848, 32), 3);
    add_background_object(create_fdhangarfloor4_3390(10848, -32), 3);
    add_background_object(create_fddownhillplatformrail_3409(10816, 1472), 3);
    add_background_object(create_fddownhillplatformrail_3409(10880, 1504), 3);
    add_background_object(create_fddownhillplatformrail_3409(10944, 1536), 3);
    add_background_object(create_fddownhillplatformrail_3409(11008, 1568), 3);
    add_background_object(create_fddownhillplatformrail_3409(11072, 1600), 3);
    add_background_object(create_fdhangarwall1_3392(8576, 608), 3);
    add_background_object(create_fdhangarwall1_3392(8704, 608), 3);
    add_background_object(create_fdhangarwall1_3392(8448, 608), 3);
    add_background_object(create_fdhangarfloor6_3400(8512, 736), 3);
    add_background_object(create_fdhangarfloor6_3400(8448, 736), 3);
    add_background_object(create_fdhangarfloor2_3397(8544, 736), 3);
    add_background_object(create_fdhangarfloor7_3399(8416, 736), 3);
    add_background_object(create_fdhangarfloor8_3394(8416, 672), 3);
    add_background_object(create_fdhangarfloor8_3394(8416, 608), 3);
    add_background_object(create_fdhangarfloor8_3394(8416, 544), 3);
    add_background_object(create_fdhangarfloor8_3394(8416, 480), 3);
    add_background_object(create_fdhangarwall1_3392(8576, 480), 3);
    add_background_object(create_fdhangarwall1_3392(8704, 480), 3);
    add_background_object(create_fdhangarwall1_3392(8448, 480), 3);
    add_background_object(create_fdhangarwall1_3392(8832, 608), 3);
    add_background_object(create_fdhangarfloor8_3394(8416, 416), 3);
    add_background_object(create_fdhangarfloor8_3394(8416, 352), 3);
    add_background_object(create_fdhangarwall1_3392(8576, 352), 3);
    add_background_object(create_fdhangarwall1_3392(8704, 352), 3);
    add_background_object(create_fdhangarwall1_3392(8448, 352), 3);
    add_background_object(create_fdhangarfloor8_3394(8416, 288), 3);
    add_background_object(create_fdhangarfloor8_3394(8416, 224), 3);
    add_background_object(create_fdhangarwall1_3392(8576, 224), 3);
    add_background_object(create_fdhangarwall1_3392(8704, 224), 3);
    add_background_object(create_fdhangarwall1_3392(8448, 224), 3);
    add_background_object(create_fdhangarfloor8_3394(8416, 160), 3);
    add_background_object(create_fdhangarfloor8_3394(8416, 96), 3);
    add_background_object(create_fdhangarwall1_3392(8576, 96), 3);
    add_background_object(create_fdhangarwall1_3392(8704, 96), 3);
    add_background_object(create_fdhangarwall1_3392(8448, 96), 3);
    add_background_object(create_fdhangarfloor8_3394(8416, 32), 3);
    add_background_object(create_fdhangarfloor8_3394(8416, -32), 3);
    add_background_object(create_fdhangarwall1_3392(8576, -32), 3);
    add_background_object(create_fdhangarwall1_3392(8704, -32), 3);
    add_background_object(create_fdhangarwall1_3392(8448, -32), 3);
    add_background_object(create_fddownhillplatformrail_3409(11136, 1632), 3);
    add_background_object(create_fddownhillplatformrail_3409(11200, 1664), 3);
    add_background_object(create_fddownhillplatformrail_3409(11264, 1696), 3);
    add_background_object(create_fddownhillplatformrail_3409(11328, 1728), 3);
    add_background_object(create_fddownhillplatformrail_3409(11392, 1760), 3);
    add_background_object(create_fddownhillplatformrail_3409(11456, 1792), 3);
    add_background_object(create_fddownhillplatformrail_3409(11520, 1824), 3);
    add_background_object(create_fddownhillplatformrail_3409(11584, 1856), 3);
    add_background_object(create_fddownhillplatformrail_3409(11648, 1888), 3);
    add_background_object(create_fddownhillplatformrail_3409(11712, 1920), 3);
    add_background_object(create_fddownhillplatformrail_3409(11776, 1952), 3);
    add_background_object(create_fddownhillplatformrail_3409(11840, 1984), 3);
    add_background_object(create_fddownhillplatformrail_3409(11904, 2016), 3);
    add_background_object(create_fddownhillplatformrail_3409(11968, 2048), 3);
    add_background_object(create_fddownhillplatformrail_3409(12032, 2080), 3);
    add_background_object(create_fddownhillplatformrail_3409(12096, 2112), 3);
    add_background_object(create_fddownhillplatformrail_3409(12160, 2144), 3);
    add_background_object(create_fdhangarfloor4_3390(10592, 1632), 3);
    add_background_object(create_fdhangarfloor4_3390(10592, 1696), 3);
    add_background_object(create_fdhangarfloor4_3390(10592, 1760), 3);
    add_background_object(create_fdhangarfloor4_3390(10592, 1824), 3);
    add_background_object(create_fdhangarfloor4_3390(10592, 1888), 3);
    add_background_object(create_fdhangarfloor4_3390(10592, 1952), 3);
    add_background_object(create_fdhangarwall3_3389(10560, 2016), 3);
    add_background_object(create_fdhangarwall3_3389(10560, 2144), 3);
    add_background_object(create_fdhangarwall1_3392(10304, 2016), 3);
    add_background_object(create_fdhangarwall1_3392(10304, 2144), 3);
    add_background_object(create_fdhangarwall1_3392(10432, 2016), 3);
    add_background_object(create_fdhangarwall1_3392(10432, 2144), 3);
    add_background_object(create_fdhangarfloor4_3390(10592, 2016), 3);
    add_background_object(create_fdhangarfloor4_3390(10592, 2080), 3);
    add_background_object(create_fdhangarfloor4_3390(10592, 2144), 3);
    add_background_object(create_fdhangarfloor4_3390(10592, 2208), 3);
    add_background_object(create_fdhangarwall3_3389(10560, 2272), 3);
    add_background_object(create_fdhangarwall1_3392(10304, 2272), 3);
    add_background_object(create_fdhangarwall1_3392(10432, 2272), 3);
    add_background_object(create_fdhangarfloor4_3390(10592, 2272), 3);
    add_background_object(create_fdhangarfloor4_3390(10592, 2336), 3);
    add_background_object(create_fdhangarwall1_3392(10176, 2016), 3);
    add_background_object(create_fdhangarwall1_3392(10176, 2144), 3);
    add_background_object(create_fdhangarwall1_3392(10176, 2272), 3);
    add_background_object(create_fdhangarwall1_3392(12320, 2144), 3);
    add_background_object(create_fdhangarfloor1_3396(12320, 2112), 3);
    add_background_object(create_fdhangarfloor3_3401(12288, 2112), 3);
    add_background_object(create_fdhangarfloor8_3394(12288, 2208), 3);
    add_background_object(create_fdhangarfloor8_3394(12288, 2144), 3);
    add_background_object(create_fdhangarwall1_3392(12320, 2272), 3);
    add_background_object(create_fdhangarfloor8_3394(12288, 2336), 3);
    add_background_object(create_fdhangarfloor8_3394(12288, 2272), 3);
    add_background_object(create_fdhangarwall1_3392(12448, 2272), 3);
    add_background_object(create_fdhangarwall1_3392(12576, 2272), 3);
    add_background_object(create_fdhangarfloor11_3404(10624, 1440), 3);
    add_background_object(create_fdhangarfloor10_3403(10624, 1504), 3);
    add_background_object(create_fdhangarfloor1_3396(10656, 1472), 3);
    add_background_object(create_fdhangarfloor6_3400(10656, 1504), 3);
    add_background_object(create_fdhangarfloor6_3400(10720, 1504), 3);
    add_background_object(create_fdhangarfloor3_3401(10624, 1472), 3);
    add_background_object(create_fdhangarfloor2_3397(10784, 1472), 3);
    add_background_object(create_fdhangarwall1_3392(10496, 992), 3);
    add_background_object(create_fdhangarwall1_3392(10496, 864), 3);
    add_background_object(create_fdhangarwall1_3392(10496, 736), 3);
    add_background_object(create_fdhangarwall1_3392(10624, 992), 3);
    add_background_object(create_fdhangarwall1_3392(10624, 864), 3);
    add_background_object(create_fdhangarwall1_3392(10624, 736), 3);
    add_background_object(create_fdhangarwall1_3392(10496, 608), 3);
    add_background_object(create_fdhangarwall1_3392(10496, 480), 3);
    add_background_object(create_fdhangarwall1_3392(10496, 352), 3);
    add_background_object(create_fdhangarwall1_3392(10624, 608), 3);
    add_background_object(create_fdhangarwall1_3392(10624, 480), 3);
    add_background_object(create_fdhangarwall1_3392(10624, 352), 3);
    add_background_object(create_fdhangarwall1_3392(10496, 224), 3);
    add_background_object(create_fdhangarwall1_3392(10496, 96), 3);
    add_background_object(create_fdhangarwall1_3392(10496, -32), 3);
    add_background_object(create_fdhangarwall1_3392(10624, 224), 3);
    add_background_object(create_fdhangarwall1_3392(10624, 96), 3);
    add_background_object(create_fdhangarwall1_3392(10624, -32), 3);
    add_background_object(create_fdhangarfloor5_3398(10848, 1120), 3);
    add_background_object(create_fdhangarfloor5_3398(10784, 1504), 3);
    add_background_object(create_fdhangarfloor6_3400(10784, 1120), 3);
    add_background_object(create_fdhangarfloor6_3400(10720, 1120), 3);
    add_background_object(create_fdhangarfloor6_3400(10656, 1120), 3);
    add_background_object(create_fdhangarfloor6_3400(10592, 1120), 3);
    add_background_object(create_fdhangarfloor3_3401(10592, 1120), 3);
    add_background_object(create_fdhangarfloor1_3396(-32, 2112), 3);
    add_background_object(create_fdhangarfloor1_3396(96, 2112), 3);
    add_background_object(create_fdhangarfloor1_3396(224, 2112), 3);
    add_background_object(create_fdhangarfloor1_3396(352, 2112), 3);
    add_background_object(create_fdhangarfloor1_3396(480, 2112), 3);
    add_background_object(create_fdhangarfloor1_3396(-32, 1904), 3);
    add_background_object(create_fdhangarfloor1_3396(96, 1904), 3);
    add_background_object(create_fdhangarfloor1_3396(224, 1904), 3);
    add_background_object(create_fdhangarfloor1_3396(352, 1904), 3);
    add_background_object(create_fdhangarfloor1_3396(480, 1904), 3);
    add_background_object(create_fdhangarfloor1_3396(12512, 2048), 3);
    add_background_object(create_fdhangarfloor2_3397(12832, 2112), 3);
    add_background_object(create_fdhangarfloor1_3396(12704, 2112), 3);
    add_background_object(create_fddownhillplatformrail_3409(12224, 2176), 3);
    add_background_object(create_backdrop_3449(12864, 2112), 3);
    add_background_object(create_backdrop_3449(12992, 2112), 3);
    add_background_object(create_backdrop2_3450(12864, 1904), 3);
    add_background_object(create_backdrop_3449(13120, 2112), 3);
    add_background_object(create_backdrop_3449(13248, 2112), 3);
    add_background_object(create_backdrop_3449(13376, 2112), 3);
    add_background_object(create_backdrop_3449(13504, 2112), 3);
    add_background_object(create_fdhangarwall1_3392(12448, 2144), 3);
    add_background_object(create_fdhangarwall1_3392(12576, 2144), 3);
    add_background_object(create_fdhangarfloor4_3390(12832, 2144), 3);
    add_background_object(create_fdhangarfloor4_3390(12832, 2208), 3);
    add_background_object(create_fdhangarfloor4_3390(12832, 2272), 3);
    add_background_object(create_fdhangarfloor4_3390(12832, 2336), 3);
    add_background_object(create_fdhangarwall1_3392(12704, 2272), 3);
    add_background_object(create_fdhangarwall1_3392(12704, 2144), 3);
    add_background_object(create_fdhangarfloor6_3400(12768, 1904), 3);
    add_background_object(create_fdhangarfloor9_3402(12832, 1904), 3);
    add_background_object(create_fdhangarfloor6_3400(12704, 1904), 3);
    add_background_object(create_fdhangarfloor6_3400(12640, 1904), 3);
    add_background_object(create_fdhangarfloor6_3400(12576, 1904), 3);
    add_background_object(create_fdhangarfloor6_3400(12512, 1904), 3);
    add_background_object(create_fdhangarfloor6_3400(12448, 1904), 3);
    add_background_object(create_fdhangarfloor6_3400(12384, 1904), 3);
    add_background_object(create_fdhangarfloor6_3400(12320, 1904), 3);
    add_background_object(create_fdhangarfloor10_3403(12288, 1904), 3);
    add_background_object(create_fdhangarfloor8_3394(12288, 1840), 3);
    add_background_object(create_fdhangarfloor8_3394(12288, 1776), 3);
    add_background_object(create_fdhangarfloor4_3390(12832, 1776), 3);
    add_background_object(create_fdhangarfloor4_3390(12832, 1840), 3);
    add_background_object(create_fdhangarwall1_3392(12320, 1776), 3);
    add_background_object(create_fdhangarwall1_3392(12448, 1776), 3);
    add_background_object(create_fdhangarwall1_3392(12576, 1776), 3);
    add_background_object(create_fdhangarwall1_3392(12704, 1776), 3);
    add_background_object(create_fdhangarfloor8_3394(12288, 1712), 3);
    add_background_object(create_fdhangarfloor8_3394(12288, 1648), 3);
    add_background_object(create_fdhangarfloor4_3390(12832, 1648), 3);
    add_background_object(create_fdhangarfloor4_3390(12832, 1712), 3);
    add_background_object(create_fdhangarwall1_3392(12320, 1648), 3);
    add_background_object(create_fdhangarwall1_3392(12448, 1648), 3);
    add_background_object(create_fdhangarwall1_3392(12576, 1648), 3);
    add_background_object(create_fdhangarwall1_3392(12704, 1648), 3);
    add_background_object(create_fdhangarfloor8_3394(12160, 1584), 3);
    add_background_object(create_fdhangarfloor8_3394(12160, 1520), 3);
    add_background_object(create_fdhangarfloor4_3390(12832, 1520), 3);
    add_background_object(create_fdhangarfloor4_3390(12832, 1584), 3);
    add_background_object(create_fdhangarwall1_3392(12192, 1520), 3);
    add_background_object(create_fdhangarwall1_3392(12320, 1520), 3);
    add_background_object(create_fdhangarwall1_3392(12576, 1520), 3);
    add_background_object(create_fdhangarwall1_3392(12704, 1520), 3);
    add_background_object(create_fdhangarwall1_3392(12448, 1520), 3);
    add_background_object(create_fdhangarfloor6_3400(12256, 1648), 3);
    add_background_object(create_fdhangarfloor6_3400(12192, 1648), 3);
    add_background_object(create_fdhangarfloor10_3403(12160, 1648), 3);
    add_background_object(create_fdhangarfloor2_3397(12288, 1648), 3);
    add_background_object(create_fdhangarfloor8_3394(12160, 1456), 3);
    add_background_object(create_fdhangarfloor8_3394(12160, 1392), 3);
    add_background_object(create_fdhangarfloor4_3390(12832, 1392), 3);
    add_background_object(create_fdhangarfloor4_3390(12832, 1456), 3);
    add_background_object(create_fdhangarwall1_3392(12192, 1392), 3);
    add_background_object(create_fdhangarwall1_3392(12320, 1392), 3);
    add_background_object(create_fdhangarwall1_3392(12576, 1392), 3);
    add_background_object(create_fdhangarwall1_3392(12704, 1392), 3);
    add_background_object(create_fdhangarwall1_3392(12448, 1392), 3);
    add_background_object(create_fdhangarfloor8_3394(12160, 1328), 3);
    add_background_object(create_fdhangarfloor8_3394(12160, 1264), 3);
    add_background_object(create_fdhangarfloor4_3390(12832, 1264), 3);
    add_background_object(create_fdhangarfloor4_3390(12832, 1328), 3);
    add_background_object(create_fdhangarwall1_3392(12192, 1264), 3);
    add_background_object(create_fdhangarwall1_3392(12320, 1264), 3);
    add_background_object(create_fdhangarwall1_3392(12576, 1264), 3);
    add_background_object(create_fdhangarwall1_3392(12704, 1264), 3);
    add_background_object(create_fdhangarwall1_3392(12448, 1264), 3);
    add_background_object(create_fdhangarfloor8_3394(12160, 1200), 3);
    add_background_object(create_fdhangarfloor8_3394(12160, 1136), 3);
    add_background_object(create_fdhangarfloor4_3390(12832, 1136), 3);
    add_background_object(create_fdhangarfloor4_3390(12832, 1200), 3);
    add_background_object(create_fdhangarwall1_3392(12192, 1136), 3);
    add_background_object(create_fdhangarwall1_3392(12320, 1136), 3);
    add_background_object(create_fdhangarwall1_3392(12576, 1136), 3);
    add_background_object(create_fdhangarwall1_3392(12704, 1136), 3);
    add_background_object(create_fdhangarwall1_3392(12448, 1136), 3);
    add_background_object(create_fdhangarwall2_3393(12512, 2080), 3);
    add_background_object(create_fdhangarfloor2_3397(12640, 2048), 3);
    add_background_object(create_fdhangarfloor3_3401(12480, 2048), 3);
    add_background_object(create_fdhangarfloor8_3394(12480, 2080), 3);
    add_background_object(create_fdhangarfloor4_3390(12640, 2080), 3);
    add_background_object(create_fdhangarfloor11_3404(12640, 2112), 3);
    add_background_object(create_fdhangarfloor11_3404(12448, 2112), 3);
    add_background_object(create_backdrop2_3450(12992, 1904), 3);
    add_background_object(create_backdrop2_3450(13120, 1904), 3);
    add_background_object(create_backdrop2_3450(13248, 1904), 3);
    add_background_object(create_backdrop2_3450(13376, 1904), 3);
    add_background_object(create_backdrop2_3450(13504, 1904), 3);
    add_background_object(create_backdrop_3449(13632, 2112), 3);
    add_background_object(create_backdrop_3449(13760, 2112), 3);
    add_background_object(create_backdrop_3449(13888, 2112), 3);
    add_background_object(create_backdrop_3449(14016, 2112), 3);
    add_background_object(create_backdrop2_3450(13632, 1904), 3);
    add_background_object(create_backdrop2_3450(13760, 1904), 3);
    add_background_object(create_backdrop2_3450(13888, 1904), 3);
    add_background_object(create_backdrop2_3450(14016, 1904), 3);
    add_background_object(create_backdrop_3449(14144, 2112), 3);
    add_background_object(create_backdrop_3449(14272, 2112), 3);
    add_background_object(create_backdrop_3449(14400, 2112), 3);
    add_background_object(create_backdrop2_3450(14144, 1904), 3);
    add_background_object(create_backdrop2_3450(14272, 1904), 3);
    add_background_object(create_backdrop2_3450(14400, 1904), 3);
    add_background_object(create_backdrop_3449(14528, 2112), 3);
    add_background_object(create_backdrop_3449(14656, 2112), 3);
    add_background_object(create_backdrop_3449(14784, 2112), 3);
    add_background_object(create_backdrop2_3450(14528, 1904), 3);
    add_background_object(create_backdrop2_3450(14656, 1904), 3);
    add_background_object(create_backdrop2_3450(14784, 1904), 3);
    add_background_object(create_backdrop_3449(14912, 2112), 3);
    add_background_object(create_backdrop_3449(15040, 2112), 3);
    add_background_object(create_backdrop2_3450(14912, 1904), 3);
    add_background_object(create_backdrop2_3450(15040, 1904), 3);
    add_background_object(create_backdrop_3449(15168, 2112), 3);
    add_background_object(create_backdrop2_3450(15168, 1904), 3);
    add_background_object(create_fdhangarfloor11_3404(9408, 1600), 3);
    add_background_object(create_fdhangarfloor2_3397(9600, 1568), 3);
    add_background_object(create_fdhangarfloor9_3402(9568, 1600), 3);
    add_background_object(create_fdhangarfloor10_3403(9600, 1600), 3);
    add_background_object(create_fdhangarfloor3_3401(9568, 1568), 3);
    add_background_object(create_fdhangarfloor11_3404(9632, 1600), 3);
    add_background_object(create_fdhangarfloor2_3397(9280, 1568), 3);
    add_background_object(create_fdhangarfloor9_3402(9248, 1600), 3);
    add_background_object(create_fdhangarfloor10_3403(9280, 1600), 3);
    add_background_object(create_fdhangarfloor3_3401(9248, 1568), 3);
    add_background_object(create_fdhangarfloor11_3404(9184, 1600), 3);
    add_background_object(create_fdhangarfloor2_3397(9024, 1568), 3);
    add_background_object(create_fdhangarfloor9_3402(8992, 1600), 3);
    add_background_object(create_fdhangarfloor10_3403(9024, 1600), 3);
    add_background_object(create_fdhangarfloor3_3401(8992, 1568), 3);
    add_background_object(create_fdhangarfloor11_3404(9056, 1600), 3);
    add_background_object(create_fdhangarfloor2_3397(9856, 1568), 3);
    add_background_object(create_fdhangarfloor9_3402(9824, 1600), 3);
    add_background_object(create_fdhangarfloor10_3403(9856, 1600), 3);
    add_background_object(create_fdhangarfloor3_3401(9824, 1568), 3);
    add_background_object(create_fdhangarfloor11_3404(9760, 1600), 3);
    add_background_object(create_fdspiralsparktower_3405(14312, 2080), 3);
    add_background_object(create_fdspiralsparktower_3405(14312, 2048), 3);
    add_background_object(create_fdspiralsparktower_3405(14056, 2080), 3);
    add_background_object(create_fdspiralsparktower_3405(14056, 2048), 3);
    add_background_object(create_fdspiralsparktower_3405(14184, 2080), 3);
    add_background_object(create_fdspiralsparktower_3405(14184, 2048), 3);
    add_background_object(create_backdrop_3449(15296, 2112), 3);
    add_background_object(create_backdrop2_3450(15296, 1904), 3);
    add_background_object(create_backdrop_3449(15424, 2112), 3);
    add_background_object(create_backdrop_3449(15552, 2112), 3);
    add_background_object(create_backdrop2_3450(15424, 1904), 3);
    add_background_object(create_backdrop2_3450(15552, 1904), 3);
    add_background_object(create_backdrop_3449(15680, 2112), 3);
    add_background_object(create_backdrop2_3450(15680, 1904), 3);
    add_background_object(create_backdrop_3449(15808, 2112), 3);
    add_background_object(create_backdrop2_3450(15808, 1904), 3);
    add_background_object(create_backdrop_3449(15936, 2112), 3);
    add_background_object(create_backdrop2_3450(15936, 1904), 3);
    add_background_object(create_backdrop_3449(16064, 2112), 3);
    add_background_object(create_backdrop2_3450(16064, 1904), 3);
    add_background_object(create_backdrop_3449(16192, 2112), 3);
    add_background_object(create_backdrop2_3450(16192, 1904), 3);
    add_background_object(create_backdrop_3449(16320, 2112), 3);
    add_background_object(create_backdrop2_3450(16320, 1904), 3);
    add_background_object(create_backdrop_3449(16448, 2112), 3);
    add_background_object(create_backdrop2_3450(16448, 1904), 3);
    add_background_object(create_backdrop_3449(16576, 2112), 3);
    add_background_object(create_backdrop2_3450(16576, 1904), 3);
    add_background_object(create_backdrop_3449(16704, 2112), 3);
    add_background_object(create_backdrop2_3450(16704, 1904), 3);
    add_background_object(create_fdhangarwall2_3393(4608, 384), 3);
    add_background_object(create_fdhangarwall2_3393(4736, 384), 3);
    add_background_object(create_fdhangarfloor8_3394(3648, 1056), 3);
    add_background_object(create_fdhangarfloor4_3390(3680, 1056), 3);
    add_background_object(create_fdhangarfloor8_3394(3648, 1120), 3);
    add_background_object(create_fdhangarfloor4_3390(3680, 1120), 3);
    add_background_object(create_fdhangarfloor8_3394(3648, 1248), 3);
    add_background_object(create_fdhangarfloor4_3390(3680, 1248), 3);
    add_background_object(create_fdhangarfloor6_3400(3680, 1312), 3);
    add_background_object(create_fdhangarfloor9_3402(3712, 1312), 3);
    add_background_object(create_fdhangarfloor2_3397(3712, 1280), 3);
    add_background_object(create_fdhangarfloor10_3403(3680, 1280), 3);
    add_background_object(create_fdhangarfloor2_3397(3616, 976), 3);
    add_background_object(create_fdhangarfloor4_3390(3616, 1008), 3);
    add_background_object(create_fdhangarfloor3_3401(3584, 976), 3);
    add_background_object(create_fdhangarfloor8_3394(3584, 1008), 3);
    add_background_object(create_fdhangarfloor4_3390(3616, 1072), 3);
    add_background_object(create_fdhangarfloor8_3394(3584, 1072), 3);
    add_background_object(create_fdhangarfloor4_3390(3616, 1136), 3);
    add_background_object(create_fdhangarfloor8_3394(3584, 1136), 3);
    add_background_object(create_fdhangarfloor4_3390(3616, 1200), 3);
    add_background_object(create_fdhangarfloor8_3394(3584, 1200), 3);
    add_background_object(create_fdhangarfloor9_3402(3616, 1264), 3);
    add_background_object(create_fdhangarfloor7_3399(3584, 1264), 3);
    add_background_object(create_fdhangarfloor4_3390(3552, 1008), 3);
    add_background_object(create_fdhangarfloor8_3394(3520, 1008), 3);
    add_background_object(create_fdhangarfloor4_3390(3552, 1072), 3);
    add_background_object(create_fdhangarfloor8_3394(3520, 1072), 3);
    add_background_object(create_fdhangarfloor4_3390(3552, 1136), 3);
    add_background_object(create_fdhangarfloor8_3394(3520, 1136), 3);
    add_background_object(create_fdhangarfloor9_3402(3552, 1200), 3);
    add_background_object(create_fdhangarfloor7_3399(3520, 1200), 3);
    add_background_object(create_fdhangarfloor2_3397(3552, 976), 3);
    add_background_object(create_fdhangarfloor3_3401(3520, 976), 3);
    add_background_object(create_fdhangarfloor4_3390(3488, 1008), 3);
    add_background_object(create_fdhangarfloor8_3394(3456, 1008), 3);
    add_background_object(create_fdhangarfloor4_3390(3488, 1072), 3);
    add_background_object(create_fdhangarfloor8_3394(3456, 1072), 3);
    add_background_object(create_fdhangarfloor9_3402(3488, 1136), 3);
    add_background_object(create_fdhangarfloor7_3399(3456, 1136), 3);
    add_background_object(create_fdhangarfloor2_3397(3488, 976), 3);
    add_background_object(create_fdhangarfloor3_3401(3456, 976), 3);
    add_background_object(create_fdhangarfloor4_3390(3424, 1008), 3);
    add_background_object(create_fdhangarfloor8_3394(3392, 1008), 3);
    add_background_object(create_fdhangarfloor9_3402(3424, 1072), 3);
    add_background_object(create_fdhangarfloor7_3399(3392, 1072), 3);
    add_background_object(create_fdhangarfloor2_3397(3424, 976), 3);
    add_background_object(create_fdhangarfloor3_3401(3392, 976), 3);
    add_background_object(create_fdhangarfloor9_3402(3360, 1008), 3);
    add_background_object(create_fdhangarfloor7_3399(3328, 1008), 3);
    add_background_object(create_fdhangarfloor2_3397(3360, 976), 3);
    add_background_object(create_fdhangarfloor3_3401(3328, 976), 3);
    add_object(create_objecttransporterstart_3412(8768, 1312), 3);
    add_object(create_objecttransporterstart_3412(8768, 1504), 3);
    add_object(create_objecttransporterstart_3412(5824, 1824), 3);
    add_object(create_objecttransporterstart_3412(2528, 1664), 3);
    add_object(create_objecttransporterstart_3412(-240, 1400), 3);
    add_object(create_objecttransporterstart_3412(9344, 1248), 3);
    add_object(create_objecttransporterstart_3412(9920, 1248), 3);
    add_object(create_objecttransporterstart_3412(9920, 1504), 3);
    add_object(create_objecttransporterstart_3412(10496, 1504), 3);
    add_object(create_enemyelitespawner_3345(3871, 511), 3);
    add_object(create_enemyelitemask_2511(8956, 1568), 3);
    add_object(create_gimmickdownhillplatformwheel_3413(368, 752), 3);
    add_object(create_enemyelite_2510(8959, 1567), 3);
    add_object(create_enemydronelaser_2127(-332, 974), 3);
    add_object(create_playerstartingpoint_358(77, 685), 3);
    add_object(create_enemyspawntube_2195(-496, 1492), 3);
    add_object(create_halfcorkscrewleft_941(7416, 1727), 3);
    add_object(create_halfcorkscrewright_942(8200, 1727), 3);
    add_object(create_layerchangeswitch_404(7520, 1640), 3);
    add_object(create_layerchangeswitch_404(8080, 1640), 3);
    add_object(create_layerchangeswitch_404(7416, 1672), 3);
    add_object(create_layerchangeswitch_404(8192, 1672), 3);
    add_object(create_objecttransporterwave_3414(-280, 1320), 3);
    add_object(create_objecttransporternode90_3428(-240, 1336), 3);
    add_object(create_objecttransporternode180_3426(-304, 1400), 3);
    add_object(create_objecttransporternode270_3417(-240, 1464), 3);
    add_object(create_objecttransporternode0_3415(-176, 1400), 3);
    add_object(create_hazardspiralsparkmaker_3422(4792, 724), 3);
    add_object(create_fdspiralsparktowerlight_3423(4800, 800), 3);
    add_object(create_fdspiralsparktowerlight_3423(4800, 832), 3);
    add_object(create_halfcorkscrewleft_941(5368, 831), 3);
    add_object(create_halfcorkscrewright_942(5896, 831), 3);
    add_object(create_layerchangeswitch_404(5472, 744), 3);
    add_object(create_layerchangeswitch_404(5776, 744), 3);
    add_object(create_gimmickdownhillplatform_3427(368, 704), 3);
    add_object(create_objecttransporterstart2_3416(-242, 1406), 3);
    add_object(create_hazardzapbeamcannon_3420(4736, 1056), 3);
    add_object(create_hazardzapbeamhitbox_3421(4737, 1128), 3);
    add_object(create_enemydrone_2222(-560, 1480), 3);
    add_object(create_airlock2_3451(1280, 928), 3);
    add_object(create_airlock3_3452(1280, 928), 3);
    add_object(create_airlock1_3453(1280, 928), 3);
    add_object(create_airlock4_3454(1280, 928), 3);
    add_object(create_airlockbase_3455(1280, 928), 3);
    add_object(create_objectlowspring_3429(-72, 1056), 3);
    add_object(create_effectairlockwind_3438(-182, 792), 3);
    add_object(create_gimmickclothesline_1970(1216, 1336), 3);
    add_object(create_gimmickclothesline_1970(1288, 1336), 3);
    add_object(create_gimmickclothesline_1970(1360, 1336), 3);
    add_object(create_gimmickhanginglongsensor2_1741(1136, 1344), 3);
    add_object(create_gimmickhanginglongsensor2_1741(1408, 1344), 3);
    add_object(create_gimmickclothesline_1970(1400, 1336), 3);
    add_object(create_airlock2_3451(1664, 1440), 3);
    add_object(create_airlock3_3452(1664, 1440), 3);
    add_object(create_airlock1_3453(1664, 1440), 3);
    add_object(create_airlock4_3454(1664, 1440), 3);
    add_object(create_airlockbase_3455(1664, 1440), 3);
    add_object(create_gimmickclothesline_1970(1600, 1336), 3);
    add_object(create_gimmickclothesline_1970(1672, 1336), 3);
    add_object(create_gimmickclothesline_1970(1744, 1336), 3);
    add_object(create_gimmickhanginglongsensor2_1741(1520, 1344), 3);
    add_object(create_gimmickhanginglongsensor2_1741(1792, 1344), 3);
    add_object(create_gimmickclothesline_1970(1784, 1336), 3);
    add_object(create_airlock2_3451(2304, 1440), 3);
    add_object(create_airlock3_3452(2304, 1440), 3);
    add_object(create_airlock1_3453(2304, 1440), 3);
    add_object(create_airlock4_3454(2304, 1440), 3);
    add_object(create_airlockbase_3455(2304, 1440), 3);
    add_object(create_yellowspringup_434(2784, 1392), 3);
    add_object(create_laddertop_357(2116, 1175), 3);
    add_object(create_yellowspringright_435(2016, 1088), 3);
    add_object(create_yellowspringright_435(2016, 1120), 3);
    add_object(create_airlock2_3451(2944, 1440), 3);
    add_object(create_airlock3_3452(2944, 1440), 3);
    add_object(create_airlock1_3453(2944, 1440), 3);
    add_object(create_airlock4_3454(2944, 1440), 3);
    add_object(create_airlockbase_3455(2944, 1440), 3);
    add_object(create_yellowspringup_434(2432, 1200), 3);
    add_object(create_monitor1up_410(2080, 960), 3);
    add_object(create_objecttransporter_3344(2528, 1408), 3);
    add_object(create_objecttransporterstart2_3416(2526, 1662), 3);
    add_object(create_enemydrone_2222(1472, 1456), 3);
    add_object(create_enemydrone_2222(832, 1456), 3);
    add_object(create_enemyhoppermkii_2200(1139, 864), 3);
    add_object(create_enemylimiter_350(1197, 858), 3);
    add_object(create_enemylimiter_350(877, 858), 3);
    add_object(create_enemyhoppermkii_2200(1523, 864), 3);
    add_object(create_enemylimiter_350(1581, 858), 3);
    add_object(create_enemylimiter_350(1389, 858), 3);
    add_object(create_yellowspringup_434(4160, 1264), 3);
    add_object(create_gimmickclothesline_1970(3952, 1048), 3);
    add_object(create_gimmickclothesline_1970(4024, 1048), 3);
    add_object(create_gimmickclothesline_1970(4072, 1048), 3);
    add_object(create_gimmickhanginglongsensor2_1741(3808, 1056), 3);
    add_object(create_gimmickhanginglongsensor2_1741(4080, 1056), 3);
    add_object(create_gimmickclothesline_1970(3888, 1048), 3);
    add_object(create_objectcrystal_279(4053, 1082), 3);
    add_object(create_objectcrystal_279(3853, 1082), 3);
    add_object(create_objectcrystal_279(3893, 1082), 3);
    add_object(create_objectcrystal_279(4013, 1082), 3);
    add_object(create_objectcrystal_279(3933, 1082), 3);
    add_object(create_objectcrystal_279(3973, 1082), 3);
    add_object(create_objectcrystal_279(4173, 1170), 3);
    add_object(create_objectcrystal_279(4173, 1138), 3);
    add_object(create_objectcrystal_279(4173, 1106), 3);
    add_object(create_objectcrystal_279(4173, 1074), 3);
    add_object(create_airlock2_3451(4352, 864), 3);
    add_object(create_airlock3_3452(4352, 864), 3);
    add_object(create_airlock1_3453(4352, 864), 3);
    add_object(create_airlock4_3454(4352, 864), 3);
    add_object(create_airlockbase_3455(4352, 864), 3);
    add_object(create_enemyelitespawner_3345(2527, 1407), 3);
    add_object(create_enemylimiter_350(2413, 1394), 3);
    add_object(create_enemylimiter_350(2805, 1394), 3);
    add_object(create_enemytankbot_2821(2527, 1369), 3);
    add_object(create_enemypounder_3419(2696, 936), 3);
    add_object(create_enemylimiter_350(2613, 946), 3);
    add_object(create_enemylimiter_350(2837, 946), 3);
    add_object(create_yellowspringup_434(1024, 1392), 3);
    add_object(create_yellowspringup_434(1120, 1392), 3);
    add_object(create_yellowspringupright_433(2784, 816), 3);
    add_object(create_monitorbomb_563(4224, 800), 3);
    add_object(create_enemyfirespitter_1385(4060, 816), 3);
    add_object(create_enemylimiter_350(3813, 818), 3);
    add_object(create_enemylimiter_350(4277, 818), 3);
    add_object(create_yellowspringright_435(288, 1056), 3);
    add_object(create_yellowspringup_434(1088, 1392), 3);
    add_object(create_yellowspringup_434(1056, 1392), 3);
    add_object(create_enemyhopper_1168(3287, 880), 3);
    add_object(create_enemyhopper_1168(3359, 880), 3);
    add_object(create_enemyhopper_1168(3431, 880), 3);
    add_object(create_enemyhopper_1168(3503, 880), 3);
    add_object(create_enemylimiter_350(3669, 898), 3);
    add_object(create_enemylimiter_350(3669, 850), 3);
    add_object(create_enemylimiter_350(3045, 898), 3);
    add_object(create_enemylimiter_350(3045, 850), 3);
    add_object(create_laddertop_357(3620, 535), 3);
    add_object(create_enemylimiter_350(3613, 626), 3);
    add_object(create_enemylimiter_350(3469, 626), 3);
    add_object(create_enemyfirespitter_1385(3508, 624), 3);
    add_object(create_gimmickdownhillplatformwheel_3413(4080, 560), 3);
    add_object(create_gimmickdownhillplatform_3427(4080, 512), 3);
    add_object(create_enemylimiter_350(3597, 474), 3);
    add_object(create_enemytankbot_2821(3799, 473), 3);
    add_object(create_enemylimiter_350(4021, 474), 3);
    add_object(create_objecttransporter_3344(3872, 512), 3);
    add_object(create_enemyhoppermkii_2200(3867, 480), 3);
    add_object(create_fdspiralsparktowerlight_3423(4800, 864), 3);
    add_object(create_enemyhopper_1168(3791, 1504), 3);
    add_object(create_enemyhopper_1168(3863, 1504), 3);
    add_object(create_enemylimiter_350(4061, 1490), 3);
    add_object(create_enemylimiter_350(4061, 1442), 3);
    add_object(create_enemylimiter_350(3045, 1266), 3);
    add_object(create_enemylimiter_350(3045, 1218), 3);
    add_object(create_enemyhopper_1168(3271, 1248), 3);
    add_object(create_enemyhopper_1168(4007, 800), 3);
    add_object(create_enemyhopper_1168(4687, 672), 3);
    add_object(create_enemylimiter_350(4453, 818), 3);
    add_object(create_enemylimiter_350(4453, 762), 3);
    add_object(create_enemylimiter_350(4277, 762), 3);
    add_object(create_enemylimiter_350(3813, 770), 3);
    add_object(create_hazardzapbeamcannon_3420(4896, 1056), 3);
    add_object(create_hazardzapbeamhitbox_3421(4897, 1128), 3);
    add_object(create_yellowspringup_434(4544, 1328), 3);
    add_object(create_objectcrystal_279(4085, 490), 3);
    add_object(create_objectcrystal_279(4149, 522), 3);
    add_object(create_objectcrystal_279(4213, 554), 3);
    add_object(create_objectcrystal_279(4277, 586), 3);
    add_object(create_objectcrystal_279(4341, 618), 3);
    add_object(create_objectcrystal_279(4405, 650), 3);
    add_object(create_objectcrystal_279(4469, 682), 3);
    add_object(create_objectcrystal_279(2533, 1002), 3);
    add_object(create_objectcrystal_279(2573, 1002), 3);
    add_object(create_objectcrystal_279(2733, 1002), 3);
    add_object(create_objectcrystal_279(2773, 1002), 3);
    add_object(create_objectcrystal_279(2653, 1194), 3);
    add_object(create_objectcrystal_279(2693, 1194), 3);
    add_object(create_objectcrystal_279(2573, 1194), 3);
    add_object(create_objectcrystal_279(2453, 1170), 3);
    add_object(create_objectcrystal_279(2453, 1130), 3);
    add_object(create_objectcrystal_279(2453, 1090), 3);
    add_object(create_objectcrystal_279(2453, 1050), 3);
    add_object(create_objectcrystal_279(2453, 1010), 3);
    add_object(create_objectcrystal_279(3757, 1514), 3);
    add_object(create_objectcrystal_279(3821, 1514), 3);
    add_object(create_objectcrystal_279(3893, 1514), 3);
    add_object(create_objectcrystal_279(3325, 890), 3);
    add_object(create_objectcrystal_279(3389, 890), 3);
    add_object(create_objectcrystal_279(3461, 890), 3);
    add_object(create_objectcrystal_279(3533, 890), 3);
    add_object(create_objectcrystal_279(3253, 890), 3);
    add_object(create_monitorwoodshield_325(1824, 864), 3);
    add_object(create_objectcrystal_279(1997, 1306), 3);
    add_object(create_objectcrystal_279(1965, 1306), 3);
    add_object(create_objectcrystal_279(1997, 1346), 3);
    add_object(create_objectcrystal_279(1965, 1346), 3);
    add_object(create_objectcrystal_279(1965, 1386), 3);
    add_object(create_objectcrystal_279(1997, 1386), 3);
    add_object(create_objectcrystal_279(1933, 1306), 3);
    add_object(create_objectcrystal_279(1901, 1306), 3);
    add_object(create_objectcrystal_279(1933, 1346), 3);
    add_object(create_objectcrystal_279(1901, 1346), 3);
    add_object(create_objectcrystal_279(1901, 1386), 3);
    add_object(create_objectcrystal_279(1933, 1386), 3);
    add_object(create_objectcrystal_279(1869, 1306), 3);
    add_object(create_objectcrystal_279(1837, 1306), 3);
    add_object(create_objectcrystal_279(1869, 1346), 3);
    add_object(create_objectcrystal_279(1837, 1346), 3);
    add_object(create_objectcrystal_279(1837, 1386), 3);
    add_object(create_objectcrystal_279(1869, 1386), 3);
    add_object(create_objectcrystal_279(3421, 1330), 3);
    add_object(create_objectcrystal_279(3437, 1346), 3);
    add_object(create_objectcrystal_279(3453, 1362), 3);
    add_object(create_objectcrystal_279(3469, 1378), 3);
    add_object(create_objectcrystal_279(3485, 1394), 3);
    add_object(create_objectcrystal_279(3501, 1410), 3);
    add_object(create_objectcrystal_279(3517, 1426), 3);
    add_object(create_objectcrystal_279(3533, 1442), 3);
    add_object(create_objectcrystal_279(3549, 1458), 3);
    add_object(create_objectlowspring_3429(3352, 640), 3);
    add_object(create_objectcrystal_279(3117, 618), 3);
    add_object(create_objectcrystal_279(3125, 594), 3);
    add_object(create_objectcrystal_279(3213, 618), 3);
    add_object(create_objectcrystal_279(3205, 594), 3);
    add_object(create_objectcrystal_279(3141, 570), 3);
    add_object(create_objectcrystal_279(3189, 570), 3);
    add_object(create_objectcrystal_279(3157, 554), 3);
    add_object(create_objectcrystal_279(3173, 554), 3);
    add_object(create_monitorkeystone_562(3152, 608), 3);
    add_object(create_objectcrystal_279(3157, 578), 3);
    add_object(create_objectcrystal_279(3173, 578), 3);
    add_object(create_objectcrystal_279(3141, 594), 3);
    add_object(create_objectcrystal_279(3189, 594), 3);
    add_object(create_objectcrystal_279(3133, 618), 3);
    add_object(create_objectcrystal_279(3197, 618), 3);
    add_object(create_objectlowspring_3429(4672, 600), 3);
    add_object(create_enemylimiter_350(4789, 690), 3);
    add_object(create_enemylimiter_350(4789, 642), 3);
    add_object(create_hazardspiralsparkmaker_3422(5048, 1204), 3);
    add_object(create_fdspiralsparktowerlight_3423(5056, 1280), 3);
    add_object(create_fdspiralsparktowerlight_3423(5056, 1312), 3);
    add_object(create_fdspiralsparktowerlight_3423(5056, 1344), 3);
    add_object(create_fdspiralsparktowerlight_3423(5056, 1376), 3);
    add_object(create_enemylimiter_350(5077, 1330), 3);
    add_object(create_enemylimiter_350(5077, 1274), 3);
    add_object(create_objectlowspring_3429(5272, 1288), 3);
    add_object(create_enemyhopper_1168(5335, 1312), 3);
    add_object(create_enemyhopper_1168(5207, 1312), 3);
    add_object(create_hazardspiralsparkmaker_3422(5512, 1012), 3);
    add_object(create_fdspiralsparktowerlight_3423(5520, 1088), 3);
    add_object(create_fdspiralsparktowerlight_3423(5520, 1312), 3);
    add_object(create_fdspiralsparktowerlight_3423(5520, 1344), 3);
    add_object(create_fdspiralsparktowerlight_3423(5520, 1376), 3);
    add_object(create_enemylimiter_350(5509, 1330), 3);
    add_object(create_enemylimiter_350(5509, 1274), 3);
    add_object(create_fdspiralsparktowerlight_3423(5520, 1120), 3);
    add_object(create_fdspiralsparktowerlight_3423(5520, 1152), 3);
    add_object(create_fdspiralsparktowerlight_3423(5520, 1184), 3);
    add_object(create_objectlowspring_3429(5416, 1208), 3);
    add_object(create_airlock2_3451(5632, 1376), 3);
    add_object(create_airlock3_3452(5632, 1376), 3);
    add_object(create_airlock1_3453(5632, 1376), 3);
    add_object(create_airlock4_3454(5632, 1376), 3);
    add_object(create_airlockbase_3455(5632, 1376), 3);
    add_object(create_objectlowspring_3429(5416, 1120), 3);
    add_object(create_objectlowspring_3429(5416, 1024), 3);
    add_object(create_fdspiralsparktowerlight_3423(5520, 1216), 3);
    add_object(create_fdspiralsparktowerlight_3423(5520, 1248), 3);
    add_object(create_fdspiralsparktowerlight_3423(5520, 1280), 3);
    add_object(create_enemylimiter_350(5541, 818), 3);
    add_object(create_enemylimiter_350(5541, 762), 3);
    add_object(create_hazardspiralsparkmaker_3422(4888, 756), 3);
    add_object(create_fdspiralsparktowerlight_3423(4896, 832), 3);
    add_object(create_fdspiralsparktowerlight_3423(4896, 864), 3);
    add_object(create_hazardspiralsparkmaker_3422(4984, 788), 3);
    add_object(create_fdspiralsparktowerlight_3423(4992, 864), 3);
    add_object(create_objectcrystal_279(5613, 706), 3);
    add_object(create_objectcrystal_279(5645, 706), 3);
    add_object(create_objectcrystal_279(5677, 706), 3);
    add_object(create_objectcrystal_279(5581, 706), 3);
    add_object(create_enemypounder_3419(5176, 712), 3);
    add_object(create_enemylimiter_350(5085, 722), 3);
    add_object(create_enemylimiter_350(5293, 722), 3);
    add_object(create_airlock2_3451(6144, 1376), 3);
    add_object(create_airlock3_3452(6144, 1376), 3);
    add_object(create_airlock1_3453(6144, 1376), 3);
    add_object(create_airlock4_3454(6144, 1376), 3);
    add_object(create_airlockbase_3455(6144, 1376), 3);
    add_object(create_hazardspikesup_2669(6016, 1312), 3);
    add_object(create_hazardspikesup_2669(5984, 1312), 3);
    add_object(create_hazardspikesup_2669(6272, 1312), 3);
    add_object(create_hazardspikesup_2669(6240, 1312), 3);
    add_object(create_hazardspikesup_2669(6336, 1312), 3);
    add_object(create_hazardspikesup_2669(6304, 1312), 3);
    add_object(create_hazardspikesup_2669(6400, 1312), 3);
    add_object(create_hazardspikesup_2669(6368, 1312), 3);
    add_object(create_airlock2_3451(6528, 1376), 3);
    add_object(create_airlock3_3452(6528, 1376), 3);
    add_object(create_airlock1_3453(6528, 1376), 3);
    add_object(create_airlock4_3454(6528, 1376), 3);
    add_object(create_airlockbase_3455(6528, 1376), 3);
    add_object(create_hazardspikesup_2669(6656, 1312), 3);
    add_object(create_hazardspikesup_2669(6624, 1312), 3);
    add_object(create_hazardspikesup_2669(6720, 1312), 3);
    add_object(create_hazardspikesup_2669(6688, 1312), 3);
    add_object(create_hazardspikesup_2669(6784, 1312), 3);
    add_object(create_hazardspikesup_2669(6752, 1312), 3);
    add_object(create_gimmickclothesline_1970(6144, 1240), 3);
    add_object(create_gimmickclothesline_1970(6216, 1240), 3);
    add_object(create_gimmickclothesline_1970(6288, 1240), 3);
    add_object(create_gimmickhanginglongsensor2_1741(6000, 1248), 3);
    add_object(create_gimmickclothesline_1970(6080, 1240), 3);
    add_object(create_gimmickclothesline_1970(6504, 1240), 3);
    add_object(create_gimmickclothesline_1970(6576, 1240), 3);
    add_object(create_gimmickclothesline_1970(6648, 1240), 3);
    add_object(create_gimmickhanginglongsensor2_1741(6848, 1248), 3);
    add_object(create_gimmickclothesline_1970(6360, 1240), 3);
    add_object(create_gimmickclothesline_1970(6432, 1240), 3);
    add_object(create_hazardzapbeamcannon_3420(6336, 1152), 3);
    add_object(create_hazardzapbeamhitbox_3421(6337, 1224), 3);
    add_object(create_enemyhoppermkii_2200(5907, 1312), 3);
    add_object(create_enemylimiter_350(6005, 1306), 3);
    add_object(create_enemylimiter_350(5733, 1306), 3);
    add_object(create_gimmickclothesline_1970(6720, 1240), 3);
    add_object(create_gimmickclothesline_1970(6792, 1240), 3);
    add_object(create_gimmickclothesline_1970(6840, 1240), 3);
    add_object(create_objectcrystal_279(2613, 1002), 3);
    add_object(create_objectcrystal_279(2653, 1002), 3);
    add_object(create_objectcrystal_279(2693, 1002), 3);
    add_object(create_objectcrystal_279(2613, 1194), 3);
    add_object(create_enemytankbot_2821(2719, 1369), 3);
    add_object(create_objecttransporter_3344(5952, 1344), 3);
    add_object(create_redspringup_440(5824, 2096), 3);
    add_object(create_redspringup_440(5792, 2096), 3);
    add_object(create_objecttransporterstart2_3416(5822, 1822), 3);
    add_object(create_objecttransporternode0_3415(5824, 1120), 3);
    add_object(create_objecttransporternode270_3417(5952, 1120), 3);
    add_object(create_yellowspringup_434(2528, 1872), 3);
    add_object(create_yellowspringup_434(2496, 1872), 3);
    add_object(create_airlock2_3451(7616, 1760), 3);
    add_object(create_airlock3_3452(7616, 1760), 3);
    add_object(create_airlock1_3453(7616, 1760), 3);
    add_object(create_airlock4_3454(7616, 1760), 3);
    add_object(create_airlockbase_3455(7616, 1760), 3);
    add_object(create_airlock2_3451(8000, 1760), 3);
    add_object(create_airlock3_3452(8000, 1760), 3);
    add_object(create_airlock1_3453(8000, 1760), 3);
    add_object(create_airlock4_3454(8000, 1760), 3);
    add_object(create_airlockbase_3455(8000, 1760), 3);
    add_object(create_halfcorkscrewleft_941(7416, 1319), 3);
    add_object(create_halfcorkscrewright_942(8200, 1319), 3);
    add_object(create_layerchangeswitch_404(7520, 1232), 3);
    add_object(create_layerchangeswitch_404(8080, 1232), 3);
    add_object(create_layerchangeswitch_404(7416, 1264), 3);
    add_object(create_layerchangeswitch_404(8192, 1264), 3);
    add_object(create_objecttransporterstart2_3416(8766, 1502), 3);
    add_object(create_objecttransporterstart2_3416(8766, 1310), 3);
    add_object(create_objecttransporternode0_3415(8768, 1184), 3);
    add_object(create_objecttransporternode270_3417(8960, 1184), 3);
    add_object(create_objecttransporter_3344(8960, 1312), 3);
    add_object(create_objecttransporter_3344(9088, 1312), 3);
    add_object(create_objecttransporter_3344(9216, 1312), 3);
    add_object(create_objecttransporter_3344(9344, 1312), 3);
    add_object(create_objecttransporter_3344(8960, 1568), 3);
    add_object(create_objecttransporter_3344(9088, 1568), 3);
    add_object(create_objecttransporter_3344(9216, 1568), 3);
    add_object(create_objecttransporter_3344(9344, 1568), 3);
    add_object(create_objecttransporter_3344(9536, 1312), 3);
    add_object(create_objecttransporter_3344(9664, 1312), 3);
    add_object(create_objecttransporter_3344(9792, 1312), 3);
    add_object(create_objecttransporter_3344(9920, 1312), 3);
    add_object(create_objecttransporter_3344(9536, 1568), 3);
    add_object(create_objecttransporter_3344(9664, 1568), 3);
    add_object(create_objecttransporter_3344(9792, 1568), 3);
    add_object(create_objecttransporter_3344(9920, 1568), 3);
    add_object(create_objecttransporter_3344(10112, 1312), 3);
    add_object(create_objecttransporter_3344(10496, 1312), 3);
    add_object(create_objecttransporter_3344(10112, 1568), 3);
    add_object(create_objecttransporter_3344(10496, 1568), 3);
    add_object(create_objecttransporterstart2_3416(9342, 1246), 3);
    add_object(create_objecttransporternode270_3417(9536, 1184), 3);
    add_object(create_objecttransporternode0_3415(9344, 1184), 3);
    add_object(create_objecttransporterstart2_3416(9918, 1246), 3);
    add_object(create_objecttransporternode180_3426(9920, 1184), 3);
    add_object(create_objecttransporterstart2_3416(9918, 1502), 3);
    add_object(create_objecttransporternode270_3417(9856, 1184), 3);
    add_object(create_objecttransporternode180_3426(9856, 1696), 3);
    add_object(create_objecttransporternode90_3428(9216, 1696), 3);
    add_object(create_objecttransporternode0_3415(9960, 1504), 3);
    add_object(create_objecttransporternode270_3417(10112, 1504), 3);
    add_object(create_objecttransporterstart2_3416(10494, 1502), 3);
    add_object(create_objecttransporterstart_3412(10112, 1248), 3);
    add_object(create_objecttransporterstart2_3416(10110, 1246), 3);
    add_object(create_objecttransporternode0_3415(10112, 1184), 3);
    add_object(create_enemyelitespawner_3345(9663, 1311), 3);
    add_object(create_enemyelitespawner_3345(9791, 1311), 3);
    add_object(create_enemyelitespawner_3345(9663, 1567), 3);
    add_object(create_enemyelitespawner_3345(9791, 1567), 3);
    add_object(create_enemyhopper_1168(9663, 1536), 3);
    add_object(create_enemyhopper_1168(9791, 1536), 3);
    add_object(create_enemyelitespawner_3345(9343, 1567), 3);
    add_object(create_enemyelitespawner_3345(9087, 1567), 3);
    add_object(create_enemylimiter_350(8901, 1546), 3);
    add_object(create_bossmorpherorb2_3456(488, 2520), 3);
    add_object(create_bossmorpherorb1_3457(424, 2520), 3);
    add_object(create_enemylimiter_350(8901, 1490), 3);
    add_object(create_enemylimiter_350(10005, 1546), 3);
    add_object(create_enemylimiter_350(10005, 1490), 3);
    add_object(create_enemyfirespitter_1385(10300, 1584), 3);
    add_object(create_enemyfirespitter_1385(10372, 1456), 3);
    add_object(create_enemylimiter_350(10149, 1586), 3);
    add_object(create_enemylimiter_350(10485, 1586), 3);
    add_object(create_enemylimiter_350(10213, 1458), 3);
    add_object(create_enemylimiter_350(10421, 1458), 3);
    add_object(create_enemytankbot_2821(10183, 1305), 3);
    add_object(create_enemytankbot_2821(10303, 1177), 3);
    add_object(create_enemylimiter_350(10149, 1330), 3);
    add_object(create_enemylimiter_350(10485, 1330), 3);
    add_object(create_enemylimiter_350(10213, 1202), 3);
    add_object(create_enemylimiter_350(10421, 1202), 3);
    add_object(create_monitorrings_407(9136, 1280), 3);
    add_object(create_enemysuperturretus_1828(619, 808), 3);
    add_object(create_enemysuperturretus_1828(2387, 1144), 3);
    add_object(create_enemysuperturretus_1828(3763, 1032), 3);
    add_object(create_enemysuperturretus_1828(3851, 736), 3);
    add_object(create_enemysuperturretus_1828(7923, 1464), 3);
    add_object(create_enemysuperturretus_1828(7827, 1520), 3);
    add_object(create_enemysuperturretus_1828(7907, 1184), 3);
    add_object(create_enemysuperturretus_1828(7803, 1240), 3);
    add_object(create_objectcrystal_279(4661, 506), 3);
    add_object(create_objectcrystal_279(4685, 506), 3);
    add_object(create_objectcrystal_279(4661, 530), 3);
    add_object(create_objectcrystal_279(4685, 530), 3);
    add_object(create_gimmickdownhillplatformwheel_3413(10896, 1520), 3);
    add_object(create_gimmickdownhillplatform_3427(10896, 1472), 3);
    add_object(create_objecttransporternode270_3417(10656, 1184), 3);
    add_object(create_objecttransporter_3344(10656, 1440), 3);
    add_object(create_scrollingfloor2_3440(0, 1904), 3);
    add_object(create_scrollingfloor2_3440(128, 1904), 3);
    add_object(create_scrollingfloor2_3440(256, 1904), 3);
    add_object(create_scrollingfloor2_3440(384, 1904), 3);
    add_object(create_scrollingfloor2_3440(512, 1904), 3);
    add_object(create_scrollingfloor_3439(512, 2112), 3);
    add_object(create_scrollingfloor_3439(384, 2112), 3);
    add_object(create_scrollingfloor_3439(256, 2112), 3);
    add_object(create_scrollingfloor_3439(128, 2112), 3);
    add_object(create_scrollingfloor_3439(0, 2112), 3);
    add_object(create_bosssyntaxvalues_3458(512, 2112), 3);
    add_object(create_bossmorpherpelvis_3459(184, 2448), 3);
    add_object(create_bossmorpherwheel4_3460(388, 2460), 3);
    add_object(create_bossmorpherwheel3_3461(356, 2460), 3);
    add_object(create_bossmorpherwheel2_3462(324, 2460), 3);
    add_object(create_bossmorpherwheel1_3463(292, 2460), 3);
    add_object(create_bossmorphertube1_3464(336, 2544), 3);
    add_object(create_bossmorphertube2_3465(336, 2504), 3);
    add_object(create_bossmorphergrill2_3466(376, 2424), 3);
    add_object(create_bossmorphergrill1_3467(320, 2424), 3);
    add_object(create_bossmorphernode2_3468(459, 2448), 3);
    add_object(create_bossmorphernode1_3469(428, 2448), 3);
    add_object(create_bossmorpherbody_3470(200, 2512), 3);
    add_object(create_effectsgroundspark_2025(537, 2486), 3);
    add_object(create_bossmorpherhead_3471(-136, 2032), 3);
    add_object(create_objectpetal_302(10905, 1449), 3);
    add_object(create_objectpetal_302(10969, 1481), 3);
    add_object(create_objectpetal_302(11033, 1513), 3);
    add_object(create_objectpetal_302(11097, 1545), 3);
    add_object(create_objectpetal_302(11161, 1577), 3);
    add_object(create_objectpetal_302(11225, 1609), 3);
    add_object(create_objectpetal_302(11289, 1641), 3);
    add_object(create_objectpetal_302(11353, 1673), 3);
    add_object(create_objectpetal_302(11417, 1705), 3);
    add_object(create_objectpetal_302(11481, 1737), 3);
    add_object(create_objectpetal_302(11545, 1769), 3);
    add_object(create_objectpetal_302(11609, 1801), 3);
    add_object(create_objectpetal_302(11673, 1833), 3);
    add_object(create_objectpetal_302(11737, 1865), 3);
    add_object(create_enemysuperturretus_1828(13059, 2072), 3);
    add_object(create_enemysuperturretus_1828(13147, 2024), 3);
    add_object(create_enemysuperturretus_1828(13235, 1976), 3);
    add_object(create_subtitledata_3472(-72, 472), 3);
    add_object(create_pressuredoor3_3473(12318, 1936), 3);
    add_object(create_pressuredoor3_3473(12830, 1936), 3);
    add_object(create_pressuredoor3_3473(6270, 736), 3);
    add_object(create_pressuredoor3_3473(6398, 736), 3);
    add_object(create_pressuredoor3_3473(30, 512), 3);
    add_object(create_monitorfireshield_328(8896, 1536), 3);
    add_object(create_minibosspushbeamcannon_3474(12928, 1936), 3);
    add_object(create_minibosspushbeam_3475(12928, 1968), 3);
    add_object(create_monitorbomb_563(12512, 2016), 3);
    add_object(create_monitorbomb_563(12480, 2016), 3);
    add_object(create_monitorbomb_563(12544, 2016), 3);
    add_object(create_monitorbomb_563(12576, 2016), 3);
    add_object(create_monitorbomb_563(12608, 2016), 3);
    add_object(create_monitorbomb_563(12640, 2016), 3);
    add_object(create_fdspiralsparktowerlight_3423(14344, 2112), 3);
    add_object(create_fdspiralsparktowerlight_3423(14344, 2144), 3);
    add_object(create_hazardspiralsparkmaker_3422(14336, 2036), 3);
    add_object(create_fdspiralsparktowerlight_3423(14088, 2112), 3);
    add_object(create_fdspiralsparktowerlight_3423(14088, 2144), 3);
    add_object(create_hazardspiralsparkmaker_3422(14080, 2036), 3);
    add_object(create_fdspiralsparktowerlight_3423(14216, 2112), 3);
    add_object(create_fdspiralsparktowerlight_3423(14216, 2144), 3);
    add_object(create_hazardspiralsparkmaker_3422(14208, 2036), 3);
    add_object(create_hazardzapbeamcannon_3420(6752, 1120), 3);
    add_object(create_hazardzapbeamhitbox_3421(6753, 1192), 3);
    add_object(create_objectfuel_528(12684, 2100), 3);
    add_object(create_redspringup_440(3712, 1264), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
    add_background_object(create_teetertotteraxle_824(4720, 1040), 4);
    add_background_object(create_fdhangarwall2_3393(1024, 1440), 4);
    add_background_object(create_fdhangarfloor4_3390(1152, 1440), 4);
    add_background_object(create_fdhangarfloor8_3394(1376, 1440), 4);
    add_background_object(create_fdhangarfloor4_3390(1536, 1440), 4);
    add_background_object(create_fdhangarfloor8_3394(1760, 1440), 4);
    add_background_object(create_fdhangarwall2_3393(1792, 1440), 4);
    add_background_object(create_fdhangarfloor8_3394(1376, 928), 4);
    add_background_object(create_fdhangarwall2_3393(1408, 928), 4);
    add_background_object(create_fdhangarfloor4_3390(1536, 928), 4);
    add_background_object(create_fdhangarwall2_3393(1024, 928), 4);
    add_background_object(create_fdhangarfloor4_3390(1152, 928), 4);
    add_background_object(create_fdhangarwall2_3393(2048, 1440), 4);
    add_background_object(create_fdhangarfloor4_3390(2176, 1440), 4);
    add_background_object(create_fdhangarfloor8_3394(2400, 1440), 4);
    add_background_object(create_fdhangarwall2_3393(2432, 1440), 4);
    add_background_object(create_fdhangarwall2_3393(2688, 1440), 4);
    add_background_object(create_fdhangarfloor8_3394(3040, 1440), 4);
    add_background_object(create_fdhangarwall2_3393(3072, 1440), 4);
    add_background_object(create_fdhangarfloor4_3390(2816, 1440), 4);
    add_background_object(create_fdhangarfloor7_3399(2464, 1440), 4);
    add_background_object(create_fdhangarfloor5_3398(2560, 1440), 4);
    add_background_object(create_fdhangarfloor11_3404(2496, 1440), 4);
    add_background_object(create_fdhangarfloor4_3390(1408, 1440), 4);
    add_background_object(create_fdhangarfloor8_3394(1504, 1440), 4);
    add_background_object(create_fdhangarfloor7_3399(768, 1504), 4);
    add_background_object(create_fdhangarfloor5_3398(864, 1496), 4);
    add_background_object(create_fdhangarfloor11_3404(800, 1504), 4);
    add_background_object(create_fdhangarfloor4_3390(768, 1440), 4);
    add_background_object(create_fdhangarfloor8_3394(864, 1440), 4);
    add_background_object(create_fdhangarfloor4_3390(4224, 864), 4);
    add_background_object(create_fdhangarfloor8_3394(4448, 864), 4);
    add_background_object(create_fdhangarwall1_3392(4480, 864), 4);
    add_background_object(create_fdhangarwall1_3392(4096, 864), 4);
    add_background_object(create_fdhangarfloor6_3400(4096, 960), 4);
    add_background_object(create_fdhangarfloor6_3400(4160, 960), 4);
    add_background_object(create_fdhangarfloor2_3397(4192, 960), 4);
    add_background_object(create_fdhangarwall1_3392(3968, 864), 4);
    add_background_object(create_fdhangarfloor6_3400(3968, 960), 4);
    add_background_object(create_fdhangarfloor6_3400(4032, 960), 4);
    add_background_object(create_fdhangarfloor3_3401(3968, 960), 4);
    add_background_object(create_fdhangarwall1_3392(4608, 864), 4);
    add_background_object(create_fdhangarwall2_3393(3200, 1440), 4);
    add_background_object(create_fdhangarwall1_3392(1920, 1440), 4);
    add_background_object(create_fdhangarfloor4_3390(1536, 928), 4);
    add_background_object(create_fdhangarwall1_3392(896, 928), 4);
    add_background_object(create_teetertotteraxle_824(4880, 1040), 4);
    add_background_object(create_fdhangarwall1_3392(5248, 1376), 4);
    add_background_object(create_fdhangarfloor4_3390(5504, 1376), 4);
    add_background_object(create_fdhangarfloor8_3394(5728, 1376), 4);
    add_background_object(create_fdhangarwall1_3392(5888, 1376), 4);
    add_background_object(create_fdhangarwall2_3393(5376, 1376), 4);
    add_background_object(create_fdhangarwall2_3393(5760, 1376), 4);
    add_background_object(create_fdhangarfloor8_3394(6240, 1376), 4);
    add_background_object(create_fdhangarwall2_3393(6272, 1376), 4);
    add_background_object(create_fdhangarfloor4_3390(6400, 1376), 4);
    add_background_object(create_fdhangarfloor4_3390(6016, 1376), 4);
    add_background_object(create_fdhangarfloor8_3394(6624, 1376), 4);
    add_background_object(create_fdhangarwall2_3393(6656, 1376), 4);
    add_background_object(create_fdhangarfloor4_3390(6784, 1376), 4);
    add_background_object(create_teetertotteraxle_824(6320, 1136), 4);
    add_background_object(create_fdhangarfloor5_3398(5984, 1376), 4);
    add_background_object(create_fdhangarfloor7_3399(5888, 1376), 4);
    add_background_object(create_fdhangarfloor11_3404(5920, 1376), 4);
    add_background_object(create_fdhangarwall1_3392(7360, 1760), 4);
    add_background_object(create_fdhangarfloor4_3390(7488, 1760), 4);
    add_background_object(create_fdhangarfloor4_3390(7488, 1824), 4);
    add_background_object(create_fdhangarwall1_3392(8128, 1760), 4);
    add_background_object(create_fdhangarfloor8_3394(8096, 1824), 4);
    add_background_object(create_fdhangarfloor8_3394(8096, 1760), 4);
    add_background_object(create_fdhangarwall1_3392(7744, 1760), 4);
    add_background_object(create_fdhangarfloor8_3394(7712, 1824), 4);
    add_background_object(create_fdhangarfloor8_3394(7712, 1760), 4);
    add_background_object(create_fdhangarfloor4_3390(7872, 1760), 4);
    add_background_object(create_fdhangarfloor4_3390(7872, 1824), 4);
    add_background_object(create_teetertotteraxle_824(6736, 1104), 4);
    add_object(create_enemyspawntube_2195(1472, 1452), 4);
    add_object(create_enemyspawntube_2195(832, 1452), 4);
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
    add_object(create_hazardspikesup_2669(-208, 392), 5);
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
    add_object(create_cameralimitbossbottom_420(13104, 2143), 5);
    add_object(create_cameralimitbossleft_421(12856, 2024), 5);
    add_object(create_cameralimitbossright_422(13399, 2024), 5);
    add_object(create_cameralimitbosstop_423(13096, 1904), 5);
    add_object(create_cameratriggerboss_424(13016, 1672), 5);
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
    add_object(create_layerobject_10(-88, 1016), 5);
    add_object(create_alarmlight_3476(0, 0), 5);
    add_object(create_sarassteampluginfreedomplanet_26(-72, -128), 5);
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
    add_object(create_subtitletext_3433(-160, 176), 6);
    add_object(create_levelcardfade_461(0, 0), 7);
    add_object(create_levelcardfade2_24(-328, -336), 7);
    add_object(create_levelcardactclear4_846(-48, 212), 7);
    add_object(create_levelcardactclear2_848(-88, 88), 7);
    add_object(create_levelcardactclear3_849(-72, 88), 7);
    add_object(create_totalcrystals_854(44, 230), 7);
    add_object(create_levelcardbonus1_850(-12, 109), 7);
    add_object(create_levelcardbonus2_851(76, 109), 7);
    add_object(create_levelcardgameover_462(0, 256), 7);
    add_object(create_guilifebasemeter_125(0, 0), 7);
    add_object(create_levelcardactclear1_847(-160, 24), 7);
    add_object(create_levelcardintro1_464(16, -240), 7);
    add_object(create_levelcardintro3_760(0, 248), 7);
    add_object(create_levelcardintro2_761(0, 248), 7);
    add_object(create_levelcardbonus3_852(-16, -64), 7);
    add_object(create_totalbonus_853(-18, -40), 7);
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
    loop_hopper_running = false;
    loop_hopper_index = 0;
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
    loop_sound_idle5_running = false;
    loop_sound_idle5_index = 0;
    loop_restart_running = false;
    loop_restart_index = 0;
    loop_hopper_spore_running = false;
    loop_hopper_spore_index = 0;
    loop_process_call_me_running = false;
    loop_process_call_me_index = 0;
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
    loop_hopper_floor_running = false;
    loop_hopper_floor_index = 0;
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
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_66, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_66, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_66, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_66, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_66, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_66, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_66, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_66, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_66, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_66, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_66, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_66, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_66, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_66, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_66, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_66, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_66, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_66, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_66, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_66, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_66, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_66, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_66, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_66, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_66, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_66, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_66, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_66, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_66, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_66, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_66, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_66, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_66, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_66, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_66, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_66, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_66, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_66, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_66, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_66, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_66, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_66, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_66, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_66, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_66, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_66, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_66, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_66, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_66, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_66, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_66, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_66, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_66, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_2043_66 = loop_count;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_1388_13 = loop_count;
    not_always_44_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    not_always_1978_66 = loop_count;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_172_8 = loop_count;
    once_condition_1531_23 = false;
    not_always_449_13 = loop_count;
    not_always_97_0 = loop_count;
    not_always_1449_13 = loop_count;
    not_always_1517_19 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    not_always_101_0 = loop_count;
    not_always_2050_66 = loop_count;
    not_always_1425_13 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    not_always_1717_17 = loop_count;
    once_condition_138_0 = false;
    not_always_1512_66 = loop_count;
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
    not_always_43_13 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_121_0 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1033_13 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1 = false;
    once_condition_1837_65 = false;
    not_always_600_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    not_always_2044_66 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_96_0 = loop_count;
    not_always_130_0 = loop_count;
    group_main_engine_level_specific_methods_stage_clear_1 = true;
    group_main_engine_level_specific_methods_bosses_boss_morpher_speed_lines_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    not_always_308_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1 = false;
    once_condition_1911_66 = false;
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
    not_always_1983_66 = loop_count;
    not_always_1447_13 = loop_count;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_52_13 = loop_count;
    not_always_1036_13 = loop_count;
    not_always_1035_13 = loop_count;
    not_always_1976_66 = loop_count;
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
    not_always_69_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_morpher_1 = false;
    not_always_1496_34 = loop_count;
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
    not_always_1518_19 = loop_count;
    group_mac_controls_1 = false;
    not_always_1740_14 = loop_count;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    once_condition_2066_66 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
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
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_540_13 = loop_count;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    not_always_1421_13 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_70_13 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1507_66 = loop_count;
    not_always_1450_13 = loop_count;
    once_condition_63_13 = false;
    not_always_1991_66 = loop_count;
    group_main_engine_level_specific_methods_frame_transition_1 = false;
    not_always_174_8 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    once_condition_66_13 = false;
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1 = true;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_morpher_scrolling_floor_movement_1 = true;
    not_always_1039_13 = loop_count;
    not_always_95_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    once_condition_59_14 = false;
    not_always_809_13 = loop_count;
    once_condition_48_13 = false;
    not_always_67_13 = loop_count;
    not_always_103_0 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    group_sound_events_carol_1 = false;
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1 = false;
    every_819_13 = 0.0f;
    not_always_1510_19 = loop_count;
    once_condition_58_14 = false;
    group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    not_always_1467_65 = loop_count;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_744_13 = loop_count;
    not_always_1038_13 = loop_count;
    not_always_1741_14 = loop_count;
    once_condition_65_13 = false;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    once_condition_50_13 = false;
    once_condition_37_13 = false;
    not_always_1515_19 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_2295_66 = loop_count;
    not_always_554_13 = loop_count;
    once_condition_35_13 = false;
    not_always_1514_19 = loop_count;
    not_always_2034_66 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    group_main_engine_scrolling_floor_1 = false;
    not_always_1977_66 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_4_19 = false;
    not_always_59_13 = loop_count;
    not_always_1525_19 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::loop_spawndebris_67()
{
    event_func_1176();
    event_func_1177();
    event_func_1178();
    event_func_10018();
    event_func_11381();
    event_func_6637();
    event_func_9426();
}
void Frames::event_func_14340()
{
    // event 2061_67
    {
        if (!(group_main_engine_1)) goto event_2061_67_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_stage10b_ogg_233, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_2061_67_end: ;
}
void Frames::loop_play_music_5_67()
{
    event_func_14340();
}
void Frames::loop_wrapper_sound_hurt1_67(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_67(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_67(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_67(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_67(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_67(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_process_call_resume_music_67(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_sound_idle7_67(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_67(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_13();
}
void Frames::loop_wrapper_sound_dig2_67(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_67(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_67(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_67(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_sound_explode5_67(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_67(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_process_call_unlock_music_67(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_67(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_sound_explode8_67(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_process_call_reset_music_67(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_67(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_67(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_67(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_explode0_67(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_67(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_67(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_camera_mode1_67(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_13();
}
void Frames::loop_wrapper_camera_mode0_67(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_13();
}
void Frames::loop_wrapper_process_call_play_music_67(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_sound_attack1_67(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_67(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_67(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_67(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_play_music_8_67(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_uppercut3_67(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_67(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_67(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_67(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_67(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_67(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_67(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_67(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_67(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_13();
}
void Frames::loop_wrapper_play_music_5_67(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_67();
}
void Frames::loop_wrapper_play_music_6_67(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_59();
}
void Frames::loop_wrapper_sound_go0_67(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_unqueue_music_67(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_process_call_me_67(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_67(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_59();
}
void Frames::loop_wrapper_sound_explode3_67(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_cyclone0_67(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_sound_explode2_67(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_67(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_process_call_stop_music_67(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::event_func_14341()
{
    // event 1832_67
    {
        if (!(group_main_engine_1)) goto event_1832_67_end;
        lockedlabdoorback_3506_instances.clear_selection();
        for (ObjectIterator it(lockedlabdoorback_3506_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((Active*)foreach_instance_door)->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!lockedlabdoorback_3506_instances.has_selection()) goto event_1832_67_end;
        for (ObjectIterator it(lockedlabdoorback_3506_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)foreach_instance_door)->alterables->values.get(0));
        }
    }
    event_1832_67_end: ;
}
void Frames::event_func_14342()
{
    // event 1833_67
    {
        if (!(group_main_engine_1)) goto event_1833_67_end;
        lockedlabdoorfront_3544_instances.clear_selection();
        for (ObjectIterator it(lockedlabdoorfront_3544_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((Active*)foreach_instance_door)->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!lockedlabdoorfront_3544_instances.has_selection()) goto event_1833_67_end;
        for (ObjectIterator it(lockedlabdoorfront_3544_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)foreach_instance_door)->alterables->values.get(0));
        }
    }
    event_1833_67_end: ;
}
void Frames::event_func_14343()
{
    // event 1834_67
    {
        if (!(group_main_engine_1)) goto event_1834_67_end;
        lockedlabdoorbarrier_3541_instances.clear_selection();
        for (ObjectIterator it(lockedlabdoorbarrier_3541_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((Active*)foreach_instance_door)->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!lockedlabdoorbarrier_3541_instances.has_selection()) goto event_1834_67_end;
        for (ObjectIterator it(lockedlabdoorbarrier_3541_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)foreach_instance_door)->alterables->values.get(0));
        }
    }
    event_1834_67_end: ;
}
void Frames::foreach_door_67()
{
    event_func_10737();
    event_func_14341();
    event_func_14342();
    event_func_14343();
}
void Frames::foreach_spawner_67()
{
    event_func_13954();
}
void Frames::test_collisions_67()
{
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions_save(playerreflect_447_instances, enemypellet_863_instances, 1, 1, (EventFunction)&Frames::col_1_30);
    test_collisions(qualifier_8, playerreflect_447_instances, 2147483648, 2, (EventFunction)&Frames::col_5_13);
    test_collisions(playerreflect_447_instances, enemybullet_2098_instances, 4, 1, (EventFunction)&Frames::col_3_36);
    test_collisions(playerreflect_447_instances, hazardspiralspark_3375_instances, 8, 1, (EventFunction)&Frames::col_9_65);
    test_collisions(qualifier_20, playerprojectile_320_instances, 1073741824, 1, (EventFunction)&Frames::col_7_13);
    test_collisions(playerreflect_447_instances, enemytrooperlaser_2508_instances, 16, 1, (EventFunction)&Frames::col_5_29);
    test_collisions(qualifier_7, playerreflect_447_instances, 536870912, 32, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 268435456, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_20, enemypellet_863_instances, 134217728, 2, (EventFunction)&Frames::col_11_30);
    test_collisions(playerreflect_447_instances, enemyhomingbullet_2568_instances, 64, 1, (EventFunction)&Frames::col_8_44);
    test_collisions(qualifier_7, effectsdebris_319_instances, 67108864, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_7, enemyhomingbullet_2568_instances, 33554432, 2, (EventFunction)&Frames::col_7_44);
    test_collisions_save(playerreflect_447_instances, enemyfiresprite_1095_instances, 128, 1, (EventFunction)&Frames::col_15_24);
    test_collisions(enemylimiter_350_instances, enemyslug_1182_instances, 1, 1, (EventFunction)&Frames::col_16_24);
    test_collisions(qualifier_7, objectcrystal_279_instances, 16777216, 2, (EventFunction)&Frames::col_1_13);
    test_collisions(playercharactersensor_383_instances, enemypellet_863_instances, 1, 4, (EventFunction)&Frames::col_7_20);
    test_collisions(enemytrooperlaser_2508_instances, enemyelite_2510_instances, 2, 1, (EventFunction)&Frames::col_16_43);
    test_collisions(qualifier_7, enemybullet_2098_instances, 8388608, 2, (EventFunction)&Frames::col_8_20);
    test_collisions(playercharactersensor_383_instances, enemybullet_2098_instances, 2, 4, (EventFunction)&Frames::col_28_36);
    test_collisions(shieldearth_314_instances, enemybullet_2098_instances, 1, 8, (EventFunction)&Frames::col_20_36);
    test_collisions(qualifier_8, effectsdebris_319_instances, 4194304, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(playercharactersensor_383_instances, enemyslimeburst_652_instances, 4, 1, (EventFunction)&Frames::col_11_16);
    test_collisions(playercharactersensor_383_instances, enemysleepgas_2889_instances, 8, 1, (EventFunction)&Frames::col_6_50);
    test_collisions(qualifier_20, objectcrystal_279_instances, 2097152, 4, (EventFunction)&Frames::col_2_13);
    test_collisions(enemybullet_2098_instances, enemyaxleturret_2201_instances, 16, 1, (EventFunction)&Frames::col_25_36);
    test_collisions(playercharactersensor_383_instances, enemyhomingbullet_2568_instances, 16, 4, (EventFunction)&Frames::col_12_44);
    test_collisions(enemylimiter_350_instances, enemyelitemask_2511_instances, 2, 1, (EventFunction)&Frames::col_27_43);
    test_collisions(qualifier_7, playerprojectile_320_instances, 1048576, 2, (EventFunction)&Frames::col_6_13);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 1, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, enemypellet_863_instances, 524288, 8, (EventFunction)&Frames::col_8_20);
    test_collisions(playercharactersensor_383_instances, enemyfiresprite_1095_instances, 32, 2, (EventFunction)&Frames::col_26_24);
    ObjectList::iterator it1, it2;
    for (it1 = playerreflect_447_instances.begin(); it1 != playerreflect_447_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_14_13();
    }
    for (it1 = playerprojectile_320_instances.begin(); it1 != playerprojectile_320_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_13_13();
    }
    for (it1 = enemypellet_863_instances.begin(); it1 != enemypellet_863_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_20_20();
    }
    for (it1 = bossrobosquidleftarm_2749_instances.begin(); it1 != bossrobosquidleftarm_2749_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_33_46();
    }
    for (it1 = enemybullet_2098_instances.begin(); it1 != enemybullet_2098_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_20_20();
    }
    for (it1 = enemyhomingbullet_2568_instances.begin(); it1 != enemyhomingbullet_2568_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_27_44();
    }
    for (it1 = objectcrystal_279_instances.begin(); it1 != objectcrystal_279_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_12_13();
    }
    for (it1 = effectsdebris_319_instances.begin(); it1 != effectsdebris_319_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_11_13();
    }
    for (it1 = bossrobosquidrightarm_2750_instances.begin(); it1 != bossrobosquidrightarm_2750_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_33_46();
    }
}
void Frames::event_func_14344()
{
    // event 535_67
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_535_67_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_535_67_end;
        FrameObject * single_instance_535_67_0; single_instance_535_67_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_535_67_0 == NULL)
                    single_instance_535_67_0 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_67();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_535_67_end: ;
}
void Frames::event_func_14345()
{
    // event 552_67
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_552_67_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_552_67_end;
        FrameObject * single_instance_552_67_0; single_instance_552_67_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_552_67_0 == NULL)
                    single_instance_552_67_0 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_67();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_552_67_end: ;
}
void Frames::event_func_14346()
{
    // event 686_67
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_686_67_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_686_67_end;
        FrameObject * single_instance_686_67_0; single_instance_686_67_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_686_67_0 == NULL)
                    single_instance_686_67_0 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_67();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_686_67_end: ;
}
void Frames::event_func_14347()
{
    // event 1399_67
    {
        if (!(group_main_engine_1)) goto event_1399_67_end;
        qualifier_13.clear_selection();
        for (QualifierIterator it(qualifier_13); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
            ((Active*)*it)->alterables->flags.disable(6);
        }
    }
    event_1399_67_end: ;
}
void Frames::event_func_14348()
{
    // event 1400_67
    {
        if (!(group_main_engine_1)) goto event_1400_67_end;
        qualifier_13.clear_selection();
        for (QualifierIterator it(qualifier_13); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()))) { it.deselect(); continue; }
        }
        if (!qualifier_13.has_selection()) goto event_1400_67_end;
        for (QualifierIterator it(qualifier_13); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1400_67_end: ;
}
void Frames::event_func_14349()
{
    // event 1414_67
    {
        if (!(group_main_engine_1)) goto event_1414_67_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (95))) goto event_1414_67_end;
        if (!((((Active*)get_instance(objecttransporternode90_3428_instances))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-12))) goto event_1414_67_end;
        if (!((((Active*)get_instance(objecttransporternode90_3428_instances))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+12))) goto event_1414_67_end;
        if (!((((Active*)get_instance(objecttransporternode90_3428_instances))->get_y()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-12))) goto event_1414_67_end;
        if (!((((Active*)get_instance(objecttransporternode90_3428_instances))->get_y()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+12))) goto event_1414_67_end;
        if (!((((Active*)get_instance(objecttransporterwave_3414_instances))->alterables->values.get(0)) != (90))) goto event_1414_67_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(objecttransporternode90_3428_instances))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(objecttransporternode90_3428_instances))->get_y());
        media.play_id(SOUND_TELEPORT_START_347, -1, 1);
        ((Active*)get_instance(objecttransporterwave_3414_instances))->alterables->values.set(0, 90);
    }
    event_1414_67_end: ;
}
void Frames::event_func_14350()
{
    // event 1422_67
    {
        if (!(group_main_engine_1)) goto event_1422_67_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (4))) goto event_1422_67_end;
        playershieldgiver_3499_instances.clear_selection();
        for (ObjectIterator it(playershieldgiver_3499_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-150))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+150))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+100))) { it.deselect(); continue; }
        }
        if (!playershieldgiver_3499_instances.has_selection()) goto event_1422_67_end;
        for (ObjectIterator it(playershieldgiver_3499_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
        }
    }
    event_1422_67_end: ;
}
void Frames::event_func_14351()
{
    // event 1423_67
    {
        if (!(group_main_engine_1)) goto event_1423_67_end;
        playershieldgiver_3499_instances.clear_selection();
        for (ObjectIterator it(playershieldgiver_3499_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!playershieldgiver_3499_instances.has_selection()) goto event_1423_67_end;
        for (ObjectIterator it(playershieldgiver_3499_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(1)/math_helper/3);
        }
    }
    event_1423_67_end: ;
}
void Frames::event_func_14352()
{
    // event 1424_67
    {
        if (!(group_main_engine_1)) goto event_1424_67_end;
        playershieldgiver_3499_instances.clear_selection();
        for (ObjectIterator it(playershieldgiver_3499_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (30))) { it.deselect(); continue; }
        }
        if (!playershieldgiver_3499_instances.has_selection()) goto event_1424_67_end;
        for (ObjectIterator it(playershieldgiver_3499_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1424_67_end: ;
}
