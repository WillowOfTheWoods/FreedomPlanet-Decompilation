#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_11562()
{
    // event 1832_48
    {
        if (!(group_main_engine_1)) goto event_1832_48_end;
        if (!((global_values->get(4)) < (4))) goto event_1832_48_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (10344))) goto event_1832_48_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (10544))) goto event_1832_48_end;
        global_values->set(4, 4);
        global_values->set(5, 10400);
        global_values->set(6, 2712);
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
    event_1832_48_end: ;
}
void Frames::event_func_11563()
{
    // event 1833_48
    {
        if (!(group_main_engine_1)) goto event_1833_48_end;
        if (!((global_values->get(4)) < (5))) goto event_1833_48_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (14620))) goto event_1833_48_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (14820))) goto event_1833_48_end;
        global_values->set(4, 4);
        global_values->set(5, 14720);
        global_values->set(6, 2328);
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
    event_1833_48_end: ;
}
void Frames::event_func_11564()
{
    // event 2065_48
    {
        if (!(group_pause_1)) goto event_2065_48_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_2065_48_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2065_48_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_2065_48_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_2065_48_end;
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
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        lockeddoorterminal_2606_instances.clear_selection();
        for (ObjectIterator it(lockeddoorterminal_2606_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(enemypushup_2656_instances))->stop_animation();
        enemypushuplaser3_2572_instances.clear_selection();
        for (ObjectIterator it(enemypushuplaser3_2572_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemypushuplaser_2570_instances.clear_selection();
        for (ObjectIterator it(enemypushuplaser_2570_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        enemypushuplaser2_2571_instances.clear_selection();
        for (ObjectIterator it(enemypushuplaser2_2571_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        enemyhomingbullet_2568_instances.clear_selection();
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        levelfireplatformflame1_2644_instances.clear_selection();
        for (ObjectIterator it(levelfireplatformflame1_2644_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        levelfireplatformflame2_2645_instances.clear_selection();
        for (ObjectIterator it(levelfireplatformflame2_2645_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        gimmickwaterturbinebubble_2829_instances.clear_selection();
        for (ObjectIterator it(gimmickwaterturbinebubble_2829_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        metaldoorfront_2670_instances.clear_selection();
        for (ObjectIterator it(metaldoorfront_2670_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        metaldoorback_2604_instances.clear_selection();
        for (ObjectIterator it(metaldoorback_2604_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        lockeddoorseal_2672_instances.clear_selection();
        for (ObjectIterator it(lockeddoorseal_2672_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        lockeddoorback_2605_instances.clear_selection();
        for (ObjectIterator it(lockeddoorback_2605_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        lockeddoorfront_2671_instances.clear_selection();
        for (ObjectIterator it(lockeddoorfront_2671_instances); !it.end(); ++it) {
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
        hazardfireup_2226_instances.clear_selection();
        for (ObjectIterator it(hazardfireup_2226_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        hazardfireright_2228_instances.clear_selection();
        for (ObjectIterator it(hazardfireright_2228_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        hazardfireleft_2229_instances.clear_selection();
        for (ObjectIterator it(hazardfireleft_2229_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        generalwaterhorizon_415_instances.clear_selection();
        for (ObjectIterator it(generalwaterhorizon_415_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(gimmickwaterlever1_2837_instances))->stop_animation();
        ((Active*)get_instance(gimmickwaterlever2_2838_instances))->stop_animation();
        hazardlavafallwarning_2709_instances.clear_selection();
        for (ObjectIterator it(hazardlavafallwarning_2709_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectkeycard_2643_instances.clear_selection();
        for (ObjectIterator it(objectkeycard_2643_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemylavasquidlaser_2676_instances.clear_selection();
        for (ObjectIterator it(enemylavasquidlaser_2676_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        gimmickfireball_1096_instances.clear_selection();
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_2065_48_end: ;
}
void Frames::event_func_11565()
{
    // event 2066_48
    bool or_result_2066_48 = false;
    bool or_temp_result_2066_48_0 = false;
    {
        if (!(group_pause_1)) goto or_event_2066_48_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_2066_48_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2066_48_0_end;
        or_result_2066_48 = true;
        or_temp_result_2066_48_0 = true;
    }
    or_event_2066_48_0_end: ;
    // event 2066_48
    bool or_temp_result_2066_48_1 = false;
    {
        if (!(group_pause_1)) goto or_event_2066_48_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_2066_48_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2066_48_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_2066_48_1_end;
        or_result_2066_48 = true;
        or_temp_result_2066_48_1 = true;
        or_event_2066_48_1_end: ;
        if (!or_result_2066_48) goto or_final_or_event_2066_48_1_end;
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
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        lockeddoorterminal_2606_instances.clear_selection();
        for (ObjectIterator it(lockeddoorterminal_2606_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(enemypushup_2656_instances))->start_animation();
        enemypushuplaser_2570_instances.clear_selection();
        for (ObjectIterator it(enemypushuplaser_2570_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        enemypushuplaser2_2571_instances.clear_selection();
        for (ObjectIterator it(enemypushuplaser2_2571_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        enemypushuplaser3_2572_instances.clear_selection();
        for (ObjectIterator it(enemypushuplaser3_2572_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyhomingbullet_2568_instances.clear_selection();
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        levelfireplatformflame1_2644_instances.clear_selection();
        for (ObjectIterator it(levelfireplatformflame1_2644_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        levelfireplatformflame2_2645_instances.clear_selection();
        for (ObjectIterator it(levelfireplatformflame2_2645_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        gimmickwaterturbinebubble_2829_instances.clear_selection();
        for (ObjectIterator it(gimmickwaterturbinebubble_2829_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        metaldoorfront_2670_instances.clear_selection();
        for (ObjectIterator it(metaldoorfront_2670_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        metaldoorback_2604_instances.clear_selection();
        for (ObjectIterator it(metaldoorback_2604_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        lockeddoorseal_2672_instances.clear_selection();
        for (ObjectIterator it(lockeddoorseal_2672_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        lockeddoorback_2605_instances.clear_selection();
        for (ObjectIterator it(lockeddoorback_2605_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        lockeddoorfront_2671_instances.clear_selection();
        for (ObjectIterator it(lockeddoorfront_2671_instances); !it.end(); ++it) {
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
        hazardfireup_2226_instances.clear_selection();
        for (ObjectIterator it(hazardfireup_2226_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        hazardfireleft_2229_instances.clear_selection();
        for (ObjectIterator it(hazardfireleft_2229_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        hazardfireright_2228_instances.clear_selection();
        for (ObjectIterator it(hazardfireright_2228_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        generalwaterhorizon_415_instances.clear_selection();
        for (ObjectIterator it(generalwaterhorizon_415_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(gimmickwaterlever1_2837_instances))->start_animation();
        ((Active*)get_instance(gimmickwaterlever2_2838_instances))->start_animation();
        hazardlavafallwarning_2709_instances.clear_selection();
        for (ObjectIterator it(hazardlavafallwarning_2709_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectkeycard_2643_instances.clear_selection();
        for (ObjectIterator it(objectkeycard_2643_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemylavasquidlaser_2676_instances.clear_selection();
        for (ObjectIterator it(enemylavasquidlaser_2676_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        gimmickfireball_1096_instances.clear_selection();
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_2066_48_1_end: ;
}
void Frames::handle_frame_49_events()
{
    test_collisions_48();
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
    event_func_11128();
    event_func_5247();
    event_func_2650();
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
    event_func_11389();
    event_func_1564();
    event_func_1565();
    event_func_1566();
    event_func_1567();
    event_func_11390();
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
    event_func_11391();
    event_func_11392();
    event_func_11393();
    event_func_11394();
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
    event_func_11395();
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
    event_func_11396();
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
    event_func_11397();
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
    event_func_11398();
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
    event_func_11399();
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
    event_func_11504();
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
    event_func_11505();
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
    event_func_11402();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end;
    event_func_1828();
    event_func_11403();
    event_func_11404();
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
    event_func_11405();
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
    event_func_11406();
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
    event_func_11506();
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
    event_func_11408();
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
    event_func_11409();
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
    event_func_11410();
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
    event_func_11411();
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
    event_func_11412();
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
    event_func_11413();
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
    event_func_11507();
    event_func_11508();
    event_func_11509();
    event_func_11510();
    event_func_11511();
    event_func_11512();
    event_func_11513();
    event_func_11514();
    event_func_11515();
    event_func_11516();
    event_func_11517();
    event_func_11518();
    event_func_11519();
    event_func_11520();
    event_func_11521();
    event_func_11522();
    if (!group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1) goto group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end;
    event_func_3737();
    event_func_3738();
    event_func_3739();
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end: ;
    event_func_11426();
    event_func_11427();
    event_func_10769();
    event_func_10770();
    event_func_10771();
    event_func_10772();
    event_func_10773();
    event_func_10774();
    event_func_10775();
    event_func_10776();
    event_func_10777();
    event_func_10977();
    event_func_11523();
    event_func_11524();
    event_func_11115();
    event_func_10976();
    event_func_11525();
    event_func_11526();
    event_func_11527();
    event_func_11528();
    event_func_11529();
    event_func_11530();
    event_func_11531();
    event_func_11117();
    event_func_11118();
    event_func_11119();
    event_func_7545();
    event_func_7546();
    event_func_7547();
    event_func_7548();
    event_func_7549();
    event_func_7550();
    event_func_11532();
    event_func_11533();
    event_func_9123();
    event_func_11534();
    event_func_11535();
    event_func_11536();
    event_func_11537();
    event_func_11538();
    event_func_11539();
    event_func_11540();
    event_func_11541();
    event_func_11542();
    event_func_11543();
    event_func_11544();
    event_func_11429();
    event_func_11430();
    event_func_11431();
    event_func_11545();
    event_func_11546();
    event_func_11547();
    event_func_11548();
    event_func_11549();
    event_func_11550();
    event_func_11551();
    event_func_11552();
    event_func_11553();
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
    event_func_11554();
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
    event_func_10810();
    event_func_10811();
    event_func_10812();
    event_func_10813();
    event_func_10814();
    event_func_10815();
    event_func_10816();
    event_func_10817();
    event_func_10818();
    event_func_10819();
    event_func_10820();
    event_func_10821();
    event_func_10822();
    event_func_10823();
    event_func_10824();
    event_func_10825();
    event_func_10826();
    event_func_11555();
    event_func_11556();
    event_func_10829();
    event_func_10830();
    event_func_10831();
    event_func_11123();
    event_func_11124();
    event_func_11125();
    event_func_11126();
    event_func_11127();
    event_func_11129();
    event_func_11130();
    event_func_11131();
    event_func_11132();
    event_func_11133();
    event_func_11134();
    event_func_10844();
    event_func_10845();
    event_func_10846();
    event_func_10847();
    event_func_10848();
    event_func_10849();
    event_func_10850();
    event_func_11004();
    event_func_11005();
    event_func_11006();
    event_func_11007();
    event_func_11008();
    event_func_11009();
    event_func_11010();
    event_func_11011();
    event_func_11012();
    event_func_11013();
    event_func_11014();
    event_func_11015();
    event_func_11016();
    event_func_11017();
    event_func_11018();
    event_func_11019();
    event_func_11020();
    event_func_11021();
    event_func_11557();
    event_func_11023();
    event_func_11024();
    event_func_11025();
    event_func_11026();
    event_func_11435();
    event_func_11436();
    event_func_11437();
    event_func_11438();
    event_func_11439();
    event_func_11440();
    event_func_11441();
    event_func_11442();
    event_func_11443();
    event_func_11444();
    event_func_11445();
    event_func_11446();
    event_func_11447();
    event_func_11448();
    event_func_11449();
    event_func_11450();
    event_func_11451();
    event_func_11452();
    event_func_11453();
    event_func_11454();
    event_func_11455();
    event_func_11456();
    event_func_11457();
    event_func_11458();
    event_func_11558();
    event_func_11460();
    event_func_11461();
    event_func_5240();
    event_func_5241();
    event_func_11462();
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
    event_func_11559();
    event_func_11482();
    event_func_11136();
    event_func_2996();
    event_func_2997();
    event_func_2998();
    event_func_3286();
    event_func_3867();
    event_func_2491();
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
    event_func_10851();
    event_func_10852();
    event_func_10853();
    event_func_10854();
    event_func_10855();
    event_func_10856();
    event_func_10857();
    event_func_10858();
    event_func_10859();
    event_func_10860();
    event_func_10861();
    event_func_10862();
    event_func_10863();
    event_func_11138();
    event_func_10876();
    event_func_10877();
    event_func_10878();
    event_func_10879();
    event_func_10880();
    event_func_10881();
    event_func_10882();
    event_func_10883();
    event_func_10884();
    event_func_10885();
    event_func_10886();
    event_func_10887();
    if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) goto group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end;
    event_func_4173();
    event_func_4638();
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end: ;
    event_func_11560();
    event_func_11561();
    event_func_11562();
    event_func_11563();
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
    event_func_3956();
    group_main_engine_interface_and_post_processing_methods_timer_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_titlecard_1) goto group_main_engine_interface_and_post_processing_methods_titlecard_1_end;
    event_func_3959();
    event_func_3960();
    event_func_3961();
    event_func_3962();
    event_func_3963();
    event_func_10929();
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
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_11564();
    event_func_11565();
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
void Frames::handle_frame_49_pre_events()
{
}
void Frames::event_func_11566()
{
    // event 2_48
    {
        if (!(group_main_engine_1)) goto event_2_48_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 2920);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 67);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 30);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
    }
    event_2_48_end: ;
}
void Frames::event_func_11567()
{
    // event 1416_48
    {
        if (!(group_main_engine_1)) goto event_1416_48_end;
        gimmickwaterlevelmask2_2853_instances.clear_selection();
        for (ObjectIterator it(gimmickwaterlevelmask2_2853_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_y());
        }
        gimmickwaterlevelmask1_2852_instances.clear_selection();
        for (ObjectIterator it(gimmickwaterlevelmask1_2852_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_y());
        }
    }
    event_1416_48_end: ;
}
void Frames::event_func_11568()
{
    // event 1456_48
    {
        if (!(group_main_engine_1)) goto event_1456_48_end;
        gimmckgiantpresser_2836_instances.clear_selection();
        for (ObjectIterator it(gimmckgiantpresser_2836_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_y());
        }
        gimmickgiantpressertube_2835_instances.clear_selection();
        for (ObjectIterator it(gimmickgiantpressertube_2835_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_y());
        }
    }
    event_1456_48_end: ;
}
void Frames::event_func_11569()
{
    // event 1474_48
    {
        if (!(group_main_engine_1)) goto event_1474_48_end;
        tbwaterlight_2848_instances.clear_selection();
        spread_value(tbwaterlight_2848_instances, 0, 0);
        underwaterbgturbine_2839_instances.clear_selection();
        spread_value(underwaterbgturbine_2839_instances, 0, 0);
        for (ObjectIterator it(underwaterbgturbine_2839_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)*72);
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->get_y());
        }
    }
    event_1474_48_end: ;
}
void Frames::event_func_11570()
{
    // event 1830_48
    {
        if (!(group_main_engine_1)) goto event_1830_48_end;
        if (!((global_values->get(4)) >= (2))) goto event_1830_48_end;
        if (!((global_values->get(4)) <= (3))) goto event_1830_48_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 3240);
    }
    event_1830_48_end: ;
}
void Frames::on_frame_49_start_events()
{
    event_func_4133();
    event_func_11566();
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
    event_func_11499();
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
    event_func_11567();
    event_func_3986();
    event_func_3987();
    event_func_10937();
    event_func_11359();
    event_func_11568();
    event_func_11569();
    event_func_10707();
    event_func_10939();
    event_func_10940();
    event_func_11500();
    event_func_11501();
    event_func_2686();
    event_func_2687();
    event_func_10941();
    event_func_11570();
    event_func_3994();
    event_func_3995();
    event_func_3996();
    event_func_11072();
    event_func_11073();
    event_func_4146();
    event_func_4143();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_49_init()
{
    index = 48;
    width = 16064;
    height = 4480;
    virtual_width = 16064;
    virtual_height = 4480;
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
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &levelfireplatform1_2646_instances, &airventplatform_2668_instances, &levelpistonplatform1_2717_instances, NULL};
    qualifier_8.set(12, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &levelfireplatform1_2646_instances, &airventplatform_2668_instances, &hazardspikesup_558_instances, &levelpistonplatform1_2717_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, &hazardspikesdown_559_instances, NULL};
    qualifier_9.set(35, &qualifier_9_instances[0]);
    static ObjectList* qualifier_31_instances[] = {&gimmickconveyorbeltright_2818_instances, &gimmickconveyorbeltright2_2819_instances, &gimmickconveyorbeltright3_2820_instances, &gimmickconveyorbeltleft_2824_instances, &gimmickconveyorbeltleft2_2825_instances, &gimmickconveyorbeltleft3_2826_instances, NULL};
    qualifier_31.set(6, &qualifier_31_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemyelitemask_2511_instances, &enemyseeker_2648_instances, &enemypushuphitbox_2653_instances, &enemylavasquiddebris_2677_instances, &enemylavasquid_2721_instances, &enemysaucerdebris_2761_instances, &enemysaucer_2812_instances, &enemytankbot_2821_instances, NULL};
    qualifier_20.set(8, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece1_2_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece3_468_instances, NULL};
    qualifier_0.set(3, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &levellift_2647_instances, &lockeddoorbarrier_2667_instances, &hazardspikesup_558_instances, &levelfireplatform2_2739_instances, &hazardfloortrap_2748_instances, &tbpipeloop1_2803_instances, &tbpipeloop2_2804_instances, &tbpipeloop5_2805_instances, &tbpipeloop7_2806_instances, &tbpipeloop3_2807_instances, &tbpipeloop4_2808_instances, &tbpipeloop6_2809_instances, &gimmickconveyorbeltright_2818_instances, &gimmickconveyorbeltright2_2819_instances, &gimmickconveyorbeltright3_2820_instances, &tbpipeloop8_2822_instances, &gimmickconveyorbeltleft_2824_instances, &gimmickconveyorbeltleft2_2825_instances, &gimmickconveyorbeltleft3_2826_instances, &tbpipeloop10_2849_instances, &tbpipeloop11_2850_instances, &gimmickwaterturbine_2851_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, &hazardspikesdown_559_instances, NULL};
    qualifier_7.set(47, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_4.set(34, &qualifier_4_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(12, &qualifier_19_instances[0]);
    static ObjectList* qualifier_23_instances[] = {&gimmickhangingidlesensor_740_instances, &gimmickwaterlevelmask1_2852_instances, &gimmickwaterlevelmask2_2853_instances, NULL};
    qualifier_23.set(3, &qualifier_23_instances[0]);
    static ObjectList* qualifier_14_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_14.set(1, &qualifier_14_instances[0]);
    static ObjectList* qualifier_15_instances[] = {&laddertop_357_instances, &mastergroupsb_385_instances, NULL};
    qualifier_15.set(2, &qualifier_15_instances[0]);
    static ObjectList* qualifier_16_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_16.set(1, &qualifier_16_instances[0]);
    static ObjectList* qualifier_17_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_17.set(1, &qualifier_17_instances[0]);
    static ObjectList* qualifier_10_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &tbpipeloop2_2804_instances, &tbpipeloop5_2805_instances, &tbpipeloop7_2806_instances, &tbpipeloop3_2807_instances, &tbpipeloop6_2809_instances, &tbpipeloop11_2850_instances, NULL};
    qualifier_10.set(9, &qualifier_10_instances[0]);
    static ObjectList* qualifier_11_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &tbpipeloop1_2803_instances, &tbpipeloop4_2808_instances, &tbpipeloop8_2822_instances, &tbpipeloop10_2849_instances, NULL};
    qualifier_11.set(7, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, &levelfireplatform1_2646_instances, NULL};
    qualifier_12.set(3, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &levelfireplatform1_2646_instances, &levellift_2647_instances, &levelpistonplatform1_2717_instances, &levelfireplatform2_2739_instances, NULL};
    qualifier_13.set(5, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece1_2758(0, 0), 0);
    add_background_object(create_levelparallaxpiece2_2827(0, 0), 0);
    add_background_object(create_levelparallaxpiece3_2828(0, 0), 0);
    add_background_object(create_tbbluewall1_2766(768, 1720), 1);
    add_background_object(create_tbbluewall1_2766(768, 1560), 1);
    add_background_object(create_tbbluewall1_2766(0, 1560), 1);
    add_background_object(create_tbbluewall1_2766(128, 1560), 1);
    add_background_object(create_tbbluewall1_2766(128, 1720), 1);
    add_background_object(create_tbbluewall1_2766(256, 1720), 1);
    add_background_object(create_tbbluewall1_2766(384, 1720), 1);
    add_background_object(create_tbbluewall1_2766(256, 1560), 1);
    add_background_object(create_tbbluewall1_2766(384, 1560), 1);
    add_background_object(create_tbbluewall1_2766(512, 1720), 1);
    add_background_object(create_tbbluewall1_2766(640, 1720), 1);
    add_background_object(create_tbbluewall1_2766(512, 1560), 1);
    add_background_object(create_tbbluewall1_2766(640, 1560), 1);
    add_background_object(create_tbbluewall1_2766(0, 1720), 1);
    add_background_object(create_tbbluewall1_2766(768, 1880), 1);
    add_background_object(create_tbbluewall1_2766(128, 1880), 1);
    add_background_object(create_tbbluewall1_2766(256, 1880), 1);
    add_background_object(create_tbbluewall1_2766(384, 1880), 1);
    add_background_object(create_tbbluewall1_2766(512, 1880), 1);
    add_background_object(create_tbbluewall1_2766(640, 1880), 1);
    add_background_object(create_tbbluewall1_2766(0, 1880), 1);
    add_background_object(create_tbbluewall1_2766(768, 2040), 1);
    add_background_object(create_tbbluewall1_2766(128, 2040), 1);
    add_background_object(create_tbbluewall1_2766(256, 2040), 1);
    add_background_object(create_tbbluewall1_2766(384, 2040), 1);
    add_background_object(create_tbbluewall1_2766(512, 2040), 1);
    add_background_object(create_tbbluewall1_2766(640, 2040), 1);
    add_background_object(create_tbbluewall1_2766(0, 2040), 1);
    add_background_object(create_tbbluewall1_2766(832, 1720), 1);
    add_background_object(create_tbbluewall1_2766(832, 1560), 1);
    add_background_object(create_tbbluewall1_2766(832, 1880), 1);
    add_background_object(create_tbbluewall1_2766(832, 2040), 1);
    add_background_object(create_tbwatersectiontop_2830(0, 2328), 1);
    add_background_object(create_tbwatersection_2831(0, 2392), 1);
    add_background_object(create_tbwatersection2_2832(11840, 0), 1);
    add_background_object(create_tbbluewall1_2766(9600, 2168), 1);
    add_background_object(create_tbbluewall1_2766(9600, 2008), 1);
    add_background_object(create_tbbluewall1_2766(9600, 1848), 1);
    add_background_object(create_tbbluewall1_2766(9600, 1688), 1);
    add_background_object(create_tbbluewall1_2766(9728, 2168), 1);
    add_background_object(create_tbbluewall1_2766(9728, 2008), 1);
    add_background_object(create_tbbluewall1_2766(9728, 1848), 1);
    add_background_object(create_tbbluewall1_2766(9728, 1688), 1);
    add_background_object(create_tbbluewall1_2766(9856, 2168), 1);
    add_background_object(create_tbbluewall1_2766(9856, 2008), 1);
    add_background_object(create_tbbluewall1_2766(9856, 1848), 1);
    add_background_object(create_tbbluewall1_2766(9856, 1688), 1);
    add_background_object(create_tbbluewall1_2766(9984, 2168), 1);
    add_background_object(create_tbbluewall1_2766(9984, 2008), 1);
    add_background_object(create_tbbluewall1_2766(9984, 1848), 1);
    add_background_object(create_tbbluewall1_2766(9984, 1688), 1);
    add_background_object(create_tbbluewall1_2766(10112, 2168), 1);
    add_background_object(create_tbbluewall1_2766(10112, 2008), 1);
    add_background_object(create_tbbluewall1_2766(10112, 1848), 1);
    add_background_object(create_tbbluewall1_2766(10112, 1688), 1);
    add_background_object(create_tbbluewall1_2766(10240, 2168), 1);
    add_background_object(create_tbbluewall1_2766(10240, 2008), 1);
    add_background_object(create_tbbluewall1_2766(10240, 1848), 1);
    add_background_object(create_tbbluewall1_2766(10240, 1688), 1);
    add_background_object(create_tbbluewall1_2766(10368, 2168), 1);
    add_background_object(create_tbbluewall1_2766(10368, 2008), 1);
    add_background_object(create_tbbluewall1_2766(10368, 1848), 1);
    add_background_object(create_tbbluewall1_2766(10368, 1688), 1);
    add_background_object(create_tbbluewall1_2766(10496, 2168), 1);
    add_background_object(create_tbbluewall1_2766(10496, 2008), 1);
    add_background_object(create_tbbluewall1_2766(10496, 1848), 1);
    add_background_object(create_tbbluewall1_2766(10496, 1688), 1);
    add_background_object(create_tbbluewall1_2766(9216, 2168), 1);
    add_background_object(create_tbbluewall1_2766(9216, 2008), 1);
    add_background_object(create_tbbluewall1_2766(9216, 1848), 1);
    add_background_object(create_tbbluewall1_2766(9216, 1688), 1);
    add_background_object(create_tbbluewall1_2766(9344, 2168), 1);
    add_background_object(create_tbbluewall1_2766(9344, 2008), 1);
    add_background_object(create_tbbluewall1_2766(9344, 1848), 1);
    add_background_object(create_tbbluewall1_2766(9344, 1688), 1);
    add_background_object(create_tbbluewall1_2766(9472, 2168), 1);
    add_background_object(create_tbbluewall1_2766(9472, 2008), 1);
    add_background_object(create_tbbluewall1_2766(9472, 1848), 1);
    add_background_object(create_tbbluewall1_2766(9472, 1688), 1);
    add_background_object(create_tbbluewall1_2766(10624, 2168), 1);
    add_background_object(create_tbbluewall1_2766(10624, 2008), 1);
    add_background_object(create_tbbluewall1_2766(10624, 1848), 1);
    add_background_object(create_tbbluewall1_2766(10624, 1688), 1);
    add_background_object(create_tbbluewall1_2766(10752, 2168), 1);
    add_background_object(create_tbbluewall1_2766(10752, 2008), 1);
    add_background_object(create_tbbluewall1_2766(10752, 1848), 1);
    add_background_object(create_tbbluewall1_2766(10752, 1688), 1);
    add_background_object(create_tbbluewall1_2766(10880, 2168), 1);
    add_background_object(create_tbbluewall1_2766(10880, 2008), 1);
    add_background_object(create_tbbluewall1_2766(10880, 1848), 1);
    add_background_object(create_tbbluewall1_2766(10880, 1688), 1);
    add_background_object(create_tbbluewall1_2766(11008, 2168), 1);
    add_background_object(create_tbbluewall1_2766(11008, 2008), 1);
    add_background_object(create_tbbluewall1_2766(11008, 1848), 1);
    add_background_object(create_tbbluewall1_2766(11008, 1688), 1);
    add_background_object(create_tbbluewall1_2766(11136, 2168), 1);
    add_background_object(create_tbbluewall1_2766(11136, 2008), 1);
    add_background_object(create_tbbluewall1_2766(11136, 1848), 1);
    add_background_object(create_tbbluewall1_2766(11136, 1688), 1);
    add_background_object(create_tbbluewall1_2766(11264, 2168), 1);
    add_background_object(create_tbbluewall1_2766(11264, 2008), 1);
    add_background_object(create_tbbluewall1_2766(11264, 1848), 1);
    add_background_object(create_tbbluewall1_2766(11264, 1688), 1);
    add_background_object(create_tbbluewall1_2766(9600, 1528), 1);
    add_background_object(create_tbbluewall1_2766(9728, 1528), 1);
    add_background_object(create_tbbluewall1_2766(9856, 1528), 1);
    add_background_object(create_tbbluewall1_2766(9984, 1528), 1);
    add_background_object(create_tbbluewall1_2766(10112, 1528), 1);
    add_background_object(create_tbbluewall1_2766(10240, 1528), 1);
    add_background_object(create_tbbluewall1_2766(10368, 1528), 1);
    add_background_object(create_tbbluewall1_2766(10496, 1528), 1);
    add_background_object(create_tbbluewall1_2766(9216, 1528), 1);
    add_background_object(create_tbbluewall1_2766(9344, 1528), 1);
    add_background_object(create_tbbluewall1_2766(9472, 1528), 1);
    add_background_object(create_tbbluewall1_2766(10624, 1528), 1);
    add_background_object(create_tbbluewall1_2766(10752, 1528), 1);
    add_background_object(create_tbbluewall1_2766(10880, 1528), 1);
    add_background_object(create_tbbluewall1_2766(11008, 1528), 1);
    add_background_object(create_tbbluewall1_2766(11136, 1528), 1);
    add_background_object(create_tbbluewall1_2766(11264, 1528), 1);
    add_background_object(create_tbbluewall1_2766(9088, 2168), 1);
    add_background_object(create_tbbluewall1_2766(9088, 2008), 1);
    add_background_object(create_tbbluewall1_2766(9088, 1848), 1);
    add_background_object(create_tbbluewall1_2766(9088, 1688), 1);
    add_background_object(create_tbbluewall1_2766(9088, 1528), 1);
    add_background_object(create_tbbluewall1_2766(8960, 2168), 1);
    add_background_object(create_tbbluewall1_2766(8960, 2008), 1);
    add_background_object(create_tbbluewall1_2766(8960, 1848), 1);
    add_background_object(create_tbbluewall1_2766(8960, 1688), 1);
    add_background_object(create_tbbluewall1_2766(8960, 1528), 1);
    add_background_object(create_tbbluewall1_2766(8832, 2168), 1);
    add_background_object(create_tbbluewall1_2766(8832, 2008), 1);
    add_background_object(create_tbbluewall1_2766(8832, 1848), 1);
    add_background_object(create_tbbluewall1_2766(8832, 1688), 1);
    add_background_object(create_tbbluewall1_2766(8832, 1528), 1);
    add_background_object(create_tbbluewall1_2766(8704, 2168), 1);
    add_background_object(create_tbbluewall1_2766(8704, 2008), 1);
    add_background_object(create_tbbluewall1_2766(8704, 1848), 1);
    add_background_object(create_tbbluewall1_2766(8704, 1688), 1);
    add_background_object(create_tbbluewall1_2766(8704, 1528), 1);
    add_background_object(create_tbbluewall1_2766(8576, 2168), 1);
    add_background_object(create_tbbluewall1_2766(8576, 2008), 1);
    add_background_object(create_tbbluewall1_2766(8576, 1848), 1);
    add_background_object(create_tbbluewall1_2766(8576, 1688), 1);
    add_background_object(create_tbbluewall1_2766(8576, 1528), 1);
    add_object(create_bubblepatch_806(-544, 319), 1);
    add_background_object(create_tbbluewall1_2766(7744, 2760), 2);
    add_background_object(create_tbbluewall1_2766(7680, 2760), 2);
    add_background_object(create_tbhugetube2_2764(2624, 3048), 2);
    add_background_object(create_tbtunneltop2_2770(512, 2216), 2);
    add_background_object(create_tbtunneltop2_2770(576, 2216), 2);
    add_background_object(create_tbtunneltop2_2770(640, 2216), 2);
    add_background_object(create_tbtunneltop2_2770(704, 2216), 2);
    add_background_object(create_tbtunneltop2_2770(832, 2408), 2);
    add_background_object(create_tbtunneltop2_2770(896, 2408), 2);
    add_background_object(create_tbtunneltop2_2770(768, 2216), 2);
    add_background_object(create_tbtunneltop2_2770(4032, 2664), 2);
    add_background_object(create_tbtunneltop2_2770(4032, 2856), 2);
    add_background_object(create_tbbluewall1_2766(1024, 2440), 2);
    add_background_object(create_watervent_725(-440, 1976), 2);
    add_background_object(create_tbhugetube2_2764(856, 2216), 2);
    add_background_object(create_tbhugetube2_2764(856, 2024), 2);
    add_background_object(create_tbhugetube2_2764(856, 1832), 2);
    add_background_object(create_tbhugetube2_2764(856, 1640), 2);
    add_background_object(create_tbhugetube2_2764(856, 1448), 2);
    add_background_object(create_tbhugetube2_2764(1176, 2024), 2);
    add_background_object(create_tbhugetube2_2764(1176, 1832), 2);
    add_background_object(create_tbhugetube2_2764(1176, 1640), 2);
    add_background_object(create_tbhugetube2_2764(1176, 1448), 2);
    add_background_object(create_tbwaterlightback4_2833(3272, 2728), 2);
    add_background_object(create_tbpressertunnel_2834(5952, 2728), 2);
    add_background_object(create_tbpressertunnel_2834(5952, 2600), 2);
    add_background_object(create_tbpressertunnel_2834(6272, 2728), 2);
    add_background_object(create_tbpressertunnel_2834(6272, 2600), 2);
    add_background_object(create_tbpressertunnel_2834(4096, 2792), 2);
    add_background_object(create_tbpressertunnel_2834(4096, 2664), 2);
    add_background_object(create_tbpressertunnel_2834(3008, 2728), 2);
    add_background_object(create_tbpressertunnel_2834(3008, 2600), 2);
    add_background_object(create_tbpressertunnel_2834(6592, 2728), 2);
    add_background_object(create_tbpressertunnel_2834(6592, 2600), 2);
    add_background_object(create_tbhugetube2_2764(5384, 2664), 2);
    add_background_object(create_tbhugetube2_2764(5608, 2664), 2);
    add_background_object(create_tbtunneltop2_2770(5376, 2856), 2);
    add_background_object(create_tbtunneltop2_2770(5440, 2856), 2);
    add_background_object(create_tbtunneltop2_2770(5504, 2856), 2);
    add_background_object(create_tbtunneltop2_2770(5568, 2856), 2);
    add_background_object(create_tbtunneltop2_2770(5632, 2856), 2);
    add_background_object(create_tbtunneltop2_2770(5696, 2856), 2);
    add_background_object(create_tbtunneltop2_2770(5760, 2856), 2);
    add_background_object(create_tbhugetube2_2764(4400, 2408), 2);
    add_background_object(create_tbhugetube2_2764(3448, 3176), 2);
    add_background_object(create_tbhugetube1_2769(3392, 3176), 2);
    add_background_object(create_tbwaterlightback4_2833(7752, 2760), 2);
    add_background_object(create_tbhugetube2_2764(7288, 2728), 2);
    add_background_object(create_tbhugetube2_2764(7288, 2536), 2);
    add_background_object(create_tbhugetube2_2764(8568, 3048), 2);
    add_background_object(create_tbhugetube2_2764(8568, 2856), 2);
    add_background_object(create_tbhugetube2_2764(8568, 2664), 2);
    add_background_object(create_tbhugetube2_2764(8120, 3048), 2);
    add_background_object(create_tbhugetube2_2764(8120, 2856), 2);
    add_background_object(create_tbhugetube2_2764(8120, 2664), 2);
    add_background_object(create_tbpressertunnel_2834(10624, 2664), 2);
    add_background_object(create_tbpressertunnel_2834(10624, 2536), 2);
    add_background_object(create_tbpressertunnel_2834(10624, 2408), 2);
    add_background_object(create_tbpressertunnel_2834(11072, 2600), 2);
    add_background_object(create_tbpressertunnel_2834(11072, 2472), 2);
    add_background_object(create_tbpressertunnel_2834(11456, 2600), 2);
    add_background_object(create_tbpressertunnel_2834(11456, 2472), 2);
    add_background_object(create_tbbluewall1_2766(10176, 2216), 2);
    add_background_object(create_tbbluewall1_2766(10048, 2216), 2);
    add_background_object(create_tbbluewall1_2766(10304, 2216), 2);
    add_background_object(create_tbbluewall1_2766(10432, 2216), 2);
    add_background_object(create_tbhugetube2_2764(9584, 2728), 2);
    add_background_object(create_tbhugetube2_2764(9584, 2920), 2);
    add_background_object(create_tbhugetube2_2764(9584, 3112), 2);
    add_background_object(create_tbhugetube2_2764(9584, 3304), 2);
    add_background_object(create_tbbluewall1_2766(11648, 2568), 2);
    add_background_object(create_tbbluewall1_2766(11648, 2408), 2);
    add_background_object(create_tbhugetube2_2764(14192, 2024), 2);
    add_background_object(create_tbhugetube2_2764(14192, 1832), 2);
    add_background_object(create_tbhugetube2_2764(13816, 2248), 2);
    add_background_object(create_tbhugetube2_2764(12920, 2600), 2);
    add_background_object(create_tbhugetube2_2764(12920, 2216), 2);
    add_background_object(create_tbsolidblack_2688(14848, 1784), 2);
    add_background_object(create_tbsolidblack_2688(14848, 1144), 2);
    add_background_object(create_tbhugetube2_2764(12920, 2408), 2);
    add_background_object(create_tbhugetube2_2764(13816, 2056), 2);
    add_background_object(create_tbhugetube2_2764(13816, 2440), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(16064, -51), 2);
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
    add_object(create_metaldoorback_2604(24, 2040), 2);
    add_object(create_lockeddoorback_2605(10520, 2680), 2);
    add_object(create_lockeddoorterminal_2606(10464, 2728), 2);
    add_object(create_tbwalllightanim_2603(-384, 1864), 2);
    add_object(create_gimmickgiantpressertube_2835(6048, 2823), 2);
    add_object(create_gimmickgiantpressertube_2835(6048, 2695), 2);
    add_object(create_gimmickgiantpressertube_2835(6048, 2567), 2);
    add_object(create_gimmickgiantpressertube_2835(6368, 2823), 2);
    add_object(create_gimmickgiantpressertube_2835(6368, 2695), 2);
    add_object(create_gimmickgiantpressertube_2835(6368, 2567), 2);
    add_object(create_gimmckgiantpresser_2836(6048, 2855), 2);
    add_object(create_gimmckgiantpresser_2836(6368, 2855), 2);
    add_object(create_metaldoorback_2604(1176, 2552), 2);
    add_object(create_gimmickwaterlever1_2837(3296, 2800), 2);
    add_object(create_gimmickwaterlever2_2838(7776, 2832), 2);
    add_object(create_gimmickgiantpressertube_2835(3104, 2823), 2);
    add_object(create_gimmickgiantpressertube_2835(3104, 2695), 2);
    add_object(create_gimmickgiantpressertube_2835(3104, 2567), 2);
    add_object(create_gimmckgiantpresser_2836(3104, 2855), 2);
    add_object(create_gimmickgiantpressertube_2835(4192, 2887), 2);
    add_object(create_gimmickgiantpressertube_2835(4192, 2759), 2);
    add_object(create_gimmickgiantpressertube_2835(4192, 2631), 2);
    add_object(create_gimmckgiantpresser_2836(4192, 2919), 2);
    add_object(create_gimmickgiantpressertube_2835(6688, 2823), 2);
    add_object(create_gimmickgiantpressertube_2835(6688, 2695), 2);
    add_object(create_gimmickgiantpressertube_2835(6688, 2567), 2);
    add_object(create_gimmckgiantpresser_2836(6688, 2855), 2);
    add_object(create_gimmickgiantpressertube_2835(10720, 2695), 2);
    add_object(create_gimmickgiantpressertube_2835(10720, 2567), 2);
    add_object(create_gimmickgiantpressertube_2835(10720, 2439), 2);
    add_object(create_gimmckgiantpresser_2836(10720, 2727), 2);
    add_object(create_gimmickgiantpressertube_2835(11168, 2631), 2);
    add_object(create_gimmickgiantpressertube_2835(11168, 2503), 2);
    add_object(create_gimmickgiantpressertube_2835(11168, 2375), 2);
    add_object(create_gimmckgiantpresser_2836(11168, 2663), 2);
    add_object(create_gimmickgiantpressertube_2835(11552, 2695), 2);
    add_object(create_gimmickgiantpressertube_2835(11552, 2567), 2);
    add_object(create_gimmickgiantpressertube_2835(11552, 2439), 2);
    add_object(create_gimmckgiantpresser_2836(11552, 2727), 2);
    add_object(create_levelpistonplatformmask_2685(12224, 2664), 2);
    add_object(create_levelpistonplatformmask_2685(12352, 2664), 2);
    add_object(create_levelpistonplatformmask_2685(12480, 2664), 2);
    add_object(create_metaldoorback_2604(11736, 2104), 2);
    add_object(create_metaldoorback_2604(11800, 2680), 2);
    add_object(create_lockeddoorback_2605(14552, 2040), 2);
    add_object(create_lockeddoorterminal_2606(14496, 2088), 2);
    add_object(create_underwaterbgturbine_2839(9280, 3495), 2);
    add_object(create_underwaterbgturbine_2839(9280, 3495), 2);
    add_object(create_underwaterbgturbine_2839(9280, 3495), 2);
    add_object(create_underwaterbgturbine_2839(9280, 3495), 2);
    add_object(create_underwaterbgturbine_2839(9280, 3495), 2);
    add_object(create_underwaterbgturbine_2839(13888, 3143), 2);
    add_object(create_underwaterbgturbine_2839(13888, 3143), 2);
    add_object(create_underwaterbgturbine_2839(13888, 3143), 2);
    add_object(create_underwaterbgturbine_2839(13888, 3143), 2);
    add_object(create_underwaterbgturbine_2839(13888, 3143), 2);
    add_object(create_underwaterbgturbine_2839(2336, 3559), 2);
    add_object(create_underwaterbgturbine_2839(2336, 3559), 2);
    add_object(create_underwaterbgturbine_2839(2336, 3559), 2);
    add_object(create_underwaterbgturbine_2839(2336, 3559), 2);
    add_object(create_underwaterbgturbine_2839(2336, 3559), 2);
    add_object(create_underwaterbgturbine_2839(3328, 3687), 2);
    add_object(create_underwaterbgturbine_2839(3328, 3687), 2);
    add_object(create_underwaterbgturbine_2839(3328, 3687), 2);
    add_object(create_underwaterbgturbine_2839(3328, 3687), 2);
    add_object(create_underwaterbgturbine_2839(3328, 3687), 2);
    add_object(create_underwaterbgturbine_2839(4256, 3495), 2);
    add_object(create_underwaterbgturbine_2839(4256, 3495), 2);
    add_object(create_underwaterbgturbine_2839(4256, 3495), 2);
    add_object(create_underwaterbgturbine_2839(4256, 3495), 2);
    add_object(create_underwaterbgturbine_2839(4256, 3495), 2);
    add_object(create_underwaterbgturbine_2839(13888, 3015), 2);
    add_object(create_underwaterbgturbine_2839(13888, 3015), 2);
    add_object(create_underwaterbgturbine_2839(13888, 3015), 2);
    add_object(create_underwaterbgturbine_2839(13888, 3015), 2);
    add_object(create_underwaterbgturbine_2839(13888, 3015), 2);
    add_object(create_metaldoorback_2604(14552, 2296), 2);
    add_object(create_metaldoorback_2604(14872, 2296), 2);
    add_object(create_metaldoorback_2604(15384, 376), 2);
    add_object(create_metaldoorback_2604(16024, 376), 2);
    add_object(create_underwaterbgturbine_2839(8384, 3239), 2);
    add_object(create_underwaterbgturbine_2839(8384, 3239), 2);
    add_object(create_underwaterbgturbine_2839(8384, 3239), 2);
    add_object(create_underwaterbgturbine_2839(8384, 3239), 2);
    add_object(create_underwaterbgturbine_2839(8384, 3239), 2);
    add_object(create_underwaterbgturbine_2839(8384, 3111), 2);
    add_object(create_underwaterbgturbine_2839(8384, 3111), 2);
    add_object(create_underwaterbgturbine_2839(8384, 3111), 2);
    add_object(create_underwaterbgturbine_2839(8384, 3111), 2);
    add_object(create_underwaterbgturbine_2839(8384, 3111), 2);
    add_object(create_underwaterbgturbine_2839(8384, 2983), 2);
    add_object(create_underwaterbgturbine_2839(8384, 2983), 2);
    add_object(create_underwaterbgturbine_2839(8384, 2983), 2);
    add_object(create_underwaterbgturbine_2839(8384, 2983), 2);
    add_object(create_underwaterbgturbine_2839(8384, 2983), 2);
    add_object(create_underwaterbgturbine_2839(8384, 2855), 2);
    add_object(create_underwaterbgturbine_2839(8384, 2855), 2);
    add_object(create_underwaterbgturbine_2839(8384, 2855), 2);
    add_object(create_underwaterbgturbine_2839(8384, 2855), 2);
    add_object(create_underwaterbgturbine_2839(8384, 2855), 2);
    add_object(create_tubebubblespawner_2765(2664, 3231), 2);
    add_object(create_tubebubblespawner_2765(896, 2399), 2);
    add_object(create_tubebubblespawner_2765(896, 2207), 2);
    add_object(create_tubebubblespawner_2765(896, 2015), 2);
    add_object(create_tubebubblespawner_2765(896, 1823), 2);
    add_object(create_tubebubblespawner_2765(896, 1631), 2);
    add_object(create_tubebubblespawner_2765(1216, 2207), 2);
    add_object(create_tubebubblespawner_2765(1216, 2015), 2);
    add_object(create_tubebubblespawner_2765(1216, 1823), 2);
    add_object(create_tubebubblespawner_2765(1216, 1631), 2);
    add_object(create_tubebubblespawner_2765(4440, 2591), 2);
    add_object(create_tubebubblespawner_2765(5424, 2847), 2);
    add_object(create_tubebubblespawner_2765(5648, 2847), 2);
    add_object(create_tubebubblespawner_2765(7328, 2911), 2);
    add_object(create_tubebubblespawner_2765(7328, 2719), 2);
    add_object(create_tubebubblespawner_2765(8160, 3231), 2);
    add_object(create_tubebubblespawner_2765(8160, 3039), 2);
    add_object(create_tubebubblespawner_2765(8160, 2847), 2);
    add_object(create_tubebubblespawner_2765(8608, 3231), 2);
    add_object(create_tubebubblespawner_2765(8608, 3039), 2);
    add_object(create_tubebubblespawner_2765(8608, 2847), 2);
    add_object(create_tubebubblespawner_2765(9624, 3295), 2);
    add_object(create_tubebubblespawner_2765(9624, 3103), 2);
    add_object(create_tubebubblespawner_2765(9624, 2911), 2);
    add_object(create_tubebubblespawner_2765(9624, 3487), 2);
    add_object(create_tubebubblespawner_2765(12960, 2783), 2);
    add_object(create_tubebubblespawner_2765(12960, 2591), 2);
    add_object(create_tubebubblespawner_2765(12960, 2399), 2);
    add_object(create_tubebubblespawner_2765(13856, 2431), 2);
    add_object(create_tubebubblespawner_2765(14232, 2207), 2);
    add_object(create_tubebubblespawner_2765(14232, 2015), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_tbsolidblack_2688(8576, 3432), 3);
    add_background_object(create_tbtunneltop2_2770(15808, 368), 3);
    add_background_object(create_tbtunneltop2_2770(15552, 368), 3);
    add_background_object(create_tbtunneltop2_2770(15680, 368), 3);
    add_background_object(create_tbhugetube1_2769(13760, 2440), 3);
    add_background_object(create_tbhugetube1_2769(13760, 2056), 3);
    add_background_object(create_tbhugetube1_2769(14136, 2024), 3);
    add_background_object(create_tbhugetube1_2769(14136, 1832), 3);
    add_background_object(create_tbhugetube1_2769(9528, 2728), 3);
    add_background_object(create_tbhugetube1_2769(9528, 2920), 3);
    add_background_object(create_tbhugetube1_2769(9528, 3112), 3);
    add_background_object(create_tbhugetube1_2769(9528, 3304), 3);
    add_background_object(create_tbhugetube1_2769(4344, 2408), 3);
    add_background_object(create_tbhugetube1_2769(2568, 3048), 3);
    add_background_object(create_tbhugetube1_2769(2568, 2856), 3);
    add_background_object(create_tbbluewall14_2794(9472, 3320), 3);
    add_background_object(create_tbbluewall14_2794(9536, 3320), 3);
    add_background_object(create_tbsolidblack_2688(12928, 2024), 3);
    add_background_object(create_tbsolidblack_2688(7680, 2920), 3);
    add_background_object(create_tbsolidblack_2688(7680, 3048), 3);
    add_background_object(create_tbsolidblack_2688(7680, 3176), 3);
    add_background_object(create_tbsolidblack_2688(7808, 2920), 3);
    add_background_object(create_tbsolidblack_2688(7808, 3048), 3);
    add_background_object(create_tbsolidblack_2688(7808, 3176), 3);
    add_background_object(create_tbwall8_2610(16000, 264), 3);
    add_background_object(create_tbsolidblack_2688(15296, 720), 3);
    add_background_object(create_tbsolidblack_2688(15296, 1688), 3);
    add_background_object(create_tbtunneltop1_2577(14976, 168), 3);
    add_background_object(create_tbtunneltop1_2577(15168, 168), 3);
    add_background_object(create_tbconcrete_2840(14912, 1112), 3);
    add_background_object(create_tbconcrete_2840(15296, 696), 3);
    add_background_object(create_tbconcrete_2840(14912, 1256), 3);
    add_background_object(create_tbconcrete_2840(15296, 840), 3);
    add_background_object(create_tbconcrete_2840(14912, 1896), 3);
    add_background_object(create_tbconcrete_2840(15296, 1800), 3);
    add_background_object(create_tbconcrete_2840(14912, 1752), 3);
    add_background_object(create_tbconcrete_2840(15296, 1656), 3);
    add_background_object(create_tbbluepiping1_2767(14880, 1608), 3);
    add_background_object(create_tbbluepiping1_2767(14880, 1928), 3);
    add_background_object(create_tbbluepiping1_2767(14880, 2472), 3);
    add_background_object(create_tbbluepiping1_2767(14880, 2632), 3);
    add_background_object(create_tbbluewall1_2766(14720, 2184), 3);
    add_background_object(create_tbbluewall1_2766(14592, 2184), 3);
    add_background_object(create_tbwallshadow_2598(14592, 2248), 3);
    add_background_object(create_tbwallshadow_2598(14592, 2152), 3);
    add_background_object(create_tbwall8_2610(14528, 2184), 3);
    add_background_object(create_tbwall8_2610(14848, 2184), 3);
    add_background_object(create_tbbluetube4_2800(14240, 2536), 3);
    add_background_object(create_tbbluetube4_2800(14240, 2600), 3);
    add_background_object(create_tbbluetube4_2800(14240, 2664), 3);
    add_background_object(create_tbbluetube4_2800(14240, 2728), 3);
    add_background_object(create_tbbluetube4_2800(14240, 2472), 3);
    add_background_object(create_tbbluewall1_2766(11584, 2184), 3);
    add_background_object(create_tbbluewall1_2766(11584, 2024), 3);
    add_background_object(create_tbbluewall1_2766(14592, 1928), 3);
    add_background_object(create_tbwallshadow_2598(14592, 1896), 3);
    add_background_object(create_tbsolidblack_2688(14528, 2344), 3);
    add_background_object(create_tbsolidblack_2688(14656, 2344), 3);
    add_background_object(create_tbbluepiping2_2768(14464, 2536), 3);
    add_background_object(create_tbsolidblack_2688(13632, 2088), 3);
    add_background_object(create_tbsolidblack_2688(13376, 2088), 3);
    add_background_object(create_tbsolidblack_2688(14080, 2664), 3);
    add_background_object(create_tbsolidblack_2688(14400, 3112), 3);
    add_background_object(create_tbwall8_2610(11776, 2568), 3);
    add_background_object(create_tbwall8_2610(11712, 1992), 3);
    add_background_object(create_tbsolidblack_2688(12672, 2856), 3);
    add_background_object(create_tbsolidblack_2688(10240, 2792), 3);
    add_background_object(create_tbbluepiping2_2768(10176, 3080), 3);
    add_background_object(create_tbbluepiping2_2768(10176, 2920), 3);
    add_background_object(create_tbbluewall1_2766(11072, 2184), 3);
    add_background_object(create_tbbluewall1_2766(11200, 2184), 3);
    add_background_object(create_tbbluewall1_2766(11328, 2184), 3);
    add_background_object(create_tbbluewall1_2766(11328, 2024), 3);
    add_background_object(create_tbbluewall1_2766(11456, 2184), 3);
    add_background_object(create_tbbluewall1_2766(11456, 2024), 3);
    add_background_object(create_tbbluetube4_2800(10328, 2408), 3);
    add_background_object(create_tbbluetube4_2800(10328, 2344), 3);
    add_background_object(create_tbbluetube2_2798(5376, 2888), 3);
    add_background_object(create_tbbluetube2_2798(5568, 2888), 3);
    add_background_object(create_tbbluetube2_2798(5760, 2888), 3);
    add_background_object(create_tbpressertunnel_2834(11072, 2664), 3);
    add_background_object(create_tbpressertunnel_2834(10624, 2728), 3);
    add_background_object(create_tbsolidblack_2688(9600, 2408), 3);
    add_background_object(create_tbsolidblack_2688(10880, 2728), 3);
    add_background_object(create_tbsolidblack_2688(10368, 2792), 3);
    add_background_object(create_tbinvertedloop3_2779(10048, 3432), 3);
    add_background_object(create_tbsolidblack_2688(7424, 2408), 3);
    add_background_object(create_tbtunneltop2_2770(7808, 2696), 3);
    add_background_object(create_tbtunneltop2_2770(7680, 2696), 3);
    add_background_object(create_tbtunneltop2_2770(7744, 2696), 3);
    add_background_object(create_tbtunneltop2_2770(960, 1512), 3);
    add_background_object(create_tbtunneltop2_2770(1024, 1512), 3);
    add_background_object(create_tbtunneltop2_2770(1088, 1512), 3);
    add_background_object(create_tbtunneltop2_2770(960, 1448), 3);
    add_background_object(create_tbtunneltop2_2770(1024, 1448), 3);
    add_background_object(create_tbtunneltop2_2770(1088, 1448), 3);
    add_background_object(create_tbtunneltop2_2770(-240, 1376), 3);
    add_background_object(create_tbtunneltop2_2770(3264, 2664), 3);
    add_background_object(create_tbtunneltop2_2770(3008, 2920), 3);
    add_background_object(create_tbtunneltop2_2770(3072, 2920), 3);
    add_background_object(create_tbtunneltop2_2770(3136, 2920), 3);
    add_background_object(create_tbtunneltop2_2770(3008, 2984), 3);
    add_background_object(create_tbtunneltop2_2770(3072, 2984), 3);
    add_background_object(create_tbtunneltop2_2770(3136, 2984), 3);
    add_background_object(create_tbtunneltop2_2770(3008, 3048), 3);
    add_background_object(create_tbtunneltop2_2770(3072, 3048), 3);
    add_background_object(create_tbtunneltop2_2770(3136, 3048), 3);
    add_background_object(create_tbtunneltop2_2770(3008, 3112), 3);
    add_background_object(create_tbtunneltop2_2770(3072, 3112), 3);
    add_background_object(create_tbtunneltop2_2770(3136, 3112), 3);
    add_background_object(create_tbtunneltop2_2770(3008, 3176), 3);
    add_background_object(create_tbtunneltop2_2770(3072, 3176), 3);
    add_background_object(create_tbtunneltop2_2770(3136, 3176), 3);
    add_background_object(create_tbtunneltop2_2770(3200, 2920), 3);
    add_background_object(create_tbtunneltop2_2770(3200, 2984), 3);
    add_background_object(create_tbtunneltop2_2770(3200, 3048), 3);
    add_background_object(create_tbtunneltop2_2770(3200, 3112), 3);
    add_background_object(create_tbtunneltop2_2770(3200, 3176), 3);
    add_background_object(create_tbtunneltop2_2770(3200, 2856), 3);
    add_background_object(create_tbtunneltop2_2770(2752, 3112), 3);
    add_background_object(create_tbtunneltop2_2770(2816, 3112), 3);
    add_background_object(create_tbtunneltop2_2770(2880, 3112), 3);
    add_background_object(create_tbtunneltop2_2770(2752, 3176), 3);
    add_background_object(create_tbtunneltop2_2770(2816, 3176), 3);
    add_background_object(create_tbtunneltop2_2770(2880, 3176), 3);
    add_background_object(create_tbtunneltop2_2770(2944, 3112), 3);
    add_background_object(create_tbtunneltop2_2770(2944, 3176), 3);
    add_background_object(create_tbinvertedloop3_2779(5120, 2920), 3);
    add_background_object(create_tbsolidblack_2688(5120, 3048), 3);
    add_background_object(create_tbinvertedloop3_2779(3712, 3624), 3);
    add_background_object(create_tbinvertedloop2_2795(3968, 2600), 3);
    add_background_object(create_tbinvertedloop3_2779(3968, 2856), 3);
    add_background_object(create_tbsolidblack_2688(3328, 2536), 3);
    add_background_object(create_tbbluepiping1_2767(-376, 3040), 3);
    add_background_object(create_tbbluepiping3_2841(-376, 3008), 3);
    add_background_object(create_tbbluepiping5_2842(-376, 3200), 3);
    add_background_object(create_tbbluepiping2_2768(-472, 3040), 3);
    add_background_object(create_tbhugetube1_2769(800, 1448), 3);
    add_background_object(create_tbhugetube1_2769(1120, 1448), 3);
    add_background_object(create_tbhugetube1_2769(800, 1640), 3);
    add_background_object(create_tbhugetube1_2769(800, 1832), 3);
    add_background_object(create_tbhugetube1_2769(800, 2024), 3);
    add_background_object(create_tbhugetube1_2769(800, 2216), 3);
    add_background_object(create_tbhugetube1_2769(1120, 1640), 3);
    add_background_object(create_tbhugetube1_2769(1120, 1832), 3);
    add_background_object(create_tbhugetube1_2769(1120, 2024), 3);
    add_background_object(create_tbinvertedloop4_2780(384, 2536), 3);
    add_background_object(create_tblongrailing2_2689(920, 1424), 3);
    add_background_object(create_tblongrailing3_2690(1184, 1424), 3);
    add_background_object(create_tbinvertedloop1_2781(384, 2216), 3);
    add_background_object(create_tbbluetube3_2797(2048, 2600), 3);
    add_background_object(create_tbwall8_2610(1152, 2440), 3);
    add_background_object(create_tbsolidblack_2688(5760, 2984), 3);
    add_background_object(create_tbwall8_2610(0, 1928), 3);
    add_background_object(create_tbwall8_2610(10496, 2568), 3);
    add_background_object(create_tbwallshadow_2598(64, 1896), 3);
    add_background_object(create_tbwallshadow_2598(64, 1992), 3);
    add_background_object(create_tbbluewall2_2782(0, 2088), 3);
    add_background_object(create_tbbluewall2_2782(1024, 2600), 3);
    add_background_object(create_tbbluewall2_2782(1088, 2600), 3);
    add_background_object(create_tbbluewall2_2782(1152, 2600), 3);
    add_background_object(create_tbbluewall2_2782(1216, 2600), 3);
    add_background_object(create_tbbluewall2_2782(1280, 2600), 3);
    add_background_object(create_tbbluewall2_2782(1344, 2600), 3);
    add_background_object(create_tbbluewall6_2784(0, 1896), 3);
    add_background_object(create_tbbluewall6_2784(64, 1896), 3);
    add_background_object(create_tbbluewall6_2784(1024, 2408), 3);
    add_background_object(create_tbbluewall6_2784(1088, 2408), 3);
    add_background_object(create_tbbluewall3_2786(1408, 2600), 3);
    add_background_object(create_tbsolidblack_2688(0, 2152), 3);
    add_background_object(create_tbsolidblack_2688(1024, 2664), 3);
    add_background_object(create_tbsolidblack_2688(1152, 2664), 3);
    add_background_object(create_tbsolidblack_2688(1280, 2664), 3);
    add_background_object(create_tbbluewall5_2787(1152, 2408), 3);
    add_background_object(create_tbsolidblack_2688(0, 1768), 3);
    add_background_object(create_tbsolidblack_2688(1024, 2280), 3);
    add_background_object(create_tbbluewall4_2783(1152, 2344), 3);
    add_background_object(create_tbbluewall3_2786(1152, 2216), 3);
    add_background_object(create_tbsolidblack_2688(0, 1640), 3);
    add_background_object(create_tbsolidblack_2688(1024, 2152), 3);
    add_background_object(create_tbsolidblack_2688(1024, 2024), 3);
    add_background_object(create_tbsolidblack_2688(1024, 1896), 3);
    add_background_object(create_tbsolidblack_2688(1024, 1768), 3);
    add_background_object(create_tbsolidblack_2688(1344, 1832), 3);
    add_background_object(create_tbsolidblack_2688(1344, 1704), 3);
    add_background_object(create_tbsolidblack_2688(1472, 1832), 3);
    add_background_object(create_tbsolidblack_2688(1472, 1704), 3);
    add_background_object(create_tbbluewall4_2783(1152, 2280), 3);
    add_background_object(create_tbbluewall4_2783(1088, 2152), 3);
    add_background_object(create_tbbluewall4_2783(1088, 2088), 3);
    add_background_object(create_tbbluewall4_2783(1088, 2024), 3);
    add_background_object(create_tbbluewall6_2784(1344, 1960), 3);
    add_background_object(create_tbbluewall6_2784(1408, 1960), 3);
    add_background_object(create_tbsolidblack_2688(1280, 2792), 3);
    add_background_object(create_tbsolidblack_2688(1152, 2792), 3);
    add_background_object(create_tbsolidblack_2688(1152, 2920), 3);
    add_background_object(create_tbsolidblack_2688(0, 2280), 3);
    add_background_object(create_tbsolidblack_2688(1024, 2792), 3);
    add_background_object(create_tbsolidblack_2688(0, 2408), 3);
    add_background_object(create_tbsolidblack_2688(1024, 2920), 3);
    add_background_object(create_tbbluewall2_2782(5504, 2920), 3);
    add_background_object(create_tbsolidblack_2688(5632, 2984), 3);
    add_background_object(create_tbbluewall2_2782(5696, 2920), 3);
    add_background_object(create_tbbluewall2_2782(5760, 2920), 3);
    add_background_object(create_tbbluewall13_2793(5824, 2920), 3);
    add_background_object(create_tbbluewall9_2789(5824, 2792), 3);
    add_background_object(create_tbbluewall3_2786(6208, 2792), 3);
    add_background_object(create_tbsolidblack_2688(5504, 2984), 3);
    add_background_object(create_tbbluewall2_2782(5568, 2920), 3);
    add_background_object(create_tbbluewall2_2782(5632, 2920), 3);
    add_background_object(create_tbsolidblack_2688(6144, 2984), 3);
    add_background_object(create_tbbluewall9_2789(6464, 2792), 3);
    add_background_object(create_tbbluewall3_2786(6528, 2792), 3);
    add_background_object(create_tbsolidblack_2688(6272, 2984), 3);
    add_background_object(create_tbsolidblack_2688(6400, 2984), 3);
    add_background_object(create_tbsolidblack_2688(6528, 2984), 3);
    add_background_object(create_tbinvertedloop2_2795(1792, 2600), 3);
    add_background_object(create_tbinvertedloop3_2779(1792, 2728), 3);
    add_background_object(create_tbinvertedloop4_2780(1664, 2728), 3);
    add_background_object(create_tbinvertedloop1_2781(1664, 2600), 3);
    add_background_object(create_tbbluetube1_2796(1536, 2600), 3);
    add_background_object(create_tbbluetube3_2797(2112, 2600), 3);
    add_background_object(create_tbbluetube1_2796(1472, 2600), 3);
    add_background_object(create_tbinvertedloop2_2795(2176, 2408), 3);
    add_background_object(create_tbinvertedloop1_2781(2048, 2408), 3);
    add_background_object(create_tbbluetube1_2796(2176, 2600), 3);
    add_background_object(create_tbbluetube1_2796(2240, 2600), 3);
    add_background_object(create_tbinvertedloop2_2795(2304, 2600), 3);
    add_background_object(create_tbinvertedloop3_2779(2304, 2728), 3);
    add_background_object(create_tbbluewall14_2794(2240, 2792), 3);
    add_background_object(create_tbbluewall14_2794(2176, 2792), 3);
    add_background_object(create_tbbackeye_2799(-512, 1320), 3);
    add_background_object(create_tbbluepiping1_2767(-488, 1304), 3);
    add_background_object(create_tbbluepiping2_2768(-496, 1304), 3);
    add_background_object(create_tbbluetube1_2796(-472, 1328), 3);
    add_background_object(create_tbbluetube2_2798(-464, 1344), 3);
    add_background_object(create_tbbluetube3_2797(-480, 1328), 3);
    add_background_object(create_tbbluetube4_2800(-472, 1344), 3);
    add_background_object(create_tbbluewall1_2766(-512, 1304), 3);
    add_background_object(create_tbbluewall10_2790(-496, 1320), 3);
    add_background_object(create_tbbluewall11_2791(-488, 1328), 3);
    add_background_object(create_tbbluewall12_2792(-464, 1336), 3);
    add_background_object(create_tbbluewall13_2793(-480, 1360), 3);
    add_background_object(create_tbbluewall14_2794(-464, 1360), 3);
    add_background_object(create_tbbluewall2_2782(-488, 1352), 3);
    add_background_object(create_tbbluewall3_2786(-472, 1352), 3);
    add_background_object(create_tbbluewall4_2783(-488, 1368), 3);
    add_background_object(create_tbbluewall5_2787(-472, 1336), 3);
    add_background_object(create_tbbluewall6_2784(-472, 1360), 3);
    add_background_object(create_tbbluewall7_2788(-480, 1376), 3);
    add_background_object(create_tbbluewall8_2785(-472, 1344), 3);
    add_background_object(create_tbbluewall9_2789(-496, 1344), 3);
    add_background_object(create_tbinvertedloop1_2781(-384, 1304), 3);
    add_background_object(create_tbinvertedloop2_2795(-384, 1304), 3);
    add_background_object(create_tbinvertedloop3_2779(-384, 1304), 3);
    add_background_object(create_tbinvertedloop4_2780(-384, 1304), 3);
    add_background_object(create_tbladder_2636(-432, 1320), 3);
    add_background_object(create_tblongrailing_2707(-480, 1400), 3);
    add_background_object(create_tblongrailing2_2689(-448, 1376), 3);
    add_background_object(create_tblongrailing3_2690(-448, 1376), 3);
    add_background_object(create_tbsolidblack_2688(-256, 1304), 3);
    add_background_object(create_tbtunnelbottom1_2576(-320, 1392), 3);
    add_background_object(create_tbtunneltop1_2577(-256, 1376), 3);
    add_background_object(create_tbtunnelwall_2578(-192, 1392), 3);
    add_background_object(create_tbwall24_2737(-496, 1392), 3);
    add_background_object(create_tbwall8_2610(-448, 1400), 3);
    add_background_object(create_tbwallshadow_2598(-408, 1360), 3);
    add_background_object(create_watervent_725(-448, 1392), 3);
    add_background_object(create_tbbluewall4_2783(1408, 2664), 3);
    add_background_object(create_tbbluewall4_2783(1408, 2728), 3);
    add_background_object(create_tbbluewall4_2783(1408, 2792), 3);
    add_background_object(create_tbbluewall4_2783(1280, 2920), 3);
    add_background_object(create_tbbluewall4_2783(1280, 2984), 3);
    add_background_object(create_tbsolidblack_2688(1280, 3048), 3);
    add_background_object(create_tbsolidblack_2688(1152, 3048), 3);
    add_background_object(create_tbsolidblack_2688(0, 2536), 3);
    add_background_object(create_tbsolidblack_2688(1024, 3048), 3);
    add_background_object(create_tbsolidblack_2688(1280, 3176), 3);
    add_background_object(create_tbsolidblack_2688(1152, 3176), 3);
    add_background_object(create_tbsolidblack_2688(0, 2664), 3);
    add_background_object(create_tbsolidblack_2688(1024, 3176), 3);
    add_background_object(create_tbsolidblack_2688(1664, 3176), 3);
    add_background_object(create_tbsolidblack_2688(1408, 3176), 3);
    add_background_object(create_tbsolidblack_2688(1536, 3176), 3);
    add_background_object(create_tbbluewall10_2790(1408, 3112), 3);
    add_background_object(create_tbbluewall2_2782(1472, 3112), 3);
    add_background_object(create_tbbluewall2_2782(1536, 3112), 3);
    add_background_object(create_tbbluewall2_2782(1728, 3112), 3);
    add_background_object(create_tbbluewall2_2782(1792, 3112), 3);
    add_background_object(create_tbsolidblack_2688(2048, 3240), 3);
    add_background_object(create_tbsolidblack_2688(2176, 3240), 3);
    add_background_object(create_tbsolidblack_2688(2304, 3240), 3);
    add_background_object(create_tbtunnelbottom2_2771(-256, 1424), 3);
    add_background_object(create_tbbluetube3_2797(1984, 2600), 3);
    add_background_object(create_tbbluewall11_2791(1280, 2856), 3);
    add_background_object(create_tbbluewall10_2790(1280, 3048), 3);
    add_background_object(create_tbbluewall2_2782(1344, 3048), 3);
    add_background_object(create_tbbluewall6_2784(1344, 2856), 3);
    add_background_object(create_tbbluewall5_2787(1408, 2856), 3);
    add_background_object(create_tbbluewall3_2786(1408, 3048), 3);
    add_background_object(create_tbbluewall6_2784(128, 1896), 3);
    add_background_object(create_tbbluewall6_2784(192, 1896), 3);
    add_background_object(create_tbsolidblack_2688(128, 1768), 3);
    add_background_object(create_tbsolidblack_2688(128, 1640), 3);
    add_background_object(create_tbbluewall6_2784(256, 1896), 3);
    add_background_object(create_tbbluewall6_2784(320, 1896), 3);
    add_background_object(create_tbsolidblack_2688(256, 1768), 3);
    add_background_object(create_tbsolidblack_2688(256, 1640), 3);
    add_background_object(create_tbsolidblack_2688(1024, 1640), 3);
    add_background_object(create_tbbluewall8_2785(960, 1960), 3);
    add_background_object(create_tbbluewall8_2785(960, 2024), 3);
    add_background_object(create_tbbluewall8_2785(1024, 2152), 3);
    add_background_object(create_tbbluewall8_2785(1024, 2216), 3);
    add_background_object(create_tbbluewall8_2785(1024, 2280), 3);
    add_background_object(create_tbbluewall7_2788(960, 2408), 3);
    add_background_object(create_tbbluewall3_2786(64, 2088), 3);
    add_background_object(create_tbbluewall4_2783(64, 2152), 3);
    add_background_object(create_tbbluewall4_2783(384, 2344), 3);
    add_background_object(create_tbbluewall4_2783(384, 2408), 3);
    add_background_object(create_tbbluewall4_2783(384, 2472), 3);
    add_background_object(create_tbsolidblack_2688(128, 2280), 3);
    add_background_object(create_tbsolidblack_2688(256, 2280), 3);
    add_background_object(create_tbsolidblack_2688(896, 2664), 3);
    add_background_object(create_tbsolidblack_2688(0, 2792), 3);
    add_background_object(create_tbsolidblack_2688(128, 2408), 3);
    add_background_object(create_tbsolidblack_2688(256, 2408), 3);
    add_background_object(create_tbsolidblack_2688(896, 2792), 3);
    add_background_object(create_tbbluewall4_2783(384, 2536), 3);
    add_background_object(create_tbbluewall10_2790(384, 2600), 3);
    add_background_object(create_tbbluewall2_2782(896, 2600), 3);
    add_background_object(create_tbbluewall2_2782(960, 2600), 3);
    add_background_object(create_tbbluewall14_2794(128, 2088), 3);
    add_background_object(create_tbbluewall14_2794(192, 2088), 3);
    add_background_object(create_tbbluewall6_2784(384, 1896), 3);
    add_background_object(create_tbbluewall6_2784(448, 1896), 3);
    add_background_object(create_tbsolidblack_2688(384, 1768), 3);
    add_background_object(create_tbsolidblack_2688(384, 1640), 3);
    add_background_object(create_tbbluewall6_2784(512, 1896), 3);
    add_background_object(create_tbbluewall6_2784(576, 1896), 3);
    add_background_object(create_tbsolidblack_2688(512, 1768), 3);
    add_background_object(create_tbsolidblack_2688(512, 1640), 3);
    add_background_object(create_tbbluewall6_2784(640, 1896), 3);
    add_background_object(create_tbbluewall6_2784(704, 1896), 3);
    add_background_object(create_tbsolidblack_2688(640, 1768), 3);
    add_background_object(create_tbsolidblack_2688(640, 1640), 3);
    add_background_object(create_tbsolidblack_2688(384, 2664), 3);
    add_background_object(create_tbsolidblack_2688(512, 2664), 3);
    add_background_object(create_tbsolidblack_2688(384, 2792), 3);
    add_background_object(create_tbsolidblack_2688(512, 2792), 3);
    add_background_object(create_tbbluewall2_2782(512, 2600), 3);
    add_background_object(create_tbbluewall2_2782(576, 2600), 3);
    add_background_object(create_tbbluewall2_2782(448, 2600), 3);
    add_background_object(create_tbsolidblack_2688(640, 2664), 3);
    add_background_object(create_tbsolidblack_2688(768, 2664), 3);
    add_background_object(create_tbsolidblack_2688(640, 2792), 3);
    add_background_object(create_tbsolidblack_2688(768, 2792), 3);
    add_background_object(create_tbbluewall2_2782(768, 2600), 3);
    add_background_object(create_tbbluewall2_2782(832, 2600), 3);
    add_background_object(create_tbbluewall2_2782(640, 2600), 3);
    add_background_object(create_tbbluewall2_2782(704, 2600), 3);
    add_background_object(create_tbsolidblack_2688(128, 2536), 3);
    add_background_object(create_tbsolidblack_2688(128, 2664), 3);
    add_background_object(create_tbsolidblack_2688(128, 2792), 3);
    add_background_object(create_tbsolidblack_2688(256, 2536), 3);
    add_background_object(create_tbsolidblack_2688(256, 2664), 3);
    add_background_object(create_tbsolidblack_2688(256, 2792), 3);
    add_background_object(create_tbbluewall14_2794(448, 2216), 3);
    add_background_object(create_tbbluewall14_2794(512, 2216), 3);
    add_background_object(create_tbbluewall14_2794(576, 2216), 3);
    add_background_object(create_tbbluewall14_2794(640, 2216), 3);
    add_background_object(create_tbbluewall14_2794(832, 2408), 3);
    add_background_object(create_tbbluewall14_2794(896, 2408), 3);
    add_background_object(create_tbbluewall14_2794(704, 2408), 3);
    add_background_object(create_tbbluewall14_2794(768, 2408), 3);
    add_background_object(create_tbbluewall14_2794(704, 2216), 3);
    add_background_object(create_tbbluewall14_2794(768, 2216), 3);
    add_background_object(create_tbbluewall14_2794(576, 2408), 3);
    add_background_object(create_tbbluewall14_2794(640, 2408), 3);
    add_background_object(create_tbbluewall5_2787(768, 1896), 3);
    add_background_object(create_tbbluewall4_2783(768, 1832), 3);
    add_background_object(create_tbbluewall4_2783(768, 1768), 3);
    add_background_object(create_tbbluewall8_2785(960, 1704), 3);
    add_background_object(create_tbbluewall4_2783(704, 1640), 3);
    add_background_object(create_tbbluewall8_2785(960, 1640), 3);
    add_background_object(create_tbsolidblack_2688(640, 1512), 3);
    add_background_object(create_tbbluewall4_2783(768, 1512), 3);
    add_background_object(create_tbbluewall9_2789(960, 1576), 3);
    add_background_object(create_tbbluewall2_2782(1024, 1576), 3);
    add_background_object(create_tbsolidblack_2688(512, 1512), 3);
    add_background_object(create_tbsolidblack_2688(640, 1384), 3);
    add_background_object(create_tbsolidblack_2688(512, 1384), 3);
    add_background_object(create_tbsolidblack_2688(640, 1256), 3);
    add_background_object(create_tbsolidblack_2688(512, 1256), 3);
    add_background_object(create_tbsolidblack_2688(896, 1256), 3);
    add_background_object(create_tbsolidblack_2688(768, 1256), 3);
    add_background_object(create_tbsolidblack_2688(1152, 1256), 3);
    add_background_object(create_tbsolidblack_2688(1024, 1256), 3);
    add_background_object(create_tbsolidblack_2688(640, 1128), 3);
    add_background_object(create_tbsolidblack_2688(512, 1128), 3);
    add_background_object(create_tbsolidblack_2688(896, 1128), 3);
    add_background_object(create_tbsolidblack_2688(768, 1128), 3);
    add_background_object(create_tbsolidblack_2688(1152, 1128), 3);
    add_background_object(create_tbsolidblack_2688(1024, 1128), 3);
    add_background_object(create_tbbluewall11_2791(768, 1384), 3);
    add_background_object(create_tbbluewall4_2783(768, 1448), 3);
    add_background_object(create_tbbluewall6_2784(832, 1384), 3);
    add_background_object(create_tbbluewall6_2784(896, 1384), 3);
    add_background_object(create_tbbluewall6_2784(960, 1384), 3);
    add_background_object(create_tbbluewall6_2784(1024, 1384), 3);
    add_background_object(create_tbbluewall6_2784(1088, 1384), 3);
    add_background_object(create_tbbluewall6_2784(1152, 1384), 3);
    add_background_object(create_tbbluewall4_2783(1088, 1960), 3);
    add_background_object(create_tbbluewall4_2783(1088, 1704), 3);
    add_background_object(create_tbbluewall4_2783(1088, 1640), 3);
    add_background_object(create_tbbluewall8_2785(1280, 1768), 3);
    add_background_object(create_tbbluewall8_2785(1280, 1832), 3);
    add_background_object(create_tbbluewall8_2785(1280, 1896), 3);
    add_background_object(create_tbbluewall7_2788(1280, 1960), 3);
    add_background_object(create_tbsolidblack_2688(1344, 1576), 3);
    add_background_object(create_tbsolidblack_2688(1344, 1448), 3);
    add_background_object(create_tbbluewall8_2785(1280, 1512), 3);
    add_background_object(create_tbbluewall8_2785(1344, 1640), 3);
    add_background_object(create_tbbluewall8_2785(1280, 1448), 3);
    add_background_object(create_tbsolidblack_2688(1344, 1320), 3);
    add_background_object(create_tbsolidblack_2688(1280, 1256), 3);
    add_background_object(create_tbsolidblack_2688(1280, 1128), 3);
    add_background_object(create_tbsolidblack_2688(1472, 1576), 3);
    add_background_object(create_tbsolidblack_2688(1472, 1448), 3);
    add_background_object(create_tbsolidblack_2688(1472, 1320), 3);
    add_background_object(create_tbsolidblack_2688(1408, 1192), 3);
    add_background_object(create_tbbluewall6_2784(1216, 1384), 3);
    add_background_object(create_tbbluewall12_2792(1280, 1384), 3);
    add_background_object(create_tbbluewall3_2786(1088, 1576), 3);
    add_background_object(create_tblongrailing_2707(928, 1472), 3);
    add_background_object(create_tblongrailing_2707(992, 1472), 3);
    add_background_object(create_tblongrailing_2707(1120, 1472), 3);
    add_background_object(create_tblongrailing_2707(1056, 1472), 3);
    add_background_object(create_tbbluewall10_2790(1088, 2216), 3);
    add_background_object(create_tbbluewall14_2794(1216, 2216), 3);
    add_background_object(create_tbbluewall14_2794(1280, 2216), 3);
    add_background_object(create_tbbluewall7_2788(960, 2088), 3);
    add_background_object(create_tbbluewall9_2789(960, 2344), 3);
    add_background_object(create_tbbluewall13_2793(1024, 2344), 3);
    add_background_object(create_tbbluewall12_2792(1024, 2088), 3);
    add_background_object(create_tbinvertedloop2_2795(2496, 2472), 3);
    add_background_object(create_tbinvertedloop4_2780(2368, 2408), 3);
    add_background_object(create_tbbluetube2_2798(2368, 2344), 3);
    add_background_object(create_tbbluetube2_2798(2560, 2600), 3);
    add_background_object(create_tbinvertedloop2_2795(2304, 2216), 3);
    add_background_object(create_tbinvertedloop4_2780(2176, 2152), 3);
    add_background_object(create_tbinvertedloop2_2795(2112, 2024), 3);
    add_background_object(create_tbbluetube1_2796(2048, 2024), 3);
    add_background_object(create_tbbluetube1_2796(1984, 2024), 3);
    add_background_object(create_tbbluetube1_2796(1920, 2024), 3);
    add_background_object(create_tbbluetube1_2796(1856, 2024), 3);
    add_background_object(create_tbbluetube1_2796(1792, 2024), 3);
    add_background_object(create_tbbluetube1_2796(1728, 2024), 3);
    add_background_object(create_tbbluetube1_2796(1664, 2024), 3);
    add_background_object(create_tbbluetube1_2796(1600, 2024), 3);
    add_background_object(create_tbbluewall12_2792(1472, 1960), 3);
    add_background_object(create_tbbluewall11_2791(1536, 1960), 3);
    add_background_object(create_tbsolidblack_2688(1600, 1832), 3);
    add_background_object(create_tbbluewall6_2784(1600, 1960), 3);
    add_background_object(create_tbbluewall6_2784(1664, 1960), 3);
    add_background_object(create_tbsolidblack_2688(1600, 1704), 3);
    add_background_object(create_tbbluewall7_2788(1472, 2024), 3);
    add_background_object(create_tbbluewall5_2787(1536, 2024), 3);
    add_background_object(create_tbsolidblack_2688(1728, 1832), 3);
    add_background_object(create_tbbluewall6_2784(1728, 1960), 3);
    add_background_object(create_tbbluewall6_2784(1792, 1960), 3);
    add_background_object(create_tbsolidblack_2688(1728, 1704), 3);
    add_background_object(create_tbsolidblack_2688(1856, 1832), 3);
    add_background_object(create_tbbluewall6_2784(1856, 1960), 3);
    add_background_object(create_tbbluewall6_2784(1920, 1960), 3);
    add_background_object(create_tbsolidblack_2688(1856, 1704), 3);
    add_background_object(create_tbsolidblack_2688(1984, 1832), 3);
    add_background_object(create_tbbluewall6_2784(1984, 1960), 3);
    add_background_object(create_tbbluewall6_2784(2048, 1960), 3);
    add_background_object(create_tbsolidblack_2688(1984, 1704), 3);
    add_background_object(create_tbsolidblack_2688(2112, 1832), 3);
    add_background_object(create_tbbluewall6_2784(2112, 1960), 3);
    add_background_object(create_tbsolidblack_2688(2112, 1704), 3);
    add_background_object(create_tbbluewall12_2792(2176, 1960), 3);
    add_background_object(create_tbbluewall7_2788(2176, 2024), 3);
    add_background_object(create_tbbluewall12_2792(2240, 2024), 3);
    add_background_object(create_tbbluewall7_2788(2240, 2152), 3);
    add_background_object(create_tbbluewall12_2792(2304, 2152), 3);
    add_background_object(create_tbbluewall7_2788(2304, 2216), 3);
    add_background_object(create_tbbluewall8_2785(2240, 2088), 3);
    add_background_object(create_tbbluewall12_2792(2368, 2216), 3);
    add_background_object(create_tbbluewall7_2788(2368, 2280), 3);
    add_background_object(create_tbbluewall12_2792(2432, 2280), 3);
    add_background_object(create_tbbluewall7_2788(2432, 2408), 3);
    add_background_object(create_tbbluewall8_2785(2432, 2344), 3);
    add_background_object(create_tbbluewall12_2792(2496, 2408), 3);
    add_background_object(create_tbbluewall7_2788(2496, 2472), 3);
    add_background_object(create_tbbluewall12_2792(2560, 2472), 3);
    add_background_object(create_tbbluewall7_2788(2560, 2536), 3);
    add_background_object(create_tbbluewall12_2792(2624, 2536), 3);
    add_background_object(create_tbbluewall8_2785(2624, 2600), 3);
    add_background_object(create_tbbluetube2_2798(2560, 2664), 3);
    add_background_object(create_tbbluewall8_2785(2624, 2664), 3);
    add_background_object(create_tbbluetube2_2798(2560, 2728), 3);
    add_background_object(create_tbbluewall8_2785(2624, 2728), 3);
    add_background_object(create_tbbluetube2_2798(2560, 2792), 3);
    add_background_object(create_tbbluewall8_2785(2624, 2792), 3);
    add_background_object(create_tbsolidblack_2688(2240, 1896), 3);
    add_background_object(create_tbsolidblack_2688(2240, 1768), 3);
    add_background_object(create_tbsolidblack_2688(2304, 2024), 3);
    add_background_object(create_tbsolidblack_2688(2368, 1896), 3);
    add_background_object(create_tbsolidblack_2688(2368, 2088), 3);
    add_background_object(create_tbsolidblack_2688(2432, 2152), 3);
    add_background_object(create_tbsolidblack_2688(2432, 2024), 3);
    add_background_object(create_tbsolidblack_2688(2496, 2280), 3);
    add_background_object(create_tbsolidblack_2688(2560, 2152), 3);
    add_background_object(create_tbsolidblack_2688(2560, 2344), 3);
    add_background_object(create_tbsolidblack_2688(2624, 2408), 3);
    add_background_object(create_tbsolidblack_2688(2624, 2280), 3);
    add_background_object(create_tbsolidblack_2688(2688, 2536), 3);
    add_background_object(create_tbsolidblack_2688(2752, 2408), 3);
    add_background_object(create_tbsolidblack_2688(2688, 2664), 3);
    add_background_object(create_tbsolidblack_2688(2688, 2792), 3);
    add_background_object(create_tbsolidblack_2688(2816, 2536), 3);
    add_background_object(create_tbsolidblack_2688(2816, 2664), 3);
    add_background_object(create_tbsolidblack_2688(2816, 2792), 3);
    add_background_object(create_tbsolidblack_2688(2752, 2280), 3);
    add_background_object(create_tbsolidblack_2688(2688, 2152), 3);
    add_background_object(create_tbsolidblack_2688(2560, 2024), 3);
    add_background_object(create_tbsolidblack_2688(2496, 1896), 3);
    add_background_object(create_tbsolidblack_2688(2368, 1768), 3);
    add_background_object(create_tbbluewall3_2786(1856, 3112), 3);
    add_background_object(create_tbbluewall4_2783(1728, 3240), 3);
    add_background_object(create_tbsolidblack_2688(1664, 3304), 3);
    add_background_object(create_tbsolidblack_2688(1536, 3304), 3);
    add_background_object(create_tbbluewall4_2783(1728, 3304), 3);
    add_background_object(create_tbsolidblack_2688(1536, 3432), 3);
    add_background_object(create_tbbluewall4_2783(1664, 3432), 3);
    add_background_object(create_tbbluewall4_2783(1664, 3496), 3);
    add_background_object(create_tbbluewall5_2787(1728, 3368), 3);
    add_background_object(create_tbbluewall11_2791(1664, 3368), 3);
    add_background_object(create_tbsolidblack_2688(1536, 3560), 3);
    add_background_object(create_tbsolidblack_2688(1536, 3688), 3);
    add_background_object(create_tbsolidblack_2688(1664, 3624), 3);
    add_background_object(create_tbbluewall10_2790(1664, 3560), 3);
    add_background_object(create_tbbluewall2_2782(1728, 3560), 3);
    add_background_object(create_tbbluewall2_2782(1792, 3560), 3);
    add_background_object(create_tbbluewall2_2782(1856, 3560), 3);
    add_background_object(create_tbsolidblack_2688(1792, 3624), 3);
    add_background_object(create_tbsolidblack_2688(1664, 3752), 3);
    add_background_object(create_tbsolidblack_2688(1792, 3752), 3);
    add_background_object(create_tbsolidblack_2688(1408, 3304), 3);
    add_background_object(create_tbsolidblack_2688(1408, 3432), 3);
    add_background_object(create_tbsolidblack_2688(1408, 3560), 3);
    add_background_object(create_tbsolidblack_2688(1408, 3688), 3);
    add_background_object(create_tbbluewall2_2782(1920, 3560), 3);
    add_background_object(create_tbbluewall2_2782(1984, 3560), 3);
    add_background_object(create_tbsolidblack_2688(1920, 3624), 3);
    add_background_object(create_tbsolidblack_2688(1920, 3752), 3);
    add_background_object(create_tbbluewall2_2782(2048, 3560), 3);
    add_background_object(create_tbbluewall2_2782(2112, 3560), 3);
    add_background_object(create_tbsolidblack_2688(2048, 3624), 3);
    add_background_object(create_tbsolidblack_2688(2048, 3752), 3);
    add_background_object(create_tbbluewall2_2782(2176, 3560), 3);
    add_background_object(create_tbbluewall2_2782(2240, 3560), 3);
    add_background_object(create_tbsolidblack_2688(2176, 3624), 3);
    add_background_object(create_tbsolidblack_2688(2176, 3752), 3);
    add_background_object(create_tbbluewall8_2785(2048, 3304), 3);
    add_background_object(create_tbbluewall7_2788(2048, 3368), 3);
    add_background_object(create_tbbluewall6_2784(2112, 3368), 3);
    add_background_object(create_tbbluewall6_2784(2176, 3368), 3);
    add_background_object(create_tbbluewall6_2784(2240, 3368), 3);
    add_background_object(create_tbbluewall2_2782(2304, 3560), 3);
    add_background_object(create_tbbluewall2_2782(2368, 3560), 3);
    add_background_object(create_tbsolidblack_2688(2304, 3624), 3);
    add_background_object(create_tbsolidblack_2688(2304, 3752), 3);
    add_background_object(create_tbbluewall6_2784(2304, 3368), 3);
    add_background_object(create_tbbluewall6_2784(2368, 3368), 3);
    add_background_object(create_tbbluewall2_2782(2432, 3560), 3);
    add_background_object(create_tbbluewall2_2782(2496, 3560), 3);
    add_background_object(create_tbsolidblack_2688(2432, 3624), 3);
    add_background_object(create_tbsolidblack_2688(2432, 3752), 3);
    add_background_object(create_tbsolidblack_2688(2432, 3304), 3);
    add_background_object(create_tbbluewall6_2784(2432, 3368), 3);
    add_background_object(create_tbbluewall6_2784(2496, 3368), 3);
    add_background_object(create_tbsolidblack_2688(2688, 2920), 3);
    add_background_object(create_tbsolidblack_2688(2816, 2920), 3);
    add_background_object(create_tbsolidblack_2688(2560, 3304), 3);
    add_background_object(create_tbsolidblack_2688(2688, 3304), 3);
    add_background_object(create_tbsolidblack_2688(2816, 3304), 3);
    add_background_object(create_tbbluewall6_2784(2560, 3368), 3);
    add_background_object(create_tbbluewall6_2784(2624, 3368), 3);
    add_background_object(create_tbbluewall6_2784(2688, 3368), 3);
    add_background_object(create_tbbluewall6_2784(2752, 3368), 3);
    add_background_object(create_tbbluewall6_2784(2816, 3368), 3);
    add_background_object(create_tbbluewall6_2784(2880, 3368), 3);
    add_background_object(create_tbsolidblack_2688(1280, 3304), 3);
    add_background_object(create_tbsolidblack_2688(1280, 3432), 3);
    add_background_object(create_tbsolidblack_2688(1152, 3304), 3);
    add_background_object(create_tbwaterlightback2_2843(4736, 3144), 3);
    add_background_object(create_tbwaterlightback2_2843(4736, 3192), 3);
    add_background_object(create_tbwaterlightback2_2843(4736, 3240), 3);
    add_background_object(create_tbwaterlightback2_2843(4736, 3288), 3);
    add_background_object(create_tbwaterlightback2_2843(4736, 3336), 3);
    add_background_object(create_tbwaterlightback1_2844(4736, 3096), 3);
    add_background_object(create_tbwaterlightback3_2845(4736, 3384), 3);
    add_background_object(create_tbbluewall6_2784(2944, 3368), 3);
    add_background_object(create_tbbluewall6_2784(3008, 3368), 3);
    add_background_object(create_tbsolidblack_2688(2944, 3240), 3);
    add_background_object(create_tbbluewall12_2792(3072, 3368), 3);
    add_background_object(create_tbbluewall8_2785(3072, 3432), 3);
    add_background_object(create_gimmickwaterturbineend_2846(3040, 3432), 3);
    add_background_object(create_gimmickwaterturbineend_2846(3040, 3496), 3);
    add_background_object(create_tbbluewall3_2786(2560, 3560), 3);
    add_background_object(create_tbbluewall4_2783(2560, 3624), 3);
    add_background_object(create_tbsolidblack_2688(3072, 3240), 3);
    add_background_object(create_tbsolidblack_2688(3136, 3368), 3);
    add_background_object(create_tbsolidblack_2688(3200, 3240), 3);
    add_background_object(create_tbsolidblack_2688(3072, 3752), 3);
    add_background_object(create_tbsolidblack_2688(3264, 3368), 3);
    add_background_object(create_tbsolidblack_2688(3200, 3752), 3);
    add_background_object(create_tbbluewall13_2793(2624, 2856), 3);
    add_background_object(create_tbbluewall9_2789(2560, 2856), 3);
    add_background_object(create_tbbluewall7_2788(2560, 2920), 3);
    add_background_object(create_tbbluewall12_2792(2624, 2920), 3);
    add_background_object(create_tbbluewall7_2788(2624, 2984), 3);
    add_background_object(create_tbbluewall12_2792(2688, 2984), 3);
    add_background_object(create_tbbluewall7_2788(2688, 3048), 3);
    add_background_object(create_tbbluewall2_2782(2496, 3240), 3);
    add_background_object(create_tbbluewall2_2782(2560, 3240), 3);
    add_background_object(create_tbbluewall2_2782(2624, 3240), 3);
    add_background_object(create_tbbluewall2_2782(2688, 3240), 3);
    add_background_object(create_tbbluewall2_2782(2752, 3240), 3);
    add_background_object(create_tbbluewall6_2784(2752, 3048), 3);
    add_background_object(create_tbbluewall2_2782(2816, 3240), 3);
    add_background_object(create_tbbluewall6_2784(2816, 3048), 3);
    add_background_object(create_tbbluewall2_2782(2880, 3240), 3);
    add_background_object(create_tbbluewall6_2784(2880, 3048), 3);
    add_background_object(create_gimmickwaterturbineend_2846(3232, 3176), 3);
    add_background_object(create_gimmickwaterturbineend_2846(3232, 3112), 3);
    add_background_object(create_tbbluewall2_2782(2944, 3240), 3);
    add_background_object(create_tbbluewall2_2782(3008, 3240), 3);
    add_background_object(create_tbbluewall2_2782(3072, 3240), 3);
    add_background_object(create_tbbluewall2_2782(3136, 3240), 3);
    add_background_object(create_tbbluewall2_2782(3200, 3240), 3);
    add_background_object(create_tbbluewall2_2782(3264, 3240), 3);
    add_background_object(create_tbbluewall6_2784(3328, 3112), 3);
    add_background_object(create_tbbluewall6_2784(3392, 3112), 3);
    add_background_object(create_tbbluewall6_2784(3456, 3112), 3);
    add_background_object(create_tbbluewall6_2784(3520, 3112), 3);
    add_background_object(create_tbbluewall6_2784(3584, 3112), 3);
    add_background_object(create_tbbluewall6_2784(3648, 3112), 3);
    add_background_object(create_tbbluewall6_2784(3712, 3112), 3);
    add_background_object(create_tbbluewall6_2784(3776, 3112), 3);
    add_background_object(create_tbsolidblack_2688(3840, 2984), 3);
    add_background_object(create_tbsolidblack_2688(3904, 3112), 3);
    add_background_object(create_tbsolidblack_2688(3968, 2984), 3);
    add_background_object(create_tbsolidblack_2688(4032, 3112), 3);
    add_background_object(create_tbsolidblack_2688(3904, 3240), 3);
    add_background_object(create_tbsolidblack_2688(4032, 3240), 3);
    add_background_object(create_tbsolidblack_2688(4032, 3624), 3);
    add_background_object(create_tbsolidblack_2688(4160, 3624), 3);
    add_background_object(create_tbbluewall12_2792(3840, 3112), 3);
    add_background_object(create_tbbluewall8_2785(3840, 3176), 3);
    add_background_object(create_tbbluewall8_2785(3840, 3240), 3);
    add_background_object(create_tbbluewall8_2785(3968, 3624), 3);
    add_background_object(create_tbbluetube4_2800(3264, 3176), 3);
    add_background_object(create_tbbluewall5_2787(2944, 3048), 3);
    add_background_object(create_tbbluewall4_2783(2944, 2984), 3);
    add_background_object(create_tbbluewall4_2783(2944, 2920), 3);
    add_background_object(create_tbbluewall7_2788(3264, 3112), 3);
    add_background_object(create_tbbluewall9_2789(3264, 3048), 3);
    add_background_object(create_tbbluewall2_2782(3328, 3048), 3);
    add_background_object(create_tbbluewall2_2782(3392, 3048), 3);
    add_background_object(create_tbbluewall2_2782(3456, 3048), 3);
    add_background_object(create_tbbluewall2_2782(3520, 3048), 3);
    add_background_object(create_tbbluewall2_2782(3584, 3048), 3);
    add_background_object(create_tbbluewall2_2782(3648, 3048), 3);
    add_background_object(create_tbbluewall2_2782(3712, 3048), 3);
    add_background_object(create_tbbluewall6_2784(3072, 2600), 3);
    add_background_object(create_tbbluewall6_2784(3136, 2600), 3);
    add_background_object(create_tbbluewall6_2784(3200, 2600), 3);
    add_background_object(create_tbbluewall6_2784(3392, 2664), 3);
    add_background_object(create_tbbluewall6_2784(3520, 2600), 3);
    add_background_object(create_tbbluewall6_2784(3264, 2600), 3);
    add_background_object(create_tbbluewall14_2794(3360, 2856), 3);
    add_background_object(create_tbbluewall13_2793(3776, 3048), 3);
    add_background_object(create_tbbluewall8_2785(3776, 2984), 3);
    add_background_object(create_tbbluewall14_2794(3616, 2856), 3);
    add_background_object(create_tbbluewall11_2791(3456, 2600), 3);
    add_background_object(create_tbbluewall5_2787(3456, 2664), 3);
    add_background_object(create_tbbluewall7_2788(3328, 2664), 3);
    add_background_object(create_tbbluewall12_2792(3328, 2600), 3);
    add_background_object(create_tbsolidblack_2688(2944, 2472), 3);
    add_background_object(create_tbsolidblack_2688(3072, 2472), 3);
    add_background_object(create_tbsolidblack_2688(3200, 2472), 3);
    add_background_object(create_tbsolidblack_2688(3456, 2472), 3);
    add_background_object(create_tbsolidblack_2688(3328, 2408), 3);
    add_background_object(create_tbsolidblack_2688(3456, 2344), 3);
    add_background_object(create_tbsolidblack_2688(2944, 2344), 3);
    add_background_object(create_tbsolidblack_2688(3072, 2344), 3);
    add_background_object(create_tbsolidblack_2688(3200, 2344), 3);
    add_background_object(create_tbsolidblack_2688(2880, 2408), 3);
    add_background_object(create_tbsolidblack_2688(2880, 2280), 3);
    add_background_object(create_tbbluewall6_2784(3584, 2600), 3);
    add_background_object(create_tbbluewall6_2784(3648, 2600), 3);
    add_background_object(create_tbbluewall6_2784(3712, 2600), 3);
    add_background_object(create_tbsolidblack_2688(3584, 2472), 3);
    add_background_object(create_tbsolidblack_2688(3584, 2344), 3);
    add_background_object(create_tbsolidblack_2688(3712, 2472), 3);
    add_background_object(create_tbsolidblack_2688(3712, 2344), 3);
    add_background_object(create_tbsolidblack_2688(3840, 2472), 3);
    add_background_object(create_tbsolidblack_2688(3840, 2344), 3);
    add_background_object(create_tbsolidblack_2688(3968, 2472), 3);
    add_background_object(create_tbsolidblack_2688(3968, 2344), 3);
    add_background_object(create_tbbluewall9_2789(3776, 2920), 3);
    add_background_object(create_tbbluewall2_2782(3840, 2920), 3);
    add_background_object(create_tbsolidblack_2688(4096, 2984), 3);
    add_background_object(create_tbsolidblack_2688(4096, 2472), 3);
    add_background_object(create_tbsolidblack_2688(4096, 2344), 3);
    add_background_object(create_tbsolidblack_2688(4224, 2472), 3);
    add_background_object(create_tbsolidblack_2688(4224, 2344), 3);
    add_background_object(create_tbbluewall6_2784(3776, 2600), 3);
    add_background_object(create_tbbluewall6_2784(3840, 2600), 3);
    add_background_object(create_tbbluewall6_2784(3904, 2600), 3);
    add_background_object(create_tbbluewall6_2784(3968, 2600), 3);
    add_background_object(create_tbbluewall2_2782(3904, 2920), 3);
    add_background_object(create_tbbluewall2_2782(3968, 2920), 3);
    add_background_object(create_tbsolidblack_2688(4224, 2984), 3);
    add_background_object(create_tbsolidblack_2688(4160, 3112), 3);
    add_background_object(create_tbbluewall14_2794(3424, 2856), 3);
    add_background_object(create_tbbluewall14_2794(3488, 2856), 3);
    add_background_object(create_tbbluewall14_2794(3552, 2856), 3);
    add_background_object(create_tbbluewall10_2790(2560, 3688), 3);
    add_background_object(create_tbsolidblack_2688(2560, 3752), 3);
    add_background_object(create_tbsolidblack_2688(2688, 3752), 3);
    add_background_object(create_tbsolidblack_2688(2816, 3752), 3);
    add_background_object(create_tbsolidblack_2688(2944, 3752), 3);
    add_background_object(create_tbbluewall2_2782(2624, 3688), 3);
    add_background_object(create_tbbluewall2_2782(2688, 3688), 3);
    add_background_object(create_tbbluewall2_2782(2752, 3688), 3);
    add_background_object(create_tbbluewall2_2782(2816, 3688), 3);
    add_background_object(create_tbbluewall2_2782(2880, 3688), 3);
    add_background_object(create_tbbluewall2_2782(2944, 3688), 3);
    add_background_object(create_tbbluewall7_2788(3072, 3496), 3);
    add_background_object(create_tbbluewall2_2782(3008, 3688), 3);
    add_background_object(create_tbbluewall2_2782(3072, 3688), 3);
    add_background_object(create_gimmickwaterturbineend_2846(3936, 3560), 3);
    add_background_object(create_gimmickwaterturbineend_2846(3936, 3624), 3);
    add_background_object(create_tbbluewall6_2784(3136, 3496), 3);
    add_background_object(create_tbbluewall6_2784(3200, 3496), 3);
    add_background_object(create_tbbluewall6_2784(3264, 3496), 3);
    add_background_object(create_tbbluewall2_2782(3136, 3688), 3);
    add_background_object(create_tbbluewall2_2782(3200, 3688), 3);
    add_background_object(create_tbbluewall2_2782(3264, 3688), 3);
    add_background_object(create_tbsolidblack_2688(3328, 3752), 3);
    add_background_object(create_tbbluewall6_2784(3328, 3496), 3);
    add_background_object(create_tbbluewall6_2784(3392, 3496), 3);
    add_background_object(create_tbbluewall2_2782(3328, 3688), 3);
    add_background_object(create_tbbluewall2_2782(3392, 3688), 3);
    add_background_object(create_tbsolidblack_2688(3456, 3752), 3);
    add_background_object(create_tbbluewall6_2784(3456, 3496), 3);
    add_background_object(create_tbbluewall2_2782(3456, 3688), 3);
    add_background_object(create_tbbluewall2_2782(3520, 3688), 3);
    add_background_object(create_tbsolidblack_2688(3392, 3368), 3);
    add_background_object(create_tbsolidblack_2688(3584, 3752), 3);
    add_background_object(create_tbbluewall2_2782(3584, 3688), 3);
    add_background_object(create_tbbluewall2_2782(3648, 3688), 3);
    add_background_object(create_tbsolidblack_2688(3712, 3752), 3);
    add_background_object(create_tbbluewall2_2782(3712, 3688), 3);
    add_background_object(create_tbbluewall2_2782(3776, 3688), 3);
    add_background_object(create_tbsolidblack_2688(3840, 3752), 3);
    add_background_object(create_tbbluewall2_2782(3840, 3688), 3);
    add_background_object(create_tbbluewall2_2782(3904, 3688), 3);
    add_background_object(create_tbbluewall13_2793(3968, 3688), 3);
    add_background_object(create_tbsolidblack_2688(3968, 3752), 3);
    add_background_object(create_tbsolidblack_2688(4096, 3752), 3);
    add_background_object(create_tbinvertedloop1_2781(3776, 3496), 3);
    add_background_object(create_tbbluewall3_2786(3328, 3240), 3);
    add_background_object(create_tbbluewall4_2783(3328, 3304), 3);
    add_background_object(create_tbbluewall10_2790(3328, 3368), 3);
    add_background_object(create_tbbluewall2_2782(3392, 3368), 3);
    add_background_object(create_tbbluewall2_2782(3456, 3368), 3);
    add_background_object(create_tbbluewall5_2787(3520, 3496), 3);
    add_background_object(create_tbbluewall4_2783(3520, 3432), 3);
    add_background_object(create_tbbluewall3_2786(3520, 3368), 3);
    add_background_object(create_tbbluewall7_2788(3840, 3304), 3);
    add_background_object(create_tbbluewall6_2784(3904, 3304), 3);
    add_background_object(create_tbbluewall6_2784(3968, 3304), 3);
    add_background_object(create_tbbluewall6_2784(4032, 3304), 3);
    add_background_object(create_tbbluewall6_2784(4096, 3304), 3);
    add_background_object(create_tbbluewall9_2789(3968, 3560), 3);
    add_background_object(create_tbbluewall2_2782(4032, 3560), 3);
    add_background_object(create_tbbluewall2_2782(4096, 3560), 3);
    add_background_object(create_tbbluewall2_2782(4160, 3560), 3);
    add_background_object(create_tbbluewall2_2782(4224, 3560), 3);
    add_background_object(create_tbsolidblack_2688(4224, 3752), 3);
    add_background_object(create_tbsolidblack_2688(4288, 3624), 3);
    add_background_object(create_tbbluetube3_2797(3904, 3496), 3);
    add_background_object(create_tbbluetube3_2797(3968, 3496), 3);
    add_background_object(create_tbbluetube3_2797(4032, 3496), 3);
    add_background_object(create_tbbluetube3_2797(4096, 3496), 3);
    add_background_object(create_tbbluetube3_2797(4160, 3496), 3);
    add_background_object(create_tbbluetube3_2797(4224, 3496), 3);
    add_background_object(create_gimmickwaterturbineend_2846(4896, 3432), 3);
    add_background_object(create_tbbluewall2_2782(4288, 3560), 3);
    add_background_object(create_tbbluewall2_2782(4352, 3560), 3);
    add_background_object(create_tbbluewall2_2782(4416, 3560), 3);
    add_background_object(create_tbbluewall2_2782(4480, 3560), 3);
    add_background_object(create_tbbluetube3_2797(4288, 3496), 3);
    add_background_object(create_tbbluetube3_2797(4352, 3496), 3);
    add_background_object(create_tbbluetube3_2797(4416, 3496), 3);
    add_background_object(create_tbbluetube3_2797(4480, 3496), 3);
    add_background_object(create_tbsolidblack_2688(4416, 3624), 3);
    add_background_object(create_tbsolidblack_2688(4352, 3752), 3);
    add_background_object(create_tbbluewall2_2782(4544, 3560), 3);
    add_background_object(create_tbbluewall2_2782(4608, 3560), 3);
    add_background_object(create_tbbluetube3_2797(4544, 3496), 3);
    add_background_object(create_tbbluetube3_2797(4608, 3496), 3);
    add_background_object(create_tbsolidblack_2688(4544, 3624), 3);
    add_background_object(create_tbsolidblack_2688(4480, 3752), 3);
    add_background_object(create_tbbluewall2_2782(4672, 3560), 3);
    add_background_object(create_tbbluewall2_2782(4736, 3560), 3);
    add_background_object(create_tbsolidblack_2688(4672, 3624), 3);
    add_background_object(create_tbsolidblack_2688(4608, 3752), 3);
    add_background_object(create_tbbluewall2_2782(4800, 3560), 3);
    add_background_object(create_tbbluewall2_2782(4864, 3560), 3);
    add_background_object(create_tbsolidblack_2688(4800, 3624), 3);
    add_background_object(create_tbsolidblack_2688(4736, 3752), 3);
    add_background_object(create_tbsolidblack_2688(4928, 3624), 3);
    add_background_object(create_tbsolidblack_2688(4864, 3752), 3);
    add_background_object(create_tbsolidblack_2688(4992, 3752), 3);
    add_background_object(create_tbsolidblack_2688(5056, 3624), 3);
    add_background_object(create_tbbluewall13_2793(4928, 3560), 3);
    add_background_object(create_tbbluewall8_2785(4928, 3496), 3);
    add_background_object(create_tbbluewall8_2785(4928, 3432), 3);
    add_background_object(create_tbsolidblack_2688(4992, 3496), 3);
    add_background_object(create_tbsolidblack_2688(4992, 3368), 3);
    add_background_object(create_tbbluewall8_2785(4928, 3368), 3);
    add_background_object(create_tbinvertedloop3_2779(4736, 3432), 3);
    add_background_object(create_tbbluetube3_2797(4672, 3496), 3);
    add_background_object(create_tbbluewall8_2785(4928, 3304), 3);
    add_background_object(create_tbsolidblack_2688(4992, 3240), 3);
    add_background_object(create_tbbluewall8_2785(4928, 3240), 3);
    add_background_object(create_tbbluewall8_2785(4928, 3176), 3);
    add_background_object(create_tbsolidblack_2688(4992, 3112), 3);
    add_background_object(create_tbbluewall8_2785(4928, 3112), 3);
    add_background_object(create_tbbluetube2_2798(4800, 3368), 3);
    add_background_object(create_tbbluetube2_2798(4800, 3304), 3);
    add_background_object(create_tbbluetube2_2798(4800, 3240), 3);
    add_background_object(create_tbbluetube2_2798(4800, 3176), 3);
    add_background_object(create_tbsolidblack_2688(4160, 3240), 3);
    add_background_object(create_tbbluewall6_2784(4160, 3304), 3);
    add_background_object(create_tbbluewall6_2784(4224, 3304), 3);
    add_background_object(create_tbbluetube2_2798(4800, 3112), 3);
    add_background_object(create_tbinvertedloop1_2781(4800, 2984), 3);
    add_background_object(create_tbbluewall8_2785(4928, 3048), 3);
    add_background_object(create_tbsolidblack_2688(4992, 2984), 3);
    add_background_object(create_tbsolidblack_2688(4288, 3112), 3);
    add_background_object(create_tbsolidblack_2688(4288, 3240), 3);
    add_background_object(create_tbsolidblack_2688(4416, 3112), 3);
    add_background_object(create_tbbluewall6_2784(4288, 3304), 3);
    add_background_object(create_tbbluewall6_2784(4352, 3304), 3);
    add_background_object(create_tbsolidblack_2688(4416, 3240), 3);
    add_background_object(create_tbbluewall6_2784(4416, 3304), 3);
    add_background_object(create_tbbluewall6_2784(4480, 3304), 3);
    add_background_object(create_tbbluewall5_2787(4544, 3304), 3);
    add_background_object(create_tbsolidblack_2688(4352, 2984), 3);
    add_background_object(create_tbbluewall3_2786(4544, 3240), 3);
    add_background_object(create_tbbluewall10_2790(4480, 3240), 3);
    add_background_object(create_tbbluewall4_2783(4480, 3176), 3);
    add_background_object(create_tbbluewall4_2783(4480, 3112), 3);
    add_background_object(create_tbbluewall4_2783(4480, 3048), 3);
    add_background_object(create_tbbluewall4_2783(4480, 2984), 3);
    add_background_object(create_tbsolidblack_2688(4352, 2856), 3);
    add_background_object(create_tbbluewall4_2783(4480, 2920), 3);
    add_background_object(create_tbbluewall4_2783(4480, 2856), 3);
    add_background_object(create_tbsolidblack_2688(4352, 2728), 3);
    add_background_object(create_tbbluewall4_2783(4480, 2792), 3);
    add_background_object(create_tbbluewall4_2783(4480, 2728), 3);
    add_background_object(create_tbsolidblack_2688(4352, 2600), 3);
    add_background_object(create_tbbluewall4_2783(4480, 2664), 3);
    add_background_object(create_tbbluewall14_2794(4608, 3240), 3);
    add_background_object(create_tbbluewall14_2794(4672, 2600), 3);
    add_background_object(create_tbinvertedloop2_2795(4736, 2600), 3);
    add_background_object(create_tbinvertedloop4_2780(4800, 2728), 3);
    add_background_object(create_tbbluewall9_2789(4928, 2984), 3);
    add_background_object(create_tbbluewall2_2782(4992, 2984), 3);
    add_background_object(create_tbbluewall13_2793(5184, 2984), 3);
    add_background_object(create_tbbluewall2_2782(5056, 2984), 3);
    add_background_object(create_tbbluewall2_2782(5120, 2984), 3);
    add_background_object(create_tbbluewall8_2785(5184, 2920), 3);
    add_background_object(create_tbbluewall9_2789(5184, 2856), 3);
    add_background_object(create_tbbluetube1_2796(4928, 2792), 3);
    add_background_object(create_tbbluewall14_2794(4992, 2792), 3);
    add_background_object(create_tbbluewall2_2782(5248, 2856), 3);
    add_background_object(create_tbbluewall2_2782(5376, 2920), 3);
    add_background_object(create_tbsolidblack_2688(5248, 2920), 3);
    add_background_object(create_tbsolidblack_2688(5248, 3048), 3);
    add_background_object(create_tbsolidblack_2688(5376, 2984), 3);
    add_background_object(create_tbbluewall2_2782(5440, 2920), 3);
    add_background_object(create_tbbluewall3_2786(4480, 2600), 3);
    add_background_object(create_tbbluewall2_2782(4416, 2600), 3);
    add_background_object(create_tbbluewall10_2790(4352, 2600), 3);
    add_background_object(create_tbbluewall4_2783(4352, 2536), 3);
    add_background_object(create_tbbluewall4_2783(4352, 2472), 3);
    add_background_object(create_tbbluewall4_2783(4352, 2408), 3);
    add_background_object(create_tbbluewall11_2791(4352, 2344), 3);
    add_background_object(create_tbbluewall3_2786(5312, 2856), 3);
    add_background_object(create_tbbluewall10_2790(5312, 2920), 3);
    add_background_object(create_tbbluewall6_2784(4416, 2344), 3);
    add_background_object(create_tbbluewall6_2784(4480, 2344), 3);
    add_background_object(create_tbsolidblack_2688(4224, 2216), 3);
    add_background_object(create_tbsolidblack_2688(4224, 2088), 3);
    add_background_object(create_tbsolidblack_2688(4096, 2216), 3);
    add_background_object(create_tbsolidblack_2688(4096, 2088), 3);
    add_background_object(create_tbsolidblack_2688(4480, 2216), 3);
    add_background_object(create_tbsolidblack_2688(4480, 2088), 3);
    add_background_object(create_tbsolidblack_2688(4352, 2216), 3);
    add_background_object(create_tbsolidblack_2688(4352, 2088), 3);
    add_background_object(create_tbsolidblack_2688(4736, 2216), 3);
    add_background_object(create_tbsolidblack_2688(4736, 2088), 3);
    add_background_object(create_tbsolidblack_2688(4608, 2216), 3);
    add_background_object(create_tbsolidblack_2688(4608, 2088), 3);
    add_background_object(create_tbbluewall6_2784(4544, 2344), 3);
    add_background_object(create_tbbluewall6_2784(4608, 2344), 3);
    add_background_object(create_tbbluewall6_2784(4672, 2344), 3);
    add_background_object(create_tbbluewall6_2784(4736, 2344), 3);
    add_background_object(create_tbbluewall6_2784(4800, 2344), 3);
    add_background_object(create_tbsolidblack_2688(3968, 2216), 3);
    add_background_object(create_tbsolidblack_2688(4992, 2216), 3);
    add_background_object(create_tbsolidblack_2688(4992, 2088), 3);
    add_background_object(create_tbsolidblack_2688(4864, 2216), 3);
    add_background_object(create_tbsolidblack_2688(4864, 2088), 3);
    add_background_object(create_tbbluewall6_2784(4864, 2344), 3);
    add_background_object(create_tbbluewall6_2784(4928, 2344), 3);
    add_background_object(create_tbbluewall6_2784(4992, 2344), 3);
    add_background_object(create_tbbluewall6_2784(5056, 2344), 3);
    add_background_object(create_tbsolidblack_2688(5248, 2216), 3);
    add_background_object(create_tbsolidblack_2688(5248, 2088), 3);
    add_background_object(create_tbsolidblack_2688(5120, 2216), 3);
    add_background_object(create_tbsolidblack_2688(5120, 2088), 3);
    add_background_object(create_tbbluewall6_2784(5120, 2344), 3);
    add_background_object(create_tbbluewall6_2784(5184, 2344), 3);
    add_background_object(create_tbbluewall6_2784(5248, 2344), 3);
    add_background_object(create_tbbluewall6_2784(6208, 2536), 3);
    add_background_object(create_tbbluewall6_2784(6272, 2536), 3);
    add_background_object(create_tbsolidblack_2688(6144, 2408), 3);
    add_background_object(create_tbbluewall6_2784(6336, 2536), 3);
    add_background_object(create_tbbluewall6_2784(6400, 2536), 3);
    add_background_object(create_tbsolidblack_2688(6272, 2408), 3);
    add_background_object(create_tbbluewall6_2784(6464, 2536), 3);
    add_background_object(create_tbbluewall6_2784(6528, 2536), 3);
    add_background_object(create_tbsolidblack_2688(6400, 2408), 3);
    add_background_object(create_tbbluewall6_2784(6592, 2536), 3);
    add_background_object(create_tbbluewall6_2784(6656, 2536), 3);
    add_background_object(create_tbsolidblack_2688(6528, 2408), 3);
    add_background_object(create_tbbluewall6_2784(5632, 2600), 3);
    add_background_object(create_tbsolidblack_2688(5632, 2472), 3);
    add_background_object(create_tbbluewall6_2784(5824, 2536), 3);
    add_background_object(create_tbsolidblack_2688(5760, 2472), 3);
    add_background_object(create_tbbluewall6_2784(5376, 2600), 3);
    add_background_object(create_tbbluewall6_2784(5440, 2600), 3);
    add_background_object(create_tbsolidblack_2688(5376, 2472), 3);
    add_background_object(create_tbbluewall6_2784(5504, 2600), 3);
    add_background_object(create_tbbluewall6_2784(5568, 2600), 3);
    add_background_object(create_tbsolidblack_2688(5504, 2472), 3);
    add_background_object(create_tbsolidblack_2688(5376, 2344), 3);
    add_background_object(create_tbsolidblack_2688(5504, 2344), 3);
    add_background_object(create_tbsolidblack_2688(5376, 2216), 3);
    add_background_object(create_tbsolidblack_2688(5504, 2216), 3);
    add_background_object(create_tbbluewall12_2792(5376, 2344), 3);
    add_background_object(create_tbbluewall8_2785(5376, 2408), 3);
    add_background_object(create_tbbluewall8_2785(5312, 2536), 3);
    add_background_object(create_tbbluewall7_2788(5312, 2600), 3);
    add_background_object(create_tbsolidblack_2688(5376, 2088), 3);
    add_background_object(create_tbsolidblack_2688(5504, 2088), 3);
    add_background_object(create_tbsolidblack_2688(6144, 2280), 3);
    add_background_object(create_tbsolidblack_2688(6272, 2280), 3);
    add_background_object(create_tbsolidblack_2688(6400, 2280), 3);
    add_background_object(create_tbsolidblack_2688(6528, 2280), 3);
    add_background_object(create_tbsolidblack_2688(5632, 2344), 3);
    add_background_object(create_tbsolidblack_2688(5760, 2344), 3);
    add_background_object(create_tbsolidblack_2688(5120, 3432), 3);
    add_background_object(create_tbsolidblack_2688(5120, 3304), 3);
    add_background_object(create_tbsolidblack_2688(5120, 3176), 3);
    add_background_object(create_tbsolidblack_2688(5248, 3176), 3);
    add_background_object(create_tbsolidblack_2688(5376, 3112), 3);
    add_background_object(create_tbsolidblack_2688(5120, 3560), 3);
    add_background_object(create_tbbluewall9_2789(6784, 2792), 3);
    add_background_object(create_tbsolidblack_2688(6656, 2984), 3);
    add_background_object(create_tbsolidblack_2688(6912, 2984), 3);
    add_background_object(create_tbsolidblack_2688(6848, 2856), 3);
    add_background_object(create_tbbluewall2_2782(6976, 2920), 3);
    add_background_object(create_tbbluewall2_2782(6848, 2792), 3);
    add_background_object(create_tbbluewall6_2784(6720, 2536), 3);
    add_background_object(create_tbbluewall6_2784(6784, 2536), 3);
    add_background_object(create_tbsolidblack_2688(6656, 2408), 3);
    add_background_object(create_tbsolidblack_2688(6656, 2280), 3);
    add_background_object(create_tbbluewall6_2784(6848, 2536), 3);
    add_background_object(create_tbbluewall6_2784(6912, 2536), 3);
    add_background_object(create_tbsolidblack_2688(6784, 2408), 3);
    add_background_object(create_tbsolidblack_2688(6784, 2280), 3);
    add_background_object(create_tbbluewall13_2793(6784, 2920), 3);
    add_background_object(create_tbbluewall2_2782(6720, 2920), 3);
    add_background_object(create_tbconcrete_2840(6592, 2856), 3);
    add_background_object(create_tbbluewall2_2782(6656, 2920), 3);
    add_background_object(create_tbbluewall2_2782(6592, 2920), 3);
    add_background_object(create_tbbluewall10_2790(6528, 2920), 3);
    add_background_object(create_tbbluewall13_2793(6464, 2920), 3);
    add_background_object(create_tbbluewall2_2782(6400, 2920), 3);
    add_background_object(create_tbbluewall2_2782(6336, 2920), 3);
    add_background_object(create_tbbluewall2_2782(6272, 2920), 3);
    add_background_object(create_tbbluewall10_2790(6208, 2920), 3);
    add_background_object(create_tbbluewall4_2783(6208, 2856), 3);
    add_background_object(create_tbbluewall4_2783(6528, 2856), 3);
    add_background_object(create_tbbluewall8_2785(6464, 2856), 3);
    add_background_object(create_tbbluewall8_2785(6784, 2856), 3);
    add_background_object(create_tbconcrete_2840(6656, 2856), 3);
    add_background_object(create_tbconcrete_2840(6720, 2856), 3);
    add_background_object(create_tbconcrete_2840(6272, 2856), 3);
    add_background_object(create_tbconcrete_2840(6336, 2856), 3);
    add_background_object(create_tbconcrete_2840(6400, 2856), 3);
    add_background_object(create_tbbluewall8_2785(5824, 2856), 3);
    add_background_object(create_tbbluewall6_2784(5760, 2536), 3);
    add_background_object(create_tbbluewall6_2784(5824, 2536), 3);
    add_background_object(create_tbbluewall11_2791(5696, 2536), 3);
    add_background_object(create_tbbluewall5_2787(5696, 2600), 3);
    add_background_object(create_tbbluewall14_2794(3200, 2856), 3);
    add_background_object(create_tbbluetube4_2800(3200, 2792), 3);
    add_background_object(create_tbbluetube4_2800(3200, 2728), 3);
    add_background_object(create_tbbluetube4_2800(3200, 2664), 3);
    add_background_object(create_tbbluewall11_2791(2944, 2600), 3);
    add_background_object(create_tbbluewall4_2783(2944, 2664), 3);
    add_background_object(create_tbbluewall4_2783(2944, 2728), 3);
    add_background_object(create_tbbluewall4_2783(2944, 2792), 3);
    add_background_object(create_tbbluewall6_2784(3008, 2600), 3);
    add_background_object(create_tbbluewall4_2783(2944, 2856), 3);
    add_background_object(create_tbbluewall12_2792(4288, 2600), 3);
    add_background_object(create_tbbluewall8_2785(4288, 2664), 3);
    add_background_object(create_tbbluewall8_2785(4288, 2728), 3);
    add_background_object(create_tbbluewall8_2785(4288, 2792), 3);
    add_background_object(create_tbbluewall8_2785(4288, 2856), 3);
    add_background_object(create_tbbluewall6_2784(4032, 2600), 3);
    add_background_object(create_tbbluewall6_2784(4096, 2600), 3);
    add_background_object(create_tbbluewall6_2784(4160, 2600), 3);
    add_background_object(create_tbbluetube4_2800(4032, 2792), 3);
    add_background_object(create_tbbluetube4_2800(4032, 2728), 3);
    add_background_object(create_tbbluewall6_2784(4224, 2600), 3);
    add_background_object(create_tbbluewall2_2782(4224, 2984), 3);
    add_background_object(create_tbbluewall2_2782(4160, 2984), 3);
    add_background_object(create_tbbluewall2_2782(4096, 2984), 3);
    add_background_object(create_tbbluewall13_2793(4288, 2984), 3);
    add_background_object(create_tbbluewall8_2785(4288, 2920), 3);
    add_background_object(create_tbbluewall3_2786(4032, 2920), 3);
    add_background_object(create_tbbluewall10_2790(4032, 2984), 3);
    add_background_object(create_tbconcrete_2840(4096, 2920), 3);
    add_background_object(create_tbconcrete_2840(4160, 2920), 3);
    add_background_object(create_tbconcrete_2840(4224, 2920), 3);
    add_background_object(create_tbbluetube1_2796(3008, 2856), 3);
    add_background_object(create_tbbluetube1_2796(3072, 2856), 3);
    add_background_object(create_tbbluetube1_2796(3136, 2856), 3);
    add_background_object(create_gimmickwaterturbineend_2846(4896, 3368), 3);
    add_background_object(create_gimmickwaterturbineend_2846(4896, 3496), 3);
    add_background_object(create_tbbluewall3_2786(5888, 2792), 3);
    add_background_object(create_tbsolidblack_2688(5888, 2984), 3);
    add_background_object(create_tbbluewall9_2789(6144, 2792), 3);
    add_background_object(create_tbsolidblack_2688(6016, 2984), 3);
    add_background_object(create_tbbluewall6_2784(5888, 2536), 3);
    add_background_object(create_tbbluewall6_2784(5952, 2536), 3);
    add_background_object(create_tbsolidblack_2688(5888, 2408), 3);
    add_background_object(create_tbbluewall6_2784(6016, 2536), 3);
    add_background_object(create_tbbluewall6_2784(6080, 2536), 3);
    add_background_object(create_tbsolidblack_2688(6016, 2408), 3);
    add_background_object(create_tbbluewall6_2784(6144, 2536), 3);
    add_background_object(create_tbsolidblack_2688(5888, 2280), 3);
    add_background_object(create_tbsolidblack_2688(6016, 2280), 3);
    add_background_object(create_tbbluewall13_2793(6144, 2920), 3);
    add_background_object(create_tbbluewall2_2782(6080, 2920), 3);
    add_background_object(create_tbbluewall2_2782(6016, 2920), 3);
    add_background_object(create_tbbluewall2_2782(5952, 2920), 3);
    add_background_object(create_tbbluewall10_2790(5888, 2920), 3);
    add_background_object(create_tbbluewall4_2783(5888, 2856), 3);
    add_background_object(create_tbbluewall8_2785(6144, 2856), 3);
    add_background_object(create_tbconcrete_2840(5952, 2856), 3);
    add_background_object(create_tbconcrete_2840(6016, 2856), 3);
    add_background_object(create_tbconcrete_2840(6080, 2856), 3);
    add_background_object(create_tbsolidblack_2688(6784, 2984), 3);
    add_background_object(create_tbbluewall11_2791(1728, 3176), 3);
    add_background_object(create_tbbluewall6_2784(1792, 3176), 3);
    add_background_object(create_tbbluewall5_2787(1856, 3176), 3);
    add_background_object(create_tbbluewall2_2782(1600, 3112), 3);
    add_background_object(create_tbbluewall2_2782(1664, 3112), 3);
    add_background_object(create_tbbluewall9_2789(2048, 3240), 3);
    add_background_object(create_tbbluewall2_2782(2368, 3240), 3);
    add_background_object(create_tbbluewall2_2782(2304, 3240), 3);
    add_background_object(create_tbbluewall2_2782(2240, 3240), 3);
    add_background_object(create_tbbluewall2_2782(2176, 3240), 3);
    add_background_object(create_tbbluewall2_2782(2112, 3240), 3);
    add_background_object(create_tbbluewall2_2782(2432, 3240), 3);
    add_background_object(create_tbwaterlightback1_2844(1792, 3240), 3);
    add_background_object(create_tbwaterlightback3_2845(1792, 3384), 3);
    add_background_object(create_tbwaterlightback2_2843(1792, 3288), 3);
    add_background_object(create_tbwaterlightback2_2843(1792, 3336), 3);
    add_background_object(create_tbwaterlightback1_2844(1984, 3096), 3);
    add_background_object(create_tbwaterlightback3_2845(1984, 3384), 3);
    add_background_object(create_tbwaterlightback2_2843(1984, 3288), 3);
    add_background_object(create_tbwaterlightback2_2843(1984, 3336), 3);
    add_background_object(create_tbwaterlightback2_2843(1984, 3192), 3);
    add_background_object(create_tbwaterlightback2_2843(1984, 3240), 3);
    add_background_object(create_tbwaterlightback2_2843(1984, 3144), 3);
    add_background_object(create_tbladder_2636(5272, 2632), 3);
    add_background_object(create_tbladder_2636(5272, 2600), 3);
    add_background_object(create_tbladder_2636(5272, 2568), 3);
    add_background_object(create_tbladder_2636(5272, 2536), 3);
    add_background_object(create_tbladder_2636(5272, 2504), 3);
    add_background_object(create_tbladder_2636(5272, 2472), 3);
    add_background_object(create_tbbluewall6_2784(5312, 2344), 3);
    add_background_object(create_tbbluewall9_2789(5312, 2472), 3);
    add_background_object(create_tbbluewall13_2793(5376, 2472), 3);
    add_background_object(create_tbbluewall3_2786(6912, 2792), 3);
    add_background_object(create_tbbluewall10_2790(6912, 2920), 3);
    add_background_object(create_tbbluewall4_2783(6912, 2856), 3);
    add_background_object(create_tbbluewall2_2782(7168, 2920), 3);
    add_background_object(create_tbbluewall2_2782(7104, 2920), 3);
    add_background_object(create_tbbluewall2_2782(7040, 2920), 3);
    add_background_object(create_tbbluewall6_2784(6976, 2536), 3);
    add_background_object(create_tbbluewall6_2784(7040, 2536), 3);
    add_background_object(create_tbsolidblack_2688(6912, 2408), 3);
    add_background_object(create_tbsolidblack_2688(6912, 2280), 3);
    add_background_object(create_tbbluewall6_2784(7104, 2536), 3);
    add_background_object(create_tbsolidblack_2688(7040, 2408), 3);
    add_background_object(create_tbsolidblack_2688(7040, 2280), 3);
    add_background_object(create_tbsolidblack_2688(7040, 2984), 3);
    add_background_object(create_tbbluewall2_2782(7232, 2920), 3);
    add_background_object(create_tbsolidblack_2688(7168, 2984), 3);
    add_background_object(create_tbbluewall2_2782(7296, 2920), 3);
    add_background_object(create_tbbluewall2_2782(7360, 2920), 3);
    add_background_object(create_tbbluewall3_2786(7424, 2920), 3);
    add_background_object(create_tbsolidblack_2688(7296, 2984), 3);
    add_background_object(create_tbsolidblack_2688(7424, 2984), 3);
    add_background_object(create_tbsolidblack_2688(7552, 2984), 3);
    add_background_object(create_tbbluewall10_2790(7424, 2984), 3);
    add_background_object(create_tbbluewall2_2782(7488, 2984), 3);
    add_background_object(create_tbbluewall2_2782(7552, 2984), 3);
    add_background_object(create_tbbluewall13_2793(7616, 2984), 3);
    add_background_object(create_tbsolidblack_2688(5760, 3112), 3);
    add_background_object(create_tbsolidblack_2688(5632, 3112), 3);
    add_background_object(create_tbsolidblack_2688(5504, 3112), 3);
    add_background_object(create_tbsolidblack_2688(6144, 3112), 3);
    add_background_object(create_tbsolidblack_2688(6272, 3112), 3);
    add_background_object(create_tbsolidblack_2688(6400, 3112), 3);
    add_background_object(create_tbsolidblack_2688(6528, 3112), 3);
    add_background_object(create_tbsolidblack_2688(6656, 3112), 3);
    add_background_object(create_tbsolidblack_2688(6912, 3112), 3);
    add_background_object(create_tbsolidblack_2688(5888, 3112), 3);
    add_background_object(create_tbsolidblack_2688(6016, 3112), 3);
    add_background_object(create_tbsolidblack_2688(6784, 3112), 3);
    add_background_object(create_tbsolidblack_2688(7040, 3112), 3);
    add_background_object(create_tbsolidblack_2688(7168, 3112), 3);
    add_background_object(create_tbsolidblack_2688(7296, 3112), 3);
    add_background_object(create_tbsolidblack_2688(7424, 3112), 3);
    add_background_object(create_tbsolidblack_2688(7552, 3112), 3);
    add_background_object(create_tbbluewall2_2782(7744, 2920), 3);
    add_background_object(create_tbbluewall2_2782(7680, 2920), 3);
    add_background_object(create_tbbluewall9_2789(7616, 2920), 3);
    add_background_object(create_tbsolidblack_2688(7168, 2408), 3);
    add_background_object(create_tbsolidblack_2688(7168, 2280), 3);
    add_background_object(create_tbsolidblack_2688(7296, 2408), 3);
    add_background_object(create_tbsolidblack_2688(7296, 2280), 3);
    add_background_object(create_tbbluewall6_2784(7360, 2472), 3);
    add_background_object(create_tbbluewall6_2784(7296, 2472), 3);
    add_background_object(create_tbbluewall6_2784(7232, 2472), 3);
    add_background_object(create_tbbluewall12_2792(7424, 2472), 3);
    add_background_object(create_tbbluewall11_2791(7168, 2472), 3);
    add_background_object(create_tbbluewall5_2787(7168, 2536), 3);
    add_background_object(create_tbbluewall7_2788(7424, 2536), 3);
    add_background_object(create_tbbluewall6_2784(7488, 2536), 3);
    add_background_object(create_tbbluewall6_2784(7552, 2536), 3);
    add_background_object(create_tbsolidblack_2688(7424, 2280), 3);
    add_background_object(create_tbbluewall6_2784(7680, 2664), 3);
    add_background_object(create_tbsolidblack_2688(7616, 2536), 3);
    add_background_object(create_tbsolidblack_2688(7552, 2408), 3);
    add_background_object(create_tbbluewall7_2788(7616, 2664), 3);
    add_background_object(create_tbbluewall12_2792(7616, 2536), 3);
    add_background_object(create_tbbluewall8_2785(7616, 2600), 3);
    add_background_object(create_tbsolidblack_2688(7680, 2408), 3);
    add_background_object(create_tbsolidblack_2688(7744, 2536), 3);
    add_background_object(create_tbbluewall6_2784(7744, 2664), 3);
    add_background_object(create_tbbluewall6_2784(7808, 2664), 3);
    add_background_object(create_tbbluewall3_2786(7872, 2920), 3);
    add_background_object(create_tbbluewall2_2782(7808, 2920), 3);
    add_background_object(create_tbsolidblack_2688(7808, 2408), 3);
    add_background_object(create_tbsolidblack_2688(7872, 2536), 3);
    add_background_object(create_tbbluewall6_2784(7872, 2664), 3);
    add_background_object(create_tbbluewall6_2784(7936, 2664), 3);
    add_background_object(create_tbbluewall4_2783(7872, 3048), 3);
    add_background_object(create_tbbluewall4_2783(7872, 3112), 3);
    add_background_object(create_tbbluewall4_2783(7872, 3176), 3);
    add_background_object(create_tbbluewall10_2790(7872, 3240), 3);
    add_background_object(create_tbbluewall2_2782(8000, 3624), 3);
    add_background_object(create_tbsolidblack_2688(7552, 3240), 3);
    add_background_object(create_tbsolidblack_2688(7424, 3240), 3);
    add_background_object(create_tbsolidblack_2688(7680, 3304), 3);
    add_background_object(create_tbsolidblack_2688(7808, 3304), 3);
    add_background_object(create_tbsolidblack_2688(7552, 3368), 3);
    add_background_object(create_tbsolidblack_2688(7680, 3432), 3);
    add_background_object(create_tbsolidblack_2688(7808, 3432), 3);
    add_background_object(create_tbsolidblack_2688(7424, 3368), 3);
    add_background_object(create_tbbluewall2_2782(8128, 3240), 3);
    add_background_object(create_tbbluewall2_2782(8192, 3240), 3);
    add_background_object(create_tbbluewall2_2782(8256, 3240), 3);
    add_background_object(create_tbsolidblack_2688(8064, 3304), 3);
    add_background_object(create_tbsolidblack_2688(8192, 3304), 3);
    add_background_object(create_tbbluewall2_2782(8320, 3240), 3);
    add_background_object(create_tbbluewall2_2782(8384, 3240), 3);
    add_background_object(create_tbbluewall2_2782(8448, 3240), 3);
    add_background_object(create_tbbluewall2_2782(8512, 3240), 3);
    add_background_object(create_tbsolidblack_2688(8320, 3304), 3);
    add_background_object(create_tbsolidblack_2688(8448, 3304), 3);
    add_background_object(create_gimmickwaterturbineend_2846(9248, 2984), 3);
    add_background_object(create_gimmickwaterturbineend_2846(9248, 2920), 3);
    add_background_object(create_tbbluetube2_2798(9280, 2920), 3);
    add_background_object(create_tbbluetube2_2798(9280, 2984), 3);
    add_background_object(create_tbinvertedloop2_2795(9216, 2792), 3);
    add_background_object(create_tbinvertedloop4_2780(9088, 2728), 3);
    add_background_object(create_tbbluewall2_2782(8576, 3240), 3);
    add_background_object(create_tbbluewall2_2782(8640, 3240), 3);
    add_background_object(create_tbsolidblack_2688(8576, 3304), 3);
    add_background_object(create_tbsolidblack_2688(8704, 3432), 3);
    add_background_object(create_tbsolidblack_2688(8704, 3560), 3);
    add_background_object(create_tbbluewall2_2782(8768, 3368), 3);
    add_background_object(create_tbsolidblack_2688(8832, 3560), 3);
    add_background_object(create_tbsolidblack_2688(8832, 3688), 3);
    add_background_object(create_tbbluewall2_2782(8896, 3496), 3);
    add_background_object(create_tbbluewall3_2786(8704, 3240), 3);
    add_background_object(create_tbbluewall10_2790(8704, 3368), 3);
    add_background_object(create_tbbluewall4_2783(8704, 3304), 3);
    add_background_object(create_tbsolidblack_2688(8960, 3560), 3);
    add_background_object(create_tbsolidblack_2688(8960, 3688), 3);
    add_background_object(create_tbbluewall2_2782(8960, 3496), 3);
    add_background_object(create_tbbluewall2_2782(9024, 3496), 3);
    add_background_object(create_tbsolidblack_2688(9088, 3560), 3);
    add_background_object(create_tbsolidblack_2688(9088, 3688), 3);
    add_background_object(create_tbbluewall2_2782(9088, 3496), 3);
    add_background_object(create_tbbluewall2_2782(9152, 3496), 3);
    add_background_object(create_tbsolidblack_2688(9216, 3560), 3);
    add_background_object(create_tbsolidblack_2688(9216, 3688), 3);
    add_background_object(create_tbbluewall2_2782(9216, 3496), 3);
    add_background_object(create_tbbluewall2_2782(9280, 3496), 3);
    add_background_object(create_tbsolidblack_2688(8704, 3688), 3);
    add_background_object(create_tbbluewall3_2786(8832, 3368), 3);
    add_background_object(create_tbbluewall10_2790(8832, 3496), 3);
    add_background_object(create_tbbluewall4_2783(8832, 3432), 3);
    add_background_object(create_tbsolidblack_2688(7936, 2408), 3);
    add_background_object(create_tbsolidblack_2688(8000, 2536), 3);
    add_background_object(create_tbsolidblack_2688(8064, 2408), 3);
    add_background_object(create_tbsolidblack_2688(8128, 2536), 3);
    add_background_object(create_tbsolidblack_2688(8192, 2408), 3);
    add_background_object(create_tbsolidblack_2688(8256, 2536), 3);
    add_background_object(create_tbbluewall6_2784(8320, 2664), 3);
    add_background_object(create_tbsolidblack_2688(8320, 2408), 3);
    add_background_object(create_tbsolidblack_2688(8384, 2536), 3);
    add_background_object(create_tbbluewall6_2784(8384, 2664), 3);
    add_background_object(create_tbsolidblack_2688(8448, 2408), 3);
    add_background_object(create_tbsolidblack_2688(8512, 2536), 3);
    add_background_object(create_tbsolidblack_2688(8576, 2408), 3);
    add_background_object(create_tbsolidblack_2688(8640, 2536), 3);
    add_background_object(create_tbsolidblack_2688(8704, 2408), 3);
    add_background_object(create_tbsolidblack_2688(8768, 2536), 3);
    add_background_object(create_tbbluewall6_2784(8768, 2664), 3);
    add_background_object(create_tbbluewall6_2784(8832, 2664), 3);
    add_background_object(create_tbsolidblack_2688(8832, 2408), 3);
    add_background_object(create_tbsolidblack_2688(8896, 2536), 3);
    add_background_object(create_tbbluewall6_2784(8896, 2664), 3);
    add_background_object(create_tbbluewall6_2784(8960, 2664), 3);
    add_background_object(create_tbsolidblack_2688(8960, 2408), 3);
    add_background_object(create_tbsolidblack_2688(9024, 2536), 3);
    add_background_object(create_tbbluewall6_2784(9024, 2664), 3);
    add_background_object(create_tbbluewall6_2784(9088, 2664), 3);
    add_background_object(create_tbbluetube2_2798(9280, 3048), 3);
    add_background_object(create_tbsolidblack_2688(9344, 3560), 3);
    add_background_object(create_tbsolidblack_2688(9344, 3688), 3);
    add_background_object(create_tbbluewall2_2782(9344, 3496), 3);
    add_background_object(create_tbbluewall2_2782(9408, 3496), 3);
    add_background_object(create_tbsolidblack_2688(9472, 3560), 3);
    add_background_object(create_tbsolidblack_2688(9472, 3688), 3);
    add_background_object(create_tbbluewall2_2782(9472, 3496), 3);
    add_background_object(create_tbbluewall2_2782(9536, 3496), 3);
    add_background_object(create_tbbluewall6_2784(8640, 2600), 3);
    add_background_object(create_tbbluewall6_2784(8576, 2600), 3);
    add_background_object(create_tbbluewall6_2784(8512, 2600), 3);
    add_background_object(create_tbbluewall11_2791(8448, 2600), 3);
    add_background_object(create_tbbluewall12_2792(8704, 2600), 3);
    add_background_object(create_tbbluewall5_2787(8448, 2664), 3);
    add_background_object(create_tbbluewall7_2788(8704, 2664), 3);
    add_background_object(create_tbbluewall6_2784(8192, 2600), 3);
    add_background_object(create_tbbluewall6_2784(8128, 2600), 3);
    add_background_object(create_tbbluewall6_2784(8064, 2600), 3);
    add_background_object(create_tbbluewall11_2791(8000, 2600), 3);
    add_background_object(create_tbbluewall12_2792(8256, 2600), 3);
    add_background_object(create_tbbluewall5_2787(8000, 2664), 3);
    add_background_object(create_tbbluewall7_2788(8256, 2664), 3);
    add_background_object(create_gimmickwaterturbineend_2846(10208, 3432), 3);
    add_background_object(create_gimmickwaterturbineend_2846(10208, 3368), 3);
    add_background_object(create_tbsolidblack_2688(9600, 3560), 3);
    add_background_object(create_tbsolidblack_2688(9600, 3688), 3);
    add_background_object(create_tbbluewall2_2782(9600, 3496), 3);
    add_background_object(create_tbbluewall2_2782(9664, 3496), 3);
    add_background_object(create_tbsolidblack_2688(9728, 3560), 3);
    add_background_object(create_tbsolidblack_2688(9728, 3688), 3);
    add_background_object(create_tbbluewall2_2782(9728, 3496), 3);
    add_background_object(create_tbbluewall2_2782(9792, 3496), 3);
    add_background_object(create_tbsolidblack_2688(9856, 3560), 3);
    add_background_object(create_tbsolidblack_2688(9856, 3688), 3);
    add_background_object(create_tbbluewall2_2782(9856, 3496), 3);
    add_background_object(create_tbbluewall2_2782(9920, 3496), 3);
    add_background_object(create_tbsolidblack_2688(9984, 3560), 3);
    add_background_object(create_tbsolidblack_2688(9984, 3688), 3);
    add_background_object(create_tbbluewall2_2782(9984, 3496), 3);
    add_background_object(create_tbbluewall2_2782(10048, 3496), 3);
    add_background_object(create_tbsolidblack_2688(10112, 3560), 3);
    add_background_object(create_tbsolidblack_2688(10112, 3688), 3);
    add_background_object(create_tbbluewall2_2782(10112, 3496), 3);
    add_background_object(create_tbbluewall2_2782(10176, 3496), 3);
    add_background_object(create_tbsolidblack_2688(10240, 3560), 3);
    add_background_object(create_tbsolidblack_2688(10240, 3688), 3);
    add_background_object(create_tbsolidblack_2688(10368, 3560), 3);
    add_background_object(create_tbsolidblack_2688(10368, 3688), 3);
    add_background_object(create_tbsolidblack_2688(10304, 3304), 3);
    add_background_object(create_tbsolidblack_2688(10304, 3432), 3);
    add_background_object(create_tbbluewall13_2793(10240, 3496), 3);
    add_background_object(create_tbsolidblack_2688(10432, 3304), 3);
    add_background_object(create_tbsolidblack_2688(10432, 3432), 3);
    add_background_object(create_tbbluewall8_2785(10240, 3432), 3);
    add_background_object(create_tbbluewall8_2785(10240, 3368), 3);
    add_background_object(create_tbbluewall12_2792(10240, 3304), 3);
    add_background_object(create_tbsolidblack_2688(10304, 3176), 3);
    add_background_object(create_tbbluewall8_2785(10240, 3176), 3);
    add_background_object(create_tbsolidblack_2688(10304, 3048), 3);
    add_background_object(create_tbbluewall8_2785(10240, 3112), 3);
    add_background_object(create_tbbluewall8_2785(10240, 3048), 3);
    add_background_object(create_tbbluetube4_2800(10112, 3368), 3);
    add_background_object(create_tbbluetube4_2800(10112, 3176), 3);
    add_background_object(create_tbbluetube4_2800(10112, 3112), 3);
    add_background_object(create_tbbluetube4_2800(10112, 3048), 3);
    add_background_object(create_tbsolidblack_2688(10304, 2920), 3);
    add_background_object(create_tbbluewall8_2785(10240, 2984), 3);
    add_background_object(create_tbbluewall8_2785(10240, 2920), 3);
    add_background_object(create_tbbluetube4_2800(10112, 2984), 3);
    add_background_object(create_tbbluetube4_2800(10112, 2920), 3);
    add_background_object(create_tbbluetube1_2796(9600, 3112), 3);
    add_background_object(create_tbbluetube1_2796(9664, 3112), 3);
    add_background_object(create_tbbluetube1_2796(9728, 3112), 3);
    add_background_object(create_tbbluetube1_2796(9792, 3112), 3);
    add_background_object(create_tbbluetube4_2800(9920, 2984), 3);
    add_background_object(create_tbbluetube4_2800(9920, 2920), 3);
    add_background_object(create_tbinvertedloop1_2781(10112, 2728), 3);
    add_background_object(create_tbbluewall9_2789(10240, 2728), 3);
    add_background_object(create_tbbluetube4_2800(10112, 2856), 3);
    add_background_object(create_tbbluewall2_2782(10304, 2728), 3);
    add_background_object(create_tbbluewall2_2782(10368, 2728), 3);
    add_background_object(create_tbbluewall2_2782(10432, 2728), 3);
    add_background_object(create_tbbluetube4_2800(9920, 2856), 3);
    add_background_object(create_tbbluetube4_2800(9920, 2792), 3);
    add_background_object(create_tbbluetube1_2796(10048, 2600), 3);
    add_background_object(create_tbbluetube1_2796(10112, 2600), 3);
    add_background_object(create_tbbluetube4_2800(9920, 2728), 3);
    add_background_object(create_tbbluewall3_2786(10496, 2728), 3);
    add_background_object(create_tbbluewall10_2790(10496, 2792), 3);
    add_background_object(create_tbbluewall2_2782(10560, 2792), 3);
    add_background_object(create_tbbluewall2_2782(10624, 2792), 3);
    add_background_object(create_tbsolidblack_2688(10496, 2856), 3);
    add_background_object(create_tbsolidblack_2688(10496, 2984), 3);
    add_background_object(create_tbsolidblack_2688(10624, 2856), 3);
    add_background_object(create_tbsolidblack_2688(10624, 2984), 3);
    add_background_object(create_tbbluewall2_2782(10688, 2792), 3);
    add_background_object(create_tbbluewall2_2782(10752, 2792), 3);
    add_background_object(create_tbsolidblack_2688(10752, 2856), 3);
    add_background_object(create_tbsolidblack_2688(10752, 2984), 3);
    add_background_object(create_tbbluewall2_2782(10816, 2792), 3);
    add_background_object(create_tbsolidblack_2688(10880, 2856), 3);
    add_background_object(create_tbsolidblack_2688(10880, 2984), 3);
    add_background_object(create_tbbluewall13_2793(10880, 2792), 3);
    add_background_object(create_tbbluewall8_2785(10880, 2728), 3);
    add_background_object(create_tbbluewall9_2789(10880, 2664), 3);
    add_background_object(create_tbbluewall3_2786(10944, 2664), 3);
    add_background_object(create_tbbluewall10_2790(10944, 2728), 3);
    add_background_object(create_tbbluewall2_2782(11008, 2728), 3);
    add_background_object(create_tbbluewall2_2782(11072, 2728), 3);
    add_background_object(create_tbsolidblack_2688(11008, 2792), 3);
    add_background_object(create_tbsolidblack_2688(11008, 2920), 3);
    add_background_object(create_tbsolidblack_2688(11136, 2792), 3);
    add_background_object(create_tbsolidblack_2688(11136, 2920), 3);
    add_background_object(create_tbbluewall2_2782(11136, 2728), 3);
    add_background_object(create_tbbluewall2_2782(11200, 2728), 3);
    add_background_object(create_tbsolidblack_2688(11264, 2792), 3);
    add_background_object(create_tbsolidblack_2688(11264, 2920), 3);
    add_background_object(create_tbbluewall2_2782(11264, 2728), 3);
    add_background_object(create_tbbluewall13_2793(11328, 2728), 3);
    add_background_object(create_tbbluewall8_2785(11328, 2664), 3);
    add_background_object(create_tbbluewall9_2789(11328, 2600), 3);
    add_background_object(create_tbsolidblack_2688(9088, 2408), 3);
    add_background_object(create_tbsolidblack_2688(9152, 2536), 3);
    add_background_object(create_tbbluewall6_2784(9152, 2664), 3);
    add_background_object(create_tbbluewall6_2784(9216, 2664), 3);
    add_background_object(create_tbsolidblack_2688(9216, 2408), 3);
    add_background_object(create_tbsolidblack_2688(9280, 2536), 3);
    add_background_object(create_tbbluewall6_2784(9280, 2664), 3);
    add_background_object(create_tbbluewall6_2784(9344, 2664), 3);
    add_background_object(create_tbsolidblack_2688(9344, 2408), 3);
    add_background_object(create_tbsolidblack_2688(9408, 2536), 3);
    add_background_object(create_tbsolidblack_2688(9472, 2408), 3);
    add_background_object(create_tbsolidblack_2688(9536, 2536), 3);
    add_background_object(create_tbbluewall6_2784(9536, 2664), 3);
    add_background_object(create_tbbluewall6_2784(9600, 2664), 3);
    add_background_object(create_tbbluewall5_2787(9664, 2664), 3);
    add_background_object(create_tbbluewall4_2783(9664, 2600), 3);
    add_background_object(create_tbbluewall4_2783(9664, 2536), 3);
    add_background_object(create_tbbluewall4_2783(9664, 2472), 3);
    add_background_object(create_tbbluewall11_2791(9664, 2408), 3);
    add_background_object(create_tbsolidblack_2688(9600, 2280), 3);
    add_background_object(create_tbsolidblack_2688(9472, 2280), 3);
    add_background_object(create_tbsolidblack_2688(9344, 2280), 3);
    add_background_object(create_tbsolidblack_2688(9728, 2280), 3);
    add_background_object(create_tbbluewall6_2784(9728, 2408), 3);
    add_background_object(create_tbbluewall6_2784(9792, 2408), 3);
    add_background_object(create_tbsolidblack_2688(9856, 2280), 3);
    add_background_object(create_tbbluewall6_2784(9856, 2408), 3);
    add_background_object(create_tbbluewall6_2784(9920, 2408), 3);
    add_background_object(create_tbbluewall6_2784(9984, 2408), 3);
    add_background_object(create_tbsolidblack_2688(10496, 2024), 3);
    add_background_object(create_tbbluewall6_2784(10240, 2408), 3);
    add_background_object(create_tbbluewall6_2784(10368, 2152), 3);
    add_background_object(create_tbbluewall6_2784(10560, 2408), 3);
    add_background_object(create_tbsolidblack_2688(10624, 2280), 3);
    add_background_object(create_tbbluewall6_2784(10624, 2408), 3);
    add_background_object(create_tbbluewall6_2784(10688, 2408), 3);
    add_background_object(create_tbsolidblack_2688(10752, 2280), 3);
    add_background_object(create_tbbluewall6_2784(10752, 2408), 3);
    add_background_object(create_tbbluewall6_2784(11136, 2408), 3);
    add_background_object(create_tbbluewall6_2784(11200, 2408), 3);
    add_background_object(create_tbbluewall6_2784(11264, 2408), 3);
    add_background_object(create_tbbluewall6_2784(11328, 2408), 3);
    add_background_object(create_tbsolidblack_2688(11392, 2280), 3);
    add_background_object(create_tbbluewall6_2784(11392, 2408), 3);
    add_background_object(create_tbbluewall6_2784(11456, 2408), 3);
    add_background_object(create_tbsolidblack_2688(11520, 2280), 3);
    add_background_object(create_tbbluewall6_2784(11520, 2408), 3);
    add_background_object(create_tbbluewall6_2784(11584, 2408), 3);
    add_background_object(create_tbbluewall3_2786(11392, 2600), 3);
    add_background_object(create_tbbluewall4_2783(11392, 2664), 3);
    add_background_object(create_tbbluewall10_2790(11392, 2728), 3);
    add_background_object(create_tbsolidblack_2688(11392, 2792), 3);
    add_background_object(create_tbbluewall2_2782(11456, 2728), 3);
    add_background_object(create_tbbluewall2_2782(11520, 2728), 3);
    add_background_object(create_tbbluewall2_2782(11584, 2728), 3);
    add_background_object(create_tbsolidblack_2688(11520, 2792), 3);
    add_background_object(create_tbsolidblack_2688(11648, 2280), 3);
    add_background_object(create_tbbluewall6_2784(11648, 2408), 3);
    add_background_object(create_tbbluewall2_2782(11648, 2728), 3);
    add_background_object(create_tbbluewall2_2782(11712, 2728), 3);
    add_background_object(create_tbsolidblack_2688(11648, 2792), 3);
    add_background_object(create_tbsolidblack_2688(11392, 2920), 3);
    add_background_object(create_tbsolidblack_2688(11520, 2920), 3);
    add_background_object(create_tbsolidblack_2688(11648, 2920), 3);
    add_background_object(create_tbbluetube1_2796(10176, 2600), 3);
    add_background_object(create_tbbluewall14_2794(832, 2216), 3);
    add_background_object(create_tbbluewall14_2794(896, 2216), 3);
    add_background_object(create_tbbluewall14_2794(10240, 2600), 3);
    add_background_object(create_tbbluewall3_2786(384, 2280), 3);
    add_background_object(create_tbbluewall2_2782(192, 2280), 3);
    add_background_object(create_tbbluewall2_2782(128, 2280), 3);
    add_background_object(create_tbbluewall2_2782(320, 2280), 3);
    add_background_object(create_tbbluewall2_2782(256, 2280), 3);
    add_background_object(create_tbbluewall10_2790(64, 2280), 3);
    add_background_object(create_tbbluewall4_2783(64, 2216), 3);
    add_background_object(create_tbbluewall14_2794(192, 2216), 3);
    add_background_object(create_tbbluewall14_2794(256, 2216), 3);
    add_background_object(create_tbbluewall14_2794(320, 2216), 3);
    add_background_object(create_tbbluewall14_2794(384, 2216), 3);
    add_background_object(create_tbbluewall14_2794(128, 2216), 3);
    add_background_object(create_tbbluewall7_2788(960, 1768), 3);
    add_background_object(create_tbbluewall5_2787(1088, 1768), 3);
    add_background_object(create_tbbluewall9_2789(960, 1896), 3);
    add_background_object(create_tbbluewall3_2786(1088, 1896), 3);
    add_background_object(create_tbbluewall2_2782(1024, 1896), 3);
    add_background_object(create_tbbluewall6_2784(1024, 1768), 3);
    add_background_object(create_tbbluetube3_2797(960, 1832), 3);
    add_background_object(create_tbbluetube3_2797(1024, 1832), 3);
    add_background_object(create_tbbluetube3_2797(1088, 1832), 3);
    add_background_object(create_tbbluewall5_2787(768, 1576), 3);
    add_background_object(create_tbbluewall7_2788(1280, 1576), 3);
    add_background_object(create_tbbluewall12_2792(1344, 1576), 3);
    add_background_object(create_tbbluewall11_2791(704, 1576), 3);
    add_background_object(create_tbbluewall3_2786(768, 1704), 3);
    add_background_object(create_tbbluewall9_2789(1280, 1704), 3);
    add_background_object(create_tbbluewall10_2790(704, 1704), 3);
    add_background_object(create_tbbluewall13_2793(1344, 1704), 3);
    add_background_object(create_tbbluetube3_2797(768, 1640), 3);
    add_background_object(create_tbbluetube3_2797(1280, 1640), 3);
    add_background_object(create_tbbluetube3_2797(6976, 2792), 3);
    add_background_object(create_tbbluetube3_2797(6976, 2856), 3);
    add_background_object(create_tbbluewall11_2791(10496, 2408), 3);
    add_background_object(create_tbbluewall12_2792(10560, 2152), 3);
    add_background_object(create_tbbluewall4_2783(10496, 2472), 3);
    add_background_object(create_tbbluewall8_2785(10560, 2216), 3);
    add_background_object(create_tbbluewall5_2787(10496, 2536), 3);
    add_background_object(create_tbbluewall7_2788(10432, 2536), 3);
    add_background_object(create_tbsolidblack_2688(10624, 2024), 3);
    add_background_object(create_tbsolidblack_2688(10624, 2152), 3);
    add_background_object(create_tbsolidblack_2688(10240, 2024), 3);
    add_background_object(create_tbsolidblack_2688(10368, 2024), 3);
    add_background_object(create_tbbluewall8_2785(10560, 2280), 3);
    add_background_object(create_tbbluewall8_2785(10432, 2408), 3);
    add_background_object(create_tbbluewall8_2785(10432, 2472), 3);
    add_background_object(create_tbsolidblack_2688(9984, 2024), 3);
    add_background_object(create_tbsolidblack_2688(10112, 2024), 3);
    add_background_object(create_tbsolidblack_2688(10496, 1896), 3);
    add_background_object(create_tbsolidblack_2688(10624, 1896), 3);
    add_background_object(create_tbsolidblack_2688(10240, 1896), 3);
    add_background_object(create_tbsolidblack_2688(10368, 1896), 3);
    add_background_object(create_tbsolidblack_2688(9984, 1896), 3);
    add_background_object(create_tbsolidblack_2688(10112, 1896), 3);
    add_background_object(create_tbbluewall5_2787(10304, 2408), 3);
    add_background_object(create_tbbluewall6_2784(10304, 2152), 3);
    add_background_object(create_tbbluewall11_2791(9984, 2152), 3);
    add_background_object(create_tbbluewall4_2783(9984, 2216), 3);
    add_background_object(create_tbbluewall4_2783(9984, 2280), 3);
    add_background_object(create_tbbluewall10_2790(9984, 2344), 3);
    add_background_object(create_tbbluewall3_2786(10304, 2344), 3);
    add_background_object(create_tbladder_2636(10392, 2344), 3);
    add_background_object(create_tbladder_2636(10392, 2376), 3);
    add_background_object(create_tbladder_2636(10392, 2408), 3);
    add_background_object(create_tbladder_2636(10392, 2440), 3);
    add_background_object(create_tbladder_2636(10392, 2472), 3);
    add_background_object(create_tbladder_2636(10392, 2504), 3);
    add_background_object(create_tbladder_2636(10392, 2536), 3);
    add_background_object(create_tbladder_2636(10392, 2568), 3);
    add_background_object(create_tbladder_2636(10392, 2600), 3);
    add_background_object(create_tbsolidblack_2688(9728, 2024), 3);
    add_background_object(create_tbsolidblack_2688(9856, 2024), 3);
    add_background_object(create_tbsolidblack_2688(9728, 1896), 3);
    add_background_object(create_tbsolidblack_2688(9856, 1896), 3);
    add_background_object(create_tbsolidblack_2688(9728, 2152), 3);
    add_background_object(create_tbsolidblack_2688(9856, 2152), 3);
    add_background_object(create_tbbluewall6_2784(10240, 2152), 3);
    add_background_object(create_tbbluewall6_2784(10176, 2152), 3);
    add_background_object(create_tbbluewall6_2784(10112, 2152), 3);
    add_background_object(create_tbbluewall6_2784(10048, 2152), 3);
    add_background_object(create_tbbluewall2_2782(10240, 2344), 3);
    add_background_object(create_tbbluewall9_2789(10176, 2344), 3);
    add_background_object(create_tbbluewall7_2788(10176, 2408), 3);
    add_background_object(create_tbbluewall5_2787(10048, 2408), 3);
    add_background_object(create_tbbluewall3_2786(10048, 2344), 3);
    add_background_object(create_tbbluewall6_2784(10496, 2152), 3);
    add_background_object(create_tbbluewall6_2784(10432, 2152), 3);
    add_background_object(create_tbbluewall2_2782(10496, 2344), 3);
    add_background_object(create_tbbluewall9_2789(10432, 2344), 3);
    add_background_object(create_tbbluewall13_2793(10560, 2344), 3);
    add_background_object(create_tbbluewall5_2787(10816, 2408), 3);
    add_background_object(create_tbbluewall4_2783(10816, 2344), 3);
    add_background_object(create_tbbluewall4_2783(10816, 2280), 3);
    add_background_object(create_tbsolidblack_2688(10752, 2152), 3);
    add_background_object(create_tbbluewall4_2783(10816, 2216), 3);
    add_background_object(create_tbbluewall4_2783(10816, 2152), 3);
    add_background_object(create_tbbluewall7_2788(11072, 2408), 3);
    add_background_object(create_tbbluewall9_2789(11072, 2216), 3);
    add_background_object(create_tbbluewall2_2782(11136, 2216), 3);
    add_background_object(create_tbbluewall2_2782(11200, 2216), 3);
    add_background_object(create_tbbluewall2_2782(11264, 2216), 3);
    add_background_object(create_tbbluewall1_2766(11072, 2024), 3);
    add_background_object(create_tbbluewall1_2766(11200, 2024), 3);
    add_background_object(create_tbsolidblack_2688(10752, 2024), 3);
    add_background_object(create_tbbluewall4_2783(10816, 2088), 3);
    add_background_object(create_tbbluewall4_2783(10816, 2024), 3);
    add_background_object(create_tbsolidblack_2688(10624, 1768), 3);
    add_background_object(create_tbsolidblack_2688(10752, 1896), 3);
    add_background_object(create_tbsolidblack_2688(10752, 1768), 3);
    add_background_object(create_tbsolidblack_2688(10880, 1832), 3);
    add_background_object(create_tbsolidblack_2688(10880, 1704), 3);
    add_background_object(create_tbsolidblack_2688(11008, 1832), 3);
    add_background_object(create_tbsolidblack_2688(11008, 1704), 3);
    add_background_object(create_tbsolidblack_2688(11136, 1832), 3);
    add_background_object(create_tbsolidblack_2688(11136, 1704), 3);
    add_background_object(create_tbsolidblack_2688(11264, 1832), 3);
    add_background_object(create_tbsolidblack_2688(11264, 1704), 3);
    add_background_object(create_tbbluewall11_2791(10816, 1960), 3);
    add_background_object(create_tbbluewall6_2784(10880, 1960), 3);
    add_background_object(create_tbbluewall6_2784(10944, 1960), 3);
    add_background_object(create_tbbluewall6_2784(11008, 1960), 3);
    add_background_object(create_tbbluewall6_2784(11072, 1960), 3);
    add_background_object(create_tbbluewall6_2784(11136, 1960), 3);
    add_background_object(create_tbbluewall6_2784(11200, 1960), 3);
    add_background_object(create_tbbluewall6_2784(11264, 1960), 3);
    add_background_object(create_tbbluewall6_2784(11328, 1960), 3);
    add_background_object(create_tbsolidblack_2688(11392, 1832), 3);
    add_background_object(create_tbsolidblack_2688(11392, 1704), 3);
    add_background_object(create_tbbluewall6_2784(11392, 1960), 3);
    add_background_object(create_tbbluewall6_2784(11456, 1960), 3);
    add_background_object(create_tbbluewall2_2782(11328, 2216), 3);
    add_background_object(create_tbbluewall2_2782(11456, 2216), 3);
    add_background_object(create_tbbluewall2_2782(11520, 2216), 3);
    add_background_object(create_tbbluewall2_2782(11584, 2216), 3);
    add_background_object(create_tbsolidblack_2688(11520, 1832), 3);
    add_background_object(create_tbsolidblack_2688(11520, 1704), 3);
    add_background_object(create_tbbluewall6_2784(11520, 1960), 3);
    add_background_object(create_tbbluewall6_2784(11584, 1960), 3);
    add_background_object(create_tbbluewall2_2782(11392, 2216), 3);
    add_background_object(create_tbsolidblack_2688(11136, 2280), 3);
    add_background_object(create_tbsolidblack_2688(11264, 2280), 3);
    add_background_object(create_tbbluewall8_2785(11072, 2280), 3);
    add_background_object(create_tbbluewall8_2785(11072, 2344), 3);
    add_background_object(create_tbbluewall14_2794(10880, 2184), 3);
    add_background_object(create_tbladder_2636(10944, 2184), 3);
    add_background_object(create_tbladder_2636(10944, 2216), 3);
    add_background_object(create_tbladder_2636(10944, 2248), 3);
    add_background_object(create_tbladder_2636(10944, 2280), 3);
    add_background_object(create_tbladder_2636(10944, 2312), 3);
    add_background_object(create_tbladder_2636(10944, 2344), 3);
    add_background_object(create_tbladder_2636(10944, 2376), 3);
    add_background_object(create_tbladder_2636(10944, 2408), 3);
    add_background_object(create_tbladder_2636(10944, 2440), 3);
    add_background_object(create_tbladder_2636(10944, 2472), 3);
    add_background_object(create_tbbluewall7_2788(10112, 3304), 3);
    add_background_object(create_tbbluewall9_2789(10112, 3240), 3);
    add_background_object(create_tbbluewall13_2793(10240, 3240), 3);
    add_background_object(create_tbbluewall12_2792(10240, 2856), 3);
    add_background_object(create_tbbluewall7_2788(10176, 2856), 3);
    add_background_object(create_tbsolidblack_2688(10432, 3048), 3);
    add_background_object(create_tbsolidblack_2688(10432, 2920), 3);
    add_background_object(create_tbsolidblack_2688(10432, 3176), 3);
    add_background_object(create_tbbluewall13_2793(10240, 2792), 3);
    add_background_object(create_tbbluewall9_2789(10176, 2792), 3);
    add_background_object(create_tbbluewall2_2782(10176, 3240), 3);
    add_background_object(create_tbbluewall6_2784(10176, 3304), 3);
    add_background_object(create_tbbluewall3_2786(11776, 2728), 3);
    add_background_object(create_tbbluewall4_2783(11776, 2792), 3);
    add_background_object(create_tbsolidblack_2688(11776, 2984), 3);
    add_background_object(create_tbsolidblack_2688(11904, 2984), 3);
    add_background_object(create_tbsolidblack_2688(12032, 2984), 3);
    add_background_object(create_tbbluewall10_2790(11776, 2920), 3);
    add_background_object(create_tbbluewall2_2782(11840, 2920), 3);
    add_background_object(create_tbbluewall2_2782(11904, 2920), 3);
    add_background_object(create_tbbluewall2_2782(11968, 2920), 3);
    add_background_object(create_tbbluewall2_2782(12032, 2920), 3);
    add_background_object(create_tbbluewall2_2782(12096, 2920), 3);
    add_background_object(create_tbsolidblack_2688(11648, 3048), 3);
    add_background_object(create_tbbluewall4_2783(11776, 2856), 3);
    add_background_object(create_tbbluetube2_2798(11840, 2856), 3);
    add_background_object(create_tbbluetube2_2798(11904, 2856), 3);
    add_background_object(create_tbbluetube2_2798(11968, 2856), 3);
    add_background_object(create_tbbluetube2_2798(12032, 2856), 3);
    add_background_object(create_tbbluetube2_2798(12096, 2856), 3);
    add_background_object(create_tbbluewall9_2789(11648, 2152), 3);
    add_background_object(create_tbbluewall3_2786(11712, 2152), 3);
    add_background_object(create_tbbluewall13_2793(11648, 2216), 3);
    add_background_object(create_tbbluewall10_2790(11712, 2216), 3);
    add_background_object(create_tbsolidblack_2688(11648, 1832), 3);
    add_background_object(create_tbsolidblack_2688(11648, 1704), 3);
    add_background_object(create_tbbluewall6_2784(11648, 1960), 3);
    add_background_object(create_tbbluewall6_2784(11712, 1960), 3);
    add_background_object(create_tbsolidblack_2688(11776, 1832), 3);
    add_background_object(create_tbsolidblack_2688(11776, 1704), 3);
    add_background_object(create_tbbluewall6_2784(11776, 1960), 3);
    add_background_object(create_tbbluewall6_2784(11840, 1960), 3);
    add_background_object(create_tbbluewall3_2786(11776, 2216), 3);
    add_background_object(create_tbbluewall4_2783(11776, 2280), 3);
    add_background_object(create_tbbluewall4_2783(11776, 2344), 3);
    add_background_object(create_tbbluewall5_2787(11776, 2536), 3);
    add_background_object(create_tbbluetube2_2798(12160, 2856), 3);
    add_background_object(create_tbbluetube2_2798(12224, 2856), 3);
    add_background_object(create_tbbluetube2_2798(12288, 2856), 3);
    add_background_object(create_tbsolidblack_2688(12160, 2984), 3);
    add_background_object(create_tbbluewall2_2782(12160, 2920), 3);
    add_background_object(create_tbbluewall2_2782(12224, 2920), 3);
    add_background_object(create_tbsolidblack_2688(12288, 2984), 3);
    add_background_object(create_tbbluewall2_2782(12288, 2920), 3);
    add_background_object(create_tbbluewall13_2793(12608, 2920), 3);
    add_background_object(create_tbbluewall8_2785(12608, 2856), 3);
    add_background_object(create_tbbluewall2_2782(12352, 2920), 3);
    add_background_object(create_tbsolidblack_2688(12416, 2984), 3);
    add_background_object(create_tbbluewall2_2782(12416, 2920), 3);
    add_background_object(create_tbbluewall2_2782(12480, 2920), 3);
    add_background_object(create_tbsolidblack_2688(12544, 2984), 3);
    add_background_object(create_tbbluewall2_2782(12544, 2920), 3);
    add_background_object(create_tbbluetube2_2798(12352, 2856), 3);
    add_background_object(create_tbbluetube2_2798(12416, 2856), 3);
    add_background_object(create_tbbluetube2_2798(12480, 2856), 3);
    add_background_object(create_tbbluetube2_2798(12544, 2856), 3);
    add_background_object(create_tbbluewall9_2789(12608, 2792), 3);
    add_background_object(create_tbbluewall2_2782(12672, 2792), 3);
    add_background_object(create_tbsolidblack_2688(12672, 2984), 3);
    add_background_object(create_tbladder_2636(10944, 2504), 3);
    add_background_object(create_tbsolidblack_2688(11904, 1832), 3);
    add_background_object(create_tbbluewall6_2784(11904, 1960), 3);
    add_background_object(create_tbbluewall6_2784(11968, 1960), 3);
    add_background_object(create_tbsolidblack_2688(12032, 1832), 3);
    add_background_object(create_tbbluewall6_2784(12032, 1960), 3);
    add_background_object(create_tbbluewall6_2784(12096, 1960), 3);
    add_background_object(create_tbsolidblack_2688(12160, 1832), 3);
    add_background_object(create_tbbluewall6_2784(12160, 1960), 3);
    add_background_object(create_tbbluewall6_2784(12224, 1960), 3);
    add_background_object(create_tbsolidblack_2688(12288, 1832), 3);
    add_background_object(create_tbbluewall6_2784(12288, 1960), 3);
    add_background_object(create_tbbluewall6_2784(12352, 1960), 3);
    add_background_object(create_tbsolidblack_2688(12352, 2368), 3);
    add_background_object(create_tbinvertedloop1_2781(12288, 2304), 3);
    add_background_object(create_tbinvertedloop2_2795(12416, 2304), 3);
    add_background_object(create_tbinvertedloop3_2779(12416, 2432), 3);
    add_background_object(create_tbinvertedloop4_2780(12288, 2432), 3);
    add_background_object(create_tbbackeye_2799(12352, 2368), 3);
    add_background_object(create_tbsolidblack_2688(12416, 1832), 3);
    add_background_object(create_tbbluewall6_2784(12416, 1960), 3);
    add_background_object(create_tbsolidblack_2688(12544, 1832), 3);
    add_background_object(create_tbsolidblack_2688(12544, 1960), 3);
    add_background_object(create_tbbluewall12_2792(12480, 1960), 3);
    add_background_object(create_tbbluewall8_2785(12480, 2024), 3);
    add_background_object(create_tbbluewall7_2788(12480, 2088), 3);
    add_background_object(create_tbbluewall6_2784(12544, 2088), 3);
    add_background_object(create_tbbluewall6_2784(12608, 2088), 3);
    add_background_object(create_tbsolidblack_2688(10880, 1704), 3);
    add_background_object(create_tbsolidblack_2688(11008, 1704), 3);
    add_background_object(create_tbsolidblack_2688(11136, 1704), 3);
    add_background_object(create_tbsolidblack_2688(11264, 1704), 3);
    add_background_object(create_tbsolidblack_2688(11392, 1704), 3);
    add_background_object(create_tbsolidblack_2688(11520, 1704), 3);
    add_background_object(create_tbsolidblack_2688(11648, 1704), 3);
    add_background_object(create_tbsolidblack_2688(11776, 1704), 3);
    add_background_object(create_tbsolidblack_2688(11904, 1704), 3);
    add_background_object(create_tbsolidblack_2688(12032, 1704), 3);
    add_background_object(create_tbsolidblack_2688(12160, 1704), 3);
    add_background_object(create_tbsolidblack_2688(12288, 1704), 3);
    add_background_object(create_tbsolidblack_2688(12416, 1704), 3);
    add_background_object(create_tbsolidblack_2688(12544, 1704), 3);
    add_background_object(create_tbsolidblack_2688(12672, 1832), 3);
    add_background_object(create_tbsolidblack_2688(12672, 1960), 3);
    add_background_object(create_tbbluewall6_2784(12672, 2088), 3);
    add_background_object(create_tbsolidblack_2688(12736, 1960), 3);
    add_background_object(create_tbsolidblack_2688(12864, 1960), 3);
    add_background_object(create_tbsolidblack_2688(12992, 1960), 3);
    add_background_object(create_tbbluewall6_2784(12736, 2088), 3);
    add_background_object(create_tbbluewall6_2784(12800, 2088), 3);
    add_background_object(create_tbbluewall6_2784(12928, 2152), 3);
    add_background_object(create_tbbluewall6_2784(13056, 2088), 3);
    add_background_object(create_tbsolidblack_2688(12736, 2856), 3);
    add_background_object(create_tbbluewall2_2782(12736, 2792), 3);
    add_background_object(create_tbbluewall2_2782(12800, 2792), 3);
    add_background_object(create_tbsolidblack_2688(12864, 2856), 3);
    add_background_object(create_tbbluewall2_2782(12864, 2792), 3);
    add_background_object(create_tbbluewall2_2782(12928, 2792), 3);
    add_background_object(create_tbsolidblack_2688(12992, 2856), 3);
    add_background_object(create_tbbluewall2_2782(12992, 2792), 3);
    add_background_object(create_tbbluewall2_2782(13056, 2792), 3);
    add_background_object(create_tbbluewall12_2792(11712, 2408), 3);
    add_background_object(create_tbbluewall4_2783(11776, 2408), 3);
    add_background_object(create_tbbluewall4_2783(11776, 2472), 3);
    add_background_object(create_tbbluewall8_2785(11712, 2472), 3);
    add_background_object(create_tbbluewall7_2788(11712, 2536), 3);
    add_background_object(create_tbbluewall3_2786(13120, 2792), 3);
    add_background_object(create_tbbluewall4_2783(13120, 2856), 3);
    add_background_object(create_tbbluewall4_2783(13120, 2920), 3);
    add_background_object(create_tbsolidblack_2688(12992, 2984), 3);
    add_background_object(create_tbbluewall4_2783(13120, 2984), 3);
    add_background_object(create_tbbluewall4_2783(13120, 3048), 3);
    add_background_object(create_tbinvertedloop2_2795(13184, 2792), 3);
    add_background_object(create_tbbluetube4_2800(13248, 2920), 3);
    add_background_object(create_tbsolidblack_2688(12992, 3112), 3);
    add_background_object(create_tbsolidblack_2688(12864, 2984), 3);
    add_background_object(create_tbsolidblack_2688(12864, 3112), 3);
    add_background_object(create_tbsolidblack_2688(14208, 3240), 3);
    add_background_object(create_tbsolidblack_2688(14080, 3240), 3);
    add_background_object(create_tbsolidblack_2688(14464, 3240), 3);
    add_background_object(create_tbsolidblack_2688(14336, 3240), 3);
    add_background_object(create_tbsolidblack_2688(14720, 3240), 3);
    add_background_object(create_tbsolidblack_2688(14592, 3240), 3);
    add_background_object(create_tbsolidblack_2688(14208, 3368), 3);
    add_background_object(create_tbsolidblack_2688(14080, 3368), 3);
    add_background_object(create_tbsolidblack_2688(14464, 3368), 3);
    add_background_object(create_tbsolidblack_2688(14336, 3368), 3);
    add_background_object(create_tbsolidblack_2688(14720, 3368), 3);
    add_background_object(create_tbsolidblack_2688(14592, 3368), 3);
    add_background_object(create_tbbluewall4_2783(13120, 3112), 3);
    add_background_object(create_tbbluewall10_2790(13120, 3176), 3);
    add_background_object(create_tbbluewall2_2782(13184, 3176), 3);
    add_background_object(create_tbbluewall2_2782(13248, 3176), 3);
    add_background_object(create_tbbluewall2_2782(13312, 3176), 3);
    add_background_object(create_tbbluewall2_2782(13376, 3176), 3);
    add_background_object(create_tbbluewall2_2782(13440, 3176), 3);
    add_background_object(create_tbbluewall2_2782(13504, 3176), 3);
    add_background_object(create_tbbluewall2_2782(13568, 3176), 3);
    add_background_object(create_tbbluetube4_2800(13248, 2984), 3);
    add_background_object(create_tbinvertedloop4_2780(13248, 3048), 3);
    add_background_object(create_tbbluetube3_2797(13376, 3112), 3);
    add_background_object(create_tbbluetube3_2797(13440, 3112), 3);
    add_background_object(create_tbbluetube3_2797(13504, 3112), 3);
    add_background_object(create_tbbluetube3_2797(13568, 3112), 3);
    add_background_object(create_gimmickwaterturbineend_2846(14496, 2984), 3);
    add_background_object(create_gimmickwaterturbineend_2846(14496, 3048), 3);
    add_background_object(create_tbsolidblack_2688(14848, 3240), 3);
    add_background_object(create_tbsolidblack_2688(14848, 3368), 3);
    add_background_object(create_tbbluewall2_2782(13632, 3176), 3);
    add_background_object(create_tbbluewall2_2782(13696, 3176), 3);
    add_background_object(create_tbbluetube3_2797(13632, 3112), 3);
    add_background_object(create_tbbluetube3_2797(13696, 3112), 3);
    add_background_object(create_tbsolidblack_2688(14976, 3240), 3);
    add_background_object(create_tbsolidblack_2688(14976, 3368), 3);
    add_background_object(create_tbbluewall2_2782(13760, 3176), 3);
    add_background_object(create_tbbluewall2_2782(13824, 3176), 3);
    add_background_object(create_tbbluetube3_2797(13760, 3112), 3);
    add_background_object(create_tbbluetube3_2797(13824, 3112), 3);
    add_background_object(create_tbsolidblack_2688(15104, 3240), 3);
    add_background_object(create_tbsolidblack_2688(15104, 3368), 3);
    add_background_object(create_tbbluewall2_2782(13888, 3176), 3);
    add_background_object(create_tbbluewall2_2782(13952, 3176), 3);
    add_background_object(create_tbbluetube3_2797(13888, 3112), 3);
    add_background_object(create_tbbluetube3_2797(13952, 3112), 3);
    add_background_object(create_tbsolidblack_2688(15232, 3240), 3);
    add_background_object(create_tbsolidblack_2688(15232, 3368), 3);
    add_background_object(create_tbbluewall2_2782(14016, 3176), 3);
    add_background_object(create_tbbluewall2_2782(14080, 3176), 3);
    add_background_object(create_tbbluetube3_2797(14016, 3112), 3);
    add_background_object(create_tbbluetube3_2797(14080, 3112), 3);
    add_background_object(create_tbsolidblack_2688(15360, 3240), 3);
    add_background_object(create_tbsolidblack_2688(15360, 3368), 3);
    add_background_object(create_tbbluewall2_2782(14144, 3176), 3);
    add_background_object(create_tbbluewall2_2782(14208, 3176), 3);
    add_background_object(create_tbbluetube3_2797(14144, 3112), 3);
    add_background_object(create_tbbluetube3_2797(14208, 3112), 3);
    add_background_object(create_tbsolidblack_2688(15488, 3240), 3);
    add_background_object(create_tbsolidblack_2688(15488, 3368), 3);
    add_background_object(create_tbbluewall2_2782(14272, 3176), 3);
    add_background_object(create_tbbluetube3_2797(14272, 3112), 3);
    add_background_object(create_tbinvertedloop3_2779(14336, 3048), 3);
    add_background_object(create_tbbluetube2_2798(14400, 2984), 3);
    add_background_object(create_tbsolidblack_2688(15616, 3240), 3);
    add_background_object(create_tbsolidblack_2688(15616, 3368), 3);
    add_background_object(create_tbbluewall2_2782(14400, 3112), 3);
    add_background_object(create_tbbluewall2_2782(14464, 3112), 3);
    add_background_object(create_tbsolidblack_2688(15744, 3240), 3);
    add_background_object(create_tbsolidblack_2688(15744, 3368), 3);
    add_background_object(create_tbsolidblack_2688(15872, 3240), 3);
    add_background_object(create_tbsolidblack_2688(15872, 3368), 3);
    add_background_object(create_tbsolidblack_2688(14528, 2984), 3);
    add_background_object(create_tbsolidblack_2688(14528, 3112), 3);
    add_background_object(create_tbsolidblack_2688(14656, 2984), 3);
    add_background_object(create_tbsolidblack_2688(14656, 3112), 3);
    add_background_object(create_tbsolidblack_2688(14528, 2856), 3);
    add_background_object(create_tbsolidblack_2688(14656, 2856), 3);
    add_background_object(create_tbinvertedloop3_2779(14144, 2792), 3);
    add_background_object(create_tbbluetube1_2796(14080, 2856), 3);
    add_background_object(create_tbbluewall9_2789(14336, 3112), 3);
    add_background_object(create_tbbluewall13_2793(14336, 3176), 3);
    add_background_object(create_tbbluewall13_2793(14528, 3112), 3);
    add_background_object(create_tbbluewall8_2785(14528, 3048), 3);
    add_background_object(create_tbbluewall8_2785(14528, 2984), 3);
    add_background_object(create_tbbluewall8_2785(14464, 2408), 3);
    add_background_object(create_tbbluewall12_2792(14528, 2920), 3);
    add_background_object(create_tbbluewall7_2788(14400, 2920), 3);
    add_background_object(create_tbsolidblack_2688(14528, 2728), 3);
    add_background_object(create_tbsolidblack_2688(14656, 2728), 3);
    add_background_object(create_tbbluewall6_2784(14464, 2920), 3);
    add_background_object(create_tbbluewall9_2789(14400, 2856), 3);
    add_background_object(create_tbbluewall13_2793(14528, 2856), 3);
    add_background_object(create_tbbluewall5_2787(14144, 2792), 3);
    add_background_object(create_tbbluewall5_2787(14208, 2728), 3);
    add_background_object(create_tbbluewall11_2791(14144, 2728), 3);
    add_background_object(create_tbbluewall4_2783(14208, 2664), 3);
    add_background_object(create_tbsolidblack_2688(14528, 2600), 3);
    add_background_object(create_tbsolidblack_2688(14656, 2600), 3);
    add_background_object(create_tbbluewall4_2783(14208, 2600), 3);
    add_background_object(create_tbsolidblack_2688(14080, 2536), 3);
    add_background_object(create_tbsolidblack_2688(13952, 2664), 3);
    add_background_object(create_tbsolidblack_2688(13952, 2536), 3);
    add_background_object(create_tbbluewall6_2784(14080, 2792), 3);
    add_background_object(create_tbbluewall6_2784(14016, 2792), 3);
    add_background_object(create_tbbluewall6_2784(13952, 2792), 3);
    add_background_object(create_tbbluetube1_2796(14016, 2856), 3);
    add_background_object(create_tbbluetube1_2796(13952, 2856), 3);
    add_background_object(create_tbbluewall4_2783(14208, 2536), 3);
    add_background_object(create_tbsolidblack_2688(13824, 2664), 3);
    add_background_object(create_tbsolidblack_2688(13824, 2536), 3);
    add_background_object(create_tbbluewall6_2784(13888, 2792), 3);
    add_background_object(create_tbbluewall6_2784(13824, 2792), 3);
    add_background_object(create_tbbluetube1_2796(13888, 2856), 3);
    add_background_object(create_tbbluetube1_2796(13824, 2856), 3);
    add_background_object(create_tbsolidblack_2688(13696, 2664), 3);
    add_background_object(create_tbsolidblack_2688(13696, 2536), 3);
    add_background_object(create_tbbluewall6_2784(13760, 2792), 3);
    add_background_object(create_tbbluewall6_2784(13696, 2792), 3);
    add_background_object(create_tbbluetube1_2796(13760, 2856), 3);
    add_background_object(create_tbbluetube1_2796(13696, 2856), 3);
    add_background_object(create_tbsolidblack_2688(13568, 2664), 3);
    add_background_object(create_tbsolidblack_2688(13568, 2536), 3);
    add_background_object(create_tbbluewall6_2784(13632, 2792), 3);
    add_background_object(create_tbbluetube1_2796(13632, 2856), 3);
    add_background_object(create_tbinvertedloop4_2780(13504, 2792), 3);
    add_background_object(create_tbbluewall7_2788(13568, 2792), 3);
    add_background_object(create_tbbluewall7_2788(13504, 2728), 3);
    add_background_object(create_tbbluewall12_2792(13568, 2728), 3);
    add_background_object(create_tbbluewall8_2785(13504, 2664), 3);
    add_background_object(create_tbbluewall8_2785(13504, 2600), 3);
    add_background_object(create_tbbluewall8_2785(13504, 2536), 3);
    add_background_object(create_tbbluewall9_2789(13504, 2472), 3);
    add_background_object(create_tbbluewall2_2782(13568, 2472), 3);
    add_background_object(create_tbbluewall2_2782(13632, 2472), 3);
    add_background_object(create_tbbluewall2_2782(13696, 2472), 3);
    add_background_object(create_tbbluewall2_2782(13888, 2472), 3);
    add_background_object(create_tbbluewall2_2782(13952, 2472), 3);
    add_background_object(create_tbbluewall2_2782(14016, 2472), 3);
    add_background_object(create_tbbluewall2_2782(14080, 2472), 3);
    add_background_object(create_tbbluewall2_2782(14144, 2472), 3);
    add_background_object(create_tbbluewall3_2786(14208, 2472), 3);
    add_background_object(create_tbsolidblack_2688(14528, 2472), 3);
    add_background_object(create_tbsolidblack_2688(14656, 2472), 3);
    add_background_object(create_tbbluewall6_2784(13824, 2152), 3);
    add_background_object(create_tbbluewall6_2784(13888, 2152), 3);
    add_background_object(create_tbbluewall6_2784(13760, 2152), 3);
    add_background_object(create_tbbluewall11_2791(13696, 2152), 3);
    add_background_object(create_tbbluewall5_2787(13696, 2216), 3);
    add_background_object(create_tbbluewall12_2792(13952, 2152), 3);
    add_background_object(create_tbbluewall7_2788(13952, 2280), 3);
    add_background_object(create_tbbluewall6_2784(13440, 2216), 3);
    add_background_object(create_tbbluewall6_2784(13504, 2216), 3);
    add_background_object(create_tbbluewall6_2784(13568, 2216), 3);
    add_background_object(create_tbbluewall6_2784(13632, 2216), 3);
    add_background_object(create_tbbluewall7_2788(13376, 2216), 3);
    add_background_object(create_tbbluewall12_2792(13376, 2152), 3);
    add_background_object(create_tbbluewall7_2788(13312, 2152), 3);
    add_background_object(create_tbbluewall12_2792(13312, 2088), 3);
    add_background_object(create_tbsolidblack_2688(13120, 1960), 3);
    add_background_object(create_tbbluewall6_2784(13120, 2088), 3);
    add_background_object(create_tbbluewall6_2784(13184, 2088), 3);
    add_background_object(create_tbbluewall6_2784(13248, 2088), 3);
    add_background_object(create_tbsolidblack_2688(13248, 1960), 3);
    add_background_object(create_tbsolidblack_2688(13376, 1960), 3);
    add_background_object(create_tbsolidblack_2688(13504, 2088), 3);
    add_background_object(create_tbsolidblack_2688(13504, 1960), 3);
    add_background_object(create_tbsolidblack_2688(13632, 1960), 3);
    add_background_object(create_tbsolidblack_2688(13760, 2024), 3);
    add_background_object(create_tbsolidblack_2688(13888, 2024), 3);
    add_background_object(create_tbsolidblack_2688(13888, 1896), 3);
    add_background_object(create_tbsolidblack_2688(13760, 1896), 3);
    add_background_object(create_tbsolidblack_2688(14016, 2024), 3);
    add_background_object(create_tbsolidblack_2688(14016, 1896), 3);
    add_background_object(create_tbbluewall6_2784(14016, 2280), 3);
    add_background_object(create_tbbluewall6_2784(14080, 2280), 3);
    add_background_object(create_tbbluewall8_2785(13952, 2216), 3);
    add_background_object(create_tbsolidblack_2688(14016, 2152), 3);
    add_background_object(create_tbbluewall9_2789(13824, 2472), 3);
    add_background_object(create_tbbluewall13_2793(13824, 2536), 3);
    add_background_object(create_tbbluewall10_2790(13760, 2536), 3);
    add_background_object(create_tbbluewall3_2786(13760, 2472), 3);
    add_background_object(create_tbbluepiping2_2768(14464, 2696), 3);
    add_background_object(create_tbbluewall8_2785(14528, 2536), 3);
    add_background_object(create_tbbluewall8_2785(14528, 2600), 3);
    add_background_object(create_tbbluewall8_2785(14528, 2664), 3);
    add_background_object(create_tbbluewall8_2785(14528, 2728), 3);
    add_background_object(create_tbbluewall8_2785(14528, 2792), 3);
    add_background_object(create_tbbluewall2_2782(14464, 2856), 3);
    add_background_object(create_tbbluewall7_2788(14464, 2472), 3);
    add_background_object(create_tbbluewall12_2792(14528, 2472), 3);
    add_background_object(create_tbbluewall9_2789(14464, 2344), 3);
    add_background_object(create_tbbluewall2_2782(14528, 2344), 3);
    add_background_object(create_tbbluewall2_2782(14592, 2344), 3);
    add_background_object(create_tbbluewall2_2782(14656, 2344), 3);
    add_background_object(create_tbbluewall2_2782(14848, 2344), 3);
    add_background_object(create_tbwall8_2610(14528, 1928), 3);
    add_background_object(create_tbbluewall7_2788(14464, 2152), 3);
    add_background_object(create_tbbluewall9_2789(14464, 2088), 3);
    add_background_object(create_tbbluewall2_2782(14528, 2088), 3);
    add_background_object(create_tbbluewall2_2782(14592, 2088), 3);
    add_background_object(create_tbbluewall2_2782(14656, 2088), 3);
    add_background_object(create_tbbluewall7_2788(14464, 1896), 3);
    add_background_object(create_tbbluewall6_2784(14528, 1896), 3);
    add_background_object(create_tbbluewall6_2784(14592, 1896), 3);
    add_background_object(create_tbbluewall6_2784(14656, 1896), 3);
    add_background_object(create_tbbluewall12_2792(14720, 1896), 3);
    add_background_object(create_tbbluewall8_2785(14720, 1960), 3);
    add_background_object(create_tbbluewall8_2785(14720, 2024), 3);
    add_background_object(create_tbbluewall13_2793(14720, 2088), 3);
    add_background_object(create_tbbluewall6_2784(14528, 2152), 3);
    add_background_object(create_tbbluewall6_2784(14592, 2152), 3);
    add_background_object(create_tbbluewall6_2784(14656, 2152), 3);
    add_background_object(create_tbbluewall6_2784(14848, 2152), 3);
    add_background_object(create_tbwallshadow_2598(14592, 1992), 3);
    add_background_object(create_tbwaterlightback2_2843(9856, 2768), 3);
    add_background_object(create_tbwaterlightback2_2843(9856, 2816), 3);
    add_background_object(create_tbwaterlightback2_2843(9856, 2864), 3);
    add_background_object(create_tbwaterlightback2_2843(9856, 2912), 3);
    add_background_object(create_tbwaterlightback2_2843(9856, 2960), 3);
    add_background_object(create_tbwaterlightback1_2844(9856, 2720), 3);
    add_background_object(create_tbwaterlightback3_2845(9856, 3008), 3);
    add_background_object(create_tbwaterlightback2_2843(9984, 2768), 3);
    add_background_object(create_tbwaterlightback2_2843(9984, 2816), 3);
    add_background_object(create_tbwaterlightback2_2843(9984, 2864), 3);
    add_background_object(create_tbwaterlightback2_2843(9984, 2912), 3);
    add_background_object(create_tbwaterlightback2_2843(9984, 2960), 3);
    add_background_object(create_tbwaterlightback1_2844(9984, 2720), 3);
    add_background_object(create_tbwaterlightback3_2845(9984, 3008), 3);
    add_background_object(create_tbbluewall6_2784(14144, 2280), 3);
    add_background_object(create_tbbluewall10_2790(14144, 2216), 3);
    add_background_object(create_tbbluewall6_2784(14208, 2280), 3);
    add_background_object(create_tbbluewall3_2786(14272, 2216), 3);
    add_background_object(create_tbbluewall2_2782(14208, 2216), 3);
    add_background_object(create_tbbluewall5_2787(14272, 2280), 3);
    add_background_object(create_tbbluewall4_2783(14144, 2152), 3);
    add_background_object(create_tbbluewall4_2783(14144, 2088), 3);
    add_background_object(create_tbbluewall4_2783(14144, 2024), 3);
    add_background_object(create_tbbluewall4_2783(14144, 1960), 3);
    add_background_object(create_tbbluewall4_2783(14144, 1896), 3);
    add_background_object(create_tbbluewall8_2785(14464, 1832), 3);
    add_background_object(create_tbsolidblack_2688(14528, 1768), 3);
    add_background_object(create_tbsolidblack_2688(14656, 1768), 3);
    add_background_object(create_tbsolidblack_2688(12736, 1832), 3);
    add_background_object(create_tbsolidblack_2688(12864, 1832), 3);
    add_background_object(create_tbsolidblack_2688(12992, 1832), 3);
    add_background_object(create_tbsolidblack_2688(13120, 1832), 3);
    add_background_object(create_tbsolidblack_2688(13248, 1832), 3);
    add_background_object(create_tbsolidblack_2688(13376, 1832), 3);
    add_background_object(create_tbsolidblack_2688(13504, 1832), 3);
    add_background_object(create_tbsolidblack_2688(13632, 1832), 3);
    add_background_object(create_tbsolidblack_2688(14528, 1640), 3);
    add_background_object(create_tbsolidblack_2688(14656, 1640), 3);
    add_background_object(create_tbsolidblack_2688(14272, 1640), 3);
    add_background_object(create_tbsolidblack_2688(14400, 1640), 3);
    add_background_object(create_tbsolidblack_2688(14016, 1640), 3);
    add_background_object(create_tbsolidblack_2688(14144, 1640), 3);
    add_background_object(create_tbsolidblack_2688(14016, 1768), 3);
    add_background_object(create_tbsolidblack_2688(13888, 1640), 3);
    add_background_object(create_tbsolidblack_2688(13888, 1768), 3);
    add_background_object(create_tbbluewall4_2783(14144, 1832), 3);
    add_background_object(create_tbbluewall12_2792(14464, 1768), 3);
    add_background_object(create_tbbluewall6_2784(14336, 1768), 3);
    add_background_object(create_tbbluewall6_2784(14400, 1768), 3);
    add_background_object(create_tbbluewall6_2784(14208, 1768), 3);
    add_background_object(create_tbbluewall6_2784(14272, 1768), 3);
    add_background_object(create_tbbluewall11_2791(14144, 1768), 3);
    add_background_object(create_tbladder_2636(14424, 2088), 3);
    add_background_object(create_tbladder_2636(14424, 2120), 3);
    add_background_object(create_tbladder_2636(14424, 2152), 3);
    add_background_object(create_tbladder_2636(14424, 2184), 3);
    add_background_object(create_tbsolidblack_2688(14784, 1768), 3);
    add_background_object(create_tbsolidblack_2688(14784, 1640), 3);
    add_background_object(create_tbsolidblack_2688(14784, 1896), 3);
    add_background_object(create_tbsolidblack_2688(14784, 2024), 3);
    add_background_object(create_tbbluewall2_2782(14720, 2344), 3);
    add_background_object(create_tbbluewall2_2782(14784, 2344), 3);
    add_background_object(create_tbbluewall6_2784(14720, 2152), 3);
    add_background_object(create_tbbluewall6_2784(14784, 2152), 3);
    add_background_object(create_tbsolidblack_2688(14784, 2408), 3);
    add_background_object(create_tbsolidblack_2688(14784, 2536), 3);
    add_background_object(create_tbsolidblack_2688(14784, 2664), 3);
    add_background_object(create_tbbluewall3_2786(14912, 2344), 3);
    add_background_object(create_tbbluewall4_2783(14848, 2472), 3);
    add_background_object(create_tbbluewall4_2783(14848, 2536), 3);
    add_background_object(create_tbbluewall4_2783(14848, 2600), 3);
    add_background_object(create_tbbluewall4_2783(14848, 2664), 3);
    add_background_object(create_tbbluewall4_2783(14848, 2728), 3);
    add_background_object(create_tbbluewall5_2787(14912, 2152), 3);
    add_background_object(create_tbbluewall4_2783(14848, 2024), 3);
    add_background_object(create_tbbluewall4_2783(14848, 1960), 3);
    add_background_object(create_tbbluewall4_2783(14848, 1896), 3);
    add_background_object(create_tbbluewall3_2786(14912, 2088), 3);
    add_background_object(create_tbbluewall10_2790(14848, 2088), 3);
    add_background_object(create_tbbluewall11_2791(14848, 2408), 3);
    add_background_object(create_tbbluewall5_2787(14912, 2408), 3);
    add_background_object(create_tbsolidblack_2688(14784, 2792), 3);
    add_background_object(create_tbsolidblack_2688(14784, 2920), 3);
    add_background_object(create_tbsolidblack_2688(14912, 2856), 3);
    add_background_object(create_tbsolidblack_2688(14912, 2984), 3);
    add_background_object(create_tbsolidblack_2688(15040, 2856), 3);
    add_background_object(create_tbsolidblack_2688(15040, 2984), 3);
    add_background_object(create_tbsolidblack_2688(15168, 2856), 3);
    add_background_object(create_tbsolidblack_2688(15168, 2984), 3);
    add_background_object(create_tbsolidblack_2688(15296, 2856), 3);
    add_background_object(create_tbsolidblack_2688(15296, 2984), 3);
    add_background_object(create_tbbluewall10_2790(14848, 2792), 3);
    add_background_object(create_tbbluewall2_2782(14912, 2792), 3);
    add_background_object(create_tbbluewall2_2782(14976, 2792), 3);
    add_background_object(create_tbbluewall2_2782(15168, 2792), 3);
    add_background_object(create_tbbluewall2_2782(15040, 2792), 3);
    add_background_object(create_tbbluewall2_2782(15104, 2792), 3);
    add_background_object(create_tbbluewall2_2782(15296, 2792), 3);
    add_background_object(create_tbbluewall2_2782(15232, 2792), 3);
    add_background_object(create_tbbluepiping2_2768(15296, 2632), 3);
    add_background_object(create_tbbluepiping2_2768(15296, 2472), 3);
    add_background_object(create_tbbluepiping2_2768(15296, 2312), 3);
    add_background_object(create_tbbluepiping2_2768(15296, 2152), 3);
    add_background_object(create_tbbluepiping2_2768(15296, 1992), 3);
    add_background_object(create_tbbluepiping2_2768(15296, 1832), 3);
    add_background_object(create_tbbluepiping2_2768(15296, 1512), 3);
    add_background_object(create_tbbluepiping2_2768(15296, 1352), 3);
    add_background_object(create_tbbluepiping2_2768(15296, 1192), 3);
    add_background_object(create_tbbluepiping2_2768(15296, 552), 3);
    add_background_object(create_tbbluepiping2_2768(15296, 872), 3);
    add_background_object(create_tbbluepiping2_2768(15296, 1032), 3);
    add_background_object(create_tbbluewall13_2793(15360, 2792), 3);
    add_background_object(create_tbbluewall8_2785(15360, 2728), 3);
    add_background_object(create_tbbluewall8_2785(15360, 2664), 3);
    add_background_object(create_tbbluewall8_2785(15360, 2600), 3);
    add_background_object(create_tbbluewall8_2785(15360, 2536), 3);
    add_background_object(create_tbbluewall8_2785(15360, 2472), 3);
    add_background_object(create_tbbluewall8_2785(15360, 2408), 3);
    add_background_object(create_tbbluewall8_2785(15360, 2344), 3);
    add_background_object(create_tbbluewall8_2785(15360, 2280), 3);
    add_background_object(create_tbbluewall8_2785(15360, 2216), 3);
    add_background_object(create_tbbluewall8_2785(15360, 2152), 3);
    add_background_object(create_tbbluewall8_2785(15360, 2088), 3);
    add_background_object(create_tbbluewall8_2785(15360, 2024), 3);
    add_background_object(create_tbbluewall8_2785(15360, 1960), 3);
    add_background_object(create_tbbluewall8_2785(15360, 1896), 3);
    add_background_object(create_tbbluewall8_2785(15360, 1832), 3);
    add_background_object(create_tbbluewall8_2785(15360, 1768), 3);
    add_background_object(create_tbbluewall8_2785(15360, 1704), 3);
    add_background_object(create_tbbluewall8_2785(15360, 1640), 3);
    add_background_object(create_tbbluewall8_2785(15360, 1576), 3);
    add_background_object(create_tbbluewall8_2785(15360, 1512), 3);
    add_background_object(create_tbbluewall8_2785(15360, 1448), 3);
    add_background_object(create_tbbluewall8_2785(15360, 1384), 3);
    add_background_object(create_tbbluewall8_2785(15360, 1320), 3);
    add_background_object(create_tbbluewall8_2785(15360, 1256), 3);
    add_background_object(create_tbbluewall8_2785(15360, 1192), 3);
    add_background_object(create_tbbluewall8_2785(15360, 1128), 3);
    add_background_object(create_tbbluewall8_2785(15360, 1064), 3);
    add_background_object(create_tbbluewall8_2785(15360, 1000), 3);
    add_background_object(create_tbbluewall8_2785(15360, 936), 3);
    add_background_object(create_tbbluewall8_2785(15360, 872), 3);
    add_background_object(create_tbbluewall8_2785(15360, 808), 3);
    add_background_object(create_tbbluewall8_2785(15360, 744), 3);
    add_background_object(create_tbbluewall8_2785(15360, 680), 3);
    add_background_object(create_tbbluewall8_2785(15360, 616), 3);
    add_background_object(create_tbbluewall8_2785(15360, 552), 3);
    add_background_object(create_tbbluewall12_2792(15360, 488), 3);
    add_background_object(create_tbbluewall7_2788(15296, 488), 3);
    add_background_object(create_tbbluewall9_2789(15296, 424), 3);
    add_background_object(create_tbbluewall2_2782(15360, 424), 3);
    add_background_object(create_tbwall8_2610(15360, 264), 3);
    add_background_object(create_tbbluepiping1_2767(14880, 1288), 3);
    add_background_object(create_tbbluepiping1_2767(14880, 1448), 3);
    add_background_object(create_tbbluepiping1_2767(14880, 648), 3);
    add_background_object(create_tbbluepiping1_2767(14880, 808), 3);
    add_background_object(create_tbbluepiping1_2767(14880, 968), 3);
    add_background_object(create_tbbluepiping1_2767(14880, 488), 3);
    add_background_object(create_tbbluepiping1_2767(14880, 328), 3);
    add_background_object(create_tbsolidblack_2688(14720, 1512), 3);
    add_background_object(create_tbbluewall4_2783(14848, 1832), 3);
    add_background_object(create_tbbluewall4_2783(14848, 1768), 3);
    add_background_object(create_tbbluewall4_2783(14848, 1704), 3);
    add_background_object(create_tbbluewall4_2783(14848, 1640), 3);
    add_background_object(create_tbbluewall4_2783(14848, 1576), 3);
    add_background_object(create_tbbluewall4_2783(14848, 1512), 3);
    add_background_object(create_tbsolidblack_2688(14592, 1512), 3);
    add_background_object(create_tbsolidblack_2688(14720, 1384), 3);
    add_background_object(create_tbbluewall4_2783(14848, 1448), 3);
    add_background_object(create_tbbluewall4_2783(14848, 1384), 3);
    add_background_object(create_tbsolidblack_2688(14592, 1384), 3);
    add_background_object(create_tbsolidblack_2688(14720, 1256), 3);
    add_background_object(create_tbbluewall4_2783(14848, 1320), 3);
    add_background_object(create_tbbluewall4_2783(14848, 1256), 3);
    add_background_object(create_tbsolidblack_2688(14592, 1256), 3);
    add_background_object(create_tbsolidblack_2688(14720, 1128), 3);
    add_background_object(create_tbbluewall4_2783(14848, 1192), 3);
    add_background_object(create_tbbluewall4_2783(14848, 1128), 3);
    add_background_object(create_tbsolidblack_2688(14592, 1128), 3);
    add_background_object(create_tbsolidblack_2688(14720, 1000), 3);
    add_background_object(create_tbbluewall4_2783(14848, 1064), 3);
    add_background_object(create_tbbluewall4_2783(14848, 1000), 3);
    add_background_object(create_tbsolidblack_2688(14592, 1000), 3);
    add_background_object(create_tbsolidblack_2688(14720, 872), 3);
    add_background_object(create_tbbluewall4_2783(14848, 936), 3);
    add_background_object(create_tbbluewall4_2783(14848, 872), 3);
    add_background_object(create_tbsolidblack_2688(14592, 872), 3);
    add_background_object(create_tbsolidblack_2688(14720, 744), 3);
    add_background_object(create_tbbluewall4_2783(14848, 808), 3);
    add_background_object(create_tbbluewall4_2783(14848, 744), 3);
    add_background_object(create_tbsolidblack_2688(14592, 744), 3);
    add_background_object(create_tbsolidblack_2688(14720, 616), 3);
    add_background_object(create_tbbluewall4_2783(14848, 680), 3);
    add_background_object(create_tbbluewall4_2783(14848, 616), 3);
    add_background_object(create_tbsolidblack_2688(14592, 616), 3);
    add_background_object(create_tbsolidblack_2688(14720, 488), 3);
    add_background_object(create_tbbluewall4_2783(14848, 552), 3);
    add_background_object(create_tbbluewall4_2783(14848, 488), 3);
    add_background_object(create_tbsolidblack_2688(14592, 488), 3);
    add_background_object(create_tbsolidblack_2688(14720, 360), 3);
    add_background_object(create_tbbluewall4_2783(14848, 424), 3);
    add_background_object(create_tbbluewall4_2783(14848, 360), 3);
    add_background_object(create_tbsolidblack_2688(14592, 360), 3);
    add_background_object(create_tbbluepiping1_2767(14880, 168), 3);
    add_background_object(create_tbsolidblack_2688(14720, 232), 3);
    add_background_object(create_tbbluewall4_2783(14848, 296), 3);
    add_background_object(create_tbsolidblack_2688(14592, 232), 3);
    add_background_object(create_tbsolidblack_2688(14720, 104), 3);
    add_background_object(create_tbsolidblack_2688(14592, 104), 3);
    add_background_object(create_tbsolidblack_2688(14720, -24), 3);
    add_background_object(create_tbsolidblack_2688(14592, -24), 3);
    add_background_object(create_tbsolidblack_2688(14976, -24), 3);
    add_background_object(create_tbsolidblack_2688(14848, -24), 3);
    add_background_object(create_tbsolidblack_2688(15232, -24), 3);
    add_background_object(create_tbsolidblack_2688(15104, -24), 3);
    add_background_object(create_tbsolidblack_2688(15360, 104), 3);
    add_background_object(create_tbsolidblack_2688(15360, -24), 3);
    add_background_object(create_tbbluewall6_2784(15360, 232), 3);
    add_background_object(create_tbbluewall6_2784(15232, 104), 3);
    add_background_object(create_tbbluewall6_2784(15168, 104), 3);
    add_background_object(create_tbbluewall6_2784(15104, 104), 3);
    add_background_object(create_tbbluewall6_2784(15040, 104), 3);
    add_background_object(create_tbbluewall6_2784(14976, 104), 3);
    add_background_object(create_tbbluewall6_2784(14912, 104), 3);
    add_background_object(create_tbbluewall11_2791(14848, 104), 3);
    add_background_object(create_tbbluewall7_2788(15296, 232), 3);
    add_background_object(create_tbbluewall12_2792(15296, 104), 3);
    add_background_object(create_tbbluewall4_2783(14848, 232), 3);
    add_background_object(create_tbbluewall4_2783(14848, 168), 3);
    add_background_object(create_tbbluewall8_2785(15296, 168), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 2280), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 2216), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 2280), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 2216), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 2280), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 2216), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 2408), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 2344), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 2408), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 2344), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 2408), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 2344), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 2536), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 2472), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 2536), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 2472), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 2536), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 2472), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 2664), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 2600), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 2664), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 2600), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 2664), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 2600), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 2152), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 2728), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 2152), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 2728), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 2152), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 2728), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 2088), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 2088), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 2088), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 2024), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 2024), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 2024), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 1960), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 1960), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 1960), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 1896), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 1896), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 1896), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 1832), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 1832), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 1832), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 1768), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 1768), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 1768), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 1704), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 1704), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 1704), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 1640), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 1640), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 1640), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 1576), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 1576), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 1576), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 1512), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 1512), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 1512), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 1448), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 1448), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 1448), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 1384), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 1384), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 1384), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 1320), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 1320), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 1320), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 1256), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 1256), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 1256), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 1192), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 1192), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 1192), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 1128), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 1128), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 1128), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 1064), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 1064), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 1064), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 1000), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 1000), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 1000), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 936), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 936), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 936), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 872), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 872), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 872), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 808), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 808), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 808), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 744), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 744), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 744), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 680), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 680), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 680), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 616), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 616), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 616), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 552), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 552), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 552), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 488), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 488), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 488), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 424), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 424), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 424), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 360), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 360), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 360), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 296), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 296), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 296), 3);
    add_background_object(create_tbtunnelwall_2578(15024, 232), 3);
    add_background_object(create_tbtunnelwall_2578(15120, 232), 3);
    add_background_object(create_tbtunnelwall_2578(15216, 232), 3);
    add_background_object(create_tbtunneltop1_2577(15072, 168), 3);
    add_background_object(create_tbsolidblack_2688(15424, 2856), 3);
    add_background_object(create_tbsolidblack_2688(15424, 2984), 3);
    add_background_object(create_tbsolidblack_2688(15552, 2856), 3);
    add_background_object(create_tbsolidblack_2688(15552, 2984), 3);
    add_background_object(create_tbsolidblack_2688(15424, 2600), 3);
    add_background_object(create_tbsolidblack_2688(15424, 2728), 3);
    add_background_object(create_tbsolidblack_2688(15552, 2600), 3);
    add_background_object(create_tbsolidblack_2688(15552, 2728), 3);
    add_background_object(create_tbsolidblack_2688(15424, 2344), 3);
    add_background_object(create_tbsolidblack_2688(15424, 2472), 3);
    add_background_object(create_tbsolidblack_2688(15552, 2344), 3);
    add_background_object(create_tbsolidblack_2688(15552, 2472), 3);
    add_background_object(create_tbsolidblack_2688(15424, 2088), 3);
    add_background_object(create_tbsolidblack_2688(15424, 2216), 3);
    add_background_object(create_tbsolidblack_2688(15552, 2088), 3);
    add_background_object(create_tbsolidblack_2688(15552, 2216), 3);
    add_background_object(create_tbsolidblack_2688(15424, 1960), 3);
    add_background_object(create_tbsolidblack_2688(15424, 1704), 3);
    add_background_object(create_tbsolidblack_2688(15552, 1960), 3);
    add_background_object(create_tbsolidblack_2688(15552, 1704), 3);
    add_background_object(create_tbsolidblack_2688(15424, 1832), 3);
    add_background_object(create_tbsolidblack_2688(15552, 1832), 3);
    add_background_object(create_tbsolidblack_2688(15424, 1448), 3);
    add_background_object(create_tbsolidblack_2688(15424, 1576), 3);
    add_background_object(create_tbsolidblack_2688(15552, 1448), 3);
    add_background_object(create_tbsolidblack_2688(15552, 1576), 3);
    add_background_object(create_tbsolidblack_2688(15424, 1192), 3);
    add_background_object(create_tbsolidblack_2688(15424, 1320), 3);
    add_background_object(create_tbsolidblack_2688(15552, 1192), 3);
    add_background_object(create_tbsolidblack_2688(15552, 1320), 3);
    add_background_object(create_tbsolidblack_2688(15424, 936), 3);
    add_background_object(create_tbsolidblack_2688(15424, 1064), 3);
    add_background_object(create_tbsolidblack_2688(15552, 936), 3);
    add_background_object(create_tbsolidblack_2688(15552, 1064), 3);
    add_background_object(create_tbsolidblack_2688(15424, 808), 3);
    add_background_object(create_tbsolidblack_2688(15552, 808), 3);
    add_background_object(create_tbsolidblack_2688(15424, 680), 3);
    add_background_object(create_tbsolidblack_2688(15552, 680), 3);
    add_background_object(create_tbsolidblack_2688(15424, 552), 3);
    add_background_object(create_tbsolidblack_2688(15552, 552), 3);
    add_background_object(create_tbsolidblack_2688(15424, 424), 3);
    add_background_object(create_tbsolidblack_2688(15552, 424), 3);
    add_background_object(create_tbbluewall2_2782(15424, 424), 3);
    add_background_object(create_tbbluewall2_2782(15488, 424), 3);
    add_background_object(create_tbbluewall2_2782(15552, 424), 3);
    add_background_object(create_tbbluewall2_2782(15616, 424), 3);
    add_background_object(create_tbsolidblack_2688(15488, 104), 3);
    add_background_object(create_tbsolidblack_2688(15488, -24), 3);
    add_background_object(create_tbsolidblack_2688(15616, 104), 3);
    add_background_object(create_tbsolidblack_2688(15616, -24), 3);
    add_background_object(create_tbbluewall6_2784(15424, 232), 3);
    add_background_object(create_tbbluewall6_2784(15488, 232), 3);
    add_background_object(create_tbbluewall6_2784(15552, 232), 3);
    add_background_object(create_tbbluewall6_2784(15616, 232), 3);
    add_background_object(create_tbbluewall6_2784(15680, 232), 3);
    add_background_object(create_tbsolidblack_2688(15680, 552), 3);
    add_background_object(create_tbsolidblack_2688(15680, 424), 3);
    add_background_object(create_tbbluewall2_2782(15680, 424), 3);
    add_background_object(create_tbbluewall2_2782(15744, 424), 3);
    add_background_object(create_tbsolidblack_2688(15744, 104), 3);
    add_background_object(create_tbsolidblack_2688(15744, -24), 3);
    add_background_object(create_tbbluewall6_2784(15744, 232), 3);
    add_background_object(create_tbbluewall6_2784(15808, 232), 3);
    add_background_object(create_tbsolidblack_2688(15808, 552), 3);
    add_background_object(create_tbsolidblack_2688(15808, 424), 3);
    add_background_object(create_tbbluewall2_2782(15808, 424), 3);
    add_background_object(create_tbbluewall2_2782(15872, 424), 3);
    add_background_object(create_tbsolidblack_2688(15872, 104), 3);
    add_background_object(create_tbsolidblack_2688(15872, -24), 3);
    add_background_object(create_tbbluewall6_2784(15872, 232), 3);
    add_background_object(create_tbbluewall6_2784(15936, 232), 3);
    add_background_object(create_tbsolidblack_2688(15936, 552), 3);
    add_background_object(create_tbsolidblack_2688(15936, 424), 3);
    add_background_object(create_tbbluewall2_2782(15936, 424), 3);
    add_background_object(create_tbbluewall2_2782(16000, 424), 3);
    add_background_object(create_tbsolidblack_2688(16000, 104), 3);
    add_background_object(create_tbsolidblack_2688(16000, -24), 3);
    add_background_object(create_tbbluewall6_2784(16000, 232), 3);
    add_background_object(create_tbbluewall6_2784(16064, 232), 3);
    add_background_object(create_tbbluewall2_2782(16064, 424), 3);
    add_background_object(create_gimmickwaterturbineend_2846(9248, 3048), 3);
    add_background_object(create_tbbluewall4_2783(7872, 2984), 3);
    add_background_object(create_tbbluewall11_2791(12992, 2088), 3);
    add_background_object(create_tbbluewall12_2792(12864, 2088), 3);
    add_background_object(create_tbbluewall7_2788(12864, 2152), 3);
    add_background_object(create_tbbluewall5_2787(12992, 2152), 3);
    add_background_object(create_tbsolidblack_2688(9600, 2152), 3);
    add_background_object(create_tbsolidblack_2688(9472, 2152), 3);
    add_background_object(create_tbsolidblack_2688(9600, 2024), 3);
    add_background_object(create_tbbluewall7_2788(9472, 3304), 3);
    add_background_object(create_tbbluewall5_2787(9536, 3304), 3);
    add_background_object(create_tbbluewall8_2785(9472, 3240), 3);
    add_background_object(create_tbbluewall4_2783(9536, 3240), 3);
    add_background_object(create_tbbluewall4_2783(9536, 3176), 3);
    add_background_object(create_tbbluewall8_2785(9472, 3176), 3);
    add_background_object(create_tbbluewall3_2786(9536, 3112), 3);
    add_background_object(create_tbbluewall9_2789(9472, 3112), 3);
    add_background_object(create_tbbluewall9_2789(9856, 3048), 3);
    add_background_object(create_tbbluewall3_2786(9920, 3048), 3);
    add_background_object(create_tbbluewall7_2788(9856, 3112), 3);
    add_background_object(create_tbbluewall5_2787(9920, 3112), 3);
    add_background_object(create_tbbluewall9_2789(9920, 2600), 3);
    add_background_object(create_tbbluewall3_2786(9984, 2600), 3);
    add_background_object(create_tbbluewall7_2788(9920, 2664), 3);
    add_background_object(create_tbbluewall5_2787(9984, 2664), 3);
    add_background_object(create_tbbluewall14_2794(9088, 3304), 3);
    add_background_object(create_tbbluewall14_2794(9152, 3304), 3);
    add_background_object(create_tbbluewall14_2794(9216, 3304), 3);
    add_background_object(create_tbbluewall14_2794(9280, 3304), 3);
    add_background_object(create_tbbluewall14_2794(9344, 3304), 3);
    add_background_object(create_tbbluewall14_2794(9408, 3320), 3);
    add_background_object(create_tbbluewall7_2788(9408, 2792), 3);
    add_background_object(create_tbbluewall5_2787(9472, 2792), 3);
    add_background_object(create_tbbluewall8_2785(9408, 2728), 3);
    add_background_object(create_tbbluewall4_2783(9472, 2728), 3);
    add_background_object(create_tbbluewall11_2791(9472, 2664), 3);
    add_background_object(create_tbbluewall12_2792(9408, 2664), 3);
    add_background_object(create_tbladder_2636(10944, 2536), 3);
    add_background_object(create_bonusstagewallshadow_2847(11232, 2136), 3);
    add_background_object(create_bonusstagewallshadow_2847(11296, 2136), 3);
    add_background_object(create_bonusstagewallshadow_2847(11360, 2136), 3);
    add_background_object(create_bonusstagewallshadow_2847(11424, 2136), 3);
    add_background_object(create_bonusstagewallshadow_2847(11488, 2136), 3);
    add_background_object(create_tbtunneltop2_2770(9280, 3112), 3);
    add_background_object(create_tbtunneltop2_2770(9280, 3176), 3);
    add_background_object(create_tbtunneltop2_2770(9280, 3240), 3);
    add_background_object(create_tbsolidblack_2688(11520, 3048), 3);
    add_background_object(create_tbsolidblack_2688(12800, 2984), 3);
    add_background_object(create_tbsolidblack_2688(7808, 3560), 3);
    add_background_object(create_tbbluewall10_2790(7936, 3624), 3);
    add_background_object(create_tbbluewall13_2793(8640, 3624), 3);
    add_background_object(create_tbbluewall9_2789(8064, 3240), 3);
    add_background_object(create_tbbluewall3_2786(7936, 3240), 3);
    add_background_object(create_tbbluewall8_2785(8064, 3304), 3);
    add_background_object(create_tbbluewall4_2783(7936, 3304), 3);
    add_background_object(create_tbtunneltop2_2770(8000, 3240), 3);
    add_background_object(create_tbtunneltop2_2770(8000, 3304), 3);
    add_background_object(create_tbhugetube1_2769(8512, 3048), 3);
    add_background_object(create_tbhugetube1_2769(8512, 2856), 3);
    add_background_object(create_tbhugetube1_2769(8512, 2664), 3);
    add_background_object(create_tbhugetube1_2769(8064, 3048), 3);
    add_background_object(create_tbhugetube1_2769(8064, 2856), 3);
    add_background_object(create_tbhugetube1_2769(8064, 2664), 3);
    add_background_object(create_tbhugetube1_2769(5328, 2664), 3);
    add_background_object(create_tbhugetube1_2769(5552, 2664), 3);
    add_background_object(create_tbhugetube1_2769(7232, 2728), 3);
    add_background_object(create_tbhugetube1_2769(7232, 2536), 3);
    add_background_object(create_tbhugetube1_2769(12864, 2600), 3);
    add_background_object(create_tbhugetube1_2769(12864, 2216), 3);
    add_background_object(create_tbhugetube1_2769(12864, 2408), 3);
    add_background_object(create_tbhugetube1_2769(13760, 2248), 3);
    add_background_object(create_tbladder_2636(14424, 2216), 3);
    add_background_object(create_tbbluewall14_2794(1216, 2344), 3);
    add_background_object(create_tbbluewall14_2794(1280, 2344), 3);
    add_background_object(create_tbbluewall4_2783(7936, 3368), 3);
    add_background_object(create_tbbluewall4_2783(7936, 3432), 3);
    add_background_object(create_tbbluewall4_2783(7936, 3496), 3);
    add_background_object(create_tbbluewall4_2783(7936, 3560), 3);
    add_background_object(create_tbbluewall6_2784(8128, 3432), 3);
    add_background_object(create_tbbluewall7_2788(8064, 3432), 3);
    add_background_object(create_tbbluewall8_2785(8064, 3368), 3);
    add_background_object(create_tbtunneltop2_2770(8000, 3368), 3);
    add_background_object(create_tbtunneltop2_2770(8000, 3432), 3);
    add_background_object(create_tbsolidblack_2688(7808, 3688), 3);
    add_background_object(create_tbsolidblack_2688(7808, 3816), 3);
    add_background_object(create_tbsolidblack_2688(7936, 3688), 3);
    add_background_object(create_tbsolidblack_2688(7936, 3816), 3);
    add_background_object(create_tbsolidblack_2688(7680, 3560), 3);
    add_background_object(create_tbsolidblack_2688(7680, 3688), 3);
    add_background_object(create_tbsolidblack_2688(7680, 3816), 3);
    add_background_object(create_tbsolidblack_2688(7552, 3496), 3);
    add_background_object(create_tbsolidblack_2688(7552, 3624), 3);
    add_background_object(create_tbsolidblack_2688(7552, 3752), 3);
    add_background_object(create_tbbluewall2_2782(8064, 3624), 3);
    add_background_object(create_tbbluewall2_2782(8128, 3624), 3);
    add_background_object(create_tbsolidblack_2688(8064, 3688), 3);
    add_background_object(create_tbsolidblack_2688(8064, 3816), 3);
    add_background_object(create_tbbluewall2_2782(8192, 3624), 3);
    add_background_object(create_tbbluewall2_2782(8256, 3624), 3);
    add_background_object(create_tbsolidblack_2688(8192, 3688), 3);
    add_background_object(create_tbsolidblack_2688(8192, 3816), 3);
    add_background_object(create_tbbluewall2_2782(8320, 3624), 3);
    add_background_object(create_tbbluewall2_2782(8384, 3624), 3);
    add_background_object(create_tbsolidblack_2688(8320, 3688), 3);
    add_background_object(create_tbsolidblack_2688(8320, 3816), 3);
    add_background_object(create_tbsolidblack_2688(8448, 3688), 3);
    add_background_object(create_tbsolidblack_2688(8448, 3816), 3);
    add_background_object(create_tbsolidblack_2688(8576, 3688), 3);
    add_background_object(create_tbsolidblack_2688(8576, 3816), 3);
    add_background_object(create_tbsolidblack_2688(8704, 3816), 3);
    add_background_object(create_tbbluewall2_2782(8576, 3624), 3);
    add_background_object(create_tbbluewall6_2784(8256, 3432), 3);
    add_background_object(create_tbbluewall6_2784(8320, 3432), 3);
    add_background_object(create_tbbluewall6_2784(8384, 3432), 3);
    add_background_object(create_tbbluewall12_2792(8576, 3432), 3);
    add_background_object(create_tbbluewall8_2785(8640, 3560), 3);
    add_background_object(create_tbtunneltop2_2770(8000, 3496), 3);
    add_background_object(create_tbtunneltop2_2770(8000, 3560), 3);
    add_background_object(create_tbtunneltop2_2770(8064, 3496), 3);
    add_background_object(create_tbtunneltop2_2770(8064, 3560), 3);
    add_background_object(create_tbtunneltop2_2770(8128, 3496), 3);
    add_background_object(create_tbtunneltop2_2770(8128, 3560), 3);
    add_background_object(create_tbtunneltop2_2770(8192, 3560), 3);
    add_background_object(create_tbtunneltop2_2770(8256, 3560), 3);
    add_background_object(create_tbtunneltop2_2770(8320, 3560), 3);
    add_background_object(create_tbtunneltop2_2770(8384, 3560), 3);
    add_background_object(create_tbtunneltop2_2770(8448, 3560), 3);
    add_background_object(create_tbbluewall2_2782(8448, 3624), 3);
    add_background_object(create_tbbluewall2_2782(8512, 3624), 3);
    add_background_object(create_tbbluewall6_2784(8448, 3432), 3);
    add_background_object(create_tbbluewall6_2784(8512, 3432), 3);
    add_background_object(create_tbtunneltop2_2770(8512, 3560), 3);
    add_background_object(create_tbtunneltop2_2770(8576, 3560), 3);
    add_background_object(create_tbbluewall6_2784(8192, 3432), 3);
    add_background_object(create_tbtunneltop2_2770(8192, 3496), 3);
    add_background_object(create_tbtunneltop2_2770(8256, 3496), 3);
    add_background_object(create_tbtunneltop2_2770(8320, 3496), 3);
    add_background_object(create_tbtunneltop2_2770(8384, 3496), 3);
    add_background_object(create_tbtunneltop2_2770(8448, 3496), 3);
    add_background_object(create_tbtunneltop2_2770(8512, 3496), 3);
    add_background_object(create_tbbluewall12_2792(8640, 3496), 3);
    add_background_object(create_tbbluewall7_2788(8576, 3496), 3);
    add_object(create_hazardlavafallwarning_2709(11440, 2536), 3);
    add_object(create_tbwaterlight_2848(4744, 3368), 3);
    add_object(create_tbwaterlight_2848(4744, 3320), 3);
    add_object(create_tbwaterlight_2848(4744, 3272), 3);
    add_object(create_tbwaterlight_2848(4744, 3224), 3);
    add_object(create_tbwaterlight_2848(4744, 3176), 3);
    add_object(create_tbwaterlight_2848(4744, 3128), 3);
    add_object(create_playerstartingpoint_358(149, 2069), 3);
    add_object(create_levelfireplatform2_2739(-272, 1944), 3);
    add_object(create_levelfireplatformflame1_2644(7276, 2735), 3);
    add_object(create_levelfireplatformflame2_2645(7380, 2735), 3);
    add_object(create_levelfireplatform1_2646(7328, 2736), 3);
    add_object(create_lockeddoorbarrier_2667(10520, 2632), 3);
    add_object(create_gimmickclothesline_1970(992, 1480), 3);
    add_object(create_gimmickhanginglongsensor2_1741(912, 1488), 3);
    add_object(create_gimmickhanginglongsensor2_1741(1184, 1488), 3);
    add_object(create_gimmickclothesline_1970(1064, 1480), 3);
    add_object(create_gimmickclothesline_1970(1136, 1480), 3);
    add_object(create_enemypushuphitbox_2653(-379, 2497), 3);
    add_object(create_cameratriggerboss_424(15136, 424), 3);
    add_object(create_sbbackeye2_2242(-480, 1640), 3);
    add_object(create_enemysaucerleg4_2810(832, 2576), 3);
    add_object(create_enemysaucerleg1_2811(800, 2576), 3);
    add_object(create_enemysaucer_2812(800, 2576), 3);
    add_object(create_enemysaucerleg2_2813(768, 2576), 3);
    add_object(create_enemysaucerleg3_2814(800, 2576), 3);
    add_object(create_enemysaucerlimiter_2815(1032, 2576), 3);
    add_object(create_gimmickconveyorbeltright_2818(5408, 2856), 3);
    add_object(create_gimmickconveyorbeltright2_2819(5376, 2856), 3);
    add_object(create_gimmickconveyorbeltright3_2820(5792, 2856), 3);
    add_object(create_gimmickconveyorbeltright_2818(5664, 2856), 3);
    add_object(create_hazardlavafallwarning_2709(6256, 2728), 3);
    add_object(create_hazardlavafallwarning_2709(6464, 2728), 3);
    add_object(create_objectkeycard_2643(-280, 1872), 3);
    add_object(create_tbpipeloop10_2849(1792, 2600), 3);
    add_object(create_tbpipeloop10_2849(1856, 2600), 3);
    add_object(create_tbpipeloop10_2849(1920, 2600), 3);
    add_object(create_tbpipeloop11_2850(1600, 2600), 3);
    add_object(create_tbpipeloop11_2850(1664, 2600), 3);
    add_object(create_tbpipeloop11_2850(1728, 2600), 3);
    add_object(create_layerchangeto0_405(1504, 2544), 3);
    add_object(create_layerchangeto0_405(1504, 2488), 3);
    add_object(create_layerchangeswitch_404(1640, 2704), 3);
    add_object(create_layerchangeswitch2_1239(2024, 2544), 3);
    add_object(create_tbpipeloop3_2807(2176, 2536), 3);
    add_object(create_tbpipeloop4_2808(2048, 2536), 3);
    add_object(create_layerchangeswitch_404(2168, 2472), 3);
    add_object(create_gimmickconveyorbeltright2_2819(5272, 1376), 3);
    add_object(create_gimmickconveyorbeltright_2818(5304, 1376), 3);
    add_object(create_gimmickconveyorbeltright3_2820(5432, 1376), 3);
    add_object(create_gimmickconveyorbeltleft2_2825(5624, 1536), 3);
    add_object(create_gimmickconveyorbeltleft2_2825(5464, 1568), 3);
    add_object(create_gimmickconveyorbeltleft_2824(5496, 1568), 3);
    add_object(create_gimmickconveyorbeltleft3_2826(5624, 1568), 3);
    add_object(create_enemyelitemask_2511(14940, 1896), 3);
    add_object(create_enemyelite_2510(14943, 1895), 3);
    add_object(create_hazardfloortrap_2748(-328, 2768), 3);
    add_object(create_tbpipeloop11_2850(-512, 1496), 3);
    add_object(create_tbpipeloop2_2804(-512, 1496), 3);
    add_object(create_tbpipeloop3_2807(-512, 1496), 3);
    add_object(create_tbpipeloop5_2805(-512, 1496), 3);
    add_object(create_tbpipeloop6_2809(-512, 1496), 3);
    add_object(create_tbpipeloop7_2806(-512, 1496), 3);
    add_object(create_tbpipeloop1_2803(-384, 1496), 3);
    add_object(create_tbpipeloop10_2849(-384, 1496), 3);
    add_object(create_tbpipeloop4_2808(-384, 1496), 3);
    add_object(create_tbpipeloop8_2822(-384, 1496), 3);
    add_object(create_hazardspikesup_2669(960, 1544), 3);
    add_object(create_hazardspikesup_2669(992, 1544), 3);
    add_object(create_hazardspikesup_2669(1024, 1544), 3);
    add_object(create_hazardspikesup_2669(1056, 1544), 3);
    add_object(create_hazardspikesup_2669(1088, 1544), 3);
    add_object(create_hazardspikesup_2669(1120, 1544), 3);
    add_object(create_gimmickclothesline_1970(1176, 1480), 3);
    add_object(create_gimmickconveyorbeltright3_2820(480, 2088), 3);
    add_object(create_gimmickconveyorbeltright2_2819(320, 2088), 3);
    add_object(create_gimmickconveyorbeltright_2818(352, 2088), 3);
    add_object(create_gimmickconveyorbeltright3_2820(768, 2088), 3);
    add_object(create_gimmickconveyorbeltright2_2819(608, 2088), 3);
    add_object(create_gimmickconveyorbeltright_2818(640, 2088), 3);
    add_object(create_objectcrystal_279(941, 2106), 3);
    add_object(create_objectcrystal_279(941, 2010), 3);
    add_object(create_objectcrystal_279(941, 2058), 3);
    add_object(create_objectcrystal_279(997, 1514), 3);
    add_object(create_objectcrystal_279(1125, 1514), 3);
    add_object(create_objectcrystal_279(1061, 1514), 3);
    add_object(create_objectcrystal_279(1093, 1514), 3);
    add_object(create_objectcrystal_279(1029, 1514), 3);
    add_object(create_objectcrystal_279(397, 2074), 3);
    add_object(create_objectcrystal_279(477, 2074), 3);
    add_object(create_objectcrystal_279(357, 2074), 3);
    add_object(create_objectcrystal_279(437, 2074), 3);
    add_object(create_objectcrystal_279(685, 2074), 3);
    add_object(create_objectcrystal_279(765, 2074), 3);
    add_object(create_objectcrystal_279(645, 2074), 3);
    add_object(create_objectcrystal_279(725, 2074), 3);
    add_object(create_enemysaucerlimiter_2815(640, 2576), 3);
    add_object(create_enemysaucerleg4_2810(1472, 2576), 3);
    add_object(create_enemysaucerleg1_2811(1440, 2576), 3);
    add_object(create_enemysaucer_2812(1440, 2576), 3);
    add_object(create_enemysaucerleg2_2813(1408, 2576), 3);
    add_object(create_enemysaucerleg3_2814(1440, 2576), 3);
    add_object(create_enemysaucerlimiter_2815(1664, 2576), 3);
    add_object(create_enemysaucerlimiter_2815(1312, 2576), 3);
    add_object(create_gimmickconveyorbeltleft_2824(1840, 2184), 3);
    add_object(create_gimmickconveyorbeltleft_2824(1712, 2184), 3);
    add_object(create_gimmickconveyorbeltleft2_2825(1680, 2184), 3);
    add_object(create_gimmickconveyorbeltleft3_2826(1968, 2184), 3);
    add_object(create_objectcodec_354(1842, 2157), 3);
    add_object(create_objectcrystal_279(1717, 2170), 3);
    add_object(create_objectcrystal_279(1741, 2170), 3);
    add_object(create_objectcrystal_279(1717, 2146), 3);
    add_object(create_objectcrystal_279(1741, 2146), 3);
    add_object(create_objectcrystal_279(1941, 2170), 3);
    add_object(create_objectcrystal_279(1965, 2170), 3);
    add_object(create_objectcrystal_279(1941, 2146), 3);
    add_object(create_objectcrystal_279(1965, 2146), 3);
    add_object(create_enemyseeker_2648(1375, 2160), 3);
    add_object(create_gimmickwaterturbine_2851(1728, 3464), 3);
    add_object(create_gimmickwaterturbine_2851(1728, 3528), 3);
    add_object(create_gimmickwaterturbinebubble_2829(-356, 3260), 3);
    add_object(create_gimmickwaterturbine_2851(1920, 3144), 3);
    add_object(create_gimmickwaterturbine_2851(1920, 3208), 3);
    add_object(create_gimmickwaterturbine_2851(3008, 2952), 3);
    add_object(create_gimmickwaterturbine_2851(3008, 3016), 3);
    add_object(create_airventplatform_2668(-368, 2800), 3);
    add_object(create_gimmickwaterlevelmask1_2852(3297, 2800), 3);
    add_object(create_gimmickwaterlevelmask2_2853(7777, 2832), 3);
    add_object(create_gimmickwaterturbine_2851(1472, 3080), 3);
    add_object(create_enemylimiter_350(3365, 2826), 3);
    add_object(create_enemylimiter_350(3701, 2826), 3);
    add_object(create_enemytankbot_2821(3455, 2817), 3);
    add_object(create_objectpetal_302(2177, 2585), 3);
    add_object(create_objectpetal_302(2225, 2537), 3);
    add_object(create_objectpetal_302(2177, 2489), 3);
    add_object(create_objectpetal_302(2129, 2537), 3);
    add_object(create_objectcrystal_279(1365, 2946), 3);
    add_object(create_objectcrystal_279(1461, 2946), 3);
    add_object(create_objectcrystal_279(1461, 3026), 3);
    add_object(create_objectcrystal_279(1365, 3026), 3);
    add_object(create_objectcrystal_279(1397, 2946), 3);
    add_object(create_objectcrystal_279(1397, 3026), 3);
    add_object(create_objectcrystal_279(1429, 2946), 3);
    add_object(create_objectcrystal_279(1429, 3026), 3);
    add_object(create_objectcrystal_279(1461, 2986), 3);
    add_object(create_objectcrystal_279(1365, 2986), 3);
    add_object(create_objectcrystal_279(1397, 2986), 3);
    add_object(create_objectcrystal_279(1429, 2986), 3);
    add_object(create_gimmickwaterturbine_2851(2624, 3592), 3);
    add_object(create_gimmickwaterturbine_2851(2624, 3656), 3);
    add_object(create_gimmickwaterturbine_2851(3584, 3464), 3);
    add_object(create_redspringup_440(4544, 3224), 3);
    add_object(create_redspringup_440(4576, 3224), 3);
    add_object(create_redspringup_440(4608, 3224), 3);
    add_object(create_redspringup_440(4640, 3224), 3);
    add_object(create_gimmickconveyorbeltright_2818(5536, 2856), 3);
    add_object(create_enemyseeker_2648(5319, 2784), 3);
    add_object(create_enemyseeker_2648(5375, 2760), 3);
    add_object(create_enemyseeker_2648(5431, 2736), 3);
    add_object(create_enemypushup_2656(4484, 2599), 3);
    add_object(create_enemypushuphitbox_2653(4485, 2529), 3);
    add_object(create_hazardlavafallwarning_2709(6576, 2728), 3);
    add_object(create_hazardlavafallwarning_2709(6784, 2728), 3);
    add_object(create_objectcrystal_279(3549, 2690), 3);
    add_object(create_objectcrystal_279(3613, 2690), 3);
    add_object(create_objectcrystal_279(3677, 2690), 3);
    add_object(create_objectcrystal_279(3741, 2690), 3);
    add_object(create_objectcrystal_279(3805, 2690), 3);
    add_object(create_objectcrystal_279(3869, 2690), 3);
    add_object(create_objectcrystal_279(3933, 2690), 3);
    add_object(create_gimmickwaterturbine_2851(3584, 3400), 3);
    add_object(create_gimmickwaterturbine_2851(3584, 3528), 3);
    add_object(create_hazardlavafallwarning_2709(5936, 2728), 3);
    add_object(create_hazardlavafallwarning_2709(6144, 2728), 3);
    add_object(create_objectcrystal_279(6181, 2770), 3);
    add_object(create_objectcrystal_279(6237, 2770), 3);
    add_object(create_objectcrystal_279(6181, 2714), 3);
    add_object(create_objectcrystal_279(6237, 2714), 3);
    add_object(create_objectpetal_302(6505, 2769), 3);
    add_object(create_objectpetal_302(6553, 2769), 3);
    add_object(create_objectpetal_302(6505, 2721), 3);
    add_object(create_objectpetal_302(6553, 2721), 3);
    add_object(create_tbwaterlight_2848(1800, 3272), 3);
    add_object(create_tbwaterlight_2848(1800, 3320), 3);
    add_object(create_tbwaterlight_2848(1800, 3368), 3);
    add_object(create_tbwaterlight_2848(1992, 3128), 3);
    add_object(create_tbwaterlight_2848(1992, 3176), 3);
    add_object(create_tbwaterlight_2848(1992, 3224), 3);
    add_object(create_tbwaterlight_2848(1992, 3272), 3);
    add_object(create_tbwaterlight_2848(1992, 3320), 3);
    add_object(create_tbwaterlight_2848(1992, 3368), 3);
    add_object(create_objectcrystal_279(1973, 3226), 3);
    add_object(create_objectcrystal_279(2021, 3226), 3);
    add_object(create_objectcrystal_279(2021, 3274), 3);
    add_object(create_objectcrystal_279(1973, 3274), 3);
    add_object(create_objectcrystal_279(1973, 3178), 3);
    add_object(create_objectcrystal_279(2021, 3178), 3);
    add_object(create_objectcrystal_279(1973, 3130), 3);
    add_object(create_objectcrystal_279(2021, 3130), 3);
    add_object(create_objectcrystal_279(1925, 3274), 3);
    add_object(create_objectcrystal_279(1877, 3274), 3);
    add_object(create_objectcrystal_279(1973, 3322), 3);
    add_object(create_objectcrystal_279(1925, 3322), 3);
    add_object(create_objectcrystal_279(1877, 3322), 3);
    add_object(create_objectcrystal_279(1973, 3370), 3);
    add_object(create_objectcrystal_279(1925, 3370), 3);
    add_object(create_objectcrystal_279(1877, 3370), 3);
    add_object(create_monitorkeystone_562(5344, 2440), 3);
    add_object(create_laddertop_357(5292, 2495), 3);
    add_object(create_hazardspikesup_2669(7488, 2952), 3);
    add_object(create_hazardspikesup_2669(7520, 2952), 3);
    add_object(create_hazardspikesup_2669(7552, 2952), 3);
    add_object(create_hazardspikesup_2669(7584, 2952), 3);
    add_object(create_gimmickconveyorbeltleft2_2825(7040, 2888), 3);
    add_object(create_gimmickconveyorbeltleft_2824(7072, 2888), 3);
    add_object(create_gimmickconveyorbeltleft_2824(7200, 2888), 3);
    add_object(create_gimmickconveyorbeltleft_2824(7328, 2888), 3);
    add_object(create_gimmickconveyorbeltleft3_2826(7456, 2888), 3);
    add_object(create_gimmickwaterturbine_2851(7936, 3144), 3);
    add_object(create_gimmickwaterturbine_2851(7936, 3208), 3);
    add_object(create_gimmickwaterturbine_2851(7936, 3080), 3);
    add_object(create_gimmickwaterturbine_2851(7936, 3016), 3);
    add_object(create_gimmickwaterturbine_2851(7936, 2952), 3);
    add_object(create_gimmickwaterturbine_2851(8896, 3400), 3);
    add_object(create_gimmickwaterturbine_2851(8896, 3464), 3);
    add_object(create_gimmickconveyorbeltleft2_2825(11008, 2664), 3);
    add_object(create_gimmickconveyorbeltleft_2824(11040, 2664), 3);
    add_object(create_gimmickconveyorbeltleft_2824(11168, 2664), 3);
    add_object(create_gimmickconveyorbeltleft3_2826(11296, 2664), 3);
    add_object(create_enemytankbot_2821(11415, 2561), 3);
    add_object(create_enemylimiter_350(11333, 2570), 3);
    add_object(create_enemylimiter_350(11477, 2570), 3);
    add_object(create_hazardfireup_2226(944, 2407), 3);
    add_object(create_hazardfireup_2226(912, 2407), 3);
    add_object(create_hazardfireup_2226(880, 2407), 3);
    add_object(create_hazardfireup_2226(848, 2407), 3);
    add_object(create_hazardfireup_2226(816, 2407), 3);
    add_object(create_hazardfireup_2226(784, 2407), 3);
    add_object(create_hazardfireup_2226(752, 2407), 3);
    add_object(create_hazardfireup_2226(720, 2407), 3);
    add_object(create_hazardfireup_2226(688, 2407), 3);
    add_object(create_hazardfireup_2226(656, 2407), 3);
    add_object(create_hazardfireup_2226(816, 2215), 3);
    add_object(create_hazardfireup_2226(784, 2215), 3);
    add_object(create_hazardfireup_2226(752, 2215), 3);
    add_object(create_hazardfireup_2226(720, 2215), 3);
    add_object(create_hazardfireup_2226(688, 2215), 3);
    add_object(create_hazardfireup_2226(656, 2215), 3);
    add_object(create_hazardfireup_2226(624, 2215), 3);
    add_object(create_hazardfireup_2226(592, 2215), 3);
    add_object(create_hazardfireup_2226(560, 2215), 3);
    add_object(create_hazardfireup_2226(528, 2215), 3);
    add_object(create_hazardfireup_2226(496, 2215), 3);
    add_object(create_hazardfireup_2226(464, 2215), 3);
    add_object(create_hazardfireup_2226(432, 2215), 3);
    add_object(create_hazardfireup_2226(400, 2215), 3);
    add_object(create_hazardfireup_2226(368, 2215), 3);
    add_object(create_hazardfireup_2226(336, 2215), 3);
    add_object(create_hazardfireup_2226(304, 2215), 3);
    add_object(create_hazardfireup_2226(272, 2215), 3);
    add_object(create_hazardfireup_2226(240, 2215), 3);
    add_object(create_hazardfireup_2226(208, 2215), 3);
    add_object(create_hazardfireup_2226(176, 2215), 3);
    add_object(create_hazardfireup_2226(144, 2215), 3);
    add_object(create_hazardfireright_2228(1152, 1880), 3);
    add_object(create_hazardfireright_2228(1152, 1848), 3);
    add_object(create_hazardfireleft_2229(1279, 1656), 3);
    add_object(create_hazardfireleft_2229(1279, 1688), 3);
    add_object(create_hazardfireup_2226(5584, 2887), 3);
    add_object(create_hazardfireup_2226(5616, 2887), 3);
    add_object(create_hazardfireup_2226(5776, 2887), 3);
    add_object(create_hazardfireup_2226(5808, 2887), 3);
    add_object(create_hazardfireright_2228(7040, 2872), 3);
    add_object(create_hazardfireright_2228(7040, 2904), 3);
    add_object(create_hazardfireright_2228(7040, 2808), 3);
    add_object(create_hazardfireright_2228(7040, 2840), 3);
    add_object(create_objectpetal_302(7329, 2577), 3);
    add_object(create_objectpetal_302(7281, 2577), 3);
    add_object(create_objectpetal_302(7377, 2577), 3);
    add_object(create_hazardfireup_2226(5392, 2887), 3);
    add_object(create_hazardfireup_2226(5424, 2887), 3);
    add_object(create_laddertop_357(10412, 2367), 3);
    add_object(create_objectkeycard_2643(10256, 2320), 3);
    add_object(create_objectcrystal_279(10221, 2242), 3);
    add_object(create_objectcrystal_279(10317, 2242), 3);
    add_object(create_objectcrystal_279(10245, 2242), 3);
    add_object(create_objectcrystal_279(10293, 2242), 3);
    add_object(create_objectcrystal_279(10221, 2274), 3);
    add_object(create_objectcrystal_279(10317, 2274), 3);
    add_object(create_objectcrystal_279(10245, 2274), 3);
    add_object(create_objectcrystal_279(10293, 2274), 3);
    add_object(create_hazardlavafallwarning_2709(10608, 2664), 3);
    add_object(create_hazardlavafallwarning_2709(10816, 2664), 3);
    add_object(create_hazardlavafallwarning_2709(11056, 2600), 3);
    add_object(create_hazardlavafallwarning_2709(11264, 2600), 3);
    add_object(create_enemylavasquid_2721(10474, 2288), 3);
    add_object(create_enemylimiter_350(10069, 2282), 3);
    add_object(create_enemylimiter_350(10581, 2282), 3);
    add_object(create_monitorcrate_409(10976, 2632), 3);
    add_object(create_monitorcrate_409(10944, 2632), 3);
    add_object(create_monitorcrate_409(10912, 2632), 3);
    add_object(create_laddertop_357(10964, 2207), 3);
    add_object(create_enemylavasquid_2721(11018, 2368), 3);
    add_object(create_enemylimiter_350(11029, 2370), 3);
    add_object(create_enemylimiter_350(11093, 2370), 3);
    add_object(create_enemylimiter_350(10885, 2370), 3);
    add_object(create_enemylavasquid_2721(11034, 2616), 3);
    add_object(create_gimmckgiantpresserhitbox_2854(6048, 2855), 3);
    add_object(create_gimmckgiantpresserhitbox_2854(6368, 2855), 3);
    add_object(create_gimmckgiantpresserhitbox_2854(4192, 2919), 3);
    add_object(create_gimmckgiantpresserhitbox_2854(3104, 2855), 3);
    add_object(create_gimmckgiantpresserhitbox_2854(6688, 2855), 3);
    add_object(create_gimmckgiantpresserhitbox_2854(10720, 2727), 3);
    add_object(create_gimmckgiantpresserhitbox_2854(11168, 2663), 3);
    add_object(create_gimmckgiantpresserhitbox_2854(11552, 2727), 3);
    add_object(create_gimmickconveyorbeltright_2818(10592, 2728), 3);
    add_object(create_gimmickconveyorbeltright2_2819(10560, 2728), 3);
    add_object(create_gimmickconveyorbeltright3_2820(10848, 2728), 3);
    add_object(create_gimmickconveyorbeltright_2818(10720, 2728), 3);
    add_object(create_gimmickconveyorbeltright_2818(11872, 2760), 3);
    add_object(create_gimmickconveyorbeltright2_2819(11840, 2760), 3);
    add_object(create_gimmickconveyorbeltright3_2820(12000, 2760), 3);
    add_object(create_gimmickconveyorbeltright_2818(12064, 2760), 3);
    add_object(create_gimmickconveyorbeltright2_2819(12032, 2760), 3);
    add_object(create_gimmickconveyorbeltright3_2820(12192, 2760), 3);
    add_object(create_gimmickconveyorbeltright_2818(11808, 2184), 3);
    add_object(create_gimmickconveyorbeltright2_2819(11776, 2184), 3);
    add_object(create_gimmickconveyorbeltright_2818(12064, 2184), 3);
    add_object(create_gimmickconveyorbeltright3_2820(12192, 2184), 3);
    add_object(create_levelpistonplatform1_2717(12224, 2728), 3);
    add_object(create_hazardfireup_2226(11856, 2855), 3);
    add_object(create_hazardfireup_2226(11888, 2855), 3);
    add_object(create_hazardfireup_2226(11920, 2855), 3);
    add_object(create_hazardfireup_2226(11952, 2855), 3);
    add_object(create_hazardfireup_2226(11984, 2855), 3);
    add_object(create_hazardfireup_2226(12016, 2855), 3);
    add_object(create_hazardfireup_2226(12048, 2855), 3);
    add_object(create_hazardfireup_2226(12080, 2855), 3);
    add_object(create_hazardfireup_2226(12112, 2855), 3);
    add_object(create_hazardfireup_2226(12144, 2855), 3);
    add_object(create_hazardfireup_2226(12176, 2855), 3);
    add_object(create_hazardfireup_2226(12208, 2855), 3);
    add_object(create_hazardfireup_2226(12240, 2855), 3);
    add_object(create_hazardfireup_2226(12272, 2855), 3);
    add_object(create_hazardfireup_2226(12304, 2855), 3);
    add_object(create_hazardfireup_2226(12336, 2855), 3);
    add_object(create_hazardfireup_2226(12368, 2855), 3);
    add_object(create_hazardfireup_2226(12400, 2855), 3);
    add_object(create_hazardfireup_2226(12432, 2855), 3);
    add_object(create_hazardfireup_2226(12464, 2855), 3);
    add_object(create_hazardfireup_2226(12496, 2855), 3);
    add_object(create_hazardfireup_2226(12528, 2855), 3);
    add_object(create_hazardfireup_2226(12560, 2855), 3);
    add_object(create_hazardfireup_2226(12592, 2855), 3);
    add_object(create_levelpistonplatform1_2717(12352, 2728), 3);
    add_object(create_levelpistonplatform1_2717(12480, 2728), 3);
    add_object(create_redspringright_441(10880, 2152), 3);
    add_object(create_redspringright_441(10880, 2120), 3);
    add_object(create_redspringright_441(10880, 2088), 3);
    add_object(create_redspringright_441(10880, 2056), 3);
    add_object(create_redspringright_441(10880, 2024), 3);
    add_object(create_hazardspikesleft_2855(928, 1832), 3);
    add_object(create_hazardspikesleft_2855(928, 1864), 3);
    add_object(create_hazardspikesright_2856(832, 1640), 3);
    add_object(create_hazardspikesright_2856(832, 1672), 3);
    add_object(create_objectcrystal_279(11229, 2186), 3);
    add_object(create_objectcrystal_279(11293, 2186), 3);
    add_object(create_objectcrystal_279(11357, 2186), 3);
    add_object(create_objectcrystal_279(11421, 2186), 3);
    add_object(create_objectcrystal_279(11485, 2186), 3);
    add_object(create_objectcrystal_279(11549, 2186), 3);
    add_object(create_objectcrystal_279(11229, 2090), 3);
    add_object(create_objectcrystal_279(11293, 2090), 3);
    add_object(create_objectcrystal_279(11357, 2090), 3);
    add_object(create_objectcrystal_279(11421, 2090), 3);
    add_object(create_objectcrystal_279(11485, 2090), 3);
    add_object(create_objectcrystal_279(11549, 2090), 3);
    add_object(create_sbbackeye2_2242(12352, 2368), 3);
    add_object(create_gimmickconveyorbeltright_2818(11936, 2184), 3);
    add_object(create_objectpetal_302(12305, 2321), 3);
    add_object(create_objectpetal_302(12529, 2321), 3);
    add_object(create_objectpetal_302(12305, 2545), 3);
    add_object(create_objectpetal_302(12529, 2545), 3);
    add_object(create_objectpetal_302(12353, 2577), 3);
    add_object(create_objectpetal_302(12481, 2577), 3);
    add_object(create_objectpetal_302(12353, 2289), 3);
    add_object(create_objectpetal_302(12481, 2289), 3);
    add_object(create_objectpetal_302(12273, 2369), 3);
    add_object(create_objectpetal_302(12273, 2497), 3);
    add_object(create_objectpetal_302(12561, 2369), 3);
    add_object(create_objectpetal_302(12561, 2497), 3);
    add_object(create_monitorearthshield_326(10048, 2312), 3);
    add_object(create_levelfireplatformflame1_2644(11980, 2599), 3);
    add_object(create_levelfireplatformflame2_2645(12084, 2599), 3);
    add_object(create_levelfireplatform1_2646(12032, 2600), 3);
    add_object(create_levelfireplatformflame1_2644(11852, 2415), 3);
    add_object(create_levelfireplatformflame2_2645(11956, 2415), 3);
    add_object(create_levelfireplatform1_2646(11904, 2416), 3);
    add_object(create_objectcodec_354(11906, 2253), 3);
    add_object(create_gimmickwaterturbine_2851(13184, 3016), 3);
    add_object(create_gimmickwaterturbine_2851(13184, 3080), 3);
    add_object(create_yellowspringupleft_432(14432, 2824), 3);
    add_object(create_yellowspringupleft_432(14432, 2792), 3);
    add_object(create_yellowspringupleft_432(14432, 2760), 3);
    add_object(create_yellowspringupleft_432(14432, 2728), 3);
    add_object(create_yellowspringupleft_432(14432, 2696), 3);
    add_object(create_yellowspringupleft_432(14432, 2664), 3);
    add_object(create_yellowspringupleft_432(14432, 2632), 3);
    add_object(create_yellowspringupleft_432(14432, 2600), 3);
    add_object(create_yellowspringupleft_432(14432, 2568), 3);
    add_object(create_yellowspringupleft_432(14432, 2536), 3);
    add_object(create_yellowspringupright_433(14304, 2760), 3);
    add_object(create_yellowspringupright_433(14304, 2728), 3);
    add_object(create_yellowspringupright_433(14304, 2696), 3);
    add_object(create_yellowspringupright_433(14304, 2664), 3);
    add_object(create_yellowspringupright_433(14304, 2632), 3);
    add_object(create_yellowspringupright_433(14304, 2600), 3);
    add_object(create_yellowspringupright_433(14304, 2568), 3);
    add_object(create_yellowspringupright_433(14304, 2536), 3);
    add_object(create_yellowspringupright_433(14304, 2504), 3);
    add_object(create_yellowspringupright_433(14304, 2472), 3);
    add_object(create_tbpipeloop3_2807(13888, 2408), 3);
    add_object(create_tbpipeloop7_2806(13888, 2152), 3);
    add_object(create_tbpipeloop5_2805(13952, 2344), 3);
    add_object(create_tbpipeloop1_2803(13696, 2152), 3);
    add_object(create_tbpipeloop8_2822(13696, 2280), 3);
    add_object(create_tbpipeloop8_2822(13696, 2344), 3);
    add_object(create_tbpipeloop4_2808(13696, 2408), 3);
    add_object(create_objectcrystal_279(13933, 2378), 3);
    add_object(create_objectcrystal_279(13933, 2314), 3);
    add_object(create_objectcrystal_279(13781, 2378), 3);
    add_object(create_objectcrystal_279(13781, 2314), 3);
    add_object(create_objectcrystal_279(13797, 2434), 3);
    add_object(create_objectcrystal_279(13909, 2434), 3);
    add_object(create_objectcrystal_279(13853, 2450), 3);
    add_object(create_objectcrystal_279(13797, 2258), 3);
    add_object(create_objectcrystal_279(13909, 2258), 3);
    add_object(create_objectcrystal_279(13853, 2234), 3);
    add_object(create_layerchangeto1_406(14104, 2352), 3);
    add_object(create_layerchangeto1_406(14104, 2416), 3);
    add_object(create_layerchangeto0_405(13592, 2288), 3);
    add_object(create_layerchangeto0_405(13592, 2416), 3);
    add_object(create_layerchangeto0_405(13592, 2352), 3);
    add_object(create_layerchangeswitch_404(13848, 2216), 3);
    add_object(create_objectpetal_302(9761, 3465), 3);
    add_object(create_objectpetal_302(9889, 3465), 3);
    add_object(create_objectpetal_302(10017, 3465), 3);
    add_object(create_objectkeycard_2643(8592, 3600), 3);
    add_object(create_lockeddoorbarrier_2667(14552, 1992), 3);
    add_object(create_objectcodec_354(14706, 2037), 3);
    add_object(create_monitor1up_410(14656, 2056), 3);
    add_object(create_tbwaterlight_2848(9864, 2992), 3);
    add_object(create_tbwaterlight_2848(9864, 2944), 3);
    add_object(create_tbwaterlight_2848(9864, 2896), 3);
    add_object(create_tbwaterlight_2848(9864, 2848), 3);
    add_object(create_tbwaterlight_2848(9864, 2800), 3);
    add_object(create_tbwaterlight_2848(9864, 2752), 3);
    add_object(create_tbwaterlight_2848(9992, 2992), 3);
    add_object(create_tbwaterlight_2848(9992, 2944), 3);
    add_object(create_tbwaterlight_2848(9992, 2896), 3);
    add_object(create_tbwaterlight_2848(9992, 2848), 3);
    add_object(create_tbwaterlight_2848(9992, 2800), 3);
    add_object(create_tbwaterlight_2848(9992, 2752), 3);
    add_object(create_yellowspringupright_433(14208, 2184), 3);
    add_object(create_laddertop_357(14444, 2111), 3);
    add_object(create_enemylimiter_350(14997, 1842), 3);
    add_object(create_enemyelitemask_2511(14940, 1256), 3);
    add_object(create_enemyelite_2510(14943, 1255), 3);
    add_object(create_levellift_2647(15032, 2344), 3);
    add_object(create_levellift_2647(15136, 2344), 3);
    add_object(create_levellift_2647(15240, 2344), 3);
    add_object(create_enemyseeker_2648(15327, 1752), 3);
    add_object(create_enemylavasquid_2721(15258, 800), 3);
    add_object(create_enemylimiter_350(14997, 1202), 3);
    add_object(create_enemylimiter_350(14981, 1122), 3);
    add_object(create_enemylimiter_350(15277, 802), 3);
    add_object(create_enemylimiter_350(15381, 802), 3);
    add_object(create_enemyseeker_2648(2567, 3192), 3);
    add_object(create_gimmickconveyorbeltright2_2819(12672, 2584), 3);
    add_object(create_gimmickconveyorbeltright_2818(12704, 2584), 3);
    add_object(create_gimmickconveyorbeltright3_2820(12832, 2584), 3);
    add_object(create_gimmickconveyorbeltright2_2819(12864, 2584), 3);
    add_object(create_gimmickconveyorbeltright_2818(12896, 2584), 3);
    add_object(create_gimmickconveyorbeltright3_2820(13024, 2584), 3);
    add_object(create_gimmickconveyorbeltright2_2819(12864, 2392), 3);
    add_object(create_gimmickconveyorbeltright_2818(12896, 2392), 3);
    add_object(create_gimmickconveyorbeltright3_2820(13024, 2392), 3);
    add_object(create_gimmickconveyorbeltright2_2819(12672, 2392), 3);
    add_object(create_gimmickconveyorbeltright_2818(12704, 2392), 3);
    add_object(create_gimmickconveyorbeltright3_2820(12832, 2392), 3);
    add_object(create_gimmickconveyorbeltright2_2819(13056, 2392), 3);
    add_object(create_gimmickconveyorbeltright_2818(13088, 2392), 3);
    add_object(create_gimmickconveyorbeltright3_2820(13216, 2392), 3);
    add_object(create_redspringup_440(9856, 3032), 3);
    add_object(create_redspringup_440(9888, 3032), 3);
    add_object(create_yellowspringup_434(9408, 3304), 3);
    add_object(create_yellowspringup_434(9440, 3304), 3);
    add_object(create_enemytankbot_2821(11599, 2177), 3);
    add_object(create_enemylimiter_350(11077, 2186), 3);
    add_object(create_enemylimiter_350(11669, 2186), 3);
    add_object(create_enemytankbot_2821(11391, 2089), 3);
    add_object(create_enemytankbot_2821(11199, 2177), 3);
    add_object(create_airventplatform_2668(11360, 2128), 3);
    add_object(create_airventplatform_2668(11296, 2128), 3);
    add_object(create_airventplatform_2668(11424, 2128), 3);
    add_object(create_airventplatform_2668(11488, 2128), 3);
    add_object(create_airventplatform_2668(11232, 2128), 3);
    add_object(create_enemylimiter_350(11237, 2106), 3);
    add_object(create_enemylimiter_350(11573, 2106), 3);
    add_object(create_enemyseeker_2648(9647, 3016), 3);
    add_object(create_gimmickconveyorbeltleft_2824(13088, 2488), 3);
    add_object(create_gimmickconveyorbeltleft2_2825(13056, 2488), 3);
    add_object(create_gimmickconveyorbeltleft3_2826(13216, 2488), 3);
    add_object(create_gimmickconveyorbeltleft_2824(13280, 2488), 3);
    add_object(create_gimmickconveyorbeltleft2_2825(13248, 2488), 3);
    add_object(create_gimmickconveyorbeltleft3_2826(13408, 2488), 3);
    add_object(create_objectcodec_354(4442, 2509), 3);
    add_object(create_monitorrings_407(15696, 336), 3);
    add_object(create_airventplatform_2668(15680, 368), 3);
    add_object(create_airventplatform_2668(15808, 368), 3);
    add_object(create_airventplatform_2668(15552, 368), 3);
    add_object(create_monitorbomb_563(15568, 336), 3);
    add_object(create_monitorbomb_563(15824, 336), 3);
    add_object(create_objectfuel_528(1276, 2332), 3);
    add_object(create_monitor1up_410(14688, 2056), 3);
    add_object(create_monitorcrystals_324(8080, 3592), 3);
    add_object(create_hazardspikesdown_2857(8064, 3496), 3);
    add_object(create_hazardspikesup_2669(8224, 3592), 3);
    add_object(create_hazardspikesup_2669(8256, 3592), 3);
    add_object(create_hazardspikesup_2669(8288, 3592), 3);
    add_object(create_hazardspikesdown_2857(8096, 3496), 3);
    add_object(create_hazardspikesdown_2857(8128, 3496), 3);
    add_object(create_hazardspikesdown_2857(8160, 3496), 3);
    add_object(create_hazardspikesdown_2857(8352, 3496), 3);
    add_object(create_hazardspikesdown_2857(8384, 3496), 3);
    add_object(create_hazardspikesdown_2857(8416, 3496), 3);
    add_object(create_hazardspikesdown_2857(8448, 3496), 3);
    add_object(create_hazardspikesup_2669(8416, 3592), 3);
    add_object(create_hazardspikesup_2669(8448, 3592), 3);
    add_object(create_hazardspikesdown_2857(8480, 3496), 3);
    add_object(create_hazardspikesdown_2857(8512, 3496), 3);
    add_object(create_hazardspikesdown_2857(8544, 3496), 3);
    add_object(create_hazardspikesup_2669(8480, 3592), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
    add_background_object(create_tbinvertedloop1_2781(1664, 2600), 4);
    add_background_object(create_tbbluetube3_2797(1792, 2600), 4);
    add_background_object(create_tbbluetube3_2797(1856, 2600), 4);
    add_background_object(create_tbbluetube3_2797(1920, 2600), 4);
    add_background_object(create_tbinvertedloop4_2780(2048, 2536), 4);
    add_background_object(create_tbbluetube1_2796(2176, 2600), 4);
    add_background_object(create_tbbluetube1_2796(2240, 2600), 4);
    add_background_object(create_tbinvertedloop4_2780(13696, 2408), 4);
    add_background_object(create_tbbluetube2_2798(13696, 2344), 4);
    add_background_object(create_tbbluetube2_2798(13696, 2280), 4);
    add_background_object(create_tbinvertedloop1_2781(13696, 2152), 4);
    add_background_object(create_tbbluewall6_2784(13824, 2152), 4);
    add_background_object(create_tbbluewall6_2784(13888, 2152), 4);
    add_background_object(create_tbbluewall6_2784(13760, 2152), 4);
    add_background_object(create_tbbluewall11_2791(13696, 2152), 4);
    add_background_object(create_tbbluewall5_2787(13696, 2216), 4);
    add_background_object(create_tbbluewall12_2792(13952, 2152), 4);
    add_background_object(create_tbbluewall8_2785(13952, 2216), 4);
    add_background_object(create_tbbluewall7_2788(13952, 2280), 4);
    add_background_object(create_tbbluewall2_2782(13888, 2472), 4);
    add_background_object(create_tbbluewall2_2782(13952, 2472), 4);
    add_background_object(create_tbbluepiping4_2858(14880, 1768), 4);
    add_background_object(create_tbbluepiping6_2859(15296, 1672), 4);
    add_background_object(create_tbbluewall4_2783(14848, 1896), 4);
    add_background_object(create_tbbluewall8_2785(15360, 1768), 4);
    add_background_object(create_tbbluewall8_2785(15360, 1704), 4);
    add_background_object(create_tbbluewall8_2785(15360, 1640), 4);
    add_background_object(create_tbbluewall4_2783(14848, 1832), 4);
    add_background_object(create_tbbluewall4_2783(14848, 1768), 4);
    add_background_object(create_tbbluepiping4_2858(14880, 1128), 4);
    add_background_object(create_tbbluepiping6_2859(15296, 712), 4);
    add_background_object(create_tbbluewall8_2785(15360, 808), 4);
    add_background_object(create_tbbluewall8_2785(15360, 744), 4);
    add_background_object(create_tbbluewall8_2785(15360, 680), 4);
    add_background_object(create_tbbluewall4_2783(14848, 1256), 4);
    add_background_object(create_tbbluewall4_2783(14848, 1192), 4);
    add_background_object(create_tbbluewall4_2783(14848, 1128), 4);
    add_object(create_metaldoorfront_2670(24, 2040), 4);
    add_object(create_lockeddoorfront_2671(10520, 2680), 4);
    add_object(create_lockeddoorseal_2672(10524, 2688), 4);
    add_object(create_metaldoorfront_2670(1176, 2552), 4);
    add_object(create_metaldoorfront_2670(11736, 2104), 4);
    add_object(create_metaldoorfront_2670(11800, 2680), 4);
    add_object(create_lockeddoorfront_2671(14552, 2040), 4);
    add_object(create_lockeddoorseal_2672(14556, 2048), 4);
    add_object(create_metaldoorfront_2670(14552, 2296), 4);
    add_object(create_metaldoorfront_2670(14872, 2296), 4);
    add_object(create_metaldoorfront_2670(15384, 376), 4);
    add_object(create_metaldoorfront_2670(16024, 376), 4);
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
    add_object(create_hazardspikesdown_2857(-168, 392), 5);
    add_object(create_hazardspikesleft_2855(-128, 392), 5);
    add_object(create_hazardspikesright_2856(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_gimmickhangingidlesensor_740(702, -150), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-368, 9), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(15136, 2727), 5);
    add_object(create_cameralimitbossleft_421(14888, 296), 5);
    add_object(create_cameralimitbossright_422(15383, 584), 5);
    add_object(create_cameralimitbosstop_423(15128, 144), 5);
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
    add_object(create_mediumbubble_769(-468, 316), 5);
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
    add_object(create_guikeycards_2673(38, 231), 6);
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
    add_object(create_guikeycardicon_2674(16, 228), 6);
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
    loop_action_jump_running = false;
    loop_action_jump_index = 0;
    loop_process_call_unlock_music_running = false;
    loop_process_call_unlock_music_index = 0;
    loop_player01detectsensorbottom_running = false;
    loop_player01detectsensorbottom_index = 0;
    loop_monitorsunstuckfromceiling_running = false;
    loop_monitorsunstuckfromceiling_index = 0;
    loop_cutscene_start_running = false;
    loop_cutscene_start_index = 0;
    loop_process_call_fadeout_music_running = false;
    loop_process_call_fadeout_music_index = 0;
    loop_sound_help_running = false;
    loop_sound_help_index = 0;
    loop_process_call_reset_music_running = false;
    loop_process_call_reset_music_index = 0;
    loop_petal_loss_running = false;
    loop_petal_loss_index = 0;
    loop_p_debris_running = false;
    loop_p_debris_index = 0;
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
    loop_spawndebris_running = false;
    loop_spawndebris_index = 0;
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
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_48, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_48, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_48, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_48, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_48, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_48, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_48, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_48, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_48, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_48, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_48, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_48, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_48, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_48, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_48, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_48, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_48, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_48, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_48, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_48, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_48, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_48, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_48, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_48, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_48, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_48, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_48, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_48, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_48, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_48, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_48, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_48, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_48, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_48, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_48, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_48, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_48, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_48, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_48, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_48, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_48, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_48, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_48, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_48, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_48, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_1388_13 = loop_count;
    not_always_1696_16 = loop_count;
    not_always_44_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    not_always_1550_16 = loop_count;
    not_always_1677_44 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    not_always_1510_16 = loop_count;
    every_1431_48 = 0.0f;
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
    not_always_1425_13 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    not_always_1635_44 = loop_count;
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
    not_always_121_0 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1033_13 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    not_always_173_8 = loop_count;
    not_always_1505_16 = loop_count;
    not_always_1502_16 = loop_count;
    not_always_600_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    not_always_1571_13 = loop_count;
    every_1422_48 = 0.0f;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_1512_16 = loop_count;
    not_always_130_0 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    not_always_308_13 = loop_count;
    group_sound_events_milla_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_46_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    not_always_99_0 = loop_count;
    not_always_1832_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    not_always_45_13 = loop_count;
    not_always_53_13 = loop_count;
    not_always_98_0 = loop_count;
    once_condition_63_0 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    not_always_1695_16 = loop_count;
    not_always_1447_13 = loop_count;
    not_always_1459_46 = loop_count;
    not_always_815_13 = loop_count;
    not_always_1421_44 = loop_count;
    not_always_929_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_52_13 = loop_count;
    not_always_1036_13 = loop_count;
    not_always_1035_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_422_13 = loop_count;
    not_always_1504_16 = loop_count;
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
    not_always_1509_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_57_13 = loop_count;
    not_always_1511_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_450_13 = loop_count;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    not_always_1831_16 = loop_count;
    once_condition_138_0 = false;
    not_always_1678_44 = loop_count;
    group_mac_controls_1 = false;
    not_always_1663_46 = loop_count;
    not_always_101_0 = loop_count;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    not_always_1506_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_1697_16 = loop_count;
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
    not_always_1516_16 = loop_count;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    not_always_1421_13 = loop_count;
    not_always_1515_16 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_70_13 = loop_count;
    not_always_172_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    once_condition_63_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_174_8 = loop_count;
    not_always_1698_16 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    once_condition_66_13 = false;
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1 = true;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    not_always_69_13 = loop_count;
    not_always_1503_16 = loop_count;
    not_always_1039_13 = loop_count;
    not_always_95_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    once_condition_59_14 = false;
    not_always_809_13 = loop_count;
    once_condition_48_13 = false;
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
    not_always_1422_44 = loop_count;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_744_13 = loop_count;
    not_always_1038_13 = loop_count;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    not_always_1634_44 = loop_count;
    once_condition_50_13 = false;
    once_condition_37_13 = false;
    not_always_1514_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_554_13 = loop_count;
    once_condition_35_13 = false;
    not_always_1507_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::loop_wrapper_sound_kick1_49(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_49(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_49(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_49(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_49(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_sound_idle7_49(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_play_music_8_49(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_dig2_49(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_49(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_49(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_49(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_process_call_unlock_music_49(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_49(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_process_call_reset_music_49(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_49(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_49(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_49(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_hurt1_49(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_camera_mode2_49(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_13();
}
void Frames::loop_wrapper_camera_mode1_49(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_13();
}
void Frames::loop_wrapper_camera_mode0_49(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_13();
}
void Frames::loop_wrapper_process_call_play_music_49(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_sound_attack1_49(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_49(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_49(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_49(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_sound_uppercut3_49(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_49(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_49(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_49(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_49(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_49(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_49(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_49(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_49(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_19();
}
void Frames::loop_wrapper_play_music_5_49(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_47();
}
void Frames::loop_wrapper_play_music_6_49(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_47();
}
void Frames::loop_wrapper_sound_go0_49(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_resume_music_49(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_process_call_me_49(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_49(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_47();
}
void Frames::loop_wrapper_process_call_unqueue_music_49(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_sound_cyclone0_49(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_process_call_stop_music_49(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::event_func_11571()
{
    // event 1636_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1636_49_end;
        ((Active*)((Active*)col_instance_2))->alterables->values.set(0, 30);
    }
    event_1636_49_end: ;
}
void Frames::col_0_49()
{
    event_func_11571();
}
void Frames::test_collisions_49()
{
    test_collisions(bosslavalaser_2862_instances, bosstbplatform2_2874_instances, 1, 1, (EventFunction)&Frames::col_0_49);
    test_collisions(qualifier_7, effectsdebris_319_instances, 2147483648, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_19, qualifier_19, 1073741824, 1073741824, (EventFunction)&Frames::col_0_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 536870912, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_20, objectcrystal_279_instances, 1073741824, 2, (EventFunction)&Frames::col_2_13);
    test_collisions(qualifier_8, effectsdebris_319_instances, 268435456, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(playercharactersensor_383_instances, bubblepatch_806_instances, 1, 1, (EventFunction)&Frames::col_4_17);
    test_collisions(bosslavalaser_2862_instances, bosstbplatform_2878_instances, 2, 1, (EventFunction)&Frames::col_0_49);
    test_collisions(qualifier_8, playerreflect_447_instances, 134217728, 1, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_7, playerprojectile_320_instances, 67108864, 1, (EventFunction)&Frames::col_6_13);
    test_collisions(qualifier_20, playerprojectile_320_instances, 33554432, 2, (EventFunction)&Frames::col_7_13);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 1, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, playerreflect_447_instances, 16777216, 2, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 8388608, 4, (EventFunction)&Frames::col_1_13);
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
}
void Frames::event_func_11572()
{
    // event 1442_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1442_49_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_1442_49_end;
        if (once_condition_1442_49) goto event_1442_49_end;
        once_condition_1442_49 = true;
        media.play(str_data_voices_88+global_strings->get(11)+str_ca_carol_awyeah_ogg_203, 28-1);
    }
    event_1442_49_end: ;
}
void Frames::event_func_11573()
{
    // event 1456_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1456_49_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(3)) == (150))) goto event_1456_49_end;
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
    event_1456_49_end: ;
}
void Frames::event_func_11574()
{
    // event 1471_49
    {
        if (!(group_main_engine_1)) goto event_1471_49_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)) >= (20))) goto event_1471_49_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)) < (31))) goto event_1471_49_end;
        if (!((global_values->get(3)%math_helper%120) == (6))) goto event_1471_49_end;
        if (not_always_1471_49 > loop_count) {
            not_always_1471_49 = loop_count + 2;
            goto event_1471_49_end;
        }
        not_always_1471_49 = loop_count + 2;
        media.play_id(SOUND_COUNTDOWN_TICK_41, -1, 1);
        media.set_sample_volume(SOUND_COUNTDOWN_TICK_41, get_min((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)*7)-100, 100));
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
    }
    event_1471_49_end: ;
}
void Frames::event_func_11575()
{
    // event 1472_49
    {
        if (!(group_main_engine_1)) goto event_1472_49_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)) >= (20))) goto event_1472_49_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)) < (31))) goto event_1472_49_end;
        if (!((global_values->get(3)%math_helper%120) == (66))) goto event_1472_49_end;
        if (not_always_1472_49 > loop_count) {
            not_always_1472_49 = loop_count + 2;
            goto event_1472_49_end;
        }
        not_always_1472_49 = loop_count + 2;
        media.play_id(SOUND_COUNTDOWN_TOCK_42, -1, 1);
        media.set_sample_volume(SOUND_COUNTDOWN_TOCK_42, get_min((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)*7)-100, 100));
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
    }
    event_1472_49_end: ;
}
void Frames::event_func_11576()
{
    // event 1497_49
    {
        if (!(group_main_engine_1)) goto event_1497_49_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 523, 673, 630, 775)) > (0))) goto event_1497_49_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1497_49_end: ;
}
void Frames::event_func_11577()
{
    // event 1506_49
    {
        if (!(group_main_engine_1)) goto event_1506_49_end;
        objectdigspot_734_instances.clear_selection();
        for (ObjectIterator it(objectdigspot_734_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!objectdigspot_734_instances.has_selection()) goto event_1506_49_end;
        for (ObjectIterator it(objectdigspot_734_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1506_49_0; single_instance_1506_49_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectdigspot_734_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitorwatershield_327(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1506_49_0 == NULL)
                    single_instance_1506_49_0 = new_obj;
            }
        }
        media.play_id(SOUND_MILLA_DIGSUCCESS_308, -1, 1);
        effectsdebris_319_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(objectdigspot_734_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 14, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 10, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 18, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 22, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
        }
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(pick_random(9, 4, 5, 6, 7, 8, 9, 10, 11, 12));
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->get_movement()->set_speed(30+randrange(20));
        }
        ((Active*)((Active*)single_instance_1506_49_0))->alterables->values.set(0, 1);
        ((Active*)((Active*)single_instance_1506_49_0))->alterables->flags.enable(0);
        ((Active*)((Active*)single_instance_1506_49_0))->alterables->flags.enable(3);
        ((Active*)((Active*)single_instance_1506_49_0))->set_layer(((Active*)get_single(objectdigspot_734_instances, default_active_instance))->layer->index+1-1-1);
        ((Active*)((Active*)single_instance_1506_49_0))->alterables->values.set(1, -4);
    }
    event_1506_49_end: ;
}
void Frames::event_func_11578()
{
    // event 1510_49
    {
        if (!(group_main_engine_1)) goto event_1510_49_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(24)) == (0))) goto event_1510_49_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (((Active*)get_instance(cameralimitbosstop_423_instances, default_active_instance))->get_y()))) goto event_1510_49_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1510_49_end;
        if (once_condition_1510_49) goto event_1510_49_end;
        once_condition_1510_49 = true;
        if (!group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1) {
            group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1 = true;
        }
    }
    event_1510_49_end: ;
}
void Frames::event_func_11579()
{
    // event 1513_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1513_49_end;
        every_1513_49 += manager.dt;
        if (every_1513_49 < 0.24) goto event_1513_49_end;
        every_1513_49 -= 0.24;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) < (140))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1513_49_end;
        media.play_id(SOUND_RUMBLE_78, -1, 1);
    }
    event_1513_49_end: ;
}
void Frames::event_func_11580()
{
    // event 1514_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1514_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (-1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1514_49_end;
        if (not_always_1514_49 > loop_count) {
            not_always_1514_49 = loop_count + 2;
            goto event_1514_49_end;
        }
        not_always_1514_49 = loop_count + 2;
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
    }
    event_1514_49_end: ;
}
void Frames::event_func_11581()
{
    // event 1515_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1515_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) > (20))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1515_49_end;
        if (!((global_values->get(23)) == (1))) goto event_1515_49_end;
        if (once_condition_1515_49) goto event_1515_49_end;
        once_condition_1515_49 = true;
        media.play(str_data_voices_eng_sx_sx_still_ogg_204, 28-1);
    }
    event_1515_49_end: ;
}
void Frames::event_func_11582()
{
    // event 1516_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1516_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (-1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1516_49_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) < (40))) goto event_1516_49_end;
        {
            loop_gui_shiftup_running = true;
            int times = int(1);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_14();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
    }
    event_1516_49_end: ;
}
void Frames::event_func_11583()
{
    // event 1517_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1517_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (-1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1517_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(14, 1);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)*19+((Active*)get_single(bosssyntaxsquidbody_2869_instances, default_active_instance))->get_x())*0.05);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)*19+((Active*)get_single(bosssyntaxsquidbody_2869_instances, default_active_instance))->get_y())*0.05);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
    }
    event_1517_49_end: ;
}
void Frames::event_func_11584()
{
    // event 1518_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1518_49_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1518_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) < (140))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1518_49_end;
        FrameObject * single_instance_1518_49_0; single_instance_1518_49_0 = NULL;
        // select single: true false false
        bosssyntaxsquidhead_2866_instances.clear_selection();
        for (ObjectIterator p_it(bosssyntaxsquidhead_2866_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosslavasplashmain_2861(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1518_49_0 == NULL)
                    single_instance_1518_49_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1518_49_0))->set_layer(((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->layer->index+1-1);
        ((Active*)((Active*)single_instance_1518_49_0))->set_y(((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->get_box_index(1)+3);
        ((Active*)single_instance_1518_49_0)->move_back(((Active*)get_instance(hazardlavapit_2719_instances)));
        for (ObjectIterator it(bosssyntaxsquidhead_2866_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        ((Active*)((Active*)single_instance_1518_49_0))->set_x(((Active*)single_instance_1518_49_0)->get_x()-60+randrange(121));
    }
    event_1518_49_end: ;
}
void Frames::event_func_11585()
{
    // event 1519_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1519_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (120))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1519_49_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 1);
    }
    event_1519_49_end: ;
}
void Frames::event_func_11586()
{
    // event 1520_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1520_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) > (120))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1520_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(18));
            ((Active*)*it)->alterables->values.set(18, get_min(((Active*)*it)->alterables->values.get(18)+0.2, 0));
        }
    }
    event_1520_49_end: ;
}
void Frames::event_func_11587()
{
    // event 1521_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1521_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) > (250))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1521_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 0);
            ((Active*)*it)->alterables->values.set(13, 0);
        }
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 1);
    }
    event_1521_49_end: ;
}
void Frames::event_func_11588()
{
    // event 1522_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1522_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) > (-1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1522_49_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) > (0))) goto event_1522_49_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1522_49_end;
        {
            loop_gui_shiftdown_running = true;
            int times = int(1);
            loop_gui_shiftdown_index = 0;
            while (loop_gui_shiftdown_index < times) {
                loop_gui_shiftdown_14();
                if (!loop_gui_shiftdown_running) break;
                loop_gui_shiftdown_index++;
            }
        }
    }
    event_1522_49_end: ;
}
void Frames::event_func_11589()
{
    // event 1523_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1523_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) != (5))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1523_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)get_instance(cameralimitbossleft_421_instances, it.current_index, default_active_instance))->get_x()+160, get_min(((Active*)*it)->alterables->values.get(0), ((Active*)get_instance(cameralimitbossright_422_instances, it.current_index, default_active_instance))->get_x()-160)));
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)get_instance(cameralimitbosstop_423_instances, it.current_index, default_active_instance))->get_y()+50, ((Active*)*it)->alterables->values.get(1)));
        }
    }
    event_1523_49_end: ;
}
void Frames::event_func_11590()
{
    // event 1524_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1524_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0)+sin_deg(((Active*)*it)->alterables->values.get(3)-45)*((Active*)*it)->alterables->values.get(12)*((Active*)*it)->alterables->values.get(9));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1)+cos_deg(((Active*)*it)->alterables->values.get(3)-45)*((Active*)*it)->alterables->values.get(12)*((Active*)*it)->alterables->values.get(9));
        }
        bosssyntaxsquidshoulderright_2864_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidshoulderright_2864_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(2)+sin_deg(((Active*)get_single(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(3)-45)*((Active*)get_single(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(12)*-0.4*((Active*)get_single(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(9), 0);
        }
        bosssyntaxsquidshoulderleft_2865_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidshoulderleft_2865_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(2)+sin_deg(((Active*)get_single(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(3)-45)*((Active*)get_single(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(12)*0.4*((Active*)get_single(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(9), 0);
        }
        bossspikesphere2_2877_instances.clear_selection();
        for (ObjectIterator it(bossspikesphere2_2877_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        bossspikesphere_2876_instances.clear_selection();
        for (ObjectIterator it(bossspikesphere_2876_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        bosstbplatform2_2874_instances.clear_selection();
        for (ObjectIterator it(bosstbplatform2_2874_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        bosstbplatform_2878_instances.clear_selection();
        for (ObjectIterator it(bosstbplatform_2878_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1524_49_end: ;
}
void Frames::event_func_11591()
{
    // event 1525_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1525_49_end;
        bosssyntaxsquidarmleft_2867_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidarmleft_2867_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidarmleft_2867_instances.has_selection()) goto event_1525_49_end;
        for (ObjectIterator it(bosssyntaxsquidarmleft_2867_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->get_action_x()+(cos_deg(sin_deg(((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(3)-180-((Active*)*it)->alterables->values.get(0)*((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(6))*((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(4)+((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(8)-((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(2))*((Active*)*it)->alterables->values.get(0)*(30-((Active*)*it)->alterables->values.get(0))-10)*((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(9));
            ((Active*)*it)->set_y(((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->get_action_y()+(sin_deg(sin_deg(((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(3)-180-((Active*)*it)->alterables->values.get(0)*((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(6))*((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(4)+((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(8)-((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(2))*((Active*)*it)->alterables->values.get(0)*(30-((Active*)*it)->alterables->values.get(0)))*((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(9));
            ((Active*)*it)->alterables->values.set(23, (((Active*)*it)->get_x()-((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->get_x())*0.1);
            ((Active*)*it)->alterables->values.set(24, (((Active*)*it)->get_y()-((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->get_y())*0.1-5);
        }
    }
    event_1525_49_end: ;
}
void Frames::event_func_11592()
{
    // event 1526_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1526_49_end;
        bosssyntaxsquidarmright_2868_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidarmright_2868_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidarmright_2868_instances.has_selection()) goto event_1526_49_end;
        for (ObjectIterator it(bosssyntaxsquidarmright_2868_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->get_action_x()+(cos_deg(sin_deg(((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(6))*((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(4)+((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(7)-((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(2))*((Active*)*it)->alterables->values.get(0)*(30-((Active*)*it)->alterables->values.get(0))+10)*((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(9));
            ((Active*)*it)->set_y(((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->get_action_y()+(sin_deg(sin_deg(((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(6))*((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(4)+((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(7)-((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(2))*((Active*)*it)->alterables->values.get(0)*(30-((Active*)*it)->alterables->values.get(0)))*((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(9));
            ((Active*)*it)->alterables->values.set(23, (((Active*)*it)->get_x()-((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->get_x())*0.1);
            ((Active*)*it)->alterables->values.set(24, (((Active*)*it)->get_y()-((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->get_y())*0.1-5);
        }
    }
    event_1526_49_end: ;
}
void Frames::event_func_11593()
{
    // event 1527_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1527_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+cos_deg(((Active*)*it)->alterables->values.get(3)*2-45)*sin_deg(((Active*)*it)->alterables->values.get(2))*5*((Active*)*it)->alterables->values.get(10));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+cos_deg(((Active*)*it)->alterables->values.get(3)*2-45)*cos_deg(((Active*)*it)->alterables->values.get(2))*5*((Active*)*it)->alterables->values.get(10));
        }
        bosssyntaxsquidshoulderleft_2865_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidshoulderleft_2865_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+sin_deg(((Active*)get_single(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(3)+90)*15*((Active*)get_single(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(10), 0);
        }
        bosssyntaxsquidshoulderright_2864_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidshoulderright_2864_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+sin_deg(((Active*)get_single(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(3)-90)*-15*((Active*)get_single(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(10), 0);
        }
        bosssyntaxsquidarmleft_2867_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidarmleft_2867_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+cos_deg(((Active*)get_single(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(3)*2-45)*sin_deg(((Active*)get_single(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(2))*10*((Active*)get_single(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(10));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+cos_deg(((Active*)get_single(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(3)*2-45)*cos_deg(((Active*)get_single(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(2))*10*((Active*)get_single(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(10));
        }
        bosssyntaxsquidarmright_2868_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidarmright_2868_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+cos_deg(((Active*)get_single(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(3)*2-45)*sin_deg(((Active*)get_single(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(2))*10*((Active*)get_single(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(10));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+cos_deg(((Active*)get_single(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(3)*2-45)*cos_deg(((Active*)get_single(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(2))*10*((Active*)get_single(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(10));
        }
    }
    event_1527_49_end: ;
}
void Frames::event_func_11594()
{
    // event 1528_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1528_49_end;
        bosssyntaxsquidarmleft_2867_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidarmleft_2867_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidarmleft_2867_instances.has_selection()) goto event_1528_49_end;
        for (ObjectIterator it(bosssyntaxsquidarmleft_2867_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+(cos_deg(((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(2)+sin_deg(((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(3)+90)*30)*(sin_deg(((Active*)*it)->alterables->values.get(0)*15)*-80-10)+sin_deg(((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(2)+sin_deg(((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(3)+90)*30)*(sin_deg(60+((Active*)*it)->alterables->values.get(0)*15)*-60+60))*((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(10));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+(cos_deg(((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(2)+sin_deg(((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(3)+90)*30)*(sin_deg(60+((Active*)*it)->alterables->values.get(0)*15)*-60+60)-sin_deg(((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(2)+sin_deg(((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(3)+90)*30)*(sin_deg(((Active*)*it)->alterables->values.get(0)*15)*-80-10))*((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(10));
        }
    }
    event_1528_49_end: ;
}
void Frames::event_func_11595()
{
    // event 1529_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1529_49_end;
        bosssyntaxsquidarmright_2868_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidarmright_2868_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidarmright_2868_instances.has_selection()) goto event_1529_49_end;
        for (ObjectIterator it(bosssyntaxsquidarmright_2868_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+(cos_deg(((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(2)+sin_deg(((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(3)+90)*30)*(sin_deg(((Active*)*it)->alterables->values.get(0)*15)*80+10)+sin_deg(((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(2)+sin_deg(((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(3)+90)*30)*(sin_deg(60+((Active*)*it)->alterables->values.get(0)*15)*-60+60))*((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(10));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+(cos_deg(((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(2)+sin_deg(((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(3)+90)*30)*(sin_deg(60+((Active*)get_instance(bosssyntaxsquidarmleft_2867_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15)*-60+60)+sin_deg(((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(2)+sin_deg(((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(3)+90)*30)*(sin_deg(((Active*)get_instance(bosssyntaxsquidarmleft_2867_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15)*-80-10))*((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(10));
        }
    }
    event_1529_49_end: ;
}
void Frames::event_func_11596()
{
    // event 1530_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1530_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(256)) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1530_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(2), 0);
        }
    }
    event_1530_49_end: ;
}
void Frames::event_func_11597()
{
    // event 1531_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1531_49_end;
        bosssyntaxsquidshoulderright_2864_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidshoulderright_2864_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index));
            if (parent == NULL) goto pos_end_1531_49_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1531_49_0: ;
        }
        bosssyntaxsquidshoulderleft_2865_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidshoulderleft_2865_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index));
            if (parent == NULL) goto pos_end_1531_49_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1531_49_1: ;
        }
        bosssyntaxsquidhead_2866_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidhead_2866_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index));
            if (parent == NULL) goto pos_end_1531_49_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1531_49_2: ;
        }
        for (ObjectIterator it(bosssyntaxsquidhead_2866_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(2), 0);
        }
        bosssyntaxsquidback_2863_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidback_2863_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index));
            if (parent == NULL) goto pos_end_1531_49_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1531_49_3: ;
        }
        for (ObjectIterator it(bosssyntaxsquidback_2863_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(2), 0);
        }
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, (((Active*)*it)->alterables->values.get(3)+((Active*)*it)->alterables->values.get(5))%math_helper%360);
        }
    }
    event_1531_49_end: ;
}
void Frames::event_func_11598()
{
    // event 1532_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1532_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1532_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(14, 1);
        }
    }
    event_1532_49_end: ;
}
void Frames::event_func_11599()
{
    // event 1533_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1533_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (25))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1533_49_end;
        bosswaypoint_2875_instances.clear_selection();
        for (ObjectIterator it(bosswaypoint_2875_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_single(bosssyntaxsquidbody_2869_instances, default_active_instance))->alterables->values.get(19)))) { it.deselect(); continue; }
        }
        if (!bosswaypoint_2875_instances.has_selection()) goto event_1533_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(15, ((Active*)get_single(bosswaypoint_2875_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(16, ((Active*)get_single(bosswaypoint_2875_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->alterables->values.set(19, (((Active*)*it)->alterables->values.get(19)+1)%math_helper%bosswaypoint_2875_instances.size());
        }
    }
    event_1533_49_end: ;
}
void Frames::event_func_11600()
{
    // event 1534_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1534_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) > (30))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1534_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->alterables->values.get(2)+get_max(get_min((((atan2_deg(((Active*)*it)->alterables->values.get(16)-((Active*)*it)->alterables->values.get(1), ((Active*)*it)->alterables->values.get(0)-((Active*)*it)->alterables->values.get(15))+90-((Active*)*it)->alterables->values.get(2)+540)%math_helper%360)-180), 1), -1));
        }
    }
    event_1534_49_end: ;
}
void Frames::event_func_11601()
{
    // event 1536_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1536_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) > (30))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1536_49_end;
        bosssyntaxsquidhitbox_2881_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidhitbox_2881_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidhitbox_2881_instances.has_selection()) goto event_1536_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->alterables->values.get(2)+get_max(get_min((((atan2_deg(((Active*)*it)->alterables->values.get(16)-((Active*)*it)->alterables->values.get(1), ((Active*)*it)->alterables->values.get(0)-((Active*)*it)->alterables->values.get(15))+90-((Active*)*it)->alterables->values.get(2)+540)%math_helper%360)-180), 1), -1));
        }
    }
    event_1536_49_end: ;
}
void Frames::event_func_11602()
{
    // event 1538_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1538_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) > (30))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1538_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, cos_deg(((Active*)*it)->alterables->values.get(2)+90)*5);
            ((Active*)*it)->alterables->values.add(1, sin_deg(((Active*)*it)->alterables->values.get(2)+90)*-5);
        }
    }
    event_1538_49_end: ;
}
void Frames::event_func_11603()
{
    // event 1539_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1539_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) > (30))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1539_49_end;
        bosssyntaxsquidhitbox_2881_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidhitbox_2881_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidhitbox_2881_instances.has_selection()) goto event_1539_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, cos_deg(((Active*)*it)->alterables->values.get(2)+90)*3);
            ((Active*)*it)->alterables->values.add(1, sin_deg(((Active*)*it)->alterables->values.get(2)+90)*-3);
        }
    }
    event_1539_49_end: ;
}
void Frames::event_func_11604()
{
    // event 1540_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1540_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1540_49_end;
        bosssyntaxsquidhitbox_2881_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidhitbox_2881_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidhitbox_2881_instances.has_selection()) goto event_1540_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()+200))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1540_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 3);
            ((Active*)*it)->alterables->values.set(14, 0);
        }
    }
    event_1540_49_end: ;
}
void Frames::event_func_11605()
{
    // event 1541_49
    bool or_result_1541_49 = false;
    bool or_temp_result_1541_49_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto or_event_1541_49_0_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) > (300))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto or_event_1541_49_0_end;
        or_result_1541_49 = true;
        or_temp_result_1541_49_0 = true;
    }
    or_event_1541_49_0_end: ;
    bosssyntaxsquidbody_2869_instances.clear_saved_selection();
    if (or_temp_result_1541_49_0) {
        bosssyntaxsquidbody_2869_instances.save_selection();
    }
    // event 1541_49
    bool or_temp_result_1541_49_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto or_event_1541_49_1_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) > (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (340))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()-150))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto or_event_1541_49_1_end;
        or_result_1541_49 = true;
        or_temp_result_1541_49_1 = true;
    }
    or_event_1541_49_1_end: ;
    if (or_temp_result_1541_49_1) {
        bosssyntaxsquidbody_2869_instances.save_selection();
    }
    // event 1541_49
    bool or_temp_result_1541_49_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto or_event_1541_49_2_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) > (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()-150))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto or_event_1541_49_2_end;
        or_result_1541_49 = true;
        or_temp_result_1541_49_2 = true;
        or_event_1541_49_2_end: ;
        if (or_temp_result_1541_49_2) {
            bosssyntaxsquidbody_2869_instances.save_selection();
        }
        if (!or_result_1541_49) goto or_final_or_event_1541_49_2_end;
        bosssyntaxsquidbody_2869_instances.empty_selection();
        if (or_temp_result_1541_49_0 || or_temp_result_1541_49_1 || or_temp_result_1541_49_2) {
            bosssyntaxsquidbody_2869_instances.restore_selection();
        }
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, ((Active*)*it)->alterables->values.get(17));
            ((Active*)*it)->alterables->values.set(14, 0);
        }
    }
    or_final_or_event_1541_49_2_end: ;
}
void Frames::event_func_11606()
{
    // event 1542_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1542_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (4))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1542_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(14, 1);
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)-get_max(15-((Active*)*it)->alterables->values.get(14)*0.5, 0));
        }
        bosslavasplashleft2_2882_instances.clear_selection();
        for (ObjectIterator it(bosslavasplashleft2_2882_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosssyntaxsquidshoulderleft_2865_instances, it.current_index, default_active_instance))->get_action_x());
            ((Active*)*it)->set_y(((Active*)get_instance(bosssyntaxsquidshoulderleft_2865_instances, it.current_index, default_active_instance))->get_action_y());
        }
        bosslavasplashright2_2883_instances.clear_selection();
        for (ObjectIterator it(bosslavasplashright2_2883_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosssyntaxsquidshoulderright_2864_instances, it.current_index, default_active_instance))->get_action_x());
            ((Active*)*it)->set_y(((Active*)get_instance(bosssyntaxsquidshoulderright_2864_instances, it.current_index, default_active_instance))->get_action_y());
        }
        for (ObjectIterator it(bosslavasplashleft2_2882_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(bosslavasplashright2_2883_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1542_49_end: ;
}
void Frames::event_func_11607()
{
    // event 1543_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1543_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1543_49_end;
        media.play_id(SOUND_LOWBUZZ_307, -1, 1);
    }
    event_1543_49_end: ;
}
void Frames::event_func_11608()
{
    // event 1544_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1544_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) < (120))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1544_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, get_max(((Active*)*it)->alterables->values.get(9)-0.05, 0));
            ((Active*)*it)->alterables->values.set(10, 1-((Active*)*it)->alterables->values.get(9));
        }
    }
    event_1544_49_end: ;
}
void Frames::event_func_11609()
{
    // event 1545_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1545_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) > (160))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1545_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, get_min(((Active*)*it)->alterables->values.get(9)+0.05, 1));
            ((Active*)*it)->alterables->values.set(10, 1-((Active*)*it)->alterables->values.get(9));
        }
    }
    event_1545_49_end: ;
}
void Frames::event_func_11610()
{
    // event 1546_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1546_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) > (160))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) >= (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1546_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 0);
            ((Active*)*it)->alterables->values.set(17, 2);
            ((Active*)*it)->alterables->values.set(14, 0);
        }
    }
    event_1546_49_end: ;
}
void Frames::event_func_11611()
{
    // event 1547_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1547_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1547_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, (((Active*)*it)->alterables->values.get(3)+((Active*)*it)->alterables->values.get(5)*2)%math_helper%360);
        }
    }
    event_1547_49_end: ;
}
