#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_5873()
{
    // event 1872_26
    {
        if (!(group_main_engine_1)) goto event_1872_26_end;
        ((Active*)get_instance(playersensorbottombig_397_instances))->set_y(((Active*)get_instance(playersensorbottombig_397_instances))->get_y()+3);
    }
    event_1872_26_end: ;
}
void Frames::event_func_5874()
{
    // event 1873_26
    bool or_result_1873_26 = false;
    bool or_temp_result_1873_26_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1873_26_0_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickmovingpillar1_1407_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickmovingpillar1_1407_instances)) goto or_event_1873_26_0_end;
        playersensortopbig_395_instances.clear_selection();
        for (ObjectIterator it(playersensortopbig_395_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playersensortopbig_395_instances.has_selection()) goto or_event_1873_26_0_end;
        or_result_1873_26 = true;
        or_temp_result_1873_26_0 = true;
    }
    or_event_1873_26_0_end: ;
    playersensortopbig_395_instances.clear_saved_selection();
    playersensorbottombig_397_instances.clear_saved_selection();
    gimmickmovingpillar1_1407_instances.clear_saved_selection();
    if (or_temp_result_1873_26_0) {
        playersensortopbig_395_instances.save_selection();
        playersensorbottombig_397_instances.save_selection();
        gimmickmovingpillar1_1407_instances.save_selection();
    }
    // event 1873_26
    bool or_temp_result_1873_26_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1873_26_1_end;
        playersensortopbig_395_instances.clear_selection();
        gimmickmovingpillar3_1409_instances.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, gimmickmovingpillar3_1409_instances)) goto or_event_1873_26_1_end;
        playersensorbottombig_397_instances.clear_selection();
        for (ObjectIterator it(playersensorbottombig_397_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playersensorbottombig_397_instances.has_selection()) goto or_event_1873_26_1_end;
        or_result_1873_26 = true;
        or_temp_result_1873_26_1 = true;
        or_event_1873_26_1_end: ;
        gimmickmovingpillar3_1409_instances.clear_saved_selection();
        if (or_temp_result_1873_26_1) {
            gimmickmovingpillar3_1409_instances.save_selection();
            playersensortopbig_395_instances.save_selection();
            playersensorbottombig_397_instances.save_selection();
        }
        if (!or_result_1873_26) goto or_final_or_event_1873_26_1_end;
        gimmickmovingpillar3_1409_instances.empty_selection();
        playersensorbottombig_397_instances.empty_selection();
        gimmickmovingpillar1_1407_instances.empty_selection();
        playersensortopbig_395_instances.empty_selection();
        if (or_temp_result_1873_26_1) {
            gimmickmovingpillar3_1409_instances.restore_selection();
        }
        if (or_temp_result_1873_26_0 || or_temp_result_1873_26_1) {
            playersensortopbig_395_instances.restore_selection();
        }
        if (or_temp_result_1873_26_0 || or_temp_result_1873_26_1) {
            playersensorbottombig_397_instances.restore_selection();
        }
        if (or_temp_result_1873_26_0) {
            gimmickmovingpillar1_1407_instances.restore_selection();
        }
        guirings_122_instances.clear_selection();
        for (ObjectIterator it(guirings_122_instances); !it.end(); ++it) {
            ((Counter*)*it)->set(0);
        }
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(17, 1);
        }
        guilifebasemeter_125_instances.clear_selection();
        for (ObjectIterator it(guilifebasemeter_125_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 1);
        }
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(4, 0);
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 9);
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    or_final_or_event_1873_26_1_end: ;
}
void Frames::event_func_5875()
{
    // event 1874_26
    {
        if (!(group_main_engine_1)) goto event_1874_26_end;
        ((Active*)get_instance(playersensorbottombig_397_instances))->set_y(((Active*)get_instance(playersensorbottombig_397_instances))->get_y()-3);
    }
    event_1874_26_end: ;
}
void Frames::event_func_5876()
{
    // event 1875_26
    {
        if (!(group_main_engine_1)) goto event_1875_26_end;
        gimmickhangingidleswitch_1257_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!gimmickhangingidleswitch_1257_instances.has_selection()) goto event_1875_26_end;
        gimmickmovingpillar1_1407_instances.clear_selection();
        for (ObjectIterator it(gimmickmovingpillar1_1407_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.set(2, 0-((Active*)*it)->alterables->values.get(2));
        }
        gimmickmovingpillar2_1408_instances.clear_selection();
        for (ObjectIterator it(gimmickmovingpillar2_1408_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.set(2, 0-((Active*)*it)->alterables->values.get(2));
        }
        gimmickmovingpillar3_1409_instances.clear_selection();
        for (ObjectIterator it(gimmickmovingpillar3_1409_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.set(2, 0-((Active*)*it)->alterables->values.get(2));
        }
        media.play_id(SOUND_DRAG2_62, -1, 0);
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    event_1875_26_end: ;
}
void Frames::event_func_5877()
{
    // event 2084_26
    {
        if (!(group_main_engine_1)) goto event_2084_26_end;
        levelparallaxpiece0r_1090_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece0r_1090_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_fill(Color(make_color_int(78-30*cos_deg((frame_time * 1000.0)/math_helper/10), 0, 0)));
        }
    }
    event_2084_26_end: ;
}
void Frames::event_func_5878()
{
    // event 2085_26
    {
        if (!(group_pause_1)) goto event_2085_26_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_2085_26_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2085_26_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_2085_26_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_2085_26_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(true);
        media.pause_samples();
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
        enemysporeprojectile_969_instances.clear_selection();
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
            group_main_engine_1 = false;
    
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        minibossflame_1199_instances.clear_selection();
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        gimmickpickaxe_1402_instances.clear_selection();
        for (ObjectIterator it(gimmickpickaxe_1402_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(gimmickpickaxebase_1401_instances))->stop_animation();
        ((Active*)get_instance(gimmickpickaxebase2_1403_instances))->stop_animation();
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsspringbeam_470_instances.clear_selection();
        for (ObjectIterator it(effectsspringbeam_470_instances); !it.end(); ++it) {
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
        enemyfiresprite_1095_instances.clear_selection();
        for (ObjectIterator it(enemyfiresprite_1095_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
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
        ((Active*)get_instance(gimmickelevator_1397_instances))->stop_animation();
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
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
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
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        enemyspark_1101_instances.clear_selection();
        for (ObjectIterator it(enemyspark_1101_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossclawtalons_1392_instances.clear_selection();
        for (ObjectIterator it(bossclawtalons_1392_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossclawpiece1_1281_instances.clear_selection();
        for (ObjectIterator it(bossclawpiece1_1281_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossclawpiece4_1278_instances.clear_selection();
        for (ObjectIterator it(bossclawpiece4_1278_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_2085_26_end: ;
}
void Frames::event_func_5879()
{
    // event 2086_26
    bool or_result_2086_26 = false;
    bool or_temp_result_2086_26_0 = false;
    {
        if (!(group_pause_1)) goto or_event_2086_26_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_2086_26_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2086_26_0_end;
        or_result_2086_26 = true;
        or_temp_result_2086_26_0 = true;
    }
    or_event_2086_26_0_end: ;
    // event 2086_26
    bool or_temp_result_2086_26_1 = false;
    {
        if (!(group_pause_1)) goto or_event_2086_26_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_2086_26_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2086_26_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_2086_26_1_end;
        or_result_2086_26 = true;
        or_temp_result_2086_26_1 = true;
        or_event_2086_26_1_end: ;
        if (!or_result_2086_26) goto or_final_or_event_2086_26_1_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(false);
        media.resume_samples();
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 2);
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
        enemysporeprojectile_969_instances.clear_selection();
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        if (!group_main_engine_1) {
            group_main_engine_1 = true;
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        minibossflame_1199_instances.clear_selection();
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        gimmickpickaxe_1402_instances.clear_selection();
        for (ObjectIterator it(gimmickpickaxe_1402_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(gimmickpickaxebase_1401_instances))->start_animation();
        ((Active*)get_instance(gimmickpickaxebase2_1403_instances))->start_animation();
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
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
        enemyfiresprite_1095_instances.clear_selection();
        for (ObjectIterator it(enemyfiresprite_1095_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
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
        ((Active*)get_instance(gimmickelevator_1397_instances))->start_animation();
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
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
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
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->start_animation();
        enemyspark_1101_instances.clear_selection();
        for (ObjectIterator it(enemyspark_1101_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossclawtalons_1392_instances.clear_selection();
        for (ObjectIterator it(bossclawtalons_1392_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossclawpiece1_1281_instances.clear_selection();
        for (ObjectIterator it(bossclawpiece1_1281_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossclawpiece4_1278_instances.clear_selection();
        for (ObjectIterator it(bossclawpiece4_1278_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_2086_26_1_end: ;
}
void Frames::handle_frame_27_events()
{
    test_collisions_26();
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
    event_func_5307();
    event_func_4593();
    event_func_3904();
    event_func_2650();
    if (!group_main_engine_1) goto group_main_engine_1_end;
    event_func_5601();
    event_func_5399();
    event_func_5400();
    event_func_5401();
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
    event_func_1369();
    event_func_1370();
    event_func_1371();
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
    event_func_5602();
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
    event_func_5603();
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
    event_func_5604();
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
    event_func_4529();
    event_func_4530();
    event_func_1980();
    event_func_1981();
    event_func_1982();
    event_func_1983();
    event_func_1984();
    event_func_1985();
    event_func_1986();
    event_func_4531();
    event_func_1987();
    event_func_4532();
    event_func_1988();
    event_func_1989();
    event_func_4533();
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
    event_func_1997();
    event_func_1998();
    event_func_1999();
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
    event_func_2024();
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
    event_func_4534();
    event_func_5605();
    event_func_2962();
    event_func_4536();
    event_func_5606();
    event_func_5607();
    event_func_5608();
    event_func_4540();
    event_func_4541();
    event_func_5609();
    event_func_5610();
    event_func_5611();
    event_func_4922();
    event_func_5612();
    event_func_5613();
    event_func_5614();
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
    if (!group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1) goto group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end;
    event_func_3737();
    event_func_3738();
    event_func_3739();
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end: ;
    event_func_5615();
    event_func_5616();
    event_func_5617();
    event_func_5618();
    event_func_5619();
    event_func_5620();
    event_func_5621();
    event_func_5622();
    event_func_5623();
    event_func_5624();
    event_func_5625();
    event_func_5626();
    event_func_5627();
    event_func_5628();
    event_func_5629();
    event_func_5630();
    event_func_5631();
    event_func_5632();
    event_func_5633();
    event_func_5634();
    event_func_5635();
    event_func_5636();
    event_func_5637();
    event_func_5638();
    event_func_5639();
    event_func_5640();
    event_func_5641();
    event_func_5642();
    event_func_5643();
    event_func_5212();
    event_func_5213();
    event_func_5644();
    event_func_5645();
    event_func_5646();
    event_func_5647();
    event_func_5648();
    event_func_5649();
    event_func_5650();
    event_func_5651();
    event_func_5652();
    event_func_5653();
    event_func_5654();
    event_func_5655();
    event_func_5656();
    event_func_5657();
    event_func_5658();
    event_func_5659();
    event_func_5660();
    event_func_5661();
    event_func_5662();
    event_func_5422();
    event_func_5663();
    event_func_5664();
    event_func_5665();
    event_func_5666();
    event_func_5667();
    event_func_5668();
    event_func_5669();
    event_func_5670();
    event_func_5671();
    event_func_5672();
    event_func_5673();
    event_func_5674();
    event_func_5675();
    event_func_5676();
    event_func_5677();
    event_func_5678();
    event_func_5679();
    event_func_5680();
    event_func_5681();
    event_func_5682();
    event_func_5683();
    event_func_5684();
    event_func_5685();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_5308();
    event_func_5309();
    event_func_5310();
    event_func_5311();
    event_func_5312();
    event_func_5313();
    event_func_5314();
    event_func_5315();
    event_func_5316();
    event_func_5317();
    event_func_5318();
    event_func_5319();
    event_func_5320();
    event_func_5321();
    event_func_5322();
    event_func_5271();
    event_func_5272();
    event_func_5273();
    event_func_5274();
    event_func_5275();
    event_func_5276();
    event_func_5277();
    event_func_5278();
    event_func_5279();
    event_func_5280();
    event_func_5281();
    event_func_5282();
    event_func_5283();
    event_func_5284();
    event_func_5285();
    event_func_5286();
    event_func_5287();
    event_func_5288();
    event_func_5289();
    event_func_5290();
    event_func_5291();
    event_func_5292();
    event_func_5293();
    event_func_5294();
    event_func_5295();
    event_func_5296();
    event_func_5297();
    event_func_5298();
    event_func_5299();
    event_func_5300();
    event_func_5301();
    event_func_5302();
    event_func_5303();
    event_func_5304();
    event_func_5305();
    event_func_5306();
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
    event_func_5686();
    event_func_5270();
    event_func_4590();
    event_func_4591();
    event_func_4592();
    event_func_5687();
    event_func_5324();
    event_func_5325();
    event_func_5326();
    event_func_5327();
    event_func_5328();
    event_func_5329();
    event_func_5688();
    event_func_5331();
    event_func_5332();
    event_func_5333();
    event_func_5334();
    event_func_5335();
    event_func_5336();
    event_func_5337();
    event_func_5338();
    event_func_5339();
    event_func_5340();
    event_func_3902();
    event_func_3903();
    event_func_5341();
    event_func_5342();
    event_func_5343();
    event_func_5344();
    event_func_5345();
    event_func_5346();
    event_func_5347();
    event_func_5348();
    event_func_5349();
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
    event_func_5704();
    event_func_5705();
    event_func_5706();
    event_func_5707();
    event_func_2997();
    event_func_5708();
    event_func_3286();
    event_func_5709();
    event_func_5710();
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) goto group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end;
    event_func_5443();
    event_func_5711();
    event_func_4173();
    event_func_4638();
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end: ;
    event_func_5712();
    event_func_5713();
    event_func_5714();
    event_func_5715();
    event_func_5716();
    event_func_5717();
    if (!group_main_engine_level_specific_methods_cutscenes_claw_appears_1) goto group_main_engine_level_specific_methods_cutscenes_claw_appears_1_end;
    event_func_5718();
    event_func_5719();
    event_func_5720();
    event_func_5721();
    event_func_5722();
    event_func_5723();
    event_func_5724();
    event_func_5725();
    event_func_5726();
    event_func_5727();
    event_func_5728();
    event_func_5729();
    event_func_5730();
    event_func_5731();
    event_func_5732();
    event_func_5733();
    event_func_5734();
    event_func_5735();
    event_func_5736();
    event_func_5737();
    event_func_5738();
    event_func_5739();
    event_func_5740();
    event_func_5741();
    event_func_5742();
    event_func_5743();
    event_func_5744();
    event_func_5745();
    event_func_5746();
    event_func_5747();
    event_func_5748();
    event_func_5749();
    event_func_5750();
    event_func_5751();
    event_func_5752();
    event_func_5753();
    event_func_5754();
    event_func_5755();
    event_func_5756();
    event_func_5757();
    event_func_5758();
    event_func_5759();
    event_func_5760();
    event_func_5761();
    event_func_5762();
    event_func_5763();
    event_func_5764();
    event_func_5765();
    event_func_5766();
    event_func_5767();
    event_func_5768();
    event_func_5769();
    event_func_5770();
    group_main_engine_level_specific_methods_cutscenes_claw_appears_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_caravan_section_1) goto group_main_engine_level_specific_methods_cutscenes_caravan_section_1_end;
    if (!group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_main_1) goto group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_main_1_end;
    event_func_5771();
    event_func_5772();
    event_func_5773();
    event_func_5774();
    event_func_5775();
    event_func_5776();
    event_func_5777();
    event_func_5778();
    event_func_5779();
    event_func_5780();
    event_func_5781();
    event_func_5782();
    event_func_5783();
    event_func_5784();
    event_func_5785();
    event_func_5786();
    group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_main_1_end: ;
    event_func_5787();
    event_func_5788();
    event_func_5789();
    event_func_5790();
    if (!group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_engine_explode_1) goto group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_engine_explode_1_end;
    event_func_5791();
    event_func_5792();
    event_func_5793();
    event_func_5794();
    event_func_5795();
    event_func_5796();
    event_func_5797();
    event_func_5798();
    event_func_5799();
    event_func_5800();
    event_func_5801();
    event_func_5802();
    event_func_5803();
    event_func_5804();
    event_func_5805();
    event_func_5806();
    event_func_5807();
    group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_engine_explode_1_end: ;
    group_main_engine_level_specific_methods_cutscenes_caravan_section_1_end: ;
    event_func_5808();
    event_func_5809();
    event_func_5810();
    event_func_5811();
    if (!group_main_engine_level_specific_methods_bosses_1) goto group_main_engine_level_specific_methods_bosses_1_end;
    if (!group_main_engine_level_specific_methods_bosses_boss_claw_basics_1) goto group_main_engine_level_specific_methods_bosses_boss_claw_basics_1_end;
    event_func_5812();
    event_func_5813();
    event_func_5814();
    event_func_5815();
    event_func_5816();
    event_func_5817();
    group_main_engine_level_specific_methods_bosses_boss_claw_basics_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_claw_emerge_1) goto group_main_engine_level_specific_methods_bosses_boss_claw_emerge_1_end;
    event_func_5818();
    event_func_5819();
    event_func_5820();
    group_main_engine_level_specific_methods_bosses_boss_claw_emerge_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_claw_standby_1) goto group_main_engine_level_specific_methods_bosses_boss_claw_standby_1_end;
    event_func_5821();
    event_func_5822();
    event_func_5823();
    event_func_5824();
    event_func_5825();
    event_func_5826();
    event_func_5827();
    event_func_5828();
    event_func_5829();
    event_func_5830();
    group_main_engine_level_specific_methods_bosses_boss_claw_standby_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_claw_grab_attack_1) goto group_main_engine_level_specific_methods_bosses_boss_claw_grab_attack_1_end;
    event_func_5831();
    event_func_5832();
    event_func_5833();
    event_func_5834();
    event_func_5835();
    event_func_5836();
    event_func_5837();
    event_func_5838();
    event_func_5839();
    event_func_5840();
    group_main_engine_level_specific_methods_bosses_boss_claw_grab_attack_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_claw_laser_attack_1) goto group_main_engine_level_specific_methods_bosses_boss_claw_laser_attack_1_end;
    event_func_5841();
    event_func_5842();
    event_func_5843();
    event_func_5844();
    event_func_5845();
    event_func_5846();
    event_func_5847();
    event_func_5848();
    group_main_engine_level_specific_methods_bosses_boss_claw_laser_attack_1_end: ;
    event_func_5849();
    if (!group_main_engine_level_specific_methods_bosses_boss_claw_defeated_1) goto group_main_engine_level_specific_methods_bosses_boss_claw_defeated_1_end;
    event_func_5850();
    event_func_5851();
    event_func_5852();
    event_func_5853();
    event_func_5854();
    event_func_5855();
    event_func_5856();
    event_func_5857();
    event_func_5858();
    event_func_5859();
    event_func_5860();
    group_main_engine_level_specific_methods_bosses_boss_claw_defeated_1_end: ;
    event_func_5861();
    event_func_5862();
    event_func_5863();
    event_func_5864();
    event_func_5865();
    group_main_engine_level_specific_methods_bosses_1_end: ;
    event_func_5520();
    event_func_5866();
    event_func_5867();
    event_func_5868();
    event_func_5869();
    event_func_5870();
    event_func_5871();
    event_func_5872();
    event_func_5873();
    event_func_5874();
    event_func_5875();
    event_func_5876();
    event_func_5529();
    event_func_5530();
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
    event_func_3242();
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
    event_func_5877();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_5878();
    event_func_5879();
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
    group_debug_mode_debugging_1_end: ;
    group_debug_mode_1_end: ;
    event_func_226();
    event_func_227();
    event_func_228();
    event_func_229();
    event_func_2653();
    event_func_2619();
}
void Frames::handle_frame_27_pre_events()
{
}
void Frames::event_func_5880()
{
    // event 1_26
    {
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
        }
    }
    event_1_26_end: ;
}
void Frames::event_func_5881()
{
    // event 2_26
    {
        if (!(group_main_engine_1)) goto event_2_26_end;
        gimmickhangingidleswitch_1257_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_y());
        }
    }
    event_2_26_end: ;
}
void Frames::event_func_5882()
{
    // event 8_26
    {
        if (!(group_main_engine_1)) goto event_8_26_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 2000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 17);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 5);
        ((Active*)get_instance(sign_351_instances))->set_visible(false);
    }
    event_8_26_end: ;
}
void Frames::event_func_5883()
{
    // event 25_26
    {
        if (!(group_main_engine_1)) goto event_25_26_end;
        levelparallaxpiece0r_1090_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece0r_1090_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(3, 1);
            ((SystemBox*)*it)->alterables->values.set(4, 0.94);
        }
        levelparallaxpiece1r_1091_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece1r_1091_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(3, 0.95);
            ((SystemBox*)*it)->alterables->values.set(4, 0.92);
        }
        levelparallaxpiece2r_1092_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece2r_1092_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(3, 0.85);
            ((SystemBox*)*it)->alterables->values.set(4, 0.85);
        }
        levelparallaxpiece3r_1093_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece3r_1093_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(3, 0.4);
            ((SystemBox*)*it)->alterables->values.set(4, 0.4);
        }
        levelparallaxpiece4r_1094_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece4r_1094_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(3, 0.37);
            ((SystemBox*)*it)->alterables->values.set(4, 0.36);
        }
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(3, 0.6);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(4, 0.6);
        ((SystemBox*)get_instance(levelparallaxpiece9_763_instances))->alterables->values.set(3, 0.3);
        ((SystemBox*)get_instance(levelparallaxpiece9_763_instances))->alterables->values.set(4, 0.3);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(3, 0.85);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(4, 0.85);
    }
    event_25_26_end: ;
}
void Frames::event_func_5884()
{
    // event 1414_26
    {
        if (!(group_main_engine_1)) goto event_1414_26_end;
        gimmickpickaxe_1402_instances.clear_selection();
        spread_value(gimmickpickaxe_1402_instances, 0, 0);
        spread_value(gimmickpickaxe_1402_instances, 3, 0);
        for (ObjectIterator it(gimmickpickaxe_1402_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, (sin_deg(((Active*)*it)->alterables->values.get(3)*45)*15)+15);
        }
    }
    event_1414_26_end: ;
}
void Frames::event_func_5885()
{
    // event 1436_26
    {
        if (!(group_main_engine_1)) goto event_1436_26_end;
        gimmickrisingswing_1405_instances.clear_selection();
        spread_value(gimmickrisingswing_1405_instances, 17, 0);
        gimmickrisingswingpiece_1406_instances.clear_selection();
        for (ObjectIterator it(gimmickrisingswingpiece_1406_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(22, ((Active*)*it)->get_box_index(2)-((Active*)*it)->get_box_index(0));
        }
        spread_value(gimmickrisingswingpiece_1406_instances, 0, 0);
        for (ObjectIterator it(gimmickrisingswingpiece_1406_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, ((Active*)*it)->alterables->values.get(0)%math_helper%4);
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(0)/math_helper/4);
        }
    }
    event_1436_26_end: ;
}
void Frames::event_func_5886()
{
    // event 1448_26
    {
        if (!(group_main_engine_1)) goto event_1448_26_end;
        levelhandcar_1415_instances.clear_selection();
        for (ObjectIterator it(levelhandcar_1415_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->get_x());
        }
    }
    event_1448_26_end: ;
}
void Frames::event_func_5887()
{
    // event 1449_26
    {
        if (!(group_main_engine_1)) goto event_1449_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (4))) goto event_1449_26_end;
        levelminetrackswitch_1413_instances.clear_selection();
        for (ObjectIterator it(levelminetrackswitch_1413_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelhandcarhandle_1414_instances.clear_selection();
        for (ObjectIterator it(levelhandcarhandle_1414_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelhandcar_1415_instances.clear_selection();
        for (ObjectIterator it(levelhandcar_1415_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelhandcartop_1416_instances.clear_selection();
        for (ObjectIterator it(levelhandcartop_1416_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelhandcarfloor1_1417_instances.clear_selection();
        for (ObjectIterator it(levelhandcarfloor1_1417_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelhandcarfloor2_1418_instances.clear_selection();
        for (ObjectIterator it(levelhandcarfloor2_1418_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelhandcarfloor3_1419_instances.clear_selection();
        for (ObjectIterator it(levelhandcarfloor3_1419_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1449_26_end: ;
}
void Frames::event_func_5888()
{
    // event 1690_26
    {
        if (!(group_main_engine_1)) goto event_1690_26_end;
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
        }
    }
    event_1690_26_end: ;
}
void Frames::event_func_5889()
{
    // event 1798_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_basics_1)) goto event_1798_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
        levelparallaxpiece5_510_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece5_510_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_visible(false);
        }
    }
    event_1798_26_end: ;
}
void Frames::event_func_5890()
{
    // event 1799_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_claw_basics_1)) goto event_1799_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->get_y()+80);
        }
        bossclawpiece4_1278_instances.clear_selection();
        for (ObjectIterator it(bossclawpiece4_1278_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
        }
        bossclawpiece1_1281_instances.clear_selection();
        spread_value(bossclawpiece1_1281_instances, 8, 0);
        for (ObjectIterator it(bossclawpiece1_1281_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, bossclawpiece1_1281_instances.size()-((Active*)*it)->alterables->values.get(8));
            ((Active*)*it)->alterables->values.set(22, ((Active*)*it)->get_box_index(2)-((Active*)*it)->get_box_index(0));
            ((Active*)*it)->alterables->flags.enable(5);
        }
    }
    event_1799_26_end: ;
}
void Frames::event_func_5891()
{
    // event 1856_26
    {
        if (!(group_main_engine_1)) goto event_1856_26_end;
        gimmickmovingpillar1_1407_instances.clear_selection();
        for (ObjectIterator it(gimmickmovingpillar1_1407_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y()-((Active*)*it)->alterables->values.get(0));
        }
        gimmickmovingpillar2_1408_instances.clear_selection();
        for (ObjectIterator it(gimmickmovingpillar2_1408_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y()-((Active*)*it)->alterables->values.get(0));
        }
        gimmickmovingpillar3_1409_instances.clear_selection();
        for (ObjectIterator it(gimmickmovingpillar3_1409_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y()-((Active*)*it)->alterables->values.get(0));
        }
        spread_value(gimmickmovingpillar1_1407_instances, 0, 0);
        spread_value(gimmickmovingpillar2_1408_instances, 0, 0);
        spread_value(gimmickmovingpillar3_1409_instances, 0, 0);
    }
    event_1856_26_end: ;
}
void Frames::event_func_5892()
{
    // event 1857_26
    {
        if (!(group_main_engine_1)) goto event_1857_26_end;
        gimmickmovingpillar3_1409_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar3_1409_instances, 10811, 2245, 10905, 2736);
        gimmickmovingpillar2_1408_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar2_1408_instances, 10811, 2245, 10905, 2736);
        gimmickmovingpillar1_1407_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar1_1407_instances, 10811, 2245, 10905, 2736);
        for (ObjectIterator it(gimmickmovingpillar3_1409_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -116);
        }
        for (ObjectIterator it(gimmickmovingpillar2_1408_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -116);
        }
        for (ObjectIterator it(gimmickmovingpillar1_1407_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -116);
        }
    }
    event_1857_26_end: ;
}
void Frames::event_func_5893()
{
    // event 1858_26
    {
        if (!(group_main_engine_1)) goto event_1858_26_end;
        gimmickmovingpillar3_1409_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar3_1409_instances, 10905, 2248, 10955, 2739);
        gimmickmovingpillar2_1408_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar2_1408_instances, 10905, 2248, 10955, 2739);
        gimmickmovingpillar1_1407_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar1_1407_instances, 10905, 2248, 10955, 2739);
        for (ObjectIterator it(gimmickmovingpillar3_1409_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -100);
        }
        for (ObjectIterator it(gimmickmovingpillar2_1408_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -100);
        }
        for (ObjectIterator it(gimmickmovingpillar1_1407_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -100);
        }
    }
    event_1858_26_end: ;
}
void Frames::event_func_5894()
{
    // event 1859_26
    {
        if (!(group_main_engine_1)) goto event_1859_26_end;
        gimmickmovingpillar3_1409_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar3_1409_instances, 10953, 2246, 11003, 2737);
        gimmickmovingpillar2_1408_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar2_1408_instances, 10953, 2246, 11003, 2737);
        gimmickmovingpillar1_1407_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar1_1407_instances, 10953, 2246, 11003, 2737);
        for (ObjectIterator it(gimmickmovingpillar1_1407_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -84);
        }
        for (ObjectIterator it(gimmickmovingpillar2_1408_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -84);
        }
        for (ObjectIterator it(gimmickmovingpillar3_1409_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -84);
        }
    }
    event_1859_26_end: ;
}
void Frames::event_func_5895()
{
    // event 1860_26
    {
        if (!(group_main_engine_1)) goto event_1860_26_end;
        gimmickmovingpillar3_1409_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar3_1409_instances, 11000, 2246, 11050, 2737);
        gimmickmovingpillar2_1408_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar2_1408_instances, 11000, 2246, 11050, 2737);
        gimmickmovingpillar1_1407_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar1_1407_instances, 11000, 2246, 11050, 2737);
        for (ObjectIterator it(gimmickmovingpillar1_1407_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -68);
        }
        for (ObjectIterator it(gimmickmovingpillar2_1408_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -68);
        }
        for (ObjectIterator it(gimmickmovingpillar3_1409_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -68);
        }
    }
    event_1860_26_end: ;
}
void Frames::event_func_5896()
{
    // event 1861_26
    {
        if (!(group_main_engine_1)) goto event_1861_26_end;
        gimmickmovingpillar3_1409_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar3_1409_instances, 11354, 2230, 11404, 2721);
        gimmickmovingpillar2_1408_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar2_1408_instances, 11354, 2230, 11404, 2721);
        gimmickmovingpillar1_1407_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar1_1407_instances, 11354, 2230, 11404, 2721);
        for (ObjectIterator it(gimmickmovingpillar1_1407_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 136);
        }
        for (ObjectIterator it(gimmickmovingpillar2_1408_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 136);
        }
        for (ObjectIterator it(gimmickmovingpillar3_1409_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 136);
        }
    }
    event_1861_26_end: ;
}
void Frames::event_func_5897()
{
    // event 1862_26
    {
        if (!(group_main_engine_1)) goto event_1862_26_end;
        gimmickmovingpillar3_1409_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar3_1409_instances, 11403, 2230, 11453, 2721);
        gimmickmovingpillar2_1408_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar2_1408_instances, 11403, 2230, 11453, 2721);
        gimmickmovingpillar1_1407_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar1_1407_instances, 11403, 2230, 11453, 2721);
        for (ObjectIterator it(gimmickmovingpillar1_1407_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 88);
        }
        for (ObjectIterator it(gimmickmovingpillar2_1408_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 88);
        }
        for (ObjectIterator it(gimmickmovingpillar3_1409_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 88);
        }
    }
    event_1862_26_end: ;
}
void Frames::event_func_5898()
{
    // event 1863_26
    {
        if (!(group_main_engine_1)) goto event_1863_26_end;
        gimmickmovingpillar3_1409_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar3_1409_instances, 11452, 2228, 11502, 2719);
        gimmickmovingpillar2_1408_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar2_1408_instances, 11452, 2228, 11502, 2719);
        gimmickmovingpillar1_1407_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar1_1407_instances, 11452, 2228, 11502, 2719);
        for (ObjectIterator it(gimmickmovingpillar1_1407_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 40);
        }
        for (ObjectIterator it(gimmickmovingpillar2_1408_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 40);
        }
        for (ObjectIterator it(gimmickmovingpillar3_1409_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 40);
        }
    }
    event_1863_26_end: ;
}
void Frames::event_func_5899()
{
    // event 2030_26
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_2030_26_end;
        manager.ignore_controls = true;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
        }
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
        }
    }
    event_2030_26_end: ;
}
void Frames::on_frame_27_start_events()
{
    event_func_5880();
    event_func_5881();
    event_func_4133();
    event_func_5882();
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
    event_func_5883();
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
    event_func_3986();
    event_func_3987();
    event_func_5884();
    event_func_5885();
    event_func_5886();
    event_func_5887();
    event_func_5383();
    event_func_2686();
    event_func_2687();
    event_func_5888();
    event_func_5889();
    event_func_5890();
    event_func_5891();
    event_func_5892();
    event_func_5893();
    event_func_5894();
    event_func_5895();
    event_func_5896();
    event_func_5897();
    event_func_5898();
    event_func_2689();
    event_func_2690();
    event_func_2691();
    event_func_5899();
    event_func_4145();
    event_func_5573();
    event_func_4147();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_27_init()
{
    index = 26;
    width = 12288;
    height = 3744;
    virtual_width = 12288;
    virtual_height = 3744;
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
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &levelfloatingplatform2_1387_instances, &levelmovingplatform01_1404_instances, &gimmickrisingswing_1405_instances, &levelfloatingplatform3_1412_instances, &levelhandcar_1415_instances, NULL};
    qualifier_8.set(14, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorbomb_563_instances, &hazardspikesup_558_instances, &hazardspikesdown_559_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, &levelfloatingplatform2_1387_instances, &pushableblock3_1394_instances, &levelmovingplatform01_1404_instances, &gimmickrisingswing_1405_instances, &levelfloatingplatform3_1412_instances, &levelhandcar_1415_instances, NULL};
    qualifier_9.set(37, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemyhopper_1168_instances, &enemyextractorhead_1177_instances, &enemyslug_1182_instances, &enemyiris_1183_instances, &enemyfirespitter_1385_instances, &bossclawhitbox_1388_instances, &shrine3_1390_instances, &caravanengine_1395_instances, NULL};
    qualifier_20.set(8, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece0r_1090_instances, &levelparallaxpiece1r_1091_instances, &levelparallaxpiece2r_1092_instances, &levelparallaxpiece3r_1093_instances, &levelparallaxpiece4r_1094_instances, &levelparallaxpiece6_511_instances, &levelparallaxpiece7_764_instances, &levelparallaxpiece9_763_instances, &levelparallaxpiece5_510_instances, NULL};
    qualifier_0.set(9, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorbomb_563_instances, &breakablerock_951_instances, &breakablerock2_1007_instances, &hazardspikesup_558_instances, &hazardspikesdown_559_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, &rmalternatepath2_1379_instances, &bossclawbase_1393_instances, &pushableblock3_1394_instances, &active_1396_instances, &gimmickelevator2_1398_instances, &gimmickmovingpillar1_1407_instances, &gimmickmovingpillar2_1408_instances, &gimmickmovingpillar3_1409_instances, &levelminetrackswitch_1413_instances, &rmalternatepath_1420_instances, NULL};
    qualifier_7.set(37, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &monitorbomb_563_instances, NULL};
    qualifier_4.set(32, &qualifier_4_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(11, &qualifier_19_instances[0]);
    static ObjectList* qualifier_23_instances[] = {&gimmickhangingidlesensor_740_instances, &gimmickhangingidleswitch_1257_instances, NULL};
    qualifier_23.set(2, &qualifier_23_instances[0]);
    static ObjectList* qualifier_14_instances[] = {&mastergroupsb_385_instances, &pushableblock3_1394_instances, NULL};
    qualifier_14.set(2, &qualifier_14_instances[0]);
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
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &gimmickelevator2_1398_instances, &levelmovingplatform01_1404_instances, &gimmickrisingswing_1405_instances, NULL};
    qualifier_13.set(4, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece6_1271(320, 240), 0);
    add_background_object(create_levelparallaxpiece7_1272(0, 800), 0);
    add_background_object(create_levelparallaxpiece0r_1090(0, 0), 0);
    add_background_object(create_levelparallaxpiece1r_1091(0, 152), 0);
    add_background_object(create_levelparallaxpiece2r_1092(0, 200), 0);
    add_background_object(create_levelparallaxpiece3r_1093(0, 352), 0);
    add_background_object(create_levelparallaxpiece4r_1094(0, 384), 0);
    add_background_object(create_caravanplatform8_1273(6040, 552), 0);
    add_background_object(create_caravanplatform8_1273(6328, 552), 0);
    add_background_object(create_caravanplatform8_1273(6136, 552), 0);
    add_background_object(create_caravanplatform8_1273(6232, 552), 0);
    add_background_object(create_caravanplatform8_1273(6536, 536), 0);
    add_background_object(create_levelparallaxpiece9_1274(0, 1224), 0);
    add_background_object(create_backdrop_1275(6536, 520), 0);
    add_object(create_bossclawpiece4_1278(928, 392), 0);
    add_object(create_bossclawpiece1_1281(976, -120), 0);
    add_object(create_bossclawpiece1_1281(1008, -120), 0);
    add_object(create_bossclawpiece1_1281(1040, -120), 0);
    add_object(create_npcmerc_1283(6608, 567), 0);
    add_object(create_npcmerc_1283(6576, 567), 0);
    add_background_object(create_cavecolumn1_1285(9544, 1672), 1);
    add_background_object(create_cavecolumn1_1285(9488, 1896), 1);
    add_background_object(create_cavecolumn1_1285(9608, 2072), 1);
    add_background_object(create_cavecolumn1_1285(9760, 2456), 1);
    add_background_object(create_cavecolumn1_1285(9440, 2168), 1);
    add_background_object(create_shaft3_1286(8976, 2792), 1);
    add_background_object(create_shaft3_1286(8880, 2720), 1);
    add_background_object(create_cavecolumn1_1285(7912, 2328), 1);
    add_background_object(create_cavecolumn1_1285(8096, 2560), 1);
    add_background_object(create_cavecolumn1_1285(6816, 1896), 1);
    add_background_object(create_quickbackdrop_1287(0, 928), 1);
    add_background_object(create_quickbackdrop2_1288(0, 1216), 1);
    add_background_object(create_quickbackdrop3_1289(0, 1504), 1);
    add_background_object(create_rmbrick21_1104(6112, 600), 1);
    add_background_object(create_rmbrick24_1103(6344, 640), 1);
    add_background_object(create_rmbrick20_1105(912, 208), 1);
    add_background_object(create_brick28_1290(816, 208), 1);
    add_background_object(create_cavecolumn2_1291(4752, 1640), 1);
    add_background_object(create_rmbrick24_1103(512, -144), 1);
    add_background_object(create_rmbrick21_1104(336, 400), 1);
    add_background_object(create_rmbrick21_1104(240, 400), 1);
    add_background_object(create_rmbrick21_1104(144, 400), 1);
    add_background_object(create_rmbrick20_1105(-48, 256), 1);
    add_background_object(create_rmbrick26_1106(336, 352), 1);
    add_background_object(create_rmbrick25_1107(144, 352), 1);
    add_background_object(create_rmbrick20_1105(-48, 160), 1);
    add_background_object(create_rmbrick20_1105(48, 160), 1);
    add_background_object(create_rmbrick20_1105(48, 256), 1);
    add_background_object(create_rmbrick20_1105(-48, 352), 1);
    add_background_object(create_rmbrick20_1105(48, 352), 1);
    add_background_object(create_rmbrick20_1105(-48, 448), 1);
    add_background_object(create_rmbrick20_1105(48, 448), 1);
    add_background_object(create_rmbrick20_1105(816, 160), 1);
    add_background_object(create_rmbrick20_1105(144, 160), 1);
    add_background_object(create_rmbrick20_1105(816, 352), 1);
    add_background_object(create_rmbrick20_1105(816, 448), 1);
    add_background_object(create_rmbrick20_1105(144, 448), 1);
    add_background_object(create_rmbrick20_1105(240, 160), 1);
    add_background_object(create_rmbrick20_1105(240, 448), 1);
    add_background_object(create_rmbrick20_1105(336, 160), 1);
    add_background_object(create_rmbrick20_1105(336, 448), 1);
    add_background_object(create_rmbrick20_1105(432, 256), 1);
    add_background_object(create_rmbrick20_1105(432, 160), 1);
    add_background_object(create_rmbrick20_1105(432, 352), 1);
    add_background_object(create_rmbrick20_1105(432, 448), 1);
    add_background_object(create_rmbrick20_1105(528, 256), 1);
    add_background_object(create_rmbrick20_1105(528, 160), 1);
    add_background_object(create_rmbrick20_1105(528, 352), 1);
    add_background_object(create_rmbrick20_1105(528, 448), 1);
    add_background_object(create_rmbrick20_1105(624, 160), 1);
    add_background_object(create_rmbrick20_1105(624, 352), 1);
    add_background_object(create_rmbrick20_1105(624, 448), 1);
    add_background_object(create_rmbrick20_1105(720, 352), 1);
    add_background_object(create_rmbrick20_1105(720, 160), 1);
    add_background_object(create_brick22_1292(720, 256), 1);
    add_background_object(create_rmbrick20_1105(720, 448), 1);
    add_background_object(create_rmbrick20_1105(1104, 208), 1);
    add_background_object(create_rmbrick20_1105(1104, 160), 1);
    add_background_object(create_rmbrick20_1105(1104, 448), 1);
    add_background_object(create_rmbrick20_1105(912, 160), 1);
    add_background_object(create_rmbrick20_1105(912, 352), 1);
    add_background_object(create_rmbrick20_1105(912, 448), 1);
    add_background_object(create_rmbrick20_1105(1008, 208), 1);
    add_background_object(create_rmbrick20_1105(1008, 160), 1);
    add_background_object(create_rmbrick20_1105(1008, 448), 1);
    add_background_object(create_rmbrick26_1106(336, 256), 1);
    add_background_object(create_rmbrick25_1107(144, 256), 1);
    add_background_object(create_brick27_1293(624, 256), 1);
    add_background_object(create_brick27_1293(1008, 352), 1);
    add_background_object(create_rmbrick20_1105(1104, 352), 1);
    add_background_object(create_rmbrick20_1105(1008, 352), 1);
    add_background_object(create_rmbrick20_1105(1200, 208), 1);
    add_background_object(create_rmbrick20_1105(1200, 160), 1);
    add_background_object(create_rmbrick20_1105(1200, 448), 1);
    add_background_object(create_rmbrick20_1105(1200, 352), 1);
    add_background_object(create_rmbrick20_1105(1296, 208), 1);
    add_background_object(create_rmbrick20_1105(1296, 160), 1);
    add_background_object(create_rmbrick20_1105(1296, 448), 1);
    add_background_object(create_rmbrick20_1105(1296, 352), 1);
    add_background_object(create_rmbrick20_1105(1392, 208), 1);
    add_background_object(create_rmbrick20_1105(1392, 160), 1);
    add_background_object(create_rmbrick20_1105(1392, 448), 1);
    add_background_object(create_rmbrick20_1105(1392, 352), 1);
    add_background_object(create_rmbrick20_1105(1488, 208), 1);
    add_background_object(create_rmbrick20_1105(1488, 160), 1);
    add_background_object(create_rmbrick20_1105(1488, 448), 1);
    add_background_object(create_rmbrick20_1105(1488, 352), 1);
    add_background_object(create_rmbrick20_1105(1584, 208), 1);
    add_background_object(create_rmbrick20_1105(1584, 160), 1);
    add_background_object(create_rmbrick20_1105(1584, 448), 1);
    add_background_object(create_rmbrick20_1105(1584, 352), 1);
    add_background_object(create_rmbrick20_1105(1680, 208), 1);
    add_background_object(create_rmbrick20_1105(1680, 160), 1);
    add_background_object(create_rmbrick20_1105(1680, 448), 1);
    add_background_object(create_rmbrick20_1105(1680, 352), 1);
    add_background_object(create_rmbrick20_1105(1776, 208), 1);
    add_background_object(create_rmbrick20_1105(1776, 160), 1);
    add_background_object(create_rmbrick20_1105(1776, 448), 1);
    add_background_object(create_rmbrick20_1105(1776, 352), 1);
    add_background_object(create_brick23_1294(816, 304), 1);
    add_background_object(create_brick23_1294(912, 304), 1);
    add_background_object(create_brick23_1294(1008, 304), 1);
    add_background_object(create_brick23_1294(1104, 304), 1);
    add_background_object(create_brick23_1294(1200, 304), 1);
    add_background_object(create_brick23_1294(1296, 304), 1);
    add_background_object(create_brick23_1294(1392, 304), 1);
    add_background_object(create_brick23_1294(1488, 304), 1);
    add_background_object(create_brick23_1294(1584, 304), 1);
    add_background_object(create_brick23_1294(1680, 304), 1);
    add_background_object(create_brick23_1294(1776, 304), 1);
    add_background_object(create_rmbrick20_1105(1872, 208), 1);
    add_background_object(create_rmbrick20_1105(1872, 160), 1);
    add_background_object(create_rmbrick20_1105(1872, 448), 1);
    add_background_object(create_rmbrick20_1105(1872, 352), 1);
    add_background_object(create_rmbrick20_1105(1968, 208), 1);
    add_background_object(create_rmbrick20_1105(1968, 160), 1);
    add_background_object(create_rmbrick20_1105(1968, 448), 1);
    add_background_object(create_rmbrick20_1105(1968, 352), 1);
    add_background_object(create_rmbrick20_1105(2064, 208), 1);
    add_background_object(create_rmbrick20_1105(2064, 160), 1);
    add_background_object(create_rmbrick20_1105(2064, 448), 1);
    add_background_object(create_rmbrick20_1105(2064, 352), 1);
    add_background_object(create_rmbrick20_1105(2160, 208), 1);
    add_background_object(create_rmbrick20_1105(2160, 160), 1);
    add_background_object(create_rmbrick20_1105(2160, 448), 1);
    add_background_object(create_rmbrick20_1105(2160, 352), 1);
    add_background_object(create_brick23_1294(1872, 304), 1);
    add_background_object(create_brick23_1294(1968, 304), 1);
    add_background_object(create_brick23_1294(2064, 304), 1);
    add_background_object(create_brick23_1294(2160, 304), 1);
    add_background_object(create_rmbrick20_1105(2256, 208), 1);
    add_background_object(create_rmbrick20_1105(2256, 160), 1);
    add_background_object(create_rmbrick20_1105(2256, 448), 1);
    add_background_object(create_rmbrick20_1105(2256, 352), 1);
    add_background_object(create_rmbrick20_1105(2352, 208), 1);
    add_background_object(create_rmbrick20_1105(2352, 160), 1);
    add_background_object(create_rmbrick20_1105(2352, 448), 1);
    add_background_object(create_rmbrick20_1105(2352, 352), 1);
    add_background_object(create_rmbrick20_1105(2448, 208), 1);
    add_background_object(create_rmbrick20_1105(2448, 160), 1);
    add_background_object(create_rmbrick20_1105(2448, 448), 1);
    add_background_object(create_rmbrick20_1105(2448, 352), 1);
    add_background_object(create_brick23_1294(2256, 304), 1);
    add_background_object(create_brick23_1294(2352, 304), 1);
    add_background_object(create_brick23_1294(2448, 304), 1);
    add_background_object(create_rmbrick20_1105(2544, 208), 1);
    add_background_object(create_rmbrick20_1105(2544, 160), 1);
    add_background_object(create_rmbrick20_1105(2544, 448), 1);
    add_background_object(create_rmbrick20_1105(2544, 352), 1);
    add_background_object(create_rmbrick20_1105(2640, 208), 1);
    add_background_object(create_rmbrick20_1105(2640, 160), 1);
    add_background_object(create_rmbrick20_1105(2640, 448), 1);
    add_background_object(create_rmbrick20_1105(2640, 352), 1);
    add_background_object(create_brick23_1294(2544, 304), 1);
    add_background_object(create_brick23_1294(2640, 304), 1);
    add_background_object(create_rmbrick20_1105(2736, 208), 1);
    add_background_object(create_rmbrick20_1105(2736, 160), 1);
    add_background_object(create_rmbrick20_1105(2736, 448), 1);
    add_background_object(create_rmbrick20_1105(2736, 352), 1);
    add_background_object(create_rmbrick20_1105(2832, 208), 1);
    add_background_object(create_rmbrick20_1105(2832, 160), 1);
    add_background_object(create_rmbrick20_1105(2832, 448), 1);
    add_background_object(create_rmbrick20_1105(2832, 352), 1);
    add_background_object(create_brick23_1294(2736, 304), 1);
    add_background_object(create_brick23_1294(2832, 304), 1);
    add_background_object(create_rmbrick20_1105(6304, 456), 1);
    add_background_object(create_rmbrick20_1105(6208, 456), 1);
    add_background_object(create_rmbrick20_1105(6304, 552), 1);
    add_background_object(create_rmbrick20_1105(6208, 552), 1);
    add_background_object(create_rmbrick20_1105(6592, 648), 1);
    add_background_object(create_rmbrick26_1106(6112, 456), 1);
    add_background_object(create_rmbrick26_1106(6112, 552), 1);
    add_background_object(create_rmbrick20_1105(6400, 456), 1);
    add_background_object(create_rmbrick20_1105(6400, 552), 1);
    add_background_object(create_rmbrick20_1105(6496, 456), 1);
    add_background_object(create_rmbrick20_1105(6496, 552), 1);
    add_background_object(create_rmbrick20_1105(6304, 744), 1);
    add_background_object(create_rmbrick20_1105(6208, 744), 1);
    add_background_object(create_rmbrick20_1105(6400, 744), 1);
    add_background_object(create_rmbrick20_1105(6496, 744), 1);
    add_background_object(create_rmbrick20_1105(6592, 456), 1);
    add_background_object(create_rmbrick20_1105(6592, 552), 1);
    add_background_object(create_rmbrick20_1105(6592, 744), 1);
    add_background_object(create_rmbrick25_1107(6208, 648), 1);
    add_background_object(create_rmbrick26_1106(6496, 648), 1);
    add_background_object(create_rmbrick21_1104(6256, 696), 1);
    add_background_object(create_rmbrick21_1104(6352, 696), 1);
    add_background_object(create_rmbrick21_1104(6448, 696), 1);
    add_background_object(create_rmbrick24_1103(5968, 456), 1);
    add_background_object(create_rmbrick24_1103(5968, 552), 1);
    add_background_object(create_rmbrick24_1103(5968, 648), 1);
    add_background_object(create_rmbrick24_1103(5968, 744), 1);
    add_background_object(create_rmbrick26_1106(6016, 648), 1);
    add_background_object(create_rmbrick26_1106(6016, 744), 1);
    add_background_object(create_rmbrick20_1105(6112, 744), 1);
    add_background_object(create_rmbrick20_1105(6112, 648), 1);
    add_background_object(create_rmbrick21_1104(6016, 600), 1);
    add_background_object(create_brick29_1295(6304, 936), 1);
    add_background_object(create_rmbrick20_1105(6304, 840), 1);
    add_background_object(create_rmbrick20_1105(6400, 840), 1);
    add_background_object(create_rmbrick20_1105(6496, 840), 1);
    add_background_object(create_rmbrick20_1105(6592, 840), 1);
    add_background_object(create_brick29_1295(6400, 936), 1);
    add_background_object(create_brick29_1295(6496, 936), 1);
    add_background_object(create_brick29_1295(6592, 936), 1);
    add_background_object(create_brick29_1295(6208, 936), 1);
    add_background_object(create_rmbrick20_1105(6208, 840), 1);
    add_background_object(create_cavecolumn2_1291(6416, 1760), 1);
    add_background_object(create_cavecolumn1_1285(6208, 1856), 1);
    add_background_object(create_cavecolumn1_1285(6616, 1856), 1);
    add_background_object(create_cavecolumn2_1291(6008, 1800), 1);
    add_background_object(create_cavecolumn2_1291(7056, 1912), 1);
    add_background_object(create_cavecolumn1_1285(7256, 1952), 1);
    add_background_object(create_cavecolumn2_1291(7496, 2088), 1);
    add_background_object(create_cavecolumn1_1285(7696, 2256), 1);
    add_background_object(create_cavecolumn1_1285(7536, 2496), 1);
    add_background_object(create_cavecolumn2_1291(7744, 2584), 1);
    add_background_object(create_cavecolumn1_1285(7936, 2640), 1);
    add_background_object(create_cavecolumn2_1291(8688, 2744), 1);
    add_background_object(create_shaft3_1286(8464, 2856), 1);
    add_background_object(create_shaft3_1286(8464, 2784), 1);
    add_background_object(create_shaft3_1286(8464, 2712), 1);
    add_background_object(create_shaft3_1286(8464, 2640), 1);
    add_background_object(create_shaft3_1286(8560, 2856), 1);
    add_background_object(create_shaft3_1286(8560, 2784), 1);
    add_background_object(create_shaft3_1286(8560, 2712), 1);
    add_background_object(create_shaft3_1286(8560, 2640), 1);
    add_background_object(create_shaft3_1286(8464, 3144), 1);
    add_background_object(create_shaft3_1286(8464, 3072), 1);
    add_background_object(create_shaft3_1286(8464, 3000), 1);
    add_background_object(create_shaft3_1286(8464, 2928), 1);
    add_background_object(create_shaft3_1286(8560, 3144), 1);
    add_background_object(create_shaft3_1286(8560, 3072), 1);
    add_background_object(create_shaft3_1286(8560, 3000), 1);
    add_background_object(create_shaft3_1286(8560, 2928), 1);
    add_background_object(create_shaft3_1286(8464, 2568), 1);
    add_background_object(create_shaft3_1286(8560, 2568), 1);
    add_background_object(create_shaft3_1286(8464, 2496), 1);
    add_background_object(create_shaft3_1286(8464, 2424), 1);
    add_background_object(create_shaft3_1286(8560, 2496), 1);
    add_background_object(create_shaft3_1286(8560, 2424), 1);
    add_background_object(create_shaft3_1286(8464, 2352), 1);
    add_background_object(create_shaft3_1286(8560, 2352), 1);
    add_background_object(create_cavecolumn2_1291(8872, 2800), 1);
    add_background_object(create_shaft3_1286(8464, 2280), 1);
    add_background_object(create_shaft3_1286(8560, 2280), 1);
    add_background_object(create_shaft3_1286(8464, 2208), 1);
    add_background_object(create_shaft3_1286(8560, 2208), 1);
    add_background_object(create_shaft3_1286(8880, 2648), 1);
    add_background_object(create_shaft3_1286(8976, 2720), 1);
    add_background_object(create_shaft3_1286(8976, 2648), 1);
    add_background_object(create_shaft3_1286(8880, 2576), 1);
    add_background_object(create_shaft3_1286(8976, 2576), 1);
    add_background_object(create_shaft3_1286(8880, 2504), 1);
    add_background_object(create_shaft3_1286(8880, 2432), 1);
    add_background_object(create_shaft3_1286(8976, 2504), 1);
    add_background_object(create_shaft3_1286(8976, 2432), 1);
    add_background_object(create_shaft3_1286(8880, 2360), 1);
    add_background_object(create_shaft3_1286(8976, 2360), 1);
    add_background_object(create_shaft3_1286(8880, 2288), 1);
    add_background_object(create_shaft3_1286(8976, 2288), 1);
    add_background_object(create_shaft3_1286(8880, 2216), 1);
    add_background_object(create_shaft3_1286(8976, 2216), 1);
    add_background_object(create_shaft3_1286(8464, 3216), 1);
    add_background_object(create_shaft3_1286(8560, 3216), 1);
    add_background_object(create_shaft3_1286(8464, 2136), 1);
    add_background_object(create_shaft3_1286(8560, 2136), 1);
    add_background_object(create_shaft3_1286(8880, 2144), 1);
    add_background_object(create_shaft3_1286(8976, 2144), 1);
    add_background_object(create_cavecolumn2_1291(9376, 2528), 1);
    add_background_object(create_cavecolumn1_1285(9568, 2464), 1);
    add_background_object(create_shaft3_1286(8464, 2064), 1);
    add_background_object(create_shaft3_1286(8560, 2064), 1);
    add_background_object(create_shaft3_1286(8880, 2072), 1);
    add_background_object(create_shaft3_1286(8976, 2072), 1);
    add_background_object(create_shaft3_1286(8464, 1992), 1);
    add_background_object(create_shaft3_1286(8560, 1992), 1);
    add_background_object(create_shaft3_1286(8880, 2000), 1);
    add_background_object(create_shaft3_1286(8976, 2000), 1);
    add_background_object(create_shaft3_1286(8880, 1928), 1);
    add_background_object(create_shaft3_1286(8976, 1928), 1);
    add_background_object(create_shaft3_1286(8880, 1856), 1);
    add_background_object(create_shaft3_1286(8976, 1856), 1);
    add_background_object(create_shaft3_1286(8880, 1784), 1);
    add_background_object(create_shaft3_1286(8976, 1784), 1);
    add_background_object(create_shaft3_1286(8464, 1920), 1);
    add_background_object(create_shaft3_1286(8560, 1920), 1);
    add_background_object(create_shaft3_1286(8880, 1712), 1);
    add_background_object(create_shaft3_1286(8976, 1712), 1);
    add_background_object(create_shaft3_1286(8464, 1848), 1);
    add_background_object(create_shaft3_1286(8560, 1848), 1);
    add_background_object(create_rmbrick20_1105(816, 544), 1);
    add_background_object(create_rmbrick20_1105(624, 544), 1);
    add_background_object(create_rmbrick20_1105(720, 544), 1);
    add_background_object(create_rmbrick20_1105(912, 544), 1);
    add_background_object(create_rmbrick20_1105(816, 640), 1);
    add_background_object(create_rmbrick20_1105(624, 640), 1);
    add_background_object(create_rmbrick20_1105(720, 640), 1);
    add_background_object(create_rmbrick20_1105(912, 640), 1);
    add_background_object(create_rmbrick20_1105(816, 736), 1);
    add_background_object(create_rmbrick20_1105(624, 736), 1);
    add_background_object(create_rmbrick20_1105(720, 736), 1);
    add_background_object(create_rmbrick20_1105(912, 736), 1);
    add_background_object(create_rmbrick20_1105(816, 832), 1);
    add_background_object(create_rmbrick20_1105(624, 832), 1);
    add_background_object(create_rmbrick20_1105(720, 832), 1);
    add_background_object(create_rmbrick20_1105(912, 832), 1);
    add_background_object(create_cavecolumn1_1285(4952, 1720), 1);
    add_background_object(create_cavecolumn1_1285(4600, 1712), 1);
    add_background_object(create_cavecolumn2_1291(4784, 1864), 1);
    add_background_object(create_cavecolumn1_1285(5112, 1888), 1);
    add_background_object(create_cavecolumn2_1291(4928, 2008), 1);
    add_background_object(create_cavecolumn2_1291(4264, 1784), 1);
    add_background_object(create_cavecolumn1_1285(4424, 1864), 1);
    add_background_object(create_cavecolumn2_1291(4584, 2008), 1);
    add_background_object(create_cavecolumn2_1291(4136, 2032), 1);
    add_background_object(create_cavecolumn1_1285(4336, 2136), 1);
    add_background_object(create_cavecolumn1_1285(4760, 2144), 1);
    add_background_object(create_cavecolumn1_1285(5168, 2144), 1);
    add_background_object(create_cavecolumn1_1285(5040, 2272), 1);
    add_background_object(create_cavecolumn1_1285(3088, 1672), 1);
    add_background_object(create_cavecolumn2_1291(2888, 1600), 1);
    add_background_object(create_cavecolumn1_1285(2720, 1648), 1);
    add_background_object(create_cavecolumn2_1291(2512, 1600), 1);
    add_background_object(create_cavecolumn2_1291(2928, 1856), 1);
    add_background_object(create_cavecolumn1_1285(3256, 1880), 1);
    add_background_object(create_cavecolumn2_1291(3072, 2000), 1);
    add_background_object(create_cavecolumn2_1291(2408, 1776), 1);
    add_background_object(create_cavecolumn1_1285(2568, 1856), 1);
    add_background_object(create_cavecolumn2_1291(2728, 2000), 1);
    add_background_object(create_cavecolumn2_1291(2280, 2024), 1);
    add_background_object(create_cavecolumn1_1285(2480, 2128), 1);
    add_background_object(create_cavecolumn1_1285(2904, 2136), 1);
    add_background_object(create_cavecolumn1_1285(3312, 2136), 1);
    add_background_object(create_cavecolumn1_1285(3184, 2264), 1);
    add_background_object(create_cavecolumn1_1285(1784, 1880), 1);
    add_background_object(create_cavecolumn2_1291(1584, 1816), 1);
    add_background_object(create_cavecolumn2_1291(1600, 2096), 1);
    add_background_object(create_cavecolumn1_1285(1928, 2120), 1);
    add_background_object(create_cavecolumn2_1291(1744, 2240), 1);
    add_background_object(create_cavecolumn2_1291(1400, 2240), 1);
    add_background_object(create_cavecolumn1_1285(1576, 2376), 1);
    add_background_object(create_cavecolumn1_1285(1984, 2376), 1);
    add_background_object(create_cavecolumn1_1285(1856, 2504), 1);
    add_object(create_backgroundwall_1296(624, 256), 1);
    add_object(create_backgroundwall2_1297(832, 304), 1);
    add_object(create_backgroundwall2_1297(928, 304), 1);
    add_object(create_backgroundwall2_1297(1024, 304), 1);
    add_object(create_backgroundwall2_1297(1120, 304), 1);
    add_object(create_backgroundwall_1296(816, 256), 1);
    add_object(create_backgroundwall_1296(720, 256), 1);
    add_object(create_backgroundwall2_1297(1216, 304), 1);
    add_object(create_backgroundwall2_1297(1312, 304), 1);
    add_object(create_backgroundwall2_1297(1408, 304), 1);
    add_object(create_backgroundwall2_1297(1504, 304), 1);
    add_object(create_backgroundwall2_1297(1600, 304), 1);
    add_object(create_backgroundwall2_1297(1696, 304), 1);
    add_object(create_backgroundwall2_1297(1792, 304), 1);
    add_object(create_backgroundwall2_1297(1888, 304), 1);
    add_object(create_backgroundwall2_1297(1984, 304), 1);
    add_object(create_backgroundwall2_1297(2080, 304), 1);
    add_object(create_backgroundwall2_1297(2176, 304), 1);
    add_object(create_backgroundwall2_1297(2272, 304), 1);
    add_object(create_backgroundwall2_1297(2368, 304), 1);
    add_object(create_backgroundwall2_1297(2464, 304), 1);
    add_object(create_backgroundwall2_1297(2560, 304), 1);
    add_object(create_backgroundwall2_1297(2656, 304), 1);
    add_object(create_backgroundwall2_1297(2752, 304), 1);
    add_object(create_backgroundwall2_1297(2848, 304), 1);
    add_background_object(create_rmsoilceiling_1191(5824, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(5568, 1568), 2);
    add_background_object(create_quickbackdrop4_1298(3512, 1904), 2);
    add_background_object(create_quickbackdrop4_1298(3576, 1840), 2);
    add_background_object(create_quickbackdrop4_1298(3640, 1784), 2);
    add_background_object(create_quickbackdrop4_1298(3704, 1768), 2);
    add_background_object(create_quickbackdrop4_1298(3768, 1768), 2);
    add_background_object(create_quickbackdrop4_1298(3832, 1776), 2);
    add_background_object(create_quickbackdrop4_1298(3896, 1768), 2);
    add_background_object(create_quickbackdrop4_1298(3960, 1768), 2);
    add_background_object(create_quickbackdrop4_1298(2808, 1960), 2);
    add_background_object(create_quickbackdrop4_1298(2872, 1904), 2);
    add_background_object(create_quickbackdrop4_1298(2936, 1848), 2);
    add_background_object(create_quickbackdrop4_1298(3000, 1832), 2);
    add_background_object(create_quickbackdrop4_1298(3064, 1832), 2);
    add_background_object(create_quickbackdrop4_1298(3128, 1832), 2);
    add_background_object(create_quickbackdrop4_1298(3192, 1848), 2);
    add_background_object(create_quickbackdrop4_1298(3256, 1904), 2);
    add_background_object(create_quickbackdrop4_1298(3320, 1960), 2);
    add_background_object(create_quickbackdrop4_1298(3384, 1984), 2);
    add_background_object(create_quickbackdrop4_1298(3448, 1960), 2);
    add_background_object(create_quickbackdrop4_1298(1784, 1960), 2);
    add_background_object(create_quickbackdrop4_1298(1720, 1904), 2);
    add_background_object(create_quickbackdrop4_1298(1656, 1840), 2);
    add_background_object(create_quickbackdrop4_1298(1592, 1776), 2);
    add_background_object(create_quickbackdrop4_1298(1528, 1720), 2);
    add_background_object(create_quickbackdrop4_1298(1336, 1704), 2);
    add_background_object(create_quickbackdrop4_1298(1400, 1704), 2);
    add_background_object(create_quickbackdrop4_1298(1464, 1704), 2);
    add_background_object(create_quickbackdrop4_1298(1272, 1704), 2);
    add_background_object(create_quickbackdrop4_1298(4024, 1792), 2);
    add_background_object(create_quickbackdrop4_1298(4088, 1824), 2);
    add_background_object(create_quickbackdrop4_1298(4152, 1832), 2);
    add_background_object(create_quickbackdrop4_1298(4216, 1824), 2);
    add_background_object(create_quickbackdrop4_1298(4280, 1824), 2);
    add_background_object(create_quickbackdrop4_1298(4344, 1824), 2);
    add_background_object(create_quickbackdrop4_1298(4408, 1824), 2);
    add_background_object(create_quickbackdrop4_1298(4472, 1824), 2);
    add_background_object(create_quickbackdrop4_1298(4536, 1824), 2);
    add_background_object(create_quickbackdrop4_1298(4600, 1824), 2);
    add_background_object(create_quickbackdrop4_1298(4664, 1800), 2);
    add_background_object(create_quickbackdrop4_1298(4728, 1744), 2);
    add_background_object(create_quickbackdrop4_1298(4792, 1688), 2);
    add_background_object(create_quickbackdrop4_1298(4856, 1672), 2);
    add_background_object(create_quickbackdrop4_1298(4920, 1672), 2);
    add_background_object(create_quickbackdrop4_1298(4984, 1672), 2);
    add_background_object(create_quickbackdrop4_1298(5048, 1680), 2);
    add_background_object(create_quickbackdrop4_1298(5112, 1792), 2);
    add_background_object(create_quickbackdrop4_1298(5176, 1944), 2);
    add_background_object(create_quickbackdrop4_1298(5240, 1912), 2);
    add_background_object(create_quickbackdrop4_1298(5304, 1896), 2);
    add_background_object(create_quickbackdrop4_1298(5368, 1896), 2);
    add_background_object(create_quickbackdrop4_1298(5432, 1680), 2);
    add_background_object(create_quickbackdrop4_1298(5496, 1680), 2);
    add_background_object(create_quickbackdrop4_1298(5560, 1680), 2);
    add_background_object(create_quickbackdrop4_1298(5624, 1832), 2);
    add_background_object(create_quickbackdrop4_1298(5688, 1832), 2);
    add_background_object(create_quickbackdrop4_1298(5752, 1872), 2);
    add_background_object(create_quickbackdrop4_1298(5816, 1936), 2);
    add_background_object(create_quickbackdrop4_1298(5880, 1976), 2);
    add_background_object(create_quickbackdrop4_1298(5944, 1984), 2);
    add_background_object(create_quickbackdrop4_1298(6008, 1984), 2);
    add_background_object(create_quickbackdrop4_1298(6072, 1976), 2);
    add_background_object(create_quickbackdrop4_1298(6136, 1936), 2);
    add_background_object(create_quickbackdrop4_1298(6200, 1872), 2);
    add_background_object(create_quickbackdrop4_1298(6264, 1832), 2);
    add_background_object(create_quickbackdrop4_1298(6328, 1832), 2);
    add_background_object(create_quickbackdrop4_1298(6392, 1832), 2);
    add_background_object(create_quickbackdrop4_1298(6456, 1832), 2);
    add_background_object(create_quickbackdrop4_1298(6520, 1872), 2);
    add_background_object(create_quickbackdrop4_1298(6584, 1936), 2);
    add_background_object(create_quickbackdrop4_1298(6648, 1976), 2);
    add_background_object(create_quickbackdrop4_1298(6712, 1984), 2);
    add_background_object(create_quickbackdrop4_1298(6776, 1984), 2);
    add_background_object(create_quickbackdrop4_1298(6840, 1984), 2);
    add_background_object(create_quickbackdrop4_1298(6904, 1984), 2);
    add_background_object(create_quickbackdrop4_1298(6968, 1984), 2);
    add_background_object(create_rmminetrack3_1299(6944, 1976), 2);
    add_background_object(create_rmminetrack3_1299(2656, 2304), 2);
    add_background_object(create_rmhugedirtpattern_1300(960, 800), 2);
    add_background_object(create_rmbush3_1115(7416, 712), 2);
    add_background_object(create_rmcolumn2_1109(7464, 720), 2);
    add_background_object(create_rmcolumn2_1109(744, 400), 2);
    add_background_object(create_rmcolumn2_1109(616, 432), 2);
    add_background_object(create_rmcolumn2_1109(680, 432), 2);
    add_background_object(create_rmcolumn2_1109(232, 408), 2);
    add_background_object(create_rmcolumn2_1109(168, 432), 2);
    add_background_object(create_rmcolumn2_1109(552, 408), 2);
    add_background_object(create_rmbluecrystal2_1301(11336, 2208), 2);
    add_background_object(create_shaft4_1302(8128, 2560), 2);
    add_background_object(create_shaft4_1302(8128, 2656), 2);
    add_background_object(create_shaft4_1302(7984, 2560), 2);
    add_background_object(create_shaft4_1302(7984, 2656), 2);
    add_background_object(create_shaft2_1303(11232, 2192), 2);
    add_background_object(create_shaft2_1303(11232, 2096), 2);
    add_background_object(create_cavesoil27_1304(11280, 2272), 2);
    add_background_object(create_cavesoil18_1305(11280, 2264), 2);
    add_background_object(create_rmbluecrystal2_1301(11560, 2688), 2);
    add_background_object(create_rmbluecrystal2_1301(12000, 2400), 2);
    add_background_object(create_rmbluecrystal1_1306(11808, 2256), 2);
    add_background_object(create_rmbluecrystal2_1301(11696, 2208), 2);
    add_background_object(create_rmbluecrystal1_1306(11184, 2632), 2);
    add_background_object(create_rmbluecrystal2_1301(11096, 2496), 2);
    add_background_object(create_rmbluecrystal1_1306(11136, 2632), 2);
    add_background_object(create_shaft2_1303(10656, 2416), 2);
    add_background_object(create_shaft2_1303(11632, 2552), 2);
    add_background_object(create_cavesoil9_1307(11904, 2368), 2);
    add_background_object(create_cavesoil9_1307(11808, 2272), 2);
    add_background_object(create_cavesoil19_1308(11056, 2688), 2);
    add_background_object(create_cavesoil17_1309(11072, 2568), 2);
    add_background_object(create_cavesoil17_1309(11072, 2632), 2);
    add_background_object(create_cavesoil1_1310(11776, 2400), 2);
    add_background_object(create_cavesoil1_1310(11216, 2272), 2);
    add_background_object(create_cavesoil17_1309(10992, 2696), 2);
    add_background_object(create_cavesoil17_1309(10928, 2696), 2);
    add_background_object(create_cavesoil17_1309(11040, 2760), 2);
    add_background_object(create_cavesoil1_1310(11648, 2464), 2);
    add_background_object(create_cavesoil1_1310(11520, 2464), 2);
    add_background_object(create_gimmickrisingswingbase_1311(11984, 2936), 2);
    add_background_object(create_cavesoil28_1312(11792, 2824), 2);
    add_background_object(create_cavesoil28_1312(11792, 2856), 2);
    add_background_object(create_cavesoil28_1312(11792, 2888), 2);
    add_background_object(create_cavesoil28_1312(11792, 2920), 2);
    add_background_object(create_cavesoil17_1309(11552, 2760), 2);
    add_background_object(create_cavesoil17_1309(11616, 2760), 2);
    add_background_object(create_cavesoil1_1310(12032, 2848), 2);
    add_background_object(create_cavesoil27_1304(10560, 2464), 2);
    add_background_object(create_rmbluecrystal1_1306(11320, 2928), 2);
    add_background_object(create_cavesoil11_1313(9384, 2568), 2);
    add_background_object(create_cavesoil14_1314(9408, 2672), 2);
    add_background_object(create_cavesoil1_1310(9448, 2720), 2);
    add_background_object(create_cavesoil17_1309(9568, 2848), 2);
    add_background_object(create_cavesoil17_1309(9632, 2848), 2);
    add_background_object(create_rmbluecrystal1_1306(10336, 3160), 2);
    add_background_object(create_shaft2_1303(10776, 3336), 2);
    add_background_object(create_rmbluecrystal2_1301(10800, 3368), 2);
    add_background_object(create_rmbluecrystal1_1306(10848, 3384), 2);
    add_background_object(create_rmbluecrystal2_1301(10280, 2784), 2);
    add_background_object(create_rmbluecrystal1_1306(10640, 2936), 2);
    add_background_object(create_shaft2_1303(10680, 3456), 2);
    add_background_object(create_shaft2_1303(10680, 3552), 2);
    add_background_object(create_cavesoil17_1309(11200, 3616), 2);
    add_background_object(create_cavesoil17_1309(10632, 2624), 2);
    add_background_object(create_shaft2_1303(10512, 2768), 2);
    add_background_object(create_shaft2_1303(11232, 3296), 2);
    add_background_object(create_shaft2_1303(11496, 3264), 2);
    add_background_object(create_shaft2_1303(11496, 3360), 2);
    add_background_object(create_shaft2_1303(11232, 3008), 2);
    add_background_object(create_shaft2_1303(11232, 3104), 2);
    add_background_object(create_shaft2_1303(11232, 3200), 2);
    add_background_object(create_shaft2_1303(11656, 3008), 2);
    add_background_object(create_shaft2_1303(11656, 3104), 2);
    add_background_object(create_shaft2_1303(10128, 3008), 2);
    add_background_object(create_shaft2_1303(10128, 2912), 2);
    add_background_object(create_cavesoil8_1315(10184, 2840), 2);
    add_background_object(create_cavesoil27_1304(10304, 2656), 2);
    add_background_object(create_cavesoil17_1309(10760, 2952), 2);
    add_background_object(create_cavesoil17_1309(10760, 2984), 2);
    add_background_object(create_cavesoil28_1312(10808, 2952), 2);
    add_background_object(create_cavesoil28_1312(10808, 3008), 2);
    add_background_object(create_cavesoil27_1304(10560, 3072), 2);
    add_background_object(create_cavesoil17_1309(10560, 3008), 2);
    add_background_object(create_cavesoil17_1309(10624, 3008), 2);
    add_background_object(create_cavesoil27_1304(10688, 3008), 2);
    add_background_object(create_cavesoil1_1310(11264, 3448), 2);
    add_background_object(create_cavesoil9_1307(11352, 3328), 2);
    add_background_object(create_cavesoil17_1309(11344, 3064), 2);
    add_background_object(create_cavesoil17_1309(11344, 3128), 2);
    add_background_object(create_cavesoil17_1309(11472, 3192), 2);
    add_background_object(create_cavesoil15_1316(11344, 3192), 2);
    add_background_object(create_cavesoil25_1317(10752, 3392), 2);
    add_background_object(create_shaft2_1303(9248, 2616), 2);
    add_background_object(create_shaft2_1303(9248, 2712), 2);
    add_background_object(create_cavesoil1_1310(8984, 2808), 2);
    add_background_object(create_column5_1318(7584, 2552), 2);
    add_background_object(create_column5_1318(7904, 2680), 2);
    add_background_object(create_column5_1318(7832, 2680), 2);
    add_background_object(create_cavesoil15_1316(10432, 3104), 2);
    add_background_object(create_cavesoil28_1312(10544, 3136), 2);
    add_background_object(create_cavesoil1_1310(10176, 3168), 2);
    add_background_object(create_shaft2_1303(8976, 2616), 2);
    add_background_object(create_shaft2_1303(8976, 2712), 2);
    add_background_object(create_shaft2_1303(8840, 2696), 2);
    add_background_object(create_shaft2_1303(8840, 2792), 2);
    add_background_object(create_shaft2_1303(8840, 2888), 2);
    add_background_object(create_shaft2_1303(8536, 2640), 2);
    add_background_object(create_shaft2_1303(8536, 2544), 2);
    add_background_object(create_cavesoil1_1310(9536, 2976), 2);
    add_background_object(create_cavesoil9_1307(9256, 2856), 2);
    add_background_object(create_cavesoil1_1310(9360, 2976), 2);
    add_background_object(create_cavesoil1_1310(9232, 2952), 2);
    add_background_object(create_cavesoil1_1310(9112, 2808), 2);
    add_background_object(create_cavesoil1_1310(9104, 2920), 2);
    add_background_object(create_cavesoil1_1310(8848, 2928), 2);
    add_background_object(create_cavesoil9_1307(8728, 2840), 2);
    add_background_object(create_cavesoil9_1307(8632, 2744), 2);
    add_background_object(create_cavesoil1_1310(7568, 2744), 2);
    add_background_object(create_cavesoil1_1310(7536, 2616), 2);
    add_background_object(create_cavesoil9_1307(7696, 2632), 2);
    add_background_object(create_cavesoil1_1310(8128, 2336), 2);
    add_background_object(create_cavesoil1_1310(8256, 2336), 2);
    add_background_object(create_rmbush2_1118(7184, 608), 2);
    add_background_object(create_rmcolumn2_1109(7336, 656), 2);
    add_background_object(create_rmcolumn1_1113(7336, 704), 2);
    add_background_object(create_rmbush1_1119(7360, 712), 2);
    add_background_object(create_rmbush3_1115(6888, 584), 2);
    add_background_object(create_soil1_1120(7872, 640), 2);
    add_background_object(create_soil1_1120(7872, 512), 2);
    add_background_object(create_rmbrick13_1116(7616, 672), 2);
    add_background_object(create_rmbrick13_1116(7680, 672), 2);
    add_background_object(create_rmcolumn1_1113(7464, 752), 2);
    add_background_object(create_rmcolumn4_1117(7464, 680), 2);
    add_background_object(create_rmcolumn1_1113(7016, 624), 2);
    add_background_object(create_rmcolumn1_1113(7080, 624), 2);
    add_background_object(create_caravanplatform12_1319(6512, 480), 2);
    add_background_object(create_caravanplatform3_1320(4832, 600), 2);
    add_background_object(create_caravanplatform3_1320(4960, 600), 2);
    add_background_object(create_caravanplatform5_1321(5024, 600), 2);
    add_background_object(create_caravanplatform4_1322(4896, 600), 2);
    add_background_object(create_rmbush3_1115(496, 488), 2);
    add_background_object(create_rmbush3_1115(3784, 584), 2);
    add_background_object(create_rmbrick3_1131(3776, 640), 2);
    add_background_object(create_rmcolumn1_1113(2344, 464), 2);
    add_background_object(create_rmcolumn1_1113(2600, 464), 2);
    add_background_object(create_rmcolumn1_1113(2856, 464), 2);
    add_background_object(create_rmcolumn1_1113(1576, 464), 2);
    add_background_object(create_rmcolumn1_1113(1832, 464), 2);
    add_background_object(create_rmcolumn1_1113(2088, 464), 2);
    add_background_object(create_rmcolumn1_1113(1320, 464), 2);
    add_background_object(create_rmcolumn1_1113(1064, 464), 2);
    add_background_object(create_shrine1_1323(840, 432), 2);
    add_background_object(create_rmcolumn1_1113(328, 528), 2);
    add_background_object(create_rmcolumn1_1113(456, 528), 2);
    add_background_object(create_rmcolumn4_1117(744, 360), 2);
    add_background_object(create_rmcolumn1_1113(744, 464), 2);
    add_background_object(create_rmcolumn1_1113(680, 464), 2);
    add_background_object(create_rmcolumn4_1117(680, 392), 2);
    add_background_object(create_rmcolumn1_1113(616, 464), 2);
    add_background_object(create_rmcolumn4_1117(616, 392), 2);
    add_background_object(create_rmcolumn4_1117(552, 360), 2);
    add_background_object(create_rmcolumn1_1113(552, 496), 2);
    add_background_object(create_rmcolumn4_1117(232, 360), 2);
    add_background_object(create_rmcolumn1_1113(232, 496), 2);
    add_background_object(create_rmcolumn1_1113(168, 464), 2);
    add_background_object(create_rmcolumn4_1117(168, 392), 2);
    add_background_object(create_rmentrywayleft_1208(64, 384), 2);
    add_background_object(create_rmentrywayleft2_1210(64, 384), 2);
    add_background_object(create_rmbrick5_1136(64, 512), 2);
    add_background_object(create_rmbrick9_1138(128, 512), 2);
    add_background_object(create_rmbrick13_1116(64, 384), 2);
    add_background_object(create_rmbrick13_1116(128, 384), 2);
    add_background_object(create_rmbrick15_1154(192, 384), 2);
    add_background_object(create_rmbrick1_1121(64, 256), 2);
    add_background_object(create_rmbrick1_1121(576, 224), 2);
    add_background_object(create_rmbrick1_1121(-64, 256), 2);
    add_background_object(create_rmbrick1_1121(-64, 128), 2);
    add_background_object(create_rmbrick1_1121(-64, 544), 2);
    add_background_object(create_rmbrick1_1121(64, 544), 2);
    add_background_object(create_rmbrick2_1108(0, 512), 2);
    add_background_object(create_rmbrick2_1108(-64, 512), 2);
    add_background_object(create_rmbrick1_1121(576, 96), 2);
    add_background_object(create_rmbrick1_1121(-64, 0), 2);
    add_background_object(create_separatormasterobjects2_12(-480, 152), 2);
    add_background_object(create_rmbrick1_1121(192, 128), 2);
    add_background_object(create_rmbrick1_1121(192, 0), 2);
    add_background_object(create_rmbrick1_1121(64, 128), 2);
    add_background_object(create_rmbrick1_1121(64, 0), 2);
    add_background_object(create_rmbrick1_1121(448, 192), 2);
    add_background_object(create_rmbrick1_1121(448, 64), 2);
    add_background_object(create_rmbrick1_1121(320, 192), 2);
    add_background_object(create_rmbrick1_1121(320, 64), 2);
    add_background_object(create_rmbrick7_1130(192, 512), 2);
    add_background_object(create_rmbrick3_1131(192, 544), 2);
    add_background_object(create_rmbrick5_1136(192, 544), 2);
    add_background_object(create_rmbrick7_1130(256, 544), 2);
    add_background_object(create_rmbrick1_1121(192, 608), 2);
    add_background_object(create_rmbrick2_1108(192, 576), 2);
    add_background_object(create_rmbrick3_1131(256, 576), 2);
    add_background_object(create_rmbrick9_1138(256, 576), 2);
    add_background_object(create_rmbrick2_1108(192, 320), 2);
    add_background_object(create_rmbrick15_1154(256, 352), 2);
    add_background_object(create_rmbrick13_1116(192, 352), 2);
    add_background_object(create_rmbrick3_1131(192, 352), 2);
    add_background_object(create_rmbrick2_1108(256, 288), 2);
    add_background_object(create_rmbrick13_1116(256, 320), 2);
    add_background_object(create_rmbrick3_1131(256, 320), 2);
    add_background_object(create_rmbrick2_1108(192, 256), 2);
    add_background_object(create_rmbrick2_1108(256, 256), 2);
    add_background_object(create_rmbrick2_1108(192, 288), 2);
    add_background_object(create_rmbrick1_1121(-64, 672), 2);
    add_background_object(create_rmbrick1_1121(64, 672), 2);
    add_background_object(create_rmbrick1_1121(320, 608), 2);
    add_background_object(create_rmbrick1_1121(192, 736), 2);
    add_background_object(create_rmbrick1_1121(320, 736), 2);
    add_background_object(create_rmbrick1_1121(576, -32), 2);
    add_background_object(create_rmbrick1_1121(448, -64), 2);
    add_background_object(create_rmbrick1_1121(320, -64), 2);
    add_background_object(create_rmbrick5_1136(320, 576), 2);
    add_background_object(create_rmbrick9_1138(384, 576), 2);
    add_background_object(create_rmbrick13_1116(320, 320), 2);
    add_background_object(create_rmbrick13_1116(384, 320), 2);
    add_background_object(create_rmbrick13_1116(448, 320), 2);
    add_background_object(create_rmbrick1_1121(448, 608), 2);
    add_background_object(create_rmbrick1_1121(448, 736), 2);
    add_background_object(create_rmbrick5_1136(448, 576), 2);
    add_background_object(create_rmbrick1_1121(576, 576), 2);
    add_background_object(create_rmbrick1_1121(576, 704), 2);
    add_background_object(create_rmbrick6_1129(552, 544), 2);
    add_background_object(create_rmbrick4_1125(552, 576), 2);
    add_background_object(create_rmbrick9_1138(512, 576), 2);
    add_background_object(create_rmbrick13_1116(512, 320), 2);
    add_background_object(create_rmbrick4_1125(552, 320), 2);
    add_background_object(create_rmbrick14_1128(552, 352), 2);
    add_background_object(create_rmbrick13_1116(576, 352), 2);
    add_background_object(create_rmbrick4_1125(616, 352), 2);
    add_background_object(create_rmbrick14_1128(616, 384), 2);
    add_background_object(create_rmbrick4_1125(616, 544), 2);
    add_background_object(create_rmbrick5_1136(576, 544), 2);
    add_background_object(create_rmbrick6_1129(616, 512), 2);
    add_background_object(create_rmbrick9_1138(640, 512), 2);
    add_background_object(create_rmbrick8_1135(640, 544), 2);
    add_background_object(create_rmbrick8_1135(640, 352), 2);
    add_background_object(create_rmbrick13_1116(640, 384), 2);
    add_background_object(create_rmbrick15_1154(704, 384), 2);
    add_background_object(create_rmcolumn2_1109(232, 448), 2);
    add_background_object(create_rmcolumn2_1109(552, 448), 2);
    add_background_object(create_rmbrick2_1108(704, 320), 2);
    add_background_object(create_rmbrick13_1116(704, 352), 2);
    add_background_object(create_rmbrick3_1131(704, 352), 2);
    add_background_object(create_rmbrick15_1154(768, 352), 2);
    add_background_object(create_rmbrick13_1116(768, 320), 2);
    add_background_object(create_rmbrick3_1131(768, 320), 2);
    add_background_object(create_rmbrick1_1121(704, 192), 2);
    add_background_object(create_rmbrick1_1121(704, 64), 2);
    add_background_object(create_rmbrick1_1121(704, -64), 2);
    add_background_object(create_rmbrick1_1121(832, 192), 2);
    add_background_object(create_rmbrick1_1121(832, 64), 2);
    add_background_object(create_rmbrick1_1121(832, -64), 2);
    add_background_object(create_rmbrick13_1116(832, 320), 2);
    add_background_object(create_rmbrick13_1116(896, 320), 2);
    add_background_object(create_rmbrick5_1136(704, 512), 2);
    add_background_object(create_rmbrick9_1138(768, 512), 2);
    add_background_object(create_rmbrick1_1121(704, 544), 2);
    add_background_object(create_rmbrick1_1121(704, 672), 2);
    add_background_object(create_rmbrick10_1324(832, 544), 2);
    add_background_object(create_rmcolumn2_1109(744, 416), 2);
    add_background_object(create_rmbrick1_1121(960, 544), 2);
    add_background_object(create_rmbrick1_1121(960, 672), 2);
    add_background_object(create_rmbrick5_1136(960, 512), 2);
    add_background_object(create_rmcolumn2_1109(456, 480), 2);
    add_background_object(create_rmcolumn3_1114(328, 480), 2);
    add_background_object(create_rmcolumn3_1114(456, 432), 2);
    add_background_object(create_rmbrick1_1121(960, 192), 2);
    add_background_object(create_rmbrick1_1121(960, 64), 2);
    add_background_object(create_rmbrick1_1121(960, -64), 2);
    add_background_object(create_rmbrick13_1116(960, 320), 2);
    add_background_object(create_rmbrick13_1116(1024, 320), 2);
    add_background_object(create_rmbrick4_1125(1064, 320), 2);
    add_background_object(create_rmbrick14_1128(1064, 352), 2);
    add_background_object(create_rmbrick1_1121(1088, 544), 2);
    add_background_object(create_rmbrick1_1121(1088, 672), 2);
    add_background_object(create_rmbrick3_1131(1088, 0), 2);
    add_background_object(create_rmbrick3_1131(1088, 32), 2);
    add_background_object(create_rmbrick3_1131(1088, 64), 2);
    add_background_object(create_rmbrick3_1131(1088, 96), 2);
    add_background_object(create_rmbrick3_1131(1088, 128), 2);
    add_background_object(create_rmbrick3_1131(1088, 160), 2);
    add_background_object(create_rmbrick3_1131(1088, 192), 2);
    add_background_object(create_rmbrick3_1131(1088, 224), 2);
    add_background_object(create_rmbrick3_1131(1088, 256), 2);
    add_background_object(create_rmbrick3_1131(1088, 288), 2);
    add_background_object(create_rmbrick3_1131(1088, 320), 2);
    add_background_object(create_rmbrick15_1154(1088, 352), 2);
    add_background_object(create_rmbrick1_1121(1216, 544), 2);
    add_background_object(create_rmbrick1_1121(1216, 672), 2);
    add_background_object(create_rmbrick1_1121(1344, 544), 2);
    add_background_object(create_rmbrick1_1121(1344, 672), 2);
    add_background_object(create_rmbrick5_1136(1344, 512), 2);
    add_background_object(create_rmbrick9_1138(1408, 512), 2);
    add_background_object(create_rmbrick1_1121(1472, 544), 2);
    add_background_object(create_rmbrick1_1121(1472, 672), 2);
    add_background_object(create_rmbrick5_1136(1472, 512), 2);
    add_background_object(create_rmbrick9_1138(1536, 512), 2);
    add_background_object(create_rmbrick1_1121(1600, 544), 2);
    add_background_object(create_rmbrick1_1121(1600, 672), 2);
    add_background_object(create_rmbrick5_1136(1600, 512), 2);
    add_background_object(create_rmbrick9_1138(1664, 512), 2);
    add_background_object(create_rmbrick1_1121(1728, 544), 2);
    add_background_object(create_rmbrick1_1121(1728, 672), 2);
    add_background_object(create_rmbrick5_1136(1728, 512), 2);
    add_background_object(create_rmbrick9_1138(1792, 512), 2);
    add_background_object(create_rmbrick1_1121(1856, 544), 2);
    add_background_object(create_rmbrick1_1121(1856, 672), 2);
    add_background_object(create_rmbrick5_1136(1856, 512), 2);
    add_background_object(create_rmbrick9_1138(1920, 512), 2);
    add_background_object(create_rmbrick1_1121(1984, 544), 2);
    add_background_object(create_rmbrick1_1121(1984, 672), 2);
    add_background_object(create_rmbrick5_1136(1984, 512), 2);
    add_background_object(create_rmbrick9_1138(2048, 512), 2);
    add_background_object(create_rmbrick1_1121(2112, 544), 2);
    add_background_object(create_rmbrick1_1121(2112, 672), 2);
    add_background_object(create_rmbrick5_1136(2112, 512), 2);
    add_background_object(create_rmbrick9_1138(2176, 512), 2);
    add_background_object(create_rmbrick1_1121(2240, 544), 2);
    add_background_object(create_rmbrick1_1121(2240, 672), 2);
    add_background_object(create_rmbrick5_1136(2240, 512), 2);
    add_background_object(create_rmbrick9_1138(2304, 512), 2);
    add_background_object(create_rmbrick1_1121(2368, 544), 2);
    add_background_object(create_rmbrick1_1121(2368, 672), 2);
    add_background_object(create_rmbrick5_1136(2368, 512), 2);
    add_background_object(create_rmbrick9_1138(2432, 512), 2);
    add_background_object(create_rmbrick1_1121(2496, 544), 2);
    add_background_object(create_rmbrick1_1121(2496, 672), 2);
    add_background_object(create_rmbrick5_1136(2496, 512), 2);
    add_background_object(create_rmbrick9_1138(2560, 512), 2);
    add_background_object(create_rmbrick1_1121(2624, 544), 2);
    add_background_object(create_rmbrick1_1121(2624, 672), 2);
    add_background_object(create_rmbrick5_1136(2624, 512), 2);
    add_background_object(create_rmbrick9_1138(2688, 512), 2);
    add_background_object(create_rmbrick1_1121(2752, 544), 2);
    add_background_object(create_rmbrick1_1121(2752, 672), 2);
    add_background_object(create_rmbrick5_1136(2752, 512), 2);
    add_background_object(create_rmbrick9_1138(2816, 512), 2);
    add_background_object(create_rmbrick1_1121(2880, 544), 2);
    add_background_object(create_rmbrick1_1121(2880, 672), 2);
    add_background_object(create_rmbrick5_1136(2880, 512), 2);
    add_background_object(create_rmbrick9_1138(2944, 512), 2);
    add_background_object(create_rmcolumn3_1114(1064, 440), 2);
    add_background_object(create_rmcolumn3_1114(1320, 440), 2);
    add_background_object(create_rmcolumn3_1114(1576, 440), 2);
    add_background_object(create_rmcolumn3_1114(1832, 440), 2);
    add_background_object(create_rmcolumn3_1114(2088, 440), 2);
    add_background_object(create_rmcolumn3_1114(2344, 440), 2);
    add_background_object(create_rmcolumn3_1114(2600, 440), 2);
    add_background_object(create_rmcolumn1_1113(3112, 464), 2);
    add_background_object(create_rmcolumn3_1114(2856, 440), 2);
    add_background_object(create_rmcolumn3_1114(3112, 440), 2);
    add_background_object(create_rmbrick1_1121(3008, 544), 2);
    add_background_object(create_rmbrick1_1121(3008, 672), 2);
    add_background_object(create_rmbrick5_1136(3008, 512), 2);
    add_background_object(create_rmbrick9_1138(3072, 512), 2);
    add_background_object(create_rmbrick1_1121(3136, 544), 2);
    add_background_object(create_rmbrick1_1121(3136, 672), 2);
    add_background_object(create_rmbrick5_1136(3136, 512), 2);
    add_background_object(create_rmbrick9_1138(3200, 512), 2);
    add_background_object(create_rmcolumn1_1113(3368, 464), 2);
    add_background_object(create_rmbrick1_1121(3264, 544), 2);
    add_background_object(create_rmbrick1_1121(3264, 672), 2);
    add_background_object(create_rmbrick5_1136(3264, 512), 2);
    add_background_object(create_rmbrick9_1138(3328, 512), 2);
    add_background_object(create_rmbrick1_1121(3392, 544), 2);
    add_background_object(create_rmbrick1_1121(3392, 672), 2);
    add_background_object(create_rmbrick5_1136(3392, 512), 2);
    add_background_object(create_rmbrick9_1138(3456, 512), 2);
    add_background_object(create_rmcolumn1_1113(3624, 464), 2);
    add_background_object(create_rmcolumn3_1114(3368, 440), 2);
    add_background_object(create_rmcolumn3_1114(3624, 440), 2);
    add_background_object(create_rmbrick1_1121(3520, 544), 2);
    add_background_object(create_rmbrick1_1121(3520, 672), 2);
    add_background_object(create_rmbrick5_1136(3520, 512), 2);
    add_background_object(create_rmbrick9_1138(3584, 512), 2);
    add_background_object(create_rmbrick1_1121(3648, 544), 2);
    add_background_object(create_rmbrick1_1121(3648, 672), 2);
    add_background_object(create_rmbrick5_1136(3648, 512), 2);
    add_background_object(create_rmbrick9_1138(3712, 512), 2);
    add_background_object(create_rmbrick4_1125(3752, 224), 2);
    add_background_object(create_rmbrick3_1131(3776, 320), 2);
    add_background_object(create_rmbrick3_1131(3776, 288), 2);
    add_background_object(create_rmbrick3_1131(3776, 256), 2);
    add_background_object(create_rmbrick3_1131(3776, 224), 2);
    add_background_object(create_rmbrick14_1128(3752, 352), 2);
    add_background_object(create_rmbrick4_1125(3752, 256), 2);
    add_background_object(create_rmbrick4_1125(3752, 288), 2);
    add_background_object(create_rmbrick4_1125(3752, 320), 2);
    add_background_object(create_rmbrick4_1125(3752, 192), 2);
    add_background_object(create_rmbrick3_1131(3776, 192), 2);
    add_background_object(create_rmbrick4_1125(3752, 96), 2);
    add_background_object(create_rmbrick3_1131(3776, 160), 2);
    add_background_object(create_rmbrick3_1131(3776, 128), 2);
    add_background_object(create_rmbrick3_1131(3776, 96), 2);
    add_background_object(create_rmbrick4_1125(3752, 128), 2);
    add_background_object(create_rmbrick4_1125(3752, 160), 2);
    add_background_object(create_rmbrick4_1125(3752, 64), 2);
    add_background_object(create_rmbrick3_1131(3776, 64), 2);
    add_background_object(create_rmbrick4_1125(3752, 32), 2);
    add_background_object(create_rmbrick3_1131(3776, 32), 2);
    add_background_object(create_rmbrick4_1125(3752, 0), 2);
    add_background_object(create_rmbrick3_1131(3776, 0), 2);
    add_background_object(create_rmbrick7_1130(3776, 512), 2);
    add_background_object(create_soil1_1120(3648, 704), 2);
    add_background_object(create_soil2_1140(3648, 672), 2);
    add_background_object(create_soil1_1120(3776, 672), 2);
    add_background_object(create_rmgrass4_1142(3776, 664), 2);
    add_background_object(create_rmgrass6_1147(3760, 672), 2);
    add_background_object(create_soil3_1141(3608, 696), 2);
    add_background_object(create_soil3_1141(3536, 776), 2);
    add_background_object(create_soil1_1120(3904, 672), 2);
    add_background_object(create_rmgrass4_1142(3904, 664), 2);
    add_background_object(create_rmbrick3_1131(3776, 608), 2);
    add_background_object(create_rmbrick3_1131(3776, 576), 2);
    add_background_object(create_rmbrick3_1131(3776, 544), 2);
    add_background_object(create_soil1_1120(4032, 672), 2);
    add_background_object(create_soil1_1120(4160, 672), 2);
    add_background_object(create_soil1_1120(4288, 672), 2);
    add_background_object(create_soil1_1120(4416, 672), 2);
    add_background_object(create_soil1_1120(4544, 672), 2);
    add_background_object(create_soil1_1120(4672, 672), 2);
    add_background_object(create_soil1_1120(4800, 672), 2);
    add_background_object(create_caravanplatform_1325(4296, 600), 2);
    add_background_object(create_caravanplatform2_1326(4568, 560), 2);
    add_background_object(create_caravanplatform_1325(4808, 600), 2);
    add_background_object(create_soil1_1120(4928, 672), 2);
    add_background_object(create_soil1_1120(5056, 672), 2);
    add_background_object(create_soil1_1120(5184, 672), 2);
    add_background_object(create_caravanplatform_1325(5064, 600), 2);
    add_background_object(create_caravanplatform2_1326(5080, 560), 2);
    add_background_object(create_caravanplatform2_1326(5208, 560), 2);
    add_background_object(create_soil1_1120(5312, 672), 2);
    add_background_object(create_soil1_1120(5440, 672), 2);
    add_background_object(create_caravanplatform2_1326(5272, 560), 2);
    add_background_object(create_caravanplatform2_1326(5400, 560), 2);
    add_background_object(create_caravanplatform2_1326(5336, 560), 2);
    add_background_object(create_caravanplatform2_1326(5528, 560), 2);
    add_background_object(create_soil1_1120(5568, 672), 2);
    add_background_object(create_soil1_1120(5696, 672), 2);
    add_background_object(create_soil1_1120(5824, 672), 2);
    add_background_object(create_soil1_1120(5952, 672), 2);
    add_background_object(create_caravanplatform3_1320(6048, 600), 2);
    add_background_object(create_caravanplatform4_1322(5856, 600), 2);
    add_background_object(create_soil1_1120(6080, 672), 2);
    add_background_object(create_soil1_1120(6208, 672), 2);
    add_background_object(create_caravanplatform3_1320(6304, 600), 2);
    add_background_object(create_caravanplatform3_1320(5920, 600), 2);
    add_background_object(create_caravanplatform3_1320(5792, 600), 2);
    add_background_object(create_caravanplatform9_1327(6368, 600), 2);
    add_background_object(create_caravanplatform5_1321(5984, 600), 2);
    add_background_object(create_caravanplatform_1325(6024, 600), 2);
    add_background_object(create_caravanplatform3_1320(4320, 600), 2);
    add_background_object(create_caravanplatform3_1320(4448, 600), 2);
    add_background_object(create_caravanplatform5_1321(4512, 600), 2);
    add_background_object(create_caravanplatform4_1322(4384, 600), 2);
    add_background_object(create_caravanplatform_1325(4552, 600), 2);
    add_background_object(create_caravanplatform3_1320(4576, 600), 2);
    add_background_object(create_caravanplatform3_1320(4704, 600), 2);
    add_background_object(create_caravanplatform5_1321(4768, 600), 2);
    add_background_object(create_caravanplatform4_1322(4640, 600), 2);
    add_background_object(create_caravanplatform7_1328(4464, 552), 2);
    add_background_object(create_caravanplatform3_1320(5088, 600), 2);
    add_background_object(create_caravanplatform3_1320(5248, 600), 2);
    add_background_object(create_caravanplatform4_1322(5152, 600), 2);
    add_background_object(create_caravanplatform3_1320(5408, 600), 2);
    add_background_object(create_caravanplatform5_1321(5472, 600), 2);
    add_background_object(create_caravanplatform4_1322(5344, 600), 2);
    add_background_object(create_caravanplatform_1325(5512, 600), 2);
    add_background_object(create_caravanplatform3_1320(5536, 600), 2);
    add_background_object(create_caravanplatform3_1320(5664, 600), 2);
    add_background_object(create_caravanplatform5_1321(5728, 600), 2);
    add_background_object(create_caravanplatform4_1322(5600, 600), 2);
    add_background_object(create_caravanplatform_1325(5768, 600), 2);
    add_background_object(create_caravanplatform4_1322(5184, 600), 2);
    add_background_object(create_caravanplatform4_1322(5312, 600), 2);
    add_background_object(create_caravanplatform4_1322(6512, 600), 2);
    add_background_object(create_caravanplatform3_1320(6240, 600), 2);
    add_background_object(create_caravanplatform4_1322(6112, 600), 2);
    add_background_object(create_caravanplatform4_1322(6176, 600), 2);
    add_background_object(create_caravanplatform2_1326(6448, 560), 2);
    add_background_object(create_soil1_1120(6336, 672), 2);
    add_background_object(create_soil1_1120(6464, 672), 2);
    add_background_object(create_soil1_1120(6592, 672), 2);
    add_background_object(create_caravanplatform2_1326(6448, 520), 2);
    add_background_object(create_caravanplatform2_1326(6448, 480), 2);
    add_background_object(create_caravanplatform4_1322(6448, 600), 2);
    add_background_object(create_caravanplatform3_1320(6640, 600), 2);
    add_background_object(create_soil1_1120(6976, 672), 2);
    add_background_object(create_caravanplatform10_1329(6448, 608), 2);
    add_background_object(create_caravanplatform4_1322(6576, 600), 2);
    add_background_object(create_caravantruck_1330(6528, 480), 2);
    add_background_object(create_caravantruck3_1331(6576, 480), 2);
    add_background_object(create_caravanplatform10_1329(6528, 608), 2);
    add_background_object(create_soil1_1120(6720, 672), 2);
    add_background_object(create_soil1_1120(6848, 672), 2);
    add_background_object(create_caravanplatform12_1319(6704, 552), 2);
    add_background_object(create_caravanplatform11_1332(6504, 520), 2);
    add_background_object(create_bossclawbaseback_1333(6384, 536), 2);
    add_background_object(create_soil8_1143(7616, 800), 2);
    add_background_object(create_soil1_1120(7616, 928), 2);
    add_background_object(create_soil1_1120(7744, 928), 2);
    add_background_object(create_soil1_1120(7872, 928), 2);
    add_background_object(create_rmgrass3_1144(7616, 800), 2);
    add_background_object(create_soil1_1120(7488, 928), 2);
    add_background_object(create_soil1_1120(7488, 800), 2);
    add_background_object(create_rmgrass4_1142(7488, 792), 2);
    add_background_object(create_rmgrass1_1132(7872, 928), 2);
    add_background_object(create_rmgrass1_1132(7936, 928), 2);
    add_background_object(create_soil1_1120(7616, 1568), 2);
    add_background_object(create_soil1_1120(7744, 1568), 2);
    add_background_object(create_soil1_1120(7872, 1568), 2);
    add_background_object(create_soil1_1120(7872, 1056), 2);
    add_background_object(create_soil1_1120(7488, 1568), 2);
    add_background_object(create_rmbrick1_1121(7040, 288), 2);
    add_background_object(create_rmbrick4_1125(7016, 384), 2);
    add_background_object(create_rmbrick4_1125(7016, 352), 2);
    add_background_object(create_rmbrick4_1125(7016, 320), 2);
    add_background_object(create_rmbrick4_1125(7016, 288), 2);
    add_background_object(create_soil1_1120(8128, 928), 2);
    add_background_object(create_soil1_1120(8128, 1568), 2);
    add_background_object(create_cavesoil1_1310(8128, 2464), 2);
    add_background_object(create_soiltocave_1334(8128, 1696), 2);
    add_background_object(create_rmbrick1_1121(7168, 288), 2);
    add_background_object(create_rmbrick1_1121(7232, 416), 2);
    add_background_object(create_rmbrick13_1116(7232, 544), 2);
    add_background_object(create_rmbrick13_1116(7296, 544), 2);
    add_background_object(create_rmbrick1_1121(7360, 352), 2);
    add_background_object(create_rmbrick1_1121(7360, 480), 2);
    add_background_object(create_rmbrick4_1125(7336, 576), 2);
    add_background_object(create_rmbrick4_1125(7336, 544), 2);
    add_background_object(create_rmcolumn4_1117(7336, 616), 2);
    add_background_object(create_rmbrick13_1116(7360, 608), 2);
    add_background_object(create_rmbrick14_1128(7336, 608), 2);
    add_background_object(create_soil8_1143(7232, 672), 2);
    add_background_object(create_soil1_1120(7104, 672), 2);
    add_background_object(create_rmgrass4_1142(7104, 664), 2);
    add_background_object(create_rmgrass3_1144(7232, 672), 2);
    add_background_object(create_rmcolumn2_1109(7080, 576), 2);
    add_background_object(create_rmbrick1_1121(7104, 416), 2);
    add_background_object(create_rmcolumn4_1117(7080, 552), 2);
    add_background_object(create_rmbrick13_1116(7104, 544), 2);
    add_background_object(create_rmbrick13_1116(7168, 544), 2);
    add_background_object(create_rmbrick14_1128(7080, 544), 2);
    add_background_object(create_rmbrick4_1125(7080, 512), 2);
    add_background_object(create_rmbrick4_1125(7016, 448), 2);
    add_background_object(create_rmbrick2_1108(7040, 448), 2);
    add_background_object(create_rmbrick2_1108(7040, 416), 2);
    add_background_object(create_rmbrick4_1125(7080, 480), 2);
    add_background_object(create_rmbrick4_1125(7016, 416), 2);
    add_background_object(create_rmcolumn2_1109(7016, 576), 2);
    add_background_object(create_rmcolumn2_1109(7016, 528), 2);
    add_background_object(create_rmcolumn4_1117(7016, 488), 2);
    add_background_object(create_rmbrick13_1116(7040, 480), 2);
    add_background_object(create_rmbrick14_1128(7016, 480), 2);
    add_background_object(create_rmbrick1_1121(7296, 224), 2);
    add_background_object(create_rmbrick2_1108(7296, 352), 2);
    add_background_object(create_rmbrick2_1108(7296, 384), 2);
    add_background_object(create_rmbrick13_1116(7424, 608), 2);
    add_background_object(create_rmbrick1_1121(7488, 512), 2);
    add_background_object(create_rmbrick13_1116(7488, 672), 2);
    add_background_object(create_rmbrick13_1116(7552, 672), 2);
    add_background_object(create_rmbrick4_1125(7464, 608), 2);
    add_background_object(create_rmbrick14_1128(7464, 672), 2);
    add_background_object(create_soil1_1120(7616, 512), 2);
    add_background_object(create_soil3_1141(7568, 512), 2);
    add_background_object(create_rmbrick1_1121(7488, 384), 2);
    add_background_object(create_rmbrick1_1121(7488, 256), 2);
    add_background_object(create_rmbrick2_1108(7424, 320), 2);
    add_background_object(create_rmbrick2_1108(7424, 288), 2);
    add_background_object(create_rmbrick2_1108(7424, 256), 2);
    add_background_object(create_rmbrick2_1108(7424, 224), 2);
    add_background_object(create_rmbrick2_1108(7488, 224), 2);
    add_background_object(create_rmbrick2_1108(7552, 224), 2);
    add_background_object(create_rmbrick1_1121(7040, 160), 2);
    add_background_object(create_rmbrick4_1125(7016, 256), 2);
    add_background_object(create_rmbrick4_1125(7016, 224), 2);
    add_background_object(create_rmbrick4_1125(7016, 192), 2);
    add_background_object(create_rmbrick4_1125(7016, 160), 2);
    add_background_object(create_rmbrick1_1121(7168, 160), 2);
    add_background_object(create_rmbrick1_1121(7040, 32), 2);
    add_background_object(create_rmbrick4_1125(7016, 128), 2);
    add_background_object(create_rmbrick4_1125(7016, 96), 2);
    add_background_object(create_rmbrick4_1125(7016, 64), 2);
    add_background_object(create_rmbrick4_1125(7016, 32), 2);
    add_background_object(create_rmbrick1_1121(7168, 32), 2);
    add_background_object(create_rmbrick1_1121(7040, -96), 2);
    add_background_object(create_rmbrick4_1125(7016, 0), 2);
    add_background_object(create_rmbrick4_1125(7016, -32), 2);
    add_background_object(create_rmbrick4_1125(7016, -64), 2);
    add_background_object(create_rmbrick4_1125(7016, -96), 2);
    add_background_object(create_rmbrick1_1121(7168, -96), 2);
    add_background_object(create_rmbrick1_1121(7616, 384), 2);
    add_background_object(create_soil1_1120(7744, 512), 2);
    add_background_object(create_soil1_1120(7744, 384), 2);
    add_background_object(create_rmbrick1_1121(7616, 256), 2);
    add_background_object(create_soil2_1140(7616, 480), 2);
    add_background_object(create_soil3_1141(7696, 384), 2);
    add_background_object(create_rmbrick1_1121(7744, 256), 2);
    add_background_object(create_rmbrick2_1108(7616, 224), 2);
    add_background_object(create_rmbrick2_1108(7680, 224), 2);
    add_background_object(create_rmbrick2_1108(7744, 224), 2);
    add_background_object(create_rmbrick2_1108(7808, 224), 2);
    add_background_object(create_soil11_1335(7616, 640), 2);
    add_background_object(create_rmbrick2_1108(7488, 640), 2);
    add_background_object(create_rmbrick4_1125(7464, 640), 2);
    add_background_object(create_rmbrick2_1108(7552, 640), 2);
    add_background_object(create_rmbrick2_1108(7616, 640), 2);
    add_background_object(create_rmbrick2_1108(7680, 640), 2);
    add_background_object(create_soil3_1141(7624, 536), 2);
    add_background_object(create_soil3_1141(7680, 552), 2);
    add_background_object(create_soil3_1141(7792, 600), 2);
    add_background_object(create_soil1_1120(8000, 640), 2);
    add_background_object(create_soil1_1120(8000, 512), 2);
    add_background_object(create_soil1_1120(7872, 384), 2);
    add_background_object(create_soil1_1120(8000, 384), 2);
    add_background_object(create_soil1_1120(8128, 640), 2);
    add_background_object(create_soil1_1120(8128, 512), 2);
    add_background_object(create_soil1_1120(8128, 384), 2);
    add_background_object(create_cavesoil1_1310(7872, 2336), 2);
    add_background_object(create_soiltocave_1334(7872, 1696), 2);
    add_background_object(create_cavesoil1_1310(7752, 2336), 2);
    add_background_object(create_soiltocave_1334(7744, 1696), 2);
    add_background_object(create_cavesoil1_1310(7560, 2336), 2);
    add_background_object(create_soiltocave_1334(7616, 1696), 2);
    add_background_object(create_cavesoil1_1310(7440, 2336), 2);
    add_background_object(create_soiltocave_1334(7488, 1696), 2);
    add_background_object(create_soil2_1140(7744, 352), 2);
    add_background_object(create_caravanplatform6_1336(4416, 552), 2);
    add_background_object(create_caravanplatform6_1336(5112, 512), 2);
    add_background_object(create_caravanplatform6_1336(5272, 512), 2);
    add_background_object(create_caravanplatform6_1336(5608, 552), 2);
    add_background_object(create_caravanplatform6_1336(5792, 552), 2);
    add_background_object(create_caravanplatform6_1336(5936, 552), 2);
    add_background_object(create_caravanplatform7_1328(5296, 464), 2);
    add_background_object(create_caravanplatform6_1336(5320, 512), 2);
    add_background_object(create_caravanplatform7_1328(5344, 464), 2);
    add_background_object(create_caravanplatform7_1328(5840, 552), 2);
    add_background_object(create_caravanplatform7_1328(5888, 552), 2);
    add_background_object(create_caravanplatform7_1328(5368, 512), 2);
    add_background_object(create_caravanplatform7_1328(4648, 552), 2);
    add_background_object(create_caravanplatform7_1328(4368, 552), 2);
    add_background_object(create_caravanplatform6_1336(5560, 512), 2);
    add_background_object(create_caravanplatform6_1336(5656, 552), 2);
    add_background_object(create_caravanplatform7_1328(5608, 504), 2);
    add_background_object(create_rmgrass4_1142(6976, 664), 2);
    add_background_object(create_soil1_1120(8256, 384), 2);
    add_background_object(create_soil1_1120(8256, 512), 2);
    add_background_object(create_soil1_1120(8256, 640), 2);
    add_background_object(create_soil1_1120(8144, 768), 2);
    add_background_object(create_soil1_1120(8256, 928), 2);
    add_background_object(create_shaft1_1337(7984, 928), 2);
    add_background_object(create_shaft1_1337(7984, 1024), 2);
    add_background_object(create_shaft1_1337(7984, 1600), 2);
    add_background_object(create_shaft1_1337(7984, 1696), 2);
    add_background_object(create_shaft1_1337(8128, 1600), 2);
    add_background_object(create_shaft1_1337(8128, 1696), 2);
    add_background_object(create_shaft1_1337(7984, 1792), 2);
    add_background_object(create_shaft1_1337(8128, 1792), 2);
    add_background_object(create_soil1_1120(8256, 1568), 2);
    add_background_object(create_soiltocave_1334(8256, 1696), 2);
    add_background_object(create_cavesoil1_1310(8256, 2464), 2);
    add_background_object(create_soil1_1120(8256, 768), 2);
    add_background_object(create_soil3_1141(8264, 848), 2);
    add_background_object(create_soil3_1141(8152, 848), 2);
    add_background_object(create_shaft1_1337(8128, 928), 2);
    add_background_object(create_soil3_1141(8184, 736), 2);
    add_background_object(create_cavesoil1_1310(7952, 2744), 2);
    add_background_object(create_cavesoil2_1338(7952, 2728), 2);
    add_background_object(create_cavesoil1_1310(8080, 2744), 2);
    add_background_object(create_cavesoil2_1338(8080, 2728), 2);
    add_background_object(create_cavesoil3_1339(8256, 2568), 2);
    add_background_object(create_cavesoil1_1310(8208, 2744), 2);
    add_background_object(create_cavesoil2_1338(8208, 2728), 2);
    add_background_object(create_cavesoil1_1310(8336, 2744), 2);
    add_background_object(create_cavesoil2_1338(8336, 2728), 2);
    add_background_object(create_cavesoil1_1310(7824, 2744), 2);
    add_background_object(create_cavesoil1_1310(7696, 2744), 2);
    add_background_object(create_cavesoil2_1338(7824, 2728), 2);
    add_background_object(create_cavesoil6_1340(8744, 3232), 2);
    add_background_object(create_column6_1341(7832, 2632), 2);
    add_background_object(create_column7_1342(7904, 2632), 2);
    add_background_object(create_column8_1343(7584, 2464), 2);
    add_background_object(create_shaft1_1337(8128, 2368), 2);
    add_background_object(create_shaft1_1337(8128, 2464), 2);
    add_background_object(create_cavesoil3_1339(8128, 2568), 2);
    add_background_object(create_column7_1342(7832, 2584), 2);
    add_background_object(create_cavesoil1_1310(8384, 2336), 2);
    add_background_object(create_cavesoil1_1310(8384, 2464), 2);
    add_background_object(create_cavesoil3_1339(8384, 2568), 2);
    add_background_object(create_cavesoil1_1310(8464, 2744), 2);
    add_background_object(create_cavesoil1_1310(8512, 2336), 2);
    add_background_object(create_cavesoil1_1310(8512, 2464), 2);
    add_background_object(create_cavesoil1_1310(8640, 2464), 2);
    add_background_object(create_cavesoil15_1316(8640, 2592), 2);
    add_background_object(create_cavesoil3_1339(8512, 2568), 2);
    add_background_object(create_cavesoil16_1344(8560, 3208), 2);
    add_background_object(create_shaft1_1337(7984, 2368), 2);
    add_background_object(create_shaft4_1302(7984, 2464), 2);
    add_background_object(create_cavesoil3_1339(7872, 2440), 2);
    add_background_object(create_soil1_1120(7616, 1056), 2);
    add_background_object(create_soil1_1120(7744, 1056), 2);
    add_background_object(create_soil1_1120(7488, 1056), 2);
    add_background_object(create_soil1_1120(8128, 1056), 2);
    add_background_object(create_soil1_1120(8256, 1056), 2);
    add_background_object(create_shaft1_1337(8128, 1024), 2);
    add_background_object(create_soil1_1120(7872, 1184), 2);
    add_background_object(create_soil1_1120(7616, 1184), 2);
    add_background_object(create_soil1_1120(7744, 1184), 2);
    add_background_object(create_soil1_1120(7488, 1184), 2);
    add_background_object(create_soil1_1120(7872, 1312), 2);
    add_background_object(create_soil1_1120(7616, 1312), 2);
    add_background_object(create_soil1_1120(7744, 1312), 2);
    add_background_object(create_soil1_1120(7488, 1312), 2);
    add_background_object(create_soil1_1120(7872, 1440), 2);
    add_background_object(create_soil1_1120(7616, 1440), 2);
    add_background_object(create_soil1_1120(7744, 1440), 2);
    add_background_object(create_soil1_1120(7488, 1440), 2);
    add_background_object(create_shaft1_1337(7984, 1120), 2);
    add_background_object(create_shaft1_1337(7984, 1216), 2);
    add_background_object(create_shaft1_1337(7984, 1312), 2);
    add_background_object(create_shaft1_1337(7984, 1408), 2);
    add_background_object(create_shaft1_1337(7984, 1504), 2);
    add_background_object(create_soil1_1120(8128, 1184), 2);
    add_background_object(create_soil1_1120(8256, 1184), 2);
    add_background_object(create_soil1_1120(8128, 1312), 2);
    add_background_object(create_soil1_1120(8256, 1312), 2);
    add_background_object(create_soil1_1120(8128, 1440), 2);
    add_background_object(create_soil1_1120(8256, 1440), 2);
    add_background_object(create_shaft1_1337(8128, 1120), 2);
    add_background_object(create_shaft1_1337(8128, 1216), 2);
    add_background_object(create_shaft1_1337(8128, 1312), 2);
    add_background_object(create_shaft1_1337(8128, 1408), 2);
    add_background_object(create_shaft1_1337(8128, 1504), 2);
    add_background_object(create_cavesoil1_1310(7872, 2208), 2);
    add_background_object(create_cavesoil1_1310(7752, 2208), 2);
    add_background_object(create_cavesoil1_1310(7872, 2080), 2);
    add_background_object(create_cavesoil1_1310(7744, 2080), 2);
    add_background_object(create_cavesoil1_1310(7616, 2080), 2);
    add_background_object(create_cavesoil1_1310(7488, 2080), 2);
    add_background_object(create_cavesoil1_1310(7872, 1952), 2);
    add_background_object(create_cavesoil1_1310(7744, 1952), 2);
    add_background_object(create_cavesoil1_1310(7616, 1952), 2);
    add_background_object(create_cavesoil1_1310(7488, 1952), 2);
    add_background_object(create_shaft1_1337(7984, 1888), 2);
    add_background_object(create_shaft1_1337(7984, 1984), 2);
    add_background_object(create_shaft1_1337(7984, 2080), 2);
    add_background_object(create_shaft1_1337(7984, 2176), 2);
    add_background_object(create_shaft1_1337(7984, 2272), 2);
    add_background_object(create_cavesoil1_1310(8128, 2080), 2);
    add_background_object(create_cavesoil1_1310(8256, 2080), 2);
    add_background_object(create_cavesoil1_1310(8128, 2208), 2);
    add_background_object(create_cavesoil1_1310(8256, 2208), 2);
    add_background_object(create_cavesoil1_1310(8128, 1952), 2);
    add_background_object(create_cavesoil1_1310(8256, 1952), 2);
    add_background_object(create_shaft1_1337(8128, 1888), 2);
    add_background_object(create_shaft1_1337(8128, 1984), 2);
    add_background_object(create_shaft1_1337(8128, 2080), 2);
    add_background_object(create_shaft1_1337(8128, 2176), 2);
    add_background_object(create_shaft1_1337(8128, 2272), 2);
    add_background_object(create_cavesoil11_1313(7584, 2624), 2);
    add_background_object(create_cavesoil11_1313(7656, 2712), 2);
    add_background_object(create_cavesoil4_1345(7696, 2632), 2);
    add_background_object(create_cavesoil7_1346(7632, 2600), 2);
    add_background_object(create_cavesoil1_1310(7312, 2336), 2);
    add_background_object(create_cavesoil1_1310(7440, 2464), 2);
    add_background_object(create_cavesoil1_1310(7440, 2592), 2);
    add_background_object(create_cavesoil1_1310(7312, 2464), 2);
    add_background_object(create_cavesoil1_1310(7312, 2592), 2);
    add_background_object(create_cavesoil1_1310(7440, 2744), 2);
    add_background_object(create_cavesoil1_1310(7312, 2720), 2);
    add_background_object(create_cavesoil11_1313(7424, 2656), 2);
    add_background_object(create_cavesoil11_1313(7440, 2408), 2);
    add_background_object(create_cavesoil11_1313(7328, 2400), 2);
    add_background_object(create_cavesoil28_1312(7552, 2456), 2);
    add_background_object(create_cavesoil28_1312(7552, 2488), 2);
    add_background_object(create_cavesoil28_1312(7552, 2520), 2);
    add_background_object(create_cavesoil28_1312(7552, 2552), 2);
    add_background_object(create_cavesoil28_1312(7552, 2584), 2);
    add_background_object(create_cavesoil8_1315(7568, 2600), 2);
    add_background_object(create_cavesoil1_1310(8464, 2872), 2);
    add_background_object(create_cavesoil1_1310(8592, 2872), 2);
    add_background_object(create_cavesoil1_1310(8336, 2872), 2);
    add_background_object(create_cavesoil1_1310(8592, 3000), 2);
    add_background_object(create_cavesoil1_1310(8720, 3048), 2);
    add_background_object(create_cavesoil1_1310(8720, 2920), 2);
    add_background_object(create_cavesoil1_1310(8848, 3048), 2);
    add_background_object(create_cavesoil11_1313(8640, 2856), 2);
    add_background_object(create_cavesoil11_1313(8664, 2872), 2);
    add_background_object(create_cavesoil5_1347(8752, 3304), 2);
    add_background_object(create_cavesoil11_1313(8520, 2736), 2);
    add_background_object(create_cavesoil11_1313(8544, 2808), 2);
    add_background_object(create_cavesoil7_1346(8592, 2728), 2);
    add_background_object(create_cavesoil4_1345(8720, 2824), 2);
    add_background_object(create_cavesoil2_1338(8464, 2728), 2);
    add_background_object(create_cavesoil1_1310(8464, 3000), 2);
    add_background_object(create_cavesoil1_1310(8640, 2336), 2);
    add_background_object(create_cavesoil1_1310(8768, 2592), 2);
    add_background_object(create_cavesoil1_1310(8896, 2496), 2);
    add_background_object(create_cavesoil1_1310(9024, 2496), 2);
    add_background_object(create_cavesoil1_1310(8768, 2464), 2);
    add_background_object(create_cavesoil1_1310(8896, 2368), 2);
    add_background_object(create_cavesoil1_1310(8768, 2336), 2);
    add_background_object(create_cavesoil1_1310(9152, 2368), 2);
    add_background_object(create_cavesoil3_1339(9024, 2600), 2);
    add_background_object(create_cavesoil1_1310(9024, 2368), 2);
    add_background_object(create_cavesoil11_1313(8824, 2384), 2);
    add_background_object(create_cavesoil11_1313(8768, 2488), 2);
    add_background_object(create_cavesoil1_1310(9152, 2496), 2);
    add_background_object(create_cavesoil1_1310(9280, 2496), 2);
    add_background_object(create_cavesoil3_1339(9152, 2600), 2);
    add_background_object(create_cavesoil15_1316(9280, 2624), 2);
    add_background_object(create_cavesoil14_1314(9280, 2608), 2);
    add_background_object(create_cavesoil1_1310(9280, 2368), 2);
    add_background_object(create_cavesoil15_1316(9440, 2848), 2);
    add_background_object(create_cavesoil1_1310(9448, 2624), 2);
    add_background_object(create_cavesoil1_1310(9568, 2720), 2);
    add_background_object(create_cavesoil1_1310(8976, 3048), 2);
    add_background_object(create_cavesoil1_1310(8976, 2920), 2);
    add_background_object(create_cavesoil11_1313(9008, 2888), 2);
    add_background_object(create_cavesoil1_1310(9104, 3048), 2);
    add_background_object(create_cavesoil11_1313(9136, 2888), 2);
    add_background_object(create_cavesoil1_1310(9232, 3048), 2);
    add_background_object(create_cavesoil11_1313(9216, 2920), 2);
    add_background_object(create_cavesoil4_1345(9280, 2872), 2);
    add_background_object(create_cavesoil11_1313(9448, 2976), 2);
    add_background_object(create_cavesoil2_1338(9408, 2968), 2);
    add_background_object(create_cavesoil1_1310(9408, 3104), 2);
    add_background_object(create_cavesoil11_1313(9432, 3064), 2);
    add_background_object(create_cavesoil11_1313(9336, 3080), 2);
    add_background_object(create_cavesoil1_1310(8208, 2872), 2);
    add_background_object(create_cavesoil1_1310(8080, 2872), 2);
    add_background_object(create_cavesoil1_1310(7952, 2872), 2);
    add_background_object(create_cavesoil1_1310(7824, 2872), 2);
    add_background_object(create_cavesoil1_1310(7696, 2872), 2);
    add_background_object(create_cavesoil1_1310(7568, 2872), 2);
    add_background_object(create_cavesoil1_1310(7440, 2872), 2);
    add_background_object(create_cavesoil28_1312(9680, 2880), 2);
    add_background_object(create_cavesoil3_1339(9568, 2888), 2);
    add_background_object(create_cavesoil1_1310(9664, 2528), 2);
    add_background_object(create_cavesoil1_1310(9664, 2656), 2);
    add_background_object(create_cavesoil28_1312(9680, 2848), 2);
    add_background_object(create_cavesoil20_1348(9696, 2896), 2);
    add_background_object(create_cavesoil28_1312(9648, 2976), 2);
    add_background_object(create_cavesoil28_1312(9648, 3008), 2);
    add_background_object(create_cavesoil19_1308(9664, 2968), 2);
    add_background_object(create_cavesoil2_1338(9536, 2968), 2);
    add_background_object(create_cavesoil28_1312(9648, 3040), 2);
    add_background_object(create_cavesoil28_1312(9648, 3072), 2);
    add_background_object(create_cavesoil1_1310(9536, 3104), 2);
    add_background_object(create_cavesoil28_1312(9648, 3104), 2);
    add_background_object(create_cavesoil28_1312(9648, 3136), 2);
    add_background_object(create_cavesoil28_1312(9648, 3168), 2);
    add_background_object(create_cavesoil28_1312(9648, 3200), 2);
    add_background_object(create_cavesoil1_1310(9408, 3232), 2);
    add_background_object(create_cavesoil1_1310(9536, 3232), 2);
    add_background_object(create_cavesoil1_1310(9408, 3360), 2);
    add_background_object(create_cavesoil1_1310(9536, 3360), 2);
    add_background_object(create_cavesoil1_1310(9408, 3488), 2);
    add_background_object(create_cavesoil1_1310(9792, 3232), 2);
    add_background_object(create_cavesoil1_1310(9664, 3232), 2);
    add_background_object(create_cavesoil1_1310(9792, 3360), 2);
    add_background_object(create_cavesoil1_1310(9664, 3360), 2);
    add_background_object(create_cavesoil2_1338(9792, 3224), 2);
    add_background_object(create_cavesoil2_1338(9664, 3224), 2);
    add_background_object(create_cavesoil1_1310(9920, 3232), 2);
    add_background_object(create_cavesoil1_1310(9920, 3360), 2);
    add_background_object(create_cavesoil1_1310(10048, 3104), 2);
    add_background_object(create_cavesoil1_1310(10048, 3232), 2);
    add_background_object(create_cavesoil1_1310(10048, 3360), 2);
    add_background_object(create_cavesoil21_1349(9920, 3616), 2);
    add_background_object(create_cavesoil1_1310(9792, 2656), 2);
    add_background_object(create_cavesoil15_1316(9792, 2784), 2);
    add_background_object(create_cavesoil14_1314(9792, 2768), 2);
    add_background_object(create_cavesoil1_1310(9792, 2528), 2);
    add_background_object(create_cavesoil1_1310(9920, 2784), 2);
    add_background_object(create_cavesoil15_1316(9920, 2912), 2);
    add_background_object(create_cavesoil1_1310(9920, 2656), 2);
    add_background_object(create_cavesoil12_1350(9920, 2880), 2);
    add_background_object(create_cavesoil14_1314(9920, 2896), 2);
    add_background_object(create_cavesoil12_1350(9920, 2848), 2);
    add_background_object(create_cavesoil1_1310(10048, 2848), 2);
    add_background_object(create_cavesoil1_1310(10048, 2656), 2);
    add_background_object(create_cavesoil1_1310(10048, 2784), 2);
    add_background_object(create_cavesoil11_1313(10048, 2848), 2);
    add_background_object(create_cavesoil3_1339(10048, 2952), 2);
    add_background_object(create_cavesoil1_1310(10176, 2848), 2);
    add_background_object(create_cavesoil3_1339(10176, 2952), 2);
    add_background_object(create_cavesoil1_1310(10176, 3232), 2);
    add_background_object(create_cavesoil1_1310(10176, 3360), 2);
    add_background_object(create_cavesoil1_1310(10304, 3232), 2);
    add_background_object(create_cavesoil1_1310(10304, 3360), 2);
    add_background_object(create_cavesoil11_1313(10176, 3152), 2);
    add_background_object(create_cavesoil28_1312(10288, 3168), 2);
    add_background_object(create_cavesoil28_1312(10288, 3200), 2);
    add_background_object(create_cavesoil19_1308(10304, 3152), 2);
    add_background_object(create_cavesoil2_1338(10304, 3216), 2);
    add_background_object(create_cavesoil25_1317(10432, 3232), 2);
    add_background_object(create_cavesoil1_1310(10432, 3296), 2);
    add_background_object(create_cavesoil1_1310(10432, 3360), 2);
    add_background_object(create_cavesoil11_1313(10408, 3280), 2);
    add_background_object(create_cavesoil1_1310(10304, 2848), 2);
    add_background_object(create_cavesoil1_1310(10176, 2528), 2);
    add_background_object(create_cavesoil1_1310(10432, 2976), 2);
    add_background_object(create_cavesoil17_1309(10688, 3392), 2);
    add_background_object(create_cavesoil1_1310(10432, 2848), 2);
    add_background_object(create_cavesoil15_1316(10304, 2976), 2);
    add_background_object(create_cavesoil14_1314(10304, 2960), 2);
    add_background_object(create_cavesoil12_1350(10432, 3072), 2);
    add_background_object(create_cavesoil12_1350(10432, 3040), 2);
    add_background_object(create_cavesoil14_1314(10432, 3088), 2);
    add_background_object(create_edgeoverlay_496(9376, 2664), 2);
    add_background_object(create_edgeoverlay_496(9344, 2648), 2);
    add_background_object(create_edgeoverlay_496(9312, 2632), 2);
    add_background_object(create_edgeoverlay_496(9280, 2616), 2);
    add_background_object(create_edgeoverlay_496(9536, 2888), 2);
    add_background_object(create_edgeoverlay_496(9504, 2872), 2);
    add_background_object(create_edgeoverlay_496(9472, 2856), 2);
    add_background_object(create_edgeoverlay_496(9440, 2840), 2);
    add_background_object(create_edgeoverlay_496(9888, 2824), 2);
    add_background_object(create_edgeoverlay_496(9856, 2808), 2);
    add_background_object(create_edgeoverlay_496(9824, 2792), 2);
    add_background_object(create_edgeoverlay_496(9792, 2776), 2);
    add_background_object(create_edgeoverlay_496(10016, 2952), 2);
    add_background_object(create_edgeoverlay_496(9984, 2936), 2);
    add_background_object(create_edgeoverlay_496(9952, 2920), 2);
    add_background_object(create_edgeoverlay_496(9920, 2904), 2);
    add_background_object(create_edgeoverlay_496(10400, 3016), 2);
    add_background_object(create_edgeoverlay_496(10368, 3000), 2);
    add_background_object(create_edgeoverlay_496(10336, 2984), 2);
    add_background_object(create_edgeoverlay_496(10304, 2968), 2);
    add_background_object(create_edgeoverlay_496(10528, 3144), 2);
    add_background_object(create_edgeoverlay_496(10496, 3128), 2);
    add_background_object(create_edgeoverlay_496(10464, 3112), 2);
    add_background_object(create_edgeoverlay_496(10432, 3096), 2);
    add_background_object(create_cavesoil28_1312(10544, 3456), 2);
    add_background_object(create_cavesoil28_1312(10544, 3360), 2);
    add_background_object(create_cavesoil28_1312(10544, 3328), 2);
    add_background_object(create_cavesoil28_1312(10544, 3296), 2);
    add_background_object(create_cavesoil19_1308(10560, 3280), 2);
    add_background_object(create_cavesoil23_1351(10432, 3216), 2);
    add_background_object(create_cavesoil1_1310(10304, 3488), 2);
    add_background_object(create_cavesoil1_1310(10448, 3488), 2);
    add_background_object(create_cavesoil26_1352(11008, 3392), 2);
    add_background_object(create_cavesoil24_1353(11008, 3376), 2);
    add_background_object(create_cavesoil3_1339(11008, 3440), 2);
    add_background_object(create_cavesoil20_1348(10560, 3152), 2);
    add_background_object(create_cavesoil28_1312(10544, 2912), 2);
    add_background_object(create_cavesoil28_1312(10544, 2880), 2);
    add_background_object(create_cavesoil28_1312(10544, 2848), 2);
    add_background_object(create_cavesoil1_1310(10176, 3488), 2);
    add_background_object(create_column6_1341(7584, 2504), 2);
    add_background_object(create_edgeoverlay_496(9680, 2968), 2);
    add_background_object(create_cavesoil11_1313(8976, 2912), 2);
    add_background_object(create_cavesoil12_1350(8752, 2680), 2);
    add_background_object(create_cavesoil20_1348(8752, 2704), 2);
    add_background_object(create_cavesoil14_1314(8640, 2576), 2);
    add_background_object(create_cavesoil12_1350(8752, 2648), 2);
    add_background_object(create_cavesoil12_1350(8752, 2616), 2);
    add_background_object(create_cavesoil11_1313(8744, 2536), 2);
    add_background_object(create_cavesoil3_1339(8896, 2600), 2);
    add_background_object(create_cavesoil28_1312(8880, 2688), 2);
    add_background_object(create_cavesoil28_1312(8880, 2656), 2);
    add_background_object(create_cavesoil28_1312(8880, 2624), 2);
    add_background_object(create_cavesoil20_1348(8896, 2704), 2);
    add_background_object(create_cavesoil3_1339(8768, 2696), 2);
    add_background_object(create_cavesoil11_1313(8800, 2512), 2);
    add_background_object(create_cavesoil25_1317(10176, 3104), 2);
    add_background_object(create_cavesoil23_1351(10176, 3088), 2);
    add_background_object(create_cavesoil11_1313(9160, 2800), 2);
    add_background_object(create_cavesoil28_1312(9264, 2840), 2);
    add_background_object(create_cavesoil28_1312(9264, 2808), 2);
    add_background_object(create_cavesoil28_1312(9264, 2872), 2);
    add_background_object(create_cavesoil2_1338(9104, 2792), 2);
    add_background_object(create_cavesoil8_1315(9232, 2792), 2);
    add_background_object(create_cavesoilcrater_1354(9232, 2784), 2);
    add_background_object(create_cavesoil1_1310(9408, 2496), 2);
    add_background_object(create_cavesoil1_1310(9536, 2592), 2);
    add_background_object(create_cavesoil1_1310(9408, 2368), 2);
    add_background_object(create_cavesoil2_1338(8848, 2920), 2);
    add_background_object(create_rmladder_1152(8936, 2792), 2);
    add_background_object(create_rmladder_1152(8936, 2824), 2);
    add_background_object(create_rmladder_1152(8936, 2856), 2);
    add_background_object(create_cavesoil12_1350(8976, 2896), 2);
    add_background_object(create_cavesoil12_1350(8976, 2864), 2);
    add_background_object(create_cavesoil12_1350(8976, 2832), 2);
    add_background_object(create_cavesoil12_1350(8976, 2800), 2);
    add_background_object(create_cavesoil2_1338(8976, 2792), 2);
    add_background_object(create_cavesoilcrater_1354(9008, 2784), 2);
    add_background_object(create_cavesoil19_1308(9280, 2792), 2);
    add_background_object(create_cavesoil19_1308(8976, 2792), 2);
    add_background_object(create_edgeoverlay_496(8720, 2624), 2);
    add_background_object(create_edgeoverlay_496(8688, 2608), 2);
    add_background_object(create_edgeoverlay_496(8656, 2592), 2);
    add_background_object(create_cavesoil3_1339(10880, 3440), 2);
    add_background_object(create_cavesoil2_1338(10880, 3440), 2);
    add_background_object(create_cavesoil3_1339(10752, 3440), 2);
    add_background_object(create_cavesoil23_1351(10752, 3376), 2);
    add_background_object(create_cavesoil28_1312(10544, 3424), 2);
    add_background_object(create_cavesoil28_1312(10544, 3392), 2);
    add_background_object(create_cavesoil12_1350(10672, 3392), 2);
    add_background_object(create_cavesoil12_1350(10672, 3424), 2);
    add_background_object(create_cavesoil20_1348(10672, 3448), 2);
    add_background_object(create_cavesoil19_1308(10672, 3376), 2);
    add_background_object(create_cavesoil16_1344(10688, 3440), 2);
    add_background_object(create_cavesoil8_1315(10688, 3376), 2);
    add_background_object(create_cavesoil1_1310(11200, 3328), 2);
    add_background_object(create_cavesoil17_1309(11136, 3392), 2);
    add_background_object(create_cavesoil8_1315(11136, 3376), 2);
    add_background_object(create_cavesoil12_1350(11184, 3368), 2);
    add_background_object(create_cavesoil12_1350(11184, 3336), 2);
    add_background_object(create_cavesoil19_1308(11184, 3320), 2);
    add_background_object(create_cavesoil22_1355(11520, 3320), 2);
    add_background_object(create_cavesoil1_1310(11520, 3448), 2);
    add_background_object(create_cavesoil1_1310(11392, 3448), 2);
    add_background_object(create_cavesoil1_1310(11648, 3448), 2);
    add_background_object(create_cavesoil1_1310(11648, 3320), 2);
    add_background_object(create_cavesoil1_1310(11656, 3192), 2);
    add_background_object(create_cavesoil28_1312(11520, 3192), 2);
    add_background_object(create_cavesoil28_1312(11520, 3224), 2);
    add_background_object(create_cavesoil20_1348(11536, 3248), 2);
    add_background_object(create_cavesoil16_1344(11472, 3240), 2);
    add_background_object(create_cavesoil12_1350(11328, 3072), 2);
    add_background_object(create_cavesoil12_1350(11328, 3104), 2);
    add_background_object(create_cavesoil12_1350(11328, 3136), 2);
    add_background_object(create_cavesoil12_1350(11328, 3168), 2);
    add_background_object(create_cavesoil20_1348(11328, 3184), 2);
    add_background_object(create_cavesoil14_1314(11344, 3184), 2);
    add_background_object(create_cavesoil28_1312(11392, 3064), 2);
    add_background_object(create_cavesoil28_1312(11392, 3096), 2);
    add_background_object(create_cavesoil28_1312(11392, 3128), 2);
    add_background_object(create_cavesoil28_1312(11392, 3160), 2);
    add_background_object(create_cavesoil19_1308(11408, 3176), 2);
    add_background_object(create_cavesoilcrater2_1356(11320, 3064), 2);
    add_background_object(create_cavesoil8_1315(11424, 3176), 2);
    add_background_object(create_cavesoil8_1315(11488, 3176), 2);
    add_background_object(create_cavesoil19_1308(11536, 3176), 2);
    add_background_object(create_cavesoil12_1350(11648, 3192), 2);
    add_background_object(create_cavesoil12_1350(11648, 3224), 2);
    add_background_object(create_cavesoil12_1350(11648, 3256), 2);
    add_background_object(create_cavesoil12_1350(11648, 3288), 2);
    add_background_object(create_cavesoil12_1350(11648, 3320), 2);
    add_background_object(create_cavesoil11_1313(11648, 3296), 2);
    add_background_object(create_cavesoil19_1308(11520, 3448), 2);
    add_background_object(create_cavesoil11_1313(11240, 3328), 2);
    add_background_object(create_cavesoil7_1346(11328, 3320), 2);
    add_background_object(create_cavesoil2_1338(11200, 3320), 2);
    add_background_object(create_cavesoil3_1339(11136, 3440), 2);
    add_background_object(create_cavesoil11_1313(11264, 3400), 2);
    add_background_object(create_cavesoil4_1345(11392, 3352), 2);
    add_background_object(create_cavesoil17_1309(11344, 3000), 2);
    add_background_object(create_cavesoil28_1312(11392, 3032), 2);
    add_background_object(create_cavesoil28_1312(11392, 3000), 2);
    add_background_object(create_cavesoil19_1308(11408, 2984), 2);
    add_background_object(create_cavesoil15_1316(11216, 3000), 2);
    add_background_object(create_cavesoil14_1314(11216, 2984), 2);
    add_background_object(create_cavesoil2_1338(11216, 2984), 2);
    add_background_object(create_edgeoverlay_496(11440, 3240), 2);
    add_background_object(create_edgeoverlay_496(11408, 3224), 2);
    add_background_object(create_edgeoverlay_496(11376, 3208), 2);
    add_background_object(create_edgeoverlay_496(11344, 3192), 2);
    add_background_object(create_cavesoil2_1338(10632, 2992), 2);
    add_background_object(create_cavesoil28_1312(10544, 2976), 2);
    add_background_object(create_cavesoil28_1312(10544, 2944), 2);
    add_background_object(create_cavesoil12_1350(10744, 2960), 2);
    add_background_object(create_cavesoil19_1308(10744, 2944), 2);
    add_background_object(create_cavesoil8_1315(10760, 2944), 2);
    add_background_object(create_cavesoil8_1315(10568, 2992), 2);
    add_background_object(create_cavesoil18_1305(10568, 3056), 2);
    add_background_object(create_cavesoil20_1348(10824, 3024), 2);
    add_background_object(create_cavesoil19_1308(10824, 2944), 2);
    add_background_object(create_cavesoil16_1344(10760, 3016), 2);
    add_background_object(create_cavesoil18_1305(10632, 3024), 2);
    add_background_object(create_cavesoil28_1312(10808, 2976), 2);
    add_background_object(create_cavesoil1_1310(11232, 2696), 2);
    add_background_object(create_cavesoil3_1339(11296, 2808), 2);
    add_background_object(create_cavesoil1_1310(11104, 2696), 2);
    add_background_object(create_cavesoil3_1339(11168, 2808), 2);
    add_background_object(create_cavesoil1_1310(11072, 2696), 2);
    add_background_object(create_cavesoil15_1316(10912, 2760), 2);
    add_background_object(create_cavesoil28_1312(11760, 3192), 2);
    add_background_object(create_cavesoil19_1308(11776, 3176), 2);
    add_background_object(create_cavesoil2_1338(11648, 3176), 2);
    add_background_object(create_cavesoil1_1310(11776, 3232), 2);
    add_background_object(create_cavesoil1_1310(11776, 3360), 2);
    add_background_object(create_cavesoil1_1310(11904, 3232), 2);
    add_background_object(create_cavesoil1_1310(11904, 3360), 2);
    add_background_object(create_cavesoil1_1310(12032, 3232), 2);
    add_background_object(create_cavesoil1_1310(12032, 3360), 2);
    add_background_object(create_cavesoil1_1310(12032, 3104), 2);
    add_background_object(create_cavesoil1_1310(12032, 2976), 2);
    add_background_object(create_cavesoil12_1350(12016, 3056), 2);
    add_background_object(create_cavesoil12_1350(12016, 3024), 2);
    add_background_object(create_cavesoil12_1350(12016, 2992), 2);
    add_background_object(create_cavesoil19_1308(10560, 2840), 2);
    add_background_object(create_cavesoil2_1338(10432, 2840), 2);
    add_background_object(create_cavesoil2_1338(10304, 2840), 2);
    add_background_object(create_cavesoil1_1310(10048, 2528), 2);
    add_background_object(create_cavesoil1_1310(9920, 2528), 2);
    add_background_object(create_cavesoilcrater_1354(10400, 2832), 2);
    add_background_object(create_cavesoil1_1310(12032, 2720), 2);
    add_background_object(create_cavesoil1_1310(12160, 3232), 2);
    add_background_object(create_cavesoil1_1310(12160, 3360), 2);
    add_background_object(create_cavesoil1_1310(12160, 3104), 2);
    add_background_object(create_cavesoil1_1310(12160, 2976), 2);
    add_background_object(create_cavesoil1_1310(12160, 2720), 2);
    add_background_object(create_cavesoil12_1350(12016, 2960), 2);
    add_background_object(create_cavesoil12_1350(12016, 2800), 2);
    add_background_object(create_cavesoil12_1350(12016, 2768), 2);
    add_background_object(create_cavesoil12_1350(12016, 2736), 2);
    add_background_object(create_cavesoil15_1316(11552, 2952), 2);
    add_background_object(create_cavesoil15_1316(11424, 2824), 2);
    add_background_object(create_cavesoil1_1310(11360, 2696), 2);
    add_background_object(create_cavesoil1_1310(11552, 2824), 2);
    add_background_object(create_cavesoil12_1350(11552, 2928), 2);
    add_background_object(create_cavesoil12_1350(11552, 2896), 2);
    add_background_object(create_edgeoverlay_496(11520, 2872), 2);
    add_background_object(create_edgeoverlay_496(11488, 2856), 2);
    add_background_object(create_edgeoverlay_496(11456, 2840), 2);
    add_background_object(create_edgeoverlay_496(11424, 2824), 2);
    add_background_object(create_edgeoverlay_496(11552, 2952), 2);
    add_background_object(create_edgeoverlay_496(11584, 2968), 2);
    add_background_object(create_edgeoverlay_496(11616, 2984), 2);
    add_background_object(create_edgeoverlay_496(11648, 3000), 2);
    add_background_object(create_cavesoil11_1313(11552, 2800), 2);
    add_background_object(create_cavesoil27_1304(11680, 2952), 2);
    add_background_object(create_cavesoil18_1305(11680, 2944), 2);
    add_background_object(create_cavesoil14_1314(11552, 2944), 2);
    add_background_object(create_cavesoil28_1312(11656, 2760), 2);
    add_background_object(create_cavesoil28_1312(11656, 2792), 2);
    add_background_object(create_cavesoil17_1309(10176, 2656), 2);
    add_background_object(create_cavesoil17_1309(10240, 2656), 2);
    add_background_object(create_cavesoil11_1313(10176, 2576), 2);
    add_background_object(create_cavesoil28_1312(10160, 2752), 2);
    add_background_object(create_cavesoil28_1312(10160, 2784), 2);
    add_background_object(create_cavesoil28_1312(10160, 2816), 2);
    add_background_object(create_cavesoil2_1338(10176, 2840), 2);
    add_background_object(create_cavesoil3_1339(10176, 2704), 2);
    add_background_object(create_cavesoil28_1312(10160, 2720), 2);
    add_background_object(create_cavesoil28_1312(10160, 2688), 2);
    add_background_object(create_cavesoil18_1305(10304, 2648), 2);
    add_background_object(create_cavesoil1_1310(10304, 2528), 2);
    add_background_object(create_cavesoil1_1310(10432, 2528), 2);
    add_background_object(create_shaft2_1303(10776, 3048), 2);
    add_background_object(create_shaft2_1303(10776, 3144), 2);
    add_background_object(create_shaft2_1303(10776, 3240), 2);
    add_background_object(create_shaft2_1303(10512, 2672), 2);
    add_background_object(create_rmladder_1152(10576, 2640), 2);
    add_background_object(create_cavesoil28_1312(10544, 2624), 2);
    add_background_object(create_cavesoil3_1339(10432, 2640), 2);
    add_background_object(create_cavesoil20_1348(10560, 2648), 2);
    add_background_object(create_cavesoil28_1312(10544, 2592), 2);
    add_background_object(create_cavesoil28_1312(10544, 2560), 2);
    add_background_object(create_cavesoil28_1312(10544, 2528), 2);
    add_background_object(create_rmladder_1152(10576, 2672), 2);
    add_background_object(create_rmladder_1152(10576, 2704), 2);
    add_background_object(create_rmladder_1152(10576, 2736), 2);
    add_background_object(create_rmladder_1152(10576, 2608), 2);
    add_background_object(create_cavesoil12_1350(10616, 2624), 2);
    add_background_object(create_cavesoil19_1308(10616, 2608), 2);
    add_background_object(create_cavesoil12_1350(10616, 2656), 2);
    add_background_object(create_cavesoil20_1348(10616, 2672), 2);
    add_background_object(create_cavesoil1_1310(10304, 3616), 2);
    add_background_object(create_cavesoil1_1310(10432, 3616), 2);
    add_background_object(create_cavesoil1_1310(10560, 3600), 2);
    add_background_object(create_cavesoil1_1310(10688, 3616), 2);
    add_background_object(create_cavesoil21_1349(10576, 3472), 2);
    add_background_object(create_cavesoil8_1315(10688, 3600), 2);
    add_background_object(create_cavesoil8_1315(10752, 3600), 2);
    add_background_object(create_cavesoil11_1313(10448, 3456), 2);
    add_background_object(create_cavesoil11_1313(10392, 3480), 2);
    add_background_object(create_cavesoil11_1313(10392, 3568), 2);
    add_background_object(create_cavesoil11_1313(10504, 3632), 2);
    add_background_object(create_cavesoil11_1313(10584, 3672), 2);
    add_background_object(create_cavesoil1_1310(10816, 3616), 2);
    add_background_object(create_cavesoil2_1338(10816, 3600), 2);
    add_background_object(create_cavesoil12_1350(11248, 3544), 2);
    add_background_object(create_cavesoil12_1350(11248, 3512), 2);
    add_background_object(create_cavesoil12_1350(11248, 3480), 2);
    add_background_object(create_cavesoil12_1350(11248, 3448), 2);
    add_background_object(create_cavesoil1_1310(10944, 3616), 2);
    add_background_object(create_cavesoil1_1310(11072, 3616), 2);
    add_background_object(create_cavesoil2_1338(11136, 3600), 2);
    add_background_object(create_cavesoil1_1310(11264, 3576), 2);
    add_background_object(create_cavesoil1_1310(11264, 3704), 2);
    add_background_object(create_cavesoil12_1350(11248, 3576), 2);
    add_background_object(create_cavesoil8_1315(10944, 3600), 2);
    add_background_object(create_cavesoil17_1309(11200, 3680), 2);
    add_background_object(create_cavesoil11_1313(11200, 3616), 2);
    add_background_object(create_cavesoil1_1310(11520, 3576), 2);
    add_background_object(create_cavesoil1_1310(11392, 3576), 2);
    add_background_object(create_cavesoil1_1310(11648, 3576), 2);
    add_background_object(create_cavesoil1_1310(11776, 3488), 2);
    add_background_object(create_cavesoil1_1310(11520, 3704), 2);
    add_background_object(create_cavesoil1_1310(11392, 3704), 2);
    add_background_object(create_cavesoil1_1310(11648, 3704), 2);
    add_background_object(create_cavesoil1_1310(11776, 3616), 2);
    add_background_object(create_cavesoil8_1315(11008, 3600), 2);
    add_background_object(create_cavesoil8_1315(11072, 3600), 2);
    add_background_object(create_cavesoil8_1315(11776, 3216), 2);
    add_background_object(create_cavesoil8_1315(11840, 3216), 2);
    add_background_object(create_cavesoil12_1350(12016, 3120), 2);
    add_background_object(create_cavesoil12_1350(12016, 3088), 2);
    add_background_object(create_cavesoil8_1315(11904, 3216), 2);
    add_background_object(create_cavesoil8_1315(11968, 3216), 2);
    add_background_object(create_cavesoil12_1350(12016, 3152), 2);
    add_background_object(create_cavesoil12_1350(12016, 3184), 2);
    add_background_object(create_cavesoil28_1312(10680, 2616), 2);
    add_background_object(create_cavesoil28_1312(10680, 2648), 2);
    add_background_object(create_cavesoil8_1315(10632, 2608), 2);
    add_background_object(create_cavesoil16_1344(10632, 2664), 2);
    add_background_object(create_cavesoil20_1348(10696, 2672), 2);
    add_background_object(create_cavesoil19_1308(10696, 2608), 2);
    add_background_object(create_cavesoil28_1312(9680, 2816), 2);
    add_background_object(create_cavesoil28_1312(9680, 2784), 2);
    add_background_object(create_cavesoil1_1310(9536, 2464), 2);
    add_background_object(create_cavesoil12_1350(9440, 2816), 2);
    add_background_object(create_cavesoil12_1350(9440, 2784), 2);
    add_background_object(create_cavesoil12_1350(9440, 2752), 2);
    add_background_object(create_cavesoil12_1350(9440, 2720), 2);
    add_background_object(create_cavesoil12_1350(9440, 2688), 2);
    add_background_object(create_cavesoil11_1313(9416, 2584), 2);
    add_background_object(create_cavesoil14_1314(9440, 2832), 2);
    add_background_object(create_cavesoil11_1313(9568, 2736), 2);
    add_background_object(create_cavesoil11_1313(9488, 2616), 2);
    add_background_object(create_cavesoil3_1339(9664, 2760), 2);
    add_background_object(create_cavesoil11_1313(9584, 2688), 2);
    add_background_object(create_cavesoil12_1350(12016, 2672), 2);
    add_background_object(create_cavesoil1_1310(10432, 2400), 2);
    add_background_object(create_cavesoil18_1305(10560, 2456), 2);
    add_background_object(create_cavesoil1_1310(10304, 2400), 2);
    add_background_object(create_cavesoil1_1310(10176, 2400), 2);
    add_background_object(create_cavesoil1_1310(10048, 2400), 2);
    add_background_object(create_cavesoil1_1310(10304, 2272), 2);
    add_background_object(create_cavesoil1_1310(10432, 2272), 2);
    add_background_object(create_cavesoil1_1310(10560, 2336), 2);
    add_background_object(create_cavesoil1_1310(10432, 2144), 2);
    add_background_object(create_cavesoil1_1310(10304, 2144), 2);
    add_background_object(create_cavesoil1_1310(10560, 2208), 2);
    add_background_object(create_cavesoil1_1310(10688, 2336), 2);
    add_background_object(create_cavesoil1_1310(10688, 2208), 2);
    add_background_object(create_cavesoil3_1339(10688, 2448), 2);
    add_background_object(create_edgeoverlay_496(10560, 2512), 2);
    add_background_object(create_edgeoverlay_496(10592, 2496), 2);
    add_background_object(create_edgeoverlay_496(10624, 2480), 2);
    add_background_object(create_edgeoverlay_496(10656, 2464), 2);
    add_background_object(create_cavesoil1_1310(10816, 2272), 2);
    add_background_object(create_cavesoil1_1310(10816, 2144), 2);
    add_background_object(create_cavesoil3_1339(10816, 2384), 2);
    add_background_object(create_cavesoil1_1310(10944, 2272), 2);
    add_background_object(create_cavesoil1_1310(10944, 2144), 2);
    add_background_object(create_cavesoil3_1339(10944, 2384), 2);
    add_background_object(create_cavesoil1_1310(11072, 2272), 2);
    add_background_object(create_cavesoil1_1310(11072, 2144), 2);
    add_background_object(create_cavesoil1_1310(12032, 2592), 2);
    add_background_object(create_cavesoil1_1310(11904, 2528), 2);
    add_background_object(create_cavesoil12_1350(12016, 2928), 2);
    add_background_object(create_cavesoil12_1350(12016, 2896), 2);
    add_background_object(create_cavesoil12_1350(12016, 2864), 2);
    add_background_object(create_cavesoil12_1350(12016, 2832), 2);
    add_background_object(create_cavesoil1_1310(12160, 2592), 2);
    add_background_object(create_cavesoil1_1310(12160, 2848), 2);
    add_background_object(create_cavesoil1_1310(11904, 3488), 2);
    add_background_object(create_cavesoil1_1310(12032, 3488), 2);
    add_background_object(create_cavesoil1_1310(12160, 3488), 2);
    add_background_object(create_cavesoil1_1310(11904, 3616), 2);
    add_background_object(create_cavesoil1_1310(12032, 3616), 2);
    add_background_object(create_cavesoil1_1310(12160, 3616), 2);
    add_background_object(create_cavesoil15_1316(11648, 2592), 2);
    add_background_object(create_cavesoil14_1314(11648, 2584), 2);
    add_background_object(create_cavesoil1_1310(11680, 2824), 2);
    add_background_object(create_cavesoil2_1338(11680, 2816), 2);
    add_background_object(create_cavesoil19_1308(11808, 2816), 2);
    add_background_object(create_edgeoverlay_496(11680, 3000), 2);
    add_background_object(create_edgeoverlay_496(11712, 2984), 2);
    add_background_object(create_edgeoverlay_496(11744, 2968), 2);
    add_background_object(create_edgeoverlay_496(11776, 2952), 2);
    add_background_object(create_cavesoil20_1348(11808, 2944), 2);
    add_background_object(create_cavesoil1_1310(11776, 2528), 2);
    add_background_object(create_cavesoil12_1350(12016, 2704), 2);
    add_background_object(create_cavesoil3_1339(11776, 2640), 2);
    add_background_object(create_cavesoil1_1310(12032, 2464), 2);
    add_background_object(create_cavesoil1_1310(12160, 2464), 2);
    add_background_object(create_cavesoil11_1313(11976, 2528), 2);
    add_background_object(create_cavesoil3_1339(11904, 2640), 2);
    add_background_object(create_cavesoil12_1350(11056, 2616), 2);
    add_background_object(create_cavesoil12_1350(11056, 2552), 2);
    add_background_object(create_cavesoil12_1350(11056, 2584), 2);
    add_background_object(create_cavesoil19_1308(11056, 2552), 2);
    add_background_object(create_cavesoil28_1312(11120, 2552), 2);
    add_background_object(create_cavesoil28_1312(11120, 2584), 2);
    add_background_object(create_cavesoil28_1312(11120, 2616), 2);
    add_background_object(create_cavesoil19_1308(11136, 2552), 2);
    add_background_object(create_cavesoil11_1313(11104, 2688), 2);
    add_background_object(create_cavesoil12_1350(11504, 2464), 2);
    add_background_object(create_cavesoil12_1350(11504, 2496), 2);
    add_background_object(create_cavesoil12_1350(11504, 2528), 2);
    add_background_object(create_cavesoil12_1350(11504, 2560), 2);
    add_background_object(create_cavesoil3_1339(11520, 2576), 2);
    add_background_object(create_cavesoil20_1348(11504, 2584), 2);
    add_background_object(create_cavesoil12_1350(10912, 2696), 2);
    add_background_object(create_cavesoil12_1350(10912, 2728), 2);
    add_background_object(create_cavesoil11_1313(11000, 2696), 2);
    add_background_object(create_cavesoil14_1314(10912, 2752), 2);
    add_background_object(create_cavesoil8_1315(10992, 2688), 2);
    add_background_object(create_cavesoil3_1339(11040, 2808), 2);
    add_background_object(create_cavesoil17_1309(11488, 2760), 2);
    add_background_object(create_cavesoil28_1312(11472, 2704), 2);
    add_background_object(create_cavesoil11_1313(11456, 2744), 2);
    add_background_object(create_cavesoil2_1338(11544, 2744), 2);
    add_background_object(create_cavesoil19_1308(11488, 2688), 2);
    add_background_object(create_cavesoil19_1308(11672, 2744), 2);
    add_background_object(create_cavesoil8_1315(11480, 2744), 2);
    add_background_object(create_cavesoil28_1312(11472, 2736), 2);
    add_background_object(create_cavesoil14_1314(11424, 2816), 2);
    add_background_object(create_cavesoil28_1312(11328, 2336), 2);
    add_background_object(create_cavesoil28_1312(11328, 2368), 2);
    add_background_object(create_cavesoil11_1313(11144, 2280), 2);
    add_background_object(create_cavesoil3_1339(11200, 2384), 2);
    add_background_object(create_cavesoil3_1339(11072, 2384), 2);
    add_background_object(create_cavesoil20_1348(11344, 2392), 2);
    add_background_object(create_cavesoil20_1348(11328, 2392), 2);
    add_background_object(create_cavesoil28_1312(11184, 2256), 2);
    add_background_object(create_cavesoil28_1312(11184, 2224), 2);
    add_background_object(create_cavesoil28_1312(11184, 2192), 2);
    add_background_object(create_cavesoil28_1312(11184, 2160), 2);
    add_background_object(create_cavesoil28_1312(11328, 2304), 2);
    add_background_object(create_cavesoil1_1310(11072, 2016), 2);
    add_background_object(create_cavesoil1_1310(10944, 2016), 2);
    add_background_object(create_cavesoil1_1310(11200, 2016), 2);
    add_background_object(create_cavesoil1_1310(11328, 2016), 2);
    add_background_object(create_cavesoil3_1339(11264, 2128), 2);
    add_background_object(create_cavesoil16_1344(11200, 2128), 2);
    add_background_object(create_cavesoil16_1344(11392, 2128), 2);
    add_background_object(create_cavesoil19_1308(11504, 2456), 2);
    add_background_object(create_cavesoil2_1338(11520, 2456), 2);
    add_background_object(create_gimmickrisingswingbase_1311(11608, 2352), 2);
    add_background_object(create_cavesoil1_1310(11648, 2272), 2);
    add_background_object(create_cavesoil12_1350(11640, 2336), 2);
    add_background_object(create_cavesoil12_1350(11640, 2368), 2);
    add_background_object(create_cavesoil12_1350(11640, 2400), 2);
    add_background_object(create_cavesoil12_1350(11640, 2432), 2);
    add_background_object(create_cavesoil11_1313(11728, 2424), 2);
    add_background_object(create_cavesoil11_1313(11824, 2440), 2);
    add_background_object(create_cavesoil11_1313(11744, 2520), 2);
    add_background_object(create_cavesoil17_1309(11648, 2400), 2);
    add_background_object(create_cavesoil17_1309(11712, 2400), 2);
    add_background_object(create_cavesoil11_1313(11696, 2352), 2);
    add_background_object(create_cavesoil12_1350(11640, 2304), 2);
    add_background_object(create_cavesoil12_1350(11640, 2272), 2);
    add_background_object(create_cavesoil19_1308(11640, 2264), 2);
    add_background_object(create_cavesoil1_1310(11072, 1888), 2);
    add_background_object(create_cavesoil1_1310(10944, 1888), 2);
    add_background_object(create_cavesoil1_1310(11200, 1888), 2);
    add_background_object(create_cavesoil1_1310(11328, 1888), 2);
    add_background_object(create_cavesoil1_1310(10816, 2016), 2);
    add_background_object(create_cavesoil1_1310(11456, 2016), 2);
    add_background_object(create_cavesoil1_1310(11456, 1888), 2);
    add_background_object(create_cavesoil3_1339(11456, 2128), 2);
    add_background_object(create_cavesoil1_1310(11584, 2016), 2);
    add_background_object(create_cavesoil1_1310(11584, 1888), 2);
    add_background_object(create_cavesoil3_1339(11584, 2128), 2);
    add_background_object(create_cavesoil1_1310(11712, 2016), 2);
    add_background_object(create_cavesoil1_1310(11712, 1888), 2);
    add_background_object(create_cavesoil3_1339(11712, 2128), 2);
    add_background_object(create_cavesoil8_1315(11072, 2552), 2);
    add_background_object(create_cavesoil2_1338(11128, 2688), 2);
    add_background_object(create_cavesoil28_1312(11120, 2648), 2);
    add_background_object(create_cavesoil28_1312(11120, 2680), 2);
    add_background_object(create_cavesoil12_1350(11056, 2680), 2);
    add_background_object(create_cavesoil12_1350(11056, 2648), 2);
    add_background_object(create_cavesoil8_1315(11320, 2688), 2);
    add_background_object(create_cavesoil8_1315(11256, 2688), 2);
    add_background_object(create_cavesoil8_1315(11424, 2688), 2);
    add_background_object(create_cavesoil8_1315(11384, 2688), 2);
    add_background_object(create_cavesoil8_1315(10928, 2688), 2);
    add_background_object(create_cavesoil19_1308(10912, 2688), 2);
    add_background_object(create_cavesoil11_1313(11704, 2272), 2);
    add_background_object(create_cavesoil7_1346(11784, 2264), 2);
    add_background_object(create_cavesoil2_1338(11656, 2264), 2);
    add_background_object(create_cavesoil11_1313(11920, 2448), 2);
    add_background_object(create_cavesoil4_1345(11912, 2360), 2);
    add_background_object(create_cavesoil2_1338(12040, 2456), 2);
    add_background_object(create_cavesoil2_1338(12168, 2456), 2);
    add_background_object(create_cavesoil15_1316(11840, 2144), 2);
    add_background_object(create_cavesoil1_1310(11840, 2016), 2);
    add_background_object(create_cavesoil1_1310(11840, 1888), 2);
    add_background_object(create_cavesoil1_1310(11968, 1888), 2);
    add_background_object(create_cavesoil1_1310(11968, 2016), 2);
    add_background_object(create_cavesoil1_1310(11976, 2144), 2);
    add_background_object(create_cavesoil15_1316(11968, 2272), 2);
    add_background_object(create_cavesoil14_1314(11840, 2136), 2);
    add_background_object(create_cavesoil12_1350(11968, 2216), 2);
    add_background_object(create_cavesoil12_1350(11968, 2248), 2);
    add_background_object(create_cavesoil14_1314(11968, 2264), 2);
    add_background_object(create_cavesoil11_1313(11960, 2112), 2);
    add_background_object(create_cavesoil1_1310(12096, 1888), 2);
    add_background_object(create_cavesoil1_1310(12096, 2016), 2);
    add_background_object(create_cavesoil1_1310(12096, 2208), 2);
    add_background_object(create_cavesoil1_1310(12224, 1888), 2);
    add_background_object(create_cavesoil1_1310(12224, 2016), 2);
    add_background_object(create_cavesoil1_1310(12224, 2208), 2);
    add_background_object(create_cavesoil11_1313(12080, 2112), 2);
    add_background_object(create_cavesoil11_1313(12184, 2112), 2);
    add_background_object(create_cavesoil3_1339(12096, 2320), 2);
    add_background_object(create_cavesoil3_1339(12224, 2320), 2);
    add_background_object(create_shaft2_1303(11632, 2648), 2);
    add_background_object(create_shaft2_1303(10656, 2512), 2);
    add_background_object(create_cavesoil28_1312(11328, 2272), 2);
    add_background_object(create_cavesoil8_1315(11344, 2264), 2);
    add_background_object(create_cavesoil2_1338(11216, 2264), 2);
    add_background_object(create_cavesoil2_1338(12296, 2456), 2);
    add_background_object(create_caravanplatform13_1357(6464, 520), 2);
    add_background_object(create_caravanplatform13_1357(5376, 560), 2);
    add_background_object(create_caravanplatform13_1357(5312, 560), 2);
    add_background_object(create_cavesoil1_1310(10688, 2080), 2);
    add_background_object(create_cavesoil1_1310(10560, 2080), 2);
    add_background_object(create_rmbrick1_1121(3648, 96), 2);
    add_background_object(create_rmbrick1_1121(3648, -32), 2);
    add_background_object(create_rmbrick1_1121(3520, -32), 2);
    add_background_object(create_rmbrick1_1121(3520, 96), 2);
    add_background_object(create_rmbrick1_1121(3392, -32), 2);
    add_background_object(create_rmbrick1_1121(3392, 96), 2);
    add_background_object(create_cavesoil8_1315(11344, 2984), 2);
    add_background_object(create_rmbrick15_1154(3776, 352), 2);
    add_background_object(create_cavesoil28_1312(7664, 2336), 2);
    add_background_object(create_cavesoil28_1312(7664, 2368), 2);
    add_background_object(create_cavesoil28_1312(7664, 2400), 2);
    add_background_object(create_cavesoil28_1312(7664, 2432), 2);
    add_background_object(create_cavesoil3_1339(7568, 2440), 2);
    add_background_object(create_cavesoil12_1350(7744, 2336), 2);
    add_background_object(create_cavesoil12_1350(7744, 2368), 2);
    add_background_object(create_cavesoil12_1350(7744, 2400), 2);
    add_background_object(create_cavesoil12_1350(7744, 2432), 2);
    add_background_object(create_cavesoil3_1339(7744, 2440), 2);
    add_background_object(create_cavesoil12_1350(7744, 2208), 2);
    add_background_object(create_cavesoil12_1350(7744, 2240), 2);
    add_background_object(create_cavesoil12_1350(7744, 2272), 2);
    add_background_object(create_cavesoil12_1350(7744, 2304), 2);
    add_background_object(create_cavesoil3_1339(7488, 2184), 2);
    add_background_object(create_cavesoil3_1339(7616, 2184), 2);
    add_background_object(create_cavesoil2_1338(7568, 2328), 2);
    add_background_object(create_cavesoil2_1338(7440, 2328), 2);
    add_background_object(create_cavesoil2_1338(7312, 2328), 2);
    add_background_object(create_cavesoil1_1310(7360, 2080), 2);
    add_background_object(create_cavesoil1_1310(7184, 2080), 2);
    add_background_object(create_cavesoil1_1310(7184, 1952), 2);
    add_background_object(create_cavesoil1_1310(7360, 1952), 2);
    add_background_object(create_cavesoil1_1310(7184, 2336), 2);
    add_background_object(create_cavesoil1_1310(7184, 2464), 2);
    add_background_object(create_cavesoil1_1310(7184, 2208), 2);
    add_background_object(create_cavesoil1_1310(7056, 2080), 2);
    add_background_object(create_cavesoil1_1310(7056, 1952), 2);
    add_background_object(create_cavesoil1_1310(7056, 2336), 2);
    add_background_object(create_cavesoil1_1310(7056, 2208), 2);
    add_background_object(create_cavesoil1_1310(7056, 2464), 2);
    add_background_object(create_soil1_1120(704, 800), 2);
    add_background_object(create_soil1_1120(576, 800), 2);
    add_background_object(create_soil3_1141(704, 736), 2);
    add_background_object(create_soil3_1141(592, 760), 2);
    add_background_object(create_soil3_1141(504, 784), 2);
    add_background_object(create_soil1_1120(704, 1824), 2);
    add_background_object(create_soil1_1120(704, 1056), 2);
    add_background_object(create_soil1_1120(960, 1824), 2);
    add_background_object(create_soil1_1120(704, 1440), 2);
    add_background_object(create_soil1_1120(704, 1696), 2);
    add_background_object(create_soil1_1120(960, 1696), 2);
    add_background_object(create_soil1_1120(704, 928), 2);
    add_background_object(create_soil3_1141(960, 736), 2);
    add_background_object(create_soil3_1141(1064, 760), 2);
    add_background_object(create_soil3_1141(1176, 736), 2);
    add_background_object(create_soil1_1120(832, 1824), 2);
    add_background_object(create_soil1_1120(1088, 1824), 2);
    add_background_object(create_soil1_1120(1088, 1696), 2);
    add_background_object(create_soil1_1120(576, 1824), 2);
    add_background_object(create_soil1_1120(576, 1056), 2);
    add_background_object(create_soil1_1120(576, 1440), 2);
    add_background_object(create_soil1_1120(576, 1696), 2);
    add_background_object(create_soil1_1120(576, 928), 2);
    add_background_object(create_rmcolumn9_1163(168, 440), 2);
    add_background_object(create_rmcolumn9_1163(232, 408), 2);
    add_background_object(create_rmcolumn9_1163(552, 408), 2);
    add_background_object(create_rmcolumn9_1163(616, 440), 2);
    add_background_object(create_rmcolumn9_1163(680, 440), 2);
    add_background_object(create_rmcolumn9_1163(744, 408), 2);
    add_background_object(create_rmcolumn9_1163(7016, 536), 2);
    add_background_object(create_rmcolumn9_1163(7080, 600), 2);
    add_background_object(create_rmcolumn9_1163(7336, 664), 2);
    add_background_object(create_rmcolumn9_1163(7464, 728), 2);
    add_background_object(create_caravantruck2_1358(6648, 552), 2);
    add_background_object(create_caravanplatform14_1359(6448, 480), 2);
    add_background_object(create_caravanplatform14_1359(6448, 520), 2);
    add_background_object(create_cavesoil2_1338(9920, 3224), 2);
    add_background_object(create_cavesoil12_1350(10032, 3192), 2);
    add_background_object(create_cavesoil12_1350(10032, 3160), 2);
    add_background_object(create_cavesoil12_1350(10032, 3128), 2);
    add_background_object(create_cavesoil12_1350(10032, 3096), 2);
    add_background_object(create_cavesoil2_1338(10048, 3088), 2);
    add_background_object(create_cavesoil19_1308(10032, 3088), 2);
    add_background_object(create_rmbrick2_1108(0, 384), 2);
    add_background_object(create_rmbrick2_1108(-64, 384), 2);
    add_background_object(create_soil1_1120(832, 1696), 2);
    add_background_object(create_soil1_1120(320, 1824), 2);
    add_background_object(create_soil1_1120(320, 1696), 2);
    add_background_object(create_soil1_1120(448, 1824), 2);
    add_background_object(create_soil1_1120(192, 1824), 2);
    add_background_object(create_soil1_1120(192, 1696), 2);
    add_background_object(create_soil1_1120(448, 1696), 2);
    add_background_object(create_soil1_1120(64, 1824), 2);
    add_background_object(create_soil1_1120(64, 1696), 2);
    add_background_object(create_soil1_1120(-64, 1824), 2);
    add_background_object(create_soil1_1120(-64, 1696), 2);
    add_background_object(create_soil1_1120(448, 1056), 2);
    add_background_object(create_soil1_1120(448, 1440), 2);
    add_background_object(create_soil1_1120(448, 928), 2);
    add_background_object(create_soil1_1120(320, 1056), 2);
    add_background_object(create_soil1_1120(320, 1440), 2);
    add_background_object(create_soil1_1120(320, 928), 2);
    add_background_object(create_soil1_1120(192, 1056), 2);
    add_background_object(create_soil1_1120(192, 1440), 2);
    add_background_object(create_soil1_1120(192, 928), 2);
    add_background_object(create_soil1_1120(64, 1056), 2);
    add_background_object(create_soil1_1120(64, 1440), 2);
    add_background_object(create_soil1_1120(64, 928), 2);
    add_background_object(create_soil1_1120(-64, 1056), 2);
    add_background_object(create_soil1_1120(-64, 1440), 2);
    add_background_object(create_soil1_1120(-64, 928), 2);
    add_background_object(create_soil1_1120(-64, 800), 2);
    add_background_object(create_soil1_1120(64, 800), 2);
    add_background_object(create_soil3_1141(480, 824), 2);
    add_background_object(create_soil3_1141(376, 832), 2);
    add_background_object(create_soil3_1141(272, 824), 2);
    add_background_object(create_soil3_1141(168, 824), 2);
    add_background_object(create_soil3_1141(88, 752), 2);
    add_background_object(create_soil3_1141(-16, 768), 2);
    add_background_object(create_soil3_1141(-128, 752), 2);
    add_background_object(create_soil1_1120(-64, 1568), 2);
    add_background_object(create_rmsoiledgeright_1360(48, 1568), 2);
    add_background_object(create_rmsoiledgeright_1360(48, 1600), 2);
    add_background_object(create_rmsoiledgeright_1360(48, 1632), 2);
    add_background_object(create_rmsoiledgeright_1360(48, 1664), 2);
    add_background_object(create_rmminetrack1_1361(192, 1688), 2);
    add_background_object(create_rmminetrack2_1362(320, 1688), 2);
    add_background_object(create_rmminetrack3_1299(704, 1696), 2);
    add_background_object(create_rmminetrack3_1299(960, 1688), 2);
    add_background_object(create_rmminetrack3_1299(64, 1696), 2);
    add_background_object(create_rmminetrack1_1361(448, 1688), 2);
    add_background_object(create_rmminetrack2_1362(576, 1688), 2);
    add_background_object(create_rmminetrack1_1361(832, 1688), 2);
    add_background_object(create_soil1_1120(2368, 1976), 2);
    add_background_object(create_soil1_1120(2496, 1976), 2);
    add_background_object(create_soil1_1120(2624, 1976), 2);
    add_background_object(create_soil1_1120(2240, 1976), 2);
    add_background_object(create_soil1_1120(1856, 1976), 2);
    add_background_object(create_soil1_1120(1984, 1976), 2);
    add_background_object(create_soil1_1120(2112, 1976), 2);
    add_background_object(create_soil1_1120(5640, 1568), 2);
    add_background_object(create_rmminetrack3_1299(2368, 1976), 2);
    add_background_object(create_rmminetrack3_1299(3008, 1824), 2);
    add_background_object(create_rmminetrack3_1299(1344, 1696), 2);
    add_background_object(create_rmminetrack3_1299(5504, 1672), 2);
    add_background_object(create_rmminetrack3_1299(5376, 1672), 2);
    add_background_object(create_rmminetrack3_1299(4992, 1672), 2);
    add_background_object(create_rmminetrack3_1299(4640, 1960), 2);
    add_background_object(create_rmminetrack3_1299(4768, 1960), 2);
    add_background_object(create_rmminetrack3_1299(4896, 1960), 2);
    add_background_object(create_rmminetrack3_1299(5024, 1960), 2);
    add_background_object(create_rmminetrack3_1299(4512, 1960), 2);
    add_background_object(create_rmminetrack3_1299(5536, 1824), 2);
    add_background_object(create_rmminetrack3_1299(5920, 1976), 2);
    add_background_object(create_rmminetrack3_1299(6304, 1824), 2);
    add_background_object(create_rmminetrack4_1363(1472, 1696), 2);
    add_background_object(create_rmminetrack4_1363(3136, 1824), 2);
    add_background_object(create_rmminetrack4_1363(5664, 1824), 2);
    add_background_object(create_rmminetrack7_1364(2880, 1824), 2);
    add_background_object(create_rmminetrack7_1364(3584, 1760), 2);
    add_background_object(create_rmminetrack7_1364(4736, 1664), 2);
    add_background_object(create_rmminetrack7_1364(6176, 1824), 2);
    add_background_object(create_rmminetrack5_1365(3264, 1896), 2);
    add_background_object(create_rmminetrack5_1365(5792, 1896), 2);
    add_background_object(create_rmminetrack9_1366(3520, 1832), 2);
    add_background_object(create_rmminetrack12_1367(1664, 1832), 2);
    add_background_object(create_rmminetrack6_1368(3392, 1896), 2);
    add_background_object(create_rmminetrack6_1368(4608, 1736), 2);
    add_background_object(create_rmminetrack6_1368(6048, 1896), 2);
    add_background_object(create_rmminetrack1_1361(3840, 1760), 2);
    add_background_object(create_rmminetrack1_1361(4224, 1816), 2);
    add_background_object(create_rmminetrack1_1361(5280, 1888), 2);
    add_background_object(create_rmminetrack2_1362(3712, 1760), 2);
    add_background_object(create_rmminetrack2_1362(4864, 1664), 2);
    add_background_object(create_rmminetrack10_1369(3968, 1760), 2);
    add_background_object(create_rmminetrack11_1370(5016, 1776), 2);
    add_background_object(create_rmminetrack11_1370(5152, 1896), 2);
    add_background_object(create_rmminetrack11_1370(5408, 1824), 2);
    add_background_object(create_switchwallbase_1371(5600, 1624), 2);
    add_background_object(create_switchwallbase2_1372(2760, 2256), 2);
    add_background_object(create_rmsoiledgeleft_1373(5616, 1568), 2);
    add_background_object(create_rmsoiledgeleft_1373(5616, 1600), 2);
    add_background_object(create_rmsoiledgeleft_1373(5616, 1632), 2);
    add_background_object(create_rmsoiledgeleft_1373(5616, 1664), 2);
    add_background_object(create_soil1_1120(704, 1184), 2);
    add_background_object(create_soil1_1120(576, 1184), 2);
    add_background_object(create_soil1_1120(448, 1184), 2);
    add_background_object(create_soil1_1120(320, 1184), 2);
    add_background_object(create_soil1_1120(192, 1184), 2);
    add_background_object(create_soil1_1120(64, 1184), 2);
    add_background_object(create_soil1_1120(-64, 1184), 2);
    add_background_object(create_soil1_1120(704, 1312), 2);
    add_background_object(create_soil1_1120(576, 1312), 2);
    add_background_object(create_soil1_1120(448, 1312), 2);
    add_background_object(create_soil1_1120(320, 1312), 2);
    add_background_object(create_soil1_1120(192, 1312), 2);
    add_background_object(create_soil1_1120(64, 1312), 2);
    add_background_object(create_soil1_1120(-64, 1312), 2);
    add_background_object(create_rmminetrack12_1367(1600, 1768), 2);
    add_background_object(create_rmsoiledgeleft_1373(8136, 768), 2);
    add_background_object(create_rmsoiledgeleft_1373(8136, 800), 2);
    add_background_object(create_rmsoiledgeleft_1373(8136, 832), 2);
    add_background_object(create_rmsoiledgeleft_1373(8136, 864), 2);
    add_background_object(create_rmsoiledgeleft_1373(8136, 896), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 2072), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 2040), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 2008), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 1976), 2);
    add_background_object(create_rmminetrack5_1365(1728, 1896), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 2072), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 2040), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 2008), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 1976), 2);
    add_background_object(create_rmminetrack6_1368(2752, 1896), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 1696), 2);
    add_background_object(create_rmminetrack3_1299(1216, 1696), 2);
    add_background_object(create_rmminetrack2_1362(1088, 1688), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 1728), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 1760), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 1792), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 1824), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 1856), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 1888), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 1920), 2);
    add_background_object(create_soil1_1120(704, 1952), 2);
    add_background_object(create_soil1_1120(960, 1952), 2);
    add_background_object(create_soil1_1120(832, 1952), 2);
    add_background_object(create_soil1_1120(1088, 1952), 2);
    add_background_object(create_soil1_1120(576, 1952), 2);
    add_background_object(create_soil1_1120(320, 1952), 2);
    add_background_object(create_soil1_1120(448, 1952), 2);
    add_background_object(create_soil1_1120(192, 1952), 2);
    add_background_object(create_soil1_1120(64, 1952), 2);
    add_background_object(create_soil1_1120(-64, 1952), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 1952), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 1984), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 2016), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 2048), 2);
    add_background_object(create_soil1_1120(704, 2080), 2);
    add_background_object(create_soil1_1120(960, 2080), 2);
    add_background_object(create_soil1_1120(832, 2080), 2);
    add_background_object(create_soil1_1120(1088, 2080), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 2080), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 2112), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 2144), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 2176), 2);
    add_background_object(create_soil1_1120(704, 2208), 2);
    add_background_object(create_soil1_1120(960, 2208), 2);
    add_background_object(create_soil1_1120(832, 2208), 2);
    add_background_object(create_soil1_1120(1088, 2208), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 2208), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 2240), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 2272), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 2304), 2);
    add_background_object(create_soil1_1120(704, 2336), 2);
    add_background_object(create_soil1_1120(960, 2336), 2);
    add_background_object(create_soil1_1120(832, 2336), 2);
    add_background_object(create_soil1_1120(1088, 2336), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 2336), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 2368), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 2400), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 2432), 2);
    add_background_object(create_soil1_1120(704, 2464), 2);
    add_background_object(create_soil1_1120(960, 2464), 2);
    add_background_object(create_soil1_1120(832, 2464), 2);
    add_background_object(create_soil1_1120(1088, 2464), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 2464), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 2496), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 2528), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 2560), 2);
    add_background_object(create_soil1_1120(704, 2592), 2);
    add_background_object(create_soil1_1120(960, 2592), 2);
    add_background_object(create_soil1_1120(832, 2592), 2);
    add_background_object(create_soil1_1120(1088, 2592), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 2592), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 2624), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 2656), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 2688), 2);
    add_background_object(create_soil1_1120(704, 2720), 2);
    add_background_object(create_soil1_1120(960, 2720), 2);
    add_background_object(create_soil1_1120(832, 2720), 2);
    add_background_object(create_soil1_1120(1088, 2720), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 2720), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 2752), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 2784), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 2816), 2);
    add_background_object(create_soil1_1120(704, 2848), 2);
    add_background_object(create_soil1_1120(960, 2848), 2);
    add_background_object(create_soil1_1120(832, 2848), 2);
    add_background_object(create_soil1_1120(1088, 2848), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 2848), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 2880), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 2912), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 2944), 2);
    add_background_object(create_soil1_1120(704, 2976), 2);
    add_background_object(create_soil1_1120(960, 2976), 2);
    add_background_object(create_soil1_1120(832, 2976), 2);
    add_background_object(create_soil1_1120(1088, 2976), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 2976), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 3008), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 3040), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 3072), 2);
    add_background_object(create_soil1_1120(704, 3104), 2);
    add_background_object(create_soil1_1120(960, 3104), 2);
    add_background_object(create_soil1_1120(832, 3104), 2);
    add_background_object(create_soil1_1120(1088, 3104), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 3104), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 3136), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 3168), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 3200), 2);
    add_background_object(create_soil1_1120(704, 3232), 2);
    add_background_object(create_soil1_1120(960, 3232), 2);
    add_background_object(create_soil1_1120(832, 3232), 2);
    add_background_object(create_soil1_1120(1088, 3232), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 3232), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 3264), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 3296), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 3328), 2);
    add_background_object(create_soil1_1120(704, 3360), 2);
    add_background_object(create_soil1_1120(960, 3360), 2);
    add_background_object(create_soil1_1120(832, 3360), 2);
    add_background_object(create_soil1_1120(1088, 3360), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 3360), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 3392), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 3424), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 3456), 2);
    add_background_object(create_soil1_1120(704, 3488), 2);
    add_background_object(create_soil1_1120(960, 3488), 2);
    add_background_object(create_soil1_1120(832, 3488), 2);
    add_background_object(create_soil1_1120(1088, 3488), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 3488), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 3520), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 3552), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 3584), 2);
    add_background_object(create_soil1_1120(704, 3616), 2);
    add_background_object(create_soil1_1120(960, 3616), 2);
    add_background_object(create_soil1_1120(832, 3616), 2);
    add_background_object(create_soil1_1120(1088, 3616), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 3616), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 3648), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 3680), 2);
    add_background_object(create_rmsoiledgeright_1360(1200, 3712), 2);
    add_background_object(create_soil1_1120(2368, 2104), 2);
    add_background_object(create_soil1_1120(2496, 2104), 2);
    add_background_object(create_soil1_1120(2624, 2104), 2);
    add_background_object(create_soil1_1120(2240, 2104), 2);
    add_background_object(create_soil1_1120(1856, 2104), 2);
    add_background_object(create_soil1_1120(1984, 2104), 2);
    add_background_object(create_soil1_1120(2112, 2104), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 2200), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 2168), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 2136), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 2104), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 2200), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 2168), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 2136), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 2104), 2);
    add_background_object(create_soil1_1120(2368, 2232), 2);
    add_background_object(create_soil1_1120(2496, 2232), 2);
    add_background_object(create_soil1_1120(2624, 2232), 2);
    add_background_object(create_soil1_1120(2240, 2232), 2);
    add_background_object(create_soil1_1120(1856, 2232), 2);
    add_background_object(create_soil1_1120(1984, 2232), 2);
    add_background_object(create_soil1_1120(2112, 2232), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 2328), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 2296), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 2264), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 2232), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 2328), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 2296), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 2264), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 2232), 2);
    add_background_object(create_soil1_1120(2368, 2360), 2);
    add_background_object(create_soil1_1120(2496, 2360), 2);
    add_background_object(create_soil1_1120(2624, 2360), 2);
    add_background_object(create_soil1_1120(2240, 2360), 2);
    add_background_object(create_soil1_1120(1856, 2360), 2);
    add_background_object(create_soil1_1120(1984, 2360), 2);
    add_background_object(create_soil1_1120(2112, 2360), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 2456), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 2424), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 2392), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 2360), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 2456), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 2424), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 2392), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 2360), 2);
    add_background_object(create_soil1_1120(2368, 2488), 2);
    add_background_object(create_soil1_1120(2496, 2488), 2);
    add_background_object(create_soil1_1120(2624, 2488), 2);
    add_background_object(create_soil1_1120(2240, 2488), 2);
    add_background_object(create_soil1_1120(1856, 2488), 2);
    add_background_object(create_soil1_1120(1984, 2488), 2);
    add_background_object(create_soil1_1120(2112, 2488), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 2584), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 2552), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 2520), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 2488), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 2584), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 2552), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 2520), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 2488), 2);
    add_background_object(create_soil1_1120(2368, 2616), 2);
    add_background_object(create_soil1_1120(2496, 2616), 2);
    add_background_object(create_soil1_1120(2624, 2616), 2);
    add_background_object(create_soil1_1120(2240, 2616), 2);
    add_background_object(create_soil1_1120(1856, 2616), 2);
    add_background_object(create_soil1_1120(1984, 2616), 2);
    add_background_object(create_soil1_1120(2112, 2616), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 2712), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 2680), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 2648), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 2616), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 2712), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 2680), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 2648), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 2616), 2);
    add_background_object(create_soil1_1120(2368, 2744), 2);
    add_background_object(create_soil1_1120(2496, 2744), 2);
    add_background_object(create_soil1_1120(2624, 2744), 2);
    add_background_object(create_soil1_1120(2240, 2744), 2);
    add_background_object(create_soil1_1120(1856, 2744), 2);
    add_background_object(create_soil1_1120(1984, 2744), 2);
    add_background_object(create_soil1_1120(2112, 2744), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 2840), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 2808), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 2776), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 2744), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 2840), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 2808), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 2776), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 2744), 2);
    add_background_object(create_soil1_1120(2368, 2872), 2);
    add_background_object(create_soil1_1120(2496, 2872), 2);
    add_background_object(create_soil1_1120(2624, 2872), 2);
    add_background_object(create_soil1_1120(2240, 2872), 2);
    add_background_object(create_soil1_1120(1856, 2872), 2);
    add_background_object(create_soil1_1120(1984, 2872), 2);
    add_background_object(create_soil1_1120(2112, 2872), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 2968), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 2936), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 2904), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 2872), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 2968), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 2936), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 2904), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 2872), 2);
    add_background_object(create_soil1_1120(2368, 3000), 2);
    add_background_object(create_soil1_1120(2496, 3000), 2);
    add_background_object(create_soil1_1120(2624, 3000), 2);
    add_background_object(create_soil1_1120(2240, 3000), 2);
    add_background_object(create_soil1_1120(1856, 3000), 2);
    add_background_object(create_soil1_1120(1984, 3000), 2);
    add_background_object(create_soil1_1120(2112, 3000), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 3096), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 3064), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 3032), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 3000), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 3096), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 3064), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 3032), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 3000), 2);
    add_background_object(create_soil1_1120(2368, 3128), 2);
    add_background_object(create_soil1_1120(2496, 3128), 2);
    add_background_object(create_soil1_1120(2624, 3128), 2);
    add_background_object(create_soil1_1120(2240, 3128), 2);
    add_background_object(create_soil1_1120(1856, 3128), 2);
    add_background_object(create_soil1_1120(1984, 3128), 2);
    add_background_object(create_soil1_1120(2112, 3128), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 3224), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 3192), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 3160), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 3128), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 3224), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 3192), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 3160), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 3128), 2);
    add_background_object(create_soil1_1120(2368, 3256), 2);
    add_background_object(create_soil1_1120(2496, 3256), 2);
    add_background_object(create_soil1_1120(2624, 3256), 2);
    add_background_object(create_soil1_1120(2240, 3256), 2);
    add_background_object(create_soil1_1120(1856, 3256), 2);
    add_background_object(create_soil1_1120(1984, 3256), 2);
    add_background_object(create_soil1_1120(2112, 3256), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 3352), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 3320), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 3288), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 3256), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 3352), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 3320), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 3288), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 3256), 2);
    add_background_object(create_soil1_1120(2368, 3384), 2);
    add_background_object(create_soil1_1120(2496, 3384), 2);
    add_background_object(create_soil1_1120(2624, 3384), 2);
    add_background_object(create_soil1_1120(2240, 3384), 2);
    add_background_object(create_soil1_1120(1856, 3384), 2);
    add_background_object(create_soil1_1120(1984, 3384), 2);
    add_background_object(create_soil1_1120(2112, 3384), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 3480), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 3448), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 3416), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 3384), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 3480), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 3448), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 3416), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 3384), 2);
    add_background_object(create_soil1_1120(2368, 3512), 2);
    add_background_object(create_soil1_1120(2496, 3512), 2);
    add_background_object(create_soil1_1120(2624, 3512), 2);
    add_background_object(create_soil1_1120(2240, 3512), 2);
    add_background_object(create_soil1_1120(1856, 3512), 2);
    add_background_object(create_soil1_1120(1984, 3512), 2);
    add_background_object(create_soil1_1120(2112, 3512), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 3608), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 3576), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 3544), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 3512), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 3608), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 3576), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 3544), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 3512), 2);
    add_background_object(create_soil1_1120(2368, 3640), 2);
    add_background_object(create_soil1_1120(2496, 3640), 2);
    add_background_object(create_soil1_1120(2624, 3640), 2);
    add_background_object(create_soil1_1120(2240, 3640), 2);
    add_background_object(create_soil1_1120(1856, 3640), 2);
    add_background_object(create_soil1_1120(1984, 3640), 2);
    add_background_object(create_soil1_1120(2112, 3640), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 3736), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 3704), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 3672), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 3640), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 3736), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 3704), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 3672), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 3640), 2);
    add_background_object(create_rmbrick10_1324(832, 672), 2);
    add_background_object(create_rmbrickarch_1374(944, 672), 2);
    add_background_object(create_rmbrickarch_1374(944, 544), 2);
    add_background_object(create_rmsoiledgeleft_1373(944, 792), 2);
    add_background_object(create_rmsoiledgeright_1360(816, 792), 2);
    add_background_object(create_rmsoiledgeleft_1373(944, 832), 2);
    add_background_object(create_rmsoiledgeright_1360(816, 832), 2);
    add_background_object(create_rmsoiledgeright_1360(816, 808), 2);
    add_background_object(create_rmsoiledgeleft_1373(944, 808), 2);
    add_background_object(create_rmsoiledgeright_1360(816, 864), 2);
    add_background_object(create_rmsoiledgeleft_1373(944, 864), 2);
    add_background_object(create_rmsoiledgeleft_1373(944, 896), 2);
    add_background_object(create_rmsoiledgeright_1360(816, 896), 2);
    add_background_object(create_rmsoiledgeright_1360(816, 928), 2);
    add_background_object(create_rmsoiledgeleft_1373(944, 928), 2);
    add_background_object(create_rmsoiledgeleft_1373(944, 960), 2);
    add_background_object(create_rmsoiledgeright_1360(816, 960), 2);
    add_background_object(create_rmsoiledgeright_1360(816, 992), 2);
    add_background_object(create_rmsoiledgeleft_1373(944, 992), 2);
    add_background_object(create_rmsoiledgeleft_1373(944, 1024), 2);
    add_background_object(create_rmsoiledgeright_1360(816, 1024), 2);
    add_background_object(create_rmsoiledgeright_1360(816, 1056), 2);
    add_background_object(create_rmsoiledgeleft_1373(944, 1056), 2);
    add_background_object(create_rmsoiledgeleft_1373(944, 1088), 2);
    add_background_object(create_rmsoiledgeright_1360(816, 1088), 2);
    add_background_object(create_rmsoiledgeright_1360(816, 1120), 2);
    add_background_object(create_rmsoiledgeleft_1373(944, 1120), 2);
    add_background_object(create_rmsoiledgeleft_1373(944, 1152), 2);
    add_background_object(create_rmsoiledgeright_1360(816, 1152), 2);
    add_background_object(create_rmsoiledgeright_1360(816, 1184), 2);
    add_background_object(create_rmsoiledgeleft_1373(944, 1184), 2);
    add_background_object(create_rmsoiledgeleft_1373(944, 1216), 2);
    add_background_object(create_rmsoiledgeright_1360(816, 1216), 2);
    add_background_object(create_rmsoiledgeright_1360(816, 1248), 2);
    add_background_object(create_rmsoiledgeleft_1373(944, 1248), 2);
    add_background_object(create_rmsoiledgeleft_1373(944, 1280), 2);
    add_background_object(create_rmsoiledgeright_1360(816, 1280), 2);
    add_background_object(create_rmsoiledgeright_1360(816, 1312), 2);
    add_background_object(create_rmsoiledgeleft_1373(944, 1312), 2);
    add_background_object(create_rmsoiledgeleft_1373(944, 1344), 2);
    add_background_object(create_rmsoiledgeright_1360(816, 1344), 2);
    add_background_object(create_rmsoiledgeright_1360(816, 1376), 2);
    add_background_object(create_rmsoiledgeleft_1373(944, 1376), 2);
    add_background_object(create_rmsoiledgeleft_1373(944, 1408), 2);
    add_background_object(create_rmsoiledgeright_1360(816, 1408), 2);
    add_background_object(create_rmsoiledgeright_1360(816, 1440), 2);
    add_background_object(create_rmsoiledgeleft_1373(944, 1440), 2);
    add_background_object(create_rmsoiledgeleft_1373(944, 1472), 2);
    add_background_object(create_rmsoiledgeright_1360(816, 1472), 2);
    add_background_object(create_rmsoiledgeright_1360(816, 1504), 2);
    add_background_object(create_rmsoiledgeleft_1373(944, 1504), 2);
    add_background_object(create_rmsoiledgeleft_1373(944, 1536), 2);
    add_background_object(create_rmsoiledgeright_1360(816, 1536), 2);
    add_background_object(create_rmminetrack3_1299(4480, 1816), 2);
    add_background_object(create_rmminetrack3_1299(4352, 1816), 2);
    add_background_object(create_rmminetrack3_1299(4096, 1824), 2);
    add_background_object(create_rmminetrack3_1299(6688, 1976), 2);
    add_background_object(create_rmminetrack4_1363(6432, 1824), 2);
    add_background_object(create_rmminetrack5_1365(6560, 1896), 2);
    add_background_object(create_rmminetrack3_1299(6816, 1976), 2);
    add_background_object(create_cavesoil12_1350(7040, 1952), 2);
    add_background_object(create_cavesoil12_1350(7040, 1984), 2);
    add_background_object(create_cavesoil12_1350(7040, 2016), 2);
    add_background_object(create_cavesoil12_1350(7040, 2048), 2);
    add_background_object(create_cavesoil12_1350(7040, 2080), 2);
    add_background_object(create_cavesoil12_1350(7040, 2112), 2);
    add_background_object(create_cavesoil19_1308(7040, 1944), 2);
    add_background_object(create_cavesoil2_1338(7056, 1944), 2);
    add_background_object(create_cavesoil2_1338(7184, 1944), 2);
    add_background_object(create_cavesoil12_1350(7040, 2144), 2);
    add_background_object(create_cavesoil12_1350(7040, 2176), 2);
    add_background_object(create_cavesoil12_1350(7040, 2208), 2);
    add_background_object(create_cavesoil12_1350(7040, 2240), 2);
    add_background_object(create_cavesoil12_1350(7040, 2272), 2);
    add_background_object(create_cavesoil12_1350(7040, 2304), 2);
    add_background_object(create_cavesoil12_1350(7040, 2336), 2);
    add_background_object(create_cavesoil12_1350(7040, 2368), 2);
    add_background_object(create_cavesoil12_1350(7040, 2400), 2);
    add_background_object(create_cavesoil12_1350(7040, 2432), 2);
    add_background_object(create_cavesoil12_1350(7040, 2464), 2);
    add_background_object(create_cavesoil12_1350(7040, 2496), 2);
    add_background_object(create_cavesoil12_1350(7040, 2528), 2);
    add_background_object(create_cavesoil12_1350(7040, 2560), 2);
    add_background_object(create_cavesoil20_1348(7040, 2584), 2);
    add_background_object(create_cavesoil3_1339(7056, 2576), 2);
    add_background_object(create_cavesoil12_1350(7296, 2592), 2);
    add_background_object(create_cavesoil12_1350(7296, 2624), 2);
    add_background_object(create_cavesoil12_1350(7296, 2656), 2);
    add_background_object(create_cavesoil12_1350(7296, 2688), 2);
    add_background_object(create_cavesoil12_1350(7296, 2720), 2);
    add_background_object(create_cavesoil12_1350(7296, 2752), 2);
    add_background_object(create_cavesoil12_1350(7296, 2784), 2);
    add_background_object(create_cavesoil12_1350(7296, 2816), 2);
    add_background_object(create_cavesoil3_1339(7184, 2576), 2);
    add_background_object(create_cavesoil20_1348(7296, 2840), 2);
    add_background_object(create_cavesoil12_1350(7424, 2840), 2);
    add_background_object(create_cavesoil12_1350(7424, 2872), 2);
    add_background_object(create_cavesoil12_1350(7424, 2904), 2);
    add_background_object(create_cavesoil12_1350(7424, 2936), 2);
    add_background_object(create_cavesoil12_1350(7424, 2968), 2);
    add_background_object(create_cavesoil3_1339(7312, 2832), 2);
    add_background_object(create_cavesoil20_1348(7424, 2992), 2);
    add_background_object(create_cavesoil3_1339(7440, 2984), 2);
    add_background_object(create_cavesoil3_1339(7568, 2984), 2);
    add_background_object(create_cavesoil3_1339(7696, 2984), 2);
    add_background_object(create_cavesoil3_1339(7824, 2984), 2);
    add_background_object(create_cavesoil3_1339(7952, 2984), 2);
    add_background_object(create_cavesoil3_1339(8080, 2984), 2);
    add_background_object(create_cavesoil3_1339(8208, 2984), 2);
    add_background_object(create_cavesoil3_1339(8336, 2984), 2);
    add_background_object(create_rmminetrack7_1364(4384, 1960), 2);
    add_background_object(create_rmminetrack9_1366(4320, 2032), 2);
    add_background_object(create_rmminetrack9_1366(4256, 2096), 2);
    add_background_object(create_rmminetrack9_1366(4192, 2160), 2);
    add_background_object(create_rmminetrack9_1366(4128, 2224), 2);
    add_background_object(create_rmminetrack6_1368(4000, 2288), 2);
    add_background_object(create_rmminetrack4_1363(3680, 2152), 2);
    add_background_object(create_rmminetrack5_1365(3872, 2288), 2);
    add_background_object(create_rmminetrack13_1375(3808, 2224), 2);
    add_background_object(create_rmminetrack1_1361(3552, 2152), 2);
    add_background_object(create_rmminetrack2_1362(3424, 2152), 2);
    add_background_object(create_rmminetrack7_1364(3296, 2152), 2);
    add_background_object(create_rmminetrack6_1368(3168, 2224), 2);
    add_background_object(create_rmminetrack3_1299(2784, 2304), 2);
    add_background_object(create_soil1_1120(5768, 1568), 2);
    add_background_object(create_soil3_1141(5640, 1480), 2);
    add_background_object(create_soil3_1141(5768, 1496), 2);
    add_background_object(create_rmsoiledgeright_1360(5880, 1568), 2);
    add_background_object(create_rmsoiledgeright_1360(5880, 1600), 2);
    add_background_object(create_rmsoiledgeright_1360(5880, 1632), 2);
    add_background_object(create_rmsoiledgeright_1360(5880, 1664), 2);
    add_background_object(create_soil1_1120(2368, 1568), 2);
    add_background_object(create_soil1_1120(2496, 1568), 2);
    add_background_object(create_soil1_1120(2624, 1568), 2);
    add_background_object(create_soil1_1120(2240, 1568), 2);
    add_background_object(create_soil1_1120(1856, 1568), 2);
    add_background_object(create_soil1_1120(1984, 1568), 2);
    add_background_object(create_soil1_1120(2112, 1568), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 1664), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 1632), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 1600), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 1568), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 1664), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 1632), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 1600), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 1568), 2);
    add_background_object(create_soil1_1120(2368, 1696), 2);
    add_background_object(create_soil1_1120(2496, 1696), 2);
    add_background_object(create_soil1_1120(2624, 1696), 2);
    add_background_object(create_soil1_1120(2240, 1696), 2);
    add_background_object(create_soil1_1120(1856, 1696), 2);
    add_background_object(create_soil1_1120(1984, 1696), 2);
    add_background_object(create_soil1_1120(2112, 1696), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 1792), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 1760), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 1728), 2);
    add_background_object(create_rmsoiledgeleft_1373(1840, 1696), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 1792), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 1760), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 1728), 2);
    add_background_object(create_rmsoiledgeright_1360(2736, 1696), 2);
    add_background_object(create_rmsoilceiling_1191(576, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(448, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(320, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(192, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(64, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(1088, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(944, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(720, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(960, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(704, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(1344, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(1216, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(1600, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(1472, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(1728, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(1840, 1824), 2);
    add_background_object(create_rmsoilceiling_1191(1984, 1824), 2);
    add_background_object(create_rmsoilceiling_1191(1856, 1824), 2);
    add_background_object(create_rmsoilceiling_1191(2112, 1824), 2);
    add_background_object(create_rmsoilceiling_1191(2240, 1824), 2);
    add_background_object(create_rmsoilceiling_1191(2368, 1824), 2);
    add_background_object(create_rmsoilceiling_1191(2496, 1824), 2);
    add_background_object(create_rmsoilceiling_1191(2640, 1824), 2);
    add_background_object(create_rmsoilceiling_1191(2624, 1824), 2);
    add_background_object(create_rmsoilceiling_1191(2752, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(2880, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(3008, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(3136, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(3264, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(3392, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(3520, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(3648, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(3776, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(3904, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(4032, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(4160, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(4288, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(4416, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(4544, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(4672, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(4800, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(4928, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(5056, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(5184, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(5312, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(5440, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(5616, 1696), 2);
    add_background_object(create_rmsoilceiling_1191(5784, 1696), 2);
    add_background_object(create_rmsoilceiling_1191(5640, 1696), 2);
    add_background_object(create_rmsoilceiling_1191(5768, 1696), 2);
    add_background_object(create_rmsoilceiling_1191(5952, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(6080, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(6208, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(6336, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(6464, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(6592, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(6720, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(6848, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(6976, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(7104, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(7232, 1568), 2);
    add_background_object(create_rmsoilceiling_1191(7360, 1568), 2);
    add_background_object(create_shaft1_1337(7472, 1568), 2);
    add_background_object(create_shaft1_1337(7472, 1664), 2);
    add_background_object(create_shaft1_1337(7472, 1760), 2);
    add_background_object(create_shaft1_1337(7472, 1856), 2);
    add_background_object(create_cavesoil2_1338(7360, 1944), 2);
    add_background_object(create_shaft1_1337(7360, 1944), 2);
    add_background_object(create_shaft1_1337(7360, 2032), 2);
    add_background_object(create_shaft1_1337(7296, 1944), 2);
    add_background_object(create_shaft1_1337(7296, 2040), 2);
    add_background_object(create_shaft1_1337(7296, 2136), 2);
    add_background_object(create_shaft1_1337(7296, 2232), 2);
    add_background_object(create_cavesoil3_1339(7360, 2184), 2);
    add_background_object(create_shaft1_1337(7360, 2120), 2);
    add_background_object(create_rmminetrack3_1299(2240, 1976), 2);
    add_background_object(create_rmminetrack3_1299(2112, 1976), 2);
    add_background_object(create_rmminetrack3_1299(1984, 1976), 2);
    add_background_object(create_rmminetrack3_1299(1856, 1976), 2);
    add_background_object(create_rmminetrack3_1299(2624, 1976), 2);
    add_background_object(create_rmminetrack3_1299(2496, 1976), 2);
    add_background_object(create_rmminetrack3_1299(2912, 2304), 2);
    add_background_object(create_rmminetrack3_1299(3040, 2304), 2);
    add_background_object(create_rmalternatepathback_1376(832, 512), 2);
    add_background_object(create_edgeoverlay_496(816, 512), 2);
    add_background_object(create_edgeoverlay_496(944, 512), 2);
    add_background_object(create_brick30_1377(1024, 512), 2);
    add_background_object(create_brick30_1377(1088, 512), 2);
    add_background_object(create_brick30_1377(1152, 512), 2);
    add_background_object(create_brick30_1377(1216, 512), 2);
    add_background_object(create_brick30_1377(1280, 512), 2);
    add_background_object(create_caravanplatform12_1319(6512, 440), 2);
    add_background_object(create_caravanplatform11_1332(6504, 520), 2);
    add_background_object(create_caravandoor_1378(6528, 480), 2);
    add_object(create_rmalternatepath2_1379(1112, 312), 2);
    add_object(create_rmalternatepath2_1379(1176, 360), 2);
    add_object(create_objectjumppad_1380(10576, 2872), 2);
    add_object(create_objectjumppad_1380(10944, 2792), 2);
    add_object(create_objectjumppad_1380(10840, 3000), 2);
    add_object(create_objectjumppad_1380(11080, 2840), 2);
    add_object(create_objectjumppad_1380(11256, 2984), 2);
    add_object(create_gimmickhangingswitch_1381(10792, 2520), 2);
    add_object(create_enemyextractorbase_1176(10420, 2796), 2);
    add_object(create_yellowspringup_434(6416, 552), 2);
    add_object(create_yellowspringupleft_432(6416, 512), 2);
    add_object(create_yellowspringupleft_432(6392, 536), 2);
    add_object(create_bossclawpiece1_1281(848, -96), 2);
    add_object(create_bossclawpiece1_1281(880, -96), 2);
    add_object(create_bossclawpiece1_1281(912, -96), 2);
    add_object(create_bossclawpiece1_1281(944, -96), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_playerstartingpoint_358(125, 493), 2);
    add_object(create_link_352(88, -96), 2);
    add_object(create_objectcrystal_279(-275, 82), 2);
    add_object(create_objectcodec_354(-295, 108), 2);
    add_object(create_playerinput_19(-440, 176), 2);
    add_object(create_masterinput_20(-464, 176), 2);
    add_object(create_inputsp1_21(-416, 176), 2);
    add_object(create_globalinputdata_22(-392, 176), 2);
    add_object(create_breakablecolumn2_1382(1088, 448), 2);
    add_object(create_breakablecolumn2_1382(1088, 416), 2);
    add_object(create_breakablecolumn1_1383(1088, 384), 2);
    add_object(create_breakablerelicwall_1384(1088, 224), 2);
    add_object(create_cameratriggerboss_424(664, 376), 2);
    add_object(create_breakablerelicwall_1384(1216, 224), 2);
    add_object(create_breakablecolumn2_1382(1344, 448), 2);
    add_object(create_breakablecolumn2_1382(1344, 416), 2);
    add_object(create_breakablecolumn1_1383(1344, 384), 2);
    add_object(create_breakablerelicwall_1384(1344, 224), 2);
    add_object(create_breakablerelicwall_1384(1472, 224), 2);
    add_object(create_breakablecolumn2_1382(1600, 448), 2);
    add_object(create_breakablecolumn2_1382(1600, 416), 2);
    add_object(create_breakablecolumn1_1383(1600, 384), 2);
    add_object(create_breakablerelicwall_1384(1600, 224), 2);
    add_object(create_breakablerelicwall_1384(1728, 224), 2);
    add_object(create_breakablecolumn2_1382(1856, 448), 2);
    add_object(create_breakablecolumn2_1382(1856, 416), 2);
    add_object(create_breakablecolumn1_1383(1856, 384), 2);
    add_object(create_breakablerelicwall_1384(1856, 224), 2);
    add_object(create_breakablerelicwall_1384(1984, 224), 2);
    add_object(create_breakablecolumn2_1382(2112, 448), 2);
    add_object(create_breakablecolumn2_1382(2112, 416), 2);
    add_object(create_breakablecolumn1_1383(2112, 384), 2);
    add_object(create_breakablerelicwall_1384(2112, 224), 2);
    add_object(create_breakablerelicwall_1384(2240, 224), 2);
    add_object(create_breakablecolumn2_1382(2368, 448), 2);
    add_object(create_breakablecolumn2_1382(2368, 416), 2);
    add_object(create_breakablecolumn1_1383(2368, 384), 2);
    add_object(create_breakablerelicwall_1384(2368, 224), 2);
    add_object(create_breakablerelicwall_1384(2496, 224), 2);
    add_object(create_breakablecolumn2_1382(2624, 448), 2);
    add_object(create_breakablecolumn2_1382(2624, 416), 2);
    add_object(create_breakablecolumn1_1383(2624, 384), 2);
    add_object(create_breakablerelicwall_1384(2624, 224), 2);
    add_object(create_breakablerelicwall_1384(2752, 224), 2);
    add_object(create_breakablecolumn2_1382(2880, 448), 2);
    add_object(create_breakablecolumn2_1382(2880, 416), 2);
    add_object(create_breakablecolumn1_1383(2880, 384), 2);
    add_object(create_breakablerelicwall_1384(2880, 224), 2);
    add_object(create_breakablerelicwall_1384(3008, 224), 2);
    add_object(create_breakablecolumn2_1382(3136, 448), 2);
    add_object(create_breakablecolumn2_1382(3136, 416), 2);
    add_object(create_breakablecolumn1_1383(3136, 384), 2);
    add_object(create_breakablerelicwall_1384(3136, 224), 2);
    add_object(create_breakablerelicwall_1384(3264, 224), 2);
    add_object(create_breakablecolumn2_1382(3392, 448), 2);
    add_object(create_breakablecolumn2_1382(3392, 416), 2);
    add_object(create_breakablecolumn1_1383(3392, 384), 2);
    add_object(create_breakablerelicwall_1384(3392, 224), 2);
    add_object(create_breakablerelicwall_1384(3520, 224), 2);
    add_object(create_breakablecolumn2_1382(3648, 448), 2);
    add_object(create_breakablecolumn2_1382(3648, 416), 2);
    add_object(create_breakablecolumn1_1383(3648, 384), 2);
    add_object(create_breakablerelicwall_1384(3648, 224), 2);
    add_object(create_enemyfirespitter_1385(4860, 584), 2);
    add_object(create_caravanwheel_1386(4352, 648), 2);
    add_object(create_caravanwheel_1386(4608, 648), 2);
    add_object(create_levelfloatingplatform2_1387(4312, 600), 2);
    add_object(create_levelfloatingplatform2_1387(4568, 600), 2);
    add_object(create_caravanwheel_1386(4480, 648), 2);
    add_object(create_caravanwheel_1386(4736, 648), 2);
    add_object(create_caravanwheel_1386(4864, 648), 2);
    add_object(create_levelfloatingplatform2_1387(4824, 600), 2);
    add_object(create_caravanwheel_1386(4992, 648), 2);
    add_object(create_caravanwheel_1386(5120, 648), 2);
    add_object(create_levelfloatingplatform2_1387(5080, 600), 2);
    add_object(create_caravanwheel_1386(5280, 648), 2);
    add_object(create_monitorrings_407(4704, 568), 2);
    add_object(create_monitorbomb_563(5208, 528), 2);
    add_object(create_levelfloatingplatform2_1387(5272, 600), 2);
    add_object(create_caravanwheel_1386(5440, 648), 2);
    add_object(create_monitorbomb_563(5448, 528), 2);
    add_object(create_monitorbomb_563(5416, 528), 2);
    add_object(create_monitorbomb_563(5384, 528), 2);
    add_object(create_caravanwheel_1386(5568, 648), 2);
    add_object(create_levelfloatingplatform2_1387(5528, 600), 2);
    add_object(create_caravanwheel_1386(5696, 648), 2);
    add_object(create_monitorbomb_563(5608, 568), 2);
    add_object(create_monitorbomb_563(5704, 568), 2);
    add_object(create_monitorbomb_563(5672, 568), 2);
    add_object(create_enemyhopper_1168(5887, 568), 2);
    add_object(create_bossclawhitbox_1388(6044, 948), 2);
    add_object(create_caravanwheel_1386(5824, 648), 2);
    add_object(create_levelfloatingplatform2_1387(5784, 600), 2);
    add_object(create_caravanwheel_1386(5952, 648), 2);
    add_object(create_caravanwheel_1386(6080, 648), 2);
    add_object(create_levelfloatingplatform2_1387(6040, 600), 2);
    add_object(create_caravanwheel_1386(6336, 648), 2);
    add_object(create_enemylimiter_350(4829, 586), 2);
    add_object(create_enemylimiter_350(5053, 586), 2);
    add_object(create_enemyfirespitter_1385(5564, 544), 2);
    add_object(create_enemylimiter_350(5533, 546), 2);
    add_object(create_enemylimiter_350(5629, 546), 2);
    add_object(create_enemyhopper_1168(5183, 568), 2);
    add_object(create_caravanwheel_1386(6272, 648), 2);
    add_object(create_levelfloatingplatform2_1387(6248, 600), 2);
    add_object(create_objectcrystal_279(4909, 586), 2);
    add_object(create_objectcrystal_279(4941, 586), 2);
    add_object(create_objectcrystal_279(4973, 586), 2);
    add_object(create_objectcrystal_279(4877, 586), 2);
    add_object(create_objectcrystal_279(5861, 570), 2);
    add_object(create_objectcrystal_279(5917, 570), 2);
    add_object(create_hazardspikesup_1172(6352, 568), 2);
    add_object(create_hazardspikesup_1172(6040, 568), 2);
    add_object(create_caravanwheel_1386(6672, 648), 2);
    add_object(create_monitorbomb_563(5640, 568), 2);
    add_object(create_objectpetal_302(5865, 497), 2);
    add_object(create_objectpetal_302(5889, 489), 2);
    add_object(create_objectpetal_302(5913, 497), 2);
    add_object(create_bossclaw_1389(928, 344), 2);
    add_object(create_shrine3_1390(928, 440), 2);
    add_object(create_shrine2_1391(904, 448), 2);
    add_object(create_bossclawtalons_1392(1168, 80), 2);
    add_object(create_bossclawbase_1393(6408, 560), 2);
    add_object(create_hazardspikesup_1172(6072, 568), 2);
    add_object(create_sign_351(8352, 2685), 2);
    add_object(create_pushableblock3_1394(6613, 462), 2);
    add_object(create_caravanengine_1395(6676, 548), 2);
    add_object(create_active_1396(6720, 664), 2);
    add_object(create_active_1396(6848, 664), 2);
    add_object(create_active_1396(6592, 664), 2);
    add_object(create_active_1396(6464, 664), 2);
    add_object(create_active_1396(6336, 664), 2);
    add_object(create_active_1396(6208, 664), 2);
    add_object(create_active_1396(6080, 664), 2);
    add_object(create_active_1396(5952, 664), 2);
    add_object(create_gimmickelevator_1397(8064, 966), 2);
    add_object(create_gimmickelevator2_1398(8064, 968), 2);
    add_object(create_gimmickspinnycup_1399(9697, 3072), 2);
    add_object(create_monitorrings_407(9752, 3192), 2);
    add_object(create_gimmickpickaxehandle_1400(9136, 2780), 2);
    add_object(create_gimmickpickaxebase_1401(9136, 2780), 2);
    add_object(create_gimmickpickaxe_1402(9136, 2784), 2);
    add_object(create_laddertop_357(8956, 2815), 2);
    add_object(create_objectcrystal_279(9117, 2698), 2);
    add_object(create_objectcrystal_279(9157, 2698), 2);
    add_object(create_objectcrystal_279(9085, 2706), 2);
    add_object(create_objectcrystal_279(9189, 2706), 2);
    add_object(create_objectcrystal_279(10013, 3170), 2);
    add_object(create_objectcrystal_279(10013, 3138), 2);
    add_object(create_objectcrystal_279(10013, 3106), 2);
    add_object(create_gimmickpickaxehandle_1400(11312, 3188), 2);
    add_object(create_gimmickpickaxebase2_1403(11317, 3191), 2);
    add_object(create_gimmickpickaxe_1402(11312, 3192), 2);
    add_object(create_gimmickrelicflippanel2_1242(11304, 3080), 2);
    add_object(create_yellowspringup_434(11424, 3160), 2);
    add_object(create_objectcrystal_279(10893, 3418), 2);
    add_object(create_objectcrystal_279(10989, 3418), 2);
    add_object(create_objectcrystal_279(10941, 3418), 2);
    add_object(create_objectcrystal_279(11293, 3194), 2);
    add_object(create_objectcrystal_279(11261, 3194), 2);
    add_object(create_objectcrystal_279(11277, 3218), 2);
    add_object(create_objectcrystal_279(11261, 3242), 2);
    add_object(create_objectcrystal_279(11293, 3242), 2);
    add_object(create_objectcrystal_279(11181, 2866), 2);
    add_object(create_objectcrystal_279(11133, 2866), 2);
    add_object(create_objectcrystal_279(11085, 2866), 2);
    add_object(create_objectcrystal_279(11037, 2866), 2);
    add_object(create_objectcrystal_279(10909, 2866), 2);
    add_object(create_objectcrystal_279(10861, 2866), 2);
    add_object(create_objectcrystal_279(10813, 2866), 2);
    add_object(create_objectcrystal_279(10765, 2866), 2);
    add_object(create_yellowspringupleft_432(10808, 2912), 2);
    add_object(create_objectcrystal_279(11677, 3130), 2);
    add_object(create_objectcrystal_279(11677, 3082), 2);
    add_object(create_objectcrystal_279(11661, 3106), 2);
    add_object(create_objectcrystal_279(11693, 3106), 2);
    add_object(create_enemyextractorhead_1177(10420, 2796), 2);
    add_object(create_monitorrings_407(10192, 2808), 2);
    add_object(create_yellowspringup_434(10576, 2976), 2);
    add_object(create_laddertop_357(10596, 2631), 2);
    add_object(create_objectcrystal_279(10861, 3530), 2);
    add_object(create_objectcrystal_279(10861, 3570), 2);
    add_object(create_objectcrystal_279(10829, 3570), 2);
    add_object(create_objectcrystal_279(10893, 3530), 2);
    add_object(create_objectcrystal_279(10925, 3530), 2);
    add_object(create_objectcrystal_279(10909, 3498), 2);
    add_object(create_objectcrystal_279(10893, 3570), 2);
    add_object(create_objectcrystal_279(10957, 3530), 2);
    add_object(create_objectcrystal_279(10989, 3530), 2);
    add_object(create_objectcrystal_279(10989, 3570), 2);
    add_object(create_objectcrystal_279(10973, 3498), 2);
    add_object(create_objectcrystal_279(11021, 3530), 2);
    add_object(create_objectcrystal_279(11053, 3570), 2);
    add_object(create_objectcrystal_279(11021, 3570), 2);
    add_object(create_objectcrystal_279(10941, 3498), 2);
    add_object(create_objectcrystal_279(10877, 3498), 2);
    add_object(create_objectcrystal_279(11005, 3498), 2);
    add_object(create_redspringleft_442(11232, 3568), 2);
    add_object(create_enemyiris_1183(10152, 2996), 2);
    add_object(create_enemyiris_1183(10792, 3484), 2);
    add_object(create_enemyiris_1183(11112, 3484), 2);
    add_object(create_objectcrystal_279(11525, 3130), 2);
    add_object(create_objectcrystal_279(11525, 3082), 2);
    add_object(create_objectcrystal_279(11509, 3106), 2);
    add_object(create_objectcrystal_279(11541, 3106), 2);
    add_object(create_enemyslug_1182(11751, 3164), 2);
    add_object(create_levelmovingplatform01_1404(11768, 3128), 2);
    add_object(create_gimmickrisingswing_1405(12006, 2950), 2);
    add_object(create_objectcrystal_279(11957, 3202), 2);
    add_object(create_objectcrystal_279(11981, 3202), 2);
    add_object(create_objectcrystal_279(12005, 3202), 2);
    add_object(create_objectcrystal_279(11981, 3178), 2);
    add_object(create_objectcrystal_279(12005, 3178), 2);
    add_object(create_objectcrystal_279(12005, 3154), 2);
    add_object(create_gimmickrisingswingpiece_1406(12002, 2978), 2);
    add_object(create_gimmickrisingswingpiece_1406(12002, 3002), 2);
    add_object(create_gimmickrisingswingpiece_1406(12002, 3026), 2);
    add_object(create_gimmickrisingswingpiece_1406(12002, 3050), 2);
    add_object(create_gimmickmovingpillar1_1407(11008, 2416), 2);
    add_object(create_gimmickmovingpillar2_1408(11008, 2448), 2);
    add_object(create_gimmickmovingpillar3_1409(11008, 2512), 2);
    add_object(create_gimmickmovingpillar1_1407(10960, 2416), 2);
    add_object(create_gimmickmovingpillar3_1409(10960, 2480), 2);
    add_object(create_gimmickmovingpillar1_1407(10912, 2416), 2);
    add_object(create_gimmickmovingpillar3_1409(10912, 2448), 2);
    add_object(create_gimmickhangingidleswitch_1257(10793, 2520), 2);
    add_object(create_gimmickhangingswitch_1381(11296, 2456), 2);
    add_object(create_gimmickhangingidleswitch_1257(11297, 2456), 2);
    add_object(create_gimmickmovingpillar1_1407(11456, 2488), 2);
    add_object(create_gimmickmovingpillar2_1408(11456, 2584), 2);
    add_object(create_gimmickmovingpillar3_1409(11456, 2648), 2);
    add_object(create_gimmickmovingpillar1_1407(11408, 2552), 2);
    add_object(create_gimmickmovingpillar3_1409(11408, 2648), 2);
    add_object(create_gimmickmovingpillar1_1407(11360, 2616), 2);
    add_object(create_gimmickmovingpillar3_1409(11360, 2648), 2);
    add_object(create_gimmickmovingpillar2_1408(11408, 2584), 2);
    add_object(create_gimmickmovingpillar2_1408(11456, 2520), 2);
    add_object(create_gimmickhangingswitch_1381(11560, 2640), 2);
    add_object(create_gimmickhangingidleswitch_1257(11561, 2640), 2);
    add_object(create_gimmickrisingswing_1405(11630, 2366), 2);
    add_object(create_gimmickrisingswingpiece_1406(11634, 2386), 2);
    add_object(create_gimmickrisingswingpiece_1406(11634, 2410), 2);
    add_object(create_gimmickrisingswingpiece_1406(11634, 2434), 2);
    add_object(create_gimmickrisingswingpiece_1406(11634, 2458), 2);
    add_object(create_gimmickmovingpillar1_1407(10816, 2416), 2);
    add_object(create_gimmickmovingpillar3_1409(10816, 2480), 2);
    add_object(create_gimmickmovingpillar1_1407(10864, 2416), 2);
    add_object(create_gimmickmovingpillar3_1409(10864, 2480), 2);
    add_object(create_yellowspringup_434(11280, 2672), 2);
    add_object(create_monitorcrystals_324(11296, 2232), 2);
    add_object(create_objectcrystal_279(11677, 2242), 2);
    add_object(create_objectcrystal_279(11677, 2210), 2);
    add_object(create_objectcrystal_279(11677, 2178), 2);
    add_object(create_objectcrystal_279(11709, 2178), 2);
    add_object(create_objectcrystal_279(11709, 2242), 2);
    add_object(create_objectcrystal_279(11741, 2242), 2);
    add_object(create_objectcrystal_279(11741, 2210), 2);
    add_object(create_objectcrystal_279(11741, 2178), 2);
    add_object(create_objectcrystal_279(11301, 2594), 2);
    add_object(create_objectcrystal_279(11293, 2562), 2);
    add_object(create_objectcrystal_279(11301, 2530), 2);
    add_object(create_objectcrystal_279(11293, 2498), 2);
    add_object(create_objectcrystal_279(11941, 2794), 2);
    add_object(create_objectcrystal_279(11909, 2818), 2);
    add_object(create_objectcrystal_279(11885, 2850), 2);
    add_object(create_cavesoilcraterfront_1410(10400, 2832), 2);
    add_object(create_cavesoilcraterfront_1410(9008, 2784), 2);
    add_object(create_cavesoilcraterfront_1410(9232, 2784), 2);
    add_object(create_cavesoilcraterfront2_1411(11320, 3064), 2);
    add_object(create_objectcodec_354(7450, 1925), 2);
    add_object(create_monitorinvincibility_408(10928, 3568), 2);
    add_object(create_shieldflameback_315(-96, 344), 2);
    add_object(create_shieldwood_313(-140, 332), 2);
    add_object(create_shieldearth_314(-132, 340), 2);
    add_object(create_shieldmagnetic_317(-76, 348), 2);
    add_object(create_shieldflamefront_316(-116, 348), 2);
    add_object(create_shieldwater_318(-84, 332), 2);
    add_object(create_objectjumppad_1380(3800, 320), 2);
    add_object(create_objectjumppad_1380(3656, 512), 2);
    add_object(create_objectjumppad_1380(3336, 512), 2);
    add_object(create_objectjumppad_1380(2960, 512), 2);
    add_object(create_objectjumppad_1380(2592, 512), 2);
    add_object(create_objectjumppad_1380(2224, 512), 2);
    add_object(create_objectjumppad_1380(1856, 512), 2);
    add_object(create_objectjumppad_1380(1488, 512), 2);
    add_object(create_objectjumppad_1380(1120, 512), 2);
    add_object(create_hazardspikesright_1194(6720, 616), 2);
    add_object(create_levelfloatingplatform3_1412(4568, 560), 2);
    add_object(create_levelfloatingplatform3_1412(5080, 560), 2);
    add_object(create_levelfloatingplatform3_1412(5400, 560), 2);
    add_object(create_levelfloatingplatform3_1412(5528, 560), 2);
    add_object(create_levelfloatingplatform3_1412(6560, 480), 2);
    add_object(create_levelfloatingplatform3_1412(6448, 480), 2);
    add_object(create_levelfloatingplatform3_1412(6504, 480), 2);
    add_object(create_levelfloatingplatform2_1387(5208, 560), 2);
    add_object(create_gimmickhangingidlesensor_740(9369, 3296), 2);
    add_object(create_yellowspringup_434(10000, 3208), 2);
    add_object(create_levelminetrackswitch_1413(5375, 1672), 2);
    add_object(create_levelminetrackswitch_1413(5015, 1840), 2);
    add_object(create_levelhandcarhandle_1414(984, 1644), 2);
    add_object(create_levelhandcar_1415(984, 1684), 2);
    add_object(create_levelhandcartop_1416(984, 1664), 2);
    add_object(create_levelhandcarfloor1_1417(956, 1684), 2);
    add_object(create_levelhandcarfloor2_1418(1012, 1684), 2);
    add_object(create_levelhandcarfloor3_1419(1028, 1668), 2);
    add_object(create_rmalternatepath_1420(832, 512), 2);
    add_object(create_rmalternatepath2_1379(1064, 360), 2);
    add_object(create_switchwallplate_1167(5600, 1624), 2);
    add_object(create_switchwallplate2_1421(2768, 2256), 2);
    add_object(create_breakablerock_951(-168, 1648), 2);
    add_object(create_breakablerock2_1007(-128, 1616), 2);
    add_object(create_hazardspikesup_1172(2080, 1944), 2);
    add_object(create_hazardspikesup_1172(2112, 1944), 2);
    add_object(create_hazardspikesup_1172(2144, 1944), 2);
    add_object(create_hazardspikesup_1172(2176, 1944), 2);
    add_object(create_hazardspikesup_1172(2208, 1944), 2);
    add_object(create_hazardspikesup_1172(2240, 1944), 2);
    add_object(create_hazardspikesup_1172(2016, 1944), 2);
    add_object(create_hazardspikesup_1172(2048, 1944), 2);
    add_object(create_hazardspikesup_1172(1888, 1944), 2);
    add_object(create_hazardspikesup_1172(1920, 1944), 2);
    add_object(create_hazardspikesup_1172(1952, 1944), 2);
    add_object(create_hazardspikesup_1172(1984, 1944), 2);
    add_object(create_hazardspikesup_1172(2272, 1944), 2);
    add_object(create_hazardspikesup_1172(2304, 1944), 2);
    add_object(create_hazardspikesup_1172(2336, 1944), 2);
    add_object(create_hazardspikesup_1172(2368, 1944), 2);
    add_object(create_hazardspikesup_1172(2400, 1944), 2);
    add_object(create_hazardspikesup_1172(2432, 1944), 2);
    add_object(create_hazardspikesup_1172(2464, 1944), 2);
    add_object(create_hazardspikesup_1172(2496, 1944), 2);
    add_object(create_hazardspikesup_1172(2528, 1944), 2);
    add_object(create_hazardspikesup_1172(2560, 1944), 2);
    add_object(create_hazardspikesup_1172(2592, 1944), 2);
    add_object(create_hazardspikesup_1172(2624, 1944), 2);
    add_object(create_hazardspikesup_1172(2656, 1944), 2);
    add_object(create_hazardspikesup_1172(2688, 1944), 2);
    add_object(create_hazardspikesup_1172(5008, 1640), 2);
    add_object(create_hazardspikesup_1172(5040, 1640), 2);
    add_object(create_hazardspikesup_1172(5072, 1640), 2);
    add_object(create_hazardspikesup_1172(7008, 1944), 2);
    add_object(create_hazardspikesup_1172(6976, 1944), 2);
    add_object(create_hazardspikesup_1172(6944, 1944), 2);
    add_object(create_hazardspikesup_1172(6912, 1944), 2);
    add_object(create_hazardspikesup_1172(6880, 1944), 2);
    add_object(create_hazardspikesup_1172(6848, 1944), 2);
    add_object(create_hazardspikesup_1172(6816, 1944), 2);
    add_object(create_hazardspikesup_1172(6784, 1944), 2);
    add_object(create_hazardspikesup_1172(6752, 1944), 2);
    add_object(create_hazardspikesup_1172(6720, 1944), 2);
    add_object(create_objectcrystal_279(181, 1634), 2);
    add_object(create_objectcrystal_279(221, 1634), 2);
    add_object(create_objectcrystal_279(101, 1666), 2);
    add_object(create_objectcrystal_279(141, 1666), 2);
    add_object(create_objectcrystal_279(101, 1634), 2);
    add_object(create_objectcrystal_279(141, 1634), 2);
    add_object(create_objectcrystal_279(261, 1634), 2);
    add_object(create_objectcrystal_279(301, 1634), 2);
    add_object(create_objectcrystal_279(181, 1666), 2);
    add_object(create_objectcrystal_279(221, 1666), 2);
    add_object(create_objectcrystal_279(261, 1666), 2);
    add_object(create_objectcrystal_279(301, 1666), 2);
    add_object(create_objectcrystal_279(1245, 1650), 2);
    add_object(create_objectcrystal_279(1309, 1650), 2);
    add_object(create_objectcrystal_279(1373, 1650), 2);
    add_object(create_objectcrystal_279(1437, 1650), 2);
    add_object(create_objectcrystal_279(3005, 1778), 2);
    add_object(create_objectcrystal_279(3053, 1778), 2);
    add_object(create_objectcrystal_279(3101, 1778), 2);
    add_object(create_objectcrystal_279(3149, 1778), 2);
    add_object(create_objectcrystal_279(2957, 1786), 2);
    add_object(create_objectcrystal_279(2917, 1810), 2);
    add_object(create_objectcrystal_279(2877, 1850), 2);
    add_object(create_objectcrystal_279(2837, 1890), 2);
    add_object(create_objectcrystal_279(3197, 1794), 2);
    add_object(create_objectcrystal_279(3245, 1818), 2);
    add_object(create_objectcrystal_279(3293, 1866), 2);
    add_object(create_objectcrystal_279(3349, 1914), 2);
    add_object(create_objectcrystal_279(3437, 1914), 2);
    add_object(create_objectcrystal_279(3501, 1858), 2);
    add_object(create_objectcrystal_279(3549, 1810), 2);
    add_object(create_objectcrystal_279(3597, 1762), 2);
    add_object(create_objectcrystal_279(3645, 1722), 2);
    add_object(create_objectcrystal_279(3709, 1706), 2);
    add_object(create_objectcrystal_279(3765, 1714), 2);
    add_object(create_objectcrystal_279(3813, 1714), 2);
    add_object(create_objectcrystal_279(3861, 1714), 2);
    add_object(create_objectcrystal_279(3909, 1714), 2);
    add_object(create_objectcrystal_279(3965, 1714), 2);
    add_object(create_objectcrystal_279(4021, 1730), 2);
    add_object(create_objectcrystal_279(4069, 1754), 2);
    add_object(create_objectcrystal_279(4117, 1778), 2);
    add_object(create_objectcrystal_279(4189, 1778), 2);
    add_object(create_objectcrystal_279(4261, 1778), 2);
    add_object(create_objectcrystal_279(4349, 1770), 2);
    add_object(create_objectcrystal_279(4429, 1770), 2);
    add_object(create_objectcrystal_279(4509, 1770), 2);
    add_object(create_objectcrystal_279(4589, 1770), 2);
    add_object(create_objectcrystal_279(5013, 1802), 2);
    add_object(create_objectcrystal_279(5053, 1778), 2);
    add_object(create_objectcrystal_279(5101, 1754), 2);
    add_object(create_objectcrystal_279(3853, 2210), 2);
    add_object(create_objectcrystal_279(3821, 2170), 2);
    add_object(create_objectcrystal_279(3781, 2130), 2);
    add_object(create_objectcrystal_279(3733, 2106), 2);
    add_object(create_objectcrystal_279(3685, 2098), 2);
    add_object(create_objectcrystal_279(3629, 2106), 2);
    add_object(create_objectcrystal_279(3581, 2106), 2);
    add_object(create_objectcrystal_279(3517, 2106), 2);
    add_object(create_objectcrystal_279(3453, 2106), 2);
    add_object(create_objectcrystal_279(3389, 2106), 2);
    add_object(create_objectcrystal_279(2925, 2258), 2);
    add_object(create_objectcrystal_279(2957, 2258), 2);
    add_object(create_objectcrystal_279(2989, 2258), 2);
    add_object(create_objectcrystal_279(3021, 2258), 2);
    add_object(create_objectcrystal_279(3053, 2258), 2);
    add_object(create_objectcrystal_279(3085, 2258), 2);
    add_object(create_objectcrystal_279(4957, 1914), 2);
    add_object(create_objectcrystal_279(4893, 1914), 2);
    add_object(create_objectcrystal_279(5021, 1914), 2);
    add_object(create_objectcrystal_279(5085, 1914), 2);
    add_object(create_objectcrystal_279(5157, 1906), 2);
    add_object(create_objectcrystal_279(5205, 1882), 2);
    add_object(create_objectcrystal_279(5253, 1858), 2);
    add_object(create_objectcrystal_279(5309, 1850), 2);
    add_object(create_objectcrystal_279(5389, 1842), 2);
    add_object(create_objectcrystal_279(5461, 1810), 2);
    add_object(create_objectcrystal_279(5533, 1778), 2);
    add_object(create_objectcrystal_279(5597, 1778), 2);
    add_object(create_objectcrystal_279(5925, 1938), 2);
    add_object(create_objectcrystal_279(5957, 1938), 2);
    add_object(create_objectcrystal_279(5989, 1938), 2);
    add_object(create_objectcrystal_279(6021, 1938), 2);
    add_object(create_objectcrystal_279(6053, 1938), 2);
    add_object(create_objectcrystal_279(6301, 1786), 2);
    add_object(create_objectcrystal_279(6333, 1786), 2);
    add_object(create_objectcrystal_279(6365, 1786), 2);
    add_object(create_objectcrystal_279(6397, 1786), 2);
    add_object(create_objectcrystal_279(6429, 1786), 2);
    add_object(create_monitorrings_407(7144, 1912), 2);
    add_object(create_objectcrystal_279(3885, 2242), 2);
    add_object(create_objectcrystal_279(3917, 2274), 2);
    add_object(create_objectcrystal_279(3949, 2306), 2);
    add_object(create_objectcrystal_279(3997, 2322), 2);
    add_object(create_objectcrystal_279(4045, 2306), 2);
    add_object(create_objectcrystal_279(4077, 2274), 2);
    add_object(create_objectcrystal_279(4109, 2242), 2);
    add_object(create_objectcrystal_279(4141, 2210), 2);
    add_object(create_objectcrystal_279(4173, 2178), 2);
    add_object(create_objectcrystal_279(4205, 2146), 2);
    add_object(create_objectcrystal_279(4237, 2114), 2);
    add_object(create_objectcrystal_279(4269, 2082), 2);
    add_object(create_objectcrystal_279(4301, 2050), 2);
    add_object(create_objectcrystal_279(4333, 2018), 2);
    add_object(create_objectcrystal_279(4365, 1986), 2);
    add_object(create_objectcrystal_279(4397, 1954), 2);
    add_object(create_objectcrystal_279(4445, 1930), 2);
    add_object(create_objectcrystal_279(4509, 1914), 2);
    add_object(create_objectcrystal_279(4573, 1914), 2);
    add_object(create_objectcrystal_279(4637, 1914), 2);
    add_object(create_objectpetal_302(953, 1649), 2);
    add_object(create_monitorcrate_409(4744, 568), 2);
    add_object(create_monitorcrate_409(5128, 528), 2);
    add_object(create_levelfloatingplatform3_1412(6552, 600), 2);
    add_object(create_levelfloatingplatform3_1412(6640, 560), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_mapdata_30(-432, 232), 2);
    add_object(create_mapdata2_32(-432, 240), 2);
    add_background_object(create_rmbrick1_1121(-64, 384), 3);
    add_background_object(create_rmentrywayleft3_1263(64, 384), 3);
    add_background_object(create_levelparallaxpiece5_1422(4032, 664), 3);
    add_background_object(create_rmplant2_1190(7248, 512), 3);
    add_background_object(create_rmplant2_1190(7072, 480), 3);
    add_background_object(create_rmplant1_1139(7224, 536), 3);
    add_background_object(create_rmplant1_1139(7192, 520), 3);
    add_background_object(create_rmplant1_1139(7032, 464), 3);
    add_background_object(create_rmplant1_1139(7056, 448), 3);
    add_background_object(create_rmplant1_1139(7360, 608), 3);
    add_background_object(create_rmplant2_1190(7376, 576), 3);
    add_background_object(create_rmplant2_1190(7480, 640), 3);
    add_background_object(create_rmplant2_1190(7600, 632), 3);
    add_background_object(create_rmplant2_1190(7792, 720), 3);
    add_background_object(create_rmplant1_1139(7712, 656), 3);
    add_background_object(create_rmplant1_1139(7752, 704), 3);
    add_background_object(create_rmplant1_1139(7752, 664), 3);
    add_background_object(create_rmplant1_1139(7728, 680), 3);
    add_background_object(create_rmplant2_1190(8024, 728), 3);
    add_background_object(create_rmplant2_1190(7904, 680), 3);
    add_background_object(create_rmplant1_1139(7960, 744), 3);
    add_background_object(create_rmplant1_1139(7912, 760), 3);
    add_background_object(create_rmplant1_1139(8072, 696), 3);
    add_background_object(create_gimmickspinnycupaxle_1423(9672, 3064), 3);
    add_background_object(create_cavesoil11_1313(8992, 2808), 3);
    add_background_object(create_cavesoil14_1314(11344, 3184), 3);
    add_background_object(create_cavesoil12_1350(12016, 3120), 3);
    add_background_object(create_cavesoil1_1310(11776, 3232), 3);
    add_background_object(create_cavesoil8_1315(11776, 3216), 3);
    add_background_object(create_cavesoil8_1315(11840, 3216), 3);
    add_background_object(create_cavesoil8_1315(11904, 3216), 3);
    add_background_object(create_cavesoil11_1313(11688, 3232), 3);
    add_background_object(create_cavesoil3_1339(10688, 2448), 3);
    add_background_object(create_cavesoil19_1308(11504, 2456), 3);
    add_background_object(create_cavesoil2_1338(11520, 2456), 3);
    add_background_object(create_cavesoil3_1339(11200, 2384), 3);
    add_background_object(create_cavesoil20_1348(11504, 2584), 3);
    add_background_object(create_cavesoil11_1313(11512, 2480), 3);
    add_background_object(create_cavesoil3_1339(11520, 2576), 3);
    add_background_object(create_rmbluecrystal1_1306(11704, 2792), 3);
    add_background_object(create_cavesoil8_1315(11704, 2848), 3);
    add_background_object(create_rmbluecrystal2_1301(10232, 2816), 3);
    add_background_object(create_cavesoil8_1315(10232, 2872), 3);
    add_background_object(create_cavesoil1_1310(7952, 2744), 3);
    add_background_object(create_cavesoil2_1338(7952, 2728), 3);
    add_background_object(create_cavesoil1_1310(8080, 2744), 3);
    add_background_object(create_cavesoil2_1338(8080, 2728), 3);
    add_background_object(create_cavesoil1_1310(8080, 2872), 3);
    add_background_object(create_cavesoil1_1310(7952, 2872), 3);
    add_background_object(create_rmbrick2_1108(0, 512), 3);
    add_background_object(create_rmbrick5_1136(64, 512), 3);
    add_background_object(create_caravanplatform15_1424(6512, 440), 3);
    add_background_object(create_separatormasterobjects_372(-176, -32), 5);
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
    add_object(create_monitorwoodshield_325(-216, 112), 5);
    add_object(create_monitorearthshield_326(-216, 144), 5);
    add_object(create_monitorinvincibility_408(-248, 176), 5);
    add_object(create_monitoricon_331(-248, -13), 5);
    add_object(create_monitorcrate_409(-248, 208), 5);
    add_object(create_monitor1up_410(-248, 240), 5);
    add_object(create_monitorbomb_563(-248, 272), 5);
    add_object(create_effectsdust01_332(-383, 25), 5);
    add_object(create_hazardspikesup_1172(-208, 392), 5);
    add_object(create_hazardspikesdown_1192(-168, 392), 5);
    add_object(create_hazardspikesleft_1193(-128, 392), 5);
    add_object(create_hazardspikesright_1194(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_generalwater_414(-584, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(928, 535), 5);
    add_object(create_cameralimitbossleft_421(768, 416), 5);
    add_object(create_cameralimitbossright_422(1087, 416), 5);
    add_object(create_cameralimitbosstop_423(928, 224), 5);
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
    add_object(create_objectbike_322(-216, 320), 5);
    add_object(create_playerreflect_447(-64, 224), 5);
    add_object(create_playerdig_448(-48, 234), 5);
    add_object(create_playerskintorquearm_449(-96, 224), 5);
    add_object(create_playerskintorque_450(-68, 273), 5);
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_windowcontrol_27(-432, 200), 5);
    add_object(create_recorddata_34(-432, 248), 5);
    add_object(create_guiscoretimerings_451(8, 8), 6);
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
    add_object(create_guikeystone_455(216, -40), 6);
    add_object(create_guikeystone_455(200, -40), 6);
    add_object(create_guikeystone_455(184, -40), 6);
    add_object(create_guikeystone_455(168, -40), 6);
    add_object(create_guikeystone_455(152, -40), 6);
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
    add_object(create_levelcardintro1_464(16, -240), 7);
    add_object(create_levelcardintro2_761(0, 248), 7);
    add_object(create_levelcardintro3_760(0, 248), 7);
    add_object(create_levelcardgameover_462(0, 256), 7);
    add_object(create_guilifebasemeter_125(0, 0), 7);
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
    loop_spark_down_running = false;
    loop_spark_down_index = 0;
    loop_iterate_pushables_running = false;
    loop_iterate_pushables_index = 0;
    loop_death_running = false;
    loop_death_index = 0;
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
    loop_cart_floorcheck_running = false;
    loop_cart_floorcheck_index = 0;
    loop_sound_idle5_running = false;
    loop_sound_idle5_index = 0;
    loop_restart_running = false;
    loop_restart_index = 0;
    loop_trigger_deactivate_boss_running = false;
    loop_trigger_deactivate_boss_index = 0;
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
    loop_destroy_wall_running = false;
    loop_destroy_wall_index = 0;
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
    loop_slug_running = false;
    loop_slug_index = 0;
    loop_process_call_fadein_music_running = false;
    loop_process_call_fadein_music_index = 0;
    loop_process_call_lock_music_running = false;
    loop_process_call_lock_music_index = 0;
    loop_process_call_unqueue_music_running = false;
    loop_process_call_unqueue_music_index = 0;
    loop_risingswing_running = false;
    loop_risingswing_index = 0;
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
    loop_ceiling_crush_running = false;
    loop_ceiling_crush_index = 0;
    loop_next_act_running = false;
    loop_next_act_index = 0;
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
    loop_return_running = false;
    loop_return_index = 0;
    loop_spawn_crystals_running = false;
    loop_spawn_crystals_index = 0;
    loop_player01detectsensorslope_running = false;
    loop_player01detectsensorslope_index = 0;
    loop_start_player_running = false;
    loop_start_player_index = 0;
    loop_cutscene_start_running = false;
    loop_cutscene_start_index = 0;
    loop_slug_floor_running = false;
    loop_slug_floor_index = 0;
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
    loop_process_call_reset_music_running = false;
    loop_process_call_reset_music_index = 0;
    loop_spark_up_running = false;
    loop_spark_up_index = 0;
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
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_26, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_26, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_26, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_26, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_26, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_26, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_26, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_26, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_26, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_26, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_26, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_26, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_26, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_26, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_26, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_26, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_26, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_26, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_26, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_26, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_26, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_26, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_26, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_26, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_26, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_26, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_26, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_26, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_26, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_26, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_26, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_26, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_26, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_26, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_26, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_26, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_26, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_26, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_26, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_26, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_26, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_26, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_26, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_26, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_26, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_26, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_26, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_26, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_26, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_26, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_26, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_26, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_26, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_26, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_1502_26 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_claw_emerge_1 = false;
    not_always_1771_26 = loop_count;
    not_always_1388_13 = loop_count;
    not_always_44_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    once_condition_56_13 = false;
    once_condition_1786_26 = false;
    once_condition_38_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_554_13 = loop_count;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_449_13 = loop_count;
    not_always_97_0 = loop_count;
    not_always_1449_13 = loop_count;
    not_always_1458_13 = loop_count;
    not_always_1457_13 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    not_always_1390_26 = loop_count;
    not_always_1425_13 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_engine_explode_1 = false;
    not_always_1037_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    once_condition_1695_26 = false;
    every_1704_26 = 0.0f;
    not_always_1408_23 = loop_count;
    once_condition_36_13 = false;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_100_0 = loop_count;
    not_always_43_13 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_main_1 = true;
    not_always_1420_13 = loop_count;
    not_always_1392_26 = loop_count;
    not_always_121_0 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1033_13 = loop_count;
    once_condition_1828_16 = false;
    group_main_engine_level_specific_methods_bosses_boss_claw_standby_1 = false;
    not_always_173_8 = loop_count;
    once_condition_63_13 = false;
    not_always_600_13 = loop_count;
    once_condition_54_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_814_13 = loop_count;
    once_condition_1794_26 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    once_condition_1793_26 = false;
    once_condition_1680_26 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_96_0 = loop_count;
    not_always_130_0 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_claw_grab_attack_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    not_always_308_13 = loop_count;
    group_sound_events_milla_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_1655_25 = loop_count;
    not_always_46_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    group_main_engine_level_specific_methods_bosses_boss_claw_basics_1 = true;
    not_always_1832_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    not_always_1473_26 = loop_count;
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
    once_condition_1696_26 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_422_13 = loop_count;
    not_always_1295_13 = loop_count;
    not_always_522_13 = loop_count;
    once_condition_64_13 = false;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    group_main_engine_level_specific_methods_bosses_1 = true;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    not_always_1034_13 = loop_count;
    not_always_1739_14 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_claw_defeated_1 = false;
    not_always_558_13 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_1422_13 = loop_count;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    group_main_engine_level_specific_methods_cutscenes_claw_appears_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    not_always_45_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_57_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_450_13 = loop_count;
    not_always_1394_26 = loop_count;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    not_always_1831_16 = loop_count;
    not_always_1548_25 = loop_count;
    once_condition_138_0 = false;
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
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    once_condition_1682_26 = false;
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
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    not_always_1421_13 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_70_13 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    not_always_1393_26 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_claw_laser_attack_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_174_8 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    once_condition_66_13 = false;
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1 = true;
    not_always_1405_21 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    not_always_69_13 = loop_count;
    not_always_1039_13 = loop_count;
    not_always_95_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    not_always_809_13 = loop_count;
    once_condition_48_13 = false;
    not_always_103_0 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    group_sound_events_carol_1 = false;
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1 = false;
    every_819_13 = 0.0f;
    not_always_540_13 = loop_count;
    group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_744_13 = loop_count;
    not_always_1038_13 = loop_count;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_level_specific_methods_cutscenes_caravan_section_1 = false;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    once_condition_50_13 = false;
    once_condition_37_13 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    once_condition_55_13 = false;
    once_condition_35_13 = false;
    not_always_68_13 = loop_count;
    not_always_1472_26 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    not_always_1388_26 = loop_count;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_5900()
{
    // event 1485_27
    {
        if (!(group_main_engine_1)) goto event_1485_27_end;
        gimmickdrillplatform_1503_instances.clear_selection();
        for (ObjectIterator it(gimmickdrillplatform_1503_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
        }
        if (!gimmickdrillplatform_1503_instances.has_selection()) goto event_1485_27_end;
        for (ObjectIterator it(gimmickdrillplatform_1503_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+10);
            ((Active*)*it)->alterables->values.add(0, 10);
        }
    }
    event_1485_27_end: ;
}
void Frames::event_func_5901()
{
    // event 1486_27
    {
        if (!(group_main_engine_1)) goto event_1486_27_end;
        gimmickdrillplatform_1503_instances.clear_selection();
        for (ObjectIterator it(gimmickdrillplatform_1503_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!gimmickdrillplatform_1503_instances.has_selection()) goto event_1486_27_end;
        breakableruins_1184_instances.clear_selection();
        for (ObjectIterator it(breakableruins_1184_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_single(gimmickdrillplatform_1503_instances, default_active_instance))->get_x()+30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_single(gimmickdrillplatform_1503_instances, default_active_instance))->get_x()-70))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_single(gimmickdrillplatform_1503_instances, default_active_instance))->get_box_index(3)-32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_single(gimmickdrillplatform_1503_instances, default_active_instance))->get_box_index(3)-64))) { it.deselect(); continue; }
        }
        if (!breakableruins_1184_instances.has_selection()) goto event_1486_27_end;
        for (ObjectIterator it(breakableruins_1184_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 0);
            ((Active*)*it)->alterables->values.set(24, -4-randrange(4));
            ((Active*)*it)->alterables->flags.enable(6);
        }
        for (ObjectIterator it(gimmickdrillplatform_1503_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 3);
        }
        for (ObjectIterator it(breakableruins_1184_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(7);
        }
    }
    event_1486_27_end: ;
}
void Frames::event_func_5902()
{
    // event 1487_27
    {
        if (!(group_main_engine_1)) goto event_1487_27_end;
        gimmickdrillplatform_1503_instances.clear_selection();
        for (ObjectIterator it(gimmickdrillplatform_1503_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!gimmickdrillplatform_1503_instances.has_selection()) goto event_1487_27_end;
        breakableruins_1184_instances.clear_selection();
        for (ObjectIterator it(breakableruins_1184_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_single(gimmickdrillplatform_1503_instances, default_active_instance))->get_x()+30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_single(gimmickdrillplatform_1503_instances, default_active_instance))->get_x()-70))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) <= (((Active*)get_single(gimmickdrillplatform_1503_instances, default_active_instance))->get_box_index(3)-64))) { it.deselect(); continue; }
        }
        if (!breakableruins_1184_instances.has_selection()) goto event_1487_27_end;
        for (ObjectIterator it(breakableruins_1184_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1487_27_end: ;
}
void Frames::event_func_5903()
{
    // event 1488_27
    {
        if (!(group_main_engine_1)) goto event_1488_27_end;
        gimmickdrillplatform_1503_instances.clear_selection();
        for (ObjectIterator it(gimmickdrillplatform_1503_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!gimmickdrillplatform_1503_instances.has_selection()) goto event_1488_27_end;
        for (ObjectIterator it(gimmickdrillplatform_1503_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(2, 1);
        }
    }
    event_1488_27_end: ;
}
void Frames::event_func_5904()
{
    // event 1489_27
    {
        if (!(group_main_engine_1)) goto event_1489_27_end;
        gimmickdrillplatform_1503_instances.clear_selection();
        for (ObjectIterator it(gimmickdrillplatform_1503_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (1440))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!gimmickdrillplatform_1503_instances.has_selection()) goto event_1489_27_end;
        for (ObjectIterator it(gimmickdrillplatform_1503_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+6, 6));
        redspringup_440_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(gimmickdrillplatform_1503_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_redspringup_440(parent->x + -40, parent->y + -16), parent->layer);
                redspringup_440_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_redspringup_440(parent->x + 8, parent->y + -16), parent->layer);
                redspringup_440_instances.add_back();
            }
        }
        for (ObjectIterator it(gimmickdrillplatform_1503_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
    }
    event_1489_27_end: ;
}
void Frames::loop_drillplatform_27()
{
    event_func_5900();
    event_func_5901();
    event_func_5902();
    event_func_5903();
    event_func_5904();
}
void Frames::event_func_5905()
{
    // event 1674_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1674_27_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) > (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-150)) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto event_1674_27_end;
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 2);
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->alterables->values.set(13, -90);
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->alterables->values.set(15, 0);
        }
    }
    event_1674_27_end: ;
}
void Frames::event_func_5906()
{
    // event 1675_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1675_27_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto event_1675_27_end;
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1675_27_end: ;
}
void Frames::loop_bossganseki_floor_27()
{
    event_func_5905();
    event_func_5906();
}
void Frames::event_func_5907()
{
    // event 1612_27
    {
        if (!(group_main_engine_1)) goto event_1612_27_end;
        enemysentinel_1496_instances.clear_selection();
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (-1))) { it.deselect(); continue; }
        }
        if (!enemysentinel_1496_instances.has_selection()) goto event_1612_27_end;
        FrameObject * single_instance_1612_27_0; single_instance_1612_27_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysentinel_1496_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1612_27_0 == NULL)
                    single_instance_1612_27_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1612_27_0))->get_movement()->set_speed(50+randrange(30));
        ((Active*)((Active*)single_instance_1612_27_0))->force_frame(((Active*)get_single(enemysentinel_1496_instances, default_active_instance))->alterables->values.get(0)*-1+25);
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1612_27_end: ;
}
void Frames::loop_spawndebris_27()
{
    event_func_1176();
    event_func_1177();
    event_func_1178();
    event_func_5907();
    event_func_5583();
}
void Frames::event_func_5908()
{
    // event 1474_27
    {
        if (!(group_main_engine_1)) goto event_1474_27_end;
        gimmickrisingswingpiece_1406_instances.clear_selection();
        for (ObjectIterator it(gimmickrisingswingpiece_1406_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_risingswing_index))) { it.deselect(); continue; }
        }
        if (!gimmickrisingswingpiece_1406_instances.has_selection()) goto event_1474_27_end;
        if (!((((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->values.get(17)) == (((Active*)get_single(gimmickrisingswingpiece_1406_instances, default_active_instance))->alterables->values.get(1)))) goto event_1474_27_end;
        for (ObjectIterator it(gimmickrisingswingpiece_1406_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, ((((Active*)get_instance(gimmickrisingswing_1405_instances))->get_x()-((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->values.get(8))-((Active*)*it)->alterables->values.get(22)-(((Active*)*it)->alterables->values.get(22)*1.0*4))/math_helper/(4+1));
            ((Active*)*it)->set_x((((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->values.get(8)+((Active*)*it)->alterables->values.get(18)+((Active*)*it)->alterables->values.get(22))+(((Active*)*it)->alterables->values.get(8)*(((Active*)*it)->alterables->values.get(18)+((Active*)*it)->alterables->values.get(22))));
            ((Active*)*it)->alterables->values.set(19, ((((Active*)get_instance(gimmickrisingswing_1405_instances))->get_y()-((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->values.get(9))-((Active*)*it)->alterables->values.get(22)-(((Active*)*it)->alterables->values.get(22)*1.0*4))/math_helper/(4+1));
            ((Active*)*it)->set_y((((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->values.get(9)+((Active*)*it)->alterables->values.get(19)+((Active*)*it)->alterables->values.get(22))+(((Active*)*it)->alterables->values.get(8)*(((Active*)*it)->alterables->values.get(19)+((Active*)*it)->alterables->values.get(22))));
        }
    }
    event_1474_27_end: ;
}
void Frames::loop_risingswing_27()
{
    event_func_5908();
}
void Frames::event_func_5909()
{
    // event 1894_27
    {
        if (!(group_main_engine_1)) goto event_1894_27_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_stage2b_ogg_139, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1894_27_end: ;
}
void Frames::loop_play_music_5_27()
{
    event_func_5909();
}
void Frames::loop_wrapper_sound_hurt1_27(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_27(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_27(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_27(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_27(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_27(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_process_call_resume_music_27(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_sound_idle7_27(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_27(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_13();
}
void Frames::loop_wrapper_sound_dig2_27(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_27(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_27(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_27(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_sound_explode5_27(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_27(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_process_call_unlock_music_27(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_27(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_sound_explode8_27(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_process_call_reset_music_27(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_27(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_27(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_27(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_explode0_27(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_27(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_27(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_camera_mode1_27(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_13();
}
void Frames::loop_wrapper_camera_mode0_27(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_13();
}
void Frames::loop_wrapper_process_call_play_music_27(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_27(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_13();
}
void Frames::loop_wrapper_sound_attack1_27(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_27(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_27(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_27(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_play_music_8_27(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_uppercut3_27(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_27(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_27(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_27(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_27(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_27(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_27(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_27(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_27(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_13();
}
void Frames::loop_wrapper_play_music_5_27(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_27();
}
void Frames::loop_wrapper_play_music_6_27(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_27();
}
void Frames::loop_wrapper_sound_go0_27(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_unqueue_music_27(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_process_call_me_27(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_27(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_27();
}
void Frames::loop_wrapper_sound_explode3_27(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_cyclone0_27(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_sound_explode2_27(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_27(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_process_call_stop_music_27(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
