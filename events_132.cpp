#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_10690()
{
    // event 2330_43
    {
        if (!(group_main_engine_1)) goto event_2330_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2330_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (20))) goto event_2330_43_end;
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1073741824))) { it.deselect(); continue; }
        }
        if (!shieldinstashield_359_instances.has_selection()) goto event_2330_43_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 13)), 2, 13);
    }
    event_2330_43_end: ;
}
void Frames::event_func_10691()
{
    // event 2331_43
    {
        if (!(group_main_engine_1)) goto event_2331_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2331_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (20))) goto event_2331_43_end;
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(16384))) { it.deselect(); continue; }
        }
        if (!shieldinstashield_359_instances.has_selection()) goto event_2331_43_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 13)), 2, 13);
    }
    event_2331_43_end: ;
}
void Frames::event_func_10692()
{
    // event 2332_43
    {
        if (!(group_main_engine_1)) goto event_2332_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2332_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_2332_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (21))) goto event_2332_43_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 10)), 2, 10);
    }
    event_2332_43_end: ;
}
void Frames::event_func_10693()
{
    // event 2333_43
    {
        if (!(group_main_engine_1)) goto event_2333_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2333_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_2333_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (26))) goto event_2333_43_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 11)), 2, 11);
    }
    event_2333_43_end: ;
}
void Frames::event_func_10694()
{
    // event 2334_43
    {
        if (!(group_main_engine_1)) goto event_2334_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2334_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (44))) goto event_2334_43_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 14)), 2, 14);
    }
    event_2334_43_end: ;
}
void Frames::event_func_10695()
{
    // event 2335_43
    {
        if (!(group_main_engine_1)) goto event_2335_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2335_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2335_43_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 16)), 2, 16);
    }
    event_2335_43_end: ;
}
void Frames::event_func_10696()
{
    // event 2336_43
    {
        if (!(group_main_engine_1)) goto event_2336_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2336_43_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2336_43_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 17)), 2, 17);
    }
    event_2336_43_end: ;
}
void Frames::event_func_10697()
{
    // event 2566_43
    {
        if (!(group_main_engine_1)) goto event_2566_43_end;
        ((Active*)get_instance(levelparalaxwatersurface_7_instances))->alterables->values.set(2, (((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->get_y()+270-((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1))/math_helper/70.0001);
        ((Active*)get_instance(levelparalaxwatersurface_7_instances))->set_x(frame_left());
    }
    event_2566_43_end: ;
}
void Frames::event_func_10698()
{
    // event 2572_43
    {
        if (!(group_pause_1)) goto event_2572_43_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_2572_43_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2572_43_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_2572_43_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_2572_43_end;
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
        effectfallingleaf_2323_instances.clear_selection();
        for (ObjectIterator it(effectfallingleaf_2323_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectwhisp_656_instances.clear_selection();
        for (ObjectIterator it(effectwhisp_656_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerassistmilla_2558_instances))->stop_animation();
        ((Active*)get_instance(playerassistcarol_2559_instances))->stop_animation();
        ((Active*)get_instance(playerassistcaroltail_2553_instances))->stop_animation();
        ((Active*)get_instance(playerassistmillatail_2554_instances))->stop_animation();
        ((Active*)get_instance(playerassistfinisher_2561_instances))->stop_animation();
        ((Active*)get_instance(playerassistlilachair_2537_instances))->stop_animation();
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossgunshiplightleft_2531_instances.clear_selection();
        for (ObjectIterator it(bossgunshiplightleft_2531_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossgunshiplightright_2532_instances.clear_selection();
        for (ObjectIterator it(bossgunshiplightright_2532_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(levelparalaxwatersurface_7_instances))->stop_animation();
        ((Active*)get_instance(objectjumppad_530_instances))->stop_animation();
        minibossflame_1199_instances.clear_selection();
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossmissile_1835_instances.clear_selection();
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemylaser_1626_instances.clear_selection();
        for (ObjectIterator it(enemylaser_1626_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bosshovercopsiren4_2329_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren4_2329_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bosshovercopsiren3_2330_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren3_2330_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bosshovercop_2332_instances.clear_selection();
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bosshovercopsiren1_2336_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren1_2336_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bosshovercopsiren2_2337_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren2_2337_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        levelhovercraftlight_2451_instances.clear_selection();
        for (ObjectIterator it(levelhovercraftlight_2451_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemybuoybullet2_2326_instances.clear_selection();
        for (ObjectIterator it(enemybuoybullet2_2326_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemybuoybullet_2325_instances.clear_selection();
        for (ObjectIterator it(enemybuoybullet_2325_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        mediumbubble_769_instances.clear_selection();
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bubblepatch_806_instances))->stop_animation();
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
        shieldserpentine_1868_instances.clear_selection();
        for (ObjectIterator it(shieldserpentine_1868_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossgunshipflare_2509_instances.clear_selection();
        for (ObjectIterator it(bossgunshipflare_2509_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        gimmickflyingleafplatform_2460_instances.clear_selection();
        for (ObjectIterator it(gimmickflyingleafplatform_2460_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        generalwaterhorizon_415_instances.clear_selection();
        for (ObjectIterator it(generalwaterhorizon_415_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_2572_43_end: ;
}
void Frames::event_func_10699()
{
    // event 2573_43
    bool or_result_2573_43 = false;
    bool or_temp_result_2573_43_0 = false;
    {
        if (!(group_pause_1)) goto or_event_2573_43_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_2573_43_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2573_43_0_end;
        or_result_2573_43 = true;
        or_temp_result_2573_43_0 = true;
    }
    or_event_2573_43_0_end: ;
    // event 2573_43
    bool or_temp_result_2573_43_1 = false;
    {
        if (!(group_pause_1)) goto or_event_2573_43_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_2573_43_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2573_43_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_2573_43_1_end;
        or_result_2573_43 = true;
        or_temp_result_2573_43_1 = true;
        or_event_2573_43_1_end: ;
        if (!or_result_2573_43) goto or_final_or_event_2573_43_1_end;
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
        effectfallingleaf_2323_instances.clear_selection();
        for (ObjectIterator it(effectfallingleaf_2323_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        effectwhisp_656_instances.clear_selection();
        for (ObjectIterator it(effectwhisp_656_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerassistcaroltail_2553_instances))->start_animation();
        ((Active*)get_instance(playerassistmillatail_2554_instances))->start_animation();
        ((Active*)get_instance(playerassistmilla_2558_instances))->start_animation();
        ((Active*)get_instance(playerassistcarol_2559_instances))->start_animation();
        ((Active*)get_instance(playerassistlilachair_2537_instances))->start_animation();
        ((Active*)get_instance(playerassistfinisher_2561_instances))->start_animation();
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossgunshiplightleft_2531_instances.clear_selection();
        for (ObjectIterator it(bossgunshiplightleft_2531_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossgunshiplightright_2532_instances.clear_selection();
        for (ObjectIterator it(bossgunshiplightright_2532_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(levelparalaxwatersurface_7_instances))->start_animation();
        ((Active*)get_instance(objectjumppad_530_instances))->start_animation();
        minibossflame_1199_instances.clear_selection();
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossmissile_1835_instances.clear_selection();
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemylaser_1626_instances.clear_selection();
        for (ObjectIterator it(enemylaser_1626_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bosshovercopsiren4_2329_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren4_2329_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bosshovercopsiren3_2330_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren3_2330_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bosshovercop_2332_instances.clear_selection();
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bosshovercopsiren1_2336_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren1_2336_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bosshovercopsiren2_2337_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren2_2337_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        levelhovercraftlight_2451_instances.clear_selection();
        for (ObjectIterator it(levelhovercraftlight_2451_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemybuoybullet2_2326_instances.clear_selection();
        for (ObjectIterator it(enemybuoybullet2_2326_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemybuoybullet_2325_instances.clear_selection();
        for (ObjectIterator it(enemybuoybullet_2325_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        mediumbubble_769_instances.clear_selection();
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bubblepatch_806_instances))->start_animation();
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
        shieldserpentine_1868_instances.clear_selection();
        for (ObjectIterator it(shieldserpentine_1868_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossgunshipflare_2509_instances.clear_selection();
        for (ObjectIterator it(bossgunshipflare_2509_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        gimmickflyingleafplatform_2460_instances.clear_selection();
        for (ObjectIterator it(gimmickflyingleafplatform_2460_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        generalwaterhorizon_415_instances.clear_selection();
        for (ObjectIterator it(generalwaterhorizon_415_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_2573_43_1_end: ;
}
void Frames::event_func_10700()
{
    // event 2588_43
    {
        // group: Slowdown Effect
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) > (0))) goto event_2588_43_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(2)%math_helper%((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) != (0))) goto event_2588_43_end;
        if (not_always_2588_43 > loop_count) {
            not_always_2588_43 = loop_count + 2;
            goto event_2588_43_end;
        }
        not_always_2588_43 = loop_count + 2;
            group_main_engine_1 = false;
    
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
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
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
        effectfallingleaf_2323_instances.clear_selection();
        for (ObjectIterator it(effectfallingleaf_2323_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerassistmilla_2558_instances))->stop_animation();
        ((Active*)get_instance(playerassistcarol_2559_instances))->stop_animation();
        ((Active*)get_instance(playerassistcaroltail_2553_instances))->stop_animation();
        ((Active*)get_instance(playerassistmillatail_2554_instances))->stop_animation();
        ((Active*)get_instance(playerassistfinisher_2561_instances))->stop_animation();
        ((Active*)get_instance(playerassistlilachair_2537_instances))->stop_animation();
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossgunshiplightleft_2531_instances.clear_selection();
        for (ObjectIterator it(bossgunshiplightleft_2531_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossgunshiplightright_2532_instances.clear_selection();
        for (ObjectIterator it(bossgunshiplightright_2532_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_2588_43_end: ;
}
void Frames::event_func_10701()
{
    // event 2589_43
    {
        // group: Slowdown Effect
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) > (0))) goto event_2589_43_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(2)%math_helper%((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) == (0))) goto event_2589_43_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2589_43_end;
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
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
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
        effectfallingleaf_2323_instances.clear_selection();
        for (ObjectIterator it(effectfallingleaf_2323_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerassistcaroltail_2553_instances))->start_animation();
        ((Active*)get_instance(playerassistmillatail_2554_instances))->start_animation();
        ((Active*)get_instance(playerassistmilla_2558_instances))->start_animation();
        ((Active*)get_instance(playerassistcarol_2559_instances))->start_animation();
        ((Active*)get_instance(playerassistlilachair_2537_instances))->start_animation();
        ((Active*)get_instance(playerassistfinisher_2561_instances))->start_animation();
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossgunshiplightleft_2531_instances.clear_selection();
        for (ObjectIterator it(bossgunshiplightleft_2531_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossgunshiplightright_2532_instances.clear_selection();
        for (ObjectIterator it(bossgunshiplightright_2532_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    event_2589_43_end: ;
}
void Frames::handle_frame_44_events()
{
    test_collisions_43();
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
    event_func_4203();
    event_func_4205();
    event_func_10416();
    event_func_10419();
    event_func_7311();
    event_func_2650();
    event_func_4187();
    event_func_4188();
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
    event_func_10049();
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
    event_func_10050();
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
    event_func_10051();
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
    event_func_10052();
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
    event_func_10053();
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
    event_func_10054();
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
    event_func_1758();
    event_func_1759();
    event_func_1760();
    event_func_10055();
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
    event_func_10056();
    event_func_1778();
    event_func_2784();
    event_func_2785();
    event_func_1781();
    event_func_2786();
    event_func_2787();
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
    event_func_10057();
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
    event_func_10058();
    event_func_1995();
    event_func_1996();
    event_func_2831();
    event_func_1997();
    event_func_2832();
    event_func_2833();
    event_func_10059();
    event_func_10060();
    event_func_10061();
    event_func_10062();
    event_func_2004();
    event_func_10063();
    event_func_10064();
    event_func_10065();
    event_func_10066();
    event_func_10067();
    event_func_2010();
    event_func_10068();
    event_func_10069();
    event_func_10070();
    event_func_10071();
    event_func_10072();
    event_func_10073();
    event_func_10074();
    event_func_10075();
    event_func_10076();
    event_func_10077();
    event_func_10078();
    event_func_10079();
    event_func_10080();
    event_func_2834();
    event_func_10081();
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
    event_func_10082();
    event_func_2070();
    event_func_2071();
    event_func_2072();
    event_func_2073();
    event_func_10083();
    event_func_10084();
    event_func_10085();
    event_func_10086();
    event_func_10087();
    event_func_10088();
    event_func_10089();
    event_func_10090();
    event_func_10091();
    event_func_10092();
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
    event_func_10093();
    event_func_10094();
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
    event_func_2939();
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
    event_func_2940();
    event_func_2941();
    event_func_2408();
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1) goto group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1_end;
    event_func_2409();
    event_func_2942();
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_4_water_shield_1) goto group_main_engine_global_methods_common_objects_shields_4_water_shield_1_end;
    event_func_2411();
    event_func_2943();
    event_func_2413();
    event_func_2414();
    event_func_2415();
    event_func_2416();
    event_func_2944();
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_5_earth_shield_1) goto group_main_engine_global_methods_common_objects_shields_5_earth_shield_1_end;
    event_func_2418();
    event_func_2945();
    event_func_2420();
    event_func_2421();
    event_func_2422();
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1_end: ;
    event_func_2946();
    event_func_2947();
    event_func_2948();
    event_func_2949();
    event_func_2423();
    event_func_10095();
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
    event_func_10096();
    event_func_10097();
    event_func_10098();
    event_func_10099();
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
    event_func_2485();
    event_func_2957();
    event_func_2958();
    event_func_2959();
    event_func_9663();
    event_func_9664();
    event_func_2960();
    event_func_2961();
    event_func_2962();
    event_func_2963();
    event_func_2964();
    event_func_2965();
    event_func_2966();
    event_func_2967();
    event_func_9827();
    event_func_9828();
    event_func_9829();
    event_func_9830();
    event_func_9831();
    event_func_9832();
    event_func_9833();
    event_func_9834();
    event_func_9835();
    event_func_9836();
    event_func_9837();
    event_func_9838();
    event_func_9839();
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
    event_func_10100();
    event_func_10101();
    event_func_10102();
    event_func_10103();
    event_func_10104();
    event_func_10105();
    event_func_10106();
    event_func_10107();
    event_func_10108();
    event_func_10109();
    event_func_10110();
    event_func_10111();
    event_func_9454();
    event_func_9455();
    event_func_9456();
    event_func_9457();
    event_func_9458();
    event_func_9846();
    event_func_10112();
    event_func_9848();
    event_func_9849();
    event_func_9850();
    event_func_9851();
    event_func_9852();
    event_func_10113();
    event_func_9701();
    event_func_9702();
    event_func_9703();
    event_func_9704();
    event_func_10114();
    event_func_9854();
    event_func_9855();
    event_func_9856();
    event_func_9857();
    event_func_9858();
    event_func_9859();
    event_func_9860();
    event_func_9861();
    event_func_9862();
    event_func_9863();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    if (!group_main_engine_level_specific_methods_stage_clear_1) goto group_main_engine_level_specific_methods_stage_clear_1_end;
    event_func_4197();
    event_func_4198();
    event_func_4199();
    event_func_10115();
    event_func_10116();
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
    event_func_10117();
    event_func_10118();
    group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1_end: ;
    group_main_engine_level_specific_methods_stage_clear_1_end: ;
    event_func_9513();
    event_func_9514();
    event_func_9515();
    event_func_10119();
    event_func_10120();
    event_func_9518();
    event_func_9519();
    event_func_9520();
    event_func_9521();
    event_func_9522();
    event_func_9523();
    event_func_9524();
    event_func_9525();
    event_func_9526();
    event_func_9527();
    event_func_9528();
    event_func_9529();
    event_func_9530();
    event_func_9531();
    event_func_9532();
    event_func_10121();
    event_func_9534();
    event_func_10122();
    event_func_9536();
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
    event_func_10123();
    event_func_9569();
    event_func_9570();
    event_func_9571();
    event_func_9572();
    event_func_9573();
    event_func_9574();
    event_func_9575();
    event_func_9576();
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
    event_func_10204();
    event_func_10205();
    event_func_10206();
    event_func_10207();
    event_func_10208();
    event_func_10209();
    event_func_10210();
    event_func_10211();
    event_func_10212();
    event_func_10213();
    event_func_10214();
    event_func_10215();
    if (!group_main_engine_level_specific_methods_frame_transition_1) goto group_main_engine_level_specific_methods_frame_transition_1_end;
    event_func_7944();
    event_func_7945();
    event_func_7946();
    group_main_engine_level_specific_methods_frame_transition_1_end: ;
    event_func_9998();
    event_func_3818();
    event_func_3819();
    event_func_3820();
    event_func_3821();
    event_func_3822();
    event_func_9598();
    event_func_9599();
    event_func_9600();
    event_func_9601();
    event_func_9602();
    event_func_9603();
    event_func_3823();
    event_func_3824();
    event_func_3825();
    event_func_3826();
    event_func_3827();
    event_func_3828();
    event_func_3829();
    event_func_3830();
    event_func_3831();
    event_func_3832();
    event_func_3833();
    event_func_3834();
    event_func_3835();
    event_func_3836();
    event_func_3837();
    event_func_4051();
    event_func_4052();
    event_func_3838();
    event_func_3839();
    event_func_3840();
    event_func_3841();
    event_func_3842();
    event_func_3843();
    event_func_3000();
    event_func_10216();
    event_func_10217();
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) goto group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end;
    event_func_4173();
    event_func_9724();
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end: ;
    event_func_10218();
    if (!group_main_engine_level_specific_methods_cutscenes_neera_1) goto group_main_engine_level_specific_methods_cutscenes_neera_1_end;
    event_func_10219();
    event_func_10220();
    event_func_10221();
    event_func_10222();
    event_func_10223();
    event_func_10224();
    event_func_10225();
    event_func_10226();
    event_func_10227();
    event_func_10228();
    event_func_10229();
    event_func_10230();
    event_func_10231();
    event_func_10232();
    event_func_10233();
    event_func_10234();
    event_func_10235();
    event_func_10236();
    event_func_10237();
    event_func_10238();
    event_func_10239();
    event_func_10240();
    event_func_10241();
    event_func_10242();
    event_func_10243();
    event_func_10244();
    event_func_10245();
    event_func_10246();
    event_func_10247();
    group_main_engine_level_specific_methods_cutscenes_neera_1_end: ;
    event_func_10248();
    event_func_10249();
    event_func_10250();
    event_func_10251();
    event_func_10252();
    if (!group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1) goto group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1_end;
    event_func_10253();
    event_func_10254();
    event_func_10255();
    event_func_10256();
    event_func_10257();
    event_func_10258();
    event_func_10259();
    event_func_10260();
    event_func_10261();
    event_func_10262();
    event_func_10263();
    event_func_10264();
    event_func_10265();
    event_func_10266();
    event_func_10267();
    event_func_10268();
    event_func_10269();
    event_func_10270();
    event_func_10271();
    event_func_10272();
    event_func_10273();
    if (!group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_torque_s_abduction_fade_out_1) goto group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_torque_s_abduction_fade_out_1_end;
    event_func_10274();
    event_func_10275();
    event_func_10276();
    event_func_10277();
    group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_torque_s_abduction_fade_out_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_torque_s_abduction_takeoff_1) goto group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_torque_s_abduction_takeoff_1_end;
    event_func_10278();
    event_func_10279();
    event_func_10280();
    event_func_10281();
    event_func_10282();
    event_func_10283();
    event_func_10284();
    event_func_10285();
    event_func_10286();
    event_func_10287();
    event_func_10288();
    event_func_10289();
    event_func_10290();
    event_func_10291();
    event_func_10292();
    event_func_10293();
    group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_torque_s_abduction_takeoff_1_end: ;
    group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1) goto group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1_end;
    event_func_10294();
    event_func_10295();
    event_func_10296();
    event_func_10297();
    event_func_10298();
    event_func_10299();
    event_func_10300();
    event_func_10301();
    event_func_10302();
    event_func_10303();
    event_func_10304();
    event_func_10305();
    event_func_10306();
    event_func_10307();
    event_func_10308();
    event_func_10309();
    event_func_10310();
    event_func_10311();
    event_func_10312();
    event_func_10313();
    event_func_10314();
    event_func_10315();
    event_func_10316();
    event_func_10317();
    event_func_10318();
    event_func_10319();
    event_func_10320();
    event_func_10321();
    event_func_10322();
    event_func_10323();
    event_func_10324();
    event_func_10325();
    event_func_10326();
    if (!group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1) goto group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1_end;
    event_func_10327();
    event_func_10328();
    event_func_10329();
    event_func_10330();
    event_func_10331();
    event_func_10332();
    event_func_10333();
    event_func_10334();
    event_func_10335();
    event_func_10336();
    event_func_10337();
    event_func_10338();
    event_func_10339();
    event_func_10340();
    event_func_10341();
    event_func_10342();
    event_func_10343();
    event_func_10344();
    event_func_10345();
    group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1_end: ;
    event_func_10346();
    if (!group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_blips_1) goto group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_blips_1_end;
    event_func_10347();
    event_func_10348();
    event_func_10349();
    event_func_10350();
    event_func_10351();
    event_func_10352();
    event_func_10353();
    event_func_10354();
    event_func_10355();
    event_func_10356();
    event_func_10357();
    event_func_10358();
    event_func_10359();
    event_func_10360();
    event_func_10361();
    event_func_10362();
    event_func_10363();
    event_func_10364();
    event_func_10365();
    group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_blips_1_end: ;
    event_func_10366();
    group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1_end: ;
    event_func_10367();
    event_func_10368();
    event_func_4809();
    event_func_4810();
    event_func_4811();
    event_func_4812();
    event_func_4815();
    event_func_4816();
    if (!group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_movement_1) goto group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_movement_1_end;
    event_func_4817();
    event_func_4818();
    event_func_4819();
    event_func_4820();
    event_func_4821();
    event_func_4822();
    event_func_4823();
    event_func_4824();
    event_func_4825();
    event_func_4826();
    event_func_4827();
    event_func_4828();
    event_func_4829();
    event_func_4830();
    group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_movement_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_attacks_1) goto group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_attacks_1_end;
    event_func_4831();
    event_func_4832();
    event_func_4833();
    event_func_4834();
    event_func_4835();
    event_func_4836();
    event_func_4837();
    event_func_4838();
    event_func_4839();
    group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_attacks_1_end: ;
    event_func_4840();
    event_func_4841();
    event_func_4842();
    event_func_4843();
    event_func_4844();
    event_func_4845();
    event_func_4846();
    event_func_4847();
    event_func_4848();
    event_func_4849();
    event_func_4850();
    event_func_4851();
    event_func_4852();
    event_func_4853();
    event_func_4854();
    event_func_4855();
    event_func_4856();
    event_func_4857();
    event_func_4858();
    event_func_4859();
    event_func_4860();
    event_func_4861();
    event_func_4862();
    event_func_4863();
    event_func_4864();
    event_func_4865();
    event_func_4866();
    event_func_4867();
    event_func_4868();
    event_func_4869();
    event_func_4870();
    event_func_4871();
    event_func_10369();
    event_func_10370();
    event_func_10371();
    event_func_5013();
    if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_1) goto group_main_engine_level_specific_methods_bosses_boss_serpentine_1_end;
    event_func_10372();
    if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1) goto group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1_end;
    event_func_10373();
    event_func_10374();
    event_func_10375();
    event_func_10376();
    event_func_7258();
    event_func_10377();
    event_func_10378();
    event_func_10379();
    event_func_10380();
    event_func_10381();
    event_func_10382();
    event_func_10383();
    group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1) goto group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1_end;
    event_func_10384();
    event_func_10385();
    event_func_10386();
    event_func_10387();
    event_func_10388();
    event_func_10389();
    event_func_10390();
    event_func_10391();
    event_func_10392();
    event_func_10393();
    event_func_10394();
    event_func_10395();
    event_func_10396();
    event_func_10397();
    event_func_10398();
    event_func_10399();
    event_func_10400();
    group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1) goto group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1_end;
    event_func_10401();
    event_func_10402();
    event_func_10403();
    event_func_7286();
    event_func_10404();
    event_func_10405();
    event_func_10406();
    event_func_10407();
    event_func_10408();
    event_func_10409();
    event_func_10410();
    event_func_10411();
    event_func_10412();
    group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_dual_crash_1) goto group_main_engine_level_specific_methods_bosses_boss_serpentine_dual_crash_1_end;
    event_func_10413();
    event_func_10414();
    event_func_10415();
    event_func_10417();
    event_func_10418();
    event_func_7310();
    event_func_7312();
    group_main_engine_level_specific_methods_bosses_boss_serpentine_dual_crash_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_missile_1) goto group_main_engine_level_specific_methods_bosses_boss_serpentine_missile_1_end;
    event_func_10420();
    event_func_10421();
    event_func_10422();
    event_func_10423();
    event_func_7317();
    event_func_10424();
    group_main_engine_level_specific_methods_bosses_boss_serpentine_missile_1_end: ;
    event_func_7319();
    event_func_7320();
    event_func_7321();
    if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1) goto group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1_end;
    event_func_10425();
    event_func_10426();
    event_func_10427();
    event_func_10428();
    event_func_10429();
    event_func_10430();
    event_func_10431();
    event_func_10432();
    group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1_end: ;
    event_func_10433();
    event_func_10434();
    event_func_10433();
    event_func_10434();
    event_func_10435();
    event_func_10436();
    event_func_10437();
    event_func_10438();
    event_func_10439();
    event_func_10440();
    event_func_7340();
    event_func_10441();
    event_func_10442();
    event_func_10443();
    event_func_10444();
    event_func_7345();
    event_func_10445();
    event_func_10446();
    event_func_10447();
    event_func_10448();
    event_func_10449();
    event_func_7350();
    event_func_10450();
    group_main_engine_level_specific_methods_bosses_boss_serpentine_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_to_gunship_1) goto group_main_engine_level_specific_methods_bosses_boss_serpentine_to_gunship_1_end;
    event_func_10451();
    event_func_10452();
    event_func_10453();
    event_func_10454();
    event_func_10455();
    event_func_10456();
    event_func_10457();
    group_main_engine_level_specific_methods_bosses_boss_serpentine_to_gunship_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_gunship_1) goto group_main_engine_level_specific_methods_bosses_boss_gunship_1_end;
    event_func_10458();
    event_func_10459();
    event_func_10460();
    event_func_10461();
    event_func_10462();
    event_func_10463();
    if (!group_main_engine_level_specific_methods_bosses_boss_gunship_rising_1) goto group_main_engine_level_specific_methods_bosses_boss_gunship_rising_1_end;
    event_func_10464();
    event_func_10465();
    group_main_engine_level_specific_methods_bosses_boss_gunship_rising_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_gunship_moving_1) goto group_main_engine_level_specific_methods_bosses_boss_gunship_moving_1_end;
    event_func_10466();
    event_func_10467();
    event_func_10468();
    event_func_10469();
    event_func_10470();
    event_func_10471();
    event_func_10472();
    event_func_10473();
    event_func_10474();
    event_func_10475();
    group_main_engine_level_specific_methods_bosses_boss_gunship_moving_1_end: ;
    event_func_10476();
    event_func_10477();
    event_func_10478();
    event_func_10479();
    event_func_10480();
    event_func_10481();
    event_func_10482();
    event_func_10483();
    event_func_10484();
    event_func_10485();
    event_func_10486();
    event_func_10487();
    event_func_10488();
    event_func_10489();
    event_func_10490();
    event_func_10491();
    event_func_10492();
    event_func_10493();
    event_func_10494();
    event_func_10495();
    event_func_10496();
    event_func_10497();
    event_func_10498();
    event_func_10499();
    event_func_10500();
    event_func_10501();
    event_func_10502();
    event_func_10503();
    event_func_10504();
    event_func_10505();
    event_func_10506();
    event_func_10507();
    event_func_10508();
    event_func_10509();
    event_func_10510();
    event_func_10511();
    event_func_10512();
    event_func_10513();
    event_func_10514();
    event_func_10515();
    event_func_10516();
    event_func_10517();
    event_func_10518();
    event_func_10519();
    event_func_10520();
    event_func_10521();
    event_func_10522();
    event_func_10523();
    event_func_10524();
    event_func_10525();
    event_func_10526();
    event_func_10527();
    event_func_10528();
    event_func_10529();
    event_func_10530();
    event_func_10531();
    event_func_10532();
    event_func_10533();
    event_func_10534();
    event_func_10535();
    event_func_10536();
    event_func_10537();
    event_func_10538();
    event_func_10539();
    event_func_10540();
    event_func_10541();
    event_func_10542();
    event_func_10543();
    event_func_10544();
    event_func_10545();
    event_func_10546();
    group_main_engine_level_specific_methods_bosses_boss_gunship_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1) goto group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1_end;
    event_func_10547();
    event_func_10548();
    event_func_10549();
    event_func_10550();
    event_func_10551();
    event_func_10552();
    event_func_10553();
    event_func_10554();
    event_func_10555();
    event_func_10556();
    event_func_10557();
    event_func_10558();
    event_func_10559();
    event_func_10560();
    event_func_10561();
    event_func_10562();
    event_func_10563();
    event_func_10564();
    event_func_10565();
    event_func_10566();
    event_func_10567();
    event_func_10568();
    event_func_10569();
    group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_gunship_projectiles_1) goto group_main_engine_level_specific_methods_bosses_gunship_projectiles_1_end;
    event_func_10570();
    event_func_10571();
    event_func_10572();
    event_func_10573();
    event_func_10574();
    event_func_10575();
    event_func_10576();
    event_func_10577();
    event_func_10578();
    event_func_10579();
    event_func_10580();
    event_func_10581();
    event_func_10582();
    event_func_10583();
    event_func_10584();
    event_func_10585();
    event_func_10586();
    event_func_10587();
    event_func_10588();
    event_func_10589();
    event_func_10590();
    event_func_10591();
    group_main_engine_level_specific_methods_bosses_gunship_projectiles_1_end: ;
    event_func_6808();
    event_func_6809();
    event_func_6810();
    event_func_6811();
    event_func_6812();
    event_func_9782();
    event_func_9783();
    event_func_9784();
    event_func_9785();
    event_func_9786();
    event_func_9789();
    event_func_9790();
    event_func_9791();
    event_func_9792();
    event_func_9793();
    event_func_9800();
    event_func_9801();
    event_func_9802();
    event_func_10592();
    event_func_10593();
    if (!group_main_engine_level_specific_methods_bosses_player_assistance_1) goto group_main_engine_level_specific_methods_bosses_player_assistance_1_end;
    if (!group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1) goto group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1_end;
    event_func_10594();
    event_func_10595();
    if (!group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_0_moving_1) goto group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_0_moving_1_end;
    event_func_10596();
    event_func_10597();
    event_func_10598();
    event_func_10599();
    event_func_10600();
    event_func_10601();
    event_func_10602();
    event_func_10603();
    event_func_10604();
    event_func_10605();
    event_func_10606();
    event_func_10607();
    event_func_10608();
    event_func_10609();
    event_func_10610();
    event_func_10611();
    event_func_10612();
    event_func_10613();
    event_func_10614();
    event_func_10615();
    event_func_10616();
    event_func_10617();
    event_func_10618();
    group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_0_moving_1_end: ;
    event_func_10619();
    if (!group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_1_shield_summon_1) goto group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_1_shield_summon_1_end;
    event_func_10620();
    event_func_10621();
    event_func_10622();
    event_func_10623();
    event_func_10624();
    event_func_10625();
    event_func_10626();
    event_func_10627();
    event_func_10628();
    event_func_10629();
    event_func_10630();
    event_func_10631();
    event_func_10632();
    event_func_10633();
    event_func_10634();
    group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_1_shield_summon_1_end: ;
    event_func_10635();
    if (!group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_2_jump_1) goto group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_2_jump_1_end;
    event_func_10636();
    event_func_10637();
    event_func_10638();
    event_func_10639();
    event_func_10640();
    group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_2_jump_1_end: ;
    event_func_10641();
    event_func_10642();
    event_func_10643();
    event_func_10644();
    event_func_10645();
    event_func_10646();
    event_func_10647();
    event_func_10648();
    event_func_10649();
    event_func_10650();
    event_func_10651();
    event_func_10652();
    event_func_10653();
    event_func_10654();
    event_func_10655();
    event_func_10656();
    event_func_10657();
    event_func_10658();
    event_func_10659();
    event_func_10660();
    event_func_10661();
    event_func_10662();
    event_func_10663();
    event_func_10664();
    event_func_10665();
    event_func_10666();
    event_func_10667();
    event_func_10668();
    event_func_10669();
    group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1_end: ;
    group_main_engine_level_specific_methods_bosses_player_assistance_1_end: ;
    event_func_10670();
    event_func_10671();
    event_func_10672();
    event_func_10673();
    event_func_10674();
    event_func_10675();
    event_func_10676();
    event_func_10677();
    event_func_10678();
    event_func_10679();
    event_func_10680();
    event_func_10681();
    event_func_10682();
    event_func_10683();
    event_func_10684();
    event_func_10685();
    event_func_9620();
    event_func_10686();
    event_func_10687();
    event_func_10688();
    event_func_10689();
    event_func_10690();
    event_func_10691();
    event_func_10692();
    event_func_10693();
    event_func_10694();
    event_func_10695();
    event_func_10696();
    event_func_2519();
    event_func_3234();
    event_func_2521();
    event_func_2522();
    event_func_2523();
    event_func_2524();
    event_func_2525();
    event_func_2526();
    event_func_2527();
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
    event_func_3942();
    event_func_3943();
    event_func_3944();
    event_func_3945();
    event_func_3946();
    event_func_3947();
    event_func_3948();
    event_func_3949();
    event_func_3950();
    event_func_3951();
    event_func_3952();
    event_func_4308();
    event_func_4309();
    event_func_4310();
    event_func_4311();
    event_func_3953();
    event_func_3954();
    event_func_4124();
    event_func_4125();
    event_func_4126();
    event_func_4127();
    event_func_4128();
    event_func_4129();
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
    event_func_10697();
    event_func_9625();
    event_func_9626();
    event_func_9627();
    event_func_9628();
    event_func_9629();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_10698();
    event_func_10699();
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
    event_func_10700();
    event_func_10701();
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
void Frames::handle_frame_44_pre_events()
{
}
void Frames::event_func_10702()
{
    // event 2_43
    {
#ifdef CHOWDREN_WAIT
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->find_board(global_values->get(1), 5);
#endif
    }
    event_2_43_end: ;
}
void Frames::event_func_10703()
{
    // event 8_43
    {
        if (!(group_main_engine_1)) goto event_8_43_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 1600);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 25);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
    }
    event_8_43_end: ;
}
void Frames::event_func_10704()
{
    // event 25_43
    {
        if (!(group_main_engine_1)) goto event_25_43_end;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(3, 0.99);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(4, 0.94);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(3, 0.9);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(4, 0.9);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(3, 0.95);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(4, 0.95);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(3, 1);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(4, 0);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(3, 0.8);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(4, 0.85);
    }
    event_25_43_end: ;
}
void Frames::event_func_10705()
{
    // event 42_43
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_42_43_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playerothers_123_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playergimmickactions_413_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playerinput_19_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playercharactersensor_383_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(player_389_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensortopbig_395_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensortop_394_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorbottombig_397_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorbottom_396_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorplatform_399_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorleftbig_391_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorleft_390_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorrightbig_393_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorright_392_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorslopes_398_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorleftedge_402_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorrightedge_403_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorleftangle_400_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorrightangle_401_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        shieldflamefront_316_instances.clear_selection();
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        shieldflameback_315_instances.clear_selection();
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
    }
    event_42_43_end: ;
}
void Frames::event_func_10706()
{
    // event 1430_43
    {
        if (!(group_main_engine_1)) goto event_1430_43_end;
        ((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.set(3, ((Active*)get_instance(gimmickleafplatformback_2358_instances))->get_x());
        ((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.set(4, ((Active*)get_instance(gimmickleafplatformback_2358_instances))->get_y());
        ((Active*)get_instance(gimmickleafplatformback_2358_instances))->set_x(((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(3)+cos_deg(((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(0))*((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(1));
        ((Active*)get_instance(gimmickleafplatformback_2358_instances))->set_y(((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(4)-sin_deg(((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(0))*((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(1));
        ((Active*)get_instance(gimmickleafplatformback_2358_instances))->set_angle(((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.get(0)-90, 0);
        ((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.set(9, ((Active*)get_instance(gimmickleafplatformback_2358_instances))->get_action_x());
        ((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.set(10, ((Active*)get_instance(gimmickleafplatformback_2358_instances))->get_action_y());
        ((Active*)get_instance(gimmickleafplatformback_2358_instances))->alterables->values.sub(1, 128);
    }
    event_1430_43_end: ;
}
void Frames::event_func_10707()
{
    // event 1561_43
    {
        if (!(group_main_engine_1)) goto event_1561_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->flags.enable(16);
        }
    }
    event_1561_43_end: ;
}
void Frames::event_func_10708()
{
    // event 1714_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_neera_1)) goto event_1714_43_end;
        FrameObject * single_instance_1714_43_0; single_instance_1714_43_0 = NULL;
        // select single: true false false
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator p_it(npcneera_2464_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shieldwater_318(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1714_43_0 == NULL)
                    single_instance_1714_43_0 = new_obj;
            }
        }
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
        ((Active*)((Active*)single_instance_1714_43_0))->alterables->flags.enable(4);
        ((Active*)((Active*)single_instance_1714_43_0))->force_animation(7);
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, -1);
        }
        bosshovercop_2332_instances.clear_selection();
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
        }
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(10, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->get_y()-300);
            ((Active*)*it)->alterables->values.set(3, -1);
            ((Active*)*it)->set_direction(17);
        }
    }
    event_1714_43_end: ;
}
void Frames::event_func_10709()
{
    // event 1749_43
    {
        if (!(group_main_engine_1)) goto event_1749_43_end;
        brevonmechfrontwing_2546_instances.clear_selection();
        spread_value(brevonmechfrontwing_2546_instances, 1, 3);
        brevonmechbackwing_2538_instances.clear_selection();
        spread_value(brevonmechbackwing_2538_instances, 1, 3);
        ((Active*)get_instance(brevonmechtorso_2543_instances))->alterables->values.set(3, ((Active*)get_instance(brevonmechtorso_2543_instances))->get_y());
        ((Active*)get_instance(brevonmechtorso_2543_instances))->alterables->values.set(4, ((Active*)get_instance(brevonmechtorso_2543_instances))->get_y());
        ((Active*)get_instance(brevonmechtorso_2543_instances))->alterables->values.set(2, ((Active*)get_instance(brevonmechtorso_2543_instances))->get_x());
    }
    event_1749_43_end: ;
}
void Frames::event_func_10710()
{
    // event 1750_43
    {
        if (!(group_main_engine_1)) goto event_1750_43_end;
        npcsyntaxleftarm_2517_instances.clear_selection();
        spread_value(npcsyntaxleftarm_2517_instances, 0, 0);
        npcsyntaxrightarm_2518_instances.clear_selection();
        spread_value(npcsyntaxrightarm_2518_instances, 0, 0);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(10, ((Active*)get_instance(npcsyntax_2519_instances))->get_y());
    }
    event_1750_43_end: ;
}
void Frames::event_func_10711()
{
    // event 1751_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1)) goto event_1751_43_end;
        npcsyntaxleftarm_2517_instances.clear_selection();
        spread_value(npcsyntaxleftarm_2517_instances, 0, 0);
        npcsyntaxrightarm_2518_instances.clear_selection();
        spread_value(npcsyntaxrightarm_2518_instances, 0, 0);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(10, ((Active*)get_instance(npcsyntax_2519_instances))->get_y());
    }
    event_1751_43_end: ;
}
void Frames::event_func_10712()
{
    // event 2041_43
    {
        if (!(group_main_engine_1)) goto event_2041_43_end;
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.set(3, ((Active*)get_instance(bossgunship_2527_instances))->get_x());
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.set(4, ((Active*)get_instance(bossgunship_2527_instances))->get_y());
        bossgunshiplightleft_2531_instances.clear_selection();
        for (ObjectIterator it(bossgunshiplightleft_2531_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x()-((Active*)get_instance(bossgunship_2527_instances))->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y()-((Active*)get_instance(bossgunship_2527_instances))->get_y());
        }
        bossgunshiplightright_2532_instances.clear_selection();
        for (ObjectIterator it(bossgunshiplightright_2532_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x()-((Active*)get_instance(bossgunship_2527_instances))->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y()-((Active*)get_instance(bossgunship_2527_instances))->get_y());
        }
        bossgunshiplight_2530_instances.clear_selection();
        for (ObjectIterator it(bossgunshiplight_2530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x()-((Active*)get_instance(bossgunship_2527_instances))->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y()-((Active*)get_instance(bossgunship_2527_instances))->get_y());
        }
        spread_value(bossgunshiplightleft_2531_instances, 0, 0);
        spread_value(bossgunshiplightright_2532_instances, 0, 0);
        bossgunshiptrooper_2522_instances.clear_selection();
        spread_value(bossgunshiptrooper_2522_instances, 0, 0);
        for (ObjectIterator it(bossgunshiptrooper_2522_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)*40-20);
        }
        ((Active*)get_instance(bossgunshipcannonleft_2533_instances))->alterables->values.set(3, ((Active*)get_instance(bossgunshipcannonleft_2533_instances))->get_x()-((Active*)get_instance(bossgunship_2527_instances))->get_x());
        ((Active*)get_instance(bossgunshipcannonleft_2533_instances))->alterables->values.set(4, ((Active*)get_instance(bossgunshipcannonleft_2533_instances))->get_y()-((Active*)get_instance(bossgunship_2527_instances))->get_y());
        ((Active*)get_instance(bossgunshipcannonright_2534_instances))->alterables->values.set(3, ((Active*)get_instance(bossgunshipcannonright_2534_instances))->get_x()-((Active*)get_instance(bossgunship_2527_instances))->get_x());
        ((Active*)get_instance(bossgunshipcannonright_2534_instances))->alterables->values.set(4, ((Active*)get_instance(bossgunshipcannonright_2534_instances))->get_y()-((Active*)get_instance(bossgunship_2527_instances))->get_y());
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.set(15, ((Active*)get_instance(bossgunship_2527_instances))->get_y());
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
        }
    }
    event_2041_43_end: ;
}
void Frames::event_func_10713()
{
    // event 2212_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1)) goto event_2212_43_end;
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(0, ((Active*)get_instance(playerassistmillamask_2557_instances))->get_x());
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(1, ((Active*)get_instance(playerassistmillamask_2557_instances))->get_y());
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(4, ((Active*)get_instance(playerassistmillamask_2557_instances))->get_y());
        ((Active*)get_instance(playerassistmillaradar_2560_instances))->set_x_scale(20);
        ((Active*)get_instance(playerassistcarolmask_2556_instances))->alterables->values.set(0, ((Active*)get_instance(playerassistcarolmask_2556_instances))->get_x());
        ((Active*)get_instance(playerassistcarolmask_2556_instances))->alterables->values.set(1, ((Active*)get_instance(playerassistcarolmask_2556_instances))->get_y());
        ((Active*)get_instance(playerassistcarolmask_2556_instances))->alterables->values.set(4, ((Active*)get_instance(playerassistcarolmask_2556_instances))->get_y());
    }
    event_2212_43_end: ;
}
void Frames::event_func_10714()
{
    // event 2213_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1)) goto event_2213_43_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 21)) == (1))) goto event_2213_43_end;
        ((Active*)get_instance(playerassistfinisher_2561_instances))->replace_color(make_color_int(104, 200, 248), make_color_int(120, 252, 64));
        ((Active*)get_instance(playerassistfinisher_2561_instances))->replace_color(make_color_int(0, 144, 248), make_color_int(40, 184, 0));
        ((Active*)get_instance(playerassistfinisher_2561_instances))->replace_color(make_color_int(0, 108, 200), make_color_int(24, 148, 56));
        ((Active*)get_instance(playerassistfinisher_2561_instances))->replace_color(make_color_int(0, 64, 168), make_color_int(0, 124, 80));
        ((Active*)get_instance(playerassistfinisher_2561_instances))->replace_color(make_color_int(0, 36, 88), make_color_int(0, 64, 48));
    }
    event_2213_43_end: ;
}
void Frames::event_func_10715()
{
    // event 2214_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1)) goto event_2214_43_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 21)) == (2))) goto event_2214_43_end;
        ((Active*)get_instance(playerassistfinisher_2561_instances))->replace_color(make_color_int(104, 200, 248), make_color_int(248, 132, 248));
        ((Active*)get_instance(playerassistfinisher_2561_instances))->replace_color(make_color_int(0, 144, 248), make_color_int(248, 32, 244));
        ((Active*)get_instance(playerassistfinisher_2561_instances))->replace_color(make_color_int(0, 108, 200), make_color_int(200, 0, 180));
        ((Active*)get_instance(playerassistfinisher_2561_instances))->replace_color(make_color_int(0, 64, 168), make_color_int(144, 0, 104));
        ((Active*)get_instance(playerassistfinisher_2561_instances))->replace_color(make_color_int(0, 36, 88), make_color_int(88, 0, 64));
    }
    event_2214_43_end: ;
}
void Frames::event_func_10716()
{
    // event 2215_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1)) goto event_2215_43_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 21)) == (3))) goto event_2215_43_end;
        ((Active*)get_instance(playerassistfinisher_2561_instances))->replace_color(make_color_int(104, 200, 248), make_color_int(248, 200, 40));
        ((Active*)get_instance(playerassistfinisher_2561_instances))->replace_color(make_color_int(0, 144, 248), make_color_int(248, 152, 0));
        ((Active*)get_instance(playerassistfinisher_2561_instances))->replace_color(make_color_int(0, 108, 200), make_color_int(200, 80, 0));
        ((Active*)get_instance(playerassistfinisher_2561_instances))->replace_color(make_color_int(0, 64, 168), make_color_int(160, 0, 32));
        ((Active*)get_instance(playerassistfinisher_2561_instances))->replace_color(make_color_int(0, 36, 88), make_color_int(88, 0, 40));
    }
    event_2215_43_end: ;
}
void Frames::event_func_10717()
{
    // event 2216_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1)) goto event_2216_43_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 21)) == (4))) goto event_2216_43_end;
        ((Active*)get_instance(playerassistfinisher_2561_instances))->replace_color(make_color_int(104, 200, 248), make_color_int(160, 160, 128));
        ((Active*)get_instance(playerassistfinisher_2561_instances))->replace_color(make_color_int(0, 144, 248), make_color_int(100, 100, 80));
        ((Active*)get_instance(playerassistfinisher_2561_instances))->replace_color(make_color_int(0, 108, 200), make_color_int(72, 72, 72));
        ((Active*)get_instance(playerassistfinisher_2561_instances))->replace_color(make_color_int(0, 64, 168), make_color_int(32, 32, 64));
        ((Active*)get_instance(playerassistfinisher_2561_instances))->replace_color(make_color_int(0, 36, 88), make_color_int(8, 8, 32));
    }
    event_2216_43_end: ;
}
void Frames::event_func_10718()
{
    // event 2217_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1)) goto event_2217_43_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 22)) == (1))) goto event_2217_43_end;
        ((Active*)get_instance(playerassistfinisher_2561_instances))->replace_color(make_color_int(200, 0, 0), make_color_int(248, 252, 0));
        ((Active*)get_instance(playerassistfinisher_2561_instances))->replace_color(make_color_int(96, 0, 0), make_color_int(176, 132, 0));
        ((Active*)get_instance(playerassistcarol_2559_instances))->replace_color(make_color_int(200, 0, 0), make_color_int(248, 252, 0));
        ((Active*)get_instance(playerassistcarol_2559_instances))->replace_color(make_color_int(96, 0, 0), make_color_int(176, 132, 0));
    }
    event_2217_43_end: ;
}
void Frames::event_func_10719()
{
    // event 2218_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1)) goto event_2218_43_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 22)) == (2))) goto event_2218_43_end;
        ((Active*)get_instance(playerassistfinisher_2561_instances))->replace_color(make_color_int(200, 0, 0), make_color_int(248, 100, 248));
        ((Active*)get_instance(playerassistfinisher_2561_instances))->replace_color(make_color_int(96, 0, 0), make_color_int(168, 36, 168));
        ((Active*)get_instance(playerassistcarol_2559_instances))->replace_color(make_color_int(200, 0, 0), make_color_int(248, 100, 248));
        ((Active*)get_instance(playerassistcarol_2559_instances))->replace_color(make_color_int(96, 0, 0), make_color_int(168, 36, 168));
    }
    event_2218_43_end: ;
}
void Frames::event_func_10720()
{
    // event 2219_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1)) goto event_2219_43_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 22)) == (3))) goto event_2219_43_end;
        ((Active*)get_instance(playerassistfinisher_2561_instances))->replace_color(make_color_int(200, 0, 0), make_color_int(96, 116, 248));
        ((Active*)get_instance(playerassistfinisher_2561_instances))->replace_color(make_color_int(96, 0, 0), make_color_int(0, 0, 248));
        ((Active*)get_instance(playerassistcarol_2559_instances))->replace_color(make_color_int(200, 0, 0), make_color_int(96, 116, 248));
        ((Active*)get_instance(playerassistcarol_2559_instances))->replace_color(make_color_int(96, 0, 0), make_color_int(0, 0, 248));
    }
    event_2219_43_end: ;
}
void Frames::event_func_10721()
{
    // event 2220_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1)) goto event_2220_43_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 22)) == (4))) goto event_2220_43_end;
        ((Active*)get_instance(playerassistfinisher_2561_instances))->replace_color(make_color_int(200, 0, 0), make_color_int(232, 232, 232));
        ((Active*)get_instance(playerassistfinisher_2561_instances))->replace_color(make_color_int(96, 0, 0), make_color_int(128, 128, 128));
        ((Active*)get_instance(playerassistcarol_2559_instances))->replace_color(make_color_int(200, 0, 0), make_color_int(232, 232, 232));
        ((Active*)get_instance(playerassistcarol_2559_instances))->replace_color(make_color_int(96, 0, 0), make_color_int(128, 128, 128));
    }
    event_2220_43_end: ;
}
void Frames::event_func_10722()
{
    // event 2221_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1)) goto event_2221_43_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 24)) == (1))) goto event_2221_43_end;
        ((Active*)get_instance(playerassistmilla_2558_instances))->replace_color(make_color_int(248, 196, 72), make_color_int(248, 140, 72));
        ((Active*)get_instance(playerassistmilla_2558_instances))->replace_color(make_color_int(248, 120, 40), make_color_int(248, 48, 40));
        ((Active*)get_instance(playerassistmilla_2558_instances))->replace_color(make_color_int(192, 84, 0), make_color_int(192, 16, 0));
        ((Active*)get_instance(playerassistmilla_2558_instances))->replace_color(make_color_int(112, 28, 0), make_color_int(112, 0, 8));
    }
    event_2221_43_end: ;
}
void Frames::event_func_10723()
{
    // event 2222_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1)) goto event_2222_43_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 24)) == (2))) goto event_2222_43_end;
        ((Active*)get_instance(playerassistmilla_2558_instances))->replace_color(make_color_int(248, 196, 72), make_color_int(72, 252, 224));
        ((Active*)get_instance(playerassistmilla_2558_instances))->replace_color(make_color_int(248, 120, 40), make_color_int(40, 172, 248));
        ((Active*)get_instance(playerassistmilla_2558_instances))->replace_color(make_color_int(192, 84, 0), make_color_int(0, 112, 192));
        ((Active*)get_instance(playerassistmilla_2558_instances))->replace_color(make_color_int(112, 28, 0), make_color_int(0, 80, 112));
    }
    event_2222_43_end: ;
}
void Frames::event_func_10724()
{
    // event 2223_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1)) goto event_2223_43_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 24)) == (3))) goto event_2223_43_end;
        ((Active*)get_instance(playerassistmilla_2558_instances))->replace_color(make_color_int(248, 196, 72), make_color_int(248, 188, 184));
        ((Active*)get_instance(playerassistmilla_2558_instances))->replace_color(make_color_int(248, 120, 40), make_color_int(248, 40, 232));
        ((Active*)get_instance(playerassistmilla_2558_instances))->replace_color(make_color_int(192, 84, 0), make_color_int(192, 0, 168));
        ((Active*)get_instance(playerassistmilla_2558_instances))->replace_color(make_color_int(112, 28, 0), make_color_int(104, 0, 112));
    }
    event_2223_43_end: ;
}
void Frames::event_func_10725()
{
    // event 2224_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1)) goto event_2224_43_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 24)) == (4))) goto event_2224_43_end;
        ((Active*)get_instance(playerassistmilla_2558_instances))->replace_color(make_color_int(248, 196, 72), make_color_int(160, 140, 88));
        ((Active*)get_instance(playerassistmilla_2558_instances))->replace_color(make_color_int(248, 120, 40), make_color_int(96, 72, 56));
        ((Active*)get_instance(playerassistmilla_2558_instances))->replace_color(make_color_int(192, 84, 0), make_color_int(48, 28, 16));
        ((Active*)get_instance(playerassistmilla_2558_instances))->replace_color(make_color_int(112, 28, 0), make_color_int(24, 12, 8));
    }
    event_2224_43_end: ;
}
void Frames::event_func_10726()
{
    // event 2311_43
    {
        if (!(group_main_engine_1)) goto event_2311_43_end;
        ((Active*)get_instance(leveldarksky_2069_instances))->set_x_scale(43);
        ((Active*)get_instance(leveldarksky_2069_instances))->set_y_scale(24);
        {
            ((Active*)get_instance(leveldarksky_2069_instances))->blend_color.set_semi_transparency(128);
        }
        ((Active*)get_instance(leveldarksky_2069_instances))->set_direction(1);
        media.play_id(SOUND_RAIN_295, 30-1, 0);
    }
    event_2311_43_end: ;
}
void Frames::on_frame_44_start_events()
{
    event_func_8194();
    event_func_10702();
    event_func_4133();
    event_func_3265();
    event_func_4318();
    event_func_10703();
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
    event_func_10704();
    event_func_3269();
    event_func_3984();
    event_func_3985();
    event_func_2673();
    event_func_2674();
    event_func_2675();
    event_func_2676();
    event_func_10705();
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
    event_func_9808();
    event_func_10706();
    event_func_9988();
    event_func_9642();
    event_func_10707();
    event_func_2686();
    event_func_2687();
    event_func_10708();
    event_func_10709();
    event_func_10710();
    event_func_10711();
    event_func_10712();
    event_func_10713();
    event_func_10714();
    event_func_10715();
    event_func_10716();
    event_func_10717();
    event_func_10718();
    event_func_10719();
    event_func_10720();
    event_func_10721();
    event_func_10722();
    event_func_10723();
    event_func_10724();
    event_func_10725();
    event_func_10726();
    event_func_3277();
    event_func_2690();
    event_func_2691();
    event_func_9812();
    event_func_4145();
    event_func_4146();
    event_func_4143();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_44_init()
{
    index = 43;
    width = 13860;
    height = 2600;
    virtual_width = 13860;
    virtual_height = 2600;
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
    static ObjectList* qualifier_26_instances[] = {&jcwaterstream4_2409_instances, &jcwaterstream3_2410_instances, &jcwaterstream6_2411_instances, &jcwaterstream5_2412_instances, &jcwaterstream2_2413_instances, &jcwaterstream1_2416_instances, NULL};
    qualifier_26.set(6, &qualifier_26_instances[0]);
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &gimmickleafplatform1_2359_instances, &gimmickleafplatform2_2360_instances, &levelcreekplatform_2424_instances, &gimmickflyingleafplatformmask_2462_instances, NULL};
    qualifier_8.set(13, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesup_558_instances, &gimmickleafplatform1_2359_instances, &gimmickleafplatform2_2360_instances, &levelcreekplatform_2424_instances, &hazardspikesdown_559_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, &gimmickflyingleafplatformmask_2462_instances, NULL};
    qualifier_9.set(36, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&minibosstredd_1044_instances, &enemyplantturretus_2365_instances, &enemybullfrag_2417_instances, &enemybuoybuoy_2418_instances, &bossneerahitbox_2465_instances, &enemyelitemask_2511_instances, &bossgunshiphitbox_2536_instances, &bossserphitbox_1867_instances, NULL};
    qualifier_20.set(8, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece1_2_instances, &levelparallaxpiece0_465_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece6_511_instances, &levelparallaxpiece7_764_instances, NULL};
    qualifier_0.set(5, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &minibossbarrier_924_instances, &hazardspikesup_558_instances, &jcslidingplatform_2414_instances, &enemybullfragmask_2419_instances, &leveljccollapsingplatformpiece_2427_instances, &hazardspikesdown_559_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, &leveljccollapsingplatform_2444_instances, &levelicebarrier_2456_instances, NULL};
    qualifier_7.set(32, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &minibosstreddright2_1039_instances, &minibosstreddright4_1040_instances, &minibosstreddright6_1041_instances, &minibosstreddright5_1042_instances, &minibosstreddright3_1043_instances, &minibosstredd_1044_instances, &minibosstreddright1_1045_instances, &minibosstreddleft6_1046_instances, &minibosstreddleft4_1047_instances, &minibosstreddleft5_1048_instances, &minibosstreddleft2_1049_instances, &minibosstreddleft3_1050_instances, &minibosstreddleft1_1051_instances, &playerassistlilachair_2537_instances, &playerassistcaroltail_2553_instances, &playerassistmillatail_2554_instances, &playerassistmilla_2558_instances, &playerassistcarol_2559_instances, NULL};
    qualifier_4.set(52, &qualifier_4_instances[0]);
    static ObjectList* qualifier_30_instances[] = {&brevonmechbackshoulder_2514_instances, &brevonmechbackclaw_2515_instances, &brevonmechbackarm_2516_instances, &brevonmechbackwing_2538_instances, &brevonmechfrontleg_2539_instances, &brevonmechabdomen_2540_instances, &brevonmechfrontleg2_2541_instances, &brevonmechfrontknee_2542_instances, &brevonmechtorso_2543_instances, &brevonmechhead_2544_instances, &brevonmechfrontfoot_2545_instances, &brevonmechfrontwing_2546_instances, &brevonmechfrontshoulder_2547_instances, &brevonmechfrontarm_2548_instances, &brevonmechfrontclaw_2549_instances, &brevonmechaxle_2550_instances, NULL};
    qualifier_30.set(16, &qualifier_30_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(12, &qualifier_19_instances[0]);
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
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, &levelcreekplatform_2424_instances, NULL};
    qualifier_12.set(3, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &jcslidingplatform_2414_instances, &levelcreekplatform_2424_instances, &gimmickflyingleafplatformmask_2462_instances, NULL};
    qualifier_13.set(4, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0_2318(0, 0), 0);
    add_background_object(create_levelparallaxpiece2_2319(0, 96), 0);
    add_background_object(create_levelparallaxpiece1_2(0, 208), 0);
    add_background_object(create_jcoceanbottom_2455(0, 1872), 0);
    add_background_object(create_levelparallaxpiece7_2499(0, 192), 0);
    add_background_object(create_levelparallaxpiece6_2322(0, 1600), 0);
    add_object(create_levelparalaxwatersurface_7(0, 445), 0);
    add_object(create_levellightningbolt_2512(69, 0), 1);
    add_object(create_brevonmechbackground_2513(420, -75), 1);
    add_background_object(create_jcrockpillar2_2357(3336, 944), 2);
    add_background_object(create_jcplanet3_2356(2936, 1384), 2);
    add_background_object(create_jcvinewall_2459(2696, 1408), 2);
    add_background_object(create_jcvinewall_2459(2696, 1536), 2);
    add_background_object(create_jcplanet4_2351(2712, 1536), 2);
    add_background_object(create_jcvinewall_2459(2696, 1280), 2);
    add_background_object(create_jcvinewall_2459(2336, 1280), 2);
    add_background_object(create_jcvinewall_2459(2336, 1408), 2);
    add_background_object(create_jcvinewall_2459(2336, 1536), 2);
    add_background_object(create_jcvinewall_2459(2576, 1280), 2);
    add_background_object(create_jcvinewall_2459(2576, 1408), 2);
    add_background_object(create_jcvinewall_2459(2576, 1536), 2);
    add_background_object(create_jcvinewall_2459(2456, 1280), 2);
    add_background_object(create_jcvinewall_2459(2456, 1408), 2);
    add_background_object(create_jcvinewall_2459(2456, 1536), 2);
    add_background_object(create_jcrockpillar1_2344(1248, 1440), 2);
    add_background_object(create_jcplanet4_2351(776, 1472), 2);
    add_background_object(create_jcplanet3_2356(608, 1448), 2);
    add_background_object(create_jcplant1_2349(592, 1488), 2);
    add_background_object(create_jcplant1_2349(672, 1472), 2);
    add_background_object(create_jcrock1_2345(976, 1616), 2);
    add_background_object(create_jcrock1_2345(1128, 1680), 2);
    add_background_object(create_jcrockpillar1_2344(1392, 1472), 2);
    add_background_object(create_jcrockpillar2_2357(1696, 1424), 2);
    add_background_object(create_jccoral2_2353(1104, 1624), 2);
    add_background_object(create_jccoral1_2352(1208, 1648), 2);
    add_background_object(create_jcrock1_2345(1344, 1640), 2);
    add_background_object(create_jcrock2_2346(2016, 1648), 2);
    add_background_object(create_jcrock2_2346(2224, 1608), 2);
    add_background_object(create_jcplant1_2349(2320, 1560), 2);
    add_background_object(create_jcplant1_2349(2512, 1544), 2);
    add_background_object(create_jcplant1_2349(2584, 1560), 2);
    add_background_object(create_jcplanet3_2356(2840, 1408), 2);
    add_background_object(create_jcplanet3_2356(2792, 1480), 2);
    add_background_object(create_jcplanet3_2356(2680, 1512), 2);
    add_background_object(create_jcplanet4_2351(2968, 1360), 2);
    add_background_object(create_jcvinewall_2459(3720, 1000), 2);
    add_background_object(create_jcvinewall_2459(3720, 1128), 2);
    add_background_object(create_jcvinewall_2459(3720, 1256), 2);
    add_background_object(create_jcvinewall_2459(3720, 1384), 2);
    add_background_object(create_jcvinewall_2459(3720, 1512), 2);
    add_background_object(create_jcvinewall_2459(3600, 1000), 2);
    add_background_object(create_jcvinewall_2459(3600, 1128), 2);
    add_background_object(create_jcplant1_2349(3296, 1544), 2);
    add_background_object(create_jcplant1_2349(3200, 1520), 2);
    add_background_object(create_jcplant1_2349(3040, 1400), 2);
    add_background_object(create_jcplant1_2349(3472, 1560), 2);
    add_background_object(create_jcplant1_2349(3520, 1544), 2);
    add_background_object(create_jcrock1_2345(3648, 544), 2);
    add_background_object(create_jcrock1_2345(3904, 688), 2);
    add_background_object(create_jcrock2_2346(4144, 832), 2);
    add_background_object(create_jcrockpillar1_2344(5264, 864), 2);
    add_background_object(create_jcrockpillar2_2357(3232, 640), 2);
    add_background_object(create_jcrockpillar1_2344(3232, 320), 2);
    add_background_object(create_jcrockpillar1_2344(3336, 0), 2);
    add_background_object(create_jcrock1_2345(5616, 904), 2);
    add_background_object(create_jcrock2_2346(5544, 936), 2);
    add_background_object(create_jcrock2_2346(6056, 912), 2);
    add_background_object(create_jcrock1_2345(6336, 840), 2);
    add_background_object(create_jcrock1_2345(6664, 616), 2);
    add_background_object(create_jcplant3_2354(6832, 656), 2);
    add_background_object(create_jcrockpillar1_2344(9032, 1288), 2);
    add_background_object(create_jcrockpillar1_2344(8728, 1416), 2);
    add_background_object(create_jcrock2_2346(9896, 720), 2);
    add_background_object(create_jcrock2_2346(9624, 928), 2);
    add_background_object(create_jcrock1_2345(9800, 752), 2);
    add_background_object(create_jcrockpillar2_2357(9432, 912), 2);
    add_background_object(create_jcrockpillar2_2357(9328, 608), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(13944, -171), 2);
    add_object(create_link_352(96, -184), 2);
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
    add_object(create_objectfuel_528(-148, 524), 2);
    add_object(create_jcslidingplatformmask_2363(4440, -288), 2);
    add_object(create_gimmickflyingleafplatform_2460(3448, 1208), 2);
    add_object(create_enemyplantturretusstalk_2364(-186, 2112), 2);
    add_object(create_enemyplantturretus_2365(-190, 2107), 2);
    add_object(create_enemyplantturretushat_2366(-190, 2112), 2);
    add_object(create_gimmickleafplatformback_2358(2480, 1727), 2);
    add_object(create_gimmickleafplatform1_2359(2480, 1487), 2);
    add_object(create_gimmickleafplatform2_2360(2480, 1487), 2);
    add_object(create_brevonmechbackshoulder_2514(11044, 516), 2);
    add_object(create_brevonmechbackclaw_2515(11071, -123), 2);
    add_object(create_brevonmechbackarm_2516(11133, -125), 2);
    add_object(create_npcsyntaxleftarm_2517(11337, 570), 2);
    add_object(create_npcsyntaxleftarm_2517(11353, 570), 2);
    add_object(create_npcsyntaxleftarm_2517(11369, 570), 2);
    add_object(create_npcsyntaxleftarm_2517(11385, 570), 2);
    add_object(create_npcsyntaxleftarm_2517(11401, 570), 2);
    add_object(create_npcsyntaxleftarm_2517(11417, 570), 2);
    add_object(create_npcsyntaxleftarm_2517(11433, 570), 2);
    add_object(create_npcsyntaxleftarm_2517(11321, 570), 2);
    add_object(create_npcsyntaxleftarm_2517(11305, 570), 2);
    add_object(create_npcsyntaxrightarm_2518(11337, 578), 2);
    add_object(create_npcsyntaxrightarm_2518(11353, 578), 2);
    add_object(create_npcsyntaxrightarm_2518(11369, 578), 2);
    add_object(create_npcsyntaxrightarm_2518(11385, 578), 2);
    add_object(create_npcsyntaxrightarm_2518(11401, 578), 2);
    add_object(create_npcsyntaxrightarm_2518(11417, 578), 2);
    add_object(create_npcsyntaxrightarm_2518(11433, 578), 2);
    add_object(create_npcsyntaxrightarm_2518(11321, 578), 2);
    add_object(create_npcsyntaxrightarm_2518(11305, 578), 2);
    add_object(create_npcsyntax_2519(11296, 525), 2);
    add_object(create_npchostagetorque_2520(11422, 521), 2);
    add_object(create_brevonmechflyby_11(11680, -65), 2);
    add_object(create_bossgunshipplatform_2521(12360, 824), 2);
    add_object(create_bossgunshiptrooper_2522(12375, 855), 2);
    add_object(create_bossgunshiptrooper_2522(12343, 855), 2);
    add_object(create_bossgunshipmissilerackleft_2523(12375, 728), 2);
    add_object(create_bossgunshipmissilerackright_2524(12352, 728), 2);
    add_object(create_bossgunshipbladeleft_2525(12208, 648), 2);
    add_object(create_bossgunshipbladeright_2526(12512, 648), 2);
    add_object(create_bossgunship_2527(12364, 728), 2);
    add_object(create_bossgunshipturbineleft_2528(12216, 696), 2);
    add_object(create_bossgunshipturbineright_2529(12511, 696), 2);
    add_object(create_bossgunshiplight_2530(12256, 712), 2);
    add_object(create_bossgunshiplight_2530(12472, 712), 2);
    add_object(create_bossgunshiplight_2530(12296, 712), 2);
    add_object(create_bossgunshiplight_2530(12432, 712), 2);
    add_object(create_bossgunshiplightleft_2531(12216, 728), 2);
    add_object(create_bossgunshiplightleft_2531(12216, 712), 2);
    add_object(create_bossgunshiplightleft_2531(12216, 696), 2);
    add_object(create_bossgunshiplightleft_2531(12216, 680), 2);
    add_object(create_bossgunshiplightright_2532(12512, 728), 2);
    add_object(create_bossgunshiplightright_2532(12512, 712), 2);
    add_object(create_bossgunshiplightright_2532(12512, 696), 2);
    add_object(create_bossgunshiplightright_2532(12512, 680), 2);
    add_object(create_bossgunshipcannonleft_2533(12324, 760), 2);
    add_object(create_bossgunshipcannonright_2534(12404, 760), 2);
    add_object(create_bossgunshippilot_2535(12364, 728), 2);
    add_object(create_bossgunshiphitbox_2536(12364, 744), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_jcbud2_2368(8224, 1480), 3);
    add_background_object(create_jcbud2_2368(8376, 1584), 3);
    add_background_object(create_jcbud1_2367(8328, 1560), 3);
    add_background_object(create_jcbud2_2368(8080, 1416), 3);
    add_background_object(create_jcbud1_2367(7872, 1272), 3);
    add_background_object(create_jcbud2_2368(7952, 1312), 3);
    add_background_object(create_jcbud1_2367(7072, 816), 3);
    add_background_object(create_jcbud2_2368(7216, 880), 3);
    add_background_object(create_jcbud1_2367(7360, 968), 3);
    add_background_object(create_jcbud2_2368(7440, 1008), 3);
    add_background_object(create_jcbud2_2368(7624, 1120), 3);
    add_background_object(create_jcbud1_2367(6200, 864), 3);
    add_background_object(create_jcbud2_2368(5504, 936), 3);
    add_background_object(create_jcbud1_2367(5200, 784), 3);
    add_background_object(create_jcbud2_2368(5256, 768), 3);
    add_background_object(create_jcbud1_2367(4952, 1192), 3);
    add_background_object(create_jcbud2_2368(4688, 1128), 3);
    add_background_object(create_jcbud2_2368(4360, 912), 3);
    add_background_object(create_jcbud2_2368(4464, 1000), 3);
    add_background_object(create_jcbud1_2367(4520, 1032), 3);
    add_background_object(create_jcbud1_2367(4280, 880), 3);
    add_background_object(create_jcbud2_2368(3896, 648), 3);
    add_background_object(create_jcflatground1_2375(9736, 808), 3);
    add_background_object(create_jcrockpillar2_2357(13664, 1008), 3);
    add_background_object(create_jcrockpillar1_2344(13664, 688), 3);
    add_background_object(create_jcrockpillar1_2344(13192, 1000), 3);
    add_background_object(create_jcrockpillar2_2357(13192, 696), 3);
    add_background_object(create_jcrockpillar2_2357(13192, 1320), 3);
    add_background_object(create_jcrockpillar1_2344(13664, 1312), 3);
    add_background_object(create_jcrock2_2346(13752, 1520), 3);
    add_background_object(create_jcrock2_2346(13232, 1520), 3);
    add_background_object(create_jcflatground1_2375(13312, 1616), 3);
    add_background_object(create_jcflatground1_2375(13696, 1616), 3);
    add_background_object(create_jcflatground1_2375(13512, 1616), 3);
    add_background_object(create_jcplant1_2349(12520, 608), 3);
    add_background_object(create_jcplant1_2349(12936, 608), 3);
    add_background_object(create_jcplanet3_2356(13536, 576), 3);
    add_background_object(create_jcplant1_2349(13344, 600), 3);
    add_background_object(create_jcrock2_2346(13744, 560), 3);
    add_background_object(create_jcdirt1_594(11008, 648), 3);
    add_background_object(create_jcflatground1_2375(10000, 624), 3);
    add_background_object(create_jcflatground8_2406(9320, 1096), 3);
    add_background_object(create_jcflatground1_2375(9696, 1008), 3);
    add_background_object(create_jcflatground1_2375(9568, 1200), 3);
    add_background_object(create_jcdirt1_594(9216, 1608), 3);
    add_background_object(create_jcdirt1_594(8960, 1608), 3);
    add_background_object(create_jcdirt1_594(8704, 1616), 3);
    add_background_object(create_jcdirt1_594(8448, 1632), 3);
    add_background_object(create_jcdirt11_2387(8192, 1512), 3);
    add_background_object(create_jcdirt1_594(8192, 1632), 3);
    add_background_object(create_jcdirt1_594(7936, 1504), 3);
    add_background_object(create_jcdirt11_2387(7936, 1360), 3);
    add_background_object(create_jcdirt1_594(7424, 1392), 3);
    add_background_object(create_jcdirt1_594(7680, 1352), 3);
    add_background_object(create_jcdirt11_2387(7680, 1208), 3);
    add_background_object(create_jcdirt1_594(7424, 1200), 3);
    add_background_object(create_jcdirt11_2387(7424, 1056), 3);
    add_background_object(create_jcdirt1_594(7168, 1048), 3);
    add_background_object(create_jcdirt11_2387(6912, 752), 3);
    add_background_object(create_jcdirt11_2387(7168, 904), 3);
    add_background_object(create_jcdirt1_594(6912, 904), 3);
    add_background_object(create_jcdirt23_2435(6528, 736), 3);
    add_background_object(create_jcflatground7_2369(5736, 960), 3);
    add_background_object(create_jcdirt1_594(4608, 1240), 3);
    add_background_object(create_jcdirt1_594(4864, 1240), 3);
    add_background_object(create_jcdirt7_2371(4544, 1096), 3);
    add_background_object(create_jcdirt7_2371(4480, 1088), 3);
    add_background_object(create_jcdirt23_2435(4992, 1048), 3);
    add_background_object(create_jcdirt15_2386(4464, 1048), 3);
    add_background_object(create_jcdirt11_2387(4344, 952), 3);
    add_background_object(create_jcdirt1_594(4088, 936), 3);
    add_background_object(create_jcdirt15_2386(4184, 872), 3);
    add_background_object(create_jcdirt7_2371(3840, 784), 3);
    add_background_object(create_jcdirt7_2371(3928, 768), 3);
    add_background_object(create_jcdirt7_2371(3992, 784), 3);
    add_background_object(create_jcdirt11_2387(4056, 784), 3);
    add_background_object(create_jcdirt11_2387(3840, 656), 3);
    add_background_object(create_jcgrass5_2397(3552, 984), 3);
    add_background_object(create_jcdirt6_2398(3552, 992), 3);
    add_background_object(create_dvceilingoverlay_915(3552, 992), 3);
    add_background_object(create_jcgrass6_2394(3328, 1072), 3);
    add_background_object(create_jcdirt17_2381(3352, 1264), 3);
    add_background_object(create_jcdirt7_2371(3472, 1264), 3);
    add_background_object(create_jcdirt1_594(3584, 1600), 3);
    add_background_object(create_jcdirt1_594(3328, 1600), 3);
    add_background_object(create_jcdirt10_2384(2832, 1448), 3);
    add_background_object(create_jcdirt11_2387(3128, 1448), 3);
    add_background_object(create_jcdirt14_2383(2768, 1544), 3);
    add_background_object(create_jcdirt15_2386(3256, 1544), 3);
    add_background_object(create_jcdirt7_2371(2832, 1544), 3);
    add_background_object(create_jcdirt7_2371(2896, 1544), 3);
    add_background_object(create_jcdirt7_2371(2960, 1544), 3);
    add_background_object(create_jcdirt7_2371(3064, 1544), 3);
    add_background_object(create_jcdirt7_2371(3192, 1544), 3);
    add_background_object(create_jcdirt7_2371(3128, 1544), 3);
    add_background_object(create_jcdirt7_2371(3000, 1448), 3);
    add_background_object(create_jcdirt7_2371(3064, 1448), 3);
    add_background_object(create_jcdirt7_2371(2960, 1448), 3);
    add_background_object(create_jcdirt1_594(2816, 1608), 3);
    add_background_object(create_jcdirt1_594(2816, 1800), 3);
    add_background_object(create_jcdirt1_594(3072, 1608), 3);
    add_background_object(create_jcdirt1_594(3072, 1800), 3);
    add_background_object(create_jcdirt1_594(2560, 1608), 3);
    add_background_object(create_jcdirt1_594(2304, 1608), 3);
    add_background_object(create_jcdirt1_594(2304, 1800), 3);
    add_background_object(create_jcflatground1_2375(1176, 1720), 3);
    add_background_object(create_jcflatground1_2375(1440, 1720), 3);
    add_background_object(create_jcdirt1_594(1792, 1736), 3);
    add_background_object(create_jcdirt1_594(1536, 1736), 3);
    add_background_object(create_jcdirt1_594(1280, 1736), 3);
    add_background_object(create_jcdirt23_2435(384, 1544), 3);
    add_background_object(create_jcdirt1_594(512, 1544), 3);
    add_background_object(create_jcplant1_2349(-272, 2136), 3);
    add_background_object(create_seedspawnerstalk_2407(12064, -144), 3);
    add_background_object(create_jcgrass2_2393(-240, 2184), 3);
    add_background_object(create_jcgrass5_2397(-272, 2184), 3);
    add_background_object(create_jcgrass6_2394(-176, 2184), 3);
    add_background_object(create_jcbamboo2_2348(-448, 1640), 3);
    add_background_object(create_jcbamboo3_2341(-440, 1656), 3);
    add_background_object(create_jcbamboo1_2347(-400, 1568), 3);
    add_background_object(create_jcbamboo2_2350(-352, 1656), 3);
    add_background_object(create_jcbamboo3_2340(-312, 1576), 3);
    add_background_object(create_jcbamboo4_2342(-376, 1664), 3);
    add_background_object(create_jcbrokenslope_2372(-440, 1624), 3);
    add_background_object(create_jcdirt10_2384(-424, 1648), 3);
    add_background_object(create_jcdirt11_2387(-424, 1648), 3);
    add_background_object(create_jcdirt12_2388(-424, 1648), 3);
    add_background_object(create_jcdirt13_2389(-424, 1664), 3);
    add_background_object(create_jcdirt14_2383(-384, 1688), 3);
    add_background_object(create_jcdirt15_2386(-392, 1680), 3);
    add_background_object(create_jcdirt16_2376(-384, 1672), 3);
    add_background_object(create_jcdirt17_2381(-392, 1688), 3);
    add_background_object(create_jcdirt18_2373(-392, 1688), 3);
    add_background_object(create_jcdirt2_2379(-360, 1688), 3);
    add_background_object(create_jcdirt20_2436(-416, 1616), 3);
    add_background_object(create_jcdirt22_2438(-416, 1616), 3);
    add_background_object(create_jcdirt23_2435(-416, 1616), 3);
    add_background_object(create_jcdirt24_2439(-416, 1616), 3);
    add_background_object(create_jcdirt3_2380(-352, 1672), 3);
    add_background_object(create_jcdirt4_2374(-416, 1616), 3);
    add_background_object(create_jcdirt5_2377(-416, 1616), 3);
    add_background_object(create_jcdirt6_2398(-416, 1664), 3);
    add_background_object(create_jcdirt7_2371(-384, 1648), 3);
    add_background_object(create_jcdirt8_2382(-424, 1608), 3);
    add_background_object(create_jcdirt9_2390(-424, 1616), 3);
    add_background_object(create_jcdirt1_594(-496, 1624), 3);
    add_background_object(create_jcflatground1_2375(-424, 1688), 3);
    add_background_object(create_jcflatground5_2385(-488, 1704), 3);
    add_background_object(create_jcflatground6_2370(-416, 1704), 3);
    add_background_object(create_jcflatground7_2369(-296, 1696), 3);
    add_background_object(create_jcflatground8_2406(-344, 1680), 3);
    add_background_object(create_jcgrass1_2392(-408, 1712), 3);
    add_background_object(create_jcgrass10_2404(-432, 1696), 3);
    add_background_object(create_jcgrass2_2393(-408, 1720), 3);
    add_background_object(create_jcgrass3_2395(-432, 1768), 3);
    add_background_object(create_jcgrass4_2396(-392, 1736), 3);
    add_background_object(create_jcgrass5_2397(-376, 1720), 3);
    add_background_object(create_jcgrass6_2394(-376, 1712), 3);
    add_background_object(create_jcgrass7_2402(-400, 1680), 3);
    add_background_object(create_jcgrass8_2403(-400, 1688), 3);
    add_background_object(create_jcgrass9_2405(-424, 1688), 3);
    add_background_object(create_jcladder_2491(-368, 1704), 3);
    add_background_object(create_jcplanet3_2356(-384, 1680), 3);
    add_background_object(create_jcplanet4_2351(-384, 1712), 3);
    add_background_object(create_jcplant1_2349(-392, 1704), 3);
    add_background_object(create_jcplant3_2354(-408, 1696), 3);
    add_background_object(create_jcrock1_2345(-408, 1680), 3);
    add_background_object(create_jcrock2_2346(-448, 1696), 3);
    add_background_object(create_jcrockpillar1_2344(-520, 1592), 3);
    add_background_object(create_jcrockpillar2_2357(-504, 1584), 3);
    add_background_object(create_jcvinewall_2459(-552, 1704), 3);
    add_background_object(create_jcvinewall2_2458(-576, 1760), 3);
    add_background_object(create_jcgrass5_2397(512, 1536), 3);
    add_background_object(create_jcgrass3_2395(544, 1528), 3);
    add_background_object(create_jcdirt1_594(512, 1736), 3);
    add_background_object(create_jcdirt5_2377(384, 1736), 3);
    add_background_object(create_jcdirt23_2435(256, 1736), 3);
    add_background_object(create_jcdirt1_594(512, 1928), 3);
    add_background_object(create_jcdirt1_594(256, 1928), 3);
    add_background_object(create_jcdirt1_594(0, 1928), 3);
    add_background_object(create_jcflatground5_2385(0, 1920), 3);
    add_background_object(create_jcflatground5_2385(128, 1920), 3);
    add_background_object(create_jcflatground6_2370(256, 1920), 3);
    add_background_object(create_jcdirt1_594(768, 1544), 3);
    add_background_object(create_jcdirt1_594(768, 1736), 3);
    add_background_object(create_jcdirt1_594(768, 1928), 3);
    add_background_object(create_jcgrass3_2395(672, 1520), 3);
    add_background_object(create_jcgrass4_2396(800, 1520), 3);
    add_background_object(create_jcdirt1_594(512, 2120), 3);
    add_background_object(create_jcdirt1_594(256, 2120), 3);
    add_background_object(create_jcdirt1_594(0, 2120), 3);
    add_background_object(create_jcdirt1_594(768, 2120), 3);
    add_background_object(create_jcdirt1_594(1280, 1928), 3);
    add_background_object(create_jcdirt1_594(1280, 2120), 3);
    add_background_object(create_jcdirt1_594(1536, 1928), 3);
    add_background_object(create_jcdirt1_594(1536, 2120), 3);
    add_background_object(create_jcdirt1_594(1536, 1288), 3);
    add_background_object(create_jcdirt6_2398(1664, 1464), 3);
    add_background_object(create_dvceilingoverlay_915(1664, 1464), 3);
    add_background_object(create_jcdirt1_594(1536, 1096), 3);
    add_background_object(create_jcdirt8_2382(1280, 1288), 3);
    add_background_object(create_jcdirt5_2377(1408, 1288), 3);
    add_background_object(create_jcdirt6_2398(1536, 1464), 3);
    add_background_object(create_dvceilingoverlay_915(1536, 1464), 3);
    add_background_object(create_jcdirt1_594(1280, 904), 3);
    add_background_object(create_jcdirt1_594(1536, 904), 3);
    add_background_object(create_jcdirt1_594(1280, 712), 3);
    add_background_object(create_jcdirt1_594(1536, 712), 3);
    add_background_object(create_jcdirt1_594(1280, 520), 3);
    add_background_object(create_jcdirt1_594(1536, 520), 3);
    add_background_object(create_jcdirt1_594(1280, 328), 3);
    add_background_object(create_jcdirt1_594(1536, 328), 3);
    add_background_object(create_jcdirt1_594(1280, 136), 3);
    add_background_object(create_jcdirt1_594(1536, 136), 3);
    add_background_object(create_jcdirt1_594(1280, -56), 3);
    add_background_object(create_jcdirt1_594(1536, -56), 3);
    add_background_object(create_jcdirt2_2379(1280, 904), 3);
    add_background_object(create_jcdirt2_2379(1280, 968), 3);
    add_background_object(create_jcdirt2_2379(1280, 1032), 3);
    add_background_object(create_jcdirt2_2379(1280, 712), 3);
    add_background_object(create_jcdirt2_2379(1280, 776), 3);
    add_background_object(create_jcdirt2_2379(1280, 840), 3);
    add_background_object(create_jcdirt2_2379(1280, 520), 3);
    add_background_object(create_jcdirt2_2379(1280, 584), 3);
    add_background_object(create_jcdirt2_2379(1280, 648), 3);
    add_background_object(create_jcdirt2_2379(1280, 328), 3);
    add_background_object(create_jcdirt2_2379(1280, 392), 3);
    add_background_object(create_jcdirt2_2379(1280, 456), 3);
    add_background_object(create_jcdirt2_2379(1280, 136), 3);
    add_background_object(create_jcdirt2_2379(1280, 200), 3);
    add_background_object(create_jcdirt2_2379(1280, 264), 3);
    add_background_object(create_jcdirt2_2379(1280, 80), 3);
    add_background_object(create_dvceilingoverlay_915(1352, 1448), 3);
    add_background_object(create_jcdirt6_2398(1408, 1464), 3);
    add_background_object(create_jcdirt1_594(1792, 1928), 3);
    add_background_object(create_jcdirt1_594(1792, 2120), 3);
    add_background_object(create_jcdirt1_594(1024, 1736), 3);
    add_background_object(create_jcdirt1_594(1024, 1928), 3);
    add_background_object(create_jcdirt1_594(1024, 2120), 3);
    add_background_object(create_jcflatground5_2385(1024, 1696), 3);
    add_background_object(create_jcflatground5_2385(1176, 1720), 3);
    add_background_object(create_jcflatground5_2385(1304, 1720), 3);
    add_background_object(create_jcflatground5_2385(1432, 1720), 3);
    add_background_object(create_jcflatground5_2385(1560, 1720), 3);
    add_background_object(create_jcflatground5_2385(1688, 1720), 3);
    add_background_object(create_jcflatground5_2385(1816, 1720), 3);
    add_background_object(create_jcdirt1_594(1280, 1096), 3);
    add_background_object(create_jcdirt2_2379(1280, 1096), 3);
    add_background_object(create_jcdirt2_2379(1280, 1160), 3);
    add_background_object(create_jcdirt2_2379(1280, 1224), 3);
    add_background_object(create_jcgrass2_2393(928, 1528), 3);
    add_background_object(create_jcdirt3_2380(1008, 1536), 3);
    add_background_object(create_jcgrass6_2394(992, 1528), 3);
    add_background_object(create_jcdirt3_2380(1008, 1600), 3);
    add_background_object(create_jcdirt3_2380(1008, 1664), 3);
    add_background_object(create_jcflatground6_2370(1152, 1696), 3);
    add_background_object(create_jcflatground7_2369(1152, 1720), 3);
    add_background_object(create_jcflatground7_2369(1000, 1696), 3);
    add_background_object(create_jcdirt1_594(1792, 1288), 3);
    add_background_object(create_jcdirt6_2398(1920, 1464), 3);
    add_background_object(create_dvceilingoverlay_915(1920, 1464), 3);
    add_background_object(create_jcdirt1_594(1792, 1096), 3);
    add_background_object(create_jcdirt6_2398(1792, 1464), 3);
    add_background_object(create_dvceilingoverlay_915(1792, 1464), 3);
    add_background_object(create_jcdirt1_594(1792, 904), 3);
    add_background_object(create_jcdirt1_594(1792, 712), 3);
    add_background_object(create_jcdirt1_594(1792, 520), 3);
    add_background_object(create_jcdirt1_594(1792, 328), 3);
    add_background_object(create_jcdirt1_594(1792, 136), 3);
    add_background_object(create_jcdirt1_594(1792, -56), 3);
    add_background_object(create_jcdirt1_594(2048, 1736), 3);
    add_background_object(create_jcdirt1_594(2048, 1928), 3);
    add_background_object(create_jcflatground5_2385(1944, 1720), 3);
    add_background_object(create_jcflatground5_2385(2096, 1696), 3);
    add_background_object(create_jcflatground7_2369(2072, 1696), 3);
    add_background_object(create_jcflatground6_2370(2072, 1720), 3);
    add_background_object(create_jcdirt1_594(2304, 1992), 3);
    add_background_object(create_jcdirt12_2388(2256, 1744), 3);
    add_background_object(create_jcflatground8_2406(2224, 1696), 3);
    add_background_object(create_jcdirt2_2379(2304, 1616), 3);
    add_background_object(create_jcdirt2_2379(2304, 1680), 3);
    add_background_object(create_jcflatground6_2370(2288, 1696), 3);
    add_background_object(create_jcgrass5_2397(2304, 1600), 3);
    add_background_object(create_jcgrass3_2395(2336, 1592), 3);
    add_background_object(create_jcgrass3_2395(2464, 1584), 3);
    add_background_object(create_jcdirt1_594(2560, 1800), 3);
    add_background_object(create_jcgrass4_2396(2592, 1584), 3);
    add_background_object(create_jcdirt9_2390(2176, 1288), 3);
    add_background_object(create_jcdirt4_2374(2048, 1288), 3);
    add_background_object(create_jcdirt6_2398(2048, 1464), 3);
    add_background_object(create_dvceilingoverlay_915(2048, 1464), 3);
    add_background_object(create_jcdirt1_594(2048, 1096), 3);
    add_background_object(create_jcdirt1_594(2048, 904), 3);
    add_background_object(create_jcdirt1_594(2048, 712), 3);
    add_background_object(create_jcdirt1_594(2048, 520), 3);
    add_background_object(create_jcdirt1_594(2304, 1096), 3);
    add_background_object(create_jcdirt6_2398(2304, 1272), 3);
    add_background_object(create_dvceilingoverlay_915(2304, 1272), 3);
    add_background_object(create_jcdirt6_2398(2432, 1272), 3);
    add_background_object(create_dvceilingoverlay_915(2432, 1272), 3);
    add_background_object(create_jcdirt1_594(2560, 1096), 3);
    add_background_object(create_jcdirt6_2398(2560, 1272), 3);
    add_background_object(create_dvceilingoverlay_915(2560, 1272), 3);
    add_background_object(create_jcdirt6_2398(2688, 1272), 3);
    add_background_object(create_dvceilingoverlay_915(2688, 1272), 3);
    add_background_object(create_jcdirt9_2390(2816, 1096), 3);
    add_background_object(create_jcgrass3_2395(2976, 1432), 3);
    add_background_object(create_jcdirt13_2389(2832, 1528), 3);
    add_background_object(create_jcdirt12_2388(3144, 1528), 3);
    add_background_object(create_jcgrass10_2404(3104, 1432), 3);
    add_background_object(create_jcgrass8_2403(2848, 1440), 3);
    add_background_object(create_jcgrass7_2402(2720, 1512), 3);
    add_background_object(create_jcdirt13_2389(2928, 1472), 3);
    add_background_object(create_jcdirt12_2388(3032, 1464), 3);
    add_background_object(create_jcdirt12_2388(2984, 1536), 3);
    add_background_object(create_jcdirt12_2388(3232, 1584), 3);
    add_background_object(create_jcgrass9_2405(3232, 1504), 3);
    add_background_object(create_jcgrass4_2396(3360, 1584), 3);
    add_background_object(create_jcgrass3_2395(3488, 1584), 3);
    add_background_object(create_jcdirt1_594(2304, 904), 3);
    add_background_object(create_jcdirt1_594(2560, 904), 3);
    add_background_object(create_jcdirt13_2389(2704, 1120), 3);
    add_background_object(create_jcdirt1_594(2816, 904), 3);
    add_background_object(create_jcdirt6_2398(2944, 1080), 3);
    add_background_object(create_dvceilingoverlay_915(2944, 1080), 3);
    add_background_object(create_jcdirt1_594(3328, 1792), 3);
    add_background_object(create_jcdirt1_594(3584, 1792), 3);
    add_background_object(create_jcdirt23_2435(3712, 1408), 3);
    add_background_object(create_jcgrass4_2396(3616, 1584), 3);
    add_background_object(create_jcgrass6_2394(3744, 1592), 3);
    add_background_object(create_jcdirt1_594(3840, 1600), 3);
    add_background_object(create_jcdirt1_594(3840, 1792), 3);
    add_background_object(create_jcdirt1_594(3840, 1216), 3);
    add_background_object(create_jcdirt1_594(3840, 1408), 3);
    add_background_object(create_jcdirt1_594(3840, 832), 3);
    add_background_object(create_jcdirt1_594(3840, 1024), 3);
    add_background_object(create_jcdirt22_2438(3712, 1024), 3);
    add_background_object(create_jcdirt1_594(3584, 832), 3);
    add_background_object(create_jcdirt2_2379(3840, 1216), 3);
    add_background_object(create_jcdirt2_2379(3840, 1280), 3);
    add_background_object(create_jcdirt2_2379(3840, 1344), 3);
    add_background_object(create_jcdirt18_2373(3664, 1264), 3);
    add_background_object(create_jcdirt7_2371(3600, 1264), 3);
    add_background_object(create_jcdirt7_2371(3536, 1264), 3);
    add_background_object(create_jcgrass6_2394(3696, 1248), 3);
    add_background_object(create_jcgrass4_2396(3568, 1240), 3);
    add_background_object(create_jcgrass2_2393(3504, 1240), 3);
    add_background_object(create_jcdirt6_2398(3536, 1312), 3);
    add_background_object(create_jcdirt1_594(3072, 904), 3);
    add_background_object(create_jcdirt6_2398(3104, 1080), 3);
    add_background_object(create_dvceilingoverlay_915(3104, 1080), 3);
    add_background_object(create_jcdirt3_2380(3312, 1032), 3);
    add_background_object(create_jcdirt3_2380(3312, 968), 3);
    add_background_object(create_jcdirt3_2380(3312, 904), 3);
    add_background_object(create_jcdirt6_2398(3232, 1080), 3);
    add_background_object(create_dvceilingoverlay_915(3232, 1080), 3);
    add_background_object(create_jcdirt7_2371(3408, 1264), 3);
    add_background_object(create_jcdirt6_2398(3408, 1312), 3);
    add_background_object(create_dvceilingoverlay_915(3408, 1312), 3);
    add_background_object(create_dvceilingoverlay_915(3536, 1312), 3);
    add_background_object(create_jcgrass5_2397(3344, 1240), 3);
    add_background_object(create_jcgrass1_2392(3376, 1240), 3);
    add_background_object(create_jcdirt2_2379(3584, 832), 3);
    add_background_object(create_jcdirt2_2379(3584, 896), 3);
    add_background_object(create_jcdirt2_2379(3584, 960), 3);
    add_background_object(create_jcdirt6_2398(3016, 1080), 3);
    add_background_object(create_dvceilingoverlay_915(3016, 1080), 3);
    add_background_object(create_jcdirt1_594(3584, 640), 3);
    add_background_object(create_jcdirt1_594(3072, 712), 3);
    add_background_object(create_jcdirt3_2380(3312, 840), 3);
    add_background_object(create_jcdirt3_2380(3312, 776), 3);
    add_background_object(create_jcdirt3_2380(3312, 712), 3);
    add_background_object(create_jcdirt2_2379(3584, 640), 3);
    add_background_object(create_jcdirt2_2379(3584, 704), 3);
    add_background_object(create_jcdirt2_2379(3584, 768), 3);
    add_background_object(create_jcdirt1_594(3072, 520), 3);
    add_background_object(create_jcdirt3_2380(3312, 648), 3);
    add_background_object(create_jcdirt3_2380(3312, 584), 3);
    add_background_object(create_jcdirt3_2380(3312, 520), 3);
    add_background_object(create_jcdirt1_594(2944, 328), 3);
    add_background_object(create_jcdirt4_2374(3200, 328), 3);
    add_background_object(create_jcdirt9_2390(3328, 328), 3);
    add_background_object(create_jcdirt1_594(3072, 136), 3);
    add_background_object(create_jcdirt4_2374(3328, 136), 3);
    add_background_object(create_jcdirt9_2390(3456, 136), 3);
    add_background_object(create_jcdirt1_594(3200, -56), 3);
    add_background_object(create_jcdirt4_2374(3456, -56), 3);
    add_background_object(create_jcdirt9_2390(3584, -56), 3);
    add_background_object(create_jcdirt1_594(2944, -56), 3);
    add_background_object(create_jcdirt1_594(2816, 712), 3);
    add_background_object(create_jcdirt1_594(2816, 520), 3);
    add_background_object(create_jcdirt1_594(2816, 136), 3);
    add_background_object(create_jcflatground7_2369(3584, 600), 3);
    add_background_object(create_jcflatground5_2385(3608, 600), 3);
    add_background_object(create_jcflatground6_2370(3736, 600), 3);
    add_background_object(create_jcgrass5_2397(3760, 624), 3);
    add_background_object(create_jcgrass10_2404(3792, 624), 3);
    add_background_object(create_jcgrass9_2405(3920, 696), 3);
    add_background_object(create_jcdirt1_594(4096, 1128), 3);
    add_background_object(create_jcdirt12_2388(4072, 880), 3);
    add_background_object(create_jcgrass9_2405(4176, 848), 3);
    add_background_object(create_jcgrass10_2404(4048, 776), 3);
    add_background_object(create_jcdirt13_2389(3816, 736), 3);
    add_background_object(create_jcdirt12_2388(3928, 800), 3);
    add_background_object(create_jcdirt1_594(4352, 1128), 3);
    add_background_object(create_jcdirt1_594(4352, 1320), 3);
    add_background_object(create_jcdirt1_594(4096, 1320), 3);
    add_background_object(create_jcdirt12_2388(4360, 1048), 3);
    add_background_object(create_jcdirt12_2388(4272, 1024), 3);
    add_background_object(create_jcgrass10_2404(4304, 928), 3);
    add_background_object(create_jcdirt12_2388(4480, 1104), 3);
    add_background_object(create_jcgrass9_2405(4432, 1000), 3);
    add_background_object(create_jcdirt11_2387(4608, 1112), 3);
    add_background_object(create_jcgrass10_2404(4560, 1080), 3);
    add_background_object(create_jcgrass9_2405(4688, 1152), 3);
    add_background_object(create_jcgrass4_2396(4816, 1232), 3);
    add_background_object(create_jcgrass2_2393(4944, 1240), 3);
    add_background_object(create_jcgrass6_2394(5008, 1240), 3);
    add_background_object(create_jcdirt12_2388(4584, 1192), 3);
    add_background_object(create_jcdirt1_594(4608, 1432), 3);
    add_background_object(create_jcdirt1_594(4864, 1432), 3);
    add_background_object(create_jcdirt1_594(4352, 1512), 3);
    add_background_object(create_jcdirt12_2388(4544, 1496), 3);
    add_background_object(create_jcdirt1_594(5120, 1240), 3);
    add_background_object(create_jcdirt1_594(5120, 1432), 3);
    add_background_object(create_jcdirt1_594(5120, 856), 3);
    add_background_object(create_jcdirt1_594(5120, 1048), 3);
    add_background_object(create_jcdirt2_2379(5120, 856), 3);
    add_background_object(create_jcdirt2_2379(5120, 920), 3);
    add_background_object(create_jcdirt2_2379(5120, 984), 3);
    add_background_object(create_jcflatground7_2369(5120, 832), 3);
    add_background_object(create_jcflatground5_2385(5144, 832), 3);
    add_background_object(create_jcdirt1_594(5376, 1000), 3);
    add_background_object(create_jcflatground6_2370(5528, 832), 3);
    add_background_object(create_jcdirt3_2380(5360, 856), 3);
    add_background_object(create_jcflatground5_2385(5400, 832), 3);
    add_background_object(create_jcdirt3_2380(5360, 920), 3);
    add_background_object(create_jcflatground5_2385(5504, 992), 3);
    add_background_object(create_jcdirt12_2388(5336, 1024), 3);
    add_background_object(create_jcflatground7_2369(5352, 992), 3);
    add_background_object(create_jcflatground5_2385(5376, 992), 3);
    add_background_object(create_jcdirt1_594(5376, 1192), 3);
    add_background_object(create_jcdirt12_2388(5288, 1136), 3);
    add_background_object(create_jcdirt1_594(5632, 1000), 3);
    add_background_object(create_jcflatground5_2385(5760, 960), 3);
    add_background_object(create_jcflatground5_2385(5632, 992), 3);
    add_background_object(create_jcdirt1_594(5632, 1192), 3);
    add_background_object(create_jcdirt1_594(5888, 1000), 3);
    add_background_object(create_jcflatground5_2385(6016, 960), 3);
    add_background_object(create_jcflatground5_2385(5888, 960), 3);
    add_background_object(create_jcdirt1_594(5888, 1192), 3);
    add_background_object(create_jcflatground6_2370(5760, 992), 3);
    add_background_object(create_jcdirt1_594(6144, 928), 3);
    add_background_object(create_jcdirt1_594(6400, 928), 3);
    add_background_object(create_jcdirt1_594(4096, 1512), 3);
    add_background_object(create_jcflatground5_2385(5272, 832), 3);
    add_background_object(create_jcdirt2_2379(6144, 928), 3);
    add_background_object(create_jcflatground7_2369(6144, 920), 3);
    add_background_object(create_jcflatground6_2370(6144, 960), 3);
    add_background_object(create_jcdirt1_594(6144, 1120), 3);
    add_background_object(create_jcdirt1_594(6400, 1120), 3);
    add_background_object(create_jcflatground5_2385(6296, 888), 3);
    add_background_object(create_jcflatground7_2369(6272, 888), 3);
    add_background_object(create_jcflatground5_2385(6168, 920), 3);
    add_background_object(create_jcflatground6_2370(6296, 920), 3);
    add_background_object(create_jcflatground6_2370(6424, 888), 3);
    add_background_object(create_jcflatground5_2385(6424, 920), 3);
    add_background_object(create_jcflatground7_2369(6400, 920), 3);
    add_background_object(create_jcflatground6_2370(6552, 920), 3);
    add_background_object(create_jcdirt1_594(6656, 928), 3);
    add_background_object(create_jcdirt1_594(6656, 736), 3);
    add_background_object(create_jcdirt1_594(6656, 1120), 3);
    add_background_object(create_jcflatground5_2385(6680, 696), 3);
    add_background_object(create_jcflatground7_2369(6656, 696), 3);
    add_background_object(create_jcflatground6_2370(6808, 696), 3);
    add_background_object(create_jcgrass10_2404(6864, 720), 3);
    add_background_object(create_jcgrass9_2405(7760, 1248), 3);
    add_background_object(create_jcgrass5_2397(6832, 720), 3);
    add_background_object(create_jcgrass10_2404(7888, 1328), 3);
    add_background_object(create_jcgrass3_2395(8400, 1624), 3);
    add_background_object(create_jcgrass3_2395(8528, 1616), 3);
    add_background_object(create_jcgrass3_2395(8656, 1608), 3);
    add_background_object(create_jcgrass3_2395(8784, 1600), 3);
    add_background_object(create_jcgrass4_2396(8912, 1600), 3);
    add_background_object(create_jcdirt12_2388(6880, 856), 3);
    add_background_object(create_jcdirt12_2388(7056, 880), 3);
    add_background_object(create_jcgrass10_2404(7120, 872), 3);
    add_background_object(create_jcdirt13_2389(6952, 856), 3);
    add_background_object(create_jcgrass9_2405(6992, 792), 3);
    add_background_object(create_jcdirt13_2389(6848, 968), 3);
    add_background_object(create_jcdirt1_594(6912, 1096), 3);
    add_background_object(create_jcdirt13_2389(7232, 1016), 3);
    add_background_object(create_jcgrass9_2405(7248, 944), 3);
    add_background_object(create_jcdirt13_2389(7144, 992), 3);
    add_background_object(create_jcdirt1_594(7168, 1240), 3);
    add_background_object(create_jcdirt13_2389(7480, 1168), 3);
    add_background_object(create_jcdirt13_2389(7400, 1128), 3);
    add_background_object(create_jcgrass10_2404(7376, 1024), 3);
    add_background_object(create_jcgrass10_2404(7632, 1176), 3);
    add_background_object(create_jcgrass9_2405(7504, 1096), 3);
    add_background_object(create_jcdirt13_2389(7736, 1320), 3);
    add_background_object(create_jcdirt13_2389(7648, 1296), 3);
    add_background_object(create_jcdirt1_594(7680, 1544), 3);
    add_background_object(create_jcdirt13_2389(7992, 1472), 3);
    add_background_object(create_jcdirt13_2389(7904, 1448), 3);
    add_background_object(create_jcgrass9_2405(8016, 1400), 3);
    add_background_object(create_jcdirt1_594(7936, 1696), 3);
    add_background_object(create_jcdirt13_2389(8112, 1536), 3);
    add_background_object(create_jcdirt13_2389(8208, 1616), 3);
    add_background_object(create_jcgrass10_2404(8144, 1480), 3);
    add_background_object(create_jcgrass9_2405(8272, 1552), 3);
    add_background_object(create_jcdirt1_594(8192, 1824), 3);
    add_background_object(create_jcdirt1_594(8448, 1824), 3);
    add_background_object(create_jcdirt1_594(8704, 1808), 3);
    add_background_object(create_jcdirt1_594(8960, 1800), 3);
    add_background_object(create_jcgrass3_2395(9040, 1600), 3);
    add_background_object(create_jcdirt1_594(2304, 712), 3);
    add_background_object(create_jcdirt1_594(2560, 712), 3);
    add_background_object(create_jcdirt1_594(2304, 520), 3);
    add_background_object(create_jcdirt1_594(2560, 520), 3);
    add_background_object(create_jcdirt1_594(2048, 328), 3);
    add_background_object(create_jcdirt1_594(2304, 328), 3);
    add_background_object(create_jcdirt1_594(2560, 328), 3);
    add_background_object(create_jcdirt4_2374(2816, 328), 3);
    add_background_object(create_jcdirt1_594(2048, 136), 3);
    add_background_object(create_jcdirt1_594(2304, 136), 3);
    add_background_object(create_jcdirt1_594(2560, 136), 3);
    add_background_object(create_jcdirt1_594(2048, -56), 3);
    add_background_object(create_jcdirt1_594(2304, -56), 3);
    add_background_object(create_jcdirt1_594(2560, -56), 3);
    add_background_object(create_jcdirt4_2374(2816, -56), 3);
    add_background_object(create_jcdirt1_594(9216, 1800), 3);
    add_background_object(create_jcdirt23_2435(9344, 1416), 3);
    add_background_object(create_jcgrass2_2393(9296, 1608), 3);
    add_background_object(create_jcgrass6_2394(9360, 1608), 3);
    add_background_object(create_jcgrass4_2396(9168, 1600), 3);
    add_background_object(create_jcdirt1_594(9472, 1608), 3);
    add_background_object(create_jcdirt1_594(9472, 1800), 3);
    add_background_object(create_jcdirt1_594(9472, 1224), 3);
    add_background_object(create_jcdirt1_594(9472, 1416), 3);
    add_background_object(create_jcdirt2_2379(9472, 1224), 3);
    add_background_object(create_jcdirt2_2379(9472, 1288), 3);
    add_background_object(create_jcdirt2_2379(9472, 1352), 3);
    add_background_object(create_jcdirt1_594(9728, 1032), 3);
    add_background_object(create_jcdirt1_594(9728, 1224), 3);
    add_background_object(create_jcdirt1_594(9728, 1608), 3);
    add_background_object(create_jcdirt1_594(9728, 1416), 3);
    add_background_object(create_jcdirt5_2377(9600, 1032), 3);
    add_background_object(create_jcflatground7_2369(9472, 1200), 3);
    add_background_object(create_jcflatground6_2370(9624, 1200), 3);
    add_background_object(create_jcdirt2_2379(9600, 1032), 3);
    add_background_object(create_jcdirt2_2379(9600, 1096), 3);
    add_background_object(create_jcdirt2_2379(9600, 1160), 3);
    add_background_object(create_jcflatground5_2385(9496, 1200), 3);
    add_background_object(create_jcdirt1_594(9728, 840), 3);
    add_background_object(create_jcflatground7_2369(9600, 1008), 3);
    add_background_object(create_jcflatground6_2370(9752, 1008), 3);
    add_background_object(create_jcdirt2_2379(9728, 840), 3);
    add_background_object(create_jcdirt2_2379(9728, 904), 3);
    add_background_object(create_jcdirt2_2379(9728, 968), 3);
    add_background_object(create_jcflatground5_2385(9624, 1008), 3);
    add_background_object(create_jcdirt1_594(9088, 1032), 3);
    add_background_object(create_jcdirt9_2390(9216, 1224), 3);
    add_background_object(create_jcdirt4_2374(9088, 1224), 3);
    add_background_object(create_jcdirt1_594(8832, 1224), 3);
    add_background_object(create_jcdirt6_2398(8832, 1400), 3);
    add_background_object(create_dvceilingoverlay_915(8832, 1400), 3);
    add_background_object(create_jcdirt6_2398(8960, 1400), 3);
    add_background_object(create_dvceilingoverlay_915(8960, 1400), 3);
    add_background_object(create_jcdirt6_2398(9088, 1400), 3);
    add_background_object(create_dvceilingoverlay_915(9088, 1400), 3);
    add_background_object(create_jcdirt8_2382(8704, 1224), 3);
    add_background_object(create_jcdirt12_2388(8816, 1256), 3);
    add_background_object(create_jcdirt1_594(8832, 1032), 3);
    add_background_object(create_jcdirt5_2377(8704, 1032), 3);
    add_background_object(create_jcdirt8_2382(8576, 1032), 3);
    add_background_object(create_jcdirt1_594(8576, 840), 3);
    add_background_object(create_jcdirt1_594(8832, 840), 3);
    add_background_object(create_jcdirt1_594(8576, 648), 3);
    add_background_object(create_jcdirt1_594(8832, 648), 3);
    add_background_object(create_jcdirt1_594(8576, 456), 3);
    add_background_object(create_jcdirt1_594(8832, 456), 3);
    add_background_object(create_jcdirt1_594(8576, 264), 3);
    add_background_object(create_jcdirt1_594(8832, 264), 3);
    add_background_object(create_jcdirt1_594(8576, 72), 3);
    add_background_object(create_jcdirt1_594(8832, 72), 3);
    add_background_object(create_jcdirt1_594(8576, -120), 3);
    add_background_object(create_jcdirt1_594(8832, -120), 3);
    add_background_object(create_jcdirt2_2379(8576, 968), 3);
    add_background_object(create_jcdirt2_2379(8576, 904), 3);
    add_background_object(create_jcdirt2_2379(8576, 840), 3);
    add_background_object(create_jcdirt2_2379(8576, 776), 3);
    add_background_object(create_jcdirt2_2379(8576, 712), 3);
    add_background_object(create_jcdirt2_2379(8576, 648), 3);
    add_background_object(create_jcdirt2_2379(8576, 584), 3);
    add_background_object(create_jcdirt2_2379(8576, 520), 3);
    add_background_object(create_jcdirt2_2379(8576, 456), 3);
    add_background_object(create_jcdirt2_2379(8576, 392), 3);
    add_background_object(create_jcdirt2_2379(8576, 328), 3);
    add_background_object(create_jcdirt2_2379(8576, 264), 3);
    add_background_object(create_jcdirt2_2379(8576, 200), 3);
    add_background_object(create_jcdirt2_2379(8576, 136), 3);
    add_background_object(create_jcdirt2_2379(8576, 72), 3);
    add_background_object(create_jcdirt2_2379(8576, 8), 3);
    add_background_object(create_jcdirt2_2379(8576, -56), 3);
    add_background_object(create_jcdirt2_2379(8576, -120), 3);
    add_background_object(create_jcdirt1_594(9088, 456), 3);
    add_background_object(create_jcflatground6_2370(9384, 1096), 3);
    add_background_object(create_jcdirt3_2380(9328, 1160), 3);
    add_background_object(create_jcdirt3_2380(9328, 1096), 3);
    add_background_object(create_jcdirt3_2380(9328, 1032), 3);
    add_background_object(create_jcdirt9_2390(9344, 648), 3);
    add_background_object(create_jcdirt4_2374(9216, 648), 3);
    add_background_object(create_jcdirt5_2377(9088, 648), 3);
    add_background_object(create_jcdirt9_2390(9472, 456), 3);
    add_background_object(create_jcdirt4_2374(9344, 456), 3);
    add_background_object(create_jcdirt1_594(9088, 264), 3);
    add_background_object(create_jcdirt1_594(9088, 72), 3);
    add_background_object(create_jcdirt1_594(9088, -120), 3);
    add_background_object(create_jcdirt1_594(9344, 264), 3);
    add_background_object(create_jcdirt1_594(9344, 72), 3);
    add_background_object(create_jcdirt1_594(9344, -120), 3);
    add_background_object(create_jcdirt1_594(9088, 840), 3);
    add_background_object(create_jcdirt3_2380(9328, 968), 3);
    add_background_object(create_jcdirt3_2380(9328, 904), 3);
    add_background_object(create_jcdirt3_2380(9328, 840), 3);
    add_background_object(create_dvceilingoverlay_915(9272, 808), 3);
    add_background_object(create_dvceilingoverlay_915(9400, 616), 3);
    add_background_object(create_jcflatground7_2369(9728, 808), 3);
    add_background_object(create_jcflatground5_2385(9752, 808), 3);
    add_background_object(create_jcdirt1_594(9984, 840), 3);
    add_background_object(create_jcdirt1_594(10240, 840), 3);
    add_background_object(create_jcdirt1_594(10496, 840), 3);
    add_background_object(create_jcdirt1_594(9984, 1032), 3);
    add_background_object(create_jcdirt1_594(9984, 1224), 3);
    add_background_object(create_jcdirt1_594(9984, 648), 3);
    add_background_object(create_jcdirt1_594(10240, 648), 3);
    add_background_object(create_jcdirt1_594(10496, 648), 3);
    add_background_object(create_jcdirt2_2379(9984, 648), 3);
    add_background_object(create_jcdirt2_2379(9984, 712), 3);
    add_background_object(create_jcdirt2_2379(9984, 776), 3);
    add_background_object(create_jcflatground6_2370(10008, 808), 3);
    add_background_object(create_jcflatground5_2385(9880, 808), 3);
    add_background_object(create_jcflatground7_2369(9984, 624), 3);
    add_background_object(create_jcdirt1_594(10240, 1032), 3);
    add_background_object(create_jcflatground1_2375(10112, 624), 3);
    add_background_object(create_jcflatground6_2370(10136, 624), 3);
    add_background_object(create_jcflatground1_2375(10240, 624), 3);
    add_background_object(create_jcflatground1_2375(10368, 624), 3);
    add_background_object(create_jcflatground1_2375(10496, 624), 3);
    add_background_object(create_jcflatground1_2375(10624, 624), 3);
    add_background_object(create_jcflatground5_2385(10008, 624), 3);
    add_background_object(create_jcdirt1_594(10752, 840), 3);
    add_background_object(create_jcdirt1_594(10752, 648), 3);
    add_background_object(create_jcflatground1_2375(10752, 624), 3);
    add_background_object(create_jcflatground1_2375(10880, 624), 3);
    add_background_object(create_jcflatground1_2375(11008, 624), 3);
    add_background_object(create_jcflatground1_2375(11136, 624), 3);
    add_background_object(create_jcdirt1_594(11008, 840), 3);
    add_background_object(create_jcdirt1_594(11520, 648), 3);
    add_background_object(create_jcdirt1_594(11264, 840), 3);
    add_background_object(create_jcdirt1_594(11264, 648), 3);
    add_background_object(create_jcflatground1_2375(11264, 624), 3);
    add_background_object(create_jcflatground1_2375(11392, 624), 3);
    add_background_object(create_jcflatground1_2375(11520, 624), 3);
    add_background_object(create_jcflatground1_2375(11648, 624), 3);
    add_background_object(create_jcdirt1_594(11520, 840), 3);
    add_background_object(create_jcdirt1_594(11776, 648), 3);
    add_background_object(create_jcflatground1_2375(11776, 624), 3);
    add_background_object(create_jcflatground1_2375(11904, 624), 3);
    add_background_object(create_jcdirt1_594(11776, 840), 3);
    add_background_object(create_jcdirt1_594(12032, 648), 3);
    add_background_object(create_jcflatground1_2375(12032, 624), 3);
    add_background_object(create_jcflatground1_2375(12160, 624), 3);
    add_background_object(create_jcdirt1_594(12032, 840), 3);
    add_background_object(create_jcdirt1_594(12288, 648), 3);
    add_background_object(create_jcflatground1_2375(12288, 624), 3);
    add_background_object(create_jcflatground1_2375(12416, 624), 3);
    add_background_object(create_jcdirt1_594(12288, 840), 3);
    add_background_object(create_jcdirt1_594(12544, 648), 3);
    add_background_object(create_jcflatground1_2375(12544, 624), 3);
    add_background_object(create_jcflatground1_2375(12672, 624), 3);
    add_background_object(create_jcdirt1_594(12544, 840), 3);
    add_background_object(create_jcdirt1_594(12800, 648), 3);
    add_background_object(create_jcflatground1_2375(12800, 624), 3);
    add_background_object(create_jcdirt1_594(12800, 840), 3);
    add_background_object(create_jcdirt1_594(13056, 648), 3);
    add_background_object(create_jcflatground1_2375(13056, 624), 3);
    add_background_object(create_jcdirt1_594(13056, 840), 3);
    add_background_object(create_jcdirt1_594(13824, 648), 3);
    add_background_object(create_jcdirt1_594(13824, 840), 3);
    add_background_object(create_jcdirt1_594(13824, 456), 3);
    add_background_object(create_jcdirt1_594(13824, -120), 3);
    add_background_object(create_jcdirt8_2382(13696, 72), 3);
    add_background_object(create_jcdirt8_2382(13568, -120), 3);
    add_background_object(create_jcdirt5_2377(13824, 72), 3);
    add_background_object(create_jcdirt5_2377(13696, -120), 3);
    add_background_object(create_jcdirt2_2379(13824, 456), 3);
    add_background_object(create_jcdirt2_2379(13824, 520), 3);
    add_background_object(create_jcdirt2_2379(13824, 584), 3);
    add_background_object(create_jcdirt1_594(13824, 264), 3);
    add_background_object(create_jcdirt2_2379(13824, 264), 3);
    add_background_object(create_jcdirt2_2379(13824, 328), 3);
    add_background_object(create_jcdirt2_2379(13824, 392), 3);
    add_background_object(create_jcdirt1_594(13056, 1032), 3);
    add_background_object(create_jcdirt1_594(13056, 1224), 3);
    add_background_object(create_jcdirt1_594(13824, 1032), 3);
    add_background_object(create_jcdirt1_594(13824, 1224), 3);
    add_background_object(create_jcdirt1_594(13056, 1416), 3);
    add_background_object(create_jcdirt1_594(13056, 1608), 3);
    add_background_object(create_jcdirt1_594(13824, 1416), 3);
    add_background_object(create_jcdirt1_594(13824, 1608), 3);
    add_background_object(create_jcdirt1_594(13056, 1992), 3);
    add_background_object(create_jcdirt1_594(13824, 1992), 3);
    add_background_object(create_jcdirt1_594(13312, 1848), 3);
    add_background_object(create_jcdirt1_594(13568, 1848), 3);
    add_background_object(create_jcdirt12_2388(13072, 640), 3);
    add_background_object(create_jcdirt12_2388(12816, 640), 3);
    add_background_object(create_jcplant1_2349(13568, 600), 3);
    add_background_object(create_jcgrass1_2392(13184, 624), 3);
    add_background_object(create_jcdirt12_2388(13192, 640), 3);
    add_background_object(create_jcgrass5_2397(13152, 624), 3);
    add_background_object(create_jcgrass1_2392(12928, 624), 3);
    add_background_object(create_jcgrass6_2394(13056, 624), 3);
    add_background_object(create_jcgrass5_2397(12896, 624), 3);
    add_background_object(create_jcgrass2_2393(12544, 624), 3);
    add_background_object(create_jcgrass6_2394(12608, 624), 3);
    add_background_object(create_jcgrass5_2397(12512, 624), 3);
    add_background_object(create_jcdirt3_2380(13296, 840), 3);
    add_background_object(create_jcdirt3_2380(13296, 904), 3);
    add_background_object(create_jcdirt3_2380(13296, 968), 3);
    add_background_object(create_jcdirt3_2380(13296, 1032), 3);
    add_background_object(create_jcdirt3_2380(13296, 1096), 3);
    add_background_object(create_jcdirt3_2380(13296, 1160), 3);
    add_background_object(create_jcdirt3_2380(13296, 1224), 3);
    add_background_object(create_jcdirt3_2380(13296, 1288), 3);
    add_background_object(create_jcdirt3_2380(13296, 1352), 3);
    add_background_object(create_jcdirt3_2380(13296, 1416), 3);
    add_background_object(create_jcdirt3_2380(13296, 1480), 3);
    add_background_object(create_jcdirt3_2380(13296, 1544), 3);
    add_background_object(create_jcdirt3_2380(13296, 1608), 3);
    add_background_object(create_jcdirt2_2379(13824, 840), 3);
    add_background_object(create_jcdirt2_2379(13824, 904), 3);
    add_background_object(create_jcdirt2_2379(13824, 968), 3);
    add_background_object(create_jcdirt2_2379(13824, 1032), 3);
    add_background_object(create_jcdirt2_2379(13824, 1096), 3);
    add_background_object(create_jcdirt2_2379(13824, 1160), 3);
    add_background_object(create_jcdirt2_2379(13824, 1224), 3);
    add_background_object(create_jcdirt2_2379(13824, 1288), 3);
    add_background_object(create_jcdirt2_2379(13824, 1352), 3);
    add_background_object(create_jcdirt2_2379(13824, 1416), 3);
    add_background_object(create_jcdirt2_2379(13824, 1480), 3);
    add_background_object(create_jcdirt2_2379(13824, 1544), 3);
    add_background_object(create_jcdirt2_2379(13824, 1608), 3);
    add_background_object(create_jcdirt1_594(13056, 1800), 3);
    add_background_object(create_jcdirt1_594(13824, 1800), 3);
    add_background_object(create_jcdirt1_594(13312, 1656), 3);
    add_background_object(create_jcdirt1_594(13568, 1656), 3);
    add_background_object(create_jcflatground7_2369(13288, 1616), 3);
    add_background_object(create_jcflatground5_2385(13312, 1616), 3);
    add_background_object(create_jcflatground5_2385(13440, 1616), 3);
    add_background_object(create_jcflatground5_2385(13568, 1616), 3);
    add_background_object(create_jcflatground5_2385(13696, 1616), 3);
    add_background_object(create_jcflatground6_2370(13824, 1616), 3);
    add_background_object(create_jcgrass1_2392(13312, 624), 3);
    add_background_object(create_jcgrass1_2392(13440, 624), 3);
    add_background_object(create_jcgrass1_2392(13568, 624), 3);
    add_background_object(create_jcgrass1_2392(13696, 624), 3);
    add_background_object(create_jcgrasstop1_2408(3376, 1232), 3);
    add_background_object(create_jcgrasstop1_2408(12928, 616), 3);
    add_background_object(create_jcgrasstop1_2408(13184, 616), 3);
    add_background_object(create_jcgrasstop1_2408(13312, 616), 3);
    add_background_object(create_jcgrasstop1_2408(13440, 616), 3);
    add_background_object(create_jcgrasstop1_2408(13568, 616), 3);
    add_background_object(create_jcgrasstop1_2408(13696, 616), 3);
    add_object(create_playerassistlilachair_2537(14127, 545), 3);
    add_object(create_objectjumppad_1510(11976, -176), 3);
    add_object(create_jcslidingplatformlandpoint_2415(4728, -184), 3);
    add_object(create_effectwarning_1513(-404, 696), 3);
    add_object(create_jcwaterstream1_2416(12384, -152), 3);
    add_object(create_jcwaterstream2_2413(12256, -160), 3);
    add_object(create_jcwaterstream3_2410(12256, -208), 3);
    add_object(create_jcwaterstream4_2409(12384, -208), 3);
    add_object(create_jcwaterstream5_2412(12472, -248), 3);
    add_object(create_jcwaterstream6_2411(12256, -248), 3);
    add_object(create_jcwaterstream7_2362(12232, -224), 3);
    add_object(create_jcwaterstream8_2361(12528, -224), 3);
    add_object(create_jcslidingplatform_2414(4440, -288), 3);
    add_object(create_objectwhispmaker_751(-536, 2064), 3);
    add_object(create_levelcreekplatform_2424(-384, 2184), 3);
    add_object(create_gimmickflyingleafplatformmask_2462(3448, 1208), 3);
    add_object(create_cameratriggerboss_424(13560, 1424), 3);
    add_object(create_layerobject_10(-184, 440), 3);
    add_object(create_cameralimitbossbottom_420(13568, 1631), 3);
    add_object(create_cameralimitbossleft_421(11096, 504), 3);
    add_object(create_cameralimitbossright_422(13855, 1504), 3);
    add_object(create_cameralimitbosstop_423(13576, 24), 3);
    add_object(create_minibossrailing_923(1552, 1480), 3);
    add_object(create_bosshovercophook2_2440(1974, -248), 3);
    add_object(create_playericedeath_2441(1928, -140), 3);
    add_object(create_bosshovercopsiren4_2329(2128, -184), 3);
    add_object(create_bosshovercopsiren3_2330(2152, -184), 3);
    add_object(create_bosshovercopturbine2_2331(2132, -167), 3);
    add_object(create_bosshovercop_2332(1896, 1560), 3);
    add_object(create_bosshovercopturbine1_2333(2052, -167), 3);
    add_object(create_bosshovercoppropellor_2334(2072, -168), 3);
    add_object(create_bosshovercoppropellor2_2335(2152, -168), 3);
    add_object(create_bosshovercopsiren1_2336(2048, -184), 3);
    add_object(create_bosshovercopsiren2_2337(2032, -184), 3);
    add_object(create_bosshovercophook_2449(1905, -114), 3);
    add_object(create_levelicebarrierpiece_2463(1891, -197), 3);
    add_object(create_levelhovercraftlight_2451(2024, -111), 3);
    add_object(create_minibossrailing_923(1552, 1528), 3);
    add_object(create_minibossrailing_923(1552, 1576), 3);
    add_object(create_minibossrailing_923(1552, 1624), 3);
    add_object(create_minibossrailing_923(1552, 1672), 3);
    add_object(create_minibossbarrier_924(1536, 1528), 3);
    add_object(create_minibossbarrier_924(1536, 1576), 3);
    add_object(create_minibossbarrier_924(1536, 1624), 3);
    add_object(create_minibossbarrier_924(1536, 1672), 3);
    add_object(create_npcneera_2464(1495, 1695), 3);
    add_object(create_minibossbarrier_924(1536, 1480), 3);
    add_object(create_bossneerahitbox_2465(1454, 2363), 3);
    add_object(create_enemybuoybuoy_2418(1896, 1672), 3);
    add_object(create_objectpetal_302(2505, 1409), 3);
    add_object(create_objectpetal_302(2449, 1409), 3);
    add_object(create_yellowspringup_434(3328, 1056), 3);
    add_object(create_yellowspringup_434(3552, 968), 3);
    add_object(create_objectcrystal_279(3453, 1138), 3);
    add_object(create_objectcrystal_279(3453, 1090), 3);
    add_object(create_objectcrystal_279(3453, 1042), 3);
    add_object(create_objectcrystal_279(3453, 994), 3);
    add_object(create_enemylimiter_350(3469, 1042), 3);
    add_object(create_gimmickflyingleafplatform_2460(3456, 832), 3);
    add_object(create_gimmickflyingleafplatformmask_2462(3456, 832), 3);
    add_object(create_enemylimiter_350(3469, 562), 3);
    add_object(create_objectcrystal_279(3453, 786), 3);
    add_object(create_objectcrystal_279(3453, 738), 3);
    add_object(create_objectcrystal_279(3453, 690), 3);
    add_object(create_objectcrystal_279(3453, 642), 3);
    add_object(create_redspringright_441(6448, 888), 3);
    add_object(create_objectpetal_302(6737, 505), 3);
    add_object(create_objectpetal_302(6753, 529), 3);
    add_object(create_objectpetal_302(6785, 577), 3);
    add_object(create_objectpetal_302(6769, 553), 3);
    add_object(create_objectpetal_302(6721, 481), 3);
    add_object(create_objectpetal_302(6737, 553), 3);
    add_object(create_objectpetal_302(6721, 577), 3);
    add_object(create_objectpetal_302(6769, 505), 3);
    add_object(create_objectpetal_302(6785, 481), 3);
    add_object(create_minibosstreddright2_1039(5848, 896), 3);
    add_object(create_minibosstreddright4_1040(5817, 857), 3);
    add_object(create_minibosstreddright6_1041(5818, 840), 3);
    add_object(create_minibosstreddright5_1042(5834, 848), 3);
    add_object(create_minibosstreddright3_1043(5848, 920), 3);
    add_object(create_minibosstredd_1044(5800, 856), 3);
    add_object(create_minibosstreddright1_1045(5848, 857), 3);
    add_object(create_minibosstreddleft6_1046(5786, 840), 3);
    add_object(create_minibosstreddleft4_1047(5785, 857), 3);
    add_object(create_minibosstreddleft5_1048(5770, 848), 3);
    add_object(create_minibosstreddleft2_1049(5752, 896), 3);
    add_object(create_minibosstreddleft3_1050(5752, 920), 3);
    add_object(create_minibosstreddleft1_1051(5752, 857), 3);
    add_object(create_objectcrystal_279(5357, 818), 3);
    add_object(create_objectcrystal_279(5389, 802), 3);
    add_object(create_objectcrystal_279(5421, 810), 3);
    add_object(create_objectcrystal_279(5445, 818), 3);
    add_object(create_objectcrystal_279(5485, 810), 3);
    add_object(create_objectcrystal_279(5525, 818), 3);
    add_object(create_objectcrystal_279(3725, 1050), 3);
    add_object(create_objectcrystal_279(3789, 1130), 3);
    add_object(create_objectcrystal_279(3821, 1234), 3);
    add_object(create_objectcrystal_279(3821, 1370), 3);
    add_object(create_levelcreekplatform_2424(9472, 920), 3);
    add_object(create_brevonmechbackwing_2538(11423, -83), 3);
    add_object(create_brevonmechbackwing_2538(11463, -83), 3);
    add_object(create_brevonmechbackwing_2538(11503, -83), 3);
    add_object(create_brevonmechbackwing_2538(11543, -83), 3);
    add_object(create_brevonmechfrontleg_2539(10909, -133), 3);
    add_object(create_brevonmechabdomen_2540(10944, 492), 3);
    add_object(create_brevonmechfrontleg2_2541(10911, -162), 3);
    add_object(create_brevonmechfrontknee_2542(10833, -171), 3);
    add_object(create_brevonmechtorso_2543(11022, 499), 3);
    add_object(create_brevonmechhead_2544(11038, 519), 3);
    add_object(create_brevonmechfrontfoot_2545(10808, -127), 3);
    add_object(create_brevonmechfrontwing_2546(11215, -83), 3);
    add_object(create_brevonmechfrontwing_2546(11255, -83), 3);
    add_object(create_brevonmechfrontwing_2546(11295, -83), 3);
    add_object(create_brevonmechfrontwing_2546(11335, -83), 3);
    add_object(create_brevonmechfrontshoulder_2547(10916, 516), 3);
    add_object(create_brevonmechfrontarm_2548(10999, -126), 3);
    add_object(create_brevonmechfrontclaw_2549(10930, -119), 3);
    add_object(create_brevonmechaxle_2550(11045, -96), 3);
    add_object(create_brevonmechanimations_2551(10640, -80), 3);
    add_object(create_yellowspringup_434(9952, 792), 3);
    add_object(create_levelcreekplatform_2424(9400, 1008), 3);
    add_object(create_leveljccollapsingplatform_2461(13424, -72), 3);
    add_object(create_npcserpentine_947(13092, 596), 3);
    add_object(create_bossserpfloorcheck_1866(13128, 596), 3);
    add_object(create_bossserphitbox_2552(13070, -36), 3);
    add_object(create_bossserpentinearm_1863(13172, -83), 3);
    add_object(create_effectwarning_1513(13140, -136), 3);
    add_object(create_effectwarning2_1864(13076, -136), 3);
    add_object(create_bosschargeglow_1865(13264, -120), 3);
    add_object(create_shieldserpentine_1868(13336, -120), 3);
    add_object(create_enemyelitemask_2511(12780, 1208), 3);
    add_object(create_enemyelite_2510(12783, 1207), 3);
    add_object(create_playerassistcaroltail_2553(14120, 609), 3);
    add_object(create_playerassistmillatail_2554(14149, 609), 3);
    add_object(create_playerassistlilacmask_2555(14248, 609), 3);
    add_object(create_playerassistcarolmask_2556(14184, 609), 3);
    add_object(create_playerassistmillamask_2557(14216, 609), 3);
    add_object(create_playerassistmilla_2558(14149, 609), 3);
    add_object(create_playerassistcarol_2559(14116, 609), 3);
    add_object(create_playerassistmillaradar_2560(14213, 561), 3);
    add_object(create_playerassistfinisher_2561(14153, 532), 3);
    add_object(create_levelcreekplatform_2424(9536, 840), 3);
    add_object(create_monitorwatershield_327(9728, 776), 3);
    add_object(create_monitorcrystals_324(9696, 976), 3);
    add_object(create_monitorcrystals_324(9568, 1168), 3);
    add_object(create_levelslipperysurface_2450(3752, 1120), 3);
    add_object(create_levelslipperysurface_2450(3712, 1024), 3);
    add_object(create_levelslipperysurface_2450(3728, 1480), 3);
    add_object(create_levelslipperysurface_2450(5008, 1128), 3);
    add_object(create_levelslipperysurface_2450(6552, 808), 3);
    add_object(create_levelslipperysurface_2450(9360, 1496), 3);
    add_object(create_enemytreddpushleft2_1059(5728, 856), 3);
    add_object(create_enemytreddpushleft_1060(6096, 856), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
    add_background_object(create_jcsubsupportfront_2497(360, 1464), 4);
    add_background_object(create_jcsubsupportback_2471(320, 1464), 4);
    add_background_object(create_jcsubtanker1_2484(280, 1448), 4);
    add_background_object(create_jcsub9_2479(128, 1512), 4);
    add_background_object(create_jcsub1_2476(128, 1448), 4);
    add_background_object(create_jcsub9_2479(128, 1640), 4);
    add_background_object(create_jcsub2_2477(128, 1704), 4);
    add_background_object(create_jcsub8_2482(256, 1448), 4);
    add_background_object(create_jcsub11_2483(256, 1512), 4);
    add_background_object(create_jcsub11_2483(256, 1640), 4);
    add_background_object(create_jcsub13_2494(256, 1704), 4);
    add_background_object(create_jcsub9_2479(0, 1512), 4);
    add_background_object(create_jcsub1_2476(0, 1448), 4);
    add_background_object(create_jcsub9_2479(0, 1640), 4);
    add_background_object(create_jcsub2_2477(0, 1704), 4);
    add_background_object(create_jcsub8_2482(568, 1512), 4);
    add_background_object(create_jcsub13_2494(568, 1640), 4);
    add_background_object(create_jcsub1_2476(312, 1512), 4);
    add_background_object(create_jcsub2_2477(312, 1640), 4);
    add_background_object(create_jcsub1_2476(440, 1512), 4);
    add_background_object(create_jcsub2_2477(440, 1640), 4);
    add_background_object(create_jcsubtanker2_2486(344, 1448), 4);
    add_background_object(create_jcsub9_2479(128, 1576), 4);
    add_background_object(create_jcsub11_2483(256, 1576), 4);
    add_background_object(create_jcsub9_2479(0, 1576), 4);
    add_background_object(create_jcsub9_2479(440, 1576), 4);
    add_background_object(create_jcsub11_2483(568, 1576), 4);
    add_background_object(create_jcsub9_2479(312, 1576), 4);
    add_background_object(create_jcdirt6_2398(3584, 1008), 4);
    add_background_object(create_jcdirt5_2377(1408, 1288), 4);
    add_background_object(create_jcdirt6_2398(1408, 1464), 4);
    add_background_object(create_jcdirt8_2382(1280, 1288), 4);
    add_background_object(create_jcdirt1_594(13312, 648), 4);
    add_background_object(create_jcdirt1_594(13568, 648), 4);
    add_background_object(create_jcdirt12_2388(13304, 640), 4);
    add_background_object(create_jcdirt12_2388(13400, 640), 4);
    add_background_object(create_jcdirt12_2388(13512, 640), 4);
    add_background_object(create_jcdirt12_2388(13616, 640), 4);
    add_background_object(create_jcdirt12_2388(13712, 640), 4);
    add_background_object(create_jcdirt6_2398(13440, 832), 4);
    add_background_object(create_jcdirt6_2398(13568, 832), 4);
    add_background_object(create_jcdirt12_2388(13784, 720), 4);
    add_background_object(create_jcdirt12_2388(13216, 728), 4);
    add_background_object(create_jcdirt6_2398(13184, 832), 4);
    add_background_object(create_jcdirt6_2398(13312, 832), 4);
    add_background_object(create_jcdirt6_2398(13824, 832), 4);
    add_background_object(create_jcdirt6_2398(13696, 832), 4);
    add_object(create_enemybullfrag_2417(11831, -200), 4);
    add_object(create_enemybullfragmask_2419(11844, -216), 4);
    add_object(create_playerstartingpoint_358(69, 1429), 4);
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
    add_object(create_hazardspikesdown_2452(-168, 392), 5);
    add_object(create_hazardspikesleft_2453(-128, 392), 5);
    add_object(create_hazardspikesright_2454(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
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
    add_object(create_bubblepatch_806(-528, 303), 5);
    add_object(create_mediumbubble_769(-518, 314), 5);
    add_object(create_leveldarksky_2069(0, 0), 5);
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
    add_object(create_dialogdata_2562(-132, 472), 6);
    add_object(create_dialogbox_566(0, 8), 6);
    add_object(create_dialogbox2_567(-156, 71), 6);
    add_object(create_dialogarrow_568(132, 40), 6);
    add_object(create_dialogtext_569(-148, 8), 6);
    add_object(create_timebonustotal_460(-256, -72), 7);
    add_object(create_levelcardfade_461(0, 0), 7);
    add_object(create_levelcardfade2_24(-328, -336), 7);
    add_object(create_levelcardgameover_462(0, 256), 7);
    add_object(create_guilifebasemeter_125(0, 0), 7);
    add_object(create_levelcardintro1_464(16, -240), 7);
    add_object(create_levelcardintro3_760(0, 248), 7);
    add_object(create_levelcardintro2_761(0, 248), 7);
    add_object(create_levelcardactclear4_846(-48, 212), 7);
    add_object(create_levelcardactclear1_847(-160, 24), 7);
    add_object(create_levelcardactclear2_848(-88, 88), 7);
    add_object(create_levelcardactclear3_849(-72, 88), 7);
    add_object(create_totalcrystals_854(44, 230), 7);
    add_object(create_levelcardbonus1_850(-12, 109), 7);
    add_object(create_levelcardbonus2_851(76, 109), 7);
    add_object(create_levelcardbonus3_852(-16, -64), 7);
    add_object(create_totalbonus_853(-18, -40), 7);
    add_object(create_sarassteampluginfreedomplanet_26(-72, -128), 7);
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
    loop_trigger_deactivate_boss_running = false;
    loop_trigger_deactivate_boss_index = 0;
    loop_update_layer_running = false;
    loop_update_layer_index = 0;
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
    loop_collapse_running = false;
    loop_collapse_index = 0;
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
    loop_boss_action_running = false;
    loop_boss_action_index = 0;
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
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_43, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_43, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_43, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_43, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_43, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_43, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_43, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_43, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_43, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_43, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_43, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_43, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_43, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_43, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_43, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_43, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_43, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_43, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_43, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_43, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_43, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_43, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_43, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_43, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_43, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_43, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_43, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_43, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_43, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_43, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_43, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_43, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_43, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_43, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_43, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_43, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_43, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_43, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_43, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_43, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_43, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_43, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_43, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_43, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_43, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_43, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_43, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_43, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_43, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_43, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_43, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_43, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_43, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_43, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_1510_16 = loop_count;
    not_always_1406_41 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_gunship_rising_1 = true;
    not_always_1388_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_attacks_1 = false;
    not_always_44_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 = false;
    group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1 = false;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_1_shield_summon_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1 = false;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1 = false;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    not_always_1405_41 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    not_always_1952_43 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    not_always_1051_14 = loop_count;
    not_always_1407_41 = loop_count;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_172_8 = loop_count;
    not_always_449_13 = loop_count;
    not_always_97_0 = loop_count;
    not_always_1048_14 = loop_count;
    not_always_2288_43 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_serpentine_missile_1 = false;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    not_always_2039_43 = loop_count;
    not_always_1769_43 = loop_count;
    not_always_1046_14 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    once_condition_2101_43 = false;
    group_main_engine_level_specific_methods_bosses_boss_serpentine_to_gunship_1 = false;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    once_condition_138_0 = false;
    not_always_68_13 = loop_count;
    not_always_1149_14 = loop_count;
    once_condition_2127_43 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1 = false;
    not_always_1505_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    once_condition_1801_43 = false;
    not_always_1506_16 = loop_count;
    not_always_100_0 = loop_count;
    not_always_1400_41 = loop_count;
    not_always_1513_16 = loop_count;
    not_always_43_13 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_121_0 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1399_41 = loop_count;
    not_always_1770_43 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1 = false;
    once_condition_1735_22 = false;
    not_always_1397_41 = loop_count;
    not_always_1848_43 = loop_count;
    not_always_175_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    not_always_804_43 = loop_count;
    not_always_1425_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_player_assistance_1 = true;
    not_always_1402_41 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_1512_16 = loop_count;
    not_always_130_0 = loop_count;
    group_main_engine_level_specific_methods_stage_clear_1 = true;
    once_condition_39_14 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    not_always_1448_13 = loop_count;
    group_sound_events_milla_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_1449_13 = loop_count;
    not_always_46_13 = loop_count;
    once_condition_2128_43 = false;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    not_always_1450_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    not_always_1832_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    not_always_1398_41 = loop_count;
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = true;
    not_always_53_13 = loop_count;
    not_always_1047_14 = loop_count;
    not_always_1531_19 = loop_count;
    not_always_2588_43 = loop_count;
    once_condition_1522_19 = false;
    group_main_engine_level_specific_methods_bosses_boss_gunship_moving_1 = false;
    not_always_1989_43 = loop_count;
    not_always_1774_43 = loop_count;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_52_13 = loop_count;
    not_always_101_0 = loop_count;
    once_condition_1940_43 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_gunship_1 = false;
    not_always_65_0 = loop_count;
    not_always_1039_13 = loop_count;
    not_always_422_13 = loop_count;
    not_always_1504_16 = loop_count;
    once_condition_1744_43 = false;
    once_condition_1531_23 = false;
    not_always_522_13 = loop_count;
    not_always_45_13 = loop_count;
    once_condition_64_13 = false;
    not_always_1818_43 = loop_count;
    not_always_1333_14 = loop_count;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1148_14 = loop_count;
    not_always_1396_41 = loop_count;
    once_condition_57_14 = false;
    once_condition_38_14 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    group_main_engine_level_specific_methods_bosses_gunship_projectiles_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    not_always_1935_43 = loop_count;
    once_condition_2326_43 = false;
    once_condition_40_14 = false;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    once_condition_538_13 = false;
    group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_torque_s_abduction_takeoff_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    not_always_1509_16 = loop_count;
    not_always_69_13 = loop_count;
    once_condition_41_14 = false;
    not_always_1049_14 = loop_count;
    not_always_1496_34 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    not_always_1502_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_movement_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_57_13 = loop_count;
    not_always_1511_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_450_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_serpentine_1 = false;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    not_always_1831_16 = loop_count;
    not_always_1456_13 = loop_count;
    not_always_2082_43 = loop_count;
    not_always_1518_19 = loop_count;
    group_mac_controls_1 = false;
    not_always_1740_14 = loop_count;
    once_condition_2131_43 = false;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1821_43 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    not_always_558_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_1514_16 = loop_count;
    not_always_234_13 = loop_count;
    not_always_2307_43 = loop_count;
    not_always_1516_19 = loop_count;
    not_always_553_13 = loop_count;
    not_always_140_0 = loop_count;
    not_always_813_13 = loop_count;
    not_always_64_0 = loop_count;
    not_always_1805_43 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_serpentine_dual_crash_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = false;
    group_pause_1 = false;
    not_always_1050_14 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_blips_1 = false;
    not_always_41_13 = loop_count;
    not_always_1517_19 = loop_count;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_1395_41 = loop_count;
    not_always_1532_13 = loop_count;
    not_always_540_13 = loop_count;
    not_always_2118_43 = loop_count;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    not_always_1421_13 = loop_count;
    not_always_1515_16 = loop_count;
    not_always_1717_17 = loop_count;
    not_always_70_13 = loop_count;
    not_always_606_14 = loop_count;
    not_always_1404_41 = loop_count;
    not_always_1403_41 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1 = false;
    once_condition_63_13 = false;
    group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_0_moving_1 = false;
    not_always_1825_43 = loop_count;
    once_condition_1871_43 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 = false;
    not_always_174_8 = loop_count;
    not_always_99_0 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    group_main_engine_level_specific_methods_frame_transition_1 = false;
    once_condition_66_13 = false;
    group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_player_assist_milla_ai_states_player_assist_milla_2_jump_1 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    once_condition_4_19 = false;
    not_always_1503_16 = loop_count;
    group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1 = true;
    not_always_1954_43 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 = false;
    once_condition_59_14 = false;
    not_always_809_13 = loop_count;
    once_condition_48_13 = false;
    not_always_103_0 = loop_count;
    not_always_1507_16 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
    not_always_96_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    group_sound_events_carol_1 = false;
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1 = false;
    every_819_13 = 0.0f;
    not_always_1510_19 = loop_count;
    once_condition_58_14 = false;
    group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    not_always_311_14 = loop_count;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_744_13 = loop_count;
    not_always_1447_13 = loop_count;
    not_always_95_0 = loop_count;
    not_always_1741_14 = loop_count;
    once_condition_1713_43 = false;
    not_always_236_13 = loop_count;
    not_always_1401_41 = loop_count;
    group_debug_mode_1 = false;
    group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_torque_s_abduction_fade_out_1 = true;
    once_condition_2327_43 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    group_main_engine_level_specific_methods_cutscenes_neera_1 = true;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    not_always_98_0 = loop_count;
    once_condition_50_13 = false;
    not_always_560_14 = loop_count;
    not_always_1988_43 = loop_count;
    not_always_1515_19 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_1516_16 = loop_count;
    not_always_1514_19 = loop_count;
    not_always_1483_43 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    once_condition_63_0 = false;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_1822_43 = loop_count;
    not_always_59_13 = loop_count;
    not_always_1525_19 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_10727()
{
    // event 1637_44
    {
        if (!(group_main_engine_1)) goto event_1637_44_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) > (0))) goto event_1637_44_end;
        ((Active*)get_instance(guikeycardicon_2674_instances))->set_y(((Active*)get_instance(guikeycardicon_2674_instances))->get_y()-1);
        ((Counter*)get_instance(guikeycards_2673_instances))->set_y(((Counter*)get_instance(guikeycards_2673_instances))->get_y()-1);
    }
    event_1637_44_end: ;
}
void Frames::loop_gui_shiftdown_44()
{
    event_func_10727();
    event_func_2695();
}
void Frames::event_func_10728()
{
    // event 1583_44
    {
        if (!(group_main_engine_1)) goto event_1583_44_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (-1))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto event_1583_44_end;
        FrameObject * single_instance_1583_44_0; single_instance_1583_44_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyseeker_2648_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1583_44_0 == NULL)
                    single_instance_1583_44_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1583_44_0))->get_movement()->set_speed(50+randrange(30));
        ((Active*)((Active*)single_instance_1583_44_0))->force_frame(120+((Active*)get_single(enemyseeker_2648_instances, default_active_instance))->alterables->values.get(0)*-1);
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1583_44_end: ;
}
void Frames::loop_spawndebris_44()
{
    event_func_1176();
    event_func_1177();
    event_func_1178();
    event_func_10018();
    event_func_10728();
}
void Frames::event_func_10729()
{
    // event 1606_44
    {
        if (!(group_main_engine_1)) goto event_1606_44_end;
        enemypushup_2656_instances.clear_selection();
        for (ObjectIterator it(enemypushup_2656_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (6))) { it.deselect(); continue; }
        }
        if (!enemypushup_2656_instances.has_selection()) goto event_1606_44_end;
        FrameObject * single_instance_1606_44_0; single_instance_1606_44_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemypushup_2656_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemypushupdebris_2569(parent->x + -20, parent->y + -5), parent->layer);
                if (single_instance_1606_44_0 == NULL)
                    single_instance_1606_44_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1606_44_0))->force_frame(((Active*)get_single(enemypushup_2656_instances, default_active_instance))->alterables->values.get(1));
        ((Active*)((Active*)single_instance_1606_44_0))->set_y(((Active*)single_instance_1606_44_0)->get_y()-((Active*)get_single(enemypushup_2656_instances, default_active_instance))->alterables->values.get(1)*12);
    }
    event_1606_44_end: ;
}
void Frames::event_func_10730()
{
    // event 1607_44
    {
        if (!(group_main_engine_1)) goto event_1607_44_end;
        enemypushup_2656_instances.clear_selection();
        for (ObjectIterator it(enemypushup_2656_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (6))) { it.deselect(); continue; }
        }
        if (!enemypushup_2656_instances.has_selection()) goto event_1607_44_end;
        FrameObject * single_instance_1607_44_0; single_instance_1607_44_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemypushup_2656_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemypushupdebris_2569(parent->x + 20, parent->y + -5), parent->layer);
                if (single_instance_1607_44_0 == NULL)
                    single_instance_1607_44_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1607_44_0))->force_frame(((Active*)get_single(enemypushup_2656_instances, default_active_instance))->alterables->values.get(1));
        ((Active*)((Active*)single_instance_1607_44_0))->set_y(((Active*)single_instance_1607_44_0)->get_y()-((Active*)get_single(enemypushup_2656_instances, default_active_instance))->alterables->values.get(1)*12);
        for (ObjectIterator it(enemypushup_2656_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1607_44_end: ;
}
void Frames::loop_p_debris_44()
{
    event_func_10729();
    event_func_10730();
}
void Frames::event_func_10731()
{
    // event 1718_44
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_roboshrimp_1)) goto event_1718_44_end;
        bossroboshrimpsegment_2657_instances.clear_selection();
        for (ObjectIterator it(bossroboshrimpsegment_2657_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (loop_boss_explode_index))) { it.deselect(); continue; }
        }
        if (!bossroboshrimpsegment_2657_instances.has_selection()) goto event_1718_44_end;
        FrameObject * single_instance_1718_44_0; single_instance_1718_44_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossroboshrimpsegment_2657_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1718_44_0 == NULL)
                    single_instance_1718_44_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1718_44_0))->get_movement()->set_speed(70+randrange(30));
        ((Active*)((Active*)single_instance_1718_44_0))->force_frame(127);
        ((Active*)((Active*)single_instance_1718_44_0))->alterables->values.set(0, -999);
        ((Active*)((Active*)single_instance_1718_44_0))->set_direction(pick_random(15, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15));
    }
    event_1718_44_end: ;
}
void Frames::event_func_10732()
{
    // event 1719_44
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_roboshrimp_1)) goto event_1719_44_end;
        bossroboshrimpsegment_2657_instances.clear_selection();
        for (ObjectIterator it(bossroboshrimpsegment_2657_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (loop_boss_explode_index))) { it.deselect(); continue; }
        }
        if (!bossroboshrimpsegment_2657_instances.has_selection()) goto event_1719_44_end;
        FrameObject * single_instance_1719_44_0; single_instance_1719_44_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossroboshrimpsegment_2657_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1719_44_0 == NULL)
                    single_instance_1719_44_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1719_44_0))->get_movement()->set_speed(70+randrange(30));
        ((Active*)((Active*)single_instance_1719_44_0))->force_frame(128);
        ((Active*)((Active*)single_instance_1719_44_0))->alterables->values.set(0, -999);
        ((Active*)((Active*)single_instance_1719_44_0))->set_direction(pick_random(15, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15));
    }
    event_1719_44_end: ;
}
void Frames::event_func_10733()
{
    // event 1720_44
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_roboshrimp_1)) goto event_1720_44_end;
        bossroboshrimpsegment_2657_instances.clear_selection();
        for (ObjectIterator it(bossroboshrimpsegment_2657_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (loop_boss_explode_index))) { it.deselect(); continue; }
        }
        if (!bossroboshrimpsegment_2657_instances.has_selection()) goto event_1720_44_end;
        FrameObject * single_instance_1720_44_0; single_instance_1720_44_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossroboshrimpsegment_2657_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1720_44_0 == NULL)
                    single_instance_1720_44_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1720_44_0))->get_movement()->set_speed(70+randrange(30));
        ((Active*)((Active*)single_instance_1720_44_0))->force_frame(129);
        ((Active*)((Active*)single_instance_1720_44_0))->alterables->values.set(0, -999);
        ((Active*)((Active*)single_instance_1720_44_0))->set_direction(pick_random(15, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15));
    }
    event_1720_44_end: ;
}
void Frames::event_func_10734()
{
    // event 1721_44
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_roboshrimp_1)) goto event_1721_44_end;
        bossroboshrimpsegment_2657_instances.clear_selection();
        for (ObjectIterator it(bossroboshrimpsegment_2657_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (loop_boss_explode_index))) { it.deselect(); continue; }
        }
        if (!bossroboshrimpsegment_2657_instances.has_selection()) goto event_1721_44_end;
        FrameObject * single_instance_1721_44_0; single_instance_1721_44_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossroboshrimpsegment_2657_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1721_44_0 == NULL)
                    single_instance_1721_44_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1721_44_0))->get_movement()->set_speed(70+randrange(30));
        ((Active*)((Active*)single_instance_1721_44_0))->force_frame(130);
        FrameObject * single_instance_1721_44_1; single_instance_1721_44_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossroboshrimpsegment_2657_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1721_44_1 == NULL)
                    single_instance_1721_44_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1721_44_0))->alterables->values.set(0, -999);
        ((Active*)((Active*)single_instance_1721_44_0))->set_direction(pick_random(15, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15));
    }
    event_1721_44_end: ;
}
void Frames::loop_boss_explode_44()
{
    event_func_10731();
    event_func_10732();
    event_func_10733();
    event_func_10734();
}
void Frames::event_func_10735()
{
    // event 1897_44
    {
        if (!(group_main_engine_1)) goto event_1897_44_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_stage6_ogg_196, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1897_44_end: ;
}
void Frames::loop_play_music_5_44()
{
    event_func_10735();
}
void Frames::event_func_10736()
{
    // event 1636_44
    {
        if (!(group_main_engine_1)) goto event_1636_44_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) < (80))) goto event_1636_44_end;
        ((Active*)get_instance(guikeycardicon_2674_instances))->set_y(((Active*)get_instance(guikeycardicon_2674_instances))->get_y()+1);
        ((Counter*)get_instance(guikeycards_2673_instances))->set_y(((Counter*)get_instance(guikeycards_2673_instances))->get_y()+1);
    }
    event_1636_44_end: ;
}
void Frames::loop_gui_shiftup_44()
{
    event_func_10736();
    event_func_2708();
}
void Frames::loop_wrapper_sound_hurt1_44(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_44(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_44(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_44(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_44(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_44(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_process_call_resume_music_44(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_sound_idle7_44(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_44(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_16();
}
void Frames::loop_wrapper_sound_dig2_44(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_44(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_44(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_44(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_sound_explode5_44(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_44(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_process_call_unlock_music_44(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_44(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_sound_explode8_44(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_process_call_reset_music_44(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_44(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_44(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_44(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_explode0_44(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_44(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_44(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_camera_mode1_44(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_16();
}
void Frames::loop_wrapper_camera_mode0_44(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_16();
}
void Frames::loop_wrapper_process_call_play_music_44(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_44(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_13();
}
void Frames::loop_wrapper_sound_attack1_44(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_44(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_44(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_44(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_play_music_8_44(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_uppercut3_44(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_44(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_44(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_44(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_44(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_44(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_44(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_44(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_44(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_13();
}
