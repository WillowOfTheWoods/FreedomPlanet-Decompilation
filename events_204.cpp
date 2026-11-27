#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_16032()
{
    // event 2459_72
    {
        // group: Slowdown Effect
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) > (0))) goto event_2459_72_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(2)%math_helper%((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) == (0))) goto event_2459_72_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2459_72_end;
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
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemysporeprojectile_969_instances.clear_selection();
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(objecttransporterstart_3412_instances))->start_animation();
        ((Active*)get_instance(objecttransporter_3344_instances))->start_animation();
        enemygatlinggundebris_3595_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggundebris_3595_instances); !it.end(); ++it) {
            ((Active*)*it)->advance_movement(-1);
        }
        enemyhomingbullet_2568_instances.clear_selection();
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        ((Active*)get_instance(effectterreonwarning_2986_instances))->start_animation();
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossboostmissile_3739_instances.clear_selection();
        for (ObjectIterator it(bossboostmissile_3739_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectmissilewarning_3740_instances.clear_selection();
        for (ObjectIterator it(effectmissilewarning_3740_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectbrevonmechwarning_3255_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning_3255_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        brevonmechlaser_3254_instances.clear_selection();
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        brevonmechcharge_3325_instances.clear_selection();
        for (ObjectIterator it(brevonmechcharge_3325_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectbrevonmechwarning2_3315_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning2_3315_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(kingdomstone_1587_instances))->start_animation();
        ((Active*)get_instance(brevon_3683_instances))->start_animation();
        computerterminal_3666_instances.clear_selection();
        for (ObjectIterator it(computerterminal_3666_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        computerterminal2_3668_instances.clear_selection();
        for (ObjectIterator it(computerterminal2_3668_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        brevonsuitflametrail_3742_instances.clear_selection();
        for (ObjectIterator it(brevonsuitflametrail_3742_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        minibossacid_658_instances.clear_selection();
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    event_2459_72_end: ;
}
void Frames::handle_frame_73_events()
{
    test_collisions_72();
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
    event_func_15666();
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
    event_func_6054();
    event_func_6055();
    event_func_2780();
    event_func_6056();
    event_func_3727();
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
    event_func_15344();
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
    event_func_15345();
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
    event_func_15346();
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
    event_func_3730();
    event_func_6057();
    event_func_2425();
    event_func_3732();
    event_func_3733();
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
    event_func_2978();
    event_func_2979();
    event_func_6066();
    event_func_2980();
    event_func_4355();
    event_func_4356();
    if (!group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1) goto group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end;
    event_func_3737();
    event_func_6067();
    event_func_6068();
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end: ;
    event_func_14448();
    event_func_14449();
    event_func_14450();
    event_func_14451();
    event_func_15347();
    event_func_13976();
    event_func_14747();
    event_func_13978();
    event_func_14349();
    event_func_13980();
    event_func_13981();
    event_func_15348();
    event_func_13983();
    event_func_13984();
    event_func_13985();
    event_func_13208();
    event_func_13209();
    event_func_13210();
    event_func_13211();
    event_func_13212();
    event_func_13213();
    event_func_13214();
    event_func_13215();
    event_func_13216();
    if (!group_main_engine_level_specific_methods_gimmicks_and_special_objects_crosshair_1) goto group_main_engine_level_specific_methods_gimmicks_and_special_objects_crosshair_1_end;
    event_func_15349();
    event_func_15350();
    event_func_15351();
    event_func_15352();
    event_func_15353();
    event_func_15354();
    event_func_15355();
    event_func_15356();
    event_func_15357();
    event_func_15358();
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_crosshair_1_end: ;
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_14385();
    event_func_13478();
    event_func_13479();
    event_func_13480();
    event_func_13481();
    event_func_14027();
    event_func_13483();
    event_func_15359();
    event_func_14764();
    event_func_14765();
    event_func_14766();
    event_func_14767();
    event_func_14768();
    event_func_14769();
    event_func_14770();
    event_func_14771();
    event_func_14772();
    event_func_14773();
    event_func_14774();
    event_func_14775();
    event_func_14776();
    event_func_14777();
    event_func_14778();
    event_func_15360();
    event_func_15361();
    event_func_15362();
    event_func_15363();
    event_func_15364();
    event_func_15365();
    event_func_14785();
    event_func_14786();
    event_func_14787();
    event_func_15366();
    event_func_15367();
    event_func_15368();
    event_func_15369();
    event_func_14792();
    event_func_15370();
    event_func_14794();
    event_func_15371();
    event_func_15372();
    event_func_15373();
    event_func_15374();
    event_func_15271();
    event_func_15272();
    event_func_15273();
    event_func_15274();
    event_func_15275();
    event_func_15276();
    event_func_15375();
    event_func_15278();
    event_func_10830();
    event_func_10831();
    event_func_15376();
    event_func_15377();
    event_func_15378();
    if (!group_main_engine_level_specific_methods_frame_transition_1) goto group_main_engine_level_specific_methods_frame_transition_1_end;
    event_func_15379();
    event_func_15380();
    event_func_15381();
    group_main_engine_level_specific_methods_frame_transition_1_end: ;
    if (!group_main_engine_level_specific_methods_stage_clear_1) goto group_main_engine_level_specific_methods_stage_clear_1_end;
    event_func_4197();
    event_func_4198();
    event_func_14928();
    event_func_4200();
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
    event_func_15382();
    event_func_4217();
    event_func_4218();
    event_func_4219();
    event_func_4220();
    event_func_4221();
    event_func_4222();
    event_func_4223();
    event_func_4945();
    event_func_15383();
    group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1_end: ;
    group_main_engine_level_specific_methods_stage_clear_1_end: ;
    if (!group_main_engine_level_specific_methods_play_bgm_1) goto group_main_engine_level_specific_methods_play_bgm_1_end;
    event_func_15384();
    group_main_engine_level_specific_methods_play_bgm_1_end: ;
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1) goto group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1_end;
    group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) goto group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end;
    event_func_4173();
    event_func_4059();
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end: ;
    event_func_15385();
    event_func_15386();
    event_func_15387();
    event_func_15388();
    event_func_15389();
    event_func_15390();
    event_func_15391();
    event_func_15392();
    event_func_15393();
    event_func_15394();
    event_func_15395();
    event_func_15396();
    event_func_15397();
    event_func_15398();
    event_func_15399();
    if (!group_main_engine_level_specific_methods_cutscenes_approach_brevon_1) goto group_main_engine_level_specific_methods_cutscenes_approach_brevon_1_end;
    event_func_15400();
    event_func_15401();
    event_func_15402();
    event_func_15403();
    event_func_15404();
    event_func_15405();
    event_func_15406();
    event_func_15407();
    event_func_15408();
    event_func_15409();
    event_func_15410();
    event_func_15411();
    event_func_15412();
    event_func_15413();
    event_func_15414();
    event_func_15415();
    group_main_engine_level_specific_methods_cutscenes_approach_brevon_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_brevon_conversation_1) goto group_main_engine_level_specific_methods_cutscenes_brevon_conversation_1_end;
    event_func_15416();
    event_func_15417();
    event_func_15418();
    event_func_15419();
    event_func_15420();
    event_func_15421();
    event_func_15422();
    event_func_15423();
    event_func_15424();
    event_func_15425();
    event_func_15426();
    event_func_15427();
    event_func_15428();
    event_func_15429();
    event_func_15430();
    event_func_15431();
    event_func_15432();
    group_main_engine_level_specific_methods_cutscenes_brevon_conversation_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_restore_hud_and_star_background_1) goto group_main_engine_level_specific_methods_cutscenes_restore_hud_and_star_background_1_end;
    event_func_15433();
    event_func_15434();
    event_func_15435();
    event_func_15436();
    event_func_15437();
    event_func_15438();
    event_func_15439();
    group_main_engine_level_specific_methods_cutscenes_restore_hud_and_star_background_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_mech_defeated_1) goto group_main_engine_level_specific_methods_cutscenes_mech_defeated_1_end;
    event_func_15440();
    event_func_15441();
    event_func_15442();
    event_func_15443();
    event_func_15444();
    event_func_15445();
    event_func_15446();
    event_func_15447();
    event_func_15448();
    event_func_15449();
    event_func_15450();
    event_func_15451();
    event_func_15452();
    event_func_15453();
    event_func_15454();
    event_func_15455();
    event_func_15456();
    event_func_15457();
    event_func_15458();
    event_func_15459();
    event_func_15460();
    event_func_15461();
    event_func_15462();
    event_func_15463();
    event_func_15464();
    event_func_15465();
    event_func_15466();
    event_func_15467();
    event_func_15468();
    event_func_15469();
    group_main_engine_level_specific_methods_cutscenes_mech_defeated_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_power_suit_defeated_1) goto group_main_engine_level_specific_methods_cutscenes_power_suit_defeated_1_end;
    event_func_15470();
    event_func_15471();
    event_func_15472();
    event_func_15473();
    event_func_15474();
    event_func_15475();
    event_func_15476();
    event_func_15477();
    event_func_15478();
    event_func_15479();
    event_func_15480();
    group_main_engine_level_specific_methods_cutscenes_power_suit_defeated_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_red_siren_effect_1) goto group_main_engine_level_specific_methods_cutscenes_red_siren_effect_1_end;
    event_func_15481();
    group_main_engine_level_specific_methods_cutscenes_red_siren_effect_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_ending_1) goto group_main_engine_level_specific_methods_cutscenes_ending_1_end;
    event_func_15482();
    event_func_15483();
    event_func_15484();
    event_func_15485();
    event_func_15486();
    event_func_15487();
    event_func_15488();
    event_func_15489();
    event_func_15490();
    group_main_engine_level_specific_methods_cutscenes_ending_1_end: ;
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
    event_func_15523();
    event_func_15524();
    event_func_15525();
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
    event_func_15542();
    event_func_15543();
    group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1_end: ;
    event_func_15544();
    group_main_engine_level_specific_methods_cutscenes_dialog_system_1_end: ;
    event_func_15545();
    event_func_15546();
    event_func_15547();
    event_func_15548();
    if (!group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1) goto group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1_end;
    if (!group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1) goto group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1_end;
    event_func_15549();
    event_func_15550();
    event_func_15551();
    event_func_15552();
    event_func_15553();
    event_func_15554();
    event_func_15555();
    event_func_15556();
    event_func_15557();
    event_func_15558();
    event_func_15559();
    event_func_15560();
    event_func_15561();
    event_func_15562();
    event_func_15563();
    event_func_15564();
    event_func_15565();
    event_func_15566();
    event_func_15567();
    event_func_15568();
    event_func_15569();
    event_func_15570();
    event_func_15571();
    event_func_15572();
    event_func_15573();
    event_func_15574();
    event_func_15575();
    event_func_15576();
    event_func_15577();
    event_func_15578();
    event_func_15579();
    event_func_15580();
    event_func_15581();
    event_func_15582();
    event_func_15583();
    event_func_15584();
    event_func_15585();
    event_func_15586();
    event_func_15587();
    event_func_15588();
    event_func_15589();
    event_func_15590();
    event_func_15591();
    event_func_15592();
    event_func_15593();
    event_func_15594();
    event_func_15595();
    event_func_15596();
    event_func_15597();
    event_func_15598();
    event_func_15599();
    event_func_15600();
    event_func_15601();
    event_func_15602();
    event_func_15603();
    event_func_15604();
    event_func_15605();
    event_func_15606();
    event_func_15607();
    event_func_15608();
    event_func_15609();
    event_func_15610();
    event_func_15611();
    event_func_15612();
    event_func_15613();
    event_func_15614();
    event_func_15615();
    event_func_15616();
    event_func_15617();
    event_func_15618();
    event_func_15619();
    event_func_15620();
    event_func_15621();
    event_func_15622();
    event_func_15623();
    event_func_15624();
    event_func_15625();
    event_func_15626();
    event_func_15627();
    event_func_15628();
    event_func_15629();
    event_func_15630();
    event_func_15631();
    event_func_15632();
    event_func_15633();
    event_func_15634();
    event_func_15635();
    event_func_15636();
    event_func_15637();
    event_func_15638();
    event_func_15639();
    group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1_end: ;
    event_func_15640();
    event_func_15641();
    event_func_15642();
    event_func_15643();
    event_func_15644();
    event_func_15645();
    event_func_15646();
    event_func_15647();
    event_func_15648();
    event_func_15649();
    event_func_15650();
    event_func_15651();
    event_func_15652();
    event_func_15653();
    event_func_15654();
    event_func_15655();
    event_func_15656();
    event_func_15657();
    event_func_15658();
    event_func_15659();
    event_func_15660();
    event_func_15661();
    event_func_15661();
    event_func_15662();
    event_func_15663();
    event_func_15664();
    event_func_15665();
    event_func_15667();
    event_func_15668();
    event_func_15669();
    event_func_15670();
    event_func_15671();
    event_func_15672();
    event_func_15672();
    event_func_15673();
    event_func_15674();
    event_func_15675();
    event_func_15676();
    event_func_15677();
    event_func_15678();
    event_func_15679();
    event_func_15680();
    event_func_15681();
    event_func_15682();
    event_func_15683();
    group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1) goto group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1_end;
    event_func_15684();
    event_func_15685();
    event_func_15686();
    event_func_15687();
    event_func_15688();
    event_func_15689();
    event_func_15690();
    event_func_15691();
    event_func_15692();
    event_func_15693();
    event_func_15694();
    event_func_15695();
    event_func_15696();
    event_func_15697();
    event_func_15698();
    event_func_15699();
    event_func_15700();
    event_func_15701();
    event_func_15702();
    event_func_15703();
    event_func_15704();
    event_func_15705();
    event_func_15706();
    event_func_15707();
    event_func_15708();
    event_func_15709();
    event_func_15710();
    event_func_15711();
    event_func_15712();
    event_func_15713();
    event_func_15714();
    event_func_15715();
    event_func_15716();
    event_func_15717();
    event_func_15718();
    event_func_15719();
    event_func_15720();
    event_func_15721();
    event_func_15722();
    event_func_15723();
    event_func_15724();
    event_func_15725();
    event_func_15726();
    event_func_15727();
    event_func_15728();
    event_func_15729();
    event_func_15730();
    event_func_15731();
    event_func_15732();
    event_func_15733();
    event_func_15734();
    event_func_15735();
    event_func_15736();
    event_func_15737();
    event_func_15738();
    event_func_15739();
    event_func_15740();
    event_func_15741();
    event_func_15742();
    event_func_15743();
    event_func_15744();
    event_func_15745();
    event_func_15746();
    event_func_15747();
    event_func_15748();
    event_func_15749();
    event_func_15750();
    event_func_15751();
    event_func_15752();
    event_func_15753();
    event_func_15754();
    event_func_15755();
    event_func_15756();
    event_func_15757();
    event_func_15758();
    event_func_15759();
    event_func_15760();
    event_func_15761();
    event_func_15762();
    event_func_15763();
    event_func_15764();
    event_func_15765();
    event_func_15766();
    event_func_15767();
    event_func_15768();
    event_func_15769();
    event_func_15770();
    event_func_15771();
    event_func_15772();
    event_func_15773();
    event_func_15774();
    event_func_15775();
    event_func_15776();
    event_func_15777();
    event_func_15778();
    event_func_15779();
    event_func_15779();
    event_func_15780();
    event_func_15781();
    event_func_15782();
    event_func_15783();
    event_func_15784();
    event_func_15785();
    event_func_15786();
    event_func_15787();
    event_func_15788();
    event_func_15789();
    event_func_15789();
    event_func_15790();
    event_func_15791();
    event_func_15792();
    event_func_15793();
    event_func_15794();
    event_func_15795();
    event_func_15796();
    event_func_15797();
    event_func_15798();
    event_func_15799();
    event_func_15800();
    event_func_15801();
    event_func_15802();
    event_func_15803();
    event_func_15804();
    event_func_15805();
    event_func_15806();
    event_func_15807();
    event_func_15808();
    event_func_15809();
    event_func_15810();
    event_func_15811();
    event_func_15812();
    event_func_15813();
    event_func_15814();
    event_func_15815();
    event_func_15816();
    event_func_15817();
    event_func_15818();
    event_func_15819();
    event_func_15820();
    event_func_15821();
    event_func_15822();
    event_func_15823();
    event_func_15824();
    event_func_15825();
    event_func_15826();
    event_func_15827();
    event_func_15828();
    event_func_15829();
    event_func_15830();
    event_func_15831();
    event_func_15832();
    event_func_15833();
    event_func_15834();
    event_func_15835();
    event_func_15836();
    event_func_15837();
    event_func_15838();
    event_func_15839();
    event_func_15840();
    event_func_15841();
    event_func_15842();
    event_func_15843();
    group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1) goto group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1_end;
    event_func_15844();
    event_func_15845();
    event_func_15846();
    event_func_15847();
    event_func_15848();
    event_func_15849();
    event_func_15850();
    event_func_15851();
    event_func_15852();
    event_func_15853();
    event_func_15854();
    event_func_15855();
    event_func_15856();
    event_func_15857();
    event_func_15858();
    event_func_15859();
    event_func_15860();
    event_func_15861();
    event_func_15862();
    event_func_15863();
    event_func_15864();
    event_func_15865();
    event_func_15866();
    event_func_15867();
    event_func_15868();
    event_func_15869();
    event_func_15870();
    event_func_15871();
    event_func_15872();
    event_func_15873();
    event_func_15874();
    event_func_15875();
    event_func_15876();
    event_func_15877();
    event_func_15878();
    event_func_15879();
    event_func_15880();
    event_func_15881();
    event_func_15882();
    event_func_15883();
    event_func_15884();
    event_func_15885();
    event_func_15886();
    event_func_15887();
    event_func_15888();
    event_func_15889();
    event_func_15890();
    event_func_15891();
    event_func_15892();
    event_func_15893();
    event_func_15894();
    event_func_15895();
    event_func_15896();
    event_func_15897();
    event_func_15898();
    event_func_15899();
    event_func_15900();
    event_func_15901();
    event_func_15902();
    event_func_15903();
    event_func_15904();
    event_func_15905();
    event_func_15906();
    event_func_15907();
    event_func_15908();
    event_func_15909();
    event_func_15910();
    event_func_15911();
    event_func_15912();
    event_func_15913();
    event_func_15914();
    event_func_15915();
    event_func_15916();
    event_func_15917();
    event_func_15918();
    event_func_15919();
    event_func_15920();
    event_func_15921();
    event_func_15922();
    event_func_15923();
    event_func_15924();
    event_func_15925();
    event_func_15926();
    event_func_15927();
    event_func_15928();
    event_func_15929();
    event_func_15930();
    event_func_15931();
    event_func_15932();
    event_func_15933();
    event_func_15934();
    event_func_15935();
    event_func_15936();
    event_func_15937();
    event_func_15938();
    event_func_15939();
    event_func_15940();
    event_func_15941();
    if (!group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_lilac_1) goto group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_lilac_1_end;
    event_func_15942();
    event_func_15943();
    event_func_15944();
    event_func_15945();
    event_func_15946();
    event_func_15947();
    event_func_15948();
    event_func_15949();
    event_func_15950();
    event_func_15951();
    event_func_15952();
    event_func_15953();
    event_func_15954();
    event_func_15955();
    event_func_15956();
    event_func_15957();
    event_func_15958();
    event_func_15959();
    event_func_15960();
    event_func_15961();
    event_func_15962();
    event_func_15963();
    event_func_15964();
    event_func_15965();
    event_func_15966();
    group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_lilac_1_end: ;
    event_func_15967();
    if (!group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_carol_1) goto group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_carol_1_end;
    event_func_15968();
    event_func_15969();
    event_func_15970();
    event_func_15971();
    event_func_15972();
    event_func_15973();
    event_func_15974();
    event_func_15975();
    event_func_15976();
    event_func_15977();
    event_func_15978();
    event_func_15979();
    event_func_15980();
    group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_carol_1_end: ;
    event_func_15981();
    event_func_15982();
    event_func_15983();
    event_func_15984();
    event_func_15985();
    event_func_15986();
    event_func_15987();
    event_func_15988();
    event_func_15989();
    event_func_15990();
    event_func_15991();
    event_func_15992();
    event_func_15993();
    event_func_15994();
    event_func_15995();
    event_func_15996();
    event_func_15997();
    event_func_15998();
    event_func_15999();
    event_func_16000();
    event_func_16001();
    event_func_16002();
    event_func_16003();
    event_func_16004();
    event_func_16005();
    event_func_16006();
    event_func_16007();
    event_func_16008();
    event_func_16009();
    group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1_end: ;
    event_func_16010();
    event_func_16011();
    event_func_16012();
    event_func_16013();
    event_func_16014();
    event_func_16015();
    event_func_16016();
    event_func_16017();
    event_func_16018();
    event_func_16019();
    event_func_16020();
    event_func_16021();
    event_func_16022();
    event_func_16023();
    event_func_16024();
    event_func_16025();
    event_func_16026();
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
    event_func_16027();
    event_func_16028();
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
    event_func_16029();
    event_func_16030();
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
    event_func_16031();
    event_func_16032();
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
void Frames::handle_frame_73_pre_events()
{
}
void Frames::event_func_16033()
{
    // event 1_72
    {
        if (!((global_values->get(0)) < (2))) goto event_1_72_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.enable(2);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.enable(3);
    }
    event_1_72_end: ;
}
void Frames::event_func_16034()
{
    // event 2_72
    {
        if (!((global_values->get(4)) == (99))) goto event_2_72_end;
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
            group_main_engine_interface_and_post_processing_methods_titlecard_1 = false;
    
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
        if (!group_main_engine_level_specific_methods_cutscenes_ending_1) {
            group_main_engine_level_specific_methods_cutscenes_ending_1 = true;
        }
    }
    event_2_72_end: ;
}
void Frames::event_func_16035()
{
    // event 3_72
    {
#ifdef CHOWDREN_WAIT
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->find_board(global_values->get(1), 13);
#endif
    }
    event_3_72_end: ;
}
void Frames::event_func_16036()
{
    // event 10_72
    {
        if (!(group_main_engine_1)) goto event_10_72_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 2000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 55);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
    }
    event_10_72_end: ;
}
void Frames::event_func_16037()
{
    // event 27_72
    {
        if (!(group_main_engine_1)) goto event_27_72_end;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(3, 1);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(4, 0.98);
        ((SystemBox*)get_instance(parallaxspaceback_3755_instances))->alterables->values.set(3, 1);
        ((SystemBox*)get_instance(parallaxspaceback_3755_instances))->alterables->values.set(4, 0.7);
        ((SystemBox*)get_instance(parallaxspaceback_3755_instances))->set_visible(false);
        ((SystemBox*)get_instance(parallaxspaceback2_3756_instances))->alterables->values.set(3, 1);
        ((SystemBox*)get_instance(parallaxspaceback2_3756_instances))->alterables->values.set(4, 0.7);
        ((SystemBox*)get_instance(parallaxspaceback2_3756_instances))->alterables->values.set(6, -0.5);
        ((SystemBox*)get_instance(parallaxspaceback2_3756_instances))->set_visible(false);
        ((SystemBox*)get_instance(parallaxspaceback3_3757_instances))->alterables->values.set(3, 1);
        ((SystemBox*)get_instance(parallaxspaceback3_3757_instances))->alterables->values.set(4, 0.7);
        ((SystemBox*)get_instance(parallaxspaceback3_3757_instances))->alterables->values.set(6, -1);
        ((SystemBox*)get_instance(parallaxspaceback3_3757_instances))->set_visible(false);
    }
    event_27_72_end: ;
}
void Frames::event_func_16038()
{
    // event 1439_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_crosshair_1)) goto event_1439_72_end;
        brevoncrosshair2_3792_instances.clear_selection();
        for (ObjectIterator it(brevoncrosshair2_3792_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(50);
        }
        brevoncrosshair3_3793_instances.clear_selection();
        for (ObjectIterator it(brevoncrosshair3_3793_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(50);
        }
        brevoncrosshair4_3794_instances.clear_selection();
        for (ObjectIterator it(brevoncrosshair4_3794_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y_scale(40);
        }
        brevoncrosshair5_3795_instances.clear_selection();
        for (ObjectIterator it(brevoncrosshair5_3795_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y_scale(40);
        }
        ((Active*)get_instance(brevoncrosshair7_3791_instances))->set_x_scale(0);
    }
    event_1439_72_end: ;
}
void Frames::event_func_16039()
{
    // event 1464_72
    {
        if (!(group_main_engine_1)) goto event_1464_72_end;
        enemygatlinggun_3650_instances.clear_selection();
        spread_value(enemygatlinggun_3650_instances, 3, 0);
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 90);
            ((Active*)*it)->alterables->values.set(3, -90);
            ((Active*)*it)->alterables->values.set(15, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(16, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(17, ((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->flags.enable(16);
        }
    }
    event_1464_72_end: ;
}
void Frames::event_func_16040()
{
    // event 1553_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_play_bgm_1)) goto event_1553_72_end;
        if (!((global_values->get(4)) < (3))) goto event_1553_72_end;
        brevonsuitbackgun_3765_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackgun_3765_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        brevonsuitbackarm_3766_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackarm_3766_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        brevonsuitbackleg_3767_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackleg_3767_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        brevonsuitbackknee_3768_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackknee_3768_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        brevonsuitbackfoot_3769_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackfoot_3769_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        brevonsuitfrontleg_3772_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontleg_3772_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        brevonsuitfrontknee_3773_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontknee_3773_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        brevonsuitfrontfoot_3774_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontfoot_3774_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        brevonsuittorso_3775_instances.clear_selection();
        for (ObjectIterator it(brevonsuittorso_3775_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        brevonsuitfrontarm_3776_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontarm_3776_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        brevonsuitfrontgun_3777_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontgun_3777_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(redflash_3737_instances))->set_x_scale(43);
        ((Active*)get_instance(redflash_3737_instances))->set_y_scale(24);
        ((Active*)get_instance(redflash_3737_instances))->set_visible(true);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unlock_music_82);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        media.stop_channel(32-1);
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(10, 0);
        }
    }
    event_1553_72_end: ;
}
void Frames::event_func_16041()
{
    // event 1554_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_play_bgm_1)) goto event_1554_72_end;
        if (!((global_values->get(4)) <= (1))) goto event_1554_72_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(5)+str_0_1_123);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        media.set_channel_volume(32-1, 0);
    }
    event_1554_72_end: ;
}
void Frames::event_func_16042()
{
    // event 1560_72
    {
        if (!(group_main_engine_1)) goto event_1560_72_end;
        if (!((global_values->get(4)) < (2))) goto event_1560_72_end;
        ((Active*)get_instance(brevon_3683_instances))->force_animation(5);
        ((Active*)get_instance(brevon_3683_instances))->set_direction(16);
        ((Active*)get_instance(brevon_3683_instances))->force_frame(52);
        {
            FrameObject * parent = ((Active*)get_instance(brevondummycape_3758_instances));
            if (parent == NULL) goto pos_end_1560_72_0;
            ((Active*)get_instance(brevon_3683_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1560_72_0: ;
        }
    }
    event_1560_72_end: ;
}
void Frames::event_func_16043()
{
    // event 1569_72
    {
        if (!(group_main_engine_1)) goto event_1569_72_end;
        bosshealthbar1_3760_instances.clear_selection();
        spread_value(bosshealthbar1_3760_instances, 0, 0);
        bosshealthbar2_3761_instances.clear_selection();
        spread_value(bosshealthbar2_3761_instances, 0, 0);
    }
    event_1569_72_end: ;
}
void Frames::event_func_16044()
{
    // event 1617_72
    {
        if (!(group_main_engine_1)) goto event_1617_72_end;
        if (!((global_values->get(4)) == (2))) goto event_1617_72_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 40);
            ((Active*)*it)->set_visible(false);
        }
        brevonmechturret_3333_instances.clear_selection();
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
        if (!group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1) {
            group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1 = true;
        }
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, -1);
        }
        ((Active*)get_instance(brevon_3683_instances))->set_x(0);
        brevondummycape_3758_instances.clear_selection();
        for (ObjectIterator it(brevondummycape_3758_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(kingdomstone_1587_instances))->get_x());
        }
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 99);
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 1);
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
        bosshealthbar1_3760_instances.clear_selection();
        for (ObjectIterator it(bosshealthbar1_3760_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1617_72_end: ;
}
void Frames::event_func_16045()
{
    // event 1648_72
    {
        if (!(group_main_engine_1)) goto event_1648_72_end;
        if (!((global_values->get(4)) == (3))) goto event_1648_72_end;
        if (!group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1) {
            group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1 = true;
        }
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 11);
            ((Active*)*it)->alterables->values.set(12, 100);
        }
        brevonsuitbackgun_3765_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackgun_3765_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        brevonsuitbackarm_3766_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackarm_3766_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        brevonsuitbackleg_3767_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackleg_3767_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        brevonsuitbackknee_3768_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackknee_3768_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        brevonsuitbackfoot_3769_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackfoot_3769_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        brevonsuitfrontleg_3772_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontleg_3772_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        brevonsuitfrontknee_3773_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontknee_3773_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        brevonsuitfrontfoot_3774_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontfoot_3774_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        brevonsuittorso_3775_instances.clear_selection();
        for (ObjectIterator it(brevonsuittorso_3775_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        brevonsuitfrontarm_3776_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontarm_3776_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        brevonsuitfrontgun_3777_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontgun_3777_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(brevon_3683_instances))->set_visible(false);
        ((Active*)get_instance(brevon_3683_instances))->set_x(0);
        brevondummycape_3758_instances.clear_selection();
        for (ObjectIterator it(brevondummycape_3758_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(15, 0);
        }
        ((Active*)get_instance(redflash_3737_instances))->set_x_scale(43);
        ((Active*)get_instance(redflash_3737_instances))->set_y_scale(24);
        ((Active*)get_instance(redflash_3737_instances))->set_layer(1-1);
        {
            ((Active*)get_instance(redflash_3737_instances))->set_shader(Render::ADDITIVE);
        }
        ((Active*)get_instance(redflash_3737_instances))->set_direction(1);
        if (!group_main_engine_level_specific_methods_cutscenes_red_siren_effect_1) {
            group_main_engine_level_specific_methods_cutscenes_red_siren_effect_1 = true;
        }
        ((Active*)get_instance(redflash_3737_instances))->alterables->flags.enable(1);
    }
    event_1648_72_end: ;
}
void Frames::event_func_16046()
{
    // event 1732_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1732_72_end;
        brevonmechfrontwing_2546_instances.clear_selection();
        spread_value(brevonmechfrontwing_2546_instances, 1, 3);
        brevonmechbackwing_2538_instances.clear_selection();
        spread_value(brevonmechbackwing_2538_instances, 1, 3);
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->flags.enable(4);
        }
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
        }
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, ((Active*)get_instance(cameralimitbossleft_421_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(10, ((Active*)get_instance(cameralimitbossright_422_instances, it.current_index, default_active_instance))->get_x());
        }
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 10);
        }
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, ((Active*)get_instance(cameralimitbossleft_421_instances, it.current_index, default_active_instance))->get_x()+20);
            ((Active*)*it)->alterables->values.set(12, ((Active*)get_instance(cameralimitbossright_422_instances, it.current_index, default_active_instance))->get_x()-20);
        }
        media.lock(27-1);
    }
    event_1732_72_end: ;
}
void Frames::event_func_16047()
{
    // event 1733_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1733_72_end;
        if (!((global_values->get(4)) < (2))) goto event_1733_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, -1);
        }
    }
    event_1733_72_end: ;
}
void Frames::event_func_16048()
{
    // event 1884_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1884_72_end;
        if (!((global_values->get(4)) >= (3))) goto event_1884_72_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechbackwing_2538_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackwing_2538_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechfrontleg_2539_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg_2539_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechabdomen_2540_instances.clear_selection();
        for (ObjectIterator it(brevonmechabdomen_2540_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechfrontleg2_2541_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg2_2541_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechfrontknee_2542_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontknee_2542_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechfrontfoot_2545_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontfoot_2545_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechfrontwing_2546_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontwing_2546_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechfrontshoulder_2547_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontshoulder_2547_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechfrontarm_2548_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontarm_2548_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechfrontclaw_2549_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontclaw_2549_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechaxle_2550_instances.clear_selection();
        for (ObjectIterator it(brevonmechaxle_2550_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechbackshoulder_2514_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackshoulder_2514_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechbackclaw_2515_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackclaw_2515_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechbackarm_2516_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackarm_2516_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        effectbrevonmechwarning2_3315_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning2_3315_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1884_72_end: ;
}
void Frames::event_func_16049()
{
    // event 1886_72
    {
        if (!(group_main_engine_1)) goto event_1886_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->get_y());
        }
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->get_y()+80);
        }
    }
    event_1886_72_end: ;
}
void Frames::event_func_16050()
{
    // event 2389_72
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_2389_72_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(8);
        }
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(14);
        }
    }
    event_2389_72_end: ;
}
void Frames::on_frame_73_start_events()
{
    event_func_16033();
    event_func_16034();
    event_func_16035();
    event_func_4133();
    event_func_3265();
    event_func_14091();
    event_func_4318();
    event_func_16036();
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
    event_func_16037();
    event_func_3269();
    event_func_3984();
    event_func_3985();
    event_func_2673();
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
    event_func_3986();
    event_func_3987();
    event_func_16038();
    event_func_13539();
    event_func_16039();
    event_func_15310();
    event_func_2686();
    event_func_16040();
    event_func_16041();
    event_func_16042();
    event_func_16043();
    event_func_16044();
    event_func_16045();
    event_func_16046();
    event_func_16047();
    event_func_16048();
    event_func_16049();
    event_func_3277();
    event_func_2690();
    event_func_2691();
    event_func_13950();
    event_func_16050();
    event_func_4145();
    event_func_5573();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_73_init()
{
    index = 72;
    width = 3296;
    height = 664;
    virtual_width = 3296;
    virtual_height = 664;
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
    static ObjectList* qualifier_30_instances[] = {&brevonmechbackshoulder_2514_instances, &brevonmechbackclaw_2515_instances, &brevonmechbackarm_2516_instances, &brevonmechbackwing_2538_instances, &brevonmechfrontleg_2539_instances, &brevonmechabdomen_2540_instances, &brevonmechfrontleg2_2541_instances, &brevonmechfrontknee_2542_instances, &brevonmechtorso_2543_instances, &brevonmechhead_2544_instances, &brevonmechfrontfoot_2545_instances, &brevonmechfrontwing_2546_instances, &brevonmechfrontshoulder_2547_instances, &brevonmechfrontarm_2548_instances, &brevonmechfrontclaw_2549_instances, &brevonmechaxle_2550_instances, NULL};
    qualifier_30.set(16, &qualifier_30_instances[0]);
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &fdlasertunnelplatform_3728_instances, NULL};
    qualifier_8.set(10, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesdown_559_instances, &hazardspikesup_558_instances, &hazardspikesright_561_instances, &fdlasertunnelplatform_3728_instances, &hazardspikesleft_560_instances, NULL};
    qualifier_9.set(33, &qualifier_9_instances[0]);
    static ObjectList* qualifier_34_instances[] = {&brevonsuitbackgun_3765_instances, &brevonsuitbackarm_3766_instances, &brevonsuitbackleg_3767_instances, &brevonsuitbackknee_3768_instances, &brevonsuitbackfoot_3769_instances, &brevonsuitfrontleg_3772_instances, &brevonsuitfrontknee_3773_instances, &brevonsuitfrontfoot_3774_instances, &brevonsuitfrontarm_3776_instances, &brevonsuitfrontgun_3777_instances, NULL};
    qualifier_34.set(10, &qualifier_34_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemyrotorbladedeath_2126_instances, &enemyelitemask_2511_instances, &brevonmechweakspot_3316_instances, &enemygatlinggun_3650_instances, &enemyspiderbeamer_3729_instances, &brevonsuithead_3770_instances, &brevonhitbox_3781_instances, NULL};
    qualifier_20.set(7, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece0_465_instances, &parallaxspaceback_3755_instances, &parallaxspaceback2_3756_instances, &parallaxspaceback3_3757_instances, NULL};
    qualifier_0.set(4, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesdown_559_instances, &hazardspikesup_558_instances, &objecttransporter_3344_instances, &hazardspikesright_561_instances, &lockedlabdoorbarrier_3541_instances, &hazardspikesleft_560_instances, NULL};
    qualifier_7.set(28, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &effectstinyexplosion_3746_instances, NULL};
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
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, NULL};
    qualifier_13.set(1, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0_3687(0, -56), 0);
    add_object(create_brevonmechbackground_2513(2052, 205), 1);
    add_background_object(create_fdbackpipe_3697(2496, 512), 2);
    add_background_object(create_fdbackpipe_3697(2560, 512), 2);
    add_background_object(create_fdpowercore5_3750(2536, 608), 2);
    add_background_object(create_fdpowercore5_3750(2536, 576), 2);
    add_background_object(create_fdbackpipe_3697(2496, 384), 2);
    add_background_object(create_fdbackpipe_3697(2560, 384), 2);
    add_background_object(create_fdpowercore5_3750(2536, 448), 2);
    add_background_object(create_fdpowercore5_3750(2536, 416), 2);
    add_background_object(create_fdpowercore5_3750(2536, 384), 2);
    add_background_object(create_fdpowercore5_3750(2536, 544), 2);
    add_background_object(create_fdpowercore5_3750(2536, 512), 2);
    add_background_object(create_fdpowercore5_3750(2536, 480), 2);
    add_background_object(create_backdrop3_3751(1856, 0), 2);
    add_background_object(create_backdrop2_3752(1856, 160), 2);
    add_background_object(create_backdrop_3753(2112, 288), 2);
    add_background_object(create_backdrop2_3752(1856, 32), 2);
    add_background_object(create_backdrop_3753(1856, 288), 2);
    add_background_object(create_backdrop4_3754(2176, 32), 2);
    add_background_object(create_backdrop3_3751(2112, 0), 2);
    add_background_object(create_backdrop4_3754(2176, 160), 2);
    add_background_object(create_backdrop_3753(1984, 288), 2);
    add_background_object(create_backdrop3_3751(1984, 0), 2);
    add_background_object(create_backdrop3_3751(2880, 0), 2);
    add_background_object(create_backdrop2_3752(2912, 160), 2);
    add_background_object(create_backdrop_3753(3136, 288), 2);
    add_background_object(create_backdrop2_3752(2912, 32), 2);
    add_background_object(create_backdrop_3753(2880, 288), 2);
    add_background_object(create_backdrop4_3754(3232, 32), 2);
    add_background_object(create_backdrop3_3751(3136, 0), 2);
    add_background_object(create_backdrop4_3754(3232, 160), 2);
    add_background_object(create_backdrop_3753(3008, 288), 2);
    add_background_object(create_backdrop3_3751(3008, 0), 2);
    add_background_object(create_backdrop2_3752(2208, 160), 2);
    add_background_object(create_backdrop2_3752(2208, 32), 2);
    add_background_object(create_backdrop4_3754(2880, 32), 2);
    add_background_object(create_backdrop4_3754(2880, 160), 2);
    add_background_object(create_backdrop3_3751(2240, 0), 2);
    add_background_object(create_backdrop_3753(2240, 288), 2);
    add_background_object(create_backdrop_3753(2624, 288), 2);
    add_background_object(create_backdrop3_3751(2624, 0), 2);
    add_background_object(create_backdrop_3753(2496, 288), 2);
    add_background_object(create_backdrop3_3751(2496, 0), 2);
    add_background_object(create_backdrop_3753(2368, 288), 2);
    add_background_object(create_backdrop3_3751(2368, 0), 2);
    add_background_object(create_backdrop3_3751(2752, 0), 2);
    add_background_object(create_backdrop_3753(2752, 288), 2);
    add_background_object(create_backdrop2_3752(2560, 160), 2);
    add_background_object(create_backdrop2_3752(2560, 32), 2);
    add_background_object(create_backdrop4_3754(2528, 32), 2);
    add_background_object(create_backdrop4_3754(2528, 160), 2);
    add_background_object(create_fdpowercore1_3663(2392, 32), 2);
    add_background_object(create_fdcoreterminal_3664(2032, 560), 2);
    add_background_object(create_fdcoreterminal_3664(2288, 560), 2);
    add_background_object(create_fdcoreterminal_3664(2160, 560), 2);
    add_background_object(create_fdcoreterminal_3664(1776, 560), 2);
    add_background_object(create_fdcoreterminal_3664(1904, 560), 2);
    add_background_object(create_fdpowercore2_3661(2528, 448), 2);
    add_background_object(create_fdpowercore2_3661(2528, 384), 2);
    add_background_object(create_fdpowercore2_3661(2528, 576), 2);
    add_background_object(create_fdpowercore2_3661(2528, 512), 2);
    add_background_object(create_parallaxspaceback_3755(0, 0), 2);
    add_background_object(create_parallaxspaceback2_3756(0, 0), 2);
    add_background_object(create_parallaxspaceback3_3757(0, 0), 2);
    add_background_object(create_fdbackpipe_3697(320, 512), 2);
    add_background_object(create_fdbackpipe_3697(704, 512), 2);
    add_background_object(create_fdbackpipe_3697(0, 512), 2);
    add_background_object(create_fdbackpipe_3697(1088, 512), 2);
    add_background_object(create_fdbackpipe_3697(1472, 512), 2);
    add_background_object(create_fdbackpipe_3697(1664, 512), 2);
    add_background_object(create_fdbackpipe_3697(2432, 512), 2);
    add_background_object(create_fdpowercore5_3750(2664, 288), 2);
    add_background_object(create_fdpowercore5_3750(2408, 288), 2);
    add_background_object(create_fdpowercore5_3750(2664, 240), 2);
    add_background_object(create_fdpowercore5_3750(2408, 256), 2);
    add_background_object(create_fdpowercore5_3750(2664, 216), 2);
    add_background_object(create_fdpowercore5_3750(2408, 224), 2);
    add_background_object(create_fdpowercore5_3750(2664, 208), 2);
    add_background_object(create_fdpowercore5_3750(2408, 208), 2);
    add_background_object(create_fdpowercore5_3750(2536, 288), 2);
    add_background_object(create_fdpowercore5_3750(2536, 256), 2);
    add_background_object(create_fdpowercore5_3750(2536, 224), 2);
    add_background_object(create_fdpowercore5_3750(2536, 192), 2);
    add_background_object(create_fdpowercore5_3750(2664, 256), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(3536, -59), 2);
    add_object(create_link_352(88, -96), 2);
    add_object(create_objectcrystal_279(-275, 82), 2);
    add_object(create_objectcodec_354(-295, 108), 2);
    add_object(create_laddertop_357(-92, 567), 2);
    add_object(create_shieldearth_314(-140, 348), 2);
    add_object(create_shieldflameback_315(-96, 344), 2);
    add_object(create_shieldwood_313(-148, 340), 2);
    add_object(create_shieldmagnetic_317(-132, 348), 2);
    add_object(create_shieldwater_318(-84, 348), 2);
    add_object(create_shieldflamefront_316(-100, 348), 2);
    add_object(create_monitorkeystone_562(-216, 176), 2);
    add_object(create_objectjumppad_530(-80, 568), 2);
    add_object(create_objectfuel_528(-60, 556), 2);
    add_object(create_lockedlabdoorback_3506(-488, 864), 2);
    add_object(create_enemygatlingguntable_3604(3944, 616), 2);
    add_object(create_kingdomstone_3665(2560, 192), 2);
    add_object(create_computerterminal_3666(2040, 560), 2);
    add_object(create_computerterminal2_3668(2296, 560), 2);
    add_object(create_computerterminal2_3668(2168, 560), 2);
    add_object(create_computerterminal_3666(1784, 560), 2);
    add_object(create_computerterminal2_3668(1912, 560), 2);
    add_object(create_brevonmechbackground_2513(2052, 205), 2);
    add_object(create_brevonmechbackclaw_2515(1847, -139), 2);
    add_object(create_brevonmechbackarm_2516(1917, -149), 2);
    add_object(create_brevondummycape_3758(2687, 248), 2);
    add_object(create_bosstractorbeam_3759(2024, -104), 2);
    add_object(create_bosshealthbar1_3760(2432, 229), 2);
    add_object(create_bosshealthbar1_3760(2432, 237), 2);
    add_object(create_bosshealthbar1_3760(2432, 245), 2);
    add_object(create_bosshealthbar1_3760(2432, 253), 2);
    add_object(create_bosshealthbar1_3760(2432, 261), 2);
    add_object(create_bosshealthbar1_3760(2432, 269), 2);
    add_object(create_bosshealthbar1_3760(2432, 277), 2);
    add_object(create_bosshealthbar1_3760(2432, 285), 2);
    add_object(create_bosshealthbar1_3760(2432, 293), 2);
    add_object(create_bosshealthbar1_3760(2432, 301), 2);
    add_object(create_bosshealthbar2_3761(2688, 213), 2);
    add_object(create_bosshealthbar2_3761(2688, 221), 2);
    add_object(create_bosshealthbar2_3761(2688, 229), 2);
    add_object(create_bosshealthbar2_3761(2688, 237), 2);
    add_object(create_bosshealthbar2_3761(2688, 245), 2);
    add_object(create_bosshealthbar2_3761(2688, 253), 2);
    add_object(create_bosshealthbar2_3761(2688, 261), 2);
    add_object(create_bosshealthbar2_3761(2688, 269), 2);
    add_object(create_bosshealthbar2_3761(2688, 277), 2);
    add_object(create_bosshealthbar2_3761(2688, 285), 2);
    add_object(create_bosshealthbar2_3761(2688, 293), 2);
    add_object(create_bosshealthbar2_3761(2688, 301), 2);
    add_object(create_bosshealthbar2_3761(2688, 309), 2);
    add_object(create_bosshealthbar2_3761(2688, 317), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_fddeepcore8_3703(1792, -32), 3);
    add_background_object(create_fddeepcore12_3706(1792, 224), 3);
    add_background_object(create_fddeepcore4_3700(0, 248), 3);
    add_background_object(create_fddeepcore4_3700(128, 248), 3);
    add_background_object(create_fddeepcore4_3700(256, 248), 3);
    add_background_object(create_fddeepcore4_3700(384, 248), 3);
    add_background_object(create_fddeepcore4_3700(512, 248), 3);
    add_background_object(create_fddeepcore4_3700(640, 248), 3);
    add_background_object(create_fddeepcore4_3700(768, 248), 3);
    add_background_object(create_fddeepcore4_3700(896, 248), 3);
    add_background_object(create_fddeepcore4_3700(1024, 248), 3);
    add_background_object(create_fddeepcore4_3700(1152, 248), 3);
    add_background_object(create_fddeepcore4_3700(1280, 248), 3);
    add_background_object(create_fddeepcore4_3700(1408, 248), 3);
    add_background_object(create_fddeepcore4_3700(1536, 248), 3);
    add_background_object(create_fddeepcore4_3700(1664, 184), 3);
    add_background_object(create_fddeepcore12_3706(0, 376), 3);
    add_background_object(create_fddeepcore6_3701(3584, 328), 3);
    add_background_object(create_fddeepcore6_3701(3712, 328), 3);
    add_background_object(create_fddeepcore4_3700(528, 6272), 3);
    add_background_object(create_fddeepcore4_3700(528, 6144), 3);
    add_background_object(create_fddeepcore1_3709(3464, 0), 3);
    add_background_object(create_fddeepcore10_3710(3600, 0), 3);
    add_background_object(create_fddeepcore11_3705(3680, 0), 3);
    add_background_object(create_fddeepcore12_3706(3760, 0), 3);
    add_background_object(create_fddeepcore13_3711(3832, 0), 3);
    add_background_object(create_fddeepcore14_3712(3912, 0), 3);
    add_background_object(create_fddeepcore2_3713(3464, 144), 3);
    add_background_object(create_fddeepcore5_3704(3752, 144), 3);
    add_background_object(create_fddeepcore6_3701(3752, 224), 3);
    add_background_object(create_fddeepcore7_3708(3840, 96), 3);
    add_background_object(create_fddeepcore8_3703(3840, 48), 3);
    add_background_object(create_fddeepcore9_3707(3904, 144), 3);
    add_background_object(create_fddeepcore8_3703(3584, 584), 3);
    add_background_object(create_fddeepcore5_3704(3584, 520), 3);
    add_background_object(create_fddeepcore4_3700(3648, 392), 3);
    add_background_object(create_fddeepcore8_3703(3712, 584), 3);
    add_background_object(create_fddeepcore15_3715(3840, 584), 3);
    add_background_object(create_fddeepcore5_3704(3712, 520), 3);
    add_background_object(create_fddeepcore12_3706(3840, 456), 3);
    add_background_object(create_fddeepcore10_3710(3776, 456), 3);
    add_background_object(create_fddeepcore10_3710(3776, 328), 3);
    add_background_object(create_fddeepcore12_3706(3840, 328), 3);
    add_background_object(create_fddeepcore9_3707(3584, 456), 3);
    add_background_object(create_fddeepcore9_3707(3584, 328), 3);
    add_background_object(create_fddeepcore11_3705(3520, 328), 3);
    add_background_object(create_fddeepcore11_3705(3520, 456), 3);
    add_background_object(create_fddeepcore16_3716(3520, 584), 3);
    add_background_object(create_fddeepcore13_3711(3520, 296), 3);
    add_background_object(create_fddeepcore7_3708(3584, 296), 3);
    add_background_object(create_fddeepcore7_3708(3712, 296), 3);
    add_background_object(create_fddeepcore14_3712(3840, 296), 3);
    add_background_object(create_fddeepcore4_3700(528, 6016), 3);
    add_background_object(create_fdladder_3448(3464, 488), 3);
    add_background_object(create_fdladder_3448(3464, 520), 3);
    add_background_object(create_fdladder_3448(3464, 552), 3);
    add_background_object(create_fdladder_3448(3464, 584), 3);
    add_background_object(create_fddeepcore8_3703(0, 416), 3);
    add_background_object(create_fddeepcore8_3703(128, 416), 3);
    add_background_object(create_fddeepcore8_3703(256, 416), 3);
    add_background_object(create_fddeepcore8_3703(384, 416), 3);
    add_background_object(create_fddeepcore6_3701(4024, 528), 3);
    add_background_object(create_fddeepcore20_3721(4152, 528), 3);
    add_background_object(create_fddeepcore19_3720(3960, 528), 3);
    add_background_object(create_fddeepcore9_3707(4152, 400), 3);
    add_background_object(create_fddeepcore10_3710(3960, 400), 3);
    add_background_object(create_fddeepcore21_3722(3960, 336), 3);
    add_background_object(create_fddeepcore5_3704(4024, 336), 3);
    add_background_object(create_fddeepcore22_3723(4152, 336), 3);
    add_background_object(create_fddeepcore2_3713(4024, 400), 3);
    add_background_object(create_fdcurve3_3531(4080, 208), 3);
    add_background_object(create_fdcurve4_3533(4160, 208), 3);
    add_background_object(create_fddeepcore7_3708(384, 640), 3);
    add_background_object(create_fddeepcore7_3708(256, 640), 3);
    add_background_object(create_fddeepcore7_3708(128, 640), 3);
    add_background_object(create_fddeepcore7_3708(0, 640), 3);
    add_background_object(create_fddeepcore6_3701(0, 672), 3);
    add_background_object(create_fddeepcore6_3701(128, 672), 3);
    add_background_object(create_fddeepcore6_3701(256, 672), 3);
    add_background_object(create_fddeepcore6_3701(384, 672), 3);
    add_background_object(create_fddeepcore4_3700(0, 0), 3);
    add_background_object(create_fddeepcore4_3700(0, 128), 3);
    add_background_object(create_fddeepcore5_3704(0, 352), 3);
    add_background_object(create_fddeepcore5_3704(128, 352), 3);
    add_background_object(create_fddeepcore5_3704(256, 352), 3);
    add_background_object(create_fddeepcore5_3704(384, 352), 3);
    add_background_object(create_fddeepcore4_3700(128, 0), 3);
    add_background_object(create_fddeepcore4_3700(128, 128), 3);
    add_background_object(create_fddeepcore4_3700(256, 0), 3);
    add_background_object(create_fddeepcore4_3700(256, 128), 3);
    add_background_object(create_fddeepcore4_3700(384, 0), 3);
    add_background_object(create_fddeepcore4_3700(384, 128), 3);
    add_background_object(create_fddeepcore15_3715(0, 504), 3);
    add_background_object(create_fddeepcore7_3708(896, 640), 3);
    add_background_object(create_fddeepcore7_3708(768, 640), 3);
    add_background_object(create_fddeepcore7_3708(640, 640), 3);
    add_background_object(create_fddeepcore7_3708(512, 640), 3);
    add_background_object(create_fddeepcore6_3701(512, 672), 3);
    add_background_object(create_fddeepcore6_3701(640, 672), 3);
    add_background_object(create_fddeepcore6_3701(768, 672), 3);
    add_background_object(create_fddeepcore6_3701(896, 672), 3);
    add_background_object(create_fddeepcore8_3703(512, 416), 3);
    add_background_object(create_fddeepcore8_3703(640, 416), 3);
    add_background_object(create_fddeepcore5_3704(512, 352), 3);
    add_background_object(create_fddeepcore5_3704(640, 352), 3);
    add_background_object(create_fddeepcore4_3700(512, 0), 3);
    add_background_object(create_fddeepcore4_3700(512, 128), 3);
    add_background_object(create_fddeepcore4_3700(640, 0), 3);
    add_background_object(create_fddeepcore4_3700(640, 128), 3);
    add_background_object(create_fddeepcore8_3703(768, 416), 3);
    add_background_object(create_fddeepcore8_3703(896, 416), 3);
    add_background_object(create_fddeepcore5_3704(768, 352), 3);
    add_background_object(create_fddeepcore5_3704(896, 352), 3);
    add_background_object(create_fddeepcore4_3700(768, 0), 3);
    add_background_object(create_fddeepcore4_3700(768, 128), 3);
    add_background_object(create_fddeepcore4_3700(896, 0), 3);
    add_background_object(create_fddeepcore4_3700(896, 128), 3);
    add_background_object(create_fdcurve2_3534(3992, 208), 3);
    add_background_object(create_fddeepcore7_3708(1280, 640), 3);
    add_background_object(create_fddeepcore7_3708(1152, 640), 3);
    add_background_object(create_fddeepcore7_3708(1024, 640), 3);
    add_background_object(create_fddeepcore6_3701(1024, 672), 3);
    add_background_object(create_fddeepcore6_3701(1152, 672), 3);
    add_background_object(create_fddeepcore6_3701(1280, 672), 3);
    add_background_object(create_fddeepcore8_3703(1024, 416), 3);
    add_background_object(create_fddeepcore5_3704(1024, 352), 3);
    add_background_object(create_fddeepcore4_3700(1024, 0), 3);
    add_background_object(create_fddeepcore4_3700(1024, 128), 3);
    add_background_object(create_fddeepcore8_3703(1152, 416), 3);
    add_background_object(create_fddeepcore8_3703(1280, 416), 3);
    add_background_object(create_fddeepcore5_3704(1152, 352), 3);
    add_background_object(create_fddeepcore5_3704(1280, 352), 3);
    add_background_object(create_fddeepcore4_3700(1152, 0), 3);
    add_background_object(create_fddeepcore4_3700(1152, 128), 3);
    add_background_object(create_fddeepcore4_3700(1280, 0), 3);
    add_background_object(create_fddeepcore4_3700(1280, 128), 3);
    add_background_object(create_fddeepcore7_3708(1664, 640), 3);
    add_background_object(create_fddeepcore7_3708(1536, 640), 3);
    add_background_object(create_fddeepcore7_3708(1408, 640), 3);
    add_background_object(create_fddeepcore6_3701(1408, 672), 3);
    add_background_object(create_fddeepcore6_3701(1536, 672), 3);
    add_background_object(create_fddeepcore6_3701(1664, 672), 3);
    add_background_object(create_fddeepcore8_3703(1408, 416), 3);
    add_background_object(create_fddeepcore5_3704(1408, 352), 3);
    add_background_object(create_fddeepcore4_3700(1408, 0), 3);
    add_background_object(create_fddeepcore4_3700(1408, 128), 3);
    add_background_object(create_fddeepcore8_3703(1536, 416), 3);
    add_background_object(create_fddeepcore8_3703(1664, 352), 3);
    add_background_object(create_fddeepcore5_3704(1536, 352), 3);
    add_background_object(create_fddeepcore5_3704(1664, 288), 3);
    add_background_object(create_fddeepcore4_3700(1536, 0), 3);
    add_background_object(create_fddeepcore4_3700(1536, 128), 3);
    add_background_object(create_fddeepcore4_3700(1664, 0), 3);
    add_background_object(create_fddeepcore4_3700(1664, 128), 3);
    add_background_object(create_fddeepcore8_3703(1792, 352), 3);
    add_background_object(create_fddeepcore7_3708(1792, 320), 3);
    add_background_object(create_fddeepcore10_3710(1728, -32), 3);
    add_background_object(create_fddeepcore12_3706(1792, 96), 3);
    add_background_object(create_fddeepcore12_3706(1792, -32), 3);
    add_background_object(create_fddeepcore10_3710(1728, 96), 3);
    add_background_object(create_fddeepcore10_3710(1728, 224), 3);
    add_background_object(create_fddeepcore7_3708(1792, 640), 3);
    add_background_object(create_fddeepcore6_3701(1792, 672), 3);
    add_background_object(create_fddeepcore8_3703(1920, 352), 3);
    add_background_object(create_fddeepcore7_3708(1920, 320), 3);
    add_background_object(create_fddeepcore7_3708(1920, 640), 3);
    add_background_object(create_fddeepcore6_3701(1920, 672), 3);
    add_background_object(create_fddeepcore8_3703(2048, 352), 3);
    add_background_object(create_fddeepcore7_3708(2048, 320), 3);
    add_background_object(create_fddeepcore7_3708(2048, 640), 3);
    add_background_object(create_fddeepcore6_3701(2048, 672), 3);
    add_background_object(create_fddeepcore8_3703(2176, 352), 3);
    add_background_object(create_fddeepcore7_3708(2176, 320), 3);
    add_background_object(create_fddeepcore8_3703(2304, 352), 3);
    add_background_object(create_fddeepcore7_3708(2304, 320), 3);
    add_background_object(create_fddeepcore7_3708(2176, 640), 3);
    add_background_object(create_fddeepcore6_3701(2176, 672), 3);
    add_background_object(create_fddeepcore7_3708(2304, 640), 3);
    add_background_object(create_fddeepcore6_3701(2304, 672), 3);
    add_background_object(create_fddeepcore7_3708(2432, 640), 3);
    add_background_object(create_fddeepcore6_3701(2432, 672), 3);
    add_background_object(create_fddeepcore7_3708(2560, 640), 3);
    add_background_object(create_fddeepcore6_3701(2560, 672), 3);
    add_background_object(create_fddeepcore8_3703(2688, 352), 3);
    add_background_object(create_fddeepcore7_3708(2688, 320), 3);
    add_background_object(create_fddeepcore8_3703(2816, 352), 3);
    add_background_object(create_fddeepcore7_3708(2816, 320), 3);
    add_background_object(create_fddeepcore7_3708(2688, 640), 3);
    add_background_object(create_fddeepcore6_3701(2688, 672), 3);
    add_background_object(create_fddeepcore7_3708(2816, 640), 3);
    add_background_object(create_fddeepcore6_3701(2816, 672), 3);
    add_background_object(create_fddeepcore14_3712(2432, 320), 3);
    add_background_object(create_fddeepcore13_3711(2624, 320), 3);
    add_background_object(create_fddeepcore15_3715(2432, 352), 3);
    add_background_object(create_fddeepcore16_3716(2624, 352), 3);
    add_background_object(create_fddeepcore8_3703(2944, 352), 3);
    add_background_object(create_fddeepcore7_3708(2944, 320), 3);
    add_background_object(create_fddeepcore8_3703(3072, 352), 3);
    add_background_object(create_fddeepcore7_3708(3072, 320), 3);
    add_background_object(create_fddeepcore8_3703(3200, 352), 3);
    add_background_object(create_fddeepcore7_3708(3200, 320), 3);
    add_background_object(create_fddeepcore7_3708(2944, 640), 3);
    add_background_object(create_fddeepcore6_3701(2944, 672), 3);
    add_background_object(create_fddeepcore9_3707(3328, 512), 3);
    add_background_object(create_fddeepcore11_3705(3264, 512), 3);
    add_background_object(create_fddeepcore9_3707(3328, 384), 3);
    add_background_object(create_fddeepcore9_3707(3328, 256), 3);
    add_background_object(create_fddeepcore9_3707(3328, 128), 3);
    add_background_object(create_fddeepcore9_3707(3328, 0), 3);
    add_background_object(create_fddeepcore11_3705(3264, 0), 3);
    add_background_object(create_fddeepcore11_3705(3264, 128), 3);
    add_background_object(create_fddeepcore11_3705(3264, 256), 3);
    add_background_object(create_fddeepcore11_3705(3264, 384), 3);
    add_background_object(create_fdlasertunnelpipe2_3725(2624, 384), 3);
    add_background_object(create_fdlasertunnelpipe3_3726(2432, 384), 3);
    add_background_object(create_fdlasertunnelpipe2_3725(2624, 448), 3);
    add_background_object(create_fdlasertunnelpipe2_3725(2624, 512), 3);
    add_background_object(create_fdlasertunnelpipe2_3725(2624, 576), 3);
    add_background_object(create_fdlasertunnelpipe3_3726(2432, 448), 3);
    add_background_object(create_fddeepcore17_3717(2432, 512), 3);
    add_background_object(create_fdcurve2_3534(1856, 224), 3);
    add_background_object(create_fdcurve4_3533(3168, 224), 3);
    add_background_object(create_fdlasertunnelpipe3_3726(1664, 384), 3);
    add_background_object(create_fdlasertunnelpipe3_3726(1664, 448), 3);
    add_background_object(create_fddeepcore17_3717(1664, 512), 3);
    add_background_object(create_fdlasertunnelpipe2_3725(2880, 384), 3);
    add_background_object(create_fdlasertunnelpipe2_3725(2880, 448), 3);
    add_background_object(create_fdlasertunnelpipe2_3725(2880, 512), 3);
    add_background_object(create_fdlasertunnelpipe2_3725(2880, 576), 3);
    add_background_object(create_fddeepcore14_3712(3072, 640), 3);
    add_background_object(create_fddeepcore12_3706(3072, 672), 3);
    add_background_object(create_fddeepcore9_3707(3328, 640), 3);
    add_background_object(create_fddeepcore11_3705(3264, 640), 3);
    add_background_object(create_fddeepcore17_3717(1088, 448), 3);
    add_background_object(create_fddeepcore17_3717(1472, 448), 3);
    add_background_object(create_fddeepcore17_3717(704, 448), 3);
    add_background_object(create_fddeepcore17_3717(320, 448), 3);
    add_background_object(create_fdpowercore2_3661(2656, 256), 3);
    add_background_object(create_fdpowercore3_3662(2400, 192), 3);
    add_background_object(create_fdpowercore2_3661(2400, 256), 3);
    add_background_object(create_fdpowercore3_3662(2656, 192), 3);
    add_background_object(create_fdpowercore2_3661(2528, 128), 3);
    add_background_object(create_fdpowercore3_3662(2528, 64), 3);
    add_background_object(create_fdpowercore2_3661(2528, 192), 3);
    add_background_object(create_fdpowercore2_3661(2528, 256), 3);
    add_background_object(create_fdcurve3_3531(3168, 0), 3);
    add_background_object(create_fdcurve1_3532(1856, 0), 3);
    add_background_object(create_fddeepcore8_3703(3200, -32), 3);
    add_background_object(create_fddeepcore8_3703(3072, -32), 3);
    add_background_object(create_fddeepcore8_3703(2944, -32), 3);
    add_background_object(create_fddeepcore8_3703(2816, -32), 3);
    add_background_object(create_fddeepcore8_3703(2688, -32), 3);
    add_background_object(create_fddeepcore8_3703(2560, -32), 3);
    add_background_object(create_fddeepcore8_3703(2432, -32), 3);
    add_background_object(create_fddeepcore8_3703(2304, -32), 3);
    add_background_object(create_fddeepcore8_3703(2176, -32), 3);
    add_background_object(create_fddeepcore8_3703(2048, -32), 3);
    add_background_object(create_fddeepcore8_3703(1920, -32), 3);
    add_object(create_brevonmechbackwing_2538(2551, -91), 3);
    add_object(create_brevonmechbackwing_2538(2591, -91), 3);
    add_object(create_brevonmechbackwing_2538(2631, -91), 3);
    add_object(create_brevonmechbackwing_2538(2671, -91), 3);
    add_object(create_objecttransporterstart_3412(-360, 1072), 3);
    add_object(create_enemydronelaser_2127(-340, 734), 3);
    add_object(create_playerstartingpoint_358(37, 621), 3);
    add_object(create_dialogdata_3762(-168, 464), 3);
    add_object(create_objecttransporternode90_3428(-360, 1008), 3);
    add_object(create_objecttransporternode180_3426(-424, 1072), 3);
    add_object(create_objecttransporternode270_3417(-360, 1136), 3);
    add_object(create_objecttransporternode0_3415(-296, 1072), 3);
    add_object(create_objecttransporterstart2_3416(-362, 1078), 3);
    add_object(create_objecttransporter_3344(-360, 1176), 3);
    add_object(create_enemyelitespawner_3345(-489, 1231), 3);
    add_object(create_lockeddoorterminal_2606(-712, 1864), 3);
    add_object(create_labdoorback_3500(-384, 1304), 3);
    add_object(create_lockedlabdoorbarrier_3541(-488, 800), 3);
    add_object(create_labdoorfront_3507(-384, 1304), 3);
    add_object(create_objectkeycard_2643(-400, 880), 3);
    add_object(create_objecttransporterwave_3414(-472, 1272), 3);
    add_object(create_enemydnalaser_2236(-504, 776), 3);
    add_object(create_layerchangeswitch_404(-296, 880), 3);
    add_object(create_layerchangeswitch2_1239(-328, 880), 3);
    add_object(create_objectsiren_3337(-305, 671), 3);
    add_object(create_enemygatlinggunright_3634(3944, 696), 3);
    add_object(create_enemygatlinggunleft_3635(3944, 664), 3);
    add_object(create_enemygatlinggun_3650(3968, 680), 3);
    add_object(create_enemygatlinggunbarrel_3651(3968, 680), 3);
    add_object(create_enemygatlinggun2_3652(3968, 680), 3);
    add_object(create_laddertop_357(3492, 511), 3);
    add_object(create_effectterreonwarning_2986(4124, 616), 3);
    add_object(create_enemyspiderbeamer_3729(4231, 632), 3);
    add_object(create_cameralimitbossleft_421(1856, 144), 3);
    add_object(create_cameralimitbossright_422(3263, 152), 3);
    add_object(create_cameralimitbosstop_423(2016, 8), 3);
    add_object(create_cameralimitbossbottom_420(2000, 351), 3);
    add_object(create_gimmickantigravspawner_3320(2528, 632), 3);
    add_object(create_gimmickantigravspawner_3320(2592, 632), 3);
    add_object(create_fdlasertunnelplatform_3728(2496, 320), 3);
    add_object(create_fdlasertunnelplatform_3728(2560, 320), 3);
    add_object(create_brevonsuitlaser_3741(-18, 920), 3);
    add_object(create_brevonsuitspin_3763(96, 840), 3);
    add_object(create_bossenergypunch_3764(23, 840), 3);
    add_object(create_brevonsuitbackgun_3765(2096, 232), 3);
    add_object(create_brevonsuitbackarm_3766(2120, 197), 3);
    add_object(create_brevonsuitbackleg_3767(2123, 241), 3);
    add_object(create_brevonsuitbackknee_3768(2097, 265), 3);
    add_object(create_brevonsuitbackfoot_3769(2084, 291), 3);
    add_object(create_brevonsuithead_3770(2157, -104), 3);
    add_object(create_brevonsuitpelvis_3771(2133, 240), 3);
    add_object(create_brevonsuitfrontleg_3772(2140, 241), 3);
    add_object(create_brevonsuitfrontknee_3773(2161, 265), 3);
    add_object(create_brevonsuitfrontfoot_3774(2148, 291), 3);
    add_object(create_brevonsuittorso_3775(2157, 211), 3);
    add_object(create_brevonsuitfrontarm_3776(2160, 205), 3);
    add_object(create_brevonsuitfrontgun_3777(2136, 240), 3);
    add_object(create_brevonmechbackshoulder_2514(1620, 212), 3);
    add_object(create_brevonmechabdomen_2540(1528, 188), 3);
    add_object(create_brevonmechtorso_2543(1606, 195), 3);
    add_object(create_brevonmechhead_2544(1622, 215), 3);
    add_object(create_brevonmechweakspot_3316(1623, 215), 3);
    add_object(create_brevonmechturret_3333(1480, -32), 3);
    add_object(create_brevonmechfrontleg_2539(1717, -149), 3);
    add_object(create_brevonmechfrontleg2_2541(1719, -170), 3);
    add_object(create_brevonmechfrontknee_2542(1641, -179), 3);
    add_object(create_brevonmechfrontfoot_2545(1616, -143), 3);
    add_object(create_brevonmechanimations_2551(1448, -96), 3);
    add_object(create_brevon_3683(2795, 319), 3);
    add_object(create_enemyelitemask_2511(-468, 752), 3);
    add_object(create_enemyspiderbeamer_3729(1663, 544), 3);
    add_object(create_enemyspiderbeamer_3729(1503, 512), 3);
    add_object(create_brevonmechfrontwing_2546(2343, -91), 3);
    add_object(create_brevonmechfrontwing_2546(2383, -91), 3);
    add_object(create_brevonmechfrontwing_2546(2423, -91), 3);
    add_object(create_brevonmechfrontwing_2546(2463, -91), 3);
    add_object(create_brevonmechfrontarm_2548(1807, -142), 3);
    add_object(create_enemyspiderbeamer_3729(735, 512), 3);
    add_object(create_brevonmechfrontshoulder_2547(1500, 212), 3);
    add_object(create_brevonmechaxle_2550(1853, -112), 3);
    add_object(create_brevonmechfrontclaw_2549(1738, -135), 3);
    add_object(create_brevonmechcharge_3325(1224, -120), 3);
    add_object(create_brevonsuitwallleft_3778(1855, 288), 3);
    add_object(create_brevonsuitwallright_3779(3264, 288), 3);
    add_object(create_brevonweaponarm_3780(2088, -192), 3);
    add_object(create_brevonhitbox_3781(2280, -65), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
    add_background_object(create_fddeepcore8_3703(2432, 352), 4);
    add_background_object(create_fddeepcore8_3703(2560, 352), 4);
    add_background_object(create_fddeepcore7_3708(2432, 320), 4);
    add_background_object(create_fddeepcore7_3708(2560, 320), 4);
    add_background_object(create_fdpowercore4_3782(2368, 480), 4);
    add_background_object(create_fdpowercore4_3782(2304, 480), 4);
    add_background_object(create_fdpowercore4_3782(2240, 480), 4);
    add_background_object(create_fdpowercore4_3782(2176, 480), 4);
    add_background_object(create_fdpowercore4_3782(2112, 480), 4);
    add_background_object(create_fdpowercore4_3782(2048, 480), 4);
    add_background_object(create_fdpowercore4_3782(1984, 480), 4);
    add_background_object(create_fdpowercore4_3782(1920, 480), 4);
    add_background_object(create_fdpowercore4_3782(1856, 480), 4);
    add_background_object(create_fdpowercore4_3782(1792, 480), 4);
    add_background_object(create_fdpowercore4_3782(1728, 480), 4);
    add_background_object(create_fdpowercore2_3661(2240, 384), 4);
    add_background_object(create_fdpowercore2_3661(2240, 448), 4);
    add_background_object(create_fdpowercore2_3661(2240, 512), 4);
    add_background_object(create_fdpowercore2_3661(2240, 576), 4);
    add_background_object(create_fdpowercore2_3661(2240, 640), 4);
    add_background_object(create_fdpowercore2_3661(1856, 384), 4);
    add_background_object(create_fdpowercore2_3661(1856, 448), 4);
    add_background_object(create_fdpowercore2_3661(1856, 512), 4);
    add_background_object(create_fdpowercore2_3661(1856, 576), 4);
    add_background_object(create_fdpowercore2_3661(1856, 640), 4);
    add_background_object(create_fdpowercore2_3661(2688, 384), 4);
    add_background_object(create_fdpowercore2_3661(2688, 448), 4);
    add_background_object(create_fdpowercore2_3661(2688, 512), 4);
    add_background_object(create_fdpowercore2_3661(2688, 576), 4);
    add_background_object(create_fdpowercore2_3661(2688, 640), 4);
    add_background_object(create_fdpowercore4_3782(2752, 512), 4);
    add_background_object(create_fdpowercore4_3782(2688, 512), 4);
    add_background_object(create_fdpowercore4_3782(2816, 512), 4);
    add_background_object(create_fddeepcorenosolid2_3783(1792, -32), 4);
    add_background_object(create_fddeepcore7_3708(2688, 320), 4);
    add_background_object(create_fddeepcore7_3708(2816, 320), 4);
    add_background_object(create_fddeepcore7_3708(2944, 320), 4);
    add_background_object(create_fddeepcore7_3708(3072, 320), 4);
    add_background_object(create_fddeepcore7_3708(3200, 320), 4);
    add_background_object(create_fddeepcore7_3708(1792, 320), 4);
    add_background_object(create_fddeepcore7_3708(1920, 320), 4);
    add_background_object(create_fddeepcore7_3708(2048, 320), 4);
    add_background_object(create_fddeepcore7_3708(2176, 320), 4);
    add_background_object(create_fddeepcore7_3708(2304, 320), 4);
    add_background_object(create_fddeepcorenosolid1_3784(3264, 0), 4);
    add_background_object(create_fddeepcorenosolid1_3784(3264, 128), 4);
    add_background_object(create_fddeepcorenosolid1_3784(3264, 256), 4);
    add_background_object(create_fddeepcorenosolid2_3783(1792, 96), 4);
    add_background_object(create_fddeepcorenosolid2_3783(1792, 224), 4);
    add_object(create_lockedlabdoorfront_3544(-488, 864), 4);
    add_object(create_lockeddoorseal_2672(-484, 880), 4);
    add_object(create_effectbrevonmechwarning2_3315(1940, 288), 4);
    add_object(create_effectbrevonmechwarning2_3315(1940, 240), 4);
    add_object(create_effectbrevonmechwarning2_3315(1940, 192), 4);
    add_object(create_effectbrevonmechwarning2_3315(1940, 144), 4);
    add_object(create_effectbrevonsuitwarning_3745(2052, -72), 4);
    add_object(create_brevonsuitaura_3785(32, 1111), 4);
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
    add_object(create_hazardspikesleft_3730(-128, 392), 5);
    add_object(create_hazardspikesright_3431(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_gimmickhangingidlesensor_740(702, -150), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameratriggerboss_424(2952, 1872), 5);
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
    add_object(create_dialogbox_566(0, 8), 6);
    add_object(create_dialogbox2_567(-152, 70), 6);
    add_object(create_dialogarrow_568(136, 40), 6);
    add_object(create_dialogtext_569(-144, 8), 6);
    add_object(create_dialogtext2_3786(184, 784), 6);
    add_object(create_guikeycards_2673(38, 231), 6);
    add_object(create_guikeycardicon_2674(16, 228), 6);
    add_object(create_subtitletext_3433(-160, 176), 6);
    add_object(create_subtitledata_3787(-168, 512), 6);
    add_object(create_timebonustotal_460(-256, -72), 7);
    add_object(create_levelcardfade_461(0, 0), 7);
    add_object(create_levelcardfade2_24(-328, -336), 7);
    add_object(create_levelcardactclear4_846(-48, 212), 7);
    add_object(create_levelcardactclear2_848(-88, 88), 7);
    add_object(create_levelcardactclear3_849(-72, 88), 7);
    add_object(create_totalcrystals_854(44, 230), 7);
    add_object(create_levelcardbonus1_850(-12, 109), 7);
    add_object(create_levelcardbonus2_851(76, 109), 7);
    add_object(create_levelcardactclear1_847(-160, 24), 7);
    add_object(create_levelcardgameover_462(0, 256), 7);
    add_object(create_guilifebasemeter_125(0, 0), 7);
    add_object(create_levelcardintro1_464(16, -240), 7);
    add_object(create_levelcardintro3_760(0, 248), 7);
    add_object(create_levelcardintro2_761(0, 248), 7);
    add_object(create_redflash_3788(0, 0), 7);
    add_object(create_brevoncrosshair_3789(-152, -136), 7);
    add_object(create_brevoncrosshair6_3790(32, 272), 7);
    add_object(create_brevoncrosshair7_3791(3, 253), 7);
    add_object(create_brevoncrosshair2_3792(-112, -135), 7);
    add_object(create_brevoncrosshair3_3793(-112, -127), 7);
    add_object(create_brevoncrosshair4_3794(-119, -128), 7);
    add_object(create_brevoncrosshair5_3795(-103, -120), 7);
    add_object(create_sarassteampluginfreedomplanet_26(-192, -128), 7);
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
    loop_sound_idle5_running = false;
    loop_sound_idle5_index = 0;
    loop_sound_idle7_running = false;
    loop_sound_idle7_index = 0;
    loop_spawn_rings_running = false;
    loop_spawn_rings_index = 0;
    loop_gd_running = false;
    loop_gd_index = 0;
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
    loop_shockwave_running = false;
    loop_shockwave_index = 0;
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
    loop_process_call_stop_music_running = false;
    loop_process_call_stop_music_index = 0;
    static DynamicLoops frame_loops;
    loops = &frame_loops;
    static bool loops_initialized = false;
    if (!loops_initialized) {
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_72, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_72, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_72, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_72, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_72, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_72, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_72, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_72, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_72, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_72, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_72, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_72, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_72, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_72, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_72, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_72, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_72, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_72, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_72, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_72, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_72, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_72, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_72, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_72, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_72, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_72, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_72, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_72, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_72, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_72, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_72, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_72, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_72, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_72, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_72, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_72, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_72, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_72, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_72, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_72, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_72, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_72, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_72, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_72, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_72, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_72, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_72, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_72, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_72, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_72, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_72, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_72, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_72, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    not_always_43_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_789_13 = loop_count;
    not_always_1508_19 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_1388_13 = loop_count;
    not_always_44_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 = true;
    once_condition_1728_72 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_sound_events_milla_1 = false;
    not_always_1051_14 = loop_count;
    not_always_1449_13 = loop_count;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_449_13 = loop_count;
    not_always_97_0 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_ending_1 = false;
    not_always_1517_19 = loop_count;
    not_always_1708_72 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_826_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    not_always_68_13 = loop_count;
    not_always_1149_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    not_always_64_0 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    group_main_engine_level_specific_methods_cutscenes_approach_brevon_1 = false;
    not_always_100_0 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    not_always_1420_13 = loop_count;
    not_always_121_0 = loop_count;
    once_condition_2009_72 = false;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_814_13 = loop_count;
    group_main_engine_level_specific_methods_play_bgm_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_96_0 = loop_count;
    not_always_130_0 = loop_count;
    group_main_engine_level_specific_methods_stage_clear_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    not_always_1448_13 = loop_count;
    not_always_2458_72 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_46_13 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_brevon_conversation_1 = false;
    group_main_engine_level_specific_methods_cutscenes_red_siren_effect_1 = false;
    not_always_1450_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    not_always_1832_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = true;
    not_always_53_13 = loop_count;
    not_always_1047_14 = loop_count;
    not_always_1531_19 = loop_count;
    once_condition_63_0 = false;
    once_condition_1522_19 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    not_always_1447_13 = loop_count;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1 = false;
    group_main_engine_level_specific_methods_cutscenes_power_suit_defeated_1 = false;
    not_always_101_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_422_13 = loop_count;
    not_always_744_13 = loop_count;
    once_condition_1531_23 = false;
    not_always_522_13 = loop_count;
    once_condition_557_13 = false;
    once_condition_64_13 = false;
    not_always_1333_14 = loop_count;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1148_14 = loop_count;
    once_condition_57_14 = false;
    once_condition_38_14 = false;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    once_condition_40_14 = false;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    not_always_103_0 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_lilac_1 = false;
    group_debug_mode_debugging_1 = false;
    once_condition_1599_72 = false;
    not_always_69_13 = loop_count;
    not_always_1425_13 = loop_count;
    once_condition_41_14 = false;
    not_always_1049_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    not_always_45_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_57_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_450_13 = loop_count;
    not_always_52_13 = loop_count;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    not_always_1831_16 = loop_count;
    once_condition_138_0 = false;
    not_always_99_0 = loop_count;
    not_always_1518_19 = loop_count;
    group_mac_controls_1 = false;
    once_condition_1662_72 = false;
    not_always_172_8 = loop_count;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    not_always_558_13 = loop_count;
    not_always_1684_72 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_234_13 = loop_count;
    not_always_1516_19 = loop_count;
    not_always_553_13 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_dialog_system_1 = false;
    not_always_140_0 = loop_count;
    not_always_813_13 = loop_count;
    once_condition_2013_72 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = false;
    group_pause_1 = false;
    not_always_1050_14 = loop_count;
    not_always_1680_72 = loop_count;
    not_always_41_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1 = false;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_540_13 = loop_count;
    once_condition_65_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    not_always_1421_13 = loop_count;
    not_always_1687_72 = loop_count;
    not_always_70_13 = loop_count;
    not_always_606_14 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    not_always_2202_72 = loop_count;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    once_condition_2052_72 = false;
    once_condition_63_13 = false;
    group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_174_8 = loop_count;
    not_always_1048_14 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    group_main_engine_level_specific_methods_frame_transition_1 = false;
    once_condition_66_13 = false;
    not_always_1046_14 = loop_count;
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1 = true;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    once_condition_4_19 = false;
    not_always_1039_13 = loop_count;
    not_always_95_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    once_condition_59_14 = false;
    not_always_809_13 = loop_count;
    once_condition_48_13 = false;
    group_main_engine_level_specific_methods_bosses_boss_lord_brevon_brevon_defeated_ending_carol_1 = false;
    not_always_825_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1 = false;
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
    group_main_engine_level_specific_methods_cutscenes_restore_hud_and_star_background_1 = false;
    once_condition_1576_72 = false;
    once_condition_1932_72 = false;
    group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 = false;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    not_always_1683_72 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_1522_72 = loop_count;
    once_condition_2223_72 = false;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    not_always_98_0 = loop_count;
    once_condition_50_13 = false;
    not_always_560_14 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1 = false;
    not_always_1515_19 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_1514_19 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_mech_defeated_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_crosshair_1 = true;
    group_main_engine_global_methods_player_1 = true;
    once_condition_39_14 = false;
    not_always_59_13 = loop_count;
    not_always_1525_19 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_16051()
{
    // event 1551_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_save_map_1)) goto event_1551_73_end;
        qualifier_7.clear_selection();
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (loop_save_index))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (height))) { it.deselect(); continue; }
        }
        if (!qualifier_7.has_selection()) goto event_1551_73_end;
        ((INI*)get_instance(ini_3855_instances))->set_group(str_object_261+number_to_string(loop_save_index));
        ((INI*)get_instance(ini_3855_instances))->set_value(str_id_262, ((Active*)get_single(qualifier_7, default_active_instance))->alterables->values.get(0));
        ((INI*)get_instance(ini_3855_instances))->set_value(str_x_263, ((Active*)get_single(qualifier_7, default_active_instance))->get_x());
        ((INI*)get_instance(ini_3855_instances))->set_value(str_y_264, ((Active*)get_single(qualifier_7, default_active_instance))->get_y());
    }
    event_1551_73_end: ;
}
void Frames::event_func_16052()
{
    // event 1552_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_save_map_1)) goto event_1552_73_end;
        qualifier_8.clear_selection();
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (loop_save_index))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (height))) { it.deselect(); continue; }
        }
        if (!qualifier_8.has_selection()) goto event_1552_73_end;
        ((INI*)get_instance(ini_3855_instances))->set_group(str_object_261+number_to_string(loop_save_index));
        ((INI*)get_instance(ini_3855_instances))->set_value(str_id_262, ((Active*)get_single(qualifier_8, default_active_instance))->alterables->values.get(0));
        ((INI*)get_instance(ini_3855_instances))->set_value(str_x_263, ((Active*)get_single(qualifier_8, default_active_instance))->get_x());
        ((INI*)get_instance(ini_3855_instances))->set_value(str_y_264, ((Active*)get_single(qualifier_8, default_active_instance))->get_y());
    }
    event_1552_73_end: ;
}
void Frames::event_func_16053()
{
    // event 1553_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_save_map_1)) goto event_1553_73_end;
        qualifier_29.clear_selection();
        for (QualifierIterator it(qualifier_29); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (loop_save_index))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (height))) { it.deselect(); continue; }
        }
        if (!qualifier_29.has_selection()) goto event_1553_73_end;
        ((INI*)get_instance(ini_3855_instances))->set_group(str_object_261+number_to_string(loop_save_index));
        ((INI*)get_instance(ini_3855_instances))->set_value(str_id_262, ((Active*)get_single(qualifier_29, default_active_instance))->alterables->values.get(0));
        ((INI*)get_instance(ini_3855_instances))->set_value(str_x_263, ((Active*)get_single(qualifier_29, default_active_instance))->get_x());
        ((INI*)get_instance(ini_3855_instances))->set_value(str_y_264, ((Active*)get_single(qualifier_29, default_active_instance))->get_y());
    }
    event_1553_73_end: ;
}
void Frames::loop_save_73()
{
    event_func_16051();
    event_func_16052();
    event_func_16053();
}
void Frames::event_func_16054()
{
    // event 1773_73
    {
        if (!(group_main_engine_1)) goto event_1773_73_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) > (0))) goto event_1773_73_end;
        ((Active*)get_instance(guiscoretimerings_451_instances))->set_y(((Active*)get_instance(guiscoretimerings_451_instances))->get_y()+1);
        ((Active*)get_instance(guienergy_124_instances))->set_y(((Active*)get_instance(guienergy_124_instances))->get_y()+1);
        ((Counter*)get_instance(guirings_122_instances))->set_y(((Counter*)get_instance(guirings_122_instances))->get_y()+1);
        ((Counter*)get_instance(guilives_454_instances))->set_y(((Counter*)get_instance(guilives_454_instances))->get_y()+1);
        ((Active*)get_instance(guiicon_452_instances))->set_y(((Active*)get_instance(guiicon_452_instances))->get_y()+1);
        ((Active*)get_instance(guiicon_452_instances))->alterables->values.sub(0, 1);
        guipowercard_457_instances.clear_selection();
        for (ObjectIterator it(guipowercard_457_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+1);
        }
        ((Active*)get_instance(guitimer_564_instances))->set_y(((Active*)get_instance(guitimer_564_instances))->get_y()+1);
        ((Counter*)get_instance(guitimerm_364_instances))->set_y(((Counter*)get_instance(guitimerm_364_instances))->get_y()+1);
        ((Counter*)get_instance(guitimers_362_instances))->set_y(((Counter*)get_instance(guitimers_362_instances))->get_y()+1);
        ((Counter*)get_instance(guitimermilli_360_instances))->set_y(((Counter*)get_instance(guitimermilli_360_instances))->get_y()+1);
        ((Counter*)get_instance(guitimermilli2_361_instances))->set_y(((Counter*)get_instance(guitimermilli2_361_instances))->get_y()+1);
        ((Counter*)get_instance(guitimers2_363_instances))->set_y(((Counter*)get_instance(guitimers2_363_instances))->get_y()+1);
        ((Counter*)get_instance(guitimerm2_365_instances))->set_y(((Counter*)get_instance(guitimerm2_365_instances))->get_y()+1);
    }
    event_1773_73_end: ;
}
void Frames::loop_gui_shiftdown_73()
{
    event_func_16054();
}
void Frames::event_func_16055()
{
    // event 2049_73
    {
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
            ((Active*)*it)->alterables->values.set(3, -1);
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->alterables->values.set(7, 3);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(4, 0);
        }
        media.resume_samples();
        media.stop_samples();
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(9, global_values->get(14));
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(14, global_values->get(15));
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 0);
        set_lives(get_max(global_values->get(28)-1, 1));
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 7)+1, 1, 7);
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 3)+1, 3, 3);
    }
    event_2049_73_end: ;
}
void Frames::loop_restart_73()
{
    event_func_86();
    event_func_16055();
}
void Frames::loop_petal_loss_73()
{
    event_func_1181();
}
void Frames::event_func_16056()
{
    // event 824_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1)) goto event_824_73_end;
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->advance_movement(+1);
            ((Active*)*it)->alterables->flags.enable(0);
            ((Active*)*it)->set_direction(8+(loop_dig_crystals_index/math_helper/2+1)*((loop_dig_crystals_index%math_helper%2)*2-1));
        }
    }
    event_824_73_end: ;
}
void Frames::loop_dig_crystals_73()
{
    event_func_16056();
}
void Frames::event_func_16057()
{
    // event 1059_73
    {
        if (!(group_main_engine_1)) goto event_1059_73_end;
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+20))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!objectcrystal_279_instances.has_selection()) goto event_1059_73_end;
        FrameObject * single_instance_1059_73_0; single_instance_1059_73_0 = pick_random(objectcrystal_279_instances);
        if (single_instance_1059_73_0 == NULL) goto event_1059_73_end;
        ((Active*)((Active*)single_instance_1059_73_0))->alterables->values.set(5, 1);
        ((Active*)get_instance(playercharactersensor_383_instances))->alterables->flags.enable(0);
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, get_min(((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)+5, 100));
        ((Active*)get_instance(guienergy_124_instances))->alterables->flags.enable(1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.add(9, 1);
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1059_73_end: ;
}
void Frames::loop_collect_item_73()
{
    event_func_1183();
    event_func_16057();
    event_func_1185();
    event_func_1186();
    event_func_1187();
    event_func_1188();
}
void Frames::event_func_16058()
{
    // event 926_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_926_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
        ((Active*)get_instance(playerskinsash_418_instances))->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+sin_deg(((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(3))*((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(4)*0.5);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+sin_deg(((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(3))*((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(4)*0.5);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+sin_deg(((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(3))*((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(4)*0.5);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+sin_deg(((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(3))*((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(4)*0.5);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+sin_deg(((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(3))*((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(4)*0.5);
        }
    }
    event_926_73_end: ;
}
void Frames::loop_reposition_skin_73()
{
    event_func_16058();
}
void Frames::event_func_16059()
{
    // event 69_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_69_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(0, str_player01allsensors_44);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(1, str_player01allsensors_44);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(2, str_player01allsensors_44);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(3, str_player01allsensors_44);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(4, str_player01allsensors_44);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(5, str_player01allsensors_44);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(6, str_player01allsensors_44);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(7, str_player01allsensors_44);
        ((Active*)get_instance(playercharactersensor_383_instances))->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
        ((Active*)get_instance(playercharactersensor_383_instances))->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
        ((Active*)get_instance(playercharactersensor_383_instances))->set_direction(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)/math_helper/11.25);
        ((Active*)get_instance(playerskinsash_418_instances))->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
        ((Active*)get_instance(playerskinsash_418_instances))->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
        }
    }
    event_69_73_end: ;
}
void Frames::loop_player01allsensors_73()
{
    event_func_16059();
}
void Frames::event_func_16060()
{
    // event 1789_73
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_1789_73_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play_id(SOUND_M_TARGET_283, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1789_73_end: ;
}
void Frames::loop_play_music_5_73()
{
    event_func_16060();
}
void Frames::event_func_16061()
{
    // event 1790_73
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_1790_73_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_target_ogg_265, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1790_73_end: ;
}
void Frames::loop_play_music_6_73()
{
    event_func_16061();
}
void Frames::event_func_16062()
{
    // event 1549_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_save_map_1)) goto event_1549_73_end;
        ((INI*)get_instance(ini_3855_instances))->delete_group(str_object_261+number_to_string(loop_clear_index));
    }
    event_1549_73_end: ;
}
void Frames::loop_clear_73()
{
    event_func_16062();
}
void Frames::event_func_16063()
{
    // event 1560_73
    {
        if (!(group_main_engine_1)) goto event_1560_73_end;
        customtile1_3799_instances.clear_selection();
        for (ObjectIterator it(customtile1_3799_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile2_3800_instances.clear_selection();
        for (ObjectIterator it(customtile2_3800_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile3_3801_instances.clear_selection();
        for (ObjectIterator it(customtile3_3801_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile4_3802_instances.clear_selection();
        for (ObjectIterator it(customtile4_3802_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile5_3803_instances.clear_selection();
        for (ObjectIterator it(customtile5_3803_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile6_3804_instances.clear_selection();
        for (ObjectIterator it(customtile6_3804_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile7_3805_instances.clear_selection();
        for (ObjectIterator it(customtile7_3805_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile8_3806_instances.clear_selection();
        for (ObjectIterator it(customtile8_3806_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile9_3807_instances.clear_selection();
        for (ObjectIterator it(customtile9_3807_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile10_3808_instances.clear_selection();
        for (ObjectIterator it(customtile10_3808_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile11_3809_instances.clear_selection();
        for (ObjectIterator it(customtile11_3809_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile12_3810_instances.clear_selection();
        for (ObjectIterator it(customtile12_3810_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile13_3811_instances.clear_selection();
        for (ObjectIterator it(customtile13_3811_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile14_3812_instances.clear_selection();
        for (ObjectIterator it(customtile14_3812_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile15_3813_instances.clear_selection();
        for (ObjectIterator it(customtile15_3813_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile16_3814_instances.clear_selection();
        for (ObjectIterator it(customtile16_3814_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile17_3815_instances.clear_selection();
        for (ObjectIterator it(customtile17_3815_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile18_3816_instances.clear_selection();
        for (ObjectIterator it(customtile18_3816_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile19_3817_instances.clear_selection();
        for (ObjectIterator it(customtile19_3817_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile20_3818_instances.clear_selection();
        for (ObjectIterator it(customtile20_3818_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile21_3819_instances.clear_selection();
        for (ObjectIterator it(customtile21_3819_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile22_3820_instances.clear_selection();
        for (ObjectIterator it(customtile22_3820_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile23_3821_instances.clear_selection();
        for (ObjectIterator it(customtile23_3821_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile24_3822_instances.clear_selection();
        for (ObjectIterator it(customtile24_3822_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile25_3823_instances.clear_selection();
        for (ObjectIterator it(customtile25_3823_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile26_3824_instances.clear_selection();
        for (ObjectIterator it(customtile26_3824_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile27_3825_instances.clear_selection();
        for (ObjectIterator it(customtile27_3825_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile28_3826_instances.clear_selection();
        for (ObjectIterator it(customtile28_3826_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        gimmickhangingidlebar_3827_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidlebar_3827_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        laddermaker_3828_instances.clear_selection();
        for (ObjectIterator it(laddermaker_3828_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        objecttargetmaker_3829_instances.clear_selection();
        for (ObjectIterator it(objecttargetmaker_3829_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        objectmonitormaker_3831_instances.clear_selection();
        for (ObjectIterator it(objectmonitormaker_3831_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        objectbombmaker_3832_instances.clear_selection();
        for (ObjectIterator it(objectbombmaker_3832_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        hazardspikesup_558_instances.clear_selection();
        for (ObjectIterator it(hazardspikesup_558_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        hazardspikesdown_559_instances.clear_selection();
        for (ObjectIterator it(hazardspikesdown_559_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        hazardspikesleft_560_instances.clear_selection();
        for (ObjectIterator it(hazardspikesleft_560_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        hazardspikesright_561_instances.clear_selection();
        for (ObjectIterator it(hazardspikesright_561_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        redspringup_440_instances.clear_selection();
        for (ObjectIterator it(redspringup_440_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        redspringleft_442_instances.clear_selection();
        for (ObjectIterator it(redspringleft_442_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        redspringright_441_instances.clear_selection();
        for (ObjectIterator it(redspringright_441_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        redspringdown_443_instances.clear_selection();
        for (ObjectIterator it(redspringdown_443_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        redspringupleft_439_instances.clear_selection();
        for (ObjectIterator it(redspringupleft_439_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        redspringupright_438_instances.clear_selection();
        for (ObjectIterator it(redspringupright_438_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        yellowspringup_434_instances.clear_selection();
        for (ObjectIterator it(yellowspringup_434_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        yellowspringleft_436_instances.clear_selection();
        for (ObjectIterator it(yellowspringleft_436_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        yellowspringright_435_instances.clear_selection();
        for (ObjectIterator it(yellowspringright_435_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        yellowspringdown_437_instances.clear_selection();
        for (ObjectIterator it(yellowspringdown_437_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        yellowspringupright_433_instances.clear_selection();
        for (ObjectIterator it(yellowspringupright_433_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        yellowspringupleft_432_instances.clear_selection();
        for (ObjectIterator it(yellowspringupleft_432_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        objectplatformmaker1_3838_instances.clear_selection();
        for (ObjectIterator it(objectplatformmaker1_3838_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        objectplatformmaker2_3839_instances.clear_selection();
        for (ObjectIterator it(objectplatformmaker2_3839_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelmovingplatform1_3840_instances.clear_selection();
        for (ObjectIterator it(levelmovingplatform1_3840_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        objectspiketrapmask_3836_instances.clear_selection();
        for (ObjectIterator it(objectspiketrapmask_3836_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        objectspiketrap_3835_instances.clear_selection();
        for (ObjectIterator it(objectspiketrap_3835_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile29_3837_instances.clear_selection();
        for (ObjectIterator it(customtile29_3837_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        laddertopmaker_3842_instances.clear_selection();
        for (ObjectIterator it(laddertopmaker_3842_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        gimmickspikechainmaker_3843_instances.clear_selection();
        for (ObjectIterator it(gimmickspikechainmaker_3843_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        startlocationmaker_3830_instances.clear_selection();
        for (ObjectIterator it(startlocationmaker_3830_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelmovingplatform2_940_instances.clear_selection();
        for (ObjectIterator it(levelmovingplatform2_940_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1560_73_end: ;
}
void Frames::loop_delete_73()
{
    event_func_16063();
}
void Frames::event_func_16064()
{
    // event 22_73
    {
        if (!(group_main_engine_1)) goto event_22_73_end;
        mastergroupsa_384_instances.clear_selection();
        for (ObjectIterator it(mastergroupsa_384_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0-atan_deg(((((Active*)*it)->alterables->values.get(1))*1.0)/math_helper/((((Active*)*it)->alterables->values.get(0))*1.0)));
        }
    }
    event_22_73_end: ;
}
void Frames::event_func_16065()
{
    // event 23_73
    {
        if (!(group_main_engine_1)) goto event_23_73_end;
        mastergroupsa_384_instances.clear_selection();
        for (ObjectIterator it(mastergroupsa_384_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (0))) { it.deselect(); continue; }
        }
        if (!mastergroupsa_384_instances.has_selection()) goto event_23_73_end;
        for (ObjectIterator it(mastergroupsa_384_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->alterables->values.get(2)+180);
        }
    }
    event_23_73_end: ;
}
void Frames::event_func_16066()
{
    // event 24_73
    {
        if (!(group_main_engine_1)) goto event_24_73_end;
        mastergroupsa_384_instances.clear_selection();
        for (ObjectIterator it(mastergroupsa_384_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (0.0))) { it.deselect(); continue; }
        }
        if (!mastergroupsa_384_instances.has_selection()) goto event_24_73_end;
        for (ObjectIterator it(mastergroupsa_384_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->alterables->values.get(2)+180);
        }
    }
    event_24_73_end: ;
}
void Frames::event_func_16067()
{
    // event 25_73
    {
        if (!(group_main_engine_1)) goto event_25_73_end;
        mastergroupsa_384_instances.clear_selection();
        for (ObjectIterator it(mastergroupsa_384_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0.0))) { it.deselect(); continue; }
        }
        if (!mastergroupsa_384_instances.has_selection()) goto event_25_73_end;
        for (ObjectIterator it(mastergroupsa_384_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 180);
        }
    }
    event_25_73_end: ;
}
void Frames::event_func_16068()
{
    // event 26_73
    {
        if (!(group_main_engine_1)) goto event_26_73_end;
        mastergroupsa_384_instances.clear_selection();
        for (ObjectIterator it(mastergroupsa_384_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0.0))) { it.deselect(); continue; }
        }
        if (!mastergroupsa_384_instances.has_selection()) goto event_26_73_end;
        for (ObjectIterator it(mastergroupsa_384_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 90);
        }
    }
    event_26_73_end: ;
}
void Frames::event_func_16069()
{
    // event 27_73
    {
        if (!(group_main_engine_1)) goto event_27_73_end;
        mastergroupsa_384_instances.clear_selection();
        for (ObjectIterator it(mastergroupsa_384_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (0.0))) { it.deselect(); continue; }
        }
        if (!mastergroupsa_384_instances.has_selection()) goto event_27_73_end;
        for (ObjectIterator it(mastergroupsa_384_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 270);
        }
    }
    event_27_73_end: ;
}
void Frames::loop_toolsanglecalculator_73()
{
    event_func_16064();
    event_func_16065();
    event_func_16066();
    event_func_16067();
    event_func_16068();
    event_func_16069();
}
void Frames::event_func_16070()
{
    // event 1772_73
    {
        if (!(group_main_engine_1)) goto event_1772_73_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) < (80))) goto event_1772_73_end;
        ((Active*)get_instance(guiscoretimerings_451_instances))->set_y(((Active*)get_instance(guiscoretimerings_451_instances))->get_y()-1);
        ((Active*)get_instance(guienergy_124_instances))->set_y(((Active*)get_instance(guienergy_124_instances))->get_y()-1);
        ((Counter*)get_instance(guirings_122_instances))->set_y(((Counter*)get_instance(guirings_122_instances))->get_y()-1);
        ((Counter*)get_instance(guilives_454_instances))->set_y(((Counter*)get_instance(guilives_454_instances))->get_y()-1);
        ((Active*)get_instance(guiicon_452_instances))->set_y(((Active*)get_instance(guiicon_452_instances))->get_y()-1);
        ((Active*)get_instance(guiicon_452_instances))->alterables->values.add(0, 1);
        guipowercard_457_instances.clear_selection();
        for (ObjectIterator it(guipowercard_457_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
        ((Active*)get_instance(guitimer_564_instances))->set_y(((Active*)get_instance(guitimer_564_instances))->get_y()-1);
        ((Counter*)get_instance(guitimerm_364_instances))->set_y(((Counter*)get_instance(guitimerm_364_instances))->get_y()-1);
        ((Counter*)get_instance(guitimers_362_instances))->set_y(((Counter*)get_instance(guitimers_362_instances))->get_y()-1);
        ((Counter*)get_instance(guitimermilli_360_instances))->set_y(((Counter*)get_instance(guitimermilli_360_instances))->get_y()-1);
        ((Counter*)get_instance(guitimermilli2_361_instances))->set_y(((Counter*)get_instance(guitimermilli2_361_instances))->get_y()-1);
        ((Counter*)get_instance(guitimers2_363_instances))->set_y(((Counter*)get_instance(guitimers2_363_instances))->get_y()-1);
        ((Counter*)get_instance(guitimerm2_365_instances))->set_y(((Counter*)get_instance(guitimerm2_365_instances))->get_y()-1);
    }
    event_1772_73_end: ;
}
void Frames::loop_gui_shiftup_73()
{
    event_func_16070();
}
void Frames::event_func_16071()
{
    // event 1432_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_load_stage_1)) goto event_1432_73_end;
        gimmickspikechainmaker_3843_instances.clear_selection();
        for (ObjectIterator it(gimmickspikechainmaker_3843_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (loop_sc_index))) { it.deselect(); continue; }
        }
        if (!gimmickspikechainmaker_3843_instances.has_selection()) goto event_1432_73_end;
        FrameObject * single_instance_1432_73_0; single_instance_1432_73_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gimmickspikechainmaker_3843_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickspikechain1_3844(parent->x + 16, parent->y + 16), parent->layer);
                if (single_instance_1432_73_0 == NULL)
                    single_instance_1432_73_0 = new_obj;
            }
        }
    }
    event_1432_73_end: ;
}
void Frames::event_func_16072()
{
    // event 1433_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_load_stage_1)) goto event_1433_73_end;
        gimmickspikechainmaker_3843_instances.clear_selection();
        for (ObjectIterator it(gimmickspikechainmaker_3843_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (loop_sc_index))) { it.deselect(); continue; }
        }
        if (!gimmickspikechainmaker_3843_instances.has_selection()) goto event_1433_73_end;
        FrameObject * single_instance_1433_73_0; single_instance_1433_73_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gimmickspikechainmaker_3843_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickspikechain1_3844(parent->x + 16, parent->y + 16), parent->layer);
                if (single_instance_1433_73_0 == NULL)
                    single_instance_1433_73_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1433_73_0))->alterables->values.set(3, 32);
    }
    event_1433_73_end: ;
}
void Frames::event_func_16073()
{
    // event 1434_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_load_stage_1)) goto event_1434_73_end;
        gimmickspikechainmaker_3843_instances.clear_selection();
        for (ObjectIterator it(gimmickspikechainmaker_3843_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (loop_sc_index))) { it.deselect(); continue; }
        }
        if (!gimmickspikechainmaker_3843_instances.has_selection()) goto event_1434_73_end;
        FrameObject * single_instance_1434_73_0; single_instance_1434_73_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gimmickspikechainmaker_3843_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickspikechain1_3844(parent->x + 16, parent->y + 16), parent->layer);
                if (single_instance_1434_73_0 == NULL)
                    single_instance_1434_73_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1434_73_0))->alterables->values.set(3, 64);
    }
    event_1434_73_end: ;
}
void Frames::event_func_16074()
{
    // event 1435_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_load_stage_1)) goto event_1435_73_end;
        gimmickspikechainmaker_3843_instances.clear_selection();
        for (ObjectIterator it(gimmickspikechainmaker_3843_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (loop_sc_index))) { it.deselect(); continue; }
        }
        if (!gimmickspikechainmaker_3843_instances.has_selection()) goto event_1435_73_end;
        FrameObject * single_instance_1435_73_0; single_instance_1435_73_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gimmickspikechainmaker_3843_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickspikechain1_3844(parent->x + 16, parent->y + 16), parent->layer);
                if (single_instance_1435_73_0 == NULL)
                    single_instance_1435_73_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1435_73_0))->alterables->values.set(3, 96);
    }
    event_1435_73_end: ;
}
void Frames::event_func_16075()
{
    // event 1436_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_load_stage_1)) goto event_1436_73_end;
        gimmickspikechainmaker_3843_instances.clear_selection();
        for (ObjectIterator it(gimmickspikechainmaker_3843_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (loop_sc_index))) { it.deselect(); continue; }
        }
        if (!gimmickspikechainmaker_3843_instances.has_selection()) goto event_1436_73_end;
        FrameObject * single_instance_1436_73_0; single_instance_1436_73_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gimmickspikechainmaker_3843_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickspikechain1_3844(parent->x + 16, parent->y + 16), parent->layer);
                if (single_instance_1436_73_0 == NULL)
                    single_instance_1436_73_0 = new_obj;
            }
        }
        for (ObjectIterator it(gimmickspikechainmaker_3843_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)((Active*)single_instance_1436_73_0))->alterables->values.set(3, 128);
    }
    event_1436_73_end: ;
}
void Frames::loop_sc_73()
{
    event_func_16071();
    event_func_16072();
    event_func_16073();
    event_func_16074();
    event_func_16075();
}
void Frames::event_func_16076()
{
    // event 1562_73
    {
        if (!(group_main_engine_1)) goto event_1562_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (1))) goto event_1562_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(0)) <= (0))) goto event_1562_73_end;
        customtile1_3799_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_customtile1_3799(-200, 0), 2);
            customtile1_3799_instances.add_back();
        }
        for (ObjectIterator it(customtile1_3799_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
    }
    event_1562_73_end: ;
}
void Frames::event_func_16077()
{
    // event 1563_73
    {
        if (!(group_main_engine_1)) goto event_1563_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (2))) goto event_1563_73_end;
        customtile2_3800_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_customtile2_3800(-200, 0), 2);
            customtile2_3800_instances.add_back();
        }
        for (ObjectIterator it(customtile2_3800_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
    }
    event_1563_73_end: ;
}
void Frames::event_func_16078()
{
    // event 1564_73
    {
        if (!(group_main_engine_1)) goto event_1564_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (3))) goto event_1564_73_end;
        customtile3_3801_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_customtile3_3801(-200, 0), 2);
            customtile3_3801_instances.add_back();
        }
        for (ObjectIterator it(customtile3_3801_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
    }
    event_1564_73_end: ;
}
void Frames::event_func_16079()
{
    // event 1565_73
    {
        if (!(group_main_engine_1)) goto event_1565_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (4))) goto event_1565_73_end;
        customtile4_3802_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_customtile4_3802(-200, 0), 2);
            customtile4_3802_instances.add_back();
        }
        for (ObjectIterator it(customtile4_3802_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
    }
    event_1565_73_end: ;
}
void Frames::event_func_16080()
{
    // event 1566_73
    {
        if (!(group_main_engine_1)) goto event_1566_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (5))) goto event_1566_73_end;
        customtile5_3803_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_customtile5_3803(-200, 0), 2);
            customtile5_3803_instances.add_back();
        }
        for (ObjectIterator it(customtile5_3803_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
    }
    event_1566_73_end: ;
}
void Frames::event_func_16081()
{
    // event 1567_73
    {
        if (!(group_main_engine_1)) goto event_1567_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (6))) goto event_1567_73_end;
        customtile6_3804_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_customtile6_3804(-200, 0), 2);
            customtile6_3804_instances.add_back();
        }
        for (ObjectIterator it(customtile6_3804_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
    }
    event_1567_73_end: ;
}
void Frames::event_func_16082()
{
    // event 1568_73
    {
        if (!(group_main_engine_1)) goto event_1568_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (7))) goto event_1568_73_end;
        customtile7_3805_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_customtile7_3805(-200, 0), 2);
            customtile7_3805_instances.add_back();
        }
        for (ObjectIterator it(customtile7_3805_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
    }
    event_1568_73_end: ;
}
void Frames::event_func_16083()
{
    // event 1569_73
    {
        if (!(group_main_engine_1)) goto event_1569_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (8))) goto event_1569_73_end;
        customtile8_3806_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_customtile8_3806(-200, 0), 2);
            customtile8_3806_instances.add_back();
        }
        for (ObjectIterator it(customtile8_3806_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
    }
    event_1569_73_end: ;
}
void Frames::event_func_16084()
{
    // event 1570_73
    {
        if (!(group_main_engine_1)) goto event_1570_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (9))) goto event_1570_73_end;
        customtile9_3807_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_customtile9_3807(-200, 0), 2);
            customtile9_3807_instances.add_back();
        }
        for (ObjectIterator it(customtile9_3807_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
    }
    event_1570_73_end: ;
}
void Frames::event_func_16085()
{
    // event 1571_73
    {
        if (!(group_main_engine_1)) goto event_1571_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (10))) goto event_1571_73_end;
        customtile10_3808_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_customtile10_3808(-200, 0), 2);
            customtile10_3808_instances.add_back();
        }
        for (ObjectIterator it(customtile10_3808_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
    }
    event_1571_73_end: ;
}
void Frames::event_func_16086()
{
    // event 1572_73
    {
        if (!(group_main_engine_1)) goto event_1572_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (11))) goto event_1572_73_end;
        customtile11_3809_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_customtile11_3809(-200, 0), 2);
            customtile11_3809_instances.add_back();
        }
        for (ObjectIterator it(customtile11_3809_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
    }
    event_1572_73_end: ;
}
void Frames::event_func_16087()
{
    // event 1573_73
    {
        if (!(group_main_engine_1)) goto event_1573_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (12))) goto event_1573_73_end;
        customtile12_3810_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_customtile12_3810(-200, 0), 2);
            customtile12_3810_instances.add_back();
        }
        for (ObjectIterator it(customtile12_3810_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
    }
    event_1573_73_end: ;
}
void Frames::event_func_16088()
{
    // event 1574_73
    {
        if (!(group_main_engine_1)) goto event_1574_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (13))) goto event_1574_73_end;
        customtile13_3811_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_customtile13_3811(-200, 0), 2);
            customtile13_3811_instances.add_back();
        }
        for (ObjectIterator it(customtile13_3811_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
    }
    event_1574_73_end: ;
}
void Frames::event_func_16089()
{
    // event 1575_73
    {
        if (!(group_main_engine_1)) goto event_1575_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (14))) goto event_1575_73_end;
        customtile14_3812_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_customtile14_3812(-200, 0), 2);
            customtile14_3812_instances.add_back();
        }
        for (ObjectIterator it(customtile14_3812_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
    }
    event_1575_73_end: ;
}
void Frames::event_func_16090()
{
    // event 1576_73
    {
        if (!(group_main_engine_1)) goto event_1576_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (15))) goto event_1576_73_end;
        customtile15_3813_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_customtile15_3813(-200, 0), 2);
            customtile15_3813_instances.add_back();
        }
        for (ObjectIterator it(customtile15_3813_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
    }
    event_1576_73_end: ;
}
void Frames::event_func_16091()
{
    // event 1577_73
    {
        if (!(group_main_engine_1)) goto event_1577_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (16))) goto event_1577_73_end;
        customtile16_3814_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_customtile16_3814(-200, 0), 2);
            customtile16_3814_instances.add_back();
        }
        for (ObjectIterator it(customtile16_3814_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
    }
    event_1577_73_end: ;
}
void Frames::event_func_16092()
{
    // event 1578_73
    {
        if (!(group_main_engine_1)) goto event_1578_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (17))) goto event_1578_73_end;
        customtile17_3815_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_customtile17_3815(-200, 0), 2);
            customtile17_3815_instances.add_back();
        }
        for (ObjectIterator it(customtile17_3815_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
    }
    event_1578_73_end: ;
}
void Frames::event_func_16093()
{
    // event 1579_73
    {
        if (!(group_main_engine_1)) goto event_1579_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (18))) goto event_1579_73_end;
        customtile18_3816_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_customtile18_3816(-200, 0), 2);
            customtile18_3816_instances.add_back();
        }
        for (ObjectIterator it(customtile18_3816_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
    }
    event_1579_73_end: ;
}
void Frames::event_func_16094()
{
    // event 1580_73
    {
        if (!(group_main_engine_1)) goto event_1580_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (19))) goto event_1580_73_end;
        customtile19_3817_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_customtile19_3817(-200, 0), 2);
            customtile19_3817_instances.add_back();
        }
        for (ObjectIterator it(customtile19_3817_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
    }
    event_1580_73_end: ;
}
void Frames::event_func_16095()
{
    // event 1581_73
    {
        if (!(group_main_engine_1)) goto event_1581_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (20))) goto event_1581_73_end;
        customtile20_3818_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_customtile20_3818(-200, 0), 2);
            customtile20_3818_instances.add_back();
        }
        for (ObjectIterator it(customtile20_3818_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
    }
    event_1581_73_end: ;
}
void Frames::event_func_16096()
{
    // event 1582_73
    {
        if (!(group_main_engine_1)) goto event_1582_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (21))) goto event_1582_73_end;
        customtile21_3819_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_customtile21_3819(-200, 0), 2);
            customtile21_3819_instances.add_back();
        }
        for (ObjectIterator it(customtile21_3819_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
    }
    event_1582_73_end: ;
}
void Frames::event_func_16097()
{
    // event 1583_73
    {
        if (!(group_main_engine_1)) goto event_1583_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (22))) goto event_1583_73_end;
        customtile22_3820_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_customtile22_3820(-200, 0), 2);
            customtile22_3820_instances.add_back();
        }
        for (ObjectIterator it(customtile22_3820_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
    }
    event_1583_73_end: ;
}
void Frames::event_func_16098()
{
    // event 1584_73
    {
        if (!(group_main_engine_1)) goto event_1584_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (23))) goto event_1584_73_end;
        customtile23_3821_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_customtile23_3821(-200, 0), 2);
            customtile23_3821_instances.add_back();
        }
        for (ObjectIterator it(customtile23_3821_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
    }
    event_1584_73_end: ;
}
void Frames::event_func_16099()
{
    // event 1585_73
    {
        if (!(group_main_engine_1)) goto event_1585_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (24))) goto event_1585_73_end;
        customtile24_3822_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_customtile24_3822(-200, 0), 2);
            customtile24_3822_instances.add_back();
        }
        for (ObjectIterator it(customtile24_3822_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
    }
    event_1585_73_end: ;
}
void Frames::event_func_16100()
{
    // event 1586_73
    {
        if (!(group_main_engine_1)) goto event_1586_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (25))) goto event_1586_73_end;
        customtile25_3823_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_customtile25_3823(-200, 0), 2);
            customtile25_3823_instances.add_back();
        }
        for (ObjectIterator it(customtile25_3823_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
    }
    event_1586_73_end: ;
}
void Frames::event_func_16101()
{
    // event 1587_73
    {
        if (!(group_main_engine_1)) goto event_1587_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (26))) goto event_1587_73_end;
        customtile26_3824_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_customtile26_3824(-200, 0), 2);
            customtile26_3824_instances.add_back();
        }
        for (ObjectIterator it(customtile26_3824_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
    }
    event_1587_73_end: ;
}
void Frames::event_func_16102()
{
    // event 1588_73
    {
        if (!(group_main_engine_1)) goto event_1588_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (27))) goto event_1588_73_end;
        customtile27_3825_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_customtile27_3825(-200, 0), 2);
            customtile27_3825_instances.add_back();
        }
        for (ObjectIterator it(customtile27_3825_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
    }
    event_1588_73_end: ;
}
void Frames::event_func_16103()
{
    // event 1589_73
    {
        if (!(group_main_engine_1)) goto event_1589_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (28))) goto event_1589_73_end;
        customtile28_3826_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_customtile28_3826(-200, 0), 2);
            customtile28_3826_instances.add_back();
        }
        for (ObjectIterator it(customtile28_3826_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
    }
    event_1589_73_end: ;
}
void Frames::event_func_16104()
{
    // event 1590_73
    {
        if (!(group_main_engine_1)) goto event_1590_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (29))) goto event_1590_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
        customtile29_3837_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_customtile29_3837(-200, 0), 2);
            customtile29_3837_instances.add_back();
        }
        for (ObjectIterator it(customtile29_3837_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
    }
    event_1590_73_end: ;
}
void Frames::event_func_16105()
{
    // event 1591_73
    {
        if (!(group_main_engine_1)) goto event_1591_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (101))) goto event_1591_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
        yellowspringup_434_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_yellowspringup_434(-200, 0), 2);
            yellowspringup_434_instances.add_back();
        }
        for (ObjectIterator it(yellowspringup_434_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
    }
    event_1591_73_end: ;
}
void Frames::event_func_16106()
{
    // event 1592_73
    {
        if (!(group_main_engine_1)) goto event_1592_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (102))) goto event_1592_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
        yellowspringdown_437_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_yellowspringdown_437(-200, 0), 2);
            yellowspringdown_437_instances.add_back();
        }
        for (ObjectIterator it(yellowspringdown_437_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
    }
    event_1592_73_end: ;
}
void Frames::event_func_16107()
{
    // event 1593_73
    {
        if (!(group_main_engine_1)) goto event_1593_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (103))) goto event_1593_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
        yellowspringleft_436_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_yellowspringleft_436(-200, 0), 2);
            yellowspringleft_436_instances.add_back();
        }
        for (ObjectIterator it(yellowspringleft_436_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
    }
    event_1593_73_end: ;
}
void Frames::event_func_16108()
{
    // event 1594_73
    {
        if (!(group_main_engine_1)) goto event_1594_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (104))) goto event_1594_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
        yellowspringright_435_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_yellowspringright_435(-200, 0), 2);
            yellowspringright_435_instances.add_back();
        }
        for (ObjectIterator it(yellowspringright_435_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
    }
    event_1594_73_end: ;
}
void Frames::event_func_16109()
{
    // event 1595_73
    {
        if (!(group_main_engine_1)) goto event_1595_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (105))) goto event_1595_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
        yellowspringupright_433_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_yellowspringupright_433(-200, 0), 2);
            yellowspringupright_433_instances.add_back();
        }
        for (ObjectIterator it(yellowspringupright_433_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
    }
    event_1595_73_end: ;
}
void Frames::event_func_16110()
{
    // event 1596_73
    {
        if (!(group_main_engine_1)) goto event_1596_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (106))) goto event_1596_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
        yellowspringupleft_432_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_yellowspringupleft_432(-200, 0), 2);
            yellowspringupleft_432_instances.add_back();
        }
        for (ObjectIterator it(yellowspringupleft_432_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
    }
    event_1596_73_end: ;
}
void Frames::event_func_16111()
{
    // event 1597_73
    {
        if (!(group_main_engine_1)) goto event_1597_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (107))) goto event_1597_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
        redspringup_440_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_redspringup_440(-200, 0), 2);
            redspringup_440_instances.add_back();
        }
        for (ObjectIterator it(redspringup_440_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
    }
    event_1597_73_end: ;
}
void Frames::event_func_16112()
{
    // event 1598_73
    {
        if (!(group_main_engine_1)) goto event_1598_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) == (108))) goto event_1598_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
        redspringdown_443_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_redspringdown_443(-200, 0), 2);
            redspringdown_443_instances.add_back();
        }
        for (ObjectIterator it(redspringdown_443_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
    }
    event_1598_73_end: ;
}
