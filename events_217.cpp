#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_17136()
{
    // event 1808_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1)) goto event_1808_76_end;
        qualifier_21.clear_selection();
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!qualifier_21.has_selection()) goto event_1808_76_end;
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
        }
    }
    event_1808_76_end: ;
}
void Frames::event_func_17137()
{
    // event 1809_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1)) goto event_1809_76_end;
        qualifier_21.clear_selection();
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (-2))) { it.deselect(); continue; }
        }
        if (!qualifier_21.has_selection()) goto event_1809_76_end;
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1809_76_end: ;
}
void Frames::event_func_17138()
{
    // event 1810_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1)) goto event_1810_76_end;
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_movement()->get_speed()) > (0))) { it.deselect(); continue; }
        }
        if (!effectsshield_306_instances.has_selection()) goto event_1810_76_end;
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(25, 1);
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+3, 0);
        }
    }
    event_1810_76_end: ;
}
void Frames::event_func_17139()
{
    // event 1811_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1)) goto event_1811_76_end;
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) > (16))) { it.deselect(); continue; }
        }
        if (!effectsshield_306_instances.has_selection()) goto event_1811_76_end;
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1811_76_end: ;
}
void Frames::event_func_17140()
{
    // event 1812_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1)) goto event_1812_76_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!objectpetal_302_instances.has_selection()) goto event_1812_76_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (1))) goto event_1812_76_end;
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    event_1812_76_end: ;
}
void Frames::event_func_17141()
{
    // event 1813_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_shields_1)) goto event_1813_76_end;
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!objectcrystal_279_instances.has_selection()) goto event_1813_76_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (5))) goto event_1813_76_end;
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    event_1813_76_end: ;
}
void Frames::event_func_17142()
{
    // event 2000_76
    {
        if (!(group_pause_1)) goto event_2000_76_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_2000_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) < (900))) goto event_2000_76_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2000_76_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_2000_76_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_2000_76_end;
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
        levelbackgroundplane2_865_instances.clear_selection();
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
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
        thrusterflame_3886_instances.clear_selection();
        for (ObjectIterator it(thrusterflame_3886_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        ((Active*)get_instance(torqueship_3888_instances))->stop_animation();
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
        characterslot_133_instances.clear_selection();
        for (ObjectIterator it(characterslot_133_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        charname1_142_instances.clear_selection();
        for (ObjectIterator it(charname1_142_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        character1_223_instances.clear_selection();
        for (ObjectIterator it(character1_223_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        charname2_227_instances.clear_selection();
        for (ObjectIterator it(charname2_227_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        character2_224_instances.clear_selection();
        for (ObjectIterator it(character2_224_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(npcserpentine_947_instances))->stop_animation();
        ((Active*)get_instance(placeholdercharacter_1588_instances))->stop_animation();
        ((Active*)get_instance(npcshellduck_533_instances))->stop_animation();
        ((Active*)get_instance(bossserpentinearm_1863_instances))->stop_animation();
        ((Active*)get_instance(placeholdercharactertail_3891_instances))->stop_animation();
        ((Active*)get_instance(shieldserpentine_1868_instances))->stop_animation();
        enemylaser_1626_instances.clear_selection();
        for (ObjectIterator it(enemylaser_1626_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guipause_453_instances))->move_front();
        ((Active*)get_instance(crystal_456_instances))->move_front();
        effectfallingleaf_2323_instances.clear_selection();
        for (ObjectIterator it(effectfallingleaf_2323_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        ((Active*)get_instance(dialogarrow_568_instances))->stop_animation();
    }
    event_2000_76_end: ;
}
void Frames::event_func_17143()
{
    // event 2001_76
    bool or_result_2001_76 = false;
    bool or_temp_result_2001_76_0 = false;
    {
        if (!(group_pause_1)) goto or_event_2001_76_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_2001_76_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2001_76_0_end;
        or_result_2001_76 = true;
        or_temp_result_2001_76_0 = true;
    }
    or_event_2001_76_0_end: ;
    // event 2001_76
    bool or_temp_result_2001_76_1 = false;
    {
        if (!(group_pause_1)) goto or_event_2001_76_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_2001_76_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2001_76_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_2001_76_1_end;
        or_result_2001_76 = true;
        or_temp_result_2001_76_1 = true;
        or_event_2001_76_1_end: ;
        if (!or_result_2001_76) goto or_final_or_event_2001_76_1_end;
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
        levelbackgroundplane2_865_instances.clear_selection();
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
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
        thrusterflame_3886_instances.clear_selection();
        for (ObjectIterator it(thrusterflame_3886_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        ((Active*)get_instance(torqueship_3888_instances))->start_animation();
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
        characterslot_133_instances.clear_selection();
        for (ObjectIterator it(characterslot_133_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        charname1_142_instances.clear_selection();
        for (ObjectIterator it(charname1_142_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        character1_223_instances.clear_selection();
        for (ObjectIterator it(character1_223_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        character2_224_instances.clear_selection();
        for (ObjectIterator it(character2_224_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        charname2_227_instances.clear_selection();
        for (ObjectIterator it(charname2_227_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(npcserpentine_947_instances))->start_animation();
        ((Active*)get_instance(placeholdercharacter_1588_instances))->start_animation();
        ((Active*)get_instance(npcshellduck_533_instances))->start_animation();
        ((Active*)get_instance(bossserpentinearm_1863_instances))->start_animation();
        ((Active*)get_instance(placeholdercharactertail_3891_instances))->start_animation();
        ((Active*)get_instance(shieldserpentine_1868_instances))->start_animation();
        enemylaser_1626_instances.clear_selection();
        for (ObjectIterator it(enemylaser_1626_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectfallingleaf_2323_instances.clear_selection();
        for (ObjectIterator it(effectfallingleaf_2323_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        ((Active*)get_instance(dialogarrow_568_instances))->start_animation();
    }
    or_final_or_event_2001_76_1_end: ;
}
void Frames::event_func_17144()
{
    // event 2003_76
    {
        if (!(group_pause_1)) goto event_2003_76_end;
        ((Active*)get_instance(guipause_453_instances))->force_frame(2);
    }
    event_2003_76_end: ;
}
void Frames::event_func_17145()
{
    // event 2004_76
    {
        if (!(group_pause_1)) goto event_2004_76_end;
        if (!((global_values->get(4)) == (0))) goto event_2004_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) < (13))) goto event_2004_76_end;
        ((Active*)get_instance(guipause_453_instances))->force_frame(1);
    }
    event_2004_76_end: ;
}
void Frames::event_func_17146()
{
    // event 2007_76
    {
        if (!(group_pause_1)) goto event_2007_76_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto event_2007_76_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto event_2007_76_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (1))) goto event_2007_76_end;
        if (!((global_values->get(4)) == (0))) goto event_2007_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) < (13))) goto event_2007_76_end;
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
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        levelbackgroundplane2_865_instances.clear_selection();
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
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
        characterslot_133_instances.clear_selection();
        for (ObjectIterator it(characterslot_133_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        charname1_142_instances.clear_selection();
        for (ObjectIterator it(charname1_142_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        character1_223_instances.clear_selection();
        for (ObjectIterator it(character1_223_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        character2_224_instances.clear_selection();
        for (ObjectIterator it(character2_224_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        charname2_227_instances.clear_selection();
        for (ObjectIterator it(charname2_227_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(torqueship_3888_instances))->set_visible(false);
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        thrusterflame_3886_instances.clear_selection();
        for (ObjectIterator it(thrusterflame_3886_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.set(6, 990);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, -50);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(placeholdercharacter_1588_instances))->get_y());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 2);
            group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1) {
            group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1 = true;
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(6, 0);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
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
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    event_2007_76_end: ;
}
void Frames::event_func_17147()
{
    // event 2008_76
    bool or_result_2008_76 = false;
    bool or_temp_result_2008_76_0 = false;
    {
        if (!(group_pause_1)) goto or_event_2008_76_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2008_76_0_end;
        guipause_453_instances.clear_selection();
        for (ObjectIterator it(guipause_453_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!guipause_453_instances.has_selection()) goto or_event_2008_76_0_end;
        crystal_456_instances.clear_selection();
        for (ObjectIterator it(crystal_456_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!crystal_456_instances.has_selection()) goto or_event_2008_76_0_end;
        or_result_2008_76 = true;
        or_temp_result_2008_76_0 = true;
    }
    or_event_2008_76_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    guipause_453_instances.clear_saved_selection();
    crystal_456_instances.clear_saved_selection();
    if (or_temp_result_2008_76_0) {
        guipause_453_instances.save_selection();
        inputsp1_21_instances.save_selection();
        crystal_456_instances.save_selection();
    }
    // event 2008_76
    bool or_temp_result_2008_76_1 = false;
    {
        if (!(group_pause_1)) goto or_event_2008_76_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2008_76_1_end;
        guipause_453_instances.clear_selection();
        for (ObjectIterator it(guipause_453_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!guipause_453_instances.has_selection()) goto or_event_2008_76_1_end;
        crystal_456_instances.clear_selection();
        for (ObjectIterator it(crystal_456_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!crystal_456_instances.has_selection()) goto or_event_2008_76_1_end;
        if (!((global_values->get(4)) == (0))) goto or_event_2008_76_1_end;
        torqueshiptail_3889_instances.clear_selection();
        for (ObjectIterator it(torqueshiptail_3889_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) >= (13))) { it.deselect(); continue; }
        }
        if (!torqueshiptail_3889_instances.has_selection()) goto or_event_2008_76_1_end;
        or_result_2008_76 = true;
        or_temp_result_2008_76_1 = true;
        or_event_2008_76_1_end: ;
        torqueshiptail_3889_instances.clear_saved_selection();
        if (or_temp_result_2008_76_1) {
            torqueshiptail_3889_instances.save_selection();
            guipause_453_instances.save_selection();
            inputsp1_21_instances.save_selection();
            crystal_456_instances.save_selection();
        }
        if (!or_result_2008_76) goto or_final_or_event_2008_76_1_end;
        torqueshiptail_3889_instances.empty_selection();
        inputsp1_21_instances.empty_selection();
        guipause_453_instances.empty_selection();
        crystal_456_instances.empty_selection();
        if (or_temp_result_2008_76_1) {
            torqueshiptail_3889_instances.restore_selection();
        }
        if (or_temp_result_2008_76_0 || or_temp_result_2008_76_1) {
            guipause_453_instances.restore_selection();
        }
        if (or_temp_result_2008_76_0 || or_temp_result_2008_76_1) {
            inputsp1_21_instances.restore_selection();
        }
        if (or_temp_result_2008_76_0 || or_temp_result_2008_76_1) {
            crystal_456_instances.restore_selection();
        }
        for (ObjectIterator it(crystal_456_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 3);
        }
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-global_values->get(16)-120);
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        fadeedge_57_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fadeedge_57(0, 0), 6);
            fadeedge_57_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    or_final_or_event_2008_76_1_end: ;
}
void Frames::event_func_17148()
{
    // event 2010_76
    {
        if (!(group_pause_1)) goto event_2010_76_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_2010_76_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto event_2010_76_end;
        if (!((global_values->get(4)) == (0))) goto event_2010_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) >= (13))) goto event_2010_76_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2010_76_end;
        next_frame = 20 + 0;    
    
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        global_values->set(4, 0);
        media.stop_samples();
    }
    event_2010_76_end: ;
}
void Frames::event_func_17149()
{
    // event 2011_76
    {
        if (!(group_pause_1)) goto event_2011_76_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_2011_76_end;
        if (!((global_values->get(4)) == (0))) goto event_2011_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) < (13))) goto event_2011_76_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2011_76_end;
        next_frame = 3 + 0;    
    
    }
    event_2011_76_end: ;
}
void Frames::event_func_17150()
{
    // event 2012_76
    {
        if (!(group_pause_1)) goto event_2012_76_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_2012_76_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto event_2012_76_end;
        if (!((global_values->get(4)) > (0))) goto event_2012_76_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2012_76_end;
        next_frame = 24 + 0;    
    
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        global_values->set(4, 0);
        media.stop_samples();
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, ((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 3));
    }
    event_2012_76_end: ;
}
void Frames::event_func_17151()
{
    // event 2013_76
    {
        if (!(group_pause_1)) goto event_2013_76_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto event_2013_76_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto event_2013_76_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (1))) goto event_2013_76_end;
        if (!((global_values->get(4)) > (0))) goto event_2013_76_end;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 4);
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-global_values->get(16)-120);
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        fadeedge_57_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fadeedge_57(0, 0), 6);
            fadeedge_57_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
    }
    event_2013_76_end: ;
}
void Frames::event_func_17152()
{
    // event 2014_76
    {
        if (!(group_pause_1)) goto event_2014_76_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (4))) goto event_2014_76_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto event_2014_76_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2014_76_end;
        next_frame = 14 + 0;    
    
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        global_values->set(4, 11);
        media.stop_samples();
    }
    event_2014_76_end: ;
}
void Frames::handle_frame_77_events()
{
    test_collisions_76();
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
    event_func_16946();
    event_func_16987();
    event_func_2650();
    if (!group_debug_1) goto group_debug_1_end;
    event_func_16747();
    group_debug_1_end: ;
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
    event_func_16754();
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
    event_func_2981();
    event_func_2982();
    event_func_2983();
    event_func_2984();
    event_func_2985();
    event_func_2986();
    event_func_2987();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_8770();
    event_func_2996();
    event_func_8771();
    event_func_8772();
    event_func_16791();
    if (!group_main_engine_level_specific_methods_play_bgm_1) goto group_main_engine_level_specific_methods_play_bgm_1_end;
    group_main_engine_level_specific_methods_play_bgm_1_end: ;
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1) goto group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1_end;
    if (!group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1) goto group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1_end;
    event_func_16792();
    event_func_16793();
    event_func_16794();
    event_func_16795();
    event_func_16796();
    event_func_16797();
    event_func_16798();
    event_func_16799();
    event_func_16800();
    event_func_16801();
    event_func_16802();
    event_func_16803();
    event_func_16804();
    event_func_16805();
    event_func_16806();
    event_func_16807();
    event_func_16808();
    event_func_16809();
    event_func_16810();
    event_func_16811();
    event_func_16812();
    event_func_16813();
    event_func_16814();
    event_func_16815();
    event_func_16816();
    event_func_16817();
    event_func_16818();
    event_func_16819();
    event_func_16820();
    event_func_16821();
    event_func_16822();
    event_func_16823();
    group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1) goto group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1_end;
    event_func_16824();
    event_func_16825();
    event_func_16826();
    event_func_16827();
    event_func_16828();
    event_func_16829();
    event_func_16830();
    event_func_16831();
    event_func_16832();
    event_func_16833();
    event_func_16834();
    event_func_16835();
    event_func_16836();
    event_func_16837();
    event_func_16838();
    event_func_16839();
    event_func_16840();
    event_func_16841();
    event_func_16842();
    event_func_16843();
    event_func_16844();
    event_func_16845();
    event_func_16846();
    event_func_16847();
    event_func_16848();
    event_func_16849();
    event_func_16850();
    event_func_16851();
    event_func_16852();
    event_func_16853();
    event_func_16854();
    event_func_16855();
    event_func_16856();
    event_func_16857();
    event_func_16858();
    event_func_16859();
    event_func_16860();
    event_func_16861();
    event_func_16862();
    event_func_16863();
    event_func_16864();
    event_func_16865();
    event_func_16866();
    event_func_16867();
    event_func_16868();
    event_func_16869();
    event_func_16870();
    event_func_16871();
    event_func_16872();
    event_func_16873();
    event_func_16874();
    event_func_16875();
    event_func_16876();
    event_func_16877();
    event_func_16878();
    event_func_16879();
    event_func_16880();
    event_func_16881();
    event_func_16882();
    event_func_16883();
    event_func_16884();
    event_func_16885();
    event_func_16886();
    event_func_16887();
    event_func_16888();
    event_func_16889();
    event_func_16890();
    event_func_16891();
    event_func_16892();
    event_func_16893();
    event_func_16894();
    event_func_16895();
    event_func_16896();
    event_func_16897();
    event_func_16898();
    event_func_16899();
    event_func_16900();
    event_func_16901();
    event_func_16902();
    event_func_16903();
    event_func_16904();
    event_func_16905();
    event_func_16906();
    event_func_16907();
    event_func_16908();
    event_func_16909();
    event_func_16910();
    event_func_16911();
    group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1_end: ;
    group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_rescue_torque_carol_intro_1) goto group_main_engine_level_specific_methods_cutscenes_rescue_torque_carol_intro_1_end;
    event_func_16912();
    event_func_16913();
    event_func_16914();
    group_main_engine_level_specific_methods_cutscenes_rescue_torque_carol_intro_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_rescue_torque_1) goto group_main_engine_level_specific_methods_cutscenes_rescue_torque_1_end;
    event_func_16915();
    event_func_16916();
    event_func_16917();
    event_func_16918();
    event_func_16919();
    event_func_16920();
    event_func_16921();
    event_func_16922();
    event_func_16923();
    event_func_16924();
    event_func_16925();
    event_func_16926();
    event_func_16927();
    event_func_16928();
    event_func_16929();
    event_func_16930();
    event_func_16931();
    event_func_16932();
    event_func_16933();
    event_func_16934();
    event_func_16935();
    event_func_16936();
    event_func_16937();
    event_func_16938();
    event_func_16939();
    event_func_16940();
    event_func_16941();
    event_func_16942();
    event_func_16943();
    event_func_16944();
    event_func_16945();
    event_func_16947();
    event_func_16948();
    event_func_16949();
    event_func_16950();
    event_func_16951();
    event_func_16952();
    event_func_16953();
    event_func_16954();
    event_func_16955();
    event_func_16956();
    event_func_16957();
    event_func_16958();
    event_func_16959();
    event_func_16960();
    event_func_16961();
    event_func_16962();
    event_func_16963();
    event_func_16964();
    event_func_16965();
    event_func_16966();
    event_func_16967();
    event_func_16968();
    event_func_16969();
    event_func_16970();
    event_func_16971();
    event_func_16972();
    event_func_16973();
    event_func_16974();
    event_func_16975();
    event_func_16976();
    event_func_16977();
    event_func_16978();
    event_func_16979();
    event_func_16980();
    event_func_16981();
    event_func_16982();
    event_func_16983();
    event_func_16984();
    event_func_16985();
    event_func_16986();
    event_func_16988();
    event_func_16989();
    event_func_16990();
    event_func_16991();
    event_func_16992();
    event_func_16993();
    event_func_16994();
    event_func_16995();
    event_func_16996();
    event_func_16997();
    event_func_16998();
    event_func_16999();
    event_func_17000();
    event_func_17001();
    event_func_17002();
    event_func_17003();
    event_func_17004();
    event_func_17005();
    event_func_17006();
    event_func_17007();
    event_func_17008();
    event_func_17009();
    event_func_17010();
    event_func_17011();
    event_func_17012();
    event_func_17013();
    event_func_17014();
    event_func_17015();
    event_func_17016();
    event_func_17017();
    event_func_17018();
    event_func_17019();
    event_func_17020();
    event_func_17021();
    event_func_17022();
    event_func_17023();
    event_func_17024();
    event_func_17025();
    event_func_17026();
    event_func_17027();
    event_func_17028();
    event_func_17029();
    event_func_17030();
    event_func_17031();
    group_main_engine_level_specific_methods_cutscenes_rescue_torque_1_end: ;
    event_func_6808();
    event_func_6809();
    event_func_6810();
    event_func_6811();
    event_func_17032();
    event_func_17033();
    event_func_17034();
    event_func_17035();
    event_func_17036();
    event_func_17037();
    event_func_17038();
    event_func_17039();
    event_func_17040();
    event_func_17041();
    event_func_17042();
    event_func_17043();
    event_func_17044();
    event_func_17045();
    event_func_17046();
    event_func_17047();
    event_func_17048();
    event_func_17049();
    event_func_17050();
    if (!group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1) goto group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1_end;
    event_func_17051();
    event_func_17052();
    event_func_17053();
    event_func_17054();
    event_func_17055();
    event_func_17056();
    event_func_17057();
    event_func_17058();
    event_func_17059();
    event_func_17060();
    event_func_17061();
    event_func_17062();
    event_func_17063();
    event_func_17064();
    event_func_17065();
    event_func_17066();
    event_func_17067();
    event_func_17068();
    event_func_17069();
    event_func_17070();
    group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1_end: ;
    event_func_17071();
    if (!group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1) goto group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1_end;
    event_func_17072();
    event_func_17073();
    event_func_17074();
    event_func_17075();
    event_func_17076();
    event_func_17077();
    event_func_17078();
    event_func_17079();
    event_func_17080();
    event_func_17081();
    event_func_17082();
    event_func_17083();
    event_func_17084();
    event_func_17085();
    event_func_17086();
    event_func_17087();
    event_func_17088();
    event_func_17089();
    event_func_17090();
    group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1_end: ;
    event_func_17091();
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
    event_func_3913();
    event_func_3914();
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
    event_func_3246();
    event_func_3247();
    event_func_3248();
    event_func_2634();
    event_func_2635();
    event_func_2636();
    event_func_2637();
    event_func_2638();
    event_func_2639();
    event_func_2640();
    event_func_2641();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_17142();
    event_func_17143();
    event_func_2644();
    event_func_17144();
    event_func_17145();
    event_func_3252();
    event_func_3253();
    event_func_17146();
    event_func_17147();
    event_func_3976();
    event_func_17148();
    event_func_17149();
    event_func_17150();
    event_func_17151();
    event_func_17152();
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
void Frames::handle_frame_77_pre_events()
{
}
void Frames::event_func_17153()
{
    // event 1_76
    {
        if (!(group_debug_1)) goto event_1_76_end;
            group_main_engine_interface_and_post_processing_methods_titlecard_1 = false;
    
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 12);
    }
    event_1_76_end: ;
}
void Frames::event_func_17154()
{
    // event 3_76
    {
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, 0);
    }
    event_3_76_end: ;
}
void Frames::event_func_17155()
{
    // event 4_76
    {
        if (!(group_main_engine_1)) goto event_4_76_end;
        ((Active*)get_instance(guipause_453_instances))->set_x(((Active*)get_instance(guipause_453_instances))->get_x()+global_values->get(16)*0.5-(105-global_values->get(19)*53));
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        ((Active*)get_instance(crystal_456_instances))->set_x(((Active*)get_instance(guipause_453_instances))->get_action_x());
        ((Active*)get_instance(levelcardgameover_462_instances))->set_x(((Active*)get_instance(levelcardgameover_462_instances))->get_x()+global_values->get(16)*0.5);
        ((Active*)get_instance(guitimer_564_instances))->set_x(((Active*)get_instance(guitimer_564_instances))->get_x()+(global_values->get(16)*0.5-160)*2);
        ((Counter*)get_instance(guitimermilli_360_instances))->set_x(((Counter*)get_instance(guitimermilli_360_instances))->get_x()+(global_values->get(16)*0.5-160)*2);
        ((Counter*)get_instance(guitimermilli2_361_instances))->set_x(((Counter*)get_instance(guitimermilli2_361_instances))->get_x()+(global_values->get(16)*0.5-160)*2);
        ((Counter*)get_instance(guitimers_362_instances))->set_x(((Counter*)get_instance(guitimers_362_instances))->get_x()+(global_values->get(16)*0.5-160)*2);
        ((Counter*)get_instance(guitimers2_363_instances))->set_x(((Counter*)get_instance(guitimers2_363_instances))->get_x()+(global_values->get(16)*0.5-160)*2);
        ((Counter*)get_instance(guitimerm_364_instances))->set_x(((Counter*)get_instance(guitimerm_364_instances))->get_x()+(global_values->get(16)*0.5-160)*2);
        ((Counter*)get_instance(guitimerm2_365_instances))->set_x(((Counter*)get_instance(guitimerm2_365_instances))->get_x()+(global_values->get(16)*0.5-160)*2);
        ((Active*)get_instance(levelcardintro2_761_instances))->set_x(((Active*)get_instance(levelcardintro2_761_instances))->get_x()+global_values->get(16)*0.5);
        ((Active*)get_instance(levelcardintro3_760_instances))->set_x(((Active*)get_instance(levelcardintro3_760_instances))->get_x()+global_values->get(16)*0.5);
    }
    event_4_76_end: ;
}
void Frames::event_func_17156()
{
    // event 5_76
    {
        if (!(group_main_engine_1)) goto event_5_76_end;
        ((Active*)get_instance(dialogbox_566_instances))->set_x(((Active*)get_instance(dialogbox_566_instances))->get_x()+global_values->get(16)*0.5);
        ((Active*)get_instance(dialogbox2_567_instances))->set_x(((Active*)get_instance(dialogbox2_567_instances))->get_x()+global_values->get(16)*0.5);
        ((Active*)get_instance(dialogarrow_568_instances))->set_x(((Active*)get_instance(dialogarrow_568_instances))->get_x()+global_values->get(16)*0.5);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_x(((TextBlitter*)get_instance(dialogtext_569_instances))->get_x()+global_values->get(16)*0.5);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->load(str_data_font_bmp_7);
        characterslot_133_instances.clear_selection();
        for (ObjectIterator it(characterslot_133_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+global_values->get(16)*0.5);
        }
        character1_223_instances.clear_selection();
        for (ObjectIterator it(character1_223_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+global_values->get(16)*0.5);
        }
        character2_224_instances.clear_selection();
        for (ObjectIterator it(character2_224_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+global_values->get(16)*0.5);
        }
        charname1_142_instances.clear_selection();
        for (ObjectIterator it(charname1_142_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+global_values->get(16)*0.5);
        }
        charname2_227_instances.clear_selection();
        for (ObjectIterator it(charname2_227_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+global_values->get(16)*0.5);
        }
        spread_value(characterslot_133_instances, 0, 0);
        characterselect_230_instances.clear_selection();
        for (ObjectIterator it(characterselect_230_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+global_values->get(16)*0.5);
            ((Active*)*it)->set_visible(false);
        }
    }
    event_5_76_end: ;
}
void Frames::event_func_17157()
{
    // event 6_76
    {
        if (!(group_main_engine_1)) goto event_6_76_end;
        characterslot_133_instances.clear_selection();
        for (ObjectIterator it(characterslot_133_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!characterslot_133_instances.has_selection()) goto event_6_76_end;
        for (ObjectIterator it(characterslot_133_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-400);
        }
        character1_223_instances.clear_selection();
        for (ObjectIterator it(character1_223_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-400);
        }
        charname1_142_instances.clear_selection();
        for (ObjectIterator it(charname1_142_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-400);
        }
    }
    event_6_76_end: ;
}
void Frames::event_func_17158()
{
    // event 7_76
    {
        if (!(group_main_engine_1)) goto event_7_76_end;
        characterslot_133_instances.clear_selection();
        for (ObjectIterator it(characterslot_133_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!characterslot_133_instances.has_selection()) goto event_7_76_end;
        for (ObjectIterator it(characterslot_133_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+400);
        }
        charname2_227_instances.clear_selection();
        for (ObjectIterator it(charname2_227_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+400);
        }
        character2_224_instances.clear_selection();
        for (ObjectIterator it(character2_224_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+400);
        }
    }
    event_7_76_end: ;
}
void Frames::event_func_17159()
{
    // event 9_76
    {
        if (!(group_main_engine_1)) goto event_9_76_end;
        if (!((global_values->get(4)) < (0))) goto event_9_76_end;
        global_values->set(13, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25));
        global_values->set(14, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(9));
        global_values->set(15, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(11));
    }
    event_9_76_end: ;
}
void Frames::event_func_17160()
{
    // event 10_76
    {
        if (!(group_main_engine_1)) goto event_10_76_end;
        if (!((global_values->get(4)) >= (0))) goto event_10_76_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(9, global_values->get(14));
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(11, global_values->get(15));
    }
    event_10_76_end: ;
}
void Frames::event_func_17161()
{
    // event 12_76
    {
        if (!(group_main_engine_1)) goto event_12_76_end;
        generaledge01_3894_instances.clear_selection();
        for (ObjectIterator it(generaledge01_3894_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!generaledge01_3894_instances.has_selection()) goto event_12_76_end;
        for (ObjectIterator it(generaledge01_3894_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_12_76_end: ;
}
void Frames::event_func_17162()
{
    // event 13_76
    {
        if (!(group_main_engine_1)) goto event_13_76_end;
        generaledge02_3895_instances.clear_selection();
        for (ObjectIterator it(generaledge02_3895_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!generaledge02_3895_instances.has_selection()) goto event_13_76_end;
        for (ObjectIterator it(generaledge02_3895_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_13_76_end: ;
}
void Frames::event_func_17163()
{
    // event 14_76
    {
        if (!(group_main_engine_1)) goto event_14_76_end;
        generaledge03_3896_instances.clear_selection();
        for (ObjectIterator it(generaledge03_3896_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!generaledge03_3896_instances.has_selection()) goto event_14_76_end;
        for (ObjectIterator it(generaledge03_3896_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_14_76_end: ;
}
void Frames::event_func_17164()
{
    // event 15_76
    {
        if (!(group_main_engine_1)) goto event_15_76_end;
        generaledge04_3897_instances.clear_selection();
        for (ObjectIterator it(generaledge04_3897_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!generaledge04_3897_instances.has_selection()) goto event_15_76_end;
        for (ObjectIterator it(generaledge04_3897_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_15_76_end: ;
}
void Frames::event_func_17165()
{
    // event 16_76
    {
        if (!(group_main_engine_1)) goto event_16_76_end;
        generaledge05_3898_instances.clear_selection();
        for (ObjectIterator it(generaledge05_3898_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!generaledge05_3898_instances.has_selection()) goto event_16_76_end;
        for (ObjectIterator it(generaledge05_3898_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_16_76_end: ;
}
void Frames::event_func_17166()
{
    // event 34_76
    {
        if (!(group_main_engine_1)) goto event_34_76_end;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(3, 0.99);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(4, 0.94);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(3, 0.98);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(4, 0.93);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(3, 0.95);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(4, 0.91);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(3, 0.96);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(4, 0.92);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(6, -0.1);
        ((SystemBox*)get_instance(levelparallaxpiece4_469_instances))->alterables->values.set(3, 0.92);
        ((SystemBox*)get_instance(levelparallaxpiece4_469_instances))->alterables->values.set(4, 0.88);
        ((SystemBox*)get_instance(levelparallaxpiece4_469_instances))->alterables->values.set(6, -0.3);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(3, 0.6);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(4, 0.7);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(3, 0.5);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(4, 0.6);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(3, 0.35);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(4, 0.43);
        levelbackgroundplane2_865_instances.clear_selection();
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
        }
        spread_value(levelbackgroundplane2_865_instances, 2, 0);
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(1.0-(((Active*)*it)->alterables->values.get(2)*0.2));
        }
    }
    event_34_76_end: ;
}
void Frames::event_func_17167()
{
    // event 44_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_44_76_end;
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(19, 0.96875);
        ((Active*)get_instance(playersensorleft_390_instances))->alterables->values.set(0, -12);
        ((Active*)get_instance(playersensorleft_390_instances))->alterables->values.set(1, -2);
        ((Active*)get_instance(playersensorleftbig_391_instances))->alterables->values.set(0, -13);
        ((Active*)get_instance(playersensorleftbig_391_instances))->alterables->values.set(1, -2);
        ((Active*)get_instance(playersensorright_392_instances))->alterables->values.set(0, 12);
        ((Active*)get_instance(playersensorright_392_instances))->alterables->values.set(1, -2);
        ((Active*)get_instance(playersensorrightbig_393_instances))->alterables->values.set(0, 13);
        ((Active*)get_instance(playersensorrightbig_393_instances))->alterables->values.set(1, -2);
        ((Active*)get_instance(playersensortop_394_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playersensortop_394_instances))->alterables->values.set(1, -12);
        ((Active*)get_instance(playersensortopbig_395_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playersensortopbig_395_instances))->alterables->values.set(1, -13);
        ((Active*)get_instance(playersensorbottom_396_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playersensorbottom_396_instances))->alterables->values.set(1, 12);
        ((Active*)get_instance(playersensorbottombig_397_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playersensorbottombig_397_instances))->alterables->values.set(1, 13);
        ((Active*)get_instance(playersensorslopes_398_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playersensorslopes_398_instances))->alterables->values.set(1, 24);
        ((Active*)get_instance(playersensorplatform_399_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playersensorplatform_399_instances))->alterables->values.set(1, -5);
        ((Active*)get_instance(playersensorleftangle_400_instances))->alterables->values.set(0, -7);
        ((Active*)get_instance(playersensorleftangle_400_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playersensorrightangle_401_instances))->alterables->values.set(0, 7);
        ((Active*)get_instance(playersensorrightangle_401_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playersensorleftedge_402_instances))->alterables->values.set(0, -8);
        ((Active*)get_instance(playersensorleftedge_402_instances))->alterables->values.set(1, 12);
        ((Active*)get_instance(playersensorrightedge_403_instances))->alterables->values.set(0, 8);
        ((Active*)get_instance(playersensorrightedge_403_instances))->alterables->values.set(1, 12);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(1, 0);
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(6);
        }
    }
    event_44_76_end: ;
}
void Frames::event_func_17168()
{
    // event 1429_76
    {
        if (!(group_main_engine_1)) goto event_1429_76_end;
        if (!((global_values->get(4)) == (0))) goto event_1429_76_end;
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
        ((Active*)get_instance(torqueship_3888_instances))->alterables->values.set(0, ((Active*)get_instance(torqueship_3888_instances))->get_x());
        ((Active*)get_instance(torqueship_3888_instances))->alterables->values.set(1, ((Active*)get_instance(torqueship_3888_instances))->get_y());
        ((Active*)get_instance(torqueship_3888_instances))->alterables->values.set(5, ((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(1));
        ((Active*)get_instance(torqueship_3888_instances))->alterables->values.set(7, ((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(0));
        levelbackgroundplane2_865_instances.clear_selection();
        spread_value(levelbackgroundplane2_865_instances, 6, 0);
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->values.get(6));
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
        }
        if (!group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1) {
            group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 = true;
        }
    }
    event_1429_76_end: ;
}
void Frames::event_func_17169()
{
    // event 1430_76
    {
        if (!(group_main_engine_1)) goto event_1430_76_end;
        if (!((global_values->get(4)) == (1))) goto event_1430_76_end;
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
        if (!group_main_engine_level_specific_methods_cutscenes_rescue_torque_1) {
            group_main_engine_level_specific_methods_cutscenes_rescue_torque_1 = true;
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(2, ((Active*)get_instance(npcshellduck_533_instances))->get_x());
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(3, ((Active*)get_instance(npcshellduck_533_instances))->get_y());
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(6, ((Active*)get_instance(npcshellduck_533_instances))->get_y());
    }
    event_1430_76_end: ;
}
void Frames::event_func_17170()
{
    // event 1755_76
    {
        if (!(group_main_engine_1)) goto event_1755_76_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 21)) == (1))) goto event_1755_76_end;
        ((Active*)get_instance(placeholdercharacter_1588_instances))->replace_color(make_color_int(104, 200, 248), make_color_int(120, 252, 64));
        ((Active*)get_instance(placeholdercharacter_1588_instances))->replace_color(make_color_int(0, 144, 248), make_color_int(40, 184, 0));
        ((Active*)get_instance(placeholdercharacter_1588_instances))->replace_color(make_color_int(0, 108, 200), make_color_int(24, 148, 56));
        ((Active*)get_instance(placeholdercharacter_1588_instances))->replace_color(make_color_int(0, 64, 168), make_color_int(0, 124, 80));
        ((Active*)get_instance(placeholdercharacter_1588_instances))->replace_color(make_color_int(0, 36, 88), make_color_int(0, 64, 48));
    }
    event_1755_76_end: ;
}
void Frames::event_func_17171()
{
    // event 1756_76
    {
        if (!(group_main_engine_1)) goto event_1756_76_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 21)) == (2))) goto event_1756_76_end;
        ((Active*)get_instance(placeholdercharacter_1588_instances))->replace_color(make_color_int(104, 200, 248), make_color_int(248, 132, 248));
        ((Active*)get_instance(placeholdercharacter_1588_instances))->replace_color(make_color_int(0, 144, 248), make_color_int(248, 32, 244));
        ((Active*)get_instance(placeholdercharacter_1588_instances))->replace_color(make_color_int(0, 108, 200), make_color_int(200, 0, 180));
        ((Active*)get_instance(placeholdercharacter_1588_instances))->replace_color(make_color_int(0, 64, 168), make_color_int(144, 0, 104));
        ((Active*)get_instance(placeholdercharacter_1588_instances))->replace_color(make_color_int(0, 36, 88), make_color_int(88, 0, 64));
    }
    event_1756_76_end: ;
}
void Frames::event_func_17172()
{
    // event 1757_76
    {
        if (!(group_main_engine_1)) goto event_1757_76_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 21)) == (3))) goto event_1757_76_end;
        ((Active*)get_instance(placeholdercharacter_1588_instances))->replace_color(make_color_int(104, 200, 248), make_color_int(248, 200, 40));
        ((Active*)get_instance(placeholdercharacter_1588_instances))->replace_color(make_color_int(0, 144, 248), make_color_int(248, 152, 0));
        ((Active*)get_instance(placeholdercharacter_1588_instances))->replace_color(make_color_int(0, 108, 200), make_color_int(200, 80, 0));
        ((Active*)get_instance(placeholdercharacter_1588_instances))->replace_color(make_color_int(0, 64, 168), make_color_int(160, 0, 32));
        ((Active*)get_instance(placeholdercharacter_1588_instances))->replace_color(make_color_int(0, 36, 88), make_color_int(88, 0, 40));
    }
    event_1757_76_end: ;
}
void Frames::event_func_17173()
{
    // event 1758_76
    {
        if (!(group_main_engine_1)) goto event_1758_76_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 21)) == (4))) goto event_1758_76_end;
        ((Active*)get_instance(placeholdercharacter_1588_instances))->replace_color(make_color_int(104, 200, 248), make_color_int(160, 160, 128));
        ((Active*)get_instance(placeholdercharacter_1588_instances))->replace_color(make_color_int(0, 144, 248), make_color_int(100, 100, 80));
        ((Active*)get_instance(placeholdercharacter_1588_instances))->replace_color(make_color_int(0, 108, 200), make_color_int(72, 72, 72));
        ((Active*)get_instance(placeholdercharacter_1588_instances))->replace_color(make_color_int(0, 64, 168), make_color_int(32, 32, 64));
        ((Active*)get_instance(placeholdercharacter_1588_instances))->replace_color(make_color_int(0, 36, 88), make_color_int(8, 8, 32));
    }
    event_1758_76_end: ;
}
void Frames::event_func_17174()
{
    // event 1759_76
    {
        if (!(group_main_engine_1)) goto event_1759_76_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 22)) == (1))) goto event_1759_76_end;
        ((Active*)get_instance(placeholdercharacter_1588_instances))->replace_color(make_color_int(200, 0, 0), make_color_int(248, 252, 0));
        ((Active*)get_instance(placeholdercharacter_1588_instances))->replace_color(make_color_int(96, 0, 0), make_color_int(176, 132, 0));
    }
    event_1759_76_end: ;
}
void Frames::event_func_17175()
{
    // event 1760_76
    {
        if (!(group_main_engine_1)) goto event_1760_76_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 22)) == (2))) goto event_1760_76_end;
        ((Active*)get_instance(placeholdercharacter_1588_instances))->replace_color(make_color_int(200, 0, 0), make_color_int(248, 100, 248));
        ((Active*)get_instance(placeholdercharacter_1588_instances))->replace_color(make_color_int(96, 0, 0), make_color_int(168, 36, 168));
    }
    event_1760_76_end: ;
}
void Frames::event_func_17176()
{
    // event 1761_76
    {
        if (!(group_main_engine_1)) goto event_1761_76_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 22)) == (3))) goto event_1761_76_end;
        ((Active*)get_instance(placeholdercharacter_1588_instances))->replace_color(make_color_int(200, 0, 0), make_color_int(96, 116, 248));
        ((Active*)get_instance(placeholdercharacter_1588_instances))->replace_color(make_color_int(96, 0, 0), make_color_int(0, 0, 248));
    }
    event_1761_76_end: ;
}
void Frames::event_func_17177()
{
    // event 1762_76
    {
        if (!(group_main_engine_1)) goto event_1762_76_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 22)) == (4))) goto event_1762_76_end;
        ((Active*)get_instance(placeholdercharacter_1588_instances))->replace_color(make_color_int(200, 0, 0), make_color_int(232, 232, 232));
        ((Active*)get_instance(placeholdercharacter_1588_instances))->replace_color(make_color_int(96, 0, 0), make_color_int(128, 128, 128));
    }
    event_1762_76_end: ;
}
void Frames::event_func_17178()
{
    // event 1956_76
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1956_76_end;
        ((Active*)get_instance(guiscoretimerings_451_instances))->set_visible(true);
        ((Active*)get_instance(guiicon_452_instances))->set_visible(true);
            group_main_engine_interface_and_post_processing_methods_titlecard_1 = false;
    
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
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
        if (!group_pause_1) {
            group_pause_1 = true;
        }
        ((Active*)get_instance(guipause_453_instances))->force_frame(1);
    }
    event_1956_76_end: ;
}
void Frames::on_frame_77_start_events()
{
    event_func_17153();
    event_func_17154();
    event_func_17155();
    event_func_17156();
    event_func_17157();
    event_func_17158();
    event_func_4498();
    event_func_17159();
    event_func_17160();
    event_func_17161();
    event_func_17162();
    event_func_17163();
    event_func_17164();
    event_func_17165();
    event_func_2657();
    event_func_2658();
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
    event_func_17166();
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
    event_func_3274();
    event_func_3275();
    event_func_2686();
    event_func_4323();
    event_func_17168();
    event_func_17169();
    event_func_17170();
    event_func_17171();
    event_func_17172();
    event_func_17173();
    event_func_17174();
    event_func_17175();
    event_func_17176();
    event_func_17177();
    event_func_3994();
    event_func_3995();
    event_func_3996();
    event_func_17178();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_77_init()
{
    index = 76;
    width = 6112;
    height = 1864;
    virtual_width = 6112;
    virtual_height = 1864;
    background_color = Color(0, 0, 0);
    timer_base = 0;
    reset_image_cache();
    flush_image_cache();
    layers.resize(8);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    layers[1].init(1, 1.0, 1.0, true, false, false);
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
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &gimmickbridgelog_412_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, NULL};
    qualifier_8.set(10, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &gimmickbridgelog_412_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorbomb_563_instances, &hazardspikesup_558_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &generaledge01_3894_instances, &generaledge02_3895_instances, &generaledge03_3896_instances, &generaledge04_3897_instances, &generaledge05_3898_instances, NULL};
    qualifier_9.set(37, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&bosssnakebody_995_instances, NULL};
    qualifier_20.set(1, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece0_465_instances, &levelparallaxpiece1_2_instances, &levelparallaxpiece3_468_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece4_469_instances, &levelparallaxpiece5_510_instances, &levelparallaxpiece6_511_instances, &levelparallaxpiece7_764_instances, NULL};
    qualifier_0.set(8, &qualifier_0_instances[0]);
    static ObjectList* qualifier_1_instances[] = {&charname1_142_instances, &charname2_227_instances, NULL};
    qualifier_1.set(2, &qualifier_1_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorbomb_563_instances, &hazardspikesup_558_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, NULL};
    qualifier_7.set(25, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorbomb_563_instances, &bosssnakebody_995_instances, NULL};
    qualifier_4.set(34, &qualifier_4_instances[0]);
    static ObjectList* qualifier_5_instances[] = {&character1_223_instances, &character2_224_instances, NULL};
    qualifier_5.set(2, &qualifier_5_instances[0]);
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
    add_background_object(create_levelparallaxpiece0_465(0, 0), 0);
    add_background_object(create_levelparallaxpiece1_855(0, 112), 0);
    add_background_object(create_levelparallaxpiece3_856(0, 88), 0);
    add_background_object(create_levelparallaxpiece2_857(0, 128), 0);
    add_background_object(create_levelparallaxpiece4_858(0, 168), 0);
    add_background_object(create_levelparallaxpiece5_859(0, 256), 0);
    add_background_object(create_levelparallaxpiece6_860(0, 424), 0);
    add_background_object(create_levelparallaxpiece7_862(0, 728), 0);
    add_object(create_thrusterflame_3886(1854, 344), 0);
    add_object(create_levelbackgroundplane2_3887(2456, -184), 0);
    add_object(create_levelbackgroundplane2_3887(177, 103), 0);
    add_object(create_levelbackgroundplane2_3887(81, 71), 0);
    add_object(create_levelbackgroundplane2_3887(-31, 31), 0);
    add_object(create_torqueship_3888(1920, 344), 0);
    add_object(create_torqueshiptail_3889(1914, 428), 0);
    add_background_object(create_dvtree1_893(4168, 1640), 2);
    add_background_object(create_dvbackrock3_881(4152, 1728), 2);
    add_background_object(create_dvbackrock3_881(4504, 1728), 2);
    add_background_object(create_dvtree6_871(4008, 1456), 2);
    add_background_object(create_dvtree5_879(4648, 1496), 2);
    add_background_object(create_dvbackwall_866(4736, 1592), 2);
    add_background_object(create_dvtree3_897(4584, 1616), 2);
    add_background_object(create_dvtree1_893(5000, 1608), 2);
    add_background_object(create_dvtree1_893(4496, 1640), 2);
    add_background_object(create_dvtree1_893(3960, 1680), 2);
    add_background_object(create_dvtree3_897(4024, 1616), 2);
    add_background_object(create_dvtree3_897(3848, 1720), 2);
    add_background_object(create_dvtree3_897(4384, 1664), 2);
    add_background_object(create_dvbackrock2_890(5008, 1696), 2);
    add_background_object(create_dvtree2_883(5240, 1560), 2);
    add_background_object(create_dvbackrock3_881(5264, 1728), 2);
    add_background_object(create_dvbackrock3_881(5808, 1720), 2);
    add_background_object(create_dvbackrock2_890(5568, 1688), 2);
    add_background_object(create_dvtree2_883(4024, 1240), 2);
    add_background_object(create_dvbackrock3_881(4688, 1360), 2);
    add_background_object(create_dvbackrock3_881(3936, 1352), 2);
    add_background_object(create_levelbackdrop8_894(4672, 1416), 2);
    add_background_object(create_levelbackdrop9_878(4096, 1416), 2);
    add_background_object(create_levelbackdrop02_875(4032, 1416), 2);
    add_background_object(create_levelbackdrop13_884(3968, 1376), 2);
    add_background_object(create_dvwall6_885(3840, 1288), 2);
    add_background_object(create_dvwall7_892(3936, 1784), 2);
    add_background_object(create_dvbackrock1_882(5240, 536), 2);
    add_background_object(create_dvbackrock2_890(5152, 568), 2);
    add_background_object(create_dvbackrock2_890(4752, 568), 2);
    add_background_object(create_dvbackrock3_881(4840, 608), 2);
    add_background_object(create_dvbackrock1_882(3976, 536), 2);
    add_background_object(create_dvbackrock2_890(4080, 576), 2);
    add_background_object(create_dvbackrock3_881(4376, 608), 2);
    add_background_object(create_dvtree4_874(4512, 480), 2);
    add_background_object(create_dvbackrock2_890(80, 1120), 2);
    add_background_object(create_dvtree5_879(32, 1160), 2);
    add_background_object(create_dvbackrock1_882(168, 1088), 2);
    add_background_object(create_dvtree4_874(416, 1032), 2);
    add_background_object(create_dvbackwall_866(3304, 1144), 2);
    add_background_object(create_dvwall3_873(2688, 1160), 2);
    add_background_object(create_dvfloorcurveright_907(2560, 1208), 2);
    add_background_object(create_dvbackrock3_881(440, 1160), 2);
    add_background_object(create_dvtree4_874(840, 1040), 2);
    add_background_object(create_dvwall1_482(2048, 1352), 2);
    add_background_object(create_dvwall1_482(2048, 1544), 2);
    add_background_object(create_dvtree5_879(2016, 1168), 2);
    add_background_object(create_dvtree4_874(1240, 968), 2);
    add_background_object(create_dvtree2_883(1728, 1160), 2);
    add_background_object(create_dvbackrock3_881(1680, 1288), 2);
    add_background_object(create_dvbackrock2_890(1280, 1112), 2);
    add_background_object(create_dvbackrock1_882(1344, 1080), 2);
    add_background_object(create_levelbackdrop12_880(1664, 1320), 2);
    add_background_object(create_dvwall1_482(1280, 1224), 2);
    add_background_object(create_dvwall1_482(1024, 1224), 2);
    add_background_object(create_dvwall1_482(1280, 1416), 2);
    add_background_object(create_dvwall1_482(1024, 1416), 2);
    add_background_object(create_dvwall6_885(1536, 1224), 2);
    add_background_object(create_dvrockslope4_900(1024, 1200), 2);
    add_background_object(create_dvrockslope4_901(1408, 1200), 2);
    add_background_object(create_dvrockslope4_900(1280, 1200), 2);
    add_background_object(create_dvrockslope4_901(1152, 1200), 2);
    add_background_object(create_dvwall1_482(1536, 1352), 2);
    add_background_object(create_dvwall1_482(1792, 1352), 2);
    add_background_object(create_dvwall4_485(1464, 1336), 2);
    add_background_object(create_dvrockslope9_902(1600, 1240), 2);
    add_background_object(create_dvwall5_3890(1528, 1304), 2);
    add_background_object(create_dvrockslope4_901(1856, 1328), 2);
    add_background_object(create_dvrockslope4_900(1728, 1328), 2);
    add_background_object(create_dvrockedge2_904(2144, 1216), 2);
    add_background_object(create_dvwall1_482(1792, 1544), 2);
    add_background_object(create_dvwall1_482(1536, 1544), 2);
    add_background_object(create_dvrockedge1_905(1984, 1208), 2);
    add_background_object(create_dvrockslope4_901(2016, 1208), 2);
    add_background_object(create_dvbackwall_866(-608, 1552), 2);
    add_background_object(create_dvceilingoverlay_915(1984, 1216), 2);
    add_background_object(create_levelbackdrop7_917(3112, -216), 2);
    add_background_object(create_levelbackdrop7_917(3352, -232), 2);
    add_background_object(create_dvrockslope4_901(12816, 1008), 2);
    add_background_object(create_dvwall4_485(1480, 1240), 2);
    add_background_object(create_dvrockslope5_912(1536, 1208), 2);
    add_background_object(create_dvwall1_482(768, 1224), 2);
    add_background_object(create_dvwall1_482(768, 1416), 2);
    add_background_object(create_dvrockslope4_900(768, 1200), 2);
    add_background_object(create_dvrockslope4_901(896, 1200), 2);
    add_background_object(create_dvwall1_482(512, 1224), 2);
    add_background_object(create_dvwall1_482(512, 1416), 2);
    add_background_object(create_dvrockslope4_900(512, 1200), 2);
    add_background_object(create_dvrockslope4_901(640, 1200), 2);
    add_background_object(create_dvrockslope4_901(2112, 1328), 2);
    add_background_object(create_dvrockslope4_900(1984, 1328), 2);
    add_background_object(create_dvwall1_482(2304, 1352), 2);
    add_background_object(create_dvwall1_482(2304, 1544), 2);
    add_background_object(create_dvrockslope4_901(2368, 1328), 2);
    add_background_object(create_dvrockslope4_900(2240, 1328), 2);
    add_background_object(create_dvwall1_482(2560, 1352), 2);
    add_background_object(create_dvwall1_482(2560, 1544), 2);
    add_background_object(create_dvrockslope4_901(2624, 1328), 2);
    add_background_object(create_dvrockedge2_904(2752, 1336), 2);
    add_background_object(create_dvwall1_482(2816, 1544), 2);
    add_background_object(create_dvrockslope4_900(2496, 1328), 2);
    add_background_object(create_levelbackdrop12_880(3200, 1256), 2);
    add_background_object(create_dvwall1_482(2816, 1160), 2);
    add_background_object(create_dvwall1_482(2816, 1352), 2);
    add_background_object(create_dvwall6_885(3072, 1160), 2);
    add_background_object(create_dvrockslope4_901(2944, 1136), 2);
    add_background_object(create_dvwall1_482(3072, 1288), 2);
    add_background_object(create_dvwall4_485(3000, 1272), 2);
    add_background_object(create_dvrockslope9_902(3136, 1176), 2);
    add_background_object(create_dvwall5_3890(3064, 1240), 2);
    add_background_object(create_dvwall4_485(3016, 1176), 2);
    add_background_object(create_dvrockslope5_912(3072, 1144), 2);
    add_background_object(create_dvrockslope1_896(3264, 1272), 2);
    add_background_object(create_dvrockslope2_910(2696, 1144), 2);
    add_background_object(create_dvrockslope4_900(2816, 1136), 2);
    add_background_object(create_dvrockedge1_905(2688, 1144), 2);
    add_background_object(create_dvwall1_482(3072, 1480), 2);
    add_background_object(create_dvwall1_482(3328, 1288), 2);
    add_background_object(create_dvrockslope4_900(3328, 1264), 2);
    add_background_object(create_dvrockslope4_901(3456, 1264), 2);
    add_background_object(create_dvrockslope4_900(3304, 1136), 2);
    add_background_object(create_dvrockedge1_905(3272, 1144), 2);
    add_background_object(create_dvrockslope4_900(3432, 1128), 2);
    add_background_object(create_dvwall1_482(256, 1224), 2);
    add_background_object(create_dvwall1_482(256, 1416), 2);
    add_background_object(create_dvrockslope4_900(256, 1200), 2);
    add_background_object(create_dvrockslope4_901(384, 1200), 2);
    add_background_object(create_dvwall1_482(0, 1224), 2);
    add_background_object(create_dvwall1_482(0, 1416), 2);
    add_background_object(create_dvrockslope4_900(0, 1200), 2);
    add_background_object(create_dvrockslope4_901(128, 1200), 2);
    add_background_object(create_dvrockedge2_904(3560, 1128), 2);
    add_background_object(create_dvwall1_482(3584, 1288), 2);
    add_background_object(create_dvrockslope4_900(3584, 1264), 2);
    add_background_object(create_dvrockslope4_901(3712, 1264), 2);
    add_background_object(create_dvwall1_482(3536, 672), 2);
    add_background_object(create_dvrockslope4_900(3536, 648), 2);
    add_background_object(create_dvrockslope4_901(3664, 648), 2);
    add_background_object(create_dvwall1_482(4048, 672), 2);
    add_background_object(create_dvrockslope4_900(4048, 648), 2);
    add_background_object(create_dvrockslope4_901(4176, 648), 2);
    add_background_object(create_dvwall1_482(4304, 672), 2);
    add_background_object(create_dvrockslope4_900(4304, 648), 2);
    add_background_object(create_dvrockslope4_901(4432, 648), 2);
    add_background_object(create_dvwall1_482(4560, 672), 2);
    add_background_object(create_dvrockslope4_900(4560, 648), 2);
    add_background_object(create_dvrockslope4_901(4688, 648), 2);
    add_background_object(create_dvrockedge1_905(3504, 656), 2);
    add_background_object(create_dvwall1_482(4816, 672), 2);
    add_background_object(create_dvrockslope4_900(4816, 648), 2);
    add_background_object(create_dvrockslope4_901(4944, 648), 2);
    add_background_object(create_dvwall1_482(5072, 672), 2);
    add_background_object(create_dvrockslope4_900(5072, 648), 2);
    add_background_object(create_dvrockslope4_901(5200, 648), 2);
    add_background_object(create_dvwall1_482(5328, 672), 2);
    add_background_object(create_dvrockslope4_900(5328, 648), 2);
    add_background_object(create_dvrockslope4_901(5456, 648), 2);
    add_background_object(create_dvwall1_482(5584, 672), 2);
    add_background_object(create_dvrockslope4_900(5584, 648), 2);
    add_background_object(create_dvrockslope4_901(5712, 648), 2);
    add_background_object(create_dvwall1_482(5840, 672), 2);
    add_background_object(create_dvrockslope4_900(5840, 648), 2);
    add_background_object(create_dvrockslope4_901(5968, 648), 2);
    add_background_object(create_dvwall1_482(6096, 672), 2);
    add_background_object(create_dvrockslope4_900(6096, 648), 2);
    add_background_object(create_dvrockslope4_901(6224, 648), 2);
    add_background_object(create_dvwall1_482(3792, 672), 2);
    add_background_object(create_dvrockslope4_900(3792, 648), 2);
    add_background_object(create_dvrockslope4_901(3920, 648), 2);
    add_background_object(create_dvwall1_482(4064, 1784), 2);
    add_background_object(create_dvwall1_482(4320, 1784), 2);
    add_background_object(create_dvrockceiling_891(3328, 1464), 2);
    add_background_object(create_dvrockceiling_891(3456, 1464), 2);
    add_background_object(create_dvrockceiling_891(3584, 1464), 2);
    add_background_object(create_dvwall9_889(3336, 1696), 2);
    add_background_object(create_dvwall8_877(3560, 1616), 2);
    add_background_object(create_dvwall6_982(3480, 1616), 2);
    add_background_object(create_dvwall4_485(3392, 1736), 2);
    add_background_object(create_dvrockslope10_911(3808, 1864), 2);
    add_background_object(create_dvrockslope6_913(3936, 1768), 2);
    add_background_object(create_dvrockslope5_912(3840, 1272), 2);
    add_background_object(create_dvrockslope4_901(4032, 1400), 2);
    add_background_object(create_levelbackdrop02_875(3840, 1416), 2);
    add_background_object(create_levelbackdrop02_875(3904, 1416), 2);
    add_background_object(create_levelbackdrop02_875(3968, 1416), 2);
    add_background_object(create_dvrockslope9_902(3904, 1304), 2);
    add_background_object(create_dvwall4_485(3808, 1352), 2);
    add_background_object(create_dvrockceiling_891(3712, 1464), 2);
    add_background_object(create_dvrockceiling_891(3840, 1464), 2);
    add_background_object(create_dvrockceiling_891(3968, 1464), 2);
    add_background_object(create_levelbackdrop7_917(5160, 1376), 2);
    add_background_object(create_levelbackdrop7_917(5368, 1376), 2);
    add_background_object(create_dvrockedge1_905(4640, 1408), 2);
    add_background_object(create_dvrockedge2_904(4160, 1408), 2);
    add_background_object(create_levelbackdrop02_875(4736, 1416), 2);
    add_background_object(create_dvwall1_482(4576, 1784), 2);
    add_background_object(create_dvrockslope4_900(4576, 1760), 2);
    add_background_object(create_dvrockslope4_901(4704, 1760), 2);
    add_background_object(create_dvwall1_482(4832, 1784), 2);
    add_background_object(create_dvwall1_482(5088, 1784), 2);
    add_background_object(create_dvrockslope4_900(4960, 1760), 2);
    add_background_object(create_dvrockslope4_901(5088, 1760), 2);
    add_background_object(create_dvwall1_482(5344, 1784), 2);
    add_background_object(create_dvwall1_482(5600, 1784), 2);
    add_background_object(create_dvwall1_482(5856, 1784), 2);
    add_background_object(create_dvrockslope4_900(5856, 1760), 2);
    add_background_object(create_dvrockslope4_901(5984, 1760), 2);
    add_background_object(create_dvwall1_482(4736, 1480), 2);
    add_background_object(create_levelbackdrop02_875(4800, 1416), 2);
    add_background_object(create_levelbackdrop02_875(4864, 1416), 2);
    add_background_object(create_dvwalledge1_887(4736, 1544), 2);
    add_background_object(create_dvwalledge1_887(4736, 1608), 2);
    add_background_object(create_dvwalledge1_887(4736, 1480), 2);
    add_background_object(create_dvrockceiling_891(4736, 1656), 2);
    add_background_object(create_levelbackdrop02_875(4928, 1416), 2);
    add_background_object(create_levelbackdrop02_875(4992, 1416), 2);
    add_background_object(create_levelbackdrop02_875(5056, 1416), 2);
    add_background_object(create_levelbackdrop02_875(5120, 1416), 2);
    add_background_object(create_dvrockslope4_901(5056, 1400), 2);
    add_background_object(create_dvwalledge2_978(4976, 1480), 2);
    add_background_object(create_dvwalledge2_978(4976, 1544), 2);
    add_background_object(create_dvwalledge2_978(4976, 1608), 2);
    add_background_object(create_dvrockceiling_891(4864, 1656), 2);
    add_background_object(create_dvwall4_485(4744, 1432), 2);
    add_background_object(create_dvwall5_3890(4856, 1416), 2);
    add_background_object(create_dvrockslope4_900(4928, 1400), 2);
    add_background_object(create_dvrockslope4_901(4800, 1400), 2);
    add_background_object(create_dvrockceiling_891(4992, 1464), 2);
    add_background_object(create_dvrockslope4_900(4672, 1400), 2);
    add_background_object(create_dvrockslope2_910(4320, 1768), 2);
    add_background_object(create_dvrockslope2_910(4448, 1768), 2);
    add_background_object(create_dvrockslope2_910(4064, 1768), 2);
    add_background_object(create_dvrockslope2_910(4192, 1768), 2);
    add_background_object(create_dvrockslope2_910(4832, 1768), 2);
    add_background_object(create_dvrockslope2_910(5472, 1768), 2);
    add_background_object(create_dvrockslope2_910(5600, 1768), 2);
    add_background_object(create_dvrockslope2_910(5728, 1768), 2);
    add_background_object(create_dvrockslope2_910(5344, 1768), 2);
    add_background_object(create_dvrockslope2_910(5216, 1768), 2);
    add_object(create_bossserpentinearm_1863(4004, 1957), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(6112, -43), 2);
    add_object(create_playerstartingpoint_358(637, 1181), 2);
    add_object(create_link_352(88, -96), 2);
    add_object(create_objectcrystal_279(-275, 82), 2);
    add_object(create_laddertop_357(-460, 327), 2);
    add_object(create_gimmickbridge12logs_353(3152, -264), 2);
    add_object(create_objectcodec_354(-295, 108), 2);
    add_object(create_shieldearth_314(-140, 348), 2);
    add_object(create_shieldflameback_315(-96, 344), 2);
    add_object(create_shieldwood_313(-148, 340), 2);
    add_object(create_shieldmagnetic_317(-132, 348), 2);
    add_object(create_shieldwater_318(-84, 348), 2);
    add_object(create_shieldflamefront_316(-100, 348), 2);
    add_object(create_objectjumppad_530(3064, -208), 2);
    add_object(create_objectfuel_528(-412, 308), 2);
    add_object(create_gimmickbridge12logs_353(5184, 1352), 2);
    add_object(create_npcserpentine_947(4324, 1741), 2);
    add_object(create_npcshellduck_533(4468, 1754), 2);
    add_object(create_bosssnakebody_995(3996, 1524), 2);
    add_object(create_bosschargeglow_1865(3672, 1912), 2);
    add_object(create_shieldserpentine_1868(3744, 1912), 2);
    add_object(create_placeholdercharactertail_3891(-56, 1161), 2);
    add_object(create_placeholdercharacter_3892(-60, 1161), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_object(create_mapdata2_32(-432, 240), 2);
    add_background_object(create_dvbackrock1_882(5648, 1648), 3);
    add_background_object(create_dvtree6_871(4296, 1560), 3);
    add_background_object(create_dvtree6_871(4384, 1552), 3);
    add_background_object(create_dvtree5_879(4344, 1520), 3);
    add_background_object(create_dvtree5_879(4456, 1504), 3);
    add_background_object(create_dvtree6_871(4464, 1536), 3);
    add_background_object(create_dvtree6_871(4528, 1552), 3);
    add_background_object(create_dvtree6_871(4616, 1536), 3);
    add_background_object(create_dvtree5_879(4568, 1504), 3);
    add_background_object(create_dvtree5_879(4256, 1512), 3);
    add_background_object(create_dvtree6_871(4192, 1536), 3);
    add_background_object(create_dvtree5_879(4168, 1496), 3);
    add_background_object(create_dvtree6_871(4112, 1504), 3);
    add_background_object(create_dvtree5_879(4080, 1464), 3);
    add_background_object(create_dvtree6_871(4296, 1488), 3);
    add_background_object(create_dvtree6_871(4384, 1496), 3);
    add_background_object(create_dvtree6_871(4512, 1480), 3);
    add_background_object(create_dvtree6_871(4592, 1472), 3);
    add_background_object(create_dvtree6_871(4216, 1480), 3);
    add_background_object(create_dvtree6_871(4136, 1456), 3);
    add_background_object(create_dvtree5_879(4184, 1440), 3);
    add_background_object(create_dvtree5_879(4288, 1456), 3);
    add_background_object(create_dvtree5_879(4408, 1464), 3);
    add_background_object(create_dvtree5_879(4520, 1440), 3);
    add_background_object(create_dvtree5_879(4624, 1448), 3);
    add_background_object(create_dvrockslope2_910(5600, 1768), 3);
    add_background_object(create_dvrockslope2_910(5728, 1768), 3);
    add_object(create_effectfallingleaf_2323(4029, 1931), 3);
    add_object(create_active_3893(5728, 1762), 3);
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
    add_object(create_gimmickbridgelog_412(-40, -168), 5);
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
    add_object(create_guikeystone_455(80, -40), 6);
    add_object(create_guikeystone_455(56, -40), 6);
    add_object(create_crystal_456(-53, 141), 6);
    add_object(create_guipowercard_457(91, 7), 6);
    add_object(create_guipowercard_457(75, 7), 6);
    add_object(create_guipowercard_457(59, 7), 6);
    add_object(create_guipowercard_457(43, 7), 6);
    add_object(create_guipowercard_457(27, 7), 6);
    add_object(create_guicrystal_121(206, 19), 6);
    add_object(create_guitimer_564(216, -48), 6);
    add_object(create_dialogdata_3902(-136, 456), 6);
    add_object(create_lipsynchingdata_3903(-136, 496), 6);
    add_object(create_dialogbox_566(0, 8), 6);
    add_object(create_dialogbox2_567(-156, 71), 6);
    add_object(create_dialogarrow_568(132, 40), 6);
    add_object(create_dialogtext_569(-148, 8), 6);
    add_object(create_characterslot_222(-33, 128), 6);
    add_object(create_characterslot_222(-97, 80), 6);
    add_object(create_character1_223(-89, 88), 6);
    add_object(create_character2_224(-25, 136), 6);
    add_object(create_charname1_226(-72, 127), 6);
    add_object(create_charname2_227(-7, 175), 6);
    add_object(create_characterselect_230(0, 48), 6);
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
    loop_floorcheck_running = false;
    loop_floorcheck_index = 0;
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
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_76, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_76, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_76, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_76, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_76, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_76, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_76, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_76, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_76, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_76, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_76, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_76, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_76, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_76, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_76, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_76, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_76, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_76, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_76, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_76, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_76, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_76, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_76, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_76, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_76, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_76, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_76, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_76, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_76, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_76, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_76, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_76, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_76, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_76, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_76, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_76, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_76, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_76, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_76, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_76, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_76, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_76, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_76, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_76, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_76, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_76, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_76, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_76, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_76, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_76, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_76, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_76, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_76, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_76, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    group_main_engine_interface_and_post_processing_methods_shields_1 = false;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_44_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_2_4_water_shield_2_1 = false;
    not_always_121_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    not_always_1489_76 = loop_count;
    not_always_1491_76 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    group_main_engine_interface_and_post_processing_methods_shields_3_magnetic_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_sound_events_milla_1 = false;
    not_always_1051_14 = loop_count;
    once_condition_1560_76 = false;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_1709_76 = loop_count;
    not_always_449_13 = loop_count;
    not_always_97_0 = loop_count;
    not_always_1048_14 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    once_condition_1467_76 = false;
    not_always_1046_14 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1803_76 = loop_count;
    group_main_engine_global_methods_common_objects_shields_2_5_earth_shield_2_1 = false;
    group_main_engine_global_methods_player_player_movement_1 = true;
    not_always_1531_76 = loop_count;
    not_always_1609_36 = loop_count;
    not_always_68_13 = loop_count;
    group_main_engine_interface_and_post_processing_methods_shields_4_water_shield_1 = false;
    not_always_1149_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    not_always_1287_76 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1 = false;
    not_always_1702_76 = loop_count;
    not_always_100_0 = loop_count;
    not_always_1599_76 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_1487_76 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1678_76 = loop_count;
    not_always_1682_76 = loop_count;
    not_always_1422_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    not_always_1461_76 = loop_count;
    group_main_engine_global_methods_common_objects_shields_2_2_flame_shield_2_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    group_main_engine_interface_and_post_processing_methods_shields_1_wood_shield_1 = false;
    not_always_96_0 = loop_count;
    not_always_130_0 = loop_count;
    once_condition_39_14 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_1449_13 = loop_count;
    not_always_46_13 = loop_count;
    not_always_1733_76 = loop_count;
    not_always_43_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    not_always_99_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    once_condition_1551_76 = false;
    not_always_45_13 = loop_count;
    not_always_53_13 = loop_count;
    group_main_engine_interface_and_post_processing_methods_shields_2_flame_shield_1 = false;
    not_always_172_8 = loop_count;
    once_condition_63_0 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    not_always_1447_13 = loop_count;
    not_always_1554_76 = loop_count;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1 = false;
    not_always_101_0 = loop_count;
    not_always_1806_76 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_422_13 = loop_count;
    once_condition_1431_76 = false;
    not_always_171_8 = loop_count;
    group_main_engine_global_methods_common_objects_shields_2_3_magnetic_shield_2_1 = false;
    once_condition_64_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1148_14 = loop_count;
    once_condition_57_14 = false;
    once_condition_38_14 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    group_debug_1 = false;
    not_always_1532_76 = loop_count;
    not_always_1333_14 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_rescue_torque_carol_intro_1 = false;
    not_always_558_13 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_175_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    not_always_1480_76 = loop_count;
    not_always_1705_76 = loop_count;
    once_condition_41_14 = false;
    not_always_1049_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    once_condition_40_14 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_606_14 = loop_count;
    not_always_57_13 = loop_count;
    not_always_1600_76 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    once_condition_565_76 = false;
    not_always_450_13 = loop_count;
    not_always_52_13 = loop_count;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    once_condition_138_0 = false;
    not_always_1582_76 = loop_count;
    group_mac_controls_1 = false;
    group_main_engine_level_specific_methods_cutscenes_rescue_torque_1 = false;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    not_always_1790_76 = loop_count;
    not_always_522_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_234_13 = loop_count;
    not_always_140_0 = loop_count;
    not_always_553_13 = loop_count;
    not_always_813_13 = loop_count;
    not_always_64_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    group_main_engine_global_methods_common_objects_shields_2_1_wood_shield_2_1 = false;
    group_pause_1 = false;
    not_always_1050_14 = loop_count;
    not_always_41_13 = loop_count;
    once_condition_550_76 = false;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_540_13 = loop_count;
    group_main_engine_level_specific_methods_play_bgm_1 = false;
    not_always_1421_13 = loop_count;
    not_always_1612_76 = loop_count;
    not_always_70_13 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1 = true;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    not_always_1706_76 = loop_count;
    not_always_1610_76 = loop_count;
    once_condition_63_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_174_8 = loop_count;
    not_always_1698_16 = loop_count;
    once_condition_66_13 = false;
    group_main_engine_interface_and_post_processing_methods_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    not_always_69_13 = loop_count;
    not_always_1039_13 = loop_count;
    not_always_1425_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    once_condition_59_14 = false;
    not_always_809_13 = loop_count;
    once_condition_48_13 = false;
    not_always_103_0 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
    once_condition_1622_76 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    group_sound_events_carol_1 = false;
    every_819_13 = 0.0f;
    once_condition_58_14 = false;
    group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    not_always_311_14 = loop_count;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_744_13 = loop_count;
    not_always_95_0 = loop_count;
    not_always_1047_14 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 = false;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    not_always_1557_76 = loop_count;
    not_always_1673_76 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    not_always_98_0 = loop_count;
    not_always_1432_76 = loop_count;
    once_condition_50_13 = false;
    not_always_560_14 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1 = false;
    not_always_1697_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_1695_16 = loop_count;
    not_always_1696_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    not_always_102_0 = loop_count;
}
void Frames::loop_wrapper_sound_hurt1_77(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_77(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_77(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_77(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_77(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_77(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_process_call_resume_music_77(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_sound_idle7_77(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_77(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_16();
}
void Frames::loop_wrapper_sound_dig2_77(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_77(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_77(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_77(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_sound_explode5_77(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_77(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_process_call_unlock_music_77(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_77(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_sound_explode8_77(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_process_call_reset_music_77(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_77(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_77(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_77(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_explode0_77(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_77(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_77(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_camera_mode1_77(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_16();
}
void Frames::loop_wrapper_camera_mode0_77(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_16();
}
void Frames::loop_wrapper_process_call_play_music_77(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_77(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_13();
}
void Frames::loop_wrapper_sound_attack1_77(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_77(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_77(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_77(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_play_music_8_77(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_uppercut3_77(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_77(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_77(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_77(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_77(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_77(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_77(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_77(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_77(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_13();
}
void Frames::loop_wrapper_play_music_5_77(void * frame)
{
    ((Frames*)frame)->loop_play_music_7_26();
}
void Frames::loop_wrapper_play_music_6_77(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_26();
}
void Frames::loop_wrapper_sound_go0_77(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_unqueue_music_77(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_process_call_me_77(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_77(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_59();
}
void Frames::loop_wrapper_sound_explode3_77(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_cyclone0_77(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_sound_explode2_77(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_77(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
