#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_5548()
{
    // event 1872_25
    bool or_result_1872_25 = false;
    bool or_temp_result_1872_25_0 = false;
    {
        if (!(group_pause_1)) goto or_event_1872_25_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_1872_25_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1872_25_0_end;
        or_result_1872_25 = true;
        or_temp_result_1872_25_0 = true;
    }
    or_event_1872_25_0_end: ;
    // event 1872_25
    bool or_temp_result_1872_25_1 = false;
    {
        if (!(group_pause_1)) goto or_event_1872_25_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_1872_25_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1872_25_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_1872_25_1_end;
        or_result_1872_25 = true;
        or_temp_result_1872_25_1 = true;
        or_event_1872_25_1_end: ;
        if (!or_result_1872_25) goto or_final_or_event_1872_25_1_end;
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
        gimmickfireball_1096_instances.clear_selection();
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        if (!group_main_engine_1) {
            group_main_engine_1 = true;
        }
        badnikgolemshot2_1198_instances.clear_selection();
        for (ObjectIterator it(badnikgolemshot2_1198_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        minibossflame_1199_instances.clear_selection();
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
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
        ((Active*)get_instance(gimmickhangingmovingbar_1173_instances))->start_animation();
        effectember_970_instances.clear_selection();
        for (ObjectIterator it(effectember_970_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        gimmickfireballturretback_1166_instances.clear_selection();
        for (ObjectIterator it(gimmickfireballturretback_1166_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        gimmickfireballturret1_1180_instances.clear_selection();
        for (ObjectIterator it(gimmickfireballturret1_1180_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        gimmickfireballspawner_1179_instances.clear_selection();
        for (ObjectIterator it(gimmickfireballspawner_1179_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(gimmickfireballturret2_1181_instances))->start_animation();
        ((Active*)get_instance(gimmickhangingmovingbar2_736_instances))->start_animation();
    }
    or_final_or_event_1872_25_1_end: ;
}
void Frames::event_func_5549()
{
    // event 1883_25
    {
        if (!(group_pause_1)) goto event_1883_25_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_1883_25_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1883_25_end;
        {
            loop_restart_running = true;
            int times = int(1);
            loop_restart_index = 0;
            while (loop_restart_index < times) {
                loop_restart_25();
                if (!loop_restart_running) break;
                loop_restart_index++;
            }
        }
    }
    event_1883_25_end: ;
}
void Frames::handle_frame_26_events()
{
    test_collisions_25();
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
    event_func_5435();
    event_func_5437();
    event_func_5247();
    event_func_2650();
    if (!group_main_engine_1) goto group_main_engine_1_end;
    event_func_5399();
    event_func_5400();
    event_func_5401();
    event_func_5402();
    event_func_5403();
    event_func_5404();
    event_func_5405();
    event_func_5406();
    event_func_5407();
    event_func_5408();
    event_func_5409();
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
    event_func_1761();
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
    event_func_5412();
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1) goto group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1_end;
    event_func_1774();
    event_func_2783();
    event_func_1776();
    event_func_1777();
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
    event_func_5413();
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
    event_func_1909();
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
    event_func_4534();
    event_func_4535();
    event_func_2962();
    event_func_4536();
    event_func_4537();
    event_func_4538();
    event_func_4539();
    event_func_4540();
    event_func_4745();
    event_func_4542();
    event_func_4747();
    event_func_4748();
    event_func_5414();
    event_func_5415();
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
    event_func_4357();
    event_func_4358();
    event_func_4359();
    event_func_4360();
    event_func_4361();
    event_func_4362();
    event_func_4363();
    event_func_5206();
    event_func_5207();
    event_func_5208();
    event_func_5209();
    event_func_5210();
    event_func_5211();
    event_func_5212();
    event_func_5213();
    event_func_5416();
    event_func_5417();
    event_func_5418();
    event_func_5419();
    event_func_5420();
    event_func_5421();
    event_func_4020();
    event_func_5422();
    event_func_5221();
    event_func_5222();
    event_func_5223();
    event_func_5224();
    event_func_5225();
    event_func_5226();
    event_func_5227();
    event_func_5228();
    event_func_5229();
    event_func_5230();
    event_func_5231();
    event_func_5232();
    event_func_5233();
    event_func_5234();
    event_func_5235();
    event_func_5236();
    event_func_5237();
    event_func_5238();
    event_func_5423();
    event_func_5424();
    event_func_5425();
    event_func_5426();
    event_func_5427();
    event_func_5428();
    event_func_5429();
    event_func_5430();
    event_func_5431();
    event_func_5432();
    event_func_5433();
    event_func_5240();
    event_func_5241();
    event_func_5434();
    event_func_5436();
    event_func_5246();
    event_func_5248();
    event_func_5249();
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
    if (!group_main_engine_level_specific_methods_frame_transition_1) goto group_main_engine_level_specific_methods_frame_transition_1_end;
    event_func_5438();
    event_func_5439();
    event_func_5353();
    event_func_5440();
    event_func_5441();
    group_main_engine_level_specific_methods_frame_transition_1_end: ;
    event_func_3867();
    event_func_2491();
    event_func_5442();
    if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) goto group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end;
    event_func_5443();
    event_func_4173();
    event_func_5444();
    event_func_5445();
    event_func_5364();
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end: ;
    event_func_5446();
    event_func_5447();
    event_func_5448();
    event_func_5449();
    event_func_5450();
    if (!group_main_engine_level_specific_methods_bosses_miniboss_golem_1) goto group_main_engine_level_specific_methods_bosses_miniboss_golem_1_end;
    event_func_5451();
    event_func_5452();
    if (!group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1) goto group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1_end;
    event_func_5453();
    event_func_5454();
    event_func_5455();
    event_func_5456();
    event_func_5457();
    event_func_5458();
    event_func_5459();
    event_func_5460();
    event_func_5461();
    event_func_5462();
    event_func_5463();
    event_func_5464();
    event_func_5465();
    event_func_5466();
    event_func_5467();
    event_func_5468();
    event_func_5469();
    event_func_5470();
    event_func_5471();
    event_func_5472();
    event_func_5473();
    event_func_5474();
    event_func_5475();
    event_func_5476();
    event_func_5477();
    event_func_5478();
    group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_spawn_1) goto group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_spawn_1_end;
    event_func_5479();
    event_func_5480();
    group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_spawn_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_activate_1) goto group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_activate_1_end;
    event_func_5481();
    event_func_5482();
    event_func_5483();
    event_func_5484();
    event_func_5485();
    event_func_5486();
    event_func_5487();
    event_func_5488();
    event_func_5489();
    event_func_5490();
    event_func_5491();
    event_func_5492();
    group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_activate_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_explode_1) goto group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_explode_1_end;
    event_func_5493();
    event_func_5494();
    event_func_5495();
    event_func_5496();
    event_func_5497();
    event_func_5498();
    event_func_5499();
    event_func_5500();
    group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_explode_1_end: ;
    event_func_5501();
    event_func_5502();
    event_func_5503();
    event_func_5504();
    group_main_engine_level_specific_methods_bosses_miniboss_golem_1_end: ;
    event_func_5505();
    event_func_5506();
    event_func_5507();
    event_func_5508();
    event_func_5509();
    event_func_5510();
    event_func_5511();
    event_func_5512();
    event_func_5513();
    event_func_5514();
    event_func_5515();
    event_func_5516();
    event_func_5517();
    event_func_5518();
    event_func_5519();
    event_func_5520();
    event_func_5521();
    event_func_5522();
    event_func_5523();
    event_func_5524();
    event_func_5525();
    event_func_5526();
    event_func_5527();
    event_func_5528();
    event_func_5529();
    event_func_5530();
    event_func_5531();
    event_func_5532();
    event_func_5533();
    event_func_5534();
    event_func_5535();
    event_func_5536();
    event_func_5537();
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
    event_func_2576();
    event_func_2577();
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
    event_func_5538();
    event_func_5539();
    event_func_5540();
    event_func_5541();
    event_func_5542();
    event_func_5543();
    event_func_5544();
    event_func_5545();
    event_func_5546();
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
    event_func_5372();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_5547();
    event_func_5548();
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
    event_func_5549();
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
void Frames::handle_frame_26_pre_events()
{
}
void Frames::event_func_5550()
{
    // event 2_25
    {
        if (!(group_main_engine_1)) goto event_2_25_end;
        gimmickhangingidleswitch_1257_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_y());
        }
        gimmickhangingidlemover_1259_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidlemover_1259_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_y());
        }
    }
    event_2_25_end: ;
}
void Frames::event_func_5551()
{
    // event 14_25
    {
        if (!(group_main_engine_1)) goto event_14_25_end;
        if (!(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.is_on(0))) goto event_14_25_end;
        ((Active*)get_instance(playerstartingpoint_358_instances))->set_y(1450);
    }
    event_14_25_end: ;
}
void Frames::event_func_5552()
{
    // event 16_25
    {
        if (!(group_main_engine_1)) goto event_16_25_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 2000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 14);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 4);
    }
    event_16_25_end: ;
}
void Frames::event_func_5553()
{
    // event 1443_25
    {
        if (!(group_main_engine_1)) goto event_1443_25_end;
        switchwallplate_814_instances.clear_selection();
        spread_value(switchwallplate_814_instances, 0, 0);
        switchpressureplate_752_instances.clear_selection();
        spread_value(switchpressureplate_752_instances, 0, 0);
    }
    event_1443_25_end: ;
}
void Frames::event_func_5554()
{
    // event 1444_25
    {
        if (!(group_main_engine_1)) goto event_1444_25_end;
        switchpressureplate_752_instances.clear_selection();
        for (ObjectIterator it(switchpressureplate_752_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!switchpressureplate_752_instances.has_selection()) goto event_1444_25_end;
        for (ObjectIterator it(switchpressureplate_752_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1444_25_end: ;
}
void Frames::event_func_5555()
{
    // event 1454_25
    {
        if (!(group_main_engine_1)) goto event_1454_25_end;
        gimmickhangingmovingsensor_737_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingmovingsensor_737_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
        ((Active*)get_instance(gimmickhangingmovingbar_1173_instances))->alterables->flags.enable(6);
        for (ObjectIterator it(gimmickhangingmovingsensor_737_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
        gimmickhangingmovingsensor2_1247_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingmovingsensor2_1247_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->alterables->flags.enable(0);
        }
        ((Active*)get_instance(gimmickhangingmovingbar2_736_instances))->alterables->flags.enable(6);
    }
    event_1454_25_end: ;
}
void Frames::event_func_5556()
{
    // event 1534_25
    {
        if (!(group_main_engine_1)) goto event_1534_25_end;
        levellayer001_1237_instances.clear_selection();
        for (ObjectIterator it(levellayer001_1237_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!levellayer001_1237_instances.has_selection()) goto event_1534_25_end;
        for (ObjectIterator it(levellayer001_1237_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1534_25_end: ;
}
void Frames::event_func_5557()
{
    // event 1535_25
    {
        if (!(group_main_engine_1)) goto event_1535_25_end;
        levellayer002_1260_instances.clear_selection();
        for (ObjectIterator it(levellayer002_1260_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!levellayer002_1260_instances.has_selection()) goto event_1535_25_end;
        for (ObjectIterator it(levellayer002_1260_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1535_25_end: ;
}
void Frames::event_func_5558()
{
    // event 1536_25
    {
        if (!(group_main_engine_1)) goto event_1536_25_end;
        levellayer101_1232_instances.clear_selection();
        for (ObjectIterator it(levellayer101_1232_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!levellayer101_1232_instances.has_selection()) goto event_1536_25_end;
        for (ObjectIterator it(levellayer101_1232_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1536_25_end: ;
}
void Frames::event_func_5559()
{
    // event 1538_25
    {
        if (!(group_main_engine_1)) goto event_1538_25_end;
        levellayer1loop01_1234_instances.clear_selection();
        for (ObjectIterator it(levellayer1loop01_1234_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!levellayer1loop01_1234_instances.has_selection()) goto event_1538_25_end;
        for (ObjectIterator it(levellayer1loop01_1234_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1538_25_end: ;
}
void Frames::event_func_5560()
{
    // event 1539_25
    {
        if (!(group_main_engine_1)) goto event_1539_25_end;
        levellayer1loop02_1235_instances.clear_selection();
        for (ObjectIterator it(levellayer1loop02_1235_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!levellayer1loop02_1235_instances.has_selection()) goto event_1539_25_end;
        for (ObjectIterator it(levellayer1loop02_1235_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1539_25_end: ;
}
void Frames::event_func_5561()
{
    // event 1554_25
    {
        if (!(group_main_engine_1)) goto event_1554_25_end;
        if (!(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.is_on(1))) goto event_1554_25_end;
        minibossgolempiece2_1249_instances.clear_selection();
        pick_objects_in_zone(minibossgolempiece2_1249_instances, 0, 0, 3500, 1200);
        objectpot_1185_instances.clear_selection();
        pick_objects_in_zone(objectpot_1185_instances, 0, 0, 3500, 1200);
        minibossgolem2_1251_instances.clear_selection();
        pick_objects_in_zone(minibossgolem2_1251_instances, 0, 0, 3500, 1200);
        objectcrystal_279_instances.clear_selection();
        pick_objects_in_zone(objectcrystal_279_instances, 0, 0, 3500, 1200);
        gimmickrelicpanel_1178_instances.clear_selection();
        pick_objects_in_zone(gimmickrelicpanel_1178_instances, 0, 0, 3500, 1200);
        minibossbarrier_924_instances.clear_selection();
        pick_objects_in_zone(minibossbarrier_924_instances, 0, 0, 3500, 1200);
        qualifier_19.clear_selection();
        pick_objects_in_zone(qualifier_19, 0, 0, 3500, 1200);
        minibossgolempiece1_1250_instances.clear_selection();
        pick_objects_in_zone(minibossgolempiece1_1250_instances, 0, 0, 3500, 1200);
        minibossgolem_1252_instances.clear_selection();
        pick_objects_in_zone(minibossgolem_1252_instances, 0, 0, 3500, 1200);
        minibossrailing_923_instances.clear_selection();
        pick_objects_in_zone(minibossrailing_923_instances, 0, 0, 3500, 1200);
        objectpetal_302_instances.clear_selection();
        pick_objects_in_zone(objectpetal_302_instances, 0, 0, 3500, 1200);
        for (ObjectIterator it(minibossrailing_923_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(minibossbarrier_924_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(minibossgolempiece1_1250_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(minibossgolempiece2_1249_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(minibossgolem2_1251_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(objectpot_1185_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(gimmickrelicpanel_1178_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1554_25_end: ;
}
void Frames::event_func_5562()
{
    // event 1555_25
    {
        if (!(group_main_engine_1)) goto event_1555_25_end;
        if (!(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.is_on(2))) goto event_1555_25_end;
        objectpot_1185_instances.clear_selection();
        pick_objects_in_zone(objectpot_1185_instances, 22, 1600, 1938, 3190);
        minibossrailing2_1165_instances.clear_selection();
        pick_objects_in_zone(minibossrailing2_1165_instances, 22, 1600, 1938, 3190);
        basementlight_1269_instances.clear_selection();
        pick_objects_in_zone(basementlight_1269_instances, 22, 1600, 1938, 3190);
        objectcrystal_279_instances.clear_selection();
        pick_objects_in_zone(objectcrystal_279_instances, 22, 1600, 1938, 3190);
        gimmickrelicpanel_1178_instances.clear_selection();
        pick_objects_in_zone(gimmickrelicpanel_1178_instances, 22, 1600, 1938, 3190);
        minibossbarrier_924_instances.clear_selection();
        pick_objects_in_zone(minibossbarrier_924_instances, 22, 1600, 1938, 3190);
        qualifier_19.clear_selection();
        pick_objects_in_zone(qualifier_19, 22, 1600, 1938, 3190);
        objectpetal_302_instances.clear_selection();
        pick_objects_in_zone(objectpetal_302_instances, 22, 1600, 1938, 3190);
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(basementlight_1269_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(objectpot_1185_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(gimmickrelicpanel_1178_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(minibossbarrier_924_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(minibossrailing2_1165_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1555_25_end: ;
}
void Frames::event_func_5563()
{
    // event 1560_25
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_golem_1)) goto event_1560_25_end;
        minibossgolem_1252_instances.clear_selection();
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(21, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(19, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(20, ((Active*)*it)->get_y()+128);
        }
        minibossgolempiece1_1250_instances.clear_selection();
        spread_value(minibossgolempiece1_1250_instances, 0, 1);
        minibossgolempiece2_1249_instances.clear_selection();
        spread_value(minibossgolempiece2_1249_instances, 0, 1);
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
        for (ObjectIterator it(minibossgolempiece2_1249_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
        for (ObjectIterator it(minibossgolempiece1_1250_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
        for (ObjectIterator it(minibossgolem_1252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1560_25_end: ;
}
void Frames::event_func_5564()
{
    // event 1635_25
    {
        if (!(group_main_engine_1)) goto event_1635_25_end;
        basementlight_1269_instances.clear_selection();
        for (ObjectIterator it(basementlight_1269_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->set_scale(10);
        }
    }
    event_1635_25_end: ;
}
void Frames::event_func_5565()
{
    // event 1638_25
    {
        if (!(group_main_engine_1)) goto event_1638_25_end;
        gimmickmovingfloor1_1253_instances.clear_selection();
        for (ObjectIterator it(gimmickmovingfloor1_1253_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y()-((Active*)*it)->alterables->values.get(0));
        }
        gimmickmovingfloor2_1254_instances.clear_selection();
        for (ObjectIterator it(gimmickmovingfloor2_1254_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y()-((Active*)*it)->alterables->values.get(0));
        }
        gimmickmovingfloor3_1255_instances.clear_selection();
        for (ObjectIterator it(gimmickmovingfloor3_1255_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y()-((Active*)*it)->alterables->values.get(0));
        }
        spread_value(gimmickmovingfloor1_1253_instances, 0, 0);
        spread_value(gimmickmovingfloor2_1254_instances, 0, 0);
        spread_value(gimmickmovingfloor3_1255_instances, 0, 0);
    }
    event_1638_25_end: ;
}
void Frames::event_func_5566()
{
    // event 1639_25
    {
        if (!(group_main_engine_1)) goto event_1639_25_end;
        gimmickmovingfloor2_1254_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingfloor2_1254_instances, 591, 1403, 645, 2330);
        gimmickmovingfloor1_1253_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingfloor1_1253_instances, 591, 1403, 645, 2330);
        gimmickmovingfloor3_1255_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingfloor3_1255_instances, 591, 1403, 645, 2330);
        for (ObjectIterator it(gimmickmovingfloor1_1253_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 96);
        }
        for (ObjectIterator it(gimmickmovingfloor2_1254_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 96);
        }
        for (ObjectIterator it(gimmickmovingfloor3_1255_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 96);
        }
    }
    event_1639_25_end: ;
}
void Frames::event_func_5567()
{
    // event 1640_25
    {
        if (!(group_main_engine_1)) goto event_1640_25_end;
        gimmickmovingfloor2_1254_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingfloor2_1254_instances, 641, 1403, 695, 2330);
        gimmickmovingfloor1_1253_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingfloor1_1253_instances, 641, 1403, 695, 2330);
        gimmickmovingfloor3_1255_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingfloor3_1255_instances, 641, 1403, 695, 2330);
        for (ObjectIterator it(gimmickmovingfloor1_1253_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 64);
        }
        for (ObjectIterator it(gimmickmovingfloor2_1254_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 64);
        }
        for (ObjectIterator it(gimmickmovingfloor3_1255_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 64);
        }
    }
    event_1640_25_end: ;
}
void Frames::event_func_5568()
{
    // event 1641_25
    {
        if (!(group_main_engine_1)) goto event_1641_25_end;
        gimmickmovingfloor2_1254_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingfloor2_1254_instances, 689, 1403, 743, 2330);
        gimmickmovingfloor1_1253_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingfloor1_1253_instances, 689, 1403, 743, 2330);
        gimmickmovingfloor3_1255_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingfloor3_1255_instances, 689, 1403, 743, 2330);
        for (ObjectIterator it(gimmickmovingfloor1_1253_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 32);
        }
        for (ObjectIterator it(gimmickmovingfloor2_1254_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 32);
        }
        for (ObjectIterator it(gimmickmovingfloor3_1255_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 32);
        }
    }
    event_1641_25_end: ;
}
void Frames::event_func_5569()
{
    // event 1642_25
    {
        if (!(group_main_engine_1)) goto event_1642_25_end;
        gimmickmovingfloor2_1254_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingfloor2_1254_instances, 786, 1403, 840, 2330);
        gimmickmovingfloor1_1253_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingfloor1_1253_instances, 786, 1403, 840, 2330);
        gimmickmovingfloor3_1255_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingfloor3_1255_instances, 786, 1403, 840, 2330);
        for (ObjectIterator it(gimmickmovingfloor1_1253_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -32);
        }
        for (ObjectIterator it(gimmickmovingfloor2_1254_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -32);
        }
        for (ObjectIterator it(gimmickmovingfloor3_1255_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -32);
        }
    }
    event_1642_25_end: ;
}
void Frames::event_func_5570()
{
    // event 1643_25
    {
        if (!(group_main_engine_1)) goto event_1643_25_end;
        gimmickmovingfloor2_1254_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingfloor2_1254_instances, 834, 1403, 888, 2330);
        gimmickmovingfloor1_1253_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingfloor1_1253_instances, 834, 1403, 888, 2330);
        gimmickmovingfloor3_1255_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingfloor3_1255_instances, 834, 1403, 888, 2330);
        for (ObjectIterator it(gimmickmovingfloor1_1253_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -64);
        }
        for (ObjectIterator it(gimmickmovingfloor2_1254_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -64);
        }
        for (ObjectIterator it(gimmickmovingfloor3_1255_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -64);
        }
    }
    event_1643_25_end: ;
}
void Frames::event_func_5571()
{
    // event 1644_25
    {
        if (!(group_main_engine_1)) goto event_1644_25_end;
        gimmickmovingfloor2_1254_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingfloor2_1254_instances, 882, 1403, 936, 2330);
        gimmickmovingfloor1_1253_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingfloor1_1253_instances, 882, 1403, 936, 2330);
        gimmickmovingfloor3_1255_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingfloor3_1255_instances, 882, 1403, 936, 2330);
        for (ObjectIterator it(gimmickmovingfloor1_1253_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -96);
        }
        for (ObjectIterator it(gimmickmovingfloor2_1254_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -96);
        }
        for (ObjectIterator it(gimmickmovingfloor3_1255_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -96);
        }
    }
    event_1644_25_end: ;
}
void Frames::event_func_5572()
{
    // event 1816_25
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1816_25_end;
        manager.ignore_controls = true;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
        }
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
        }
    }
    event_1816_25_end: ;
}
void Frames::event_func_5573()
{
    // event 1818_25
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1818_25_end;
        if (!((global_values->get(4)) <= (0))) goto event_1818_25_end;
            group_main_engine_interface_and_post_processing_methods_titlecard_1 = false;
    
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
        if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) {
            group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = true;
        }
    }
    event_1818_25_end: ;
}
void Frames::on_frame_26_start_events()
{
    event_func_5147();
    event_func_5550();
    event_func_5551();
    event_func_4133();
    event_func_5552();
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
    event_func_5378();
    event_func_3269();
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
    event_func_3272();
    event_func_3273();
    event_func_3986();
    event_func_3987();
    event_func_5553();
    event_func_5554();
    event_func_5555();
    event_func_5381();
    event_func_5382();
    event_func_5556();
    event_func_5557();
    event_func_5558();
    event_func_4701();
    event_func_5559();
    event_func_5560();
    event_func_2686();
    event_func_5551();
    event_func_2687();
    event_func_5561();
    event_func_5562();
    event_func_5563();
    event_func_5564();
    event_func_5565();
    event_func_5566();
    event_func_5567();
    event_func_5568();
    event_func_5569();
    event_func_5570();
    event_func_5571();
    event_func_2689();
    event_func_2690();
    event_func_2691();
    event_func_5572();
    event_func_4145();
    event_func_5573();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_26_init()
{
    index = 25;
    width = 3544;
    height = 3200;
    virtual_width = 3544;
    virtual_height = 3200;
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
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &minibossgolempiece2_1249_instances, &minibossgolempiece1_1250_instances, &minibossgolem_1252_instances, NULL};
    qualifier_8.set(12, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &pushableblock1_531_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesup_558_instances, &hazardspikesdown_559_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, &minibossgolempiece2_1249_instances, &minibossgolempiece1_1250_instances, &minibossgolem_1252_instances, NULL};
    qualifier_9.set(36, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemyiris_1183_instances, &objectpot_1185_instances, &minibossgolem_1252_instances, NULL};
    qualifier_20.set(3, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece0r_1090_instances, &levelparallaxpiece1r_1091_instances, &levelparallaxpiece2r_1092_instances, &levelparallaxpiece3r_1093_instances, &levelparallaxpiece4r_1094_instances, NULL};
    qualifier_0.set(5, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &pushableblock1_531_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &minibossbarrier_924_instances, &hazardspikesup_558_instances, &gimmickrelicpanel_1178_instances, &breakableruins_1184_instances, &hazardspikesdown_559_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, &levellayer101_1232_instances, &levellayer1loop01_1234_instances, &levellayer1loop02_1235_instances, &levellayer116_349_instances, &levellayer001_1237_instances, &levellayer02_1238_instances, &gimmickrelicflippanel_1240_instances, &levellayer0loop04_997_instances, &gimmickmovingfloor1_1253_instances, &gimmickmovingfloor2_1254_instances, &gimmickmovingfloor3_1255_instances, &levellayer002_1260_instances, &levellayer015_1261_instances, &gimmickaxletunnel_1262_instances, NULL};
    qualifier_7.set(44, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_4.set(33, &qualifier_4_instances[0]);
    static ObjectList* qualifier_27_instances[] = {&gimmickaxletunnel_1262_instances, NULL};
    qualifier_27.set(1, &qualifier_27_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(12, &qualifier_19_instances[0]);
    static ObjectList* qualifier_23_instances[] = {&gimmickhangingidlesensor_740_instances, &gimmickhangingmovingsensor2_1247_instances, &gimmickhangingidleswitch_1257_instances, &gimmickhangingidlemover_1259_instances, &gimmickhangingmovingsensor_737_instances, NULL};
    qualifier_23.set(5, &qualifier_23_instances[0]);
    static ObjectList* qualifier_14_instances[] = {&mastergroupsb_385_instances, &pushableblock1_531_instances, NULL};
    qualifier_14.set(2, &qualifier_14_instances[0]);
    static ObjectList* qualifier_15_instances[] = {&laddertop_357_instances, &mastergroupsb_385_instances, NULL};
    qualifier_15.set(2, &qualifier_15_instances[0]);
    static ObjectList* qualifier_16_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_16.set(1, &qualifier_16_instances[0]);
    static ObjectList* qualifier_17_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_17.set(1, &qualifier_17_instances[0]);
    static ObjectList* qualifier_10_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &levellayer001_1237_instances, &levellayer02_1238_instances, &levellayer0loop04_997_instances, &levellayer002_1260_instances, &levellayer015_1261_instances, NULL};
    qualifier_10.set(8, &qualifier_10_instances[0]);
    static ObjectList* qualifier_11_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &levellayer101_1232_instances, &levellayer1loop01_1234_instances, &levellayer1loop02_1235_instances, &levellayer116_349_instances, NULL};
    qualifier_11.set(7, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, NULL};
    qualifier_12.set(2, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &gimmickhangingmovingsensor2_1247_instances, &gimmickhangingmovingbar2_736_instances, &gimmickhangingmovingsensor_737_instances, &gimmickhangingmovingbar_1173_instances, NULL};
    qualifier_13.set(5, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0r_1090(0, 0), 0);
    add_background_object(create_levelparallaxpiece1r_1091(0, 152), 0);
    add_background_object(create_levelparallaxpiece2r_1092(0, 200), 0);
    add_background_object(create_levelparallaxpiece3r_1195(0, 352), 0);
    add_background_object(create_levelparallaxpiece4r_1196(0, 384), 0);
    add_background_object(create_separatormasterobjects2_12(-480, 152), 0);
    add_object(create_playerinput_19(-440, 176), 0);
    add_object(create_masterinput_20(-464, 176), 0);
    add_object(create_inputsp1_21(-416, 176), 0);
    add_object(create_globalinputdata_22(-392, 176), 0);
    add_object(create_mapdata_30(-432, 232), 0);
    add_background_object(create_rmbrick24_1103(264, 1104), 1);
    add_background_object(create_rmbrick24_1103(2248, 520), 1);
    add_background_object(create_rmbrick24_1103(2248, 424), 1);
    add_background_object(create_rmbrick24_1103(2248, 328), 1);
    add_background_object(create_rmbrick24_1103(1880, 520), 1);
    add_background_object(create_rmbrick24_1103(1880, 424), 1);
    add_background_object(create_rmbrick24_1103(1880, 328), 1);
    add_background_object(create_rmbrick24_1103(1880, 232), 1);
    add_background_object(create_rmbrick24_1103(1880, 136), 1);
    add_background_object(create_rmbrick24_1103(1880, 40), 1);
    add_background_object(create_rmbrick21_1104(1824, 576), 1);
    add_background_object(create_rmbrick24_1103(1584, 336), 1);
    add_background_object(create_rmbrick24_1103(1584, 240), 1);
    add_background_object(create_rmbrick24_1103(1584, 144), 1);
    add_background_object(create_rmbrick24_1103(1584, 48), 1);
    add_background_object(create_rmbrick21_1104(912, 480), 1);
    add_background_object(create_rmbrick21_1104(1008, 480), 1);
    add_background_object(create_rmbrick21_1104(1104, 384), 1);
    add_background_object(create_rmbrick21_1104(1200, 384), 1);
    add_background_object(create_rmbrick24_1103(816, 336), 1);
    add_background_object(create_rmbrick24_1103(432, 144), 1);
    add_background_object(create_rmbrick24_1103(432, 240), 1);
    add_background_object(create_rmbrick24_1103(432, 336), 1);
    add_background_object(create_rmbrick20_1105(96, 336), 1);
    add_background_object(create_rmbrick21_1104(384, 288), 1);
    add_background_object(create_rmbrick21_1104(288, 288), 1);
    add_background_object(create_rmbrick21_1104(96, 288), 1);
    add_background_object(create_rmbrick21_1104(480, 384), 1);
    add_background_object(create_rmbrick21_1104(576, 384), 1);
    add_background_object(create_rmbrick20_1105(480, 432), 1);
    add_background_object(create_rmbrick20_1105(384, 432), 1);
    add_background_object(create_rmbrick20_1105(576, 432), 1);
    add_background_object(create_rmbrick20_1105(0, 336), 1);
    add_background_object(create_rmbrick21_1104(0, 288), 1);
    add_background_object(create_rmbrick24_1103(432, 48), 1);
    add_background_object(create_rmbrick21_1104(672, 384), 1);
    add_background_object(create_rmbrick20_1105(672, 432), 1);
    add_background_object(create_rmbrick21_1104(192, 288), 1);
    add_background_object(create_rmbrick20_1105(192, 336), 1);
    add_background_object(create_rmbrick20_1105(288, 336), 1);
    add_background_object(create_rmbrick24_1103(432, -48), 1);
    add_background_object(create_rmbrick21_1104(768, 384), 1);
    add_background_object(create_rmbrick20_1105(768, 432), 1);
    add_background_object(create_rmbrick20_1105(480, 528), 1);
    add_background_object(create_rmbrick20_1105(384, 528), 1);
    add_background_object(create_rmbrick20_1105(576, 528), 1);
    add_background_object(create_rmbrick20_1105(672, 528), 1);
    add_background_object(create_rmbrick20_1105(768, 528), 1);
    add_background_object(create_rmbrick26_1106(288, 528), 1);
    add_background_object(create_rmbrick20_1105(288, 432), 1);
    add_background_object(create_rmbrick25_1107(384, 336), 1);
    add_background_object(create_rmbrick20_1105(192, 432), 1);
    add_background_object(create_rmbrick20_1105(96, 432), 1);
    add_background_object(create_rmbrick20_1105(0, 432), 1);
    add_background_object(create_rmbrick20_1105(864, 528), 1);
    add_background_object(create_rmbrick26_1106(864, 336), 1);
    add_background_object(create_rmbrick24_1103(816, 240), 1);
    add_background_object(create_rmbrick24_1103(816, 144), 1);
    add_background_object(create_rmbrick24_1103(816, 48), 1);
    add_background_object(create_rmbrick24_1103(816, -48), 1);
    add_background_object(create_rmbrick26_1106(864, 240), 1);
    add_background_object(create_rmbrick21_1104(864, 192), 1);
    add_background_object(create_rmbrick21_1104(960, 192), 1);
    add_background_object(create_rmbrick20_1105(960, 240), 1);
    add_background_object(create_rmbrick20_1105(960, 528), 1);
    add_background_object(create_rmbrick21_1104(1056, 192), 1);
    add_background_object(create_rmbrick20_1105(1056, 240), 1);
    add_background_object(create_rmbrick20_1105(1056, 528), 1);
    add_background_object(create_rmbrick21_1104(1152, 192), 1);
    add_background_object(create_rmbrick20_1105(1152, 432), 1);
    add_background_object(create_rmbrick20_1105(1152, 240), 1);
    add_background_object(create_rmbrick20_1105(1152, 528), 1);
    add_background_object(create_rmbrick26_1106(1248, 336), 1);
    add_background_object(create_rmbrick25_1107(1056, 336), 1);
    add_background_object(create_rmbrick25_1107(864, 432), 1);
    add_background_object(create_rmbrick26_1106(1056, 432), 1);
    add_background_object(create_rmbrick20_1105(960, 336), 1);
    add_background_object(create_rmbrick20_1105(1248, 432), 1);
    add_background_object(create_rmbrick20_1105(1248, 528), 1);
    add_background_object(create_rmbrick20_1105(768, 624), 1);
    add_background_object(create_rmbrick20_1105(864, 624), 1);
    add_background_object(create_rmbrick20_1105(960, 624), 1);
    add_background_object(create_rmbrick20_1105(1056, 624), 1);
    add_background_object(create_rmbrick20_1105(1152, 624), 1);
    add_background_object(create_rmbrick20_1105(1248, 624), 1);
    add_background_object(create_rmbrick20_1105(768, 720), 1);
    add_background_object(create_rmbrick20_1105(864, 720), 1);
    add_background_object(create_rmbrick20_1105(960, 720), 1);
    add_background_object(create_rmbrick20_1105(1056, 720), 1);
    add_background_object(create_rmbrick20_1105(1152, 720), 1);
    add_background_object(create_rmbrick20_1105(1248, 720), 1);
    add_background_object(create_rmbrick20_1105(1344, 336), 1);
    add_background_object(create_rmbrick20_1105(1344, 432), 1);
    add_background_object(create_rmbrick20_1105(1344, 624), 1);
    add_background_object(create_rmbrick20_1105(1344, 720), 1);
    add_background_object(create_rmbrick20_1105(1440, 432), 1);
    add_background_object(create_rmbrick21_1104(1440, 288), 1);
    add_background_object(create_rmbrick20_1105(1536, 432), 1);
    add_background_object(create_rmbrick20_1105(1632, 432), 1);
    add_background_object(create_rmbrick20_1105(1632, 528), 1);
    add_background_object(create_rmbrick20_1105(1632, 624), 1);
    add_background_object(create_rmbrick21_1104(1392, 576), 1);
    add_background_object(create_rmbrick21_1104(1488, 576), 1);
    add_background_object(create_rmbrick26_1106(1536, 528), 1);
    add_background_object(create_rmbrick25_1107(1344, 528), 1);
    add_background_object(create_rmbrick20_1105(1440, 624), 1);
    add_background_object(create_rmbrick20_1105(1536, 624), 1);
    add_background_object(create_rmbrick20_1105(1440, 720), 1);
    add_background_object(create_rmbrick20_1105(1536, 720), 1);
    add_background_object(create_rmbrick20_1105(1632, 720), 1);
    add_background_object(create_rmbrick20_1105(768, 816), 1);
    add_background_object(create_rmbrick20_1105(864, 816), 1);
    add_background_object(create_rmbrick20_1105(960, 816), 1);
    add_background_object(create_rmbrick20_1105(1056, 816), 1);
    add_background_object(create_rmbrick20_1105(1152, 816), 1);
    add_background_object(create_rmbrick20_1105(1248, 816), 1);
    add_background_object(create_rmbrick20_1105(1632, 816), 1);
    add_background_object(create_rmbrick21_1104(1488, 384), 1);
    add_background_object(create_rmbrick21_1104(1584, 384), 1);
    add_background_object(create_rmbrick26_1106(1632, 336), 1);
    add_background_object(create_rmbrick25_1107(1440, 336), 1);
    add_background_object(create_rmbrick21_1104(1728, 192), 1);
    add_background_object(create_rmbrick20_1105(1728, 240), 1);
    add_background_object(create_rmbrick20_1105(1728, 336), 1);
    add_background_object(create_rmbrick20_1105(1728, 432), 1);
    add_background_object(create_rmbrick21_1104(1824, 192), 1);
    add_background_object(create_rmbrick20_1105(1728, 528), 1);
    add_background_object(create_rmbrick20_1105(1728, 624), 1);
    add_background_object(create_rmbrick20_1105(1728, 720), 1);
    add_background_object(create_rmbrick20_1105(1824, 624), 1);
    add_background_object(create_rmbrick20_1105(1824, 720), 1);
    add_background_object(create_rmbrick20_1105(1728, 816), 1);
    add_background_object(create_rmbrick20_1105(1824, 816), 1);
    add_background_object(create_rmbrick20_1105(1536, 912), 1);
    add_background_object(create_rmbrick20_1105(1344, 912), 1);
    add_background_object(create_rmbrick20_1105(1344, 1008), 1);
    add_background_object(create_rmbrick20_1105(1440, 912), 1);
    add_background_object(create_rmbrick20_1105(1440, 1008), 1);
    add_background_object(create_rmbrick20_1105(1152, 912), 1);
    add_background_object(create_rmbrick20_1105(1152, 1008), 1);
    add_background_object(create_rmbrick20_1105(1248, 912), 1);
    add_background_object(create_rmbrick20_1105(1248, 1008), 1);
    add_background_object(create_rmbrick20_1105(960, 912), 1);
    add_background_object(create_rmbrick20_1105(960, 1008), 1);
    add_background_object(create_rmbrick20_1105(1056, 912), 1);
    add_background_object(create_rmbrick20_1105(1056, 1008), 1);
    add_background_object(create_rmbrick20_1105(768, 912), 1);
    add_background_object(create_rmbrick20_1105(768, 1008), 1);
    add_background_object(create_rmbrick20_1105(864, 912), 1);
    add_background_object(create_rmbrick20_1105(864, 1008), 1);
    add_background_object(create_rmbrick20_1105(1344, 1104), 1);
    add_background_object(create_rmbrick20_1105(1440, 1104), 1);
    add_background_object(create_rmbrick20_1105(1152, 1104), 1);
    add_background_object(create_rmbrick20_1105(1248, 1104), 1);
    add_background_object(create_rmbrick20_1105(960, 1104), 1);
    add_background_object(create_rmbrick20_1105(1056, 1104), 1);
    add_background_object(create_rmbrick20_1105(768, 1104), 1);
    add_background_object(create_rmbrick20_1105(864, 1104), 1);
    add_background_object(create_rmbrick24_1103(1312, 240), 1);
    add_background_object(create_rmbrick24_1103(1312, 144), 1);
    add_background_object(create_rmbrick24_1103(1312, 48), 1);
    add_background_object(create_rmbrick24_1103(1312, -48), 1);
    add_background_object(create_rmbrick21_1104(1248, 192), 1);
    add_background_object(create_rmbrick21_1104(1344, 288), 1);
    add_background_object(create_rmbrick21_1104(1248, 288), 1);
    add_background_object(create_rmbrick25_1107(1248, 240), 1);
    add_background_object(create_rmbrick26_1106(1632, 240), 1);
    add_background_object(create_rmbrick21_1104(1632, 192), 1);
    add_background_object(create_rmbrick24_1103(1584, -48), 1);
    add_background_object(create_rmbrick21_1104(1392, 864), 1);
    add_background_object(create_rmbrick21_1104(1488, 864), 1);
    add_background_object(create_rmbrick26_1106(1536, 816), 1);
    add_background_object(create_rmbrick25_1107(1344, 816), 1);
    add_background_object(create_rmbrick20_1105(1920, 816), 1);
    add_background_object(create_rmbrick25_1107(1824, 240), 1);
    add_background_object(create_rmbrick25_1107(1824, 336), 1);
    add_background_object(create_rmbrick21_1104(1920, 576), 1);
    add_background_object(create_rmbrick25_1107(1824, 432), 1);
    add_background_object(create_rmbrick25_1107(1824, 528), 1);
    add_background_object(create_rmbrick20_1105(1920, 720), 1);
    add_background_object(create_rmbrick20_1105(1920, 624), 1);
    add_background_object(create_rmbrick24_1103(1880, -56), 1);
    add_background_object(create_rmbrick20_1105(2016, 816), 1);
    add_background_object(create_rmbrick21_1104(2016, 576), 1);
    add_background_object(create_rmbrick20_1105(2016, 720), 1);
    add_background_object(create_rmbrick20_1105(2016, 624), 1);
    add_background_object(create_rmbrick20_1105(2208, 816), 1);
    add_background_object(create_rmbrick21_1104(2208, 576), 1);
    add_background_object(create_rmbrick20_1105(2208, 720), 1);
    add_background_object(create_rmbrick20_1105(2208, 624), 1);
    add_background_object(create_rmbrick20_1105(2304, 816), 1);
    add_background_object(create_rmbrick21_1104(2304, 576), 1);
    add_background_object(create_rmbrick20_1105(2304, 720), 1);
    add_background_object(create_rmbrick20_1105(2400, 816), 1);
    add_background_object(create_rmbrick20_1105(2400, 720), 1);
    add_background_object(create_rmbrick21_1104(2400, 576), 1);
    add_background_object(create_rmbrick20_1105(2112, 816), 1);
    add_background_object(create_rmbrick21_1104(2112, 576), 1);
    add_background_object(create_rmbrick20_1105(2112, 720), 1);
    add_background_object(create_rmbrick20_1105(2112, 624), 1);
    add_background_object(create_rmbrick24_1103(2248, 232), 1);
    add_background_object(create_rmbrick24_1103(2248, 136), 1);
    add_background_object(create_rmbrick24_1103(2248, 40), 1);
    add_background_object(create_rmbrick24_1103(2248, -56), 1);
    add_background_object(create_rmbrick20_1105(2496, 816), 1);
    add_background_object(create_rmbrick20_1105(2496, 720), 1);
    add_background_object(create_rmbrick21_1104(2496, 576), 1);
    add_background_object(create_rmbrick20_1105(2592, 816), 1);
    add_background_object(create_rmbrick20_1105(2592, 720), 1);
    add_background_object(create_rmbrick21_1104(2592, 576), 1);
    add_background_object(create_rmbrick20_1105(1536, 1008), 1);
    add_background_object(create_rmbrick20_1105(1536, 1104), 1);
    add_background_object(create_rmbrick20_1105(1632, 912), 1);
    add_background_object(create_rmbrick20_1105(1632, 1008), 1);
    add_background_object(create_rmbrick20_1105(1632, 1104), 1);
    add_background_object(create_rmbrick26_1106(2592, 624), 1);
    add_background_object(create_rmbrick25_1107(2400, 624), 1);
    add_background_object(create_rmbrick21_1104(2448, 672), 1);
    add_background_object(create_rmbrick21_1104(2544, 672), 1);
    add_background_object(create_rmbrick20_1105(2304, 624), 1);
    add_background_object(create_rmbrick20_1105(1728, 912), 1);
    add_background_object(create_rmbrick20_1105(1728, 1008), 1);
    add_background_object(create_rmbrick20_1105(1728, 1104), 1);
    add_background_object(create_rmbrick20_1105(2688, 816), 1);
    add_background_object(create_rmbrick20_1105(2688, 720), 1);
    add_background_object(create_rmbrick21_1104(2688, 576), 1);
    add_background_object(create_rmbrick20_1105(2688, 624), 1);
    add_background_object(create_rmdungeonbg_1200(0, 1200), 1);
    add_background_object(create_rmbrick21_1104(0, 1152), 1);
    add_background_object(create_rmbrick21_1104(96, 1152), 1);
    add_background_object(create_rmbrick21_1104(192, 1152), 1);
    add_background_object(create_rmbrick21_1104(288, 1152), 1);
    add_background_object(create_rmbrick21_1104(384, 1152), 1);
    add_background_object(create_rmbrick21_1104(480, 1152), 1);
    add_background_object(create_rmbrick21_1104(576, 1152), 1);
    add_background_object(create_rmbrick24_1103(264, 1008), 1);
    add_background_object(create_rmbrick20_1105(672, 624), 1);
    add_background_object(create_rmbrick20_1105(672, 720), 1);
    add_background_object(create_rmbrick20_1105(672, 816), 1);
    add_background_object(create_rmbrick20_1105(672, 912), 1);
    add_background_object(create_rmbrick20_1105(672, 1008), 1);
    add_background_object(create_rmbrick20_1105(672, 1104), 1);
    add_background_object(create_rmcolumn1_1113(1984, 184), 2);
    add_background_object(create_rmcolumn2_1109(976, 2632), 2);
    add_background_object(create_rmcolumn2_1109(1064, 2640), 2);
    add_background_object(create_rmcolumn1_1113(552, 2864), 2);
    add_background_object(create_rmcolumn2_1109(328, 2864), 2);
    add_background_object(create_rmcolumn2_1109(168, 2640), 2);
    add_background_object(create_rmcolumn2_1109(520, 2640), 2);
    add_background_object(create_rmcolumn2_1109(1656, 1656), 2);
    add_background_object(create_rmcolumn1_1113(1200, 1680), 2);
    add_background_object(create_rmcolumn2_1109(1056, 1712), 2);
    add_background_object(create_rmcolumn2_1109(1440, 1672), 2);
    add_background_object(create_rmcolumn2_1109(952, 1944), 2);
    add_background_object(create_rmcolumn2_1109(1032, 1944), 2);
    add_background_object(create_rmcolumn2_1109(2432, 232), 2);
    add_background_object(create_rmcolumn2_1109(2544, 232), 2);
    add_background_object(create_rmcolumn1_1113(1640, 1152), 2);
    add_background_object(create_rmcolumn1_1113(2112, 1160), 2);
    add_background_object(create_rmcolumn1_1113(2112, 896), 2);
    add_background_object(create_rmcolumn2_1109(1216, 448), 2);
    add_background_object(create_rmcolumn1_1113(1032, 400), 2);
    add_background_object(create_rmbush1_1119(2160, 1136), 2);
    add_background_object(create_rmcolumn1_1113(2112, 1056), 2);
    add_background_object(create_rmcolumn4_1117(2112, 1040), 2);
    add_background_object(create_rmcolumn4_1117(2112, 1136), 2);
    add_background_object(create_rmcolumn1_1113(1984, 1160), 2);
    add_background_object(create_rmcolumn4_1117(1984, 1136), 2);
    add_background_object(create_rmcolumn1_1113(3184, 648), 2);
    add_background_object(create_rmcolumn4_1117(3184, 600), 2);
    add_background_object(create_rmupleftsign_1201(3176, 552), 2);
    add_background_object(create_rmcolumn1_1113(976, 2672), 2);
    add_background_object(create_rmbrick9_1138(992, 2720), 2);
    add_background_object(create_rmbrick9_1138(592, 2560), 2);
    add_background_object(create_rmbrick4_1125(776, 3008), 2);
    add_background_object(create_rmbrick9_1138(736, 3008), 2);
    add_background_object(create_rmcolumn1_1113(856, 1168), 2);
    add_background_object(create_rmcolumn4_1117(856, 1112), 2);
    add_background_object(create_rmcolumn1_1113(936, 1168), 2);
    add_background_object(create_rmcolumn4_1117(936, 1112), 2);
    add_background_object(create_rmcolumn1_1113(1064, 2672), 2);
    add_background_object(create_rmcolumn4_1117(976, 2600), 2);
    add_background_object(create_rmcolumn4_1117(1064, 2600), 2);
    add_background_object(create_rmcolumn1_1113(296, 2064), 2);
    add_background_object(create_rmcolumn4_1117(296, 1960), 2);
    add_background_object(create_rmcolumn1_1113(800, 2864), 2);
    add_background_object(create_rmcolumn4_1117(800, 2824), 2);
    add_background_object(create_rmcolumn4_1117(552, 2824), 2);
    add_background_object(create_rmcolumn1_1113(168, 2672), 2);
    add_background_object(create_rmcolumn4_1117(168, 2600), 2);
    add_background_object(create_rmcolumn1_1113(520, 2672), 2);
    add_background_object(create_rmcolumn4_1117(520, 2600), 2);
    add_background_object(create_rmbrick4_1125(872, 2912), 2);
    add_background_object(create_rmbrick9_1138(288, 2944), 2);
    add_background_object(create_rmbrick16_1122(608, 2672), 2);
    add_background_object(create_rmbrick17_1123(584, 2672), 2);
    add_background_object(create_rmbrick16_1122(656, 2672), 2);
    add_background_object(create_rmbrick16_1122(736, 2672), 2);
    add_background_object(create_rmbrick16_1122(608, 2608), 2);
    add_background_object(create_rmbrick17_1123(584, 2608), 2);
    add_background_object(create_rmbrick16_1122(656, 2608), 2);
    add_background_object(create_rmbrick16_1122(736, 2608), 2);
    add_background_object(create_rmbrick16_1122(608, 2736), 2);
    add_background_object(create_rmbrick17_1123(584, 2736), 2);
    add_background_object(create_rmbrick16_1122(672, 2736), 2);
    add_background_object(create_rmbrick16_1122(736, 2736), 2);
    add_background_object(create_rmbrick18_1127(800, 2608), 2);
    add_background_object(create_rmbrick18_1127(800, 2672), 2);
    add_background_object(create_rmbrick18_1127(800, 2736), 2);
    add_background_object(create_rmcolumn1_1113(1656, 1744), 2);
    add_background_object(create_rmcolumn2_1109(1656, 1696), 2);
    add_background_object(create_rmcolumn4_1117(1656, 1624), 2);
    add_background_object(create_levellayer116back_1202(40, 2560), 2);
    add_background_object(create_levellayer116back_1202(40, 2048), 2);
    add_background_object(create_levellayer116back_1202(40, 2112), 2);
    add_background_object(create_levellayer116back_1202(40, 2176), 2);
    add_background_object(create_levellayer116back_1202(40, 1984), 2);
    add_background_object(create_rmcolumn4_1117(1440, 1640), 2);
    add_background_object(create_rmcolumn1_1113(1440, 1712), 2);
    add_background_object(create_rmcolumn4_1117(1200, 1640), 2);
    add_background_object(create_rmcolumn4_1117(1056, 1672), 2);
    add_background_object(create_rmcolumn1_1113(1056, 1744), 2);
    add_background_object(create_rmcolumn4_1117(952, 1896), 2);
    add_background_object(create_rmcolumn1_1113(952, 1968), 2);
    add_background_object(create_rmcolumn4_1117(1032, 1896), 2);
    add_background_object(create_rmcolumn1_1113(1032, 1968), 2);
    add_background_object(create_rmcolumn1_1113(440, 2000), 2);
    add_background_object(create_rmcolumn4_1117(440, 1896), 2);
    add_background_object(create_levellayer116back_1202(1320, 2048), 2);
    add_background_object(create_rmcolumn2_1109(2544, 256), 2);
    add_background_object(create_rmcolumn1_1113(2544, 304), 2);
    add_background_object(create_rmcolumn4_1117(2544, 184), 2);
    add_background_object(create_rmcolumn4_1117(2240, 160), 2);
    add_background_object(create_rmcolumn1_1113(2240, 208), 2);
    add_background_object(create_rmcolumn4_1117(2848, 232), 2);
    add_background_object(create_rmcolumn1_1113(2848, 304), 2);
    add_background_object(create_rmcolumn1_1113(2720, 304), 2);
    add_background_object(create_rmbush3_1115(2560, 264), 2);
    add_background_object(create_rmbush3_1115(3192, 568), 2);
    add_background_object(create_rmbush2_1118(2928, 960), 2);
    add_background_object(create_rmbush3_1115(2848, 896), 2);
    add_background_object(create_rmbush1_1119(3072, 952), 2);
    add_background_object(create_rmbush3_1115(3096, 896), 2);
    add_background_object(create_rmbush3_1115(2968, 920), 2);
    add_background_object(create_rmbush2_1118(2720, 912), 2);
    add_background_object(create_rmbush3_1115(2656, 936), 2);
    add_background_object(create_rmbush2_1118(2600, 968), 2);
    add_background_object(create_rmbush3_1115(2456, 888), 2);
    add_background_object(create_rmbush3_1115(2512, 936), 2);
    add_background_object(create_rmbush3_1115(2344, 576), 2);
    add_background_object(create_rmbush1_1119(1872, 1136), 2);
    add_background_object(create_rmcolumn1_1113(2328, 304), 2);
    add_background_object(create_rmcolumn1_1113(2432, 304), 2);
    add_background_object(create_rmcolumn4_1117(2432, 184), 2);
    add_background_object(create_rmcolumn4_1117(2816, 456), 2);
    add_background_object(create_rmcolumn1_1113(2816, 616), 2);
    add_background_object(create_rmcolumn4_1117(2440, 456), 2);
    add_background_object(create_rmcolumn1_1113(2440, 616), 2);
    add_background_object(create_levellayer116back_1202(2880, 848), 2);
    add_background_object(create_loop1_1203(2648, 912), 2);
    add_background_object(create_brickcurve1back_1204(2464, 656), 2);
    add_background_object(create_levellayer116back_1202(2496, 848), 2);
    add_background_object(create_levellayer116back_1202(2496, 784), 2);
    add_background_object(create_levellayer116back_1202(2496, 720), 2);
    add_background_object(create_levellayer116back_1202(2880, 784), 2);
    add_background_object(create_levellayer116back_1202(2880, 720), 2);
    add_background_object(create_rmbrick2_1108(2456, 816), 2);
    add_background_object(create_rmbrick2_1108(2456, 784), 2);
    add_background_object(create_rmbrick2_1108(2456, 752), 2);
    add_background_object(create_rmbrick2_1108(2456, 720), 2);
    add_background_object(create_rmbrick16_1122(1536, 720), 2);
    add_background_object(create_rmbrick16_1122(1600, 720), 2);
    add_background_object(create_rmbrick16_1122(1664, 720), 2);
    add_background_object(create_rmbrick16_1122(1536, 784), 2);
    add_background_object(create_rmbrick16_1122(1600, 784), 2);
    add_background_object(create_rmbrick16_1122(1664, 784), 2);
    add_background_object(create_rmbrick16_1122(1536, 848), 2);
    add_background_object(create_loop5back_1205(1536, 720), 2);
    add_background_object(create_rmbrick16_1122(1600, 848), 2);
    add_background_object(create_rmbrick16_1122(1664, 848), 2);
    add_background_object(create_clockback_1206(1560, 744), 2);
    add_background_object(create_loop7back_1207(1536, 816), 2);
    add_background_object(create_rmcolumn1_1113(1984, 1056), 2);
    add_background_object(create_rmcolumn1_1113(1728, 1152), 2);
    add_background_object(create_rmcolumn4_1117(1728, 952), 2);
    add_background_object(create_rmcolumn4_1117(2112, 856), 2);
    add_background_object(create_rmbrick2_1108(1728, 1424), 2);
    add_background_object(create_rmbrick2_1108(1728, 1456), 2);
    add_background_object(create_rmbrick2_1108(1728, 1392), 2);
    add_background_object(create_rmcolumn4_1117(1640, 1112), 2);
    add_background_object(create_rmbrick13_1116(1544, 1104), 2);
    add_background_object(create_rmbrick1_1121(1792, 688), 2);
    add_background_object(create_rmbrick2_1108(1792, 816), 2);
    add_background_object(create_rmbrick2_1108(1792, 848), 2);
    add_background_object(create_rmcolumn1_1113(1216, 464), 2);
    add_background_object(create_rmcolumn4_1117(1216, 392), 2);
    add_background_object(create_rmcolumn4_1117(1192, 712), 2);
    add_background_object(create_rmcolumn1_1113(1192, 768), 2);
    add_background_object(create_rmcolumn4_1117(1240, 616), 2);
    add_background_object(create_rmcolumn1_1113(1240, 768), 2);
    add_background_object(create_rmcolumn4_1117(1032, 360), 2);
    add_background_object(create_rmcolumn4_1117(1984, 160), 2);
    add_background_object(create_rmbrick13_1116(2200, 384), 2);
    add_background_object(create_rmbrick4_1125(2192, 512), 2);
    add_background_object(create_rmbush1_1119(472, 536), 2);
    add_background_object(create_rmbush2_1118(592, 288), 2);
    add_background_object(create_rmbush1_1119(408, 128), 2);
    add_background_object(create_rmbush3_1115(400, 336), 2);
    add_background_object(create_rmbush3_1115(568, 328), 2);
    add_background_object(create_rmbush1_1119(1648, 288), 2);
    add_background_object(create_rmbrickarch_1124(1112, 192), 2);
    add_background_object(create_rmbrick13_1116(1048, 352), 2);
    add_background_object(create_rmcolumn4_1117(616, 456), 2);
    add_background_object(create_rmcolumn4_1117(520, 456), 2);
    add_background_object(create_rmcolumn1_1113(616, 560), 2);
    add_background_object(create_rmcolumn1_1113(520, 560), 2);
    add_background_object(create_rmbrick1_1121(960, 480), 2);
    add_background_object(create_loop7back_1207(448, 512), 2);
    add_background_object(create_levellayer116back_1202(424, 448), 2);
    add_background_object(create_rmentrywayleft_1208(7272, 272), 2);
    add_background_object(create_rmentrywayleft_1208(7272, 432), 2);
    add_background_object(create_rmentrywayleft_1208(7272, 80), 2);
    add_background_object(create_soil1_1120(-336, 1352), 2);
    add_background_object(create_switchbase_1209(1944, 1456), 2);
    add_background_object(create_switchwallbase_1155(2176, 472), 2);
    add_background_object(create_rmentrywayleft2_1210(7272, 432), 2);
    add_background_object(create_rmbush2_1118(-176, 904), 2);
    add_background_object(create_rmentrywayleft2_1210(7272, 272), 2);
    add_background_object(create_rmentrywayleft2_1210(7272, 80), 2);
    add_background_object(create_rmentrywayleft_1208(64, 256), 2);
    add_background_object(create_rmentrywayleft2_1210(64, 256), 2);
    add_background_object(create_rmbrickarch2_1134(-312, 792), 2);
    add_background_object(create_rmbrick16_1122(-512, 904), 2);
    add_background_object(create_rmbrick17_1123(-536, 904), 2);
    add_background_object(create_rmbrick18_1127(-448, 904), 2);
    add_background_object(create_rmbrick5_1136(64, 384), 2);
    add_background_object(create_rmbrick9_1138(128, 384), 2);
    add_background_object(create_rmbush1_1119(-248, 904), 2);
    add_background_object(create_rmbush3_1115(-232, 856), 2);
    add_background_object(create_edgeoverlay_496(-408, 1064), 2);
    add_background_object(create_rmgrass1_1132(-584, 1272), 2);
    add_background_object(create_rmgrass2_1145(-520, 1256), 2);
    add_background_object(create_rmgrass3_1144(-520, 1256), 2);
    add_background_object(create_rmgrass4_1142(-456, 1208), 2);
    add_background_object(create_rmgrass5_1146(-240, 1144), 2);
    add_background_object(create_rmgrass6_1147(-216, 1144), 2);
    add_background_object(create_rmgrass7_1149(-184, 1120), 2);
    add_background_object(create_rmgrass8_1150(-168, 1176), 2);
    add_background_object(create_rmgrass9_1151(-168, 1248), 2);
    add_background_object(create_rmladder_1152(-416, 1048), 2);
    add_background_object(create_soil10_1159(-248, 1480), 2);
    add_background_object(create_soil12_1160(-208, 1368), 2);
    add_background_object(create_soil2_1140(-176, 1528), 2);
    add_background_object(create_soil3_1141(-176, 1656), 2);
    add_background_object(create_soil4_1148(-208, 1400), 2);
    add_background_object(create_soil5_1126(-408, 1632), 2);
    add_background_object(create_soil6_1133(-168, 1400), 2);
    add_background_object(create_soil8_1143(-368, 1696), 2);
    add_background_object(create_soil9_1156(-248, 1616), 2);
    add_background_object(create_rmbrick13_1116(64, 256), 2);
    add_background_object(create_rmbrick13_1116(128, 256), 2);
    add_background_object(create_rmbrick15_1154(192, 256), 2);
    add_background_object(create_rmbrick3_1131(192, 224), 2);
    add_background_object(create_rmbrick1_1121(64, 128), 2);
    add_background_object(create_rmbrick1_1121(64, 0), 2);
    add_background_object(create_rmbrick3_1131(192, 192), 2);
    add_background_object(create_rmbrick3_1131(192, 160), 2);
    add_background_object(create_rmbrick3_1131(192, 128), 2);
    add_background_object(create_rmbrick3_1131(192, 96), 2);
    add_background_object(create_rmbrick3_1131(192, 64), 2);
    add_background_object(create_rmbrick3_1131(192, 32), 2);
    add_background_object(create_rmbrick3_1131(192, 0), 2);
    add_background_object(create_rmbrick1_1121(-64, 128), 2);
    add_background_object(create_rmbrick1_1121(-64, 0), 2);
    add_background_object(create_rmbrick1_1121(-64, 416), 2);
    add_background_object(create_rmbrick1_1121(64, 416), 2);
    add_background_object(create_rmbrick2_1108(0, 384), 2);
    add_background_object(create_rmbrick2_1108(-64, 384), 2);
    add_background_object(create_rmentrywayleft_1208(64, 1344), 2);
    add_background_object(create_rmentrywayleft2_1210(64, 1344), 2);
    add_background_object(create_rmbrick5_1136(128, 1472), 2);
    add_background_object(create_rmbrick9_1138(64, 1472), 2);
    add_background_object(create_rmbrick13_1116(128, 1344), 2);
    add_background_object(create_rmbrick1_1121(64, 1216), 2);
    add_background_object(create_rmbrick1_1121(64, 1088), 2);
    add_background_object(create_rmbrick1_1121(-64, 1216), 2);
    add_background_object(create_rmbrick1_1121(-64, 1088), 2);
    add_background_object(create_rmbrick1_1121(-64, 1504), 2);
    add_background_object(create_rmbrick1_1121(64, 1504), 2);
    add_background_object(create_rmbrick2_1108(0, 1472), 2);
    add_background_object(create_rmbrick2_1108(-64, 1472), 2);
    add_background_object(create_rmbrick10_1137(192, 1472), 2);
    add_background_object(create_rmbrick1_1121(192, 1536), 2);
    add_background_object(create_rmbrick1_1121(-64, 1664), 2);
    add_background_object(create_rmbrick1_1121(64, 1664), 2);
    add_background_object(create_rmbrick2_1108(128, 1632), 2);
    add_background_object(create_rmbrick2_1108(64, 1632), 2);
    add_background_object(create_rmbrick2_1108(0, 1632), 2);
    add_background_object(create_rmbrick10_1137(192, 384), 2);
    add_background_object(create_rmbrick1_1121(320, 448), 2);
    add_background_object(create_rmbrick1_1121(192, 448), 2);
    add_background_object(create_rmbrick1_1121(192, 576), 2);
    add_background_object(create_rmbrick5_1136(320, 416), 2);
    add_background_object(create_rmbrick9_1138(384, 416), 2);
    add_background_object(create_rmbrick1_1121(64, 544), 2);
    add_background_object(create_rmbrick1_1121(-64, 544), 2);
    add_background_object(create_rmbrick1_1121(320, 576), 2);
    add_background_object(create_rmbrick1_1121(320, 1216), 2);
    add_background_object(create_rmbrick1_1121(320, 1088), 2);
    add_background_object(create_rmbrick1_1121(192, 1216), 2);
    add_background_object(create_rmbrick1_1121(192, 1088), 2);
    add_background_object(create_rmbrick1_1121(576, 1248), 2);
    add_background_object(create_rmbrick1_1121(576, 1120), 2);
    add_background_object(create_rmbrick1_1121(448, 1216), 2);
    add_background_object(create_rmbrick1_1121(448, 1088), 2);
    add_background_object(create_rmbrick13_1116(192, 1344), 2);
    add_background_object(create_rmbrick13_1116(256, 1344), 2);
    add_background_object(create_rmbrick13_1116(320, 1344), 2);
    add_background_object(create_rmbrick13_1116(384, 1344), 2);
    add_background_object(create_rmbrick4_1125(424, 1344), 2);
    add_background_object(create_rmbrick2_1108(512, 1344), 2);
    add_background_object(create_rmbrick8_1135(448, 1344), 2);
    add_background_object(create_rmbrick1_1121(704, 1248), 2);
    add_background_object(create_rmbrick1_1121(704, 1120), 2);
    add_background_object(create_rmplant1_1139(280, 1512), 2);
    add_background_object(create_rmplant1_1139(296, 1536), 2);
    add_background_object(create_rmbrick1_1121(-64, 1792), 2);
    add_background_object(create_rmbrick1_1121(64, 1792), 2);
    add_background_object(create_rmbrick3_1131(192, 1696), 2);
    add_background_object(create_rmbrick3_1131(192, 1728), 2);
    add_background_object(create_rmbrick3_1131(192, 1760), 2);
    add_background_object(create_rmbrick9_1138(384, 1760), 2);
    add_background_object(create_rmbrick10_1137(448, 1760), 2);
    add_background_object(create_rmbrick1_1121(-64, 1920), 2);
    add_background_object(create_rmbrick1_1121(-64, 2048), 2);
    add_background_object(create_loop1_1203(512, 320), 2);
    add_background_object(create_loop7_1211(448, 512), 2);
    add_background_object(create_loop3_1212(544, 224), 2);
    add_background_object(create_loop5back_1205(448, 224), 2);
    add_background_object(create_loop5_1213(1536, 720), 2);
    add_background_object(create_rmbrick5_1136(448, 192), 2);
    add_background_object(create_rmbrick9_1138(512, 192), 2);
    add_background_object(create_rmbrick5_1136(576, 192), 2);
    add_background_object(create_rmbrick6_1129(424, 192), 2);
    add_background_object(create_loop4_1214(496, 208), 2);
    add_background_object(create_rmbrick7_1130(1432, 288), 2);
    add_background_object(create_rmbrick3_1131(640, 224), 2);
    add_background_object(create_rmbrick3_1131(640, 256), 2);
    add_background_object(create_rmbrick3_1131(640, 288), 2);
    add_background_object(create_rmbrick3_1131(640, 320), 2);
    add_background_object(create_rmbrick3_1131(640, 352), 2);
    add_background_object(create_loop2_1215(640, 272), 2);
    add_background_object(create_rmbrick3_1131(640, 384), 2);
    add_background_object(create_rmbrick3_1131(640, 416), 2);
    add_background_object(create_levellayer116back_1202(424, 320), 2);
    add_background_object(create_levellayer116back_1202(424, 384), 2);
    add_background_object(create_loop6_1216(432, 456), 2);
    add_background_object(create_loop6down_1217(424, 448), 2);
    add_background_object(create_rmbrick13_1116(512, 448), 2);
    add_background_object(create_rmbrick13_1116(576, 448), 2);
    add_background_object(create_rmbrick15_1154(640, 448), 2);
    add_background_object(create_rmbrick1_1121(192, 704), 2);
    add_background_object(create_rmbrick1_1121(320, 704), 2);
    add_background_object(create_rmbrick1_1121(448, 640), 2);
    add_background_object(create_rmbrick1_1121(576, 640), 2);
    add_background_object(create_rmbrick9_1138(576, 608), 2);
    add_background_object(create_rmbrick5_1136(640, 608), 2);
    add_background_object(create_rmbrick1_1121(448, 768), 2);
    add_background_object(create_rmbrick1_1121(576, 768), 2);
    add_background_object(create_rmbrick1_1121(704, 640), 2);
    add_background_object(create_rmbrick9_1138(704, 608), 2);
    add_background_object(create_rmbrick5_1136(768, 608), 2);
    add_background_object(create_rmbrick1_1121(704, 768), 2);
    add_background_object(create_loop1_1203(832, 512), 2);
    add_background_object(create_rmbrick1_1121(832, 640), 2);
    add_background_object(create_rmbrick1_1121(832, 768), 2);
    add_background_object(create_rmbrick5_1136(1024, 448), 2);
    add_background_object(create_rmbrick9_1138(960, 448), 2);
    add_background_object(create_loop2_1215(960, 464), 2);
    add_background_object(create_loop8_1218(960, 448), 2);
    add_background_object(create_rmbrick2_1108(960, 608), 2);
    add_background_object(create_rmbrick2_1108(1024, 608), 2);
    add_background_object(create_rmcolumn2_1109(616, 520), 2);
    add_background_object(create_rmcolumn2_1109(520, 520), 2);
    add_background_object(create_rmbrick19_1161(1112, 288), 2);
    add_background_object(create_rmbrick5_1136(1240, 288), 2);
    add_background_object(create_rmbrick3_1131(1432, 320), 2);
    add_background_object(create_rmbrick8_1135(1240, 320), 2);
    add_background_object(create_rmbrick15_1154(1432, 384), 2);
    add_background_object(create_rmbrick13_1116(1176, 352), 2);
    add_background_object(create_rmbrick13_1116(1112, 352), 2);
    add_background_object(create_rmbrick7_1130(640, 192), 2);
    add_background_object(create_rmbrick6_1129(1024, 320), 2);
    add_background_object(create_rmbrick14_1128(1024, 352), 2);
    add_background_object(create_rmplant1_1139(224, 408), 2);
    add_background_object(create_rmplant1_1139(632, 192), 2);
    add_background_object(create_rmplant1_1139(408, 480), 2);
    add_background_object(create_rmplant1_1139(400, 520), 2);
    add_background_object(create_rmplant1_1139(416, 536), 2);
    add_background_object(create_rmplant1_1139(464, 584), 2);
    add_background_object(create_rmplant1_1139(664, 616), 2);
    add_background_object(create_rmplant1_1139(680, 632), 2);
    add_background_object(create_rmplant1_1139(760, 616), 2);
    add_background_object(create_rmplant1_1139(984, 448), 2);
    add_background_object(create_rmplant1_1139(1208, 296), 2);
    add_background_object(create_rmplant1_1139(152, 168), 2);
    add_background_object(create_rmbush2_1118(264, 352), 2);
    add_background_object(create_rmbrick6_1129(1600, 320), 2);
    add_background_object(create_rmbrick7_1130(1624, 320), 2);
    add_background_object(create_rmbrick15_1154(1624, 352), 2);
    add_background_object(create_rmbrick6_1129(1728, 320), 2);
    add_background_object(create_rmbrick14_1128(1728, 352), 2);
    add_background_object(create_rmbrick7_1130(1816, 320), 2);
    add_background_object(create_rmbrick4_1125(1600, 352), 2);
    add_background_object(create_rmbrick14_1128(1600, 384), 2);
    add_background_object(create_rmbrick15_1154(1816, 384), 2);
    add_background_object(create_rmbrick13_1116(1624, 384), 2);
    add_background_object(create_rmbrick5_1136(1624, 352), 2);
    add_background_object(create_rmbrick9_1138(1688, 352), 2);
    add_background_object(create_rmbrick13_1116(1688, 384), 2);
    add_background_object(create_rmbrick14_1128(1600, 128), 2);
    add_background_object(create_rmbrick15_1154(1752, 128), 2);
    add_background_object(create_rmbrick13_1116(1624, 128), 2);
    add_background_object(create_rmbrick13_1116(1688, 128), 2);
    add_background_object(create_rmbrick4_1125(1600, 96), 2);
    add_background_object(create_rmbrick3_1131(1752, 96), 2);
    add_background_object(create_rmbrick1_1121(1624, 0), 2);
    add_background_object(create_rmbrick4_1125(1600, 64), 2);
    add_background_object(create_rmbrick4_1125(1600, 32), 2);
    add_background_object(create_rmbrick4_1125(1600, 0), 2);
    add_background_object(create_rmbrick3_1131(1752, 64), 2);
    add_background_object(create_rmbrick3_1131(1752, 32), 2);
    add_background_object(create_rmbrick3_1131(1752, 0), 2);
    add_background_object(create_rmbush1_1119(1648, 288), 2);
    add_background_object(create_rmbrick7_1130(1088, 448), 2);
    add_background_object(create_rmbrick3_1131(1088, 480), 2);
    add_background_object(create_rmbrick3_1131(1088, 512), 2);
    add_background_object(create_rmbrick5_1136(1088, 512), 2);
    add_background_object(create_rmbrick9_1138(1152, 512), 2);
    add_background_object(create_rmbrick7_1130(1216, 512), 2);
    add_background_object(create_rmbrick3_1131(1216, 544), 2);
    add_background_object(create_rmbrick1_1121(1088, 544), 2);
    add_background_object(create_rmbrick3_1131(1216, 576), 2);
    add_background_object(create_rmbrick3_1131(1216, 608), 2);
    add_background_object(create_rmbrick3_1131(1216, 640), 2);
    add_background_object(create_rmbrick7_1130(1640, 488), 2);
    add_background_object(create_rmbrick6_1129(1552, 488), 2);
    add_background_object(create_rmbrick5_1136(1576, 488), 2);
    add_background_object(create_rmbrick3_1131(1640, 520), 2);
    add_background_object(create_rmbrick2_1108(1576, 520), 2);
    add_background_object(create_rmbrick4_1125(1552, 520), 2);
    add_background_object(create_rmbrick1_1121(1408, 688), 2);
    add_background_object(create_loop1_1203(1280, 720), 2);
    add_background_object(create_loop2_1215(1408, 672), 2);
    add_background_object(create_rmbrick2_1108(1408, 816), 2);
    add_background_object(create_rmbrick2_1108(1472, 816), 2);
    add_background_object(create_rmbrick2_1108(1472, 848), 2);
    add_background_object(create_rmbrick2_1108(1472, 880), 2);
    add_background_object(create_rmbrick2_1108(1472, 912), 2);
    add_background_object(create_rmbrick9_1138(1408, 656), 2);
    add_background_object(create_loop8_1218(1408, 656), 2);
    add_background_object(create_rmbrick9_1138(1472, 656), 2);
    add_background_object(create_rmbrick5_1136(1216, 816), 2);
    add_background_object(create_rmbrick9_1138(1152, 816), 2);
    add_background_object(create_rmbrick5_1136(1088, 816), 2);
    add_background_object(create_rmbrick9_1138(1024, 816), 2);
    add_background_object(create_rmbrick3_1131(960, 736), 2);
    add_background_object(create_rmbrick3_1131(960, 768), 2);
    add_background_object(create_rmbrick3_1131(960, 800), 2);
    add_background_object(create_rmbrick5_1136(960, 816), 2);
    add_background_object(create_rmbrick3_1131(1432, 352), 2);
    add_background_object(create_rmbrick4_1125(1216, 352), 2);
    add_background_object(create_rmbrick14_1128(1216, 384), 2);
    add_background_object(create_rmbrick5_1136(1752, 320), 2);
    add_background_object(create_rmbrick2_1108(1752, 352), 2);
    add_background_object(create_rmbrick13_1116(1752, 384), 2);
    add_background_object(create_rmbrick6_1129(1936, 512), 2);
    add_background_object(create_rmbrick14_1128(1936, 544), 2);
    add_background_object(create_rmbrick5_1136(2152, 512), 2);
    add_background_object(create_rmbrick13_1116(2152, 544), 2);
    add_background_object(create_rmbrick14_1128(1984, 384), 2);
    add_background_object(create_rmbrick4_1125(1984, 352), 2);
    add_background_object(create_rmbrick4_1125(1984, 320), 2);
    add_background_object(create_rmbrick4_1125(1984, 288), 2);
    add_background_object(create_rmbrick4_1125(1984, 256), 2);
    add_background_object(create_rmbrick4_1125(1984, 120), 2);
    add_background_object(create_rmbrick4_1125(1984, 88), 2);
    add_background_object(create_rmbrick4_1125(1984, 56), 2);
    add_background_object(create_rmbrick4_1125(1984, 24), 2);
    add_background_object(create_rmbrick1_1121(2008, 24), 2);
    add_background_object(create_rmbrick1_1121(2008, 256), 2);
    add_background_object(create_rmbrick5_1136(2008, 224), 2);
    add_background_object(create_rmbrick6_1129(1984, 224), 2);
    add_background_object(create_rmbrick14_1128(1984, 152), 2);
    add_background_object(create_rmbrick13_1116(2008, 152), 2);
    add_background_object(create_rmbrick1_1121(2136, 24), 2);
    add_background_object(create_rmbrick13_1116(2008, 384), 2);
    add_background_object(create_rmbrick13_1116(2072, 384), 2);
    add_background_object(create_rmbrick13_1116(2136, 384), 2);
    add_background_object(create_rmbrick4_1125(2192, 480), 2);
    add_background_object(create_rmbrick4_1125(2192, 448), 2);
    add_background_object(create_rmbrick4_1125(2192, 416), 2);
    add_background_object(create_rmbrick4_1125(2192, 384), 2);
    add_background_object(create_rmbrick3_1131(2216, 384), 2);
    add_background_object(create_rmbrick3_1131(2216, 416), 2);
    add_background_object(create_rmbrick3_1131(2216, 448), 2);
    add_background_object(create_rmbrick3_1131(2216, 480), 2);
    add_background_object(create_rmbrick3_1131(2216, 512), 2);
    add_background_object(create_rmbrick14_1128(1552, 552), 2);
    add_background_object(create_rmbrick15_1154(1640, 552), 2);
    add_background_object(create_rmbrick13_1116(1576, 552), 2);
    add_background_object(create_rmbrick15_1154(1216, 704), 2);
    add_background_object(create_rmbrick13_1116(1152, 704), 2);
    add_background_object(create_rmbrick13_1116(960, 704), 2);
    add_background_object(create_rmbrick3_1131(1216, 672), 2);
    add_background_object(create_rmbrick1_1121(704, 896), 2);
    add_background_object(create_rmbrick1_1121(832, 880), 2);
    add_background_object(create_rmbrick1_1121(960, 848), 2);
    add_background_object(create_rmbrick1_1121(1088, 848), 2);
    add_background_object(create_rmbrick1_1121(1216, 848), 2);
    add_background_object(create_rmbrick1_1121(1344, 848), 2);
    add_background_object(create_rmbrick2_1108(1152, 672), 2);
    add_background_object(create_rmbrick2_1108(1088, 672), 2);
    add_background_object(create_rmbrick3_1131(960, 704), 2);
    add_background_object(create_rmbrick15_1154(2216, 544), 2);
    add_background_object(create_rmbrick1_1121(1344, 976), 2);
    add_background_object(create_rmbrick1_1121(64, 672), 2);
    add_background_object(create_rmbrick1_1121(-64, 672), 2);
    add_background_object(create_rmbrick2_1108(960, 640), 2);
    add_background_object(create_rmbrick13_1116(1024, 704), 2);
    add_background_object(create_rmbrick13_1116(1088, 704), 2);
    add_background_object(create_rmbrick2_1108(1024, 640), 2);
    add_background_object(create_rmbrick2_1108(960, 672), 2);
    add_background_object(create_rmbrick2_1108(1024, 672), 2);
    add_background_object(create_rmbrick5_1136(1048, 320), 2);
    add_background_object(create_rmbrick8_1135(1368, 320), 2);
    add_background_object(create_rmbrick2_1108(1368, 352), 2);
    add_background_object(create_rmbrick2_1108(1240, 352), 2);
    add_background_object(create_rmbrick13_1116(1304, 384), 2);
    add_background_object(create_rmbrick13_1116(1368, 384), 2);
    add_background_object(create_rmbrick13_1116(1240, 384), 2);
    add_background_object(create_rmbrick9_1138(1304, 288), 2);
    add_background_object(create_rmbrick5_1136(1368, 288), 2);
    add_background_object(create_rmbrick6_1129(1240, 512), 2);
    add_background_object(create_rmbrick7_1130(1264, 512), 2);
    add_background_object(create_rmbrick3_1131(1304, 352), 2);
    add_background_object(create_rmbrick4_1125(1344, 352), 2);
    add_background_object(create_rmbrick13_1116(1304, 320), 2);
    add_background_object(create_rmbrick3_1131(1304, 320), 2);
    add_background_object(create_rmbrick4_1125(1344, 320), 2);
    add_background_object(create_rmbrick9_1138(1304, 352), 2);
    add_background_object(create_rmbrick10_1137(1536, 656), 2);
    add_background_object(create_rmbrick4_1125(1240, 544), 2);
    add_background_object(create_rmbrick3_1131(1264, 544), 2);
    add_background_object(create_rmbrick4_1125(1240, 576), 2);
    add_background_object(create_rmbrick3_1131(1264, 576), 2);
    add_background_object(create_rmbrick14_1128(1240, 608), 2);
    add_background_object(create_rmbrick15_1154(1264, 608), 2);
    add_background_object(create_rmcolumn2_1109(1240, 664), 2);
    add_background_object(create_rmcolumn2_1109(1240, 736), 2);
    add_background_object(create_rmcolumn2_1109(1240, 704), 2);
    add_background_object(create_rmbrick1_1121(960, 976), 2);
    add_background_object(create_rmbrick1_1121(1088, 976), 2);
    add_background_object(create_rmbrick1_1121(1216, 976), 2);
    add_background_object(create_rmbrick1_1121(832, 976), 2);
    add_background_object(create_rmbrick1_1121(320, 832), 2);
    add_background_object(create_rmbrick1_1121(576, 896), 2);
    add_background_object(create_rmbrick1_1121(448, 896), 2);
    add_background_object(create_rmbrick5_1136(1792, 656), 2);
    add_background_object(create_rmbrick2_1108(1792, 880), 2);
    add_background_object(create_rmbrick7_1130(1728, 688), 2);
    add_background_object(create_rmbrick2_1108(1792, 912), 2);
    add_background_object(create_rmbrick9_1138(2088, 512), 2);
    add_background_object(create_rmbrick13_1116(2088, 544), 2);
    add_background_object(create_rmbrick9_1138(2024, 512), 2);
    add_background_object(create_rmbrick13_1116(2024, 544), 2);
    add_background_object(create_rmbrick5_1136(1960, 512), 2);
    add_background_object(create_rmbrick13_1116(1960, 544), 2);
    add_background_object(create_loop2_1215(1792, 768), 2);
    add_background_object(create_loop8_1218(1792, 720), 2);
    add_background_object(create_loop8_1218(1792, 656), 2);
    add_background_object(create_loop7_1211(1536, 816), 2);
    add_background_object(create_loop6_1216(1520, 768), 2);
    add_background_object(create_rmbrick5_1136(1664, 688), 2);
    add_background_object(create_rmbrick9_1138(1856, 656), 2);
    add_background_object(create_rmbrick1_1121(1536, 944), 2);
    add_background_object(create_rmbrick13_1116(1792, 944), 2);
    add_background_object(create_rmbrick13_1116(1856, 848), 2);
    add_background_object(create_rmbrick3_1131(1656, 976), 2);
    add_background_object(create_rmbrick3_1131(1656, 1008), 2);
    add_background_object(create_rmbrick3_1131(1656, 1040), 2);
    add_background_object(create_rmbrick2_1108(1472, 1072), 2);
    add_background_object(create_rmbrick2_1108(1536, 1072), 2);
    add_background_object(create_rmbrick3_1131(1656, 1072), 2);
    add_background_object(create_loop4_1214(1584, 704), 2);
    add_background_object(create_rmbrick3_1131(1656, 944), 2);
    add_background_object(create_rmbrick2_1108(1472, 944), 2);
    add_background_object(create_rmbrick2_1108(1472, 976), 2);
    add_background_object(create_rmbrick2_1108(1472, 1008), 2);
    add_background_object(create_rmbrick2_1108(1472, 1040), 2);
    add_background_object(create_rmbrick2_1108(1600, 1072), 2);
    add_background_object(create_loop6down_1217(1656, 976), 2);
    add_background_object(create_loop6down_1217(1656, 912), 2);
    add_background_object(create_loop6down_1217(1656, 1040), 2);
    add_background_object(create_rmbrick1_1121(1536, 1232), 2);
    add_background_object(create_rmbrick1_1121(1408, 1232), 2);
    add_background_object(create_rmbrick1_1121(1280, 1232), 2);
    add_background_object(create_rmbrick1_1121(1944, 1232), 2);
    add_background_object(create_rmbrick1_1121(1816, 1232), 2);
    add_background_object(create_rmbrick5_1136(1944, 1200), 2);
    add_background_object(create_rmbrick9_1138(2008, 1200), 2);
    add_background_object(create_rmbrick1_1121(2072, 1232), 2);
    add_background_object(create_rmbrick5_1136(2072, 1200), 2);
    add_background_object(create_rmbrick1_1121(2200, 1232), 2);
    add_background_object(create_rmbrick13_1116(2072, 1136), 2);
    add_background_object(create_rmbrick13_1116(2008, 1136), 2);
    add_background_object(create_rmbrick14_1128(1984, 1136), 2);
    add_background_object(create_rmbrick6_1129(1984, 1104), 2);
    add_background_object(create_rmbrick5_1136(2008, 1104), 2);
    add_background_object(create_rmbrick4_1125(2112, 1104), 2);
    add_background_object(create_rmbrick9_1138(2072, 1104), 2);
    add_background_object(create_rmbrick1_1121(1536, 1360), 2);
    add_background_object(create_rmbrick1_1121(1408, 1360), 2);
    add_background_object(create_rmbrick1_1121(1280, 1360), 2);
    add_background_object(create_rmbrick1_1121(1944, 1360), 2);
    add_background_object(create_rmbrick1_1121(1752, 1360), 2);
    add_background_object(create_rmbrick1_1121(2072, 1360), 2);
    add_background_object(create_rmbrick1_1121(2200, 1360), 2);
    add_background_object(create_rmbrick4_1125(2112, 1008), 2);
    add_background_object(create_rmbrick4_1125(2112, 976), 2);
    add_background_object(create_rmbrick1_1121(2264, 1008), 2);
    add_background_object(create_rmbrick3_1131(1920, 816), 2);
    add_background_object(create_rmbrick3_1131(1856, 848), 2);
    add_background_object(create_rmbrick3_1131(1856, 880), 2);
    add_background_object(create_rmbrick3_1131(1856, 912), 2);
    add_background_object(create_rmbrick3_1131(1816, 352), 2);
    add_background_object(create_rmbrick3_1131(1920, 752), 2);
    add_background_object(create_rmbrick3_1131(1920, 784), 2);
    add_background_object(create_rmbrick15_1154(1920, 848), 2);
    add_background_object(create_rmbrick3_1131(1920, 720), 2);
    add_background_object(create_rmbrick7_1130(2048, 624), 2);
    add_background_object(create_rmbrick15_1154(2048, 688), 2);
    add_background_object(create_rmbrick13_1116(1984, 688), 2);
    add_background_object(create_rmbrick13_1116(1920, 688), 2);
    add_background_object(create_rmbrick3_1131(1920, 688), 2);
    add_background_object(create_loop1_1203(2200, 720), 2);
    add_background_object(create_rmbrick1_1121(2328, 720), 2);
    add_background_object(create_rmbrick9_1138(2328, 656), 2);
    add_background_object(create_loop8_1218(1792, 752), 2);
    add_background_object(create_rmbrick2_1108(2328, 688), 2);
    add_background_object(create_loop2_1215(2328, 672), 2);
    add_background_object(create_loop8_1218(2328, 656), 2);
    add_background_object(create_rmbrick5_1136(2136, 816), 2);
    add_background_object(create_rmbrick9_1138(2072, 816), 2);
    add_background_object(create_rmbrick6_1129(2048, 816), 2);
    add_background_object(create_rmbrick2_1108(1856, 816), 2);
    add_background_object(create_rmbrick15_1154(1856, 944), 2);
    add_background_object(create_rmbrick14_1128(2048, 848), 2);
    add_background_object(create_rmbrick13_1116(2072, 848), 2);
    add_background_object(create_rmbrick6_1129(2112, 944), 2);
    add_background_object(create_rmbrick13_1116(2136, 848), 2);
    add_background_object(create_rmbrick5_1136(2136, 944), 2);
    add_background_object(create_rmbrick1_1121(2200, 848), 2);
    add_background_object(create_rmbrick1_1121(2328, 1232), 2);
    add_background_object(create_rmbrick1_1121(2392, 1104), 2);
    add_background_object(create_rmbrick1_1121(2328, 1360), 2);
    add_background_object(create_rmbrick1_1121(2392, 976), 2);
    add_background_object(create_rmbrick1_1121(2392, 848), 2);
    add_background_object(create_switchwallbase_1155(2160, 896), 2);
    add_background_object(create_rmbrick15_1154(1662, 1104), 2);
    add_background_object(create_rmbrick13_1116(1608, 1104), 2);
    add_background_object(create_rmbrick9_1138(1600, 1200), 2);
    add_background_object(create_rmbrick9_1138(1752, 1200), 2);
    add_background_object(create_rmbrick9_1138(1880, 1200), 2);
    add_background_object(create_rmbrick5_1136(1816, 1200), 2);
    add_background_object(create_rmbrick2_1108(1752, 1232), 2);
    add_background_object(create_rmbrick2_1108(1752, 1264), 2);
    add_background_object(create_rmbrick2_1108(1752, 1296), 2);
    add_background_object(create_rmbrick2_1108(1752, 1328), 2);
    add_background_object(create_rmbrick2_1108(1880, 1360), 2);
    add_background_object(create_rmbrick2_1108(1880, 1392), 2);
    add_background_object(create_rmbrick2_1108(1880, 1424), 2);
    add_background_object(create_rmbrick2_1108(1880, 1456), 2);
    add_background_object(create_rmbrick6_1129(1728, 1200), 2);
    add_background_object(create_rmbrick4_1125(1728, 1296), 2);
    add_background_object(create_rmbrick4_1125(1728, 1264), 2);
    add_background_object(create_rmbrick4_1125(1728, 1232), 2);
    add_background_object(create_rmbrick4_1125(1728, 1360), 2);
    add_background_object(create_rmbrick4_1125(1728, 1328), 2);
    add_background_object(create_rmbrick9_1138(1704, 1376), 2);
    add_background_object(create_rmbrick1_1121(1752, 1488), 2);
    add_background_object(create_rmbrick1_1121(1880, 1488), 2);
    add_background_object(create_rmbrick1_1121(2008, 1488), 2);
    add_background_object(create_rmbrick1_1121(1368, 1488), 2);
    add_background_object(create_rmbrick1_1121(1496, 1488), 2);
    add_background_object(create_rmbrick1_1121(1624, 1488), 2);
    add_background_object(create_rmbrick2_1108(1664, 1392), 2);
    add_background_object(create_rmbrick2_1108(1664, 1424), 2);
    add_background_object(create_rmbrick7_1130(1664, 1200), 2);
    add_background_object(create_rmbrick3_1131(1664, 1232), 2);
    add_background_object(create_rmbrick3_1131(1664, 1264), 2);
    add_background_object(create_rmbrick3_1131(1664, 1296), 2);
    add_background_object(create_rmbrick3_1131(1664, 1328), 2);
    add_background_object(create_rmbrick3_1131(1664, 1360), 2);
    add_background_object(create_rmbrick9_1138(1640, 1376), 2);
    add_background_object(create_rmbrick2_1108(1664, 1456), 2);
    add_background_object(create_rmladder_1152(2072, 944), 2);
    add_background_object(create_rmladder_1152(2072, 976), 2);
    add_background_object(create_rmladder_1152(2072, 1008), 2);
    add_background_object(create_rmbrick4_1125(2176, 848), 2);
    add_background_object(create_rmbrick4_1125(2176, 880), 2);
    add_background_object(create_rmbrick4_1125(2176, 912), 2);
    add_background_object(create_rmbrick4_1125(2176, 944), 2);
    add_background_object(create_edgeoverlay_496(1608, 288), 2);
    add_background_object(create_edgeoverlay_496(1608, 136), 2);
    add_background_object(create_rmbrick8_1135(2136, 1008), 2);
    add_background_object(create_rmcolumn2_1109(1728, 1104), 2);
    add_background_object(create_rmcolumn2_1109(1728, 1056), 2);
    add_background_object(create_rmcolumn2_1109(1728, 1008), 2);
    add_background_object(create_rmcolumn3_1114(1984, 1008), 2);
    add_background_object(create_rmplant1_1139(1256, 512), 2);
    add_background_object(create_rmplant1_1139(1176, 576), 2);
    add_background_object(create_rmplant1_1139(1432, 656), 2);
    add_background_object(create_rmplant1_1139(1416, 680), 2);
    add_background_object(create_rmplant1_1139(1304, 824), 2);
    add_background_object(create_rmplant1_1139(1320, 848), 2);
    add_background_object(create_rmplant1_1139(1200, 640), 2);
    add_background_object(create_rmplant1_1139(1160, 600), 2);
    add_background_object(create_rmplant1_1139(952, 816), 2);
    add_background_object(create_rmplant1_1139(944, 848), 2);
    add_background_object(create_rmplant1_1139(1504, 800), 2);
    add_background_object(create_rmplant1_1139(1488, 848), 2);
    add_background_object(create_rmplant1_1139(1808, 320), 2);
    add_background_object(create_rmplant1_1139(2208, 488), 2);
    add_background_object(create_rmplant1_1139(2208, 448), 2);
    add_background_object(create_rmplant1_1139(2208, 408), 2);
    add_background_object(create_rmbrick5_1136(2392, 656), 2);
    add_background_object(create_rmbrick2_1108(2392, 688), 2);
    add_background_object(create_loop7back_1207(2520, 912), 2);
    add_background_object(create_loop7_1211(2520, 912), 2);
    add_background_object(create_brickcurve1_1219(2456, 656), 2);
    add_background_object(create_rmbrickcurve2_1220(2776, 656), 2);
    add_background_object(create_loop6_1216(2504, 872), 2);
    add_background_object(create_rmbrick1_1121(2520, 1040), 2);
    add_background_object(create_loop6down_1217(2496, 848), 2);
    add_background_object(create_rmbrick1_1121(2648, 1040), 2);
    add_background_object(create_rmbrick1_1121(2456, 1232), 2);
    add_background_object(create_rmbrick1_1121(2456, 1360), 2);
    add_background_object(create_rmbrick1_1121(2584, 1232), 2);
    add_background_object(create_rmbrick1_1121(2584, 1360), 2);
    add_background_object(create_rmbrick2_1108(2520, 1168), 2);
    add_background_object(create_rmbrick2_1108(2520, 1200), 2);
    add_background_object(create_rmbrick2_1108(2584, 1168), 2);
    add_background_object(create_rmbrick2_1108(2584, 1200), 2);
    add_background_object(create_rmbrick2_1108(2648, 1168), 2);
    add_background_object(create_rmbrick2_1108(2648, 1200), 2);
    add_background_object(create_rmbrick1_1121(2776, 848), 2);
    add_background_object(create_loop2_1215(2776, 864), 2);
    add_background_object(create_rmbrick1_1121(2776, 1040), 2);
    add_background_object(create_rmbrick2_1108(2776, 976), 2);
    add_background_object(create_rmbrick2_1108(2776, 1008), 2);
    add_background_object(create_rmbrick2_1108(2840, 1008), 2);
    add_background_object(create_rmbrick2_1108(2840, 976), 2);
    add_background_object(create_loop8_1218(2776, 848), 2);
    add_background_object(create_brickcurve1back_1204(2848, 656), 2);
    add_background_object(create_brickcurve1_1219(2840, 656), 2);
    add_background_object(create_loop1_1203(3032, 912), 2);
    add_background_object(create_loop7back_1207(2904, 912), 2);
    add_background_object(create_loop7_1211(2904, 912), 2);
    add_background_object(create_loop6_1216(2888, 872), 2);
    add_background_object(create_loop6down_1217(2880, 848), 2);
    add_background_object(create_rmbrick1_1121(3160, 848), 2);
    add_background_object(create_loop2_1215(3160, 864), 2);
    add_background_object(create_rmbrick2_1108(3160, 976), 2);
    add_background_object(create_rmbrick2_1108(3160, 1008), 2);
    add_background_object(create_rmbrick2_1108(3224, 1008), 2);
    add_background_object(create_rmbrick2_1108(3224, 976), 2);
    add_background_object(create_loop8_1218(3160, 848), 2);
    add_background_object(create_loop6down_1217(2496, 784), 2);
    add_background_object(create_loop6down_1217(2496, 720), 2);
    add_background_object(create_rmbrick1_1121(2776, 720), 2);
    add_background_object(create_loop8_1218(2776, 784), 2);
    add_background_object(create_loop8_1218(2776, 720), 2);
    add_background_object(create_loop6down_1217(2880, 720), 2);
    add_background_object(create_loop6down_1217(2880, 784), 2);
    add_background_object(create_rmbrick1_1121(2904, 1040), 2);
    add_background_object(create_rmbrick1_1121(3032, 1040), 2);
    add_background_object(create_rmbrick1_1121(3160, 1040), 2);
    add_background_object(create_rmbrick1_1121(3288, 1040), 2);
    add_background_object(create_rmbrick1_1121(3288, 912), 2);
    add_background_object(create_rmbrick1_1121(3288, 784), 2);
    add_background_object(create_rmbrick1_1121(3288, 656), 2);
    add_background_object(create_rmbrick1_1121(3288, 528), 2);
    add_background_object(create_rmbrick1_1121(3288, 400), 2);
    add_background_object(create_rmbrick1_1121(3160, 720), 2);
    add_background_object(create_loop8_1218(3160, 784), 2);
    add_background_object(create_loop8_1218(3160, 720), 2);
    add_background_object(create_rmbrick4_1125(3264, 656), 2);
    add_background_object(create_rmbrick5_1136(3224, 656), 2);
    add_background_object(create_rmbrick4_1125(3264, 624), 2);
    add_background_object(create_rmbrick4_1125(3264, 592), 2);
    add_background_object(create_rmbrick4_1125(3264, 560), 2);
    add_background_object(create_rmbrick4_1125(3264, 528), 2);
    add_background_object(create_rmbrick4_1125(3264, 496), 2);
    add_background_object(create_rmbrick4_1125(3264, 464), 2);
    add_background_object(create_rmbrick4_1125(3264, 432), 2);
    add_background_object(create_rmbrick4_1125(3264, 400), 2);
    add_background_object(create_rmbrickcurve2_1220(3160, 656), 2);
    add_background_object(create_rmbrick8_1135(3224, 688), 2);
    add_background_object(create_rmbrick13_1116(2264, 384), 2);
    add_background_object(create_rmbrick13_1116(2328, 384), 2);
    add_background_object(create_rmbrick13_1116(2392, 384), 2);
    add_background_object(create_rmbrick13_1116(2456, 448), 2);
    add_background_object(create_backdrop3_1221(1968, 800), 2);
    add_background_object(create_backdrop3_1221(1968, 872), 2);
    add_background_object(create_backdrop3_1221(1968, 728), 2);
    add_background_object(create_backdrop_1222(1416, 1872), 2);
    add_background_object(create_backdrop_1222(1416, 1904), 2);
    add_background_object(create_backdrop2_1223(1416, 1968), 2);
    add_background_object(create_rmbrick2_1108(2456, 384), 2);
    add_background_object(create_rmbrick2_1108(2456, 416), 2);
    add_background_object(create_rmbrick2_1108(2520, 416), 2);
    add_background_object(create_rmbrick4_1125(2432, 384), 2);
    add_background_object(create_rmbrick4_1125(2432, 416), 2);
    add_background_object(create_rmbrick14_1128(2432, 448), 2);
    add_background_object(create_rmbrick13_1116(2520, 448), 2);
    add_background_object(create_rmbrick13_1116(2584, 448), 2);
    add_background_object(create_rmbrick13_1116(2648, 448), 2);
    add_background_object(create_rmbrick13_1116(2712, 448), 2);
    add_background_object(create_rmbrick2_1108(2520, 384), 2);
    add_background_object(create_rmbrick2_1108(2584, 384), 2);
    add_background_object(create_rmbrick2_1108(2584, 416), 2);
    add_background_object(create_rmbrick2_1108(2648, 416), 2);
    add_background_object(create_rmbrick2_1108(2648, 384), 2);
    add_background_object(create_rmbrick2_1108(2712, 416), 2);
    add_background_object(create_rmbrick2_1108(2712, 384), 2);
    add_background_object(create_rmbrick3_1131(2264, 352), 2);
    add_background_object(create_rmbrick3_1131(2264, 320), 2);
    add_background_object(create_rmbrick3_1131(2264, 288), 2);
    add_background_object(create_rmcolumn2_1109(2440, 504), 2);
    add_background_object(create_rmcolumn2_1109(2440, 552), 2);
    add_background_object(create_rmcolumn2_1109(2440, 576), 2);
    add_background_object(create_rmbrick13_1116(2448, 176), 2);
    add_background_object(create_rmbrick13_1116(2776, 448), 2);
    add_background_object(create_rmbrick13_1116(2840, 448), 2);
    add_background_object(create_rmbrick2_1108(2776, 416), 2);
    add_background_object(create_rmbrick2_1108(2776, 384), 2);
    add_background_object(create_rmbrick2_1108(2840, 416), 2);
    add_background_object(create_rmbrick2_1108(2840, 384), 2);
    add_background_object(create_rmcolumn2_1109(2816, 504), 2);
    add_background_object(create_rmcolumn2_1109(2816, 552), 2);
    add_background_object(create_rmcolumn2_1109(2816, 576), 2);
    add_background_object(create_rmbrick7_1130(2904, 352), 2);
    add_background_object(create_rmbrick15_1154(2936, 448), 2);
    add_background_object(create_rmbrick3_1131(2904, 384), 2);
    add_background_object(create_rmcolumn2_1109(2328, 256), 2);
    add_background_object(create_rmcolumn2_1109(2432, 256), 2);
    add_background_object(create_rmcolumn3_1114(2328, 208), 2);
    add_background_object(create_rmbrick1_1121(3288, 272), 2);
    add_background_object(create_rmbrick1_1121(3288, 144), 2);
    add_background_object(create_rmbrick4_1125(3264, 368), 2);
    add_background_object(create_rmbrick4_1125(3264, 336), 2);
    add_background_object(create_rmbrick4_1125(3264, 304), 2);
    add_background_object(create_rmbrick4_1125(3264, 272), 2);
    add_background_object(create_rmbrick4_1125(3264, 240), 2);
    add_background_object(create_rmbrick4_1125(3264, 208), 2);
    add_background_object(create_rmbrick4_1125(3264, 176), 2);
    add_background_object(create_rmbrick4_1125(3264, 144), 2);
    add_background_object(create_rmbrick1_1121(3288, 16), 2);
    add_background_object(create_rmbrick4_1125(3264, 112), 2);
    add_background_object(create_rmbrick4_1125(3264, 80), 2);
    add_background_object(create_rmbrick4_1125(3264, 48), 2);
    add_background_object(create_rmbrick4_1125(3264, 16), 2);
    add_background_object(create_rmbrick1_1121(3288, -112), 2);
    add_background_object(create_rmbrick4_1125(3264, -16), 2);
    add_background_object(create_rmbrick4_1125(3264, -48), 2);
    add_background_object(create_rmbrick4_1125(3264, -80), 2);
    add_background_object(create_rmbrick4_1125(3264, -112), 2);
    add_background_object(create_rmbrick1_1121(3416, 1040), 2);
    add_background_object(create_rmbrick1_1121(3416, 912), 2);
    add_background_object(create_rmbrick1_1121(3416, 784), 2);
    add_background_object(create_rmbrick1_1121(3416, 656), 2);
    add_background_object(create_rmbrick1_1121(3416, 528), 2);
    add_background_object(create_rmbrick1_1121(3416, 400), 2);
    add_background_object(create_rmbrick1_1121(3416, 272), 2);
    add_background_object(create_rmbrick1_1121(3416, 144), 2);
    add_background_object(create_rmbrick1_1121(3416, 16), 2);
    add_background_object(create_rmbrick1_1121(3416, -112), 2);
    add_background_object(create_rmbrick1_1121(2776, 1168), 2);
    add_background_object(create_rmbrick1_1121(2904, 1168), 2);
    add_background_object(create_rmbrick1_1121(3032, 1168), 2);
    add_background_object(create_rmbrick1_1121(3160, 1168), 2);
    add_background_object(create_rmbrick1_1121(3288, 1168), 2);
    add_background_object(create_rmbrick1_1121(3416, 1168), 2);
    add_background_object(create_rmbrick2_1108(2712, 1168), 2);
    add_background_object(create_rmbrick2_1108(2712, 1200), 2);
    add_background_object(create_rmbrick2_1108(2712, 1232), 2);
    add_background_object(create_rmbrick2_1108(2712, 1264), 2);
    add_background_object(create_edgeoverlay_496(1736, 136), 2);
    add_background_object(create_rmbrick19_1161(1920, 624), 2);
    add_background_object(create_rmbrick3_1131(2048, 656), 2);
    add_background_object(create_edgeoverlay_496(1736, 136), 2);
    add_background_object(create_rmbrick14_1128(2424, 176), 2);
    add_background_object(create_rmbrick15_1154(2576, 176), 2);
    add_background_object(create_rmbrick6_1129(2424, 144), 2);
    add_background_object(create_rmbrick7_1130(2576, 144), 2);
    add_background_object(create_rmbrick3_1131(2264, 120), 2);
    add_background_object(create_rmbrick3_1131(2264, 88), 2);
    add_background_object(create_rmbrick3_1131(2264, 56), 2);
    add_background_object(create_rmbrick3_1131(2264, 24), 2);
    add_background_object(create_brick23_1224(2840, 352), 2);
    add_background_object(create_rmcolumn3_1114(2720, 256), 2);
    add_background_object(create_rmbrick2_1108(2840, 192), 2);
    add_background_object(create_rmbrick13_1116(2840, 224), 2);
    add_background_object(create_rmbrick3_1131(2904, 192), 2);
    add_background_object(create_rmbrick15_1154(2904, 224), 2);
    add_background_object(create_rmbrick4_1125(2816, 96), 2);
    add_background_object(create_rmbrick4_1125(2816, 192), 2);
    add_background_object(create_rmbrick14_1128(2816, 224), 2);
    add_background_object(create_rmbrick3_1131(2904, 160), 2);
    add_background_object(create_rmbrick2_1108(2840, 128), 2);
    add_background_object(create_rmbrick3_1131(2904, 128), 2);
    add_background_object(create_rmbrick4_1125(2816, 128), 2);
    add_background_object(create_rmbrick2_1108(2840, 96), 2);
    add_background_object(create_rmbrick3_1131(2904, 96), 2);
    add_background_object(create_rmbrick2_1108(2840, 64), 2);
    add_background_object(create_rmbrick3_1131(2904, 64), 2);
    add_background_object(create_rmbrick4_1125(2816, 32), 2);
    add_background_object(create_rmbrick4_1125(2816, 64), 2);
    add_background_object(create_rmbrick2_1108(2840, 32), 2);
    add_background_object(create_rmbrick3_1131(2904, 32), 2);
    add_background_object(create_rmbrick4_1125(2816, 0), 2);
    add_background_object(create_rmbrick2_1108(2840, 0), 2);
    add_background_object(create_rmbrick3_1131(2904, 0), 2);
    add_background_object(create_rmbrick8_1135(2840, 160), 2);
    add_background_object(create_rmcolumn2_1109(2848, 280), 2);
    add_background_object(create_rmbrick13_1116(2776, 160), 2);
    add_background_object(create_rmbrick4_1125(2816, 160), 2);
    add_background_object(create_rmbrick5_1136(2776, 128), 2);
    add_background_object(create_rmbrick9_1138(2512, 144), 2);
    add_background_object(create_rmbrick13_1116(2512, 176), 2);
    add_background_object(create_rmbrick6_1129(2752, 128), 2);
    add_background_object(create_rmbrick14_1128(2752, 160), 2);
    add_background_object(create_rmplant1_1139(2824, 128), 2);
    add_background_object(create_rmplant1_1139(2856, 48), 2);
    add_background_object(create_rmbrick13_1116(64, 1344), 2);
    add_background_object(create_rmbrick10_1137(2072, 224), 2);
    add_background_object(create_rmbrick2_1108(2008, 256), 2);
    add_background_object(create_rmbrick9_1138(2200, 256), 2);
    add_background_object(create_rmbrick2_1108(2136, 288), 2);
    add_background_object(create_rmbrick2_1108(2200, 320), 2);
    add_background_object(create_rmbrick2_1108(2200, 352), 2);
    add_background_object(create_rmbrick2_1108(2136, 352), 2);
    add_background_object(create_rmplant1_1139(2208, 368), 2);
    add_background_object(create_rmbrick2_1108(2136, 320), 2);
    add_background_object(create_rmbrick8_1135(2200, 288), 2);
    add_background_object(create_rmbrick7_1130(2264, 256), 2);
    add_background_object(create_rmbrick15_1154(2264, 152), 2);
    add_background_object(create_rmbrick13_1116(2200, 152), 2);
    add_background_object(create_rmbrick13_1116(2072, 152), 2);
    add_background_object(create_rmbrick13_1116(2136, 152), 2);
    add_background_object(create_rmbrick9_1138(2448, 144), 2);
    add_background_object(create_rmbrick4_1125(1984, -8), 2);
    add_background_object(create_rmbrick4_1125(1984, -40), 2);
    add_background_object(create_rmbrick4_1125(1984, -72), 2);
    add_background_object(create_rmbrick4_1125(1984, -104), 2);
    add_background_object(create_rmbrick1_1121(2008, -104), 2);
    add_background_object(create_rmbrick1_1121(2136, -104), 2);
    add_background_object(create_rmbrick3_1131(2264, -8), 2);
    add_background_object(create_rmbrick3_1131(2264, -40), 2);
    add_background_object(create_rmbrick3_1131(2264, -72), 2);
    add_background_object(create_rmbrick3_1131(2264, -104), 2);
    add_background_object(create_rmbrick1_1121(576, 1376), 2);
    add_background_object(create_rmbrick1_1121(704, 1376), 2);
    add_background_object(create_rmbrick4_1125(424, 1376), 2);
    add_background_object(create_rmbrick1_1121(448, 1376), 2);
    add_background_object(create_rmbrick1_1121(576, 1504), 2);
    add_background_object(create_rmbrick1_1121(704, 1504), 2);
    add_background_object(create_rmbrick1_1121(448, 1504), 2);
    add_background_object(create_rmbrick4_1125(424, 1408), 2);
    add_background_object(create_rmbrick4_1125(424, 1440), 2);
    add_background_object(create_rmbrick4_1125(424, 1472), 2);
    add_background_object(create_rmbrick4_1125(424, 1504), 2);
    add_background_object(create_rmbrick2_1108(448, 1632), 2);
    add_background_object(create_rmbrick13_1116(448, 1664), 2);
    add_background_object(create_rmbrick15_1154(576, 1664), 2);
    add_background_object(create_rmbrick13_1116(576, 1632), 2);
    add_background_object(create_rmbrick13_1116(640, 1632), 2);
    add_background_object(create_rmbrick13_1116(704, 1632), 2);
    add_background_object(create_rmbrick13_1116(768, 1632), 2);
    add_background_object(create_rmbrick1_1121(704, 1024), 2);
    add_background_object(create_rmbrick1_1121(576, 1024), 2);
    add_background_object(create_rmbrick1_1121(448, 992), 2);
    add_background_object(create_rmbrick1_1121(320, 960), 2);
    add_background_object(create_rmbrick1_1121(192, 832), 2);
    add_background_object(create_rmbrick1_1121(192, 960), 2);
    add_background_object(create_rmbrick1_1121(64, 800), 2);
    add_background_object(create_rmbrick1_1121(64, 928), 2);
    add_background_object(create_rmbrick1_1121(-64, 800), 2);
    add_background_object(create_rmbrick1_1121(-64, 928), 2);
    add_background_object(create_rmbrick2_1108(128, 1056), 2);
    add_background_object(create_rmbrick2_1108(64, 1056), 2);
    add_background_object(create_rmbrick2_1108(0, 1056), 2);
    add_background_object(create_rmbrick7_1130(576, 1792), 2);
    add_background_object(create_rmbrick3_1131(576, 1856), 2);
    add_background_object(create_rmbrick2_1108(384, 1792), 2);
    add_background_object(create_rmbrick2_1108(384, 1856), 2);
    add_background_object(create_rmbrick2_1108(512, 1856), 2);
    add_background_object(create_rmbrick2_1108(448, 1856), 2);
    add_background_object(create_rmbrick13_1116(448, 1888), 2);
    add_background_object(create_rmbrick13_1116(512, 1888), 2);
    add_background_object(create_rmbrick15_1154(576, 1888), 2);
    add_background_object(create_rmbrick13_1116(384, 1888), 2);
    add_background_object(create_rmbrick13_1116(320, 1888), 2);
    add_background_object(create_rmbrick7_1130(576, 2016), 2);
    add_background_object(create_rmbrick19_1161(448, 2016), 2);
    add_background_object(create_rmbrick3_1131(576, 2048), 2);
    add_background_object(create_rmbrick5_1136(576, 2048), 2);
    add_background_object(create_rmbrick6_1129(424, 2048), 2);
    add_background_object(create_rmbrick3_1131(320, 1888), 2);
    add_background_object(create_rmbrick9_1138(640, 2048), 2);
    add_background_object(create_rmbrick4_1125(744, 2016), 2);
    add_background_object(create_rmbrick4_1125(744, 1952), 2);
    add_background_object(create_rmbrick6_1129(744, 1888), 2);
    add_background_object(create_rmbrick4_1125(744, 1632), 2);
    add_background_object(create_rmbrick4_1125(744, 1664), 2);
    add_background_object(create_rmbrick4_1125(744, 1696), 2);
    add_background_object(create_rmbrick4_1125(744, 1728), 2);
    add_background_object(create_rmbrick14_1128(744, 1760), 2);
    add_background_object(create_rmbrick15_1154(768, 1760), 2);
    add_background_object(create_rmbrick3_1131(768, 1728), 2);
    add_background_object(create_rmbrick3_1131(768, 1696), 2);
    add_background_object(create_rmbrick3_1131(768, 1664), 2);
    add_background_object(create_rmbrick3_1131(768, 1632), 2);
    add_background_object(create_rmbrick4_1125(744, 1984), 2);
    add_background_object(create_rmbrick7_1130(768, 1888), 2);
    add_background_object(create_rmbrick3_1131(768, 1952), 2);
    add_background_object(create_rmbrick3_1131(768, 1984), 2);
    add_background_object(create_rmbrick3_1131(768, 2016), 2);
    add_background_object(create_rmbrick4_1125(744, 1920), 2);
    add_background_object(create_rmbrick3_1131(768, 1920), 2);
    add_background_object(create_rmbrick4_1125(744, 2048), 2);
    add_background_object(create_rmbrick3_1131(768, 2048), 2);
    add_background_object(create_rmbrick5_1136(704, 2048), 2);
    add_background_object(create_rmbrick9_1138(768, 2048), 2);
    add_background_object(create_rmbrick1_1121(832, 1248), 2);
    add_background_object(create_rmbrick1_1121(832, 1376), 2);
    add_background_object(create_rmbrick1_1121(832, 1504), 2);
    add_background_object(create_rmbrick13_1116(832, 1632), 2);
    add_background_object(create_rmbrick13_1116(896, 1632), 2);
    add_background_object(create_rmbrick1_1121(960, 1344), 2);
    add_background_object(create_rmbrick1_1121(960, 1504), 2);
    add_background_object(create_rmbrick13_1116(960, 1664), 2);
    add_background_object(create_rmbrick13_1116(1024, 1664), 2);
    add_background_object(create_rmbrick3_1131(576, 1632), 2);
    add_background_object(create_rmbrick2_1108(512, 1632), 2);
    add_background_object(create_rmbrick13_1116(512, 1664), 2);
    add_background_object(create_rmbrick5_1136(832, 2048), 2);
    add_background_object(create_rmbrick4_1125(936, 2048), 2);
    add_background_object(create_rmbrick9_1138(896, 2048), 2);
    add_background_object(create_rmbrick6_1129(936, 2016), 2);
    add_background_object(create_rmbrick5_1136(960, 2016), 2);
    add_background_object(create_rmbrick1_1121(960, 2048), 2);
    add_background_object(create_rmbrick9_1138(1024, 2016), 2);
    add_background_object(create_rmbrick4_1125(424, 2080), 2);
    add_background_object(create_rmbrick4_1125(424, 2112), 2);
    add_background_object(create_rmbrick1_1121(448, 2080), 2);
    add_background_object(create_rmbrick1_1121(576, 2080), 2);
    add_background_object(create_rmbrick1_1121(704, 2080), 2);
    add_background_object(create_rmbrick1_1121(832, 2080), 2);
    add_background_object(create_rmbrick1_1121(576, 2208), 2);
    add_background_object(create_rmbrick1_1121(704, 2208), 2);
    add_background_object(create_rmbrick1_1121(832, 2208), 2);
    add_background_object(create_rmbrick1_1121(448, 2208), 2);
    add_background_object(create_rmbrick4_1125(936, 1632), 2);
    add_background_object(create_rmbrick14_1128(936, 1664), 2);
    add_background_object(create_rmbrick2_1108(960, 1632), 2);
    add_background_object(create_rmbrick2_1108(1024, 1632), 2);
    add_background_object(create_rmbrick6_1129(936, 1792), 2);
    add_background_object(create_rmbrick4_1125(936, 1856), 2);
    add_background_object(create_rmbrick14_1128(936, 1888), 2);
    add_background_object(create_rmbrick5_1136(960, 1792), 2);
    add_background_object(create_rmbrick9_1138(1024, 1792), 2);
    add_background_object(create_rmbrick13_1116(960, 1888), 2);
    add_background_object(create_rmbrick13_1116(1024, 1888), 2);
    add_background_object(create_rmbrick2_1108(960, 1856), 2);
    add_background_object(create_rmbrick2_1108(1024, 1856), 2);
    add_background_object(create_rmbrick3_1131(576, 1824), 2);
    add_background_object(create_rmbrick2_1108(384, 1824), 2);
    add_background_object(create_rmbrick2_1108(512, 1824), 2);
    add_background_object(create_rmbrick2_1108(448, 1824), 2);
    add_background_object(create_rmbrick4_1125(936, 1824), 2);
    add_background_object(create_rmbrick2_1108(960, 1824), 2);
    add_background_object(create_rmbrick2_1108(1024, 1824), 2);
    add_background_object(create_rmbrick1_1121(960, 2176), 2);
    add_background_object(create_rmplant1_1139(440, 1360), 2);
    add_background_object(create_rmbrick3_1131(320, 1920), 2);
    add_background_object(create_rmbrick2_1108(256, 1920), 2);
    add_background_object(create_rmbrick3_1131(320, 1536), 2);
    add_background_object(create_rmbrick3_1131(320, 1568), 2);
    add_background_object(create_rmbrick3_1131(320, 1600), 2);
    add_background_object(create_rmbrick3_1131(320, 1632), 2);
    add_background_object(create_rmbrick3_1131(320, 1504), 2);
    add_background_object(create_rmbrick10_1137(1088, 2016), 2);
    add_background_object(create_rmbrick1_1121(1216, 2080), 2);
    add_background_object(create_rmbrick1_1121(1216, 2208), 2);
    add_background_object(create_rmbrick2_1108(960, 2304), 2);
    add_background_object(create_rmbrick2_1108(1024, 2304), 2);
    add_background_object(create_loop7back_1207(1344, 2112), 2);
    add_background_object(create_loop7_1211(1344, 2112), 2);
    add_background_object(create_loop6_1216(1328, 2064), 2);
    add_background_object(create_rmbrick1_1121(1344, 2240), 2);
    add_background_object(create_loop1_1203(1472, 2112), 2);
    add_background_object(create_rmbrick1_1121(1472, 2240), 2);
    add_background_object(create_rmbrick1_1121(1600, 2240), 2);
    add_background_object(create_rmbrick1_1121(1600, 2112), 2);
    add_background_object(create_rmbrick1_1121(1600, 1984), 2);
    add_background_object(create_loop2_1215(1600, 2064), 2);
    add_background_object(create_loop8_1218(1600, 2048), 2);
    add_background_object(create_loop8_1218(1600, 1984), 2);
    add_background_object(create_rmbrick13_1116(1408, 1888), 2);
    add_background_object(create_rmbrick8_1135(1600, 1952), 2);
    add_background_object(create_rmbrick2_1108(1664, 1952), 2);
    add_background_object(create_rmbrick2_1108(1600, 1920), 2);
    add_background_object(create_loop8_1218(1600, 1920), 2);
    add_background_object(create_rmbrick2_1108(1600, 1888), 2);
    add_background_object(create_rmbrick5_1136(1664, 1792), 2);
    add_background_object(create_rmbrick9_1138(1600, 1792), 2);
    add_background_object(create_loop8_1218(1600, 1856), 2);
    add_background_object(create_rmbrick13_1116(1344, 1888), 2);
    add_background_object(create_rmbrick1_1121(1216, 1760), 2);
    add_background_object(create_rmbrick13_1116(1280, 1888), 2);
    add_background_object(create_rmbrick13_1116(1216, 1888), 2);
    add_background_object(create_rmbrick5_1136(1216, 2048), 2);
    add_background_object(create_rmbrick9_1138(1280, 2048), 2);
    add_background_object(create_loop6down_1217(1320, 2048), 2);
    add_background_object(create_rmbrick1_1121(1088, 2080), 2);
    add_background_object(create_rmbrick1_1121(1088, 2272), 2);
    add_background_object(create_rmbrick5_1136(1088, 1792), 2);
    add_background_object(create_rmbrick13_1116(1088, 1888), 2);
    add_background_object(create_rmbrick13_1116(1152, 1888), 2);
    add_background_object(create_rmbrick2_1108(1088, 1856), 2);
    add_background_object(create_rmbrick2_1108(1152, 1856), 2);
    add_background_object(create_rmbrick2_1108(1088, 1824), 2);
    add_background_object(create_rmbrick2_1108(1152, 1824), 2);
    add_background_object(create_rmbrick13_1116(1560, 1616), 2);
    add_background_object(create_rmbrick13_1116(1496, 1616), 2);
    add_background_object(create_rmbrick13_1116(1432, 1616), 2);
    add_background_object(create_rmbrick13_1116(1624, 1616), 2);
    add_background_object(create_rmbrick3_1131(1472, 1824), 2);
    add_background_object(create_rmbrick3_1131(1472, 1792), 2);
    add_background_object(create_rmbrick3_1131(1472, 1856), 2);
    add_background_object(create_rmbrick2_1108(1344, 1600), 2);
    add_background_object(create_rmbrick2_1108(1408, 1600), 2);
    add_background_object(create_rmbrick3_1131(1472, 1600), 2);
    add_background_object(create_rmbrick1_1121(1240, 1488), 2);
    add_background_object(create_rmbrick2_1108(1280, 1600), 2);
    add_background_object(create_rmbrick2_1108(1216, 1600), 2);
    add_background_object(create_rmbrick1_1121(1112, 1488), 2);
    add_background_object(create_rmbrick1_1121(1152, 1360), 2);
    add_background_object(create_rmbrick2_1108(1152, 1600), 2);
    add_background_object(create_rmbrick2_1108(1088, 1600), 2);
    add_background_object(create_rmbrick2_1108(1088, 1568), 2);
    add_background_object(create_rmbrick2_1108(1088, 1536), 2);
    add_background_object(create_rmbrick2_1108(1088, 1504), 2);
    add_background_object(create_rmbrick2_1108(1088, 1472), 2);
    add_background_object(create_rmbrick2_1108(1088, 1440), 2);
    add_background_object(create_rmbrick2_1108(1088, 1408), 2);
    add_background_object(create_rmbrick2_1108(1088, 1376), 2);
    add_background_object(create_rmbrick13_1116(1688, 1616), 2);
    add_background_object(create_rmbrick15_1154(1472, 1632), 2);
    add_background_object(create_rmbrick13_1116(1344, 1632), 2);
    add_background_object(create_rmbrick13_1116(1408, 1632), 2);
    add_background_object(create_rmbrick13_1116(1216, 1632), 2);
    add_background_object(create_rmbrick13_1116(1280, 1632), 2);
    add_background_object(create_rmbrick13_1116(1088, 1632), 2);
    add_background_object(create_rmbrick13_1116(1152, 1632), 2);
    add_background_object(create_rmbrick3_1131(1088, 1632), 2);
    add_background_object(create_rmbrick15_1154(1088, 1664), 2);
    add_background_object(create_rmbrick4_1125(1192, 1760), 2);
    add_background_object(create_rmbrick4_1125(1192, 1792), 2);
    add_background_object(create_rmbrick9_1138(1152, 1792), 2);
    add_background_object(create_rmbrick5_1136(1280, 1728), 2);
    add_background_object(create_rmbrick9_1138(1216, 1728), 2);
    add_background_object(create_rmbrick6_1129(1192, 1728), 2);
    add_background_object(create_rmbrick2_1108(1600, 1856), 2);
    add_background_object(create_rmbrick2_1108(1600, 1824), 2);
    add_background_object(create_rmbrick1_1121(1664, 1824), 2);
    add_background_object(create_rmbrick9_1138(1728, 1792), 2);
    add_background_object(create_rmbrick2_1108(1408, 1856), 2);
    add_background_object(create_rmbrick2_1108(1408, 1824), 2);
    add_background_object(create_rmbrick2_1108(1408, 1792), 2);
    add_background_object(create_rmbrick2_1108(1344, 1856), 2);
    add_background_object(create_rmbrick2_1108(1344, 1824), 2);
    add_background_object(create_rmbrick2_1108(1344, 1792), 2);
    add_background_object(create_rmbrick10_1137(1344, 1728), 2);
    add_background_object(create_rmbrick7_1130(1472, 1760), 2);
    add_background_object(create_rmbrick1_1121(-64, 2176), 2);
    add_background_object(create_rmbrick2_1108(128, 1920), 2);
    add_background_object(create_rmbrick2_1108(64, 1920), 2);
    add_background_object(create_rmbrick13_1116(256, 1952), 2);
    add_background_object(create_rmbrick15_1154(320, 1952), 2);
    add_background_object(create_rmbrick13_1116(64, 1952), 2);
    add_background_object(create_rmbrick13_1116(128, 1952), 2);
    add_background_object(create_rmbrick3_1131(64, 1952), 2);
    add_background_object(create_brickcurve1back_1204(264, 2336), 2);
    add_background_object(create_brickcurve4back_1225(264, 2400), 2);
    add_background_object(create_brickcurve1_1219(256, 2336), 2);
    add_background_object(create_rmbrickcurve2_1220(192, 2112), 2);
    add_background_object(create_rmbrickcurve3_1226(192, 2176), 2);
    add_background_object(create_rmcolumn2_1109(440, 1944), 2);
    add_background_object(create_rmcolumn2_1109(440, 1976), 2);
    add_background_object(create_rmbrick5_1136(384, 2112), 2);
    add_background_object(create_rmbrick9_1138(320, 2112), 2);
    add_background_object(create_rmbrick5_1136(256, 2112), 2);
    add_background_object(create_rmbrick2_1108(320, 2144), 2);
    add_background_object(create_rmbrick2_1108(256, 2144), 2);
    add_background_object(create_rmbrick2_1108(384, 2144), 2);
    add_background_object(create_rmbrick2_1108(320, 2176), 2);
    add_background_object(create_rmbrick2_1108(256, 2176), 2);
    add_background_object(create_rmbrick2_1108(384, 2176), 2);
    add_background_object(create_rmbrick2_1108(320, 2208), 2);
    add_background_object(create_rmbrick2_1108(256, 2208), 2);
    add_background_object(create_rmbrick2_1108(384, 2208), 2);
    add_background_object(create_loop9_1227(256, 2224), 2);
    add_background_object(create_loop3_1212(352, 2240), 2);
    add_background_object(create_loop4_1214(304, 2224), 2);
    add_background_object(create_loop9_1227(288, 2224), 2);
    add_background_object(create_rmbrick1_1121(448, 2336), 2);
    add_background_object(create_loop2_1215(448, 2288), 2);
    add_background_object(create_loop8_1218(448, 2336), 2);
    add_background_object(create_loop7back_1207(64, 2240), 2);
    add_background_object(create_rmbrick5_1136(192, 2336), 2);
    add_background_object(create_loop7_1211(64, 2240), 2);
    add_background_object(create_rmbrick2_1108(0, 2336), 2);
    add_background_object(create_loop6_1216(48, 2184), 2);
    add_background_object(create_loop6down_1217(40, 1984), 2);
    add_background_object(create_loop6down_1217(40, 2176), 2);
    add_background_object(create_rmbrick15_1154(64, 1984), 2);
    add_background_object(create_loop6down_1217(40, 2112), 2);
    add_background_object(create_loop1_1203(320, 2464), 2);
    add_background_object(create_rmbrick2_1108(0, 2304), 2);
    add_background_object(create_rmbrick1_1121(448, 2464), 2);
    add_background_object(create_loop2_1215(448, 2416), 2);
    add_background_object(create_loop8_1218(448, 2400), 2);
    add_background_object(create_rmbrick5_1136(256, 2560), 2);
    add_background_object(create_loop6down_1217(40, 2048), 2);
    add_background_object(create_rmbrick2_1108(128, 2368), 2);
    add_background_object(create_rmbrick2_1108(192, 2368), 2);
    add_background_object(create_rmbrick2_1108(128, 2400), 2);
    add_background_object(create_rmbrick2_1108(192, 2400), 2);
    add_background_object(create_rmbrick2_1108(128, 2432), 2);
    add_background_object(create_rmbrick2_1108(192, 2432), 2);
    add_background_object(create_loop5back_1205(64, 2464), 2);
    add_background_object(create_loop5_1213(64, 2464), 2);
    add_background_object(create_brickcurve4_1228(256, 2400), 2);
    add_background_object(create_loop9_1227(192, 2448), 2);
    add_background_object(create_rmbrick2_1108(64, 2368), 2);
    add_background_object(create_rmbrick2_1108(64, 2400), 2);
    add_background_object(create_rmbrick2_1108(64, 2432), 2);
    add_background_object(create_loop4_1214(112, 2448), 2);
    add_background_object(create_loop9_1227(160, 2448), 2);
    add_background_object(create_rmbrick1_1121(-64, 2368), 2);
    add_background_object(create_rmbrick1_1121(-64, 2496), 2);
    add_background_object(create_rmbrick1_1121(-64, 2624), 2);
    add_background_object(create_loop6_1216(48, 2512), 2);
    add_background_object(create_loop7back_1207(64, 2624), 2);
    add_background_object(create_loop7_1211(64, 2624), 2);
    add_background_object(create_loop6_1216(48, 2576), 2);
    add_background_object(create_loop6down_1217(40, 2560), 2);
    add_background_object(create_rmbrick9_1138(192, 2560), 2);
    add_background_object(create_rmbrick6_1129(168, 2560), 2);
    add_background_object(create_rmbrick14_1128(168, 2592), 2);
    add_background_object(create_rmbrick13_1116(192, 2592), 2);
    add_background_object(create_rmbrick13_1116(256, 2592), 2);
    add_background_object(create_rmbrick13_1116(320, 2592), 2);
    add_background_object(create_rmbrick13_1116(384, 2592), 2);
    add_background_object(create_rmbrick10_1137(384, 2688), 2);
    add_background_object(create_rmbrick19_1161(192, 2688), 2);
    add_background_object(create_rmbrick5_1136(320, 2688), 2);
    add_background_object(create_rmbrick13_1116(448, 2592), 2);
    add_background_object(create_rmbrick13_1116(512, 2592), 2);
    add_background_object(create_rmbrick5_1136(512, 2720), 2);
    add_background_object(create_rmbrick1_1121(1792, 1824), 2);
    add_background_object(create_rmbrick1_1121(1856, 1664), 2);
    add_background_object(create_rmbrick4_1125(1832, 1760), 2);
    add_background_object(create_rmbrick4_1125(1832, 1696), 2);
    add_background_object(create_rmbrick4_1125(1832, 1664), 2);
    add_background_object(create_rmbrick1_1121(1920, 1824), 2);
    add_background_object(create_rmbrick1_1121(1728, 1952), 2);
    add_background_object(create_rmbrick1_1121(1856, 1952), 2);
    add_background_object(create_rmbrick1_1121(1728, 2080), 2);
    add_background_object(create_rmbrick1_1121(1856, 2080), 2);
    add_background_object(create_rmbrick1_1121(1728, 2208), 2);
    add_background_object(create_rmbrick1_1121(1856, 2208), 2);
    add_background_object(create_rmbrick1_1121(1984, 1664), 2);
    add_background_object(create_rmbrick4_1125(1832, 1792), 2);
    add_background_object(create_rmbrick5_1136(1792, 1792), 2);
    add_background_object(create_rmbrick2_1108(1856, 1792), 2);
    add_background_object(create_rmbrick2_1108(1920, 1792), 2);
    add_background_object(create_rmbrick2_1108(1984, 1792), 2);
    add_background_object(create_rmbrick1_1121(2048, 1792), 2);
    add_background_object(create_rmbrick1_1121(1984, 1952), 2);
    add_background_object(create_rmbrick2_1108(2048, 1920), 2);
    add_background_object(create_rmbrick13_1116(1752, 1616), 2);
    add_background_object(create_rmbrick13_1116(1816, 1616), 2);
    add_background_object(create_rmbrick4_1125(1832, 1632), 2);
    add_background_object(create_rmbrick4_1125(1832, 1600), 2);
    add_background_object(create_rmbrick2_1108(1856, 1600), 2);
    add_background_object(create_rmbrick2_1108(1856, 1632), 2);
    add_background_object(create_rmbrick2_1108(1920, 1600), 2);
    add_background_object(create_rmbrick2_1108(1920, 1632), 2);
    add_background_object(create_rmbrick2_1108(1984, 1600), 2);
    add_background_object(create_rmbrick2_1108(1984, 1632), 2);
    add_background_object(create_rmbrick2_1108(2048, 1600), 2);
    add_background_object(create_rmbrick2_1108(2048, 1632), 2);
    add_background_object(create_rmbrick5_1136(1792, 1696), 2);
    add_background_object(create_rmbrick9_1138(1728, 1696), 2);
    add_background_object(create_rmbrick13_1116(1728, 1728), 2);
    add_background_object(create_rmbrick13_1116(1792, 1728), 2);
    add_background_object(create_rmbrick4_1125(1832, 1728), 2);
    add_background_object(create_rmbrick6_1129(1704, 1696), 2);
    add_background_object(create_rmbrick14_1128(1704, 1728), 2);
    add_background_object(create_rmbrick7_1130(576, 2720), 2);
    add_background_object(create_rmbrick15_1154(576, 2656), 2);
    add_background_object(create_rmbrick3_1131(576, 2528), 2);
    add_background_object(create_rmbrick3_1131(576, 2496), 2);
    add_background_object(create_rmbrick3_1131(576, 2464), 2);
    add_background_object(create_rmbrick3_1131(576, 2432), 2);
    add_background_object(create_rmbrick3_1131(576, 2400), 2);
    add_background_object(create_rmbrick3_1131(576, 2368), 2);
    add_background_object(create_rmbrick3_1131(576, 2560), 2);
    add_background_object(create_rmbrick4_1125(552, 2592), 2);
    add_background_object(create_gimmickaxletunnelback_1229(624, 2624), 2);
    add_background_object(create_rmbrick3_1131(576, 2752), 2);
    add_background_object(create_rmbrick3_1131(576, 2784), 2);
    add_background_object(create_rmbrick5_1136(576, 2784), 2);
    add_background_object(create_rmbrick7_1130(640, 2784), 2);
    add_background_object(create_rmbrick6_1129(744, 2784), 2);
    add_background_object(create_rmbrick4_1125(808, 2784), 2);
    add_background_object(create_rmbrick4_1125(808, 2752), 2);
    add_background_object(create_rmbrick6_1129(808, 2720), 2);
    add_background_object(create_rmbrick5_1136(832, 2720), 2);
    add_background_object(create_rmbrick9_1138(576, 2560), 2);
    add_background_object(create_rmbrick7_1130(640, 2560), 2);
    add_background_object(create_rmbrick6_1129(744, 2560), 2);
    add_background_object(create_rmbrick9_1138(768, 2784), 2);
    add_background_object(create_rmbrick4_1125(808, 2560), 2);
    add_background_object(create_rmbrick5_1136(768, 2560), 2);
    add_background_object(create_rmbrick14_1128(808, 2656), 2);
    add_background_object(create_rmbrick2_1108(576, 2592), 2);
    add_background_object(create_rmbrick3_1131(640, 2592), 2);
    add_background_object(create_rmbrick2_1108(768, 2592), 2);
    add_background_object(create_rmbrick4_1125(744, 2592), 2);
    add_background_object(create_rmbrick13_1116(576, 2624), 2);
    add_background_object(create_rmbrick3_1131(576, 2624), 2);
    add_background_object(create_rmbrick13_1116(768, 2624), 2);
    add_background_object(create_rmbrick4_1125(808, 2624), 2);
    add_background_object(create_rmbrick14_1128(744, 2624), 2);
    add_background_object(create_rmbrick15_1154(640, 2624), 2);
    add_background_object(create_rmbrick2_1108(512, 2784), 2);
    add_background_object(create_rmbrick2_1108(512, 2752), 2);
    add_background_object(create_rmbrick2_1108(832, 2784), 2);
    add_background_object(create_rmbrick2_1108(832, 2752), 2);
    add_background_object(create_rmbrick13_1116(832, 2656), 2);
    add_background_object(create_rmbrick2_1108(832, 2592), 2);
    add_background_object(create_rmbrick2_1108(832, 2624), 2);
    add_background_object(create_rmbrick15_1154(640, 2816), 2);
    add_background_object(create_rmbrick14_1128(744, 2816), 2);
    add_background_object(create_rmbrick13_1116(576, 2816), 2);
    add_background_object(create_rmbrick13_1116(768, 2816), 2);
    add_background_object(create_rmbrick13_1116(512, 2816), 2);
    add_background_object(create_rmbrick13_1116(832, 2816), 2);
    add_background_object(create_rmbrick7_1130(608, 2912), 2);
    add_background_object(create_rmbrick6_1129(776, 2912), 2);
    add_background_object(create_rmbrick4_1125(776, 2944), 2);
    add_background_object(create_rmbrick3_1131(608, 2944), 2);
    add_background_object(create_rmbrick1_1121(512, 3008), 2);
    add_background_object(create_rmbrick19_1161(416, 2912), 2);
    add_background_object(create_rmbrick1_1121(384, 2976), 2);
    add_background_object(create_rmbrick1_1121(512, 3136), 2);
    add_background_object(create_rmbrick1_1121(640, 3072), 2);
    add_background_object(create_rmbrick1_1121(768, 3072), 2);
    add_background_object(create_rmbrick9_1138(832, 2912), 2);
    add_background_object(create_rmbrick5_1136(544, 2912), 2);
    add_background_object(create_rmbrick1_1121(384, 3104), 2);
    add_background_object(create_rmbrick2_1108(512, 2976), 2);
    add_background_object(create_rmbrick3_1131(608, 2976), 2);
    add_background_object(create_rmbrick4_1125(776, 2976), 2);
    add_background_object(create_edgeoverlay_496(656, 2768), 2);
    add_background_object(create_edgeoverlay_496(720, 2768), 2);
    add_background_object(create_edgeoverlay_496(600, 2720), 2);
    add_background_object(create_edgeoverlay_496(600, 2656), 2);
    add_background_object(create_edgeoverlay_496(776, 2656), 2);
    add_background_object(create_edgeoverlay_496(776, 2720), 2);
    add_background_object(create_edgeoverlay_496(656, 2600), 2);
    add_background_object(create_rmbrick2_1108(448, 2784), 2);
    add_background_object(create_rmbrick2_1108(448, 2752), 2);
    add_background_object(create_rmbrick13_1116(448, 2816), 2);
    add_background_object(create_rmbrick2_1108(384, 2784), 2);
    add_background_object(create_rmbrick2_1108(384, 2752), 2);
    add_background_object(create_rmbrick13_1116(384, 2816), 2);
    add_background_object(create_rmbrick1_1121(256, 3008), 2);
    add_background_object(create_rmbrick2_1108(320, 2976), 2);
    add_background_object(create_rmbrick2_1108(256, 2976), 2);
    add_background_object(create_rmbrick1_1121(128, 2752), 2);
    add_background_object(create_rmbrick1_1121(0, 2752), 2);
    add_background_object(create_rmbrick1_1121(128, 2880), 2);
    add_background_object(create_rmbrick1_1121(0, 2880), 2);
    add_background_object(create_rmbrick1_1121(128, 3008), 2);
    add_background_object(create_rmbrick1_1121(0, 3008), 2);
    add_background_object(create_rmbrick2_1108(192, 3136), 2);
    add_background_object(create_rmbrick2_1108(128, 3136), 2);
    add_background_object(create_rmbrick2_1108(64, 3136), 2);
    add_background_object(create_rmbrick2_1108(0, 3136), 2);
    add_background_object(create_rmbrick2_1108(192, 3168), 2);
    add_background_object(create_rmbrick2_1108(128, 3168), 2);
    add_background_object(create_rmbrick2_1108(64, 3168), 2);
    add_background_object(create_rmbrick2_1108(0, 3168), 2);
    add_background_object(create_rmbrick5_1136(800, 2912), 2);
    add_background_object(create_rmbrick2_1108(800, 2976), 2);
    add_background_object(create_rmbrick2_1108(800, 3040), 2);
    add_background_object(create_rmbrick2_1108(832, 2944), 2);
    add_background_object(create_brick22_1230(864, 3040), 2);
    add_background_object(create_rmbrick2_1108(832, 3008), 2);
    add_background_object(create_brick22_1230(864, 2976), 2);
    add_background_object(create_brick22_1230(800, 3008), 2);
    add_background_object(create_brick22_1230(640, 3040), 2);
    add_background_object(create_brick22_1230(576, 2976), 2);
    add_background_object(create_rmbrick2_1108(544, 2944), 2);
    add_background_object(create_brick22_1230(800, 2944), 2);
    add_background_object(create_rmbrick2_1108(320, 2784), 2);
    add_background_object(create_rmbrick13_1116(320, 2816), 2);
    add_background_object(create_rmbrick2_1108(256, 2784), 2);
    add_background_object(create_rmbrick2_1108(256, 2752), 2);
    add_background_object(create_rmbrick13_1116(256, 2816), 2);
    add_background_object(create_rmbrick9_1138(384, 2944), 2);
    add_background_object(create_rmbrick1_1121(256, 3136), 2);
    add_background_object(create_rmbrick3_1131(256, 2816), 2);
    add_background_object(create_rmbrick3_1131(256, 2944), 2);
    add_background_object(create_rmbrick9_1138(256, 2944), 2);
    add_background_object(create_rmbrick3_1131(256, 2912), 2);
    add_background_object(create_rmbrick3_1131(256, 2848), 2);
    add_background_object(create_rmbrick3_1131(256, 2880), 2);
    add_background_object(create_switchbase2_1231(280, 2928), 2);
    add_background_object(create_rmbrick9_1138(320, 2944), 2);
    add_background_object(create_rmbrick4_1125(872, 2816), 2);
    add_background_object(create_rmbrick4_1125(872, 2848), 2);
    add_background_object(create_rmbrick4_1125(872, 2880), 2);
    add_background_object(create_rmbrick9_1138(896, 2720), 2);
    add_background_object(create_rmbrick1_1121(896, 2752), 2);
    add_background_object(create_rmbrick1_1121(896, 2912), 2);
    add_background_object(create_rmbrick1_1121(896, 3040), 2);
    add_background_object(create_rmbrick2_1108(960, 2880), 2);
    add_background_object(create_rmbrick2_1108(896, 2880), 2);
    add_background_object(create_rmbrick2_1108(960, 3168), 2);
    add_background_object(create_rmbrick2_1108(896, 3168), 2);
    add_background_object(create_switchbase2_1231(328, 2674), 2);
    add_background_object(create_switchbase2_1231(600, 2544), 2);
    add_background_object(create_rmbrick15_1154(896, 2656), 2);
    add_background_object(create_rmbrick3_1131(896, 2624), 2);
    add_background_object(create_rmbrick13_1116(896, 2592), 2);
    add_background_object(create_rmbrick3_1131(896, 2592), 2);
    add_background_object(create_rmbrick13_1116(960, 2592), 2);
    add_background_object(create_switchbase2_1231(1020, 2704), 2);
    add_background_object(create_rmbrick4_1125(1192, 2720), 2);
    add_background_object(create_rmbrick9_1138(1024, 2720), 2);
    add_background_object(create_rmbrick4_1125(1192, 2688), 2);
    add_background_object(create_rmbrick4_1125(1192, 2656), 2);
    add_background_object(create_rmcolumn2_1109(296, 2008), 2);
    add_background_object(create_rmcolumn2_1109(296, 2040), 2);
    add_background_object(create_rmcolumn4_1117(328, 2824), 2);
    add_background_object(create_rmcolumn1_1113(328, 2896), 2);
    add_background_object(create_edgeoverlay_496(376, 2824), 2);
    add_background_object(create_rmbrick6_1129(720, 2592), 2);
    add_background_object(create_rmbrick7_1130(664, 2592), 2);
    add_background_object(create_rmbrick7_1130(744, 2592), 2);
    add_background_object(create_rmbrick6_1129(640, 2592), 2);
    add_background_object(create_rmbrick13_1116(320, 2720), 2);
    add_background_object(create_rmbrick3_1131(320, 2720), 2);
    add_background_object(create_rmbrick3_1131(320, 2752), 2);
    add_background_object(create_rmbrick4_1125(360, 2720), 2);
    add_background_object(create_rmbrick4_1125(360, 2752), 2);
    add_background_object(create_rmbrick5_1136(320, 2752), 2);
    add_background_object(create_rmbrick13_1116(576, 2336), 2);
    add_background_object(create_rmbrick3_1131(576, 2336), 2);
    add_background_object(create_rmbrick13_1116(640, 2336), 2);
    add_background_object(create_rmbrick13_1116(704, 2336), 2);
    add_background_object(create_rmbrick13_1116(768, 2336), 2);
    add_background_object(create_rmbrick13_1116(1024, 2592), 2);
    add_background_object(create_rmbrick13_1116(1088, 2592), 2);
    add_background_object(create_rmbrick2_1108(1088, 2560), 2);
    add_background_object(create_rmbrick13_1116(1152, 2592), 2);
    add_background_object(create_rmbrick2_1108(1152, 2560), 2);
    add_background_object(create_rmbrick5_1136(960, 2720), 2);
    add_background_object(create_rmbrick1_1121(1216, 2688), 2);
    add_background_object(create_rmbrick1_1121(1344, 2688), 2);
    add_background_object(create_rmbrick1_1121(1344, 2400), 2);
    add_background_object(create_rmbrick2_1108(1344, 2368), 2);
    add_background_object(create_rmbrick2_1108(1408, 2368), 2);
    add_background_object(create_rmbrick2_1108(1344, 2528), 2);
    add_background_object(create_rmbrick2_1108(1536, 2528), 2);
    add_background_object(create_rmbrick4_1125(808, 2528), 2);
    add_background_object(create_rmbrick4_1125(808, 2496), 2);
    add_background_object(create_rmbrick4_1125(808, 2464), 2);
    add_background_object(create_rmbrick4_1125(808, 2432), 2);
    add_background_object(create_rmbrick4_1125(808, 2400), 2);
    add_background_object(create_rmbrick4_1125(808, 2368), 2);
    add_background_object(create_rmbrick4_1125(808, 2336), 2);
    add_background_object(create_rmbrick1_1121(1472, 2368), 2);
    add_background_object(create_rmbrick1_1121(1472, 2688), 2);
    add_background_object(create_rmbrick1_1121(1600, 2368), 2);
    add_background_object(create_rmbrick1_1121(1728, 2368), 2);
    add_background_object(create_rmbrick1_1121(1856, 2368), 2);
    add_background_object(create_rmbrick2_1108(1728, 2336), 2);
    add_background_object(create_rmbrick2_1108(1792, 2336), 2);
    add_background_object(create_rmbrick2_1108(1856, 2336), 2);
    add_background_object(create_rmbrick2_1108(1920, 2336), 2);
    add_background_object(create_rmbrick13_1116(1216, 2592), 2);
    add_background_object(create_rmbrick13_1116(1280, 2592), 2);
    add_background_object(create_rmbrick2_1108(1472, 2496), 2);
    add_background_object(create_rmbrick2_1108(1536, 2496), 2);
    add_background_object(create_rmbrick2_1108(1216, 2656), 2);
    add_background_object(create_rmbrick2_1108(1280, 2656), 2);
    add_background_object(create_rmbrick1_1121(1216, 2464), 2);
    add_background_object(create_rmbrick1_1121(1216, 2336), 2);
    add_background_object(create_rmbrick5_1136(1344, 2656), 2);
    add_background_object(create_rmbrick4_1125(1576, 2656), 2);
    add_background_object(create_rmbrick4_1125(1576, 2624), 2);
    add_background_object(create_rmbrick4_1125(1576, 2592), 2);
    add_background_object(create_rmbrick9_1138(1536, 2656), 2);
    add_background_object(create_rmbrick13_1116(1536, 2560), 2);
    add_background_object(create_rmbrick13_1116(1344, 2560), 2);
    add_background_object(create_rmbrick4_1125(1576, 2560), 2);
    add_background_object(create_rmbrick3_1131(1344, 2560), 2);
    add_background_object(create_rmbrick15_1154(1344, 2592), 2);
    add_background_object(create_rmbrick1_1121(1600, 2496), 2);
    add_background_object(create_rmbrick1_1121(1600, 2656), 2);
    add_background_object(create_rmbrick2_1108(1600, 2624), 2);
    add_background_object(create_rmbrick2_1108(1664, 2624), 2);
    add_background_object(create_rmbrick13_1116(1408, 2528), 2);
    add_background_object(create_rmbrick13_1116(1472, 2528), 2);
    add_background_object(create_rmbrick4_1125(1512, 2528), 2);
    add_background_object(create_rmbrick3_1131(1408, 2528), 2);
    add_background_object(create_rmbrick14_1128(1512, 2560), 2);
    add_background_object(create_rmbrick15_1154(1408, 2560), 2);
    add_background_object(create_rmbrick9_1138(1408, 2656), 2);
    add_background_object(create_rmbrick5_1136(1472, 2656), 2);
    add_background_object(create_rmbrick4_1125(1536, 1200), 2);
    add_background_object(create_rmbrick3_1131(1560, 1200), 2);
    add_background_object(create_rmbrick5_1136(1536, 1200), 2);
    add_background_object(create_rmbrick7_1130(1560, 1168), 2);
    add_background_object(create_rmbrick5_1136(1496, 1168), 2);
    add_background_object(create_rmbrick2_1108(1472, 1200), 2);
    add_background_object(create_rmbrick19_1161(1280, 1168), 2);
    add_background_object(create_rmbrick9_1138(1432, 1168), 2);
    add_background_object(create_rmbrick9_1138(1408, 1168), 2);
    add_background_object(create_rmbrick2_1108(1408, 1200), 2);
    add_background_object(create_rmbrick13_1116(1416, 1104), 2);
    add_background_object(create_rmbrick13_1116(1480, 1104), 2);
    add_background_object(create_rmbrick13_1116(1288, 1104), 2);
    add_background_object(create_rmbrick13_1116(1352, 1104), 2);
    add_background_object(create_rmbrick13_1116(1160, 1104), 2);
    add_background_object(create_rmbrick13_1116(1224, 1104), 2);
    add_background_object(create_rmbrick6_1129(1256, 1200), 2);
    add_background_object(create_rmbrick4_1125(1256, 1232), 2);
    add_background_object(create_rmbrick4_1125(1256, 1296), 2);
    add_background_object(create_rmbrick4_1125(1256, 1264), 2);
    add_background_object(create_rmbrick4_1125(1256, 1328), 2);
    add_background_object(create_rmbrick9_1138(1216, 1344), 2);
    add_background_object(create_rmbrick13_1116(1096, 1104), 2);
    add_background_object(create_rmbrick13_1116(968, 1104), 2);
    add_background_object(create_rmbrick13_1116(1032, 1104), 2);
    add_background_object(create_rmbrick13_1116(840, 1104), 2);
    add_background_object(create_rmbrick13_1116(904, 1104), 2);
    add_background_object(create_rmbrick3_1131(832, 1120), 2);
    add_background_object(create_rmbrick3_1131(960, 1248), 2);
    add_background_object(create_rmbrick3_1131(960, 1280), 2);
    add_background_object(create_rmbrick3_1131(960, 1312), 2);
    add_background_object(create_rmbrick10_1137(1088, 1312), 2);
    add_background_object(create_rmbrick2_1108(1024, 1472), 2);
    add_background_object(create_rmbrick2_1108(960, 1472), 2);
    add_background_object(create_rmbrick5_1136(1024, 1312), 2);
    add_background_object(create_rmbrick9_1138(960, 1312), 2);
    add_background_object(create_rmbrick7_1130(960, 1216), 2);
    add_background_object(create_rmbrick5_1136(896, 1216), 2);
    add_background_object(create_rmbrick3_1131(832, 1216), 2);
    add_background_object(create_rmbrick3_1131(832, 1152), 2);
    add_background_object(create_rmbrick3_1131(832, 1184), 2);
    add_background_object(create_rmbrick3_1131(832, 1088), 2);
    add_background_object(create_rmbrick9_1138(832, 1216), 2);
    add_background_object(create_rmbrick6_1129(720, 3008), 2);
    add_background_object(create_rmbrick7_1130(664, 3008), 2);
    add_background_object(create_rmbrick3_1131(664, 3040), 2);
    add_background_object(create_rmbrick2_1108(736, 3040), 2);
    add_background_object(create_rmbrick4_1125(720, 3040), 2);
    add_background_object(create_rmbrick9_1138(608, 3008), 2);
    add_background_object(create_rmbrick1_1121(1088, 2432), 2);
    add_background_object(create_rmbrick1_1121(832, 2336), 2);
    add_background_object(create_rmbrick1_1121(832, 2464), 2);
    add_background_object(create_rmbrick1_1121(960, 2336), 2);
    add_background_object(create_rmbrick1_1121(960, 2464), 2);
    add_background_object(create_rmbrick2_1108(1088, 2400), 2);
    add_background_object(create_rmbrick2_1108(1152, 2400), 2);
    add_background_object(create_rmbrick2_1108(1088, 2240), 2);
    add_background_object(create_rmbrick2_1108(1152, 2240), 2);
    add_background_object(create_rmbrick2_1108(1088, 2208), 2);
    add_background_object(create_rmbrick2_1108(1152, 2208), 2);
    add_background_object(create_rmbrick1_1121(1024, 2752), 2);
    add_background_object(create_rmbrick1_1121(1024, 2880), 2);
    add_background_object(create_rmbrick1_1121(1024, 3040), 2);
    add_background_object(create_rmbrick2_1108(1024, 3008), 2);
    add_background_object(create_rmbrick2_1108(1088, 3008), 2);
    add_background_object(create_rmbrick2_1108(1024, 3168), 2);
    add_background_object(create_rmbrick2_1108(1088, 3168), 2);
    add_background_object(create_rmbrick1_1121(1152, 2816), 2);
    add_background_object(create_rmbrick1_1121(1152, 2944), 2);
    add_background_object(create_rmbrick1_1121(1152, 3072), 2);
    add_background_object(create_rmbrick2_1108(1152, 2752), 2);
    add_background_object(create_rmbrick2_1108(1152, 2784), 2);
    add_background_object(create_rmbrick1_1121(1280, 2816), 2);
    add_background_object(create_rmbrick1_1121(1280, 2944), 2);
    add_background_object(create_rmbrick1_1121(1280, 3072), 2);
    add_background_object(create_rmbrick1_1121(1408, 2816), 2);
    add_background_object(create_rmbrick1_1121(1408, 2944), 2);
    add_background_object(create_rmbrick1_1121(1408, 3072), 2);
    add_background_object(create_rmbrick1_1121(1536, 2816), 2);
    add_background_object(create_rmbrick1_1121(1536, 2944), 2);
    add_background_object(create_rmbrick1_1121(1536, 3072), 2);
    add_background_object(create_rmbrick2_1108(1600, 2784), 2);
    add_background_object(create_rmbrick1_1121(1664, 2816), 2);
    add_background_object(create_rmbrick1_1121(1664, 2944), 2);
    add_background_object(create_rmbrick1_1121(1664, 3072), 2);
    add_background_object(create_rmbrick1_1121(1728, 2496), 2);
    add_background_object(create_rmbrick1_1121(1728, 2624), 2);
    add_background_object(create_rmbrick2_1108(1664, 2784), 2);
    add_background_object(create_rmbrick2_1108(1728, 2784), 2);
    add_background_object(create_rmbrick2_1108(1728, 2752), 2);
    add_background_object(create_rmbrick1_1121(1856, 2496), 2);
    add_background_object(create_rmbrick1_1121(1856, 2624), 2);
    add_background_object(create_rmbrick1_1121(1792, 2752), 2);
    add_background_object(create_rmbrick1_1121(1792, 2912), 2);
    add_background_object(create_rmbrick1_1121(1792, 3072), 2);
    add_background_object(create_rmbrick2_1108(1792, 2880), 2);
    add_background_object(create_rmbrick2_1108(1856, 2880), 2);
    add_background_object(create_rmbrick2_1108(1792, 3040), 2);
    add_background_object(create_rmbrick2_1108(1856, 3040), 2);
    add_background_object(create_rmbrick5_1136(1088, 2720), 2);
    add_background_object(create_rmbrick9_1138(1152, 2720), 2);
    add_background_object(create_rmbrick5_1136(320, 1760), 2);
    add_background_object(create_rmbrick2_1108(320, 1824), 2);
    add_background_object(create_rmbrick2_1108(320, 1792), 2);
    add_background_object(create_rmbrick2_1108(320, 1856), 2);
    add_background_object(create_rmplant2_1190(344, 1768), 2);
    add_background_object(create_rmplant1_1139(464, 1784), 2);
    add_background_object(create_rmbrick13_1116(256, 1664), 2);
    add_background_object(create_rmbrick13_1116(192, 1664), 2);
    add_background_object(create_rmbrick3_1131(192, 1664), 2);
    add_background_object(create_rmbrick9_1138(256, 1760), 2);
    add_background_object(create_rmbrick2_1108(256, 1824), 2);
    add_background_object(create_rmbrick2_1108(256, 1792), 2);
    add_background_object(create_rmbrick2_1108(256, 1856), 2);
    add_background_object(create_rmbrick2_1108(256, 1888), 2);
    add_background_object(create_rmbrick3_1131(192, 1824), 2);
    add_background_object(create_rmbrick3_1131(192, 1856), 2);
    add_background_object(create_rmbrick3_1131(192, 1888), 2);
    add_background_object(create_rmbrick3_1131(192, 1792), 2);
    add_background_object(create_rmbrick3_1131(192, 1920), 2);
    add_background_object(create_rmbrick15_1154(192, 1952), 2);
    add_background_object(create_rmladder_1152(216, 1760), 2);
    add_background_object(create_rmladder_1152(216, 1792), 2);
    add_background_object(create_rmladder_1152(216, 1824), 2);
    add_background_object(create_rmladder_1152(216, 1856), 2);
    add_background_object(create_rmladder_1152(216, 1888), 2);
    add_background_object(create_rmladder_1152(216, 1920), 2);
    add_background_object(create_rmladder_1152(216, 1952), 2);
    add_background_object(create_rmladder_1152(216, 1984), 2);
    add_background_object(create_rmbrick2_1108(2328, 848), 2);
    add_background_object(create_rmbrick2_1108(2328, 880), 2);
    add_background_object(create_rmbrick2_1108(2328, 912), 2);
    add_background_object(create_rmbrick2_1108(2328, 944), 2);
    add_background_object(create_rmbrick2_1108(2136, 976), 2);
    add_background_object(create_rmbrick2_1108(2200, 976), 2);
    add_background_object(create_rmbrick2_1108(2200, 1008), 2);
    add_background_object(create_rmbrick7_1130(2136, 1104), 2);
    add_background_object(create_rmbrick15_1154(2136, 1136), 2);
    add_background_object(create_rmbrick9_1138(2136, 1200), 2);
    add_background_object(create_rmbrick14_1128(2112, 1040), 2);
    add_background_object(create_rmbrick13_1116(2136, 1040), 2);
    add_background_object(create_rmbrick13_1116(2200, 1040), 2);
    add_background_object(create_rmbrick4_1125(2240, 1040), 2);
    add_background_object(create_rmbrick4_1125(2240, 1072), 2);
    add_background_object(create_rmbrick4_1125(2240, 1104), 2);
    add_background_object(create_rmbrick4_1125(2240, 1200), 2);
    add_background_object(create_rmbrick5_1136(2200, 1200), 2);
    add_background_object(create_rmbrick2_1108(2264, 976), 2);
    add_background_object(create_rmbrick2_1108(2328, 976), 2);
    add_background_object(create_rmbrick2_1108(2264, 1200), 2);
    add_background_object(create_rmbrick2_1108(2328, 1200), 2);
    add_background_object(create_rmbrick2_1108(2328, 1168), 2);
    add_background_object(create_rmbrick2_1108(2328, 1136), 2);
    add_background_object(create_rmbrick13_1116(2264, 1136), 2);
    add_background_object(create_rmbrick14_1128(2240, 1136), 2);
    add_background_object(create_rmcolumn9_1163(616, 504), 2);
    add_background_object(create_rmcolumn9_1163(520, 504), 2);
    add_background_object(create_rmcolumn9_1163(1032, 408), 2);
    add_background_object(create_rmcolumn9_1163(1216, 440), 2);
    add_background_object(create_rmcolumn9_1163(1240, 664), 2);
    add_background_object(create_rmcolumn9_1163(1192, 760), 2);
    add_background_object(create_rmcolumn9_1163(2440, 504), 2);
    add_background_object(create_rmcolumn9_1163(2112, 904), 2);
    add_background_object(create_rmcolumn9_1163(1640, 1160), 2);
    add_background_object(create_rmcolumn9_1163(1728, 1000), 2);
    add_background_object(create_rmcolumn9_1163(936, 1160), 2);
    add_background_object(create_rmcolumn9_1163(856, 1160), 2);
    add_background_object(create_rmcolumn9_1163(2544, 232), 2);
    add_background_object(create_rmcolumn9_1163(2432, 232), 2);
    add_background_object(create_rmcolumn9_1163(2816, 504), 2);
    add_background_object(create_rmcolumn9_1163(2848, 280), 2);
    add_background_object(create_rmcolumn9_1163(440, 1944), 2);
    add_background_object(create_rmcolumn9_1163(296, 2008), 2);
    add_background_object(create_rmcolumn9_1163(1032, 1944), 2);
    add_background_object(create_rmcolumn9_1163(952, 1944), 2);
    add_background_object(create_rmcolumn9_1163(1056, 1720), 2);
    add_background_object(create_rmcolumn9_1163(1200, 1688), 2);
    add_background_object(create_rmcolumn9_1163(1440, 1688), 2);
    add_background_object(create_rmcolumn9_1163(1656, 1672), 2);
    add_background_object(create_rmcolumn9_1163(168, 2648), 2);
    add_background_object(create_rmcolumn9_1163(520, 2648), 2);
    add_background_object(create_rmbrick4_1125(552, 2624), 2);
    add_background_object(create_rmbrick14_1128(552, 2656), 2);
    add_background_object(create_rmcolumn9_1163(328, 2872), 2);
    add_background_object(create_rmcolumn9_1163(552, 2872), 2);
    add_background_object(create_rmcolumn9_1163(800, 2872), 2);
    add_background_object(create_rmcolumn9_1163(1064, 2648), 2);
    add_background_object(create_rmcolumn9_1163(976, 2648), 2);
    add_background_object(create_edgeoverlay_496(1788, 508), 2);
    add_background_object(create_edgeoverlay_496(1404, 508), 2);
    add_background_object(create_edgeoverlay_496(2180, 668), 2);
    add_background_object(create_brick23_1224(2776, 352), 2);
    add_background_object(create_brick23_1224(2712, 352), 2);
    add_background_object(create_brick23_1224(2648, 352), 2);
    add_background_object(create_brick23_1224(2584, 352), 2);
    add_background_object(create_brick23_1224(2520, 352), 2);
    add_background_object(create_rmplant1_1139(2784, 360), 2);
    add_background_object(create_rmplant1_1139(2640, 360), 2);
    add_background_object(create_rmplant1_1139(2656, 384), 2);
    add_background_object(create_brick23_1224(2456, 352), 2);
    add_background_object(create_brick23_1224(2392, 352), 2);
    add_background_object(create_brick23_1224(2328, 352), 2);
    add_background_object(create_brick23_1224(2264, 352), 2);
    add_background_object(create_rmbrick7_1130(2936, 416), 2);
    add_background_object(create_rmbrick13_1116(2872, 448), 2);
    add_background_object(create_rmbrick2_1108(2872, 416), 2);
    add_background_object(create_rmbrick6_1129(2912, 416), 2);
    add_background_object(create_rmbrick1_1121(936, -96), 2);
    add_background_object(create_rmbrick13_1116(936, 32), 2);
    add_background_object(create_rmbrick13_1116(1000, 32), 2);
    add_background_object(create_rmbrick3_1131(1064, -32), 2);
    add_background_object(create_rmbrick15_1154(1064, 32), 2);
    add_background_object(create_rmbrick3_1131(1064, 0), 2);
    add_background_object(create_rmbrick4_1125(912, 0), 2);
    add_background_object(create_rmbrick14_1128(912, 32), 2);
    add_background_object(create_rmbrick4_1125(912, -32), 2);
    add_object(create_breakableruins_1184(-104, 808), 2);
    add_object(create_levellayer101_1232(-464, 1648), 2);
    add_object(create_objectjumppad_1233(992, 40), 2);
    add_object(create_objectjumppad_1233(664, 384), 2);
    add_object(create_levellayer1loop01_1234(-560, 1736), 2);
    add_object(create_levellayer1loop02_1235(-496, 1736), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(9912, 87), 2);
    add_object(create_playerstartingpoint_358(125, 365), 2);
    add_object(create_objectjumppad_1233(800, 608), 2);
    add_object(create_link_352(88, -96), 2);
    add_object(create_objectcrystal_279(-275, 82), 2);
    add_object(create_objectcodec_354(-295, 108), 2);
    add_object(create_laddertop_357(-148, 823), 2);
    add_object(create_switchwallplate_1167(2176, 472), 2);
    add_object(create_laddertop_357(4372, 567), 2);
    add_object(create_gimmickfireballspawner_1179(-272, 976), 2);
    add_object(create_gimmickfireballturret1_1180(-296, 992), 2);
    add_object(create_gimmickfireballturret2_1181(-320, 1032), 2);
    add_object(create_gimmickfireballturretback_1166(-288, 1156), 2);
    add_object(create_gimmickrelicpanel_1178(-392, 1016), 2);
    add_object(create_levellayer116_1236(424, 320), 2);
    add_object(create_levellayer116_1236(424, 384), 2);
    add_object(create_levellayer001_1237(448, 416), 2);
    add_object(create_levellayer02_1238(448, 448), 2);
    add_object(create_levellayer1loop01_1234(424, 224), 2);
    add_object(create_layerchangeswitch_404(536, 224), 2);
    add_object(create_objectcrystal_279(621, 290), 2);
    add_object(create_objectcrystal_279(581, 250), 2);
    add_object(create_objectcrystal_279(509, 250), 2);
    add_object(create_objectcrystal_279(621, 346), 2);
    add_object(create_objectcrystal_279(469, 290), 2);
    add_object(create_layerchangeswitch2_1239(600, 504), 2);
    add_object(create_layerchangeswitch2_1239(600, 552), 2);
    add_object(create_layerchangeswitch2_1239(600, 456), 2);
    add_object(create_gimmickrelicpanel_1178(1528, 336), 2);
    add_object(create_gimmickfireballturretback_1166(1624, 308), 2);
    add_object(create_gimmickfireballturret1_1180(1600, 256), 2);
    add_object(create_gimmickfireballspawner_1179(1624, 136), 2);
    add_object(create_gimmickrelicflippanel_1240(1420, 524), 2);
    add_object(create_gimmickrelicflippanel_1240(1804, 524), 2);
    add_object(create_gimmickrelicpanel_1178(1912, 336), 2);
    add_object(create_levellayer1loop02_1235(1632, 720), 2);
    add_object(create_levellayer101_1232(1728, 720), 2);
    add_object(create_levellayer101_1232(1728, 784), 2);
    add_object(create_levellayer0loop04_1241(1664, 816), 2);
    add_object(create_levellayer101_1232(1728, 848), 2);
    add_object(create_gimmickrelicflippanel_1240(2196, 684), 2);
    add_object(create_gimmickrelicflippanel2_1242(2192, 688), 2);
    add_object(create_gimmickrelicflippanel3_1243(1800, 528), 2);
    add_object(create_gimmickrelicflippanel4_1244(1416, 528), 2);
    add_object(create_switchwallplate_1167(2160, 896), 2);
    add_object(create_layerchangeswitch2_1239(1624, 720), 2);
    add_object(create_layerchangeswitch2_1239(1816, 960), 2);
    add_object(create_layerchangeswitch2_1239(1816, 1024), 2);
    add_object(create_layerchangeswitch2_1239(1816, 1088), 2);
    add_object(create_layerchangeswitch2_1239(1816, 1152), 2);
    add_object(create_clockdial1_1245(1632, 816), 2);
    add_object(create_clockdial2_1246(1632, 816), 2);
    add_object(create_yellowspringup_434(1692, 1361), 2);
    add_object(create_yellowspringup_434(1872, 640), 2);
    add_object(create_laddertop_357(2092, 967), 2);
    add_object(create_objectpetal_302(1753, 1129), 2);
    add_object(create_objectpetal_302(1793, 1129), 2);
    add_object(create_objectpetal_302(1553, 809), 2);
    add_object(create_objectpetal_302(1577, 761), 2);
    add_object(create_objectpetal_302(1625, 737), 2);
    add_object(create_yellowspringright_435(984, 784), 2);
    add_object(create_objectcrystal_279(3125, 498), 2);
    add_object(create_objectcrystal_279(3077, 450), 2);
    add_object(create_objectcrystal_279(3173, 546), 2);
    add_object(create_objectcrystal_279(3029, 402), 2);
    add_object(create_objectcrystal_279(2981, 354), 2);
    add_object(create_objectcrystal_279(2933, 306), 2);
    add_object(create_gimmickhangingmovingsensor2_1247(1993, 829), 2);
    add_object(create_gimmickhangingmovingbar2_1248(1968, 824), 2);
    add_object(create_gimmickhangingidlesensor_740(1441, 1968), 2);
    add_object(create_monitorkeystone_562(1624, 1168), 2);
    add_object(create_objectcodec_354(2409, 420), 2);
    add_object(create_objectcrystal_279(2229, 594), 2);
    add_object(create_objectcrystal_279(2253, 570), 2);
    add_object(create_objectcrystal_279(2277, 546), 2);
    add_object(create_gimmickfireballspawner_1179(1752, 136), 2);
    add_object(create_enemyiris_1183(2016, 180), 2);
    add_object(create_minibossgolempiece2_1249(2336, 240), 2);
    add_object(create_minibossgolempiece2_1249(2336, 272), 2);
    add_object(create_minibossgolempiece2_1249(2336, 304), 2);
    add_object(create_minibossgolempiece2_1249(2336, 336), 2);
    add_object(create_minibossgolempiece1_1250(2304, 336), 2);
    add_object(create_minibossgolempiece1_1250(2304, 304), 2);
    add_object(create_minibossgolempiece1_1250(2304, 272), 2);
    add_object(create_minibossgolempiece1_1250(2304, 240), 2);
    add_object(create_cameratriggerboss_424(2440, 160), 2);
    add_object(create_minibossrailing_923(2272, 160), 2);
    add_object(create_minibossrailing_923(2272, 208), 2);
    add_object(create_minibossrailing_923(2240, 160), 2);
    add_object(create_minibossrailing_923(2240, 208), 2);
    add_object(create_minibossrailing_923(2208, 160), 2);
    add_object(create_minibossrailing_923(2208, 208), 2);
    add_object(create_minibossbarrier_924(2200, 160), 2);
    add_object(create_minibossbarrier_924(2200, 208), 2);
    add_object(create_minibossbarrier_924(2264, 160), 2);
    add_object(create_minibossbarrier_924(2264, 208), 2);
    add_object(create_minibossgolem2_1251(2351, 192), 2);
    add_object(create_minibossgolem_1252(2304, 208), 2);
    add_object(create_pushableblock1_531(2509, 137), 2);
    add_object(create_objectcrystal_279(1037, 730), 2);
    add_object(create_objectcrystal_279(1005, 730), 2);
    add_object(create_objectcrystal_279(1005, 762), 2);
    add_object(create_objectcrystal_279(1037, 762), 2);
    add_object(create_objectcrystal_279(1069, 730), 2);
    add_object(create_objectcrystal_279(1069, 762), 2);
    add_object(create_objectcrystal_279(1101, 730), 2);
    add_object(create_objectcrystal_279(1101, 762), 2);
    add_object(create_objectcrystal_279(1133, 730), 2);
    add_object(create_objectcrystal_279(1133, 762), 2);
    add_object(create_objectcrystal_279(861, 306), 2);
    add_object(create_objectcrystal_279(829, 274), 2);
    add_object(create_objectcrystal_279(797, 242), 2);
    add_object(create_objectcrystal_279(765, 210), 2);
    add_object(create_objectcrystal_279(941, 226), 2);
    add_object(create_objectcrystal_279(909, 194), 2);
    add_object(create_objectcrystal_279(877, 162), 2);
    add_object(create_objectcrystal_279(845, 130), 2);
    add_object(create_objectcrystal_279(733, 178), 2);
    add_object(create_objectcrystal_279(701, 146), 2);
    add_object(create_objectcrystal_279(669, 114), 2);
    add_object(create_objectcrystal_279(637, 82), 2);
    add_object(create_objectcrystal_279(813, 98), 2);
    add_object(create_objectcrystal_279(781, 66), 2);
    add_object(create_objectcrystal_279(749, 34), 2);
    add_object(create_enemyiris_1183(2192, 1060), 2);
    add_object(create_gimmickmovingfloor1_1253(600, 1984), 2);
    add_object(create_gimmickmovingfloor2_1254(600, 2048), 2);
    add_object(create_gimmickmovingfloor2_1254(600, 2112), 2);
    add_object(create_gimmickmovingfloor2_1254(600, 2176), 2);
    add_object(create_gimmickmovingfloor1_1253(648, 1952), 2);
    add_object(create_gimmickmovingfloor2_1254(648, 2016), 2);
    add_object(create_gimmickmovingfloor2_1254(648, 2080), 2);
    add_object(create_gimmickmovingfloor2_1254(648, 2144), 2);
    add_object(create_gimmickmovingfloor1_1253(696, 1920), 2);
    add_object(create_gimmickmovingfloor2_1254(696, 1984), 2);
    add_object(create_gimmickmovingfloor2_1254(696, 2048), 2);
    add_object(create_gimmickmovingfloor3_1255(600, 1824), 2);
    add_object(create_gimmickmovingfloor2_1254(600, 1632), 2);
    add_object(create_gimmickmovingfloor2_1254(600, 1696), 2);
    add_object(create_gimmickmovingfloor2_1254(600, 1760), 2);
    add_object(create_gimmickmovingfloor3_1255(648, 1792), 2);
    add_object(create_gimmickmovingfloor2_1254(648, 1664), 2);
    add_object(create_gimmickmovingfloor2_1254(648, 1728), 2);
    add_object(create_gimmickmovingfloor3_1255(696, 1760), 2);
    add_object(create_gimmickmovingfloor2_1254(696, 1632), 2);
    add_object(create_gimmickmovingfloor2_1254(696, 1696), 2);
    add_object(create_gimmickmovingfloor2_1254(600, 2240), 2);
    add_object(create_gimmickmovingfloor1_1253(792, 1856), 2);
    add_object(create_gimmickmovingfloor2_1254(792, 1920), 2);
    add_object(create_gimmickmovingfloor2_1254(792, 1984), 2);
    add_object(create_gimmickmovingfloor1_1253(840, 1824), 2);
    add_object(create_gimmickmovingfloor2_1254(840, 1888), 2);
    add_object(create_gimmickmovingfloor2_1254(840, 1952), 2);
    add_object(create_gimmickmovingfloor2_1254(840, 2016), 2);
    add_object(create_gimmickmovingfloor1_1253(888, 1792), 2);
    add_object(create_gimmickmovingfloor2_1254(888, 1856), 2);
    add_object(create_gimmickmovingfloor2_1254(888, 1920), 2);
    add_object(create_gimmickmovingfloor2_1254(888, 1984), 2);
    add_object(create_gimmickmovingfloor2_1254(888, 2048), 2);
    add_object(create_gimmickmovingfloor3_1255(792, 1696), 2);
    add_object(create_gimmickmovingfloor2_1254(792, 1568), 2);
    add_object(create_gimmickmovingfloor2_1254(792, 1632), 2);
    add_object(create_gimmickmovingfloor3_1255(840, 1664), 2);
    add_object(create_gimmickmovingfloor2_1254(840, 1536), 2);
    add_object(create_gimmickmovingfloor2_1254(840, 1600), 2);
    add_object(create_gimmickmovingfloor2_1254(840, 1472), 2);
    add_object(create_gimmickmovingfloor2_1254(648, 1600), 2);
    add_object(create_gimmickmovingfloor3_1255(888, 1632), 2);
    add_object(create_gimmickmovingfloor2_1254(888, 1440), 2);
    add_object(create_gimmickmovingfloor2_1254(888, 1504), 2);
    add_object(create_gimmickmovingfloor2_1254(888, 1568), 2);
    add_object(create_gimmickmovingfloor2_1254(696, 2112), 2);
    add_object(create_gimmickmovingfloor2_1254(792, 2048), 2);
    add_object(create_gimmickhangingswitch_1256(560, 1704), 2);
    add_object(create_gimmickhangingidleswitch_1257(561, 1704), 2);
    add_object(create_gimmickhangingmover_1258(384, 1424), 2);
    add_object(create_gimmickhangingidlemover_1259(385, 1424), 2);
    add_object(create_levellayer02_1238(384, 1664), 2);
    add_object(create_levellayer02_1238(320, 1664), 2);
    add_object(create_levellayer002_1260(320, 1536), 2);
    add_object(create_levellayer001_1237(320, 1504), 2);
    add_object(create_levellayer001_1237(384, 1504), 2);
    add_object(create_layerchangeto0_405(448, 1696), 2);
    add_object(create_layerchangeto0_405(376, 1400), 2);
    add_object(create_gimmickspinball_1175(1472, 2088), 2);
    add_object(create_levellayer02_1238(1472, 1888), 2);
    add_object(create_levellayer02_1238(1536, 1888), 2);
    add_object(create_levellayer001_1237(1536, 1792), 2);
    add_object(create_yellowspringup_434(1456, 2192), 2);
    add_object(create_gimmickhangingmover_1258(1520, 1688), 2);
    add_object(create_gimmickhangingidlemover_1259(1521, 1688), 2);
    add_object(create_layerchangeto0_405(1320, 1984), 2);
    add_object(create_layerchangeto0_405(1320, 1920), 2);
    add_object(create_gimmickhangingswitch_1256(976, 1704), 2);
    add_object(create_gimmickhangingidleswitch_1257(977, 1704), 2);
    add_object(create_layerchangeto0_405(1512, 1664), 2);
    add_object(create_gimmickrelicflippanel2_1242(1544, 1704), 2);
    add_object(create_levellayer015_1261(1536, 1856), 2);
    add_object(create_levellayer015_1261(1536, 1824), 2);
    add_object(create_levellayer001_1237(1472, 1792), 2);
    add_object(create_levellayer015_1261(1472, 1856), 2);
    add_object(create_levellayer015_1261(1472, 1824), 2);
    add_object(create_objectcrystal_279(285, 2266), 2);
    add_object(create_objectcrystal_279(341, 2266), 2);
    add_object(create_objectcrystal_279(421, 2370), 2);
    add_object(create_objectcrystal_279(421, 2442), 2);
    add_object(create_objectcrystal_279(309, 2538), 2);
    add_object(create_objectcrystal_279(261, 2538), 2);
    add_object(create_objectcrystal_279(213, 2538), 2);
    add_object(create_objectcrystal_279(301, 2658), 2);
    add_object(create_objectcrystal_279(349, 2650), 2);
    add_object(create_objectcrystal_279(397, 2658), 2);
    add_object(create_objectcrystal_279(85, 2258), 2);
    add_object(create_objectcrystal_279(117, 2298), 2);
    add_object(create_objectcrystal_279(157, 2322), 2);
    add_object(create_objectcrystal_279(85, 2642), 2);
    add_object(create_objectcrystal_279(117, 2682), 2);
    add_object(create_objectcrystal_279(157, 2706), 2);
    add_object(create_enemyiris_1183(1152, 1652), 2);
    add_object(create_enemyiris_1183(1264, 1652), 2);
    add_object(create_gimmickaxletunnel_1262(704, 2704), 2);
    add_object(create_monitorcrystals_324(1744, 1664), 2);
    add_object(create_objectcrystal_279(1389, 1722), 2);
    add_object(create_objectcrystal_279(1429, 1738), 2);
    add_object(create_objectcrystal_279(1253, 1674), 2);
    add_object(create_objectcrystal_279(1253, 1706), 2);
    add_object(create_objectcrystal_279(1197, 1674), 2);
    add_object(create_objectcrystal_279(1197, 1706), 2);
    add_object(create_monitor1up_410(1800, 1762), 2);
    add_object(create_gimmickrelicpanel_1178(704, 2960), 2);
    add_object(create_redspringup_440(688, 3056), 2);
    add_object(create_hazardspikesleft_1193(400, 2080), 2);
    add_object(create_enemyiris_1183(496, 2836), 2);
    add_object(create_enemyiris_1183(432, 2836), 2);
    add_object(create_switchpressureplate_752(600, 2544), 2);
    add_object(create_switchpressureplate_752(1020, 2704), 2);
    add_object(create_switchpressureplate_752(280, 2928), 2);
    add_object(create_switchpressureplate_752(328, 2674), 2);
    add_object(create_yellowspringleft_436(1176, 2688), 2);
    add_object(create_gimmickfireballspawner_1179(392, 2824), 2);
    add_object(create_enemyiris_1183(352, 2740), 2);
    add_object(create_objectpetal_302(1089, 2697), 2);
    add_object(create_objectpetal_302(1001, 2697), 2);
    add_object(create_monitorkeystone_562(1544, 2624), 2);
    add_object(create_monitorkeystone_562(1512, 2626), 2);
    add_object(create_monitorcrystals_324(1480, 2626), 2);
    add_object(create_yellowspringup_434(1224, 1328), 2);
    add_object(create_objectcodec_354(545, 172), 2);
    add_object(create_objectcrystal_279(997, 1234), 2);
    add_object(create_objectcrystal_279(997, 1298), 2);
    add_object(create_objectcrystal_279(997, 1266), 2);
    add_object(create_objectcrystal_279(1029, 1234), 2);
    add_object(create_objectcrystal_279(1029, 1298), 2);
    add_object(create_objectcrystal_279(1029, 1266), 2);
    add_object(create_objectcrystal_279(1061, 1234), 2);
    add_object(create_objectcrystal_279(1061, 1298), 2);
    add_object(create_objectcrystal_279(1061, 1266), 2);
    add_object(create_objectcrystal_279(853, 2842), 2);
    add_object(create_objectcrystal_279(853, 2866), 2);
    add_object(create_objectcrystal_279(853, 2890), 2);
    add_object(create_objectcrystal_279(765, 2994), 2);
    add_object(create_objectcrystal_279(741, 2994), 2);
    add_object(create_objectcrystal_279(669, 2994), 2);
    add_object(create_objectcrystal_279(645, 2994), 2);
    add_object(create_objectcrystal_279(1405, 1978), 2);
    add_object(create_objectcrystal_279(1477, 1978), 2);
    add_object(create_objectcrystal_279(1189, 1978), 2);
    add_object(create_objectcrystal_279(1221, 1978), 2);
    add_object(create_objectcrystal_279(1253, 1978), 2);
    add_object(create_objectcrystal_279(1285, 1978), 2);
    add_object(create_objectcrystal_279(1189, 1946), 2);
    add_object(create_objectcrystal_279(1221, 1946), 2);
    add_object(create_objectcrystal_279(1253, 1946), 2);
    add_object(create_objectcrystal_279(1285, 1946), 2);
    add_object(create_objectcrystal_279(1573, 458), 2);
    add_object(create_objectcrystal_279(1645, 458), 2);
    add_object(create_objectcrystal_279(1597, 434), 2);
    add_object(create_objectcrystal_279(1621, 434), 2);
    add_object(create_objectcrystal_279(1597, 458), 2);
    add_object(create_objectcrystal_279(1621, 458), 2);
    add_object(create_objectcrystal_279(2093, 450), 2);
    add_object(create_objectcrystal_279(2093, 418), 2);
    add_object(create_objectcrystal_279(2005, 410), 2);
    add_object(create_objectcrystal_279(689, 2474), 2);
    add_object(create_objectcrystal_279(721, 2474), 2);
    add_object(create_objectcrystal_279(689, 2442), 2);
    add_object(create_objectcrystal_279(721, 2442), 2);
    add_object(create_objectcrystal_279(689, 2410), 2);
    add_object(create_objectcrystal_279(721, 2410), 2);
    add_object(create_objectcrystal_279(657, 2474), 2);
    add_object(create_objectcrystal_279(657, 2442), 2);
    add_object(create_objectcrystal_279(657, 2410), 2);
    add_object(create_objectcrystal_279(753, 2474), 2);
    add_object(create_objectcrystal_279(753, 2442), 2);
    add_object(create_objectcrystal_279(753, 2410), 2);
    add_object(create_objectcrystal_279(689, 2506), 2);
    add_object(create_objectcrystal_279(721, 2506), 2);
    add_object(create_objectcrystal_279(657, 2506), 2);
    add_object(create_objectcrystal_279(753, 2506), 2);
    add_object(create_minibossrailing2_1165(624, 2400), 2);
    add_object(create_minibossrailing2_1165(624, 2448), 2);
    add_object(create_minibossrailing2_1165(784, 2400), 2);
    add_object(create_minibossrailing2_1165(784, 2448), 2);
    add_object(create_minibossbarrier_924(616, 2400), 2);
    add_object(create_minibossbarrier_924(616, 2448), 2);
    add_object(create_minibossbarrier_924(776, 2400), 2);
    add_object(create_minibossbarrier_924(776, 2448), 2);
    add_object(create_layerchangeto0_405(256, 1696), 2);
    add_object(create_minibossrailing2_1165(288, 1712), 2);
    add_object(create_minibossrailing2_1165(288, 1664), 2);
    add_object(create_minibossbarrier_924(280, 1664), 2);
    add_object(create_minibossbarrier_924(280, 1712), 2);
    add_object(create_laddertop_357(236, 1783), 2);
    add_object(create_minibossrailing2_1165(1720, 1744), 2);
    add_object(create_minibossbarrier_924(1712, 1744), 2);
    add_object(create_layerchangeswitch_404(520, 368), 2);
    add_object(create_shieldflameback_315(-96, 344), 2);
    add_object(create_shieldwood_313(-140, 332), 2);
    add_object(create_objectjumppad_1233(3264, 32), 2);
    add_object(create_shieldearth_314(-132, 340), 2);
    add_object(create_objectjumppad_1233(3264, 224), 2);
    add_object(create_shieldmagnetic_317(-76, 340), 2);
    add_object(create_shieldflamefront_316(-116, 348), 2);
    add_object(create_shieldwater_318(-84, 332), 2);
    add_object(create_objectcrystal_279(3245, 490), 2);
    add_object(create_objectjumppad_1233(3264, 432), 2);
    add_object(create_objectcrystal_279(3245, 538), 2);
    add_object(create_objectcrystal_279(3245, 586), 2);
    add_object(create_objectcrystal_279(3205, 42), 2);
    add_object(create_objectcrystal_279(3157, 50), 2);
    add_object(create_objectcrystal_279(3109, 66), 2);
    add_object(create_yellowspringleft_436(2312, 1168), 2);
    add_object(create_yellowspringleft_436(2312, 1136), 2);
    add_object(create_objectcrystal_279(2285, 1154), 2);
    add_object(create_objectcrystal_279(2285, 1186), 2);
    add_object(create_objectcrystal_279(2261, 1154), 2);
    add_object(create_objectcrystal_279(2261, 1186), 2);
    add_object(create_monitorwoodshield_325(1464, 625), 2);
    add_object(create_monitorcrystals_324(2784, 98), 2);
    add_object(create_objectpot_1185(2176, 244), 2);
    add_object(create_objectpot_1185(2048, 1188), 2);
    add_object(create_objectpot_1185(2096, 1092), 2);
    add_object(create_objectpot_1185(1296, 1188), 2);
    add_object(create_objectpot_1185(2120, 500), 2);
    add_object(create_objectpot_1185(2056, 500), 2);
    add_object(create_objectpot_1185(1176, 1780), 2);
    add_object(create_objectpot_1185(1192, 2036), 2);
    add_object(create_objectpot_1185(1304, 2036), 2);
    add_object(create_objectpot_1185(416, 1748), 2);
    add_object(create_objectpot_1185(344, 1750), 2);
    add_object(create_objectpot_1185(792, 2548), 2);
    add_object(create_cameratriggerboss_424(2584, -48), 2);
    add_object(create_objecttaostone_532(921, 1162), 2);
    add_object(create_objectcodec_354(706, 2373), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_object(create_mapdata2_32(-432, 240), 2);
    add_background_object(create_rmbrick3_1131(1728, 784), 3);
    add_background_object(create_rmbrick3_1131(1728, 848), 3);
    add_background_object(create_rmbrick3_1131(1728, 880), 3);
    add_background_object(create_rmbrick3_1131(1728, 816), 3);
    add_background_object(create_rmentrywayleft3_1263(7272, 272), 3);
    add_background_object(create_rmentrywayleft3_1263(7272, 80), 3);
    add_background_object(create_rmentrywayleft3_1263(7272, 432), 3);
    add_background_object(create_rmbrick1_1121(-64, 256), 3);
    add_background_object(create_rmentrywayleft3_1263(64, 256), 3);
    add_background_object(create_rmbrick1_1121(-64, 1344), 3);
    add_background_object(create_rmentrywayleft3_1263(64, 1344), 3);
    add_background_object(create_rmbrick9_1138(384, 416), 3);
    add_background_object(create_rmbrick9_1138(448, 416), 3);
    add_background_object(create_loop2_1215(1728, 768), 3);
    add_background_object(create_loop8_1218(1728, 816), 3);
    add_background_object(create_loop8_1218(1728, 880), 3);
    add_background_object(create_loop1_1203(1664, 816), 3);
    add_background_object(create_rmbrick13_1116(1728, 944), 3);
    add_background_object(create_rmbrick13_1116(1664, 944), 3);
    add_background_object(create_rmplant1_1139(1968, 528), 3);
    add_background_object(create_rmplant1_1139(1968, 560), 3);
    add_background_object(create_rmplant2_1190(1992, 344), 3);
    add_background_object(create_rmplant1_1139(1992, 536), 3);
    add_background_object(create_rmplant1_1139(1984, 520), 3);
    add_background_object(create_rmplant1_1139(1568, 496), 3);
    add_background_object(create_rmplant1_1139(1568, 536), 3);
    add_background_object(create_rmplant1_1139(1624, 496), 3);
    add_background_object(create_rmplant1_1139(1624, 536), 3);
    add_background_object(create_rmplant1_1139(1624, 576), 3);
    add_background_object(create_rmplant1_1139(1136, 672), 3);
    add_background_object(create_rmplant1_1139(1136, 712), 3);
    add_background_object(create_rmplant1_1139(1096, 680), 3);
    add_background_object(create_rmplant1_1139(1096, 720), 3);
    add_background_object(create_rmplant1_1139(1096, 640), 3);
    add_background_object(create_rmplant1_1139(968, 680), 3);
    add_background_object(create_rmplant1_1139(2136, 360), 3);
    add_background_object(create_rmplant1_1139(2032, 312), 3);
    add_background_object(create_rmplant2_1190(1760, 912), 3);
    add_background_object(create_rmplant1_1139(1808, 888), 3);
    add_background_object(create_rmplant1_1139(1728, 936), 3);
    add_background_object(create_rmplant2_1190(984, 664), 3);
    add_background_object(create_rmplant1_1139(1024, 632), 3);
    add_background_object(create_rmbrick13_1116(64, 1344), 3);
    add_background_object(create_rmbrick13_1116(64, 256), 3);
    add_background_object(create_rmentrypurple2_1264(96, 272), 3);
    add_background_object(create_rmentryyellow2_1265(96, 1360), 3);
    add_background_object(create_rmbrick5_1136(576, 2048), 3);
    add_background_object(create_rmbrick5_1136(704, 2048), 3);
    add_background_object(create_rmbrick9_1138(768, 2048), 3);
    add_background_object(create_rmbrick9_1138(896, 2048), 3);
    add_background_object(create_rmbrick1_1121(576, 2080), 3);
    add_background_object(create_rmbrick1_1121(704, 2080), 3);
    add_background_object(create_rmbrick1_1121(832, 2080), 3);
    add_background_object(create_rmbrick1_1121(576, 2208), 3);
    add_background_object(create_rmbrick1_1121(704, 2208), 3);
    add_background_object(create_rmbrick1_1121(832, 2208), 3);
    add_background_object(create_rmbrick9_1138(640, 2048), 3);
    add_background_object(create_rmbrick5_1136(832, 2048), 3);
    add_background_object(create_rmbrick13_1116(576, 1632), 3);
    add_background_object(create_rmbrick13_1116(640, 1632), 3);
    add_background_object(create_rmbrick13_1116(704, 1632), 3);
    add_background_object(create_rmbrick13_1116(768, 1632), 3);
    add_background_object(create_rmbrick13_1116(832, 1632), 3);
    add_background_object(create_rmbrick13_1116(896, 1632), 3);
    add_background_object(create_rmbrick3_1131(576, 1632), 3);
    add_background_object(create_rmbrick1_1121(576, 1376), 3);
    add_background_object(create_rmbrick1_1121(704, 1376), 3);
    add_background_object(create_rmbrick1_1121(576, 1504), 3);
    add_background_object(create_rmbrick1_1121(704, 1504), 3);
    add_background_object(create_rmbrick1_1121(832, 1376), 3);
    add_background_object(create_rmbrick1_1121(832, 1504), 3);
    add_background_object(create_rmbrick15_1154(576, 1664), 3);
    add_background_object(create_rmbrick2_1108(512, 1632), 3);
    add_background_object(create_rmbrick13_1116(512, 1664), 3);
    add_background_object(create_rmbrick1_1121(320, 1536), 3);
    add_background_object(create_rmbrick13_1116(320, 1664), 3);
    add_background_object(create_rmbrick13_1116(384, 1664), 3);
    add_background_object(create_rmbrick9_1138(384, 1504), 3);
    add_background_object(create_rmbrick1_1121(320, 1216), 3);
    add_background_object(create_rmbrick13_1116(320, 1344), 3);
    add_background_object(create_rmbrick13_1116(384, 1344), 3);
    add_background_object(create_rmbrick9_1138(320, 1504), 3);
    add_background_object(create_rmbrick1_1121(1496, 1488), 3);
    add_background_object(create_rmbrick13_1116(1560, 1616), 3);
    add_background_object(create_rmbrick13_1116(1496, 1616), 3);
    add_background_object(create_rmbrick13_1116(960, 1664), 3);
    add_background_object(create_rmbrick4_1125(936, 1632), 3);
    add_background_object(create_rmbrick14_1128(936, 1664), 3);
    add_background_object(create_rmbrick2_1108(960, 1632), 3);
    add_background_object(create_rmbrick13_1116(1472, 1888), 3);
    add_background_object(create_rmbrick13_1116(1536, 1888), 3);
    add_background_object(create_rmbrick2_1108(1472, 1856), 3);
    add_background_object(create_rmbrick2_1108(1472, 1824), 3);
    add_background_object(create_rmbrick2_1108(1536, 1856), 3);
    add_background_object(create_rmbrick2_1108(1536, 1824), 3);
    add_background_object(create_rmbrick9_1138(1536, 1792), 3);
    add_background_object(create_rmbrick9_1138(1472, 1792), 3);
    add_background_object(create_rmplant2_1190(256, 1880), 3);
    add_background_object(create_rmplant1_1139(280, 1848), 3);
    add_background_object(create_rmplant1_1139(184, 1896), 3);
    add_background_object(create_rmplant1_1139(168, 1928), 3);
    add_background_object(create_rmplant1_1139(88, 1920), 3);
    add_background_object(create_rmplant2_1190(56, 1880), 3);
    add_background_object(create_gimmickaxletunnelscrew_1266(688, 2688), 3);
    add_background_object(create_rmbrick4_1125(1192, 2624), 3);
    add_background_object(create_rmbrick4_1125(1192, 2592), 3);
    add_background_object(create_rmbrick4_1125(1192, 2656), 3);
    add_background_object(create_rmbrick4_1125(1192, 2688), 3);
    add_background_object(create_rmbrick3_1131(1216, 2592), 3);
    add_background_object(create_rmbrick3_1131(1216, 2624), 3);
    add_background_object(create_rmbrick4_1125(1256, 2624), 3);
    add_background_object(create_rmbrick4_1125(1256, 2592), 3);
    add_background_object(create_rmbrick3_1131(1344, 2592), 3);
    add_background_object(create_rmbrick3_1131(1344, 2624), 3);
    add_background_object(create_rmbrick3_1131(1344, 2656), 3);
    add_background_object(create_rmbrick2_1108(1216, 2656), 3);
    add_background_object(create_rmbrick2_1108(1280, 2656), 3);
    add_background_object(create_rmbrick4_1125(1536, 1168), 3);
    add_background_object(create_rmbrick4_1125(1536, 1136), 3);
    add_background_object(create_rmbrick4_1125(1536, 1104), 3);
    add_background_object(create_rmbrick4_1125(1536, 1200), 3);
    add_background_object(create_rmbrick3_1131(1560, 1104), 3);
    add_background_object(create_rmbrick3_1131(1560, 1136), 3);
    add_background_object(create_rmbrick3_1131(1560, 1168), 3);
    add_background_object(create_rmbrick3_1131(1560, 1200), 3);
    add_background_object(create_rmbrick3_1131(1512, 1104), 3);
    add_background_object(create_rmbrick3_1131(1512, 1136), 3);
    add_background_object(create_rmbrick3_1131(1512, 1168), 3);
    add_background_object(create_rmbrick1_1121(1384, 1104), 3);
    add_background_object(create_rmbrick4_1125(1360, 1168), 3);
    add_background_object(create_rmbrick4_1125(1360, 1136), 3);
    add_background_object(create_rmbrick4_1125(1360, 1104), 3);
    add_background_object(create_rmplant2_1190(1256, 1088), 3);
    add_background_object(create_rmplant2_1190(1144, 1040), 3);
    add_background_object(create_rmplant2_1190(1032, 1064), 3);
    add_background_object(create_rmplant2_1190(848, 1040), 3);
    add_background_object(create_rmplant1_1139(960, 1080), 3);
    add_background_object(create_rmplant1_1139(1008, 1056), 3);
    add_background_object(create_rmplant1_1139(1312, 1048), 3);
    add_background_object(create_rmplant1_1139(952, 1224), 3);
    add_background_object(create_rmbrick2_1108(1536, 1072), 3);
    add_background_object(create_rmbrick1_1121(1216, 2464), 3);
    add_background_object(create_rmbrick2_1108(1152, 2560), 3);
    add_background_object(create_rmbrick3_1131(1344, 2560), 3);
    add_background_object(create_rmbrick8_1135(1280, 2592), 3);
    add_background_object(create_rmbrick8_1135(1280, 2624), 3);
    add_background_object(create_rmbrick4_1125(2240, 1136), 3);
    add_background_object(create_rmbrick4_1125(2240, 1168), 3);
    add_background_object(create_rmbrick3_1131(2264, 1168), 3);
    add_background_object(create_rmbrick3_1131(2264, 1136), 3);
    add_background_object(create_rmbrick4_1125(2304, 1136), 3);
    add_background_object(create_rmbrick4_1125(2304, 1168), 3);
    add_background_object(create_rmbrick4_1125(2240, 1200), 3);
    add_background_object(create_rmbrick2_1108(2264, 1200), 3);
    add_background_object(create_rmbrick2_1108(2328, 1200), 3);
    add_background_object(create_rmbrick2_1108(2328, 1168), 3);
    add_background_object(create_rmbrick2_1108(2328, 1136), 3);
    add_background_object(create_rmbrick1_1121(2264, 1008), 3);
    add_background_object(create_rmbrick4_1125(2240, 1040), 3);
    add_background_object(create_rmbrick4_1125(2240, 1072), 3);
    add_background_object(create_rmbrick4_1125(2240, 1104), 3);
    add_background_object(create_rmbrick2_1108(0, 384), 3);
    add_background_object(create_rmbrick5_1136(64, 384), 3);
    add_background_object(create_rmbrick2_1108(0, 1472), 3);
    add_background_object(create_rmbrick9_1138(64, 1472), 3);
    add_object(create_levellayer02_1238(448, 448), 3);
    add_background_object(create_rmplant1_1139(472, 416), 4);
    add_background_object(create_separatormasterobjects_372(-176, -32), 5);
    add_background_object(create_separatorplayerobjects_373(-176, 112), 5);
    add_background_object(create_separatorlayerchange_374(-320, -32), 5);
    add_background_object(create_separatorsprings_375(-344, 152), 5);
    add_background_object(create_separatoreffects_376(-544, -32), 5);
    add_background_object(create_separatorwater_377(-593, 352), 5);
    add_background_object(create_separatormonitors_378(-248, -32), 5);
    add_background_object(create_separatorrings_379(-312, 56), 5);
    add_background_object(create_separatorspikes_556(-216, 376), 5);
    add_background_object(create_edgeoverlay_496(2176, 672), 5);
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
    add_object(create_gimmickhangingidlesensor_740(713, -400), 5);
    add_object(create_gimmickhangingmovingsensor_1267(849, -464), 5);
    add_object(create_gimmickhangingmovingbar_1268(880, -480), 5);
    add_object(create_generalwater_414(-584, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(2432, 367), 5);
    add_object(create_cameralimitbossleft_421(2256, 248), 5);
    add_object(create_cameralimitbossright_422(2927, 248), 5);
    add_object(create_cameralimitbosstop_423(2432, 72), 5);
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
    add_object(create_basementlight_1269(704, 2313), 5);
    add_object(create_objectbike_322(-216, 320), 5);
    add_object(create_playerreflect_447(-72, 232), 5);
    add_object(create_playerdig_448(-56, 242), 5);
    add_object(create_playerskintorquearm_449(-88, 224), 5);
    add_object(create_playerskintorque_450(-68, 273), 5);
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
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
    add_object(create_guicompass_1270(32, 120), 6);
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
    loop_cutscene_end_running = false;
    loop_cutscene_end_index = 0;
    loop_player01slopesdown_running = false;
    loop_player01slopesdown_index = 0;
    loop_player01detectsensoredges_running = false;
    loop_player01detectsensoredges_index = 0;
    loop_sound_stoppush_running = false;
    loop_sound_stoppush_index = 0;
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
    loop_floorswitch_running = false;
    loop_floorswitch_index = 0;
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
    loop_relicpanel_running = false;
    loop_relicpanel_index = 0;
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
    loop_fireball_launcher_running = false;
    loop_fireball_launcher_index = 0;
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
    loop_pot_running = false;
    loop_pot_index = 0;
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
    loop_sound_cyclone0_running = false;
    loop_sound_cyclone0_index = 0;
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
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_25, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_25, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_25, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_25, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_25, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_25, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_25, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_25, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_25, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_25, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_25, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_25, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_25, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_25, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_25, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_25, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_25, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_25, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_25, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_25, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_25, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_25, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_25, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_25, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_25, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_25, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_25, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_25, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_25, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_25, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_25, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_25, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_25, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_25, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_25, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_25, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_25, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_25, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_25, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_25, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_25, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_25, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_25, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_25, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_25, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_1583_25 = loop_count;
    not_always_1388_13 = loop_count;
    not_always_44_13 = loop_count;
    not_always_1408_25 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    not_always_97_0 = loop_count;
    not_always_1432_20 = loop_count;
    once_condition_56_13 = false;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    once_condition_1589_25 = false;
    not_always_501_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_172_8 = loop_count;
    not_always_13_25 = loop_count;
    not_always_449_13 = loop_count;
    once_condition_36_13 = false;
    not_always_1449_13 = loop_count;
    not_always_1457_13 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    not_always_1425_13 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    not_always_1434_20 = loop_count;
    once_condition_138_0 = false;
    not_always_68_13 = loop_count;
    not_always_1037_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_spawn_1 = true;
    not_always_100_0 = loop_count;
    not_always_43_13 = loop_count;
    not_always_554_13 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_121_0 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1433_20 = loop_count;
    not_always_1033_13 = loop_count;
    not_always_1406_21 = loop_count;
    not_always_1422_13 = loop_count;
    not_always_1414_22 = loop_count;
    not_always_600_13 = loop_count;
    once_condition_54_13 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    once_condition_1661_25 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_96_0 = loop_count;
    not_always_130_0 = loop_count;
    not_always_1550_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    not_always_1479_25 = loop_count;
    not_always_1407_25 = loop_count;
    not_always_308_13 = loop_count;
    group_sound_events_milla_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_1655_25 = loop_count;
    not_always_46_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    not_always_1562_25 = loop_count;
    not_always_1832_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = true;
    not_always_53_13 = loop_count;
    not_always_1412_22 = loop_count;
    not_always_1561_25 = loop_count;
    once_condition_63_0 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    not_always_1436_20 = loop_count;
    not_always_1447_13 = loop_count;
    not_always_815_13 = loop_count;
    not_always_1636_25 = loop_count;
    not_always_929_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_52_13 = loop_count;
    not_always_1036_13 = loop_count;
    not_always_1035_13 = loop_count;
    once_condition_1660_25 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_actions_1 = true;
    not_always_65_0 = loop_count;
    not_always_422_13 = loop_count;
    not_always_1455_13 = loop_count;
    not_always_1295_13 = loop_count;
    not_always_522_13 = loop_count;
    once_condition_64_13 = false;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    once_condition_38_13 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    not_always_1034_13 = loop_count;
    not_always_1458_13 = loop_count;
    not_always_12_25 = loop_count;
    once_condition_1828_16 = false;
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
    once_condition_37_13 = false;
    not_always_1831_16 = loop_count;
    not_always_1548_25 = loop_count;
    group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_activate_1 = false;
    not_always_99_0 = loop_count;
    group_mac_controls_1 = false;
    not_always_101_0 = loop_count;
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
    not_always_1570_25 = loop_count;
    group_pause_1 = false;
    not_always_41_13 = loop_count;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    group_main_engine_level_specific_methods_bosses_miniboss_golem_miniboss_golem_explode_1 = false;
    not_always_1421_13 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_1529_25 = loop_count;
    not_always_70_13 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    not_always_235_13 = loop_count;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    once_condition_63_13 = false;
    not_always_1456_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_174_8 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    group_main_engine_level_specific_methods_frame_transition_1 = false;
    once_condition_66_13 = false;
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1 = true;
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
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    not_always_98_0 = loop_count;
    once_condition_50_13 = false;
    group_main_engine_level_specific_methods_bosses_miniboss_golem_1 = true;
    not_always_1435_20 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    once_condition_55_13 = false;
    once_condition_35_13 = false;
    not_always_1415_22 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_5574()
{
    // event 1485_26
    {
        if (!(group_main_engine_1)) goto event_1485_26_end;
        levelhandcar_1415_instances.clear_selection();
        for (ObjectIterator it(levelhandcar_1415_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!levelhandcar_1415_instances.has_selection()) goto event_1485_26_end;
        levelhandcarfloor1_1417_instances.clear_selection();
        for (ObjectIterator it(levelhandcarfloor1_1417_instances); !it.end(); ++it) {
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!levelhandcarfloor1_1417_instances.has_selection()) goto event_1485_26_end;
        if (!check_not_overlap(levelhandcarfloor1_1417_instances, qualifier_7)) goto event_1485_26_end;
        for (ObjectIterator it(levelhandcarfloor1_1417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+1);
        }
    }
    event_1485_26_end: ;
}
void Frames::event_func_5575()
{
    // event 1486_26
    {
        if (!(group_main_engine_1)) goto event_1486_26_end;
        levelhandcar_1415_instances.clear_selection();
        for (ObjectIterator it(levelhandcar_1415_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!levelhandcar_1415_instances.has_selection()) goto event_1486_26_end;
        levelhandcarfloor2_1418_instances.clear_selection();
        for (ObjectIterator it(levelhandcarfloor2_1418_instances); !it.end(); ++it) {
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!levelhandcarfloor2_1418_instances.has_selection()) goto event_1486_26_end;
        if (!check_not_overlap(levelhandcarfloor2_1418_instances, qualifier_7)) goto event_1486_26_end;
        for (ObjectIterator it(levelhandcarfloor2_1418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+1);
        }
    }
    event_1486_26_end: ;
}
void Frames::event_func_5576()
{
    // event 1487_26
    {
        if (!(group_main_engine_1)) goto event_1487_26_end;
        levelhandcar_1415_instances.clear_selection();
        for (ObjectIterator it(levelhandcar_1415_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!levelhandcar_1415_instances.has_selection()) goto event_1487_26_end;
        levelhandcarfloor1_1417_instances.clear_selection();
        for (ObjectIterator it(levelhandcarfloor1_1417_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!levelhandcarfloor1_1417_instances.has_selection()) goto event_1487_26_end;
        for (ObjectIterator it(levelhandcarfloor1_1417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
    }
    event_1487_26_end: ;
}
void Frames::event_func_5577()
{
    // event 1488_26
    {
        if (!(group_main_engine_1)) goto event_1488_26_end;
        levelhandcar_1415_instances.clear_selection();
        for (ObjectIterator it(levelhandcar_1415_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!levelhandcar_1415_instances.has_selection()) goto event_1488_26_end;
        levelhandcarfloor1_1417_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(levelhandcarfloor1_1417_instances, qualifier_7)) goto event_1488_26_end;
        for (ObjectIterator it(levelhandcarfloor1_1417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
    }
    event_1488_26_end: ;
}
void Frames::event_func_5578()
{
    // event 1489_26
    {
        if (!(group_main_engine_1)) goto event_1489_26_end;
        levelhandcar_1415_instances.clear_selection();
        for (ObjectIterator it(levelhandcar_1415_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!levelhandcar_1415_instances.has_selection()) goto event_1489_26_end;
        levelhandcarfloor2_1418_instances.clear_selection();
        for (ObjectIterator it(levelhandcarfloor2_1418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!levelhandcarfloor2_1418_instances.has_selection()) goto event_1489_26_end;
        for (ObjectIterator it(levelhandcarfloor2_1418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
    }
    event_1489_26_end: ;
}
void Frames::event_func_5579()
{
    // event 1490_26
    {
        if (!(group_main_engine_1)) goto event_1490_26_end;
        levelhandcar_1415_instances.clear_selection();
        for (ObjectIterator it(levelhandcar_1415_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!levelhandcar_1415_instances.has_selection()) goto event_1490_26_end;
        levelhandcarfloor2_1418_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(levelhandcarfloor2_1418_instances, qualifier_7)) goto event_1490_26_end;
        for (ObjectIterator it(levelhandcarfloor2_1418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
    }
    event_1490_26_end: ;
}
void Frames::event_func_5580()
{
    // event 1491_26
    {
        if (!(group_main_engine_1)) goto event_1491_26_end;
        levelhandcar_1415_instances.clear_selection();
        for (ObjectIterator it(levelhandcar_1415_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!levelhandcar_1415_instances.has_selection()) goto event_1491_26_end;
        levelhandcarfloor1_1417_instances.clear_selection();
        for (ObjectIterator it(levelhandcarfloor1_1417_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (0))) { it.deselect(); continue; }
        }
        if (!levelhandcarfloor1_1417_instances.has_selection()) goto event_1491_26_end;
        for (ObjectIterator it(levelhandcarfloor1_1417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    event_1491_26_end: ;
}
void Frames::event_func_5581()
{
    // event 1492_26
    {
        if (!(group_main_engine_1)) goto event_1492_26_end;
        levelhandcar_1415_instances.clear_selection();
        for (ObjectIterator it(levelhandcar_1415_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!levelhandcar_1415_instances.has_selection()) goto event_1492_26_end;
        levelhandcarfloor2_1418_instances.clear_selection();
        for (ObjectIterator it(levelhandcarfloor2_1418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (0))) { it.deselect(); continue; }
        }
        if (!levelhandcarfloor2_1418_instances.has_selection()) goto event_1492_26_end;
        for (ObjectIterator it(levelhandcarfloor2_1418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    event_1492_26_end: ;
}
void Frames::loop_cart_floorcheck_26()
{
    event_func_5574();
    event_func_5575();
    event_func_5576();
    event_func_5577();
    event_func_5578();
    event_func_5579();
    event_func_5580();
    event_func_5581();
}
void Frames::event_func_5582()
{
    // event 1773_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1)) goto event_1773_26_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1773_26_end: ;
}
void Frames::loop_trigger_deactivate_boss_26()
{
    event_func_5582();
}
void Frames::event_func_5583()
{
    // event 1672_26
    {
        if (!(group_main_engine_1)) goto event_1672_26_end;
        enemyfirespitter_1385_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (-1))) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto event_1672_26_end;
        FrameObject * single_instance_1672_26_0; single_instance_1672_26_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyfirespitter_1385_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1672_26_0 == NULL)
                    single_instance_1672_26_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1672_26_0))->get_movement()->set_speed(50+randrange(30));
        ((Active*)((Active*)single_instance_1672_26_0))->force_frame(((Active*)get_single(enemyfirespitter_1385_instances, default_active_instance))->alterables->values.get(0)*-1+20);
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1672_26_end: ;
}
void Frames::loop_spawndebris_26()
{
    event_func_1176();
    event_func_1177();
    event_func_1178();
    event_func_5153();
    event_func_5583();
}
void Frames::event_func_5584()
{
    // event 1709_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1709_26_end;
        effectsexplosion01_309_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion01_309(-32, -32), 2);
            effectsexplosion01_309_instances.add_back();
        }
        for (ObjectIterator it(effectsexplosion01_309_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(randrange(360), 0);
            ((Active*)*it)->set_x(((Active*)get_instance(backgroundwall_1296_instances, it.current_index, default_active_instance))->get_x()+(loop_destroy_wall_index%math_helper%6)*16);
            ((Active*)*it)->set_y(((Active*)get_instance(backgroundwall_1296_instances, it.current_index, default_active_instance))->get_y()+12+(loop_destroy_wall_index/math_helper/6)*16);
            ((Active*)*it)->force_speed(10+(loop_destroy_wall_index*2));
        }
        breakableruinspiece_1102_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_breakableruinspiece_1102(-32, -32), 1);
            breakableruinspiece_1102_instances.add_back();
        }
        for (ObjectIterator it(breakableruinspiece_1102_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (1+loop_destroy_wall_index/math_helper/4)*(loop_destroy_wall_index%math_helper%2*2-1));
            ((Active*)*it)->alterables->values.set(1, -9.0+loop_destroy_wall_index/math_helper/2);
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(backgroundwall_1296_instances, it.current_index, default_active_instance))->get_x()+(loop_destroy_wall_index%math_helper%6)*16);
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_instance(backgroundwall_1296_instances, it.current_index, default_active_instance))->get_y()+6+(loop_destroy_wall_index/math_helper/6)*16);
            ((Active*)*it)->alterables->values.set(2, 0.3);
            ((Active*)*it)->set_angle(randrange(4)*90, 0);
        }
    }
    event_1709_26_end: ;
}
void Frames::event_func_5585()
{
    // event 1710_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1710_26_end;
        if (!((loop_destroy_wall_index) == (30))) goto event_1710_26_end;
        static FlatObjectList swap_1710_26;
        swap_1710_26.clear();
        effectsexplosion01_309_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion01_309_instances); !it.end(); ++it) {
            swap_1710_26.push_back(((Active*)*it));
        }
        breakableruinspiece_1102_instances.clear_selection();
        for (ObjectIterator it(breakableruinspiece_1102_instances); !it.end(); ++it) {
            swap_1710_26.push_back(((Active*)*it));
        }
        swap_position(swap_1710_26);
    }
    event_1710_26_end: ;
}
void Frames::loop_destroy_wall_26()
{
    event_func_5584();
    event_func_5585();
}
void Frames::event_func_5586()
{
    // event 1438_26
    {
        if (!(group_main_engine_1)) goto event_1438_26_end;
        gimmickrisingswingpiece_1406_instances.clear_selection();
        for (ObjectIterator it(gimmickrisingswingpiece_1406_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_risingswing_index))) { it.deselect(); continue; }
        }
        if (!gimmickrisingswingpiece_1406_instances.has_selection()) goto event_1438_26_end;
        gimmickrisingswing_1405_instances.clear_selection();
        for (ObjectIterator it(gimmickrisingswing_1405_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (((Active*)get_single(gimmickrisingswingpiece_1406_instances, default_active_instance))->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!gimmickrisingswing_1405_instances.has_selection()) goto event_1438_26_end;
        for (ObjectIterator it(gimmickrisingswingpiece_1406_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, ((((Active*)get_single(gimmickrisingswing_1405_instances, it.current_index, default_active_instance))->get_x()-((Active*)get_single(gimmickrisingswing_1405_instances, it.current_index, default_active_instance))->alterables->values.get(8))-((Active*)*it)->alterables->values.get(22)-(((Active*)*it)->alterables->values.get(22)*1.0*4))/math_helper/(4+1));
            ((Active*)*it)->set_x((((Active*)get_single(gimmickrisingswing_1405_instances, it.current_index, default_active_instance))->alterables->values.get(8)+((Active*)*it)->alterables->values.get(18)+((Active*)*it)->alterables->values.get(22))+(((Active*)*it)->alterables->values.get(8)*(((Active*)*it)->alterables->values.get(18)+((Active*)*it)->alterables->values.get(22))));
            ((Active*)*it)->alterables->values.set(19, ((((Active*)get_single(gimmickrisingswing_1405_instances, it.current_index, default_active_instance))->get_y()-((Active*)get_single(gimmickrisingswing_1405_instances, it.current_index, default_active_instance))->alterables->values.get(9))-((Active*)*it)->alterables->values.get(22)-(((Active*)*it)->alterables->values.get(22)*1.0*4))/math_helper/(4+1));
            ((Active*)*it)->set_y((((Active*)get_single(gimmickrisingswing_1405_instances, it.current_index, default_active_instance))->alterables->values.get(9)+((Active*)*it)->alterables->values.get(19)+((Active*)*it)->alterables->values.get(22))+(((Active*)*it)->alterables->values.get(8)*(((Active*)*it)->alterables->values.get(19)+((Active*)*it)->alterables->values.get(22))));
        }
    }
    event_1438_26_end: ;
}
void Frames::loop_risingswing_26()
{
    event_func_5586();
}
void Frames::event_func_5587()
{
    // event 1748_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1748_26_end;
        breakablerelicwall_1384_instances.clear_selection();
        for (ObjectIterator it(breakablerelicwall_1384_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (13))) { it.deselect(); continue; }
        }
        if (!breakablerelicwall_1384_instances.has_selection()) goto event_1748_26_end;
        FrameObject * single_instance_1748_26_0; single_instance_1748_26_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(breakablerelicwall_1384_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerelicwalldebris_1279(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1748_26_0 == NULL)
                    single_instance_1748_26_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1748_26_0))->force_frame(((Active*)get_single(breakablerelicwall_1384_instances, default_active_instance))->alterables->values.get(0)-1);
        ((Active*)((Active*)single_instance_1748_26_0))->alterables->values.set(0, ((Active*)get_single(breakablerelicwall_1384_instances, default_active_instance))->get_y());
        ((Active*)((Active*)single_instance_1748_26_0))->alterables->values.set(1, 0-((Active*)get_single(breakablerelicwall_1384_instances, default_active_instance))->alterables->values.get(0)+randrange(10)*0.1);
        for (ObjectIterator it(breakablerelicwall_1384_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1748_26_end: ;
}
void Frames::loop_ceiling_crush_26()
{
    event_func_5587();
}
void Frames::event_func_5588()
{
    // event 1795_26
    {
        if (!(group_main_engine_1)) goto event_1795_26_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
            ((Active*)*it)->alterables->values.set(3, -1);
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(10, 0);
        }
        global_values->set(4, 10);
        global_values->set(5, ((Active*)get_instance(sign_351_instances))->get_x());
        global_values->set(6, ((Active*)get_instance(sign_351_instances))->get_y()-16);
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
            ((ArrayObject*)*it)->data.x_pos = 0;
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_fadein_music_1000_138);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1795_26_end: ;
}
void Frames::loop_next_act_26()
{
    event_func_5588();
}
void Frames::event_func_5589()
{
    // event 2046_26
    {
        if (!(group_main_engine_1)) goto event_2046_26_end;
        if (!((global_values->get(4)) < (10))) goto event_2046_26_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_stage2_ogg_137, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_2046_26_end: ;
}
void Frames::event_func_5590()
{
    // event 2047_26
    {
        if (!(group_main_engine_1)) goto event_2047_26_end;
        if (!((global_values->get(4)) >= (10))) goto event_2047_26_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_stage2b_ogg_139, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_2047_26_end: ;
}
void Frames::loop_play_music_5_26()
{
    event_func_5589();
    event_func_5590();
}
void Frames::event_func_5591()
{
    // event 2048_26
    {
        if (!(group_main_engine_1)) goto event_2048_26_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_chase_ogg_140, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_2048_26_end: ;
}
void Frames::loop_play_music_6_26()
{
    event_func_5591();
}
void Frames::event_func_5592()
{
    // event 2049_26
    {
        if (!(group_main_engine_1)) goto event_2049_26_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_outdoor_ogg_141, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_2049_26_end: ;
}
void Frames::loop_play_music_7_26()
{
    event_func_5592();
}
void Frames::loop_wrapper_sound_hurt1_26(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_26(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_26(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_26(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_26(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_26(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_process_call_resume_music_26(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_sound_idle7_26(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_26(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_13();
}
void Frames::loop_wrapper_sound_dig2_26(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_26(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_26(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_26(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_sound_explode5_26(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_26(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_process_call_unlock_music_26(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_26(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_sound_explode8_26(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_process_call_reset_music_26(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_26(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_26(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_26(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_explode0_26(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_26(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_26(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_camera_mode1_26(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_13();
}
void Frames::loop_wrapper_camera_mode0_26(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_13();
}
void Frames::loop_wrapper_process_call_play_music_26(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_26(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_13();
}
void Frames::loop_wrapper_sound_attack1_26(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_26(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_26(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_26(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_play_music_8_26(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_uppercut3_26(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_26(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_26(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_26(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_26(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_26(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_26(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
